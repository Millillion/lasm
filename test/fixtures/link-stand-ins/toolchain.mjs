// A stand-in compile and link toolchain for unit tests of Lasm's link plans
// (test/application-link-plan.test.mjs, test/edge-link-plan.test.mjs,
// test/wasi-link-plan.test.mjs). It is small but behaves like the real tools in
// the ways the link plans observe:
//   compileC     a C "compiler": top-level functions and globals, and the calls
//                and global references of each body in order, become a
//                relocatable Wasm object (the LLVM linking ABI that
//                src/wasm-objects.mjs reads);
//   nm           llvm-nm's listings of such objects and of ar archives of them;
//   linkObjects  a garbage-collecting linker: eager objects, lazy archive and
//                --start-lib members, --wrap, roots from the export list, and a
//                wasm-ld -Map file (the format src/application-reachability.mjs
//                and src/application-initialization.mjs read);
//   archive      a GNU ar archive with a symbol index.
// tool.mjs runs these as command-line programs (clang, llvm-nm, wasm-ld, em++).
import { chmodSync, mkdirSync, mkdtempSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { parseWasmObject, archiveMembers } from '../../../src/wasm-objects.mjs';
import { interceptChildProcess, registerProgram } from './programs.mjs';

const leb = value => { const out = []; do { let byte = value & 0x7f; value >>>= 7; if (value) byte |= 0x80; out.push(byte); } while (value); return out; };
const padded = value => [0x80 | (value & 0x7f), 0x80 | ((value >>> 7) & 0x7f), 0x80 | ((value >>> 14) & 0x7f), 0x80 | ((value >>> 21) & 0x7f), (value >>> 28) & 0x7f];
const str = text => [...leb(Buffer.byteLength(text)), ...Buffer.from(text)];
const section = (id, body) => [id, ...leb(body.length), ...body];
const custom = (name, body) => section(0, [...str(name), ...body]);
const vector = items => [...leb(items.length), ...items.flat()];

/** A relocatable object. functions: [{ name, local, refs: [name] }]; data:
 * [{ name, local }]; a referenced name that is neither is an undefined function
 * (imported from `imports[name]` or env) unless `undefinedData` lists it. */
export function wasmObject({ functions = [], data = [], imports = {}, undefinedData = [], note }) {
  const definedFunctions = new Map(functions.map(f => [f.name, f]));
  const definedData = new Map(data.map(d => [d.name, d]));
  const external = [];
  for (const f of functions) for (const ref of f.refs ?? [])
    if (!definedFunctions.has(ref) && !definedData.has(ref) && !undefinedData.includes(ref) && !external.includes(ref)) external.push(ref);
  const symbols = [], symbolIndex = new Map();
  const add = (key, bytes) => { symbolIndex.set(key, symbols.length); symbols.push(bytes); };
  external.forEach((name, index) => add(name, [0, 0x10, ...leb(index)]));
  functions.forEach((f, index) => add(f.name, [0, (f.local ? 2 : 0) | (f.weak ? 1 : 0), ...leb(external.length + index), ...str(f.name)]));
  data.forEach((d, index) => add(d.name, [1, d.local ? 2 : 0, ...str(d.name), ...leb(index), 0, 8]));
  for (const name of undefinedData) add(name, [1, 0x10, ...str(name)]);
  const relocations = [], bodies = [];
  let offset = leb(functions.length).length;
  for (const f of functions) {
    const code = [0];
    const fixups = [];
    for (const ref of f.refs ?? []) {
      const isData = definedData.has(ref) || undefinedData.includes(ref);
      code.push(isData ? 0x41 : 0x10);
      fixups.push([code.length, isData ? 3 : 0, symbolIndex.get(ref)]);
      code.push(...padded(isData ? 0 : definedFunctions.has(ref) ? external.length + functions.findIndex(g => g.name === ref) : external.indexOf(ref)));
      if (isData) code.push(0x1a);
    }
    code.push(0x0b);
    const size = leb(code.length);
    for (const [at, type, symbol] of fixups) relocations.push([type, ...leb(offset + size.length + at), ...leb(symbol), ...(type === 3 ? [0] : [])]);
    bodies.push([...size, ...code]);
    offset += size.length + code.length;
  }
  return Uint8Array.from([0, 0x61, 0x73, 0x6d, 1, 0, 0, 0,
    ...section(1, [1, 0x60, 0, 0]),
    ...(external.length ? section(2, vector(external.map(name => [...str(imports[name] ?? 'env'), ...str(name), 0, 0]))) : []),
    ...section(3, vector(functions.map(() => [0]))),
    ...section(10, vector(bodies)),
    ...(data.length ? section(11, vector(data.map(() => [0, 0x41, 0, 0x0b, 8, 0, 0, 0, 0, 0, 0, 0, 0]))) : []),
    ...custom('linking', [2, 8, ...leb(vector(symbols).length), ...vector(symbols)]),
    ...(relocations.length ? custom('reloc.CODE', [external.length ? 3 : 2, ...vector(relocations)]) : []),
    // The compiler options, as a producers-like record (identical sources differ by them).
    ...(note ? custom('stand-in.options', str(note)) : [])]);
}

// lean.h's static inline helpers: no symbol references.
const inline = new Set(['lean_io_result_mk_ok', 'lean_box', 'lean_io_result_is_error', 'lean_dec_ref', 'lean_io_result_get_value',
  'lean_unbox', 'lean_unbox_uint64', 'lean_mark_persistent', 'lean_inc', 'lean_dec', 'lean_io_mk_world']);
const keywords = new Set(['if', 'while', 'for', 'return', 'sizeof', 'switch', 'void', 'int', 'char', 'bool', 'static', 'const',
  'uint8_t', 'size_t', 'lean_object', 'struct', 'extern', 'true', 'false', 'NULL', 'else', 'unsigned', '__attribute__', 'noinline', 'unused']);

/** C source → a relocatable object spec. A comment `// stand-in: {json}` adds
 * fields (imports: { name: module }) to the spec. */
export function compileC(text) {
  const extra = /\/\/ stand-in: (.*)$/m.exec(text);
  const source = text.replace(/\/\*[\s\S]*?\*\//g, '').replace(/\/\/.*$/gm, '').replace(/^\s*#.*$/gm, '')
    .replace(/"(?:\\.|[^"\\])*"/g, '""').replace(/'(?:\\.|[^'\\])+'/g, '0');
  const functions = [], data = [], declaredData = new Set();
  const bodies = [];
  let depth = 0, statement = '', start = 0;
  for (let i = 0; i < source.length; i++) {
    const c = source[i];
    if (depth === 0) {
      if (c === ';') { declaration(statement); statement = ''; continue; }
      if (c === '{') {
        if (/\)\s*$/.test(statement) && !/=/.test(statement)) { depth = 1; start = i + 1; continue; }
        // An initializer list: skip it, the statement continues to its `;`.
        let inner = 1; i++;
        for (; i < source.length && inner; i++) { if (source[i] === '{') inner++; else if (source[i] === '}') inner--; }
        i--; continue;
      }
      statement += c;
    } else {
      if (c === '{') depth++;
      else if (c === '}' && !--depth) { definition(statement, source.slice(start, i)); statement = ''; }
    }
  }
  function declaration(text) {
    text = text.trim();
    if (!text || /^typedef\b/.test(text) || /^struct\s+\w+$/.test(text)) return;
    if (/\(/.test(text.replace(/__attribute__\(\([^)]*\)\)/g, '').split('=')[0])) return; // a prototype
    const name = /([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*(?:=|$)/.exec(text.split('=')[0].trim() + (text.includes('=') ? '=' : ''))?.[1];
    if (!name) return;
    if (/^extern\b/.test(text)) declaredData.add(name);
    else data.push({ name, local: /^static\b/.test(text) });
  }
  function definition(header, body) {
    const match = /([A-Za-z_]\w*)\s*\(([^()]*)\)\s*$/.exec(header.replace(/__attribute__\(\([^)]*\)\)/g, ''));
    if (!match) return;
    let name = match[1];
    if (name === 'main') name = /^\s*(?:void)?\s*$/.test(match[2]) ? '__main_void' : '__main_argc_argv';
    functions.push({ name, local: /^\s*static\b/.test(header) });
    bodies.push(body);
  }
  const dataNames = new Set([...data.map(d => d.name), ...declaredData]);
  functions.forEach((f, index) => {
    f.refs = [];
    for (const [, name, call] of bodies[index].matchAll(/\b([A-Za-z_]\w*)\b(\s*\()?/g)) {
      if (keywords.has(name)) continue;
      if (call && !inline.has(name) && !dataNames.has(name)) f.refs.push(name === 'main' ? '__main_argc_argv' : name);
      else if (!call && dataNames.has(name)) f.refs.push(name);
    }
  });
  const spec = { functions, data, undefinedData: [...declaredData].filter(name => !data.some(d => d.name === name)) };
  return { ...spec, ...(extra ? JSON.parse(extra[1]) : {}) };
}

export const compileToObject = (text, note) => wasmObject({ ...compileC(text), note });

/** A GNU ar archive with a symbol index ('/'), members [name, bytes]. */
export function archive(members) {
  const header = (name, size) => Buffer.from(name.padEnd(16) + '0'.padEnd(12) + '0'.padEnd(6) + '0'.padEnd(6) + '644'.padEnd(8) + String(size).padEnd(10) + '`\n');
  const pad = buffer => buffer.length % 2 ? Buffer.concat([buffer, Buffer.from('\n')]) : buffer;
  const defined = members.map(([, bytes]) => parseWasmObject(bytes).symbols.filter(s => !s.undefined && !s.local && s.name).map(s => s.name));
  const names = defined.flat();
  const indexSize = 4 + 4 * names.length + names.reduce((total, name) => total + name.length + 1, 0);
  let position = 8 + 60 + indexSize + (indexSize % 2);
  const offsets = members.map(([name, bytes]) => { const at = position; position += 60 + bytes.length + (bytes.length % 2); return at; });
  const index = Buffer.alloc(indexSize);
  index.writeUInt32BE(names.length, 0);
  let at = 4;
  defined.forEach((list, member) => { for (const _ of list) { index.writeUInt32BE(offsets[member], at); at += 4; } });
  for (const name of names) { at += index.write(name + '\0', at, 'latin1'); }
  return Buffer.concat([Buffer.from('!<arch>\n'), header('/', indexSize), pad(index),
    ...members.flatMap(([name, bytes]) => [header(name + '/', bytes.length), pad(Buffer.from(bytes))])]);
}

const isArchive = bytes => bytes.subarray(0, 8).toString('latin1') === '!<arch>\n';
/** The objects of a file: [{ label, member, object }]. */
export function objectsOf(file) {
  const bytes = readFileSync(file);
  if (isArchive(bytes)) return [...archiveMembers(bytes)].map(([member, data]) => ({ label: `${file}(${member})`, member, object: parseWasmObject(data) }));
  return [{ label: file, member: null, object: parseWasmObject(bytes) }];
}

/** llvm-nm with --defined-only, --undefined-only, --extern-only, --just-symbol-name, --format=posix. */
const nmFlags = new Set(['--defined-only', '--undefined-only', '--extern-only', '--just-symbol-name', '--format=posix']);
export function nm(args) {
  const unknown = args.find(arg => arg.startsWith('-') && !nmFlags.has(arg));
  if (unknown) throw Object.assign(new Error(`llvm-nm: error: unknown argument '${unknown}'`), { status: 1 });
  const files = args.filter(arg => !arg.startsWith('-'));
  const has = flag => args.includes(flag);
  const lines = [];
  for (const file of files) for (const { member, object } of objectsOf(file)) {
    if (member && !has('--format=posix')) lines.push('', `${member}:`);
    for (const symbol of object.symbols) {
      if (!symbol.name || symbol.kind > 1) continue;
      if (has('--defined-only') && symbol.undefined || has('--undefined-only') && !symbol.undefined) continue;
      if (has('--extern-only') && symbol.local) continue;
      const type = symbol.undefined ? 'U' : symbol.kind === 0 ? (symbol.flags & 1 ? 'W' : symbol.local ? 't' : 'T') : (symbol.local ? 'd' : 'D');
      lines.push(has('--just-symbol-name') ? symbol.name : has('--format=posix') ? `${symbol.name} ${type} 0 0` : type === 'U' ? `         U ${symbol.name}` : `00000000 ${type} ${symbol.name}`);
    }
  }
  return lines.join('\n') + '\n';
}

/** em++/wasm-ld link inputs → { inputs: [{ file, lazy }], wrap, map, output, exportsFile, whyExtract, exports }. */
export function parseLinkCommand(args) {
  const result = { inputs: [], wrap: new Set(), exports: [], output: undefined, map: undefined, exportsFile: undefined, whyExtract: undefined };
  let lazy = false;
  for (let i = 0; i < args.length; i++) {
    const arg = args[i];
    if (arg === '-o') { result.output = args[++i]; continue; }
    if (['--pre-js', '--js-library', '-z', '-L'].includes(arg)) { i++; continue; }
    const items = arg.startsWith('-Wl,') ? arg.slice(4).split(',') : [arg];
    for (const item of items) {
      if (item === '--start-lib') lazy = true;
      else if (item === '--end-lib') lazy = false;
      else if (item.startsWith('--wrap=')) result.wrap.add(item.slice(7));
      else if (item.startsWith('-Map=')) result.map = item.slice(5);
      else if (item.startsWith('--why-extract=')) result.whyExtract = item.slice(14);
      else if (item.startsWith('--export=') || item.startsWith('--export-if-defined=')) result.exports.push(item.replace(/^--export(?:-if-defined)?=/, ''));
      else if (item.startsWith('-sEXPORTED_FUNCTIONS=@')) result.exportsFile = item.slice(22);
      else if (!item.startsWith('-') && /\.(?:o|a)$/.test(item)) result.inputs.push({ file: item, lazy: lazy || item.endsWith('.a') });
    }
  }
  return result;
}

/** Link: definitions of eager objects, then of lazy members; garbage collection
 * from the roots; --wrap on undefined references. Unresolved `js_*` functions
 * become imports, any other unresolved symbol fails the link. */
export function linkObjects({ inputs, wrap = new Set(), roots = [] }) {
  const objects = inputs.flatMap(({ file, lazy }) => objectsOf(file).map(item => ({ ...item, lazy })));
  const table = new Map();
  for (const lazy of [false, true]) for (const item of objects.filter(o => o.lazy === lazy)) {
    item.object.symbols.forEach((symbol, index) => {
      if (symbol.undefined || symbol.local || !symbol.name || symbol.kind > 1) return;
      if (table.has(symbol.name)) {
        if (!lazy && !table.get(symbol.name).item.lazy) throw Object.assign(new Error('link failed'), { status: 1,
          stderr: `wasm-ld: error: duplicate symbol: ${symbol.name}\n>>> defined in ${table.get(symbol.name).item.label}\n>>> defined in ${item.label}\n` });
        return;
      }
      table.set(symbol.name, { item, index });
    });
  }
  const live = new Map(), unresolved = new Map(), pending = [], extracted = new Set(), why = [];
  const mark = (item, index) => { const key = `${item.label}\0${index}`; if (!live.has(key)) { live.set(key, { item, index }); pending.push({ item, index }); } };
  const resolve = (name, from) => {
    const found = table.get(name);
    // wasm-ld --why-extract: the first reference that extracts each archive member.
    if (found && found.item.member && !extracted.has(found.item.label)) { extracted.add(found.item.label); why.push({ reference: from ?? '-u', extracted: found.item.label, symbol: name }); }
    if (found) mark(found.item, found.index);
    else if (!unresolved.has(name)) unresolved.set(name, from);
  };
  for (const root of roots) {
    const name = root === 'main' ? (table.has('__main_argc_argv') ? '__main_argc_argv' : '__main_void') : root;
    if (table.has(name)) resolve(name);
  }
  while (pending.length) {
    const { item, index } = pending.pop();
    for (const reference of item.object.references.get(index) ?? []) {
      const symbol = item.object.symbols[reference];
      if (!symbol.undefined) { mark(item, reference); continue; }
      let name = symbol.name;
      if (wrap.has(name)) name = '__wrap_' + name;
      else if (name.startsWith('__real_') && wrap.has(name.slice(7))) name = name.slice(7);
      resolve(name, item.label);
    }
  }
  const errors = [...unresolved].filter(([name]) => !name.startsWith('js_'));
  if (errors.length) throw Object.assign(new Error('link failed'), { status: 1,
    stderr: errors.map(([name, from]) => `wasm-ld: error: ${from}: undefined symbol: ${name}\n`).join('') });
  const entries = [...live.values()].map(({ item, index }) => ({ label: item.label, member: item.member, symbol: item.object.symbols[index] }));
  const row = (text, column) => `       -        0        0${' '.repeat(column)}${text}`;
  const map = ['    Addr      Off     Size Out     In      Symbol', row('CODE', 1)];
  for (const { label, symbol } of entries.filter(e => e.symbol.kind === 0)) map.push(row(`${label}:(${symbol.name})`, 9), row(symbol.name, 17));
  map.push(row('DATA', 1), row('.data', 1));
  for (const { label, symbol } of entries.filter(e => e.symbol.kind === 1)) map.push(row(`${label}:(.data.${symbol.name})`, 9), row(symbol.name, 17));
  map.push(row('CUSTOM(name)', 1), '');
  return { map: map.join('\n'), imports: [...unresolved.keys()].sort(), live: entries.map(e => e.symbol.name),
    whyExtract: ['reference\textracted\tsymbol', ...why.map(row => `${row.reference}\t${row.extracted}\t${row.symbol}`)].join('\n') + '\n' };
}

/** A Wasm program importing the given env functions (what wasmImports reads). */
export function programModule(imports, { module = 'env', exports = [] } = {}) {
  const pairs = imports.map(item => Array.isArray(item) ? item : [module, item]);
  return Uint8Array.from([0, 0x61, 0x73, 0x6d, 1, 0, 0, 0, ...section(1, [1, 0x60, 0, 0]),
    ...(pairs.length ? section(2, vector(pairs.map(([m, name]) => [...str(m), ...str(name), 0, 0]))) : []),
    ...(exports.length ? section(3, vector(exports.map(() => [0]))) : []),
    ...section(5, [1, 0, 1]),
    ...section(7, vector([[...str('memory'), 2, 0], ...exports.map((name, i) => [...str(name), 0, ...leb(pairs.length + i)])])),
    ...(exports.length ? section(10, vector(exports.map(() => [2, 0, 0x0b]))) : [])]);
}

/** src/platform.mjs responseFile, read back; and emscripten's response files. */
export function expandResponseFiles(args) {
  return args.flatMap(arg => {
    if (!arg.startsWith('@')) return [arg];
    const text = readFileSync(arg.slice(1), 'utf8');
    return text.split('\n').filter(Boolean).map(line => line.startsWith('"') && line.endsWith('"') ? line.slice(1, -1).replace(/\\(.)/g, '$1') : line.replace(/\\(.)/g, '$1'));
  });
}

/** Stand-in programs `<prefix>/bin/<name>`: run in-process by this test
 * process (programs.mjs), and as POSIX shell wrappers around tool.mjs. Returns { prefix, log, calls(tool?) → [args], fail(tool, message, { once }) }. */
export function installTools(prefix, names = ['clang', 'llvm-nm', 'wasm-ld', 'wasm-opt']) {
  interceptChildProcess();
  mkdirSync(join(prefix, 'bin'), { recursive: true });
  const log = join(prefix, 'calls.jsonl');
  writeFileSync(log, '');
  const tool = fileURLToPath(new URL('./tool.mjs', import.meta.url));
  for (const name of names) {
    const file = join(prefix, 'bin', name);
    writeFileSync(file, `#!/bin/sh\nexec '${process.execPath}' '${tool}' ${name} '${log}' "$@"\n`);
    chmodSync(file, 0o755);
    for (const path of [file, file + '.exe']) registerProgram(path, name, log);
  }
  return {
    prefix, log,
    calls: name => readFileSync(log, 'utf8').split('\n').filter(Boolean).map(line => JSON.parse(line)).filter(call => !name || call.tool === name).map(call => name ? call.args : call),
    fail: (name, message, { once = false, when } = {}) => writeFileSync(join(prefix, `fail-${once ? 'once-' : when ? 'if-' : ''}${name}`), when ? `${when}\n${message}` : message),
    clear: () => writeFileSync(log, ''),
  };
}

/** The parts of Emscripten's Node glue (program.cjs) that Lasm's loader
 * transformations rewrite, with each --pre-js labelled as emcc labels them. */
export function emscriptenGlue(preJs) {
  return ['// include: shell.js', ...preJs.flatMap(file => [`// include: ${file}`, `// (contents of ${file.split(/[\\/]/).pop()})`, `// end include: ${file}`]),
    'var stringToNewUTF8 = str => 0;',
    'var resolveGlobalSymbol = (symName, direct = false) => {', '  var sym;', '  if (isSymbolDefined(symName)) {', '    sym = wasmImports[symName];', '  }',
    '  return {', '    sym,', '    name: symName', '  };', '};',
    'var getFunctionAddress = func => {', '  if (!functionsInTableMap) {', '    functionsInTableMap = new WeakMap();',
    '    updateTableMap(0, Number(wasmTable.length));', '  }', '  return functionsInTableMap.get(func) || 0;', '};',
    'var getEmptyTableSlot = () => {', '  if (freeTableIndexes.length) {', '    return freeTableIndexes.pop();', '  }', '  return wasmTable["grow"](1);', '};',
    'var updateGOT = (exports, replace) => {', '  for (var symName in exports) {', '    if (isInternalSym(symName)) {', '      continue;', '    }',
    '    var value = exports[symName];', '    var existingEntry = GOT[symName] && GOT[symName].value != -1n;', '    if (replace || !existingEntry) {',
    '      var newValue;', '      if (typeof value == "function") {', '        newValue = BigInt(addFunction(value));', '      }',
    '      GOT[symName].value = newValue;', '    }', '  }', '};',
    'function receiveInstance(instance) {', '    wasmExports = instance.exports;', '}',
    'var pthreadPoolSize = 4;', '// end include: shell.js', ''].join('\n');
}

const temporaries = [];
process.once('exit', () => { for (const directory of temporaries) rmSync(directory, { recursive: true, force: true }); });
/** A temporary directory, removed when the test process exits. */
export function temporaryDirectory(prefix) {
  const directory = mkdtempSync(join(tmpdir(), prefix));
  temporaries.push(directory);
  return directory;
}
