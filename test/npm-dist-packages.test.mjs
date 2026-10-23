import test from 'node:test';
import assert from 'node:assert/strict';
import { readFile } from 'node:fs/promises';
import { releaseVersion, toolPackages, toolPackageJson, toolPackageReadme, npmToolManifest, mainPackageJson, maximumPackageBytes } from '../scripts/npm-dist/packages.mjs';
import { validateNpmToolManifest, npmEntryFor } from '../src/npm-artifacts.mjs';

const json = async path => JSON.parse(await readFile(new URL(path, import.meta.url), 'utf8'));
const catalogs = async () => ({ toolchains: await json('../src/toolchains.json'), linkToolchain: await json('../src/link-toolchain.json'),
  git: await json('../src/git-tools.json') });

test('package versions come from the immutable release that published each archive', () => {
  assert.equal(releaseVersion('https://github.com/Millillion/lasm/releases/download/lean-4.35.0-tiers-v1/x.tar.zst'), '4.35.0-lasm.1');
  assert.equal(releaseVersion('https://github.com/Millillion/lasm/releases/download/emscripten-6.0.9-lasm-toolchain-v2/x'), '6.0.9-lasm.2');
  assert.equal(releaseVersion('https://github.com/desktop/dugite-native/releases/download/v2.53.0-4/x.tar.gz'), '2.53.0-dugite.4');
  assert.throws(() => releaseVersion('https://example.com/releases/download/latest/x'), /No package version rule/);
});

test('every catalogued Lean release maps to platform, shared and on-demand packages under the size ceiling', async () => {
  const c = await catalogs();
  for (const lean of Object.keys(c.toolchains.lean).filter(version => c.toolchains.lean[version].tiers)) {
    const packages = toolPackages({ lean, ...c });
    const by = install => packages.filter(p => p.install === install).map(p => p.name).sort();
    assert.deepEqual(by('optional'), ['darwin-arm64', 'darwin-x64', 'linux-arm64', 'linux-x64', 'win32-x64']
      .flatMap(p => [`@lasm/emscripten-${p}`, `@lasm/lean-${p}`]).sort());
    assert.deepEqual(by('required'), ['@lasm/emscripten-shared', '@lasm/lean-core-init', '@lasm/lean-core-std']);
    assert.deepEqual(by('demand'), ['@lasm/git-darwin-arm64', '@lasm/git-darwin-x64', '@lasm/git-linux-arm64', '@lasm/git-linux-x64',
      '@lasm/git-win32-x64', '@lasm/lean-ext-elab', '@lasm/lean-ext-meta', '@lasm/lean-ext-rest']);
    for (const pkg of packages) {
      assert.ok(pkg.artifact.bytes <= maximumPackageBytes);
      const metadata = toolPackageJson(pkg);
      assert.equal(metadata.scripts, undefined, 'Tool packages never run install scripts');
      assert.equal(metadata.main, undefined);
      if (pkg.platform?.startsWith('linux')) assert.deepEqual(metadata.libc, ['glibc']);
      if (pkg.platform) assert.deepEqual([...metadata.os, ...metadata.cpu], pkg.platform.split('-'));
      else assert.equal(metadata.os, undefined);
      assert.match(toolPackageReadme(pkg), new RegExp(pkg.artifact.sha256));
    }
    // Shared Emscripten packages keep one version across Lean releases.
    assert.equal(packages.find(p => p.name === '@lasm/emscripten-shared').version, '6.0.9-lasm.1');
  }
  const scoped = toolPackages({ lean: '4.35.0', ...c, git: undefined, scope: '@example-org' });
  assert.ok(scoped.every(p => p.name.startsWith('@example-org/') && !p.name.includes('git-')));
  assert.throws(() => toolPackages({ lean: '4.35.0', ...c, scope: 'lasm' }));
});

test('the runtime manifest and main package pin every tool package exactly', async () => {
  const c = await catalogs();
  const packages = toolPackages({ lean: '4.35.0', ...c });
  const packed = Object.fromEntries(packages.map((p, i) => [p.name, { integrity: 'sha512-' + Buffer.alloc(64, i).toString('base64') }]));
  const manifest = validateNpmToolManifest(npmToolManifest(packages, packed));
  assert.equal(Object.keys(manifest.artifacts).length, packages.length);
  const bin = c.toolchains.lean['4.35.0'].tiers.bin['linux-x64'];
  assert.deepEqual(npmEntryFor(manifest, bin), { package: '@lasm/lean-linux-x64', version: '4.35.0-lasm.1', file: bin.name,
    bytes: bin.bytes, integrity: packed['@lasm/lean-linux-x64'].integrity, install: 'optional', platform: 'linux-x64' });
  const native = c.linkToolchain.native['win32-x64'];
  assert.equal(npmEntryFor(manifest, native).file, native.name + '.tar.zst');
  assert.throws(() => npmToolManifest(packages, {}), /Missing packed integrity/);

  const base = { name: '@lasm/compiler', version: '0.1.0-experimental.1', private: true, dependencies: { tar: '7.5.22' },
    bundleDependencies: ['tar'], bin: { lasm: 'bin/lasm.mjs' } };
  const main = mainPackageJson(base, packages, { name: '@lasm/compiler', version: '0.1.0-experimental.1.npm.1' });
  assert.equal(main.private, undefined);
  assert.deepEqual(main.bundleDependencies, ['tar']);
  assert.deepEqual(Object.keys(main.dependencies), ['@lasm/emscripten-shared', '@lasm/lean-core-init', '@lasm/lean-core-std', 'tar']);
  assert.equal(Object.keys(main.optionalDependencies).length, 10);
  assert.ok(!Object.keys({ ...main.dependencies, ...main.optionalDependencies }).some(name => /ext-|git-/.test(name)),
    'On-demand packages are never installed by default');
  assert.throws(() => mainPackageJson({ ...base, dependencies: { tar: '^7.5.22' } }, packages, { name: 'x', version: '1.0.0' }), /exact versions/);
  assert.equal(main.license, undefined, 'The base licence is kept unless one is given');
  const licensed = mainPackageJson({ ...base, license: 'UNLICENSED', files: ['bin', 'src'] }, packages, { name: '@lasm/cli', version: '0.1.0', license: 'MIT' });
  assert.equal(licensed.license, 'MIT');
  assert.deepEqual(licensed.files, ['bin', 'src', 'LICENSE']);
});
