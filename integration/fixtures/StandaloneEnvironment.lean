/- Supplementary native/deployed environment comparison; ordinary Lean only. -/
import Init

private def observe (name : String) : IO Unit := do
  match ← IO.getEnv name with
  | none => IO.println s!"{name}: absent"
  | some value =>
    let bytes := value.toUTF8
    let checksum := bytes.foldl (fun (total : UInt64) byte => total + byte.toUInt64) 0
    IO.println s!"{name}: bytes={bytes.size}, checksum={checksum}"

def main : IO Unit := do
  for name in ["PATH", "HOME", "LEAN_NUM_THREADS", "LASM_EMPTY", "LASM_UNICODE"] do
    observe name
  for index in [:20] do
    observe s!"LASM_WIDE_{index}"
