// Read-only source indexing, not a compiler or a behavioral acceptance suite.
// Literal references include declarations and uses. Function-shaped matches are
// candidates for review, not proof that preprocessing/linking selects a body.
import assert from 'node:assert/strict';
import { existsSync, mkdirSync, readFileSync, readdirSync, writeFileSync } from 'node:fs';
import { resolve, join, relative } from 'node:path';
import { createHash } from 'node:crypto';
import { gunzipSync } from 'node:zlib';

const [runtimeArg, outputArg, apiReportArg, ...extra] = process.argv.slice(2);
if (!runtimeArg || !outputArg || extra.length) throw new Error('Supply COMPLETED_APPLICATION_RUNTIME NEW_OUTPUT [MATCHING_API_INVENTORY_REPORT]');
const runtime = resolve(runtimeArg), output = resolve(outputArg);
if (existsSync(output)) throw new Error('Preserve previous source audits');
const input = JSON.parse(readFileSync(join(runtime, 'build-inputs.json'), 'utf8'));
const apiReport = apiReportArg ? JSON.parse(readFileSync(resolve(apiReportArg))) : undefined;
if (apiReport) {
  assert.equal(apiReport.lean, input.lean); assert.equal(apiReport.leanCommit, input.leanCommit);
} else assert.equal(input.lean, '4.34.0', 'Supply matching declaration evidence for another Lean version');
const inventoryFile = apiReport?.externInventory ?? resolve('docs/compatibility/lean-4.34-extern-declarations.json');
const inventoryBytes = readFileSync(inventoryFile), declarations = JSON.parse(inventoryBytes);
const overridesFile = join(input.source, 'src/lasm/overrides.json');
const overridesBytes = readFileSync(overridesFile), overrides = JSON.parse(overridesBytes);
const libraryFile = join(runtime, 'standard-library-audit.json');
const libraryBytes = readFileSync(libraryFile), library = JSON.parse(libraryBytes);
assert.equal(library.leanCommit, input.leanCommit);
const hash = bytes => createHash('sha256').update(bytes).digest('hex');
if (apiReport) {
  assert.equal(hash(inventoryBytes), apiReport.externInventorySha256);
  assert.equal(hash(libraryBytes), apiReport.libraryInventorySha256);
}
const entries = new Map();
for (const declaration of declarations) {
  for (const external of declaration.externs.filter(item => item.kind === 'standard')) {
    const symbol = external.symbol;
    if (!entries.has(symbol)) entries.set(symbol, { symbol, declarations: [], references: [], definitionCandidates: [],
      hostReplacement: overrides.replacements.includes(symbol), behavioralCoverage: 'unverified' });
    entries.get(symbol).declarations.push({ name: declaration.name, module: declaration.module, backend: external.backend });
  }
}
function walk(directory) {
  return readdirSync(directory, { withFileTypes: true }).sort((a, b) => a.name.localeCompare(b.name))
    .flatMap(entry => entry.isDirectory() ? walk(join(directory, entry.name)) : entry.isFile() ? [join(directory, entry.name)] : []);
}
// Preserve newlines and offsets while masking comments and quoted text. This is
// a lexical index, not a C++ parser; token-pasting/macros remain unresolved.
const mask = text => text.replace(/\/\*[\s\S]*?\*\/|\/\/[^\n]*|"(?:\\.|[^"\\])*"|'(?:\\.|[^'\\])*'/g,
  text => text.replace(/[^\n]/g, ' '));
