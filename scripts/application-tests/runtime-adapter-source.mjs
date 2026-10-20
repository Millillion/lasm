// Server MVP parallel runtime adapter for reviewed upstream elaboration tests.
// Original files are never written. RuntimeCommandSurvey.lean supplies UTF-8
// byte ranges; only command tokens are replaced, so every expression,
// expected-message doc comment, constant and timeout keeps its original bytes.
// Each mapped action becomes an `IO Unit` definition that re-checks, at run
// time, the assertion its command made at build time:
//   `#guard e`                      -> evaluate `e : Bool` and require `true`
//   `/-- msgs -/ #guard_msgs in #eval e` -> render the messages `#eval e` logs
//                                      and compare them as `#guard_msgs` does
//   `#eval e` (bare)                -> require that it logs nothing, or, when
//                                      the test's output file is compared or
//                                      ignored as a whole, print its messages
//                                      for native-versus-deployed comparison
// Anything else (scoped `in` commands, `#eval!`, specifications, wrapped
// non-eval commands) stays an unmapped native build-time command and is listed.
import assert from 'node:assert/strict';
import { createHash } from 'node:crypto';

const EVAL = 'Lean.Parser.Command.eval', GUARD = 'Lean.Parser.Command.guardCmd', GUARD_MSGS = 'Lean.guardMsgsCmd';
export const modes = ['monadEval', 'io', 'pure'];
const sha = bytes => createHash('sha256').update(bytes).digest('hex');

// Rendering follows Lean 4.35's `#eval` (BuiltinEvalCommand.lean) and
// `#guard_msgs` (GuardMsgs.lean): captured stdout/stderr as one info message,
// then the value; exceptions as errors; messages joined by "---\n", trimmed
// and compared with newlines normalized to spaces.
export const helpers = String.raw`
namespace LasmParallel
def render (severity text : String) : String :=
  let text := if "\n".isPrefixOf text then text else " " ++ text
  let text := severity ++ ":" ++ text
  if text.isEmpty || text.back != '\n' then text ++ "\n" else text
class ResultMessage (α : Type) where
  message : α → Option String
instance (priority := high) : ResultMessage Unit := ⟨fun _ => none⟩
instance (priority := low) [ToString α] : ResultMessage α := ⟨fun a => some (toString a)⟩
instance [Repr α] : ResultMessage α := ⟨fun a => some (Std.Format.pretty (repr a))⟩
def run [ResultMessage α] (act : IO α) : IO (List String) := do
  let (out, result) ← IO.FS.withIsolatedStreams (isolateStderr := true) act.toBaseIO
  let logged := if out.isEmpty then [] else [render "info" out]
  match result with
  | .ok value => pure (logged ++ ((ResultMessage.message value).map (render "info")).toList)
  | .error error => pure (logged ++ [render "error" (toString error)])
def monadEval {m : Type → Type} [MonadEvalT m IO] [ResultMessage α] (act : m α) : IO (List String) :=
  run (MonadEvalT.monadEval act)
def io [ResultMessage α] (act : IO α) : IO (List String) := run act
def value [ResultMessage α] (value : α) : IO (List String) := run (Pure.pure value)
def result (messages : List String) : String := ("---\n".intercalate messages).trimAscii.copy
def guardMsgs (expected : String) (messages : IO (List String)) : IO Unit := do
  let actual := result (← messages)
  unless expected.replace "\n" " " == actual.replace "\n" " " do
    throw <| IO.userError s!"#guard_msgs mismatch\nexpected:\n{expected}\nactual:\n{actual}"
def display (messages : IO (List String)) : IO Unit := do
  for message in ← messages do IO.print message
def guard (value : Bool) : IO Unit :=
  unless value do throw <| IO.userError "#guard expression did not evaluate to true"
end LasmParallel
`;

function leanString(text) {
  let out = '"';
  for (const char of text) {
    const code = char.codePointAt(0);
    if (char === '"' || char === '\\') out += '\\' + char;
    else if (char === '\n') out += '\\n';
    else if (char === '\t') out += '\\t';
    else if (char === '\r') out += '\\r';
    else if (code < 0x20 || code === 0x7f) out += '\\x' + code.toString(16).padStart(2, '0');
    else out += char;
  }
  return out + '"';
}

/** `#guard_msgs`'s expected text: the doc comment body, ASCII-trimmed, with ⏎ markers removed. */
export function expectedMessages(source, doc) {
  if (!doc) return '';
  const text = source.subarray(doc.start, doc.stop).toString();
  assert.ok(text.startsWith('/--') && text.endsWith('-/'), 'Unexpected doc comment bytes');
  return text.slice(3, -2).replace(/^[ \t\n\r]+|[ \t\n\r]+$/g, '').replaceAll('⏎\n', '\n');
}

