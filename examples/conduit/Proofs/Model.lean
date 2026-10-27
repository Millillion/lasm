/-
A model of Conduit's database: the tables as lists, and `store`, the
`Conduit.Store` whose every function does to the lists what its SQL
statement in `Server/Sql.lean` does to the tables. The endpoint theorems
(`Proofs/Endpoints.lean`) run the real endpoint code (`Conduit.Api`) on this
store. What they rely on, and do not prove, is that each SQL statement does
what its model function does (see PROOFS.md, "What is trusted").
-/
import Conduit.Api

namespace Conduit.Proofs

/-- The tables. -/
structure Model where
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

abbrev S := StateM Model

/-- `INSERT OR IGNORE INTO …`: add a pair unless it is there. -/
def insertOrIgnore {α : Type} [BEq α] (l : List α) (x : α) : List α :=
  if l.contains x then l else l ++ [x]

/-- The model of each SQL statement in `Server/Sql.lean`. -/
def store : Store S where
  userById id := return (← get).users.find? (·.id == id)
  userByEmail e := return (← get).users.find? (·.email == e)
  userByUsername u := return (← get).users.find? (·.username == u)
  usersByIds ids := return (← get).users.filter (ids.contains ·.id)
  insertUser username email password := modifyGet fun M =>
    (M.next, { M with users := M.users ++ [{ id := M.next, username, email, password, bio := none, image := none }],
                      next := M.next + 1 })
  updateUser u := modify fun M => { M with users := M.users.map fun v => if v.id == u.id then u else v }
  followed f ids := return ((← get).follows.filter (fun p => p.1 == f && ids.contains p.2)).map (·.2)
  follow a b := modify fun M => { M with follows := insertOrIgnore M.follows (a, b) }
  unfollow a b := modify fun M => { M with follows := M.follows.filter (· != (a, b)) }
  articleBySlug slug := return (← get).articles.find? (·.slug == slug)
  slugsLike base := return (← get).articles.map (·.slug) |>.filter fun s => s == base || s.startsWith (base ++ "-")
  articleIds f := do
    let M ← get
    return (M.articles.filter fun a =>
      (f.tag.all fun t => M.tags.contains (a.id, t)) &&
      (f.author.all fun u => M.users.any fun v => v.username == u && v.id == a.author) &&
      (f.favoritedBy.all fun u => M.users.any fun v => v.username == u && M.favorites.contains (v.id, a.id)) &&
      (f.feedOf.all fun me => M.follows.contains (me, a.author))).map (·.id)
  articlesByIds ids := return (← get).articles.filter (ids.contains ·.id)
  insertArticle a tags := modifyGet fun M =>
    (M.next, { M with articles := M.articles ++ [{ a with id := M.next }],
                      tags := M.tags ++ tags.map (M.next, ·), next := M.next + 1 })
  updateArticle a := modify fun M => { M with articles := M.articles.map fun b => if b.id == a.id then
      { b with slug := a.slug, title := a.title, description := a.description, body := a.body, updatedAt := a.updatedAt }
    else b }
  setTags id tags := modify fun M => { M with tags := M.tags.filter (·.1 != id) ++ tags.map (id, ·) }
  deleteArticle id := modify fun M =>
    { M with articles := M.articles.filter (·.id != id), tags := M.tags.filter (·.1 != id),
             favorites := M.favorites.filter (·.2 != id), comments := M.comments.filter (·.article != id) }
  tagsOf ids := return (← get).tags.filter (ids.contains ·.1)
  favoritesOf ids := return ((← get).favorites.filter (ids.contains ·.2)).map fun (u, a) => (a, u)
  favorite u a := modify fun M => { M with favorites := insertOrIgnore M.favorites (u, a) }
  unfavorite u a := modify fun M => { M with favorites := M.favorites.filter (· != (u, a)) }
  commentsOf a := return (← get).comments.filter (·.article == a)
  commentById id := return (← get).comments.find? (·.id == id)
  insertComment c := modifyGet fun M => (M.next, { M with comments := M.comments ++ [{ c with id := M.next }], next := M.next + 1 })
  deleteComment id := modify fun M => { M with comments := M.comments.filter (·.id != id) }
  allTags := return ((← get).tags.map (·.2)).eraseDups

/-- Services that do not touch the database: any clock, hash and token
functions (the theorems hold for all of them). -/
def services (now : Nat) (hash : String → String) (check : String → String → Bool)
    (issue : Nat → String) (read : String → Option Nat) : Services S where
  now := pure now
  hashPassword p := pure (hash p)
  checkPassword p h := pure (check p h)
  issueToken id := pure (issue id)
  readToken t := pure (read t)

end Conduit.Proofs
