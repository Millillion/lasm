# Folio: Markdown in Lean

**A CommonMark Markdown renderer and static-site generator, written in Lean 4 and compiled to WebAssembly by [Lasm](https://github.com/Millillion/lasm), with proofs that no Markdown can inject HTML.**
It passes all 652 examples of the CommonMark 0.31.2 specification and agrees byte for byte with commonmark.js, the reference implementation, on random documents.
122 theorems, checked with no `sorry` and only Lean's standard axioms, prove properties of the code that actually runs: unless raw HTML is enabled, text from the Markdown never becomes markup (an HTML tokenizer reads every output back as exactly the renderer's own tree), no link or image gets a `javascript:` URL, tags always nest, every function terminates on every input, slugs and output paths are unique and stay inside the output directory, every link in the page index resolves, and drafts are never published ([PROOFS.md](PROOFS.md); [SPEC.md](SPEC.md) maps each requirement onto them).

```sh
npm install                  # Lasm (@lasm/cli) and commonmark.js (the differential test's reference)
npm run build                # the folio command for Node (dist/cli)
node dist/cli/main.mjs build site      # the example site (site/) into site/public
node dist/cli/main.mjs render README.md  # one Markdown file to HTML
npm run test:cli             # build the example site and check it
npm run build:batch          # the renderer as a Node program (dist/batch), for the tests
npm test                     # the CommonMark specification's 652 examples
npm run test:differential    # random documents, Folio against commonmark.js (the seed is printed first)
npm run build:batch-wasi && node test/spec.mjs --engine wasmtime       # the 652 examples on WASI (or wasmer, node-wasi)
npm run build:batch-browser && node test/spec.mjs --engine chromium    # in a headless browser (or firefox, webkit)
npm run proofs               # check every theorem
```

Requirements: Node.js 24 or newer and npm. Lasm downloads Lean 4.35.0 and its WebAssembly tools
on the first build (cached).

## Safe by default

```lean
import Folio

#eval Folio.render {} "Hello <script>alert(1)</script> [x](javascript:alert(1))"
-- "<p>Hello &lt;script&gt;alert(1)&lt;/script&gt; <a>x</a></p>\n"

#eval Folio.render { rawHtml := true, anyUrl := true } "Hello <b>world</b>"
-- "<p>Hello <b>world</b></p>\n"
```

`Folio.render (o : Options) (markdown : String) : String` follows CommonMark 0.31.2. With the
default options, which are for untrusted text:

- **HTML in the Markdown is shown as text.** An HTML block or an inline tag is escaped like any
  other text instead of being passed through. The theorem `output_reads_back` is the guarantee:
  for every Markdown text, an HTML tokenizer reads the output back as exactly the tree the renderer
  built, so every tag in the output is one of the renderer's own (`p`, `em`, `a`, …) and everything
  that came from the Markdown is text.
- **Unsafe URLs are dropped.** A link or image whose URL starts `javascript:`, or contains
  `vbscript:`, `file:` or `data:` (other than `data:image/png`, `gif`, `jpeg` or `webp`), keeps its
  text but loses its URL, as with commonmark.js's `safe` option (`safe_urls`).

`rawHtml := true` passes raw HTML through and `anyUrl := true` keeps every URL: CommonMark's own
behaviour, for trusted text only.

## The oracle

The CommonMark specification comes with its own tests, and the reference implementation is on npm,
so Folio is checked against both ([folio.yml](../../.github/workflows/folio.yml)):

- **The specification's 652 examples** ([`test/spec.mjs`](test/spec.mjs)) on every target the
  renderer runs on (`--engine`: the Node build, the WASI build on wasmtime, wasmer and
  `node:wasi`, the browser build in headless Chromium, Firefox and WebKit, and the edge server on
  Fastly, Workers and Deno Deploy's build; [folio-platforms.yml](../../.github/workflows/folio-platforms.yml)), taken from the
  [commonmark-spec](https://github.com/commonmark/commonmark-spec) repository at tag `0.31.2` and
  vendored with its license ([`test/commonmark-spec`](test/commonmark-spec)). With raw HTML enabled,
  as the specification expects, all 652 pass byte for byte. With the safe defaults, 580 are
  identical and the 72 others differ only where the example has raw HTML (shown as text) or an
  unsafe URL (dropped); the test checks that each difference is one of those.
- **commonmark.js 0.31.2** ([`test/differential.mjs`](test/differential.mjs)), an npm
  devDependency: random documents made of Markdown's syntax (emphasis runs, brackets, link
  definitions, list markers, fences, HTML, entities, tabs, Unicode) go to both, with raw HTML
  enabled and with the safe defaults, and the HTML must be identical. The seed is printed first;
  `--seed N` replays a run, and disagreements are shrunk to a minimal document.

The renderer is a port of commonmark.js's algorithm (block structure line by line, then the
delimiter-stack algorithm for emphasis and links), so the two agree even where the specification
leaves room. Where commonmark.js works on UTF-16 code units, Folio works on characters: an emoji
next to `*` counts as punctuation, as the specification says, so the differential test does not
generate that case.

