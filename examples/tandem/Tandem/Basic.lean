/-
The replicated document: Fugue's tree of characters, kept as the set of
operations a replica has seen.

A replica's state (`Doc`) is a set of operations in a canonical form: the
insertions sorted by their ids (`Doc.nodes`), and the ids of the deleted
characters, sorted (`Doc.dels`). Applying an operation adds it to the set,
so the state depends only on which operations were applied, never on their
order or on how often each one arrived (Proofs/Converge.lean). The document a
replica shows is computed from that set by Fugue's tree traversal
(Tandem/Tree.lean).

Weidner and Kleppmann, "The Art of the Fugue: Minimizing Interleaving in
Collaborative Text Editing" (arXiv:2305.00583), Algorithm 1: every character
is a node of a tree; a node is a left or a right child of its parent (or of
the root); the text is the in-order traversal (left children, the node,
right children), same-side siblings in the order of their ids.
-/
namespace Tandem

/-- A character's id: a Lamport counter and the replica that created it.
Ids are ordered by counter, then by replica (`Id.lt`). -/
structure Id where
  c : Nat
  r : Nat
  deriving DecidableEq, Hashable, Repr, Inhabited

/-- The order of ids: by counter, then by replica. -/
def Id.lt (a b : Id) : Bool := a.c < b.c || (a.c == b.c && a.r < b.r)

/-- Which child of its parent a node is. -/
inductive Side where
  | L
  | R
  deriving DecidableEq, Hashable, Repr, Inhabited

/-- One character of the document: its id, its parent (`none`: the root),
which side of the parent it hangs on, and the character. -/
structure Node where
  id : Id
  parent : Option Id
  side : Side
  ch : Char
  deriving DecidableEq, Repr, Inhabited

/-- An operation: insert a node, or delete the character with an id. -/
inductive Op where
  | ins (n : Node)
  | del (id : Id)
  deriving DecidableEq, Repr, Inhabited

/-- Lexicographic order on lists of numbers. -/
def lexLt : List Nat → List Nat → Bool
  | [], [] => false
  | [], _ :: _ => true
  | _ :: _, [] => false
  | a :: as, b :: bs => a < b || (a == b && lexLt as bs)

/-- A node as numbers, for the order `Node.min` uses; different nodes have
different keys. -/
def Node.key (n : Node) : List Nat :=
  [n.id.c, n.id.r] ++ (match n.parent with | none => [0] | some p => [1, p.c, p.r]) ++
    [match n.side with | .L => 0 | .R => 1, n.ch.toNat]

/-- Of two nodes, the one with the smaller key. When two different nodes
claim one id (only a faulty or malicious replica sends such a pair), every
replica keeps the same one of them, whatever the order they arrived in. -/
def Node.min (a b : Node) : Node := if lexLt b.key a.key then b else a

/-- A node that can be part of a tree: a child of the root is a right child,
and every other node's parent has a smaller counter, so following parents
always ends at the root. Other insertions are ignored, by every replica. -/
def Node.valid (n : Node) : Bool :=
  match n.parent with
  | none => n.side == .R
  | some p => p.c < n.id.c

/-- Adds a node to a list sorted by id (structural recursion; the proofs use
it, and `insNode` runs the same steps without growing the stack). -/
def insNodeSpec (x : Node) : List Node → List Node
  | [] => [x]
  | y :: ys =>
    if x.id.lt y.id then x :: y :: ys
    else if x.id = y.id then Node.min x y :: ys
    else y :: insNodeSpec x ys

/-- `insNodeSpec`, tail-recursive. -/
def insNodeGo (x : Node) : List Node → List Node → List Node
  | acc, [] => acc.reverseAux [x]
  | acc, y :: ys =>
    if x.id.lt y.id then acc.reverseAux (x :: y :: ys)
    else if x.id = y.id then acc.reverseAux (Node.min x y :: ys)
    else insNodeGo x (y :: acc) ys

/-- Adds a node to a list sorted by id; a node with an id already there
keeps the smaller (`Node.min`). -/
def insNode (x : Node) (l : List Node) : List Node := insNodeGo x [] l

/-- Adds an id to a sorted list of ids (structural recursion). -/
def insIdSpec (x : Id) : List Id → List Id
  | [] => [x]
  | y :: ys =>
    if x.lt y then x :: y :: ys
    else if x = y then y :: ys
    else y :: insIdSpec x ys

/-- `insIdSpec`, tail-recursive. -/
def insIdGo (x : Id) : List Id → List Id → List Id
  | acc, [] => acc.reverseAux [x]
  | acc, y :: ys =>
    if x.lt y then acc.reverseAux (x :: y :: ys)
    else if x = y then acc.reverseAux (y :: ys)
    else insIdGo x (y :: acc) ys

/-- Adds an id to a sorted list of ids, once. -/
def insId (x : Id) (l : List Id) : List Id := insIdGo x [] l

/-- A replica's state: the insertions it has seen, sorted by id, and the ids
of the characters deleted, sorted. -/
structure Doc where
  nodes : List Node := []
  dels : List Id := []
  deriving DecidableEq, Repr, Inhabited

namespace Doc

/-- The empty document. -/
def empty : Doc := {}

/-- Applies an operation: adds it to the set. An insertion that is not
`Node.valid` changes nothing. -/
def apply (d : Doc) : Op → Doc
  | .ins n => if n.valid then { d with nodes := insNode n d.nodes } else d
  | .del i => { d with dels := insId i d.dels }

/-- Applies operations in order. -/
def applyAll (d : Doc) (ops : List Op) : Doc := ops.foldl apply d

/-- The largest counter in the document (of a character or of a deletion). -/
def maxCounter (d : Doc) : Nat :=
  d.dels.foldl (fun m i => max m i.c) (d.nodes.foldl (fun m n => max m n.id.c) 0)

/-- Whether the character with this id is deleted. -/
def deleted (d : Doc) (i : Id) : Bool := d.dels.contains i

end Doc
end Tandem
