#!/usr/bin/env node
// Check the Node release before loading the compiler, so an old Node gets a
// clear message instead of a module or syntax error.
const [major] = process.versions.node.split('.').map(Number);
if (major < 24) {
  console.error(`Lasm requires Node 24 or newer; you are running Node ${process.versions.node}. Install Node 24 or newer and retry.`);
  process.exit(1);
}
const { runApplicationCli, reportCliError } = await import('../src/application-cli.mjs');
try { process.exitCode = await runApplicationCli(process.argv.slice(2)); }
catch (error) { reportCliError(error); process.exitCode = 1; }
