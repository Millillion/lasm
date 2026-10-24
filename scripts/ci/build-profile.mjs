// Build-time profile of an installed Lasm candidate (docs/BENCHMARKS.md, "Build
// time"): runs the build in-process with a timestamp for every progress stage
// and every synchronous subprocess, on the benchmark fixtures.
//   node scripts/ci/build-profile.mjs CANDIDATE.tgz NEW_WORK_DIR RESULT.json
// Sequence per fixture (hello, hono): first build in a new project (tools are
// downloaded only by the very first one), --rebuild, a one-line edit, then the
// dev profile: first dev build and a one-line dev edit.
import assert from 'node:assert/strict';
import module from 'node:module';
import cp from 'node:child_process';
import { cpSync, existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { availableParallelism, cpus } from 'node:os';
import { basename, join, resolve } from 'node:path';
import { fileURLToPath, pathToFileURL } from 'node:url';

const [tgzArg, workArg, outputArg] = process.argv.slice(2);
assert.ok(tgzArg && workArg && outputArg, 'Usage: node scripts/ci/build-profile.mjs CANDIDATE.tgz NEW_WORK_DIR RESULT.json');
const root = fileURLToPath(new URL('../../', import.meta.url));
const tgz = resolve(tgzArg), work = resolve(workArg), output = resolve(outputArg);
assert.ok(!existsSync(work), 'Use a new work directory');
mkdirSync(work, { recursive: true });
const npm = process.platform === 'win32' ? 'npm.cmd' : 'npm';
const shell = process.platform === 'win32';
const install = join(work, 'install');
mkdirSync(install);
writeFileSync(join(install, 'package.json'), '{"private":true}\n');
cp.execFileSync(npm, ['install', tgz, '--no-audit', '--no-fund'], { cwd: install, stdio: 'inherit', shell });
const compiler = join(install, 'node_modules/@lasm/compiler');

const t0 = performance.now(), now = () => performance.now() - t0;
let events = [];
for (const name of ['execFileSync', 'spawnSync', 'execSync']) {
  const original = cp[name];
  cp[name] = function (file, ...args) {
    const start = now(), argv = Array.isArray(args[0]) ? args[0] : [];
    try { return original.call(this, file, ...args); }
    finally {
      events.push({ tool: name === 'execSync' ? String(file).slice(0, 60) : basename(String(file)),
        detail: argv.filter(a => typeof a === 'string').slice(0, 4).map(a => a.length > 60 ? '…' + a.slice(-50) : a).join(' '), start, wall: now() - start });
    }
  };
}
module.syncBuiltinESMExports();
const { buildApplication } = await import(pathToFileURL(join(compiler, 'src/application-build.mjs')).href);

const projects = {};
for (const name of ['hello', 'hono']) {
  const dir = projects[name] = join(work, 'projects', name);
  cpSync(join(root, 'bench/fixtures', name), dir, { recursive: true });
  if (existsSync(join(dir, 'package.json'))) cp.execFileSync(npm, ['ci', '--no-audit', '--no-fund'], { cwd: dir, stdio: 'inherit', shell });
}
const result = { platform: `${process.platform}-${process.arch}`, cpus: availableParallelism(), cpu: cpus()[0]?.model,
  node: process.version, candidate: basename(tgz), builds: [] };
async function build(label, name, options = {}) {
  events = [];
  const stages = [], start = now();
  const info = await buildApplication(join(projects[name], 'Main.lean'), { log: () => {}, ...options,
    progress: event => { if (!stages.length || stages.at(-1).stage !== event.stage) stages.push({ stage: event.stage, at: now() }); } });
  const end = now();
  const rows = stages.map((s, i) => ({ stage: s.stage.replace(/\d+ of \d+/, 'N of M').replace(/\d+ npm packages/, 'npm packages'),
    wall: (stages[i + 1]?.at ?? end) - s.at }));
  const merged = [];
  for (const row of rows) { const last = merged.at(-1); if (last?.stage === row.stage) last.wall += row.wall; else merged.push({ ...row }); }
  const tools = {};
  for (const e of events) { const t = (tools[e.tool] ??= { count: 0, wall: 0 }); t.count++; t.wall += e.wall; }
  const record = { label, fixture: name, profile: info.profile, cacheHit: info.cacheHit, seconds: (end - start) / 1000,
    stages: merged.map(r => ({ stage: r.stage, seconds: +(r.wall / 1000).toFixed(2) })),
    tools: Object.fromEntries(Object.entries(tools).sort((a, b) => b[1].wall - a[1].wall).map(([k, v]) => [k, { count: v.count, seconds: +(v.wall / 1000).toFixed(2) }])),
    slowest: [...events].sort((a, b) => b.wall - a.wall).slice(0, 12).map(e => ({ tool: e.tool, detail: e.detail, seconds: +(e.wall / 1000).toFixed(2) })) };
  result.builds.push(record);
  writeFileSync(output, JSON.stringify(result, null, 2) + '\n');
  console.log(`${label}: ${record.seconds.toFixed(1)} s (${record.profile}${record.cacheHit ? ', cache hit' : ''})`);
  for (const s of record.stages) if (s.seconds >= 0.5) console.log(`  ${s.seconds.toFixed(1).padStart(6)} s  ${s.stage}`);
  for (const [k, v] of Object.entries(record.tools).slice(0, 6)) console.log(`    ${v.seconds.toFixed(1).padStart(6)} s  ${k} x${v.count}`);
}
for (const name of ['hello', 'hono']) {
  const source = join(projects[name], 'Main.lean'), original = readFileSync(source, 'utf8');
  await build(`${name}: first build in a new project`, name);
  await build(`${name}: --rebuild`, name, { rebuild: true });
  await build(`${name}: unchanged (cache hit)`, name);
  writeFileSync(source, original + '\ndef benchmarkEdit : Nat := 1\n');
  await build(`${name}: one-line edit`, name);
  await build(`${name}: dev, first`, name, { profile: 'dev' });
  writeFileSync(source, original + '\ndef benchmarkEdit : Nat := 2\n');
  await build(`${name}: dev, one-line edit`, name, { profile: 'dev' });
  writeFileSync(source, original);
}
result.finishedAt = new Date().toISOString();
writeFileSync(output, JSON.stringify(result, null, 2) + '\n');
