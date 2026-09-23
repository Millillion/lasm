import assert from 'node:assert/strict';
import { mkdir, writeFile, readdir } from 'node:fs/promises';
import { resolve } from 'node:path';
import { provisionPython } from '../src/managed-python.mjs';

const base = resolve(process.argv[2] ?? '.work/managed-python-acceptance');
await mkdir(base, { recursive: true });
const first = await provisionPython({ cache: base });
const second = await provisionPython({ cache: base });
assert.equal(second.cacheHit, true);
assert.equal(second.identity, first.identity);
const files = await readdir(first.directory);
assert.ok(files.some(name => /license/i.test(name)), 'Redistribution notices are retained');
const report = { scope: 'Managed native build Python only', recordedAt: new Date().toISOString(),
  node: process.version, platform: first.platform, machine: first.machine, version: first.version,
  identity: first.identity, archive: first.receipt.artifact, verifiedReuse: true,
  entries: Object.keys(first.receipt.files).length };
await writeFile(resolve(base, 'result.json'), JSON.stringify(report, null, 2) + '\n');
console.log(JSON.stringify(report, null, 2));
