// The edge targets' outputs (src/edge/edge-build.mjs writeEdgeOutput) from a
// stand-in Node build and linked program: the owned directory, the inlined
// Wasm, the build information, licences, builtin modules, the entries and
// configuration each platform needs, and the line the build prints.
import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync, mkdirSync, mkdtempSync, readFileSync, readdirSync, rmSync, writeFileSync } from 'node:fs';
import { join, relative } from 'node:path';
import { tmpdir } from 'node:os';
import { createHash } from 'node:crypto';
import { writeEdgeOutput, edgeTargets, edgeHostFiles, edgeModules, supabaseFunctionName, supabaseImportMap, workersConfig, workersEntry, edgeTargetSuspend, edgeProgramKey,
  workersCompatibilityDate } from '../src/edge/edge-build.mjs';
import { edgeLinkSettings } from '../src/edge/edge-link.mjs';
import { applicationNotices, leanRuntimeChanges, noticesSectionName } from '../src/notices.mjs';

const sha256 = bytes => createHash('sha256').update(bytes).digest('hex');
const emptyModule = Buffer.from([0x00, 0x61, 0x73, 0x6d, 0x01, 0x00, 0x00, 0x00]);
const nodeNotices = applicationNotices({ name: 'lean-4.36.0-rc2-wasm64', lean: '4.35.0', leanCommit: 'eb6cafb7290e8bd5f2937522d8d804f58f02bafc', emscripten: '6.0.9',
  libraries: ['Init', 'Std', 'Lean', 'leanrt', 'uv'].map(name => `lib/lib${name}.a`),
  patches: Object.fromEntries(Object.keys(leanRuntimeChanges).map(name => [name, '0'.repeat(64)])) },
['Lean', 'Emscripten', 'LLVM libc++', 'musl', 'mimalloc', 'libuv'].map(name => `=== ${name} ===\n${name} licence text\n`).join('\n'));

function fixture({ pkg = { name: '@me/Edge App' }, bindings = [] } = {}) {
  const root = mkdtempSync(join(tmpdir(), 'lasm-edge-output-'));
  const project = join(root, 'app');
  mkdirSync(project);
  if (pkg) writeFileSync(join(project, 'package.json'), JSON.stringify(pkg));
  writeFileSync(join(project, 'Main.lean'), 'def main : IO Unit := pure ()\n');
  const cached = join(project, '.lake/lasm/applications/0123/signature/dist');
  mkdirSync(cached, { recursive: true });
  writeFileSync(join(cached, 'THIRD_PARTY_NOTICES.txt'), nodeNotices);
  const program = join(root, 'program');
  mkdirSync(program);
  writeFileSync(join(program, 'program.mjs'), 'export default function createProgram() {}\n');
  writeFileSync(join(program, 'program.wasm'), emptyModule);
  const lines = [];
  return { root, project, lines, options: { source: join(project, 'Main.lean'), projectDirectory: project,
    result: { output: cached, cached, signature: 'signature', lean: '4.35.0', profile: 'release', jsBindings: bindings },
    edge: { manifest: { files: { 'libleanrt.a': 'abc' } } }, program: { directory: program, meta: { suspend: 'jspi', key: 'edge-key' } }, log: line => lines.push(line) } };
}

