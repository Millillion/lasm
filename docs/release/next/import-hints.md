## Lasm.JS bindings

- **Missing-import hints** (decision 0.3-20). Lasm's generated bindings have no catch-all import, so a program that uses, for example, `fetch` must import its module. When `lasm build` or `lasm dev` fails on a name that a generated module defines, the error is followed by the import to add:

  ```
  Main.lean:4:12: error: Unknown identifier `fetch`
  hint: fetch is defined in Lasm.JS.Web.Fetch; add: import Lasm.JS.Web.Fetch
  ```

  A name that several runtimes define lists one import per runtime (`serve`: `Lasm.JS.Node.Serve`, `Lasm.JS.Deno.Serve`, `Lasm.JS.Bun.Serve`).