/**
 * Plan every command of one surveyed file. `options.wholeOutput` marks tests
 * whose complete output is compared with (or ignored by) a sidecar file; their
 * bare evaluations are differential rather than asserted empty. `options.modes`
 * optionally assigns an elaboration mode per action index after a failed pass;
 * `null` restores the original command.
 */
export function planActions(source, survey, { wholeOutput = false, modes: chosen = {} } = {}) {
  assert.ok(Buffer.isBuffer(source));
  const actions = [], unmapped = [];
  for (const [position, command] of survey.commands.entries()) {
    const text = range => source.subarray(range.start, range.stop).toString();
    const describe = { position, kind: command.kind, start: command.range?.start, stop: command.range?.stop };
    let action;
    if (command.kind === EVAL) {
      action = { form: wholeOutput ? 'eval-differential' : 'eval-no-messages', replace: [command.token.start, command.token.stop],
        token: '#eval', term: command.term };
    } else if (command.kind === GUARD) {
      action = { form: 'guard', replace: [command.token.start, command.token.stop], token: '#guard', term: command.term };
    } else if (command.kind === GUARD_MSGS && !command.spec && command.command.kind === EVAL) {
      // Replace "#guard_msgs in\n#eval" only; a leading doc comment stays as
      // the generated definition's own doc comment.
      // A `#guard_msgs` doc comment is plain text, never documentation: turning
      // "/--" into "/- " keeps it as an ordinary comment instead of attaching
      // it to the generated definition (where doc options would process it).
      action = { form: 'guard-msgs-eval', replace: [command.token.start, command.command.token.stop],
        token: null, term: command.command.term, expected: expectedMessages(source, command.doc),
        doc: command.doc && [command.doc.start, command.doc.start + 3] };
      if (command.doc) assert.equal(source.subarray(command.doc.start, command.doc.start + 3).toString(), '/--');
      assert.equal(text(command.token), '#guard_msgs');
      assert.equal(text(command.command.token), '#eval');
    } else {
      if ([EVAL, GUARD, GUARD_MSGS, 'Lean.Parser.Command.evalBang', 'Lean.Parser.Command.in'].includes(command.kind)
          || command.kind === 'Lean.Parser.Command.exit')
        unmapped.push({ ...describe, reason: command.kind === GUARD_MSGS ? (command.spec ? 'guard_msgs specification' : 'guard_msgs wraps ' + command.command.kind)
          : command.kind === 'Lean.Parser.Command.in' ? 'scoped command' : 'unsupported form' });
      continue;
    }
    if (action.token) assert.equal(text({ start: action.replace[0], stop: action.replace[1] }), action.token);
    const index = actions.length;
    const mode = Object.hasOwn(chosen, index) ? chosen[index] : action.form === 'guard' ? 'guard' : 'monadEval';
    actions.push({ ...describe, ...action, index, mode, identifier: `lasmParallelAction${index}`,
      termSha256: sha(source.subarray(action.term.start, action.term.stop)) });
  }
  for (const action of actions) if (action.mode === null) unmapped.push({ position: action.position, kind: action.kind,
    start: action.start, stop: action.stop, reason: 'does not elaborate as a runtime IO action' });
  return { actions: actions.filter(action => action.mode !== null), unmapped: unmapped.sort((a, b) => a.position - b.position),
    candidates: actions.length };
}

function replacement(action) {
  const head = `def _root_.${action.identifier} : IO Unit :=`;
  const display = { monadEval: 'LasmParallel.monadEval', io: 'LasmParallel.io', pure: 'LasmParallel.value' }[action.mode];
  if (action.form === 'guard') return `${head} LasmParallel.guard <|`;
  if (action.form === 'guard-msgs-eval') return `${head} LasmParallel.guardMsgs ${leanString(action.expected)} <| ${display} <|`;
  if (action.form === 'eval-no-messages') return `${head} LasmParallel.guardMsgs "" <| ${display} <|`;
  if (action.form === 'eval-differential') return `${head} LasmParallel.display <| ${display} <|`;
  throw new Error('Unknown form');
}

