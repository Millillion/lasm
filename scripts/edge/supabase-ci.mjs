// Supabase Edge Functions CI (run by scripts/edge/workers-ci.mjs in
// .github/workflows/workers.yml): builds the
// Hono template (lasm init --template hono --deploy supabase-edge) and
// examples/edge-pure with `lasm build --target supabase-edge` from this source
// checkout, then:
//   1. records the Asyncify edge link with emcc and derives the Node link
//      driver's recipe mode from it (scripts/edge/record-edge-link.mjs,
//      derive-edge-recipe.mjs; uploaded so it can be committed), and, once the
//      recipe has that mode, requires the Node driver's output to be
//      byte-identical to emcc's (compare-edge-link.mjs --suspend asyncify);
//   2. runs both outputs on Node 26 next to the JSPI build of the same program
//      (check-worker.mjs): size, startup and time per request, Asyncify vs JSPI;
//   3. serves both functions in the pinned Supabase edge runtime image
//      (supabase/edge-runtime v1.77.8, the image `supabase functions serve`
//      runs; pulled by digest from its GHCR copy, whose index digest is Docker
//      Hub's, through scripts/ci/image-cache.mjs) with
//      a main service that starts user workers as the Supabase CLI's does
//      (256 MB, 1 s soft / 2 s hard CPU), and checks every route, including
//      the blocking waits, plus whether the runtime has JSPI now.
// No Supabase account, no Supabase CLI, no deployment. Needs Docker,
// LASM_APPLICATION_RUNTIME, LASM_EDGE_RUNTIME, LASM_KEEP_LINK_WORK=1 and the
// managed Emscripten SDK (for the recording). The results, the runtime's log
// and the derived recipe are copied to RESULTS_DIR (default WORK_DIR).
//   node scripts/edge/supabase-ci.mjs WORK_DIR [RESULTS_DIR]
import { execFileSync, spawnSync } from 'node:child_process';
import { cpSync, existsSync, mkdirSync, readFileSync, writeFileSync, appendFileSync, readdirSync, statSync, rmSync, copyFileSync } from 'node:fs';
import { join, resolve, dirname } from 'node:path';
import { fileURLToPath } from 'node:url';
import { gzipSync } from 'node:zlib';
import { headlessEnvironment } from './headless.mjs';
import { apps } from './checks.mjs';

const root = resolve(dirname(fileURLToPath(import.meta.url)), '../..');
const work = resolve(process.argv[2]), resultsDir = resolve(process.argv[3] ?? process.argv[2]);
const run = (command, args, options = {}) => execFileSync(command, args, { stdio: 'inherit', env: headlessEnvironment(), ...options });
mkdirSync(work, { recursive: true });
const image = 'ghcr.io/supabase/edge-runtime:v1.77.8';
const MiB = 1048576;
// Supabase's limits (supabase.com/docs/guides/functions/limits, 2026-10-24).
const budget = { bundleBytes: 20 * MiB, memoryMiB: 256, cpuMsPerRequest: 2000 };
const results = { image, budget, apps: {} };
const failed = [];

// The apps.
const hono = join(work, 'hono'), pure = join(work, 'pure');
if (!existsSync(hono)) {
  run(process.execPath, [join(root, 'bin/lasm.mjs'), 'init', hono, '--template', 'hono', '--deploy', 'supabase-edge', '--deploy', 'workers']);
  const pkg = JSON.parse(readFileSync(join(hono, 'package.json'), 'utf8')); delete pkg.devDependencies;
  writeFileSync(join(hono, 'package.json'), JSON.stringify(pkg, null, 2) + '\n');
  run('npm', ['install', '--no-audit', '--no-fund'], { cwd: hono });
}
if (!existsSync(pure)) cpSync(join(root, 'examples/edge-pure'), pure, { recursive: true });
const passed = ['LASM_APPLICATION_RUNTIME', 'LASM_EDGE_RUNTIME', 'LASM_BUILD_JOBS', 'LASM_KEEP_LINK_WORK', 'LASM_LINK_DRIVER'].filter(key => process.env[key])
  .map(key => `${key}=${['LASM_BUILD_JOBS', 'LASM_KEEP_LINK_WORK', 'LASM_LINK_DRIVER'].includes(key) ? process.env[key] : resolve(process.env[key])}`);
