// Lasm.target on every target (docs/api/decisions/0.6.md, 0.6-20;
// .github/workflows/web-bindings.yml job target-report): an installed candidate
// builds test/fixtures/target for each `--target` and runs what it built, and
// the program must report that target ("lasm target <name>"):
//   - node and the function platforms (lambda, lambda-edge, vercel, netlify,
//     azure-functions, cloud-functions): the package's Node build (main.mjs) under Node;
//   - the edge targets (workers, vercel-edge, netlify-edge, bun, deno,
//     deno-deploy, supabase-edge): the output's program and host
//     (lasm/edge-start.mjs), started in Node as scripts/edge/check-worker.mjs does;
//   - wasi and fastly: main.wasm under Node's node:wasi (Fastly's host calls stubbed:
//     Print.lean makes none);
//   - wasi-http: Http.lean under `wasmtime serve`, which answers the line.
// The browser's is test/fixtures/js-core's target section in headless Chromium (same workflow).
//   node scripts/ci/target-report.mjs LASM_BIN WORK_DIR WASMTIME [REPORT.json]
import { execFileSync, spawn } from 'node:child_process';
import { cpSync, existsSync, mkdirSync, readFileSync, readdirSync, rmSync, writeFileSync } from 'node:fs';
import { dirname, join, resolve } from 'node:path';
import { fileURLToPath, pathToFileURL } from 'node:url';
import { WASI } from 'node:wasi';

const root = resolve(dirname(fileURLToPath(import.meta.url)), '../..');
const [lasmArg, workArg, wasmtimeArg, reportArg] = process.argv.slice(2);
if (!lasmArg || !workArg || !wasmtimeArg) { console.error('Usage: node scripts/ci/target-report.mjs LASM_BIN WORK_DIR WASMTIME [REPORT.json]'); process.exit(2); }
const lasm = resolve(lasmArg), work = resolve(workArg), wasmtime = resolve(wasmtimeArg);
const { buildTargets } = await import(pathToFileURL(join(root, 'src/cli-names.mjs')).href);
const env = { ...process.env, CI: '1', BROWSER: 'none' };

// The fixture project, with the npm packages of the Azure and Google packages.
const project = join(work, 'project');
rmSync(project, { recursive: true, force: true });
cpSync(join(root, 'test/fixtures/target'), project, { recursive: true });
execFileSync('npm', ['install', '--no-audit', '--no-fund', '--no-package-lock'], { cwd: project, env, stdio: 'inherit' });

const functionPlatforms = { lambda: 'lambda.zip', 'lambda-edge': 'lambda-edge.zip', vercel: 'vercel', netlify: 'netlify', 'azure-functions': 'azure-functions', 'cloud-functions': 'cloud-functions' };
const edgeTargets = ['workers', 'vercel-edge', 'netlify-edge', 'bun', 'deno', 'deno-deploy', 'supabase-edge'];
// vercel-edge and netlify-edge write where their platform expects (no --output).
const fixedEdge = { 'vercel-edge': 'api/_lasm', 'netlify-edge': 'netlify/lasm' };
const expected = target => `lasm target ${target}`;

function build(entry, target, output) {
  execFileSync(process.execPath, [lasm, 'build', entry, '--target', target, ...(output ? ['--output', output] : [])],
    { cwd: project, env, stdio: 'inherit', timeout: 60 * 60_000 });
}
const runNode = (main) => execFileSync(process.execPath, [main], { cwd: dirname(main), env, encoding: 'utf8', timeout: 120_000 });

/** The Node build inside a function platform's package. */
function functionMain(target) {
  const out = join(project, 'out', target);
  if (target === 'lambda' || target === 'lambda-edge') {
    const unzipped = join(project, 'out', `${target}-unzipped`);
    rmSync(unzipped, { recursive: true, force: true });
    mkdirSync(unzipped, { recursive: true });
    execFileSync('unzip', ['-q', join(project, 'out', functionPlatforms[target]), '-d', unzipped]);
    return join(unzipped, 'main.mjs');
  }
  if (target === 'vercel') return join(out, 'functions/index.func/main.mjs');
  return join(out, 'main.mjs');
}

