import Std

def ensure (value : Bool) (label : String) : IO Unit :=
  unless value do throw (IO.userError label)

def outcome (label : String) (action : IO Unit) : IO Unit := do
  try action; IO.println s!"{label}: success"
  catch error => IO.println s!"{label}: {error}"

def main : IO Unit := do
  outcome "missing read" do discard <| IO.FS.readFile "missing"
  outcome "missing metadata" do discard <| ("missing" : System.FilePath).metadata
  outcome "missing realpath" do discard <| IO.FS.realPath "missing"
  outcome "missing readDir" do discard <| ("missing" : System.FilePath).readDir
  outcome "empty path" do discard <| IO.FS.Handle.mk "" .read
  outcome "not a directory" do discard <| IO.FS.readFile "target/../target"
  outcome "trailing slash" do discard <| IO.FS.readFile "target/"
  outcome "duplicate mkdir" do IO.FS.createDir "directory"
  outcome "missing mkdir parent" do IO.FS.createDir "missing/child"
  outcome "missing rmdir" do IO.FS.removeDir "missing"
  outcome "nonempty rmdir" do IO.FS.removeDir "directory"
  outcome "remove directory as file" do IO.FS.removeFile "directory"
  outcome "missing rename" do IO.FS.rename "missing" "destination"
  outcome "missing hard link" do IO.FS.hardLink "missing" "destination"
  outcome "missing chmod" do IO.Prim.setAccessRights "missing" 0o600
  outcome "NUL second rename path" do IO.FS.rename "target" "bad\x00path"
  outcome "NUL second hard link path" do IO.FS.hardLink "target" "bad\x00path"
  outcome "NUL realpath" do discard <| IO.FS.realPath "bad\x00path"
  IO.FS.withFile "target" .read fun handle => do
    outcome "read handle write" do handle.putStr "wrong"
    outcome "read handle truncate" do handle.truncate
    outcome "overflow read" do discard <| handle.read (0 - 1)
  if !System.Platform.isWindows then
    ensure ((← IO.FS.readFile "linkdir/../target") == "inside") "OS symlink dot-segment resolution"
    ensure ((← ("linkdir" : System.FilePath).symlinkMetadata).type == .symlink) "symlink metadata"
  let names := (← ("order" : System.FilePath).readDir).map (·.fileName)
  IO.println s!"directory order: {repr names}"
  ensure ((← IO.FS.readFile "target") == "outside") "failed writes preserve data"
  IO.println "filesystem conformance passed"
