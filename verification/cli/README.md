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
- [Lasm/Cli/Glue.lean](Lasm/Cli/Glue.lean), run by
  [LasmGlue.lean](LasmGlue.lean): the CLI's glue program, the models that
  moved into the CLI (milestone M6,
  [docs/proposals/M6_GLUE.md](../../docs/proposals/M6_GLUE.md)). Lasm
  compiles it to `src/glue/lasm-glue.wasm` (`glue.yml`), and the CLI runs it
  in place of the JavaScript it modelled (`src/edge/edge-initializers.mjs`
  first). Where a model is too slow to run as is,
  [Lasm/Cli/Fast/](Lasm/Cli/Fast) has a fast version with a `csimp` theorem
  that it equals the model, so the compiled program is the model by a proved
  rewrite.
- [Lasm/Serverless/](Lasm/Serverless): the function platforms' request and
  response mapping (src/serverless/): a model, function for function, of
  `lasm-lambda.mjs` and `lasm-function.mjs`
  ([Proofs/Model.lean](Lasm/Serverless/Proofs/Model.lean)), the propositions
  proved of it ([Spec.lean](Lasm/Serverless/Spec.lean), with
  [Theorems.lean](Lasm/Serverless/Theorems.lean)) and its candidate. The
  serverless-http fuzz target checks the JavaScript against the model on every
  input; Node's base64, `Date.parse` and the platforms themselves are left
  outside it. It was the library namespace `Lasm.Serverless` until 2026-11-16,
  when it moved here: it has no runtime API (API_DECISIONS.md A23).
- [Lasm/RequestPath/](Lasm/RequestPath): the request-path model: how a
  server reads a URL's path (split at `/` and `\`, dot segments resolved as
  a browser resolves them, percent-decoded) and query
  ([Model.lean](Lasm/RequestPath/Model.lean)), the proposition proved of it
  ([Spec.lean](Lasm/RequestPath/Spec.lean), with
  [Theorems.lean](Lasm/RequestPath/Theorems.lean)) and its candidates, which
  [test/library-proofs/RequestPath.lean](../../test/library-proofs/RequestPath.lean)
  checks on generated URLs (`lean --run`, from `scripts/library-proofs.mjs`).
  It is the pure request model of the HTTP handler library Lasm's library
  shipped until 0.9.0, moved here when that library was removed
  (docs/api/decisions/0.2.md, A45): nothing in Lasm runs it now; it is the
  specification an application's own path handling can be held to.
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

**51 proved propositions (414 theorems)**: each proposition below is proved by the theorem of the same name in its library's `Theorems.lean`, and the other theorems are the lemmas their proofs are built from. Every one uses only Lean's standard axioms.

