/-
Local edits: the operations a replica creates when its user types.

`insertNode d r i c` is Fugue's insert (Algorithm 1, lines 21–29): the new
character's left neighbour is the visible character before position `i` (or
the root); if that node has no right children the new node becomes its right
child, else the left child of the next node in the traversal (which then has
no left children). Either way the new character lands at position `i`
(`Spec.insert_lands_between`).

`edit d r new` turns a change of the whole text (what a `textarea` reports)
into operations: the characters between the common prefix and the common
suffix of the old and the new text are deleted, and the new ones are
inserted there as one run, each the right child of the one before
(`Spec.edit_yields_text`).
-/
import Tandem.Tree

namespace Tandem
namespace Doc

/-- The node after the first node with `x`'s id. Tail-recursive. -/
def after (x : Node) : List Node → Option Node
  | [] => none
  | y :: ys => if y.id = x.id then ys.head? else after x ys

/-- The element at index `i` (structural; `xs[i]?` would bring in the
instance's panicking `xs[i]!`, which the totality check rejects). -/
def nth? {α : Type} : List α → Nat → Option α
  | [], _ => none
  | x :: _, 0 => some x
  | _ :: xs, i + 1 => nth? xs i

/-- The id of the next character replica `r` creates. -/
def nextId (d : Doc) (r : Nat) : Id := ⟨d.maxCounter + 1, r⟩

/-- Where a character inserted at visible position `i` hangs in the tree,
with id `id` (positions past the end mean the end). -/
def placeAt (d : Doc) (id : Id) (i : Nat) (c : Char) : Node :=
  let vis := d.visible
  let i := min i vis.length
  match i with
  | 0 =>
    match d.seq with
    | [] => ⟨id, none, .R, c⟩
    | first :: _ => ⟨id, some first.id, .L, c⟩
  | i + 1 =>
    match nth? vis i with
    | none => ⟨id, none, .R, c⟩
    | some lo =>
      if (d.kids (some lo.id) .R).isEmpty then ⟨id, some lo.id, .R, c⟩
      else match after lo d.seq with
        | some ro => ⟨id, some ro.id, .L, c⟩
        | none => ⟨id, some lo.id, .R, c⟩

/-- The insertion of `c` at visible position `i` by replica `r`. -/
def insertNode (d : Doc) (r : Nat) (i : Nat) (c : Char) : Node := d.placeAt (d.nextId r) i c

/-- The deletion of the character at visible position `i` (none past the end). -/
def deleteAt (d : Doc) (i : Nat) : Option Id := (nth? d.visible i).map (·.id)

/-- The rest of a run after `prev`: each character the right child of the
one before, with the next counter. Tail-recursive. -/
def runGo (r : Nat) (prev : Node) : List Char → List Node → List Node
  | [], acc => acc.reverse
  | c :: cs, acc =>
    let n : Node := ⟨⟨prev.id.c + 1, r⟩, some prev.id, .R, c⟩
    runGo r n cs (n :: acc)

/-- A run of characters typed one after another starting at position `i`:
the first placed by `placeAt`, each next one the right child of the one
before, with consecutive counters. -/
def run (d : Doc) (r i : Nat) : List Char → List Node
  | [] => []
  | c :: cs =>
    let first := d.placeAt (d.nextId r) i c
    first :: runGo r first cs []

/-- How many leading elements two lists share. Tail-recursive. -/
def commonPrefix : List Char → List Char → Nat → Nat
  | a :: as, b :: bs, n => if a = b then commonPrefix as bs (n + 1) else n
  | _, _, n => n

/-- The operations that change `d`'s text into `new`, by replica `r`. -/
def edit (d : Doc) (r : Nat) (new : List Char) : List Op :=
  let old := d.chars
  let p := commonPrefix old new 0
  let s := commonPrefix ((old.drop p).reverse) ((new.drop p).reverse) 0
  let gone := ((d.visible.drop p).take (old.length - p - s)).map fun n => Op.del n.id
  let d1 := d.applyAll gone
  let typed := (new.drop p).take (new.length - p - s)
  gone ++ (d1.run r p typed).map .ins

end Doc
end Tandem
