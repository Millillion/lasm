# Lasm compiler

Lasm aims to compile Lean programs to WebAssembly for use from Node.js, with
browser and other JavaScript hosts as later targets.

The first local compiler is working. It builds typed, callable Node modules from
Lean 4.32.0 source, including Lean's actual object and arbitrary-integer runtime.
This is an experimental source build, not a published or generally compatible
compiler package. The eventual installation goal remains Lean + Node.js without
a separately managed C/C++ SDK.

The initial design discussion is the
[shared Claude conversation](https://claude.ai/share/1a8522ee-e3a9-4ce5-9447-8d8457b6f005).
The full displayed conversation has been reviewed and its key claims tested.

- [Accepted implementation plan](docs/PLAN.md)
- [Runtime implementation and boundaries](docs/RUNTIME.md)
- [Lean filesystem/HTTP IO and async backends](docs/IO.md)
- [Express task board with Lean endpoints and Vitest tests](examples/express/README.md)
- [Next steps](NEXT_STEPS.md)
- [Feasibility results and corrections](docs/FEASIBILITY.md)
- [Conversation digest and original goals](docs/THREAD_REVIEW.md)
- [Reproduce the local experiments](experiments/feasibility/README.md)

On Linux x64 with Node 24, elan's Lean 4.32.0, and Binaryen 108 (`wasm-opt`) installed:

```sh
npm ci
npm run setup
npm test
npm run build:example
node --input-type=module -e "import createModule from './examples/basic/dist/index.mjs'; const m = await createModule(); console.log(m.square(2n ** 128n)); m.dispose();"
```

`setup` explicitly downloads and verifies the pinned reference toolchain and Lean
source into `.cache`. There is no install hook. Building is local:

```sh
node bin/lasm.mjs build examples/basic/lasm.json .work/my-module
```

The output directory contains the Wasm, ESM factory, runtime adapter, TypeScript
declarations, import manifest, and build report. Copy that directory to a Node
application; execution needs no Lean or C compiler. Export signatures are declared
in `lasm.json` and checked by Lean through generated wrappers. Supported boundary
types are `Nat`/`Int` as `bigint`, `String`, `ByteArray` as `Uint8Array`, `UInt32`,
`Bool`, and `Unit` as `undefined`.

Local modules and their standard-library runtime dependencies are compiled from
source. `npm run build:io` builds the actual Lean IO example with Asyncify; it
reads/writes bytes and makes HTTP requests through explicitly supplied Node host
capabilities. Optional JSPI uses the same interface. See [IO.md](docs/IO.md).

The [Express example](examples/express/README.md) uses Lean for endpoint routing,
validation, versioned CRUD, filtering, summaries, and HTTP template imports, with
Node supplying filesystem and HTTP capabilities. Try it with
`npm run build:express` followed by `npm run start:express`; run its real-server
Vitest suite with `npm run test:express`.

Lake dependency resolution, normal `IO.FS` compatibility, release packaging, and
browser loading remain future work. Unsupported native symbols fail during
linking. The original research probes remain available as `npm run probe` and
`npm run probe:runtime`.

Development is local on `main`. Commits are unsigned, and no remote is configured.
