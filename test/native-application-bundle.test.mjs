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
  const packages = ['koffi', ...['linux', 'darwin', 'win32'].flatMap(platform => ['x64', 'arm64'].map(arch => `@koromix/koffi-${platform}-${arch}`))]
    .map(name => ({ name, version: '3.3.0', integrity: 'preserved vendor identity' }));
  put('manifest.json', JSON.stringify({ nodeApi: 8, packages }));
  for (const name of ['index.cjs', 'src/koffi/index.cjs', 'src/koffi/src/static.cjs', 'package.json', 'LICENSE.txt'])
    put('node_modules/koffi/' + name, name);
  put('node_modules/koffi/src/koffi/src/huge-unused-source.cc', 'unused');
  for (const arch of ['x64', 'arm64']) for (const name of ['index.js', 'package.json', `linux_${arch}/koffi.node`, `musl_${arch}/koffi.node`])
    put(`node_modules/@koromix/koffi-linux-${arch}/${name}`, arch + name);
  for (const platform of ['darwin', 'win32']) for (const arch of ['x64', 'arm64'])
    for (const name of ['index.js', 'package.json', `${platform}_${arch}/koffi.node`])
      put(`node_modules/@koromix/koffi-${platform}-${arch}/${name}`, arch + name);
  for (const directory of ['process', 'signals']) {
    const files = {};
    for (const arch of ['x64', 'arm64']) for (const abi of ['gnu', 'musl']) {
      const name = `linux-${arch}-${abi}${directory === 'signals' ? '.so' : ''}`, bytes = Buffer.from(name);
      put(directory + '/' + name, bytes); chmodSync(join(source, directory, name), 0o755);
      files[name] = { bytes: bytes.length, sha256: createHash('sha256').update(bytes).digest('hex') };
    }
    if (directory === 'signals') for (const arch of ['x64', 'arm64']) {
      const name = `darwin-${arch}.dylib`, bytes = Buffer.from(name);
      put(directory + '/' + name, bytes);
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
  copyApplicationNativeBundle(root, output, { platform: 'linux', arch });
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

for (const arch of ['x64', 'arm64']) test(`macOS ${arch} copies only its native adapter and signal helper`, t => {
  const { root, source, output } = fixture(t);
  copyApplicationNativeBundle(root, output, { platform: 'darwin', arch });
  const base = join(output, 'native'), copied = files(base);
  assert.equal(copied.length, 12);
  assert.ok(copied.includes(`node_modules/@koromix/koffi-darwin-${arch}/darwin_${arch}/koffi.node`));
  assert.ok(copied.includes(`signals/darwin-${arch}.dylib`));
  assert.equal(copied.some(name => /linux|musl|process|bun-stack|\.cc$/.test(name)), false);
  for (const name of copied.filter(name => !name.endsWith('manifest.json')))
    assert.deepEqual(readFileSync(join(base, name)), readFileSync(join(source, name)));
});

for (const arch of ['x64', 'arm64']) test(`Windows ${arch} has its complete adapter without POSIX helper dependencies`, t => {
  const { root, source, output } = fixture(t);
  // A Windows deployment must not depend on POSIX helper files even existing.
  for (const directory of ['signals', 'process']) rmSync(join(source, directory), { recursive: true });
  copyApplicationNativeBundle(root, output, { platform: 'win32', arch });
  const base = join(output, 'native'), copied = files(base);
  assert.equal(copied.length, 9);
  assert.ok(copied.includes(`node_modules/@koromix/koffi-win32-${arch}/win32_${arch}/koffi.node`));
  assert.ok(copied.includes('node_modules/koffi/LICENSE.txt'));
  assert.equal(copied.some(name => /linux|darwin|signals|process|bun-stack|\.cc$/.test(name)), false);
  for (const name of copied.filter(name => !name.endsWith('manifest.json')))
    assert.deepEqual(readFileSync(join(base, name)), readFileSync(join(source, name)));
  assert.deepEqual(JSON.parse(readFileSync(join(base, 'manifest.json'))).deployment, { target: 'node', platform: 'win32', arch });
});

test('unknown vendor layouts, missing helpers and changed helper bytes fail the build', t => {
  const { root, output, put } = fixture(t);
  assert.throws(() => copyApplicationNativeBundle(root, output, { arch: 'other' }), /architecture/);
  put('process/linux-x64-gnu', 'changed');
  assert.throws(() => copyApplicationNativeBundle(root, output, { platform: 'linux', arch: 'x64' }), /integrity mismatch/);
  put('manifest.json', JSON.stringify({ nodeApi: 8, packages: [] }));
  assert.throws(() => copyApplicationNativeBundle(root, output, { arch: 'arm64' }), /layout/);
});
