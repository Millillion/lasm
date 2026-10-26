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
import Lasm.JS.Meta
import Lasm.Web.App
import Lasm.UI.Diff
import Lasm.UI.Encode
import Lasm.UI.Cmd
import Lasm.UI.Subs
import Lasm.UI.Url

namespace Lasm.UI
open Lasm.JS

/-- A browser app. `Flags` come from `mount(element, { flags })` (decoded with
`FromJS`); `init` also gets the page URL. -/
structure App (Flags Model Msg : Type) where
  init : Flags → Url → Model × Cmd Msg
  update : Msg → Model → Model × Cmd Msg
  view : Model → Html Msg
  subscriptions : Model → Subs Msg := fun _ => .none
  /-- Single-page navigation: when set, clicks on same-origin links inside the
  app, `Cmd.pushUrl`/`replaceUrl` and the back and forward buttons change the
  URL without loading a page and deliver this message. -/
  onUrlChange : Option (Url → Msg) := none
  /-- Messages from `app.send(value)` in JavaScript (the app `mount` returns). -/
  receive : Option (Data → Option Msg) := none

/-- An app with no effects: a model, a pure update and a view. -/
def App.sandbox (init : Model) (update : Msg → Model → Model) (view : Model → Html Msg) : App Unit Model Msg where
  init _ _ := (init, .none)
  update msg m := (update msg m, .none)
  view := view

/-- An app with commands and subscriptions but no routing. -/
def App.element (init : Flags → Model × Cmd Msg) (update : Msg → Model → Model × Cmd Msg)
    (view : Model → Html Msg) (subscriptions : Model → Subs Msg := fun _ => .none) : App Flags Model Msg where
  init flags _ := init flags
  update := update
  view := view
  subscriptions := subscriptions

namespace Runtime

-- The exports of `lasm:ui-dom` (src/lasm-modules/ui-dom.mjs), per mounted app.
namespace Dom
@[js "lasm:ui-dom" "options"] opaque options : IO Data
@[js "lasm:ui-dom" "connect"] opaque connect : Data → IO Unit
@[js "lasm:ui-dom" "apply"] opaque apply : ByteArray → IO Unit
@[js "lasm:ui-dom" "schedule"] opaque schedule : IO Unit
@[js "lasm:ui-dom" "error"] opaque error : String → IO Unit
@[js "lasm:ui-dom" "sub"] opaque sub : Nat → Data → IO Unit
@[js "lasm:ui-dom" "unsub"] opaque unsub : Nat → IO Unit
@[js "lasm:ui-dom" "timeout"] opaque timeout : Nat → Value → IO Unit
@[js "lasm:ui-dom" "http"] opaque http : String → String → Data → Option String → String → Value → IO Unit
@[js "lasm:ui-dom" "now"] opaque now : IO Float
@[js "lasm:ui-dom" "navigate"] opaque navigate : String → Bool → IO Unit
@[js "lasm:ui-dom" "go"] opaque go : Int → IO Unit
@[js "lasm:ui-dom" "load"] opaque load : String → IO Unit
@[js "lasm:ui-dom" "storageSet"] opaque storageSet : String → String → String → IO Unit
@[js "lasm:ui-dom" "storageRemove"] opaque storageRemove : String → String → IO Unit
@[js "lasm:ui-dom" "storageGet"] opaque storageGet : String → String → IO (Option String)
@[js "lasm:ui-dom" "focus"] opaque focus : String → Bool → IO Unit
@[js "lasm:ui-dom" "title"] opaque title : String → IO Unit
end Dom

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
  /-- Elements that received events since the last frame (paths of ids). -/
  touched : Array (List Nat) := #[]
  /-- Ports whose values are delivered (`Subs.port`); a port stays listened to. -/
  ports : List String := []

/-- The live nodes along a path of ids from the root. -/
def findPath (live : List (Live Msg)) : List Nat → Array (Live Msg) → Array (Live Msg)
  | [], acc => acc
  | i :: rest, acc =>
    match live.find? (·.id == i) with
    | some n@(.elem _ _ _ _ _ cs) => findPath cs rest (acc.push n)
    | some n => acc.push n
    | none => acc

/-- The properties the user changes in the DOM (typing, clicking). -/
def userProp (name : String) : Bool := name == "value" || name == "checked" || name == "selected"

