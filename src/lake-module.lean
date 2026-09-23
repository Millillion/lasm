-- Private build-time adapter. The application and its Lake configuration stay
-- ordinary Lean; module identity comes from Lake's evaluated configuration.
import Lake.Load.Workspace

open Lake Lean System

def main (args : List String) : IO UInt32 := do
  let [source] := args | throw <| IO.userError "expected an absolute source path"
  let (_, some lean, some lake) ← findInstall?
    | throw <| IO.userError "managed Lean/Lake installation is missing"
  let .ok lakeEnv ← (Env.compute lake lean none (some true)).toBaseIO
    | throw <| IO.userError "could not compute the managed Lake environment"
  let wsDir ← IO.FS.realPath (← IO.currentDir)
  let some ws ← (loadWorkspace {lakeEnv, wsDir, updateToolchain := false}).toBaseIO
    | throw <| IO.userError "could not load the Lake workspace"
  -- Lake CLI file queries resolve symlinks before finding the module. A link
  -- may legitimately point outside srcDir, so first use its configured path.
  let path := FilePath.mk source |>.normalize
  let realPath ← IO.FS.realPath path
  let some mod := ws.root.findModuleBySrc? path <|> ws.root.findModuleBySrc? realPath
    | throw <| IO.userError s!"source is not a configured Lake module: {source}"
  unless (← IO.FS.realPath mod.leanFile) == realPath do
    throw <| IO.userError s!"Lake module does not resolve to the requested source: {source}"
  IO.println <| (toJson s!"/+{mod.name}").compress
  return 0
