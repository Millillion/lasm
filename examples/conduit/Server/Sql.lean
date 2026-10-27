/-
The database layer: every SQL statement Conduit runs, and `Conduit.Store`
built from them. It talks to SQLite through `Sql`, three functions that each
target's binding module provides (`Server/NodeSqlite.lean`, `Server/D1.lean`,
`Server/BunSqlite.lean`). All values are bound as parameters (`?`), never
spliced into the SQL text.
-/
import Lasm.JS
import Conduit.Store
open Lasm.JS

namespace Conduit.Server

/-- A SQLite connection, as a binding module provides it. -/
structure Sql where
  /-- The rows of a query, as plain objects. -/
  all : String → Array Data → Async (Array Data)
  /-- One write; returns the id of the row it inserted (if any). -/
  run : String → Array Data → Async Nat
  /-- Several writes, all or none. -/
  batch : Array (String × Array Data) → Async Unit

/-- The tables, created on first start. Every statement is idempotent. -/
def schema : List String := [
  "CREATE TABLE IF NOT EXISTS users (
     id INTEGER PRIMARY KEY AUTOINCREMENT,
     username TEXT NOT NULL UNIQUE,
     email TEXT NOT NULL UNIQUE COLLATE NOCASE,
     password TEXT NOT NULL,
     bio TEXT,
     image TEXT)",
  "CREATE TABLE IF NOT EXISTS follows (
     follower INTEGER NOT NULL REFERENCES users(id) ON DELETE CASCADE,
     followed INTEGER NOT NULL REFERENCES users(id) ON DELETE CASCADE,
     PRIMARY KEY (follower, followed),
     CHECK (follower <> followed))",
  "CREATE TABLE IF NOT EXISTS articles (
     id INTEGER PRIMARY KEY AUTOINCREMENT,
     slug TEXT NOT NULL UNIQUE,
     title TEXT NOT NULL,
     description TEXT NOT NULL,
     body TEXT NOT NULL,
     author INTEGER NOT NULL REFERENCES users(id) ON DELETE CASCADE,
     created_at INTEGER NOT NULL,
     updated_at INTEGER NOT NULL)",
  "CREATE INDEX IF NOT EXISTS articles_author ON articles(author)",
  "CREATE TABLE IF NOT EXISTS article_tags (
     article INTEGER NOT NULL REFERENCES articles(id) ON DELETE CASCADE,
     tag TEXT NOT NULL,
     position INTEGER NOT NULL,
     PRIMARY KEY (article, tag))",
  "CREATE INDEX IF NOT EXISTS article_tags_tag ON article_tags(tag)",
  "CREATE TABLE IF NOT EXISTS favorites (
     user INTEGER NOT NULL REFERENCES users(id) ON DELETE CASCADE,
     article INTEGER NOT NULL REFERENCES articles(id) ON DELETE CASCADE,
     PRIMARY KEY (user, article))",
  "CREATE INDEX IF NOT EXISTS favorites_article ON favorites(article)",
  "CREATE TABLE IF NOT EXISTS comments (
     id INTEGER PRIMARY KEY AUTOINCREMENT,
     article INTEGER NOT NULL REFERENCES articles(id) ON DELETE CASCADE,
     author INTEGER NOT NULL REFERENCES users(id) ON DELETE CASCADE,
     body TEXT NOT NULL,
     created_at INTEGER NOT NULL,
     updated_at INTEGER NOT NULL)",
  "CREATE INDEX IF NOT EXISTS comments_article ON comments(article)"]

/-! ## Reading rows -/

def text (d : Data) (k : String) : String :=
  match d.field k with | .string s => s | _ => ""

def textOpt (d : Data) (k : String) : Option String :=
  match d.field k with | .string s => some s | _ => none

def num (d : Data) (k : String) : Nat :=
  match d.field k with
  | .number n => n.toUInt64.toNat
  | .bigint i => i.toNat
  | _ => 0

