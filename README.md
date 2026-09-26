# Lasm

Write an ordinary Lean program. Compile and run it in Node.

This repository is preparing a local npm release candidate for **Ubuntu 24.04
LTS, x86-64 and ARM64**, using **Node 26.10.0 with npm** and **Lean 4.34.1**.
See the [acceptance report](https://github.com/Millillion/lasm/blob/main/docs/NODE_ACCEPTANCE.md)
for verified platforms and the exact candidate. The package has not been published
to npm. Complete Lean language and library compatibility is later work.

Create an empty directory and install the candidate tarball:

```sh
npm install /path/to/lasm-compiler-0.1.0-experimental.32.tgz
```

After a separately authorized npm release, installation will be
`npm install @lasm/compiler`. You do not need to install Lean, Lake, Python, Git,
or a C compiler. Lasm downloads and verifies its own matching build tools.

Save this as `Main.lean`:

```lean
def main : IO Unit := do
  IO.println s!"Hello from Lean! 2 + 3 = {2 + 3}"
```

Run it:

```sh
npx lasm Main.lean
```

The program prints `Hello from Lean! 2 + 3 = 5`. The first run needs internet
access, downloads about 1 GB of build tools, and uses several GB of disk space.
Later runs reuse verified tools and unchanged builds. See
[requirements and cache details](docs/NODE_SUPPORT.md).

Build a deployment without running the program:

```sh
npx lasm build Main.lean
node dist/main.mjs
```

Copy the **entire `dist/` directory** to another supported Linux machine with the
same architecture and Node version. It needs no Lean source, npm installation,
build tools, or development cache. Build separately on each architecture.

Pass program arguments with `npx lasm Main.lean -- hello`. Existing Lean projects
can use an ordinary `lean-toolchain` containing `leanprover/lean4:v4.34.1` and
a normal Lake project with local imports. Unsupported Lean pins fail explicitly.

The current milestone covers this basic application workflow. Broader libraries,
filesystem/HTTP parity, other operating systems and other JavaScript engines are
not release guarantees. The [current plan](https://github.com/Millillion/lasm/blob/main/docs/PLAN.md)
records subsequent work; earlier experimental implementations remain in the repository.
