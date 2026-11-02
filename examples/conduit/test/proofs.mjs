// Checks Conduit's proofs and keeps their documents in sync:
//
// 1. builds the Conduit and Proofs libraries (every theorem in Proofs/) with
//    Lean 4.35.0, then runs test/Axioms.lean, which fails unless every
//    proposition of Proofs/Spec.lean has its theorem (of exactly that type)
//    and every theorem uses only propext, Classical.choice and Quot.sound
//    (no sorry);
// 2. regenerates the proposition tables of PROOFS.md from Proofs/Spec.lean
//    (their doc comments, as Lean recorded them) and fails if PROOFS.md is
//    out of date;
// 3. checks SPEC.md: every `Spec.x` it names is a proposition that was just
//    proved, and every proposition is named there (as `Spec.x`, in backticks) (each one maps to a
//    requirement);
// 4. checks the counts stated in the READMEs, llms.txt and SPEC.md: "N proved
//    propositions (M theorems)", N the propositions of Spec.lean and M every
//    theorem in Proofs/ (docs/DECISIONS.md, 2026-10-31 and 2026-11-02).
//
//   npm run proofs              # check
//   npm run proofs -- --write   # also rewrite PROOFS.md and the stated counts
//
// Uses Lasm's own Lean (the one `npm run build` downloads, from the tool
// cache); with elan, `lake build && lake env lean test/Axioms.lean` does step 1.
import { execFileSync } from 'node:child_process';
import { readFileSync, writeFileSync, mkdtempSync, existsSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { dirname, join } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('..', import.meta.url));
const repo = join(root, '..', '..');
const write = process.argv.includes('--write');
const docsOnly = process.argv.includes('--docs-only');
const jsonPath = process.env.CONDUIT_PROOFS_JSON ?? join(mkdtempSync(join(tmpdir(), 'conduit-proofs-')), 'proofs.json');

function lean() {
  let lake;
  return (async () => {
    try {
      const { provisionLean } = await import('@lasm/cli/src/managed-lean.mjs');
      const l = await provisionLean(join(root, 'Conduit.lean'), { modules: 'extended',
        progress: ({ stage }) => stage && console.error(`[lean] ${stage}`) });
      lake = l.lake;
    } catch (error) {
      console.error(`Lasm's Lean is not available (${error.message}); using lake from PATH.`);
      lake = 'lake';
    }
    const env = { ...process.env, CONDUIT_PROOFS_JSON: jsonPath };
    for (const key of Object.keys(env)) if (/^(?:LEAN_|LAKE_|ELAN_)/.test(key)) delete env[key];
    env.PATH = [dirname(lake), env.PATH].join(process.platform === 'win32' ? ';' : ':');
    const run = args => execFileSync(lake, args, { cwd: root, env, encoding: 'utf8', stdio: ['ignore', 'pipe', 'pipe'],
      maxBuffer: 64 * 1024 * 1024 });
    process.stdout.write(run(['build', 'Conduit', 'Proofs']));
    const out = run(['env', 'lean', 'test/Axioms.lean']);
    process.stdout.write(out);
    if (/sorry/.test(out)) throw new Error('a proof uses sorry');
  })();
}

/** The sections of Spec.lean (`/-! ## … -/`) and the line each starts on. */
function sections() {
  const lines = readFileSync(join(root, 'Proofs', 'Spec.lean'), 'utf8').split('\n');
  const found = [];
  lines.forEach((line, i) => {
    const m = /^\/-! ## (.+?) -\/$/.exec(line.trim());
    if (m) found.push({ title: m[1], line: i + 1 });
  });
  return found;
}

const cell = s => s.replace(/\s+/g, ' ').replace(/\|/g, '\\|').trim();

/** The generated part of PROOFS.md. */
function generated(data) {
  const secs = sections().filter(s => s.title !== 'Vocabulary');
  const props = [...data.propositions].sort((a, b) => a.line - b.line);
  let out = `<!-- Generated from Proofs/Spec.lean by \`npm run proofs -- --write\`; do not edit by hand. -->\n\n`;
  out += `**${props.length} proved propositions (${data.theorems} theorems)**: each proposition below is proved by the `;
  out += `theorem of the same name in \`Proofs/\`, and the other ${data.theorems - props.length} theorems are the lemmas `;
  out += `their proofs are built from. Every one uses only Lean's standard axioms.\n`;
  secs.forEach((sec, i) => {
    const next = secs[i + 1]?.line ?? Infinity;
    const inSec = props.filter(p => p.line > sec.line && p.line < next);
    if (inSec.length === 0) return;
    out += `\n### ${sec.title}\n\n| Proposition | In plain English |\n| --- | --- |\n`;
    for (const p of inSec) out += `| [\`${p.name}\`](Proofs/Spec.lean#L${p.line}) | ${cell(p.doc)} |\n`;
  });
  return out;
}

