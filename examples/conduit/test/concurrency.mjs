// Read isolation under concurrent writes: overlapping writes and reads against
// one Conduit server. Every article this test writes carries the three tags
// iso-a, iso-b, iso-c (in some order) from the moment it is created until it is
// deleted, and its title and tag order change together. A reader that sees an
// article with other tags, or a title that does not match its tag order, saw a
// write half done: a statement of another request's transaction, or a request
// between its statements.
//
//   node test/concurrency.mjs                  # the Node build (npm run build first)
//   node test/concurrency.mjs --url http://…   # a server that is already running
//   node test/concurrency.mjs --command "bun bun/main.mjs"
//   node test/concurrency.mjs --seconds 20
import { spawn } from 'node:child_process';
import { mkdtempSync, rmSync } from 'node:fs';
import { createServer } from 'node:net';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('..', import.meta.url));
const args = process.argv.slice(2);
const option = name => { const i = args.indexOf(name); return i >= 0 ? args[i + 1] : undefined; };
const seconds = Number(option('--seconds') ?? 10);
const writers = Number(option('--writers') ?? 6), readers = Number(option('--readers') ?? 6);

const freePort = () => new Promise((resolve, reject) => {
  const s = createServer().listen(0, '127.0.0.1', () => { const { port } = s.address(); s.close(() => resolve(port)); })
    .on('error', reject);
});

let child, work, base = option('--url');
if (!base) {
  const port = await freePort();
  work = mkdtempSync(join(tmpdir(), 'conduit-concurrency-'));
  const command = (option('--command') ?? `node ${JSON.stringify(join(root, 'dist/server/main.mjs'))}`).replaceAll('{port}', String(port));
  child = spawn(command, { shell: true, cwd: root, stdio: ['ignore', 'inherit', 'inherit'], detached: process.platform !== 'win32',
    env: { ...process.env, PORT: String(port), HOST: '127.0.0.1', DATABASE_PATH: join(work, 'conduit.db') } });
  base = `http://127.0.0.1:${port}`;
  const end = Date.now() + 60_000;
  for (;;) {
    try { if ((await fetch(`${base}/api/tags`)).ok) break; } catch {}
    if (Date.now() > end || child.exitCode !== null) throw new Error('the server did not start');
    await new Promise(r => setTimeout(r, 250));
  }
}

const api = async (method, path, body, token) => {
  const res = await fetch(`${base}/api${path}`, { method, body: body && JSON.stringify(body),
    headers: { 'content-type': 'application/json', ...(token ? { authorization: `Token ${token}` } : {}) } });
  const text = await res.text();
  return { status: res.status, json: text ? JSON.parse(text) : null };
};

const tags = ['iso-a', 'iso-b', 'iso-c'];
const orders = [tags, [...tags].reverse()];
const titleOf = (n, k) => `Isolation ${n} order ${k}`;
const problems = [];
const report = (what, a) => { if (problems.length < 20) problems.push(`${what}: ${JSON.stringify({ title: a.title, tagList: a.tagList })}`); else problems.length++; };

/** An article seen by a reader: all three tags, its title naming its tag order. */
function check(a, where) {
  if (!a.title?.startsWith('Isolation ')) return;
  const k = Number(a.title.split(' order ')[1]);
  if (JSON.stringify(a.tagList) !== JSON.stringify(orders[k])) report(`${where}: tags do not match the title`, a);
}

const stop = Date.now() + seconds * 1000;
let writes = 0, reads = 0, writeErrors = 0;
const id = Date.now().toString(36);
const user = { username: `iso${id}`, email: `iso${id}@example.com`, password: 'isolation test password' };
const { json: { user: { token } } } = await api('POST', '/users', { user });
const slugs = new Set();

async function writer(w) {
  for (let n = 0; Date.now() < stop; n++) {
    const created = await api('POST', '/articles', { article: { title: titleOf(`${w}-${n}`, 0), description: 'd', body: 'b', tagList: orders[0] } }, token);
    writes++;
    if (created.status !== 201) { writeErrors++; continue; }
    let slug = created.json.article.slug;
    slugs.add(slug);
    for (const k of [1, 0]) {
      const r = await api('PUT', `/articles/${slug}`, { article: { title: titleOf(`${w}-${n}`, k), tagList: orders[k] } }, token);
      writes++;
      if (r.status !== 200) { writeErrors++; break; }
      slug = r.json.article.slug;
      slugs.add(slug);
    }
    const d = await api('DELETE', `/articles/${slug}`, null, token);
    writes++;
    if (d.status !== 204) writeErrors++;
  }
}

async function reader() {
  while (Date.now() < stop) {
    const list = await api('GET', '/articles?tag=iso-a&limit=100');
    if (list.status === 200) for (const a of list.json.articles) check(a, 'list');
    reads++;
    for (const slug of [...slugs].slice(-5)) {
      const one = await api('GET', `/articles/${slug}`);
      if (one.status === 200) check(one.json.article, 'article');
      reads++;
    }
  }
}

let failed = false;
try {
  await Promise.all([...Array.from({ length: writers }, (_, w) => writer(w)), ...Array.from({ length: readers }, reader)]);
  console.log(`${writes} writes (${writeErrors} failed), ${reads} reads in ${seconds} s; ${problems.length} reads saw a write half done`);
  for (const p of problems.slice(0, 20)) console.log(`  ${p}`);
  failed = problems.length > 0 || writeErrors > 0;
} finally {
  if (child) { try { process.kill(process.platform === 'win32' ? child.pid : -child.pid); } catch {} }
  if (work) rmSync(work, { recursive: true, force: true });
}
process.exitCode = failed ? 1 : 0;
