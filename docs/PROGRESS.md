**Public ARM64 SDK passed — 2026-09-28.** The natively validated SDK is
published as a tool prerelease and pinned in the source catalog. Anonymous
download verification passed with a 35.2-MiB local peak. A fresh native ARM64
consumer downloaded it, compiled and ran C-to-Wasm, and verified cache reuse;
peak committed memory was 227 MiB. Installed Lasm acceptance remains separate.

Run `36389214996` retries unchanged `.44` through complete Windows x64 acceptance.
The native C oracle launch correction passed its differential control; earlier
cold and Lake phases passed with a 3,042,522-byte Hello deployment. Linux and
macOS x64/ARM64 all passed `.43`. Native ARM64 Lean compilation continues.

README reviewed: `.37` remains the accepted Linux/macOS release; Windows remains
unsupported. Remaining gates: complete Windows acceptance, ARM64 Lean
distribution, then one candidate across the full matrix. No npm
publication. Completion ETA is not yet estimable.
