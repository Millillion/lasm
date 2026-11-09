// Loads native adapters (src/*.mjs, src/*.cjs that require koffi) against a
// scripted stand-in libc, in this process, so their call sequences and error
// paths are checked without the real library and on every platform.
import { registerHooks, createRequire } from 'node:module';
import { fileURLToPath } from 'node:url';

const standIn = new URL('../fixtures/koffi-stand-in/koffi.cjs', import.meta.url).href;
let installed = false;
export function installKoffiStandIn() {
  if (installed) return;
  installed = true;
  registerHooks({ resolve(specifier, context, next) {
    // Also the copy a packaged host bundles beside src (src/native/node_modules/koffi).
    if (specifier === 'koffi' || /[\\/]native[\\/]node_modules[\\/]koffi[\\/]index\.cjs$/.test(specifier)) return { url: standIn, format: 'commonjs', shortCircuit: true };
    return next(specifier, context);
  } });
}

/** A libc whose functions are given by `functions` (by C name). Signatures are
 * either one C declaration or (name, result, args); every call is recorded. */
export function standInKoffi(functions, { errno: errnoTable = { EINTR: 4, EIO: 5, EINVAL: 22, EBADF: 9, EINPROGRESS: 115, EALREADY: 114, ECANCELED: 125 }, fallback, missing = [] } = {}) {
  const calls = [], loads = [];
  const state = { errno: 0 };
  const library = path => ({
    func(...spec) {
      const name = spec.length === 1 ? /([A-Za-z_$][A-Za-z0-9_$]*)\s*\(/.exec(spec[0])[1]
        : spec.length === 4 ? spec[1] : spec[0];
      if (missing.includes(name) || !functions[name] && !fallback) throw new Error(`stand-in libc has no ${name}`);
      // Looked up on each call, so a test can replace a function after binding.
      const call = (...args) => { calls.push([name, ...args]); return (functions[name] ?? fallback(name))(...args); };
      call.async = (...args) => {
        const callback = args.pop();
        setImmediate(() => { let value; try { value = call(...args); } catch (error) { return callback(error); } callback(null, value); });
      };
      return call;
    },
    symbol(name) { if (!functions[name]) throw new Error(`no symbol ${name}`); return functions[name]; },
    path,
  });
  const ffi = {
    load(path) { loads.push(path); return library(path); },
    errno(value) { if (value !== undefined) state.errno = value; return state.errno; },
    os: { errno: errnoTable },
    struct: fields => ({ struct: fields }), pointer: type => ({ pointer: type }), out: type => ({ out: type }),
    sizeof: () => 80,
    decode: (...args) => functions.$decode(...args), view: (...args) => functions.$view(...args),
  };
  return { ffi, calls, loads, state, install() { globalThis.__lasmKoffiStandIn = ffi; return this; } };
}

let fresh = 0;
/** A new instance of an ES module (its module-level caches start empty). */
export const freshImport = url => import(`${url}?stand-in=${++fresh}`);
const require = createRequire(import.meta.url);
/** A new instance of a CommonJS module. */
export function freshRequire(url) {
  const path = require.resolve(fileURLToPath(url));
  delete require.cache[path];
  return require(path);
}
