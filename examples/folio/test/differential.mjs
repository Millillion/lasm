// Differential test: random Markdown documents rendered by Folio and by
// commonmark.js 0.31.2 (the reference implementation, an npm
// devDependency), which must agree byte for byte:
//
// - with raw HTML enabled in Folio and commonmark.js's defaults;
// - with Folio's safe defaults and commonmark.js's `safe` option, on
//   documents without raw HTML (which the two show differently on purpose:
//   Folio as text, commonmark.js as an HTML comment).
//
//   node test/differential.mjs [--seed N] [--docs N] [--max-tokens N]
//
// The seed is printed first; a run replays exactly from it. Disagreements
// are shrunk (tokens removed while they still disagree) and written to
// test-results/differential-*.json.
import { mkdirSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';
import * as commonmark from 'commonmark';
import { renderAll } from './batch.mjs';

const root = fileURLToPath(new URL('..', import.meta.url));
const arg = (name, d) => process.argv.includes(name) ? Number(process.argv[process.argv.indexOf(name) + 1]) : d;
const seed = arg('--seed', Math.floor(Math.random() * 2 ** 31));
const docs = arg('--docs', 5000);
const maxTokens = arg('--max-tokens', 40);
console.log(`seed ${seed} (replay: node test/differential.mjs --seed ${seed} --docs ${docs} --max-tokens ${maxTokens})`);

/** mulberry32 */
function rng(s) {
  return () => {
    s |= 0; s = (s + 0x6d2b79f5) | 0;
    let t = Math.imul(s ^ (s >>> 15), 1 | s);
    t = (t + Math.imul(t ^ (t >>> 7), 61 | t)) ^ t;
    return ((t ^ (t >>> 14)) >>> 0) / 4294967296;
  };
}

// Pieces of Markdown syntax, with plain words and spacing between them.
const TOKENS = [
  'a', 'foo', 'bar baz', 'ü', 'Σ', 'ß', '中文', '—', '.', ',', '!', '?', ':', ';', '$', '%',
  ' ', ' ', ' ', '  ', '   ', '    ', '\t', '\n', '\n', '\n', '\n\n', '\r\n',
  '*', '*', '**', '***', '_', '_', '__', '`', '``', '```', '~~~', '~',
  '[', ']', '[', ']', '(', ')', '![', '<', '>', '> ', '\\', '\\*', '\\[', '&amp;', '&#35;', '&#x41;', '&copy;', '&nope;', '&',
  '# ', '## ', '###### ', '#', '- ', '+ ', '* ', '1. ', '2) ', '10. ', '-', '---', '***', '===', '___',
  '[foo]', '[foo]: /url', '[Foo]: /u "t"', '[bar]:\n/u', '[foo][]', '[foo][bar]', '](/u)', '](/u "t")', '](<a b>)',
  '<http://a.b/c?d=e>', '<a@b.co>', 'http://x.y', '<div>', '</div>', '<span a="b">', '</span>', '<!-- c -->',
  '<?p?>', '<!X >', '<![CDATA[x]]>', '<pre>', '</pre>', '<script>', '</script>', '<b>', '</b>',
  "'", '"', 'javascript:alert(1)', 'data:image/png;x', '%20', '|',
];

function generate(r) {
  const n = 1 + Math.floor(r() * maxTokens);
  const out = [];
  for (let i = 0; i < n; i++) out.push(TOKENS[Math.floor(r() * TOKENS.length)]);
  return out;
}

const reference = (md, safe) =>
  new commonmark.HtmlRenderer({ safe }).render(new commonmark.Parser().parse(md));
const hasRawHtml = md => /<[A-Za-z/!?]/.test(md);

const r = rng(seed);
const cases = [];
for (let i = 0; i < docs; i++) {
  const tokens = generate(r);
  const md = tokens.join('');
  cases.push({ tokens, md, unsafe: true });
  if (!hasRawHtml(md)) cases.push({ tokens, md, unsafe: false });
}

const started = Date.now();
const ours = renderAll(cases.map(c => ({ markdown: c.md, unsafe: c.unsafe })));
const bad = cases.map((c, i) => ({ ...c, ours: ours[i], theirs: reference(c.md, !c.unsafe) }))
  .filter(c => c.ours !== c.theirs);

/** Removes tokens while the two still disagree. */
function shrink(c) {
  let tokens = c.tokens;
  for (let changed = true; changed;) {
    changed = false;
    for (let i = 0; i < tokens.length; i++) {
      const t = tokens.slice(0, i).concat(tokens.slice(i + 1));
      const md = t.join('');
      if (!c.unsafe && hasRawHtml(md)) continue;
      const [o] = renderAll([{ markdown: md, unsafe: c.unsafe }]);
      if (o !== reference(md, !c.unsafe)) { tokens = t; changed = true; break; }
    }
  }
  const md = tokens.join('');
  const [o] = renderAll([{ markdown: md, unsafe: c.unsafe }]);
  return { unsafe: c.unsafe, markdown: md, folio: o, commonmark: reference(md, !c.unsafe) };
}

const seconds = ((Date.now() - started) / 1000).toFixed(1);
if (bad.length) {
  const shrunk = bad.slice(0, 5).map(shrink);
  for (const s of shrunk) console.log(`\n${s.unsafe ? 'raw HTML' : 'safe'}: ${JSON.stringify(s.markdown)}\nfolio      ${JSON.stringify(s.folio)}\ncommonmark ${JSON.stringify(s.commonmark)}`);
  mkdirSync(join(root, 'test-results'), { recursive: true });
  writeFileSync(join(root, 'test-results', `differential-${seed}.json`), JSON.stringify({ seed, shrunk, count: bad.length }, null, 2));
}
console.log(`\n${cases.length - bad.length}/${cases.length} documents agree with commonmark.js 0.31.2 (seed ${seed}, ${seconds} s).`);
process.exitCode = bad.length ? 1 : 0;
