# Proposal: the next four flagship example apps

Status: a draft for Jordan to decide on (2026-10-31). Nothing here is built.
It answers the item in issue #21 that asks for "4 more of the best example
apps" after Conduit, each honed and tested on every supported platform, and
it is workstream 4 of the robustness plan.

## What each app has to do

Conduit sets the bar, so each new app should meet it in the same way:

- The app's rules are ordinary Lean functions, and the proofs are about the
  functions the server and the browser actually run. Conduit does this by
  writing its endpoints against a record of functions (`Store m`,
  `Services m`), which the server fills with SQL and the proofs fill with a
  model of the tables ([examples/conduit/PROOFS.md](../../examples/conduit/PROOFS.md)).
  The new apps should reuse that pattern.
- Each theorem is listed in plain English, with a map from the requirements
  of the app's specification to the theorems that cover them (workstream 3
  asks for the same map for Conduit).
- Where an official specification or test suite exists, it runs unmodified,
  pinned to a commit and checked against upstream, as Conduit pins
  RealWorld's `specs/`.
- CI runs the app on every platform it claims, with each platform's local
  tooling (workstream 2 is building this for Conduit, and the new apps should
  reuse its matrix rather than build their own).

## How the candidates were scored

Each candidate is scored from 1 (poor) to 5 (strong) on five criteria:

1. **Proofs.** How much a reader gains from what can be proved, and whether
   the theorems are about properties people already worry about.
2. **Story.** Whether a developer recognises the app at once and
   understands why a proof matters for it.
3. **Oracle.** Whether an official specification or test suite exists that
   we did not write, so that passing it means something to an outsider.
4. **Coverage.** How many of Lasm's platforms and features the app
   exercises that Conduit does not: the edge, WASI and Fastly, the browser,
   real-time connections, CPU-heavy work, and the different storage options.
5. **Effort.** 5 means little new work in Lasm itself and a small app; 1
   means large new platform features or a large app.

The weighted total counts proofs and story twice, because the purpose of
these apps is to show what verification adds to a recognisable program. The
total is a guide, not the decision; the reasoning under each candidate
matters more.

## The ranking

| Rank | Candidate | Proofs | Story | Oracle | Coverage | Effort | Weighted |
| ---: | --- | ---: | ---: | ---: | ---: | ---: | ---: |
| 1 | Collaborative text editor with a CRDT | 5 | 5 | 3 | 4 | 1 | 28 |
| 2 | Double-entry ledger and payments API | 5 | 4 | 3 | 4 | 3 | 28 |
| 3 | OAuth 2 and OpenID Connect provider | 5 | 4 | 5 | 3 | 1 | 27 |
| 4 | Markdown site generator held to CommonMark | 3 | 3 | 5 | 5 | 4 | 26 |
| 5 | Chess move generator and engine, checked by perft | 3 | 4 | 5 | 4 | 3 | 26 |
| 6 | TodoMVC, promoted, with Todo-Backend | 2 | 4 | 5 | 3 | 5 | 25 |
| 7 | 7GUIs (including the Cells spreadsheet) | 4 | 3 | 2 | 2 | 4 | 22 |
| 8 | Rate limiter and job queue | 4 | 2 | 1 | 4 | 4 | 21 |
| 9 | URL shortener | 2 | 3 | 1 | 5 | 5 | 21 |
| 10 | Hacker News reader (HNPWA) | 1 | 4 | 2 | 3 | 4 | 19 |
| 11 | Kanban board | 3 | 3 | 1 | 3 | 3 | 19 |

