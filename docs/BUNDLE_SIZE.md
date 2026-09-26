# Application deployment size

The shipping builder now follows linker reachability instead of exporting every
Lean, Std and Lake declaration for every application. It uses the same ordinary
Lean source, native elaborator, runtime archives, IO bridge and deployment CLI.
No restricted Lean dialect or application annotations are introduced.

## How the build selects code

1. Compile generated application C with function/data sections. Root `main`, the
   host allocation ABI and explicit application C exports. Compiler-generated
   phase initializers are reached through ordinary calls, not forced exports.
   LLD follows real
   references through functions, closures, data and module initializers, retaining
   their transitive dependencies from all supplied standard-library archives.
2. Read LLD's map of sections that survived garbage collection. A temporary
   lookup marker makes runtime evaluation detectable without rooting the entire
   reflection registry. An unfamiliar map fails the build.
3. For the audited immutable Lean 4.34.1 runtimes, initially wrap the blanket
   `lean_initialize` call with Lean's core runtime initializer. Generated module
   initializers still run normally, including their user-visible side effects.
   If stateful Lean C++ compiler/kernel code or data is reachable, use the untouched
   complete initializer instead. Shared weak inline helpers, read-only constants
   and weak exception RTTI/vtables can come from this archive without depending
   on compiler state; their references still participate in reachability.
   Mutable globals and strong C++ functions remain conservative roots.
   Unknown runtime identities cannot use this
   specialization. Lean's own module phase boundaries keep compile-time macros
   from becoming runtime roots in ordinary `module` projects.
4. If evaluation, dynamic library lookup, or stateful Lean C++ support is reachable, discard that preliminary
   executable and relink with the complete authenticated runtime exports and both
   Lean symbol registries. The temporary marker is absent from delivered code.
   Runtime-computed names and later-loaded libraries keep their existing support.
5. Otherwise use size-oriented Wasm optimization (`-Oz`). Recheck the final
   link's map and exclude the lookup marker's object. Keep readable loader JS
   (`-g1`) for the existing checked loader transformations; this does not add
   Wasm function names or DWARF. The full dynamic runtime retains its previously
   verified `-O1` resource profile.
6. Package module metadata when reachable runtime import/evaluation or search-path
   APIs need it. Ordinary JSON/library code does not acquire the compiler's
   `.olean` and IR collection merely because it imports a Lean namespace.
7. Linux Node deployments carry only their architecture's glibc Koffi binary,
   process launcher and signal helper, with vendor loaders, licenses and integrity
   manifests. Other architectures, musl binaries and C++ build sources stay out.
   Existing research packaging for other targets is preserved.

This is conservative elimination of code proven unreachable. Initializer side
effects remain observable and therefore remain roots. Code reached through
closures or registered callbacks is retained even when a particular test does
not exercise it. A runtime evaluator that accepts arbitrary declaration names
needs a larger bundle than an ordinary application. Its current full symbol and
module-data fallback remains deliberately broad; lazy module loading and a
smaller open-ended interpreter are separate architectural work, not verified
size reductions in this change.

The two reviewed runtime manifests are
`4034cb85407d75be21ba2cb1fb063065aebe7cef48bbd82543f759bb6d35a4cf`
(local maintainer build) and
`4d3d6c60d978dd73c3b9bf0d9ae6020862c512f411c151abeffc37ffc9fd515d`
(retained CI build). Both pin Lean commit
`5045d0056413266e57c625dcd7c365b10e377c52`; their Init, Std and Lean archives and
headers are identical. Their manifests and host-built C++ archive bytes differ,
so local measurements must not be described as testing the CI artifact.

## Verification

`integration/application-bundle-size.mjs` compares compiled native Lean with
relocated Node deployments. Its static group covers Hello, 1,000 unreachable
functions, polymorphic recursion, closures, arbitrary-precision arithmetic,
hash maps, derived JSON, module initializers, tasks, exceptions and the existing
filesystem fixture. Its separate reflection group evaluates imported Lean
declarations at runtime with automatically bundled metadata. The existing
`integration/managed-http.mjs` runs the unchanged 20 HTTP assertions against the
native and Node versions of the ordinary Lean server.

Installed-package CI checks deployment size budgets on native Linux x86-64 and
ARM64, including copied deployments denied access to source, compiler and cache.
It also builds and relocates the complete runtime-evaluation deployment, including
its module data, and repeats all seven evaluations with those build inputs denied.
The basic applications have a 5 MiB regression budget; the feature/filesystem
fixtures have a 16 MiB budget. A thousand unreachable definitions may add at most
4 KiB of Wasm. These budgets detect regressions; they are not claimed limits for
arbitrary applications.

## Local measurements, 2026-09-26

