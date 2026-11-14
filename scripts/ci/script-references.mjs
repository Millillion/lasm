// Which tracked files the repository refers to, by the rule a reduction must use
// before removing a file as unreferenced (docs/TESTING.md#bugs-found, 2026-11-14):
//
//   - a repository path (`scripts/x/y.mjs`), also behind a prefix such as
//     `$GITHUB_WORKSPACE/` or `../../`, or relative to the referring file;
//   - a bare file name (`classify-mixed.mjs`), as runbooks and READMEs name the
//     scripts beside them: it refers to every tracked file of that name;
//   - a templated name, as workflows and runbooks compute them
//     (`probe-$PROBE.mjs`, `${{ inputs.probe }}`, `<version>`, `probe-NAME.mjs`,
//     `probe-*.mjs`): it refers to every tracked file it matches.
//
// docs/evidence/ records results and is not a referrer; a file never refers to
// itself. M1/M2 removed classify-mixed.mjs (named by bare name in its README)
// and make-adapter-review.mjs (named only by the Lean upgrade runbook) because
// a path-only scan missed both.
//
// The guard the other way: every script a workflow or a current document names
// must exist. A page whose banner says the scripts it names were removed (and
// where they are in the git history), docs/history/, docs/proposals/ and the
// dated decision log are history and exempt, as is a line that says the script
// was removed or retired.
//
//   node scripts/ci/script-references.mjs             # dangling names; exit 1 if any
//   node scripts/ci/script-references.mjs --unreferenced [PREFIX]
//                                                     # removal candidates under PREFIX (scripts/)
import { execFileSync } from 'node:child_process';
import { readFileSync } from 'node:fs';
import { posix } from 'node:path';
import { fileURLToPath, pathToFileURL } from 'node:url';

const root = fileURLToPath(new URL('../../', import.meta.url));
const TEXT = /\.(?:md|ya?ml|mjs|cjs|js|ts|json|sh|py|ps1|lean|toml|txt|c|h|cpp|html|css)$|(?:^|\/)(?:Dockerfile|Makefile|lakefile)$/;
const SCRIPT = /\.(?:mjs|cjs|sh|py|ps1)$/;
// A file name, path or template is a run of these characters ending in an extension; `${{ … }}` is normalized first.
const SEPARATOR = /[^\w.$*{}<>@+\/-]+/;
const PLACEHOLDER = /\$\{[^}]*\}|\$\w+|<[^>/]*>|\*|(?<=[-_/])[A-Z][A-Z0-9_]+(?=[-_.])/g;
export const BANNER = /Scripts this page names that are no longer in the repository/;
// This guard and its test name files only as examples.
const SELF = ['scripts/ci/script-references.mjs', 'test/script-references.test.mjs'];
const HISTORY = [/^docs\/evidence\//, /^docs\/history\//, /^docs\/proposals\//, /^docs\/DECISIONS\.md$/];

export function loadRepository(dir = root) {
  const files = execFileSync('git', ['-C', dir, 'ls-files', '-z'], { encoding: 'utf8', maxBuffer: 1 << 28 }).split('\0').filter(Boolean);
  return { files, read: file => readFileSync(posix.join(dir, file), 'utf8') };
}

const templated = token => /[$*<>{}]|(?<=[-_/])[A-Z][A-Z0-9_]+(?=[-_.])/.test(token);
// `*.mjs` or `${name}.json` names any file of a type, not a file: only a template
// with a fixed part in its name (`probe-$PROBE.mjs`) refers to the files it matches.
const specific = template => /[A-Za-z0-9]/.test(posix.basename(template).replace(PLACEHOLDER, '').replace(/\.[A-Za-z]\w*$/, ''));
const escape = text => text.replace(/[.*+?^${}()|[\]\\]/g, '\\$&');
function pattern(path) {
  let source = '', last = 0;
  for (const match of path.matchAll(PLACEHOLDER)) {
    source += escape(path.slice(last, match.index)) + '[^/]+';
    last = match.index + match[0].length;
  }
  return new RegExp('^' + source + escape(path.slice(last)) + '$');
}

/** Tokens of one referring file: { token, line, lineText }. URLs are skipped. */
function tokens(text) {
  const out = [];
  text.split('\n').forEach((lineText, index) => {
    const line = lineText.replace(/\$\{\{[^}]*\}\}/g, '${X}').replace(/\b[a-z][\w+.-]*:\/\/\S+/g, ' ');
    for (const word of line.split(SEPARATOR)) {
      if (!word.includes('.')) continue;
      const token = word.replace(/^[.]+(?=[^./])/, '').replace(/[./]+$/, '');
      if (/\.[A-Za-z]\w*$/.test(token) && !/^\d/.test(posix.basename(token))) out.push({ token, line: index + 1, lineText });
    }
  });
  return out;
}

