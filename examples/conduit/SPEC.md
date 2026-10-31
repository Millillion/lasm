# Conduit's specification, requirement by requirement

This is the map from the RealWorld specification to what covers each
requirement in Conduit:

- **proved**: a proposition of [`Proofs/Spec.lean`](Proofs/Spec.lean) (written
  `Spec.` and its name), proved for every input and every database, and listed in
  plain English in [PROOFS.md](PROOFS.md);
- **tested**: the official suites check it: the API suite
  ([`test/realworld/specs/api/hurl`](test/realworld/specs/api/hurl), 13 files,
  154 requests, `npm test`) or the end-to-end suite
  ([`test/realworld/specs/e2e`](test/realworld/specs/e2e), Playwright,
  `npm run test:e2e`), both vendored unmodified from
  gothinkster/realworld@ebbcdeb8;
- **out of scope**: neither, and why.

A requirement can be both: the proposition covers it for all inputs, the test
checks the parts the proposition does not reach (the SQL, the JSON text, the
browser). `npm run proofs` checks that every `Spec.` name below exists and is
proved, and that every proposition appears here.

What a proposition about the API relies on: the model of the database
(`Proofs/Model.lean`, one function per SQL statement) and nothing about the
clock, password hash or tokens (`Env` is arbitrary). What is trusted
is listed at the end of PROOFS.md.

## 1. The API ([openapi.yml](test/realworld/specs/api/openapi.yml))

### Users and authentication

| # | Requirement | Covered by | Status |
| --- | --- | --- | --- |
| U1 | `POST /users` registers a user: 201 with `{user: {email, token, username, bio: null, image: null}}` | The only change is one new user whose username and email no user had (`Spec.handle_writes`, `Register`); the reply's shape: auth.hurl "Register" | proved (database) + tested (reply) |
| U2 | Registration validation: blank username, email or password is 422 `can't be blank` for that field | `Spec.blank_fields_named`, `Spec.validateNewUser_spec` (accepted exactly when the rules hold), `Spec.validation_errors_wellFormed`; errors_auth.hurl "Register empty username/email/password" | proved + tested |
| U3 | Taken username or email is 409 `has already been taken` | `Spec.handle_writes` (`Register`: a registration never reuses a username or email); the 409 reply: errors_auth.hurl "Register duplicate username/email" | proved (no duplicate is stored) + tested (status) |
| U4 | `POST /users/login`: 200 with the user and a token; blank email or password 422; wrong password 401 `credentials: invalid` | `Spec.validateLogin_spec`, `Spec.blank_fields_named`; a login never writes (`Spec.reads_change_nothing`); the replies: auth.hurl "Login", errors_auth.hurl "Login empty email/password", "Login wrong password" | proved (validation, no write) + tested (replies) |
| U5 | `GET /user` and every protected endpoint without a token: 401 `token: is missing` | `Spec.protected_needs_token` (checked before any 404); errors_auth.hurl "GET /user no auth", "PUT /user no auth", errors_articles.hurl, errors_comments.hurl, errors_profiles.hurl "… no auth" | proved + tested |
| U6 | `GET /user` returns the current user | auth.hurl "Get current user"; reads never write: `Spec.reads_change_nothing` | tested |
| U7 | `PUT /user` changes only the caller's own row | `Spec.handle_writes` (`Write.updateUser`: same id), `Spec.others_untouched` | proved |
| U8 | `PUT /user` validation: empty or `null` email, username or password is 422; passwords 8 to 128 characters (NIST 800-63B) | `Spec.validateUpdateUser_spec`, `Spec.validateNewUser_spec`; errors_auth.hurl "Update email/username/password to empty string/null", "shorter than 8 chars", "8 char simple word", "64 chars" | proved + tested |
| U9 | `PUT /user` with `bio` or `image` `""` or `null` clears it (`null` in replies) | `Spec.validateUpdateUser_spec`; auth.hurl "Update user bio to empty string - should normalize to null", "… to null", image likewise | proved + tested |
| U10 | Updates persist (`GET /user` afterwards shows them) | auth.hurl "Verify update persisted", "Verify username/email update persisted" | tested (the SQL is trusted) |
| U11 | Tokens: `Authorization: Token <jwt>`; an invalid token is 401 | `Api.tokenOf`, `viewer?` (`Spec.protected_needs_token` covers the missing header); all hurl files use the header; auth.spec.ts › "should handle invalid token on page reload gracefully" | tested |

