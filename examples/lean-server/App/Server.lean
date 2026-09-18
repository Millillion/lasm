module
public import Std.Http
public import App.Model
public section
namespace App
open Std Async Http Lean

structure State where
  path : System.FilePath
  store : Std.Mutex Store
  stopped : IO.Promise Unit

private def respond (status : Http.Status) (json : Json) : Async (Response Body.Any) := do
  let response ← Response.new |>.status status |>.header! "x-powered-by" "Lean"
    |>.json json.compress
  return { response with body := Body.Any.ofBody response.body }

private def problem (status : Http.Status) (message : String) : Async (Response Body.Any) :=
  respond status (Json.mkObj [("error", .str message)])

private def parseBody (request : Request Body.Stream) : ContextAsync (Except String Json) := do
  let body : String ← request.body.readAll (maximumSize := some 16384)
  return (Json.parse body).mapError (fun _ => "Invalid JSON")

private def listTodos (state : State) : IO Json := state.store.atomically do
  return .arr ((← get).todos.map Todo.json)

private def createTodo (state : State) (json : Json) : IO (Except String Todo) := do
  let title := do titleValue (← (← json.getObjVal? "title").getStr?)
  match title with
  | .error message => return .error message
  | .ok title => state.store.atomically do
    let store ← get
    if store.todos.size ≥ 1000 then return .error "Todo limit reached"
    let todo : Todo := { id := store.nextId, title }
    let updated := { store with nextId := store.nextId + 1, todos := store.todos.push todo }
    saveStore state.path updated
    set updated
    return .ok todo

private def updateTodo (state : State) (id : Nat) (json : Json) : IO (Http.Status × Json) :=
  state.store.atomically do
    let store ← get
    let some index := store.todos.findIdx? (fun todo => todo.id == id)
      | return (.notFound, Json.mkObj [("error", .str "Todo not found")])
    let todo := store.todos[index]!
    let parsed := do
      let revision ← (← json.getObjVal? "revision").getNat?
      let completed ← (← json.getObjVal? "completed").getBool?
      pure (revision, completed)
    match parsed with
    | .error _ => return (.badRequest, Json.mkObj [("error", .str "revision and completed are required")])
    | .ok (revision, completed) =>
      if revision != todo.revision then
        return (.conflict, Json.mkObj [("error", .str "Revision conflict")])
      let updatedTodo := { todo with completed, revision := todo.revision + 1 }
      let updated := { store with todos := store.todos.set! index updatedTodo }
      saveStore state.path updated
      set updated
      return (.ok, updatedTodo.json)

private def deleteTodo (state : State) (id : Nat) : IO Bool := state.store.atomically do
  let store ← get
  if !store.todos.any (fun todo => todo.id == id) then return false
  let updated := { store with todos := store.todos.filter (fun todo => todo.id != id) }
  saveStore state.path updated
  set updated
  return true

def routes (state : State) (request : Request Body.Stream) : ContextAsync (Response Body.Any) := do
  let path := (toString request.line.uri.path).splitOn "/" |>.filter (· != "")
  match request.line.method, path with
  | .get, [] => respond .ok (Json.mkObj [("application", .str "Lean todo server")])
  | .get, ["health"] => respond .ok (Json.mkObj [("ok", .bool true)])
  | .get, ["todos"] => respond .ok (← listTodos state)
  | .post, ["todos"] =>
    match ← parseBody request with
    | .error message => problem .badRequest message
    | .ok json =>
      match ← createTodo state json with
      | .error message => problem .badRequest message
      | .ok todo => respond .created todo.json
  | .get, ["todos", rawId] =>
    let some id := rawId.toNat? | problem .badRequest "Invalid todo identifier"
    let todo ← state.store.atomically do return (← get).todos.find? (fun todo => todo.id == id)
    match todo with
    | some todo => respond .ok todo.json
    | none => problem .notFound "Todo not found"
  | .patch, ["todos", rawId] =>
    let some id := rawId.toNat? | problem .badRequest "Invalid todo identifier"
    match ← parseBody request with
    | .error message => problem .badRequest message
    | .ok json => let (status, body) ← updateTodo state id json; respond status body
  | .delete, ["todos", rawId] =>
    let some id := rawId.toNat? | problem .badRequest "Invalid todo identifier"
    if ← deleteTodo state id then respond .ok (Json.mkObj [("deleted", .bool true)])
    else problem .notFound "Todo not found"
  | .post, ["echo"] =>
    let body : ByteArray ← request.body.readAll (maximumSize := some 16384)
    let response ← Response.ok |>.bytes body
    return { response with body := Body.Any.ofBody response.body }
  | .get, ["events"] =>
    let response ← Response.ok |>.header! "content-type" "text/event-stream" |>.stream fun stream => do
      for n in [0:3] do
        stream.send { data := s!"data: {n}\n\n".toUTF8 }
        Async.sleep 10
      stream.close
    return { response with body := Body.Any.ofBody response.body }
  | .post, ["shutdown"] =>
    Async.background do
      Async.sleep 50
      state.stopped.resolve ()
    respond .ok (Json.mkObj [("stopping", .bool true)])
  | _, _ => problem .notFound "Route not found"

def serve (port : UInt16) (directory : System.FilePath) : IO Unit := do
  IO.FS.createDirAll directory
  let path := directory / "todos.json"
  let state : State := { path, store := ← Std.Mutex.new (← loadStore path), stopped := ← IO.Promise.new }
  Async.block do
    let handler := Http.Server.Handler.ofFns (fun request => do
      try routes state request
      catch error =>
        IO.eprintln s!"request failed: {error}"
        problem .internalServerError "Request failed")
      (fun error => IO.eprintln s!"connection: {error}")
    let server ← Http.Server.serve (.v4 ⟨.ofParts 127 0 0 1, port⟩) handler
      { maxBodySize := 16384, headerTimeout := 2000, lingeringTimeout := 200 }
    let some address := server.localAddr | throw (IO.userError "Server has no local address")
    IO.println s!"Listening on http://{address}"
    (← IO.getStdout).flush
    discard <| await state.stopped.result!
    server.shutdownAndWait
    IO.println "Server stopped"

end App
