// A private, loopback-only Verdaccio registry for validating Lasm's npm packages
// (docs/TOOLCHAIN_SLIMMING.md, Phase 3). It never proxies or publishes to any
// public registry: no uplinks, and `publish` refuses every non-loopback URL.
//
//   node scripts/npm-dist/registry.mjs start   --dir DIR [--port 4873]
//   node scripts/npm-dist/registry.mjs publish --dir DIR --dist BUILD_DIR [--mirror-template hono]...
// --mirror-template copies the exact npm dependencies a `lasm init` template pins
// (src/init.mjs) from registry.npmjs.org into the loopback registry, read-only and
// integrity-checked, so a consumer can install a scaffolded app without uplinks.
//   node scripts/npm-dist/registry.mjs stop    --dir DIR
import assert from 'node:assert/strict';
import { parseArgs } from 'node:util';
import { mkdir, writeFile, readFile, rm, readdir } from 'node:fs/promises';
import { existsSync, openSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { spawn, execFileSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';
import { setTimeout as delay } from 'node:timers/promises';
import { createHash } from 'node:crypto';
import { x as extractTar } from 'tar';
import { findNpm } from '../../src/npm-artifacts.mjs';

export const verdaccioVersion = '6.10.4';
const root = fileURLToPath(new URL('../../', import.meta.url));
const [command, ...rest] = process.argv.slice(2);
const { values: args } = parseArgs({ args: rest, options: { dir: { type: 'string' }, port: { type: 'string', default: '4873' },
  dist: { type: 'string' }, tool: { type: 'string', default: join(root, '.cache/npm-dist/verdaccio') },
  'mirror-template': { type: 'string', multiple: true, default: [] } } });
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
  // Tool packages first, then the CLI that pins them, then create-lasm, which pins the CLI.
  const published = [...record.packages, record.main, ...(record.create ? [record.create] : [])];
  const files = published.map(p => p.filename);
  assert.deepEqual([...files].sort(), (await readdir(tarballs)).sort(), 'Publish exactly the recorded tarballs');
  const env = { ...process.env, npm_config_registry: url, npm_config_userconfig: userconfig };
  for (const key of Object.keys(env)) if (/^npm_config_(?:_auth|.*token|.*registry)$/i.test(key) && key !== 'npm_config_registry') delete env[key];
  const manifestOf = async file => {
    const scratch = join(dir, 'manifest-' + process.pid);
    await rm(scratch, { recursive: true, force: true }); await mkdir(scratch, { recursive: true });
    await extractTar({ file, cwd: scratch, strict: true, preservePaths: false, preserveOwner: false, filter: name => name === 'package/package.json' });
    const manifest = JSON.parse(await readFile(join(scratch, 'package/package.json'), 'utf8'));
    await rm(scratch, { recursive: true });
    return manifest;
  };
  const setsRegistry = manifest => Object.keys(manifest.publishConfig ?? {}).some(key => /registry$/i.test(key) || key.startsWith('@'));
  const publish = async file => {
    // npm lets publishConfig.registry override --registry; Lasm's own packages never set it.
    const manifest = await manifestOf(file);
    assert.ok(!setsRegistry(manifest), `${manifest.name} sets a publishConfig registry`);
    runNpm(['publish', file, '--registry', url, '--userconfig', userconfig, '--ignore-scripts', '--access', 'public',
      '--provenance=false', '--tag', 'latest', '--loglevel=warn'], { env, stdio: 'inherit' });
  };
  /** A third-party tarball, uploaded with the registry API itself (as npm publish
   * does) to the loopback URL only: their publishConfig names the public registry. */
  const upload = async (file, integrity) => {
    const manifest = await manifestOf(file), data = await readFile(file);
    const filename = `${manifest.name.split('/').at(-1)}-${manifest.version}.tgz`;
    const { publishConfig, ...version } = manifest;
    const body = { _id: manifest.name, name: manifest.name, 'dist-tags': { latest: manifest.version },
      versions: { [manifest.version]: { ...version, _id: `${manifest.name}@${manifest.version}`,
        dist: { integrity, shasum: createHash('sha1').update(data).digest('hex'), tarball: new URL(`${manifest.name.replace('/', '%2f')}/-/${filename}`, url).href } } },
      _attachments: { [filename]: { content_type: 'application/octet-stream', data: data.toString('base64'), length: data.length } } };
    const response = await fetch(new URL(manifest.name.replace('/', '%2f'), loopbackRegistry(url)), { method: 'PUT',
      headers: { 'content-type': 'application/json', authorization: 'Bearer lasm-local-validation' }, body: JSON.stringify(body) });
    assert.ok(response.ok, `Uploading ${manifest.name}@${manifest.version} failed: ${response.status} ${await response.text()}`);
  };
  // Third-party dependencies of scaffolded templates, byte for byte from the public registry.
  const mirrored = [];
  if (args['mirror-template'].length) {
    const { templateDependencies } = await import('../../src/init.mjs');
    const mirror = join(dir, 'mirror'), publicConfig = join(dir, 'npmrc-public');
    await mkdir(mirror, { recursive: true });
    await writeFile(publicConfig, 'registry=https://registry.npmjs.org/\n');
    const publicEnv = { ...env, npm_config_registry: 'https://registry.npmjs.org/', npm_config_userconfig: publicConfig };
    for (const template of args['mirror-template']) {
      assert.ok(templateDependencies[template], `Template ${template} has no npm dependencies`);
      for (const [name, version] of Object.entries(templateDependencies[template])) {
        const [packed] = JSON.parse(runNpm(['pack', `${name}@${version}`, '--json', '--ignore-scripts', '--pack-destination', mirror,
          '--registry', 'https://registry.npmjs.org/', '--userconfig', publicConfig, '--loglevel=error'], { env: publicEnv }));
        const meta = JSON.parse(runNpm(['view', `${name}@${version}`, '--json', '--registry', 'https://registry.npmjs.org/',
          '--userconfig', publicConfig], { env: publicEnv }));
        assert.equal(packed.integrity, meta.dist?.integrity, `${name}@${version} differs from the public registry`);
        // Peer dependencies are other pinned template packages; real dependencies would need mirroring too.
        assert.deepEqual(meta.dependencies ?? {}, {}, `${name}@${version} has dependencies; mirror them too`);
        await upload(join(mirror, packed.filename), packed.integrity);
        mirrored.push({ name, version, integrity: packed.integrity });
      }
    }
  }
  for (const file of files) await publish(join(tarballs, file));
  // The registry must serve the same bytes (integrity) that were packed.
  for (const pkg of [...published, ...mirrored]) {
    const meta = await (await fetch(new URL(pkg.name.replace('/', '%2f'), url))).json();
    assert.equal(meta.versions?.[pkg.version]?.dist?.integrity, pkg.integrity, `Registry integrity differs for ${pkg.name}`);
  }
  console.log(`Published ${files.length} packages${mirrored.length ? ` and mirrored ${mirrored.map(p => `${p.name}@${p.version}`).join(', ')}` : ''} to ${url}`);
}

if (command === 'stop') {
  try { process.kill(Number(await readFile(join(dir, 'pid'), 'utf8')), 'SIGTERM'); } catch (error) { if (error.code !== 'ESRCH' && error.code !== 'ENOENT') throw error; }
  await rm(join(dir, 'pid'), { force: true });
}
