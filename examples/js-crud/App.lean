/-
The application shared by Express.lean and Hono.lean: a small to-do API with
Postgres (npm `pg`) and JSON Web Tokens (npm `jose`).

  POST /login         {"user": "ada"}             → {"token": "…"}
  GET  /todos         Authorization: Bearer token → [{"id", "title", "done"}]
  POST /todos         {"title": "…"} + token      → 201 {"id", "title", "done"}
  GET  /health                                    → {"ok": true}

Request handling runs in `Async`: while a handler awaits Postgres or jose it
holds no Lean thread, so any number of requests can wait at once.

Configuration: DATABASE_URL (Postgres connection string), JWT_SECRET, PORT (default 3000),
HOST (default 0.0.0.0, every interface, as containers and hosting platforms need).
-/
import Lasm.JS
open Lasm.JS

namespace App

structure Todo where
  id : Nat
  title : String
  done : Bool
  deriving ToJS, FromJS, Repr, Inhabited

structure NewTodo where
  title : String
  deriving FromJS

structure Login where
  user : String
  deriving FromJS

/-! Bindings: one line per JavaScript export. -/

/-- `new pg.Pool({ connectionString })` -/
@[js "pg" "new Pool"] opaque newPool : Data → IO Value
/-- `new jose.SignJWT(payload)` -/
@[js "jose" "new SignJWT"] opaque newSignJWT : Data → IO Value
/-- `await jose.jwtVerify(token, key)`, without holding a Lean thread (`Async`). -/
@[js "jose" "jwtVerify"] opaque jwtVerify : String → ByteArray → Async Data

structure Context where
  pool : Value
  secret : ByteArray

def env (name fallback : String) : IO String := return (← IO.getEnv name).getD fallback

/-- At startup (`IO`): awaiting here blocks the main thread, which is fine. -/
def connect : IO Context := do
  let url ← env "DATABASE_URL" "postgres://postgres:postgres@127.0.0.1:5432/postgres"
  let pool ← newPool (obj [("connectionString", toJS url)])
  let _ : Value ← pool.callMethodAwait "query"
    #[toJS "CREATE TABLE IF NOT EXISTS lasm_todos (id SERIAL PRIMARY KEY, owner TEXT NOT NULL, title TEXT NOT NULL, done BOOLEAN NOT NULL DEFAULT FALSE)"] Value
  return { pool, secret := (← env "JWT_SECRET" "development secret, change me").toUTF8 }

/-- Rows of a `pg` query (`result.rows`), converted to `α`. -/
def query (α : Type) [FromJS α] (ctx : Context) (sql : String) (params : Array Data) : Async (Array α) := do
  let result : Value ← ctx.pool.callMethodAwait "query" #[toJS sql, .array params] Value
  result.get "rows" (Array α)

def issueToken (ctx : Context) (user : String) : Async String := do
  let jwt ← newSignJWT (obj [("sub", toJS user)])
  let jwt ← jwt.callMethod "setProtectedHeader" #[obj [("alg", toJS "HS256")]]
  let jwt ← jwt.callMethod "setExpirationTime" #[toJS "2h"]
  jwt.callMethodAwait "sign" #[toJS ctx.secret] String

/-- The user of a valid `Authorization: Bearer …` header. -/
def authenticate (ctx : Context) (header : Option String) : Async (Option String) := do
  let some header := header | return none
  unless header.startsWith "Bearer " do return none
  try
    let verified ← jwtVerify (header.drop 7).toString ctx.secret
    match verified.field "payload" |>.field "sub" with
    | .string user => return some user
    | _ => return none
  catch _ => return none

/-- One HTTP response: status and JSON body. -/
structure Response where
  status : Nat
  body : Data

def problem (status : Nat) (message : String) : Response := { status, body := obj [("error", toJS message)] }

/-- The whole API, independent of the web framework. -/
def handle (ctx : Context) (method path : String) (authorization : Option String) (body : Data) : Async Response := do
  match method, path with
  | "GET", "/health" => return { status := 200, body := obj [("ok", toJS true)] }
  | "POST", "/login" =>
    match (FromJS.fromJS body : Except String Login) with
    | .ok login => return { status := 200, body := obj [("token", toJS (← issueToken ctx login.user))] }
    | .error _ => return problem 400 "expected {\"user\": string}"
  | _, "/todos" =>
    let some user ← authenticate ctx authorization | return problem 401 "missing or invalid token"
    if method == "GET" then
      let todos ← query Todo ctx "SELECT id, title, done FROM lasm_todos WHERE owner = $1 ORDER BY id" #[toJS user]
      return { status := 200, body := toJS todos }
    else if method == "POST" then
      match (FromJS.fromJS body : Except String NewTodo) with
      | .ok todo =>
        let rows ← query Todo ctx "INSERT INTO lasm_todos (owner, title) VALUES ($1, $2) RETURNING id, title, done"
          #[toJS user, toJS todo.title]
        return { status := 201, body := toJS rows[0]! }
      | .error _ => return problem 400 "expected {\"title\": string}"
    else return problem 405 "method not allowed"
  | _, _ => return problem 404 "not found"

end App
