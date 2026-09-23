// Connect Emscripten's late-loaded plugins to the compiler's in-Wasm symbol
// registry. generate-exports.mjs exports every Lean data symbol separately;
// only compiled functions are omitted to avoid engine export-count limits.
export function connectLeanSymbolLoader(glue, memory64, { allowExisting = false, packageSymbols = false } = {}) {
  if (typeof memory64 !== 'boolean') throw new Error('Specify the compiler pointer ABI');
  const existing = glue.includes('var lasmResolveLeanSymbol =');
  if (existing && !allowExisting) throw new Error('Lean symbol loader already connected');
  if (!glue.includes('var stringToNewUTF8 =')) throw new Error('Export the stringToNewUTF8 runtime helper');
  const marker = 'var resolveGlobalSymbol = (symName, direct = false) => {';
  const body = `${marker}
  var sym;
  if (isSymbolDefined(symName)) {
    sym = wasmImports[symName];
  }
  return {
    sym,
    name: symName
  };
};`;
  const lookup = `var lasmResolveLeanSymbol = symName => {
  if (${packageSymbols ? '!/^lp?_/.test(symName)' : '!symName.startsWith("l_")'} || !wasmExports) return;
  // Data globals and explicit externs retain their exact Wasm export type.
  // Never interpret a data address as an indirect-function-table index.
  if (Object.prototype.hasOwnProperty.call(wasmExports, symName)) return wasmExports[symName];
  var lookup = wasmExports["lasm_lookup_lean_symbol"];
  if (!lookup) return;
  var name = stringToNewUTF8(symName);
  try {
    var address = Number(lookup(${memory64 ? 'BigInt(name)' : 'name'}));
    if (address) return getWasmTableEntry(address);
  } finally {
    _free(name);
  }
};

`;
  const replacement = lookup + body.replace('  return {',
    '  if (!sym) sym = lasmResolveLeanSymbol(symName);\n  return {');
  if (existing) {
    if (glue.split(replacement).length !== 2) throw new Error('Existing Lean symbol resolver drift');
    return glue;
  }
  if (glue.split(body).length !== 2) throw new Error('Generated global-symbol resolver drift');
  return glue.replace(body, replacement);
}
