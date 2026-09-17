import assert from 'node:assert/strict';
import { execFileSync, spawnSync } from 'node:child_process';
import { mkdirSync, writeFileSync, statSync, readFileSync } from 'node:fs';
import { dirname, join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

// Translation-unit checks only. No runtime linking, initialization, or execution.
const root = resolve(dirname(fileURLToPath(import.meta.url)), '../..');
const work = join(root, '.work/runtime-compile');
const source = process.env.LEAN_SOURCE ?? join(root, '.cache/lean4-4.32.0');
const zig = process.env.ZIG ?? join(root, '.cache/zig-x86_64-linux-0.16.0/zig');
const lean = process.env.LEAN ?? 'lean';
const options = {
  cwd: root, encoding: 'utf8', timeout: 180_000, maxBuffer: 8 * 1024 * 1024,
  stdio: ['ignore', 'pipe', 'pipe'],
  env: { ...process.env, ZIG_GLOBAL_CACHE_DIR: join(root, '.cache/zig-global') },
};
const prefix = execFileSync(lean, ['--print-prefix'], options).trim();
assert.match(execFileSync(lean, ['--version'], options), /version 4\.32\.0[,)]/);
assert.equal(execFileSync(zig, ['version'], options).trim(), '0.16.0');
assert.match(readFileSync(join(source, 'src/CMakeLists.txt'), 'utf8'), /option\(USE_GMP/);
mkdirSync(join(work, 'include/lean'), { recursive: true });
// Target configuration: no mimalloc, no GMP, no LEAN_MULTI_THREAD.
// Do not use the native installation's allocator configuration for a Wasm port.
writeFileSync(join(work, 'include/lean/config.h'),
  '#pragma once\n#include <lean/version.h>\n#define LEAN_IS_STAGE0 0\n');
const report = {};
const commands = [];
for (const name of ['mpz', 'mpn', 'object', 'io']) {
  const output = join(work, `${name}.o`);
  const args = ['c++', '-target', 'wasm32-wasi', '-std=c++20', '-O2', '-DNDEBUG',
    '-I', join(work, 'include'), '-I', join(prefix, 'include'), '-I', join(source, 'src'),
    '-c', join(source, 'src/runtime', `${name}.cpp`), '-o', output];
  commands.push([zig, ...args]);
  const result = spawnSync(zig, args, options);
  assert.ifError(result.error);
  writeFileSync(join(work, `${name}.stderr.txt`), result.stderr);
  if (name === 'io') {
    assert.notEqual(result.status, 0, 'The unmodified IO portability probe unexpectedly compiled; review the finding');
    assert.match(result.stderr, /WASI lacks a true mmap/);
    assert.match(result.stderr, /wasm lacks signal support/);
    assert.match(result.stderr, /'uv.h' file not found/);
    report[name] = { compiled: false, expectedFailure: true, diagnostics: ['mmap', 'signals', 'uv.h'] };
  } else {
    assert.equal(result.status, 0, result.stderr);
    report[name] = { compiled: true, objectBytes: statSync(output).size };
  }
  console.log(`${name}.cpp: ${report[name].compiled ? 'compiled' : 'expected platform dependencies confirmed'}`);
}
writeFileSync(join(work, 'report.json'), `${JSON.stringify(report, null, 2)}\n`);
writeFileSync(join(work, 'commands.json'), `${JSON.stringify(commands, null, 2)}\n`);
console.log(`Runtime translation-unit checks passed. Evidence: ${work}`);
