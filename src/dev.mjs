// `lasm dev`: watch the project, rebuild incrementally (dev profile) in one
// long-lived build worker, and restart the program after each good build.
// Edge targets are rebuilt into their output directory for the platform's own
// local tool (wrangler dev, netlify dev, …), which Lasm never starts; browser
// output is served on localhost with live reload (src/browser/browser-dev.mjs).
// Lasm never opens a browser.
import { totalmem } from 'node:os';
import { spawn } from 'node:child_process';
import { createHash } from 'node:crypto';
import { existsSync, readdirSync, readFileSync, statSync, watch } from 'node:fs';
import { basename, dirname, join, relative, resolve } from 'node:path';
import { jsRuntime } from './js-runtime.mjs';

const runtimeTargets = ['node', 'bun', 'deno'];
const edgeOnlyTargets = ['workers', 'vercel-edge', 'netlify-edge', 'deno-deploy', 'supabase-edge'];
export const devTargets = [...runtimeTargets, ...edgeOnlyTargets, 'browser'];

export const devUsage = `Usage: lasm dev [Main.lean] [--target ${devTargets.join('|')}] [--release] [--no-run] [-- arguments…]
       lasm dev [Main.lean] --target browser [--release] [--no-watch] [--port 5173] [--host 127.0.0.1] [--output DIR]

Watches the project's Lean sources and Lake/npm configuration, rebuilds after
each change (dev profile: about 2 s for an ordinary edit once the first build
is done) and restarts the program. Arguments after -- are passed to main.
  node, bun, deno   run the program with that runtime (default: the runtime
                    running Lasm); a build error keeps the last good program running
  workers, vercel-edge, netlify-edge, deno-deploy
                    rebuild the edge output only; run the platform's own local
                    server yourself (for example npx wrangler dev). Lasm never
                    starts platform tools.
  browser           serve the browser build on http://127.0.0.1:5173 (--port,
                    --host) with live reload (src/browser/browser-dev.mjs);
                    --no-watch serves once built; open it yourself
Several outputs of one project rebuild together: --target node,browser, or
with their own sources --target node=Server.lean,browser=Client.lean (one
program runs; the browser output is served with live reload).
--release builds the release profile instead; --no-run only rebuilds.
Type rs and Enter to rebuild and restart; Ctrl+C stops.`;

export function parseDevArguments(tokens) {
  const result = { command: 'dev', profile: 'dev', args: [], run: true, verbose: false };
  const positional = [];
  for (let i = 0; i < tokens.length; i++) {
    const token = tokens[i];
    if (token === '--') { result.args = tokens.slice(i + 1); break; }
    if (token === '--help' || token === '-h') return { command: 'dev-help' };
    if (token === '--release') { result.profile = 'release'; continue; }
    if (token === '--dev') { result.profile = 'dev'; continue; }
    if (token === '--no-run') { result.run = false; continue; }
    if (token === '--verbose') { result.verbose = true; continue; }
    if (token === '--no-watch') { result.watch = false; continue; }
    const option = /^--(target|port|host|output)(?:=(.*))?$/.exec(token);
    if (option) {
      const value = option[2] ?? tokens[++i];
      if (!value || value.startsWith('--')) throw new Error(`--${option[1]} requires a value\n\n${devUsage}`);
      if (option[1] === 'target') {
        // Several outputs of one project: --target node,browser, or with their
        // own sources: --target node=Server.lean,browser=Client.lean.
        result.outputs = value.split(',').map(item => {
          const [target, input] = item.split('=');
          if (!devTargets.includes(target)) throw new Error(`lasm dev --target accepts ${devTargets.join(', ')}, not "${target}"`);
          if (input !== undefined && !input.endsWith('.lean')) throw new Error(`--target ${item}: the source must be a .lean file`);
          return { target, ...(input ? { input } : {}) };
        });
        if (result.outputs.filter(o => runtimeTargets.includes(o.target)).length > 1) throw new Error('lasm dev runs one program: choose one of node, bun and deno');
        result.target = result.outputs[0].target;
      } else if (option[1] === 'port') {
        if (!/^\d{1,5}$/.test(value) || Number(value) > 65535) throw new Error(`--port needs a port number, not "${value}"`);
        result.port = Number(value);
      } else result[option[1]] = value;
      continue;
    }
    if (token.startsWith('-')) throw new Error(`Unknown lasm dev option: ${token}. Program arguments follow --.\n\n${devUsage}`);
    positional.push(token);
  }
  if (positional.length > 1) throw new Error(`lasm dev takes one Lean source.\n\n${devUsage}`);
  // With per-output sources only (--target node=Server.lean,…), the first names the project.
  result.input = positional[0] ?? result.outputs?.find(o => o.input)?.input ?? 'Main.lean';
  if (!result.input.endsWith('.lean')) throw new Error(`lasm dev expects a Lean source (Main.lean), not ${result.input}`);
  result.target ??= jsRuntime;
  result.outputs ??= [{ target: result.target }];
  for (const output of result.outputs) output.input ??= result.input;
  const browser = result.outputs.some(o => o.target === 'browser');
  for (const option of ['port', 'host', 'output', 'watch'])
    if (result[option] !== undefined && !browser) throw new Error(`--${option === 'watch' ? 'no-watch' : option} applies to lasm dev --target browser (servers read $PORT and $HOST)`);
  return result;
}

