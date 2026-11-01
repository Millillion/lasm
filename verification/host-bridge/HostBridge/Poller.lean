/-
Model of how events reach Lean threads that start on demand:

* the Lasm.JS interop poller (library/c/lasm_js.c): `claim_poller`
  (compare-and-swap on `poller_claimed`), `start_poller` (from
  `lasm_js_await_into` / `lasm_js_call_into` and from the host's
  `lasm_js_spawn_poller`), `lasm_js_park` (`waitForever` on the thread
  running `main` becomes the poller), `interop_loop` (op 209 long polls);
* the host side (src/node-js.mjs): `events`, `waiter`, `polled`,
  `pollerTimer`, `push`, `wantPoller` (a grace timer, re-armed while Lean
  makes progress, then `spawnPoller`), op 209;
* the lazy completion thread (runtime/node-async.cpp
  `ensure_completion_thread`, started by the first asynchronous request,
  op 94) and its op 95 long polls; the host's `lasmFullComplete` and
  `lasmFullCompletionWaiter` (scripts/full-lean/host-pre.js).

A host call is three steps: the thread posts it, Node's main thread serves
it in an event-loop task (a long poll may leave a waiter instead of a
reply), the thread takes the reply. The slot handshake under each host call
is checked separately (HostBridge.Sync).
-/
import HostBridge.Checker

namespace HostBridge.Poller

/-- What the program's `main` does, in order. -/
inductive Action where
  /-- `lasm_js_start`: registers the dispatcher (Lasm.JS initialization). -/
  | start
  /-- op 210: an asynchronous Lean function JavaScript may call. -/
  | mkFn
  /-- `Value.await` in IO: start_poller, op 207, wait for the Lean promise. -/
  | await
  /-- An asynchronous runtime request (op 94): starts the completion thread
  (once), then waits for the promise. -/
  | async
  /-- Wait until JavaScript's calls of the function have reached Lean. -/
  | waitCalls
  /-- `waitForever`: `lasm_js_park`. -/
  | park
  deriving BEq, Hashable, Repr, Inhabited

structure Config where
  name : String
  script : Array Action
  /-- Calls JavaScript makes of the Lean function. -/
  jsCalls : Nat := 1
  /-- Times the grace timer may be re-armed because Lean made progress. -/
  rearms : Nat := 1
  -- Mutations (the shipped code has the defaults).
  /-- `claim_poller` as a load then a store instead of a compare-and-swap. -/
  atomicClaim : Bool := true
  /-- `lasmFullComplete` queues a completion when no poll waits. -/
  queueCompletions : Bool := true
  /-- `push` asks for a poller (`wantPoller`) when no thread polls. -/
  wantPoller : Bool := true
  /-- Op 209 marks the host as polled (stops the spawn timer). -/
  markPolled : Bool := true
  deriving Repr

/-- A posted host call. -/
inductive Req where
  | none | mkFn | await (id : Nat) | async (id : Nat) | poll | comp
  /-- A long poll the host has not answered yet (its waiter is registered). -/
  | waitingPoll | waitingComp
  deriving BEq, Hashable, Repr, Inhabited

