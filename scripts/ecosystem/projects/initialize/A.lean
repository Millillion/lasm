initialize registry : IO.Ref (Array String) ← IO.mkRef #[]
def register (s : String) : IO Unit := registry.modify (·.push s)
