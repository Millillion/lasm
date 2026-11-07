// The edge platforms the site server (ServerEdge.lean) runs on, and how each
// one's own local tooling serves it: the build (an npm script), the command
// that puts a site's files in the platform's store (`seed`), and the command
// that serves the build on a port. {port} is the port, {data} a new, empty
// directory for the run, {site} the site's directory. The tools (viceroy,
// wrangler, deno) must be on PATH; CI (.github/workflows/folio-platforms.yml)
// installs pinned versions. Nothing here needs an account or deploys anything.
import { spawn, spawnSync } from 'node:child_process';
import { mkdtempSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { entries, fastlyToml } from '../tools/kv.mjs';

const root = fileURLToPath(new URL('..', import.meta.url));

// Deno's default KV database is per --location (and DENO_DIR): the seeding
// script and the server share it.
const deno = 'DENO_DIR={data}/deno deno run -A --unstable-kv --location http://folio.test/';

export const platforms = {
  // Viceroy, Fastly's local simulator (what fastly compute serve runs), with
  // a fastly.toml whose local KV Store holds the site (tools/kv.mjs fastly):
  // a fresh instance of the program for every request.
  fastly: {
    build: 'build:fastly',
    seed: data => writeFileSync(join(data, 'fastly.toml'), fastlyToml(data + '/site')),
    serve: 'exec viceroy serve --addr 127.0.0.1:{port} -C {data}/fastly.toml bin/main.wasm',
    store: 'fastly',
  },
  // wrangler dev (workerd, Miniflare's local Workers KV in the run's own
  // directory); the site is put there by wrangler kv bulk put --local.
  workers: {
    build: 'build:workers',
    seed: data => {
      writeFileSync(join(data, 'kv.json'), JSON.stringify(entries(data + '/site')));
      return 'wrangler kv bulk put {data}/kv.json --binding folio --local --persist-to {data}/state';
    },
    serve: 'exec wrangler dev --port {port} --ip 127.0.0.1 --persist-to {data}/state',
    store: 'workers or memory',
  },
  // Deno Deploy's build in the Deno CLI, on Deno KV (deno run --unstable-kv:
  // a local SQLite database under DENO_DIR, here in the run's directory).
  'deno-deploy': {
    build: 'build:deno-deploy',
    seed: () => `${deno} tools/kv.mjs deno {data}/site`,
    serve: `exec ${deno} deno/main.mjs`,
    store: 'deno',
  },
};

const fill = (command, port, data) => command.replaceAll('{port}', String(port)).replaceAll('{data}', data);

/** A new run directory for `name`; `site/` in it is filled by the caller. */
export function runDirectory(name) {
  return mkdtempSync(join(tmpdir(), `folio-${name}-`));
}

/** Puts the site in `data`/site into `name`'s store (in `data`). */
export function seed(name, data) {
  const command = platforms[name].seed(data);
  if (typeof command !== 'string') return;
  const r = spawnSync(fill(command, 0, data), { shell: true, cwd: root, stdio: 'inherit', timeout: 300_000, env: { ...process.env, CI: '1' } });
  if (r.status !== 0) throw new Error(`${name}: seeding the store failed (${r.status ?? r.signal})`);
}

/**
 * Serves `name` on 127.0.0.1:`port` with the store in `data`. Returns `stop`,
 * which ends the server (its whole process group).
 */
export function startServer(name, port, data) {
  const platform = platforms[name];
  if (!platform) throw new Error(`Unknown platform ${name}; one of ${Object.keys(platforms).join(', ')}`);
  const child = spawn(fill(platform.serve, port, data), { shell: true, cwd: root, stdio: ['ignore', 'inherit', 'inherit'], detached: true,
    env: { ...process.env, PORT: String(port), HOST: '127.0.0.1', CI: '1' } });
  let stopped = false;
  const exited = new Promise(r => child.once('exit', r));
  const stop = async () => {
    if (stopped) return;
    stopped = true;
    if (child.exitCode === null) {
      try { process.kill(-child.pid, 'SIGTERM'); } catch { child.kill('SIGTERM'); }
      const timer = setTimeout(() => { try { process.kill(-child.pid, 'SIGKILL'); } catch {} }, 10_000);
      await exited;
      clearTimeout(timer);
    }
  };
  return { child, stop };
}

/** Removes a run directory. */
export function removeRunDirectory(data) {
  rmSync(data, { recursive: true, force: true });
}
