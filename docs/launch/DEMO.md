# Demo script: a 3-minute screencast

**Goal:** show one Lean project going from `npm create` to a server-rendered,
hydrated full-stack app with a proved rule, then to the edge, in three minutes.

**Requires 0.3.0** (the `fullstack` template and `lasm dev`). Until it is
published, record from a packed `launch` candidate.

## Before recording

- Use a machine that has already run one Lasm build, so the one-time tool
  download (about 250–275 MB) is cached. Say so on screen; do not hide it.
- Pre-create the project (`npm create @lasm@latest todo -- --template fullstack
  && cd todo && npm install`) and run `npm run dev` once, then stop it. The first
  full-stack build takes about a minute; later ones reuse the cache.
- Use an editor that saves in place (VS Code's default). Until the watcher fix
  lands ([DX audit H1](DX-AUDIT.md)), editors that save by rename stop `lasm dev`
  noticing changes after the first save.
- After starting `npm run dev`, wait for the second build (`lake-manifest.json
  changed; rebuilding`, [DX audit M1](DX-AUDIT.md)) before the first edit, or the
  `Reloaded … s after the change` line can show a misleading time (M3). The
  server's own `Listening on http://127.0.0.1:<port>` line is an internal port;
  point at the `Open http://127.0.0.1:3000/` line instead (M2).
- Terminal at 120 columns, large font; browser beside it at `http://localhost:3000`.
- Have `Shared.lean`, `Server.lean` and `Client.lean` open in tabs.

## Script

| Time | Screen | Say (roughly) |
| --- | --- | --- |
| 0:00–0:15 | Title card: "Lean 4 → WebAssembly. Servers, edge, browser. Proved." | "This is Lasm. It compiles Lean, a language whose programs you can prove things about, to WebAssembly: for Node, edge functions and the browser. It's one npm install." |
| 0:15–0:35 | Terminal: `npm create @lasm@latest todo -- --template fullstack` (pre-recorded or fast), then `cd todo && npm run dev`. | "One command makes a project: a server, a browser app and the API between them, all in Lean. `npm run dev` builds both and serves them on one URL." Show `[lasm dev] Open http://127.0.0.1:3000/`. |
| 0:35–0:55 | Browser: the todo page. Add "Record the demo", toggle one, delete one. View source briefly. | "The server rendered this page from the same view code the browser runs, and the browser app took over: that's hydration. Adding a todo calls the server through a typed endpoint." |
| 0:55–1:30 | Editor: `Shared.lean`. Highlight `checkTitle` and `theorem checkTitle_ok`. | "Here is the rule for a title: not blank, at most 80 characters. And here is a theorem about it, which Lean checks at build time. This file is imported by both the server and the browser." |
| 1:30–1:50 | Editor: `Server.lean`, highlight `Store.add`'s argument `(_ : checkTitle title = .ok ())` and `addTodo.serve fun req ok`. | "The server can't store a title without a proof that it passed the rule; it's in the type. `serve` re-checks every request, because a server can't trust a client, and hands over that proof." |
| 1:50–2:05 | Editor: `Client.lean`, `theorem add_invalid`. Browser: submit an empty title; the error appears with no network request (open DevTools' Network tab). | "And on the client, a theorem says the app never sends an invalid title. Watch the network tab: nothing goes out." |
| 2:05–2:30 | Editor: change `maxTitle` from 80 to 20 in `Shared.lean`; save. Terminal shows the rebuild (`Built in …`, `Reloaded …`); the page reloads. Type a 30-character title: rejected in the browser. `curl -X POST localhost:3000/rpc/addTodo -d '{"title":"a title that is far too long"}'` shows the 400 from the server. | "Change the rule once, and both sides change. The browser rejects it, and so does the server, for any client. That rebuilt the server and the browser app in a few seconds." |
| 2:30–2:50 | Terminal: `npm run build:workers`; show `workers/` and the size line. Optionally `npx wrangler dev` (pre-recorded, on the presenter's own machine). | "The same server builds for Cloudflare Workers, and for Vercel and Netlify Edge, Deno Deploy, Bun, Deno and Fastly. The proofs come along unchanged." |
| 2:50–3:00 | End card: `npm create @lasm@latest` · github.com/Millillion/lasm · "Proved: your rules, the RPC guarantees, the UI diff. Tested: the transport, the runtime." | "That's Lasm. Links below. The README says exactly what's proved and what's tested." |

## Accuracy notes for the narration

- Say "a few seconds" for the full-stack rebuild. A `Shared.lean` edit rebuilds
  both programs; it took 5–8 s on the maintainer host with one build job (DX audit).
  Single-target edits take about 1.6–1.8 s on the Linux CI runner
  ([BENCHMARKS.md](../BENCHMARKS.md#edit-loop-lasm-dev)).
- Do not say "the whole stack is formally verified". Say what is proved: the
  validation theorem and the server's use of it, `Lasm.RPC`'s two guarantees, and
  `Lasm.UI`'s diff. The JSON/HTTP transport, the DOM applier, Lasm itself and the
  browsers are tested, not proved.
- The todos live in `Lasm.KV`: Workers KV, Deno KV or a Fastly KV Store where the
  platform has one named `TODOS`, else memory. Say "in memory" for the local demo.
- Never run `wrangler deploy` on camera with a real account unless that is the
  presenter's own deliberate choice. Lasm's own CI never deploys.
