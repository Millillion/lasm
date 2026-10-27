import test from 'node:test';
import assert from 'node:assert/strict';
import { canonicalMemberNames } from '../scripts/edge/normalize-archive.mjs';

test('either directory order gives the same libc member names (_Exit.c, _exit.c)', () => {
  assert.deepEqual(canonicalMemberNames(['_Exit__1.o', 'abort.o', '_exit.o']), ['_Exit.o', 'abort.o', '_exit.o']);
  assert.deepEqual(canonicalMemberNames(['_Exit.o', 'abort.o', '_exit__1.o']), ['_Exit.o', 'abort.o', '_exit.o']);
});

test('a suffix stays where dropping it would collide', () => {
  assert.deepEqual(canonicalMemberNames(['a.o', 'a__1.o', 'b__2.o']), ['a.o', 'a__1.o', 'b.o']);
});
