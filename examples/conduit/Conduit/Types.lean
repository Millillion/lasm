/-
The RealWorld API's data, exactly as it crosses the wire, and its JSON
encoding. Shared by the server (which encodes responses and decodes requests)
and the browser app (which encodes requests and decodes responses), so both
sides use the same functions; `Proofs/Json.lean` proves that each decoder
inverts its encoder.

Spec: https://github.com/gothinkster/realworld/blob/main/specs/api/openapi.yml
-/
import Lean.Data.Json
open Lean

namespace Conduit

/-! ## Responses -/

/-- `User` (the logged-in user, with their token). -/
structure User where
  email : String
  token : String
  username : String
  bio : Option String
  image : Option String
  deriving Repr, BEq, DecidableEq, Inhabited

/-- `Profile` (another user, as the viewer sees them). -/
structure Profile where
  username : String
  bio : Option String
  image : Option String
  following : Bool
  deriving Repr, BEq, DecidableEq, Inhabited

/-- `Article`. Lists omit the body (`body = none`); a single article has it. -/
structure Article where
  slug : String
  title : String
  description : String
  body : Option String
  tagList : List String
  createdAt : String
  updatedAt : String
  favorited : Bool
  favoritesCount : Nat
  author : Profile
  deriving Repr, BEq, DecidableEq, Inhabited

/-- `Comment`. -/
structure Comment where
  id : Nat
  createdAt : String
  updatedAt : String
  body : String
  author : Profile
  deriving Repr, BEq, DecidableEq, Inhabited

/-- `MultipleArticlesResponse`. -/
structure ArticleList where
  articles : List Article
  articlesCount : Nat
  deriving Repr, BEq, DecidableEq, Inhabited

/-! ## Requests -/

/-- `LoginUser`. -/
structure LoginUser where
  email : String
  password : String
  deriving Repr, BEq, DecidableEq, Inhabited

/-- `NewUser`. -/
structure NewUser where
  username : String
  email : String
  password : String
  deriving Repr, BEq, DecidableEq, Inhabited

/-- A field of an update: absent (leave it as it is), `null`, or a value. -/
inductive Field (α : Type) where
  | absent
  | null
  | value (a : α)
  deriving Repr, BEq, DecidableEq, Inhabited

/-- `UpdateUser`: every field optional. `bio` and `image` may be `null`;
the others may not (the validation rejects it). -/
structure UpdateUser where
  email : Field String := .absent
  username : Field String := .absent
  password : Field String := .absent
  bio : Field String := .absent
  image : Field String := .absent
  deriving Repr, BEq, DecidableEq, Inhabited

/-- `NewArticle`. A missing `tagList` is the empty list. -/
structure NewArticle where
  title : String
  description : String
  body : String
  tagList : List String := []
  deriving Repr, BEq, DecidableEq, Inhabited

/-- `UpdateArticle`: every field optional; none may be `null`. -/
structure UpdateArticle where
  title : Field String := .absent
  description : Field String := .absent
  body : Field String := .absent
  tagList : Field (List String) := .absent
  deriving Repr, BEq, DecidableEq, Inhabited

/-- `NewComment`. -/
structure NewComment where
  body : String
  deriving Repr, BEq, DecidableEq, Inhabited

/-! ## Errors: `GenericErrorModel`, `{"errors": {"field": ["message", …]}}` -/

/-- An error response: its status and its messages by field. -/
structure ApiError where
  status : Nat
  errors : List (String × List String)
  deriving Repr, BEq, DecidableEq, Inhabited

namespace ApiError
/-- 401 `{"errors":{"token":["is missing"]}}` and friends. -/
def unauthorized (msg : String := "is missing") : ApiError := ⟨401, [("token", [msg])]⟩
def forbidden (resource : String) : ApiError := ⟨403, [(resource, ["forbidden"])]⟩
def notFound (resource : String) : ApiError := ⟨404, [(resource, ["not found"])]⟩
def conflict (field : String) : ApiError := ⟨409, [(field, ["has already been taken"])]⟩
def invalid (errors : List (String × List String)) : ApiError := ⟨422, errors⟩
def blank (field : String) : ApiError := invalid [(field, ["can't be blank"])]
end ApiError

/-! ## Encoding -/

namespace Json'

def str (s : String) : Json := .str s
def optStr : Option String → Json
  | some s => .str s
  | none => .null
