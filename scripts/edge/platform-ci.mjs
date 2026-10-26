// Phase 7.5 on every platform (.github/workflows/workers.yml, job platforms:
// macOS arm64/x64 and Windows x64 beside the Linux hosts job). An installed
// candidate package (scripts/package-node-release.mjs), as a user gets it:
// 1. examples/edge-pure built by the compiler under Node, Bun and Deno: the
//    Node build and the bun/deno targets, plus every edge target from Node
//    (workers, vercel-edge, netlify-edge, deno-deploy). Hashes are recorded for
//    the cross-platform comparison; the bun and deno builds are served by Bun
//    and Deno (portable-check.mjs) and must match within the platform.
// 2. A command-line program run by `lasm Main.lean -- …` under Bun and Deno.
// 3. The Hono template from `lasm init`, with its Bun and Deno scripts:
//    `bun run build:bun`, `deno task build:deno`, then served by the
//    start:bun/start:deno entries.
// No platform CLI (wrangler, vercel, netlify) runs here: only the builds.
// The edge runtime is seeded into Lasm's managed cache from the CI archive
// through Lasm's own provisioning code (the release does not exist before 0.2.0).
//   node scripts/edge/platform-ci.mjs CANDIDATE.tgz EDGE_ARCHIVE.tar.zst WORK_DIR TOOLS_DIR
import { execFileSync, spawnSync } from 'node:child_process';
import { appendFileSync, cpSync, existsSync, mkdirSync, readFileSync, symlinkSync, writeFileSync } from 'node:fs';
import { createHash } from 'node:crypto';
import { createRequire } from 'node:module';
import { join, resolve, dirname } from 'node:path';
import { fileURLToPath, pathToFileURL } from 'node:url';
import { headlessEnvironment } from './headless.mjs';

const root = resolve(dirname(fileURLToPath(import.meta.url)), '../..');
const [tgzArg, archiveArg, workArg, toolsArg] = process.argv.slice(2);
const tgz = resolve(tgzArg), archive = resolve(archiveArg), work = resolve(workArg), tools = resolve(toolsArg);
const windows = process.platform === 'win32';
const npm = windows ? 'npm.cmd' : 'npm';
mkdirSync(work, { recursive: true });
const env = headlessEnvironment(process.env, { DENO_NO_UPDATE_CHECK: '1', DENO_NO_PROMPT: '1' });
const sh = (command, args, options = {}) => execFileSync(command, args, { stdio: 'inherit', env, shell: windows && command === npm, ...options });

// The runtimes' own executables (not npm's .bin shims).
const toolsRequire = createRequire(join(tools, 'package.json'));
const bun = join(dirname(toolsRequire.resolve('bun/package.json')), 'bin', 'bun.exe');
const deno = toolsRequire(join(dirname(toolsRequire.resolve('deno/package.json')), 'install_api.cjs')).runInstall();
const runtimes = { node: [process.execPath], bun: [bun], deno: [deno, 'run', '-A'] };
// The template scripts call `bun` and `deno` by name. Bun's npm package names
// its executable bin/bun.exe on every platform, so outside Windows a `bun`
// link stands in for the one a Bun install puts on PATH.
{ const key = Object.keys(env).find(k => k.toUpperCase() === 'PATH') ?? 'PATH';
  const shims = join(work, 'runtime-bin');
  mkdirSync(shims, { recursive: true });
  if (!windows && !existsSync(join(shims, 'bun'))) symlinkSync(bun, join(shims, 'bun'));
  env[key] = [shims, dirname(bun), dirname(deno), env[key]].join(windows ? ';' : ':'); }

// The candidate, installed as a user installs it.
const install = join(work, 'install');
mkdirSync(install, { recursive: true });
writeFileSync(join(install, 'package.json'), '{ "private": true }\n');
sh(npm, ['install', tgz, '--no-audit', '--no-fund'], { cwd: install });
const compiler = join(install, 'node_modules/@lasm/compiler');
const lasmBin = join(compiler, 'bin/lasm.mjs');

// The edge runtime into Lasm's managed cache, through the compiler's provisioning.
{
  const { edgeRuntime, edgeRuntimeCatalog } = await import(pathToFileURL(join(compiler, 'src/edge/edge-runtime.mjs')).href);
  const artifact = edgeRuntimeCatalog.lean['4.35.0'];
  const fetch = async url => { if (String(url) !== artifact.url) throw new Error(`unexpected ${url}`); return new Response(readFileSync(archive)); };
  const nodeRuntime = { identity: artifact.baseRuntimeManifestSha256, manifest: { lean: '4.35.0', name: 'lean-4.35.0-wasm64' } };
  await edgeRuntime(nodeRuntime, { directory: undefined, fetch, log: console.log });
}

