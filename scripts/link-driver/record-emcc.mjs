#!/usr/bin/env node
// Maintainer recorder for the Phase 2 Node link driver (docs/TOOLCHAIN_SLIMMING.md).
// Runs the CURRENT product link (src/application-link.mjs through the managed,
// repaired Emscripten SDK) on fixtures and records a versioned link recipe:
// every emcc/em++ invocation, the clang/cc1 commands, every subprocess emcc ran
// (wasm-ld, Binaryen, Node JS compiler/optimizer), the system libraries it
// linked, and the hash of every intermediate and final file.
//
//   node scripts/full-lean/run-bounded.mjs --report .work/<id>.json -- \
//     /usr/bin/env LASM_TOOLCHAIN_CACHE=$PWD/.cache/link-driver/tools \
//     python3 scripts/full-lean/base-pages.py node scripts/link-driver/record-emcc.mjs \
//       --runtime .cache/link-driver/runtime/lean-4.34.1-wasm64 \
//       --runtime-sha256 <target.json sha256> --output .work/link-driver/<new> \
//       [--debug] --fixture hello=examples/hello/Main.lean [--fixture ...]
//   node scripts/link-driver/record-emcc.mjs --analyze .work/link-driver/<run>
//
// --debug sets EMCC_DEBUG=1/EMCC_VERBOSE=1 with a private EMCC_TEMP_DIR per call
// and dry-runs each compile with -### to capture the clang driver and cc1
// commands. Without it the product environment is used unchanged; both modes
// must produce identical bytes (scripts/link-driver/compare.mjs checks this).
// Each fixture is copied, with a lean-toolchain pin, under the output directory,
// so separate runs exercise separate absolute source and build paths.
import { cpSync, copyFileSync, existsSync, mkdirSync, openSync, closeSync, readFileSync, readdirSync, statSync, writeFileSync } from 'node:fs';
import { basename, dirname, join, relative, resolve } from 'node:path';
import { createHash, randomUUID } from 'node:crypto';
import { execFileSync } from 'node:child_process';
import { parseArgs } from 'node:util';
import { fileURLToPath } from 'node:url';
import { analyzeRun } from './recipe.mjs';

const root = fileURLToPath(new URL('../../', import.meta.url));
const { values: options } = parseArgs({ options: {
  runtime: { type: 'string' }, 'runtime-sha256': { type: 'string' }, output: { type: 'string' },
  fixture: { type: 'string', multiple: true, default: [] }, debug: { type: 'boolean', default: false },
  analyze: { type: 'string' }, lean: { type: 'string', default: '4.34.1' },
  // Milestone B: an extracted prebuilt sysroot cache (scripts/link-driver/build-sysroot.mjs),
  // used read-only by emcc through EM_CACHE + EM_FROZEN_CACHE, and the compile driver.
  'frozen-cache': { type: 'string' }, 'compile-driver': { type: 'string', default: 'emcc' },
} });

if (options.analyze) {
  const summary = analyzeRun(resolve(options.analyze));
  console.log(JSON.stringify(summary, null, 2));
  process.exit(0);
}

const { ensureResourceGuard } = await import('../full-lean/resource-guard.mjs');
await ensureResourceGuard();
if (!process.env.LASM_TOOLCHAIN_CACHE) throw new Error('Set LASM_TOOLCHAIN_CACHE to a dedicated cache under .cache/ or .work/');
const cache = resolve(process.env.LASM_TOOLCHAIN_CACHE);
for (const [name, value] of [['cache', cache], ['output', resolve(options.output ?? '')]])
  if (!['.cache', '.work'].some(base => !relative(join(root, base), value).startsWith('..')))
    throw new Error(`The ${name} directory must be under the ignored .cache/ or .work/ directories`);
if (!options.output || !options.runtime || !/^[a-f0-9]{64}$/.test(options['runtime-sha256'] ?? '') || !options.fixture.length)
  throw new Error('Supply --runtime, --runtime-sha256, --output and at least one --fixture name=path');
const output = resolve(options.output);
if (existsSync(output)) throw new Error('Use a new --output directory');
mkdirSync(output, { recursive: true });

const { selectLeanVersion, provisionLean, toolchainCatalog } = await import('../../src/managed-lean.mjs');
const { provisionSdk, sdkCatalog } = await import('../../src/managed-sdk.mjs');
const { applicationRuntime } = await import('../../src/application-runtime.mjs');
const { applicationSources, findApplicationProject } = await import('../../src/application-sources.mjs');
const { linkApplication } = await import('../../src/application-link.mjs');