/** Files whose change needs a rebuild: Lean sources and Lake/npm configuration. */
export function relevantFile(name) {
  const file = basename(name);
  return file.endsWith('.lean') || ['lakefile.toml', 'lakefile.lean', 'lake-manifest.json', 'lean-toolchain', 'package.json', 'package-lock.json'].includes(file);
}
/** Files a build writes into the project itself (Lake's manifest). */
export const generatedByBuild = file => basename(file) === 'lake-manifest.json';
const ignoredDirectory = name => name === 'node_modules' || name.startsWith('.') || ['dist', 'build'].includes(name);

/** The watched files under `directory` (for content comparison and polling). */
export function projectFiles(directory) {
  const files = [];
  const walk = path => {
    let entries;
    try { entries = readdirSync(path, { withFileTypes: true }); } catch { return; }
    for (const entry of entries) {
      if (entry.isDirectory()) { if (!ignoredDirectory(entry.name)) walk(join(path, entry.name)); }
      else if (entry.isFile() && relevantFile(entry.name)) files.push(join(path, entry.name));
    }
  };
  walk(directory);
  return files.sort();
}

const fingerprint = file => { try { return createHash('sha256').update(readFileSync(file)).digest('hex'); } catch { return null; } };
export function snapshot(directory) { return new Map(projectFiles(directory).map(file => [file, fingerprint(file)])); }
/** Paths whose content differs between two snapshots (editors often rewrite unchanged files). */
export function changedFiles(before, after) {
  const changed = [];
  for (const [file, hash] of after) if (before.get(file) !== hash) changed.push(file);
  for (const file of before.keys()) if (!after.has(file)) changed.push(file);
  return changed;
}

/** One non-recursive fs.watch per project directory (node_modules, dist,
 * build and dot directories excluded), re-armed when a directory is replaced
 * and extended to new directories; polling (1 s) where watching fails.
 * Node's recursive watcher on Linux stops reporting a file after it is
 * replaced by a rename (the save of Vim, JetBrains' safe write, sed -i and many
 * formatters), so it is not used: a directory watcher sees every rename. */
