# What is proved about Lasm's library

Lasm's own Lean library (Lasm.UI, Lasm.RPC, Lasm.KV, Lasm.Fetch, Lasm.JS) is ordinary
Lean code, and programs run exactly that code. So some of its guarantees are
proved, for every possible input, rather than only tested. This page lists
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
- [`Lasm/JS/Spec.lean`](Lasm/JS/Spec.lean): the value codec between Lean and JavaScript.

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
Theorems, `Lasm/UI/Proofs*` and `Lasm/JS/Proofs*` modules are a proofs-only target: they are not
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
theorems); Lean's JSON parser and printer; the `IO.Ref` that holds the memory
store's table; and the platform stores and HTTP stacks, which Lasm only calls.

<!-- BEGIN PROPOSITIONS -->
<!-- Generated from the Spec.lean files by `node scripts/library-proofs.mjs --write`; do not edit by hand. -->

**33 proved propositions (239 theorems)**: each proposition below is proved by the theorem of the same name in its library's `Theorems.lean`, and the other theorems are the lemmas their proofs are built from. Every one uses only Lean's standard axioms.

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
<!-- END PROPOSITIONS -->

## Candidates not yet proved

Guarantees worth proving that need more than a modest effort; each is
covered by tests today.

- **Lasm.UI: the JavaScript applier implements the decoder and the model.**
  That the encoding is read back exactly is proved (`frames_decode`, against
  the reference decoder Lasm/UI/Proofs/Decode.lean); that
  src/lasm-modules/ui-dom.mjs reads as that decoder does and changes the DOM
  as `applyOps` says would need a model of JavaScript and the DOM (tested:
  test/ui-dom.test.mjs, the patch fixtures, the ui-patch fuzz target).
- **Lasm.UI: an unchanged view produces an empty patch.** `diff old
  (old.map Live.erase)` emits no operations (tested by the diff model checks).
- **Lasm.UI: keyed reorders only move.** When the new children are a
  permutation of the old keyed children, the patch inserts and removes
  nothing.
- **Lasm.UI: server rendering hydrates.** The HTML that `Lasm.UI.Render`
  writes for a view is the DOM the first render would build.
- **Lasm.UI and Lasm.Fetch: URL round trips.** `percentDecode
  (percentEncode s) = some s` for every string, and `Url.build` then
  `segments` gives back the segments.
- **Lasm.RPC: the wire round trip.** `decodeResponse 200 (encodeResponse
  (.ok r)) = .ok r`, and a validation error answered with status 400 reaches
  the client as `Error.invalid` with the same message; both need Lean's JSON
  printer and parser to round-trip (`Json.parse (j.compress) = .ok j`).
- **Lasm.RPC: a valid request's encoding decodes to itself.** For types
  whose `ToJson`/`FromJson` round-trip, the client's `encodeRequest` is
  accepted by the server's `decodeRequest` as the same request.
- **Lasm.KV: the stores behave as the table.** That `get`, `put` and
  `delete` of the memory store read and replace the table in its `IO.Ref`
  (Lean's runtime is not modelled), and that the platform stores agree
  (tested per platform in CI).
- **Lasm.Fetch: no empty segments.** No segment of `r.segments` is empty
  (needs a proof about `percentDecode`'s loop).
