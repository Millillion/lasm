// Generates Lasm.WASI.Http (docs/WASI_FASTLY_BINDINGS.md): Lean bindings and
// their C glue for the wasi:http proxy world's imports and its export, from the
// pinned WASI 0.2.12 WIT (scripts/wasi/wit/deps/, Wasmtime v49.0.4's copy).
//
//   node scripts/bindings/generate-wasi-http.mjs [--check]
//
// Bound interfaces: wasi:io/error, wasi:io/poll, wasi:io/streams,
// wasi:clocks/monotonic-clock, wasi:http/types and wasi:http/outgoing-handler
// (every function and resource member that is not @unstable), and the export
// wasi:http/incoming-handler.handle. The glue implements the canonical ABI
// (https://github.com/WebAssembly/component-model/blob/main/design/mvp/CanonicalABI.md)
// for the 32-bit memory of a Lasm wasi-http module: parameters flattened (at
// most 16 core values), results of more than one core value through a return
// area, lists and strings the host returns allocated by `cabi_realloc` (armed
// around each such call, src/wasi/lasm_wasi_http.c), lists passed in copied to
// temporary memory and strings and byte lists passed in place.
//
// Writes library/Lasm/WASI/** (one module per interface, then Lasm.WASI.Http),
// library/c/lasm_wasi_http_bindings.c, src/wasi/lasm_wasi_http_imports.h (the
// import declarations, shared with the hand-written Lasm.Fetch glue),
// test/fixtures/wasi-http-abi/Fixture/EveryCall.lean and
// scripts/bindings/wasi-http-surface.json. With --check it writes nothing and
// fails when any of them differs.
import { createHash } from 'node:crypto';
import { readFileSync } from 'node:fs';
import { join, dirname } from 'node:path';
import { fileURLToPath } from 'node:url';
import { parseWit } from './wit.mjs';
import { id, docText, writeOrCheck } from './lean-names.mjs';

const root = join(dirname(fileURLToPath(import.meta.url)), '../..');
const witDir = join(root, 'scripts/wasi/wit/deps');
const check = process.argv.includes('--check');
const fail = msg => { throw new Error(`generate-wasi-http: ${msg}`); };

// The interfaces bound, in import order, and the exported one.
const boundInterfaces = ['wasi:io/error', 'wasi:io/poll', 'wasi:io/streams', 'wasi:clocks/monotonic-clock', 'wasi:http/types', 'wasi:http/outgoing-handler'];
const exportInterface = 'wasi:http/incoming-handler';
const witFiles = ['io.wit', 'clocks.wit', 'http.wit'];
const source = 'the WASI 0.2.12 WIT of Wasmtime v49.0.4 (`crates/wasi-http/wit/deps`, https://github.com/bytecodealliance/wasmtime/tree/v49.0.4/crates/wasi-http/wit/deps)';

// ---- Names ----
const words = name => name.split('-').filter(Boolean);
/** UpperCamel, acronyms as words (heck's rule, as wit-bindgen): DNS-error-payload → DnsErrorPayload. */
const upper = name => words(name).map(w => w[0].toUpperCase() + w.slice(1).toLowerCase()).join('');
/** lowerCamel: HTTP-request-URI-invalid → httpRequestUriInvalid. */
const lower = name => { const u = upper(name); return u[0].toLowerCase() + u.slice(1); };
const snake = name => words(name).map(w => w.toLowerCase()).join('_');

// ---- The WIT ----
const interfaces = new Map();
const witText = {};
for (const file of witFiles) {
  const text = readFileSync(join(witDir, file), 'utf8');
  witText[file] = text;
  const parsed = parseWit(text, file);
  const { namespace, name: pkg, version } = parsed.package;
  for (const iface of parsed.interfaces) {
    const key = `${namespace}:${pkg}/${iface.name}`;
    interfaces.set(key, { key, namespace, pkg, version, name: iface.name, items: iface.items,
      module: `Lasm.WASI.${upper(pkg)}.${upper(iface.name)}`, c: `lasm_wasi_${snake(pkg)}_${snake(iface.name)}`,
      importModule: `${key}@${version}`, doc: iface.doc });
  }
}
const stable = item => !item.unstable;
const ifaceOf = key => interfaces.get(key) ?? fail(`no interface ${key}`);

/** The names in an interface's scope: name → { owner, name (in the owner), alias (the local name) }. */
function scope(iface) {
  if (iface.scope) return iface.scope;
  const s = new Map();
  for (const item of iface.items.filter(stable)) {
    if (item.item === 'type') s.set(item.name, { owner: iface, name: item.name, def: item.def, item });
    if (item.item === 'use') {
      const p = item.path;
      const target = p.local ? ifaceOf(`${iface.namespace}:${iface.pkg}/${p.local}`) : ifaceOf(`${p.namespace}:${p.package}/${p.interface}`);
      for (const { name, as } of item.names) {
        const found = scope(target).get(name) ?? fail(`${iface.key}: use of unknown ${name}`);
        s.set(as, { ...found, used: true });
      }
    }
  }
  return (iface.scope = s);
}
const lookup = (iface, name) => scope(iface).get(name) ?? fail(`${iface.key}: unknown type ${name}`);

// ---- Resolved types (aliases followed) ----
/** A canonical type node: { kind, ... } with kind one of the primitives, string, list, option,
 * result, tuple, handle (own/borrow of a resource), record, variant. */
