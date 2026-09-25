// Partition unchanged registered tests; preserve prior passes and every gap.
import { readFileSync, writeFileSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { execFileSync } from 'node:child_process';
import { ensureResourceGuard } from '../full-lean/resource-guard.mjs';
import { selectNativeTests } from './native-selection.mjs';
import { loadUpstreamEvidence, campaignSourceEvidence } from './upstream-evidence.mjs';
await ensureResourceGuard();
const args = process.argv.slice(2), checkOnly = args[0] === '--check';
if (checkOnly) args.shift();
const [outputArg, selection, indexArg, countArg, version = '4.34.0'] = args;
const priorFiles = {
  'remaining-2026-09-23': 'upstream-native-build-time-2026-09-23.json',
  'remaining-r3-2026-09-23': 'upstream-native-build-time-r3-2026-09-23.json',
};
if (![4, 5].includes(args.length) || (selection !== 'all' && !Object.hasOwn(priorFiles, selection)))
  throw new Error('Supply [--check] OUTPUT SELECTION SHARD_INDEX SHARD_COUNT [LEAN_VERSION] explicitly');
const index = Number(indexArg), count = Number(countArg), output = resolve(outputArg);
const { inventory, sources, sourceManifestSha256 } = loadUpstreamEvidence(version);
const previous = selection === 'all' ? undefined : JSON.parse(readFileSync(join('docs/evidence', priorFiles[selection]), 'utf8'));
const { registered, remaining, selected } = selectNativeTests(inventory, sources, previous, index, count);
const escape = name => name.replace(/[.*+?^${}()|[\]\\]/g, '\\$&');
const filter = '^(?:' + selected.map(test => escape(test.name)).join('|') + ')$';
if (!checkOnly) execFileSync(process.execPath, ['scripts/application-tests/prepare.mjs', output,
  'native-build-time', 'node', process.execPath, process.cwd(), filter, 'upstream', version], { stdio: 'inherit', timeout: 900_000 });
const manifest = JSON.parse(readFileSync(join(output, 'manifest.json'), 'utf8'));
campaignSourceEvidence(manifest);
if (manifest.lean !== version) throw new Error('Prepared shard uses a different Lean release');
if (JSON.stringify(manifest.tests.map(test => test.name)) !== JSON.stringify(selected.map(test => test.name)))
  throw new Error('Prepared shard differs from its exact selected registration list');
const partition = { lean: version, leanCommit: inventory.leanCommit, sourceManifestSha256,
  selection, index, count, registered: registered.length, remaining: remaining.length,
  selected: selected.map(test => test.name), coverage: 'Disjoint modulo partition; union of shards covers every remaining registration' };
if (checkOnly) {
  const prepared = JSON.parse(readFileSync(join(output, 'shard.json'), 'utf8'));
  // Older 4.34.0 shards carry these identities in their verified manifest only.
  if (!Object.hasOwn(prepared, 'lean') && version === '4.34.0')
    for (const key of ['lean', 'leanCommit', 'sourceManifestSha256']) delete partition[key];
  if (JSON.stringify(prepared) !== JSON.stringify(partition)) throw new Error('Execution shard differs from requested selection');
} else writeFileSync(join(output, 'shard.json'), JSON.stringify(partition, null, 2) + '\n');
console.log(JSON.stringify({ selection, index, count, registered: registered.length, remaining: remaining.length, selected: selected.length }));