const sha256 = file => createHash('sha256').update(readFileSync(file)).digest('hex');
const started = Date.now();
const log = message => console.error(`[record ${((Date.now() - started) / 1000).toFixed(0)}s] ${message}`);
function inventory(directory, base = directory, skip = () => false) {
  const files = {};
  if (!existsSync(directory)) return files;
  for (const entry of readdirSync(directory, { withFileTypes: true }).sort((a, b) => a.name < b.name ? -1 : 1)) {
    const path = join(directory, entry.name), name = relative(base, path);
    if (skip(name)) continue;
    if (entry.isDirectory()) Object.assign(files, inventory(path, base, skip));
    else if (entry.isFile()) files[name] = { bytes: statSync(path).size, sha256: sha256(path) };
  }
  return files;
}

// Lasm writes one JSON-quoted argument per line (src/platform.mjs responseFile).
const readResponseFile = file => readFileSync(file, 'utf8').split('\n').filter(Boolean)
  .map(line => line.slice(1, -1).replace(/\\(.)/g, '$1'));

const runSummary = { schema: 1, recorder: 'scripts/link-driver/record-emcc.mjs', debug: options.debug,
  compileDriver: options['compile-driver'], frozenCache: options['frozen-cache'] ? resolve(options['frozen-cache']) : null,
  startedAt: new Date().toISOString(), node: process.version, platform: `${process.platform}-${process.arch}`,
  cache, fixtures: [] };
