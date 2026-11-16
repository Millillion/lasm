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
  for Deno"; docs/API_DECISIONS.md 0.4-5, 0.4-7, 0.4-9, 0.4-10 to 0.4-15.
- **`Lasm.JS.Deno` and `Lasm.JS.Bun` are not prebuilt.** Their modules ship as source
  and compile on the first build that imports them (docs/api/decisions/0.4.md, 0.4-20),
  so the package does not grow with them.
- **Deno KV needs Deno's `--unstable-kv` flag on the Deno CLI** (`deno run -A
  --unstable-kv deno/main.mjs`); Deno Deploy provides KV without it.
- **`Deno.serveWithUnixOptions`** serves on a Unix domain socket.
- Async iterables (`Deno.readDir`, `Kv.list`, a listener's connections, `FsWatcher`)
  have `values` (every value, read to the end) and `iterator` with `next` (one at a
  time).
- New example: [examples/deno-kv](../../../examples/deno-kv), a todo API on Deno KV,
  built and checked by CI.

## Migration (Lasm.JS.Deno)

- `Lasm.JS.Deno.TlsCertifiedKeyPemKeyFormat` is now
  `Lasm.JS.Deno.ServeTcpTlsOptionsKeyFormat` (the type of
  `ServeTcpTlsOptions.keyFormat`; its constructor `.pem` is unchanged).
- `Lasm.JS.Deno.NetAddr` moved from `Lasm.JS.Deno.Serve` to `Lasm.JS.Deno.Net`
  (`import Lasm.JS.Deno.Serve` still brings it).
