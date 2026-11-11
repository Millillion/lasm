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