export function generateRuntimeSource(source, survey, plan, name) {
  assert.ok(Number.isSafeInteger(survey.headerStop) && survey.headerStop <= source.length);
  const edits = [{ start: survey.headerStop, stop: survey.headerStop, text: '\n' + helpers }];
  for (const action of plan.actions) {
    assert.equal(source.includes(Buffer.from(action.identifier)), false, 'Generated identifier already exists');
    edits.push({ start: action.replace[0], stop: action.replace[1], text: replacement(action), action: action.index });
    if (action.doc) edits.push({ start: action.doc[0], stop: action.doc[1], text: '/- ' });
  }
  edits.sort((a, b) => a.start - b.start || (a.stop - a.start) - (b.stop - b.start));
  const chunks = [];
  let cursor = 0, generatedOffset = 0;
  const spans = {};
  const shifts = []; // [original offset after an edit, cumulative delta]
  for (const edit of edits) {
    assert.ok(edit.start >= cursor, 'Overlapping edits');
    chunks.push(source.subarray(cursor, edit.start));
    generatedOffset += edit.start - cursor;
    const bytes = Buffer.from(edit.text);
    if (edit.action !== undefined) spans[edit.action] = generatedOffset;
    chunks.push(bytes); generatedOffset += bytes.length;
    cursor = edit.stop;
    shifts.push([edit.stop, generatedOffset - edit.stop]);
  }
  const toGenerated = offset => offset + (shifts.filter(([at]) => at <= offset).at(-1)?.[1] ?? 0);
  chunks.push(source.subarray(cursor));
  const marker = `parallel upstream runtime adapter completed: ${name} (${plan.actions.length} actions)`;
  const calls = plan.actions.map(action => `    (${JSON.stringify(action.identifier)}, ${action.identifier})`).join(',\n');
  // A `module` file makes declarations private by default; its entry point must be public.
  const isModule = /^(?:\s|--[^\n]*\n|\/-[^]*?-\/)*module\b/.test(source.subarray(0, survey.headerStop).toString());
  const main = `\n\n${isModule ? 'public ' : ''}def main : IO UInt32 := do
  let actions : Array (String × IO Unit) := #[
${calls}
  ]
  let mut failed := 0
  for (name, action) in actions do
    try
      action
      IO.println s!"lasm-action {name} ok"
    catch error =>
      failed := failed + 1
      IO.println s!"lasm-action {name} FAIL {repr (toString error)}"
  IO.println ${JSON.stringify(marker)}
  return if failed == 0 then 0 else 1
`;
  let body = Buffer.concat(chunks), tail = Buffer.alloc(0);
  if (survey.exited) {
    // `#exit` ends elaboration: the entry point goes just before it, and the
    // unelaborated remainder (never part of the test) stays byte for byte.
    const exit = survey.commands.at(-1);
    assert.equal(exit.kind, 'Lean.Parser.Command.exit');
    assert.ok(plan.actions.every(action => action.stop <= exit.range.start));
    const at = toGenerated(exit.range.start);
    tail = body.subarray(at); body = body.subarray(0, at);
  }
  const generated = Buffer.concat([body, Buffer.from(main), tail]);
  // Reverse exactly the recorded edits and require the complete original.
  const restored = [];
  let at = 0;
  for (const edit of edits) {
    restored.push(source.subarray(at, edit.start), source.subarray(edit.start, edit.stop));
    at = edit.stop;
  }
  restored.push(source.subarray(at));
  assert.deepEqual(Buffer.concat(restored), source);
  // Byte offsets of each action's definition in the generated file, for
  // mapping elaboration diagnostics back to actions.
  const lineOf = offset => generated.subarray(0, offset).toString().split('\n').length;
  const lines = plan.actions.map(action => ({ index: action.index, line: lineOf(spans[action.index]),
    endLine: lineOf(toGenerated(action.term.stop)) }));
  return { generated, marker, lines, mainLine: lineOf(body.length) + 1, helperLines: [lineOf(survey.headerStop),
    lineOf(survey.headerStop) + helpers.split('\n').length] };
}

/** Assign elaboration errors (`file:line:col: error`) to the action whose definition spans that line. */
export function actionsWithErrors(diagnostics, layout) {
  const failing = new Set(), outside = [];
  for (const match of diagnostics.matchAll(/^[^\n]*?:(\d+):\d+: error/gm)) {
    const line = Number(match[1]);
    if (line >= layout.mainLine) continue;
    // Errors in the helpers or in unchanged commands are fatal for the review.
    const owner = layout.lines.find(entry => entry.line <= line && line <= entry.endLine);
    if (!owner) outside.push(line);
    else failing.add(owner.index);
  }
  return { failing: [...failing].sort((a, b) => a - b), outside };
}
