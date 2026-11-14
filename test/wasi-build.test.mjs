// WASI builds (src/wasi/wasi-build.mjs): the program's cache identity and its
// cache beside the Node build (linked by the stand-in toolchain of
// test/fixtures/link-stand-ins), the Fastly service name and fastly.toml, and
// the output of each WASI target: files, build information, licences, the
// Fastly package and the line the build prints.
import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync, mkdirSync, mkdtempSync, readFileSync, readdirSync, rmSync, writeFileSync } from 'node:fs';
import { basename, dirname, join, relative } from 'node:path';
import { tmpdir } from 'node:os';
import { createHash } from 'node:crypto';
import { wasiProgramKey, cachedWasiProgram, linkCachedWasiProgram, fastlyName, fastlyToml, writeWasiOutput, wasiTargets } from '../src/wasi/wasi-build.mjs';
import { wasiLinkSettings } from '../src/wasi/wasi-link.mjs';
import { mimallocSources } from '../src/mimalloc/mimalloc.mjs';
import { applicationNotices, leanRuntimeChanges, noticesSectionName } from '../src/notices.mjs';
import { responseFile } from '../src/platform.mjs';
import { installTools, wasmObject, temporaryDirectory } from './fixtures/link-stand-ins/toolchain.mjs';

const posix = process.platform !== 'win32';
const sha256 = bytes => createHash('sha256').update(bytes).digest('hex');
const emptyModule = Buffer.from([0x00, 0x61, 0x73, 0x6d, 0x01, 0x00, 0x00, 0x00]);
const nodeNotices = applicationNotices({ name: 'lean-4.35.0-wasm64', lean: '4.35.0', leanCommit: 'eb6cafb7290e8bd5f2937522d8d804f58f02bafc', emscripten: '6.0.9',
  libraries: ['Init', 'Std', 'Lean', 'leanrt', 'uv'].map(name => `lib/lib${name}.a`),
  patches: Object.fromEntries(Object.keys(leanRuntimeChanges).map(name => [name, '0'.repeat(64)])) },
['Lean', 'Emscripten', 'LLVM libc++', 'musl', 'mimalloc', 'libuv'].map(name => `=== ${name} ===\n${name} licence text\n`).join('\n'));
const customSections = (bytes, name) => WebAssembly.Module.customSections(new WebAssembly.Module(bytes), name).map(b => Buffer.from(b).toString('utf8'));

test('wasiProgramKey: every input of the WASI program is part of its identity', () => {
  const base = { result: { signature: 'node' }, edge: { identity: 'edge' }, toolchain: { toolchain: 'clang-20' }, target: 'wasi' };
  const key = wasiProgramKey(base);
  assert.match(key, /^[0-9a-f]{64}$/);
  assert.equal(wasiProgramKey({ ...base }), key, 'deterministic');
  const variants = [
    { ...base, target: 'fastly' }, { ...base, target: 'wasi-http' }, { ...base, result: { signature: 'other' } }, { ...base, edge: { identity: 'other' } },
    { ...base, toolchain: { toolchain: 'clang-21' } }, { ...base, toolchain: undefined }, { ...base, toolchain: {} }];
  const keys = variants.map(wasiProgramKey);
  assert.equal(new Set([key, ...keys]).size, variants.length, 'each input changes the key (no toolchain and a toolchain without a name agree)');
  assert.equal(wasiProgramKey({ ...base, toolchain: undefined }), wasiProgramKey({ ...base, toolchain: {} }));
  // The fields, as the cache identity records them (schema 1).
  const sources = ['lasm_wasi.c', 'lasm_wasi_libc.c', 'lasm_fetch_wasi.c', 'lasm_wasi_http.c', 'lasm_wasi.h', 'wasi-link.mjs', 'lower-atomics.mjs',
    'wasi-component.mjs', 'component/proxy-template.wasm', 'lasm_wasi_http_imports.h', '../../library/c/lasm_fastly.c',
    '../../library/c/lasm_wasi_http_bindings.c', ...mimallocSources.map(file => `../mimalloc/${file}`)];
  const here = new URL('../src/wasi/', import.meta.url);
  assert.equal(key, sha256(JSON.stringify({ schema: 1, target: 'wasi', node: 'node', runtime: 'edge', settings: wasiLinkSettings.wasi, toolchain: 'clang-20',
    sources: Object.fromEntries(sources.map(file => [file, sha256(readFileSync(new URL(file, here)))])) })));
});

