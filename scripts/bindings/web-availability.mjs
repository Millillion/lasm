// Where each Lasm.JS.Web function is available, per runtime Lasm targets, from compatibility data used as it is
// (docs/JS_BINDINGS.md, "Availability per target"; docs/API_DECISIONS.md 0.3-10):
//   - @mdn/browser-compat-data (pinned in package.json) for the browsers, Node and Deno;
//   - unjs/runtime-compat's data (pinned below by commit and SHA-256; MIT) for Bun, Cloudflare Workers (workerd),
//     Vercel Edge (edge-light) and Netlify Edge, which BCD does not cover.
// Where the data is wrong, a reviewed entry of scripts/bindings/availability-overrides.json corrects it.
// scripts/bindings/generate-web.mjs writes the result to library/Lasm/JS/Web/availability.json, which
// `lasm build --target` reads (src/web-availability.mjs).
import { createHash } from 'node:crypto';
import { existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { createRequire } from 'node:module';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';

const require = createRequire(import.meta.url);
const root = fileURLToPath(new URL('../../', import.meta.url));
export const bcd = require('@mdn/browser-compat-data');
export const runtimeCompat = { repo: 'unjs/runtime-compat', commit: '6136fef9ec9db5f499eb2617182e77f7b2dd3ce8', date: '2025-12-01',
  path: 'packages/runtime-compat-data/data.json', sha256: '365301e6dbf814356d0d8262096b75f4fefa7f3baa9db876b1cbfb2388c74475', license: 'MIT' };

/** The runtime-compat data: from .cache/ when it is there, else downloaded and checked against its SHA-256. */
export async function loadRuntimeCompat() {
  const file = join(root, '.cache', 'runtime-compat', `${runtimeCompat.sha256}.json`);
  let text = existsSync(file) ? readFileSync(file, 'utf8') : null;
  if (text === null) {
    const response = await fetch(`https://raw.githubusercontent.com/${runtimeCompat.repo}/${runtimeCompat.commit}/${runtimeCompat.path}`);
    if (!response.ok) throw new Error(`runtime-compat data: HTTP ${response.status}`);
    text = await response.text();
  }
  const sha = createHash('sha256').update(text).digest('hex');
  if (sha !== runtimeCompat.sha256) throw new Error(`runtime-compat data: SHA-256 ${sha}, expected ${runtimeCompat.sha256}`);
  mkdirSync(join(root, '.cache', 'runtime-compat'), { recursive: true });
  writeFileSync(file, text);
  return JSON.parse(text);
}

/**
 * The runtimes, each the oldest version Lasm supports there, and the data that describes it.
 * BCD: every engine listed must ship the API at that version (the browser target runs on all three).
 */
export const runtimes = {
  browser: { label: 'browsers (Chromium 153, Firefox 155, Safari 26.6)', data: 'bcd', engines: { chrome: '153', firefox: '155', safari: '26.6' } },
  node: { label: 'Node.js 24', data: 'bcd', engines: { nodejs: '24.0.0' } },
  deno: { label: 'Deno 2.9', data: 'bcd', engines: { deno: '2.9' } },
  bun: { label: `Bun (runtime-compat data of ${runtimeCompat.date})`, data: 'rcd', engines: { bun: true } },
  workerd: { label: `Cloudflare Workers (runtime-compat data of ${runtimeCompat.date})`, data: 'rcd', engines: { workerd: true } },
  'edge-light': { label: `Vercel Edge (runtime-compat data of ${runtimeCompat.date})`, data: 'rcd', engines: { 'edge-light': true } },
  netlify: { label: `Netlify Edge (runtime-compat data of ${runtimeCompat.date})`, data: 'rcd', engines: { netlify: true } },
};

const versionParts = v => String(v).replace(/^≤/, '').split('.').map(Number);
const notAfter = (a, b) => {
  const x = versionParts(a), y = versionParts(b);
  for (let i = 0; i < Math.max(x.length, y.length); i++) { const d = (x[i] ?? 0) - (y[i] ?? 0); if (d) return d < 0; }
  return true;
};
/** Whether a support statement says the engine has the feature at version `max` (unflagged, unprefixed, not removed). */
function ships(statements, max) {
  if (!statements) return false;
  return (Array.isArray(statements) ? statements : [statements]).some(s => {
    if (s.flags || s.prefix || s.alternative_name || s.version_removed) return false;
    if (s.version_added === true) return true;
    if (typeof s.version_added !== 'string' || !/^≤?\d/.test(s.version_added)) return false;
    return max === true || notAfter(s.version_added, max);
  });
}
const lookup = (data, path) => path.reduce((o, k) => (o && Object.hasOwn(o, k) ? o[k] : undefined), data)?.__compat;

/**
 * Where an API is available: the first of its paths (most specific first: `api.Element.append`, then
 * `api.Element`) that the runtime's data lists decides. Returns { [runtime]: { ok, path } }.
 */
export function availability(paths, rcd) {
  const result = {};
  for (const [id, r] of Object.entries(runtimes)) {
    const data = r.data === 'bcd' ? bcd : rcd;
    const path = paths.find(p => lookup(data, p));
    const compat = path && lookup(data, path);
    result[id] = { ok: !!compat && Object.entries(r.engines).every(([engine, max]) => ships(compat.support[engine], max)), path: path?.join('.') ?? null };
  }
  return result;
}
