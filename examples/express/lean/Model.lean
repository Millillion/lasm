module
prelude
public import Lasm.IO
public import Lean.Data.Json.Parser
public import Lean.Data.Json.Printer
public import Init.Data.String

public section
namespace Board
open Lean

structure Task where
  id : Nat
  title : String
  description : String
  priority : Nat
  status : String
  version : Nat

structure Store where
  nextId : Nat := 1
  tasks : Array Task := #[]

def number (n : Nat) : Json := Json.num n

def Task.json (task : Task) : Json := Json.mkObj [
  ("id", number task.id), ("title", .str task.title),
  ("description", .str task.description), ("priority", number task.priority),
  ("status", .str task.status), ("version", number task.version)]

def Store.json (store : Store) : Json := Json.mkObj [
  ("schemaVersion", number 1), ("nextId", number store.nextId),
  ("tasks", .arr (store.tasks.map Task.json))]

def fields (json : Json) (allowed : List String) : Except String Unit := do
  let object ← json.getObj?
  for (name, _) in object.toArray do
    unless allowed.contains name do throw s!"Unknown field: {name}"

def field? (json : Json) (name : String) : Option Json := (json.getObjVal? name).toOption

def text (json : Json) (name : String) : Except String String := do
  let value ← json.getObjVal? name
  match value.getStr? with
  | .ok value => return value
  | .error _ => throw s!"{name} must be a string"

def nat (json : Json) (name : String) : Except String Nat := do
  let value ← json.getObjVal? name
  match value.getNat? with
  | .ok value => return value
  | .error _ => throw s!"{name} must be a nonnegative integer"

def positive (value : Nat) (name : String) : Except String Nat := do
  unless 0 < value && value ≤ 1000000000 do throw s!"{name} is out of range"
  return value

def titleValue (value : String) : Except String String := do
  let trimmed := value.trimAscii.toString
  unless 0 < trimmed.length && trimmed.length ≤ 120 do throw "title must contain 1 to 120 characters"
  if trimmed.contains '\x00' then throw "title must not contain NUL"
  return trimmed

def descriptionValue (value : String) : Except String String := do
  if value.length > 2000 then throw "description must contain at most 2000 characters"
  return value

def priorityValue (value : Nat) : Except String Nat := do
  unless 1 ≤ value && value ≤ 5 do throw "priority must be from 1 through 5"
  return value

def statusValue (value : String) : Except String String := do
  unless value == "open" || value == "done" do throw "status must be open or done"
  return value

def newTask (json : Json) (id : Nat) : Except String Task := do
  fields json ["title", "description", "priority"]
  let title ← titleValue (← text json "title")
  let description ← match field? json "description" with
    | none => pure ""
    | some _ => descriptionValue (← text json "description")
  let priority ← match field? json "priority" with
    | none => pure 3
    | some _ => priorityValue (← nat json "priority")
  return { id, title, description, priority, status := "open", version := 1 }

def decodeTask (json : Json) : Except String Task := do
  fields json ["id", "title", "description", "priority", "status", "version"]
  return {
    id := ← positive (← nat json "id") "id"
    title := ← titleValue (← text json "title")
    description := ← descriptionValue (← text json "description")
    priority := ← priorityValue (← nat json "priority")
    status := ← statusValue (← text json "status")
    version := ← positive (← nat json "version") "version" }

def decodeStore (json : Json) : Except String Store := do
  fields json ["schemaVersion", "nextId", "tasks"]
  unless (← nat json "schemaVersion") == 1 do throw "Unsupported store schema"
  let nextId ← positive (← nat json "nextId") "nextId"
  let values ← (← json.getObjVal? "tasks").getArr?
  if values.size > 250 then throw "Store task limit exceeded"
  let mut tasks := #[]
  let mut ids : Array Nat := #[]
  for value in values do
    let task ← decodeTask value
    if ids.contains task.id || task.id ≥ nextId then throw "Invalid stored task identifiers"
    ids := ids.push task.id
    tasks := tasks.push task
  return { nextId, tasks }

def parseJson (source : String) : Except String Json :=
  (Json.parse source).mapError (fun _ => "Invalid JSON")

def decodeBytes (bytes : ByteArray) : Except String Json := do
  let some text := String.fromUTF8? bytes | throw "Invalid UTF-8"
  parseJson text

end Board
