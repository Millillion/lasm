// The wasi-http component (src/wasi/wasi-component.mjs): a build splices the
// program's core module into Lasm's component template, and the template is
// made back from a wasm-tools component. Properties over random core modules,
// with the shipped template and with small stand-in components.
import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { componentize, extractCore, makeTemplate, placeholderModule, replaceCoreModule, withoutComponentType, httpHandlerExport } from '../src/wasi/wasi-component.mjs';
import { forAll } from './helpers/property.mjs';

const template = new Uint8Array(readFileSync(new URL('../src/wasi/component/proxy-template.wasm', import.meta.url)));
const leb = n => { const out = []; do { let b = n & 0x7f; n = Math.floor(n / 128); if (n) b |= 0x80; out.push(b); } while (n); return out; };
const section = (id, body) => [id, ...leb(body.length), ...body];
const name = s => { const b = [...new TextEncoder().encode(s)]; return [...leb(b.length), ...b]; };
const componentHeader = [0, 0x61, 0x73, 0x6d, 0x0d, 0, 0x01, 0];
const moduleHeader = [0, 0x61, 0x73, 0x6d, 1, 0, 0, 0];

/** A core module: the header and custom sections, `size` bytes of payload in all (sizes cross LEB boundaries). */
const coreOf = (g, size = g.pick([0, 1, 100, 115, 116, 117, 127, 128, 129, 16370, 16383, 16384, 20000])) =>
  Uint8Array.from([...moduleHeader, ...section(0, [...name('p'), ...Array.from({ length: size }, () => g.int(0, 255))])]);

// Proposition: Lasm.Cli.Candidates.componentize_inverse
//   ∀ core : ByteArray, core.data.toList.take 8 = moduleHeader →
//     extractCore (componentize core) = some core ∧ makeTemplate (componentize core) core = some proxyTemplate
test('componentize and extractCore are inverse, and the template is made back', () => {
  forAll(g => coreOf(g), core => {
    const component = componentize(core);
    assert.deepEqual(extractCore(component), core);
    assert.deepEqual(makeTemplate(component, core), template);
    // The rest of the component is the template's: only the module section differs in length.
    assert.equal(component.length - template.length, core.length - placeholderModule().length
      + leb(core.length + suffix()).length - leb(placeholderModule().length + suffix()).length);
  }, { runs: 40 });
  // An ArrayBuffer works as bytes.
  const core = coreOf({ pick: a => a[2], int: () => 7 });
  assert.deepEqual(extractCore(componentize(core.buffer).buffer), core);
  assert.deepEqual(componentize(core, template.buffer), componentize(core));
});
/** The bytes wasm-tools appended to the template's main module after the placeholder. */
function suffix() {
  const placeholder = placeholderModule();
  for (const s of componentSections(template)) {
    const body = template.subarray(s.start, s.end);
    if (s.id === 1 && placeholder.every((x, i) => body[i] === x)) return body.length - placeholder.length;
  }
  throw new Error('no placeholder');
}
function componentSections(bytes) {
  const list = [];
  for (let at = 8; at < bytes.length;) {
    const id = bytes[at++]; let size = 0, shift = 0, b;
    do { b = bytes[at++]; size += (b & 0x7f) * 2 ** shift; shift += 7; } while (b & 0x80);
    list.push({ id, start: at, end: at + size }); at += size;
  }
  return list;
}

test('the placeholder is an empty module with one custom section naming it', () => {
  const placeholder = placeholderModule();
  assert.deepEqual([...placeholder.subarray(0, 8)], moduleHeader);
  assert.deepEqual([...placeholder.subarray(8)], section(0, name('lasm:main-module')));
  assert.ok(WebAssembly.validate(placeholder));
  assert.deepEqual(WebAssembly.Module.customSections(new WebAssembly.Module(placeholder), 'lasm:main-module').map(b => b.byteLength), [0]);
  assert.equal(httpHandlerExport, 'wasi:http/incoming-handler@0.2.12#handle');
});

// Proposition: Lasm.Cli.Candidates.replace_one_core_module
//   ∀ (before after : List (UInt8 × List UInt8)) (unrelated : List (List UInt8)) (pfx tail to : List UInt8),
//     (∀ s ∈ before ++ after, s.1 ≠ 1) → (∀ u ∈ unrelated, ¬ pfx <+: u) →
//     replaceCoreModule
//       (bytes (componentHeader ++ before.flatMap (fun s => sectionOf s.1 s.2) ++ unrelated.flatMap (sectionOf 1) ++
//         sectionOf 1 (pfx ++ tail) ++ after.flatMap (fun s => sectionOf s.1 s.2)))
//       (bytes pfx) (bytes to) =
//     .ok (bytes (componentHeader ++ before.flatMap (fun s => sectionOf s.1 s.2) ++ unrelated.flatMap (sectionOf 1) ++
//         sectionOf 1 (to ++ tail) ++ after.flatMap (fun s => sectionOf s.1 s.2)))
test('replaceCoreModule replaces exactly the one matching module section, keeping its suffix and every other section', () => {
  forAll(g => {
    const other = () => [g.pick([0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]), ...Array.from({ length: g.int(0, 200) }, () => g.int(0, 255))];
    const before = g.array(g.int(0, 3), other), after = g.array(g.int(0, 3), other);
    const unrelated = g.array(g.int(0, 2), () => [1, ...moduleHeader, ...Array.from({ length: g.int(0, 40) }, () => g.int(0, 255))]);
    const prefix = [...moduleHeader, 9, 9, ...Array.from({ length: g.int(0, 150) }, () => g.int(0, 255))];
    const tail = Array.from({ length: g.int(0, 140) }, () => g.int(0, 255));
    const to = Array.from({ length: g.pick([0, 3, 120, 200, 16400]) }, () => g.int(0, 255));
    return { before, after, unrelated, prefix, tail, to };
  }, ({ before, after, unrelated, prefix, tail, to }) => {
    const encode = parts => parts.flatMap(([id, ...body]) => section(id, body));
    const component = Uint8Array.from([...componentHeader, ...encode(before), ...encode(unrelated), ...section(1, [...prefix, ...tail]), ...encode(after)]);
    const replaced = replaceCoreModule(component, Uint8Array.from(prefix), Uint8Array.from(to));
    assert.deepEqual(replaced, Uint8Array.from([...componentHeader, ...encode(before), ...encode(unrelated), ...section(1, [...to, ...tail]), ...encode(after)]));
  }, { runs: 150 });
});