function resolve(t, iface) {
  switch (t.kind) {
    case 'bool': case 'u8': case 'u16': case 'u32': case 'u64': case 'string': return { kind: t.kind };
    case 's8': case 's16': case 's32': case 's64': case 'f32': case 'f64': case 'char': return fail(`no rule for ${t.kind}`);
    case 'list': return { kind: 'list', of: resolve(t.of, iface) };
    case 'option': return { kind: 'option', of: resolve(t.of, iface) };
    case 'result': return { kind: 'result', ok: t.ok && resolve(t.ok, iface), err: t.err && resolve(t.err, iface) };
    case 'tuple': return { kind: 'tuple', of: t.of.map(x => resolve(x, iface)) };
    case 'own': case 'borrow': {
      const r = lookup(iface, t.name);
      if (r.def.kind !== 'resource') fail(`${t.kind}<${t.name}> of a non-resource`);
      return { kind: 'handle', resource: `${r.owner.key}#${r.name}`, borrow: t.kind === 'borrow' };
    }
    case 'ref': {
      const r = lookup(iface, t.name);
      switch (r.def.kind) {
        case 'alias': return resolve(r.def.of, r.owner);
        case 'resource': return { kind: 'handle', resource: `${r.owner.key}#${r.name}` };
        case 'record': return { kind: 'record', key: `${r.owner.key}#${r.name}`, fields: r.def.fields.filter(stable).map(f => ({ name: f.name, type: resolve(f.type, r.owner) })) };
        case 'variant': return { kind: 'variant', key: `${r.owner.key}#${r.name}`, cases: r.def.cases.filter(stable).map(c => ({ name: c.name, type: c.type && resolve(c.type, r.owner) })) };
        default: return fail(`no rule for ${r.def.kind} ${t.name}`);
      }
    }
    default: return fail(`no rule for ${JSON.stringify(t)}`);
  }
}

// ---- Lean representation ----
const scalarSize = { bool: 1, u8: 1, enum: 1, u16: 2, u32: 4, u64: 8 };
const scalarC = { bool: 'uint8_t', u8: 'uint8_t', enum: 'uint8_t', u16: 'uint16_t', u32: 'uint32_t', u64: 'uint64_t' };
/** How Lean represents a value of the type outside polymorphic containers: a scalar kind, or 'obj'. */
function rep(t) {
  switch (t.kind) {
    case 'bool': case 'u8': case 'u16': case 'u32': case 'u64': return t.kind;
    case 'handle': return 'u32'; // a structure with one UInt32 field
    case 'record': return t.fields.length === 1 ? rep(t.fields[0].type) : 'obj';
    case 'variant':
      if (t.cases.every(c => !c.type)) { if (t.cases.length < 2 || t.cases.length > 256) fail(`enum ${t.key} with ${t.cases.length} cases`); return 'enum'; }
      return 'obj';
    default: return 'obj';
  }
}
const boxed = (r, raw) => r === 'obj' ? raw : r === 'u32' ? `lean_box_uint32((uint32_t)(${raw}))` : r === 'u64' ? `lean_box_uint64((uint64_t)(${raw}))` : `lean_box((size_t)(${raw}))`;
const unboxed = (r, obj) => r === 'obj' ? obj : r === 'u32' ? `(uint64_t)lean_unbox_uint32(${obj})` : r === 'u64' ? `lean_unbox_uint64(${obj})` : `(uint64_t)lean_unbox(${obj})`;
/** A Lean constructor's layout for fields of these representations: object fields first, then
 * scalars by size, largest first (Lean's IR). */
function ctorLayout(reps) {
  const objs = [], scalars = [];
  reps.forEach((r, i) => (r === 'obj' ? objs : scalars).push(i));
  const fields = new Array(reps.length);
  objs.forEach((i, k) => { fields[i] = { obj: k }; });
  let offset = 0;
  for (const size of [8, 4, 2, 1]) for (const i of scalars) if (scalarSize[reps[i]] === size) { fields[i] = { offset, r: reps[i] }; offset += size; }
  return { fields, objs: objs.length, scalarBytes: offset };
}

// ---- The canonical ABI ----
const alignTo = (n, a) => Math.ceil(n / a) * a;
const discSize = n => n <= 256 ? 1 : n <= 65536 ? 2 : 4;
/** The cases of a variant-like type: option, result, variant. */
function casesOf(t) {
  if (t.kind === 'option') return [{ name: 'none', type: null }, { name: 'some', type: t.of }];
  if (t.kind === 'result') return [{ name: 'ok', type: t.ok }, { name: 'error', type: t.err }];
  return t.cases;
}
const isVariant = t => ['option', 'result', 'variant'].includes(t.kind);
const fieldsOf = t => t.kind === 'tuple' ? t.of : t.fields.map(f => f.type);
function align(t) {
  switch (t.kind) {
    case 'bool': case 'u8': return 1;
    case 'u16': return 2;
    case 'u32': case 'handle': case 'string': case 'list': return 4;
    case 'u64': return 8;
    case 'tuple': case 'record': return Math.max(1, ...fieldsOf(t).map(align));
    default: return Math.max(discSize(casesOf(t).length), ...casesOf(t).map(c => c.type ? align(c.type) : 1));
  }
}
function size(t) {
  switch (t.kind) {
    case 'bool': case 'u8': return 1;
    case 'u16': return 2;
    case 'u32': case 'handle': return 4;
    case 'u64': case 'string': case 'list': return 8;
    case 'tuple': case 'record': { let s = 0; for (const f of fieldsOf(t)) s = alignTo(s, align(f)) + size(f); return alignTo(s, align(t)); }
    default: return alignTo(payloadOffset(t) + Math.max(0, ...casesOf(t).map(c => c.type ? size(c.type) : 0)), align(t));
  }
}
const payloadOffset = t => alignTo(discSize(casesOf(t).length), Math.max(1, ...casesOf(t).map(c => c.type ? align(c.type) : 1)));
function fieldOffsets(t) { let s = 0; return fieldsOf(t).map(f => { s = alignTo(s, align(f)); const o = s; s += size(f); return o; }); }
const join2 = (a, b) => a === b ? a : 'i64';
function flat(t) {
  switch (t.kind) {
    case 'bool': case 'u8': case 'u16': case 'u32': case 'handle': return ['i32'];
    case 'u64': return ['i64'];
    case 'string': case 'list': return ['i32', 'i32'];
    case 'tuple': case 'record': return fieldsOf(t).flatMap(flat);
    default: {
      const payload = [];
      for (const c of casesOf(t)) if (c.type) flat(c.type).forEach((f, i) => { payload[i] = i < payload.length ? join2(payload[i], f) : f; });
      return ['i32', ...payload];
    }
  }
}
const hasLists = t => ['string', 'list'].includes(t.kind) || (t.kind === 'tuple' || t.kind === 'record') && fieldsOf(t).some(hasLists)
  || isVariant(t) && casesOf(t).some(c => c.type && hasLists(c.type));