/** Starts an edge output's program in Node and returns what `main` printed. */
async function runEdge(directory) {
  const info = JSON.parse(readFileSync(join(directory, 'build-info.json'), 'utf8'));
  const { startLean } = await import(pathToFileURL(join(directory, 'lasm/edge-start.mjs')).href);
  const createProgram = (await import(pathToFileURL(join(directory, 'lasm/program.mjs')).href)).default;
  const bytes = info.wasm.endsWith('.mjs') ? (await import(pathToFileURL(join(directory, info.wasm)).href)).default : readFileSync(join(directory, info.wasm));
  const wasmModule = await WebAssembly.compile(bytes);
  let printed = '';
  delete globalThis.__lasmDefaultExport;
  await startLean({ createProgram, wasmModule, modules: {}, jspi: info.link?.suspend !== 'asyncify',
    stdout: text => { printed += typeof text === 'string' ? text : new TextDecoder().decode(text); }, stderr: () => {} });
  return printed;
}

/** Runs a WASI command module under node:wasi and returns its standard output. */
async function runWasi(file) {
  const directory = join(dirname(file), '.run'), out = join(directory, 'stdout');
  mkdirSync(directory, { recursive: true });
  const { openSync, closeSync } = await import('node:fs');
  const fd = openSync(out, 'w');
  try {
    const wasi = new WASI({ version: 'preview1', args: ['main.wasm'], env: {}, stdout: fd, returnOnExit: true });
    const module = await WebAssembly.compile(readFileSync(file));
    // Fastly's host calls: stubs (Print.lean makes none).
    const imports = { wasi_snapshot_preview1: wasi.wasiImport };
    for (const { module: name } of WebAssembly.Module.imports(module))
      if (!imports[name]) imports[name] = new Proxy({}, { get: () => () => 0 });
    wasi.start(await WebAssembly.instantiate(module, imports));
  } finally { closeSync(fd); }
  return readFileSync(out, 'utf8');
}

/** Serves the wasi-http component with wasmtime and returns the answer to one request. */
async function runWasiHttp(file) {
  const port = 3190;
  const child = spawn(wasmtime, ['serve', '--addr', `127.0.0.1:${port}`, file], { stdio: ['ignore', 'pipe', 'pipe'] });
  let log = '';
  child.stdout.on('data', d => { log += d; }); child.stderr.on('data', d => { log += d; });
  try {
    const started = performance.now();
    for (;;) {
      if (child.exitCode !== null) throw new Error(`wasmtime serve exited (${child.exitCode}):\n${log}`);
      try { return await (await fetch(`http://127.0.0.1:${port}/`)).text(); }
      catch { if (performance.now() - started > 120_000) throw new Error(`wasmtime serve did not answer:\n${log}`); }
      await new Promise(done => setTimeout(done, 250));
    }
  } finally { child.kill(); }
}

async function report(target) {
  if (target === 'browser') return { skipped: 'test/fixtures/js-core target section (headless Chromium)' };
  if (target === 'node') { build('Print.lean', 'node', 'out/node'); return { output: runNode(join(project, 'out/node/main.mjs')) }; }
  if (functionPlatforms[target]) { build('Print.lean', target, `out/${functionPlatforms[target]}`); return { output: runNode(functionMain(target)) }; }
  if (edgeTargets.includes(target)) {
    build('Print.lean', target, fixedEdge[target] ? undefined : `out/${target}`);
    return { output: await runEdge(join(project, fixedEdge[target] ?? `out/${target}`)) };
  }
  if (target === 'wasi' || target === 'fastly') { build('Print.lean', target, `out/${target}`); return { output: await runWasi(join(project, 'out', target, 'main.wasm')) }; }
  if (target === 'wasi-http') { build('Http.lean', target, 'out/wasi-http'); return { output: await runWasiHttp(join(project, 'out/wasi-http/main.wasm')) }; }
  throw new Error(`no runner for --target ${target}`);
}

const results = {};
let failed = 0;
for (const target of buildTargets) {
  let result;
  try { result = await report(target); }
  catch (error) { result = { error: String(error?.stack ?? error).slice(-4000) }; }
  if (!result.skipped) result.ok = !result.error && result.output.trim() === expected(target);
  if (result.ok === false) failed++;
  results[target] = result;
  console.log(`${result.skipped ? 'SKIP' : result.ok ? 'PASS' : 'FAIL'} ${target}: ${result.skipped ?? result.error?.split('\n')[0] ?? JSON.stringify(result.output.trim())}`);
}
if (reportArg) writeFileSync(resolve(reportArg), JSON.stringify(results, null, 2) + '\n');
if (existsSync(join(project, 'out'))) console.log('outputs:', readdirSync(join(project, 'out')).join(', '));
if (failed) { console.error(`${failed} target(s) did not report their own target`); process.exit(1); }
