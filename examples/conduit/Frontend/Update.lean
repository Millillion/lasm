/-
What the browser app does: `update` (pure, as in the Elm architecture) and
the API calls it asks for. Forms are checked with the same validation as the
server (`Conduit/Validation.lean`) before anything is sent, and requests are
encoded with the same functions the server decodes them with
(`Conduit/Types.lean`).
-/
import Lasm.UI.Cmd
import Conduit.Validation
import Frontend.Model
open Lean Lasm.UI

namespace Conduit.Frontend

/-! ## API calls -/

/-- A call to the API (`/api` + `path`), with the viewer's token if any. -/
def api (m : Model) (method path : String) (body : Option Json) (handle : Answer → Msg) : Cmd Msg :=
  let auth : List (String × String) := match m.token with
    | some t => [("authorization", s!"Token {t}")]
    | none => []
  let req : Http.Request := { method, url := "/api" ++ path, headers := [("content-type", "application/json")] ++ auth,
                              body := body.map (·.compress) }
  Cmd.ofEffect (.http req handle)

def offsetQuery (page : Nat) : String := s!"limit={pageSize}&offset={(page - 1) * pageSize}"

/-- The API path of a page's article list. -/
def listPath : Route → Option String
  | .home .global p => some s!"/articles?{offsetQuery p}"
  | .home .following p => some s!"/articles/feed?{offsetQuery p}"
  | .home (.tag t) p => some s!"/articles?tag={encodeSegment t}&{offsetQuery p}"
  | .profile u false p => some s!"/articles?author={encodeSegment u}&{offsetQuery p}"
  | .profile u true p => some s!"/articles?favorited={encodeSegment u}&{offsetQuery p}"
  | _ => none

/-- The requests that load the data a page shows. -/
def loadPage (m : Model) : Cmd Msg :=
  let r := m.route
  match r with
  | .home _ _ => Cmd.batch [
      match listPath r with
      | some path => api m "GET" path none (.gotArticles r)
      | none => .none,
      api m "GET" "/tags" none .gotTags]
  | .article slug => Cmd.batch [
      api m "GET" s!"/articles/{encodeSegment slug}" none (.gotArticle r),
      api m "GET" s!"/articles/{encodeSegment slug}/comments" none (.gotComments r)]
  | .profile u _ _ => Cmd.batch [
      api m "GET" s!"/profiles/{encodeSegment u}" none (.gotProfile r),
      match listPath r with
      | some path => api m "GET" path none (.gotArticles r)
      | none => .none]
  | .editor (some slug) =>
      if m.form.loaded then .none else api m "GET" s!"/articles/{encodeSegment slug}" none (.gotArticle r)
  | _ => .none

/-- The form a page starts with. -/
def initialForm (m : Model) : Form :=
  match m.route, m.auth with
  | .settings, .user u => { username := u.username, email := u.email, bio := u.bio.getD "", image := u.image.getD "", loaded := true }
  | .editor none, _ => { loaded := true }
  | _, _ => {}

/-- Once the viewer is known: leave pages they may not see, else (re)load
the page's data with their token. -/
def enter (m : Model) : Model × Cmd Msg :=
  match m.auth with
  | .loading => (m, .none)
  | .guest =>
    if m.route.needsUser then (m, Cmd.replaceUrl Route.login.href)
    else
      -- The server's data was loaded logged out too: it is right for a guest.
      ({ m with stale := false }, if m.stale then .none else loadPage m)
  | .user _ =>
    if m.route.guestOnly then (m, Cmd.replaceUrl "/")
    else
      let m := if m.form.loaded then m else { m with form := initialForm m }
      (m, loadPage m)

/-- Moves to another page: its data is loaded afresh. -/
def goTo (m : Model) (route : Route) : Model × Cmd Msg :=
  enter { m with route, articles := .loading, article := .loading, comments := .loading, profile := .loading,
                 form := {}, errors := [], busy := false, stale := false }

/-- Replaces one article (in the list and on the article page). -/
def replaceArticle (m : Model) (art : Article) : Model :=
  { m with
    articles := match m.articles with
      | .ready l => .ready { l with articles := l.articles.map fun a => if a.slug == art.slug then art else a }
      | other => other,
    article := match m.article with
      | .ready a => if a.slug == art.slug then .ready art else .ready a
      | other => other }

/-- Updates the author's `following` everywhere it is shown. -/
def replaceProfile (m : Model) (prof : Profile) : Model :=
  let fix (a : Article) := if a.author.username == prof.username then { a with author := prof } else a
  { m with
    profile := match m.profile with
      | .ready p => if p.username == prof.username then .ready prof else .ready p
      | other => other,
    article := match m.article with
      | .ready a => .ready (fix a)
      | other => other,
    articles := match m.articles with
      | .ready l => .ready { l with articles := l.articles.map fix }
      | other => other }

/-- The messages of a failed validation, as the page shows them. -/
def messages (e : ApiError) : List String := e.errors.flatMap fun (k, ms) => ms.map fun msg => s!"{k} {msg}"