/** A Node build in a project's build cache with the link inputs the WASI link reads (stand-in toolchain). */
function linkFixture() {
  const base = temporaryDirectory('lasm-wasi-build-');
  const tools = installTools(join(base, 'toolchain'));
  const toolchain = { prefix: tools.prefix, cache: join(base, 'toolchain-cache'), env: { ...process.env, LASM_STAND_IN_SDK: '1' }, toolchain: 'stand-in' };
  const linkWork = join(base, 'link');
  mkdirSync(linkWork, { recursive: true });
  const main = join(linkWork, 'module-0.o');
  writeFileSync(main, wasmObject({ functions: [{ name: '__main_argc_argv', refs: ['fd_write'] }], imports: { fd_write: 'wasi_snapshot_preview1' } }));
  writeFileSync(join(linkWork, 'link.rsp'), responseFile([main, '-Oz', '-sMEMORY64=1', 'program.cjs']));
  const nodeRuntime = { directory: join(base, 'node-runtime'), manifest: { libraries: [] } };
  const edge = { identity: 'edge', sysroot: { cache: join(base, 'edge-cache'), directory: 'wasm64-emscripten' }, libraries: {} };
  const cached = join(base, 'project/.lake/lasm/applications/0123/signature/dist');
  mkdirSync(cached, { recursive: true });
  const result = { cached, signature: 'node', linkWork };
  return { base, tools, toolchain, nodeRuntime, edge, result, root: target => join(base, 'project/.lake/lasm/applications/0123/wasi', target) };
}

test('linkCachedWasiProgram caches the linked program beside the Node build; cachedWasiProgram finds it while it is intact', { skip: !posix }, () => {
  const f = linkFixture();
  try {
    const options = { result: f.result, nodeRuntime: f.nodeRuntime, edge: f.edge, toolchain: f.toolchain, target: 'wasi' };
    const key = wasiProgramKey(options);
    assert.equal(cachedWasiProgram(f.result, 'wasi', key), null, 'nothing cached yet');
    // A staging directory an interrupted build of this process left behind is replaced.
    mkdirSync(join(f.root('wasi'), `.${key}.${process.pid}.partial`, 'old'), { recursive: true });
    const linked = linkCachedWasiProgram({ ...options, key });
    const directory = join(f.root('wasi'), key);
    assert.equal(linked.directory, directory);
    const wasm = readFileSync(join(directory, 'main.wasm'));
    assert.ok(WebAssembly.validate(wasm));
    assert.deepEqual(linked.meta, { key, target: 'wasi', sha256: sha256(wasm) });
    assert.equal(readFileSync(join(directory, 'program.json'), 'utf8'), JSON.stringify(linked.meta, null, 2) + '\n');
    // Only the program and its record: the link's work directory and the staging directory are gone.
    assert.deepEqual(readdirSync(directory).sort(), ['main.wasm', 'program.json']);
    assert.deepEqual(readdirSync(f.root('wasi')), [key]);
    assert.deepEqual(cachedWasiProgram(f.result, 'wasi', key), linked);
    assert.equal(cachedWasiProgram(f.result, 'fastly', key), null, 'cached per target');
    assert.equal(f.tools.calls('wasm-ld').length, 1);

    // A newer key supersedes the older program; entries starting with a dot (other builds' staging) stay.
    mkdirSync(join(f.root('wasi'), '.other.partial'));
    const next = linkCachedWasiProgram({ ...options, key: 'b'.repeat(64) });
    assert.deepEqual(readdirSync(f.root('wasi')).sort(), ['.other.partial', 'b'.repeat(64)]);
    assert.equal(cachedWasiProgram(f.result, 'wasi', key), null);
    assert.deepEqual(cachedWasiProgram(f.result, 'wasi', 'b'.repeat(64)), next);

    // A changed program, or a record of another key, is not reused.
    const at = join(f.root('wasi'), 'b'.repeat(64));
    writeFileSync(join(at, 'main.wasm'), Buffer.concat([readFileSync(join(at, 'main.wasm')), Buffer.from([0])]));
    assert.equal(cachedWasiProgram(f.result, 'wasi', 'b'.repeat(64)), null);
    const relinked = linkCachedWasiProgram({ ...options, key: 'b'.repeat(64) });
    assert.deepEqual(cachedWasiProgram(f.result, 'wasi', 'b'.repeat(64)), relinked);
    writeFileSync(join(at, 'program.json'), JSON.stringify({ ...relinked.meta, key: 'c'.repeat(64) }));
    assert.equal(cachedWasiProgram(f.result, 'wasi', 'b'.repeat(64)), null);
    writeFileSync(join(at, 'program.json'), '{');
    assert.equal(cachedWasiProgram(f.result, 'wasi', 'b'.repeat(64)), null);
  } finally { rmSync(f.base, { recursive: true, force: true }); }
});

