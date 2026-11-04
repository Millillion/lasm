# Proposal: WebSocket upgrades in Lasm.Fetch.serve, and a server-side WebSocket

Status: a draft for Jordan to accept or reject (2026-11-04). Nothing here is
built. It answers Tandem's API proposals in ROADMAP.md (an upgrade hook in
`Lasm.Fetch.serve`; a server-side WebSocket type in `Lasm.Web` shared by
Node, Bun and Deno; Lasm's Bun entry passing `websocket` handlers to
`Bun.serve`; a Durable Object export for Workers) and item 10 of Jordan's
2026-11-04 decisions.

## 1. Motivation

Tandem needs WebSockets, and `Lasm.Fetch.serve` cannot accept them. So
Tandem works around Lasm on every platform:

- **Node** ([Server/NodeWs.lean](../../examples/tandem/Server/NodeWs.lean),
  97 lines): copies `serveNode`'s request handling into its own `node:http`
  server, minus streamed bodies. It accepts upgrades with the `ws` npm
  package, because Node has a WebSocket client but no server.
- **Bun** ([Server/EdgeWs.lean](../../examples/tandem/Server/EdgeWs.lean)):
  Lasm's entry calls `Bun.serve` without `websocket` handlers. So the first
  request installs them with `server.reload`, and an upgrade that is the
  server's very first request is refused once.
- **Deno**: `Deno.upgradeWebSocket` inside a wrapper around
  `jsFetchHandler`.
- **Workers**: no WebSockets at all. Clients long-poll, because sockets
  shared across requests need a Durable Object, and Lasm's Workers entry
  cannot export one.

That is about 200 lines of platform code in an example. Every app that wants
real-time features would repeat it, and two of the workarounds have visible
flaws: the copied server and the refused first upgrade.

## 2. Design in one sentence

**A handler accepts a WebSocket by returning `Response.webSocket handlers`;
`serve` performs the upgrade the platform's own way and calls the handlers
with a `Lasm.Web.Socket`.**

This keeps `Handler := Request → Async Response` unchanged. Routing,
authentication and refusals (`401`, `404`) are ordinary handler code, run
before the upgrade. It matches how the platforms themselves do it: Deno's
`upgradeWebSocket` returns a response, Workers returns a `101` response
carrying a socket, and Bun's `server.upgrade` is called from `fetch`.

## 3. Proposed Lean API

### The socket (Lasm.Web)

The shared, platform-neutral type lives in `Lasm.Web.Socket`, beside the
browser client in [Web/WebSocket.lean](../../library/Lasm/Web/WebSocket.lean),
and reuses its `Message` and `CloseInfo`.

```lean
namespace Lasm.Web

/-- One open WebSocket connection, on any platform: the server's end of an
accepted upgrade, or a browser client's connection (`WebSocket.toSocket`). -/
structure Socket where
  /-- Sends a text or binary frame. Fails once the socket is closing. -/
  send : Message → IO Unit
  /-- Starts the closing handshake (code 1000 or 3000–4999). -/
  close : (code : Nat := 1000) → (reason : String := "") → IO Unit
  /-- The subprotocol agreed in the handshake, or "". -/
  protocol : String
  /-- Bytes queued by `send` and not yet written (0 where the platform
  does not say). -/
  bufferedAmount : IO Nat
  /-- A per-connection id, unique within this process. -/
  id : Nat

def Socket.sendText (s : Socket) (t : String) : IO Unit := s.send (.text t)
def Socket.sendBytes (s : Socket) (b : ByteArray) : IO Unit := s.send (.bytes b)

/-- The browser client as a `Socket` (one code path for client and server
logic, and for tests). -/
def WebSocket.toSocket (ws : WebSocket) : IO Socket
```

### The upgrade (Lasm.Fetch)

```lean
namespace Lasm.Fetch

/-- What a server does with an accepted WebSocket. Each runs on the
platform's event loop; `onMessage` calls for one socket never overlap, and
arrive in order. -/
structure SocketHandlers where
  onOpen : Lasm.Web.Socket → Async Unit := fun _ => pure ()
  onMessage : Lasm.Web.Socket → Lasm.Web.Message → Async Unit
  onClose : Lasm.Web.Socket → Lasm.Web.CloseInfo → Async Unit := fun _ _ => pure ()

structure Response where
  -- … existing fields …
  /-- Set by `Response.webSocket`: accept the request's upgrade. -/
  upgrade : Option (SocketHandlers × UpgradeOptions) := none

structure UpgradeOptions where
  /-- The subprotocol to agree to, chosen from the request's
  `Sec-WebSocket-Protocol`. -/
  protocol : Option String := none
  /-- Larger messages close the socket with 1009. -/
  maxMessageBytes : Nat := 1048576
  /-- Extra response headers (cookies, for example). -/
  headers : Array (String × String) := #[]

/-- Accepts this request's WebSocket upgrade with `handlers`. -/
def Response.webSocket (handlers : SocketHandlers) (options : UpgradeOptions := {}) : Response

/-- Whether `req` asks for a WebSocket (`Upgrade: websocket` on a GET). -/
def Request.isWebSocket (req : Request) : Bool

/-- Whether this platform can accept WebSockets (see §4). -/
def webSocketsSupported : IO Bool
```

