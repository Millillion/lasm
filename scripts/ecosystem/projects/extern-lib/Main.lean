@[extern "ctable_apply"] opaque ctableApply (which x : UInt64) : UInt64
@[extern "ctable_name"] opaque ctableName (which : UInt64) : String
def main : IO Unit := do
  for i in [0, 1, 2] do
    IO.println s!"{ctableName i.toUInt64} 7 = {ctableApply i.toUInt64 7}"