test('edge output: the program, its host and builtins, licences and build information', () => {
  const f = fixture({ bindings: [{ module: 'lasm:ui-dom' }, { module: 'hono' }] });
  try {
    const built = writeEdgeOutput({ ...f.options, target: 'bun' });
    const out = join(f.project, 'bun');
    assert.equal(built.output, out);
    assert.deepEqual(readdirSync(out).sort(), ['THIRD_PARTY_NOTICES.txt', 'build-info.json', 'lasm', 'main.mjs']);
    assert.deepEqual(readdirSync(join(out, 'lasm')).sort(), [...edgeHostFiles, 'modules', 'program.mjs', 'program.wasm'].sort());
    assert.deepEqual(readdirSync(join(out, 'lasm/modules')), ['ui-dom.mjs']);
    assert.equal(readFileSync(join(out, 'lasm/modules/ui-dom.mjs'), 'utf8'), readFileSync(new URL('../src/lasm-modules/ui-dom.mjs', import.meta.url), 'utf8'));
    for (const file of edgeHostFiles) assert.equal(readFileSync(join(out, 'lasm', file), 'utf8'), readFileSync(new URL('../src/edge/' + file, import.meta.url), 'utf8'));
    const notices = readFileSync(join(out, 'THIRD_PARTY_NOTICES.txt'), 'utf8');
    assert.ok(notices.includes('This Bun output was compiled by Lasm.'), 'the notices name the target');
    assert.ok(readFileSync(join(out, 'build-info.json'), 'utf8').endsWith('}\n'));
    const glue = readFileSync(join(out, 'lasm/program.mjs')), wasm = readFileSync(join(out, 'lasm/program.wasm'));
    assert.ok(glue.toString().endsWith('export default function createProgram() {}\n'));
    assert.match(glue.toString(), /THIRD_PARTY_NOTICES\.txt, also embedded in program\.wasm as its lasm\.notices section/);
    assert.match(glue.toString(), /Bun/);
    assert.deepEqual(WebAssembly.Module.customSections(new WebAssembly.Module(wasm), noticesSectionName).map(b => Buffer.from(b).toString()), [notices]);
    const info = JSON.parse(readFileSync(join(out, 'build-info.json'), 'utf8'));
    assert.deepEqual(info, { schema: 1, target: 'bun', profile: 'edge', buildProfile: 'release', experimental: false, nodeBuildSignature: 'signature', lean: '4.35.0',
      edgeRuntime: { 'libleanrt.a': 'abc' }, link: { ...edgeLinkSettings, suspend: 'jspi' }, wasm: 'lasm/program.wasm', programKey: 'edge-key', modules: ['hono', 'lasm:ui-dom'],
      files: { 'lasm/program.mjs': sha256(glue), 'lasm/program.wasm': sha256(wasm) } });
    assert.deepEqual(built.info, info);
    assert.equal(existsSync(out + '.lasm-staging'), false);
    assert.equal(f.lines[0], `Built ${relative(process.cwd(), f.options.source)} for Bun: ${relative(process.cwd(), out)} (program.wasm ${(wasm.length / 1048576).toFixed(2)} MiB; run it with bun bun/main.mjs)`);
    // A dev build says so; a reused program too. No builtins: no modules directory.
    const g = fixture();
    writeEdgeOutput({ ...g.options, result: { ...g.options.result, profile: 'dev' }, target: 'deno', cacheHit: true });
    assert.equal(JSON.parse(readFileSync(join(g.project, 'deno/build-info.json'), 'utf8')).buildProfile, 'dev');
    assert.equal(existsSync(join(g.project, 'deno/lasm/modules')), false);
    assert.match(g.lines[0], /^Reused .* for Deno: /);
    const h = fixture();
    writeEdgeOutput({ ...h.options, result: { ...h.options.result, profile: undefined, jsBindings: undefined }, target: 'deno' });
    assert.equal(JSON.parse(readFileSync(join(h.project, 'deno/build-info.json'), 'utf8')).buildProfile, 'release');
    rmSync(g.root, { recursive: true, force: true }); rmSync(h.root, { recursive: true, force: true });
  } finally { rmSync(f.root, { recursive: true, force: true }); }
});

