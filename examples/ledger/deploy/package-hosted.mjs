// Packages the function build (dist/function: ServerFunction.lean, which publishes
// the handler with exportDefault) as an Azure Functions app or a Google
// Cloud Functions source directory: those platforms load their own npm
// package (@azure/functions, @google-cloud/functions-framework), so it is
// installed into the build first, alone, and `lasm package` then writes
// azure-functions/ or gcf/ with it.
//   node deploy/package-hosted.mjs azure-functions|cloud-functions     (npm run build:azure-functions, npm run build:cloud-functions)
import { spawnSync } from 'node:child_process';
import { rmSync } from 'node:fs';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('..', import.meta.url));
const dependency = { 'azure-functions': '@azure/functions@4.17.0', 'cloud-functions': '@google-cloud/functions-framework@5.0.5' };
const target = process.argv[2];
if (!dependency[target]) throw new Error('Usage: node deploy/package-hosted.mjs azure-functions|cloud-functions');
const run = (command, args) => {
  const r = spawnSync(command, args, { cwd: root, stdio: 'inherit', shell: process.platform === 'win32' });
  if (r.status !== 0) process.exit(r.status ?? 1);
};
// Ledger deploys no npm package of its own: node_modules holds only the platform's.
rmSync(join(root, 'dist/function/node_modules'), { recursive: true, force: true });
run('npm', ['install', '--prefix', 'dist/function', '--no-save', '--no-package-lock', '--no-bin-links', '--no-audit', '--no-fund', dependency[target]]);
run('npx', ['lasm', 'package', 'dist/function', '--target', target]);
