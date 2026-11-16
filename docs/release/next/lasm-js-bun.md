## Standard bindings

- Deno's experimental and unstable APIs that work from Wasm are generated too:
  `Deno.spawn`, VSOCK (`serveWithVsockOptions`, `listen`, `connect`), QUIC
  (`Deno.connectQuic`, `QuicEndpoint`), `Deno.listenDatagram`. Run them with Deno's
  `--unstable-*` flags.
- **`Lasm.JS.Bun` is the whole `Bun` namespace and `bun:sqlite`.** Generated from Bun
  1.4.4's `bun-types` by the same generator: files (`Bun.file`, `Bun.write`),
  processes (`Bun.spawn`, `Bun.spawnSync`), TCP and UDP sockets (`Bun.listen`,
  `Bun.connect`, `Bun.udpSocket`), `bun:sqlite` (`Bun.Database`, `Bun.Statement`),
  `Bun.SQL`, `Bun.RedisClient`, `Bun.S3Client`, `Bun.password`, `Bun.CryptoHasher`,
  `Bun.Glob`, compression, `Bun.TOML`/`YAML`/`JSON5`/`XML`, and **WebSockets in
  `Bun.serve`** (`websocket` handlers, `Server.upgrade`, `Server.publish`,
  `ServerWebSocket`). New modules `Lasm.JS.Bun.Core`, `.Shell`, `.Sqlite`, `.Sql`,
  `.Redis`, `.S3`. Excluded with reasons: the `$` shell and the `sql` tagged
  templates, the bundler, `Bun.fetch` (Lasm.JS.Web's), deprecated and experimental
  members. docs/JS_BINDINGS.md, "Standard bindings for Bun"; API_DECISIONS 0.4-4,
  0.4-7, 0.4-8, A24.1, 0.4-17.x.
- New example: [examples/bun-sqlite](../../../examples/bun-sqlite), a todo API on
  `bun:sqlite`, built and checked by CI.

## Migration (Lasm.JS.Bun, Lasm.JS.Deno)

- `Lasm.JS.Bun.ServeOptions.fetch` is optional (`Option ServeOptionsFetch`): a value
  still coerces (`{ fetch, port := … }` compiles unchanged). `ServeOptions` gains
  `routes`, `websocket`, `unix`, `tls`, `development` and the `http1`/`http2`/`http3`
  flags.
- `Deno.utime`, `utimeSync` and `FsFile.utime` take `Data` for the times (a number of
  seconds or a `Date`): `toJS (1000000 : Float)`. A union with an object member
  (`number | Date`) is now `Data`.
