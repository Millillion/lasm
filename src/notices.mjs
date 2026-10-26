import { readFileSync, readdirSync, realpathSync, statSync } from 'node:fs';
import { basename, dirname, isAbsolute, join, relative, resolve } from 'node:path';
import { createHash } from 'node:crypto';

export function referenceNotices({ leanSource, zig }) {
  const files = [
    [join(leanSource, 'LICENSE'), 'Lean'],
    [join(dirname(zig), 'LICENSE'), 'Zig compiler runtime'],
    [join(dirname(zig), 'lib/libcxx/LICENSE.TXT'), 'LLVM libc++'],
    [join(dirname(zig), 'lib/libcxxabi/LICENSE.TXT'), 'LLVM libc++abi'],
    ...['LICENSE', 'LICENSE-APACHE', 'LICENSE-APACHE-LLVM', 'LICENSE-MIT',
      'libc-top-half/musl/COPYRIGHT', 'libc-bottom-half/cloudlibc/LICENSE']
      .map(path => [join(dirname(zig), 'lib/libc/wasi', path), `wasi-libc / ${path}`]),
  ];
  return 'Lasm target: Lean 4.32.0 runtime and generated libraries; Zig 0.16.0 libc/C++/compiler runtime.\n' +
    'Lean adaptations: Wasm stack bounds; single-thread header guard; fatal exception traps; libc panic diagnostics; unchanged initialization/ST.Ref primitives extracted from io.cpp.\n\n' +
    files.map(([path, name]) => `=== ${name} ===\n${readFileSync(path, 'utf8')}\n`).join('\n');
}

// Notices that Lasm adds to every built application (dist/THIRD_PARTY_NOTICES.txt)
// and to the CLI package, beside the runtime bundle's own THIRD_PARTY_NOTICES.txt
// (docs/LICENSE_AUDIT.md). Every text under notices/ is a verbatim copy.
const noticeText = name => readFileSync(new URL(`./notices/${name}`, import.meta.url), 'utf8');

/** What each recorded runtime patch changes in Lean's sources (Apache-2.0 §4(b)). */
export const leanRuntimeChanges = Object.freeze({
  'wasm-build': ['src/CMakeLists.txt, src/stdlib.make.in, src/bin/leanc.in, stage0/src/CMakeLists.txt',
    'src/include/lean/lean.h, src/runtime/{compact,interrupt,io,memory}.cpp, src/runtime/uv/system.cpp, src/library/{ir_interpreter,module}.cpp, src/util/{io.h,shell.cpp}, src/shell/lean.cpp (and their stage0 copies)',
    'build Lean for wasm64 Emscripten'],
  'compact-alignment': ['src/runtime/compact.cpp', 'pad compacted object headers to pointer alignment'],
  'thread-runtime': ['src/runtime/object.cpp, src/runtime/stackinfo.cpp', 'Wasm thread stack bounds; read LEAN_ABORT_ON_PANIC from the host'],
  'sdk-mimalloc': ['src/CMakeLists.txt, src/runtime/CMakeLists.txt; new file src/runtime/lasm-sdk-mimalloc.cpp', "use Emscripten's mimalloc"],
  'c-inputs': ['src/lean.mk.in', 'rebuild objects when C inputs change'],
  'region-allocation': ['src/library/module.cpp, src/runtime/compact.cpp', 'report allocation failure in compacted regions'],
  'host-platform': ['src/runtime/platform.cpp', 'ask the JavaScript host which operating system it runs on'],
  'host-linux': ['src/runtime/platform.cpp', 'the same for the Linux query'],
  'host-backtrace': ['src/runtime/object.cpp', 'panic backtraces from the JavaScript host'],
  'libuv-source': ['src/CMakeLists.txt', 'pin the libuv v1.48.0 source by commit'],
  'nonlinear-environment': ['src/runtime/object.cpp', 'read LEAN_ABORT_ON_NONLINEAR from the host'],
  'node-threads': ['src/runtime/thread.cpp', "run main on the program's main thread instead of a further thread"],
});

