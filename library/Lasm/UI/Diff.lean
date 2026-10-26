/-
Lasm.UI diffing, in pure Lean. `Live Msg` is a rendered tree: the `Html` it
shows plus the id of each DOM node (the browser's applier keeps an id → node
table). `diff` compares the live tree with the next view and returns the
patch (`Op`s) that turns the DOM of the one into the DOM of the other, the
next live tree and the next free id. Lasm.UI.Proofs proves that against a
model of the DOM (`Lasm.UI.Model`); Lasm.UI.Encode writes the patch as the
binary stream the applier reads (docs/BROWSER.md, "Patch protocol").
-/
import Std.Data.HashMap
import Lasm.UI.Html

namespace Lasm.UI

/-- A rendered node: what the DOM shows, with node ids. -/
inductive Live (Msg : Type) where
  | text (id : Nat) (s : String)
  | elem (id : Nat) (ns : Ns) (tag : String) (key : Option String) (attrs : List (Attr Msg))
      (children : List (Live Msg))

instance : Inhabited (Live Msg) := ⟨.text 0 ""⟩

namespace Live

def id : Live Msg → Nat
  | .text id _ => id
  | .elem id .. => id

/-- The view a live tree shows. -/
def erase : Live Msg → Html Msg
  | .text _ s => .text s
  | .elem _ ns tag key attrs children => .elem ns tag key attrs (children.attach.map fun ⟨c, _⟩ => erase c)
termination_by l => sizeOf l
decreasing_by simp_wf; have := List.sizeOf_lt_of_mem ‹_›; omega

/-- Whether the diff may keep this node for `h` (same kind, namespace, tag and key). -/
def same : Live Msg → Html Msg → Bool
  | .text .., .text _ => true
  | .elem _ ns tag key .., .elem ns' tag' key' .. => ns == ns' && tag == tag' && key == key'
  | _, _ => false

/-- The key of an element (`none` for text and unkeyed elements). -/
def key? : Live Msg → Option String
  | .elem _ _ _ key .. => key
  | .text .. => none

end Live

def Html.key? : Html Msg → Option String
  | .elem _ _ key .. => key
  | .text .. => none

/-- A change to one attribute slot of an element. -/
inductive AttrOp where
  | set (k : AttrKey) (v : AttrVal)
  | remove (k : AttrKey)
  deriving DecidableEq, Repr, Inhabited

/-- A change to the children of one DOM node (the parent is the context: the
mount root, or the node of an enclosing `sub`). Nodes are named by id. -/
inductive Op (Msg : Type) where
  /-- Creates `node` (its ids are fresh) and inserts it before the child
  `before`, or appends it. -/
  | insert (node : Live Msg) (before : Option Nat)
  /-- Moves the child `id` before the child `before`, or to the end. -/
  | move (id : Nat) (before : Option Nat)
  /-- Removes the child `id`. -/
  | remove (id : Nat)
  /-- Removes every child. -/
  | clear
  /-- Replaces the text of the text node `id`. -/
  | text (id : Nat) (s : String)
  /-- Changes attributes of the element `id`. -/
  | attrs (id : Nat) (ops : List AttrOp)
  /-- Changes the children of the element `id`. -/
  | sub (id : Nat) (ops : List (Op Msg))

instance : Inhabited (Op Msg) := ⟨.clear⟩

/-! Creating nodes -/

mutual
/-- Assigns ids `next, next+1, …` to a new tree (preorder). -/
def create : Html Msg → Nat → Live Msg × Nat
  | .text s, n => (.text n s, n + 1)
  | .elem ns tag key attrs cs, n =>
    let r := createAux cs (n + 1) #[]
    (.elem n ns tag key attrs r.1.toList, r.2)
/-- `create` over siblings, accumulating (a loop, for long lists). -/
def createAux : List (Html Msg) → Nat → Array (Live Msg) → Array (Live Msg) × Nat
  | [], n, acc => (acc, n)
  | h :: t, n, acc =>
    let r := create h n
    createAux t r.2 (acc.push r.1)
end

/-! Attributes -/

/-- The value a list of attributes gives slot `k` (the last one wins). -/
def lastVal (k : AttrKey) : List (Attr Msg) → Option AttrVal
  | [] => none
  | a :: l =>
    match lastVal k l with
    | some v => some v
    | none => if a.key == k then some a.val else none

def hasKey (k : AttrKey) : List (Attr Msg) → Bool
  | [] => false
  | a :: l => a.key == k || hasKey k l

/-- Same slot and value (`a.key == b.key && a.val == b.val`, without building them). -/
def Attr.same : Attr Msg → Attr Msg → Bool
  | .attr n v, .attr n' v' => n == n' && v == v'
  | .prop n v, .prop n' v' => n == n' && v == v'
  | .style n v, .style n' v' => n == n' && v == v'
  | .on l _, .on l' _ => l.event == l'.event && l == l'
  | _, _ => false

/-- The two lists give the same slots the same values, in the same order. -/
def attrsEq : List (Attr Msg) → List (Attr Msg) → Bool
  | [], [] => true
  | a :: as, b :: bs => a.same b && attrsEq as bs
  | _, _ => false

