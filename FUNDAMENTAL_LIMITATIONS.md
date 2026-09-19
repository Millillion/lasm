# Fundamental limitations

No remaining Lean conformance failure has yet been established as fundamental.
The complete native reference suite passes, but the full Node, Deno, and Bun
conformance work is unfinished. See [current results](docs/FULL_SUITE_RESULTS.md)
and [the remaining IO work](IO_LIMITATIONS.md).

These current restrictions must not be mistaken for fundamental limitations:

| Restriction or observed failure | Current classification |
| --- | --- |
| Signed JavaScript heap indexing above 2 GiB | Fixed SDK port defect; regression passes in all three engines. |
| Host calls stalled above 4 GiB | Repaired bridge defect triggered by Node/Deno truncating cloned typed-array offsets. Numeric-offset requests pass synchronous and asynchronous regressions; full-compiler reruns remain necessary. |
| 32-bit `USize` in the application runtime | Runtime target choice; the experimental full compiler preserves native 64-bit values. |
| 4 GiB memory ceiling in the lowered-memory64 build | Native memory64 accesses above 4 GiB pass in Node and Deno. Bun's experimental memory64 loses its address type when shared memory crosses workers; this is a minimized engine defect, not an established fundamental limit. |
| Bun's small OS worker stack | The exact failing benchmark passes with a Linux diagnostic stack-reservation helper plus a larger JSC budget. Portable integration remains unfinished. |
| Missing runtime externs, module initializers, or compiled symbol lookup | Implementation gaps. |
| Native libraries lacking a Wasm build or host adapter | Missing integration; evaluate the actual dependency before claiming impossibility. |
| Test deadlines or resource exhaustion under instrumentation | Investigate separately with documented parallel-harness adjustments. |
| Untested operating systems or architectures | Validation gaps. |

Any future fundamental classification needs a native comparison, a minimized
reproduction in the affected engine, the precise engine or platform constraint,
and an explanation of why available implementation alternatives do not resolve
it. Passing a smaller application suite does not establish full Lean equivalence.