test('replaceCoreModule needs exactly one matching core module and a component header', () => {
  const prefix = Uint8Array.from([...moduleHeader, 7]);
  const module = [1, ...leb(9), ...moduleHeader, 7];
  const one = Uint8Array.from([...componentHeader, ...module]);
  assert.deepEqual(replaceCoreModule(one, prefix, Uint8Array.of(1, 2)), Uint8Array.from([...componentHeader, 1, 2, 1, 2]));
  assert.throws(() => replaceCoreModule(Uint8Array.from([...componentHeader, ...module, ...module]), prefix, prefix), /has 2 matching core modules \(expected one\)/);
  assert.throws(() => replaceCoreModule(Uint8Array.from(componentHeader), prefix, prefix), /has 0 matching core modules/);
  // A custom section (id 0) with the same bytes is not a core module.
  assert.throws(() => replaceCoreModule(Uint8Array.from([...componentHeader, 0, ...module.slice(1)]), prefix, prefix), /has 0 matching/);
  // A section shorter than the prefix does not match it.
  assert.throws(() => replaceCoreModule(Uint8Array.from([...componentHeader, 1, 8, ...moduleHeader]), prefix, prefix), /has 0 matching/);
  for (const at of [0, 1, 2, 3, 6, 7]) {
    const bad = Uint8Array.from(one); bad[at] ^= 0x20;
    assert.throws(() => replaceCoreModule(bad, prefix, prefix), /Not a WebAssembly component/, `byte ${at}`);
  }
  // Bytes 4 and 5 (the version) are not checked: a newer layer version still splices.
  const version = Uint8Array.from(one); version[4] = 0x0e;
  assert.equal(replaceCoreModule(version, prefix, prefix).length, one.length);
});

// Proposition: Lasm.Cli.Candidates.drops_only_component_type
//   ∀ ss : List Sec, (∀ s ∈ ss, ∀ id b, s = .other id b → id ≠ 0) →
//     withoutComponentType (bytes (moduleHeader ++ ss.flatMap Sec.encoding)) =
//       bytes (moduleHeader ++ (ss.filter (!·.componentType)).flatMap Sec.encoding)
test('withoutComponentType drops only the component-type custom sections', () => {
  forAll(g => g.array(g.int(0, 6), () => g.next() < 0.5
    ? { custom: g.pick(['component-type', 'component-type:proxy', 'component-typ', 'name', 'producers', 'xcomponent-type']), bytes: g.array(g.int(0, 200), () => g.int(0, 255)) }
    : { id: g.pick([1, 3, 7, 10]), bytes: g.array(g.int(0, 300), () => g.int(0, 255)) }), sections => {
    const encode = list => list.flatMap(s => s.custom !== undefined ? section(0, [...name(s.custom), ...s.bytes]) : section(s.id, s.bytes));
    const module = Uint8Array.from([...moduleHeader, ...encode(sections)]);
    assert.deepEqual(withoutComponentType(module), Uint8Array.from([...moduleHeader, ...encode(sections.filter(s => !s.custom?.startsWith('component-type')))]));
  }, { runs: 150 });
});

test('withoutComponentType reads names only of custom sections', () => {
  // A type section whose bytes happen to spell a component-type name stays.
  const lookalike = section(1, name('component-type:x'));
  const module = Uint8Array.from([...moduleHeader, ...lookalike, ...section(0, [...name('component-type:x'), 1])]);
  assert.deepEqual(withoutComponentType(module), Uint8Array.from([...moduleHeader, ...lookalike]));
});

test('extractCore needs the template\'s placeholder module', () => {
  const noPlaceholder = Uint8Array.from([...componentHeader, ...section(1, [...moduleHeader])]);
  assert.throws(() => extractCore(componentize(Uint8Array.from(moduleHeader)), noPlaceholder), /The component template has no placeholder module/);
  // The program is found by position: the module section at the placeholder's index.
  const stand = Uint8Array.from([...componentHeader, ...section(1, [...moduleHeader, 1]), ...section(1, [...placeholderModule(), 5, 5]), ...section(1, [...moduleHeader, 2])]);
  const core = Uint8Array.from([...moduleHeader, 0, 1, 0]);
  const component = componentize(core, stand);
  assert.deepEqual(component, Uint8Array.from([...componentHeader, ...section(1, [...moduleHeader, 1]), ...section(1, [...core, 5, 5]), ...section(1, [...moduleHeader, 2])]));
  assert.deepEqual(extractCore(component, stand), core);
  assert.deepEqual(extractCore(component.buffer, stand.buffer), core);
});