function* functionHeads(code, names) {
  for (const match of code.matchAll(new RegExp('\\b(' + names.join('|') + ')\\s*\\(', 'g'))) {
    let index = match.index + match[0].length, depth = 1;
    while (index < code.length && depth && !/[;{}#]/.test(code[index])) {
      if (code[index] === '(') depth++;
      else if (code[index] === ')') depth--;
      index++;
    }
    if (depth) continue;
    const brace = /^\s*\{/.exec(code.slice(index));
    if (brace) yield { symbol: match[1], index: match.index, bodyStart: index + brace[0].length };
  }
}
function bodyEnd(code, start) {
  let depth = 1;
  const alternatives = [];
  // Count alternative preprocessor arms independently. For example, the
  // Windows and POSIX arms may both open the same subsequent if-block.
  for (const token of code.slice(start).matchAll(/[{}]|^[ \t]*#[ \t]*(if|ifdef|ifndef|elif|else|endif)\b[^\n]*/gm)) {
    const type = token[1];
    if (['if', 'ifdef', 'ifndef'].includes(type)) alternatives.push({ initial: depth, ends: [], hasElse: false });
    else if (type === 'elif' || type === 'else') {
      if (!alternatives.length) return null;
      const state = alternatives.at(-1); state.ends.push(depth); depth = state.initial;
      if (type === 'else') state.hasElse = true;
    } else if (type === 'endif') {
      if (!alternatives.length) return null;
      const state = alternatives.pop(); state.ends.push(depth);
      if (!state.hasElse) state.ends.push(state.initial);
      if (state.ends.some(value => value !== depth)) return null;
    } else if (token[0] === '{') depth++;
    else if (--depth === 0) return start + token.index + 1;
  }
  return null;
}
const root = join(input.source, 'src'), files = {}, branchCandidates = [], ambiguousBodies = [];
const patterns = [...entries.keys()].filter(name => !/^[A-Za-z_]\w*$/.test(name));
assert.deepEqual(patterns, [], 'Nonidentifier extern names need explicit indexing');
for (const file of walk(root).filter(name => /\.(?:c|cc|cpp|h|hpp)$/.test(name))) {
  const bytes = readFileSync(file), text = bytes.toString('utf8'), code = mask(text);
  const name = relative(root, file).replaceAll('\\', '/');
  const lines = code.split('\n'), original = text.split('\n');
  files[name] = { sha256: hash(bytes), bytes: bytes.length };
  const stack = [], conditions = [];
  for (let index = 0; index < lines.length; index++) {
    const directive = lines[index].match(/^\s*#\s*(if|ifdef|ifndef|elif|else|endif)\b(.*)$/);
    if (directive) {
      const [, type, expression] = directive, value = { line: index + 1, directive: type, expression: expression.trim() };
      if (['if', 'ifdef', 'ifndef'].includes(type)) stack.push([value]);
      else if (type === 'endif') stack.pop();
      else if (stack.length) stack.at(-1).push(value);
    }
    // Previous alternatives are preserved so #else is never confused with its
    // #if branch. Expressions are recorded, not evaluated for a target.
    conditions.push(stack.map(alternatives => alternatives.slice()));
    for (const symbol of new Set(lines[index].match(/\b[A-Za-z_]\w*\b/g) ?? [])) {
      const entry = entries.get(symbol);
      if (entry) entry.references.push({ path: name, line: index + 1 });
    }
  }
  for (const match of functionHeads(code, [...entries.keys()])) {
    const entry = entries.get(match.symbol);
    if (!entry) continue;
    const start = match.index, line = code.slice(0, start).split('\n').length;
    const index = bodyEnd(code, match.bodyStart);
    const endLine = index === null ? null : code.slice(0, index).split('\n').length;
    const replaced = overrides.overrides.some(row => row.path === name && row.names.includes(entry.symbol));
    const candidate = { path: name, line, endLine, renamedByHostConfiguration: replaced,
      conditions: conditions[line - 1] };
    entry.definitionCandidates.push(candidate);
    if (index === null) {
      ambiguousBodies.push({ symbol: entry.symbol, ...candidate });
      continue;
    }
    const body = text.slice(start, index);
    if (!replaced && (/EMSCRIPTEN/.test(JSON.stringify(candidate.conditions)) || /#\s*(?:if|elif).*EMSCRIPTEN/.test(body)))
      branchCandidates.push({ symbol: entry.symbol, declarations: entry.declarations, ...candidate,
        source: original.slice(line - 1, endLine).join('\n') });
  }
}
const leanExportFiles = {}, cLibraryFiles = {};
for (const module of library.modules) {
  const name = (module.module.startsWith('Lake') ? 'lake/' : '') + module.module + '.lean';
  const bytes = readFileSync(join(root, name));
  assert.equal(hash(bytes), module.sourceSha256, 'Compiled Lean source changed: ' + name);
  const text = bytes.toString('utf8');
  for (const match of text.matchAll(/@\[[^\]]*\bexport\s+([A-Za-z_]\w*)\b[^\]]*\]/g)) {
    const entry = entries.get(match[1]);
    if (!entry) continue;
    const generated = join(input.build, 'generated-c', module.module + '.c');
    const archived = !existsSync(generated), cFile = generated + (archived ? '.gz' : '');
    const storedBytes = readFileSync(cFile);
    if (archived && module.cArchiveSha256) assert.equal(hash(storedBytes), module.cArchiveSha256);
    const cBytes = archived ? gunzipSync(storedBytes) : storedBytes;
    assert.equal(hash(cBytes), module.cSha256, 'Audited generated C changed: ' + generated);
    const cText = mask(cBytes.toString('utf8'));
    const definitions = [...functionHeads(cText, [entry.symbol])]
      .map(match => ({ line: cText.slice(0, match.index).split('\n').length }));
    leanExportFiles[name] = { sha256: module.sourceSha256, generatedC: relative(input.build, cFile), cSha256: module.cSha256,
      ...(archived ? { archiveSha256: hash(storedBytes) } : {}) };
    (entry.leanExportCandidates ??= []).push({ path: name, line: text.slice(0, match.index).split('\n').length,
      generatedDefinitions: definitions });
  }
}
// Standard C math functions live in the SDK, not Lean's C++ runtime. Record
// the exact source candidate without claiming it was selected by the linker.
for (const entry of entries.values()) {
  if (entry.definitionCandidates.length || entry.leanExportCandidates?.length || entry.symbol.startsWith('lean_')) continue;
  const name = 'system/lib/libc/musl/src/math/' + entry.symbol + '.c';
  const path = [join(input.sdk, 'upstream/emscripten', name), join(input.sdk, 'emscripten', name)].find(existsSync);
  if (!path) continue;
  const bytes = readFileSync(path);
  cLibraryFiles[name] = { sha256: hash(bytes), bytes: bytes.length };
  entry.sdkSourceCandidates = [name];
}
const rows = [...entries.values()].sort((a, b) => a.symbol.localeCompare(b.symbol));
const unresolved = rows.filter(row => !row.definitionCandidates.length
  && !row.leanExportCandidates?.some(candidate => candidate.generatedDefinitions.length)
  && !row.sdkSourceCandidates?.length).map(row => ({ symbol: row.symbol,
  references: row.references, declarations: row.declarations }));
const report = { schema: 1, scope: 'Lexical source index for review; no preprocessing, link proof, dynamic-call tracing or behavioral passes',
  lean: input.lean, leanCommit: input.leanCommit, runtime, patches: input.patches,
  ...(apiReportArg ? { apiInventoryReport: resolve(apiReportArg), apiInventoryReportSha256: hash(readFileSync(resolve(apiReportArg))) } : {}),
  externInventorySha256: hash(inventoryBytes), hostOverridesSha256: hash(overridesBytes),
  standardLibraryAuditSha256: hash(libraryBytes), leanModuleSourcesVerified: library.modules.length,
  sourceFiles: Object.keys(files).length, sourceBytes: Object.values(files).reduce((n, row) => n + row.bytes, 0),
  externDeclarations: declarations.length, standardSymbols: rows.length,
  symbolsWithReferences: rows.filter(row => row.references.length).length,
  symbolsWithDefinitionCandidates: rows.filter(row => row.definitionCandidates.length).length,
  symbolsWithLeanExportCandidates: rows.filter(row => row.leanExportCandidates?.some(candidate => candidate.generatedDefinitions.length)).length,
  symbolsWithSdkSourceCandidates: rows.filter(row => row.sdkSourceCandidates?.length).length,
  hostReplacementSymbols: rows.filter(row => row.hostReplacement).length,
  emscriptenBranchCandidates: branchCandidates.length,
  ambiguousCandidateBodies: ambiguousBodies.length,
  symbolsWithoutImplementationCandidates: unresolved.length,
  limitations: ['Lexical matches do not prove selected definitions or behavior.',
    'Macro-generated and token-pasted bodies require compiler-assisted tracing.',
    'Private callees, callbacks, inline extern forms and Lean fallback bodies still require dependency tracing.',
    'All per-symbol behavioral fields remain unverified.'],
  files, leanExportFiles, cLibraryFiles, recordedAt: new Date().toISOString() };
mkdirSync(output, { recursive: true });
for (const [name, value] of Object.entries({ 'symbols.json': rows, 'emscripten-branches.json': branchCandidates,
  'unresolved.json': unresolved, 'ambiguous-bodies.json': ambiguousBodies })) {
  const bytes = JSON.stringify(value, null, 2) + '\n'; writeFileSync(join(output, name), bytes);
  (report.artifacts ??= {})[name] = { sha256: hash(bytes), bytes: Buffer.byteLength(bytes) };
}
writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
console.log(JSON.stringify({ ...report, files: undefined, leanExportFiles: undefined, cLibraryFiles: undefined }, null, 2));
