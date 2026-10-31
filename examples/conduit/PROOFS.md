# What is proved about Conduit

Conduit's rules are ordinary Lean functions, and the server and the browser
run exactly those functions. So instead of only testing them, we can prove
things about them for every possible input. This file lists each proved
proposition in plain English. [SPEC.md](SPEC.md) goes the other way: it
takes every requirement of the RealWorld specification and says which
proposition covers it, which test covers it, or why it is out of scope.

```sh
npm run proofs              # builds Conduit/ and Proofs/, then test/Axioms.lean, then checks the documents
npm run proofs -- --write   # also regenerates the tables below from Proofs/Spec.lean
```

## How to review the propositions

Every proposition is a named `def … : Prop` in
[`Proofs/Spec.lean`](Proofs/Spec.lean), grouped by requirement, with a
plain-English doc comment, and with no proofs in that file. A reviewer can
read that one file and ignore the proofs: `npm run proofs` fails unless

- every proposition `Spec.x` has a theorem `Conduit.Proofs.x` whose type is
  exactly `Spec.x` (so a proof cannot quietly prove something weaker);
- every theorem uses only Lean's three standard axioms (`propext`,
  `Classical.choice`, `Quot.sound`): a `sorry` anywhere would show up as the
  axiom `sorryAx`;
- the tables below match the doc comments in `Proofs/Spec.lean`, every
  `Spec.x` that SPEC.md names exists and is proved, and every proposition is
  named in SPEC.md (each one answers a requirement);
- the theorem count stated in the READMEs is the one just checked.

CI runs it on every change ([conduit.yml](../../.github/workflows/conduit.yml),
job `proofs`). The proofs use only Lean's own library (no Mathlib) and check
with Lean 4.35.0; those about the browser app also need Lasm's library
(`Lasm.UI`), which `npm run proofs` provides.

## How the proofs reach the real code

The endpoints in [`Conduit/Api.lean`](Conduit/Api.lean) are written once,
against two records of functions:

- `Store m`: the database, one function per SQL statement
  ([`Conduit/Store.lean`](Conduit/Store.lean));
- `Services m`: the clock, password hashing and tokens.

The server passes SQLite and Web Crypto, in `Async`
([`Server/Sql.lean`](Server/Sql.lean), [`Server/App.lean`](Server/App.lean)).
The proofs pass [`Proofs/Model.lean`](Proofs/Model.lean): the tables as Lean
lists (`DB`), and for each SQL statement a named function that does to the
lists what the statement does to the tables (`DB.addFollow` is
`INSERT OR IGNORE`, `DB.removeArticle` is the `DELETE … WHERE` with its
cascade, …). The services are any pure functions (`Env`): every proposition
holds for every clock, hash and token scheme. The endpoint code itself is the
same: `deleteArticle`, `follow`, `favorite`, … and the router `handle` are the
functions the server calls.

The browser app's `update` and `view` ([`Frontend/`](Frontend)) are pure, so
the propositions about them are about the functions the browser runs. The
server renders the first page of every URL with the same `view`
([`Server/Pages.lean`](Server/Pages.lean)).

## The propositions

<!-- BEGIN PROPOSITIONS -->
<!-- Generated from Proofs/Spec.lean by `npm run proofs -- --write`; do not edit by hand. -->

**49 propositions**, each proved by the theorem of the same name in `Proofs/` (293 theorems in all: the 49 below and the lemmas their proofs are built from). Every one uses only Lean's standard axioms.

### A. The wire format (JSON)