These are complete uncompressed deployment directories, including host helpers
and notices, on Linux x86-64 with stock Node 26.10.0 and Lean 4.34.1. They use the
local maintainer runtime identity above; installed-candidate CI is a separate gate.

| Program | Complete deployment | Wasm |
| --- | ---: | ---: |
| Hello, previous builder | 180,485,088 B | 160,426,863 B |
| Hello, reduced builder | 3,209,588 B | 1,354,029 B |
| Hello plus 1,000 unused definitions | 3,209,614 B | 1,354,029 B |
| Datatypes, tasks, large naturals and JSON | 2,881,757 B | 1,025,658 B |
| Filesystem fixture | 3,298,744 B | 1,443,174 B |
| Ordinary Lean HTTP server | 4,183,268 B | 2,326,274 B |

The Hello directory is 98.2% smaller. The language fixture matched compiled native
Lean for three runtime inputs. The filesystem fixture passed after relocation;
the server passed all 20 existing Vitest checks against the native control.
The same language fixture with legacy-style imports also matched native Lean;
it retained the static path with 1,736,464 bytes of Wasm. Small bundles therefore
do not require rewriting applications to Lean's `module` syntax.
These measurements are practical reductions, not a proof of a universal minimum.
Live code, data, initialization and runtime evaluation legitimately increase size.
The compiler-capable fallback is still large and has not been minimized here.

The local Hello bundle contains 1,354,029 bytes of Wasm, 1,158,552 bytes
of the selected native IO adapter, 242,484 bytes of JavaScript glue and 180,885
bytes of third-party notices. The adapter already has no ELF debug/symbol-table
payload to strip. Further substantial reductions to that fixed adapter would
require an IO implementation change; removing it would break supported behavior.
The size strategy is applied by default on every build, without a hand-maintained
list of allowed Lean modules or user annotations.

All local build campaigns use one workload, one linker/Binaryen worker, base
pages and the existing memory/disk guards. The final static campaign peaked at
1.16 GiB and the HTTP campaign at 1.06 GiB, with no OOM events. Earlier attempts
that stopped at the disk reserve remain resource aborts, not behavior failures.
See [recorded evidence](evidence/bundle-size-2026-09-26.json) for exact inputs,
intermediate failures, resource reports and candidate acceptance status.

## Installed candidate verification

Candidate `0.1.0-experimental.34`, source
`484f86c3ab688660c2707b865442130d784e818e`, packed reproducibly with SHA-256
`8af35118e9919f7cd0529507ee7c693a78ba55064bbfefbea35237235e7cd027`.
The archive is 65,335,003 bytes; deployment reduction does not remove the build
libraries needed to compile different applications from the npm package.

Native Linux x86-64 passed [installed-package CI](https://github.com/Millillion/lasm/actions/runs/36250526691/job/108427789071).
The first native ARM64 attempt stopped at its proactive memory budget during
runtime evaluation, after the seven small application builds/comparisons passed.
It had no OOM. It is not yet a full platform pass. The [abort record](evidence/bundle-size-arm64-resource-abort-2026-09-26.json)
preserves the original result and the targeted CI-only cache-advice correction.
Both architectures will recheck the same archive, without repacking or changing
assertions, timeouts, memory limits or deployment files.
The packaging job passed 113 Node tests and three Python cache-advice controls.
The [x86-64 evidence](evidence/bundle-size-linux-x64-2026-09-26.json) records
49 command checks, eight isolated deployments and nine execution cases. The
runtime-evaluation output was moved instead of copied to avoid a duplicate large
module-data tree; access to original source, package and tools was still denied.

| Complete deployment | Linux x86-64, bytes |
| --- | ---: |
| Hello | 3,209,670 |
| Hello plus 1,000 unused functions | 3,209,672 |
| Tiny Lake project | 3,210,293 |
| Language and JSON fixture | 2,881,825 |
| Same fixture with legacy imports | 3,592,645 |
| Filesystem fixture | 3,298,829 |
| Runtime evaluation with full module data | 2,385,695,830 |

Hello and the unused-function variant have exactly the same Wasm SHA-256.
The recorded x86-64 cold build took 278.71 seconds, while median first stdout
from plain Node was 0.268 seconds across three samples. These are observations
from one runner and this candidate, not guarantees for other workloads or hosts.
The expanded campaign peaked at 4.74 GiB with no OOM or resource abort.

Full runtime evaluation remains a deliberately broad compatibility fallback,
**not a minimized compiler distribution**. Its 2.39 GB output must not be confused
with the small ordinary-application measurements. Further work on compiler/module
packaging needs its own correctness evidence; application code elimination must
not silently remove runtime-resolved declarations or change initializer effects.
