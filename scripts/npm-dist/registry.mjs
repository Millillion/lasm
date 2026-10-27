// A private, loopback-only Verdaccio registry for validating Lasm's npm packages
// (docs/TOOLCHAIN_SLIMMING.md, Phase 3). It never proxies or publishes to any
// public registry: no uplinks, and `publish` refuses every non-loopback URL.
//
//   node scripts/npm-dist/registry.mjs start   --dir DIR [--port 4873]
//   node scripts/npm-dist/registry.mjs publish --dir DIR --dist BUILD_DIR [--mirror-template hono]...
// --mirror-template copies the exact npm dependencies a `lasm init` template pins,
// with their whole dependency tree (npm's lockfile resolution against registry.npmjs.org,
// every platform's optional packages included); --mirror-closure NAME@VERSION does the
// same for another package (the launch rehearsal's vite).
// (src/init.mjs) from registry.npmjs.org into the loopback registry, read-only and
// integrity-checked, so a consumer can install a scaffolded app without uplinks.
// --mirror-bundled copies the CLI's bundled dependencies (bundleDependencies, at the
// bundled versions) the same way: npm installs them from the CLI tarball, but Bun and
// Deno resolve them from the registry.
//   node scripts/npm-dist/registry.mjs mirror  --dir DIR --mirror-template hono   (only the template dependencies)
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
  'mirror-template': { type: 'string', multiple: true, default: [] }, 'mirror-bundled': { type: 'boolean', default: false },
  'mirror-closure': { type: 'string', multiple: true, default: [] } } });
assert.ok(['start', 'publish', 'mirror', 'stop'].includes(command) && args.dir, 'Usage: registry.mjs start|publish|mirror|stop --dir DIR');
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

