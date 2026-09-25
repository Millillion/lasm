# Lean 4.34.1 refresh

The latest-release target is now 4.34.1. Its fresh
[runtime build and inventory](../evidence/lean-4.34.1-runtime-build-2026-09-25.json)
cover 2,516 modules, 72,985 declarations, 163 `IO.FS` declarations, 2,087
`Std.Http` declarations, 925 extern declarations and 875 standard C symbols.
The versioned declaration and source indexes preserve all behavioral fields as
unverified. The earlier measurements below retain their 4.34.0 scope; matching
counts do not carry behavioral passes to a new release.

Eight unchanged supplementary filesystem and console fixtures have fresh
[native interpreted and C-compiled controls](../evidence/lean-4.34.1-native-io-ci-2026-09-25.json)
on Linux x64. Their outputs match exactly and cleanup checks pass. A retained
pressure-aborted attempt precedes the successful base-page retry. The
[installed `.25` comparisons](../evidence/lean-4.34.1-installed-io-2026-09-25.json)
now pass all eight fixtures in each stock engine: 24 exact native/deployed output
comparisons, including temporary-resource cleanup and source-hidden relocation
with empty PATH. Peak memory is 4.48 GiB without resource events. Native
validation on the other five platforms and complete API parity remain open.

The [additional binary-console fixture](../evidence/lean-4.34.1-binary-console-2026-09-25.json)
passes through all three installed targets and, separately, the private helper.
Ordinary `IO.FS` binary-file and stream APIs preserve every byte value, split
writes and shutdown flushing. Both native controls and every deployment agree
on 295 stdout bytes and seven stderr bytes. Raw byte records prevent invalid
UTF-8 from collapsing into falsely equal decoded text. This adds behavior
coverage without claiming complete stream, descriptor or platform parity.

The [expanded upstream HTTP IO comparison](../evidence/lean-4.34.1-upstream-http-io-expanded-three-engines-2026-09-25.json)
passes twelve original inputs and all 148 actions in each stock engine: 36
native/deployed comparisons and 444 deployed actions. Inputs cover bodies,
headers, dispatch, expectations, incremental/fuzz parsing, keep-alive,
replayable bodies, request lines, response framing and trailers. Every original
native driver passes before the separate byte-preserving parallel mains run.
Native interpreted, native compiled and installed `.25` deployed exits and
output match exactly; assertions and deadlines retain their original bytes.

Five integrity controls protect exact source/release/action review and syntax
contexts. All resource guards release without aborts. These Linux x64 behavior
observations do not establish individual declaration coverage or complete
`Std.Http` equivalence.

[Ten further inputs pass in all three engines](../evidence/lean-4.34.1-upstream-io-stress-network-complete-2026-09-25.json),
adding 30 comparisons and 213 deployed actions for temporary files, TCP, UDP,
cancellation reasons and serial HTTP fuzz/hang cases. Eight integrity controls
preserve exact sources, serial sidecars and execution requirements. Assertions
and timeouts are unchanged; every resource guard releases without an abort.
Combined coverage is 22 inputs per engine and 657 deployed actions. The TCP
half-close input runs only `listenClose`; its unused `acceptClose` definition
does not establish behavior. Full declaration coverage, other evaluation contexts
and all other native platforms remain pending.

## Lean 4.34.0 application API inventory

The [recorded audit](../evidence/application-api-inventory-2026-09-23.json) imports
all **2,516 modules** in the application runtime's compiled-library manifest.
Each matching native module source is checked against that manifest before the
inventory runs. This covers Init, Std, Lean and Lake, including deprecated
modules; their compiler warnings are preserved separately.

The inventory contains **72,983 declarations** after excluding theorem and
internal names. It separately records 91,323 theorems and 54,265 internal names.
These counts describe the exported declaration surface, not passing behavior.

| Origin | Declarations |
| --- | ---: |
| Init | 13,630 |
| Std | 11,724 |
| Lean | 42,195 |
| Lake | 5,434 |

There are 163 `IO.FS` declarations and 2,087 `Std.Http` declarations under these
rules. Across the full inventory, 925 declarations carry extern metadata,
including 875 distinct standard C symbols. The
[extern inventory](lean-4.34-extern-declarations.json) preserves backend names,
inline/opaque/standard forms, module origin, compiled IR availability and
`implemented_by` targets. All behavioral-coverage fields start unverified.

The complete 14 MiB declaration artifact stays in the ignored experiment
directory recorded by the evidence, with its SHA256. Reproduce it with
`scripts/audit-application-apis.mjs` inside the resource guard after preparing the
matching application library bundle and managed native tools. The completed
audit peaked at 386 MiB with no resource events.

- [x] Inventory every compiled standard module and its exported declarations.
- [x] Record extern metadata and exact native/runtime source identities.
- [x] Locate source implementation candidates for all 875 standard C symbols.
- [ ] Trace executable dependencies, private helpers and dynamic callbacks.
- [ ] Audit each runtime implementation, including platform-specific branches.
- [ ] Map unchanged upstream and supplementary differential tests to APIs.
- [ ] Complete behavior coverage across three engines and six native platforms.

