// Did a release.yml run publish? Used by published-templates.yml after a
// `workflow_run` event: the run published exactly when it succeeded and its
// `release` job succeeded (a run that found the checks still running, or
// nothing to release, skips that job).
//
// The jobs API can lag behind the workflow_run event: right after the event it
// returned no `release` job for a run whose release job had succeeded (0.3.2,
// run 40510033078), so the gate skipped. Read only final data: wait until the
// run and every one of its jobs are completed and the job list contains the
// workflow's planning job, re-reading with a delay, and fail (not skip) when
// the data never becomes final.
//
//   node scripts/release/published-gate.mjs <run id>   (GH_TOKEN, GITHUB_REPOSITORY)
// prints published=true|false (for $GITHUB_OUTPUT) and a one-line reason on stderr.
import { execFileSync } from 'node:child_process';
import { pathToFileURL } from 'node:url';

export async function releasePublished(read, { attempts = 20, delayMs = 15_000, sleep = ms => new Promise(r => setTimeout(r, ms)) } = {}) {
  let last = 'no data';
  for (let attempt = 1; attempt <= attempts; attempt++) {
    const { run, jobs } = await read();
    const final = run?.status === 'completed' && jobs.length > 0
      && jobs.some(job => job.name === 'plan') && jobs.every(job => job.status === 'completed');
    if (final) {
      const release = jobs.find(job => job.name === 'release');
      const published = run.conclusion === 'success' && release?.conclusion === 'success';
      return { published, reason: `release run ${run.id} (${run.conclusion}): release job ${release?.conclusion ?? 'none'}` };
    }
    last = `run ${run?.status ?? 'missing'}, jobs ${jobs.map(job => `${job.name}:${job.status}`).join(', ') || 'none'}`;
    if (attempt < attempts) await sleep(delayMs);
  }
  throw new Error(`Release run data never became final (${last})`);
}

function githubReader(repository, id) {
  const api = path => JSON.parse(execFileSync('gh', ['api', path], { encoding: 'utf8' }));
  return async () => {
    const run = api(`repos/${repository}/actions/runs/${id}`);
    const jobs = api(`repos/${repository}/actions/runs/${id}/attempts/${run.run_attempt}/jobs?per_page=100`).jobs ?? [];
    return { run, jobs };
  };
}

if (import.meta.url === pathToFileURL(process.argv[1]).href) {
  const id = process.argv[2];
  if (!/^\d+$/.test(id ?? '')) throw new Error('Usage: published-gate.mjs <release run id>');
  const result = await releasePublished(githubReader(process.env.GITHUB_REPOSITORY, id));
  console.error(result.reason);
  console.log(`published=${result.published}`);
}
