# Lasm (next release)

Notes for the next release, collected as changes land. They move to
`docs/release/<version>-notes.md` when the version is cut.

## Faster

- **Lasm.JS calls on Node cost about 5 µs when a Lean thread makes them one after another (#171).** They cost 22–24 µs before. Neither thread now goes to sleep between consecutive calls. Calls that pass a 20-field object each way are about twice as fast on Node, and a third faster on the edge hosts (measured on Deno). A lone call, or calls while an HTTP server is under load, cost what they did, and HTTP throughput is unchanged. No API changed ([BENCHMARKS.md](../BENCHMARKS.md#lasmjs-call-cost)).
