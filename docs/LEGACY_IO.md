# Legacy explicit host IO

The same actual Lean IO program passes filesystem and HTTP tests using Asyncify
without Node flags and JSPI with Node 24's `--experimental-wasm-jspi` flag. These
are separate Wasm artifacts with the same application interface. The JSPI loader
checks engine support and gives a clear error; it does not silently substitute
an Asyncify artifact.

## Build and run

Asyncify uses pinned Binaryen 132.0.0: an npm dependency in the source checkout,
and a standalone bundled optimizer in the compiler release. No system Binaryen
installation is required. `WASM_OPT` selects an explicit maintainer override.

```sh
npm run build:io
```

```js
import createModule from './examples/io/dist/index.mjs';
import { createNodeHost } from './examples/io/dist/host.mjs';

const host = await createNodeHost({
  directory: './data',
  fetch: globalThis.fetch,
  maxBytes: 1024 * 1024,
});
const module = await createModule({ host });
const bytes = await module.readPair('first.bin', 'second.bin');
const controller = new AbortController();
const response = await module.fetch('https://example.com', { signal: controller.signal });
module.dispose();
```

`directory` must already exist. Omitting it disables filesystem access; omitting
`fetch` disables HTTP. Applications can supply their own host functions instead.
The runtime receives no capabilities by default. Input/output byte arrays are
copied across the boundary.

Lean modules use `import Lasm.IO` and these functions:

```lean
Lasm.readBytes  : String → IO ByteArray
Lasm.writeBytes : String → ByteArray → IO Unit
Lasm.fetchBytes : String → IO ByteArray
```

In `lasm.json`, set `"effect": "io"` for an export whose Lean result is `IO T`;
its manifest `"result"` is `T`. The generated JS function returns `Promise<T>`.
Lean checks the declared signature. IO errors become `LeanIOError` rejections,
and Lean `try/catch` can handle host failures before they reach JavaScript.

For a JSPI artifact add top-level `"async": "jspi"`. The default for IO exports
is `"async": "asyncify"`. Run `npm run test:jspi` to exercise the optional backend.

## Operation policies

- Reads and writes use paths within the configured directory. Paths outside it,
  NUL paths, nonregular reads, and terminal symlinks on write are rejected. This
  adapter is for trusted application files, not a race-proof filesystem sandbox.
- Writes replace the destination. Cancellation can leave partial data; it does
  not roll back side effects already performed by a host.
- HTTP supports GET over HTTP/HTTPS, requires a 2xx response, and rejects redirects.
  Both declared content lengths and streamed response bytes are bounded. The
  default HTTP timeout is 10 seconds.
- The bridge caps each request/response at 16 MiB. A Node host can use a lower
  `maxBytes`. Unsupported capabilities reject as ordinary Lean IO errors.
- One async call may execute per instance. Overlapping calls and disposal while
  busy are rejected. Cancel via `AbortSignal`, await completion, then dispose.
  Separate instances can run independently.
- Cancellation interrupts waiting for a host operation and resumes Lean with an
  IO error. A custom host should honor the supplied signal; its external effects
  cannot be rolled back. CPU-bound guest execution is not preempted. Lean can
  catch cancellation like any other IO error.
- Host IO inside module initializers is currently unsupported and fails instance
  creation. This legacy interface is separate from the standard Node runtime documented in
[NODE_APPS.md](NODE_APPS.md).

## Suspension and ownership

The `lasm.request` import copies the key and body before awaiting a host Promise.
While the guest is suspended, response bytes remain in JavaScript. After rewind
(Asyncify) or resumption (JSPI), C allocates the Lean byte array and calls the
synchronous `lasm.copy_response` import. This avoids guest allocation/reentry while
its stack is suspended. Views are recreated after memory growth.

Asyncify instruments indirect calls as well as direct callers. Each suspended invocation has a 256 KiB C stack and a 256 KiB
Asyncify unwind stack. Both backends have tests where a no-inline Lean higher-order
function suspends twice consecutively. Pure exports retain a synchronous JS API.
The internal WASI import allowlist remains separate from the two Lasm imports.

## Evidence

`npm test` covers compiler validation, native/Wasm comparisons, memory/lifecycle
behavior, real Lean Asyncify IO, Lake builds, and target integrity. `npm run test:jspi` passes
the same six IO tests on JSPI, including mutable references and initialization
state. The IO suite performs 349 host operations, including
110 repeated success/failure cycles with linear memory stable after warm-up.

It uses actual temporary files and a loopback HTTP server for binary/Unicode
responses, missing files, HTTP failures, redirect rejection, declared/chunked
oversized bodies, cancellation, and overlapping calls. Permission-denied and
transport-error tests inject host rejections; they do not claim to verify OS
permission handling or a particular network's behavior.

The tested IO program links 300 generated Lean modules. Committed reports under
`docs/evidence` record each backend's artifact size, memory, imports, and build
time. Generated output includes upstream third-party license notices.

The [Express task board](../examples/express/README.md) adds an application-level
Vitest suite against actual HTTP listeners and persistent files. Its Lean
endpoints implement CRUD, validation, search/pagination, optimistic versioning,
statistics, and HTTP imports. The Node adapter queues whole IO calls and provides
atomic file replacement for this example; those policies are application-specific,
not behavior of the general-purpose `createNodeHost` write operation.

The same IO artifact also passes real Chrome IndexedDB/fetch and local Cloudflare
workerd KV/service-binding tests. See [HOSTS.md](HOSTS.md) for portable adapters.
