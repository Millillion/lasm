// Phase 7 CI (.github/workflows/workers.yml): builds the Hono template
// (lasm init --deploy workers|vercel-edge|netlify-edge|deno-deploy) and examples/edge-pure
// for each edge target, and checks them with the platforms' local tools:
// workers: `wrangler dev` (local workerd), plus Node 26, Deno and Bun on the
// same output, and the Workers Free plan's budgets; vercel-edge: `vercel build`
// offline and Vercel's edge-runtime; netlify-edge: `netlify build --offline`
// and `netlify dev --offline`; deno-deploy: `deno run -A deno/main.mjs`; bun:
// `bun bun/main.mjs`. Needs LASM_APPLICATION_RUNTIME and LASM_EDGE_RUNTIME.
//   node scripts/edge/workers-ci.mjs WORK_DIR TOOLS_DIR
import { execFileSync } from 'node:child_process';
import { cpSync, existsSync, mkdirSync, readFileSync, writeFileSync, appendFileSync, readdirSync, statSync } from 'node:fs';
import { join, resolve, dirname } from 'node:path';
import { fileURLToPath } from 'node:url';
import { headlessEnvironment } from './headless.mjs';

const root = resolve(dirname(fileURLToPath(import.meta.url)), '../..');
const [workArg, toolsArg] = process.argv.slice(2);
const work = resolve(workArg), tools = resolve(toolsArg), bin = name => join(tools, 'node_modules/.bin', name);
// Every command runs headless (scripts/edge/headless.mjs): no browser, no display.
const run = (command, args, options = {}) => execFileSync(command, args, { stdio: 'inherit', env: headlessEnvironment(), ...options });
mkdirSync(work, { recursive: true });
const MiB = 1048576;
// Workers Free plan (developers.cloudflare.com/workers/platform/limits, 2026-10-12).
const budget = { bundleBytes: 64 * MiB, startupMs: 1000, cpuMsPerRequest: 10, memoryMiB: 128 };
const results = { budget, apps: {} };

// The apps.
const hono = join(work, 'hono'), pure = join(work, 'pure');
if (!existsSync(hono)) {
  run(process.execPath, [join(root, 'bin/lasm.mjs'), 'init', hono, '--template', 'hono', '--deploy', 'workers', '--deploy', 'vercel-edge', '--deploy', 'netlify-edge', '--deploy', 'deno-deploy']);
  // The project's devDependency is the unpublished Lasm package; the source checkout builds instead.
  const pkg = JSON.parse(readFileSync(join(hono, 'package.json'), 'utf8')); delete pkg.devDependencies;
  writeFileSync(join(hono, 'package.json'), JSON.stringify(pkg, null, 2) + '\n');
  run('npm', ['install', '--no-audit', '--no-fund'], { cwd: hono });
}
if (!existsSync(pure)) cpSync(join(root, 'examples/edge-pure'), pure, { recursive: true });
// The platforms' builds run nothing here: the harness builds with this source
// checkout first (projects made by lasm init run npm run build:<target> instead).
for (const project of [hono, pure]) {
  // Each app is its own repository, as a user's project is: inside the Lasm
  // checkout, netlify dev takes the checkout as the site root and finds no
  // edge functions (CI run 40138055167).
  if (!existsSync(join(project, '.git'))) run('git', ['init', '-q'], { cwd: project });
  mkdirSync(join(project, 'public'), { recursive: true });
  writeFileSync(join(project, 'public/lasm.txt'), 'Requests are served by the Lean edge function.\n');
  writeFileSync(join(project, 'vercel.json'), JSON.stringify({ framework: null, installCommand: 'true', buildCommand: 'true', outputDirectory: 'public',
    routes: [{ src: '/(.*)', dest: '/api/lasm' }] }, null, 2) + '\n');
  writeFileSync(join(project, 'netlify.toml'), '[build]\n  command = "true"\n  publish = "public"\n');
}