The existing Emscripten implementations of `Std.Internal.UV.Loop.configure`
and `alive` are explicit unsupported branches. Their linked symbols do not make
those APIs implemented. The open item is recorded in [IO_LIMITATIONS.md](../../IO_LIMITATIONS.md).

The [source index](lean-4.34-runtime-source-index.json) now links every standard
C extern to review candidates: 767 have C/C++ bodies or inline headers, 59 have
Lean exports with matching generated C definitions, and 49 refer to SDK math
sources. The index identifies 125 Lasm replacement symbols separately from the
upstream bodies renamed by the build. All 2,516 Lean module source hashes and the
referenced generated C hashes match the recorded compiled-library inventory.
See the [source audit evidence](../evidence/runtime-extern-source-index-2026-09-24.json).

These are source locations, not preprocessing/linkage proof or API passes. The
lexical scanner records both conditional alternatives; macro expansion, private
helpers, callbacks, inline extern forms and behavioral tests remain open. Every
symbol's behavior field remains `unverified`. The review exposes the unadapted
Lean 4.34 Linux query and the zero-valued libuv/OpenSSL version branches alongside
the known event-loop stubs. Dependency version semantics need explicit review;
target metadata must describe the actual compiled artifact.

The supplementary filesystem/console fixtures now have verified
[native interpreted and C-compiled controls](../evidence/application-io-native-controls-2026-09-24.json):
five cases each on Linux x64 and ARM64, and three portable cases on Windows x64.
The filesystem-surface fixture completes 50 labeled assertions, including
handle modes and cursors, buffering, lock lifetime, and temporary-resource
cleanup. The two unchanged POSIX process fixtures remain inapplicable to Windows;
parallel portable coverage is still needed. These controls establish expected
behavior only; installed Linux comparisons are recorded below. The other three
native platforms remain pending for these controls.

The [filesystem-error controls](../evidence/filesystem-errors-native-2026-09-24.json)
add 28 observed results on Linux x64/ARM64 and Windows x64, including actual
path/handle failures, invalid UTF-8 and embedded NUL paths. Interpreted and native
C-compiled outputs match exactly on each host. The first attempt exposed two
missing display instances in the supplementary fixture; that failure and the
repair are retained separately. The rerun passes all six native cases on Linux
and all four portable cases on Windows.

The [installed `.14` IO comparison](../evidence/application-io-surface-2026-09-24.json)
now passes all six cases in stock Node, Deno and Bun on Linux x64. Each of the
18 comparisons has independently matching interpreted-native, compiled-native
and source-hidden deployed outputs, with an empty deployment PATH. Temporary
and fixture cleanup checks pass. The peak is 3.47 GiB without memory or pressure
events. A disk-headroom stop after the first nine cases launched no further
build; verified lossless archival restored headroom before the remaining nine.
These tests exercise the stated operations and inputs, not every possible
behavior of the 163 filesystem declarations or other standard APIs.

The [installed Linux-query repair](../evidence/application-platform-linux-2026-09-24.json)
now makes `System.Platform.isLinux` match native Linux in all three stock engines.
The original source-index snapshot remains unchanged; the new runtime derives a
single patched object, with every other archive member and bundle file verified.
`isWindows`, `isOSX`, pointer width and the tested path behavior also match native
Linux. Other native hosts remain unvalidated. LLVM target and Emscripten status
describe the actual Wasm artifact; zero libuv/OpenSSL version observations remain
an open semantics audit.

The unchanged [upstream floating-point package](../evidence/upstream-float-2026-09-24.json)
now passes all 1,751,726 checks per engine through installed `.14` on Linux x64:
875,863 original vectors across 48 files, with both model and native backends.
The original NaN-class comparison and ignored exception flags are preserved;
timings are the only output excluded from differential comparison. This adds
substantial arithmetic/conversion evidence without establishing complete
floating-point, libm, other-API or native-platform parity.

The [panic runtime repair](../evidence/upstream-debug-2026-09-24.json) replaces
only `object.cpp.o`, preserving the other 33 runtime archive members and 17
bundle files. Installed `.15` now captures actual Lean-thread backtraces in
Node and Deno. The original debug/release project and environment controls
establish the recorded panic/exit behavior; that candidate still lacked
identifiable Bun Wasm frames. The later repair below extends this partial
coverage; full symbolization and native platform validation remain open.

Installed `.16` adds [seven exact native panic comparisons per engine](../evidence/panic-semantics-2026-09-24.json)
on Linux x64. Ordinary panic fallback, actual redirected stderr, IO failure and
process abort now match, including empty/zero environment values and bypassing
redirected stderr during abort. The supplementary fixture uses public ordinary
Lean APIs. The private abort adapter is part of the relocated deployment; it
does not introduce Lean syntax or public APIs. This leaves private Shell panic
controls, full symbolization and other native platforms unverified.

Installed `.18` [restores identifiable Bun Wasm frames](../evidence/bun-backtrace-2026-09-24.json)
without replacing the engine or changing ordinary Lean code. All three engines
pass the unchanged upstream debug executable and six parallel controls, including
native abort behavior with backtraces enabled. The adapter preserves the original
stack-hook settings and captures deep callers. Actual backend frames are retained;
readable symbolization and the broader platform/API obligations remain open.
