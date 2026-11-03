/-
Every proposition of `Proofs/Spec.lean`, proved from the lemmas of the other
files.
-/
import Proofs.Spec

namespace Tandem.Proofs
open Tandem Doc Wire Sync

theorem applyAll_reach {d : Doc} (h : Reachable d) (os : List Op) : Reachable (d.applyAll os) := by
  obtain ⟨ops, rfl⟩ := h
  exact ⟨ops ++ os, (applyAll_append _ _ _).symm⟩

theorem converge : Spec.converge := fun _ _ h => state_of_set h

theorem converge_text : Spec.converge_text := fun _ _ h => by rw [state_of_set h]

theorem ops_commute : Spec.ops_commute := by
  rintro d ⟨ops, rfl⟩ a b
  have e : ∀ x y : Op, ((Doc.empty.applyAll ops).apply x).apply y = Doc.empty.applyAll (ops ++ [x, y]) := by
    intro x y; simp [Doc.applyAll, List.foldl_append]
  rw [e, e]
  apply state_of_set; intro o; simp; constructor <;> rintro (h | h | h) <;> simp [h]

theorem ops_idempotent : Spec.ops_idempotent := by
  rintro d ⟨ops, rfl⟩ a
  have e1 : ((Doc.empty.applyAll ops).apply a).apply a = Doc.empty.applyAll (ops ++ [a, a]) := by
    simp [Doc.applyAll, List.foldl_append]
  have e2 : (Doc.empty.applyAll ops).apply a = Doc.empty.applyAll (ops ++ [a]) := by
    simp [Doc.applyAll, List.foldl_append]
  rw [e1, e2]
  apply state_of_set; intro o; simp

theorem redelivery_ignored : Spec.redelivery_ignored := by
  intro ops o ho
  have e : (Doc.empty.applyAll ops).apply o = Doc.empty.applyAll (ops ++ [o]) := by
    simp [Doc.applyAll, List.foldl_append]
  rw [e]
  apply state_of_set; intro x; simp
  rintro rfl; exact ho

theorem apply_many : Spec.apply_many := applyMany_eq

theorem replica_keeps_unacked : Spec.replica_keeps_unacked := by
  intro rp sent reply h
  simp [Replica.onReply, h]

theorem replica_edit_doc (rp : Replica) (new : List Char) :
    (rp.edit new).doc = rp.doc.applyAll (rp.doc.edit rp.replica new) := rfl

theorem replica_edit_yields_text : Spec.replica_edit_yields_text := by
  intro rp hd new
  rw [replica_edit_doc]
  exact ⟨(edit_text (wf_reachable hd) rp.replica new).2, applyAll_reach hd _⟩

theorem many_reach {d : Doc} (h : Reachable d) (os : List Op) : Reachable (d.applyMany os) := by
  obtain ⟨ops, rfl⟩ := h
  rw [applyMany_eq]; exact ⟨_, rfl⟩

theorem replica_reachable : Spec.replica_reachable := by
  intro rp sent reply h
  constructor
  · unfold Replica.onReply; split
    · exact many_reach h _
    · exact h
  · unfold Replica.onPush; split
    · exact many_reach h _
    · exact h

theorem insert_lands_between : Spec.insert_lands_between :=
  fun _ hd r i c hi => insert_text (wf_reachable hd) r i c hi

theorem delete_removes_one : Spec.delete_removes_one :=
  fun _ hd _ _ hx => delete_text (wf_reachable hd) hx

theorem delete_in_range : Spec.delete_in_range := by
  intro d _ i
  simp [Doc.deleteAt, Doc.chars, nth?_eq]

theorem run_lands_together : Spec.run_lands_together :=
  fun _ hd r i cs hi => (run_text (wf_reachable hd) r i cs hi).2

theorem edit_yields_text : Spec.edit_yields_text :=
  fun _ hd r new => (edit_text (wf_reachable hd) r new).2

/-- `placeAt` makes a valid node with a fresh counter, wherever it is asked to insert. -/
theorem placeAt_valid {d : Doc} (h : Wf d) (r i : Nat) (c : Char) : (d.placeAt (d.nextId r) i c).valid = true := by
  have hmin : d.placeAt (d.nextId r) i c = d.placeAt (d.nextId r) (min i d.visibleSpec.length) c := by
    unfold Doc.placeAt; simp only [visible_eq h, Nat.min_assoc, Nat.min_self]
  rw [hmin]
  have pl := placed h (Nat.min_le_right i _) (d.nextId r) c
  have hid := placeAt_id d (d.nextId r) (min i d.visibleSpec.length) c
  unfold Node.valid
  cases hp : (d.placeAt (d.nextId r) (min i d.visibleSpec.length) c).parent with
  | none => have := pl.rootR hp; simp [this]
  | some pid =>
    obtain ⟨p, hp', e⟩ := pl.parent pid hp
    have := node_le_max hp'
    rw [hid]; subst e; simp only [Doc.nextId]
    exact decide_eq_true (by omega)

