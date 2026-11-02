// Regenerates spec.json from the CommonMark specification at the pinned tag,
// with the extraction rules of the spec repository's test/spec_tests.py
// (`--dump-tests`). Run: node test/commonmark-spec/extract.mjs
// It downloads spec.txt, checks its SHA-256, and rewrites spec.json.
import { createHash } from 'node:crypto';
import { writeFileSync } from 'node:fs';

const TAG = '0.31.2';
const SPEC_SHA256 = '257c41ad946f7a1414a499aca402a1aa8fdac3678532266611348c1cf54f4b80';
const url = `https://raw.githubusercontent.com/commonmark/commonmark-spec/${TAG}/spec.txt`;

const text = await (await fetch(url)).text();
const digest = createHash('sha256').update(text).digest('hex');
if (digest !== SPEC_SHA256) throw new Error(`spec.txt SHA-256 mismatch: ${digest}`);

const tests = [];
let state = 0, start = 0, md = [], html = [], section = '', n = 0;
const fence = '`'.repeat(32);
text.split(/(?<=\n)/).forEach((line, i) => {
  const lineNo = i + 1, l = line.trim();
  if (l === `${fence} example`) state = 1;
  else if (state === 2 && l === fence) {
    state = 0; n++;
    tests.push({ markdown: md.join('').replaceAll('→', '\t'), html: html.join('').replaceAll('→', '\t'),
      example: n, start_line: start, end_line: lineNo, section });
    start = 0; md = []; html = [];
  } else if (l === '.') state = 2;
  else if (state === 1) { if (start === 0) start = lineNo - 1; md.push(line); }
  else if (state === 2) html.push(line);
  else if (state === 0 && /^#+ /.test(line)) section = line.replace(/^#+ /, '').trim();
});
writeFileSync(new URL('spec.json', import.meta.url), JSON.stringify(tests, null, 2) + '\n');
console.log(`${tests.length} examples from CommonMark ${TAG}`);