/** The tracked files `token`, written in `source`, refers to. */
function resolve(token, source, index) {
  // A path behind a prefix ($GITHUB_WORKSPACE/, ../../, a checkout directory) still names the repository path.
  const stripped = token.replace(/^(?:\$\{[^}]*\}|\$\w+)\//, '');
  const candidates = new Set();
  if (stripped.includes('/')) {
    candidates.add(posix.normalize(stripped));
    candidates.add(posix.normalize(posix.join(posix.dirname(source), stripped)));
    for (const top of index.tops) {
      const at = stripped.indexOf(top + '/');
      if (at > 0 && stripped[at - 1] === '/') candidates.add(stripped.slice(at));
    }
  }
  const found = new Set();
  for (const candidate of candidates) {
    if (templated(candidate)) matches(index, 'path', candidate, index.files).forEach(file => found.add(file));
    else if (index.tracked.has(candidate)) found.add(candidate);
  }
  if (!stripped.includes('/') || found.size === 0) {
    const name = posix.basename(stripped);
    if (templated(name)) matches(index, 'name', name, index.byName.keys()).forEach(base => index.byName.get(base).forEach(file => found.add(file)));
    else for (const file of index.byName.get(name) ?? []) found.add(file);
  }
  return found;
}

/** The entries `template` matches, once per template. */
function matches(index, kind, template, entries) {
  const key = kind + '\0' + template;
  if (!specific(template)) return [];
  if (!index.templates.has(key)) {
    const re = pattern(template), fixed = template.split(PLACEHOLDER).filter(Boolean);
    index.templates.set(key, [...entries].filter(entry => fixed.every(part => entry.includes(part)) && re.test(entry)));
  }
  return index.templates.get(key);
}

function indexOf(files) {
  const byName = new Map();
  for (const file of files) { const name = posix.basename(file); byName.set(name, [...(byName.get(name) ?? []), file]); }
  return { files, tracked: new Set(files), byName, cache: new Map(), templates: new Map(), tops: new Set(files.filter(file => file.includes('/')).map(file => file.split('/')[0])) };
}

/** { referencedBy: Map(file → Set(referring files)), dangling: [{ source, line, name }] }. */
export function scriptReferences({ files, read }) {
  const index = indexOf(files), referencedBy = new Map(), dangling = [];
  for (const source of files) {
    if (!TEXT.test(source) || source.startsWith('docs/evidence/') || SELF.includes(source)) continue;
    let text;
    try { text = read(source); } catch { continue; }
    const checked = (source.endsWith('.md') || /^\.github\/workflows\/[^/]+\.ya?ml$/.test(source))
      && !HISTORY.some(re => re.test(source)) && !BANNER.test(text);
    const directory = posix.dirname(source);
    for (const { token, line, lineText } of tokens(text)) {
      const key = directory + '\0' + token;
      if (!index.cache.has(key)) index.cache.set(key, resolve(token, source, index));
      const found = index.cache.get(key);
      for (const file of found) if (file !== source) {
        if (!referencedBy.has(file)) referencedBy.set(file, new Set());
        referencedBy.get(file).add(source);
      }
      // Dangling: a script named by its repository path, or by bare name in a README beside it.
      const stripped = token.replace(/^(?:\$\{[^}]*\}|\$\w+)\//, '');
      const names = stripped.startsWith('scripts/') || /\/scripts\//.test(stripped) || (/^scripts\/.*README\.md$/.test(source) && !stripped.includes('/'));
      if (checked && names && SCRIPT.test(token) && found.size === 0 && !/\b(?:removed|retired|deleted)\b/i.test(lineText))
        dangling.push({ source, line, name: token });
    }
  }
  return { referencedBy, dangling };
}

/** Tracked files under `prefix` that no other tracked file refers to: the only removal candidates. */
export function unreferenced(repository, prefix = 'scripts/') {
  const { referencedBy } = scriptReferences(repository);
  return repository.files.filter(file => file.startsWith(prefix) && !referencedBy.has(file));
}

if (import.meta.url === pathToFileURL(process.argv[1] ?? '').href) {
  const repository = loadRepository();
  if (process.argv[2] === '--unreferenced') {
    for (const file of unreferenced(repository, process.argv[3] ?? 'scripts/')) console.log(file);
  } else {
    const { dangling } = scriptReferences(repository);
    for (const { source, line, name } of dangling) console.log(`${source}:${line}: ${name} is not in the repository`);
    process.exitCode = dangling.length ? 1 : 0;
  }
}
