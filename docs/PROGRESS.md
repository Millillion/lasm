**Six-platform Node milestone complete — 2026-09-28.** One unchanged candidate
`.46` passed native installed-package and copied-deployment acceptance on Linux,
macOS and Windows, each on x86-64 and ARM64. All eight applications per target,
offline reuse, six cache-recovery controls, local Lake imports and ahead-of-time
restrictions passed. The Windows ARM64 SDK repair and CI reference-dependency
correction have separate preserved failure and regression evidence.

Retention run `36439263093` combined the six successful reports. An independent
download verified the exact archive, receipt and source provenance under a
512-MiB cap, peaking at 88.4 MiB. No accepted run had a resource abort. Hello
deployments are 3.04–3.63 MB; the largest fixture is 4.01 MB.

README and support docs now identify exact environments, every CLI command and
the runtime restrictions. All scoped milestone gates are complete. npm remains
unpublished; full API parity, other engines and serverless adapters remain deferred.
