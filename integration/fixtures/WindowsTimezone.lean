import Std.Time

deriving instance Repr for IO.Error

private def observe {α : Type} [Repr α] (name : String) (action : IO α) : IO Unit := do
  try
    IO.println s!"{name}: value {repr (← action)}"
  catch error => IO.println s!"{name}: error {repr error}"

-- These are ordinary shipped Lean APIs. On non-Windows hosts their native
-- errors are part of the contract, including calls requesting UTC.
def main (_args : List String) : IO Unit := do
  for (label, identifier) in [("utc", "UTC"), ("new-york", "America/New_York"),
      ("berlin", "Europe/Berlin"), ("unknown", "Lasm/No_such_zone"),
      ("embedded-nul", "UTC" ++ String.singleton (Char.ofNat 0) ++ "ignored"),
      ("long-name", String.ofList (List.replicate 300 'a'))] do
    observe s!"{label} initial" <|
      Std.Time.Database.Windows.getNextTransition identifier (-2147483648) true
    observe s!"{label} next" <|
      Std.Time.Database.Windows.getNextTransition identifier 946684800 false
  observe "local timezone at epoch" <|
    Std.Time.Database.Windows.getLocalTimeZoneIdentifierAt 0
  IO.println "windows timezone observations completed"
