import Lake
open System Lake DSL

package jsproto

/-- The prototype's host-call shim, compiled with Lean's own C compiler natively
and with Lasm's Emscripten toolchain under Lasm. -/
target jsproto.o pkg : FilePath := do
  let oFile := pkg.buildDir / "c" / "jsproto.o"
  let srcJob ← inputTextFile <| pkg.dir / "c" / "jsproto.c"
  buildLeanO oFile srcJob #[] (#["-O2", "-DNDEBUG"] ++ if Platform.isWindows then #[] else #["-fPIC"])

extern_lib libjsproto pkg := do
  buildStaticLib (pkg.staticLibDir / nameToStaticLib "jsproto") #[← jsproto.o.fetch]

@[default_target]
lean_exe jsproto where
  root := `Main