/-- Where to go after logging in: `?next=` if it is a path in the app, else home. -/
def afterLogin (next : Option String) : String :=
  match next with
  | some n => if n.startsWith "/" && !n.startsWith "//" then n else "/"
  | none => "/"

/-! ## Submitting forms -/

/-- Registration: validated with the server's own rules first. -/
def submitRegister (m : Model) : Model × Cmd Msg :=
  let req : NewUser := { username := m.form.username, email := m.form.email, password := m.form.password }
  match validateNewUser req with
  | .error e => ({ m with errors := messages e }, .none)
  | .ok v => ({ m with busy := true, errors := [] }, api m "POST" "/users" (some (wrap "user" v.val.encode)) .loggedIn)

def submitLogin (m : Model) : Model × Cmd Msg :=
  let req : LoginUser := { email := m.form.email, password := m.form.password }
  match validateLogin req with
  | .error e => ({ m with errors := messages e }, .none)
  | .ok v => ({ m with busy := true, errors := [] }, api m "POST" "/users/login" (some (wrap "user" v.val.encode)) .loggedIn)

def submitSettings (m : Model) : Model × Cmd Msg :=
  let req : UpdateUser := {
    image := .value m.form.image, username := .value m.form.username, bio := .value m.form.bio,
    email := .value m.form.email, password := if m.form.password.isEmpty then .absent else .value m.form.password }
  match validateUpdateUser req with
  | .error e => ({ m with errors := messages e }, .none)
  | .ok _ => ({ m with busy := true, errors := [] }, api m "PUT" "/user" (some (wrap "user" req.encode)) .settingsSaved)

/-- Publishing: a new article (`POST`) or an update (`PUT`, with every field
and the tag list, so removed tags are removed). -/
def publish (m : Model) : Model × Cmd Msg :=
  let form := if m.form.tagInput.trimAscii.isEmpty then m.form
    else { m.form with tags := m.form.tags ++ [m.form.tagInput.trimAscii.toString], tagInput := "" }
  let m := { m with form }
  let req : NewArticle := { title := form.title, description := form.description, body := form.body, tagList := form.tags }
  match validateNewArticle req with
  | .error e => ({ m with errors := messages e }, .none)
  | .ok v =>
    let m := { m with busy := true, errors := [] }
    match m.route with
    | .editor (some slug) =>
      let upd : UpdateArticle := {
        title := .value v.val.title, description := .value v.val.description,
        body := .value v.val.body, tagList := .value v.val.tagList }
      (m, api m "PUT" s!"/articles/{encodeSegment slug}" (some (wrap "article" upd.encode)) .published)
    | _ => (m, api m "POST" "/articles" (some (wrap "article" v.val.encode)) .published)

def postComment (m : Model) : Model × Cmd Msg :=
  match m.route, validateNewComment { body := m.form.comment } with
  | .article slug, .ok v =>
    ({ m with busy := true, errors := [] },
     api m "POST" s!"/articles/{encodeSegment slug}/comments" (some (wrap "comment" v.val.encode)) .commentPosted)
  | _, .error e => ({ m with errors := messages e }, .none)
  | _, _ => (m, .none)

/-! ## update -/

/-- Signed in (registered, logged in, or settings saved): keep the token. -/
def signedIn (m : Model) (u : User) : Model × Cmd Msg :=
  ({ m with auth := .user u, token := some u.token, busy := false, errors := [] }, Cmd.storageSet "jwtToken" u.token)

