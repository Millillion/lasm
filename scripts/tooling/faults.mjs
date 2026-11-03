// Claim 4 (docs/TESTING.md#fault-injection): the installer and the build under
// failure. Each scenario injects one fault into a real `lasm build` (node
// target, release profile) and requires one of two outcomes:
//   - the build succeeds and its output equals a clean build's, byte for byte; or
//   - it fails within its time limit with a clear message (scripts/tooling/lib.mjs
//     messageProblems: no stack trace, no raw errno text, …), and once the
//     fault is gone a plain rerun succeeds with the clean build's bytes.
// Never a hang, a stack trace, or a damaged cache that a later build reuses.
//
//   killed build     SIGKILL the process tree at each build stage, then rerun;
//   killed install   SIGKILL while a cold tool cache is being filled (npm
//                    packages, and HTTPS downloads), then rerun;
//   network          HTTPS downloads through a proxy that cuts tunnels part
//                    way (recovers) or every time (clear error), then rerun;
//   full disk        the tool cache on a small file system, and the project on
//                    one filled to a few MB (loop mounts: needs passwordless sudo);
//   read-only        an empty read-only tool cache, a filled one made
//                    read-only, a read-only project build cache;
//   corrupted cache  bytes flipped or files removed in the tool cache
//                    (artifacts, derived, objects) and the project build cache.
//
//   killed npm install  SIGKILL `npm install` of the CLI (--package: a .tgz or
//                    @lasm/cli@VERSION), rerun it, then build with it;
//
//   node scripts/tooling/faults.mjs --lasm PATH/bin/lasm.mjs [--package SPEC] [--only NAME,…] [--work DIR] [--report FILE]
import { createServer } from 'node:http';
import { connect } from 'node:net';
import { spawnSync } from 'node:child_process';
import { chmodSync, cpSync, existsSync, mkdirSync, openSync, readSync, writeSync, closeSync, readdirSync, lstatSync, statSync, rmSync, writeFileSync, statfsSync } from 'node:fs';
import { dirname, join } from 'node:path';
import { runLasm, messageProblems, temporaryDirectory, writeTree, removeTree, treeHashes, treeDifferences, options, summary, tail } from './lib.mjs';

const fixture = {
  'lean-toolchain': 'leanprover/lean4:v4.35.0\n',
  'lakefile.toml': 'name = "app"\nversion = "0.1.0"\ndefaultTargets = ["app"]\n\n[[lean_lib]]\nname = "App"\n\n[[lean_exe]]\nname = "app"\nroot = "Main"\n',
  'App.lean': 'def greeting (name : String) : String := s!"Hello, {name}!"\n',
  'Main.lean': 'import App\n\ndef main : IO Unit := IO.println (greeting "faults")\n',
};
const posixUser = process.platform !== 'win32' && process.getuid?.() !== 0;
const canSudo = process.platform === 'linux' && spawnSync('sudo', ['-n', 'true']).status === 0;

/** Every file under `directory` (no symlinks followed), with its size. */
function files(directory) {
  const out = [];
  const walk = path => {
    let names; try { names = readdirSync(path); } catch { return; }
    for (const name of names) {
      const child = join(path, name), entry = lstatSync(child);
      if (entry.isDirectory()) walk(child); else if (entry.isFile()) out.push({ path: child, size: entry.size });
    }
  };
  walk(directory);
  return out;
}

function flipByte(file, size) {
  const fd = openSync(file, 'r+'), at = Math.floor(size / 2), byte = Buffer.alloc(1);
  readSync(fd, byte, 0, 1, at); byte[0] ^= 0x5a; writeSync(fd, byte, 0, 1, at); closeSync(fd);
}

function setTreeMode(directory, writable) {
  const walk = path => {
    const entry = lstatSync(path);
    if (entry.isSymbolicLink()) return;
    if (entry.isDirectory()) { if (writable) chmodSync(path, 0o755); for (const name of readdirSync(path)) walk(join(path, name)); if (!writable) chmodSync(path, 0o555); }
    else chmodSync(path, writable ? 0o644 | (entry.mode & 0o111) : 0o444 | (entry.mode & 0o111));
  };
  walk(directory);
}

/** A CONNECT proxy that passes TLS tunnels through and destroys a tunnel
 * once it has carried `cutAfter` bytes toward the client, for the first
 * `cuts` tunnels that get that far (Infinity: every tunnel). */
