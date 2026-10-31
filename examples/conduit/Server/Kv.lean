/-
Conduit's `Store` on a key-value store (`Lasm.KV.Store`: get, put and
delete of string values), for the platforms without SQL: Deno KV (Deno
Deploy), Fastly's KV Store, Netlify Blobs, and memory where a platform has
no store at all. Each function does to the keys what its SQL statement in
`Server/Sql.lean` does to the tables.

The keys (values are JSON):

| Key | Value |
| --- | --- |
| `next` | the next id (one sequence for every kind of row) |
| `user/<id>`, `article/<id>`, `comment/<id>` | a row |
| `email/<email in lower case>`, `username/<name>`, `slug/<slug>` | the id of the row with that unique value |
| `articles` | every article's id, in order of creation |
| `tags/<article>`, `favorites/<article>`, `comments/<article>` | the article's tags in order, the ids of the users who favorited it, its comments' ids |
| `follows/<user>` | the ids of the users that user follows |

A list (articles, a feed, the tags) reads every article's keys: fine for an
example, slow for a large site. The writes of one request are not one
transaction, so two concurrent writers can race (Lasm.KV has no
compare-and-set).
-/
import Lasm.KV
import Lean.Data.Json
import Conduit.Store
open Lean Std.Async

namespace Conduit.Server.Kv

/-! ## Rows as JSON -/

def userJson (u : UserRow) : Json :=
  Json.mkObj [("id", toJson u.id), ("username", toJson u.username), ("email", toJson u.email),
    ("password", toJson u.password), ("bio", toJson u.bio), ("image", toJson u.image)]

def userOf (j : Json) : Option UserRow := do
  return { id := ← (j.getObjValAs? Nat "id").toOption, username := ← (j.getObjValAs? String "username").toOption,
           email := ← (j.getObjValAs? String "email").toOption, password := ← (j.getObjValAs? String "password").toOption,
           bio := (j.getObjValAs? String "bio").toOption, image := (j.getObjValAs? String "image").toOption }

def articleJson (a : ArticleRow) : Json :=
  Json.mkObj [("id", toJson a.id), ("slug", toJson a.slug), ("title", toJson a.title),
    ("description", toJson a.description), ("body", toJson a.body), ("author", toJson a.author),
    ("createdAt", toJson a.createdAt), ("updatedAt", toJson a.updatedAt)]

def articleOf (j : Json) : Option ArticleRow := do
  return { id := ← (j.getObjValAs? Nat "id").toOption, slug := ← (j.getObjValAs? String "slug").toOption,
           title := ← (j.getObjValAs? String "title").toOption, description := ← (j.getObjValAs? String "description").toOption,
           body := ← (j.getObjValAs? String "body").toOption, author := ← (j.getObjValAs? Nat "author").toOption,
           createdAt := ← (j.getObjValAs? Nat "createdAt").toOption, updatedAt := ← (j.getObjValAs? Nat "updatedAt").toOption }

def commentJson (c : CommentRow) : Json :=
  Json.mkObj [("id", toJson c.id), ("article", toJson c.article), ("author", toJson c.author),
    ("body", toJson c.body), ("createdAt", toJson c.createdAt), ("updatedAt", toJson c.updatedAt)]

def commentOf (j : Json) : Option CommentRow := do
  return { id := ← (j.getObjValAs? Nat "id").toOption, article := ← (j.getObjValAs? Nat "article").toOption,
           author := ← (j.getObjValAs? Nat "author").toOption, body := ← (j.getObjValAs? String "body").toOption,
           createdAt := ← (j.getObjValAs? Nat "createdAt").toOption, updatedAt := ← (j.getObjValAs? Nat "updatedAt").toOption }

/-- SQLite's `COLLATE NOCASE`: ASCII letters only. -/
def nocase (s : String) : String := s.map Char.toLower

/-- `l` with `x` added at the end unless it is there (`INSERT OR IGNORE`). -/
def insertOrIgnore {α : Type} [BEq α] (l : List α) (x : α) : List α :=
  if l.contains x then l else l ++ [x]

/-! ## Reading and writing keys -/

section
variable (kv : Lasm.KV.Store)

