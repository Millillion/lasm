module
prelude
public import Init.System.IO

public section
namespace Lasm

@[extern "lasm_io_request"]
private opaque request (operation : UInt32) (key : String) (body : ByteArray) : IO ByteArray

/-- Read bytes using the filesystem capability supplied by the JS host. -/
def readBytes (path : String) : IO ByteArray := request 1 path ByteArray.empty

/-- Replace a file using the filesystem capability supplied by the JS host. -/
def writeBytes (path : String) (bytes : ByteArray) : IO Unit := do
  let _ ← request 2 path bytes
  pure ()

/-- HTTP GET through the supplied host capability. Non-2xx responses are errors. -/
def fetchBytes (url : String) : IO ByteArray := request 3 url ByteArray.empty

end Lasm
