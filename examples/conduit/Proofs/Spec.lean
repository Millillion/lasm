/-
# What is proved about Conduit

Every proposition proved about Conduit, as a named `def … : Prop`, grouped by
requirement, with no proofs in this file. The proofs are in the other files
of `Proofs/`; each proposition `Spec.x` is proved by a theorem
`Conduit.Proofs.x : Spec.x`, and `npm run proofs` fails unless every
proposition here has its theorem and every such theorem uses only Lean's
standard axioms. SPEC.md maps the RealWorld specification onto these names;
PROOFS.md is generated from this file.

Reading guide. The propositions talk about the code the server and the
browser run (`Conduit.Api`, `Conduit.Validation`, `Conduit.Frontend`, …);
only the database is a model (`Proofs/Model.lean`: the tables as lists, one
function per SQL statement). `Env` is any clock, password hash and token
scheme: every proposition holds for all of them. `after e r D` is the
database after request `r` on database `D`; `reply e r D` is the reply.

Propositions marked *(consequence)* follow from others in this file; they
are listed because they state a property a reviewer looks for in its own
terms.
-/
import Proofs.Model
import Frontend.Update
import Frontend.View
import Server.Pages

namespace Conduit.Spec
open Lean Conduit Conduit.Proofs Conduit.Frontend Lasm.UI Api

/-! ## Vocabulary -/

/-- Request `r`, against database `D`, comes from user `me` with token `tok`:
its `Authorization` token verifies and names a user in `D`. -/
def LoggedIn (e : Env) (D : DB) (r : Request) (me : UserRow) (tok : String) : Prop :=
  ((requireUser store e.svc r).run.run D).1 = .ok (me, tok)