### Profiles and following

| # | Requirement | Covered by | Status |
| --- | --- | --- | --- |
| P1 | `GET /profiles/:username`: the profile, `following` for the viewer; 404 `profile: not found` | Reads never write (`Spec.reads_change_nothing`); profiles.hurl "Get profile without/with auth", errors_profiles.hurl "GET unknown profile" | tested |
| P2 | `POST /profiles/:username/follow` follows: only the pair (me, them) is added | `Spec.handle_writes` (`Write.follow`), `Spec.others_untouched`; profiles.hurl "Follow profile" | proved + tested |
| P3 | Following yourself is refused; nobody follows themselves | `Spec.follow_self` (422, nothing changes), `Spec.noSelfFollow_preserved` (every request) | proved |
| P4 | `DELETE /profiles/:username/follow` unfollows | `Spec.handle_writes` (`Write.unfollow`); profiles.hurl "Unfollow profile", "Verify unfollow persisted" | proved + tested |
| P5 | Following and unfollowing twice is the same as once | `Spec.relations_idempotent` | proved |
| P6 | Follow or unfollow an unknown user: 404; without a token: 401 | `Spec.protected_needs_token`; errors_profiles.hurl "Follow/Unfollow unknown user (authed)", "… no auth" | proved (401) + tested (404) |

### Articles

| # | Requirement | Covered by | Status |
| --- | --- | --- | --- |
| A1 | `GET /articles` lists articles, newest first, with `articlesCount` | `Spec.newestFirst_spec`, `Spec.window_spec`; articles.hurl "List all articles", pagination.hurl "List with limit=1 (most recent first …)" | proved (order, windows) + tested (count, composition) |
| A2 | Filters `?tag=`, `?author=`, `?favorited=` | The model's `articleIds` is the filter (trusted SQL); articles.hurl "List by tag", "List by author", favorites.hurl "Articles filtered by favorited username" | tested |
| A3 | `?limit=` (default 20) and `?offset=` (default 0); bad values are 422 | `Spec.parsePage_spec` (limit clamped to 100; `0` and non-numbers 422) | proved |
| A4 | Pages never skip or repeat articles | `Spec.window_spec`, `Spec.pages_cover`; pagination.hurl "List with limit=1&offset=1" | proved + tested |
| A5 | `GET /articles/feed`: articles by followed users, paginated; 401 without a token | `Spec.protected_needs_token`, `Spec.newestFirst_spec`, `Spec.pages_cover`; feed.hurl "Feed for new user returns empty", "Main checks feed", "Feed with limit=1(&offset=1)" | proved (401, order) + tested (contents) |
| A6 | `GET /articles/:slug`: the article with its body; 404 `article: not found` | `Spec.route_table` (and `feed` is never a slug: `Spec.articlesOk_preserved`); articles.hurl "Get single article", errors_articles.hurl "GET unknown slug" | proved (routing) + tested |
| A7 | `POST /articles` creates an article by the caller, with a slug; 401 without a token | `Spec.handle_writes` (`Write.createArticle`: author is the caller, slug used by no other article and never `feed`), `Spec.protected_needs_token`; articles.hurl "Create article with tags" | proved + tested |
| A8 | Article validation: blank title, description or body is 422 `can't be blank` | `Spec.validateNewArticle_spec`, `Spec.blank_fields_named`, `Spec.validation_errors_wellFormed`; errors_articles.hurl "Create article empty title/description/body" | proved + tested |
| A9 | Slugs: derived from the title; duplicate titles get distinct slugs | `Spec.slugify_spec`, `Spec.uniqueSlug_spec`, `Spec.handle_writes`, `Spec.articlesOk_preserved`; errors_articles.hurl "Duplicate titles are allowed (each gets a unique slug)" | proved + tested |
| A10 | Tags: `tagList` stored without blanks or repeats, in order | `Spec.cleanTags_spec`; articles.hurl "Create article with tags" | proved + tested |
| A11 | `PUT /articles/:slug`: only the author; others get 403 `article: forbidden` and nothing changes | `Spec.updateArticle_forbidden`, `Spec.handle_writes` (`Write.updateArticle`), `Spec.others_untouched`; errors_authorization.hurl "User B tries to update -> 403" | proved + tested |
| A12 | Updates: absent `tagList` keeps the tags, `[]` removes them, `null` is 422; a new title gets a fresh slug | `Spec.validateUpdateArticle_spec`, `Spec.handle_writes` (slug kept or fresh); articles.hurl "Update article without tagList", "remove all tags with empty array", "tagList null should be rejected", "Update article body", "Verify update persisted" | proved + tested |
| A13 | `DELETE /articles/:slug`: only the author (403 otherwise); 204; its comments, tags and favorites go too | `Spec.deleteArticle_auth`; errors_authorization.hurl "User B tries to delete -> 403", articles.hurl "Delete article", "Verify deletion" | proved + tested |
| A14 | Update, delete, favorite an unknown slug: 404 | errors_articles.hurl "Update/Delete/Favorite/Unfavorite unknown slug" | tested |

