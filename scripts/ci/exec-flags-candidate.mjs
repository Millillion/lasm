// Node exec flags with a candidate tarball, outside any sandbox (templates.yml,
// every platform): install the candidate, build integration/fixtures/exec-flags
// with `npx lasm build`, then run integration/node-exec-flags.mjs with the Std.Http
// server and --inspect sets. The sandboxed installed acceptance runs only the
// program part (its file-access rules deny the time zone files that Std.Http's
// Date header reads, and its offline phase denies sockets).
//
//   node scripts/ci/exec-flags-candidate.mjs CANDIDATE.tgz NEW_WORK_DIR RESULT.json
import assert from 'node:assert/strict';
import { cpSync, existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { dirname, join, resolve } from 'node:path';
import { spawnSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';

const [tgzArg, workArg, resultArg] = process.argv.slice(2);
assert.ok(tgzArg && workArg && resultArg, 'Usage: exec-flags-candidate.mjs CANDIDATE.tgz NEW_WORK_DIR RESULT.json');
const tgz = resolve(tgzArg), work = resolve(workArg), resultFile = resolve(resultArg);
assert.ok(existsSync(tgz) && !existsSync(work));
const root = fileURLToPath(new URL('../..', import.meta.url));
const project = join(work, 'project'), dist = join(project, 'exec flags dist');
mkdirSync(work, { recursive: true });
cpSync(join(root, 'integration/fixtures/exec-flags'), project, { recursive: true });
writeFileSync(join(project, 'package.json'), JSON.stringify({ private: true }) + '\n');
const tool = name => process.platform === 'win32'
  ? [process.execPath, join(dirname(process.execPath), `node_modules/npm/bin/${name}-cli.js`)]
  : [join(dirname(process.execPath), name)];
const run = (label, [command, ...base], args) => {
  const r = spawnSync(command, [...base, ...args], { cwd: project, encoding: 'utf8', timeout: 3600_000, maxBuffer: 64 * 1024 * 1024,
    env: { ...process.env, npm_config_audit: 'false', npm_config_fund: 'false', npm_config_update_notifier: 'false' } });
  assert.equal(r.status, 0, `${label} failed (${r.status}): ${r.stderr?.slice(-4000)}${r.error?.message ?? ''}`);
};
run('npm install candidate', tool('npm'), ['install', '-D', tgz]);
run('lasm build', tool('npx'), ['lasm', 'build', 'Main.lean', '--output', dist]);
const checked = spawnSync(process.execPath, [join(root, 'integration/node-exec-flags.mjs'), join(work, 'result'), '--dist', dist],
  { encoding: 'utf8', timeout: 1800_000, stdio: ['ignore', 'pipe', 'pipe'] });
process.stdout.write(checked.stdout); process.stderr.write(checked.stderr);
const result = JSON.parse(readFileSync(join(work, 'result/result.json'), 'utf8'));
writeFileSync(resultFile, JSON.stringify({ platform: `${process.platform}-${process.arch}`, node: process.version, candidate: tgz, ...result }, null, 2) + '\n');
assert.equal(checked.status, 0, 'Node exec-flag checks failed');
