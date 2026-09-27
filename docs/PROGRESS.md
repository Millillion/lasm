**Windows startup diagnosis — 2026-09-27.** Retained `.37` remains accepted on four Linux/Mac targets. Native ARM64 SDK and Lean builds continue; native leantar is retained.

The replacement restricted-token controls completed promptly on both architectures but Node failed during DLL initialization (`0xc0000142`). File-permission cleanup and offline firewall restoration passed; neither memory nor time limits were reached. This is a CI startup failure, not a Lean failure.

The launcher now grants its restricted identity access to newly created process/thread/pipe objects through that token's default ACL. Bounded `node --version` probes separate token initialization from file-denial setup. Diagnostic probes cannot satisfy application acceptance. Full negative controls remain required.

README reviewed against the unchanged CLI and release contract: `.37` quick start and restrictions remain accurate; Windows remains unsupported. Next: validate ordinary stock Node under the corrected boundary, then installed-package acceptance. No npm publication. Completion ETA is not yet estimable.
