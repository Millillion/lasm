#!/usr/bin/env node
import { build } from '../src/build.mjs';

if (process.argv[2] !== 'build' || !process.argv[3] || process.argv.length > 5) {
  console.error('Usage: lasm build <lasm.json> [output-directory]');
  process.exitCode = 1;
} else {
  try {
    const result = await build(process.argv[3], process.argv[4]);
    console.log(`Built ${result.module}: ${result.wasmBytes} bytes, ${result.modules.length} modules → ${result.output}`);
  } catch (error) {
    console.error((error.stderr?.toString() || error.stdout?.toString() || error.message).slice(-12000));
    process.exitCode = 1;
  }
}
