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

/** Version from an immutable release tag: <upstream version>-lasm.<release revision>.
 * lean-4.34.1-tiers-v1 -> 4.34.1-lasm.1, lean-4.35.0-c-v1 (the C tier) -> 4.35.0-lasm.1,
 * emscripten-6.0.9-lasm-toolchain-v1 -> 6.0.9-lasm.1, dugite v2.53.0-4 -> 2.53.0-dugite.4.
 * The package name already says which release series an archive belongs to, so a
 * rebuilt C tier (c-v2) becomes 4.35.0-lasm.2 of @lasm/lean-c-* without touching the others. */
export function releaseVersion(url) {
  const tag = decodeURIComponent(new URL(url).pathname.split('/').at(-2));
  let match = /^(?:lean|emscripten)-(\d+\.\d+\.\d+)-(?:tiers|c|lasm-toolchain)-v(\d+)$/.exec(tag);
  if (match) return `${match[1]}-lasm.${match[2]}`;
  match = /^v(\d+\.\d+\.\d+)-(\d+)$/.exec(tag);
  if (match) return `${match[1]}-dugite.${match[2]}`;
  throw new Error(`No package version rule for release ${tag}`);
}

function tool(scope, suffix, artifact, install, details) {
  assert.ok(artifact.bytes <= maximumPackageBytes, `${artifact.name} exceeds the ${maximumPackageBytes}-byte package ceiling`);
  return { name: `${scope}/${suffix}`, version: releaseVersion(artifact.url), install, artifact, ...details };
}

/** The C tier's contents and their licences (docs/LICENSE_AUDIT.md), per platform
 * family. Every C tier archive holds, from the upstream Lean release, unmodified:
 * clang, lld, llvm-ar and the LLVM/clang shared libraries, libc++, libc++abi,
 * libunwind and compiler-rt (Apache-2.0 WITH LLVM-exception), Lean's include/lean
 * (Apache-2.0), OpenSSL 3 libssl/libcrypto (Apache-2.0), GMP (LGPL-3.0-or-later OR
 * GPL-2.0-or-later) and libuv (MIT); plus clang's resource headers from the LLVM
 * release (Apache-2.0 WITH LLVM-exception) and, on Linux and Windows, C library
 * headers (scripts/lean-dist/c-tier-sources.json). The package `license` field is
 * the conjunction of all of them; each package also carries the notices. */
export const cTierComponents = Object.freeze({
  common: [
    ['LLVM: clang, lld, llvm-ar, LLVM/clang libraries, libc++, libc++abi, libunwind, compiler-rt, clang resource headers', 'Apache-2.0 WITH LLVM-exception'],
    ["Lean's include/lean headers; OpenSSL 3 (libssl.a, libcrypto.a)", 'Apache-2.0'],
    ['GNU MP (libgmp.a)', '(LGPL-3.0-or-later OR GPL-2.0-or-later)'],
    ['libuv (libuv.a)', 'MIT'],
  ],
  linux: [
    ['GNU C Library 2.35 headers, crt objects and link stubs (libc6-dev, Ubuntu 22.04)', 'LGPL-2.1-or-later'],
    ['Linux 5.15 UAPI headers (linux-libc-dev, Ubuntu 22.04)', 'GPL-2.0-only WITH Linux-syscall-note'],
    ['zlib (libz.so)', 'Zlib'],
    ['GCC runtime (libatomic.so, libgcc_s.so link)', 'GPL-3.0-or-later WITH GCC-exception-3.1'],
  ],
  darwin: [],
  win32: [
    ['MinGW-w64 headers and CRT import/runtime libraries', 'ZPL-2.1'],
    ['Wine-derived MinGW-w64 headers', 'LGPL-2.1-or-later'],
    ["GCC's stdarg.h in the MinGW-w64 headers", 'GPL-2.0-or-later WITH GCC-exception-2.0'],
    ['MinGW-w64 winpthreads', 'MIT AND BSD-3-Clause'],
    ['zlib (zlib1.dll)', 'Zlib'],
  ],
});
export function cTierLicense(platform) {
  const family = platform.split('-')[0];
  assert.ok(cTierComponents[family], `No C tier licence data for ${platform}`);
  return [...cTierComponents.common, ...cTierComponents[family]].map(([, spdx]) => spdx).join(' AND ');
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
  // Lake projects with bundled C code: Lean's clang as `cc`, headers and link libraries, on demand.
  for (const platform of platforms) {
    const c = release.tiers.c?.[platform];
    if (!c) continue;
    const { multiarch, ...artifact } = c;
    packages.push(tool(scope, `lean-c-${platform}`, artifact, 'demand', { platform, ...platformParts(platform), license: cTierLicense(platform),
      notices: { tierArchive: true, bin: release.tiers.bin[platform] },
      description: `Lean ${lean} C tier (Lean's clang as cc, C library headers and link libraries) for Lasm Lake projects with C code on ${platform} (fetched on demand)` }));
  }
  if (git) for (const platform of platforms) packages.push(tool(scope, `git-${platform}`, git.artifacts[platform], 'demand',
    { platform, ...platformParts(platform), description: `Git ${git.version} (${git.distribution}, desktop/dugite-native) for Lasm Lake projects on ${platform} (fetched on demand)` }));
  assert.equal(new Set(packages.map(p => p.name)).size, packages.length, 'Duplicate tool package names');
  return packages;
}

