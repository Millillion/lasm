/-
# What is proved about Lasm.UI

Every proposition proved about Lasm.UI, as a named `def … : Prop` with a
plain-English doc comment and no proof. Each proposition `Spec.x` is proved
by the theorem `Lasm.UI.Theorems.x : Spec.x` (Theorems.lean), and
`node scripts/library-proofs.mjs` fails unless every proposition here has its
theorem and every theorem uses only Lean's standard axioms. library/PROOFS.md
is generated from this file.

Reading guide. The propositions are about the code the browser runs: `diff`
(Lasm.UI.Diff), which computes the patch for each frame, the binary encoding
of the patch (Lasm.UI.Encode), and the commands of Lasm.UI.Cmd. The DOM is a
model (Lasm.UI.Model: nodes with ids, attribute slots, and what each patch
operation does), which the JavaScript applier (src/lasm-modules/ui-dom.mjs)
implements with the DOM API. How the applier reads the bytes is written in
Lean as a reference decoder (Lasm.UI.Proofs.Decode, function for function the
reading half of the applier), and what it does to the DOM as a model of the
writing half (Lasm.UI.Applier, Proofs/Applier.lean: every node looked up by
id in one table for the document, as the JavaScript does, and the DOM's
refusals); that the JavaScript applier does what the decoder and the
applier model say is tested (test/models/ui-applier-differential.mjs runs
it on a DOM against the model), not proved.

Vocabulary used below:
- `Html Msg` is a view; `Live Msg` is a rendered tree (the view plus the DOM
  node id of each node); `Live.erase` forgets the ids, giving the view a
  rendered tree shows; `toDom` is the DOM a rendered tree stands for.
- `WF live next` (Lasm.UI.Proofs.Basic): the rendered tree is well formed:
  sibling ids are distinct and every id is below `next`, the next free id.
- `applyOps ops dom` is the DOM after the applier runs the patch `ops`.
-/
import Lasm.UI.Proofs
import Lasm.UI.Proofs.Wire
import Lasm.UI.Proofs.Apply
import Lasm.UI.Cmd

namespace Lasm.UI.Spec
open Lasm.UI Lasm.UI.Model Lasm.UI.Proofs

/-! ## Rendering: the DOM always shows the view -/

/-- **The diff is correct.** Take any well-formed rendered tree `old` and
any next view `new`. Applying the patch that `diff old new next` returns to
the DOM of `old` gives exactly the DOM of the new rendered tree; that tree
shows `new`; it is well formed again; and the next free id never goes down
(so ids are never reused). This is about the executable `diff` itself, with
every case it has: keyed moves, the two-ended matching and its key-map
fallback, inserts, removals, clearing, replacing nodes whose kind or tag
changed, text changes and attribute changes. -/
def diff_correct : Prop :=
  ∀ (Msg : Type) (old : List (Live Msg)) (new : List (Html Msg)) (next : Nat), WF old next →
    let r := diff old new next
    applyOps r.ops.toList (old.map toDom) = r.live.map toDom ∧ r.live.map Live.erase = new ∧
      WF r.live r.next ∧ next ≤ r.next

/-- **The first render is correct.** Under an empty root, the patch of the
first render (`mountOps`) builds the DOM of a well-formed rendered tree that
shows the view. -/
def mount_correct : Prop :=
  ∀ (Msg : Type) (new : List (Html Msg)) (next : Nat),
    let r := mountOps new next
    applyOps r.ops.toList [] = r.live.map toDom ∧ r.live.map Live.erase = new ∧ WF r.live r.next

/-- **Every frame stays correct.** Start from an empty root and render any
sequence of views, one frame each (diff the rendered tree against the next
view and apply the patch to the DOM, as the runtime does: `Session.step`).
After any number of frames, the DOM is exactly the DOM of the rendered tree,
that tree is well formed, and it shows the latest view. -/
def session_correct : Prop :=
  ∀ (Msg : Type) (views : List (List (Html Msg))),
    let s := views.foldl Session.step Session.empty
    s.dom = s.live.map toDom ∧ WF s.live s.next ∧ ∀ v, views.getLast? = some v → s.live.map Live.erase = v

