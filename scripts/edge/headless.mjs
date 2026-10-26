// The environment every platform CLI runs with in Lasm's checks (wrangler,
// vercel, netlify, deno, bun): CI mode, no telemetry, and no way to open a
// browser. BROWSER=false alone is not enough: `netlify dev` opens its URL with
// the \`open\` package's own xdg-open (it launched the desktop's default
// browser during local testing on 2026-10-24), so callers also pass --no-open,
// and the display variables are removed so no GUI program can start.
export function headlessEnvironment(base = process.env, extra = {}) {
  const env = { ...base, CI: '1', BROWSER: 'none', NO_COLOR: '1', WRANGLER_SEND_METRICS: 'false', VERCEL_TELEMETRY_DISABLED: '1',
    NETLIFY_TELEMETRY_DISABLED: '1', DO_NOT_TRACK: '1', ...extra };
  // The session bus stays: the resource guard (systemd-run --user) needs it.
  for (const key of ['DISPLAY', 'WAYLAND_DISPLAY']) delete env[key];
  return env;
}