const bounded = [join(root, 'scripts/full-lean/run-bounded.mjs'), '--', 'python3', join(root, 'scripts/full-lean/base-pages.py'), 'env', ...passed];
const lasmBuild = (project, target) => {
  const started = Date.now();
  run(process.execPath, [...bounded, process.execPath, join(root, 'bin/lasm.mjs'), 'build', 'Main.lean', '--target', target], { cwd: project });
  return (Date.now() - started) / 1000;
};
const size = dir => readdirSync(dir, { withFileTypes: true }).reduce((n, e) => n + (e.isDirectory() ? size(join(dir, e.name)) : statSync(join(dir, e.name)).size), 0);
const functionDir = project => {
  const functions = join(project, 'supabase/functions');
  const [name] = readdirSync(functions).filter(entry => existsSync(join(functions, entry, 'build-info.json')));
  return { name, directory: join(functions, name) };
};

for (const [name, project] of [['hono', hono], ['pure', pure]]) {
  const app = results.apps[name] = {};
  app.buildSeconds = lasmBuild(project, 'supabase-edge');
  const fn = app.function = functionDir(project);
  const info = JSON.parse(readFileSync(join(fn.directory, 'build-info.json'), 'utf8'));
  if (info.link.suspend !== 'asyncify') failed.push(`${name}: the supabase-edge link is ${info.link.suspend}, not asyncify`);
  const wasm = readFileSync(join(fn.directory, 'lasm/program.wasm.mjs'));
  app.bundle = { bytes: size(fn.directory), wasmModuleBytes: wasm.length, gzipBytes: gzipSync(Buffer.concat(readdirSync(join(fn.directory, 'lasm')).map(file => readFileSync(join(fn.directory, 'lasm', file))))).length };
  app.denoJson = JSON.parse(readFileSync(join(fn.directory, 'deno.json'), 'utf8'));
  // The JSPI build of the same program, for the comparison.
  app.workersBuildSeconds = lasmBuild(project, 'workers');
  for (const [which, dir] of [['asyncify', fn.directory], ['jspi', join(project, 'workers')]]) {
    const file = join(work, `${name}-node-${which}.json`);
    const result = spawnSync(process.execPath, [join(root, 'scripts/edge/check-worker.mjs'), dir, name, file, project], { stdio: 'inherit' });
    app[`node-${which}`] = existsSync(file) ? JSON.parse(readFileSync(file, 'utf8')) : { passed: false };
    if (result.status !== 0 || !app[`node-${which}`].passed) failed.push(`${name} on Node (${which})`);
  }
}

// 1. The Node link driver's Asyncify recording, from the pure example's kept link inputs.
const applications = join(pure, '.lake/lasm/applications');
const builds = readdirSync(applications).flatMap(app => readdirSync(join(applications, app)).filter(entry => entry.startsWith('.build-'))
  .map(entry => join(applications, app, entry))).filter(dir => existsSync(join(dir, 'link.rsp')))
  .sort((a, b) => statSync(b).mtimeMs - statSync(a).mtimeMs);
