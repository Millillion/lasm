// `lasm dev Main.lean --target browser` (docs/BROWSER.md): builds the app for
// the browser, serves it on http://127.0.0.1:5173 as a static host would
// (src/browser/static-server.mjs), and on every saved .lean file rebuilds it
// and reloads the page; build errors are shown in the terminal and in the
// page's console. --release serves a release build; --no-watch serves once
// built (npm run preview). It never opens a browser.
import { existsSync } from 'node:fs';
import { dirname, join, resolve, relative } from 'node:path';

import { startStaticServer } from './static-server.mjs';


export const devUsage = `Usage: lasm dev [Main.lean] --target browser [--release] [--no-watch] [--port 5173] [--host 127.0.0.1] [--output DIR]

Builds the Lean app for the browser and serves it; saving a .lean file rebuilds
it and reloads the page. --release serves the release build (default output
dist/, as lasm build writes it); dev builds go to .lake/lasm/browser-dev.`;

export function parseDevArguments(tokens) {
  const result = { command: 'dev', target: undefined, release: false, watch: true, port: 5173, host: '127.0.0.1' };
  const positional = [];
  for (let i = 0; i < tokens.length; i++) {
    const token = tokens[i];
    if (token === '--help' || token === '-h') return { command: 'dev-help' };
    if (token === '--release') { result.release = true; continue; }
    if (token === '--no-watch') { result.watch = false; continue; }
    const option = /^--(target|port|host|output)(?:=(.*))?$/.exec(token);
    if (option) {
      const value = option[2] ?? tokens[++i];
      if (!value || value.startsWith('--')) throw new Error(`--${option[1]} requires a value\n\n${devUsage}`);
      result[option[1]] = option[1] === 'port' ? Number(value) : value;
      continue;
    }
    if (token.startsWith('-')) throw new Error(`Unknown lasm dev option: ${token}\n\n${devUsage}`);
    positional.push(token);
  }
  if (positional.length > 1) throw new Error(devUsage);
  result.input = positional[0] ?? 'Main.lean';
  if (!result.input.endsWith('.lean')) throw new Error(`lasm dev expects a Lean source file\n\n${devUsage}`);
  if (result.target !== 'browser') throw new Error(`lasm dev needs --target browser (the other targets run with lasm Main.lean)\n\n${devUsage}`);
  if (!Number.isInteger(result.port) || result.port < 0 || result.port > 65535) throw new Error('--port must be a port number');
  return result;
}

export async function runBrowserDev(options) {
  const source = resolve(options.input);
  if (!existsSync(source)) throw new Error(`${options.input} does not exist`);
  const project = dirname(source);
  const output = resolve(options.output ?? (options.release ? join(project, 'dist') : join(project, '.lake/lasm/browser-dev')));
  // One long-lived build worker (src/dev-build-service.mjs, as lasm dev uses
  // for every target): loaded code, verified tools and caches carry over.
  const { createBuildService } = await import('../dev-build-service.mjs');
  // The watcher and content snapshots lasm dev uses for every other target:
  // Node's recursive watcher on Linux loses a file once an editor saves it by
  // renaming over it, and a touch or an unchanged save rebuilds nothing.
  const { formatLeanDiagnostics, watchProject, snapshot, changedFiles, generatedByBuild } = await import('../dev.mjs');
  const service = createBuildService();
  let previous = snapshot(project);
  // Lake writes lake-manifest.json during a build: the build's own output, not a change.
  const settle = () => { for (const [file, hash] of snapshot(project)) if (generatedByBuild(file) && previous.get(file) !== hash) previous.set(file, hash); };
  const build = async () => {
    const started = Date.now();
    try {
      await service.build(source, { profile: options.release ? 'release' : 'dev', output }, { target: 'browser',
        onLog: text => process.stderr.write(text + '\n') });
      return { ok: true, seconds: (Date.now() - started) / 1000 };
    } catch (error) {
      const errors = formatLeanDiagnostics([error.stdout, error.stderr].filter(Boolean).join('\n').trim() || error.message, project);
      process.stderr.write(errors + '\n');
      return { ok: false, seconds: (Date.now() - started) / 1000, errors };
    }
  };
  const first = await build();
  settle();
  // The build worker keeps the process alive: stop it when lasm dev gives up.
  if (!first.ok && !existsSync(join(output, 'index.html'))) { await service.close(); return 1; }
  let server;
  try { server = await startStaticServer(output, { port: options.port, host: options.host, liveReload: options.watch }); }
  catch (error) { await service.close(); throw error; }
  console.error(`[lasm dev] Serving ${relative(process.cwd(), output) || output} at ${server.url}${options.watch ? ' (rebuilds on save; Ctrl+C stops)' : ''}`);
  if (!options.watch) return new Promise(() => {});
  let timer = null, building = false, again = false;
  const rebuild = async () => {
    if (building) { again = true; return; }
    const next = snapshot(project);
    if (!changedFiles(previous, next).length) return;
    previous = next;
    building = true;
    const result = await build();
    settle();
    building = false;
    if (result.ok) { server.reload(); console.error(`[lasm dev] Rebuilt in ${result.seconds.toFixed(1)} s; reloading`); }
    else server.report(result.errors.slice(-4000));
    if (again) { again = false; rebuild(); }
  };
  watchProject(project, () => { clearTimeout(timer); timer = setTimeout(rebuild, 80); });
  return new Promise(() => {});
}
