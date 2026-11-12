/-
The sync server on every JavaScript target: `Sync.sync` (pure Lean, written
against `Sync.Reads`) on a SQL store, served over HTTP (`Server/Web.lean`,
with each platform's own server) and over WebSockets where the platform has
them (Server/NodeWs.lean, Server/EdgeWs.lean).

A sync reads the document's log, computes what to append and the reply,
commits the appended operations in one transaction, and only then sends the
reply: an operation the server acknowledges is stored. If another commit
to the same document came first (the positions are taken), the transaction
rolls back and the sync runs again on the longer log.

HTTP:
- `POST /doc/<name>/sync`: a client's message (Tandem/Wire.lean) → the reply;
- `GET /doc/<name>/poll?cursor=N`: long-poll, for platforms or clients
  without WebSockets: answers as soon as the log is longer than `N`, or after
  `TANDEM_POLL_SECONDS` (default 20) with nothing new;
- `GET /doc/<name>/text`: the document's text;
- `GET /d/<name>`: the editor (the `Lasm.UI` app in `/ui/`, embedded by
  each entry file); `GET /` opens the document `welcome`;
- `GET /health`.
-/
import Lasm.JS
import Server.Assets
import Tandem
import Server.Sql
import Std.Sync.Semaphore
import Std.Async
open Lasm.JS Std.Async

namespace Tandem.Server

/-- A document name: 1 to 64 of `a-z`, `0-9`, `-` and `_`. -/
def validName (s : String) : Bool :=
  let cs := s.toList
  !cs.isEmpty && cs.length ≤ 64 && cs.all fun c => c.isLower || c.isDigit || c == '-' || c == '_'

/-- Everything a request needs besides itself. -/
structure Env where
  db : Sql
  /-- Within a process, syncs that may write take turns (off on Workers). -/
  writers : Option Std.Semaphore
  /-- Sends a message to every live connection of a document (no-op without WebSockets). -/
  push : String → String → IO Unit := fun _ _ => pure ()
  pollSeconds : Nat := 20

/-- Takes turns between writers, within this process. -/
def exclusive {α : Type} (writers : Option Std.Semaphore) (act : Async α) : Async α := do
  match writers with
  | none => act
  | some w =>
    let _ ← await (← w.acquire).result?
    try act finally w.release

/-- One sync of `doc`, committed; at most `fuel` attempts. Returns the reply
and the operations appended (with the log's length before them). -/
def syncOnce (env : Env) (doc : String) (req : Wire.Request) : Nat → Async (Wire.Reply × Nat × List Op)
  | 0 => return (.error "busy", 0, [])
  | fuel + 1 => do
    let rd := reads env.db doc
    let n ← rd.count
    let (added, reply) ← Sync.sync rd req
    if added.isEmpty then return (reply, n, [])
    let committed ← try env.db.batch (commitStatements doc n added); pure true catch _ => pure false
    if committed then return (reply, n, added)
    -- The commit failed, or it committed and then reported an error (its
    -- outcome unknown, as with a lost reply from D1). If the log now holds
    -- exactly these operations at `n`, it committed: answer, and push them.
    -- (Running the sync again would find them known and append nothing; when
    -- this check cannot read the log, `handleSync` pushes them then.)
    let landed ← try (do return (← rd.slice n added.length) == added) catch _ => pure false
    if landed then return (reply, n, added)
    else
      -- Another commit took the positions. Where writers do not take turns
      -- (Workers), many racing writers could keep colliding: wait a random,
      -- growing while before trying again.
      Std.Async.sleep (.ofNat (← IO.rand 1 (5 * (41 - min fuel 40))))
      syncOnce env doc req fuel

/-- A client's message, as text: the reply, as text. New operations are
pushed to the document's other connections. -/
def handleSync (env : Env) (doc : String) (body : String) : Async String := do
  match Wire.decodeRequest body with
  | .error e => return Wire.encodeReply (.error e)
  | .ok req =>
    let (reply, n, added) ← exclusive env.writers (syncOnce env doc req 40)
    -- Some operations of the request were in the log already. Usually an
    -- earlier request of this client appended and pushed them, but one whose
    -- commit succeeded and then reported an error appended them without a
    -- push (found by the deterministic simulation, test/dst.mjs; also when
    -- the retry carries newly typed operations too, #190). So push the reply,
    -- the log from the client's cursor, which holds them (within one chunk):
    -- a tab that is not typing hears of them, one that has them ignores it,
    -- one that is behind catches up.
    let known := added.length < req.ops.length
    let replyPushed ← if known then
        match reply with
        | .ops _ _ (_ :: _) => do env.push doc (Wire.encodeReply reply); pure true
        | _ => pure false
      else pure false
    -- What this request appended, unless the reply just pushed holds it all.
    let covered := match reply with
      | .ops start stop _ => replyPushed && start ≤ n && n + added.length ≤ stop
      | .error _ => false
    if !added.isEmpty && !covered then
      env.push doc (Wire.encodeReply (.ops n (n + added.length) added))
    return Wire.encodeReply reply

/-- Long-poll: the log from `cursor` as soon as it is longer, or nothing new. -/
def poll (env : Env) (doc : String) (cursor : Nat) : Async String := do
  let rd := reads env.db doc
  -- Bounded by the clock, not by a number of steps: under load each check
  -- takes longer, and the poll must still answer in time.
  let deadline := (← IO.monoMsNow) + env.pollSeconds * 1000
  while (← IO.monoMsNow) < deadline do
    if (← rd.count) > cursor then break
    Std.Async.sleep 200
  let (_, reply) ← Sync.sync rd { cursor, ops := [] }
  return Wire.encodeReply reply

/-- The document's text, from its whole log. -/
def textOf (env : Env) (doc : String) : Async String := do
  let rd := reads env.db doc
  let mut all : Array Op := #[]
  repeat
    let ops ← rd.slice all.size Sync.chunk
    all := all ++ ops.toArray
    if ops.length < Sync.chunk then break
  return (Doc.empty.applyMany all.toList).text

def textReply (status : UInt16) (body : String) : Web.Response :=
  { status, headers := #[("content-type", "text/plain; charset=utf-8"), ("cache-control", "no-store")],
    body := body.toUTF8 }

/-- The largest message body accepted (bytes). -/
def maxBody : Nat := 1048576

/-- Escapes text for HTML. -/
def html (s : String) : String :=
  s.foldl (fun acc c => acc ++ match c with
    | '<' => "&lt;" | '>' => "&gt;" | '&' => "&amp;" | '"' => "&quot;" | '\'' => "&#39;" | c => c.toString) ""

/-- The editor's page: the browser app mounted with the document's name. -/
def page (name : String) : String :=
  "<!doctype html><html lang=\"en\"><head><meta charset=\"utf-8\">" ++
  "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">" ++
  s!"<title>{html name} · Tandem</title><style>" ++
  "body{margin:0;font:16px/1.5 system-ui,sans-serif;background:#fafaf7;color:#222}" ++
  ".tandem{max-width:52rem;margin:0 auto;padding:1rem;display:flex;flex-direction:column;height:100vh;box-sizing:border-box}" ++
  ".tandem header{display:flex;gap:1rem;align-items:baseline;flex-wrap:wrap}.tandem h1{font-size:1.2rem;margin:0}" ++
  ".tandem .doc{margin:0;font-weight:600}#tandem-status{margin:0 0 0 auto;color:#666;font-size:.9rem}" ++
  "#tandem-status[data-offline=true]{color:#a40}" ++
  "#tandem-editor{flex:1;margin-top:.75rem;padding:.75rem;font:15px/1.5 ui-monospace,monospace;border:1px solid #ccc;border-radius:6px;resize:none}" ++
  "</style></head><body>" ++
  "<div data-lasm-app data-lasm-flags=\"" ++ html ("{\"doc\":\"" ++ name ++ "\"}") ++ "\"></div>" ++
  "<noscript><p>The editor needs JavaScript. The text is at <a href=\"/doc/" ++ html name ++ "/text\">/doc/" ++
  html name ++ "/text</a>.</p></noscript>" ++
  "<script type=\"module\" src=\"/ui/app.js\"></script></body></html>"

def pageReply (name : String) : Web.Response :=
  { status := 200, body := (page name).toUTF8,
    headers := #[("content-type", "text/html; charset=utf-8"), ("cache-control", "no-store"),
      ("content-security-policy", "default-src 'self'; script-src 'self' 'wasm-unsafe-eval'; " ++
        "connect-src 'self' ws: wss:; style-src 'self' 'unsafe-inline'; frame-ancestors 'none'; base-uri 'none'"),
      ("x-content-type-options", "nosniff")] }

/-- One HTTP request. -/
def serveRequest (env : Env) (req : Web.Request) : Async Web.Response := do
  match req.method, req.segments with
  | "GET", ["health"] => return textReply 200 "ok\n"
  | "POST", ["doc", name, "sync"] =>
    if !validName name then return textReply 404 "no such document\n"
    if req.body.size > maxBody then return textReply 413 (Wire.encodeReply (.error "too large"))
    match String.fromUTF8? req.body with
    | none => return textReply 400 (Wire.encodeReply (.error "not UTF-8"))
    | some body => return textReply 200 (← handleSync env name body)
  | "GET", ["doc", name, "poll"] =>
    if !validName name then return textReply 404 "no such document\n"
    match (req.queryParam? "cursor").bind String.toNat? with
    | some c => return textReply 200 (← poll env name c)
    | none => return textReply 400 (Wire.encodeReply (.error "bad cursor"))
  | "GET", ["doc", name, "text"] =>
    if !validName name then return textReply 404 "no such document\n"
    return textReply 200 (← textOf env name)
  | "GET", ["d", name] =>
    if !validName name then return textReply 404 "no such document\n"
    return pageReply name
  | "GET", [] => return { status := 303, headers := #[("location", "/d/welcome")] }
  | _, _ => return textReply 404 "not found\n"

/-- The handler, with errors answered (and logged) instead of thrown. -/
def handler (env : Env) (req : Web.Request) : Async Web.Response := do
  try serveRequest env req
  catch e =>
    IO.eprintln s!"tandem: {e}"
    return textReply 503 (Wire.encodeReply (.error "unavailable"))

end Tandem.Server

namespace Tandem.Server

/-- The live connections of every document: an id and a way to send it a
text message. -/
abbrev Hub := IO.Ref (Std.HashMap String (Array (Nat × (String → IO Unit))))

def Hub.new : IO Hub := IO.mkRef {}

/-- Adds a connection to `doc`; returns its id. -/
def Hub.join (hub : Hub) (counter : IO.Ref Nat) (doc : String) (send : String → IO Unit) : IO Nat := do
  let id ← counter.modifyGet fun n => (n, n + 1)
  hub.modify fun m => m.insert doc ((m.getD doc #[]).push (id, send))
  return id

def Hub.leave (hub : Hub) (doc : String) (id : Nat) : IO Unit :=
  hub.modify fun m =>
    let rest := (m.getD doc #[]).filter (·.1 != id)
    if rest.isEmpty then m.erase doc else m.insert doc rest

/-- Sends `msg` to every connection of `doc` (a closed one is skipped). -/
def Hub.push (hub : Hub) (doc : String) (msg : String) : IO Unit := do
  for (_, send) in (← hub.get).getD doc #[] do
    try send msg catch _ => pure ()

/-- A WebSocket message from a connection of `doc`: a sync; the reply goes back on it. -/
def onMessage (env : Env) (doc : String) (data : Data) (send : String → IO Unit) : Async Unit := do
  let text := match data with
    | .string s => some s
    | .bytes b => String.fromUTF8? b
    | _ => none
  match text with
  | none => send (Wire.encodeReply (.error "not UTF-8"))
  | some t =>
    if t.utf8ByteSize > maxBody then send (Wire.encodeReply (.error "too large"))
    else send (← handler' t)
where
  handler' (t : String) : Async String := do
    try handleSync env doc t
    catch e =>
      IO.eprintln s!"tandem: {e}"
      return Wire.encodeReply (.error "unavailable")

/-- The document a WebSocket upgrade asks for: `/doc/<name>/ws`. -/
def wsDoc (url : String) : Option String :=
  match ({ method := "GET", url : Web.Request }).segments with
  | ["doc", name, "ws"] => if validName name then some name else none
  | _ => none

end Tandem.Server
