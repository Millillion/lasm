## Lasm.WASI.Http

- **Helpers for whole bodies and responses** (A31, docs/API_DECISIONS.md):
  `InputStream.readAll`, `OutputStream.writeAll` (4,096 bytes per call),
  `IncomingRequest.readBody` and `respond out status headers body`, in
  `Lasm.WASI.Http.Respond`, imported by `Lasm.WASI.Http`. Migration: none;
  programs may replace their own copies of these helpers. A program that
  defines its own top-level `respond` while `open Lasm.WASI.Http` renames it
  or refers to it with its namespace.
