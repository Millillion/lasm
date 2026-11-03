// Claim 4 (docs/TESTING.md#metamorphic-build-tests): relations between builds
// of `lasm build` and `lasm dev` that must hold without knowing the right
// output. For each target and profile, on a small Lake project:
//   determinism   two clean builds in different directories give the same bytes;
//   cache state   a clean build with a cold tool cache gives the same bytes;
//   incremental   edit, build: the same bytes as a clean build of the edited
//                 project; revert, build: the original bytes again;
//   rename file   renaming a module nothing imports changes no byte;
//   rename def    renaming a definition nothing uses changes no byte except the
//                 source hashes recorded in JSON metadata;
//   touch         touching sources without changing them rebuilds nothing
//                 (no link) and leaves the output files untouched;
//   lasm dev      after lasm dev rebuilt an edit (and ignored a touch), its
//                 build is what a clean build of the edited project gives
//                 (lasm build reuses it without linking).
//
//   node scripts/tooling/metamorphic.mjs --lasm PATH/bin/lasm.mjs \
//     [--targets node,wasi,workers,browser] [--profiles release,dev] [--work DIR] [--report FILE]
import { readFileSync, renameSync, utimesSync, writeFileSync } from 'node:fs';
import { spawn } from 'node:child_process';
import { join } from 'node:path';
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
const sourceHashKeys = new Set(['sourceSha256', 'cSha256', 'signature']);

function withoutSourceHashes(value) {
  if (Array.isArray(value)) return value.map(withoutSourceHashes);
  if (value && typeof value === 'object') return Object.fromEntries(Object.entries(value).filter(([k]) => !sourceHashKeys.has(k)).map(([k, v]) => [k, withoutSourceHashes(v)]));
  return value;
}

export async function runMetamorphic({ lasm, targets, profiles, work, log = console.log }) {
  const results = [];
  const record = (target, profile, relation, problems, detail = '') => {
    results.push({ target, profile, relation, status: problems.length ? 'failed' : 'passed', problems });
    log(`${problems.length ? 'FAIL ' : 'ok   '} ${target}/${profile} ${relation}${detail ? ` (${detail})` : ''}${problems.length ? ':\n      ' + problems.join('\n      ') : ''}`);
  };
  const coldCache = temporaryDirectory('cold-cache', work);
  try {
    for (const target of targets) for (const profile of profiles) {
      const flags = ['--target', target, ...(profile === 'dev' ? ['--dev'] : [])];
      const projects = [];
      const project = () => { const d = temporaryDirectory(`mm-${target}-${profile}`, work); writeTree(d, fixture); projects.push(d); return d; };
      const build = async (directory, env = {}) => {
        const result = await runLasm(lasm, ['build', 'Main.lean', ...flags, '--output', 'dist'], { cwd: directory, env, timeoutMs: 1_200_000 });
        if (result.code !== 0) throw new Error(`lasm build ${flags.join(' ')} failed in ${directory} (exit ${result.code}${result.timedOut ? ', timed out' : ''}):\n${tail(result.stdout + result.stderr, 30)}`);
        return { hashes: treeHashes(join(directory, 'dist')), times: treeTimes(join(directory, 'dist')), text: result.stdout + result.stderr, ms: result.ms };
      };
      const same = (a, b, label) => { const d = treeDifferences(a, b); return d.length ? [`${label}: ${d.length} files differ: ${d.slice(0, 12).join('; ')}`] : []; };
      try {
        const a = project();
        const original = await build(a);
        log(`     ${target}/${profile}: clean build ${(original.ms / 1000).toFixed(1)} s, ${Object.keys(original.hashes).length} files`);

        const b = project();
        record(target, profile, 'determinism', same(original.hashes, (await build(b)).hashes, 'two clean builds'));

        const c = project();
        record(target, profile, 'cache state', same(original.hashes, (await build(c, { LASM_TOOLCHAIN_CACHE: coldCache })).hashes, 'cold tool cache vs warm'));

        // Nothing changed at all, then sources touched without a change.
        const again = await build(a);
        const touchProblems = [];
        if (rebuildStage.test(again.text)) touchProblems.push(`an unchanged rebuild did work: ${tail(again.text, 6)}`);
        const later = new Date(Date.now() + 5_000);
        for (const name of ['Main.lean', 'App.lean', 'App/Greeting.lean', 'lakefile.toml']) utimesSync(join(a, name), later, later);
        const touched = await build(a);
        if (rebuildStage.test(touched.text)) touchProblems.push(`touching the sources rebuilt: ${tail(touched.text, 6)}`);
        touchProblems.push(...same(original.hashes, touched.hashes, 'after touch'));
        const moved = Object.keys(original.times).filter(name => touched.times[name] !== original.times[name]);
        if (moved.length) touchProblems.push(`touch rewrote ${moved.length} output files: ${moved.slice(0, 6).join(', ')}`);
        record(target, profile, 'touch', touchProblems, `${(touched.ms / 1000).toFixed(1)} s`);

        renameSync(join(a, 'Notes.lean'), join(a, 'Scratch.lean'));
        record(target, profile, 'rename file', same(original.hashes, (await build(a)).hashes, 'after renaming an unimported module'));
        renameSync(join(a, 'Scratch.lean'), join(a, 'Notes.lean'));

        const greeting = join(a, 'App/Greeting.lean'), text = readFileSync(greeting, 'utf8');
        writeFileSync(greeting, renameDefinition(text));
        const renamed = await build(a);
        const renameProblems = [];
        for (const name of treeDifferences(original.hashes, renamed.hashes).map(line => line.split(':')[0])) {
          if (!name.endsWith('.json') || !(name in original.hashes) || !(name in renamed.hashes)) { renameProblems.push(`${name} changed`); continue; }
          const before = JSON.parse(readFileSync(join(b, 'dist', name), 'utf8')), after = JSON.parse(readFileSync(join(a, 'dist', name), 'utf8'));
          if (JSON.stringify(withoutSourceHashes(before)) !== JSON.stringify(withoutSourceHashes(after))) renameProblems.push(`${name} changed beyond source hashes`);
        }
        record(target, profile, 'rename def', renameProblems);
        writeFileSync(greeting, text);

        writeFileSync(greeting, edit(text));
        const incremental = await build(a);
        const d = project(); writeFileSync(join(d, 'App/Greeting.lean'), edit(text));
        const clean = await build(d);
        const incrementalProblems = same(clean.hashes, incremental.hashes, 'incremental vs clean');
        if (!treeDifferences(original.hashes, incremental.hashes).length) incrementalProblems.push('the edit changed no output byte (the build reused a stale result)');
        writeFileSync(greeting, text);
        incrementalProblems.push(...same(original.hashes, (await build(a)).hashes, 'after reverting the edit'));
        record(target, profile, 'incremental', incrementalProblems);

        if (profile === 'dev' && ['node', 'workers'].includes(target))
          record(target, profile, 'lasm dev', await devRelation({ lasm, target, project, build, cleanEdited: clean.hashes, text }));
      } catch (error) {
        record(target, profile, 'run', [error.message]);
      } finally { for (const d of projects) removeTree(d); }
    }
  } finally { removeTree(coldCache); }
  return results;
}

