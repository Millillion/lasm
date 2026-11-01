/-
Model of one Lean thread's host-call slot and of Lasm.JS synchronous
callbacks, step for step as implemented:

* the Lean thread's side of a host call: `$lasmFullRPC.exchange` in
  scripts/full-lean/host-library.js (request fields, `ready := 0`,
  `seq += 1`, notify, the doorbell, then a futex wait on `ready`);
* the host's asynchronous server of the slot: `lasmFullServe`,
  `lasmFullServeOne` and `lasmFullReply` in scripts/full-lean/host-pre.js
  (`slot.sequence`, `Atomics.waitAsync` on `seq`);
* the synchronous-callback thread: `sync_main` and `post` in
  library/c/lasm_js.c (a futex wait on the channel's `state`, the callback's
  host calls, the result, the doorbell);
* Node's main thread inside a synchronous callback: `syncFunction` in
  src/node-js.mjs, which serves the thread's host calls inline through
  `lasmFullServeSync` (host-pre.js) and the work other threads proxy to it.

Every step is one access to a shared word (or one decision of a thread on
values it has already read). A waiting thread may also wake spuriously and,
for timed waits, time out (both optional, as configured): the code must not
depend on either.

Shared words: channel `state` (0 idle, 1 call posted, 2 result) and
`bell` (the doorbell), slot `seq` (request sequence) and `ready`.
-/
import HostBridge.Checker

namespace HostBridge.Sync

structure Config where
  name : String
  /-- Host calls each synchronous callback makes, in order. -/
  calls : Array Nat := #[1]
  /-- Callbacks that first wait for work proxied to Node's main thread
  (pthread_create of a thread started on demand, e.g. the completion thread). -/
  proxied : Array Bool := #[]
  /-- Host calls the thread makes before (generic Lean thread, no doorbell). -/
  freeCalls : Nat := 0
  /-- Those calls may be answered in a later event-loop task (a promise). -/
  asyncReplies : Bool := false
  /-- The thread is the synchronous-callback thread (registration, callbacks). -/
  sync : Bool := true
  timeouts : Bool := false
  spurious : Bool := false
  /-- Conformance mode: an unbounded workload, chosen by the recorded trace. -/
  trace : Bool := false
  -- Mutations (the shipped code has the defaults).
  /-- 0.3.0: `syncFunction` read the doorbell and the sequence after posting the call. -/
  readAfterPost : Bool := false
  /-- 0.3.0: a timed-out wait did not ask the host to serve the slot. -/
  timeoutServes : Bool := true
  /-- Before this change: the wait never ran proxied work. -/
  mailboxInWait : Bool := true
  /-- The thread's host calls ring the doorbell. -/
  doorbell : Bool := true
  /-- The host does not remember the sequence it served (`slot.sequence`). -/
  forgetServed : Bool := false
  deriving Repr

inductive MPc where
  | idle
  | pre (k : Nat)
  | loadState | loadSeq | wait | blocked
  | ss (k : Nat) (afterTimeout : Bool)
  | mailbox | reread | finish
  deriving BEq, Hashable, Repr, Inhabited

inductive SPc where
  | free | exch (k : Nat) | exBlocked
  | loop | stWait (v : Nat) | stBlocked (v : Nat)
  | body | proxyWait | post (k : Nat) | stop
  deriving BEq, Hashable, Repr, Inhabited

/-- The host's asynchronous server of the slot (`lasmFullServe`). -/
inductive As where
  | unreg | load | waitCall (v : Nat) | waiting (v : Nat) (woken : Bool) | reply (k : Nat) | pending
  deriving BEq, Hashable, Repr, Inhabited

def As.quiescent : As → Bool
  | .unreg | .waiting .. | .pending => true
  | _ => false

structure St where
  state : Nat := 0
  bell : Nat := 0
  seq : Nat := 0
  ready : Nat := 0
  /-- The request whose fields are in the slot. -/
  slotReq : Nat := 0
  /-- The request whose reply is in the slot's buffer. -/
  replyFor : Nat := 0
  /-- The callback (number + 1) whose result is in the channel. -/
  resultFor : Nat := 0
  mpc : MPc := .idle
  cbStarted : Nat := 0
  cbDone : Nat := 0
  bellL : Nat := 0
  seqL : Nat := 0
  /-- `slot.sequence` in host-pre.js. -/
  served : Nat := 0
  servedReq : Nat := 0
  mainWoken : Bool := false
  registered : Bool := false
  asrv : As := .unreg
  proxyPending : Bool := false
  spc : SPc := .free
  announced : Bool := false
  freeLeft : Nat := 0
  /-- 0 free calls, 1 registration (op 211), 2 callback. -/
  phase : Nat := 0
  setupDone : Bool := false
  sReq : Nat := 0
  sCb : Nat := 0
  sCalls : Nat := 0
  sProxied : Bool := false
  sWoken : Bool := false
  bad : String := ""
  deriving BEq, Hashable, Repr, Inhabited

