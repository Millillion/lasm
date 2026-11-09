import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, writeFileSync, readFileSync, readdirSync, rmSync, chmodSync, statSync, existsSync, renameSync } from 'node:fs';
import { join, dirname } from 'node:path';
import { tmpdir } from 'node:os';
import { createHash } from 'node:crypto';
import { copyApplicationNativeBundle } from '../src/native-bundle.mjs';
import { copyApplicationHost, applicationHostFiles } from '../src/application-output.mjs';

function fixture(t) {
  const root = mkdtempSync(join(tmpdir(), 'lasm-native-bundle-'));
  t.after(() => rmSync(root, { recursive: true, force: true }));
  const source = join(root, 'src/native');
  const put = (path, value) => { mkdirSync(dirname(join(source, path)), { recursive: true }); writeFileSync(join(source, path), value); };
  const packages = ['koffi', ...['linux-x64', 'linux-arm64', 'darwin-x64', 'darwin-arm64', 'win32-x64'].map(host => `@koromix/koffi-${host}`)]
    .map(name => ({ name, version: '3.3.0', integrity: 'preserved vendor identity' }));
  put('manifest.json', JSON.stringify({ nodeApi: 8, packages }));
  for (const name of ['index.cjs', 'src/koffi/index.cjs', 'src/koffi/src/static.cjs', 'package.json', 'LICENSE.txt'])
    put('node_modules/koffi/' + name, name);
  put('node_modules/koffi/src/koffi/src/huge-unused-source.cc', 'unused');
  for (const arch of ['x64', 'arm64']) for (const name of ['index.js', 'package.json', `linux_${arch}/koffi.node`, `musl_${arch}/koffi.node`])
    put(`node_modules/@koromix/koffi-linux-${arch}/${name}`, arch + name);
  for (const [platform, arch] of [['darwin', 'x64'], ['darwin', 'arm64'], ['win32', 'x64']])
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
  put('unrelated/not-required.so', 'unused');
  return { root, source, put, output: join(root, 'output') };
}

function files(base) {
  return readdirSync(base, { withFileTypes: true }).flatMap(entry => entry.isDirectory()
    ? files(join(base, entry.name)).map(name => entry.name + '/' + name) : [entry.name]).sort();
}

// glibc and musl (Alpine) pieces for each Linux architecture.
const linuxFiles = arch => [`node_modules/@koromix/koffi-linux-${arch}/index.js`, `node_modules/@koromix/koffi-linux-${arch}/package.json`,
  `node_modules/@koromix/koffi-linux-${arch}/linux_${arch}/koffi.node`, `node_modules/@koromix/koffi-linux-${arch}/musl_${arch}/koffi.node`,
  `process/linux-${arch}-gnu`, `signals/linux-${arch}-gnu.so`, `process/linux-${arch}-musl`, `signals/linux-${arch}-musl.so`];
const koffiFiles = ['node_modules/koffi/index.cjs', 'node_modules/koffi/src/koffi/index.cjs', 'node_modules/koffi/src/koffi/src/static.cjs',
  'node_modules/koffi/package.json', 'node_modules/koffi/LICENSE.txt', 'manifest.json'];
const helperFiles = ['process/manifest.json', 'process/THIRD_PARTY_NOTICES.txt', 'signals/manifest.json', 'signals/THIRD_PARTY_NOTICES.txt'];

function assertCopiedBytes(base, source, copied) {
  for (const name of copied.filter(name => !name.endsWith('manifest.json')))
    assert.deepEqual(readFileSync(join(base, name)), readFileSync(join(source, name)));
}

function assertLinuxHelpers(base, extraSignals = []) {
  const processManifest = JSON.parse(readFileSync(join(base, 'process/manifest.json')));
  assert.deepEqual(Object.keys(processManifest.files), ['linux-x64-gnu', 'linux-x64-musl', 'linux-arm64-gnu', 'linux-arm64-musl']);
  assert.equal(processManifest.sourceSha256, 'retained provenance');
  const signals = JSON.parse(readFileSync(join(base, 'signals/manifest.json')));
  assert.deepEqual(Object.keys(signals.files), ['linux-x64-gnu.so', 'linux-x64-musl.so', 'linux-arm64-gnu.so', 'linux-arm64-musl.so', ...extraSignals]);
  if (process.platform !== 'win32') for (const arch of ['x64', 'arm64']) for (const abi of ['gnu', 'musl'])
    assert.equal(statSync(join(base, 'process', `linux-${arch}-${abi}`)).mode & 0o111, 0o111);
}

