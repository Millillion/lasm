# Lasm (next release)

Since 0.6.0 (docs/release/0.6.0-notes.md), main has had only benchmark records; this release's work is mutation testing of every JavaScript module under `src/` (docs/TESTING.md, "Mutation testing"), and the fixes below are bugs those tests found.

## Fixes

- **A browser app loads when its server sends `application/wasm` with parameters.** The loader took WebAssembly's streaming compilation for any `Content-Type` that began with `application/wasm`, but `WebAssembly.compileStreaming` accepts exactly `application/wasm`, so a server that sent, for example, `application/wasm; charset=binary` made the app fail to start instead of using the buffered path meant for unusual types. Only an exact `application/wasm` (any case) streams now.
- **`app.send`, a port's `send` and messages queued before Lean's handler reject instead of throwing.** A `Lasm.Web.App` message or port handler that threw synchronously threw out of `send` at the JavaScript caller (and, for messages sent before Lean registered its handler, out of Lean's `onMessage`, leaving the queued messages' promises unsettled). The caller's promise now rejects with the handler's error, and every queued message is delivered.
- **A failing async Lean event handler is reported once.** `lasm:web`'s listeners report a handler's rejected promise to the app; the promise was also handed back to the event target, and Node's `EventTarget` (edge and server targets) turns a listener's rejected promise into an uncaught exception. The listener now hands back a promise that does not reject.
- **`Lasm.Web.Canvas.draw` rejects every unknown command.** A command named like an `Object` method (`constructor`, `toString`) was run as one instead of failing with "unknown drawing command".
- **A browser build into `public/` leaves nothing behind.** `lasm build --target browser --output public/dist` was refused, as it should be, but only after its staging directory had been created inside `public/`, where the next build then found it.