## Lasm.Cli (30)

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
| [`inside_directory_prefix`](Lasm/Cli/Spec.lean#L111) | **A path is inside a directory exactly when its segments extend the directory's.** For POSIX paths resolved against the working directory, `insideDirectory` holds exactly when the resolved directory's segments are a prefix of the resolved file's: `..`, `.`, doubled and trailing slashes and names that share a prefix (`a`, `ab`, `..a`) are read as path segments. Tested by: test/cli-parse.test.mjs |

### `lasm init` names

| Proposition | In plain English |
| --- | --- |
| [`generated_names_valid`](Lasm/Cli/Spec.lean#L123) | **Generated names are valid npm, Lake and Supabase names.** Whatever the directory or text: the npm package name is lowercase letters, digits, `.`, `_` and `-`, starts with a letter or digit and does not end with `-`; the Lake name is an identifier of ASCII letters, digits and `_` that starts with a letter and does not end with `_`; the Supabase function name is lowercase letters, digits and `-`, starts with a letter and has at most 54 characters. Tested by: test/init-golden.test.mjs |

### Development server

| Proposition | In plain English |
| --- | --- |
| [`changed_files_exact`](Lasm/Cli/Spec.lean#L143) | **`changedFiles` reports exactly the files that differ.** Between two snapshots, it names each file present in only one, or with different hashes, once, and no other. Tested by: test/dev-units.test.mjs |
| [`static_inside_root`](Lasm/Cli/Spec.lean#L152) | **No request path reaches a file outside the root.** Whatever the path (`..`, encoded dots and slashes, sibling directories that share the root's name as a prefix, malformed percent-encoding), whatever files exist and whatever the client accepts, the static server answers 200, 400, 403 or 404, and a file it serves lies under the root directory: the root is a resolved directory (not a file) and the fallback page, if any, a name in it. Tested by: test/static-server.test.mjs |

### The Node host

| Proposition | In plain English |
| --- | --- |
| [`numbers_le64`](Lasm/Cli/Spec.lean#L167) | **`numbers` writes little-endian `UInt64`s.** Each value becomes eight bytes, low byte first, wrapped modulo 2⁶⁴ (a negative value as its two's complement), in order. Tested by: test/lean-io-error-policy.test.mjs |
| [`lean_at_least_lexicographic`](Lasm/Cli/Spec.lean#L174) | **Lean versions compare lexicographically.** `leanAtLeast v m` holds exactly when `v`'s major, minor and patch are `m`'s or later in that order, whatever prerelease tag `v` has; a version is at least itself. Tested by: test/lean-io-error-policy.test.mjs |

### Builds

| Proposition | In plain English |
| --- | --- |
| [`builtin_closure`](Lasm/Cli/Spec.lean#L185) | **The builtin closure is the reachable builtins, dependencies first.** For an acyclic import graph, the closure of the requested specifiers holds each builtin reachable from a requested builtin exactly once, nothing else (other specifiers are dropped), and every builtin after those it imports. Tested by: test/builtin-modules.test.mjs |
| [`schedule_reached_kept_first`](Lasm/Cli/Spec.lean#L197) | **A unit's schedule is the kept units it reaches, dependencies first.** For an acyclic call graph (the entries of the JavaScript object `calls`), the schedule of `n` holds each kept unit other than `n` that `n` reaches, exactly once, and every one after the kept units it reaches. Tested by: test/edge-initializers.test.mjs |
| [`mangle_round_trip`](Lasm/Cli/Spec.lean#L209) | **Mangling round-trips.** For every dotted name (a component of decimal digits without a leading zero is a numeric component, as in `_private.M.0.f`), the mangled name is a non-empty C identifier, demangling gives the name back, and the module of its initializer (`initialize_…` or `runtime_initialize_…`) is the name. Tested by: test/application-diagnosis.test.mjs |
| [`link_map_static_sound`](Lasm/Cli/Spec.lean#L222) | **A static application has no evidence of runtime evaluation.** When the reader accepts a linker map and calls the application static, no row of the map names a dynamic loader or symbol lookup, and every section it kept from Lean's C++ library (`libleancpp.a`) is read-only data or belongs to an initialization-free inline helper; it is static exactly when it lists no dynamic symbol and no C++ member. Tested by: test/application-reachability.test.mjs |
| [`closure_reached`](Lasm/Cli/Spec.lean#L238) | **The initializer closure is the units the roots reach, once each.** Whatever the calls (cycles, calls to units outside the map, repeated roots), `initializerClosure` lists each unit reached from a root through initializer calls exactly once, and nothing else. Tested by: test/application-initialization.test.mjs |

### The file worker

| Proposition | In plain English |
| --- | --- |
| [`file_message_transfers`](Lasm/Cli/Spec.lean#L250) | **The transfer list names each buffer once, and only when moving.** `postMessage` refuses a transfer list that names a buffer twice: whatever the message (the same allocation reached as a buffer and as a view, nested arrays and records), `encodeFileMessage` lists each buffer it transfers once, and without `move` it transfers none. Tested by: test/native-file-message.test.mjs |

### The link driver's Python semantics

| Proposition | In plain English |
| --- | --- |
| [`json_string_printable`](Lasm/Cli/Spec.lean#L262) | **Escaped strings are printable ASCII.** `json.dumps` of any string, `ensure_ascii`, is printable ASCII: quotes, escapes, hexadecimal digits and the printable characters themselves. Tested by: test/link-driver-python.test.mjs |
| [`python_order_code_points`](Lasm/Cli/Spec.lean#L269) | **Python's string order is the order of code points.** The sign of `comparePythonStrings a b` is that of comparing `a` and `b` code point by code point (a prefix first), as Python orders `str`, unlike JavaScript's UTF-16 order. Tested by: test/link-driver-python.test.mjs |

### WebAssembly

| Proposition | In plain English |
| --- | --- |
| [`replace_one_core_module`](Lasm/Cli/Spec.lean#L279) | **`replaceCoreModule` replaces exactly the one matching module.** In a component whose only core module section that starts with `pfx` is `pfx ++ tail`, that section becomes `to ++ tail`, and every other section, before or after it, is kept as it was. Tested by: test/wasi-component.test.mjs |
| [`componentize_inverse`](Lasm/Cli/Spec.lean#L294) | **A component splices the core module and gives it back.** In a template whose one core module that starts with the placeholder is the placeholder followed by `tail` (as the shipped template is: the test checks it), `componentize` splices in any core that begins no other core module; `extractCore` gives the core back, and `makeTemplate` the template. Tested by: test/wasi-component.test.mjs |
| [`drops_only_component_type`](Lasm/Cli/Spec.lean#L307) | **`withoutComponentType` drops only component-type custom sections.** A module's custom sections named `component-type…` go; every other section, custom or not, stays, in order. Tested by: test/wasi-component.test.mjs |

### The process launcher

| Proposition | In plain English |
| --- | --- |
| [`launcher_config_round_trip`](Lasm/Cli/Spec.lean#L318) | **The launcher configuration round-trips.** For options whose texts have no NUL byte and fit the format (under 4 GiB), `encodeProcessConfiguration` succeeds and the native launcher reads back exactly the flags, the three stdio flags, both directories, the command and arguments as its argument vector, and the environment's pairs in order (as UTF-8 bytes). Tested by: test/cli-helpers.test.mjs |

### Lasm.JS's framing

| Proposition | In plain English |
| --- | --- |
| [`events_read_back`](Lasm/Cli/Spec.lean#L336) | **A batch of interop events reads back.** Whatever events the host queues (within the format's bounds), `encodeEvents` writes the first 1024 and leaves the rest queued, and the C glue reads exactly those events, in order, from the batch; a batch followed by other bytes reads as its events followed by what those bytes read as (so the glue stops only at a malformed event of its own). Tested by: test/lasm-js-framing.test.mjs |
| [`request_read_back`](Lasm/Cli/Spec.lean#L348) | **A request's released handles and payload read back.** For any handles (32-bit, fewer than 2³²) and any payload, the host splits the request the C glue frames into exactly those handles and that payload. Tested by: test/lasm-js-framing.test.mjs |
| [`into_read_back`](Lasm/Cli/Spec.lean#L357) | **The promise a call settles reads back.** For any 64-bit Lean promise and any input, the host reads the promise and the input from the payload the C glue frames. Tested by: test/lasm-js-framing.test.mjs |

### Host handles

| Proposition | In plain English |
| --- | --- |
| [`handle_fresh_in_range`](Lasm/Cli/Spec.lean#L367) | **A host handle is fresh and in range.** When `allocate` gives an id, the table did not hold it and now holds it, with the value, after every entry it had, and the range stays; the id lies in the range, and `#next` stays in it, whenever `#next` was in it (as the constructor starts it). Tested by: test/handle-table.test.mjs |

### Function packages

| Proposition | In plain English |
| --- | --- |
| [`zip_deterministic`](Lasm/Cli/Spec.lean#L379) | **`zip` is deterministic.** The archive depends on the entries alone (no clock, no host state). Of the model, a Lean function, this holds by `rfl`; it is the assumption the model makes, which the test checks of the JavaScript. Tested by: test/serverless-zip.test.mjs |

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
| [`host_url`](Lasm/Serverless/Spec.lean#L92) | **A plain Host cannot move the path.** A server that builds its URL from the Host field and the target (`http://` + host + target, as Hono's Node adapter and Node.serve do) reads back exactly that host and that target, for every plain host and every target that starts with `/`. Together with `host_once` and `target_split`: no client can change the path or query a server sees through Host (`Host: x/admin#` once made `/public` read as `/admin` in Lasm's former HTTP library). |

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

## Lasm.RequestPath (1)

### Request paths

| Proposition | In plain English |
| --- | --- |
| [`segments_no_dot_segments`](Lasm/RequestPath/Spec.lean#L22) | **No path segment is `.` or `..`.** Whatever the request's URL (including escaped forms such as `%2e%2E`), no segment of `r.segments` is `.` or `..`: a handler that maps segments to files or keys never sees a parent reference. |
<!-- END PROPOSITIONS -->

## Candidates

<!-- BEGIN CANDIDATES -->
<!-- Generated from the Candidates.lean files by `node scripts/propositions.mjs --write`; do not edit by hand. -->

**23 candidates**, each a `def … : Prop` in a `Candidates.lean`, checked on generated inputs by the test its `Tested by:` line names (which cites it with a `Proposition:` line), not yet proved.

### Lasm.Cli (20)

| Candidate | In plain English | Tested by |
| --- | --- | --- |
| [`compact_wrappers_as_chains`](Lasm/Cli/Candidates.lean#L35) | **The compact wrappers run the kept initializers as the chains do.** For an acyclic plan of valid initializer names, the wrappers are generated, and calling kept initializers' wrappers runs exactly the kept initializers the Node build's chains run, in the same order (each once, after those it reaches). | [test/edge-initializers.test.mjs](../../test/edge-initializers.test.mjs) |
| [`dev_proxy_forwards_once`](Lasm/Cli/Candidates.lean#L50) | **The proxy sends each request to the server program once, unchanged.** Whatever the server program then does, it receives the request exactly once, with the same method, target and body, its own address as Host, no Accept-Encoding (so a page arrives uncompressed and can be rewritten), and every other header's value. A request is never sent again once the program may have seen it; only a refused connection is retried. | [test/fuzz/targets/dev-proxy.mjs](../../test/fuzz/targets/dev-proxy.mjs) |
| [`dev_proxy_relays_reply`](Lasm/Cli/Candidates.lean#L60) | **A whole reply reaches the client whole.** Its status and headers (a page's `Cache-Control` is `no-store`), and its body byte for byte, or a page's with the reload client inserted (`relayedBody`), in any charset. | [test/fuzz/targets/dev-proxy.mjs](../../test/fuzz/targets/dev-proxy.mjs) |
| [`dev_proxy_ends_failed_replies`](Lasm/Cli/Candidates.lean#L70) | **No response is left open.** When the server program stops before its reply ends, the client's response ends cut too; a malformed reply is a 502 or a cut connection, at once. | [test/fuzz/targets/dev-proxy.mjs](../../test/fuzz/targets/dev-proxy.mjs), [test/dev-proxy.test.mjs](../../test/dev-proxy.test.mjs) |
| [`lean_header_keeps_imports`](Lasm/Cli/Candidates.lean#L81) | **`leanHeader` keeps exactly the source's imports.** Whenever Lean reads a source's header without error, it reads the same imports from `leanHeader` of the source: a build key over the header changes whenever the imports can. | [test/fuzz/targets/project-files.mjs](../../test/fuzz/targets/project-files.mjs) |
| [`import_closure_covers_imports`](Lasm/Cli/Candidates.lean#L90) | **`lasm dev` follows every import.** Whenever Lean reads a source's header without error, `importClosure` reaches the file of every module it imports that the project has: an edit to it rebuilds the outputs that import it. | [test/fuzz/targets/project-files.mjs](../../test/fuzz/targets/project-files.mjs) |
| [`lake_key_total`](Lasm/Cli/Candidates.lean#L99) | **A broken Lake manifest is no reuse, never a crash.** Whatever lake-manifest.json and lakefile.lean hold, `lakeConfigurationKey` answers a key or none; Lake then reports what it cannot read. | [test/fuzz/targets/project-files.mjs](../../test/fuzz/targets/project-files.mjs), [test/application-sources.test.mjs](../../test/application-sources.test.mjs) |
| [`package_readers_clear`](Lasm/Cli/Candidates.lean#L107) | **package.json is read, or refused by name.** Whatever package.json holds, the edge modules are distinct non-empty names, the Supabase function and Fastly service names are ones those platforms accept, and a refusal is a message that names package.json. | [test/fuzz/targets/project-files.mjs](../../test/fuzz/targets/project-files.mjs) |
| [`supabase_route_strips_name`](Lasm/Cli/Candidates.lean#L124) | **Supabase's handler sees the path without the function's name.** For a request whose path is the function's name, or the name and a `/` and more, the handler gets the rest (`/` for the name alone), with the same origin, query, fragment, method, headers and body; any other request reaches it unchanged. | [test/fuzz/targets/edge-request.mjs](../../test/fuzz/targets/edge-request.mjs) |
| [`vercel_identity_drops_encoding`](Lasm/Cli/Candidates.lean#L135) | **Vercel's handler never sees Accept-Encoding, and nothing else changes.** | [test/fuzz/targets/edge-request.mjs](../../test/fuzz/targets/edge-request.mjs) |
| [`retry_delay_bounded`](Lasm/Cli/Candidates.lean#L148) | **Retry delays stay within 75–100 % of the backoff.** For every attempt and every random draw in [0, 1], the delay is between three quarters of the capped doubling backoff and the backoff itself. It stays tested, not proved: the code computes in doubles, and Lean's `Float` operations are opaque to proofs. It holds because IEEE-754 rounding is monotone and exact on `0.75 * b` and `b` (`b` ≤ 60000), so the delay grows with the draw between its values at 0 and 1, which the test checks for every backoff. | [test/managed-download.test.mjs](../../test/managed-download.test.mjs) |
| [`json_string_ascii`](Lasm/Cli/Candidates.lean#L160) | **Escaped strings are printable ASCII JSON for the string.** `json.dumps` of any string, `ensure_ascii`, is printable ASCII, and a JSON parser reads it as that string. Its second half is proved (`json_string_printable`); the first needs facts about Lean's JSON parser (`Lean.Json.parse` of escapes and surrogate pairs) that Lean does not state. | [test/link-driver-python.test.mjs](../../test/link-driver-python.test.mjs) |
| [`json_dumps_parse_back`](Lasm/Cli/Candidates.lean#L168) | **Every layout is JSON for the same value.** Whatever the indentation and key order, what `pythonJsonDumps` writes a JSON parser reads as the value, and without indentation it is one line. | [test/link-driver-python.test.mjs](../../test/link-driver-python.test.mjs) |
| [`lowering_keeps_runs`](Lasm/Cli/Candidates.lean#L183) | **Lowering atomics keeps what one thread computes.** When it lowers a valid module, the lowered module is valid, lowering it again changes nothing, and run on one thread it gives the same result and leaves the same memory. (The lowering refuses, with an error, SIMD and GC instructions, which a valid module may hold.) It stays tested, not proved: `validate` and `run` are WebAssembly's own validation and execution, which a proof needs as a formal semantics of WebAssembly to relate the lowering's model to. | [test/lower-atomics.test.mjs](../../test/lower-atomics.test.mjs) |
| [`lowering_leaves_no_atomics`](Lasm/Cli/Candidates.lean#L193) | **Lowering leaves no atomic instruction.** When it lowers a valid module, the lowered module is valid without the threads feature and lowering it again changes nothing; a module already valid without threads is returned as it is. It stays tested, not proved, for the same reason: `validate` and `validWithoutThreads` are WebAssembly's own validation. | [test/lower-atomics.test.mjs](../../test/lower-atomics.test.mjs) |
| [`lowering_rewrites_atomics`](Lasm/Cli/Candidates.lean#L207) | **Lowering rewrites each atomic and copies everything else.** In a module of any bodies of well-formed instructions, every non-atomic instruction and every local declaration is kept byte for byte, every atomic instruction becomes its documented replacement, and one helper per atomic operation and width follows the functions, numbered in order of first use after the imported and defined ones. Of the model, but not yet proved: its hypotheses are WebAssembly's binary grammar (`oneInstruction`, `localDeclarations`), which a proof needs as a Lean definition the model's `skipInstruction` reads exactly. | [test/lower-atomics.test.mjs](../../test/lower-atomics.test.mjs) |
| [`zip_reads_back`](Lasm/Cli/Candidates.lean#L223) | **What `zip` writes, a ZIP reader reads back.** Whenever `zip` succeeds, a reader finds the parent directories first (sorted, mode `0o40755`, empty, stored), then every entry in order, with its bytes and its permissions as a regular file (`0o644` unless given). | [test/serverless-zip.test.mjs](../../test/serverless-zip.test.mjs) |
| [`glue_fields_round_trip`](Lasm/Cli/Candidates.lean#L237) | **The glue's fields round-trip.** Any list of fields, encoded as the glue program reads its request, is read back exactly as the same list, whatever the fields hold (digits, `:`, line ends, non-ASCII, nothing). | [test/glue.test.mjs](../../test/glue.test.mjs) |
| [`glue_request_fields`](Lasm/Cli/Candidates.lean#L244) | **A glue request carries its fields.** Lists of fields, encoded as a request, carry exactly their fields in order, whichever format the encoding chose (a table of distinct fields, or lengths when a field holds a 0 byte). | [test/glue.test.mjs](../../test/glue.test.mjs) |
| [`origin_form_url`](Lasm/Cli/Candidates.lean#L255) | **An origin-form target is the URL's path and query; only a plain Host is its authority.** For a target that starts with `/` (printable ASCII without `#`, space or backslash), `requestUrl` answers a URL that ends with the target, whose host is the Host field's when that is plain and parses as an authority, and the fallback's otherwise. | [test/node-serve.test.mjs](../../test/node-serve.test.mjs) |

### Lasm.RequestPath (2)

| Candidate | In plain English | Tested by |
| --- | --- | --- |
| [`segments_nonempty`](Lasm/RequestPath/Candidates.lean#L19) | **No path segment is empty.** Whatever the request's URL (`//`, a trailing `/`, escapes that decode to nothing printable), no segment of `r.segments` is the empty string. | [test/library-proofs/RequestPath.lean](../../test/library-proofs/RequestPath.lean) |
| [`percent_round_trip`](Lasm/RequestPath/Candidates.lean#L26) | **A server decodes what a Lasm.UI page encodes.** For every string, the model's `percentDecode` reads `Lasm.UI.Url.percentEncode`'s output back as that string: a path segment or query value a page builds reaches a server that decodes as the model does unchanged. | [test/library-proofs/RequestPath.lean](../../test/library-proofs/RequestPath.lean) |

### Lasm.Serverless (1)

| Candidate | In plain English | Tested by |
| --- | --- | --- |
| [`join_cookies_once`](Lasm/Serverless/Candidates.lean#L23) | **`joinCookies` leaves at most one Cookie field and the others in order.** Whatever Cookie fields a request has, at most one remains, and the fields other than Cookie are exactly the request's, in their order. | [test/serverless-shims.test.mjs](../../test/serverless-shims.test.mjs) |
<!-- END CANDIDATES -->
