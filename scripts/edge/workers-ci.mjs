// Phase 7.2 CI (.github/workflows/workers.yml): builds the Hono template
// (lasm init --deploy workers) and examples/edge-pure with
// `lasm build --target workers`, serves both with `wrangler dev` (local
// workerd), runs them on Node 26, Deno and Bun, and checks the Workers Free
// plan's budgets. Needs LASM_APPLICATION_RUNTIME and LASM_EDGE_RUNTIME.
//   node scripts/edge/workers-ci.mjs WORK_DIR TOOLS_DIR
import { execFileSync } from 'node:child_process';
import { cpSync, existsSync, mkdirSync, readFileSync, writeFileSync, appendFileSync, readdirSync, statSync } from 'node:fs';
import { join, resolve, dirname } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = resolve(dirname(fileURLToPath(import.meta.url)), '../..');
const [workArg, toolsArg] = process.argv.slice(2);
const work = resolve(workArg), tools = resolve(toolsArg), bin = name => join(tools, 'node_modules/.bin', name);
const run = (command, args, options = {}) => execFileSync(command, args, { stdio: 'inherit', ...options });
mkdirSync(work, { recursive: true });
const MiB = 1048576;
// Workers Free plan (developers.cloudflare.com/workers/platform/limits, 2026-10-12).
const budget = { bundleBytes: 64 * MiB, startupMs: 1000, cpuMsPerRequest: 10, memoryMiB: 128 };
const results = { budget, apps: {} };

// The apps.
const hono = join(work, 'hono'), pure = join(work, 'pure');
if (!existsSync(hono)) {
  run(process.execPath, [join(root, 'bin/lasm.mjs'), 'init', hono, '--template', 'hono', '--deploy', 'workers']);
  // The project's devDependency is the unpublished Lasm package; the source checkout builds instead.
  const pkg = JSON.parse(readFileSync(join(hono, 'package.json'), 'utf8')); delete pkg.devDependencies;
  writeFileSync(join(hono, 'package.json'), JSON.stringify(pkg, null, 2) + '\n');
  run('npm', ['install', '--no-audit', '--no-fund'], { cwd: hono });
}
if (!existsSync(pure)) cpSync(join(root, 'examples/edge-pure'), pure, { recursive: true });

// The resource guard starts commands with a minimal environment: pass the runtimes on.
const passed = ['LASM_APPLICATION_RUNTIME', 'LASM_EDGE_RUNTIME', 'LASM_BUILD_JOBS', 'LASM_KEEP_LINK_WORK'].filter(key => process.env[key]).map(key => `${key}=${resolve(process.env[key]) === process.env[key] || key === 'LASM_BUILD_JOBS' ? process.env[key] : resolve(process.env[key])}`);
const bounded = [join(root, 'scripts/full-lean/run-bounded.mjs'), '--', 'python3', join(root, 'scripts/full-lean/base-pages.py'), 'env', ...passed];
for (const [name, project, served] of [['hono', hono, hono], ['pure', pure, join(pure, 'workers')]]) {
  const started = Date.now();
  run(process.execPath, [...bounded, process.execPath, join(root, 'bin/lasm.mjs'), 'build', 'Main.lean', '--target', 'workers'], { cwd: project });
  const app = results.apps[name] = { buildSeconds: (Date.now() - started) / 1000 };
  const file = which => join(work, `${name}-${which}.json`);
  run(process.execPath, [join(root, 'scripts/edge/wrangler-check.mjs'), bin('wrangler'), served, name, name === 'hono' ? '8787' : '8788', file('workerd')]);
  app.workerd = JSON.parse(readFileSync(file('workerd'), 'utf8'));
  for (const [engine, command, prefix] of [['node', process.execPath, []], ['deno', bin('deno'), ['run', '-A']], ['bun', bin('bun'), []]]) {
    run(command, [...prefix, join(root, 'scripts/edge/check-worker.mjs'), join(project, 'workers'), name, file(engine)]);
    app[engine] = JSON.parse(readFileSync(file(engine), 'utf8'));
  }
  const node = app.node;
  app.budget = {
    bundle: app.workerd.bundle.bytes < budget.bundleBytes,
    startup: node.startupMs < budget.startupMs,
    cpu: node.trivialMsPerRequest < budget.cpuMsPerRequest && node.jsonMsPerRequest < budget.cpuMsPerRequest,
    memory: node.wasmMemoryAfterMiB < budget.memoryMiB / 2,
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
const rows = Object.entries(results.apps).map(([name, a]) => `| ${name} | ${(a.workerd.bundle.bytes / MiB).toFixed(2)} MiB (${(a.workerd.bundle.gzipBytes / 1024).toFixed(0)} KiB gzip) | ${a.node.startupMs} / ${a.deno.startupMs} / ${a.bun.startupMs} ms | ${a.node.trivialMsPerRequest} / ${a.node.jsonMsPerRequest} ms | ${a.node.wasmMemoryAfterMiB} MiB | ${['workerd', 'node', 'deno', 'bun'].map(e => `${e} ${a[e].passed ? 'pass' : 'FAIL'}`).join(', ')} |`);
const summary = `### Cloudflare Workers (experimental edge build)\n\n| App | Bundle (wrangler dry run) | Startup Node / Deno / Bun | Per request, trivial / heavier (Node) | Wasm memory | Checks |\n| --- | --- | --- | --- | --- | --- |\n${rows.join('\n')}\n\nBudgets (Free plan): bundle < 64 MiB, startup < 1 s, CPU < 10 ms per request, memory < 128 MB.\n`;
console.log(summary);
if (process.env.GITHUB_STEP_SUMMARY) appendFileSync(process.env.GITHUB_STEP_SUMMARY, summary);
const failed = Object.entries(results.apps).flatMap(([name, a]) => [
  ...['workerd', 'node', 'deno', 'bun'].filter(e => !a[e].passed).map(e => `${name} on ${e}`),
  ...Object.entries(a.budget).filter(([, ok]) => !ok).map(([what]) => `${name} ${what} budget`)]);
if (results.edgeLinkCompare && !results.edgeLinkCompare.identical) failed.push('the Node link driver\'s edge link differs from emcc\'s');
if (failed.length) { console.error('Failed: ' + failed.join(', ')); process.exit(1); }