if (command === 'publish' || command === 'mirror') {
  const url = loopbackRegistry((await readFile(join(dir, 'url'), 'utf8')).trim());
  const record = command === 'publish' ? JSON.parse(await readFile(join(resolve(args.dist), 'npm-dist.json'), 'utf8'))
    : { packages: [], main: undefined };
  // A private user configuration: no credentials of the user's own npm setup are read or sent.
  const userconfig = join(dir, 'npmrc');
  const host = new URL(url).host;
  await writeFile(userconfig, `registry=${url}\n//${host}/:_authToken=lasm-local-validation\n`);
  const tarballs = command === 'publish' ? join(resolve(args.dist), 'packages') : undefined;
  // Tool packages first, then the CLI that pins them, then @lasm/create, which pins the CLI.
  const published = command === 'publish' ? [...record.packages, record.main, ...(record.create ? [record.create] : [])] : [];
  const files = published.map(p => p.filename);
  if (command === 'publish') assert.deepEqual([...files].sort(), (await readdir(tarballs)).sort(), 'Publish exactly the recorded tarballs');
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
  const mirror = join(dir, 'mirror'), publicConfig = join(dir, 'npmrc-public');
  const publicEnv = { ...env, npm_config_registry: 'https://registry.npmjs.org/', npm_config_userconfig: publicConfig };
  const mirrorPublic = async (name, version) => {
    const [packed] = JSON.parse(runNpm(['pack', `${name}@${version}`, '--json', '--ignore-scripts', '--pack-destination', mirror,
      '--registry', 'https://registry.npmjs.org/', '--userconfig', publicConfig, '--loglevel=error'], { env: publicEnv }));
    const meta = JSON.parse(runNpm(['view', `${name}@${version}`, '--json', '--registry', 'https://registry.npmjs.org/',
      '--userconfig', publicConfig], { env: publicEnv }));
    assert.equal(packed.integrity, meta.dist?.integrity, `${name}@${version} differs from the public registry`);
    await upload(join(mirror, packed.filename), packed.integrity);
    mirrored.push({ name, version, integrity: packed.integrity });
    return meta;
  };
  if (args['mirror-template'].length || args['mirror-bundled'] || args['mirror-closure'].length) {
    await mkdir(mirror, { recursive: true });
    await writeFile(publicConfig, 'registry=https://registry.npmjs.org/\n');
  }
  if (args['mirror-bundled']) {
    assert.ok(command === 'publish', '--mirror-bundled needs publish (the CLI tarball)');
    // Every package directory under the CLI's node_modules (nested ones too), at its bundled version.
    const scratch = join(dir, 'bundled-' + process.pid);
    await rm(scratch, { recursive: true, force: true }); await mkdir(scratch, { recursive: true });
    const root = /^package\/(?:node_modules\/(?:@[^/]+\/)?[^/@][^/]*\/)+package\.json$/;
    await extractTar({ file: join(tarballs, record.main.filename), cwd: scratch, strict: true, preservePaths: false, preserveOwner: false, filter: name => root.test(name) });
    const bundled = new Map();
    for (const entry of await readdir(scratch, { recursive: true, withFileTypes: true })) {
      if (!entry.isFile() || entry.name !== 'package.json') continue;
      const meta = JSON.parse(await readFile(join(entry.parentPath, entry.name), 'utf8'));
      if (meta.name && meta.version) bundled.set(`${meta.name}@${meta.version}`, meta);
    }
    await rm(scratch, { recursive: true });
    assert.ok(bundled.size, 'The CLI bundles no dependencies');
    const names = new Set([...bundled.values()].map(meta => meta.name));
    for (const meta of bundled.values()) {
      const published = await mirrorPublic(meta.name, meta.version);
      for (const dependency of Object.keys(published.dependencies ?? {}))
        assert.ok(names.has(dependency), `${meta.name}@${meta.version} depends on ${dependency}, which the CLI does not bundle`);
    }
  }
  if (args['mirror-template'].length || args['mirror-closure'].length) {
    const { templateDependencies } = await import('../../src/init.mjs');
    const roots = {};
    for (const template of args['mirror-template']) {
      assert.ok(templateDependencies[template], `Template ${template} has no npm dependencies`);
      Object.assign(roots, templateDependencies[template]);
    }
    for (const spec of args['mirror-closure']) {
      const at = spec.lastIndexOf('@');
      assert.ok(at > 0, `--mirror-closure takes NAME@VERSION: ${spec}`);
      roots[spec.slice(0, at)] = spec.slice(at + 1);
    }
    // npm resolves the whole tree against the public registry (no install, no scripts).
    const resolver = join(dir, 'mirror-resolve');
    await rm(resolver, { recursive: true, force: true }); await mkdir(resolver, { recursive: true });
    await writeFile(join(resolver, 'package.json'), JSON.stringify({ name: 'lasm-mirror', private: true, dependencies: roots }, null, 2) + '\n');
    runNpm(['install', '--package-lock-only', '--ignore-scripts', '--no-audit', '--no-fund', '--registry', 'https://registry.npmjs.org/',
      '--userconfig', publicConfig, '--loglevel=error'], { cwd: resolver, env: publicEnv });
    const lock = JSON.parse(await readFile(join(resolver, 'package-lock.json'), 'utf8'));
    const seen = new Set(mirrored.map(p => `${p.name}@${p.version}`));
    for (const [path, entry] of Object.entries(lock.packages)) {
      if (!path) continue;
      const name = entry.name ?? path.slice(path.lastIndexOf('node_modules/') + 'node_modules/'.length);
      if (seen.has(`${name}@${entry.version}`) || name.startsWith('@lasm/')) continue;
      seen.add(`${name}@${entry.version}`);
      assert.ok(entry.resolved?.startsWith('https://registry.npmjs.org/') && /^sha512-/.test(entry.integrity ?? ''), `${name}@${entry.version}: unexpected lock entry`);
      // The tarball npm resolved, checked against the lockfile's (the registry's) integrity.
      const response = await fetch(entry.resolved, { signal: AbortSignal.timeout(300_000) });
      assert.ok(response.ok, `${entry.resolved}: HTTP ${response.status}`);
      const data = Buffer.from(await response.arrayBuffer());
      const integrity = 'sha512-' + createHash('sha512').update(data).digest('base64');
      assert.equal(integrity, entry.integrity, `${name}@${entry.version} differs from the public registry`);
      const file = join(mirror, `${name.replace('/', '__')}-${entry.version}.tgz`);
      await writeFile(file, data);
      await upload(file, integrity);
      mirrored.push({ name, version: entry.version, integrity });
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
