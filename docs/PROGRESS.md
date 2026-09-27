**Windows CI boundary correction — 2026-09-27.** Retained `.37` remains accepted on four Linux/Mac targets. Native ARM64 SDK and Lean builds continue; native leantar is retained.

Both Windows AppContainer controls stalled at stock Node child-process pipe creation. Pinned libuv retries a namespace access denial indefinitely; ordinary worker threads and Wasm worked. Developer-file restrictions also failed. Both deadline aborts and partial assertions are preserved; no Lean application acceptance is claimed.

A replacement CI launcher removes token privileges, denies traversal of developer/source directories, and scopes offline firewall rules to copied Node and managed executables. It preserves ordinary Node pipe behavior and capped descendant jobs. Existing negative assertions remain; a directory-removal fixture bug is corrected. Native controls must validate this boundary before application acceptance.

README reviewed: complete CLI/quick start and four-platform `.37` contract remain accurate; Windows remains unsupported. No npm publication. Completion ETA is not yet estimable.