### Favorites

| # | Requirement | Covered by | Status |
| --- | --- | --- | --- |
| F1 | `POST`/`DELETE /articles/:slug/favorite` add or remove only the caller's favorite | `Spec.handle_writes` (`Write.favorite`, `Write.unfavorite`), `Spec.others_untouched`; favorites.hurl "Favorite article", "Unfavorite article" | proved + tested |
| F2 | `favoritesCount` is the number of users who favorited; `favorited` is the viewer's own | `Spec.articleOf_favorites`; favorites.hurl "Verify favorite persists", "Verify unfavorite persists" | proved + tested |
| F3 | Favoriting twice is the same as once | `Spec.relations_idempotent` | proved |
| F4 | Without a token: 401 | `Spec.protected_needs_token`; errors_articles.hurl "Favorite/Unfavorite no auth" | proved + tested |

### Comments and tags

| # | Requirement | Covered by | Status |
| --- | --- | --- | --- |
| C1 | `GET /articles/:slug/comments`: the article's comments; 404 for an unknown article | Reads never write (`Spec.reads_change_nothing`); comments.hurl "List comments", "List comments without auth", errors_comments.hurl "Get comments on unknown article" | tested |
| C2 | `POST /articles/:slug/comments`: a comment by the caller on that article; blank body 422; 401 without a token; 404 unknown article | `Spec.handle_writes` (`Write.addComment`), `Spec.validateNewComment_spec`, `Spec.protected_needs_token`; comments.hurl "Create comment", errors_comments.hurl "Post comment empty body", "Post comment on unknown article" | proved + tested |
| C3 | `DELETE …/comments/:id`: only its author (403 `comment: forbidden`); only that comment is removed | `Spec.deleteComment_forbidden`, `Spec.handle_writes` (`Write.deleteComment`), `Spec.others_untouched`; errors_authorization.hurl "User B tries to delete A's comment -> 403", "Verify comment survived", comments.hurl "Selective deletion" | proved + tested |
| C4 | Unknown comment or article: 404 | errors_comments.hurl "Delete comment on unknown article", "Delete non-existent comment on existing article" | tested |
| T1 | `GET /tags`: the tags in use, each once | `Api.tags` (`eraseDups`); tags.hurl "Get tags"; reads never write (`Spec.reads_change_nothing`) | tested |

### The API as a whole

