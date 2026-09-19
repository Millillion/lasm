import { execFileSync } from 'node:child_process';
import { mkdirSync, writeFileSync as writeRaw, readFileSync, existsSync, rmSync, readdirSync, renameSync } from 'node:fs';
import { createHash, randomUUID } from 'node:crypto';
import { resolve, join, dirname } from 'node:path';
import { fileURLToPath } from 'node:url';

export const root = resolve(dirname(fileURLToPath(import.meta.url)), '..');
export const runtimeDir = join(root, '.cache/lasm-runtime');
export const leanSource = process.env.LEAN_SOURCE ?? join(root, '.cache/lean4-4.32.0');
export const zig = process.env.ZIG ?? join(root, '.cache/zig-x86_64-linux-0.16.0/zig');
export const lean = process.env.LEAN ?? 'lean';
export const env = { ...process.env, ZIG_GLOBAL_CACHE_DIR: join(root, '.cache/zig-global') };
export function run(executable, args, extra = {}) {
  return execFileSync(executable, args, {
    cwd: root, env, encoding: 'utf8', stdio: ['ignore', 'pipe', 'pipe'],
    timeout: 180_000, maxBuffer: 16 * 1024 * 1024, ...extra,
  }).trim();
}
export const prefix = run(lean, ['--print-prefix']);
export const targetFlags = ['-target', 'wasm32-wasi', '-O2', '-DNDEBUG', '-DLASM_WASM32_SCALAR_LITERALS=1', '-ffunction-sections', '-fdata-sections',
  '-I', join(runtimeDir, 'include'), '-I', join(prefix, 'include'), '-I', join(leanSource, 'src'), '-I', join(root, 'runtime')];

function writeFileSync(path, text) {
  if (existsSync(path) && readFileSync(path, 'utf8') === text) return;
  const temporary = path + '.' + randomUUID() + '.tmp';
  writeRaw(temporary, text); renameSync(temporary, path);
}

