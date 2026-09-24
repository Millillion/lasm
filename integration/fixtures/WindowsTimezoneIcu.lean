import Std.Time

-- This supplementary native oracle exercises the original ICU branch of the
-- upstream runtime. It is separate from unchanged upstream-suite tests.
def main (args : List String) : IO Unit := do
  try
    match args with
    | ["transition", name, seconds, initial] =>
      let result ← Std.Time.Database.Windows.getNextTransition name
        (Int64.ofInt seconds.toInt!) (initial == "true")
      match result with
      | none => IO.println "value|none"
      | some (time, zone) =>
        IO.println s!"value|some|{time}|{zone.offset.second.val}|{zone.isDST}|{zone.name}|{zone.abbreviation}"
    | ["local", seconds] =>
      IO.println s!"value|{← Std.Time.Database.Windows.getLocalTimeZoneIdentifierAt (Int64.ofInt seconds.toInt!)}"
    | _ => throw (IO.userError "invalid oracle arguments")
  catch
    | .invalidArgument none code message => IO.println s!"error|{code}|{message}"
    | error => throw error
