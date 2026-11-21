// Builds the function entry (ServerFunction.lean, its handler the program's
// default export) and packages it as an Azure Functions app or a Google Cloud
// Functions source directory. Those platforms load their own npm package
// (@azure/functions, @google-cloud/functions-framework), which Conduit does
// not depend on anywhere else, so it is installed into the build alone, and
// `lasm package` then writes azure-functions/ or cloud-functions/ with it.
//   node deploy/package-hosted.mjs azure-functions|cloud-functions
//   (npm run build:azure-functions, npm run build:cloud-functions)
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
run('npx', ['lasm', 'build', 'ServerFunction.lean', '--output', 'dist/function']);
// Conduit deploys no npm package of its own: node_modules holds only the platform's.
rmSync(join(root, 'dist/function/node_modules'), { recursive: true, force: true });
run('npm', ['install', '--prefix', 'dist/function', '--no-save', '--no-package-lock', '--no-bin-links', '--no-audit', '--no-fund', dependency[target]]);
run('npx', ['lasm', 'package', 'dist/function', '--target', target]);
