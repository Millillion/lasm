#!/usr/bin/env node
import { build } from '../src/build.mjs';
import { mainCommand } from '../src/main.mjs';

if (!['build', 'run'].includes(process.argv[2]) || !process.argv[3]) {
  console.error('Usage: lasm run <Main.lean> [-- arguments…]\n       lasm build <Main.lean | lasm.json> [output-directory]');
  process.exitCode = ['--help', '-h'].includes(process.argv[2]) ? 0 : 1;
} else {
  try {
    if (process.argv[2] === 'run' || !process.argv[3].endsWith('.json')) {
      process.exitCode = await mainCommand(process.argv.slice(3), process.argv[2]);
    } else {
      if (process.argv.length > 5) throw new Error('Usage: lasm build <lasm.json> [output-directory]');
      const result = await build(process.argv[3], process.argv[4]);
      console.log(`Built ${result.module}: ${result.wasmBytes} bytes, ${result.modules.length} modules → ${result.output}`);
    }
  } catch (error) {
    console.error(error.name === 'LeanIOError' ? 'uncaught exception: ' + error.message
      : (error.stderr?.toString() || error.stdout?.toString() || error.message).slice(-12000));
    process.exitCode = 1;
  }
}
