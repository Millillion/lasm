/-
Every reply's status is one of Porter's, and every error reply is
`Reply.err x` (sections F and G of the specification): one lemma per
endpoint, then the router.
-/
import Proofs.Route

set_option linter.unusedSimpArgs false

namespace Porter.Proofs
open Porter Text Spec

/-- A reply is fine: its status is one of Porter's, and an error status
means a fixed error reply. -/
def Fine (r : Reply) : Prop := r.status ∈ statuses ∧ (400 ≤ r.status → ∃ x, r = Reply.err x)

@[simp] theorem fine_err (x : Err) : Fine (Reply.err x) := by
  refine ⟨?_, fun _ => ⟨x, rfl⟩⟩
  cases x with
  | page p => cases p <;> simp [statuses, Reply.err, Err.status, PageError.status]
  | token t => cases t <;> simp [statuses, Reply.err, Err.status]
  | bearer b => cases b <;> simp [statuses, Reply.err, Err.status]

@[simp] theorem fine_200 (r : Reply) (h : r.status = 200) : Fine r := by simp [Fine, statuses, h]
@[simp] theorem fine_204 (r : Reply) (h : r.status = 204) : Fine r := by simp [Fine, statuses, h]
@[simp] theorem fine_303 (r : Reply) (h : r.status = 303) : Fine r := by simp [Fine, statuses, h]

theorem fine_issueCode (e : Env) ctx a l sc code fam : Fine (Id.run (issueCode e.cfg e.crypto ctx a l sc code fam)).1 := by
  simp [issueCode, Reply.redirect]

theorem fine_startInteraction (e : Env) ctx a l : Fine (Id.run (startInteraction e.cfg e.crypto ctx a l)).1 := by
  simp [startInteraction, Reply.redirect]

theorem fine_issueTokens (e : Env) ctx c g fg fam wn pre :
    Fine (Id.run (issueTokens e.cfg e.crypto ctx c g fg fam wn pre)).1 := by
  simp [issueTokens]

theorem fine_authorize (e : Env) ctx r (D : DB) : Fine (Id.run (authorize e.cfg e.crypto D.reads ctx r)).1 := by
  simp only [authorize, authorizeValid, currentSession]
  crush
  all_goals first | exact fine_issueCode .. | exact fine_startInteraction ..

theorem fine_interactionPage (e : Env) ctx r (D : DB) id :
    Fine (Id.run (interactionPage e.cfg e.crypto D.reads ctx r id)).1 := by
  simp only [interactionPage, interactionOf]
  crush

theorem fine_login (e : Env) ctx r (D : DB) id : Fine (Id.run (login e.cfg e.crypto D.reads ctx r id)).1 := by
  simp only [login, interactionOf, afterLogin]
  crush
  all_goals simp [issueCode, Reply.redirect]

theorem fine_consent (e : Env) ctx r (D : DB) id : Fine (Id.run (consent e.cfg e.crypto D.reads ctx r id)).1 := by
  simp only [consent, interactionOf, currentSession]
  crush
  all_goals simp [issueCode, Reply.redirect]

theorem fine_codeGrant (e : Env) ctx (D : DB) c ps : Fine (Id.run (codeGrant e.cfg e.crypto D.reads ctx c ps)).1 := by
  simp only [codeGrant, tokenErr]
  crush
  all_goals exact fine_issueTokens ..

theorem fine_refreshGrant (e : Env) ctx (D : DB) c ps :
    Fine (Id.run (refreshGrant e.cfg e.crypto D.reads ctx c ps)).1 := by
  simp only [refreshGrant, tokenErr]
  crush
  all_goals exact fine_issueTokens ..

theorem fine_token (e : Env) ctx r (D : DB) : Fine (Id.run (token e.cfg e.crypto D.reads ctx r)).1 := by
  unfold token
  simp only [tokenErr]
  crush
  all_goals first | exact fine_codeGrant .. | exact fine_refreshGrant ..

theorem fine_userinfo (e : Env) ctx r (D : DB) : Fine (Id.run (userinfo e.cfg e.crypto D.reads ctx r)).1 := by
  unfold userinfo
  crush

theorem fine_logout (e : Env) r : Fine (Id.run (logout e.cfg e.crypto r)).1 := by
  unfold logout
  crush

theorem fine_run (e : Env) ctx r D : Fine (run e ctx r D).1 := by
  apply run_elim e ctx r D (fun x => Fine x.1)
  all_goals intros
  all_goals first | simp [Reply.page] | exact fine_authorize .. | exact fine_token .. | exact fine_userinfo .. | exact fine_logout .. | exact fine_interactionPage .. | exact fine_login .. | exact fine_consent ..

end Porter.Proofs
