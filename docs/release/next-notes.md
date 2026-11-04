# Lasm (next release)

Notes for the next release, collected as changes land. They move to
`docs/release/<version>-notes.md` when the version is cut.

## Breaking changes

These go in the next minor release (0.5.0).

- **Lasm.UI handlers run in the bubble phase.** The applier now listens on the mount element in the bubble phase instead of the capture phase (docs/UI.md, "Event order"). A handler that stops propagation no longer keeps the event from its target's own listeners (including a web component's or widget's), from JavaScript listeners inside the app, or from the app's link routing; it still stops the outer Lasm handlers and listeners on the page around the app (`document`, `window`). The order changes: JavaScript listeners on the target and on elements inside the app now run *before* the Lasm handlers (as with React's root delegation), and a JavaScript listener inside the app that calls `stopPropagation()` now keeps the event from the Lasm handlers. Events that do not bubble (`focus`, `blur`, `mouseenter`, …) still reach their handler; their `stopPropagation` is no longer applied, since such an event goes no further than its target. In an application, a link whose handler stops propagation (without preventing the default) is now routed. Migration: code that relied on a Lasm handler running before JavaScript listeners inside the app should move that logic into Lean or listen in the capture phase.
- **`Attr.onWith` is removed.** It has been the same as `on` since 0.4.0. Migration: `Attr.onWith e d` → `on e d`.

## Fixes

- **Edge and browser: a C-stack overflow is reported as one.** When a program exhausts the edge build's 1 MiB C stack (for example deep recursion with large frames), the instance now stops with "Stack overflow detected: Lean exhausted the edge profile's 1 MiB C stack (WebAssembly linear memory)" instead of "memory access out of bounds". The original trap is the error's `cause`. Other traps are unchanged, and there is no cost per call (#115).
