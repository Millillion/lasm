// release.yml, first job: may this commit be released now? (docs/RELEASING.md)
// Reads, never writes. It finds the release-checks run for this exact commit
// through the GitHub API (the workflow run, its `release-checks` check run and
// the `release-checks` artifact), downloads its rehearsal record, and compares
// npm, the tag and the GitHub release with what this release would produce.
//
//   node scripts/release/plan.mjs --sha SHA --event EVENT [--before SHA] [--checks-run ID] [--dry-run] --work DIR
// Writes the GitHub outputs proceed, version, dist-tag, checks-run, candidate-release,
// candidate-sha256, prerelease. Exits non-zero to refuse (a failed or partial check,
// a version reused with other bytes, a tag on another commit).
import assert from 'node:assert/strict';
import { parseArgs } from 'node:util';
import { existsSync, mkdirSync, readFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { pathToFileURL } from 'node:url';
import { root, repository, checksWorkflow, checksName, isVersion, isPrerelease, distTag, tagName, notesFile, publicRegistry,
  published, publicationOrder, run, gh, output, summary } from './lib.mjs';

/** Which release-checks run counts for `sha`: the newest completed one; real releases
 * accept only push runs on main. Pure, for tests. */
export function selectChecksRun(runs, { sha, dryRun }) {
  const eligible = runs.filter(r => r.head_sha === sha && (dryRun || r.event === 'push' && r.head_branch === 'main'))
    .sort((a, b) => b.run_number - a.run_number || b.run_attempt - a.run_attempt);
  const completed = eligible.find(r => r.status === 'completed');
  return { run: completed, pending: !completed && eligible.some(r => r.status !== 'completed') };
}

/** The checks manifest must vouch for this commit and version. Pure, for tests. */
export function manifestProblems(manifest, { sha, version, dryRun }) {
  const problems = [];
  if (manifest.workflow !== 'release-checks' || manifest.schema !== 1) problems.push('not a release-checks manifest');
  if (!manifest.release) problems.push('release-checks did not detect a release');
  if (!manifest.passed) problems.push('release-checks did not pass');
  if (manifest.sha !== sha) problems.push(`release-checks tested ${manifest.sha}, not ${sha}`);
  if (manifest.version !== version) problems.push(`release-checks tested version ${manifest.version}, not ${version}`);
  if (!dryRun && !manifest.full) problems.push('release-checks reused a candidate (partial run; dry runs only)');
  if (!dryRun && manifest.rehearsal?.overlaySource) problems.push('the rehearsal overlaid sources on the candidate (dry runs only)');
  if (!dryRun && manifest.event !== 'push') problems.push(`release-checks ran for a ${manifest.event} event; a release needs the push to main`);
  return problems;
}

/** Given npm and GitHub state: proceed, or why not. Pure, for tests. */
export function releaseState({ packages, tag, release, sha, dryRun }) {
  const problems = [], done = [], todo = [];
  for (const pkg of packages) {
    if (!pkg.remote.exists) { todo.push(pkg); continue; }
    if (pkg.remote.integrity !== pkg.integrity) problems.push(`${pkg.name}@${pkg.version} is on npm with different bytes (${pkg.remote.integrity}, built ${pkg.integrity}); never republish: bump the version`);
    else done.push(pkg);
  }
  if (tag && tag !== sha) problems.push(`tag already points at ${tag}, not ${sha}`);
  const complete = !problems.length && !todo.length && tag === sha && release;
  return { problems, done, todo, complete, proceed: !problems.length && (dryRun || !complete) };
}

/** The commit a tag on origin points at (peeled), or undefined. */
export function remoteTagCommit(tag) {
  const lines = run('git', ['ls-remote', '--tags', 'origin', `refs/tags/${tag}`], { cwd: root }).trim().split('\n').filter(Boolean)
    .map(line => line.split(/\s+/));
  return (lines.find(([, ref]) => ref === `refs/tags/${tag}^{}`) ?? lines.find(([, ref]) => ref === `refs/tags/${tag}`))?.[0];
}

const isMain = import.meta.url === pathToFileURL(process.argv[1]).href;
if (isMain) {
  const { values: args } = parseArgs({ options: { sha: { type: 'string' }, event: { type: 'string' }, before: { type: 'string' },
    'checks-run': { type: 'string' }, 'dry-run': { type: 'boolean', default: false }, work: { type: 'string' } } });
  assert.match(args.sha ?? '', /^[a-f0-9]{40}$/); assert.ok(args.event && args.work);
  const dryRun = args['dry-run'], sha = args.sha, work = resolve(args.work);
  mkdirSync(work, { recursive: true });
  const stop = (reason, { fail = false } = {}) => {
    output({ proceed: false, reason });
    summary(`### Release plan\n\n${fail ? '**Refused**' : 'Nothing to release'}: ${reason}`);
    process.exit(fail ? 1 : 0);
  };
  const version = JSON.parse(readFileSync(join(root, 'package.json'), 'utf8')).version;
  assert.equal(run('git', ['rev-parse', 'HEAD'], { cwd: root }).trim(), sha, 'Check out the commit being released');
  if (args.event === 'push' && args.before && !/^0+$/.test(args.before)) {
    run('git', ['fetch', '--no-tags', '--depth=1', 'origin', args.before], { cwd: root });
    const previous = JSON.parse(run('git', ['show', `${args.before}:package.json`], { cwd: root })).version;
    if (previous === version) stop(`package.json version ${version} unchanged by this push`);
  }
  if (!isVersion(version)) stop(`package.json version ${version} is not a release version`, { fail: true });

  // 1. The release-checks workflow run for this exact commit.
  const runs = JSON.parse(gh(['api', '--paginate', '--slurp', `repos/${repository}/actions/workflows/${checksWorkflow}/runs?head_sha=${sha}&per_page=100`]))
    .flatMap(page => page.workflow_runs);
  let checks;
  if (args['checks-run']) {
    checks = runs.find(r => String(r.id) === args['checks-run']);
    if (!checks) stop(`release-checks run ${args['checks-run']} is not a run for ${sha}`, { fail: true });
  } else {
    const selected = selectChecksRun(runs, { sha, dryRun });
    if (!selected.run) {
      if (selected.pending) stop(`release-checks for ${sha} is still running; this workflow runs again when it completes (workflow_run)`);
      stop(`no completed release-checks run for ${sha}${dryRun ? '' : ' from a push to main'}`, { fail: args.event !== 'push' });
    }
    checks = selected.run;
  }
  // 2. Its manifest (uploaded only when it detected a release).
  const artifacts = JSON.parse(gh(['api', `repos/${repository}/actions/runs/${checks.id}/artifacts?per_page=100`])).artifacts;
  if (!artifacts.some(a => a.name === 'release-checks' && !a.expired)) {
    // No manifest: release-checks found no release (or failed before deciding, which it reports itself).
    stop(`release-checks run ${checks.id} (${checks.conclusion}) recorded no release for ${sha}`, { fail: dryRun });
  }
  const download = name => {
    const directory = join(work, name);
    if (!existsSync(directory)) gh(['run', 'download', String(checks.id), '--repo', repository, '--name', name, '--dir', directory]);
    return directory;
  };
  const manifest = JSON.parse(readFileSync(join(download('release-checks'), 'release-checks.json'), 'utf8'));
  // 3. The `release-checks` check run of that workflow run succeeded on this commit.
  const checkRuns = JSON.parse(gh(['api', `repos/${repository}/commits/${sha}/check-runs?check_name=${checksName}&per_page=100`])).check_runs;
  const checkRun = checkRuns.find(c => c.check_suite?.id === checks.check_suite_id && c.app?.slug === 'github-actions');
  const problems = manifestProblems(manifest, { sha, version, dryRun });
  if (checks.conclusion !== 'success') problems.push(`release-checks run ${checks.id} concluded ${checks.conclusion}`);
  if (checkRun?.conclusion !== 'success') problems.push(`check run ${checksName} on ${sha} is ${checkRun ? checkRun.conclusion ?? checkRun.status : 'missing'}`);
  if (!existsSync(join(root, notesFile(version)))) problems.push(`${notesFile(version)} is missing`);
  if (problems.length) stop(`release-checks run ${checks.id}: ${problems.join('; ')}`, { fail: true });

  // 4. What is already public: npm, the tag, the GitHub release.
  const record = JSON.parse(readFileSync(join(download('npm-dist-linux-x64'), 'linux-x64', 'npm-dist.json'), 'utf8'));
  assert.equal(record.main.version, version); assert.equal(record.create?.version, version);
  const packages = [];
  for (const pkg of publicationOrder(record)) packages.push({ ...pkg, remote: await published(publicRegistry, pkg.name, pkg.version) });
  const tag = remoteTagCommit(tagName(version));
  let release = false;
  try { gh(['release', 'view', tagName(version), '--repo', repository, '--json', 'tagName']); release = true; } catch {}
  const state = releaseState({ packages, tag, release, sha, dryRun });
  const table = packages.map(p => `| ${p.name} | ${p.version} | ${p.remote.exists ? (p.remote.integrity === p.integrity ? 'published (same bytes)' : '**published, different bytes**') : 'to publish'} |`).join('\n');
  summary(`### Release plan for ${version} at ${sha}${dryRun ? ' (dry run)' : ''}\n\nrelease-checks: [run ${checks.id}](${checks.html_url}) (${manifest.full ? 'full' : 'partial'}), candidate ${manifest.candidate.release}\n\n` +
    `dist-tag \`${distTag(version)}\`; tag ${tagName(version)}: ${tag ?? 'absent'}; GitHub release: ${release ? 'present' : 'absent'}\n\n| Package | Version | npm |\n| --- | --- | --- |\n${table}\n`);
  if (state.problems.length) stop(state.problems.join('; '), { fail: true });
  if (!state.proceed) stop(`${version} is already released: every package, tag ${tagName(version)} and the GitHub release exist`);
  output({ proceed: true, version, 'dist-tag': distTag(version), prerelease: isPrerelease(version), 'checks-run': checks.id,
    'candidate-release': manifest.candidate.release, 'candidate-sha256': manifest.candidate.sha256, overlay: Boolean(manifest.rehearsal?.overlaySource), 'to-publish': state.todo.length });
}
