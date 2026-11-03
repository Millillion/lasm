// Claim 4 (docs/TESTING.md#error-corpus): every error a user can trigger
// prints a clear message, never a stack trace. Each case runs an installed
// `lasm` in a fresh project and must exit non-zero, within its time limit,
// print what `expect` names, and pass messageProblems (no stack frame, raw
// JavaScript error, raw errno text, bare strerror, internal-error line, empty
// output).
//
//   node scripts/tooling/error-corpus.mjs --lasm node_modules/@lasm/cli/bin/lasm.mjs \
//     [--only build] [--old-node /path/to/node22] [--work DIR] [--case ID]
//
// --only parse runs the cases that need no toolchain (seconds); build adds
// Lean, Lake and output errors (each a build that fails, a few seconds to a
// minute); network adds an unreachable download. A case with `fixedIn` is
// reported as known, not failed, when the CLI under test is older (the
// published package before the fix was released).
import { mkdirSync, chmodSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';
import { runLasm, messageProblems, temporaryDirectory, writeTree, removeTree, options, versionAtLeast, summary, tail } from './lib.mjs';

const main = 'def main : IO Unit := IO.println "hello"\n';
const lakefile = 'name = "app"\nversion = "0.1.0"\ndefaultTargets = ["app"]\n\n[[lean_exe]]\nname = "app"\nroot = "Main"\n';
const project = (files = {}) => ({ 'Main.lean': main, 'lakefile.toml': lakefile, 'lean-toolchain': 'leanprover/lean4:v4.35.0\n', ...files });
const posixUser = process.platform !== 'win32' && process.getuid?.() !== 0;

/** kind: parse (no toolchain), build (a failing build), network (a failing download). */
export const cases = [
  // Arguments.
  { id: 'no-arguments', kind: 'parse', args: [], expect: /^Usage: lasm/m },
  { id: 'unknown-option', kind: 'parse', args: ['--bogus'], expect: /Unknown Lasm option: --bogus/ },
  { id: 'command-typo', kind: 'parse', args: ['biuld', 'Main.lean'], files: { 'Main.lean': main }, expect: /Unknown command "biuld" \(did you mean lasm build\?\)/ },
  { id: 'build-without-source', kind: 'parse', args: ['build'], expect: /^Usage: lasm/m },
  { id: 'missing-source', kind: 'parse', args: ['build', 'Nope.lean'], files: { 'Main.lean': main }, expect: /Nope\.lean not found in .*Lean files there: Main\.lean/ },
  { id: 'missing-source-typo', kind: 'parse', args: ['build', 'Mian.lean'], files: { 'Main.lean': main }, expect: /Did you mean Main\.lean\?/ },
  { id: 'missing-source-empty-directory', kind: 'parse', args: ['Main.lean'], expect: /There are no \.lean files there/ },
  { id: 'target-without-value', kind: 'parse', args: ['build', 'Main.lean', '--target'], files: { 'Main.lean': main }, expect: /--target requires a value: node, / },
  { id: 'unknown-target', kind: 'parse', args: ['build', 'Main.lean', '--target', 'cloudflare'], files: { 'Main.lean': main }, expect: /Unknown build target "cloudflare" \(did you mean --target workers\?\)/ },
  { id: 'target-twice', kind: 'parse', args: ['build', 'Main.lean', '--target', 'node', '--target=wasi'], files: { 'Main.lean': main }, expect: /Specify --target only once/ },
  { id: 'target-with-run', kind: 'parse', args: ['run', 'Main.lean', '--target', 'node'], files: { 'Main.lean': main }, expect: /--target is available only with lasm build/ },
  { id: 'output-without-value', kind: 'parse', args: ['build', 'Main.lean', '--output'], files: { 'Main.lean': main }, expect: /--output requires a value/ },
  { id: 'output-with-run', kind: 'parse', args: ['Main.lean', '--output', 'x'], files: { 'Main.lean': main }, expect: /--output is available only with lasm build/ },
  { id: 'suspend-without-browser', kind: 'parse', args: ['build', 'Main.lean', '--suspend', 'jspi'], files: { 'Main.lean': main }, expect: /--suspend applies to lasm build --target browser/ },
  { id: 'unknown-suspend', kind: 'parse', args: ['build', 'Main.lean', '--target', 'browser', '--suspend', 'maybe'], files: { 'Main.lean': main }, expect: /--suspend requires one of: none, jspi/ },
  { id: 'bundler-without-browser', kind: 'parse', args: ['build', 'Main.lean', '--bundler'], files: { 'Main.lean': main }, expect: /--bundler applies to lasm build --target browser/ },
  { id: 'dev-and-release', kind: 'parse', args: ['Main.lean', '--dev', '--release'], files: { 'Main.lean': main }, expect: /Choose one of --dev and --release/ },
  { id: 'allow-dev-misuse', kind: 'parse', args: ['build', 'Main.lean', '--allow-dev'], files: { 'Main.lean': main }, expect: /--allow-dev applies to/ },
  { id: 'dev-build-for-platform', kind: 'parse', args: ['build', 'Main.lean', '--dev', '--target', 'lambda'], files: { 'Main.lean': main }, expect: /dev builds are not for deployment/ },
  { id: 'extra-positional', kind: 'parse', args: ['build', 'Main.lean', 'out', 'more'], files: { 'Main.lean': main }, expect: /Unexpected positional arguments/ },
  { id: 'arguments-to-build', kind: 'parse', args: ['build', 'Main.lean', '--', 'x'], files: { 'Main.lean': main }, expect: /Application arguments are accepted by lasm run, not lasm build/ },
  { id: 'not-a-lean-file', kind: 'parse', args: ['build', 'Main.txt'], files: { 'Main.txt': main }, expect: /Expected a Lean source file/ },
  { id: 'source-is-a-directory', kind: 'parse', args: ['build', 'App.lean'], files: { 'App.lean/x': '' }, expect: /Expected an existing Lean source/ },
  { id: 'dev-unknown-option', kind: 'parse', args: ['dev', '--bogus'], files: { 'Main.lean': main }, expect: /Unknown lasm dev option: --bogus/ },
  { id: 'dev-missing-source', kind: 'parse', args: ['dev', 'Nope.lean'], files: { 'Main.lean': main }, expect: /Nope\.lean not found/ },
  { id: 'init-without-directory', kind: 'parse', args: ['init'], expect: /^Usage: lasm init/m },
  { id: 'init-unknown-template', kind: 'parse', args: ['init', 'app', '--template', 'nope'], expect: /Unknown template "nope"/ },
  { id: 'init-not-empty', kind: 'parse', args: ['init', 'app'], files: { 'app/notes.txt': 'x' }, expect: /app is not empty/ },
  { id: 'init-onto-a-file', kind: 'parse', args: ['init', 'Main.lean'], files: { 'Main.lean': main }, expect: /Main\.lean is a file/, fixedIn: '0.3.10' },
  { id: 'init-under-a-file', kind: 'parse', args: ['init', 'Main.lean/app'], files: { 'Main.lean': main }, expect: /Main\.lean/, fixedIn: '0.3.10' },
  { id: 'init-read-only-parent', kind: 'parse', posixUser: true, args: ['init', 'locked/app'], setup: dir => { mkdirSync(join(dir, 'locked')); chmodSync(join(dir, 'locked'), 0o555); }, expect: /locked/, fixedIn: '0.3.10' },
  { id: 'package-without-target', kind: 'parse', args: ['package'], expect: /--target is required/ },
  { id: 'package-unknown-target', kind: 'parse', args: ['package', '--target', 'nope'], expect: /Unknown target "nope"/ },
  { id: 'package-missing-build', kind: 'parse', args: ['package', 'dist', '--target', 'lambda'], expect: /is not a Lasm build \(no main\.mjs\)\. Run lasm build Main\.lean first/ },
  { id: 'cache-usage', kind: 'parse', args: ['cache'], expect: /Usage: lasm cache repair/ },
  { id: 'cache-extra', kind: 'parse', args: ['cache', 'repair', 'now'], expect: /Usage: lasm cache repair/ },
  { id: 'editor-usage', kind: 'parse', args: ['editor', 'a', 'b'], expect: /Usage: lasm editor/ },
  { id: 'editor-outside-project', kind: 'parse', args: ['editor', '.'], expect: /lasm editor works in a Lake project/ },
  { id: 'old-node', kind: 'parse', oldNode: true, args: ['--version'], expect: /Lasm requires Node 24 or newer; you are running Node \d+/ },

  // Lean, Lake and toolchain errors (each is a build that fails).
  { id: 'lean-unknown-identifier', kind: 'build', args: ['build', 'Main.lean'], files: { 'Main.lean': 'def main : IO Unit := IO.println (foo 1)\n' }, expect: /Main\.lean:1:\d+: error: Unknown identifier `foo`[\s\S]*Build failed\. Fix the error above/ },
  { id: 'lean-type-error', kind: 'build', args: ['build', 'Main.lean'], files: project({ 'Main.lean': 'def main : IO Unit := IO.println (1 + "x")\n' }), expect: /Main\.lean:1:\d+: error/ },
  { id: 'lean-syntax-error', kind: 'build', args: ['build', 'Main.lean'], files: { 'Main.lean': 'def main : IO Unit :=\n  IO.println "hi" (\n' }, expect: /Main\.lean:\d+:\d+: error/ },
  { id: 'lean-invalid-utf8', kind: 'build', args: ['build', 'Main.lean'], files: { 'Main.lean': Buffer.from([0xff, 0xfe, 0x20, 0x0a]) }, expect: /Main\.lean:1:0: error/ },
  { id: 'lean-error-in-imported-module', kind: 'build', args: ['build', 'Main.lean'], files: project({ 'Main.lean': 'import Helper\ndef main : IO Unit := IO.println greeting\n', 'Helper.lean': 'def greeting : String := 42\n',
    'lakefile.toml': lakefile + '\n[[lean_lib]]\nname = "Helper"\n' }), expect: /Helper\.lean:1:\d+: error/ },
  { id: 'missing-import', kind: 'build', args: ['build', 'Main.lean'], files: { 'Main.lean': 'import Nope\n' + main }, expect: /Nope/ },
  { id: 'no-main', kind: 'build', args: ['build', 'Main.lean'], files: { 'Main.lean': 'def answer : Nat := 42\n' }, expect: /Main\.lean has no `main` function/, fixedIn: '0.3.10' },
  { id: 'run-uncaught-exception', kind: 'build', args: ['Main.lean'], files: { 'Main.lean': 'def main : IO Unit := throw <| IO.userError "boom"\n' }, expect: /uncaught exception: boom/ },
  { id: 'bad-lakefile-toml', kind: 'build', args: ['build', 'Main.lean'], files: project({ 'lakefile.toml': 'name = "app"\n[[lean_exe\n' }), expect: /lakefile\.toml:2:\d+/ },
  { id: 'bad-lakefile-lean', kind: 'build', args: ['build', 'Main.lean'], files: { 'Main.lean': main, 'lean-toolchain': 'leanprover/lean4:v4.35.0\n', 'lakefile.lean': 'import Lake\nopen Lake DSL\npackage app\n@[default_target] lean_exe app where\n  root := `Main\n  bogus\n' }, expect: /lakefile\.lean:\d+:\d+: error/ },
  { id: 'lake-missing-path-dependency', kind: 'build', args: ['build', 'Main.lean'], files: project({ 'lakefile.toml': lakefile + '\n[[require]]\nname = "helper"\npath = "../no-such-helper"\n' }), expect: /no-such-helper|helper/ },
  { id: 'unsupported-toolchain', kind: 'build', args: ['build', 'Main.lean'], files: project({ 'lean-toolchain': 'leanprover/lean4:v4.20.0\n' }), expect: /Unsupported Lean toolchain "leanprover\/lean4:v4\.20\.0".*Lasm supports Lean v4\.35\.0/ },
  { id: 'garbage-toolchain', kind: 'build', args: ['build', 'Main.lean'], files: project({ 'lean-toolchain': 'not a toolchain\n' }), expect: /lean-toolchain/ },
  { id: 'output-is-a-file', kind: 'build', args: ['build', 'Main.lean'], files: { 'Main.lean': main, dist: 'not a directory\n' }, expect: /dist/, fixedIn: '0.3.10' },
  { id: 'output-not-a-build', kind: 'build', args: ['build', 'Main.lean'], files: { 'Main.lean': main, 'dist/notes.txt': 'mine\n' }, expect: /Output directory is not a Lasm application build: .*dist\. Choose --output with an empty directory/ },
  { id: 'output-under-read-only-directory', kind: 'build', posixUser: true, args: ['build', 'Main.lean', '--output', 'locked/dist'], files: { 'Main.lean': main },
    setup: dir => { mkdirSync(join(dir, 'locked')); chmodSync(join(dir, 'locked'), 0o555); }, expect: /locked/, fixedIn: '0.3.10' },
  { id: 'read-only-project', kind: 'build', posixUser: true, args: ['build', 'Main.lean', '--output', '../out'], files: { 'app/Main.lean': main }, cwd: 'app',
    setup: dir => chmodSync(join(dir, 'app'), 0o555), expect: /\.lake/, fixedIn: '0.3.10' },
  { id: 'read-only-tool-cache', kind: 'build', posixUser: true, args: ['build', 'Main.lean'], files: { 'Main.lean': main },
    setup: dir => { mkdirSync(join(dir, 'cache')); chmodSync(join(dir, 'cache'), 0o555); }, env: dir => ({ LASM_TOOLCHAIN_CACHE: join(dir, 'cache') }), expect: /cache/, fixedIn: '0.3.10' },
  { id: 'package-a-dev-build', kind: 'build', args: ['package', 'dist', '--target', 'lambda'], files: { 'Main.lean': main }, prepare: ['build', 'Main.lean', '--dev'], expect: /dev build/i },

  // Network: an unreachable download (HTTPS artifacts through a proxy that refuses connections).
  { id: 'download-unreachable', kind: 'network', args: ['build', 'Main.lean'], files: { 'Main.lean': main },
    env: dir => ({ LASM_ARTIFACT_SOURCE: 'https', LASM_TOOLCHAIN_CACHE: join(dir, 'empty-cache'), HTTPS_PROXY: 'http://127.0.0.1:9', HTTP_PROXY: 'http://127.0.0.1:9', NODE_USE_ENV_PROXY: '1', LASM_DOWNLOAD_ATTEMPTS: '2' }),
    expect: /download|connect|unreachable|network/i, timeoutMs: 600_000 },
  { id: 'download-attempts-invalid', kind: 'network', args: ['build', 'Main.lean'], files: { 'Main.lean': main },
    env: dir => ({ LASM_ARTIFACT_SOURCE: 'https', LASM_TOOLCHAIN_CACHE: join(dir, 'empty-cache'), LASM_DOWNLOAD_ATTEMPTS: 'many' }), expect: /LASM_DOWNLOAD_ATTEMPTS must be an integer/ },
];

const kinds = { parse: ['parse'], build: ['parse', 'build'], network: ['parse', 'build', 'network'] };

export async function runCorpus({ lasm, only = 'network', oldNode, work, id, log = console.log }) {
  const version = (await runLasm(lasm, ['--version'], { timeoutMs: 60_000 })).stdout.trim();
  const versionNumber = /^lasm (\S+)/.exec(version)?.[1] ?? 'source';
  log(`Error corpus against ${version || lasm}`);
  const results = [];
  for (const entry of cases) {
    if (!kinds[only].includes(entry.kind) || (id && entry.id !== id)) continue;
    if (entry.posixUser && !posixUser) { results.push({ id: entry.id, status: 'skipped', reason: 'needs a non-root POSIX user' }); continue; }
    if (entry.oldNode && !oldNode) { results.push({ id: entry.id, status: 'skipped', reason: 'no --old-node' }); continue; }
    const directory = temporaryDirectory('error-' + entry.id, work);
    try {
      writeTree(directory, entry.files ?? {});
      entry.setup?.(directory);
      const env = typeof entry.env === 'function' ? entry.env(directory) : entry.env ?? {};
      const cwd = join(directory, entry.cwd ?? '.');
      if (entry.prepare) {
        const prepared = await runLasm(lasm, entry.prepare, { cwd, env, timeoutMs: 600_000 });
        if (prepared.code !== 0) throw new Error(`preparation failed: ${tail(prepared.stderr)}`);
      }
      const result = await runLasm(lasm, entry.args, { cwd, env, timeoutMs: entry.timeoutMs ?? (entry.kind === 'parse' ? 60_000 : 600_000), node: entry.oldNode ? oldNode : undefined });
      const output = result.stdout + result.stderr;
      const problems = messageProblems(output);
      if (result.timedOut) problems.unshift(`did not finish within ${(entry.timeoutMs ?? 0) / 1000 || (entry.kind === 'parse' ? 60 : 600)} s (a hang)`);
      else if (result.code === 0) problems.unshift('exited 0');
      else if (result.code === null) problems.unshift(`ended by signal ${result.signal}`);
      if (!entry.expect.test(output)) problems.push(`does not say ${entry.expect}`);
      const known = problems.length && entry.fixedIn && !versionAtLeast(versionNumber, entry.fixedIn);
      results.push({ id: entry.id, status: problems.length ? (known ? 'known' : 'failed') : 'passed', problems, ms: result.ms, code: result.code, output: tail(output, 25) });
      log(`${problems.length ? (known ? 'KNOWN' : 'FAIL ') : 'ok   '} ${entry.id} (${(result.ms / 1000).toFixed(1)} s)${problems.length ? ': ' + problems.join('; ') : ''}`);
      if (problems.length) log(tail(output, 25).replace(/^/gm, '      | '));
    } catch (error) {
      results.push({ id: entry.id, status: 'failed', problems: [error.message] });
      log(`FAIL  ${entry.id}: ${error.message}`);
    } finally { removeTree(directory); }
  }
  return { version, results };
}

if (import.meta.url === `file://${process.argv[1]}` || process.argv[1]?.endsWith('error-corpus.mjs')) {
  const opts = options(process.argv.slice(2), { lasm: '', only: 'network', 'old-node': '', work: '', case: '', report: '' });
  if (!opts.lasm) throw new Error('--lasm PATH/bin/lasm.mjs is required');
  if (!kinds[opts.only]) throw new Error('--only is parse, build or network');
  const { version, results } = await runCorpus({ lasm: opts.lasm, only: opts.only, oldNode: opts['old-node'] || undefined, work: opts.work || undefined, id: opts.case || undefined });
  const count = status => results.filter(r => r.status === status).length;
  const line = `Error corpus (${version}): ${count('passed')} passed, ${count('failed')} failed, ${count('known')} known (fixed in a later release), ${count('skipped')} skipped`;
  console.log(line);
  summary(`### ${line}\n` + results.filter(r => r.status !== 'passed').map(r => `- **${r.status}** \`${r.id}\`: ${(r.problems ?? [r.reason]).join('; ')}`).join('\n'));
  if (opts.report) writeFileSync(opts.report, JSON.stringify({ version, results }, null, 2) + '\n');
  process.exitCode = count('failed') ? 1 : 0;
}
