// Maintainer toolchain adapter: upstream Leanc and Lake still run as Lean/Wasm.
// This replaces their external C toolchain and wraps resulting Wasm executables
// for the chosen engine. Test sources and expected output are never rewritten.
import { readFileSync, writeFileSync, chmodSync, existsSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { spawnSync } from 'node:child_process';
import { pathToFileURL } from 'node:url';
import { expandResponseArgs } from './response-args.mjs';
import { preserveWebWorker } from './preserve-web-worker.mjs';
import { applicationLinkMode, isRuntimeLibrary, isRuntimeArchive } from './application-link-mode.mjs';

const config = JSON.parse(readFileSync(process.env.LASM_FULL_TOOLCHAIN_CONFIG));
const original = expandResponseArgs(process.argv.slice(2));
const compileOnly = original.some(arg => ['-c', '-E', '-S', '-fsyntax-only', '--version', '-dumpmachine', '-print-search-dirs'].includes(arg));
const shared = original.includes('-shared');
const driver = join(config.sdk, 'upstream/emscripten', process.env.LASM_CC_LANGUAGE === 'c++' ? 'em++' : 'emcc');
let output = 'a.out';
let explicitOutput = false;
let args = [];
const runtimePaths = [];
let embeddedLeanLibraries = false;
let embeddedLake = false;
const sourceBuild = config.sourceBuild ?? config.build;
for (let i = 0; i < original.length; i++) {
  let arg = original[i];
  // wasm-ld accepts native rpath flags but does not implement an ELF loader.
  // Preserve their runtime meaning in the executable's startup prelude.
  if (arg.startsWith('-Wl,')) {
    const parts = arg.slice(4).split(',');
    const remaining = [];
    for (let n = 0; n < parts.length; n++) {
      if (['-rpath', '--rpath', '-R'].includes(parts[n])) {
        const value = parts[++n];
        if (value === undefined) throw new Error('Missing linker rpath');
        runtimePaths.push(...value.split(':'));
      } else if (/^(?:--?rpath=|-R.)/.test(parts[n])) {
        runtimePaths.push(...parts[n].replace(/^(?:--?rpath=|-R)/, '').split(':'));
      } else remaining.push(parts[n]);
    }
    if (!remaining.length) continue;
    arg = '-Wl,' + remaining.join(',');
  }
  if (arg === '-o') { output = original[++i]; explicitOutput = true; continue; }
  if (arg.startsWith('-o') && arg.length > 2 && !arg.startsWith('-object')) { output = arg.slice(2); explicitOutput = true; continue; }
  // Relocate CMake's absolute build paths into the frozen artifact.
  if (arg.startsWith(sourceBuild + '/')) arg = config.build + arg.slice(sourceBuild.length);
  if (/^-[IL]/.test(arg) && arg.slice(2).startsWith(sourceBuild + '/'))
    arg = arg.slice(0, 2) + config.build + arg.slice(2 + sourceBuild.length);
  if (shared && /^-l(?:leanrt|leancpp|Init|Std|Lean|Lake|Init_shared|leanshared(?:_[12])?|Lake_shared)$/.test(arg)) continue;
  if (!compileOnly && !shared && /^-l(?:Init_shared|leanshared(?:_[12])?|Lake_shared)$/.test(arg)) {
    // The full Wasm toolchain embeds Lean's runtime. C embedding clients still
    // use upstream's normal shared-library flags; resolve those to the matching
    // Wasm archives, rather than feeding CMake's empty .so placeholders to ld.
    embeddedLeanLibraries = true;
    embeddedLake ||= arg === '-lLake_shared';
    continue;
  }
  args.push(arg);
}
const applicationMode = !compileOnly && !shared
  ? applicationLinkMode(args, runtimePaths, config.applicationRuntime) : undefined;
const sharedApplication = applicationMode?.mode === 'shared';
if (sharedApplication) args = args.filter(arg => !isRuntimeLibrary(arg) && !isRuntimeArchive(arg, config.applicationRuntime));
args.push(`-sMEMORY64=${config.memoryMode ?? 2}`, '-pthread', '-fwasm-exceptions');
// Include the Lean C++ runtime without changing the selected compiler driver.
// emcc classifies C/C++ sources by suffix. Injecting per-file -x switches makes
// the pinned SDK attempt to compile existing .o inputs as sources.
if (!compileOnly) args.push('-sDEFAULT_TO_CXX=1', '-Wno-experimental', '-Wno-pthreads-mem-growth');
if (compileOnly) {
  if (explicitOutput) args.push('-o', output);
} else if (shared || sharedApplication) {
  // Dynamic Lean plugins may expose any declaration to the interpreter later.
  // Retain their public definitions just as a native shared library does.
  // A side module uses its caller's memory and stack. Leanc may forward the
  // compiler executable's stack setting, which has no meaning for this link.
  args.push('-sSIDE_MODULE=1', '-sSTACK_SIZE=0', '-o', sharedApplication ? resolve(output + '.wasm') : output);
} else {
  const glue = resolve(output + '.cjs');
  const exportFile = resolve(output + '.exports.json');
  const searchPathsFile = resolve(output + '.rpaths.js');
  writeFileSync(searchPathsFile, `Module.lasmRuntimeLibraryPaths = ${JSON.stringify(runtimePaths)};\n`);
  // An AOT application's roots are its main and its actual shared dependencies.
  // The full compiler's export list roots every standard-library initializer and
  // interpreter constant, accidentally turning even `main := pure ()` into a
  // complete compiler build. Emscripten also retains the imports of explicit
  // side-module dependencies for FFI.
  const exports = ['_main', '_malloc', '_free'];
  writeFileSync(exportFile, JSON.stringify(exports));
  if (embeddedLeanLibraries) args.push('-L', join(config.build, 'lib/lean'),
    ...(embeddedLake ? ['-lLake'] : []), '-lLean', '-lStd', '-lInit', '-lleancpp', '-lleanrt', '-lgmp');
  args.push('-o', glue, '-sMAIN_MODULE=2', `-sEXPORTED_FUNCTIONS=@${exportFile}`,
    `-sMALLOC=${config.systemAllocator ?? 'dlmalloc'}`,
    '-sPROXY_TO_PTHREAD=1', `-sPTHREAD_POOL_SIZE=${config.pthreadPoolSize ?? 4}`, '-sEXIT_RUNTIME=1', '-sNODERAWFS=1',
    '-sALLOW_MEMORY_GROWTH=1', '-sGROWABLE_ARRAYBUFFERS=1', '-sSTACK_OVERFLOW_CHECK=2', '-Wl,--export-if-defined=__cpp_exception',
    '-sINITIAL_MEMORY=134217728', `-sMAXIMUM_MEMORY=${config.maximumMemoryBytes ?? 4294967296}`, '-sSTACK_SIZE=67108864',
    '-L', join(config.build, 'lib/lean'), '-llasmhost', '-llasmnative',
    '--pre-js', searchPathsFile,
    '--pre-js', join(config.runtimeSupport, 'emscripten-pre.js'),
    '--pre-js', join(config.runtimeSupport, 'host-pre.js'),
    '--js-library', join(config.runtimeSupport, 'host-library.js'));
}
const execution = spawnSync(driver, args, { stdio: 'inherit' });
if (execution.error) throw execution.error;
if (execution.status !== 0) process.exit(execution.status ?? 1);
if (sharedApplication) {
  const quote = text => "'" + text.replaceAll("'", "'\\''") + "'";
  const runtime = config.applicationRuntime.build;
  const command = [config.executable, ...config.engineArgs,
    join(runtime, 'runtime-support/run-compiler.mjs'), '--prefix', runtime];
  writeFileSync(output, `#!/usr/bin/env bash
export LASM_FULL_ENTRYPOINT='compiled'
export LASM_FULL_PROGRAM=${quote(resolve(output + '.wasm'))}
export LASM_FULL_APP_PATH=${quote(resolve(output))}
export LASM_FULL_ARGV0="$0"
if [ -z "\${LEAN_SYSROOT+x}" ]; then export LEAN_SYSROOT=${quote(config.prefix)}; fi
export LEAN_STACK_SIZE_KB="\${LEAN_STACK_SIZE_KB:-65536}"
export LEAN_NUM_THREADS="\${LEAN_NUM_THREADS:-${config.leanThreads ?? 4}}"
${Object.entries(config.engineEnvironment ?? {}).map(([key, value]) => `export ${key}=${quote(value)}`).join('\n')}
exec ${command.map(quote).join(' ')} "$@"
`);
  chmodSync(output, 0o755);
} else if (!compileOnly && !shared) {
  preserveWebWorker(resolve(output + '.cjs'));
  const quote = text => "'" + text.replaceAll("'", "'\\''") + "'";
  const frozenHost = join(config.build, 'host/node-host.mjs');
  const host = existsSync(frozenHost) ? frozenHost : resolve(config.runtimeSupport, '../../src/node-host.mjs');
  const hostUrl = pathToFileURL(host).href;
  const command = [config.executable, ...config.engineArgs, resolve(output + '.cjs')];
  writeFileSync(output, `#!/usr/bin/env bash
export LASM_FULL_HOST_MODULE=${quote(hostUrl)}
export LASM_FULL_APP_PATH=${quote(resolve(output))}
export LEAN_STACK_SIZE_KB="\${LEAN_STACK_SIZE_KB:-65536}"
export LEAN_NUM_THREADS="\${LEAN_NUM_THREADS:-${config.leanThreads ?? 4}}"
${Object.entries(config.engineEnvironment ?? {}).map(([key, value]) => `export ${key}=${quote(value)}`).join('\n')}
exec ${command.map(quote).join(' ')} "$@"
`);
  chmodSync(output, 0o755);
}
if (applicationMode && config.applicationRuntime)
  writeFileSync(output + '.lasm-link.json', JSON.stringify({ ...applicationMode,
    ...(sharedApplication ? { runtime: config.applicationRuntime } : {}) }, null, 2) + '\n');
