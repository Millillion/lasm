// Emitted into the pinned Emscripten loader's scope. Reserve only the slots its
// initial main-module GOT will consume, preserving addFunction's allocation order.
function reserveMainFunctionSlots(exports, replace, wide) {
  if (exports !== lasmMainExports) return;
  var missing = new Set();
  for (var name in exports) {
    if (isInternalSym(name)) continue;
    var value = exports[name];
    if (typeof value !== 'function') continue;
    if (!replace && GOT[name] && GOT[name].value != -1n) continue;
    if (!getFunctionAddress(value)) missing.add(value);
  }
  var count = missing.size - freeTableIndexes.length;
  if (count <= 0) return;
  var base;
  try { base = wasmTable.grow(wide ? BigInt(count) : count); }
  catch (error) {
    // A bulk allocation can fail where individual allocations still make
    // progress. Leave the original allocation/failure behavior available.
    if (error instanceof RangeError) return;
    throw error;
  }
  var slots = [];
  for (var i = count - 1; i >= 0; i--) slots.push(base + (wide ? BigInt(i) : i));
  // Existing freed slots still pop first; newly grown slots then pop in the
  // same ascending order as repeated grow(1), including function aliases.
  freeTableIndexes = slots.concat(freeTableIndexes);
}

export function optimizeMainTableGrowth(glue) {
  if (glue.includes('var lasmReserveMainFunctionSlots =')) throw new Error('Main table growth was already optimized');
  if (!glue.includes('var lasmMainExports;')) throw new Error('Main table growth requires the verified function-table index');
  const allocators = [...glue.matchAll(/var getEmptyTableSlot = \(\) => \{[\s\S]*?\n\};/g)];
  if (allocators.length !== 1) throw new Error('Generated table allocator drift');
  const allocator = allocators[0][0].replace(/\/\/[^\n]*/g, '').replace(/\s/g, '');
  const expected = 'vargetEmptyTableSlot=()=>{if(freeTableIndexes.length){returnfreeTableIndexes.pop();}returnwasmTable["grow"](1);};';
  const wide = allocator === expected.replace('(1)', '(1n)');
  if (!wide && allocator !== expected)
    throw new Error('Unexpected Emscripten table allocation semantics');
  const marker = 'var updateGOT = (exports, replace) => {';
  const pattern = /var updateGOT = \(exports, replace\) => \{[\s\S]*?\n\};/g;
  const matches = [...glue.matchAll(pattern)];
  if (matches.length !== 1) throw new Error('Generated GOT update drift');
  const body = matches[0][0];
  for (const expression of ['isInternalSym(symName)', 'GOT[symName] && GOT[symName].value != -1n',
    'if (replace || !existingEntry)', 'BigInt(addFunction(value))', 'GOT[symName].value = newValue;'])
    if (body.split(expression).length !== 2) throw new Error('Unexpected Emscripten GOT semantics');
  const helper = 'var lasmReserveMainFunctionSlots = ' + reserveMainFunctionSlots.toString() + ';\n';
  return glue.replace(marker, () => helper + marker + `\n  lasmReserveMainFunctionSlots(exports, replace, ${wide});`);
}
