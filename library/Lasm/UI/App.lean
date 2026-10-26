/-
The Elm architecture in the browser: `init`, a pure `update`, a pure `view`
and `subscriptions`. `App.run` connects the app to the `lasm:ui-dom` applier
(src/browser/ui-dom.mjs) of the element it is mounted on. Events reach Lean as
one synchronous call each (the applier encodes the fields the handler's
decoder declared); messages update the model; on the next animation frame
Lean renders the view, diffs it against the live tree and returns one binary
patch, which the applier applies. Commands and subscriptions are performed
here through the same module.
-/
import Std.Data.HashMap
import Lasm.JS.Core
import Lasm.UI.Diff
import Lasm.UI.Encode
import Lasm.UI.Cmd
import Lasm.UI.Sub
import Lasm.UI.Url

namespace Lasm.UI
open Lasm.JS

/-- A browser app. `Flags` come from `mount(element, { flags })` (decoded with
`FromJS`); `init` also gets the page URL. -/
structure App (Flags Model Msg : Type) where
  init : Flags → Url → Model × Cmd Msg
  update : Msg → Model → Model × Cmd Msg
  view : Model → Html Msg
  subscriptions : Model → Sub Msg := fun _ => .none
  /-- Single-page navigation: when set, clicks on same-origin links inside the
  app, `Cmd.pushUrl`/`replaceUrl` and the back and forward buttons change the
  URL without loading a page and deliver this message. -/
  onUrlChange : Option (Url → Msg) := none
  /-- Messages from `app.send(value)` in JavaScript. -/
  receive : Option (Data → Option Msg) := none

/-- An app with no effects: a model, a pure update and a view. -/
def App.sandbox (init : Model) (update : Msg → Model → Model) (view : Model → Html Msg) : App Unit Model Msg where
  init _ _ := (init, .none)
  update msg m := (update msg m, .none)
  view := view

/-- An app with commands and subscriptions but no routing. -/
def App.element (init : Flags → Model × Cmd Msg) (update : Msg → Model → Model × Cmd Msg)
    (view : Model → Html Msg) (subscriptions : Model → Sub Msg := fun _ => .none) : App Flags Model Msg where
  init flags _ := init flags
  update := update
  view := view
  subscriptions := subscriptions

namespace Runtime

structure State (Model Msg : Type) where
  model : Model
  live : List (Live Msg) := []
  next : Nat := 1
  tables : Encode.Tables := {}
  dirty : Bool := true
  /-- A frame is requested from the applier. -/
  scheduled : Bool := false
  queue : Array Msg := #[]
  busy : Bool := false
  subs : Std.HashMap SubSpec Nat := {}
  handlers : Std.HashMap Nat (List (Array Data → Option Msg)) := {}
  nextSub : Nat := 1

/-- The live nodes along a path of ids from the root. -/
def findPath (live : List (Live Msg)) : List Nat → Array (Live Msg) → Array (Live Msg)
  | [], acc => acc
  | i :: rest, acc =>
    match live.find? (·.id == i) with
    | some n@(.elem _ _ _ _ _ cs) => findPath cs rest (acc.push n)
    | some n => acc.push n
    | none => acc

/-- The handler a node has for an event (the last one wins). -/
def handlerFor (event : String) : List (Attr Msg) → Option (List EvVal → Option Msg)
  | [] => none
  | a :: rest =>
    match handlerFor event rest with
    | some h => some h
    | none => match a with
      | .on l h => if l.event == event then some h else none
      | _ => none

def specData : SubSpec → Data
  | .every ms => .array #[.string "every", toJS ms]
  | .frame => .array #[.string "frame"]
  | .window ev paths pd sp => .array #[.string "window", .string ev, toJS (paths.map List.toArray).toArray, .bool pd, .bool sp]
  | .document ev paths pd sp => .array #[.string "document", .string ev, toJS (paths.map List.toArray).toArray, .bool pd, .bool sp]
  | .port name => .array #[.string "port", .string name]

def storageName : Storage → String
  | .local => "local"
  | .session => "session"

/-- What the runtime's functions share. -/
structure Ctx (Flags Model Msg : Type) where
  app : App Flags Model Msg
  ui : Value
  ref : IO.Ref (State Model Msg)

variable {Flags Model Msg : Type}

