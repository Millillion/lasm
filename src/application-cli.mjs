import { parseLasmArguments, cliUsage } from './cli-arguments.mjs';
import { spawn, spawnSync } from 'node:child_process';
import { constants } from 'node:os';
import { join } from 'node:path';
import { engineName } from './js-engine.mjs';
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

function requireApplicationEngine(executable, target) {
  if (target === 'node' && executable === process.execPath) return;
  const result = spawnSync(executable, ['--version'], { encoding: 'utf8', windowsHide: true,
    timeout: 10_000, maxBuffer: 1024 * 1024 });
  if (result.error?.code === 'ENOENT')
    throw new Error(`The selected ${target} engine is not installed or is not on PATH. Install it to run this target; building does not require it.`);
  if (result.error || result.status !== 0)
    throw new Error(`Could not start the selected ${target} engine: ${(result.error?.message || result.stderr || 'exit ' + result.status).trim().slice(-2000)}`);
}

/** Shared by the primary CLI and the compatibility launchers. Builds use Node. */
export async function runApplicationCli(argv, { defaultTarget = 'node', targetExecutable } = {}) {
  const options = parseLasmArguments(argv, { defaultTarget });
  const support = applicationSupport();
  if (options.command === 'help') {
    console.log(support ? 'Usage: lasm Main.lean [-- arguments…]\n       lasm build Main.lean [--output dist]\n\nOptions: --rebuild, --verbose, --help\nBuild and run ordinary Lean main in Node.' : cliUsage);
    return 0;
  }
  if (support && (options.target !== 'node' || options.input.endsWith('.json')))
    throw new Error('This Lasm candidate builds ordinary .lean applications for Node. Use lasm Main.lean or lasm build Main.lean.');
  if (engineName() !== 'node') throw new Error('Building Lean applications requires Node/npm. Run the primary lasm CLI with Node.');
  if (options.input.endsWith('.json')) {
    if (options.target !== 'node') throw new Error('Target selection for callable library bindings is not yet integrated with the full application runtime');
    const { build } = await import('./build.mjs');
    const result = await build(options.input, options.output);
    console.log(`Built ${result.module}: ${result.wasmBytes} bytes, ${result.modules.length} modules → ${result.output}`);
    return 0;
  }
  const executable = options.target === defaultTarget && targetExecutable
    ? targetExecutable : options.target === 'node' ? process.execPath : options.target;
  // A run needs its engine. Diagnose that before creating caches or downloading
  // build tools; build-only commands do not inspect or require the target engine.
  if (options.command === 'run') requireApplicationEngine(executable, options.target);
  const { buildApplication } = await import('./application-build.mjs');
  const result = await buildApplication(options.input, options);
  if (options.command === 'build') {
    console.error(`${result.cacheHit ? 'Reused' : 'Built'} Lean ${result.lean} for ${result.target}: ${result.output}`);
    return 0;
  }
  return runApplicationChild(executable,
    [...(options.target === 'deno' ? ['run', '-A'] : []), join(result.output, 'main.mjs'), ...options.args],
    `The selected ${options.target} engine is not installed or is not on PATH. Install it to run this target; building does not require it.`);
}
