import Regex

def dates := re! r"\d{4}-\d{2}-\d{2}"
def text := "2025-05-24: started\n2025-05-26: shipped, 2025-06-01 reviewed"

def main : IO Unit := do
  IO.println ((dates.findAll text).map (·.copy))
  IO.println (dates.count text)
  IO.println ((re! r"(\w+)@(\w+)\.org").extract "contact: ada@lean.org today")
  IO.println ((re! r"\s+").replaceAll "a  b \t c" " ")
  IO.println ((re! r",\s*").split "x, y,z" |>.map (·.copy))
  -- A regex compiled at run time from a string.
  match Regex.parse "(ab|cd)+e" with
  | .ok r => IO.println s!"{r.test "xxabcdabe"} {r.test "abab"}"
  | .error e => IO.println s!"error {repr e}"
