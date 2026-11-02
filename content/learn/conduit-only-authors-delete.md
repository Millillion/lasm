---
title: "Proved in Conduit: only an article's author can delete it"
description: One of Conduit's 50 proved propositions, read line by line, with how the proof reaches the endpoint the server runs and what it leaves to trust.
date: 2026-11-02
kind: proof-spotlight
sources:
  - https://github.com/Millillion/lasm/blob/main/examples/conduit/Proofs/Spec.lean
  - https://github.com/Millillion/lasm/blob/main/examples/conduit/Proofs/Endpoints.lean
  - https://github.com/Millillion/lasm/blob/main/examples/conduit/Conduit/Api.lean
  - https://github.com/Millillion/lasm/blob/main/examples/conduit/Server/Sql.lean
  - https://github.com/Millillion/lasm/blob/main/examples/conduit/Proofs/Model.lean
  - https://github.com/Millillion/lasm/blob/main/examples/conduit/PROOFS.md
  - https://github.com/Millillion/lasm/blob/main/examples/conduit/SPEC.md
  - https://github.com/Millillion/lasm/blob/main/README.md
aiGenerated: true
---

# Proved in Conduit: only an article's author can delete it

[Conduit](../../examples/conduit) is the RealWorld app, a Medium clone,
written entirely in Lean and compiled to WebAssembly by Lasm. It has a REST
API, a server-rendered browser app, and proofs. Its rules come with 50
propositions. Each one is proved by a theorem of the same name, and there are
294 theorems in all, counting the lemmas the proofs are built from. Every one
uses only Lean's standard axioms, so none of them contains a `sorry`
([PROOFS.md](../../examples/conduit/PROOFS.md)).

This page reads one of them closely: `deleteArticle_auth`.

## The requirement

The RealWorld specification says `DELETE /api/articles/:slug` may be done
only by the article's author. Anyone else gets a 403. The author gets a 204,
and the article's comments, tags and favorites go with it.
[SPEC.md](../../examples/conduit/SPEC.md) maps that requirement (A13) to this
proposition, and to the tests of the official API suite.

## The proposition

The propositions live in one file,
[`Proofs/Spec.lean`](../../examples/conduit/Proofs/Spec.lean). It has no
proofs in it, so a reviewer can read it alone:

```lean
def deleteArticle_auth : Prop :=
  ∀ (e : Env) (r : Request) (slug : String) (D : DB) (me : UserRow) (tok : String) (a : ArticleRow),
    LoggedIn e D r me tok → D.articles.find? (·.slug == slug) = some a →
    (a.author ≠ me.id → (deleteArticle store e.svc r slug).run.run D = (.error (.forbidden "article"), D)) ∧
    (a.author = me.id → (deleteArticle store e.svc r slug).run.run D = (.ok { status := 204, body := none }, D.removeArticle a.id))
```

Read it line by line:

- **For every** environment `e` (clock, password hashing and tokens), request
  `r`, slug, database `D`, user `me` and article `a`.
- **If** the request's token logs in as `me`, and the slug names article `a`,
- **and `me` is not the author**, then running `deleteArticle` gives the
  error `forbidden "article"` (a 403) **and the database is still `D`**,
  unchanged;
- **and `me` is the author**, then it answers 204 with no body, and the
  database becomes `D.removeArticle a.id`.

`removeArticle` removes the article, its tags, its favorites and its
comments, and nothing else:

```lean
def removeArticle (D : DB) (id : Nat) : DB :=
  { D with articles := D.articles.filter (·.id != id), tags := D.tags.filter (·.1 != id),
           favorites := D.favorites.filter (·.2 != id), comments := D.comments.filter (·.article != id) }
```

## The code it is about

`deleteArticle` is the endpoint in
[`Conduit/Api.lean`](../../examples/conduit/Conduit/Api.lean), the same
function the server calls:

```lean
def deleteArticle (s : Store m) (svc : Services m) (r : Request) (slug : String) : M m Reply := do
  let (me, _) ← requireUser s svc r
  let a ← findArticle s slug
  unless canEditArticle me.id a do throw (.forbidden "article")
  (s.deleteArticle a.id : m _)
  return { status := 204, body := none }
```

It is written against `Store m`, a record with one function per SQL
statement.

- **The server** passes a store that runs SQL. Its `deleteArticle` deletes the
  article's tags, favorites and comments, then the article
  ([`Server/Sql.lean`](../../examples/conduit/Server/Sql.lean)).
- **The proofs** pass a model, in which each statement is a named function on
  lists ([`Proofs/Model.lean`](../../examples/conduit/Proofs/Model.lean)).
  There, `deleteArticle` is `removeArticle`.

The endpoint code is the same in both.

## The proof

The proof, in
[`Proofs/Endpoints.lean`](../../examples/conduit/Proofs/Endpoints.lean), takes
each case and unfolds the endpoint:

```lean
theorem deleteArticle_auth : Spec.deleteArticle_auth := by
  intro e r slug D me tok a hauth ha
  constructor
  · intro hne
    unfold deleteArticle
    simp only [ExceptT.run_bind, StateT.run_bind, requireUser_ok e hauth]
    simp [findArticle, store, ha, canEditArticle, hne, StateT.run_bind, ExceptT.run_bind]
  · intro heq
    unfold deleteArticle
    simp only [ExceptT.run_bind, StateT.run_bind, requireUser_ok e hauth]
    simp [findArticle, store, ha, canEditArticle, heq, StateT.run_bind, ExceptT.run_bind]
```

`npm run proofs` checks more than that each proof is accepted. It also checks
that every theorem's type is **exactly** its proposition, so a proof can't
quietly prove something weaker. And it checks that every theorem uses only
`propext`, `Classical.choice` and `Quot.sound`. CI runs it on every change to
Conduit.

## What is proved, and what is trusted

The proposition holds for every request and every database, not only for the
cases a test tries. Some things are trusted rather than proved
([README](../../README.md#flagship-example-conduit-with-294-proved-theorems)):

- that each SQL statement does what its model says (here, that the four
  `DELETE`s do what `removeArticle` does);
- the JSON text layer;
- concurrency between requests;
- Lean, Lasm and the JavaScript runtime.

The official RealWorld API suite also tests this requirement, on every
platform Conduit runs on. The other 49 propositions are listed in plain
English in [PROOFS.md](../../examples/conduit/PROOFS.md).
