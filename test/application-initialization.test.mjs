import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, writeFileSync, rmSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { parseWasmObject, archiveMembers } from '../src/wasm-objects.mjs';
import { cInitTargets, coreInitTargets, hasExternalEffect, initializerClosure, initializerUnits, initializerWrappers,
  isForeignFunction, readLiveSymbols, unitsReaching } from '../src/application-initialization.mjs';

const leb = value => { const out = []; do { let byte = value & 0x7f; value >>>= 7; if (value) byte |= 0x80; out.push(byte); } while (value); return out; };
const str = text => [...leb(Buffer.byteLength(text)), ...Buffer.from(text)];
const section = (id, body) => [id, ...leb(body.length), ...body];
const custom = (name, body) => section(0, [...str(name), ...body]);

/** A relocatable object: `initialize_A` calls the imported `initialize_B`, then
 * stores to its data symbol `l_a` and calls the imported `l_A_initFn`. */
function relocatableObject() {
  const type = section(1, [1, 0x60, 0, 0]);
  const imports = section(2, [2, ...str('env'), ...str('initialize_B'), 0, 0, ...str('env'), ...str('l_A_initFn'), 0, 0]);
  const functions = section(3, [1, 0]);
  // body: call 0 (padded LEB), call 1 (padded), i32.const 0 (memory reloc padded), drop, end
  const body = [0, 0x10, 0x80, 0x80, 0x80, 0x80, 0, 0x10, 0x81, 0x80, 0x80, 0x80, 0, 0x41, 0x80, 0x80, 0x80, 0x80, 0, 0x1a, 0x0b];
  const code = section(10, [1, ...leb(body.length), ...body]);
  // Symbols: 0 initialize_A (defined func 2), 1 initialize_B (undefined func 0), 2 l_A_initFn (undefined func 1),
  // 3 l_a (defined data, segment 0), 4 _G_initialized (local data).
  const symbols = [5,
    0, 0, 2, ...str('initialize_A'),
    0, 0x10, 0,
    0, 0x10, 1,
    1, 0, ...str('l_a'), 0, 0, 8,
    1, 2, ...str('_G_initialized'), 0, 8, 1];
  const linking = custom('linking', [2, 8, ...leb(symbols.length), ...symbols]);
  // Offsets are relative to the code section payload: count(1) + size(1) + locals(1).
  const reloc = custom('reloc.CODE', [3, 3, 0, 4, 1, 0, 9, 2, 4, 15, 3, 0]);
  const data = section(11, [1, 0, 0x41, 0, 0x0b, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0]);
  return Uint8Array.from([0, 0x61, 0x73, 0x6d, 1, 0, 0, 0, ...type, ...imports, ...functions, ...code, ...data, ...linking, ...reloc]);
}

test('Wasm objects: ordered references per defined function', () => {
  const object = parseWasmObject(relocatableObject());
  const [owner] = object.references.keys();
  assert.equal(object.symbols[owner].name, 'initialize_A');
  assert.deepEqual(object.references.get(owner).map(index => object.symbols[index].name), ['initialize_B', 'l_A_initFn', 'l_a']);
});

test('ar archives: GNU long names', () => {
  const header = (name, size) => Buffer.from(name.padEnd(16) + '0'.padEnd(12) + '0'.padEnd(6) + '0'.padEnd(6) + '644'.padEnd(8) + String(size).padEnd(10) + '`\n');
  const names = 'a-very-long-member-name.o/\n';
  const member = Buffer.from('xy');
  const archive = Buffer.concat([Buffer.from('!<arch>\n'), header('//', names.length), Buffer.from(names),
    ...(names.length % 2 ? [Buffer.from('\n')] : []), header('/0', member.length), member]);
  assert.deepEqual([...archiveMembers(archive)].map(([name, data]) => [name, Buffer.from(data).toString()]), [['a-very-long-member-name.o', 'xy']]);
});

