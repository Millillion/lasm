# Supabase Edge Functions

Status: **supported from 0.2.0** (Phase 7.4). Nothing is deployed to a Supabase
account: CI serves the functions in Supabase's own edge runtime image. The design and limits are in
[EDGE.md](../EDGE.md).

## Build and deploy

```sh
npx lasm init my-app --template hono --deploy supabase-edge
cd my-app && npm install
npm run build:supabase-edge     # lasm build Main.lean --target supabase-edge → supabase/functions/my-app/
npx supabase functions deploy my-app --project-ref PROJECT_REF
curl -H "Authorization: Bearer $SUPABASE_ANON_KEY" https://PROJECT_REF.supabase.co/functions/v1/my-app/hello/Ada
# {"message":"Hello, Ada, from Lean!"}
```

Lasm never runs the Supabase CLI; you do. `npx supabase functions serve` (it
needs Docker and the local Supabase stack) serves the same directory locally.

The function is named after `package.json`'s `name` (lower case; letters, digits
and `-`, starting with a letter). Supabase passes
`/functions/v1/my-app/PATH` to the function as `/my-app/PATH`; the generated
entry removes `/my-app`, so the Hono routes are the same as on Node and on
every other target (`/`, `/hello/:name`, …).

## What the build writes

| Path | Contents |
| --- | --- |
| `supabase/functions/<name>/index.ts` | The generated entry. It compiles the Wasm, starts Lean once per worker, and serves the handler published with `Lasm.JS.exportDefault` with `Deno.serve`. A stopped instance is replaced on the next request. |
| `supabase/functions/<name>/deno.json` | The import map: every npm module the program imports (from `@[js "module" …]` bindings and `lasm.edge.modules`), pinned to the version installed in `node_modules` (`"hono": "npm:hono@4.13.13"`, and `"hono/"` for subpaths). Run `npm install` before building. |
| `supabase/functions/<name>/lasm/` | The program (`program.wasm.mjs`: the Wasm as a JavaScript module, so Supabase's bundler carries it) and the pure-JS host. |
| `supabase/functions/<name>/build-info.json`, `THIRD_PARTY_NOTICES.txt` | Build record and notices (also inside the inlined Wasm: [LICENSING.md](../LICENSING.md)). |
| `supabase/config.toml` (from `lasm init`) | `[functions.<name>]` with `verify_jwt = true` and the import map. Keep it, or merge it into the file `supabase init` writes. |

Lasm owns `supabase/functions/<name>/` and replaces it on every build; put
other functions in their own directories.

## Blocking waits use Asyncify

Supabase's edge runtime (v1.77.8, V8 11.6) has no JSPI
(`WebAssembly.Suspending` is undefined). The other edge targets suspend Lean's
blocking waits with JSPI; this target links the program with Binaryen's
asyncify pass instead, with the suspending import list limited to the host's
one wait (`lasm_edge_wait`). Everything works as on the other edge targets,
including blocking waits: `Task.get` on unfinished work, `IO.wait`,
`IO.sleep`, `Async.block`, and `IO` awaits of JavaScript promises.

The cost (measured in CI, see below): a larger `program.wasm` and slower
compute-heavy routes. Per-request times stay far under Supabase's 2 s CPU
limit. The Asyncify data buffer holding Lean's suspended stack is 1 MiB; a
blocking wait under very deep recursion that needs more stops the instance (it
is replaced on the next request).

## Testing without an account

CI ([`workers.yml`](../../.github/workflows/workers.yml), through
[`scripts/edge/supabase-ci.mjs`](../../scripts/edge/supabase-ci.mjs)):

- builds the Hono template and [`examples/edge-pure`](../../examples/edge-pure/)
  with `--target supabase-edge`;
- runs Supabase's edge runtime image (`supabase/edge-runtime:v1.77.8`, the
  image `supabase functions serve` uses, pinned by digest and pulled from
  Supabase's GHCR copy, which has the same index digest) in Docker with
  `start --main-service`. The main service starts each function as a user
  worker with the Supabase CLI's options and limits (256 MB, 1 s soft / 2 s
  hard CPU) and its `deno.json` import map;
- checks every Hono route, every `edge-pure` route (blocking `IO.sleep`,
  `Task.get` on a sleeping task, `Async.block`, `Std.Async`, `Std.Mutex`, big
  numbers, time zones, environment variables), five concurrent blocking waits,
  and stopping and replacing the instance;
- probes the runtime for JSPI on every run, so a Supabase release with JSPI is
  noticed;
- checks that the Node link driver's Asyncify link is byte-identical to emcc's.

Not reproduced: Supabase's hosted platform (its bundling at deployment, its
isolate scheduling and its JWT gateway).

## Measured (CI run 40278642433, ubuntu-24.04)

| App | Function directory (gzip) | `program.wasm`, Asyncify / JSPI | Startup on Node 26, Asyncify / JSPI | Per request on Node 26, Asyncify / JSPI | Supabase runtime: first request (cold worker) | Supabase runtime: per request over HTTP |
| --- | --- | --- | --- | --- | --- | --- |
| Hono template | 3.14 MiB (590 KiB) | 2.18 / 0.69 MiB (3.2×) | 79 / 38 ms | `/health` 0.081 / 0.069 ms | 578 ms | 2.0 ms |
| `examples/edge-pure` | 4.00 MiB (780 KiB) | 2.83 / 0.97 MiB (2.9×) | 114 / 78 ms | `/` 0.141 / 0.114 ms; `/primes/10000` 0.47 / 0.26 ms (1.8×) | 442 ms | 2.1 ms |

- Every route passed in the Supabase runtime, including five concurrent
  blocking waits (`IO.sleep 30` and `Task.get` on a sleeping task: 43 ms in
  total, so they interleave) and the instance restart after stack exhaustion.
- The first request includes creating the worker, evaluating the module
  (the Wasm is decoded from base64; V8 11.6 has no `Uint8Array.fromBase64`),
  compiling it and Lean's startup; for the Hono app it also includes the
  runtime fetching `npm:hono` from the registry. Supabase's limits are 20 MB
  per function, 256 MB memory and 2 s CPU per request: all are far away.
- Wasm memory after the checks: 26.6 MiB, as with JSPI.
- The Node link driver's Asyncify link is byte-identical to emcc's
  (`program.wasm` 091f6153…, `program.mjs` 14905595…), and a fresh recording
  matches the committed recipe.

Lean features are those of the edge profile:
[EDGE.md: Edge profile](../EDGE.md#edge-profile-lean-features).
