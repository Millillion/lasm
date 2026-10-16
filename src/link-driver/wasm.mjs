// Minimal Wasm reader for the Node link driver: the parts of Emscripten 6.0.9's
// tools/webassembly.py that tools/extract_metadata.py and tools/emscripten.py
// use. It follows the Python reader's choices (including its strictness about
// value types and init expressions), so a module emcc would reject is rejected.

export const Type = Object.freeze({ I32: 0x7f, I64: 0x7e, F32: 0x7d, F64: 0x7c, V128: 0x7b, FUNCREF: 0x70,
  EXTERNREF: 0x6f, EXNREF: 0x69, VOID: 0x40 });
const knownTypes = new Set(Object.values(Type));
export const OpCode = Object.freeze({ NOP: 0x01, BLOCK: 0x02, END: 0x0b, BR: 0x0c, BR_TABLE: 0x0e, CALL: 0x10,
  DROP: 0x1a, LOCAL_GET: 0x20, LOCAL_SET: 0x21, LOCAL_TEE: 0x22, GLOBAL_GET: 0x23, GLOBAL_SET: 0x24, RETURN: 0x0f,
  I32_CONST: 0x41, I64_CONST: 0x42, F32_CONST: 0x43, F64_CONST: 0x44, I32_ADD: 0x6a, I64_ADD: 0x7c, REF_NULL: 0xd0,
  ATOMIC_PREFIX: 0xfe, MEMORY_PREFIX: 0xfc });
const knownOpcodes = new Set(Object.values(OpCode));
export const MemoryOpCode = Object.freeze({ MEMORY_INIT: 0x08, MEMORY_DROP: 0x09, MEMORY_COPY: 0x0a, MEMORY_FILL: 0x0b });
export const AtomicOpCode = Object.freeze({ ATOMIC_NOTIFY: 0x00, ATOMIC_WAIT32: 0x01, ATOMIC_WAIT64: 0x02,
  ATOMIC_I32_STORE: 0x17, ATOMIC_I32_RMW_CMPXCHG: 0x48 });
export const SecType = Object.freeze({ CUSTOM: 0, TYPE: 1, IMPORT: 2, FUNCTION: 3, TABLE: 4, MEMORY: 5, GLOBAL: 6,
  EXPORT: 7, START: 8, ELEM: 9, CODE: 10, DATA: 11, DATACOUNT: 12, TAG: 13 });
const knownSections = new Set(Object.values(SecType));
export const ExternType = Object.freeze({ FUNC: 0, TABLE: 1, MEMORY: 2, GLOBAL: 3, TAG: 4 });
const DylinkType = Object.freeze({ MEM_INFO: 1, NEEDED: 2, EXPORT_INFO: 3, IMPORT_INFO: 4, RUNTIME_PATH: 5 });
export const TargetFeaturePrefix = Object.freeze({ USED: 0x2b, DISALLOWED: 0x2d });
const LIMITS_HAS_MAX = 0x1, SEG_PASSIVE = 0x1;
const SYMBOL_BINDING_MASK = 0x3, SYMBOL_BINDING_WEAK = 0x1;
const header = Buffer.from([0, 0x61, 0x73, 0x6d, 1, 0, 0, 0]);

export class InvalidWasmError extends Error {}

export class WasmModule {
  constructor(bytes, name = 'module') {
    this.bytes = Buffer.isBuffer(bytes) ? bytes : Buffer.from(bytes);
    if (this.bytes.length < 8 || !this.bytes.subarray(0, 8).equals(header)) throw new InvalidWasmError(`${name} is not a valid wasm file`);
    this.offset = 0;
    this.cache = new Map();
  }