/-- Sets for every slot whose last value in `new` differs from `old`'s. -/
def attrSets (old : List (Attr Msg)) : List (Attr Msg) → List AttrOp
  | [] => []
  | a :: rest =>
    let t := attrSets old rest
    if hasKey a.key rest || lastVal a.key old == some a.val then t else .set a.key a.val :: t

/-- Removes for every slot of `old` that `new` does not have. -/
def attrRemoves (new : List (Attr Msg)) : List (Attr Msg) → List AttrOp
  | [] => []
  | a :: rest => if hasKey a.key new then attrRemoves new rest else .remove a.key :: attrRemoves new rest

def diffAttrs (old new : List (Attr Msg)) : List AttrOp :=
  if attrsEq old new then [] else attrRemoves new old ++ attrSets old new

/-! Children -/

structure NodeResult (Msg : Type) where
  /-- Ops for the parent's children list (they name this node by id). -/
  ops : List (Op Msg)
  live : Live Msg
  next : Nat

structure ChildrenResult (Msg : Type) where
  ops : Array (Op Msg)
  live : List (Live Msg)
  next : Nat

section Children
variable {Msg β : Type} (val : β → Html Msg) (f : Live Msg → β → Nat → NodeResult Msg)

/-- Creates `bs` and inserts each before `before` (or appends). -/
def insertAll (before : Option Nat) : List β → Nat → Array (Op Msg) → Array (Live Msg) →
    Array (Op Msg) × Array (Live Msg) × Nat
  | [], n, ops, acc => (ops, acc, n)
  | b :: bs, n, ops, acc =>
    let r := create (val b) n
    insertAll before bs r.2 (ops.push (.insert r.1 before)) (acc.push r.1)

def removeAll : List (Live Msg) → Array (Op Msg) → Array (Op Msg)
  | [], ops => ops
  | o :: os, ops => removeAll os (ops.push (.remove o.id))

/-- Creates `new[i]` for `lo ≤ i < hi` and inserts each before `before`. -/
def insertRange (na : Array β) (before : Option Nat) (lo hi : Nat) (n : Nat) (ops : Array (Op Msg))
    (acc : Array (Live Msg)) : Array (Op Msg) × Array (Live Msg) × Nat :=
  if _h : lo < hi then
    match na[lo]? with
    | some b =>
      let r := create (val b) n
      insertRange na before (lo + 1) hi r.2 (ops.push (.insert r.1 before)) (acc.push r.1)
    | none => (ops, acc, n)
  else (ops, acc, n)
termination_by hi - lo

/-- Removes the old nodes still present in `old[lo:hi]`. -/
def removeRange (oa : Array (Option (Live Msg))) (lo hi : Nat) (ops : Array (Op Msg)) : Array (Op Msg) :=
  if _h : lo < hi then
    match oa[lo]? with
    | some (some o) => removeRange oa (lo + 1) hi (ops.push (.remove o.id))
    | _ => removeRange oa (lo + 1) hi ops
  else ops
termination_by hi - lo

/-- Old keyed nodes in `old[lo:hi]` by key. -/
def keyIndex (oa : Array (Option (Live Msg))) (lo hi : Nat) (m : Std.HashMap String Nat) : Std.HashMap String Nat :=
  if _h : lo < hi then
    match oa[lo]? with
    | some (some o) =>
      match o.key? with
      | some k => keyIndex oa (lo + 1) hi (m.insert k lo)
      | none => keyIndex oa (lo + 1) hi m
    | _ => keyIndex oa (lo + 1) hi m
  else m
termination_by hi - lo

