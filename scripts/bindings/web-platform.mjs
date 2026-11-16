// The rest of the browser platform in Lasm.JS.Web's browser tier (docs/JS_BINDINGS.md,
// "The browser tier"; docs/API_DECISIONS.md, milestone 0.3): every interface and member
// of @webref/idl that is exposed to Window and that all three supported engines ship
// at the supported versions, according to the pinned @mdn/browser-compat-data (BCD).
//
// scripts/bindings/generate-web.mjs reads it. The hand-listed modules of
// scripts/bindings/web-browser.mjs come first. Every other webref spec with
// something shipped becomes one module, named after the spec (`IndexedDB`,
// `Webgl2`), holding:
//   - the spec's interfaces;
//   - the members its partials and mixins add to interfaces of other modules
//     (`Navigator.geolocation` lives in the Geolocation module).
// Specs that reference each other in a cycle are merged into one module. The
// specs excluded on purpose are listed in `excludedSpecs`, each with its reason
// and API decision.
import { createRequire } from 'node:module';

const require = createRequire(import.meta.url);
const bcd = require('@mdn/browser-compat-data');

/** The supported engines (README.md, docs/BROWSER.md: Playwright 1.63.0), as BCD names their releases. */
export const baseline = { chrome: '153', firefox: '155', safari: '26.6' };
export const bcdVersion = bcd.__meta.version;

/** A BCD version as a number: `"26.6"`, or `"≤4"` (shipped by then at the latest). */
const versionNumber = v => (typeof v === 'string' && /^≤?\d+(\.\d+)?$/.test(v) ? Number(v.replace(/^≤/, '')) : NaN);
/** Whether a BCD support statement says the engine ships the feature, unflagged and whole, at `max`. */
function ships(statements, max) {
  if (!statements) return false;
  return (Array.isArray(statements) ? statements : [statements]).some(s =>
    versionNumber(s.version_added) <= Number(max) && !s.version_removed && !s.flags && !s.prefix && !s.alternative_name
    && !s.partial_implementation);
}
/** The BCD entry at `api.<path>` (`['Navigator', 'geolocation']`, `['indexedDB']`), or undefined. */
const entry = path => path.reduce((o, k) => (o && Object.hasOwn(o, k) ? o[k] : undefined), bcd.api);
/**
 * Whether all three engines ship `api.<path>` at the baseline, and it is not deprecated.
 * A path BCD does not list is not shipped: generated members are measured, not assumed.
 */
export function shipped(path) {
  const compat = entry(path)?.__compat;
  if (!compat || compat.status?.deprecated) return false;
  return Object.entries(baseline).every(([engine, max]) => ships(compat.support[engine], max));
}
/** Whether BCD lists `api.<path>` at all (members it does not list are judged by their interface). */
export const listed = path => !!entry(path)?.__compat;

/**
 * Specs left out on purpose, though the engines ship some of their interfaces: shortname →
 * { reason, decision } (docs/API_DECISIONS.md, milestone 0.3).
 */
export const excludedSpecs = {};

/** Lean module names of the spec modules that do not follow the mechanical rule (UpperCamel of the shortname). */
export const moduleNames = {};
