/-
A model of what the browser's applier does to the DOM: the writing half of
src/lasm-modules/ui-dom.mjs (`apply(frame)` and its cases), over an
abstract DOM tree. Proofs/Decode.lean models how the applier reads a frame
(a list of `Wire` operations); this file models how it performs them:

| ui-dom.mjs                                  | here                       |
| ------------------------------------------- | -------------------------- |
| `nodes.get(id)` (`at(id)`), the id table    | `findIn` (by id, anywhere) |
| `parent.insertBefore(node, at(b - 1))`      | `place`, `step` (`insert`) |
| `parent.insertBefore(at(id), at(b - 1))`    | `step` (`move`)            |
| `at(id).remove()`                           | `pruneIn`, `step` (`remove`) |
| `at(parent).textContent = ""`               | `step` (`clear`)           |
| `at(id).data = s`                           | `step` (`text`)            |
| `attr(n, k)` on `at(id)`                    | `step` (`attrs`)           |
| `apply(frame)`                              | `run`, `frame`, `frames`   |

Unlike Lasm.UI.Model, whose `applyOps` is the meaning of a patch as the diff
writes it (ops nested by parent, each looked up among its parent's
children), the applier works as the JavaScript does: every operation names
its nodes by id, looked up in one table for the whole document, and the DOM
refuses what it refuses (`none`: the applier or the DOM throws):

* an id that is not in the document (`Lasm.UI: no node`);
* an insert or move before a node that is not a child of the parent
  (`NotFoundError`), into a text node or into the moved node's own subtree
  (`HierarchyRequestError`);
* attributes on a text node (`Lasm.UI: node … is not an element`).

Where the DOM accepts an operation the diff never writes, the model does
what the DOM does: a move before the moved node itself leaves it in place,
a clear of a text node empties its text, a text change on an element
changes nothing visible (`data` is then an expando property).

The mount root is node 0 (`nodes = new Map([[0, root]])`); the model's
forest is the root's children. What the model leaves out, and the model
differential (test/models/ui-applier-differential.mjs) does not generate:
operations on the root itself (removing it, its attributes), ids that were
in the document but were removed (the applier forgets a removed subtree's
inner ids after the frame is painted), an id used twice, names the DOM
refuses (`setAttribute("1")`) and properties that are DOM members (whose
setters do more than store the value). A DOM property cannot be unset: a
removed one reads as its type's empty value, so the differential compares
properties with "", false and unset taken as equal, and styles with "" and
unset equal (`style.setProperty(n, "")` removes the style).

Hydration (`createUi({ hydrate: true })`: the first frame's inserts under
the root adopt the server-rendered children in order) is modelled by
`hydrateFrame` below.
-/
import Lasm.UI.Proofs.Decode

namespace Lasm.UI.Applier
open Lasm.UI Lasm.UI.Model Lasm.UI.Decode

/-! ## The document, by id -/

mutual
/-- Every id in a node's subtree, the node's first (document order). -/
def _root_.Lasm.UI.Model.Dom.ids : Dom → List Nat
  | .text i _ => [i]
  | .elem i _ _ _ cs => i :: idsIn cs
/-- Every id in a forest, in document order. -/
def idsIn : List Dom → List Nat
  | [] => []
  | d :: ds => d.ids ++ idsIn ds
end

mutual
/-- The node with id `i` in a subtree (the first in document order). -/
def _root_.Lasm.UI.Model.Dom.find (i : Nat) : Dom → Option Dom
  | .text j s => if j = i then some (.text j s) else none
  | .elem j ns tag a cs => if j = i then some (.elem j ns tag a cs) else findIn i cs
/-- The node with id `i` in a forest (`nodes.get(i)`). -/
def findIn (i : Nat) : List Dom → Option Dom
  | [] => none
  | d :: ds => (d.find i).or (findIn i ds)
end

mutual
/-- Replaces the node with id `i` by `g` of it. -/
def _root_.Lasm.UI.Model.Dom.update (i : Nat) (g : Dom → Dom) : Dom → Dom
  | .text j s => if j = i then g (.text j s) else .text j s
  | .elem j ns tag a cs => if j = i then g (.elem j ns tag a cs) else .elem j ns tag a (updateIn i g cs)
/-- Replaces the node with id `i` in a forest by `g` of it. -/
def updateIn (i : Nat) (g : Dom → Dom) : List Dom → List Dom
  | [] => []
  | d :: ds => d.update i g :: updateIn i g ds
end

mutual
/-- Removes the descendants with id `i`. -/
def _root_.Lasm.UI.Model.Dom.prune (i : Nat) : Dom → Dom
  | .text j s => .text j s
  | .elem j ns tag a cs => .elem j ns tag a (pruneIn i cs)
/-- Removes the node with id `i` from a forest, wherever it is (`node.remove()`). -/
def pruneIn (i : Nat) : List Dom → List Dom
  | [] => []
  | d :: ds => if d.id = i then pruneIn i ds else d.prune i :: pruneIn i ds
end

