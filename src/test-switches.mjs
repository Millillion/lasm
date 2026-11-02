// Build switches for Lasm's own tests only: undocumented for users, listed in
// docs/TESTING.md, never set by the CLI.
//
// LASM_TEST_UNOPTIMIZED=1: build the program with optimization off, for the
// differential tester's optimization differential (scripts/differential/run.mjs
// targets node-O0, wasi-O0, deno-O0): the program's C at clang -O0, the Node
// link without Binaryen's optimization passes (the unoptimized probe link, as
// LASM_LINK_DEBUG), the edge link as in the dev profile (only the passes the
// program needs) and WASI's wasm-opt at -O0 (lowering passes only). The
// precompiled runtime archives are unchanged. The switch is part of the build's
// cache identity, so optimized and unoptimized outputs never share a cache entry.
export const testUnoptimized = (env = process.env) => env.LASM_TEST_UNOPTIMIZED === '1';
