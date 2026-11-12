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
- [Lasm/Cli/Candidates.lean](Lasm/Cli/Candidates.lean): the propositions,
  each a `def … : Prop` with a plain-English doc comment and a `Tested by:`
  line. The test it names cites it (`// Proposition: Lasm.Cli.Candidates.…`
  and the statement, verbatim) and checks the statement on every input it
  draws.

**How one becomes a theorem.** Replace the `opaque` constants it mentions by
a Lean model of the JavaScript, function for function, checked against the
JavaScript by a model differential in CI (as
[library/Lasm/Serverless/Proofs/Model.lean](../../library/Lasm/Serverless/Proofs/Model.lean)
is for `src/serverless/`); then prove the statement, unchanged, about the
model. What stays unproved is exactly "this JavaScript implements the
model", the step a move into Lean removes
([docs/proposals/IRREDUCIBLE.md](../../docs/proposals/IRREDUCIBLE.md) M4, M6).

**Checks.** `node scripts/propositions.mjs` (every pull request, through
`test/propositions.test.mjs`) checks every citation against its definition
and every `Tested by:` line against its test, and keeps the list below
current (`--write` rewrites it). `node scripts/library-proofs.mjs`
(`library-proofs.yml`) elaborates both files with the managed Lean 4.35.0.

## Candidates

<!-- BEGIN CANDIDATES -->
<!-- Generated from the Candidates.lean files by `node scripts/propositions.mjs --write`; do not edit by hand. -->

**29 candidates**, each a `def … : Prop` in a `Candidates.lean`, checked on generated inputs by the test its `Tested by:` line names (which cites it with a `Proposition:` line), not yet proved.

### Lasm.Cli (29)

