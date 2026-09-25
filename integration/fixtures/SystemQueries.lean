import Std.Internal.UV.System

private def ensure (condition : Bool) (message : String) : IO Unit :=
  unless condition do throw (IO.userError message)

def main (args : List String) : IO Unit := do
  let expectedConstraint := args.head!.toNat!
  let info ← Std.Internal.UV.System.osUname
  IO.println (repr info)
  let total ← Std.Internal.UV.System.totalMemory
  let free ← Std.Internal.UV.System.freeMemory
  let constrained ← Std.Internal.UV.System.constrainedMemory
  let available ← Std.Internal.UV.System.availableMemory
  ensure (total > 0 && free ≤ total && available ≤ total) "memory query ranges"
  ensure (constrained.toNat == expectedConstraint) "native memory constraint"
  if constrained > 0 && constrained ≤ total then
    ensure (available ≤ constrained) "available memory respects native constraint"
  -- Only stable values are compared exactly across independent processes.
  -- Never allocate buffers based on the reported amounts.
  IO.println s!"total={total}; constrained={constrained}"
  IO.println "system queries checked"
