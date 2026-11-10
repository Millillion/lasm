# Fastly Compute host ABI, witx (third-party)

These `.witx` files are unmodified copies of
`wasm_abi/compute-at-edge-abi/*.witx` from Viceroy v0.21.1
(https://github.com/fastly/Viceroy/tree/v0.21.1/wasm_abi/compute-at-edge-abi,
commit ba6fb78c02b2f40b70f8c65ab86fa86c66f0641f), the definitions of Fastly
Compute's host calls that Viceroy (`fastly compute serve`) implements and Lasm's
CI runs against. They are newer than the standalone
https://github.com/fastly/compute-at-edge-abi repository (last changed
2022-02-11), which lacks the KV Store, Config Store, Secret Store, cache and
backend modules. They are licensed under the Apache License 2.0 with LLVM
Exceptions (SPDX: `Apache-2.0 WITH LLVM-exception`); the text is in
[LICENSE](LICENSE), copied from the same Viceroy tag (Viceroy has no NOTICE
file).

`scripts/bindings/generate-fastly.mjs` reads them to generate Lasm.Fastly
(`library/Lasm/Fastly/`, `library/c/lasm_fastly.c`); they are not linked into
programs. `test/fastly-bindings.test.mjs` checks these SHA-256 digests:

| File | SHA-256 |
| --- | --- |
| cache.witx | e4ec663410f873159e46831d647e69a48ee73fe79fa6430c99a8c3b89c0c0828 |
| compute-at-edge.witx | ffaae0a9e1f7392a0d2498b9e46c0b034d3d400030d72ef9308e850616166631 |
| config-store.witx | 36eafc1a591d5a734d916cf469a76f4d0c66fc3899da50e5a5d91a10a6af5108 |
| http-cache.witx | e6b6ec8a3b0532d02c6dbe8727524e1f177eb98492b70503ddfb0382d5e01e4c |
| shielding.witx | 01ed27cb319814e30c3d00547d6d917920084b67a9294c678db2445ad7d03f1e |
| typenames.witx | 1506336bf0e0d28a113a177b1450d08663e64a718b670099bd729bd2affd154a |
| LICENSE | 268872b9816f90fd8e85db5a28d33f8150ebb8dd016653fb39ef1f94f2686bc5 |

To move to a newer Viceroy: replace the files with that tag's, update this
table and the version in `generate-fastly.mjs`, `.github/workflows/wasi.yml`'s
`VICEROY_VERSION`, then regenerate (`node scripts/bindings/generate-fastly.mjs`)
and regenerate `library/prebuilt` (docs/WASI_FASTLY_BINDINGS.md).
