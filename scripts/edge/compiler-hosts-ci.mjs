// Phase 7.5 CI (.github/workflows/workers.yml, job hosts; Linux x64 and arm64):
// the compiler itself under Node, Bun and Deno.
// 1. examples/edge-pure built under each runtime: the Node build (dist/) and
//    the portable build must be byte-identical across the three, and the
//    portable build is served by Bun and Deno (scripts/edge/portable-check.mjs).
// 2. A command-line program run with `lasm Main.lean -- …` under Bun and Deno
//    (the default target is the runtime): arguments, stdout and stderr bytes,
//    and exit codes from main's result and IO.Process.exit.
// Needs LASM_APPLICATION_RUNTIME and LASM_EDGE_RUNTIME.
//   node scripts/edge/compiler-hosts-ci.mjs WORK_DIR TOOLS_DIR
import { execFileSync, spawnSync } from 'node:child_process';
import { appendFileSync, cpSync, existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { createHash } from 'node:crypto';
import { join, resolve, dirname } from 'node:path';
import { fileURLToPath } from 'node:url';
import { headlessEnvironment } from './headless.mjs';

const root = resolve(dirname(fileURLToPath(import.meta.url)), '../..');
const [workArg, toolsArg] = process.argv.slice(2);
const work = resolve(workArg), tools = resolve(toolsArg), bin = name => join(tools, 'node_modules/.bin', name);
mkdirSync(work, { recursive: true });
const env = headlessEnvironment(process.env, { DENO_NO_UPDATE_CHECK: '1', DENO_NO_PROMPT: '1' });
const passed = ['LASM_APPLICATION_RUNTIME', 'LASM_EDGE_RUNTIME', 'LASM_BUILD_JOBS'].filter(key => process.env[key]).map(key => `${key}=${process.env[key]}`);
const bounded = [join(root, 'scripts/full-lean/run-bounded.mjs'), '--', 'python3', join(root, 'scripts/full-lean/base-pages.py'), 'env', ...passed];
const runtimes = { node: [process.execPath], bun: [bin('bun')], deno: [bin('deno'), 'run', '-A'] };
const lasm = (runtime, project, args, options = {}) => spawnSync(process.execPath, [...bounded, ...runtimes[runtime], join(root, 'bin/lasm.mjs'), ...args],
  { cwd: project, env, encoding: 'utf8', maxBuffer: 64 << 20, ...options });
const sha256 = file => createHash('sha256').update(readFileSync(file)).digest('hex');
const results = { platform: `${process.platform}-${process.arch}`,
  versions: { bun: execFileSync(bin('bun'), ['--version'], { encoding: 'utf8' }).trim(), deno: execFileSync(bin('deno'), ['--version'], { encoding: 'utf8' }).split('\n')[0] },
  builds: {}, served: {}, cli: {} };
const failed = [];

// 1. The pure example under each runtime.
for (const runtime of ['node', 'bun', 'deno']) {
  const project = join(work, `pure-${runtime}`);
  if (!existsSync(project)) cpSync(join(root, 'examples/edge-pure'), project, { recursive: true });
  const started = Date.now();
  // Node: the Node build, then both portable targets; Bun and Deno: their default target.
  const builds = runtime === 'node' ? [['build', 'Main.lean'], ['build', 'Main.lean', '--target', 'bun'], ['build', 'Main.lean', '--target', 'deno']] : [['build', 'Main.lean']];
  for (const args of builds) {
    const result = lasm(runtime, project, args, { stdio: 'inherit' });
    if (result.status !== 0) throw new Error(`lasm ${args.join(' ')} failed under ${runtime}`);
  }
  results.builds[runtime] = { seconds: (Date.now() - started) / 1000, dist: sha256(join(project, 'dist/program.wasm')),
    ...(runtime !== 'deno' ? { bun: sha256(join(project, 'bun/lasm/program.wasm')) } : {}),
    ...(runtime !== 'bun' ? { deno: sha256(join(project, 'deno/lasm/program.wasm')) } : {}) };
}
for (const runtime of ['bun', 'deno']) {
  const b = results.builds[runtime], n = results.builds.node;
  if (b.dist !== n.dist) failed.push(`the Node build under ${runtime} differs from Node's`);
  if (b[runtime] !== n[runtime]) failed.push(`the ${runtime} target built under ${runtime} differs from Node's`);
}
for (const [runtime, port] of [['bun', 8897], ['deno', 8898]]) {
  const file = join(work, `served-${runtime}.json`);
  const check = spawnSync(process.execPath, [join(root, 'scripts/edge/portable-check.mjs'), bin(runtime), `${runtime}/main.mjs`, join(work, `pure-${runtime}`), 'pure', String(port), file], { env, stdio: 'inherit' });
  results.served[runtime] = existsSync(file) ? JSON.parse(readFileSync(file, 'utf8')) : { passed: false };
  if (check.status !== 0 || !results.served[runtime].passed) failed.push(`the pure example built and served by ${runtime}`);
}

// 2. A command-line program with lasm Main.lean under Bun and Deno.
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
    // The guard and Lasm's own lines go to stderr; the program's bytes are compared.
    const ok = r.status === code && r.stdout.endsWith(stdout) && r.stderr.includes('to stderr');
    if (!ok) failed.push(`lasm Main.lean -- ${args.join(' ')} under ${runtime} (exit ${r.status}, stdout ${JSON.stringify(r.stdout.slice(-200))})`);
    return { args, exit: r.status, ok };
  });
}

writeFileSync(join(work, 'hosts-results.json'), JSON.stringify(results, null, 2) + '\n');
const summary = `### The compiler under Node, Bun and Deno (${results.platform})\n\n${results.versions.bun ? `Bun ${results.versions.bun}, ${results.versions.deno}. ` : ''}`
  + `Pure example build seconds: ${['node', 'bun', 'deno'].map(r => `${r} ${results.builds[r].seconds}`).join(', ')}; `
  + `byte-identical: ${failed.some(f => f.includes('differs')) ? 'NO' : 'yes'}; served: ${['bun', 'deno'].map(r => `${r} ${results.served[r].passed ? 'pass' : 'FAIL'}`).join(', ')}; `
  + `CLI program: ${['bun', 'deno'].map(r => `${r} ${results.cli[r].every(c => c.ok) ? 'pass' : 'FAIL'}`).join(', ')}.\n`;
console.log(summary);
if (process.env.GITHUB_STEP_SUMMARY) appendFileSync(process.env.GITHUB_STEP_SUMMARY, summary);
if (failed.length) { console.error('Failed: ' + failed.join('; ')); process.exit(1); }
