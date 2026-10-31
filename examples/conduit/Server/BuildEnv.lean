/-
`build_env! "NAME"`: the environment variable `NAME` of the build, as an
`Option String` constant in the program. For wasi-http, whose proxy world
gives a component no environment at run time (docs/WASI.md), so its
settings are fixed when it is built. This module only runs at compile time.
-/
import Lean.Elab.Term
open Lean Elab Term

namespace Conduit.Server

elab "build_env!" name:str : term => do
  return toExpr (← IO.getEnv name.getString)

end Conduit.Server
