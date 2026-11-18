## Standard bindings

- **SQL NULL binds on node:sqlite and bun:sqlite** (docs/api/decisions/0.4.md, 0.4-45). `StatementSync.all`,
  `get`, `run` and `iterate` take `Array (Option …)` (`none` is NULL); Bun's `Statement.all`, `get`, `run` and
  `values` take one `Data` per value (`stmt.all #[.null, toJS 7]`).
  **Migration:** `stmt.all (namedParameters := …) #[…]` is `stmt.allWithNamedParameters named #[…]` (likewise
  `get`, `run`, `iterate`, and `Console.log`'s first argument: `logWithData`); on Bun, `stmt.run #[#[x]]` is
  `stmt.run #[x]`.
- **Constructors of every documented Node class** (0.4-46): `DatabaseSync.new ":memory:"`,
  `stream.Writable.new`, `Hash`, … (38, from the constructor headings of Node's Markdown docs).
- `zlib.gzip`, `gzipSync` and the other convenience methods are no longer marked "Node.js 26 and later".