// Each workload in the resource guard, with its own report (required on Windows).
let workloads = 0;
const bounded = () => [join(root, 'scripts/full-lean/run-bounded.mjs'), '--report', join(work, 'resource-runs', `${++workloads}.json`), '--'];
const lasm = (runtime, project, args, options = {}) => spawnSync(process.execPath, [...bounded(), ...runtimes[runtime], lasmBin, ...args],
  { cwd: project, env, encoding: 'utf8', maxBuffer: 64 << 20, windowsHide: true, ...options });
const sha256 = file => createHash('sha256').update(readFileSync(file)).digest('hex');
const versions = { node: process.version, bun: execFileSync(bun, ['--version'], { encoding: 'utf8' }).trim(),
  deno: execFileSync(deno, ['--version'], { encoding: 'utf8' }).split('\n')[0] };
const results = { platform: `${process.platform}-${process.arch}`, versions, builds: {}, served: {}, cli: {}, template: {} };
const failed = [];
const save = () => writeFileSync(join(work, 'platform-results.json'), JSON.stringify(results, null, 2) + '\n');
const timed = (label, run) => { const t = Date.now(); const r = run(); (results.seconds ??= {})[label] = (Date.now() - t) / 1000; return r; };

// 1. The pure example.
const outputs = { workers: 'workers/lasm/program.wasm', 'vercel-edge': 'api/_lasm/lasm/program.wasm', 'netlify-edge': 'netlify/lasm/lasm/program.wasm.mjs',
  'deno-deploy': 'deno/lasm/program.wasm', bun: 'bun/lasm/program.wasm', deno: 'deno/lasm/program.wasm' };
for (const runtime of ['node', 'bun', 'deno']) {
  const project = join(work, `pure-${runtime}`);
  cpSync(join(root, 'examples/edge-pure'), project, { recursive: true });
  const targets = runtime === 'node' ? [null, 'workers', 'vercel-edge', 'netlify-edge', 'deno-deploy', 'bun', 'deno'] : [null];
  const hashes = results.builds[runtime] = {};
  for (const target of targets) {
    const args = ['build', 'Main.lean', ...(target ? ['--target', target] : [])];
    const r = timed(`${runtime} ${target ?? 'default'}`, () => lasm(runtime, project, args, { stdio: 'inherit' }));
    if (r.status !== 0) { failed.push(`lasm ${args.join(' ')} under ${runtime}`); continue; }
    const built = target ?? (runtime === 'node' ? 'node' : runtime);
    hashes[built] = sha256(join(project, built === 'node' ? 'dist/program.wasm' : outputs[built]));
    if (built !== 'node') hashes.node = sha256(join(project, 'dist/program.wasm'));
  }
  save();
}
const b = results.builds;
for (const runtime of ['bun', 'deno']) {
  if (b[runtime].node !== b.node.node) failed.push(`the Node build under ${runtime} differs from Node's on this platform`);
  if (b[runtime][runtime] !== b.node[runtime]) failed.push(`--target ${runtime} under ${runtime} differs from Node's on this platform`);
}
for (const [runtime, port] of [['bun', 8897], ['deno', 8898]]) {
  const file = join(work, `served-${runtime}.json`);
  if (!b[runtime][runtime]) { results.served[runtime] = { passed: false, skipped: 'the build failed' }; failed.push(`the pure example built and served by ${runtime}`); continue; }
  const check = spawnSync(process.execPath, [join(root, 'scripts/edge/portable-check.mjs'), runtime === 'bun' ? bun : deno, `${runtime}/main.mjs`, join(work, `pure-${runtime}`), 'pure', String(port), file], { env, stdio: 'inherit' });
  results.served[runtime] = existsSync(file) ? JSON.parse(readFileSync(file, 'utf8')) : { passed: false };
  if (check.status !== 0 || !results.served[runtime].passed) failed.push(`the pure example built and served by ${runtime}`);
}
save();