const guard = [join(root, 'scripts/full-lean/run-bounded.mjs'), '--', 'python3', join(root, 'scripts/full-lean/base-pages.py')];
const recording = join(work, 'asyncify-recording'), derived = join(work, 'recipe-emscripten-6.0.9-edge.json');
try {
  run(process.execPath, [...guard, process.execPath, join(root, 'scripts/edge/record-edge-link.mjs'), builds[0], process.env.LASM_EDGE_RUNTIME,
    process.env.LASM_APPLICATION_RUNTIME, recording, '--suspend', 'asyncify']);
  copyFileSync(join(root, 'src/link-driver/recipe-emscripten-6.0.9-edge.json'), derived);
  run(process.execPath, [join(root, 'scripts/edge/derive-edge-recipe.mjs'), recording, join(recording, 'emcc.log'), derived, '--mode', 'edge-asyncify']);
  const committed = JSON.parse(readFileSync(join(root, 'src/link-driver/recipe-emscripten-6.0.9-edge.json'), 'utf8'));
  const fresh = JSON.parse(readFileSync(derived, 'utf8'));
  results.recipe = { derived: true, committedHasAsyncify: !!committed.link.modes['edge-asyncify'],
    matchesCommitted: JSON.stringify(committed.link.modes['edge-asyncify']) === JSON.stringify(fresh.link.modes['edge-asyncify'])
      && JSON.stringify(committed.link.modes.edge) === JSON.stringify(fresh.link.modes.edge) };
  if (results.recipe.committedHasAsyncify) {
    const out = join(work, 'asyncify-link-compare');
    run(process.execPath, [...guard, process.execPath, join(root, 'scripts/edge/compare-edge-link.mjs'), builds[0], process.env.LASM_EDGE_RUNTIME,
      process.env.LASM_APPLICATION_RUNTIME, out, '--suspend', 'asyncify']);
    results.asyncifyLinkCompare = JSON.parse(readFileSync(join(out, 'compare.json'), 'utf8'));
    if (!results.asyncifyLinkCompare.identical) failed.push('the Node link driver\'s Asyncify link differs from emcc\'s');
    if (!results.recipe.matchesCommitted) failed.push('the committed edge-asyncify recipe differs from a fresh recording');
  } else failed.push('the committed recipe has no edge-asyncify mode yet (commit the derived recipe artifact)');
} catch (error) {
  results.recipe = { derived: false, error: String(error.message ?? error).slice(0, 4000) };
  failed.push('recording or deriving the Asyncify recipe');
}

// 3. The Supabase edge runtime, as `supabase functions serve` runs it.
const functions = join(work, 'functions');
rmSync(functions, { recursive: true, force: true });
mkdirSync(join(functions, 'main'), { recursive: true });
writeFileSync(join(functions, 'main/index.ts'), `// Lasm's CI main service: starts each function as a user worker with the
// options and limits the Supabase CLI's main service uses (serve.main.ts).
const root = '/home/deno/functions';
Deno.serve(async request => {
  const url = new URL(request.url);
  if (url.pathname === '/_internal/health') return Response.json({ ok: true });
  const name = url.pathname.split('/')[1];
  if (!name) return new Response('missing function name', { status: 400 });
  const servicePath = root + '/' + name;
  try {
    const worker = await EdgeRuntime.userWorkers.create({
      servicePath, memoryLimitMb: 256, workerTimeoutMs: 400 * 1000, noModuleCache: false, noNpm: true,
      importMapPath: servicePath + '/deno.json', envVars: [...Object.entries(Deno.env.toObject()), ['GREETING', 'hello from Supabase']],
      forceCreate: false, customModuleRoot: '', cpuTimeSoftLimitMs: 1000, cpuTimeHardLimitMs: 2000, decoratorType: 'tc39',
      maybeEntrypoint: 'file://' + servicePath + '/index.ts', context: { useReadSyncFileAPI: true }, staticPatterns: [],
    });
    return await worker.fetch(request);
  } catch (error) {
    return Response.json({ msg: String(error) }, { status: 500 });
  }
});
`);
mkdirSync(join(functions, 'probe'), { recursive: true });
writeFileSync(join(functions, 'probe/deno.json'), '{}\n');
writeFileSync(join(functions, 'probe/index.ts'), `Deno.serve(() => Response.json({
  suspending: typeof WebAssembly.Suspending, promising: typeof WebAssembly.promising,
  memory64: (() => { try { new WebAssembly.Memory({ initial: 1, address: 'i64' }); return true; } catch { return false; } })(),
  deno: Deno.version,
}));
`);
for (const app of Object.values(results.apps)) cpSync(app.function.directory, join(functions, app.function.name), { recursive: true });
run(process.execPath, [join(root, 'scripts/ci/image-cache.mjs'), 'ensure', join(work, 'image-cache'), 'supabase']);
const docker = (args, options = {}) => spawnSync('docker', args, { encoding: 'utf8', timeout: 600_000, maxBuffer: 64 << 20, ...options });
docker(['rm', '-f', 'lasm-supabase']);
const startedAt = performance.now();
const started = docker(['run', '-d', '--name', 'lasm-supabase', '-p', '127.0.0.1:9000:9000', '-v', `${functions}:/home/deno/functions:ro`,
  image, 'start', '--main-service', '/home/deno/functions/main', '-p', '9000']);
