// Language coverage harness: a `lake` (or reviewed `leanmake`) stand-in for the
// deployed phase of an unchanged upstream Lake driver. Every native command runs
// exactly as invoked, with Lake's own native executables in place. Afterwards each
// built `lean_exe` is compiled from its root module through the installed Lasm CLI
// and its executable path is replaced by a launcher of that deployment, so the
// driver's direct invocations (`./.lake/build/bin/foo`) run the deployed program.
// The native executable is moved aside (keeping its inode, hard links, mode and
// times) and moved back before the next native command, so Lake never sees the
// launcher. `lake exe T ARGS` is `lake build T` (native) followed by the deployed T.
// State and logs live outside the test's tree, in LASM_LAKE_SHIM_STATE.
// A reviewed per-test mode may restrict replacement to `lake exe` (LASM_LAKE_SHIM_MODE
// =exe-only) when the driver inspects the built executable files themselves.
// `lean [-D…] --run FILE ARGS` from PATH (e.g. `lake env lean --run`) builds FILE
// through the installed CLI and runs the deployment; other `lean` calls are native.
//   node lake-shim.mjs lake|leanmake|lean ARGS...
import { existsSync, mkdirSync, readFileSync, writeFileSync, renameSync, rmSync, chmodSync, appendFileSync, lstatSync, statSync } from 'node:fs';
import { join, resolve, dirname, isAbsolute, relative } from 'node:path';
import { spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';

const [tool, ...args] = process.argv.slice(2);
const windows = process.platform === 'win32';
const env = name => { const value = process.env[name]; if (!value) throw new Error('lake-shim needs ' + name); return value; };
const stateDir = env('LASM_LAKE_SHIM_STATE'), stateFile = join(stateDir, 'state.json');
const state = existsSync(stateFile) ? JSON.parse(readFileSync(stateFile, 'utf8'))
  : { substituted: {}, deployments: {}, events: [], next: 0 };
const save = () => writeFileSync(stateFile, JSON.stringify(state, null, 1) + '\n');
const event = record => { state.events.push({ at: new Date().toISOString(), ...record }); save(); };
const sha256 = file => createHash('sha256').update(readFileSync(file)).digest('hex');
const invocations = join(stateDir, 'invocations.log');
const launcherText = (deployment, file) => `#!/usr/bin/env bash
# lasm language-coverage launcher for ${file}
printf '%s\\n' ${JSON.stringify(file)} >> ${JSON.stringify(invocations.replaceAll('\\', '/'))}
exec ${JSON.stringify(env('LASM_LAKE_SHIM_ENGINE').replaceAll('\\', '/'))} ${JSON.stringify(join(deployment, 'main.mjs').replaceAll('\\', '/'))} "$@"
`;
// On Windows the launcher is the extensionless name Git Bash resolves first.
const launcherPath = file => windows ? file.replace(/\.exe$/i, '') : file;

function restore() {
  for (const [file, entry] of Object.entries(state.substituted)) {
    const launcher = launcherPath(file);
    // Only an untouched launcher is swapped back for its native file. If the driver
    // deleted the executable (or rebuilt the directory), the native file stays gone.
    const intact = existsSync(launcher) && readFileSync(launcher, 'utf8') === entry.launcher;
    if (intact) rmSync(launcher);
    if (intact && existsSync(entry.stash) && !existsSync(file)) renameSync(entry.stash, file);
    else rmSync(entry.stash, { force: true });
    delete state.substituted[file];
  }
  save();
}

function run(program, argv, options = {}) {
  const result = spawnSync(program, argv, { stdio: 'inherit', ...options });
  if (result.error) throw result.error;
  return result.status ?? 128 + (result.signal ? 1 : 0);
}

// Lake's global options that take a value. Everything else starting with '-' is a flag.
const valued = new Set(['-d', '--dir', '-f', '--file', '-K', '--packages', '--log-level', '--fail-level', '--ansi-level']);
function parseLake(argv) {
  const options = [], rest = [...argv];
  let directory = '.', file, keys = [], packages = [];
  while (rest.length && rest[0].startsWith('-')) {
    const option = rest.shift(), [name, inline] = option.split(/=(.*)/s);
    let value = inline;
    if (valued.has(name) && value === undefined) value = rest.shift();
    options.push(option, ...(valued.has(name) && inline === undefined ? [value] : []));
    if (name === '-d' || name === '--dir') directory = value;
    if (name === '-f' || name === '--file') file = value;
    if (name === '-K') keys.push('-K' + value);
    if (name === '--packages') packages.push('--packages=' + resolve(value));
    if (name.startsWith('-K') && name.length > 2) keys.push(option);
  }
  return { options, command: rest.shift(), rest, directory: resolve(directory), file, keys: [...keys, ...packages] };
}

function listExes(directory, file, keys) {
  if (!['lakefile.lean', 'lakefile.toml'].some(name => existsSync(join(directory, name))) && !file) return [];
  const result = spawnSync(env('LASM_NATIVE_LEAN'), ['--plugin=' + env('LASM_LAKE_SHIM_PLUGIN'), '--run',
    env('LASM_LAKE_SHIM_EXES'), directory, ...(file ? [file] : []), ...keys], { encoding: 'utf8', cwd: directory, maxBuffer: 16 << 20 });
  const line = (result.stdout ?? '').split('\n').find(text => text.startsWith('['));
  if (result.status !== 0 || !line) { event({ kind: 'exe-listing-failed', directory, stderr: (result.stderr ?? '').slice(-2000) }); return []; }
  return JSON.parse(line);
}

// Build (once per native executable identity) and substitute every built exe.
function substitute(exes) {
  for (const exe of exes) {
    const file = exe.file, current = state.substituted[file];
    if (current) {
      // Still our launcher: nothing to do. Lake replaced it: forget the stash.
      if (existsSync(launcherPath(file)) && readFileSync(launcherPath(file), 'utf8') === current.launcher && !existsSync(windows ? file : '\0')) continue;
      rmSync(current.stash, { force: true }); delete state.substituted[file];
    }
    if (!existsSync(file) || !lstatSync(file).isFile()) continue;
    const native = sha256(file), key = exe.source + '\0' + native;
    let deployment = state.deployments[key];
    if (!deployment) {
      const output = join(stateDir, 'deployments', String(state.next++));
      const built = buildDeployment(exe.source, output);
      deployment = state.deployments[key] = { output, ...built, source: exe.source, exe: exe.name, nativeSha256: native };
      event({ kind: built.ok ? 'deployment-built' : 'deployment-failed', exe: exe.name, source: exe.source, ...built });
    }
    if (!deployment.ok) continue;
    const stash = join(stateDir, 'stash', String(state.next++));
    mkdirSync(dirname(stash), { recursive: true });
    renameSync(file, stash);
    const launcher = launcherText(deployment.output, file);
    writeFileSync(launcherPath(file), launcher); chmodSync(launcherPath(file), 0o755);
    state.substituted[file] = { stash, launcher, exe: exe.name, deployment: deployment.output };
    save();
  }
}

// The release pin nearest to the source must select the matching Lean for the
// installed CLI. Upstream test trees pin their own stage build instead; that one
// file is swapped for the duration of the Lasm build only and restored byte for byte.
// `standalone` (for `lean --run FILE`): a pin beside FILE makes the CLI treat it as a
// standalone source, as `lean --run` ignores enclosing Lake workspaces.
function buildDeployment(source, output, { standalone = false } = {}) {
  let directory = dirname(source), pin;
  for (;;) {
    if (standalone) { if (existsSync(join(directory, 'lean-toolchain'))) pin = join(directory, 'lean-toolchain'); break; }
    if (existsSync(join(directory, 'lean-toolchain'))) { pin = join(directory, 'lean-toolchain'); break; }
    const parent = dirname(directory); if (parent === directory) break; directory = parent;
  }
  const release = `leanprover/lean4:v${env('LASM_LAKE_SHIM_LEAN')}\n`;
  const original = pin && readFileSync(pin), times = pin && statSync(pin);
  const swap = pin && original.toString() !== release;
  const created = !pin && join(dirname(source), 'lean-toolchain');
  try {
    if (swap) writeFileSync(pin, release);
    if (created) writeFileSync(created, release);
    const environment = Object.fromEntries(Object.entries(process.env).filter(([key]) => !/^(?:LEAN_|LAKE_|ELAN_|LASM_APPLICATION_RUNTIME)/.test(key)));
    const result = spawnSync(env('LASM_BUILD_NODE'), [join(env('LASM_COMPILER'), 'bin/lasm.mjs'), 'build', source, '--output', output],
      { cwd: dirname(source), env: environment, encoding: 'utf8', maxBuffer: 64 << 20, timeout: 1_800_000 });
    const log = (result.stdout ?? '') + (result.stderr ?? '');
    const policy = /Lasm does not support runtime Lean compilation[^\n]*\n(Detected [^\n]*)?/.exec(log);
    return { ok: result.status === 0, code: result.status, policy: !!policy, detected: policy?.[1], log: log.slice(-4000),
      pinAdaptation: swap ? 'swapped' : created ? 'created' : 'none',
      wasmSha256: result.status === 0 ? sha256(join(output, 'program.wasm')) : undefined };
  } finally {
    if (swap) { writeFileSync(pin, original); }
    if (created) rmSync(created, { force: true });
  }
}

function leanTool(args, { standalone = true } = {}) {
  let code;
  const at = args.indexOf('--run');
  if (at < 0 || at + 1 >= args.length || !args.slice(0, at).every(arg => /^-D/.test(arg))) {
    code = run(env('LASM_NATIVE_LEAN'), args);
  } else {
    const source = resolve(args[at + 1]), key = `lean --run ${standalone}\0` + source + '\0' + sha256(source);
    let deployment = state.deployments[key];
    if (!deployment) {
      const output = join(stateDir, 'deployments', String(state.next++));
      deployment = state.deployments[key] = { output, ...buildDeployment(source, output, { standalone }), source, exe: 'lean --run' };
      event({ kind: deployment.ok ? 'deployment-built' : 'deployment-failed', exe: 'lean --run', source, ...deployment });
    }
    if (!deployment.ok) {
      process.stderr.write(`lake-shim: lean --run ${args[at + 1]} has no deployed substitute\n`);
      code = 97;
    } else {
      appendFileSync(invocations, 'lean --run ' + source + '\n');
      code = run(env('LASM_LAKE_SHIM_ENGINE'), [join(deployment.output, 'main.mjs'), ...args.slice(at + 2)]);
      event({ kind: 'deployed-run', source, code });
    }
  }
  return code;
}
let code;
const exeOnly = process.env.LASM_LAKE_SHIM_MODE === 'exe-only';
const parsedLake = tool === 'lake' ? parseLake(args) : undefined;
// Commands where Lake runs a built executable itself (`env CMD`, test/lint drivers,
// a CURL mock for `cache`) keep the launchers in place; if Lake rebuilds instead,
// its native executable runs and no deployed invocation is recorded. Every other
// native command sees Lake's own outputs.
const keepsLaunchers = ['env', 'test', 'lint', 'cache'].includes(parsedLake?.command);
if (!keepsLaunchers) restore();
if (tool === 'lean') {
  code = leanTool(args);
} else if (tool === 'leanmake') {
  // Reviewed mapping for leanmake drivers: LASM_LAKE_SHIM_LEANMAKE='{"build/bin/test":"test.lean"}'.
  code = run(env('LASM_NATIVE_LEANMAKE'), args);
  const map = JSON.parse(env('LASM_LAKE_SHIM_LEANMAKE'));
  event({ kind: 'native', tool, args, code });
  substitute(Object.entries(map).map(([file, source]) => ({ name: file, file: resolve(file), source: resolve(source) })));
} else {
  const parsed = parsedLake;
  const envLean = parsed.command === 'env' && parsed.rest[0] === 'lean' ? parsed.rest.slice(1) : undefined;
  // `lake lean FILE -- --run FILE ARGS`: run FILE's main with the workspace's imports.
  const separator = parsed.command === 'lean' ? parsed.rest.indexOf('--') : -1;
  const lakeLean = separator === 1 && parsed.rest[separator + 1] === '--run' ? parsed.rest.slice(separator + 1) : undefined;
  if (lakeLean) {
    code = leanTool(lakeLean, { standalone: false });
    event({ kind: 'lake-lean', args: lakeLean, code });
  } else if (envLean && envLean.includes('--run')) {
    // `lake env` puts the toolchain first on PATH; route its `lean --run` here.
    code = leanTool(envLean);
    event({ kind: 'env-lean', args: envLean, code });
  } else if (['exe', 'exec'].includes(parsed.command) && parsed.rest.length) {
    const [target, ...programArgs] = parsed.rest;
    // Native build of the same target; its log goes to stderr like a build inside `lake exe`.
    code = run(env('LASM_NATIVE_LAKE'), [...parsed.options, 'build', target], { stdio: ['inherit', 2, 'inherit'] });
    event({ kind: 'native', tool, args: [...parsed.options, 'build', target], code, for: 'exe' });
    if (code === 0) {
      const exes = listExes(parsed.directory, parsed.file, parsed.keys);
      substitute(exes);
      const name = target.replace(/^@?[^/]*\//, '').replace(/^@/, '');
      const exe = exes.find(row => row.name === name);
      const entry = exe && state.substituted[exe.file];
      if (!entry) {
        event({ kind: 'exe-not-substituted', target });
        process.stderr.write(`lake-shim: ${target} has no deployed substitute\n`);
        code = 97;
      } else {
        appendFileSync(invocations, exe.file + '\n');
        code = run(env('LASM_LAKE_SHIM_ENGINE'), [join(entry.deployment, 'main.mjs'), ...programArgs]);
        event({ kind: 'deployed-exe', target, code });
        if (exeOnly) restore();
      }
    }
  } else {
    code = run(env('LASM_NATIVE_LAKE'), args);
    event({ kind: 'native', tool, args, code });
    if (parsed.command !== 'env' && !exeOnly) substitute(listExes(parsed.directory, parsed.file, parsed.keys));
  }
}
process.exitCode = code;
