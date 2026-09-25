// Retain the actual deployment; reclaim only its verified redundant build copy.
import assert from 'node:assert/strict';
import { existsSync, writeFileSync } from 'node:fs';
import { ensureResourceGuard } from '../full-lean/resource-guard.mjs';
import { reclaimApplicationBuildMetadata } from './reclaim-metadata.mjs';

await ensureResourceGuard();
const [source, deployment, receipt, ...extra] = process.argv.slice(2);
assert.ok(source && deployment && receipt && !extra.length,
  'Supply SOURCE_FILE COMPLETED_DEPLOYMENT NEW_RECEIPT');
assert.equal(existsSync(receipt), false, 'Preserve preceding reclamation evidence');
const result = await reclaimApplicationBuildMetadata(source, deployment);
writeFileSync(receipt, JSON.stringify({ reclaimed: result !== null, ...result }, null, 2) + '\n', { flag: 'wx' });
