# Lasm (next release)

Notes for the next release, collected as changes land. They move to
`docs/release/<version>-notes.md` when the version is cut.

## New

- **Node's own modules from Lean: `Lasm.JS.Node`.** `import Lasm.JS.Node` gives
  typed bindings of Node's server-essential modules, as Node 24's docs define
  them: the file system's promises API (`fsPromises.readFile`, `writeFile`,
  `readdir`, `mkdir`, `stat`, `rm`, `open` and `FileHandle`, …), `path`, `os`,
  `process` (`argv`, `env`, `cwd`, `exit`, `platform`, …), Buffer's encodings
  (`Buffer.from`, `Buffer.toString` with `hex`, `base64`, `latin1`, …,
  `buffer.isUtf8`, `transcode`), `crypto` (`createHash`, `createHmac`,
  `randomBytes`, `randomUUID`, `timingSafeEqual`, and `scrypt`, `pbkdf2` and
  `hkdf` as `Async`), `child_process` (`spawn`, and `execFile` as `Async`),
  `EventEmitter` and `events.once`, and conversions between Node streams and
  web streams. They are generated from Node's API docs (pinned to Node.js
  24.22.2) with the same rules as `Lasm.JS.Web`, run on Node 24 and 26, and on
  Bun and Deno where their Node compatibility implements them
  ([JS_BINDINGS.md](../JS_BINDINGS.md#standard-bindings-for-node-lasmjsnode)).
  `node:http` and `node:net` are not bound: Node servers go through an npm adapter.
- **Servers on Deno and Bun from Lean: `Lasm.JS.Deno` and `Lasm.JS.Bun`.**
  `Deno.serve` (with its options, TLS, `shutdown` and `finished`) and `Bun.serve`
  (with `fetch`, `port`, `hostname`, `stop`, `requestIP`, `reload`, …) take a Lean
  handler from a Lasm.JS.Web `Request` to a `Response`:
  `Deno.serveWithOptions { port := some 8000 } (← Deno.ServeHandler.ofFn fun request _ => handle request)`.
  They are generated from Deno's and Bun's own TypeScript declarations (Deno
  2.9.6, Bun 1.4.4) with the same rules as `Lasm.JS.Web`; experimental members
  are left out. On Node, serve the same handler through an npm adapter such as
  `@hono/node-server`, bound with `@[js]`
  ([JS_BINDINGS.md](../JS_BINDINGS.md#servers-on-javascript-runtimes-lasmjsdeno-lasmjsbun-and-node)).
- Bun and Deno builds load Node's built-in modules (`Lasm.JS.require "node:os"`)
  without listing them in `package.json`'s `lasm.edge.modules`.

## Fixes

- **`lasm init --template fullstack` refuses the function platforms (#168).** With `--deploy lambda`, `lambda-zip`, `lambda-edge`, `vercel`, `netlify`, `azure` or `gcf` it used to write a project that could not deploy there (a `build:undefined` script, no `vercel.json`, `netlify.toml` or `Dockerfile.lambda`, no platform dependency). It now stops with a message naming the templates the target takes and the targets the template takes: `workers`, `vercel-edge`, `netlify-edge`, `deno-deploy`, `fastly`, `wasi-http` and `spin`. Every other refused template and target pair names its alternatives the same way. The other server templates keep every function platform.
- **Lasm.JS: an object field named `__proto__` crosses as a field.** A Lean
  `Data.object` with a `__proto__` key used to set the JavaScript object's
  prototype instead (on Node and on the edge); it is now an own property, as
  `JSON.parse` makes it. The JavaScript reader also refuses what Lean's reader
  refuses, so the two agree on every input: text that is not UTF-8, and
  bigint text other than Lean's (`String.toInt?`). Lean never writes either,
  so no program sees a difference. Found by the new `lasm-js-wire` fuzz target,
  which checks the JavaScript codec against Lean's on every input
  (docs/TESTING.md, "Fuzzing at the boundaries").

## Repository

- **Housekeeping (no behaviour change).** The repository's root `lean-toolchain` names Lean 4.35.0 instead of the retired 4.32.0 (it is read only by editors and by pin-less fixtures; the published `@lasm/cli` is unchanged), eight Node diagnostic reports committed by accident are deleted (and ignored from now on), and docs/RELEASE.md no longer describes the removed `npm run test:release`.
