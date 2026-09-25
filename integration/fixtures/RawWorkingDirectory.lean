import Init

private def observeDirectory (label : String) : IO Unit := do
  let modern ← IO.Process.getCurrentDir
  let legacy ← IO.currentDir
  unless modern == legacy do throw <| IO.userError "current-directory APIs disagree"
  -- Preserve Lean's own conversion of POSIX bytes into a String in the output.
  let name := modern.fileName.getD ""
  IO.println s!"{label}: {repr <| name.toList.map Char.toNat}"
  unless (← IO.FS.readFile "payload") == "relative bytes\n" do
    throw <| IO.userError "relative file read differs"

def main (args : List String) : IO Unit := do
  if args == ["enter"] then IO.Process.setCurrentDir "raw-link"
  observeDirectory "inherited or entered"
  IO.Process.setCurrentDir "."
  observeDirectory "after relative chdir"
  IO.FS.writeFile "created" "created from Lean\n"
  IO.FS.rename "created" "renamed"
  unless (← IO.FS.readFile "renamed") == "created from Lean\n" do
    throw <| IO.userError "relative mutation differs"
  IO.FS.removeFile "renamed"
  IO.Process.setCurrentDir ".."
  unless (← IO.FS.readFile "parent-payload") == "parent bytes\n" do
    throw <| IO.userError "parent traversal differs"
  IO.println "raw working directory checked"
