# Review of the initial Claude discussion

Reviewed 2026-09-17. Source: [the shared conversation](https://claude.ai/share/1a8522ee-e3a9-4ce5-9447-8d8457b6f005).
All eight user messages and eight assistant responses in the displayed snapshot
were read. This is a structured digest, not a verbatim archive. Claims from the
conversation are hypotheses until supported by source inspection or experiments.

## User goals carried forward

- Lasm compiles Lean source to WebAssembly.
- Node.js is the first execution host; browsers and cloud JavaScript hosts come later.
- Developers should be able to use Lean programs inside existing Node applications.
- Filesystem and HTTP operations matter; pure arithmetic alone is insufficient.
- With Lean and Node already installed, installing `@lasm/compiler` should supply
  the remaining build machinery automatically.
- Keep installation and usage lightweight. Avoid requiring users to install an
  Emscripten SDK or another large toolchain manually.

The current request additionally requires a local Git repository on `main`,
unsigned milestone commits, and no remote or push.

## Conversation, in order

| Exchange | Question or requirement | Claude's proposal | Review |
| --- | --- | --- | --- |
| 1 | Compile Lean for Node/browser/cloud, including filesystem and HTTP | Use Lean's C backend; compile its runtime; initially use Emscripten, custom IO shims, and Asyncify | The pipeline is sound. The runtime and library scope is substantially larger than one replacement C file. |
| 2 | WASI versus custom imports, prioritizing Node | Prefer custom imports; use async JS host bindings, Asyncify first, JSPI later | Custom bindings are reasonable, but the rejection of WASI is too categorical. WASI HTTP exists. Async suspension still needs machinery regardless of import naming. |
| 3 | Lightweight C-to-Wasm conversion, preferably driven by Node | Use `zig cc` targeting `wasm32-wasi`; invoke it using `child_process` | Valid candidate and locally demonstrated. Zig includes support libraries, not just a standalone binary. Its selection does not provide Asyncify automatically. |
| 4 | What is GMP? | Explain arbitrary-precision arithmetic and describe GMP as mandatory | The arithmetic requirement is real; mandatory GMP is incorrect. Lean has a built-in bignum implementation. |
| 5 | Does Lean really emit C source? | Yes; replace the native C compilation/link step | Confirmed with actual generated C. Application imports and Lean-generated standard-library code also need compatible Wasm objects. |
| 6 | Has this been attempted? | Cite lean2wasm, Lean community discussion, and lean2zkvm; assert the earlier projects do not address IO | The cited projects exist, but lean2wasm explicitly configures filesystem support. We cannot establish a market-wide absence of polished alternatives from this search. |
| 7 | Can Lean + Node + an npm install be sufficient? | Prebuild the runtime; use platform packages for Zig; write a small GMP substitute | The distribution model is plausible. Reuse Lean's existing bignums, pin the Lean ABI, include the target libraries and sysroot, and evaluate the already-bundled Lean compiler tools. |
| 8 | Is Zig's target Preview 1 or Preview 2? | Explain `wasm32-wasi` as Preview 1 and imply custom IO means no WASI syscall dependency | The tested Zig 0.16.0 output uses Preview 1 when libc IO is linked. Custom application imports do not remove other imports from linked libraries. |

## Inconsistencies to resolve

The conversation starts with Emscripten plus Asyncify, then switches to Zig and
says the Emscripten features cost nothing to lose. Those are separate choices:
Zig can replace the C/C++ compiler driver, but a flag-free async build still
needs a transformation such as Binaryen Asyncify and an appropriate JS driver.

Likewise, choosing a WASI compilation target and choosing a custom public host
API are compatible, but claiming a WASI-free final module requires inspecting
its actual imports. We have positive and negative examples of this distinction.

The npm package can simplify the user's workflow even when the maintainer's
release pipeline uses substantial tooling. Keeping the end-user workflow small
does not require hand-writing replacement arithmetic or OS libraries.

See [the measured results](FEASIBILITY.md) and [the proposed plan](PLAN.md).
