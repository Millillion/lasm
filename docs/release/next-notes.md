# Next release (unreleased)

Changes since 0.8.0, collected until the release's version bump turns this
file into `<version>-notes.md`.

## Lasm.UI (breaking)

- **Lasm.UI is cut to its core; browser effects go through `Cmd.task`**
  (0.6-8, A35, docs/API_DECISIONS.md). `Cmd.task (run : Async Msg)` runs any
  action with the generated browser bindings (`import Lasm.JS.Web.Browser`)
  and delivers its message; `Lasm.UI.afterFrame` waits for the next frame.
  `Cmd.delay`, `Cmd.pushUrl` and `Cmd.replaceUrl` stay. Migration:

  | Before | After |
  | --- | --- |
  | `Http.get url .loaded` | `Cmd.task do let r ← Lasm.JS.Web.fetch (.usvString url); return .loaded (← r.text)` (catch errors with `try … catch`) |
  | `Http.post url body h`, `Http.request req h` | the same, with `some { method := some "POST", body := some (.usvString body), headers := … }` |
  | `Cmd.storageSet k v` | `Cmd.ofEffect (.task fun _ => do (← Lasm.JS.Web.localStorage).setItem k v)` |
  | `Cmd.storageGet k h` | `Cmd.task do return h (← (← Lasm.JS.Web.localStorage).getItem k)` |
  | `Cmd.storageRemove k` | `… (← Lasm.JS.Web.localStorage).removeItem k` |
  | `Cmd.focus id`, `Cmd.blur id` | `Cmd.ofEffect (.task fun _ => do afterFrame; …getElementById id… .focus)` (docs/UI.md, "Commands") |
  | `Cmd.title t` | `… (← Lasm.JS.Web.document).setTitle t` |
  | `Cmd.port name v` | `… (← Lasm.UI.Mount.port name).send v` |
  | `Cmd.now h`, `Cmd.randomBytes n h` | `Cmd.task` with `Date.now` / `crypto.getRandomValues`, or Lean's `IO.monoMsNow` / `IO.getRandomBytes` |
  | `Cmd.back n`, `Cmd.forward n`, `Cmd.load url` | `history.go`, `location.assign` through `Cmd.ofEffect (.task …)` |
  | `Cmd.io run` | `Cmd.ofEffect (.task fun deliver => run deliver)` |

  Apps that want to test their effects declare them as data and interpret
  them (docs/UI.md, "Effects you can test"; examples/ui/todomvc).
- `Lasm.RPC`'s `Endpoint.call` is now a `Cmd.task` over `fetch`; its
  proposition `call_valid` (about the removed HTTP effect) is gone. Lasm.RPC
  itself is being removed (0.6-13).