The recommendation is the first four, built in a different order from their
rank (see [the build plan](#build-plan)): the ledger first, then the site
generator, then the identity provider, then the collaborative editor. The
chess engine is a close fifth, and promoting TodoMVC is cheap enough to do
alongside the first app without counting it as one of the four.

## The candidates

### Collaborative text editor with a CRDT

Several people edit one plain-text (or Markdown) document at once, in the
browser, and keep editing while offline. A sequence CRDT written in Lean
runs in every browser and on the server, the server relays operations over
WebSockets and stores them, and replicas merge when they reconnect.

- **Theorems.**
  - Convergence (strong eventual consistency): two replicas that have
    applied the same set of operations, each in some order that respects
    causality, hold the same document. This rests on concurrent operations
    commuting and on re-delivered operations being ignored.
  - An insertion places its character immediately after the character it
    names, unless a concurrent insertion at the same place comes between
    them; a deletion removes only the character it names.
  - The causal-delivery buffer applies an operation only after the
    operations it depends on, and never drops one.
  - Every operation the server acknowledged is in its stored log, in the
    model of the store.
  - As a stretch goal, the non-interleaving property of the Fugue algorithm:
    two people typing at the same place concurrently do not get their text
    interleaved character by character.
- **Prior work.** Gomes, Kleppmann, Mulligan and Beresford proved convergence
  of RGA, an OR-set and a counter in Isabelle/HOL ("Verifying strong eventual
  consistency in distributed systems", OOPSLA 2017,
  [arXiv:1707.01747](https://arxiv.org/abs/1707.01747)). Weidner and
  Kleppmann define Fugue and its non-interleaving property in "The Art of
  the Fugue" ([arXiv:2305.00583](https://arxiv.org/abs/2305.00583)). A Lean
  development can follow the structure of the first paper.
- **Oracle.** There is no conformance suite for CRDTs, but there is a
  well-known recorded workload:
  [automerge-perf](https://github.com/automerge/automerge-perf) holds the
  character-by-character editing trace of a paper (182,315 insertions and
  77,463 deletions), and replaying it must produce the published final text
  of 104,852 characters. [crdt-benchmarks](https://github.com/dmonad/crdt-benchmarks)
  gives standard workloads for comparing speed and memory with Yjs and
  Automerge. Random multi-replica tests with shuffled delivery complete the
  oracle.
- **Platforms.** The browser (`Lasm.UI`, and `Lasm.Web`'s WebSocket client,
  which exists today), Node (a WebSocket server through an `@[js]` binding to
  the `ws` package), Bun and Deno (their built-in WebSocket servers through
  `Lasm.JS`), and Cloudflare Workers (a `WebSocketPair` held by a Durable
  Object). Replaying the editing trace is a CPU-heavy benchmark on every
  target, WASI included.
- **Storage.** An append-only operation log: SQLite on Node, Bun and Deno,
  Durable Object storage on Workers.
- **Why it ranks first on value.** "Google Docs in Lean, with a proof that
  everyone ends up with the same document" is easy to explain, and
  convergence bugs are a real and well-known failure of collaborative
  software.
- **Why it is built last.** It needs the most new work in Lasm. Lasm has no
  server-side WebSocket support of its own (`Std.Http` has no upgrade hook,
  according to the
  [server package catalog](../research/server-package-catalog-2026-10-22.md)),
  and a Durable Object is a class the Worker's entry module must export,
  which Lasm's generated Workers entry does not do today
  ([EDGE.md](../EDGE.md) says Durable Objects reach Lean only as `Lasm.JS`
  values through `env`). Text editing in the browser (a `textarea` with
  cursors and selections) is also harder in `Lasm.UI` than forms are, and the
  convergence proof is the largest proof in this list.

### Double-entry ledger and payments API

An HTTP API for accounts and transfers, in the style of
[TigerBeetle](https://docs.tigerbeetle.com/reference/transfer/): every
transfer debits one account and credits another by the same amount;
transfers can be pending and later posted or voided (two-phase transfers);
accounts can forbid their debits from exceeding their credits; transfers in
a linked chain succeed or fail together; and every transfer carries a
client-chosen id, so a retried request is not applied twice. A small
`Lasm.UI` page shows the accounts and the journal.

- **Theorems.**
  - Conservation: in every reachable state, for each ledger (currency), the
    sum over all accounts of credits minus debits is zero, for posted and
    for pending amounts.
  - Each successful transfer changes exactly two accounts, by the same
    amount in opposite directions, and changes nothing else.
  - Idempotency: submitting a transfer whose id already exists leaves the
    state exactly as it was, and the answer is `exists` when the fields are
    equal or a specific `exists_with_different_*` error when they are not
    (TigerBeetle's [result codes](https://docs.tigerbeetle.com/reference/requests/create_transfers/)).
  - An account with the debits-must-not-exceed-credits flag never has more
    debits than credits.
  - A pending transfer is posted or voided at most once; a post never moves
    more than the pending amount, and a void returns the pending amount.
  - A linked chain is applied entirely or not at all.
  - The stored balances equal the balances computed by replaying the
    journal from empty, so an auditor can recompute every balance.
  - Transfers between accounts of different ledgers are rejected, and no
    stored amount exceeds what the database's 64-bit integers hold.
- **Oracle.** There is no official test suite for ledgers. Two oracles are
  available all the same. First, TigerBeetle itself: it is open source
  (Apache-2.0), runs as a single local binary, and has an npm client
  (`tigerbeetle-node`), so CI can send the same random workload to the Lean
  ledger and to TigerBeetle and require the same result codes and balances
  for the subset of features both implement. Second, a bank-style workload
  in the manner of Jepsen's bank test: concurrent transfers and reads, where
  every read must see the same total.
- **Platforms.** Node (`node:sqlite`), Bun (`bun:sqlite`), Deno (with the SQLite
  binding that workstream 2 chooses for Conduit), Cloudflare Workers (D1, whose `batch` runs as one transaction, as
  Conduit already uses), and the Node-based serverless targets once
  workstream 2 gives them storage. The WASI target gets a command-line
  auditor, `ledger verify journal.ndjson`, which replays an exported journal
  and checks the invariants; it runs on wasmtime, wasmer and `node:wasi`.
  Fastly's KV store is eventually consistent, so it is not a correct store
  for balances, and the README should say so instead of offering a Fastly
  build.
- **Effort.** Medium. It reuses Conduit's structure (a `Store` record, one
  binding module per SQL engine, the API suite runner) and needs no new Lasm
  features.
- **Risks.** The proofs, as in Conduit, are about a model of the SQL
  statements, so the correspondence between each statement and its model is
  trusted, and so is the transaction isolation the database provides.
  Concurrency between requests is outside the proofs; the bank workload is
  the evidence for it. Running TigerBeetle in CI depends on the runner's
  kernel supporting io_uring; if it does not, the differential oracle falls
  back to the bank workload alone.

### OAuth 2 and OpenID Connect provider

A small identity provider: users sign in with a password, approve a client
application, and the client receives an authorization code, then ID,
access and refresh tokens. It implements the authorization code flow with
PKCE, OpenID Connect discovery (`/.well-known/openid-configuration`), a
JWKS endpoint, signed ID tokens, `userinfo`, and refresh-token rotation.
Clients are configured, not registered dynamically.

- **Theorems.**
  - An authorization code is redeemed at most once. Redeeming it a second
    time fails and revokes the tokens issued from it, as RFC 6749 section
    4.1.2 recommends.
  - A token is issued for a PKCE request only if the transformed
    `code_verifier` equals the stored `code_challenge` (stated for any hash
    function, as Conduit states its theorems for any password hash).
  - The provider redirects only to a `redirect_uri` registered for the
    client, compared exactly; an invalid one gets an error page and no
    redirect, so the provider cannot be used as an open redirector (RFC 6749
    section 4.1.2.1).
  - Granted scopes are a subset of the requested scopes and of the client's
    allowed scopes, and a refresh never widens them.
  - Presenting a refresh token that was already rotated revokes the whole
    token family.
  - Every ID token names the provider as `iss`, the client as `aud`, echoes
    the request's `nonce`, and expires after it was issued.
  - Codes and tokens past their lifetime are rejected, for every clock.
  - No token is issued without a recorded sign-in and consent for that user,
    client and scope.
- **Oracle.** The OpenID Foundation's
  [conformance suite](https://gitlab.com/openid/conformance-suite), the one
  used for [OpenID certification](https://openid.net/certification/), is
  open source and documents how to run it locally (it is a Java service with
  a database, started with Docker Compose). Its OpenID Provider test plans
  are a strong oracle that outsiders already trust.
- **Platforms.** Node, Bun, Deno, Cloudflare Workers (D1 for users and
  grants), and the Node-based serverless targets. Signing uses Web Crypto,
  which Conduit already calls on Node, Workers and Bun. WASI and Fastly are
  excluded: Lasm's WASI targets have no Web Crypto, and writing RSA or ECDSA
  signing in Lean, resistant to timing attacks, is a project of its own.
- **Effort.** High. The flows are many, the conformance suite is strict
  about details (headers, error codes, caching), and the suite has to reach
  the provider from inside its containers in CI.
- **Risks.** The suite may require HTTPS and a stable issuer URL, which
  means a local TLS setup in CI. The cryptographic primitives (Web Crypto)
  and the JSON Web Token encoding are trusted, not proved. The README must be
  careful not to present the example as a production identity provider.

### Markdown site generator held to CommonMark

A static site generator for a blog: a directory of Markdown posts with front
matter becomes a site of HTML pages, tag pages and an Atom feed. The same
Lean renderer runs in three places: as a WASI command
(`wasmtime run --dir . site.wasm build`), in the browser as a live preview
beside the editor, and at the edge, where a Worker or a Fastly service
renders posts on request from a KV store.

- **Theorems.**
  - HTML safety: text from a post appears in the output only escaped, so no
    post can add an element or attribute the renderer does not produce, and
    every link target has an allowed scheme. Conduit already proves the
    link half of this (`inlines_safe`, `safeHref_allowed`).
  - The output is well formed: the renderer builds an HTML tree and
    serialises it, and the serialised tags are balanced.
  - No broken internal links: every link from one generated page to another
    points at a page the build generates.
  - Permalinks are unique (Conduit's unique-slug proof applies).
  - Drafts are never published: a post marked `draft: true` appears in no
    page, tag page or feed.
  - The feed lists exactly the published posts, newest first.
- **Oracle.** The CommonMark specification's examples: version 0.31.2 has
  652 of them in [spec.json](https://spec.commonmark.org/0.31.2/spec.json),
  each a Markdown input with its expected HTML. They run on every target,
  and the same inputs can be compared with the reference implementation
  `commonmark.js` on random documents. Full conformance is tested, not
  proved.
- **Platforms.** WASI (wasmtime, wasmer, `node:wasi`, with file access),
  Fastly (Viceroy, with `Lasm.Fastly`'s KV store), Cloudflare Workers (Workers
  KV through `Lasm.KV`), Deno Deploy (Deno KV), the browser, and Node. This is
  the widest coverage of the four, and the only one where WASI and Fastly
  carry the main use rather than a side tool.
- **Effort.** Moderate. Conduit's Markdown reader covers a subset of
  CommonMark; the full specification (emphasis, link reference definitions,
  HTML blocks, lazy continuation lines) is a substantial parser, but it
  needs no new Lasm features.
- **Risks.** CommonMark's emphasis and link rules are intricate, so reaching
  all 652 examples may take longer than the rest of the app. Raw HTML
  blocks conflict with the safety theorem; the generator should render them
  as text by default, as Conduit does, and the README should say why some
  examples are counted as deliberately different.

### Chess move generator and engine, checked by perft (runner-up)

A chess engine with a board UI in the browser and an analysis API at the
edge. Its oracle is the strongest of any candidate: perft counts (the number
of legal move sequences to a given depth from known positions, published on
the [Chess Programming Wiki](https://www.chessprogramming.org/Perft_Results))
catch almost any move-generation bug. Theorems are possible but harder to
make meaningful: a generated move never leaves the mover's king in check,
making and unmaking a move restores the position, and castling rights only
ever shrink. It is CPU-heavy, which Lasm's examples lack. It ranks fifth
because the proofs are less central to why people would care, and because
the most impressive proof (that the generator returns exactly the legal
moves) is a large effort against a large specification.

### TodoMVC, promoted, with Todo-Backend

[examples/ui/todomvc](../../examples/ui/todomvc) already proves that every
reachable model is valid (`reachable_inv` in `Todo.lean`). It is tested in
CI by Lasm's own checks (`scripts/ui/browser-checks.mjs`), not by TodoMVC's
official suite. The TodoMVC repository now has one Cypress specification
that runs the official behavioural tests against every listed app
([tests/README.md](https://github.com/tastejs/todomvc/tree/master/tests)).
The [Todo-Backend](https://www.todobackend.com/) project specifies a small
JSON API for the same app, with an executable specification in the browser.

Running both suites against a Lean TodoMVC and a Lean Todo-Backend server
(the `fullstack` template is close to this) would be a few days of work and
gives a second, smaller full-stack example with two official suites. It
adds little new verification, so it is proposed as a side task, not as one
of the four. One risk: the Cypress specification locates apps by their place
in the TodoMVC repository, so it may need a small, documented harness to
point it at our build.

### 7GUIs

[7GUIs](https://7guis.github.io/7guis/tasks/) is a set of seven GUI tasks,
from a counter to a spreadsheet, designed to compare GUI toolkits. It
answers the launch question "what do you even specify for a website?"
better than any other candidate: the temperature converter's two fields
always agree, the flight booker never lets you book a return before the
departure, the circle drawer's undo and redo are inverse, and the
spreadsheet recalculates exactly the cells that depend on a changed cell and
rejects cycles. It has a specification but no test suite, and it runs only
in the browser, so it ranks seventh. Its proofs could be folded into
`Lasm.UI`'s documentation as worked examples.

### Rate limiter and job queue

A token-bucket or GCRA rate limiter and a job queue with leases. The proofs
are good (over any window, the limiter admits at most the rate times the
window plus the burst; a job acknowledged once is never delivered again; a
lease that expires makes the job available again), and the edge is its
natural home. There is no official suite, though, and the app is not
recognisable on its own. The rate limiter is better as a component of the
identity provider (limiting sign-in attempts) or of the ledger.

### URL shortener

The natural Fastly and Workers KV example, and small: codes are unique,
`decode (encode n) = n`, and the service redirects only to validated
`http:` and `https:` URLs. The proofs are shallow and there is no oracle,
so it would read as a toy beside Conduit. The site generator covers the same
platforms with more to prove.

### Hacker News reader (HNPWA)

[HNPWA](https://hnpwa.com) specifies a Hacker News reader as a progressive
web app, judged by Lighthouse scores. The project's repository is archived,
the app depends on the live Hacker News API, and there is little to prove
about a read-only client, so it ranks low despite being well known.

### Kanban board

Recognisable, and a theorem such as "moving a card never loses or
duplicates a card" is easy to state. There is no specification or suite,
and with real-time collaboration it becomes a smaller version of the
collaborative editor. If built, it should be a second view of the editor's
CRDT rather than an app of its own.

## Build plan

The order trades value against the work each app needs from Lasm itself,
so that each app builds on infrastructure the previous one created.

| Order | App | Why in this position | New Lasm work needed |
| ---: | --- | --- | --- |
| 1 | Ledger | It needs nothing new from Lasm, reuses Conduit's structure and CI, and its central theorem (money is neither created nor destroyed) is the simplest to explain of the four. | None. |
| 2 | Site generator | It brings WASI, Fastly and the edge KV stores into the flagship examples, which Conduit does not cover, with the strongest official oracle. | None expected; possibly faster file IO on WASI for large sites. |
| 3 | Identity provider | It has the best outside oracle, and it uses the Web Crypto and token work from Conduit and the rate limiter. | A TLS setup for the conformance suite in CI. |
| 4 | Collaborative editor | It has the highest value but needs WebSocket servers and Durable Objects. | WebSocket serving on Node, Bun, Deno and Workers; exporting a Durable Object class from a Workers build. |
| alongside 1 | TodoMVC and Todo-Backend | Small, and it uses two official suites. | None. |

For each app the sequence is the same as Conduit's: the pure rules and their
model first, then the theorems and the requirement map, then the server on
Node with the official or differential tests, then the other platforms in
the workstream 2 matrix, then the browser app and its end-to-end tests.

### Platform coverage of the four

| Platform or feature | Ledger | Site generator | Identity provider | Editor |
| --- | --- | --- | --- | --- |
| Node, Bun, Deno | yes | yes | yes | yes |
| Cloudflare Workers | D1 | Workers KV | D1 | Durable Objects |
| Node-based serverless (Lambda, Vercel, Netlify, Azure, GCF) | yes, with workstream 2's storage | yes | yes | no (no long-lived connections) |
| Deno Deploy, Supabase, Vercel and Netlify Edge | where a strongly consistent store exists | yes | yes | no |
| Fastly Compute | no (KV is eventually consistent) | yes (KV store) | no (no Web Crypto) | no |
| WASI (wasmtime, wasmer, `node:wasi`) | the journal auditor | the generator itself | no | the trace replay benchmark |
| Browser | account view | live preview | sign-in and consent pages | the editor |
| Real-time | no | no | no | WebSockets |
| CPU-heavy | no | large sites | password hashing | trace replay |

### Questions for Jordan

- Whether the ledger should copy TigerBeetle's data model and result codes
  closely (which makes the differential oracle possible) or define a simpler
  model of its own.
- Whether the identity provider should aim for the full Basic OP
  certification test plan or a named subset.
- Whether the editor's server-side WebSocket support should become a
  `Lasm.Fetch` feature for every target or stay as per-target `@[js]`
  bindings in the example.