for (const arch of ['x64', 'arm64']) test(`a Linux ${arch} build carries both Linux targets (glibc and musl), loaders, licenses and authenticated helpers`, t => {
  const { root, source, output } = fixture(t);
  copyApplicationNativeBundle(root, output, { platform: 'linux', arch });
  const base = join(output, 'native'), copied = files(base);
  assert.deepEqual(copied, [...koffiFiles, ...helperFiles, ...linuxFiles('x64'), ...linuxFiles('arm64')].sort());
  assert.equal(copied.some(name => /darwin|win32|unrelated|\.cc$/.test(name)), false);
  assertCopiedBytes(base, source, copied);
  assertLinuxHelpers(base);
  assert.deepEqual(JSON.parse(readFileSync(join(base, 'manifest.json'))).deployment,
    { target: 'node', targets: ['linux-x64', 'linux-arm64'], linuxLibc: ['glibc', 'musl'] });
});

for (const arch of ['x64', 'arm64']) test(`a macOS ${arch} build carries its own adapter plus both Linux targets`, t => {
  const { root, source, output } = fixture(t);
  copyApplicationNativeBundle(root, output, { platform: 'darwin', arch });
  const base = join(output, 'native'), copied = files(base);
  const darwin = [`node_modules/@koromix/koffi-darwin-${arch}/index.js`, `node_modules/@koromix/koffi-darwin-${arch}/package.json`,
    `node_modules/@koromix/koffi-darwin-${arch}/darwin_${arch}/koffi.node`, `signals/darwin-${arch}.dylib`];
  assert.deepEqual(copied, [...koffiFiles, ...helperFiles, ...linuxFiles('x64'), ...linuxFiles('arm64'), ...darwin].sort());
  assert.equal(copied.some(name => /win32|unrelated|\.cc$/.test(name) || name.includes(`darwin-${arch === 'x64' ? 'arm64' : 'x64'}`)), false);
  assertCopiedBytes(base, source, copied);
  assertLinuxHelpers(base, [`darwin-${arch}.dylib`]);
  assert.deepEqual(JSON.parse(readFileSync(join(base, 'manifest.json'))).deployment.targets, ['linux-x64', 'linux-arm64', `darwin-${arch}`]);
});

for (const arch of ['x64']) test(`a Windows ${arch} build carries its adapter plus both Linux targets`, t => {
  const { root, source, output } = fixture(t);
  for (const name of applicationHostFiles) { mkdirSync(dirname(join(root, 'src', name)), { recursive: true }); writeFileSync(join(root, 'src', name), 'host fixture: ' + name); }
  // Exercise the application's selector too: calling only the low-level copier
  // missed Windows falling back to the entire multi-platform native bundle.
  copyApplicationHost(output, { platform: 'win32', arch, sourceRoot: root });
  const base = join(output, 'host/native'), copied = files(base);
  for (const name of applicationHostFiles)
    assert.equal(readFileSync(join(output, 'host', name), 'utf8'), 'host fixture: ' + name);
  const windows = [`node_modules/@koromix/koffi-win32-${arch}/index.js`, `node_modules/@koromix/koffi-win32-${arch}/package.json`,
    `node_modules/@koromix/koffi-win32-${arch}/win32_${arch}/koffi.node`];
  assert.deepEqual(copied, [...koffiFiles, ...helperFiles, ...linuxFiles('x64'), ...linuxFiles('arm64'), ...windows].sort());
  assert.equal(copied.some(name => /darwin|unrelated|\.cc$/.test(name)), false);
  assertCopiedBytes(base, source, copied);
  assertLinuxHelpers(base);
  assert.deepEqual(JSON.parse(readFileSync(join(base, 'manifest.json'))).deployment,
    { target: 'node', targets: ['linux-x64', 'linux-arm64', 'win32-x64'], linuxLibc: ['glibc', 'musl'] });
});

test('deployments never carry the unused pthread working-directory factory', t => {
  const { root, output } = fixture(t);
  assert.equal(applicationHostFiles.includes('native-pthread-factory.cjs'), false);
  for (const name of applicationHostFiles) { mkdirSync(dirname(join(root, 'src', name)), { recursive: true }); writeFileSync(join(root, 'src', name), 'host fixture'); }
  copyApplicationHost(output, { platform: 'linux', arch: 'x64', glibc: '2.39', sourceRoot: root });
  assert.equal(existsSync(join(output, 'host/native-pthread-factory.cjs')), false);
});

