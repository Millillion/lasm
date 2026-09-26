import test from 'node:test';
import assert from 'node:assert/strict';
import { Writable } from 'node:stream';
import { createBuildProgress } from '../src/build-progress.mjs';
import { buildApplicationWithProgress } from '../src/application-build-client.mjs';

function reporter() {
  let now = 0, tick, cancelled = false;
  const lines = [];
  const progress = createBuildProgress({ log: text => lines.push(text), now: () => now,
    schedule: callback => { tick = callback; return 1; }, cancel: () => { cancelled = true; } });
  return { progress, lines, advance: milliseconds => { now += milliseconds; tick(); }, cancelled: () => cancelled };
}

test('first setup explains the wait and cache once; downloads show measured bytes and idle waits', () => {
  const r = reporter();
  const download = { stage: 'Downloading Lean', totalBytes: 4_000_000, download: true, cache: '/tools λ' };
  r.progress.update({ ...download, receivedBytes: 0 });
  assert.match(r.lines.join('\n'), /few minutes/);
  assert.match(r.lines.join('\n'), /Tools cache: \/tools λ/);
  r.progress.update({ ...download, receivedBytes: 1_000_000 });
  r.advance(10_000);
  assert.match(r.lines.at(-1), /1.0 MB \/ 4.0 MB \(25%\).*10s elapsed/);
  assert.match(r.lines.at(-1), /waiting for download data/);
  r.progress.update({ ...download, receivedBytes: 4_000_000, complete: true });
  assert.match(r.lines.at(-1), /100%/);
  r.progress.update({ ...download, stage: 'Downloading Python', receivedBytes: 0 });
  assert.equal(r.lines.filter(line => line.includes('few minutes')).length, 1);
  assert.doesNotMatch(r.lines.join('\n'), /\x1b|\r/);
  r.progress.finish('Build ready');
  assert.equal(r.cancelled(), true);
});

test('unknown-length work reports time without fictitious percentages and stops after completion or failure', () => {
  for (const completion of ['Reused cached build', undefined]) {
    const r = reporter();
    r.progress.update({ stage: 'Verifying cached tools' });
    r.advance(75_000);
    assert.match(r.lines.at(-1), /1m 15s elapsed/);
    assert.doesNotMatch(r.lines.join('\n'), /%|First-time/);
    r.progress.finish(completion);
    const count = r.lines.length;
    r.advance(20_000);
    r.progress.update({ stage: 'late event' }); r.progress.message('late message'); r.progress.finish('late finish');
    assert.equal(r.lines.length, count);
    assert.equal(r.cancelled(), true);
    if (!completion) assert.doesNotMatch(r.lines.join('\n'), /ready|complete/i);
  }
});

function capture() {
  const chunks = [];
  return { chunks, stream: new Writable({ write(chunk, encoding, callback) { chunks.push(String(chunk)); callback(); } }),
    text: () => chunks.join('') };
}
const workerUrl = new URL('./fixtures/build-progress-worker.mjs', import.meta.url);

test('the CLI keeps reporting while its real build worker blocks, and leaves stdout separate', async () => {
  const stdout = capture(), stderr = capture();
  const result = await buildApplicationWithProgress('Main.lean', {}, {
    workerUrl, stdout: stdout.stream, stderr: stderr.stream, intervalMs: 25,
  });
  assert.equal(result.output, '/fixture/dist');
  assert.equal(stdout.text(), 'fixture stdout\n');
  assert.match(stderr.text(), /fixture diagnostic/);
  assert.ok(stderr.text().split('\n').filter(line => line.includes('Linking fixture application')).length >= 3,
    'Phase updates must occur while the worker is synchronously blocked');
  assert.match(stderr.text(), /Build ready/);
  const count = stderr.chunks.length;
  await new Promise(resolve => setTimeout(resolve, 75));
  assert.equal(stderr.chunks.length, count, 'No build status may leak into the running application');
});

test('cached worker completion does not claim it downloaded or rebuilt tools', async () => {
  const stdout = capture(), stderr = capture();
  await buildApplicationWithProgress('Main.lean', { cached: true }, {
    workerUrl, stdout: stdout.stream, stderr: stderr.stream, intervalMs: 25,
  });
  assert.match(stderr.text(), /Reused cached build/);
  assert.doesNotMatch(stderr.text(), /First-time|Build ready/);
});

for (const [options, expected] of [
  [{ fail: true }, /compiler failed/], [{ crash: true }, /unexpected fixture failure/],
  [{ noResult: true }, /stopped before completing/],
]) test(`worker failure stops status updates and preserves diagnostics: ${JSON.stringify(options)}`, async () => {
  const stdout = capture(), stderr = capture();
  await assert.rejects(buildApplicationWithProgress('Main.lean', options, {
    workerUrl, stdout: stdout.stream, stderr: stderr.stream, intervalMs: 25,
  }), error => {
    assert.match(error.message, expected);
    if (options.fail) assert.equal(error.stderr, 'Main.lean:2:3: unknown identifier');
    return true;
  });
  assert.doesNotMatch(stderr.text(), /Build ready|Reused cached build/);
  const count = stderr.chunks.length;
  await new Promise(resolve => setTimeout(resolve, 75));
  assert.equal(stderr.chunks.length, count);
});
