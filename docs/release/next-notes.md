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
- Bun and Deno builds load Node's built-in modules (`Lasm.JS.require "node:os"`)
  without listing them in `package.json`'s `lasm.edge.modules`.

## Fixes

- **`lasm init --template fullstack` refuses the function platforms (#168).** With `--deploy lambda`, `lambda-zip`, `lambda-edge`, `vercel`, `netlify`, `azure` or `gcf` it used to write a project that could not deploy there (a `build:undefined` script, no `vercel.json`, `netlify.toml` or `Dockerfile.lambda`, no platform dependency). It now stops with a message naming the templates the target takes and the targets the template takes: `workers`, `vercel-edge`, `netlify-edge`, `deno-deploy`, `fastly`, `wasi-http` and `spin`. Every other refused template and target pair names its alternatives the same way. The other server templates keep every function platform.
