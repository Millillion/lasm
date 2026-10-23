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
    ['libuv (libuv.a); mimalloc (include/lean/mimalloc.h)', 'MIT'],
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
/** Verbatim texts from scripts/lean-dist/notices/ for components whose licence the
 * c-v1 archives and Lean's LICENSES omit (later C tier releases carry them inside). */
export const cTierExtraNotices = Object.freeze([['openssl-LICENSE.txt', 'openssl/LICENSE'], ['mimalloc-LICENSE.txt', 'mimalloc/LICENSE']]);

export function cTierLicense(platform) {
  const family = platform.split('-')[0];
  assert.ok(cTierComponents[family], `No C tier licence data for ${platform}`);
  // Each distinct term once (an OR stays parenthesized as one term).
  const terms = [...cTierComponents.common, ...cTierComponents[family]].flatMap(([, spdx]) => spdx.startsWith('(') ? [spdx] : spdx.split(' AND '));
  return [...new Set(terms)].join(' AND ');
}

/** Contents and licences of the other tool packages (docs/LICENSE_AUDIT.md), from
 * inspecting the release archives. [contents, SPDX or null]; a null entry is listed
 * in the README but has no SPDX identifier and is not in the `license` field. */
export const toolComponents = Object.freeze({
  'lean-bin': {
    common: [
      ['Lean executables and shared libraries (lean, lake, leanir, libleanshared, libInit_shared, libLake_shared)', 'Apache-2.0'],
      ['GNU MP, statically linked into libleanshared', '(LGPL-3.0-or-later OR GPL-2.0-or-later)'],
      ['libuv and mimalloc, statically linked into libleanshared; CaDiCaL (bin/cadical)', 'MIT'],
    ],
    linux: [['LLVM libc++, libc++abi, libunwind shared libraries', 'Apache-2.0 WITH LLVM-exception'],
      ['GCC libatomic', 'GPL-3.0-or-later WITH GCC-exception-3.1']],
    darwin: [],
    win32: [['LLVM libc++ (libc++.dll)', 'Apache-2.0 WITH LLVM-exception'],
      ['MinGW-w64 runtime startup code linked into the executables', 'ZPL-2.1']],
  },
  'lean-data': { common: [['Lean module data (.olean, .ir) and Lean sources', 'Apache-2.0']] },
  'emscripten-native': {
    common: [['LLVM: clang, lld/wasm-ld, llvm-nm, llvm-objcopy, clang resource headers', 'Apache-2.0 WITH LLVM-exception'],
      ['Binaryen: wasm-opt, wasm-emscripten-finalize, wasm-metadce', 'Apache-2.0']],
    linux: [['GNU libstdc++/libgcc, statically linked by the upstream build', 'GPL-3.0-or-later WITH GCC-exception-3.1']],
    darwin: [],
    win32: [['Microsoft C/C++ runtime, statically linked by the upstream build (Visual Studio redistribution terms)', null]],
  },
  'emscripten-shared': {
    common: [['Emscripten JavaScript compiler and system library sources', '(MIT OR NCSA)'],
      ['musl libc (in the prebuilt libc)', 'MIT'],
      ['LLVM libc++, libc++abi, libunwind, compiler-rt (prebuilt libraries)', 'Apache-2.0 WITH LLVM-exception'],
      ['mimalloc (prebuilt library); acorn, acorn-import-phases', 'MIT'],
      ['terser', 'BSD-2-Clause']],
  },
});
function componentsOf(kind, platform) {
  const table = toolComponents[kind];
  return [...table.common, ...(platform ? table[platform.split('-')[0]] ?? [] : [])];
}
const spdxOf = components => [...new Set(components.map(([, spdx]) => spdx).filter(Boolean))].join(' AND ');

/** Licence texts the dugite-native archives lack (Linux and macOS carry none of
 * them; Windows carries Git's and GCM's), copied from scripts/npm-dist/notices/ into
 * licenses/: Git v2.53.0 COPYING, Git LFS v3.7.1 LICENSE.md, GCM v2.9.0 LICENSE. */
export function gitLicenseFiles(platform) {
  return [['git-COPYING.txt', 'git/COPYING'], ['git-lfs-LICENSE.md', 'git-lfs/LICENSE.md'],
    ...(platform === 'linux-arm64' ? [] : [['git-credential-manager-LICENSE.txt', 'git-credential-manager/LICENSE']])];
}

/** Git from dugite-native: too many components for one honest SPDX expression; the
 * README lists them and the GPL source locations. */
