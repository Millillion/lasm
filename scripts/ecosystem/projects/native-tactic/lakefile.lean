import Lake
open System Lake DSL

package app

target magic.o pkg : FilePath := do
  let oFile := pkg.buildDir / "c" / "magic.o"
  let srcJob ← inputTextFile <| pkg.dir / "c" / "magic.c"
  buildO oFile srcJob #["-I", (← getLeanIncludeDir).toString] #["-fPIC"]

extern_lib libmagic pkg := do
  buildStaticLib (pkg.staticLibDir / nameToStaticLib "magic") #[← magic.o.fetch]

lean_lib Tac where
  precompileModules := true

@[default_target]
lean_exe app where
  root := `Main
