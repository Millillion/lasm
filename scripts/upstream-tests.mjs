import { readFileSync, writeFileSync, mkdirSync, readdirSync, existsSync, cpSync, rmSync } from 'node:fs';
import { join, resolve, dirname, relative, delimiter } from 'node:path';
import { spawn } from 'node:child_process';
import { createHash } from 'node:crypto';
import { root, resolveLean, leanCommit } from '../src/toolchain.mjs';
import { adapt, codeMask, harnessSource, elaboratorSource } from './upstream/adapter.mjs';
import { compilerIdentity as getCompilerIdentity } from './upstream/identity.mjs';
import { normalizeOutput, normalizeDiagnostics } from './upstream/comparison.mjs';

const args = process.argv.slice(2);
const option = (name, fallback) => { const i = args.indexOf(name); return i < 0 ? fallback : args[i + 1]; };
const upstream = resolve(option('--source', join(root, '.cache/lean4-4.32.0')));
const directory = resolve(option('--output', join(root, '.work/upstream')));
const suite = option('--suite', 'http');
const match = new RegExp(option('--match', '.'));
const limit = Number(option('--limit', Infinity));
const timeout = Number(option('--timeout', 60000));
const buildTimeout = Number(option('--build-timeout', 180000));
const [partition, partitions] = option('--partition', '0/1').split('/').map(Number);
if (!Number.isInteger(partition) || !Number.isInteger(partitions) || partition < 0 || partition >= partitions) throw new Error('Expected --partition INDEX/COUNT');
if (!['http', 'io', 'runtime', 'all'].includes(suite) || !Number.isFinite(timeout) || timeout <= 0) throw new Error('Invalid suite or timeout');
const { lean, prefix } = resolveLean(root);
mkdirSync(directory, { recursive: true });
const digest = bytes => createHash('sha256').update(bytes).digest('hex');
// Legacy Lean imports expose transitive implementation bodies to elaboration.
// Retain this when using a module envelope to erase the test-only elaborator.
function legacyImports(source) {
  const modules = new Set();
  function visit(text) {
    for (const m of codeMask(text).matchAll(/^(?:public )?import (?:all )?([A-Za-z0-9_.]+)/gm)) {
      const name = m[1];
      if (modules.has(name)) continue;
      modules.add(name);
      const path = join(prefix, 'src/lean', ...name.split('.')) + '.lean';
      if (existsSync(path)) visit(readFileSync(path, 'utf8'));
    }
  }
  visit(source);
  return [...modules].sort();
}
function walk(path) {
  return readdirSync(path, { withFileTypes: true }).sort((a,b) => a.name.localeCompare(b.name)).flatMap(entry =>
    entry.isDirectory() ? walk(join(path, entry.name)) : [join(path, entry.name)]);
}
const files = walk(join(upstream, 'tests')).filter(path => path.endsWith('.lean'));
const inventory = files.map(path => {
  const source = readFileSync(path, 'utf8'), mask = codeMask(source);
  const name = relative(join(upstream, 'tests'), path).replaceAll('\\', '/');
  const pile = name.split('/')[0];
  const commands = [...mask.matchAll(/^[ \t]*#(?:eval!?|guard)(?![A-Za-z_])/gm)].length;
  const main = /\bdef\s+main\b/.test(mask);
  const auxiliary = ['no_test', 'no_compile_test', 'no_interpret_test', 'init.sh', 'before.sh', 'after.sh', 'out.expected', 'out.ignored']
    .filter(ext => existsSync(`${path}.${ext}`));
  let kind = ['compile', 'compile_bench'].includes(pile) ? 'runtime-main'
    : ['elab', 'elab_bench'].includes(pile) && commands ? 'runtime-commands'
    : 'native-tooling';
  if (name.split('/').length !== 2) kind = 'auxiliary-source';
  if (auxiliary.includes('no_test') || ['elab/async_select_channel.lean', 'elab/sync_mutex.lean'].includes(name)) kind = 'upstream-disabled';
  return { name, pile, kind, commands, main, auxiliary, sha256: digest(source) };
});
writeFileSync(join(directory, 'inventory.json'), JSON.stringify({ leanCommit, files: inventory.length,
  note: 'All Lean test sources, including auxiliary files; this is not the CTest test count.', entries: inventory }, null, 2) + '\n');
if (args.includes('--inventory')) {
  console.log(JSON.stringify({ files: inventory.length, kinds: Object.fromEntries([...new Set(inventory.map(x=>x.kind))].map(k=>[k,inventory.filter(x=>x.kind===k).length])) }));
  process.exit(0);
}
const selected = inventory.filter(entry => !['upstream-disabled', 'auxiliary-source'].includes(entry.kind) && match.test(entry.name) && (suite === 'all'
  ? entry.kind.startsWith('runtime-') : suite === 'runtime' ? entry.kind === 'runtime-main'
  : suite === 'http' ? /^elab\/async_http.*\.lean$/.test(entry.name)
  : suite === 'io' ? /^elab\/(IO_test|stdio|tempfile|handleLocking|getline_crash|realPath|ioNulBytes|ioRandomBytes|filePath|async[^/]*|task[^/]*|promise|sync_[^/]*|broadcast|context_async|cancellation_context)\.lean$/.test(entry.name) || entry.name === 'compile/file_read_overflow.lean'
  : false)).slice(0, limit).filter((_, i) => i % partitions === partition);
const running = new Set();
for (const signal of ['SIGINT', 'SIGTERM']) process.once(signal, () => { for (const stop of running) stop(); process.exit(130); });
function execute(executable, argv, cwd, environment = {}, deadline = timeout) {
  return new Promise(resolve => {
    let stdout = '', stderr = '', timedOut = false, outputLimit = false, settled = false;
    const child = spawn(executable, argv, { cwd, detached: process.platform !== 'win32', env: { ...process.env, LEAN_NUM_THREADS: '2', ...environment }, stdio: ['ignore','pipe','pipe'] });
    const stop = () => { try { if (process.platform !== 'win32') process.kill(-child.pid, 'SIGKILL'); else child.kill('SIGKILL'); } catch {} };
    running.add(stop);
    const timer = setTimeout(() => { timedOut = true; stop(); }, deadline);
    const finish = value => { if (settled) return; settled = true; running.delete(stop); clearTimeout(timer); resolve({ ...value, timedOut, outputLimit, stdout, stderr }); };
    child.stdout.on('data', b => { stdout += b; if (stdout.length > 16_000_000) { outputLimit = true; stop(); } });
    child.stderr.on('data', b => { stderr += b; if (stderr.length > 16_000_000) { outputLimit = true; stop(); } });
    child.once('error', error => finish({ code: null, error: error.message }));
    child.once('close', (code, signal) => finish({ code, signal }));
  });
}
const resultFile = join(directory, `results-${suite}${partitions > 1 ? '-' + partition : ''}.json`);
const compilerIdentity = getCompilerIdentity();
const startedAt = new Date().toISOString();
let results = [];
const previous = existsSync(resultFile) ? JSON.parse(readFileSync(resultFile)) : null;
const previousDirectory = option('--continue-from', null);
if (previousDirectory) {
  const collected = new Map();
  for (const file of readdirSync(previousDirectory).filter(name => /^results-.*\.json$/.test(name))) {
    const report = JSON.parse(readFileSync(join(previousDirectory, file)));
    if (report.leanCommit !== leanCommit) throw new Error('Cannot continue results from a different Lean version');
    for (const entry of report.entries) collected.set(entry.name, { ...entry,
      artifactCompilerIdentity: entry.artifactCompilerIdentity ?? report.compilerIdentity });
  }
  results = selected.flatMap(entry => {
    const prior = collected.get(entry.name);
    return prior?.sha256 === entry.sha256 ? [prior] : [];
  });
}
if (args.includes('--resume') && existsSync(resultFile)) {
  const prior = JSON.parse(readFileSync(resultFile));
  if (prior.compilerIdentity === compilerIdentity) results = prior.entries.filter(e => selected.some(s => s.name === e.name && s.sha256 === e.sha256));
}
const report = () => writeFileSync(resultFile, JSON.stringify({ leanCommit, compilerIdentity, startedAt, updatedAt: new Date().toISOString(),
  platform: `${process.platform}-${process.arch}`, node: process.version, suite, partition, partitions, totalInventory: inventory.length,
  selected: selected.length, completed: results.length, counts: Object.fromEntries([...new Set(results.map(x=>x.status))].map(k=>[k,results.filter(x=>x.status===k).length])),
  entries: results }, null, 2) + '\n');
report();
for (const entry of selected) {
  if (results.some(r => r.name === entry.name)) continue;
  const started = Date.now();
  const work = join(directory, entry.name.replace(/\.lean$/, '').replaceAll('/', '__'));
  mkdirSync(work, { recursive: true });
  const result = { ...entry, work: relative(root, work) };
  try {
    if (entry.auxiliary.some(x => ['before.sh','after.sh'].includes(x)) && entry.kind === 'runtime-main') {
      result.status = 'needs-upstream-driver';
      result.reason = 'Shell arguments/hooks must be adapted explicitly before claiming the upstream test ran.';
    } else {
      const original = readFileSync(join(upstream, 'tests', entry.name), 'utf8');
      const adapted = entry.kind === 'runtime-commands' ? adapt(original, { legacyImports: legacyImports(original) }) : null;
      const source = adapted?.source ?? original;
      const prior = previous?.entries.find(x => x.name === entry.name);
      const reuse = args.includes('--recheck-existing') && prior?.artifactSha256 && existsSync(join(work, 'Test.lean'))
        && readFileSync(join(work, 'Test.lean'), 'utf8') === source && existsSync(join(work, 'dist/module.wasm'))
        && digest(readFileSync(join(work, 'dist/module.wasm'))) === prior.artifactSha256;
      writeFileSync(join(work, 'Test.lean'), source);
      writeFileSync(join(work, 'LasmUpstreamHarness.lean'), harnessSource);
      writeFileSync(join(work, 'LasmUpstreamElab.lean'), elaboratorSource);
      result.adaptation = adapted ? { evalAndGuardCommands: adapted.cases, originalMessagesCheckedNatively: false } : null;
      for (const mode of ['original', 'native', 'wasm']) {
        rmSync(join(work, mode), { recursive: true, force: true });
        const cwd = mode === 'original' ? join(work, mode, entry.pile) : join(work, mode);
        mkdirSync(cwd, { recursive: true });
        cpSync(join(upstream, 'tests', entry.name), join(cwd, entry.name.split('/').at(-1)));
        for (const file of readdirSync(dirname(join(upstream, 'tests', entry.name)))) {
          if (file.startsWith(entry.name.split('/').at(-1) + '.') && !file.endsWith('.sh')) {
            const path = join(upstream, 'tests', entry.pile, file);
            if (existsSync(path)) cpSync(path, join(cwd, file), { recursive: true });
          }
        }
      }
      let testArgs = [], expectedExit = '0';
      if (entry.kind === 'runtime-main' && entry.auxiliary.includes('init.sh')) {
        const init = await execute('bash', ['-c', 'set_stack_size_to_maximum() { :; }; unset TEST_BENCH; source "$1"; printf "%s\\0" "${TEST_EXIT:-0}" "${TEST_ARGS[@]}"', '_', join(upstream, 'tests', entry.name + '.init.sh')], work);
        if (init.code !== 0) throw new Error('Upstream argument initialization failed: ' + init.stderr);
        [expectedExit, ...testArgs] = init.stdout.split('\0').slice(0, -1);
        testArgs = testArgs.filter((x,i) => x || i > 0);
        testArgs = testArgs.map(arg => arg.startsWith('../../src/') ? join(upstream, arg.slice(6)) : arg);
      }
      result.testArguments = testArgs; result.expectedExit = expectedExit;
      if (adapted) {
        // Independently check the original #guard_msgs, including expected
        // failures. This is a native elaboration check, never a Node pass.
        const check = await execute(lean, ['--root=..', '-DprintMessageEndPos=true', '-Dlinter.all=false', '-DElab.inServer=true', '-Dcompiler.postponeCompile=false', entry.name.split('/').at(-1)], join(work, 'original', entry.pile));
        result.originalNative = { code: check.code, timedOut: check.timedOut };
        result.adaptation.originalMessagesCheckedNatively = check.code === 0 && !check.timedOut;
        const expectedPath = join(upstream, 'tests', entry.name + '.out.expected');
        result.originalNative.expectedOutputMatches = entry.auxiliary.includes('out.ignored') ? null
          : normalizeDiagnostics(check.stdout + check.stderr) === (existsSync(expectedPath) ? readFileSync(expectedPath, 'utf8') : '');
        writeFileSync(join(work, 'original-native.stdout'), check.stdout);
        writeFileSync(join(work, 'original-native.stderr'), check.stderr);
      }
      const config = { module: 'Test', sourceRoot: '.', lake: false,
        ...(adapted ? { exports: { runTests: { declaration: 'lasmUpstreamRun', parameters: [], result: 'UInt32', effect: 'io' } } } : { main: true }) };
      writeFileSync(join(work, 'lasm.json'), JSON.stringify(config));
      if (!reuse) {
        const compilation = await execute(process.execPath, [join(root, 'scripts/upstream/build.mjs'), work], root, {}, buildTimeout);
        writeFileSync(join(work, 'build.log'), compilation.stdout);
        if (compilation.code !== 0 || compilation.timedOut || compilation.outputLimit) {
          const error = new Error(compilation.stderr || 'Build timed out'); error.timedOut = compilation.timedOut; throw error;
        }
      }
      result.reusedArtifact = !!reuse;
      result.artifactCompilerIdentity = reuse ? prior.artifactCompilerIdentity ?? previous.compilerIdentity : compilerIdentity;
      const built = JSON.parse(readFileSync(join(work, 'build-result.json')));
      if (built.compilerIdentityAtBuild) result.artifactCompilerIdentity = built.compilerIdentityAtBuild;
      result.compilerSourcesChangedDuringBuild = built.compilerSourcesChangedDuringBuild ?? null;
      result.artifactSha256 = digest(readFileSync(join(work, 'dist/module.wasm')));
      const runner = adapted ? 'unsafe def main : IO UInt32 := lasmUpstreamRun' : '';
      // Compile-pile programs retain their own main. Command-pile adapters use a
      // separate driver so pre-existing main declarations never get overwritten.
      writeFileSync(join(work, 'Native.lean'), `import Test\n${runner}\n`);
      const native = await execute(lean, ['-Dlinter.all=false', '--run', join(work, 'Native.lean'), ...testArgs], join(work, 'native'), { LEAN_PATH: built.buildDir });
      result.native = { code: native.code, signal: native.signal, timedOut: native.timedOut };
      writeFileSync(join(work, 'native.stdout'), native.stdout); writeFileSync(join(work, 'native.stderr'), native.stderr);
      writeFileSync(join(work, 'run.mjs'), `import createModule from './dist/index.mjs';\nconst api=await createModule({cwd:process.cwd(),args:process.argv.slice(2)});\ntry { process.exitCode=await api.${adapted ? 'runTests' : 'runMain'}(); } catch(e) { if(e.name!=='LeanExit') console.error(e.name==='LeanIOError'?'uncaught exception: '+e.message:e.message); process.exitCode=e.name==='LeanExit'?e.code:1; } finally { api.dispose(); }\n`);
      const wasm = await execute(process.execPath, [join(work, 'run.mjs'), ...testArgs], join(work, 'wasm'));
      result.wasm = { code: wasm.code, signal: wasm.signal, timedOut: wasm.timedOut };
      writeFileSync(join(work, 'wasm.stdout'), wasm.stdout); writeFileSync(join(work, 'wasm.stderr'), wasm.stderr);
      const normal = (text, mode) => normalizeOutput(text, join(work, mode));
      result.outputNormalization = ['upstream measurement values', 'test working directory'];
      result.stdoutEqual = normal(native.stdout, 'native') === normal(wasm.stdout, 'wasm');
      result.stderrEqual = normal(native.stderr, 'native') === normal(wasm.stderr, 'wasm');
      const exitMatches = run => expectedExit === 'nonzero' ? !!run.signal || run.code !== null && run.code !== 0 : run.code === Number(expectedExit);
      result.status = native.timedOut || native.outputLimit || !exitMatches(native) ? 'native-baseline-failed'
        : wasm.outputLimit ? 'wasm-output-limit' : wasm.timedOut ? 'wasm-timeout' : wasm.code !== native.code || wasm.signal !== native.signal ? 'wasm-failed'
        : result.stdoutEqual && result.stderrEqual ? 'matched-native' : 'output-mismatch';
      if (adapted) {
        const markers = text => [...text.matchAll(/LASM_UPSTREAM_END:(\d+):(ok|error:[^\n]*)/g)].map(m => ({ id: Number(m[1]), result: m[2] }));
        result.nativeCases = markers(native.stderr); result.wasmCases = markers(wasm.stderr);
        if (result.status === 'matched-native') {
          if (![result.nativeCases, result.wasmCases].every(cases => cases.length === adapted.cases.length && cases.every((c, i) => c.id === i)))
            result.status = 'incomplete-runtime-execution';
          else if (!result.adaptation.originalMessagesCheckedNatively || result.originalNative.expectedOutputMatches === false) result.status = 'original-native-failed';
          else if (result.nativeCases.some(c => c.result !== 'ok')) result.status = 'matched-native-with-errors';
        }
      }
      if (entry.kind === 'runtime-main' && !entry.auxiliary.includes('out.ignored')) {
        const expected = existsSync(join(upstream, 'tests', `${entry.name}.out.expected`)) ? readFileSync(join(upstream, 'tests', `${entry.name}.out.expected`), 'utf8') : '';
        result.upstreamExpected = normal(native.stdout + native.stderr, 'native') === normal(expected, 'native');
        if (!result.upstreamExpected && result.status === 'matched-native') result.status = 'native-expectation-mismatch';
      }
    }
  } catch (error) {
    result.status = error.timedOut ? 'build-timeout' : 'build-failed';
    result.error = [error.message, error.stdout?.toString(), error.stderr?.toString()].filter(Boolean).join('\n');
    writeFileSync(join(work, 'error.log'), result.error);
  }
  result.elapsedMs = Date.now() - started;
  results.push(result); report();
  console.log(`${results.length}/${selected.length} ${result.status}: ${entry.name} (${Math.round(result.elapsedMs/1000)}s)`);
}
console.log(JSON.stringify(JSON.parse(readFileSync(resultFile)).counts));
