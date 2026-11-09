// The Sunday guard (.github/workflows/sunday-guard.yml, docs/CI.md#no-runs-on-sunday):
// a scheduled run that starts on a Sunday in New York skips every job but the
// guard, so it concludes `success` having tested nothing. Readers of past runs
// (the evidence page, the installation-confidence gate, the nightly tier's
// "unchanged since the last passing run" check) leave such runs out.
const weekday = new Intl.DateTimeFormat('en-US', { timeZone: 'America/New_York', weekday: 'short' });

/** Whether `date` (a Date, an ISO string or milliseconds) falls on a Sunday in New York. */
export const sundayInNewYork = date => weekday.format(new Date(date)) === 'Sun';

/** Whether a workflow run (GitHub API shape) was a scheduled run the Sunday guard emptied. */
export const sundayGuarded = run => run?.event === 'schedule' && sundayInNewYork(run.run_started_at ?? run.created_at);
