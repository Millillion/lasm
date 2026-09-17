# Browser and Workers adapters

One generated Asyncify Wasm artifact supports Node, browsers, and the tested
Cloudflare Workers runtime. Build once, then select the appropriate ESM loader:

| Loader | Host | Wasm loading |
| --- | --- | --- |
| `index.mjs` | Node | Read bytes from the adjacent file; use Node's WASI adapter |
| `browser.mjs` | Browser / portable JS | Fetch the adjacent file, or accept bytes, a Response, or a compiled module |
| `worker.mjs` | Cloudflare Workers | Statically import the compiled `.wasm` module |

All loaders expose the same typed functions, ownership rules, cancellation,
single-instance busy policy, and disposal behavior. The portable runtime has no
Node imports. Its small WASI reactor adapter implements the measured environment,
clock, and console operations; unsupported descriptors/clocks return WASI errors.
There are no filesystem preopens or environment variables. Stdin is empty, and
stdout/stderr require explicit callbacks. Guest exit throws without exiting the
host. The core remains an experimental Lean runtime slice.

## Browser storage and HTTP

```js
import createModule from './generated/browser.mjs';
import { createWebHost, createIndexedDbStorage } from './generated/web-host.mjs';

const storage = await createIndexedDbStorage({ name: 'my-app-files' });
const host = createWebHost({ storage, fetch: window.fetch.bind(window) });
const lean = await createModule({ host });
await lean.write('greeting', new TextEncoder().encode('Hello from Lean'));
lean.dispose();
storage.close();
```

The exported `write` in this example comes from `examples/io/lasm.json`; application
exports are selected by each project's own manifest. Storage keys represent byte
objects, not an emulated POSIX filesystem. IndexedDB operations use transactions
and honor cancellation. Reopening a database retains successfully committed data.
Custom storage can implement async `get(key, {signal})` and
`put(key, bytes, {signal})` methods instead.

HTTP is explicitly supplied, GET-only, bounded, timed, and rejects redirects and
non-2xx responses. Browser CORS rules apply. Omitting either storage or fetch
disables that capability. Cancellation cannot undo previously committed effects,
and CPU-bound Lean execution cannot be preempted.

## Cloudflare Workers

```js
import createModule from './generated/worker.mjs';
import { createWorkerHost } from './generated/web-host.mjs';

export default {
  async fetch(request, env) {
    const lean = await createModule({
      host: createWorkerHost({ kv: env.DATA, fetch: globalThis.fetch })
    });
    try {
      return new Response(await lean.read('greeting'));
    } finally {
      lean.dispose();
    }
  }
};
```

Workers requires a precompiled module import, which `worker.mjs` supplies; it
does not try to compile arbitrary Wasm bytes inside a request. KV is an explicit
binding and is subject to the platform's consistency, size, and request limits.
It is not a transactional database or a substitute for the Express example's
serialized file store. KV operations cannot be rolled back or forcibly cancelled
after the platform accepts them. A new guest per request avoids sharing suspended
guest state; it does not serialize concurrent access to shared cloud storage.

The runnable local [Worker example](../examples/worker/worker.mjs) demonstrates
Lean byte IO with KV and an explicit upstream service binding. It does not require
an account or deployment for the local acceptance tests.

## Validation

```sh
npm run test:hosts
```

The tests launch a fresh headless Chrome (`LASM_CHROME` can select its executable)
and local `workerd` through pinned Miniflare. They use the actual Wasm, IndexedDB,
HTTP, and Worker KV/service bindings. Browser checks cover big integers, Unicode,
closures, persistent byte storage, successive suspension, missing capabilities,
HTTP failures/redirects/limits, and cancellation. Worker checks cover static Wasm
loading, independent requests, byte storage, HTTP service bindings, failures, and
request limits. Local tests disable Miniflare telemetry and external CF metadata.

These checks establish Chrome and local workerd compatibility. They do not claim
live cloud deployment, production KV consistency, every browser engine, or every
cloud platform. Asyncify is the portable baseline. Node JSPI remains separately
tested; JSPI is not required by these browser/Worker adapters.

Primary references: [Workers Wasm loading](https://developers.cloudflare.com/workers/runtime-apis/webassembly/)
and [Miniflare testing](https://developers.cloudflare.com/workers/testing/miniflare/writing-tests/).
