/-
Timestamps. The database keeps milliseconds since 1970-01-01T00:00:00Z; the
API shows them as ISO 8601 (`2026-10-27T09:41:07.123Z`), formatted here in
pure Lean so every target writes the same text.
-/
namespace Conduit

/-- Days since 1970-01-01 to (year, month, day): Howard Hinnant's
`civil_from_days`, for dates from 1970 on. -/
def civilFromDays (days : Nat) : Nat × Nat × Nat :=
  let z := days + 719468
  let era := z / 146097
  let doe := z - era * 146097
  let yoe := (doe - doe / 1460 + doe / 36524 - doe / 146096) / 365
  let y := yoe + era * 400
  let doy := doe - (365 * yoe + yoe / 4 - yoe / 100)
  let mp := (5 * doy + 2) / 153
  let d := doy - (153 * mp + 2) / 5 + 1
  let m := if mp < 10 then mp + 3 else mp - 9
  (if m ≤ 2 then y + 1 else y, m, d)

/-- `n` in decimal, padded with zeros to `width` digits. -/
def pad (width n : Nat) : String :=
  let s := toString n
  String.ofList (List.replicate (width - s.length) '0') ++ s

/-- Milliseconds since the epoch as ISO 8601 in UTC. -/
def iso (ms : Nat) : String :=
  let (y, mo, d) := civilFromDays (ms / 86400000)
  let t := ms % 86400000
  s!"{pad 4 y}-{pad 2 mo}-{pad 2 d}T{pad 2 (t / 3600000)}:{pad 2 (t / 60000 % 60)}:{pad 2 (t / 1000 % 60)}.{pad 3 (t % 1000)}Z"

end Conduit
