/-
The editor in the browser: a `Lasm.UI` app around one `Tandem.Replica`.

- The text area is the replica's text. Every `input` event carries the
  area's new value; `Doc.edit` turns the change into operations
  (`Spec.edit_yields_text`: the replica then shows exactly that value).
- A sync (`POST /doc/<name>/sync`) sends the operations not yet
  acknowledged; one is in flight at a time, and another follows while any
  remain. A failed sync is retried every two seconds: the editor works
  offline, and merges when the network comes back.
- Other people's operations arrive over a WebSocket (`/doc/<name>/ws`) as
  pushes, or, where the server has no WebSockets (Workers), by long-poll.
- The replica (its operations, the pending ones and the cursor) is saved in
  `localStorage`, so a reload while offline loses nothing. Each page load
  takes a new random replica number, so two tabs never create the same id.
- When remote text arrives, the caret stays beside the character it was
  beside.

The app writes the text area's value itself (`Cmd.io`), with the selection,
rather than through a `value` property in the view, so that the caret is
set in the same step as the text.
-/
import Lasm.UI
import Lasm.JS.Json
import Lasm.Web.WebSocket
import Tandem
open Lean Lasm.UI Lasm.JS Tandem

namespace Tandem.Ui

/-- How the editor hears about other people's operations. -/
inductive Live where
  | connecting
  | socket
  | poll
  deriving BEq, Inhabited

structure Model where
  doc : String
  rp : Replica := { replica := 0 }
  /-- The replica number is chosen and the saved state loaded. -/
  ready : Bool := false
  /-- The number of pending operations the sync in flight carries. -/
  inflight : Option Nat := none
  /-- The last sync failed: the server is unreachable. -/
  offline : Bool := false
  live : Live := .connecting
  /-- WebSocket attempts that failed before opening. -/
  wsFailures : Nat := 0
  /-- A long-poll is waiting. -/
  polling : Bool := false
  /-- What the text area shows, and its selection. -/
  text : List Char := []
  sel : Nat × Nat := (0, 0)
  /-- The saved state is out of date. -/
  dirty : Bool := false
  deriving Inhabited

inductive Msg where
  | loaded (saved : Option String)
  | gotReplica (r : Nat)
  | input (value : String) (start stop : Nat)
  | select (start stop : Nat)
  | syncNow
  | synced (sent : Nat) (reply : Except String String)
  | pushed (text : String)
  | wsOpen
  | wsClosed (opened : Bool)
  | reconnect
  | polled (reply : Except String String)
  | online
  | save

/-! Saving the replica: `tandem 1`, `state <replica> <cursor> <pending>`, then
the log's operations the replica has applied and its pending ones, one per
line (the pending ones last). -/

def storageKey (doc : String) : String := s!"tandem:{doc}"

def encodeState (rp : Replica) : String :=
  let pending := rp.pending
  let known := (rp.doc.nodes.map Op.ins ++ rp.doc.dels.map Op.del).filter (· ∉ pending)
  s!"tandem 1\nstate {rp.cursor} {pending.length}\n" ++
    String.join ((known ++ pending).map (Wire.encodeOp · ++ "\n"))

/-- The saved replica (with replica number `r`), if the text is one. -/
def decodeState (r : Nat) (text : String) : Option Replica :=
  match Wire.lines text with
  | first :: head :: rest =>
    if first ≠ Wire.magic then none else
    match Wire.splitBy ' ' head with
    | [['s', 't', 'a', 't', 'e'], c, p] =>
      match Wire.num? c, Wire.num? p with
      | some cursor, some np =>
        let ops := rest.filterMap Wire.decodeOp
        if ops.length != rest.length || np > ops.length then none
        else some { replica := r, doc := Doc.empty.applyMany ops, pending := ops.drop (ops.length - np), cursor }
      | _, _ => none
    | _ => none
  | _ => none

/-! The caret: kept beside the same character -/

/-- The id of the visible character before position `i` (none at the start). -/
def anchorAt (d : Doc) (i : Nat) : Option Id :=
  if i == 0 then none else (Doc.nth? d.visible (i - 1)).map (·.id)

/-- The position right after the character `a` (or after the visible
characters before it, if it was deleted). -/
def positionAfter (d : Doc) (a : Option Id) : Nat :=
  match a with
  | none => 0
  | some _ => go d.seq 0