test('edge output: inlined Wasm for Netlify and Supabase, fixed layouts beside the owned directory', () => {
  const f = fixture({ pkg: { name: 'web-app' } });
  try {
    writeEdgeOutput({ ...f.options, target: 'netlify-edge' });
    const owned = join(f.project, 'netlify/lasm');
    assert.equal(existsSync(join(owned, 'lasm/program.wasm')), false);
    const inlined = readFileSync(join(owned, 'lasm/program.wasm.mjs'), 'utf8');
    assert.match(inlined, /^\/\/ Generated by Lasm: program\.wasm as base64 \(\d+ bytes\)/);
    assert.equal(JSON.parse(readFileSync(join(owned, 'build-info.json'), 'utf8')).wasm, 'lasm/program.wasm.mjs');
    assert.match(readFileSync(join(f.project, 'netlify/edge-functions/lasm.mjs'), 'utf8'), /^\/\/ Generated by Lasm \(lasm build --target netlify-edge\)/);
    assert.match(f.lines[0], /for Netlify Edge: .*; the edge function is netlify\/edge-functions\/lasm\.mjs\)$/);
    // An entry the project wrote itself is never replaced.
    writeFileSync(join(f.project, 'netlify/edge-functions/lasm.mjs'), 'export default () => new Response("mine");\n');
    assert.throws(() => writeEdgeOutput({ ...f.options, target: 'netlify-edge' }), /lasm\.mjs exists and was not generated by Lasm; remove or rename it/);
    // Supabase: supabase/functions/<name>/ with index.ts and deno.json.
    writeEdgeOutput({ ...f.options, target: 'supabase-edge' });
    const fn = join(f.project, 'supabase/functions/web-app');
    assert.deepEqual(readdirSync(fn).sort(), ['THIRD_PARTY_NOTICES.txt', 'build-info.json', 'deno.json', 'index.ts', 'lasm']);
    assert.deepEqual(JSON.parse(readFileSync(join(fn, 'deno.json'), 'utf8')), { imports: {} });
    assert.ok(readFileSync(join(fn, 'deno.json'), 'utf8').endsWith('}\n'));
    assert.ok(existsSync(join(fn, 'lasm/program.wasm.mjs')));
    assert.match(f.lines.at(-1), /for Supabase Edge Functions: .*; deploy it with supabase functions deploy web-app\)$/);
    // Vercel: api/lasm.mjs, api/_lasm/ and the Build Output API function.
    writeEdgeOutput({ ...f.options, target: 'vercel-edge' });
    assert.ok(existsSync(join(f.project, 'api/_lasm/lasm/program.wasm')));
    assert.ok(existsSync(join(f.project, '.vercel/output/functions/api/lasm.func/api/lasm.mjs')));
    assert.match(f.lines.at(-1), /the function is api\/lasm\.mjs \(also \.vercel\/output\/functions\/api\/lasm\.func\)\)$/);
  } finally { rmSync(f.root, { recursive: true, force: true }); }
});

test('edge output: Workers configuration when the project has none, and the hint when it has its own', () => {
  const f = fixture({ pkg: { name: '@scope/' + 'A very long Worker name, with punctuation!'.repeat(2) } });
  try {
    writeEdgeOutput({ ...f.options, target: 'workers' });
    const out = join(f.project, 'workers');
    const config = readFileSync(join(out, 'wrangler.toml'), 'utf8');
    const name = 'a-very-long-worker-name-with-punctuation-a-very-long-worker-name-with-punctuation'.slice(0, 54);
    assert.equal(config, workersConfig(name));
    assert.match(config, new RegExp(`^name = "${name}"$`, 'm'));
    assert.match(config, new RegExp(`^compatibility_date = "${workersCompatibilityDate}"$`, 'm'));
    assert.match(config, /^fallthrough = false$/m);
    assert.equal(readFileSync(join(out, 'worker.mjs'), 'utf8'), workersEntry([]));
    assert.match(f.lines[0], /for Cloudflare Workers: [^;]* \(program\.wasm \d+\.\d\d MiB\)$/, 'no hint without a project configuration');
    // A project configuration: no generated one (also none left from the build before, docs/release/0.6.1-notes.md),
    // and a hint about what it must contain.
    for (const [file, text, hint] of [['wrangler.toml', 'main = "workers/worker.mjs"\n[[rules]]\ntype = "CompiledWasm"\n', 'run it with npx wrangler dev (wrangler.toml)'],
      ['wrangler.json', '{"main":"workers/worker.mjs"}', 'your wrangler.json must use main = "workers/worker.mjs" and the CompiledWasm rule'],
      ['wrangler.jsonc', '// CompiledWasm only\n{}', 'your wrangler.jsonc must use main = "workers/worker.mjs" and the CompiledWasm rule']]) {
      for (const other of ['wrangler.toml', 'wrangler.json', 'wrangler.jsonc']) rmSync(join(f.project, other), { force: true });
      writeFileSync(join(f.project, file), text);
      writeEdgeOutput({ ...f.options, target: 'workers' });
      assert.equal(existsSync(join(out, 'wrangler.toml')), false, file);
      assert.ok(f.lines.at(-1).endsWith(`; ${hint})`), f.lines.at(-1));
    }
    // No package.json name: the directory's; nothing usable: lasm-app.
    const g = fixture({ pkg: null });
    writeEdgeOutput({ ...g.options, target: 'workers' });
    assert.match(readFileSync(join(g.project, 'workers/wrangler.toml'), 'utf8'), /^name = "app"$/m);
    const h = fixture({ pkg: { name: '!!!' } });
    writeEdgeOutput({ ...h.options, target: 'workers' });
    assert.match(readFileSync(join(h.project, 'workers/wrangler.toml'), 'utf8'), /^name = "lasm-app"$/m);
    rmSync(g.root, { recursive: true, force: true }); rmSync(h.root, { recursive: true, force: true });
  } finally { rmSync(f.root, { recursive: true, force: true }); }
});

