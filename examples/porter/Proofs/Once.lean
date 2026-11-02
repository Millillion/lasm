/-
A code is redeemed at most once, and a refresh token rotated at most once
(sections A and D of the specification). A request marks a code used only if
it is stored and unused, and every write keeps a used code used; likewise
for rotation. Revocation is permanent.
-/
import Proofs.Route

set_option linter.unusedSimpArgs false

namespace Porter.Proofs
open Porter Text Spec

/-- The writes that consume: a code marked used only if it is stored and
unused; a refresh token rotated only if it is stored and not rotated. -/
def Consumes (D : DB) (ws : List Write) : Prop :=
  (∀ h, Write.useCode h ∈ ws → ∃ k, D.code? h = some k ∧ k.used = false) ∧
  (∀ h, Write.rotate h ∈ ws → ∃ x, D.refresh? h = some x ∧ x.rotated = false)

theorem consumes_nil (D : DB) : Consumes D [] := ⟨by simp, by simp⟩

/-- Writes that neither use a code nor rotate a token. -/
theorem consumes_of (D : DB) (ws : List Write) (h1 : ∀ h, Write.useCode h ∉ ws) (h2 : ∀ h, Write.rotate h ∉ ws) :
    Consumes D ws := ⟨fun h hm => absurd hm (h1 h), fun h hm => absurd hm (h2 h)⟩

theorem consumes_issueCode (e : Env) (D : DB) ctx a l sc code fam :
    Consumes D (Id.run (issueCode e.cfg e.crypto ctx a l sc code fam)).2 := by
  apply consumes_of <;> simp [issueCode]

theorem consumes_startInteraction (e : Env) (D : DB) ctx a l :
    Consumes D (Id.run (startInteraction e.cfg e.crypto ctx a l)).2 := by
  apply consumes_of <;> simp [startInteraction]

theorem consumes_authorize (e : Env) ctx r (D : DB) : Consumes D (Id.run (authorize e.cfg e.crypto D.reads ctx r)).2 := by
  simp only [authorize, authorizeValid, currentSession]
  crush
  all_goals first | exact consumes_issueCode .. | exact consumes_startInteraction .. | exact consumes_nil _

theorem consumes_login (e : Env) ctx r (D : DB) id : Consumes D (Id.run (login e.cfg e.crypto D.reads ctx r id)).2 := by
  simp only [login, interactionOf, afterLogin]
  crush
  all_goals (apply consumes_of <;> simp [issueCode])

theorem consumes_consent (e : Env) ctx r (D : DB) id : Consumes D (Id.run (consent e.cfg e.crypto D.reads ctx r id)).2 := by
  simp only [consent, interactionOf, currentSession]
  crush
  all_goals (apply consumes_of <;> simp [issueCode])

theorem consumes_interactionPage (e : Env) ctx r (D : DB) id :
    Consumes D (Id.run (interactionPage e.cfg e.crypto D.reads ctx r id)).2 := by
  simp only [interactionPage, interactionOf]
  crush
  all_goals exact consumes_nil _

theorem consumes_userinfo (e : Env) ctx r (D : DB) : Consumes D (Id.run (userinfo e.cfg e.crypto D.reads ctx r)).2 := by
  unfold userinfo
  crush
  all_goals exact consumes_nil _

theorem consumes_logout (e : Env) r (D : DB) : Consumes D (Id.run (logout e.cfg e.crypto r)).2 := by
  unfold logout
  crush
  all_goals (apply consumes_of <;> simp)

theorem issueTokens_writes (e : Env) ctx c g fg fam wn pre :
    Prod.snd (issueTokens e.cfg e.crypto ctx c g fg fam wn pre : Reply × List Write) =
      pre ++ [.addAccess { hash := e.H ctx.fresh.a, family := fam, grant := g, expires := ctx.now + e.cfg.accessTtl }] ++
      (if "offline_access" ∈ fg.scope then
        [.addRefresh { hash := e.H ctx.fresh.b, family := fam, grant := fg, expires := ctx.now + e.cfg.refreshTtl }]
       else []) := by
  simp [issueTokens]

theorem consumes_codeGrant (e : Env) ctx (D : DB) c ps : Consumes D (Id.run (codeGrant e.cfg e.crypto D.reads ctx c ps)).2 := by
  simp only [codeGrant, tokenErr]
  crush
  all_goals first | exact consumes_nil _ | (apply consumes_of <;> simp; done) | skip
  all_goals (rw [issueTokens_writes]; constructor <;> intro h hm <;> simp at hm <;> (try split at hm) <;> simp_all)

