// `lasm dev`: watch the project, rebuild incrementally (dev profile) in one
// long-lived build worker, and restart the program after each good build.
// Edge targets are rebuilt into their output directory for the platform's own
// local tool (wrangler dev, netlify dev, …), which Lasm never starts; browser
// output is served on localhost with live reload (src/browser/browser-dev.mjs).
// Lasm never opens a browser.
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
        if (!devTargets.includes(value)) throw new Error(`lasm dev --target accepts ${devTargets.join(', ')}, not "${value}"`);
        result.target = value;
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
  result.input = positional[0] ?? 'Main.lean';
  if (!result.input.endsWith('.lean')) throw new Error(`lasm dev expects a Lean source (Main.lean), not ${result.input}`);
  result.target ??= jsRuntime;
  for (const option of ['port', 'host', 'output', 'watch'])
    if (result[option] !== undefined && result.target !== 'browser') throw new Error(`--${option === 'watch' ? 'no-watch' : option} applies to lasm dev --target browser (servers read $PORT and $HOST)`);
  return result;
}

/** Files whose change needs a rebuild: Lean sources and Lake/npm configuration. */
export function relevantFile(name) {
  const file = basename(name);
  return file.endsWith('.lean') || ['lakefile.toml', 'lakefile.lean', 'lake-manifest.json', 'lean-toolchain', 'package.json', 'package-lock.json'].includes(file);
}
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

/** Recursive fs.watch where the platform has it, else polling (1 s). */
export function watchProject(directory, onEvent, { pollMs = 1000 } = {}) {
  try {
    const watcher = watch(directory, { recursive: true }, (event, name) => {
      if (!name) return onEvent();
      const parts = String(name).split(/[\\/]/);
      if (parts.slice(0, -1).some(ignoredDirectory)) return;
      if (relevantFile(String(name))) onEvent();
    });
    watcher.on('error', () => {});
    return { mode: 'events', close: () => watcher.close() };
  } catch {
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
    async stop() {
      if (!child || child.exitCode !== null || child.signalCode !== null) { child = undefined; return; }
      const current = child;
      child = undefined;
      current.kill('SIGTERM');
      const timer = setTimeout(() => current.kill('SIGKILL'), 5000);
      await exited;
      clearTimeout(timer);
    },
    start(command, args, { cwd, label }) {
      const started = spawn(command, args, { cwd, stdio: ['ignore', 'inherit', 'inherit'], windowsHide: true, env: process.env });
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

export async function runDev(options) {
  const { createBuildService } = await import('./dev-build-service.mjs');
  const { findApplicationProject } = await import('./application-sources.mjs');
  const source = resolve(options.input);
  if (!existsSync(source)) throw new Error(`${options.input} does not exist. Run lasm dev in the project directory, or name the Lean source.`);
  const project = findApplicationProject(source) ?? dirname(source);
  const target = options.target;
  // The browser target's dev server (docs/BROWSER.md) builds and serves dist/ itself.
  if (target === 'browser') {
    let browserDev;
    try { browserDev = await import('./browser/browser-dev.mjs'); }
    catch (error) { if (error.code === 'ERR_MODULE_NOT_FOUND') throw new Error('The browser target is not part of this Lasm version yet (docs/BROWSER.md).'); throw error; }
    return browserDev.runBrowserDev({ input: options.input, release: options.profile === 'release', watch: options.watch ?? true,
      port: options.port ?? 5173, host: options.host ?? '127.0.0.1', output: options.output });
  }
  const service = createBuildService();
  const runner = createRunner();
  const tty = process.stderr.isTTY;
  let building = false, queued = false, previous = snapshot(project), lastGood, stopping = false;
  const status = text => { if (tty) process.stderr.write(`\r\x1b[K${color('2', '[lasm dev] ' + text)}`); };
  const clearStatus = () => { if (tty) process.stderr.write('\r\x1b[K'); };

  const rebuild = async (reason, { force = false } = {}) => {
    if (building) { queued = true; return; }
    building = true;
    const next = snapshot(project);
    const changed = changedFiles(previous, next);
    if (!force && lastGood !== undefined && !changed.length) { building = false; return; }
    previous = next;
    if (reason) say(reason === 'change' ? `${changed.slice(0, 3).map(file => relative(project, file)).join(', ')}${changed.length > 3 ? ` and ${changed.length - 3} more` : ''} changed; rebuilding` : reason);
    const stages = [], started = performance.now();
    try {
      const result = await service.build(source, { profile: options.profile, verbose: options.verbose }, {
        target: target === 'node' ? undefined : target,
        onProgress: event => {
          if (stages.at(-1)?.stage !== event.stage) stages.push({ stage: event.stage, at: performance.now() });
          status(event.stage + '…');
        },
        onLog: text => { clearStatus(); process.stderr.write(text + '\n'); },
      });
      const end = performance.now();
      clearStatus();
      const output = result.edgeOutput ?? result.output;
      say(`${color('32', result.cacheHit ? 'Up to date' : 'Built')} in ${((end - started) / 1000).toFixed(1)} s${result.cacheHit ? '' : ` (${summarizeStages(stages, end)})`}`
        + `${options.profile === 'release' ? ' — release profile' : ''}`);
      lastGood = output;
      if (!options.run) { /* rebuild only */ }
      else if (edgeOnlyTargets.includes(target))
        say(`${relative(process.cwd(), output) || output} is up to date; your platform's local server (for example npx wrangler dev) serves it.`);
      else {
        await runner.stop();
        const entry = join(output, 'main.mjs');
        const [command, args] = runtimeCommand(target, entry, options.args);
        runner.start(command, args, { cwd: process.cwd(), label: basename(source) });
      }
    } catch (error) {
      clearStatus();
      const detail = [error.stdout, error.stderr].filter(Boolean).join('\n').trim();
      const text = formatLeanDiagnostics(detail || error.message, project);
      process.stderr.write(text.slice(-12000) + '\n');
      if (detail && !text.includes(error.message.split('\n')[0]) && !/Command failed/.test(error.message)) process.stderr.write(error.message.split('\n')[0] + '\n');
      say(color('31', `Build failed after ${((performance.now() - started) / 1000).toFixed(1)} s`) + (lastGood ? '; the last good build keeps running. Fix the error and save.' : '. Fix the error and save.'));
    } finally {
      building = false;
      if (queued && !stopping) { queued = false; setTimeout(() => rebuild('change'), 0); }
    }
  };

  let timer;
  const watcher = watchProject(project, () => { clearTimeout(timer); timer = setTimeout(() => rebuild('change'), 120); });
  const files = projectFiles(project).length;
  say(`Watching ${files} file${files === 1 ? '' : 's'} in ${relative(process.cwd(), project) || '.'} (${watcher.mode}); target ${target}, ${options.profile} profile. Ctrl+C stops.`);
  process.stdin.setEncoding?.('utf8');
  if (process.stdin.isTTY || process.env.LASM_DEV_STDIN) process.stdin.on('data', text => { if (text.trim() === 'rs') rebuild('Rebuilding (rs)', { force: true }); });
  await rebuild('Building ' + relative(process.cwd(), source), { force: true });
  return new Promise(resolveExit => {
    const stop = async () => {
      if (stopping) return; stopping = true;
      clearTimeout(timer); watcher.close();
      await runner.stop(); await service.close();
      process.stdin.pause?.();
      resolveExit(0);
    };
    process.once('SIGINT', stop); process.once('SIGTERM', stop);
  });
}

