**ARM64 tool downloads prepared — 2026-09-28.** The public SDK passed anonymous
checksum verification and fresh native compilation/execution/cache reuse, with
a 227-MiB native peak. The separate Lean source/notices companion is also public
and checksum-verified; local peak was 30.3 MiB. Matching the companion to the new
Lean compiler's dependency identities is still required. No installed ARM64
Lasm pass is claimed.

Run `36389214996` retries unchanged `.44` through complete Windows x64 acceptance.
The native C oracle launch correction passed its differential control; earlier
cold and Lake phases passed with a 3,042,522-byte Hello deployment. Linux and
macOS x64/ARM64 all passed `.43`. Native ARM64 Lean compilation continues.

README reviewed: `.37` remains the accepted Linux/macOS release; Windows remains
unsupported. Remaining gates: complete Windows acceptance, ARM64 Lean
distribution, then one candidate across the full matrix. No npm
publication. Completion ETA is not yet estimable.
