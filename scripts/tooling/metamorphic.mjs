// Claim 4 (docs/TESTING.md#metamorphic-build-tests): relations between builds
// of `lasm build` and `lasm dev` that must hold without knowing the right
// output. For each target and profile, on a small Lake project:
//   determinism   two clean builds in different directories give the same bytes;
//   cache state   a clean build with a cold tool cache gives the same bytes;
//   incremental   edit, build: the same bytes as a clean build of the edited
//                 project; revert, build: the original bytes again;
//   rename file   renaming a module nothing imports changes no byte;
//   rename def    renaming a definition nothing uses changes no byte except the
//                 source hashes recorded in JSON metadata (dev builds keep
//                 function names: there the program must behave the same);
//   touch         touching sources without changing them rebuilds nothing
//                 (no link) and leaves the output files untouched;
//   lasm dev      one watching session per target and profile (devSession):
//                 its first build, an edit, a touch, a renamed module, a revert
//                 and a second edit saved by rename, each compared with clean
//                 builds; then lasm build reuses the session's build.
// Dev rebuilds start from the previous build's initialization plan: where
// their bytes differ from a clean build, both outputs run (node, node:wasi,
// the Worker's program on Node, headless Chromium) and must print the same.
//
//   node scripts/tooling/metamorphic.mjs --lasm PATH/bin/lasm.mjs \
//     [--targets node,wasi,workers,browser] [--profiles release,dev] [--playwright DIR] [--work DIR] [--report FILE]
import { cpSync, mkdirSync, readFileSync, readdirSync, renameSync, utimesSync, writeFileSync } from 'node:fs';
import { spawn, spawnSync } from 'node:child_process';
import { dirname, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { runLasm, baseEnvironment, temporaryDirectory, writeTree, removeTree, treeHashes, treeTimes, treeDifferences, options, summary, tail } from './lib.mjs';

const fixture = {
  'lean-toolchain': 'leanprover/lean4:v4.35.0\n',
  'lakefile.toml': 'name = "app"\nversion = "0.1.0"\ndefaultTargets = ["app"]\n\n[[lean_lib]]\nname = "App"\n\n[[lean_exe]]\nname = "app"\nroot = "Main"\n',
  'App.lean': 'import App.Greeting\n',
  'App/Greeting.lean': 'def greeting (name : String) : String := s!"Hello, {name}!"\n\ndef unusedHelper (n : Nat) : Nat := n * 3 + 1\n',
  'Main.lean': 'import App\n\ndef main : IO Unit := IO.println (greeting "world")\n',
  'Notes.lean': '-- Not imported by anything.\ndef notes : Nat := 1\n',
  'README.md': 'A metamorphic test fixture.\n',
};
const edit = text => text.replace('Hello, ', 'Hi there, ');
const renameDefinition = text => text.replace('unusedHelper', 'spareHelper');
// Work that a no-op rebuild must not do. "Linking" covers every target's link.
const rebuildStage = /\bLinking\b|Generating Lean C|Compiling application module/i;
// Output metadata that records source hashes (build-info.json): the only bytes
// a renamed, unused definition may change.
// Input fingerprints that output metadata records (build-info.json and the
// manifests of the edge, WASI and browser outputs), plus receipt entries
// (files.<name>) of metadata files that differ only in those.
const sourceHashKeys = new Set(['sourceSha256', 'cSha256', 'signature', 'nodeBuildSignature', 'programKey']);

/** Where the first differing file present in both trees differs (text: a window around it). */
function explain(a, b, dirA, dirB) {
  // Content-hashed names (app.<12 hex>.js) are paired by their name without the hash.
  const plain = name => name.replace(/\.[0-9a-f]{12}\./, '.#.');
  const pairs = [];
  for (const name of Object.keys(a)) {
    if (name in b) { if (a[name] !== b[name]) pairs.push([name, name]); continue; }
    const other = Object.keys(b).find(n => !(n in a) && plain(n) === plain(name));
    if (other) pairs.push([name, other]);
  }
  pairs.sort(([x], [y]) => Number(/\.(?:br|gz|wasm)$/.test(x)) - Number(/\.(?:br|gz|wasm)$/.test(y)) || Number(!/\.[0-9a-f]{12}\./.test(x)) - Number(!/\.[0-9a-f]{12}\./.test(y)));
  const lines = [];
  for (const [name, other] of pairs.slice(0, 3)) {
    const x = readFileSync(join(dirA, name)), y = readFileSync(join(dirB, other));
    let at = 0; while (at < x.length && at < y.length && x[at] === y[at]) at++;
    const text = /\.(?:m?js|json|html|css|txt|cjs)$/.test(name);
    const window = buffer => JSON.stringify(buffer.subarray(Math.max(0, at - 80), at + 120).toString(text ? 'utf8' : 'hex'));
    lines.push(`\n        ${name}: ${x.length} vs ${y.length} bytes, first difference at byte ${at}\n          before: ${window(x)}\n          after:  ${window(y)}`);
  }
  return lines.join('');
}

/** The JSON paths at which two values differ. */
function jsonDifferences(a, b, path = '$') {
  if (JSON.stringify(a) === JSON.stringify(b)) return [];
  if (a && b && typeof a === 'object' && typeof b === 'object' && Array.isArray(a) === Array.isArray(b))
    return [...new Set([...Object.keys(a), ...Object.keys(b)])].flatMap(key => jsonDifferences(a[key], b[key], `${path}.${key}`));
  return [path];
}

/** Programs that run each target's output and print what the program wrote
 * and its exit status: node (main.mjs), wasi (node:wasi, as the differential's
 * wasi-node), workers (the Worker's own program, host and edge-start.mjs on
 * Node, as scripts/edge/check-worker.mjs), the browser (headless Chromium
 * through scripts/differential/browser-runner.mjs; needs --playwright). */
function writeRunners(directory, playwright) {
  writeFileSync(join(directory, 'wasi.mjs'), `const emit = process.emitWarning;
process.emitWarning = (w, ...r) => (r[0] === 'ExperimentalWarning' || r[0]?.type === 'ExperimentalWarning') ? undefined : emit.call(process, w, ...r);
const { WASI } = await import('node:wasi');
const { readFileSync } = await import('node:fs');
const [file] = process.argv.slice(2);
const wasi = new WASI({ version: 'preview1', args: [file], env: {}, preopens: { '.': process.cwd() }, returnOnExit: true });
const instance = await WebAssembly.instantiate(await WebAssembly.compile(readFileSync(file)), wasi.getImportObject());
process.exitCode = wasi.start(instance);
`);
  writeFileSync(join(directory, 'workers.mjs'), `const { readFileSync } = await import('node:fs');
const { join } = await import('node:path');
const { pathToFileURL } = await import('node:url');
const [dir] = process.argv.slice(2);
const info = JSON.parse(readFileSync(join(dir, 'build-info.json'), 'utf8'));
const { startLean } = await import(pathToFileURL(join(dir, 'lasm/edge-start.mjs')).href);
const createProgram = (await import(pathToFileURL(join(dir, 'lasm/program.mjs')).href)).default;
const bytes = info.wasm.endsWith('.mjs') ? (await import(pathToFileURL(join(dir, info.wasm)).href)).default : readFileSync(join(dir, info.wasm));
const lean = await startLean({ createProgram, wasmModule: await WebAssembly.compile(bytes), jspi: info.link?.suspend !== 'asyncify',
  stdout: line => process.stdout.write(line + '\\n'), stderr: line => process.stderr.write(line + '\\n') });
const code = lean.lasmExitCode ?? 0;
process.stdout.write('', () => process.exit(code));
`);
  const browserRunner = join(dirname(fileURLToPath(import.meta.url)), '../differential/browser-runner.mjs');
  return {
    node: dir => [process.execPath, [join(dir, 'main.mjs')]],
    wasi: dir => [process.execPath, ['--no-warnings', join(directory, 'wasi.mjs'), join(dir, readdirSync(dir).find(name => name.endsWith('.wasm')))]],
    workers: dir => [process.execPath, ['--no-warnings', join(directory, 'workers.mjs'), dir]],
    directory,
    browser: playwright ? dir => [process.execPath, [browserRunner, '--browser', 'chromium', '--playwright', playwright, '--dist', dir]] : undefined,
  };
}

/** What an output prints when run, and its exit status. */
async function behaviour(target, directory, runners) {
  const runner = runners[target];
  if (!runner) return { unavailable: `no runner for ${target}${target === 'browser' ? ' (pass --playwright DIR)' : ''}` };
  const [command, args] = runner(directory);
  const r = spawnSync(command, args, { encoding: 'utf8', timeout: 180_000, cwd: directory, env: baseEnvironment() });
  return { text: `${r.stdout}${r.stderr ? ' stderr:' + r.stderr : ''} (exit ${r.status}${r.signal ? ', ' + r.signal : ''})` };
}

function withoutSourceHashes(value) {
  if (Array.isArray(value)) return value.map(withoutSourceHashes);
  if (value && typeof value === 'object') return Object.fromEntries(Object.entries(value).filter(([k]) => !sourceHashKeys.has(k)).map(([k, v]) => [k, withoutSourceHashes(v)]));
  return value;
}

export async function runMetamorphic({ lasm, targets, profiles, work, playwright, log = console.log }) {
  const results = [];
  const runners = writeRunners(temporaryDirectory('runners', work), playwright);
  const record = (target, profile, relation, problems, detail = '') => {
    results.push({ target, profile, relation, status: problems.length ? 'failed' : 'passed', problems });
    log(`${problems.length ? 'FAIL ' : 'ok   '} ${target}/${profile} ${relation}${detail ? ` (${detail})` : ''}${problems.length ? ':\n      ' + problems.join('\n      ') : ''}`);
  };
  const coldCache = temporaryDirectory('cold-cache', work);
  try {
    for (const target of targets) for (const profile of profiles) {
      // Edge, WASI and browser builds write their platform directory (workers/,
      // wasi/, dist/) by default; node gets --output dist explicitly.
      const out = { node: 'dist', browser: 'dist', wasi: 'wasi', workers: 'workers' }[target] ?? target;
      const flags = ['--target', target, ...(target === 'node' ? ['--output', 'dist'] : []), ...(profile === 'dev' ? ['--dev'] : []),
        ...(profile === 'dev' && !['node', 'browser', 'wasi'].includes(target) ? ['--allow-dev'] : [])];
      const projects = [];
      // Every project is a directory named app (in its own parent): a browser
      // build names the app after its directory, which is input like a source.
      const project = () => { const parent = temporaryDirectory(`mm-${target}-${profile}`, work), d = join(parent, 'app'); mkdirSync(d); writeTree(d, fixture); projects.push(parent); return d; };
      // output: another --output (node's lasm dev snapshots, outside the project).
      const build = async (directory, env = {}, { output } = {}) => {
        const args = output ? [...flags.filter((f, i) => f !== '--output' && flags[i - 1] !== '--output'), '--output', output] : flags;
        const result = await runLasm(lasm, ['build', 'Main.lean', ...args], { cwd: directory, env, timeoutMs: 1_200_000 });
        if (result.code !== 0) throw new Error(`lasm build ${args.join(' ')} failed in ${directory} (exit ${result.code}${result.timedOut ? ', timed out' : ''}):\n${tail(result.stdout + result.stderr, 30)}`);
        const where = output ?? join(directory, out);
        return { hashes: treeHashes(where), times: treeTimes(where), text: result.stdout + result.stderr, ms: result.ms };
      };
      /** Both outputs run (behaviour.mjs-style runners per target) and print the same. */
      const behaviourProblems = async (label, dirA, dirB) => {
        const [x, y] = [await behaviour(target, dirA, runners), await behaviour(target, dirB, runners)];
        if (x.unavailable || y.unavailable) return [`${label}: the outputs differ and their behaviour cannot be compared here: ${x.unavailable ?? y.unavailable}`];
        log(`     ${target}/${profile} ${label}: both print ${JSON.stringify(x.text)}`);
        return x.text === y.text ? [] : [`${label}: the programs behave differently: ${JSON.stringify(x.text)} vs ${JSON.stringify(y.text)}`];
      };
      const same = (a, b, label, dirA, dirB) => {
        const d = treeDifferences(a, b);
        return d.length ? [`${label}: ${d.length} files differ: ${d.slice(0, 12).join('; ')}${dirA && dirB ? explain(a, b, dirA, dirB) : ''}`] : [];
      };
      try {
        const a = project();
        const original = await build(a);
        const reference = temporaryDirectory(`mm-reference-${target}-${profile}`, work); projects.push(reference);
        cpSync(join(a, out), join(reference, out), { recursive: true, verbatimSymlinks: true });
        const ref = join(reference, out);
        log(`     ${target}/${profile}: clean build ${(original.ms / 1000).toFixed(1)} s, ${Object.keys(original.hashes).length} files`);

        const b = project();
        record(target, profile, 'determinism', same(original.hashes, (await build(b)).hashes, 'two clean builds', ref, join(b, out)));

        const c = project();
        record(target, profile, 'cache state', same(original.hashes, (await build(c, { LASM_TOOLCHAIN_CACHE: coldCache })).hashes, 'cold tool cache vs warm', ref, join(c, out)));

        // Nothing changed at all, then sources touched without a change.
        const again = await build(a);
        const touchProblems = [];
        if (rebuildStage.test(again.text)) touchProblems.push(`an unchanged rebuild did work: ${tail(again.text, 6)}`);
        const later = new Date(Date.now() + 5_000);
        for (const name of ['Main.lean', 'App.lean', 'App/Greeting.lean', 'lakefile.toml']) utimesSync(join(a, name), later, later);
        const touched = await build(a);
        if (rebuildStage.test(touched.text)) touchProblems.push(`touching the sources rebuilt: ${tail(touched.text, 6)}`);
        touchProblems.push(...same(original.hashes, touched.hashes, 'after touch', ref, join(a, out)));
        const moved = Object.keys(original.times).filter(name => touched.times[name] !== original.times[name]);
        if (moved.length) touchProblems.push(`touch rewrote ${moved.length} output files: ${moved.slice(0, 6).join(', ')}`);
        record(target, profile, 'touch', touchProblems, `${(touched.ms / 1000).toFixed(1)} s`);

        renameSync(join(a, 'Notes.lean'), join(a, 'Scratch.lean'));
        record(target, profile, 'rename file', same(original.hashes, (await build(a)).hashes, 'after renaming an unimported module', ref, join(a, out)));
        renameSync(join(a, 'Scratch.lean'), join(a, 'Notes.lean'));

        const greeting = join(a, 'App/Greeting.lean'), text = readFileSync(greeting, 'utf8');
        writeFileSync(greeting, renameDefinition(text));
        const renamed = await build(a);
        const renameProblems = [];
        const changed = treeDifferences(original.hashes, renamed.hashes).map(line => line.split(':')[0]);
        const metadataOnly = new Set(), jsonPaths = new Map();
        for (const name of changed) {
          if (!name.endsWith('.json') || !(name in original.hashes) || !(name in renamed.hashes)) continue;
          const before = JSON.parse(readFileSync(join(ref, name), 'utf8')), after = JSON.parse(readFileSync(join(a, out, name), 'utf8'));
          const paths = jsonDifferences(withoutSourceHashes(before), withoutSourceHashes(after));
          jsonPaths.set(name, paths);
          if (!paths.length) metadataOnly.add(name);
        }
        for (const name of changed) {
          if (metadataOnly.has(name)) continue;
          const paths = jsonPaths.get(name);
          // A receipt's entry for a metadata file that differs only in fingerprints.
          const rest = paths?.filter(path => !(path.startsWith('$.files.') && metadataOnly.has(path.slice('$.files.'.length))));
          if (paths && !rest.length) continue;
          renameProblems.push(paths ? `${name} changed beyond source hashes, at ${rest.slice(0, 6).join(', ')}` : `${name} changed`);
        }
        // The dev profile keeps function names in the module (a name section) and
        // skips dead-code elimination, so a renamed definition shows there by design.
        if (profile === 'release') record(target, profile, 'rename def', renameProblems);
        else {
          // There the program must still behave the same.
          log(`     ${target}/${profile} rename def (names are kept in dev builds): ${renameProblems.length ? renameProblems.join('; ') : 'no change'}`);
          record(target, profile, 'rename def', renameProblems.length ? await behaviourProblems('after renaming an unused definition', ref, join(a, out)) : []);
        }
        writeFileSync(greeting, text);

        writeFileSync(greeting, edit(text));
        const incremental = await build(a);
        const d = project(); writeFileSync(join(d, 'App/Greeting.lean'), edit(text));
        const clean = await build(d);
        // Release builds plan initialization from the roots alone (byte-reproducible);
        // dev rebuilds start from the previous build's plan (src/application-initialization.mjs),
        // so a dev incremental build must behave like a clean one, not match its bytes.
        const equivalent = async (label, hashesA, hashesB, dirA, dirB) => {
          const bytes = same(hashesA, hashesB, label, dirA, dirB);
          if (!bytes.length || profile === 'release') return bytes;
          log(`     ${target}/${profile} ${label}: bytes differ (dev rebuilds are seeded by the previous build); comparing behaviour`);
          return behaviourProblems(label, dirA, dirB);
        };
        const incrementalProblems = await equivalent('incremental vs clean', clean.hashes, incremental.hashes, join(d, out), join(a, out));
        if (!treeDifferences(original.hashes, incremental.hashes).length) incrementalProblems.push('the edit changed no output byte (the build reused a stale result)');
        writeFileSync(greeting, text);
        incrementalProblems.push(...await equivalent('after reverting the edit', original.hashes, (await build(a)).hashes, ref, join(a, out)));
        record(target, profile, 'incremental', incrementalProblems);

        // lasm dev has no wasi target (src/dev.mjs devTargets): lasm build covers WASI.
        if (target === 'wasi') log(`     wasi/${profile} lasm dev: not applicable (lasm dev has no wasi target)`);
        else record(target, profile, 'lasm dev', await devSession({ lasm, target, profile, out, flags, project, build, equivalent, text, work, log,
          references: { original: { hashes: original.hashes, dir: ref }, edited: { hashes: clean.hashes, dir: join(d, out) } } }));
      } catch (error) {
        record(target, profile, 'run', [error.message]);
      } finally { for (const d of projects) removeTree(d); }
    }
  } finally { removeTree(coldCache); removeTree(runners.directory); }
  return results;
}

/** One `lasm dev` session (dev or --release profile) driven like an editor:
 * every step's output is compared with clean `lasm build`s.
 *   first build   equals a clean build of the project;
 *   edit          (written in place) rebuilt: equals a clean build of the edit;
 *   touch         no rebuild, no output file rewritten;
 *   rename file   an unimported module renamed: the output keeps every byte;
 *   revert        saved the way many editors save (a new file renamed over the
 *                 old one): rebuilt, equals the original clean build;
 *   edit again    saved that way again: still seen, rebuilt, equals the edit's;
 *   lasm build    afterwards reuses the session's build (node: without linking).
 * Release sessions must match byte for byte; dev rebuilds start from the previous
 * build's initialization plan, so their bytes may differ and then the
 * behaviour must be the same (`equivalent`). Outputs are read where lasm dev
 * writes them (wasi/, workers/, the browser's .lake/lasm/browser-dev or dist/);
 * a node session's build is in the build cache, so `lasm build --output`
 * outside the project copies it, which must not link. */
async function devSession({ lasm, target, profile, out, flags, project, build, references, equivalent, text, work, log }) {
  const directory = project(), problems = [];
  const parent = join(directory, '..');
  const browser = target === 'browser';
  const devOutput = browser ? join(directory, profile === 'release' ? 'dist' : '.lake/lasm/browser-dev') : target === 'node' ? undefined : join(directory, out);
  const args = ['dev', 'Main.lean', ...(target === 'node' ? [] : ['--target', target]), ...(profile === 'release' ? ['--release'] : []),
    ...(browser ? ['--port', '0'] : ['--no-run'])];
  const child = spawn(process.execPath, [lasm, ...args],
    { cwd: directory, env: baseEnvironment(), stdio: ['pipe', 'pipe', 'pipe'], detached: process.platform !== 'win32' });
  let output = '', snapshots = 0;
  child.stdout.on('data', b => { output += b; }); child.stderr.on('data', b => { output += b; });
  // A finished build: lasm dev's "Built in"/"Up to date in"; the browser's "Serving … at" (first) and "Rebuilt in".
  const finished = browser ? /\[lasm dev\] (?:Serving .* at http|Rebuilt in [\d.]+ s)/g : /(?:Built|Up to date) in [\d.]+ s/g;
  const rebuilt = browser ? /Rebuilt in/ : /Built in/;
  const failed = browser ? /error:|Build failed/ : /Build failed after/;
  const count = () => (output.match(finished) ?? []).length;
  const waitFor = async (n, ms, label) => {
    const deadline = Date.now() + ms;
    while (count() < n) {
      if (child.exitCode !== null) throw new Error(`lasm dev exited (${child.exitCode}) waiting for ${label}:\n${tail(output, 30)}`);
      if (Date.now() > deadline) throw new Error(`lasm dev did not finish ${label} within ${ms / 1000} s:\n${tail(output, 30)}`);
      await new Promise(r => setTimeout(r, 200));
    }
  };
  const quiet = ms => new Promise(r => setTimeout(r, ms));
  /** The session's current output: its directory and file hashes. */
  const current = async () => {
    if (devOutput) return { dir: devOutput, hashes: treeHashes(devOutput), times: treeTimes(devOutput) };
    const snapshot = join(parent, `session-${++snapshots}`);
    const copied = await build(directory, {}, { output: snapshot });
    if (rebuildStage.test(copied.text)) problems.push(`lasm build --output during the session linked instead of reusing lasm dev's build: ${tail(copied.text, 6)}`);
    return { dir: snapshot, hashes: copied.hashes, times: copied.times };
  };
  const atomicSave = (file, content) => { const temporary = file + '.tmp~'; writeFileSync(temporary, content); renameSync(temporary, file); };
  const greeting = join(directory, 'App/Greeting.lean');
  const step = async (label, action, { rebuild }) => {
    const mark = output.length, n = count();
    action();
    if (rebuild) await waitFor(n + 1, 900_000, label);
    else await quiet(8_000);
    const since = output.slice(mark);
    if (failed.test(since)) problems.push(`${label}: the rebuild failed: ${tail(since, 12)}`);
    if (rebuild === 'required' && !rebuilt.test(since)) problems.push(`${label}: lasm dev reported no rebuild: ${tail(since, 6)}`);
    // A change back to an earlier state may reuse that state's cached build
    // ("Up to date"), but lasm dev must have seen the change.
    if (rebuild === 'seen' && !browser && !/changed; rebuilding/.test(since)) problems.push(`${label}: lasm dev did not see the change: ${tail(since, 6)}`);
    if (!rebuild && (rebuilt.test(since) || count() > n)) problems.push(`${label}: lasm dev rebuilt although no source changed: ${tail(since, 6)}`);
    return current();
  };
  try {
    await waitFor(1, 1_500_000, 'its first build');
    let state = await current();
    problems.push(...await equivalent('lasm dev first build vs a clean build', references.original.hashes, state.hashes, references.original.dir, state.dir));

    state = await step('edit', () => writeFileSync(greeting, edit(text)), { rebuild: 'required' });
    problems.push(...await equivalent('lasm dev after an edit vs a clean build of the edit', references.edited.hashes, state.hashes, references.edited.dir, state.dir));
    const edited = state;

    const later = new Date(Date.now() + 5_000);
    state = await step('touch', () => { for (const name of ['Main.lean', 'App.lean', 'App/Greeting.lean', 'lakefile.toml']) utimesSync(join(directory, name), later, later); }, { rebuild: false });
    problems.push(...same(edited.hashes, state.hashes, 'lasm dev after a touch'));
    if (devOutput) { const moved = Object.keys(edited.times).filter(name => state.times[name] !== edited.times[name]); if (moved.length) problems.push(`lasm dev after a touch rewrote ${moved.length} output files: ${moved.slice(0, 6).join(', ')}`); }

    state = await step('rename file', () => renameSync(join(directory, 'Notes.lean'), join(directory, 'Scratch.lean')), { rebuild: 'any' });
    problems.push(...same(edited.hashes, state.hashes, 'lasm dev after renaming an unimported module', edited.dir, state.dir));

    state = await step('revert', () => { renameSync(join(directory, 'Scratch.lean'), join(directory, 'Notes.lean')); atomicSave(greeting, text); }, { rebuild: 'seen' });
    problems.push(...await equivalent('lasm dev after reverting the edit vs the clean build', references.original.hashes, state.hashes, references.original.dir, state.dir));

    state = await step('edit again', () => atomicSave(greeting, edit(text)), { rebuild: 'seen' });
    problems.push(...await equivalent('lasm dev after a second edit (saved by rename) vs a clean build of the edit', references.edited.hashes, state.hashes, references.edited.dir, state.dir));
  } catch (error) {
    problems.push(error.message);
  } finally {
    try { if (process.platform === 'win32') child.kill(); else process.kill(-child.pid, 'SIGINT'); } catch {}
    await new Promise(r => { const t = setTimeout(() => { try { process.kill(-child.pid, 'SIGKILL'); } catch {} r(); }, 15_000); child.once('close', () => { clearTimeout(t); r(); }); });
  }
  // lasm build (same flags) after the session: node and the browser reuse its
  // build. lasm dev builds an edge target's Node program link-only (no Node glue,
  // a separate cache entry), so there lasm build links again (a known cost).
  if (!problems.length) {
    const reused = await build(directory);
    if (rebuildStage.test(reused.text)) {
      if (target === 'node') problems.push(`lasm build after lasm dev linked again instead of reusing dev's build: ${tail(reused.text, 6)}`);
      else log(`     ${target}/${profile} lasm build after lasm dev linked again (lasm dev's link-only Node build is a separate cache entry)`);
    }
    problems.push(...await equivalent('lasm build after lasm dev vs a clean build of the edit', references.edited.hashes, reused.hashes, references.edited.dir, join(directory, out)));
  }
  return problems;

  function same(a, b, label, dirA, dirB) {
    const d = treeDifferences(a, b);
    return d.length ? [`${label}: ${d.length} files differ: ${d.slice(0, 12).join('; ')}${dirA && dirB ? explain(a, b, dirA, dirB) : ''}`] : [];
  }
}

if (process.argv[1]?.endsWith('metamorphic.mjs')) {
  const opts = options(process.argv.slice(2), { lasm: '', targets: 'node,wasi,workers,browser', profiles: 'release,dev', work: '', report: '', playwright: '' });
  if (!opts.lasm) throw new Error('--lasm PATH/bin/lasm.mjs is required');
  const version = (await runLasm(opts.lasm, ['--version'], { timeoutMs: 60_000 })).stdout.trim();
  console.log(`Metamorphic build tests against ${version}`);
  const results = await runMetamorphic({ lasm: opts.lasm, targets: opts.targets.split(','), profiles: opts.profiles.split(','), work: opts.work || undefined, playwright: opts.playwright || undefined });
  const failed = results.filter(r => r.status === 'failed');
  const line = `Metamorphic (${opts.targets}; ${opts.profiles}): ${results.length - failed.length} relations hold, ${failed.length} fail`;
  console.log(line);
  summary(`### ${line}\n` + failed.map(r => `- \`${r.target}/${r.profile} ${r.relation}\`: ${r.problems.join('; ').slice(0, 600)}`).join('\n'));
  if (opts.report) writeFileSync(opts.report, JSON.stringify({ version, results }, null, 2) + '\n');
  process.exitCode = failed.length ? 1 : 0;
}