export function toolPackageJson(pkg) {
  return {
    name: pkg.name, version: pkg.version, description: pkg.description,
    license: pkg.license ?? 'SEE LICENSE IN README.md',
    ...(pkg.os ? { os: pkg.os, cpu: pkg.cpu } : {}), ...(pkg.libc ? { libc: pkg.libc } : {}),
    files: [archiveFileName(pkg.artifact), 'README.md', ...(pkg.notices ? [noticeDirectory] : [])],
    // Data only: no entry point, no scripts. Lasm verifies the archive's SHA-256.
    lasm: { schema: 1, artifact: { name: pkg.artifact.name, sha256: pkg.artifact.sha256, bytes: pkg.artifact.bytes, url: pkg.artifact.url } },
  };
}

/** Licence files copied out of the archives into C tier packages, so that they are
 * visible without extracting anything. */
export const noticeDirectory = 'licenses';

export function toolPackageReadme(pkg) {
  if (pkg.notices) return cTierReadme(pkg);
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

function cTierReadme(pkg) {
  const family = pkg.platform.split('-')[0], root = pkg.artifact.root;
  return `# ${pkg.name}

${pkg.description}.

This package is a build-tool input of the Lasm compiler and is not meant to be used
directly. Lasm fetches it with \`npm pack\` only when a Lake project has C code
(\`extern_lib\`, \`moreLinkArgs\`). It contains one archive, \`${archiveFileName(pkg.artifact)}\`,
byte-identical to the release asset

    ${pkg.artifact.url}
    SHA-256 ${pkg.artifact.sha256}, ${pkg.artifact.bytes} bytes

Lasm checks that digest and size before extracting it.

## Licences

\`license\`: \`${pkg.license}\`

| Contents | Licence |
| --- | --- |
${[...cTierComponents.common, ...cTierComponents[family]].map(([what, spdx]) => `| ${what} | \`${spdx.replace(/^\((.*)\)$/, '$1')}\` |`).join('\n')}

The notices are in \`${noticeDirectory}/\`, copied verbatim:

- \`${noticeDirectory}/${root}/\`: the archive's own \`lasm-notices/${root}/\` (its NOTICE with
  every upstream source and checksum, the LLVM licence${family === 'linux' ? ', the Debian copyright files of\n  libc6-dev (GNU C Library) and linux-libc-dev (Linux UAPI headers, with the syscall note)'
    : family === 'win32' ? ', the MinGW-w64 headers\' COPYING files\n  and the winpthreads COPYING' : ''}).
- \`${noticeDirectory}/lean/LICENSE\` and \`LICENSES\`: Lean's licence and the third-party licences
  of Lean's binary release (LLVM, GNU C Library, GNU MP), from which the archive's
  compiler and libraries come (\`${pkg.notices.bin.name}\`).
- \`${noticeDirectory}/libuv/\`: libuv's LICENSE and LICENSE-extra.
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
export function mainPackageJson(base, packages, { name, version, license }) {
  const pins = install => Object.fromEntries(packages.filter(p => p.install === install).map(p => [p.name, p.version]).sort());
  const result = { ...base, name, version };
  delete result.private;
  if (license) {
    result.license = license;
    if (Array.isArray(result.files) && !result.files.includes('LICENSE')) result.files = [...result.files, 'LICENSE'];
  }
  result.dependencies = Object.fromEntries(Object.entries({ ...base.dependencies, ...pins('required') }).sort());
  result.optionalDependencies = pins('optional');
  for (const value of [...Object.values(result.dependencies), ...Object.values(result.optionalDependencies)])
    assert.match(value, /^\d+\.\d+\.\d+(?:-[0-9A-Za-z.-]+)?$/, 'Main package pins must be exact versions');
  return result;
}

/** `create-lasm` (for `npm create lasm`): unscoped, in lockstep with the CLI it pins
 * exactly. Its sources are packages/create-lasm; it is MIT, copyright Jordan Last. */
export const createPackageName = 'create-lasm';
export const createPackageFiles = Object.freeze(['bin.mjs', 'create.mjs', 'README.md', 'LICENSE']);
export function createPackageJson(main, { engines } = {}) {
  assert.match(main.version, /^\d+\.\d+\.\d+(?:-[0-9A-Za-z.-]+)?$/);
  return {
    name: createPackageName, version: main.version, description: 'Create a Lean-on-Node project with Lasm: npm create lasm@latest my-app',
    license: 'MIT', type: 'module', bin: { 'create-lasm': 'bin.mjs' }, files: [...createPackageFiles],
    ...(engines ? { engines } : {}),
    repository: { type: 'git', url: 'git+https://github.com/Millillion/lasm.git', directory: 'packages/create-lasm' },
    dependencies: { [main.name]: main.version },
  };
}
export const createPackageLicense = year => `MIT License

Copyright (c) ${year} Jordan Last

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
`;
