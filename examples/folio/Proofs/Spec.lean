/-
# What is proved about Folio

Every proposition proved about Folio, as a named `def … : Prop`, grouped by
requirement, with no proofs in this file. Each proposition `Spec.x` is
proved by a theorem `Folio.Proofs.x : Spec.x` (Proofs/Theorems.lean), and
`npm run proofs` fails unless every proposition here has its theorem, every
theorem uses only Lean's standard axioms (no `sorry`, no `native_decide`),
and no function of the renderer or the site generator is `partial` or
`unsafe`. SPEC.md maps the requirements onto these names; PROOFS.md is
generated from this file.

Reading guide. The propositions talk about the code that runs: `render`
(Markdown text to HTML text), `tree` (the HTML tree `render` writes out)
and `Site.build` (the site generator). `Options` are the renderer's
options: by default (`rawHtml := false`, `anyUrl := false`) raw HTML in the
Markdown is shown as text and unsafe URLs are dropped. `tokenize` is an
HTML tokenizer (Proofs/Tokens.lean) that knows exactly the renderer's tags
and attributes and rejects anything else, such as a `<`, `>` or `"` in
text. Conformance to CommonMark itself is tested, not proved: the
specification's 652 examples and a differential test against commonmark.js
(README.md).
-/
import Proofs.Site

namespace Folio.Spec
open Folio Proofs Site

/-! ## A. Untrusted text never becomes markup -/

/-- **Escaping removes markup**: the escape of any text contains no `<`,
`>` or `"`, so it can start no tag and end no attribute value. -/
def escape_no_markup : Prop :=
  ∀ s : String, '<' ∉ (escapeHtml s).toList ∧ '>' ∉ (escapeHtml s).toList ∧ '"' ∉ (escapeHtml s).toList

/-- **Escaped text reads back as itself**: the tokenizer reads the escape of
any text as exactly that text's characters, and no tags. -/
def escape_reads_back : Prop :=
  ∀ s : String, tokenize (escapeHtml s) = some (s.toList.map Tok.char)

/-- **No raw HTML unless enabled**: unless raw HTML is enabled, the HTML
tree of any Markdown text contains no raw HTML; HTML in the source becomes
text. -/
def no_raw_html : Prop :=
  ∀ (o : Options) (markdown : String), o.rawHtml = false → Html.NoRawList (tree o markdown)

/-- **The output is exactly the renderer's tree**: unless raw HTML is
enabled, the tokenizer reads the HTML of any Markdown text back as exactly
the tokens of the tree the renderer built. Every tag in the output is one
the renderer made; everything that came from the Markdown is text. -/
def output_reads_back : Prop :=
  ∀ (o : Options) (markdown : String), o.rawHtml = false →
    tokenize (render o markdown) = some (Html.tokensList (tree o markdown))

/-- **Only allowed URLs**: unless every URL is allowed (`anyUrl`), no
`href` or `src` in the tree of any Markdown text is a `javascript:`,
`vbscript:`, `file:` or (other than an image) `data:` URL. -/
def safe_urls : Prop :=
  ∀ (o : Options) (markdown : String), o.anyUrl = false → Html.SafeUrlsList (tree o markdown)

/-- **Template values are escaped**: in a layout, a placeholder `{{ name }}`
other than `{{ content }}` becomes the escape of its value. -/
def template_values_escaped : Prop :=
  ∀ (name : String) (vars : List (String × String)) (content : String), name ≠ "content" →
    fill [.var name] vars content = escapeHtml ((vars.lookup name).getD "")

/-- **A site's pages are safe**: unless `index.md` enables raw HTML, the HTML
of every published page has no raw HTML and only allowed URLs. -/
def site_pages_safe : Prop :=
  ∀ input : Input, (config (parseSource input.index)).options.rawHtml = false →
    ∀ p ∈ (build input).published, Html.NoRawList p.html ∧ Html.SafeUrlsList p.html

/-! ## B. Every input gets an answer -/

