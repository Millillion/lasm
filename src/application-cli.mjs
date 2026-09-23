import { parseLasmArguments, cliUsage } from './cli-arguments.mjs';
import { spawn } from 'node:child_process';
import { constants } from 'node:os';
import { join } from 'node:path';
import { engineName } from './js-engine.mjs';

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

/** Shared by the primary CLI and the compatibility launchers. Builds use Node. */
export async function runApplicationCli(argv, { defaultTarget = 'node', targetExecutable } = {}) {
  const options = parseLasmArguments(argv, { defaultTarget });
  if (options.command === 'help') { console.log(cliUsage); return 0; }
  if (engineName() !== 'node') throw new Error('Building Lean applications requires Node/npm. Run the primary lasm CLI with Node.');
  if (options.input.endsWith('.json')) {
    if (options.target !== 'node') throw new Error('Target selection for callable library bindings is not yet integrated with the full application runtime');
    const { build } = await import('./build.mjs');
    const result = await build(options.input, options.output);
    console.log(`Built ${result.module}: ${result.wasmBytes} bytes, ${result.modules.length} modules → ${result.output}`);
    return 0;
  }
  const { buildApplication } = await import('./application-build.mjs');
  const result = await buildApplication(options.input, options);
  if (options.command === 'build') {
    console.error(`${result.cacheHit ? 'Reused' : 'Built'} Lean ${result.lean} for ${result.target}: ${result.output}`);
    return 0;
  }
  const executable = options.target === defaultTarget && targetExecutable
    ? targetExecutable : options.target === 'node' ? process.execPath : options.target;
  return runApplicationChild(executable,
    [...(options.target === 'deno' ? ['run', '-A'] : []), join(result.output, 'main.mjs'), ...options.args],
    `The selected ${options.target} engine is not installed or is not on PATH. Install it to run this target; building does not require it.`);
}