// Runtimes up to 7aa5028c… statically linked GNU MP. Runtimes built with
// USE_GMP=OFF (decision 5, docs/PLAN.md) use Lean's own big-number code and list
// no lib/libgmp.a, so their applications carry no GNU MP notice.
const gmpComponent = `  - GNU MP 6.3.0 (LGPL-3.0-or-later OR GPL-2.0-or-later; see "GNU MP" below);
`;
const gmpNotice = `=== GNU MP ===
program.wasm statically links the GNU Multiple Precision Arithmetic Library
(GNU MP) 6.3.0, unmodified, which is free software licensed under the GNU Lesser
General Public License version 3 or later (or the GNU General Public License
version 2 or later); both texts follow ("GMP LGPLv3", "GMP GPLv3"). Source:
https://ftp.gnu.org/gnu/gmp/gmp-6.3.0.tar.xz, mirrored at
https://github.com/Millillion/lasm/releases/download/lean-4.35.0-tiers-v2/gmp-6.3.0.tar.xz (SHA-256
a3c2b80201b89e68616f4ad30bc66aee4927c3ce50e33929ca819d5c43538898), built by
Lasm's scripts/ci/application-runtime-source.mjs at the runtime's source
revision (emconfigure --host=none --disable-assembly --disable-shared
--enable-cxx, -O2 -sMEMORY64=2 -pthread).
Whoever distributes this application must meet the LGPL's terms for combined
works, including letting recipients relink it with a modified GNU MP.

`;
export const runtimeLinksGmp = manifest => (manifest.libraries ?? []).some(name => /(?:^|\/)libgmp\.a$/.test(name));

// Lean's LICENSES file lists the third-party components of Lean's own native
// binary releases (LLVM, the GNU C Library, GNU MP, CaDiCaL, leantar, …). None of
// them is compiled into a Lasm application (its LLVM libraries are Emscripten's,
// listed separately), so applications carry a note instead of that file, and no
// GNU licence text that would suggest otherwise (docs/LICENSE_AUDIT.md §11).
const leanReleaseHeading = 'Lean bundled dependencies';
const leanReleaseNote = `Lean's LICENSES file lists the licences of the components bundled with Lean's
own native binary releases (the LLVM toolchain, the GNU C Library, GNU MP,
CaDiCaL, leantar, lean4lean, nanoda and others). None of them is part of this
output: it contains Lean's runtime and standard library compiled to WebAssembly
by Lasm (Apache-2.0, "Lean" above), linked with Emscripten's system libraries
(listed in this file). The Lasm compiler package keeps Lean's LICENSES in full.

`;
/** The runtime bundle's notices without Lean's LICENSES file (see above). */
export function withoutLeanReleaseLicenses(runtimeNotices) {
  const marks = [...runtimeNotices.matchAll(/^=== (.+) ===$/gm)];
  const index = marks.findIndex(mark => mark[1] === leanReleaseHeading);
  if (index < 0) return runtimeNotices;
  const start = marks[index].index + marks[index][0].length + 1, end = marks[index + 1]?.index ?? runtimeNotices.length;
  return runtimeNotices.slice(0, start) + leanReleaseNote + runtimeNotices.slice(end);
}

