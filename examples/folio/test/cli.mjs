// The `folio` command on each engine named: it builds the example site
// (site/) and renders a Markdown file, and every engine's output must be
// byte for byte the same as the first engine's.
//
//   node test/cli.mjs --engine node|wasmtime|wasmer|node-wasi [--engine …]
//
// `node` runs the Node build (`native`, Lake's native build, for development) (dist/cli/main.mjs, npm run build); the others
// run the WASI build (wasi/main.wasm, npm run build:wasi) on wasmtime, wasmer
// (both on PATH) or Node's `node:wasi`. Checks on the built site: every
// expected file and no other, the draft nowhere, no HTML from the untrusted
// page, every index link resolving, and a well-formed RSS 2.0 feed whose
// items are the published pages, newest first.
import { spawnSync } from 'node:child_process';
import { cpSync, existsSync, mkdtempSync, readdirSync, readFileSync, statSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join, relative } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('..', import.meta.url));
const args = process.argv.slice(2);
const engines = args.flatMap((a, i) => a === '--engine' ? [args[i + 1]] : []);
if (!engines.length) engines.push('node');

const wasm = join(root, 'wasi', 'main.wasm');
/** Runs `folio ARGS` with `dir` visible as /w (WASI) or as itself (Node). */
function folio(engine, dir, argv) {
  const map = a => a.replaceAll('@', engine === 'node' || engine === 'native' ? dir : '/w');
  const cmd = {
    node: [process.execPath, [join(root, 'dist', 'cli', 'main.mjs'), ...argv.map(map)]],
    native: [join(root, '.lake', 'build', 'bin', 'folio'), argv.map(map)],
    wasmtime: ['wasmtime', ['run', '--dir', `${dir}::/w`, wasm, ...argv.map(map)]],
    wasmer: ['wasmer', ['run', '--enable-tail-call', `--volume=${dir}:/w`, wasm, '--', ...argv.map(map)]],
    'node-wasi': [process.execPath, ['--no-warnings', '--input-type=module', '-e', `
      import { WASI } from 'node:wasi'; import { readFile } from 'node:fs/promises';
      const wasi = new WASI({ version: 'preview1', args: ['folio', ...${JSON.stringify(argv.map(map))}], env: {},
        preopens: { '/w': ${JSON.stringify(dir)} }, returnOnExit: true });
      const m = await WebAssembly.compile(await readFile(${JSON.stringify(wasm)}));
      process.exitCode = wasi.start(await WebAssembly.instantiate(m, wasi.getImportObject()));`]],
  }[engine];
  if (!cmd) throw new Error(`unknown engine ${engine}`);
  return spawnSync(cmd[0], cmd[1], { encoding: 'utf8', timeout: 120_000 });
}

function tree(dir) {
  const out = {};
  const walk = d => {
    for (const name of readdirSync(d).sort()) {
      const p = join(d, name);
      if (statSync(p).isDirectory()) walk(p); else out[relative(dir, p)] = readFileSync(p, 'utf8');
    }
  };
  walk(dir);
  return out;
}

let failed = 0;
const check = (ok, what) => { if (!ok) failed++; console.log(`${ok ? 'ok  ' : 'FAIL'} ${what}`); };

