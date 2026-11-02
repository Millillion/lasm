// The crash and timeout fuzzer: random and pathological Markdown (huge
// repetitions of syntax fragments, deep nesting, random characters including
// control characters and astral ones, spec examples cut and repeated) goes
// through the renderer as Lasm builds it, in the safe defaults and with raw
// HTML enabled. Every document must
//
// - render: the program exits normally (no trap, no stack overflow, no
//   out-of-memory) within a time budget that grows linearly with its length;
// - in the safe defaults, produce HTML that a strict tokenizer accepts:
//   only Folio's tags and attributes, properly nested, text with no `<`,
//   `>` or `"` and no `&` but the four references (the run-time check of the
//   proposition `output_reads_back`).
//
//   node test/fuzz.mjs [--seed N] [--minutes M] [--engine lasm|native]
//
// The seed is printed first; a run replays from it. A failing document is
// written to test-results/fuzz-SEED-N.md.
import { mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { renderAll } from './batch.mjs';

const root = fileURLToPath(new URL('..', import.meta.url));
const arg = (n, d) => process.argv.includes(n) ? process.argv[process.argv.indexOf(n) + 1] : d;
const seed = Number(arg('--seed', Math.floor(Math.random() * 2 ** 31)));
const minutes = Number(arg('--minutes', 5));
if (arg('--engine', null) === 'native') process.env.FOLIO_BATCH = 'native';
console.log(`seed ${seed} (replay: node test/fuzz.mjs --seed ${seed} --minutes ${minutes})`);

function rng(s) {
  return () => {
    s |= 0; s = (s + 0x6d2b79f5) | 0;
    let t = Math.imul(s ^ (s >>> 15), 1 | s);
    t = (t + Math.imul(t ^ (t >>> 7), 61 | t)) ^ t;
    return ((t ^ (t >>> 14)) >>> 0) / 4294967296;
  };
}
const r = rng(seed);
const pick = xs => xs[Math.floor(r() * xs.length)];
const int = n => Math.floor(r() * n);

const MOTIFS = ['*', '**', '_', '__', '*a ', 'a_ ', '_a ', '[', ']', '[a', 'a]', '](', '![', '![[]()', '[ (](', '(', ')',
  '> ', '>', '- ', '* ', '+ ', '1. ', '  ', '    ', '\t', '\n', '\n\n', '`', '``', '```\n', '~~~\n', '<', '<!--', '-->',
  '<a ', '<a b="', '"', "'", '&', '&#', '&#x', '&amp', '\\', '\\\n', '#', '# ', '=\n', '-\n', '|', '<http://', '@',
  '[a]: /u\n', '[a]', 'e`', '**x [a*b**c*](d)', '- \n', '> - ', '>\n', 'a*', '<?', '<![CDATA[', ':', 'x', ' '];
const examples = JSON.parse(readFileSync(join(root, 'test', 'commonmark-spec', 'spec.json'), 'utf8')).map(e => e.markdown);

function randomChars(n) {
  let s = '';
  for (let i = 0; i < n; i++) {
    const k = r();
    if (k < 0.6) s += String.fromCharCode(32 + int(95));
    else if (k < 0.7) s += pick(['\n', '\t', '\r', '\r\n', '\0', '\x0b', '\x0c', ' ', ' ', '﻿']);
    else if (k < 0.85) s += String.fromCodePoint(0xa0 + int(0x3000));
    else if (k < 0.95) s += String.fromCodePoint(0x1f300 + int(0x300));
    else s += pick(MOTIFS);
  }
  return s;
}

function generate() {
  const kind = r();
  if (kind < 0.45) {
    // a few motifs, each repeated many times: deep nesting and long runs
    let s = '';
    for (let parts = 1 + int(4); parts > 0; parts--) {
      const motif = r() < 0.5 ? pick(MOTIFS) : pick(MOTIFS) + pick(MOTIFS) + (r() < 0.5 ? pick(MOTIFS) : '');
      s += motif.repeat(1 + int(r() < 0.3 ? 40000 : 3000));
    }
    return s;
  }
  if (kind < 0.7) return randomChars(1 + int(r() < 0.2 ? 20000 : 500));
  // spec examples, mixed and repeated
  let s = '';
  for (let parts = 1 + int(6); parts > 0; parts--) s += pick(examples).repeat(1 + int(r() < 0.3 ? 2000 : 5));
  return s;
}

// The strict tokenizer (Proofs/Tokens.lean, in JavaScript).
const TAGS = new Set(['p', 'h1', 'h2', 'h3', 'h4', 'h5', 'h6', 'ul', 'ol', 'li', 'blockquote', 'pre', 'code', 'em', 'strong', 'a', 'hr', 'br', 'img']);
const VOID = new Set(['hr', 'br', 'img']);
const ATTRS = new Set(['href', 'src', 'alt', 'title', 'start', 'class']);
export function strictlyValid(html) {
  const stack = [];
  const re = /<\/([a-z0-9]+)>|<([a-z0-9]+)((?: [a-z]+="[^"<>]*")*)( \/)?>|&(amp|lt|gt|quot);|([^<>"&]+)|([\s\S])/g;
  for (const m of html.matchAll(re)) {
    if (m[7] !== undefined) return `stray ${JSON.stringify(m[7])} at ${m.index}`;
    if (m[1]) { if (stack.pop() !== m[1]) return `unbalanced </${m[1]}> at ${m.index}`; continue; }
    if (m[2]) {
      if (!TAGS.has(m[2])) return `unknown tag ${m[2]}`;
      for (const a of m[3].matchAll(/ ([a-z]+)="([^"]*)"/g)) {
        if (!ATTRS.has(a[1])) return `unknown attribute ${a[1]}`;
        if (/&(?!(amp|lt|gt|quot);)/.test(a[2])) return `bad reference in ${a[1]}`;
        if ((a[1] === 'href' || a[1] === 'src') && /^\s*(javascript|vbscript|file):/i.test(a[2])) return `unsafe URL ${a[2]}`;
      }
      if (m[4] ? !VOID.has(m[2]) : VOID.has(m[2])) return `void mismatch ${m[2]}`;
      if (!m[4]) stack.push(m[2]);
    }
  }
  return stack.length ? `unclosed ${stack.join(',')}` : null;
}

