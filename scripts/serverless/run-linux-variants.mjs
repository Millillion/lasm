// Linux variants: Alpine/musl images (node:*-alpine) and gVisor (runsc, the
// sandbox DigitalOcean App Platform and Cloud Run gen1 run containers in).
// Each server template's dist/ runs read-only with /tmp writable and 512 MB,
// answers the templates' HTTP checks and stops cleanly on `docker stop`; the
// probe program (subprocess, files, environment) prints its expected output;
// on Alpine the deploy/Dockerfile recipe is also built with the Alpine image.
// Std.Http needs the time zone database (its Date header), which Alpine images
// lack: the std-http template runs on Alpine with `apk add tzdata`, as
// docs/deploy/docker-kubernetes.md says.
//   node run-linux-variants.mjs WORK/apps.json RESULT.json [--images a,b] [--runtime runsc]
import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';
import { cpSync, mkdtempSync, readFileSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { checkContract, waitFor } from './http-contract.mjs';

const root = fileURLToPath(new URL('../../', import.meta.url));
const args = process.argv.slice(2);
const flag = name => { const i = args.indexOf(name); if (i < 0) return undefined; const [, value] = args.splice(i, 2); return value; };
const images = (flag('--images') ?? 'node:24.22.1-alpine,node:26.12.1-alpine').split(',');
const runtime = flag('--runtime');
const [appsArg, resultArg] = args;
assert.ok(appsArg && resultArg, 'Usage: node run-linux-variants.mjs WORK/apps.json RESULT.json [--images a,b] [--runtime runsc]');
const { apps } = JSON.parse(readFileSync(resolve(appsArg), 'utf8'));
const resultFile = resolve(resultArg);
const docker = (argv, options = {}) => spawnSync('docker', argv, { encoding: 'utf8', timeout: 900_000, maxBuffer: 64 * 1024 * 1024, ...options });
const must = argv => { const r = docker(argv); assert.equal(r.status, 0, `docker ${argv.join(' ')}: ${r.stderr}`); return r.stdout.trim(); };
const result = { platform: `${process.platform}-${process.arch}`, runtime: runtime ?? 'runc', startedAt: new Date().toISOString(), runs: [] };
if (runtime === 'runsc') result.runscVersion = spawnSync('runsc', ['--version'], { encoding: 'utf8' }).stdout.trim().split('\n')[0];
const save = () => writeFileSync(resultFile, JSON.stringify(result, null, 2) + '\n');
const runtimeArgs = runtime ? ['--runtime', runtime] : [];
const limits = ['--read-only', '--tmpfs', '/tmp', '--memory=512m', '--memory-swap=512m'];
let failed = false;

async function pull(image) {
  for (let attempt = 1; ; attempt++) {
    const r = docker(['pull', '-q', image]);
    if (r.status === 0) return;
    assert.ok(attempt < 6 && /toomanyrequests|rate|timeout|TLS|connection/i.test(r.stderr), `docker pull ${image}: ${r.stderr}`);
    await new Promise(done => setTimeout(done, 30_000 * attempt));
  }
}

async function server(run, image, dist, framework, label = 'dist') {
  const started = performance.now();
  const id = must(['run', '-d', ...runtimeArgs, ...limits, '-p', '127.0.0.1::8080', '-e', 'PORT=8080', '-e', 'HOST=0.0.0.0',
    ...(dist ? ['-v', `${dist}:/app:ro`, image, 'node', '/app/main.mjs'] : [image])]);
  try {
    const port = must(['port', id, '8080/tcp']).split('\n')[0].split(':').pop();
    const alive = () => docker(['inspect', '-f', '{{.State.Running}}', id]).stdout.trim() === 'true';
    await waitFor(`http://127.0.0.1:${port}/health`, { alive, timeoutMs: 120_000 }).catch(error => {
      throw new Error(error.message + '\n' + (docker(['logs', id]).stdout + docker(['logs', id]).stderr).slice(-2000));
    });
    run[`${label}ReadyMs`] = Math.round(performance.now() - started);
    const checks = await checkContract(`http://127.0.0.1:${port}`, framework);
    const bad = checks.filter(c => !c.ok);
    assert.equal(bad.length, 0, bad.map(c => `${c.name}: ${c.error}`).join('; '));
    run.memoryUsage = docker(['stats', '--no-stream', '--format', '{{.MemUsage}}', id]).stdout.trim();
    const stopping = performance.now();
    must(['stop', '-t', '20', id]);
    run[`${label}StopMs`] = Math.round(performance.now() - stopping);
    const code = Number(must(['inspect', '-f', '{{.State.ExitCode}}', id]));
    assert.equal(code, 0, 'docker stop (SIGTERM) ends the server with exit code 0');
  } finally { docker(['rm', '-f', id]); }
}

for (const image of images) {
  try { await pull(image); } catch (error) { result.runs.push({ image, ok: false, error: error.message }); failed = true; continue; }
  const imageInfo = docker(['run', '--rm', ...runtimeArgs, image, 'sh', '-c', 'node --version; (ldd --version 2>&1 || true) | head -1; cat /etc/os-release | grep PRETTY_NAME']).stdout.trim();
  for (const app of apps.filter(app => app.framework && app.packages.lambda || app.kind === 'program')) {
    const run = { image, app: app.name, imageInfo };
    result.runs.push(run); save();
    try {
      if (app.kind === 'program') {
        const r = docker(['run', '--rm', ...runtimeArgs, ...limits, '-e', 'LASM_PROBE=probe', '-v', `${app.dist}:/app:ro`, image, 'node', '/app/main.mjs']);
        run.stdout = r.stdout; run.stderr = r.stderr.slice(-2000);
        assert.equal(r.status, 0, r.stderr);
        assert.equal(r.stdout, app.expectedStdout);
      } else {
        let serverImage = image;
        if (/alpine/.test(image) && app.template === 'std-http') {
          serverImage = run.serverImage = `lasm-variant-tzdata-${process.pid}`;
          const build = docker(['build', '-q', '-t', serverImage, '-'], { input: `FROM ${image}\nRUN apk add --no-cache tzdata\n` });
          assert.equal(build.status, 0, build.stderr);
        }
        try { await server(run, serverImage, app.dist, app.framework); }
        finally { if (serverImage !== image) docker(['rmi', '-f', serverImage]); }
        // The documented recipe, built on this image (Alpine only: the
        // Debian recipe is covered by the launch platform tests).
        if (/alpine/.test(image) && app.template === 'hono') {
          const context = mkdtempSync(join(tmpdir(), 'lasm-variant-'));
          cpSync(app.dist, join(context, 'dist'), { recursive: true });
          const tag = `lasm-variant-${process.pid}-${app.name}`;
          must(['build', '-q', '--build-arg', `NODE_IMAGE=${image}`, '-f', join(root, 'deploy/Dockerfile'), '-t', tag, context]);
          try { await server(run, tag, undefined, app.framework, 'recipe'); } finally { docker(['rmi', '-f', tag]); }
        }
      }
      run.ok = true;
    } catch (error) { run.ok = false; run.error = error.message.slice(0, 3000); }
    failed ||= !run.ok;
    console.log(`${run.ok ? 'ok  ' : 'FAIL'} ${runtime ?? 'runc'} ${image} ${app.name}: ${run.ok ? `ready ${run.distReadyMs ?? '-'} ms, stop ${run.distStopMs ?? '-'} ms${run.recipeReadyMs ? `, recipe ready ${run.recipeReadyMs} ms` : ''}, ${run.memoryUsage ?? ''}` : run.error}`);
    save();
  }
}
result.finishedAt = new Date().toISOString(); result.ok = !failed; save();
process.exit(failed ? 1 : 0);
