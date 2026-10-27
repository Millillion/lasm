/-
Lasm.Web: typed bindings for the web platform, for Lean programs built with
`lasm build --target browser` (docs/BROWSER.md): the DOM and events, fetch,
timers and animation frames, storage, location and history, URLs and forms,
WebSocket, crypto, the console and canvas 2D, and the mounted app (`App`).
They are calls into the browser through Lasm.JS; `Lasm.UI` builds on them.
-/
import Lasm.Web.Types
import Lasm.Web.Dom
import Lasm.Web.Events
import Lasm.Web.Timers
import Lasm.Web.Fetch
import Lasm.Web.Url
import Lasm.Web.Storage
import Lasm.Web.History
import Lasm.Web.WebSocket
import Lasm.Web.Crypto
import Lasm.Web.Console
import Lasm.Web.Canvas
import Lasm.Web.App