// ---- C helpers per type: lift (memory → value), store (value → memory), lower (value → core values) ----
// A value is `uint64_t` for a scalar representation and `lean_object *` (boxed) otherwise.
const helpers = new Map();
function keyOf(t) {
  switch (t.kind) {
    case 'handle': return 'h';
    case 'list': return `l_${keyOf(t.of)}`;
    case 'option': return `o_${keyOf(t.of)}`;
    case 'result': return `r_${t.ok ? keyOf(t.ok) : 'v'}_${t.err ? keyOf(t.err) : 'v'}`;
    case 'tuple': return `t${t.of.length}_${t.of.map(keyOf).join('_')}`;
    case 'record': case 'variant': return `n_${t.key.replace(/[^A-Za-z0-9]+/g, '_')}`;
    default: return t.kind;
  }
}
const valueC = t => rep(t) === 'obj' ? 'lean_object *' : 'uint64_t ';
/** Lean's boxed value of a type inside a polymorphic container, from a value. */
const toBoxed = (t, v) => boxed(rep(t), v);
const fromBoxed = (t, o) => unboxed(rep(t), o);
function helper(t) {
  const k = keyOf(t);
  if (helpers.has(k)) return k;
  helpers.set(k, null);
  const V = valueC(t), lines = [];
  const lift = [], store = [], lower = [];
  const nflat = flat(t).length;
  switch (t.kind) {
    case 'bool': case 'u8':
      lift.push('return p[0];'); store.push('p[0] = (uint8_t)v;'); lower.push('f[0] = (uint8_t)v;'); break;
    case 'u16':
      lift.push('uint16_t x; memcpy(&x, p, 2); return x;'); store.push('uint16_t x = (uint16_t)v; memcpy(p, &x, 2);'); lower.push('f[0] = (uint16_t)v;'); break;
    case 'u32': case 'handle':
      lift.push('return get32(p);'); store.push('put32(p, (uint32_t)v);'); lower.push('f[0] = (uint32_t)v;'); break;
    case 'u64':
      lift.push('uint64_t x; memcpy(&x, p, 8); return x;'); store.push('memcpy(p, &v, 8);'); lower.push('f[0] = v;'); break;
    case 'string':
      lift.push('return lean_mk_string_from_bytes((const char *)at32(get32(p)), get32(p + 4));');
      store.push('put32(p, P(lean_string_cstr(v))); put32(p + 4, (uint32_t)(lean_string_size(v) - 1));');
      lower.push('f[0] = P(lean_string_cstr(v)); f[1] = (uint32_t)(lean_string_size(v) - 1);');
      break;
    case 'list':
      if (t.of.kind === 'u8') {
        lift.push('uint32_t n = get32(p + 4); lean_object *a = lean_alloc_sarray(1, n, n);',
          'if (n) memcpy(lean_sarray_cptr(a), at32(get32(p)), n);', 'return a;');
        store.push('put32(p, P(lean_sarray_cptr(v))); put32(p + 4, (uint32_t)lean_sarray_size(v));');
        lower.push('f[0] = P(lean_sarray_cptr(v)); f[1] = (uint32_t)lean_sarray_size(v);');
      } else {
        const e = helper(t.of), es = size(t.of);
        lift.push('uint32_t n = get32(p + 4); const uint8_t *q = at32(get32(p));',
          'lean_object *a = lean_alloc_array(0, n);',
          `for (uint32_t i = 0; i < n; i++) a = lean_array_push(a, ${toBoxed(t.of, `lift_${e}(q + (size_t)i * ${es})`)});`, 'return a;');
        const fill = ['size_t n = lean_array_size(v);', `uint8_t *q = lasm_wit_temp(n * ${es}, ${align(t.of)});`,
          `for (size_t i = 0; i < n; i++) store_${e}(q + i * ${es}, ${fromBoxed(t.of, 'lean_array_get_core(v, i)')});`];
        store.push(...fill, 'put32(p, P(q)); put32(p + 4, (uint32_t)n);');
        lower.push(...fill, 'f[0] = P(q); f[1] = (uint32_t)n;');
      }
      break;
    case 'tuple': case 'record': {
      const types = fieldsOf(t), offsets = fieldOffsets(t);
      const hs = types.map(helper);
      const flats = types.map(x => flat(x).length);
      const flatAt = i => flats.slice(0, i).reduce((a, b) => a + b, 0);
      if (t.kind === 'record' && types.length === 1) {
        // A one-field structure is its field (Lean's trivial structure).
        lift.push(`return lift_${hs[0]}(p);`); store.push(`store_${hs[0]}(p, v);`); lower.push(`lower_${hs[0]}(v, f);`);
        break;
      }
      // The field values: of a pair chain (tuple) or of the structure's constructor (record).
      let get, build;
      if (t.kind === 'tuple') {
        get = i => {
          let o = 'v';
          for (let j = 0; j < i; j++) o = `lean_ctor_get(${o}, 1)`;
          return fromBoxed(types[i], i === types.length - 1 ? o : `lean_ctor_get(${o}, 0)`);
        };
        build = values => {
          const out = [`lean_object *x${types.length - 1} = ${toBoxed(types.at(-1), values.at(-1))};`];
          for (let i = types.length - 2; i >= 0; i--)
            out.push(`lean_object *x${i} = lean_alloc_ctor(0, 2, 0); lean_ctor_set(x${i}, 0, ${toBoxed(types[i], values[i])}); lean_ctor_set(x${i}, 1, x${i + 1});`);
          return [...out, 'return x0;'];
        };
      } else {
        const layout = ctorLayout(types.map(rep));
        const scalarAt = f => `sizeof(void *) * ${layout.objs} + ${f.offset}`;
        get = i => { const f = layout.fields[i]; return 'obj' in f ? `lean_ctor_get(v, ${f.obj})` : `(uint64_t)lean_ctor_get_uint${scalarSize[f.r] * 8}(v, ${scalarAt(f)})`; };
        build = values => [`lean_object *o = lean_alloc_ctor(0, ${layout.objs}, ${layout.scalarBytes});`,
          ...values.map((x, i) => { const f = layout.fields[i]; return 'obj' in f ? `lean_ctor_set(o, ${f.obj}, ${x});` : `lean_ctor_set_uint${scalarSize[f.r] * 8}(o, ${scalarAt(f)}, (${scalarC[f.r]})${x});`; }),
          'return o;'];
      }
      lift.push(...build(types.map((x, i) => `lift_${hs[i]}(p + ${offsets[i]})`)));
      types.forEach((x, i) => { store.push(`store_${hs[i]}(p + ${offsets[i]}, ${get(i)});`); lower.push(`lower_${hs[i]}(${get(i)}, f + ${flatAt(i)});`); });
      break;
    }
    default: { // option, result, variant
      const cases = casesOf(t), off = payloadOffset(t), ds = discSize(cases.length);
      const hs = cases.map(c => c.type && helper(c.type));
      const disc = ds === 1 ? 'p[0]' : ds === 2 ? '(uint32_t)(p[0] | p[1] << 8)' : 'get32(p)';
      const putDisc = d => ds === 1 ? `p[0] = ${d};` : ds === 2 ? `p[0] = (uint8_t)(${d}); p[1] = (uint8_t)((${d}) >> 8);` : `put32(p, ${d});`;
      if (rep(t) === 'enum') {
        lift.push(`return ${disc};`); store.push(putDisc('(uint32_t)v')); lower.push('f[0] = (uint32_t)v;');
        break;
      }
      // Lean's constructor of each case, its payload field, and the canonical discriminant.
      // option: none = lean_box(0), some = ctor 1; result: ok = ctor 1, error = ctor 0 (Except);
      // variant: case i = ctor i (lean_box(i) without a payload).
      const leanTag = i => t.kind === 'result' ? 1 - i : i;
      const polymorphic = t.kind !== 'variant';
      const payloadGet = i => {
        const c = cases[i];
        if (polymorphic) return fromBoxed(c.type, 'lean_ctor_get(v, 0)');
        return rep(c.type) === 'obj' ? 'lean_ctor_get(v, 0)' : `(uint64_t)lean_ctor_get_uint${scalarSize[rep(c.type)] * 8}(v, 0)`;
      };
      const make = (i, valueExpr) => {
        const c = cases[i];
        if (!c.type && !polymorphic) return `return lean_box(${i});`;
        if (t.kind === 'option' && i === 0) return 'return lean_box(0);';
        const payload = c.type ? valueExpr : 'lean_box(0)';
        if (polymorphic || rep(c.type) === 'obj')
          return `{ lean_object *o = lean_alloc_ctor(${leanTag(i)}, 1, 0); lean_ctor_set(o, 0, ${polymorphic && c.type ? toBoxed(c.type, payload) : payload}); return o; }`;
        const r = rep(c.type);
        return `{ lean_object *o = lean_alloc_ctor(${i}, 0, ${scalarSize[r]}); lean_ctor_set_uint${scalarSize[r] * 8}(o, 0, (${scalarC[r]})${payload}); return o; }`;
      };
      lift.push(`switch (${disc}) {`);
      cases.forEach((c, i) => lift.push(`case ${i}: ${make(i, c.type ? `lift_${hs[i]}(p + ${off})` : '')}`));
      lift.push('default: lasm_wit_trap("a variant discriminant out of range");', '}');
      const tagExpr = t.kind === 'option' ? '(lean_is_scalar(v) ? 0u : 1u)' : t.kind === 'result' ? '(lean_ptr_tag(v) == 1 ? 0u : 1u)'
        : '(lean_is_scalar(v) ? (unsigned)lean_unbox(v) : (unsigned)lean_ptr_tag(v))';
      store.push(`unsigned d = ${tagExpr};`, putDisc('d'), 'switch (d) {');
      lower.push(`unsigned d = ${tagExpr};`, `for (int i = 0; i < ${nflat}; i++) f[i] = 0;`, 'f[0] = d;', 'switch (d) {');
      cases.forEach((c, i) => {
        if (!c.type) return;
        store.push(`case ${i}: store_${hs[i]}(p + ${off}, ${payloadGet(i)}); break;`);
        lower.push(`case ${i}: lower_${hs[i]}(${payloadGet(i)}, f + 1); break;`);
      });
      store.push('default: break;', '}'); lower.push('default: break;', '}');
    }
  }
  const attr = 'static __attribute__((unused))';
  lines.push(`/* ${describe(t)}: ${size(t)} bytes, alignment ${align(t)}, ${nflat} core value${nflat === 1 ? '' : 's'} (${flat(t).join(', ')}). */`,
    `${attr} ${V}lift_${k}(const uint8_t *p) {`, ...lift.map(l => `    ${l}`), '}',
    `${attr} void store_${k}(uint8_t *p, ${V === 'uint64_t ' ? 'uint64_t' : 'b_lean_obj_arg'} v) {`, ...store.map(l => `    ${l}`), '}',
    `${attr} void lower_${k}(${V === 'uint64_t ' ? 'uint64_t' : 'b_lean_obj_arg'} v, uint64_t *f) {`, ...lower.map(l => `    ${l}`), '}');
  helpers.set(k, { lines, proto: [`${attr} ${V}lift_${k}(const uint8_t *p);`, `${attr} void store_${k}(uint8_t *p, ${V === 'uint64_t ' ? 'uint64_t' : 'b_lean_obj_arg'} v);`,
    `${attr} void lower_${k}(${V === 'uint64_t ' ? 'uint64_t' : 'b_lean_obj_arg'} v, uint64_t *f);`] });
  return k;
}
function describe(t) {
  switch (t.kind) {
    case 'handle': return `${t.borrow ? 'borrow' : 'own'}<${t.resource.split('#')[1]}>`;
    case 'list': case 'option': return `${t.kind}<${describe(t.of)}>`;
    case 'result': return `result<${t.ok ? describe(t.ok) : '_'}, ${t.err ? describe(t.err) : '_'}>`;
    case 'tuple': return `tuple<${t.of.map(describe).join(', ')}>`;
    case 'record': case 'variant': return t.key.split('#')[1];
    default: return t.kind;
  }
}

