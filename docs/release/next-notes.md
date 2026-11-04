# Lasm (next release)

Notes for the next release, collected as changes land. They move to
`docs/release/<version>-notes.md` when the version is cut.

## Fixes

- **Edge and browser: a C-stack overflow is reported as one.** When a program exhausts the edge build's 1 MiB C stack (for example deep recursion with large frames), the instance now stops with "Stack overflow detected: Lean exhausted the edge profile's 1 MiB C stack (WebAssembly linear memory)" instead of "memory access out of bounds". The original trap is the error's `cause`. Other traps are unchanged, and there is no cost per call (#115).
