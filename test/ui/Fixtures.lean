/-
Patch fixtures for the JavaScript applier test (test/ui-dom.test.mjs): random
views and sequences of frames, each frame's patch bytes (as Lasm.UI.Encode
writes them), the canonical form of the DOM the patch must produce, and the
server-rendered HTML of the first view (for hydration).
Regenerate: node scripts/ui/lean-tests.mjs --fixtures (CI checks it is current).
-/
import Lasm.UI.Diff
import Lasm.UI.Encode
import Lasm.UI.Render
open Lasm.UI

structure Gen where
  s : UInt64

def Gen.next (g : Gen) : Nat × Gen :=
  let x := g.s
  let x := x ^^^ (x <<< 13)
  let x := x ^^^ (x >>> 7)
  let x := x ^^^ (x <<< 17)
  (x.toNat, ⟨x⟩)

abbrev R := StateM Gen
def rand (n : Nat) : R Nat := do
  let (x, g) := (← get).next
  set g
  return if n == 0 then 0 else x % n

def pick (xs : Array α) [Inhabited α] : R α := do return xs[← rand xs.size]!

def tags := #["div", "span", "li", "p", "b"]

def genAttrs : R (List (Attr Unit)) := do
  let n ← rand 4
  let mut l := []
  for _ in [0:n] do
    match ← rand 6 with
    | 0 => l := .prop "foo" (.str s!"p{← rand 3}") :: l
    | 1 =>
      let c ← pick #["red", "blue"]
      let m ← pick #["4px", "8px"]
      l := (if (← rand 2) == 0 then .style "color" c else .style "margin-left" m) :: l
    | 2 => l := .on { event := ← pick #["click", "input"], paths := [["target", "id"]], preventDefault := (← rand 2) == 0 } (fun _ => some ()) :: l
    | 3 => l := .prop "hidden" (.bool ((← rand 2) == 0)) :: l
    | _ => l := .attr (← pick #["class", "id", "data-x"]) s!"a{← rand 3}" :: l
  return l

partial def genHtml (depth : Nat) : R (Html Unit) := do
  if depth == 0 || (← rand 4) == 0 then return .text s!"t{← rand 4} é"
  let n ← rand 5
  let mut cs := []
  for _ in [0:n] do cs := (← genHtml (depth - 1)) :: cs
  let key ← if (← rand 2) == 0 then pure (some s!"k{← rand 6}") else pure none
  if (← rand 8) == 0 then
    return .elem .svg (← pick #["g", "circle"]) key (← genAttrs).reverse []
  return .elem .html (← pick tags) key (← genAttrs) cs

partial def mutate (depth : Nat) (h : Html Unit) : R (Html Unit) := do
  match h with
  | .text s => if (← rand 3) == 0 then return .text s!"{s}x" else if (← rand 10) == 0 then genHtml depth else return h
  | .elem ns tag key attrs cs =>
    if (← rand 12) == 0 then return (← genHtml depth)
    let attrs ← if (← rand 3) == 0 then genAttrs else pure attrs
    let mut arr := cs.toArray
    match ← rand 4 with
    | 0 => arr := arr.reverse
    | 1 => if arr.size ≥ 2 then arr := arr.swapIfInBounds (← rand arr.size) (← rand arr.size)
    | _ => pure ()
    let mut out := #[]
    for c in arr do
      match ← rand 8 with
      | 0 => pure ()
      | 1 => out := out.push (← genHtml (depth - 1)) |>.push (← mutate (depth - 1) c)
      | _ => out := out.push (← mutate (depth - 1) c)
    if (← rand 4) == 0 then out := out.push (← genHtml (depth - 1))
    return .elem ns tag key attrs out.toList

def jsonStr (s : String) : String :=
  "\"" ++ s.foldl (init := "") (fun acc c =>
    match c with
    | '"' => acc ++ "\\\""
    | '\\' => acc ++ "\\\\"
    | '\n' => acc ++ "\\n"
    | c => if c.toNat < 32 then acc ++ "?" else acc.push c) ++ "\""

def hex (b : ByteArray) : String :=
  b.foldl (init := "") fun acc x =>
    let d := "0123456789abcdef".toList
    acc.push d[x.toNat / 16]! |>.push d[x.toNat % 16]!

def nsName : Ns → String
  | .html => "html" | .svg => "svg" | .mathml => "mathml"

/-- The canonical DOM form the JavaScript test computes from the real DOM. -/
partial def canon : Html Unit → String
  | .text s => "{\"t\":" ++ jsonStr s ++ "}"
  | .elem ns tag _ attrs cs =>
    let final := Render.finalAttrs attrs
    let kv (l : List (String × String)) : String :=
      "{" ++ ",".intercalate ((l.toArray.qsort (fun a b => a.1 < b.1)).toList.map fun (k, v) => jsonStr k ++ ":" ++ v) ++ "}"
    let as := final.filterMap fun | .attr n v => some (n, jsonStr v) | _ => none
    let ps := final.filterMap fun | .prop n (.str s) => some (n, jsonStr s) | .prop n (.bool b) => some (n, toString b) | _ => none
    let ss := final.filterMap fun | .style n v => some (n, jsonStr v) | _ => none
    let ls := final.filterMap fun | .on l _ => some (l.event, jsonStr (toString l.preventDefault)) | _ => none
    "{\"tag\":" ++ jsonStr tag ++ ",\"ns\":" ++ jsonStr (nsName ns) ++ ",\"attrs\":" ++ kv as ++ ",\"props\":" ++ kv ps ++
      ",\"styles\":" ++ kv ss ++ ",\"on\":" ++ kv ls ++ ",\"children\":[" ++ ",".intercalate (cs.map canon) ++ "]}"

def main : IO Unit := do
  let mut g : Gen := ⟨0x2545F4914F6CDD1D⟩
  let mut scenarios := #[]
  for _ in [0:120] do
    let (views, g') := (do
      let a ← genHtml 4
      let b ← mutate 4 a
      let c ← mutate 4 b
      let d ← mutate 4 c
      return [a, b, c, d] : R _).run g
    g := g'
    let mut live : List (Live Unit) := []
    let mut next := 1
    let mut tables : Encode.Tables := {}
    let mut frames := #[]
    for v in views do
      let r := diff live [v] next
      let (bytes, t) := Encode.frame tables r.ops
      tables := t
      live := r.live
      next := r.next
      frames := frames.push ("{\"patch\":\"" ++ hex bytes ++ "\",\"dom\":" ++ canon v ++ "}")
    let ssr := render views.head!
    scenarios := scenarios.push ("{\"ssr\":" ++ jsonStr ssr ++ ",\"frames\":[" ++ ",".intercalate frames.toList ++ "]}")
  IO.println ("[" ++ ",\n".intercalate scenarios.toList ++ "]")
