// CommonMark's pathological inputs: the cases of cmark 0.31.1's
// test/pathological_tests.py (vendored in test/cmark-pathological with its
// license), each rendered by Folio in its own process under a time limit,
// and checked against the same expected-output pattern as cmark's test.
// They are the known ways to make a CommonMark parser quadratic or
// exponential, or to exhaust its stack: deep nesting, runs of unmatched
// delimiters and brackets, unclosed constructs. After them, deeper nesting
// of every kind of container (issue #231: a list 2,685 deep and block quotes
// 36,742 deep exhausted the stack on Cloudflare Workers, whose engine allows
// just under 10,000 frames, as browsers do).
//
//   node test/pathological.mjs [--timeout SECONDS] [--only NAME] [--engine ENGINE] [--skip JSON]
//
// ENGINE is any engine of test/batch.mjs: lasm or node (the default, the
// Node build), native, wasmtime, wasmer, node-wasi, chromium, firefox,
// webkit, or the URL of a running site server (POST /api/render; test/edge.mjs
// --pathological serves one on each edge platform's local tooling).
//
// --skip takes a JSON object from case names to the reason each is not run
// on this engine (test/platforms.mjs: Fastly's 128 MB heap, issue #234);
// every name must be a case here, and the reason is printed.
//
// Fails if any case errors, times out or produces other output. cmark's
// own limit is 5 s per case; the default here is 20 s, since Folio runs
// as WebAssembly in a fresh process (startup included), and 60 s in a
// browser or over HTTP (a browser starts for every case; the edge
// platforms' local tools are slower).
import { renderAllAsync } from './batch.mjs';

const arg = (n, d) => process.argv.includes(n) ? process.argv[process.argv.indexOf(n) + 1] : d;
const engine = { lasm: 'node', native: 'native' }[arg('--engine', 'lasm')] ?? arg('--engine', 'lasm');
const remote = /^https?:\/\//.test(engine) || ['chromium', 'firefox', 'webkit'].includes(engine);
const timeout = Number(arg('--timeout', remote ? 60 : 20)) * 1000;
const only = arg('--only', null);
const skip = JSON.parse(arg('--skip', '{}'));

const rep = (s, n) => s.repeat(n);
const range = (a, b) => Array.from({ length: b - a }, (_, i) => a + i);

function hashCollisions() {
  const badhash = ref => {
    let h = 0;
    for (const c of ref) h = (c.charCodeAt(0) + ((h << 6) >>> 0) + ((h << 16) >>> 0) - h) >>> 0;
    return h % 16 === 0;
  };
  const keys = [];
  for (let i = 0; keys.length < 25000; i++) if (badhash(`x${i}`)) keys.push(`x${i}`);
  const [bad, ...rest] = keys;
  return [rest.map(k => `[${k}]: /url\n\n[${bad}]\n\n`).join(''),
    new RegExp(`(<p>\\[${bad}]</p>\\n){${keys.length - 1}}`)];
}

