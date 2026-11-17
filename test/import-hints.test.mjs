// Missing-import hints (src/import-hints.mjs, decision 0.3-20): the index the generator writes
// (library/Lasm/JS/import-index.json; generate-web.mjs --check keeps it current) and the hint a build or
// `lasm dev` prints under Lean's unknown-name errors.
import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync, statSync } from 'node:fs';
import { buildImportIndex, declaredNames, loadImportIndex, missingImportHints, modulesDefining, unknownNames } from '../src/import-hints.mjs';
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
    'Lasm.JS.Web.Fetch': { '': ['Response', 'fetch'], Response: ['new'] } });
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

test('the shipped index is small and covers every generated namespace', () => {
  const file = new URL('../library/Lasm/JS/import-index.json', import.meta.url);
  // Measured 2026-11-16: 346 KB (80 KB compressed in the npm package) for about 20,000 names.
  assert.ok(statSync(file).size < 450 * 1024, `${statSync(file).size} bytes`);
  const modules = Object.keys(JSON.parse(readFileSync(file, 'utf8')).modules);
  for (const host of ['Web', 'Node', 'Deno', 'Bun', 'Cloudflare']) assert.ok(modules.some(m => m.startsWith(`Lasm.JS.${host}.`)), host);
  assert.ok(!modules.some(m => m.includes('.Types.')), 'types modules are indexed under their spec');
});
