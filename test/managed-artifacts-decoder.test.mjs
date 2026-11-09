// SDK archives (tar.xz, zip) are decoded by the managed Python's archive-stream.py
// into a tar stream (src/managed-artifacts.mjs extract). A shell-script stand-in
// for Python records how it is run and plays the decoder: it writes a prepared
// tar stream, fails, dies by a signal, or hangs. POSIX only.
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, mkdir, writeFile, readFile, rm, readdir, chmod } from 'node:fs/promises';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { fileURLToPath } from 'node:url';
import { createHash } from 'node:crypto';
import { c as createTar } from 'tar';
import { provisionArtifact } from '../src/managed-artifacts.mjs';

const posix = process.platform !== 'win32';
const decoder = fileURLToPath(new URL('../src/archive-stream.py', import.meta.url));

async function fixture(t, format, behaviour) {
  const base = await mkdtemp(join(tmpdir(), 'lasm-decoder-'));
  t.after(() => rm(base, { recursive: true, force: true }));
  await mkdir(join(base, 'source/install/bin'), { recursive: true });
  await writeFile(join(base, 'source/install/bin/tool'), 'decoded tool');
  await writeFile(join(base, 'source/install/NOTICE'), 'notice');
  await createTar({ cwd: join(base, 'source'), file: join(base, 'stream.tar'), portable: true }, ['install']);
  // The "archive" the catalog pins: any bytes; the stand-in decoder ignores them.
  const bytes = Buffer.from(`pretend ${format} archive`);
  const python = join(base, 'python3');
  await writeFile(python, `#!/bin/sh\nprintf '%s\\n' "$@" > ${JSON.stringify(join(base, 'arguments'))}\n${behaviour.replaceAll('STREAM', JSON.stringify(join(base, 'stream.tar')))}\n`);
  await chmod(python, 0o755);
  const artifact = { name: 'sdk-fixture', root: 'install', format, url: 'https://example.invalid/sdk', bytes: bytes.length,
    sha256: createHash('sha256').update(bytes).digest('hex'), maximumExtractedBytes: 10_000 };
  const cache = join(base, 'cache');
  return { base, python, artifact, cache, options: { python, cache, log() {}, fetch: async () => new Response(bytes) },
    arguments: async () => (await readFile(join(base, 'arguments'), 'utf8')).split('\n').slice(0, -1) };
}

for (const format of ['tar.xz', 'zip']) {
  test(`${format}: the decoder runs isolated on the downloaded archive and its tar stream is installed`, { skip: !posix }, async t => {
    const f = await fixture(t, format, 'cat STREAM');
    const installed = await provisionArtifact(f.artifact, f.options);
    assert.equal(await readFile(join(installed.directory, 'bin/tool'), 'utf8'), 'decoded tool');
    const [isolated, noBytecode, script, kind, archive] = await f.arguments();
    assert.deepEqual([isolated, noBytecode, script, kind], ['-I', '-B', decoder, format]);
    assert.match(archive, new RegExp(`archive\\.${format.replace('.', '\\.')}$`));
    assert.deepEqual(Object.keys(installed.receipt.files).sort(), ['NOTICE', 'bin', 'bin/tool']);
  });
}

// Regression: a decoder failure used to surface as the tar parser's
// "TAR_BAD_ARCHIVE: Unrecognized archive format" for the empty stream it left.
test('a failing decoder reports its exit code and the end of its messages; nothing is installed', { skip: !posix }, async t => {
  const f = await fixture(t, 'zip', 'echo "bad zip: truncated" >&2; exit 3');
  await assert.rejects(provisionArtifact(f.artifact, f.options), { message: 'SDK archive decoder failed (3): bad zip: truncated\n' });
  assert.deepEqual(await readdir(join(f.cache, 'artifacts')), []);
  // After a complete stream too.
  const late = await fixture(t, 'zip', 'cat STREAM; echo "trailing garbage" >&2; exit 2');
  await assert.rejects(provisionArtifact(late.artifact, late.options), { message: 'SDK archive decoder failed (2): trailing garbage\n' });
  const long = await fixture(t, 'zip', `i=0; while [ $i -lt 200 ]; do printf '%050d' $i >&2; i=$((i+1)); done; printf 'END' >&2; exit 4`);
  const error = await provisionArtifact(long.artifact, long.options).then(() => null, e => e);
  const diagnostic = error.message.slice('SDK archive decoder failed (4): '.length);
  assert.ok(error.message.startsWith('SDK archive decoder failed (4): '));
  assert.equal(diagnostic.length, 8192, 'only the last 8 KiB of messages are kept');
  assert.ok(diagnostic.endsWith('END'));
});

test('a decoder killed by a signal is named by the signal', { skip: !posix }, async t => {
  const f = await fixture(t, 'tar.xz', 'kill -9 $$');
  await assert.rejects(provisionArtifact(f.artifact, f.options), { message: 'SDK archive decoder failed (SIGKILL): ' });
});

test('a decoder that writes a broken stream and keeps running is stopped', { skip: !posix }, async t => {
  const f = await fixture(t, 'tar.xz', 'head -c 700 /dev/zero | tr "\\000" "x"; exec sleep 30');
  const started = Date.now();
  await assert.rejects(provisionArtifact(f.artifact, f.options), /TAR_|tar|archive/i);
  assert.ok(Date.now() - started < 20_000, 'the decoder is killed, not awaited');
  assert.deepEqual(await readdir(join(f.cache, 'artifacts')), []);
});

test('a decoder that cannot start is an error; SDK archives need an absolute Python path', { skip: !posix }, async t => {
  const f = await fixture(t, 'zip', 'cat STREAM');
  await assert.rejects(provisionArtifact(f.artifact, { ...f.options, python: join(f.base, 'no-such-python') }), { code: 'ENOENT' });
  for (const python of [undefined, '', 'python3', 'relative/python3'])
    await assert.rejects(provisionArtifact(f.artifact, { ...f.options, python }), { message: 'SDK archives require the absolute path to a managed Python executable' }, String(python));
  // Other formats need no Python at all.
  await assert.rejects(provisionArtifact({ ...f.artifact, format: 'tar.gz' }, { ...f.options, python: undefined }), error => !/absolute path/.test(error.message));
});

test('the decoder\'s entries pass the same safety checks', { skip: !posix }, async t => {
  const f = await fixture(t, 'zip', 'cat STREAM');
  await mkdir(join(f.base, 'source/install/sub'), { recursive: true });
  await writeFile(join(f.base, 'escape'), 'x');
  await createTar({ cwd: f.base, file: join(f.base, 'stream.tar'), portable: true, preservePaths: true }, ['source/install', 'escape']);
  await assert.rejects(provisionArtifact(f.artifact, f.options), /Unsafe or duplicate archive entry/);
  assert.deepEqual(await readdir(join(f.cache, 'artifacts')), []);
});
