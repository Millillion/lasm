/-
The browser app's routes (`Frontend/Route.lean`): every page's link leads
back to that page. `Route.href` writes a route's path segments and query;
`Route.parse` (what the app and the server run on every URL) reads them back
to the same route. (Percent-encoding the segments and decoding them again is
Lasm.UI's `Url`, not proved here.)
-/
import Frontend.Route
import Std.Data.String.ToNat

namespace Conduit.Proofs
open Conduit.Frontend

/-- A route the app links to: page numbers start at 1. -/
def Linkable : Route → Prop
  | .home _ p | .profile _ _ p => 1 ≤ p
  | .notFound => False
  | _ => True

theorem pageOf_pageParam (p : Nat) (h : 1 ≤ p) (extra : List (String × String))
    (hx : extra.lookup "page" = none) : pageOf (extra ++ pageParam p) = p := by
  unfold pageOf pageParam
  by_cases h1 : p ≤ 1
  · have : p = 1 := by omega
    subst this; simp [hx]
  · simp [h1, hx, List.lookup_append, Nat.toNat?_repr]; omega

/-- **Every link the app writes leads back to its page.** -/
theorem parse_href (r : Route) (h : Linkable r) : Route.parse r.segments r.query = r := by
  cases r with
  | home feed p =>
    have hp : 1 ≤ p := h
    cases feed with
    | global =>
      have := pageOf_pageParam p hp [] rfl
      simp only [List.nil_append] at this
      have hf : (pageParam p).lookup "feed" = none := by unfold pageParam; split <;> simp
      show Route.home (if (pageParam p).lookup "feed" == some "following" then .following else .global) (pageOf (pageParam p)) = _
      rw [hf, this]; rfl
    | following =>
      have := pageOf_pageParam p hp [("feed", "following")] (by decide)
      simp only [List.singleton_append] at this
      show Route.home (if (("feed", "following") :: pageParam p).lookup "feed" == some "following" then .following else .global)
        (pageOf (("feed", "following") :: pageParam p)) = _
      rw [this]; simp
    | tag t =>
      have := pageOf_pageParam p hp [] rfl
      simp only [List.nil_append] at this
      show Route.home (.tag t) (pageOf (pageParam p)) = _
      rw [this]
  | profile u fav p =>
    have hp : 1 ≤ p := h
    have := pageOf_pageParam p hp [] rfl
    simp only [List.nil_append] at this
    cases fav
    · show Route.profile u false (pageOf (pageParam p)) = _
      rw [this]
    · show Route.profile u true (pageOf (pageParam p)) = _
      rw [this]
  | editor s => cases s <;> rfl
  | notFound => exact absurd h id
  | _ => rfl

end Conduit.Proofs