def strs (l : List String) : Json := .arr (l.map Json.str).toArray
def nat (n : Nat) : Json := .num (n : Int)
def field (k : String) : Field String → List (String × Json)
  | .absent => []
  | .null => [(k, .null)]
  | .value s => [(k, .str s)]
def fieldStrs (k : String) : Field (List String) → List (String × Json)
  | .absent => []
  | .null => [(k, .null)]
  | .value l => [(k, strs l)]

end Json'

open Json' in
def User.encode (u : User) : Json :=
  Json.mkObj [("email", str u.email), ("token", str u.token), ("username", str u.username),
    ("bio", optStr u.bio), ("image", optStr u.image)]

open Json' in
def Profile.encode (p : Profile) : Json :=
  Json.mkObj [("username", str p.username), ("bio", optStr p.bio), ("image", optStr p.image),
    ("following", .bool p.following)]

open Json' in
def Article.encode (a : Article) : Json :=
  Json.mkObj ([("slug", str a.slug), ("title", str a.title), ("description", str a.description)] ++
    (match a.body with | some b => [("body", str b)] | none => []) ++
    [("tagList", strs a.tagList), ("createdAt", str a.createdAt), ("updatedAt", str a.updatedAt),
     ("favorited", .bool a.favorited), ("favoritesCount", nat a.favoritesCount),
     ("author", a.author.encode)])

open Json' in
def Comment.encode (c : Comment) : Json :=
  Json.mkObj [("id", nat c.id), ("createdAt", str c.createdAt), ("updatedAt", str c.updatedAt),
    ("body", str c.body), ("author", c.author.encode)]

