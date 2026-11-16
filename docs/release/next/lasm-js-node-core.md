## Standard bindings

- **`Lasm.JS.Node` is every Node core module** (docs/api/decisions/0.4.md, 0.4-33 to
  0.4-38): all of Node's documented modules (`zlib`, `dns`, `tls`, `http2`,
  `worker_threads`, `util`, `v8`, `vm`, `sqlite`, `readline`, `node:test`, …),
  the callback and synchronous forms of `node:fs`, and Experimental, Deprecated
  and Legacy members (marked in their doc comments), plus what only Node 26
  documents (marked "Node.js 26 and later"). Example: `examples/node-core`.
  **Imports:** no umbrella module: import each module you use
  (`import Lasm.JS.Node.Fs`, `.Path`, `.Crypto`, `.Http`, …). The core set
  (`fs`, `path`, `os`, `process`, `buffer`, `crypto`, `child_process`,
  `events`, `stream`, with `async_hooks`, `net` and `readline`) ships compiled;
  every other module compiles on first use.
  **Migration:**
  - `import Lasm.JS.Node` is gone: import the modules you use
    (`import Lasm.JS.Node.Fs`, `import Lasm.JS.Node.Http`, …).
  - `crypto.randomUUID` (and `getRandomValues`, `subtle`) moved to
    `Lasm.JS.Web`: `(← Lasm.JS.Web.crypto).randomUUID`.
  - `Buffer.from s (some "hex")` is `Buffer.fromWithString s (some "hex")`
    (`Buffer.from` has four documented forms: `fromWithString`,
    `fromWithArrayBuffer`, `fromWithBuffer`, `fromWithObject`).
  - Other names whose documented form gained overloads follow the same rule;
    `scripts/bindings/node-surface.json` lists every generated name.
