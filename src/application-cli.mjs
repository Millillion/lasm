import { parseLasmArguments, cliUsage } from './cli-arguments.mjs';
import { spawn } from 'node:child_process';
import { constants } from 'node:os';
import { join } from 'node:path';
import { applicationSupport } from './application-support.mjs';
import { assertSupportedHost } from './platform.mjs';

/** Inherit terminal streams, forward interruption, and preserve the exit code. */
export async function runApplicationChild(executable, args, missingMessage) {
  const child = spawn(executable, args, { stdio: 'inherit', windowsHide: true });
  const signals = ['SIGINT', 'SIGTERM'];
  const handlers = signals.map(signal => {
    const handler = () => { if (child.exitCode === null) child.kill(signal); };
    process.on(signal, handler); return handler;
  });
  try {
    return await new Promise((resolve, reject) => {
      child.once('error', error => reject(error.code === 'ENOENT' ? new Error(missingMessage) : error));
      child.once('exit', (code, signal) => resolve(code ?? 128 + (constants.signals[signal] ?? 1)));
    });
  } finally { signals.forEach((signal, index) => process.off(signal, handlers[index])); }
}

export function reportCliError(error) {
  console.error(error.name === 'LeanIOError' ? 'uncaught exception: ' + error.message
    : (error.stderr?.toString() || error.stdout?.toString() || error.message).slice(-12000));
}

/** Edge targets (experimental, docs/EDGE.md): the program relinked for edge
 * isolates. An unchanged Node build reuses its cached edge program; otherwise
 * the build runs again keeping its link inputs, and the edge link follows. */
async function buildEdge(input, target, buildOptions, verbose) {
  const { rm } = await import('node:fs/promises');
  const { dirname, resolve } = await import('node:path');
  const { buildApplicationWithProgress } = await import('./application-build-client.mjs');
  const { findEdgeProgram, linkCachedEdgeProgram, writeEdgeOutput, edgeTargetSuspend } = await import('./edge/edge-build.mjs');
  const suspend = edgeTargetSuspend(target);
  const { applicationRuntime } = await import('./application-runtime.mjs');
  const { selectLeanVersion, toolchainCatalog } = await import('./managed-lean.mjs');
  const { findApplicationProject } = await import('./application-sources.mjs');
  const source = resolve(input), projectDirectory = findApplicationProject(source) ?? dirname(source);
  const selection = await selectLeanVersion(source);
  const nodeRuntime = await applicationRuntime({ ...selection, commit: toolchainCatalog.lean[selection.version].commit });
  let result = await buildApplicationWithProgress(input, { ...buildOptions, keepLinkWork: 'if-built' });
  const found = await findEdgeProgram({ result, nodeRuntime, suspend });
  let program = found.cached;
  if (program && result.linkWork && !process.env.LASM_KEEP_LINK_WORK) await rm(result.linkWork, { recursive: true, force: true });
  if (!program) {
    // A Node build reused from its cache kept no link inputs: link it again.
    if (!result.linkWork) result = await buildApplicationWithProgress(input, { ...buildOptions, keepLinkWork: true });
    try {
      console.error(`[lasm] Linking the single-threaded (portable) program${suspend === 'asyncify' ? ' with Asyncify (this engine has no JSPI)' : ''}…`);
      const { provisionEdgeLinker } = await import('./edge/edge-link.mjs');
      const sdk = await provisionEdgeLinker(found.edge, { log: message => console.error('[lasm] ' + message) }, process.env, suspend);
      program = linkCachedEdgeProgram({ result, nodeRuntime, edge: found.edge, key: found.key, sdk, suspend, verbose });
    } finally {
      if (result.linkWork && !process.env.LASM_KEEP_LINK_WORK) await rm(result.linkWork, { recursive: true, force: true });
    }
  }
  return writeEdgeOutput({ target, source, projectDirectory, result, edge: found.edge, program, cacheHit: !!found.cached }).output;
}

