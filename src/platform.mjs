import path from 'node:path';

// Windows ARM64 was removed on 2026-10-16 (user decision): neither Lean nor
// Emscripten publishes Windows ARM64 prebuilts. Do not add it back without them.
export const buildPlatforms = ['linux-x64', 'linux-arm64', 'darwin-x64', 'darwin-arm64', 'win32-x64'];
export const supportedPlatformsText = 'Lasm supports Linux and macOS on x86-64 and ARM64, and Windows on x86-64.';

/** Fails before any download or build on a host outside the five supported platforms. */
export function assertSupportedHost(platform = process.platform, arch = process.arch) {
  const host = `${platform}-${arch}`;
  if (buildPlatforms.includes(host)) return;
  throw new Error(host === 'win32-arm64'
    ? `${supportedPlatformsText} Windows ARM64 is not supported.`
    : `${supportedPlatformsText} Your host is ${host}, which is not supported.`);
}
export const executableName = (name, platform = process.platform) => platform === 'win32' ? `${name}.exe` : name;

export function insideDirectory(directory, file, paths = path) {
  const relative = paths.relative(directory, file);
  return relative !== '..' && !relative.startsWith('..' + paths.sep) && !paths.isAbsolute(relative);
}

/** LLD is explicitly told to use POSIX response-file quoting on every OS. */
export function responseFile(arguments_) {
  return arguments_.map(argument => {
    if (/[\0\r\n]/.test(argument)) throw new Error('Linker arguments cannot contain NUL or newlines');
    return '"' + argument.replaceAll('\\', '\\\\').replaceAll('"', '\\"') + '"';
  }).join('\n') + '\n';
}
