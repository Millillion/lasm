# What is proved about Folio

Folio's renderer and site generator are ordinary Lean functions, and the
programs run exactly those functions. So instead of only testing them, we
can prove things about them for every possible input. This file lists each
proved proposition in plain English. [SPEC.md](SPEC.md) goes the other way:
it takes each requirement and says which proposition covers it, which test
covers it, or why it is out of scope.

```sh
npm run proofs              # builds Folio/ and Proofs/, then test/Axioms.lean, then checks the documents
npm run proofs -- --write   # also regenerates the tables below from Proofs/Spec.lean
npm run proofs:paranoid     # replays the proofs through Lean's kernel and every external checker (Linux)
```

## How to review the propositions

Every proposition is a named `def … : Prop` in
[`Proofs/Spec.lean`](Proofs/Spec.lean), grouped by requirement, with a
plain-English doc comment, and with no proofs in that file. A reviewer can
read that one file and ignore the proofs: `npm run proofs` fails unless

- every proposition `Spec.x` has a theorem `Folio.Proofs.x` whose type is
  exactly `Spec.x` (so a proof cannot quietly prove something weaker);
- every theorem uses only Lean's three standard axioms (`propext`,
  `Classical.choice`, `Quot.sound`): a `sorry` would show up as the axiom
  `sorryAx` and a `native_decide` as `Lean.ofReduceBool`, and CI also rejects
  both words in the sources;
- every definition of Folio that `render` and `Site.build` use (about 750 of
  them, found by following the definitions from those two) is total: none is
  `partial`, `unsafe` or opaque, so Lean has checked that each one terminates
  on every input (including the stack-safe versions compiled code runs in
  place of the recursive tree walks, below, and the `@[csimp]` theorems that
  put them there use only the standard axioms);
- the tables below match the doc comments in `Proofs/Spec.lean`, every
  `Spec.x` that SPEC.md names exists and is proved, and every proposition is
  named in SPEC.md;
- the theorem count stated in README.md is the one just checked.

CI runs it on every change ([folio.yml](../../.github/workflows/folio.yml),
job `proofs`), then replays the exported proofs through Lean's kernel and the
external checkers Lean 4.35.0 ships (`lake check --paranoid`). The proofs use
only Lean's own library (no Mathlib).

## How the proofs reach the real code

The propositions are about `render`, `tree` and `Site.build`, the functions
the programs call; no model stands between them and the code. `render`
writes the tree with a fast string writer (`Html.write`), and
`render_writes_tree` proves it writes exactly what the tree's specification
(`Html.chars`, one list of characters per node) says. The tokenizer in
[`Proofs/Tokens.lean`](Proofs/Tokens.lean) is part of the specification: it
reads HTML the way an HTML tokenizer does, but only knows the renderer's
own tags and attributes and rejects everything else, so "reads back as the
tree" means no Markdown text can make the output contain anything the
renderer did not put there itself.

The tree walks the propositions are about (`Blocks.takeAllRefs`,
`Blocks.toBlocks`, `blocks`, `inlines`, `altParts`, `Html.writeList`) are
recursive, one call per level of nesting, which is the clearest way to state
them but not what the programs can run: CommonMark allows any nesting
depth, and the engines Folio runs on at the edge and in browsers allow
just under 10,000 stack frames (issue #231: a list nested 2,685 deep failed
on Cloudflare Workers). Each one has a version with an explicit stack
(`refsLoop`, `toBlocksLoop`, `blockLoop`, `inlineLoop`, `altLoop`,
`writeLoop`, next to its definition in `Folio/`), a theorem that it equals
the recursive definition (`Blocks.takeAllRefs_eq_fast`,
`Blocks.toBlocks_eq_fast`, `blocks_eq_fast`, `inlines_eq_fast`,
`altParts_eq_fast`, `Html.writeList_eq_fast`), and that theorem is marked
`@[csimp]`, so Lean's compiler runs the stack-safe version wherever the
program calls the recursive one. The propositions stay about the recursive
definitions, and hold of what runs because the two are equal.
`npm run proofs` follows the `@[csimp]` replacements: the stack-safe
versions count among the definitions that must be total, and the six
theorems must use only the standard axioms.

## The propositions

<!-- BEGIN PROPOSITIONS -->
<!-- Generated from Proofs/Spec.lean by `npm run proofs -- --write`; do not edit by hand. -->

**22 propositions**, each proved by the theorem of the same name in `Proofs/` (122 theorems in all: the 22 below and the lemmas their proofs are built from). Every one uses only Lean's standard axioms.

### A. Untrusted text never becomes markup

