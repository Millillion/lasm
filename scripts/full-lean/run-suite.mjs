// Execute the unchanged upstream registrations and verify original test bytes
// both before and after. This is also used for the native control run.
import { readFileSync, writeFileSync, existsSync, createWriteStream } from 'node:fs';
import { resolve, join } from 'node:path';
import { spawn } from 'node:child_process';
import { createHash } from 'node:crypto';

const args = process.argv.slice(2);
const option = (name, fallback) => { const i = args.indexOf(name); return i < 0 ? fallback : args[i + 1]; };
const directory = resolve(option('--suite', '.work/full-suite-native'));
const jobs = Number(option('--jobs', '2'));
if (!Number.isInteger(jobs) || jobs < 1) throw new Error('Invalid job count');
const manifest = JSON.parse(readFileSync(join(directory, 'parallel-suite.json')));
const hashes = JSON.parse(readFileSync(manifest.testSourceHashes));
function verify() {
  const modified = Object.entries(hashes).filter(([path, hash]) => {
    const file = join(manifest.source, path);
    return !existsSync(file) || createHash('sha256').update(readFileSync(file)).digest('hex') !== hash;
  }).map(([path]) => path);
  return { checked: Object.keys(hashes).length, modified };
}
const before = verify();
if (before.modified.length) throw new Error(`Upstream test sources changed before execution: ${before.modified.join(', ')}`);
// Supply ordinary host context without forwarding unrelated service credentials
// or user compiler overrides into third-party test drivers.
const env = Object.fromEntries(['PATH', 'HOME', 'USER', 'LOGNAME', 'LANG', 'LC_ALL', 'TMPDIR', 'SYSTEMROOT', 'COMSPEC', 'PATHEXT']
  .filter(key => process.env[key] !== undefined).map(key => [key, process.env[key]]));
Object.assign(env, {
  GIT_CONFIG_NOSYSTEM: '1', GIT_CONFIG_GLOBAL: '/dev/null',
  GIT_CONFIG_COUNT: '3', GIT_CONFIG_KEY_0: 'commit.gpgsign', GIT_CONFIG_VALUE_0: 'false',
  GIT_CONFIG_KEY_1: 'user.name', GIT_CONFIG_VALUE_1: 'Lasm upstream tests',
  GIT_CONFIG_KEY_2: 'user.email', GIT_CONFIG_VALUE_2: 'upstream-tests@localhost',
  CTEST_OUTPUT_ON_FAILURE: '1',
});
const command = ['--test-dir', manifest.execution, '-j', String(jobs), '--output-on-failure', '--output-junit', join(directory, 'results.xml')];
if (args.includes('--rerun-failed')) command.push('--rerun-failed');
const filter = option('--filter');
if (filter) command.push('-R', filter);
const startedAt = new Date().toISOString();
const log = createWriteStream(join(directory, 'execution.log'));
const child = spawn('ctest', command, { env, stdio: ['ignore', 'pipe', 'pipe'] });
child.stdout.on('data', bytes => { log.write(bytes); process.stdout.write(bytes); });
child.stderr.on('data', bytes => { log.write(bytes); process.stderr.write(bytes); });
const result = await new Promise((resolve, reject) => {
  child.once('error', reject);
  child.once('close', (code, signal) => resolve({ code, signal }));
});
await new Promise(resolve => log.end(resolve));
const after = verify();
writeFileSync(join(directory, 'execution.json'), JSON.stringify({ startedAt, finishedAt: new Date().toISOString(),
  backend: manifest.backend, registered: manifest.registered, command, result, originalSources: { before, after },
  environment: 'Explicit host context; Git signing disabled and test identity supplied; no compiler overrides.',
}, null, 2) + '\n');
if (after.modified.length) console.error(`Upstream test drivers changed original files: ${after.modified.join(', ')}`);
process.exitCode = after.modified.length ? 2 : result.code ?? 1;