// ---- Lean type text ----
/** The Lean type of a WIT type as written (aliases by name), seen from `iface`'s namespace. */
function leanType(t, iface, from = iface) {
  const paren = s => /\s/.test(s) ? `(${s})` : s;
  switch (t.kind) {
    case 'bool': return 'Bool';
    case 'u8': return 'UInt8'; case 'u16': return 'UInt16'; case 'u32': return 'UInt32'; case 'u64': return 'UInt64';
    case 'string': return 'String';
    case 'list': {
      const of = resolve(t.of, iface);
      return of.kind === 'u8' && t.of.kind === 'u8' ? 'ByteArray' : `Array ${paren(leanType(t.of, iface, from))}`;
    }
    case 'option': return `Option ${paren(leanType(t.of, iface, from))}`;
    case 'result': return `Except ${t.err ? paren(leanType(t.err, iface, from)) : 'Unit'} ${t.ok ? paren(leanType(t.ok, iface, from)) : 'Unit'}`;
    case 'tuple': return t.of.map(x => paren(leanType(x, iface, from))).join(' × ');
    case 'own': case 'borrow': case 'ref': {
      const r = lookup(iface, t.name);
      // A name in `iface`'s own scope (its own types, and abbreviations for those it uses).
      if (iface === from) return upper(t.name);
      return `${iface.module}.${upper(t.name)}`;
    }
    default: return fail(`no Lean type for ${t.kind}`);
  }
}

