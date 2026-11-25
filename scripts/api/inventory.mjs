// The API inventory guard (ROADMAP.md, Stage 0, milestone 0.1): lists Lasm's
// public surfaces from the source and reports every one that
// docs/API_DECISIONS.md does not mention, so the inventory stays complete
// while the Stage 0 streams change things. test/api-inventory.test.mjs runs it
// in the unit job.
//
//   node scripts/api/inventory.mjs           lists the surfaces and what is missing
//   node scripts/api/inventory.mjs --json    the same as JSON
//
// What counts as "mentioned" (all in backticks, as the inventory writes code):
// - a Lean module or namespace `Lasm.A.B`: the exact name, or a family glob
//   `Lasm.A.*` that covers it (generated bindings are recorded by their
//   mapping rules and source, not member by member);
// - a CLI command: `lasm <command>`; a flag: `--flag` (or `-x`);
// - a build, dev, package or --deploy target, or a template: `name`;
// - an environment variable: `LASM_NAME`;
// - a builtin JavaScript module: `lasm:name`;
// - an npm entry point: `@lasm/cli`, `@lasm/cli/<subpath>`, `@lasm/create`, and each bin name.
// Entry ids follow the brief's scheme: A1–A56 (seeded), sub-ids A9.1, and
// milestone-prefixed ids 0.1-1 … 0.7-n with sub-ids 0.4-17.1. An entry has a
// table row; a detail heading (`### 0.4-17.1 …`) may define a sub-id of an
// entry without a row of its own, and those are counted and checked too.
import { readdirSync, readFileSync, statSync } from 'node:fs';
import { join, relative, sep } from 'node:path';
import { fileURLToPath, pathToFileURL } from 'node:url';

export const root = fileURLToPath(new URL('../../', import.meta.url));
export const decisionsPath = join(root, 'docs/API_DECISIONS.md');

/** The inventory: docs/API_DECISIONS.md (the rule, the format, the contents)
 * followed by every per-milestone file docs/api/decisions/*.md, which only
 * the owning milestone's stream edits so that parallel PRs do not conflict. */
export function readDecisions(base = root) {
  const dir = join(base, 'docs/api/decisions');
  let files = [];
  try { files = readdirSync(dir).filter(f => f.endsWith('.md')).sort(); } catch {}
  return [readFileSync(join(base, 'docs/API_DECISIONS.md'), 'utf8'), ...files.map(f => readFileSync(join(dir, f), 'utf8'))].join('\n');
}

function walk(directory, keep) {
  const out = [];
  for (const entry of readdirSync(directory, { withFileTypes: true }).sort((a, b) => a.name < b.name ? -1 : 1)) {
    const path = join(directory, entry.name);
    if (entry.isDirectory()) out.push(...walk(path, keep));
    else if (keep(entry.name)) out.push(path);
  }
  return out;
}

