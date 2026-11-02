// content/index.json: the list of pages the Millillion website publishes
// (content/README.md). Generated from the front matter of content/learn/*.md and
// from the release notes docs/release/X.Y.Z-notes.md (0.3.0 and later; notes whose
// title says "never published" are skipped).
//
//   node scripts/content/index.mjs                 write content/index.json
//   node scripts/content/index.mjs --check         fail if a page's front matter is
//       incomplete, a relative link points at no file, or index.json is stale
//   node scripts/content/index.mjs --check-sources fetch every source URL; fail on
//       an error status (network: CI runs it nightly)
//
// Order: overview, tutorials (by `order`), bug-caught, proof-spotlight, platform,
// then releases; within a kind, newest first (releases of one day by version),
// then by slug.
import { execFileSync } from 'node:child_process';
import { existsSync, readdirSync, readFileSync, writeFileSync } from 'node:fs';
import { dirname, join, relative, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { splitFrontMatter } from './frontmatter.mjs';

const root = fileURLToPath(new URL('../../', import.meta.url));
const learnDir = join(root, 'content/learn');
const releaseDir = join(root, 'docs/release');
const indexFile = join(root, 'content/index.json');
export const kinds = ['overview', 'tutorial', 'bug-caught', 'proof-spotlight', 'platform', 'release'];
const pageKinds = kinds.filter(k => k !== 'release');

/** Problems with one page's front matter and links. */
export function checkPage(file, source) {
  const problems = [];
  let parsed;
  try { parsed = splitFrontMatter(source); } catch (error) { return [error.message]; }
  const { data, body } = parsed;
  if (!data) return ['no front matter (--- … ---) at the top'];
  const need = ['title', 'description', 'date', 'kind', 'sources', 'aiGenerated'];
  for (const key of need) if (data[key] === undefined || data[key] === '') problems.push(`missing ${key}`);
  if (typeof data.description === 'string' && data.description.length > 160) problems.push(`description is ${data.description.length} characters (at most 160)`);
  if (data.date !== undefined && !/^\d{4}-\d{2}-\d{2}$/.test(String(data.date))) problems.push('date must be YYYY-MM-DD');
  if (data.kind !== undefined && !pageKinds.includes(data.kind)) problems.push(`kind must be one of ${pageKinds.join(', ')}`);
  if (data.kind === 'tutorial' && !Number.isInteger(data.order)) problems.push('a tutorial needs an integer order');
  if (data.kind !== 'tutorial' && data.order !== undefined) problems.push('only tutorials have an order');
  if (data.aiGenerated !== true) problems.push('aiGenerated must be true');
  if (!Array.isArray(data.sources) || !data.sources.length) problems.push('sources must list at least one URL');
  for (const url of Array.isArray(data.sources) ? data.sources : []) if (!/^https:\/\/\S+$/.test(String(url))) problems.push(`source is not an https URL: ${url}`);
  // Links: relative ones name files in the repository (the site rewrites them to github.com).
  const text = body.replace(/^```[\s\S]*?^```\s*$/gm, '');
  for (const m of text.matchAll(/\]\(([^)\s]+)\)/g)) {
    const target = m[1];
    if (/^(https?:|mailto:|#)/.test(target)) continue;
    const path = resolve(dirname(file), decodeURIComponent(target.replace(/#.*$/, '')));
    if (!path.startsWith(root) || !existsSync(path)) problems.push(`link ${target} names no file in the repository`);
  }
  return problems;
}

const gitDate = file => execFileSync('git', ['log', '--diff-filter=A', '--follow', '--format=%cs', '--', relative(root, file)], { cwd: root, encoding: 'utf8' }).trim().split('\n').filter(Boolean).at(-1);
const versionKey = v => v.split('.').map(Number);
const atLeast = (v, min) => { const [a, b] = [versionKey(v), versionKey(min)]; for (let i = 0; i < 3; i++) if (a[i] !== b[i]) return a[i] > b[i]; return true; };

/** First sentence of the notes' first paragraph, as plain text, at most 160 characters. */
function summary(markdown) {
  const paragraph = markdown.split(/\n\s*\n/).map(p => p.trim()).find(p => p && !p.startsWith('#')) ?? '';
  let text = paragraph.replace(/\[([^\]]*)\]\([^)]*\)/g, '$1').replace(/[`*_]/g, '').replace(/\s+/g, ' ');
  const sentence = /^.*?[.!?](?=\s|$)/.exec(text);
  if (sentence) text = sentence[0];
  return text.length <= 160 ? text : text.slice(0, 159).replace(/\s+\S*$/, '') + '…';
}

// Releases of one day: the higher version first.
const releaseOrder = (a, b) => {
  if (a.kind !== 'release' || b.kind !== 'release') return 0;
  const [x, y] = [a.slug, b.slug].map(slug => slug.replace('release-', '').split('-').map(Number));
  for (let i = 0; i < 3; i++) if (x[i] !== y[i]) return y[i] - x[i];
  return 0;
};

export function buildIndex() {
  const problems = [];
  const pages = [];
  for (const name of readdirSync(learnDir).filter(n => n.endsWith('.md')).sort()) {
    const file = join(learnDir, name), source = readFileSync(file, 'utf8');
    const found = checkPage(file, source);
    problems.push(...found.map(p => `content/learn/${name}: ${p}`));
    if (found.length) continue;
    const { data } = splitFrontMatter(source);
    const slug = name.replace(/\.md$/, '');
    if (data.kind === 'tutorial' && !existsSync(join(root, 'content/tutorials', slug, 'steps.json'))) problems.push(`content/learn/${name}: no content/tutorials/${slug}/steps.json`);
    pages.push({ slug, title: data.title, description: data.description, date: String(data.date), kind: data.kind,
      ...(data.kind === 'tutorial' ? { order: data.order } : {}), path: `content/learn/${name}`, sources: data.sources });
  }
  for (const name of readdirSync(releaseDir).sort()) {
    const m = /^(\d+\.\d+\.\d+)-notes\.md$/.exec(name);
    if (!m || !atLeast(m[1], '0.3.0')) continue;
    const file = join(releaseDir, name), source = readFileSync(file, 'utf8');
    const title = /^# (.*)$/m.exec(source)?.[1] ?? '';
    if (/never published/i.test(title)) continue;
    if (title !== `Lasm ${m[1]}`) problems.push(`docs/release/${name}: title is "${title}", expected "Lasm ${m[1]}"`);
    const date = gitDate(file);
    if (!date) problems.push(`docs/release/${name}: not in git history (CI needs fetch-depth: 0)`);
    pages.push({ slug: `release-${m[1].replaceAll('.', '-')}`, title: `Lasm ${m[1]}`, description: summary(source.replace(/^# .*$/m, '')),
      date: date ?? '', kind: 'release', path: `docs/release/${name}`, sources: [`https://github.com/Millillion/lasm/releases/tag/v${m[1]}`] });
  }
  const slugs = pages.map(p => p.slug);
  for (const s of new Set(slugs)) if (slugs.filter(x => x === s).length > 1) problems.push(`slug ${s} is used twice`);
  pages.sort((a, b) => kinds.indexOf(a.kind) - kinds.indexOf(b.kind) || (a.order ?? 0) - (b.order ?? 0)
    || (a.date < b.date ? 1 : a.date > b.date ? -1 : 0) || releaseOrder(a, b) || (a.slug < b.slug ? -1 : a.slug > b.slug ? 1 : 0));
  return { index: { pages }, problems };
}

if (process.argv[1] && fileURLToPath(import.meta.url) === resolve(process.argv[1])) {
  const args = process.argv.slice(2);
  const { index, problems } = buildIndex();
  const text = JSON.stringify(index, null, 2) + '\n';
  if (problems.length) { console.error(problems.join('\n')); process.exit(1); }
  if (args.includes('--check-sources')) {
    const urls = [...new Set(index.pages.flatMap(p => p.sources))];
    let failed = 0;
    for (const url of urls) {
      let status;
      for (let attempt = 0; attempt < 3; attempt++) {
        try { status = (await fetch(url, { redirect: 'follow', headers: { 'user-agent': 'lasm-content-check' }, signal: AbortSignal.timeout(30_000) })).status; }
        catch (error) { status = String(error.message); }
        if (status === 200 || status === 404) break;
        await new Promise(r => setTimeout(r, 2000 * (attempt + 1)));
      }
      const ok = typeof status === 'number' && status < 400;
      if (!ok) failed++;
      console.log(`${ok ? 'ok  ' : 'FAIL'} ${status} ${url}`);
    }
    console.log(`${urls.length - failed}/${urls.length} sources answer`);
    process.exit(failed ? 1 : 0);
  } else if (args.includes('--check')) {
    const current = existsSync(indexFile) ? readFileSync(indexFile, 'utf8') : '';
    if (current !== text) { console.error('content/index.json is stale: run node scripts/content/index.mjs and commit it'); process.exit(1); }
    console.log(`content/index.json is current (${index.pages.length} pages)`);
  } else {
    writeFileSync(indexFile, text);
    console.log(`wrote content/index.json (${index.pages.length} pages)`);
  }
}
