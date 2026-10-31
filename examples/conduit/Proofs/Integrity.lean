/-
Data integrity across every endpoint: reads never write, protected
endpoints check the token first, and the consequences of `handle_writes`
(nobody else's data changes, nobody follows themselves, articles stay
addressable).
-/
import Proofs.Endpoints

set_option linter.unusedSimpArgs false

namespace Conduit.Proofs
open Api Spec

/-! ## Reads never write -/

theorem reads_change_nothing : Spec.reads_change_nothing := by
  intro e r D hr
  rw [handle_state]
  unfold route
  split <;> (try (exfalso; simp_all; done))
  · exact (login_ro e r).state D
  · exact (currentUser_ro e r).state D
  · exact (getProfile_ro e r _).state D
  · exact (listArticles_ro e r).state D
  · exact (feed_ro e r).state D
  · exact (getArticle_ro e r _).state D
  · exact (listComments_ro e r _).state D
  · exact tags_ro.state D
  · rfl

/-! ## The protected endpoints check the token first -/

theorem requireUser_none (e : Env) {r : Request} (h : r.authorization = none) (D : DB) :
    (requireUser store e.svc r).run.run D = (.error (.unauthorized "is missing"), D) := by
  unfold requireUser viewer?
  simp [h, ExceptT.run_bind, StateT.run_bind]

theorem run_of_route (e : Env) {r : Request} {D : DB} {err : ApiError}
    (h : (route store e.svc r).run.run D = (.error err, D)) : run e r D = (Reply.error err, D) := by
  unfold run handle
  simp only [StateT.run_bind, h]; rfl

theorem starts_with_user {α : Type} (e : Env) {r : Request} (h : r.authorization = none) (D : DB)
    (f : UserRow × String → M S α) :
    (requireUser store e.svc r >>= f).run.run D = (.error (.unauthorized "is missing"), D) := by
  rw [run_ro_bind (requireUser_ro e r), requireUser_none e h]

theorem protected_needs_token : Spec.protected_needs_token := by
  intro e r D hn hp
  apply run_of_route e
  have rt := route_table store e.svc r
  obtain ⟨_, _, h3, h4, _, h6, h7, _, h9, h10, _, h12, h13, h14, h15, _, h17, h18, _⟩ := rt
  rcases hp with ⟨hm, hpa⟩ | ⟨hm, hpa⟩ | ⟨n, hm, hpa⟩ | ⟨hm, hpa⟩ | ⟨hm, hpa⟩ | ⟨x, hm, hpa⟩ | ⟨x, hm, hpa⟩ |
    ⟨x, hm, hpa⟩ | ⟨x, i, hm, hpa⟩
  · rw [h3 hm hpa]; exact starts_with_user e hn D _
  · rw [h4 hm hpa]; exact starts_with_user e hn D _
  · rcases hm with hm | hm
    · rw [h6 n hm hpa]; exact starts_with_user e hn D _
    · rw [h7 n hm hpa]; exact starts_with_user e hn D _
  · rw [h9 hm hpa]; exact starts_with_user e hn D _
  · rw [h10 hm hpa]; exact starts_with_user e hn D _
  · rcases hm with hm | hm
    · rw [h12 x hm hpa]; exact starts_with_user e hn D _
    · rw [h13 x hm hpa]; exact starts_with_user e hn D _
  · rcases hm with hm | hm
    · rw [h14 x hm hpa]; exact starts_with_user e hn D _
    · rw [h15 x hm hpa]; exact starts_with_user e hn D _
  · rw [h17 x hm hpa]; exact starts_with_user e hn D _
  · rw [h18 x i hm hpa]; exact starts_with_user e hn D _

/-! ## Consequences of `handle_writes` -/

