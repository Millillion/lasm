/-
How the browser's applier reads a patch frame, in Lean: a reference decoder
of the binary patch stream (Lasm.UI.Encode, docs/BROWSER.md "Patch
protocol"), written to mirror the reading half of src/lasm-modules/ui-dom.mjs
function for function:

| ui-dom.mjs              | here                         |
| ----------------------- | ---------------------------- |
| `v()`                   | `readVar`, `var`             |
| `str()`                 | `readStr`, `str`             |
| `name()`, `value()`     | `intern`, `name`, `value`    |
| `attr(n, k)`            | `attrOp`, `attrOps`          |
| `node(null)`            | `nodeHead`, `node`, `nodes`  |
| `apply(frame)`, its ops | `op`, `ops`, `frame`         |

Where the applier calls the DOM, the decoder returns what it would do: a
`Wire` operation with every name, value and decoder id resolved, and new
nodes as the DOM model's nodes (`Model.Dom`). The interning tables and the
decoder table persist across frames, as the applier's `names`, `values` and
`decoders` arrays do (`State`).

The decoder is a specification, not shipped code: it is in the proofs-only
target, and Lasm.UI.Proofs.Wire proves that it reads every frame
`Encode.frame` writes as exactly the patch that was encoded
(Spec.frames_decode). The JavaScript applier is the same reading with DOM
calls in place of the results; that the two agree is tested
(test/ui-dom*.test.mjs, the ui-patch fuzz target), not proved. (Hydration,
where the first frame adopts server-rendered nodes, reads the same bytes.)

The recursive readers carry guards (`if _h : r.length < bs.length`) that only
make Lean see that they terminate: every read consumes at least one byte, so
the guards always hold.
-/
import Lasm.UI.Model
import Lasm.UI.Encode

namespace Lasm.UI.Decode
open Lasm.UI Lasm.UI.Model

/-- The bytes of a frame, as a list. -/
abbrev Bytes := List UInt8

/-- One patch operation as the applier performs it, with names resolved:
the parent (or node) it acts on, and for `insert` the new subtree. -/
inductive Wire where
  /-- `parent.insertBefore(node, before)`; `none` appends. -/
  | insert (parent : Nat) (node : Dom) (before : Option Nat)
  /-- `parent.insertBefore(node id, before)`. -/
  | move (parent id : Nat) (before : Option Nat)
  /-- `node.remove()`. -/
  | remove (id : Nat)
  /-- `parent.textContent = ""`. -/
  | clear (parent : Nat)
  /-- `node.data = s`. -/
  | text (id : Nat) (s : String)
  /-- The attribute operations on an element, in order. -/
  | attrs (id : Nat) (ops : List AttrOp)

/-- What the applier remembers between frames: the interned names and values
(in the order they were added) and the decoder shapes by id. -/
structure State where
  names : List String := []
  values : List String := []
  decoders : Nat → Option (List Path) := fun _ => none

/-- An unsigned LEB128 integer (`v()`): seven bits per byte, low bits first,
the high bit set on every byte but the last. -/
def readVar : Bytes → Option (Nat × Bytes)
  | [] => none
  | b :: r =>
    if b.toNat < 128 then some (b.toNat, r)
    else match readVar r with
      | some (m, r') => some (b.toNat - 128 + 128 * m, r')
      | none => none

/-- A string (`str()`): its byte length, then its UTF-8 bytes. -/
def readStr (bs : Bytes) : Option (String × Bytes) :=
  match readVar bs with
  | some (n, r) =>
    if n ≤ r.length then (String.fromUTF8? ⟨(r.take n).toArray⟩).map fun s => (s, r.drop n) else none
  | none => none

/-- An interned name or value (`name()`, `value()`): `index + 2` refers to the
table, `0` + string adds the string to it, `1` + string does not. -/
def intern (table : List String) (bs : Bytes) : Option (String × List String × Bytes) :=
  match readVar bs with
  | some (x, r) =>
    if 2 ≤ x then table[x - 2]?.map fun s => (s, table, r)
    else (readStr r).map fun (s, r') => (s, if x = 0 then table ++ [s] else table, r')
  | none => none

/-- A reader of the patch stream: from the applier's state and the bytes
left, the value read, the new state and the bytes after it (`none`: the frame
is malformed, where the applier throws). -/
def Reader (α : Type) := State → Bytes → Option (α × State × Bytes)

instance : Monad Reader where
  pure x := fun st bs => some (x, st, bs)
  bind p f := fun st bs =>
    match p st bs with
    | some (x, st, r) => f x st r
    | none => none

namespace Reader

def fail : Reader α := fun _ _ => none

/-- One byte (`bytes[p++]`). -/
def byte : Reader UInt8 := fun st bs =>
  match bs with
  | b :: r => some (b, st, r)
  | [] => none

/-- Reads with a reader of bytes that leaves the state alone. -/
def lift (f : Bytes → Option (α × Bytes)) : Reader α := fun st bs => (f bs).map fun (x, r) => (x, st, r)

end Reader
open Reader

/-- An integer. -/
def var : Reader Nat := lift readVar

/-- A string. -/
def str : Reader String := lift readStr

/-- A name, from the names table (`name()`). -/
def name : Reader String := fun st bs =>
  (intern st.names bs).map fun (s, t, r) => (s, { st with names := t }, r)

/-- A value, from the values table (`value()`). -/
def value : Reader String := fun st bs =>
  (intern st.values bs).map fun (s, t, r) => (s, { st with values := t }, r)

/-- A decoder shape by id. -/
def decoder (d : Nat) : Reader (List Path) := fun st bs => (st.decoders d).map fun ps => (ps, st, bs)

/-- One attribute operation (`attr(n, k)`): 0 `setAttribute`, 1–3 a property
(a string, false, true), 4 a style, 5 a listener (event name and decoder id),
8–11 remove an attribute, property, style or listener. -/
def attrOp : Reader AttrOp := do
  let k ← byte
  match k.toNat with
  | 0 => return .set (.attr (← name)) (.str (← value))
  | 1 => return .set (.prop (← name)) (.prop (.str (← value)))
  | 2 => return .set (.prop (← name)) (.prop (.bool false))
  | 3 => return .set (.prop (← name)) (.prop (.bool true))
  | 4 => return .set (.style (← name)) (.str (← value))
  | 5 =>
    let ev ← name
    let paths ← decoder (← var)
    return .set (.on ev) (.listener ⟨ev, paths⟩)
  | 8 => return .remove (.attr (← name))
  | 9 => return .remove (.prop (← name))
  | 10 => return .remove (.style (← name))
  | 11 => return .remove (.on (← name))
  | _ => fail

/-- `count` attribute operations. -/
def attrOps : Nat → Reader (List AttrOp)
  | 0 => return []
  | c + 1 => return (← attrOp) :: (← attrOps c)

/-- The namespace of a node kind byte (1 html, 2 svg, 3 mathml). -/
def ns? : Nat → Option Ns
  | 1 => some .html
  | 2 => some .svg
  | 3 => some .mathml
  | _ => none

/-- The start of a new node (`node(null)`): its kind and id, then the text of
a text node, or an element's tag, attribute operations and child count. -/
def nodeHead : Reader (Nat × (String ⊕ (Ns × String × List AttrOp × Nat))) := do
  let kind ← byte
  let id ← var
  if kind.toNat = 0 then return (id, .inl (← str))
  match ns? kind.toNat with
  | some ns =>
    let tag ← name
    let aops ← attrOps (← var)
    return (id, .inr (ns, tag, aops, ← var))
  | none => fail

mutual
/-- A new node: a text node, or an element (its attribute operations applied
in order to an element with no attributes) and its children. -/
def node (st : State) (bs : Bytes) : Option (Dom × State × Bytes) :=
  match nodeHead st bs with
  | some ((id, .inl s), st, r) => some (.text id s, st, r)
  | some ((id, .inr (ns, tag, aops, n)), st, r) =>
    if _h : r.length < bs.length then
      (nodes st n r).map fun (cs, st, r) => (.elem id ns tag (applyAttrOps aops fun _ => none) cs, st, r)
    else none
  | none => none
termination_by (bs.length, 0)
/-- `count` new nodes, in order. -/
def nodes (st : State) (count : Nat) (bs : Bytes) : Option (List Dom × State × Bytes) :=
  match count with
  | 0 => some ([], st, bs)
  | c + 1 =>
    match node st bs with
    | some (d, st, r) =>
      if _h : r.length < bs.length then (nodes st c r).map fun (ds, st, r) => (d :: ds, st, r)
      else none
    | none => none
termination_by (bs.length, count + 1)
end

/-- `count` strings (the segments of a path). -/
def strs : Nat → Reader (List String)
  | 0 => return []
  | c + 1 => return (← str) :: (← strs c)

/-- `count` paths, each a segment count and its segments. -/
def paths : Nat → Reader (List Path)
  | 0 => return []
  | c + 1 => return (← strs (← var)) :: (← paths c)

/-- Adds a decoder shape (`decoders[d] = paths`). -/
def define (d : Nat) (ps : List Path) : Reader Unit := fun st bs =>
  some ((), { st with decoders := fun i => if i = d then some ps else st.decoders i }, bs)

/-- `before` of an insert or move: 0 appends, else the id + 1. -/
def before (b : Nat) : Option Nat := if b = 0 then none else some (b - 1)

/-- One op of `apply(frame)`: what the applier does (nothing visible for a
decoder definition, which only fills the decoder table). -/
def op : Reader (List Wire) := do
  let o ← byte
  match o.toNat with
  | 1 =>
    let parent ← var
    let b ← var
    return [.insert parent (← node) (before b)]
  | 2 =>
    let parent ← var
    let id ← var
    return [.move parent id (before (← var))]
  | 3 => return [.remove (← var)]
  | 4 => return [.clear (← var)]
  | 5 =>
    let id ← var
    return [.text id (← str)]
  | 6 =>
    let id ← var
    return [.attrs id (← attrOps (← var))]
  | 7 =>
    let d ← var
    define d (← paths (← var))
    return []
  | _ => fail

/-- Every op of a frame, in order. -/
def ops (st : State) (bs : Bytes) : Option (List Wire × State) :=
  match bs with
  | [] => some ([], st)
  | b :: bs' =>
    match op st (b :: bs') with
    | some (w, st, r) =>
      if _h : r.length < (b :: bs').length then (ops st r).map fun (ws, st) => (w ++ ws, st) else none
    | none => none
termination_by bs.length

/-- A frame (`apply(frame)`): its ops, and the tables for the next frame. -/
def frame (st : State) (b : ByteArray) : Option (List Wire × State) := ops st b.data.toList

/-! ## What a patch means on the wire -/

/-- An attribute operation as the encoding carries it. A listener is sent as
its event name and decoder shape. A slot set to a value of another kind
(`.set (.attr n) (.prop v)`, …), which the diff never produces (it sets
`a.key` to `a.val`), is sent as a removal of the slot. -/
def _root_.Lasm.UI.AttrOp.wire : AttrOp → AttrOp
  | .set (.attr n) (.str s) => .set (.attr n) (.str s)
  | .set (.prop n) (.prop v) => .set (.prop n) (.prop v)
  | .set (.style n) (.str s) => .set (.style n) (.str s)
  | .set (.on ev) (.listener l) => .set (.on ev) (.listener ⟨ev, l.paths⟩)
  | .set k _ => .remove k
  | .remove k => .remove k

mutual
/-- What the applier does for one op of a patch on the children of `parent`:
the ops of `.sub i ops` act on the children of `i`. -/
def Wire.ofOp (parent : Nat) : Op Msg → List Wire
  | .insert n b => [.insert parent (toDom n) b]
  | .move i b => [.move parent i b]
  | .remove i => [.remove i]
  | .clear => [.clear parent]
  | .text i s => [.text i s]
  | .attrs i aops => [.attrs i (aops.map AttrOp.wire)]
  | .sub i ops => Wire.ofOps i ops
/-- What the applier does for a patch on the children of `parent`, in order. -/
def Wire.ofOps (parent : Nat) : List (Op Msg) → List Wire
  | [] => []
  | o :: os => Wire.ofOp parent o ++ Wire.ofOps parent os
end

/-! ## Sessions -/

/-- The frames of a session as the encoder writes them: each `(ops, root)` is
one frame (`Encode.frame`), the interning and decoder tables carried from one
frame to the next as the runtime does. -/
def encodeAll (t : Encode.Tables) : List (Array (Op Msg) × Nat) → List ByteArray
  | [] => []
  | (ops, root) :: fs => (Encode.frame t ops root).1 :: encodeAll (Encode.frame t ops root).2 fs

/-- The frames of a session as the applier reads them, in turn, its tables
carried from one frame to the next. -/
def frames (st : State) : List ByteArray → Option (List (List Wire))
  | [] => some []
  | b :: bs =>
    match frame st b with
    | some (w, st) => (frames st bs).map (w :: ·)
    | none => none

end Lasm.UI.Decode