  memo(key, compute) {
    if (!this.cache.has(key)) this.cache.set(key, compute());
    return this.cache.get(key);
  }
  seek(offset) { this.offset = offset; }
  tell() { return this.offset; }
  skip(count) { this.offset += count; }
  readAt(offset, count) { return this.bytes.subarray(offset, offset + count); }
  readByte() {
    if (this.offset >= this.bytes.length) throw new InvalidWasmError('Unexpected end of Wasm module');
    return this.bytes[this.offset++];
  }
  /** Unsigned LEB128 (arbitrary length, as Python's leb128 module reads it). */
  readUleb() {
    let result = 0n, shift = 0n, byte;
    do { byte = this.readByte(); result |= BigInt(byte & 0x7f) << shift; shift += 7n; } while (byte & 0x80);
    return toNumber(result);
  }
  readSleb() {
    let result = 0n, shift = 0n, byte;
    do { byte = this.readByte(); result |= BigInt(byte & 0x7f) << shift; shift += 7n; } while (byte & 0x80);
    if (byte & 0x40) result -= 1n << shift;
    return toNumber(result);
  }
  readString() {
    const size = this.readUleb();
    if (this.offset + size > this.bytes.length) throw new InvalidWasmError('Unexpected end of Wasm module');
    const value = new TextDecoder('utf-8', { fatal: true }).decode(this.bytes.subarray(this.offset, this.offset + size));
    this.offset += size;
    return value;
  }
  readLimits() {
    const flags = this.readByte(), initial = this.readUleb();
    const maximum = flags & LIMITS_HAS_MAX ? this.readUleb() : 0;
    return { flags, initial, maximum };
  }
  /** Python: Type(read_uleb()) raises for anything outside the enum. */
  readType() {
    const value = this.readUleb();
    if (!knownTypes.has(value)) throw new InvalidWasmError(`${value} is not a valid Type`);
    return value;
  }
  readInit() {
    const code = [];
    for (;;) {
      const opcode = this.readByte(), args = [];
      if (opcode === OpCode.GLOBAL_GET) args.push(this.readUleb());
      else if (opcode === OpCode.I32_CONST || opcode === OpCode.I64_CONST) args.push(this.readSleb());
      else if (opcode === OpCode.REF_NULL) args.push(this.readType());
      else if (![OpCode.END, OpCode.I32_ADD, OpCode.I64_ADD].includes(opcode)) {
        throw new InvalidWasmError(`unexpected opcode ${knownOpcodes.has(opcode) ? opcode : `0x${opcode.toString(16)}`}`);
      }
      code.push([opcode, args]);
      if (opcode === OpCode.END) return code;
    }
  }

  sections() {
    return this.memo('sections', () => {
      const result = [];
      let offset = 8;
      while (offset < this.bytes.length) {
        this.seek(offset);
        const type = this.readByte();
        if (!knownSections.has(type)) throw new InvalidWasmError(`${type} is not a valid SecType`);
        const size = this.readUleb(), sectionOffset = this.tell();
        const name = type === SecType.CUSTOM ? this.readString() : null;
        result.push({ type, size, offset: sectionOffset, name });
        offset = sectionOffset + size;
      }
      return result;
    });
  }
  getSection(type) { return this.sections().find(section => section.type === type) ?? null; }
  getCustomSection(name) { return this.sections().find(section => section.type === SecType.CUSTOM && section.name === name) ?? null; }

  getTypes() {
    return this.memo('types', () => {
      const section = this.getSection(SecType.TYPE);
      if (!section) return [];
      this.seek(section.offset);
      const count = this.readUleb(), types = [];
      for (let i = 0; i < count; i++) {
        const form = this.readByte();
        if (form !== 0x60) throw new InvalidWasmError('Unsupported Wasm type form');
        const params = Array.from({ length: this.readUleb() }, () => this.readType());
        const returns = Array.from({ length: this.readUleb() }, () => this.readType());
        types.push({ params, returns });
      }
      return types;
    });
  }

  getExports() {
    return this.memo('exports', () => {
      const section = this.getSection(SecType.EXPORT);
      if (!section) return [];
      this.seek(section.offset);
      const count = this.readUleb(), exports = [];
      for (let i = 0; i < count; i++) {
        const name = this.readString(), kind = this.readByte();
        if (kind > ExternType.TAG) throw new InvalidWasmError(`${kind} is not a valid ExternType`);
        exports.push({ name, kind, index: this.readUleb() });
      }
      return exports;
    });
  }

