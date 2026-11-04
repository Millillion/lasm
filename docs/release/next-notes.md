# Lasm (next release)

Notes for the next release, collected as changes land. They move to
`docs/release/<version>-notes.md` when the version is cut.

## Breaking changes

- **Lasm.JS: `Value.await` inside a synchronous callback ends the callback.** Inside a `Function.ofSyncFn` callback, `Value.await` in `IO` used to fail with an error the callback could catch. It now waits like any Lean task wait there, which fails by ending the whole callback: JavaScript gets the error ("Waiting for a JavaScript promise inside a synchronous callback can't finish, …; use Function.ofFn"). Use `Function.ofFn` for callbacks that wait.

## Fixes

- **Lasm.JS: waits inside synchronous callbacks fail at once instead of never finishing.** Inside a `Function.ofSyncFn` callback, waiting for a Lean task that makes host calls (including `Async` run with `.block`), or for a timer, DNS lookup or socket read started in the callback, used to hang the program. It now ends the callback with an error that says what it waited for, as soon as every other Lean thread waits too. A wait for a task that needs nothing from Node still works, and `Value.toTask` without waiting no longer fails: the promise settles after the callback returns. The cost per call is unchanged.

- **Edge and browser: a C-stack overflow is reported as one.** When a program exhausts the edge build's 1 MiB C stack (for example deep recursion with large frames), the instance now stops with "Stack overflow detected: Lean exhausted the edge profile's 1 MiB C stack (WebAssembly linear memory)" instead of "memory access out of bounds". The original trap is the error's `cause`. Other traps are unchanged, and there is no cost per call (#115).
