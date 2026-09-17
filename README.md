# Lasm compiler

Lasm aims to compile Lean programs to WebAssembly for use from Node.js, with
browser and other JavaScript hosts as later targets.

The intended developer experience is Lean + Node.js + `@lasm/compiler`, without
a separately installed C/C++ SDK. This repository starts with architecture
research and reproducible feasibility experiments; it is not yet a usable
compiler package.

The initial design discussion is the
[shared Claude conversation](https://claude.ai/share/1a8522ee-e3a9-4ce5-9447-8d8457b6f005).
The full displayed conversation has been reviewed and its key claims tested.

- [Proposed implementation plan](docs/PLAN.md)
- [Feasibility results and corrections](docs/FEASIBILITY.md)
- [Conversation digest and original goals](docs/THREAD_REVIEW.md)
- [Reproduce the local experiments](experiments/feasibility/README.md)

With the experiment prerequisites available:

```sh
npm run probe
npm run probe:runtime
```

The probes demonstrate scalar Lean-to-Wasm compilation, custom host imports,
and async suspension in C. A complete Lean runtime and standard-library port
remains the next milestone. The npm package is private and has no published CLI.

Development is local on `main`. Commits are unsigned, and no remote is configured.
