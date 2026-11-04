// The Node host reports the real operating system. Ordinary Lean's platform,
// path and date code on that host runs in integration/host-fixtures.mjs
// (node-platform); the earlier runtime's emulation of other platforms is gone.
import test from 'node:test';
import assert from 'node:assert/strict';
import { createNodeRuntimeHost } from '../src/node-host.mjs';

test('Node supplies its actual operating system to Lean', () => {
  const host = createNodeRuntimeHost();
  try { assert.equal(host.platform, process.platform === 'win32' ? 1 : process.platform === 'darwin' ? 2 : 0); }
  finally { host.close(); }
});
