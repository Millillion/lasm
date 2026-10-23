// Appends a short JSON summary of run-examples.mjs results to the job summary.
//   node summary.mjs RESULT.json
import { appendFileSync, existsSync, readFileSync } from 'node:fs';
const [file] = process.argv.slice(2);
if (!existsSync(file)) { console.log(`No result file ${file}`); process.exit(0); }
const r = JSON.parse(readFileSync(file, 'utf8'));
console.log(JSON.stringify(r, null, 2));
const short = { platform: r.platform, postgres: r.postgres, passed: r.passed,
  apps: (r.apps ?? []).map(a => ({ app: a.app, ok: a.ok, rps: a.load?.rps })), fetch: r.fetch?.code, error: r.error?.split('\n')[0] };
if (process.env.GITHUB_STEP_SUMMARY) appendFileSync(process.env.GITHUB_STEP_SUMMARY, '```json\n' + JSON.stringify(short, null, 2) + '\n```\n');
