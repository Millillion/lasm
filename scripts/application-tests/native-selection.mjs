import { sourceIdentity } from './source-identity.mjs';

export function selectNativeTests(inventory, sources, previous, index, count) {
  if (!Number.isInteger(index) || !Number.isInteger(count) || count < 1 || index < 0 || index >= count)
    throw new Error('Invalid native shard index/count');
  const registered = inventory.tests.filter(test => test.category === 'native-build-time');
  let remaining = registered;
  if (previous) {
    if (previous.leanCommit !== inventory.leanCommit || previous.registered !== registered.length
        || previous.originalSources.before.modified.length || previous.originalSources.after.modified.length
        || previous.harness.changed.length) throw new Error('Previous native evidence does not match this unchanged suite');
    const cases = new Map(previous.cases.map(test => [test.name, test]));
    if (cases.size !== registered.length) throw new Error('Prior case inventory mismatch');
    remaining = registered.filter(test => {
      const prior = cases.get(test.name);
      if (!prior) throw new Error('Missing prior case: ' + test.name);
      if (prior.status !== 'passed') return true;
      if (!prior.sourceUnchanged || prior.sourceSha256 !== sourceIdentity(sources, test.source).sha256)
        throw new Error('Prior source changed: ' + test.name);
      return false;
    });
  }
  const selected = remaining.filter((_, position) => position % count === index);
  if (!selected.length) throw new Error('No tests in selected shard');
  return { registered, remaining, selected };
}