export function watchProject(directory, onEvent, { pollMs = 1000, watchFile = watch } = {}) {
  const watchers = new Map();
  let closed = false;
  const arm = dir => {
    if (closed || watchers.has(dir)) return;
    const watcher = watchFile(dir, (event, name) => {
      if (closed) return;
      if (!name) return onEvent();
      const file = join(dir, String(name));
      if (event === 'rename' && !ignoredDirectory(String(name))) {
        let isDirectory = false;
        try { isDirectory = statSync(file).isDirectory(); } catch {}
        if (isDirectory) { armTree(file); return onEvent(); }
        if (watchers.has(file)) { watchers.get(file).close(); watchers.delete(file); return onEvent(); }
      }
      if (relevantFile(String(name))) onEvent();
    });
    watcher.on('error', () => {
      watcher.close();
      if (watchers.get(dir) === watcher) watchers.delete(dir);
      // A replaced directory: watch the new one.
      if (!closed && existsSync(dir)) setTimeout(() => { try { armTree(dir); } catch {} }, 50);
    });
    watchers.set(dir, watcher);
  };
  const armTree = dir => {
    arm(dir);
    for (const entry of readdirSync(dir, { withFileTypes: true }))
      if (entry.isDirectory() && !ignoredDirectory(entry.name)) armTree(join(dir, entry.name));
  };
  try {
    armTree(directory);
    return { mode: 'events', directories: () => watchers.size, close: () => { closed = true; for (const w of watchers.values()) w.close(); watchers.clear(); } };
  } catch {
    for (const w of watchers.values()) w.close();
    watchers.clear();
    let previous = snapshot(directory);
    const timer = setInterval(() => {
      const next = snapshot(directory);
      if (changedFiles(previous, next).length) onEvent();
      previous = next;
    }, pollMs);
    return { mode: 'polling', close: () => clearInterval(timer) };
  }
}

const color = (code, text) => process.stderr.isTTY && !process.env.NO_COLOR ? `\x1b[${code}m${text}\x1b[0m` : text;
const say = text => process.stderr.write(`${color('36', '[lasm dev]')} ${text}\n`);

/** Lean and Lake diagnostics with paths relative to the project and the source
 * line under each error (columns as Lean prints them, 0-based). */
export function formatLeanDiagnostics(text, directory) {
  const lines = String(text ?? '').replace(/\r\n/g, '\n').split('\n');
  const out = [];
  const location = /^(?:(?:error|warning|info): )?((?:\.\/)*([^\s:][^:]*?\.lean)):(\d+):(\d+):\s*(?:(error|warning|info)(?:\([^)]*\))?:\s*)?(.*)$/;
  let frames = 0, failedTargets = false;
  for (const line of lines) {
    // Lake's failure log: command traces and the target summary add nothing here.
    if (/^trace: /.test(line) || /^error: build failed$/.test(line) || /^✖ \[\d+\/\d+\] /.test(line) || /^Command failed: /.test(line)) continue;
    if (/^Some required targets logged failures:$/.test(line)) { failedTargets = true; continue; }
    if (failedTargets && /^- \S+$/.test(line)) continue;
    failedTargets = false;
    const match = location.exec(line);
    if (!match) { out.push(line); continue; }
    const [, raw, , lineNumber, column, severityWord, message] = match;
    const severity = severityWord ?? (/^error/.test(line) ? 'error' : /^warning/.test(line) ? 'warning' : 'error');
    const path = resolve(directory, raw.replace(/^(\.\/)+/, ''));
    const shown = relative(process.cwd(), path) || path;
    const label = severity === 'error' ? color('31;1', 'error') : severity === 'warning' ? color('33;1', 'warning') : severity;
    out.push(`${color('1', `${shown}:${lineNumber}:${column}`)}: ${label}: ${message}`);
    if (frames < 5 && severity === 'error' && existsSync(path)) {
      const source = readFileSync(path, 'utf8').split(/\r?\n/)[Number(lineNumber) - 1];
      if (source !== undefined) {
        const gutter = String(lineNumber).padStart(5);
        out.push(`${color('2', gutter + ' |')} ${source}`, `${color('2', ' '.repeat(5) + ' |')} ${' '.repeat(Number(column))}${color('31;1', '^')}`);
        frames++;
      }
    }
  }
  return out.join('\n').replace(/\n{3,}/g, '\n\n').trim();
}

