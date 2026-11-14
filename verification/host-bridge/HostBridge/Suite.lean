/-
The checked configurations. Each `expect` is what the checker must report:
the shipped protocol is `ok`; each mutation reintroduces a known bug (the
first is the 0.3.0 hang) and must be found, which tests the checker itself.
-/
import HostBridge.SyncCallback
import HostBridge.Poller

namespace HostBridge

inductive Expect where
  | ok | invariant | deadlock | livelock
  deriving BEq, Repr

def Expect.matches : Expect → Verdict → Bool
  | .ok, .ok => true
  | .invariant, .invariant .. => true
  | .deadlock, .deadlock .. => true
  | .livelock, .livelock .. => true
  | _, _ => false

def Expect.text : Expect → String
  | .ok => "ok"
  | .invariant => "an invariant violation"
  | .deadlock => "a deadlock"
  | .livelock => "a fair non-progress cycle"

structure Case where
  expect : Expect
  run : Unit → Report

open Sync in
def syncCases : List Case := [
  -- The shipped protocol: no waits that time out, no spurious wake-ups: every
  -- host call is served by a notification alone.
  ⟨.ok, fun _ => check (system { name := "sync: callbacks with 1, 0, 2 host calls" , calls := #[1, 0, 2] })⟩,
  ⟨.ok, fun _ => check (system { name := "sync: 2 callbacks with 2 host calls, spurious wake-ups, timeouts", calls := #[2, 2], spurious := true, timeouts := true })⟩,
  ⟨.ok, fun _ => check (system { name := "sync: 4 callbacks with 1 host call, spurious wake-ups", calls := #[1, 1, 1, 1], spurious := true })⟩,
  -- Work proxied to Node's main thread (pthread_create) inside a callback is
  -- run when the wait times out.
  ⟨.ok, fun _ => check (system { name := "sync: proxied work then a host call, timeouts", calls := #[1, 1], proxied := #[true, false], timeouts := true, spurious := true })⟩,
  -- A callback that waits for a JavaScript promise: the request fails at once.
  ⟨.ok, fun _ => check (system { name := "sync: a callback waits for a promise (fails at once), then host calls, timeouts", calls := #[1, 1], awaits := #[true, false], timeouts := true, spurious := true })⟩,
  -- A callback that waits for a Lean task: stopped when the task's thread waits
  -- for the event loop (a host call), not when the task finishes by itself.
  ⟨.ok, fun _ => check (system { name := "sync: task waits, one stuck on a host call (stopped), one that finishes, timeouts", calls := #[1, 1], taskWaits := #[true, false], pureWaits := #[false, true], timeouts := true, spurious := true })⟩,
  -- A stopped task's thread stays in its host call until the event loop answers
  -- it, after the callback; it is independent of later callbacks, whose task
  -- waits run meanwhile (#291: the model once tied it to the current callback).
  ⟨.ok, fun _ => check (system { name := "sync: task waits (stuck, finishing, stuck) while a stopped task's thread waits or runs, timeouts", calls := #[0, 0, 0], taskWaits := #[true, false, true], pureWaits := #[false, true, false], timeouts := true, spurious := true })⟩,
  -- Work proxied to the callback thread makes a host call (the next depth's
  -- slot) while the thread waits in one: served inline when the wait times out.
  ⟨.ok, fun _ => check (system { name := "sync: proxied work makes a nested host call in 2 callbacks, timeouts", calls := #[1, 2], nested := #[true, true], timeouts := true, spurious := true })⟩,
  -- A generic Lean thread's slot, served by the asynchronous server.
  ⟨.ok, fun _ => check (system { name := "slot: 3 host calls, replies now or in a later task", sync := false, calls := #[], freeCalls := 3, asyncReplies := true, spurious := true })⟩,
  -- Mutations.
  ⟨.deadlock, fun _ => check (system { name := "mutant 0.3.0 (read after posting): no timeouts", calls := #[1], readAfterPost := true })⟩,
  ⟨.livelock, fun _ => check (system { name := "mutant 0.3.0 as released (read after posting, timeouts serve nothing)", calls := #[1], readAfterPost := true, timeoutServes := false, timeouts := true, spurious := true })⟩,
  ⟨.livelock, fun _ => check (system { name := "mutant before this change: proxied work never run while waiting", calls := #[1], proxied := #[true], mailboxInWait := false, timeouts := true, spurious := true })⟩,
  ⟨.livelock, fun _ => check (system { name := "mutant before this change: a callback waits for a promise only the event loop settles", calls := #[0], awaits := #[true], awaitFails := false, timeouts := true, spurious := true })⟩,
  ⟨.livelock, fun _ => check (system { name := "mutant before this change: inline serving ignores the next-depth slot", calls := #[1], nested := #[true], serveNested := false, timeouts := true, spurious := true })⟩,
  ⟨.livelock, fun _ => check (system { name := "mutant before this change: a task wait no thread can end is never stopped", calls := #[0], taskWaits := #[true], stopsStuckWaits := false, timeouts := true, spurious := true })⟩,
  ⟨.invariant, fun _ => check (system { name := "mutant: a task wait is stopped without checking that every thread waits", calls := #[0], pureWaits := #[true], stopAnyWait := true, timeouts := true })⟩,
  ⟨.deadlock, fun _ => check (system { name := "mutant: host calls do not ring the doorbell", calls := #[1], doorbell := false })⟩,
  ⟨.invariant, fun _ => check (system { name := "mutant: the host forgets the sequence it served", calls := #[1, 1], forgetServed := true, timeouts := true })⟩
]

open Poller in
def pollerCases : List Case := [
  ⟨.ok, fun _ => check (system { name := "poller: callbacks, no waitForever (the host starts the poller)", script := #[.start, .mkFn, .waitCalls], jsCalls := 2 })⟩,
  ⟨.ok, fun _ => check (system { name := "poller: callbacks, then waitForever (main becomes the poller)", script := #[.start, .mkFn, .park], jsCalls := 2 })⟩,
  ⟨.ok, fun _ => check (system { name := "poller: callback, await, async request, waitForever", script := #[.start, .mkFn, .await, .async, .park], jsCalls := 1 })⟩,
  ⟨.ok, fun _ => check (system { name := "poller: async request first (completion thread), callbacks", script := #[.start, .async, .mkFn, .async, .waitCalls], jsCalls := 2 })⟩,
  ⟨.ok, fun _ => check (system { name := "poller: await races the timer and waitForever", script := #[.start, .mkFn, .await, .park], jsCalls := 2, rearms := 2 })⟩,
  ⟨.invariant, fun _ => check (system { name := "mutant: claim_poller without compare-and-swap", script := #[.start, .mkFn, .await, .park], jsCalls := 1, atomicClaim := false })⟩,
  ⟨.deadlock, fun _ => check (system { name := "mutant: completions before the first poll are dropped", script := #[.start, .mkFn, .await, .async, .park], jsCalls := 1, queueCompletions := false })⟩,
  ⟨.deadlock, fun _ => check (system { name := "mutant: no poller is requested for queued events", script := #[.start, .mkFn, .waitCalls], jsCalls := 1, wantPoller := false })⟩
]

/-- Larger bounds (nightly and weekly). -/
def largeCases : List Case := [
  ⟨.ok, fun _ => check (Sync.system { name := "sync (large): callbacks with 3, 0, 3, 2, 1, 3 host calls, spurious wake-ups, timeouts", calls := #[3, 0, 3, 2, 1, 3], spurious := true, timeouts := true })⟩,
  ⟨.ok, fun _ => check (Sync.system { name := "sync (large): 10 callbacks with 1 host call", calls := #[1, 1, 1, 1, 1, 1, 1, 1, 1, 1] })⟩,
  ⟨.ok, fun _ => check (Sync.system { name := "sync (large): proxied work in every callback, host calls 2, 1, 2, 0, 3", calls := #[2, 1, 2, 0, 3], proxied := #[true, true, true, true, true], spurious := true, timeouts := true })⟩,
  ⟨.ok, fun _ => check (Sync.system { name := "sync (large): awaits and nested host calls in 5 callbacks with 2, 1, 2, 1, 3 host calls", calls := #[2, 1, 2, 1, 3], awaits := #[true, false, true, true, false], nested := #[true, true, false, true, true], proxied := #[false, true, false, false, true], spurious := true, timeouts := true })⟩,
  ⟨.ok, fun _ => check (Sync.system { name := "sync (large): task waits (stuck, finishing, stuck) and awaits in 4 callbacks with 1, 2, 1, 1 host calls", calls := #[1, 2, 1, 1], taskWaits := #[true, false, true, false], pureWaits := #[false, true, false, false], awaits := #[false, false, true, true], spurious := true, timeouts := true })⟩,
  ⟨.ok, fun _ => check (Sync.system { name := "slot (large): 30 host calls, replies now or later", sync := false, calls := #[], freeCalls := 30, asyncReplies := true, spurious := true })⟩,
  ⟨.ok, fun _ => check (Poller.system { name := "poller (large): 4 calls, two awaits, two async requests, waitForever", script := #[.start, .mkFn, .await, .async, .async, .await, .park], jsCalls := 4, rearms := 3 })⟩,
  ⟨.ok, fun _ => check (Poller.system { name := "poller (large): 4 calls, two awaits, two async requests, no waitForever", script := #[.start, .mkFn, .await, .async, .await, .async, .waitCalls], jsCalls := 4, rearms := 3 })⟩
]

def allCases : List Case := syncCases ++ pollerCases

end HostBridge
