import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { planActions, generateRuntimeSource, actionsWithErrors, expectedMessages } from '../scripts/application-tests/runtime-adapter-source.mjs';

// A synthetic survey with the exact shape RuntimeCommandSurvey.lean emits.
const text = 'import Std\n\n/--\ninfo: 2\n-/\n#guard_msgs in\n#eval 1 + 1\n\n#guard 1 = 1\n\n#eval pure () : IO Unit\n\nopen Nat in\n#eval 3\n\n/-- info: x -/\n#guard_msgs (whitespace := lax) in\n#eval 4\n';
const source = Buffer.from(text);
const at = (needle, from = 0) => { const start = text.indexOf(needle, from); assert.ok(start >= 0, needle); return { start, stop: start + needle.length }; };
const docStart = text.indexOf('/--\ninfo: 2');
const survey = { headerStop: 'import Std'.length, exited: false, commands: [
  { kind: 'Lean.guardMsgsCmd', range: { start: docStart, stop: at('1 + 1').stop }, doc: at('/--\ninfo: 2\n-/'),
    token: at('#guard_msgs'), spec: null, in: at(' in', at('#guard_msgs').stop),
    command: { kind: 'Lean.Parser.Command.eval', range: { start: at('#eval 1').start, stop: at('1 + 1').stop }, token: at('#eval 1') && { start: at('#eval 1').start, stop: at('#eval 1').start + 5 }, term: at('1 + 1') } },
  { kind: 'Lean.Parser.Command.guardCmd', range: at('#guard 1 = 1'), token: { start: at('#guard 1').start, stop: at('#guard 1').start + 6 }, term: at('1 = 1') },
  { kind: 'Lean.Parser.Command.eval', range: at('#eval pure () : IO Unit'), token: { start: at('#eval pure').start, stop: at('#eval pure').start + 5 }, term: at('pure () : IO Unit') },
  { kind: 'Lean.Parser.Command.in', range: { start: at('open Nat in').start, stop: at('#eval 3').stop } },
  { kind: 'Lean.guardMsgsCmd', range: { start: at('/-- info: x -/').start, stop: at('#eval 4').stop }, doc: at('/-- info: x -/'),
    token: at('#guard_msgs', at('/-- info: x').start), spec: at('(whitespace := lax)'), in: at(' in', at('(whitespace := lax)').stop),
    command: { kind: 'Lean.Parser.Command.eval', range: at('#eval 4'), token: { start: at('#eval 4').start, stop: at('#eval 4').start + 5 }, term: at('4', at('#eval 4').start) } },
] };

test('only command tokens change, and the original is restored byte for byte', () => {
  const plan = planActions(source, survey);
  assert.deepEqual(plan.actions.map(action => action.form), ['guard-msgs-eval', 'guard', 'eval-no-messages']);
  assert.deepEqual(plan.unmapped.map(row => row.reason), ['scoped command', 'guard_msgs specification']);
  assert.equal(plan.actions[0].expected, 'info: 2');
  const { generated, marker, lines } = generateRuntimeSource(source, survey, plan, 'elab/x.lean');
  const out = generated.toString();
  assert.ok(out.includes('/--\ninfo: 2\n-/\ndef _root_.lasmParallelAction0 : IO Unit := LasmParallel.guardMsgs "info: 2" <| LasmParallel.monadEval <| 1 + 1'));
  assert.ok(out.includes('def _root_.lasmParallelAction1 : IO Unit := LasmParallel.guard <| 1 = 1'));
  assert.ok(out.includes('def _root_.lasmParallelAction2 : IO Unit := LasmParallel.guardMsgs "" <| LasmParallel.monadEval <| pure () : IO Unit'));
  assert.ok(out.includes('open Nat in\n#eval 3'), 'Unmapped commands keep their bytes');
  assert.ok(out.includes('#guard_msgs (whitespace := lax) in\n#eval 4'));
  assert.ok(out.endsWith('return if failed == 0 then 0 else 1\n'));
  assert.ok(out.includes(JSON.stringify(marker)));
  assert.equal(lines.length, 3);
  assert.ok(!out.includes('public def main'));
});

test('whole-output tests make bare evaluations differential; failed modes cascade and may restore the original', () => {
  const plan = planActions(source, survey, { wholeOutput: true, modes: { 0: 'pure', 2: null } });
  assert.deepEqual(plan.actions.map(action => [action.index, action.form, action.mode]),
    [[0, 'guard-msgs-eval', 'pure'], [1, 'guard', 'guard']]);
  assert.ok(plan.unmapped.some(row => row.reason === 'does not elaborate as a runtime IO action'));
  const out = generateRuntimeSource(source, survey, plan, 'elab/x.lean').generated.toString();
  assert.ok(out.includes('LasmParallel.value <| 1 + 1'));
  assert.ok(out.includes('#eval pure () : IO Unit'), 'Restored action keeps its original command');
  const differential = planActions(source, survey, { wholeOutput: true });
  assert.equal(differential.actions[2].form, 'eval-differential');
});

test('module files get a public entry point; diagnostics map to their action', () => {
  const moduleSource = Buffer.from('module\n' + text);
  const shift = value => ({ ...value, start: value.start + 7, stop: value.stop + 7 });
  const shifted = JSON.parse(JSON.stringify(survey), (key, value) =>
    value && typeof value === 'object' && Number.isInteger(value.start) && Number.isInteger(value.stop) ? shift(value) : value);
  shifted.headerStop = survey.headerStop + 7;
  const plan = planActions(moduleSource, shifted);
  const layout = generateRuntimeSource(moduleSource, shifted, plan, 'elab/x.lean');
  assert.ok(layout.generated.toString().includes('\npublic def main : IO UInt32'));
  const line = layout.lines[1].line;
  assert.deepEqual(actionsWithErrors(`Main.lean:${line}:4: error: x\nMain.lean:${layout.mainLine + 2}:1: error: y`, layout),
    { failing: [1], outside: [] });
  assert.deepEqual(actionsWithErrors(`Main.lean:${layout.helperLines[0] + 1}:1: error: z`, layout).outside.length, 1);
});

test('expected text follows #guard_msgs trimming and trailing-whitespace markers', () => {
  const doc = Buffer.from('/--\n  info: a ⏎\nb\n\n-/');
  assert.equal(expectedMessages(doc, { start: 0, stop: doc.length }), 'info: a \nb');
  assert.equal(expectedMessages(doc, null), '');
});

test('every reviewed input names its exact source and supported sidecars', () => {
  const review = JSON.parse(readFileSync(new URL('../scripts/application-tests/runtime-adapter-reviewed.json', import.meta.url)));
  const sources = JSON.parse(readFileSync(new URL('../docs/evidence/lean-4.35.0-upstream-source-files.json', import.meta.url)));
  const tests = review.releases['4.35.0'].tests;
  assert.ok(Object.keys(tests).length > 0);
  for (const [name, entry] of Object.entries(tests)) {
    assert.equal(sources['tests/' + name].sha256, entry.sha256, name);
    for (const sidecar of entry.sidecars ?? []) {
      assert.equal(sources[sidecar.path].sha256, sidecar.sha256);
      assert.ok(['ctest-run-serial', 'expected-output', 'ignored-output'].includes(sidecar.kind));
    }
  }
});