/** The notices Lasm adds before a runtime bundle's THIRD_PARTY_NOTICES.txt. */
export function applicationNotices(manifest, runtimeNotices, { cli = false } = {}) {
  if (!cli) runtimeNotices = withoutLeanReleaseLicenses(runtimeNotices);
  const lean = manifest.lean, commit = manifest.leanCommit, gmp = runtimeLinksGmp(manifest);
  const changes = Object.keys(manifest.patches ?? {}).map(name => {
    const change = leanRuntimeChanges[name];
    return change ? `  - ${name}: ${change.slice(0, -1).join('; ')} (${change.at(-1)})` : `  - ${name}`;
  }).join('\n');
  const subject = cli ? `This is the Lasm compiler package. Its targets/${manifest.name}/ runtime
bundle holds the libraries that Lasm links into every application, so that an
application's program.wasm and program.cjs contain, statically linked or generated:`
    : `This application was compiled by Lasm. program.wasm and program.cjs contain,
statically linked or generated:`;
  return `THIRD-PARTY AND LASM NOTICES

${subject}
  - Lean ${lean} runtime and standard library (Apache-2.0), modified by Lasm (below);
  - Emscripten ${manifest.emscripten}'s JavaScript runtime and system libraries (MIT OR NCSA):
    musl (MIT), LLVM libc++, libc++abi, libunwind and compiler-rt
    (Apache-2.0 WITH LLVM-exception), mimalloc (MIT), with Lasm's recorded
    repairs to a few Emscripten files (src/sdk-repairs.json in Lasm);
  - libuv 1.48.0 (MIT; parts ISC and BSD-2-Clause, see "libuv LICENSE-extra");
${gmp ? gmpComponent : ''}  - Lasm's runtime glue (MIT, "Lasm" below).
host/ is Lasm's Node host (MIT) with koffi (MIT, host/native/node_modules/koffi)
and, on Linux and macOS, small Lasm helpers that statically link musl and Zig's
compiler runtime (MIT; host/native/*/THIRD_PARTY_NOTICES.txt). node_modules/, when
present, holds npm packages copied from the project, each with its own licence.
Lean code and C code of the project and of its Lake dependencies are compiled
into program.wasm under their own licences, which this file does not list.

=== Lasm ===
${noticeText('LASM-LICENSE.txt')}
=== Changes to Lean (Apache-2.0 section 4(b)) ===
Lasm changed these files of Lean ${lean} (https://github.com/leanprover/lean4/tree/${commit})
before compiling the runtime in program.wasm. The patches are in
https://github.com/Millillion/lasm/tree/main/scripts/full-lean/patches, and Lasm's
build renames some Lean runtime functions (initialize_libuv and the lean_io_*
functions that Lasm's runtime/node-*.cpp implement) to lasm_original_* so that
Lasm's host bridge replaces them. The SHA-256 of every applied patch is in the
runtime's target.json ("patches"):
${changes}

${gmp ? gmpNotice : ''}=== LLVM compiler-rt ===
${noticeText('compiler-rt-LICENSE.TXT')}
=== LLVM libunwind ===
${noticeText('libunwind-LICENSE.TXT')}
=== libuv LICENSE-extra ===
${noticeText('libuv-LICENSE-extra.txt')}
=== node-addon-api (koffi build dependency) ===
${noticeText('node-addon-api-LICENSE.md')}
${runtimeNotices}`;
}

// Lake dependencies whose Lean or C code is compiled into program.wasm: their licence
// files go into dist/licenses/<package>/ and their texts into THIRD_PARTY_NOTICES.txt.
const licenseFileName = /^(?:licen[cs]e|copying|copyright|notice|unlicense)(?:[-._][^/]*)?$/i;
const isFile = path => { try { return statSync(path).isFile(); } catch { return false; } };
const lakePackageRoot = file => {
  for (let directory = dirname(resolve(file)); ; directory = dirname(directory)) {
    if (isFile(join(directory, 'lakefile.toml')) || isFile(join(directory, 'lakefile.lean'))) return directory;
    if (dirname(directory) === directory) return null;
  }
};
const packageName = directory => {
  for (const file of ['lakefile.toml', 'lakefile.lean']) {
    if (!isFile(join(directory, file))) continue;
    const text = readFileSync(join(directory, file), 'utf8');
    const name = file.endsWith('.toml') ? /^\s*name\s*=\s*"([^"]+)"/m.exec(text)?.[1]
      : /^\s*package\s+(?:"([^"]+)"|«([^»]+)»|([\w.'-]+))/m.exec(text)?.slice(1).find(Boolean);
    if (name) return name;
  }
  return basename(directory);
};

/** [{ name, directory, files: [{ name, path, sha256 }] }] for the Lake packages (other
 * than `project` itself and anything under `exclude`) that contain any of `files`. */
