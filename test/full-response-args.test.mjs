import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, writeFileSync, rmSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { tokenizeResponse, expandResponseArgs } from '../scripts/full-lean/response-args.mjs';

test('compiler response files retain quoting, empty arguments, and nested arguments', t => {
  assert.deepEqual(tokenizeResponse(String.raw`"a b.c" '-DVALUE=a b' "" x\ y -lLake_shared`),
    ['a b.c', '-DVALUE=a b', '', 'x y', '-lLake_shared']);
  const directory = mkdtempSync(join(tmpdir(), 'lasm-response-'));
  t.after(() => rmSync(directory, { recursive: true, force: true }));
  const inner = join(directory, 'inner.rsp'), outer = join(directory, 'outer.rsp');
  writeFileSync(inner, '"object with spaces.o"\n-lLake_shared');
  writeFileSync(outer, `-shared @${inner} -o "plugin with spaces.so"`);
  assert.deepEqual(expandResponseArgs(['@' + outer]),
    ['-shared', 'object with spaces.o', '-lLake_shared', '-o', 'plugin with spaces.so']);
  writeFileSync(inner, '@' + outer);
  assert.throws(() => expandResponseArgs(['@' + outer]), /nested too deeply/);
});
