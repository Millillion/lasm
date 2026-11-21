## Editor

- **Lasm no longer changes elan, so a native `lake build` keeps working after
  `lasm build`** (#343, decision 0.7-25). Lasm 0.3.0 to 0.10.0 set the project
  directory's elan override to Lasm's own toolchain (`lasm-4.35.0-…`). That
  toolchain had Lean's C compiler only when a Lake package had C code, so a
  native `lake build` of a `lean_exe` fell back to `cc` on `PATH`, or failed
  when there was none. The Lean editor now uses the project's own toolchain
  (`lean-toolchain`, Lean 4.35.0) and finds `Lasm.*` through Lasm's Lake package
  (`[[require]] lasm`, path `.lake/lasm-library`). `lasm editor`
  adds the require when it is missing and writes `lean-toolchain` when there is
  none. Thanks to @paulbutcher for the report and the analysis.
- **Migration:** nothing to do. The first `lasm build`, `lasm dev`, `lasm init`
  or `lasm editor` in a project removes the override an older Lasm set, and
  prints one line saying so. An override you set to another toolchain stays.
  These automatic steps don't run on CI or with `LASM_EDITOR=0`; run
  `elan override unset` in the project there. If the editor stops resolving
  `import Lasm.*` in a project whose lakefile doesn't require Lasm's package,
  run `npx lasm editor` once (`lasm build` also says so). The `lasm-4.35.0-…`
  toolchains stay linked in elan, unused; `elan toolchain uninstall <name>`
  removes them.