  getImports() {
    return this.memo('imports', () => {
      const section = this.getSection(SecType.IMPORT);
      if (!section) return [];
      this.seek(section.offset);
      const count = this.readUleb(), imports = [];
      for (let i = 0; i < count; i++) {
        const module = this.readString(), field = this.readString(), kind = this.readByte();
        let type = null;
        if (kind === ExternType.FUNC) type = this.readUleb();
        else if (kind === ExternType.GLOBAL) { type = this.readSleb(); this.readByte(); }
        else if (kind === ExternType.MEMORY) this.readLimits();
        else if (kind === ExternType.TABLE) { type = this.readSleb(); this.readLimits(); }
        else if (kind === ExternType.TAG) { this.readByte(); type = this.readUleb(); }
        else throw new InvalidWasmError(`${kind} is not a valid ExternType`);
        imports.push({ kind, module, field, type });
      }
      return imports;
    });
  }

  getGlobals() {
    return this.memo('globals', () => {
      const section = this.getSection(SecType.GLOBAL);
      if (!section) return [];
      this.seek(section.offset);
      const count = this.readUleb(), globals = [];
      for (let i = 0; i < count; i++) {
        const type = this.readType(), mutable = this.readByte(), init = this.readInit();
        globals.push({ type, mutable, init });
      }
      return globals;
    });
  }

  getStart() {
    return this.memo('start', () => {
      const section = this.getSection(SecType.START);
      if (!section) return null;
      this.seek(section.offset);
      return this.readUleb();
    });
  }

  getFunctions() {
    return this.memo('functions', () => {
      const section = this.getSection(SecType.CODE);
      if (!section) return [];
      this.seek(section.offset);
      const count = this.readUleb(), functions = [];
      for (let i = 0; i < count; i++) {
        const size = this.readUleb(), start = this.tell();
        functions.push({ offset: start, size });
        this.seek(start + size);
      }
      return functions;
    });
  }

  getFunctionTypes() {
    return this.memo('functionTypes', () => {
      const section = this.getSection(SecType.FUNCTION);
      if (!section) return [];
      this.seek(section.offset);
      return Array.from({ length: this.readUleb() }, () => this.readUleb());
    });
  }

  getSegments() {
    return this.memo('segments', () => {
      const section = this.getSection(SecType.DATA);
      if (!section) throw new InvalidWasmError('The module has no data section');
      this.seek(section.offset);
      const count = this.readUleb(), segments = [];
      for (let i = 0; i < count; i++) {
        const flags = this.readUleb();
        const init = flags & SEG_PASSIVE ? null : this.readInit();
        const size = this.readUleb(), offset = this.tell();
        segments.push({ index: i, flags, init, offset, size });
        this.seek(offset + size);
      }
      return segments;
    });
  }

  importsByKind(kind) {
    return this.memo(`imports:${kind}`, () => this.getImports().filter(entry => entry.kind === kind));
  }
  numImportedFuncs() { return this.importsByKind(ExternType.FUNC).length; }
  numImportedGlobals() { return this.importsByKind(ExternType.GLOBAL).length; }
  getFunction(index) {
    if (index < this.numImportedFuncs()) throw new Error(`Function ${index} is imported`);
    const body = this.getFunctions()[index - this.numImportedFuncs()];
    if (!body) throw new InvalidWasmError(`No function ${index}`);
    return body;
  }
  getGlobal(index) {
    if (index < this.numImportedGlobals()) throw new Error(`Global ${index} is imported`);
    const global = this.getGlobals()[index - this.numImportedGlobals()];
    if (!global) throw new InvalidWasmError(`No global ${index}`);
    return global;
  }
  getFunctionType(index) {
    const imported = this.importsByKind(ExternType.FUNC);
    const type = index < imported.length ? imported[index].type : this.getFunctionTypes()[index - imported.length];
    const result = this.getTypes()[type];
    if (!result) throw new InvalidWasmError(`No type for function ${index}`);
    return result;
  }

