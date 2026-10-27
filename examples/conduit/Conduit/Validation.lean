/-
Request validation, shared by the browser app and the server. The browser
checks a form with these functions before it sends anything; the server runs
the same functions on every request body, and its handlers only accept the
validated types below, so they cannot see invalid input
(`Proofs/Validation.lean`).

Messages follow the RealWorld spec: `{"errors": {"email": ["can't be blank"]}}`.
-/
import Conduit.Types

namespace Conduit

/-! ## Text rules -/

/-- Empty, or only whitespace. -/
def isBlank (s : String) : Bool := s.toList.all Char.isWhitespace

/-- Without surrounding whitespace (the same whitespace `isBlank` means). -/
def clean (s : String) : String :=
  String.ofList ((s.toList.dropWhile Char.isWhitespace).reverse.dropWhile Char.isWhitespace).reverse

/-- A plausible e-mail address: one `@`, something on both sides, no spaces. -/
def emailOk (s : String) : Bool :=
  match s.splitOn "@" with
  | [local_, domain] => !local_.isEmpty && !domain.isEmpty && !s.toList.any Char.isWhitespace
  | _ => false

def minPassword : Nat := 8
def maxPassword : Nat := 128
def maxUsername : Nat := 64

/-- The messages for one field: none when it is valid. -/
abbrev Check := List String

def usernameErrors (s : String) : Check :=
  if isBlank s then ["can't be blank"]
  else if (clean s).length > maxUsername then [s!"is too long (maximum is {maxUsername} characters)"]
  else []

def emailErrors (s : String) : Check :=
  if isBlank s then ["can't be blank"]
  else if !emailOk (clean s) then ["is invalid"]
  else []

/-- NIST SP 800-63B: at least 8 characters, no composition rules. -/
def passwordErrors (s : String) : Check :=
  if s.isEmpty then ["can't be blank"]
  else if s.length < minPassword then [s!"is too short (minimum is {minPassword} characters)"]
  else if s.length > maxPassword then [s!"is too long (maximum is {maxPassword} characters)"]
  else []

def presentErrors (s : String) : Check :=
  if isBlank s then ["can't be blank"] else []

/-- Field errors, without the fields that have none. -/
def collect (fields : List (String × Check)) : List (String × List String) :=
  fields.filter (fun f => !f.2.isEmpty)

/-! ## Validated requests

Each `validate…` either returns the cleaned request together with a proof
that it satisfies the rules (`…Valid`), or the messages for every invalid
field. Handlers take the subtypes, so only validated data reaches them. -/

/-- Registration rules. -/
def NewUser.valid (u : NewUser) : Bool :=
  (usernameErrors u.username).isEmpty && (emailErrors u.email).isEmpty && (passwordErrors u.password).isEmpty

def NewUser.normalize (u : NewUser) : NewUser :=
  { u with username := clean u.username, email := clean u.email }

def NewUser.errors (u : NewUser) : List (String × List String) :=
  collect [("username", usernameErrors u.username), ("email", emailErrors u.email), ("password", passwordErrors u.password)]

