import Init

def main : IO Unit := do
  let child ← IO.Process.spawn {
    cmd := "/bin/sleep", args := #["10"],
    stdin := .null, stdout := .null, stderr := .null }
  IO.println child.pid
