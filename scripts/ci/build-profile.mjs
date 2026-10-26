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
// A new user's first Hono build: a new machine (an empty tool cache), a new project.
if (!process.env.BUILD_PROFILE_EDIT_LOOP_ONLY) {
  const fresh = join(work, 'projects', 'hono-new-machine');
  cpSync(projects.hono, fresh, { recursive: true });
  projects['hono-new-machine'] = fresh;
  await build('hono: first build on a new machine', 'hono-new-machine', { cache: join(work, 'new-machine-tools') });
  const record = result.builds.at(-1);
  record.downloadSeconds = +record.stages.filter(s => /^Downloading/.test(s.stage)).reduce((t, s) => t + s.seconds, 0).toFixed(2);
  record.withoutDownloadSeconds = +(record.seconds - record.downloadSeconds).toFixed(2);
  console.log(`  download ${record.downloadSeconds} s; without download ${record.withoutDownloadSeconds} s`);
  writeFileSync(output, JSON.stringify(result, null, 2) + '\n');
}
// A Lake project as `lasm init --template hono` writes it (the edit loop users get).
if (!process.env.BUILD_PROFILE_SKIP_TEMPLATE) {
  const dir = projects.template = join(work, 'projects', 'template-hono');
  cp.execFileSync(process.execPath, [join(compiler, 'bin/lasm.mjs'), 'init', dir, '--template', 'hono'], { stdio: 'inherit' });
  const pkg = JSON.parse(readFileSync(join(dir, 'package.json'), 'utf8'));
  delete pkg.devDependencies;
  writeFileSync(join(dir, 'package.json'), JSON.stringify(pkg, null, 2) + '\n');
  cp.execFileSync(npm, ['install', '--no-audit', '--no-fund'], { cwd: dir, stdio: 'inherit', shell });
}
// The edit loop (docs/BENCHMARKS.md "Edit loop"): dev rebuilds after a
// one-function edit, in this process (as `lasm dev` rebuilds) and as a new
// `lasm build --dev` process (as `npm run dev` after an edit).
const editLoop = async name => {
  // As in lasm dev's long-lived build worker (src/dev-build-worker.mjs).
  (await import(pathToFileURL(join(compiler, 'src/managed-artifacts.mjs')).href)).trustVerifiedTreesForSession(true);
  const source = join(projects[name], 'Main.lean'), original = readFileSync(source, 'utf8');
  const edit = n => writeFileSync(source, original.replace(/\ndef main/, `\ndef editLoop : Nat := ${n}\n\ndef main`));
  await build(`${name}: dev, first`, name, { profile: 'dev' });
  for (let n = 1; n <= 3; n++) { edit(n); await build(`${name}: dev, function edit ${n}`, name, { profile: 'dev' }); }
  (await import(pathToFileURL(join(compiler, 'src/managed-artifacts.mjs')).href)).trustVerifiedTreesForSession(false);
  edit(4);
  const start = now();
  cp.execFileSync(process.execPath, [join(compiler, 'bin/lasm.mjs'), 'build', 'Main.lean', '--dev', '--output', 'dist-dev'], { cwd: projects[name], stdio: 'inherit' });
  result.builds.push({ label: `${name}: dev, function edit, new process`, fixture: name, profile: 'dev', seconds: (now() - start) / 1000 });
  console.log(`${result.builds.at(-1).label}: ${result.builds.at(-1).seconds.toFixed(1)} s`);
  writeFileSync(source, original);
  writeFileSync(output, JSON.stringify(result, null, 2) + '\n');
};
if (process.env.BUILD_PROFILE_EDIT_LOOP_ONLY) {
  for (const name of ['hono', ...(projects.template ? ['template'] : [])]) await editLoop(name);
  result.finishedAt = new Date().toISOString();
  writeFileSync(output, JSON.stringify(result, null, 2) + '\n');
  process.exit(0);
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
for (const name of ['hono', ...(projects.template ? ['template'] : [])]) await editLoop(name);
result.finishedAt = new Date().toISOString();
writeFileSync(output, JSON.stringify(result, null, 2) + '\n');
