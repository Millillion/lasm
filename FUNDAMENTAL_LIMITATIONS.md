# Fundamental limitations

No remaining Lean conformance failure has yet been established as fundamental.
The complete native reference suite passes, but the full Node, Deno, and Bun
conformance work is unfinished. See [current results](docs/FULL_SUITE_RESULTS.md)
and [the remaining IO work](IO_LIMITATIONS.md).

These current restrictions must not be mistaken for fundamental limitations:

| Restriction or observed failure | Current classification |
| --- | --- |
| Signed JavaScript heap indexing above 2 GiB | Fixed SDK port defect; regression passes in all three engines. |
| 32-bit `USize` in the application runtime | Runtime target choice; the experimental full compiler preserves native 64-bit values. |
| 4 GiB memory ceiling in the lowered-memory64 build | This build's address-space limit; not established as inherent to all three JavaScript environments. |
| Missing runtime externs, module initializers, or compiled symbol lookup | Implementation gaps. |
| Native libraries lacking a Wasm build or host adapter | Missing integration; evaluate the actual dependency before claiming impossibility. |
| Test deadlines or resource exhaustion under instrumentation | Investigate separately with documented parallel-harness adjustments. |
| Untested operating systems or architectures | Validation gaps. |

Any future fundamental classification needs a native comparison, a minimized
reproduction in the affected engine, the precise engine or platform constraint,
and an explanation of why available implementation alternatives do not resolve
it. Passing a smaller application suite does not establish full Lean equivalence.
