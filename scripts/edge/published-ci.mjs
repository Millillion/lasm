// Phase 7.5 (.github/workflows/bun-deno-published.yml): the published
// @lasm/cli and @lasm/create installed and run with Bun and Deno only, as a
// user does, on every platform. Node and npm are removed from PATH for every
// Bun and Deno command, so nothing falls back to them.
// 1. Bun: `bun add @lasm/cli@V` (platform optionalDependencies), then
//    examples/edge-pure built with `bun x --bun lasm build` and served by Bun;
//    `bunx --bun @lasm/cli@V Main.lean -- …` runs a command-line program from
//    an empty directory; `bun create @lasm@V app --template hono`, `bun install`,
//    `bun run build:bun`, served by Bun.
// 2. Deno: the same with `deno install`, `deno run -A npm:@lasm/cli@V` and
//    `deno run -A npm:@lasm/create@V`, then `deno task build:deno`.
// Deno 2.9 skips npm versions younger than 24 hours by default (its minimum
// dependency age), so every Deno command passes --minimum-dependency-age=0;
// docs/BUN_DENO.md tells users the same.
// Skips cleanly (exit 0, a notice) when the registry has no release of
// @lasm/cli yet (only the 0.0.0 placeholders). A release before 0.2.0 has no
// Bun/Deno runtime support (src/js-runtime.mjs): Bun and Deno then only install
// it, and the runtime checks are skipped with a notice.
// Pre-release rehearsal (npm-dist.yml): with npm_config_registry set to the
// loopback Verdaccio holding this commit's packages, Bun and Deno use that
// registry (NPM_CONFIG_REGISTRY, BUN_CONFIG_REGISTRY), and with
// LASM_PUBLISHED_REQUIRE=1 a missing release, missing @lasm/create or missing
// Bun/Deno support fails instead of being skipped.
//   node scripts/edge/published-ci.mjs WORK_DIR TOOLS_DIR [VERSION]
import { execFileSync, spawnSync } from 'node:child_process';
import { appendFileSync, cpSync, existsSync, mkdirSync, readFileSync, realpathSync, symlinkSync, writeFileSync } from 'node:fs';
import { createRequire } from 'node:module';
import { delimiter, dirname, join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { headlessEnvironment } from './headless.mjs';

const root = resolve(dirname(fileURLToPath(import.meta.url)), '../..');
const [workArg, toolsArg, versionArg] = process.argv.slice(2);
const work = resolve(workArg), tools = resolve(toolsArg);
const windows = process.platform === 'win32';
const registry = (process.env.npm_config_registry || 'https://registry.npmjs.org/').replace(/\/?$/, '/');
mkdirSync(work, { recursive: true });
const results = { platform: `${process.platform}-${process.arch}`, registry, steps: [] };
const save = () => writeFileSync(join(work, 'published-results.json'), JSON.stringify(results, null, 2) + '\n');
const summarize = text => { console.log(text); if (process.env.GITHUB_STEP_SUMMARY) appendFileSync(process.env.GITHUB_STEP_SUMMARY, text + '\n'); };
const required = process.env.LASM_PUBLISHED_REQUIRE === '1';
const notice = text => {
  if (required) { console.error(`::error::${text} (LASM_PUBLISHED_REQUIRE=1)`); results.failed = [text]; save(); process.exit(1); }
  console.log(`::notice::${text}`); results.notices = [...(results.notices ?? []), text];
};

// The release to test: the argument, else the `latest` dist-tag.
const packument = async name => { const r = await fetch(registry + name.replace('/', '%2f'), { headers: { accept: 'application/json' } }); return r.ok ? r.json() : null; };
const cliMeta = await packument('@lasm/cli'), createMeta = await packument('@lasm/create');
const version = versionArg || cliMeta?.['dist-tags']?.latest;
const released = v => !!v && !/^0\.0\./.test(v) && !!cliMeta?.versions?.[v];
if (!released(version)) {
  results.skipped = `@lasm/cli has no release on ${registry} yet (latest: ${version ?? 'none'}; 0.0.0 is the placeholder)`;
  save();
  notice(`Skipped: ${results.skipped}. This job tests the published packages once a release exists.`);
  summarize(`### Published @lasm/cli with Bun and Deno on ${results.platform}\n\nSkipped: ${results.skipped}.\n`);
  process.exit(0);
}
results.version = version;
const hasCreate = !!createMeta?.versions?.[version];

// The runtimes' own executables; Bun's npm package names it bin/bun.exe everywhere.
const toolsRequire = createRequire(join(tools, 'package.json'));
const bunExe = join(dirname(toolsRequire.resolve('bun/package.json')), 'bin', 'bun.exe');
const deno = toolsRequire(join(dirname(toolsRequire.resolve('deno/package.json')), 'install_api.cjs')).runInstall();
const shims = join(work, 'runtime-bin');
mkdirSync(shims, { recursive: true });
let bun = bunExe;
if (!windows) { bun = join(shims, 'bun'); if (!existsSync(bun)) symlinkSync(bunExe, bun); if (!existsSync(join(shims, 'bunx'))) symlinkSync(bunExe, join(shims, 'bunx')); }
else for (const name of ['bun.exe', 'bunx.exe']) if (!existsSync(join(shims, name))) cpSync(bunExe, join(shims, name));
if (!windows && !existsSync(join(shims, 'deno'))) symlinkSync(deno, join(shims, 'deno'));
if (windows && !existsSync(join(shims, 'deno.exe'))) cpSync(deno, join(shims, 'deno.exe'));
const bunx = windows ? join(shims, 'bunx.exe') : join(shims, 'bunx');

// PATH without any directory that holds node or npm; the runtimes first.
const env = headlessEnvironment(process.env, { DENO_NO_UPDATE_CHECK: '1', DENO_NO_PROMPT: '1',
  BUN_INSTALL_CACHE_DIR: join(work, 'bun-cache'), DENO_DIR: join(work, 'deno-cache') });
const pathKey = Object.keys(env).find(k => k.toUpperCase() === 'PATH') ?? 'PATH';
const nodeNames = windows ? ['node.exe', 'npm.cmd', 'npm', 'npx.cmd'] : ['node', 'npm', 'npx'];
const removed = [];
env[pathKey] = [shims, ...(env[pathKey] ?? '').split(delimiter).filter(dir => {
  const hasNode = dir && nodeNames.some(name => existsSync(join(dir, name)));
  if (hasNode) removed.push(dir);
  return dir && !hasNode;
})].join(delimiter);
for (const key of Object.keys(env)) if (/^npm_/i.test(key)) delete env[key];
// Another registry than npm's (the rehearsal's loopback Verdaccio): Bun, Deno and Lasm's
// own registry fetch all use it.
// The Linux resource guard passes only a few variables (HOME among them), so a private
// HOME holds an .npmrc naming the registry too; Bun and Deno both read ~/.npmrc.
if (registry !== 'https://registry.npmjs.org/') {
  Object.assign(env, { NPM_CONFIG_REGISTRY: registry, BUN_CONFIG_REGISTRY: registry });
  if (!windows) env.npm_config_registry = registry;
  const home = join(work, 'home');
  mkdirSync(home, { recursive: true });
  writeFileSync(join(home, '.npmrc'), `registry=${registry}\n`);
  env.HOME = home;
  results.registryOverride = { home };
}
results.pathWithoutNode = removed;
const denoAge = '--minimum-dependency-age=0';

// Every command in the resource guard (a report each: required on Windows).
let workloads = 0;
const guarded = (command, args, cwd) => spawnSync(process.execPath, [join(root, 'scripts/full-lean/run-bounded.mjs'),
  '--report', join(work, 'resource-runs', `${++workloads}.json`), '--', command, ...args],
  { cwd, env, encoding: 'utf8', maxBuffer: 64 << 20, windowsHide: true });
const failed = [];
const step = (name, command, args, cwd, check = () => true) => {
  const started = Date.now();
  console.log(`\n=== ${name}\n$ ${[command, ...args].join(' ')}  (in ${cwd})`);
  const r = guarded(command, args, cwd);
  process.stdout.write(r.stdout ?? ''); process.stderr.write(r.stderr ?? '');
  let ok = r.status === 0, problem = ok ? '' : `exit ${r.status}`;
  if (ok) { try { const verdict = check(r); if (verdict !== true) { ok = false; problem = String(verdict); } } catch (error) { ok = false; problem = error.message; } }
  results.steps.push({ name, ok, seconds: (Date.now() - started) / 1000, ...(ok ? {} : { problem, stdout: (r.stdout ?? '').slice(-1500), stderr: (r.stderr ?? '').slice(-3000) }) });
  if (!ok) failed.push(`${name}: ${problem}`);
  save();
  return ok;
};
const serve = (name, runtime, entry, project, app, port) => {
  const file = join(work, `${name.replace(/\W+/g, '-')}.json`);
  const started = Date.now();
  const r = spawnSync(process.execPath, [join(root, 'scripts/edge/portable-check.mjs'), runtime, entry, project, app, String(port), file], { env, stdio: 'inherit' });
  const served = existsSync(file) ? JSON.parse(readFileSync(file, 'utf8')) : { passed: false };
  const ok = r.status === 0 && served.passed;
  results.steps.push({ name, ok, seconds: (Date.now() - started) / 1000, firstResponseMs: served.firstResponseMs, httpMsPerRequest: served.httpMsPerRequest });
  if (!ok) failed.push(name);
  save();
};
const project = (name, pkg = { name, private: true }) => {
  const dir = join(work, name);
  mkdirSync(dir, { recursive: true });
  writeFileSync(join(dir, 'package.json'), JSON.stringify(pkg, null, 2) + '\n');
  return dir;
};
const pure = dir => { for (const f of ['Main.lean', 'lean-toolchain']) cpSync(join(root, 'examples/edge-pure', f), join(dir, f)); return dir; };
const cliSource = `def main (args : List String) : IO UInt32 := do
  IO.println s!"args: {args}"
  IO.eprint "to stderr"
  return 0
`;
const cliProject = name => { const dir = join(work, name); mkdirSync(dir, { recursive: true });
  writeFileSync(join(dir, 'Main.lean'), cliSource); cpSync(join(root, 'examples/edge-pure/lean-toolchain'), join(dir, 'lean-toolchain')); return dir; };
// The Windows guard appends its JSON record to stdout after the program's.
const cliCheck = r => (r.stdout.replaceAll('\r\n', '\n')[windows ? 'includes' : 'endsWith']('args: [a b, c]\n') && r.stderr.includes('to stderr')) || `stdout ${JSON.stringify(r.stdout.slice(-300))}`;
// The installed CLI: its version, its platform package, and whether it runs on Bun/Deno.
const installed = dir => {
  const cli = join(dir, 'node_modules/@lasm/cli');
  const pkg = JSON.parse(readFileSync(join(cli, 'package.json'), 'utf8'));
  if (pkg.version !== version) return `installed @lasm/cli ${pkg.version}, not ${version}`;
  const libc = process.platform === 'linux' ? ['glibc'] : undefined;
  // Resolved from the CLI's real directory, as Lasm resolves them: Deno does not hoist
  // a package's optional dependencies to the project's node_modules.
  const cliRequire = createRequire(realpathSync(join(cli, 'package.json')));
  const mine = Object.keys(pkg.optionalDependencies ?? {}).filter(name => {
    let file;
    try { file = cliRequire.resolve(`${name}/package.json`); } catch { return false; }
    const p = JSON.parse(readFileSync(file, 'utf8'));
    return (!p.os || p.os.includes(process.platform)) && (!p.cpu || p.cpu.includes(process.arch)) && (!p.libc || !libc || p.libc.includes(libc[0]));
  });
  results.platformPackages = mine;
  if (Object.keys(pkg.optionalDependencies ?? {}).length && !mine.length) return `no platform package for ${results.platform} installed`;
  return true;
};
const supportsRuntimes = dir => existsSync(join(dir, 'node_modules/@lasm/cli/src/js-runtime.mjs'));

const versions = { bun: execFileSync(bunExe, ['--version'], { encoding: 'utf8' }).trim(), deno: execFileSync(deno, ['--version'], { encoding: 'utf8' }).split('\n')[0] };
results.versions = versions;
console.log(`@lasm/cli@${version} from ${registry}; Bun ${versions.bun}, ${versions.deno}; removed from PATH: ${removed.join(', ') || 'nothing'}`);

// 1. Bun.
const bunPure = pure(project('bun-pure', { name: 'bun-pure', private: true }));
const bunInstalled = step('bun add @lasm/cli', bun, ['add', '--exact', `@lasm/cli@${version}`], bunPure, () => installed(bunPure));
const runtimes = bunInstalled && supportsRuntimes(bunPure);
results.runtimeSupport = runtimes;
if (bunInstalled && !runtimes) notice(`@lasm/cli@${version} predates Bun/Deno runtime support (0.2.0): only the installs are checked.`);
if (runtimes) {
  if (step('bun x --bun lasm build (pure example)', bun, ['x', '--bun', 'lasm', 'build', 'Main.lean'], bunPure, () => existsSync(join(bunPure, 'bun/main.mjs')) || 'no bun/main.mjs'))
    serve('pure example served by Bun', bunExe, 'bun/main.mjs', bunPure, 'pure', 8911);
  step('bunx --bun @lasm/cli Main.lean (empty directory)', bunx, ['--bun', `@lasm/cli@${version}`, 'Main.lean', '--', 'a b', 'c'], cliProject('bun-cli'),
    cliCheck);
}
if (hasCreate && runtimes) {
  const dir = join(work, 'bun-create'); mkdirSync(dir, { recursive: true });
  const app = join(dir, 'app');
  if (step('bun create @lasm (hono)', bun, ['create', `@lasm@${version}`, 'app', '--template', 'hono'], dir, () => existsSync(join(app, 'package.json')) || 'no app/package.json')
    && step('bun install (created app)', bun, ['install'], app, () => installed(app))
    && step('bun run build:bun (created app)', bun, ['run', 'build:bun'], app, () => existsSync(join(app, 'bun/main.mjs')) || 'no bun/main.mjs'))
    serve('created app served by Bun', bunExe, 'bun/main.mjs', app, 'hono', 8912);
} else if (!hasCreate) notice(`@lasm/create@${version} is not on the registry: bun create and the Deno create step are skipped.`);

// 2. Deno.
const denoPure = pure(project('deno-pure', { name: 'deno-pure', private: true, dependencies: { '@lasm/cli': version } }));
const denoInstalled = step('deno install @lasm/cli', deno, ['install', denoAge], denoPure, () => installed(denoPure));
if (denoInstalled && runtimes) {
  if (step('deno run npm:@lasm/cli build (pure example)', deno, ['run', '-A', denoAge, `npm:@lasm/cli@${version}`, 'build', 'Main.lean'], denoPure,
    () => existsSync(join(denoPure, 'deno/main.mjs')) || 'no deno/main.mjs'))
    serve('pure example served by Deno', deno, 'deno/main.mjs', denoPure, 'pure', 8913);
  step('deno run npm:@lasm/cli Main.lean (empty directory)', deno, ['run', '-A', denoAge, `npm:@lasm/cli@${version}`, 'Main.lean', '--', 'a b', 'c'], cliProject('deno-cli'),
    cliCheck);
}
if (hasCreate && runtimes) {
  const dir = join(work, 'deno-create'); mkdirSync(dir, { recursive: true });
  const app = join(dir, 'app');
  if (step('deno run npm:@lasm/create (hono)', deno, ['run', '-A', denoAge, `npm:@lasm/create@${version}`, 'app', '--template', 'hono'], dir, () => existsSync(join(app, 'package.json')) || 'no app/package.json')
    && step('deno install (created app)', deno, ['install', denoAge], app, () => installed(app))
    && step('deno task build:deno (created app)', deno, ['task', 'build:deno'], app, () => existsSync(join(app, 'deno/main.mjs')) || 'no deno/main.mjs'))
    serve('created app served by Deno', deno, 'deno/main.mjs', app, 'hono', 8914);
}

results.failed = failed;
save();
summarize(`### Published @lasm/cli@${version} with Bun and Deno on ${results.platform}\n\nBun ${versions.bun}, ${versions.deno}; no Node or npm on PATH.\n\n`
  + results.steps.map(s => `- ${s.name}: ${s.ok ? 'pass' : 'FAIL'} (${s.seconds} s)`).join('\n')
  + (results.notices ? '\n\n' + results.notices.map(n => `Note: ${n}`).join('\n') : '') + '\n');
if (failed.length) { console.error('Failed:\n  ' + failed.join('\n  ')); process.exit(1); }