// 2. A command-line program.
const cli = join(work, 'cli');
mkdirSync(cli, { recursive: true });
writeFileSync(join(cli, 'lean-toolchain'), readFileSync(join(root, 'examples/edge-pure/lean-toolchain')));
writeFileSync(join(cli, 'package.json'), '{ "name": "cli", "private": true }\n');
writeFileSync(join(cli, 'Main.lean'), `def main (args : List String) : IO UInt32 := do
  IO.println s!"args: {args}"
  IO.print "no newline; "
  IO.eprint "to stderr"
  let t ← IO.asTask (pure ((List.range 10).foldl (· + ·) 0))
  match t.get with
  | .ok n => IO.println s!"task: {n}"
  | .error e => throw e
  IO.sleep 20
  if args.contains "exit5" then IO.Process.exit 5
  return (if args.isEmpty then 0 else 3)
`);
for (const runtime of ['bun', 'deno']) {
  const cases = [[[], 0, 'args: []\nno newline; task: 45\n'], [['a b', 'c'], 3, 'args: [a b, c]\nno newline; task: 45\n'], [['exit5'], 5, 'args: [exit5]\nno newline; task: 45\n']];
  results.cli[runtime] = cases.map(([args, code, stdout]) => {
    const r = lasm(runtime, cli, ['Main.lean', '--', ...args]);
    const out = r.stdout.replaceAll('\r\n', '\n');
    // The Windows guard appends its JSON record to stdout after the program's.
    const ok = r.status === code && (windows ? out.includes(stdout) : out.endsWith(stdout)) && r.stderr.includes('to stderr');
    if (!ok) failed.push(`lasm Main.lean -- ${args.join(' ')} under ${runtime} (exit ${r.status}, stdout ${JSON.stringify(out.slice(-200))}, stderr ${JSON.stringify(r.stderr.slice(-400))})`);
    return { args, exit: r.status, ok };
  });
}
save();

// 3. The Hono template and its Bun and Deno scripts.
const app = join(work, 'hono-app');
sh(process.execPath, [lasmBin, 'init', app, '--template', 'hono']);
{
  // The template's devDependency is the unpublished @lasm/cli; the installed candidate stands in.
  const file = join(app, 'package.json'), pkg = JSON.parse(readFileSync(file, 'utf8'));
  delete pkg.devDependencies;
  writeFileSync(file, JSON.stringify(pkg, null, 2) + '\n');
  results.template.scripts = Object.fromEntries(Object.entries(pkg.scripts).filter(([name]) => /bun|deno/.test(name)));
}
sh(bun, ['install'], { cwd: app });
sh(npm, ['install', '--no-save', '--no-audit', '--no-fund', tgz], { cwd: app });
const script = (runtime, args) => spawnSync(process.execPath, [...bounded(), ...(runtime === 'bun' ? [bun, 'run'] : [deno, 'task']), ...args],
  { cwd: app, env, stdio: 'inherit', windowsHide: true });
for (const [runtime, port] of [['bun', 8901], ['deno', 8902]]) {
  const r = timed(`template build:${runtime}`, () => script(runtime, [`build:${runtime}`]));
  if (r.status !== 0) { failed.push(`${runtime} build:${runtime} in the Hono template`); continue; }
  const file = join(work, `template-${runtime}.json`);
  spawnSync(process.execPath, [join(root, 'scripts/edge/portable-check.mjs'), runtime === 'bun' ? bun : deno, `${runtime}/main.mjs`, app, 'hono', String(port), file], { env, stdio: 'inherit' });
  results.template[runtime] = existsSync(file) ? JSON.parse(readFileSync(file, 'utf8')) : { passed: false };
  if (!results.template[runtime].passed) failed.push(`the Hono template built with build:${runtime} and served by ${runtime}`);
}
results.failed = failed;
save();

const summary = `### Bun and Deno on ${results.platform}\n\nNode ${versions.node}, Bun ${versions.bun}, ${versions.deno}.\n\n`
  + `- Builds of the pure example (Node build, edge targets, bun/deno targets): ${failed.some(f => f.startsWith('lasm build')) ? 'FAIL' : 'pass'}; `
  + `within-platform identity: ${failed.some(f => f.includes('differs')) ? 'NO' : 'yes'}\n`
  + `- Served: ${['bun', 'deno'].map(r => `${r} ${results.served[r]?.passed ? 'pass' : 'FAIL'}`).join(', ')}\n`
  + `- CLI program (lasm Main.lean): ${['bun', 'deno'].map(r => `${r} ${results.cli[r]?.every(c => c.ok) ? 'pass' : 'FAIL'}`).join(', ')}\n`
  + `- Hono template scripts: ${['bun', 'deno'].map(r => `${r} ${results.template[r]?.passed ? 'pass' : 'FAIL'}`).join(', ')}\n`
  + `- Seconds: ${Object.entries(results.seconds ?? {}).map(([k, v]) => `${k} ${v}`).join('; ')}\n`;
console.log(summary);
if (process.env.GITHUB_STEP_SUMMARY) appendFileSync(process.env.GITHUB_STEP_SUMMARY, summary);
if (failed.length) { console.error('Failed:\n  ' + failed.join('\n  ')); process.exit(1); }