test('linkCachedWasiProgram: a failed link leaves the cache as it was; a build without link inputs is an internal error', { skip: !posix }, () => {
  const f = linkFixture();
  try {
    const options = { result: f.result, nodeRuntime: f.nodeRuntime, edge: f.edge, toolchain: f.toolchain, target: 'wasi' };
    const first = linkCachedWasiProgram({ ...options, key: 'a'.repeat(64) });
    f.tools.fail('wasm-ld', 'wasm-ld: error: stand-in failure\n');
    assert.throws(() => linkCachedWasiProgram({ ...options, key: 'd'.repeat(64) }), error => /stand-in failure/.test(String(error.stderr)));
    assert.deepEqual(readdirSync(f.root('wasi')), ['a'.repeat(64)], 'no staging directory is left');
    assert.deepEqual(cachedWasiProgram(f.result, 'wasi', 'a'.repeat(64)), first);
    assert.throws(() => linkCachedWasiProgram({ ...options, result: { ...f.result, linkWork: undefined }, key: 'e'.repeat(64) }),
      { message: 'The WASI build needs the Node build\'s link inputs (internal error)' });
  } finally { rmSync(f.base, { recursive: true, force: true }); }
});

test('fastlyName: the package name as Fastly allows it, else the directory, else lasm-app', () => {
  const root = mkdtempSync(join(tmpdir(), 'lasm-fastly-name-'));
  try {
    const at = (directory, pkg) => { const d = join(root, directory); mkdirSync(d, { recursive: true }); if (pkg) writeFileSync(join(d, 'package.json'), JSON.stringify(pkg)); return fastlyName(d); };
    assert.equal(at('a', { name: '@scope/My App' }), 'my-app');
    assert.equal(at('b', { name: 'Web.Server_2' }), 'web-server_2');
    assert.equal(at('c', { name: '--x--' }), 'x');
    assert.equal(at('d', { name: '***' }), 'lasm-app');
    assert.equal(at('E Dir', { version: '1.0.0' }), 'e-dir', 'a package.json without a name: the directory');
    assert.equal(at('Plain'), 'plain', 'no package.json: the directory');
    assert.equal(at('f', { name: 'a@b/c' }), 'a-b-c', 'only a leading scope is dropped');
    assert.equal(at('g', { name: 'My  App!!' }), 'my-app', 'a run of other characters is one dash');
  } finally { rmSync(root, { recursive: true, force: true }); }
});

test('fastly.toml: the manifest fastly compute build runs Lasm with', () => {
  assert.equal(fastlyToml('my-app', 'npx lasm build Main.lean --target fastly'), `# Fastly Compute (Lasm): \`npx lasm build Main.lean --target fastly\` writes bin/main.wasm and pkg/my-app.tar.gz.
# Run locally with \`fastly compute serve\` (Fastly's Viceroy); deploy with
# \`fastly compute deploy\`. See https://github.com/Millillion/lasm/blob/main/docs/deploy/fastly.md
manifest_version = 3
name = "my-app"
description = "A Lean program compiled to WebAssembly by Lasm"
authors = []
language = "other"

[scripts]
build = "npx lasm build Main.lean --target fastly"
`);
  assert.match(fastlyToml('x'), /^build = "npm run build:fastly"$/m);
});

