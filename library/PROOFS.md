# What is proved about Lasm's library

Lasm's own Lean library (Lasm.UI, Lasm.JS) is ordinary
Lean code, and programs run exactly that code. So some of its guarantees are
proved, for every possible input, rather than only tested. (The propositions
about the function-platform shims, src/serverless/, are about a model of the
CLI's JavaScript, and those about request paths are about the request-path
model: both are in [verification/cli](../verification/cli/README.md).)
This page lists
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
- [`Lasm/JS/Spec.lean`](Lasm/JS/Spec.lean): the value codec between Lean and JavaScript;

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
Lasm.JS's value codec, …). The Spec,
Theorems, `Lasm/UI/Proofs*` and `Lasm/JS/Proofs*` modules are a proofs-only target: they are not
in the shipped library (`libraryModules` in
[src/lasm-library.mjs](../src/lasm-library.mjs)), so they are not compiled
into the Lean prefix or [prebuilt/](prebuilt), cost a program's build
nothing, and changing a proposition never makes the prebuilt library stale.

What is modelled, and so outside the theorems: the DOM (Lasm.UI.Model), and
what the JavaScript applier does to it, which is written in Lean as the
applier model (Lasm/UI/Proofs/Applier.lean: nodes looked up by id in one
table, the DOM's refusals, hydration's adoption) and checked against
src/lasm-modules/ui-dom.mjs on happy-dom by the model differential
test/models/ui-applier-differential.mjs, not proved; how the applier reads
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

**16 proved propositions (329 theorems)**: each proposition below is proved by the theorem of the same name in its library's `Theorems.lean`, and the other theorems are the lemmas their proofs are built from. Every one uses only Lean's standard axioms.

## Lasm.UI (14)

### Rendering: the DOM always shows the view