export function buildRuntime(log = console.log) {
  if (run(lean, ['--short-version']) !== '4.32.0') throw new Error('Lasm currently requires Lean 4.32.0');
  if (run(lean, ['--githash']) !== '8c9756b28d64dab099da31a4c09229a9e6a2ef35') throw new Error('Lean build commit does not match the target runtime');
  if (run(zig, ['version']) !== '0.16.0') throw new Error('Lasm currently requires Zig 0.16.0');
  mkdirSync(join(runtimeDir, 'include/lean'), { recursive: true });
  mkdirSync(join(runtimeDir, 'include/runtime'), { recursive: true });
  mkdirSync(join(runtimeDir, 'objects'), { recursive: true });
  mkdirSync(join(runtimeDir, 'patched'), { recursive: true });
  writeFileSync(join(runtimeDir, 'include/lean/config.h'),
    '#pragma once\n#include <lean/version.h>\n#define LEAN_IS_STAGE0 0\n');
  const leanHeader = readFileSync(join(prefix, 'include/lean/lean.h'), 'utf8');
  const scalarLiteral = '#ifdef LEAN_EMSCRIPTEN\n#define LEAN_SCALAR_PTR_LITERAL';
  if (leanHeader.split(scalarLiteral).length !== 2) throw new Error('Unexpected Lean static scalar literal layout');
  // Upstream selects two pointer slots only for Emscripten. WASI also has 32-bit
  // pointers: a single slot silently truncates every static 64-bit scalar field.
  writeFileSync(join(runtimeDir, 'include/lean/lean.h'), leanHeader.replace(scalarLiteral,
    '#if UINTPTR_MAX == UINT32_MAX\n#define LEAN_SCALAR_PTR_LITERAL'));
  writeFileSync(join(runtimeDir, 'include/githash.h'), '#define LEAN_GITHASH "8c9756b28d64dab099da31a4c09229a9e6a2ef35"\n');
  const debugHeader = readFileSync(join(leanSource, 'src/runtime/debug.h'), 'utf8');
  if (!debugHeader.includes('throw lean::unreachable_reached();')) throw new Error('Unexpected Lean debug.h');
  writeFileSync(join(runtimeDir, 'include/runtime/debug.h'),
    debugHeader.replace('throw lean::unreachable_reached();', '__builtin_trap();'));
  const digest = createHash('sha256');
  function fingerprint(path) {
    for (const entry of readdirSync(path, { withFileTypes: true }).sort((a, b) => a.name.localeCompare(b.name))) {
      const full = join(path, entry.name);
      if (entry.isDirectory()) fingerprint(full);
      else if (entry.isFile()) digest.update(full).update(readFileSync(full));
    }
  }
  for (const path of [join(leanSource, 'src/runtime'), join(leanSource, 'src/util'), join(leanSource, 'src/kernel'), join(prefix, 'include/lean'),
    join(runtimeDir, 'include'), join(root, 'runtime')]) fingerprint(path);
  digest.update(readFileSync(fileURLToPath(import.meta.url)));
  const headersIdentity = digest.digest('hex');
  const archive = join(runtimeDir, 'libleanrt.a');
  const identityFile = join(runtimeDir, 'build-identity.json');
  if (existsSync(archive) && existsSync(identityFile)
      && JSON.parse(readFileSync(identityFile, 'utf8')).headersIdentity === headersIdentity) return archive;
  const units = ['object', 'mpz', 'mpn', 'utf8', 'apply', 'thread', 'alloc', 'allocprof', 'hash', 'byteslice', 'platform', 'interrupt', 'kernel-data'];
  const objects = [];
  for (const unit of [...units, 'io-core', 'lasm-core', 'lasm-stack', 'lasm-host', 'lasm-node-io', 'lasm-node-async', 'lasm-node-system']) {
    let source = unit.startsWith('lasm-') ? join(root, 'runtime', `${unit.slice(5)}.cpp`) : join(leanSource, 'src/runtime', `${unit}.cpp`);
    if (unit === 'kernel-data') {
      // These three pure metadata primitives are also used by ordinary programs
      // manipulating Lean.Expr/Level. Keep their pinned upstream implementations.
      function extract(file, start, end) {
        const text = readFileSync(join(leanSource, 'src/kernel', file), 'utf8');
        if (text.split(start).length !== 2 || text.split(end).length !== 2) throw new Error('Unexpected kernel data source boundaries');
        return text.slice(0, text.indexOf('*/') + 2) + '\n' + text.slice(text.indexOf(start), text.indexOf(end, text.indexOf(start)));
      }
      source = join(runtimeDir, 'patched/kernel-data.cpp');
      writeFileSync(source, '// Lasm: unchanged pure metadata functions extracted from the pinned kernel.\n' +
        '#include <algorithm>\n#include "runtime/object.h"\n#include "runtime/hash.h"\nnamespace lean {\n' +
        extract('expr.cpp', 'extern "C" LEAN_EXPORT uint64_t lean_expr_mk_data', '// =======================================\n// Constructors') +
        extract('level.cpp', 'extern "C" LEAN_EXPORT uint64_t lean_level_mk_data', 'bool is_explicit(level const & l)') + '\n}\n');
    }
    if (unit === 'platform') {
      const original = readFileSync(source, 'utf8');
      const windows = '#if defined(LEAN_WINDOWS)\n    return 1;\n#else\n    return 0;\n#endif';
      const mac = '#if defined(__APPLE__)\n    return 1;\n#else\n    return 0;\n#endif';
      if (!original.includes(windows) || !original.includes(mac)) throw new Error('Unexpected Lean platform primitives');
      source = join(runtimeDir, 'patched/platform.cpp');
      writeFileSync(source, 'extern "C" __attribute__((import_module("lasm"), import_name("platform"))) unsigned lasm_host_platform();\n' +
        original.replace(windows, '    return lasm_host_platform() == 1;')
          .replace(mac, '    return lasm_host_platform() == 2;'));
    }
    if (unit === 'io-core') {
      // Keep the upstream implementations, without io.cpp's native OS/libuv
      // includes and unrelated filesystem/process implementations.
      const original = readFileSync(join(leanSource, 'src/runtime/io.cpp'), 'utf8');
      const slice = (start, end) => {
        if (original.split(start).length !== 2 || original.split(end).length !== 2) throw new Error('Unexpected Lean IO core boundaries');
        const from = original.indexOf(start);
        const to = original.indexOf(end, from);
        if (to < from) throw new Error('Invalid Lean IO core boundaries');
        return original.slice(from, to);
      };
      source = join(runtimeDir, 'patched/io-core.cpp');
      const copyright = original.slice(0, original.indexOf('*/') + 2);
      writeFileSync(source, `${copyright}\n// Lasm change: extract the unchanged initialization and ST.Ref primitives.\n` +
        '#include "runtime/object.h"\n#include "runtime/object_ref.h"\n#include "runtime/thread.h"\n#include "runtime/alloc.h"\n#include "runtime/allocprof.h"\n#include "runtime/sstream.h"\n#include <chrono>\n#include <iomanip>\nnamespace lean {\n' +
        slice('static bool g_initializing = true;', 'static obj_res mk_file_not_found_error') +
        slice('// ST ref primitives', '/* {α : Type} (act : BaseIO α)') +
        slice('/* {α : Type} (act : BaseIO α)', 'extern "C" LEAN_EXPORT obj_res lean_io_exit') +
        slice('/* getNumHeartbeats : BaseIO Nat */', 'extern "C" LEAN_EXPORT obj_res lean_io_getenv') +
        // Route profiler output through the current Lean stream, unlike panic
        // diagnostics, which must remain synchronous even on a damaged stack.
        'extern "C" obj_res lean_io_eprintln(obj_arg);\nstatic void profiling_eprintln(obj_arg s) { lean_dec(lean_io_eprintln(s)); }\n' +
        slice('/* timeit {α : Type}', '/* getNumHeartbeats : BaseIO Nat */').replaceAll('io_eprintln(', 'profiling_eprintln(') + '\n}\n');
    }
    if (unit === 'object') {
      const original = readFileSync(source, 'utf8');
      if (original.split('lean_io_eprintln').length !== 3) throw new Error('Unexpected Lean panic diagnostic path');
      source = join(runtimeDir, 'patched/object.cpp');
      const taskStart = original.indexOf('LEAN_THREAD_PTR(lean_task_object, g_current_task_object);');
      const taskEnd = original.indexOf('// =======================================\n// Natural numbers', taskStart);
      if (taskStart < 0 || taskEnd < 0) throw new Error('Unexpected Lean task runtime boundaries');
      const sleepBody = '    chrono::milliseconds c(ms);\n    this_thread::sleep_for(c);';
      if (original.split(sleepBody).length !== 2) throw new Error('Unexpected Lean sleep primitive');
      writeFileSync(source, '// Lasm: cooperative tasks and a libc panic diagnostic path.\n' +
        '#include <lean/lean.h>\n#include <unordered_map>\nextern "C" lean_object *lean_io_sleep(uint32_t);\n' +
        (original.slice(0, taskStart) + '#include "tasks.inc.cpp"\n\n' + original.slice(taskEnd))
          .replaceAll('lean_io_eprintln', 'lasm_runtime_eprintln')
          .replace(sleepBody, '    lean_io_sleep(ms);'));
    }
    if (unit === 'thread') {
      const original = readFileSync(source, 'utf8');
      const include = '#include "runtime/stack_overflow.h"';
      if (original.split(include).length !== 2) throw new Error('Unexpected Lean thread.cpp; review the Wasm adaptation');
      source = join(runtimeDir, 'patched/thread.cpp');
      writeFileSync(source, original.replace(include, `#if defined(LEAN_MULTI_THREAD)\n${include}\n#endif`));
    }
    if (unit === 'interrupt') {
      const original = readFileSync(source, 'utf8');
      for (const code of ['throw heartbeat_exception();', 'throw interrupted();']) {
        if (original.split(code).length !== 2) throw new Error('Unexpected Lean interrupt.cpp');
      }
      source = join(runtimeDir, 'patched/interrupt.cpp');
      writeFileSync(source, original.replace('throw heartbeat_exception();', '__builtin_trap();')
        .replace('throw interrupted();', '__builtin_trap();').replace('#include "util/io.h"', '// Unused native exception helper omitted by the Wasm port.'));
    }
    const object = join(runtimeDir, 'objects', `${unit}.o`);
    const stamp = `${object}.source`;
    const identity = JSON.stringify({ content: readFileSync(source, 'utf8'), flags: targetFlags, headersIdentity });
    if (!existsSync(object) || !existsSync(stamp) || readFileSync(stamp, 'utf8') !== identity) {
      log(`Compiling runtime ${unit}.cpp`);
      const temporary = object + '.' + randomUUID() + '.o';
      run(zig, ['c++', ...targetFlags, '-std=c++20', '-fno-exceptions', '-c', source, '-o', temporary]);
      renameSync(temporary, object);
      writeFileSync(stamp, identity);
    }
    objects.push(object);
  }
  const temporary = archive + '.' + randomUUID() + '.a';
  run(zig, ['ar', 'rcs', temporary, ...objects]);
  renameSync(temporary, archive);
  writeFileSync(join(runtimeDir, 'build-identity.json'), JSON.stringify({ lean: '4.32.0', zig: '0.16.0', headersIdentity, targetFlags }, null, 2) + '\n');
  return archive;
}
if (process.argv[1] && resolve(process.argv[1]) === fileURLToPath(import.meta.url)) {
  try { console.log(buildRuntime()); }
  catch (error) { console.error(error.stderr || error.message); process.exitCode = 1; }
}