/-- The children of node `p` (the root's for 0); `none` if there is no such
node or it is a text node (which cannot have children). -/
def kidsOf (p : Nat) (f : List Dom) : Option (List Dom) :=
  if p = 0 then some f
  else match findIn p f with
    | some (.elem _ _ _ _ cs) => some cs
    | _ => none

/-- Sets the children of node `p` (the root's for 0). -/
def setKids (p : Nat) (k : List Dom) (f : List Dom) : List Dom :=
  if p = 0 then k else updateIn p (Dom.modChildren fun _ => k) f

/-- `insertBefore(d, child b)` among children `k`: `none` appends; a `b` that
is not a child is refused (`NotFoundError`). -/
def place (d : Dom) (b : Option Nat) (k : List Dom) : Option (List Dom) :=
  match b with
  | none => some (k ++ [d])
  | some x => if x ∈ k.map Dom.id then some (insertBefore d (some x) k) else none

/-! ## Operations -/

/-- One operation of a frame on the root's children `f`, as the applier and
the DOM perform it (`none`: one of them throws). -/
def step : Wire → List Dom → Option (List Dom)
  | .insert p d b, f =>
    match kidsOf p f with
    | some k => (place d b k).map fun k' => setKids p k' f
    | none => none
  | .move p i b, f =>
    if i = 0 then none
    else match findIn i f with
      | none => none
      | some n =>
        if p ∈ n.ids then none
        else match kidsOf p f with
          | none => none
          | some k =>
            match b with
            | some x =>
              if x ∉ k.map Dom.id then none
              else if x = i then some f
              else (kidsOf p (pruneIn i f)).map fun k' => setKids p (insertBefore n (some x) k') (pruneIn i f)
            | none => (kidsOf p (pruneIn i f)).map fun k' => setKids p (k' ++ [n]) (pruneIn i f)
  | .remove i, f =>
    if i = 0 then none
    else match findIn i f with
      | some _ => some (pruneIn i f)
      | none => none
  | .clear p, f =>
    if p = 0 then some []
    else match findIn p f with
      | some (.text ..) => some (updateIn p (Dom.setText "") f)
      | some (.elem ..) => some (setKids p [] f)
      | none => none
  | .text i s, f =>
    if i = 0 then some f
    else match findIn i f with
      | some (.text ..) => some (updateIn i (Dom.setText s) f)
      | some (.elem ..) => some f
      | none => none
  | .attrs i ops, f =>
    if i = 0 then none
    else match findIn i f with
      | some (.elem ..) => some (updateIn i (Dom.modAttrs (applyAttrOps ops)) f)
      | _ => none

/-- The operations of a frame, in order. -/
def run : List Wire → List Dom → Option (List Dom)
  | [], f => some f
  | w :: ws, f => (step w f).bind (run ws)

/-- A frame (`apply(frame)`): read (Decode.frame) and performed; the
decoder's tables for the next frame. -/
def frame (st : State) (f : List Dom) (b : ByteArray) : Option (List Dom × State) :=
  match Decode.frame st b with
  | some (ws, st') => (run ws f).map fun f' => (f', st')
  | none => none

/-- The DOM after each frame of a session, from an empty root, ending at the
first frame the applier refuses (`none`). -/
def frames (st : State) (f : List Dom) : List ByteArray → List (Option (List Dom))
  | [] => []
  | b :: bs =>
    match frame st f b with
    | some (f', st') => some f' :: frames st' f' bs
    | none => [none]

/-! ## Hydration -/

/-- A server-rendered node, before the app adopts it: what the browser
parsed from the HTML of Lasm.UI.render (no ids; comments separate adjacent
text nodes). -/
inductive Server where
  | text (s : String)
  | comment
  | elem (ns : Ns) (tag : String) (attrs : Attrs) (children : List Server)

/-- Whether `node(existing)` adopts the server node for the stream's node: a
text node for a text node, an element of the same namespace and tag for an
element. -/
def adopts : Server → Dom → Bool
  | .text _, .text .. => true
  | .elem ns tag .., .elem _ ns' tag' .. => ns == ns' && tag == tag'
  | _, _ => false

/-- An adopted element's attribute slots: the stream's attribute operations
(sets, as the encoder writes a new node's attributes) applied to the server's
attributes, which they do not clear. -/
def merge (new old : Attrs) : Attrs := fun k => (new k).or (old k)

mutual
/-- `node(existing)` for a server node it adopts: the stream's node, with the
server's attribute slots that the stream does not set, its children adopted
in turn. -/
def hydrate : Server → Dom → Dom
  | .elem _ _ a cs, .elem i ns tag a' ds => .elem i ns tag (merge a' a) (hydrateIn cs ds)
  | _, d => d
/-- The children loop of an adopted node (and the first frame's inserts under
the root): comments before a child are removed, a server node that the
child adopts is kept in place, one it does not stays where it is (the new
node goes before it, and the next child may adopt it), and what is left
after the last child is removed. -/
def hydrateIn : List Server → List Dom → List Dom
  | _, [] => []
  | [], ds => ds
  | .comment :: cs, d :: ds => hydrateIn cs (d :: ds)
  | c :: cs, d :: ds => if adopts c d then hydrate c d :: hydrateIn cs ds else d :: hydrateIn (c :: cs) ds
end

/-- The node an append under the root inserts. -/
def rootAppend : Wire → Option Dom
  | .insert 0 d none => some d
  | _ => none

/-- The first frame of a hydrating app (`createUi({ hydrate: true })`): its
inserts under the root (appends: the first render's patch is only these)
adopt the server-rendered children in order. A frame with any other
operation is outside the model (`none`). -/
def hydrateFrame (server : List Server) (ws : List Wire) : Option (List Dom) :=
  (ws.mapM rootAppend).map (hydrateIn server)

end Lasm.UI.Applier