/** Shared by the primary CLI and the source-checkout launcher. */
export async function runApplicationCli(argv) {
  const options = parseLasmArguments(argv);
  const support = applicationSupport();
  if (options.command === 'help') {
    console.log(support ? 'Usage: lasm Main.lean [--release] [-- arguments…]\n       lasm build Main.lean [--output dist] [--target node|lambda|lambda-edge|vercel|netlify|azure|gcf|workers|vercel-edge|netlify-edge|bun|deno|deno-deploy|supabase-edge] [--dev]\n       lasm init my-app [--template plain|express|hono|std-http] [--deploy …]\n       lasm package [dist] --target lambda|lambda-edge|vercel|netlify|azure|gcf [--allow-dev]\n       lasm cache repair\n\nOptions: --rebuild, --verbose, --help\nProfiles: lasm build is release (optimized, reproducible, for deployment); --dev\nbuilds faster without size optimization. lasm Main.lean runs a dev build; --release\nruns a release build.\nBuild and run ordinary Lean main in Node.' : cliUsage);
    return 0;
  }
  if (options.command === 'init-help') { console.log((await import('./init.mjs')).initUsage); return 0; }
  if (options.command === 'init') return (await import('./init.mjs')).runInit(options);
  if (options.command === 'package-help') { console.log((await import('./package.mjs')).packageUsage); return 0; }
  if (options.command === 'package') return (await import('./package.mjs')).runPackage(options);
  assertSupportedHost();
  if (options.command === 'cache-repair') {
    const { repairManagedCache } = await import('./cache-repair.mjs');
    const { createBuildProgress } = await import('./build-progress.mjs');
    const progress = createBuildProgress();
    try {
      const result = await repairManagedCache({ progress: event => progress.update(event) });
      console.error(`[lasm] Cache repair: ${result.verified.length} valid tools retained, ${result.removed.length} invalid tools removed, `
        + `${result.stagingRemoved.length} temporary directories cleaned, ${result.skipped.length} unrelated entries untouched, `
        + `${result.pending.length} cleanup operations pending. Cache: ${result.cache}`);
      return result.pending.length ? 1 : 0;
    } finally { progress.finish(); }
  }
  if (support && options.input.endsWith('.json'))
    throw new Error('This Lasm candidate builds ordinary .lean applications for Node. Use lasm Main.lean or lasm build Main.lean.');
  if (options.input.endsWith('.json')) {
    const { build } = await import('./build.mjs');
    const result = await build(options.input, options.output);
    console.log(`Built ${result.module}: ${result.wasmBytes} bytes, ${result.modules.length} modules → ${result.output}`);
    return 0;
  }
  const { buildApplicationWithProgress } = await import('./application-build-client.mjs');
  const { target: requested, allowDev, ...buildOptions } = options;
  // Under Bun or Deno the default target is that runtime: the portable
  // profile, run and built with it (Phase 7.5, docs/BUN_DENO.md).
  const { jsRuntime, scriptPrefix } = await import('./js-runtime.mjs');
  const target = requested ?? (jsRuntime === 'node' ? undefined : jsRuntime);
  // A dev build refused by packaging is refused before it is built.
  if (target && !['node', 'bun', 'deno'].includes(target) && options.profile === 'dev' && !allowDev)
    throw new Error(`lasm build --dev --target ${target}: dev builds are not for deployment. Drop --dev, or add --allow-dev to package a dev build anyway.`);
  if ((await import('./edge/edge-build.mjs')).edgeTargets[target]) {
    const output = await buildEdge(options.input, target, buildOptions, options.verbose);
    if (options.command === 'build') return 0;
    console.error(`[lasm] Running ${options.input} on ${target === 'bun' ? 'Bun' : 'Deno'}` + (options.profile === 'release' ? ' (release build)…' : ' (dev build)…'));
    return runApplicationChild(process.execPath, [...scriptPrefix(), join(output, 'main.mjs'), ...options.args],
      `Could not start ${target === 'bun' ? 'Bun' : 'Deno'} to run the application.`);
  }
  const result = await buildApplicationWithProgress(options.input, buildOptions);
  const profileNote = result.profile === 'dev' ? ' (dev profile: size optimizations skipped, not for deployment)' : ' (release profile)';
  if (options.command === 'build') {
    console.error(`${result.cacheHit ? 'Reused' : 'Built'} Lean ${result.lean} for Node${profileNote}: ${result.output}`);
    // A function platform: package dist/ where `lasm package` writes it.
    if (target && target !== 'node') return (await import('./package.mjs')).runPackage({ input: result.output, target, allowDev });
    return 0;
  }
  console.error('[lasm] Running ' + options.input + (result.profile === 'dev' ? ' (dev build)' : ' (release build)') + '…');
  return runApplicationChild(process.execPath, [join(result.output, 'main.mjs'), ...options.args],
    'Could not start Node to run the application.');
}
