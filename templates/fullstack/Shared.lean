/-
Shared by the server (Server.lean) and the browser (Client.lean): the data,
the API and its validation. A rule proved here holds on both sides: the
browser checks a request before sending it, and the server's handler only
runs on requests that passed the same check, with the proof in hand.
-/
import Lasm.RPC.Core
open Lean Lasm.RPC

structure Todo where
  id : Nat
  title : String
  done : Bool
  deriving ToJson, FromJson, Repr, BEq, Inhabited

/-- A title as stored: without surrounding spaces. -/
def clean (title : String) : String := title.trimAscii.toString

/-- The longest title, in characters. -/
def maxTitle : Nat := 80

/-- What a new title must satisfy. (Irreducible: Lean compares it by name, and
proofs use `checkTitle_ok` instead of computing it.) -/
@[irreducible] def checkTitle (title : String) : Except String Unit :=
  let n := (clean title).length
  if n = 0 then .error "Write something first."
  else if n > maxTitle then .error s!"Keep it under {maxTitle} characters."
  else .ok ()

/-- Proved once, holds in the browser and on the server: an accepted title is
non-empty and at most `maxTitle` characters long once cleaned. -/
theorem checkTitle_ok {title : String} (h : checkTitle title = .ok ()) :
    0 < (clean title).length ∧ (clean title).length ≤ maxTitle := by
  unfold checkTitle at h
  by_cases h0 : (clean title).length = 0
  · simp [h0] at h
  · by_cases h1 : (clean title).length > maxTitle
    · simp [h0, h1] at h
    · omega

structure NewTodo where
  title : String
  deriving ToJson, FromJson

structure TodoRef where
  id : Nat
  deriving ToJson, FromJson

structure Nothing where
  deriving ToJson, FromJson

/-! The API: `POST /rpc/<name>`, JSON in and out. -/

def listTodos : Endpoint Nothing (Array Todo) := { name := "listTodos" }
def addTodo : Endpoint NewTodo Todo := { name := "addTodo", validate := fun r => checkTitle r.title }
def toggleTodo : Endpoint TodoRef Todo := { name := "toggleTodo" }
def deleteTodo : Endpoint TodoRef TodoRef := { name := "deleteTodo" }