// ---- Functions ----
/** Every bound function: { iface, wit (import name), lean (name in the namespace), params, result, doc, kind }. */
function functionsOf(iface) {
  const fns = [];
  for (const item of iface.items.filter(stable)) {
    if (item.item === 'func') fns.push({ iface, kind: 'func', wit: item.name, lean: id(lower(item.name)), params: item.params, result: item.result, doc: item.doc });
    if (item.item === 'type' && item.def.kind === 'resource') {
      const R = upper(item.name);
      for (const m of item.def.members.filter(stable)) {
        if (m.kind === 'constructor') fns.push({ iface, kind: m.kind, resource: item.name, wit: `[constructor]${item.name}`, lean: `${R}.new`, params: m.params, result: { kind: 'own', name: item.name }, doc: m.doc });
        else fns.push({ iface, kind: m.kind, resource: item.name, wit: `[${m.kind}]${item.name}.${m.name}`, lean: `${R}.${id(lower(m.name))}`,
          params: m.kind === 'method' ? [{ name: 'self', type: { kind: 'borrow', name: item.name } }, ...m.params] : m.params, result: m.result, doc: m.doc });
      }
      fns.push({ iface, kind: 'drop', resource: item.name, wit: `[resource-drop]${item.name}`, lean: `${R}.drop`, params: [{ name: 'self', type: { kind: 'own', name: item.name } }], result: null,
        doc: `Drops the handle: the host frees the ${item.name} (the canonical ABI's \`resource.drop\`).` });
    }
  }
  for (const f of fns) {
    f.sym = `${iface.c}_${(f.resource ? `${snake(f.resource)}_` : '') + (f.kind === 'constructor' ? 'new' : f.kind === 'drop' ? 'drop' : snake(f.wit.replace(/^.*[.\]]/, '')))}`;
    f.importSym = `lasm_wit_${snake(iface.pkg)}_${snake(iface.name)}__${f.kind}_${f.resource ? `${snake(f.resource)}_` : ''}${f.kind === 'constructor' || f.kind === 'drop' ? '' : snake(f.wit.replace(/^.*[.\]]/, ''))}`.replace(/_$/, '');
    f.rparams = f.params.map(p => ({ ...p, r: resolve(p.type, iface) }));
    f.rresult = f.result && resolve(f.result, iface);
    const pf = f.rparams.flatMap(p => flat(p.r));
    if (pf.length > 16) fail(`${f.wit}: ${pf.length} core parameters (more than 16 need a parameter area)`);
    f.paramFlat = pf;
    f.resultFlat = f.rresult ? flat(f.rresult) : [];
    f.retptr = f.resultFlat.length > 1;
  }
  return fns;
}

const header = (what) => `/-
${what}

GENERATED by scripts/bindings/generate-wasi-http.mjs from ${source}.
Do not edit; the mapping rules are in docs/WASI_FASTLY_BINDINGS.md.

The doc comments quote the WIT, licensed under the Apache License 2.0 with
LLVM Exceptions (Apache-2.0 WITH LLVM-exception; the text is
library/Lasm/WASI/WIT-LICENSE.txt).
The bindings are Lasm's code (MIT).
-/`;
const docComment = (doc, extra) => {
  const text = [doc && docText(doc), extra].filter(Boolean).join('\n\n');
  return `/-- ${text} -/`;
};

// ---- Lean modules ----
const files = new Map();
const allFunctions = [];
const typeOrder = iface => {
  // Records, variants and aliases in dependency order (resources first: they are handles).
  const items = iface.items.filter(i => stable(i) && i.item === 'type' && i.def.kind !== 'resource');
  const byName = new Map(items.map(i => [i.name, i]));
  const order = [], seen = new Set();
  const refs = t => !t ? [] : t.kind === 'ref' || t.kind === 'own' || t.kind === 'borrow' ? [t.name]
    : t.kind === 'tuple' ? t.of.flatMap(refs) : t.kind === 'result' ? [...refs(t.ok), ...refs(t.err)] : t.of ? refs(t.of) : [];
  const visit = item => {
    if (seen.has(item.name)) return;
    seen.add(item.name);
    const d = item.def;
    const deps = d.kind === 'alias' ? refs(d.of) : d.kind === 'record' ? d.fields.flatMap(f => refs(f.type)) : d.kind === 'variant' ? d.cases.flatMap(c => refs(c.type)) : [];
    for (const n of deps) if (byName.has(n)) visit(byName.get(n));
    order.push(item);
  };
  items.forEach(visit);
  return order;
};

