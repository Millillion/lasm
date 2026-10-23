// Builds the platform sample applications with an installed Lasm package (the
// candidate tarball) and the Node that runs this script: examples/hello (a
// trivial program) and examples/js-crud on Express and on Hono. Writes them to
// OUTPUT/{hello,express,hono} with OUTPUT/apps.json for run-checks.mjs.
//   node build-apps.mjs CANDIDATE_TGZ WORK_DIR OUTPUT_DIR
import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';
import { cpSync, existsSync, mkdirSync, readFileSync, readdirSync, statSync, writeFileSync } from 'node:fs';
import { dirname, join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('../../', import.meta.url));
const [tgzArg, workArg, outputArg] = process.argv.slice(2);
assert.ok(tgzArg && workArg && outputArg, 'Usage: node build-apps.mjs CANDIDATE_TGZ WORK_DIR OUTPUT_DIR');
const tgz = resolve(tgzArg), work = resolve(workArg), output = resolve(outputArg);
assert.ok(!existsSync(work) && !existsSync(output), 'Use new work and output directories');
const bin = name => process.platform === 'win32'
  ? [process.execPath, join(dirname(process.execPath), `node_modules/npm/bin/${name}-cli.js`)] : [join(dirname(process.execPath), name)];
const steps = [];
function run(label, [command, ...base], args, cwd) {
  const started = performance.now();
  const r = spawnSync(command, [...base, ...args], { cwd, encoding: 'utf8', timeout: 3600_000, maxBuffer: 64 * 1024 * 1024,
    env: { ...process.env, npm_config_audit: 'false', npm_config_fund: 'false', npm_config_update_notifier: 'false' } });
  steps.push({ label, code: r.status, seconds: Math.round((performance.now() - started) / 100) / 10 });
  assert.equal(r.status, 0, `${label} failed:\n${r.stdout?.slice(-4000)}\n${r.stderr?.slice(-8000)}`);
  console.log(`${label}: ${steps.at(-1).seconds} s`);
}
const size = path => statSync(path).isDirectory() ? readdirSync(path).reduce((total, name) => total + size(join(path, name)), 0) : statSync(path).size;
mkdirSync(work, { recursive: true }); mkdirSync(output, { recursive: true });
const hello = join(work, 'hello'), crud = join(work, 'crud');
mkdirSync(hello);
cpSync(join(root, 'examples/hello/Main.lean'), join(hello, 'Main.lean'));
cpSync(join(root, 'examples/js-crud'), crud, { recursive: true, filter: f => !f.split(/[\\/]/).some(p => ['node_modules', 'dist', '.lake'].includes(p)) });
run('npm install -D Lasm candidate (hello)', bin('npm'), ['install', '-D', tgz], hello);
run('lasm build hello', bin('npx'), ['lasm', 'build', 'Main.lean', '--output', join(output, 'hello')], hello);
// Production dependencies only (npm ci with the lock file), then Lasm as a dev dependency.
run('npm ci (example dependencies)', bin('npm'), ['ci', '--omit=dev'], crud);
run('npm install -D Lasm candidate (crud)', bin('npm'), ['install', '-D', tgz], crud);
for (const app of ['Express', 'Hono']) {
  const dist = join(output, app.toLowerCase());
  run(`lasm build ${app}.lean`, bin('npx'), ['lasm', 'build', `${app}.lean`, '--output', dist], crud);
  assert.ok(!existsSync(join(dist, 'node_modules/@lasm')), 'Lasm itself is not deployed');
}
const apps = [
  { name: 'hello', kind: 'program', expectedStdout: 'Hello from Lean! 2 + 3 = 5\n' },
  { name: 'express', kind: 'server' }, { name: 'hono', kind: 'server' }];
for (const app of apps) {
  const native = JSON.parse(readFileSync(join(output, app.name, 'host/native/manifest.json'), 'utf8')).deployment;
  Object.assign(app, { bytes: size(join(output, app.name)), nativeTargets: native.targets });
  assert.ok(native.targets.includes('linux-x64') && native.targets.includes('linux-arm64'), `${app.name}: Linux native targets`);
}
writeFileSync(join(output, 'apps.json'), JSON.stringify({ host: `${process.platform}-${process.arch}`, node: process.version,
  candidate: tgz.split(/[\\/]/).pop(), builtAt: new Date().toISOString(), steps, apps }, null, 2) + '\n');
console.log(JSON.stringify(apps));
