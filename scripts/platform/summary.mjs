// Writes the platform-support results (run-matrix.mjs output files) to the job
// log and a compact table to the job summary.
//   node summary.mjs RESULT.json...
import { appendFileSync, existsSync, readdirSync, readFileSync, statSync } from 'node:fs';
import { basename, join } from 'node:path';

const rows = [];
// Arguments are result files or directories of them (Windows shells do not glob).
const files = process.argv.slice(2).filter(existsSync).flatMap(path => statSync(path).isDirectory()
  ? readdirSync(path).filter(name => name.endsWith('.json')).sort().map(name => join(path, name)) : [path]);
for (const file of files) {
  const r = JSON.parse(readFileSync(file, 'utf8'));
  console.log(basename(file) + '\n' + JSON.stringify(r, null, 2));
  const name = basename(file, '.json');
  if (r.runs) for (const run of r.runs) rows.push([name, run.name ?? run.app, run.ok,
    run.report ? `Node ${run.report.node}, glibc ${run.report.glibc}, ${run.report.checks.map(c => c.name + (c.ok ? '' : ' FAILED')).join(', ')}`
      : run.checks ? run.checks.map(c => c.name + (c.ok ? '' : ' FAILED')).join(', ') + (run.firstInvocationMs ? `; first invocation ${run.firstInvocationMs} ms` : '')
        : run.statuses ? JSON.stringify(run.statuses) : run.error ?? '']);
  else rows.push([name, r.build, r.ok, r.error ?? `Node ${r.node}, glibc ${r.glibc}, built on ${r.builtOn} with Node ${r.builtWithNode}: `
    + (r.checks ?? []).map(c => c.name + (c.ok ? '' : ' FAILED') + (c.startupMs ? ` (start ${c.startupMs} ms)` : '')).join(', ')]);
}
const table = '| Result | Run | OK | Details |\n|---|---|---|---|\n'
  + rows.map(([file, run, ok, details]) => `| ${file} | ${run} | ${ok ? 'yes' : '**no**'} | ${String(details).replaceAll('|', '/')} |`).join('\n') + '\n';
console.log(table);
if (process.env.GITHUB_STEP_SUMMARY) appendFileSync(process.env.GITHUB_STEP_SUMMARY, table);