// The resource guard starts commands with a minimal environment: pass the runtimes on.
const passed = ['LASM_APPLICATION_RUNTIME', 'LASM_EDGE_RUNTIME', 'LASM_BUILD_JOBS', 'LASM_KEEP_LINK_WORK'].filter(key => process.env[key]).map(key => `${key}=${resolve(process.env[key]) === process.env[key] || key === 'LASM_BUILD_JOBS' ? process.env[key] : resolve(process.env[key])}`);
const bounded = [join(root, 'scripts/full-lean/run-bounded.mjs'), '--', 'python3', join(root, 'scripts/full-lean/base-pages.py'), 'env', ...passed];
const lasmBuild = (project, target) => run(process.execPath, [...bounded, process.execPath, join(root, 'bin/lasm.mjs'), 'build', 'Main.lean', '--target', target], { cwd: project });
for (const [name, project, served, ports] of [['hono', hono, hono, [8787, 8889, 8891]], ['pure', pure, join(pure, 'workers'), [8788, 8890, 8892]]]) {
  const started = Date.now();
  lasmBuild(project, 'workers');
  const app = results.apps[name] = { buildSeconds: (Date.now() - started) / 1000 };
  const file = which => join(work, `${name}-${which}.json`);
  run(process.execPath, [join(root, 'scripts/edge/wrangler-check.mjs'), bin('wrangler'), served, name, String(ports[0]), file('workerd')]);
  app.workerd = JSON.parse(readFileSync(file('workerd'), 'utf8'));
  for (const [engine, command, prefix] of [['node', process.execPath, []], ['deno', bin('deno'), ['run', '-A']], ['bun', bin('bun'), []]]) {
    run(command, [...prefix, join(root, 'scripts/edge/check-worker.mjs'), join(project, 'workers'), name, file(engine)]);
    app[engine] = JSON.parse(readFileSync(file(engine), 'utf8'));
  }
  const reused = Date.now();
  lasmBuild(project, 'vercel-edge');
  app.vercelEdgeBuildSeconds = (Date.now() - reused) / 1000;
  run(process.execPath, [join(root, 'scripts/edge/vercel-edge-check.mjs'), tools, project, name, file('vercel-edge')]);
  app['vercel-edge'] = JSON.parse(readFileSync(file('vercel-edge'), 'utf8'));
  lasmBuild(project, 'netlify-edge');
  run(process.execPath, [join(root, 'scripts/edge/netlify-edge-check.mjs'), tools, project, name, String(ports[1]), file('netlify-edge')]);
  app['netlify-edge'] = JSON.parse(readFileSync(file('netlify-edge'), 'utf8'));
  lasmBuild(project, 'deno-deploy');
  run(process.execPath, [join(root, 'scripts/edge/portable-check.mjs'), bin('deno'), 'deno/main.mjs', project, name, String(ports[2]), file('deno-deploy')]);
  app['deno-deploy'] = JSON.parse(readFileSync(file('deno-deploy'), 'utf8'));
  lasmBuild(project, 'bun');
  run(process.execPath, [join(root, 'scripts/edge/portable-check.mjs'), bin('bun'), 'bun/main.mjs', project, name, String(ports[2]), file('bun-portable')]);
  app['bun-portable'] = JSON.parse(readFileSync(file('bun-portable'), 'utf8'));
  const node = app.node;
  app.budget = {
    bundle: app.workerd.bundle.bytes < budget.bundleBytes,
    startup: node.startupMs < budget.startupMs,
    cpu: node.trivialMsPerRequest < budget.cpuMsPerRequest && node.jsonMsPerRequest < budget.cpuMsPerRequest,
    memory: node.wasmMemoryAfterMiB < budget.memoryMiB / 2,
    vercelEdgeCode: app['vercel-edge'].bundle.gzipBytes < 1024 * 1024,
    netlifyEdgeCode: app['netlify-edge'].bundle.eszipBytes < 20 * 1024 * 1024,
  };
}
// The Node link driver's edge recipe against emcc on the pure example's kept
// link inputs (LASM_KEEP_LINK_WORK=1 in the workflow): byte-identical output.
if (process.env.LASM_KEEP_LINK_WORK) {
  const applications = join(pure, '.lake/lasm/applications');
  const builds = readdirSync(applications).flatMap(app => readdirSync(join(applications, app)).filter(name => name.startsWith('.build-'))
    .map(name => join(applications, app, name))).filter(dir => existsSync(join(dir, 'link.rsp')))
    .sort((a, b) => statSync(b).mtimeMs - statSync(a).mtimeMs);
  const out = join(work, 'edge-link-compare');
  run(process.execPath, [join(root, 'scripts/full-lean/run-bounded.mjs'), '--', 'python3', join(root, 'scripts/full-lean/base-pages.py'),
    process.execPath, join(root, 'scripts/edge/compare-edge-link.mjs'), builds[0], process.env.LASM_EDGE_RUNTIME,
    process.env.LASM_APPLICATION_RUNTIME, out]);
  results.edgeLinkCompare = JSON.parse(readFileSync(join(out, 'compare.json'), 'utf8'));
}
writeFileSync(join(work, 'workers-results.json'), JSON.stringify(results, null, 2) + '\n');
const engines = ['workerd', 'node', 'deno', 'bun', 'vercel-edge', 'netlify-edge', 'deno-deploy', 'bun-portable'];
const rows = Object.entries(results.apps).map(([name, a]) => `| ${name} | ${(a.workerd.bundle.bytes / MiB).toFixed(2)} MiB (${(a.workerd.bundle.gzipBytes / 1024).toFixed(0)} KiB gzip); Vercel ${(a['vercel-edge'].bundle.gzipBytes / 1024).toFixed(0)} KiB gzip; Netlify eszip ${(a['netlify-edge'].bundle.eszipBytes / MiB).toFixed(2)} MiB; Deno Deploy ${(a['deno-deploy'].bundle.bytes / MiB).toFixed(2)} MiB | ${a.node.startupMs} / ${a.deno.startupMs} / ${a.bun.startupMs} ms | ${a.node.trivialMsPerRequest} / ${a.node.jsonMsPerRequest} ms | ${a.node.wasmMemoryAfterMiB} MiB | ${engines.map(e => `${e} ${a[e].passed ? 'pass' : 'FAIL'}`).join(', ')} |`);
const summary = `### Edge targets (experimental)\n\n| App | Bundles (wrangler dry run; Vercel; Netlify; Deno Deploy) | Startup Node / Deno / Bun | Per request, trivial / heavier (Node) | Wasm memory | Checks |\n| --- | --- | --- | --- | --- | --- |\n${rows.join('\n')}\n\nBudgets: Workers Free (bundle < 64 MiB, startup < 1 s, CPU < 10 ms per request, memory < 128 MB), Vercel Edge Hobby (1 MB gzip), Netlify Edge (20 MB).\n`;
console.log(summary);
if (process.env.GITHUB_STEP_SUMMARY) appendFileSync(process.env.GITHUB_STEP_SUMMARY, summary);
const failed = Object.entries(results.apps).flatMap(([name, a]) => [
  ...engines.filter(e => !a[e].passed).map(e => `${name} on ${e}`),
  ...Object.entries(a.budget).filter(([, ok]) => !ok).map(([what]) => `${name} ${what} budget`)]);
if (results.edgeLinkCompare && !results.edgeLinkCompare.identical) failed.push('the Node link driver\'s edge link differs from emcc\'s');
if (failed.length) { console.error('Failed: ' + failed.join(', ')); process.exit(1); }
