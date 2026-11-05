# Lasm (next release)

Notes for the next release, collected as changes land. They move to
`docs/release/<version>-notes.md` when the version is cut.

## Breaking changes

- **Lasm.UI handlers run in the bubble phase.** The applier now listens on the mount element in the bubble phase instead of the capture phase (docs/UI.md, "Event order"). A handler that stops propagation no longer keeps the event from its target's own listeners (including a web component's or widget's), from JavaScript listeners inside the app, or from the app's link routing; it still stops the outer Lasm handlers and listeners on the page around the app (`document`, `window`). The order changes: JavaScript listeners on the target and on elements inside the app now run *before* the Lasm handlers (as with React's root delegation), and a JavaScript listener inside the app that calls `stopPropagation()` now keeps the event from the Lasm handlers. Events that do not bubble (`focus`, `blur`, `mouseenter`, …) still reach their handler; their `stopPropagation` is no longer applied, since such an event goes no further than its target. In an application, a link whose handler stops propagation (without preventing the default) is now routed. Migration: code that relied on a Lasm handler running before JavaScript listeners inside the app should move that logic into Lean or listen in the capture phase.
- **`Attr.onWith` is removed.** It has been the same as `on` since 0.4.0. Migration: `Attr.onWith e d` → `on e d`.
- **`--output` names the deployable directory for edge, WASI and browser targets.** `lasm build Main.lean --target workers --output DIR` (likewise `bun`, `deno`, `deno-deploy`, `supabase-edge`, `wasi`, `wasi-http`, `fastly`, `browser`) now writes that target's directory to `DIR`. Without `--output` each target writes its usual directory in the project (`workers/`, `bun/`, `wasi/`, …), and no Node build is written to `dist/`: the Node build these targets relink stays in the build cache. `vercel-edge` and `netlify-edge` refuse `--output`, since the platform fixes their layout. `node` and the function platforms (`lambda`, `vercel`, …) are unchanged.

  Migration:
  - Drop `--output` from platform builds that used it to move the Node build out of the way (`lasm build Server.lean --target workers --output dist/server` → `lasm build Server.lean --target workers`), or keep it if you want the platform directory there and update your platform config (for example `main` in `wrangler.toml`).
  - If you ran or packaged the `dist/` that a platform build wrote, build it explicitly: `lasm build Main.lean --target node` (or `lasm build Main.lean` under Node).
  - Delete a stale Node build left at a platform `--output`; Lasm refuses to replace it and says so.

## Changes

- **Edge and browser: a shorter stack-overflow message.** A C-stack overflow on the edge (#115) now stops with "Stack overflow: the program used all of its 1 MiB C stack (deep recursion?). See https://github.com/Millillion/lasm/blob/main/docs/EDGE.md#stack". The original trap is still the error's `cause`.

## Documentation

- **Bun, Deno and the edge: long `Async` loops.** An `Async` loop (a recursion, `for`, `List.mapM`) of steps that complete at once overflows the JavaScript stack with `RangeError: Maximum call stack size exceeded`. Such steps are synchronous host calls, `IO` actions and `pure` values. The limit is about 2,000 steps on Deno and Workers and 8,000 on Bun; Node has no such limit. Awaited host calls are not affected. The limit and the workaround (`Std.Async.sleep 0` every 100 steps, or fewer host calls) are now documented in docs/BUN_DENO.md, docs/EDGE.md and FUNDAMENTAL_LIMITATIONS.md (#90).

## Testing (no change to how programs build or run)

- **Async loop depth in CI.** The new `async-depth` job (`differential.yml`, `scripts/ci/async-depth.mjs`) measures the deepest `Async` loop on Node, Deno, Bun and workerd for each kind of step. It fails if a limit drops below half its measured value, or if the `Std.Async.sleep 0` workaround stops completing 100,000 steps (#90).