test('initializer units, closure, wrappers and reverse reachability', () => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-init-'));
  try {
    const file = join(directory, 'a.o');
    writeFileSync(file, relocatableObject());
    const graph = new Map();
    const units = initializerUnits([file], { graph });
    const unit = units.get('initialize_A');
    assert.deepEqual(unit.calls, ['initialize_B']);
    assert.deepEqual(unit.data, ['l_a']);
    assert.deepEqual(unit.initTargets, ['l_a'], 'a store right after an initFn call is an initialize result');
    assert.equal(unit.effects, false, 'calls to Lean code are not external effects');
    units.set('initialize_B', { name: 'initialize_B', calls: [], data: [] });
    assert.deepEqual(initializerClosure(units, ['initialize_A']), ['initialize_A', 'initialize_B']);
    const plan = initializerWrappers(units, ['initialize_A', 'initialize_B'], { keep: new Set(['initialize_B']) });
    assert.match(plan, /lean_object\* __wrap_initialize_B\(uint8_t builtin\) \{ return __real_initialize_B\(builtin\); \}/);
    assert.match(plan, /static bool done = false;[\s\S]*res = __wrap_initialize_B\(builtin\);/);
    const bodies = initializerWrappers(units, ['initialize_A', 'initialize_B'], { bodies: ['initialize_A'] });
    assert.match(bodies, /int main\(int argc, char \*\*argv\) \{[\s\S]*__real_initialize_A\(1\);/);
    assert.deepEqual(unitsReaching(graph, ['initialize_A'], ['l_a']), ['initialize_A']);
    assert.deepEqual(unitsReaching(graph, ['initialize_A'], ['l_other']), []);
  } finally { rmSync(directory, { recursive: true, force: true }); }
});

test('initialize results and effects classification', () => {
  assert.deepEqual(cInitTargets('l_x = lean_io_result_get_value(res);\nlp_p_y = lean_unbox_uint64(lean_io_result_get_value(res));\nl_z = _init_l_z();\n'),
    ['l_x', 'lp_p_y']);
  const core = coreInitTargets('4.35.0');
  assert.ok(core.includes('l_IO_stdGenRef') && core.includes('l_Lean_attributeMapRef'));
  assert.equal(coreInitTargets('0.0.0'), undefined);
  for (const name of ['l_IO_println', 'lean_get_stdout', 'lean_io_prim_handle_put_str', 'lean_io_getenv']) assert.ok(hasExternalEffect(name), name);
  for (const name of ['lean_st_mk_ref', 'lean_io_mk_world', 'l_Nat_repr']) assert.ok(!hasExternalEffect(name), name);
  assert.ok(isForeignFunction('leansqlite_initialize'));
  // Boxed constants of closed terms are assigned eagerly by the module initializer.
  assert.deepEqual(cInitTargets(''), []);
  for (const name of ['lean_mark_persistent', 'l_foo', 'lp_pkg_bar', 'initialize_Init', 'memcpy']) assert.ok(!isForeignFunction(name), name);
});

test('live symbols from a wasm-ld map, including Emscripten data segments', async () => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-map-'));
  try {
    const map = join(directory, 'a.map');
    writeFileSync(map, [
      '    Addr      Off     Size Out     In      Symbol',
      '       -     2b498  19d03c3 CODE',
      '       -    2b49b       23         a.o:(initialize_A)',
      '       -   19fb85b   1f150d DATA',
      ' 4000000  19fb85c    f03b6 .rodata',
      ' 4000000  19fb860       27         a.o:(.rodata.l_c)',
      ' 4000000  19fb860       27                 l_c',
      ' 40171c8   195029        d em_lib_deps',
      ' 40171c8   19502b        d         lib.a(x.o):(em_lib_deps)',
      ' 40171c8   19502b        d                 __em_lib_deps_x',
      ' 41f1540  19fb85b    5e2f0 .bss',
      ' 41f1540        0        8         a.o:(.bss.l_a)',
      ' 41f1540        0        8                 l_a',
      '       -  1becd68   5172fc CUSTOM(name)', ''].join('\n'));
    const live = await readLiveSymbols(map);
    assert.deepEqual([...live.code], ['initialize_A']);
    assert.deepEqual([...live.data].sort(), ['__em_lib_deps_x', 'l_a', 'l_c']);
  } finally { rmSync(directory, { recursive: true, force: true }); }
});
