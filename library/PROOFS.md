# What is proved about Lasm's library

Lasm's own Lean library (Lasm.UI, Lasm.RPC, Lasm.KV, Lasm.Fetch, Lasm.JS) is ordinary
Lean code, and programs run exactly that code. So some of its guarantees are
proved, for every possible input, rather than only tested. One more set of
propositions is about a Lean model of JavaScript that Lasm ships: the
function-platform shims (src/serverless/, Lasm.Serverless). This page lists
each proved proposition in plain English. The propositions are for Jordan to
hone (issue #21); Conduit's [PROOFS.md](../examples/conduit/PROOFS.md) is the
model.

```sh
node scripts/library-proofs.mjs            # compiles the proofs, checks them, checks this page
node scripts/library-proofs.mjs --write    # also regenerates the tables below
```

## How to review the propositions

Each library has a `Spec.lean` that states its propositions, each a named
`def … : Prop` with a plain-English doc comment, grouped by topic, with no
proofs in that file:

- [`Lasm/UI/Spec.lean`](Lasm/UI/Spec.lean): the diff and the commands;
- [`Lasm/RPC/Spec.lean`](Lasm/RPC/Spec.lean): request validation, serving, dispatch and the client;
- [`Lasm/KV/Spec.lean`](Lasm/KV/Spec.lean): the memory store;
- [`Lasm/Fetch/Spec.lean`](Lasm/Fetch/Spec.lean): request paths;
- [`Lasm/JS/Spec.lean`](Lasm/JS/Spec.lean): the value codec between Lean and JavaScript;
- [`Lasm/Serverless/Spec.lean`](Lasm/Serverless/Spec.lean): the function platforms' request and response mapping (a model of src/serverless/).

A reviewer can read those files and ignore the proofs: the check fails unless

- every proposition `Lasm.L.Spec.x` has a theorem `Lasm.L.Theorems.x` (in
  the library's `Theorems.lean`) whose type is exactly `Lasm.L.Spec.x`, so a
  proof cannot quietly prove something weaker;
- every theorem in the library and its proofs uses only Lean's three standard
  axioms (`propext`, `Classical.choice`, `Quot.sound`): a `sorry` anywhere
  would show up as the axiom `sorryAx`;
- the tables below match the doc comments of the Spec files.

CI runs it on every change to `library/`
([library-proofs.yml](../.github/workflows/library-proofs.yml)), with the
managed Lean 4.35.0 and only Lean's own library (no Mathlib).

## Where the proofs live, and what ships

The propositions are about the shipped code (`Lasm.UI.diff`,
`Lasm.RPC.Endpoint.decodeRequest`, `Lasm.KV.Table.write`, …). The Spec,
Theorems, `Lasm/UI/Proofs*`, `Lasm/JS/Proofs*` and `Lasm/Serverless/Proofs*` modules are a proofs-only target: they are not
in the shipped library (`libraryModules` in
[src/lasm-library.mjs](../src/lasm-library.mjs)), so they are not compiled
into the Lean prefix or [prebuilt/](prebuilt), cost a program's build
nothing, and changing a proposition never makes the prebuilt library stale.
A few theorems that the library itself uses sit beside its code
(`decodeRequest_valid`, which `serve` hands to every handler;
`call_invalid`; `segments_no_dot_segments`); the Theorems files cite them.

What is modelled, and so outside the theorems: the DOM (Lasm.UI.Model), with
the JavaScript applier tested against it, not proved; how the applier reads
the binary patch encoding, which is written in Lean as a reference decoder
(Lasm/UI/Proofs/Decode.lean, function for function the reading half of
src/lasm-modules/ui-dom.mjs) and proved to read every frame back as exactly
its patch (`frames_decode`), while the JavaScript itself is tested (patch
fixtures written by Lean in test/ui-dom.test.mjs, and the ui-patch fuzz
target); the JavaScript half of the Lasm.JS value codec (src/node-js.mjs,
src/edge/edge-js.mjs), tested against Lean's (test/node-js.test.mjs,
test/edge-js.test.mjs), while the Lean half's reader is the very function
`Wire.decode` runs (`decodeWith`, in `IO` there and in `Except String` in the
theorems); the function-platform shims (src/serverless/), which are JavaScript
that runs before the program: Lasm.Serverless's propositions are about a Lean
model of them (Lasm/Serverless/Proofs/Model.lean, function for function
lasm-lambda.mjs and lasm-function.mjs), and the serverless-http fuzz target
checks the JavaScript against the model on every input, while Node's base64,
`Date.parse` and the platforms themselves are left outside it; Lean's JSON parser and printer; the `IO.Ref` that holds the memory
store's table; and the platform stores and HTTP stacks, which Lasm only calls.

<!-- BEGIN PROPOSITIONS -->
<!-- Generated from the Spec.lean files by `node scripts/library-proofs.mjs --write`; do not edit by hand. -->

**53 proved propositions (326 theorems)**: each proposition below is proved by the theorem of the same name in its library's `Theorems.lean`, and the other theorems are the lemmas their proofs are built from. Every one uses only Lean's standard axioms.

## Lasm.UI (10)

### Rendering: the DOM always shows the view

| Proposition | In plain English |
| --- | --- |
| [`diff_correct`](Lasm/UI/Spec.lean#L38) | **The diff is correct.** Take any well-formed rendered tree `old` and any next view `new`. Applying the patch that `diff old new next` returns to the DOM of `old` gives exactly the DOM of the new rendered tree; that tree shows `new`; it is well formed again; and the next free id never goes down (so ids are never reused). This is about the executable `diff` itself, with every case it has: keyed moves, the two-ended matching and its key-map fallback, inserts, removals, clearing, replacing nodes whose kind or tag changed, text changes and attribute changes. |
| [`mount_correct`](Lasm/UI/Spec.lean#L52) | **The first render is correct.** Under an empty root, the patch of the first render (`mountOps`) builds the DOM of a well-formed rendered tree that shows the view. |
| [`session_correct`](Lasm/UI/Spec.lean#L60) | **Every frame stays correct.** Start from an empty root and render any sequence of views, one frame each (diff the rendered tree against the next view and apply the patch to the DOM, as the runtime does: `Session.step`). After any number of frames, the DOM is exactly the DOM of the rendered tree, that tree is well formed, and it shows the latest view. |
| [`diffAttrs_correct`](Lasm/UI/Spec.lean#L70) | **The attribute diff is correct.** The attribute operations that `diffAttrs old new` returns turn the attribute slots of `old` (attributes, properties, styles and listeners, the last setting of each slot winning) into exactly those of `new`: every slot `new` sets has its value, and every other slot is unset. |
| [`create_correct`](Lasm/UI/Spec.lean#L78) | **New nodes get fresh ids.** Rendering a view `h` from scratch with `create h n` gives a tree whose root has id `n`, whose ids are all below the returned next free id (which is above `n`), whose sibling ids are distinct, and which shows `h`. |

### The patch encoding: the browser reads exactly the patch

| Proposition | In plain English |
| --- | --- |
| [`frames_decode`](Lasm/UI/Spec.lean#L89) | **The browser reads every frame as exactly the patch Lean encoded.** Lean sends each frame's patch to the browser as bytes (`Encode.frame`), with tag, attribute and event names, short attribute values and event decoder shapes interned in tables that both sides keep from frame to frame. Take any session: any sequence of frames, each any patch on the children of any node, encoded in turn from empty tables (`Decode.encodeAll`). The applier's reading of those bytes (`Decode.frames`: Lasm.UI.Proofs.Decode, the reading half of src/lasm-modules/ui-dom.mjs, its tables also carried from frame to frame) never fails, and gives for each frame exactly the operations of its patch (`Wire.ofOps`): every insert with the DOM of the inserted tree (`toDom`), and every move, removal, clear, text change and attribute operation, each on its node, in order. So the tables never fall out of step, and every interned name, value and decoder shape is read back as the one Lean meant. (An attribute operation that sets a slot to a value of another kind, which `diff` never produces, is sent as a removal of the slot: `AttrOp.wire`.) |

### Commands

| Proposition | In plain English |
| --- | --- |
| [`cmd_map_comp`](Lasm/UI/Spec.lean#L116) | **Mapping commands composes.** `Cmd.map` is how a parent embeds a child component's commands (its messages wrapped in the parent's). Mapping by `g` and then by `f` is the same command as mapping once by `f ∘ g`, so components nest to any depth. |
| [`cmd_map_effects`](Lasm/UI/Spec.lean#L123) | **Mapping commands keeps their effects.** Mapping a command by any `f` keeps exactly its effects, in order, each of the same kind with the same data (the same request, delay, URL, storage key …): with the messages they deliver forgotten (`Effect.forget`), the effects before and after are equal. Only the messages change. |
| [`cmd_map_id`](Lasm/UI/Spec.lean#L131) | **Mapping by the identity changes nothing.** |
| [`cmd_map_batch`](Lasm/UI/Spec.lean#L135) | **Mapping commutes with batching.** Mapping a batch of commands is the batch of the mapped commands: no effect is lost, duplicated or reordered. |

## Lasm.RPC (14)

### The server only runs handlers on valid requests

| Proposition | In plain English |
| --- | --- |
| [`decodeRequest_valid`](Lasm/RPC/Spec.lean#L29) | **A decoded request is valid.** Whenever `decodeRequest` accepts a body as the request `r`, `r` passed the endpoint's `validate`. (This is the proof that `serve` hands to every handler.) |
| [`decodeRequest_accepts`](Lasm/RPC/Spec.lean#L36) | **A valid request is accepted.** If a body is JSON that reads as the request `r`, and `r` passes `validate`, then `decodeRequest` accepts it as exactly `r`: the server never refuses a well-formed, valid request. |
| [`decodeRequest_rejects`](Lasm/RPC/Spec.lean#L43) | **An invalid request is refused with the validation's message.** If a body reads as the request `r` but `validate r` fails with message `m`, `decodeRequest` refuses it with `Error.invalid m`. |
| [`decodeRequest_error_invalid`](Lasm/RPC/Spec.lean#L51) | **Decoding only fails as "invalid".** Every way `decodeRequest` can refuse a body (not JSON, not the request type, or failing `validate`) is an `Error.invalid`, which the server answers with status 400. |
| [`decodeRequest_hugeExponent`](Lasm/RPC/Spec.lean#L58) | **Huge exponents are refused before parsing.** A body holding a number whose exponent has more than four digits (`1e10000`, which would make Lean's JSON parser compute `10 ^ 10000`) is refused as invalid without being parsed, so such a request cannot exhaust the server's time or memory. |
| [`serve_invalid`](Lasm/RPC/Spec.lean#L66) | **An invalid request answers 400 without running the handler.** When `decodeRequest` refuses a body, the route that `serve` builds answers status 400 with the error, and does nothing else: the handler is not called. |
| [`serve_valid`](Lasm/RPC/Spec.lean#L75) | **A valid request runs the handler once.** When `decodeRequest` accepts a body as `r`, the route runs the handler on `r` (with the proof that `r` is valid), once, and answers status 200 with its result if it succeeded and 500 with its message if it failed. |

### Dispatch: `POST /rpc/<name>` and nothing else

| Proposition | In plain English |
| --- | --- |
| [`handler_fallback`](Lasm/RPC/Spec.lean#L88) | **Other paths reach the fallback.** A request whose path is not `/rpc/<name>` (one segment after `rpc`) is passed to the fallback handler unchanged, whatever its method. |
| [`handler_route`](Lasm/RPC/Spec.lean#L95) | **`POST /rpc/<name>` runs the route of that name.** For a `POST` to `/rpc/<name>`, the handler runs the first route named `name` on the request body and answers its status and JSON body, never cached. |
| [`handler_unknown`](Lasm/RPC/Spec.lean#L104) | **An unknown endpoint answers 404.** A `POST` to `/rpc/<name>` when no route has that name answers status 404, and runs no route and not the fallback. |
| [`handler_method`](Lasm/RPC/Spec.lean#L113) | **Only `POST` reaches an endpoint.** Any other method on `/rpc/<name>` answers 405 with `allow: POST`, and runs no route and not the fallback. |

### The client

| Proposition | In plain English |
| --- | --- |
| [`call_invalid`](Lasm/RPC/Spec.lean#L122) | **An invalid request is never sent.** When `validate` refuses a request with message `m`, the command `call` performs no HTTP request: its only effect delivers `Error.invalid m` to the app. |
| [`call_valid`](Lasm/RPC/Spec.lean#L130) | **A valid request is sent once, as JSON, to its endpoint.** When `validate` accepts a request, the command `call` performs exactly one effect: a `POST` of the encoded request to `base ++ e.path` (`base` followed by `/rpc/<name>`) with a JSON content type. A network failure reaches the app as `Error.network`, and any answer as the endpoint's reading of its status and body (`decodeResponse`). |
| [`decodeResponse_not_network`](Lasm/RPC/Spec.lean#L146) | **Reading an answer never claims a network failure.** Whatever status and body the server answers, `decodeResponse` never reports `Error.network`: that error means only that no answer arrived. |

## Lasm.KV (6)

### The memory store

| Proposition | In plain English |
| --- | --- |
| [`read_empty`](Lasm/KV/Spec.lean#L26) | **A new store is empty.** The table a new memory store starts with has no value for any key. |
| [`read_write_self`](Lasm/KV/Spec.lean#L31) | **Reading a key after writing it gives what was written.** |
| [`read_write_other`](Lasm/KV/Spec.lean#L35) | **Writing a key changes no other key.** |
| [`read_remove_self`](Lasm/KV/Spec.lean#L39) | **Reading a key after deleting it gives nothing.** |
| [`read_remove_other`](Lasm/KV/Spec.lean#L43) | **Deleting a key changes no other key.** |
| [`write_write`](Lasm/KV/Spec.lean#L47) | **The last write wins** *(consequence)*. Writing a key twice reads the same, for every key, as writing only the second value. |

## Lasm.Fetch (1)

### Request paths

| Proposition | In plain English |
| --- | --- |
| [`segments_no_dot_segments`](Lasm/Fetch/Spec.lean#L22) | **No path segment is `.` or `..`.** Whatever the request's URL, on every platform (including escaped forms such as `%2e%2E`), no segment of `r.segments` is `.` or `..`: a handler that maps segments to files or keys never sees a parent reference. |

## Lasm.JS (2)

### The value codec: every value crosses intact

| Proposition | In plain English |
| --- | --- |
| [`decode_encode`](Lasm/JS/Spec.lean#L37) | **Every value that is encoded is read back exactly.** Take any plain value `d` (no references) that `encode` accepts, as the bytes `b`. The reader (`decodeWith`, which `decode` runs) reads `b` back as `d`, every number with the same bits: never an error, nothing left over, nothing misread. |
| [`encode_ok_iff_fits`](Lasm/JS/Spec.lean#L46) | **Lengths never wrap.** `encode d` succeeds exactly when every length in `d` fits the format's u32 (`d.Fits`). A string, byte array, array or object with 2³² or more bytes, elements or fields is an error naming it, never a length that wraps around and makes the reader misread what follows. |

## Lasm.Serverless (20)

### Request targets: the path a server sees is the event's

| Proposition | In plain English |
| --- | --- |
| [`target_valid`](Lasm/Serverless/Spec.lean#L39) | **Every target is one http.request sends.** Whatever the event's path and query (a decoded path with spaces, `?` or `#`, an emoji, a query sent unencoded), every character of the forwarded target is visible ASCII and none is `#`: Node never refuses it (which was a 502), and no part of it is a fragment. |
| [`target_split`](Lasm/Serverless/Spec.lean#L47) | **The path stays the path, the query the query.** A server reads the forwarded target's path up to its first `?`: that is exactly the event's path (`/` when empty), escaped, so a `?` in a decoded path cannot move part of it into the query. After that `?` comes exactly the event's query, escaped, and there is no `?` at all when the event has no query. |
| [`target_unchanged`](Lasm/Serverless/Spec.lean#L57) | **A valid target goes through unchanged.** When the event's path holds only what a target's path may (visible ASCII but `?` and `#`) and its query only what a query may (visible ASCII but `#`), the target is the path, `?` and the query, as they are: percent escapes stay escapes, `://` in a path (`/go/https://example.com`) stays in the path, and a malformed escape in a query (`?q=%E0`) arrives as the client sent it. |
| [`target_slash`](Lasm/Serverless/Spec.lean#L67) | **Every target starts with `/`** when the event's path does, or is empty. |
| [`target_ignores_headers`](Lasm/Serverless/Spec.lean#L72) | **No header chooses the target.** For every Lambda event (API Gateway REST, ALB, payload 2.0 and function URLs, CloudFront), the forwarded target is the same whatever header fields (Host among them) and cookies the event carries. |

### Host: one, and it cannot move the path

| Proposition | In plain English |
| --- | --- |
| [`host_once`](Lasm/Serverless/Spec.lean#L83) | **Exactly one Host, a plain one.** Whatever fields an event carries (none, several, or a forged `Host: x/admin#`), forward() and pipe() send exactly one Host field, and its value is a plain `host[:port]`: visible ASCII without `/ ? # \ @` (the first such Host of the event, else the default host). |
| [`host_url`](Lasm/Serverless/Spec.lean#L92) | **A plain Host cannot move the path.** A server that builds its URL from the Host field and the target (`http://` + host + target, as Hono's Node adapter and Lasm.Fetch's Node host do) reads back exactly that host and that target, for every plain host and every target that starts with `/`. Together with `host_once` and `target_split`: no client can change the path or query a server sees through Host (`Host: x/admin#` once made `/public` read as `/admin` in Lasm.Fetch). |

### Query strings

| Proposition | In plain English |
| --- | --- |
| [`form_roundtrip`](Lasm/Serverless/Spec.lean#L104) | **What URLSearchParams writes, a server reads back.** For any names and values (any text), the query `URLSearchParams` writes decodes, as a server decodes `application/x-www-form-urlencoded` text, to exactly those pairs, in order. |
| [`rest_query`](Lasm/Serverless/Spec.lean#L111) | **API Gateway REST's query values arrive with the same values.** API Gateway REST hands over the query decoded; the forwarded target's query decodes to exactly the event's pairs: the multi-value form when the event has one (each value of a name, in order), else the single-value one. |
| [`alb_query`](Lasm/Serverless/Spec.lean#L119) | **An ALB's query arrives as the client sent it.** An ALB hands over the query still encoded (or malformed: `%E0`); when a target can carry it as it is, the forwarded query is exactly `name=value` joined with `&`, unchanged (decoding it threw `URIError` on `%E0`: a 502; test/fuzz). |

### Cookies and the other fields

| Proposition | In plain English |
| --- | --- |
| [`cookie_once`](Lasm/Serverless/Spec.lean#L130) | **At most one Cookie field, never an empty one.** Whatever Cookie fields an event carries (repeated, split by HTTP/2, joined with commas by a proxy, empty), forward() and pipe() send at most one, and it is not empty. |
| [`v2_cookies_once`](Lasm/Serverless/Spec.lean#L137) | **A payload 2.0 event's cookies arrive once.** When an API Gateway HTTP API or function URL event has cookies in `cookies`, the one Cookie field sent is those cookies joined with `; ` (and commas a proxy put between cookies made `; `), whatever Cookie fields the headers also hold (SAM's local gateway leaves them there too: they were sent twice, #80). |
| [`other_fields`](Lasm/Serverless/Spec.lean#L147) | **Every other field goes through, in order.** The fields sent other than Cookie and Host are exactly the event's fields other than Cookie, Host, the hop-by-hop fields and Content-Length (forward() sets the body's own), with their names and values, in their order. |

### Responses

| Proposition | In plain English |
| --- | --- |
| [`body_kept`](Lasm/Serverless/Spec.lean#L158) | **The body is the server's, byte for byte.** For every Lambda response (REST and ALB, payload 2.0, CloudFront), the body stands for exactly the reply's bytes, and it travels as text only when the reply's type is textual and its bytes are valid UTF-8 (a Latin-1 `text/html` body went as text and lost its accented letters), as base64 otherwise. |
| [`status_kept`](Lasm/Serverless/Spec.lean#L168) | **The status is the server's.** Every Lambda response carries the reply's status. |
| [`rest_headers`](Lasm/Serverless/Spec.lean#L175) | **Every field of the reply reaches an API Gateway REST or multi-value ALB response**, each name with all its values in order (every Set-Cookie among them, once each). Header maps have no prototype: a field named `__proto__` or `constructor` is a field like any other (it was dropped, or threw a TypeError). |
| [`v2_headers`](Lasm/Serverless/Spec.lean#L185) | **A payload 2.0 response holds every field of the reply**: each Set-Cookie once, in order, in `cookies`, and every other name with its values joined with `, `. |
| [`cloudfront_headers`](Lasm/Serverless/Spec.lean#L193) | **A CloudFront response holds every field CloudFront accepts**, each name with all its values in order, and none it refuses in a generated response (Content-Length, Via, `x-amz-cf-…`, …). |
| [`web_null_body`](Lasm/Serverless/Spec.lean#L200) | **A Netlify response to a HEAD, or with a null-body status, has no body** (a Response with one would throw). |
| [`azure_exact`](Lasm/Serverless/Spec.lean#L206) | **Every cookie object Azure gets arrives unchanged** when at most one Set-Cookie of the reply would change in Azure's `cookies` list (which percent-encodes values and has no field for some attributes): that one stays a Set-Cookie header, and every cookie object sent is one `cookies` carries exactly. |
<!-- END PROPOSITIONS -->

## Candidates not yet proved

Guarantees worth proving that need more than a modest effort. Each is a
proposition in its library's `Candidates.lean`, in the form of `Spec.lean`,
that a test checks on generated inputs: the test cites it with a
`Proposition:` line and evaluates its statement on every input
([docs/TESTING_STRATEGY.md §4](../docs/TESTING_STRATEGY.md#4-property-testing-convention-propositions-that-carry-over-to-proofs)).
Proving one means moving it to `Spec.lean` and adding its theorem.
`node scripts/propositions.mjs` (a unit test) checks that every cited
proposition exists with the statement cited, that every candidate's test
exists and cites it, and that this list is current. The propositions about
the CLI's JavaScript (`Lasm.Cli`) are listed in
[verification/cli/README.md](../verification/cli/README.md).

<!-- BEGIN CANDIDATES -->
<!-- Generated from the Candidates.lean files by `node scripts/propositions.mjs --write`; do not edit by hand. -->

**12 candidates**, each a `def … : Prop` in a `Candidates.lean`, checked on generated inputs by the test its `Tested by:` line names (which cites it with a `Proposition:` line), not yet proved.

### Lasm.Fetch (2)

| Candidate | In plain English | Tested by |
| --- | --- | --- |
| [`segments_nonempty`](Lasm/Fetch/Candidates.lean#L19) | **No path segment is empty.** Whatever the request's URL (`//`, a trailing `/`, escapes that decode to nothing printable), no segment of `r.segments` is the empty string. | [test/fuzz/native/LasmFuzz.lean](../test/fuzz/native/LasmFuzz.lean) |
| [`percent_round_trip`](Lasm/Fetch/Candidates.lean#L26) | **A server decodes what a Lasm.UI page encodes.** For every string, `Lasm.Fetch.percentDecode` reads `Lasm.UI.Url.percentEncode`'s output back as that string: a path segment or query value a page builds reaches the server's handler unchanged. | [test/fuzz/native/LasmFuzz.lean](../test/fuzz/native/LasmFuzz.lean) |

### Lasm.RPC (4)

| Candidate | In plain English | Tested by |
| --- | --- | --- |
| [`request_round_trip`](Lasm/RPC/Candidates.lean#L21) | **A valid request's encoding decodes to itself.** For a request type whose `ToJson` and `FromJson` round-trip, the body the client sends for a valid request is accepted by the server as exactly that request. | [test/fuzz/native/LasmFuzz.lean](../test/fuzz/native/LasmFuzz.lean) |
| [`response_round_trip`](Lasm/RPC/Candidates.lean#L29) | **A result crosses intact.** For a response type whose `ToJson` and `FromJson` round-trip, the client reads the server's 200 answer for the result `r` as exactly `r`. | [test/fuzz/native/LasmFuzz.lean](../test/fuzz/native/LasmFuzz.lean) |
| [`error_round_trip`](Lasm/RPC/Candidates.lean#L39) | **A validation error reaches the client as itself.** The server's 400 answer for a validation message `m` is read by the client as `Error.invalid m`, with the same message, and any other status as `Error.failed` with that status and message. | [test/fuzz/native/LasmFuzz.lean](../test/fuzz/native/LasmFuzz.lean) |
| [`json_print_normal_form`](Lasm/RPC/Candidates.lean#L47) | **Printed JSON is a normal form.** Whatever JSON `parseJson` accepts, its printed form parses again and prints the same. | [test/fuzz/native/LasmFuzz.lean](../test/fuzz/native/LasmFuzz.lean) |

### Lasm.Serverless (1)

| Candidate | In plain English | Tested by |
| --- | --- | --- |
| [`join_cookies_once`](Lasm/Serverless/Candidates.lean#L23) | **`joinCookies` leaves at most one Cookie field and the others in order.** Whatever Cookie fields a request has, at most one remains, and the fields other than Cookie are exactly the request's, in their order. | [test/serverless-shims.test.mjs](../test/serverless-shims.test.mjs) |

### Lasm.UI (5)

| Candidate | In plain English | Tested by |
| --- | --- | --- |
| [`diff_unchanged_empty`](Lasm/UI/Candidates.lean#L29) | **An unchanged view produces an empty patch.** For any well-formed rendered tree, diffing it against the view it already shows emits no operation at all: a frame whose view did not change touches no DOM node. | [test/ui/DiffModel.lean](../test/ui/DiffModel.lean) |
| [`keyed_reorder_only_moves`](Lasm/UI/Candidates.lean#L37) | **Keyed reorders only move.** When every old child is keyed, with distinct keys, and the new children are a permutation of the old ones, the patch inserts, removes and clears nothing: every node is kept and only moved. | [test/ui/DiffModel.lean](../test/ui/DiffModel.lean) |
| [`percent_round_trip`](Lasm/UI/Candidates.lean#L47) | **Percent-encoding round-trips.** Decoding what `percentEncode` writes gives back the text, for every string (any Unicode, `%` and `+` included). | [test/ui/DiffModel.lean](../test/ui/DiffModel.lean) |
| [`segments_round_trip`](Lasm/UI/Candidates.lean#L54) | **Encoded segments come back as the segments.** A path built from non-empty segments, each percent-encoded, reads back (`Url.segments`) as exactly those segments: a route matches the values a link was built from. | [test/ui/DiffModel.lean](../test/ui/DiffModel.lean) |
| [`interned_from_table_or_bytes`](Lasm/UI/Candidates.lean#L66) | **An interned name or value is the table's or spelled in the frame.** Reading an interned string (an attribute name or value, an event, a tag) gives a string already in the table or one whose UTF-8 bytes are among the bytes read, and the table grows by at most that string: a reference past the table is a malformed frame, never a made-up name such as `undefined`. | [test/fuzz/targets/ui-patch.mjs](../test/fuzz/targets/ui-patch.mjs) |
<!-- END CANDIDATES -->

### Tested, not yet stated in Lean

These are about code Lean does not model yet, so they are not Lean
propositions: each is the step "this JavaScript (or runtime) implements the
Lean model" that §4 leaves to tests until a model exists.

- **Lasm.UI: the JavaScript applier implements the decoder and the model.**
  That the encoding is read back exactly is proved (`frames_decode`, against
  the reference decoder Lasm/UI/Proofs/Decode.lean); that
  src/lasm-modules/ui-dom.mjs reads as that decoder does and changes the DOM
  as `applyOps` says needs a model of JavaScript and the DOM (tested:
  test/ui-dom.test.mjs, the patch fixtures, the ui-patch fuzz target).
- **Lasm.UI: server rendering hydrates.** The HTML that `Lasm.UI.Render`
  writes for a view is the DOM the first render would build. Stating it needs
  a model of the browser's HTML parser (tested: the hydration tests of
  test/ui-dom.test.mjs and the Playwright suites).
- **Lasm.KV: the stores behave as the table.** That `get`, `put` and
  `delete` of the memory store read and replace the table in its `IO.Ref`
  (Lean's runtime is not modelled), and that the platform stores agree
  (tested per platform in CI).
