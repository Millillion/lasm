// Serves the `vercel build` output (.vercel/output/functions/index.func) with
// Vercel's own Node launcher, the dev server of @vercel/node that `vercel dev`
// runs, inside AWS Lambda's Node 24 image (Vercel Functions run on AWS
// Lambda), read-only with /tmp writable and 1 GB of memory, on 127.0.0.1:PORT.
// `vercel dev` itself needs a Vercel login, so it is not used.
//   node test/vercel-serve.mjs PORT
// @vercel/node comes from the vercel CLI's node_modules (VERCEL_NODE_MODULES,
// else the directory holding the vercel on PATH).
import { spawn, spawnSync } from 'node:child_process';
import { existsSync, realpathSync } from 'node:fs';
import { dirname, join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('..', import.meta.url));
const port = Number(process.argv[2]);
const func = join(root, '.vercel/output/functions/index.func');
if (!existsSync(join(func, '.vc-config.json'))) throw new Error(`${func} is missing: run npm run build:vercel (vercel build) first`);
let modules = process.env.VERCEL_NODE_MODULES;
if (!modules) {
  const bin = spawnSync('sh', ['-c', 'command -v vercel'], { encoding: 'utf8' }).stdout.trim();
  if (bin) modules = dirname(dirname(bin));
}
if (!modules || !existsSync(join(modules, '@vercel/node/dist/dev-server.mjs')))
  throw new Error('@vercel/node not found: set VERCEL_NODE_MODULES to the vercel CLI\'s node_modules');
const name = `conduit-vercel-${port}`;
const child = spawn('docker', ['run', '--rm', '--name', name, '--network', 'host', '--read-only', '--tmpfs', '/tmp',
  '--memory=1g', '--memory-swap=1g', '-v', `${func}:/var/task:ro`, '-v', `${resolve(realpathSync(modules))}:/opt/vercel/node_modules:ro`,
  '-w', '/var/task', '-e', 'VERCEL_DEV_ENTRYPOINT=lasm-vercel.mjs', '-e', `VERCEL_DEV_PORT=${port}`,
  '-e', 'VERCEL_DEV_CONFIG={}', '-e', 'DATABASE_PATH=/tmp/conduit.db', ...(process.env.JWT_SECRET ? ['-e', 'JWT_SECRET'] : []),
  '--entrypoint', 'node', 'public.ecr.aws/lambda/nodejs:24', '/opt/vercel/node_modules/@vercel/node/dist/dev-server.mjs'], { stdio: 'inherit' });
const stop = () => spawnSync('docker', ['rm', '-f', name], { stdio: 'ignore' });
for (const signal of ['SIGTERM', 'SIGINT']) process.on(signal, () => { stop(); process.exit(0); });
child.on('exit', code => process.exit(code ?? 0));
