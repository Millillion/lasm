// The inventory of errors the `lasm` CLI raises on purpose (docs/TESTING.md#dependable-tooling):
// every `new Error(…)` in the modules a user's command reaches before a
// program runs. The error corpus (error-corpus.mjs --inventory) counts a site
// as covered when some case's output contains its message's fixed text: the
// piece and its other fixed pieces, in order; a site no case reaches must be listed in error-inventory.json with
// the reason (an internal invariant, another platform, a unit test that
// reaches it, …). A new error message in these modules therefore needs a
// corpus case or a stated reason.
//
//   node scripts/tooling/error-inventory.mjs [--json]   lists the sites
import { readFileSync } from 'node:fs';
import { dirname, join } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = join(dirname(fileURLToPath(import.meta.url)), '../..');

/** The CLI-facing modules: arguments, commands, sources, outputs, caches, tools, downloads. */
export const inventoryFiles = [
  'src/cli-arguments.mjs', 'src/application-cli.mjs', 'src/init.mjs', 'src/package.mjs', 'src/dev.mjs', 'src/dev-proxy.mjs',
  'src/browser/browser-dev.mjs', 'src/browser/static-server.mjs', 'src/browser/browser-build.mjs', 'src/edge/edge-build.mjs',
  'src/cache-repair.mjs', 'src/editor.mjs', 'src/output-directory.mjs', 'src/application-sources.mjs', 'src/application-build.mjs',
  'src/application-lock.mjs', 'src/application-files.mjs', 'src/managed-lean.mjs', 'src/npm-artifacts.mjs', 'src/managed-download.mjs',
];

/** Reads a string or template literal starting at `at` (the quote); returns its fixed pieces and the end. */
function literal(text, at) {
  const quote = text[at], pieces = [];
  let piece = '', i = at + 1;
  while (i < text.length && text[i] !== quote) {
    if (text[i] === '\\') {
      const next = text[i + 1];
      piece += next === 'n' ? '\n' : next === 't' ? '\t' : next;
      i += 2; continue;
    }
    if (quote === '`' && text[i] === '$' && text[i + 1] === '{') {
      pieces.push(piece); piece = '';
      let depth = 1; i += 2;
      while (i < text.length && depth) {
        if (text[i] === '{') depth++;
        else if (text[i] === '}') depth--;
        else if (text[i] === '`' || text[i] === "'" || text[i] === '"') { i = literal(text, i).end; continue; }
        i++;
      }
      continue;
    }
    piece += text[i++];
  }
  pieces.push(piece);
  return { pieces, end: i + 1 };
}

/** Every site: { file, line, key, fragment, parts }: fragment is the longest
 * fixed line piece of the message (null: built from a variable, nothing to
 * match), parts every fixed piece of five characters or more, in order. */
export function errorSites() {
  const sites = [];
  for (const file of inventoryFiles) {
    const text = readFileSync(join(root, file), 'utf8');
    for (const match of text.matchAll(/new Error\(\s*/g)) {
      const at = match.index + match[0].length;
      const line = text.slice(0, match.index).split('\n').length;
      let fragment = null, parts = [];
      if (['`', "'", '"'].includes(text[at])) {
        let { pieces, end } = literal(text, at);
        // 'a' + b + 'c': the following literals of a concatenation.
        while (true) {
          const rest = /^\s*\+\s*/.exec(text.slice(end));
          if (!rest) break;
          const next = end + rest[0].length;
          if (!['`', "'", '"'].includes(text[next])) { pieces.push(''); const skip = /^[\w.$()[\]'", ]*?(?=\s*[+)])/.exec(text.slice(next)); end = next + (skip?.[0].length ?? 0); continue; }
          const more = literal(text, next);
          pieces = [...pieces, ...more.pieces]; end = more.end;
        }
        const lines = pieces.flatMap(p => p.split('\n')).map(p => p.trim());
        fragment = [...lines].sort((a, b) => b.length - a.length)[0] || null;
        if (fragment && fragment.length < 8) fragment = null;
        // Every fixed piece of five characters or more, in order: what an output must contain.
        if (fragment) parts = lines.filter(p => p.length >= 5);
      }
      sites.push({ file, line, fragment, parts, key: `${file}: ${fragment ?? `(dynamic message, line ${line})`}` });
    }
  }
  return sites;
}

/** Sites with their status against corpus outputs and the reasons file. */
export function inventoryCoverage(outputs, reasons = JSON.parse(readFileSync(join(root, 'scripts/tooling/error-inventory.json'), 'utf8')).reasons) {
  const sites = errorSites().map(site => {
    const covered = !!site.fragment && outputs.some(text => {
      let at = 0;
      for (const part of site.parts) { at = text.indexOf(part, at); if (at < 0) return false; at += part.length; }
      return true;
    });
    return { ...site, status: covered ? 'covered' : reasons[site.key] ? 'explained' : 'unexplained', reason: reasons[site.key] };
  });
  const keys = new Set(sites.map(s => s.key));
  // A reason for a message that no longer exists, or that the corpus now reaches.
  const stale = Object.keys(reasons).filter(key => !keys.has(key) || sites.find(s => s.key === key)?.status === 'covered');
  return { sites, stale };
}

if (process.argv[1]?.endsWith('error-inventory.mjs')) {
  const sites = errorSites();
  if (process.argv.includes('--json')) console.log(JSON.stringify(sites, null, 2));
  else for (const site of sites) console.log(`${site.file}:${site.line}  ${site.fragment ?? '(dynamic)'}`);
  console.error(`${sites.length} error sites in ${inventoryFiles.length} modules (${sites.filter(s => !s.fragment).length} dynamic)`);
}
