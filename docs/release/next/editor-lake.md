## Editor and Lake projects

- **Lake builds Lasm's library modules compiled on first import, in the editor too** (decision 0.3-7). A Lake project requires Lasm's library as a Lake package. `lasm init` writes this in the templates that use the library, and `npx lasm editor` adds it to an existing project:

  ```toml
  [[require]]
  name = "lasm"
  path = ".lake/lasm-library"
  ```

  `.lake/lasm-library` is a link (a junction on Windows) that every lasm command makes or repairs. An editor opening `import Lasm.JS.Web.IndexedDB` now builds the module instead of reporting a missing `.olean`. `lasm build` takes those modules from Lake and links them once.
- Migration: run `npx lasm editor` once in an existing Lake project to add the require. On a fresh clone, run any lasm command once (`npm run dev`, `npx lasm editor`) before a plain `lake build`.
