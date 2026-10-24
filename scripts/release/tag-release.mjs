// release.yml, last step: the annotated tag v<version> at the released commit and
// the GitHub release with docs/release/<version>-notes.md as its body. Idempotent:
// an existing tag must point at the same commit; an existing release is kept.
//
//   node scripts/release/tag-release.mjs --version V --sha SHA [--dry-run]
import assert from 'node:assert/strict';
import { parseArgs } from 'node:util';
import { existsSync } from 'node:fs';
import { join } from 'node:path';
import { root, repository, tagName, notesFile, isPrerelease, run, gh, summary } from './lib.mjs';
import { remoteTagCommit } from './plan.mjs';

const { values: args } = parseArgs({ options: { version: { type: 'string' }, sha: { type: 'string' }, 'dry-run': { type: 'boolean', default: false } } });
assert.match(args.sha ?? '', /^[a-f0-9]{40}$/);
const version = args.version, tag = tagName(version), notes = notesFile(version), dryRun = args['dry-run'];
assert.ok(existsSync(join(root, notes)), `${notes} is missing`);
const prerelease = isPrerelease(version);
const steps = [];

const existing = remoteTagCommit(tag);
if (existing) {
  assert.equal(existing, args.sha, `${tag} already points at ${existing}, not ${args.sha}; refusing to move a release tag`);
  steps.push(`${tag} already points at ${args.sha}`); console.log(steps.at(-1));
} else {
  const create = ['-c', 'user.name=github-actions[bot]', '-c', 'user.email=41898282+github-actions[bot]@users.noreply.github.com',
    'tag', '-a', tag, args.sha, '-m', `Lasm ${version}`];
  steps.push(`${dryRun ? 'would run' : 'ran'}: git ${create.join(' ')} && git push origin refs/tags/${tag}`); console.log(steps.at(-1));
  if (!dryRun) {
    run('git', create, { cwd: root, stdio: 'inherit' });
    run('git', ['push', 'origin', `refs/tags/${tag}`], { cwd: root, stdio: 'inherit' });
  }
}
let release = false;
try { gh(['release', 'view', tag, '--repo', repository, '--json', 'tagName']); release = true; } catch {}
if (release) { steps.push(`GitHub release ${tag} already exists`); console.log(steps.at(-1)); }
else {
  const create = ['release', 'create', tag, '--repo', repository, '--verify-tag', '--title', `Lasm ${version}`, '--notes-file', notes,
    ...(prerelease ? ['--prerelease', '--latest=false'] : ['--latest'])];
  steps.push(`${dryRun ? 'would run' : 'ran'}: gh ${create.map(a => /\s/.test(a) ? JSON.stringify(a) : a).join(' ')}`); console.log(steps.at(-1));
  if (!dryRun) gh(create, { cwd: root, stdio: 'inherit' });
}
summary(`### Tag and GitHub release${dryRun ? ' (dry run: nothing created)' : ''}\n\n${steps.map(s => `- ${s}`).join('\n')}`);
