import Init

deriving instance Repr for IO.Error

-- Private native oracle only: call the decoder in the unmodified Lean library.
-- This helper is never part of an application or Lasm's public Lean surface.
@[extern "lasm_probe_decode_error"]
opaque decodeError (code : UInt32) (uv : Bool) (path : @& String) : IO.Error
@[extern "lasm_probe_uv_version"]
opaque uvVersion (_u : Unit) : UInt32

def main (args : List String) : IO Unit := do
  IO.println s!"uv-version\t{uvVersion ()}"
  for arg in args do
    match arg.splitOn ":" with
    | [label, value, uv, path] =>
      let code := value.toNat!
      IO.println s!"{label}\t{repr (decodeError code.toUInt32 (uv == "uv") path)}"
    | _ => throw <| IO.userError "Expected LABEL:UINT32:crt|uv:PATH"