const gitReadme = pkg => `## Licences

\`license\`: \`SEE LICENSE IN README.md\`. This archive is dugite-native's release asset,
unmodified. It contains Git 2.53.0 (\`GPL-2.0-only\`), Git LFS (\`MIT\`)${pkg.platform === 'linux-arm64' ? '' : ' and Git Credential\nManager (`MIT`, with the .NET runtime and libraries it bundles)'} and Mozilla's CA bundle
(ssl/cacert.pem, \`MPL-2.0\`)${pkg.platform === 'win32-x64' ? `. On Windows it is Git for Windows' MinGit 2.53.0.windows.4,
which also bundles the MSYS2 runtime and shell and MinGW-w64 libraries (curl, OpenSSL,
libssh2, PCRE2, expat, zlib, zstd, brotli, nghttp2, libiconv, gettext, libunistring,
OpenSSH and others) under their own licences, in mingw64/share/licenses/ and
usr/share/licenses/ inside the archive; LICENSE.txt is Git's GPL-2.0` : `. On Linux and macOS Git links the
operating system's libcurl, OpenSSL, zlib and expat dynamically; none of them is in
the archive`}.

Corresponding source (GPL-2.0 section 3): Git
https://github.com/git/git/tree/v2.53.0 and dugite-native's build scripts and pinned
submodules https://github.com/desktop/dugite-native/tree/v2.53.0-4${pkg.platform === 'win32-x64' ? `; MinGit
https://github.com/git-for-windows/git/releases/tag/v2.53.0.windows.4 and its MSYS2 and
MinGW-w64 package sources` : ''}. See Lasm's docs/LICENSE_AUDIT.md.

Lasm adds these verbatim licence texts in \`${noticeDirectory}/\`: ${pkg.licenseFiles.map(([, to]) => `\`${to}\``).join(', ')}.
`;

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
      { platform, ...platformParts(platform), components: componentsOf('lean-bin', platform), description: `Lean ${lean} compiler binaries for Lasm on ${platform}` }));
    packages.push(tool(scope, `emscripten-${platform}`, linkToolchain.native[platform], 'optional',
      { platform, ...platformParts(platform), components: componentsOf('emscripten-native', platform), description: `Emscripten ${linkToolchain.version} compiler tools (clang, wasm-ld, Binaryen) for Lasm on ${platform}` }));
  }
  for (const artifact of release.tiers.core) packages.push(tool(scope, `lean-${tierName(artifact, 'core')}`, artifact, 'required',
    { components: componentsOf('lean-data'), description: `Lean ${lean} ${tierName(artifact, 'core')} module data and sources for Lasm` }));
  packages.push(tool(scope, 'emscripten-shared', linkToolchain.shared, 'required',
    { components: componentsOf('emscripten-shared'), description: `Emscripten ${linkToolchain.version} JavaScript compiler subset and prebuilt wasm64 sysroot for Lasm` }));
  // Lake projects and programs importing Lean/Lake only: fetched on demand through npm.
  for (const artifact of release.tiers.extended) packages.push(tool(scope, `lean-${tierName(artifact, 'ext')}`, artifact, 'demand',
    { components: componentsOf('lean-data'), description: `Lean ${lean} ${tierName(artifact, 'ext')} module data and sources for Lasm (fetched on demand)` }));
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
    { platform, ...platformParts(platform), git: true, licenseFiles: gitLicenseFiles(platform), description: `Git ${git.version} (${git.distribution}, desktop/dugite-native) for Lasm Lake projects on ${platform} (fetched on demand)` }));
  assert.equal(new Set(packages.map(p => p.name)).size, packages.length, 'Duplicate tool package names');
  for (const pkg of packages) if (pkg.components) pkg.license = spdxOf(pkg.components);
  return packages;
}

export function toolPackageJson(pkg) {
  return {
    name: pkg.name, version: pkg.version, description: pkg.description,
    license: pkg.license ?? 'SEE LICENSE IN README.md',
    ...(pkg.os ? { os: pkg.os, cpu: pkg.cpu } : {}), ...(pkg.libc ? { libc: pkg.libc } : {}),
    files: [archiveFileName(pkg.artifact), 'README.md', ...(pkg.notices || pkg.licenseFiles ? [noticeDirectory] : [])],
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

Lasm checks that digest and size before extracting it. ${pkg.git ? `Licence texts are in
\`${noticeDirectory}/\` (below)` : `The licence texts and
notices of the contained software (LICENSE, LICENSES, NOTICE) are inside the
archive, with the upstream sources it was repackaged from`}.
${pkg.git ? '\n' + gitReadme(pkg) : pkg.components ? `
## Licences

\`license\`: \`${pkg.license}\`

| Contents | Licence |
| --- | --- |
${pkg.components.map(([what, spdx]) => `| ${what} | ${spdx ? `\`${spdx.replace(/^\((.*)\)$/, '$1')}\`` : 'not an SPDX licence; see the archive NOTICE'} |`).join('\n')}
` : ''}${pkg.name.includes('/lean-') ? trademark : ''}`;
}

const trademark = `
The Lean name and logos are trademarks of Lean FRO. Lasm is not affiliated with or
endorsed by Lean FRO.
`;

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
- \`${noticeDirectory}/libuv/\`: libuv's LICENSE and LICENSE-extra (from the same binaries archive).
- \`${noticeDirectory}/openssl/LICENSE\` (OpenSSL 3.6.0) and \`${noticeDirectory}/mimalloc/LICENSE\`
  (mimalloc v3.4.5), which neither archive carries.
${trademark}`;
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
