// Test-only adaptation. Preserve upstream expressions; move #eval and #guard
// into ordinary runtime functions so native elaboration cannot count as Wasm IO.
export function codeMask(source) {
  const chars = source.split('');
  let comment = 0, string = false, line = false, rawEnd = null;
  for (let i = 0; i < chars.length; i++) {
    const c = chars[i], next = chars[i + 1];
    if (rawEnd) {
      if (source.startsWith(rawEnd, i)) {
        const end = i + rawEnd.length;
        while (i < end) chars[i++] = ' ';
        i--; rawEnd = null;
      } else if (c !== '\n') chars[i] = ' ';
      continue;
    }
    if (line) { if (c === '\n') line = false; else chars[i] = ' '; continue; }
    if (comment) {
      if (c === '/' && next === '-') { chars[i] = chars[++i] = ' '; comment++; }
      else if (c === '-' && next === '/') { chars[i] = chars[++i] = ' '; comment--; }
      else if (c !== '\n') chars[i] = ' ';
      continue;
    }
    if (string) {
      if (c === '\\') { chars[i] = ' '; if (i + 1 < chars.length) chars[++i] = ' '; }
      else { if (c === '"') string = false; if (c !== '\n') chars[i] = ' '; }
      continue;
    }
    const raw = c === 'r' && !/[\p{L}\p{N}_]/u.test(source[i - 1] ?? '') ? /^r(#+)?"/.exec(source.slice(i)) : null;
    const character = c === "'" ? /^'(?:\\(?:x[0-9a-fA-F]{2}|u\{[0-9a-fA-F]+\}|.)|[^'\\\n])'/u.exec(source.slice(i)) : null;
    if (raw) {
      rawEnd = '"' + (raw[1] ?? '');
      for (let j = 0; j < raw[0].length; j++) chars[i + j] = ' ';
      i += raw[0].length - 1;
    } else if (character) {
      for (let j = 0; j < character[0].length; j++) chars[i + j] = ' ';
      i += character[0].length - 1;
    } else if (c === '/' && next === '-') { chars[i] = chars[++i] = ' '; comment = 1; }
    else if (c === '-' && next === '-') { chars[i] = chars[++i] = ' '; line = true; }
    else if (c === '"') { chars[i] = ' '; string = true; }
  }
  // Preserve UTF-16 offsets used by JS regular expressions.
  return chars.join('');
}