/** Stage timings of one build, grouped for the summary line. */
export function summarizeStages(stages, end) {
  const groups = { Lean: 0, C: 0, link: 0, output: 0 };
  stages.forEach((stage, index) => {
    const seconds = ((stages[index + 1]?.at ?? end) - stage.at) / 1000;
    const name = stage.stage;
    const group = /Lean|Lake|binding/i.test(name) && !/Linking application and Lean runtime/.test(name) ? 'Lean'
      : /^Compiling/.test(name) ? 'C'
      : /Planning|Linking|required runtime|symbols|launcher/.test(name) ? 'link' : 'output';
    groups[group] += seconds;
  });
  return Object.entries(groups).filter(([, seconds]) => seconds >= 0.05).map(([name, seconds]) => `${name} ${seconds.toFixed(1)}s`).join(' · ');
}

function runtimeCommand(target, entry, args) {
  if (target === 'node') return [process.execPath, [entry, ...args]];
  const own = jsRuntime === target;
  if (target === 'bun') return [own ? process.execPath : 'bun', [entry, ...args]];
  return [own ? process.execPath : 'deno', ['run', '-A', entry, ...args]];
}

/** The running program: started after each good build, stopped before the next. */
function createRunner() {
  let child, exited;
  return {
    running() { return !!child && child.exitCode === null && child.signalCode === null; },
    async stop() {
      if (!child || child.exitCode !== null || child.signalCode !== null) { child = undefined; return; }
      const current = child;
      child = undefined;
      current.kill('SIGTERM');
      const timer = setTimeout(() => current.kill('SIGKILL'), 5000);
      await exited;
      clearTimeout(timer);
    },
    start(command, args, { cwd, label, env = process.env, rewrite }) {
      const started = spawn(command, args, { cwd, stdio: ['ignore', rewrite ? 'pipe' : 'inherit', 'inherit'], windowsHide: true, env });
      if (rewrite) {
        let pending = '';
        started.stdout.setEncoding('utf8');
        started.stdout.on('data', chunk => {
          const lines = (pending + chunk).split('\n');
          pending = lines.pop();
          if (lines.length) process.stdout.write(lines.map(rewrite).join('\n') + '\n');
        });
        started.stdout.on('end', () => { if (pending) process.stdout.write(rewrite(pending) + '\n'); });
      }
      child = started;
      exited = new Promise(resolve => started.once('exit', (code, signal) => {
        if (child === started) {
          child = undefined;
          say(signal ? `${label} stopped (${signal}); waiting for changes` : `${label} exited with code ${code}; waiting for changes`);
        }
        resolve();
      }));
      started.once('error', error => say(`Could not start ${label}: ${error.code === 'ENOENT' ? `${command} is not installed` : error.message}`));
    },
  };
}

/** hooks (for templates and tools that drive lasm dev, such as a full-stack
 * template): onBuilt({ target, input, output, result }) after each good build of
 * an output; routes(request, response) → true when handled, for the browser
 * output's server (for example an API proxy to the Node server). */
