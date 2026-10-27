# What is proved about Conduit

Conduit's rules are ordinary Lean functions, and the server runs exactly
those functions. So instead of only testing them, we can prove things about
them for every possible input. This file lists each theorem in plain English
and where the code it is about runs.

```sh
npm run proofs     # builds Conduit/ and Proofs/, then test/Axioms.lean
```

`npm run proofs` fails unless every theorem in `Proofs/` compiles **and** uses
only Lean's three standard axioms (`propext`, `Classical.choice`,
`Quot.sound`): a `sorry` anywhere would show up as the axiom `sorryAx`. CI runs
it on every change ([conduit.yml](../../.github/workflows/conduit.yml), job
`proofs`). The proofs use only Lean's own library (no Mathlib). The server-side ones
check with plain Lean 4.35.0; the browser app's (`Proofs/Client.lean`) also
need Lasm's library (`Lasm.UI`), which `npm run proofs` provides.

## How the proofs reach the real code

The endpoints in [`Conduit/Api.lean`](Conduit/Api.lean) are written once,
against two records of functions:

- `Store m`: the database, one function per SQL statement
  ([`Conduit/Store.lean`](Conduit/Store.lean));
- `Services m`: the clock, password hashing and tokens.

The server passes SQLite and Web Crypto, in `Async`
([`Server/Sql.lean`](Server/Sql.lean), [`Server/App.lean`](Server/App.lean)).
The proofs pass [`Proofs/Model.lean`](Proofs/Model.lean): the tables as Lean
lists, and for each SQL statement a function that does to the lists what the
statement does to the tables (`INSERT OR IGNORE` adds a pair unless it is
there, `DELETE … WHERE` filters, …). The services in the proofs are *any*
functions (every theorem holds for every clock, hash and token scheme). The
endpoint code itself is the same: `deleteArticle`, `follow`, `favorite`, …
are the functions the server calls.

## The theorems

### Authorization ([`Proofs/Endpoints.lean`](Proofs/Endpoints.lean))

| Theorem | In plain English | Code |
| --- | --- | --- |
| `deleteArticle_forbidden` | If you are logged in and the article is someone else's, `DELETE /api/articles/:slug` answers 403 `{"errors":{"article":["forbidden"]}}` and the database is exactly as before. | `Api.deleteArticle` |
| `deleteArticle_author` | If it is yours, the article, its tags, favorites and comments are removed, nothing else changes, and the answer is 204. | `Api.deleteArticle` |
| `updateArticle_forbidden` | Updating someone else's article is 403 and changes nothing, whatever the request body says (the check comes before the body is even read). | `Api.updateArticle` |
| `deleteComment_forbidden` | Deleting someone else's comment is 403 and changes nothing. | `Api.deleteComment` |
| `requireUser_run` | Working out who is logged in reads only the users table and changes nothing. | `Api.requireUser` |
| `route_deleteArticle`, `route_updateArticle`, `route_deleteComment`, `route_follow`, `route_favorite` | The router really sends those requests to those endpoints. | `Api.route` |
| `handle_error` | Any error an endpoint raises becomes the response with its status and the spec's `{"errors": …}` body. | `Api.handle` |

### Following and favorites ([`Proofs/Endpoints.lean`](Proofs/Endpoints.lean), [`Proofs/Favorites.lean`](Proofs/Favorites.lean))

| Theorem | In plain English | Code |
| --- | --- | --- |
| `follow_self` | Following yourself is refused (422) and changes nothing. | `Api.follow`, `canFollow` |
| `follow_noSelf` | **Following is irreflexive**: if nobody follows themselves before a `follow` request, nobody does after it, whatever the request. | `Api.follow` |
| `follow_state`, `follow_idempotent` | Following adds the pair (you, them) unless it is there; following twice leaves the database exactly as following once. | `Api.follow` |
| `unfollow_state`, `unfollow_idempotent` | Unfollowing removes the pair; doing it twice is the same as once. | `Api.unfollow` |
| `favorite_state`, `favorite_idempotent`, `unfavorite_state`, `unfavorite_idempotent` | The same for favorites. | `Api.favorite`, `Api.unfavorite` |
| `articleOf_favorites` | **`favoritesCount` is the number of distinct users who favorited the article**, and `favorited` is true exactly when the viewer is one of them, for every article the API returns. | `Rules.articleOf` |
| `mem_fansOf`, `fansOf_nodup` | The list counted is exactly the users with a favorite for that article, each once. | `Rules.fansOf` |

