// Maintainer toolchain adapter: upstream Leanc and Lake still run as Lean/Wasm.
// This replaces their external C toolchain and wraps resulting Wasm executables
// for the chosen engine. Test sources and expected output are never rewritten.
import { readFileSync, writeFileSync, chmodSync, existsSync } from 'node:fs';
import { resolve, join, extname } from 'node:path';
import { spawnSync } from 'node:child_process';
import { pathToFileURL } from 'node:url';

const config = JSON.parse(readFileSync(process.env.LASM_FULL_TOOLCHAIN_CONFIG));
const original = process.argv.slice(2);
const compileOnly = original.some(arg => ['-c', '-E', '-S', '-fsyntax-only', '--version', '-dumpmachine', '-print-search-dirs'].includes(arg));
const shared = original.includes('-shared');
const driver = join(config.sdk, 'upstream/emscripten', process.env.LASM_CC_LANGUAGE === 'c++' || !compileOnly ? 'em++' : 'emcc');
let output = 'a.out';
let explicitOutput = false;
const args = [];
const sourceBuild = config.sourceBuild ?? config.build;
for (let i = 0; i < original.length; i++) {
  let arg = original[i];
  if (arg === '-o') { output = original[++i]; explicitOutput = true; continue; }
  if (arg.startsWith('-o') && arg.length > 2 && !arg.startsWith('-object')) { output = arg.slice(2); explicitOutput = true; continue; }
  // Relocate CMake's absolute build paths into the frozen artifact.
  if (arg.startsWith(sourceBuild + '/')) arg = config.build + arg.slice(sourceBuild.length);
  if (/^-[IL]/.test(arg) && arg.slice(2).startsWith(sourceBuild + '/'))
    arg = arg.slice(0, 2) + config.build + arg.slice(2 + sourceBuild.length);
  if (shared && /^-l(?:leanrt|leancpp|Init|Std|Lean|Lake|Init_shared|leanshared(?:_[12])?|Lake_shared)$/.test(arg)) continue;
  if (!compileOnly && !arg.startsWith('-') && extname(arg) === '.c' && existsSync(arg)) args.push('-x', 'c', arg, '-x', 'none');
  else args.push(arg);
}
args.push('-sMEMORY64=2', '-pthread', '-fwasm-exceptions');
if (compileOnly) {
  if (explicitOutput) args.push('-o', output);
} else if (shared) {
  args.push('-sSIDE_MODULE=2', '-o', output);
} else {
  const glue = resolve(output + '.cjs');
  const exportFile = resolve(output + '.exports.json');
  const exports = JSON.parse(readFileSync(join(config.build, 'lasm-wasm-exports.json')))
    .filter(name => name !== '_lean_main'); // The compiler shell is not an application entry point.
  writeFileSync(exportFile, JSON.stringify(exports));
  args.push('-o', glue, '-sMAIN_MODULE=2', `-sEXPORTED_FUNCTIONS=@${exportFile}`,
    '-sPROXY_TO_PTHREAD=1', '-sPTHREAD_POOL_SIZE=4', '-sEXIT_RUNTIME=1', '-sNODERAWFS=1',
    '-sALLOW_MEMORY_GROWTH=1', '-sINITIAL_MEMORY=134217728', '-sMAXIMUM_MEMORY=4294967296', '-sSTACK_SIZE=16777216',
    '-L', join(config.build, 'lib/lean'), '-llasmhost', '-llasmnative',
    '--pre-js', join(config.runtimeSupport, 'emscripten-pre.js'),
    '--pre-js', join(config.runtimeSupport, 'host-pre.js'),
    '--js-library', join(config.runtimeSupport, 'host-library.js'));
}
const execution = spawnSync(driver, args, { stdio: 'inherit' });
if (execution.error) throw execution.error;
if (execution.status !== 0) process.exit(execution.status ?? 1);
if (!compileOnly && !shared) {
  const quote = text => "'" + text.replaceAll("'", "'\\''") + "'";
  const frozenHost = join(config.build, 'host/node-host.mjs');
  const host = existsSync(frozenHost) ? frozenHost : resolve(config.runtimeSupport, '../../src/node-host.mjs');
  const hostUrl = pathToFileURL(host).href;
  const command = [config.executable, ...config.engineArgs, resolve(output + '.cjs')];
  writeFileSync(output, `#!/usr/bin/env bash
export LASM_FULL_HOST_MODULE=${quote(hostUrl)}
export LASM_FULL_APP_PATH=${quote(resolve(output))}
export LEAN_STACK_SIZE_KB="\${LEAN_STACK_SIZE_KB:-8192}"
exec ${command.map(quote).join(' ')} "$@"
`);
  chmodSync(output, 0o755);
}
