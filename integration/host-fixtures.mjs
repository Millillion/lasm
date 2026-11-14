// Host behaviour of ordinary Lean programs on Node against native Lean: the
// fixtures of the unit files that built with the retired Lean 4.32 library
// pipeline (docs/TESTING.md#test-quality-audit), ported to the current one.
// Each program is built with an installed CLI (`lasm build`, the node target)
// and run with Node; upstream Lean's `lean --run` on the same source is the
// oracle. A scenario (its directory, arguments, environment) is set up afresh
// at the same path for each run, so printed paths agree.
//   node integration/host-fixtures.mjs --lasm .../bin/lasm.mjs --lean-bin LEAN/bin --work DIR [--only a,b] [--out result.json]
// Linux (most fixtures are POSIX); exits 1 when any case fails.
import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';
import { chmodSync, closeSync, constants, copyFileSync, existsSync, lstatSync, mkdirSync, openSync, readFileSync, readdirSync,
  rmSync, symlinkSync, writeFileSync } from 'node:fs';
import { dirname, join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { parseArgs } from 'node:util';
import { setupRealPath } from '../test/fixtures/realpath/setup.mjs';
import { setupTemporaryPaths, temporaryCases, temporaryEnvironment } from '../test/fixtures/temporary-files/setup.mjs';

const root = fileURLToPath(new URL('..', import.meta.url));
const { values: options } = parseArgs({ options: { lasm: { type: 'string' }, 'lean-bin': { type: 'string' }, work: { type: 'string' },
  only: { type: 'string' }, out: { type: 'string' } } });
if (!options.lasm || !options['lean-bin'] || !options.work) throw new Error('Supply --lasm, --lean-bin and --work');
const lasm = resolve(options.lasm), lean = join(resolve(options['lean-bin']), 'lean'), work = resolve(options.work);
const posix = ['linux', 'darwin'].includes(process.platform), linux = process.platform === 'linux';
const root0 = process.getuid?.() === 0;
const fixture = name => join(root, 'test/fixtures', name);

// ---------- processes and scenario directories ----------
function execute(command, args, { cwd, env, timeout = 60_000 } = {}) {
  const result = spawnSync(command, args, { cwd, env: { ...process.env, ...env }, timeout, killSignal: 'SIGKILL', maxBuffer: 16 * 1024 * 1024 });
  return { code: result.status, signal: result.signal, stdout: result.stdout?.toString('utf8') ?? '', stderr: (result.stderr?.toString('utf8') ?? '')
    + (result.error ? String(result.error) : '') };
}
/** Removes a scenario directory, restoring the permissions a fixture took away. */
function reset(directory) {
  if (!existsSync(directory)) return;
  // Buffer paths: fixtures create names that are not UTF-8.
  (function open(path) {
    const stat = lstatSync(path);
    if (!stat.isDirectory()) return;
    chmodSync(path, 0o700);
    for (const name of readdirSync(path, { encoding: 'buffer' })) open(Buffer.concat([path, Buffer.from('/'), name]));
  })(Buffer.from(directory));
  rmSync(directory, { recursive: true, force: true });
}
const builds = new Map();
/** The built node program for `source` (one build per source file). */
function build(source) {
  if (builds.has(source)) return builds.get(source);
  const directory = join(work, 'builds', String(builds.size));
  mkdirSync(directory, { recursive: true });
  copyFileSync(source, join(directory, 'Main.lean'));
  const started = performance.now();
  const result = execute(process.execPath, [lasm, 'build', 'Main.lean'], { cwd: directory, env: { CI: '1', BROWSER: 'none', LASM_EDITOR: '0' }, timeout: 30 * 60_000 });
  const built = { source: join(directory, 'Main.lean'), program: join(directory, 'dist/main.mjs'), seconds: Math.round((performance.now() - started) / 1000),
    error: result.code === 0 ? undefined : `lasm build failed (${result.code}):\n${(result.stdout + result.stderr).split('\n')
      .filter(line => !/^\[lasm\] (Downloading|Extracting|Verifying)/.test(line)).join('\n').slice(-4000)}` };
  builds.set(source, built);
  return built;
}
/** `[command, args]` run without a core dump. For the native oracle where it is known to crash (SIGSEGV in
 * Lean's error decoders, below): ubuntu-24.04 pipes cores to systemd-coredump, which ignores a zero core
 * limit (its `core_pattern` passes the limit as unlimited) and took 25–60 s per crash, sometimes past the
 * 60 s timeout (issue #196). A core limit of exactly 1 byte makes Linux skip a piped dump (fs/coredump.c);
 * `prlimit` (util-linux) execs the command, so its status and signal are unchanged. */
const withoutCore = ([command, args]) => linux ? ['prlimit', ['--core=1:1', '--', command, ...args]] : [command, args];
/** Native Lean and the Lasm build of `source`, as [label, command prefix]; `crashes`: native Lean may crash here. */
function implementations(source, nativeFlags = [], { crashes = false } = {}) {
  const built = build(source);
  if (built.error) throw new Error(built.error);
  const native = [lean, [...nativeFlags, '--run', built.source]];
  return { native: crashes ? withoutCore(native) : native, lasm: [process.execPath, [built.program]], built };
}
/** Runs both implementations in a fresh scenario at the same path; returns both results. */
function both(name, source, { setup = () => {}, args = () => [], env = {}, cwd, nativeFlags, timeout, crashes } = {}) {
  const { native, lasm: wasm } = implementations(source, nativeFlags, { crashes });
  const scenario = join(work, 'scenarios', name);
  const results = {};
  for (const [label, [command, prefix]] of Object.entries({ native, lasm: wasm })) {
    reset(scenario);
    mkdirSync(scenario, { recursive: true });
    const context = setup(scenario) ?? {};
    results[label] = execute(command, [...prefix, ...args(scenario, context)], { cwd: cwd ?? scenario, env, timeout });
    context.after?.();
  }
  reset(scenario);
  return results;
}
const same = (results, what = ['code', 'stdout', 'stderr']) =>
  assert.deepEqual(Object.fromEntries(what.map(key => [key, results.lasm[key]])), Object.fromEntries(what.map(key => [key, results.native[key]])));
const succeeded = (result, marker) => {
  assert.equal(result.code, 0, result.stdout + result.stderr);
  assert.equal(result.stderr, '');
  if (marker) assert.ok(result.stdout.endsWith(marker), 'missing completion marker: ' + JSON.stringify(result.stdout.slice(-200)));
};
/** The native oracle passed and Lasm printed exactly what it printed (stdout, stderr, status). */
function matches(name, source, marker, options) {
  const results = both(name, source, options);
  assert.equal(results.native.code, 0, 'native: ' + results.native.stdout + results.native.stderr);
  assert.ok(results.native.stdout.endsWith(marker), 'native: missing completion marker');
  same(results);
  return results;
}

// ---------- the cases ----------
const cases = [];
const add = (name, run, { when = true } = {}) => cases.push({ name, run, skip: when === true ? undefined : when || 'not on this host' });
const dirArgument = directory => [directory];

for (const kind of ['fs', 'process']) add(`${kind}-conformance`, () => {
  // From test/conformance.test.mjs: relative paths, so each run gets its own cwd tree.
  const results = both(`${kind}-conformance`, fixture(`${kind}-conformance/Main.lean`), {
    env: { LEAN_NUM_THREADS: '4' },
    args: () => kind === 'process' ? [process.execPath] : [],
    setup: directory => {
      mkdirSync(join(directory, 'directory/inner'), { recursive: true });
      mkdirSync(join(directory, 'order'));
      writeFileSync(join(directory, 'target'), 'outside');
      writeFileSync(join(directory, 'directory/target'), 'inside');
      for (const file of ['zeta', 'alpha', 'mu', '日本語']) writeFileSync(join(directory, 'order', file), '');
      if (posix) symlinkSync('directory/inner', join(directory, 'linkdir'));
    },
  });
  assert.equal(results.native.code, 0, results.native.stderr);
  same(results);
});

add('expr-conformance', () => {
  // From test/conformance.test.mjs: building Lean.Expr values at run time needs
  // Lean's C++ kernel, which Lasm does not ship; the build must refuse and say so.
  const built = build(fixture('expr-conformance/Main.lean'));
  assert.ok(built.error, 'the build was expected to be refused');
  assert.match(built.error, /Lasm does not support runtime Lean compilation, evaluation, module-data access, or plugin loading/);
  assert.match(built.error, /Your code calls `Lean\.Expr\.sort`/);
  assert.match(built.error, /No deployment was produced\./);
  assert.equal(existsSync(built.program), false);
});

for (const probe of ['FifoFinalizer', 'FifoThreadFinalizer']) add(`finalizers-${probe}`, () => {
  // From test/finalizers.test.mjs: a FIFO held open (not read) by this process;
  // a write above its capacity makes the finalizer wait for the delayed reader.
  const source = join(root, 'scripts/full-lean/probes', probe + '.lean');
  const capacityOf = pipe => Number(execute('python3', ['-c',
    'import fcntl,os,sys; fd=os.open(sys.argv[1], os.O_RDWR|os.O_NONBLOCK); print(fcntl.fcntl(fd, 1032)); os.close(fd)', pipe]).stdout.trim());
  const results = both(`finalizers-${probe}`, source, {
    nativeFlags: ['-j4'], cwd: root,
    setup: directory => {
      const pipe = join(directory, 'pipe.fifo');
      assert.equal(execute('mkfifo', [pipe]).code, 0);
      const capacity = capacityOf(pipe);
      assert.ok(capacity > 0 && capacity <= 1024 * 1024 && capacity % 4096 === 0, String(capacity));
      const fd = openSync(pipe, constants.O_RDWR | constants.O_NONBLOCK);
      return { pipe, capacity, after: () => closeSync(fd) };
    },
    args: (directory, { pipe, capacity }) => [pipe, String(capacity + 2048)],
  });
  for (const label of ['native', 'lasm']) {
    succeeded(results[label]);
    assert.equal(results[label].stdout, 'buffered FIFO finalizer and delayed reader completed\n', label);
  }
}, { when: linux });

add('console-buffering', () => {
  const results = both('console-buffering', fixture('console-buffering/Main.lean'), { args: dirArgument });
  same(results);
  assert.equal(results.native.code, 0);
  assert.equal(results.native.stderr, 'stderr parent before|stderr child|stderr parent after\n');
  assert.ok(results.native.stdout.endsWith('normal shutdown flush\n'));
}, { when: posix });

add('cwd-permissions', () => matches('cwd-permissions', fixture('cwd-permissions/Main.lean'), 'cwd permission comparison completed\n', { args: dirArgument }),
  { when: linux && !root0 || 'Linux, not as root' });
add('cwd-removed-permissions', () => matches('cwd-removed-permissions', fixture('cwd-removed-permissions/Main.lean'),
  'removed cwd permission comparison completed\n', { args: dirArgument }), { when: linux && !root0 || 'Linux, not as root' });
add('cwd-tracking', () => matches('cwd-tracking', fixture('cwd-tracking/Main.lean'), 'cwd tracking comparison completed\n', { args: dirArgument }),
  { when: linux });
add('cwd-tracking-deleted-process', () => {
  // Lean 4.32 dereferenced a null file name in this error branch (a crash);
  // Lasm reports ENOENT. When native Lean succeeds, it is the oracle.
  const results = both('cwd-tracking-deleted-process', fixture('cwd-tracking/DeletedProcess.lean'),
    { args: directory => [join(directory, 'deleted-process')], crashes: true });
  succeeded(results.lasm);
  if (results.native.code === 0) { same(results); return undefined; }
  assert.equal(results.lasm.stdout, 'before deleted process cwd\nerror: IO.Error.noFileOrDirectory "" 2 "no such file or directory"\n');
  return `native Lean failed (${results.native.signal ?? results.native.code}); checked Lasm's ENOENT report`;
}, { when: linux });
add('cwd-errors', () => matches('cwd-errors', fixture('cwd-errors/Main.lean'), 'cwd error comparison completed\n', {
  args: dirArgument,
  setup: directory => {
    writeFileSync(join(directory, 'file'), 'file');
    symlinkSync('loop', join(directory, 'loop'));
    mkdirSync(join(directory, 'denied'), { mode: 0 });
    mkdirSync(join(directory, 'search-only'), { mode: 0o111 });
  },
}), { when: posix && !root0 || 'POSIX, not as root' });

add('environment-bytes', () => {
  // Raw environment bytes through execve (test/fixtures/environment-bytes/run.py).
  const { native, lasm: wasm } = implementations(fixture('environment-bytes/Main.lean'));
  const runPy = (command, valueHex) => {
    const result = spawnSync('python3', [fixture('environment-bytes/run.py')], { input: JSON.stringify({ command, valueHex }), encoding: 'utf8', timeout: 60_000 });
    assert.equal(result.status, 0, result.stderr);
    const output = JSON.parse(result.stdout);
    assert.equal(output.timeoutSeconds, undefined, 'timed out');
    return output;
  };
  for (const [name, valueHex] of [['ascii', Buffer.from('plain/value').toString('hex')], ['valid-unicode', Buffer.from('λ/hello/😀').toString('hex')],
    ['invalid-lead-continuation', 'ff80'], ['overlong-two', 'c080'], ['surrogate', 'eda080'], ['above-unicode-range', 'f4908080'],
    ['truncated-three', 'e282'], ['isolated-continuations', '808182']]) {
    const oracle = runPy([native[0], ...native[1]], valueHex);
    assert.equal(oracle.status, 0, name);
    assert.equal(oracle.stderrHex, '', name);
    assert.match(Buffer.from(oracle.stdoutHex, 'hex').toString(), /raw-environment comparison completed\n$/, name);
    assert.deepEqual(runPy([wasm[0], ...wasm[1]], valueHex), oracle, name);
  }
}, { when: linux });

add('getline-state', () => matches('getline-state', fixture('getline-state/Main.lean'), 'getLine stream-state comparison completed\n', { args: dirArgument }));

add('node-platform', () => {
  // From test/node-platform.test.mjs, on the real host only: the earlier
  // runtime could pretend to be Windows or macOS; the current one cannot.
  const results = both('node-platform', fixture('node-platform/Main.lean'));
  for (const label of ['native', 'lasm']) succeeded(results[label]);
  const lines = label => results[label].stdout.trimEnd().split('\n');
  assert.deepEqual(lines('lasm').toSpliced(4, 1), lines('native').toSpliced(4, 1));
  assert.match(lines('lasm')[0], /^windows=false;mac=(true|false);bits=(32|64)$/);
  const stamp = Date.parse(lines('lasm')[4]);
  assert.ok(Math.abs(stamp - Date.now()) < 5 * 60_000, lines('lasm')[4]);
});

add('process-cwd', () => {
  const results = both('process cwd λ', fixture('process-cwd/Main.lean'), {
    args: dirArgument,
    setup: directory => {
      mkdirSync(join(directory, 'base'));
      mkdirSync(join(directory, 'target/inner'), { recursive: true });
      symlinkSync(join(directory, 'target/inner'), join(directory, 'base/link'));
    },
  });
  for (const label of ['native', 'lasm']) {
    succeeded(results[label]);
    assert.equal(results[label].stdout, 'process cwd comparison completed\n', label);
  }
}, { when: posix });

add('process-exit', () => {
  // Status, buffered output and open-file contents for a return, IO.Process.exit
  // and a forced exit; built and through `lasm run` (the source launcher).
  const source = fixture('process-exit/Main.lean');
  const { built } = implementations(source);
  const scenario = join(work, 'scenarios', 'process-exit');
  reset(scenario); mkdirSync(scenario, { recursive: true });
  const observe = (label, command, args, mode) => {
    const file = join(scenario, `${label}-${mode}.txt`);
    const result = execute(command, [...args, mode, file], { cwd: scenario, timeout: label === 'run' ? 30 * 60_000 : 60_000 });
    assert.equal(result.signal, null, label);
    return { code: result.code, stdout: result.stdout, stderr: result.stderr, file: existsSync(file) ? readFileSync(file, 'utf8') : null };
  };
  for (const [mode, code] of [['return', 0], ['exit', 17], ['force', 19]]) {
    const expected = observe('native', lean, ['--run', built.source], mode);
    assert.deepEqual(expected, { code, stdout: mode === 'force' ? '' : 'buffered stdout\n', stderr: 'unbuffered stderr\n', file: mode === 'force' ? '' : 'buffered file\n' }, mode);
    assert.deepEqual(observe('lasm', process.execPath, [built.program], mode), expected, `built ${mode}`);
    const run = observe('run', process.execPath, [lasm, 'run', built.source, '--'], mode);
    // `lasm run` reports its own progress on stderr as `[lasm] …` lines.
    run.stderr = run.stderr.split(/(?<=\n)/).filter(line => !line.startsWith('[lasm] ')).join('');
    assert.deepEqual(run, expected, `lasm run ${mode}`);
  }
  reset(scenario);
});

add('process-nul', () => matches('process-nul', fixture('process-nul/Main.lean'), 'process NUL comparison completed\n', {
  args: dirArgument, env: { LASM_NUL_CONTROL: 'present' }, setup: directory => writeFileSync(join(directory, 'sentinel'), 'unchanged'),
}), { when: posix });

add('process-lifetime', () => matches('process-lifetime', fixture('process-lifetime/Main.lean'), 'process lifetime comparison completed\n'),
  { when: posix });
add('process-lifetime-drop', () => {
  // A main that drops a running child exits without waiting for or killing it.
  const { native, lasm: wasm } = implementations(fixture('process-lifetime/Drop.lean'));
  for (const [label, [command, args]] of Object.entries({ native, lasm: wasm })) {
    const result = execute(command, args, { timeout: 5_000 });
    const pid = Number(result.stdout.trim());
    try {
      succeeded(result);
      assert.ok(Number.isInteger(pid) && pid > 0, label);
      assert.equal(readFileSync(`/proc/${pid}/cmdline`, 'utf8'), '/bin/sleep\0' + '10\0', `${label}: the dropped child still runs`);
    } finally {
      try { if (readFileSync(`/proc/${pid}/cmdline`, 'utf8') === '/bin/sleep\0' + '10\0') process.kill(pid, 'SIGKILL'); }
      catch (error) { if (!['ENOENT', 'ESRCH'].includes(error.code)) throw error; }
    }
  }
}, { when: linux });

add('realpath', () => matches('realpath', fixture('realpath/Main.lean'), 'realPath comparison completed\n', { args: dirArgument, setup: setupRealPath }),
  { when: posix });

add('process-spawn-errors', () => {
  const results = matches('process-spawn-errors', fixture('process-spawn-errors/Main.lean'), 'process spawn error comparison completed\n', {
    args: dirArgument,
    setup: directory => {
      writeFileSync(join(directory, 'file'), 'not executable');
      writeFileSync(join(directory, 'executable-text'), 'printf \'%s\\n\' "$1"\n', { mode: 0o755 });
      symlinkSync('loop', join(directory, 'loop'));
      mkdirSync(join(directory, 'denied'), { mode: 0 });
    },
  });
  assert.equal(results.native.stdout.match(/child 255/g)?.length, 10);
}, { when: posix && !root0 || 'POSIX, not as root' });

for (const [name, source, count] of [['system-directories', 'system-directories/Packaged.lean', 15], ['temporary-path-bytes', 'temporary-path-bytes/Main.lean', 6]])
  add(name, () => {
    // The fixture's own comparison (compare.py): native Lean first, then the program, per case.
    const { lasm: wasm } = implementations(fixture(source));
    const output = join(work, 'scenarios', name);
    reset(output);
    const result = execute('python3', [join(fixture(dirname(source)), 'compare.py'), output, 'node', wasm[0], ...wasm[1]],
      { env: { LASM_NATIVE_LEAN: lean }, timeout: 20 * 60_000 });
    const comparison = JSON.parse(readFileSync(join(output, 'comparison.json'), 'utf8'));
    assert.equal(comparison.sourceUnchanged, true);
    assert.equal(comparison.results[0].passed, true, 'native oracle: ' + result.stdout.slice(-2000));
    assert.equal(comparison.results[1].cases.length, count);
    assert.deepEqual(comparison.results[1].cases.filter(entry => !entry.passed).map(entry => entry.name), [], result.stdout.slice(-4000));
    assert.equal(result.code, 0, result.stdout + result.stderr);
    reset(output);
  }, { when: linux });

add('temporary-files', () => {
  const { native, lasm: wasm } = implementations(fixture('temporary-files/Main.lean'), [], { crashes: true });
  const scenario = join(work, 'scenarios', 'temporary-files');
  const run = ([command, args], entry) => {
    reset(scenario); mkdirSync(scenario, { recursive: true }); setupTemporaryPaths(scenario);
    return spawnSync(command, [...args, join(scenario, 'guest')], { encoding: 'utf8', timeout: 60_000, killSignal: 'SIGKILL',
      env: temporaryEnvironment(entry.env) });
  };
  const oracle = new Map(), crashed = [];
  // Built from setupTemporaryPaths' fixed layout, so the case paths agree.
  for (const entry of temporaryCases(scenario)) {
    const result = run(native, entry);
    // Lean 4.32's ENOENT decoder dereferenced a null file name here (SIGSEGV).
    if (entry.name === 'missing-directory' && result.signal === 'SIGSEGV') { crashed.push(entry.name); continue; }
    assert.equal(result.signal, null, `${entry.name}: native Lean killed by ${result.signal}${result.error ? ` (${result.error})` : ''}`);
    succeeded({ code: result.status, stdout: result.stdout, stderr: result.stderr }, 'temporary-files comparison completed\n');
    oracle.set(entry.name, result.stdout);
  }
  for (const entry of temporaryCases(scenario)) {
    const result = run(wasm, entry);
    assert.equal(result.status, 0, `${entry.name}: ${result.stdout}${result.stderr}`);
    assert.equal(result.stderr, '', entry.name);
    assert.equal(result.stdout, oracle.get(crashed.includes(entry.name) ? 'empty-first-variable' : entry.name), entry.name);
  }
  reset(scenario);
  return crashed.length ? `native Lean crashed on ${crashed.join(', ')}; compared with empty-first-variable` : undefined;
}, { when: linux && !root0 || 'Linux, not as root' });

add('truncate-errors', () => matches('truncate-errors', fixture('truncate-errors/Main.lean'), 'truncate error comparison completed\n', { args: dirArgument }),
  { when: posix });

add('runtime-metadata', () => {
  // Lean.libUVVersion and Lean.openSSLVersion are compiled-in constants: the
  // program must report them without loading either library.
  const { lasm: wasm } = implementations(fixture('runtime-metadata/Main.lean'));
  const result = execute(wasm[0], wasm[1]);
  succeeded(result);
  assert.match(result.stdout, /^emscripten=(true|false)\nlibuv=\d+\nopenssl=\d+\n$/);
  return result.stdout.trim().replaceAll('\n', ', ');
});

add('standard-io', () => matches('standard-io', fixture('standard-io/Main.lean'), 'standard IO checks passed\n', {
  env: { LEAN_NUM_THREADS: '2' }, args: directory => [join(directory, 'data')],
}));

// From test/standard-io.test.mjs: the forms of `main`, exit statuses and task shutdown.
const inline = (name, text) => {
  const file = join(work, 'sources', name, 'Main.lean');
  mkdirSync(dirname(file), { recursive: true });
  writeFileSync(file, text);
  return file;
};
add('main-forms', () => {
  for (const [name, body, args] of [
    ['unit', 'def main : IO Unit := IO.println "unit"', []],
    ['status', 'def main : IO UInt32 := pure 0', []],
    ['status-seven', 'def main (args : List String) : IO UInt32 := do\n  IO.println (String.intercalate "|" args)\n  return 7', ['λ 日本語', '', 'a b']],
    ['arguments', 'def main (args : List String) : IO Unit := IO.println args.length', ['a', 'b']],
    ['reserved', 'syntax "run" : term\nmacro_rules | `(run) => `(term| (1 : Nat))\ndef main : IO Unit := IO.println run', []],
    ['failure', 'def main : IO Unit := throw (IO.userError "expected failure")', []],
    ['exit', 'def main : IO Unit := IO.Process.exit 9', []],
  ]) {
    const results = both('main-' + name, inline('main-' + name, body + '\n'), { args: () => args });
    same(results);
  }
});
add('task-shutdown', () => {
  // main returns only after its outstanding ordinary and dedicated tasks.
  const results = both('task-shutdown', inline('task-shutdown', `def main : IO Unit := do
  discard <| IO.asTask (prio := .dedicated) do
    IO.sleep 20
    IO.println "dedicated"
  discard <| IO.asTask do
    IO.sleep 5
    IO.println "ordinary"
`), { env: { LEAN_NUM_THREADS: '2' } });
  succeeded(results.native);
  succeeded(results.lasm);
  const lines = label => results[label].stdout.trim().split('\n').sort();
  assert.deepEqual(lines('lasm'), lines('native'));
  assert.deepEqual(lines('lasm'), ['dedicated', 'ordinary']);
});

add('tcp-binding', () => matches('tcp-binding', fixture('tcp-binding/Main.lean'), 'TCP binding comparison completed\n', { cwd: root, nativeFlags: ['-j4'] }),
  { when: posix });

add('wall-clock', () => {
  const { native, lasm: wasm } = implementations(fixture('wall-clock/Main.lean'));
  const samples = text => {
    const values = text.trim().split('\n').map(BigInt);
    assert.equal(values.length, 64);
    assert.ok(values.some(value => value % 1_000_000n !== 0n), 'wall time keeps submillisecond precision');
    return values;
  };
  const oracle = execute(...native);
  succeeded(oracle);
  samples(oracle.stdout);
  const lower = BigInt(Date.now()) * 1_000_000n;
  const result = execute(...wasm);
  const upper = BigInt(Date.now()) * 1_000_000n + 1_000_000n;
  succeeded(result);
  assert.ok(samples(result.stdout).every(value => value >= lower && value <= upper), 'samples within the run');
  // The earlier runtime read the wall clock through a host request that a test
  // could make fail (the fixture's `error` mode); the current one reads it with
  // Emscripten's clock_gettime, which has no failure to inject.
});

// ---------- run ----------
const only = options.only?.split(',');
assert.ok(!only || only.every(name => cases.some(entry => entry.name === name)), 'unknown case in --only');
mkdirSync(work, { recursive: true });
const report = { lean: execute(lean, ['--version']).stdout.trim(), lasm: execute(process.execPath, [lasm, '--version']).stdout.trim(), node: process.version,
  host: `${process.platform}-${process.arch}`, cases: [] };
// The core handler decides how long an expected native crash would take (withoutCore, issue #196).
if (linux) report.core = { pattern: readFileSync('/proc/sys/kernel/core_pattern', 'utf8').trim(), limit: execute('/bin/sh', ['-c', 'ulimit -c']).stdout.trim() };
console.log(`${report.lean}; ${report.lasm}; Node ${report.node}${report.core ? `; core dumps ${report.core.limit} via ${report.core.pattern}` : ''}`);
let failed = 0;
for (const entry of cases.filter(entry => !only || only.includes(entry.name))) {
  const started = performance.now();
  const row = { name: entry.name };
  if (entry.skip) { row.status = 'skipped'; row.reason = entry.skip; }
  else {
    try { const note = entry.run(); row.status = 'passed'; if (typeof note === 'string') row.note = note; }
    catch (error) { row.status = 'failed'; row.error = String(error?.stack ?? error).slice(0, 6000); failed++; }
  }
  row.seconds = Math.round((performance.now() - started) / 1000);
  report.cases.push(row);
  console.log(`${row.status === 'passed' ? 'ok  ' : row.status === 'skipped' ? 'skip' : 'FAIL'} ${entry.name} (${row.seconds} s)${row.note ? ': ' + row.note : ''}${row.reason ? ': ' + row.reason : ''}`);
  if (row.error) console.log(row.error.split('\n').map(line => '    ' + line).join('\n'));
}
report.builds = [...builds.values()].map(({ source, seconds, error }) => ({ source, seconds, failed: Boolean(error) }));
report.failed = failed;
writeFileSync(options.out ?? join(work, 'host-fixtures.json'), JSON.stringify(report, null, 2) + '\n');
console.log(`${report.cases.length} cases, ${failed} failed`);
process.exit(failed ? 1 : 0);
