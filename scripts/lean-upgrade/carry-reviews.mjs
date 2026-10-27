// Carries the upstream-suite reviews of one Lean release to the next (docs/LEAN_UPGRADE.md
// step 8): every reviewed test whose source and sidecars are byte-identical in the
// new release's verified source manifest is carried forward; a changed or removed
// one is reported for a fresh review and left out. Reviews bind tests to SHA-256
// hashes, so nothing unreviewed is ever carried.
//   scripts/application-tests/runtime-adapter-reviewed.json (Server MVP adapter review)
//   scripts/language-coverage/runtime-adapter-l23.json      (L2/L3 adapter review)
//   scripts/application-tests/eval-io-reviewed.json          (eval-io review)
// The L1 adapter review is regenerated instead (make-adapter-review.mjs).
//   node scripts/lean-upgrade/carry-reviews.mjs FROM TO
import assert from 'node:assert/strict';
import { readFileSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';

const [from, to] = process.argv.slice(2);
assert.ok(from && to, 'Usage: node scripts/lean-upgrade/carry-reviews.mjs FROM TO');
const root = fileURLToPath(new URL('../../', import.meta.url));
const sources = JSON.parse(readFileSync(join(root, `docs/evidence/lean-${to}-upstream-source-files.json`), 'utf8'));
const same = (path, sha256) => sources[path]?.sha256 === sha256;
const today = new Date().toISOString().slice(0, 10);
const report = {};
for (const file of ['scripts/application-tests/runtime-adapter-reviewed.json', 'scripts/language-coverage/runtime-adapter-l23.json',
  'scripts/application-tests/eval-io-reviewed.json']) {
  const path = join(root, file), text = readFileSync(path, 'utf8'), review = JSON.parse(text);
  const indent = /^\{\n( +)"/.exec(text)?.[1].length ?? 2;
  const previous = review.releases?.[from];
  assert.ok(previous, `${file} has no ${from} review`);
  const tests = {}, excluded = {}, changed = [];
  for (const [name, entry] of Object.entries(previous.tests)) {
    const ok = same(`tests/${name}`, entry.sha256) && (entry.sidecars ?? []).every(s => same(s.path, s.sha256));
    if (ok) tests[name] = entry; else changed.push(name);
  }
  for (const [name, entry] of Object.entries(previous.excluded ?? {}))
    if (same(`tests/${name}`, entry.sha256)) excluded[name] = entry; else changed.push(name);
  review.releases[to] = { ...(previous.review ? { review: `Carried from the ${from} review (${today}, scripts/lean-upgrade/carry-reviews.mjs): every listed source and sidecar is byte-identical in the pinned ${to} archive; changed or removed tests need a fresh review: ${changed.length ? changed.join(', ') : 'none'}.` } : {}),
    tests, ...(previous.excluded ? { excluded } : {}) };
  writeFileSync(path, JSON.stringify(review, null, indent) + '\n');
  report[file] = { carried: Object.keys(tests).length, excludedCarried: Object.keys(excluded).length, needsReview: changed };
}
console.log(JSON.stringify(report, null, 2));
