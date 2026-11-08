# Proposal: moving JavaScript glue into Lean, where it can be proved

Status: written 2026-11-07 for the ROADMAP item "Move JavaScript glue code into
Lean where it can be proved, starting with what mutation testing shows is
riskiest" (issue #21). The first three candidates are implemented (PR #151,
the UI patch encoding; the Lasm.JS value codec, issue #154; the
function-platform mapping, specified in Lean and checked by fuzzing); the
rest are proposals.

## What can move, and what cannot

Most of Lasm's JavaScript exists to call something only JavaScript can call:
the DOM, Node's `http` and `fs`, `Atomics.wait`, a platform's handler
signature, `emcc` and `wasm-ld`. That code cannot move into Lean; it can only
get thinner. What can move, or at least be specified in Lean and proved, is
the pure logic between those calls: wire formats, request and response
mappings, path and URL handling, and planning code.

There are two ways to bring such logic under proof.

- **Move it.** Lean computes the result and the JavaScript calls Lean (a Wasm
  export) instead. This only works where a Lean program is already running
  beside the JavaScript and Lasm controls its exports, and it costs a Wasm call
  plus marshalling each time.
- **Specify it.** Where the JavaScript is half of a protocol whose other half
  is Lean, write the JavaScript half in Lean as a reference implementation,
  prove the two halves fit, and test the JavaScript against the reference.
  Nothing changes at run time.

## The data

Mutation scores from the nightly run 42370045127 (2026-11-07, `main` at
21b2884e), with Stryker over node:test (scripts/mutation, the ratchet in
[docs/evidence/mutation-baseline.json](../evidence/mutation-baseline.json)).
"Left" counts survived and uncovered mutants.