async function cuttingProxy({ cutAfter, cuts }) {
  const sockets = new Set();
  let cut = 0, tunnels = 0;
  const server = createServer((req, res) => { res.writeHead(405); res.end(); });
  server.on('connect', (request, client, head) => {
    tunnels++;
    const [host, port] = request.url.split(':');
    const upstream = connect(Number(port) || 443, host);
    sockets.add(client); sockets.add(upstream);
    let carried = 0;
    upstream.once('connect', () => { client.write('HTTP/1.1 200 Connection Established\r\n\r\n'); if (head.length) upstream.write(head); client.pipe(upstream); });
    upstream.on('data', chunk => {
      carried += chunk.length;
      if (carried > cutAfter && cut < cuts) { cut++; client.destroy(); upstream.destroy(); return; }
      client.write(chunk);
    });
    const close = () => { client.destroy(); upstream.destroy(); };
    upstream.on('error', close); client.on('error', close); upstream.on('close', close); client.on('close', close);
  });
  await new Promise(resolve => server.listen(0, '127.0.0.1', resolve));
  return { url: `http://127.0.0.1:${server.address().port}`, stats: () => ({ tunnels, cut }),
    close: () => { for (const s of sockets) s.destroy(); return new Promise(resolve => server.close(resolve)); } };
}

/** A small ext4 file system of `mib` MiB, in an image file, owned by this
 * user (loop mount with sudo: CI runners). `evacuate()` keeps its contents
 * but moves them to the big disk at the same path (the fault is gone, the
 * state it left stays). */
function smallFileSystem(path, mib) {
  const image = path + '.img';
  mkdirSync(path, { recursive: true });
  const sh = (...args) => { const r = spawnSync(args[0], args.slice(1), { encoding: 'utf8' }); if (r.status !== 0) throw new Error(`${args.join(' ')}: ${r.stderr}`); };
  sh('truncate', '-s', `${mib}M`, image);
  sh('mkfs.ext4', '-q', '-F', '-m', '0', image);
  sh('sudo', '-n', 'mount', '-o', 'loop', image, path);
  sh('sudo', '-n', 'chown', `${process.getuid()}:${process.getgid()}`, path);
  sh('sudo', '-n', 'rm', '-rf', join(path, 'lost+found'));
  let mounted = true;
  const unmount = () => { if (mounted) { spawnSync('sudo', ['-n', 'umount', path]); mounted = false; } rmSync(image, { force: true }); };
  return { path, unmount, evacuate: () => {
    const saved = path + '.saved';
    cpSync(path, saved, { recursive: true, verbatimSymlinks: true });
    unmount();
    cpSync(saved, path, { recursive: true, verbatimSymlinks: true });
    removeTree(saved);
  } };
}

/** Fills `directory`'s file system until `leaveMib` MiB are free. */
function fill(directory, leaveMib) {
  const file = join(directory, '.filler'), { bavail, bsize } = statfsSync(directory);
  const bytes = Number(bavail) * Number(bsize) - leaveMib * 1024 * 1024;
  if (bytes > 0) { const fd = openSync(file, 'w'); const block = Buffer.alloc(1024 * 1024); for (let left = bytes; left > 0; left -= block.length) writeSync(fd, block, 0, Math.min(block.length, left)); closeSync(fd); }
  return () => rmSync(file, { force: true });
}