| Proposition | In plain English |
| --- | --- |
| [`diff_correct`](Lasm/UI/Spec.lean#L43) | **The diff is correct.** Take any well-formed rendered tree `old` and any next view `new`. Applying the patch that `diff old new next` returns to the DOM of `old` gives exactly the DOM of the new rendered tree; that tree shows `new`; it is well formed again; and the next free id never goes down (so ids are never reused). This is about the executable `diff` itself, with every case it has: keyed moves, the two-ended matching and its key-map fallback, inserts, removals, clearing, replacing nodes whose kind or tag changed, text changes and attribute changes. |
| [`mount_correct`](Lasm/UI/Spec.lean#L57) | **The first render is correct.** Under an empty root, the patch of the first render (`mountOps`) builds the DOM of a well-formed rendered tree that shows the view. |
| [`session_correct`](Lasm/UI/Spec.lean#L65) | **Every frame stays correct.** Start from an empty root and render any sequence of views, one frame each (diff the rendered tree against the next view and apply the patch to the DOM, as the runtime does: `Session.step`). After any number of frames, the DOM is exactly the DOM of the rendered tree, that tree is well formed, and it shows the latest view. |
| [`diffAttrs_correct`](Lasm/UI/Spec.lean#L75) | **The attribute diff is correct.** The attribute operations that `diffAttrs old new` returns turn the attribute slots of `old` (attributes, properties, styles and listeners, the last setting of each slot winning) into exactly those of `new`: every slot `new` sets has its value, and every other slot is unset. |
| [`create_correct`](Lasm/UI/Spec.lean#L83) | **New nodes get fresh ids.** Rendering a view `h` from scratch with `create h n` gives a tree whose root has id `n`, whose ids are all below the returned next free id (which is above `n`), whose sibling ids are distinct, and which shows `h`. |

### The patch encoding: the browser reads exactly the patch

| Proposition | In plain English |
| --- | --- |
| [`frames_decode`](Lasm/UI/Spec.lean#L94) | **The browser reads every frame as exactly the patch Lean encoded.** Lean sends each frame's patch to the browser as bytes (`Encode.frame`), with tag, attribute and event names, short attribute values and event decoder shapes interned in tables that both sides keep from frame to frame. Take any session: any sequence of frames, each any patch on the children of any node, encoded in turn from empty tables (`Decode.encodeAll`). The applier's reading of those bytes (`Decode.frames`: Lasm.UI.Proofs.Decode, the reading half of src/lasm-modules/ui-dom.mjs, its tables also carried from frame to frame) never fails, and gives for each frame exactly the operations of its patch (`Wire.ofOps`): every insert with the DOM of the inserted tree (`toDom`), and every move, removal, clear, text change and attribute operation, each on its node, in order. So the tables never fall out of step, and every interned name, value and decoder shape is read back as the one Lean meant. (An attribute operation that sets a slot to a value of another kind, which `diff` never produces, is sent as a removal of the slot: `AttrOp.wire`.) |

### The applier: what the browser's DOM shows

| Proposition | In plain English |
| --- | --- |
| [`applier_correct`](Lasm/UI/Spec.lean#L117) | **The applier performs every conforming patch as the model says.** The applier (Lasm.UI.Applier, the model of what src/lasm-modules/ui-dom.mjs does to the DOM) performs a patch as the flat list of operations it reads from the bytes (`Wire.ofOps`), naming every node by id in one table for the whole document, and the DOM refuses some (an id not in the document, an insert before a node that is not a child, into a text node or into the moved node's own subtree). Take any DOM under the root whose ids are distinct, none 0 (the root's) and all among `used`, and any patch that conforms (`confOps`: each op's nodes are children of its parent there, inserts and moves go before such a child or at the end and never before the moved node itself, texts change on text nodes and attributes on elements, and inserted subtrees bring distinct ids never used). Then no operation is refused, the DOM after them is exactly `applyOps`' (Lasm.UI.Model, the meaning `diff_correct` is proved against), and its ids are distinct again. |
| [`diff_conforms`](Lasm/UI/Spec.lean#L136) | **The diff's patches conform.** For a well-formed live tree whose DOM has distinct ids, none 0 (as every frame of a session has: `Spec.session_correct`, `Spec.applier_correct`), the patch of `diff` to any next view conforms (`Applier.confOps`, from the ids below the next free id): every node an op names is a child of its parent there, inserts and moves go before such a child or at the end and never before the moved node itself, text changes are on text nodes and attribute changes on elements (with every slot as the encoder sends it), and inserted subtrees bring distinct new ids. So `applier_correct` applies to every patch `diff` writes. (Well-formedness alone is enough: the proof does not use the other two assumptions, which the model differential checks hold on every frame.) |
| [`applier_session`](Lasm/UI/Spec.lean#L152) | **The browser shows every view.** Render any sequence of views from an empty root, one frame each as the runtime does (`Applier.trace`: the patch of each frame and the DOM of its live tree). Then the applier, reading the bytes of every frame as Lean encodes them (`Decode.encodeAll`, tables carried across frames) and performing them on the DOM the last frame left, refuses none and leaves after each frame exactly the DOM of that frame's live tree, which shows its view (`session_correct`). This composes `diff_correct`, `diff_conforms`, `frames_decode` and `applier_correct`. |
| [`hydrate_correct`](Lasm/UI/Spec.lean#L165) | **Hydration builds what a fresh mount builds.** An app mounted with `hydrate: true` adopts the server-rendered DOM with its first frame (`Applier.hydrateFrame`): each node of the first render takes the server node at its place when it is of the same kind (a text node; an element of the same namespace and tag), keeping it, comments are dropped, and server nodes left over are removed. For any view and any server DOM at all, the applier reads the encoded first render, and hydrating with it gives the same nodes as mounting the view from scratch (`Applier.bareIn`: the same ids, kinds, namespaces, tags, texts and children, in order); only an adopted element may keep a server attribute the view does not set. When the server DOM renders the view (`Applier.Rendered`: a node of the same kind for each node, comments anywhere, server attributes among the view's), the result is exactly the fresh mount's DOM. |

### Commands

| Proposition | In plain English |
| --- | --- |
| [`cmd_map_comp`](Lasm/UI/Spec.lean#L191) | **Mapping commands composes.** `Cmd.map` is how a parent embeds a child component's commands (its messages wrapped in the parent's). Mapping by `g` and then by `f` is the same command as mapping once by `f ∘ g`, so components nest to any depth. |
| [`cmd_map_effects`](Lasm/UI/Spec.lean#L198) | **Mapping commands keeps their effects.** Mapping a command by any `f` keeps exactly its effects, in order, each of the same kind with the same data (the same delay, the same URL, the same task): with the messages they deliver forgotten (`Effect.forget`), the effects before and after are equal. Only the messages change. |
| [`cmd_map_id`](Lasm/UI/Spec.lean#L206) | **Mapping by the identity changes nothing.** |
| [`cmd_map_batch`](Lasm/UI/Spec.lean#L210) | **Mapping commutes with batching.** Mapping a batch of commands is the batch of the mapped commands: no effect is lost, duplicated or reordered. |

## Lasm.JS (2)

### The value codec: every value crosses intact

| Proposition | In plain English |
| --- | --- |
| [`decode_encode`](Lasm/JS/Spec.lean#L37) | **Every value that is encoded is read back exactly.** Take any plain value `d` (no references) that `encode` accepts, as the bytes `b`. The reader (`decodeWith`, which `decode` runs) reads `b` back as `d`, every number with the same bits: never an error, nothing left over, nothing misread. |
| [`encode_ok_iff_fits`](Lasm/JS/Spec.lean#L46) | **Lengths never wrap.** `encode d` succeeds exactly when every length in `d` fits the format's u32 (`d.Fits`). A string, byte array, array or object with 2³² or more bytes, elements or fields is an error naming it, never a length that wraps around and makes the reader misread what follows. |
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

**5 candidates**, each a `def … : Prop` in a `Candidates.lean`, checked on generated inputs by the test its `Tested by:` line names (which cites it with a `Proposition:` line), not yet proved.

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

- **Lasm.UI: the JavaScript applier implements the decoder and the applier
  model, and the browser parses rendered HTML as `Applier.Server`.** What
  the decoder and the applier model do is proved (`frames_decode`,
  `applier_correct`, `diff_conforms`, `applier_session`, `hydrate_correct`); that
  src/lasm-modules/ui-dom.mjs does the same on a real DOM is tested (the
  ui-decode fuzz target and test/models/ui-applier-differential.mjs, on
  happy-dom), and that the HTML `Lasm.UI.Render` writes parses to a server
  DOM that renders the view (`Applier.Rendered`) needs a model of the HTML
  parser (tested: the fixture sessions hydrate their server-rendered HTML
  in the differential, and the Playwright suites).