for (const key of boundInterfaces) {
  const iface = ifaceOf(key);
  const out = [header(`${iface.module}: the WIT interface \`${key}@${iface.version}\`.${iface.doc ? `\n\n${docText(iface.doc)}` : ''}`), ''];
  const imports = new Set();
  for (const [, s] of scope(iface)) if (s.owner !== iface) imports.add(s.owner.module);
  for (const m of imports) out.push(`import ${m}`);
  out.push('', `namespace ${iface.module}`, '');
  // `use`d names: abbreviations of the other interfaces' types.
  for (const [local, s] of scope(iface)) if (s.owner !== iface)
    out.push(docComment(null, `WIT: \`use ${s.owner.key}@${s.owner.version}.{${s.name}${local !== s.name ? ` as ${local}` : ''}}\``), `abbrev ${upper(local)} := ${s.owner.module}.${upper(s.name)}`, '');
  // Resources: handles.
  for (const item of iface.items.filter(i => stable(i) && i.item === 'type' && i.def.kind === 'resource'))
    out.push(docComment(item.doc, `WIT: \`resource ${item.name}\`, a handle (\`own\` or \`borrow\`) to the host's ${item.name}.`),
      `structure ${upper(item.name)} where`, '  handle : UInt32', '  deriving Inhabited, BEq, Hashable, Repr', '');
  for (const item of typeOrder(iface)) {
    const d = item.def, T = upper(item.name);
    const deprecated = item.deprecated ? ` (deprecated in WASI ${item.deprecated.version})` : '';
    if (d.kind === 'alias') { out.push(docComment(item.doc, `WIT: \`type ${item.name}\`${deprecated}`), `abbrev ${T} := ${leanType(d.of, iface)}`, ''); continue; }
    if (d.kind === 'record') {
      out.push(docComment(item.doc, `WIT: \`record ${item.name}\``), `structure ${T} where`);
      for (const f of d.fields.filter(stable)) out.push(`  ${docComment(f.doc, `WIT: \`${f.name}\``)}`, `  ${id(lower(f.name))} : ${leanType(f.type, iface)}`);
      out.push('  deriving Inhabited, BEq, Repr', '');
      continue;
    }
    if (d.kind === 'variant') {
      out.push(docComment(item.doc, `WIT: \`${d.enum ? 'enum' : 'variant'} ${item.name}\``), `inductive ${T} where`);
      for (const c of d.cases.filter(stable))
        out.push(`  ${docComment(c.doc, `WIT: \`${c.name}\``)}`, `  | ${id(lower(c.name))}${c.type ? ` (payload : ${leanType(c.type, iface)})` : ''}`);
      out.push('  deriving Inhabited, BEq, Repr', '');
      continue;
    }
    fail(`no rule for ${d.kind} ${item.name}`);
  }
  const fns = functionsOf(iface);
  allFunctions.push(...fns);
  for (const f of fns) {
    const ps = f.params.map((p, i) => {
      const r = rep(f.rparams[i].r);
      return `(${id(lower(p.name))} : ${r === 'obj' ? '@& ' : ''}${leanType(p.type, iface)})`;
    });
    const result = f.result ? leanType(f.result, iface) : 'Unit';
    out.push(docComment(f.doc, `WIT: \`${f.wit}\` (\`${iface.importModule}\`)`), `@[extern "${f.sym}"]`,
      `opaque ${f.lean}${ps.length ? ' ' + ps.join(' ') : ''} : IO ${/\s/.test(result) ? `(${result})` : result}`, '');
  }
  out.push(`end ${iface.module}`, '');
  files.set(join(root, 'library', ...iface.module.split('.')) + '.lean', out.join('\n'));
}

// The export: wasi:http/incoming-handler.handle.
const incoming = ifaceOf(exportInterface);
const types = ifaceOf('wasi:http/types');
files.set(join(root, 'library', ...incoming.module.split('.')) + '.lean', [
  header(`${incoming.module}: the WIT interface \`${exportInterface}@${incoming.version}\`, which a wasi:http proxy exports.\n\n${docText(incoming.doc ?? '')}`), '',
  `import ${types.module}`, '', `namespace ${incoming.module}`, `open ${types.module}`, '',
  docComment(null, `The arguments of this instance's \`handle(request: incoming-request, response-out: response-outparam)\`
call (WIT: \`${exportInterface}@${incoming.version}#handle\`), which runs the program's \`main\`
once per request: the request and the outparam its response goes to, both owned by
the program. Fails when they were taken already, and when the program is not a
\`lasm build --target wasi-http\` component. If \`main\` returns without taking
them, the host gets a 500 response.`),
  '@[extern "lasm_wasi_http_incoming_handler_take"]', 'opaque take : IO (IncomingRequest × ResponseOutparam)', '',
  docComment(null, `Serves this instance's request: \`main := IncomingHandler.serve fun request responseOut => …\`.
The handler answers through \`ResponseOutparam.set responseOut (.ok response)\`.`),
  'def serve (handler : IncomingRequest → ResponseOutparam → IO Unit) : IO Unit := do',
  '  let (request, responseOut) ← take', '  handler request responseOut', '', `end ${incoming.module}`, ''].join('\n'));

const modules = [...boundInterfaces.map(k => ifaceOf(k).module), incoming.module];
files.set(join(root, 'library/Lasm/WASI/Http.lean'), [
  header(`Lasm.WASI.Http: the wasi:http proxy world (\`wasi:http/proxy@0.2.12\`) for programs built with
\`lasm build --target wasi-http\` (docs/WASI_FASTLY_BINDINGS.md): its imports
\`wasi:http/types\`, \`wasi:http/outgoing-handler\`, \`wasi:io/{error,poll,streams}\`
and \`wasi:clocks/monotonic-clock\`, one module each, and its export
\`wasi:http/incoming-handler\`. Elsewhere every call fails.

  import Lasm.WASI.Http
  open Lasm.WASI.Http.Types

  def main : IO Unit := Lasm.WASI.Http.IncomingHandler.serve fun request out => do
    let response ← OutgoingResponse.new (← Fields.new)
    let body := (← response.body).toOption.get!
    ResponseOutparam.set out (.ok response)
    let stream := (← body.write).toOption.get!
    discard <| stream.blockingWriteAndFlush "Hello from Lean!".toUTF8
    stream.drop
    discard <| OutgoingBody.finish body none`), '', ...modules.map(m => `import ${m}`), ''].join('\n'));

