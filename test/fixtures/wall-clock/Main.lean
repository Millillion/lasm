import Std.Time.DateTime.Timestamp

def main (args : List String) : IO Unit := do
  if args == ["error"] then
    let caught ← try
      discard <| Std.Time.Timestamp.now
      pure false
    catch error =>
      match error with
      | .hardwareFault code message =>
        pure (code == 5 && message == "expected clock failure")
      | _ => pure false
    unless caught do throw <| IO.userError "clock error did not reach Lean"
    IO.println "clock error propagated"
  else
    let mut samples : Array Int := #[]
    for _ in [0:64] do
      let now ← Std.Time.Timestamp.now
      samples := samples.push now.toNanosecondsSinceUnixEpoch.val
    for sample in samples do IO.println sample
