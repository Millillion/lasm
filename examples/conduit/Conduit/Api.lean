/-
Every endpoint of the RealWorld API, written once against `Store m` and
`Services m` for any monad `m`. The server runs them with SQLite and Web
Crypto in `Async` (`Server/App.lean`); `Proofs/` runs the same functions on a
model of the database to prove what they do.

Each endpoint is in `ExceptT ApiError m`: an `ApiError` thrown anywhere
becomes the spec's error response.
-/
import Conduit.Types
import Conduit.Validation
import Conduit.Slug
import Conduit.Paging
import Conduit.Rules
open Lean

namespace Conduit

/-- An HTTP request, as the endpoints see it. -/
structure Request where
  method : String
  /-- The path's segments after `/api` (decoded): `["articles", "my-slug"]`. -/
  path : List String
  query : List (String × String) := []
  authorization : Option String := none
  body : String := ""
  deriving Repr, Inhabited

/-- An HTTP response: a status and a JSON body (none for 204). -/
structure Reply where
  status : Nat
  body : Option Json
  deriving Inhabited

def Reply.ok (j : Json) (status := 200) : Reply := { status, body := some j }
def Reply.error (e : ApiError) : Reply := { status := e.status, body := some e.encode }

namespace Api

variable {m : Type → Type} [Monad m]

abbrev M (m : Type → Type) := ExceptT ApiError m

/-! ## Authentication -/

/-- The token of an `Authorization: Token …` (or `Bearer …`) header. -/
def tokenOf (header : String) : Option String :=
  let h := clean header
  if h.startsWith "Token " then some (clean (h.drop 6).toString)
  else if h.startsWith "Bearer " then some (clean (h.drop 7).toString)
  else none

/-- The logged-in user, if a token was sent. A token that does not verify,
or whose user no longer exists, is 401 `is invalid`. -/
def viewer? (s : Store m) (svc : Services m) (r : Request) : M m (Option (UserRow × String)) := do
  let some header := r.authorization | return none
  let some token := tokenOf header | throw (.unauthorized "is invalid")
  let some id ← (svc.readToken token : m _) | throw (.unauthorized "is invalid")
  let some u ← (s.userById id : m _) | throw (.unauthorized "is invalid")
  return some (u, token)

/-- The logged-in user; 401 `is missing` without a token. -/
def requireUser (s : Store m) (svc : Services m) (r : Request) : M m (UserRow × String) := do
  match ← viewer? s svc r with
  | some v => return v
  | none => throw (.unauthorized "is missing")

/-- The request body: `{"<key>": {…}}`, decoded. -/
def bodyOf {α : Type} (r : Request) (key : String) (decode : Json → Except String α) : M m α := do
  let j ← match Json.parse r.body with
    | .ok j => pure j
    | .error _ => throw (.invalid [("body", ["is not valid JSON"])])
  let inner ← match Decode.unwrap key j with
    | .ok v => pure v
    | .error _ => throw (.invalid [(key, ["is missing"])])
  match decode inner with
  | .ok v => return v
  | .error e => throw (.invalid [(key, [e])])

def liftE {α : Type} (e : Except ApiError α) : M m α :=
  match e with
  | .ok a => pure a
  | .error err => throw err

/-! ## Users and profiles -/

def register (s : Store m) (svc : Services m) (r : Request) : M m Reply := do
  let u ← liftE (validateNewUser (← bodyOf r "user" NewUser.decode))
  if (← (s.userByUsername u.val.username : m _)).isSome then throw (.conflict "username")
  if (← (s.userByEmail u.val.email : m _)).isSome then throw (.conflict "email")
  let hash ← (svc.hashPassword u.val.password : m _)
  let id ← (s.insertUser u.val.username u.val.email hash : m _)
  let token ← (svc.issueToken id : m _)
  return .ok (wrap "user" (userOf { id, username := u.val.username, email := u.val.email, password := hash,
                                    bio := none, image := none } token).encode) 201

def login (s : Store m) (svc : Services m) (r : Request) : M m Reply := do
  let l ← liftE (validateLogin (← bodyOf r "user" LoginUser.decode))
  let invalid : ApiError := ⟨401, [("credentials", ["invalid"])]⟩
  let some u ← (s.userByEmail l.val.email : m _) | throw invalid
  unless ← (svc.checkPassword l.val.password u.password : m _) do throw invalid
  return .ok (wrap "user" (userOf u (← (svc.issueToken u.id : m _))).encode)

