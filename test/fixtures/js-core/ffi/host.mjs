// The JavaScript host this program runs on, by its own globals: the oracle of
// Main.lean's target section (Lasm.target).
export function host() {
  if (globalThis.navigator?.userAgent === 'Cloudflare-Workers') return 'workers';
  if (globalThis.Bun) return 'bun';
  if (globalThis.Deno) return 'deno';
  if (globalThis.process?.versions?.node) return 'node';
  return 'browser';
}
