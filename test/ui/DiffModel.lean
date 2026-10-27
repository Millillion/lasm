/-
Randomised check of `diff` against the DOM model (Lasm.UI.Model), run
natively (`lean --run`) and under Lasm: the model DOM after the patch must
equal the model DOM of the new live tree, which must show the new view.
Complements the proofs (Lasm.UI.Proofs) with checks of the executable code
on many shapes: keyed and unkeyed children, reorders, inserts, removals,
replacements, attribute changes.
-/
import Lasm.UI.Model
open Lasm.UI Lasm.UI.Model

/-- A deterministic generator (xorshift). -/
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

def tags := #["div", "span", "li", "p"]
def attrNames := #["class", "id", "title"]

def genAttrs : R (List (Attr Unit)) := do
  let n ← rand 4
  let mut l := []
  for _ in [0:n] do
    match ← rand 5 with
    | 0 => l := .prop "value" (.str s!"v{← rand 3}") :: l
    | 1 => l := .style "color" (← pick #["red", "blue"]) :: l
    | 2 => l := .on { event := ← pick #["click", "input"], paths := [["target", "value"]], preventDefault := (← rand 2) == 0 } (fun _ => some ()) :: l
    | _ => l := .attr (← pick attrNames) s!"a{← rand 3}" :: l
  return l

partial def genHtml (depth : Nat) : R (Html Unit) := do
  if depth == 0 || (← rand 4) == 0 then return .text s!"t{← rand 4}"
  let n ← rand 5
  let mut cs := []
  for _ in [0:n] do cs := (← genHtml (depth - 1)) :: cs
  let key ← if (← rand 2) == 0 then pure (some s!"k{← rand 6}") else pure none
  return .elem (if (← rand 8) == 0 then .svg else .html) (← pick tags) key (← genAttrs) cs

/-- A related tree: same shape mostly, children reordered, some inserted,
removed or changed. -/
partial def mutate (depth : Nat) (h : Html Unit) : R (Html Unit) := do
  match h with
  | .text s => if (← rand 3) == 0 then return .text s!"{s}x" else if (← rand 10) == 0 then genHtml depth else return h
  | .elem ns tag key attrs cs =>
    if (← rand 12) == 0 then return (← genHtml depth)
    let attrs ← if (← rand 3) == 0 then genAttrs else pure attrs
    let mut arr := cs.toArray
    -- reorder
    match ← rand 4 with
    | 0 => arr := arr.reverse
    | 1 => if arr.size ≥ 2 then
             let i ← rand arr.size
             let j ← rand arr.size
             arr := arr.swapIfInBounds i j
    | 2 => -- rotate
      if arr.size ≥ 2 then arr := (arr.extract 1 arr.size).push arr[0]!
    | _ => pure ()
    let mut out := #[]
    for c in arr do
      match ← rand 8 with
      | 0 => pure ()  -- remove
      | 1 => out := out.push (← genHtml (depth - 1)) |>.push (← mutate (depth - 1) c)
      | _ => out := out.push (← mutate (depth - 1) c)
    if (← rand 4) == 0 then out := out.push (← genHtml (depth - 1))
    let tag ← if (← rand 15) == 0 then pick tags else pure tag
    return .elem ns tag key attrs out.toList

/-- Observable form of a model DOM (attribute slots read at a fixed set of keys). -/
inductive Obs where
  | text (id : Nat) (s : String)
  | elem (id : Nat) (ns : Ns) (tag : String) (attrs : List (Option AttrVal)) (children : List Obs)
  deriving BEq, Repr, Inhabited

def slots : List AttrKey :=
  [.prop "value", .style "color", .on "click", .on "input"] ++ attrNames.toList.map .attr

partial def obs : Dom → Obs
  | .text id s => .text id s
  | .elem id ns tag a cs => .elem id ns tag (slots.map a) (cs.map obs)

partial def htmlEq : Html Unit → Html Unit → Bool
  | .text a, .text b => a == b
  | .elem ns t k as cs, .elem ns' t' k' as' cs' =>
    ns == ns' && t == t' && k == k' && attrsEq as as' && cs.length == cs'.length && (cs.zip cs').all fun (x, y) => htmlEq x y
  | _, _ => false

partial def ids : Live Unit → List Nat
  | .text i _ => [i]
  | .elem i _ _ _ _ cs => i :: cs.flatMap ids

def countOps : List (Op Unit) → Nat × Nat
  | [] => (0, 0)
  | op :: rest =>
    let (a, b) := countOps rest
    match op with
    | .move .. => (a + 1, b)
    | .insert .. => (a, b + 1)
    | _ => (a, b)

def main : IO UInt32 := do
  let mut g : Gen := ⟨0x9E3779B97F4A7C15⟩
  let mut failures := 0
  let rounds := 3000
  for round in [0:rounds] do
    let ((a, b), g') := (do let a ← genHtml 4; let b ← mutate 4 a; let c ← mutate 4 b; return (b, c) : R _).run g
    g := g'
    let m := mountOps [a] 1
    let dom0 := applyOps m.ops.toList []
    unless (dom0.map obs) == (m.live.map (obs ∘ toDom)) do
      failures := failures + 1
      IO.eprintln s!"round {round}: mount mismatch"
    let r := diff m.live [b] m.next
    let dom1 := applyOps r.ops.toList dom0
    let ok := (dom1.map obs) == (r.live.map (obs ∘ toDom))
      && r.live.length == 1 && (r.live.zip [b]).all (fun (l, h) => htmlEq l.erase h)
      && (r.live.flatMap ids).all (· < r.next)
    unless ok do
      failures := failures + 1
      if failures < 5 then IO.eprintln s!"round {round}: diff mismatch\n{repr (dom1.map obs)}\nexpected\n{repr (r.live.map (obs ∘ toDom))}"
  -- keyed list operations: moves are few
  let row (k : Nat) : Html Unit := .elem .html "tr" (some (toString k)) [] [.text (toString k)]
  let rows := (List.range 1000).map row
  let m := mountOps [.elem .html "tbody" none [] rows] 1
  let swapped := (List.range 1000).map fun i => row (if i == 1 then 998 else if i == 998 then 1 else i)
  let r := diff m.live [.elem .html "tbody" none [] swapped] m.next
  let sub := r.ops.toList.flatMap fun | .sub _ ops => ops | _ => []
  let (moves, inserts) := countOps sub
  IO.println s!"swap two of 1000 rows: {moves} moves, {inserts} inserts"
  unless moves ≤ 2 && inserts == 0 do failures := failures + 1
  let reversed := (List.range 1000).reverse.map row
  let r := diff m.live [.elem .html "tbody" none [] reversed] m.next
  let sub := r.ops.toList.flatMap fun | .sub _ ops => ops | _ => []
  let (moves, inserts) := countOps sub
  IO.println s!"reverse 1000 rows: {moves} moves, {inserts} inserts"
  unless moves ≤ 1000 && inserts == 0 do failures := failures + 1
  IO.println s!"{rounds} random diffs checked against the DOM model, {failures} failures"
  return if failures == 0 then 0 else 1
