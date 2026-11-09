// A stand-in for src/link-driver/link.mjs whose full links finish: the stand-in
// toolchain (toolchain.mjs) stops a Node-driver link after wasm-ld, which
// writes the map and the Wasm; this module then writes the program's glue as
// Emscripten would (one include label per --pre-js file) and records each
// link's options. Modules under test import it in place of the real driver
// through finishLinks() (a module.registerHooks resolve hook), as fresh instances.
import { registerHooks } from 'node:module';
import { writeFileSync } from 'node:fs';
import * as driver from '../../../src/link-driver/link.mjs';
import { emscriptenGlue } from './toolchain.mjs';

export const { bundledNativeSigs, linkTemporaryDirectory, removeTemporary, emscriptenResponseFile, jsStepCache } = driver;

/** Every link's { mode, optimize, mapOnly, stdio, args } through this module, in order;
 * `after(options)` runs after each full link (a test's change to its output). */
export const links = [], hooks = { after: undefined };
export function linkWithNode(options) {
  links.push({ mode: options.mode, optimize: options.optimize ?? true, mapOnly: options.mapOnly ?? false, stdio: options.stdio, args: options.args });
  if (options.mapOnly) return driver.linkWithNode(options);
  driver.linkWithNode({ ...options, mapOnly: true });
  const output = options.args[options.args.indexOf('-o') + 1];
  writeFileSync(output, emscriptenGlue(options.args.flatMap((arg, index) => arg === '--pre-js' ? [options.args[index + 1]] : [])));
  hooks.after?.(options);
}

const here = new URL('./link-driver.mjs', import.meta.url).href;
let hooked = false, instance = 0;
/** A fresh instance of the module at `url` (and of nothing else) that links through this module. */
export async function finishLinks(url) {
  if (!hooked) {
    hooked = true;
    registerHooks({
      resolve(specifier, context, next) {
        if (/[\\/]link-driver[\\/]link\.mjs$/.test(specifier) && /[?&]finished=/.test(context.parentURL ?? '')) return { url: here, shortCircuit: true };
        return next(specifier, context);
      },
    });
  }
  return import(`${url}?finished=${instance++}`);
}
