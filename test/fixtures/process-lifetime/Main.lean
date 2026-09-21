import Init

deriving instance Repr for IO.Error

private def result (label : String) (action : IO Unit) : IO Unit := do
  try
    action
    IO.println s!"{label}: ok"
  catch error => IO.println s!"{label}: {repr error}"

def main : IO Unit := do
  let child ← IO.Process.spawn {
    cmd := "/bin/sh", args := #["-c", "exit 7"],
    stdin := .null, stdout := .null, stderr := .null }
  IO.println s!"wait: {← child.wait}"
  result "wait again" do discard <| child.wait
  result "tryWait again" do discard <| child.tryWait
  result "kill after wait" child.kill
  let zombie ← IO.Process.spawn {
    cmd := "/bin/sh", args := #["-c", "printf ready"],
    stdin := .null, stdout := .piped, stderr := .null }
  let output ← zombie.stdout.readToEnd
  unless output == "ready" do throw <| IO.userError "unexpected child output"
  IO.sleep 20
  result "kill before wait" zombie.kill
  IO.println s!"zombie wait: {← zombie.wait}"
  result "kill after reaping zombie" zombie.kill
  let group ← IO.Process.spawn {
    cmd := "/bin/sh", args := #["-c", "exit 0"],
    stdin := .null, stdout := .null, stderr := .null, setsid := true }
  IO.println s!"group wait: {← group.wait}"
  result "kill reaped empty group" group.kill
  let liveGroup ← IO.Process.spawn {
    cmd := "/bin/sh", args := #["-c", "/bin/sleep 10 & printf 'ready\\n'"],
    stdin := .null, stdout := .piped, stderr := .null, setsid := true }
  unless (← liveGroup.stdout.getLine) == "ready\n" do
    throw <| IO.userError "background child readiness"
  IO.println s!"group leader wait: {← liveGroup.wait}"
  result "kill live group after leader wait" liveGroup.kill
  IO.println "process lifetime comparison completed"
