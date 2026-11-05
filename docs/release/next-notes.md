# Lasm (next release)

Notes for the next release, collected as changes land. They move to
`docs/release/<version>-notes.md` when the version is cut.

## Fixes

- **Lasm.JS: waits inside synchronous callbacks fail at once instead of never finishing.** Inside a `Function.ofSyncFn` callback, waiting for a Lean task that makes host calls (including `Async` run with `.block`), or for a timer, DNS lookup or socket read started in the callback, used to hang the program. It now ends the callback with an error that says what it waited for, as soon as every other Lean thread waits too (JavaScript gets the error; a Lean `try` inside the callback cannot catch it). `Value.await` and the `…Await` forms still fail as errors the callback can catch. A wait for a task that needs nothing from Node still works, and `Value.toTask` without waiting no longer fails: the promise settles after the callback returns. Measured per-call costs (Lean→JS calls, synchronous callbacks, finished-task waits, promise awaits) show no slowdown.

## Documentation

- **Bun, Deno and the edge: long `Async` loops.** An `Async` loop (a recursion, `for`, `List.mapM`) of steps that complete at once overflows the JavaScript stack with `RangeError: Maximum call stack size exceeded`. Such steps are synchronous host calls, `IO` actions and `pure` values. The limit is about 2,000 steps on Deno and Workers and 8,000 on Bun; Node has no such limit. Awaited host calls are not affected. The limit and the workaround (`Std.Async.sleep 0` every 100 steps, or fewer host calls) are now documented in docs/BUN_DENO.md, docs/EDGE.md and FUNDAMENTAL_LIMITATIONS.md (#90).

## Testing (no change to how programs build or run)

- **Async loop depth in CI.** The new `async-depth` job (`differential.yml`, `scripts/ci/async-depth.mjs`) measures the deepest `Async` loop on Node, Deno, Bun and workerd for each kind of step. It fails if a limit drops below half its measured value, or if the `Std.Async.sleep 0` workaround stops completing 100,000 steps (#90).
