// Runtime definitions that arbitrary, later-loaded C/C++ plugins may import.
import { existsSync } from 'node:fs';
import { join } from 'node:path';
import { execFileSync } from 'node:child_process';

export function runtimeAbiArchives(sdk, memory64, mimalloc = false, cache = join(sdk, 'upstream/emscripten/cache')) {
  const target = memory64 ? 'wasm64' : 'wasm32';
  const archives = ['libc-mt.a', 'libc++-mt-legacyexcept.a',
    'libc++abi-mt-legacyexcept.a', 'libunwind-mt-legacyexcept.a',
    'libclang_rt.builtins-legacysjlj-mt.a', ...(mimalloc ? ['libmimalloc-mt.a'] : [])]
    .map(name => join(cache, `sysroot/lib/${target}-emscripten/pic`, name));
  for (const path of archives) if (!existsSync(path)) throw new Error(`Missing runtime ABI archive: ${path}`);
  return archives;
}

// These aliases are synthesized by the final executable's main wrapper. They
// appear in archive symbol tables but cannot be requested as independent roots.
export const isRuntimeExport = name => !['__main_argc_argv', '__main_void'].includes(name)
  // Emscripten consumes these link-time metadata symbols; they do not survive
  // as Wasm exports (mimalloc includes one for its emmalloc dependencies).
  && !name.startsWith('__em_lib_deps_');

export function definedAbiSymbols(archive, nm) {
  const result = execFileSync(nm, ['--defined-only', '--extern-only', '--format=posix', archive],
    { encoding: 'utf8', maxBuffer: 128 * 1024 * 1024, stdio: ['ignore', 'pipe', 'pipe'] });
  const symbols = [];
  let member;
  for (const line of result.split('\n')) {
    if (/^\S+\.o:$/.test(line)) member = line.slice(0, -1);
    // compiler-rt bundles optional coverage/profiling instrumentation alongside
    // arithmetic helpers. Rooting its instrumentation archive members registers
    // an atexit writer even in an uninstrumented application (default.profraw).
    // Instrumented plugins must link their chosen profiling runtime explicitly.
    if (archive.includes('libclang_rt.builtins') && /^(GCDAProfiling|InstrProfiling)/.test(member ?? '')) continue;
    const match = line.match(/^(\S+) ([A-Za-z]) /);
    if (match) symbols.push({ name: match[1], type: match[2] });
  }
  return symbols;
}

export function runtimeAbiExports(sdk, memory64) {
  const names = new Set(['main', 'malloc', 'free']);
  for (const archive of runtimeAbiArchives(sdk, memory64)) {
    for (const { name } of definedAbiSymbols(archive, join(sdk, 'upstream/bin/llvm-nm')))
      if (isRuntimeExport(name)) names.add(name);
  }
  return [...names].sort().map(name => '_' + name);
}