def update (msg : Msg) (m : Model) : Model × Cmd Msg :=
  match msg with
  | .hydrated => ({ m with hydrated := true }, .none)
  | .tokenLoaded none => enter { m with auth := .guest, token := none }
  | .tokenLoaded (some t) => let m := { m with token := some t }; (m, api m "GET" "/user" none .userLoaded)
  | .userLoaded r =>
    match readAnswer r "user" User.decode with
    | .ok u => enter { m with auth := .user u, token := some u.token }
    | .error _ =>
      -- An invalid or expired token: forget it.
      let (m, cmd) := enter { m with auth := .guest, token := none }
      (m, Cmd.batch [Cmd.storageRemove "jwtToken", cmd])
  | .urlChanged route next =>
    let m := { m with next }
    if route == m.route then (m, .none) else goTo m route
  | .gotArticles route r =>
    if route != m.route then (m, .none) else
    match readList r with
    | .ok l => ({ m with articles := .ready l, stale := false }, .none)
    | .error es => ({ m with articles := .failed (" ".intercalate es) }, .none)
  | .gotTags r =>
    match readAnswer r "tags" (Decode.strList "tags") with
    | .ok ts => ({ m with tags := .ready ts }, .none)
    | .error es => ({ m with tags := .failed (" ".intercalate es) }, .none)
  | .gotArticle route r =>
    if route != m.route then (m, .none) else
    match readAnswer r "article" Article.decode with
    | .ok art =>
      match m.route with
      | .editor _ =>
        let form : Form := {
          title := art.title, description := art.description, body := art.body.getD "", tags := art.tagList, loaded := true }
        ({ m with article := .ready art, form }, .none)
      | _ => ({ m with article := .ready art, stale := false }, .none)
    | .error es => ({ m with article := .failed (" ".intercalate es) }, .none)
  | .gotComments route r =>
    if route != m.route then (m, .none) else
    match readAnswer r "comments" decodeComments with
    | .ok cs => ({ m with comments := .ready cs }, .none)
    | .error es => ({ m with comments := .failed (" ".intercalate es) }, .none)
  | .gotProfile route r =>
    if route != m.route then (m, .none) else
    match readAnswer r "profile" Profile.decode with
    | .ok p => ({ m with profile := .ready p }, .none)
    | .error es => ({ m with profile := .failed (" ".intercalate es) }, .none)
  | .set f v => ({ m with form := m.form.set f v }, .none)
  | .submitLogin => if m.busy then (m, .none) else submitLogin m
  | .submitRegister => if m.busy then (m, .none) else submitRegister m
  | .loggedIn r =>
    match readAnswer r "user" User.decode with
    | .ok u =>
      let (m', cmd) := signedIn m u
      (m', Cmd.batch [cmd, Cmd.pushUrl (afterLogin m.next)])
    | .error es => ({ m with busy := false, errors := es }, .none)
  | .submitSettings => if m.busy then (m, .none) else submitSettings m
  | .settingsSaved r =>
    match readAnswer r "user" User.decode with
    | .ok u =>
      let (m', cmd) := signedIn m u
      (m', Cmd.batch [cmd, Cmd.pushUrl (Route.profile u.username false 1).href])
    | .error es => ({ m with busy := false, errors := es }, .none)
  | .logout =>
    ({ m with auth := .guest, token := none }, Cmd.batch [Cmd.storageRemove "jwtToken", Cmd.pushUrl "/"])
  | .addTag =>
    let t := m.form.tagInput.trimAscii.toString
    if t.isEmpty || m.form.tags.contains t then ({ m with form := { m.form with tagInput := "" } }, .none)
    else ({ m with form := { m.form with tags := m.form.tags ++ [t], tagInput := "" } }, .none)
  | .removeTag t => ({ m with form := { m.form with tags := m.form.tags.filter (· != t) } }, .none)
  | .publish => if m.busy then (m, .none) else publish m
  | .published r =>
    match readAnswer r "article" Article.decode with
    | .ok art => ({ m with busy := false }, Cmd.pushUrl (Route.article art.slug).href)
    | .error es => ({ m with busy := false, errors := es }, .none)
  | .toggleFavorite slug favorited =>
    match m.auth with
    | .user _ => ({ m with busy := true },
        api m (if favorited then "DELETE" else "POST") s!"/articles/{encodeSegment slug}/favorite" none .favoriteDone)
    | _ => (m, Cmd.pushUrl Route.register.href)
  | .favoriteDone r =>
    match readAnswer r "article" Article.decode with
    | .ok art => ({ replaceArticle m art with busy := false }, .none)
    | .error es => ({ m with busy := false, errors := es }, .none)
  | .toggleFollow username following =>
    match m.auth with
    | .user _ => ({ m with busy := true },
        api m (if following then "DELETE" else "POST") s!"/profiles/{encodeSegment username}/follow" none .followDone)
    | _ => (m, Cmd.pushUrl Route.register.href)
  | .followDone r =>
    match readAnswer r "profile" Profile.decode with
    | .ok p => ({ replaceProfile m p with busy := false }, .none)
    | .error es => ({ m with busy := false, errors := es }, .none)
  | .deleteArticle slug =>
    ({ m with busy := true }, api m "DELETE" s!"/articles/{encodeSegment slug}" none .articleDeleted)
  | .articleDeleted r =>
    if succeeded r then ({ m with busy := false }, Cmd.pushUrl "/")
    else
      let errors := match r with
        | .ok res => errorMessages res.status res.body
        | .error _ => ["Unable to connect to the server."]
      ({ m with busy := false, errors }, .none)
  | .postComment => if m.busy then (m, .none) else postComment m
  | .commentPosted r =>
    match readAnswer r "comment" Comment.decode with
    | .ok c =>
      let comments : Remote (List Comment) := match m.comments with
        | .ready cs => .ready (cs ++ [c])
        | _ => .ready [c]
      ({ m with busy := false, form := { m.form with comment := "" }, comments }, .none)
    | .error es => ({ m with busy := false, errors := es }, .none)
  | .deleteComment id =>
    match m.route with
    | .article slug => (m, api m "DELETE" s!"/articles/{encodeSegment slug}/comments/{id}" none (.commentDeleted id))
    | _ => (m, .none)
  | .commentDeleted id r =>
    if succeeded r then
      let comments : Remote (List Comment) := match m.comments with
        | .ready cs => .ready (cs.filter (·.id != id))
        | other => other
      ({ m with comments }, .none)
    else
      let errors := match r with
        | .ok res => errorMessages res.status res.body
        | .error _ => ["Unable to connect to the server."]
      ({ m with errors }, .none)
  | .ignore => (m, .none)

end Conduit.Frontend
