# web-app

A browser app in Lean (Lasm.UI): a counter, compiled ahead of time to WebAssembly by
[Lasm](https://github.com/Millillion/lasm). It runs in Chrome, Edge, Firefox and Safari.

## Requirements

Node.js 24 or newer with npm. Lasm downloads Lean <LEAN_VERSION> and its build tools on
the first build (a few hundred MB, cached for later builds).

## Run

```sh
npm install
npm run dev        # http://127.0.0.1:5173: rebuilds when a .lean file changes, then reloads the page
npm run build      # dist/: the static site
npm run preview    # the release build, served on http://127.0.0.1:5173
```

Files:

| File | What it is |
| --- | --- |
| `Main.lean` | The app: a pure `update` and `view` with `Lasm.UI` ([guide](https://github.com/Millillion/lasm/blob/main/docs/UI.md)). |
| `App.lean` | Pure Lean logic used by `Main.lean`. |
| `index.html`, `public/style.css` | The page; `lasm build` adds the loader before `</head>`, and copies `public/` into `dist/`. |
| `lakefile.toml`, `lean-toolchain` | The Lake project, pinned to Lean <LEAN_VERSION>. |
| `package.json` | npm scripts, and Lasm (`@lasm/compiler`) as a dev dependency. |

`App.lean` is pure Lean: `lake build App` checks it natively. `Main.lean` imports
`Lasm.UI`, which ships with Lasm: `npx lasm editor` (also run by `npm run dev`) makes the Lean
editor resolve it ([editor setup](https://github.com/Millillion/lasm/blob/main/docs/GETTING_STARTED.md#editor)).
`lakefile.toml` requires Lasm's library as a Lake package at `.lake/lasm-library`, a link every lasm
command makes: on a fresh clone, run any lasm command once (`npm run dev`, `npx lasm editor`); a plain
`lake build` needs it.

## Deploy

`dist/` is a static site: upload it to any static host or CDN (GitHub Pages,
Cloudflare Pages, Netlify, Vercel, S3 and CloudFront, nginx). Serve `.wasm` as
`application/wasm`; the `.br` and `.gz` copies let the host send compressed files
without compressing them itself. Files named `app.<hash>.*` never change and can be
cached forever. See the [browser deployment guide](https://github.com/Millillion/lasm/blob/main/docs/deploy/browser.md).
