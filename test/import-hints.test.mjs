// Missing-import hints (src/import-hints.mjs, decision 0.3-20): the index the generator writes
// (library/Lasm/JS/import-index.json; generate-web.mjs --check keeps it current) and the hint a build or
// `lasm dev` prints under Lean's unknown-name errors.
import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync, mkdirSync, mkdtempSync, readFileSync, rmSync, statSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { buildImportIndex, declaredNames, importingModule, indexPrefix, libraryLeanFiles, loadImportIndex, missingImportHints, modulesDefining, unknownNames, useImportIndex } from '../src/import-hints.mjs';
import { formatLeanDiagnostics } from '../src/dev.mjs';

test('declarations: namespaces and keywords, without enum values, checked downcasts or private ones', () => {
  const text = [
    'namespace Lasm.JS.Web', 'open Lasm.JS',
    '/-- `fetch` -/', '@[macro_inline] def fetch (input : RequestInfo) : Async Response := Internal.api "x" do',
    'structure Response where', 'def Response.cast? (v : Value) : IO (Option Response) := sorry',
    '@[match_pattern] abbrev RequestMode.noCors : RequestMode := .unsafeOfString "no-cors"',
    'partial def ReadableStream.values (self : ReadableStream) : Async (Array Data) := sorry',
    'private def helper : Nat := 1', 'abbrev BodyInit := Data', 'instance : ToJS Response := sorry',
    'namespace Support', 'def getExport : Nat := 1', 'end Support', 'end Lasm.JS.Web'].join('\n');
  assert.deepEqual(declaredNames(text), ['Lasm.JS.Web.fetch', 'Lasm.JS.Web.Response', 'Lasm.JS.Web.ReadableStream.values',
    'Lasm.JS.Web.BodyInit', 'Lasm.JS.Web.Support.getExport']);
});

test('the index: per module, grouped by owner; a types module is indexed under its spec\'s module', () => {
  const sources = new Map([
    ['Lasm.JS.Web.Types.Fetch', 'namespace Lasm.JS.Web\nstructure Response where\nend Lasm.JS.Web'],
    ['Lasm.JS.Web.Fetch', 'namespace Lasm.JS.Web\ndef fetch : Nat := 1\ndef Response.new : Nat := 1\nend Lasm.JS.Web'],
    ['Lasm.JS.Deno.Serve', 'namespace Lasm.JS.Deno\ndef serve : Nat := 1\nend Lasm.JS.Deno'],
    ['Lasm.JS.Node.Serve', 'namespace Lasm.JS.Node\ndef serve : Nat := 1\nend Lasm.JS.Node'],
    ['Lasm.UI.Html', 'namespace Lasm.UI\ndef div : Nat := 1\nend Lasm.UI']]);
  const index = buildImportIndex(sources);
  assert.deepEqual(index.modules, {
    'Lasm.JS.Deno.Serve': { '': ['serve'] },
    'Lasm.JS.Node.Serve': { '': ['serve'] },
    'Lasm.JS.Web.Fetch': { '': ['Response', 'fetch'], Response: ['new'] },
    'Lasm.UI.Html': { UI: ['div'] } });
  const names = loadImportIndex(index);
  assert.deepEqual(names.get('Lasm.JS.Web.Response.new'), ['Lasm.JS.Web.Fetch']);
  assert.deepEqual(modulesDefining('fetch', names), ['Lasm.JS.Web.Fetch']);
  assert.deepEqual(modulesDefining('Lasm.JS.Web.Response.new', names), ['Lasm.JS.Web.Fetch']);
  // Every generated namespace that defines the name: one hint per runtime.
  assert.deepEqual(modulesDefining('serve', names), ['Lasm.JS.Node.Serve', 'Lasm.JS.Deno.Serve']);
  assert.deepEqual(modulesDefining('Deno.serve', names), ['Lasm.JS.Deno.Serve']);
  assert.deepEqual(modulesDefining('frobnicate', names), []);
});

test('the names Lean reports unknown, in its wordings', () => {
  assert.deepEqual(unknownNames('error(lean.unknownIdentifier): Unknown identifier `fetch`'), ['fetch']);
  assert.deepEqual(unknownNames("unknown constant 'Lasm.JS.Node.fsPromises.readFile'"), ['Lasm.JS.Node.fsPromises.readFile']);
  assert.deepEqual(unknownNames('Invalid field `getWriter`: The environment does not contain `Lasm.JS.Web.WritableStream.getWriter`'),
    ['getWriter', 'Lasm.JS.Web.WritableStream.getWriter']);
  assert.deepEqual(unknownNames('type mismatch: `x` has type `Nat`'), []);
});

