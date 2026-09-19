# A complete Lean HTTP application on Node

Routing, validation, HTTP parsing/streaming, state, and file persistence are Lean.
The app uses `Std.Http.Server`, `Std.Async`, `Std.Mutex`, `IO.FS`, and an ordinary
`main`. It has no Lasm imports, annotations, wrappers, or JavaScript endpoints.

From the compiler checkout (after `npm ci` and `npm run setup`):

```sh
node lasm-node.js examples/lean-server/Main.lean
```

Visit `http://127.0.0.1:3000/health`. The first run builds the application; later
runs reuse it until sources, dependencies, configuration, or the compiler change.
The default data directory is `./data`, relative to the working directory.
You can choose a port and directory:

```sh
node lasm-node.js examples/lean-server/Main.lean 3001 .work/todos
```

With the compiler package installed in your project:

```sh
npx lasm run Main.lean
npx lasm build Main.lean dist
node dist/main.mjs 3000 ./data
```

Building needs Node 24+ and the complete Lean 4.32.0 distribution. Running `dist`
needs only Node; copy the whole output directory. The package is currently a
local tarball, not a published npm release. This is also an ordinary Lake project:
`lake build server` builds a native executable with the same behavior.

## Endpoints

| Method | Path | Behavior |
| --- | --- | --- |
| GET | `/`, `/health` | Application info and health |
| GET | `/todos`, `/todos/:id` | List or fetch todos |
| POST | `/todos` | Create with `{ "title": "Learn Lean" }` |
| PATCH | `/todos/:id` | Update with `{ "completed": true, "revision": 1 }` |
| DELETE | `/todos/:id` | Delete a todo |
| POST | `/echo` | Echo binary data |
| GET | `/events` | Stream three server-sent events |
| POST | `/shutdown` | Stop accepting connections and exit cleanly |

```sh
curl http://127.0.0.1:3000/todos -H 'content-type: application/json' \
  -d '{"title":"Implement endpoints in Lean"}'
curl http://127.0.0.1:3000/events
curl -X POST http://127.0.0.1:3000/shutdown
```

`App/Server.lean` uses pattern matching as the route table. `App/Model.lean` holds
JSON validation and persistence. A mutex protects read-modify-write operations,
including across async file writes. Saves write a temporary file and rename it.
A stale revision returns 409. Invalid JSON/titles return 400; missing routes and
records return 404. The server limits bodies to 16 KiB and storage to 1,000 todos.

This is a local development example: it binds loopback, has no authentication,
and exposes an administrative shutdown route. One server process owns its data
directory; the mutex does not coordinate separate processes. File replacement
is not a database transaction or a crash-durability guarantee. HTTP is plaintext;
TLS, DNS, and a general outbound HTTP client are outside this milestone.

## Tests

From the compiler root:

```sh
npm run test:lean-server
```

Vitest exercises the same application as Node/Wasm and as a native Lean executable:
CRUD, Unicode, invalid input, revision conflicts, concurrent persistence, binary
and chunked bodies, streaming, disconnects, body limits, malformed HTTP, pipelining,
restart persistence, and graceful shutdown. Additional Wasm cases measure resource
stability and cancellation of a running main. These require local loopback sockets.

The runtime is experimental. Repeated new connections currently retain accept-loop
task continuations until shutdown, so long-running server memory stability remains
open. See the [IO limitations](../../IO_LIMITATIONS.md) for coverage and platform
validation gaps.
