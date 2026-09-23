import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, writeFile, readFile, rm, readdir } from 'node:fs/promises';
import { join, resolve } from 'node:path';
import { tmpdir } from 'node:os';
import { execFileSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { provisionArtifact } from '../src/managed-artifacts.mjs';
import { provisionPython } from '../src/managed-python.mjs';

// Local unit tests may supply a fixture Python. Native CI instead exercises the
// real managed bootstrap; applications never need a system Python installation.
const python = process.env.LASM_TEST_PYTHON ?? (await provisionPython({ cache: resolve('.work/managed-python-ci') })).executable;
const generate = `
import sys,io,tarfile,zipfile,stat
kind,path,mode=sys.argv[1:]
name='install/tool.txt' if mode=='normal' else 'install/../../escaped'
if kind=='tar.xz':
 with tarfile.open(path,'w:xz') as out:
  item=tarfile.TarInfo(name); item.size=7
  out.addfile(item,io.BytesIO(b'tool-v1'))
else:
 with zipfile.ZipFile(path,'w',zipfile.ZIP_DEFLATED) as out:
  out.writestr(name,b'tool-v1')
`;

async function fixture(t, format, mode = 'normal') {
  const base = await mkdtemp(join(tmpdir(), 'lasm-sdk-archive-'));
  t.after(() => rm(base, { recursive: true, force: true }));
  const archive = join(base, 'archive.' + format);
  execFileSync(python, ['-I', '-B', '-c', generate, format, archive, mode], { windowsHide: true, timeout: 10_000 });
  const bytes = await readFile(archive), cache = join(base, 'cache');
  const artifact = { name: 'sdk-fixture', root: 'install', format, url: 'https://example.invalid/sdk',
    bytes: bytes.length, sha256: createHash('sha256').update(bytes).digest('hex'), maximumExtractedBytes: 1024 };
  return { bytes, artifact, options: { python, cache, log() {}, fetch: async () => new Response(bytes) } };
}

for (const format of ['tar.xz', 'zip']) {
  test(`${format}: streaming managed decoder produces an immutable verified cache`, async t => {
    const f = await fixture(t, format);
    const installed = await provisionArtifact(f.artifact, f.options);
    assert.equal(await readFile(join(installed.directory, 'tool.txt'), 'utf8'), 'tool-v1');
    assert.equal((await provisionArtifact(f.artifact, f.options)).cacheHit, true);
    await writeFile(join(installed.directory, 'tool.txt'), 'tampered');
    await assert.rejects(provisionArtifact(f.artifact, f.options), /contents changed/);
  });
  test(`${format}: traversal entries never reach a published cache`, async t => {
    const f = await fixture(t, format, 'traversal');
    await assert.rejects(provisionArtifact(f.artifact, f.options), /Unsafe/);
    assert.deepEqual(await readdir(join(f.options.cache, 'artifacts')), []);
  });
  test(`${format}: decoder errors are retained and partial extraction is removed`, async t => {
    const f = await fixture(t, format);
    const bytes = f.bytes.subarray(0, -12);
    const artifact = { ...f.artifact, bytes: bytes.length, sha256: createHash('sha256').update(bytes).digest('hex') };
    await assert.rejects(provisionArtifact(artifact, { ...f.options, fetch: async () => new Response(bytes) }), /decoder failed|TAR_/);
    assert.deepEqual(await readdir(join(f.options.cache, 'artifacts')), []);
  });
}
