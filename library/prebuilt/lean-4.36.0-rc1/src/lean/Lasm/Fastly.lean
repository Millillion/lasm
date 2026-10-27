/-
Lasm.Fastly: Fastly Compute's stores, for programs built with
`lasm build --target fastly` (docs/deploy/fastly.md). Elsewhere every
operation fails with an error saying so.

  match ← Lasm.Fastly.configGet "settings" "color" with
  | some color => …
  | none => …

Viceroy (`fastly compute serve`) reads local stores from `fastly.toml`'s
`[local_server.kv_stores]`, `[local_server.config_stores]` and
`[local_server.secret_stores]`.
-/
namespace Lasm.Fastly

/-- A Config Store's value for `key`, or `none` when the key is missing. -/
@[extern "lasm_fastly_config_get"] opaque configGet (store key : @& String) : IO (Option String)

/-- A Secret Store's plaintext for `key`, or `none` when the key is missing. -/
@[extern "lasm_fastly_secret_get"] opaque secretGet (store key : @& String) : IO (Option ByteArray)

/-- A KV Store's value for `key`, or `none` when the key is missing. -/
@[extern "lasm_fastly_kv_get"] opaque kvGet (store key : @& String) : IO (Option ByteArray)

/-- Stores `value` under `key` in a KV Store (replacing any value). -/
@[extern "lasm_fastly_kv_put"] opaque kvPut (store key : @& String) (value : @& ByteArray) : IO Unit

/-- Deletes `key` from a KV Store. -/
@[extern "lasm_fastly_kv_delete"] opaque kvDelete (store key : @& String) : IO Unit

/-- A Secret Store's plaintext as UTF-8 text, or `none` (missing or not UTF-8). -/
def secretText (store key : String) : IO (Option String) := do
  return (← secretGet store key).bind String.fromUTF8?

/-- A KV Store's value as UTF-8 text, or `none` (missing or not UTF-8). -/
def kvGetText (store key : String) : IO (Option String) := do
  return (← kvGet store key).bind String.fromUTF8?

end Lasm.Fastly
