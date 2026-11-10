// Generates Lasm.Fastly (library/Lasm/Fastly.lean, library/Lasm/Fastly/*.lean)
// and its C glue (library/c/lasm_fastly.c): spec-faithful Lean bindings of
// Fastly Compute's host ABI, from the witx definitions Viceroy v0.21.1 ships
// (scripts/fastly/witx/, compute-at-edge-abi). The mapping rules are in
// docs/WASI_FASTLY_BINDINGS.md; every witx module becomes one Lean module,
// every function one declaration, and functions whose shape has no rule yet
// are listed (with the reason) in scripts/bindings/fastly-surface.json.
//
//   node scripts/bindings/generate-fastly.mjs          # write the files
//   node scripts/bindings/generate-fastly.mjs --check  # exit 1 if a committed file differs
//
// The generated files are committed and shipped; users never run this.
import { createHash } from 'node:crypto';
import { readFileSync } from 'node:fs';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { readWitx } from './witx.mjs';
import { capital, docText, id, lowerCamel, upperCamel, writeOrCheck } from './lean-names.mjs';

const root = fileURLToPath(new URL('../../', import.meta.url));
const check = process.argv.includes('--check');
const witxDir = join(root, 'scripts', 'fastly', 'witx');
const source = 'Viceroy v0.21.1 `wasm_abi/compute-at-edge-abi` (https://github.com/fastly/Viceroy/tree/v0.21.1/wasm_abi/compute-at-edge-abi)';
const witxFiles = ['compute-at-edge.witx', 'typenames.witx', 'cache.witx', 'config-store.witx', 'http-cache.witx', 'shielding.witx'];
const witxHash = createHash('sha256');
for (const f of witxFiles) witxHash.update(f).update(readFileSync(join(witxDir, f)));
const abiDigest = witxHash.digest('hex').slice(0, 16);
const { types, typeDocs, modules } = readWitx(join(witxDir, 'compute-at-edge.witx'));
const NS = 'Lasm.Fastly';
const fail = message => { throw new Error(`generate-fastly: ${message}`); };

// ---------- types ----------

const reprSize = { u8: 1, u16: 2, u32: 4, u64: 8 };
const builtinInfo = {
  u8: { lean: 'UInt8', c: 'uint8_t', abi: 'uint32_t', size: 1, box: v => `lean_box(${v})` },
  u16: { lean: 'UInt16', c: 'uint16_t', abi: 'uint32_t', size: 2, box: v => `lean_box(${v})` },
  u32: { lean: 'UInt32', c: 'uint32_t', abi: 'uint32_t', size: 4, box: v => `lean_box_uint32(${v})` },
  s32: { lean: 'Int32', c: 'uint32_t', abi: 'uint32_t', size: 4, box: v => `lean_box_uint32(${v})` },
  u64: { lean: 'UInt64', c: 'uint64_t', abi: 'uint64_t', size: 8, box: v => `lean_box_uint64(${v})` },
  s64: { lean: 'Int64', c: 'uint64_t', abi: 'uint64_t', size: 8, box: v => `lean_box_uint64(${v})` },
};
const usizeInfo = { ...builtinInfo.u32 };
const resolved = t => t.kind === 'named' ? resolved(types.get(t.name) ?? fail(`unknown type ${t.name}`)) : t;
const isText = t => t.kind === 'char8';
const isByte = t => t.kind === 'builtin' && t.name === 'u8';
const isUsize = t => resolved(t).kind === 'usize';
const isNamed = (t, name) => t.kind === 'named' && t.name === name;

/** A scalar's Lean type, C type (Lean's representation), import type, size in the ABI and boxing; null if not a scalar. */
function scalar(t) {
  if (t.kind === 'builtin') return builtinInfo[t.name] ?? null;
  if (t.kind === 'usize') return usizeInfo;
  if (t.kind !== 'named') return null;
  const d = types.get(t.name);
  const lean = upperCamel(t.name);
  switch (d.kind) {
    case 'builtin': case 'usize': { const base = scalar(d); return base && { ...base, lean }; }
    case 'named': { const base = scalar(d); return base && { ...base, lean }; }
    case 'handle': return { lean, c: 'uint32_t', abi: 'uint32_t', size: 4, box: v => `lean_box_uint32(${v})`, handle: true };
    case 'enum': return { lean, c: 'uint8_t', abi: reprSize[d.repr] === 8 ? 'uint64_t' : 'uint32_t', size: reprSize[d.repr], box: v => `lean_box(${v})`,
      enumCount: d.cases.length };
    case 'flags': { const wide = reprSize[d.repr] === 8;
      return { lean, c: wide ? 'uint64_t' : 'uint32_t', abi: wide ? 'uint64_t' : 'uint32_t', size: reprSize[d.repr],
        box: v => wide ? `lean_box_uint64(${v})` : `lean_box_uint32(${v})` }; }
    default: return null;
  }
}
const alignOf = t => {
  const r = resolved(t);
  if (r.kind === 'record') return Math.max(...r.fields.map(f => alignOf(f.type)));
  if (r.kind === 'pointer') return 4;
  return scalar(t)?.size ?? fail(`no alignment for ${JSON.stringify(t)}`);
};
/** The record's fields with their offsets (witx's wasm32 layout: natural alignment). */
function layout(name) {
  const r = types.get(name);
  let offset = 0;
  const fields = r.fields.map(f => {
    const size = resolved(f.type).kind === 'pointer' ? 4 : scalar(f.type)?.size ?? fail(`record ${name} field ${f.name}`);
    const align = resolved(f.type).kind === 'pointer' ? 4 : size;
    offset = Math.ceil(offset / align) * align;
    const field = { ...f, offset, size };
    offset += size;
    return field;
  });
  const align = alignOf({ kind: 'named', name });
  return { fields, size: Math.ceil(offset / align) * align, align };
}

