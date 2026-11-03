/-
The text of a document: Fugue's in-order traversal of its tree.

`Doc.seqSpec` is the traversal as the paper writes it, a recursion over the
tree; the proofs are about it. `Doc.seq` is what runs: the same traversal
with an index of each node's children and an explicit stack, so a long line
of characters (a deep tree) cannot overflow a WebAssembly stack. The
theorem `Tandem.Proofs.seq_eq` proves the two equal on every well-formed
document.
-/
import Tandem.Basic
import Std.Data.HashMap
import Std.Data.HashSet

namespace Tandem
namespace Doc

/-- The children of `p` (`none`: the root) on side `s`, in id order. -/
def kids (d : Doc) (p : Option Id) (s : Side) : List Node :=
  d.nodes.filter fun n => n.parent == p && n.side == s

/-- The in-order traversal of the subtree of `n`, `f` levels deep. -/
def trav (d : Doc) : Nat → Node → List Node
  | 0, _ => []
  | f + 1, n =>
    (d.kids (some n.id) .L).flatMap (trav d f) ++ n :: (d.kids (some n.id) .R).flatMap (trav d f)

/-- Every node, deleted or not, in document order (the root's children are
all right children, `Node.valid`); `maxCounter + 1` levels reach every node,
since counters grow from parent to child. -/
def seqSpec (d : Doc) : List Node :=
  (d.kids none .R).flatMap (trav d (d.maxCounter + 1))

/-! What runs -/

/-- A step of the traversal: expand a node's subtree, or output the node. -/
inductive Frame where
  | visit (n : Node)
  | emit (n : Node)

/-- The traversal with an explicit stack; `k` gives the children; each step
uses one unit of fuel. Tail-recursive. -/
def walk (k : Option Id → Side → List Node) : Nat → List Frame → List Node → List Node
  | 0, _, acc => acc.reverse
  | _ + 1, [], acc => acc.reverse
  | f + 1, .emit n :: st, acc => walk k f st (n :: acc)
  | f + 1, .visit n :: st, acc =>
    walk k f ((k (some n.id) .L).map .visit ++ .emit n :: (k (some n.id) .R).map .visit ++ st) acc

/-- The children index: for each (parent, side), the children in id order. -/
def index (d : Doc) : Std.HashMap (Option Id × Side) (List Node) :=
  d.nodes.foldr (fun n m => m.insert (n.parent, n.side) (n :: m.getD (n.parent, n.side) [])) {}

/-- Every node, deleted or not, in document order. -/
def seq (d : Doc) : List Node :=
  let idx := d.index
  let k := fun p s => idx.getD (p, s) []
  walk k (2 * d.nodes.length + 1) ((k none .R).map .visit) []

/-- The deleted ids, as a set. -/
def delSet (d : Doc) : Std.HashSet Id := Std.HashSet.ofList d.dels

/-- The characters that are not deleted, in document order. -/
def visible (d : Doc) : List Node :=
  let ds := d.delSet
  d.seq.filter fun n => !ds.contains n.id

/-- The document's text, as characters. -/
def chars (d : Doc) : List Char := d.visible.map (·.ch)

/-- The document's text. -/
def text (d : Doc) : String := String.ofList d.chars

end Doc
end Tandem