| Proposition | In plain English |
| --- | --- |
| [`escape_no_markup`](Proofs/Spec.lean#L32) | **Escaping removes markup**: the escape of any text contains no `<`, `>` or `"`, so it can start no tag and end no attribute value. |
| [`escape_reads_back`](Proofs/Spec.lean#L37) | **Escaped text reads back as itself**: the tokenizer reads the escape of any text as exactly that text's characters, and no tags. |
| [`no_raw_html`](Proofs/Spec.lean#L42) | **No raw HTML unless enabled**: unless raw HTML is enabled, the HTML tree of any Markdown text contains no raw HTML; HTML in the source becomes text. |
| [`output_reads_back`](Proofs/Spec.lean#L48) | **The output is exactly the renderer's tree**: unless raw HTML is enabled, the tokenizer reads the HTML of any Markdown text back as exactly the tokens of the tree the renderer built. Every tag in the output is one the renderer made; everything that came from the Markdown is text. |
| [`safe_urls`](Proofs/Spec.lean#L56) | **Only allowed URLs**: unless every URL is allowed (`anyUrl`), no `href` or `src` in the tree of any Markdown text is a `javascript:`, `vbscript:`, `file:` or (other than an image) `data:` URL. |
| [`template_values_escaped`](Proofs/Spec.lean#L62) | **Template values are escaped**: in a layout, a placeholder `{{ name }}` other than `{{ content }}` becomes the escape of its value. |
| [`site_pages_safe`](Proofs/Spec.lean#L68) | **A site's pages are safe**: unless `index.md` enables raw HTML, the HTML of every published page has no raw HTML and only allowed URLs. |
| [`preview_safe`](Proofs/Spec.lean#L74) | **The live preview builds only Folio's elements**: whatever Markdown is typed, every element the preview puts in the page is one of Folio's HTML elements (no `script`, no `iframe`), every attribute is one of Folio's, set as an attribute (never an event handler), and no `href` or `src` is an unsafe URL. The preview never gives the browser HTML text to parse. |

### B. Every input gets an answer

| Proposition | In plain English |
| --- | --- |
| [`render_total`](Proofs/Spec.lean#L84) | **Rendering is total**: every Markdown text, whatever its length or nesting, has an HTML rendering. Lean only accepts functions it has checked terminate on every input; `npm run proofs` also checks that none of the renderer's functions is `partial` or `unsafe`. |
| [`build_total`](Proofs/Spec.lean#L91) | **Building a site is total**: every input directory has a site (with warnings for what was wrong in it). |

### C. The structure of the output

| Proposition | In plain English |
| --- | --- |
| [`render_writes_tree`](Proofs/Spec.lean#L98) | **`render` writes the tree**: the text `render` returns is the tree written out (`Html.chars`), so the propositions about trees are about the text. |
| [`tags_nest`](Proofs/Spec.lean#L104) | **Tags nest**: in the tokens of any rendering, every end tag closes the innermost open element, and every element is closed. |
| [`content_model`](Proofs/Spec.lean#L109) | **HTML's content model**: the tree of any Markdown text is flow content: paragraphs and headings hold only phrasing content (text, `em`, `strong`, `a`, `code`, `br`, `img`); `ul` and `ol` hold only `li` elements; `pre` holds one `code` holding text. |

### D. Slugs and paths

| Proposition | In plain English |
| --- | --- |
| [`slugs_unique`](Proofs/Spec.lean#L118) | **Slugs are unique**: no two published pages have the same slug. |
| [`slugs_well_formed`](Proofs/Spec.lean#L122) | **Slugs are well formed**: every slug is non-empty and only has `a-z`, `0-9` and `-`. |
| [`paths_unique`](Proofs/Spec.lean#L127) | **No two files at one path**: the generated files have distinct paths. |
| [`paths_inside_output`](Proofs/Spec.lean#L131) | **Files stay inside the output directory**: every path is `index.html`, `feed.xml` or `SLUG/index.html` for a well-formed slug (so no `..`, no `/` at the start). |

### E. The page index

| Proposition | In plain English |
| --- | --- |
| [`index_links_resolve`](Proofs/Spec.lean#L140) | **Every link in the index resolves**: every link in the index's list of pages (`SLUG/`) names a generated file (`SLUG/index.html`). |
| [`index_lists_every_page`](Proofs/Spec.lean#L146) | **The index lists every page**: every published page is linked from the index. |

### F. Drafts and the feed

| Proposition | In plain English |
| --- | --- |
| [`drafts_unpublished`](Proofs/Spec.lean#L153) | **Drafts are not published**: the published pages are exactly the input pages whose front matter does not say `draft: true` (each once). |
| [`newest_first`](Proofs/Spec.lean#L159) | **Newest first**: the published pages (the index's and the feed's order) are sorted by date, newest first, then by slug. |
| [`feed_lists_published`](Proofs/Spec.lean#L164) | **The feed lists the published pages**: `feed.xml` is the feed of exactly the published pages, in the index's order. |
<!-- END PROPOSITIONS -->

## What is tested, not proved

- **CommonMark conformance.** That the renderer follows the CommonMark
  specification is tested against the specification's 652 examples (all
  pass) and by a differential test against commonmark.js 0.31.2, the
  reference implementation, on random documents. The propositions say what
  the output is *made of* (escaped text, the renderer's own tags, properly
  nested, allowed URLs), whatever the input; they do not say the output is
  the right rendering of it.
- **Raw HTML when enabled.** With `rawHtml` (or `raw_html: true` in a site's
  `index.md`) the input is trusted and its HTML is written out as it is; the
  propositions about escaping assume it is off, which is the default.
- **The HTML tokenizer.** It is a simplified HTML tokenizer: it agrees with
  a browser's on everything the renderer writes, but it is a definition in
  this repository, not the HTML standard's algorithm.
- **Reading and writing files.** `Cli.lean` (milestone 2) reads the input
  directory and writes `build`'s files; that it writes each path it is given
  is not proved.
- **Lean, Lasm and the JavaScript runtime**: that Lean's kernel is sound,
  that Lasm compiles the Lean faithfully to WebAssembly, and that the host
  runs it as documented.
