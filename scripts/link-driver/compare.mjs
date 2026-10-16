#!/usr/bin/env node
// Byte-equality harness for the Phase 2 Node link driver.
//
//   node scripts/link-driver/compare.mjs A B [--json FILE] [--all]
//
// A and B are recorder runs (directories with run.json), recorder fixtures
// (directories with build.json), or plain build directories (objects, maps and
// dist/program.{wasm,cjs}). Compared in pipeline order: object files, link maps,
// program.wasm, program.cjs. Link maps name inputs by absolute path, so each
// side's own recorded roots (or, for plain directories, the directory itself)
// are replaced by placeholders before comparison; every other file must be
// byte-identical. The first divergence of each file is located precisely: text
// line/column, or Wasm byte offset with its section and function index.
// Exit status: 0 identical, 1 different, 2 usage error.
import { existsSync, readFileSync, readdirSync, statSync, writeFileSync } from 'node:fs';
import { join, relative, resolve, basename } from 'node:path';
import { parseArgs } from 'node:util';

const { values: options, positionals } = parseArgs({ allowPositionals: true, options: {
  json: { type: 'string' }, all: { type: 'boolean', default: false } } });
if (positionals.length !== 2) { console.error('Usage: compare.mjs A B [--json FILE] [--all]'); process.exit(2); }

const isWasm = bytes => bytes.length >= 8 && bytes.readUInt32LE(0) === 0x6d736100;
function readLeb(bytes, offset) {
  let result = 0, shift = 0, byte;
  do { byte = bytes[offset++]; result += (byte & 0x7f) * 2 ** shift; shift += 7; } while (byte & 0x80);
  return [result, offset];
}
const sectionNames = ['custom', 'type', 'import', 'function', 'table', 'memory', 'global', 'export', 'start',
  'element', 'code', 'data', 'datacount', 'tag'];
/** Locate a byte offset inside a Wasm module or object: section, and function body for code. */
export function wasmLocation(bytes, target) {
  let offset = 8, importedFunctions = 0;
  while (offset < bytes.length) {
    const id = bytes[offset];
    const [size, payload] = readLeb(bytes, offset + 1);
    const end = payload + size;
    let name = sectionNames[id] ?? `unknown-${id}`;
    if (id === 0) { const [length, start] = readLeb(bytes, payload); name = `custom:${bytes.subarray(start, start + length).toString('utf8')}`; }
    if (id === 2) {
      // Count imported functions so code-body indices are module function indices.
      let [count, cursor] = readLeb(bytes, payload);
      for (let i = 0; i < count; i++) {
        let length; [length, cursor] = readLeb(bytes, cursor); cursor += length;
        [length, cursor] = readLeb(bytes, cursor); cursor += length;
        const kind = bytes[cursor++];
        if (kind === 0) { [, cursor] = readLeb(bytes, cursor); importedFunctions++; }
        else if (kind === 1) { cursor++; const [flags, next] = readLeb(bytes, cursor); cursor = next; [, cursor] = readLeb(bytes, cursor); if (flags & 1) [, cursor] = readLeb(bytes, cursor); }
        else if (kind === 2) { const [flags, next] = readLeb(bytes, cursor); cursor = next; [, cursor] = readLeb(bytes, cursor); if (flags & 1) [, cursor] = readLeb(bytes, cursor); }
        else if (kind === 3) cursor += 2;
        else if (kind === 4) { cursor++; [, cursor] = readLeb(bytes, cursor); }
        else return { section: name, sectionOffset: offset, note: 'unparsed import kind' };
      }
    }
    if (target < end) {
      const location = { section: name, sectionOffset: offset, offsetInSection: target - payload };
      if (id === 10) {
        let [count, cursor] = readLeb(bytes, payload);
        for (let i = 0; i < count; i++) {
          const [bodySize, body] = readLeb(bytes, cursor);
          if (target < body + bodySize) return { ...location, functionIndex: importedFunctions + i, bodyIndex: i, offsetInBody: target - body };
          cursor = body + bodySize;
        }
      }
      return location;
    }
    offset = end;
  }
  return { section: 'past-end' };
}

function firstDifference(a, b) {
  const length = Math.min(a.length, b.length);
  for (let i = 0; i < length; i++) if (a[i] !== b[i]) return i;
  return a.length === b.length ? -1 : length;
}
function textLocation(text, offset) {
  const before = text.slice(0, offset), line = before.split('\n').length, column = offset - before.lastIndexOf('\n');
  const lineText = text.split('\n')[line - 1] ?? '';
  return { line, column, text: lineText.length > 240 ? lineText.slice(Math.max(0, column - 120), column + 120) : lineText };
}

