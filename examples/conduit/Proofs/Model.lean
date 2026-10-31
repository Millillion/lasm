/-
A model of Conduit's database: the tables as lists, and `store`, the
`Conduit.Store` whose every function does to the lists what its SQL
statement in `Server/Sql.lean` does to the tables. The endpoint theorems run
the real endpoint code (`Conduit.Api`) on this store. What they rely on, and
do not prove, is that each SQL statement does what its model function does
(PROOFS.md, "What is trusted").

The writes are named (`DB.addUser`, `DB.removeArticle`, …) so that the
specification (`Proofs/Spec.lean`) can say which of them each request may do.
-/
import Conduit.Api

namespace Conduit.Proofs

/-- The tables. -/
structure DB where
  users : List UserRow := []
  /-- (follower, followed) -/
  follows : List (Nat × Nat) := []
  articles : List ArticleRow := []
  /-- (article, tag), each article's tags in order -/
  tags : List (Nat × String) := []
  /-- (user, article) -/
  favorites : List (Nat × Nat) := []
  comments : List CommentRow := []
  /-- The next id `AUTOINCREMENT` hands out. -/
  next : Nat := 1

abbrev S := StateM DB

/-- `INSERT OR IGNORE INTO …`: add a pair unless it is there. -/
def insertOrIgnore {α : Type} [BEq α] (l : List α) (x : α) : List α :=
  if l.contains x then l else l ++ [x]

namespace DB

/-! ## The writes (one per SQL statement that changes a table) -/

/-- `INSERT INTO users`: a new user with the next id, no bio, no image. -/
def addUser (D : DB) (username email hash : String) : DB :=
  { D with users := D.users ++ [{ id := D.next, username, email, password := hash, bio := none, image := none }],
           next := D.next + 1 }

/-- `UPDATE users SET … WHERE id = ?`: every column of the user with `u.id`. -/
def setUser (D : DB) (u : UserRow) : DB :=
  { D with users := D.users.map fun v => if v.id == u.id then u else v }

/-- `INSERT OR IGNORE INTO follows`. -/
def addFollow (D : DB) (follower followed : Nat) : DB :=
  { D with follows := insertOrIgnore D.follows (follower, followed) }

/-- `DELETE FROM follows WHERE follower = ? AND followed = ?`. -/
def removeFollow (D : DB) (follower followed : Nat) : DB :=
  { D with follows := D.follows.filter (· != (follower, followed)) }

/-- `INSERT INTO articles` (with the next id) and its tags, in order. -/
def addArticle (D : DB) (a : ArticleRow) (tags : List String) : DB :=
  { D with articles := D.articles ++ [{ a with id := D.next }], tags := D.tags ++ tags.map (D.next, ·),
           next := D.next + 1 }

/-- `UPDATE articles SET slug, title, description, body, updatedAt WHERE id = ?`. -/
def setArticle (D : DB) (a : ArticleRow) : DB :=
  { D with articles := D.articles.map fun b => if b.id == a.id then
      { b with slug := a.slug, title := a.title, description := a.description, body := a.body, updatedAt := a.updatedAt }
    else b }

/-- `DELETE FROM article_tags WHERE article = ?` and the new tags, in order. -/
def setTags (D : DB) (id : Nat) (tags : List String) : DB :=
  { D with tags := D.tags.filter (·.1 != id) ++ tags.map (id, ·) }

/-- `DELETE FROM articles WHERE id = ?`, with its tags, favorites and comments. -/
def removeArticle (D : DB) (id : Nat) : DB :=
  { D with articles := D.articles.filter (·.id != id), tags := D.tags.filter (·.1 != id),
           favorites := D.favorites.filter (·.2 != id), comments := D.comments.filter (·.article != id) }

/-- `INSERT OR IGNORE INTO favorites`. -/
def addFavorite (D : DB) (user article : Nat) : DB :=
  { D with favorites := insertOrIgnore D.favorites (user, article) }

