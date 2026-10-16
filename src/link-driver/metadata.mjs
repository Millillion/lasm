// Port of Emscripten 6.0.9 tools/extract_metadata.py to JavaScript (Phase 2
// Node link driver). Reads what emcc's glue generation needs from a linked,
// finalized Wasm module: exports, imports, invoke_* wrappers, EM_ASM and EM_JS
// strings, JS library dependencies, target features and whether main reads its
// parameters. Function and variable names follow the Python original.
import { readFileSync } from 'node:fs';
import { WasmModule, OpCode, MemoryOpCode, AtomicOpCode, ExternType, TargetFeaturePrefix } from './wasm.mjs';

function skipFunctionHeader(module) {
  for (let locals = module.readUleb(); locals; locals--) { module.readUleb(); module.readType(); }
}

const knownOpcodes = new Set(Object.values(OpCode));

function isOrigMainWrapper(module, func) {
  module.getTypes(); module.getFunctionTypes();
  module.seek(func.offset);
  skipFunctionHeader(module);
  const end = func.offset + func.size;
  let opcode;
  while (module.tell() !== end) {
    opcode = module.readByte();
    if (!knownOpcodes.has(opcode)) return false;
    if (opcode === OpCode.CALL) {
      const callee = module.readUleb();
      if (module.getFunctionType(callee).params.length !== 0) return false;
    } else if (opcode === OpCode.LOCAL_GET || opcode === OpCode.LOCAL_SET) module.readUleb();
    else if (opcode !== OpCode.END && opcode !== OpCode.RETURN) return false;
  }
  if (opcode !== OpCode.END) throw new Error('assertion failed: main wrapper does not end with END');
  return true;
}

export function getConstExprValue(expr) {
  if (expr.at(-1)?.[0] !== OpCode.END) throw new Error('assertion failed: constant expression without END');
  for (const [opcode, immediates] of expr) {
    if (opcode === OpCode.I32_CONST || opcode === OpCode.I64_CONST) {
      if (immediates.length !== 1) throw new Error('assertion failed: constant immediates');
      return immediates[0];
    }
    if (opcode === OpCode.GLOBAL_GET) continue;
    if (opcode === OpCode.END) return 0;
    throw new Error(`unexpected opcode in const expr: ${opcode}`);
  }
}

const toUnsigned = value => value < 0 ? Number(BigInt(value) & 0xffffffffn) : value;

function parseFunctionForMemoryInits(module, funcIndex, offsetMap) {
  const segments = module.getSegments();
  const func = module.getFunction(funcIndex);
  module.seek(func.offset);
  skipFunctionHeader(module);
  const end = func.offset + func.size, constValues = [], callTargets = [];
  const unknown = opcode => { throw new Error(`assertion failed: unknown: ${opcode}`); };
  while (module.tell() !== end) {
    const opcode = module.readByte();
    switch (opcode) {
      case OpCode.END: case OpCode.NOP: case OpCode.DROP: case OpCode.I32_ADD: case OpCode.I64_ADD: break;
      case OpCode.BLOCK: module.readType(); break;
      case OpCode.I32_CONST: case OpCode.I64_CONST: constValues.push(module.readSleb()); break;
      case OpCode.GLOBAL_SET: case OpCode.BR: case OpCode.GLOBAL_GET: case OpCode.LOCAL_SET: case OpCode.LOCAL_GET:
      case OpCode.LOCAL_TEE: module.readUleb(); break;
      case OpCode.CALL: callTargets.push(module.readUleb()); break;
      case OpCode.MEMORY_PREFIX: {
        const memoryOpcode = module.readByte();
        if (memoryOpcode === MemoryOpCode.MEMORY_INIT) {
          const segment = segments[module.readUleb()];
          offsetMap.set(segment, toUnsigned(constValues.at(-3)));
          if (module.readUleb() !== 0) throw new Error('assertion failed: memory index');
        } else if (memoryOpcode === MemoryOpCode.MEMORY_FILL) {
          if (module.readUleb() !== 0) throw new Error('assertion failed: memory index');
        } else if (memoryOpcode === MemoryOpCode.MEMORY_DROP) module.readUleb();
        else unknown(memoryOpcode);
        break;
      }
      case OpCode.ATOMIC_PREFIX: {
        const atomicOpcode = module.readByte();
        if ([AtomicOpCode.ATOMIC_I32_RMW_CMPXCHG, AtomicOpCode.ATOMIC_I32_STORE, AtomicOpCode.ATOMIC_NOTIFY,
          AtomicOpCode.ATOMIC_WAIT32, AtomicOpCode.ATOMIC_WAIT64].includes(atomicOpcode)) { module.readUleb(); module.readUleb(); }
        else unknown(atomicOpcode);
        break;
      }
      case OpCode.BR_TABLE: {
        for (let count = module.readUleb(); count; count--) module.readUleb();
        module.readUleb();
        break;
      }
      default: unknown(opcode);
    }
  }
  for (const target of callTargets) parseFunctionForMemoryInits(module, target, offsetMap);
}

function getPassiveSegmentOffsets(module) {
  return module.memo('passiveSegmentOffsets', () => {
    const start = module.getStart();
    if (start === null) throw new Error('assertion failed: passive segments without a start function');
    const offsetMap = new Map();
    parseFunctionForMemoryInits(module, start, offsetMap);
    return offsetMap;
  });
}