| Module | Files | Lines | Mutants | Score | Left | Runs where |
| --- | --- | ---: | ---: | ---: | ---: | --- |
| target-link | application-link, edge-link, wasi-link | 1,065 | 1,964 | 86.8 % | 258 | the CLI, at build time |
| link-driver | link-driver/*.mjs (6 files) | 1,746 | 3,260 | 93.0 % | 225 | the CLI, at build time |
| ui-dom | lasm-modules/ui-dom.mjs | 429 | 758 | 93.6 % | 48 | the browser, every frame and event |
| notices | notices.mjs | 370 | 475 | 91.5 % | 40 | the CLI, at build time |
| edge-glue | edge-host, edge-js, edge-runtime, edge-start | 663 | 1,260 | 97.1 % | 36 | edge isolates, every request |
| host-bridge | node-js.mjs | 511 | 825 | 96.4 % | 29 | Node, every Lasm.JS call |
| build-service | dev-build-service, build client, files, cache | 277 | 464 | 94.3 % | 26 | the CLI and `lasm dev` |

Not in the mutation set but in scope: the function-platform shims
(src/serverless/, 502 lines: AWS Lambda event mapping, cookie joining and
splitting, Azure's reply shape), covered by the `serverless-http` fuzz target.

What the survivors are:

- **target-link, link-driver, build-service**: option and flag plumbing for
  `emcc`, `wasm-ld` and Binaryen, link plans, cache keys. Many survivors are
  equivalent mutants or untested error text. The code runs only in the CLI on
  the developer's machine with the developer's inputs.
- **notices**: 29 of 40 survivors are string literals in the table of patched
  Lean files (text of the notices, checked by eye and by
  `test/notices*.test.mjs` only in part).
- **ui-dom**: mostly equivalent mutants in fast paths (the ASCII short-string
  path of `str()`, the hydration cursor) and in error branches.
- **host-bridge, edge-glue**: the two copies of the Lasm.JS value codec
  (`Writer`, `Reader`, `write`, `read` in node-js.mjs and edge-js.mjs),
  `Atomics` index arithmetic, timer and error-code mapping.

## Ranked candidates

Ranked by what a proof would buy (exposure to untrusted input, how much
breaks if it is wrong, how much of it is pure) against what it costs.

### 1. The UI patch encoding (ui-dom.mjs reading half, Lasm.UI.Encode) — done

- **What moves.** Nothing at run time. The reading half of the applier
  (`v()`, `str()`, `name()`, `value()`, `attr()`, `node()`, `apply()`) is
  written in Lean as a reference decoder, function for function:
  [library/Lasm/UI/Proofs/Decode.lean](../../library/Lasm/UI/Proofs/Decode.lean).
- **What is proved.** `Lasm.UI.Spec.frames_decode`: for any session (any
  sequence of frames, each any patch), the decoder reads every frame the
  encoder writes as exactly the operations of its patch, with the interning
  tables (names, values, decoder shapes) carried across frames and never out
  of step ([library/Lasm/UI/Proofs/Wire.lean](../../library/Lasm/UI/Proofs/Wire.lean),
  72 theorems). Until now the encoding was "tested, not proved"
  ([library/PROOFS.md](../../library/PROOFS.md)). Together with `diff_correct`
  this leaves one link unproved between `diff` and the DOM: that the
  JavaScript does what the decoder and the DOM model say.
- **How the JavaScript shrinks.** It does not. Every line of the reading half
  ends in a DOM call (`createElement`, `setAttribute`, `insertBefore`), so
  moving the decoding into Lean would mean a second, decoded representation
  crossing the Wasm boundary, which is what the binary format exists to avoid.
  The JavaScript stays the thinnest shim it can be: one `switch` per op.
- **Runtime cost.** None: the decoder and proofs are proofs-only modules (not
  in `libraryModules`), so no program, the Lean prefix and
  library/prebuilt are unchanged. The proof check grows by about 6 s
  (Decode 1.7 s, Wire 4.5 s with the managed Lean 4.35.0).
- **Risk.** Low. The reference decoder could drift from ui-dom.mjs; the
  patch fixtures that Lean writes (test/ui/Fixtures.lean, applied by
  test/ui-dom.test.mjs) and the ui-patch fuzz target keep the JavaScript
  honest, and the header of Decode.lean maps each Lean function to its
  JavaScript one for review.
- **Why first.** Every Lasm.UI frame crosses it; it is the one remaining
  unproved link in the UI pipeline whose other end was already proved; it is
  pure; and it costs nothing at run time.

### 2. The Lasm.JS value codec (host-bridge, edge-glue, Lasm.JS.Core) — done

- **What moved.** The Lean half (library/Lasm/JS/Core.lean, `Wire`) is
  total. `Wire.write` is structural (well-founded on the value) and returns
  `Except String ByteArray`; the reader is `Wire.decodeWith`, generic in the
  monad and in how a reference becomes a value, with fuel (the bytes left)
  so it terminates, and `Wire.decode` runs it in `IO`, where a reference
  becomes an owned `Value`. The reader is specialised for `IO` at compile
  time, so no monad dictionaries are passed at run time.
- **What is proved.** `Lasm.JS.Spec.decode_encode`: for every plain value
  (no references) that `encode` accepts, `decodeWith` reads the bytes back
  as the same value, numbers compared by their bits (`Data.wire`).
  `Lasm.JS.Spec.encode_ok_iff_fits`: `encode` succeeds exactly when every
  length fits the u32 (`Data.Fits`). 46 theorems
  ([library/Lasm/JS/Proofs/Wire.lean](../../library/Lasm/JS/Proofs/Wire.lean)),
  only the standard axioms.
- **The bug it surfaced (#154).** Lengths of 2³² or more wrapped silently in
  Lean (wasm64 on Node, where such a value can exist) and on the edge
  (`DataView.setUint32`), and threw a bare `RangeError` on Node. Each side
  now refuses them with an error naming the value; Lean's reply framing
  (op 208) checks its length too.
- **Runtime cost.** None measured: the same bytes cross. Compiled natively
  (Lean 4.35.0, `-O3`), encoding a typical call payload (475 bytes: an
  object of eight fields with headers, 64 bytes, a bigint and 20 numbers)
  takes the same time as before (about 3.0–3.4 µs either way) and decoding
  it is about 25 % faster (7.8 µs against 10.4 µs), from the `Option`
  readers and dropping the `IO` wrapping of each step. The readers add with
  `+` rather than `|||` (equal for non-overlapping bytes; `omega` proves
  things about `+`).
- **Why the JavaScript stays in two copies.** Node's host files are copied
  flat into each application's `host/` directory and into the frozen
  full-Lean toolchain's host set (scripts/full-lean), the edge's into each
  edge output's `lasm/` directory, and the browser bundle inlines
  edge-js.mjs. A shared module would be a new file in every one of those
  outputs (and a subdirectory in `host/`, since node-js.mjs and edge-js.mjs
  live in different source directories), would change the browser bundle,
  and would replace Node's `Buffer` reads and writes with `DataView`, an
  unmeasured change on the hottest path. The copies differ only in
  `Buffer` against `DataView`; each is tested against Lean's side of the
  format (test/node-js.test.mjs, test/edge-js.test.mjs), including the new
  length check. Revisit if the host files are ever bundled.

### 3. Function-platform request and response mapping (src/serverless/) — done

- **What it is.** Event to request (API Gateway REST and HTTP, function URLs,
  ALB, CloudFront), the fields forward() and pipe() send, `joinCookies`,
  `parseSetCookie`, `azureReply`, `webReply`, `isTextual`. Pure, and the most
  exposed code Lasm has: every byte of it is chosen by a client.
- **Why it does not move.** The shim runs before and outside the Lean
  program: it forwards to the program's own HTTP server over loopback, and
  that server may be Express or Hono, not Lean. Calling Lean would mean
  shipping a second, Lean-compiled Wasm module (with its own copy of the
  Lean runtime) in every function package, instantiated on every cold start,
  and a marshalled call per request, to replace about 200 lines of
  JavaScript.
- **What was done instead: a model, its theorems, and the fuzzer checking the
  JavaScript against it.** [library/Lasm/Serverless/Proofs/Model.lean](../../library/Lasm/Serverless/Proofs/Model.lean)
  is the mapping in Lean, function for function lasm-lambda.mjs and
  lasm-server.mjs (its header maps each Lean function to its JavaScript one).
  [Lasm/Serverless/Spec.lean](../../library/Lasm/Serverless/Spec.lean) states
  20 propositions, proved in Lasm.Serverless.Proofs.Mapping (87 theorems,
  only the standard axioms; [library/PROOFS.md](../../library/PROOFS.md)):
  every forwarded target is one http.request accepts; the path a server sees
  is the event's path and the query its query (`target_split`), unchanged
  when it is already valid, so `://` in a path and `%E0` in an ALB query go
  through as they are; no header chooses the target; exactly one Host is
  sent and it is plain, and a plain Host cannot move the path of the URL a
  server builds from it (`host_once`, `host_url`); what `URLSearchParams`
  writes decodes to the same pairs (`form_roundtrip`), so API Gateway
  REST's decoded query values arrive with the same values; at most one
  Cookie field, never empty, and a payload 2.0 event's cookies once
  (#80); every other field goes through in order; the body is the
  server's byte for byte; every reply field reaches each response shape
  (CloudFront: every field it accepts); and every cookie object Azure gets
  arrives unchanged when at most one Set-Cookie would change. Left to the
  platform: Node's base64, `Date.parse`, `Number`, the order of a
  JavaScript object's keys.
- **How the oracle runs the model.** The serverless-http fuzz target sends
  each input's event and reply as one JSON line to `lean --run
  test/fuzz/support/ServerlessModel.lean` (the model compiled to an .olean
  by `test/fuzz/support/serverless-model.mjs`, the managed Lean 4.35.0) and
  fails unless the JavaScript's request, response, Azure and Netlify replies
  and parsed cookies are exactly the model's. Required in CI (fuzz.yml: the
  replay on every pull request, the nightly and weekly campaigns). Chosen
  over the alternatives because it checks every input a campaign makes, not
  only those of a table, and needs only Lean: a golden table written by Lean
  would check only its own cases, and a Lasm (Wasm) build of the model would
  put the Lean runtime and a link in front of a JavaScript fuzz target. One
  long-lived process interprets the few hundred lines of pure Lean in well
  under a millisecond per input (about 300 inputs a second with the model,
  locally).
- **What it found.** The shim disagreed with the model in five places, each
  a shim bug, now fixed with a regression input
  (test/fuzz/regressions/serverless-http/) and unit tests
  (test/serverless.test.mjs): a decoded path or an unencoded query (a space,
  a non-ASCII character, `?`, `#`) made http.request throw, a 502, or moved
  part of the path into the query (`requestTarget` percent-encodes what a
  target cannot carry); a forged Host reached servers that build their URL
  from it, as Hono's Node adapter does (`outgoingHeaders` keeps the first plain
  Host, else the loopback address, as Lasm.Fetch already did); empty Cookie
  fields were forwarded; a Latin-1 `text/html` body went as text and lost its
  accented letters (`isTextual` now also asks for valid UTF-8); and a reply
  field named `__proto__` or `constructor` was dropped or threw a
  `TypeError` in the Lambda and CloudFront responses (header maps without a
  prototype).
- **Runtime cost.** Two regular-expression replacements per request target
  and a UTF-8 check of each Lambda response body; no change to what a
  package ships beyond the shim's own code.

### 4. Path and URL handling

Already in Lean: request paths (Lasm.Fetch, `segments_no_dot_segments` is
proved) and Lasm.UI's URLs (`Lasm.UI.Url`). The JavaScript left is ui-dom's
link router (`onLinkClick`: modifier keys, `target`, `download`, same
origin), which reads the DOM for every input. The useful proofs here are in
Lean already listed as candidates in library/PROOFS.md (`percentDecode
(percentEncode s) = some s`, `Url.build` then `segments`). No JavaScript
moves.

### 5. Build-time modules (target-link, link-driver, build-service, notices)

The most survivors, the least benefit. This code runs in the CLI, on the
developer's own inputs, and its correctness means "the flags `emcc` and
`wasm-ld` need": there is no specification to prove it against other than
the tools' behavior, which the integration tests check by building and
running programs. Moving it into Lean would add a Lean-compiled Wasm module to
the CLI, loaded on every command. Recommended instead: kill the
target-link survivors with tests (it is the lowest score, 86.8 %), and keep
simplifying it (issue #21, "shrink it to its irreducible state").

## Recommendation

1. **The UI patch encoding** (done in this change).
2. **The Lasm.JS value codec** (done, #154): a total Lean reader with its
   round-trip theorem, and the u32 length check it surfaced. The two
   JavaScript copies stay (sharing them would change every host output).

3. **The function-platform mapping** (done): specified in Lean
   (Lasm.Serverless, 20 propositions), the fuzz oracle checking the shim
   against the model on every input; five shim bugs fixed.

Candidates 4 and 5 need no move: their proofs, where useful, are about Lean
code that already exists, and their JavaScript is calls to the platform.
