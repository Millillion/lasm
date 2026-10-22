// Combine ecosystem results (scripts/ecosystem/run.mjs JSON, one per project and
// platform, as downloaded from the Ecosystem compatibility workflow) into one
// evidence file and a Markdown status table.
//   node assemble.mjs RESULTS_DIR OUT.json [--runs RUN_ID=PLATFORM,...]
import { createHash } from 'node:crypto';
import { readdirSync, readFileSync, statSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';

const [directory, out, ...rest] = process.argv.slice(2);
const runs = rest[0] === '--runs' ? Object.fromEntries(rest[1].split(',').map(item => item.split('='))) : {};
const files = [];
const walk = path => { for (const name of readdirSync(path)) {
  const file = join(path, name);
  if (statSync(file).isDirectory()) walk(file);
  else if (name.endsWith('.json') && !name.includes('-resources.json')) files.push(file);
} };
walk(directory);
const platforms = ['linux-x64', 'linux-arm64', 'darwin-x64', 'darwin-arm64', 'win32-x64'];
const results = [];
for (const file of files) {
  const result = JSON.parse(readFileSync(file, 'utf8'));
  if (!result.project || !result.platform) continue;
  const compact = side => side && {
    ...Object.fromEntries(Object.entries(side).filter(([key]) => !['stdout', 'log', 'stderrTail'].includes(key))),
    ...(side.stdout !== undefined ? { stdoutSha256: createHash('sha256').update(side.stdout).digest('hex'),
      stdoutHead: side.stdout.split('\n').slice(0, 8).join('\n') } : {}),
    ...(side.log ? { logTail: side.log.split('\n').slice(-12).join('\n') } : {}),
  };
  // A build stopped by the resource guard is not a package or Lasm result.
  const stopped = /proactive (?:RSS stop|memory budget)|resource-limited run/.test(`${result.native?.log ?? ''}\n${result.lasm?.log ?? ''}`);
  results.push({ project: result.project, platform: result.platform, result: stopped && /fail/.test(result.result) ? 'resource-stop' : result.result, node: result.node,
    native: compact(result.native), lasm: compact(result.lasm) });
}
results.sort((a, b) => a.project.localeCompare(b.project) || platforms.indexOf(a.platform) - platforms.indexOf(b.platform));
writeFileSync(out, JSON.stringify({ schema: 1, generated: new Date().toISOString(), runs, results }, null, 2) + '\n');
const projects = [...new Set(results.map(item => item.project))];
console.log(`| Project | ${platforms.join(' | ')} |`);
console.log(`| --- | ${platforms.map(() => '---').join(' | ')} |`);
for (const project of projects) console.log(`| ${project} | ${platforms.map(platform =>
  results.find(item => item.project === project && item.platform === platform)?.result ?? '—').join(' | ')} |`);
