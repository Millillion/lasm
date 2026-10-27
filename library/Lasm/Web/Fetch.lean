/-
Lasm.Web fetch: HTTP requests from the browser (`fetch`), responses, request
bodies (text, bytes, JSON, form data, query parameters) and cancellation
(`AbortController`, timeouts). Requests run in `Async`: the Lean computation
continues when the response arrives, and the page stays responsive meanwhile.
-/
import Lasm.JS.Core
import Lasm.JS.Meta
import Lasm.Web.Types

namespace Lasm.Web
open Lasm.JS

/-- A request body. -/
inductive Body where
  | none
  | text (text : String)
  | bytes (bytes : ByteArray)
  /-- `JSON.stringify` of the value; sets `content-type: application/json` unless a header names one. -/
  | json (value : Data)
  | form (data : FormData)
  | params (params : SearchParams)
  deriving Inhabited

/-- `fetch` options. Empty strings keep the browser's defaults. -/
structure RequestInit where
  method : String := "GET"
  headers : Array (String × String) := #[]
  body : Body := .none
  /-- `omit`, `same-origin` or `include`. -/
  credentials : String := ""
  /-- `cors`, `no-cors` or `same-origin`. -/
  mode : String := ""
  /-- `default`, `no-store`, `reload`, `no-cache`, `force-cache` or `only-if-cached`. -/
  cache : String := ""
  /-- `follow`, `error` or `manual`. -/
  redirect : String := ""
  signal : Option AbortSignal := none
  deriving Inhabited

private def hasContentType (headers : Array (String × String)) : Bool :=
  headers.any fun (k, _) => k.toLower == "content-type"

instance : ToJS RequestInit where
  toJS r :=
    let headers := match r.body with
      | .json _ => if hasContentType r.headers then r.headers else r.headers.push ("content-type", "application/json")
      | _ => r.headers
    let body : List (String × Data) := match r.body with
      | .none => []
      | .text t => [("body", toJS t)]
      | .bytes b => [("body", toJS b)]
      | .json d => [("json", d)]
      | .form f => [("body", toJS f)]
      | .params p => [("body", toJS p)]
    obj ([("method", toJS r.method), ("headers", toJS headers), ("credentials", toJS r.credentials), ("mode", toJS r.mode),
      ("cache", toJS r.cache), ("redirect", toJS r.redirect)] ++ body ++ (match r.signal with | some s => [("signal", toJS s)] | none => []))

/-- A response's status line and headers. -/
structure ResponseInfo where
  status : Nat
  statusText : String
  /-- `status` is 200–299. -/
  ok : Bool
  url : String
  redirected : Bool
  /-- `basic`, `cors`, `opaque`, … -/
  type : String
  /-- Header names are lower case. -/
  headers : Array (String × String)
  deriving FromJS, Inhabited, Repr

namespace Raw
@[js "lasm:web" "fetch"] opaque fetch : String → RequestInit → Async Response
@[js "lasm:web" "responseInfo"] opaque responseInfo : Response → IO ResponseInfo
@[js "lasm:web" "responseText"] opaque responseText : Response → Async String
@[js "lasm:web" "responseJson"] opaque responseJson : Response → Async Data
@[js "lasm:web" "responseBytes"] opaque responseBytes : Response → Async ByteArray
@[js "lasm:web" "abortController"] opaque abortController : IO AbortController
@[js "lasm:web" "abortSignal"] opaque abortSignal : AbortController → IO AbortSignal
@[js "lasm:web" "abort"] opaque abort : AbortController → Option String → IO Unit
@[js "lasm:web" "timeoutSignal"] opaque timeoutSignal : Float → IO AbortSignal
end Raw

/-- `fetch(url, init)`: the response once its headers arrive (read the body with
`Response.text`, `json` or `bytes`). Network failures and aborts are errors;
HTTP error statuses are not (check `Response.info`). Relative URLs resolve
against the page. -/
def fetch (url : String) (init : RequestInit := {}) : Async Response := Raw.fetch url init

namespace Response
def info (r : Response) : IO ResponseInfo := Raw.responseInfo r
def status (r : Response) : IO Nat := r.val.get "status" Nat
def ok (r : Response) : IO Bool := r.val.get "ok" Bool
/-- A header's value (`headers.get(name)`), if present. -/
def header (r : Response) (name : String) : IO (Option String) := do
  (← r.val.get "headers").callMethod "get" #[toJS name] (Option String)
/-- The body as text. A body is read once. -/
def text (r : Response) : Async String := Raw.responseText r
/-- The body parsed as JSON. -/
def json (r : Response) : Async Data := Raw.responseJson r
/-- The body as bytes. -/
def bytes (r : Response) : Async ByteArray := Raw.responseBytes r
end Response

/-- The body of a successful response as text; an HTTP error status is an error. -/
def fetchText (url : String) (init : RequestInit := {}) : Async String := do
  let r ← fetch url init
  let i ← r.info
  unless i.ok do throw (IO.userError s!"fetch {url}: HTTP {i.status} {i.statusText}")
  r.text

/-- The body of a successful response parsed as JSON and converted to `α`. -/
def fetchJson (url : String) (init : RequestInit := {}) (α : Type := Data) [FromJS α] : Async α := do
  let r ← fetch url init
  let i ← r.info
  unless i.ok do throw (IO.userError s!"fetch {url}: HTTP {i.status} {i.statusText}")
  decodeAs α s!"fetch {url}" (← r.json)

namespace AbortController
def create : IO AbortController := Raw.abortController
def signal (c : AbortController) : IO AbortSignal := Raw.abortSignal c
/-- Aborts the requests given this controller's signal. -/
def abort (c : AbortController) (reason : Option String := none) : IO Unit := Raw.abort c reason
end AbortController

/-- A signal that aborts after `ms` milliseconds (`AbortSignal.timeout`). -/
def AbortSignal.timeout (ms : Nat) : IO AbortSignal := Raw.timeoutSignal ms.toFloat

end Lasm.Web
