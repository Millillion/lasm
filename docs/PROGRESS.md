**Windows startup verified — 2026-09-27.** Retained `.37` remains accepted on four Linux/Mac targets. Native ARM64 SDK and Lean builds continue; native leantar is retained.

Correcting the restricted token's default object ACL fixed Node initialization on both Windows architectures. All four bounded startup probes passed. Full controls then stopped because Node attempted to read its compiled global OpenSSL configuration under denied Program Files. Evidence and cleanup results are preserved.

CI now supplies an empty private OpenSSL configuration, alongside existing private npm/Git configuration, to reproduce an ordinary machine without developer configuration. TLS verification and stock Node remain unchanged. Prerequisite denials and offline controls still must pass before Windows application acceptance.

README reviewed: `.37` installation, every CLI option, support matrix and runtime restrictions remain accurate. Windows remains unsupported. Next: finish native controls and installed-package acceptance. No npm publication. Completion ETA is not yet estimable.
