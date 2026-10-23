// Relink configuration A's kept link inputs as configuration B (JSPI, Lean main
// on Node's main thread). No runtime rebuild: the same runtime archives and
// application objects, the Python emcc driver (LASM_LINK_DRIVER=emcc path)
// with these changes to Lasm's final link flags:
//   - PROXY_TO_PTHREAD removed; -sJSPI with jsproto_invoke_async as a promising export
//   - jspi-library.js after host-library.js; jspi-post.js; futex-wrap.c
//   - -Wl,--wrap=emscripten_futex_wait; exports for the direct callbacks
// Usage (inside run-bounded.mjs + base-pages.py):
//   node relink.mjs BUILD_WORK_DIR DIST_A_DIR [OPT]
// BUILD_WORK_DIR is the .build-* directory LASM_KEEP_LINK_WORK kept. Writes
// DIST_A_DIR/program-jspi.{cjs,wasm}.
import { readFileSync, writeFileSync } from 'node:fs';
import { join, resolve, dirname } from 'node:path';
import { fileURLToPath } from 'node:url';
import { execFileSync } from 'node:child_process';

// The same reader as src/application-link.mjs (one quoted, backslash-escaped argument per line).
const readResponseArguments = file => readFileSync(file, 'utf8').split('\n').filter(Boolean).map(line => line.slice(1, -1).replace(/\\(.)/g, '$1'));
const here = dirname(fileURLToPath(import.meta.url));
const [workArg, distArg, opt = '-Oz'] = process.argv.slice(2);
const work = resolve(workArg), dist = resolve(distArg);
let args = readResponseArguments(join(work, 'link.rsp'));
const drop = new Set(['-sPROXY_TO_PTHREAD=1', '-Oz', '-g1']);
args = args.filter(arg => !drop.has(arg) && !arg.startsWith('-Wl,-Map=') && !arg.startsWith('-sEXPORTED_FUNCTIONS='));
const out = args.indexOf('-o');
args.splice(out, 2);
const exportsFile = join(work, 'exports-jspi.json');
const exportsList = JSON.parse(readFileSync(join(work, 'exports.json'), 'utf8'));
writeFileSync(exportsFile, JSON.stringify([...exportsList, '_jsproto_invoke_async', '_jsproto_invoke_sync', '_jsproto_compare']));
const library = args.indexOf('--js-library');
args.splice(library + 2, 0, '--js-library', join(here, 'jspi-library.js'));
args.push(join(here, 'futex-wrap.c'), '-Wl,--wrap=emscripten_futex_wait', ...opt.split(' '), '-g1',
  `-sEXPORTED_FUNCTIONS=@${exportsFile}`, '-sJSPI', "-sJSPI_EXPORTS=['jsproto_invoke_async']",
  '-sDEFAULT_LIBRARY_FUNCS_TO_INCLUDE=$UTF8ToString,$lasmJspi',
  '--post-js', join(here, 'jspi-post.js'), '-o', join(dist, 'program-jspi.cjs'));
writeFileSync(join(work, 'link-jspi.args.json'), JSON.stringify(args, null, 1));
const started = Date.now();
execFileSync(process.execPath, [join(here, '../emxx.mjs'), 'em++', ...args], { stdio: 'inherit' });
console.log(JSON.stringify({ relinkSeconds: (Date.now() - started) / 1000, output: join(dist, 'program-jspi.cjs') }));
