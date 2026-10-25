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

/-- One binding, as recorded in the module's data for `lasm build`'s binding check. -/
structure BindingInfo where
  declName : Name
  module : String
  path : String
  construct : Bool
  arity : Nat
  deriving Inhabited, Repr

/-- JSON text of one binding (what the binding check reads from .olean files). -/
def BindingInfo.json (b : BindingInfo) : String :=
  let q (s : String) := (Json.str s).compress
  s!"\{\"name\":{q b.declName.toString},\"module\":{q b.module},\"path\":{q b.path},\"construct\":{b.construct},\"arity\":{b.arity}}"

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

syntax (name := lasmJsRecord) "lasm_js_record " str str (" new")? : attr

initialize registerBuiltinAttribute {
  name := `lasmJsRecord
  descr := "Records a Lasm.JS binding for the build-time binding check (added by `@[js]`)."
  applicationTime := .afterTypeChecking
  add := fun decl stx _ => do
    let `(attr| lasm_js_record $m:str $p:str $[new%$c]?) := stx | throwUnsupportedSyntax
    let info ← getConstInfo decl
    let arity ← (explicitArity info.type).run' {} {}
    let b : BindingInfo := { declName := decl, module := m.getString, path := p.getString, construct := c.isSome, arity }
    modifyEnv fun env => bindingExtension.addEntry env b.json
}

/-- `@[js "module" "export"] opaque f : A → B → IO C` binds `f` to the export
(`"default"`; `""` for the module value itself; `"a.b"` for a nested export).
`@[js "module" "new Export"]` calls it with `new`. -/
syntax (name := jsAttr) "js " str str : attr

macro_rules
  | `($[$doc:docComment]? @[js $m:str $e:str] opaque $n:ident : $t:term) => do
    let spec := e.getString.trimAscii.toString
    let (construct, path) := if spec.startsWith "new " then (true, (spec.drop 4).trimAscii.toString) else (false, spec)
    let name := quote n.getId.toString
    let pathLit := Syntax.mkStrLit path
    let definition ← `($[$doc:docComment]? @[noinline] def $n : $t :=
        Lasm.JS.Bindable.bind (α := $t)
          { name := $name, module := $m, path := $pathLit, construct := $(quote construct),
            arity := Lasm.JS.Bindable.arity (α := $t) } #[])
    let record ← if construct then `(attribute [lasm_js_record $m $pathLit new] $n)
      else `(attribute [lasm_js_record $m $pathLit] $n)
    return mkNullNode #[definition, record]

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
