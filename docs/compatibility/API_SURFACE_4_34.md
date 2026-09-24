# Lean 4.34 application API inventory

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
