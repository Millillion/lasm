// Runs the platform sample applications in Linux container images with Docker:
// read-only root and application directories, a writable /tmp, a 512 MB memory
// limit without swap and Docker's default seccomp profile. Postgres for the
// interop examples runs in a sibling container. Images without Node get an
// official Node release (checked against nodejs.org's SHASUMS256) mounted
// read-only. Then the deploy/Dockerfile recipe is built and checked over HTTP.
//   node run-containers.mjs APPS_DIR RESULT.json [IMAGE_SET]
// IMAGE_SET: comma-separated names from scripts/platform/images.json, and
// `recipe` for the Dockerfile recipe (default: everything).
import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';
import { createHash, randomUUID } from 'node:crypto';
import { cpSync, existsSync, mkdirSync, mkdtempSync, readFileSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('../../', import.meta.url));
const [appsArg, resultArg, onlyArg] = process.argv.slice(2);
const only = onlyArg?.split(',');
assert.ok(appsArg && resultArg, 'Usage: node run-containers.mjs APPS_DIR RESULT.json [IMAGE_SET]');
const apps = resolve(appsArg), resultFile = resolve(resultArg);
const config = JSON.parse(readFileSync(join(root, 'scripts/platform/images.json'), 'utf8'));
const arch = { x64: 'x64', arm64: 'arm64' }[process.arch];
assert.ok(arch, `Unsupported architecture ${process.arch}`);
const result = { platform: `${process.platform}-${process.arch}`, apps: JSON.parse(readFileSync(join(apps, 'apps.json'), 'utf8')),
  startedAt: new Date().toISOString(), runs: [] };
const save = () => writeFileSync(resultFile, JSON.stringify(result, null, 2) + '\n');
const docker = (args, options = {}) => {
  const run = spawnSync('docker', args, { encoding: 'utf8', timeout: 900_000, maxBuffer: 64 * 1024 * 1024, ...options });
  if (run.error) throw run.error;
  return run;
};
const must = (args, options) => {
  const run = docker(args, options);
  assert.equal(run.status, 0, `docker ${args.join(' ')}: ${run.stderr}`);
  return run.stdout.trim();
};
// Registries rate-limit anonymous pulls per IP address, which CI runners share.
// CI preloads pinned images from its cache (scripts/ci/image-cache.mjs).
async function pull(image) {
  if (docker(['image', 'inspect', image]).status === 0) return;
  for (let attempt = 1; ; attempt++) {
    const run = docker(['pull', '-q', image]);
    if (run.status === 0) return;
    assert.ok(attempt < 6 && /toomanyrequests|rate|timeout|TLS|connection/i.test(run.stderr), `docker pull -q ${image}: ${run.stderr}`);
    console.log(`Retrying docker pull ${image} (${run.stderr.trim()})`);
    await new Promise(done => setTimeout(done, 30_000 * attempt));
  }
}
const cache = mkdtempSync(join(tmpdir(), 'lasm-platform-node-'));
const sums = new Map();
async function officialNode(version) {
  const name = `node-v${version}-linux-${arch}`, directory = join(cache, name);
  if (existsSync(directory)) return directory;
  const base = `https://nodejs.org/dist/v${version}/`;
  if (!sums.has(version)) {
    const response = await fetch(base + 'SHASUMS256.txt', { signal: AbortSignal.timeout(60_000) });
    assert.ok(response.ok, `SHASUMS256 for Node ${version}: HTTP ${response.status}`);
    sums.set(version, await response.text());
  }
  const expected = sums.get(version).split('\n').find(line => line.endsWith(`  ${name}.tar.xz`))?.split(' ')[0];
  assert.match(expected ?? '', /^[a-f0-9]{64}$/, `No checksum for ${name}.tar.xz`);
  const response = await fetch(base + `${name}.tar.xz`, { signal: AbortSignal.timeout(600_000) });
  assert.ok(response.ok, `Node ${version}: HTTP ${response.status}`);
  const bytes = Buffer.from(await response.arrayBuffer());
  assert.equal(createHash('sha256').update(bytes).digest('hex'), expected, `Checksum mismatch for ${name}.tar.xz`);
  writeFileSync(join(cache, `${name}.tar.xz`), bytes);
  const untar = spawnSync('tar', ['-xJf', join(cache, `${name}.tar.xz`), '-C', cache], { encoding: 'utf8' });
  assert.equal(untar.status, 0, untar.stderr);
  return directory;
}

