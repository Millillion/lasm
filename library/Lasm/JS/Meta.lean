/-
Lasm.JS compile-time support: `@[js "module" "export"]` bindings and
`deriving ToJS, FromJS`. This module only runs while Lean elaborates; Lasm's
initializer planning keeps it (and Lean's elaborator) out of the Wasm link.
-/
import Lean.Elab.Deriving.Basic
import Lean.Elab.Command
import Lasm.JS.Core

namespace Lasm.JS.Meta
open Lean Elab Command Meta

/-- One binding, as recorded in the module's data for `lasm build`'s binding check.
For a project file (`@[js "./ffi/x.mjs" …]`), `relative` is the path as written
and `file` the Lean source file that wrote it: `lasm build` resolves the one
against the other's directory. -/
structure BindingInfo where
  declName : Name
  module : String
  path : String
  construct : Bool
  arity : Nat
  relative : String := ""
  file : String := ""
  deriving Inhabited, Repr

/-- JSON text of one binding (what the binding check reads from .olean files). -/
def BindingInfo.json (b : BindingInfo) : String :=
  let q (s : String) := (Json.str s).compress
  let project := if b.relative.isEmpty then "" else s!",\"relative\":{q b.relative},\"file\":{q b.file}"
  s!"\{\"name\":{q b.declName.toString},\"module\":{q b.module},\"path\":{q b.path},\"construct\":{b.construct},\"arity\":{b.arity}{project}}"

/-- Whether a binding's module is a JavaScript file of the project, written
relative to the Lean file: `./ffi/x.mjs`, `../shared/y.mjs`. -/
def isProjectFile (module : String) : Bool := module.startsWith "./" || module.startsWith "../"

/-- The specifier a project file is loaded by at run time: its path from the
source root of the declaring Lean module `mod` (whose file is `A/B/M.lean`
for module `A.B.M`), normalized, starting with `./` (or with `../` above the
root). The same file named from two Lean files gets the same specifier. -/
def projectSpecifier (mod : Name) (relative : String) : String :=
  let dir := mod.components.dropLast.map (·.toString (escape := false))
  let parts := dir ++ relative.splitOn "/"
  let normal := parts.foldl (init := ([] : List String)) fun acc part =>
    match part, acc with
    | "", _ | ".", _ => acc
    | "..", [] => [".."]
    | "..", ".." :: _ => ".." :: acc
    | "..", _ :: rest => rest
    | p, _ => p :: acc
  let path := "/".intercalate normal.reverse
  if path.startsWith "../" then path else "./" ++ path

#guard projectSpecifier `Main "./ffi/x.mjs" == "./ffi/x.mjs"
#guard projectSpecifier `App.Server "./ffi/x.mjs" == "./App/ffi/x.mjs"
#guard projectSpecifier `App.Server "../ffi/./x.mjs" == "./ffi/x.mjs"
#guard projectSpecifier `Main "../../shared/y.mjs" == "../../shared/y.mjs"

/-- Bindings declared in each module (entries are JSON strings). -/
initialize bindingExtension : SimplePersistentEnvExtension String (Array String) ←
  registerSimplePersistentEnvExtension {
    addEntryFn := Array.push
    addImportedFn := fun _ => #[]
  }

/-- Explicit arguments of a binding's type, and whether it ends in `IO _`. -/
private partial def explicitArity (type : Expr) : MetaM Nat :=
  forallTelescope type fun xs _ => do
    let mut n := 0
    for x in xs do
      if (← x.fvarId!.getBinderInfo).isExplicit then n := n + 1
    return n

/-- `@[js "module" "export"] opaque f : A → B → IO C` binds `f` to the export
(`"default"`; `""` for the module value itself; `"a.b"` for a nested export).
`@[js "module" "new Export"]` calls it with `new`. A module starting with
`./` or `../` is a JavaScript file of the project, relative to this Lean
file (`@[js "./ffi/stream.mjs" "writeAndEnd"]`): `lasm build` ships it, and
the files it imports by relative path, with the program on every target. -/
syntax (name := jsAttr) "js " str str : attr

/-- `@[js …] opaque` elaborates to a `def` over `Bindable.bind` and records the
binding in the module's data (`bindingExtension`) for `lasm build`'s binding
check, with no attribute or syntax of its own. -/
elab_rules : command
  | `($[$doc:docComment]? @[js $m:str $e:str] opaque $n:ident : $t:term) => do
    let spec := e.getString.trimAscii.toString
    let (construct, path) := if spec.startsWith "new " then (true, (spec.drop 4).trimAscii.toString) else (false, spec)
    let name := quote n.getId.toString
    let pathLit := Syntax.mkStrLit path
    -- A project file is loaded by its path from the source root (projectSpecifier).
    let written := m.getString
    let project := isProjectFile written
    let mainModule ← getMainModule
    let module := if project then projectSpecifier mainModule written else written
    let moduleLit := Syntax.mkStrLit module
    elabCommand (← `($[$doc:docComment]? @[noinline] def $n : $t :=
        Lasm.JS.Bindable.bind (α := $t)
          { name := $name, module := $moduleLit, path := $pathLit, construct := $(quote construct),
            arity := Lasm.JS.Bindable.arity (α := $t) } #[]))
    let decl := (← getCurrNamespace) ++ n.getId
    let info ← getConstInfo decl
    let nArgs ← liftTermElabM (explicitArity info.type)
    let fileName ← getFileName
    let b : BindingInfo := {
      declName := decl, module := module, path := path, construct := construct, arity := nArgs
      relative := if project then written else ""
      file := if project then fileName else "" }
    modifyEnv fun env => bindingExtension.addEntry env b.json

/-! Deriving -/

private def structureFields (declName : Name) : CommandElabM (Option (Array Name)) := do
  let env ← getEnv
  unless isStructure env declName do return none
  return some (getStructureFieldsFlattened env declName (includeSubobjectFields := false))

private def enumConstructors (declName : Name) : CommandElabM (Option (Array Name)) := do
  let env ← getEnv
  let some (.inductInfo info) := env.find? declName | return none
  if info.numParams != 0 || info.numIndices != 0 then return none
  let mut names := #[]
  for ctor in info.ctors do
    let some (.ctorInfo c) := env.find? ctor | return none
    if c.numFields != 0 then return none
    names := names.push ctor
  return some names

private def checkSimple (declName : Name) : CommandElabM Unit := do
  let some (.inductInfo info) := (← getEnv).find? declName | throwError "Lasm.JS deriving: {declName} is not an inductive type"
  if info.numParams != 0 then
    throwError "Lasm.JS deriving: {declName} has parameters; write the ToJS/FromJS instances by hand"

def mkToJS (declNames : Array Name) : CommandElabM Bool := do
  if declNames.size != 1 then return false
  let declName := declNames[0]!
  checkSimple declName
  let T := mkIdent declName
  if let some fields ← structureFields declName then
    let entries ← fields.mapM fun f =>
      `(term| ($(quote f.toString), Lasm.JS.toJS ($(mkIdent (declName ++ f)) x)))
    elabCommand (← `(instance : Lasm.JS.ToJS $T := ⟨fun x => Lasm.JS.Data.object #[$entries,*]⟩))
    return true
  if let some ctors ← enumConstructors declName then
    let alts ← ctors.mapM fun c =>
      `(Lean.Parser.Term.matchAltExpr| | $(mkIdent c):ident => Lasm.JS.Data.string $(quote c.getString!))
    elabCommand (← `(instance : Lasm.JS.ToJS $T := ⟨fun x => match x with $alts:matchAlt*⟩))
    return true
  throwError "Lasm.JS deriving ToJS: {declName} must be a structure or an enumeration (constructors without fields)"

def mkFromJS (declNames : Array Name) : CommandElabM Bool := do
  if declNames.size != 1 then return false
  let declName := declNames[0]!
  checkSimple declName
  let T := mkIdent declName
  let typeName := quote declName.toString
  if let some fields ← structureFields declName then
    let env ← getEnv
    let mut binders : Array (TSyntax ``Lean.Parser.Term.structInstField) := #[]
    for field in fields do
      let some proj := getProjFnForField? env declName field | throwError "Lasm.JS deriving: no projection for {field}"
      let projType := (env.find? proj).get!.type
      let fieldType ← liftTermElabM do
        forallTelescopeReducing projType fun _ body => PrettyPrinter.delab body
      binders := binders.push (← `(Lean.Parser.Term.structInstField| $(mkIdent field):ident := ← Lasm.JS.readField $fieldType d $(quote field.toString)))
    let fieldsSyntax : Syntax.TSepArray ``Lean.Parser.Term.structInstField "," := binders
    elabCommand (← `(instance : Lasm.JS.FromJS $T where
      fromJS d := do return { $fieldsSyntax:structInstField,* }
      typeName := $typeName))
    return true
  if let some ctors ← enumConstructors declName then
    let alts ← ctors.mapM fun c =>
      `(Lean.Parser.Term.matchAltExpr| | Lasm.JS.Data.string $(quote c.getString!) => Except.ok $(mkIdent c))
    elabCommand (← `(instance : Lasm.JS.FromJS $T where
      fromJS d := match d with
        $alts:matchAlt*
        | _ => Except.error "not one of the constructor names"
      typeName := $typeName))
    return true
  throwError "Lasm.JS deriving FromJS: {declName} must be a structure or an enumeration (constructors without fields)"

initialize
  registerDerivingHandler ``Lasm.JS.ToJS mkToJS
  registerDerivingHandler ``Lasm.JS.FromJS mkFromJS

end Lasm.JS.Meta
