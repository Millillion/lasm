# WASI 0.2.12 WIT files (third-party)

These `.wit` files are unmodified copies of
`crates/wasi-http/wit/deps/*.wit` from Wasmtime v49.0.4
(https://github.com/bytecodealliance/wasmtime/tree/v49.0.4/crates/wasi-http/wit/deps),
which carries the WASI interface definitions of the WebAssembly System
Interface subgroup (https://github.com/WebAssembly/WASI). They are licensed under
the Apache License 2.0 with LLVM Exceptions (SPDX: `Apache-2.0 WITH
LLVM-exception`); the text is in [LICENSE](LICENSE), copied from the same
Wasmtime tag. Lasm uses them only in CI (`scripts/wasi/make-component-template.mjs`)
to make `src/wasi/component/proxy-template.wasm`.