### Slugs ([`Proofs/Slug.lean`](Proofs/Slug.lean))

| Theorem | In plain English | Code |
| --- | --- | --- |
| `uniqueSlug_fresh` | **The slug chosen for an article is never one already in use** (nor `feed`, which is in the list it avoids). Proof: the first `n + 1` candidates (`title`, `title-2`, …) are all different, so `n` taken slugs cannot cover them. | `Slug.uniqueSlug`, `Api.freeSlug` |
| `uniqueSlug_of_free` | When the plain slug is free it is used as it is. | `Slug.uniqueSlug` |
| `candidate_injective` | `title`, `title-2`, `title-3`, … are all different. | `Slug.candidate` |
| `slugify_chars` | A slug contains only `a`–`z`, `0`–`9` and `-`. | `Slug.slugify` |
| `slugify_ne_empty` | A slug is never empty. | `Slug.slugify` |

Slugs are deterministic in the sense that matters: `slugify` is a pure
function of the title, so the same title always gives the same base slug.

### Pagination ([`Proofs/Paging.lean`](Proofs/Paging.lean))

| Theorem | In plain English | Code |
| --- | --- | --- |
| `newestFirst_sorted`, `newestFirst_perm` | The list endpoints sort exactly the matching articles, newest first. | `Paging.newestFirst`, `Api.listPage` |
| `window_infix`, `window_newestFirst_sorted` | A page is a contiguous run of that order: nothing inserted, nothing reordered. | `Page.window` |
| `window_length_le` | A page has at most `limit` articles. | `Page.window` |
| `window_consecutive` | The page at `offset` followed by the page at `offset + limit` is exactly the double-size page: consecutive pages fit together. | `Page.window` |
| `pages_concat`, `pages_cover` | **Walking the pages never skips or repeats an article**: pages 0, 1, … , n−1 together are the first n·limit articles in order, and enough pages give every article exactly once. | `Page.window` |
| `window_nodup` | A page never shows an article twice. | `Page.window` |

### Validation ([`Proofs/Validation.lean`](Proofs/Validation.lean))

The server validates every request body with these functions, and its
endpoints take the *validated* types (`{ v : NewUser // v.valid }`, …), so an
endpoint cannot receive anything that has not passed them.