/** A project with a Lean source, a stand-in Node build and a stand-in linked program. */
function outputFixture(pkg = { name: 'my-app' }) {
  const root = mkdtempSync(join(tmpdir(), 'lasm-wasi-output-'));
  const project = join(root, 'app');
  mkdirSync(project);
  if (pkg) writeFileSync(join(project, 'package.json'), JSON.stringify(pkg));
  writeFileSync(join(project, 'Main.lean'), 'def main : IO Unit := pure ()\n');
  const cached = join(project, '.lake/lasm/applications/0123/signature/dist');
  mkdirSync(cached, { recursive: true });
  writeFileSync(join(cached, 'THIRD_PARTY_NOTICES.txt'), nodeNotices);
  const program = join(root, 'program');
  mkdirSync(program);
  writeFileSync(join(program, 'main.wasm'), emptyModule);
  const lines = [];
  return { root, project, lines, options: { source: join(project, 'Main.lean'), projectDirectory: project,
    result: { output: cached, cached, signature: 'signature', lean: '4.35.0' }, edge: { manifest: { files: { 'libleanrt.a': 'abc' } } },
    program: { directory: program, meta: { key: 'wasi-key' } }, log: line => lines.push(line) } };
}

test('writeWasiOutput: main.wasm with its notices, the build information and the run hint, per target', async () => {
  for (const target of ['wasi', 'wasi-http']) {
    const f = outputFixture();
    try {
      const built = await writeWasiOutput({ ...f.options, target });
      const destination = join(f.project, target);
      assert.deepEqual(built.output, destination);
      assert.equal(built.wasm, join(destination, 'main.wasm'));
      assert.deepEqual(readdirSync(destination).sort(), ['THIRD_PARTY_NOTICES.txt', 'build-info.json', 'main.wasm']);
      const wasm = readFileSync(built.wasm), notices = readFileSync(join(destination, 'THIRD_PARTY_NOTICES.txt'), 'utf8');
      assert.deepEqual(customSections(wasm, noticesSectionName), [notices], 'the licences are inside main.wasm too');
      assert.ok(notices.includes(`This ${wasiTargets[target].label} output was compiled by Lasm.`), 'the notices name the target');
      const info = { schema: 1, target, profile: 'wasi', abi: 'wasi_snapshot_preview1', nodeBuildSignature: 'signature', lean: '4.35.0',
        edgeRuntime: { 'libleanrt.a': 'abc' }, link: wasiLinkSettings[target], programKey: 'wasi-key', wasm: 'main.wasm', sha256: sha256(wasm) };
      assert.deepEqual(built.info, info);
      assert.equal(readFileSync(join(destination, 'build-info.json'), 'utf8'), JSON.stringify(info, null, 2) + '\n');
      assert.equal(existsSync(destination + '.lasm-staging'), false);
      const hint = target === 'wasi' ? 'run it with wasmtime, wasmer or node:wasi' : 'serve it with wasmtime serve or Spin';
      assert.deepEqual(f.lines, [`Built ${relative(process.cwd(), f.options.source)} for ${wasiTargets[target].label}: ${relative(process.cwd(), built.wasm)}`
        + ` (${(wasm.length / 1048576).toFixed(2)} MiB; ${hint}; guide: https://github.com/Millillion/lasm/blob/main/docs/WASI.md)`]);
      // A rebuild replaces Lasm's own output; a reused program says so.
      writeFileSync(join(destination, 'stale.txt'), 'old');
      await writeWasiOutput({ ...f.options, target, cacheHit: true });
      assert.equal(existsSync(join(destination, 'stale.txt')), false);
      assert.match(f.lines[1], /^Reused /);
    } finally { rmSync(f.root, { recursive: true, force: true }); }
  }
});