/-- The two-ended children diff (as in snabbdom): the window `old[oLo:oHi]`
(consumed slots are `none`) against `new[nLo:nHi]`. The DOM children are
`pre ++ (the window's nodes) ++ suf` throughout. -/
def twoEnded (oa : Array (Option (Live Msg))) (oLo oHi : Nat) (na : Array β) (nLo nHi : Nat)
    (pre : Array (Live Msg)) (suf : List (Live Msg)) (ops : Array (Op Msg)) (next : Nat)
    (keys : Option (Std.HashMap String Nat)) : ChildrenResult Msg :=
  if _hO : oLo < oHi then
    if _hN : nLo < nHi then
      match oa[oLo]?, oa[oHi - 1]?, na[nLo]?, na[nHi - 1]? with
      | some none, _, _, _ => twoEnded oa (oLo + 1) oHi na nLo nHi pre suf ops next keys
      | _, some none, _, _ => twoEnded oa oLo (oHi - 1) na nLo nHi pre suf ops next keys
      | some (some os), some (some oe), some ns, some ne =>
        if os.same (val ns) then
          let r := f os ns next
          twoEnded oa (oLo + 1) oHi na (nLo + 1) nHi (pre.push r.live) suf (ops ++ r.ops) r.next keys
        else if oe.same (val ne) then
          let r := f oe ne next
          twoEnded oa oLo (oHi - 1) na nLo (nHi - 1) pre (r.live :: suf) (ops ++ r.ops) r.next keys
        else if os.same (val ne) then
          let r := f os ne next
          let ops := (ops ++ r.ops).push (.move os.id (suf.head?.map Live.id))
          twoEnded oa (oLo + 1) oHi na nLo (nHi - 1) pre (r.live :: suf) ops r.next keys
        else if oe.same (val ns) then
          let r := f oe ns next
          let ops := (ops ++ r.ops).push (.move oe.id (some os.id))
          twoEnded oa oLo (oHi - 1) na (nLo + 1) nHi (pre.push r.live) suf ops r.next keys
        else
          -- A keyed new node may match an old node inside the window.
          let (keys, found) : Option (Std.HashMap String Nat) × Option (Nat × Live Msg) :=
            match (val ns).key? with
            | none => (keys, none)
            | some k =>
              let m := keys.getD (keyIndex oa oLo oHi {})
              match m[k]? with
              | some i =>
                if oLo ≤ i ∧ i < oHi then
                  match oa[i]? with
                  | some (some x) => (some m, if x.same (val ns) then some (i, x) else none)
                  | _ => (some m, none)
                else (some m, none)
              | none => (some m, none)
          match found with
          | some (i, x) =>
            let r := f x ns next
            let ops := (ops ++ r.ops).push (.move x.id (some os.id))
            twoEnded (oa.set! i none) oLo oHi na (nLo + 1) nHi (pre.push r.live) suf ops r.next keys
          | none =>
            let c := create (val ns) next
            twoEnded oa oLo oHi na (nLo + 1) nHi (pre.push c.1) suf (ops.push (.insert c.1 (some os.id))) c.2 keys
      | _, _, _, _ => ⟨ops, pre.toList ++ suf, next⟩
    else ⟨removeRange oa oLo oHi ops, pre.toList ++ suf, next⟩
  else
    let r := insertRange val na (suf.head?.map Live.id) nLo nHi next ops pre
    ⟨r.1, r.2.1.toList ++ suf, r.2.2⟩
termination_by (oHi - oLo) + (nHi - nLo)

/-- The common prefix (on lists, no allocation: most frames end here), then the
two-ended diff of the rest. -/
def prefixPhase : List (Live Msg) → List β → Nat → Array (Op Msg) → Array (Live Msg) → ChildrenResult Msg
  | [], bs, next, ops, pre =>
    let r := insertAll val none bs next ops pre
    ⟨r.1, r.2.1.toList, r.2.2⟩
  | os@(_ :: _), [], next, ops, pre => ⟨removeAll os ops, pre.toList, next⟩
  | o :: os, b :: bs, next, ops, pre =>
    if o.same (val b) then
      let r := f o b next
      prefixPhase os bs r.next (ops ++ r.ops) (pre.push r.live)
    else
      let oa : Array (Option (Live Msg)) := ((o :: os).map some).toArray
      let na : Array β := (b :: bs).toArray
      twoEnded val f oa 0 oa.size na 0 na.size pre [] ops next none

/-- The patch for a parent's children: `old` (rendered) to `new`. `f` diffs one
kept node. -/
def diffChildren (old : List (Live Msg)) (new : List β) (next : Nat) : ChildrenResult Msg :=
  match old, new with
  | [], [] => ⟨#[], [], next⟩
  | _ :: _, [] => ⟨#[.clear], [], next⟩
  | old, new => prefixPhase val f old new next #[] (Array.emptyWithCapacity new.length)

end Children

/-- The patch for one node, named by its id in the parent's ops: the node's own
attribute and children changes, or its replacement when its kind, namespace
or tag changed. -/
def diffNode (o : Live Msg) (n : Html Msg) (next : Nat) : NodeResult Msg :=
  match o, n with
  | .text id s, .text s' => ⟨if s == s' then [] else [.text id s'], .text id s', next⟩
  | .elem id ns tag _ oattrs ocs, .elem ns' tag' key' nattrs ncs =>
    if ns == ns' && tag == tag' then
      let aops := diffAttrs oattrs nattrs
      let r := diffChildren Subtype.val (fun o c nx => diffNode o c.1 nx) ocs ncs.attach next
      let ops : List (Op Msg) := if r.ops.isEmpty then [] else [.sub id r.ops.toList]
      let ops := if aops.isEmpty then ops else .attrs id aops :: ops
      ⟨ops, .elem id ns' tag' key' nattrs r.live, r.next⟩
    else
      let c := create n next
      ⟨[.insert c.1 (some o.id), .remove o.id], c.1, c.2⟩
  | o, n =>
    let c := create n next
    ⟨[.insert c.1 (some o.id), .remove o.id], c.1, c.2⟩
termination_by sizeOf n
decreasing_by
  simp_wf
  have := List.sizeOf_lt_of_mem c.2
  omega

/-- The patch from the rendered children of a node (the mount root) to `new`. -/
def diff (old : List (Live Msg)) (new : List (Html Msg)) (next : Nat) : ChildrenResult Msg :=
  diffChildren id diffNode old new next

/-- The first render: `diff [] new`. -/
def mountOps (new : List (Html Msg)) (next : Nat) : ChildrenResult Msg := diff [] new next

end Lasm.UI