export async function runDev(options, hooks = {}) {
  const { createBuildService } = await import('./dev-build-service.mjs');
  const { findApplicationProject } = await import('./application-sources.mjs');
  const source = resolve(options.input);
  if (!existsSync(source)) (await import('./application-cli.mjs')).assertSourceExists(options.input);
  const project = findApplicationProject(source) ?? dirname(source);
  const target = options.target;
  // The browser target's dev server (docs/BROWSER.md) builds and serves dist/ itself.
  if (target === 'browser' && options.outputs.length === 1 && !hooks.routes && !hooks.onBuilt) {
    let browserDev;
    try { browserDev = await import('./browser/browser-dev.mjs'); }
    catch (error) { if (error.code === 'ERR_MODULE_NOT_FOUND') throw new Error('The browser target is not part of this Lasm version yet (docs/BROWSER.md).'); throw error; }
    return browserDev.runBrowserDev({ input: options.input, release: options.profile === 'release', watch: options.watch ?? true,
      port: options.port ?? 5173, host: options.host ?? '127.0.0.1', output: options.output });
  }
  // Servers built by lasm dev read their static files at run time instead of
  // embedding them (Lasm.Fetch's embed_dir!), so a rebuilt browser app needs no
  // server rebuild. Set before the build worker starts (it copies the environment).
  process.env.LASM_DEV_SERVER = '1';
  // Several outputs build at once, one long-lived worker each, when memory allows
  // (each link peaks around 1.5 GiB): the project's Lake work runs once, under
  // its lock, then each program elaborates and links alongside the others.
  // LASM_DEV_WORKERS=1 builds them one after the other.
  const workers = Math.max(1, Math.min(options.outputs.length, Number(process.env.LASM_DEV_WORKERS) || (totalmem() >= 6 * 2 ** 30 ? 2 : 1)));
  const service = createBuildService({ workers });
  const runner = createRunner();
  // A server and a browser app (node=Server.lean,browser=Client.lean): one URL.
  // The server runs on a private port behind a proxy on the user's port, which
  // adds live reload; the browser app is built into --output, where the server
  // serves it. No separate browser server.
  const oneUrl = options.run && options.outputs.some(o => runtimeTargets.includes(o.target)) && options.outputs.some(o => o.target === 'browser');
  const devProxy = oneUrl ? await import('./dev-proxy.mjs') : undefined;
  const serverPort = oneUrl ? await devProxy.freePort() : undefined;
  const publicUrl = `http://${options.host ?? '127.0.0.1'}:${options.port ?? (Number(process.env.PORT) || 3000)}/`;
  let lastBuilt = new Map(), changeAt, editorChecked = false;
  const tty = process.stderr.isTTY;
  let building = false, queued = false, previous = snapshot(project), lastGood, stopping = false, server;
  const browserOutput = resolve(options.output ?? join(project, '.lake/lasm/browser-dev'));
  const status = text => { if (tty) process.stderr.write(`\r\x1b[K${color('2', '[lasm dev] ' + text)}`); };
  const clearStatus = () => { if (tty) process.stderr.write('\r\x1b[K'); };

  // The server program behind the proxy (one URL), on its private port.
  const restartProgram = async program => {
    await runner.stop();
    const [command, args] = runtimeCommand(program.target, join(program.output, 'main.mjs'), options.args);
    // The program listens on a private port behind the proxy: its own
    // "Listening on http://127.0.0.1:<private port>" names the user's URL instead.
    const privateUrl = new RegExp(`\\bhttps?://(?:127\\.0\\.0\\.1|localhost|0\\.0\\.0\\.0|\\[::1?\\]):${serverPort}\\b/?`, 'g');
    runner.start(command, args, { cwd: process.cwd(), label: basename(program.input), env: { ...process.env, PORT: String(serverPort), HOST: '127.0.0.1' },
      rewrite: line => line.replace(privateUrl, publicUrl) });
    await devProxy.waitForPort(serverPort);
  };

  const rebuild = async (reason, { force = false } = {}) => {
    if (building) { queued = true; return; }
    building = true;
    const next = snapshot(project);
    const changed = changedFiles(previous, next);
    // Nothing changed (an editor touched a file, or the build wrote its own files): no rebuild.
    if (!force && !changed.length) { building = false; changeAt = undefined; return; }
    previous = next;
    if (reason) say(reason === 'change' ? `${changed.slice(0, 3).map(file => relative(project, file)).join(', ')}${changed.length > 3 ? ` and ${changed.length - 3} more` : ''} changed; rebuilding` : reason);
    const stages = [], started = performance.now(), changedAt = changeAt ?? started;
    changeAt = undefined;
    try {
      // Every output builds before any is used, so a server and its client stay in step.
      // An output whose sources did not change (its import closure) keeps its last build.
      let allCached = true;
      const toBuild = options.outputs.filter(entry =>
        force || !lastBuilt.has(entry) || !devProxy || devProxy.affects(project, resolve(entry.input), changed));
      // Incremental rebuilds only: a first (cold) build compiles the whole library's C
      // and would double the memory peak (5 GiB on a CI runner); its outputs build one
      // after the other, each in its own worker, which warms both.
      const concurrent = service.workers > 1 && toBuild.length > 1 && toBuild.every(entry => lastBuilt.has(entry));
      const outputStages = new Map();
      let restarting;
      const buildOne = async entry => {
        const own = concurrent ? [] : stages;
        outputStages.set(entry, own);
        const result = await service.build(resolve(entry.input), { profile: options.profile, verbose: options.verbose,
          ...(concurrent ? { releaseAfterImports: true } : {}),
          ...(entry.target === 'browser' ? { output: browserOutput } : {}) }, {
          target: entry.target === 'node' ? undefined : entry.target,
          slot: options.outputs.indexOf(entry),
          onProgress: event => {
            if (own.at(-1)?.stage !== event.stage) own.push({ stage: event.stage, at: performance.now() });
            status((options.outputs.length > 1 ? entry.target + ': ' : '') + event.stage + '…');
          },
          onLog: text => { clearStatus(); process.stderr.write(text + '\n'); },
        });
        allCached &&= !!result.cacheHit;
        const item = { ...entry, result, output: entry.target === 'browser' ? browserOutput : result.edgeOutput ?? result.output, finished: performance.now() };
        lastBuilt.set(entry, item);
        // One URL, concurrent outputs: restart the server while the browser app still builds
        // (pages reload once every output is built).
        if (concurrent && oneUrl && server && runtimeTargets.includes(entry.target)) { restarting = restartProgram(item); restarting.catch(() => {}); }
        return item;
      };
      if (concurrent) {
        // All settle before any error is reported, so no build is left running into the next one.
        const results = await Promise.allSettled(toBuild.map(buildOne));
        const failure = results.find(r => r.status === 'rejected');
        if (failure) throw failure.reason;
      } else for (const entry of toBuild) await buildOne(entry);
      const built = options.outputs.map(entry => toBuild.includes(entry) ? lastBuilt.get(entry) : { ...lastBuilt.get(entry), unchanged: true });
      const end = performance.now();
      clearStatus();
      // LASM_DEV_TRACE=1: each output's stages with their start times (CI's edit-to-reload job).
      if (process.env.LASM_DEV_TRACE) for (const [entry, list] of outputStages) say(`trace ${entry.target}: ${list.filter((x, i) => !/^Compiling application module (?!1 of)/.test(x.stage) || i === 0)
        .map(x => `${((x.at - started) / 1000).toFixed(2)} ${x.stage}`).join(' | ')} | ${((lastBuilt.get(entry).finished - started) / 1000).toFixed(2)} done`);
      const stageSummary = concurrent
        ? toBuild.map(entry => `${entry.target}: ${summarizeStages(outputStages.get(entry), lastBuilt.get(entry).finished)}`).join('; ') + '; concurrently'
        : summarizeStages(stages, end);
      say(`${color('32', allCached ? 'Up to date' : 'Built')} in ${((end - started) / 1000).toFixed(1)} s${allCached ? '' : ` (${stageSummary})`}`
        + `${options.profile === 'release' ? ' — release profile' : ''}`);
      lastGood = built;
      if (!editorChecked) { editorChecked = true; await (await import('./editor.mjs')).autoSetupEditor(source, { log: text => say(text.replace(/^\[lasm\] /, '')) }); }
      for (const item of built) if (!item.unchanged) await hooks.onBuilt?.(item);
      if (!options.run) { /* rebuild only */ }
      else if (oneUrl) {
        const program = built.find(o => runtimeTargets.includes(o.target));
        if (restarting) await restarting;
        else if (!program.unchanged || !runner.running()) await restartProgram(program);
        if (!server) {
          server = await devProxy.startDevProxy({ port: options.port ?? (Number(process.env.PORT) || 3000), host: options.host ?? '127.0.0.1', upstreamPort: serverPort });
          say(`Open ${color('1', server.url)}: ${basename(program.input)} with ${built.filter(o => o.target === 'browser').map(o => basename(o.input)).join(', ')}, live reload.`);
        } else {
          server.reload();
          say(`Reloaded ${((performance.now() - changedAt) / 1000).toFixed(1)} s after the change${built.some(o => o.unchanged) ? ` (unchanged: ${built.filter(o => o.unchanged).map(o => basename(o.input)).join(', ')})` : ''}.`);
        }
      }
      else for (const { target, input, output } of built) {
        if (edgeOnlyTargets.includes(target))
          say(`${relative(process.cwd(), output) || output} is up to date; your platform's local server (for example npx wrangler dev) serves it.`);
        else if (target === 'browser') {
          if (!server) {
            const { startStaticServer } = await import('./browser/static-server.mjs');
            server = await startStaticServer(output, { port: options.port ?? 5173, host: options.host ?? '127.0.0.1', liveReload: true, routes: hooks.routes });
            say(`Serving ${relative(process.cwd(), output) || output} at ${color('1', server.url)} with live reload (open it in your browser).`);
          } else server.reload();
        } else {
          await runner.stop();
          const [command, args] = runtimeCommand(target, join(output, 'main.mjs'), options.args);
          runner.start(command, args, { cwd: process.cwd(), label: basename(input) });
        }
      }
    } catch (error) {
      clearStatus();
      const detail = [error.stdout, error.stderr].filter(Boolean).join('\n').trim();
      const text = formatLeanDiagnostics(detail || error.message, project);
      process.stderr.write(text.slice(-12000) + '\n');
      if (detail && !text.includes(error.message.split('\n')[0]) && !/Command failed/.test(error.message)) process.stderr.write(error.message.split('\n')[0] + '\n');
      // An unexpected internal error (not a Lean diagnostic): its stack and where to report it.
      const { isInternalError, bugReportLine } = await import('./application-cli.mjs');
      if (isInternalError(error)) process.stderr.write(`${error.stack ?? ''}\n${bugReportLine}\n`);
      server?.report(error.message.split('\n')[0]);
      say(color('31', `Build failed after ${((performance.now() - started) / 1000).toFixed(1)} s`) + (lastGood ? '; the last good build keeps running. Fix the error and save.' : '. Fix the error and save.'));
    } finally {
      // Lake writes lake-manifest.json during a build (the first one creates it):
      // that is the build's own output, not a change to rebuild for.
      const after = snapshot(project);
      for (const [file, hash] of after) if (generatedByBuild(file) && previous.get(file) !== hash) previous.set(file, hash);
      building = false;
      if (queued && !stopping) { queued = false; setTimeout(() => rebuild('change'), 0); }
    }
  };

  let timer;
  const watcher = watchProject(project, () => { changeAt ??= performance.now(); clearTimeout(timer); timer = setTimeout(() => rebuild('change'), 120); });
  const files = projectFiles(project).length;
  say(`Watching ${files} file${files === 1 ? '' : 's'} in ${relative(process.cwd(), project) || '.'} (${watcher.mode}); target ${options.outputs.map(o => o.target).join(', ')}, ${options.profile} profile. Ctrl+C stops.`);
  process.stdin.setEncoding?.('utf8');
  if (process.stdin.isTTY || process.env.LASM_DEV_STDIN) process.stdin.on('data', text => { if (text.trim() === 'rs') rebuild('Rebuilding (rs)', { force: true }); });
  await rebuild('Building ' + relative(process.cwd(), source), { force: true });
  return new Promise(resolveExit => {
    const stop = async () => {
      if (stopping) return; stopping = true;
      clearTimeout(timer); watcher.close();
      await runner.stop(); await server?.close?.(); await service.close();
      process.stdin.pause?.();
      resolveExit(0);
    };
    process.once('SIGINT', stop); process.once('SIGTERM', stop);
  });
}