/-- The changes a logged-in user `me` may make to the database: one per
endpoint that writes. Nothing else is a change a request may make. -/
inductive Write (me : UserRow) (D : DB) : DB → Prop
  /-- `PUT /user`: their own row (same id). -/
  | updateUser (u : UserRow) : u.id = me.id → Write me D (D.setUser u)
  /-- `POST /profiles/:username/follow`: the pair (me, someone else). -/
  | follow (u : UserRow) : u ∈ D.users → u.id ≠ me.id → Write me D (D.addFollow me.id u.id)
  /-- `DELETE /profiles/:username/follow`: removes the pair (me, them). -/
  | unfollow (u : UserRow) : u ∈ D.users → Write me D (D.removeFollow me.id u.id)
  /-- `POST /articles`: an article by me, with a slug no article has and that names no route. -/
  | createArticle (a : ArticleRow) (tags : List String) : a.author = me.id → a.slug ∉ D.slugs →
      a.slug ∉ reservedSlugs → Write me D (D.addArticle a tags)
  /-- `PUT /articles/:slug`: one of my articles (same id); its slug kept, or a new
  one no article has and that names no route; its tags replaced or kept. -/
  | updateArticle (a a' : ArticleRow) (tags : Option (List String)) : a ∈ D.articles → a.author = me.id →
      a'.id = a.id → (a'.slug = a.slug ∨ (a'.slug ∉ D.slugs ∧ a'.slug ∉ reservedSlugs)) →
      Write me D (match tags with
        | some ts => (D.setArticle a').setTags a.id ts
        | none => D.setArticle a')
  /-- `DELETE /articles/:slug`: one of my articles, with its tags, favorites and comments. -/
  | deleteArticle (a : ArticleRow) : a ∈ D.articles → a.author = me.id → Write me D (D.removeArticle a.id)
  /-- `POST /articles/:slug/favorite`: the pair (me, an article). -/
  | favorite (a : ArticleRow) : a ∈ D.articles → Write me D (D.addFavorite me.id a.id)
  /-- `DELETE /articles/:slug/favorite`: removes the pair (me, an article). -/
  | unfavorite (a : ArticleRow) : a ∈ D.articles → Write me D (D.removeFavorite me.id a.id)
  /-- `POST /articles/:slug/comments`: a comment by me on an article. -/
  | addComment (c : CommentRow) (a : ArticleRow) : a ∈ D.articles → c.article = a.id → c.author = me.id →
      Write me D (D.addComment c)
  /-- `DELETE /articles/:slug/comments/:id`: one of my comments. -/
  | deleteComment (c : CommentRow) : c ∈ D.comments → c.author = me.id → Write me D (D.removeComment c.id)

/-- `POST /users`: a new user whose username and email no user has, with the
hash of their password (never the password itself). -/
def Register (e : Env) (D D' : DB) : Prop :=
  ∃ username email password, (∀ u ∈ D.users, u.username ≠ username ∧ u.email ≠ email) ∧
    D' = D.addUser username email (e.hash password)

/-- No user follows themselves. -/
def NoSelfFollow (D : DB) : Prop := ∀ p ∈ D.follows, p.1 ≠ p.2

/-- Articles are addressable: ids are distinct and below the next id, slugs
are distinct and never a route name (`feed`). -/
def ArticlesOk (D : DB) : Prop :=
  (D.articles.map (·.id)).Nodup ∧ (∀ a ∈ D.articles, a.id < D.next) ∧
  D.slugs.Nodup ∧ ∀ s ∈ D.slugs, s ∉ reservedSlugs

/-- What a well-formed validation error is: status 422, at least one field,
every field with at least one message. -/
def WellFormed422 (err : ApiError) : Prop := err.status = 422 ∧ err.errors ≠ [] ∧ ∀ f ∈ err.errors, f.2 ≠ []

/-- The protected endpoints (the spec's `security: Token`): every request
except registration, login and the public reads. -/
def Protected (method : String) (path : List String) : Prop :=
  (method = "GET" ∧ path = ["user"]) ∨ (method = "PUT" ∧ path = ["user"]) ∨
  (∃ n, (method = "POST" ∨ method = "DELETE") ∧ path = ["profiles", n, "follow"]) ∨
  (method = "POST" ∧ path = ["articles"]) ∨ (method = "GET" ∧ path = ["articles", "feed"]) ∨
  (∃ s, (method = "PUT" ∨ method = "DELETE") ∧ path = ["articles", s]) ∨
  (∃ s, (method = "POST" ∨ method = "DELETE") ∧ path = ["articles", s, "favorite"]) ∨
  (∃ s, method = "POST" ∧ path = ["articles", s, "comments"]) ∨
  (∃ s i, method = "DELETE" ∧ path = ["articles", s, "comments", i])

/-- Every element of a view satisfies `P` (of its tag and attributes). -/
inductive Every {Msg : Type} (P : String → List (Attr Msg) → Prop) : Html Msg → Prop
  | text (s : String) : Every P (.text s)
  | elem (ns : Ns) (tag : String) (key : Option String) (attrs : List (Attr Msg)) (children : List (Html Msg)) :
      P tag attrs → (∀ c ∈ children, Every P c) → Every P (.elem ns tag key attrs children)

/-- Every `href` in a view, in document order. -/
def hrefs {Msg : Type} : Html Msg → List String
  | .text _ => []
  | .elem _ _ _ attrs children =>
    attrs.filterMap (fun | .attr "href" v => some v | _ => none) ++ children.attach.flatMap fun ⟨c, _⟩ => hrefs c
termination_by h => sizeOf h
decreasing_by simp_wf; have := List.sizeOf_lt_of_mem ‹_›; omega

/-- The `class` of an element (its first `class` attribute). -/
def classOf {Msg : Type} : Html Msg → Option String
  | .elem _ _ _ attrs _ => attrs.findSome? fun | .attr "class" c => some c | _ => none
  | .text _ => none

/-- The class of each page's root element in the RealWorld templates. -/
def pageClass : Route → String
  | .home .. => "home-page"
  | .login | .register => "auth-page"
  | .settings => "settings-page"
  | .editor _ => "editor-page"
  | .article _ => "article-page"
  | .profile .. => "profile-page"
  | .notFound => "container page"

/-- The server reads `x` back from the body `{"key": …}` the app sends. -/
def Reads {α : Type} (key : String) (enc : α → Json) (dec : Json → Except String α) (x : α) : Prop :=
  Decode.unwrap key (wrap key (enc x)) = .ok (enc x) ∧ dec (enc x) = .ok x

/-- A request the browser app sends that the server accepts as it is: no
body, or the body of one of the API's requests, which the server's own
decoding reads back and its own validation accepts unchanged. -/
def AcceptedBody (req : Http.Request) : Prop :=
  req.body = none ∨
  (∃ u : NewUser, req.method = "POST" ∧ req.url = "/api/users" ∧ req.body = some (wrap "user" u.encode).compress ∧
    Reads "user" NewUser.encode NewUser.decode u ∧ ∃ h, validateNewUser u = .ok ⟨u, h⟩) ∨
  (∃ u : LoginUser, req.method = "POST" ∧ req.url = "/api/users/login" ∧ req.body = some (wrap "user" u.encode).compress ∧
    Reads "user" LoginUser.encode LoginUser.decode u ∧ ∃ h, validateLogin u = .ok ⟨u, h⟩) ∨
  (∃ u : UpdateUser, req.method = "PUT" ∧ req.url = "/api/user" ∧ req.body = some (wrap "user" u.encode).compress ∧
    Reads "user" UpdateUser.encode UpdateUser.decode u ∧ ∃ p, validateUpdateUser u = .ok p) ∨
  (∃ a : NewArticle, req.method = "POST" ∧ req.url = "/api/articles" ∧ req.body = some (wrap "article" a.encode).compress ∧
    Reads "article" NewArticle.encode NewArticle.decode a ∧ ∃ h, validateNewArticle a = .ok ⟨a, h⟩) ∨
  (∃ (slug : String) (a : UpdateArticle), req.method = "PUT" ∧ req.url = s!"/api/articles/{encodeSegment slug}" ∧
    req.body = some (wrap "article" a.encode).compress ∧
    Reads "article" UpdateArticle.encode UpdateArticle.decode a ∧ ∃ p, validateUpdateArticle a = .ok p) ∨
  (∃ (slug : String) (c : NewComment), req.method = "POST" ∧ req.url = s!"/api/articles/{encodeSegment slug}/comments" ∧
    req.body = some (wrap "comment" c.encode).compress ∧
    Reads "comment" NewComment.encode NewComment.decode c ∧ ∃ h, validateNewComment c = .ok ⟨c, h⟩)

/-- The HTTP requests among a command's effects. -/
def requests (c : Cmd Msg) : List Http.Request :=
  c.effects.filterMap fun | .http req _ => some req | _ => none

/-- Whether a model's viewer and token agree: a signed-in user's token is the one kept. -/
def TokenAgrees (m : Model) : Prop := ∀ u, m.auth = .user u → m.token = some u.token

/-- A route the app links to: page numbers start at 1. -/
def Linkable : Route → Prop
  | .home _ p | .profile _ _ p => 1 ≤ p
  | .notFound => False
  | _ => True

/-! ## A. The wire format (JSON) -/

/-- **Every response decodes to what was encoded**: users, profiles, articles
(with and without a body), comments and article lists, including `null`
`bio`/`image`. The server encodes them; the browser app decodes them. -/
def responses_roundtrip : Prop :=
  (∀ u : User, User.decode u.encode = .ok u) ∧ (∀ p : Profile, Profile.decode p.encode = .ok p) ∧
  (∀ a : Article, Article.decode a.encode = .ok a) ∧ (∀ c : Comment, Comment.decode c.encode = .ok c) ∧
  (∀ l : ArticleList, ArticleList.decode l.encode = .ok l)

/-- **Every request body decodes to what was encoded**, and for updates an
absent field, a `null` and a value stay distinct. The browser app encodes
them; the server decodes them. -/
def requests_roundtrip : Prop :=
  (∀ u : LoginUser, LoginUser.decode u.encode = .ok u) ∧ (∀ u : NewUser, NewUser.decode u.encode = .ok u) ∧
  (∀ u : UpdateUser, UpdateUser.decode u.encode = .ok u) ∧ (∀ a : NewArticle, NewArticle.decode a.encode = .ok a) ∧
  (∀ a : UpdateArticle, UpdateArticle.decode a.encode = .ok a) ∧ (∀ c : NewComment, NewComment.decode c.encode = .ok c)

/-- An error body with one field, `{"errors":{"field":["message", …]}}`, decodes
to the same field and messages (every error the API sends except a
validation error naming several fields). -/
def error_roundtrip : Prop :=
  ∀ (s : Nat) (k : String) (msgs : List String), ApiError.decode s (ApiError.encode ⟨s, [(k, msgs)]⟩) = .ok ⟨s, [(k, msgs)]⟩

/-- **Every error an endpoint raises becomes the spec's error response**: its
status and the body `{"errors": …}`. -/
def handle_error : Prop :=
  ∀ {m : Type → Type} [Monad m] [LawfulMonad m] (s : Store m) (sv : Services m) (r : Request) (err : ApiError),
    (route s sv r).run = pure (.error err) → handle s sv r = pure { status := err.status, body := some err.encode }

/-! ## B. Validation (the server's, which the browser app runs too) -/

/-- **Registration is accepted exactly when the rules hold**, and what is
accepted is the request with its username and email trimmed: a username
that is not blank and at most 64 characters, a plausible email (one `@`,
text on both sides, no spaces), and a password of 8 to 128 characters. -/
def validateNewUser_spec : Prop :=
  ∀ u : NewUser,
    (∀ v, validateNewUser u = .ok v → v.val = { username := clean u.username, email := clean u.email, password := u.password }) ∧
    ((∃ v, validateNewUser u = .ok v) ↔
      (isBlank u.username = false ∧ (clean u.username).length ≤ maxUsername ∧
       isBlank u.email = false ∧ emailOk (clean u.email) = true ∧
       minPassword ≤ u.password.length ∧ u.password.length ≤ maxPassword))

/-- **A login is accepted exactly when it has an email and a password**
(trimmed email; the password's length is not checked, so older passwords
still log in). -/
def validateLogin_spec : Prop :=
  ∀ u : LoginUser,
    (∀ v, validateLogin u = .ok v → v.val = { u with email := clean u.email }) ∧
    ((∃ v, validateLogin u = .ok v) ↔ (isBlank u.email = false ∧ u.password ≠ ""))

/-- **An article is accepted exactly when it has a title, a description and a
body**; what is accepted has its title and description trimmed and its tags
cleaned (`cleanTags`): the tags never make an article invalid. -/
def validateNewArticle_spec : Prop :=
  ∀ a : NewArticle,
    (∀ v, validateNewArticle a = .ok v →
      v.val = { a with title := clean a.title, description := clean a.description, tagList := cleanTags a.tagList }) ∧
    ((∃ v, validateNewArticle a = .ok v) ↔
      (isBlank a.title = false ∧ isBlank a.description = false ∧ isBlank a.body = false))

/-- **A comment is accepted exactly when its body is not blank**, unchanged;
a blank one is `{"errors":{"body":["can't be blank"]}}`. -/
def validateNewComment_spec : Prop :=
  ∀ c : NewComment,
    (∀ v, validateNewComment c = .ok v → v.val = c) ∧
    ((∃ v, validateNewComment c = .ok v) ↔ isBlank c.body = false) ∧
    (∀ err, validateNewComment c = .error err → err = .blank "body")

/-- **A rejected registration, login or article is a 422 that names at least
one field, each with at least one message**, as the spec's error body requires. -/
def validation_errors_wellFormed : Prop :=
  (∀ u err, validateNewUser u = .error err → WellFormed422 err) ∧
  (∀ u err, validateLogin u = .error err → WellFormed422 err) ∧
  (∀ a err, validateNewArticle a = .error err → WellFormed422 err) ∧
  (∀ u err, validateUpdateUser u = .error err → WellFormed422 err) ∧
  (∀ a err, validateUpdateArticle a = .error err → WellFormed422 err)

/-- **Blank fields get the spec's message**: a blank username, email,
password, title, description or body is rejected with
`{"errors":{"<field>":["can't be blank", …]}}`. -/
def blank_fields_named : Prop :=
  (∀ u : NewUser, isBlank u.username = true → ∃ err, validateNewUser u = .error err ∧ ("username", ["can't be blank"]) ∈ err.errors) ∧
  (∀ u : NewUser, isBlank u.email = true → ∃ err, validateNewUser u = .error err ∧ ("email", ["can't be blank"]) ∈ err.errors) ∧
  (∀ u : NewUser, u.password = "" → ∃ err, validateNewUser u = .error err ∧ ("password", ["can't be blank"]) ∈ err.errors) ∧
  (∀ u : LoginUser, isBlank u.email = true → ∃ err, validateLogin u = .error err ∧ ("email", ["can't be blank"]) ∈ err.errors) ∧
  (∀ u : LoginUser, u.password = "" → ∃ err, validateLogin u = .error err ∧ ("password", ["can't be blank"]) ∈ err.errors) ∧
  (∀ a : NewArticle, isBlank a.title = true → ∃ err, validateNewArticle a = .error err ∧ ("title", ["can't be blank"]) ∈ err.errors) ∧
  (∀ a : NewArticle, isBlank a.description = true → ∃ err, validateNewArticle a = .error err ∧ ("description", ["can't be blank"]) ∈ err.errors) ∧
  (∀ a : NewArticle, isBlank a.body = true → ∃ err, validateNewArticle a = .error err ∧ ("body", ["can't be blank"]) ∈ err.errors)

/-- **A user update only ever sets valid values, and rejects what the spec
rejects**: emails, usernames and passwords obey the registration rules, and
`null` or `""` for them is a 422; `bio` and `image` are set to text or
cleared, and both `""` and `null` clear them. -/
def validateUpdateUser_spec : Prop :=
  ∀ u : UpdateUser,
    (∀ p, validateUpdateUser u = .ok p →
      p.val = u.toPatch ∧
      p.val.email.all (fun x => (emailErrors x).isEmpty) = true ∧ p.val.username.all (fun x => (usernameErrors x).isEmpty) = true ∧
      p.val.password.all (fun x => (passwordErrors x).isEmpty) = true) ∧
    ((u.email = .null ∨ u.email = .value "" ∨ u.username = .null ∨ u.username = .value "" ∨
      u.password = .null ∨ u.password = .value "") → ∃ err, validateUpdateUser u = .error err ∧ err.status = 422) ∧
    (u.bio = .null ∨ u.bio = .value "" → u.toPatch.bio = some none) ∧
    (u.image = .null ∨ u.image = .value "" → u.toPatch.image = some none)

/-- **An article update keeps absent fields, rejects `null`, and cleans tags**:
`tagList` absent keeps the tags, `[]` removes them all, `null` is a 422, and
every field set is never blank. -/
def validateUpdateArticle_spec : Prop :=
  ∀ a : UpdateArticle,
    (∀ p, validateUpdateArticle a = .ok p →
      p.val = a.toPatch ∧ (a.tagList = .absent → p.val.tagList = none) ∧
      (∀ ts, a.tagList = .value ts → p.val.tagList = some (cleanTags ts))) ∧
    ((a.title = .null ∨ a.description = .null ∨ a.body = .null ∨ a.tagList = .null) →
      ∃ err, validateUpdateArticle a = .error err ∧ err.status = 422)

/-- **Stored tags are cleaned**: trimmed, never blank, never repeated, and no
tag that was not blank is lost. -/
def cleanTags_spec : Prop :=
  ∀ tags : List String,
    (cleanTags tags).Nodup ∧ (∀ t ∈ cleanTags tags, isBlank t = false ∧ ∃ t₀ ∈ tags, t = clean t₀) ∧
    (∀ t ∈ tags, isBlank t = false → clean t ∈ cleanTags tags)

/-- **Validating what already passed changes nothing**: the server accepts
what the browser app validated, unchanged (trimming and cleaning are idempotent). -/
def validate_again : Prop :=
  (∀ u v, validateNewUser u = .ok v → validateNewUser v.val = .ok v) ∧
  (∀ u v, validateLogin u = .ok v → validateLogin v.val = .ok v) ∧
  (∀ a v, validateNewArticle a = .ok v → validateNewArticle v.val = .ok v) ∧
  (∀ c v, validateNewComment c = .ok v → validateNewComment v.val = .ok v)

/-- **`?limit=` and `?offset=`**: absent, a page is 20 articles from the first;
a positive `limit` is clamped to 100; `limit=0` and non-numbers are a 422. -/
def parsePage_spec : Prop :=
  (parsePage (fun _ => none) = .ok { limit := 20, offset := 0 }) ∧
  (∀ (l o : Nat), 0 < l → parsePage (fun k => if k = "limit" then some (toString l) else if k = "offset" then some (toString o) else none) =
      .ok { limit := min l maxLimit, offset := o }) ∧
  (∃ err, parsePage (fun k => if k = "limit" then some "0" else none) = .error err ∧ err.status = 422) ∧
  (∀ s : String, s.toNat? = none → ∃ err, parsePage (fun k => if k = "limit" then some s else none) = .error err ∧ err.status = 422) ∧
  (∀ s : String, s.toNat? = none → ∃ err, parsePage (fun k => if k = "offset" then some s else none) = .error err ∧ err.status = 422)

/-! ## C. Slugs -/

/-- **A slug has only lowercase ASCII letters, digits and `-`, and is never empty.** -/
def slugify_spec : Prop :=
  ∀ title, (∀ d ∈ (slugify title).toList, d ∈ slugAlphabet ∨ d = '-') ∧ slugify title ≠ ""

/-- **`uniqueSlug` never returns a taken slug**, and keeps the plain slug when it is free. -/
def uniqueSlug_spec : Prop :=
  ∀ base taken, uniqueSlug base taken ∉ taken ∧ (base ∉ taken → uniqueSlug base taken = base)

/-! ## D. Lists and pagination -/

/-- **The lists are sorted newest first** and contain exactly the matching articles. -/
def newestFirst_spec : Prop :=
  ∀ ids : List Nat, (newestFirst ids).Pairwise (· ≥ ·) ∧ (newestFirst ids).Perm ids

/-- **A page is a contiguous run of the list, of at most `limit` items**
(order kept, nothing inserted). -/
def window_spec : Prop :=
  ∀ {α : Type} (p : Page) (l : List α), p.window l <:+: l ∧ (p.window l).length ≤ p.limit

/-- **Walking the pages never skips or repeats an article**: pages 0, 1, …,
n−1 of size k, one after the other, are the first n·k items in order, so
enough pages show every item exactly once. -/
def pages_cover : Prop :=
  ∀ {α : Type} (k n : Nat) (l : List α),
    (List.range n).flatMap (fun i => ({ limit := k, offset := i * k } : Page).window l) = l.take (n * k) ∧
    (l.length ≤ n * k → (List.range n).flatMap (fun i => ({ limit := k, offset := i * k } : Page).window l) = l)

/-- **`favoritesCount` is the number of distinct users who favorited the
article, and `favorited` says whether the viewer is one of them**, for every
article the API returns. -/
def articleOf_favorites : Prop :=
  ∀ (viewer : Option Nat) (withBody : Bool) (d : Loaded) (a : ArticleRow) (art : Article),
    articleOf viewer withBody d a = some art →
    ∃ fans : List Nat, fans.Nodup ∧ (∀ u, u ∈ fans ↔ (a.id, u) ∈ d.favorites) ∧
      art.favoritesCount = fans.length ∧
      (art.favorited = true ↔ ∃ v, viewer = some v ∧ (a.id, v) ∈ d.favorites)

/-! ## E. Authorization and data integrity (every endpoint) -/

/-- **Every change to the database is one of the changes `Write` lists**: a
request changes nothing, or is a registration of a new username and email,
or comes from a logged-in user `me` and makes one change `me` may make
(their own row, their follows and favorites, their own articles and
comments). -/
def handle_writes : Prop :=
  ∀ (e : Env) (r : Request) (D : DB),
    after e r D = D ∨ (r.method = "POST" ∧ r.path = ["users"] ∧ Register e D (after e r D)) ∨
    ∃ me tok, LoggedIn e D r me tok ∧ Write me D (after e r D)

/-- **Reads never write**: every `GET` request, and every login, leaves the
database exactly as it was. -/
def reads_change_nothing : Prop :=
  ∀ (e : Env) (r : Request) (D : DB), (r.method = "GET" ∨ (r.method = "POST" ∧ r.path = ["users", "login"])) →
    after e r D = D

/-- **The protected endpoints check the token first**: without an
`Authorization` header, each of them answers 401
`{"errors":{"token":["is missing"]}}` and changes nothing (even for a slug
or user that does not exist). -/
def protected_needs_token : Prop :=
  ∀ (e : Env) (r : Request) (D : DB), r.authorization = none → Protected r.method r.path →
    run e r D = (Reply.error (.unauthorized "is missing"), D)

/-- **Password hashes never leave the server**: the user and profile objects
the API sends have no `password` field (the stored value is a hash, see
`Register`). -/
def replies_hide_password : Prop :=
  (∀ (u : UserRow) (tok : String), Decode.get? (userOf u tok).encode "password" = none) ∧
  (∀ (u : UserRow) (f : Bool), Decode.get? (profileOf u f).encode "password" = none)

/-- **Nobody else's data changes** *(consequence)*: after any request from
`me` (or from nobody), other users' rows, articles, follows and favorites,
and other users' comments on articles that are not `me`'s, are still there
unchanged; a registration only adds a user. (Given distinct ids, as the
`PRIMARY KEY`s guarantee.) -/
def others_untouched : Prop :=
  ∀ (e : Env) (r : Request) (D : DB) (k : Nat),
    (D.articles.map (·.id)).Nodup → (D.comments.map (·.id)).Nodup →
    (∀ me tok, LoggedIn e D r me tok → me.id = k) →
    (∀ u ∈ D.users, u.id ≠ k → u ∈ (after e r D).users) ∧
    (∀ a ∈ D.articles, a.author ≠ k → a ∈ (after e r D).articles) ∧
    (∀ p ∈ D.follows, p.1 ≠ k → p ∈ (after e r D).follows) ∧
    (∀ p ∈ (after e r D).follows, p.1 ≠ k → p ∈ D.follows) ∧
    (∀ p ∈ (after e r D).favorites, p.1 ≠ k → p ∈ D.favorites) ∧
    (∀ p ∈ D.favorites, p.1 ≠ k → (∀ a ∈ D.articles, a.id = p.2 → a.author ≠ k) → p ∈ (after e r D).favorites) ∧
    (∀ c ∈ D.comments, c.author ≠ k → (∀ a ∈ D.articles, a.id = c.article → a.author ≠ k) → c ∈ (after e r D).comments)

/-- **Following is irreflexive** *(consequence)*: if nobody follows themselves
before a request, nobody does after it, whatever the request. -/
def noSelfFollow_preserved : Prop :=
  ∀ (e : Env) (r : Request) (D : DB), NoSelfFollow D → NoSelfFollow (after e r D)

/-- **Every article stays addressable**: if article ids are distinct and slugs
are distinct and never `feed`, they stay so after any request, so
`/api/articles/:slug` always names one article and never shadows
`/api/articles/feed`. -/
def articlesOk_preserved : Prop :=
  ∀ (e : Env) (r : Request) (D : DB), ArticlesOk D → ArticlesOk (after e r D)

/-- **Only an article's author may delete it**: deleting someone else's article
is 403 `{"errors":{"article":["forbidden"]}}` and changes nothing; the
author's delete answers 204 and removes the article with its tags,
favorites and comments, and nothing else. -/
def deleteArticle_auth : Prop :=
  ∀ (e : Env) (r : Request) (slug : String) (D : DB) (me : UserRow) (tok : String) (a : ArticleRow),
    LoggedIn e D r me tok → D.articles.find? (·.slug == slug) = some a →
    (a.author ≠ me.id → (deleteArticle store e.svc r slug).run.run D = (.error (.forbidden "article"), D)) ∧
    (a.author = me.id → (deleteArticle store e.svc r slug).run.run D = (.ok { status := 204, body := none }, D.removeArticle a.id))

/-- **Only an article's author may update it**: updating someone else's article
is 403 and changes nothing, whatever the request body says (the check comes
before the body is read). -/
def updateArticle_forbidden : Prop :=
  ∀ (e : Env) (r : Request) (slug : String) (D : DB) (me : UserRow) (tok : String) (a : ArticleRow),
    LoggedIn e D r me tok → D.articles.find? (·.slug == slug) = some a → a.author ≠ me.id →
    (updateArticle store e.svc r slug).run.run D = (.error (.forbidden "article"), D)

/-- **Only a comment's author may delete it**: deleting someone else's comment
is 403 `{"errors":{"comment":["forbidden"]}}` and changes nothing. -/
def deleteComment_forbidden : Prop :=
  ∀ (e : Env) (r : Request) (slug idText : String) (D : DB) (me : UserRow) (tok : String) (a : ArticleRow) (n : Nat)
    (c : CommentRow), LoggedIn e D r me tok → D.articles.find? (·.slug == slug) = some a → idText.toNat? = some n →
    D.comments.find? (·.id == n) = some c → c.article = a.id → c.author ≠ me.id →
    (deleteComment store e.svc r slug idText).run.run D = (.error (.forbidden "comment"), D)

/-- **Following yourself is refused** (422) and changes nothing. -/
def follow_self : Prop :=
  ∀ (e : Env) (r : Request) (name : String) (D : DB) (me u : UserRow) (tok : String),
    LoggedIn e D r me tok → D.users.find? (·.username == name) = some u → u.id = me.id →
    (follow store e.svc r name).run.run D = (.error (.invalid [("profile", ["cannot follow yourself"])]), D)

/-- **Following, unfollowing, favoriting and unfavoriting are idempotent**:
doing one twice leaves the database exactly as doing it once, for every
request and database. -/
def relations_idempotent : Prop :=
  ∀ (e : Env) (r : Request) (x : String) (D : DB),
    let twice := fun (f : M S Reply) => (f.run.run (f.run.run D).2).2 = (f.run.run D).2
    twice (follow store e.svc r x) ∧ twice (unfollow store e.svc r x) ∧
    twice (favorite store e.svc r x) ∧ twice (unfavorite store e.svc r x)

/-- **The router sends every request of the spec to its endpoint**, and
anything else to 404 `{"errors":{"route":["not found"]}}`. -/
def route_table : Prop :=
  ∀ {m : Type → Type} [Monad m] (s : Store m) (sv : Services m) (r : Request),
    (r.method = "POST" → r.path = ["users"] → route s sv r = register s sv r) ∧
    (r.method = "POST" → r.path = ["users", "login"] → route s sv r = login s sv r) ∧
    (r.method = "GET" → r.path = ["user"] → route s sv r = currentUser s sv r) ∧
    (r.method = "PUT" → r.path = ["user"] → route s sv r = updateUser s sv r) ∧
    (∀ n, r.method = "GET" → r.path = ["profiles", n] → route s sv r = getProfile s sv r n) ∧
    (∀ n, r.method = "POST" → r.path = ["profiles", n, "follow"] → route s sv r = follow s sv r n) ∧
    (∀ n, r.method = "DELETE" → r.path = ["profiles", n, "follow"] → route s sv r = unfollow s sv r n) ∧
    (r.method = "GET" → r.path = ["articles"] → route s sv r = listArticles s sv r) ∧
    (r.method = "POST" → r.path = ["articles"] → route s sv r = createArticle s sv r) ∧
    (r.method = "GET" → r.path = ["articles", "feed"] → route s sv r = feed s sv r) ∧
    (∀ x, x ≠ "feed" → r.method = "GET" → r.path = ["articles", x] → route s sv r = getArticle s sv r x) ∧
    (∀ x, r.method = "PUT" → r.path = ["articles", x] → route s sv r = updateArticle s sv r x) ∧
    (∀ x, r.method = "DELETE" → r.path = ["articles", x] → route s sv r = deleteArticle s sv r x) ∧
    (∀ x, r.method = "POST" → r.path = ["articles", x, "favorite"] → route s sv r = favorite s sv r x) ∧
    (∀ x, r.method = "DELETE" → r.path = ["articles", x, "favorite"] → route s sv r = unfavorite s sv r x) ∧
    (∀ x, r.method = "GET" → r.path = ["articles", x, "comments"] → route s sv r = listComments s sv r x) ∧
    (∀ x, r.method = "POST" → r.path = ["articles", x, "comments"] → route s sv r = addComment s sv r x) ∧
    (∀ x i, r.method = "DELETE" → r.path = ["articles", x, "comments", i] → route s sv r = deleteComment s sv r x i) ∧
    (r.method = "GET" → r.path = ["tags"] → route s sv r = tags s)

/-! ## F. The browser app: routes, forms, state -/

/-- **Every link the app writes leads back to its page**: for every route
(pages from 1), `Route.parse` of the segments and query `Route.href` writes
gives the route again. The server and the app both route URLs with `Route.parse`. -/
def parse_href : Prop := ∀ r : Route, Linkable r → Route.parse r.segments r.query = r

/-- **The app never sends what the server would reject**: for every message
and every state, each HTTP request `update` asks for has no body, or the body
of one of the API's requests that the server's own decoding reads back and
its own validation accepts unchanged (registration, login, settings, new
and edited articles, comments). -/
def update_sends_accepted : Prop :=
  ∀ (msg : Msg) (m : Model), ∀ req ∈ requests (update msg m).2, AcceptedBody req

/-- **No double submission**: while a form's request is on its way (`busy`),
submitting it again does nothing. -/
def busy_blocks_submit : Prop :=
  ∀ m : Model, m.busy = true →
    update .submitLogin m = (m, .none) ∧ update .submitRegister m = (m, .none) ∧
    update .submitSettings m = (m, .none) ∧ update .publish m = (m, .none) ∧ update .postComment m = (m, .none)

/-- **Late answers for another page are ignored**: data that arrives for a
route other than the current one changes nothing and asks for nothing. -/
def stale_answers_ignored : Prop :=
  ∀ (m : Model) (route : Route) (a : Answer), route ≠ m.route →
    update (.gotArticles route a) m = (m, .none) ∧ update (.gotArticle route a) m = (m, .none) ∧
    update (.gotComments route a) m = (m, .none) ∧ update (.gotProfile route a) m = (m, .none)

/-- **The token the app sends is the signed-in user's**: if a signed-in
user's token is the one kept, it stays so after every message (the token
check at start-up, `tokenLoaded`, comes before anyone is signed in). -/
def token_agrees_preserved : Prop :=
  ∀ (msg : Msg) (m : Model), TokenAgrees m → (∀ t, msg = .tokenLoaded t → m.auth = .loading) →
    TokenAgrees (update msg m).1

/-- **Signing out forgets the token**: the viewer is a guest, no token is kept,
the stored token is removed and the app goes home. -/
def logout_forgets : Prop :=
  ∀ m : Model, ((update .logout m).1.auth matches .guest) ∧ (update .logout m).1.token = none ∧
    (update .logout m).2 = Cmd.batch [Cmd.storageRemove "jwtToken", Cmd.pushUrl "/"]

/-- **Pages are guarded**: once the viewer is known, a guest on a page that
needs a user (settings, editor, your feed) is sent to the login page and
nothing is fetched; a signed-in user on the login or register page is sent home. -/
def guards : Prop :=
  ∀ m : Model,
    (m.auth matches .guest → m.route.needsUser = true → enter m = (m, Cmd.replaceUrl Route.login.href)) ∧
    (∀ u, m.auth = .user u → m.route.guestOnly = true → enter m = (m, Cmd.replaceUrl "/"))

/-- **The server-rendered page is the app's first view**: the HTML inside
`<div id="app">` that the server sends for a URL is exactly the rendering
of the browser app's first model for that URL and those flags, so the app
hydrates it without changing anything. -/
def hydration_agrees : Prop :=
  ∀ (route : Route) (flags : Json) (next : Option String),
    ∃ pre post, Server.page route flags = pre ++ render (view (Model.init route flags next)) ++ post

/-- **Hydrating changes nothing on the page but the controls**: the first
message the app gets only marks it hydrated (enabling its buttons). -/
def hydrated_only_enables : Prop :=
  ∀ m : Model, update .hydrated m = ({ m with hydrated := true }, .none)

/-- **The page links reach every article**: for a list of `count` articles,
the pagination shows links to pages 1, 2, …, n (none when there is one
page), in order, where n pages of 10 hold all `count` articles. (With
`pages_cover` and `parsePage_spec`: walking those links shows every article
exactly once.) -/
def pagination_links : Prop :=
  ∀ (count page : Nat) (hrefOf : Nat → String),
    let n := (count + pageSize - 1) / pageSize
    (pagination count page hrefOf).flatMap hrefs = (if n ≤ 1 then [] else (List.range n).map fun k => hrefOf (k + 1)) ∧
    count ≤ n * pageSize ∧ (∀ p, offsetQuery p = s!"limit={pageSize}&offset={(p - 1) * pageSize}")

/-! ## G. The rendered pages: structure, links, accessibility -/

/-- **Every page has the template's layout**: the navbar
(`nav.navbar.navbar-light`), then the page, whose root element has the
template's class for its route (`home-page`, `auth-page`, …), then the footer. -/
def view_layout : Prop :=
  ∀ m : Model, ∃ page, view m = div [] [header m, page, footer_] ∧ classOf (header m) = some "navbar navbar-light" ∧
    classOf page = some (pageClass m.route)

/-- **No `javascript:` links anywhere**: every `href` on every page, for every
state (article bodies included), is `http:`, `https:`, `mailto:` or has no
scheme. -/
def view_hrefs_safe : Prop :=
  ∀ m : Model, Every (fun _ attrs => ∀ v, Attr.attr "href" v ∈ attrs → Markdown.allowedHref v = true) (view m)

/-- **No raw HTML**: no element on any page sets `innerHTML`, so everything an
author writes is a text node or an escaped attribute value. -/
def view_no_raw_html : Prop :=
  ∀ m : Model, Every (fun _ attrs => ∀ v, Attr.prop "innerHTML" v ∉ attrs) (view m)

/-- **Every image has alternative text** (`alt`), and every link a target (`href`). -/
def view_imgs_alt_links_href : Prop :=
  ∀ m : Model, Every (fun tag attrs => (tag = "img" → ∃ v, Attr.attr "alt" v ∈ attrs) ∧
    (tag = "a" → ∃ v, Attr.attr "href" v ∈ attrs)) (view m)

/-- **Every form control is described**: every `input` and `textarea` has a
non-empty `placeholder` (the template's labels). -/
def view_controls_described : Prop :=
  ∀ m : Model, Every (fun tag attrs => tag = "input" ∨ tag = "textarea" →
    ∃ v, v ≠ "" ∧ Attr.attr "placeholder" v ∈ attrs) (view m)

/-- **An article body never adds an `h1`**: its headings start at `h2`, so the
article's title is the page's only `h1`. -/
def article_body_no_h1 : Prop :=
  ∀ body : String, ∀ b ∈ Markdown.parse body, Every (fun tag _ => tag ≠ "h1") (blockView b)

end Conduit.Spec
