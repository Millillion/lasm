# Lasm (next release)

Since 0.6.0 (docs/release/0.6.0-notes.md), main has had only benchmark records; this release's work is mutation testing of every JavaScript module under `src/` (docs/TESTING.md, "Mutation testing"), and the fixes below are bugs those tests found.

## Fixes

- **A failing SDK archive decoder is reported as itself.** When the managed Python's decoder for `.tar.xz` and `.zip` compiler SDK archives failed, could not start, or was killed, the tar parser's `TAR_BAD_ARCHIVE: Unrecognized archive format` for the empty stream it left was reported instead of the decoder's exit status and messages. The decoder's own error (`SDK archive decoder failed (<code or signal>): <its last messages>`, or the spawn error) is reported now.
