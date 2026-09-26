import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, writeFileSync, readFileSync, readdirSync, rmSync, chmodSync, statSync } from 'node:fs';
import { join, dirname } from 'node:path';
import { tmpdir } from 'node:os';
import { createHash } from 'node:crypto';
import { copyApplicationNativeBundle } from '../src/native-bundle.mjs';

function fixture(t) {
  const root = mkdtempSync(join(tmpdir(), 'lasm-native-bundle-'));
  t.after(() => rmSync(root, { recursive: true, force: true }));
  const source = join(root, 'src/native');
  const put = (path, value) => { mkdirSync(dirname(join(source, path)), { recursive: true }); writeFileSync(join(source, path), value); };
  const packages = ['koffi', '@koromix/koffi-linux-x64', '@koromix/koffi-linux-arm64', '@koromix/koffi-darwin-x64']
    .map(name => ({ name, version: '3.3.0', integrity: 'preserved vendor identity' }));
  put('manifest.json', JSON.stringify({ nodeApi: 8, packages }));
  for (const name of ['index.cjs', 'src/koffi/index.cjs', 'src/koffi/src/static.cjs', 'package.json', 'LICENSE.txt'])
    put('node_modules/koffi/' + name, name);
  put('node_modules/koffi/src/koffi/src/huge-unused-source.cc', 'unused');
  for (const arch of ['x64', 'arm64']) for (const name of ['index.js', 'package.json', `linux_${arch}/koffi.node`, `musl_${arch}/koffi.node`])
    put(`node_modules/@koromix/koffi-linux-${arch}/${name}`, arch + name);
  for (const directory of ['process', 'signals']) {
    const files = {};
    for (const arch of ['x64', 'arm64']) for (const abi of ['gnu', 'musl']) {
      const name = `linux-${arch}-${abi}${directory === 'signals' ? '.so' : ''}`, bytes = Buffer.from(name);
      put(directory + '/' + name, bytes); chmodSync(join(source, directory, name), 0o755);
      files[name] = { bytes: bytes.length, sha256: createHash('sha256').update(bytes).digest('hex') };
    }
    put(directory + '/manifest.json', JSON.stringify({ protocol: 1, sourceSha256: 'retained provenance', files }));
    put(directory + '/THIRD_PARTY_NOTICES.txt', 'license');
  }
  put('bun-stack/not-required.so', 'unused');
  return { root, source, put, output: join(root, 'output') };
}

function files(base) {
  return readdirSync(base, { withFileTypes: true }).flatMap(entry => entry.isDirectory()
    ? files(join(base, entry.name)).map(name => entry.name + '/' + name) : [entry.name]).sort();
}

for (const arch of ['x64', 'arm64']) test(`Linux ${arch} deployment keeps its loaders, licenses and authenticated helpers`, t => {
  const { root, source, output } = fixture(t);
  copyApplicationNativeBundle(root, output, { arch });
  const base = join(output, 'native'), copied = files(base);
  assert.equal(copied.length, 15);
  assert.ok(copied.includes(`node_modules/@koromix/koffi-linux-${arch}/linux_${arch}/koffi.node`));
  assert.ok(copied.includes('node_modules/koffi/LICENSE.txt'));
  assert.equal(copied.some(name => /musl|darwin|bun-stack|\.cc$/.test(name)), false);
  for (const name of copied.filter(name => !name.endsWith('manifest.json')))
    assert.deepEqual(readFileSync(join(base, name)), readFileSync(join(source, name)));
  for (const [directory, name] of [['process', `linux-${arch}-gnu`], ['signals', `linux-${arch}-gnu.so`]]) {
    const manifest = JSON.parse(readFileSync(join(base, directory, 'manifest.json')));
    assert.deepEqual(Object.keys(manifest.files), [name]);
    assert.equal(manifest.sourceSha256, 'retained provenance');
    if (process.platform !== 'win32') assert.equal(statSync(join(base, directory, name)).mode & 0o111, 0o111);
  }
});

test('unknown vendor layouts, missing helpers and changed helper bytes fail the build', t => {
  const { root, output, put } = fixture(t);
  assert.throws(() => copyApplicationNativeBundle(root, output, { arch: 'other' }), /architecture/);
  put('process/linux-x64-gnu', 'changed');
  assert.throws(() => copyApplicationNativeBundle(root, output, { arch: 'x64' }), /integrity mismatch/);
  put('manifest.json', JSON.stringify({ nodeApi: 8, packages: [] }));
  assert.throws(() => copyApplicationNativeBundle(root, output, { arch: 'arm64' }), /layout/);
});
