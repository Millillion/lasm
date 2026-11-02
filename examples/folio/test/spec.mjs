// The CommonMark 0.31.2 specification's 652 examples (test/commonmark-spec,
// vendored from the commonmark-spec repository at tag 0.31.2), run through
// Folio's renderer and compared byte for byte with the expected HTML:
//
// - with raw HTML enabled (`unsafe`, the specification's own setting),
//   every example must pass;
// - with the default, safe options, the examples whose expected HTML
//   contains raw HTML from the source or a dropped URL differ on purpose;
//   every other example must still pass, and every difference must be
//   explained by raw HTML or an unsafe URL in the input.
//
//   node test/spec.mjs [--json results.json]
//
// It fails (exit 1) unless both hold, and prints the counts by section.
import { mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { renderAll } from './batch.mjs';

const root = fileURLToPath(new URL('..', import.meta.url));
const examples = JSON.parse(readFileSync(join(root, 'test', 'commonmark-spec', 'spec.json'), 'utf8'));
const jsonOut = process.argv.includes('--json') ? process.argv[process.argv.indexOf('--json') + 1] : null;

const started = Date.now();
const unsafe = renderAll(examples.map(e => ({ markdown: e.markdown, unsafe: true })));
const safe = renderAll(examples.map(e => ({ markdown: e.markdown, unsafe: false })));
const seconds = ((Date.now() - started) / 1000).toFixed(1);

const failures = [];
const sections = new Map();
let safeSame = 0;
const safeDiffs = [];
examples.forEach((e, i) => {
  const s = sections.get(e.section) ?? { total: 0, passed: 0 };
  s.total++;
  if (unsafe[i] === e.html) s.passed++;
  else failures.push({ example: e.example, section: e.section, markdown: e.markdown, expected: e.html, actual: unsafe[i] });
  sections.set(e.section, s);
  if (safe[i] === e.html) safeSame++;
  else safeDiffs.push({ example: e.example, section: e.section, markdown: e.markdown, expected: e.html, actual: safe[i] });
});

// A safe-mode difference is explained when the input has raw HTML the
// renderer escaped (a `<` the safe output shows as `&lt;` where the
// specification's output has a tag) or a URL scheme the safe options drop.
const unexplained = safeDiffs.filter(d => {
  const rawHtml = /<[A-Za-z/!?]/.test(d.markdown) && /&lt;/.test(d.actual);
  const dropped = /(javascript|vbscript|file|data):/i.test(d.markdown);
  return !(rawHtml || dropped);
});

for (const [name, s] of sections) {
  if (s.passed !== s.total) console.log(`  ${name}: ${s.passed}/${s.total}`);
}
for (const f of failures.slice(0, 20)) {
  console.log(`\n--- example ${f.example} (${f.section})\n${JSON.stringify(f.markdown)}\nexpected ${JSON.stringify(f.expected)}\nactual   ${JSON.stringify(f.actual)}`);
}
for (const d of unexplained.slice(0, 10)) {
  console.log(`\n--- safe mode, unexplained: example ${d.example}\n${JSON.stringify(d.markdown)}\nexpected ${JSON.stringify(d.expected)}\nactual   ${JSON.stringify(d.actual)}`);
}
const passed = examples.length - failures.length;
console.log(`\nCommonMark 0.31.2: ${passed}/${examples.length} examples pass with raw HTML enabled; ` +
  `with the safe defaults ${safeSame} are identical and ${safeDiffs.length} differ on purpose ` +
  `(raw HTML shown as text, or an unsafe URL dropped)${unexplained.length ? `, ${unexplained.length} of them unexplained` : ''} (${seconds} s).`);
if (jsonOut) {
  mkdirSync(join(jsonOut, '..'), { recursive: true });
  writeFileSync(jsonOut, JSON.stringify({ passed, total: examples.length, safeSame, safeDiffs: safeDiffs.map(d => d.example), failures }, null, 2));
}
process.exitCode = failures.length || unexplained.length ? 1 : 0;