/** A record as a Lean structure: fields as Lean fields, a pointer and its `_len` field as one String or ByteArray,
 * a pointer to a record as the nested structure. null (with a reason) when a field has no rule. */
const recordPlans = new Map();
function recordPlan(name) {
  if (recordPlans.has(name)) return recordPlans.get(name);
  const { fields, size } = layout(name);
  const plan = { name, lean: upperCamel(name), size, fields: [], reason: null };
  for (let i = 0; i < fields.length; i++) {
    const f = fields[i], r = resolved(f.type);
    if (r.kind === 'pointer') {
      const next = fields[i + 1];
      if ((isText(r.to) || isByte(r.to)) && next && /_len$/.test(next.name) && (scalar(next.type))) {
        plan.fields.push({ kind: 'buffer', name: lowerCamel(f.name.replace(/_ptr$/, '')), lean: isText(r.to) ? 'String' : 'ByteArray',
          offset: f.offset, lenOffset: next.offset, lenSize: next.size, witx: f.name });
        i++; continue;
      }
      if (resolved(r.to).kind === 'record' && r.to.kind === 'named') {
        const nested = recordPlan(r.to.name);
        if (nested.reason) { plan.reason = nested.reason; break; }
        plan.fields.push({ kind: 'record', name: lowerCamel(f.name), lean: nested.lean, plan: nested, offset: f.offset, witx: f.name });
        continue;
      }
      plan.reason = `record ${name}: field ${f.name} is a pointer with no length (an output inside an input record)`;
      break;
    }
    const s = scalar(f.type);
    if (!s) { plan.reason = `record ${name}: field ${f.name} has no scalar rule`; break; }
    plan.fields.push({ kind: 'scalar', name: lowerCamel(f.name), lean: s.lean, s, offset: f.offset, witx: f.name });
  }
  recordPlans.set(name, plan);
  return plan;
}

// ---------- functions ----------

const outputRecords = new Set(['send_error_detail', 'image_optimizer_error_detail']);
// Output arrays whose size only a witx comment gives (";; must be a 16-byte array").
const fixedOutputs = { addr_octets_out: 16, cja3_md5_out: 16 };
const buflenStatus = types.get('fastly_status').cases.indexOf('buflen');
const statusCount = types.get('fastly_status').cases.length;

