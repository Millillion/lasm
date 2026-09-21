// Supplemental exit/FILE comparison; no upstream source or expected output edits.
import { existsSync, mkdirSync, readFileSync, writeFileSync, createReadStream } from 'node:fs';
import { resolve, join } from 'node:path';
import { spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { root, resolveLean, leanCommit } from '../../src/toolchain.mjs';
import { ensureResourceGuard } from './resource-guard.mjs';

await ensureResourceGuard();
const [outputArg, ...facades] = process.argv.slice(2);
if (!outputArg || !facades.length) throw new Error('Supply NEW_OUTPUT and full-toolchain directories');
const output = resolve(outputArg);
if (existsSync(output)) throw new Error('Use a fresh output');
mkdirSync(output, { recursive: true });
const source = join(root, 'test/fixtures/process-exit/Main.lean');
const bytes = readFileSync(source), executedSource = join(output, 'fixture.lean');
writeFileSync(executedSource, bytes);
const digest = bytes => createHash('sha256').update(bytes).digest('hex');
const evidence = { leanCommit, source, executedSource, sourceSha256: digest(bytes),
  scope: 'Supplementary ordinary Lean return/exit/forceExit and open-file buffering comparison; not an upstream-suite result.',
  resourceReport: process.env.LASM_RESOURCE_REPORT, results: [] };
const save = () => writeFileSync(join(output, 'comparison.json'), JSON.stringify(evidence, null, 2) + '\n');
function run(name, executable, config) {
  const cases = [];
  for (const [mode, status] of [['return',0],['exit',17],['force',19]]) {
    const target = join(output, `${name}-${mode}.txt`), started = performance.now();
    const result = spawnSync(executable, ['--run', executedSource, mode, target], {
      encoding: 'utf8', timeout: 180_000, maxBuffer: 128 * 1024, killSignal: 'SIGKILL',
    });
    const actual = { code:result.status, signal:result.signal, error:result.error?.message,
      stdout:result.stdout, stderr:result.stderr,
      file:existsSync(target) ? readFileSync(target,'utf8') : null };
    const expected = { code:status, signal:null,
      stdout:mode === 'force' ? '' : 'buffered stdout\n', stderr:'unbuffered stderr\n',
      file:mode === 'force' ? '' : 'buffered file\n' };
    const passed = Object.entries(expected).every(([k,v]) => actual[k] === v) && !actual.error;
    cases.push({mode, seconds:(performance.now()-started)/1000, ...actual, expected, passed});
    console.log(`${name}: ${mode}: ${passed ? 'passed' : 'failed'}`);
  }
  const record = { name, executable, config, cases, passed:cases.every(x=>x.passed) };
  evidence.results.push(record); save();
  return record;
}
try {
  if (!run('native', resolveLean(root).lean).passed) throw new Error('Native fixture failed; inspect before comparing engines');
  for (const facade of facades.map(path=>resolve(path))) {
    const config = JSON.parse(readFileSync(join(facade,'toolchain.json')));
    const snapshot = JSON.parse(readFileSync(join(config.build,'snapshot.json')));
    for (const [name, expected] of Object.entries(snapshot.files)) {
      const hash = createHash('sha256');
      for await (const bytes of createReadStream(join(config.build,name))) hash.update(bytes);
      if (hash.digest('hex') !== expected) throw new Error(`Frozen input changed: ${name}`);
    }
    run(config.engine, join(facade,'bin/lean'), config);
  }
} finally {
  evidence.executedSourceUnchanged = digest(readFileSync(executedSource)) === evidence.sourceSha256;
  evidence.finishedAt = new Date().toISOString(); save();
}
process.exitCode = evidence.executedSourceUnchanged && evidence.results.every(x=>x.passed) ? 0 : 1;