export function adapt(source, { legacyImports = [] } = {}) {
  // Legacy modules initialize elaborator imports at runtime. Upgrade only the
  // module envelope, preserving visibility, so test-only elaborators are erased.
  const legacy = !/^module\b/m.test(codeMask(source));
  if (legacy) source = 'module\n' + source.replace(/^([ \t]*)import[ \t]+([A-Za-z0-9_.]+)[ \t]*$/gm, '$1public import $2');
  const mask = codeMask(source);
  const edits = [], cases = [];
  for (const match of mask.matchAll(/^[ \t]*#(eval!?|guard)(?![A-Za-z_])/gm)) {
    const start = match.index + match[0].indexOf('#');
    const end = match.index + match[0].length;
    const id = cases.length;
    const kind = match[1] === 'guard' ? 'guard' : 'eval';
    const line = source.slice(0, start).split('\n').length - Number(legacy);
    cases.push({ id, kind, line });
    // `unsafe` alone can be parsed as a term following a legacy unindented do
    // block. `private` unambiguously starts a new declaration in that grammar.
    edits.push({ start, end, value: `private unsafe def _root_.LasmUpstream.case${id} : IO Unit := ${kind === 'eval' ? 'lasm_upstream_eval% ' : 'LasmUpstream.guard $ '}` });
  }
  // #guard_msgs verifies elaborator messages; native-original execution checks
  // those expectations. Runtime output/errors are compared separately below.
  for (const match of mask.matchAll(/#guard_msgs\b[^\n]*?\bin\s*/g)) {
    const end = match.index + match[0].length;
    // Preserve guards for #check/#print and deliberately failing elaboration.
    // Their preceding documentation comments cannot attach directly to those
    // commands, and their expected diagnostics must stay contained.
    if (edits.some(edit => edit.start === end))
      edits.push({ start: match.index, end, value: '' });
  }
  let headerEnd = 0;
  for (const match of mask.matchAll(/^(?:public |meta |public meta )?import\b[^\n]*|^prelude\b[^\n]*|^module\b[^\n]*/gm))
    headerEnd = match.index + match[0].length;
  const modular = /^module\b/m.test(mask);
  edits.push({ start: headerEnd, end: headerEnd, value: `\n${legacy ? legacyImports.filter(name => !name.includes('.Test.')).map(name => 'import all ' + name + '\n').join('') : ''}public import LasmUpstreamHarness\nmeta import LasmUpstreamElab\n${legacy ? 'set_option compiler.checkMeta false\n' : ''}` });
  let result = source;
  for (const edit of edits.sort((a, b) => b.start - a.start)) result = result.slice(0, edit.start) + edit.value + result.slice(edit.end);
  result += `\n${modular ? 'public ' : ''}unsafe def _root_.lasmUpstreamRun : IO UInt32 := do\n`;
  if (!cases.length) result += '  return 0\n';
  else {
    for (const entry of cases) result += `  LasmUpstream.record ${entry.id} LasmUpstream.case${entry.id}\n`;
    result += '  return 0\n';
  }
  return { source: result, cases };
}

export const harnessSource = `module
public import Init
public section
namespace LasmUpstream
class Eval (α : Type) where
  run : α → IO Unit
instance (priority := 2000) : Eval (IO Unit) where run action := action
instance (priority := 1900) [Repr α] : Eval (IO α) where
  run action := do IO.println (repr (← action))
instance (priority := 1800) : Eval (BaseIO Unit) where run action := action
instance (priority := 1700) [Repr α] : Eval (BaseIO α) where
  run action := do IO.println (repr (← action))
instance (priority := 100) [Repr α] : Eval α where
  run value := IO.println (repr value)
def eval [Eval α] (value : α) : IO Unit := Eval.run value
def guard (value : Bool) : IO Unit := unless value do throw (IO.userError "upstream #guard failed")
def record (id : Nat) (action : IO Unit) : IO Unit := do
  IO.eprintln s!"LASM_UPSTREAM_BEGIN:{id}"
  try
    action
    IO.eprintln s!"LASM_UPSTREAM_END:{id}:ok"
  catch error =>
    IO.eprintln s!"LASM_UPSTREAM_END:{id}:error:{error}"
end LasmUpstream
`;

// Lean's #eval elaborator retries unresolved monadic expressions with a monad
// hint. Use the same strategy for runtime IO, without executing the expression
// during elaboration. Compiler-monad tests intentionally remain unsupported.
export const elaboratorSource = `module
public meta import Lean.Elab.BuiltinEvalCommand
public meta import Lean.Elab.Term.TermElabM
public meta import Lean.Elab.SyntheticMVars
public import LasmUpstreamHarness
open Lean Meta Elab Term
public meta section
elab "lasm_upstream_eval% " t:term : term => do
  let ty ← mkFreshTypeMVar
  let e ← elabTermEnsuringType t ty
  synthesizeSyntheticMVarsUsingDefault
  let saved ← saveState
  try synthesizeSyntheticMVarsNoPostponing
  catch ex =>
    saved.restore true
    let α ← mkFreshTypeMVar
    unless ← isDefEq ty (mkApp (mkConst \`\`IO) α) do throw ex
    synthesizeSyntheticMVarsNoPostponing
  let e ← instantiateMVars e
  if e.hasSyntheticSorry then throwError "upstream expression contains sorry"
  let e ← if ← isProp e then mkDecide e else pure e
  mkAppM \`\`LasmUpstream.eval #[e]
`;