def ArticleList.encode (l : ArticleList) : Json :=
  Json.mkObj [("articles", .arr (l.articles.map Article.encode).toArray), ("articlesCount", Json'.nat l.articlesCount)]

open Json' in
def LoginUser.encode (u : LoginUser) : Json :=
  Json.mkObj [("email", str u.email), ("password", str u.password)]

open Json' in
def NewUser.encode (u : NewUser) : Json :=
  Json.mkObj [("username", str u.username), ("email", str u.email), ("password", str u.password)]

open Json' in
def UpdateUser.encode (u : UpdateUser) : Json :=
  Json.mkObj (field "email" u.email ++ field "username" u.username ++ field "password" u.password ++
    field "bio" u.bio ++ field "image" u.image)

open Json' in
def NewArticle.encode (a : NewArticle) : Json :=
  Json.mkObj [("title", str a.title), ("description", str a.description), ("body", str a.body),
    ("tagList", strs a.tagList)]

open Json' in
def UpdateArticle.encode (a : UpdateArticle) : Json :=
  Json.mkObj (field "title" a.title ++ field "description" a.description ++ field "body" a.body ++
    fieldStrs "tagList" a.tagList)

def NewComment.encode (c : NewComment) : Json := Json.mkObj [("body", .str c.body)]

/-- The error body: `{"errors": {"field": ["message"]}}`. -/
def ApiError.encode (e : ApiError) : Json :=
  Json.mkObj [("errors", Json.mkObj (e.errors.map fun (k, msgs) => (k, Json'.strs msgs)))]

/-- `{"key": value}`: the envelope every request and response body uses. -/
def wrap (key : String) (j : Json) : Json := Json.mkObj [(key, j)]

/-! ## Decoding -/

namespace Decode

/-- The value of key `k` of an object, or `none` when it is absent. -/
def get? (j : Json) (k : String) : Option Json :=
  match j with
  | .obj kvs => kvs.get? k
  | _ => none

def str (what : String) : Json → Except String String
  | .str s => .ok s
  | _ => .error s!"{what}: expected a string"

def reqStr (j : Json) (k : String) : Except String String :=
  match get? j k with
  | some v => str k v
  | none => .error s!"{k}: missing"

/-- A request's string field: a missing field or `null` reads as `""`, so the
validation reports it as blank (as the spec's `can't be blank` errors expect). -/
def strOr (j : Json) (k : String) : Except String String :=
  match get? j k with
  | none | some .null => .ok ""
  | some v => str k v

def optStr (j : Json) (k : String) : Except String (Option String) :=
  match get? j k with
  | some .null => .ok none
  | some v => some <$> str k v
  | none => .error s!"{k}: missing"

def bool (j : Json) (k : String) : Except String Bool :=
  match get? j k with
  | some (.bool b) => .ok b
  | _ => .error s!"{k}: expected a boolean"

def nat (j : Json) (k : String) : Except String Nat :=
  match get? j k with
  | some (.num n) => match n.mantissa, n.exponent with
    | .ofNat m, 0 => .ok m
    | _, _ => .error s!"{k}: expected a natural number"
  | _ => .error s!"{k}: expected a natural number"

def strList (what : String) : Json → Except String (List String)
  | .arr a => a.toList.mapM (str what)
  | _ => .error s!"{what}: expected an array of strings"

def reqStrs (j : Json) (k : String) : Except String (List String) :=
  match get? j k with
  | some v => strList k v
  | none => .error s!"{k}: missing"

/-- A list of strings that may be absent (then empty). -/
def strsOr (j : Json) (k : String) : Except String (List String) :=
  match get? j k with
  | some v => strList k v
  | none => .ok []

def field (j : Json) (k : String) : Except String (Field String) :=
  match get? j k with
  | none => .ok .absent
  | some .null => .ok .null
  | some v => .value <$> str k v

def fieldStrs (j : Json) (k : String) : Except String (Field (List String)) :=
  match get? j k with
  | none => .ok .absent
  | some .null => .ok .null
  | some v => .value <$> strList k v

/-- The object under `key` of the envelope `{"key": …}`. -/
def unwrap (key : String) (j : Json) : Except String Json :=
  match get? j key with
  | some v@(.obj _) => .ok v
  | _ => .error s!"expected {key}"

end Decode

open Decode

def User.decode (j : Json) : Except String User := do
  return { email := ← reqStr j "email", token := ← reqStr j "token", username := ← reqStr j "username",
           bio := ← optStr j "bio", image := ← optStr j "image" }

def Profile.decode (j : Json) : Except String Profile := do
  return { username := ← reqStr j "username", bio := ← optStr j "bio", image := ← optStr j "image",
           following := ← bool j "following" }

def Article.decode (j : Json) : Except String Article := do
  let body ← match get? j "body" with
    | some v => some <$> str "body" v
    | none => pure none
  let author ← match get? j "author" with
    | some a => Profile.decode a
    | none => throw "author: missing"
  return { slug := ← reqStr j "slug", title := ← reqStr j "title", description := ← reqStr j "description",
           body, tagList := ← reqStrs j "tagList", createdAt := ← reqStr j "createdAt",
           updatedAt := ← reqStr j "updatedAt", favorited := ← bool j "favorited",
           favoritesCount := ← nat j "favoritesCount", author }

def Comment.decode (j : Json) : Except String Comment := do
  let author ← match get? j "author" with
    | some a => Profile.decode a
    | none => throw "author: missing"
  return { id := ← nat j "id", createdAt := ← reqStr j "createdAt", updatedAt := ← reqStr j "updatedAt",
           body := ← reqStr j "body", author }

def ArticleList.decode (j : Json) : Except String ArticleList := do
  let articles ← match get? j "articles" with
    | some (.arr a) => a.toList.mapM Article.decode
    | _ => throw "articles: expected an array"
  return { articles, articlesCount := ← nat j "articlesCount" }

def LoginUser.decode (j : Json) : Except String LoginUser := do
  return { email := ← strOr j "email", password := ← strOr j "password" }

def NewUser.decode (j : Json) : Except String NewUser := do
  return { username := ← strOr j "username", email := ← strOr j "email", password := ← strOr j "password" }

def UpdateUser.decode (j : Json) : Except String UpdateUser := do
  return { email := ← field j "email", username := ← field j "username", password := ← field j "password",
           bio := ← field j "bio", image := ← field j "image" }

def NewArticle.decode (j : Json) : Except String NewArticle := do
  return { title := ← strOr j "title", description := ← strOr j "description", body := ← strOr j "body",
           tagList := ← strsOr j "tagList" }

def UpdateArticle.decode (j : Json) : Except String UpdateArticle := do
  return { title := ← field j "title", description := ← field j "description", body := ← field j "body",
           tagList := ← fieldStrs j "tagList" }

def NewComment.decode (j : Json) : Except String NewComment := do
  return { body := ← strOr j "body" }

/-- An error body back into its messages (the status travels separately). -/
def ApiError.decode (status : Nat) (j : Json) : Except String ApiError := do
  match get? j "errors" with
  | some (.obj kvs) =>
    let errors ← kvs.toList.mapM fun (k, v) => do return (k, ← strList k v)
    return { status, errors }
  | _ => throw "errors: expected an object"

end Conduit
