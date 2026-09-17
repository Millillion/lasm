module
prelude
public import Model

public section
namespace Board
open Lean

structure Reply where
  status : Nat
  body : Json
  headers : List (String × Json) := []

def Reply.json (reply : Reply) : Json := Json.mkObj [
  ("status", number reply.status), ("body", reply.body), ("headers", Json.mkObj reply.headers)]

def failure (status : Nat) (code message : String) : Reply :=
  { status, body := Json.mkObj [("error", Json.mkObj [("code", .str code), ("message", .str message)])] }

def invalid (message : String) : Reply := failure 400 "invalid_request" message
def validate (result : Except String α) : Except Reply α := result.mapError invalid

inductive Route where
  | list | create | summary | get (id : Nat) | patch (id : Nat) | delete (id : Nat) | importTemplate

def route (method path : String) : Except Reply Route := do
  let methodError := failure 405 "method_not_allowed" "Method is not supported for this endpoint"
  match path.splitOn "/" with
  | ["", "api", "tasks"] =>
    match method with
    | "GET" => return .list
    | "POST" => return .create
    | _ => throw methodError
  | ["", "api", "stats"] =>
    if method == "GET" then return .summary else throw methodError
  | ["", "api", "tasks", "import"] =>
    if method == "POST" then return .importTemplate else throw methodError
  | ["", "api", "tasks", value] =>
    let some id := value.toNat? | throw (invalid "id must be a positive integer")
    let id ← validate (positive id "id")
    match method with
    | "GET" => return .get id
    | "PATCH" => return .patch id
    | "DELETE" => return .delete id
    | _ => throw methodError
  | _ => throw (failure 404 "not_found" "Endpoint does not exist")

def taskReply (task : Task) (status := 200) : Reply :=
  { status, body := task.json, headers := [("etag", .str s!"\"{task.id}-{task.version}\"")] }

def findTask (store : Store) (id : Nat) : Except Reply Task :=
  match store.tasks.find? (fun task => task.id == id) with
  | some task => .ok task
  | none => .error (failure 404 "not_found" "Task does not exist")

def queryNat (query : Json) (name : String) (fallback : Nat) : Except String Nat := do
  match field? query name with
  | none => return fallback
  | some _ =>
    let value ← text query name
    let some n := value.toNat? | throw s!"{name} must be a nonnegative integer"
    return n

def listTasks (store : Store) (query : Json) : Except String Reply := do
  fields query ["status", "q", "offset", "limit"]
  let status ← match field? query "status" with
    | none => pure ""
    | some _ => statusValue (← text query "status")
  let search ← match field? query "q" with
    | none => pure ""
    | some _ => text query "q"
  let offset ← queryNat query "offset" 0
  if offset > 1000000000 then throw "offset is out of range"
  let limit ← queryNat query "limit" 20
  unless 0 < limit && limit ≤ 100 do throw "limit must be from 1 through 100"
  let matching := store.tasks.filter fun task =>
    (status == "" || task.status == status) &&
    (search == "" || (task.title.splitOn search).length > 1 || (task.description.splitOn search).length > 1)
  let items := matching.toList.drop offset |>.take limit |>.toArray |>.map Task.json
  return { status := 200, body := Json.mkObj [
    ("items", .arr items), ("total", number matching.size),
    ("offset", number offset), ("limit", number limit)] }

def summary (store : Store) : Reply :=
  { status := 200, body := Json.mkObj [
    ("total", number store.tasks.size),
    ("open", number (store.tasks.filter (·.status == "open")).size),
    ("done", number (store.tasks.filter (·.status == "done")).size),
    ("byPriority", .arr ((#[1, 2, 3, 4, 5] : Array Nat).map fun priority => Json.mkObj [
      ("priority", number priority), ("count", number (store.tasks.filter (·.priority == priority)).size)]))] }

inductive Outcome where
  | respond (reply : Reply)
  | save (store : Store) (reply : Reply)

def createTask (store : Store) (body : Json) : Except Reply Outcome := do
  if store.tasks.size ≥ 250 || store.nextId ≥ 1000000000 then
    throw (failure 507 "store_full" "The example task store is full")
  let task ← validate (newTask body store.nextId)
  let next := { store with nextId := store.nextId + 1, tasks := store.tasks.push task }
  return .save next { (taskReply task 201) with
    headers := ("location", .str s!"/api/tasks/{task.id}") :: (taskReply task).headers }

