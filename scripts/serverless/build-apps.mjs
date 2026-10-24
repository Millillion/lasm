// Builds the serverless sample applications the way a user does, with an
// installed Lasm package (a candidate tarball, optionally with this branch's
// source overlay): `lasm init` for each server template with the function
// deploy targets, npm install, `npm run build` and every `npm run build:<target>`
// (lasm build --target).
// Two projects per template, because Azure Functions and Google Cloud
// Functions add their platform's npm package to the deployment:
//   <template>          --deploy lambda-zip lambda-edge vercel netlify
//   <template>-hosted   --deploy azure gcf
// Plus `probe` (scripts/serverless/probe/Main.lean), a program that uses the
// native pieces (subprocess, files, environment) for the Linux variants.
// Writes OUTPUT/apps.json for the run-*.mjs scripts.
//   node build-apps.mjs CANDIDATE_TGZ WORK_DIR [--templates hono,express,std-http] [--only functions,hosted,probe]
import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';
import { copyFileSync, existsSync, mkdirSync, readdirSync, statSync, writeFileSync } from 'node:fs';
import { dirname, join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const args = process.argv.slice(2);
const flag = name => { const i = args.indexOf(name); if (i < 0) return undefined; const [, value] = args.splice(i, 2); return value; };
const templates = (flag('--templates') ?? 'hono,express,std-http').split(',');
// --only functions,hosted,probe limits the projects (one build per bounded run).
const only = (flag('--only') ?? 'functions,hosted,probe').split(',');
const [tgzArg, workArg] = args;
assert.ok(tgzArg && workArg, 'Usage: node build-apps.mjs CANDIDATE_TGZ WORK_DIR [--templates a,b]');
const tgz = resolve(tgzArg), work = resolve(workArg);
assert.ok(!existsSync(work), 'Use a new work directory');
mkdirSync(work, { recursive: true });
const bin = name => [join(dirname(process.execPath), name)];
const steps = [];
function run(label, [command, ...base], argv, cwd) {
  const started = performance.now();
  const r = spawnSync(command, [...base, ...argv], { cwd, encoding: 'utf8', timeout: 3600_000, maxBuffer: 64 * 1024 * 1024,
    env: { ...process.env, npm_config_audit: 'false', npm_config_fund: 'false', npm_config_update_notifier: 'false' } });
  steps.push({ label, code: r.status, seconds: Math.round((performance.now() - started) / 100) / 10, stdout: r.stdout?.slice(-2000) });
  assert.equal(r.status, 0, `${label} failed:\n${r.stdout?.slice(-4000)}\n${r.stderr?.slice(-8000)}`);
  console.log(`${label}: ${steps.at(-1).seconds} s`);
  return r;
}
const size = path => statSync(path).isDirectory() ? readdirSync(path).reduce((total, name) => total + size(join(path, name)), 0) : statSync(path).size;

// The installed CLI writes the projects (lasm init needs no project).
const cli = join(work, 'cli');
mkdirSync(cli);
run('install the Lasm package', bin('npm'), ['install', '--no-save', tgz], cli);
const lasm = [process.execPath, join(cli, 'node_modules/@lasm/compiler/bin/lasm.mjs')];
const frameworks = { hono: 'Hono', express: 'Express', 'std-http': 'Std.Http' };
const apps = [];
for (const template of templates) {
  for (const [suffix, deploy, kind] of [['', ['lambda-zip', 'lambda-edge', 'vercel', 'netlify'], 'functions'], ['-hosted', ['azure', 'gcf'], 'hosted']]) {
    if (!only.includes(kind)) continue;
    const name = template + suffix, project = join(work, name);
    run(`lasm init ${name}`, lasm, ['init', project, '--template', template, ...deploy.flatMap(target => ['--deploy', target])], work);
    // Lasm from the tarball (the devDependency is not on npm yet), with the template's packages.
    run(`npm install -D Lasm (${name})`, bin('npm'), ['install', '-D', tgz], project);
    run(`npm run build (${name})`, bin('npm'), ['run', 'build'], project);
    const packages = {};
    for (const target of deploy.map(target => target === 'lambda-zip' ? 'lambda' : target)) {
      const r = run(`npm run build:${target} (${name})`, bin('npm'), ['run', `build:${target}`], project);
      const output = { lambda: 'lambda.zip', 'lambda-edge': 'lambda-edge.zip', vercel: '.vercel/output', netlify: 'netlify/functions/lasm',
        azure: 'azure-functions', gcf: 'gcf' }[target];
      packages[target] = { path: join(project, output), bytes: size(join(project, output)), log: r.stdout.trim().split('\n').slice(-4).join('\n') };
    }
    apps.push({ name, template, framework: frameworks[template], project, dist: join(project, 'dist'), distBytes: size(join(project, 'dist')), packages });
  }
}
if (only.includes('probe')) {
  const project = join(work, 'probe');
  run('lasm init probe', lasm, ['init', project, '--template', 'plain'], work);
  copyFileSync(fileURLToPath(new URL('./probe/Main.lean', import.meta.url)), join(project, 'Main.lean'));
  run('npm install -D Lasm (probe)', bin('npm'), ['install', '-D', tgz], project);
  run('npm run build (probe)', bin('npm'), ['run', 'build'], project);
  apps.push({ name: 'probe', kind: 'program', project, dist: join(project, 'dist'), distBytes: size(join(project, 'dist')), packages: {},
    expectedStdout: 'process: 0 child\nfile: data\nenv: probe\ntime: true\n' });
}
writeFileSync(join(work, 'apps.json'), JSON.stringify({ host: `${process.platform}-${process.arch}`, node: process.version,
  candidate: tgz.split(/[\\/]/).pop(), builtAt: new Date().toISOString(), steps, apps }, null, 2) + '\n');
console.log(JSON.stringify(apps.map(app => ({ name: app.name, distBytes: app.distBytes, packages: Object.fromEntries(Object.entries(app.packages).map(([k, v]) => [k, v.bytes])) }))));
