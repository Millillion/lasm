// Every platform Conduit runs on, and how its own local tooling serves it:
// the build (an npm script) and the command that serves the build on a port
// ({port}; {data} is a new, empty directory for the run). test/api.mjs --platform NAME and E2E_PLATFORM=NAME npm run
// test:e2e run the official suites against that command, on a fresh
// database (DATABASE_PATH, where the platform reads the environment).
// The tools themselves (deno, docker, sam, vercel, netlify, func, …) must be
// on PATH; CI (.github/workflows/conduit.yml) installs pinned versions.
// Nothing here needs an account or deploys anything.
import { spawn, spawnSync } from 'node:child_process';
import { mkdtempSync, rmSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('..', import.meta.url));

// SAM leaves its emulation containers to its own clean-up.
const samStop = 'docker ps -aq --filter label=sam.cli.container.type | xargs -r docker rm -f';

export const platforms = {
  node: {
    build: 'build',
    serve: 'node dist/server/main.mjs',
    store: 'node:sqlite (a file)',
  },
  bun: {
    build: 'build:bun',
    serve: 'bun bun/main.mjs',
    store: 'bun:sqlite (a file)',
  },
  deno: {
    build: 'build:deno',
    serve: 'deno run -A deno/main.mjs',
    store: 'node:sqlite in Deno (a file)',
  },
  // Deno Deploy's build, on Deno KV: the Deno CLI's local KV (a SQLite file
  // under DENO_DIR, here the run's own directory).
  'deno-deploy': {
    build: 'build:deno-deploy',
    serve: 'DENO_DIR={data}/deno deno run -A --unstable-kv deno/main.mjs',
    store: 'Deno KV (deno run --unstable-kv: a local file)',
  },
  // `vercel build` (offline) output in Vercel's edge-runtime package; the
  // store is memory (Vercel Edge has no store of its own): one copy per isolate.
  'vercel-edge': {
    build: 'build:vercel-edge',
    serve: 'node test/vercel-edge-serve.mjs {port}',
    store: 'memory (one copy per isolate)',
  },
  // `netlify build` (offline) output, served by `netlify dev --offline`
  // (Netlify's local edge runtime, Deno), with its local Netlify Blobs.
  'netlify-edge': {
    build: 'build:netlify-edge',
    serve: 'netlify dev --offline --no-open --port {port}',
    host: 'localhost',
    store: 'Netlify Blobs (netlify dev: local blobs)',
  },
  // The Supabase CLI's local stack (supabase start) and supabase functions
  // serve; the store is the stack's Postgres, through its REST API.
  'supabase-edge': {
    build: 'build:supabase-edge',
    serve: 'node test/supabase-serve.mjs {port}',
    store: 'Postgres (table conduit_kv, through Supabase\'s REST API)',
  },
  workers: {
    build: 'build:workers',
    // Its local D1 in the run's own directory: each run starts empty.
    serve: 'wrangler dev --port {port} --ip 127.0.0.1 --persist-to {data}',
    store: 'Cloudflare D1 (wrangler dev: local D1)',
  },
  // The Node build in a container (Dockerfile): read-only, 512 MB, the
  // database on the image's /data volume.
  docker: {
    build: 'build:docker',
    serve: 'docker run --rm --init --name conduit-{port} --read-only --tmpfs /tmp --memory=512m --memory-swap=512m -p 127.0.0.1:{port}:3000 conduit',
    stop: 'docker rm -f conduit-{port}',
    ownDatabase: true,
    store: 'node:sqlite on the /data volume',
  },
  // AWS SAM's local API Gateway in front of the .zip package in Lambda's
  // nodejs24.x image (warm containers: one instance, as Lambda keeps it).
  lambda: {
    build: 'build:lambda',
    serve: 'sam local start-api -t deploy/lambda/template.yaml --port {port} --host 127.0.0.1 --warm-containers EAGER --parameter-overrides JwtSecret=local-test-secret',
    stop: samStop,
    // A fresh container: the template's DATABASE_PATH (sam local would take
    // a DATABASE_PATH from this environment instead).
    ownDatabase: true,
    store: 'node:sqlite in /tmp (per instance)',
  },
  // The same API Gateway in front of the container image (deploy/lambda-image).
  'lambda-image': {
    build: 'build:lambda-image',
    serve: 'sam local start-api -t deploy/lambda-image/template.yaml --port {port} --host 127.0.0.1 --warm-containers EAGER --parameter-overrides JwtSecret=local-test-secret',
    stop: samStop,
    // A fresh container: the template's DATABASE_PATH (sam local would take
    // a DATABASE_PATH from this environment instead).
    ownDatabase: true,
    store: 'node:sqlite in /tmp (per instance)',
  },
  // `vercel build` (offline) output, served by Vercel's own Node launcher
  // (@vercel/node's dev server, which `vercel dev` runs) in Lambda's Node 24
  // image: Vercel Functions run on AWS Lambda.
  vercel: {
    build: 'build:vercel',
    serve: 'node test/vercel-serve.mjs {port}',
    store: 'node:sqlite in /tmp (per instance)',
  },
  // netlify dev listens on localhost (IPv6 or IPv4, whichever it gets).
  netlify: {
    build: 'build:netlify',
    serve: 'netlify dev --offline --no-open --port {port}',
    host: 'localhost',
    store: 'node:sqlite in the temporary directory (per instance)',
  },
  azure: {
    build: 'build:azure',
    serve: 'cd azure-functions && func start --port {port}',
    store: 'node:sqlite in the temporary directory (per instance)',
  },
  gcf: {
    build: 'build:gcf',
    serve: 'cd gcf && node node_modules/@google-cloud/functions-framework/build/src/main.js --target=lasm --port={port}',
    store: 'node:sqlite in the temporary directory (per instance)',
  },
};

/** The URL `name` serves on `port`. */
export function baseUrl(name, port) {
  return `http://${platforms[name]?.host ?? '127.0.0.1'}:${port}`;
}

/** The command that serves `name` on `port`, keeping its data in `data`. */
export function serveCommand(name, port, data) {
  const platform = platforms[name];
  if (!platform) throw new Error(`Unknown platform ${name}; one of ${Object.keys(platforms).join(', ')}`);
  return platform.serve.replaceAll('{port}', String(port)).replaceAll('{data}', JSON.stringify(data));
}

/**
 * Starts platform `name` on 127.0.0.1:`port` with a new, empty data directory
 * (DATABASE_PATH is in it). Returns the child (a shell, in its own process
 * group unless `detached` is false) and `stop`, which ends it, runs the
 * platform's own clean-up and removes the data.
 */
export function startServer(name, port, { stdio = ['ignore', 'inherit', 'inherit'], detached = process.platform !== 'win32' } = {}) {
  const data = mkdtempSync(join(tmpdir(), `conduit-${name}-`));
  const env = { ...process.env, PORT: String(port), HOST: '127.0.0.1', DATABASE_PATH: join(data, 'conduit.db') };
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
