# Proposal: moving JavaScript glue into Lean, where it can be proved

Status: written 2026-11-07 for the ROADMAP item "Move JavaScript glue code into
Lean where it can be proved, starting with what mutation testing shows is
riskiest" (issue #21). The first candidate is implemented (PR "UI patch
encoding proved"); the rest are proposals.

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

### 2. The Lasm.JS value codec (host-bridge, edge-glue, Lasm.JS.Core) — recommended next

- **What moves.** The Lean half (`Data.write`, `Data.read` in
  library/Lasm/JS/Core.lean) becomes total: `read` today is `partial` and in
  `IO` (it turns references into `Value`s), so nothing about it can be proved.
  Split it into a pure reader returning handles and an `IO` step that wraps
  them. On the JavaScript side, the two copies of the codec (node-js.mjs and
  edge-js.mjs, about 70 lines each, differing only in Buffer versus DataView)
  become one shared module.
- **What gets proved.** `read (encode d) = d` for every `Data` whose numbers
  are not NaN payloads and whose arrays, objects and strings have fewer than
  2³² elements or bytes (lengths travel as u32: a larger one wraps today,
  which the proof would surface; the fix is a size check in `write`). Floats
  travel as their bits; Lean's library has no lemma relating
  `Float.ofBits` and `Float.toBits`, so the statement compares `toBits`.
- **How the JavaScript shrinks.** By one copy of the codec (about 70 lines and
  its survivors in edge-js.mjs).
- **Runtime cost.** None expected: the same bytes are written and read; a
  total `read` compiles to the same loop. To be measured with the Lasm.JS
  interop benchmark (docs/BENCHMARKS.md: Lean→JS call round trip p50 21 µs).
- **Risk.** Medium: it changes a shipped module, so library/prebuilt is
  regenerated, and every Lasm.JS call goes through it.

### 3. Function-platform request and response mapping (src/serverless/)

- **What it is.** Event to request (API Gateway REST and HTTP, function URLs,
  ALB, CloudFront), `joinCookies`, `parseSetCookie`, `azureReply`,
  `isTextual`. Pure, and the most exposed code Lasm has: every byte of it is
  chosen by a client. Real bugs have been found here: a malformed percent
  escape in an ALB query that turned the request into a 502 (found by the
  fuzz target), and cookies sent twice by some gateways (#80).
- **Why it does not move now.** The shim runs before and outside the Lean
  program: it forwards to the program's own HTTP server over loopback, and
  that server may be Express or Hono, not Lean. Calling Lean would mean
  shipping a second, Lean-compiled Wasm module (with its own copy of the
  Lean runtime) in every function package, instantiated on every cold start,
  and a marshalled call per request, to replace about 200 lines of
  JavaScript.
- **What to do instead.** Specify it: a Lean model of the mapping with
  theorems (each cookie arrives once; query values decoded by the platform
  are re-encoded to the same values; the body round-trips), and the fuzz
  target's oracle checked against the model. Worth doing after candidate 2.

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
2. **The Lasm.JS value codec** next: a total Lean `read` with its round-trip
   theorem, the u32 size check it will surface, and one shared JavaScript
   codec for Node and the edge.

After those, specify the function-platform mapping in Lean (candidate 3).
Candidates 4 and 5 need no move: their proofs, where useful, are about Lean
code that already exists, and their JavaScript is calls to the platform.
