// Emscripten link settings as data (Phase 2 Node link driver). The recipe
// holds, for each of Lasm's two link modes, the exact settings file emcc wrote
// before the link (emcc-00-settings.json, Settings.external_dict() in
// tools/settings.py) with placeholders for the input-dependent values, plus the
// defaults of every setting the driver reads or changes. A Settings object is
// the driver's view of tools/settings.py's global `settings`.
import { readFileSync } from 'node:fs';
import path from 'node:path';
import vm from 'node:vm';
import { pythonEquals, pythonJsonDumps } from './python.mjs';

// tools/settings.py INTERNAL_SETTINGS: never written to the settings file.
const internalSettings = new Set(['SIDE_MODULE_IMPORTS']);

/** Placeholder values of the settings template. Strings of the form
 * '<emscripten>/a/b' become platform paths below the Emscripten root. */
export const settingsPlaceholders = Object.freeze({
  USER_EXPORTS: '<user-exports>',
  EXPORTED_FUNCTIONS: '<exported-functions>',
  PRE_JS_FILES: '<pre-js>',
});

export class Settings {
  /** external: the settings file contents; defaults: recorded defaults. */
  constructor(external, defaults) {
    this.values = structuredClone(external);
    this.defaults = defaults;
    // Settings whose recorded value equals the default stay in the file
    // (tools/settings.py externalizes legacy settings unconditionally).
    this.pinned = new Set(Object.keys(external).filter(key => Object.hasOwn(defaults, key) && pythonEquals(external[key], defaults[key])));
  }
  has(key) { return Object.hasOwn(this.values, key) || Object.hasOwn(this.defaults, key); }
  get(key) {
    if (Object.hasOwn(this.values, key)) return this.values[key];
    if (Object.hasOwn(this.defaults, key)) return this.defaults[key];
    throw new Error(`The link-driver recipe has no value or default for setting ${key}`);
  }
  set(key, value) {
    if (!Object.hasOwn(this.defaults, key) && !Object.hasOwn(this.values, key))
      throw new Error(`The link-driver recipe has no default for setting ${key}`);
    this.values[key] = value;
  }
  /** Settings.external_dict(): non-default, non-internal settings. */
  external() {
    const result = {};
    for (const [key, value] of Object.entries(this.values)) {
      if (internalSettings.has(key)) continue;
      if (this.pinned.has(key) || !Object.hasOwn(this.defaults, key) || !pythonEquals(value, this.defaults[key])) result[key] = value;
    }
    return result;
  }
  /** json.dumps(settings.external_dict(), sort_keys=True, indent=2) */
  serialize() { return pythonJsonDumps(this.external(), { indent: 2, sortKeys: true }); }
}

/** Fill the recorded settings template for one link. */
export function instantiateSettings(template, { userExports, preJs, jsLibrary, emscripten, platform = process.platform }) {
  const paths = platform === 'win32' ? path.win32 : path.posix;
  if (!userExports.includes('_main'))
    throw new Error('The Node link driver has no recording for applications without _main in EXPORTED_FUNCTIONS');
  const values = {
    '<user-exports>': [...userExports],
    // tools/link.py phase_linker_setup: an explicit _main becomes EXPORT_IF_DEFINED=main.
    '<exported-functions>': userExports.filter(name => name !== '_main'),
    '<pre-js>': [...preJs],
    '<js-library>': jsLibrary,
  };
  const fill = value => {
    if (typeof value === 'string') {
      if (Object.hasOwn(values, value)) return values[value];
      if (value.startsWith('<emscripten>/')) return paths.join(emscripten, ...value.slice('<emscripten>/'.length).split('/'));
      if (/^<[a-z-]+>/.test(value)) throw new Error(`Unknown settings placeholder ${value}`);
      return value;
    }
    if (Array.isArray(value)) return value.map(fill);
    if (value && typeof value === 'object') return Object.fromEntries(Object.entries(value).map(([key, item]) => [key, fill(item)]));
    return value;
  };
  return fill(template);
}

/** Default values from the SDK's src/settings.js and src/settings_internal.js,
 * which tools/settings.py loads (recipe derivation only). */
export function readSettingsDefaults(emscripten) {
  const values = {};
  for (const file of ['settings.js', 'settings_internal.js']) {
    const context = vm.createContext({});
    vm.runInContext(readFileSync(path.join(emscripten, 'src', file), 'utf8'), context, { filename: file });
    for (const key of Object.keys(context)) values[key] = JSON.parse(JSON.stringify(context[key]));
  }
  return values;
}