/** Every Lean module under library/Lasm, and every `namespace Lasm…` it opens. */
export function leanSurfaces(base = root) {
  const library = join(base, 'library');
  const files = walk(join(library, 'Lasm'), name => name.endsWith('.lean'));
  const modules = files.map(file => relative(library, file).slice(0, -'.lean'.length).split(sep).join('.'));
  const namespaces = new Set();
  for (const file of files) {
    const text = readFileSync(file, 'utf8');
    for (const match of text.matchAll(/^\s*namespace\s+(Lasm(?:\.[A-Za-z_][A-Za-z0-9_']*)*)\s*$/gm)) namespaces.add(match[1]);
  }
  return { modules, namespaces: [...namespaces].sort() };
}

/** The body of `export function name(` up to its closing brace at column 0. */
function functionBody(text, name) {
  const start = text.indexOf(`export function ${name}(`);
  if (start < 0) throw new Error(`scripts/api/inventory.mjs: ${name} not found; update the inventory guard`);
  const end = text.indexOf('\n}\n', start);
  return text.slice(start, end < 0 ? undefined : end);
}

/** Flags a parser accepts: '--x' and '-x' literals, and --(a|b) / (?:--a|-b) regex groups. */
export function flagsIn(body) {
  const flags = new Set();
  for (const m of body.matchAll(/['"](--?[a-z][a-z0-9-]*)['"]/g)) flags.add(m[1]);
  for (const m of body.matchAll(/--\(([a-z0-9|-]+)\)/g)) for (const name of m[1].split('|')) flags.add('--' + name);
  for (const m of body.matchAll(/\/\^(?:\(\?:)?(--?[a-z][a-z0-9-]*)/g)) flags.add(m[1]);
  for (const m of body.matchAll(/\|(-[a-z])\)/g)) flags.add(m[1]);
  return [...flags].sort();
}

/** The CLI: commands, flags per command, and the target and template names. */
export async function cliSurfaces(base = root) {
  const src = name => readFileSync(join(base, 'src', name), 'utf8');
  const parsers = [['cli-arguments.mjs', 'parseLasmArguments'], ['init.mjs', 'parseInitArguments'],
    ['dev.mjs', 'parseDevArguments']];
  const flags = new Set();
  for (const [file, fn] of parsers) for (const flag of flagsIn(functionBody(src(file), fn))) flags.add(flag);
  const load = name => import(pathToFileURL(join(base, 'src', name)).href);
  const cli = await load('cli-arguments.mjs');
  const init = await load('init.mjs');
  const dev = await load('dev.mjs');
  return {
    commands: [...cli.commandNames, 'version'].sort(),
    flags: [...flags].sort(),
    buildTargets: [...cli.buildTargets],
    devTargets: [...dev.devTargets],
    deployTargets: Object.keys(init.deployTargets),
    templates: Object.keys(init.templates),
    templateDirectories: readdirSync(join(base, 'templates')).filter(name => statSync(join(base, 'templates', name)).isDirectory()).sort(),
    suspendModes: [...cli.suspendModes],
  };
}

/** LASM_* environment variables the CLI, its host code and its packages read
 * or set (JavaScript under src/, bin/ and packages/): `env.LASM_X`,
 * `env?.LASM_X`, `env['LASM_X']`, and the download policy's
 * `['name', 'LASM_X', default, …]` table. Error codes are not matched. */
export function environmentVariables(base = root) {
  const files = ['src', 'bin', 'packages'].flatMap(d => walk(join(base, d), name => /\.(mjs|cjs|js)$/.test(name)));
  const names = new Set();
  const patterns = [/\benv\??\.(LASM_[A-Z0-9_]+)/g, /\benv\[['"](LASM_[A-Z0-9_]+)['"]\]/g, /\[\s*'[A-Za-z]+',\s*'(LASM_[A-Z0-9_]+)',\s*[0-9]/g];
  for (const file of files) {
    const text = readFileSync(file, 'utf8');
    for (const pattern of patterns) for (const m of text.matchAll(pattern)) names.add(m[1]);
  }
  return [...names].sort();
}

/** Builtin JavaScript modules (`lasm:<name>`, src/lasm-modules/<name>.mjs). */
export const builtinModules = (base = root) =>
  readdirSync(join(base, 'src/lasm-modules')).filter(n => n.endsWith('.mjs')).map(n => 'lasm:' + n.slice(0, -4)).sort();

/** npm entry points: @lasm/cli's bin and subpath exports, @lasm/create's bin. */
export function npmEntryPoints(base = root) {
  const pkg = JSON.parse(readFileSync(join(base, 'package.json'), 'utf8'));
  const exports = Object.keys(pkg.exports ?? {}).filter(k => k !== '.').map(k => '@lasm/cli/' + k.replace(/^\.\//, ''));
  const create = readFileSync(join(base, 'scripts/npm-dist/packages.mjs'), 'utf8');
  const createBins = [...create.matchAll(/bin:\s*\{\s*'([^']+)'/g)].map(m => m[1]);
  return { packages: ['@lasm/cli', '@lasm/create'], bins: [...Object.keys(pkg.bin ?? {}), ...createBins].sort(), exports: exports.sort() };
}

/** Everything the guard checks, as { kind, name } pairs. */
export async function surfaces(base = root) {
  const lean = leanSurfaces(base);
  const cli = await cliSurfaces(base);
  const npm = npmEntryPoints(base);
  const unique = list => [...new Set(list)];
  return [
    ...lean.modules.map(name => ({ kind: 'Lean module', name })),
    ...lean.namespaces.map(name => ({ kind: 'Lean namespace', name })),
    ...cli.commands.map(name => ({ kind: 'CLI command', name })),
    ...cli.flags.map(name => ({ kind: 'CLI flag', name })),
    ...unique([...cli.buildTargets, ...cli.devTargets, ...cli.deployTargets, ...cli.suspendModes]).map(name => ({ kind: 'target', name })),
    ...unique([...cli.templates, ...cli.templateDirectories]).map(name => ({ kind: 'template', name })),
    ...environmentVariables(base).map(name => ({ kind: 'environment variable', name })),
    ...builtinModules(base).map(name => ({ kind: 'builtin module', name })),
    ...[...npm.packages, ...npm.exports].map(name => ({ kind: 'npm entry point', name })),
    ...npm.bins.map(name => ({ kind: 'npm bin', name })),
  ];
}

/** The backticked code spans of the inventory. */
export function codeSpans(markdown) {
  return new Set([...markdown.matchAll(/`([^`\n]+)`/g)].map(m => m[1].trim()));
}

/** Whether the inventory mentions a surface. */
export function mentioned({ kind, name }, spans) {
  if (kind === 'Lean module' || kind === 'Lean namespace') {
    if (spans.has(name)) return true;
    const parts = name.split('.');
    for (let i = parts.length - 1; i >= 1; i--) if (spans.has(parts.slice(0, i).join('.') + '.*')) return true;
    return false;
  }
  if (kind === 'CLI command') return name === 'version' ? spans.has('lasm --version') : spans.has(`lasm ${name}`);
  return spans.has(name);
}

/** A well-formed id: A<n>, A<n>.<m>, 0.<milestone>-<n> or 0.<milestone>-<n>.<m>. */
export const idPattern = /^(A[1-9][0-9]*|0\.[1-7]-[1-9][0-9]*)(\.[1-9][0-9]*)?$/;

/** Entry ids (first table cells starting with A or a digit), and malformed ones. */
export function entryIds(markdown) {
  const ids = [], malformed = [];
  for (const m of markdown.matchAll(/^\|\s*([^|\s]+)\s*\|/gm)) {
    const id = m[1];
    // Header and separator rows, and tables whose first column is not an id.
    if (!/^[A0-9]/.test(id)) continue;
    if (idPattern.test(id)) ids.push(id);
    else malformed.push(id);
  }
  return { ids, malformed };
}

/** The ids each detail heading opens with (`### 0.7-1 and 0.7-16: …`,
 * `#### A8, A47, A48: …`, `### A41–A43: …`, `### 0.4-17.1 …`), with whether
 * the heading continues an earlier one (`… (continued)`). Headings that do not
 * start with an id-like token (`## 0.4 Node, Bun and Deno`) are skipped. */
export function detailHeadings(markdown) {
  const out = [];
  for (const m of markdown.matchAll(/^#{2,6}[ \t]+(.*)$/gm)) {
    const text = m[1];
    const lead = /^((?:A\d|0\.\d+-)[^\s:,(]*(?:(?:,\s*|\s+and\s+|–)(?:A\d|0\.\d+-)[^\s:,(]*)*)/.exec(text);
    if (!lead) continue;
    const ids = lead[1].split(/,\s*|\s+and\s+|–/).map(id => id.replace(/[.:]+$/, ''));
    out.push({ ids, continued: /\(continued\)/.test(text), heading: text });
  }
  return out;
}

/** Detail-only ids (defined by a heading, with no table row) and the problems
 * with detail headings: a malformed id, a detail-only id that is not a sub-id
 * of an entry with a row, and a detail-only id two headings define. */
export function detailIds(markdown, tableIds = entryIds(markdown).ids) {
  const rows = new Set(tableIds);
  const ids = [], problems = [], seen = new Set();
  for (const { ids: headingIds, continued } of detailHeadings(markdown)) {
    for (const id of headingIds) {
      if (!idPattern.test(id)) { problems.push(`detail id ${id} is not A<n>, A<n>.<m>, 0.<milestone>-<n> or 0.<milestone>-<n>.<m>`); continue; }
      if (rows.has(id)) continue;
      const parent = id.replace(/\.[1-9][0-9]*$/, '');
      if (parent === id || !rows.has(parent)) {
        problems.push(`detail id ${id} has no table row: give it one, or make it a sub-id of an entry that has one`);
        continue;
      }
      if (seen.has(id)) { if (!continued) problems.push(`detail id ${id} is defined by two headings`); continue; }
      seen.add(id);
      ids.push(id);
    }
  }
  return { ids, problems };
}

/** Problems: surfaces the inventory misses, bare A57+ ids, malformed and duplicate ids. */
export async function check(base = root, markdown = readDecisions(base)) {
  const spans = codeSpans(markdown);
  const all = await surfaces(base);
  const missing = all.filter(s => !mentioned(s, spans));
  const { ids, malformed } = entryIds(markdown);
  const problems = missing.map(s => `${s.kind} ${s.name} is not in docs/API_DECISIONS.md`);
  for (const id of malformed) problems.push(`entry id ${id} is not A<n>, A<n>.<m> or 0.<milestone>-<n>`);
  for (const id of ids) if (/^A\d+$/.test(id) && Number(id.slice(1)) > 56) problems.push(`entry id ${id}: new entries take milestone-prefixed ids (0.1-1, 0.7-1, …), not A57+`);
  const seen = new Set();
  for (const id of ids) { if (seen.has(id)) problems.push(`entry id ${id} is used twice`); seen.add(id); }
  const details = detailIds(markdown, ids);
  problems.push(...details.problems);
  return { problems, surfaces: all, missing, ids, detailIds: details.ids };
}

if (process.argv[1] && fileURLToPath(import.meta.url) === process.argv[1]) {
  const result = await check();
  if (process.argv.includes('--json')) console.log(JSON.stringify(result, null, 2));
  else {
    const byKind = Map.groupBy(result.surfaces, s => s.kind);
    for (const [kind, list] of byKind) console.log(`${kind} (${list.length}): ${list.map(s => s.name).join(', ')}`);
    console.log(`\n${result.ids.length} entries, ${result.detailIds.length} detail sub-entries; ${result.problems.length} problems`);
    for (const p of result.problems) console.log('  ' + p);
  }
  process.exitCode = result.problems.length ? 1 : 0;
}