| Theorem | In plain English | Code |
| --- | --- | --- |
| `validateNewUser_ok` | A registration that passes has a username that is not blank and at most 64 characters, a plausible email, and a password of 8 to 128 characters. | `validateNewUser`, `Api.register` |
| `validateNewUser_error`, `validateNewArticle_error` | A rejected request is a 422 that names at least one field, each with at least one message, as the spec's error body requires. For articles: the tags never make an article invalid (they are cleaned), so the missing title, description or body is always the one named. | `validateNewUser`, `validateNewArticle` |
| `validateNewArticle_ok` | An article that passes has a title, a description and a body, and its tags are neither blank nor repeated. | `validateNewArticle`, `Api.createArticle` |
| `validateUpdateUser_ok` | An update only ever sets valid emails, usernames and passwords, and sets `bio`/`image` to text or clears them, never to `""`. | `validateUpdateUser`, `Api.updateUser` |
| `nullable_empty` | `""` and `null` both clear `bio` and `image` (the spec's normalization). | `nullable` |
| `validateLogin_ok`, `validateNewComment_ok`, `validateNewComment_error` | Logins have an email and a password; comments have a body, and a blank one is `{"errors":{"body":["can't be blank"]}}`. | `validateLogin`, `validateNewComment` |
| `cleanTags_not_blank`, `cleanTags_nodup` | Stored tags are never blank and never repeated. | `cleanTags` |

### The browser app ([`Proofs/Client.lean`](Proofs/Client.lean), [`Proofs/Markdown.lean`](Proofs/Markdown.lean))

The browser app's `update` is pure, so its submit handlers can be proved
about directly. Each one validates the form with the server's own function
first.

| Theorem | In plain English | Code |
| --- | --- | --- |
| `submitRegister_sends_valid`, `submitLogin_sends_valid` | **The app never sends an invalid registration or login**: submitting either sends nothing (and shows the validation's messages) or sends exactly the encoding of a request that passed `validateNewUser` / `validateLogin`. | `Frontend.submitRegister`, `Frontend.submitLogin` |
| `publish_sends_valid` | Publishing sends nothing, or an article that passed `validateNewArticle`: as `POST /api/articles`, or as a `PUT` with every field and the tag list (so removed tags are removed). | `Frontend.publish` |
| `postComment_sends_valid` | Posting a comment sends nothing, or a comment with a body. | `Frontend.postComment` |
| `inlines_safe`, `safeHref_allowed` | **No `javascript:` links**: every link the Markdown reader builds has an `http:`, `https:`, `mailto:` or relative target. Article bodies become element and text nodes (never HTML text), so a link's `href` is the only URL an author controls. | `Markdown.inlines`, `Markdown.safeHref` |

| `registration_accepted`, `login_accepted`, `article_accepted`, `comment_accepted` | **What the app sends, the server accepts as is**: the server unwraps the body, decodes it into exactly the request the app validated (the JSON round trips below), and its own validation accepts that request unchanged. | the server's `Api.bodyOf` and `validate…` |
| `validateNewUser_again`, `validateLogin_again`, `validateNewArticle_again`, `validateNewComment_again`, `clean_idem`, `cleanTags_idem` | Validating what already passed changes nothing: trimming and tag cleaning are idempotent. | `Conduit/Validation.lean` |

### The wire format ([`Proofs/Json.lean`](Proofs/Json.lean))

| Theorem | In plain English |
| --- | --- |
| `User.decode_encode`, `Profile.decode_encode`, `Article.decode_encode`, `Comment.decode_encode`, `ArticleList.decode_encode` | Every response type decodes to exactly what was encoded, including `null` `bio`/`image` and list entries without a `body`. |
| `LoginUser.decode_encode`, `NewUser.decode_encode`, `UpdateUser.decode_encode`, `NewArticle.decode_encode`, `UpdateArticle.decode_encode`, `NewComment.decode_encode` | Every request type too; for updates, an absent field, a `null` and a value stay distinct (all 243 combinations for users). |
| `ApiError.decode_encode_one` | An error body `{"errors":{"field":["message", …]}}` decodes to the same field and messages. |

The server encodes responses and decodes requests; a client written with the
same module does the opposite. These theorems say the two directions agree.

## What is trusted, not proved

- **The SQL.** Each statement in `Server/Sql.lean` is assumed to do what its
  model in `Proofs/Model.lean` does. They are short and listed side by side;
  the official API suite exercises them on node:sqlite, D1 and bun:sqlite.
  The schema backs the important ones up: `PRIMARY KEY (follower, followed)`,
  `CHECK (follower <> followed)`, `PRIMARY KEY (user, article)`,
  `UNIQUE` slugs, usernames and emails.
- **JSON text.** The theorems are about `Lean.Json` values; that Lean's
  `Json.compress` (printing) and `Json.parse` agree is Lean's, not proved here.
- **Lean, Lasm and the JavaScript runtime**: that Lean's kernel is sound, that
  Lasm compiles the Lean faithfully to WebAssembly, and that SQLite, Web
  Crypto and the HTTP layer behave as documented.
- **Concurrency.** The theorems are about one request at a time. Two requests
  racing for the same slug are caught by the `UNIQUE` constraint, not by a
  proof.
- **What the theorems do not say.** They do not prove that the API meets the
  whole RealWorld spec; the official suite checks that. They prove specific
  properties that tests can only sample.
