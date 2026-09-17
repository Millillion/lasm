module
prelude
public import Lasm.IO

public section
namespace Example

-- Prevent inlining so the suspension must traverse an indirect Lean call.
@[noinline] def callTwice (f : String → IO ByteArray) (a b : String) : IO ByteArray := do
  let first ← f a
  let second ← f b
  pure (first ++ second)

def readPair (a b : String) : IO ByteArray := callTwice Lasm.readBytes a b
def copy (source destination : String) : IO ByteArray := do
  let bytes ← Lasm.readBytes source
  Lasm.writeBytes destination bytes
  Lasm.readBytes destination

def fetch (url : String) : IO ByteArray := Lasm.fetchBytes url
def fetchPair (a b : String) : IO ByteArray := callTwice Lasm.fetchBytes a b
def write (path : String) (bytes : ByteArray) : IO Unit := Lasm.writeBytes path bytes
def recover (path : String) : IO String := do
  try
    let _ ← Lasm.readBytes path
    pure "read succeeded"
  catch _ => pure "caught inside Lean"

def ready : IO Nat := pure 42
def scalar : IO UInt32 := pure 4294967295
def truth : IO Bool := pure true

end Example
