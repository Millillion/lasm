// Stand-ins for the browser loader's bundled imports (test/browser-loader.test.mjs):
// ./config.mjs (the build's generated configuration), ./program.mjs (the
// Emscripten glue) and ./edge-start.mjs (startLean). Live bindings: each test
// sets the configuration before it imports a fresh loader.
export const state = globalThis.__lasmLoaderStandIn ??= { starts: [] };
// ./config.mjs
export let name = 'demo';
export let wasmUrl = () => new URL('https://app.test/app.0123456789ab.wasm');
export let modules = { 'lasm:app': {} };
export let suspend = 'none';
export let autoMount = false;
export function configure(config) {
  ({ name = 'demo', suspend = 'none', autoMount = false } = config);
  if (config.wasmUrl) wasmUrl = config.wasmUrl;
  if (config.modules) modules = config.modules;
}
// ./program.mjs
export default function createProgram() {}
// ./edge-start.mjs
export async function startLean(options) {
  state.starts.push(options);
  return state.startLean(options);
}