/** The plan of one function: its Lean parameters, the import's arguments, the C steps and the outputs. */
function planFunction(mod, fn) {
  const abiName = `${mod.name}.${fn.name}`;
  const sym = `lasm_${mod.name}_${fn.name}`;
  const importSym = `${mod.name}__${fn.name}`;
  const ps = [...fn.params];
  const usedNames = new Set();
  const leanName = base => { let n = lowerCamel(base) || 'x'; while (usedNames.has(n)) n += "'"; usedNames.add(n); return n; };
  const plan = { mod, fn, abiName, sym, importSym, name: lowerCamel(fn.name), params: [], flat: [], abiParams: [], args: [], pre: [], post: [],
    cleanup: [], outputs: [], buffers: [], multi: null, bounded: null, records: [], reason: null };
  const unsupported = why => { plan.reason = why; return plan; };
  let n = 0;
  const v = prefix => `${prefix}${n++}`;
  const addAbi = (type, arg) => { plan.abiParams.push(type); plan.args.push(arg); };

  const result = fn.result;
  if (!result || result.kind !== 'expected' || !isNamed(result.error, 'fastly_status')) return unsupported('result is not (expected … (error $fastly_status))');
  const okTypes = !result.ok ? [] : result.ok.kind === 'tuple' ? result.ok.of : [result.ok];
  let consumesOk = false;

  for (let i = 0; i < ps.length; i++) {
    const p = ps[i], t = p.type, r = resolved(t);
    const s = scalar(t);
    if (s) {
      const name = leanName(p.name), c = v('a');
      plan.params.push({ name, lean: s.lean });
      plan.flat.push({ name: c, c: s.c, lean: s.lean, from: name });
      addAbi(s.abi, `(${s.abi})${c}`);
      continue;
    }
    if (r.kind === 'string' || r.kind === 'list' && (isByte(r.of) || isText(r.of))) {
      const text = r.kind === 'string' || isText(r.of);
      const name = leanName(p.name), c = v('a');
      plan.params.push({ name, lean: text ? 'String' : 'ByteArray', borrowed: true });
      plan.flat.push({ name: c, c: 'b_lean_obj_arg', lean: text ? '@& String' : '@& ByteArray', from: name });
      addAbi('uint32_t', text ? `P(lean_string_cstr(${c}))` : `P(lean_sarray_cptr(${c}))`);
      addAbi('uint32_t', text ? `(uint32_t)(lean_string_size(${c}) - 1)` : `(uint32_t)lean_sarray_size(${c})`);
      continue;
    }
    if (r.kind === 'list' && scalar(r.of)) {
      const es = scalar(r.of), name = leanName(p.name), c = v('a'), tmp = v('l');
      plan.params.push({ name, lean: `Array ${es.lean}`, borrowed: true });
      plan.flat.push({ name: c, c: 'b_lean_obj_arg', lean: `@& Array ${es.lean}`, from: name });
      const unbox = es.size === 8 ? 'lean_unbox_uint64' : es.box('x').startsWith('lean_box_uint32') ? 'lean_unbox_uint32' : 'lean_unbox';
      plan.pre.push(`size_t ${tmp}n = lean_array_size(${c});`,
        `uint${es.size * 8}_t *${tmp} = malloc(${tmp}n ? ${tmp}n * ${es.size} : 1);`,
        `if (!${tmp}) abort();`,
        `for (size_t i = 0; i < ${tmp}n; i++) ${tmp}[i] = (uint${es.size * 8}_t)${unbox}(lean_array_get_core(${c}, i));`);
      plan.cleanup.push(`free(${tmp});`);
      addAbi('uint32_t', `P(${tmp})`); addAbi('uint32_t', `(uint32_t)${tmp}n`);
      continue;
    }
    if (r.kind === 'pointer' && (isText(r.to) || isByte(r.to)) && ps[i + 1] && isUsize(ps[i + 1].type)) {
      const text = isText(r.to);
      // Input buffer: a const pointer and its length, or a pointer and length that no rule below
      // reads back (no nwritten, no $num_bytes result) → the bytes (ByteArray, also for char8: IP
      // octets, secret bytes).
      const outputShaped = ps[i + 2]?.type.kind === 'pointer' && isUsize(ps[i + 2].type.to)
        || ps[i + 2] && isNamed(ps[i + 2].type, 'multi_value_cursor') || okTypes.length === 1 && isNamed(okTypes[0], 'num_bytes') && !plan.bounded;
      if (r.const || !outputShaped) {
        const name = leanName(p.name), c = v('a');
        plan.params.push({ name, lean: 'ByteArray', borrowed: true });
        plan.flat.push({ name: c, c: 'b_lean_obj_arg', lean: '@& ByteArray', from: name });
        addAbi('uint32_t', `P(lean_sarray_cptr(${c}))`); addAbi('uint32_t', `(uint32_t)lean_sarray_size(${c})`);
        i += 1; continue;
      }
      // Multi-value: buf, buf_len, cursor, ending_cursor_out, nwritten_out → every item.
      if (ps[i + 2] && isNamed(ps[i + 2].type, 'multi_value_cursor') && ps[i + 3]?.type.kind === 'pointer' && isNamed(ps[i + 3].type.to, 'multi_value_cursor_result')
          && ps[i + 4]?.type.kind === 'pointer' && isUsize(ps[i + 4].type.to)) {
        if (plan.multi || plan.buffers.length) return unsupported('more than one output buffer with a multi-value cursor');
        plan.multi = { text, buf: v('m') };
        addAbi('uint32_t', `P(${plan.multi.buf}.data)`); addAbi('uint32_t', `${plan.multi.buf}.capacity`);
        addAbi('uint32_t', `${plan.multi.buf}cursor`); addAbi('uint32_t', `P(&${plan.multi.buf}ending)`); addAbi('uint32_t', `P(&${plan.multi.buf}written)`);
        plan.outputs.push({ lean: text ? 'Array String' : 'Array ByteArray', value: `${plan.multi.buf}items` });
        i += 4; continue;
      }
      // Output buffer: buf, buf_len, nwritten_out → the written bytes, retried with a larger buffer on $buflen.
      if (ps[i + 2]?.type.kind === 'pointer' && isUsize(ps[i + 2].type.to)) {
        if (plan.multi) return unsupported('an output buffer beside a multi-value cursor');
        const buf = v('b');
        plan.buffers.push({ buf, text });
        addAbi('uint32_t', `P(${buf}.data)`); addAbi('uint32_t', `${buf}.capacity`); addAbi('uint32_t', `P(&${buf}written)`);
        plan.outputs.push({ lean: text ? 'String' : 'ByteArray', value: text ? `lasm_fastly_text(${buf}.data, ${buf}written)` : `lasm_fastly_bytes(${buf}.data, ${buf}written)` });
        i += 2; continue;
      }
      // Bounded buffer: buf, buf_len with the result's $num_bytes the length written → the bytes; the caller gives the length.
      if (okTypes.length === 1 && isNamed(okTypes[0], 'num_bytes') && !plan.bounded) {
        const name = leanName(ps[i + 1].name), c = v('a');
        plan.bounded = { text, c };
        plan.params.push({ name, lean: 'UInt32' });
        plan.flat.push({ name: c, c: 'uint32_t', lean: 'UInt32', from: name });
        addAbi('uint32_t', `P(${c}buf)`); addAbi('uint32_t', c);
        plan.pre.push(`uint8_t *${c}buf = malloc(${c} ? ${c} : 1);`, `if (!${c}buf) abort();`);
        plan.cleanup.push(`free(${c}buf);`);
        consumesOk = true;
        i += 1; continue;
      }
      return unsupported(`parameter ${p.name}: a buffer with no rule`);
    }
    // A fixed-size output array with no length parameter (its size is in a witx comment,
    // fixedOutputs) and the result's $num_bytes the length written → the bytes.
    if (r.kind === 'pointer' && (isText(r.to) || isByte(r.to)) && fixedOutputs[p.name] && okTypes.length === 1 && isNamed(okTypes[0], 'num_bytes') && !plan.bounded) {
      const c = v('f');
      plan.bounded = { text: false, c, fixed: fixedOutputs[p.name] };
      plan.pre.push(`uint32_t ${c} = ${fixedOutputs[p.name]};`, `uint8_t ${c}buf[${fixedOutputs[p.name]}] = {0};`);
      addAbi('uint32_t', `P(${c}buf)`);
      consumesOk = true;
      continue;
    }
    // A record passed by value is passed by pointer (witx).
    if (t.kind === 'named' && r.kind === 'record') ps[i] = { ...p, type: { kind: 'pointer', to: t } };
    if (ps[i].type.kind === 'pointer') {
      const to = ps[i].type.to;
      const target = resolved(to);
      if (target.kind === 'record') {
        if (outputRecords.has(to.name) || /_out$/.test(p.name)) return unsupported(`parameter ${p.name}: an output record (${to.name})`);
        const rp = recordPlan(to.name);
        if (rp.reason) return unsupported(rp.reason);
        const name = leanName(p.name), buf = v('r');
        plan.params.push({ name, lean: rp.lean, record: rp });
        plan.records.push({ name, buf, rp });
        const emit = (rp, path, buf) => {
          plan.pre.push(`uint8_t ${buf}[${Math.max(rp.size, 1)}] __attribute__((aligned(8))) = {0};`);
          for (const f of rp.fields) {
            const field = `${path}.${f.name}`;
            if (f.kind === 'record') { const nb = v('r'); emit(f.plan, field, nb); plan.pre.push(`lasm_fastly_put32(${buf} + ${f.offset}, P(${nb}));`); continue; }
            const c = v('a');
            if (f.kind === 'buffer') {
              const text = f.lean === 'String';
              plan.flat.push({ name: c, c: 'b_lean_obj_arg', lean: `@& ${f.lean}`, from: field });
              plan.pre.push(`lasm_fastly_put32(${buf} + ${f.offset}, ${text ? `P(lean_string_cstr(${c}))` : `P(lean_sarray_cptr(${c}))`});`,
                `lasm_fastly_put${f.lenSize * 8}(${buf} + ${f.lenOffset}, ${text ? `lean_string_size(${c}) - 1` : `lean_sarray_size(${c})`});`);
              continue;
            }
            plan.flat.push({ name: c, c: f.s.c, lean: f.lean, from: field });
            plan.pre.push(`lasm_fastly_put${f.s.size * 8}(${buf} + ${f.offset}, ${c});`);
          }
        };
        emit(rp, name, buf);
        addAbi('uint32_t', `P(${buf})`);
        continue;
      }
      const os = scalar(to);
      if (os) {
        const o = v('o');
        plan.pre.push(`uint64_t ${o} = 0;`);
        addAbi('uint32_t', `P(&${o})`);
        plan.outputs.push({ lean: os.lean, value: os.box(`(${os.c})${o}`), enumCount: os.enumCount, raw: o });
        continue;
      }
      return unsupported(`parameter ${p.name}: a pointer with no rule`);
    }
    return unsupported(`parameter ${p.name}: no rule for ${JSON.stringify(t)}`);
  }
  // The result's ok values: one out-pointer each, after the parameters.
  if (!consumesOk) for (const ok of okTypes) {
    const os = scalar(ok);
    if (!os) return unsupported(`result ${JSON.stringify(ok)} has no rule`);
    const o = v('o');
    plan.pre.push(`uint64_t ${o} = 0;`);
    addAbi('uint32_t', `P(&${o})`);
    plan.outputs.push({ lean: os.lean, value: os.box(`(${os.c})${o}`), enumCount: os.enumCount, raw: o });
  } else {
    const b = plan.bounded, o = v('o');
    plan.pre.push(`uint64_t ${o} = 0;`);
    addAbi('uint32_t', `P(&${o})`);
    plan.outputs.push({ lean: b.text ? 'String' : 'ByteArray',
      value: b.text ? `lasm_fastly_text(${b.c}buf, (uint32_t)${o} < ${b.c} ? (uint32_t)${o} : ${b.c})` : `lasm_fastly_bytes(${b.c}buf, (uint32_t)${o} < ${b.c} ? (uint32_t)${o} : ${b.c})` });
  }
  return plan;
}

