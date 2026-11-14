/-
# What is tested, not yet proved, about Lasm.UI

Each candidate is a proposition in the form of `Spec.lean` (a named
`def … : Prop`, a plain-English doc comment, no proof) that tests check on
generated inputs but no theorem proves yet. The doc comment's `Tested by:`
line names the test, and that test cites the proposition with a
`Proposition:` line and evaluates its body on every input it draws
(docs/TESTING_STRATEGY.md §4). Proving one is mechanical: move the
definition to `Spec.lean` and add its theorem to `Theorems.lean`;
`node scripts/library-proofs.mjs` then requires the theorem.
`node scripts/propositions.mjs` checks every `Proposition:` and `Tested by:`
reference and generates the candidates list of library/PROOFS.md from this
file.
-/
import Lasm.UI.Proofs.Basic
import Lasm.UI.Proofs.Decode
import Lasm.UI.Proofs.Apply
import Lasm.UI.Url

namespace Lasm.UI.Candidates
open Lasm.UI Lasm.UI.Model Lasm.UI.Proofs

/-! ## The diff does no unneeded work -/

/-- **An unchanged view produces an empty patch.** For any well-formed
rendered tree, diffing it against the view it already shows emits no
operation at all: a frame whose view did not change touches no DOM node.
Tested by: test/ui/DiffModel.lean -/
def diff_unchanged_empty : Prop :=
  ∀ (Msg : Type) (old : List (Live Msg)) (next : Nat), WF old next →
    (diff old (old.map Live.erase) next).ops.size = 0

/-- **Keyed reorders only move.** When every old child is keyed, with
distinct keys, and the new children are a permutation of the old ones, the
patch inserts, removes and clears nothing: every node is kept and only
moved. Tested by: test/ui/DiffModel.lean -/
def keyed_reorder_only_moves : Prop :=
  ∀ (Msg : Type) (old : List (Live Msg)) (new : List (Html Msg)) (next : Nat), WF old next →
    (∀ x ∈ old, x.key?.isSome) → (old.map Live.key?).Nodup → new.Perm (old.map Live.erase) →
    (diff old new next).ops.all fun op => match op with | .insert .. | .remove _ | .clear => false | _ => true

/-- **The diff's patches conform.** For a well-formed live tree whose DOM
has distinct ids, none 0 (as every frame of a session has:
`Spec.session_correct`, `Spec.applier_correct`), the patch of `diff` to any
next view conforms (`Applier.confOps`, from the ids below the next free id):
every node an op names is a child of its parent there, inserts and moves
go before such a child or at the end and never before the moved node
itself, text changes are on text nodes and attribute changes on elements
(with every slot as the encoder sends it), and inserted subtrees bring
distinct new ids. With it, `Spec.applier_session` says the browser shows
every view (it assumes this as `Applier.DiffConforms`, the same statement).
Tested by: test/models/ui-applier-differential.mjs -/
def diff_conforms : Prop :=
  ∀ (Msg : Type) (old : List (Live Msg)) (new : List (Html Msg)) (next : Nat), WF old next → 0 < next →
    (Applier.idsIn (old.map toDom)).Nodup → 0 ∉ Applier.idsIn (old.map toDom) →
    (Applier.confOps (List.range next) (diff old new next).ops.toList (old.map toDom)).isSome

/-- `Spec.applier_session`'s assumption is this candidate. -/
example : diff_conforms = Applier.DiffConforms := rfl

/-! ## URLs -/

/-- **Percent-encoding round-trips.** Decoding what `percentEncode` writes
gives back the text, for every string (any Unicode, `%` and `+` included).
Tested by: test/ui/DiffModel.lean -/
def percent_round_trip : Prop :=
  ∀ s : String, Url.percentDecode (Url.percentEncode s) = some s

/-- **Encoded segments come back as the segments.** A path built from
non-empty segments, each percent-encoded, reads back (`Url.segments`) as
exactly those segments: a route matches the values a link was built from.
Tested by: test/ui/DiffModel.lean -/
def segments_round_trip : Prop :=
  ∀ segs : List String, (∀ s ∈ segs, s ≠ "") →
    Url.segments { path := String.join (segs.map fun s => "/" ++ Url.percentEncode s) } = segs

/-! ## The patch stream -/

/-- **An interned name or value is the table's or spelled in the frame.**
Reading an interned string (an attribute name or value, an event, a tag)
gives a string already in the table or one whose UTF-8 bytes are among the
bytes read, and the table grows by at most that string: a reference past the
table is a malformed frame, never a made-up name such as `undefined`.
Tested by: test/fuzz/targets/ui-patch.mjs -/
def interned_from_table_or_bytes : Prop :=
  ∀ (table : List String) (bs : Decode.Bytes), ∀ x ∈ Decode.intern table bs,
    (x.1 ∈ table ∨ x.1.toUTF8.data.toList <:+: bs) ∧ (x.2.1 = table ∨ x.2.1 = table ++ [x.1])

end Lasm.UI.Candidates