def read {α : Type} (decode : Json → Option α) (key : String) : Async (Option α) := do
  match ← kv.get key with
  | some text => return (Json.parse text).toOption.bind decode
  | none => return none

def write (key : String) (value : Json) : Async Unit := kv.put key value.compress

def list {α : Type} [FromJson α] (key : String) : Async (List α) := do
  return (← read kv (fun j => (fromJson? j : Except String (List α)).toOption) key).getD []

def writeList {α : Type} [ToJson α] (key : String) (l : List α) : Async Unit :=
  if l.isEmpty then kv.delete key else write kv key (toJson l)

def nat (key : String) : Async (Option Nat) := read kv (fun j => (fromJson? j : Except String Nat).toOption) key

/-- A new id. -/
def fresh : Async Nat := do
  let id := (← nat kv "next").getD 1
  write kv "next" (toJson (id + 1))
  return id

def user (id : Nat) : Async (Option UserRow) := read kv userOf s!"user/{id}"
def article (id : Nat) : Async (Option ArticleRow) := read kv articleOf s!"article/{id}"
def comment (id : Nat) : Async (Option CommentRow) := read kv commentOf s!"comment/{id}"

def byKey {α : Type} (get : Nat → Async (Option α)) (key : String) : Async (Option α) := do
  match ← nat kv key with
  | some id => get id
  | none => return none

/-- Fails as the SQL `UNIQUE` constraint does when `key` is taken by another row. -/
def claim (key : String) (id : Nat) : Async Unit := do
  match ← nat kv key with
  | some other => if other != id then throw (IO.userError s!"UNIQUE constraint failed: {key}")
  | none => pure ()
  write kv key (toJson id)

def articles : Async (List ArticleRow) := do
  return (← (← list (α := Nat) kv "articles").filterMapM (article kv))

end

/-! ## The store -/