test('edge output: unknown targets, directories holding the sources and directories Lasm does not own', () => {
  const f = fixture();
  try {
    assert.throws(() => writeEdgeOutput({ ...f.options, target: 'lambda' }), { message: 'Unknown edge target lambda' });
    assert.throws(() => writeEdgeOutput({ ...f.options, target: 'bun', output: f.project }), { message: 'The edge output directory must not contain the Lean sources' });
    assert.throws(() => writeEdgeOutput({ ...f.options, target: 'bun', output: f.root }), /must not contain the Lean sources/);
    const mine = join(f.project, 'bun');
    mkdirSync(mine);
    writeFileSync(join(mine, 'build-info.json'), JSON.stringify({ profile: 'wasi' }));
    assert.throws(() => writeEdgeOutput({ ...f.options, target: 'bun' }), /exists and is not a Lasm edge build/);
    writeFileSync(join(mine, 'build-info.json'), 'not json');
    assert.throws(() => writeEdgeOutput({ ...f.options, target: 'bun' }), /is not a Lasm edge build/);
    writeFileSync(join(mine, 'build-info.json'), JSON.stringify({ profile: 'edge' }));
    writeFileSync(join(mine, 'stale.txt'), 'old');
    writeEdgeOutput({ ...f.options, target: 'bun' });
    assert.equal(existsSync(join(mine, 'stale.txt')), false, 'an earlier edge build is replaced');
    // An unchanged rebuild leaves the entry alone.
    const before = readFileSync(join(mine, 'main.mjs'));
    writeEdgeOutput({ ...f.options, target: 'bun' });
    assert.deepEqual(readFileSync(join(mine, 'main.mjs')), before);
  } finally { rmSync(f.root, { recursive: true, force: true }); }
});