const budget = md => 10_000 + Math.ceil(md.length / 100_000) * 4_000;
const deadline = Date.now() + minutes * 60_000;
let docs = 0, chars = 0, failures = 0;
const fail = (md, why) => {
  failures++;
  mkdirSync(join(root, 'test-results'), { recursive: true });
  const file = join(root, 'test-results', `fuzz-${seed}-${failures}.md`);
  writeFileSync(file, md);
  console.log(`FAIL (${why}): ${md.length} characters, ${JSON.stringify(md.slice(0, 80))}… saved to ${file}`);
};

while (Date.now() < deadline && failures < 5) {
  // a batch of documents up to about a million characters
  const batch = [];
  let size = 0;
  while (batch.length < 40 && size < 1_000_000) { const md = generate(); batch.push(md); size += md.length; }
  const cases = batch.flatMap(md => [{ markdown: md, unsafe: false }, { markdown: md, unsafe: true }]);
  let results;
  try {
    results = renderAll(cases, { timeout: batch.reduce((t, md) => t + budget(md), 0) });
  } catch {
    // isolate the document that crashed or ran out of time
    for (const md of batch) {
      const started = Date.now();
      try { renderAll([{ markdown: md, unsafe: false }, { markdown: md, unsafe: true }], { timeout: budget(md) * 2 }); }
      catch (e) { fail(md, e.signal ? `killed by ${e.signal} after ${Date.now() - started} ms` : `exit ${e.status}`); }
    }
    continue;
  }
  batch.forEach((md, i) => {
    const why = strictlyValid(results[2 * i]);
    if (why) fail(md, `safe output rejected: ${why}`);
  });
  docs += batch.length;
  chars += size;
}
console.log(`${docs} documents (${(chars / 1e6).toFixed(1)} million characters) rendered twice each; ${failures} failures (seed ${seed}).`);
process.exitCode = failures ? 1 : 0;
