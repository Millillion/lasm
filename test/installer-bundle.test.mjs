import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, mkdir, readFile, writeFile, rm } from 'node:fs/promises';
import { existsSync } from 'node:fs';
import { dirname, join, resolve } from 'node:path';
import { tmpdir } from 'node:os';
import { fileURLToPath } from 'node:url';
import { execFileSync } from 'node:child_process';
import { bundleInstaller } from '../scripts/bundle-installer.mjs';
import { hashFile } from '../src/managed-artifacts.mjs';

const root = fileURLToPath(new URL('../', import.meta.url));
const npm = [process.env.npm_execpath,
  join(dirname(process.execPath), 'node_modules/npm/bin/npm-cli.js'),
  resolve(dirname(process.execPath), '../lib/node_modules/npm/bin/npm-cli.js'),
].find(path => path?.endsWith('npm-cli.js') && existsSync(path));

test('the locked installer graph packs reproducibly and installs from an empty offline npm cache', { timeout: 60_000 }, async t => {
  assert.ok(npm, 'Use stock Node with its npm distribution for packaging tests');
  const base = await mkdtemp(join(tmpdir(), 'lasm-installer-bundle-'));
  t.after(() => rm(base, { recursive: true, force: true, maxRetries: 10, retryDelay: 100 }));
  const staging = join(base, 'package'), consumer = join(base, 'consumer');
  await mkdir(staging); await mkdir(consumer);
  const bundled = await bundleInstaller(root, staging);
  const versions = Object.fromEntries(Object.values(bundled.manifest.packages).map(p => [p.name, p.version]));
  assert.deepEqual(versions, { '@isaacs/fs-minipass': '4.0.1', chownr: '3.0.0', minipass: '7.1.3',
    minizlib: '3.1.0', tar: '7.5.22', yallist: '5.0.0' });
  await writeFile(join(staging, 'package.json'), JSON.stringify({ name: 'lasm-installer-control', version: '1.0.0',
    dependencies: { tar: versions.tar }, bundleDependencies: ['tar'], files: ['installer-dependencies.json'] }));
  const invoke = (cwd, args, cache) => execFileSync(process.execPath, [npm, ...args, '--offline', '--ignore-scripts',
    '--no-audit', '--no-fund', '--registry=https://registry.invalid', '--cache', join(base, cache)],
  { cwd, encoding: 'utf8', maxBuffer: 2 * 1024 * 1024, windowsHide: true, timeout: 30_000 });
  const packed = JSON.parse(invoke(staging, ['pack', '--json', '--pack-destination', base], 'pack-cache'))[0];
  const archive = join(base, packed.filename), hash = await hashFile(archive);
  invoke(staging, ['pack', '--json', '--pack-destination', base], 'pack-cache-2');
  assert.equal(await hashFile(archive), hash);
  for (const [path, dependency] of Object.entries(bundled.manifest.packages))
    for (const name of Object.keys(dependency.files)) assert.ok(packed.files.some(file => file.path === `${path}/${name}`), name);
  await writeFile(join(consumer, 'package.json'), '{"private":true}');
  invoke(consumer, ['install', archive], 'empty-consumer-cache');
  const installed = join(consumer, 'node_modules/lasm-installer-control');
  for (const [path, dependency] of Object.entries(bundled.manifest.packages)) {
    assert.equal(JSON.parse(await readFile(join(installed, path, 'package.json'))).version, dependency.version);
    for (const [name, expected] of Object.entries(dependency.files))
      assert.equal(await hashFile(join(installed, path, name)), expected.sha256, `${path}/${name}`);
  }
  const output = execFileSync(process.execPath, ['--input-type=module', '-e',
    'import {createRequire} from "node:module"; const require=createRequire(process.argv[1]); console.log(typeof require("tar").x)',
    join(installed, 'package.json')], { encoding: 'utf8', windowsHide: true });
  assert.equal(output.trim(), 'function');
});
