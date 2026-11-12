// The model inventory (docs/proposals/IRREDUCIBLE.md M4, whose exit check is
// "every JS/C module that ships has a Lean model or a stated reason"):
// verification/models.json says, for every shipped JavaScript and C module,
// whether it is modelled in Lean (and by which model, checked by which model
// differential), exempt (and why: the kind and the reason), or pending (a
// model is still due, and what for). This lint:
//
// 1. finds every tracked file of the scope (bin/, native/, src/, library/c/;
//    .mjs, .js, .cjs, .c, .h) and fails when one has no entry, or an entry
//    names a file that does not exist;
// 2. checks each entry: a status of `modelled`, `exempt` or `pending`, a
//    reason, an exemption's kind, and for each model a Lean file and a
//    differential that exist and name the module's file (so a model cannot
//    drift from the module it claims to mirror without one of them saying
//    so); a `modelled` module has at least one model;
// 3. regenerates the table of verification/MODELS.md and fails if it is out
//    of date (`--write` rewrites it);
// 4. reports the M4 exit check: met when no module is pending.
//
//   node scripts/models.mjs            # check
//   node scripts/models.mjs --write    # also rewrite verification/MODELS.md
//   node scripts/models.mjs --json     # the counts as JSON
import { execFileSync } from 'node:child_process';
import { existsSync, readFileSync, writeFileSync } from 'node:fs';
import { basename, join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const defaultRoot = fileURLToPath(new URL('../', import.meta.url));
export const statuses = ['modelled', 'pending', 'exempt'];
/** Why a module needs no model of its own. */
export const kinds = {
  runtime: "Lean's runtime primitives on a host: their meaning is native Lean's, checked by the differential tests",
  io: 'orchestration of files, processes or the network, tested end to end',
  generated: 'generated from a description by a script',
  data: 'constants and configuration',
  deleting: 'deleted with Lasm.Fetch',
};

const tracked = (root, paths) => execFileSync('git', ['ls-files', '-z', '--cached', '--others', '--exclude-standard', '--', ...paths],
  { cwd: root, encoding: 'utf8' }).split('\0').filter(Boolean);

/** The shipped modules the inventory must cover. */
export function shippedModules(root, inventory) {
  return tracked(root, inventory.scope).filter(f => inventory.extensions.some(e => f.endsWith(e)) && existsSync(join(root, f))).sort();
}

const BEGIN = '<!-- BEGIN MODELS -->';
const END = '<!-- END MODELS -->';
const cell = s => String(s).replace(/\s+/g, ' ').replace(/\|/g, '\\|').trim();

/** The generated part of verification/MODELS.md. */
export function modelsMarkdown(inventory) {
  const entries = Object.entries(inventory.modules);
  const count = s => entries.filter(([, e]) => e.status === s).length;
  let out = '<!-- Generated from verification/models.json by `node scripts/models.mjs --write`; do not edit by hand. -->\n\n';
  out += `**${entries.length} shipped modules**: ${count('modelled')} modelled, ${count('pending')} pending, ${count('exempt')} exempt. `;
  out += `The M4 exit check (every shipped module has a Lean model or a stated reason) is ${count('pending') ? `**not met**: ${count('pending')} modules still need a model` : '**met**'}.\n`;
  for (const status of statuses) {
    const mine = entries.filter(([, e]) => e.status === status);
    if (!mine.length) continue;
    out += `\n### ${status[0].toUpperCase() + status.slice(1)} (${mine.length})\n\n`;
    out += status === 'exempt' ? '| Module | Kind | Reason |\n| --- | --- | --- |\n' : '| Module | Models (and their differentials) | Reason |\n| --- | --- | --- |\n';
    for (const [file, e] of mine) {
      const link = `[\`${file}\`](../${file})`;
      if (status === 'exempt') out += `| ${link} | ${e.kind} | ${cell(e.reason)} |\n`;
      else {
        const models = (e.models ?? []).map(m => `[${basename(m.lean)}](../${m.lean}) (${m.functions.map(f => /^\w+$/.test(f) ? `\`${f}\`` : f).join(', ')}; [${basename(m.differential)}](../${m.differential}))`).join('; ') || '—';
        out += `| ${link} | ${cell(models)} | ${cell(e.reason)} |\n`;
      }
    }
  }
  return out;
}

/** Runs every check; returns { problems, counts }. */
export function check({ root = defaultRoot, write = false } = {}) {
  const read = f => readFileSync(join(root, f), 'utf8');
  const inventory = JSON.parse(read('verification/models.json'));
  const problems = [];
  const shipped = shippedModules(root, inventory);
  for (const f of shipped) if (!inventory.modules[f]) problems.push(`${f} ships and has no entry in verification/models.json`);
  for (const [file, e] of Object.entries(inventory.modules)) {
    const at = `verification/models.json: ${file}`;
    if (!shipped.includes(file)) { problems.push(`${at}: no such shipped module`); continue; }
    if (!statuses.includes(e.status)) problems.push(`${at}: status must be one of ${statuses.join(', ')}`);
    if (!e.reason?.trim()) problems.push(`${at}: no reason`);
    if (e.status === 'exempt' && !(e.kind in kinds)) problems.push(`${at}: an exemption's kind must be one of ${Object.keys(kinds).join(', ')}`);
    if (e.status === 'exempt' && e.models?.length) problems.push(`${at}: an exempt module has no models (make it modelled or pending)`);
    if (e.status === 'modelled' && !e.models?.length) problems.push(`${at}: a modelled module names its models`);
    for (const m of e.models ?? []) {
      if (!m.functions?.length) problems.push(`${at}: a model names the functions it mirrors`);
      for (const key of ['lean', 'differential']) {
        if (!m[key] || !existsSync(join(root, m[key]))) { problems.push(`${at}: ${key} ${m[key]} does not exist`); continue; }
        if (!read(m[key]).includes(basename(file))) problems.push(`${at}: ${m[key]} does not name ${basename(file)}`);
      }
    }
  }
  const sorted = Object.keys(inventory.modules);
  if (sorted.join('\n') !== [...sorted].sort().join('\n')) problems.push('verification/models.json: modules out of order (sort them by path)');
  const document = 'verification/MODELS.md';
  const text = existsSync(join(root, document)) ? read(document) : '';
  const i = text.indexOf(BEGIN), j = text.indexOf(END);
  if (i < 0 || j < 0) problems.push(`${document} has no ${BEGIN} … ${END} block`);
  else {
    const updated = text.slice(0, i + BEGIN.length) + '\n' + modelsMarkdown(inventory) + text.slice(j);
    if (updated !== text) {
      if (write) writeFileSync(join(root, document), updated);
      else problems.push(`${document} is out of date with verification/models.json (run \`node scripts/models.mjs --write\`)`);
    }
  }
  const counts = Object.fromEntries(statuses.map(s => [s, Object.values(inventory.modules).filter(e => e.status === s).length]));
  return { problems, counts: { modules: shipped.length, ...counts, exitMet: counts.pending === 0 } };
}

if (process.argv[1] && resolve(process.argv[1]) === fileURLToPath(import.meta.url)) {
  const { problems, counts } = check({ write: process.argv.includes('--write') });
  if (process.argv.includes('--json')) console.log(JSON.stringify(counts, null, 2));
  else {
    for (const p of problems) console.error(`error: ${p}`);
    console.log(`${counts.modules} shipped modules: ${counts.modelled} modelled, ${counts.pending} pending, ${counts.exempt} exempt; M4 exit check ${counts.exitMet ? 'met' : 'not met'}.`);
  }
  if (problems.length) process.exitCode = 1;
}
