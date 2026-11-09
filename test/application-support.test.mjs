import assert from 'node:assert/strict';
import test from 'node:test';
import { applicationSupport, requireApplicationSupport, glibcAtLeast, nodeAtLeast } from '../src/application-support.mjs';

const support = { node: '26.12.0', minimumNode: '24.0.0', testedNode: ['24.22.1', '26.12.0'], platforms: ['linux-x64', 'linux-arm64'] };
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
  assert.throws(() => requireApplicationSupport(support, { platform: 'linux', arch: 'x64', versions: { node: '22.23.4' } }),
    /requires Node 24.0.0 or newer.*tested on 24.22.1 and 26.12.0.*running Node 22.23.4/);
});

test('the compiler accepts every Node release from the minimum, not one exact release', () => {
  for (const node of ['24.0.0', '24.22.1', '26.12.0', '26.13.0', '27.0.0'])
    requireApplicationSupport(support, { platform: 'linux', arch: 'x64', versions: { node } });
  for (const node of ['23.11.1', '22.23.4', '20.0.0'])
    assert.throws(() => requireApplicationSupport(support, { platform: 'linux', arch: 'x64', versions: { node } }), /requires Node 24.0.0 or newer/);
  // Candidates packed before Phase 5.1 keep their exact-release contract.
  assert.throws(() => requireApplicationSupport({ node: '26.12.0', platforms: support.platforms }, { platform: 'linux', arch: 'x64', versions: { node: '26.12.1' } }),
    /requires Node 26.12.0 with npm; you are running Node 26.12.1/);
});

test('Node versions compare numerically', () => {
  for (const [actual, required] of [['24.0.0', '24.0.0'], ['24.10.0', '24.9.0'], ['v26.1.0', '24.0.0'], ['100.0.0', '24.0.0']])
    assert.equal(nodeAtLeast(actual, required), true, actual);
  for (const [actual, required] of [['23.99.99', '24.0.0'], ['24.9.0', '24.10.0'], [undefined, '24.0.0'], ['24', '24.0.0'], ['24.0.0-pre', '24.0.0']])
    assert.equal(nodeAtLeast(actual, required), false, String(actual));
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

test('exact diagnostics: platforms, Node without a tested list, glibc present or absent', () => {
  assert.throws(() => requireApplicationSupport(support, { platform: 'darwin', arch: 'x64', versions: { node: '26.12.0' } }),
    { message: 'This Lasm candidate supports linux-x64, linux-arm64. Your host is darwin-x64. Use a supported native platform.' });
  const { testedNode, ...untested } = support;
  assert.throws(() => requireApplicationSupport(untested, { platform: 'linux', arch: 'x64', versions: { node: '22.0.0' } }),
    { message: 'This Lasm candidate requires Node 24.0.0 or newer with npm; you are running Node 22.0.0. Install a supported Node release and retry.' });
  const linux = version => ({ platform: 'linux', arch: 'x64', versions: { node: '26.12.0' }, report: { getReport: () => ({ header: { glibcVersionRuntime: version } }) } });
  assert.throws(() => requireApplicationSupport({ ...support, minimumGlibc: '2.39' }, linux('2.35')),
    { message: 'This Lasm candidate requires glibc 2.39 or newer (Ubuntu 24.04 is the tested build distribution). Your host reports glibc 2.35. Use a supported Linux system.' });
  assert.throws(() => requireApplicationSupport({ ...support, minimumGlibc: '2.39' }, linux(undefined)),
    { message: 'This Lasm candidate requires glibc 2.39 or newer (Ubuntu 24.04 is the tested build distribution). Your host reports no glibc; musl/Alpine is not supported. Use a supported Linux system.' });
  requireApplicationSupport({ ...support, minimumGlibc: '2.39' }, linux('2.39'));
  // Without a glibc floor the report is not consulted.
  requireApplicationSupport(support, { ...linux(undefined), report: { getReport: () => { throw new Error('not consulted'); } } });
});

test('a research checkout (no support record) accepts any supported host', () => {
  requireApplicationSupport(undefined, { platform: 'linux', arch: 'x64', versions: { node: '1.0.0' } });
  const record = applicationSupport();
  assert.ok(record === undefined || Array.isArray(record.platforms));
});

test('glibc comparisons need well-formed versions on both sides', () => {
  assert.equal(glibcAtLeast('2.39', '2'), false);
  assert.equal(glibcAtLeast('2.39', '2.39.1'), false);
  assert.equal(glibcAtLeast('2.39.1', '2.39'), false);
  assert.equal(glibcAtLeast('x2.39', '2.39'), false);
  assert.equal(glibcAtLeast('2.39x', '2.39'), false);
  assert.equal(glibcAtLeast('3.0', '2.39'), true);
  assert.equal(glibcAtLeast('2.10', '2.9'), true);
  assert.equal(glibcAtLeast('1.40', '2.39'), false);
  assert.equal(nodeAtLeast('24.0.0', 'v24.0.0'), true);
  assert.equal(nodeAtLeast('x24.0.0', '24.0.0'), false);
  assert.equal(nodeAtLeast('24.0.0x', '24.0.0'), false);
  assert.equal(nodeAtLeast('24.0.0', '24.0'), false);
  assert.equal(nodeAtLeast('25.0.0', '24.9.9'), true);
  assert.equal(nodeAtLeast('24.1.0', '24.0.9'), true);
  assert.equal(nodeAtLeast('24.0.1', '24.0.0'), true);
  assert.equal(nodeAtLeast('24.0.0', '24.0.1'), false);
});

test('an exact-release candidate accepts that release; versions compare by whole numbers; a host without a report has no glibc', () => {
  requireApplicationSupport({ node: '26.12.0', platforms: ['linux-x64'] }, { platform: 'linux', arch: 'x64', versions: { node: '26.12.0' } });
  assert.equal(glibcAtLeast('12.39', '2.39'), true);
  assert.equal(glibcAtLeast('2.139', '2.39'), true);
  assert.equal(nodeAtLeast('24.0.10', '24.0.9'), true);
  assert.equal(nodeAtLeast('124.0.0', '24.0.0'), true);
  assert.throws(() => requireApplicationSupport({ ...support, minimumGlibc: '2.28' }, { platform: 'linux', arch: 'x64', versions: { node: '26.12.0' } }),
    /Your host reports no glibc; musl\/Alpine is not supported/);
});
