/-
The sign-in and consent pages in the browser (`Lasm.UI`). The server renders
each page as a plain HTML form that works without JavaScript
(`Porter/Render.lean`), inside `<div data-lasm-app data-lasm-flags=…>`; this
app mounts there and replaces it with the same form, with a few things only
a script can do: the password can be shown, and the button says it is
working once pressed (it is never disabled, so the browser always sends the
form, with the button that was pressed).
The form still submits natively (no `fetch`): the server's answers, and so
every proposition about them, are the same with or without the app.

The flags (`Porter.Page.flags`) carry what the page shows: the kind of page,
the interaction's id, the client's name, the scopes, the user, and whether a
sign-in just failed.
-/
import Lasm.UI
import Lean.Data.Json
open Lean Lasm.UI

namespace Porter.Ui

inductive Kind where
  | login
  | consent
  deriving DecidableEq, Inhabited

structure Model where
  kind : Kind := .login
  interaction : String := ""
  client : String := ""
  /-- (scope, its description), for consent. -/
  scopes : List (String × String) := []
  user : String := ""
  failed : Bool := false
  username : String := ""
  password : String := ""
  showPassword : Bool := false
  submitting : Bool := false
  deriving Inhabited

inductive Msg where
  | username (s : String)
  | password (s : String)
  | toggleShow
  | submit

def fromFlags (j : Json) : Model :=
  let str (k : String) : String := (j.getObjValAs? String k).toOption.getD ""
  let scopes := match j.getObjVal? "scopes" with
    | .ok (.arr xs) => xs.toList.filterMap fun x =>
        match x.getObjValAs? String "scope", x.getObjValAs? String "text" with
        | .ok s, .ok t => some (s, t)
        | _, _ => none
    | _ => []
  { kind := if str "kind" = "consent" then .consent else .login, interaction := str "interaction",
    client := str "client", scopes, user := str "user",
    failed := (j.getObjValAs? Bool "failed").toOption.getD false }

/-- `update` never stops the form: `submit` only marks the button busy (the
listener does not prevent the browser's own submission). -/
def update : Msg → Model → Model
  | .username s, m => { m with username := s }
  | .password s, m => { m with password := s }
  | .toggleShow, m => { m with showPassword := !m.showPassword }
  | .submit, m => { m with submitting := true }

/-- The form's action, the interaction's id percent-encoded as the server does. -/
def action (m : Model) (what : String) : String :=
  "/interaction/" ++ String.join (m.interaction.toList.map fun c =>
    if c.isAlphanum || c = '-' || c = '_' || c = '.' || c = '~' then c.toString
    else String.join (c.toString.toUTF8.toList.map fun b =>
      "%" ++ (if b < 16 then "0" else "") ++ (Nat.toDigits 16 b.toNat |> String.ofList).toUpper)) ++ "/" ++ what

def loginView (m : Model) : Html Msg :=
  main_ [class_ "porter", data "porter-ui" "login"] [
    h1 [] [text "Sign in"],
    p [] [text "to continue to ", strong [] [text m.client]],
    (if m.failed then p [class_ "error", role "alert"] [text "The username or password is incorrect."] else empty),
    form [attr "method" "post", attr "action" (action m "login"), on "submit" (.succeed .submit)] [
      label [] [text "Username ",
        input [name "username", id_ "username", autocomplete "username", attr "required" "",
          attr "autofocus" "", value m.username, onInput .username]],
      label [] [text "Password ",
        input [name "password", id_ "password", type_ (if m.showPassword then "text" else "password"),
          autocomplete "current-password", attr "required" "", value m.password, onInput .password]],
      label [class_ "show"] [
        input [type_ "checkbox", id_ "show-password", checked m.showPassword, onClick .toggleShow],
        text " Show password"],
      button [type_ "submit", id_ "sign-in"]
        [text (if m.submitting then "Signing in…" else "Sign in")]]]

def consentView (m : Model) : Html Msg :=
  main_ [class_ "porter", data "porter-ui" "consent"] [
    h1 [] [text s!"Allow {m.client}?"],
    p [] [text "Signed in as ", strong [] [text m.user], text s!". {m.client} asks to:"],
    ul [id_ "scopes"] (m.scopes.map fun (s, t) => li [data "scope" s] [text t]),
    form [attr "method" "post", attr "action" (action m "consent"), on "submit" (.succeed .submit)] [
      button [type_ "submit", name "decision", attr "value" "allow", id_ "allow"]
        [text (if m.submitting then "Working…" else "Allow")],
      button [type_ "submit", name "decision", attr "value" "deny", id_ "deny", class_ "secondary",
        ] [text "Deny"]]]

def view (m : Model) : Html Msg :=
  match m.kind with
  | .login => loginView m
  | .consent => consentView m

end Porter.Ui
