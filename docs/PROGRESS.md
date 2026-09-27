**Windows consumer preparation — 2026-09-27.** Retained `.37` remains accepted on all four Linux/Mac targets. Native ARM64 SDK and Lean 4.34.1 builds continue; ARM64 leantar is validated and retained.

Both Windows isolation controls reached their 480-second resource deadline after processing over 5,800 unrelated executable ACLs. Peak committed memory stayed below 200 MiB. Preserved as resource aborts, not Lean failures. The inventory now targets developer-tool entry points; individual controls report progress and bound worker replies. Explicit file-denial assertions remain unchanged.

The Windows consumer workflow now supplies an independent native ARM64 reference compiler outside the product environment. Native acceptance is still required.

README reviewed against the CLI and support policy: `.37` instructions remain accurate; Windows remains unsupported. Next: pass isolation controls, run candidate `.38` on Windows x64 and validate native ARM64 tools. No npm publication. Completion ETA is not yet estimable.