export function lakeDependencyLicenses(project, files, { exclude = [] } = {}) {
  const root = resolve(project), skip = exclude.filter(Boolean).map(path => resolve(path));
  const inside = (path, directory) => { const r = relative(directory, path); return !r.startsWith('..') && !isAbsolute(r); };
  const packages = new Map();
  for (const file of files) {
    if (skip.some(directory => inside(resolve(file), directory))) continue;
    const found = lakePackageRoot(file);
    const directory = found && realpathSync(found);
    if (!directory || directory === realpathSync(root) || packages.has(directory)) continue;
    const licenses = readdirSync(directory, { withFileTypes: true })
      .filter(entry => entry.isFile() && licenseFileName.test(entry.name)).map(entry => entry.name).sort()
      .map(name => ({ name, path: join(directory, name),
        sha256: createHash('sha256').update(readFileSync(join(directory, name))).digest('hex') }));
    packages.set(directory, { name: packageName(directory).replace(/[^A-Za-z0-9._-]/g, '_'), directory, files: licenses });
  }
  return [...packages.values()].sort((a, b) => a.name.localeCompare(b.name));
}

/** Notice sections for lakeDependencyLicenses() results. */
export function dependencyNotices(packages) {
  if (!packages.length) return '';
  return `\n=== Lake dependencies compiled into program.wasm ===
Their licence files are copied verbatim into licenses/<package>/ and below.
${packages.map(pkg => `  - ${pkg.name}: ${pkg.files.length ? pkg.files.map(file => file.name).join(', ') : 'no licence file found in the package'}`).join('\n')}
${packages.flatMap(pkg => pkg.files.map(file => `\n=== Lake dependency ${pkg.name}: ${file.name} ===\n${readFileSync(file.path, 'utf8')}`)).join('')}`;
}

// ---- Every target's output (docs/LICENSING.md, docs/LICENSE_AUDIT.md §11) ----
// The Node build writes dist/THIRD_PARTY_NOTICES.txt (applicationNotices above,
// then the Lake dependencies' licences). Every other target is that build
// relinked, so its notices are the same file with a header that says what that
// target's files contain, plus the texts of anything the target adds (the
// wasi-http component's Wasmtime adapter). JavaScript files that a platform
// bundles get a short legal banner (/*! … */, kept by bundlers and minifiers
// that keep licence comments), and server-side Wasm (edge, WASI, Fastly,
// wasi-http) embeds the whole notices file as a `lasm.notices` custom section,
// so the texts travel with every deployment, even one that uploads only the
// bundled script and the Wasm. Browser builds keep the Wasm small: the page's
// THIRD_PARTY_NOTICES.txt is served beside it and named by the loader's banner.

/** Output kinds: 'node' (dist/), 'edge' (Workers, Vercel/Netlify Edge, Deno,
 * Deno Deploy, Bun, Supabase), 'browser', 'wasi', 'fastly', 'wasi-http'. */
export const noticeKinds = Object.freeze(['node', 'edge', 'browser', 'wasi', 'fastly', 'wasi-http']);
export const noticesSectionName = 'lasm.notices';
const lasmCopyright = 'Copyright (c) 2026 Jordan Last';

/** Lean and Emscripten versions named by a Node build's notices header. */
export function noticeVersions(notices) {
  const lean = /Lean (\S+) runtime and standard library/.exec(notices)?.[1];
  const emscripten = /Emscripten (\S+)'s (?:JavaScript runtime|system libraries)/.exec(notices)?.[1];
  if (!lean || !emscripten) throw new Error('These notices were not written by this Lasm (no Lean and Emscripten versions in the header)');
  return { lean, emscripten };
}

const wasmComponents = ({ lean, emscripten }) => `  - Lean ${lean} runtime and standard library (Apache-2.0), modified by Lasm
    ("Changes to Lean" below), built single-threaded;
  - Emscripten ${emscripten}'s system libraries (MIT OR NCSA): musl libc (MIT),
    LLVM libc++, libc++abi, libunwind and compiler-rt (Apache-2.0 WITH
    LLVM-exception), mimalloc (MIT); parts of libuv 1.48.0 where the program
    uses them (MIT; parts ISC and BSD-2-Clause, "libuv LICENSE-extra");
  - Lasm's runtime and host bridge (MIT, "Lasm" below);`;
