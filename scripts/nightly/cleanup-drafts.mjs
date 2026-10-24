// Nightly draft retention (.github/workflows/nightly.yml). Each nightly packs a
// candidate into a draft release node-package-<run id>. This deletes such drafts
// older than 7 days, only when <run id> is a run of nightly.yml itself, and keeps
// the newest one, any whose nightly is still running, and any referenced by the
// nightly baseline (scripts/nightly/baseline.json and the evidence it names) or by
// the "Nightly regressions on main" issue.
//
//   node scripts/nightly/cleanup-drafts.mjs [--dry-run] [--days 7]
import { parseArgs } from 'node:util';
import { readFileSync, existsSync } from 'node:fs';
import { join } from 'node:path';
import { pathToFileURL } from 'node:url';
import { root, repository, gh } from '../release/lib.mjs';
import { issueTitle } from './driver.mjs';

/** Which drafts to delete. Pure, for tests.
 * drafts: [{ tag, createdAt }]; runs: { id: { path, status } }; referenced: text naming kept tags or run ids. */
export function selectDeletions(drafts, runs, referenced, { now = Date.now(), days = 7 } = {}) {
  const nightly = drafts.map(d => ({ ...d, id: /^node-package-(\d+)$/.exec(d.tag)?.[1] }))
    .filter(d => d.id && runs[d.id]?.path === '.github/workflows/nightly.yml')
    .sort((a, b) => Date.parse(b.createdAt) - Date.parse(a.createdAt));
  return nightly.slice(1).filter(d => now - Date.parse(d.createdAt) > days * 86_400_000
    && runs[d.id].status === 'completed' && !referenced.includes(d.tag) && !new RegExp(`\\b${d.id}\\b`).test(referenced));
}

if (import.meta.url === pathToFileURL(process.argv[1]).href) {
  const { values: args } = parseArgs({ options: { 'dry-run': { type: 'boolean', default: false }, days: { type: 'string', default: '7' } } });
  const releases = gh(['api', '--paginate', `repos/${repository}/releases?per_page=100`, '-q', '.[] | {draft, tag_name, created_at} | tojson'])
    .trim().split('\n').filter(Boolean).map(line => JSON.parse(line));
  const drafts = releases.filter(r => r.draft && /^node-package-\d+$/.test(r.tag_name)).map(r => ({ tag: r.tag_name, createdAt: r.created_at }));
  const runs = {};
  for (const d of drafts) {
    const id = d.tag.split('-').at(-1);
    try { const run = JSON.parse(gh(['api', `repos/${repository}/actions/runs/${id}`])); runs[id] = { path: run.path, status: run.status }; } catch {}
  }
  // Everything the baseline and the regression issue name.
  const baseline = JSON.parse(readFileSync(join(root, 'scripts/nightly/baseline.json'), 'utf8'));
  let referenced = JSON.stringify(baseline);
  for (const file of Object.values(baseline)) if (typeof file === 'string' && file.endsWith('.json') && existsSync(join(root, file))) referenced += readFileSync(join(root, file), 'utf8');
  const issues = JSON.parse(gh(['issue', 'list', '--repo', repository, '--state', 'all', '--search', `in:title "${issueTitle}"`, '--json', 'number,title']))
    .filter(i => i.title === issueTitle);
  for (const issue of issues) referenced += gh(['issue', 'view', String(issue.number), '--repo', repository, '--comments']);
  const doomed = selectDeletions(drafts, runs, referenced, { days: Number(args.days) });
  const nightlyDrafts = drafts.filter(d => runs[d.tag.split('-').at(-1)]?.path === '.github/workflows/nightly.yml');
  console.log(`${nightlyDrafts.length} nightly drafts; deleting ${doomed.length}${args['dry-run'] ? ' (dry run)' : ''}`);
  for (const d of doomed) {
    console.log(`${args['dry-run'] ? 'would delete' : 'delete'} ${d.tag} (${d.createdAt})`);
    if (!args['dry-run']) gh(['release', 'delete', d.tag, '--repo', repository, '--yes']);
  }
}
