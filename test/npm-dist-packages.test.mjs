import test from 'node:test';
import assert from 'node:assert/strict';
import { readFile } from 'node:fs/promises';
import { releaseVersion, toolPackages, toolPackageJson, toolPackageReadme, npmToolManifest, mainPackageJson, maximumPackageBytes,
  cTierLicense, createPackageJson, createPackageLicense } from '../scripts/npm-dist/packages.mjs';
import { leanDistribution } from '../src/managed-lean.mjs';
import { validateNpmToolManifest, npmEntryFor } from '../src/npm-artifacts.mjs';

const json = async path => JSON.parse(await readFile(new URL(path, import.meta.url), 'utf8'));
const catalogs = async () => ({ toolchains: await json('../src/toolchains.json'), linkToolchain: await json('../src/link-toolchain.json'),
});

test('package versions come from the immutable release that published each archive', () => {
  assert.equal(releaseVersion('https://github.com/Millillion/lasm/releases/download/lean-4.35.0-tiers-v1/x.tar.zst'), '4.35.0-lasm.1');
  assert.equal(releaseVersion('https://github.com/Millillion/lasm/releases/download/lean-4.35.0-c-v1/x.tar.zst'), '4.35.0-lasm.1');
  assert.equal(releaseVersion('https://github.com/Millillion/lasm/releases/download/lean-4.35.0-c-v2/x.tar.zst'), '4.35.0-lasm.2');
  assert.equal(releaseVersion('https://github.com/Millillion/lasm/releases/download/emscripten-6.0.9-lasm-toolchain-v2/x'), '6.0.9-lasm.2');
  assert.throws(() => releaseVersion('https://github.com/desktop/dugite-native/releases/download/v2.53.0-4/x.tar.gz'), /No package version rule/);
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
    const cTier = c.toolchains.lean[lean].tiers.c ? Object.keys(c.toolchains.lean[lean].tiers.c).map(p => `@lasm/lean-c-${p}`) : [];
    assert.deepEqual(by('demand'), [...cTier, '@lasm/lean-ext-elab', '@lasm/lean-ext-meta', '@lasm/lean-ext-rest'].sort());
    assert.ok(!packages.some(p => p.name.includes('/git-')), 'Lasm ships no Git');
    for (const pkg of packages) {
      assert.ok(pkg.artifact.bytes <= maximumPackageBytes);
      const metadata = toolPackageJson(pkg);
      assert.equal(metadata.scripts, undefined, 'Tool packages never run install scripts');
      assert.equal(metadata.main, undefined);
      if (pkg.platform?.startsWith('linux')) assert.deepEqual(metadata.libc, ['glibc']);
      if (pkg.platform) assert.deepEqual([...metadata.os, ...metadata.cpu], pkg.platform.split('-'));
      else assert.equal(metadata.os, undefined);
      assert.match(toolPackageReadme(pkg), new RegExp(pkg.artifact.sha256));
      if (pkg.name.includes('/lean-c-')) {
        assert.equal(metadata.license, cTierLicense(pkg.platform));
        assert.deepEqual(metadata.files, [pkg.artifact.name, 'README.md', 'licenses']);
        assert.equal(pkg.notices.bin.sha256, c.toolchains.lean[lean].tiers.bin[pkg.platform].sha256);
      } else {
        assert.match(metadata.license, /^[A-Za-z0-9.()+ -]+$/, 'An SPDX expression');
        assert.ok(!metadata.license.includes('SEE LICENSE'));
        assert.match(toolPackageReadme(pkg), /## Licences/);
        if (/\/lean-(?:core|ext)-/.test(pkg.name)) assert.equal(metadata.license, 'Apache-2.0');
        if (/\/lean-(?:linux|darwin|win32)-/.test(pkg.name)) assert.match(metadata.license, /LGPL-3\.0-or-later OR GPL-2\.0-or-later/);
      }
    }
    // Shared Emscripten packages keep one version across Lean releases.
    assert.equal(packages.find(p => p.name === '@lasm/emscripten-shared').version, '6.0.9-lasm.1');
  }
  const scoped = toolPackages({ lean: '4.35.0', ...c, scope: '@example-org' });
  assert.ok(scoped.every(p => p.name.startsWith('@example-org/')));
  assert.throws(() => toolPackages({ lean: '4.35.0', ...c, scope: 'lasm' }));
});

