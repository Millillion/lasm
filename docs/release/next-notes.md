# Lasm (next release)

Notes for the next release, collected as changes land. They move to
`docs/release/<version>-notes.md` when the version is cut.

## Fixes

- **Lasm.JS: waits inside synchronous callbacks fail at once instead of never finishing.** Inside a `Function.ofSyncFn` callback, waiting for a Lean task that makes host calls (including `Async` run with `.block`), or for a timer, DNS lookup or socket read started in the callback, used to hang the program. It now ends the callback with an error that says what it waited for, as soon as every other Lean thread waits too (JavaScript gets the error; a Lean `try` inside the callback cannot catch it). `Value.await` and the `…Await` forms still fail as errors the callback can catch. A wait for a task that needs nothing from Node still works, and `Value.toTask` without waiting no longer fails: the promise settles after the callback returns. Measured per-call costs (Lean→JS calls, synchronous callbacks, finished-task waits, promise awaits) show no slowdown.

- **Edge and browser: a C-stack overflow is reported as one.** When a program exhausts the edge build's 1 MiB C stack (for example deep recursion with large frames), the instance now stops with "Stack overflow detected: Lean exhausted the edge profile's 1 MiB C stack (WebAssembly linear memory)" instead of "memory access out of bounds". The original trap is the error's `cause`. Other traps are unchanged, and there is no cost per call (#115).
