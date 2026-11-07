// Shared by the claim-4 harnesses (docs/TESTING.md#dependable-tooling): the
// error corpus, the metamorphic build tests and the fault injection. They run
// an installed `lasm` (the packed candidate or the published @lasm/cli) as a
// user would, in fresh temporary projects, and judge only what it prints,
// its exit status and the files it writes.
import { spawn, spawnSync } from 'node:child_process';
import { mkdirSync, mkdtempSync, writeFileSync, readdirSync, readFileSync, statSync, lstatSync, rmSync, chmodSync } from 'node:fs';
import { createHash } from 'node:crypto';
import { tmpdir } from 'node:os';
import { dirname, join, relative } from 'node:path';

/** Runs `lasm args…` under Node with a time limit; kills the whole process
 * group on timeout (a hang is a failure, not a wait). `killWhen`: a function
 * (text so far) => true to SIGKILL the group at that moment (fault injection);
 * `interruptWhen`: the same for SIGINT to the group, as Ctrl+C in a terminal. */
export function runLasm(lasm, args, { cwd, env = {}, timeoutMs = 300_000, node = process.execPath, killWhen, interruptWhen, stdin = 'ignore' } = {}) {
  return new Promise(resolve => {
    const started = Date.now();
    const child = spawn(node, [lasm, ...args], { cwd, env: { ...baseEnvironment(), ...env }, stdio: [stdin, 'pipe', 'pipe'],
      detached: process.platform !== 'win32', windowsHide: true });
    let stdout = '', stderr = '', timedOut = false, killed = false, interrupted = false;
    const kill = () => {
      // Windows: taskkill /T ends the whole tree (child.kill ends only Node).
      try { if (process.platform === 'win32') spawnSync('taskkill', ['/pid', String(child.pid), '/T', '/F'], { windowsHide: true }); else process.kill(-child.pid, 'SIGKILL'); } catch {}
    };
    const check = () => {
      if (killWhen && !killed && killWhen(stdout + stderr)) { killed = true; kill(); }
      if (interruptWhen && !interrupted && interruptWhen(stdout + stderr)) {
        interrupted = true;
        try { if (process.platform === 'win32') child.kill('SIGINT'); else process.kill(-child.pid, 'SIGINT'); } catch {}
      }
    };
    child.stdout.on('data', chunk => { stdout += chunk; check(); });
    child.stderr.on('data', chunk => { stderr += chunk; check(); });
    const timer = setTimeout(() => { timedOut = true; kill(); }, timeoutMs);
    child.once('error', error => { clearTimeout(timer); resolve({ code: null, signal: null, stdout, stderr: stderr + String(error), timedOut, killed, interrupted, ms: Date.now() - started }); });
    child.once('close', (code, signal) => {
      clearTimeout(timer);
      // The group may still hold workers after the leader exits: reap it.
      if (timedOut || killed) kill();
      resolve({ code, signal, stdout, stderr, timedOut, killed, interrupted, ms: Date.now() - started });
    });
  });
}

/** The environment of every run: no terminal, no browser, no inherited Lasm
 * settings, no proxy (cases add what they test). */
export function baseEnvironment() {
  const env = { ...process.env, CI: '1', BROWSER: 'none', NO_COLOR: '1' };
  for (const name of Object.keys(env))
    if (/^LASM_|^npm_|proxy$|^NODE_OPTIONS$|^NODE_USE_ENV_PROXY$/i.test(name) && name !== 'LASM_TOOLCHAIN_CACHE') delete env[name];
  return env;
}

