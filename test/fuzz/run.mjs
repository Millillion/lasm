// Lasm's boundary fuzzers (docs/TESTING.md#fuzzing-at-the-boundaries).
//
//   node test/fuzz/run.mjs list
//   node test/fuzz/run.mjs replay [target…]            committed corpus and regressions, once each
//   node test/fuzz/run.mjs fuzz --seconds N [target…]  a coverage-guided campaign per target
//        [--out DIR] [--seed N] [--native DIR]
//
// JavaScript targets (test/fuzz/targets/*.mjs) run in a worker under V8 block
// coverage (test/fuzz/worker.mjs). Native targets (test/fuzz/native/: Lean's
// Lasm.Fetch and Lasm.RPC compiled to C, and the WASI C host) are libFuzzer
// binaries that test/fuzz/native/build.mjs writes to --native (default
// .work/fuzz/native); without them the native targets are skipped, and named
// ones fail.
// Inputs live in test/fuzz/corpus/<target>/ (seeds and interesting inputs) and
// test/fuzz/regressions/<target>/ (every failure found, kept once fixed). A
// campaign writes new corpus entries to <out>/<target>/corpus/ and failing
// inputs to <out>/<target>/crashes/; it exits 1 when a target fails or hangs.
import { Worker } from 'node:worker_threads';
import { spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { existsSync, mkdirSync, readdirSync, readFileSync, writeFileSync } from 'node:fs';
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
const nativeDir = resolve(option('--native', join(root, '.work/fuzz/native')));
const hangMs = Number(option('--hang-ms', '10000'));

const jsTargets = readdirSync(join(here, 'targets')).filter(f => f.endsWith('.mjs')).map(f => f.slice(0, -4)).sort();
const nativeTargets = JSON.parse(readFileSync(join(here, 'native/targets.json'), 'utf8'));
const all = [...jsTargets, ...Object.keys(nativeTargets)];
const inputs = name => [join(here, 'corpus', name), join(here, 'regressions', name)];
const filesOf = dir => existsSync(dir) ? readdirSync(dir).filter(f => !f.startsWith('.') && !f.endsWith('.md')).sort().map(f => join(dir, f)) : [];

if (command === 'list') {
  for (const name of jsTargets) console.log(`${name} (JavaScript)`);
  for (const [name, t] of Object.entries(nativeTargets)) console.log(`${name} (libFuzzer: ${t.description})`);
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
  console.error('Usage: node test/fuzz/run.mjs list | replay [target…] | fuzz --seconds N [target…] [--out DIR] [--seed N] [--native DIR]');
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

function runNative(name) {
  const binary = join(nativeDir, nativeTargets[name].binary);
  if (!existsSync(binary)) return { skipped: true };
  const crashes = join(out, name, 'crashes'), corpus = join(out, name, 'corpus');
  mkdirSync(crashes, { recursive: true }); mkdirSync(corpus, { recursive: true });
  // Lean keeps persistent objects for the process's life: leaks are not findings.
  // (ASAN_OPTIONS below: the slow unwinder crashes inside Lean's runtime, so a
  // report would end before libFuzzer saved the input.)
  const common = ['-timeout=10', '-rss_limit_mb=2560', '-detect_leaks=0', `-artifact_prefix=${crashes}/`, '-print_final_stats=1'];
  const dict = join(here, 'native', name + '.dict');
  if (existsSync(dict)) common.push(`-dict=${dict}`);
  const files = inputs(name).flatMap(filesOf);
  const argv = command === 'replay' ? [...common, ...files]
    : [...common, `-max_total_time=${seconds}`, `-seed=${seed}`, '-max_len=8192', corpus, ...inputs(name).filter(existsSync)];
  if (command === 'replay' && !files.length) return { ok: true, result: { runs: 0 } };
  const run = spawnSync(binary, argv, { encoding: 'utf8', stdio: ['ignore', 'inherit', 'pipe'], maxBuffer: 256 * 1024 * 1024,
    env: { ...process.env, LEAN_ABORT_ON_PANIC: '1', ASAN_OPTIONS: ['detect_leaks=0', 'fast_unwind_on_fatal=1', process.env.ASAN_OPTIONS].filter(Boolean).join(':') } });
  const log = run.stderr ?? '';
  process.stderr.write(log.split('\n').filter(l => !/^#\d+\s+(NEW|REDUCE|pulse)|^(INFO|Running|Executed): /.test(l)).slice(-60).join('\n') + '\n');
  // A campaign also leaves <out>/<target>/merged/: the committed corpus and the
  // new entries, minimized by libFuzzer (-merge=1), ready to replace
  // test/fuzz/corpus/<target>/.
  if (command === 'fuzz' && run.status === 0) {
    const merged = join(out, name, 'merged');
    mkdirSync(merged, { recursive: true });
    spawnSync(binary, ['-merge=1', '-detect_leaks=0', merged, join(here, 'corpus', name), corpus], { stdio: 'ignore',
      env: { ...process.env, ASAN_OPTIONS: 'detect_leaks=0:fast_unwind_on_fatal=1' } });
  }
  const cov = [...log.matchAll(/cov: (\d+) ft: (\d+) corp: (\d+)/g)].at(-1);
  const result = { runs: command === 'replay' ? files.length : Number(/stat::number_of_executed_units: (\d+)/.exec(log)?.[1] ?? 0),
    edges: cov ? Number(cov[1]) : undefined, features: cov ? Number(cov[2]) : undefined, corpus: cov ? Number(cov[3]) : undefined };
  return { ok: run.status === 0, result, failures: run.status === 0 ? [] : [{ file: crashes, error: `libFuzzer exited with ${run.status ?? run.signal}` }] };
}

let failed = false;
const summary = [];
for (const name of selected) {
  const started = Date.now();
  const native = name in nativeTargets;
  console.log(`${command} ${name}${command === 'fuzz' ? ` (${seconds} s, seed ${seed})` : ''}`);
  const outcome = native ? runNative(name) : await runJs(name);
  if (outcome.skipped) {
    if (named.includes(name)) { failed = true; console.log(`FAIL ${name}: no binary in ${nativeDir} (node test/fuzz/native/build.mjs)`); }
    else console.log(`skip ${name}: no binary in ${nativeDir} (node test/fuzz/native/build.mjs builds it)`);
    continue;
  }
  const r = outcome.result ?? {};
  const time = ((Date.now() - started) / 1000).toFixed(1);
  const detail = command === 'replay' ? `${r.runs ?? 0} inputs`
    : native ? `${r.runs} runs, ${r.edges} edges, ${r.features} features, corpus ${r.corpus}`
    : `${r.execs} runs, ${r.blocks}/${r.allBlocks} blocks, ${r.features} features, corpus ${r.corpus} (+${r.added})`;
  summary.push({ target: name, kind: native ? 'libFuzzer' : 'JavaScript', ok: outcome.ok, seconds: Number(time), ...r });
  if (outcome.ok) console.log(`ok   ${name}: ${detail} (${time} s)`);
  else {
    failed = true;
    console.log(`FAIL ${name}: ${detail} (${time} s)`);
    for (const f of outcome.failures) console.log(`  ${f.file}\n    ${String(f.error).split('\n').slice(0, 8).join('\n    ')}`);
  }
}
if (command === 'fuzz') { mkdirSync(out, { recursive: true }); writeFileSync(join(out, 'summary.json'), JSON.stringify(summary, null, 2) + '\n'); }
process.exit(failed ? 1 : 0);