theorem consumes_refreshGrant (e : Env) ctx (D : DB) c ps :
    Consumes D (Id.run (refreshGrant e.cfg e.crypto D.reads ctx c ps)).2 := by
  simp only [refreshGrant, tokenErr]
  crush
  all_goals first | exact consumes_nil _ | (apply consumes_of <;> simp; done) | skip
  all_goals (rw [issueTokens_writes]; constructor <;> intro h hm <;> simp at hm <;> (try split at hm) <;> simp_all)

theorem consumes_token (e : Env) ctx r (D : DB) : Consumes D (Id.run (token e.cfg e.crypto D.reads ctx r)).2 := by
  unfold token
  simp only [tokenErr]
  crush
  all_goals first | exact consumes_nil _ | exact consumes_codeGrant .. | exact consumes_refreshGrant .. | skip

theorem consumes_run (e : Env) ctx r D : Consumes D (writes e ctx r D) := by
  unfold writes
  apply run_elim e ctx r D (fun x => Consumes D x.2)
  all_goals intros
  all_goals first
    | exact consumes_nil _
    | exact consumes_authorize e ctx r D
    | exact consumes_token e ctx r D
    | exact consumes_userinfo e ctx r D
    | exact consumes_logout e r D
    | exact consumes_interactionPage e ctx r D _
    | exact consumes_login e ctx r D _
    | exact consumes_consent e ctx r D _

/-! ## What the writes do to codes, refresh tokens and revocations -/

/-- Code `h` is stored and used. -/
def UsedCode (D : DB) (h : String) : Prop := ∃ k, D.code? h = some k ∧ k.used = true
/-- Code `h` is stored. -/
def HasCode (D : DB) (h : String) : Prop := ∃ k, D.code? h = some k

/-- Finding by hash in a list mapped by a function that keeps hashes. -/
theorem find?_map_hash {α : Type} {hash : α → String} {l : List α} {h : String} (f : α → α)
    (hf : ∀ k, hash (f k) = hash k) : (l.map f).find? (hash · = h) = (l.find? (hash · = h)).map f := by
  induction l with
  | nil => rfl
  | cons x xs ih =>
    simp only [List.map_cons, List.find?_cons, hf]
    split <;> simp_all

