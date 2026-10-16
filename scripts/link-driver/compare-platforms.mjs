#!/usr/bin/env node
// Cross-platform byte equality of collect-outputs.mjs directories.
//
//   node scripts/link-driver/compare-platforms.mjs DIR [--reference linux-x64] [--json FILE]
//
// DIR holds <platform>/<driver>/<fixture>/... (driver: node, or emcc when the
// same fixtures were also linked by emcc on that runner). Every platform's node
// outputs are compared with the reference platform's; where emcc outputs exist,
// node and emcc are also compared on the same platform. Objects, program.wasm
// and program.cjs must be identical; link maps (paths normalized on each runner)
// are reported, not required, because their path spelling is host-specific.
import { existsSync, readdirSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { parseArgs } from 'node:util';
import { compareSides } from './compare.mjs';

const { values: options, positionals } = parseArgs({ allowPositionals: true, options: {
  reference: { type: 'string', default: 'linux-x64' }, json: { type: 'string' } } });
const directory = resolve(positionals[0] ?? '');
const list = path => existsSync(path) ? readdirSync(path, { withFileTypes: true }).filter(entry => entry.isDirectory()).map(entry => entry.name).sort() : [];
function side(path) {
  const names = [];
  (function walk(base, prefix) {
    for (const entry of readdirSync(base, { withFileTypes: true })) {
      if (entry.isDirectory()) walk(join(base, entry.name), prefix + entry.name + '/');
      else names.push(prefix + entry.name);
    }
  })(path, '');
  return { label: path, base: path, roots: [], names };
}
const comparisons = [];
function compare(label, a, b) {
  for (const fixture of [...new Set([...list(a), ...list(b)])]) {
    if (!existsSync(join(a, fixture)) || !existsSync(join(b, fixture))) { comparisons.push({ label, fixture, missing: true, required: false }); continue; }
    const result = compareSides(side(join(a, fixture)), side(join(b, fixture)));
    const required = result.files.filter(file => !file.name.endsWith('.map'));
    comparisons.push({ label, fixture, identical: result.identical, requiredIdentical: required.every(file => file.status === 'identical'),
      files: result.files.map(({ name, status, offset, a: locationA, b: locationB }) => ({ name, status, offset, a: locationA, b: locationB })) });
  }
}
const platforms = list(directory);
if (!platforms.includes(options.reference)) throw new Error(`No ${options.reference} outputs in ${directory}`);
for (const platform of platforms) {
  if (platform !== options.reference)
    compare(`${platform} node vs ${options.reference} node`, join(directory, options.reference, 'node'), join(directory, platform, 'node'));
  if (existsSync(join(directory, platform, 'emcc'))) compare(`${platform} node vs ${platform} emcc`, join(directory, platform, 'emcc'), join(directory, platform, 'node'));
}
for (const item of comparisons) {
  const state = item.missing ? 'MISSING' : item.identical ? 'IDENTICAL' : item.requiredIdentical ? 'IDENTICAL (maps differ)' : 'DIFFERENT';
  console.log(`${item.label} ${item.fixture}: ${state}`);
  for (const file of item.files ?? []) if (file.status !== 'identical')
    console.log(`  x ${file.name} ${file.status}${file.offset !== undefined ? ` at byte ${file.offset}: A ${JSON.stringify(file.a)} B ${JSON.stringify(file.b)}` : ''}`);
}
const ok = comparisons.length > 0 && comparisons.every(item => !item.missing && item.requiredIdentical);
if (options.json) writeFileSync(options.json, JSON.stringify({ reference: options.reference, platforms, ok, comparisons }, null, 2) + '\n');
process.exit(ok ? 0 : 1);
