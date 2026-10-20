-- Language coverage harness: list every `lean_exe` of a Lake workspace with its
-- built executable path and the source file of its root module, as Lake's own
-- evaluated configuration defines them. Read-only apart from Lake's ordinary
-- configuration cache, which the preceding native Lake command already wrote.
--   lean --plugin=<libLake_shared> --run LakeExes.lean WORKSPACE_DIR [CONFIG_FILE] [-K key=value]...
import Lake.Load.Workspace

open Lake Lean System

def main (args : List String) : IO UInt32 := do
  let wsDir :: rest := args | throw <| IO.userError "expected a workspace directory"
  let (configFile?, opts) := rest.foldl (init := ((none : Option String), ({} : NameMap String)))
    fun (file?, opts) arg =>
      if arg.startsWith "-K" then
        match (arg.drop 2).toString.splitOn "=" with
        | key :: value => (file?, opts.insert key.toName ("=".intercalate value))
        | [] => (file?, opts)
      else (some arg, opts)
  let (_, some lean, some lake) ← findInstall?
    | throw <| IO.userError "managed Lean/Lake installation is missing"
  let .ok lakeEnv ← (Env.compute lake lean none (some true)).toBaseIO
    | throw <| IO.userError "could not compute the Lake environment"
  let wsDir ← IO.FS.realPath wsDir
  let relConfigFile := (configFile?.map FilePath.mk).getD defaultConfigFile
  let config : LoadConfig := { lakeEnv, wsDir, lakeOpts := opts, updateToolchain := false, relConfigFile }
  let some ws ← (loadWorkspace config).toBaseIO
    | throw <| IO.userError "could not load the Lake workspace"
  let exes := ws.packages.flatMap fun pkg => pkg.leanExes.map fun exe =>
    Json.mkObj [("package", toJson pkg.baseName.toString), ("name", toJson exe.name.toString),
      ("file", toJson exe.file.toString), ("root", toJson exe.config.root.toString),
      ("source", toJson exe.root.leanFile.toString)]
  IO.println (toJson exes).compress
  return 0