test('writeWasiOutput refuses unknown targets, outputs holding the sources and directories it does not own', async () => {
  const f = outputFixture();
  try {
    await assert.rejects(writeWasiOutput({ ...f.options, target: 'wasi-p3' }), { message: 'Unknown WASI target wasi-p3' });
    await assert.rejects(writeWasiOutput({ ...f.options, target: 'wasi', output: f.project }), /must not contain the Lean sources/);
    await assert.rejects(writeWasiOutput({ ...f.options, target: 'wasi', output: f.root }), /must not contain the Lean sources/);
    // A source outside the project does not make the project directory an output.
    const elsewhere = join(f.root, 'elsewhere.lean');
    await assert.rejects(writeWasiOutput({ ...f.options, source: elsewhere, target: 'wasi', output: f.project }), /must not contain the Lean sources/);
    // A staging directory an interrupted build left behind is replaced.
    mkdirSync(join(f.project, 'wasi.lasm-staging', 'old'), { recursive: true });
    await writeWasiOutput({ ...f.options, target: 'wasi' });
    assert.equal(existsSync(join(f.project, 'wasi.lasm-staging')), false);
    rmSync(join(f.project, 'wasi'), { recursive: true });
    // Beside the sources is fine.
    const beside = join(f.root, 'beside');
    assert.equal((await writeWasiOutput({ ...f.options, target: 'wasi', output: beside })).output, beside);
    const mine = join(f.project, 'wasi');
    mkdirSync(mine);
    writeFileSync(join(mine, 'build-info.json'), JSON.stringify({ profile: 'edge' }));
    await assert.rejects(writeWasiOutput({ ...f.options, target: 'wasi' }), /exists and is not a Lasm WASI build/);
    writeFileSync(join(mine, 'build-info.json'), '{');
    await assert.rejects(writeWasiOutput({ ...f.options, target: 'wasi' }), /is not a Lasm WASI build/);
    // A main.wasm alone is another toolchain's Fastly output only for --target fastly.
    rmSync(mine, { recursive: true });
    mkdirSync(mine);
    writeFileSync(join(mine, 'main.wasm'), 'x');
    await assert.rejects(writeWasiOutput({ ...f.options, target: 'wasi' }), /is not a Lasm WASI build/);
    assert.ok(existsSync(join(mine, 'main.wasm')), 'left alone');
  } finally { rmSync(f.root, { recursive: true, force: true }); }
});

