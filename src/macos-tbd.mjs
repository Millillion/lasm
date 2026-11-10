// The macOS SDK's libSystem.tbd, adapted for Lean's own ld64.lld (issue #73).
//
// Lasm cannot redistribute Apple's text stub, so the macOS C tier links against
// the copy in the user's SDK. Newer SDKs list targets (`arm64e.x1-macos`,
// `arm64e.x1-maccatalyst`, ...) that the LLVM TextAPI reader in Lean's ld64.lld
// predates, and it rejects the whole file as "malformed". Linking needs only the
// host's target, so the copy keeps the targets the linker knows and drops the rest
// from every target list, including the per-section lists of symbols, libraries,
// clients and UUIDs, and sections or inlined libraries left with no target.
//
// The kept set is conservative: macOS and Mac Catalyst on the Intel and Apple
// silicon architectures, all of which Lean 4.35.0's LLD 23.1 reads (checked with
// `ld64.lld -dylib` on one-target stubs). Every TAPI form is handled: tbd v1-v3
// YAML (`archs:` lists), v4 YAML (`targets:` lists, `uuids` with `target:`) and
// v5 JSON (`target_info`, `targets`). The result is checked again by the linker
// itself (checkLibSystemStub) while the toolchain is assembled.
import { spawnSync } from 'node:child_process';
import { mkdtempSync, rmSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';

export const knownArchitectures = Object.freeze(['i386', 'x86_64', 'x86_64h', 'arm64', 'arm64e']);
export const knownPlatforms = Object.freeze(['macos', 'maccatalyst']);
const architectures = new Set(knownArchitectures), platforms = new Set(knownPlatforms);

/** A TAPI target `arch-platform` (`arm64-macos`) that Lean's ld64.lld reads. */
export function knownTarget(target) {
  const dash = target.indexOf('-');
  return dash > 0 && architectures.has(target.slice(0, dash)) && platforms.has(target.slice(dash + 1));
}

/** The ld64 `-arch` name of a Node architecture. */
export function linkerArchitecture(arch) {
  if (arch === 'arm64') return 'arm64';
  if (arch === 'x64') return 'x86_64';
  throw new Error(`No macOS linker architecture for ${arch}`);
}

const unquote = text => text.trim().replace(/^(['"])(.*)\1$/, '$2');
const indentOf = line => /^ */.exec(line)[0].length;
const blank = line => /^\s*(#.*)?$/.test(line);

/**
 * The stub with only known targets. `text` is the file's contents; the result has
 * `text`, the `removed` targets and architectures (sorted) and the main library's
 * remaining `targets`. Throws when the format is not one this filter understands.
 */
export function filterTapiStub(text) {
  const result = text.trimStart().startsWith('{') ? filterJson(text) : filterYaml(text);
  if (!result.targets.length) throw new Error('The stub lists no target that Lean\'s linker knows');
  return result;
}

function filterJson(text) {
  const stub = JSON.parse(text), removed = new Set();
  if (!stub || typeof stub !== 'object' || !stub.main_library) throw new Error('Unsupported TAPI JSON stub: no main_library');
  const keep = target => { if (knownTarget(target)) return true; removed.add(target); return false; };
  const walk = value => {
    if (Array.isArray(value)) {
      const kept = [];
      for (const item of value) {
        if (item && typeof item === 'object' && !Array.isArray(item)) {
          if (typeof item.target === 'string' && !keep(item.target)) continue;
          if (Array.isArray(item.targets) && item.targets.length) {
            item.targets = item.targets.filter(keep);
            if (!item.targets.length) continue;
          }
          if (Array.isArray(item.target_info) && item.target_info.length) {
            walk(item);
            if (!item.target_info.length) continue;
            kept.push(item);
            continue;
          }
        }
        walk(item);
        kept.push(item);
      }
      value.splice(0, value.length, ...kept);
    } else if (value && typeof value === 'object') {
      for (const key of Object.keys(value)) walk(value[key]);
    }
  };
  walk(stub);
  const targets = (stub.main_library.target_info ?? []).map(info => info.target);
  return { text: JSON.stringify(stub, null, 2) + '\n', removed: [...removed].sort(), targets };
}

function filterYaml(text) {
  const removed = new Set();
  const newline = text.includes('\r\n') ? '\r\n' : '\n';
  // Every target or architecture list is a flow sequence (`targets: [ a, b ]`,
  // possibly over several lines): rewrite each with its known entries on one line.
  let lists = 0;
  let filtered = text.replace(/^([ \t]*(?:-[ \t]+)?)(targets|archs)([ \t]*:[ \t]*)\[([^\]]*)\]/gm, (_, lead, key, colon, body) => {
    lists++;
    const items = body.split(',').map(item => item.trim()).filter(Boolean);
    const kept = items.filter(item => {
      const name = unquote(item);
      const known = key === 'targets' ? knownTarget(name) : architectures.has(name);
      if (!known) removed.add(name);
      return known;
    });
    return `${lead}${key}${colon}[ ${kept.join(', ')} ]`;
  });
  // v3 UUID lists: [ 'x86_64: <uuid>', ... ].
  filtered = filtered.replace(/^([ \t]*)(uuids)([ \t]*:[ \t]*)\[([^\]]*)\]/gm, (_, lead, key, colon, body) => {
    const items = body.split(',').map(item => item.trim()).filter(Boolean);
    const kept = items.filter(item => {
      const arch = unquote(item).split(':')[0].trim();
      if (!architectures.has(arch)) { removed.add(arch); return false; }
      return true;
    });
    return `${lead}${key}${colon}[ ${kept.join(', ')} ]`;
  });
  const lines = filtered.split(/\r?\n/);
  for (const line of lines)
    if (/^[ \t]*(?:-[ \t]+)?(targets|archs)[ \t]*:/.test(line) && !/:[ \t]*\[/.test(line))
      throw new Error(`Unsupported TAPI stub: a target list that is not a flow sequence (${line.trim()})`);
  if (!lists) throw new Error('Unsupported TAPI stub: no target or architecture list');

  // Documents: `--- !tapi-tbd` headers; `...` ends the stream.
  const documents = [];
  let trailer = [];
  for (const line of lines) {
    if (/^---/.test(line) || !documents.length) documents.push([]);
    if (/^\.\.\.\s*$/.test(line)) { trailer = [line]; continue; }
    if (trailer.length) { trailer.push(line); continue; }
    documents.at(-1).push(line);
  }
  const kept = [];
  for (const [index, document] of documents.entries()) {
    const result = filterDocument(document, removed);
    if (result) kept.push(result);
    else if (index === 0) throw new Error('The stub lists no target that Lean\'s linker knows');
  }
  let targets = [];
  const top = kept[0].find(line => /^(targets|archs)[ \t]*:/.test(line));
  if (top) targets = /\[([^\]]*)\]/.exec(top)[1].split(',').map(unquote).filter(Boolean);
  return { text: [...kept.flat(), ...trailer].join(newline), removed: [...removed].sort(), targets };
}

/** One YAML document, or null when none of its targets is known. */
function filterDocument(lines, removed) {
  lines = [...lines];
  const removeItem = start => {
    const dash = indentOf(lines[start]);
    let end = start + 1;
    while (end < lines.length && (blank(lines[end]) || indentOf(lines[end]) > dash)) end++;
    lines.splice(start, end - start);
  };
  for (let index = 0; index < lines.length;) {
    const line = lines[index];
    const empty = /^([ \t]*)(-[ \t]+)?(targets|archs)[ \t]*:[ \t]*\[[ \t]*\][ \t]*$/.exec(line);
    const uuid = /^[ \t]*-[ \t]+target[ \t]*:[ \t]*(\S+)/.exec(line);
    if (uuid && !knownTarget(unquote(uuid[1]))) { removed.add(unquote(uuid[1])); removeItem(index); continue; }
    if (!empty) { index++; continue; }
    if (empty[2]) { removeItem(index); continue; }
    const indent = empty[1].length;
    if (indent === 0) return null;
    // `targets:` after the item's first key: the item starts at the dash whose
    // content column is this key's.
    let start = index - 1;
    for (; start >= 0; start--) {
      const item = /^([ \t]*)-([ \t]+)/.exec(lines[start]);
      if (item && item[1].length + 1 + item[2].length === indent) break;
      if (!blank(lines[start]) && indentOf(lines[start]) < indent && !item) { start = -1; break; }
    }
    if (start < 0) throw new Error(`Unsupported TAPI stub: a target list outside a list item (${line.trim()})`);
    removeItem(start);
    index = start;
  }
  // Sections left without items (`exports:` with nothing under it).
  for (let changed = true; changed;) {
    changed = false;
    for (let index = 0; index < lines.length; index++) {
      const key = /^([ \t]*)[A-Za-z][\w-]*[ \t]*:[ \t]*$/.exec(lines[index]);
      if (!key) continue;
      let next = index + 1;
      while (next < lines.length && blank(lines[next])) next++;
      const indent = key[1].length;
      const owned = next < lines.length && (indentOf(lines[next]) > indent || (indentOf(lines[next]) === indent && /^[ \t]*-[ \t]/.test(lines[next])));
      if (!owned) { lines.splice(index, 1); changed = true; break; }
    }
  }
  return lines;
}

/**
 * Ask the linker itself to read the stub, as a link does. Returns null when it
 * reads it, else the linker's message.
 */
export function checkLibSystemStub(linker, file, arch) {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-tbd-'));
  try {
    const result = spawnSync(linker, ['-arch', linkerArchitecture(arch), '-platform_version', 'macos', '11.0', '11.0', '-dylib',
      '-o', join(directory, 'probe.dylib'), file], { encoding: 'utf8', timeout: 60_000, windowsHide: true, stdio: ['ignore', 'pipe', 'pipe'] });
    if (result.error) return result.error.message;
    if (result.status !== 0) return `${result.stderr}${result.stdout}`.trim() || `exit status ${result.status}`;
    return null;
  } finally { rmSync(directory, { recursive: true, force: true }); }
}
