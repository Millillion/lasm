/-
The Lean model of the Lasm.UI applier's DOM operations
(library/Lasm/UI/Proofs/Applier.lean, with the reference decoder of
Proofs/Decode.lean reading the bytes) as one process that
test/models/ui-applier-differential.mjs asks about each generated session:
one JSON request per line on stdin, one JSON answer per line on stdout
(`lean --run`, after the driver compiles the model).

  {"frames": ["<hex>", …], "names": ["…", …], "server": null | [snode, …]}
  → {"frames": [{"ok": [node, …]} | {"error": true} | {"outside": true}, …],
     "names": ["…", …]}

The frames are applied in turn from an empty root (`Applier.frame`, the
decoder's tables carried from frame to frame); the answer stops at the
first frame the model refuses (`error`: the applier or the DOM throws). With
`server`, the root starts with those server-rendered nodes and the first
non-empty frame hydrates them (`Applier.hydrateFrame`; `outside` when that
frame does more than append under the root). A node is ["t", id, s] or
["e", id, ns, tag, slots, children] (the root's children, in order); its
slots are read at every name of the request and of the decoder's name table
(an `Attrs` is a function; `names` lists them), each [kind, name, value] with kind "attr",
"prop", "style" or "on" and value ["str", s], ["prop", "str", s],
["prop", "bool", b] or ["listener", event, paths]. A server node is
["t", s], ["c"] (a comment) or ["e", ns, tag, [[name, value], …], children]
(its attributes).

  {"views": [[html, …], …]}  →  {"patches": ["<hex>", …], "conform": [b, …]}

renders the views in turn from an empty root as the runtime does: each
frame's patch is `diff` of the live tree against the next view, encoded
(`Encode.frame`, the tables carried from frame to frame), with whether it
conforms (`Applier.confOps` from the ids used so far: the proposition
Lasm.UI.Spec.diff_conforms, proved, on this input). An html is ["t", s] or
["e", ns, tag, key | null, [attr, …], [html, …]], an attr ["attr", n, v],
["prop", n, "<string>" | true | false], ["style", n, v] or
["on", event, [[segment, …], …]] (a handler that never answers).
-/
import Lean.Data.Json
import Lasm.UI.Proofs.Apply

open Lean Lasm.UI Lasm.UI.Model Lasm.UI.Decode Lasm.UI.Applier

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

def nsOf : String → Except String Ns
  | "html" => .ok .html
  | "svg" => .ok .svg
  | "mathml" => .ok .mathml
  | s => .error s!"unknown namespace {s}"

partial def serverOf (j : Json) : Except String Server := do
  let a ← j.getArr?
  match (← a[0]!.getStr?) with
  | "t" => return .text (← a[1]!.getStr?)
  | "c" => return .comment
  | "e" =>
    let attrs : List (String × String) ← (← a[3]!.getArr?).toList.mapM fun p => do
      let q ← p.getArr?
      return (← q[0]!.getStr?, ← q[1]!.getStr?)
    let kids ← (← a[4]!.getArr?).toList.mapM serverOf
    let slot : Attrs := fun k => match k with
      | .attr n => (attrs.reverse.lookup n).map .str
      | _ => none
    return .elem (← nsOf (← a[1]!.getStr?)) (← a[2]!.getStr?) slot kids
  | k => throw s!"unknown server node {k}"


partial def htmlOf (j : Json) : Except String (Html Unit) := do
  let a ← j.getArr?
  match (← a[0]!.getStr?) with
  | "t" => return .text (← a[1]!.getStr?)
  | "e" =>
    let key : Option String := match a[3]! with | .str k => some k | _ => none
    let attrs ← (← a[4]!.getArr?).toList.mapM fun x => do
      let q ← x.getArr?
      let n ← q[1]!.getStr?
      match (← q[0]!.getStr?) with
      | "attr" => return Attr.attr n (← q[2]!.getStr?)
      | "prop" => match q[2]! with
        | .bool b => return Attr.prop n (.bool b)
        | v => return Attr.prop n (.str (← v.getStr?))
      | "style" => return Attr.style n (← q[2]!.getStr?)
      | "on" => return Attr.on ⟨n, ← fromJson? q[2]!⟩ fun _ => none
      | k => throw s!"unknown attribute kind {k}"
    let kids ← (← a[5]!.getArr?).toList.mapM htmlOf
    return .elem (← nsOf (← a[1]!.getStr?)) (← a[2]!.getStr?) key attrs kids
  | k => throw s!"unknown html {k}"

def hexOf (b : ByteArray) : String :=
  b.foldl (init := "") fun s x =>
    let d := fun (n : Nat) => if n < 10 then Char.ofNat (48 + n) else Char.ofNat (87 + n)
    (s.push (d (x.toNat / 16))).push (d (x.toNat % 16))

def render (j : Json) : Except String Json := do
  let views ← (← j.getArr?).toList.mapM fun v => do (← v.getArr?).toList.mapM htmlOf
  let mut live : List (Live Unit) := []
  let mut next := 1
  let mut t : Encode.Tables := {}
  let mut patches : Array Json := #[]
  let mut conform : Array Json := #[]
  for v in views do
    let r := diff live v next
    conform := conform.push (toJson (confOps (List.range next) r.ops.toList (live.map toDom)).isSome)
    let (b, t') := Encode.frame t r.ops 0
    patches := patches.push (toJson (hexOf b))
    t := t'
    live := r.live
    next := r.next
  return Json.mkObj [("patches", Json.arr patches), ("conform", Json.arr conform)]

def answer (j : Json) : Except String Json := do
  if let .ok v := j.getObjVal? "views" then return ← render v
  let frames : Array String ← j.getObjValAs? (Array String) "frames"
  let names : List String ← j.getObjValAs? (List String) "names"
  let server : Option (List Server) ← match j.getObjVal? "server" with
    | .ok Json.null | .error _ => pure none
    | .ok s => some <$> (← s.getArr?).toList.mapM serverOf
  let mut st : State := {}
  let mut dom : List Dom := []
  let mut hydrating := server
  let mut out : Array Json := #[]
  for h in frames do
    let bytes ← unhex h
    match Decode.frame st bytes with
    | none => out := out.push (Json.mkObj [("error", true)]); break
    | some (ws, st') =>
      st := st'
      let all := (names ++ st.names).eraseDups
      match hydrating with
      | some srv =>
        if bytes.size == 0 then
          out := out.push (Json.mkObj [("outside", true)]); break
        hydrating := none
        match hydrateFrame srv ws with
        | some d => dom := d; out := out.push (Json.mkObj [("ok", Json.arr (d.toArray.map (domJson all)))])
        | none => out := out.push (Json.mkObj [("outside", true)]); break
      | none =>
        match run ws dom with
        | some d => dom := d; out := out.push (Json.mkObj [("ok", Json.arr (d.toArray.map (domJson all)))])
        | none => out := out.push (Json.mkObj [("error", true)]); break
  return Json.mkObj [("frames", Json.arr out), ("names", toJson (names ++ st.names).eraseDups)]

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