test('edge modules and Supabase import maps: configuration checks, exclusions and pinned versions', () => {
  const root = mkdtempSync(join(tmpdir(), 'lasm-edge-modules-'));
  try {
    assert.deepEqual(edgeModules(root, [{ module: 'b' }, { module: 'a' }, { module: '' }, {}, { module: 'globalThis' }, { module: 'b' }]), ['a', 'b']);
    assert.deepEqual(edgeModules(root), []);
    for (const edge of [{ modules: 'x' }, { exclude: 'x' }, { modules: [''] }, { exclude: [3] }, { modules: [null] }])
      { writeFileSync(join(root, 'package.json'), JSON.stringify({ lasm: { edge } }));
        assert.throws(() => edgeModules(root, []), { message: `package.json "lasm.edge.${Object.keys(edge)[0]}" must be an array of module names` }); }
    writeFileSync(join(root, 'package.json'), JSON.stringify({ lasm: { edge: { modules: ['z', 'a'] } } }));
    assert.deepEqual(edgeModules(root, [{ module: 'm' }]), ['a', 'm', 'z']);
    writeFileSync(join(root, 'package.json'), JSON.stringify({ lasm: {} }));
    assert.deepEqual(edgeModules(root, [{ module: 'm' }]), ['m']);
    writeFileSync(join(root, 'package.json'), JSON.stringify({}));
    assert.deepEqual(edgeModules(root, [{ module: 'm' }]), ['m']);
    // Only npm modules are pinned; versions come from node_modules here or in a directory above (workspaces).
    const project = join(root, 'packages/app');
    mkdirSync(join(root, 'node_modules/@s/pkg'), { recursive: true });
    writeFileSync(join(root, 'node_modules/@s/pkg/package.json'), JSON.stringify({ version: '2.0.0' }));
    mkdirSync(join(project, 'node_modules/hono'), { recursive: true });
    writeFileSync(join(project, 'node_modules/hono/package.json'), JSON.stringify({ version: '4.1.0' }));
    const skipped = ['node:fs', 'npm:x@1', 'jsr:@std/path', 'https://esm.sh/x', 'http://x/y.js', 'data:text/javascript,1', 'lasm:ui-dom', './local.mjs', '/abs.mjs'];
    assert.deepEqual(supabaseImportMap(project, [...skipped, 'hono', 'hono/jsx', '@s/pkg/sub/path', '@s/pkg']),
      { imports: { hono: 'npm:hono@4.1.0', 'hono/': 'npm:hono@4.1.0/', '@s/pkg': 'npm:@s/pkg@2.0.0', '@s/pkg/': 'npm:@s/pkg@2.0.0/' } });
    const asked = [];
    supabaseImportMap(project, ['a', 'a/b', 'a'], name => { asked.push(name); return '1.0.0'; });
    assert.deepEqual(asked, ['a'], 'each package once');
  } finally { rmSync(root, { recursive: true, force: true }); }
  // Suspension per target, and the cache key's inputs.
  assert.equal(edgeTargetSuspend('nope'), 'jspi');
  assert.equal(edgeTargetSuspend('netlify-edge'), 'jspi');
  const result = { signature: 'a' }, edge = { identity: 'e' };
  const key = edgeProgramKey({ result, edge });
  assert.match(key, /^[0-9a-f]{64}$/);
  assert.equal(edgeProgramKey({ result, edge, suspend: 'jspi' }), key, 'JSPI by default');
  assert.notEqual(edgeProgramKey({ result: { signature: 'b' }, edge }), key);
  assert.notEqual(edgeProgramKey({ result, edge: { identity: 'f' } }), key);
  // Every target is supported, with a label and a summary naming its directory.
  for (const [name, target] of Object.entries(edgeTargets)) {
    assert.equal(target.supported, true, name);
    assert.ok(target.label && target.summary.length > 20, name);
  }
});

test('edge output: each portable target\'s entry, the host files, and an unchanged rebuild that rewrites nothing', async () => {
  const { utimesSync, statSync } = await import('node:fs');
  const { portableEntry, supabaseEntry } = await import('../src/edge/edge-build.mjs');
  assert.deepEqual(edgeHostFiles, ['edge-start.mjs', 'edge-host.mjs', 'edge-js.mjs']);
  const f = fixture({ pkg: { name: 'fn' } });
  try {
    for (const [target, directory, files, hint] of [
      ['bun', 'bun', ['main.mjs'], 'run it with bun bun/main.mjs'],
      ['deno', 'deno', ['main.mjs'], 'run it with deno run -A deno/main.mjs'],
      ['deno-deploy', 'deno', ['main.mjs'], 'the entrypoint is deno/main.mjs (deno run -A deno/main.mjs locally)'],
      ['workers', 'workers', ['worker.mjs', 'wrangler.toml'], null],
      ['supabase-edge', 'supabase/functions/fn', ['index.ts', 'deno.json'], 'deploy it with supabase functions deploy fn']]) {
      writeEdgeOutput({ ...f.options, target });
      const out = join(f.project, directory);
      if (target === 'supabase-edge') assert.equal(readFileSync(join(out, 'index.ts'), 'utf8'), supabaseEntry([], 'fn'));
      else if (target !== 'workers') assert.equal(readFileSync(join(out, 'main.mjs'), 'utf8'), portableEntry(target, []));
      if (hint) assert.ok(f.lines.at(-1).endsWith(`; ${hint})`), f.lines.at(-1));
      // An unchanged rebuild keeps every file, entries included, as they were.
      const past = new Date(Date.now() - 3600_000);
      const kept = [...files, 'lasm/program.mjs', 'build-info.json'];
      for (const file of kept) utimesSync(join(out, file), past, past);
      writeEdgeOutput({ ...f.options, target });
      for (const file of kept) assert.equal(statSync(join(out, file)).mtimeMs, past.getTime(), `${target}: ${file}`);
    }
    // The run hint of each portable target names its command.
    assert.ok(portableEntry('bun', []).includes('(bun bun/main.mjs [arguments…])'));
    for (const target of ['deno', 'deno-deploy']) assert.ok(portableEntry(target, []).includes('(deno run -A deno/main.mjs [arguments…])'), target);
  } finally { rmSync(f.root, { recursive: true, force: true }); }
});

