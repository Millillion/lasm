module
public import Lean.Data.Json.Parser
public import Lean.Data.Json.Printer
public section
namespace App
open Lean

structure Todo where
  id : Nat
  title : String
  completed : Bool := false
  revision : Nat := 1
  deriving Inhabited

structure Store where
  nextId : Nat := 1
  todos : Array Todo := #[]

def Todo.json (todo : Todo) : Json := Json.mkObj [
  ("id", Json.num todo.id), ("title", Json.str todo.title),
  ("completed", Json.bool todo.completed), ("revision", Json.num todo.revision)]

def Store.json (store : Store) : Json := Json.mkObj [
  ("schemaVersion", Json.num 1), ("nextId", Json.num store.nextId),
  ("todos", .arr (store.todos.map Todo.json))]

def titleValue (title : String) : Except String String := do
  let value := title.trimAscii.toString
  unless 0 < value.length && value.length ≤ 120 do
    throw "title must contain 1 to 120 characters"
  if value.contains '\x00' then throw "title must not contain NUL"
  return value

def decodeStore (json : Json) : Except String Store := do
  unless (← (← json.getObjVal? "schemaVersion").getNat?) == 1 do throw "Unsupported store schema"
  let nextId ← (← json.getObjVal? "nextId").getNat?
  let mut todos := #[]
  for value in ← (← json.getObjVal? "todos").getArr? do
    let id ← (← value.getObjVal? "id").getNat?
    if id == 0 || id ≥ nextId || todos.any (fun t : Todo => t.id == id) then throw "Invalid stored identifier"
    let title ← titleValue (← (← value.getObjVal? "title").getStr?)
    let completed ← (← value.getObjVal? "completed").getBool?
    let revision ← (← value.getObjVal? "revision").getNat?
    if revision == 0 then throw "Invalid stored revision"
    todos := todos.push { id, title, completed, revision }
  return { nextId, todos }

def loadStore (path : System.FilePath) : IO Store := do
  if !(← path.pathExists) then return {}
  let source ← IO.FS.readFile path
  IO.ofExcept <| (Json.parse source).bind decodeStore

def saveStore (path : System.FilePath) (store : Store) : IO Unit := do
  let temporary : System.FilePath := path.toString ++ ".tmp"
  try
    IO.FS.writeFile temporary store.json.compress
    IO.FS.rename temporary path
  catch error =>
    try IO.FS.removeFile temporary catch _ => pure ()
    throw error

end App
