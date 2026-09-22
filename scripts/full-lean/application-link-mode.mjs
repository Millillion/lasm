import { openSync, readSync, closeSync, realpathSync, statSync } from 'node:fs';
import { createHash } from 'node:crypto';

// These libraries belong to the pinned shared runtime. User libraries and
// precompiled objects keep the existing standalone Wasm link behavior until
// their symbol-interposition and dependency cases are separately validated.
const runtimeLibraries = new Set(['leanrt', 'leancpp', 'Init', 'Std', 'Lean', 'Lake',
  'Init_shared', 'leanshared', 'leanshared_1', 'leanshared_2', 'Lake_shared',
  'gmp', 'c++', 'c++abi', 'm', 'dl', 'pthread', 'rt', 'uv', 'nodefs.js', 'lasmhost', 'lasmnative']);

export const isRuntimeLibrary = arg => arg.startsWith('-l') && runtimeLibraries.has(arg.slice(2));

export function isRuntimeArchive(path, runtime) {
  if (path.startsWith('-') || !path.endsWith('.a')) return false;
  let fd;
  try {
    const stat = statSync(path);
    const matches = (runtime?.providedArchives ?? []).filter(item => item.bytes === stat.size);
    if (!stat.isFile() || !matches.length) return false;
    fd = openSync(path, 'r');
    const bytes = Buffer.alloc(64 * 1024), digest = createHash('sha256');
    for (;;) {
      const count = readSync(fd, bytes, 0, bytes.length, null);
      if (!count) break;
      digest.update(bytes.subarray(0, count));
    }
    const sha256 = digest.digest('hex');
    return matches.some(item => item.sha256 === sha256);
  } catch { return false; }
  finally { if (fd !== undefined) closeSync(fd); }
}

function isGeneratedLeanC(path) {
  const marker = Buffer.from('// Lean compiler output\n');
  let fd;
  try {
    fd = openSync(path, 'r');
    const bytes = Buffer.alloc(marker.length);
    return readSync(fd, bytes, 0, bytes.length, 0) === marker.length && bytes.equals(marker);
  } catch { return false; }
  finally { if (fd !== undefined) closeSync(fd); }
}

// Shared runtimes and split optimization both require known runtime inputs.
export function runtimeLinkInputs(args, runtimePaths, sharedRuntime) {
  const standalone = reason => ({ eligible: false, reason });
  if (!sharedRuntime) return standalone('No verified runtime inputs supplied');
  if (runtimePaths.length) return standalone('Explicit runtime library search paths');
  if (args.some(arg => /^-l/.test(arg) && !isRuntimeLibrary(arg)))
    return standalone('Custom linked library');
  const libraryDirectories = [];
  for (let i = 0; i < args.length; i++) {
    if (args[i] === '-L') libraryDirectories.push(args[++i]);
    else if (args[i].startsWith('-L')) libraryDirectories.push(args[i].slice(2));
  }
  if (libraryDirectories.length) {
    try {
      const provided = new Set((sharedRuntime.compilerLibraryDirectories ?? []).map(path => realpathSync(path)));
      if (libraryDirectories.some(path => !provided.has(realpathSync(path))))
        return standalone('Custom library search directory');
    } catch { return standalone('Unverified library search directory'); }
  }
  if (args.some(arg => ['-Xlinker', '-include', '-imacros', '-x', '-static', '-static-pie', '-nostdlib', '-nodefaultlibs'].includes(arg)))
    return standalone('Explicit compiler or linker semantics');
  if (args.some(arg => /^-f(?:no-[pP][iI][cC]|visibility|freestanding|lto)/.test(arg)))
    return standalone('Explicit symbol or object semantics');
  if (args.some(arg => arg.startsWith('-Wl,') && arg.slice(4).split(',')
    .some(flag => !['--start-group', '--end-group', '--gc-sections', '--export=__cpp_exception', '--export-if-defined=__cpp_exception'].includes(flag))))
    return standalone('Additional linker controls');
  if (args.some(arg => !arg.startsWith('-') && /\.(?:o|a|bc|so(?:\.\d+)*|dylib|dll|cpp|cc|cxx|s|S)$/.test(arg)
    && !isRuntimeArchive(arg, sharedRuntime)))
    return standalone('Custom or precompiled link input');
  const sources = args.filter(arg => !arg.startsWith('-') && arg.endsWith('.c'));
  if (!sources.length || !sources.every(isGeneratedLeanC)) return standalone('Link inputs are not exclusively generated Lean C');
  return { eligible: true, sources, reason: 'Generated Lean C using the pinned runtime libraries' };
}

export function applicationLinkMode(args, runtimePaths, sharedRuntime, override) {
  const standalone = reason => ({ mode: 'standalone', reason });
  if (override !== undefined && override !== 'standalone')
    throw new Error('LASM_FULL_APPLICATION_LINK must be standalone when supplied');
  if (override === 'standalone') return standalone('Explicit standalone application link requested');
  if (!sharedRuntime) return standalone('No shared application runtime selected');
  const selection = runtimeLinkInputs(args, runtimePaths, sharedRuntime);
  return { mode: selection.eligible ? 'shared' : 'standalone', reason: selection.reason };
}