def initial (c : Config) : St :=
  if c.freeCalls > 0 || (c.trace && !c.sync) then { spc := .free, freeLeft := c.freeCalls, phase := 0 }
  else if c.sync then { spc := .exch 0, phase := 1 }
  else { spc := .stop }

def mainG := 0
def leanG := 1

/-- Order of `syncFunction`'s four steps before its loop: read the doorbell,
read the sequence, post the call, notify. -/
def preOrder (c : Config) : Array Nat := if c.readAfterPost then #[2, 3, 0, 1] else #[0, 1, 2, 3]

/-- The host serves the request in the slot (dispatch reads its fields). -/
def serve (c : Config) (s : St) : St :=
  let s := if s.slotReq == s.servedReq && s.slotReq != 0 then { s with bad := s!"request {s.slotReq} served twice" } else s
  let setupId := c.freeCalls + 1
  { s with servedReq := s.slotReq, replyFor := s.slotReq,
           registered := s.registered || (c.sync && s.slotReq == setupId) }

/-- notify(word): every waiter on it wakes. -/
def wakeState (s : St) : St := match s.spc with
  | .stBlocked _ => { s with sWoken := true } | _ => s
def wakeReady (s : St) : St := match s.spc with
  | .exBlocked => { s with sWoken := true } | _ => s
def wakeBell (s : St) : St := if s.mpc == .blocked then { s with mainWoken := true } else s
def wakeSeq (s : St) : St := match s.asrv with
  | .waiting v _ => { s with asrv := .waiting v true } | _ => s

def beginCall (s : St) (phase : Nat) : St :=
  { s with spc := if s.announced then .exch 1 else .exch 0, phase }

def ringing (c : Config) (s : St) : Bool := c.sync && c.doorbell && s.phase != 0

def callbacks (c : Config) : Nat := c.calls.size

