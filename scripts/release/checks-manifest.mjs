// release-checks.yml, last job: did every gate pass, and the manifest release.yml
// reads (docs/RELEASING.md). The job passes each needed job's result and the
// detect outputs in the environment (the job name upper-cased: EDGE, UNIT, …).
//   node scripts/release/checks-manifest.mjs   (writes manifest/release-checks.json)
// Exits non-zero when the checks did not pass.
import { appendFileSync, mkdirSync, writeFileSync } from 'node:fs';
import { pathToFileURL } from 'node:url';
import { releaseGateJobs } from './plan.mjs';

/** The jobs that gate a release, besides detect, the candidate and the rehearsal. */
export const gateJobs = Object.freeze(['edge', ...releaseGateJobs]);
/** Every job the release-checks job needs, in order. */
export const checksJobs = Object.freeze(['detect', 'candidate', 'rehearsal', ...gateJobs]);

/** The manifest and verdict for the job results and inputs in `e` (an environment). Pure, for tests. */
export function releaseChecksManifest(e) {
  const release = e.RELEASE === 'true', full = !e.REUSE && e.OVERLAY !== 'true';
  const passed = e.DETECT === 'success' && (!release || (full ? e.CANDIDATE === 'success' : e.CANDIDATE === 'skipped')
    && e.REHEARSAL === 'success' && gateJobs.every(job => e[job.toUpperCase()] === 'success'));
  const manifest = { schema: 1, workflow: 'release-checks', passed, release, full, version: e.VERSION, previous: e.PREVIOUS, distTag: e.DIST_TAG,
    sha: e.GITHUB_SHA, headSha: e.HEAD_SHA, event: e.GITHUB_EVENT_NAME, ref: e.GITHUB_REF, runId: e.GITHUB_RUN_ID, runAttempt: e.GITHUB_RUN_ATTEMPT,
    jobs: Object.fromEntries(checksJobs.map(job => [job, e[job.toUpperCase()]])),
    candidate: release ? { release: e.REUSE || e.TESTED_RELEASE, sha256: e.REUSE_SHA256 || e.TESTED_SHA256 } : null,
    rehearsal: release ? { version: e.VERSION, license: 'MIT', node: '26.13.0', overlaySource: e.OVERLAY === 'true', record: 'npm-dist-linux-x64/linux-x64/npm-dist.json' } : null };
  const summary = '### release-checks: ' + (passed ? 'passed' : 'FAILED') + '\n\n'
    + (release ? 'Release ' + e.VERSION + (full ? '' : ' (partial: reused candidate ' + e.REUSE + '; dry runs only)') : 'Not a release commit') + '\n';
  return { passed, manifest, summary };
}

if (import.meta.url === pathToFileURL(process.argv[1]).href) {
  const { passed, manifest, summary } = releaseChecksManifest(process.env);
  mkdirSync('manifest', { recursive: true });
  writeFileSync('manifest/release-checks.json', JSON.stringify(manifest, null, 2) + '\n');
  console.log(JSON.stringify(manifest, null, 2));
  if (process.env.GITHUB_STEP_SUMMARY) appendFileSync(process.env.GITHUB_STEP_SUMMARY, summary);
  if (!passed) process.exit(1);
}