/** lasm dev --no-run: the first build, an edit (rebuilt), a touch (ignored);
 * then lasm build --dev in the same project reuses dev's build, which equals a
 * clean build of the edited project. */
async function devRelation({ lasm, target, project, build, cleanEdited, text }) {
  const directory = project(), problems = [];
  const child = spawn(process.execPath, [lasm, 'dev', 'Main.lean', '--no-run', ...(target === 'node' ? [] : ['--target', target])],
    { cwd: directory, env: baseEnvironment(), stdio: ['pipe', 'pipe', 'pipe'], detached: process.platform !== 'win32' });
  let output = '';
  child.stdout.on('data', b => { output += b; }); child.stderr.on('data', b => { output += b; });
  const built = /(?:Built|Up to date) in [\d.]+ s/g;
  const count = () => (output.match(built) ?? []).length;
  const waitFor = async (n, ms) => {
    const deadline = Date.now() + ms;
    while (count() < n) {
      if (child.exitCode !== null) throw new Error(`lasm dev exited (${child.exitCode}):\n${tail(output, 30)}`);
      if (Date.now() > deadline) return false;
      await new Promise(r => setTimeout(r, 200));
    }
    return true;
  };
  try {
    if (!(await waitFor(1, 1_200_000))) throw new Error(`lasm dev did not finish its first build:\n${tail(output, 30)}`);
    const mark = output.length;
    writeFileSync(join(directory, 'App/Greeting.lean'), edit(text));
    if (!(await waitFor(2, 600_000))) throw new Error(`lasm dev did not rebuild after an edit:\n${tail(output, 30)}`);
    if (!/Built in/.test(output.slice(mark))) problems.push(`lasm dev reported the edit as up to date: ${tail(output.slice(mark), 6)}`);
    const later = new Date(Date.now() + 5_000), touchMark = output.length;
    utimesSync(join(directory, 'Main.lean'), later, later);
    await new Promise(r => setTimeout(r, 8_000));
    await waitFor(3, 120_000);  // a rebuild after a touch must at least be "Up to date"
    if (/Built in/.test(output.slice(touchMark))) problems.push(`lasm dev rebuilt after a touch: ${tail(output.slice(touchMark), 6)}`);
  } finally {
    try { if (process.platform === 'win32') child.kill(); else process.kill(-child.pid, 'SIGINT'); } catch {}
    await new Promise(r => { const t = setTimeout(() => { try { process.kill(-child.pid, 'SIGKILL'); } catch {} r(); }, 15_000); child.once('close', () => { clearTimeout(t); r(); }); });
  }
  const reused = await build(directory);
  if (rebuildStage.test(reused.text)) problems.push(`lasm build after lasm dev linked again instead of reusing dev's build: ${tail(reused.text, 6)}`);
  const differences = treeDifferences(cleanEdited, reused.hashes);
  if (differences.length) problems.push(`after lasm dev: ${differences.length} files differ from a clean build: ${differences.slice(0, 12).join('; ')}`);
  return problems;
}

if (process.argv[1]?.endsWith('metamorphic.mjs')) {
  const opts = options(process.argv.slice(2), { lasm: '', targets: 'node,wasi,workers,browser', profiles: 'release,dev', work: '', report: '' });
  if (!opts.lasm) throw new Error('--lasm PATH/bin/lasm.mjs is required');
  const version = (await runLasm(opts.lasm, ['--version'], { timeoutMs: 60_000 })).stdout.trim();
  console.log(`Metamorphic build tests against ${version}`);
  const results = await runMetamorphic({ lasm: opts.lasm, targets: opts.targets.split(','), profiles: opts.profiles.split(','), work: opts.work || undefined });
  const failed = results.filter(r => r.status === 'failed');
  const line = `Metamorphic (${opts.targets}; ${opts.profiles}): ${results.length - failed.length} relations hold, ${failed.length} fail`;
  console.log(line);
  summary(`### ${line}\n` + failed.map(r => `- \`${r.target}/${r.profile} ${r.relation}\`: ${r.problems.join('; ').slice(0, 600)}`).join('\n'));
  if (opts.report) writeFileSync(opts.report, JSON.stringify({ version, results }, null, 2) + '\n');
  process.exitCode = failed.length ? 1 : 0;
}