// The tests' own index (the shipped one is in library/, which a mutation sandbox does not have).
const fakeIndex = buildImportIndex(new Map([
  ['Lasm.JS.Web.Types.Fetch', 'namespace Lasm.JS.Web\nstructure Response where\nend Lasm.JS.Web'],
  ['Lasm.JS.Web.Fetch', 'namespace Lasm.JS.Web\n@[macro_inline] def fetch : Nat := 1\nend Lasm.JS.Web'],
  ['Lasm.JS.Web.Streams', 'namespace Lasm.JS.Web\ndef WritableStream.getWriter : Nat := 1\nend Lasm.JS.Web'],
  ['Lasm.JS.Node.Path', 'namespace Lasm.JS.Node\ndef path.basename : Nat := 1\nend Lasm.JS.Node'],
  ['Lasm.JS.Node.Serve', 'namespace Lasm.JS.Node\ndef serve : Nat := 1\nend Lasm.JS.Node'],
  ['Lasm.JS.Deno.Serve', 'namespace Lasm.JS.Deno\ndef serve : Nat := 1\nend Lasm.JS.Deno'],
  ['Lasm.JS.Bun.Serve', 'namespace Lasm.JS.Bun\ndef serve : Nat := 1\nend Lasm.JS.Bun'],
  ['Lasm.JS.Cloudflare.Kv', 'namespace Lasm.JS.Cloudflare\ndef KVNamespace.get : Nat := 1\nend Lasm.JS.Cloudflare']]));
useImportIndex(fakeIndex);

test('the hints: the import to add, the choice among runtimes, nothing for other names', () => {
  assert.deepEqual(missingImportHints('Main.lean:4:12: error: Unknown identifier `fetch`'),
    ['hint: fetch is defined in Lasm.JS.Web.Fetch; add: import Lasm.JS.Web.Fetch']);
  assert.deepEqual(missingImportHints('error: Unknown identifier `path.basename`'),
    ['hint: path.basename is defined in Lasm.JS.Node.Path; add: import Lasm.JS.Node.Path']);
  assert.deepEqual(missingImportHints('Invalid field `getWriter`: The environment does not contain `Lasm.JS.Web.WritableStream.getWriter`'),
    ['hint: WritableStream.getWriter is defined in Lasm.JS.Web.Streams; add: import Lasm.JS.Web.Streams']);
  assert.deepEqual(missingImportHints('error: Unknown identifier `serve`'), ['hint: serve is defined in several modules; add the one for your runtime:',
    '  import Lasm.JS.Node.Serve  (Node)', '  import Lasm.JS.Deno.Serve  (Deno)', '  import Lasm.JS.Bun.Serve  (Bun)']);
  assert.deepEqual(missingImportHints('error: Unknown identifier `KVNamespace.get`'),
    ['hint: KVNamespace.get is defined in Lasm.JS.Cloudflare.Kv; add: import Lasm.JS.Cloudflare.Kv']);
  // A type is indexed under its spec's module, which programs import (not Lasm.JS.Web.Types.Fetch).
  assert.deepEqual(missingImportHints('error: Unknown identifier `Response`'), ['hint: Response is defined in Lasm.JS.Web.Fetch; add: import Lasm.JS.Web.Fetch']);
  assert.deepEqual(missingImportHints('error: Unknown identifier `frobnicate`'), []);
});

