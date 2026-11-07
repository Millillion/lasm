// One fuzz target in a worker thread (started by test/fuzz/run.mjs): replays
// files, or runs a coverage-guided campaign. Coverage is V8's block coverage of
// the target's sources (node:inspector Profiler.takePreciseCoverage, which
// resets the counts on each read): an input that reaches a new block, or a
// block a new number of times (libFuzzer's count buckets), joins the corpus.
// The current input is mirrored into shared memory before each run, so the
// main thread can save it when a run hangs (it then terminates this worker).
import { workerData, parentPort } from 'node:worker_threads';
import { Session } from 'node:inspector';
import { createHash } from 'node:crypto';
import { mkdirSync, readFileSync, readdirSync, writeFileSync, existsSync } from 'node:fs';
import { join } from 'node:path';
import { pathToFileURL } from 'node:url';
import { mutate, rng } from './mutate.mjs';

const { targetFile, root, mode, files = [], seedDirs = [], outDir, crashDir, seconds = 10, seed = Date.now() >>> 0, sab } = workerData;
const target = await import(pathToFileURL(targetFile).href);
const maxLength = target.maxLength ?? 4096;
const heartbeat = new Int32Array(sab, 0, 2), mirror = new Uint8Array(sab, 8);
const hash = bytes => createHash('sha1').update(bytes).digest('hex').slice(0, 16);
const dictionary = (target.dictionary ?? []).map(t => typeof t === 'string' ? new TextEncoder().encode(t) : Uint8Array.from(t));

function describe(error) {
  if (error instanceof Error) return error.stack?.startsWith(error.name) ? error.stack : `${error.name}: ${error.message}\n${error.stack ?? ''}`;
  return `non-Error thrown: ${String(error)}`;
}

/** Runs the target on one input: undefined, or the failure. */
async function execute(input) {
  mirror.set(input.subarray(0, mirror.length));
  Atomics.store(heartbeat, 1, Math.min(input.length, mirror.length));
  Atomics.add(heartbeat, 0, 1);
  try {
    const result = target.run(input);
    if (result && typeof result.then === 'function') await result;
    return undefined;
  } catch (error) {
    return error ?? new Error('undefined thrown');
  }
}

function saveCrash(input, error) {
  mkdirSync(crashDir, { recursive: true });
  const name = `crash-${hash(input)}`;
  writeFileSync(join(crashDir, name), input);
  writeFileSync(join(crashDir, name + '.txt'), describe(error) + '\n');
  return join(crashDir, name);
}

if (target.setup) await target.setup();

if (mode === 'replay') {
  let failures = 0;
  for (const file of files) {
    const input = new Uint8Array(readFileSync(file));
    const error = await execute(input);
    if (error) { failures++; parentPort.postMessage({ type: 'failure', file, error: describe(error) }); }
  }
  parentPort.postMessage({ type: 'done', runs: files.length, failures });
} else {
  // ---- coverage ----
  const session = new Session();
  session.connect();
  const post = (method, params) => {
    let out, failure, answered = false;
    session.post(method, params, (error, result) => { failure = error; out = result; answered = true; });
    if (!answered) throw new Error(`inspector ${method} did not answer synchronously`);
    if (failure) throw failure;
    return out;
  };
  post('Profiler.enable');
  post('Profiler.startPreciseCoverage', { callCount: true, detailed: true });
  const watched = new Set((target.sources ?? []).map(s => pathToFileURL(join(root, s)).href));
  const scriptIds = new Map();
  const bucket = n => n === 0 ? 0 : n === 1 ? 1 : n === 2 ? 2 : n === 3 ? 3 : n < 8 ? 4 : n < 16 ? 5 : n < 32 ? 6 : n < 128 ? 7 : 8;
  const seen = new Set(), blocks = new Set(), allBlocks = new Set();
  /** The new features of the last run (and the blocks it hit). */
  function features() {
    const { result } = post('Profiler.takePreciseCoverage');
    let fresh = 0;
    for (const script of result) {
      if (watched.size && !watched.has(script.url)) continue;
      let id = scriptIds.get(script.url);
      if (id === undefined) scriptIds.set(script.url, id = scriptIds.size);
      for (const fn of script.functions) for (const range of fn.ranges) {
        const block = id * 16777216 + range.startOffset;
        allBlocks.add(block);
        if (!range.count) continue;
        blocks.add(block);
        const key = block * 16 + bucket(range.count);
        if (!seen.has(key)) { seen.add(key); fresh++; }
      }
    }
    return fresh;
  }
  features(); // module loading and setup
  const random = rng(seed);
  const corpus = [];
  let execs = 0, added = 0;
  const started = Date.now(), deadline = started + seconds * 1000;
  const stop = (crash, error) => {
    parentPort.postMessage({ type: 'done', execs, corpus: corpus.length, added, features: seen.size,
      blocks: blocks.size, allBlocks: allBlocks.size, seconds: (Date.now() - started) / 1000, crash, error });
  };
  const keep = (input, write) => {
    corpus.push(input);
    if (write) { mkdirSync(outDir, { recursive: true }); writeFileSync(join(outDir, hash(input)), input); added++; }
  };
  // Seeds: the committed corpus and regressions. A failing one is a regression.
  const seeds = [];
  for (const dir of seedDirs) if (existsSync(dir)) for (const name of readdirSync(dir).sort()) seeds.push(new Uint8Array(readFileSync(join(dir, name))));
  if (!seeds.length) seeds.push(new Uint8Array(0));
  let crashed = null;
  for (const input of seeds) {
    const error = await execute(input); execs++;
    if (error) { crashed = { file: saveCrash(input, error), error: describe(error) }; break; }
    if (features() > 0 || !corpus.length) keep(input, false);
  }
  let lastReport = Date.now();
  while (!crashed && Date.now() < deadline) {
    // Newer entries (deeper inputs) are picked more often.
    const parent = corpus[random.chance(2) ? corpus.length - 1 - random.below(Math.min(corpus.length, 16)) : random.below(corpus.length)];
    const input = mutate(parent, { random, maxLength, dictionary, corpus });
    const error = await execute(input); execs++;
    if (error) { crashed = { file: saveCrash(input, error), error: describe(error) }; break; }
    if (features() > 0) keep(input, true);
    if (Date.now() - lastReport > 10_000) {
      lastReport = Date.now();
      parentPort.postMessage({ type: 'stats', execs, corpus: corpus.length, features: seen.size, blocks: blocks.size });
    }
  }
  stop(crashed?.file, crashed?.error);
}
