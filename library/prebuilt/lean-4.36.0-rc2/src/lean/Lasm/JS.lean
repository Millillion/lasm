/-
Lasm.JS: use JavaScript and npm packages from Lean programs compiled by Lasm
and run on Node.js, edge isolates, Bun, Deno or the browser. WASI and Fastly
builds have no JavaScript host: there every operation fails with a clear
message. Guide: docs/JS_BINDINGS.md.
-/
import Lasm.JS.Core
import Lasm.JS.Json
import Lasm.JS.Meta