## The folio command

```sh
folio build [SITE] [OUT]          # the site in SITE (default .) into OUT (default SITE/public)
folio render [--raw-html] FILE    # one Markdown file to HTML on standard output
```

A site is `index.md` (the home page and the site's settings), the pages under `content/` (any
depth) and, optionally, layouts in `layouts/`; [`site/`](site) is an example, with a draft and a
page of hostile HTML. Exit status: 0 done, 1 done with warnings (a malformed date, an unknown
layout), 2 a wrong command or an unreadable file. [`Cli.lean`](Cli.lean) does the reading and
writing; everything else is `Folio.Site.build`, a pure function from the files' text to the files
to write, which the propositions are about.

| Platform | Build | Run | Checked in CI by |
| --- | --- | --- | --- |
| Node 24 and 26 | `npm run build` | `node dist/cli/main.mjs build site` | `npm run test:cli` |
| WASI: wasmtime 49.0.4, wasmer 7.4.2, `node:wasi` | `npm run build:wasi` | `wasmtime run --dir . wasi/main.wasm build site` | `npm run test:wasi`: the same checks on each engine, and the same bytes as on Node |

The tests build [`site/`](site) and check the result: exactly the expected files, the draft
nowhere, no HTML or `javascript:` URL from the untrusted page, every link in the index resolving
to a generated file, and a well-formed RSS 2.0 feed listing the index's pages in its order.

## The live preview

```sh
npm run build:server && npm start      # http://localhost:3000: type Markdown, see it rendered
npx playwright install chromium && npm run test:e2e   # its end-to-end tests (BROWSERS=chromium,firefox,webkit)
```

A [`Lasm.UI`](../../docs/UI.md) page ([`Preview/Page.lean`](Preview/Page.lean), started by
[`PreviewClient.lean`](PreviewClient.lean)): Markdown on the left, its rendering on the right as you
type, the HTML text below. The renderer runs in the page, as WebAssembly. Its HTML tree becomes DOM
elements directly, one element per tree element, so the browser's HTML parser never sees anything
from the Markdown; `preview_safe` proves that whatever is typed, the preview creates only Folio's
elements and attributes, never an event handler or an unsafe URL.
[`PreviewServer.lean`](PreviewServer.lean) serves the page and `POST /api/render` (the same
function on the server's runtime), with `Bun.serve` and `Deno.serve` on Bun and Deno, and for now `Lasm.Fetch`'s server on
Node ([`Server/`](Server)).

| Server | Build | Run | Checked in CI by |
| --- | --- | --- | --- |
| Node 26 | `npm run build:server` | `node dist/server/main.mjs` | Playwright on Chromium, Firefox and WebKit |
| Bun 1.4.4 | `npm run build:bun` | `bun bun/main.mjs` | Playwright on Chromium |
| Deno 2.9.6 | `npm run build:deno` | `deno run -A deno/main.mjs` | Playwright on Chromium |

The tests ([`test/e2e`](test/e2e)) check that the sample renders, that the preview follows every
edit, that the page and the server produce the same HTML, and that hostile Markdown (`<script>`,
`onerror`, `<iframe src="javascript:…">`, `javascript:` links, `onload`) runs nothing: no dialog,
no script or frame element, no handler attribute, every element one of Folio's.

## At the edge

[`ServerEdge.lean`](ServerEdge.lean) serves a site from the platform's key-value store
(`Lasm.KV.open "folio"`). Every request builds the site from the store with `Folio.Site.build`, the
function `folio build` runs, and answers with the page it asks for. `GET /` serves the index,
`/feed.xml` the feed and `/SLUG/` a page (`/SLUG` redirects there). `POST /api/render` renders the
request's body: by default with the safe defaults, as HTML; with `?raw_html=1` with raw HTML
enabled, as text. No request writes to the store. The site changes when its files in the store
change. Workers and Deno Deploy run it as the program's default export (`export default {fetch}`),
Fastly on its own host calls ([`Server/`](Server)).

The store holds each file of the site's directory under its path (`index.md`, `content/hello.md`,
`layouts/page.html`), and `files`, the list of those paths, one per line.
[`tools/kv.mjs`](tools/kv.mjs) writes them in each platform's format:

