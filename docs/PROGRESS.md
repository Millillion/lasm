**Windows consumer preparation — 2026-09-26.** Retained `.37` remains accepted on all four Linux/Mac targets. Native ARM64 SDK and Lean 4.34.1 builds are running. ARM64 leantar is validated and retained.

Windows isolation controls are running after excluding ordinary security-service files from developer-program restrictions. Native deadline/disk controls, metadata grants and cleanup already pass. The unchanged-candidate receipt reader revalidated all four retained `.37` native reports at 32.4 MiB peak.

Copied Windows deployments now share one restricted test environment, while every app still launches with plain Node. This avoids repeated ACL setup and measures application startup independently of CI permission setup. Partial deployment results survive failures/resource stops. Native acceptance remains required.

README reviewed against the CLI and platform policy: `.37` instructions and restrictions remain accurate; Windows remains unsupported. Next: pass isolation controls, run candidate `.38` on Windows x64 and validate native ARM64 tools. No npm publication. Completion ETA is not yet estimable.
