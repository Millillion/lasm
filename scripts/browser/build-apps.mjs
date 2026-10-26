// Builds the browser CI's apps (.github/workflows/browser.yml) from this source
// checkout, each inside the resource guard: the web template as `lasm init
// --template web` writes it (counter), the Lasm.Web platform suite
// (test/browser/platform), and any further projects named on the command line.
// Records build times, including a dev rebuild after editing the counter's
// view, and the output sizes, in OUT/build.json.
//   node scripts/browser/build-apps.mjs WORK OUT [name=project-directory …]
import { cpSync, existsSync, mkdirSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { execFileSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('../../', import.meta.url));
const [workArg, outArg, ...extra] = process.argv.slice(2);
if (!workArg || !outArg) throw new Error('Usage: node scripts/browser/build-apps.mjs WORK OUT [name=dir …]');
const work = resolve(workArg), out = resolve(outArg);
rmSync(work, { recursive: true, force: true });
mkdirSync(work, { recursive: true });
mkdirSync(out, { recursive: true });
const env = { ...process.env, CI: '1', BROWSER: 'none' };
delete env.DISPLAY; delete env.WAYLAND_DISPLAY;
const run = (args, options = {}) => execFileSync(process.execPath, args, { stdio: 'inherit', env, ...options });
// The resource guard starts commands with a minimal environment: pass the runtimes on.
const passed = ['LASM_APPLICATION_RUNTIME', 'LASM_EDGE_RUNTIME', 'LASM_BUILD_JOBS'].filter(key => process.env[key])
  .map(key => `${key}=${key === 'LASM_BUILD_JOBS' ? process.env[key] : resolve(process.env[key])}`);
const bounded = [join(root, 'scripts/full-lean/run-bounded.mjs'), '--', 'python3', join(root, 'scripts/full-lean/base-pages.py'), 'env', ...passed];
const build = (project, output, flags = []) => {
  const started = Date.now();
  run([...bounded, process.execPath, join(root, 'bin/lasm.mjs'), 'build', 'Main.lean', '--target', 'browser', '--output', output, ...flags], { cwd: project });
  return (Date.now() - started) / 1000;
};
const record = { schema: 1, platform: `${process.platform}-${process.arch}`, node: process.version, apps: {}, rebuild: null };

// The web template, as users get it.
const counter = join(work, 'counter');
run([join(root, 'bin/lasm.mjs'), 'init', counter, '--template', 'web']);
const projects = [['counter', counter], ['platform', join(work, 'platform')]];
cpSync(join(root, 'test/browser/platform'), join(work, 'platform'), { recursive: true });
for (const item of extra) {
  const [name, directory] = item.split('=');
  cpSync(resolve(directory), join(work, name), { recursive: true });
  projects.push([name, join(work, name)]);
}
for (const [name, project] of projects) {
  const seconds = build(project, join(out, name));
  const manifest = JSON.parse(readFileSync(join(out, name, 'lasm-manifest.json'), 'utf8'));
  record.apps[name] = { buildSeconds: seconds, transfer: manifest.transfer, files: manifest.files, entry: manifest.entry, wasm: manifest.wasm };
  // A second build of unchanged sources: everything comes from the caches.
  record.apps[name].unchangedSeconds = build(project, join(work, name + '-again'));
}

// The platform suite built with --suspend jspi: blocking waits suspend where the browser has JSPI.
record.apps['platform-jspi'] = { buildSeconds: build(join(work, 'platform'), join(out, 'platform-jspi'), ['--suspend', 'jspi']) };

// @lasm/vite: the template's Main.lean imported by a Vite app (test/browser/vite), built with pinned Vite.
const viteApp = join(work, 'vite');
cpSync(join(root, 'test/browser/vite'), viteApp, { recursive: true });
for (const file of ['Main.lean', 'App.lean', 'lean-toolchain']) cpSync(join(counter, file), join(viteApp, file));
execFileSync('npm', ['install', '--no-audit', '--no-fund', '--save-dev', 'vite@8.3.5', `@lasm/vite@file:${join(root, 'packages/vite')}`],
  { cwd: viteApp, stdio: 'inherit', env, shell: process.platform === 'win32' });
{
  const started = Date.now();
  run([...bounded, `LASM_CLI=${join(root, 'bin/lasm.mjs')}`, process.execPath, join(viteApp, 'node_modules/vite/bin/vite.js'), 'build', '--outDir', join(out, 'vite'), '--emptyOutDir'], { cwd: viteApp });
  writeFileSync(join(out, 'vite', 'lasm-manifest.json'), JSON.stringify({ schema: 1, generator: 'vite', target: 'browser' }) + '\n');
  record.apps.vite = { buildSeconds: (Date.now() - started) / 1000, files: {} };
}

// Dev rebuild after editing one view function: a dev build, an edit, a dev build.
const dev = join(work, 'counter-dev');
cpSync(counter, dev, { recursive: true });
build(dev, join(work, 'counter-dev-out'), ['--dev']);
const main = join(dev, 'Main.lean');
writeFileSync(main, readFileSync(main, 'utf8').replace('>Reset<', '>Reset!<'));
record.rebuild = { what: 'counter: edit one view expression, lasm build --dev --target browser', seconds: build(dev, join(work, 'counter-dev-out'), ['--dev']) };
writeFileSync(join(out, 'build.json'), JSON.stringify(record, null, 2) + '\n');
console.log(JSON.stringify(record, (key, value) => key === 'files' ? undefined : value, 2));
if (!existsSync(join(out, 'counter', 'index.html'))) process.exit(1);
