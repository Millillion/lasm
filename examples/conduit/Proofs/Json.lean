/-
The wire format (`Conduit/Types.lean`): for every type the API sends or
receives, decoding what was encoded gives back the same value. The server
encodes responses and decodes requests; the browser app does the opposite,
with the same functions; so the two sides agree on every field, including
`null` versus absent (`bio`, `image`, update fields) and lists without a body.
-/
import Conduit.Types
import Proofs.Spec

namespace Conduit.Proofs
open Lean

theorem strList_strs (what : String) (l : List String) : Decode.strList what (Json'.strs l) = .ok l := by
  show List.mapM (Decode.str what) ((l.map Json.str).toArray.toList) = _
  rw [List.toList_toArray]
  induction l with
  | nil => rfl
  | cons a t ih => rw [List.map_cons, List.mapM_cons, ih]; rfl

theorem Profile.decode_encode (p : Profile) : Profile.decode p.encode = .ok p := by
  obtain ⟨u, b, i, f⟩ := p
  cases b <;> cases i <;> rfl

theorem User.decode_encode (u : User) : User.decode u.encode = .ok u := by
  obtain ⟨e, t, n, b, i⟩ := u
  cases b <;> cases i <;> rfl

theorem LoginUser.decode_encode (u : LoginUser) : LoginUser.decode u.encode = .ok u := rfl

theorem NewUser.decode_encode (u : NewUser) : NewUser.decode u.encode = .ok u := rfl

theorem NewComment.decode_encode (c : NewComment) : NewComment.decode c.encode = .ok c := rfl

theorem Article.decode_encode (a : Article) : Article.decode a.encode = .ok a := by
  have ht : Decode.get? a.encode "tagList" = some (Json'.strs a.tagList) := by
    obtain ⟨_, _, _, b, _, _, _, _, _, _⟩ := a; cases b <;> rfl
  have hp : Decode.get? a.encode "author" = some a.author.encode := by
    obtain ⟨_, _, _, b, _, _, _, _, _, _⟩ := a; cases b <;> rfl
  unfold Article.decode Decode.reqStrs
  rw [ht, hp]
  dsimp only
  rw [strList_strs, Profile.decode_encode]
  obtain ⟨_, _, _, b, _, _, _, _, _, _⟩ := a
  cases b <;> rfl

theorem Comment.decode_encode (c : Comment) : Comment.decode c.encode = .ok c := by
  have hp : Decode.get? c.encode "author" = some c.author.encode := rfl
  unfold Comment.decode
  rw [hp]
  dsimp only
  rw [Profile.decode_encode]
  rfl

theorem mapM_decode_encode (l : List Article) :
    (l.map Article.encode).toArray.toList.mapM Article.decode = .ok l := by
  rw [List.toList_toArray]
  induction l with
  | nil => rfl
  | cons a t ih => rw [List.map_cons, List.mapM_cons, ih, Article.decode_encode]; rfl

theorem ArticleList.decode_encode (l : ArticleList) : ArticleList.decode l.encode = .ok l := by
  have ha : Decode.get? l.encode "articles" = some (.arr (l.articles.map Article.encode).toArray) := rfl
  unfold ArticleList.decode
  rw [ha]
  dsimp only
  rw [mapM_decode_encode]
  rfl

theorem NewArticle.decode_encode (a : NewArticle) : NewArticle.decode a.encode = .ok a := by
  have ht : Decode.get? a.encode "tagList" = some (Json'.strs a.tagList) := rfl
  unfold NewArticle.decode Decode.strsOr
  rw [ht]
  dsimp only
  rw [strList_strs]
  rfl

set_option maxHeartbeats 4000000 in
theorem UpdateUser.decode_encode (u : UpdateUser) : UpdateUser.decode u.encode = .ok u := by
  obtain ⟨e, n, p, b, i⟩ := u
  cases e <;> cases n <;> cases p <;> cases b <;> cases i <;> rfl

theorem fieldStrs_value {j : Json} {k : String} {l : List String} (h : Decode.get? j k = some (Json'.strs l)) :
    Decode.fieldStrs j k = .ok (.value l) := by
  unfold Decode.fieldStrs
  rw [h]
  show Field.value <$> Decode.strList k (Json'.strs l) = _
  rw [strList_strs]; rfl

set_option maxHeartbeats 1000000 in
theorem UpdateArticle.decode_encode (a : UpdateArticle) : UpdateArticle.decode a.encode = .ok a := by
  obtain ⟨t, d, b, tags⟩ := a
  cases tags with
  | absent => cases t <;> cases d <;> cases b <;> rfl
  | null => cases t <;> cases d <;> cases b <;> rfl
  | value l =>
    have ht : Decode.get? (UpdateArticle.encode ⟨t, d, b, .value l⟩) "tagList" = some (Json'.strs l) := by
      cases t <;> cases d <;> cases b <;> rfl
    unfold UpdateArticle.decode
    rw [fieldStrs_value ht]
    cases t <;> cases d <;> cases b <;> rfl

/-- An error with one field (every error the API sends except a validation
error naming several fields) decodes to itself: `{"errors": {"<field>": [messages]}}`. -/
theorem ApiError.decode_encode_one (s : Nat) (k : String) (msgs : List String) :
    ApiError.decode s (ApiError.encode ⟨s, [(k, msgs)]⟩) = .ok ⟨s, [(k, msgs)]⟩ := by
  have h : Decode.get? (ApiError.encode ⟨s, [(k, msgs)]⟩) "errors" = some (Json.mkObj [(k, Json'.strs msgs)]) := rfl
  unfold ApiError.decode
  rw [h]
  show (do let errors ← ([(k, Json'.strs msgs)]).mapM (fun (x : String × Json) => do return (x.1, ← Decode.strList x.1 x.2))
           return ({ status := s, errors } : ApiError)) = _
  simp [strList_strs]; rfl

theorem responses_roundtrip : Spec.responses_roundtrip :=
  ⟨User.decode_encode, Profile.decode_encode, Article.decode_encode, Comment.decode_encode, ArticleList.decode_encode⟩

theorem requests_roundtrip : Spec.requests_roundtrip :=
  ⟨LoginUser.decode_encode, NewUser.decode_encode, UpdateUser.decode_encode, NewArticle.decode_encode,
   UpdateArticle.decode_encode, NewComment.decode_encode⟩

theorem error_roundtrip : Spec.error_roundtrip := ApiError.decode_encode_one

end Conduit.Proofs
