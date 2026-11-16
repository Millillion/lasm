# Unreleased

## Standard bindings

- **`Lasm.JS.Deno` is the whole `Deno` namespace.** Generated from Deno 2.9.6's own
  TypeScript declarations (`lib.deno.ns.d.ts`, `lib.deno_net.d.ts`, and Deno KV and
  `Deno.cron` from `lib.deno.unstable.d.ts`) by the new `scripts/bindings/ts-auto.mjs`:
  the file system (`Deno.readFile`, `Deno.open`, `FsFile`, `Deno.readDir`, `watchFs`,
  …), subprocesses (`Deno.Command`, `ChildProcess`), TCP, TLS and Unix sockets and DNS
  (`Deno.listen`, `Deno.connect`, `Deno.resolveDnsMx`, …), the process (`Deno.env`,
  `Deno.args`, `Deno.exit`, signals), permissions, standard streams,
  `Deno.upgradeWebSocket`, `Deno.createHttpClient`, and **Deno KV** (`Deno.openKv`,
  `Kv`, `AtomicOperation`, `KvU64`) with `Deno.cron`. New modules:
  `Lasm.JS.Deno.Runtime`, `.Permissions`, `.Io`, `.Fs`, `.Subprocess`, `.Net`,
  `.WebSockets`, `.Fetch`, `.Kv` (`import Lasm.JS.Deno` imports them all). Exclusions,
  each with its reason, are in `scripts/bindings/deno-tier2.mjs` (FFI, `Deno.test`,
  experimental APIs, in-place buffer reads). docs/JS_BINDINGS.md, "Standard bindings
  for Deno"; docs/API_DECISIONS.md A2.1, A25.1, 0.4-10 to 0.4-15.
- **Deno KV needs Deno's `--unstable-kv` flag on the Deno CLI** (`deno run -A
  --unstable-kv deno/main.mjs`); Deno Deploy provides KV without it.
- **`Deno.serveWithUnixOptions`** serves on a Unix domain socket.
- Async iterables (`Deno.readDir`, `Kv.list`, a listener's connections, `FsWatcher`)
  have `values` (every value, read to the end) and `iterator` with `next` (one at a
  time).
- New example: [examples/deno-kv](../../examples/deno-kv), a todo API on Deno KV,
  built and checked by CI.

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
  members. docs/JS_BINDINGS.md, "Standard bindings for Bun"; API_DECISIONS 0.4-16
  onwards, A24.1, A25.2.
- New example: [examples/bun-sqlite](../../examples/bun-sqlite), a todo API on
  `bun:sqlite`, built and checked by CI.

### Migration
### Migration

- `Lasm.JS.Deno.TlsCertifiedKeyPemKeyFormat` is now
  `Lasm.JS.Deno.ServeTcpTlsOptionsKeyFormat` (the type of
  `ServeTcpTlsOptions.keyFormat`; its constructor `.pem` is unchanged).
- `Lasm.JS.Deno.NetAddr` moved from `Lasm.JS.Deno.Serve` to `Lasm.JS.Deno.Net`
  (`import Lasm.JS.Deno.Serve` still brings it).
- `Lasm.JS.Bun.ServeOptions.fetch` is optional (`Option ServeOptionsFetch`): a value
  still coerces (`{ fetch, port := … }` compiles unchanged). `ServeOptions` gains
  `routes`, `websocket`, `unix`, `tls`, `development` and the `http1`/`http2`/`http3`
  flags.