/** A minimal XML well-formedness check: tags balance, text has no raw `<` or stray `&`. */
function wellFormedXml(text) {
  const body = text.replace(/^<\?xml[^>]*\?>\s*/, '');
  const stack = [];
  const re = /<(\/?)([A-Za-z][\w:-]*)((?:\s+[\w:-]+="[^"<]*")*)\s*(\/?)>|([^<]+)|(<)/g;
  for (const m of body.matchAll(re)) {
    if (m[6]) return false;
    if (m[5] !== undefined) { if (/&(?!(amp|lt|gt|quot|apos|#\d+|#x[0-9a-fA-F]+);)/.test(m[5])) return false; continue; }
    if (m[4]) continue;
    if (m[1]) { if (stack.pop() !== m[2]) return false; } else stack.push(m[2]);
  }
  return stack.length === 0;
}

const reference = {};
for (const engine of engines) {
  const dir = mkdtempSync(join(tmpdir(), 'folio-cli-'));
  cpSync(join(root, 'site'), join(dir, 'site'), { recursive: true });
  writeFileSync(join(dir, 'doc.md'), '# Title\n\n<b>bold</b> *and* [x](javascript:y)\n');

  const b = folio(engine, dir, ['build', '@/site', '@/out']);
  check(b.status === 0, `${engine}: folio build exits 0 (${b.status}) ${(b.stdout + b.stderr).trim()}`);
  const r = folio(engine, dir, ['render', '@/doc.md']);
  check(r.stdout === '<h1>Title</h1>\n<p>&lt;b&gt;bold&lt;/b&gt; <em>and</em> <a>x</a></p>\n', `${engine}: folio render (safe)`);
  const raw = folio(engine, dir, ['render', '--raw-html', '@/doc.md']);
  check(raw.stdout === '<h1>Title</h1>\n<p><b>bold</b> <em>and</em> <a href="javascript:y">x</a></p>\n', `${engine}: folio render --raw-html`);
  const u = folio(engine, dir, ['nonsense']);
  check(u.status === 2, `${engine}: a wrong command exits 2`);
  const missing = folio(engine, dir, ['render', '@/missing.md']);
  check(missing.status === 2, `${engine}: an unreadable file exits 2`);

  if (!existsSync(join(dir, 'out'))) { check(false, `${engine}: no output directory`); continue; }
  const files = tree(join(dir, 'out'));
  const names = Object.keys(files).sort();
  check(JSON.stringify(names) === JSON.stringify(['feed.xml', 'hello/index.html', 'index.html', 'notes/index.html', 'untrusted/index.html']),
    `${engine}: exactly the expected files (${names.join(', ')})`);
  const all = Object.values(files).join('\n');
  check(!/Not yet|no feed item/.test(all), `${engine}: the draft appears nowhere`);
  check(!/<script|<img|javascript:/i.test(all), `${engine}: no HTML or unsafe URL from the untrusted page`);
  const index = files['index.html'] ?? '';
  const links = [...index.matchAll(/<li><a href="([^"]*)"/g)].map(m => m[1]);
  check(links.length === 3 && links.every(h => files[h + 'index.html'] !== undefined), `${engine}: every index link resolves (${links.join(' ')})`);
  check(JSON.stringify(links) === JSON.stringify(['untrusted/', 'hello/', 'notes/']), `${engine}: the index is newest first`);
  const feed = files['feed.xml'] ?? '';
  check(wellFormedXml(feed), `${engine}: the feed is well-formed XML`);
  check(/^<\?xml version="1.0" encoding="utf-8"\?>\n<rss version="2.0">\n<channel>\n<title>/.test(feed), `${engine}: the feed is RSS 2.0`);
  const items = [...feed.matchAll(/<item><title>[^<]*<\/title><link>([^<]*)<\/link>/g)].map(m => m[1]);
  check(JSON.stringify(items) === JSON.stringify(links.map(h => 'https://example.com/' + h)), `${engine}: the feed lists the index's pages in its order`);
  const dates = [...feed.matchAll(/<pubDate>([^<]*)<\/pubDate>/g)].map(m => Date.parse(m[1]));
  check(dates.length === 3 && dates.every((d, i) => i === 0 || d <= dates[i - 1]), `${engine}: pubDates are valid and newest first`);

  const outputs = { files, render: r.stdout, raw: raw.stdout };
  if (!reference.engine) Object.assign(reference, { engine, outputs });
  else check(JSON.stringify(outputs) === JSON.stringify(reference.outputs), `${engine}: the same bytes as ${reference.engine}`);
}
console.log(failed ? `${failed} checks failed` : `all checks passed on ${engines.join(', ')}`);
if (failed) process.exitCode = 1;
