// Partition unchanged registered tests; preserve prior passes and every gap.
import { readFileSync, writeFileSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { execFileSync } from 'node:child_process';
import { ensureResourceGuard } from '../full-lean/resource-guard.mjs';
import { selectNativeTests } from './native-selection.mjs';
await ensureResourceGuard();
const args = process.argv.slice(2), checkOnly = args[0] === '--check';
if (checkOnly) args.shift();
const [outputArg, selection, indexArg, countArg] = args;
const priorFiles = {
  'remaining-2026-09-23': 'upstream-native-build-time-2026-09-23.json',
  'remaining-r3-2026-09-23': 'upstream-native-build-time-r3-2026-09-23.json',
};
if (args.length !== 4 || (selection !== 'all' && !Object.hasOwn(priorFiles, selection)))
  throw new Error('Supply [--check] OUTPUT SELECTION SHARD_INDEX SHARD_COUNT explicitly');
const index = Number(indexArg), count = Number(countArg), output = resolve(outputArg);
const inventory = JSON.parse(readFileSync('docs/evidence/lean-4.34-upstream-application-inventory.json', 'utf8'));
const sources = JSON.parse(readFileSync('docs/evidence/lean-4.34-upstream-source-files.json', 'utf8'));
const previous = selection === 'all' ? undefined : JSON.parse(readFileSync(join('docs/evidence', priorFiles[selection]), 'utf8'));
const { registered, remaining, selected } = selectNativeTests(inventory, sources, previous, index, count);
const escape = name => name.replace(/[.*+?^${}()|[\]\\]/g, '\\$&');
const filter = '^(?:' + selected.map(test => escape(test.name)).join('|') + ')$';
if (!checkOnly) execFileSync(process.execPath, ['scripts/application-tests/prepare.mjs', output,
  'native-build-time', 'node', process.execPath, process.cwd(), filter], { stdio: 'inherit', timeout: 900_000 });
const manifest = JSON.parse(readFileSync(join(output, 'manifest.json'), 'utf8'));
if (JSON.stringify(manifest.tests.map(test => test.name)) !== JSON.stringify(selected.map(test => test.name)))
  throw new Error('Prepared shard differs from its exact selected registration list');
const partition = { selection, index, count, registered: registered.length, remaining: remaining.length,
  selected: selected.map(test => test.name), coverage: 'Disjoint modulo partition; union of shards covers every remaining registration' };
if (checkOnly) {
  const prepared = JSON.parse(readFileSync(join(output, 'shard.json'), 'utf8'));
  if (JSON.stringify(prepared) !== JSON.stringify(partition)) throw new Error('Execution shard differs from requested selection');
} else writeFileSync(join(output, 'shard.json'), JSON.stringify(partition, null, 2) + '\n');
console.log(JSON.stringify({ selection, index, count, registered: registered.length, remaining: remaining.length, selected: selected.length }));
