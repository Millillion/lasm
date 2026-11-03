// Every platform Porter runs on, and how its own local tooling serves it:
// the build (an npm script) and the command that serves the build on a port
// ({port}; {data} is a new, empty directory for the run). test/oracles.mjs,
// test/attacks.mjs and test/fuzz.mjs --platform NAME run against that
// command, on a fresh database, with the issuer (ISSUER) and the test
// configuration (PORTER_CONFIG, test/config.mjs) passed the platform's way:
// the environment, docker -e, SAM's --env-vars, or Workers' .dev.vars.
// The tools themselves (bun, deno, wrangler, docker, sam, vercel, netlify,
// func) must be on PATH; CI (.github/workflows/porter-platforms.yml) installs
// pinned versions. Nothing here needs an account or deploys anything.
//
// Not here: Fastly Compute and WASI, which have no Web Crypto (README.md,
// "Platforms").
import { spawn, spawnSync } from 'node:child_process';
import { mkdtempSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { testConfig } from './config.mjs';

const root = fileURLToPath(new URL('..', import.meta.url));

// SAM leaves its emulation containers to its own clean-up.
const samStop = 'docker ps -aq --filter label=sam.cli.container.type | xargs -r docker rm -f';

export const platforms = {
  node: { build: 'build', serve: 'node dist/server/main.mjs', store: 'node:sqlite (a file)' },
  bun: { build: 'build:bun', serve: 'bun bun/main.mjs', store: 'bun:sqlite (a file)' },
  deno: { build: 'build:deno', serve: 'deno run -A deno/main.mjs', store: 'node:sqlite in Deno (a file)' },
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
    serve: 'docker run --rm --init --name porter-{port} --read-only --tmpfs /tmp --memory=512m --memory-swap=512m -e ISSUER -e PORTER_CONFIG -p 127.0.0.1:{port}:3000 porter',
    stop: 'docker rm -f porter-{port}',
    ownDatabase: true,
    store: 'node:sqlite on the /data volume',
  },
  // AWS SAM's local API Gateway in front of the .zip package in Lambda's
  // nodejs24.x image (warm containers: one instance, as Lambda keeps it).
  lambda: {
    build: 'build:lambda',
    serve: 'sam local start-api -t deploy/lambda/template.yaml --port {port} --host 127.0.0.1 --warm-containers EAGER --env-vars {data}/sam-env.json',
    stop: samStop,
    ownDatabase: true,
    store: 'node:sqlite in /tmp (per instance)',
  },
  'lambda-image': {
    build: 'build:lambda-image',
    serve: 'sam local start-api -t deploy/lambda-image/template.yaml --port {port} --host 127.0.0.1 --warm-containers EAGER --env-vars {data}/sam-env.json',
    stop: samStop,
    ownDatabase: true,
    store: 'node:sqlite in /tmp (per instance)',
  },
  // `vercel build` (offline) output, served by Vercel's own Node launcher in
  // Lambda's Node 24 image: Vercel Functions run on AWS Lambda.
  vercel: { build: 'build:vercel', serve: 'node test/vercel-serve.mjs {port}', store: 'node:sqlite in /tmp (per instance)' },
  // The zip `netlify build` makes, with Netlify's bootstrap in the Lambda Node 24 image.
  netlify: { build: 'build:netlify', serve: 'node test/netlify-serve.mjs {port}', store: 'node:sqlite in the temporary directory (per instance)' },
  azure: { build: 'build:azure', serve: 'cd azure-functions && func start --port {port}', store: 'node:sqlite in the temporary directory (per instance)' },
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
 * (DATABASE_PATH is in it). Returns the child and `stop`, which ends it, runs
 * the platform's own clean-up and removes the data.
 */
export function startServer(name, port, { stdio = ['ignore', 'inherit', 'inherit'], detached = process.platform !== 'win32' } = {}) {
  const data = mkdtempSync(join(tmpdir(), `porter-${name}-`));
  const issuer = baseUrl(name, port), config = JSON.stringify(testConfig);
  const env = { ...process.env, PORT: String(port), HOST: '127.0.0.1', DATABASE_PATH: join(data, 'porter.db'),
                ISSUER: issuer, PORTER_CONFIG: config };
  if (platforms[name].ownDatabase) delete env.DATABASE_PATH;
  // wrangler dev reads the Worker's variables from .dev.vars beside
  // wrangler.toml (single quotes: dotenv keeps the JSON as it is); SAM reads
  // them from --env-vars.
  if (name === 'workers') writeFileSync(join(root, '.dev.vars'), `ISSUER='${issuer}'\nPORTER_CONFIG='${config}'\n`);
  writeFileSync(join(data, 'sam-env.json'), JSON.stringify({ Porter: { ISSUER: issuer, PORTER_CONFIG: config } }));
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
