// Lean naming and output helpers shared by the binding generators that are not
// WebIDL-specific (generate-fastly.mjs, generate-wit.mjs). generate-web.mjs keeps
// its own copy of the same rules for now; the keyword list is the same.
import { existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { dirname } from 'node:path';

export const leanKeywords = new Set(['at', 'by', 'do', 'else', 'end', 'fun', 'have', 'if', 'in', 'let', 'match', 'mut', 'then', 'with', 'where',
  'from', 'show', 'this', 'return', 'for', 'unless', 'try', 'catch', 'finally', 'break', 'continue', 'import', 'open', 'namespace',
  'section', 'def', 'structure', 'instance', 'class', 'deriving', 'forall', 'Type', 'Prop', 'Sort', 'universe', 'variable', 'macro',
  'syntax', 'local', 'private', 'protected', 'public', 'partial', 'unsafe', 'noncomputable', 'theorem', 'example', 'abbrev',
  'inductive', 'extends', 'notation', 'prefix', 'infix', 'infixl', 'infixr', 'postfix', 'mutual', 'attribute', 'export', 'nomatch',
  'nofun', 'calc', 'suffices', 'obtain', 'module', 'meta', 'opaque', 'axiom', 'set_option', 'termination_by', 'decreasing_by',
  'λ', 'Σ', 'Π', 'exists', 'sorry', 'omit', 'include', 'initialize', 'builtin_initialize', 'elab', 'mod']);
/** A Lean identifier for `name`, «quoted» when it is a keyword or not a plain identifier. */
export const id = name => leanKeywords.has(name) || !/^[A-Za-z_][A-Za-z0-9_']*$/.test(name) ? `«${name}»` : name;
export const capital = s => s ? s[0].toUpperCase() + s.slice(1) : s;
/** lowerCamel of a snake_case or kebab-case name: header_names_get → headerNamesGet, tls_1_1 → tls11. */
export const lowerCamel = name => name.split(/[_-]+/).filter(Boolean).map((w, i) => i ? capital(w) : w).join('');
/** UpperCamel: request_handle → RequestHandle. */
export const upperCamel = name => capital(lowerCamel(name));
/** Text safe inside a Lean doc comment. */
export const docText = s => s.replace(/-\//g, '- /').replace(/\/-/g, '/ -');

/** Writes `files` (path → text); with `check`, reports the ones that differ instead. Returns the stale paths. */
export function writeOrCheck(files, { check, root }) {
  const stale = [];
  for (const [file, text] of files) {
    const current = existsSync(file) ? readFileSync(file, 'utf8') : null;
    if (current === text) continue;
    if (check) { stale.push(file.slice(root.length)); continue; }
    mkdirSync(dirname(file), { recursive: true });
    writeFileSync(file, text);
  }
  return stale;
}