// ---- The C glue ----
const cParams = f => f.rparams.map((p, i) => rep(p.r) === 'obj' ? `b_lean_obj_arg a${i}` : `${scalarC[rep(p.r)]} a${i}`);
const importDecl = f => {
  const args = [...f.paramFlat.map(x => x === 'i64' ? 'int64_t' : 'uint32_t'), ...(f.retptr ? ['uint32_t'] : [])];
  const ret = f.retptr || !f.resultFlat.length ? 'void' : f.resultFlat[0] === 'i64' ? 'int64_t' : 'uint32_t';
  return `__attribute__((import_module("${f.iface.importModule}"), import_name("${f.wit}"))) ${ret} ${f.importSym}(${args.join(', ') || 'void'});`;
};
const digest = createHash('sha256').update(witFiles.map(f => witText[f]).join('\0')).update(readFileSync(fileURLToPath(import.meta.url))).digest('hex').slice(0, 16);
const body = [];
for (const f of allFunctions) {
  const lines = [];
  const n = f.paramFlat.length;
  if (n) lines.push(`uint64_t f[${n}];`);
  let at = 0;
  f.rparams.forEach((p, i) => {
    const r = rep(p.r);
    if (r === 'obj') lines.push(`lower_${helper(p.r)}(a${i}, f + ${at});`);
    else lines.push(`lower_${helper(p.r)}((uint64_t)a${i}, f + ${at});`);
    at += flat(p.r).length;
  });
  const args = f.paramFlat.map((x, i) => x === 'i64' ? `(int64_t)f[${i}]` : `(uint32_t)f[${i}]`);
  const lists = f.rresult && hasLists(f.rresult);
  if (f.rresult) lines.push(`_Alignas(8) uint8_t ret[${f.retptr ? Math.max(8, alignTo(size(f.rresult), 8)) : 8}] = {0};`);
  if (lists) lines.push('lasm_wasi_http_arm();');
  if (f.retptr) lines.push(`${f.importSym}(${[...args, 'P(ret)'].join(', ')});`);
  else if (f.rresult) lines.push(`uint64_t r = (uint64_t)${f.resultFlat[0] === 'i64' ? '' : '(uint32_t)'}${f.importSym}(${args.join(', ')});`, 'memcpy(ret, &r, 8);');
  else lines.push(`${f.importSym}(${args.join(', ')});`);
  if (lists) lines.push('lasm_wasi_http_disarm();');
  lines.push('lasm_wit_temp_free();');
  if (f.rresult) lines.push(`return lean_io_result_mk_ok(${toBoxed(f.rresult, `lift_${helper(f.rresult)}(ret)`)});`);
  else lines.push('return lean_io_result_mk_ok(lean_box(0));');
  body.push(`/* ${f.iface.importModule} ${f.wit} */`, `LEAN_EXPORT lean_obj_res ${f.sym}(${cParams(f).join(', ') || 'void'}) {`, ...lines.map(l => `    ${l}`), '}', '');
}
const helperLines = [...helpers.values()];
const importDecls = allFunctions.map(importDecl);
const c = [
  `/*
 * GENERATED by scripts/bindings/generate-wasi-http.mjs: the C glue of Lasm.WASI.Http
 * (the modules library/Lasm/WASI/…), one function per bound WIT function of
 * ${source.replace(/`/g, '')}.
 * Do not edit; the mapping rules are in docs/WASI_FASTLY_BINDINGS.md.
 *
 * Built with -DLASM_WASI_HTTP (every lasm build --target wasi-http links it,
 * src/wasi/wasi-link.mjs), each function lowers its arguments by the canonical
 * ABI, calls its host import and lifts the result; the module then imports every
 * bound function (lasm_wasi_http_bound_imports), so every program's module has
 * the same imports and one component template serves all of them
 * (src/wasi/wasi-component.mjs). In every other build each call fails.
 * WIT digest: ${digest}.
 */
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <lean/lean.h>

/* The wasi-http link drops the Node build's copy of this file (src/wasi/wasi-link.mjs). */
LEAN_EXPORT const char lasm_wasi_http_bindings[] = "${digest}";

#ifdef LASM_WASI_HTTP
#define P(x) ((uint32_t)(uintptr_t)(x))
static void *at32(uint32_t address) { return (void *)(uintptr_t)address; }
static uint32_t get32(const uint8_t *p) { uint32_t v; memcpy(&v, p, 4); return v; }
static void put32(uint8_t *p, uint32_t v) { memcpy(p, &v, 4); }
/* From src/wasi/lasm_wasi_http.c: cabi_realloc's scratch buffer for what the host returns,
   armed around each call whose result holds lists or strings (copied out before the next). */
void lasm_wasi_http_arm(void);
void lasm_wasi_http_disarm(void);
bool lasm_wasi_http_take(uint32_t *request, uint32_t *response_out);
_Noreturn void lasm_wasi_fail(const char *message);
static _Noreturn void lasm_wit_trap(const char *what) { lasm_wasi_fail(what); }
/* Memory for lists passed to the host, freed after the call. */
static void **lasm_wit_temps; static size_t lasm_wit_temp_count, lasm_wit_temp_capacity;
static __attribute__((unused)) uint8_t *lasm_wit_temp(size_t size, size_t align) {
    (void)align; /* malloc's alignment (16) covers every WIT type's */
    void *p = malloc(size ? size : 1);
    if (!p) abort();
    if (lasm_wit_temp_count == lasm_wit_temp_capacity) {
        lasm_wit_temp_capacity = lasm_wit_temp_capacity ? lasm_wit_temp_capacity * 2 : 8;
        void **grown = realloc(lasm_wit_temps, lasm_wit_temp_capacity * sizeof(void *));
        if (!grown) abort();
        lasm_wit_temps = grown;
    }
    lasm_wit_temps[lasm_wit_temp_count++] = p;
    return p;
}
static void lasm_wit_temp_free(void) {
    for (size_t i = 0; i < lasm_wit_temp_count; i++) free(lasm_wit_temps[i]);
    lasm_wit_temp_count = 0;
}

