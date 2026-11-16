# API decisions

Status: **started 2026-11-16; completing it is milestone 0.1 of
[ROADMAP.md](../ROADMAP.md)'s Stage 0.** Kept by Claude; signed off by Jordan.

## The rule (Jordan, 2026-11-16)

Before 1.0, a PR that adds or changes a public API may merge without waiting
for Jordan. Every such decision is recorded here, in the same PR, and every
entry needs Jordan's sign-off before Lasm reaches 1.0. Nothing ships in 1.x
with an unsigned API decision. During Stage 0, Jordan signs off per milestone.

"Public API" means everything a user writes against or runs: every `Lasm.*`
library and generated binding, the CLI's commands and flags, project
configuration, what `lasm init` generates, and the layout of the platform
output. Shapes follow what each platform natively expects, with no
context-dependent tricks or loopback adapters (Jordan, 2026-11-11).

## Entry format

Each entry has:
- **Id and area.** The seeded entries keep A1–A56; a refinement of one takes a
  sub-id (A9.1, A9.2, …). New entries take the id of the milestone that owns
  them: `0.1-1`, `0.1-2`, … through `0.7-n` (never a bare A57+). Each
  milestone's entries go in its own file, `docs/api/decisions/0.N.md`.
- **Decision:** the shape, with real code examples in the linked detail.
- **Why**, and the alternatives considered.
- **Where:** the PR and the release it shipped in (or "proposed").
- **Status:** `pending sign-off`, `signed off (date)`, or `changed by Jordan
  (date): …`. The inventory (milestone 0.1) also uses `decided, pending
  sign-off` (a shape that exists and nobody questioned), `open` (undecided)
  and `to remove` (slated for deletion).

The inventory is kept complete by `scripts/api/inventory.mjs`, which the unit
job runs (`test/api-inventory.test.mjs`): it lists every Lean module and
`Lasm…` namespace in `library/`, every CLI command, flag, target and
template, every `LASM_*` environment variable the CLI reads, the builtin
`lasm:*` modules and the npm entry points, and fails when one is not named
here or in `docs/api/decisions/*.md` in backticks (a module may be covered by a family glob such as
`Lasm.Fastly.*`). It also rejects malformed, duplicate and A57+ ids.

## Contents by milestone

<!-- split: per-milestone files -->
Each milestone's entries, its seeded questions (A-rows) included, live in
their own file, which only that milestone's stream edits. The inventory
check reads this file and every `docs/api/decisions/*.md`.

| Milestone | File | Seeded questions |
| --- | --- | --- |
| 0.1 Inventory | [api/decisions/0.1.md](api/decisions/0.1.md) | — |
| 0.2 Serving model, and `Lasm.Fetch` deleted | [api/decisions/0.2.md](api/decisions/0.2.md) | A7, A19, A20, A21, A22, A23, A41, A42, A43, A44, A45, A46, A53 |
| 0.3 `Lasm.JS.Web` (the web platform) and the binding rules | [api/decisions/0.3.md](api/decisions/0.3.md) | A9, A10, A11, A12, A13, A14, A15, A16, A51 |
| 0.4 Node, Bun and Deno | [api/decisions/0.4.md](api/decisions/0.4.md) | A1, A2, A3, A17, A18, A24, A25 |
| 0.5 Cloudflare, and the apps off hand-written bindings | [api/decisions/0.5.md](api/decisions/0.5.md) | A26, A27, A28, A29, A39, A40 |
| 0.6 The `Lasm.*` libraries | [api/decisions/0.6.md](api/decisions/0.6.md) | A4, A5, A6, A8, A30, A31, A32, A33, A34, A35, A36, A37, A38, A47, A48, A49, A50, A52, A54, A56 |
| 0.7 The CLI and configuration | [api/decisions/0.7.md](api/decisions/0.7.md) | A55 |