inductive Pc where
  | run (k : Nat)
  /-- Waiting for the reply of its posted call (or for a long poll's batch). -/
  | calling (k : Nat)
  | claim (k : Nat) (seen : Bool)
  | waitPromise (k : Nat) (id : Nat)
  | waitCalls (k : Nat)
  /-- In `interop_loop`: about to post op 209 / processing a batch. -/
  | pollPost | polling | process (batch : List Nat)
  | parked | exited
  deriving BEq, Hashable, Repr, Inhabited

inductive Th where
  | none | creating | running (pc : Pc)
  deriving BEq, Hashable, Repr, Inhabited

inductive Timer where
  | off | armed (rearms : Nat)
  deriving BEq, Hashable, Repr, Inhabited

structure St where
  lm : Pc := .run 0
  lmReq : Req := .none
  /-- The interop poller thread. -/
  p : Th := .none
  pReq : Req := .none
  /-- The completion thread. -/
  ct : Th := .none
  ctReq : Req := .none
  ctOnce : Bool := false
  ctBatch : List Nat := []
  dispatcher : Bool := false
  claimed : Bool := false
  claims : Nat := 0
  fnExists : Bool := false
  jsMade : Nat := 0
  events : List Nat := []
  /-- Who waits in op 209: 0 none, 1 the poller thread, 2 the main Lean thread. -/
  waiter : Nat := 0
  /-- A batch of events in the reply to a thread's op 209, not yet taken. -/
  handed : List Nat := []
  handedTo : Nat := 0
  polled : Bool := false
  timer : Timer := .off
  settles : List Nat := []
  ops : List Nat := []
  comps : List Nat := []
  compWaiter : Bool := false
  delivered : List Nat := []
  resolved : List Nat := []
  bad : String := ""
  deriving BEq, Hashable, Repr, Inhabited

-- Fairness groups.
def gLm := 0
def gP := 1
def gC := 2
def gServeLm := 3
def gServeP := 4
def gServeC := 5
def gJs := 6
def gSettle := 7
def gTimer := 8
def gComplete := 9
def gSpawnP := 10
def gSpawnC := 11
def groupNames : Array String := #["main Lean thread", "poller thread", "completion thread",
  "host: serve main thread", "host: serve poller", "host: serve completion thread", "JavaScript calls",
  "host: settle a promise", "host: poller timer", "host: operation completes", "host: start poller worker",
  "host: start completion worker"]

def awaitId (k : Nat) : Nat := 100 + k
def asyncId (k : Nat) : Nat := 200 + k

/-- Event delivered to Lean by a poller. -/
def deliver (s : St) (e : Nat) : St :=
  if s.delivered.contains e then { s with bad := s!"event {e} delivered twice" }
  else { s with delivered := e :: s.delivered }

def resolve (s : St) (id : Nat) : St :=
  if s.resolved.contains id then { s with bad := s!"completion {id} resolved twice" }
  else { s with resolved := id :: s.resolved }

/-- Clears the posted call of poll thread `who` (its reply is ready). -/
def answer (s : St) (who : Nat) : St :=
  if who == 1 then { s with pReq := .none } else if who == 2 then { s with lmReq := .none } else s

/-- `push` in src/node-js.mjs: queue the event; a waiting op 209 replies with
every queued event; otherwise ask for a poller. -/
def push (c : Config) (s : St) (e : Nat) : St :=
  let s := { s with events := s.events ++ [e] }
  if s.waiter != 0 then answer { s with handed := s.events, handedTo := s.waiter, events := [], waiter := 0 } s.waiter
  else if c.wantPoller && !s.polled && s.timer == .off then { s with timer := .armed c.rearms }
  else s

/-- Op 209 in src/node-js.mjs (`polled`, the timer, the batch or the waiter). -/
def serve209 (c : Config) (s : St) (who : Nat) : St :=
  let s := if c.markPolled then { s with polled := true, timer := .off } else s
  if !s.events.isEmpty then answer { s with handed := s.events, handedTo := who, events := [] } who
  else
    let s := if who == 1 then { s with pReq := .waitingPoll } else { s with lmReq := .waitingPoll }
    -- A second waiter replaces the first, whose poll then never returns.
    { s with waiter := who }

def pollers (s : St) : Nat :=
  (match s.p with | .running _ => 1 | _ => 0) +
  (match s.lm with | .pollPost | .polling | .process _ => 1 | _ => 0)

/-- The poller-loop steps of a thread whose program counter is `pc`. `who`: 1 poller thread, 2 main Lean thread. -/
def pollSteps (who : Nat) (pc : Pc) (s : St) (req : Req) : List (String × Pc × Req × (St → St)) :=
  match pc with
  | .pollPost => [("posts op 209 (long poll)", .polling, .poll, id)]
  | .polling =>
    if req == .none && s.handedTo == who then
      [("takes the batch", .process s.handed, .none, fun t => { t with handed := [], handedTo := 0 })]
    else []
  | .process [] => [("polls again", .pollPost, .none, id)]
  | .process (e :: rest) => [(s!"dispatches event {e}", .process rest, .none, fun t => deliver t e)]
  | _ => []

