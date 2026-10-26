/-
A pure model of the DOM as the `lasm:ui-dom` applier changes it: nodes with
ids, attribute slots as functions (so attribute order is unobservable, as in
the DOM), and the semantics of every patch `Op` (`applyOps`). The applier in
src/lasm-modules/ui-dom.mjs implements exactly these operations with the DOM API:
`insert` is `insertBefore`/`appendChild` of a new subtree, `move` is
`insertBefore` of an existing child, `remove` is `Node.remove`, `clear` is
`textContent = ""`. Lasm.UI.Proofs proves `diff` correct against this model.
-/
import Lasm.UI.Diff

namespace Lasm.UI.Model

/-- The attribute slots of an element: attributes, properties, styles and
listeners (`none`: unset). -/
abbrev Attrs := AttrKey → Option AttrVal

/-- A DOM node: a text node or an element, with the applier's node id. -/
inductive Dom where
  | text (id : Nat) (s : String)
  | elem (id : Nat) (ns : Ns) (tag : String) (attrs : Attrs) (children : List Dom)

namespace Dom

def id : Dom → Nat
  | .text id _ => id
  | .elem id .. => id

def setText (s : String) : Dom → Dom
  | .text id _ => .text id s
  | d => d

def modAttrs (g : Attrs → Attrs) : Dom → Dom
  | .elem id ns tag a cs => .elem id ns tag (g a) cs
  | d => d

def modChildren (g : List Dom → List Dom) : Dom → Dom
  | .elem id ns tag a cs => .elem id ns tag a (g cs)
  | d => d

end Dom

/-- The slots a list of attributes sets (`setAttribute` and so on in order). -/
def attrsOf (l : List (Attr Msg)) : Attrs := fun k => lastVal k l

/-- The DOM a live tree stands for. -/
def toDom : Live Msg → Dom
  | .text id s => .text id s
  | .elem id ns tag _ attrs cs => .elem id ns tag (attrsOf attrs) (cs.attach.map fun ⟨c, _⟩ => toDom c)
termination_by l => sizeOf l
decreasing_by simp_wf; have := List.sizeOf_lt_of_mem ‹_›; omega

def applyAttrOp : AttrOp → Attrs → Attrs
  | .set k v, a => fun k' => if k' = k then some v else a k'
  | .remove k, a => fun k' => if k' = k then none else a k'

def applyAttrOps : List AttrOp → Attrs → Attrs
  | [], a => a
  | op :: ops, a => applyAttrOps ops (applyAttrOp op a)

/-- `parent.insertBefore(d, child before)`; `none` appends. -/
def insertBefore (d : Dom) : Option Nat → List Dom → List Dom
  | none, l => l ++ [d]
  | some _, [] => [d]
  | some b, x :: l => if x.id = b then d :: x :: l else x :: insertBefore d (some b) l

/-- The child with id `i`. -/
def findId (i : Nat) : List Dom → Option Dom
  | [] => none
  | x :: l => if x.id = i then some x else findId i l

/-- Removes the child with id `i`. -/
def removeId (i : Nat) (l : List Dom) : List Dom := l.filter (·.id ≠ i)

/-- Applies `g` to the child with id `i`. -/
def modId (i : Nat) (g : Dom → Dom) (l : List Dom) : List Dom := l.map fun d => if d.id = i then g d else d

mutual
/-- The children of a node after the ops. -/
def applyOps : List (Op Msg) → List Dom → List Dom
  | [], l => l
  | op :: ops, l => applyOps ops (applyOp op l)
def applyOp : Op Msg → List Dom → List Dom
  | .insert n before, l => insertBefore (toDom n) before l
  | .move i before, l =>
    match findId i l with
    | some d => insertBefore d before (removeId i l)
    | none => l
  | .remove i, l => removeId i l
  | .clear, _ => []
  | .text i s, l => modId i (Dom.setText s) l
  | .attrs i ops, l => modId i (Dom.modAttrs (applyAttrOps ops)) l
  | .sub i ops, l => modId i (Dom.modChildren (applyOps ops)) l
end

end Lasm.UI.Model
