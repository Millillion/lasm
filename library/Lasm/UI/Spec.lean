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
reading half of the applier); that the JavaScript applier does what the
decoder and the model say is tested, not proved.

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
