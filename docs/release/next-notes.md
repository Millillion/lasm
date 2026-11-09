# Lasm (next release)

Since 0.6.0, main has gained a fix for the UI patch fuzz worker running out of
memory (#161), benchmark records, and mutation testing of every JavaScript
module under src/ (#165 and its follow-ups), whose new tests found the fixes
below. These notes move to `docs/release/<version>-notes.md` when the version is cut.

## Fixes

- **macOS network interfaces report the right hardware (MAC) address.** The Node host
  read the link-layer address of `Std.Net.interfaceAddresses` at the wrong offset of
  macOS's `sockaddr_dl` (after `sdl_alen` bytes of the name instead of `sdl_nlen`), so an
  interface such as `en0` reported bytes of its name and address mixed. It now follows
  libuv's `LLADDR`.
