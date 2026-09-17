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
