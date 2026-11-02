---
title: "A hang found by modelling Lasm's host bridge in Lean"
description: A synchronous JavaScript callback that started a program's first timer hung forever. How we found it, the fix, and the tests that keep it fixed.
date: 2026-11-02
kind: bug-caught
sources:
  - https://github.com/Millillion/lasm/pull/37
  - https://github.com/Millillion/lasm/pull/45
  - https://github.com/Millillion/lasm/blob/main/docs/TESTING.md
  - https://github.com/Millillion/lasm/blob/main/docs/JS_INTEROP.md
aiGenerated: true
---

# A hang found by modelling Lasm's host bridge in Lean

A Lean program compiled by Lasm runs on Node.js as WebAssembly. Lean runs on
its own threads. Node's main thread runs JavaScript. When Lean calls
JavaScript through `Lasm.JS`, or JavaScript calls back into Lean, the two
sides talk through shared memory with `Atomics.wait` and `Atomics.notify`.
We call this the host bridge ([JS_INTEROP.md](../../docs/JS_INTEROP.md)).

Bugs in protocols like this are rare and depend on timing. Lasm 0.3.0 shipped
one: a lost wake-up in a synchronous callback. So in
[PR #37](https://github.com/Millillion/lasm/pull/37) we added three layers of
testing for the bridge. One of them found a second hang.

## How it was found

The first layer is a model of the protocol, written in Lean, in
[`verification/host-bridge/`](../../verification/host-bridge/). Each step of
the model is one access to a shared word, in the same order as the
implementation. A checker, also in Lean, explores every reachable state. It
checks three things:

- **Safety:** no request is served twice, and every reply belongs to its
  request.
- **Deadlock freedom:** every state that isn't final has a next step.
- **Liveness under weak fairness:** nothing loops forever without making
  progress.

The largest configuration has 103,208 states. CI checks all of them in about a
second.

The hang was found while we modelled the lazy completion thread. That is the
thread Lean starts the first time a program makes an asynchronous request
([TESTING.md, Bugs found](../../docs/TESTING.md#bugs-found)). We then
reproduced it on Lasm 0.3.5.

## The bug

A synchronous JavaScript callback into Lean hung forever if the Lean code made
the program's **first** asynchronous runtime request, for example its first
timer. This is what happened:

1. JavaScript calls a synchronous Lean callback. Node's main thread waits for
   the result.
2. The callback starts a timer. That is the program's first asynchronous
   request, so Lean starts its completion thread.
3. Starting a thread (`pthread_create`) from a Lean thread is handed to Node's
   main thread, and the Lean thread waits for it.
4. The main thread is still waiting for the callback, so it never runs the
   handed-over work.

Each side waits for the other.

## The smallest reproduction

The regression program is part 4 of
[`test/fixtures/js-callbacks/Main.lean`](../../test/fixtures/js-callbacks/Main.lean).
A synchronous callback starts a 5 ms timer, and JavaScript calls it with
`Reflect.apply`:

```lean
let timer ← IO.mkRef (none : Option (IO.Promise Unit))
let start ← Function.ofSyncFn fun _ => do
  let t ← Std.Internal.UV.Timer.mk 5 false
  timer.set (some (← t.next))
  return toJS (1 : Nat)
let reflect : Value ← g.get "Reflect" Value
let _ : Value ← reflect.callMethod "apply" #[toJS start, .undefined, .array #[]]
IO.println "sync callback started a timer"
if let some p := ← timer.get then discard <| IO.wait p.result?
IO.println "timer fired"
```

On 0.3.5 this hangs. With the fix, it prints both lines.

## The fix

While the main thread waits for a synchronous callback, it now wakes every
10 ms and runs the work other threads have handed to it. Handed-over work does
not ring the bridge's doorbell, so a short timeout is how the main thread
finds it. The change is in `src/node-js.mjs`.

## The tests that keep it fixed

- **A unit test.** In `test/node-js.test.mjs`, a test makes the handed-over
  work run only when the wait times out. It fails on the old code.
- **The fixture.** Part 4 of `js-callbacks` hangs on 0.3.5 and passes now. The
  stress tests run it hundreds of times per platform.
- **A mutation of the model.** The old wait is one of eight bugs put back into
  the model on purpose. The checker must find each of them, or CI fails. It
  finds the old wait as a cycle that never makes progress. The eight include
  the 0.3.0 hang.

The other two layers from PR #37 also run in CI:

- **Schedule fuzzing:** seeded delays and early wake-ups at every atomic
  operation of the real JavaScript.
- **Trace checking:** the operations the fuzzed runs record must be steps the
  model allows.

## Where it ships

Coming in 0.3.8 ([PR #45](https://github.com/Millillion/lasm/pull/45)).
One case is known and not yet fixed: awaiting an asynchronous operation
inside a synchronous JavaScript callback still hangs.