def validateNewUser (u : NewUser) : Except ApiError { v : NewUser // v.valid } :=
  let v := u.normalize
  if h : v.valid then .ok ⟨v, h⟩ else .error (.invalid v.errors)

/-- Login rules: both fields present (the password's length is not checked
here, so that older passwords still log in). -/
def LoginUser.valid (u : LoginUser) : Bool := !isBlank u.email && !u.password.isEmpty

def LoginUser.errors (u : LoginUser) : List (String × List String) :=
  collect [("email", presentErrors u.email), ("password", if u.password.isEmpty then ["can't be blank"] else [])]

def validateLogin (u : LoginUser) : Except ApiError { v : LoginUser // v.valid } :=
  let v := { u with email := clean u.email }
  if h : v.valid then .ok ⟨v, h⟩ else .error (.invalid v.errors)

/-- A user update after validation: `none` leaves a field as it is; `bio`
and `image` are `some none` to clear them. -/
structure UserPatch where
  email : Option String := none
  username : Option String := none
  password : Option String := none
  bio : Option (Option String) := none
  image : Option (Option String) := none
  deriving Repr, BEq, DecidableEq, Inhabited

/-- What a valid patch satisfies: each new email, username and password obeys
the registration rules, and `bio`/`image` are never set to `""`. -/
def UserPatch.valid (p : UserPatch) : Bool :=
  p.email.all (fun e => (emailErrors e).isEmpty) && p.username.all (fun u => (usernameErrors u).isEmpty) &&
  p.password.all (fun s => (passwordErrors s).isEmpty) &&
  p.bio.all (fun b => b.all (! ·.isEmpty)) && p.image.all (fun i => i.all (! ·.isEmpty))

/-- A required string field of an update: `null` is blank. -/
def requiredField (rule : String → Check) : Field String → Check
  | .absent => []
  | .null => ["can't be blank"]
  | .value s => rule s

/-- `""` and `null` both clear a nullable field. -/
def nullable : Field String → Option (Option String)
  | .absent => none
  | .null => some none
  | .value s => if s.isEmpty then some none else some (some s)

def UpdateUser.errors (u : UpdateUser) : List (String × List String) :=
  collect [("email", requiredField emailErrors u.email), ("username", requiredField usernameErrors u.username),
           ("password", requiredField passwordErrors u.password)]

def UpdateUser.toPatch (u : UpdateUser) : UserPatch :=
  let req (cleanIt : Bool) : Field String → Option String
    | .value s => some (if cleanIt then clean s else s)
    | _ => none
  { email := req true u.email, username := req true u.username, password := req false u.password,
    bio := nullable u.bio, image := nullable u.image }

def validateUpdateUser (u : UpdateUser) : Except ApiError { p : UserPatch // p.valid } :=
  let p := u.toPatch
  if u.errors.isEmpty then
    if h : p.valid then .ok ⟨p, h⟩ else .error (.invalid [("user", ["is invalid"])])
  else .error (.invalid u.errors)

/-- Tags as stored: cleaned, without blanks, without repeats, in the order given. -/
def cleanTags (tags : List String) : List String :=
  (tags.map clean).filter (!isBlank ·) |>.eraseDups

def NewArticle.valid (a : NewArticle) : Bool :=
  !isBlank a.title && !isBlank a.description && !isBlank a.body &&
  a.tagList.all (!isBlank ·) && decide a.tagList.Nodup

def NewArticle.normalize (a : NewArticle) : NewArticle :=
  { a with title := clean a.title, description := clean a.description, tagList := cleanTags a.tagList }

def NewArticle.errors (a : NewArticle) : List (String × List String) :=
  collect [("title", presentErrors a.title), ("description", presentErrors a.description), ("body", presentErrors a.body)]

def validateNewArticle (a : NewArticle) : Except ApiError { v : NewArticle // v.valid } :=
  let v := a.normalize
  if h : v.valid then .ok ⟨v, h⟩ else .error (.invalid v.errors)

/-- An article update after validation. -/
structure ArticlePatch where
  title : Option String := none
  description : Option String := none
  body : Option String := none
  tagList : Option (List String) := none
  deriving Repr, BEq, DecidableEq, Inhabited

def ArticlePatch.valid (p : ArticlePatch) : Bool :=
  p.title.all (!isBlank ·) && p.description.all (!isBlank ·) && p.body.all (!isBlank ·) &&
  p.tagList.all (fun ts => ts.all (!isBlank ·) && decide ts.Nodup)

def UpdateArticle.errors (a : UpdateArticle) : List (String × List String) :=
  collect [("title", requiredField presentErrors a.title), ("description", requiredField presentErrors a.description),
           ("body", requiredField presentErrors a.body),
           ("tagList", match a.tagList with | .null => ["must be a list of strings"] | _ => [])]

def UpdateArticle.toPatch (a : UpdateArticle) : ArticlePatch :=
  let req : Field String → Option String
    | .value s => some s
    | _ => none
  { title := clean <$> req a.title, description := clean <$> req a.description, body := req a.body,
    tagList := match a.tagList with | .value ts => some (cleanTags ts) | _ => none }

def validateUpdateArticle (a : UpdateArticle) : Except ApiError { p : ArticlePatch // p.valid } :=
  let p := a.toPatch
  if a.errors.isEmpty then
    if h : p.valid then .ok ⟨p, h⟩ else .error (.invalid [("article", ["is invalid"])])
  else .error (.invalid a.errors)

def NewComment.valid (c : NewComment) : Bool := !isBlank c.body

def validateNewComment (c : NewComment) : Except ApiError { v : NewComment // v.valid } :=
  if h : c.valid then .ok ⟨c, h⟩ else .error (.blank "body")

end Conduit
