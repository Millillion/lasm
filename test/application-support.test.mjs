import assert from 'node:assert/strict';
import test from 'node:test';
import { requireApplicationSupport } from '../src/application-support.mjs';

const support = { node: '26.10.0', platforms: ['linux-x64', 'linux-arm64'] };
for (const arch of ['x64', 'arm64']) test(`release contract accepts native Linux ${arch}`, () => {
  requireApplicationSupport(support, { platform: 'linux', arch, versions: { node: '26.10.0' } });
});
test('release diagnostics name unsupported hosts and the required Node version', () => {
  assert.throws(() => requireApplicationSupport(support, { platform: 'darwin', arch: 'arm64' }), /Your host is darwin-arm64/);
  assert.throws(() => requireApplicationSupport(support, { platform: 'linux', arch: 'x64', versions: { node: '24.0.0' } }), /requires Node 26.10.0.*running Node 24.0.0/);
});
