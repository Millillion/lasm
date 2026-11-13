# Lasm (next release): notes in progress

## Breaking: function platforms call the program's fetch handler directly

- **`lasm package` and `lasm build --target netlify|vercel|lambda|lambda-zip|lambda-edge|azure|gcf`
  no longer run an HTTP server.** The program publishes a fetch handler with
  `Lasm.JS.exportDefault`, as on Cloudflare Workers. The platform file that
  Lasm generates exports the handler the platform expects and calls it in the
  same process: there is no `$HOST`/`$PORT` server, no free port and no
  loopback forwarding.
  - Netlify: `export default async (request, context) => …`.
  - Vercel and Google Cloud Functions: Node's `(req, res)` as a web `Request`,
    with the `Response` streamed back.
  - AWS Lambda and Lambda@Edge: each event shape as a `Request`, and the
    `Response` as the event's result.
  - Azure Functions: the `Request`, and the `Response` as `HttpResponseInit`.

  The security fixes stay in place: the Host checks, the Cookie and
  Set-Cookie handling, base64 bodies, `__proto__` header names, decoded paths,
  and empty replies (#80, #82).
- **What breaks:** a program that brings its own HTTP server (Express,
  Fastify, `Std.Http`, or `Node.serve`) can no longer be packaged for a
  function platform. Port it to a fetch handler:

  | Before | Now |
  | --- | --- |
  | `main` listens on `$HOST:$PORT` (Express, Hono on `@hono/node-server`, `Std.Http`) | `def main : IO Unit := exportDefault handle`, with `handle : Request → Async Response` (or `exportDefault app` for a Hono app) |
  | `src/serverless/lasm-server.mjs` in the package | `lasm-function.mjs` and `lasm-node-serve.mjs` |

  Repeated response fields other than Set-Cookie now reach Lambda REST and ALB
  multi-value replies joined (`x: p, q`), as a web `Response` holds them. A
  handler that throws is answered with a 500. A request that no web `Request`
  can hold (TRACE, CONNECT, the target `*`) is answered with a 400.

## New: `Node.serve`

- **`Node.serve`** (`import Lasm.JS.Node.Serve`) serves a Lean
  `Request → Async Response` on Node: `Node.serve { fetch := handle, port := some 3000 }`.
  It is provided by Lasm, not a Node API, and shaped like `Bun.serve`.
  - **Options:** `fetch`, `port`, `hostname`, `signal`, `onListen`, `error`.
  - **Server handle** (passed to `onListen`): `hostname`, `port`, `url`,
    `stop`, `finished`.
  - **Lifetime:** it returns once the server stops (`stop`, the signal,
    SIGTERM or SIGINT).
  - **Behavior:** bodies stream both ways with backpressure, and a client that
    goes away aborts `request.signal`. Each Set-Cookie line is sent on its
    own. HEAD and null-body statuses send no body. An empty body is sent with
    `content-length: 0` and no content type added. A forged Host cannot change
    the request's URL.
  - **Dependencies:** none from npm.
- **Typed `exportDefault`:** `exportDefault handle` takes a Lean function
  directly. `exportDefault (v : Value)` still works.

## Example apps

- **Conduit and Folio build with 0.7.0 and use `Lasm.Fetch` only for Node.**
  Each platform runs the app's handler with its own server: Cloudflare Workers and
  the edge platforms through the program's default export
  (`Lasm.JS.exportDefault`), Deno with `Deno.serve` (`Lasm.JS.Deno`), Bun with
  `Bun.serve` (`Lasm.JS.Bun`), Fastly Compute on its host calls (`Lasm.Fastly`) and
  wasi-http on the proxy world's interfaces (`Lasm.WASI.Http`). Node keeps
  `Lasm.Fetch`'s server until how Lean servers run on Node is decided. What
  `Lasm.Fetch` provided that has no replacement (embedded static files, the
  request type and its path parsing, outbound HTTP on wasi-http, the Worker's
  `env`) is now code inside each app (`Server/` in both), listed in
  docs/REVIEW.md. Conduit reads its Fastly secret with the generated
  `SecretStore` calls. Every platform each app ran on before is still checked
  in CI, with the same suites and thresholds.

- **Porter builds with 0.7.0 and uses `Lasm.Fetch` only for Node**, as
  Conduit and Folio do: Workers through the default export, Deno with
  `Deno.serve`, Bun with `Bun.serve`. Its request type, embedded files and
  cookie joining are code inside the app (`examples/porter/Server/`).

- **Ledger builds with 0.7.0 and uses `Lasm.Fetch` only for Node**, as
  Conduit and Folio do: Workers through the default export, Deno with
  `Deno.serve`, Bun with `Bun.serve`. Its request type and embedded files are
  code inside the app (`examples/ledger/Server/`).
- **Tandem builds with 0.7.0 and no longer uses `Lasm.Fetch`.** Workers serves
  through the default export, Deno with `Deno.serve` and `Deno.upgradeWebSocket`,
  Bun with `Bun.serve` and its WebSocket handlers, Node with Tandem's own
  `node:http` server and the `ws` package, as before. Its request type and
  embedded files are code inside the app (`examples/tandem/Server/`).

## Templates

- **`lasm init --template fetch` no longer uses `Lasm.Fetch` except on Node.**
  `Main.lean` is a handler on the web's `Request` and `Response`
  (`Lasm.JS.Web`), served as the program's default export on Bun, Deno,
  Cloudflare Workers and the other edge targets; Node keeps `Lasm.Fetch`'s
  Node server until Lasm's Node server lands. Fastly, wasi:http and WASI each
  get their own program with the same routes on that platform's own
  interface: `--deploy fastly` adds `Fastly.lean` (`Lasm.Fastly`),
  `--deploy wasi-http` and `--deploy spin` add `WasiHttp.lean`
  (`Lasm.WASI.Http`), and `--deploy wasi` adds `Cgi.lean` (a CGI program in
  Lean's `IO`); their `build:<target>` scripts build them. Existing projects
  keep building: `Lasm.Fetch` still ships.

## Fixes

- **`HTMLCanvasElement.getContext`, `Document.currentScript` and
  `HTMLFormControlsCollection.namedItem` return `none` for `null`.** They were
  `some` of a reference to `null` (an unsupported context id, no current
  script, no such control). The generator now requests a nullable `Value`
  result as data (`Lasm.JS.Web.Support.optionalValue`). Types are unchanged.
