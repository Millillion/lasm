import assert from 'node:assert/strict';
import test from 'node:test';
import { existsSync, readFileSync } from 'node:fs';
import { basename } from 'node:path';
import { asyncGlueSource, asyncLinkFlags } from '../src/lasm-library.mjs';

// library/c/lasm_async.c (#90) wraps a function of Lean's standard library by
// its C name; a Lean release that renames it would silently drop the wrap.
test('the Async glue wraps the bind that the prebuilt library\'s C calls', () => {
  const wrap = asyncLinkFlags[0];
  assert.equal(basename(asyncGlueSource), 'lasm_async.c');
  assert.ok(existsSync(asyncGlueSource));
  const name = wrap.slice('-Wl,--wrap='.length);
  const kv = readFileSync(new URL('../library/prebuilt/lean-4.35.0/lib/lasm/c/Lasm/KV.c', import.meta.url), 'latin1');
  assert.ok(kv.includes(name + '('));
  assert.match(readFileSync(asyncGlueSource, 'utf8'), new RegExp(`#define BIND ${name}\\n`));
});