def next (c : Config) (s : St) : Array (Edge St) := Id.run do
  let mut out : Array (Edge St) := #[]
  let e (g : Nat) (label : String) (t : St) : Edge St := { label, group := g, dst := t }
  -- ---- the main Lean thread ----
  match s.lm with
  | .run k =>
    match c.script[k]? with
    | none => out := out.push (e gLm "main returns" { s with lm := .exited })
    | some .start => out := out.push (e gLm "lasm_js_start" { s with dispatcher := true, lm := .run (k + 1) })
    | some .mkFn => out := out.push (e gLm "posts op 210" { s with lm := .calling k, lmReq := .mkFn })
    | some .await => out := out.push (e gLm "await: start_poller" { s with lm := .claim k false })
    | some .async =>
      let t := if s.ctOnce then s else { s with ctOnce := true, ct := .creating }
      out := out.push (e gLm "ensure_completion_thread, posts op 94" { t with lm := .calling k, lmReq := .async (asyncId k) })
    | some .waitCalls => out := out.push (e gLm "waits for JavaScript's calls" { s with lm := .waitCalls k })
    | some .park => out := out.push (e gLm "waitForever: lasm_js_park" { s with lm := .claim k false })
  | .claim k seen =>
    let isPark := c.script[k]? == some .park
    let won (t : St) : St := { t with claimed := true, claims := t.claims + 1 }
    let afterWin (t : St) : St :=
      if isPark then { t with lm := .pollPost }
      else { t with p := .creating, lm := .calling k, lmReq := .await (awaitId k) }
    let afterLose (t : St) : St :=
      if isPark then { t with lm := .parked } else { t with lm := .calling k, lmReq := .await (awaitId k) }
    if c.atomicClaim then
      if !s.claimed then out := out.push (e gLm "claim_poller: CAS wins" (afterWin (won s)))
      else out := out.push (e gLm "claim_poller: CAS loses" (afterLose s))
    else if !seen then
      out := out.push (e gLm s!"claim_poller: reads claimed = {s.claimed}" (if s.claimed then afterLose s else { s with lm := .claim k true }))
    else out := out.push (e gLm "claim_poller: sets claimed" (afterWin (won s)))
  | .calling k =>
    if s.lmReq == .none then
      match c.script[k]? with
      | some .mkFn => out := out.push (e gLm "takes the reply of op 210" { s with fnExists := true, lm := .run (k + 1) })
      | some .await => out := out.push (e gLm "takes the reply of op 207, waits for the promise" { s with lm := .waitPromise k (awaitId k) })
      | some .async => out := out.push (e gLm "takes the reply of op 94, waits for the promise" { s with lm := .waitPromise k (asyncId k) })
      | _ => pure ()
  | .waitPromise k id =>
    if s.resolved.contains id || s.delivered.contains id then out := out.push (e gLm "the promise resolved" { s with lm := .run (k + 1) })
  | .waitCalls k =>
    if (List.range c.jsCalls).all (fun i => s.delivered.contains (i + 1)) then
      out := out.push (e gLm "every call arrived" { s with lm := .run (k + 1) })
  | .parked | .exited => pure ()
  | pc =>
    for (label, pc', req, f) in pollSteps 2 pc s s.lmReq do
      out := out.push (e gLm s!"(as poller) {label}" (f { s with lm := pc', lmReq := if req == .none then s.lmReq else req }))
  -- ---- the poller thread ----
  match s.p with
  | .running pc =>
    for (label, pc', req, f) in pollSteps 1 pc s s.pReq do
      out := out.push (e gP label (f { s with p := .running pc', pReq := if req == .none then s.pReq else req }))
  | _ => pure ()
  -- ---- the completion thread ----
  match s.ct with
  | .running .pollPost => out := out.push (e gC "posts op 95" { s with ct := .running .polling, ctReq := .comp })
  | .running .polling =>
    if s.ctReq == .none && !s.ctBatch.isEmpty then
      out := out.push (e gC "takes its batch" { s with ct := .running (.process s.ctBatch), ctBatch := [] })
  | .running (.process []) => out := out.push (e gC "polls again" { s with ct := .running .pollPost })
  | .running (.process (id :: rest)) => out := out.push (e gC s!"resolves completion {id}" (resolve { s with ct := .running (.process rest) } id))
  | _ => pure ()
  -- ---- Node's main thread: event-loop tasks ----
  -- serve the main Lean thread's call
  match s.lmReq with
  | .mkFn => out := out.push (e gServeLm "serves op 210" { s with lmReq := .none })
  | .await id => out := out.push (e gServeLm "serves op 207 (settles later)" { s with lmReq := .none, settles := s.settles ++ [id] })
  | .async id => out := out.push (e gServeLm "serves op 94 (operation started)" { s with lmReq := .none, ops := s.ops ++ [id] })
  | .poll => out := out.push (e gServeLm "serves the main thread's op 209" (serve209 c s 2))
  | _ => pure ()
  if s.pReq == .poll then out := out.push (e gServeP "serves the poller's op 209" (serve209 c s 1))
  if s.ctReq == .comp then
    if !s.comps.isEmpty then out := out.push (e gServeC "serves op 95 with the queued completions" { s with ctReq := .none, ctBatch := s.comps, comps := [] })
    else out := out.push (e gServeC "op 95 waits (lasmFullCompletionWaiter)" { s with ctReq := .waitingComp, compWaiter := true })
  -- JavaScript calls the Lean function
  if s.fnExists && s.jsMade < c.jsCalls then
    out := out.push (e gJs s!"JavaScript calls the Lean function (event {s.jsMade + 1})" (push c { s with jsMade := s.jsMade + 1 } (s.jsMade + 1)))
  -- a promise settles (op 207)
  match s.settles with
  | id :: rest => out := out.push (e gSettle s!"the awaited value settles (event {id})" (push c { s with settles := rest } id))
  | [] => pure ()
  -- the poller timer
  match s.timer with
  | .armed r =>
    if s.polled then out := out.push (e gTimer "timer fires: polled" { s with timer := .off })
    else
      if r > 0 then out := out.push (e gTimer "timer fires: Lean made progress, re-armed" { s with timer := .armed (r - 1) })
      let t := { s with timer := .off }
      let t := if t.dispatcher && !t.claimed then { t with claimed := true, claims := t.claims + 1, p := .creating } else t
      out := out.push (e gTimer "timer fires: spawnPoller" t)
  | .off => pure ()
  -- an asynchronous operation completes
  match s.ops with
  | id :: rest =>
    let t := { s with ops := rest }
    let t := if t.compWaiter then { t with compWaiter := false, ctReq := .none, ctBatch := [id] }
      else if c.queueCompletions then { t with comps := t.comps ++ [id] } else t
    out := out.push (e gComplete s!"operation {id} completes (lasmFullComplete)" t)
  | [] => pure ()
  -- workers start
  if s.p == .creating then out := out.push (e gSpawnP "the poller thread starts" { s with p := .running .pollPost })
  if s.ct == .creating then out := out.push (e gSpawnC "the completion thread starts" { s with ct := .running .pollPost })
  return out

def goal (c : Config) (s : St) : Bool :=
  let calls := (List.range c.jsCalls).all (fun i => s.delivered.contains (i + 1))
  let promises := (List.range c.script.size).all fun k =>
    match c.script[k]! with
    | .await => s.delivered.contains (awaitId k)
    | .async => s.resolved.contains (asyncId k)
    | _ => true
  calls && promises && s.jsMade == c.jsCalls &&
  (match s.lm with | .exited | .parked | .pollPost | .polling | .process _ => true | _ => false)

def system (c : Config) : System St :=
  { name := c.name, init := {}, next := next c
    invariant := fun s =>
      if !s.bad.isEmpty then some s.bad
      else if pollers s > 1 then some "two interop pollers run"
      else if s.claims > 1 then some "the poller was claimed twice"
      else none
    goal := goal c, groupNames, render := reprStr }

end HostBridge.Poller
