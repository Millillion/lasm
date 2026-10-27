/-
What the endpoint logic needs from the outside world, as plain records of
functions over any monad `m`:

- `Store m`: the database, one function per SQL statement (or small batch).
  The server implements it with SQLite (`Server/Sql.lean`: node:sqlite, D1,
  bun:sqlite); the proofs implement it with lists (`Proofs/Model.lean`).
- `Services m`: the clock, password hashing and tokens (Web Crypto on the
  server).

Because the endpoints (`Conduit/Api.lean`) are written against these records,
the theorems about them are about the code the server runs.
-/
namespace Conduit

/-- A row of `users`. `password` is the encoded PBKDF2 hash, never the password. -/
structure UserRow where
  id : Nat
  username : String
  email : String
  password : String
  bio : Option String
  image : Option String
  deriving Repr, BEq, DecidableEq, Inhabited

/-- A row of `articles`; times in milliseconds since the epoch. -/
structure ArticleRow where
  id : Nat
  slug : String
  title : String
  description : String
  body : String
  author : Nat
  createdAt : Nat
  updatedAt : Nat
  deriving Repr, BEq, DecidableEq, Inhabited

/-- A row of `comments`. -/
structure CommentRow where
  id : Nat
  article : Nat
  author : Nat
  body : String
  createdAt : Nat
  updatedAt : Nat
  deriving Repr, BEq, DecidableEq, Inhabited

/-- Which articles a list shows (all given filters apply). -/
structure Filter where
  tag : Option String := none
  author : Option String := none
  favoritedBy : Option String := none
  /-- The feed: articles by the users this user follows. -/
  feedOf : Option Nat := none
  deriving Repr, BEq, DecidableEq, Inhabited

/-- The database. -/
structure Store (m : Type → Type) where
  userById : Nat → m (Option UserRow)
  userByEmail : String → m (Option UserRow)
  userByUsername : String → m (Option UserRow)
  usersByIds : List Nat → m (List UserRow)
  /-- Inserts a user (username, email, password hash); returns the new id. -/
  insertUser : String → String → String → m Nat
  /-- Writes every column of the row with its id. -/
  updateUser : UserRow → m Unit
  /-- Which of the given users `follower` follows. -/
  followed : Nat → List Nat → m (List Nat)
  /-- Adds the pair (follower, followed) unless it is there. -/
  follow : Nat → Nat → m Unit
  /-- Removes the pair (follower, followed) if it is there. -/
  unfollow : Nat → Nat → m Unit
  articleBySlug : String → m (Option ArticleRow)
  /-- Slugs equal to `base` or starting with `base-` (a superset is fine). -/
  slugsLike : String → m (List String)
  /-- The ids of the articles that pass the filter (any order). -/
  articleIds : Filter → m (List Nat)
  articlesByIds : List Nat → m (List ArticleRow)
  /-- Inserts an article with its tags (in order); returns the new id. -/
  insertArticle : ArticleRow → List String → m Nat
  /-- Writes slug, title, description, body and updatedAt of the row with its id. -/
  updateArticle : ArticleRow → m Unit
  /-- Replaces the article's tags. -/
  setTags : Nat → List String → m Unit
  /-- Deletes the article with its tags, favorites and comments. -/
  deleteArticle : Nat → m Unit
  /-- (article, tag) pairs of the given articles, each article's in order. -/
  tagsOf : List Nat → m (List (Nat × String))
  /-- (article, user) pairs: who favorited the given articles. -/
  favoritesOf : List Nat → m (List (Nat × Nat))
  /-- Adds the pair (user, article) unless it is there. -/
  favorite : Nat → Nat → m Unit
  /-- Removes the pair (user, article) if it is there. -/
  unfavorite : Nat → Nat → m Unit
  commentsOf : Nat → m (List CommentRow)
  commentById : Nat → m (Option CommentRow)
  /-- Inserts a comment (its id is ignored); returns the new id. -/
  insertComment : CommentRow → m Nat
  deleteComment : Nat → m Unit
  /-- Every tag in use, most used first. -/
  allTags : m (List String)

/-- The clock, passwords and tokens. -/
structure Services (m : Type → Type) where
  /-- Milliseconds since the epoch. -/
  now : m Nat
  /-- An encoded hash of a password (salted). -/
  hashPassword : String → m String
  /-- Whether a password matches an encoded hash. -/
  checkPassword : String → String → m Bool
  /-- A signed token for a user id. -/
  issueToken : Nat → m String
  /-- The user id of a valid, unexpired token. -/
  readToken : String → m (Option Nat)

end Conduit
