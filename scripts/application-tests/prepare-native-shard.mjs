// Partition unchanged registered tests; preserve prior passes and every gap.
import { readFileSync, writeFileSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { execFileSync } from 'node:child_process';
import { ensureResourceGuard } from '../full-lean/resource-guard.mjs';
await ensureResourceGuard();
const [outputArg, selection = 'all', indexArg = '0', countArg = '1'] = process.argv.slice(2);
const index = Number(indexArg), count = Number(countArg), output = resolve(outputArg);
if (!outputArg || !['all', 'remaining-2026-09-23'].includes(selection)
    || !Number.isInteger(index) || !Number.isInteger(count) || count < 1 || index < 0 || index >= count)
  throw new Error('Supply NEW_OUTPUT all|remaining-2026-09-23 SHARD_INDEX SHARD_COUNT');
const inventory = JSON.parse(readFileSync('docs/evidence/lean-4.34-upstream-application-inventory.json', 'utf8'));
const registered = inventory.tests.filter(test => test.category === 'native-build-time');
let remaining = registered;
if (selection !== 'all') {
  const previous = JSON.parse(readFileSync('docs/evidence/upstream-native-build-time-2026-09-23.json', 'utf8'));
  if (previous.leanCommit !== inventory.leanCommit || previous.registered !== registered.length
      || previous.originalSources.before.modified.length || previous.originalSources.after.modified.length
      || previous.harness.changed.length) throw new Error('Previous native evidence does not match this unchanged suite');
  const cases = new Map(previous.cases.map(test => [test.name, test]));
  if (cases.size !== registered.length) throw new Error('Prior case inventory mismatch');
  remaining = registered.filter(test => {
    const prior = cases.get(test.name);
    if (!prior) throw new Error('Missing prior case: ' + test.name);
    if (prior.status !== 'passed') return true;
    if (!prior.sourceUnchanged || prior.sourceSha256 !== test.sha256) throw new Error('Prior source changed: ' + test.name);
    return false;
  });
}
const selected = remaining.filter((_, position) => position % count === index);
if (!selected.length) throw new Error('No tests in selected shard');
const escape = name => name.replace(/[.*+?^${}()|[\]\\]/g, '\\$&');
const filter = '^(?:' + selected.map(test => escape(test.name)).join('|') + ')$';
execFileSync(process.execPath, ['scripts/application-tests/prepare.mjs', output,
  'native-build-time', 'node', process.execPath, process.cwd(), filter], { stdio: 'inherit', timeout: 900_000 });
const manifest = JSON.parse(readFileSync(join(output, 'manifest.json'), 'utf8'));
if (JSON.stringify(manifest.tests.map(test => test.name)) !== JSON.stringify(selected.map(test => test.name)))
  throw new Error('Prepared shard differs from its exact selected registration list');
const partition = { selection, index, count, registered: registered.length, remaining: remaining.length,
  selected: selected.map(test => test.name), coverage: 'Disjoint modulo partition; union of shards covers every remaining registration' };
writeFileSync(join(output, 'shard.json'), JSON.stringify(partition, null, 2) + '\n');
console.log(JSON.stringify({ selection, index, count, registered: registered.length, remaining: remaining.length, selected: selected.length }));