test('C tier packages carry an SPDX expression of every component', () => {
  const linux = cTierLicense('linux-x64');
  for (const id of ['Apache-2.0 WITH LLVM-exception', 'LGPL-2.1-or-later', 'GPL-2.0-only WITH Linux-syscall-note', '(LGPL-3.0-or-later OR GPL-2.0-or-later)', 'MIT', 'Zlib'])
    assert.ok(linux.includes(id), id);
  const windows = cTierLicense('win32-x64').split(' AND ');
  assert.ok(windows.includes('ZPL-2.1') && windows.includes('BSD-3-Clause'));
  assert.equal(windows.filter(term => term === 'MIT').length, 1, 'Each term once');
  assert.ok(!cTierLicense('darwin-arm64').includes('LGPL-2.1'), 'macOS carries no C library headers');
  assert.equal(cTierLicense('linux-arm64'), linux);
  // A conjunction of SPDX identifiers and WITH exceptions; OR only inside parentheses.
  for (const platform of ['linux-x64', 'darwin-x64', 'win32-x64'])
    for (const term of cTierLicense(platform).split(' AND ')) assert.match(term, /^(?:[A-Za-z0-9.+-]+(?: WITH [A-Za-z0-9.-]+)?|\([A-Za-z0-9.+-]+ OR [A-Za-z0-9.+-]+\))$/, term);
});

test('the C tier Lasm provisions is the archive its npm package carries', async () => {
  const c = await catalogs();
  const packages = toolPackages({ lean: '4.35.0', ...c });
  const packed = Object.fromEntries(packages.map((p, i) => [p.name, { integrity: 'sha512-' + Buffer.alloc(64, i).toString('base64') }]));
  const manifest = validateNpmToolManifest(npmToolManifest(packages, packed));
  for (const platform of ['linux-x64', 'linux-arm64', 'darwin-x64', 'darwin-arm64', 'win32-x64']) {
    // As provisionLean({ native: true }) passes it to provisionArtifact.
    const { name, url, sha256, bytes, format, root, maximumExtractedBytes } = leanDistribution(c.toolchains.lean['4.35.0'], platform).c;
    const entry = npmEntryFor(manifest, { name, url, sha256, bytes, format, root, maximumExtractedBytes });
    assert.deepEqual([entry.package, entry.version, entry.install, entry.platform], [`@lasm/lean-c-${platform}`, '4.35.0-lasm.1', 'demand', platform]);
  }
});

test('create-lasm pins the CLI exactly and is MIT', () => {
  const meta = createPackageJson({ name: '@lasm/cli', version: '0.1.0' }, { engines: { node: '>=24' } });
  assert.deepEqual([meta.name, meta.version, meta.license, meta.bin], ['create-lasm', '0.1.0', 'MIT', { 'create-lasm': 'bin.mjs' }]);
  assert.deepEqual(meta.dependencies, { '@lasm/cli': '0.1.0' });
  assert.equal(meta.scripts, undefined);
  assert.match(createPackageLicense(2026), /^MIT License\n\nCopyright \(c\) 2026 Jordan Last\n/);
  assert.throws(() => createPackageJson({ name: '@lasm/cli', version: '^0.1.0' }));
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

test('the CLI licence field lists Lasm and every bundled component; unknown notice sections fail', async () => {
  const { cliLicense, noticeSections, slug } = await import('../scripts/npm-dist/packages.mjs');
  const text = '=== Lasm ===\nMIT text\n=== Lean ===\nApache\n=== GMP LGPLv3 ===\nLGPL\n=== LLVM libunwind ===\nx\n=== libuv LICENSE-extra ===\ny\n';
  const sections = noticeSections(text);
  assert.deepEqual(sections.map(([heading]) => heading), ['Lasm', 'Lean', 'GMP LGPLv3', 'LLVM libunwind', 'libuv LICENSE-extra']);
  assert.equal(sections[1][1], 'Apache\n');
  assert.equal(cliLicense('MIT', sections.map(([heading]) => heading), ['BlueOak-1.0.0', 'ISC', 'MIT']),
    'MIT AND Apache-2.0 AND (LGPL-3.0-or-later OR GPL-2.0-or-later) AND Apache-2.0 WITH LLVM-exception AND ISC AND BSD-2-Clause AND BlueOak-1.0.0');
  assert.throws(() => cliLicense('MIT', ['Something new']), /Unknown notice section/);
  assert.equal(slug('LLVM libc++abi'), 'llvm-libcxxabi');
});
