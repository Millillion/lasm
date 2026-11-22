## Decisions

- **Where the libraries live (A56.2):** every `Lasm.*` library (Lasm.JS, the generated hosts, Lasm.WASI, Lasm.Fastly and Lasm.UI) stays inside `@lasm/cli`; a library becomes its own `@lasm/*` package only when it has users who do not need the compiler, or a release cadence of its own. Nothing changes for programs (docs/api/decisions/0.6.md, A56.2; pending Jordan's sign-off).

## Internals (no change to how programs build or run)

- The API inventory check (`scripts/api/inventory.mjs`) also counts and checks the sub-ids that only a detail heading defines (`0.4-17.1`, `A56.1`): each must be well-formed, defined once, and a sub-id of an entry with a table row. Ids of the form `0.N-M.K` are accepted in tables too.
- The API decision records, ROADMAP.md's Stage 0 state and the performance ratchet's disk-space and build-memory rows are brought up to date with 0.9.0 and 0.10.0.
