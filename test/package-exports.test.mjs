// The package's public entry points (docs/api/decisions/0.7.md, 0.7-18 and 0.7-19).
import assert from 'node:assert/strict';
import test from 'node:test';
import { readFileSync } from 'node:fs';

const pkg = JSON.parse(readFileSync(new URL('../package.json', import.meta.url), 'utf8'));

test('@lasm/cli exports exactly vite, vite/client, lean and package.json, and no wildcard', () => {
  assert.deepEqual(Object.keys(pkg.exports), ['./vite', './vite/client', './lean', './package.json']);
  assert.ok(!Object.keys(pkg.exports).some(key => key.includes('*')));
  assert.deepEqual(pkg.exports['./lean'], { types: './src/lean.d.ts', default: './src/lean.mjs' });
});

test('@lasm/cli/lean exports lasmLean only', async () => {
  const lean = await import('../src/lean.mjs');
  assert.deepEqual(Object.keys(lean), ['lasmLean']);
  assert.equal(typeof lean.lasmLean, 'function');
});