/-- `DELETE FROM favorites WHERE user = ? AND article = ?`. -/
def removeFavorite (D : DB) (user article : Nat) : DB :=
  { D with favorites := D.favorites.filter (· != (user, article)) }

/-- `INSERT INTO comments` (with the next id). -/
def addComment (D : DB) (c : CommentRow) : DB :=
  { D with comments := D.comments ++ [{ c with id := D.next }], next := D.next + 1 }

/-- `DELETE FROM comments WHERE id = ?`. -/
def removeComment (D : DB) (id : Nat) : DB :=
  { D with comments := D.comments.filter (·.id != id) }

/-- The slugs in use. -/
def slugs (D : DB) : List String := D.articles.map (·.slug)

end DB

/-- The model of each SQL statement in `Server/Sql.lean`. -/
def store : Store S where
  userById id := return (← get).users.find? (·.id == id)
  userByEmail e := return (← get).users.find? (·.email == e)
  userByUsername u := return (← get).users.find? (·.username == u)
  usersByIds ids := return (← get).users.filter (ids.contains ·.id)
  insertUser username email password := modifyGet fun D => (D.next, D.addUser username email password)
  updateUser u := modify (·.setUser u)
  followed f ids := return ((← get).follows.filter (fun p => p.1 == f && ids.contains p.2)).map (·.2)
  follow a b := modify (·.addFollow a b)
  unfollow a b := modify (·.removeFollow a b)
  articleBySlug slug := return (← get).articles.find? (·.slug == slug)
  slugsLike base := return (← get).articles.map (·.slug) |>.filter fun s => s == base || s.startsWith (base ++ "-")
  articleIds f := do
    let D ← get
    return (D.articles.filter fun a =>
      (f.tag.all fun t => D.tags.contains (a.id, t)) &&
      (f.author.all fun u => D.users.any fun v => v.username == u && v.id == a.author) &&
      (f.favoritedBy.all fun u => D.users.any fun v => v.username == u && D.favorites.contains (v.id, a.id)) &&
      (f.feedOf.all fun me => D.follows.contains (me, a.author))).map (·.id)
  articlesByIds ids := return (← get).articles.filter (ids.contains ·.id)
  insertArticle a tags := modifyGet fun D => (D.next, D.addArticle a tags)
  updateArticle a := modify (·.setArticle a)
  setTags id tags := modify (·.setTags id tags)
  deleteArticle id := modify (·.removeArticle id)
  tagsOf ids := return (← get).tags.filter (ids.contains ·.1)
  favoritesOf ids := return ((← get).favorites.filter (ids.contains ·.2)).map fun (u, a) => (a, u)
  favorite u a := modify (·.addFavorite u a)
  unfavorite u a := modify (·.removeFavorite u a)
  commentsOf a := return (← get).comments.filter (·.article == a)
  commentById id := return (← get).comments.find? (·.id == id)
  insertComment c := modifyGet fun D => (D.next, D.addComment c)
  deleteComment id := modify (·.removeComment id)
  allTags := return ((← get).tags.map (·.2)).eraseDups

/-- The world outside the database, as pure functions: a clock, password
hashing and tokens. Every theorem holds for every `Env`, so for every clock,
hash and token scheme. -/
structure Env where
  now : Nat
  hash : String → String
  check : String → String → Bool
  issue : Nat → String
  read : String → Option Nat

/-- The services of an `Env` (they never touch the database). -/
def Env.svc (e : Env) : Services S where
  now := pure e.now
  hashPassword p := pure (e.hash p)
  checkPassword p h := pure (e.check p h)
  issueToken id := pure (e.issue id)
  readToken t := pure (e.read t)

/-- What a request does: its reply and the database after it. -/
def run (e : Env) (r : Request) (D : DB) : Reply × DB := (Api.handle store e.svc r).run D

/-- The database after request `r`. -/
def after (e : Env) (r : Request) (D : DB) : DB := (run e r D).2

/-- The reply to request `r`. -/
def reply (e : Env) (r : Request) (D : DB) : Reply := (run e r D).1

end Conduit.Proofs
