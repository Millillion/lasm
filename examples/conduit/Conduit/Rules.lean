/-
The rules of Conduit as pure functions: who may change what, and how rows
become the API's articles, comments and profiles. The endpoints
(`Conduit/Api.lean`) call these; `Proofs/` proves their properties.
-/
import Conduit.Types
import Conduit.Store
import Conduit.Time

namespace Conduit

/-! ## Authorization -/

/-- Only an article's author may update or delete it. -/
def canEditArticle (viewer : Nat) (a : ArticleRow) : Bool := a.author == viewer

/-- Only a comment's author may delete it. -/
def canDeleteComment (viewer : Nat) (c : CommentRow) : Bool := c.author == viewer

/-- Nobody follows themselves. -/
def canFollow (viewer target : Nat) : Bool := viewer != target

/-! ## From rows to the API -/

def profileOf (u : UserRow) (following : Bool) : Profile :=
  { username := u.username, bio := u.bio, image := u.image, following }

def userOf (u : UserRow) (token : String) : User :=
  { email := u.email, token, username := u.username, bio := u.bio, image := u.image }

/-- The distinct users who favorited article `id`, given (article, user) pairs. -/
def fansOf (favorites : List (Nat × Nat)) (id : Nat) : List Nat :=
  ((favorites.filter (·.1 == id)).map (·.2)).eraseDups

/-- The tags of article `id`, given (article, tag) pairs in order. -/
def tagsFor (tags : List (Nat × String)) (id : Nat) : List String :=
  (tags.filter (·.1 == id)).map (·.2)

/-- Everything the server loads to show some articles to a viewer. -/
structure Loaded where
  rows : List ArticleRow
  tags : List (Nat × String)
  favorites : List (Nat × Nat)
  authors : List UserRow
  /-- The authors the viewer follows. -/
  followed : List Nat

/-- One article as `viewer` sees it: `favoritesCount` counts distinct users
and `favorited` says whether the viewer is one of them. `none` when its
author is missing from `authors`. -/
def articleOf (viewer : Option Nat) (withBody : Bool) (d : Loaded) (a : ArticleRow) : Option Article := do
  let u ← d.authors.find? (·.id == a.author)
  let fans := fansOf d.favorites a.id
  return { slug := a.slug, title := a.title, description := a.description,
           body := if withBody then some a.body else none, tagList := tagsFor d.tags a.id,
           createdAt := iso a.createdAt, updatedAt := iso a.updatedAt,
           favorited := viewer.any fans.contains, favoritesCount := fans.length,
           author := profileOf u (d.followed.contains u.id) }

/-- The rows of `ids`, in the order of `ids` (rows may come back in any order). -/
def inOrder (ids : List Nat) (rows : List ArticleRow) : List ArticleRow :=
  ids.filterMap fun i => rows.find? (·.id == i)

def commentOf (author : UserRow) (following : Bool) (c : CommentRow) : Comment :=
  { id := c.id, createdAt := iso c.createdAt, updatedAt := iso c.updatedAt, body := c.body,
    author := profileOf author following }

/-- An update's time: now, but always after the previous update, so
`updatedAt` changes on every update even within one millisecond. -/
def nextUpdate (now previous : Nat) : Nat := max now (previous + 1)

/-- Slugs the API cannot give an article, because they name another route
(`/api/articles/feed`). -/
def reservedSlugs : List String := ["feed"]

end Conduit
