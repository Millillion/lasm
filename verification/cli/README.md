# Propositions about the CLI's JavaScript

The `@lasm/cli` package is JavaScript. Its property tests and fuzz oracles
state what they check as Lean propositions, so that each one can become a
theorem once the code it is about has a Lean model
([docs/TESTING_STRATEGY.md §4](../../docs/TESTING_STRATEGY.md#4-property-testing-convention-propositions-that-carry-over-to-proofs)).
This directory holds them:

- [Lasm/Cli/Interface.lean](Lasm/Cli/Interface.lean): one `opaque` constant
  per JavaScript function a proposition mentions, with the JavaScript's types
  read as Lean types, and the exact definitions the statements share
  (LEB128, WebAssembly sections, reachability, …). A few constants stand for
  an outside semantics a test uses as its oracle (WebAssembly validation and
  execution, a ZIP reader, the native launcher's reading); their doc comments
  say so.
- [Lasm/Cli/Model/](Lasm/Cli/Model): Lean models of JavaScript modules,
  each mirroring its module function for function (a table in its header
  maps one to the other) and checked against it by the model differential,
  [test/models/cli-differential.mjs](../../test/models/cli-differential.mjs):
  the JavaScript and the model run on the same generated inputs (2000 per
  function, through [test/models/CliModels.lean](../../test/models/CliModels.lean))
  and any difference fails the `cli-models` workflow. `Interface.lean`
  imports them in place of the `opaque` constants they replace.
- [Lasm/Cli/Spec.lean](Lasm/Cli/Spec.lean) and
  [Lasm/Cli/Theorems.lean](Lasm/Cli/Theorems.lean): the propositions proved
  of the models, each with its theorem (as a library's `Spec.lean` and
  `Theorems.lean`); listed under [Proved](#proved).
- [Lasm/Cli/Candidates.lean](Lasm/Cli/Candidates.lean): the propositions,
  each a `def … : Prop` with a plain-English doc comment and a `Tested by:`
  line. The test it names cites it (`// Proposition: Lasm.Cli.Candidates.…`
  and the statement, verbatim) and checks the statement on every input it
  draws.

**How one becomes a theorem.** Replace the `opaque` constants it mentions by
a Lean model of the JavaScript, function for function, checked against the
JavaScript by a model differential in CI (a module in `Lasm/Cli/Model/`
and its entry in test/models/cli-differential.mjs); then prove the
statement about the model, move it to `Spec.lean` with its theorem in
`Theorems.lean`, and cite it from its test as `Lasm.Cli.Spec.…`. The
statement stays the same unless the model shows it wrong of the JavaScript
(as `response_file_round_trip` was: `responseFile` also refuses `\r`, and
its result is now `Except`, as it throws). What stays unproved is exactly "this JavaScript implements the
model", the step a move into Lean removes
([docs/proposals/IRREDUCIBLE.md](../../docs/proposals/IRREDUCIBLE.md) M4, M6).

**Checks.** `node scripts/propositions.mjs` (every pull request, through
`test/propositions.test.mjs`) checks every citation against its definition
and every `Tested by:` line against its test, and keeps the candidates list
current (`--write` rewrites it). `node scripts/library-proofs.mjs`
(`library-proofs.yml`) elaborates every file with the managed Lean 4.35.0,
checks that each proposition of `Spec.lean` has its theorem and that every
theorem uses only Lean's standard axioms, and keeps the list under
[Proved](#proved) current. `node test/models/cli-differential.mjs`
(`cli-models.yml`) checks every model against its JavaScript.

## Proved

<!-- BEGIN PROPOSITIONS -->
<!-- Generated from the Spec.lean files by `node scripts/library-proofs.mjs --write`; do not edit by hand. -->

**23 proved propositions (192 theorems)**: each proposition below is proved by the theorem of the same name in its library's `Theorems.lean`, and the other theorems are the lemmas their proofs are built from. Every one uses only Lean's standard axioms.

## Lasm.Cli (23)

### The command line

| Proposition | In plain English |
| --- | --- |
| [`response_file_round_trip`](Lasm/Cli/Spec.lean#L26) | **Response files round-trip.** Every list of linker arguments without a newline, carriage return or NUL makes a response file; each argument is one line of it, read back exactly by unquoting it, and no arguments make a file of one empty line. Tested by: test/cli-parse.test.mjs |
| [`run_args_kept`](Lasm/Cli/Spec.lean#L37) | **Application arguments after `--` come back unchanged.** Running a `.lean` file with any of `--rebuild`, `--verbose` and `--release` before it parses as `run` of that file, with exactly the arguments after `--` (flags, empty strings and `--` included) and each option as given. Tested by: test/cli-parse.test.mjs |
| [`unknown_flag_refused`](Lasm/Cli/Spec.lean#L50) | **Every unknown flag is refused by name.** A word that starts with `-` and is no option of `lasm build` or of running a program is refused, after a program and before one, with a message that names it. Tested by: test/cli-parse.test.mjs |
| [`edit_distance_metric`](Lasm/Cli/Spec.lean#L59) | **Edit distance is a metric bounded by the lengths.** It is zero exactly between equal words, symmetric, satisfies the triangle inequality, is the length from or to the empty word, and lies between the difference of the lengths and the larger length (lengths in characters: code points, as the JavaScript spreads each word before it measures it). Tested by: test/cli-parse.test.mjs |
| [`closest_nearest_first`](Lasm/Cli/Spec.lean#L72) | **A suggestion is the nearest candidate, within reach.** For lowercase words, `closest` gives the first candidate at the least edit distance, when that distance is within its threshold (two edits, or a third of its length), and nothing otherwise. Tested by: test/cli-parse.test.mjs |
| [`build_options_commute`](Lasm/Cli/Spec.lean#L81) | **Build options mean the same in any order and either form.** When `lasm build` accepts a set of distinct options with at most one input and no `--help`, it accepts every reordering of them, with any valued option written `--flag=value` instead of `--flag value`, and parses it the same. (`--help` stops at once, before an error after it; two positional words are the input and the output, in that order.) Tested by: test/cli-parse.test.mjs |
| [`parse_known_or_refused`](Lasm/Cli/Spec.lean#L96) | **Every parse is a known command, or a readable error.** Whatever the arguments, the parser either names a command Lasm has, with a build target, an input, `lasm init` templates and deploy targets and `lasm dev` outputs that Lasm has, or refuses with a message that is not blank. Tested by: test/fuzz/targets/cli-arguments.mjs |

### Development server

| Proposition | In plain English |
| --- | --- |
| [`changed_files_exact`](Lasm/Cli/Spec.lean#L114) | **`changedFiles` reports exactly the files that differ.** Between two snapshots, it names each file present in only one, or with different hashes, once, and no other. Tested by: test/dev-units.test.mjs |

### The Node host

| Proposition | In plain English |
| --- | --- |
| [`numbers_le64`](Lasm/Cli/Spec.lean#L125) | **`numbers` writes little-endian `UInt64`s.** Each value becomes eight bytes, low byte first, wrapped modulo 2⁶⁴ (a negative value as its two's complement), in order. Tested by: test/lean-io-error-policy.test.mjs |
| [`lean_at_least_lexicographic`](Lasm/Cli/Spec.lean#L132) | **Lean versions compare lexicographically.** `leanAtLeast v m` holds exactly when `v`'s major, minor and patch are `m`'s or later in that order, whatever prerelease tag `v` has; a version is at least itself. Tested by: test/lean-io-error-policy.test.mjs |

### Builds

| Proposition | In plain English |
| --- | --- |
| [`builtin_closure`](Lasm/Cli/Spec.lean#L143) | **The builtin closure is the reachable builtins, dependencies first.** For an acyclic import graph, the closure of the requested specifiers holds each builtin reachable from a requested builtin exactly once, nothing else (other specifiers are dropped), and every builtin after those it imports. Tested by: test/builtin-modules.test.mjs |
| [`schedule_reached_kept_first`](Lasm/Cli/Spec.lean#L155) | **A unit's schedule is the kept units it reaches, dependencies first.** For an acyclic call graph (the entries of the JavaScript object `calls`), the schedule of `n` holds each kept unit other than `n` that `n` reaches, exactly once, and every one after the kept units it reaches. Tested by: test/edge-initializers.test.mjs |

### The link driver's Python semantics

| Proposition | In plain English |
| --- | --- |
| [`json_string_printable`](Lasm/Cli/Spec.lean#L169) | **Escaped strings are printable ASCII.** `json.dumps` of any string, `ensure_ascii`, is printable ASCII: quotes, escapes, hexadecimal digits and the printable characters themselves. Tested by: test/link-driver-python.test.mjs |
| [`python_order_code_points`](Lasm/Cli/Spec.lean#L176) | **Python's string order is the order of code points.** The sign of `comparePythonStrings a b` is that of comparing `a` and `b` code point by code point (a prefix first), as Python orders `str`, unlike JavaScript's UTF-16 order. Tested by: test/link-driver-python.test.mjs |

### WebAssembly

| Proposition | In plain English |
| --- | --- |
| [`replace_one_core_module`](Lasm/Cli/Spec.lean#L186) | **`replaceCoreModule` replaces exactly the one matching module.** In a component whose only core module section that starts with `pfx` is `pfx ++ tail`, that section becomes `to ++ tail`, and every other section, before or after it, is kept as it was. Tested by: test/wasi-component.test.mjs |
| [`componentize_inverse`](Lasm/Cli/Spec.lean#L201) | **A component splices the core module and gives it back.** In a template whose one core module that starts with the placeholder is the placeholder followed by `tail` (as the shipped template is: the test checks it), `componentize` splices in any core that begins no other core module; `extractCore` gives the core back, and `makeTemplate` the template. Tested by: test/wasi-component.test.mjs |
| [`drops_only_component_type`](Lasm/Cli/Spec.lean#L214) | **`withoutComponentType` drops only component-type custom sections.** A module's custom sections named `component-type…` go; every other section, custom or not, stays, in order. Tested by: test/wasi-component.test.mjs |

### The process launcher

| Proposition | In plain English |
| --- | --- |
| [`launcher_config_round_trip`](Lasm/Cli/Spec.lean#L225) | **The launcher configuration round-trips.** For options whose texts have no NUL byte and fit the format (under 4 GiB), `encodeProcessConfiguration` succeeds and the native launcher reads back exactly the flags, the three stdio flags, both directories, the command and arguments as its argument vector, and the environment's pairs in order (as UTF-8 bytes). Tested by: test/cli-helpers.test.mjs |

### Lasm.JS's framing

| Proposition | In plain English |
| --- | --- |
| [`events_read_back`](Lasm/Cli/Spec.lean#L243) | **A batch of interop events reads back.** Whatever events the host queues (within the format's bounds), `encodeEvents` writes the first 1024 and leaves the rest queued, and the C glue reads exactly those events, in order, from the batch; a batch followed by other bytes reads as its events followed by what those bytes read as (so the glue stops only at a malformed event of its own). Tested by: test/lasm-js-framing.test.mjs |
| [`request_read_back`](Lasm/Cli/Spec.lean#L255) | **A request's released handles and payload read back.** For any handles (32-bit, fewer than 2³²) and any payload, the host splits the request the C glue frames into exactly those handles and that payload. Tested by: test/lasm-js-framing.test.mjs |
| [`into_read_back`](Lasm/Cli/Spec.lean#L264) | **The promise a call settles reads back.** For any 64-bit Lean promise and any input, the host reads the promise and the input from the payload the C glue frames. Tested by: test/lasm-js-framing.test.mjs |

### Host handles

| Proposition | In plain English |
| --- | --- |
| [`handle_fresh_in_range`](Lasm/Cli/Spec.lean#L274) | **A host handle is fresh and in range.** When `allocate` gives an id, the table did not hold it and now holds it, with the value, after every entry it had, and the range stays; the id lies in the range, and `#next` stays in it, whenever `#next` was in it (as the constructor starts it). Tested by: test/handle-table.test.mjs |

### Function packages

| Proposition | In plain English |
| --- | --- |
| [`zip_deterministic`](Lasm/Cli/Spec.lean#L286) | **`zip` is deterministic.** The archive depends on the entries alone (no clock, no host state). Of the model, a Lean function, this holds by `rfl`; it is the assumption the model makes, which the test checks of the JavaScript. Tested by: test/serverless-zip.test.mjs |
<!-- END PROPOSITIONS -->

## Candidates

<!-- BEGIN CANDIDATES -->
<!-- Generated from the Candidates.lean files by `node scripts/propositions.mjs --write`; do not edit by hand. -->

**20 candidates**, each a `def … : Prop` in a `Candidates.lean`, checked on generated inputs by the test its `Tested by:` line names (which cites it with a `Proposition:` line), not yet proved.

### Lasm.Cli (20)

| Candidate | In plain English | Tested by |
| --- | --- | --- |
| [`mangle_round_trip`](Lasm/Cli/Candidates.lean#L35) | **Mangling round-trips.** For a dotted name Lean mangles unambiguously, the mangled name is a non-empty C identifier, demangling gives the name back, and the module of its initializer (`initialize_…` or `runtime_initialize_…`) is the name. | [test/application-diagnosis.test.mjs](../../test/application-diagnosis.test.mjs) |
| [`compact_wrappers_as_chains`](Lasm/Cli/Candidates.lean#L47) | **The compact wrappers run the kept initializers as the chains do.** For an acyclic plan of valid initializer names, the wrappers are generated, and calling kept initializers' wrappers runs exactly the kept initializers the Node build's chains run, in the same order (each once, after those it reaches). | [test/edge-initializers.test.mjs](../../test/edge-initializers.test.mjs) |
| [`generated_names_valid`](Lasm/Cli/Candidates.lean#L62) | **Generated names are valid npm, Lake and Supabase names.** Whatever the directory or text: the npm package name is lowercase letters, digits, `.`, `_` and `-`, starts with a letter or digit and does not end with `-`; the Lake name is an identifier of ASCII letters, digits and `_` that starts with a letter and does not end with `_`; the Supabase function name is lowercase letters, digits and `-`, starts with a letter and has at most 54 characters. | [test/init-golden.test.mjs](../../test/init-golden.test.mjs) |
| [`static_inside_root`](Lasm/Cli/Candidates.lean#L80) | **No request path reaches a file outside the root.** Whatever the path (`..`, encoded dots and slashes, sibling directories that share the root's name as a prefix, malformed percent-encoding), the static server answers 200, 400, 403 or 404, and a file it serves lies under the root directory. | [test/static-server.test.mjs](../../test/static-server.test.mjs) |
| [`dev_proxy_forwards_once`](Lasm/Cli/Candidates.lean#L92) | **The proxy sends each request to the server program once, unchanged.** Whatever the server program then does, it receives the request exactly once, with the same method, target and body, its own address as Host, no Accept-Encoding (so a page arrives uncompressed and can be rewritten), and every other header's value. A request is never sent again once the program may have seen it; only a refused connection is retried. | [test/fuzz/targets/dev-proxy.mjs](../../test/fuzz/targets/dev-proxy.mjs) |
| [`dev_proxy_relays_reply`](Lasm/Cli/Candidates.lean#L102) | **A whole reply reaches the client whole.** Its status and headers (a page's `Cache-Control` is `no-store`), and its body byte for byte, or a page's with the reload client inserted (`relayedBody`), in any charset. | [test/fuzz/targets/dev-proxy.mjs](../../test/fuzz/targets/dev-proxy.mjs) |
| [`dev_proxy_ends_failed_replies`](Lasm/Cli/Candidates.lean#L112) | **No response is left open.** When the server program stops before its reply ends, the client's response ends cut too; a malformed reply is a 502 or a cut connection, at once. | [test/fuzz/targets/dev-proxy.mjs](../../test/fuzz/targets/dev-proxy.mjs), [test/dev-proxy.test.mjs](../../test/dev-proxy.test.mjs) |
| [`lean_header_keeps_imports`](Lasm/Cli/Candidates.lean#L123) | **`leanHeader` keeps exactly the source's imports.** Whenever Lean reads a source's header without error, it reads the same imports from `leanHeader` of the source: a build key over the header changes whenever the imports can. | [test/fuzz/targets/project-files.mjs](../../test/fuzz/targets/project-files.mjs) |
| [`import_closure_covers_imports`](Lasm/Cli/Candidates.lean#L131) | **`lasm dev` follows every import.** Whenever Lean reads a source's header without error, `importClosure` reaches the file of every module it imports that the project has: an edit to it rebuilds the outputs that import it. | [test/fuzz/targets/project-files.mjs](../../test/fuzz/targets/project-files.mjs) |
| [`lake_key_total`](Lasm/Cli/Candidates.lean#L140) | **A broken Lake manifest is no reuse, never a crash.** Whatever lake-manifest.json and lakefile.lean hold, `lakeConfigurationKey` answers a key or none; Lake then reports what it cannot read. | [test/fuzz/targets/project-files.mjs](../../test/fuzz/targets/project-files.mjs), [test/application-sources.test.mjs](../../test/application-sources.test.mjs) |
| [`package_readers_clear`](Lasm/Cli/Candidates.lean#L148) | **package.json is read, or refused by name.** Whatever package.json holds, the edge modules are distinct non-empty names, the Supabase function and Fastly service names are ones those platforms accept, and a refusal is a message that names package.json. | [test/fuzz/targets/project-files.mjs](../../test/fuzz/targets/project-files.mjs) |
| [`supabase_route_strips_name`](Lasm/Cli/Candidates.lean#L165) | **Supabase's handler sees the path without the function's name.** For a request whose path is the function's name, or the name and a `/` and more, the handler gets the rest (`/` for the name alone), with the same origin, query, fragment, method, headers and body; any other request reaches it unchanged. | [test/fuzz/targets/edge-request.mjs](../../test/fuzz/targets/edge-request.mjs) |
| [`vercel_identity_drops_encoding`](Lasm/Cli/Candidates.lean#L176) | **Vercel's handler never sees Accept-Encoding, and nothing else changes.** | [test/fuzz/targets/edge-request.mjs](../../test/fuzz/targets/edge-request.mjs) |
| [`retry_delay_bounded`](Lasm/Cli/Candidates.lean#L189) | **Retry delays stay within 75–100 % of the backoff.** For every attempt and every random draw in [0, 1], the delay is between three quarters of the capped doubling backoff and the backoff itself. It stays tested, not proved: the code computes in doubles, and Lean's `Float` operations are opaque to proofs. It holds because IEEE-754 rounding is monotone and exact on `0.75 * b` and `b` (`b` ≤ 60000), so the delay grows with the draw between its values at 0 and 1, which the test checks for every backoff. | [test/managed-download.test.mjs](../../test/managed-download.test.mjs) |
| [`json_string_ascii`](Lasm/Cli/Candidates.lean#L201) | **Escaped strings are printable ASCII JSON for the string.** `json.dumps` of any string, `ensure_ascii`, is printable ASCII, and a JSON parser reads it as that string. Its second half is proved (`json_string_printable`); the first needs facts about Lean's JSON parser (`Lean.Json.parse` of escapes and surrogate pairs) that Lean does not state. | [test/link-driver-python.test.mjs](../../test/link-driver-python.test.mjs) |
| [`json_dumps_parse_back`](Lasm/Cli/Candidates.lean#L209) | **Every layout is JSON for the same value.** Whatever the indentation and key order, what `pythonJsonDumps` writes a JSON parser reads as the value, and without indentation it is one line. | [test/link-driver-python.test.mjs](../../test/link-driver-python.test.mjs) |
| [`lowering_keeps_runs`](Lasm/Cli/Candidates.lean#L224) | **Lowering atomics keeps what one thread computes.** When it lowers a valid module, the lowered module is valid, lowering it again changes nothing, and run on one thread it gives the same result and leaves the same memory. (The lowering refuses, with an error, SIMD and GC instructions, which a valid module may hold.) It stays tested, not proved: `validate` and `run` are WebAssembly's own validation and execution, which a proof needs as a formal semantics of WebAssembly to relate the lowering's model to. | [test/lower-atomics.test.mjs](../../test/lower-atomics.test.mjs) |
| [`lowering_leaves_no_atomics`](Lasm/Cli/Candidates.lean#L234) | **Lowering leaves no atomic instruction.** When it lowers a valid module, the lowered module is valid without the threads feature and lowering it again changes nothing; a module already valid without threads is returned as it is. It stays tested, not proved, for the same reason: `validate` and `validWithoutThreads` are WebAssembly's own validation. | [test/lower-atomics.test.mjs](../../test/lower-atomics.test.mjs) |
| [`lowering_rewrites_atomics`](Lasm/Cli/Candidates.lean#L248) | **Lowering rewrites each atomic and copies everything else.** In a module of any bodies of well-formed instructions, every non-atomic instruction and every local declaration is kept byte for byte, every atomic instruction becomes its documented replacement, and one helper per atomic operation and width follows the functions, numbered in order of first use after the imported and defined ones. Of the model, but not yet proved: its hypotheses are WebAssembly's binary grammar (`oneInstruction`, `localDeclarations`), which a proof needs as a Lean definition the model's `skipInstruction` reads exactly. | [test/lower-atomics.test.mjs](../../test/lower-atomics.test.mjs) |
| [`zip_reads_back`](Lasm/Cli/Candidates.lean#L264) | **What `zip` writes, a ZIP reader reads back.** Whenever `zip` succeeds, a reader finds the parent directories first (sorted, mode `0o40755`, empty, stored), then every entry in order, with its bytes and its permissions as a regular file (`0o644` unless given). | [test/serverless-zip.test.mjs](../../test/serverless-zip.test.mjs) |
<!-- END CANDIDATES -->
