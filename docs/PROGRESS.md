**Four `.43` native platforms passed — 2026-09-28.** Linux and macOS x64/ARM64
passed the same archive, including eight independent deployments each. Intel Mac
completed in 84.6 minutes, with a 25.9-minute first build, continued progress
logging, 2.18-GiB sampled RSS peak and no resource abort.

Windows x64/ARM64 byte-exact IO and isolation controls passed; the original `.43`
CRLF failure remains preserved. The repaired `.44` packed reproducibly and its
complete Windows x64 install test continues. Native ARM64 Lean compilation is
also running. Its notice-repair validation will use the previously validated
4-GiB remote profile (3.2-GiB proactive stop); local limits are unchanged.

README reviewed: `.37` remains the accepted Linux/macOS release; Windows remains
unsupported. Remaining gates: repaired Windows acceptance, complete ARM64 tool
distribution, then one candidate across the full matrix. No npm publication.
Completion ETA is not yet estimable.