const cases = {
  'nested strong emph': [rep('*a **a ', 32500) + 'b' + rep(' a** a*', 32500),
    /(<em>a <strong>a ){32500}b( a<\/strong> a<\/em>){32500}/],
  'many emph closers with no openers': [rep('a_ ', 32500), /(a[_] ){32499}a_/],
  'many emph openers with no closers': [rep('_a ', 32500), /(_a ){32499}_a/],
  'many link closers with no openers': [rep('a]', 32500), /(a\]){32500}/],
  'many link openers with no closers': [rep('[a', 32500), /(\[a){32500}/],
  'mismatched openers and closers': [rep('*a_ ', 25000), /([*]a[_] ){24999}[*]a_/],
  'issue #389': [rep('*a ', 20000) + rep('_a*_ ', 20000), /(<em>a ){20000}(_a<\/em>_ ?){20000}/],
  'openers and closers multiple of 3': ['a**b' + rep('c* ', 25000), /a[*][*]b(c[*] ){24999}c[*]/],
  'link openers and emph closers': [rep('[ a_', 25000), /(\[ a_){25000}/],
  'pattern [ (]( repeated': [rep('[ (](', 40000), /(\[ \(\]\(){40000}/],
  'pattern ![[]() repeated': [rep('![[]()', 160000), /(!\[<a href=""><\/a>){160000}/],
  'hard link/emph case': ['**x [a*b**c*](d)', /\*\*x <a href="d">a<em>b\*\*c<\/em><\/a>/],
  'nested brackets': [rep('[', 25000) + 'a' + rep(']', 25000), /\[{25000}a\]{25000}/],
  'nested block quotes': [rep('> ', 25000) + 'a', /(<blockquote>\n){25000}/],
  'deeply nested lists': [range(0, 500).map(x => rep('  ', x) + '* a\n').join(''),
    /<ul>\n(<li>a\n<ul>\n){499}<li>a<\/li>\n<\/ul>\n(<\/li>\n<\/ul>\n){499}/],
  'U+0000 in input': ['abc\u0000de\u0000', /abc�?de�?/],
  'backticks': [range(1, 2500).map(x => 'e' + rep('`', x)).join(''), /^<p>[e`]*<\/p>\n$/],
  'unclosed links A': [rep('[a](<b', 30000), /(\[a]\(&lt;b){30000}/],
  'unclosed links B': [rep('[a](b', 30000), /(\[a]\(b){30000}/],
  'unclosed <!--': ['</' + rep('<!--', 300000), /&lt;\/(&lt;!--){300000}/],
  'empty lines in deeply nested lists': [rep('- ', 30000) + 'x' + rep('\n', 30000), /^(<\w+>\n?)+x(<\/\w+>\n)+$/],
  'empty lines in deeply nested lists in blockquote': ['> ' + rep('- ', 30000) + 'x\n' + rep('>\n', 30000),
    /^(<\w+>\n?)+x(<\/\w+>\n)+$/],
  'emph in deep blockquote': [rep('>', 100000) + rep('a*', 100000), /^(<\w+>\n)+<p>.*<\/p>\n(<\/\w+>\n)+$/s],
  'reference collisions': hashCollisions(),
  // Deeper than any engine's stack allows recursion (issue #231).
  'issue #231: a list nested 2,685 deep': [rep('+ ', 2685),
    /^(<ul>\n<li>\n){2684}<ul>\n<li><\/li>\n(<\/ul>\n<\/li>\n){2684}<\/ul>\n$/],
  'issue #231: block quotes nested 36,742 deep': [rep('>', 36742) + ' a',
    /^(<blockquote>\n){36742}<p>a<\/p>\n(<\/blockquote>\n){36742}$/],
  'ordered lists nested 20,000 deep': [rep('1. ', 20000) + 'x',
    /^(<ol>\n<li>\n){19999}<ol>\n<li>x<\/li>\n<\/ol>\n(<\/li>\n<\/ol>\n){19999}$/],
  'lists in block quotes in lists, 30,000 deep': [rep('> - 1. ', 10000) + 'x',
    /^(<blockquote>\n<ul>\n<li>\n<ol>\n<li>\n){9999}<blockquote>\n<ul>\n<li>\n<ol>\n<li>x<\/li>\n<\/ol>\n<\/li>\n<\/ul>\n<\/blockquote>\n(<\/li>\n<\/ol>\n<\/li>\n<\/ul>\n<\/blockquote>\n){9999}$/],
  'images nested 30,000 deep': [rep('![a', 30000) + rep('](u)', 30000), /^<p><img src="u" alt="a{30000}" \/><\/p>\n$/],
};

for (const name of Object.keys(skip)) if (!(name in cases)) throw new Error(`--skip: no pathological case ${JSON.stringify(name)}`);

let failed = 0;
for (const [name, [input, re]] of Object.entries(cases)) {
  if (only && name !== only) continue;
  if (name in skip) { console.log(`skip ${name}: ${skip[name]} (${input.length} characters)`); continue; }
  const started = Date.now();
  let status;
  try {
    // cmark's test renders with raw HTML allowed (its default)
    const [html] = await renderAllAsync([{ markdown: input, unsafe: true }], { timeout, engine });
    status = re.test(html) ? 'passed' : `FAILED: ${JSON.stringify(html.slice(0, 80))}`;
  } catch (e) {
    status = e.code === 'ETIMEDOUT' || e.signal === 'SIGTERM' || e.name === 'TimeoutError' ? 'TIMEOUT' : `ERRORED: ${String(e.message).split('\n')[0]}`;
  }
  const seconds = ((Date.now() - started) / 1000).toFixed(2);
  if (status !== 'passed') failed++;
  console.log(`${status === 'passed' ? 'ok  ' : 'FAIL'} ${name}: ${status} (${seconds} s, ${input.length} characters)`);
}
const skipped = Object.keys(skip).filter(n => !only || n === only).length;
console.log(failed ? `${failed} pathological cases failed on ${engine}`
  : `every pathological case ${skipped ? `but the ${skipped} skipped ` : ''}passed on ${engine}`);
if (failed) process.exitCode = 1;
