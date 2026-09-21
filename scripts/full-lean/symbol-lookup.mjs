// Emscripten 6.0.9 only needs an export's enumeration index when it inserts a
// new function into the shared table. Ordinary hits and misses need no scan.
export function optimizeSymbolLookup(glue) {
  const pattern = /var __dlsym_js = function\(handle, symbol, symbolIndex\) \{[\s\S]*?\n\};/g;
  const matches = [...glue.matchAll(pattern)];
  if (matches.length !== 1) throw new Error('Generated dlsym lookup drift');
  let lookup = matches[0][0];
  const replacements = [
    ['    newSymIndex = Object.keys(lib.exports).indexOf(symbol);\n    if (newSymIndex == -1 || lib.exports[symbol].stub) {',
      '    if (!Object.prototype.propertyIsEnumerable.call(lib.exports, symbol) || lib.exports[symbol].stub) {'],
    ['        result = addFunction(result, result.sig);',
      '        newSymIndex = Object.keys(lib.exports).indexOf(symbol);\n        result = addFunction(result, result.sig);'],
  ];
  for (const [before, after] of replacements) {
    if (lookup.split(before).length !== 2) throw new Error('Unexpected Emscripten dlsym semantics');
    lookup = lookup.replace(before, after);
  }
  return glue.replace(pattern, () => lookup);
}