/-- **The attribute diff is correct.** The attribute operations that
`diffAttrs old new` returns turn the attribute slots of `old` (attributes,
properties, styles and listeners, the last setting of each slot winning)
into exactly those of `new`: every slot `new` sets has its value, and every
other slot is unset. -/
def diffAttrs_correct : Prop :=
  ∀ (Msg : Type) (old new : List (Attr Msg)), applyAttrOps (diffAttrs old new) (attrsOf old) = attrsOf new

/-- **New nodes get fresh ids.** Rendering a view `h` from scratch with
`create h n` gives a tree whose root has id `n`, whose ids are all below the
returned next free id (which is above `n`), whose sibling ids are distinct,
and which shows `h`. -/
def create_correct : Prop :=
  ∀ (Msg : Type) (h : Html Msg) (n : Nat),
    let r := create h n
    r.1.id = n ∧ n < r.2 ∧ WFn r.2 r.1 ∧ r.1.erase = h

/-! ## The patch encoding: the browser reads exactly the patch -/

/-- **The browser reads every frame as exactly the patch Lean encoded.**
Lean sends each frame's patch to the browser as bytes (`Encode.frame`),
with tag, attribute and event names, short attribute values and event
decoder shapes interned in tables that both sides keep from frame to frame.
Take any session: any sequence of frames, each any patch on the children of
any node, encoded in turn from empty tables (`Decode.encodeAll`). The
applier's reading of those bytes (`Decode.frames`: Lasm.UI.Proofs.Decode,
the reading half of src/lasm-modules/ui-dom.mjs, its tables also carried
from frame to frame) never fails, and gives for each frame exactly the
operations of its patch (`Wire.ofOps`): every insert with the DOM of the
inserted tree (`toDom`), and every move, removal, clear, text change and
attribute operation, each on its node, in order. So the tables never fall out
of step, and every interned name, value and decoder shape is read back as
the one Lean meant. (An attribute operation that sets a slot to a value of
another kind, which `diff` never produces, is sent as a removal of the slot:
`AttrOp.wire`.) -/
def frames_decode : Prop :=
  ∀ (Msg : Type) (frames : List (Array (Op Msg) × Nat)),
    Decode.frames {} (Decode.encodeAll {} frames) =
      some (frames.map fun (ops, root) => Decode.Wire.ofOps root ops.toList)

/-! ## The applier: what the browser's DOM shows -/

