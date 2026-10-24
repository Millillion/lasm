# Git for Lake dependencies (system Git)

**Current source: Lasm ships no Git** (user decision 4, 2026-10-23). It uses the
`git` on your PATH, with your own configuration, credentials, CA bundle, proxy and
SSH setup.

## When Git is needed

Lake 4.35 runs Git only for dependencies: `require … from git` and Reservoir
dependencies (`require "scope" / "name"`, clone/fetch/checkout in
`Lake/Load/Materialize.lean`), `lake update`, and the GitHub release build cache of
such packages. `lake new`/`lake init` only warn without Git. So:

- single-file programs and Lake projects without dependencies (or with only path
  dependencies that have none) build with **no Git at all**;
- a Lake project whose `lake-manifest.json` lists a `git` package, or whose
  `lakefile.toml`/`lakefile.lean` (followed through path dependencies) requires a
  Git or Reservoir dependency, needs Git.

`src/system-git.mjs` makes this check before Lake runs. A Git counts only if
`git --version` succeeds (macOS's `/usr/bin/git` stub fails until the Command Line
Tools are installed). Without one the build stops:

```
This Lake project needs Git (Reservoir dependency batteries), and no working `git` was found on PATH.
Install Git, then run the command again:
  macOS:                    xcode-select --install   (or: brew install git)
  Debian/Ubuntu:            sudo apt install git
  Fedora/RHEL/Amazon Linux: sudo dnf install git
  Windows:                  winget install --id Git.Git -e   (or download it from https://git-scm.com)
Lean programs and Lake projects without dependencies build without Git.
```

## Evidence

- `test/system-git.test.mjs`: detection (TOML and Lean lakefiles, comments, path,
  transitive and manifest dependencies), the failing-stub case and the message.
- `integration/managed-lake-dependency.mjs`: a pinned Git dependency builds and
  deploys with the system Git, and with no Git on PATH the build stops before Lake
  creates a manifest.
- Local check (2026-10-24, Linux x64, PATH = Node only): a dependency-free Lake
  project built and printed `Lean module: 42`; a project requiring
  `leanprover-community/batteries` stopped with the message above.
- The installed-package isolation controls (`integration/node-installed.mjs`) keep
  Git unavailable and build a dependency-free Lake project.
- `test/network-git.test.mjs` and `scripts/ci/check-node-network.mjs`: private CA
  and authenticated proxy cloning with the runner's Git.

## History

Candidates up to `.58` downloaded Git from GitHub Desktop's dugite-native
v2.53.0-4 (and the npm-distribution rehearsal packaged it as `@lasm/git-*`). That
redistribution needed GPL-2.0 corresponding source for Git and, on Windows, the
MSYS2/MinGW components of MinGit; see [LICENSE_AUDIT.md](LICENSE_AUDIT.md). The
earlier transport evidence is kept in `docs/evidence/managed-git-*.json`.