test('lasm build and lasm dev print the hint under the error (formatLeanDiagnostics)', () => {
  const out = formatLeanDiagnostics('Main.lean:4:12: error(lean.unknownIdentifier): Unknown identifier `fetch`\nMain.lean:5:2: error: type mismatch', '/nowhere');
  const lines = out.replace(/\x1b\[[0-9;]*m/g, '').split('\n');
  assert.match(lines[0], /Main\.lean:4:12: error: Unknown identifier `fetch`$/);
  assert.equal(lines[1], 'hint: fetch is defined in Lasm.JS.Web.Fetch; add: import Lasm.JS.Web.Fetch');
  assert.match(lines[2], /Main\.lean:5:2: error: type mismatch$/);
  assert.equal(lines.length, 3);
});

const shipped = new URL('../library/Lasm/JS/import-index.json', import.meta.url);
test('the shipped index is small and covers every generated namespace', { skip: !existsSync(shipped) && 'no library/ here (a mutation sandbox)' }, () => {
  const file = new URL('../library/Lasm/JS/import-index.json', import.meta.url);
  // Measured 2026-11-24 with every public module of Lasm's library (Stage 0 answer 19): 536 KB for about 26,800
  // names; it grows with the library, not with programs. The cap stays at 600 KB.
  assert.ok(statSync(file).size < 600 * 1024, `${statSync(file).size} bytes`);
  const modules = Object.keys(JSON.parse(readFileSync(file, 'utf8')).modules);
  for (const host of ['Web', 'Node', 'Deno', 'Bun', 'Cloudflare']) assert.ok(modules.some(m => m.startsWith(`Lasm.JS.${host}.`)), host);
  for (const module of ['Lasm.JS', 'Lasm.UI', 'Lasm.Fastly', 'Lasm.WASI.Http']) assert.ok(modules.includes(module), module);
  assert.ok(!modules.some(m => m.includes('.Types.')), 'types modules are indexed under their spec');
});

test('libraryLeanFiles: every .lean file under the directory, at any depth, sorted', () => {
  const dir = mkdtempSync(join(tmpdir(), 'lasm-import-hints-'));
  try {
    for (const file of ['UI.lean', 'UI/Html.lean', 'JS/Web/Types/Fetch.lean', 'JS/import-index.json', 'notes.md', 'A.lean.txt']) {
      mkdirSync(join(dir, file, '..'), { recursive: true }); writeFileSync(join(dir, file), '');
    }
    assert.deepEqual(libraryLeanFiles(dir), ['JS/Web/Types/Fetch.lean', 'UI.lean', 'UI/Html.lean'].map(file => join(dir, file)));
  } finally { rmSync(dir, { recursive: true, force: true }); }
});

// Stage 0 answer 19 (Jordan, 2026-11-24): every public Lasm.* module is in the index.
test('the shipped index has every public module of Lasm\'s library, and none that is gone', { skip: !existsSync(shipped) && 'no library/ here (a mutation sandbox)' }, () => {
  const library = fileURLToPath(new URL('../library', import.meta.url));
  const sources = new Map(libraryLeanFiles(join(library, 'Lasm')).map(file => [file.slice(library.length + 1, -5).split(/[\\/]/).join('.'), readFileSync(file, 'utf8')]));
  const indexed = new Set(Object.keys(JSON.parse(readFileSync(shipped, 'utf8')).modules));
  const missing = [], expected = new Set();
  for (const [module, text] of sources) {
    // Public: a declaration under Lasm. outside private and Internal.
    const target = importingModule(module, sources);
    if (!declaredNames(text).some(n => n.startsWith(indexPrefix(target)) && !n.split('.').includes('Internal'))) continue;
    expected.add(target);
    if (!indexed.has(target)) missing.push(target === module ? module : `${module} (as ${target})`);
  }
  assert.deepEqual(missing, [], 'public modules missing from library/Lasm/JS/import-index.json: run node scripts/bindings/generate-web.mjs');
  assert.deepEqual([...indexed].filter(m => !expected.has(m)), [], 'modules in the index that the library no longer has: run node scripts/bindings/generate-web.mjs');
});

test('the hints for the library beyond the generated namespaces: the module a program imports', () => {
  const index = buildImportIndex(new Map([
    ['Lasm.UI', 'import Lasm.UI.Html\nimport Lasm.UI.Cmd\n'],
    ['Lasm.UI.Html', 'namespace Lasm.UI\ndef div : Nat := 1\nnamespace Internal\ndef secret : Nat := 1\nend Internal\nend Lasm.UI'],
    ['Lasm.UI.Cmd', 'namespace Lasm.UI\nnamespace Cmd\ndef none : Nat := 1\nend Cmd\nend Lasm.UI'],
    ['Lasm.UI.Model', 'namespace Lasm.UI.Model\ndef step : Nat := 1\nend Lasm.UI.Model'],
    ['Lasm.JS', 'import Lasm.JS.Core\n'],
    ['Lasm.JS.Core', 'namespace Lasm.JS\nstructure Value where\nend Lasm.JS'],
    ['Lasm.WASI.Http', '/- doc -/\nimport Lasm.WASI.Io.Poll\n'],
    ['Lasm.WASI.Io.Poll', 'namespace Lasm.WASI.Io.Poll\ndef poll : Nat := 1\nend Lasm.WASI.Io.Poll'],
    ['Lasm.JS.Node.Serve', 'namespace Lasm.JS.Node\ndef serve : Nat := 1\nend Lasm.JS.Node'],
    ['Lasm.Proofs', 'namespace Lasm.Proofs\ntheorem t : True := trivial\nend Lasm.Proofs']]));
  assert.deepEqual(index.modules, {
    'Lasm.JS': { JS: ['Value'] },
    'Lasm.JS.Node.Serve': { '': ['serve'] },
    'Lasm.UI': { UI: ['div'], 'UI.Cmd': ['none'] },
    'Lasm.UI.Model': { 'UI.Model': ['step'] },
    'Lasm.WASI.Io.Poll': { 'WASI.Io.Poll': ['poll'] } });
  assert.deepEqual(index.roots, ['Lasm.JS', 'Lasm.JS.Node', 'Lasm.UI', 'Lasm.UI.Model', 'Lasm.WASI.Io.Poll']);
  const names = loadImportIndex(index);
  assert.deepEqual(names.roots, ['Lasm.JS', 'Lasm.JS.Web', 'Lasm.JS.Node', 'Lasm.JS.Deno', 'Lasm.JS.Bun', 'Lasm.JS.Cloudflare', 'Lasm.UI', 'Lasm.UI.Model', 'Lasm.WASI.Io.Poll', 'Lasm']);
  assert.deepEqual(missingImportHints('error: Unknown identifier `div`', names), ['hint: div is defined in Lasm.UI; add: import Lasm.UI']);
  assert.deepEqual(missingImportHints('error: Unknown identifier `Cmd.none`', names), ['hint: Cmd.none is defined in Lasm.UI; add: import Lasm.UI']);
  assert.deepEqual(missingImportHints('error: Unknown identifier `Value`', names), ['hint: Value is defined in Lasm.JS; add: import Lasm.JS']);
  assert.deepEqual(missingImportHints('error: Unknown identifier `Lasm.UI.Model.step`', names), ['hint: Lasm.UI.Model.step is defined in Lasm.UI.Model; add: import Lasm.UI.Model']);
  assert.deepEqual(missingImportHints('error: Unknown identifier `poll`', names), ['hint: poll is defined in Lasm.WASI.Io.Poll; add: import Lasm.WASI.Io.Poll']);
  assert.deepEqual(missingImportHints('error: Unknown identifier `secret`', names), []);
  assert.deepEqual(missingImportHints('error: Unknown identifier `Internal.secret`', names), []);
  // Several modules outside the generated namespaces: each with its namespace.
  const both = loadImportIndex(buildImportIndex(new Map([
    ['Lasm.A', 'namespace Lasm.A\ndef go : Nat := 1\nend Lasm.A'], ['Lasm.B', 'namespace Lasm.B\ndef go : Nat := 1\nend Lasm.B']])));
  assert.deepEqual(missingImportHints('error: Unknown identifier `go`', both), ['hint: go is defined in several modules; add the one for your runtime:', '  import Lasm.A  (A)', '  import Lasm.B  (B)']);
});

test('lasm build\'s error report (reportCliError) carries the hint, as lasm dev\'s does', async () => {
  const { reportCliError } = await import('../src/application-cli.mjs');
  const printed = [], saved = console.error;
  console.error = (...a) => printed.push(a.join(' '));
  try {
    reportCliError(Object.assign(new Error('Command failed: lake build'), { stderr: 'Main.lean:4:12: error(lean.unknownIdentifier): Unknown identifier `fetch`\nerror: build failed\n' }));
  } finally { console.error = saved; }
  const text = printed.join('\n').replace(/\x1b\[[0-9;]*m/g, '');
  assert.match(text, /Main\.lean:4:12: error: Unknown identifier `fetch`\nhint: fetch is defined in Lasm\.JS\.Web\.Fetch; add: import Lasm\.JS\.Web\.Fetch/);
  assert.match(text, /\[lasm\] Build failed\. Fix the error above/);
});

test('the shipped index knows the generated declarations', { skip: !existsSync(shipped) && 'no library/ here (a mutation sandbox)' }, () => {
  const names = loadImportIndex(JSON.parse(readFileSync(shipped, 'utf8')));
  assert.deepEqual(modulesDefining('fetch', names), ['Lasm.JS.Web.Fetch']);
  assert.deepEqual(modulesDefining('Response', names), ['Lasm.JS.Web.Fetch']);
  assert.deepEqual(modulesDefining('path.basename', names), ['Lasm.JS.Node.Path']);
  assert.deepEqual(modulesDefining('KVNamespace.get', names), ['Lasm.JS.Cloudflare.Kv']);
  // wasi:http's incoming handler too (Lasm.WASI.Http.IncomingHandler.serve, imported with Lasm.WASI.Http).
  assert.deepEqual(modulesDefining('serve', names), ['Lasm.JS.Node.Serve', 'Lasm.JS.Deno.Serve', 'Lasm.JS.Bun.Serve', 'Lasm.WASI.Http']);
  assert.deepEqual(modulesDefining('Value', names), ['Lasm.JS']);
  assert.deepEqual(modulesDefining('div', names), ['Lasm.UI']);
  assert.deepEqual(modulesDefining('HttpReq.new', names), ['Lasm.Fastly']);
  assert.deepEqual(modulesDefining('Fastly.HttpReq.new', names), ['Lasm.Fastly']);
});
