// Builds the fullstack template as a user does (.github/workflows/fullstack.yml):
// `lasm init --template fullstack`, then the browser app, the Node server and
// the Workers build (the package.json scripts, with this checkout's lasm),
// each inside the resource guard. Copies the deployable files to OUT and
// records build times and sizes in OUT/build.json.
//   node scripts/fullstack/build-app.mjs WORK OUT
import { cpSync, existsSync, mkdirSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { execFileSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('../../', import.meta.url));
const [workArg, outArg] = process.argv.slice(2);
if (!workArg || !outArg) throw new Error('Usage: node scripts/fullstack/build-app.mjs WORK OUT');
const work = resolve(workArg), out = resolve(outArg);
rmSync(work, { recursive: true, force: true });
rmSync(out, { recursive: true, force: true });
mkdirSync(work, { recursive: true });
const env = { ...process.env, CI: '1', BROWSER: 'none' };
delete env.DISPLAY; delete env.WAYLAND_DISPLAY;
const app = join(work, 'todos');
execFileSync(process.execPath, [join(root, 'bin/lasm.mjs'), 'init', app, '--template', 'fullstack'], { stdio: 'inherit', env });
const passed = ['LASM_APPLICATION_RUNTIME', 'LASM_EDGE_RUNTIME', 'LASM_BUILD_JOBS'].filter(key => process.env[key])
  .map(key => `${key}=${key === 'LASM_BUILD_JOBS' ? process.env[key] : resolve(process.env[key])}`);
const lasm = args => {
  const started = Date.now();
  execFileSync(process.execPath, [join(root, 'scripts/full-lean/run-bounded.mjs'), '--', 'python3', join(root, 'scripts/full-lean/base-pages.py'), 'env', ...passed,
    process.execPath, join(root, 'bin/lasm.mjs'), ...args], { cwd: app, stdio: 'inherit', env });
  return (Date.now() - started) / 1000;
};
// The package.json scripts, with this checkout's lasm.
const scripts = JSON.parse(readFileSync(join(app, 'package.json'), 'utf8')).scripts;
const run = script => lasm(scripts[script].replace(/^lasm /, '').split(' '));
const record = { schema: 1, platform: `${process.platform}-${process.arch}`, seconds: {} };
record.seconds.client = run('build:client');
record.seconds.server = run('build:server');
record.seconds.workers = lasm(scripts['build:workers'].split('&& ')[1].replace(/^lasm /, '').split(' '));
const manifest = JSON.parse(readFileSync(join(app, 'dist/public/client/lasm-manifest.json'), 'utf8'));
record.client = { transfer: manifest.transfer, entry: manifest.entry, wasm: manifest.wasm };
for (const path of ['dist', 'workers', 'wrangler.toml', 'package.json', 'README.md'])
  if (existsSync(join(app, path))) cpSync(join(app, path), join(out, path), { recursive: true });
writeFileSync(join(out, 'build.json'), JSON.stringify(record, null, 2) + '\n');
console.log(JSON.stringify(record, null, 2));