const network = 'lasm-platform-' + randomUUID().slice(0, 8), postgres = network + '-pg';
const databaseUrl = `postgres://postgres:postgres@${postgres}:5432/postgres`;
const limits = ['--read-only', '--tmpfs', '/tmp', '--memory=512m', '--memory-swap=512m'];
let failed = false;
try {
  must(['network', 'create', network]);
  await pull(config.postgres);
  must(['run', '-d', '--name', postgres, '--network', network, '-e', 'POSTGRES_PASSWORD=postgres', config.postgres]);
  for (let i = 0; ; i++) {
    if (docker(['exec', postgres, 'pg_isready', '-U', 'postgres']).status === 0) break;
    assert.ok(i < 120, 'Postgres did not become ready');
    await new Promise(done => setTimeout(done, 1000));
  }
  for (const entry of config.images.filter(item => !only || only.includes(item.name))) {
    const run = { name: entry.name, image: entry.image, claim: entry.claim };
    result.runs.push(run); save();
    try {
      await pull(entry.image);
      // A loaded `docker save` archive has no repository digest; its image ID is the pinned one.
      run.imageDigest = must(['image', 'inspect', '--format', '{{if .RepoDigests}}{{index .RepoDigests 0}}{{else}}{{.Id}}{{end}}', entry.image]);
      let image = entry.image;
      if (entry.prepare) {
        // Documented prerequisites of a minimal image (for example libatomic1 for Node 26).
        image = `${network}-${entry.name}`.toLowerCase().replace(/[^a-z0-9.-]/g, '-');
        must(['build', '-q', '-t', image, '-'], { input: `FROM ${entry.image}\nRUN ${entry.prepare}\n` });
        run.prepare = entry.prepare;
      }
      const mounts = ['-v', `${apps}:/apps:ro`, '-v', `${join(root, 'scripts')}:/checks:ro`];
      let node = 'node';
      if (entry.node) { mounts.push('-v', `${await officialNode(entry.node)}:/opt/node:ro`); node = '/opt/node/bin/node'; }
      const args = ['run', '--rm', '--network', network, ...limits, ...mounts, '-e', `DATABASE_URL=${databaseUrl}`,
        image, node, '/checks/platform/run-checks.mjs', '/apps', ...(entry.expectNodeError ? ['--expect-node-error'] : [])];
      const started = performance.now();
      const out = docker(args);
      run.seconds = Math.round((performance.now() - started) / 100) / 10;
      const line = out.stdout.trim().split('\n').pop();
      try { run.report = JSON.parse(line); } catch { run.stdout = out.stdout.slice(-3000); }
      run.ok = out.status === 0 && run.report?.ok === true && run.report.appsWritable === false
        && (!entry.glibc || run.report.glibc === entry.glibc) && (!entry.node || run.report.node === 'v' + entry.node);
      if (!run.ok) run.stderr = out.stderr.slice(-3000);
    } catch (error) { run.ok = false; run.error = error.message; }
    failed ||= !run.ok;
    console.log(`${run.ok ? 'ok  ' : 'FAIL'} ${entry.name} (${entry.image}${entry.node ? ' + Node ' + entry.node : ''})`
      + (run.report ? ` node ${run.report.node}, glibc ${run.report.glibc}` : ''));
    save();
  }
  if (!only || only.includes('recipe')) {
    // The documented container recipe, built as written, reached from outside.
    const run = { name: 'recipe', recipe: 'deploy/Dockerfile', claim: 'Docker/Kubernetes and container platforms' };
    result.runs.push(run);
    try {
      const context = mkdtempSync(join(tmpdir(), 'lasm-recipe-'));
      cpSync(join(apps, 'hono'), join(context, 'dist'), { recursive: true });
      const tag = network + '-recipe';
      must(['build', '-q', '--build-arg', `NODE_IMAGE=${config.recipeNodeImage}`, '-f', join(root, 'deploy/Dockerfile'), '-t', tag, context]);
      const id = must(['run', '-d', '--network', network, ...limits, '-p', '127.0.0.1::8080', '-e', `DATABASE_URL=${databaseUrl}`, tag]);
      try {
        const port = must(['port', id, '8080/tcp']).split('\n')[0].split(':').pop();
        let health;
        for (let i = 0; i < 120 && !health?.ok; i++) {
          health = await fetch(`http://127.0.0.1:${port}/health`).catch(() => undefined);
          if (!health?.ok) await new Promise(done => setTimeout(done, 500));
        }
        const login = await fetch(`http://127.0.0.1:${port}/login`, { method: 'POST', headers: { 'content-type': 'application/json' },
          body: JSON.stringify({ user: 'recipe-' + randomUUID() }) });
        const token = (await login.json()).token;
        const todos = await fetch(`http://127.0.0.1:${port}/todos`, { headers: { authorization: `Bearer ${token}` } });
        run.user = must(['exec', id, 'id', '-un']);
        run.ok = health?.status === 200 && login.status === 200 && todos.status === 200 && run.user === 'node';
        run.statuses = { health: health?.status, login: login.status, todos: todos.status };
      } finally {
        run.logs = docker(['logs', id]).stdout.slice(-2000);
        docker(['rm', '-f', id]);
      }
    } catch (error) { run.ok = false; run.error = error.message; }
    failed ||= !run.ok;
    console.log(`${run.ok ? 'ok  ' : 'FAIL'} recipe (deploy/Dockerfile with ${config.recipeNodeImage})`);
  }
} finally {
  docker(['rm', '-f', postgres]); docker(['network', 'rm', network]);
  result.finishedAt = new Date().toISOString(); result.ok = !failed; save();
}
process.exit(failed ? 1 : 0);
