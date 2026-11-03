/-
The sync server on every JavaScript target: `Sync.sync` (pure Lean, written
against `Sync.Reads`) on a SQL store, served over HTTP with `Lasm.Fetch`,
and over WebSockets where the platform has them (Server/NodeWs.lean,
Server/BunWs.lean, Server/DenoWs.lean).

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
- `GET /health`.
-/
import Lasm.Fetch
import Lasm.Fetch.Assets
import Lasm.JS
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
    else syncOnce env doc req fuel

/-- A client's message, as text: the reply, as text. New operations are
pushed to the document's other connections. -/
def handleSync (env : Env) (doc : String) (body : String) : Async String := do
  match Wire.decodeRequest body with
  | .error e => return Wire.encodeReply (.error e)
  | .ok req =>
    let (reply, n, added) ← exclusive env.writers (syncOnce env doc req 20)
    unless added.isEmpty do
      env.push doc (Wire.encodeReply (.ops n (n + added.length) added))
    return Wire.encodeReply reply

/-- Long-poll: the log from `cursor` as soon as it is longer, or nothing new. -/
def poll (env : Env) (doc : String) (cursor : Nat) : Async String := do
  let rd := reads env.db doc
  let steps := env.pollSeconds * 5
  let mut i := 0
  while i < steps do
    if (← rd.count) > cursor then break
    Std.Async.sleep 200
    i := i + 1
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

def textReply (status : UInt16) (body : String) : Lasm.Fetch.Response :=
  { status, headers := #[("content-type", "text/plain; charset=utf-8"), ("cache-control", "no-store")],
    body := body.toUTF8 }

/-- The largest message body accepted (bytes). -/
def maxBody : Nat := 1048576

/-- One HTTP request. -/
def serveRequest (env : Env) (req : Lasm.Fetch.Request) : Async Lasm.Fetch.Response := do
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
  | "GET", [] => return textReply 200 "Tandem sync server\n"
  | _, _ => return textReply 404 "not found\n"

/-- The handler, with errors answered (and logged) instead of thrown. -/
def handler (env : Env) (req : Lasm.Fetch.Request) : Async Lasm.Fetch.Response := do
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
  match ({ method := "GET", url : Lasm.Fetch.Request }).segments with
  | ["doc", name, "ws"] => if validName name then some name else none
  | _ => none

end Tandem.Server