if (started.status !== 0) throw new Error(`docker run: ${started.stderr}`);
const base = 'http://127.0.0.1:9000';
const logs = () => { const out = docker(['logs', 'lasm-supabase']); return out.stdout + out.stderr; };
try {
  for (const deadline = Date.now() + 120_000; ;) {
    try { if ((await fetch(base + '/_internal/health')).ok) break; } catch { /* starting */ }
    if (Date.now() > deadline) throw new Error('The edge runtime did not start:\n' + logs().slice(-4000));
    await new Promise(r => setTimeout(r, 200));
  }
  results.runtimeReadyMs = Math.round(performance.now() - startedAt);
  results.probe = await (await fetch(base + '/probe')).json();
  results.jspi = results.probe.suspending === 'function';
  const request = async (fn, { method = 'GET', path, send, type }) => {
    const t = performance.now();
    const response = await fetch(base + '/' + fn + (path === '/' ? '' : path), { method, body: send, headers: type ? { 'content-type': type } : {} });
    return { status: response.status, body: await response.text(), ms: +(performance.now() - t).toFixed(2) };
  };
  for (const [name, app] of Object.entries(results.apps)) {
    const spec = apps[name], fn = app.function.name;
    const supabase = app.supabase = { checks: [] };
    const check = (label, ok, extra = {}) => supabase.checks.push({ name: label, ok: !!ok, ...extra });
    // The first request starts the worker: module evaluation, Wasm compilation and Lean's startup.
    const first = await request(fn, spec.checks[0]);
    supabase.coldStartMs = first.ms;
    check(`cold ${spec.checks[0].path}`, first.status === spec.checks[0].status && (spec.checks[0].body === undefined || first.body === spec.checks[0].body), { got: first });
    for (const c of spec.checks) {
      const got = await request(fn, c);
      const ok = got.status === c.status && (c.body === undefined || got.body === c.body) && (!c.match || c.match.test(got.body));
      check(`${c.method ?? 'GET'} ${c.path}`, ok, ok ? { ms: got.ms } : { got });
    }
    if (name === 'pure') {
      // Blocking waits from several requests at once: each suspends, the others run meanwhile.
      const t = performance.now();
      const all = await Promise.all(Array.from({ length: 5 }, (_, i) => request(fn, { path: i % 2 ? '/task/30' : '/sleep/30' })));
      check('5 concurrent blocking waits (IO.sleep, Task.get)', all.every(r => r.status === 200), { totalMs: +(performance.now() - t).toFixed(1), bodies: all.map(r => r.body) });
      const env = await request(fn, { path: '/env' });
      check('GET /env (the function\'s environment)', env.body === '{"GREETING":"hello from Supabase"}', { got: env });
    }
    // The prefix: the function also answers at its bare name.
    if (name === 'hono') {
      const bare = await fetch(`${base}/${fn}`);
      check(`GET /${fn} is the app's /`, bare.status === 200 && (await bare.text()) === spec.checks[0].body);
    }
    if (spec.fatal) {
      const got = await request(fn, spec.fatal);
      check(`${spec.fatal.path} fails the request`, got.status !== 200, { status: got.status });
      const after = await request(fn, spec.fatal.after);
      check('a stopped instance is replaced', after.status === 200 && after.body === spec.fatal.after.body, { after });
    }
    for (const [label, path] of Object.entries(spec.bench)) {
      for (let i = 0; i < 30; i++) await request(fn, { path });
      const n = 300, t = performance.now();
      for (let i = 0; i < n; i++) await request(fn, { path });
      supabase[`${label}HttpMsPerRequest`] = +((performance.now() - t) / n).toFixed(3);
    }
    supabase.passed = supabase.checks.every(c => c.ok);
    if (!supabase.passed) failed.push(`${name} on Supabase's edge runtime: ${supabase.checks.filter(c => !c.ok).map(c => c.name).join(', ')}`);
    if (app.bundle.bytes > budget.bundleBytes) failed.push(`${name} function size budget`);
  }
} finally {
  results.runtimeLog = logs().slice(-20000);
  writeFileSync(join(resultsDir, 'supabase-runtime.log'), results.runtimeLog);
  docker(['rm', '-f', 'lasm-supabase']);
}
results.runtimeLogTail = results.runtimeLog.slice(-8000);
delete results.runtimeLog;
if (failed.length) console.error('Supabase edge runtime log (tail):\n' + results.runtimeLogTail);
writeFileSync(join(resultsDir, 'supabase-results.json'), JSON.stringify(results, null, 2) + '\n');
for (const file of readdirSync(work).filter(name => name.endsWith('.json'))) if (resultsDir !== work) copyFileSync(join(work, file), join(resultsDir, `supabase-${file}`));
const ms = v => v === undefined ? '—' : `${v} ms`;
const rows = Object.entries(results.apps).map(([name, a]) => {
  const x = a['node-asyncify'], j = a['node-jspi'];
  return `| ${name} | ${(a.bundle.bytes / MiB).toFixed(2)} MiB (gzip ${(a.bundle.gzipBytes / 1024).toFixed(0)} KiB) | Wasm ${(x.wasmBytes / 1024).toFixed(0)} / ${(j.wasmBytes / 1024).toFixed(0)} KiB | ${ms(x.startupMs)} / ${ms(j.startupMs)} | ${x.trivialMsPerRequest} / ${j.trivialMsPerRequest} ms; ${x.jsonMsPerRequest} / ${j.jsonMsPerRequest} ms | ${ms(a.supabase?.coldStartMs)} | ${a.supabase?.trivialHttpMsPerRequest ?? '—'} ms | ${a.supabase?.passed ? 'pass' : 'FAIL'} |`;
});
const summary = `### Supabase Edge Functions (${image}; JSPI: ${results.jspi ? 'yes' : 'no'}, V8 ${results.probe?.deno?.v8 ?? '?'})

| App | Function directory | Asyncify / JSPI Wasm | Startup on Node, Asyncify / JSPI | Per request on Node (trivial; heavier), Asyncify / JSPI | Supabase cold start | Supabase per request (HTTP) | Supabase routes |
| --- | --- | --- | --- | --- | --- | --- | --- |
${rows.join('\n')}

Recipe: ${JSON.stringify(results.recipe)}${results.asyncifyLinkCompare ? `; Node driver vs emcc identical: ${results.asyncifyLinkCompare.identical}` : ''}
`;
console.log(summary);
if (process.env.GITHUB_STEP_SUMMARY) appendFileSync(process.env.GITHUB_STEP_SUMMARY, summary);
if (failed.length) { console.error('Failed: ' + failed.join('; ')); process.exit(1); }
