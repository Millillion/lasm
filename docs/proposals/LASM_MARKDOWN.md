# Proposal: Lasm.Markdown, a CommonMark library from Folio's renderer

Status: a draft for Jordan to accept or reject (2026-11-04). Nothing here is
built. It answers Folio's API question in ROADMAP.md ("a `Lasm.Markdown`
library module from Folio's renderer, so Conduit can use it"; "safe mode
escaping raw HTML rather than dropping it") and item 10 of Jordan's
2026-11-04 decisions.

## 1. Motivation

Lasm has two Markdown renderers, both in examples:

- **Folio** ([examples/folio/Folio](../../examples/folio/Folio), about
  1,700 lines without the generated tables): a port of commonmark.js
  0.31.2. All 652 specification examples pass, and it agrees with
  commonmark.js byte for byte on random documents. It is fuzzed, including
  cmark's pathological inputs. It comes with 122 theorems: unless raw HTML
  is enabled, no Markdown can inject markup (`output_reads_back`), no link
  gets a `javascript:` URL, tags nest, and every function terminates.
- **Conduit** ([Conduit/Markdown.lean](../../examples/conduit/Conduit/Markdown.lean),
  213 lines): a small reader of its own (paragraphs, headings, flat lists,
  quotes, code, `**strong**`, `*em*`, `` `code` ``, links), with an
  allow-list of URL schemes and its own proofs
  ([Proofs/Markdown.lean](../../examples/conduit/Proofs/Markdown.lean)).
  It is not CommonMark: nested lists, reference links, entities and
  emphasis edge cases all differ.

Any Lasm app that shows user text (comments, articles, issues, chat) needs
Markdown that is correct and safe. Folio's renderer is the strongest piece of
Lean Markdown we know of. Moving it into Lasm's library makes it available to
every app, lets Conduit drop its subset, and makes the safety theorems part
of what Lasm itself promises.

## 2. Scope

- **CommonMark 0.31.2, all of it**, as Folio has it today: every block and
  inline construct in the specification, including HTML blocks, reference
  links, entities and the delimiter algorithm. We do not cut it down to a
  subset. The renderer already passes all 652 examples, and a subset would
  only make outputs disagree with every other CommonMark tool.
- **No extensions in the first version.** GFM tables, strikethrough, task
  lists, autolinks without `<…>`, and footnotes are left out. They are the
  most likely next request (open question 1), and each would come with the
  GFM specification's own examples as its tests.
- **Not included:** Folio's site generator (front matter, layouts, slugs,
  the index, the feed) stays in Folio. Heading ids and slugs are an open
  question (5).

## 3. Safe by default

The library is for untrusted text first. There are two settings, with the
safe values as the defaults:

**Raw HTML: escaped.** An HTML block or inline tag is shown as text, exactly
as Folio does today. `<script>` appears on the page as the characters
`<script>`. This is what the ROADMAP item asks for. commonmark.js's `safe`
option instead drops raw HTML (it writes `<!-- raw HTML omitted -->`), which
hides what the author wrote and confuses them. Escaping loses nothing and is
what `output_reads_back` already proves safe. A third mode, `omit`, is cheap
to offer for apps that want commonmark.js's behaviour.

**URLs: an allow-list.** A link or image keeps its URL only if it has no
scheme (`/path`, `page`, `#anchor`) or its scheme is `http`, `https` or
`mailto`. Images may also use `data:image/png`, `gif`, `jpeg` or `webp`.
Anything else keeps its text but loses its URL. This is Conduit's rule, and
it is stricter than Folio's current rule, commonmark.js's block-list
(`javascript:`, `vbscript:`, `file:`, most `data:`). An allow-list fails
safe when browsers add schemes, and its theorem is shorter.
`Options.urls := .commonmarkSafe` keeps the block-list, so the differential
test against commonmark.js's `safe` mode still has a matching mode.

`Options.trusted` turns both off (raw HTML passes through, every URL is
kept). That is CommonMark's own behaviour, and the mode the specification's
examples assume.

## 4. Proposed Lean API