/-- Sets again the user-changeable properties (`value`, `checked`, `selected`)
of the elements that received events since the last frame, as the new view
gives them. The diff compares views, and between two frames the user may have
changed the DOM (typed, then pressed Enter, and `update` cleared the field to
the value the last frame had). The applier sets a property only when the DOM's
differs, so the caret does not move. For the DOM model these ops change
nothing: the slot already holds that value. -/
def resync (live : List (Live Msg)) (touched : Array (List Nat)) : Array (Op Msg) :=
  touched.foldl (init := #[]) fun ops path =>
    match (findPath live path #[]).back? with
    | some (.elem id _ _ _ attrs _) =>
      let sets := attrs.filterMap fun
        | .prop n v => if userProp n then some (AttrOp.set (.prop n) (.prop v)) else none
        | _ => none
      if sets.isEmpty then ops else ops.push (.attrs id sets)
    | _ => ops

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
  ref : IO.Ref (State Model Msg)

variable {Flags Model Msg : Type}

def report (what : String) (e : IO.Error) : IO Unit := do
  discard <| (Dom.error s!"{what}: {e}").toBaseIO

/-- Requests a frame now if the model changed and none is requested; true if
the caller (the applier, which made this call) should schedule it. -/
def takeFrame (c : Ctx Flags Model Msg) : IO Bool := do
  let s ← c.ref.get
  if s.dirty && !s.scheduled then
    c.ref.set { s with scheduled := true }
    return true
  return false

def requestFrame (c : Ctx Flags Model Msg) : IO Unit := do
  if ← takeFrame c then Dom.schedule

mutual
/-- Starts and stops subscriptions so they match `subscriptions model`. -/
partial def syncSubs (c : Ctx Flags Model Msg) : IO Unit := do
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
      unless spec matches .port _ do Dom.unsub sid
  for (spec, hs) in wanted do
    match subs[spec]? with
    | some sid => handlers := handlers.insert sid hs.reverse
    | none =>
      let sid := nextSub
      nextSub := nextSub + 1
      subs := subs.insert spec sid
      handlers := handlers.insert sid hs.reverse
      match spec with
      | .port name => if !(← c.ref.get).ports.contains name then listenPort c name
      | _ => Dom.sub sid (specData spec)
  c.ref.modify fun s => { s with subs, handlers, nextSub }

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
          try perform c e catch err => report "a command failed" err
      else break
    syncSubs c
  finally
    c.ref.modify fun s => { s with busy := false }

/-- Performs one effect through the applier's module. -/
partial def perform (c : Ctx Flags Model Msg) (e : Effect Msg) : IO Unit := do
  match e with
  | .msg m => deliver c m
  | .delay ms m =>
    let f ← Function.ofSyncFn fun _ => do deliver c m; return .bool (← takeFrame c)
    Dom.timeout ms f
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
    Dom.http r.method r.url (toJS (r.headers.map fun (k, v) => #[k, v]).toArray) r.body r.credentials f
  | .randomBytes n h => deliver c (h (← IO.getRandomBytes n.toUSize))
  | .now h => deliver c (h (← Dom.now))
  | .navigate u replace => Dom.navigate u replace
  | .go n => Dom.go n
  | .load u => Dom.load u
  | .storageSet st k v => Dom.storageSet (storageName st) k v
  | .storageRemove st k => Dom.storageRemove (storageName st) k
  | .storageGet st k h => deliver c (h (← Dom.storageGet (storageName st) k))
  | .focus i blur => Dom.focus i blur
  | .port name v => (← Lasm.Web.App.port name).send v
  | .title t => Dom.title t
  | .io run => run fun m => do deliver c m; requestFrame c

/-- Delivers the values JavaScript sends through port `name` (`app.ports[name].send`)
to the current `Subs.port` handlers. -/
partial def listenPort (c : Ctx Flags Model Msg) (name : String) : IO Unit := do
  c.ref.modify fun s => { s with ports := name :: s.ports }
  (← Lasm.Web.App.port name).subscribe fun v => do
    let s ← c.ref.get
    if let some sid := s.subs[SubSpec.port name]? then
      for h in s.handlers.getD sid [] do
        if let some m := h #[v] then deliver c m
      requestFrame c
end

/-- One frame: the patch from the live tree to the current view (empty if the
model did not change). -/
def frame (c : Ctx Flags Model Msg) : IO ByteArray := do
  let s ← c.ref.get
  if !s.dirty then
    c.ref.set { s with scheduled := false, touched := #[] }
    return .empty
  let r := diff s.live [c.app.view s.model] s.next
  let (bytes, tables) := Encode.frame s.tables (r.ops ++ resync r.live s.touched)
  c.ref.set { s with live := r.live, next := r.next, tables, dirty := false, scheduled := false, touched := #[] }
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
  c.ref.modify fun s => { s with touched := s.touched.push path.toList }
  let mut msgs := #[]
  let mut i := 0
  while i + 1 < calls.size do
    if let (.number depth, .array vals) := (calls[i]!, calls[i+1]!) then
      if let some (.elem _ _ _ _ attrs _) := nodes[depth.toUInt64.toNat]? then
        if let some h := handlerFor type attrs then
          if let some m := h (vals.toList.map Subs.evVal) then msgs := msgs.push m
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
  let options ← Dom.options
  let flags ← decodeAs Flags "the app's flags" (options.field "flags")
  let url := (match options.field "url" with | .string s => Url.parse s | _ => none).getD {}
  let (model, cmd₀) := app.init flags url
  let c : Ctx Flags Model Msg := { app, ref := ← IO.mkRef { model } }
  let frameFn ← Function.ofSyncFn fun _ => do return .bytes (← frame c)
  let eventFn ← Function.ofSyncFn (onEvent c)
  let subFn ← Function.ofSyncFn (onSub c)
  let urlFn ← Function.ofSyncFn fun args => do
    if let (some f, some (Data.string href)) := (app.onUrlChange, args[0]?) then
      if let some u := Url.parse href then deliver c (f u)
    return .bool (← takeFrame c)
  if let some f := app.receive then
    Lasm.Web.App.onMessage fun d => do
      if let some m := f d then deliver c m
      requestFrame c
  Dom.connect (obj [("frame", toJS frameFn), ("event", toJS eventFn), ("sub", toJS subFn),
    ("url", toJS urlFn), ("application", .bool app.onUrlChange.isSome)])
  -- The first frame, synchronously; then the initial command (its messages
  -- are queued while it runs and delivered after it).
  Dom.apply (← frame c)
  c.ref.modify fun s => { s with busy := true }
  for e in cmd₀.effects do
    try perform c e catch err => report "a command failed" err
  c.ref.modify fun s => { s with busy := false }
  let s ← c.ref.get
  if h : 0 < s.queue.size then
    let m := s.queue[0]
    c.ref.set { s with queue := s.queue.extract 1 s.queue.size }
    deliver c m
  else syncSubs c
  requestFrame c

end Lasm.UI