where
  go : List Node → Nat → Nat
    | [], n => n
    | x :: xs, n =>
      let n' := if d.deleted x.id then n else n + 1
      if some x.id = a then n' else go xs n'

/-! Effects -/

def editorId : String := "tandem-editor"

/-- Writes the text area's value and selection. -/
def showText (text : List Char) (sel : Nat × Nat) : Cmd Msg :=
  Cmd.io fun _ => do
    let doc ← (← global).get "document"
    match ← doc.callMethod "getElementById" #[toJS editorId] Data with
    | .ref el _ =>
      el.set "value" (String.ofList text)
      let _ : Data ← el.callMethod "setSelectionRange" #[toJS sel.1, toJS sel.2] Data
    | _ => pure ()

/-- `ws:` or `wss:` URL of the document's socket, from the page's location. -/
def connectSocket (doc : String) : Cmd Msg :=
  Cmd.io fun dispatch => do
    let loc ← (← global).get "location"
    let protocol ← loc.get "protocol" String
    let host ← loc.get "host" String
    let scheme := if protocol == "https:" then "wss:" else "ws:"
    let opened ← IO.mkRef false
    try
      let ws ← Lasm.Web.WebSocket.connect s!"{scheme}//{host}/doc/{doc}/ws"
      let _ ← ws.onOpen (do opened.set true; dispatch .wsOpen)
      let _ ← ws.onMessage fun
        | .text t => dispatch (.pushed t)
        | .bytes _ => pure ()
      let _ ← ws.onClose fun _ => do dispatch (.wsClosed (← opened.get))
    catch _ => dispatch (.wsClosed false)

def syncCmd (m : Model) : Model × Cmd Msg :=
  if m.inflight.isSome || !m.ready then (m, .none)
  else
    let req := m.rp.request
    ({ m with inflight := some req.ops.length },
     Http.post s!"/doc/{m.doc}/sync" (Wire.encodeRequest req) (fun r => .synced req.ops.length (r.mapError (·.toString)))
       (contentType := "text/plain"))

def pollCmd (m : Model) : Model × Cmd Msg :=
  if m.polling || m.live != .poll || !m.ready then (m, .none)
  else ({ m with polling := true },
        Http.get s!"/doc/{m.doc}/poll?cursor={m.rp.cursor}" fun r => .polled (r.mapError (·.toString)))

/-- After the replica's document changed from outside: the text area follows,
the caret stays beside its characters, and the state is saved soon. -/
def refresh (before : Model) (m : Model) : Model × Cmd Msg :=
  let text := m.rp.doc.chars
  if text == before.text then ({ m with dirty := true }, Cmd.delay 400 .save)
  else
    let a := anchorAt before.rp.doc before.sel.1
    let b := anchorAt before.rp.doc before.sel.2
    let sel := (positionAfter m.rp.doc a, positionAfter m.rp.doc b)
    ({ m with text, sel, dirty := true }, showText text sel ++ Cmd.delay 400 .save)

/-- Starts what should run and is not running: a sync if anything is pending, a poll. -/
def kick (m : Model) (cmd : Cmd Msg) : Model × Cmd Msg :=
  let (m, c1) := if m.rp.pending.isEmpty then (m, .none) else syncCmd m
  let (m, c2) := pollCmd m
  (m, cmd ++ c1 ++ c2)

def init (doc : String) : Model × Cmd Msg :=
  ({ doc }, Cmd.randomNat 1 281474976710655 .gotReplica)

