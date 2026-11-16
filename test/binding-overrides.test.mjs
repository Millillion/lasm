// The reviewed override table of the generated bindings (scripts/bindings/overrides.json,
// docs/BINDING_RULES.md): its shape, its decisions, and the usage tracking that makes a
// generator fail on an entry matching nothing.
import { test } from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync, readdirSync } from 'node:fs';
import { fileURLToPath } from 'node:url';
import { forNamespaces, load, validate } from '../scripts/bindings/overrides.mjs';

const root = fileURLToPath(new URL('../', import.meta.url));
const table = load();

test('the committed table is well formed', () => {
  assert.deepEqual(validate(table), []);
});

test('every entry names a decision recorded in docs/api/decisions/', () => {
  const dir = root + 'docs/api/decisions/';
  const decisions = readdirSync(dir).filter(f => f.endsWith('.md')).map(f => readFileSync(dir + f, 'utf8')).join('\n');
  for (const e of [...table.names, ...table.aliases, ...table.integers])
    assert.ok(new RegExp(`\\| ${e.decision.replace(/\./g, '\\.')} \\|`).test(decisions), `${e.decision} is not an entry of docs/api/decisions/`);
});

test('no entry targets the WIT generators, which apply none yet', () => {
  for (const e of [...table.names, ...table.aliases])
    assert.ok(!/^Lasm\.(Fastly|WASI)\./.test(e.binding ?? e.alias), `${e.binding ?? e.alias}: generate-fastly.mjs and generate-wasi-http.mjs apply no overrides`);
});

test('every generator cites the rules', () => {
  for (const f of ['scripts/bindings/overrides.mjs', 'scripts/bindings/generate-web.mjs', 'docs/JS_BINDINGS.md', 'docs/WASI_FASTLY_BINDINGS.md'])
    assert.match(readFileSync(root + f, 'utf8'), /BINDING_RULES\.md/, f);
});

test('validate rejects malformed entries', () => {
  const bad = {
    names: [{ binding: 'Lasm.JS.Web.X.f', name: 'Bad', decision: 'A9.1', why: 'x' }, { binding: 'Lasm.JS.Web.X.g', name: 'g', decision: 'A9.1', why: 'x' }],
    aliases: [{ alias: 'Lasm.JS.Bun.FetchHandler', of: 'Lasm.JS.Deno.ServeHandler', decision: 'A10.1', why: 'x' }],
    integers: [{ name: 'port', type: 'Float', decision: 'nope', why: '' }, { name: 'port', type: 'Nat', decision: 'A11.1', why: 'x' }],
  };
  const problems = validate(bad).join('\n');
  assert.match(problems, /names Lasm\.JS\.Web\.X\.f: name must be a lowerCamel/);
  assert.match(problems, /renames to itself/);
  assert.match(problems, /own namespace/);
  assert.match(problems, /type must be Nat or Int/);
  assert.match(problems, /decision must be/);
  assert.match(problems, /no why/);
  assert.match(problems, /listed twice/);
});

test('forNamespaces renames, aliases, narrows and reports unused entries', () => {
  const t = {
    names: [{ binding: 'Lasm.JS.Web.FormData.appendWithBlobValue', name: 'appendBlob', decision: 'A9.1', why: 'x' },
      { binding: 'Lasm.JS.Web.Gone.fWithX', name: 'f2', decision: 'A9.1', why: 'x' },
      { binding: 'Lasm.JS.Bun.serveWithOptions', name: 'serveOptions', decision: 'A9.1', why: 'x' }],
    aliases: [{ alias: 'Lasm.JS.Web.Listener', of: 'Lasm.JS.Web.EventListener', decision: 'A10.1', why: 'x' }],
    integers: [{ name: 'port', type: 'Nat', decision: 'A11.1', why: 'x' }, { name: 'S.r', type: 'Int', decision: 'A11.1', why: 'x' }],
  };
  const ov = forNamespaces(['Lasm.JS.Web'], t);
  assert.equal(ov.name('Lasm.JS.Web.FormData.appendWithBlobValue'), 'appendBlob');
  assert.equal(ov.name('Lasm.JS.Web.FormData.append'), 'append');
  assert.equal(ov.name('Lasm.JS.Bun.serveWithOptions'), 'serveWithOptions', 'another namespace is not this generator\'s');
  assert.deepEqual(ov.aliasesOf('Lasm.JS.Web.EventListener').map(a => a.alias), ['Lasm.JS.Web.Listener']);
  assert.equal(ov.integer('Anything', 'port'), 'Nat');
  assert.equal(ov.integer('S', 'r'), 'Int');
  assert.equal(ov.integer('T', 'r'), null);
  assert.deepEqual(ov.unused(), ['names Lasm.JS.Web.Gone.fWithX']);
});
