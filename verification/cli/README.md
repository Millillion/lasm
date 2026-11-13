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

**11 proved propositions (69 theorems)**: each proposition below is proved by the theorem of the same name in its library's `Theorems.lean`, and the other theorems are the lemmas their proofs are built from. Every one uses only Lean's standard axioms.

## Lasm.Cli (11)

### The command line

| Proposition | In plain English |
| --- | --- |
| [`response_file_round_trip`](Lasm/Cli/Spec.lean#L26) | **Response files round-trip.** Every list of linker arguments without a newline, carriage return or NUL makes a response file; each argument is one line of it, read back exactly by unquoting it, and no arguments make a file of one empty line. Tested by: test/cli-parse.test.mjs |
| [`run_args_kept`](Lasm/Cli/Spec.lean#L37) | **Application arguments after `--` come back unchanged.** Running a `.lean` file with any of `--rebuild`, `--verbose` and `--release` before it parses as `run` of that file, with exactly the arguments after `--` (flags, empty strings and `--` included) and each option as given. Tested by: test/cli-parse.test.mjs |
| [`unknown_flag_refused`](Lasm/Cli/Spec.lean#L50) | **Every unknown flag is refused by name.** A word that starts with `-` and is no option of `lasm build` or of running a program is refused, after a program and before one, with a message that names it. Tested by: test/cli-parse.test.mjs |
| [`edit_distance_metric`](Lasm/Cli/Spec.lean#L59) | **Edit distance is a metric bounded by the lengths.** It is zero exactly between equal words, symmetric, satisfies the triangle inequality, is the length from or to the empty word, and lies between the difference of the lengths and the larger length (lengths in characters: code points, as the JavaScript spreads each word before it measures it). Tested by: test/cli-parse.test.mjs |
| [`closest_nearest_first`](Lasm/Cli/Spec.lean#L72) | **A suggestion is the nearest candidate, within reach.** For lowercase words, `closest` gives the first candidate at the least edit distance, when that distance is within its threshold (two edits, or a third of its length), and nothing otherwise. Tested by: test/cli-parse.test.mjs |

### Development server

| Proposition | In plain English |
| --- | --- |
| [`changed_files_exact`](Lasm/Cli/Spec.lean#L83) | **`changedFiles` reports exactly the files that differ.** Between two snapshots, it names each file present in only one, or with different hashes, once, and no other. Tested by: test/dev-units.test.mjs |

### The Node host

| Proposition | In plain English |
| --- | --- |
| [`numbers_le64`](Lasm/Cli/Spec.lean#L94) | **`numbers` writes little-endian `UInt64`s.** Each value becomes eight bytes, low byte first, wrapped modulo 2⁶⁴ (a negative value as its two's complement), in order. Tested by: test/lean-io-error-policy.test.mjs |

### Builds

| Proposition | In plain English |
| --- | --- |
| [`builtin_closure`](Lasm/Cli/Spec.lean#L103) | **The builtin closure is the reachable builtins, dependencies first.** For an acyclic import graph, the closure of the requested specifiers holds each builtin reachable from a requested builtin exactly once, nothing else (other specifiers are dropped), and every builtin after those it imports. Tested by: test/builtin-modules.test.mjs |
| [`schedule_reached_kept_first`](Lasm/Cli/Spec.lean#L115) | **A unit's schedule is the kept units it reaches, dependencies first.** For an acyclic call graph (the entries of the JavaScript object `calls`), the schedule of `n` holds each kept unit other than `n` that `n` reaches, exactly once, and every one after the kept units it reaches. Tested by: test/edge-initializers.test.mjs |

### WebAssembly

| Proposition | In plain English |
| --- | --- |
| [`replace_one_core_module`](Lasm/Cli/Spec.lean#L129) | **`replaceCoreModule` replaces exactly the one matching module.** In a component whose only core module section that starts with `pfx` is `pfx ++ tail`, that section becomes `to ++ tail`, and every other section, before or after it, is kept as it was. Tested by: test/wasi-component.test.mjs |
| [`drops_only_component_type`](Lasm/Cli/Spec.lean#L144) | **`withoutComponentType` drops only component-type custom sections.** A module's custom sections named `component-type…` go; every other section, custom or not, stays, in order. Tested by: test/wasi-component.test.mjs |
<!-- END PROPOSITIONS -->

## Candidates

<!-- BEGIN CANDIDATES -->
<!-- Generated from the Candidates.lean files by `node scripts/propositions.mjs --write`; do not edit by hand. -->

**18 candidates**, each a `def … : Prop` in a `Candidates.lean`, checked on generated inputs by the test its `Tested by:` line names (which cites it with a `Proposition:` line), not yet proved.

### Lasm.Cli (18)

| Candidate | In plain English | Tested by |
| --- | --- | --- |
| [`build_options_commute`](Lasm/Cli/Candidates.lean#L35) | **Build options mean the same in any order and either form.** When `lasm build` accepts a set of distinct options with at most one input and no `--help`, it accepts every reordering of them, with any valued option written `--flag=value` instead of `--flag value`, and parses it the same. (`--help` stops at once, before an error after it; two positional words are the input and the output, in that order.) | [test/cli-parse.test.mjs](../../test/cli-parse.test.mjs) |
| [`parse_known_or_refused`](Lasm/Cli/Candidates.lean#L48) | **Every parse is a known command, or a readable error.** Whatever the arguments, the parser either names a command Lasm has, with a build target, an input, `lasm init` templates and deploy targets and `lasm dev` outputs that Lasm has, or refuses with a message that is not blank. | [test/fuzz/targets/cli-arguments.mjs](../../test/fuzz/targets/cli-arguments.mjs) |
| [`launcher_config_round_trip`](Lasm/Cli/Candidates.lean#L65) | **The launcher configuration round-trips.** The native launcher reads back the command and arguments as its argument vector, the environment in order, both directories and the stdio flags, for any text without NUL. | [test/cli-helpers.test.mjs](../../test/cli-helpers.test.mjs) |
| [`mangle_round_trip`](Lasm/Cli/Candidates.lean#L78) | **Mangling round-trips.** For a dotted name Lean mangles unambiguously, the mangled name is a non-empty C identifier, demangling gives the name back, and the module of its initializer (`initialize_…` or `runtime_initialize_…`) is the name. | [test/application-diagnosis.test.mjs](../../test/application-diagnosis.test.mjs) |
| [`compact_wrappers_as_chains`](Lasm/Cli/Candidates.lean#L90) | **The compact wrappers run the kept initializers as the chains do.** For an acyclic plan of valid initializer names, the wrappers are generated, and calling kept initializers' wrappers runs exactly the kept initializers the Node build's chains run, in the same order (each once, after those it reaches). | [test/edge-initializers.test.mjs](../../test/edge-initializers.test.mjs) |
| [`generated_names_valid`](Lasm/Cli/Candidates.lean#L105) | **Generated names are valid npm, Lake and Supabase names.** Whatever the directory or text: the npm package name is lowercase letters, digits, `.`, `_` and `-`, starts with a letter or digit and does not end with `-`; the Lake name is an identifier of ASCII letters, digits and `_` that starts with a letter and does not end with `_`; the Supabase function name is lowercase letters, digits and `-`, starts with a letter and has at most 54 characters. | [test/init-golden.test.mjs](../../test/init-golden.test.mjs) |
| [`static_inside_root`](Lasm/Cli/Candidates.lean#L123) | **No request path reaches a file outside the root.** Whatever the path (`..`, encoded dots and slashes, sibling directories that share the root's name as a prefix), the static server answers 200, 403 or 404, and a file it serves lies under the root directory. | [test/static-server.test.mjs](../../test/static-server.test.mjs) |
| [`lean_at_least_lexicographic`](Lasm/Cli/Candidates.lean#L134) | **Lean versions compare lexicographically.** `leanAtLeast v m` holds exactly when `v`'s major, minor and patch are `m`'s or later in that order, whatever prerelease tag `v` has; a version is at least itself. | [test/lean-io-error-policy.test.mjs](../../test/lean-io-error-policy.test.mjs) |
| [`retry_delay_bounded`](Lasm/Cli/Candidates.lean#L145) | **Retry delays stay within 75–100 % of the backoff.** For every attempt and every random draw in [0, 1], the delay is between three quarters of the capped doubling backoff and the backoff itself. | [test/managed-download.test.mjs](../../test/managed-download.test.mjs) |
| [`json_string_ascii`](Lasm/Cli/Candidates.lean#L155) | **Escaped strings are printable ASCII JSON for the string.** `json.dumps` of any string, `ensure_ascii`, is printable ASCII, and a JSON parser reads it as that string. | [test/link-driver-python.test.mjs](../../test/link-driver-python.test.mjs) |
| [`json_dumps_parse_back`](Lasm/Cli/Candidates.lean#L163) | **Every layout is JSON for the same value.** Whatever the indentation and key order, what `pythonJsonDumps` writes a JSON parser reads as the value, and without indentation it is one line. | [test/link-driver-python.test.mjs](../../test/link-driver-python.test.mjs) |
| [`python_order_code_points`](Lasm/Cli/Candidates.lean#L173) | **Python's string order is the order of code points.** The sign of `comparePythonStrings a b` is that of comparing `a` and `b` code point by code point (a prefix first), as Python orders `str`, unlike JavaScript's UTF-16 order. | [test/link-driver-python.test.mjs](../../test/link-driver-python.test.mjs) |
| [`lowering_keeps_runs`](Lasm/Cli/Candidates.lean#L182) | **Lowering atomics keeps what one thread computes.** For a valid module, the lowered module is valid, lowering it again changes nothing, and run on one thread it gives the same result and leaves the same memory. | [test/lower-atomics.test.mjs](../../test/lower-atomics.test.mjs) |
| [`lowering_leaves_no_atomics`](Lasm/Cli/Candidates.lean#L191) | **Lowering leaves no atomic instruction.** For a valid module, the lowered module is valid without the threads feature and lowering it again changes nothing; a module already valid without threads is returned as it is. | [test/lower-atomics.test.mjs](../../test/lower-atomics.test.mjs) |
| [`lowering_rewrites_atomics`](Lasm/Cli/Candidates.lean#L203) | **Lowering rewrites each atomic and copies everything else.** In a module of any bodies of well-formed instructions, every non-atomic instruction and every local declaration is kept byte for byte, every atomic instruction becomes its documented replacement, and one helper per atomic operation and width follows the functions, numbered in order of first use after the imported and defined ones. | [test/lower-atomics.test.mjs](../../test/lower-atomics.test.mjs) |
| [`componentize_inverse`](Lasm/Cli/Candidates.lean#L216) | **A component splices the core module and gives it back.** For a core module, extracting the core of its component gives the module, and making the template from the component and the module gives the shipped template. | [test/wasi-component.test.mjs](../../test/wasi-component.test.mjs) |
| [`zip_reads_back`](Lasm/Cli/Candidates.lean#L227) | **What `zip` writes, a ZIP reader reads back.** Whenever `zip` succeeds, a reader finds the parent directories first (sorted, mode `0o40755`, empty, stored), then every entry in order, with its bytes and its permissions as a regular file (`0o644` unless given). | [test/serverless-zip.test.mjs](../../test/serverless-zip.test.mjs) |
| [`zip_deterministic`](Lasm/Cli/Candidates.lean#L240) | **`zip` is deterministic.** The archive depends on the entries alone (no clock, no host state). Stated of a Lean function this holds by `rfl`; it is the assumption a model of `zip` makes, which the test checks of the JavaScript. | [test/serverless-zip.test.mjs](../../test/serverless-zip.test.mjs) |
<!-- END CANDIDATES -->
