# Next release (unreleased)

Changes since 0.8.0, collected until the release's version bump turns this
file into `<version>-notes.md`.

## Lasm.WASI.Http

- **Helpers for whole bodies and responses** (A31, docs/API_DECISIONS.md):
  `InputStream.readAll`, `OutputStream.writeAll` (4,096 bytes per call),
  `IncomingRequest.readBody` and `respond out status headers body`, in
  `Lasm.WASI.Http.Respond`, imported by `Lasm.WASI.Http`. Migration: none;
  programs may replace their own copies of these helpers. A program that
  defines its own top-level `respond` while `open Lasm.WASI.Http` renames it
  or refers to it with its namespace.

## Lasm.JS

- **Bind your own JavaScript files** (A6.1, docs/API_DECISIONS.md):
  `@[js "./ffi/stream.mjs" "writeAndEnd"]` names an ES module of the project,
  relative to the Lean file, and `lasm build` ships it, with the files it
  imports by relative path, on every target. Migration: a local `file:` npm
  package used only for this can become a project file.
- **JavaScript classes from Lean** (A6.2): `Lasm.JS.Class.define` (`import
  Lasm.JS.Class`) makes a real `class Name extends Base` whose constructor,
  methods and getters are Lean functions given `this`, for APIs that take a
  class (`customElements.define`, `Error` subclasses). Migration: none.