const resultType = outputs => outputs.length === 0 ? 'Unit' : outputs.map(o => /\s/.test(o.lean) && outputs.length > 1 ? `(${o.lean})` : o.lean).join(' × ');

// ---------- C ----------

function cFunction(plan) {
  const params = plan.flat.map(f => `${f.c} ${f.name}`).join(', ') || 'void';
  const lines = [`LEAN_EXPORT lean_obj_res ${plan.sym}(${params}) {`];
  const ind = s => '    ' + s;
  lines.push(...plan.pre.map(ind));
  for (const { buf } of plan.buffers) lines.push(ind(`lasm_fastly_buf ${buf} = {0}; uint32_t ${buf}written = 0;`), ind(`lasm_fastly_reserve(&${buf}, 8192);`));
  const call = `${plan.importSym}(${plan.args.join(', ')})`;
  lines.push(ind('uint32_t status;'));
  if (plan.multi) {
    const m = plan.multi.buf;
    lines.push(ind(`lasm_fastly_buf ${m} = {0}; lasm_fastly_reserve(&${m}, 4096);`),
      ind(`lean_object *${m}items = lean_mk_empty_array();`),
      ind(`uint32_t ${m}cursor = 0;`),
      ind('for (;;) {'),
      ind(`    int64_t ${m}ending = -1; uint32_t ${m}written = 0;`),
      ind(`    status = ${call};`),
      ind(`    if (status == ${buflenStatus} && ${m}.capacity < LASM_FASTLY_MAX_BUFFER) { lasm_fastly_reserve(&${m}, ${m}written > ${m}.capacity ? ${m}written : ${m}.capacity * 2); continue; }`),
      ind('    if (status) break;'),
      ind(`    ${m}items = lasm_fastly_items(${m}items, ${m}.data, ${m}written, ${plan.multi.text});`),
      ind(`    if (${m}ending < 0) break;`),
      ind(`    ${m}cursor = (uint32_t)${m}ending;`),
      ind('}'));
    plan.cleanup.push(`free(${m}.data);`);
    const cleanup = plan.cleanup.join(' ');
    lines.push(ind(`if (status) { lean_dec(${m}items); ${cleanup} return lasm_fastly_error(status); }`));
  } else if (plan.buffers.length) {
    lines.push(ind('for (;;) {'), ind(`    status = ${call};`),
      ind(`    if (status == ${buflenStatus} && ${plan.buffers.map(b => `${b.buf}.capacity < LASM_FASTLY_MAX_BUFFER`).join(' && ')}) {`),
      ...plan.buffers.map(({ buf }) => ind(`        lasm_fastly_reserve(&${buf}, ${buf}written > ${buf}.capacity ? ${buf}written : ${buf}.capacity * 2);`)),
      ind('        continue;'), ind('    }'), ind('    break;'), ind('}'));
    for (const { buf } of plan.buffers) plan.cleanup.push(`free(${buf}.data);`);
    lines.push(ind(`if (status) { ${plan.cleanup.join(' ')} return lasm_fastly_error(status); }`));
  } else {
    lines.push(ind(`status = ${call};`));
    lines.push(ind(`if (status) { ${plan.cleanup.join(' ')}${plan.cleanup.length ? ' ' : ''}return lasm_fastly_error(status); }`));
  }
  for (const o of plan.outputs) if (o.enumCount) lines.push(ind(`if (${o.raw} >= ${o.enumCount}) { ${plan.cleanup.join(' ')}${plan.cleanup.length ? ' ' : ''}return lasm_fastly_error(1); }`));
  const values = plan.outputs.map(o => o.value);
  let value = values.length === 0 ? 'lean_box(0)' : values[values.length - 1];
  for (let i = values.length - 2; i >= 0; i--) value = `lasm_fastly_pair(${values[i]}, ${value})`;
  lines.push(ind(`lean_object *result = ${value};`));
  if (plan.cleanup.length) lines.push(ind(plan.cleanup.join(' ')));
  lines.push(ind('return lean_io_result_mk_ok(result);'), '}');
  return lines.join('\n');
}
function cStub(plan) {
  const params = plan.flat.map(f => `${f.c} ${f.name}`).join(', ') || 'void';
  return `LEAN_EXPORT lean_obj_res ${plan.sym}(${params}) { ${plan.flat.map(f => `(void)${f.name}; `).join('')}return LASM_FASTLY_UNSUPPORTED; }`;
}

