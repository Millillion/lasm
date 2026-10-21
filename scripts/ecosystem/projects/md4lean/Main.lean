import MD4Lean

def doc := "# Title\n\nSome *emphasis*, **strong** and `code`.\n\n- one\n- two\n\n| a | b |\n|---|---|\n| 1 | 2 |\n\n[link](https://lean-lang.org)\n"

def main : IO Unit := do
  match MD4Lean.renderHtml doc with
  | some html => IO.print html
  | none => IO.println "parse failed"
  match MD4Lean.renderHtml doc (parserFlags := MD4Lean.MD_DIALECT_GITHUB) with
  | some html => IO.print html
  | none => IO.println "parse failed"
