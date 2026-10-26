// @lasm/vite: Lean apps in Vite projects (docs/BROWSER.md).
//   import lasm from '@lasm/vite';  export default { plugins: [lasm()] };
//   import app from './Main.lean?lasm';  await app.mount(document.getElementById('app'));
// `Main.lean?lasm` is the app's loader (lasm build Main.lean --target browser
// --bundler): Vite bundles it with the page's code, emits the Wasm as an asset
// (new URL(…, import.meta.url)) and resolves the npm modules Lean binds. In
// development every save of a .lean file rebuilds the app (a dev build) and
// remounts it in place, passing it the state it saved (Lasm.Web.App.onHotSave).
import { spawn } from 'node:child_process';
import { createHash } from 'node:crypto';
import { existsSync, readFileSync, readdirSync, statSync } from 'node:fs';
import { createRequire } from 'node:module';
import { dirname, join, relative, resolve, sep } from 'node:path';
import { pathToFileURL } from 'node:url';

const suffix = '?lasm';
const virtualPrefix = '\0lasm:';

/** The Lasm CLI: options.cli, LASM_CLI, or @lasm/cli installed in the project. */
function findCli(root, configured) {
  if (configured) return resolve(root, configured);
  if (process.env.LASM_CLI) return resolve(process.env.LASM_CLI);
  const require = createRequire(join(root, 'package.json'));
  for (const name of ['@lasm/cli', '@lasm/compiler']) {
    try {
      const manifest = require.resolve(`${name}/package.json`);
      const bin = JSON.parse(readFileSync(manifest, 'utf8')).bin;
      return join(dirname(manifest), typeof bin === 'string' ? bin : bin.lasm);
    } catch { /* not installed under this name */ }
  }
  throw new Error('@lasm/vite needs the Lasm CLI: npm install --save-dev @lasm/cli');
}

/** .lean files under a directory (skipping node_modules, .lake and output). */
function leanFiles(directory, skip) {
  const files = [];
  const walk = path => {
    for (const entry of readdirSync(path, { withFileTypes: true })) {
      if (entry.name.startsWith('.') || entry.name === 'node_modules' || skip.has(join(path, entry.name))) continue;
      const full = join(path, entry.name);
      if (entry.isDirectory()) walk(full);
      else if (entry.name.endsWith('.lean')) files.push(full);
    }
  };
  walk(directory);
  return files;
}

/** Plugin options: suspend ('none' | 'jspi'), cli (path of bin/lasm.mjs),
 * release (development builds use the release profile too). */
export default function lasm(options = {}) {
  let config, cli, command = 'serve';
  const builds = new Map(); // source → { output, promise }
  const run = (source, output, dev) => new Promise((done, fail) => {
    const args = [cli, 'build', source, '--target', 'browser', '--bundler', '--output', output,
      ...(options.suspend ? ['--suspend', options.suspend] : []), ...(dev ? ['--dev'] : [])];
    const child = spawn(process.execPath, args, { cwd: dirname(source), stdio: ['ignore', 'inherit', 'pipe'], env: { ...process.env, CI: process.env.CI ?? '', BROWSER: 'none' } });
    let errors = '';
    child.stderr.on('data', chunk => { errors += chunk; process.stderr.write(chunk); });
    child.once('error', fail);
    child.once('exit', code => code === 0 ? done() : fail(new Error(`lasm build ${relative(config.root, source)} failed:\n${errors.slice(-8000)}`)));
  });
  const outputFor = source => join(config.cacheDir, 'lasm', createHash('sha256').update(source).digest('hex').slice(0, 16));
  const build = source => {
    const output = outputFor(source);
    const dev = command === 'serve' && !options.release;
    const promise = run(source, output, dev).then(() => {
      const manifest = JSON.parse(readFileSync(join(output, 'lasm-manifest.json'), 'utf8'));
      return { output, entry: join(output, manifest.entry), manifest };
    });
    builds.set(source, { output, promise });
    return promise;
  };
  return {
    name: 'lasm',
    enforce: 'pre',
    configResolved(resolved) { config = resolved; command = resolved.command; cli = findCli(resolved.root, options.cli); },
    async resolveId(id, importer) {
      if (!id.endsWith(suffix)) return null;
      const file = resolve(importer ? dirname(importer) : config.root, id.slice(0, -suffix.length));
      if (!file.endsWith('.lean')) throw new Error(`${id}: ?lasm imports a Lean source file (Main.lean?lasm)`);
      if (!existsSync(file)) throw new Error(`${id}: ${file} does not exist`);
      // The .lean suffix stays last, so Vite does not take the id for a JavaScript file type.
      return virtualPrefix + file;
    },
    async load(id) {
      if (!id.startsWith(virtualPrefix)) return null;
      // Vite may append its own queries (?import) to the virtual id.
      const source = id.slice(virtualPrefix.length).replace(/\?.*$/, '');
      const { entry } = await (builds.get(source)?.promise ?? build(source));
      for (const file of leanFiles(dirname(source), new Set([outputFor(source)]))) this.addWatchFile(file);
      const loader = JSON.stringify(entry.split(sep).join('/'));
      if (command !== 'serve') return `export * from ${loader};\nexport { default } from ${loader};\n`;
      // Development: a stable handle per mounted app; a rebuilt loader remounts it.
      return `import * as initial from ${loader};
let current = initial;
const handles = new Set();
function wrap(app, element, options) {
  const handle = { element, get name() { return app.name; }, get ports() { return app.ports; }, get stopped() { return app.stopped; },
    send: message => app.send(message), hotSave: () => app.hotSave(),
    unmount(how) { handles.delete(handle); app.unmount(how); } };
  handle.swap = next => { app = next; };
  handle.options = options;
  handles.add(handle);
  return handle;
}
export const name = initial.name;
export const preload = () => current.preload();
export const appOf = element => [...handles].find(h => h.element === element) ?? current.appOf(element);
export async function mount(element, options = {}) {
  const app = await current.mount(element, options);
  return wrap(app, app.element, options);
}
export const mountAll = (...args) => current.mountAll(...args);
export default { name, mount, mountAll, preload, appOf };
if (import.meta.hot) {
  import.meta.hot.on('lasm:update', async ({ id, url }) => {
    if (id !== ${JSON.stringify(source)}) return;
    const next = await import(/* @vite-ignore */ url);
    for (const handle of [...handles]) {
      let state;
      try { state = handle.hotSave(); } catch (error) { console.warn('[lasm] hot save failed', error); }
      const options = { ...(handle.options ?? {}), hotState: state };
      try { handle.unmount({ clear: true }); } catch {}
      const app = await next.mount(handle.element, options);
      handle.swap(app); handles.add(handle);
    }
    current = next;
    console.info('[lasm] ' + ${JSON.stringify(relative(config.root, source))} + ' updated');
  });
}
`;
    },
    async handleHotUpdate({ file, server }) {
      if (!file.endsWith('.lean')) return;
      // Every app whose project contains the file is rebuilt.
      const affected = [...builds.keys()].filter(source => !relative(dirname(source), file).startsWith('..'));
      for (const source of affected) {
        try {
          const { entry } = await build(source);
          const url = '/@fs/' + entry.split(sep).join('/').replace(/^\//, '') + '?t=' + Date.now();
          server.ws.send({ type: 'custom', event: 'lasm:update', data: { id: source, url } });
        } catch (error) {
          server.ws.send({ type: 'error', err: { message: error.message, stack: '', plugin: 'lasm' } });
        }
      }
      return affected.length ? [] : undefined;
    },
  };
}
export { lasm };