/* The host imports (also src/wasi/lasm_wasi_http_imports.h). */
${importDecls.join('\n')}

/* Every import, referenced, so that every wasi-http module imports all of them. */
__attribute__((used)) void *const lasm_wasi_http_bound_imports[] = {
${allFunctions.map(f => `    (void *)${f.importSym},`).join('\n')}
};

/* The canonical ABI per type. */
${helperLines.map(h => h.proto.join('\n')).join('\n')}

${helperLines.map(h => h.lines.join('\n')).join('\n\n')}

/* The bound functions. */
${body.join('\n')}
/* ${exportInterface}@${incoming.version}#handle's arguments (the export is src/wasi/lasm_wasi_http.c's). */
LEAN_EXPORT lean_obj_res lasm_wasi_http_incoming_handler_take(void) {
    uint32_t request, response_out;
    if (!lasm_wasi_http_take(&request, &response_out))
        return lean_io_result_mk_error(lean_mk_io_user_error(lean_mk_string("Lasm.WASI.Http.IncomingHandler.take: the request was taken already")));
    lean_object *pair = lean_alloc_ctor(0, 2, 0);
    lean_ctor_set(pair, 0, lean_box_uint32(request)); lean_ctor_set(pair, 1, lean_box_uint32(response_out));
    return lean_io_result_mk_ok(pair);
}

#else
static lean_obj_res lasm_wit_unsupported(const char *what) {
    char message[256];
    snprintf(message, sizeof message, "Lasm.WASI.Http: %s is available only in programs built with lasm build --target wasi-http", what);
    return lean_io_result_mk_error(lean_mk_io_user_error(lean_mk_string(message)));
}
${allFunctions.map(f => `LEAN_EXPORT lean_obj_res ${f.sym}(${cParams(f).join(', ') || 'void'}) { ${f.rparams.map((p, i) => `(void)a${i}; `).join('')}return lasm_wit_unsupported("${f.iface.importModule} ${f.wit}"); }`).join('\n')}
LEAN_EXPORT lean_obj_res lasm_wasi_http_incoming_handler_take(void) { return lasm_wit_unsupported("${exportInterface}@${incoming.version}#handle"); }
#endif
`];
files.set(join(root, 'library/c/lasm_wasi_http_bindings.c'), c.join('').replace('#include <string.h>\n', '#include <string.h>\n#include <stdio.h>\n'));
files.set(join(root, 'src/wasi/lasm_wasi_http_imports.h'), `/* GENERATED by scripts/bindings/generate-wasi-http.mjs: the host imports of Lasm.WASI.Http
   (library/c/lasm_wasi_http_bindings.c), for the hand-written Lasm.Fetch glue
   (lasm_wasi_http.c), so that both name each import by one symbol. WIT digest: ${digest}. */
#pragma once
#include <stdint.h>
${importDecls.join('\n')}
`);

// ---- The every-call fixture and the surface report ----
const leanFull = f => `${f.iface.module}.${f.lean}`;
files.set(join(root, 'test/fixtures/wasi-http-abi/Fixture/EveryCall.lean'), `/- GENERATED by scripts/bindings/generate-wasi-http.mjs: every bound function of Lasm.WASI.Http,
called only when the request asks for it (never in CI), so that the program references
every extern of the bindings and its link checks each one's C function. -/
import Lasm.WASI.Http

namespace Fixture

/-- Calls every bound function with default arguments; the first failure ends it. -/
def everyCall : IO Unit := do
${allFunctions.map(f => `  discard <| ${leanFull(f)}${f.params.map(() => ' default').join('')}`).join('\n')}

end Fixture
`);
const surface = {
  source: 'scripts/wasi/wit/deps (Wasmtime v49.0.4 crates/wasi-http/wit/deps, WASI 0.2.12)',
  digest,
  interfaces: boundInterfaces.map(key => {
    const iface = ifaceOf(key);
    const unstable = iface.items.flatMap(i => !stable(i) ? [i.name] : i.item === 'type' && i.def.kind === 'resource' ? i.def.members.filter(m => !stable(m)).map(m => `${i.name}.${m.name}`) : []);
    return { wit: iface.importModule, module: iface.module, bound: allFunctions.filter(f => f.iface === iface).map(f => f.wit), unstableNotBound: unstable };
  }),
  export: { wit: `${exportInterface}@${incoming.version}`, module: incoming.module, functions: ['handle'] },
};
surface.total = { bound: allFunctions.length };
files.set(join(root, 'scripts/bindings/wasi-http-surface.json'), JSON.stringify(surface, null, 2) + '\n');

files.set(join(root, 'library/Lasm/WASI/WIT-LICENSE.txt'), `The doc comments of library/Lasm/WASI/**/*.lean quote the WASI 0.2.12 WIT
interface definitions of the WebAssembly System Interface subgroup
(https://github.com/WebAssembly/WASI), as copied in Wasmtime v49.0.4
crates/wasi-http/wit/deps (https://github.com/bytecodealliance/wasmtime/tree/v49.0.4/crates/wasi-http/wit/deps),
licensed under the Apache License 2.0 with LLVM Exceptions (SPDX:
Apache-2.0 WITH LLVM-exception), whose text follows.
The rest of Lasm.WASI.Http is Lasm's code (MIT).


${readFileSync(join(witDir, 'LICENSE'), 'utf8')}`);

const stale = writeOrCheck(files, { check, root: root + '/' });
if (check && stale.length) { console.error(`Stale (run node scripts/bindings/generate-wasi-http.mjs):\n  ${stale.join('\n  ')}`); process.exit(1); }
if (!check) console.log(`Lasm.WASI.Http: ${allFunctions.length} functions in ${boundInterfaces.length} interfaces, ${helpers.size} canonical ABI helpers (WIT digest ${digest}).`);