def report (c : Ctx Flags Model Msg) (what : String) (e : IO.Error) : IO Unit := do
  discard <| (c.ui.callMethod "error" #[.string s!"{what}: {e}"] Unit).toBaseIO

/-- Requests a frame now if the model changed and none is requested; true if
the caller (the applier, which made this call) should schedule it. -/
def takeFrame (c : Ctx Flags Model Msg) : IO Bool := do
  let s ← c.ref.get
  if s.dirty && !s.scheduled then
    c.ref.set { s with scheduled := true }
    return true
  return false

def requestFrame (c : Ctx Flags Model Msg) : IO Unit := do
  if ← takeFrame c then c.ui.callMethod "schedule" #[] Unit

/-- Starts and stops subscriptions so they match `subscriptions model`. -/
def syncSubs (c : Ctx Flags Model Msg) : IO Unit := do
  let s ← c.ref.get
  let items := (c.app.subscriptions s.model).items
  let mut wanted : Std.HashMap SubSpec (List (Array Data → Option Msg)) := {}
  for i in items do
    wanted := wanted.insert i.spec (i.handle :: (wanted.getD i.spec []))
  let mut subs := s.subs
  let mut handlers : Std.HashMap Nat (List (Array Data → Option Msg)) := {}
  let mut nextSub := s.nextSub
  for (spec, sid) in s.subs do
    unless wanted.contains spec do
      subs := subs.erase spec
      c.ui.callMethod "unsub" #[toJS sid] Unit
  for (spec, hs) in wanted do
    match subs[spec]? with
    | some sid => handlers := handlers.insert sid hs.reverse
    | none =>
      let sid := nextSub
      nextSub := nextSub + 1
      subs := subs.insert spec sid
      handlers := handlers.insert sid hs.reverse
      c.ui.callMethod "sub" #[toJS sid, specData spec] Unit
  c.ref.modify fun s => { s with subs, handlers, nextSub }

mutual
/-- Queues `msg` and, unless an update is running, runs `update` on every queued
message, performing their commands, then updates the subscriptions. -/
partial def deliver (c : Ctx Flags Model Msg) (msg : Msg) : IO Unit := do
  c.ref.modify fun s => { s with queue := s.queue.push msg }
  if (← c.ref.get).busy then return
  c.ref.modify fun s => { s with busy := true }
  try
    repeat
      let s ← c.ref.get
      if h : 0 < s.queue.size then
        let m := s.queue[0]
        let (model, cmd) := c.app.update m s.model
        c.ref.set { s with model, queue := s.queue.extract 1 s.queue.size, dirty := true }
        for e in cmd.effects do
          try perform c e catch err => report c "a command failed" err
      else break
    syncSubs c
  finally
    c.ref.modify fun s => { s with busy := false }

/-- Performs one effect through the applier's module. -/
partial def perform (c : Ctx Flags Model Msg) (e : Effect Msg) : IO Unit := do
  let ui := c.ui
  match e with
  | .msg m => deliver c m
  | .delay ms m =>
    let f ← Function.ofSyncFn fun _ => do deliver c m; return .bool (← takeFrame c)
    ui.callMethod "timeout" #[toJS ms, toJS f] Unit
  | .http r h =>
    let f ← Function.ofSyncFn fun args => do
      let res : Except String Http.Response := match args with
        | #[.bool true, status, .string statusText, .array hs, .string body] =>
          .ok { status := (match status with | .number n => n.toUInt64.toNat | _ => 0), statusText, body,
                headers := hs.toList.filterMap fun | .array #[.string k, .string v] => some (k, v) | _ => none }
        | #[.bool false, .string message] => .error message
        | _ => .error "malformed response"
      deliver c (h res)
      return .bool (← takeFrame c)
    ui.callMethod "http" #[.string r.method, .string r.url,
      toJS (r.headers.map fun (k, v) => #[k, v]).toArray, toJS r.body, .string r.credentials, toJS f] Unit
  | .randomBytes n h => deliver c (h (← IO.getRandomBytes n.toUSize))
  | .now h => deliver c (h (← ui.callMethod "now" #[] Float))
  | .navigate u replace => ui.callMethod "navigate" #[.string u, .bool replace] Unit
  | .go n => ui.callMethod "go" #[toJS n] Unit
  | .load u => ui.callMethod "load" #[.string u] Unit
  | .storageSet st k v => ui.callMethod "storageSet" #[.string (storageName st), .string k, .string v] Unit
  | .storageRemove st k => ui.callMethod "storageRemove" #[.string (storageName st), .string k] Unit
  | .storageGet st k h => deliver c (h (← ui.callMethod "storageGet" #[.string (storageName st), .string k] (Option String)))
  | .focus i blur => ui.callMethod "focus" #[.string i, .bool blur] Unit
  | .port name v => ui.callMethod "portOut" #[.string name, v] Unit
  | .title t => ui.callMethod "title" #[.string t] Unit
  | .io run => run fun m => do deliver c m; requestFrame c
end

/-- One frame: the patch from the live tree to the current view (empty if the
model did not change). -/
def frame (c : Ctx Flags Model Msg) : IO ByteArray := do
  let s ← c.ref.get
  if !s.dirty then
    c.ref.set { s with scheduled := false }
    return .empty
  let r := diff s.live [c.app.view s.model] s.next
  let (bytes, tables) := Encode.frame s.tables r.ops
  c.ref.set { s with live := r.live, next := r.next, tables, dirty := false, scheduled := false }
  return bytes

/-- An event from the applier: the ids from the root to the target, the event
type, and for each handler on the way (innermost first) its depth on that path
and its decoder's values. -/
def onEvent (c : Ctx Flags Model Msg) (args : Array Data) : IO Data := do
  let #[path, .string type, .array calls] := args | return .bool false
  let path ← match (FromJS.fromJS path : Except String (Array Nat)) with
    | .ok p => pure p
    | .error _ => return .bool false
  let nodes := findPath (← c.ref.get).live path.toList #[]
  let mut msgs := #[]
  let mut i := 0
  while i + 1 < calls.size do
    if let (.number depth, .array vals) := (calls[i]!, calls[i+1]!) then
      if let some (.elem _ _ _ _ attrs _) := nodes[depth.toUInt64.toNat]? then
        if let some h := handlerFor type attrs then
          if let some m := h (vals.toList.map Sub.evVal) then msgs := msgs.push m
    i := i + 2
  for m in msgs do deliver c m
  return .bool (← takeFrame c)

def onSub (c : Ctx Flags Model Msg) (args : Array Data) : IO Data := do
  let some (Data.number sid) := args[0]? | return .bool false
  let vals : Array Data := match args[1]? with | some (Data.array vs) => vs | _ => #[]
  let hs := (← c.ref.get).handlers.getD sid.toUInt64.toNat []
  for h in hs do
    if let some m := h vals then deliver c m
  return .bool (← takeFrame c)

end Runtime

open Lasm.UI.Runtime in
/-- Runs `app` in the element it was mounted on. This is the program's `main`
(`def main : IO Unit := app.run`); it returns once the first frame is on
screen, and the app then runs on events. -/
def App.run [FromJS Flags] (app : App Flags Model Msg) : IO Unit := do
  let ui ← try require "lasm:ui-dom" catch _ =>
    throw (IO.userError "Lasm.UI apps run in the browser: build with lasm build --target browser and mount the app (docs/UI.md)")
  let options : Data ← ui.callMethod "options" #[] Data
  let flags ← decodeAs Flags "the app's flags" (options.field "flags")
  let url := (match options.field "url" with | .string s => Url.parse s | _ => none).getD {}
  let (model, cmd₀) := app.init flags url
  let c : Ctx Flags Model Msg := { app, ui, ref := ← IO.mkRef { model } }
  let frameFn ← Function.ofSyncFn fun _ => do return .bytes (← frame c)
  let eventFn ← Function.ofSyncFn (onEvent c)
  let subFn ← Function.ofSyncFn (onSub c)
  let urlFn ← Function.ofSyncFn fun args => do
    if let (some f, some (Data.string href)) := (app.onUrlChange, args[0]?) then
      if let some u := Url.parse href then deliver c (f u)
    return .bool (← takeFrame c)
  let receiveFn ← Function.ofSyncFn fun args => do
    if let some f := app.receive then
      if let some m := f (args[0]?.getD .undefined) then deliver c m
    return .bool (← takeFrame c)
  ui.callMethod "connect" #[obj [("frame", toJS frameFn), ("event", toJS eventFn), ("sub", toJS subFn),
    ("url", toJS urlFn), ("receive", toJS receiveFn), ("application", .bool app.onUrlChange.isSome)]] Unit
  -- The first frame, synchronously; then the initial command (its messages
  -- are queued while it runs and delivered after it).
  ui.callMethod "apply" #[.bytes (← frame c)] Unit
  c.ref.modify fun s => { s with busy := true }
  for e in cmd₀.effects do
    try perform c e catch err => report c "a command failed" err
  c.ref.modify fun s => { s with busy := false }
  let s ← c.ref.get
  if h : 0 < s.queue.size then
    let m := s.queue[0]
    c.ref.set { s with queue := s.queue.extract 1 s.queue.size }
    deliver c m
  else syncSubs c
  requestFrame c

end Lasm.UI