test('Windows ARM64 deployments are refused as an unsupported platform', t => {
  const { root, output } = fixture(t);
  assert.throws(() => copyApplicationNativeBundle(root, output, { platform: 'win32', arch: 'arm64' }), /Windows ARM64 is not supported/);
});

test('unknown vendor layouts, missing helpers and changed helper bytes fail the build', t => {
  const { root, output, put } = fixture(t);
  assert.throws(() => copyApplicationNativeBundle(root, output, { platform: 'linux', arch: 'other' }), /architecture/);
  put('process/linux-x64-gnu', 'changed');
  assert.throws(() => copyApplicationNativeBundle(root, output, { platform: 'linux', arch: 'x64' }), /integrity mismatch/);
  put('manifest.json', JSON.stringify({ nodeApi: 8, packages: [] }));
  assert.throws(() => copyApplicationNativeBundle(root, output, { platform: 'linux', arch: 'arm64' }), /layout/);
});

test('the native targets of a deployment: both Linux targets plus the build host, once', async () => {
  const { applicationNativeTargets, deploymentTargets, deploymentLinuxLibcs } = await import('../src/native-bundle.mjs');
  assert.deepEqual(deploymentTargets, ['linux-x64', 'linux-arm64']);
  assert.deepEqual(deploymentLinuxLibcs, ['glibc', 'musl']);
  assert.deepEqual(applicationNativeTargets('linux', 'x64'), ['linux-x64', 'linux-arm64']);
  assert.deepEqual(applicationNativeTargets('darwin', 'arm64'), ['linux-x64', 'linux-arm64', 'darwin-arm64']);
  assert.deepEqual(applicationNativeTargets(), [...new Set(['linux-x64', 'linux-arm64', `${process.platform}-${process.arch}`])]);
});

test('every vendor and helper check names what is wrong', t => {
  const { root, output, put, source } = fixture(t);
  const linux = () => copyApplicationNativeBundle(root, output, { platform: 'linux', arch: 'x64' });
  assert.throws(() => copyApplicationNativeBundle(root, output, { platform: 'freebsd', arch: 'x64' }), { message: 'Unsupported Node application platform' });
  assert.throws(() => copyApplicationNativeBundle(root, output, { platform: 'linux', arch: 'ia32' }), { message: 'Unsupported Node application architecture' });
  const manifest = JSON.parse(readFileSync(join(source, 'manifest.json')));
  put('manifest.json', JSON.stringify({ ...manifest, nodeApi: 9 }));
  assert.throws(linux, { message: 'Unrecognized native application adapter layout' });
  put('manifest.json', JSON.stringify({ ...manifest, packages: manifest.packages.map(item => item.name === 'koffi' ? { ...item, version: '3.3.1' } : item) }));
  assert.throws(linux, { message: 'Unrecognized native application adapter layout' });
  put('manifest.json', JSON.stringify({ ...manifest, packages: manifest.packages.filter(item => item.name !== '@koromix/koffi-linux-arm64') }));
  assert.throws(linux, { message: 'Unrecognized native application adapter layout' });
  put('manifest.json', JSON.stringify(manifest));
  const helper = JSON.parse(readFileSync(join(source, 'signals/manifest.json')));
  put('signals/manifest.json', JSON.stringify({ ...helper, protocol: 2 }));
  assert.throws(linux, { message: 'Native application helper integrity mismatch: linux-x64-gnu.so' });
  put('signals/manifest.json', JSON.stringify({ ...helper, files: { ...helper.files, 'linux-arm64-musl.so': { ...helper.files['linux-arm64-musl.so'], bytes: 1 } } }));
  assert.throws(linux, { message: 'Native application helper integrity mismatch: linux-arm64-musl.so' });
  put('signals/manifest.json', JSON.stringify({ ...helper, files: { ...helper.files, 'linux-x64-musl.so': undefined } }));
  assert.throws(linux, { message: 'Native application helper integrity mismatch: linux-x64-musl.so' });
  put('signals/manifest.json', JSON.stringify(helper));
  linux();
  // The written manifests are indented JSON with a final newline and only the deployed helpers.
  const written = readFileSync(join(output, 'native/signals/manifest.json'), 'utf8');
  assert.equal(written, JSON.stringify({ ...helper, files: Object.fromEntries(Object.entries(helper.files).filter(([name]) => name.startsWith('linux-'))) }, null, 2) + '\n');
  rmSync(source, { recursive: true });
  assert.throws(linux, { message: 'Native Node file adapter is missing. Reinstall the complete Lasm package.' });
});

