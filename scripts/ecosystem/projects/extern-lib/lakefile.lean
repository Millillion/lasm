import Lake
open System Lake DSL

package app

target ctable.o pkg : FilePath := do
  let oFile := pkg.buildDir / "c" / "ctable.o"
  let srcJob ← inputTextFile <| pkg.dir / "c" / "ctable.c"
  buildO oFile srcJob #["-I", (← getLeanIncludeDir).toString] #["-fPIC", "-DCTABLE_SCALE=3"]

extern_lib libctable pkg := do
  let o ← ctable.o.fetch
  buildStaticLib (pkg.staticLibDir / nameToStaticLib "ctable") #[o]

@[default_target]
lean_exe app where
  root := `Main