def currentUser (s : Store m) (svc : Services m) (r : Request) : M m Reply := do
  let (u, token) ← requireUser s svc r
  return .ok (wrap "user" (userOf u token).encode)

/-- The row after a validated patch (the password already hashed). -/
def applyPatch (u : UserRow) (p : UserPatch) (hash : Option String) : UserRow :=
  { u with email := p.email.getD u.email, username := p.username.getD u.username,
           password := hash.getD u.password, bio := p.bio.getD u.bio, image := p.image.getD u.image }

def updateUser (s : Store m) (svc : Services m) (r : Request) : M m Reply := do
  let (u, token) ← requireUser s svc r
  let p ← liftE (validateUpdateUser (← bodyOf r "user" UpdateUser.decode))
  if let some name := p.val.username then
    if let some other ← (s.userByUsername name : m _) then
      if other.id != u.id then throw (.conflict "username")
  if let some email := p.val.email then
    if let some other ← (s.userByEmail email : m _) then
      if other.id != u.id then throw (.conflict "email")
  let hash ← match p.val.password with
    | some pw => some <$> (svc.hashPassword pw : m _)
    | none => pure none
  let u' := applyPatch u p.val hash
  (s.updateUser u' : m _)
  return .ok (wrap "user" (userOf u' token).encode)

/-- Whether `viewer` follows `target`. -/
def follows (s : Store m) (viewer : Option Nat) (target : Nat) : M m Bool := do
  match viewer with
  | none => return false
  | some v => return (← (s.followed v [target] : m _)).contains target

def profileReply (s : Store m) (viewer : Option Nat) (u : UserRow) : M m Reply := do
  return .ok (wrap "profile" (profileOf u (← follows s viewer u.id)).encode)

def getProfile (s : Store m) (svc : Services m) (r : Request) (name : String) : M m Reply := do
  let v ← viewer? s svc r
  let some u ← (s.userByUsername name : m _) | throw (.notFound "profile")
  profileReply s (v.map (·.1.id)) u

/-- Follow `name`. Following yourself is refused (422); following twice is
the same as once. -/
def follow (s : Store m) (svc : Services m) (r : Request) (name : String) : M m Reply := do
  let (me, _) ← requireUser s svc r
  let some u ← (s.userByUsername name : m _) | throw (.notFound "profile")
  unless canFollow me.id u.id do throw (.invalid [("profile", ["cannot follow yourself"])])
  (s.follow me.id u.id : m _)
  profileReply s (some me.id) u

def unfollow (s : Store m) (svc : Services m) (r : Request) (name : String) : M m Reply := do
  let (me, _) ← requireUser s svc r
  let some u ← (s.userByUsername name : m _) | throw (.notFound "profile")
  (s.unfollow me.id u.id : m _)
  profileReply s (some me.id) u

/-! ## Articles -/

/-- Loads what `articleOf` needs for these rows. -/
def load (s : Store m) (viewer : Option Nat) (rows : List ArticleRow) : M m Loaded := do
  let ids := rows.map (·.id)
  let authorIds := (rows.map (·.author)).eraseDups
  let tags ← (s.tagsOf ids : m _)
  let favorites ← (s.favoritesOf ids : m _)
  let authors ← (s.usersByIds authorIds : m _)
  let followed ← match viewer with
    | some v => (s.followed v authorIds : m _)
    | none => pure []
  return { rows, tags, favorites, authors, followed }

/-- One article with its body, as `viewer` sees it. -/
def articleJson (s : Store m) (viewer : Option Nat) (a : ArticleRow) : M m Json := do
  let d ← load s viewer [a]
  let some art := articleOf viewer true d a | throw (.notFound "article")
  return wrap "article" art.encode

/-- A list page: the matching ids newest first, one window of them, and the
total count. -/
def listPage (s : Store m) (viewer : Option Nat) (f : Filter) (p : Page) : M m ArticleList := do
  let ids := newestFirst (← (s.articleIds f : m _))
  let pageIds := p.window ids
  let rows := inOrder pageIds (← (s.articlesByIds pageIds : m _))
  let d ← load s viewer rows
  return { articles := rows.filterMap (articleOf viewer false d), articlesCount := ids.length }

def listArticles (s : Store m) (svc : Services m) (r : Request) : M m Reply := do
  let v := (← viewer? s svc r).map (·.1.id)
  let q (k : String) := r.query.lookup k
  let page ← liftE (parsePage q)
  let f : Filter := { tag := q "tag", author := q "author", favoritedBy := q "favorited" }
  return .ok (← listPage s v f page).encode

def feed (s : Store m) (svc : Services m) (r : Request) : M m Reply := do
  let (me, _) ← requireUser s svc r
  let page ← liftE (parsePage (r.query.lookup ·))
  return .ok (← listPage s (some me.id) { feedOf := some me.id } page).encode

def findArticle (s : Store m) (slug : String) : M m ArticleRow := do
  let some a ← (s.articleBySlug slug : m _) | throw (.notFound "article")
  return a

def getArticle (s : Store m) (svc : Services m) (r : Request) (slug : String) : M m Reply := do
  let v := (← viewer? s svc r).map (·.1.id)
  return .ok (← articleJson s v (← findArticle s slug))

/-- A free slug for `title`: never one in use, never a reserved route name. -/
def freeSlug (s : Store m) (title : String) (except : Option String := none) : M m String := do
  let base := slugify title
  let taken ← (s.slugsLike base : m _)
  let taken := match except with
    | some own => taken.filter (· != own)
    | none => taken
  return uniqueSlug base (reservedSlugs ++ taken)

def createArticle (s : Store m) (svc : Services m) (r : Request) : M m Reply := do
  let (me, _) ← requireUser s svc r
  let a ← liftE (validateNewArticle (← bodyOf r "article" NewArticle.decode))
  let slug ← freeSlug s a.val.title
  let now ← (svc.now : m _)
  let row : ArticleRow := { id := 0, slug, title := a.val.title, description := a.val.description,
                            body := a.val.body, author := me.id, createdAt := now, updatedAt := now }
  let id ← (s.insertArticle row a.val.tagList : m _)
  return .ok (← articleJson s (some me.id) { row with id }) 201

/-- The article after a validated patch: a new title gets a new slug. -/
def patchArticle (a : ArticleRow) (p : ArticlePatch) (slug : String) (now : Nat) : ArticleRow :=
  { a with slug, title := p.title.getD a.title, description := p.description.getD a.description,
           body := p.body.getD a.body, updatedAt := nextUpdate now a.updatedAt }

/-- Update an article: 404 if there is none, 403 unless the viewer wrote it. -/
def updateArticle (s : Store m) (svc : Services m) (r : Request) (slug : String) : M m Reply := do
  let (me, _) ← requireUser s svc r
  let a ← findArticle s slug
  unless canEditArticle me.id a do throw (.forbidden "article")
  let p ← liftE (validateUpdateArticle (← bodyOf r "article" UpdateArticle.decode))
  let newSlug ← match p.val.title with
    | some t => if t == a.title then pure a.slug else freeSlug s t (except := some a.slug)
    | none => pure a.slug
  let a' := patchArticle a p.val newSlug (← (svc.now : m _))
  (s.updateArticle a' : m _)
  if let some tags := p.val.tagList then (s.setTags a.id tags : m _)
  return .ok (← articleJson s (some me.id) a')

/-- Delete an article: 404 if there is none, 403 unless the viewer wrote it. -/
def deleteArticle (s : Store m) (svc : Services m) (r : Request) (slug : String) : M m Reply := do
  let (me, _) ← requireUser s svc r
  let a ← findArticle s slug
  unless canEditArticle me.id a do throw (.forbidden "article")
  (s.deleteArticle a.id : m _)
  return { status := 204, body := none }

def favorite (s : Store m) (svc : Services m) (r : Request) (slug : String) : M m Reply := do
  let (me, _) ← requireUser s svc r
  let a ← findArticle s slug
  (s.favorite me.id a.id : m _)
  return .ok (← articleJson s (some me.id) a)

def unfavorite (s : Store m) (svc : Services m) (r : Request) (slug : String) : M m Reply := do
  let (me, _) ← requireUser s svc r
  let a ← findArticle s slug
  (s.unfavorite me.id a.id : m _)
  return .ok (← articleJson s (some me.id) a)

/-! ## Comments -/

def commentJson (s : Store m) (viewer : Option Nat) (c : CommentRow) : M m (Option Comment) := do
  let some u ← (s.userById c.author : m _) | return none
  return some (commentOf u (← follows s viewer u.id) c)

def listComments (s : Store m) (svc : Services m) (r : Request) (slug : String) : M m Reply := do
  let v := (← viewer? s svc r).map (·.1.id)
  let a ← findArticle s slug
  let cs ← (s.commentsOf a.id : m _)
  let authorIds := (cs.map (·.author)).eraseDups
  let authors ← (s.usersByIds authorIds : m _)
  let followed ← match v with
    | some me => (s.followed me authorIds : m _)
    | none => pure []
  let comments := cs.filterMap fun c => do
    let u ← authors.find? (·.id == c.author)
    return commentOf u (followed.contains u.id) c
  return .ok (Json.mkObj [("comments", .arr (comments.map Comment.encode).toArray)])

def addComment (s : Store m) (svc : Services m) (r : Request) (slug : String) : M m Reply := do
  let (me, _) ← requireUser s svc r
  let a ← findArticle s slug
  let c ← liftE (validateNewComment (← bodyOf r "comment" NewComment.decode))
  let now ← (svc.now : m _)
  let row : CommentRow := { id := 0, article := a.id, author := me.id, body := c.val.body, createdAt := now, updatedAt := now }
  let id ← (s.insertComment row : m _)
  return .ok (wrap "comment" (commentOf me false { row with id }).encode) 201

/-- Delete a comment: 404 unless the article has it, 403 unless the viewer wrote it. -/
def deleteComment (s : Store m) (svc : Services m) (r : Request) (slug : String) (id : String) : M m Reply := do
  let (me, _) ← requireUser s svc r
  let a ← findArticle s slug
  let some n := id.toNat? | throw (.notFound "comment")
  let some c ← (s.commentById n : m _) | throw (.notFound "comment")
  unless c.article == a.id do throw (.notFound "comment")
  unless canDeleteComment me.id c do throw (.forbidden "comment")
  (s.deleteComment c.id : m _)
  return { status := 204, body := none }

def tags (s : Store m) : M m Reply := do
  return .ok (Json.mkObj [("tags", Json'.strs (← (s.allTags : m _)))])

/-! ## Routing -/

/-- The endpoint for a method and path. -/
def route (s : Store m) (svc : Services m) (r : Request) : M m Reply :=
  match r.method, r.path with
  | "POST", ["users"] => register s svc r
  | "POST", ["users", "login"] => login s svc r
  | "GET", ["user"] => currentUser s svc r
  | "PUT", ["user"] => updateUser s svc r
  | "GET", ["profiles", name] => getProfile s svc r name
  | "POST", ["profiles", name, "follow"] => follow s svc r name
  | "DELETE", ["profiles", name, "follow"] => unfollow s svc r name
  | "GET", ["articles"] => listArticles s svc r
  | "POST", ["articles"] => createArticle s svc r
  | "GET", ["articles", "feed"] => feed s svc r
  | "GET", ["articles", slug] => getArticle s svc r slug
  | "PUT", ["articles", slug] => updateArticle s svc r slug
  | "DELETE", ["articles", slug] => deleteArticle s svc r slug
  | "POST", ["articles", slug, "favorite"] => favorite s svc r slug
  | "DELETE", ["articles", slug, "favorite"] => unfavorite s svc r slug
  | "GET", ["articles", slug, "comments"] => listComments s svc r slug
  | "POST", ["articles", slug, "comments"] => addComment s svc r slug
  | "DELETE", ["articles", slug, "comments", id] => deleteComment s svc r slug id
  | "GET", ["tags"] => tags s
  | _, _ => throw (.notFound "route")

/-- The whole API: a request in, a reply out (errors included). -/
def handle (s : Store m) (svc : Services m) (r : Request) : m Reply := do
  match ← (route s svc r).run with
  | .ok reply => return reply
  | .error e => return .error e

end Api
end Conduit