theorem find?_map_mark {l : List Code} {h h' : String} :
    (l.map fun k => if k.hash = h' then { k with used := true } else k).find? (·.hash = h) =
      (l.find? (·.hash = h)).map fun k => if k.hash = h' then { k with used := true } else k :=
  find?_map_hash (hash := Code.hash) _ (fun k => by split <;> rfl)

theorem find?_insertOrIgnore {α : Type} {key : α → String} {l : List α} {x : α} {h : String}
    (hl : (l.find? (key · = h)).isSome) : (insertOrIgnore key l x).find? (key · = h) = l.find? (key · = h) := by
  unfold insertOrIgnore
  split
  · rfl
  · rw [List.find?_append]
    cases hf : l.find? (key · = h) with
    | none => rw [hf] at hl; cases hl
    | some y => rfl

theorem write_keeps_code (D : DB) (w : Write) (h : String) (hd : HasCode D h) : HasCode (D.write w) h := by
  obtain ⟨k, hk⟩ := hd
  cases w with
  | addCode k' =>
    exact ⟨k, by simp only [DB.code?, DB.write]; rw [find?_insertOrIgnore (by unfold DB.code? at hk; simp [hk])]; exact hk⟩
  | useCode h' =>
    refine ⟨if k.hash = h' then { k with used := true } else k, ?_⟩
    simp only [DB.code?, DB.write]; rw [find?_map_mark]; unfold DB.code? at hk; simp [hk]
  | _ => exact ⟨k, hk⟩

theorem write_keeps_used (D : DB) (w : Write) (h : String) (hd : UsedCode D h) : UsedCode (D.write w) h := by
  obtain ⟨k, hk, hu⟩ := hd
  cases w with
  | addCode k' =>
    exact ⟨k, by simp only [DB.code?, DB.write]; rw [find?_insertOrIgnore (by unfold DB.code? at hk; simp [hk])]; exact hk, hu⟩
  | useCode h' =>
    refine ⟨if k.hash = h' then { k with used := true } else k, ?_, by split <;> simp_all⟩
    simp only [DB.code?, DB.write]; rw [find?_map_mark]; unfold DB.code? at hk; simp [hk]
  | _ => exact ⟨k, hk, hu⟩

theorem write_useCode (D : DB) (h : String) (hd : HasCode D h) : UsedCode (D.write (.useCode h)) h := by
  obtain ⟨k, hk⟩ := hd
  have hh : k.hash = h := by have := List.find?_some hk; simpa using this
  refine ⟨{ k with used := true }, ?_, rfl⟩
  simp only [DB.code?, DB.write]; rw [find?_map_mark]; unfold DB.code? at hk; simp [hk, hh]

theorem apply_keeps_code (D : DB) (ws : List Write) (h : String) (hd : HasCode D h) : HasCode (D.apply ws) h := by
  induction ws generalizing D with
  | nil => exact hd
  | cons w ws ih => exact ih _ (write_keeps_code D w h hd)

theorem apply_keeps_used (D : DB) (ws : List Write) (h : String) (hd : UsedCode D h) : UsedCode (D.apply ws) h := by
  induction ws generalizing D with
  | nil => exact hd
  | cons w ws ih => exact ih _ (write_keeps_used D w h hd)

theorem apply_useCode (D : DB) (ws : List Write) (h : String) (hd : HasCode D h) (hm : Write.useCode h ∈ ws) :
    UsedCode (D.apply ws) h := by
  induction ws generalizing D with
  | nil => cases hm
  | cons w ws ih =>
    simp only [DB.apply, List.foldl_cons]
    rcases List.mem_cons.mp hm with rfl | hm
    · exact apply_keeps_used _ ws h (write_useCode D h hd)
    · exact ih _ (write_keeps_code D w h hd) hm

theorem trace_after_used (e : Env) (h : String) : ∀ D rs, UsedCode D h →
    (trace e D rs).countP (fun ws => decide (Write.useCode h ∈ ws)) = 0
  | _, [], _ => rfl
  | D, (c, r) :: rest, hu => by
    simp only [trace, List.countP_cons]
    have hn : Write.useCode h ∉ writes e c r D := by
      intro hm
      obtain ⟨k, hk, hk'⟩ := (consumes_run e c r D).1 h hm
      obtain ⟨k₂, hk₂, hu₂⟩ := hu
      rw [hk] at hk₂; cases hk₂; simp_all
    simp only [hn, decide_false]
    exact trace_after_used e h _ rest (apply_keeps_used _ _ h hu)

theorem trace_useCode_le (e : Env) (h : String) : ∀ D rs,
    (trace e D rs).countP (fun ws => decide (Write.useCode h ∈ ws)) ≤ 1
  | _, [] => by simp [trace]
  | D, (c, r) :: rest => by
    simp only [trace, List.countP_cons]
    by_cases hm : Write.useCode h ∈ writes e c r D
    · obtain ⟨k, hk, -⟩ := (consumes_run e c r D).1 h hm
      have := trace_after_used e h (after e c r D) rest (apply_useCode D _ h ⟨k, hk⟩ hm)
      simp [hm, this]
    · simp only [hm, decide_false]
      exact trace_useCode_le e h _ rest

/-! Refresh tokens: the same, for rotation. -/

def RotatedRefresh (D : DB) (h : String) : Prop := ∃ x, D.refresh? h = some x ∧ x.rotated = true
def HasRefresh (D : DB) (h : String) : Prop := ∃ x, D.refresh? h = some x

theorem find?_map_rotate {l : List Refresh} {h h' : String} :
    (l.map fun r => if r.hash = h' then { r with rotated := true } else r).find? (·.hash = h) =
      (l.find? (·.hash = h)).map fun r => if r.hash = h' then { r with rotated := true } else r :=
  find?_map_hash (hash := Refresh.hash) _ (fun k => by split <;> rfl)

theorem write_keeps_refresh (D : DB) (w : Write) (h : String) (hd : HasRefresh D h) : HasRefresh (D.write w) h := by
  obtain ⟨k, hk⟩ := hd
  cases w with
  | addRefresh k' =>
    exact ⟨k, by simp only [DB.refresh?, DB.write]; rw [find?_insertOrIgnore (by unfold DB.refresh? at hk; simp [hk])]; exact hk⟩
  | rotate h' =>
    refine ⟨if k.hash = h' then { k with rotated := true } else k, ?_⟩
    simp only [DB.refresh?, DB.write]; rw [find?_map_rotate]; unfold DB.refresh? at hk; simp [hk]
  | _ => exact ⟨k, hk⟩

theorem write_keeps_rotated (D : DB) (w : Write) (h : String) (hd : RotatedRefresh D h) :
    RotatedRefresh (D.write w) h := by
  obtain ⟨k, hk, hu⟩ := hd
  cases w with
  | addRefresh k' =>
    exact ⟨k, by simp only [DB.refresh?, DB.write]; rw [find?_insertOrIgnore (by unfold DB.refresh? at hk; simp [hk])]; exact hk, hu⟩
  | rotate h' =>
    refine ⟨if k.hash = h' then { k with rotated := true } else k, ?_, by split <;> simp_all⟩
    simp only [DB.refresh?, DB.write]; rw [find?_map_rotate]; unfold DB.refresh? at hk; simp [hk]
  | _ => exact ⟨k, hk, hu⟩

theorem write_rotate (D : DB) (h : String) (hd : HasRefresh D h) : RotatedRefresh (D.write (.rotate h)) h := by
  obtain ⟨k, hk⟩ := hd
  have hh : k.hash = h := by have := List.find?_some hk; simpa using this
  refine ⟨{ k with rotated := true }, ?_, rfl⟩
  simp only [DB.refresh?, DB.write]; rw [find?_map_rotate]; unfold DB.refresh? at hk; simp [hk, hh]

theorem apply_keeps_refresh (D : DB) (ws : List Write) (h : String) (hd : HasRefresh D h) : HasRefresh (D.apply ws) h := by
  induction ws generalizing D with
  | nil => exact hd
  | cons w ws ih => exact ih _ (write_keeps_refresh D w h hd)

theorem apply_keeps_rotated (D : DB) (ws : List Write) (h : String) (hd : RotatedRefresh D h) :
    RotatedRefresh (D.apply ws) h := by
  induction ws generalizing D with
  | nil => exact hd
  | cons w ws ih => exact ih _ (write_keeps_rotated D w h hd)

theorem apply_rotate (D : DB) (ws : List Write) (h : String) (hd : HasRefresh D h) (hm : Write.rotate h ∈ ws) :
    RotatedRefresh (D.apply ws) h := by
  induction ws generalizing D with
  | nil => cases hm
  | cons w ws ih =>
    simp only [DB.apply, List.foldl_cons]
    rcases List.mem_cons.mp hm with rfl | hm
    · exact apply_keeps_rotated _ ws h (write_rotate D h hd)
    · exact ih _ (write_keeps_refresh D w h hd) hm

theorem trace_after_rotated (e : Env) (h : String) : ∀ D rs, RotatedRefresh D h →
    (trace e D rs).countP (fun ws => decide (Write.rotate h ∈ ws)) = 0
  | _, [], _ => rfl
  | D, (c, r) :: rest, hu => by
    simp only [trace, List.countP_cons]
    have hn : Write.rotate h ∉ writes e c r D := by
      intro hm
      obtain ⟨k, hk, hk'⟩ := (consumes_run e c r D).2 h hm
      obtain ⟨k₂, hk₂, hu₂⟩ := hu
      rw [hk] at hk₂; cases hk₂; simp_all
    simp only [hn, decide_false]
    exact trace_after_rotated e h _ rest (apply_keeps_rotated _ _ h hu)

theorem trace_rotate_le (e : Env) (h : String) : ∀ D rs,
    (trace e D rs).countP (fun ws => decide (Write.rotate h ∈ ws)) ≤ 1
  | _, [] => by simp [trace]
  | D, (c, r) :: rest => by
    simp only [trace, List.countP_cons]
    by_cases hm : Write.rotate h ∈ writes e c r D
    · obtain ⟨k, hk, -⟩ := (consumes_run e c r D).2 h hm
      have := trace_after_rotated e h (after e c r D) rest (apply_rotate D _ h ⟨k, hk⟩ hm)
      simp [hm, this]
    · simp only [hm, decide_false]
      exact trace_rotate_le e h _ rest

/-! Revocation. -/

theorem write_keeps_revoked (D : DB) (w : Write) (f : String) (hf : f ∈ D.revoked) : f ∈ (D.write w).revoked := by
  cases w with
  | revoke f' =>
    simp only [DB.write, insertOrIgnore]
    split
    · exact hf
    · exact List.mem_append_left _ hf
  | _ => exact hf

theorem apply_keeps_revoked (D : DB) (ws : List Write) (f : String) (hf : f ∈ D.revoked) : f ∈ (D.apply ws).revoked := by
  induction ws generalizing D with
  | nil => exact hf
  | cons w ws ih => exact ih _ (write_keeps_revoked D w f hf)

end Porter.Proofs
