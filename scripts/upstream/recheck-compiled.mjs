// The compile pile's authoritative native baseline is a native C executable.
// Reuse verified Wasm artifacts from a completed sweep, not its interpreter log.
import { readFileSync, writeFileSync, readdirSync, existsSync, rmSync, mkdirSync, cpSync } from 'node:fs';
import { resolve, join, dirname, basename } from 'node:path';
import { spawn } from 'node:child_process';
import { createHash } from 'node:crypto';
import { root, resolveLean, leanCommit } from '../../src/toolchain.mjs';
import { normalizeOutput } from './comparison.mjs';
const directory = resolve(process.argv[2] ?? '.work/upstream-complete');
const { prefix } = resolveLean(root);
const leanc = join(prefix, 'bin', process.platform === 'win32' ? 'leanc.exe' : 'leanc');
const source = join(root, '.cache/lean4-4.32.0/tests');
const unique = new Map();
for (const file of readdirSync(directory).filter(x => /^results-all(?:-\d+)?\.json$/.test(x))) {
  const report = JSON.parse(readFileSync(join(directory, file)));
  if (report.leanCommit !== leanCommit) throw new Error('Wrong upstream version');
  for (const entry of report.entries) if (entry.kind === 'runtime-main' && entry.artifactSha256)
    unique.set(entry.name, { ...entry, artifactCompilerIdentity: entry.artifactCompilerIdentity ?? report.compilerIdentity });
}
const reports = [];
function run(command, args, cwd, timeout = 60_000) {
  return new Promise(resolve => {
    let stdout = '', stderr = '', timedOut = false;
    const child = spawn(command, args, { cwd, env: { ...process.env, LEAN_NUM_THREADS: '2' }, stdio: ['ignore','pipe','pipe'] });
    const timer = setTimeout(() => { timedOut = true; child.kill('SIGKILL'); }, timeout);
    child.stdout.on('data', b => { stdout += b; if (stdout.length > 16_000_000) child.kill('SIGKILL'); });
    child.stderr.on('data', b => { stderr += b; if (stderr.length > 16_000_000) child.kill('SIGKILL'); });
    child.once('error', e => { clearTimeout(timer); resolve({ code: null, stdout, stderr: stderr + e.message, timedOut }); });
    child.once('close', (code, signal) => { clearTimeout(timer); resolve({ code, signal, stdout, stderr, timedOut }); });
  });
}
for (const prior of unique.values()) {
  const work = join(root, prior.work);
  const artifact = readFileSync(join(work, 'dist/module.wasm'));
  if (createHash('sha256').update(artifact).digest('hex') !== prior.artifactSha256) throw new Error(`Changed artifact: ${prior.name}`);
  const built = JSON.parse(readFileSync(join(work, 'build-result.json')));
  const executable = join(work, process.platform === 'win32' ? 'native-compiled.exe' : 'native-compiled');
  const compilation = await run(leanc, ['-O3', '-DNDEBUG', join(built.buildDir, 'Test.c'), '-o', executable], work, 180_000);
  const entry = { name: prior.name, sha256: prior.sha256, work: prior.work, artifactSha256: prior.artifactSha256,
    artifactCompilerIdentity: prior.artifactCompilerIdentity, previousStatus: prior.status, nativeMode: 'compiled-C' };
  if (compilation.code !== 0 || compilation.timedOut) {
    entry.status = 'native-compile-failed';
    writeFileSync(join(work, 'compiled-native-build.stderr'), compilation.stderr);
  } else {
    for (const mode of ['native', 'wasm']) {
      const cwd = join(work, mode);
      rmSync(cwd, { recursive: true, force: true }); mkdirSync(cwd);
      const file = join(source, prior.name);
      cpSync(file, join(cwd, basename(file)));
      for (const sidecar of readdirSync(dirname(file)))
        if (sidecar.startsWith(basename(file) + '.') && !sidecar.endsWith('.sh'))
          cpSync(join(dirname(file), sidecar), join(cwd, sidecar), { recursive: true });
    }
    // Match the ordinary Lean main launcher's uncaught-IO-error convention.
    writeFileSync(join(work, 'compiled-recheck.mjs'), `import create from './dist/index.mjs';
const api=await create({cwd:process.cwd(),args:process.argv.slice(2)});
try{process.exitCode=await api.runMain()}catch(e){if(e.name!=='LeanExit')console.error(e.name==='LeanIOError'?'uncaught exception: '+e.message:e.message);process.exitCode=e.name==='LeanExit'?e.code:1}finally{api.dispose()}
`);
    const native = await run(executable, prior.testArguments ?? [], join(work, 'native'), 30_000);
    const wasm = await run(process.execPath, [join(work, 'compiled-recheck.mjs'), ...(prior.testArguments ?? [])], join(work, 'wasm'), 30_000);
    for (const [name, output] of [['compiled-native', native], ['compiled-wasm', wasm]]) {
      writeFileSync(join(work, name + '.stdout'), output.stdout); writeFileSync(join(work, name + '.stderr'), output.stderr);
    }
    entry.native = { code: native.code, signal: native.signal, timedOut: native.timedOut };
    entry.wasm = { code: wasm.code, signal: wasm.signal, timedOut: wasm.timedOut };
    const expectedExit = prior.expectedExit ?? '0';
    const exitMatches = expectedExit === 'nonzero' ? native.signal !== null || native.code !== null && native.code !== 0 : native.code === Number(expectedExit);
    const n = text => normalizeOutput(text, join(work, 'native'));
    const w = text => normalizeOutput(text, join(work, 'wasm'));
    entry.outputNormalization = ['upstream measurement values', 'test working directory'];
    entry.status = native.timedOut || !exitMatches ? 'native-baseline-failed' : wasm.timedOut ? 'wasm-timeout'
      : wasm.code !== native.code ? 'wasm-failed' : n(native.stdout) === w(wasm.stdout) && n(native.stderr) === w(wasm.stderr) ? 'matched-native' : 'output-mismatch';
    const expectedFile = join(source, prior.name + '.out.expected');
    entry.upstreamExpected = prior.auxiliary.includes('out.ignored') ? null
      : n(native.stdout + native.stderr) === n(existsSync(expectedFile) ? readFileSync(expectedFile, 'utf8') : '');
    if (entry.status === 'matched-native' && entry.upstreamExpected === false) entry.status = 'native-expectation-mismatch';
  }
  reports.push(entry);
  const counts = Object.fromEntries([...new Set(reports.map(x=>x.status))].map(k=>[k,reports.filter(x=>x.status===k).length]));
  writeFileSync(join(directory, 'results-compiled-recheck.json'), JSON.stringify({ leanCommit,
    platform: `${process.platform}-${process.arch}`, selected: unique.size, completed: reports.length, counts, entries: reports }, null, 2) + '\n');
  console.log(`${reports.length}/${unique.size} ${entry.status}: ${prior.name}`);
}