const BEGIN = '<!-- BEGIN PROPOSITIONS -->';
const END = '<!-- END PROPOSITIONS -->';
const problems = [];

function syncProofsMd(data) {
  const path = join(root, 'PROOFS.md');
  const text = readFileSync(path, 'utf8');
  const i = text.indexOf(BEGIN), j = text.indexOf(END);
  if (i < 0 || j < 0) { problems.push(`PROOFS.md has no ${BEGIN} … ${END} block`); return; }
  const updated = text.slice(0, i + BEGIN.length) + '\n' + generated(data) + text.slice(j);
  if (updated !== text) {
    if (write) writeFileSync(path, updated);
    else problems.push('PROOFS.md is out of date with Proofs/Spec.lean (run `npm run proofs -- --write`)');
  }
}

function checkSpecMd(data) {
  const text = readFileSync(join(root, 'SPEC.md'), 'utf8');
  const names = new Set(data.propositions.map(p => p.name));
  const named = new Set([...text.matchAll(/`Spec\.([A-Za-z_][A-Za-z0-9_]*)`/g)].map(m => m[1]));
  for (const n of named) if (!names.has(n)) problems.push(`SPEC.md names Spec.${n}, which is not a proved proposition`);
  for (const n of names) if (!named.has(n)) problems.push(`Spec.${n} is proved but SPEC.md maps no requirement to it`);
}

/** The places that state how many propositions and theorems Conduit has
(PROOFS.md's count is generated with its tables). */
const countFiles = ['README.md', 'examples/README.md', 'llms.txt', 'examples/conduit/README.md', 'examples/conduit/SPEC.md'];
function syncCounts(data) {
  const p = data.propositions.length, n = data.theorems;
  for (const file of countFiles) {
    const path = join(repo, file);
    if (!existsSync(path)) continue;
    const text = readFileSync(path, 'utf8');
    const updated = text
      // "50 proved propositions (294 theorems)", and its heading's anchor.
      .replace(/\b\d+( proved)? propositions \(\d+ theorems\)/g, (_, pr) => `${p}${pr ?? ''} propositions (${n} theorems)`)
      .replace(/-with-\d+-proved-propositions-\d+-theorems\b/g, `-with-${p}-proved-propositions-${n}-theorems`)
      .replace(/\b\d+ propositions of `Proofs\/Spec\.lean`/g, `${p} propositions of \`Proofs/Spec.lean\``);
    if (updated !== text) {
      if (write) writeFileSync(path, updated);
      else problems.push(`${file} states counts other than ${p} propositions and ${n} theorems (run \`npm run proofs -- --write\`)`);
    }
    // A count in the old form ("294 theorems", "294 proved theorems") is stale.
    for (const m of updated.matchAll(/\b(\d+)( proved)? theorems\b/g)) {
      const before = updated.slice(Math.max(0, m.index - 40), m.index);
      if (!/propositions \($/.test(before) && file !== 'examples/conduit/SPEC.md') {
        problems.push(`${file} states "${m[0]}", not "${p} proved propositions (${n} theorems)"`);
      }
    }
  }
}

const started = Date.now();
try {
  if (!docsOnly) await lean();
  const data = JSON.parse(readFileSync(jsonPath, 'utf8'));
  syncProofsMd(data);
  checkSpecMd(data);
  syncCounts(data);
  if (problems.length) {
    for (const p of problems) console.error(`error: ${p}`);
    process.exitCode = 1;
  } else {
    console.log(`\n${data.propositions.length} propositions and ${data.theorems} theorems checked; PROOFS.md, SPEC.md and the stated counts agree (${((Date.now() - started) / 1000).toFixed(0)} s).`);
  }
} catch (error) {
  process.stdout.write(error.stdout ?? '');
  process.stderr.write(error.stderr ?? error.message);
  process.exitCode = 1;
}