const headers = {
  edge: (v, label) => `This ${label} output was compiled by Lasm. Its files contain:
lasm/program.wasm (or lasm/program.wasm.mjs, the same module inlined):
${wasmComponents(v)}
lasm/program.mjs: Emscripten ${v.emscripten}'s JavaScript runtime (MIT OR NCSA) with
  Lasm's glue (MIT);
the other .mjs files: Lasm's host and its lasm:* modules (MIT), generated by Lasm.
program.wasm also carries this whole file as its "${noticesSectionName}" custom section.`,
  browser: (v, label) => `This ${label} output was compiled by Lasm. Its files contain:
app.<hash>.wasm:
${wasmComponents(v)}
app.<hash>.js: Lasm's loader, host and lasm:* modules (MIT) and Emscripten
  ${v.emscripten}'s JavaScript runtime (MIT OR NCSA); its banner names this file.
Serve this file with the app (it is in the output directory).`,
  wasi: (v, label) => `This ${label} output was compiled by Lasm. main.wasm contains:
${wasmComponents(v)}
  - Lasm's C WASI host (MIT).
main.wasm also carries this whole file as its "${noticesSectionName}" custom section.`,
};
headers.fastly = (v, label) => headers.wasi(v, label) + `
pkg/<name>.tar.gz (the Fastly package) contains main.wasm and this file.`;
headers['wasi-http'] = (v, label) => `This ${label} output was compiled by Lasm. main.wasm is a WebAssembly
component that contains:
${wasmComponents(v)}
  - Lasm's C WASI host and wasi-http bindings (MIT);
  - Wasmtime's wasi_snapshot_preview1 proxy adapter and wasm-tools' generated
    component glue (Apache-2.0 WITH LLVM-exception, "Wasmtime proxy adapter" below).
main.wasm also carries this whole file as its "${noticesSectionName}" custom section.`;

/** The Wasmtime adapter's notice: in wasi-http outputs, and in the CLI package,
 * whose src/wasi/component/proxy-template.wasm holds the adapter. */
export const wasmtimeAdapterNotice = (subject = 'The component') => `=== Wasmtime proxy adapter ===
${subject} contains Wasmtime's wasi_snapshot_preview1 proxy adapter
(wasi_snapshot_preview1.proxy.wasm from Wasmtime v49.0.4, unmodified; source
https://github.com/bytecodealliance/wasmtime/tree/v49.0.4/crates/wasi-preview1-component-adapter;
Copyright the Bytecode Alliance contributors; Rust code that may include parts
of Rust's core library, MIT OR Apache-2.0, used under Apache-2.0) and canonical
ABI glue generated by wasm-tools 1.262.0 (https://github.com/bytecodealliance/wasm-tools)
from the WASI 0.2.12 WIT files. All are licensed under the Apache License 2.0
with LLVM Exceptions; Wasmtime's LICENSE follows (Wasmtime has no NOTICE file).

${noticeText('wasmtime-LICENSE.txt')}`;

/** The notices of a target's output, from the Node build's dist notices. */
export function targetNotices(nodeNotices, kind, { label = kind } = {}) {
  if (!noticeKinds.includes(kind)) throw new Error(`Unknown notices kind ${kind}`);
  const body = withoutLeanReleaseLicenses(nodeNotices);
  if (kind === 'node') return body;
  const at = body.indexOf('\n=== Lasm ===\n');
  if (!body.startsWith('THIRD-PARTY AND LASM NOTICES\n') || at < 0) throw new Error('These notices were not written by this Lasm');
  const tail = `
Lean code and C code of the project and of its Lake dependencies are compiled
into the Wasm under their own licences; the licence files found in those Lake
packages are at the end of this file.
`;
  return `THIRD-PARTY AND LASM NOTICES

${headers[kind](noticeVersions(body), label)}
Lasm adds no copyleft (GPL, LGPL or similar) code to its outputs.${tail}
${body.slice(at + 1)}${kind === 'wasi-http' ? '\n' + wasmtimeAdapterNotice() : ''}`;
}