Tandem's server becomes:

```lean
def handle (hub : Hub) (req : Request) : Async Response := do
  match req.method, req.segments with
  | "GET", ["doc", name, "ws"] =>
    if !req.isWebSocket then return .text "Expected a WebSocket" 426
    return .webSocket {
      onOpen    := fun s => hub.join name s
      onMessage := fun s m => onMessage name m s
      onClose   := fun s _ => hub.leave name s.id }
  | _, _ => httpRoutes req
```

`NodeWs.lean` and `EdgeWs.lean` are deleted, and so is Tandem's `ws`
dependency.

**Rules.**

- Returning `.webSocket` for a request that is not an upgrade answers `426
  Upgrade Required`.
- On a platform without WebSockets, `serve` answers `501` with the body
  `WebSocket upgrades are not available on <target> (docs/FETCH.md#websockets)`,
  and logs that once per process.
- An exception in a handler closes that socket with code 1011 and is logged.
  It does not stop the server.

## 4. Per-platform mechanics

| Platform | How the upgrade is done | Supported |
| --- | --- | --- |
| Node (`lasm build`), Docker | `serveNode` listens for `node:http`'s `upgrade` event, runs the handler on the request, and on `.webSocket` writes the `101` handshake and speaks RFC 6455 on the raw socket. The framing is in Lean (below). | yes |
| Bun | Lasm's Bun entry passes `websocket` handlers to `Bun.serve` from the start. Lasm's default export becomes `{ fetch, websocket }`. `fetch` calls `server.upgrade(req, { data: { id } })`, and the shared `websocket` handlers dispatch on `ws.data.id` to the Lean `SocketHandlers`. | yes |
| Deno, Deno Deploy | `Deno.upgradeWebSocket(request)`; `serve` returns its `response` and wires the socket's events. | yes |
| Supabase Edge | Same as Deno (it runs Deno and documents WebSocket support); checked in CI on the local stack. | yes, if CI passes |
| Workers | `new WebSocketPair()`; `server.accept()`; return `new Response(null, { status: 101, webSocket: client })`. The socket lives as long as the Worker invocation. Sockets in one isolate can talk to each other; sockets in different isolates cannot (see "Durable Objects" below). | yes, per connection |
| Vercel Edge, Netlify Edge | No WebSocket support on the platform. | 501 |
| Node function platforms (Lambda, Vercel, Netlify, Azure, GCF) | Request/response only. | 501 |
| Fastly Compute | WebSockets need Fastly Fanout, a paid product we can't test locally. | 501 |
| WASI (CGI), wasi-http, Spin | One request per run. | 501 |
| Browser | Not a server. `WebSocket.toSocket` gives clients the same `Socket`. | n/a |

**Node: why framing in Lean, not `ws`.** Otherwise every Node build that
uses WebSockets would need an npm package at run time, which Lasm itself
would have to install and pin.
RFC 6455 framing is small: the handshake is SHA-1 and base64 of the client's
key, which `node:crypto` gives synchronously. The rest is the frame header,
masking, fragmentation, ping/pong and the closing handshake: about 300 lines
of pure Lean. Being pure, it can be proved (§6) and fuzzed natively. The
extension permessage-deflate is not offered at first; clients fall back to
uncompressed frames, as the RFC requires.

**Durable Objects (Workers), a follow-up step.** Tandem's hub, like any
chat-style app, needs every socket of a document in one place. On Workers
that means a Durable Object. The follow-up adds a `[durable]` entry to
Lasm's Workers build: the generated entry exports a class whose `fetch`
runs the same Lean handler, and the Worker forwards upgrades to it by name.
It would use the hibernation API (`state.acceptWebSocket`) so idle sockets
cost nothing. It can be tested under `wrangler dev`, which runs Durable
Objects locally. It is a separate PR and a separate decision (open
question 2), because it adds a build concept, not just a handler.

