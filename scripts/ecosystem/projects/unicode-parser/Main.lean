import UnicodeBasic
import Parser

open Parser

/-- Sum of comma-separated naturals with optional spaces, e.g. "1, 22,333". -/
abbrev P := SimpleParser String.Slice Char

def nat : P Nat := do
  let ds ← takeMany1 (tokenFilter Char.isDigit)
  return ds.foldl (fun n d => 10 * n + (d.toNat - '0'.toNat)) 0

def spaces : P Unit := dropMany (tokenFilter (· == ' '))

def list : P (Array Nat) := sepBy (spaces *> token ',' *> spaces) nat <* endOfInput

def main : IO Unit := do
  for c in ['A', 'ß', 'Σ', '٣', '中', '😀'] do
    IO.println s!"{c}: {Unicode.getName c} gc={repr (Unicode.getGC c)} upper={Unicode.getUpper c} lower={Unicode.getLower c} numeric={Unicode.isNumeric c} script={Unicode.getScriptName? (Unicode.getScript c)}"
  for input in ["1, 22,333", "4,5,", "7"] do
    match list.run input.toSlice with
    | .ok _ xs => IO.println s!"{input} -> {xs} sum {xs.foldl (· + ·) 0}"
    | .error _ e => IO.println s!"{input} -> error {e}"
