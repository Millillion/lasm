// A private, loopback-only Verdaccio registry for validating Lasm's npm packages
// (docs/TOOLCHAIN_SLIMMING.md, Phase 3). It never proxies or publishes to any
// public registry: no uplinks, and `publish` refuses every non-loopback URL.
//
//   node scripts/npm-dist/registry.mjs start   --dir DIR [--port 4873]
//   node scripts/npm-dist/registry.mjs publish --dir DIR --dist BUILD_DIR
//   node scripts/npm-dist/registry.mjs stop    --dir DIR
import assert from 'node:assert/strict';
import { parseArgs } from 'node:util';
import { mkdir, writeFile, readFile, rm, readdir } from 'node:fs/promises';
import { existsSync, openSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { spawn, execFileSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';
import { setTimeout as delay } from 'node:timers/promises';
import { findNpm } from '../../src/npm-artifacts.mjs';

export const verdaccioVersion = '6.10.4';
const root = fileURLToPath(new URL('../../', import.meta.url));
const [command, ...rest] = process.argv.slice(2);
const { values: args } = parseArgs({ args: rest, options: { dir: { type: 'string' }, port: { type: 'string', default: '4873' },
  dist: { type: 'string' }, tool: { type: 'string', default: join(root, '.cache/npm-dist/verdaccio') } } });
assert.ok(['start', 'publish', 'stop'].includes(command) && args.dir, 'Usage: registry.mjs start|publish|stop --dir DIR');
const dir = resolve(args.dir), npm = findNpm();
const runNpm = (npmArgs, options = {}) => execFileSync(npm.command, [...npm.args, ...npmArgs],
  { encoding: 'utf8', maxBuffer: 64 * 1024 * 1024, windowsHide: true, ...options });

export function loopbackRegistry(url) {
  const parsed = new URL(url);
  assert.ok(parsed.protocol === 'http:' && ['127.0.0.1', 'localhost', '[::1]'].includes(parsed.hostname),
    `Refusing a non-loopback registry: ${url}. Publication to public registries is not authorized.`);
  return parsed.href;
}

if (command === 'start') {
  const port = Number(args.port);
  assert.ok(Number.isInteger(port) && port > 1024 && port < 65536);
  const tool = resolve(args.tool), cli = join(tool, 'node_modules/verdaccio/bin/verdaccio');
  if (!existsSync(cli)) {
    await mkdir(tool, { recursive: true });
    await writeFile(join(tool, 'package.json'), '{"private":true}\n');
    runNpm(['install', '--no-audit', '--no-fund', '--ignore-scripts', '--save-exact', `verdaccio@${verdaccioVersion}`], { cwd: tool, stdio: 'inherit' });
  }
  await mkdir(join(dir, 'storage'), { recursive: true });
  const url = `http://127.0.0.1:${port}/`;
  // No uplinks: nothing is proxied from, or published to, any other registry.
  // Anonymous publication is accepted only on this loopback listener.
  await writeFile(join(dir, 'config.yaml'), [
    `storage: ${JSON.stringify(join(dir, 'storage'))}`,
    'max_body_size: 400mb',
    `listen: 127.0.0.1:${port}`,
    'auth:', '  htpasswd:', `    file: ${JSON.stringify(join(dir, 'htpasswd'))}`, '    max_users: -1',
    'uplinks: {}',
    'packages:', "  '**':", '    access: $all', '    publish: $anonymous $all', '    unpublish: $anonymous $all',
    'server:', '  keepAliveTimeout: 60',
    'log: { type: stdout, format: pretty, level: warn }', '',
  ].join('\n'));
  const log = openSync(join(dir, 'verdaccio.log'), 'a');
  const child = spawn(process.execPath, [cli, '--config', join(dir, 'config.yaml')], { detached: true, stdio: ['ignore', log, log], windowsHide: true });
  child.unref();
  await writeFile(join(dir, 'pid'), String(child.pid));
  for (let i = 0; i < 120; i++) {
    try { if ((await fetch(url + '-/ping')).ok) { await writeFile(join(dir, 'url'), url); console.log(url); process.exit(0); } } catch {}
    await delay(500);
  }
  throw new Error('Verdaccio did not start; see ' + join(dir, 'verdaccio.log'));
}

if (command === 'publish') {
  const url = loopbackRegistry((await readFile(join(dir, 'url'), 'utf8')).trim());
  const record = JSON.parse(await readFile(join(resolve(args.dist), 'npm-dist.json'), 'utf8'));
  // A private user configuration: no credentials of the user's own npm setup are read or sent.
  const userconfig = join(dir, 'npmrc');
  const host = new URL(url).host;
  await writeFile(userconfig, `registry=${url}\n//${host}/:_authToken=lasm-local-validation\n`);
  const tarballs = join(resolve(args.dist), 'packages');
  const files = [...record.packages.map(p => p.filename), record.main.filename];
  assert.deepEqual([...files].sort(), (await readdir(tarballs)).sort(), 'Publish exactly the recorded tarballs');
  for (const file of files) {
    const env = { ...process.env, npm_config_registry: url, npm_config_userconfig: userconfig };
    for (const key of Object.keys(env)) if (/^npm_config_(?:_auth|.*token|.*registry)$/i.test(key) && key !== 'npm_config_registry') delete env[key];
    runNpm(['publish', join(tarballs, file), '--registry', url, '--userconfig', userconfig, '--ignore-scripts', '--access', 'public',
      '--provenance=false', '--tag', 'latest', '--loglevel=warn'], { env, stdio: 'inherit' });
  }
  // The registry must serve the same bytes (integrity) that were packed.
  for (const pkg of [...record.packages, record.main]) {
    const meta = await (await fetch(new URL(pkg.name.replace('/', '%2f'), url))).json();
    assert.equal(meta.versions?.[pkg.version]?.dist?.integrity, pkg.integrity, `Registry integrity differs for ${pkg.name}`);
  }
  console.log(`Published ${files.length} packages to ${url}`);
}

if (command === 'stop') {
  try { process.kill(Number(await readFile(join(dir, 'pid'), 'utf8')), 'SIGTERM'); } catch (error) { if (error.code !== 'ESRCH' && error.code !== 'ENOENT') throw error; }
  await rm(join(dir, 'pid'), { force: true });
}