**Backpressure.** `send` queues. `bufferedAmount` lets a handler slow down.
On Bun it reads `ws.getBufferedAmount()`, on Node our own queue, and on Deno
and Workers `bufferedAmount` where the platform exposes it, 0 otherwise.

## 5. Alternatives considered

1. **`ServeOptions.onUpgrade : Request → Async (Option SocketHandlers)`**, a
   second callback beside the handler. Rejected: routing and authentication
   would be split across two functions, and the handler could no longer
   answer an upgrade request with an ordinary `401`.
2. **A pull-style socket** (`receive : Async (Option Message)`, with the
   handler as one `Async` loop). This is elegant in Lean, but today an
   `Async` loop of a few thousand awaited host calls overflows the
   JavaScript stack on Bun and Deno (#90). A long-lived socket loop would
   hit that limit. Rejected for now. It can be layered on the callbacks
   later as `Socket.messages`, once #90 is fixed.
3. **Bind `ws` on Node.** Less code for us, but it adds a run-time npm
   dependency to every Node build, and the framing would sit outside our
   proofs and fuzzing. Rejected.
4. **Platform-specific modules only** (`Lasm.Bun.WebSocket`, and so on).
   Rejected: this is what Tandem has today, and every app would repeat it.
5. **Recommended:** `Response.webSocket` with callback handlers, one
   `Lasm.Web.Socket` type, Lean framing on Node, the platform's own upgrade
   elsewhere, a `501` where there is none, and Durable Objects as a
   follow-up.

## 6. Test plan

- **Autobahn|Testsuite** (the standard WebSocket conformance suite, about
  500 cases: framing, fragmentation, UTF-8 validation, close codes, limits)
  runs as a client in a container against an echo server built for Node,
  Bun, Deno and workerd (`wrangler dev`). Every case must be "OK" or
  "NON-STRICT", and the report is kept as a CI artifact. For Node this tests
  our own framing. For the others it tests our wiring of the platform's.
- **Target equivalence:** the equivalence harness gains WebSocket
  transcripts (open, send text and binary, ping, a close code), replayed on
  every supported target and compared. On the `501` targets it checks the
  exact status and body.
- **Proofs about the Lean framing:** the parser is total and never reads past
  its input; `parse (encode f) = f` for every frame; unmasking twice is the
  identity; a message over the limit closes with 1009; text that is not
  valid UTF-8 closes with 1007.
- **Fuzzing:** the frame parser runs natively under the in-repo fuzzer on
  every PR, plus a nightly campaign, with Autobahn's malformed frames as the
  seed corpus.
- **Tandem as the real app:** its protocol tests, live simulation and
  Playwright tests (two browsers editing, offline then reconnect) run on
  Node, Bun and Deno over the new API. The Workers job stays on long-poll
  until the Durable Object step.
- **Bun's first request:** a regression test whose very first request is an
  upgrade. It must succeed. Today Tandem's workaround refuses it once.
- **Mutation testing:** the Bun and edge entry glue is already in the
  Stryker set ("edge glue", 97 %); the new branches must keep that score.

## 7. Open questions for Jordan

1. **Lasm.Fetch's future.** Whether to keep, narrow or remove `Lasm.Fetch`
   is still open (deferred 2026-10-28). This proposal adds to `serve`. Is
   that fine before that decision, or should the decision come first?
   (Recommendation: go ahead. WebSockets are part of serving, and if
   Lasm.Fetch is narrowed to a portability layer, this belongs in that
   layer.)
2. **Durable Objects.** Do the Workers Durable Object export as the
   follow-up step (about a week more), or leave Workers apps on long-poll?
3. **Where `Socket` lives.** In `Lasm.Web`, as Tandem's proposal says
   (recommended, because the browser client shares it), or in `Lasm.Fetch`,
   beside the handlers that use it?
4. **Node framing.** Write RFC 6455 in Lean (recommended), or accept `ws` as
   a run-time dependency of Node builds?
5. **Compression.** Is permessage-deflate needed in the first version? It
   is free on Bun, Deno and Workers, but on Node it needs a zlib binding and
   doubles the framing's test surface.

## 8. Effort

About 2½–3 weeks without Durable Objects. Each step is one PR:

- API, `426`/`501` rules, Deno and Workers (per connection): 3 days;
- the Bun entry's `{ fetch, websocket }`: 2 days;
- Node: Lean framing, handshake and proofs: 5–6 days;
- Autobahn and equivalence CI on four runtimes, plus fuzzing: 3 days;
- moving Tandem over, and docs (FETCH.md#websockets, EDGE.md): 2 days.

The Durable Object export adds about 5 days (open question 2).
