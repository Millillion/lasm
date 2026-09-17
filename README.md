# Lasm compiler

Lasm aims to compile Lean programs to WebAssembly for use from Node.js, with
browser and other JavaScript hosts as later targets.

The intended developer experience is Lean + Node.js + `@lasm/compiler`, without
a separately installed C/C++ SDK. This repository starts with architecture
research and reproducible feasibility experiments; it is not yet a usable
compiler package.

The initial design discussion is the
[shared Claude conversation](https://claude.ai/share/1a8522ee-e3a9-4ce5-9447-8d8457b6f005).
Its technical claims need verification before they become implementation
decisions.

Development is local on `main`. Commits are unsigned, and no remote is configured.
