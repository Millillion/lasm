// Ordinary Lean temporary-filesystem comparison; upstream sources are untouched.
import { existsSync, mkdirSync, readFileSync, writeFileSync, createReadStream, chmodSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { root, resolveLean, leanCommit } from '../../src/toolchain.mjs';
import { ensureResourceGuard } from './resource-guard.mjs';
import { setupTemporaryPaths, temporaryCases, temporaryEnvironment } from '../../test/fixtures/temporary-files/setup.mjs';

await ensureResourceGuard();
const [outputArg, ...facades] = process.argv.slice(2);
if (!outputArg || !facades.length) throw new Error('Supply NEW_OUTPUT and one or more full-toolchain directories');
if (process.platform !== 'linux') throw new Error('This initial differential fixture targets native Linux');
const output = resolve(outputArg);
if (existsSync(output)) throw new Error('Use a fresh output');
mkdirSync(output, { recursive: true });
const source = join(root, 'test/fixtures/temporary-files/Main.lean');
const directory = join(output, 'paths');
setupTemporaryPaths(directory);
const bytes = readFileSync(source), executedSource = join(output, 'fixture.lean');
writeFileSync(executedSource, bytes);
const digest = bytes => createHash('sha256').update(bytes).digest('hex');
const evidence = { leanCommit, source, executedSource, sourceSha256: digest(bytes),
  scope: 'Supplementary temporary-file/directory path, environment, contents and structured error comparison; not an upstream-suite result.',
  resourceReport: process.env.LASM_RESOURCE_REPORT, results: [] };
const save = () => writeFileSync(join(output, 'comparison.json'), JSON.stringify(evidence, null, 2) + '\n');
function run(name, executable, config) {
  const cases = [];
  for (const entry of temporaryCases(directory)) {
    const started = performance.now();
    const result = spawnSync(executable, ['--run', executedSource, join(directory, 'guest')], {
      encoding: 'utf8', timeout: 120_000, maxBuffer: 128 * 1024, killSignal: 'SIGKILL',
      env: temporaryEnvironment(entry.env),
    });
    const native = evidence.results[0]?.cases.find(item => item.name === entry.name);
    const nativeBug = name === 'native' && entry.name === 'missing-directory' && result.signal === 'SIGSEGV';
    // Pinned native Lean passes a null filename to its ENOENT decoder here.
    // Compare the safe result to native's other ENOENT path, which supplies an
    // empty filename correctly. Record this as safety, never native parity.
    const safetyOracle = native?.nativeBug
      ? evidence.results[0].cases.find(item => item.name === 'empty-first-variable').stdout : undefined;
    const record = { name: entry.name, seconds: (performance.now() - started) / 1000,
      code: result.status, signal: result.signal, error: result.error?.message,
      stdout: result.stdout, stderr: result.stderr,
      ...(nativeBug ? { nativeBug: 'Pinned Lean ENOENT decoder dereferences a null filename; not a fundamental JavaScript limitation.' } : {}),
      ...(safetyOracle === undefined ? {} : { safetyOracle: 'Native empty-first-variable: ENOENT with a valid empty filename.',
        safetyPassed: result.status === 0 && result.stderr === '' && result.stdout === safetyOracle }),
      passed: !native?.nativeBug && result.status === 0 && result.stderr === '' && (native
        ? result.stdout === native.stdout : result.stdout.endsWith('temporary-files comparison completed\n')) };
    cases.push(record);
    const status = record.nativeBug ? 'recorded native defect' : record.safetyPassed ? 'safety check passed' : record.passed ? 'passed' : 'failed';
    console.log(`${name}/${entry.name}: ${status} (${record.seconds.toFixed(2)} s)`);
    writeFileSync(join(output, `${name}-progress.json`), JSON.stringify({ name, executable, config, cases }, null, 2) + '\n');
    if (name === 'native' && !record.passed && !record.nativeBug) break;
  }
  const record = { name, executable, config, cases,
    passed: cases.length === 11 && cases.every(item => item.passed),
    validated: cases.length === 11 && cases.every(item => item.passed || item.nativeBug || item.safetyPassed),
    counts: { matching: cases.filter(item => item.passed).length,
      nativeBugs: cases.filter(item => item.nativeBug).length, safetyChecks: cases.filter(item => item.safetyPassed).length } };
  evidence.results.push(record); save();
  return record;
}
try {
  if (!run('native', resolveLean(root).lean).validated) throw new Error('Native fixture failed; inspect before comparing engines');
  for (const facade of facades.map(path => resolve(path))) {
    const config = JSON.parse(readFileSync(join(facade, 'toolchain.json')));
    const snapshot = JSON.parse(readFileSync(join(config.build, 'snapshot.json')));
    for (const [name, expected] of Object.entries(snapshot.files)) {
      const hash = createHash('sha256');
      for await (const bytes of createReadStream(join(config.build, name))) hash.update(bytes);
      if (hash.digest('hex') !== expected) throw new Error(`Frozen input changed: ${name}`);
    }
    run(config.engine, join(facade, 'bin/lean'), config);
  }
} finally {
  chmodSync(join(directory, 'denied'), 0o700);
  evidence.executedSourceUnchanged = digest(readFileSync(executedSource)) === evidence.sourceSha256;
  evidence.finishedAt = new Date().toISOString(); save();
}
process.exitCode = evidence.executedSourceUnchanged && evidence.results.every(result => result.validated) ? 0 : 1;