// ---------- Lean ----------

const fileHeader = what => `/-
${what}

GENERATED by scripts/bindings/generate-fastly.mjs from the witx of Fastly
Compute's host ABI: ${source}.
Do not edit; the mapping rules are in docs/WASI_FASTLY_BINDINGS.md.

The doc comments quote the witx, licensed under the Apache License 2.0 with
LLVM Exceptions (Apache-2.0 WITH LLVM-exception; the text is
library/Lasm/Fastly/WITX-LICENSE.txt).
The bindings are Lasm's code (MIT).
-/
`;
const docOf = (text, abi) => {
  const body = [text ? docText(text) : null, abi].filter(Boolean).join('\n\n');
  return `/-- ${body} -/`;
};

function typesModule() {
  const out = [fileHeader('Lasm.Fastly.Types: the types of Fastly Compute\'s host ABI (typenames.witx and the types of the other witx files).'),
    `namespace ${NS}`, ''];
  const order = [...types.keys()];
  for (const name of order) {
    const d = types.get(name), lean = upperCamel(name), doc = docOf(typeDocs.get(name), `witx: \`$${name}\``);
    switch (d.kind) {
      case 'enum':
        out.push(doc, `inductive ${lean} where`, ...d.cases.map(c => `  | ${id(lowerCamel(c))}`), '  deriving Inhabited, BEq, Repr, DecidableEq', '');
        out.push(`/-- The witx name of each case. -/`, `def ${lean}.witxName : ${lean} → String`, ...d.cases.map(c => `  | .${id(lowerCamel(c))} => "${c}"`), '');
        out.push(`instance : ToString ${lean} := ⟨${lean}.witxName⟩`, '');
        break;
      case 'flags': {
        const s = scalar({ kind: 'named', name });
        const bits = s.size === 8 ? 'UInt64' : 'UInt32';
        out.push(doc, `structure ${lean} where`, `  bits : ${bits} := 0`, '  deriving Inhabited, BEq, Repr, DecidableEq', '');
        out.push(`namespace ${lean}`, ...d.flags.map((f, i) => `/-- The flag \`$${f}\` (bit ${i}). -/\ndef ${id(lowerCamel(f))} : ${lean} := ⟨${2n ** BigInt(i)}⟩`),
          `instance : OrOp ${lean} := ⟨fun a b => ⟨a.bits ||| b.bits⟩⟩`, `instance : AndOp ${lean} := ⟨fun a b => ⟨a.bits &&& b.bits⟩⟩`,
          `/-- Whether every flag of \`b\` is set in \`a\`. -/`, `def has (a b : ${lean}) : Bool := a.bits &&& b.bits == b.bits`, `end ${lean}`, '');
        break;
      }
      case 'handle':
        out.push(doc, `structure ${lean} where`, '  raw : UInt32', '  deriving Inhabited, BEq, Repr, DecidableEq, Hashable', '');
        break;
      case 'builtin': case 'usize':
        out.push(doc, `abbrev ${lean} := ${scalar(d).lean}`, '');
        break;
      case 'record': break; // after the scalars, below
      default: fail(`typename ${name}: ${d.kind}`);
    }
  }
  for (const name of order) {
    const d = types.get(name);
    if (d.kind !== 'record') continue;
    const rp = recordPlan(name);
    const doc = docOf(typeDocs.get(name), `witx: \`$${name}\`${rp.reason ? '' : ` (${layout(name).size} bytes in the ABI)`}`);
    if (rp.reason) { out.push(`-- $${name}: not generated (${rp.reason}).`, ''); continue; }
    out.push(doc, `structure ${rp.lean} where`, ...rp.fields.map(f => `  /-- witx: \`$${f.witx}\`${f.kind === 'buffer' ? ' (with its length)' : ''} -/\n  ${id(f.name)} : ${f.lean} := default`),
      '  deriving Inhabited', '');
  }
  out.push(`/-- A failed host call's status as a Lean error. -/`,
    `def FastlyStatus.toIOError (s : FastlyStatus) : IO.Error :=`,
    `  IO.userError s!"Fastly host call failed: {s}"`, '',
    `/-- Host calls are \`EIO FastlyStatus\` actions; in \`IO\` they fail with \`FastlyStatus.toIOError\`. -/`,
    `instance : MonadLift (EIO FastlyStatus) IO := ⟨fun x => x.toIO FastlyStatus.toIOError⟩`, '',
    `/-- \`some\` value, or \`none\` when the host answers \`$none\` (a missing key, header or value). -/`,
    `def found? (x : EIO FastlyStatus α) : EIO FastlyStatus (Option α) :=`,
    `  tryCatch (some <$> x) fun | .none => pure none | s => throw s`, '',
    `/-- Text where the ABI takes bytes (\`(list u8)\`): \`open ${NS}\` lets a string literal stand for its UTF-8. -/`,
    `scoped instance : Coe String ByteArray := ⟨String.toUTF8⟩`, '',
    `end ${NS}`, '');
  return out.join('\n');
}

