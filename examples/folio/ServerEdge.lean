/- Folio at the edge: the site is in a key-value store, and every request
builds it from there with `Folio.Site.build` (the function the `folio`
command runs, so the pages are the same bytes) and answers with the page
asked for. One source for three platforms, through `Lasm.KV.open "folio"`:

| Build | Store |
| --- | --- |
| `npm run build:workers` (Cloudflare Workers) | Workers KV, the binding `folio` (wrangler.toml) |
| `npm run build:deno-deploy` (Deno Deploy) | Deno KV, keys `["folio", key]` |
| `npm run build:fastly` (Fastly Compute) | the KV Store `folio` (fastly.toml) |

The store holds the site's files under their paths in the site's directory
(`index.md`, `content/hello.md`, `layouts/page.html`) and, under `files`,
the list of those paths, one per line; `node tools/kv.mjs` writes them in
each platform's format (README.md, "At the edge"). Nothing writes to the
store from a request: the site changes when its files in the store change.

Routes: `GET /` (index.html), `GET /feed.xml`, `GET /SLUG/` (a page; `/SLUG`
redirects there), and `POST /api/render`, which renders the request's body
(safe defaults, as HTML; with `?raw_html=1` raw HTML enabled, as text).

Each platform runs `handle` with its own server: Workers and Deno Deploy the
program's default export (`Server/JsServe.lean`), Fastly its host calls
(`Server/FastlyServe.lean`). -/
import Lasm.JS
import Lasm.KV
import Folio
import Server.JsServe
import Server.FastlyServe
open Std.Async Folio.Server.Web

namespace Folio.Edge

/-- The store's name: the Workers binding, the Fastly KV Store, the Deno KV prefix. -/
def storeName : String := "folio"

/-- The site's files from the store (see the module documentation), as
`folio build` reads them from a directory: the pages in path order. `none`
when the store has no list of files. -/
def readSite (kv : Lasm.KV.Store) : Async (Option Folio.Site.Input) := do
  let some list ← kv.get "files" | return none
  let paths := (list.splitOn "\n").filter (!·.isEmpty)
  let mut index := ""
  let mut pages : Array (String × String) := #[]
  let mut layouts : Array (String × String) := #[]
  for p in paths do
    let some text ← kv.get p | continue
    if p == "index.md" then index := text
    else if p.startsWith "content/" && p.endsWith ".md" then
      pages := pages.push ((p.drop 8).toString, text)
    else if p.startsWith "layouts/" && p.endsWith ".html" && !(p.drop 8).toString.contains '/' then
      layouts := layouts.push (((p.drop 8).dropEnd 5).toString, text)
  return some { index, pages := (pages.qsort (·.1 < ·.1)).toList, layouts := layouts.toList }

/-- The content type of a generated file. -/
def contentType (path : String) : String :=
  if path.endsWith ".xml" then "application/rss+xml; charset=utf-8" else "text/html; charset=utf-8"

/-- The generated file a request asks for, from the request's path segments
and whether the path ends with `/`. -/
def target (segments : List String) (slash : Bool) : String :=
  if segments.isEmpty then "index.html"
  else if slash then "/".intercalate segments ++ "/index.html"
  else "/".intercalate segments

def handle (kv : Lasm.KV.Store) (req : Request) : Async Response := do
  let r ← match req.method, req.segments with
    | "POST", ["api", "render"] =>
      if req.queryParam? "raw_html" == some "1" then
        pure <| (Response.text (Folio.render { rawHtml := true, anyUrl := true } req.text)).withHeader
          "x-content-type-options" "nosniff"
      else pure <| Response.html (Folio.render {} req.text)
    | "GET", segments => do
      let some input ← readSite kv
        | pure (Response.text "Folio: the store has no site (README.md, \"At the edge\")\n" 503)
      let files := (Folio.Site.build input).files
      let want := target segments (req.path.endsWith "/")
      match files.lookup want with
      | some text => pure <| Response.withBody text.toUTF8 (contentType want)
      | none =>
        -- `/SLUG` → `/SLUG/` when that page exists (a slug is a-z, 0-9 and -,
        -- so the location is always a path on this site).
        if !segments.isEmpty && (files.lookup (want ++ "/index.html")).isSome then
          pure <| Response.redirect ("/" ++ want ++ "/") 301
        else pure Response.notFound
    | _, _ => pure <| (Response.text "Method Not Allowed\n" 405).withHeader "allow" "GET, HEAD, POST"
  return r.withHeader "x-folio-store" kv.kind

open Lasm.JS in
/-- Workers KV: the binding `name` of the Worker's `env`, which arrives with
each request (`JsServe.platformEnv`); memory when there is no such binding. -/
def workersStore (name : String) : IO Lasm.KV.Store := do
  let mem ← Lasm.KV.memory
  let binding : IO (Option Value) := do
    let found : Data ← match ← Folio.Server.JsServe.platformEnv.get with
      | .ref env _ => (try env.get name Data catch _ => pure .undefined)
      | env@(.object _) => pure (env.field name)
      | _ => pure .undefined
    match found with
    | .ref v _ => return some v
    | _ => return none
  let get (k : String) : Async (Option String) := do
    let some ns ← binding | mem.get k
    match ← ns.callMethodAwait "get" #[.string k] Data with
    | .string s => return some s
    | _ => return none
  let put (k v : String) : Async Unit := do
    let some ns ← binding | mem.put k v
    let _ : Data ← ns.callMethodAwait "put" #[.string k, .string v]
  let delete (k : String) : Async Unit := do
    let some ns ← binding | mem.delete k
    let _ : Data ← ns.callMethodAwait "delete" #[.string k]
  return { kind := "workers or memory", get, put, delete }

end Folio.Edge

def main : IO Unit := do
  if ← Lasm.JS.onEdge then
    -- Deno Deploy: Deno KV (Lasm.KV.open); Cloudflare Workers: the Worker's KV binding.
    let kv ← if ← Folio.Server.JsServe.onDeno then Lasm.KV.open Folio.Edge.storeName
      else Folio.Edge.workersStore Folio.Edge.storeName
    Folio.Server.JsServe.serveEdge (Folio.Edge.handle kv)
  else
    -- Fastly Compute: the KV Store (Lasm.KV.open), one request per instance.
    let kv ← Lasm.KV.open Folio.Edge.storeName
    Folio.Server.FastlyServe.serve (Folio.Edge.handle kv)