| Platform | Build | Store | Run locally |
| --- | --- | --- | --- |
| Fastly Compute | `npm run build:fastly` | the KV Store `folio` | `viceroy serve -C fastly.toml bin/main.wasm` (`fastly.toml`'s local KV Store holds `site/`: `node tools/kv.mjs fastly > fastly.toml`) |
| Cloudflare Workers | `npm run build:workers` | Workers KV, the binding `folio` ([wrangler.toml](wrangler.toml)) | `node tools/kv.mjs json > kv.json && npx wrangler kv bulk put kv.json --binding folio --local`, then `npx wrangler dev` |
| Deno Deploy | `npm run build:deno-deploy` | Deno KV, keys `["folio", path]` | `deno run -A --unstable-kv --location http://folio.test/ tools/kv.mjs deno`, then `deno run -A --unstable-kv --location http://folio.test/ deno/main.mjs` |

To deploy, put the same entries in the deployed store (`wrangler kv bulk put` without `--local`; a
Fastly KV Store linked to the service; on Deno Deploy, `tools/kv.mjs deno site DATABASE_URL`).
[`test/edge.mjs`](test/edge.mjs) checks each platform on its local tooling only
([folio-platforms.yml](../../.github/workflows/folio-platforms.yml)). It puts the example site in the store, and every page served must be
byte for byte the page `folio build` writes, with the right content type, from the platform's
store. A draft is 404, an unknown page is 404, there are no redirects off the site, and other
methods get 405. A changed site in a new store (a new page with a new layout, an edited page, a
page made a draft) must be served the same way. Then the 652 examples run on the server through
`POST /api/render`.

## Untrusted input can't crash it or stall it

The proofs say every function terminates; tests check the other half of "untrusted input can't
crash or subvert it" on the WebAssembly build itself (`npm run build:batch`):

```sh
npm run test:pathological   # CommonMark's pathological inputs, each in its own process, time-limited
npm run fuzz -- --minutes 5 # the crash and timeout fuzzer (the seed is printed first; --seed N replays)
```

- **The pathological inputs** ([`test/pathological.mjs`](test/pathological.mjs)) are cmark 0.31.1's
  list ([`test/cmark-pathological`](test/cmark-pathological), vendored with its license), with
  cmark's expected-output patterns. It covers deep nesting (25,000 block quotes, 32,500 nested
  emphases, 30,000 nested list items with blank lines) and runs of unmatched delimiters,
  brackets, backticks and `<!--` up to 3 million characters. Deeper cases follow it: a list
  2,685 deep and block quotes 36,742 deep (issue #231), 20,000 nested ordered lists, lists in
  block quotes in lists 30,000 deep and images nested 30,000 deep. The same cases run on every
  build: Node, WASI (wasmtime, wasmer, node:wasi), the browsers (Chromium, Firefox, WebKit) and
  the site server on each edge platform's local tooling (`--engine`, `test/edge.mjs
  --pathological`; [folio-platforms.yml](../../.github/workflows/folio-platforms.yml)). Each case runs in about a second
  (backticks: 5 s for 3.1 million characters). commonmark.js takes 9 minutes on `![[]()`
  repeated and almost 2 minutes on unclosed link destinations.
- **The fuzzer** ([`test/fuzz.mjs`](test/fuzz.mjs)) generates three kinds of documents: syntax
  fragments repeated up to tens of thousands of times, random characters (controls, NUL, astral,
  `U+2028`), and specification examples spliced together and repeated. Each document is
  rendered in both modes. It must finish within a time budget linear in its length, without a
  trap or a stack overflow. Its safe output must pass a strict tokenizer: only Folio's tags and
  attributes, nested, with no stray `<`, `>`, `"` or `&`. This is the proposition
  `output_reads_back`, checked again at run time on the compiled program.

What it found, all fixed:
- a stack overflow on the WebAssembly build (rendering 300,000 inlines in one paragraph
  recursed once per inline; the list functions are now tail recursive);
- a stack overflow on Cloudflare Workers (issue #231, found by fuzzing the Workers server):
  the edge's and the browsers' engines allow just under 10,000 stack frames, and the tree walks
  (reference definitions, the document tree, the HTML tree, image descriptions, writing the
  HTML) recursed once per level of nesting. Each now runs a version with an explicit stack,
  proved equal to the recursive definition the proofs are about and put in its place by an
  `@[csimp]` theorem ([PROOFS.md](PROOFS.md#how-the-proofs-reach-the-real-code)); nothing is
  capped, so the output is the same at any depth;
- seven quadratic cases, where the parser rescanned to the end of the text. These are now
  answered from facts computed once per paragraph, or skipped as cmark does:
  - backtick runs;
  - `<!--`, `<?` and `<![CDATA[`;
  - link destinations (a parenthesis-balance table);
  - bracket deactivation;
  - openers of emphasis that were already removed;
  - blank lines in deeply nested lists;
  - thematic-break checks on long list-marker lines.

The pathological inputs and three minutes of fuzzing run on every PR ([folio.yml](../../.github/workflows/folio.yml)).
A nightly job ([folio-nightly.yml](../../.github/workflows/folio-nightly.yml)) runs 40 minutes of
fuzzing and twenty differential seeds of larger documents.

## The site generator

- **Front matter**: `---` lines around `key: value` lines at the top of a page: `title`, `date`
  (`YYYY-MM-DD`), `draft: true`, `slug`, `layout`, `summary`, and any other key for the layouts.
- **`index.md`** is the home page; its front matter configures the site: `title`, `url` (for the
  feed), `description`, and `raw_html: true` to trust the pages' HTML.
- **Layouts** are HTML templates with `{{ name }}` placeholders: `{{ content }}` is the rendered
  page, and every other value (`title`, `date`, `site.title`, `root`, any front-matter key) is
  escaped. A page uses the layout its front matter names, else `page`; the home page uses `index`,
  else `page`; without layouts a plain built-in one is used.
- **The page index**: the home page lists every published page, newest first.
- **The feed**: `feed.xml`, RSS 2.0, the same pages in the same order.
- **Slugs**: a page is written to `SLUG/index.html`; the slug is the front matter's `slug`, else the
  file name, reduced to `a-z`, `0-9` and `-`; a taken slug gets `-2`, `-3`, ….

## Layout

| Path | What it is |
| --- | --- |
| [`Folio/Blocks.lean`](Folio/Blocks.lean) | Block structure (CommonMark §4–5): containers, leaf blocks, lists and their tightness, link reference definitions |
| [`Folio/Inlines.lean`](Folio/Inlines.lean) | Inlines (§6): code spans, emphasis (the delimiter stack), links and images, autolinks, raw HTML, entities |
| [`Folio/Scan.lean`](Folio/Scan.lean), [`Folio/Text.lean`](Folio/Text.lean) | The scanners that replace commonmark.js's regular expressions; character classes, entities, URL encoding |
| [`Folio/Tables.lean`](Folio/Tables.lean) | Unicode punctuation, case folding and the HTML5 entities, generated by [`tools/tables.mjs`](tools/tables.mjs) |
| [`Folio/Html.lean`](Folio/Html.lean), [`Folio/Render.lean`](Folio/Render.lean) | The HTML tree, its escaping writer, and `render` |
| [`Folio/Site.lean`](Folio/Site.lean) | Front matter, slugs, layouts, the index and the feed |
| [`Proofs/Spec.lean`](Proofs/Spec.lean) | Every proposition, in plain English, without proofs |
| [`Proofs/`](Proofs) | The proofs, and the HTML tokenizer the propositions use |
| [`Cli.lean`](Cli.lean), [`site/`](site) | The `folio` command, and an example site |
| [`Preview/Page.lean`](Preview/Page.lean), [`PreviewClient.lean`](PreviewClient.lean), [`PreviewServer.lean`](PreviewServer.lean) | The live preview and its server |
| [`ServerEdge.lean`](ServerEdge.lean), [`tools/kv.mjs`](tools/kv.mjs) | The site server for Fastly, Workers and Deno Deploy, and the store's entries for a site |
| [`Server/`](Server) | The servers' HTTP layer: requests and responses, the embedded page files, and each platform's server (Lasm.JS.Web with `Bun.serve`, `Deno.serve` and the edge's default export; Lasm.Fastly; Node still on `Lasm.Fetch`'s server) |
| [`Batch.lean`](Batch.lean), [`BatchBrowser.lean`](BatchBrowser.lean), [`Folio/Batch.lean`](Folio/Batch.lean) | Renders many documents in one run (Node, WASI, the browser), for the tests |
| [`test/`](test) | The specification's examples, the edge platforms' tests, the differential test, the pathological inputs and the fuzzer, the command's checks, the proof checks |

Every function is total, with no `partial`: loops run over bounded ranges, and recursion is
structural or on a decreasing measure. `npm run proofs` checks that none of the 583 definitions
behind `render` and `Site.build` is `partial`, `unsafe` or opaque.

[NOTICE.md](NOTICE.md) has the licenses of commonmark.js, mdurl and the entity list, whose
algorithms and data Folio uses.