// A JavaScript stack frame: "    at fn (file:///x.mjs:1:2)", "    at node:internal/…",
// "    at async Promise.all (index 0)" and "    at /abs/path.js:3:4".
const stackFrame = /^\s+at\s+(?:async\s+)?(?:\S+\s+)?\(?(?:file:\/\/|node:|\/|[A-Za-z]:\\|<anonymous>|index \d+)[^\n]*$/m;
// Node's raw file-system message: "EACCES: permission denied, mkdir '/x/.lake'",
// or without a path: "ENOSPC: no space left on device, write".
const rawErrno = /^E[A-Z]{2,}: [a-z][^,\n]*, [a-z]+(?: '[^'\n]*')?$/m;
// A C library message with nothing to say where or what to do.
const bareStrerror = /^(?:Permission denied|No such file or directory|Not a directory|Is a directory|No space left on device|Read-only file system|Operation not permitted|File exists|Disk quota exceeded)\.?$/m;
const internal = /If this looks like a Lasm bug, please report it/;

/** Problems with what a failing command printed: [] when the message is clear. */
export function messageProblems(text) {
  const problems = [];
  const trimmed = text.trim();
  if (!trimmed) problems.push('printed nothing');
  if (stackFrame.test(text)) problems.push('prints a JavaScript stack trace');
  if (/\bnode:internal\//.test(text)) problems.push('mentions node:internal');
  if (/^(?:Uncaught )?(?:TypeError|ReferenceError|RangeError|SyntaxError|EvalError|AssertionError)(?: \[\w+\])?: /m.test(text)) problems.push('prints a raw JavaScript error');
  if (internal.test(text)) problems.push('reports an internal error (bug report line)');
  if (rawErrno.test(text)) problems.push('prints a raw file-system error (code, syscall and path, no explanation)');
  if (bareStrerror.test(text)) problems.push('prints a bare system error without a path');
  if (/\[object Object\]|^undefined$|^null$|^Error:?$/m.test(text)) problems.push('prints an uninformative value');
  if (/Unhandled|unhandled rejection|ERR_UNHANDLED_REJECTION/i.test(text)) problems.push('reports an unhandled rejection');
  return problems;
}

export function temporaryDirectory(prefix, base = tmpdir()) {
  mkdirSync(base, { recursive: true });
  return mkdtempSync(join(base, `lasm-${prefix}-`));
}

export function writeTree(directory, files) {
  for (const [name, content] of Object.entries(files)) {
    const path = join(directory, name);
    mkdirSync(dirname(path), { recursive: true });
    writeFileSync(path, content);
  }
}

/** Removes a tree even where a test made parts of it read-only. */
export function removeTree(path) {
  const writable = p => {
    let entry;
    try { entry = lstatSync(p); } catch { return; }
    if (entry.isSymbolicLink()) return;
    try { chmodSync(p, entry.isDirectory() ? 0o755 : 0o644); } catch {}
    if (entry.isDirectory()) for (const name of readdirSync(p)) writable(join(p, name));
  };
  writable(path);
  rmSync(path, { recursive: true, force: true, maxRetries: 5, retryDelay: 200 });
}

/** name → SHA-256 of every file under `directory` (sorted; no symlink is followed). */
export function treeHashes(directory, { exclude = () => false } = {}) {
  const result = {};
  const walk = path => {
    for (const name of readdirSync(path).sort()) {
      const child = join(path, name), rel = relative(directory, child).replaceAll('\\', '/');
      if (exclude(rel)) continue;
      const entry = lstatSync(child);
      if (entry.isDirectory()) walk(child);
      else if (entry.isSymbolicLink()) result[rel] = 'symlink';
      else result[rel] = createHash('sha256').update(readFileSync(child)).digest('hex');
    }
  };
  walk(directory);
  return result;
}

/** name → mtime (ms) of every file under `directory`. */
export function treeTimes(directory) {
  const result = {};
  const walk = path => {
    for (const name of readdirSync(path).sort()) {
      const child = join(path, name), entry = statSync(child);
      if (entry.isDirectory()) walk(child); else result[relative(directory, child).replaceAll('\\', '/')] = entry.mtimeMs;
    }
  };
  walk(directory);
  return result;
}

/** The differences between two tree listings, for a failure message. */
export function treeDifferences(a, b) {
  const names = [...new Set([...Object.keys(a), ...Object.keys(b)])].sort();
  return names.filter(name => a[name] !== b[name]).map(name => `${name}: ${a[name] === undefined ? 'missing' : 'present'} → ${b[name] === undefined ? 'missing' : b[name] === a[name] ? 'same' : 'changed'}`);
}

/** Parses `--name value` options. */
export function options(argv, defaults) {
  const result = { ...defaults };
  for (let i = 0; i < argv.length; i++) {
    const match = /^--([a-z-]+)$/.exec(argv[i]);
    if (!match || !(match[1] in defaults)) throw new Error(`Unknown option ${argv[i]}. Options: ${Object.keys(defaults).map(k => '--' + k).join(', ')}`);
    result[match[1]] = typeof defaults[match[1]] === 'boolean' ? true : argv[++i];
  }
  return result;
}

/** "0.3.10" ≥ "0.3.9"; prerelease candidates (0.1.0-experimental.N) count as newest. */
export function versionAtLeast(version, minimum) {
  if (/-experimental\./.test(version) || version === 'source') return true;
  const parts = v => v.split('-')[0].split('.').map(Number);
  const [a, b] = [parts(version), parts(minimum)];
  for (let i = 0; i < 3; i++) if (a[i] !== b[i]) return a[i] > b[i];
  return true;
}

export function summary(text) {
  if (process.env.GITHUB_STEP_SUMMARY) try { writeFileSync(process.env.GITHUB_STEP_SUMMARY, text + '\n', { flag: 'a' }); } catch {}
}

export const tail = (text, lines = 15) => text.trimEnd().split('\n').slice(-lines).join('\n');
