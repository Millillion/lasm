/-
Applying many operations at once: what a replica does with a long log (the
server's text, a browser opening a document). `applyAll` adds operations one
at a time, each a walk along the sorted lists; `applyMany` sorts the new
ones with the old and keeps, for each id, the node with the smallest key,
in O(n log n). `Spec.apply_many` proves it gives the same state.
-/
import Tandem.Basic

namespace Tandem

/-- The order `applyMany` sorts nodes in: by key (id first). -/
def Node.le (a b : Node) : Bool := !lexLt b.key a.key

/-- Keeps the first node of each run of equal ids (tail-recursive). -/
def firstOfIds : List Node → List Node := fun l => go l none []
where
  go : List Node → Option Id → List Node → List Node
    | [], _, acc => acc.reverse
    | n :: ns, prev, acc => if prev = some n.id then go ns prev acc else go ns (some n.id) (n :: acc)

/-- Keeps the first of each run of equal ids (tail-recursive). -/
def uniqIds : List Id → List Id := fun l => go l none []
where
  go : List Id → Option Id → List Id → List Id
    | [], _, acc => acc.reverse
    | i :: is, prev, acc => if prev = some i then go is prev acc else go is (some i) (i :: acc)

/-- Whether `a` comes no later than `b` (by counter, then replica). -/
def Id.le (a b : Id) : Bool := !b.lt a

namespace Doc

/-- `applyAll`, by sorting: the same state (`Spec.apply_many`). -/
def applyMany (d : Doc) (ops : List Op) : Doc :=
  let ins := ops.filterMap fun | .ins n => if n.valid then some n else none | .del _ => none
  let dels := ops.filterMap fun | .ins _ => none | .del i => some i
  { nodes := firstOfIds ((d.nodes ++ ins).mergeSort Node.le)
    dels := uniqIds ((d.dels ++ dels).mergeSort Id.le) }

end Doc
end Tandem