for (const spec of options.fixture) {
  const [name, file] = spec.split('=');
  if (!/^[a-z0-9-]+$/.test(name ?? '') || !file) throw new Error(`Invalid --fixture ${spec}`);
  const fixture = join(output, name), sourceDirectory = join(fixture, 'source');
  mkdirSync(sourceDirectory, { recursive: true });
  // A standalone source plus its own pin, as an ordinary user would have it.
  const original = resolve(file), source = join(sourceDirectory, basename(original));
  copyFileSync(original, source);
  writeFileSync(join(sourceDirectory, 'lean-toolchain'), `leanprover/lean4:v${options.lean}\n`);
  log(`${name}: provisioning`);
  const selection = await selectLeanVersion(source);
  const runtime = await applicationRuntime({ ...selection, commit: toolchainCatalog.lean[selection.version].commit }, {
    directory: resolve(options.runtime),
    catalog: { lean: { [selection.version]: { name: basename(resolve(options.runtime)), manifestSha256: options['runtime-sha256'] } } } });
  const lean = await provisionLean(source, { cache, log });
  if (sdkCatalog.version !== runtime.manifest.emscripten) throw new Error('The managed SDK and application runtime do not match');
  if (findApplicationProject(source)) throw new Error('Lake project fixtures are not supported by this recorder yet');
  // Same work/staging layout as src/application-build.mjs.
  const work = join(sourceDirectory, '.lake/lasm/applications', createHash('sha256').update(source).digest('hex').slice(0, 16));
  mkdirSync(work, { recursive: true });
  log(`${name}: generating C`);
  const generated = applicationSources(source, lean, work, { log: () => {} });
  const sdk = await provisionSdk({ cache, log });
  const temporary = join(work, '.build-' + randomUUID()), dist = join(temporary, 'dist');
  mkdirSync(dist, { recursive: true });
  const stepsDirectory = join(fixture, 'steps');
  const steps = [];
  const baseEnv = options['frozen-cache']
    ? { ...sdk.env, EM_CACHE: resolve(options['frozen-cache']), EM_FROZEN_CACHE: '1' } : sdk.env;
  const recorded = { ...sdk, env: baseEnv, execute(tool, args, settings = {}) {
    const index = steps.length, directory = join(stepsDirectory, `${String(index).padStart(2, '0')}-${tool}`);
    const temp = join(directory, 'temp');
    mkdirSync(temp, { recursive: true });
    const expanded = args.flatMap(arg => arg.startsWith('@') ? readResponseFile(arg.slice(1)) : [arg]);
    const env = options.debug ? { ...baseEnv, EMCC_DEBUG: '1', EMCC_VERBOSE: '1', EMCC_TEMP_DIR: temp } : baseEnv;
    const responseCopies = args.filter(arg => arg.startsWith('@')).map(arg => {
      const copy = join(directory, basename(arg.slice(1))); copyFileSync(arg.slice(1), copy); return copy;
    });
    const step = { index, tool, args, responseFiles: responseCopies.map(file => relative(fixture, file)), expandedArgs: expanded,
      debug: options.debug, startedAt: new Date().toISOString() };
    steps.push(step);
    const out = openSync(join(directory, 'stdout.log'), 'w'), err = openSync(join(directory, 'stderr.log'), 'w');
    const begin = Date.now();
    log(`${name}: step ${index} ${tool} ${args.find(arg => arg.endsWith('.c')) ? basename(args.find(arg => arg.endsWith('.c'))) : ''}`);
    try {
      sdk.execute(tool, args, { ...settings, env, stdio: ['ignore', out, err] });
      step.status = 0;
    } catch (error) {
      step.status = error.status ?? 'error'; step.error = error.message;
      throw error;
    } finally {
      closeSync(out); closeSync(err);
      step.seconds = (Date.now() - begin) / 1000;
      // Preserve each link's emitted outputs before the next link overwrites them.
      const target = args.includes('-o') ? args[args.indexOf('-o') + 1]
        : expanded.includes('-o') ? expanded[expanded.indexOf('-o') + 1] : undefined;
      if (target) {
        const emitted = join(directory, 'emitted'); mkdirSync(emitted, { recursive: true });
        for (const file of target.endsWith('.cjs') ? [target, target.replace(/\.cjs$/, '.wasm')] : [target])
          if (existsSync(file)) copyFileSync(file, join(emitted, basename(file)));
        for (const arg of expanded) if (arg.startsWith('-Wl,-Map=') && existsSync(arg.slice(9)))
          copyFileSync(arg.slice(9), join(emitted, basename(arg.slice(9))));
      }
      writeFileSync(join(directory, 'step.json'), JSON.stringify(step, null, 2) + '\n');
    }
    if (options.debug && tool === 'emcc' && args.includes('-c')) {
      // Dry run: emcc prints its exact clang command; clang -### expands cc1.
      const dry = openSync(join(directory, 'emcc-dry-run.log'), 'w');
      try { sdk.execute(tool, [...args, '-###'], { env: baseEnv, stdio: ['ignore', dry, dry] }); } finally { closeSync(dry); }
    }
    return Buffer.alloc(0);
  } };
  log(`${name}: linking ${generated.sources.length} module(s)`);
  const requirements = await linkApplication({ sources: generated.sources, sdk: recorded, runtime, work: temporary, dist,
    leanVersion: lean.version, memoryMode: 1, verbose: false, progress: ({ stage }) => log(`${name}: ${stage}`),
    compileDriver: options['compile-driver'] });
  const paths = { fixture, source: sourceDirectory, work, build: temporary, runtime: runtime.directory, lasm: root,
    sdk: sdk.prefix, emscripten: sdk.driver, state: sdk.state, python: sdk.python.executable, node: process.execPath,
    lean: lean.prefix, cache,
    // The Emscripten cache emcc used (sysroot, system libraries): map files name it.
    emcache: options['frozen-cache'] ? resolve(options['frozen-cache']) : join(sdk.state, 'cache') };
  const record = { schema: 1, name, fixture: relative(root, original), debug: options.debug,
    lean: { version: lean.version, commit: lean.commit, distribution: lean.distribution, tier: lean.tier, identity: lean.identity },
    runtime: { identity: runtime.identity, name: runtime.manifest.name, libraries: runtime.manifest.libraries },
    sdk: { version: sdk.version, identity: sdk.identity, driverIdentity: sdk.driverIdentity, runtimePatchesApplied: sdk.runtimePatchesApplied },
    compileDriver: options['compile-driver'], frozenCache: options['frozen-cache'] ? resolve(options['frozen-cache']) : null,
    node: process.version, paths, generatedSources: generated.sources.map(file => relative(temporary, file).startsWith('..') ? relative(work, file) : relative(temporary, file)),
    requirements, steps: steps.map(({ index, tool, status, seconds }) => ({ index, tool, status, seconds })),
    // Everything Lasm produced: generated C, objects, maps, response files, outputs.
    work: inventory(work, work, name => name.startsWith('.build-')),
    build: inventory(temporary) };
  writeFileSync(join(fixture, 'build.json'), JSON.stringify(record, null, 2) + '\n');
  runSummary.fixtures.push({ name, fixture: record.fixture, program: record.build['dist/program.wasm'], glue: record.build['dist/program.cjs'] });
  log(`${name}: done`);
}
runSummary.finishedAt = new Date().toISOString();
writeFileSync(join(output, 'run.json'), JSON.stringify(runSummary, null, 2) + '\n');
if (options.debug) {
  const summary = analyzeRun(output);
  log(`recipe written: ${summary.recipe}`);
}