def update (msg : Msg) (m : Model) : Model × Cmd Msg :=
  match msg with
  | .gotReplica r =>
    ({ m with rp := { m.rp with replica := r } }, Cmd.storageGet (storageKey m.doc) .loaded)
  | .loaded saved =>
    let rp := (saved.bind (decodeState m.rp.replica)).getD m.rp
    let m := { m with rp, ready := true, text := rp.doc.chars }
    let (m, c) := syncCmd m
    (m, showText m.text (0, 0) ++ connectSocket m.doc ++ c)
  | .input value start stop =>
    if !m.ready then (m, .none) else
    let rp := m.rp.edit value.toList
    let m := { m with rp, text := value.toList, sel := (start, stop), dirty := true }
    -- Offline, the retry timer syncs (every two seconds), not every keystroke.
    let (m, c) := if m.offline then (m, .none) else syncCmd m
    (m, c ++ Cmd.delay 400 .save)
  | .select start stop => ({ m with sel := (start, stop) }, .none)
  | .syncNow => kick m .none
  | .synced sent (.ok body) =>
    let m0 := { m with inflight := none }
    match Wire.decodeReply body with
    | .ok reply =>
      let m1 := { m0 with rp := m0.rp.onReply sent reply, offline := false }
      let (m2, c) := refresh m m1
      let more := !m2.rp.pending.isEmpty || Replica.full reply
      if more then let (m3, c2) := syncCmd m2; (m3, c ++ c2) else (m2, c)
    | .error _ => ({ m0 with offline := true }, Cmd.delay 2000 .syncNow)
  | .synced _ (.error _) => ({ m with inflight := none, offline := true }, Cmd.delay 2000 .syncNow)
  | .pushed text =>
    match Wire.decodeReply text with
    | .ok reply =>
      let rp := m.rp.onPush reply
      if rp.cursor == m.rp.cursor then
        -- Not the next part of the log: catch up with a sync.
        kick m (syncCmd m).2
      else refresh m { m with rp }
    | .error _ => (m, .none)
  | .wsOpen =>
    let (m, c) := syncCmd { m with live := .socket, wsFailures := 0, offline := false }
    (m, c)
  | .wsClosed opened =>
    let failures := if opened then 0 else m.wsFailures + 1
    -- Twice refused before opening: the server has no WebSockets; long-poll.
    if failures ≥ 2 then kick { m with live := .poll, wsFailures := failures } .none
    else ({ m with live := .connecting, wsFailures := failures }, Cmd.delay 2000 .reconnect)
  | .reconnect => (m, connectSocket m.doc)
  | .polled (.ok body) =>
    let m0 := { m with polling := false, offline := false }
    match Wire.decodeReply body with
    | .ok reply =>
      let (m1, c) := refresh m { m0 with rp := m0.rp.onPush reply }
      kick m1 c
    | .error _ => (m0, Cmd.delay 2000 .syncNow)
  | .polled (.error _) => ({ m with polling := false, offline := true }, Cmd.delay 2000 .syncNow)
  | .online => kick { m with offline := false } .none
  | .save =>
    if m.dirty then ({ m with dirty := false }, Cmd.storageSet (storageKey m.doc) (encodeState m.rp)) else (m, .none)

/-! The view -/

def status (m : Model) : String :=
  if !m.ready then "Loading…"
  else if m.offline then s!"Offline: {m.rp.pending.length} edits waiting"
  else if !m.rp.pending.isEmpty then s!"Saving {m.rp.pending.length} edits…"
  else match m.live with
    | .socket => "Saved · live"
    | .poll => "Saved · live (polling)"
    | .connecting => "Saved"

def selection : Decoder (Nat × Nat) :=
  Decoder.map2 (fun a b => (a, b))
    (Decoder.field ["target", "selectionStart"] fun | .num n => some n.toUInt64.toNat | _ => none)
    (Decoder.field ["target", "selectionEnd"] fun | .num n => some n.toUInt64.toNat | _ => none)

def view (m : Model) : Html Msg :=
  main_ [class_ "tandem"] [
    header [] [
      h1 [] [text "Tandem"],
      p [class_ "doc"] [text m.doc],
      p [id_ "tandem-status", attr "role" "status", attr "data-pending" (toString m.rp.pending.length),
         attr "data-offline" (if m.offline then "true" else "false")] [text (status m)]],
    textarea [id_ editorId, attr "spellcheck" "false", attr "aria-label" "Document",
      on "input" (Decoder.map2 (fun v (a, b) => Msg.input v a b) Decoder.targetValue selection),
      on "select" (selection.map fun (a, b) => Msg.select a b),
      on "keyup" (selection.map fun (a, b) => Msg.select a b),
      on "click" (selection.map fun (a, b) => Msg.select a b)] []]

def subscriptions (_ : Model) : Subs Msg :=
  Subs.on .window "online" (Decoder.succeed .online)

end Tandem.Ui
