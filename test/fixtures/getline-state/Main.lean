import Init

private def append (path : System.FilePath) (text : String) : IO Unit := do
  let writer ← IO.FS.Handle.mk path .append
  writer.putStr text
  writer.flush

private def lineCase (directory : System.FilePath) (label initial added : String)
    (useRead := false) (readEmpty := false) : IO Unit := do
  let path := directory / label
  IO.FS.writeFile path initial
  let reader ← IO.FS.Handle.mk path .read
  let first ← reader.getLine
  IO.println s!"{label} initial bytes: {first.utf8ByteSize}"
  if readEmpty then
    IO.println s!"{label} empty: {repr (← reader.getLine)}"
  append path added
  let next ← if useRead then do
    let bytes ← reader.read 32
    pure <| String.fromUTF8! bytes
  else reader.getLine
  IO.println s!"{label} appended: {repr next}"
  IO.FS.removeFile path

def main (args : List String) : IO Unit := do
  let some directory := args.head? | throw <| IO.userError "expected fixture directory"
  let directory := System.FilePath.mk directory
  lineCase directory "partial" "alpha" "β\n"
  lineCase directory "newline" "alpha\n" "β\n"
  lineCase directory "empty" "" "β\n"
  lineCase directory "binary-read" "alpha" "tail" (useRead := true)
  lineCase directory "repeat-eof" "alpha" "β\n" (readEmpty := true)
  lineCase directory "long-partial" (String.ofList (List.replicate 65537 'x')) "β\n"
  IO.println "getLine stream-state comparison completed"