Pure Lean: the library imports neither `Lasm.JS` nor `Lasm.UI`, so it builds
with plain `lake build`, runs natively and in the editor, and works on every
target, including WASI and Fastly.

```lean
namespace Lasm.Markdown

/-! The document tree (Folio.Ast, unchanged) -/
inductive Inline where
  | text (s : String) | softbreak | linebreak | code (s : String)
  | html (s : String)                       -- raw HTML from the source
  | emph (cs : List Inline) | strong (cs : List Inline)
  | link (dest title : String) (cs : List Inline)
  | image (dest title : String) (cs : List Inline)
inductive Block where
  | para (cs : List Inline) | heading (level : Nat) (cs : List Inline)
  | thematic | code (info literal : String) | html (literal : String)
  | quote (bs : List Block)
  | list (ordered : Bool) (start : Nat) (tight : Bool) (items : List (List Block))

/-! Options -/
inductive RawHtml where | escape | omit | pass
inductive Urls where
  | allow (schemes : List String)  -- plus scheme-less URLs and safe data: images
  | commonmarkSafe                 -- commonmark.js's `safe` block-list
  | any
structure Options where
  rawHtml : RawHtml := .escape
  urls : Urls := .allow ["http", "https", "mailto"]
def Options.trusted : Options := { rawHtml := .pass, urls := .any }

/-! Parsing: total, on every input -/
def parse (markdown : String) : List Block

/-! HTML: a tree of the renderer's own tags (Folio.Html), and text -/
inductive Html where
  | text (s : String)       -- escaped when written
  | raw (s : String)        -- only from `rawHtml := .pass`
  | elem (t : Tag) (attrs : List (Attr × String)) (children : List Html)
  | void (t : Tag) (attrs : List (Attr × String))
def toHtml (o : Options := {}) (doc : List Block) : List Html
def Html.serialize (hs : List Html) : String

/-- Markdown text to HTML text: `Html.serialize (toHtml o (parse markdown))`. -/
def render (o : Options := {}) (markdown : String) : String

/-- The plain text of a document (for previews, `<title>`, search). -/
def plainText (doc : List Block) : String
```

And a separate module for apps that render in the page, since Lasm.UI must
not be a dependency of the core:

```lean
-- Lasm.Markdown.UI (imports Lasm.UI)
/-- The rendered document as Lasm.UI elements. Raw HTML is always text here,
whatever the options say: Lasm.UI builds nodes, it never parses markup. -/
def view (o : Options := {}) (markdown : String) : List (Lasm.UI.Html msg)
```

Folio's preview already does this (`Preview/Page.lean`, `toUI`). Conduit's
`blockView` and `inlineView` become a call to `view`.

Folio's propositions about the renderer move with it, as
`Lasm.Markdown.Proofs`, restated for the new options. Folio keeps the ones
about the site (slugs, output paths, the index, drafts) and imports the rest.

## 5. Alternatives considered

1. **Leave the renderers in the examples.** Rejected: Conduit keeps a
   weaker, non-standard Markdown, and every new app copies one of the two.
2. **Promote Conduit's small reader instead.** It is short, but not
   CommonMark, and it has no spec suite to keep it honest. Rejected.
3. **Bind a JavaScript renderer** (markdown-it, micromark) through
   `Lasm.JS`. Rejected: no proofs, no WASI or Fastly, and Lasm's direction is
   no premade npm bindings.
4. **Make the HTML tree `Lasm.UI.Html`.** One tree for everything, but the
   core would then depend on Lasm.UI, and it touches issue #44 (a shared
   HTML model with lean-html, on hold). Rejected for now. The adapter in
   `Lasm.Markdown.UI` keeps that door open.
5. **Recommended:** Folio's renderer as `Lasm.Markdown`, pure Lean, full
   CommonMark 0.31.2, escaped raw HTML and allow-listed URLs by default, a
   Lasm.UI adapter in its own module, and the proofs shipped with it.

## 6. Test plan

The tests move with the code, from `examples/folio/test` to the library's
own tests, and run in a new `markdown.yml` workflow (Folio's `folio.yml`
keeps only the site tests).