test('a maintainer checkout without src/native uses the prepared .cache/native-host', t => {
  const { root, output, source } = fixture(t);
  const cache = join(root, '.cache/native-host');
  mkdirSync(join(root, '.cache'), { recursive: true });
  renameSync(source, cache);
  copyApplicationNativeBundle(root, output, { platform: 'linux', arch: 'arm64' });
  assert.equal(readFileSync(join(output, 'native/process/linux-arm64-gnu'), 'utf8'), 'linux-arm64-gnu');
});

test('the whole native bundle for other hosts: every piece, and each missing part named', async t => {
  const { copyNativeBundle, copyProcessLauncherBundle } = await import('../src/native-bundle.mjs');
  const { root, output, source } = fixture(t);
  copyNativeBundle(root, output);
  assert.deepEqual(files(join(output, 'native')), files(source));
  assert.deepEqual(copyProcessLauncherBundle(root, join(root, 'snapshot')).sort(), readdirSync(join(source, 'process')).map(name => `native/process/${name}`).sort());
  assert.deepEqual(files(join(root, 'snapshot/native/process')), files(join(source, 'process')));
  rmSync(join(source, 'signals/manifest.json'));
  assert.throws(() => copyNativeBundle(root, output), { message: 'Native signal helper is missing. Maintainers: run node scripts/build-signal-helper.mjs.' });
  rmSync(join(source, 'process/manifest.json'));
  assert.throws(() => copyNativeBundle(root, output), { message: 'Native process launcher is missing. Maintainers: run node scripts/build-process-launcher.mjs.' });
  assert.throws(() => copyProcessLauncherBundle(root, output), { message: 'Run node scripts/build-process-launcher.mjs before freezing the native launcher' });
  rmSync(join(source, 'manifest.json'));
  assert.throws(() => copyNativeBundle(root, output), { message: 'Native Node file adapter is missing. Maintainers: run node scripts/prepare-native.mjs. Installed users: reinstall the complete Lasm package.' });
});

test('the host: every support file, the builtin modules, and the whole native bundle where no glibc or architecture is known', t => {
  const { root, output, source } = fixture(t);
  for (const name of applicationHostFiles) { mkdirSync(dirname(join(root, 'src', name)), { recursive: true }); writeFileSync(join(root, 'src', name), 'host: ' + name); }
  mkdirSync(join(root, 'src/lasm-modules'), { recursive: true });
  writeFileSync(join(root, 'src/lasm-modules/ui-dom.mjs'), 'builtin');
  writeFileSync(join(root, 'src/lasm-modules/notes.txt'), 'not a module');
  for (const [platform, arch, glibc] of [['linux', 'x64', null], ['linux', 'ia32', '2.39'], ['freebsd', 'x64', null]]) {
    rmSync(output, { recursive: true, force: true });
    copyApplicationHost(output, { platform, arch, glibc, sourceRoot: root });
    // The research layout: the native directory as it is, every platform included.
    assert.deepEqual(files(join(output, 'host/native')), files(source), `${platform}-${arch}`);
    assert.equal(readFileSync(join(output, 'host/lasm-modules/ui-dom.mjs'), 'utf8'), 'builtin');
    assert.equal(existsSync(join(output, 'host/lasm-modules/notes.txt')), false);
    assert.equal(readFileSync(join(output, 'host/zoneinfo/UTC'), 'utf8'), 'host: zoneinfo/UTC');
  }
  rmSync(output, { recursive: true, force: true });
  copyApplicationHost(output, { platform: 'linux', arch: 'arm64', glibc: '2.39', sourceRoot: root });
  assert.deepEqual(JSON.parse(readFileSync(join(output, 'host/native/manifest.json'))).deployment.targets, ['linux-x64', 'linux-arm64']);
  // Without builtin modules there is no lasm-modules directory.
  rmSync(join(root, 'src/lasm-modules'), { recursive: true });
  rmSync(output, { recursive: true, force: true });
  copyApplicationHost(output, { platform: 'darwin', arch: 'arm64', sourceRoot: root });
  assert.equal(existsSync(join(output, 'host/lasm-modules')), false);
});
