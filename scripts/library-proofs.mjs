// Checks the proofs of Lasm's own library and keeps library/PROOFS.md in sync
// (docs/DECISIONS.md, 2026-11-07), as examples/conduit/test/proofs.mjs does
// for Conduit:
//
// 1. compiles the proof modules (library/Lasm/UI/Proofs*, Lasm/JS/Proofs*, Lasm/Serverless/Proofs*
//    (the model of src/serverless/), and each library's
//    Spec.lean, Theorems.lean and Candidates.lean (the propositions tested,
//    not yet proved: they must elaborate; scripts/propositions.mjs checks their
//    tests), and verification/cli's Interface.lean and Candidates.lean (the
//    propositions about the CLI's JavaScript) against Lasm's compiled library with the
//    managed Lean 4.35.0, then runs test/library-proofs/Axioms.lean, which
//    fails unless every proposition of a Spec.lean has its theorem (of
//    exactly that type) and every theorem uses only propext, Classical.choice
//    and Quot.sound (no sorry);
// 2. regenerates the proposition tables of library/PROOFS.md from the Spec
//    files (their doc comments, as Lean recorded them) and fails if
//    PROOFS.md is out of date.
//
// The proof modules are not part of the shipped library (src/lasm-library.mjs
// libraryModules): no program imports them, so they are not compiled into the
// Lean prefix or library/prebuilt, and changing them never makes it stale.
//
//   node scripts/library-proofs.mjs              # check
//   node scripts/library-proofs.mjs --write      # also rewrite library/PROOFS.md
//   LIBRARY_PROOFS_JSON=f node scripts/library-proofs.mjs --docs-only [--write]
//                                                # only the documents, from a saved check
import { execFileSync } from 'node:child_process';
import { cpSync, existsSync, mkdirSync, mkdtempSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { dirname, join } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('../', import.meta.url));
const library = join(root, 'library');
const write = process.argv.includes('--write');
const docsOnly = process.argv.includes('--docs-only');
const work = mkdtempSync(join(tmpdir(), 'lasm-library-proofs-'));
const jsonPath = process.env.LIBRARY_PROOFS_JSON ?? join(work, 'proofs.json');

// The proof modules, in import order, and the libraries whose Spec.lean
// PROOFS.md lists (in that order).
const proofModules = ['Lasm.UI.Proofs.Basic', 'Lasm.UI.Proofs.Lists', 'Lasm.UI.Proofs.Children',
  'Lasm.UI.Proofs.TwoEnded', 'Lasm.UI.Proofs.Diff', 'Lasm.UI.Proofs', 'Lasm.UI.Proofs.Decode', 'Lasm.UI.Proofs.Wire', 'Lasm.UI.Spec', 'Lasm.UI.Theorems',
  'Lasm.UI.Candidates', 'Lasm.RPC.Spec', 'Lasm.RPC.Theorems', 'Lasm.RPC.Candidates', 'Lasm.KV.Spec', 'Lasm.KV.Theorems',
  'Lasm.Fetch.Spec', 'Lasm.Fetch.Theorems', 'Lasm.Fetch.Candidates',
  'Lasm.JS.Proofs.Wire', 'Lasm.JS.Spec', 'Lasm.JS.Theorems',
  'Lasm.Serverless.Proofs.Model', 'Lasm.Serverless.Proofs.Mapping', 'Lasm.Serverless.Spec', 'Lasm.Serverless.Theorems',
  'Lasm.Serverless.Candidates'];
// The propositions about the CLI's JavaScript (verification/cli): the Lean
// models of its modules (Lasm/Cli/Model/, checked against the JavaScript by
// test/models/cli-differential.mjs), the candidates (they must elaborate;
// scripts/propositions.mjs checks their tests) and the proved propositions
// (Spec.lean, each with its theorem in Theorems.lean, as a library's).
const cliModules = ['Lasm.Cli.Model.Zip', 'Lasm.Cli.Model.CliArguments', 'Lasm.Cli.Model.Dev', 'Lasm.Cli.Model.EdgeInitializers', 'Lasm.Cli.Model.BuiltinModules', 'Lasm.Cli.Model.NodeHost', 'Lasm.Cli.Model.Platform', 'Lasm.Cli.Model.WasiComponent',
  'Lasm.Cli.Interface', 'Lasm.Cli.Candidates', 'Lasm.Cli.Spec', 'Lasm.Cli.Theorems'];
const cliRoot = join(root, 'verification', 'cli');
const libraries = ['Lasm.UI', 'Lasm.RPC', 'Lasm.KV', 'Lasm.Fetch', 'Lasm.JS', 'Lasm.Serverless'];
const sourceOf = (module, base = library) => join(base, ...module.split('.')) + '.lean';

