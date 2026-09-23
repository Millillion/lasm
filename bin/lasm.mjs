#!/usr/bin/env node
import { parseLasmArguments, cliUsage } from '../src/cli-arguments.mjs';
import { spawn } from 'node:child_process';
import { constants } from 'node:os';
import { join } from 'node:path';

try {
  const options = parseLasmArguments(process.argv.slice(2));
  if (options.command === 'help') console.log(cliUsage);
  else if (options.input.endsWith('.json')) {
    if (options.target !== 'node') throw new Error('Target selection for callable library bindings is not yet integrated with the full application runtime');
    const { build } = await import('../src/build.mjs');
    const result = await build(options.input, options.output);
    console.log(`Built ${result.module}: ${result.wasmBytes} bytes, ${result.modules.length} modules → ${result.output}`);
  } else {
    const { buildApplication } = await import('../src/application-build.mjs');
    const result = await buildApplication(options.input, options);
    if (options.command === 'build') console.error(`${result.cacheHit ? 'Reused' : 'Built'} Lean ${result.lean} for ${result.target}: ${result.output}`);
    else {
      const executable = options.target === 'node' ? process.execPath : options.target;
      const child = spawn(executable, [...(options.target === 'deno' ? ['run', '-A'] : []), join(result.output, 'main.mjs'), ...options.args],
        { stdio: 'inherit', windowsHide: true });
      const signals = ['SIGINT', 'SIGTERM'];
      const forward = signal => { if (child.exitCode === null) child.kill(signal); };
      const handlers = signals.map(signal => { const handler = () => forward(signal); process.on(signal, handler); return handler; });
      try {
        process.exitCode = await new Promise((resolve, reject) => {
          child.once('error', error => reject(error.code === 'ENOENT'
            ? new Error(`The selected ${options.target} engine is not installed or is not on PATH. Install it to run this target; building does not require it.`) : error));
          child.once('exit', (code, signal) => resolve(code ?? 128 + (constants.signals[signal] ?? 1)));
        });
      } finally { signals.forEach((signal, index) => process.off(signal, handlers[index])); }
    }
  }
} catch (error) {
  console.error(error.name === 'LeanIOError' ? 'uncaught exception: ' + error.message
    : (error.stderr?.toString() || error.stdout?.toString() || error.message).slice(-12000));
  process.exitCode = 1;
}
