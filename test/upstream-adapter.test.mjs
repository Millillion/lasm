import test from 'node:test';
import assert from 'node:assert/strict';
import { codeMask, adapt } from '../scripts/upstream/adapter.mjs';

test('upstream command discovery ignores nested comments, strings, raw strings, and characters', () => {
  const source = `-- #eval 0
/- nested /- #eval 1 -/
#guard false -/
def text := "escaped \\\"\n#eval 2"
def raw := r##"\n#eval 3\n"##
def char := '"'
def value' := 1
#eval value'
#guard true
`;
  const mask = codeMask(source);
  assert.equal(mask.length, source.length);
  assert.deepEqual([...mask.matchAll(/^#(eval|guard)/gm)].map(x => x[1]), ['eval', 'guard']);
  const adapted = adapt(source);
  assert.equal(adapted.cases.length, 2);
  assert.equal(adapted.cases[0].line, source.slice(0, source.lastIndexOf('#eval')).split('\n').length);
  assert.match(adapted.source, /unsafe def _root_\.LasmUpstream.case0/);
  assert.match(adapted.source, /LasmUpstream.record 1 LasmUpstream.case1/);
});

test('upstream adapter preserves ordinary source and module visibility', () => {
  const source = 'module\npublic import Std\nprivate def answer := 42\n#guard_msgs in\n#eval answer\n';
  const result = adapt(source);
  assert.equal(result.cases[0].line, 5);
  assert.match(result.source, /private def answer := 42/);
  assert.match(result.source, /public unsafe def _root_\.lasmUpstreamRun/);
  assert.doesNotMatch(result.source, /#guard_msgs/);
  assert.doesNotMatch(result.source, /public section/);
});
