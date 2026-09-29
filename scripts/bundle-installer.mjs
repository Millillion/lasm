import assert from 'node:assert/strict';
import { mkdir, cp, readFile, readdir, lstat, writeFile } from 'node:fs/promises';
import { dirname, join, relative, resolve, sep } from 'node:path';
import { createHash } from 'node:crypto';
import { hashFile } from '../src/managed-artifacts.mjs';

/** Bundle only the installer's production graph, resolved exactly as npm ci
 * placed it. Keep nested dependencies in their original lockfile locations.
 * npm pack then includes this graph through bundleDependencies: ['tar'].
 */
export async function bundleInstaller(root, destination) {
  root = resolve(root); destination = resolve(destination);
  const lockBytes = await readFile(join(root, 'package-lock.json'));
  const lock = JSON.parse(lockBytes);
  assert.equal(lock.lockfileVersion, 3, 'Installer packaging requires the committed npm v3 lockfile');
  const packages = {}, roots = { tar: 'node_modules/tar' };
  const keyFor = path => relative(root, path).split(sep).join('/');
  async function dependency(from, name) {
    assert.match(name, /^(?:@[a-z0-9._-]+\/)?[a-z0-9._-]+$/i);
    let base = from;
    for (;;) {
      const candidate = join(base, 'node_modules', name), key = keyFor(candidate);
      if (lock.packages[key]) return key;
      if (base === root) throw new Error(`Installer dependency ${name} is absent from the committed lockfile`);
      base = dirname(base);
      assert.ok(base === root || base.startsWith(root + sep), 'Dependency lookup escaped the source root');
    }
  }
  async function visit(key) {
    if (packages[key]) return;
    const locked = lock.packages[key], source = join(root, key), target = join(destination, key);
    assert.ok(locked && !locked.link && /^sha512-/.test(locked.integrity), `Missing registry integrity for ${key}`);
    assert.ok((await lstat(source)).isDirectory(), `Run npm ci before packaging: ${key}`);
    const manifest = JSON.parse(await readFile(join(source, 'package.json')));
    assert.equal(manifest.version, locked.version, `Installed dependency drift: ${key}`);
    assert.deepEqual(manifest.dependencies ?? {}, locked.dependencies ?? {}, `Dependency graph drift: ${key}`);
    assert.equal(Object.keys(manifest.optionalDependencies ?? {}).length, 0, 'Review optional installer dependencies before adding them');
    assert.equal(Object.keys(manifest.peerDependencies ?? {}).length, 0, 'Review peer installer dependencies before adding them');
    const record = packages[key] = { name: manifest.name, version: manifest.version, integrity: locked.integrity,
      resolved: locked.resolved, dependencies: {}, files: {} };
    await mkdir(dirname(target), { recursive: true });
    await cp(source, target, { recursive: true, errorOnExist: true, force: false,
      filter: file => file === source || !relative(source, file).split(sep).includes('node_modules') });
    async function inventory(directory) {
      for (const name of (await readdir(directory)).sort()) {
        const file = join(directory, name), info = await lstat(file);
        if (info.isDirectory()) await inventory(file);
        else if (info.isFile()) record.files[relative(target, file).split(sep).join('/')] = { bytes: info.size, sha256: await hashFile(file) };
        else throw new Error(`Unexpected installer dependency link or special file: ${file}`);
      }
    }
    await inventory(target);
    for (const name of Object.keys(manifest.dependencies ?? {}).sort()) {
      const child = await dependency(source, name);
      record.dependencies[name] = child;
      await visit(child);
    }
  }
  for (const key of Object.values(roots)) await visit(key);
  const manifest = { schema: 1, sourceLockSha256: createHash('sha256').update(lockBytes).digest('hex'), roots,
    packages: Object.fromEntries(Object.entries(packages).sort(([a], [b]) => a < b ? -1 : 1)) };
  const serialized = JSON.stringify(manifest, null, 2) + '\n';
  await writeFile(join(destination, 'installer-dependencies.json'), serialized);
  return { manifest, sha256: createHash('sha256').update(serialized).digest('hex') };
}
