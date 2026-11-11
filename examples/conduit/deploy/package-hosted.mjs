// Packages the Node build (dist/server) as an Azure Functions app or a Google
// Cloud Functions source directory: those platforms load their own npm
// package (@azure/functions, @google-cloud/functions-framework), so it is
// installed into the build first, with Conduit's own npm packages
// (package.json's dependencies: the Node server's @hono/node-server), and
// `lasm package` then writes azure-functions/ or gcf/ with them.
//   node deploy/package-hosted.mjs azure|gcf     (npm run build:azure, npm run build:gcf)
import { spawnSync } from 'node:child_process';
import { readFileSync, rmSync } from 'node:fs';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('..', import.meta.url));
const dependency = { azure: '@azure/functions@4.17.0', gcf: '@google-cloud/functions-framework@5.0.5' };
const target = process.argv[2];
if (!dependency[target]) throw new Error('Usage: node deploy/package-hosted.mjs azure|gcf');
const run = (command, args) => {
  const r = spawnSync(command, args, { cwd: root, stdio: 'inherit', shell: process.platform === 'win32' });
  if (r.status !== 0) process.exit(r.status ?? 1);
};
// node_modules holds Conduit's own packages, at the versions package.json pins, and the platform's.
const own = Object.entries(JSON.parse(readFileSync(join(root, 'package.json'), 'utf8')).dependencies ?? {}).map(([name, version]) => `${name}@${version}`);
rmSync(join(root, 'dist/server/node_modules'), { recursive: true, force: true });
run('npm', ['install', '--prefix', 'dist/server', '--no-save', '--no-package-lock', '--no-bin-links', '--no-audit', '--no-fund', dependency[target], ...own]);
run('npx', ['lasm', 'package', 'dist/server', '--target', target]);
