# Licensing of apps you build with Lasm

**Short version: your code stays yours, nothing copyleft is added to it, and
the notices that the bundled open-source parts require are written for you on
every build. Keep them with what you ship, and you are done.**

## Your code

Lasm puts no licence on your program. Your Lean code, C code and npm
dependencies keep their own licences, and you can ship the result under any
licence you choose, open or closed.

## What Lasm adds to your output

A build links your code with a small set of open-source components. All of them
are under permissive licences:

| Component | Licence | In which outputs |
| --- | --- | --- |
| Lean's runtime and standard library (modified by Lasm, the changes listed in the notices) | Apache-2.0 | all |
| Emscripten's system libraries and, for JavaScript hosts, its JavaScript runtime | MIT OR NCSA | all |
| musl libc | MIT | all |
| LLVM libc++, libc++abi, libunwind, compiler-rt | Apache-2.0 WITH LLVM-exception | all |
| mimalloc | MIT | all |
| libuv (parts) | MIT, ISC, BSD-2-Clause | all |
| Lasm's runtime, host, loader, `lasm:*` modules and C WASI host | MIT (copyright Jordan Last) | all |
| koffi and Lasm's native helpers | MIT | `node` `dist/` only |
| Wasmtime's preview 1 proxy adapter and wasm-tools' component glue | Apache-2.0 WITH LLVM-exception | `wasi-http` only |

**No copyleft code.** No GPL, LGPL or similar code is linked into any output on
any target. Lean's runtime is built without GNU MP (Lean's own big-number code is
used instead), the C library is musl rather than glibc, and no GCC runtime
library is linked. CI builds every target and checks each output for copyleft
symbols and licence texts (`scripts/license/check-outputs.mjs`).

Your own Lake dependencies are compiled in under their own licences. Lasm copies
the licence files it finds in them into the notices (and into
`dist/licenses/<package>/` for `node`), but cannot judge them for you: if a
dependency is GPL, your app is a combined work with it.

## What you need to do

Usually nothing beyond keeping the files Lasm writes. Apache-2.0 and MIT ask that
people who receive your app also receive the licence texts and copyright
notices. Lasm writes them automatically:

| Target | Where the notices are |
| --- | --- |
| `node` (and `lasm package` zips and images) | `dist/THIRD_PARTY_NOTICES.txt` and `dist/licenses/` (shipped with `dist/`) |
| Edge targets (Workers, Vercel Edge, Netlify Edge, Deno, Deno Deploy, Bun, Supabase) | `THIRD_PARTY_NOTICES.txt` in the output directory; a short `/*! … */` licence banner on `lasm/program.mjs`; and the whole notices text inside `program.wasm` (its `lasm.notices` custom section), so it is part of every deployment |
| `browser` | `THIRD_PARTY_NOTICES.txt` beside `index.html` (served with the app) and a licence banner at the top of `app.<hash>.js` that names it |
| Vite plugin (`@lasm/cli/vite`) | `THIRD_PARTY_NOTICES.lasm.txt` in Vite's output directory |
| `wasi`, `fastly`, `wasi-http` | `THIRD_PARTY_NOTICES.txt` in the output directory, the same text inside `main.wasm` (`lasm.notices`), and in the Fastly package `pkg/<name>.tar.gz` |

So:

- **Keep `THIRD_PARTY_NOTICES.txt` (and `dist/licenses/`) when you copy or
  publish an output.** For a public website, serving the file beside the app (as
  `lasm build --target browser` already lays it out) is enough.
- **Do not strip the licence banner or the `lasm.notices` section** if you
  post-process the files. If your bundler or minifier drops `/*! … */` comments,
  link the notices file from your site or app instead (an "Open-source licences"
  page is the usual way).
- **If you ship a native app or a download** that contains the output, include
  the notices file in it, as you would for any open-source library.

You do not need to publish your source code, offer source, or license your app
in any particular way because of Lasm.

## The Lasm compiler itself

The compiler (`@lasm/cli`) is MIT. Its npm package bundles the same runtime
components, plus build tools; the tool packages it installs (`@lasm/lean-*`,
`@lasm/emscripten-*`) carry Lean's and LLVM's binaries, some of which contain
LGPL and GPL-with-runtime-exception code (in the compiler tools only, never in
your output). Their licence texts are in each package's `licenses/`, and the
exact sources of those parts are mirrored as GitHub release assets. Details, with
the reasoning for every decision: [LICENSE_AUDIT.md](LICENSE_AUDIT.md).

The Lean name and logos are trademarks of Lean FRO. Lasm is not affiliated with
or endorsed by Lean FRO.
