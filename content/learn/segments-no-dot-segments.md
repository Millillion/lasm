---
title: "Coming in 0.3.9: a theorem that request paths never contain . or .."
description: One Lean handler routed /hello/../hello/Ada differently on five platforms. The fix resolves dot segments in Lean, with a theorem about the result.
date: 2026-11-02
kind: proof-spotlight
sources:
  - https://github.com/Millillion/lasm/issues/27
  - https://github.com/Millillion/lasm/pull/47
  - https://github.com/Millillion/lasm/blob/main/docs/TESTING.md
  - https://github.com/Millillion/lasm/blob/main/docs/FETCH.md
aiGenerated: true
---

# Coming in 0.3.9: a theorem that request paths never contain `.` or `..`

This change is in review in
[PR #47](https://github.com/Millillion/lasm/pull/47), and ships in Lasm
0.3.9. It isn't in a published release yet.

## Same handler, different routes

`Lasm.Fetch` lets one Lean HTTP handler run on Node, Deno, Bun, Cloudflare
Workers, WASI and the other edge platforms. A handler usually routes on
`req.segments`, the decoded parts of the path. The `fetch` template does:

```lean
match req.method, req.segments with
| "GET", ["hello", name] => return json [("message", App.greet name)]
```

Lasm's target-equivalence tests build the same app for several targets,
replay a recorded set of requests against each, and require the same
responses everywhere ([TESTING.md](../../docs/TESTING.md#target-equivalence)).
One request disagreed. It was `GET /hello/../hello/Ada`, sent as is, as
`curl --path-as-is` or any non-browser client can send it
([issue #27](https://github.com/Millillion/lasm/issues/27)):

| Target | Response |
| --- | --- |
| Node, Deno, wasi-http | 404: `req.segments` was `["hello", "..", "hello", "Ada"]` |
| Bun, Workers | 200 `Hello, Ada, from Lean!`: the platform had already removed the dot segments from the URL |

So the same handler routed the request differently depending on where it ran.
It also mattered for safety. On Node, a handler that maps segments to files or
keys saw `..` and had to defend itself. On Workers it never did.

## The fix: resolve the path in Lean

With PR #47, `Request.path` and `Request.segments` resolve the raw path the
way a browser does, by the WHATWG URL rules. They do it in Lean, so the
behaviour is the same on every target:

- `..` removes the previous segment, and `.` is dropped;
- escaped dots (`%2e`, `.%2E`, …) count as dots;
- `\` counts as `/`;
- empty segments and a trailing `/` are kept in `path`.

The target-equivalence corpus drops its "known difference" for this request
and adds four cases: encoded dots, mixed dots, dots above the root, and the
backslash separator.

## The theorem

The change comes with a theorem in `library/Lasm/Fetch.lean`:

```lean
theorem segments_no_dot_segments (r : Request) :
    ∀ s ∈ r.segments, s ≠ "." ∧ s ≠ ".." := by
```

For every request, every segment a handler sees is neither `.` nor `..`.

- **It holds for every request,** not only the ones a test sends. That
  includes paths with escaped dots, which the decoding step turns into `.` or
  `..` only after resolution has already removed them.
- **It uses only Lean's standard axioms:** `propext`, `Classical.choice` and
  `Quot.sound`.
- **It is about `Request.segments` itself,** the function every `Lasm.Fetch`
  handler calls, compiled by Lasm for every target.

The helper functions and lemmas are private, so the theorem is the only new
public name. [FETCH.md](../../docs/FETCH.md) documents the new behaviour in
the PR.

## What it means for a handler

A handler that turns segments into a file name or a storage key can't be
walked up to a parent with `..`, on any platform. The theorem doesn't say that
every segment is a safe file name. A segment can still contain other
characters, such as a decoded `/`. A handler that touches files should check
segments for its own rules.
