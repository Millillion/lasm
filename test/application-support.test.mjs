import assert from 'node:assert/strict';
import test from 'node:test';
import { requireApplicationSupport, glibcAtLeast } from '../src/application-support.mjs';

const support = { node: '26.12.0', platforms: ['linux-x64', 'linux-arm64'] };
for (const arch of ['x64', 'arm64']) test(`release contract accepts native Linux ${arch}`, () => {
  requireApplicationSupport(support, { platform: 'linux', arch, versions: { node: '26.12.0' } });
});

test('glibc requirements compare version components and diagnose musl or older hosts', () => {
  for (const version of ['2.39', '2.40', '3.0']) assert.equal(glibcAtLeast(version, '2.39'), true);
  for (const version of [undefined, '2.9', '2.38', '1.99', 'musl']) assert.equal(glibcAtLeast(version, '2.39'), false);
  for (const version of [undefined, '2.35']) assert.throws(() => requireApplicationSupport({ ...support, minimumGlibc: '2.39' },
    { platform: 'linux', arch: 'x64', versions: { node: '26.12.0' }, report: { getReport: () => ({ header: { glibcVersionRuntime: version } }) } }),
    /requires glibc 2.39.*Use a supported Linux system/);
});
test('release diagnostics name unsupported hosts and the required Node version', () => {
  assert.throws(() => requireApplicationSupport(support, { platform: 'darwin', arch: 'arm64' }), /Your host is darwin-arm64/);
  assert.throws(() => requireApplicationSupport(support, { platform: 'linux', arch: 'x64', versions: { node: '24.0.0' } }), /requires Node 26.12.0.*running Node 24.0.0/);
});

test('Windows ARM64 is refused before candidate checks, even in a research checkout', () => {
  const message = 'Lasm supports Linux and macOS on x86-64 and ARM64, and Windows on x86-64. Windows ARM64 is not supported.';
  const host = { platform: 'win32', arch: 'arm64', versions: { node: '26.12.0' } };
  assert.throws(() => requireApplicationSupport({ ...support, platforms: [...support.platforms, 'win32-arm64'] }, host), { message });
  assert.throws(() => requireApplicationSupport(undefined, host), { message });
});

for (const arch of ['x64', 'arm64']) test(`macOS ${arch} does not inherit Linux glibc requirements`, () => {
  requireApplicationSupport({ ...support, platforms: [...support.platforms, 'darwin-' + arch], minimumGlibc: '2.39' },
    { platform: 'darwin', arch, versions: { node: support.node } });
});