theorem run_valid {d : Doc} (h : Wf d) (r i : Nat) (cs : List Char) : ∀ n ∈ d.run r i cs, n.valid = true := by
  cases cs with
  | nil => simp [Doc.run]
  | cons c cs =>
    rw [run_cons]
    intro n hn
    simp only [List.mem_cons] at hn
    rcases hn with rfl | hn
    · exact placeAt_valid h r i c
    · exact (chain_facts hn).2.2.2.1

theorem local_ops_valid : Spec.local_ops_valid := by
  intro d hd r new o ho n e
  have h := wf_reachable hd
  unfold Doc.edit at ho
  simp only [List.mem_append, List.mem_map] at ho
  rcases ho with ⟨x, _, ex⟩ | ⟨x, hx, ex⟩
  · subst e; cases ex
  · subst e; cases ex
    exact run_valid (delete_range h _ _).1 r _ _ n hx

theorem subtree_contiguous : Spec.subtree_contiguous :=
  fun _ hd _ hy => seq_context (wf_reachable hd) hy

theorem no_duplicates : Spec.no_duplicates := fun _ hd => uniq_seqSpec (wf_reachable hd)

theorem seq_is_fugue : Spec.seq_is_fugue := fun _ hd => seq_eq (wf_reachable hd)

theorem text_is_traversal : Spec.text_is_traversal := fun _ hd => chars_eq (wf_reachable hd)

theorem concurrent_runs_not_interleaved : Spec.concurrent_runs_not_interleaved :=
  fun _ hd _ _ _ _ _ hr hi => (two_runs (wf_reachable hd) hr hi).2

theorem ack_stored : Spec.ack_stored := fun _ _ _ _ _ h => step_stored h

theorem acked_never_lost : Spec.acked_never_lost :=
  fun log reqs k req a b out h1 h2 => ⟨serve_acked log reqs k req a b out h1 h2, serve_prefix log reqs⟩

theorem log_no_duplicates : Spec.log_no_duplicates := fun _ req h => step_nodup h req

theorem stored_ops_valid : Spec.stored_ops_valid := fun log req => step_valid log req

theorem reply_from_cursor : Spec.reply_from_cursor := by
  intro log req a b out h
  rcases step_cases log req with ⟨_, e, he⟩ | ⟨_, _, he⟩
  · rw [he] at h; cases h
  · rw [he] at h
    simp only [Reply.ops.injEq] at h
    obtain ⟨rfl, rfl, rfl⟩ := h
    exact ⟨rfl, rfl, rfl⟩

theorem replica_matches_server : Spec.replica_matches_server := by
  intro log req applied a b out h hb hc happ
  obtain ⟨ha, hout, hb'⟩ := reply_from_cursor log req a b out h
  have hst := step_stored h
  generalize hw : (step log req).1 = w at *
  have ha' : a = req.cursor := by rw [ha]; simp; omega
  subst ha'
  -- the reply is the rest of the log
  have hfull : out = (log ++ w).drop req.cursor := by
    rw [hout]
    apply List.take_of_length_le
    have : out.length = (log ++ w).length - req.cursor := by omega
    rw [hout] at this
    simp only [List.length_take, List.length_drop] at this ⊢
    omega
  rw [hfull]
  apply state_of_set
  intro o
  rw [List.mem_append, happ]
  have htake : (log ++ w).take req.cursor = log.take req.cursor := List.take_append_of_le_length hc
  constructor
  · rintro ((h1 | h1) | h1)
    · exact List.mem_append_left _ (List.mem_of_mem_take h1)
    · exact hst o h1
    · exact List.mem_of_mem_drop h1
  · intro h1
    rw [← List.take_append_drop req.cursor (log ++ w), htake, List.mem_append] at h1
    rcases h1 with h2 | h2
    · exact Or.inl (Or.inl h2)
    · exact Or.inr h2

theorem decode_request_bounded : Spec.decode_request_bounded := fun _ _ h => decodeRequest_ok h

theorem decode_reply_bounded : Spec.decode_reply_bounded := by
  intro s a b out h
  obtain ⟨_, _, h1, h2, h3, h4⟩ := decodeReply_ok h
  exact ⟨h1, h2, h3, h4⟩

theorem accepted_ops_valid : Spec.accepted_ops_valid := fun _ h => okOp_valid h

end Tandem.Proofs