def next (c : Config) (s : St) : Array (Edge St) := Id.run do
  let mut out : Array (Edge St) := #[]
  let m (label : String) (obs : String) (t : St) : Edge St := { label := "main: " ++ label, group := mainG, obs, dst := t }
  let l (label : String) (obs : String) (t : St) : Edge St := { label := "lean: " ++ label, group := leanG, obs, dst := t }
  -- ---- Node's main thread ----
  match s.mpc with
  | .idle =>
    if s.asrv.quiescent then
      if s.registered && (c.trace || s.cbStarted < callbacks c) then
        out := out.push (m "JavaScript calls the synchronous Lean function" "" { s with mpc := .pre 0, cbStarted := s.cbStarted + 1 })
      if s.proxyPending then
        out := out.push (m "event loop runs proxied work" "" { s with proxyPending := false })
    match s.asrv with
    | .unreg =>
      if s.announced then out := out.push (m "registers the slot (lasmFullHostSlot)" "" { s with asrv := .load, served := 0 })
    | .load =>
      let v := s.seq
      if v == s.served then
        out := out.push (m s!"async server reads seq = {v}, already served" s!"main load seq {v}" { s with asrv := .waitCall v })
      else
        let t := serve c { s with served := if c.forgetServed then s.served else v }
        out := out.push (m s!"async server reads seq = {v}, serves request {s.slotReq}" s!"main load seq {v}" { t with asrv := .reply 0 })
        if c.asyncReplies && s.phase == 0 then
          out := out.push (m s!"async server reads seq = {v}, starts request {s.slotReq} (a promise)" s!"main load seq {v}" { t with asrv := .pending })
    | .waitCall v =>
      if s.seq != v then out := out.push (m s!"waitAsync(seq, {v}): not-equal" s!"main waitasync seq {v} not-equal" { s with asrv := .load })
      else out := out.push (m s!"waitAsync(seq, {v})" s!"main waitasync seq {v} async" { s with asrv := .waiting v false })
    | .waiting _ true => out := out.push (m "async server resumes (waitAsync resolved)" "" { s with asrv := .load })
    | .waiting _ false => pure ()
    | .pending => out := out.push (m "the request's promise settles" "" { s with asrv := .reply 0 })
    | .reply 0 => out := out.push (m "async server stores ready = 1" "main store ready 1" { s with ready := 1, asrv := .reply 1 })
    | .reply _ => out := out.push (m "async server notifies ready" "main notify ready" { wakeReady s with asrv := .load })
  | .pre k =>
    let after := if k + 1 < 4 then MPc.pre (k + 1) else .loadState
    match (preOrder c)[k]! with
    | 0 => out := out.push (m s!"reads bell = {s.bell}" s!"main load bell {s.bell}" { s with bellL := s.bell, mpc := after })
    | 1 => out := out.push (m s!"reads seq = {s.seq}" s!"main load seq {s.seq}" { s with seqL := s.seq, mpc := after })
    | 2 => out := out.push (m "posts the call: state = 1" "main store state 1" { s with state := 1, mpc := after })
    | _ => out := out.push (m "notifies state" "main notify state" { wakeState s with mpc := after })
  | .loadState =>
    if s.state == 2 then
      let t := if s.resultFor != s.cbStarted then { s with bad := s!"callback {s.cbStarted} returned the result of callback {s.resultFor}" } else s
      out := out.push (m "reads state = 2: the result" "main load state 2" { t with mpc := .finish })
    else out := out.push (m s!"reads state = {s.state}" s!"main load state {s.state}" { s with mpc := .loadSeq })
  | .loadSeq =>
    let v := s.seq
    if v != s.seqL then out := out.push (m s!"reads seq = {v}: a new request" s!"main load seq {v}" { s with seqL := v, mpc := .ss 0 false })
    else out := out.push (m s!"reads seq = {v}: nothing new" s!"main load seq {v}" { s with mpc := .wait })
  | .wait =>
    if s.bell != s.bellL then
      out := out.push (m s!"wait(bell, {s.bellL}): not-equal" s!"main wait bell {s.bellL} not-equal" { s with mpc := .reread })
    else out := out.push (m s!"wait(bell, {s.bellL}) blocks" s!"main wait bell {s.bellL} blocked" { s with mpc := .blocked, mainWoken := false })
  | .blocked =>
    if s.mainWoken then out := out.push (m "wakes (notified)" "main wake bell ok" { s with mpc := .reread })
    else if c.spurious then out := out.push { m "wakes spuriously" "main wake bell ok" { s with mpc := .reread } with rare := true }
    if c.timeouts then
      let after := if c.timeoutServes then MPc.ss 0 true else if c.mailboxInWait then .mailbox else .reread
      out := out.push (m "wait times out" "main wake bell timed-out" { s with mpc := after })
  | .ss 0 afterTimeout =>
    let ret := if !afterTimeout then MPc.loadState else if c.mailboxInWait then .mailbox else .reread
    let v := s.seq
    if v == s.served then out := out.push (m s!"serveSync reads seq = {v}, already served" s!"main load seq {v}" { s with mpc := ret })
    else
      let t := serve c { s with served := if c.forgetServed then s.served else v }
      out := out.push (m s!"serveSync reads seq = {v}, serves request {s.slotReq}" s!"main load seq {v}" { t with mpc := .ss 1 afterTimeout })
  | .ss 1 afterTimeout => out := out.push (m "serveSync stores ready = 1" "main store ready 1" { s with ready := 1, mpc := .ss 2 afterTimeout })
  | .ss _ afterTimeout =>
    let ret := if !afterTimeout then MPc.loadState else if c.mailboxInWait then .mailbox else .reread
    out := out.push (m "serveSync notifies ready" "main notify ready" { wakeReady s with mpc := ret })
  | .mailbox =>
    out := out.push (m (if s.proxyPending then "runs proxied work" else "checks the mailbox") "" { s with proxyPending := false, mpc := .reread })
  | .reread => out := out.push (m s!"reads bell = {s.bell}" s!"main load bell {s.bell}" { s with bellL := s.bell, mpc := .loadState })
  | .finish => out := out.push (m "state = 0, returns the result" "main store state 0" { s with state := 0, cbDone := s.cbDone + 1, mpc := .idle })
  -- ---- the Lean thread ----
  match s.spc with
  | .free =>
    if s.freeLeft > 0 || (c.trace && !c.sync) then out := out.push (l "makes a host call" "" (beginCall s 0))
    else if c.sync then out := out.push (l "registers the channel (op 211)" "" (beginCall s 1))
    else out := out.push (l "stops" "" { s with spc := .stop })
    if c.trace && !c.sync then out := out.push (l "stops" "" { s with spc := .stop })
  | .exch 0 => out := out.push (l "announces its slot (CMD_CALL_HANDLER)" "" { s with announced := true, spc := .exch 1 })
  | .exch 1 =>
    let r := s.sReq + 1
    out := out.push (l s!"writes request {r}, ready = 0" "lean store ready 0" { s with sReq := r, slotReq := r, ready := 0, spc := .exch 2 })
  | .exch 2 => out := out.push (l s!"seq += 1 (was {s.seq})" s!"lean add seq {s.seq}" { s with seq := s.seq + 1, spc := .exch 3 })
  | .exch 3 => out := out.push (l "notifies seq" "lean notify seq" { wakeSeq s with spc := if ringing c s then .exch 4 else .exch 6 })
  | .exch 4 => out := out.push (l s!"bell += 1 (was {s.bell})" s!"lean add bell {s.bell}" { s with bell := s.bell + 1, spc := .exch 5 })
  | .exch 5 => out := out.push (l "notifies bell" "lean notify bell" { wakeBell s with spc := .exch 6 })
  | .exch 6 =>
    if s.ready == 1 then
      let t := if s.replyFor != s.sReq then { s with bad := s!"request {s.sReq} received the reply of request {s.replyFor}" } else s
      let t := match s.phase with
        | 0 => { t with freeLeft := s.freeLeft - 1, spc := .free }
        | 1 => { t with setupDone := true, spc := .loop }
        | _ => { t with sCalls := s.sCalls + 1, spc := .body }
      out := out.push (l "reads ready = 1: the reply" "lean load ready 1" t)
    else out := out.push (l "reads ready = 0" "lean load ready 0" { s with spc := .exch 7 })
  | .exch _ =>
    if s.ready != 0 then out := out.push (l "futex_wait(ready, 0): not-equal" "" { s with spc := .exch 6 })
    else out := out.push (l "futex_wait(ready, 0) blocks" "" { s with spc := .exBlocked, sWoken := false })
  | .exBlocked =>
    if s.sWoken then out := out.push (l "wakes" "" { s with spc := .exch 6 })
    else if c.spurious then out := out.push { l "wakes spuriously" "" { s with spc := .exch 6 } with rare := true }
  | .loop =>
    if s.state == 1 then out := out.push (l "reads state = 1: runs the callback" "" { s with spc := .body, sCalls := 0, sProxied := false })
    else out := out.push (l s!"reads state = {s.state}" "" { s with spc := .stWait s.state })
  | .stWait v =>
    if s.state != v then out := out.push (l s!"futex_wait(state, {v}): not-equal" "" { s with spc := .loop })
    else out := out.push (l s!"futex_wait(state, {v}) blocks" "" { s with spc := .stBlocked v, sWoken := false })
  | .stBlocked _ =>
    if s.sWoken then out := out.push (l "wakes" "" { s with spc := .loop })
    else if c.spurious || c.timeouts then out := out.push { l "wakes spuriously or after 1e9 ms" "" { s with spc := .loop } with rare := true }
  | .body =>
    if c.trace then
      if !s.proxyPending then out := out.push (l "waits for work proxied to the main thread" "" { s with proxyPending := true, spc := .proxyWait })
      out := out.push (l "makes a host call" "" (beginCall s 2))
      out := out.push (l "posts the result" "" { s with spc := .post 0 })
    else
      let k := s.sCb
      if c.proxied.getD k false && !s.sProxied then
        out := out.push (l "waits for work proxied to the main thread (pthread_create)" "" { s with proxyPending := true, sProxied := true, spc := .proxyWait })
      else if s.sCalls < c.calls.getD k 0 then out := out.push (l "makes a host call" "" (beginCall s 2))
      else out := out.push (l "posts the result" "" { s with spc := .post 0 })
  | .proxyWait =>
    if !s.proxyPending then out := out.push (l "the proxied work is done" "" { s with spc := .body })
  | .post 0 => out := out.push (l "state = 2 (result)" "" { s with state := 2, resultFor := s.sCb + 1, spc := .post 1 })
  | .post 1 => out := out.push (l s!"bell += 1 (was {s.bell})" "" { s with bell := s.bell + 1, spc := .post 2 })
  | .post _ => out := out.push (l "wakes bell" "" { wakeBell s with sCb := s.sCb + 1, spc := .loop })
  | .stop => pure ()
  return out

def goal (c : Config) (s : St) : Bool :=
  s.mpc == .idle && s.freeLeft == 0 &&
  (if c.sync then
    s.setupDone && s.cbDone == callbacks c && s.sCb == callbacks c &&
    (match s.spc with | .loop | .stWait _ | .stBlocked _ => true | _ => false)
  else s.spc == .stop)

def render (s : St) : String := reprStr s

def system (c : Config) : System St :=
  { name := c.name, init := initial c, next := next c
    invariant := fun s => if s.bad.isEmpty then none else some s.bad
    goal := goal c, groupNames := #["Node's main thread", "the Lean thread"], render }

end HostBridge.Sync
