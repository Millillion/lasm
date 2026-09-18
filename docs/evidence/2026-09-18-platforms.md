# Platform validation, 2026-09-18

Candidate `0.1.0-experimental.2` adds macOS and Windows compiler adapters. Native
Linux x64 acceptance passed. Native macOS, Windows, and Linux ARM64 acceptance
remains open; the candidate is not yet verified across all requested OSs.

The Linux checks passed 24 compiler/runtime tests, 6 JSPI tests, 57 Express/Vitest
tests, and 3 packaged installation tests. npm, pnpm, and Yarn each installed from
an empty cache offline, built a Lake application in a Unicode path with spaces,
rebuilt deterministically, reinstalled from a lockfile offline, and executed the
app after removing its compiler package. Runtime checks include 128-bit integers,
Unicode/NUL strings, binary filesystem IO, and a real loopback HTTP request.

The actual official Windows Lean compiler starts under Wine 11.17. Its bundled
Clang 22.1.4 and LLD compile and link a scalar Wasm module through a 56,161-byte
response file, using a path containing spaces and Japanese text. The resulting
Wasm returns the expected value in Linux Node. All 445 packaged Lean source
fingerprints also match the official Windows distribution.

The full Windows npm test could not run: Windows Node 24.13.1 fails during its
own initialization under Wine with `ncrypto::CSPRNG(nullptr, 0)`. An earlier run
reached JavaScript but failed on Wine's redirected stdout handles. These are
compatibility-layer blockers before the Lasm acceptance script; they neither
prove nor disprove the native Windows install experience. No macOS executable
was run.

The manual six-platform CI workflow is prepared but has not run. No remote was
created and nothing was pushed or published. Close the open platform checklist
only after native npm acceptance passes on each intended OS/architecture.

- [Machine-readable scope and probe evidence](2026-09-18-platforms.json)
- [Exact tarball hash and Linux installation timings](2026-09-18-release-install.json)
- [Remaining acceptance checks](../../NEXT_STEPS.md)
