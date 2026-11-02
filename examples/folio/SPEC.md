# Folio's requirements, one by one

Each requirement of a Markdown renderer and static-site generator that
untrusted text cannot subvert, and what covers it: a proposition of
[`Proofs/Spec.lean`](Proofs/Spec.lean) (proved; [PROOFS.md](PROOFS.md)
explains each one), a test, or a reason it is out of scope. `npm run proofs`
checks that every proposition named here is proved and that every proved
proposition is named here.

The sources of the requirements are the CommonMark specification 0.31.2
([spec.commonmark.org](https://spec.commonmark.org/0.31.2/)), RSS 2.0
([rssboard.org](https://www.rssboard.org/rss-specification)), and the
proposal in [NEXT_EXAMPLE_APPS.md](../../docs/proposals/NEXT_EXAMPLE_APPS.md).

## 1. Untrusted text never becomes markup

| Requirement | Covered by |
| --- | --- |
| Text is escaped: it can start no tag and end no attribute | `Spec.escape_no_markup` |
| Escaping loses nothing: escaped text reads back as the same characters | `Spec.escape_reads_back` |
| HTML in the Markdown is not passed through unless the caller enables it | `Spec.no_raw_html` |
| Every tag in the output is one the renderer made; everything from the Markdown is text | `Spec.output_reads_back` |
| No `javascript:`, `vbscript:`, `file:` or non-image `data:` link or image | `Spec.safe_urls` |
| Front-matter values in a layout are escaped | `Spec.template_values_escaped` |
| A site's pages hold no raw HTML unless the site enables it | `Spec.site_pages_safe` |
| Raw HTML, when enabled, is exactly CommonMark's | The specification's examples (`npm test`), the differential test |

## 2. Every input gets an answer

| Requirement | Covered by |
| --- | --- |
| Rendering terminates on every input | `Spec.render_total`, and the totality check of `npm run proofs` |
| Building a site terminates on every input | `Spec.build_total`, and the same check |
| No input crashes the program or makes it run out of time or memory | The crash and timeout fuzzer (milestone 4); the proofs cover termination, not running time |

## 3. The structure of the output

| Requirement | Covered by |
| --- | --- |
| The HTML text is the tree written out | `Spec.render_writes_tree` |
| Tags nest properly and every element is closed | `Spec.tags_nest` |
| HTML's content model: phrasing content in paragraphs and headings, `li` only in lists | `Spec.content_model` |
| The output is CommonMark's rendering of the input | The specification's 652 examples, the differential test |

## 4. Slugs and paths

| Requirement | Covered by |
| --- | --- |
| No two pages share a slug | `Spec.slugs_unique` |
| Slugs are non-empty and use only `a-z`, `0-9`, `-` | `Spec.slugs_well_formed` |
| No two files are written to one path | `Spec.paths_unique` |
| No page is written outside the output directory | `Spec.paths_inside_output` |

## 5. The page index

| Requirement | Covered by |
| --- | --- |
| Every link in the index resolves to a generated page | `Spec.index_links_resolve` |
| The index lists every published page | `Spec.index_lists_every_page` |
| Links inside pages resolve | Out of scope: a page may link anywhere; the site's own links are the index's |

## 6. Drafts and the feed

| Requirement | Covered by |
| --- | --- |
| A draft has no page, no link and no feed item | `Spec.drafts_unpublished` |
| The index and the feed are newest first | `Spec.newest_first` |
| The feed lists exactly the published pages | `Spec.feed_lists_published` |
| The feed is valid RSS 2.0 | Tested (milestone 2, against the generated feed) |
