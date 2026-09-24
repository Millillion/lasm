import async_select_channel
import sync_mutex

-- These are calls to the unchanged upstream definitions. Their original
-- #eval/#guard_msgs checks still execute in the native build-time controls.
def main : IO Unit := do
  for capacity in [none, some 0, some 1, some 128] do
    unless (← (A.testIt capacity).block) do
      throw <| IO.userError s!"Channel sum mismatch at capacity {capacity}"
    unless (← (B.testIt capacity).block) do
      throw <| IO.userError s!"Closeable channel sum mismatch at capacity {capacity}"
    IO.println s!"Channel capacity {capacity}: both sums match"
  atomically
  tryAtomically
  condVar
  IO.println "Mutex, try-lock and condition-variable checks passed"