function moduleFile(mod, plans) {
  const leanMod = upperCamel(mod.name.replace(/^fastly_/, ''));
  const out = [fileHeader(`${NS}.${leanMod}: the witx module \`${mod.name}\`${mod.doc ? ` — ${docText(mod.doc.split('\n')[0])}` : ''}.`),
    `import ${NS}.Types`, '', `namespace ${NS}.${leanMod}`, `open ${NS}`, ''];
  for (const plan of plans) {
    const abi = `ABI: \`${plan.abiName}\``;
    if (plan.reason) { out.push(`-- ${plan.fn.name}: not generated (${plan.reason}).`, ''); continue; }
    const ret = `EIO FastlyStatus ${/\s/.test(resultType(plan.outputs)) ? `(${resultType(plan.outputs)})` : resultType(plan.outputs)}`;
    const doc = docOf(plan.fn.doc, abi);
    if (!plan.records.length) {
      const params = plan.params.map((p, i) => `(${id(p.name)} : ${p.borrowed ? '@& ' : ''}${p.lean})`).join(' ');
      out.push(doc, `@[extern "${plan.sym}"]`, `opaque ${id(plan.name)} ${params}${params ? ' ' : ''}: ${ret}`, '');
    } else {
      const flatName = `${plan.name}Flat`;
      const flatParams = plan.flat.map(f => `(${f.name} : ${f.lean})`).join(' ');
      out.push(`@[extern "${plan.sym}"]`, `private opaque ${id(flatName)} ${flatParams} : ${ret}`, '');
      const params = plan.params.map(p => `(${id(p.name)} : ${p.lean})`).join(' ');
      const args = plan.flat.map(f => f.from.split('.').map(id).join('.')).join(' ');
      out.push(doc, `def ${id(plan.name)} ${params} : ${ret} :=`, `  ${id(flatName)} ${args}`, '');
    }
  }
  out.push(`end ${NS}.${leanMod}`, '');
  return { leanMod, text: out.join('\n') };
}

