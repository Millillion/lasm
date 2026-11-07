# Lasm content

This directory holds Lasm's educational pages: tutorials, bug write-ups, proof
spotlights, platform pages and overviews. The Millillion website publishes
them, and **merging to `main` publishes them**. Every page is AI-generated and
says so: its front matter has `aiGenerated: true`, and the website adds a
banner.

```
content/
  index.json             the pages the website publishes (generated; do not edit)
  STYLE.md               voice and hard rules for every page
  learn/<slug>.md        one page each
  tutorials/<slug>/
    project/             the exact files of a tutorial's finished project
    steps.json           what a reader runs, in order, and what must come out
    LICENSE              (in tutorials/) MIT-0 for the tutorials' code
```

## Workflow

1. **Claude drafts each page from real events**: merged PRs, releases, bugs
   found by testing, proofs. A page says only what the repository and CI
   show, and follows [STYLE.md](STYLE.md).
2. **Merging publishes.** CI must pass first ([content.yml](../.github/workflows/content.yml)).
3. **Corrections are made in the open** (STYLE.md, rule 8).

Nothing in this repository posts to social media. There are no posting
scripts and no API credentials.

## Pages: `learn/<slug>.md`

`learn/test-evidence.md` is generated every night by
[`scripts/evidence/page.mjs`](../scripts/evidence/page.mjs)
([TESTING.md](../docs/TESTING.md#the-test-evidence-page)); edit the generator, not the page.

The slug is the file name. The front matter:

```yaml
---
title: From zero to Lean on Cloudflare Workers
description: One sentence, at most 160 characters.
date: 2026-11-02
kind: tutorial          # tutorial | bug-caught | proof-spotlight | platform | overview
order: 1                # tutorials only: the position in the curriculum
sources:                # every source of the page's claims, as https URLs
  - https://github.com/Millillion/lasm/pull/37
aiGenerated: true
---
```

- Links to files in the repository are relative (`../../docs/TESTING.md`), and
  the website rewrites them to github.com. Every other link is a full URL.
- Pages are full articles. A bug write-up covers how the bug was found, the
  smallest reproduction, the fix and the regression test.

## The index: `index.json`

[`scripts/content/index.mjs`](../scripts/content/index.mjs) generates
`index.json` from the front matter:

```json
{ "pages": [ { "slug": "…", "title": "…", "description": "…", "date": "YYYY-MM-DD",
  "kind": "…", "order": 1, "path": "content/learn/….md", "sources": ["https://…"] } ] }
```

- It also lists every release note, `docs/release/X.Y.Z-notes.md` from 0.3.0
  on, as a `release` page. The title is "Lasm X.Y.Z", the date is the date the
  notes were added in git, and the path is the notes file. Notes whose title
  says "never published" are skipped.
- `path` is the file the website renders.
- Pages are sorted: overview, tutorials by `order`, bug-caught,
  proof-spotlight, platform, then releases. Within each kind, the newest
  comes first.

After changing a page or adding release notes, run
`node scripts/content/index.mjs` and commit `index.json`. CI fails in any of
these cases:

- `index.json` is stale;
- a front-matter field is missing or invalid;
- a relative link names no file.

Every night it also fetches every source URL and fails on an error status
(`--check-sources`).

## Tutorials

A tutorial is tested, so it can't rot silently.

- `learn/<slug>.md` is the tutorial as a reader sees it. Every command a
  reader runs is shown in a `sh` code block. Every file the reader writes is
  shown whole.
- `tutorials/<slug>/project/` is the finished project, file for file. It
  holds the files `npm create @lasm@latest` writes and the files the
  tutorial edits.
- `tutorials/<slug>/steps.json` lists the steps. Its format is at the top of
  [`scripts/content/check-tutorials.mjs`](../scripts/content/check-tutorials.mjs).

`check-tutorials.mjs` checks two things:

- **Statically** (`--static`, no builds): the page shows every command, file,
  request and expected output that `steps.json` names.
- **By running** (`--tgz CLI.tgz --work DIR`): each step runs in a new
  directory against a **packed** Lasm CLI, and the outputs are checked.
  - `npm create @lasm@latest …` runs `lasm init …` from the packed CLI. That
    is the command `@lasm/create` runs.
  - Every other command runs as written, with bash.
  - At the end, each file in `project/` must equal the file the steps
    produced. The version of `@lasm/cli` is not compared.

[content.yml](../.github/workflows/content.yml) runs both checks on pull
requests that touch `content/`, `scripts/content/` or `docs/release/`, and
every night. Each run uses a CLI packed from that commit, as `differential.yml`
does. `npx wrangler dev` runs only in CI, with the wrangler version the other
workflows pin, on local workerd: no account and no deployment.

Readers run the published `@lasm/cli` (`npm create @lasm@latest`). CI runs
the code on `main`. When the two differ, the nightly run shows it first.

The tutorials' code (`project/` and the code blocks) is starter code. Like
`templates/` and `examples/`, it is under MIT No Attribution
([tutorials/LICENSE](tutorials/LICENSE)).
