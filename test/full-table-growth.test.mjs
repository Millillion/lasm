import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { runInNewContext } from 'node:vm';
import { optimizeMainTableGrowth } from '../scripts/full-lean/table-growth.mjs';

const original = readFileSync(new URL('./fixtures/got-emscripten.js.txt', import.meta.url), 'utf8');
const optimized = optimizeMainTableGrowth(original);
const string = s => [s.length, ...Buffer.from(s)];
const section = (id, bytes) => [id, bytes.length, ...bytes];
const names = [['a',0,0],['b',0,1],['c',0,2],['d',0,3],['aliasB',0,1],['__internal',0,3],['data',3,0],['table',1,0]];
function fixture(initial,maximum,wide) { return new WebAssembly.Module(Uint8Array.from([0,97,115,109,1,0,0,0,
  ...section(1,[1,0x60,0,1,0x7f]), ...section(3,[4,0,0,0,0]),
  ...section(4,[1,0x70,wide ? 5 : 1,initial,maximum]),
  ...section(6,[1,0x7e,0,0x42,42,0x0b]),
  ...section(7,[names.length,...names.flatMap(([name,kind,index])=>[...string(name),kind,index])]),
  ...section(10,[4,...[10,20,30,40].flatMap(n=>[4,0,0x41,n,0x0b])]),
])); }

function run(source, { initial=3, maximum=40, free=[], existing=false, replace=false, side=false, wide=false }={}) {
  const module = fixture(initial,maximum,wide);
  const instance = new WebAssembly.Instance(module), secondary = new WebAssembly.Instance(module);
  const table = instance.exports.table;
  const map = new Map([[instance.exports.a,1]]), growth=[];
  table.set(wide ? 1n : 1,instance.exports.a);
  const grow = table.grow.bind(table);
  table.grow = count => { growth.push(count); return grow(count); };
  const GOT = {};
  if (existing) {
    table.set(wide ? 2n : 2,instance.exports.d); map.set(instance.exports.d,2);
    GOT.c = new WebAssembly.Global({value:'i64',mutable:true},2n);
    GOT.b = new WebAssembly.Global({value:'i64',mutable:true},-1n);
  }
  const api = runInNewContext(`
var wasmTable = table, freeTableIndexes = [...free];
var getFunctionAddress = fn => map.get(fn) || 0;
var isInternalSym = name => name.startsWith('__');
var addFunction = fn => {
  var known = getFunctionAddress(fn);
  if (known) return known;
  var index = getEmptyTableSlot();
  wasmTable.set(wide ? BigInt(index) : index,fn); map.set(fn,index); return index;
};
${source}
lasmMainExports = exports;
({update:updateGOT,free:()=>freeTableIndexes});`,
    {table,free,map,GOT,exports:instance.exports,WebAssembly,RangeError,wide});
  let error;
  try {
    api.update(instance.exports,replace);
    if (side) api.update(secondary.exports,true);
  } catch (failure) { error = {name:failure.name,message:failure.message}; }
  return {growth,state:{error,free:[...api.free()],length:table.length,
    globals:Object.fromEntries(Object.entries(GOT).map(([k,v])=>[k,v.value])),
    entries:Array.from({length:Number(table.length)},(_,i)=>table.get(wide ? BigInt(i) : i)?.() ?? null)}};
}

for (const [name, options] of [
  ['aliases and data',{}],
  ['existing free slots',{initial:6,free:[3,5]}],
  ['enough free slots',{initial:7,free:[2,3,4,5,6]}],
  ['already-bound symbols and unresolved globals',{existing:true}],
  ['explicit binding replacement',{existing:true,replace:true}],
  ['later side-module binding',{side:true}],
  ['partial allocation before the table maximum',{maximum:5}],
  ['zero-slot reuse retains the original sentinel behavior',{free:[0]}],
]) for (const wide of [false,true]) test(`main table reservation (${wide ? 64 : 32} bit) preserves ${name}`, () => {
  const reference = wide ? original.replace('["grow"](1)', '["grow"](1n)') : original;
  assert.deepEqual(run(optimizeMainTableGrowth(reference),{...options,wide}).state,run(reference,{...options,wide}).state);
});

test('initialization uses one exact growth without reserving unused capacity', () => {
  const before=run(original),after=run(optimized);
  assert.deepEqual(before.growth,[1,1,1]);
  assert.deepEqual(after.growth,[3]);
  assert.equal(after.state.length,before.state.length);
  assert.deepEqual(after.state.free,[]);
});

test('table-limit rejection falls back to the original incremental failure', () => {
  const result=run(optimized,{maximum:5});
  assert.deepEqual(result.growth,[3,1,1,1]);
  assert.equal(result.state.error.name,'RangeError');
});

test('the transform rejects double application and changed GOT semantics', () => {
  assert.throws(()=>optimizeMainTableGrowth(optimized),/already optimized/);
  assert.throws(()=>optimizeMainTableGrowth(original.replace('!= -1n','!= 0n')),/semantics/);
  assert.throws(()=>optimizeMainTableGrowth(original.replace('.pop()','.shift()')),/semantics/);
  assert.throws(()=>optimizeMainTableGrowth(''),/requires/);
});