def patchTask (store : Store) (id : Nat) (body : Json) : Except Reply Outcome := do
  validate (fields body ["version", "title", "description", "status", "priority"])
  let object ← validate body.getObj?
  if object.toArray.size < 2 then throw (invalid "Provide version and at least one change")
  let task ← findTask store id
  let version ← validate (do positive (← nat body "version") "version")
  if version != task.version then throw (failure 409 "version_conflict" "Task has changed; read it again before updating")
  if version ≥ 1000000000 then throw (failure 507 "version_limit" "Task version limit reached")
  let title ← match field? body "title" with
    | none => pure task.title
    | some _ => validate (do titleValue (← text body "title"))
  let description ← match field? body "description" with
    | none => pure task.description
    | some _ => validate (do descriptionValue (← text body "description"))
  let priority ← match field? body "priority" with
    | none => pure task.priority
    | some _ => validate (do priorityValue (← nat body "priority"))
  let status ← match field? body "status" with
    | none => pure task.status
    | some _ => validate (do statusValue (← text body "status"))
  let updated := { task with title, description, priority, status, version := version + 1 }
  return .save { store with tasks := store.tasks.map (fun t => if t.id == id then updated else t) } (taskReply updated)

def applyRoute (route : Route) (store : Store) (query body : Json) : Except Reply Outcome := do
  match route with
  | .list => return .respond (← validate (listTasks store query))
  | .summary =>
    validate (fields query [])
    return .respond (summary store)
  | .get id =>
    validate (fields query [])
    return .respond (taskReply (← findTask store id))
  | .create | .importTemplate =>
    validate (fields query [])
    createTask store body
  | .patch id =>
    validate (fields query [])
    patchTask store id body
  | .delete id =>
    validate (fields query ["version"])
    let task ← findTask store id
    let version ← validate (do positive (← queryNat query "version" 0) "version")
    if version != task.version then throw (failure 409 "version_conflict" "Task has changed; read it again before deleting")
    return .save { store with tasks := store.tasks.filter (fun t => t.id != id) } { status := 204, body := .null }

def initialState : String := (Store.json {}).compress

def loadStore : IO Store := do
  let bytes ← Lasm.readBytes "tasks.json"
  match decodeBytes bytes >>= decodeStore with
  | .ok store => return store
  | .error _ => throw (IO.userError "Invalid stored task data")

def perform (route : Route) (query body : Json) : IO Reply := do
  let store ← loadStore
  match applyRoute route store query body with
  | .error reply => return reply
  | .ok (.respond reply) => return reply
  | .ok (.save next reply) =>
    Lasm.writeBytes "tasks.json" next.json.compress.toUTF8
    return reply

def importTask (query body : Json) (upstream : String) : IO Reply := do
  let parsed : Except String Nat := do
    fields query []
    fields body ["templateId"]
    positive (← nat body "templateId") "templateId"
  let id ← match parsed with
    | .error message => return invalid message
    | .ok id => pure id
  if upstream == "" then return failure 503 "upstream_disabled" "Template imports are not configured"
  let template ← try
    let bytes ← Lasm.fetchBytes s!"{upstream}/templates/{id}"
    match decodeBytes bytes with
    | .ok json => pure json
    | .error _ => return failure 502 "invalid_upstream_response" "Template service returned invalid JSON"
  catch _ => return failure 502 "upstream_unavailable" "Template service request failed"
  match newTask template 1 with
  | .error _ => return failure 502 "invalid_upstream_response" "Template service returned an invalid task"
  | .ok _ => perform .importTemplate query template

/-- Express supplies transport data; routing, validation, persistence, and replies live here. -/
def handle (method path queryText bodyText upstream : String) : IO String := do
  if method == "GET" && path == "/health" then
    return (Reply.json { status := 200, body := Json.mkObj [("ok", .bool true), ("implementation", .str "Lean/Wasm")] }).compress
  let target ← match route method path with
    | .error reply => return reply.json.compress
    | .ok target => pure target
  let query ← match parseJson queryText with
    | .error message => return (invalid message).json.compress
    | .ok query => pure query
  let body ← if method == "POST" || method == "PATCH" then
      match parseJson bodyText with
      | .error message => return (invalid message).json.compress
      | .ok body => pure body
    else pure Json.null
  let reply ← try
      match target with
      | .importTemplate => importTask query body upstream
      | _ => perform target query body
    catch _ => pure (failure 503 "storage_unavailable" "Task storage is unavailable or invalid")
  return reply.json.compress

end Board
