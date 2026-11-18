// Lasm's boundary fuzzers (docs/TESTING.md#fuzzing-at-the-boundaries).
//
//   node test/fuzz/run.mjs list
//   node test/fuzz/run.mjs replay [target…]            committed corpus and regressions, once each
//   node test/fuzz/run.mjs fuzz --seconds N [target…]  a coverage-guided campaign per target
//        [--out DIR] [--seed N]
//
// The targets (test/fuzz/targets/*.mjs) are JavaScript, and run in a worker
// under V8 block coverage (test/fuzz/worker.mjs).
// Inputs live in test/fuzz/corpus/<target>/ (seeds and interesting inputs) and
// test/fuzz/regressions/<target>/ (every failure found, kept once fixed). A
// campaign writes new corpus entries to <out>/<target>/corpus/ and failing
// inputs to <out>/<target>/crashes/; it exits 1 when a target fails or hangs.
import { Worker } from 'node:worker_threads';
import { createHash } from 'node:crypto';
import { existsSync, mkdirSync, readdirSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('../../', import.meta.url));
const here = fileURLToPath(new URL('./', import.meta.url));
const args = process.argv.slice(2);
const command = args.shift();
const option = (name, fallback) => {
  const i = args.indexOf(name);
  if (i < 0) return fallback;
  const [, value] = args.splice(i, 2);
  return value;
};
const seconds = Number(option('--seconds', '60'));
const out = resolve(option('--out', join(root, '.work/fuzz')));
const seed = Number(option('--seed', String(Date.now() % 2 ** 31)));
const hangMs = Number(option('--hang-ms', '10000'));

const jsTargets = readdirSync(join(here, 'targets')).filter(f => f.endsWith('.mjs')).map(f => f.slice(0, -4)).sort();
const all = jsTargets;
const inputs = name => [join(here, 'corpus', name), join(here, 'regressions', name)];
const filesOf = dir => existsSync(dir) ? readdirSync(dir).filter(f => !f.startsWith('.') && !f.endsWith('.md')).sort().map(f => join(dir, f)) : [];

if (command === 'list') {
  for (const name of jsTargets) console.log(`${name} (JavaScript)`);
  process.exit(0);
}
// Writes each JavaScript target's seeds() into its committed corpus (seed-N files).
if (command === 'seed') {
  const { fields } = await import('./input.mjs');
  for (const name of jsTargets) {
    const target = await import(new URL(`./targets/${name}.mjs`, import.meta.url).href);
    if (!target.seeds) continue;
    const dir = join(here, 'corpus', name);
    mkdirSync(dir, { recursive: true });
    const list = target.seeds();
    list.forEach((s, i) => writeFileSync(join(dir, `seed-${String(i).padStart(2, '0')}`), s instanceof Uint8Array ? s : fields(...s)));
    console.log(`${name}: ${list.length} seeds`);
  }
  process.exit(0);
}
if (command !== 'replay' && command !== 'fuzz') {
  console.error('Usage: node test/fuzz/run.mjs list | replay [target…] | fuzz --seconds N [target…] [--out DIR] [--seed N]');
  process.exit(2);
}
const named = args.filter(a => !a.startsWith('--'));
for (const name of named) if (!all.includes(name)) { console.error(`Unknown fuzz target ${name}. Targets: ${all.join(', ')}`); process.exit(2); }
const selected = named.length ? named : all;

function runJs(name) {
  return new Promise(done => {
    const sab = new SharedArrayBuffer(8 + 65536);
    const heartbeat = new Int32Array(sab, 0, 2);
    const files = inputs(name).flatMap(filesOf);
    const worker = new Worker(join(here, 'worker.mjs'), { workerData: {
      targetFile: join(here, 'targets', name + '.mjs'), root, mode: command, files, seedDirs: inputs(name),
      outDir: join(out, name, 'corpus'), crashDir: join(out, name, 'crashes'), seconds, seed, sab,
    }, stdout: false, stderr: false, resourceLimits: { maxOldGenerationSizeMb: 1024 } });
    const failures = [];
    let result, last = -1, lastChange = Date.now(), finished = false;
    const finish = ok => { if (finished) return; finished = true; clearInterval(watch); done({ ok, failures, result }); };
    // A run that does not finish within --hang-ms is a hang: save its input, stop the worker.
    const watch = setInterval(() => {
      const count = Atomics.load(heartbeat, 0);
      if (count !== last) { last = count; lastChange = Date.now(); return; }
      if (Date.now() - lastChange < hangMs || count === 0 && Date.now() - lastChange < 60_000) return;
      const input = new Uint8Array(sab, 8, Atomics.load(heartbeat, 1)).slice();
      const dir = join(out, name, 'crashes');
      mkdirSync(dir, { recursive: true });
      const file = join(dir, `timeout-${createHash('sha1').update(input).digest('hex').slice(0, 16)}`);
      writeFileSync(file, input);
      failures.push({ file, error: `no answer within ${hangMs} ms (a hang)` });
      worker.terminate();
      finish(false);
    }, 250);
    worker.on('message', message => {
      if (message.type === 'failure') failures.push(message);
      else if (message.type === 'stats') console.log(`  ${name}: ${message.execs} runs, corpus ${message.corpus}, ${message.blocks} blocks, ${message.features} features, heap ${message.heapMb} MB`);
      else if (message.type === 'done') {
        result = message;
        if (message.crash) failures.push({ file: message.crash, error: message.error });
        worker.terminate();
        finish(!failures.length);
      }
    });
    worker.on('error', error => { failures.push({ file: '(uncaught in the worker)', error: error.stack ?? String(error) }); finish(false); });
    worker.on('exit', () => finish(!failures.length && result !== undefined));
  });
}

let failed = false;
const summary = [];
for (const name of selected) {
  const started = Date.now();
  console.log(`${command} ${name}${command === 'fuzz' ? ` (${seconds} s, seed ${seed})` : ''}`);
  const outcome = await runJs(name);
  const r = outcome.result ?? {};
  const time = ((Date.now() - started) / 1000).toFixed(1);
  const detail = command === 'replay' ? `${r.runs ?? 0} inputs`
    : `${r.execs} runs, ${r.blocks}/${r.allBlocks} blocks, ${r.features} features, corpus ${r.corpus} (+${r.added})`;
  summary.push({ target: name, kind: 'JavaScript', ok: outcome.ok, seconds: Number(time), ...r });
  if (outcome.ok) console.log(`ok   ${name}: ${detail} (${time} s)`);
  else {
    failed = true;
    console.log(`FAIL ${name}: ${detail} (${time} s)`);
    for (const f of outcome.failures) console.log(`  ${f.file}\n    ${String(f.error).split('\n').slice(0, 8).join('\n    ')}`);
  }
}
if (command === 'fuzz') { mkdirSync(out, { recursive: true }); writeFileSync(join(out, 'summary.json'), JSON.stringify(summary, null, 2) + '\n'); }
process.exit(failed ? 1 : 0);
