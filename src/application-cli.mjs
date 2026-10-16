import { parseLasmArguments, cliUsage } from './cli-arguments.mjs';
import { spawn } from 'node:child_process';
import { constants } from 'node:os';
import { join } from 'node:path';
import { applicationSupport } from './application-support.mjs';

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

/** Shared by the primary CLI and the source-checkout launcher. */
export async function runApplicationCli(argv) {
  const options = parseLasmArguments(argv);
  const support = applicationSupport();
  if (options.command === 'help') {
    console.log(support ? 'Usage: lasm Main.lean [-- arguments…]\n       lasm build Main.lean [--output dist]\n       lasm cache repair\n\nOptions: --rebuild, --verbose, --help\nBuild and run ordinary Lean main in Node.' : cliUsage);
    return 0;
  }
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
  const result = await buildApplicationWithProgress(options.input, options);
  if (options.command === 'build') {
    console.error(`${result.cacheHit ? 'Reused' : 'Built'} Lean ${result.lean} for Node: ${result.output}`);
    return 0;
  }
  console.error('[lasm] Running ' + options.input + '…');
  return runApplicationChild(process.execPath, [join(result.output, 'main.mjs'), ...options.args],
    'Could not start Node to run the application.');
}
