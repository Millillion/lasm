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

/** The notices Lasm adds before a runtime bundle's THIRD_PARTY_NOTICES.txt. */
export function applicationNotices(manifest, runtimeNotices, { cli = false } = {}) {
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
