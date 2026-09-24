// Cold provisioning gets its own guarded phase so inactive file-cache charges
// from extraction do not accumulate with a separate complete deployment copy.
import assert from 'node:assert/strict';
import { mkdir, writeFile } from 'node:fs/promises';
import { existsSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { provisionLean } from '../src/managed-lean.mjs';
import { ensureResourceGuard } from '../scripts/full-lean/resource-guard.mjs';

await ensureResourceGuard();
assert.equal(process.argv.length, 3, 'Supply a new provisioning evidence directory');
const output = resolve(process.argv[2]); assert.ok(!existsSync(output));
await mkdir(output, { recursive: true });
await writeFile(join(output, 'lean-toolchain'), 'leanprover/lean4:v4.34.0\n');
const lean = await provisionLean(output);
await writeFile(join(output, 'result.json'), JSON.stringify({
  scope: 'Managed native toolchain preparation only', lean: lean.version, commit: lean.commit,
  identity: lean.identity, platform: process.platform + '-' + process.arch,
  resourceReport: process.env.LASM_RESOURCE_REPORT, passed: true,
}, null, 2) + '\n');
