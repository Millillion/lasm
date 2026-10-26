// release-checks, first job: is this commit a release? (docs/RELEASING.md)
// A release changes the root package.json `version` against the previous commit
// (push: the pushed-over commit; pull request: the base) to a version that is not
// on npm and has no tag. A release must add docs/release/<version>-notes.md.
//
//   node scripts/release/detect.mjs BASE_REVISION
// Writes the GitHub outputs release, version, previous, dist-tag, reason. Exits
// non-zero when the version changed but cannot be released (fails the checks).
import { existsSync, readFileSync } from 'node:fs';
import { join } from 'node:path';
import { pathToFileURL } from 'node:url';
import { root, run, isVersion, distTag, notesFile, tagName, published, publicRegistry, output, summary } from './lib.mjs';

/** The decision from the facts; pure, for tests. */
export function decide({ previous, version, notes, cli, create, vite, tag }) {
  if (previous === version) return { release: false, reason: `version ${version} unchanged` };
  const problems = [];
  if (!isVersion(version)) problems.push(`package.json version ${JSON.stringify(version)} is not a semantic version`);
  else {
    if (!notes) problems.push(`${notesFile(version)} is missing; a release PR adds its notes`);
    if (cli) problems.push(`@lasm/cli@${version} is already on npm; versions are never reused`);
    if (create) problems.push(`@lasm/create@${version} is already on npm; versions are never reused`);
    if (vite) problems.push(`@lasm/vite@${version} is already on npm; versions are never reused`);
    if (tag) problems.push(`tag ${tagName(version)} already exists`);
  }
  if (problems.length) return { release: false, error: true, reason: problems.join('; ') };
  return { release: true, reason: `version ${previous ?? '(none)'} -> ${version}`, distTag: distTag(version) };
}

const versionAt = revision => {
  try { return JSON.parse(run('git', ['show', `${revision}:package.json`], { cwd: root })).version; } catch { return undefined; }
};

if (import.meta.url === pathToFileURL(process.argv[1]).href) {
  const [base] = process.argv.slice(2);
  const version = JSON.parse(readFileSync(join(root, 'package.json'), 'utf8')).version;
  const previous = base && !/^0+$/.test(base) ? versionAt(base) : versionAt('HEAD^');
  const facts = { previous, version };
  if (previous !== version && isVersion(version)) {
    facts.notes = existsSync(join(root, notesFile(version)));
    facts.cli = (await published(publicRegistry, '@lasm/cli', version)).exists;
    facts.create = (await published(publicRegistry, '@lasm/create', version)).exists;
    facts.vite = (await published(publicRegistry, '@lasm/vite', version)).exists;
    facts.tag = run('git', ['ls-remote', '--tags', 'origin', `refs/tags/${tagName(version)}`], { cwd: root }).trim() !== '';
  }
  const decision = decide(facts);
  output({ release: decision.release, version, previous: previous ?? '', 'dist-tag': decision.distTag ?? '', reason: decision.reason });
  summary(`### Release detection\n\n${decision.release ? '**Release**' : decision.error ? '**Refused**' : 'No release'}: ${decision.reason}` +
    (decision.release ? `\n\nThe candidate checks and the npm rehearsal run for ${version} (dist-tag \`${decision.distTag}\`).` : ''));
  if (decision.error) process.exit(1);
}
