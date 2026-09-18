#!/usr/bin/env node
import { mainCommand } from './src/main.mjs';
try { process.exitCode = await mainCommand(process.argv.slice(2)); }
catch (error) {
  console.error(error.name === 'LeanIOError' ? 'uncaught exception: ' + error.message
    : (error.stderr?.toString() || error.stdout?.toString() || error.message).slice(-12000));
  process.exitCode = 1;
}
