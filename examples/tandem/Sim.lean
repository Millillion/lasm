/- The deterministic simulation of Tandem (test/dst.mjs, `npm run test:dst`):
`sim WORLD.mjs [options]`.

Everything that runs here is Tandem's own code, compiled by Lasm: the
browser editor's state machine (`Tandem.Ui.update`, with its replica, its
syncs, its retries, its WebSocket and long-poll handling and its saved
state), and the sync server's HTTP handler (`Tandem.Server.handler`, with
`Sync.sync` and the SQL layer). What is simulated is everything around them,
by the world in test/dst/world.mjs (built on scripts/sim, the harness every
example app's simulation uses): the clock, the network between the browsers
and the server (latency, reordering, drops, partitions, closed sockets, a
crashed server), the server's SQLite database (failed reads and commits,
commits whose outcome is unknown, crash-restarts), each browser's
`localStorage`, page reloads, and the users typing.

The world decides everything from one seed; this program asks it for the
next event, runs the code the event reaches, and hands back what that code
asked for: an `update`'s commands become timers, HTTP requests, storage
calls and random bytes in the world, and a server reply becomes a response
and pushes on the simulated network. So a failing run replays from its seed.

Checked here, on every step: an edit yields the typed text
(`Spec.edit_yields_text`); every operation a client stops treating as
pending is one the server has (the world checks it: `Spec.ack_stored`, for
the browser's whole state machine). At checkpoints: the server's log applied
in a random order with duplicates gives the same document as in log order,
one at a time or in bulk (`Spec.converge`, `ops_commute`, `ops_idempotent`,
`apply_many`), with no character twice (`Spec.no_duplicates`). At the end,
after the network heals: every client has the server's document. -/
import Tandem
import Server.App
import Frontend.Ui
import Lasm.JS
import Std.Data.HashMap
import Std.Data.HashSet
open Lasm.JS Tandem

namespace Tandem.Sim

def str (d : Data) (k : String) : String :=
  match d.field k with
  | .string s => s
  | _ => ""

def nat (d : Data) (k : String) : Nat :=
  match d.field k with
  | .number n => n.toUInt64.toNat
  | _ => 0

def flt (d : Data) (k : String) : Float :=
  match d.field k with
  | .number n => n
  | _ => 0

def bool (d : Data) (k : String) : Bool :=
  match d.field k with
  | .bool b => b
  | _ => false

def nats (d : Data) (k : String) : Array Nat :=
  match d.field k with
  | .array xs => xs.map fun
    | .number n => n.toUInt64.toNat
    | _ => 0
  | _ => #[]

/-- One browser tab: its page load (`gen`, from the world) and its model. -/
structure Client where
  gen : Nat
  model : Tandem.Ui.Model

structure St where
  clients : Std.HashMap Nat Client := {}
  /-- What to do with the response of each HTTP request in flight. -/
  handlers : Std.HashMap Nat (Except String Lasm.UI.Http.Response → Tandem.Ui.Msg) := {}
  /-- The message of each timer. -/
  timers : Std.HashMap Nat Tandem.Ui.Msg := {}
  token : Nat := 0

def call (w : Value) (name : String) (args : Array Data) : IO Unit := do
  let _ ← w.callMethod name args Data

def fresh (st : IO.Ref St) : IO Nat :=
  st.modifyGet fun s => (s.token, { s with token := s.token + 1 })

/-- The server's database: the world's simulated SQLite, as `Sql`. -/
def simSql (s : Value) : Tandem.Server.Sql where
  all sql params := do
    let rows ← s.callMethod "all" #[toJS sql, .array params] (Array Data)
    return rows
  run sql params := do
    let _ ← s.callMethod "run" #[toJS sql, .array params] Data
  batch stmts := do
    let _ ← s.callMethod "batch" #[.array (stmts.map fun (q, p) => Data.array #[toJS q, .array p])] Data

/-- Performs an `update`'s commands in the world; returns the messages to
deliver at once (after this update, as the browser runtime does). -/
def perform (w : Value) (st : IO.Ref St) (c gen : Nat) (cmd : Lasm.UI.Cmd Tandem.Ui.Msg) : IO (List Tandem.Ui.Msg) := do
  let mut out : Array Tandem.Ui.Msg := #[]
  for e in cmd.effects do
    match e with
    | .msg m => out := out.push m
    | .delay ms m =>
      let t ← fresh st
      st.modify fun s => { s with timers := s.timers.insert t m }
      call w "timer" #[toJS c, toJS gen, toJS t, toJS ms]
    | .http req h =>
      let t ← fresh st
      st.modify fun s => { s with handlers := s.handlers.insert t h }
      call w "http" #[toJS c, toJS gen, toJS t, toJS req.method, toJS req.url, toJS (req.body.getD "")]
    | .randomBytes n h =>
      let b ← w.callMethod "random" #[toJS c, toJS n] ByteArray
      out := out.push (h b)
    | .now h =>
      let t ← w.callMethod "now" #[] Float
      out := out.push (h t)
    | .storageSet _ k v => call w "kvSet" #[toJS c, toJS k, toJS v]
    | .storageRemove _ k => call w "kvRemove" #[toJS c, toJS k]
    | .storageGet _ k h =>
      let v ← w.callMethod "kvGet" #[toJS c, toJS k] (Option String)
      out := out.push (h v)
    | _ => pure ()   -- the DOM (`Cmd.io`: the text area), focus, title: not simulated
  return out.toList

/-- The messages after which the editor opens a WebSocket (in `Cmd.io`,
which the world cannot see, so it is told). -/
def connects : Tandem.Ui.Msg → Bool
  | .loaded _ => true
  | .reconnect => true
  | _ => false

/-- One `update` of client `c`. -/
def step (w : Value) (st : IO.Ref St) (c : Nat) (msg : Tandem.Ui.Msg) : IO (List Tandem.Ui.Msg) := do
  let some cl := (← st.get).clients[c]? | return []
  let before := cl.model
  let (after, cmd) := Tandem.Ui.update msg before
  st.modify fun s => { s with clients := s.clients.insert c { cl with model := after } }
  -- Operations that left `pending`: the client now treats them as acknowledged.
  let gone := before.rp.pending.filter fun o => !after.rp.pending.contains o
  unless gone.isEmpty do
    call w "acked" #[toJS c, toJS (gone.map Wire.encodeOp)]
  if connects msg then call w "wsConnect" #[toJS c, toJS cl.gen]
  perform w st c cl.gen cmd

/-- Delivers messages to client `c`, and the messages their commands send. -/
def dispatch (w : Value) (st : IO.Ref St) (c : Nat) (msgs : List Tandem.Ui.Msg) : IO Unit := do
  let mut queue := msgs
  let mut fuel := 100000
  while fuel > 0 do
    match queue with
    | [] => break
    | m :: rest =>
      fuel := fuel - 1
      let more ← step w st c m
      queue := rest ++ more

/-- A page load: a new tab state, from `init`. -/
def start (w : Value) (st : IO.Ref St) (doc : String) (c gen : Nat) : IO Unit := do
  let (m, cmd) := Tandem.Ui.init doc
  st.modify fun s => { s with clients := s.clients.insert c { gen, model := m } }
  let msgs ← perform w st c gen cmd
  dispatch w st c msgs

/-- The user edits the text area: replaces `del` characters at a position
(a fraction of the text's length) with `ins`. -/
def input (w : Value) (st : IO.Ref St) (c gen : Nat) (ev : Data) : IO Unit := do
  let some cl := (← st.get).clients[c]? | return
  if cl.gen != gen || !cl.model.ready then return
  let t := cl.model.text
  let pos := min t.length (flt ev "pos" * (t.length + 1).toFloat).toUInt64.toNat
  let del := min (nat ev "del") (t.length - pos)
  let ins := (str ev "ins").toList
  let value := t.take pos ++ ins ++ t.drop (pos + del)
  let caret := pos + ins.length
  dispatch w st c [.input (String.ofList value) caret caret]
  let some cl' := (← st.get).clients[c]? | return
  if cl'.model.rp.doc.chars != value || cl'.model.text != value then
    call w "fail" #[toJS s!"client {c}: after an edit the replica shows {cl'.model.rp.doc.chars.length} characters, not the {value.length} typed (Spec.edit_yields_text)"]

/-- Every operation of the document's log. -/
def allOps (rd : Sync.Reads Async) : Async (List Op) := do
  let mut all : Array Op := #[]
  repeat
    let ops ← rd.slice all.size Sync.chunk
    all := all ++ ops.toArray
    if ops.length < Sync.chunk then break
  return all.toList

def deliverTo (w : Value) (st : IO.Ref St) (ev : Data) (msg : Tandem.Ui.Msg) : IO Unit := do
  let c := nat ev "c"
  let some cl := (← st.get).clients[c]? | return
  if cl.gen == nat ev "gen" then dispatch w st c [msg]

/-- One event of the world. -/
def handle (w : Value) (st : IO.Ref St) (db : Tandem.Server.Sql) (doc : String) (k : String) (ev : Data) : Async Unit := do
  match k with
  | "start" => start w st doc (nat ev "c") (nat ev "gen")
  | "crash" => st.modify fun s => { s with clients := s.clients.erase (nat ev "c") }
  | "input" => input w st (nat ev "c") (nat ev "gen") ev
  | "http" =>
    let t := nat ev "token"
    let some h := (← st.get).handlers[t]? | return
    st.modify fun s => { s with handlers := s.handlers.erase t }
    let r : Except String Lasm.UI.Http.Response :=
      if bool ev "ok" then .ok { status := nat ev "status", body := str ev "body" } else .error "network error"
    deliverTo w st ev (h r)
  | "timer" =>
    let t := nat ev "token"
    let some m := (← st.get).timers[t]? | return
    st.modify fun s => { s with timers := s.timers.erase t }
    deliverTo w st ev m
  | "push" => deliverTo w st ev (.pushed (str ev "text"))
  | "wsOpen" => deliverTo w st ev .wsOpen
  | "wsClosed" => deliverTo w st ev (.wsClosed (bool ev "opened"))
  | "online" => deliverTo w st ev .online
  | "request" =>
    -- The server: its own HTTP handler, on the simulated database. A
    -- long-poll arrives here only when it should be answered (the world
    -- parks it until the log grows or it times out), so it is answered at once.
    let pushes ← IO.mkRef (#[] : Array String)
    let env : Tandem.Server.Env := { db, writers := none, push := fun _ m => pushes.modify (·.push m), pollSeconds := 0 }
    let resp ← Tandem.Server.handler env { method := str ev "method", url := str ev "url", body := (str ev "body").toUTF8 }
    call w "reply" #[toJS (nat ev "id"), toJS resp.status.toNat, toJS ((String.fromUTF8? resp.body).getD ""), toJS (← pushes.get)]
  | "laws" =>
    let ops := (← allOps (Tandem.Server.reads db doc)).toArray
    let order := (nats ev "order").toList.filterMap (ops[·]?)
    let d1 := Doc.empty.applyAll ops.toList
    let d2 := Doc.empty.applyAll order
    let d3 := Doc.empty.applyMany order
    let ids := d1.seq.map (·.id)
    call w "laws" #[obj [("ops", toJS ops.size), ("converge", toJS (d1 == d2)), ("applyMany", toJS (d2 == d3)),
      ("text", toJS (d1.text == d3.text)), ("noDuplicates", toJS ((Std.HashSet.ofList ids).size == ids.length))]]
  | "check" =>
    let ops ← allOps (Tandem.Server.reads db doc)
    let server := Doc.empty.applyMany ops
    let mut rows : Array Data := #[]
    for (c, cl) in (← st.get).clients.toList do
      let rp := cl.model.rp
      rows := rows.push (obj [("c", toJS c), ("ready", toJS cl.model.ready), ("text", toJS rp.text),
        ("pending", toJS rp.pending.length), ("same", toJS (rp.doc == server)), ("offline", toJS cl.model.offline),
        ("cursor", toJS rp.cursor), ("shown", toJS (cl.model.text == rp.doc.chars))])
    call w "report" #[obj [("server", toJS server.text), ("ops", toJS ops.length), ("clients", .array rows)]]
  | _ => call w "fail" #[toJS s!"unknown event {k}"]

/-- One seed: events until the world says `end`. -/
def runSeed (w : Value) (doc : String) : Async Unit := do
  let db := simSql (← w.callMethod "store" #[] Value)
  Tandem.Server.migrate db
  let st ← IO.mkRef ({} : St)
  repeat
    let ev ← w.callMethod "next" #[] Data
    let k := str ev "k"
    if k == "end" then break
    try handle w st db doc k ev
    catch e => call w "fail" #[toJS s!"{k}: the Lean side threw: {e}"]

end Tandem.Sim

def main (args : List String) : IO UInt32 := do
  let some path := args.head? | IO.eprintln "usage: sim WORLD.mjs [options]"; return 2
  let w ← require path
  let go : Async Unit := do
    repeat
      let cfg ← w.callMethod "begin" #[] Data
      match cfg with
      | .object _ => Tandem.Sim.runSeed w (Tandem.Sim.str cfg "doc")
      | _ => break
  go.block
  let code ← w.callMethod "exitCode" #[] Nat
  return code.toUInt32
