// Selectively replace runtime definitions, preserving Lean's real scheduler,
// mutexes, and compiler. Never allow duplicate symbols to select an arbitrary ABI.
import { readFileSync, writeFileSync, copyFileSync, mkdirSync, readdirSync } from 'node:fs';
import { resolve, join, relative } from 'node:path';
import { root } from '../../src/toolchain.mjs';

const source = resolve(process.argv[2] ?? '.work/lean-full/lean4-4.32.0/src');
const destination = join(source, 'lasm');
mkdirSync(destination, { recursive: true });
for (const name of ['node.hpp', 'node-io.cpp', 'node-async.cpp', 'node-system.cpp']) copyFileSync(join(root, 'runtime', name), join(destination, name));
for (const name of ['host-pre.js', 'host-library.js']) copyFileSync(join(root, 'scripts/full-lean', name), join(destination, name));
const replacements = new Set(['initialize_libuv']);
for (const name of ['node-io.cpp', 'node-async.cpp', 'node-system.cpp']) {
  for (const match of readFileSync(join(destination, name), 'utf8').matchAll(/^(?:O\s*\*|uint(?:8|32|64)_t\s+)(lean_\w+)\s*\(/gm)) {
    if (match[1] === 'lean_option_get_or_block' || /^lean_io_(base(?:rec)?mutex|condvar)_/.test(match[1])) continue;
    replacements.add(match[1]);
  }
}
const files = dir => readdirSync(dir, { withFileTypes: true }).flatMap(e => e.isDirectory() ? files(join(dir, e.name)) : [join(dir, e.name)]);
const overrides = [];
for (const path of files(join(source, 'runtime')).filter(f => f.endsWith('.cpp'))) {
  const text = readFileSync(path, 'utf8');
  const names = [...replacements].filter(name => new RegExp('\\b' + name + '\\s*\\([^;{}]*\\)\\s*\\{').test(text));
  if (names.length) overrides.push({ path: relative(source, path), names });
}
const cmake = [
  'add_library(lasmhost STATIC "${LEAN_SOURCE_DIR}/lasm/node-io.cpp" "${LEAN_SOURCE_DIR}/lasm/node-async.cpp" "${LEAN_SOURCE_DIR}/lasm/node-system.cpp")',
  'target_compile_definitions(lasmhost PRIVATE LASM_FULL_NATIVE_THREADS=1)',
  ...overrides.map(({ path, names }) => `set_property(SOURCE "\${LEAN_SOURCE_DIR}/${path}" DIRECTORY "\${LEAN_SOURCE_DIR}/runtime" APPEND PROPERTY COMPILE_DEFINITIONS "${names.map(n => n + '=lasm_original_' + n).join(';')}")`),
];
writeFileSync(join(destination, 'host.cmake'), cmake.join('\n') + '\n');
writeFileSync(join(destination, 'overrides.json'), JSON.stringify({ replacements: [...replacements], overrides }, null, 2) + '\n');
console.log(JSON.stringify({ hostSymbols: replacements.size, overridden: overrides.reduce((n, x) => n + x.names.length, 0), files: overrides.length }));
