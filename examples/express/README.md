# Express task board with Lean endpoints

A runnable Node.js application with task CRUD, filtering, pagination, optimistic
version checks, aggregate statistics, persistent JSON storage, and imports from
an HTTP template service. Endpoint routing, validation, application logic,
serialization, and decisions to read/write/fetch are implemented in Lean.

Express receives HTTP requests and passes their method, path, query, and body to
the compiled Lean module. Node implements the filesystem and HTTP capabilities
that Lean calls. This demonstrates a substantial REST application using the
current Lasm interfaces; it does not establish compatibility with every Node API.

## Run

From the repository root, with the compiler prerequisites in the
[root README](../../README.md) installed:

```sh
npm ci
npm run setup
npm run build:express
npm run start:express
```

The API listens on `http://127.0.0.1:3000`. `PORT`, `HOST`, and `DATA_DIR` override
the address and storage directory. The default store is
`.work/express-data/tasks.json`. Restarting the server preserves its data.

The build uses Asyncify and needs no experimental JSPI flag. Node currently emits
an experimental WASI warning. Generated `dist/` output is ignored by Git; build
it before running the app. Running an already built app requires Node and Express,
not Lean, Zig, or Binaryen.

```sh
curl http://127.0.0.1:3000/health

curl -i http://127.0.0.1:3000/api/tasks \
  -H 'Content-Type: application/json' \
  -d '{"title":"Ship a Lean endpoint","description":"Exercise real filesystem IO","priority":2}'

curl 'http://127.0.0.1:3000/api/tasks?status=open&limit=10'

curl -X PATCH http://127.0.0.1:3000/api/tasks/1 \
  -H 'Content-Type: application/json' \
  -d '{"version":1,"status":"done"}'

curl http://127.0.0.1:3000/api/stats

curl -i -X DELETE 'http://127.0.0.1:3000/api/tasks/1?version=2'
```

To exercise outbound HTTP, start the optional template service in another terminal:

```sh
npm run templates --workspace @lasm/example-express
```

Then start the task board with its upstream configured:

```sh
TEMPLATE_SERVICE_URL=http://127.0.0.1:3001 npm run start:express
```

```sh
curl http://127.0.0.1:3000/api/tasks/import \
  -H 'Content-Type: application/json' -d '{"templateId":1}'
```

Only the configured service's `/templates/<positive integer>` URLs are accessible
to the guest. Clients select a template ID, not an arbitrary URL. The demo service
provides IDs 1 and 2; a real service can return objects with `title`, optional
`description`, and optional `priority`. Redirects and non-2xx responses fail.

## API

| Method and path | Behavior |
| --- | --- |
| `GET /health` | Lean/Wasm health response; does not read the store |
| `GET /api/tasks` | Filter by `status` and case-sensitive substring `q`; paginate with `offset` and `limit` |
| `POST /api/tasks` | Create a task; return 201, `Location`, and version `ETag` |
| `GET /api/tasks/:id` | Read a task and its `ETag` |
| `PATCH /api/tasks/:id` | Supply current `version` and at least one changed field |
| `DELETE /api/tasks/:id?version=N` | Delete at the current version; return 204 |
| `GET /api/stats` | Count all, open, and completed tasks, and counts by priority |
| `POST /api/tasks/import` | Fetch `{templateId: N}` from the upstream and persist a validated task |

Tasks contain `id`, `title`, `description`, `priority`, `status`, and `version`.
Titles are trimmed and contain 1–120 Unicode characters; descriptions contain up
to 2,000. Priority is 1–5 (default 3), status is `open` or `done` (initially `open`),
and version starts at 1. IDs are positive and never reused. Unknown fields and
invalid types are rejected. List defaults are offset 0 and limit 20; maximum
limit is 100. List order is creation order.

Patches and deletes return 409 for stale versions. The version belongs in the
JSON body or delete query; `If-Match` and conditional GET are not implemented.
Errors have the shape `{ "error": { "code": "...", "message": "..." } }`.

## Where the code runs

- [Model.lean](lean/domain/Model.lean): JSON decoding, task validation, and storage schema
  in the separate `boardDomain` Lake package.
- [App.lean](lean/App.lean): routing, CRUD, queries, version checks, summaries, and
  filesystem/HTTP calls through `Lasm.IO`.
- [app.mjs](app.mjs): Express transport, bounded request queue, cancellation,
  capability restrictions, and atomic file replacement.
- [server.mjs](server.mjs): process configuration and graceful shutdown.
- [templates.mjs](templates.mjs): optional local HTTP upstream.

The Lean application is a normal Lake project. Its path dependency on
`boardDomain` and that package's dependency on `Lasm.IO` are resolved by Lake;
Lasm uses the generated C and package-qualified initializer symbols.

The task board uses one Wasm instance. Its queue serializes each complete Lean IO
call, including read-modify-write operations, so concurrent requests cannot lose
updates within this server. The default limit is 128 active/queued requests;
overload returns 503. Client disconnection cancels queued work or the active host
operation. A failed guest instance can be replaced on the next request.
The queue also waits for the actual host operations to settle after cancellation,
so a late filesystem completion cannot overlap the next transaction or outlive
the directory lock.

The custom write capability writes and syncs a temporary file, then renames it
over the old store. A failure before the rename retains the previous store. This
is atomic replacement, not a database transaction or a power-loss durability
guarantee; the directory is not fsynced. Cancellation cannot undo a committed
rename. Corrupt or unavailable storage returns 503 and is never silently reset.

An exclusive `.task-board.lock` prevents two cooperating server instances from
writing the same directory. A crash leaves the lock behind: verify the previous
process has stopped before removing it. The data directory must be trusted and
must not be modified by other writers while the server is running.

This example is deliberately bounded to 250 tasks, a 4 MiB store/HTTP response,
32 KiB request bodies, and a five-second upstream timeout. It has no authentication,
authorization, database, cross-process coordination beyond the lock, or streaming
endpoints. Run it locally as provided. CPU-bound guest execution cannot currently
be interrupted. Extending host APIs can support more Node facilities, but each
additional capability and workload needs implementation and testing. The present
HTTP capability is GET-only; normal `IO.FS` and `Std.Async` are not supported.

## Tests

```sh
npm run test:express
```

This builds the Lean module and runs 55 Vitest integration cases against real
Express listeners, temporary files, and loopback HTTP services. The endpoints
are not mocked. Two additional host-drain tests deliberately delay real filesystem
writes to verify that cleanup waits even when guest cancellation finishes first
and the host subsequently rejects. Tests cover:

- CRUD, Unicode boundaries, malformed JSON, field/query validation, transport
  limits, filtering, pagination, and summaries.
- 24 concurrent creates, competing versioned updates, persistence across restart,
  directory locking, corrupt storage, and the store's capacity limit.
- Successful remote imports, HTTP errors, redirects, invalid JSON/UTF-8/schema,
  oversized responses, timeouts, disabled capabilities, and disconnection.
- Queue overload, cancellation before queued mutations, and repeated JSON/IO
  workloads with stable Wasm memory after warm-up.

For the compiler and both IO backends, also run:

```sh
npm test
npm run test:jspi
```

On the tested Linux x64 / Node 24.13.1 environment, the example links 449 Lean
modules into 1,332,450 bytes of Wasm (about 1.27 MiB). This verifies the described
workload on that platform, not unrestricted library compatibility or production
readiness. The application uses [Express 5](https://expressjs.com/en/5x/api/) and
[Vitest](https://vitest.dev/guide/), with exact versions recorded in the lockfile.
