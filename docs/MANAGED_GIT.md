# Managed Git for ordinary Lake dependencies

The application builder provisions Git automatically when it discovers a Lake
project. `src/git-tools.json` pins the archive length and SHA256 for all six
native build hosts. Installation streams the archive, rejects escaping paths
and links, inventories the complete extracted tree, and verifies it on reuse.
Native executable headers and `git --version` are checked before Git runs.

The distributions come from GitHub Desktop's
[dugite-native v2.53.0-4 release](https://github.com/desktop/dugite-native/releases/tag/v2.53.0-4).
Git executables, helper commands, templates and Linux CA roots are resolved from
the managed cache; existing credential, custom CA and user Git configuration
remain available. The application build receipt records the Git identity.
No system configuration or globally installed Git is modified.

The unchanged upstream archive and its notices are retained. Git source and
build provenance are available through the
[provider's pinned build repository](https://github.com/desktop/dugite-native/tree/v2.53.0-4)
and [Git 2.53.0 source](https://github.com/git/git/tree/v2.53.0).
The provider archives include additional components such as Git LFS and Git
Credential Manager; retaining these files does not establish that every optional
component is validated by Lasm.

The Linux x64 control passes streamed installation, verified reuse, cloning a
file URL with spaces, fetching and switching pinned revisions, and HTTPS/TLS
remote lookup. Only managed Git and Node directories are on its PATH. The
six-platform workflow now passes the same controls natively, without Actions
cache or artifact storage; see the [native matrix evidence](evidence/managed-git-native-ci-2026-09-23.json).
The first Windows run exposed a host-dependent path join in the environment
helper. The repaired run passes all six rows, including native ARM64 Windows
executables. The Linux ARM64 provider archive reports `2.53.0.dirty`; its exact
upstream archive checksum and native executable header are recorded. This is
Git transport evidence, not a full application pass.

- [x] Complete the native six-platform transport campaign.
- [ ] Validate an ordinary pinned Git dependency through Lake and deployed AOT.
- [ ] Supply any missing SSH-client dependencies and verify private repositories.
- [ ] Validate submodules, custom helpers and the optional LFS/credential flows.

The current Linux portable distribution does not include an SSH executable.
An existing configured SSH command remains usable, but Node/npm-only SSH
dependency access is still an implementation gap. HTTPS/file dependency
transport does not close that requirement.