theorem noSelfFollow_preserved : Spec.noSelfFollow_preserved := by
  intro e r D h
  rcases handle_writes e r D with hs | ⟨_, _, ⟨_, _, _, _, hs⟩⟩ | ⟨me, tok, _, hw⟩
  · rw [hs]; exact h
  · rw [hs]; exact h
  · generalize after e r D = D' at hw
    cases hw with
    | follow u _ hne =>
      intro p hp
      simp only [DB.addFollow, insertOrIgnore] at hp
      split at hp
      · exact h p hp
      · simp only [List.mem_append, List.mem_singleton] at hp
        rcases hp with hp | rfl
        · exact h p hp
        · exact Ne.symm hne
    | unfollow u _ => intro p hp; exact h p (List.mem_filter.mp hp).1
    | updateArticle a a' tags =>
      cases tags <;> exact h
    | _ => exact h

theorem inj_of_nodup_map {α β : Type} {f : α → β} : ∀ {l : List α}, (l.map f).Nodup →
    ∀ {x y}, x ∈ l → y ∈ l → f x = f y → x = y
  | [], _, _, _, hx, _, _ => by simp at hx
  | a :: l, h, x, y, hx, hy, hf => by
    rw [List.map_cons, List.nodup_cons] at h
    simp only [List.mem_cons] at hx hy
    rcases hx with rfl | hx <;> rcases hy with rfl | hy
    · rfl
    · exact absurd (hf ▸ List.mem_map_of_mem hy) h.1
    · exact absurd (hf.symm ▸ List.mem_map_of_mem hx) h.1
    · exact inj_of_nodup_map h.2 hx hy hf

