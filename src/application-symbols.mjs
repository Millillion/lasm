import { readFileSync } from 'node:fs';
import { execFileSync } from 'node:child_process';

export const isLeanSymbol = name => /^lp?_/.test(name);

export function parseDefinedSymbols(text) {
  return text.split('\n').flatMap(line => {
    const match = /^(\S+) ([A-Za-z]) /.exec(line);
    return match && match[2].toUpperCase() !== 'U' ? [{ name: match[1], type: match[2].toUpperCase() }] : [];
  });
}

// Inline C++/libc++ helpers use weak COMDAT definitions and may be selected
// from any archive that happens to contain a copy. Their archive membership
// alone does not imply a dependency on Lean's compiler initialization.
export function initializationFreeCppSymbols(text) {
  const types = new Map();
  for (const { name, type } of parseDefinedSymbols(text)) {
    if (!types.has(name)) types.set(name, new Set());
    types.get(name).add(type);
  }
  return new Set([...types].filter(([, bindings]) => [...bindings].every(type => type === 'W' || type === 'V'))
    .map(([name]) => name));
}

export function readInitializationFreeCppSymbols(archive, nm) {
  return initializationFreeCppSymbols(execFileSync(nm, ['--defined-only', '--extern-only', '--format=posix', archive],
    { encoding: 'utf8', maxBuffer: 32 * 1024 * 1024, stdio: ['ignore', 'pipe', 'pipe'] }));
}

/** Preserve both code and initialized data addresses, using real C declarations. */
export function applicationSymbolRegistry(sources, symbols, hook = 'lasm_lookup_application_symbol') {
  if (!/^[A-Za-z_][A-Za-z0-9_]*$/.test(hook)) throw new Error('Invalid application symbol hook');
  const names = [...new Set(symbols.map(symbol => symbol.name).filter(isLeanSymbol))].sort();
  const defined = new Set(names), declarations = new Map(), initializers = new Set();
  for (const source of sources) {
    for (const match of source.matchAll(/^LEAN_EXPORT lean_object\* ([A-Za-z_][A-Za-z0-9_]*)\(uint8_t builtin\) \{/gm))
      initializers.add(match[1]);
    for (const match of source.matchAll(/^(?:LEAN_EXPORT\s+)?(?:extern\s+)?((?:const\s+)?(?:lean_object\s*\*|uint\d+_t|size_t|double|float|void)\s+(lp?_[A-Za-z0-9_]+)(?:\([^\n;{}]*\))?)\s*[;{=]/gm))
      if (defined.has(match[2])) declarations.set(match[2], `extern ${match[1]};`);
  }
  const missing = names.filter(name => !declarations.has(name));
  if (missing.length) throw new Error(`Missing C declarations for application symbols: ${missing.slice(0, 20).join(', ')}`);
  const exports = [...new Set(symbols.filter(({ name, type }) => isLeanSymbol(name) ? 'BDGRS'.includes(type)
    : !['__main_argc_argv', '__main_void'].includes(name) && !name.startsWith('__em_lib_deps_'))
    .map(({ name }) => '_' + name))].sort();
  const source = `// Generated from the application's C declarations and defined object symbols.
#include <lean/lean.h>
#include <string.h>
${names.map(name => declarations.get(name)).join('\n')}
${names.length ? `struct lasm_application_symbol { const char *name; void *address; };
static const struct lasm_application_symbol lasm_application_symbols[] = {
${names.map(name => `  {"${name}", (void *)&${name}},`).join('\n')}
};` : ''}
void *${hook}(const char *name) {
${names.length ? `  size_t first = 0, end = sizeof(lasm_application_symbols) / sizeof(lasm_application_symbols[0]);
  while (first < end) {
    size_t middle = first + (end - first) / 2;
    int order = strcmp(name, lasm_application_symbols[middle].name);
    if (order == 0) return lasm_application_symbols[middle].address;
    if (order < 0) end = middle; else first = middle + 1;
  }` : '  (void)name;'}
  return NULL;
}
`;
  return { source, exports, foreignExports: exports.filter(name => !isLeanSymbol(name.slice(1))
    && !initializers.has(name.slice(1))), symbols: names.length };
}

export function readApplicationSymbols(sources, objects, nm, hook) {
  const symbols = objects.flatMap(file => parseDefinedSymbols(execFileSync(nm,
    ['--defined-only', '--extern-only', '--format=posix', file],
    { encoding: 'utf8', maxBuffer: 64 * 1024 * 1024, windowsHide: true })));
  return applicationSymbolRegistry(sources.map(file => readFileSync(file, 'utf8')), symbols, hook);
}