  /** Feature name -> prefix (USED '+' / DISALLOWED '-'), in section order. */
  getTargetFeatures() {
    return this.memo('features', () => {
      const section = this.getCustomSection('target_features');
      const features = new Map();
      if (!section) return features;
      this.seek(section.offset);
      if (this.readString() !== 'target_features') throw new InvalidWasmError('Invalid target_features section');
      this.readByte(); // feature count, ignored as in Python
      while (this.tell() < section.offset + section.size) {
        const prefix = this.readByte();
        if (prefix !== TargetFeaturePrefix.USED && prefix !== TargetFeaturePrefix.DISALLOWED)
          throw new InvalidWasmError(`${prefix} is not a valid TargetFeaturePrefix`);
        features.set(this.readString(), prefix);
      }
      return features;
    });
  }

  /** tools/webassembly.py parse_dylink_section: the first section must be dylink(.0). */
  parseDylinkSection() {
    return this.memo('dylink', () => {
      const section = this.sections()[0];
      if (!section || section.type !== SecType.CUSTOM) throw new InvalidWasmError('error parsing shared library');
      this.seek(section.offset);
      this.readString();
      const result = { needed: [], exportInfo: new Map(), importInfo: new Map(), runtimePaths: [] };
      if (section.name === 'dylink') {
        Object.assign(result, { memSize: this.readUleb(), memAlign: this.readUleb(), tableSize: this.readUleb(), tableAlign: this.readUleb() });
        for (let count = this.readUleb(); count; count--) result.needed.push(this.readString());
      } else if (section.name === 'dylink.0') {
        const end = section.offset + section.size;
        while (this.tell() < end) {
          const type = this.readUleb(), size = this.readUleb(), subsectionEnd = this.tell() + size;
          if (type === DylinkType.MEM_INFO) {
            Object.assign(result, { memSize: this.readUleb(), memAlign: this.readUleb(), tableSize: this.readUleb(), tableAlign: this.readUleb() });
          } else if (type === DylinkType.NEEDED) {
            for (let count = this.readUleb(); count; count--) result.needed.push(this.readString());
          } else if (type === DylinkType.EXPORT_INFO) {
            for (let count = this.readUleb(); count; count--) { const symbol = this.readString(); result.exportInfo.set(symbol, this.readUleb()); }
          } else if (type === DylinkType.IMPORT_INFO) {
            for (let count = this.readUleb(); count; count--) {
              const module = this.readString(), field = this.readString(), flags = this.readUleb();
              if (!result.importInfo.has(module)) result.importInfo.set(module, new Map());
              result.importInfo.get(module).set(field, flags);
            }
          } else if (type === DylinkType.RUNTIME_PATH) {
            for (let count = this.readUleb(); count; count--) result.runtimePaths.push(this.readString());
          } else this.skip(size);
          if (this.tell() !== subsectionEnd) throw new InvalidWasmError('Malformed dylink.0 subsection');
        }
      } else throw new InvalidWasmError('error parsing shared library');
      return result;
    });
  }
}

function toNumber(value) {
  if (value > BigInt(Number.MAX_SAFE_INTEGER) || value < BigInt(Number.MIN_SAFE_INTEGER))
    throw new InvalidWasmError('Wasm integer outside the supported range');
  return Number(value);
}

/** tools/webassembly.py get_weak_imports. */
export function getWeakImports(module) {
  const weak = [];
  for (const symbols of module.parseDylinkSection().importInfo.values())
    for (const [symbol, flags] of symbols) if ((flags & SYMBOL_BINDING_MASK) === SYMBOL_BINDING_WEAK) weak.push(symbol);
  return weak;
}

/** Signature letters of tools/emscripten.py type_to_sig. */
export function typeToSig(type) {
  const letter = { [Type.I32]: 'i', [Type.I64]: 'j', [Type.F32]: 'f', [Type.F64]: 'd', [Type.EXTERNREF]: 'e', [Type.VOID]: 'v' }[type];
  if (!letter) throw new Error(`No signature letter for Wasm type ${type}`);
  return letter;
}