| Candidate | In plain English | Tested by |
| --- | --- | --- |
| [`run_args_kept`](Lasm/Cli/Candidates.lean#L33) | **Application arguments after `--` come back unchanged.** Running a `.lean` file with any of `--rebuild`, `--verbose` and `--release` before it parses as `run` of that file, with exactly the arguments after `--` (flags, empty strings and `--` included) and each option as given. | [test/cli-parse.test.mjs](../../test/cli-parse.test.mjs) |
| [`build_options_commute`](Lasm/Cli/Candidates.lean#L46) | **Build options mean the same in any order and either form.** When `lasm build` accepts a set of distinct options, it accepts every reordering of them, with any valued option written `--flag=value` instead of `--flag value`, and parses it the same. | [test/cli-parse.test.mjs](../../test/cli-parse.test.mjs) |
| [`unknown_flag_refused`](Lasm/Cli/Candidates.lean#L57) | **Every unknown flag is refused by name.** A word that starts with `-` and is no option of `lasm build` or of running a program is refused, after a program and before one, with a message that names it. | [test/cli-parse.test.mjs](../../test/cli-parse.test.mjs) |
| [`parse_known_or_refused`](Lasm/Cli/Candidates.lean#L67) | **Every parse is a known command, or a readable error.** Whatever the arguments, the parser either names a command Lasm has, with a build target, an input, `lasm init` templates and deploy targets and `lasm dev` outputs that Lasm has, or refuses with a message that is not blank. | [test/fuzz/targets/cli-arguments.mjs](../../test/fuzz/targets/cli-arguments.mjs) |
| [`edit_distance_metric`](Lasm/Cli/Candidates.lean#L83) | **Edit distance is a metric bounded by the lengths.** It is zero exactly between equal words, symmetric, satisfies the triangle inequality, is the length from or to the empty word, and lies between the difference of the lengths and the larger length. | [test/cli-parse.test.mjs](../../test/cli-parse.test.mjs) |
| [`closest_nearest_first`](Lasm/Cli/Candidates.lean#L95) | **A suggestion is the nearest candidate, within reach.** For lowercase words, `closest` gives the first candidate at the least edit distance, when that distance is within its threshold (two edits, or a third of its length), and nothing otherwise. | [test/cli-parse.test.mjs](../../test/cli-parse.test.mjs) |
| [`response_file_round_trip`](Lasm/Cli/Candidates.lean#L103) | **Response files round-trip.** Every linker argument without a newline or NUL is one line of the response file, read back exactly by unquoting it; no arguments make a file of one empty line. | [test/cli-parse.test.mjs](../../test/cli-parse.test.mjs) |
| [`launcher_config_round_trip`](Lasm/Cli/Candidates.lean#L114) | **The launcher configuration round-trips.** The native launcher reads back the command and arguments as its argument vector, the environment in order, both directories and the stdio flags, for any text without NUL. | [test/cli-helpers.test.mjs](../../test/cli-helpers.test.mjs) |
| [`mangle_round_trip`](Lasm/Cli/Candidates.lean#L127) | **Mangling round-trips.** For a dotted name Lean mangles unambiguously, the mangled name is a non-empty C identifier, demangling gives the name back, and the module of its initializer (`initialize_…` or `runtime_initialize_…`) is the name. | [test/application-diagnosis.test.mjs](../../test/application-diagnosis.test.mjs) |
| [`builtin_closure`](Lasm/Cli/Candidates.lean#L139) | **The builtin closure is the reachable builtins, dependencies first.** For an acyclic import graph, the closure of the requested specifiers holds each builtin reachable from a requested builtin exactly once, nothing else (other specifiers are dropped), and every builtin after those it imports. | [test/builtin-modules.test.mjs](../../test/builtin-modules.test.mjs) |
| [`compact_wrappers_as_chains`](Lasm/Cli/Candidates.lean#L151) | **The compact wrappers run the kept initializers as the chains do.** For an acyclic plan of valid initializer names, calling kept initializers' wrappers runs exactly the kept initializers the Node build's chains run, in the same order (each once, after those it reaches). | [test/edge-initializers.test.mjs](../../test/edge-initializers.test.mjs) |
| [`schedule_reached_kept_first`](Lasm/Cli/Candidates.lean#L162) | **A unit's schedule is the kept units it reaches, dependencies first.** For an acyclic call graph, the schedule of `n` holds each kept unit other than `n` that `n` reaches, exactly once, and every one after the kept units it reaches. | [test/edge-initializers.test.mjs](../../test/edge-initializers.test.mjs) |
| [`generated_names_valid`](Lasm/Cli/Candidates.lean#L178) | **Generated names are valid npm, Lake and Supabase names.** Whatever the directory or text: the npm package name is lowercase letters, digits, `.`, `_` and `-`, starts with a letter or digit and does not end with `-`; the Lake name is an identifier of ASCII letters, digits and `_` that starts with a letter and does not end with `_`; the Supabase function name is lowercase letters, digits and `-`, starts with a letter and has at most 54 characters. | [test/init-golden.test.mjs](../../test/init-golden.test.mjs) |
| [`changed_files_exact`](Lasm/Cli/Candidates.lean#L195) | **`changedFiles` reports exactly the files that differ.** Between two snapshots, it names each file present in only one, or with different hashes, once, and no other. | [test/dev-units.test.mjs](../../test/dev-units.test.mjs) |
| [`static_inside_root`](Lasm/Cli/Candidates.lean#L205) | **No request path reaches a file outside the root.** Whatever the path (`..`, encoded dots and slashes, sibling directories that share the root's name as a prefix), the static server answers 200, 403 or 404, and a file it serves lies under the root directory. | [test/static-server.test.mjs](../../test/static-server.test.mjs) |
| [`lean_at_least_lexicographic`](Lasm/Cli/Candidates.lean#L216) | **Lean versions compare lexicographically.** `leanAtLeast v m` holds exactly when `v`'s major, minor and patch are `m`'s or later in that order, whatever prerelease tag `v` has; a version is at least itself. | [test/lean-io-error-policy.test.mjs](../../test/lean-io-error-policy.test.mjs) |
| [`numbers_le64`](Lasm/Cli/Candidates.lean#L225) | **`numbers` writes little-endian `UInt64`s.** Each value becomes eight bytes, low byte first, wrapped modulo 2⁶⁴ (a negative value as its two's complement), in order. | [test/lean-io-error-policy.test.mjs](../../test/lean-io-error-policy.test.mjs) |
| [`retry_delay_bounded`](Lasm/Cli/Candidates.lean#L234) | **Retry delays stay within 75–100 % of the backoff.** For every attempt and every random draw in [0, 1], the delay is between three quarters of the capped doubling backoff and the backoff itself. | [test/managed-download.test.mjs](../../test/managed-download.test.mjs) |
| [`json_string_ascii`](Lasm/Cli/Candidates.lean#L244) | **Escaped strings are printable ASCII JSON for the string.** `json.dumps` of any string, `ensure_ascii`, is printable ASCII, and a JSON parser reads it as that string. | [test/link-driver-python.test.mjs](../../test/link-driver-python.test.mjs) |
| [`json_dumps_parse_back`](Lasm/Cli/Candidates.lean#L252) | **Every layout is JSON for the same value.** Whatever the indentation and key order, what `pythonJsonDumps` writes a JSON parser reads as the value, and without indentation it is one line. | [test/link-driver-python.test.mjs](../../test/link-driver-python.test.mjs) |
| [`python_order_code_points`](Lasm/Cli/Candidates.lean#L262) | **Python's string order is the order of code points.** The sign of `comparePythonStrings a b` is that of comparing `a` and `b` code point by code point (a prefix first), as Python orders `str`, unlike JavaScript's UTF-16 order. | [test/link-driver-python.test.mjs](../../test/link-driver-python.test.mjs) |
| [`lowering_keeps_runs`](Lasm/Cli/Candidates.lean#L271) | **Lowering atomics keeps what one thread computes.** For a valid module, the lowered module is valid, lowering it again changes nothing, and run on one thread it gives the same result and leaves the same memory. | [test/lower-atomics.test.mjs](../../test/lower-atomics.test.mjs) |
| [`lowering_leaves_no_atomics`](Lasm/Cli/Candidates.lean#L280) | **Lowering leaves no atomic instruction.** For a valid module, the lowered module is valid without the threads feature and lowering it again changes nothing; a module already valid without threads is returned as it is. | [test/lower-atomics.test.mjs](../../test/lower-atomics.test.mjs) |
| [`lowering_rewrites_atomics`](Lasm/Cli/Candidates.lean#L292) | **Lowering rewrites each atomic and copies everything else.** In a module of any bodies of well-formed instructions, every non-atomic instruction and every local declaration is kept byte for byte, every atomic instruction becomes its documented replacement, and one helper per atomic operation and width follows the functions, numbered in order of first use after the imported and defined ones. | [test/lower-atomics.test.mjs](../../test/lower-atomics.test.mjs) |
| [`componentize_inverse`](Lasm/Cli/Candidates.lean#L305) | **A component splices the core module and gives it back.** For a core module, extracting the core of its component gives the module, and making the template from the component and the module gives the shipped template. | [test/wasi-component.test.mjs](../../test/wasi-component.test.mjs) |
| [`replace_one_core_module`](Lasm/Cli/Candidates.lean#L314) | **`replaceCoreModule` replaces exactly the one matching module.** In a component whose only core module section that starts with `pfx` is `pfx ++ tail`, that section becomes `to ++ tail`, and every other section, before or after it, is kept as it was. | [test/wasi-component.test.mjs](../../test/wasi-component.test.mjs) |
| [`drops_only_component_type`](Lasm/Cli/Candidates.lean#L328) | **`withoutComponentType` drops only component-type custom sections.** A module's custom sections named `component-type…` go; every other section, custom or not, stays, in order. | [test/wasi-component.test.mjs](../../test/wasi-component.test.mjs) |
| [`zip_reads_back`](Lasm/Cli/Candidates.lean#L340) | **What `zip` writes, a ZIP reader reads back.** Whenever `zip` succeeds, a reader finds the parent directories first (sorted, mode `0o40755`, empty, stored), then every entry in order, with its bytes and its permissions as a regular file (`0o644` unless given). | [test/serverless-zip.test.mjs](../../test/serverless-zip.test.mjs) |
| [`zip_deterministic`](Lasm/Cli/Candidates.lean#L353) | **`zip` is deterministic.** The archive depends on the entries alone (no clock, no host state). Stated of a Lean function this holds by `rfl`; it is the assumption a model of `zip` makes, which the test checks of the JavaScript. | [test/serverless-zip.test.mjs](../../test/serverless-zip.test.mjs) |
<!-- END CANDIDATES -->
