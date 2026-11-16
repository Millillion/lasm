## Lasm library

- **Generated binding modules are compiled on first import** (decision 0.3-6, PR #313, [docs/HOW_LASM_WORKS.md](../../HOW_LASM_WORKS.md)). Modules of `Lasm.JS.Web`, `Lasm.JS.Node`, `Lasm.JS.Deno`, `Lasm.JS.Bun` and `Lasm.JS.Cloudflare` outside the small core set ship as Lean source. The first build (or `npx lasm editor`) that imports one compiles it once into Lasm's cache (`[lasm] Compiling Lasm.JS.Web.IndexedDB (first use)…`), and every later build reuses it.
