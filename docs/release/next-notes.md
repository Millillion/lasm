# Lasm (next release)

Notes for the next release, collected as changes land. They move to
`docs/release/<version>-notes.md` when the version is cut.

## Changes

- **Edge and browser: a shorter stack-overflow message.** A C-stack overflow on the edge (#115) now stops with "Stack overflow: the program used all of its 1 MiB C stack (deep recursion?). See https://github.com/Millillion/lasm/blob/main/docs/EDGE.md#stack". The original trap is still the error's `cause`.
