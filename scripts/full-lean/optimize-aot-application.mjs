// Preserve an earlier application and its Wasm while checking the same loader
// optimizations used by future AOT builds. No Lean or host behavior is replaced.
import { cpSync, existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { resolve, join } from 'node:path';
import assert from 'node:assert/strict';
import { ensureResourceGuard } from './resource-guard.mjs';
import { indexFunctionTable } from './function-table-index.mjs';
import { optimizeMainTableGrowth } from './table-growth.mjs';
import { hashFile } from '../../src/managed-artifacts.mjs';

await ensureResourceGuard();
const [manifestArg, outputArg] = process.argv.slice(2);
if (!manifestArg || !outputArg) throw new Error('Supply BUILD_MANIFEST NEW_OUTPUT');
const manifest = resolve(manifestArg), output = resolve(outputArg);
if (existsSync(output)) throw new Error('Use a new output directory');
const input = JSON.parse(readFileSync(manifest));
assert.equal(await hashFile(join(input.deployed, 'program.wasm')), input.wasmSha256);
const before = await hashFile(join(input.deployed, 'program.cjs'));
mkdirSync(output, { recursive: true });
const deployed = join(output, 'deployed');
cpSync(input.deployed, deployed, { recursive: true });
const glue = join(deployed, 'program.cjs');
const index = await indexFunctionTable(join(deployed, 'program.wasm'), glue);
writeFileSync(glue, optimizeMainTableGrowth(readFileSync(glue, 'utf8')));
writeFileSync(join(output, 'function-table-index.json'), JSON.stringify(index, null, 2) + '\n');
assert.equal(index.wasmSha256, input.wasmSha256);
assert.equal(await hashFile(join(input.deployed, 'program.cjs')), before);
const result = { ...input, deployed, derivedFrom: manifest,
  derivation: { scope: 'Only loader function-table indexing and bulk reservation; Wasm and host support unchanged',
    oldGlueSha256: before, glueSha256: await hashFile(glue),
    initialTableEntries: index.initialTableEntries, exportSeeds: index.exportSeeds.length,
    resourceReport: process.env.LASM_RESOURCE_REPORT } };
writeFileSync(join(output, 'build-result.json'), JSON.stringify(result, null, 2) + '\n');
console.log(JSON.stringify(result.derivation, null, 2));