/-- **The applier performs every conforming patch as the model says.** The
applier (Lasm.UI.Applier, the model of what src/lasm-modules/ui-dom.mjs does
to the DOM) performs a patch as the flat list of operations it reads from
the bytes (`Wire.ofOps`), naming every node by id in one table for the
whole document, and the DOM refuses some (an id not in the document, an
insert before a node that is not a child, into a text node or into the
moved node's own subtree). Take any DOM under the root whose ids are
distinct, none 0 (the root's) and all among `used`, and any patch that
conforms (`confOps`: each op's nodes are children of its parent there,
inserts and moves go before such a child or at the end and never before the
moved node itself, texts change on text nodes and attributes on elements,
and inserted subtrees bring distinct ids never used). Then no operation is
refused, the DOM after them is exactly `applyOps`' (Lasm.UI.Model, the
meaning `diff_correct` is proved against), and its ids are distinct again. -/
def applier_correct : Prop :=
  ∀ (Msg : Type) (ops : List (Op Msg)) (dom : List Dom) (used u : List Nat), (Applier.idsIn dom).Nodup →
    0 ∉ Applier.idsIn dom → (∀ x ∈ Applier.idsIn dom, x ∈ used) → 0 ∈ used → Applier.confOps used ops dom = some u →
    Applier.run (Decode.Wire.ofOps 0 ops) dom = some (applyOps ops dom) ∧ (Applier.idsIn (applyOps ops dom)).Nodup

/-- **The browser shows every view, if the diff's patches conform.** Assume
the candidate `Candidates.diff_conforms` (`Applier.DiffConforms`: the patch
`diff` writes for a well-formed live tree with distinct ids conforms; tested
on every frame of the model differential, not yet proved). Render any
sequence of views from an empty root, one frame each as the runtime does
(`Applier.trace`: the patch of each frame and the DOM of its live tree).
Then the applier, reading the bytes of every frame as Lean encodes them
(`Decode.encodeAll`, tables carried across frames) and performing them on
the DOM the last frame left, refuses none and leaves after each frame
exactly the DOM of that frame's live tree, which shows its view
(`session_correct`). This composes `diff_correct`, `frames_decode` and
`applier_correct`. -/
def applier_session : Prop :=
  Applier.DiffConforms → ∀ (Msg : Type) (views : List (List (Html Msg))),
    Applier.frames {} [] (Decode.encodeAll {} ((Applier.trace Session.empty views).map Prod.fst)) =
      (Applier.trace Session.empty views).map fun x => some x.2

/-- **Hydration builds what a fresh mount builds.** An app mounted with
`hydrate: true` adopts the server-rendered DOM with its first frame
(`Applier.hydrateFrame`): each node of the first render takes the server
node at its place when it is of the same kind (a text node; an element of
the same namespace and tag), keeping it, comments are dropped, and server
nodes left over are removed. For any view and any server DOM at all, the
applier reads the encoded first render, and hydrating with it gives the same
nodes as mounting the view from scratch (`Applier.bareIn`: the same ids,
kinds, namespaces, tags, texts and children, in order); only an adopted
element may keep a server attribute the view does not set. When the server
DOM renders the view (`Applier.Rendered`: a node of the same kind for each
node, comments anywhere, server attributes among the view's), the result is
exactly the fresh mount's DOM. -/
def hydrate_correct : Prop :=
  ∀ (Msg : Type) (view : List (Html Msg)) (server : List Applier.Server),
    let r := mountOps view 1
    ∃ ws st dom, Decode.frame {} (Encode.frame {} r.ops 0).1 = some (ws, st) ∧
      Applier.hydrateFrame server ws = some dom ∧ Applier.bareIn dom = Applier.bareIn (r.live.map toDom) ∧
      (Applier.Rendered server (r.live.map toDom) → dom = r.live.map toDom)

/-! ## Commands -/

/-- An effect with the messages it delivers forgotten: what it does, not
what it reports back. -/
def Effect.forget {α : Type} (e : Effect α) : Effect Unit := e.map fun _ => ()

/-- **Mapping commands composes.** `Cmd.map` is how a parent embeds a
child component's commands (its messages wrapped in the parent's). Mapping
by `g` and then by `f` is the same command as mapping once by `f ∘ g`, so
components nest to any depth. -/
def cmd_map_comp : Prop :=
  ∀ (α β γ : Type) (f : β → γ) (g : α → β) (c : Cmd α), (c.map g).map f = c.map (f ∘ g)

/-- **Mapping commands keeps their effects.** Mapping a command by any `f`
keeps exactly its effects, in order, each of the same kind with the same
data (the same request, delay, URL, storage key …): with the messages they
deliver forgotten (`Effect.forget`), the effects before and after are equal.
Only the messages change. -/
def cmd_map_effects : Prop :=
  ∀ (α β : Type) (f : α → β) (c : Cmd α), (c.map f).effects.map Effect.forget = c.effects.map Effect.forget

/-- **Mapping by the identity changes nothing.** -/
def cmd_map_id : Prop :=
  ∀ (α : Type) (c : Cmd α), c.map id = c

/-- **Mapping commutes with batching.** Mapping a batch of commands is the
batch of the mapped commands: no effect is lost, duplicated or reordered. -/
def cmd_map_batch : Prop :=
  ∀ (α β : Type) (f : α → β) (cs : List (Cmd α)), (Cmd.batch cs).map f = Cmd.batch (cs.map (Cmd.map f))

end Lasm.UI.Spec