| # | Requirement | Covered by | Status |
| --- | --- | --- | --- |
| G1 | Every endpoint of the spec is routed to its handler; anything else is 404 | `Spec.route_table` | proved |
| G2 | Errors are `{"errors": {"field": ["message", …]}}` with the right status | `Spec.handle_error`, `Spec.validation_errors_wellFormed`, `Spec.error_roundtrip`; every errors_*.hurl file | proved + tested |
| G3 | The wire format: every request and response type, `null` versus absent fields | `Spec.responses_roundtrip`, `Spec.requests_roundtrip` (values; the JSON text layer is trusted); every hurl file | proved + tested |

## 2. Implicit safety properties

| # | Property | Covered by | Status |
| --- | --- | --- | --- |
| S1 | **Authorization, every endpoint**: a request changes the database only by registering, or as a logged-in user making a change that user may make | `Spec.handle_writes` | proved |
| S2 | Nobody else's data changes: other users' rows, articles, follows, favorites and comments survive any request | `Spec.others_untouched` (consequence of S1) | proved |
| S3 | Reads never write | `Spec.reads_change_nothing` | proved |
| S4 | Protected endpoints check the token before anything else | `Spec.protected_needs_token` | proved |
| S5 | Data integrity: article ids and slugs stay distinct and slugs never shadow a route; nobody follows themselves | `Spec.articlesOk_preserved`, `Spec.noSelfFollow_preserved` | proved |
| S6 | Idempotence of follow, unfollow, favorite, unfavorite | `Spec.relations_idempotent` | proved |
| S7 | **No XSS through Markdown**: no `javascript:` (or `data:`, …) link on any page; no element sets `innerHTML`, so author text is only ever a text node or an attribute value | `Spec.view_hrefs_safe`, `Spec.view_no_raw_html`; xss-security.spec.ts (body, description, image URL, navbar, comments) | proved + tested |
| S8 | Escaping in the server-rendered HTML (text and attribute values) | `Lasm.UI`'s `Render.escapeText`/`escapeAttr`; xss-security.spec.ts | tested (library code, not proved here) |
| S9 | **Client and server agree on validation**: the app never sends a body the server would reject, and the server reads back exactly what the app validated | `Spec.update_sends_accepted`, `Spec.validate_again`, `Spec.requests_roundtrip` | proved |
| S10 | Pagination covers every article once | `Spec.pages_cover`, `Spec.pagination_links` | proved |
| S11 | JSON round trips | `Spec.responses_roundtrip`, `Spec.requests_roundtrip`, `Spec.error_roundtrip` | proved |
| S12 | Passwords are stored hashed, never in clear; replies never include the hash | `Api.register` stores `svc.hashPassword`; `userOf` has no password field | not proved (reading the code; a proposition about `Register`'s hash is a planned addition) |
| S13 | Concurrency (two requests at once) | the database's `UNIQUE` and `PRIMARY KEY` constraints | out of scope: the propositions are about one request at a time |
| S14 | Token and password cryptography (PBKDF2, HMAC-SHA-256 tokens, expiry) | Web Crypto (`Server/Crypto.lean`); `Env` is arbitrary in every proposition | out of scope: cryptographic security is not a functional property |

## 3. The browser app ([frontend spec](https://docs.realworld.show/specifications/frontend/routing/))

| # | Requirement | Covered by | Status |
| --- | --- | --- | --- |
| R1 | Routes `/`, `/?feed=following`, `/tag/:tag`, `/login`, `/register`, `/settings`, `/editor`, `/editor/:slug`, `/article/:slug`, `/profile/:username`, `/profile/:username/favorites`, with `?page=N` | `Spec.parse_href` (every link the app writes parses back to its route); url-navigation.spec.ts (all tests), navigation.spec.ts | proved + tested |
| R2 | Each route shows its page | `Spec.view_layout` (the page's root element has the template's class for the route); navigation.spec.ts › "should navigate through main pages when logged out/in" | proved + tested |
| R3 | Pages that need a user send guests to login; login and register send users home | `Spec.guards`; auth.spec.ts › "should prevent accessing editor when not logged in", url-navigation.spec.ts › "/?feed=following should redirect to /login when not authenticated", user-fetch-errors.spec.ts › "should redirect from /settings on 401", "… /editor on 401" | proved + tested |
| R4 | **Forms never submit invalid data** (register, login, settings, editor, comment) | `Spec.update_sends_accepted`; error-handling.spec.ts › "should handle 400 on login/registration/article creation with validation errors" | proved + tested |
| R5 | No double submission while a request is on its way | `Spec.busy_blocks_submit` | proved |
| R6 | A slow answer for a page the user has left never changes the current page | `Spec.stale_answers_ignored` | proved |
| R7 | The token sent is the signed-in user's; logout forgets it | `Spec.token_agrees_preserved`, `Spec.logout_forgets`; auth.spec.ts › "should logout successfully", "should maintain session after page reload" | proved + tested |
| R8 | **The server-rendered first page and the hydrated app agree** | `Spec.hydration_agrees` (the HTML in `#app` is the app's first view, exactly), `Spec.hydrated_only_enables`; health.spec.ts › "app should load successfully", the whole e2e suite runs against the server-rendered, hydrated app | proved + tested |
| R9 | Pagination links: one per page, `?page=N` | `Spec.pagination_links`; navigation.spec.ts › "should paginate articles", url-navigation.spec.ts › "pagination should update URL with ?page=N", "should load correct page when navigating directly to ?page=N" | proved + tested |
| R10 | Feeds and tag filter tabs; popular tags | navigation.spec.ts › "should filter articles by tag", "should switch between Global Feed and Your Feed", "should display popular tags" | tested |
| R11 | Articles: create, edit, delete, favorite, author-only buttons, remove all tags | articles.spec.ts (all tests) | tested |
| R12 | Comments: add, delete own, login required, author-only delete, cleared after posting | comments.spec.ts (all tests) | tested |
| R13 | Settings: update bio, image, username; logout | settings.spec.ts (all tests) | tested |
| R14 | Profiles: own, other's, their articles and favorites, follow/unfollow, feed | social.spec.ts (all tests) | tested |
| R15 | `null` bio and image: default avatar, no literal "null", empty settings fields | null-fields.spec.ts (all tests) | tested |
| R16 | Error handling: 4xx/5xx and network errors are shown; the app keeps working | error-handling.spec.ts, user-fetch-errors.spec.ts (all tests) | tested |

## 4. Layout and design: what is provable

An HN commenter asked for proofs about layout and design. What can be proved
is what the view function returns: a tree of elements and attributes, for
every state of the app. What the browser then draws (CSS, fonts, pixels)
depends on the browser's layout engine and the theme's stylesheet, which
the proofs do not model.

| # | Property | Covered by | Status |
| --- | --- | --- | --- |
| L1 | Every page has the template's structure: the navbar (`nav.navbar.navbar-light`), the page with its template class, the footer | `Spec.view_layout` | proved |
| L2 | Every image has `alt` text; every link has an `href` | `Spec.view_imgs_alt_links_href` | proved |
| L3 | Every form control is described (a non-empty `placeholder`, as the template's labels) | `Spec.view_controls_described` | proved |
| L4 | Heading structure: an article body never adds an `h1`, so the title is the article page's only `h1` | `Spec.article_body_no_h1` | proved |
| L5 | No unsafe links, no raw HTML (also S7) | `Spec.view_hrefs_safe`, `Spec.view_no_raw_html` | proved |
| L6 | Links have visible text | not proved: a Markdown link with an empty label, `[](https://…)`, renders an empty link (found while writing L2; a fix is proposed, not applied, because it changes what pages show) | gap |
| L7 | Every clickable element is keyboard-accessible | not true: the template's comment-delete and tag-remove icons are `<i>` elements with click handlers; the e2e selectors depend on that markup | gap (inherited from the template) |
| L8 | Visual layout, responsiveness, colour contrast, font loading, focus order as drawn | out of scope: they depend on the browser's layout engine and on `conduit.css` and the theme, which are not Lean; the e2e suite runs in Chromium, Firefox and WebKit | out of scope |

## Counts

<!-- Kept by hand; `npm run proofs` checks only the proposition names. -->
- API (section 1): 43 requirements: 34 proved (wholly, or for the part a
  proposition can reach, the rest tested), 9 tested only, none out of scope.
- Implicit safety (section 2): 14 properties: 10 proved, 1 tested only, 1 not
  proved yet (S12), 2 out of scope.
- Browser app (section 3): 16 requirements: 9 proved, 7 tested only.
- Layout (section 4): 8 properties: 5 proved, 2 gaps, 1 out of scope.

## Appendix: audit of the 117 theorems of the previous proof set

The previous `Proofs/` had 117 theorems (counted then as every theorem in the
`Conduit.Proofs` namespace, helpers included). Each was checked for being
meaningful (about the code that runs, not trivially true, its hypotheses
used), necessary (not implied by another) and strong enough. Verdicts:

| Previous theorems | Verdict | Now |
| --- | --- | --- |
| `deleteArticle_forbidden`, `deleteArticle_author` | meaningful; merged | `Spec.deleteArticle_auth` |
| `updateArticle_forbidden`, `deleteComment_forbidden`, `follow_self` | meaningful; kept | `Spec.updateArticle_forbidden`, `Spec.deleteComment_forbidden`, `Spec.follow_self` |
| `follow_noSelf` | meaningful but only for `follow`; strengthened to every request | `Spec.noSelfFollow_preserved` |
| `follow_idempotent`, `unfollow_idempotent`, `favorite_idempotent`, `unfavorite_idempotent` | meaningful but conditional (logged in, target found); strengthened to every request and database, merged | `Spec.relations_idempotent` |
| `follow_state`, `unfollow_state`, `favorite_state`, `unfavorite_state` | lemmas | kept as lemmas |
| `requireUser_run`, `requireUser_ok`, `articleJson_state` | lemmas; `articleJson_state` generalised | `RO` lemmas in `Proofs/ReadOnly.lean`, `Spec.reads_change_nothing` |
| `route_deleteArticle`, `route_updateArticle`, `route_deleteComment`, `route_follow`, `route_favorite` | meaningful but 5 of 19 routes; strengthened | `Spec.route_table` |
| `handle_error` | meaningful; kept | `Spec.handle_error` |
| `articleOf_favorites` | meaningful; kept | `Spec.articleOf_favorites` |
| `mem_fansOf`, `fansOf_nodup`, `nodup_eraseDups` | lemmas | kept as lemmas |
| `uniqueSlug_fresh`, `uniqueSlug_of_free` | meaningful; merged, and lifted to the endpoints (the slug an article gets is used by no other article and never `feed`) | `Spec.uniqueSlug_spec`, `Spec.handle_writes`, `Spec.articlesOk_preserved` |
| `slugify_chars`, `slugify_ne_empty` | meaningful; merged | `Spec.slugify_spec` |
| `candidate_injective`, `slugTable_ok`, `slugChar_ok`, `groups_ok`, `mem_intercalate_dash`, `article_ok`, `slugWords_ok` | lemmas | kept as lemmas |
| `newestFirst_sorted`, `newestFirst_perm` | meaningful; merged | `Spec.newestFirst_spec` |
| `window_infix`, `window_length_le` | meaningful; merged | `Spec.window_spec` |
| `pages_concat`, `pages_cover` | meaningful; merged | `Spec.pages_cover` |
| `window_consecutive` | redundant: the case n = 2 of `pages_concat` | removed |
| `window_nodup`, `window_newestFirst_sorted` | redundant: immediate from `window_infix` and `newestFirst_sorted` | kept as lemmas, not propositions |
| `validateNewUser_ok`, `validateLogin_ok`, `validateNewArticle_ok`, `validateNewComment_ok`, `validateUpdateUser_ok` | **weak**: the hypothesis `validate… = .ok v` was unused; each followed from the subtype's own property, so it said nothing about what validation accepts | removed; replaced by exact characterisations: `Spec.validateNewUser_spec`, `Spec.validateLogin_spec`, `Spec.validateNewArticle_spec`, `Spec.validateNewComment_spec`, `Spec.validateUpdateUser_spec`, `Spec.validateUpdateArticle_spec` (accepted exactly when the rules hold; what is accepted is the trimmed input) |
| `validateNewUser_error`, `validateNewArticle_error`, `validateNewComment_error` | meaningful; merged and extended to login and both updates | `Spec.validation_errors_wellFormed`, `Spec.blank_fields_named` |
| `nullable_empty` | **trivial**: `rfl` about `nullable` alone | removed; the spec's normalisation is now stated through `UpdateUser.toPatch` in `Spec.validateUpdateUser_spec` |
| `cleanTags_not_blank`, `cleanTags_nodup` | meaningful but incomplete (cleaning everything away would satisfy them); strengthened: no tag that was not blank is lost | `Spec.cleanTags_spec` |
| `validateNewUser_again`, `validateLogin_again`, `validateNewArticle_again`, `validateNewComment_again` | meaningful; merged | `Spec.validate_again` |
| `clean_idem`, `cleanTags_idem`, `trim_idem`, `dropWhile_of_head`, `dropWhile_head_false`, `eraseDups_of_nodup`, `usernameErrors_nil`, `emailErrors_nil`, `passwordErrors_nil`, `collect_messages`, `collect_ne_nil`, `invalid_wellFormed` | lemmas | kept as lemmas |
| `submitRegister_sends_valid`, `submitLogin_sends_valid`, `publish_sends_valid`, `postComment_sends_valid` | meaningful but about the submit helpers, not `update`, and the settings form was missing; strengthened to every message through `update` | `Spec.update_sends_accepted`, `Spec.busy_blocks_submit` |
| `registration_accepted`, `login_accepted`, `article_accepted`, `comment_accepted`, `unwrap_user`, `unwrap_article`, `unwrap_comment` | meaningful; folded into what `update_sends_accepted` states for each request | `Spec.update_sends_accepted` (`AcceptedBody`), unwrap lemmas kept |
| `parse_href`, `pageOf_pageParam` | meaningful; kept (lemma kept) | `Spec.parse_href` |
| `inlines_safe`, `safeHref_allowed`, `inlinesRev_safe`, `pushText_safe`, `text_safe`, `safeLinks_reverse_aux` | meaningful but about the Markdown reader's output, not the page; strengthened to every `href` of every rendered page | `Spec.view_hrefs_safe` (these kept as lemmas) |
| `User/Profile/Article/Comment/ArticleList.decode_encode` | meaningful; merged | `Spec.responses_roundtrip` |
| `LoginUser/NewUser/UpdateUser/NewArticle/UpdateArticle/NewComment.decode_encode` | meaningful (three hold by computation, which is fine: they are about the real encoders); merged | `Spec.requests_roundtrip` |
| `ApiError.decode_encode_one` | meaningful; kept | `Spec.error_roundtrip` |
| `strList_strs`, `mapM_decode_encode`, `fieldStrs_value` | lemmas | kept as lemmas |
| `store_articleBySlug`, `store_favorite`, `store_unfavorite` | no content: `rfl` unfoldings of the model | removed |
| `insertOrIgnore_idem`, `id_bind`, `id_pure`, `id_map`, `except_map_ok`, `run_liftM` | lemmas (monad plumbing) | kept as lemmas |

Summary: of the 117, 49 were lemmas or monad plumbing (kept as lemmas, not
propositions); 7 were kept as they were (restated as propositions); 33 were
merged into fewer, broader propositions; 18 were strengthened (made
unconditional, extended to every route, request or message, completed, or
lifted from a helper to the endpoint or page that uses it); 6 were weak or
trivial (the five `…_ok`, whose hypothesis was unused, and `nullable_empty`)
and are replaced by exact characterisations; 4 were removed (three
contentless `rfl` unfoldings of the model, `store_*`, and the redundant
`window_consecutive`). The 49 propositions of `Proofs/Spec.lean` also add
what the previous set did not cover: the write set of every endpoint
(`Spec.handle_writes`), reads never writing, the token check first, data
integrity across all requests, the browser app's state invariants, the
hydration agreement, and the layout and accessibility properties.