/-- **Rendering is total**: every Markdown text, whatever its length or
nesting, has an HTML rendering. Lean only accepts functions it has checked
terminate on every input; `npm run proofs` also checks that none of the
renderer's functions is `partial` or `unsafe`. -/
def render_total : Prop :=
  ∀ (o : Options) (markdown : String), ∃ html, render o markdown = html

/-- **Building a site is total**: every input directory has a site (with
warnings for what was wrong in it). -/
def build_total : Prop :=
  ∀ input : Input, ∃ out, build input = out

/-! ## C. The structure of the output -/

/-- **`render` writes the tree**: the text `render` returns is the tree
written out (`Html.chars`), so the propositions about trees are about the
text. -/
def render_writes_tree : Prop :=
  ∀ (o : Options) (markdown : String), (render o markdown).toList = Html.charsList (tree o markdown)

/-- **Tags nest**: in the tokens of any rendering, every end tag closes the
innermost open element, and every element is closed. -/
def tags_nest : Prop :=
  ∀ (o : Options) (markdown : String), nests (Html.tokensList (tree o markdown)) [] = true

/-- **HTML's content model**: the tree of any Markdown text is flow content:
paragraphs and headings hold only phrasing content (text, `em`, `strong`,
`a`, `code`, `br`, `img`); `ul` and `ol` hold only `li` elements; `pre`
holds one `code` holding text. -/
def content_model : Prop :=
  ∀ (o : Options) (markdown : String), Html.FlowList (tree o markdown)

/-! ## D. Slugs and paths -/

/-- **Slugs are unique**: no two published pages have the same slug. -/
def slugs_unique : Prop :=
  ∀ input : Input, ((build input).published.map (·.slug)).Nodup

/-- **Slugs are well formed**: every slug is non-empty and only has `a-z`,
`0-9` and `-`. -/
def slugs_well_formed : Prop :=
  ∀ input : Input, ∀ p ∈ (build input).published, isSlug p.slug = true

/-- **No two files at one path**: the generated files have distinct paths. -/
def paths_unique : Prop :=
  ∀ input : Input, ((build input).files.map (·.1)).Nodup

/-- **Files stay inside the output directory**: every path is `index.html`,
`feed.xml` or `SLUG/index.html` for a well-formed slug (so no `..`, no
`/` at the start). -/
def paths_inside_output : Prop :=
  ∀ input : Input, ∀ f ∈ (build input).files,
    f.1 = "index.html" ∨ f.1 = "feed.xml" ∨ ∃ s, isSlug s = true ∧ f.1 = s ++ "/index.html"

/-! ## E. The page index -/

/-- **Every link in the index resolves**: every link in the index's list of
pages (`SLUG/`) names a generated file (`SLUG/index.html`). -/
def index_links_resolve : Prop :=
  ∀ input : Input, ∀ h ∈ Html.hrefsList [indexList (build input).published],
    ∃ f ∈ (build input).files, f.1 = h ++ "index.html"

/-- **The index lists every page**: every published page is linked from the
index. -/
def index_lists_every_page : Prop :=
  ∀ input : Input, ∀ p ∈ (build input).published, p.href ∈ Html.hrefsList [indexList (build input).published]

/-! ## F. Drafts and the feed -/

/-- **Drafts are not published**: the published pages are exactly the input
pages whose front matter does not say `draft: true` (each once). -/
def drafts_unpublished : Prop :=
  ∀ input : Input, ((build input).published.map (·.file)).Perm
    ((input.pages.filter fun f => !isDraft (parseSource f.2)).map (·.1))

/-- **Newest first**: the published pages (the index's and the feed's
order) are sorted by date, newest first, then by slug. -/
def newest_first : Prop :=
  ∀ input : Input, (build input).published.Pairwise (fun a b => newerFirst a b = true)

/-- **The feed lists the published pages**: `feed.xml` is the feed of
exactly the published pages, in the index's order. -/
def feed_lists_published : Prop :=
  ∀ input : Input, ("feed.xml", feed (config (parseSource input.index)) (build input).published) ∈ (build input).files

end Folio.Spec
