/-
The first page of every URL, rendered on the server: the data the page
shows is fetched from Conduit's own API (in process, through
`Conduit.Api.handle`, logged out), the browser app's `view` of it is
rendered to HTML, and the data goes along as the app's flags so the app
hydrates exactly this HTML. The same functions build the model on both
sides (`Model.ofFlags`).
-/
import Lasm.Fetch
import Lasm.UI.Render
import Conduit.Api
import Frontend.View
open Lean Lasm.UI Conduit.Frontend

namespace Conduit.Server

/-- `GET /api/…` in process; the JSON body when the answer is 200. -/
def apiGet {m : Type → Type} [Monad m] (store : Store m) (svc : Services m) (path : List String)
    (query : List (String × String) := []) : m (Option Json) := do
  let r ← Api.handle store svc { method := "GET", path, query }
  return if r.status == 200 then r.body else none

def listQuery (route : Route) : Option (List String × List (String × String)) :=
  let page (p : Nat) : List (String × String) := [("limit", toString pageSize), ("offset", toString ((p - 1) * pageSize))]
  match route with
  | .home .global p => some (["articles"], page p)
  | .home (.tag t) p => some (["articles"], ("tag", t) :: page p)
  | .profile u false p => some (["articles"], ("author", u) :: page p)
  | .profile u true p => some (["articles"], ("favorited", u) :: page p)
  | _ => none

/-- The data a page needs, as the browser app's flags. -/
def flagsFor {m : Type → Type} [Monad m] (store : Store m) (svc : Services m) (route : Route) : m Json := do
  let inner (j : Option Json) (k : String) : Option Json := j.bind (Decode.get? · k)
  let mut fields : List (String × Json) := []
  if let some (path, query) := listQuery route then
    if let some j ← apiGet store svc path query then fields := fields ++ [("articles", j)]
  match route with
  | .home _ _ =>
    if let some t := inner (← apiGet store svc ["tags"]) "tags" then fields := fields ++ [("tags", t)]
  | .article slug =>
    if let some a := inner (← apiGet store svc ["articles", slug]) "article" then fields := fields ++ [("article", a)]
    if let some c := inner (← apiGet store svc ["articles", slug, "comments"]) "comments" then fields := fields ++ [("comments", c)]
  | .profile u _ _ =>
    if let some p := inner (← apiGet store svc ["profiles", u]) "profile" then fields := fields ++ [("profile", p)]
  | .editor (some slug) =>
    if let some a := inner (← apiGet store svc ["articles", slug]) "article" then
      if let .ok art := Article.decode a then
        fields := fields ++ [("form", Json.mkObj [("title", .str art.title), ("description", .str art.description),
          ("body", .str (art.body.getD "")), ("tags", Json'.strs art.tagList)])]
  | _ => pure ()
  return Json.mkObj fields

/-- The page's `<head>`: the RealWorld theme, its fonts and icons, and the browser app. -/
def head : String :=
  "<meta charset=\"utf-8\"><meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">" ++
  "<title>Conduit</title>" ++
  "<link rel=\"stylesheet\" href=\"https://cdnjs.cloudflare.com/ajax/libs/ionicons/2.0.1/css/ionicons.min.css\">" ++
  "<link rel=\"stylesheet\" href=\"https://fonts.googleapis.com/css?family=Source+Sans+Pro:300,400,600,700|Lora:400,700\">" ++
  "<link rel=\"stylesheet\" href=\"/client/styles.css\"><link rel=\"stylesheet\" href=\"/client/conduit.css\">" ++
  "<script type=\"module\" src=\"/client/app.js\"></script>"

/-- The whole HTML page of a route. -/
def page (route : Route) (flags : Json) : String :=
  let model := Model.ofFlags route flags
  "<!doctype html><html lang=\"en\"><head>" ++ head ++ "</head><body>" ++
  "<div id=\"app\" data-lasm-app data-lasm-hydrate data-lasm-flags=\"" ++ Render.escapeAttr flags.compress ++ "\">" ++
  render (view model) ++ "</div></body></html>"

/-- Any URL outside `/api`: its page (404 for unknown paths). -/
def pageResponse {m : Type → Type} [Monad m] (store : Store m) (svc : Services m) (req : Lasm.Fetch.Request) :
    m Lasm.Fetch.Response := do
  let route := Route.parse req.segments req.queryParams
  let html := page route (← flagsFor store svc route)
  return .html html (if route == .notFound then 404 else 200)

end Conduit.Server