- **The CommonMark specification's 652 examples** (vendored at tag 0.31.2,
  with its license):
  - with `Options.trusted`, all 652 byte for byte;
  - with the defaults, the examples that differ must differ only where the
    example has raw HTML (escaped) or a URL outside the allow-list (dropped),
    as Folio's `spec.mjs` checks today for its 72;
  - with `rawHtml := .omit`, the same check against commonmark.js's `safe`
    output.
- **Differential against commonmark.js 0.31.2** (a dev dependency only):
  random documents in `trusted` mode and in `commonmarkSafe` mode, on every
  PR, with the seed printed and disagreements shrunk. Twenty seeds nightly.
- **Pathological inputs:** cmark's suite and the seven quadratic cases Folio
  found, each with a time limit, on every PR.
- **Fuzzing:** Folio's crash and timeout fuzzer, natively and on
  WebAssembly (where its stack overflow was found), on every PR, and
  forty minutes nightly.
- **Proofs:** `output_reads_back` (with `rawHtml` other than `.pass`, the
  output tokenizes back to exactly the renderer's tree), URL safety under
  each `Urls` policy, nesting, and totality. They are checked by
  `proofs:paranoid` and the independent checkers, like the apps' proofs,
  and Folio's totality check (`test/Axioms.lean`) runs on the library too.
- **Cross-target:** the 652 examples run on Node, WASI (wasmtime) and the
  browser, which must all give the same bytes as the native build.
- **Folio and Conduit as consumers:** Folio's site, CLI, preview and
  Playwright tests run unchanged against the library. Conduit's RealWorld
  suites and its end-to-end tests run after it switches. Conduit's Markdown
  propositions (SPEC L6, empty link text) are restated over the library and
  re-proved.

## 7. Costs and risks

- **Bundle size.** The generated tables (HTML5 entities and Unicode
  punctuation, 51 KB of Lean source in `Folio/Tables.lean`) end up in every
  browser build that renders Markdown. The first PR measures the
  compressed cost against the browser budget (BROWSER.md: 160 KiB for the
  counter app). If it is too large, the entity table becomes a compact
  encoding.
- **Licence.** The renderer is a port of commonmark.js (BSD-2-Clause, John
  MacFarlane). Its notice ([NOTICE.md](../../examples/folio/NOTICE.md))
  moves into the library and ships in the npm package. Docs tell users who
  distribute built programs to keep it, as BSD-2 requires.
- **Behaviour change for Conduit.** Article bodies become full CommonMark,
  so nested lists, reference links and entities will now render where they
  were text before. That is the point, but its screenshots and tests change.

## 8. Open questions for Jordan

1. **GFM.** Add GitHub's extensions (tables, strikethrough, task lists,
   autolinks) as a follow-up, behind `Options.gfm`? Users will expect
   tables. Each extension comes with GFM's spec examples as tests.
2. **The URL default.** Allow-list `http`, `https`, `mailto` (recommended,
   Conduit's rule), or keep Folio's commonmark.js block-list as the default?
3. **Raw HTML modes.** Offer `escape`, `omit` and `pass` (recommended), or
   only `escape` and `pass`?
4. **Name and place.** `Lasm.Markdown` in Lasm's library (recommended), or a
   separate Lake package that works without Lasm? It is pure Lean, so it
   could be either. A separate package would need a new repo, which needs
   your OK.
5. **Heading ids.** Should the library add `id` attributes (slugs) to
   headings, as Folio's site does, under an option? Or should slugs stay in
   Folio?

## 9. Effort

About 5–7 working days. Each step is one PR:

- move the modules, rename the namespaces, and add the options: 1–2 days;
- the allow-list policy, `omit`, and restating the proofs: 2 days;
- the test suites as a library workflow, plus cross-target runs: 1 day;
- `Lasm.Markdown.UI`, switching Conduit (re-proving its Markdown
  propositions) and pointing Folio at the library: 1–2 days.

GFM, if accepted, is about a week more.
