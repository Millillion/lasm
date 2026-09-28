**Native Windows comparison compiler repaired — 2026-09-28.** A native control
reproduced the C oracle's launch failure with an extended-path sysroot, then
compiled and ran identical C with the verified ordinary short prefix. Long-path
and Lake controls also passed; peak committed memory was 2.21 GiB, below the
3.2-GiB proactive stop.

Run `36389214996` retries unchanged `.44` through complete Windows x64 acceptance.
Its earlier cold and Lake phases passed with a 3,042,522-byte Hello deployment.
Linux and macOS x64/ARM64 all passed `.43`. Native ARM64 Lean compilation continues.

README reviewed: `.37` remains the accepted Linux/macOS release; Windows remains
unsupported. Remaining gates: complete Windows acceptance,
ARM64 tool distribution, then one candidate across the full matrix. No npm
publication. Completion ETA is not yet estimable.
