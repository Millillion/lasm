// Every platform Tandem runs on, and how its own local tooling serves it:
// the build (an npm script) and the command that serves the build on a port
// ({port}; {data} is a new, empty directory for the run). test/protocol.mjs,
// test/simulate.mjs and test/fuzz.mjs --platform NAME run against that
// command, on a fresh store. The tools (bun, deno, wrangler, docker) must be
// on PATH; CI (.github/workflows/tandem-platforms.yml) installs pinned
// versions. Nothing here needs an account or deploys anything.
//
// Not here: the function platforms (Lambda, Vercel, Netlify, Azure, GCF),
// Fastly and WASI: a sync server needs connections that outlive a request or
// a store every instance shares (README.md, "Platforms").
import { spawn, spawnSync } from 'node:child_process';
import { mkdtempSync, rmSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('..', import.meta.url));

export const platforms = {
  node: { build: 'build', serve: 'node dist/server/main.mjs', store: 'node:sqlite (a file)', ws: true },
  bun: { build: 'build:bun', serve: 'bun bun/main.mjs', store: 'bun:sqlite (a file)', ws: true },
  deno: { build: 'build:deno', serve: 'deno run -A deno/main.mjs', store: 'node:sqlite in Deno (a file)', ws: true },
  workers: {
    build: 'build:workers',
    // Its local D1 in the run's own directory: each run starts empty.
    serve: 'wrangler dev --port {port} --ip 127.0.0.1 --persist-to {data}',
    store: 'Cloudflare D1 (wrangler dev: local D1)',
    ws: false,
  },
  // The Node build in a container (Dockerfile): read-only, 512 MB, the store
  // on the image's /data volume.
  docker: {
    build: 'build:docker',
    serve: 'docker run --rm --init --name tandem-{port} --read-only --tmpfs /tmp --memory=512m --memory-swap=512m -e TANDEM_POLL_SECONDS -p 127.0.0.1:{port}:3000 tandem',
    stop: 'docker rm -f tandem-{port}',
    ownDatabase: true,
    store: 'node:sqlite on the /data volume',
    ws: true,
  },
};

/** The URL `name` serves on `port`. */
export function baseUrl(name, port) {
  return `http://127.0.0.1:${port}`;
}

/** The command that serves `name` on `port`, keeping its data in `data`. */
export function serveCommand(name, port, data) {
  const platform = platforms[name];
  if (!platform) throw new Error(`Unknown platform ${name}; one of ${Object.keys(platforms).join(', ')}`);
  return platform.serve.replaceAll('{port}', String(port)).replaceAll('{data}', JSON.stringify(data));
}

/** Starts platform `name` on 127.0.0.1:`port` with a new, empty data directory. */
export function startServer(name, port, { stdio = ['ignore', 'inherit', 'inherit'], detached = process.platform !== 'win32' } = {}) {
  const data = mkdtempSync(join(tmpdir(), `tandem-${name}-`));
  const env = { ...process.env, PORT: String(port), HOST: '127.0.0.1', DATABASE_PATH: join(data, 'tandem.db'),
                TANDEM_POLL_SECONDS: '2' };
  if (platforms[name].ownDatabase) delete env.DATABASE_PATH;
  const child = spawn(serveCommand(name, port, data), { shell: true, cwd: root, stdio, detached, env });
  let stopped = false;
  const stop = () => {
    if (stopped) return;
    stopped = true;
    if (child.exitCode === null) {
      if (detached) { try { process.kill(-child.pid, 'SIGTERM'); } catch { child.kill('SIGTERM'); } } else child.kill('SIGTERM');
    }
    const cleanUp = platforms[name].stop;
    if (cleanUp) spawnSync(cleanUp.replaceAll('{port}', String(port)), { shell: true, cwd: root, stdio: 'ignore', timeout: 60_000 });
    rmSync(data, { recursive: true, force: true });
  };
  return { child, stop, data };
}
