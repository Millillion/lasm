// Package layout for npm distribution of Lasm's build tools (docs/TOOLCHAIN_SLIMMING.md,
// Phase 3). Pure functions: the catalogs in, package descriptions out. Each tool
// package carries one catalog archive byte for byte; its version is derived from the
// immutable release that published the archive, so unchanged archives keep their
// package version across Lasm releases (npm cache hits, no republication).
import assert from 'node:assert/strict';
import { archiveFileName } from '../../src/npm-artifacts.mjs';

export const defaultScope = '@lasm';
export const maximumPackageBytes = 150_000_000;
const platformParts = platform => {
  const [os, cpu] = platform.split('-');
  return { os: [os], cpu: [cpu], ...(os === 'linux' ? { libc: ['glibc'] } : {}) };
};

/** Version from an immutable release tag: lean-4.34.1-tiers-v1 -> 4.34.1-lasm.1,
 * emscripten-6.0.9-lasm-toolchain-v1 -> 6.0.9-lasm.1, dugite v2.53.0-4 -> 2.53.0-dugite.4. */
export function releaseVersion(url) {
  const tag = decodeURIComponent(new URL(url).pathname.split('/').at(-2));
  let match = /^(?:lean|emscripten)-(\d+\.\d+\.\d+)-(?:tiers|lasm-toolchain)-v(\d+)$/.exec(tag);
  if (match) return `${match[1]}-lasm.${match[2]}`;
  match = /^v(\d+\.\d+\.\d+)-(\d+)$/.exec(tag);
  if (match) return `${match[1]}-dugite.${match[2]}`;
  throw new Error(`No package version rule for release ${tag}`);
}

function tool(scope, suffix, artifact, install, details) {
  assert.ok(artifact.bytes <= maximumPackageBytes, `${artifact.name} exceeds the ${maximumPackageBytes}-byte package ceiling`);
  return { name: `${scope}/${suffix}`, version: releaseVersion(artifact.url), install, artifact, ...details };
}

/** Every tool package for one Lean version. install: optional (platform,
 * optionalDependencies), required (shared, dependencies), demand (npm pack on use). */
export function toolPackages({ lean, toolchains, linkToolchain, git, scope = defaultScope, platforms }) {
  assert.match(scope, /^@[a-z0-9][a-z0-9._-]*$/);
  const release = toolchains.lean[lean];
  assert.ok(release?.tiers, `No tiered Lean ${lean} in the catalog`);
  platforms ??= Object.keys(release.tiers.bin).sort();
  const tierName = (artifact, prefix) => {
    const match = new RegExp(`^lean-${lean.replaceAll('.', '\\.')}-((?:core|ext)-[a-z]+)\\.tar\\.zst$`).exec(artifact.name);
    assert.ok(match && match[1].startsWith(prefix), `Unexpected Lean tier archive ${artifact.name}`);
    return match[1];
  };
  const packages = [];
  for (const platform of platforms) {
    packages.push(tool(scope, `lean-${platform}`, release.tiers.bin[platform], 'optional',
      { platform, ...platformParts(platform), description: `Lean ${lean} compiler binaries for Lasm on ${platform}` }));
    packages.push(tool(scope, `emscripten-${platform}`, linkToolchain.native[platform], 'optional',
      { platform, ...platformParts(platform), description: `Emscripten ${linkToolchain.version} compiler tools (clang, wasm-ld, Binaryen) for Lasm on ${platform}` }));
  }
  for (const artifact of release.tiers.core) packages.push(tool(scope, `lean-${tierName(artifact, 'core')}`, artifact, 'required',
    { description: `Lean ${lean} ${tierName(artifact, 'core')} module data and sources for Lasm` }));
  packages.push(tool(scope, 'emscripten-shared', linkToolchain.shared, 'required',
    { description: `Emscripten ${linkToolchain.version} JavaScript compiler subset and prebuilt wasm64 sysroot for Lasm` }));
  // Lake projects and programs importing Lean/Lake only: fetched on demand through npm.
  for (const artifact of release.tiers.extended) packages.push(tool(scope, `lean-${tierName(artifact, 'ext')}`, artifact, 'demand',
    { description: `Lean ${lean} ${tierName(artifact, 'ext')} module data and sources for Lasm (fetched on demand)` }));
  if (git) for (const platform of platforms) packages.push(tool(scope, `git-${platform}`, git.artifacts[platform], 'demand',
    { platform, ...platformParts(platform), description: `Git ${git.version} (${git.distribution}, desktop/dugite-native) for Lasm Lake projects on ${platform} (fetched on demand)` }));
  assert.equal(new Set(packages.map(p => p.name)).size, packages.length, 'Duplicate tool package names');
  return packages;
}

export function toolPackageJson(pkg) {
  return {
    name: pkg.name, version: pkg.version, description: pkg.description,
    license: 'SEE LICENSE IN README.md',
    ...(pkg.os ? { os: pkg.os, cpu: pkg.cpu } : {}), ...(pkg.libc ? { libc: pkg.libc } : {}),
    files: [archiveFileName(pkg.artifact), 'README.md'],
    // Data only: no entry point, no scripts. Lasm verifies the archive's SHA-256.
    lasm: { schema: 1, artifact: { name: pkg.artifact.name, sha256: pkg.artifact.sha256, bytes: pkg.artifact.bytes, url: pkg.artifact.url } },
  };
}

export function toolPackageReadme(pkg) {
  return `# ${pkg.name}

${pkg.description}.

This package is a build-tool input of the Lasm compiler and is not meant to be used
directly. It contains one archive, \`${archiveFileName(pkg.artifact)}\`, byte-identical to the
release asset

    ${pkg.artifact.url}
    SHA-256 ${pkg.artifact.sha256}, ${pkg.artifact.bytes} bytes

Lasm checks that digest and size before extracting it. The licence texts and
notices of the contained software (LICENSE, LICENSES, NOTICE) are inside the
archive, with the upstream sources it was repackaged from.
`;
}

/** The manifest Lasm reads at run time (src/npm-tools.json), keyed by archive SHA-256. */
export function npmToolManifest(packages, packed) {
  const artifacts = {};
  for (const pkg of packages) {
    const result = packed[pkg.name];
    assert.match(result?.integrity ?? '', /^sha512-/, `Missing packed integrity for ${pkg.name}`);
    artifacts[pkg.artifact.sha256] = { package: pkg.name, version: pkg.version, file: archiveFileName(pkg.artifact), bytes: pkg.artifact.bytes,
      integrity: result.integrity, install: pkg.install, ...(pkg.platform ? { platform: pkg.platform } : {}) };
  }
  return { schema: 1, artifacts: Object.fromEntries(Object.entries(artifacts).sort(([a], [b]) => a < b ? -1 : 1)) };
}

/** Main package metadata: every tool package pinned to an exact version. */
export function mainPackageJson(base, packages, { name, version }) {
  const pins = install => Object.fromEntries(packages.filter(p => p.install === install).map(p => [p.name, p.version]).sort());
  const result = { ...base, name, version };
  delete result.private;
  result.dependencies = Object.fromEntries(Object.entries({ ...base.dependencies, ...pins('required') }).sort());
  result.optionalDependencies = pins('optional');
  for (const value of [...Object.values(result.dependencies), ...Object.values(result.optionalDependencies)])
    assert.match(value, /^\d+\.\d+\.\d+(?:-[0-9A-Za-z.-]+)?$/, 'Main package pins must be exact versions');
  return result;
}
