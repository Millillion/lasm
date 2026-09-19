// Keep interpreter-visible externs without exporting every generated Lean helper.
// Ordinary Lean definitions remain available through their serialized IR.
import { writeFileSync, readdirSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { execFileSync } from 'node:child_process';
import { root, resolveLean } from '../../src/toolchain.mjs';

const build = resolve(process.argv[2] ?? '.work/lean-full/wasm');
const output = resolve(process.argv[3] ?? '.work/lean-full/lean4-4.32.0/src/lasm-wasm-exports.json');
const nm = process.env.LASM_LLVM_NM ?? join(root, '.cache/emsdk-6.0.9/upstream/bin/llvm-nm');
const stems = JSON.parse(execFileSync(resolveLean(root).lean, [join(root, 'scripts/full-lean/ExternSymbols.lean')],
  { encoding: 'utf8', maxBuffer: 4 * 1024 * 1024 }));
const archives = [join(build, 'lib/lean'), join(build, 'lib/temp')].flatMap(dir =>
  readdirSync(dir).filter(name => name.endsWith('.a') || name.endsWith('.a.export')).map(name => join(dir, name)));
const symbols = new Set();
for (const archive of archives) {
  const listing = execFileSync(nm, ['--defined-only', '--extern-only', '--format=posix', archive],
    { encoding: 'utf8', maxBuffer: 128 * 1024 * 1024 });
  for (const line of listing.split('\n')) {
    const match = line.match(/^(\S+) [A-Za-z] /);
    if (match) symbols.add(match[1]);
  }
}
const requested = new Set(['main', 'malloc', 'free']);
for (const symbol of symbols) if (symbol.startsWith('lean_') || symbol.startsWith('initialize_') || symbol.startsWith('runtime_initialize_')) requested.add(symbol);
for (const entry of stems) {
  if (symbols.has(entry.stem)) requested.add(entry.stem);
  if (symbols.has(entry.boxed)) requested.add(entry.boxed);
}
const exports = [...requested].sort().map(symbol => '_' + symbol);
writeFileSync(output, JSON.stringify(exports, null, 2) + '\n');
writeFileSync(output + '.audit.json', JSON.stringify({ archives, definedSymbols: symbols.size,
  externDeclarations: stems.length, exports: exports.length,
  externsWithoutNativeStem: stems.filter(entry => !symbols.has(entry.stem) && !symbols.has(entry.boxed)),
}, null, 2) + '\n');
console.log(JSON.stringify({ output, exported: exports.length, defined: symbols.size }));
