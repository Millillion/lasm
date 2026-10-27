/-
Lasm.Web console: the browser's developer console, with JavaScript values
shown as the console shows them. (`IO.println` also writes to the console.)
-/
import Lasm.JS.Core
import Lasm.JS.Meta

namespace Lasm.Web
open Lasm.JS

namespace Raw
@[js "lasm:web" "log"] opaque log : String → Array Data → IO Unit
end Raw

namespace Console
/-- `console.log(...values)`. -/
def log (values : Array Data) : IO Unit := Raw.log "log" values
def info (values : Array Data) : IO Unit := Raw.log "info" values
def warn (values : Array Data) : IO Unit := Raw.log "warn" values
def error (values : Array Data) : IO Unit := Raw.log "error" values
def debug (values : Array Data) : IO Unit := Raw.log "debug" values
/-- `console.log(text)`. -/
def logText (text : String) : IO Unit := Raw.log "log" #[.string text]
end Console

end Lasm.Web