export async function runFaults({ lasm, pkg, only, work, log = console.log }) {
  const results = [];
  const root = temporaryDirectory('faults', work);
  const warmCache = join(root, 'warm-cache');
  const env = (cache = warmCache, extra = {}) => ({ LASM_TOOLCHAIN_CACHE: cache, ...extra });
  const project = name => { const d = join(root, name); mkdirSync(d, { recursive: true }); writeTree(d, fixture); return d; };
  const build = (directory, environment = env(), extra = {}) => runLasm(lasm, ['build', 'Main.lean', '--output', 'dist'], { cwd: directory, env: environment, timeoutMs: 1_200_000, ...extra });
  const output = directory => existsSync(join(directory, 'dist')) ? treeHashes(join(directory, 'dist')) : {};
  let reference;

  /** One scenario: `inject` runs the faulty build(s) and returns the result to
   * judge; `recover` removes the fault; then a plain rerun must give the reference. */
  async function scenario(name, { directory, inject, recover = () => {}, environment = env(), allowSuccess = true, expect }) {
    if (only && !only.some(o => name.startsWith(o))) return;
    const problems = [];
    let outcome = '';
    try {
      const faulty = await inject();
      const text = faulty.stdout + faulty.stderr;
      if (faulty.timedOut) problems.push(`hung (no end within ${faulty.ms / 1000} s): ${tail(text, 8)}`);
      else if (faulty.code === 0 && !faulty.killed) {
        outcome = 'succeeded despite the fault';
        if (!allowSuccess) problems.push('succeeded although the fault should stop it');
        const d = treeDifferences(reference, output(directory));
        if (d.length) problems.push(`succeeded with different bytes (${d.length} files: ${d.slice(0, 6).join('; ')})`);
      } else if (!faulty.killed) {
        outcome = 'failed with: ' + tail(text, 3).replace(/\n/g, ' | ');
        const message = messageProblems(text);
        if (message.length) problems.push(`unclear failure (${message.join('; ')}): ${tail(text, 12)}`);
        if (expect && !expect.test(text)) problems.push(`the message does not say ${expect}: ${tail(text, 6)}`);
      } else outcome = 'killed';
      await recover();
      const retry = await build(directory, environment);
      if (retry.code !== 0) problems.push(`the rerun after removing the fault failed (exit ${retry.code}${retry.timedOut ? ', hung' : ''}): ${tail(retry.stdout + retry.stderr, 12)}`);
      else {
        const d = treeDifferences(reference, output(directory));
        if (d.length) problems.push(`the rerun reused damaged state: ${d.length} files differ from a clean build: ${d.slice(0, 8).join('; ')}`);
      }
    } catch (error) { problems.push(error.stack ?? String(error)); }
    results.push({ name, status: problems.length ? 'failed' : 'passed', outcome, problems });
    log(`${problems.length ? 'FAIL ' : 'ok   '} ${name}${outcome ? ` (${outcome.slice(0, 200)})` : ''}${problems.length ? ':\n      ' + problems.join('\n      ') : ''}`);
  }

  try {
    // The reference: a clean build with a cold cache, which also fills the warm cache.
    const clean = project('reference');
    const first = await build(clean);
    if (first.code !== 0) throw new Error(`the reference build failed: ${tail(first.stdout + first.stderr, 30)}`);
    reference = output(clean);
    log(`     reference build: ${(first.ms / 1000).toFixed(1)} s, ${Object.keys(reference).length} files`);
    const stages = [...new Set((first.stdout + first.stderr).match(/^\[lasm\] [A-Z][^\n—]*?(?= —|$)/gm) ?? [])].map(s => s.slice(7).trim()).filter(s => !/^Build ready/.test(s));
    log(`     build stages: ${stages.join(' | ')}`);

    // Killed builds: SIGKILL at the start of every stage the reference printed.
    for (const [index, stage] of stages.entries()) {
      const directory = project(`killed-build-${index}`);
      await scenario(`killed build at "${stage}"`, { directory,
        inject: () => build(directory, env(), { killWhen: text => text.includes(stage) }) });
    }
    // Killed while delivering over an existing output, and in a second build of an edited project.
    {
      const directory = project('killed-redelivery');
      await build(directory);
      writeFileSync(join(directory, 'App.lean'), fixture['App.lean'].replace('Hello', 'Hey'));
      await scenario('killed build of an edit while replacing the output', { directory,
        inject: () => build(directory, env(), { killWhen: text => text.includes('Verifying and writing application output') }),
        recover: () => writeFileSync(join(directory, 'App.lean'), fixture['App.lean']) });
    }

    // Killed installs: a cold cache filled from the npm packages, then over HTTPS.
    for (const [source, delays] of [['npm', [1_500, 4_000, 10_000]], ['https', [3_000, 15_000, 45_000]]]) for (const delay of delays) {
      const cache = join(root, `killed-install-${source}-${delay}`), directory = project(`killed-install-${source}-${delay}`);
      const environment = env(cache, source === 'https' ? { LASM_ARTIFACT_SOURCE: 'https' } : {});
      await scenario(`killed install (${source}) after ${delay / 1000} s`, { directory, environment,
        inject: () => { const started = Date.now(); return build(directory, environment, { killWhen: () => Date.now() - started > delay }); } });
      removeTree(cache);
    }

    // A killed `npm install` of the CLI itself, rerun, then a build with what it installed.
    if (pkg) for (const delay of [1_000, 3_000, 8_000]) {
      const install = join(root, `killed-npm-${delay}`), directory = project(`killed-npm-${delay}`);
      mkdirSync(install); writeFileSync(join(install, 'package.json'), '{"private":true}\n');
      const npmCli = join(dirname(process.execPath), process.platform === 'win32' ? 'node_modules/npm/bin/npm-cli.js' : '../lib/node_modules/npm/bin/npm-cli.js');
      const npmInstall = extra => runLasm(npmCli, ['install', pkg, '--no-audit', '--no-fund'], { cwd: install, timeoutMs: 900_000, ...extra });
      const installed = () => ['@lasm/compiler', '@lasm/cli'].map(name => join(install, 'node_modules', name, 'bin/lasm.mjs')).find(existsSync);
      const problems = [];
      const killed = await npmInstall({ killWhen: (() => { const started = Date.now(); return () => Date.now() - started > delay; })() });
      const again = await npmInstall();
      if (again.code !== 0) problems.push(`npm install after a killed one failed: ${tail(again.stdout + again.stderr, 10)}`);
      else {
        const result = await runLasm(installed(), ['build', 'Main.lean', '--output', 'dist'], { cwd: directory, env: env(), timeoutMs: 1_200_000 });
        if (result.code !== 0) problems.push(`the build with the reinstalled CLI failed: ${tail(result.stdout + result.stderr, 10)}`);
        else { const d = treeDifferences(reference, output(directory)); if (d.length) problems.push(`the reinstalled CLI built different bytes: ${d.slice(0, 6).join('; ')}`); }
      }
      if (!only || only.some(o => 'killed npm install'.startsWith(o))) {
        results.push({ name: `killed npm install after ${delay / 1000} s`, status: problems.length ? 'failed' : 'passed', outcome: killed.killed ? 'killed' : 'finished before the kill', problems });
        log(`${problems.length ? 'FAIL ' : 'ok   '} killed npm install after ${delay / 1000} s (${killed.killed ? 'killed' : 'finished before the kill'})${problems.length ? ':\n      ' + problems.join('\n      ') : ''}`);
      }
      removeTree(install);
    }

    // Network: tunnels cut part way through downloads.
    for (const [label, cuts, allowSuccess] of [['recovers from 3 cut connections', 3, true], ['every connection cut', Infinity, false]]) {
      const proxy = await cuttingProxy({ cutAfter: 4 * 1024 * 1024, cuts });
      const cache = join(root, `network-${cuts}`), directory = project(`network-${cuts}`);
      const proxied = env(cache, { LASM_ARTIFACT_SOURCE: 'https', HTTPS_PROXY: proxy.url, NODE_USE_ENV_PROXY: '1', LASM_DOWNLOAD_ATTEMPTS: '3' });
      try {
        await scenario(`network: ${label}`, { directory, allowSuccess, environment: env(cache, { LASM_ARTIFACT_SOURCE: 'https' }),
          inject: () => build(directory, proxied, { timeoutMs: 1_800_000 }), recover: () => proxy.close() });
        log(`     proxy: ${JSON.stringify(proxy.stats())}`);
      } finally { await proxy.close().catch(() => {}); removeTree(cache); }
    }

    // A full disk: the tool cache, then the project, on a small file system.
    if (canSudo) {
      for (const size of [64, 700]) {
        const disk = smallFileSystem(join(root, `full-cache-${size}`), size), directory = project(`full-cache-${size}`);
        try {
          await scenario(`full disk: a ${size} MiB tool cache`, { directory, environment: env(disk.path),
            inject: () => build(directory, env(disk.path)), recover: () => disk.evacuate() });
        } finally { disk.unmount(); removeTree(disk.path); }
      }
      for (const leave of [1, 4, 12]) {
        const disk = smallFileSystem(join(root, `full-project-${leave}`), 128), directory = join(disk.path, 'app');
        mkdirSync(directory); writeTree(directory, fixture);
        let empty;
        try {
          await scenario(`full disk: project with ${leave} MiB free`, { directory,
            inject: () => { empty = fill(disk.path, leave); return build(directory); }, recover: () => empty() });
        } finally { disk.unmount(); }
      }
    } else log('     full disk: skipped (no passwordless sudo to mount a small tmpfs)');

    // Read-only caches.
    if (posixUser) {
      const empty = join(root, 'read-only-empty-cache'), a = project('read-only-empty');
      mkdirSync(empty); chmodSync(empty, 0o555);
      await scenario('read-only: empty tool cache', { directory: a, environment: env(empty), allowSuccess: false, expect: /read-only-empty-cache/,
        inject: () => build(a, env(empty)), recover: () => chmodSync(empty, 0o755) });
      const b = project('read-only-filled');
      await scenario('read-only: filled tool cache', { directory: b,
        inject: () => { setTreeMode(warmCache, false); return build(b); }, recover: () => setTreeMode(warmCache, true) });
      const c = project('read-only-project-cache');
      await build(c);
      writeFileSync(join(c, 'App.lean'), fixture['App.lean'].replace('Hello', 'Hey'));
      await scenario('read-only: project build cache, after an edit', { directory: c,
        inject: () => { setTreeMode(join(c, '.lake'), false); return build(c); },
        recover: () => { setTreeMode(join(c, '.lake'), true); writeFileSync(join(c, 'App.lean'), fixture['App.lean']); } });
    }

    // Corrupted caches: one flipped byte in the largest file, and a removed file, per area.
    const areas = [['tool archive (artifacts)', () => join(warmCache, 'artifacts')], ['derived tools', () => join(warmCache, 'derived')],
      ['shared objects', () => join(warmCache, 'objects')], ['project build cache', directory => join(directory, '.lake', 'lasm')]];
    for (const [label, where] of areas) for (const damage of ['flipped byte', 'removed file']) {
      const directory = project(`corrupt-${label.replace(/\W+/g, '-')}-${damage.replace(' ', '-')}`);
      // The project cache is damaged in a built project; the tool cache is
      // damaged before a project that has never been built uses it.
      if (label === 'project build cache') { await build(directory); rmSync(join(directory, 'dist'), { recursive: true, force: true }); }
      await scenario(`corrupted ${label}: ${damage}`, { directory,
        inject: async () => {
          const candidates = files(where(directory)).filter(f => f.size > 0 && !/\.lock$|lasm-artifact\.json$|receipt/.test(f.path)).sort((x, y) => y.size - x.size);
          if (!candidates.length) throw new Error(`nothing to damage under ${where(directory)}`);
          const victim = candidates[damage === 'flipped byte' ? 0 : Math.floor(candidates.length / 2)];
          if (damage === 'flipped byte') flipByte(victim.path, victim.size); else rmSync(victim.path);
          log(`     damaged ${victim.path} (${damage})`);
          return build(directory);
        },
        // A clear failure may ask for lasm cache repair; the rerun follows that advice.
        recover: async () => { await runLasm(lasm, ['cache', 'repair'], { env: env(), timeoutMs: 600_000 }); } });
    }
  } finally {
    try { setTreeMode(warmCache, true); } catch {}
    removeTree(root);
  }
  return results;
}

if (process.argv[1]?.endsWith('faults.mjs')) {
  const opts = options(process.argv.slice(2), { lasm: '', package: '', only: '', work: '', report: '' });
  if (!opts.lasm) throw new Error('--lasm PATH/bin/lasm.mjs is required');
  const version = (await runLasm(opts.lasm, ['--version'], { timeoutMs: 60_000 })).stdout.trim();
  console.log(`Fault injection against ${version}`);
  const results = await runFaults({ lasm: opts.lasm, pkg: opts.package || undefined, only: opts.only ? opts.only.split(',') : undefined, work: opts.work || undefined });
  const failed = results.filter(r => r.status === 'failed');
  const line = `Fault injection: ${results.length - failed.length} scenarios end well, ${failed.length} do not`;
  console.log(line);
  summary(`### ${line}\n` + results.map(r => `- ${r.status === 'failed' ? '**failed**' : 'ok'} ${r.name}: ${r.outcome || ''}${r.problems.length ? ' — ' + r.problems.join('; ').slice(0, 500) : ''}`).join('\n'));
  if (opts.report) writeFileSync(opts.report, JSON.stringify({ version, results }, null, 2) + '\n');
  process.exitCode = failed.length ? 1 : 0;
}