def userRow (d : Data) : UserRow :=
  { id := num d "id", username := text d "username", email := text d "email", password := text d "password",
    bio := textOpt d "bio", image := textOpt d "image" }

def articleRow (d : Data) : ArticleRow :=
  { id := num d "id", slug := text d "slug", title := text d "title", description := text d "description",
    body := text d "body", author := num d "author", createdAt := num d "created_at", updatedAt := num d "updated_at" }

def commentRow (d : Data) : CommentRow :=
  { id := num d "id", article := num d "article", author := num d "author", body := text d "body",
    createdAt := num d "created_at", updatedAt := num d "updated_at" }

/-- `?, ?, ?` for a list of `n` parameters. -/
def marks (n : Nat) : String := ", ".intercalate (List.replicate n "?")

def nats (l : List Nat) : Array Data := (l.map toJS).toArray

def userCols := "id, username, email, password, bio, image"
def articleCols := "id, slug, title, description, body, author, created_at, updated_at"
def commentCols := "id, article, author, body, created_at, updated_at"

/-- The statements that insert an article's tags, in order. -/
def tagInserts (slug : String) (tags : List String) : List (String × Array Data) :=
  tags.zipIdx.map fun (t, i) =>
    ("INSERT INTO article_tags (article, tag, position) VALUES ((SELECT id FROM articles WHERE slug = ?), ?, ?)",
     #[toJS slug, toJS t, toJS i])

/-- Conduit's store on a SQLite connection. -/
def store (db : Sql) : Store Async where
  userById id := do return (← db.all s!"SELECT {userCols} FROM users WHERE id = ?" #[toJS id])[0]?.map userRow
  userByEmail e := do return (← db.all s!"SELECT {userCols} FROM users WHERE email = ?" #[toJS e])[0]?.map userRow
  userByUsername u := do return (← db.all s!"SELECT {userCols} FROM users WHERE username = ?" #[toJS u])[0]?.map userRow
  usersByIds ids := do
    if ids.isEmpty then return []
    return (← db.all s!"SELECT {userCols} FROM users WHERE id IN ({marks ids.length})" (nats ids)).toList.map userRow
  insertUser username email password :=
    db.run "INSERT INTO users (username, email, password) VALUES (?, ?, ?)" #[toJS username, toJS email, toJS password]
  updateUser u := do
    discard <| db.run "UPDATE users SET username = ?, email = ?, password = ?, bio = ?, image = ? WHERE id = ?"
      #[toJS u.username, toJS u.email, toJS u.password, toJS u.bio, toJS u.image, toJS u.id]
  followed follower ids := do
    if ids.isEmpty then return []
    let rows ← db.all s!"SELECT followed FROM follows WHERE follower = ? AND followed IN ({marks ids.length})"
      (#[toJS follower] ++ nats ids)
    return rows.toList.map (num · "followed")
  follow a b := do
    discard <| db.run "INSERT OR IGNORE INTO follows (follower, followed) VALUES (?, ?)" #[toJS a, toJS b]
  unfollow a b := do
    discard <| db.run "DELETE FROM follows WHERE follower = ? AND followed = ?" #[toJS a, toJS b]
  articleBySlug slug := do
    return (← db.all s!"SELECT {articleCols} FROM articles WHERE slug = ?" #[toJS slug])[0]?.map articleRow
  slugsLike base := do
    let rows ← db.all "SELECT slug FROM articles WHERE slug = ? OR slug LIKE ? || '-%'" #[toJS base, toJS base]
    return rows.toList.map (text · "slug")
  articleIds f := do
    let rows ← db.all
      "SELECT a.id FROM articles a WHERE
         (?1 IS NULL OR EXISTS (SELECT 1 FROM article_tags t WHERE t.article = a.id AND t.tag = ?1)) AND
         (?2 IS NULL OR a.author = (SELECT id FROM users WHERE username = ?2)) AND
         (?3 IS NULL OR EXISTS (SELECT 1 FROM favorites f JOIN users u ON u.id = f.user
                                WHERE f.article = a.id AND u.username = ?3)) AND
         (?4 IS NULL OR a.author IN (SELECT followed FROM follows WHERE follower = ?4))"
      #[toJS f.tag, toJS f.author, toJS f.favoritedBy, toJS f.feedOf]
    return rows.toList.map (num · "id")
  articlesByIds ids := do
    if ids.isEmpty then return []
    return (← db.all s!"SELECT {articleCols} FROM articles WHERE id IN ({marks ids.length})" (nats ids)).toList.map articleRow
  insertArticle a tags := do
    db.batch <| #[("INSERT INTO articles (slug, title, description, body, author, created_at, updated_at)
                   VALUES (?, ?, ?, ?, ?, ?, ?)",
                  #[toJS a.slug, toJS a.title, toJS a.description, toJS a.body, toJS a.author, toJS a.createdAt,
                    toJS a.updatedAt])] ++ (tagInserts a.slug tags).toArray
    let rows ← db.all "SELECT id FROM articles WHERE slug = ?" #[toJS a.slug]
    return rows[0]?.map (num · "id") |>.getD 0
  updateArticle a := do
    discard <| db.run "UPDATE articles SET slug = ?, title = ?, description = ?, body = ?, updated_at = ? WHERE id = ?"
      #[toJS a.slug, toJS a.title, toJS a.description, toJS a.body, toJS a.updatedAt, toJS a.id]
  setTags id tags := do
    let slug := (← db.all "SELECT slug FROM articles WHERE id = ?" #[toJS id])[0]?.map (text · "slug") |>.getD ""
    db.batch <| #[("DELETE FROM article_tags WHERE article = ?", #[toJS id])] ++ (tagInserts slug tags).toArray
  deleteArticle id := do
    db.batch #[("DELETE FROM article_tags WHERE article = ?", #[toJS id]),
               ("DELETE FROM favorites WHERE article = ?", #[toJS id]),
               ("DELETE FROM comments WHERE article = ?", #[toJS id]),
               ("DELETE FROM articles WHERE id = ?", #[toJS id])]
  tagsOf ids := do
    if ids.isEmpty then return []
    let rows ← db.all s!"SELECT article, tag FROM article_tags WHERE article IN ({marks ids.length}) ORDER BY article, position"
      (nats ids)
    return rows.toList.map fun r => (num r "article", text r "tag")
  favoritesOf ids := do
    if ids.isEmpty then return []
    let rows ← db.all s!"SELECT article, user FROM favorites WHERE article IN ({marks ids.length})" (nats ids)
    return rows.toList.map fun r => (num r "article", num r "user")
  favorite u a := do
    discard <| db.run "INSERT OR IGNORE INTO favorites (user, article) VALUES (?, ?)" #[toJS u, toJS a]
  unfavorite u a := do
    discard <| db.run "DELETE FROM favorites WHERE user = ? AND article = ?" #[toJS u, toJS a]
  commentsOf a := do
    return (← db.all s!"SELECT {commentCols} FROM comments WHERE article = ? ORDER BY id" #[toJS a]).toList.map commentRow
  commentById id := do
    return (← db.all s!"SELECT {commentCols} FROM comments WHERE id = ?" #[toJS id])[0]?.map commentRow
  insertComment c :=
    db.run "INSERT INTO comments (article, author, body, created_at, updated_at) VALUES (?, ?, ?, ?, ?)"
      #[toJS c.article, toJS c.author, toJS c.body, toJS c.createdAt, toJS c.updatedAt]
  deleteComment id := do
    discard <| db.run "DELETE FROM comments WHERE id = ?" #[toJS id]
  allTags := do
    let rows ← db.all "SELECT tag FROM article_tags GROUP BY tag ORDER BY COUNT(*) DESC, tag" #[]
    return rows.toList.map (text · "tag")

/-- Creates the tables (each binding module runs this once at start). -/
def migrate (db : Sql) : Async Unit := do
  for stmt in schema do discard <| db.run stmt #[]

end Conduit.Server
