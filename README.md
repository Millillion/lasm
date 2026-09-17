# Lasm compiler

Lasm compiles Lean programs to WebAssembly modules callable from Node.js,
browsers, and Cloudflare Workers. It uses Lean's actual object and arbitrary-integer
runtime, with typed JavaScript bindings and explicit asynchronous host capabilities.

The experimental compiler supports normal Lake projects and a local installable
package. Developers need Node 24+ and the exact Lean 4.32.0 toolchain on Linux x64;
the package includes its Wasm libraries, sysroot, and optimizer. Running generated
modules requires only the application host. Nothing has been published.

The initial design discussion is the
[shared Claude conversation](https://claude.ai/share/1a8522ee-e3a9-4ce5-9447-8d8457b6f005).
The full displayed conversation has been reviewed and its key claims tested.

- [Accepted implementation plan](docs/PLAN.md)
- [Developer workflow: Lake and Node projects](docs/DEVELOPER_WORKFLOW.md)
- [Local release packaging and supported platforms](docs/RELEASE.md)
- [Browser, IndexedDB, and Workers adapters](docs/HOSTS.md)
- [Runtime implementation and boundaries](docs/RUNTIME.md)
- [Lean filesystem/HTTP IO and async backends](docs/IO.md)
- [Express task board with Lean endpoints and Vitest tests](examples/express/README.md)
- [Next steps](NEXT_STEPS.md)
- [Feasibility results and corrections](docs/FEASIBILITY.md)
- [Conversation digest and original goals](docs/THREAD_REVIEW.md)
- [Reproduce the local experiments](experiments/feasibility/README.md)

To develop the compiler from this checkout on Linux x64 with Node 24+ and elan's
Lean 4.32.0 installed:

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

The output directory contains the Wasm, Node/browser/Worker ESM factories, runtime
adapters, TypeScript declarations, import manifest, notices, and build report.
Copy that directory into an application. Export signatures are declared
in `lasm.json` and checked by Lean through generated wrappers. Supported boundary
types are `Nat`/`Int` as `bigint`, `String`, `ByteArray` as `Uint8Array`, `UInt32`,
`Bool`, and `Unit` as `undefined`.

Lake handles dependencies and compiler options; Lasm links the reachable runtime
code and uses packaged standard-library archives when installed from a release.
`npm run build:io` builds the actual Lean IO example with Asyncify; it
reads/writes bytes and makes HTTP requests through explicitly supplied Node host
capabilities. Optional JSPI uses the same interface. See [IO.md](docs/IO.md).

The [Express example](examples/express/README.md) uses Lean for endpoint routing,
validation, versioned CRUD, filtering, summaries, and HTTP template imports, with
Node supplying filesystem and HTTP capabilities. Try it with
`npm run build:express` followed by `npm run start:express`; run its real-server
Vitest suite with `npm run test:express`.

Create and validate a local release with `npm run package:release` followed by
`npm run test:release`. The installation suite exercises npm, pnpm, and Yarn with
empty-cache offline installs, Lake dependencies, isolated compiler paths, and
standalone execution. `npm run test:hosts` runs real headless Chrome and local
Cloudflare workerd tests. See the linked docs for prerequisites and scope.

Normal `IO.FS`, native processes/sockets, and unrestricted `Std.Async` remain
outside the supported runtime slice. Unsupported native symbols fail during
linking. Browser support is tested in Chrome and cloud support in local workerd;
no live cloud deployment has been performed. The original research probes remain
available as `npm run probe` and `npm run probe:runtime`.

Development is local on `main`. Commits are unsigned, and no remote is configured.
