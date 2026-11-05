# Lasm (next release)

Notes for the next release, collected as changes land. They move to
`docs/release/<version>-notes.md` when the version is cut.

## Documentation

- **Bun, Deno and the edge: long `Async` loops.** An `Async` loop (a recursion, `for`, `List.mapM`) of steps that complete at once overflows the JavaScript stack with `RangeError: Maximum call stack size exceeded`. Such steps are synchronous host calls, `IO` actions and `pure` values. The limit is about 2,000 steps on Deno and Workers and 8,000 on Bun; Node has no such limit. Awaited host calls are not affected. The limit and the workaround (`Std.Async.sleep 0` every 100 steps, or fewer host calls) are now documented in docs/BUN_DENO.md, docs/EDGE.md and FUNDAMENTAL_LIMITATIONS.md (#90).

## Testing (no change to how programs build or run)

- **Async loop depth in CI.** The new `async-depth` job (`differential.yml`, `scripts/ci/async-depth.mjs`) measures the deepest `Async` loop on Node, Deno, Bun and workerd for each kind of step. It fails if a limit drops below half its measured value, or if the `Std.Async.sleep 0` workaround stops completing 100,000 steps (#90).
