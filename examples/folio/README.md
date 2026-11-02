# Folio: Markdown in Lean

**A CommonMark Markdown renderer and static-site generator, written in Lean 4 and compiled to WebAssembly by [Lasm](https://github.com/Millillion/lasm), with proofs that no Markdown can inject HTML.**
It passes all 652 examples of the CommonMark 0.31.2 specification and agrees byte for byte with commonmark.js, the reference implementation, on random documents.
111 theorems, checked with no `sorry` and only Lean's standard axioms, prove properties of the code that actually runs: unless raw HTML is enabled, text from the Markdown never becomes markup (an HTML tokenizer reads every output back as exactly the renderer's own tree), no link or image gets a `javascript:` URL, tags always nest, every function terminates on every input, slugs and output paths are unique and stay inside the output directory, every link in the page index resolves, and drafts are never published ([PROOFS.md](PROOFS.md); [SPEC.md](SPEC.md) maps each requirement onto them).

```sh
npm install                  # Lasm (@lasm/cli) and commonmark.js (the differential test's reference)
npm run build:batch          # the renderer as a Node program (dist/batch), for the tests
npm test                     # the CommonMark specification's 652 examples
npm run test:differential    # random documents, Folio against commonmark.js (the seed is printed first)
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

- **The specification's 652 examples** ([`test/spec.mjs`](test/spec.mjs)), taken from the
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

## The site generator

`Folio.Site.build` turns a directory of Markdown pages into a site; it is pure (the files' text in,
the files to write out), and the command-line program that reads and writes the directory comes in
the next milestone.

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
| [`Batch.lean`](Batch.lean) | Renders many documents in one run, for the tests |
| [`test/`](test) | The specification's examples, the differential test, the proof checks |

Every function is total, with no `partial`: loops run over bounded ranges, and recursion is
structural or on a decreasing measure. `npm run proofs` checks that none of the 552 definitions
behind `render` and `Site.build` is `partial`, `unsafe` or opaque.

[NOTICE.md](NOTICE.md) has the licenses of commonmark.js, mdurl and the entity list, whose
algorithms and data Folio uses.