/** The comparable files of one side, with path roots used to normalize maps. */
function side(directory) {
  directory = resolve(directory);
  if (existsSync(join(directory, 'build.json'))) {
    const build = JSON.parse(readFileSync(join(directory, 'build.json'), 'utf8'));
    const roots = Object.entries(build.paths).filter(([, value]) => typeof value === 'string');
    return { label: directory, base: build.paths.build, roots, names: Object.keys(build.build) };
  }
  const names = [];
  (function walk(path) {
    for (const entry of readdirSync(path, { withFileTypes: true })) {
      const file = join(path, entry.name);
      if (entry.isDirectory()) walk(file); else if (entry.isFile()) names.push(relative(directory, file));
    }
  })(directory);
  return { label: directory, base: directory, roots: [['build', directory]], names };
}
const rank = name => name.endsWith('.o') ? 0 : name.endsWith('.map') ? 1 : name === 'dist/program.wasm' ? 2 : name === 'dist/program.cjs' ? 3 : 4;
const objectOrder = name => { const match = /module-(\d+)\.o$/.exec(name); return match ? Number(match[1]) : Infinity; };
const comparable = name => rank(name) < 4;

function normalize(text, roots) {
  // Longest roots first, so nested build paths win over their parents.
  const trimmed = roots.map(([key, value]) => [key, value.replace(/[\\/]$/, '')]).filter(([, value]) => value.length > 1);
  for (const [key, value] of trimmed.sort((x, y) => y[1].length - x[1].length)) text = text.replaceAll(value, `<${key}>`);
  return text;
}

export function compareSides(a, b, { all = false } = {}) {
  const names = [...new Set([...a.names, ...b.names])].filter(name => all || comparable(name))
    .sort((x, y) => rank(x) - rank(y) || objectOrder(x) - objectOrder(y) || (x < y ? -1 : x > y ? 1 : 0));
  const files = [];
  for (const name of names) {
    const fileA = join(a.base, name), fileB = join(b.base, name);
    if (!a.names.includes(name) || !b.names.includes(name)) {
      files.push({ name, status: 'missing', in: a.names.includes(name) ? 'A only' : 'B only' }); continue;
    }
    let bytesA = readFileSync(fileA), bytesB = readFileSync(fileB), normalized = false;
    if (name.endsWith('.map')) {
      bytesA = Buffer.from(normalize(bytesA.toString('utf8'), a.roots));
      bytesB = Buffer.from(normalize(bytesB.toString('utf8'), b.roots)); normalized = true;
    }
    const offset = firstDifference(bytesA, bytesB);
    if (offset < 0) { files.push({ name, status: 'identical', bytes: bytesA.length, normalized }); continue; }
    const result = { name, status: 'different', normalized, bytesA: bytesA.length, bytesB: bytesB.length, offset };
    if (isWasm(bytesA) && isWasm(bytesB)) Object.assign(result, { a: wasmLocation(bytesA, offset), b: wasmLocation(bytesB, offset) });
    else {
      const textA = bytesA.toString('utf8'), textB = bytesB.toString('utf8');
      let index = 0;
      while (index < textA.length && index < textB.length && textA[index] === textB[index]) index++;
      Object.assign(result, { a: textLocation(textA, index), b: textLocation(textB, index) });
    }
    files.push(result);
  }
  const different = files.filter(file => file.status !== 'identical');
  return { identical: different.length === 0, compared: files.length, firstDivergence: different[0] ?? null, files };
}

function sides(directory) {
  directory = resolve(directory);
  if (!existsSync(join(directory, 'run.json'))) return { '': side(directory) };
  const run = JSON.parse(readFileSync(join(directory, 'run.json'), 'utf8'));
  return Object.fromEntries(run.fixtures.map(({ name }) => [name, side(join(directory, name))]));
}

if (resolve(process.argv[1]) === resolve(new URL(import.meta.url).pathname)) {
  const [left, right] = positionals.map(sides);
  const report = { a: resolve(positionals[0]), b: resolve(positionals[1]), fixtures: {} };
  for (const name of [...new Set([...Object.keys(left), ...Object.keys(right)])]) {
    if (!left[name] || !right[name]) { report.fixtures[name] = { identical: false, missing: left[name] ? 'B' : 'A' }; continue; }
    report.fixtures[name] = compareSides(left[name], right[name], { all: options.all });
  }
  report.identical = Object.values(report.fixtures).every(result => result.identical);
  for (const [name, result] of Object.entries(report.fixtures)) {
    const label = name || basename(report.a);
    if (result.missing) { console.log(`${label}: fixture missing in ${result.missing}`); continue; }
    console.log(`${label}: ${result.identical ? 'IDENTICAL' : 'DIFFERENT'} (${result.compared} files)`);
    for (const file of result.files) {
      if (file.status === 'identical') console.log(`  = ${file.name} ${file.bytes} bytes${file.normalized ? ' (paths normalized)' : ''}`);
      else if (file.status === 'missing') console.log(`  ! ${file.name} (${file.in})`);
      else console.log(`  x ${file.name} first divergence at byte ${file.offset}: A ${JSON.stringify(file.a)} B ${JSON.stringify(file.b)}`);
    }
    if (result.firstDivergence) console.log(`  first divergence: ${result.firstDivergence.name}`);
  }
  if (options.json) writeFileSync(options.json, JSON.stringify(report, null, 2) + '\n');
  process.exit(report.identical ? 0 : 1);
}
