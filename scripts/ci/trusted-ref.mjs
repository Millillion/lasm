// The refs whose CI runs may write candidate drafts and caches: main, and pull
// requests from this repository (release PRs, .github/workflows/release-checks.yml).
// Fork pull requests get a read-only token and never reach these jobs.
import { readFileSync } from 'node:fs';

export function trustedRef(env = process.env) {
  if (env.GITHUB_REPOSITORY !== 'Millillion/lasm') return false;
  // cold-start: runtime work validated before it reaches the integration branch.
  if (env.GITHUB_REF === 'refs/heads/main' || env.GITHUB_REF === 'refs/heads/cold-start') return true;
  if (env.GITHUB_EVENT_NAME !== 'pull_request' || !/^refs\/pull\/\d+\/merge$/.test(env.GITHUB_REF ?? '')) return false;
  try {
    const event = JSON.parse(readFileSync(env.GITHUB_EVENT_PATH, 'utf8'));
    return event.pull_request?.head?.repo?.full_name === env.GITHUB_REPOSITORY;
  } catch { return false; }
}
