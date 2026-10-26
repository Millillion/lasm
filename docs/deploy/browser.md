# Deploying a Lean browser app

`lasm build Main.lean --target browser` writes a static site to `dist/`
([BROWSER.md](../BROWSER.md)). Any static host or CDN serves it; nothing runs
on the server.

```
dist/
  index.html               your index.html with the loader injected (or a generated page)
  app.<hash>.js            the loader: mount API, Lean runtime host, program glue
  app.<hash>.wasm          the Lean program
  app.<hash>.{js,wasm}.br  brotli copies (quality 11)
  app.<hash>.{js,wasm}.gz  gzip copies (level 9)
  app.js                   a stable name that re-exports app.<hash>.js
  lasm-manifest.json       file names, sizes, digests, transfer totals
  THIRD_PARTY_NOTICES.txt  licences of the Lean runtime and libraries in the Wasm
  …                        your public/ files, copied as they are
```

## What the host must do

| Requirement | Why |
| --- | --- |
| Serve `.wasm` as `application/wasm` | Streaming compilation (`WebAssembly.compileStreaming`) needs it. With another type the loader still works, but compiles only after the whole download. |
| Serve `.js` as `text/javascript` | Module scripts are refused otherwise. |
| Cache `app.<hash>.*` forever: `Cache-Control: public, max-age=31536000, immutable` | Their names change whenever their contents do. |
| Revalidate everything else: `Cache-Control: no-cache` (`index.html`, `app.js`, `lasm-manifest.json`) | They name the current hashed files. |
| Prefer the `.br`/`.gz` copies for clients that accept them (`Content-Encoding: br`, `Vary: Accept-Encoding`) | Precompressed at the highest levels; most CDNs and hosts do it themselves otherwise. |

No `Cross-Origin-Opener-Policy` / `Cross-Origin-Embedder-Policy` headers are
needed: the app uses no `SharedArrayBuffer` or threads.

`lasm dev` serves `dist/` with exactly these rules (src/browser/static-server.mjs),
and the browser CI runs every engine against it.

## Hosts

- **GitHub Pages, GitLab Pages, Cloudflare Pages, Netlify, Vercel, Firebase
  Hosting, S3 + CloudFront, Azure Static Web Apps:** upload `dist/`. They serve
  `.wasm` as `application/wasm` and compress on the fly. To get the caching rules:
  - Netlify and Cloudflare Pages: a `public/_headers` file (copied into `dist/`):
    ```
    /app.*.js
      Cache-Control: public, max-age=31536000, immutable
    /app.*.wasm
      Cache-Control: public, max-age=31536000, immutable
    ```
  - Vercel: `vercel.json` with `"headers": [{ "source": "/app.(.*)", "headers": [{ "key": "Cache-Control", "value": "public, max-age=31536000, immutable" }] }]`
    and `"outputDirectory": "dist"`.
  - S3: upload `app.*` with `--cache-control "public, max-age=31536000, immutable"`
    and `--content-type application/wasm` for `.wasm`; to serve the `.br` copies,
    upload them under the original names with `--content-encoding br` (or let
    CloudFront compress).
- **nginx:**
  ```nginx
  types { application/wasm wasm; }
  location ~ ^/app\.[0-9a-f]{12}\.(js|wasm)$ {
    brotli_static on; gzip_static on;          # serve the .br / .gz copies
    add_header Cache-Control "public, max-age=31536000, immutable";
  }
  location / { add_header Cache-Control "no-cache"; try_files $uri $uri/ /index.html; }
  ```
- **Caddy:** `file_server { precompressed br gzip }` and a `header /app.* Cache-Control "public, max-age=31536000, immutable"`.
- **Node, Hono, Express, Fastify (full stack):** serve `dist/` with your framework's
  static middleware, for example `serveStatic({ root: './dist', precompressed: true })` in Hono.

A single-page app with client-side routing (`Lasm.Web.History.pushState`)
needs the host's fallback to `index.html` for unknown paths (`try_files … /index.html`,
Netlify `/* /index.html 200`, Cloudflare Pages does it by default).

## Embedding in another page or CDN

The loader is an ES module that finds the Wasm next to itself, so `dist/` can
live on a CDN and the page elsewhere:

```html
<link rel="modulepreload" href="https://cdn.example.com/app/app.js">
<div data-lasm-app data-lasm-flags='{"user":"ada"}'></div>
<script type="module" src="https://cdn.example.com/app/app.js"></script>
```

Elements with `data-lasm-app` are mounted when the module loads (empty, or the
app's name from `lasm-manifest.json`). Or mount it yourself:

```js
import { mount } from 'https://cdn.example.com/app/app.js';
const app = await mount(document.querySelector('#widget'), { flags: { user: 'ada' } });
app.ports.selected.subscribe(id => console.log(id));
app.unmount();
```

A cross-origin CDN must send `Access-Control-Allow-Origin` for the module and
the Wasm (module scripts and `fetch` are CORS requests).

## Content Security Policy

The loader evaluates no strings (`eval`, `new Function`) and builds no code at
run time apart from compiling the Wasm. A strict policy needs:

```
script-src 'self' 'wasm-unsafe-eval';
connect-src 'self';
```

- `'wasm-unsafe-eval'` allows `WebAssembly.compile` (Chrome 97+, Firefox 102+, Safari 16+).
- `connect-src` covers fetching the `.wasm` (and any `fetch`/WebSocket your Lean code makes).
- Add the CDN's origin to `script-src` and `connect-src` when the files are there.

## Sizes and start

Per release, the browser CI records the brotli transfer of the web template and
its start time (module evaluated → first frame) on each engine
([BROWSER.md](../BROWSER.md#budgets-measured-in-ci-recorded-per-release)). `lasm build`
prints the totals of each build, and `lasm-manifest.json` has them per file.