/** The legal banner of a target's JavaScript (bundlers keep /*! comments). */
export function noticeBanner(nodeNotices, label, file = 'THIRD_PARTY_NOTICES.txt') {
  const { lean, emscripten } = noticeVersions(nodeNotices);
  return `/*! ${label}, built by Lasm. Contains Lean ${lean} runtime (Apache-2.0, modified by Lasm),
 * Emscripten ${emscripten} runtime and libraries (MIT OR NCSA), musl (MIT), LLVM libc++,
 * libc++abi, libunwind, compiler-rt (Apache-2.0 WITH LLVM-exception), mimalloc (MIT),
 * libuv (MIT), Lasm (MIT, ${lasmCopyright}). Licence texts: ${file} */\n`;
}

const uleb = value => { const out = []; do { let b = value & 0x7f; value = Math.floor(value / 128); if (value) b |= 0x80; out.push(b); } while (value); return out; };
/** A Wasm module or component with a custom section appended (any existing one of the same name replaced). */
export function withCustomSection(bytes, name, payload) {
  bytes = withoutCustomSection(bytes, name);
  const nameBytes = Buffer.from(name), data = Buffer.from(payload);
  const content = Buffer.concat([Buffer.from(uleb(nameBytes.length)), nameBytes, data]);
  return Buffer.concat([Buffer.from(bytes), Buffer.from([0, ...uleb(content.length)]), content]);
}
function readUleb(bytes, at) {
  let result = 0, shift = 0, b;
  do { b = bytes[at++]; result += (b & 0x7f) * 2 ** shift; shift += 7; } while (b & 0x80);
  return [result, at];
}
/** Top-level custom sections of a Wasm module or component: [{ name, start, end, payload }]. */
export function customSections(bytes) {
  if (bytes[0] !== 0 || bytes[1] !== 0x61 || bytes[2] !== 0x73 || bytes[3] !== 0x6d) throw new Error('Not WebAssembly');
  const found = [];
  for (let at = 8; at < bytes.length;) {
    const id = bytes[at];
    const [size, start] = readUleb(bytes, at + 1);
    if (id === 0) {
      const [length, nameStart] = readUleb(bytes, start);
      found.push({ name: Buffer.from(bytes.subarray(nameStart, nameStart + length)).toString('utf8'), start: at, end: start + size,
        payload: bytes.subarray(nameStart + length, start + size) });
    }
    at = start + size;
  }
  return found;
}
export function withoutCustomSection(bytes, name) {
  const drop = customSections(bytes).filter(section => section.name === name);
  if (!drop.length) return bytes;
  const parts = [];
  let at = 0;
  for (const section of drop) { parts.push(bytes.subarray(at, section.start)); at = section.end; }
  parts.push(bytes.subarray(at));
  return Buffer.concat(parts.map(part => Buffer.from(part)));
}

/** Markers of copyleft code that must never be in a Lasm output's Wasm or
 * JavaScript: GNU MP's and the GNU C Library's symbols and banners, GCC's
 * compiler identification, and the GNU licences' own words. (Node's host asks the
 * system's C library for its version through koffi: calling the system library is
 * not shipping it, so glibc's function names are not markers.) */
export const copyleftMarkers = Object.freeze(['__gmpz_', '__gmpn_', '__gmpq_', '__gmpf_', '__gmp_', 'gmp_version', 'GNU MP',
  'GLIBC_2.', '__libc_start_main', 'GNU C Library', 'GCC: (GNU)', 'libgcc', 'libstdc++',
  'GNU General Public License', 'GNU Lesser General Public License', 'GNU Library General Public License', 'GNU Affero',
  'Mozilla Public License', 'Eclipse Public License']);
/** The copyleft markers found in `bytes` (custom section `lasm.notices` excluded). */
export function copyleftFindings(bytes) {
  let scanned = Buffer.from(bytes);
  if (scanned[0] === 0 && scanned[1] === 0x61 && scanned[2] === 0x73 && scanned[3] === 0x6d) scanned = withoutCustomSection(scanned, noticesSectionName);
  return copyleftMarkers.filter(marker => scanned.includes(marker));
}