test('writeWasiOutput --target fastly: bin/main.wasm, fastly.toml when missing and the package fastly compute pack writes', async () => {
  const tar = await import('tar');
  const entries = async file => { const list = []; await tar.list({ file, onReadEntry: entry => list.push([entry.path, entry.mtime?.getTime() ?? null, entry.size]) }); return list; };
  const f = outputFixture({ name: '@me/Edge App' });
  try {
    // An earlier main.wasm alone in bin/ (another toolchain's) is replaced.
    mkdirSync(join(f.project, 'bin'));
    writeFileSync(join(f.project, 'bin/main.wasm'), 'old');
    const built = await writeWasiOutput({ ...f.options, target: 'fastly' });
    const bin = join(f.project, 'bin');
    assert.equal(built.output, bin);
    assert.deepEqual(readdirSync(bin).sort(), ['THIRD_PARTY_NOTICES.txt', 'lasm-build-info.json', 'main.wasm']);
    assert.equal(JSON.parse(readFileSync(join(bin, 'lasm-build-info.json'), 'utf8')).target, 'fastly');
    assert.equal(readFileSync(join(f.project, 'fastly.toml'), 'utf8'), fastlyToml('edge-app', 'npx lasm build Main.lean --target fastly'));
    const pkg = join(f.project, 'pkg/edge-app.tar.gz');
    const wasm = readFileSync(built.wasm), notices = readFileSync(join(bin, 'THIRD_PARTY_NOTICES.txt'));
    // Reproducible: the source date on files, and portable directory entries (no times).
    const fixed = Date.UTC(1980, 0, 1);
    assert.deepEqual(await entries(pkg), [['edge-app/', null, 0], ['edge-app/fastly.toml', fixed, readFileSync(join(f.project, 'fastly.toml')).length],
      ['edge-app/THIRD_PARTY_NOTICES.txt', fixed, notices.length], ['edge-app/bin/', null, 0], ['edge-app/bin/main.wasm', fixed, wasm.length]]);
    const unpacked = join(f.root, 'unpacked');
    mkdirSync(unpacked);
    await tar.extract({ file: pkg, cwd: unpacked });
    assert.ok(readFileSync(join(unpacked, 'edge-app/bin/main.wasm')).equals(wasm));
    assert.deepEqual(readdirSync(join(f.project, 'pkg')), ['edge-app.tar.gz'], 'the staging directory is gone');
    assert.ok(f.lines[0].endsWith(`(${(wasm.length / 1048576).toFixed(2)} MiB; package ${relative(process.cwd(), pkg)}; run locally with fastly compute serve)`), f.lines[0]);
    assert.ok(f.lines[0].startsWith(`Built ${relative(process.cwd(), f.options.source)} for Fastly Compute: ${relative(process.cwd(), built.wasm)} (`), f.lines[0]);
    // The project's own fastly.toml is kept, and its service name names the package.
    writeFileSync(join(f.project, 'fastly.toml'), 'manifest_version = 3\nservice_name = "other"\n  name = "My  Service!!"\n');
    // A package staging directory an interrupted build left behind is replaced.
    mkdirSync(join(f.project, 'pkg', `.My-Service-.${process.pid}`, 'old'), { recursive: true });
    await writeWasiOutput({ ...f.options, target: 'fastly' });
    assert.equal(readFileSync(join(f.project, 'fastly.toml'), 'utf8'), 'manifest_version = 3\nservice_name = "other"\n  name = "My  Service!!"\n');
    assert.ok(existsSync(join(f.project, 'pkg/My-Service-.tar.gz')));
    assert.deepEqual((await entries(join(f.project, 'pkg/My-Service-.tar.gz'))).map(e => e[0])[1], 'My-Service-/fastly.toml');
    assert.equal(existsSync(join(f.project, 'pkg', `.My-Service-.${process.pid}`)), false);
    writeFileSync(join(f.project, 'fastly.toml'), 'name="Tight"\n');
    await writeWasiOutput({ ...f.options, target: 'fastly' });
    assert.ok(existsSync(join(f.project, 'pkg/Tight.tar.gz')));
    // Without a name in it: the package name.
    writeFileSync(join(f.project, 'fastly.toml'), 'manifest_version = 3\n');
    await writeWasiOutput({ ...f.options, target: 'fastly' });
    assert.ok(existsSync(join(f.project, 'pkg/edge-app.tar.gz')));
    // bin/ with other files is not Lasm's.
    writeFileSync(join(bin, 'other.txt'), 'x');
    rmSync(join(bin, 'lasm-build-info.json'));
    await assert.rejects(writeWasiOutput({ ...f.options, target: 'fastly' }), /is not a Lasm WASI build/);
  } finally { rmSync(f.root, { recursive: true, force: true }); }
});

test('WASI targets: labels, summaries and output directories', () => {
  assert.deepEqual(Object.fromEntries(Object.entries(wasiTargets).map(([name, t]) => [name, [t.label, t.output]])),
    { wasi: ['WASI', 'wasi'], fastly: ['Fastly Compute', 'bin'], 'wasi-http': ['wasi-http', 'wasi-http'] });
  for (const t of Object.values(wasiTargets)) assert.ok(t.summary.includes(t.output + '/'), t.summary);
  assert.equal(basename(dirname(join('a', 'b'))), 'a');
});

// Found by the project-files fuzz target (test/fuzz/targets/project-files.mjs).
test('fastlyName refuses a package.json that is not a JSON object, naming it', () => {
  const root = mkdtempSync(join(tmpdir(), 'lasm-fastly-name-'));
  try {
    for (const text of ['null', '[]', '{"name": "app"']) {
      writeFileSync(join(root, 'package.json'), text);
      assert.throws(() => fastlyName(root), error => error.constructor === Error && error.message.includes(join(root, 'package.json')), text);
    }
    writeFileSync(join(root, 'package.json'), '{"name": "@scope/My App"}');
    assert.equal(fastlyName(root), 'my-app');
  } finally { rmSync(root, { recursive: true, force: true }); }
});