theorem mem_insertOrIgnore {α : Type} [BEq α] [LawfulBEq α] {l : List α} {x p : α} :
    p ∈ insertOrIgnore l x ↔ p ∈ l ∨ p = x := by
  unfold insertOrIgnore; split
  · rename_i h; constructor
    · exact Or.inl
    · rintro (h' | rfl); exact h'; simpa using h
  · simp

theorem others_untouched : Spec.others_untouched := by
  intro e r D k hart hcom hk
  rcases handle_writes e r D with hs | ⟨_, _, ⟨un, em, hh, _, hs⟩⟩ | ⟨me, tok, hl, hw⟩
  · rw [hs]; exact ⟨fun _ h _ => h, fun _ h _ => h, fun _ h _ => h, fun _ h _ => h, fun _ h _ => h,
      fun _ h _ _ => h, fun _ h _ _ => h⟩
  · rw [hs]; exact ⟨fun _ h _ => List.mem_append_left _ h, fun _ h _ => h, fun _ h _ => h, fun _ h _ => h,
      fun _ h _ => h, fun _ h _ _ => h, fun _ h _ _ => h⟩
  · have hme : me.id = k := hk me tok hl
    subst hme
    generalize after e r D = D' at hw
    cases hw with
    | updateUser u hu =>
      refine ⟨fun v hv hne => ?_, fun _ h _ => h, fun _ h _ => h, fun _ h _ => h, fun _ h _ => h,
        fun _ h _ _ => h, fun _ h _ _ => h⟩
      simp only [DB.setUser, List.mem_map]
      exact ⟨v, hv, by simp [hu, hne]⟩
    | follow u _ _ =>
      refine ⟨fun _ h _ => h, fun _ h _ => h, fun p hp _ => ?_, fun p hp hne => ?_, fun _ h _ => h,
        fun _ h _ _ => h, fun _ h _ _ => h⟩
      · simp only [DB.addFollow, mem_insertOrIgnore]; exact Or.inl hp
      · simp only [DB.addFollow, mem_insertOrIgnore] at hp
        rcases hp with hp | rfl
        · exact hp
        · exact absurd rfl hne
    | unfollow u _ =>
      refine ⟨fun _ h _ => h, fun _ h _ => h, fun p hp hne => ?_, fun p hp _ => (List.mem_filter.mp hp).1,
        fun _ h _ => h, fun _ h _ _ => h, fun _ h _ _ => h⟩
      simp only [DB.removeFollow, List.mem_filter]
      refine ⟨hp, ?_⟩
      simp only [bne_iff_ne, ne_eq]; intro h; rw [h] at hne; exact hne rfl
    | createArticle a tags _ _ _ =>
      exact ⟨fun _ h _ => h, fun _ h _ => List.mem_append_left _ h, fun _ h _ => h, fun _ h _ => h,
        fun _ h _ => h, fun _ h _ _ => h, fun _ h _ _ => h⟩
    | updateArticle a a' tags ha hauth hid _ =>
      have key : ∀ b ∈ D.articles, b.author ≠ me.id → b ∈ (D.setArticle a').articles := by
        intro b hb hne
        simp only [DB.setArticle, List.mem_map]
        refine ⟨b, hb, ?_⟩
        have : b.id ≠ a'.id := by
          rw [hid]; intro heq
          have := inj_of_nodup_map hart hb ha heq
          subst this; exact hne hauth
        simp [this]
      cases tags with
      | none => exact ⟨fun _ h _ => h, key, fun _ h _ => h, fun _ h _ => h, fun _ h _ => h,
          fun _ h _ _ => h, fun _ h _ _ => h⟩
      | some ts => exact ⟨fun _ h _ => h, key, fun _ h _ => h, fun _ h _ => h, fun _ h _ => h,
          fun _ h _ _ => h, fun _ h _ _ => h⟩
    | deleteArticle a ha hauth =>
      refine ⟨fun _ h _ => h, fun b hb hne => ?_, fun _ h _ => h, fun _ h _ => h,
        fun p hp _ => (List.mem_filter.mp hp).1, fun p hp _ hno => ?_, fun c hc _ hno => ?_⟩
      · simp only [DB.removeArticle, List.mem_filter, bne_iff_ne, ne_eq]
        refine ⟨hb, fun heq => ?_⟩
        have := inj_of_nodup_map hart hb ha heq
        subst this; exact hne hauth
      · simp only [DB.removeArticle, List.mem_filter, bne_iff_ne, ne_eq]
        exact ⟨hp, fun heq => hno a ha heq.symm hauth⟩
      · simp only [DB.removeArticle, List.mem_filter, bne_iff_ne, ne_eq]
        exact ⟨hc, fun heq => hno a ha heq.symm hauth⟩
    | favorite a _ =>
      refine ⟨fun _ h _ => h, fun _ h _ => h, fun _ h _ => h, fun _ h _ => h, fun p hp hne => ?_,
        fun p hp _ _ => ?_, fun _ h _ _ => h⟩
      · simp only [DB.addFavorite, mem_insertOrIgnore] at hp
        rcases hp with hp | rfl
        · exact hp
        · exact absurd rfl hne
      · simp only [DB.addFavorite, mem_insertOrIgnore]; exact Or.inl hp
    | unfavorite a _ =>
      refine ⟨fun _ h _ => h, fun _ h _ => h, fun _ h _ => h, fun _ h _ => h,
        fun p hp _ => (List.mem_filter.mp hp).1, fun p hp hne _ => ?_, fun _ h _ _ => h⟩
      simp only [DB.removeFavorite, List.mem_filter]
      refine ⟨hp, ?_⟩
      simp only [bne_iff_ne, ne_eq]; intro h; rw [h] at hne; exact hne rfl
    | addComment c a _ _ _ =>
      exact ⟨fun _ h _ => h, fun _ h _ => h, fun _ h _ => h, fun _ h _ => h, fun _ h _ => h,
        fun _ h _ _ => h, fun _ h _ _ => List.mem_append_left _ h⟩
    | deleteComment c hc hauth =>
      refine ⟨fun _ h _ => h, fun _ h _ => h, fun _ h _ => h, fun _ h _ => h, fun _ h _ => h,
        fun _ h _ _ => h, fun c' hc' hne _ => ?_⟩
      simp only [DB.removeComment, List.mem_filter, bne_iff_ne, ne_eq]
      refine ⟨hc', fun heq => ?_⟩
      have := inj_of_nodup_map hcom hc' hc heq
      subst this; exact hne hauth

/-! ## Articles stay addressable -/

theorem articlesOk_next {D D' : DB} (h : ArticlesOk D) (ha : D'.articles = D.articles) (hn : D.next ≤ D'.next) :
    ArticlesOk D' := by
  obtain ⟨h1, h2, h3, h4⟩ := h
  unfold ArticlesOk DB.slugs at *
  rw [ha]
  exact ⟨h1, fun a hm => Nat.lt_of_lt_of_le (h2 a hm) hn, h3, h4⟩

theorem nodup_filter_map {α β : Type} (f : α → β) (p : α → Bool) {l : List α} (h : (l.map f).Nodup) :
    ((l.filter p).map f).Nodup :=
  h.sublist (List.Sublist.map _ (List.filter_sublist))

theorem setArticle_ok {D : DB} {a a' : ArticleRow} (h : ArticlesOk D) (ha : a ∈ D.articles) (hid : a'.id = a.id)
    (hs : a'.slug = a.slug ∨ (a'.slug ∉ D.slugs ∧ a'.slug ∉ reservedSlugs)) : ArticlesOk (D.setArticle a') := by
  obtain ⟨h1, h2, h3, h4⟩ := h
  unfold DB.slugs at h3 h4 hs
  let g := fun b : ArticleRow => if b.id == a'.id then
      { b with slug := a'.slug, title := a'.title, description := a'.description, body := a'.body, updatedAt := a'.updatedAt }
    else b
  have hids : (D.articles.map g).map (·.id) = D.articles.map (·.id) := by
    rw [List.map_map]; apply List.map_congr_left; intro b _; simp only [Function.comp, g]; split <;> rfl
  have hslug : ∀ b, (g b).slug = if b.id = a.id then a'.slug else b.slug := by
    intro b; simp only [g, hid, beq_iff_eq]; split <;> rfl
  refine ⟨?_, ?_, ?_, ?_⟩
  · show ((D.articles.map g).map (·.id)).Nodup; rw [hids]; exact h1
  · intro b hb
    simp only [DB.setArticle, List.mem_map] at hb
    obtain ⟨c, hc, rfl⟩ := hb
    have := h2 c hc
    show (g c).id < D.next
    simp only [g]; split <;> exact this
  · show ((D.articles.map g).map (·.slug)).Nodup
    rw [List.map_map]
    have hnd : D.articles.Nodup := by
      have := h1; rw [List.Nodup, List.pairwise_map] at this
      exact this.imp fun hne heq => hne (congrArg _ heq)
    rw [List.Nodup, List.pairwise_map]
    refine List.Pairwise.imp_of_mem ?_ hnd
    intro x y hx hy hxy
    simp only [Function.comp, hslug]
    by_cases hxa : x.id = a.id <;> by_cases hya : y.id = a.id <;> simp only [hxa, hya, ↓reduceIte]
    · exact absurd ((inj_of_nodup_map h1 hx hy (hxa.trans hya.symm))) hxy
    · intro heq
      have hxa' : x = a := inj_of_nodup_map h1 hx ha hxa
      rcases hs with hs | ⟨hs, _⟩
      · rw [hs, ← hxa'] at heq
        exact hxy (inj_of_nodup_map h3 hx hy heq)
      · exact hs (heq ▸ List.mem_map_of_mem hy)
    · intro heq
      have hya' : y = a := inj_of_nodup_map h1 hy ha hya
      rcases hs with hs | ⟨hs, _⟩
      · rw [hs, ← hya'] at heq
        exact hxy (inj_of_nodup_map h3 hx hy heq)
      · exact hs (heq.symm ▸ List.mem_map_of_mem hx)
    · exact fun heq => hxy (inj_of_nodup_map h3 hx hy heq)
  · intro s hs'
    unfold DB.slugs DB.setArticle at hs'
    rw [List.map_map, List.mem_map] at hs'
    obtain ⟨b, hb, rfl⟩ := hs'
    show (g b).slug ∉ reservedSlugs
    rw [hslug]; split
    · rcases hs with hs | ⟨_, hs⟩
      · rw [hs]; exact h4 _ (List.mem_map_of_mem ha)
      · exact hs
    · exact h4 _ (List.mem_map_of_mem hb)

theorem articlesOk_preserved : Spec.articlesOk_preserved := by
  intro e r D h
  rcases handle_writes e r D with hs | ⟨_, _, ⟨un, em, hh, _, hs⟩⟩ | ⟨me, tok, hl, hw⟩
  · rw [hs]; exact h
  · rw [hs]; exact articlesOk_next h rfl (Nat.le_succ _)
  · generalize after e r D = D' at hw
    cases hw with
    | updateUser => exact articlesOk_next h rfl (Nat.le_refl _)
    | follow => exact articlesOk_next h rfl (Nat.le_refl _)
    | unfollow => exact articlesOk_next h rfl (Nat.le_refl _)
    | favorite => exact articlesOk_next h rfl (Nat.le_refl _)
    | unfavorite => exact articlesOk_next h rfl (Nat.le_refl _)
    | addComment => exact articlesOk_next h rfl (Nat.le_succ _)
    | deleteComment => exact articlesOk_next h rfl (Nat.le_refl _)
    | updateArticle a a' tags ha _ hid hs =>
      cases tags with
      | none => exact setArticle_ok h ha hid hs
      | some ts => exact articlesOk_next (setArticle_ok h ha hid hs) rfl (Nat.le_refl _)
    | deleteArticle a _ _ =>
      obtain ⟨h1, h2, h3, h4⟩ := h
      unfold DB.slugs at h3 h4
      refine ⟨nodup_filter_map _ _ h1, fun b hb => h2 b (List.mem_filter.mp hb).1, nodup_filter_map _ _ h3, ?_⟩
      intro s hs
      simp only [DB.slugs, DB.removeArticle, List.mem_map, List.mem_filter] at hs
      obtain ⟨b, ⟨hb, _⟩, rfl⟩ := hs
      exact h4 _ (List.mem_map_of_mem hb)
    | createArticle a tags _ hfresh hres =>
      obtain ⟨h1, h2, h3, h4⟩ := h
      unfold DB.slugs at h3 h4 hfresh
      refine ⟨?_, ?_, ?_, ?_⟩
      · simp only [DB.addArticle, List.map_append, List.map_cons, List.map_nil]
        rw [List.nodup_append]
        refine ⟨h1, by simp, ?_⟩
        intro x hx y hy hxy
        simp only [List.mem_singleton] at hy
        obtain ⟨b, hb, rfl⟩ := List.mem_map.mp hx
        have := h2 b hb; subst hy; omega
      · intro b hb
        simp only [DB.addArticle, List.mem_append, List.mem_singleton] at hb
        rcases hb with hb | rfl
        · exact Nat.lt_succ_of_lt (h2 b hb)
        · exact Nat.lt_succ_self _
      · simp only [DB.slugs, DB.addArticle, List.map_append, List.map_cons, List.map_nil]
        rw [List.nodup_append]
        refine ⟨h3, by simp, ?_⟩
        intro x hx y hy hxy
        simp only [List.mem_singleton] at hy
        subst hy hxy; exact hfresh hx
      · intro s hs
        simp only [DB.slugs, DB.addArticle, List.map_append, List.mem_append, List.map_cons, List.map_nil,
          List.mem_singleton] at hs
        rcases hs with hs | rfl
        · exact h4 s hs
        · exact hres

end Conduit.Proofs
