/-
The browser app's state and messages. The server builds the same `Model`
for the first page of a URL (with the data it has, logged out), renders
`view` of it to HTML, and passes the data as the app's flags; the browser
app starts from the same model, so it hydrates the server's HTML.
-/
import Lean.Data.Json
import Lasm.UI.Cmd
import Conduit.Types
import Frontend.Route
open Lean Lasm.UI

namespace Conduit.Frontend

/-- Data that is being fetched, has arrived, or failed. -/
inductive Remote (α : Type) where
  | loading
  | ready (a : α)
  | failed (message : String)
  deriving Inhabited

def Remote.toOption {α : Type} : Remote α → Option α
  | .ready a => some a
  | _ => none

/-- Who is using the app. -/
inductive Auth where
  /-- Not known yet (the token in `localStorage` is being checked). -/
  | loading
  | guest
  | user (u : User)
  deriving Inhabited

def Auth.user? : Auth → Option User
  | .user u => some u
  | _ => none

/-- Every form field of every page (only the current page's are used). -/
structure Form where
  username : String := ""
  email : String := ""
  password : String := ""
  bio : String := ""
  image : String := ""
  title : String := ""
  description : String := ""
  body : String := ""
  tagInput : String := ""
  tags : List String := []
  comment : String := ""
  /-- The editor holds this article (`/editor/:slug`), or the settings form holds the user's data. -/
  loaded : Bool := false
  deriving Inhabited

inductive Field where
  | username | email | password | bio | image | title | description | body | tagInput | comment
  deriving Inhabited

def Form.set (f : Form) : Field → String → Form
  | .username, v => { f with username := v }
  | .email, v => { f with email := v }
  | .password, v => { f with password := v }
  | .bio, v => { f with bio := v }
  | .image, v => { f with image := v }
  | .title, v => { f with title := v }
  | .description, v => { f with description := v }
  | .body, v => { f with body := v }
  | .tagInput, v => { f with tagInput := v }
  | .comment, v => { f with comment := v }

structure Model where
  route : Route
  auth : Auth := .loading
  /-- The token in `localStorage`. -/
  token : Option String := none
  /-- The browser app has taken over the server's HTML. -/
  hydrated : Bool := false
  /-- The page's data was loaded without the viewer's token (by the server, or
  before the viewer was known): `favorited` and `following` may be wrong, so
  those buttons wait for the reload. -/
  stale : Bool := false
  articles : Remote ArticleList := .loading
  tags : Remote (List String) := .loading
  article : Remote Article := .loading
  comments : Remote (List Comment) := .loading
  profile : Remote Profile := .loading
  form : Form := {}
  errors : List String := []
  /-- A form was submitted and its request is on its way. -/
  busy : Bool := false
  /-- Where to go after signing in (`/login?next=/article/…`). -/
  next : Option String := none
  deriving Inhabited

/-- Controls work once the app has hydrated and knows who the viewer is. -/
def Model.ready (m : Model) : Bool :=
  m.hydrated && !(m.auth matches .loading)

/-- The answer to an API call: a response (any status) or a network error. -/
abbrev Answer := Except String Http.Response

inductive Msg where
  | hydrated
  | tokenLoaded (token : Option String)
  | userLoaded (r : Answer)
  | urlChanged (route : Route) (next : Option String)
  | gotArticles (route : Route) (r : Answer)
  | gotTags (r : Answer)
  | gotArticle (route : Route) (r : Answer)
  | gotComments (route : Route) (r : Answer)
  | gotProfile (route : Route) (r : Answer)
  | set (field : Field) (value : String)
  | submitLogin
  | submitRegister
  | loggedIn (r : Answer)
  | submitSettings
  | settingsSaved (r : Answer)
  | logout
  | addTag
  | removeTag (tag : String)
  | publish
  | published (r : Answer)
  | toggleFavorite (slug : String) (favorited : Bool)
  | favoriteDone (r : Answer)
  | toggleFollow (username : String) (following : Bool)
  | followDone (r : Answer)
  | deleteArticle (slug : String)
  | articleDeleted (r : Answer)
  | postComment
  | commentPosted (r : Answer)
  | deleteComment (id : Nat)
  | commentDeleted (id : Nat) (r : Answer)
  | ignore

/-! ## Reading answers -/

/-- The messages of an error body (`"email can't be blank"`), or a fallback. -/
def errorMessages (status : Nat) (body : String) : List String :=
  match (Json.parse body).toOption.bind (fun j => (ApiError.decode status j).toOption) with
  | some e =>
    let msgs := e.errors.flatMap fun (k, ms) => ms.map fun m => s!"{k} {m}"
    if msgs.isEmpty then [s!"The server answered {status}."] else msgs
  | none => [s!"The server answered {status}."]

/-- An answer's value under `key`, decoded; or the messages to show. -/
def readAnswer {α : Type} (r : Answer) (key : String) (decode : Json → Except String α) : Except (List String) α :=
  match r with
  | .error _ => .error ["Unable to connect to the server. Check your connection and try again."]
  | .ok res =>
    if res.ok then
      match Json.parse res.body with
      | .ok j =>
        match Decode.get? j key with
        | some v => (decode v).mapError fun e => [s!"Unexpected answer: {e}"]
        | none => .error [s!"Unexpected answer: no {key}"]
      | .error e => .error [s!"Unexpected answer: {e}"]
    else .error (errorMessages res.status res.body)

/-- An article list (`{"articles": […], "articlesCount": n}`). -/
def readList (r : Answer) : Except (List String) ArticleList :=
  match r with
  | .error _ => .error ["Unable to connect to the server. Check your connection and try again."]
  | .ok res =>
    if res.ok then
      match Json.parse res.body with
      | .ok j => (ArticleList.decode j).mapError fun e => [s!"Unexpected answer: {e}"]
      | .error e => .error [s!"Unexpected answer: {e}"]
    else .error (errorMessages res.status res.body)

/-- Whether an answer is a success (any 2xx, with or without a body). -/
def succeeded (r : Answer) : Bool :=
  match r with
  | .ok res => res.ok
  | .error _ => false

/-! ## Flags: the data the server rendered the first page with -/

def decodeComments (j : Json) : Except String (List Comment) :=
  match j with
  | .arr a => a.toList.mapM Comment.decode
  | _ => .error "comments: expected an array"

/-- The model the server rendered, from the route and the flags. -/
def Model.ofFlags (route : Route) (flags : Json) : Model :=
  let get {α : Type} (k : String) (dec : Json → Except String α) : Remote α :=
    match (Decode.get? flags k).map dec with
    | some (.ok a) => .ready a
    | _ => .loading
  let form : Form := match Decode.get? flags "form" with
    | some f => { title := (Decode.strOr f "title").toOption.getD "", description := (Decode.strOr f "description").toOption.getD "",
                  body := (Decode.strOr f "body").toOption.getD "", tags := (Decode.strsOr f "tags").toOption.getD [], loaded := true }
    | none => {}
  { route, articles := get "articles" ArticleList.decode, tags := get "tags" (Decode.strList "tags"),
    article := get "article" Article.decode, comments := get "comments" decodeComments,
    profile := get "profile" Profile.decode, form, stale := true }

/-- The browser app's first model: the server's (`Model.ofFlags`), plus where
to go after signing in (`?next=`), which the page does not show. -/
def Model.init (route : Route) (flags : Json) (next : Option String) : Model :=
  { Model.ofFlags route flags with next }

end Conduit.Frontend