test('edge output: Vercel routes, a hand-written entry that only ends like a generated one, and names Workers accepts', () => {
  const f = fixture({ pkg: { name: 'a@b/c' } });
  try {
    writeEdgeOutput({ ...f.options, target: 'vercel-edge' });
    assert.deepEqual(JSON.parse(readFileSync(join(f.project, '.vercel/output/config.json'), 'utf8')), { version: 3, routes: [{ handle: 'filesystem' }, { src: '/(.*)', dest: '/api/lasm' }] });
    assert.deepEqual(JSON.parse(readFileSync(join(f.project, '.vercel/output/functions/api/lasm.func/.vc-config.json'), 'utf8')), { runtime: 'edge', entrypoint: 'api/lasm.mjs' });
    writeFileSync(join(f.project, 'api/lasm.mjs'), 'export default 1;\n// Generated by Lasm (lasm build --target ');
    assert.throws(() => writeEdgeOutput({ ...f.options, target: 'vercel-edge' }), /exists and was not generated by Lasm/);
    writeEdgeOutput({ ...f.options, target: 'workers' });
    assert.match(readFileSync(join(f.project, 'workers/wrangler.toml'), 'utf8'), /^name = "a-b-c"$/m, 'only a leading scope is dropped');
    const g = fixture({ pkg: { name: '--x--' } });
    writeEdgeOutput({ ...g.options, target: 'workers' });
    assert.match(readFileSync(join(g.project, 'workers/wrangler.toml'), 'utf8'), /^name = "x"$/m);
    rmSync(g.root, { recursive: true, force: true });
    // A source outside the project does not make the project directory an output.
    assert.throws(() => writeEdgeOutput({ ...f.options, source: join(f.root, 'elsewhere.lean'), target: 'bun', output: f.project }), /must not contain the Lean sources/);
  } finally { rmSync(f.root, { recursive: true, force: true }); }
  assert.match(workersCompatibilityDate, /^\d{4}-\d{2}-\d{2}$/);
});

// Found by the project-files fuzz target (test/fuzz/targets/project-files.mjs).
test('a package.json that is not a JSON object is refused with a message naming it', () => {
  const root = mkdtempSync(join(tmpdir(), 'lasm-edge-package-'));
  try {
    for (const text of ['null', '[]', '"app"', '{"name": "app"']) {
      writeFileSync(join(root, 'package.json'), text);
      for (const read of [() => edgeModules(root, []), () => supabaseFunctionName(root)])
        assert.throws(read, error => error.constructor === Error && error.message.includes(join(root, 'package.json')), text);
    }
    writeFileSync(join(root, 'package.json'), '{"name": 5, "lasm": null}');
    assert.deepEqual(edgeModules(root, []), []);
    assert.equal(supabaseFunctionName(root), 'lasm-5');
  } finally { rmSync(root, { recursive: true, force: true }); }
});
