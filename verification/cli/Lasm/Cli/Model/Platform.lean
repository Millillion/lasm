/-
# src/platform.mjs, in Lean: `responseFile`, `insideDirectory`

A model of the JavaScript, written to mirror it expression for expression,
and checked against it on generated inputs by
test/models/cli-differential.mjs (the `cli-models` workflow).
Lasm.Cli.Theorems proves its propositions.

`insideDirectory(directory, file, path.posix)` is modelled over
`path.posix.relative`, which resolves both paths against `process.cwd()`
(a parameter, absolute) and then walks their characters; the model takes
their segments (`resolveSegments`: `normalizeString`'s stack) and writes `..` for each segment of the directory
past the common prefix, then the rest of the file's (`relativePath`); the
differential checks that this is Node's string. On Windows `node:path`'s
win32 rules apply (drive letters, `\`, case), which are not modelled.
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

/-- `normalizeString`'s segments of an absolute path: `.` and empty segments
dropped, `..` pops (nothing above the root). -/
def pushAbsoluteSegment (stack : List (List Char)) (seg : List Char) : List (List Char) :=
  if seg = [] ∨ seg = ['.'] then stack
  else if seg = ['.', '.'] then stack.dropLast
  else stack ++ [seg]

/-- The segments of `path.posix.resolve(p)` from the absolute `cwd`. -/
def resolveSegments (cwd p : List Char) : List (List Char) :=
  let full := if p.head? = some '/' then p else cwd ++ ['/'] ++ p
  (full.splitOn '/').foldl pushAbsoluteSegment []

/-- The length of the common prefix of two lists of segments. -/
def commonPrefix : List (List Char) → List (List Char) → Nat
  | a :: as, b :: bs => if a = b then commonPrefix as bs + 1 else 0
  | _, _ => 0

/-- `path.posix.relative(from, to)`. -/
def relativePath (cwd fromP toP : List Char) : List Char :=
  if fromP = toP then [] else
  let f := resolveSegments cwd fromP
  let t := resolveSegments cwd toP
  let k := commonPrefix f t
  ['/'].intercalate (List.replicate (f.length - k) ['.', '.'] ++ t.drop k)

/-- `insideDirectory(directory, file, path.posix)`. -/
def insideDirectoryModel (cwd directory file : List Char) : Bool :=
  let r := relativePath cwd directory file
  r ≠ ['.', '.'] && !("../".toList.isPrefixOf r) && r.head? != some '/'

end Lasm.Cli