/-- Conduit's store on `kv`. -/
def store (kv : Lasm.KV.Store) : Store Async where
  userById id := user kv id
  userByEmail e := byKey kv (user kv) s!"email/{nocase e}"
  userByUsername u := byKey kv (user kv) s!"username/{u}"
  usersByIds ids := ids.eraseDups.filterMapM (user kv)
  insertUser username email password := do
    if (← nat kv s!"email/{nocase email}").isSome || (← nat kv s!"username/{username}").isSome then
      throw (IO.userError "UNIQUE constraint failed: users")
    let id ← fresh kv
    write kv s!"user/{id}" (userJson { id, username, email, password, bio := none, image := none })
    write kv s!"email/{nocase email}" (toJson id)
    write kv s!"username/{username}" (toJson id)
    return id
  updateUser u := do
    let some old ← user kv u.id | return
    claim kv s!"email/{nocase u.email}" u.id
    claim kv s!"username/{u.username}" u.id
    if nocase old.email != nocase u.email then kv.delete s!"email/{nocase old.email}"
    if old.username != u.username then kv.delete s!"username/{old.username}"
    write kv s!"user/{u.id}" (userJson u)
  followed follower ids := do
    let follows : List Nat ← list kv s!"follows/{follower}"
    return follows.filter ids.contains
  follow a b := do
    if (← user kv a).isNone || (← user kv b).isNone || a == b then throw (IO.userError "constraint failed: follows")
    writeList kv s!"follows/{a}" (insertOrIgnore (← list (α := Nat) kv s!"follows/{a}") b)
  unfollow a b := do
    writeList kv s!"follows/{a}" ((← list (α := Nat) kv s!"follows/{a}").filter (· != b))
  articleBySlug slug := byKey kv (article kv) s!"slug/{slug}"
  slugsLike base := do
    return (← articles kv).map (·.slug) |>.filter fun s => s == base || s.startsWith (base ++ "-")
  articleIds f := do
    let byName (name : String) : Async (Option Nat) := nat kv s!"username/{name}"
    let author ← f.author.mapM byName
    let fan ← f.favoritedBy.mapM byName
    let feed : Option (List Nat) ← f.feedOf.mapM fun me => list kv s!"follows/{me}"
    let mut ids := #[]
    for a in ← articles kv do
      let tagged ← match f.tag with
        | some t => do pure ((← list (α := String) kv s!"tags/{a.id}").contains t)
        | none => pure true
      let byAuthor := author.all (· == some a.author)
      let favorited ← match fan with
        | some (some u) => do pure ((← list (α := Nat) kv s!"favorites/{a.id}").contains u)
        | some none => pure false
        | none => pure true
      let followed := feed.all (·.contains a.author)
      if tagged && byAuthor && favorited && followed then ids := ids.push a.id
    return ids.toList
  articlesByIds ids := ids.eraseDups.filterMapM (article kv)
  insertArticle a tags := do
    if (← nat kv s!"slug/{a.slug}").isSome then throw (IO.userError "UNIQUE constraint failed: articles.slug")
    let id ← fresh kv
    write kv s!"article/{id}" (articleJson { a with id := id })
    write kv s!"slug/{a.slug}" (toJson id)
    writeList kv s!"tags/{id}" tags.eraseDups
    writeList kv "articles" ((← list (α := Nat) kv "articles") ++ [id])
    return id
  updateArticle a := do
    let some old ← article kv a.id | return
    claim kv s!"slug/{a.slug}" a.id
    if old.slug != a.slug then kv.delete s!"slug/{old.slug}"
    let row := { old with slug := a.slug, title := a.title, description := a.description, body := a.body,
                          updatedAt := a.updatedAt }
    write kv s!"article/{a.id}" (articleJson row)
  setTags id tags := writeList kv s!"tags/{id}" tags.eraseDups
  deleteArticle id := do
    let some a ← article kv id | return
    for c in (← list (α := Nat) kv s!"comments/{id}") do kv.delete s!"comment/{c}"
    for key in [s!"comments/{id}", s!"tags/{id}", s!"favorites/{id}", s!"slug/{a.slug}", s!"article/{id}"] do kv.delete key
    writeList kv "articles" ((← list (α := Nat) kv "articles").filter (· != id))
  tagsOf ids := do
    let sorted := ids.eraseDups.mergeSort (· ≤ ·)
    return (← sorted.mapM fun id => do return (← list (α := String) kv s!"tags/{id}").map (id, ·)).flatten
  favoritesOf ids := do
    return (← ids.eraseDups.mapM fun id => do return (← list (α := Nat) kv s!"favorites/{id}").map (id, ·)).flatten
  favorite u a := do
    if (← user kv u).isNone || (← article kv a).isNone then throw (IO.userError "FOREIGN KEY constraint failed: favorites")
    writeList kv s!"favorites/{a}" (insertOrIgnore (← list (α := Nat) kv s!"favorites/{a}") u)
  unfavorite u a := do
    writeList kv s!"favorites/{a}" ((← list (α := Nat) kv s!"favorites/{a}").filter (· != u))
  commentsOf a := do (← list (α := Nat) kv s!"comments/{a}").filterMapM (comment kv)
  commentById id := comment kv id
  insertComment c := do
    if (← article kv c.article).isNone then throw (IO.userError "FOREIGN KEY constraint failed: comments")
    let id ← fresh kv
    write kv s!"comment/{id}" (commentJson { c with id := id })
    writeList kv s!"comments/{c.article}" ((← list (α := Nat) kv s!"comments/{c.article}") ++ [id])
    return id
  deleteComment id := do
    let some c ← comment kv id | return
    kv.delete s!"comment/{id}"
    writeList kv s!"comments/{c.article}" ((← list (α := Nat) kv s!"comments/{c.article}").filter (· != id))
  allTags := do
    let mut counts : List (String × Nat) := []
    for id in (← list (α := Nat) kv "articles") do
      for t in (← list (α := String) kv s!"tags/{id}") do
        counts := match counts.find? (·.1 == t) with
          | some (_, n) => counts.map fun p => if p.1 == t then (t, n + 1) else p
          | none => counts ++ [(t, 1)]
    -- Most used first, then by name (GROUP BY tag ORDER BY COUNT(*) DESC, tag).
    return (counts.mergeSort fun a b => a.2 > b.2 || (a.2 == b.2 && a.1 ≤ b.1)).map (·.1)

end Conduit.Server.Kv