async function check() {
  const { provisionLean } = await import('../src/managed-lean.mjs');
  writeFileSync(join(work, 'Main.lean'), 'import Lean\ndef main : IO Unit := pure ()\n');
  writeFileSync(join(work, 'lean-toolchain'), 'leanprover/lean4:v4.35.0\n');
  const lean = await provisionLean(join(work, 'Main.lean'), { modules: 'extended',
    progress: ({ stage }) => stage && console.error(`[lean] ${stage}`) });
  const env = { ...process.env, LIBRARY_PROOFS_JSON: jsonPath, LEAN_NUM_THREADS: '2' };
  for (const key of Object.keys(env)) if (/^(?:LEAN_(?!NUM_THREADS)|LAKE_|ELAN_)/.test(key)) delete env[key];
  // Lean takes a module's package (Lasm) from the first search path that has
  // it, so the library's compiled modules go beside the proofs.
  const out = join(work, 'out');
  cpSync(join(lean.prefix, 'lib', 'lean', 'Lasm'), join(out, 'Lasm'), { recursive: true });
  env.LEAN_PATH = [out, join(lean.prefix, 'lib', 'lean')].join(process.platform === 'win32' ? ';' : ':');
  const run = args => execFileSync(lean.lean, args, { cwd: root, env, encoding: 'utf8', maxBuffer: 64 * 1024 * 1024,
    stdio: ['ignore', 'pipe', 'pipe'], timeout: 900_000 });
  for (const [module, base] of [...proofModules.map(m => [m, library]), ...cliModules.map(m => [m, cliRoot])]) {
    const olean = join(out, ...module.split('.')) + '.olean';
    mkdirSync(dirname(olean), { recursive: true });
    const started = Date.now();
    const log = run(['-R', base, '-o', olean, sourceOf(module, base)]);
    process.stdout.write(log);
    if (/declaration uses `sorry`|error:/.test(log)) throw new Error(`${module}: sorry or error`);
    console.log(`ok   ${module} (${((Date.now() - started) / 1000).toFixed(1)} s)`);
  }
  const log = run(['test/library-proofs/Axioms.lean']);
  process.stdout.write(log);
  if (/sorry/.test(log)) throw new Error('a proof uses sorry');
}

/** The sections (`/-! ## … -/`) of a Spec file and the line each starts on. */
function sections(file) {
  const found = [];
  readFileSync(file, 'utf8').split('\n').forEach((line, i) => {
    const m = /^\/-! ## (.+?) -\/$/.exec(line.trim());
    if (m) found.push({ title: m[1], line: i + 1 });
  });
  return found;
}

const cell = s => s.replace(/\s+/g, ' ').replace(/\|/g, '\\|').trim();

/** The generated part of PROOFS.md (`libs`, from `base`), or of verification/cli/README.md. */
function generated(data, libs = libraries, base = library) {
  const props = data.propositions.filter(p => libs.includes(p.library));
  // The theorems of these libraries: the CLI's (Lasm.Cli.…) or all the others.
  const cli = libs.includes('Lasm.Cli');
  const theorems = data.theoremNames.filter(n => n.startsWith('Lasm.Cli.') === cli).length;
  let out = `<!-- Generated from the Spec.lean files by \`node scripts/library-proofs.mjs --write\`; do not edit by hand. -->\n\n`;
  out += `**${props.length} proved propositions (${theorems} theorems)**: each proposition below is proved by the `;
  out += `theorem of the same name in its library's \`Theorems.lean\`, and the other theorems are the lemmas their `;
  out += `proofs are built from. Every one uses only Lean's standard axioms.\n`;
  for (const lib of libs) {
    const mine = props.filter(p => p.library === lib).sort((a, b) => a.line - b.line);
    if (mine.length === 0) { problems.push(`${lib} has no propositions`); continue; }
    const module = `${lib}.Spec`;
    const path = module.split('.').join('/') + '.lean';
    out += `\n## ${lib} (${mine.length})\n`;
    const secs = sections(join(base, path));
    secs.forEach((sec, i) => {
      const next = secs[i + 1]?.line ?? Infinity;
      const inSec = mine.filter(p => p.line > sec.line && p.line < next);
      if (inSec.length === 0) return;
      out += `\n### ${sec.title}\n\n| Proposition | In plain English |\n| --- | --- |\n`;
      for (const p of inSec) out += `| [\`${p.name}\`](${path}#L${p.line}) | ${cell(p.doc)} |\n`;
    });
  }
  return out;
}

const BEGIN = '<!-- BEGIN PROPOSITIONS -->';
const END = '<!-- END PROPOSITIONS -->';
const problems = [];

function syncProofsMd(data) {
  for (const [document, text] of [['library/PROOFS.md', generated(data)],
    ['verification/cli/README.md', generated(data, ['Lasm.Cli'], cliRoot)]]) {
    const path = join(root, document);
    const old = readFileSync(path, 'utf8');
    const i = old.indexOf(BEGIN), j = old.indexOf(END);
    if (i < 0 || j < 0) { problems.push(`${document} has no ${BEGIN} … ${END} block`); continue; }
    const updated = old.slice(0, i + BEGIN.length) + '\n' + text + old.slice(j);
    if (updated !== old) {
      if (write) writeFileSync(path, updated);
      else problems.push(`${document} is out of date with the Spec.lean files (run \`node scripts/library-proofs.mjs --write\`)`);
    }
  }
}

const started = Date.now();
try {
  if (!docsOnly) await check();
  if (!existsSync(jsonPath)) throw new Error(`No proof check results at ${jsonPath}`);
  const data = JSON.parse(readFileSync(jsonPath, 'utf8'));
  syncProofsMd(data);
  if (problems.length) {
    for (const p of problems) console.error(`error: ${p}`);
    process.exitCode = 1;
  } else {
    console.log(`\n${data.propositions.length} propositions and ${data.theorems} theorems checked; library/PROOFS.md agrees (${((Date.now() - started) / 1000).toFixed(0)} s).`);
  }
} catch (error) {
  process.stdout.write(error.stdout ?? '');
  process.stderr.write(error.stderr ?? error.message + '\n');
  process.exitCode = 1;
} finally {
  rmSync(work, { recursive: true, force: true });
}
