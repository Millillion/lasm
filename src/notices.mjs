import { readFileSync } from 'node:fs';
import { dirname, join } from 'node:path';

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

/** The notices Lasm adds before a runtime bundle's THIRD_PARTY_NOTICES.txt. */
export function applicationNotices(manifest, runtimeNotices, { cli = false } = {}) {
  const lean = manifest.lean, commit = manifest.leanCommit;
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
  - GNU MP 6.3.0 (LGPL-3.0-or-later OR GPL-2.0-or-later; see "GNU MP" below);
  - Lasm's runtime glue (MIT, "Lasm" below).
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

=== GNU MP ===
program.wasm statically links the GNU Multiple Precision Arithmetic Library
(GNU MP) 6.3.0, unmodified, which is free software licensed under the GNU Lesser
General Public License version 3 or later (or the GNU General Public License
version 2 or later); both texts follow ("GMP LGPLv3", "GMP GPLv3"). Source:
https://ftp.gnu.org/gnu/gmp/gmp-6.3.0.tar.xz (SHA-256
a3c2b80201b89e68616f4ad30bc66aee4927c3ce50e33929ca819d5c43538898), built by
Lasm's scripts/ci/application-runtime-source.mjs (emconfigure --host=none
--disable-assembly --disable-shared --enable-cxx, -O2 -sMEMORY64=2 -pthread).
Whoever distributes this application must meet the LGPL's terms for combined
works, including letting recipients relink it with a modified GNU MP.

=== LLVM compiler-rt ===
${noticeText('compiler-rt-LICENSE.TXT')}
=== LLVM libunwind ===
${noticeText('libunwind-LICENSE.TXT')}
=== libuv LICENSE-extra ===
${noticeText('libuv-LICENSE-extra.txt')}
=== node-addon-api (koffi build dependency) ===
${noticeText('node-addon-api-LICENSE.md')}
${runtimeNotices}`;
}
