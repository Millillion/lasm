# Lasm (next release)

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
