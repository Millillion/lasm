// Export runtime ABI symbols and provide compiled Lean declarations through an
// in-Wasm lookup table, avoiding JavaScript engines' Wasm export-count limits.
import { writeFileSync, readFileSync, readdirSync, existsSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { execFileSync } from 'node:child_process';
import { root, resolveLean } from '../../src/toolchain.mjs';

const build = resolve(process.argv[2] ?? '.work/lean-full/wasm');
const output = resolve(process.argv[3] ?? join(build, 'lasm-wasm-exports.json'));
const nm = process.env.LASM_LLVM_NM ?? join(root, '.cache/emsdk-6.0.9/upstream/bin/llvm-nm');
const stems = JSON.parse(execFileSync(resolveLean(root).lean, [join(root, 'scripts/full-lean/ExternSymbols.lean')],
  { encoding: 'utf8', maxBuffer: 4 * 1024 * 1024 }));
const linked = new Set(['libInit.a', 'libStd.a', 'libLean.a', 'libleancpp.a', 'libleanrt.a',
  'libleanmain.a', 'libleanshell.a', 'libleaninitialize.a']);
if (/^LASM_HOST_BRIDGE:BOOL=ON$/m.test(readFileSync(join(build, 'CMakeCache.txt'), 'utf8'))) linked.add('liblasmhost.a');
if (/^LASM_LINK_LAKE:BOOL=ON$/m.test(readFileSync(join(build, 'CMakeCache.txt'), 'utf8'))) linked.add('libLake.a');
const archives = [join(build, 'lib/lean'), join(build, 'lib/temp')].flatMap(dir =>
  readdirSync(dir).filter(name => linked.has(name)).map(name => join(dir, name)));
const symbols = new Set();
const dataSymbols = new Set();
for (const archive of archives) {
  const listing = execFileSync(nm, ['--defined-only', '--extern-only', '--format=posix', archive],
    { encoding: 'utf8', maxBuffer: 128 * 1024 * 1024 });
  for (const line of listing.split('\n')) {
    const match = line.match(/^(\S+) ([A-Za-z]) /);
    if (match) {
      symbols.add(match[1]);
      // Initialized constants have no executable IR body to fall back to.
      if (match[1].startsWith('l_') && 'BDGRS'.includes(match[2])) dataSymbols.add(match[1]);
    }
  }
}
const requested = new Set(['main', 'malloc', 'free']);
for (const symbol of dataSymbols) requested.add(symbol);
for (const symbol of symbols) if (symbol.startsWith('lean_') || /^(?:runtime_|meta_)?initialize_/.test(symbol)) requested.add(symbol);
for (const entry of stems) {
  if (symbols.has(entry.stem)) requested.add(entry.stem);
  if (symbols.has(entry.boxed)) requested.add(entry.boxed);
}
const exports = [...requested].sort().map(symbol => '_' + symbol);
writeFileSync(output, JSON.stringify(exports, null, 2) + '\n');
writeFileSync(output + '.audit.json', JSON.stringify({ archives, definedSymbols: symbols.size,
  externDeclarations: stems.length, exports: exports.length, initializedDataExports: dataSymbols.size,
  externsWithoutNativeStem: stems.filter(entry => !symbols.has(entry.stem) && !symbols.has(entry.boxed)),
}, null, 2) + '\n');
console.log(JSON.stringify({ output, exported: exports.length, defined: symbols.size }));

const generated = existsSync(join(build, 'generated-c')) ? join(build, 'generated-c') : join(build, 'lib/temp');
const files = dir => readdirSync(dir, { withFileTypes: true }).flatMap(e => e.isDirectory() ? files(join(dir, e.name)) : [join(dir, e.name)]);
const declarations = new Map();
for (const path of files(generated).filter(path => path.endsWith('.c'))) {
  const source = readFileSync(path, 'utf8');
  for (const match of source.matchAll(/^(?:LEAN_EXPORT\s+)?(?:extern\s+)?((?:const\s+)?(?:lean_object\s*\*|uint\d+_t|size_t|double|float|void)\s+(l_[A-Za-z0-9_]+)(?:\([^\n;{}]*\))?)\s*[;{=]/gm)) {
    if (symbols.has(match[2])) declarations.set(match[2], `extern ${match[1]};`);
  }
}
const names = [...symbols].filter(name => name.startsWith('l_')).sort();
const missing = names.filter(name => !declarations.has(name));
if (missing.length) throw new Error(`Missing generated C declarations for ${missing.length} symbols: ${missing.slice(0, 30).join(', ')}`);
const registry = `// Generated from verified C declarations and linked archive symbols.\n#include <lean/lean.h>\n#include <string.h>\n${names.map(name => declarations.get(name)).join('\n')}
struct lasm_symbol { const char *name; void *address; };
static const struct lasm_symbol lasm_symbols[] = {
${names.map(name => `  {"${name}", (void *)&${name}},`).join('\n')}
};
void *lasm_lookup_lean_symbol(const char *name) {
    size_t first = 0, end = sizeof(lasm_symbols) / sizeof(lasm_symbols[0]);
    while (first < end) {
        size_t middle = first + (end - first) / 2;
        int order = strcmp(name, lasm_symbols[middle].name);
        if (order == 0) return lasm_symbols[middle].address;
        if (order < 0) end = middle; else first = middle + 1;
    }
    return NULL;
}
`;
const registryPath = join(build, 'lasm-native-symbols.c');
if (!existsSync(registryPath) || readFileSync(registryPath, 'utf8') !== registry) writeFileSync(registryPath, registry);
console.log(JSON.stringify({ registry: registryPath, symbols: names.length }));
