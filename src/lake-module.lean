-- Private build-time adapter. The application and its Lake configuration stay
-- ordinary Lean; module identity comes from Lake's evaluated configuration.
--   lake-module.lean SOURCE         module identity, module-data roots and the
--                                   packages that carry native (C) code;
--   lake-module.lean --link SOURCE  builds and lists the program's non-Lean link
--                                   inputs exactly as Lake would collect them for
--                                   a native executable (Lake.Build.Module
--                                   recComputeModuleLinkInfo, without the Lean
--                                   modules' own native objects).
import Lake
import Lake.Load.Workspace

open Lake Lean System

/-- Why a package needs a native C toolchain to build or link. -/
def nativeReasons (pkg : Package) : Array String := Id.run do
  let mut reasons := #[]
  unless pkg.externLibs.isEmpty do reasons := reasons.push "extern_lib"
  if pkg.precompileModules || pkg.leanLibs.any (·.precompileModules) then reasons := reasons.push "precompileModules"
  if !pkg.moreLinkObjs.isEmpty || pkg.leanLibs.any (!·.config.moreLinkObjs.isEmpty) || pkg.leanExes.any (!·.config.moreLinkObjs.isEmpty) then
    reasons := reasons.push "moreLinkObjs"
  if !pkg.moreLinkLibs.isEmpty || pkg.leanLibs.any (!·.config.moreLinkLibs.isEmpty) || pkg.leanExes.any (!·.config.moreLinkLibs.isEmpty) then
    reasons := reasons.push "moreLinkLibs"
  if !pkg.moreLinkArgs.isEmpty || pkg.leanLibs.any (!·.config.moreLinkArgs.isEmpty) || pkg.leanExes.any (!·.config.moreLinkArgs.isEmpty) then
    reasons := reasons.push "moreLinkArgs"
  return reasons

structure LinkInputs where
  objs : Array (String × FilePath)
  libs : Array Lake.Dynlib
  args : Array (String × String)

def linkInputs (ws : Workspace) (roots : Array Lake.Module) (exe? : Option LeanExe) : FetchM (Job LinkInputs) := do
  let mut objJobs := #[]
  let mut objPkgs : Array String := #[]
  let mut libJobs := #[]
  let mut imports : Array Lake.Module := roots
  for root in roots do
    let some more ← (← root.transImports.fetch).waitUnlessCanceled?
      | error s!"bad imports (see the '{root.name.toString}' job for details)"
    imports := imports ++ more
  let libs : Array LeanLib := imports.foldl (·.insert ·.lib) OrdHashSet.empty |>.toArray
  let mut args := #[]
  for lib in libs do
    for link in lib.moreLinkObjs do
      objJobs := objJobs.push <| ← link.fetchIn lib.pkg; objPkgs := objPkgs.push lib.pkg.baseName.toString
    for link in lib.moreLinkLibs do libJobs := libJobs.push <| ← link.fetchIn lib.pkg
    for arg in lib.weakLinkArgs ++ lib.linkArgs do args := args.push (lib.pkg.baseName.toString, arg)
  if let some exe := exe? then
    for link in exe.moreLinkObjs do
      objJobs := objJobs.push <| ← link.fetchIn exe.pkg; objPkgs := objPkgs.push exe.pkg.baseName.toString
    for link in exe.moreLinkLibs do libJobs := libJobs.push <| ← link.fetchIn exe.pkg
    for arg in exe.weakLinkArgs ++ exe.pkg.moreLinkArgs ++ exe.config.moreLinkArgs do
      args := args.push (exe.pkg.baseName.toString, arg)
  let mut found : Array Package := #[]
  for root in roots do
    found := (found ++ (← (← root.pkg.transDeps.fetch).await)).push root.pkg
  let pkgs := found.foldl (fun (seen : Array Package) pkg => if seen.any (·.wsIdx == pkg.wsIdx) then seen else seen.push pkg) #[]
  for pkg in pkgs do
    for lib in pkg.externLibs do
      objJobs := objJobs.push <| ← lib.static.fetch; objPkgs := objPkgs.push pkg.baseName.toString
      for arg in lib.linkArgs do args := args.push (pkg.baseName.toString, arg)
  let _ := ws
  let objsJob := Job.collectArray objJobs "lasm.linkObjs"
  let libsJob := Job.collectArray libJobs "lasm.linkLibs"
  objsJob.bindM (sync := true) fun objs => libsJob.mapM (sync := true) fun libs =>
    return { objs := objPkgs.zip objs, libs, args }

def main (args : List String) : IO UInt32 := do
  let (link, source) ← match args with
    | ["--link", source] => pure (true, source)
    | [source] => pure (false, source)
    | _ => throw <| IO.userError "expected [--link] and an absolute source path"
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
  let configured := ws.root.findModuleBySrc? path <|> ws.root.findModuleBySrc? realPath
  let native := ws.packages.filterMap fun pkg =>
    let reasons := nativeReasons pkg
    if reasons.isEmpty then none else some <| Json.mkObj [("package", toJson pkg.baseName.toString), ("reasons", toJson reasons)]
  if link then
    let roots ← match configured with
      | some mod => pure #[mod]
      | none =>
        let header ← Lean.parseImports' (← IO.FS.readFile path) source
        pure <| header.imports.filterMap fun imp => ws.findModule? imp.module
    let exe? := configured.bind fun mod => ws.root.leanExes.find? (·.root.name == mod.name)
    let inputs ← ws.runBuild (linkInputs ws roots exe?) { verbosity := .quiet }
    IO.println <| (Json.mkObj [
      ("objs", toJson (inputs.objs.map fun (pkg, path) => Json.mkObj [("package", toJson pkg), ("path", toJson path.toString)])),
      ("libs", toJson (inputs.libs.map fun lib => Json.mkObj [("name", toJson lib.name), ("path", toJson lib.path.toString)])),
      ("args", toJson (inputs.args.map fun (pkg, arg) => Json.mkObj [("package", toJson pkg), ("arg", toJson arg)]))]).compress
    return 0
  if let some mod := configured then
    unless (← IO.FS.realPath mod.leanFile) == realPath do
      throw <| IO.userError s!"Lake module does not resolve to the requested source: {source}"
    IO.println <| (Json.mkObj [("module", toJson s!"/+{mod.name}"),
      ("metadataRoots", toJson (ws.leanPath.map (·.toString))), ("native", toJson native)]).compress
  else
    -- `lake lean` also accepts scripts which are not declared as library or
    -- executable roots. Lake builds their imports and supplies its full setup.
    let header ← Lean.parseImports' (← IO.FS.readFile path) source
    let imports := header.imports.filterMap fun imp =>
      ws.findModule? imp.module |>.map fun mod => mod.name.toString
    IO.println <| (Json.mkObj [("imports", toJson imports),
      ("metadataRoots", toJson (ws.leanPath.map (·.toString))), ("native", toJson native)]).compress
  return 0
