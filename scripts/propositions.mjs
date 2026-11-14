// The proposition lint (docs/TESTING_STRATEGY.md §4): every test that names a
// Lean proposition names one that exists and states it verbatim, and every
// candidate names a test that exists and cites it.
//
// 1. Reads the propositions: each `def name … : Prop :=` of a library's or an
//    app's Spec.lean (proved) or Candidates.lean (tested, not yet proved), or
//    of a Candidates.lean under verification/ (propositions about the CLI's
//    JavaScript, verification/cli), with its namespace, statement and doc
//    comment.
// 2. Reads every citation in the tests, scripts and sources: a comment line
//    `Proposition: Lasm.<Lib>.Spec.<name>` (or `Candidates.<name>`), followed
//    by the statement, verbatim, on comment lines indented by at least two
//    more spaces. The name must exist, and the statement must be the
//    definition's (whitespace aside).
// 3. Every candidate's doc comment has a `Tested by:` line naming files that
//    exist, and each of them cites the candidate.
// 4. Regenerates the candidates list of library/PROOFS.md from the library's
//    Candidates.lean files, and that of verification/<package>/README.md from
//    the package's, and fails if one is out of date.
// 5. Counts the fuzz oracles (test/fuzz) and the JavaScript properties
//    (`forAll` in test/) that name a proposition: exit bar 7 of
//    docs/TESTING_STRATEGY.md needs all of them. An unnamed one is reported,
//    not an error, until the bar is met.
//
//   node scripts/propositions.mjs            # check
//   node scripts/propositions.mjs --write    # also rewrite the generated candidates lists
//   node scripts/propositions.mjs --json     # the inventory as JSON (for the evidence page)
import { execFileSync } from 'node:child_process';
import { existsSync, readFileSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const defaultRoot = fileURLToPath(new URL('../', import.meta.url));
const normalize = s => s.replace(/\s+/g, ' ').trim();

/** The propositions of one Spec.lean or Candidates.lean: [{ name, short, statement, doc, line }]. */
export function readPropositions(text, file) {
  const lines = text.split('\n');
  const namespace = lines.map(l => /^namespace\s+(\S+)/.exec(l)?.[1]).find(Boolean);
  if (!namespace) return [];
  const out = [];
  lines.forEach((line, i) => {
    const m = /^def\s+(\w+)\b.*:\s*Prop\s*:=\s*(.*)$/.exec(line);
    if (!m) return;
    const body = [m[2]];
    for (let j = i + 1; j < lines.length && /^\s+\S/.test(lines[j]); j++) body.push(lines[j]);
    // The doc comment ends on the line before the definition.
    let doc = '';
    if (/-\/\s*$/.test(lines[i - 1] ?? '')) {
      let k = i - 1;
      while (k >= 0 && !lines[k].trimStart().startsWith('/--')) k--;
      if (k >= 0) doc = lines.slice(k, i).join('\n').replace(/^\s*\/--\s?/, '').replace(/\s*-\/\s*$/, '');
    }
    out.push({ name: `${namespace}.${m[1]}`, short: m[1], statement: normalize(body.join(' ')), doc, file, line: i + 1 });
  });
  return out;
}

/** The `Proposition:` citations of a file: [{ name, statement, line }]. */
export function readCitations(text) {
  const lines = text.split('\n');
  const out = [];
  lines.forEach((line, i) => {
    const m = /^(\s*(?:\/\/|--|#|\*)\s*)Proposition:\s*(\S+)\s*$/.exec(line);
    if (!m) return;
    const marker = m[1].trim();
    const statement = [];
    for (let j = i + 1; j < lines.length; j++) {
      const s = /^\s*(\S+)( {2,}|\t)(.*)$/.exec(lines[j]);
      if (!s || s[1] !== marker) break;
      statement.push(s[3]);
    }
    out.push({ name: m[2], statement: normalize(statement.join(' ')), line: i + 1 });
  });
  return out;
}

/** The paths of a candidate's `Tested by:` line. */
export function testedBy(doc) {
  const m = /Tested by:\s*([\s\S]*)$/.exec(doc);
  if (!m) return [];
  return [...m[1].matchAll(/[\w.@-]+(?:\/[\w.@-]+)+/g)].map(x => x[0].replace(/[.,;]+$/, ''));
}

const tracked = (root, ...paths) => execFileSync('git', ['ls-files', '-z', '--cached', '--others', '--exclude-standard', '--', ...paths], { cwd: root, encoding: 'utf8' })
  .split('\0').filter(Boolean);

/** Where propositions live: Spec.lean and Candidates.lean of the library and the apps, and of verification/. */
export function propositionFiles(root) {
  return tracked(root, 'library/Lasm', 'examples', 'verification').filter(f =>
    /^library\/Lasm\/[^/]+\/(?:Spec|Candidates)\.lean$/.test(f) || /^examples\/[^/]+\/Proofs\/(?:Spec|Candidates)\.lean$/.test(f)
    || /^verification\/[^/]+\/(?:[^/]+\/)*(?:Spec|Candidates)\.lean$/.test(f));
}

/** Files that may cite propositions: tests, scripts, sources and Lean code outside the Spec files. */
export function citingFiles(root) {
  const self = new Set(['scripts/propositions.mjs', 'test/propositions.test.mjs']);
  return tracked(root, 'test', 'scripts', 'src', 'examples', 'library', 'verification')
    .filter(f => /\.(?:mjs|js|cjs|ts|lean|c|h)$/.test(f) && !self.has(f) && !f.includes('/prebuilt/') && !f.includes('node_modules/'));
}

/** The fuzz oracles and JavaScript properties, and whether each names a proposition. */
export function inventory(root, read) {
  // This lint's own test writes `forAll` inside its fixtures; it has no property.
  const fixtures = new Set(['test/propositions.test.mjs']);
  const oracles = [];
  for (const f of tracked(root, 'test/fuzz/targets').filter(f => f.endsWith('.mjs')))
    oracles.push({ id: f.replace(/^test\/fuzz\/targets\/|\.mjs$/g, ''), file: f, named: readCitations(read(f)).length > 0 });
  const native = JSON.parse(read('test/fuzz/native/targets.json'));
  const lean = read('test/fuzz/native/LasmFuzz.lean');
  const entries = [...lean.matchAll(/@\[export (\w+)\]/g)].map(m => ({ entry: m[1], at: m.index }));
  for (const [id, target] of Object.entries(native)) {
    if (target.kind === 'lean') {
      const i = entries.findIndex(e => e.entry === target.entry);
      const start = i < 0 ? 0 : (i > 0 ? entries[i - 1].at : 0);
      const end = i < 0 ? 0 : (entries[i + 1]?.at ?? lean.length);
      // The entry's doc comment comes before its @[export]: from the previous entry on.
      oracles.push({ id, file: 'test/fuzz/native/LasmFuzz.lean', named: readCitations(lean.slice(start, end)).length > 0 });
    } else {
      const file = `test/fuzz/native/${target.driver ?? 'cgi_driver.c'}`;
      oracles.push({ id, file, named: existsSync(join(root, file)) && readCitations(read(file)).length > 0 });
    }
  }
  const properties = [];
  for (const f of tracked(root, 'test').filter(f => f.endsWith('.test.mjs') && !fixtures.has(f))) {
    const lines = read(f).split('\n');
    lines.forEach((line, i) => {
      if (!/\bforAll\(/.test(line) || /^\s*(?:import|export)\b/.test(line)) return;
      let t = i;
      while (t > 0 && !/^\s*test\(/.test(lines[t])) t--;
      let c = t - 1;
      const comments = [];
      while (c >= 0 && /^\s*\/\//.test(lines[c])) comments.unshift(lines[c--]);
      const title = /test\(\s*(['"`])(.*?)\1/.exec(lines[t])?.[2] ?? `line ${i + 1}`;
      properties.push({ id: `${f}: ${title}`, file: f, line: i + 1, named: readCitations(comments.join('\n')).length > 0 });
    });
  }
  // One test may call forAll more than once: count each test once.
  const seen = new Set();
  return { oracles, properties: properties.filter(p => !seen.has(p.id) && seen.add(p.id)) };
}

const BEGIN = '<!-- BEGIN CANDIDATES -->';
const END = '<!-- END CANDIDATES -->';
const cell = s => normalize(s).replace(/\|/g, '\\|');

/** The generated candidates list of a document in `base` (library/PROOFS.md, verification/<package>/README.md). */
export function candidatesMarkdown(candidates, base = 'library') {
  const up = '../'.repeat(base.split('/').length);
  let out = `<!-- Generated from the Candidates.lean files by \`node scripts/propositions.mjs --write\`; do not edit by hand. -->\n\n`;
  out += `**${candidates.length} candidates**, each a \`def … : Prop\` in a \`Candidates.lean\`, checked on generated inputs by the test its \`Tested by:\` line names (which cites it with a \`Proposition:\` line), not yet proved.\n`;
  const libraries = [...new Set(candidates.map(c => c.name.split('.').slice(0, -2).join('.')))];
  for (const lib of libraries) {
    const mine = candidates.filter(c => c.name.startsWith(lib + '.Candidates.'));
    const path = mine[0].file.slice(base.length + 1);
    out += `\n### ${lib} (${mine.length})\n\n| Candidate | In plain English | Tested by |\n| --- | --- | --- |\n`;
    for (const c of mine) {
      const english = c.doc.replace(/Tested by:[\s\S]*$/, '');
      out += `| [\`${c.short}\`](${path}#L${c.line}) | ${cell(english)} | ${testedBy(c.doc).map(p => `[${p}](${up}${p})`).join(', ')} |\n`;
    }
  }
  return out;
}

/** Runs every check; returns { problems, propositions, citations, inventory }. */
export function check({ root = defaultRoot, write = false } = {}) {
  const read = f => readFileSync(join(root, f), 'utf8');
  const problems = [];
  const propositions = propositionFiles(root).flatMap(f => readPropositions(read(f), f));
  const byName = new Map();
  for (const p of propositions) {
    if (byName.has(p.name)) problems.push(`${p.file}:${p.line}: ${p.name} is defined twice`);
    byName.set(p.name, p);
  }
  const citations = [];
  for (const f of citingFiles(root)) {
    for (const c of readCitations(read(f))) {
      citations.push({ ...c, file: f });
      const p = byName.get(c.name);
      if (!p) { problems.push(`${f}:${c.line}: Proposition: ${c.name} names no Spec.lean or Candidates.lean definition`); continue; }
      if (!c.statement) problems.push(`${f}:${c.line}: Proposition: ${c.name} is not followed by its statement`);
      else if (c.statement !== p.statement)
        problems.push(`${f}:${c.line}: the statement of ${c.name} differs from ${p.file}:${p.line}\n  cited:   ${c.statement}\n  defined: ${p.statement}`);
    }
  }
  const candidates = propositions.filter(p => /\.Candidates\.[^.]+$/.test(p.name));
  for (const c of candidates) {
    const paths = testedBy(c.doc);
    if (paths.length === 0) problems.push(`${c.file}:${c.line}: candidate ${c.name} has no \`Tested by:\` line`);
    for (const path of paths) {
      if (!existsSync(join(root, path))) problems.push(`${c.file}:${c.line}: ${c.name} is tested by ${path}, which does not exist`);
      else if (!citations.some(x => x.file === path && x.name === c.name))
        problems.push(`${c.file}:${c.line}: ${c.name} is tested by ${path}, which does not cite it (a \`Proposition: ${c.name}\` line)`);
    }
  }
  // library/PROOFS.md lists the library's candidates; verification/<package>/README.md its package's.
  const documents = new Map([['library', 'library/PROOFS.md']]);
  for (const c of candidates) {
    const m = /^verification\/[^/]+/.exec(c.file);
    if (m) documents.set(m[0], `${m[0]}/README.md`);
  }
  for (const [base, document] of documents) {
    const path = join(root, document);
    const text = existsSync(path) ? readFileSync(path, 'utf8') : '';
    const i = text.indexOf(BEGIN), j = text.indexOf(END);
    if (i < 0 || j < 0) { problems.push(`${document} has no ${BEGIN} … ${END} block`); continue; }
    const mine = candidates.filter(c => c.file.startsWith(base + '/'));
    const updated = text.slice(0, i + BEGIN.length) + '\n' + candidatesMarkdown(mine, base) + text.slice(j);
    if (updated !== text) {
      if (write) writeFileSync(path, updated);
      else problems.push(`${document}'s candidates are out of date with the Candidates.lean files (run \`node scripts/propositions.mjs --write\`)`);
    }
  }
  return { problems, propositions, citations, inventory: inventory(root, read) };
}

/** The numbers exit bar 7 is measured by. */
export function summary(result) {
  const { propositions, citations, inventory: { oracles, properties } } = result;
  const count = list => ({ named: list.filter(x => x.named).length, total: list.length, unnamed: list.filter(x => !x.named).map(x => x.id) });
  return {
    proved: propositions.filter(p => /\.Spec\.[^.]+$/.test(p.name)).length,
    candidates: propositions.filter(p => /\.Candidates\.[^.]+$/.test(p.name)).length,
    citations: citations.length,
    oracles: count(oracles),
    properties: count(properties),
    problems: result.problems.length,
  };
}

if (process.argv[1] && resolve(process.argv[1]) === fileURLToPath(import.meta.url)) {
  const result = check({ write: process.argv.includes('--write') });
  const s = summary(result);
  if (process.argv.includes('--json')) console.log(JSON.stringify(s, null, 2));
  else {
    for (const p of result.problems) console.error(`error: ${p}`);
    console.log(`${s.proved} proved propositions, ${s.candidates} candidates, ${s.citations} citations checked.`);
    console.log(`Fuzz oracles naming a proposition: ${s.oracles.named} of ${s.oracles.total}${s.oracles.unnamed.length ? ` (not yet: ${s.oracles.unnamed.join(', ')})` : ''}.`);
    console.log(`JavaScript properties naming a proposition: ${s.properties.named} of ${s.properties.total}.`);
  }
  if (result.problems.length) process.exitCode = 1;
}
