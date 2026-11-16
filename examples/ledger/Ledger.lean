/-
Ledger, a double-entry ledger in the style of TigerBeetle, in pure Lean:
everything the server, the auditor and the browser page share. No JavaScript
and no Lasm import here; `parseJson` (Ledger.SafeJson) is the hardened JSON
parser for request bodies.
-/
import Ledger.SafeJson
import Ledger.Types
import Ledger.Store
import Ledger.Rules
import Ledger.Audit
import Ledger.Json
import Ledger.Api
