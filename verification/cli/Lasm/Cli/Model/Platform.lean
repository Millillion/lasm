/-
# src/platform.mjs, in Lean: `responseFile`

A model of the JavaScript, written to mirror it expression for expression,
and checked against it on generated inputs by
test/models/cli-differential.mjs (the `cli-models` workflow).
Lasm.Cli.Theorems proves its propositions.
-/

namespace Lasm.Cli

/-- `argument.replaceAll('\\', '\\\\').replaceAll('"', '\\"')`: the second
pass sees only the original double quotes (the first adds none), so each
character is escaped once, on its own. -/
def escapeChar (c : Char) : List Char :=
  if c = '\\' then ['\\', '\\'] else if c = '"' then ['\\', '"'] else [c]

/-- One argument, quoted: `'"' + escaped + '"'`. -/
def quoteArgument (a : String) : String :=
  String.ofList ('"' :: a.toList.flatMap escapeChar ++ ['"'])

/-- The arguments `responseFile` refuses: those holding NUL, `\r` or `\n`
(`/[\0\r\n]/`). -/
def unsafeArgument (a : String) : Bool :=
  a.toList.any fun c => c = '\x00' || c = '\r' || c = '\n'

/-- `responseFile(arguments)`: each argument quoted, joined by newlines,
with a final newline; it throws (`.error`, its message) on an argument with
NUL, `\r` or `\n`. -/
def responseFile (args : List String) : Except String String :=
  if args.any unsafeArgument then .error "Linker arguments cannot contain NUL or newlines"
  else .ok (String.intercalate "\n" (args.map quoteArgument) ++ "\n")

end Lasm.Cli