| Proposition | In plain English |
| --- | --- |
| [`responses_roundtrip`](Proofs/Spec.lean#L166) | **Every response decodes to what was encoded**: users, profiles, articles (with and without a body), comments and article lists, including `null` `bio`/`image`. The server encodes them; the browser app decodes them. |
| [`requests_roundtrip`](Proofs/Spec.lean#L174) | **Every request body decodes to what was encoded**, and for updates an absent field, a `null` and a value stay distinct. The browser app encodes them; the server decodes them. |
| [`error_roundtrip`](Proofs/Spec.lean#L182) | An error body with one field, `{"errors":{"field":["message", …]}}`, decodes to the same field and messages (every error the API sends except a validation error naming several fields). |
| [`handle_error`](Proofs/Spec.lean#L188) | **Every error an endpoint raises becomes the spec's error response**: its status and the body `{"errors": …}`. |

### B. Validation (the server's, which the browser app runs too)

| Proposition | In plain English |
| --- | --- |
| [`validateNewUser_spec`](Proofs/Spec.lean#L196) | **Registration is accepted exactly when the rules hold**, and what is accepted is the request with its username and email trimmed: a username that is not blank and at most 64 characters, a plausible email (one `@`, text on both sides, no spaces), and a password of 8 to 128 characters. |
| [`validateLogin_spec`](Proofs/Spec.lean#L208) | **A login is accepted exactly when it has an email and a password** (trimmed email; the password's length is not checked, so older passwords still log in). |
| [`validateNewArticle_spec`](Proofs/Spec.lean#L216) | **An article is accepted exactly when it has a title, a description and a body**; what is accepted has its title and description trimmed and its tags cleaned (`cleanTags`): the tags never make an article invalid. |
| [`validateNewComment_spec`](Proofs/Spec.lean#L226) | **A comment is accepted exactly when its body is not blank**, unchanged; a blank one is `{"errors":{"body":["can't be blank"]}}`. |
| [`validation_errors_wellFormed`](Proofs/Spec.lean#L234) | **A rejected registration, login or article is a 422 that names at least one field, each with at least one message**, as the spec's error body requires. |
| [`blank_fields_named`](Proofs/Spec.lean#L243) | **Blank fields get the spec's message**: a blank username, email, password, title, description or body is rejected with `{"errors":{"<field>":["can't be blank", …]}}`. |
| [`validateUpdateUser_spec`](Proofs/Spec.lean#L256) | **A user update only ever sets valid values, and rejects what the spec rejects**: emails, usernames and passwords obey the registration rules, and `null` or `""` for them is a 422; `bio` and `image` are set to text or cleared, and both `""` and `null` clear them. |
| [`validateUpdateArticle_spec`](Proofs/Spec.lean#L271) | **An article update keeps absent fields, rejects `null`, and cleans tags**: `tagList` absent keeps the tags, `[]` removes them all, `null` is a 422, and every field set is never blank. |
| [`cleanTags_spec`](Proofs/Spec.lean#L282) | **Stored tags are cleaned**: trimmed, never blank, never repeated, and no tag that was not blank is lost. |
| [`validate_again`](Proofs/Spec.lean#L289) | **Validating what already passed changes nothing**: the server accepts what the browser app validated, unchanged (trimming and cleaning are idempotent). |
| [`parsePage_spec`](Proofs/Spec.lean#L297) | **`?limit=` and `?offset=`**: absent, a page is 20 articles from the first; a positive `limit` is clamped to 100; `limit=0` and non-numbers are a 422. |

### C. Slugs

| Proposition | In plain English |
| --- | --- |
| [`slugify_spec`](Proofs/Spec.lean#L309) | **A slug has only lowercase ASCII letters, digits and `-`, and is never empty.** |
| [`uniqueSlug_spec`](Proofs/Spec.lean#L313) | **`uniqueSlug` never returns a taken slug**, and keeps the plain slug when it is free. |

### D. Lists and pagination

| Proposition | In plain English |
| --- | --- |
| [`newestFirst_spec`](Proofs/Spec.lean#L319) | **The lists are sorted newest first** and contain exactly the matching articles. |
| [`window_spec`](Proofs/Spec.lean#L323) | **A page is a contiguous run of the list, of at most `limit` items** (order kept, nothing inserted). |
| [`pages_cover`](Proofs/Spec.lean#L328) | **Walking the pages never skips or repeats an article**: pages 0, 1, …, n−1 of size k, one after the other, are the first n·k items in order, so enough pages show every item exactly once. |
| [`articleOf_favorites`](Proofs/Spec.lean#L336) | **`favoritesCount` is the number of distinct users who favorited the article, and `favorited` says whether the viewer is one of them**, for every article the API returns. |

### E. Authorization and data integrity (every endpoint)

| Proposition | In plain English |
| --- | --- |
| [`handle_writes`](Proofs/Spec.lean#L348) | **Every change to the database is one of the changes `Write` lists**: a request changes nothing, or is a registration of a new username and email, or comes from a logged-in user `me` and makes one change `me` may make (their own row, their follows and favorites, their own articles and comments). |
| [`reads_change_nothing`](Proofs/Spec.lean#L358) | **Reads never write**: every `GET` request, and every login, leaves the database exactly as it was. |
| [`protected_needs_token`](Proofs/Spec.lean#L364) | **The protected endpoints check the token first**: without an `Authorization` header, each of them answers 401 `{"errors":{"token":["is missing"]}}` and changes nothing (even for a slug or user that does not exist). |
| [`others_untouched`](Proofs/Spec.lean#L372) | **Nobody else's data changes** *(consequence)*: after any request from `me` (or from nobody), other users' rows, articles, follows and favorites, and other users' comments on articles that are not `me`'s, are still there unchanged; a registration only adds a user. (Given distinct ids, as the `PRIMARY KEY`s guarantee.) |
| [`noSelfFollow_preserved`](Proofs/Spec.lean#L389) | **Following is irreflexive** *(consequence)*: if nobody follows themselves before a request, nobody does after it, whatever the request. |
| [`articlesOk_preserved`](Proofs/Spec.lean#L394) | **Every article stays addressable**: if article ids are distinct and slugs are distinct and never `feed`, they stay so after any request, so `/api/articles/:slug` always names one article and never shadows `/api/articles/feed`. |
| [`deleteArticle_auth`](Proofs/Spec.lean#L401) | **Only an article's author may delete it**: deleting someone else's article is 403 `{"errors":{"article":["forbidden"]}}` and changes nothing; the author's delete answers 204 and removes the article with its tags, favorites and comments, and nothing else. |
| [`updateArticle_forbidden`](Proofs/Spec.lean#L411) | **Only an article's author may update it**: updating someone else's article is 403 and changes nothing, whatever the request body says (the check comes before the body is read). |
| [`deleteComment_forbidden`](Proofs/Spec.lean#L419) | **Only a comment's author may delete it**: deleting someone else's comment is 403 `{"errors":{"comment":["forbidden"]}}` and changes nothing. |
| [`follow_self`](Proofs/Spec.lean#L427) | **Following yourself is refused** (422) and changes nothing. |
| [`relations_idempotent`](Proofs/Spec.lean#L433) | **Following, unfollowing, favoriting and unfavoriting are idempotent**: doing one twice leaves the database exactly as doing it once, for every request and database. |
| [`route_table`](Proofs/Spec.lean#L442) | **The router sends every request of the spec to its endpoint**, and anything else to 404 `{"errors":{"route":["not found"]}}`. |

### F. The browser app: routes, forms, state

| Proposition | In plain English |
| --- | --- |
| [`parse_href`](Proofs/Spec.lean#L468) | **Every link the app writes leads back to its page**: for every route (pages from 1), `Route.parse` of the segments and query `Route.href` writes gives the route again. The server and the app both route URLs with `Route.parse`. |
| [`update_sends_accepted`](Proofs/Spec.lean#L473) | **The app never sends what the server would reject**: for every message and every state, each HTTP request `update` asks for has no body, or the body of one of the API's requests that the server's own decoding reads back and its own validation accepts unchanged (registration, login, settings, new and edited articles, comments). |
| [`busy_blocks_submit`](Proofs/Spec.lean#L481) | **No double submission**: while a form's request is on its way (`busy`), submitting it again does nothing. |
| [`stale_answers_ignored`](Proofs/Spec.lean#L488) | **Late answers for another page are ignored**: data that arrives for a route other than the current one changes nothing and asks for nothing. |
| [`token_agrees_preserved`](Proofs/Spec.lean#L495) | **The token the app sends is the signed-in user's**: if a signed-in user's token is the one kept, it stays so after every message (the token check at start-up, `tokenLoaded`, comes before anyone is signed in). |
| [`logout_forgets`](Proofs/Spec.lean#L502) | **Signing out forgets the token**: the viewer is a guest, no token is kept, the stored token is removed and the app goes home. |
| [`guards`](Proofs/Spec.lean#L508) | **Pages are guarded**: once the viewer is known, a guest on a page that needs a user (settings, editor, your feed) is sent to the login page and nothing is fetched; a signed-in user on the login or register page is sent home. |
| [`hydration_agrees`](Proofs/Spec.lean#L516) | **The server-rendered page is the app's first view**: the HTML inside `<div id="app">` that the server sends for a URL is exactly the rendering of the browser app's first model for that URL and those flags, so the app hydrates it without changing anything. |
| [`hydrated_only_enables`](Proofs/Spec.lean#L524) | **Hydrating changes nothing on the page but the controls**: the first message the app gets only marks it hydrated (enabling its buttons). |
| [`pagination_links`](Proofs/Spec.lean#L529) | **The page links reach every article**: for a list of `count` articles, the pagination shows links to pages 1, 2, …, n (none when there is one page), in order, where n pages of 10 hold all `count` articles. (With `pages_cover` and `parsePage_spec`: walking those links shows every article exactly once.) |

### G. The rendered pages: structure, links, accessibility

| Proposition | In plain English |
| --- | --- |
| [`view_layout`](Proofs/Spec.lean#L542) | **Every page has the template's layout**: the navbar (`nav.navbar.navbar-light`), then the page, whose root element has the template's class for its route (`home-page`, `auth-page`, …), then the footer. |
| [`view_hrefs_safe`](Proofs/Spec.lean#L549) | **No `javascript:` links anywhere**: every `href` on every page, for every state (article bodies included), is `http:`, `https:`, `mailto:` or has no scheme. |
| [`view_no_raw_html`](Proofs/Spec.lean#L555) | **No raw HTML**: no element on any page sets `innerHTML`, so everything an author writes is a text node or an escaped attribute value. |
| [`view_imgs_alt_links_href`](Proofs/Spec.lean#L560) | **Every image has alternative text** (`alt`), and every link a target (`href`). |
| [`view_controls_described`](Proofs/Spec.lean#L565) | **Every form control is described**: every `input` and `textarea` has a non-empty `placeholder` (the template's labels). |
| [`article_body_no_h1`](Proofs/Spec.lean#L571) | **An article body never adds an `h1`**: its headings start at `h2`, so the article's title is the page's only `h1`. |
<!-- END PROPOSITIONS -->

## What is trusted, not proved

- **The SQL.** Each statement in `Server/Sql.lean` is assumed to do what its
  model in `Proofs/Model.lean` does. They are short and listed side by side;
  the official API suite exercises them on node:sqlite, D1 and bun:sqlite.
  The schema backs the important ones up: `PRIMARY KEY (follower, followed)`,
  `CHECK (follower <> followed)`, `PRIMARY KEY (user, article)`, `UNIQUE`
  slugs, usernames and emails, and `INTEGER PRIMARY KEY` ids (the propositions
  that need distinct ids take them as hypotheses).
- **Which rows a filter matches.** The model's `articleIds` is the meaning of
  the `WHERE` clauses for `?tag=`, `?author=`, `?favorited=` and the feed; the
  propositions say what the endpoints do with the matching ids (sorting,
  windows, counts), and the API suite checks the filters.
- **JSON text and URLs.** The propositions are about `Lean.Json` values and
  route segments; that Lean's `Json.compress` and `Json.parse` agree, and that
  the HTTP layer and `Lasm.UI`'s URL parsing split a path into the segments
  the app wrote, is not proved here.
- **The browser and the DOM.** The view propositions are about the tree
  `view` returns. That the browser draws it as the HTML specification says,
  and what the page looks like (CSS, fonts, pixels), is outside the proofs
  (SPEC.md, section on layout).
- **Lean, Lasm and the JavaScript runtime**: that Lean's kernel is sound, that
  Lasm compiles the Lean faithfully to WebAssembly, and that SQLite, Web
  Crypto and the HTTP layer behave as documented.
- **Concurrency.** The propositions are about one request at a time. Two
  requests racing for the same slug are caught by the `UNIQUE` constraint,
  not by a proof.
