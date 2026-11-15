// Seeded corruptions of a wasm-ld map, for the checker's self-test
// (check-wasm-ld.mjs --self-test, test/link-validation.test.mjs): each is an
// error the checker must report.
import { parseMap } from './wasm-ld-map.mjs';

// A small xorshift generator: the corruptions are reproducible from --seed.
export function prng(s) {
  let a = s >>> 0 || 1;
  return n => { a ^= a << 13; a >>>= 0; a ^= a >>> 17; a ^= a << 5; a >>>= 0; return a % n; };
}

const ROW = /^\s*(-|[0-9a-f]+) +([0-9a-f]+) +([0-9a-f]+) (.*)$/;
const pad = value => value.toString(16).padStart(8);
function rewrite(line, change) {
  const [, a, o, s, rest] = ROW.exec(line);
  const address = a === '-' ? null : BigInt('0x' + a), offset = Number.parseInt(o, 16), size = Number.parseInt(s, 16);
  const next = { address, offset, size, ...change(address, offset, size) };
  return `${next.address === null ? '       -' : pad(next.address)} ${pad(next.offset)} ${pad(next.size)} ${rest}`;
}

/** Seeded corruptions of a map: [{ kind, text }]; each must be reported. */
export function corruptions(mapText, random, count, exportNames = []) {
  const lines = mapText.split('\n'), map = parseMap(mapText), result = [];
  const code = map.sections.find(s => s.kind === 'CODE'), data = map.sections.find(s => s.kind === 'DATA');
  const globals = map.sections.find(s => s.kind === 'GLOBAL')?.globals ?? [];
  const functions = code?.functions ?? [];
  const pick = list => list[random(list.length)];
  const edit = (kind, mutate) => { const copy = [...lines]; if (mutate(copy) !== false) result.push({ kind, text: copy.join('\n') }); };
  const blockOf = f => [f.line - 1, f.line + f.symbols.length]; // [first, end) line indices
  const kinds = {
    'function-offset': () => { const f = pick(functions); edit('function-offset', l => { l[f.line - 1] = rewrite(l[f.line - 1], (_, o) => ({ offset: o + 1 })); }); },
    'function-size': () => { const f = pick(functions); edit('function-size', l => { l[f.line - 1] = rewrite(l[f.line - 1], (_, __, s) => ({ size: s + 1 })); }); },
    'function-drop': () => { const f = pick(functions); const [a, b] = blockOf(f); edit('function-drop', l => { l.splice(a, b - a); }); },
    'function-swap': () => {
      const candidates = functions.slice(0, -1).map((f, i) => [f, functions[i + 1]]).filter(([f, g]) => f.size !== g.size);
      if (!candidates.length) return;
      const [f, g] = pick(candidates);
      edit('function-swap', l => { const [a] = blockOf(f), [, b] = blockOf(g); const fl = l.slice(a, f.line + f.symbols.length), gl = l.slice(g.line - 1, b); l.splice(a, b - a, ...gl, ...fl); });
    },
    'segment-address': () => {
      const segments = (data?.segments ?? []).filter(s => s.offset !== data.offset && s.size > 0);
      if (!segments.length) return;
      const s = pick(segments);
      edit('segment-address', l => { l[s.line - 1] = rewrite(l[s.line - 1], a => ({ address: a + 16n })); });
    },
    'data-symbol': () => {
      const symbols = (data?.segments ?? []).flatMap(s => s.chunks.flatMap(c => c.symbols.map(sym => ({ sym, c, tls: /^\.t(data|bss)/.test(s.name) }))));
      if (!symbols.length) return;
      const { sym, c } = pick(symbols);
      edit('data-symbol', l => { l[sym.line - 1] = rewrite(l[sym.line - 1], (a, o, s) => ({ address: a + BigInt(c.size) + 1n, offset: o ? o + c.size + 1 : o, size: s })); });
    },
    'global-index': () => {
      if (globals.length < 2) return;
      const g = pick(globals), other = pick(globals.filter(x => x !== g));
      edit('global-index', l => { l[g.line - 1] = rewrite(l[g.line - 1], () => ({ address: other.address })); });
    },
    'section-size': () => { const s = pick(map.sections); edit('section-size', l => { l[s.line - 1] = rewrite(l[s.line - 1], (_, __, size) => ({ size: size + 1 })); }); },
    'export-symbol': () => {
      // A function symbol moved onto another function (a symbol resolved to the
      // wrong definition): reported when that symbol is exported.
      const exported = new Set(exportNames);
      const sites = functions.flatMap(f => f.symbols.filter(s => exported.has(s.name)).map(s => ({ f, s })));
      if (!sites.length || functions.length < 2) return;
      const { f, s } = pick(sites), target = pick(functions.filter(g => g !== f));
      edit('export-symbol', l => {
        const row = rewrite(l[s.line - 1], () => ({ offset: target.offset, size: target.size }));
        const at = target.line; // after the target's chunk row
        if (s.line - 1 < at) { l.splice(at, 0, row); l.splice(s.line - 1, 1); } else { l.splice(s.line - 1, 1); l.splice(at, 0, row); }
      });
    },
  };
  const order = Object.keys(kinds);
  for (let i = 0; i < count; i++) kinds[order[i % order.length]]();
  return result;
}
