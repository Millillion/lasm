# Unreleased

## Standard bindings

- **`Lasm.JS.Node` covers `node:net`, `node:http` and `node:https`.**
  `import Lasm.JS.Node` (or `Lasm.JS.Node.Net`, `.Http`, `.Https`) gives
  `net.createServer`, `net.connect`, `net.Server`, `net.Socket`,
  `net.BlockList`, `net.SocketAddress`; `http.createServer`, `http.request`,
  `http.get`, `http.Server`, `http.IncomingMessage`, `http.ServerResponse`,
  `http.ClientRequest`, `http.Agent`; and the `https` equivalents, generated
  from Node 24.22.2's documentation like the rest of `Lasm.JS.Node`
  (docs/JS_BINDINGS.md, "Standard bindings for Node").
- **Documented events are typed listeners.** `server.onRequest`,
  `socket.onData`, `req.onceResponse`, `child.onceExit`, `stream.onEnd`, …
  take a listener made from a Lean function of the event's documented
  arguments (`http.Server.RequestListener.ofFn fun req res => …`), on every
  generated class. `ChildProcess`'s `'exit'` and `'close'` give the exit code
  and signal as `Option`s.
- `stream.Readable` and `stream.Writable` are `EventEmitter`s and gain
  `pause`, `resume`, `isPaused`, `setEncoding`, `destroy`, `write` and `end`;
  `stream.Duplex` is new (`toWeb`, `fromWeb`).
- Instances of generated `Lasm.JS.Node` types now have explicit names
  (`instFromJSFsStats`); nothing refers to the automatic ones.
