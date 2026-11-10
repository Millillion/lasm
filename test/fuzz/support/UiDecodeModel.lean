/-
Lean's reference decoder of the Lasm.UI patch stream
(library/Lasm/UI/Proofs/Decode.lean, `Spec.frames_decode` proves it reads
every frame the encoder writes as exactly its patch) as an oracle for the
ui-decode fuzz target: one JSON request per line on stdin, one JSON answer
per line on stdout. Run by test/fuzz/support/ui-decode-model.mjs
(`lean --run`, after it compiles the decoder).

  {"frames": ["<hex>", …], "names": ["…", …]}
  → {"frames": [{"ok": [op, …]}, …, {"error": true}]}

The frames are read in turn, the tables carried from one to the next as the
applier carries them; the answer stops at the first frame the decoder
refuses. An op is ["insert", parent, node, before], ["move", parent, id,
before], ["remove", id], ["clear", parent], ["text", id, s] or ["attrs", id,
[attrop, …]] (`before` is null to append). A node is ["t", id, s] or
["e", id, ns, tag, slots, children], its slots read at every name of the
request and of the decoder's name table (an `Attrs` is a function). A slot or
attrop is [kind, name, value] / ["set", kind, name, value] / ["remove", kind,
name], kind "attr", "prop", "style" or "on"; a value is ["str", s],
["prop", "str", s], ["prop", "bool", b] or ["listener", event, paths].
-/
import Lean.Data.Json
import Lasm.UI.Proofs.Decode

open Lean Lasm.UI Lasm.UI.Model Lasm.UI.Decode

def unhexDigit (c : Char) : Except String Nat :=
  if '0' ≤ c ∧ c ≤ '9' then .ok (c.toNat - '0'.toNat)
  else if 'a' ≤ c ∧ c ≤ 'f' then .ok (c.toNat - 'a'.toNat + 10)
  else .error s!"not a hex digit: {c}"

def unhex (s : String) : Except String ByteArray := do
  let cs := s.toList.toArray
  if cs.size % 2 != 0 then throw "odd hex length"
  let mut out := ByteArray.emptyWithCapacity (cs.size / 2)
  for i in [0:cs.size / 2] do
    out := out.push (16 * (← unhexDigit cs[2 * i]!) + (← unhexDigit cs[2 * i + 1]!)).toUInt8
  return out

def valueJson : AttrVal → Json
  | .str s => Json.arr #["str", toJson s]
  | .prop (.str s) => Json.arr #["prop", "str", toJson s]
  | .prop (.bool b) => Json.arr #["prop", "bool", toJson b]
  | .listener l => Json.arr #["listener", toJson l.event, toJson l.paths]

def keyJson : AttrKey → String × String
  | .attr n => ("attr", n)
  | .prop n => ("prop", n)
  | .style n => ("style", n)
  | .on n => ("on", n)

def keys (names : List String) : List AttrKey :=
  names.flatMap fun n => [.attr n, .prop n, .style n, .on n]

def slots (names : List String) (a : Attrs) : Json :=
  Json.arr <| ((keys names).filterMap fun k => (a k).map fun v =>
    let (kind, n) := keyJson k
    Json.arr #[toJson kind, toJson n, valueJson v]).toArray

def nsJson : Ns → Json
  | .html => "html"
  | .svg => "svg"
  | .mathml => "mathml"

partial def domJson (names : List String) : Dom → Json
  | .text id s => Json.arr #["t", toJson id, toJson s]
  | .elem id ns tag a cs => Json.arr #["e", toJson id, nsJson ns, toJson tag, slots names a, Json.arr (cs.toArray.map (domJson names))]

def attrOpJson : AttrOp → Json
  | .set k v => let (kind, n) := keyJson k; Json.arr #["set", toJson kind, toJson n, valueJson v]
  | .remove k => let (kind, n) := keyJson k; Json.arr #["remove", toJson kind, toJson n]

def wireJson (names : List String) : Wire → Json
  | .insert p d b => Json.arr #["insert", toJson p, domJson names d, toJson b]
  | .move p i b => Json.arr #["move", toJson p, toJson i, toJson b]
  | .remove i => Json.arr #["remove", toJson i]
  | .clear p => Json.arr #["clear", toJson p]
  | .text i s => Json.arr #["text", toJson i, toJson s]
  | .attrs i ops => Json.arr #["attrs", toJson i, Json.arr (ops.toArray.map attrOpJson)]

def answer (j : Json) : Except String Json := do
  let frames : Array String ← j.getObjValAs? (Array String) "frames"
  let names : List String ← j.getObjValAs? (List String) "names"
  let mut st : State := {}
  let mut read : Array (List Wire) := #[]
  let mut refused := false
  for h in frames do
    match frame st (← unhex h) with
    | some (ws, st') => read := read.push ws; st := st'
    | none => refused := true; break
  let all := (names ++ st.names).eraseDups
  let out := read.map fun ws => Json.mkObj [("ok", Json.arr (ws.toArray.map (wireJson all)))]
  return Json.mkObj [("frames", Json.arr (if refused then out.push (Json.mkObj [("error", true)]) else out))]

def main : IO Unit := do
  let stdin ← IO.getStdin
  let stdout ← IO.getStdout
  repeat
    let line ← stdin.getLine
    if line.isEmpty then break
    let out := match Json.parse line >>= answer with
      | .ok j => j
      | .error e => Json.mkObj [("fault", toJson e)]
    stdout.putStrLn out.compress
    stdout.flush