// ---------- output ----------

const plansByModule = modules.map(mod => ({ mod, plans: mod.funcs.map(fn => planFunction(mod, fn)) }));
const files = new Map();
files.set(join(root, 'library', 'Lasm', 'Fastly', 'Types.lean'), typesModule());
const leanModules = ['Types'];
for (const { mod, plans } of plansByModule) {
  const { leanMod, text } = moduleFile(mod, plans);
  leanModules.push(leanMod);
  files.set(join(root, 'library', 'Lasm', 'Fastly', `${leanMod}.lean`), text);
}
files.set(join(root, 'library', 'Lasm', 'Fastly.lean'), [fileHeader(`${NS}: Fastly Compute's host ABI, every witx module (docs/WASI_FASTLY_BINDINGS.md).

A program built with \`lasm build --target fastly\` calls the host directly;
elsewhere every call fails with \`FastlyStatus.unsupported\`.

  import Lasm.Fastly
  open Lasm.Fastly

  def main : IO Unit := do
    let (req, body) ← HttpReq.bodyDownstreamGet
    let resp ← HttpResp.new
    HttpResp.headerAppend resp "content-type" "text/plain"
    let out ← HttpBody.new
    discard <| HttpBody.write out s!"{← HttpReq.methodGet req} {← HttpReq.uriGet req}\\n" .back
    HttpResp.sendDownstream resp out 0`),
  ...leanModules.map(m => `import ${NS}.${m}`), ''].join('\n'));

const bound = plansByModule.flatMap(({ plans }) => plans.filter(p => !p.reason));
const helpers = `/*
 * GENERATED by scripts/bindings/generate-fastly.mjs: the C glue of Lasm.Fastly
 * (the modules library/Lasm/Fastly/…), one function per bound witx function of
 * Fastly Compute's host ABI (${source}).
 * Do not edit; the mapping rules are in docs/WASI_FASTLY_BINDINGS.md.
 *
 * Built with -DLASM_WASI_FASTLY (lasm build --target fastly, src/wasi/wasi-link.mjs),
 * each function calls its host import; in every other build it fails with
 * $unsupported. witx ABI digest: ${abiDigest}.
 */
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <lean/lean.h>

/* The WASI link drops the Node build's copy of this file for --target fastly (src/wasi/wasi-link.mjs). */
LEAN_EXPORT const char lasm_fastly_bindings[] = "${abiDigest}";
#define LASM_FASTLY_UNSUPPORTED lean_io_result_mk_error(lean_box(${types.get('fastly_status').cases.indexOf('unsupported')}))
`;
const glue = [helpers, '#ifdef LASM_WASI_FASTLY',
  '#define P(x) ((uint32_t)(uintptr_t)(x))',
  `#define LASM_FASTLY_MAX_BUFFER (64u << 20)`,
  'typedef struct { uint8_t *data; uint32_t capacity; } lasm_fastly_buf;',
  'static void lasm_fastly_reserve(lasm_fastly_buf *b, uint32_t size) {',
  '    if (size > LASM_FASTLY_MAX_BUFFER) size = LASM_FASTLY_MAX_BUFFER;',
  '    uint8_t *next = realloc(b->data, size ? size : 1);',
  '    if (!next) abort();',
  '    b->data = next; b->capacity = size;',
  '}',
  `static lean_obj_res lasm_fastly_error(uint32_t status) { return lean_io_result_mk_error(lean_box(status < ${statusCount} ? status : 1)); }`,
  'static lean_object *lasm_fastly_pair(lean_object *a, lean_object *b) { lean_object *o = lean_alloc_ctor(0, 2, 0); lean_ctor_set(o, 0, a); lean_ctor_set(o, 1, b); return o; }',
  'static lean_object *lasm_fastly_text(const uint8_t *p, uint32_t n) { return lean_mk_string_from_bytes((const char *)p, n); }',
  'static lean_object *lasm_fastly_bytes(const uint8_t *p, uint32_t n) { lean_object *a = lean_alloc_sarray(1, n, n); if (n) memcpy(lean_sarray_cptr(a), p, n); return a; }',
  '/* The items of a multi-value buffer: each ends with a NUL. */',
  'static lean_object *lasm_fastly_items(lean_object *items, const uint8_t *p, uint32_t n, bool text) {',
  '    for (uint32_t at = 0; at < n;) {',
  '        const uint8_t *end = memchr(p + at, 0, n - at);',
  '        uint32_t length = end ? (uint32_t)(end - (p + at)) : n - at;',
  '        items = lean_array_push(items, text ? lasm_fastly_text(p + at, length) : lasm_fastly_bytes(p + at, length));',
  '        at += length + 1;',
  '    }',
  '    return items;',
  '}',
  'static inline void lasm_fastly_put8(uint8_t *p, uint64_t v) { uint8_t x = (uint8_t)v; memcpy(p, &x, 1); }',
  'static inline void lasm_fastly_put16(uint8_t *p, uint64_t v) { uint16_t x = (uint16_t)v; memcpy(p, &x, 2); }',
  'static inline void lasm_fastly_put32(uint8_t *p, uint64_t v) { uint32_t x = (uint32_t)v; memcpy(p, &x, 4); }',
  'static inline void lasm_fastly_put64(uint8_t *p, uint64_t v) { memcpy(p, &v, 8); }',
  '',
  '/* The host imports. */',
  ...bound.map(p => `__attribute__((import_module("${p.mod.name}"), import_name("${p.fn.name}"))) uint32_t ${p.importSym}(${p.abiParams.join(', ') || 'void'});`),
  '',
  ...bound.map(cFunction).flatMap(f => [f, '']),
  '#else',
  ...bound.map(cStub),
  '#endif', ''].join('\n');
