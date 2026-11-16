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