function findSegmentWithAddress(module, address) {
  const segments = module.getSegments();
  for (const segment of segments.filter(segment => segment.init)) {
    const offset = toUnsigned(getConstExprValue(segment.init));
    if (address >= offset && address < offset + segment.size) return [segment, address - offset];
  }
  if (segments.some(segment => !segment.init)) {
    for (const [segment, offset] of getPassiveSegmentOffsets(module))
      if (address >= offset && address < offset + segment.size) return [segment, address - offset];
  }
  throw new Error(`assertion failed: unable to find segment for address: ${address}`);
}

/** Python: bytes.decode('utf8') then '\\\\' -> '\\' (historical escaping). */
function dataToString(data) {
  return new TextDecoder('utf-8', { fatal: true }).decode(data).replaceAll('\\\\', '\\');
}

/** bytes.find(b'\0', start): -1 when absent, which Python slicing treats as len-1. */
function findNul(data, start) { return data.indexOf(0, start); }
function pySlice(data, start, end) { return data.subarray(start, end < 0 ? data.length + end : end); }

function getSectionStrings(module, exportMap, sectionName) {
  const start = exportMap.get(`__start_${sectionName}`), stop = exportMap.get(`__stop_${sectionName}`);
  if (!start || !stop) return new Map();
  const startAddr = toUnsigned(getConstExprValue(module.getGlobal(start.index).init));
  const endAddr = toUnsigned(getConstExprValue(module.getGlobal(stop.index).init));
  const [segment, segmentOffset] = findSegmentWithAddress(module, startAddr);
  const strings = new Map(), data = module.readAt(segment.offset, segment.size);
  let strStart = segmentOffset;
  const end = segmentOffset + (endAddr - startAddr);
  while (strStart < end) {
    const strEnd = findNul(data, strStart);
    strings.set(startAddr - segmentOffset + strStart, dataToString(pySlice(data, strStart, strEnd)));
    strStart = strEnd + 1;
  }
  return strings;
}

function getStringAt(module, address) {
  const [segment, offset] = findSegmentWithAddress(module, address);
  const data = module.readAt(segment.offset, segment.size);
  return dataToString(pySlice(data, offset, findNul(data, offset)));
}

function getMainReadsParams(module, exportMap, settings) {
  if (settings.STANDALONE_WASM) return true;
  const main = exportMap.get('main') ?? exportMap.get('__main_argc_argv');
  if (!main || main.kind !== ExternType.FUNC) return false;
  return !isOrigMainWrapper(module, module.getFunction(main.index));
}

/** Map export name -> function type, in export order. */
function getFunctionExports(module) {
  const result = new Map();
  for (const entry of module.getExports()) if (entry.kind === ExternType.FUNC) result.set(entry.name, module.getFunctionType(entry.index));
  return result;
}

/** [export, global-or-null] for non-function exports. */
function getOtherExports(module) {
  return module.getExports().filter(entry => entry.kind !== ExternType.FUNC)
    .map(entry => [entry, entry.kind === ExternType.GLOBAL ? module.getGlobal(entry.index) : null]);
}

function readModuleImports(module, metadata) {
  const types = module.getTypes();
  metadata.imports = []; metadata.invokeFuncs = []; metadata.emJsFuncTypes = new Map();
  for (const entry of module.getImports()) {
    if (entry.kind === ExternType.FUNC) {
      if (entry.field.startsWith('invoke_')) metadata.invokeFuncs.push(entry.field);
      else {
        if (metadata.emJsFuncs.has(entry.field)) metadata.emJsFuncTypes.set(entry.field, types[entry.type]);
        metadata.imports.push(entry.field);
      }
    } else if (entry.kind === ExternType.GLOBAL || entry.kind === ExternType.TAG) metadata.imports.push(entry.field);
  }
}

const allExports = module => module.getExports().map(entry => entry.name.startsWith('__em_js__') ? entry.name.slice(9) : entry.name);

/** extract_metadata.update_metadata: re-read exports and imports after finalize. */
export function updateMetadata(bytes, metadata) {
  const module = new WasmModule(bytes);
  metadata.functionExports = getFunctionExports(module);
  metadata.otherExports = getOtherExports(module);
  metadata.allExports = allExports(module);
  readModuleImports(module, metadata);
  return metadata;
}

/** extract_metadata.extract_metadata. Maps keep Python's dict insertion order. */
export function extractMetadata(bytes, settings) {
  const module = new WasmModule(bytes);
  const exports = module.getExports();
  const exportMap = new Map(exports.map(entry => [entry.name, entry]));
  const emJsFuncs = new Map();
  for (const entry of exports) {
    if (entry.kind === ExternType.GLOBAL && entry.name.startsWith('__em_js__')) {
      const address = toUnsigned(getConstExprValue(module.getGlobal(entry.index).init));
      emJsFuncs.set(entry.name.slice(9), getStringAt(module, address));
    }
  }
  const features = [...module.getTargetFeatures()].filter(([, prefix]) => prefix === TargetFeaturePrefix.USED)
    .map(([feature]) => `--enable-${feature}`)
    .map(flag => flag.replaceAll('--enable-atomics', '--enable-threads').replaceAll('--enable-simd128', '--enable-simd')
      .replaceAll('--enable-nontrapping-fptoint', '--enable-nontrapping-float-to-int'));
  const metadata = {
    functionExports: getFunctionExports(module),
    otherExports: getOtherExports(module),
    allExports: allExports(module),
    emAsmConsts: getSectionStrings(module, exportMap, 'em_asm'),
    jsDeps: [...getSectionStrings(module, exportMap, 'em_lib_deps').values()].filter(Boolean),
    emJsFuncs, features,
    mainReadsParams: getMainReadsParams(module, exportMap, settings),
  };
  readModuleImports(module, metadata);
  return metadata;
}

export const readWasm = file => readFileSync(file);