files.set(join(root, 'library', 'c', 'lasm_fastly.c'), glue);
// The witx's licence travels with the doc comments that quote it (library/ ships in @lasm/cli).
files.set(join(root, 'library', 'Lasm', 'Fastly', 'WITX-LICENSE.txt'), `The doc comments of library/Lasm/Fastly/*.lean quote the witx of Fastly
Compute's host ABI from ${source.replace(/`/g, '')},
Copyright Fastly, Inc. and contributors, licensed under the Apache License 2.0
with LLVM Exceptions (SPDX: Apache-2.0 WITH LLVM-exception), whose text follows.
The rest of Lasm.Fastly is Lasm's code (MIT).

` + readFileSync(join(witxDir, 'LICENSE'), 'utf8'));

// The surface: what is bound and what is not (and why).
const surface = { source, abiDigest, modules: plansByModule.map(({ mod, plans }) => ({ witx: mod.name, lean: `${NS}.${upperCamel(mod.name.replace(/^fastly_/, ''))}`,
  bound: plans.filter(p => !p.reason).map(p => p.fn.name), unbound: plans.filter(p => p.reason).map(p => ({ name: p.fn.name, reason: p.reason })) })) };
surface.total = { functions: plansByModule.reduce((n, m) => n + m.plans.length, 0), bound: bound.length };
files.set(join(root, 'scripts', 'bindings', 'fastly-surface.json'), JSON.stringify(surface, null, 1) + '\n');

// A program that calls every bound function (never at run time): its module imports
// every host function Lasm.Fastly binds, so instantiating it under Viceroy checks every
// import's name and signature against the host (test/fixtures/fastly-abi, scripts/wasi/wasi-ci.mjs).
const everyCall = [`/- GENERATED by scripts/bindings/generate-fastly.mjs: every bound function of Lasm.Fastly,
called only when the request asks for it (never in CI), so that the module imports every
host function Lasm.Fastly binds and Viceroy checks each import's signature when it
instantiates the module. -/`, 'import Lasm.Fastly', 'open Lasm.Fastly', '', 'namespace Fixture', '',
  '/-- Calls every bound host function with default arguments; the first failure ends it. -/',
  'def everyCall : EIO FastlyStatus Unit := do',
  ...bound.map(p => `  discard <| ${NS}.${upperCamel(p.mod.name.replace(/^fastly_/, ''))}.${id(p.name)}${p.params.map(() => ' default').join('')}`),
  '', 'end Fixture', ''].join('\n');
files.set(join(root, 'test', 'fixtures', 'fastly-abi', 'Fixture', 'EveryCall.lean'), everyCall);

const stale = writeOrCheck(files, { check, root });
if (check) {
  if (stale.length) { console.error(`generate-fastly: out of date (run node scripts/bindings/generate-fastly.mjs): ${stale.join(', ')}`); process.exit(1); }
  console.log(`generate-fastly: up to date (${bound.length} of ${surface.total.functions} functions bound)`);
} else console.log(`generate-fastly: ${bound.length} of ${surface.total.functions} functions bound, ${files.size} files`);
