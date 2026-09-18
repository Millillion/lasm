import { existsSync } from 'node:fs';
import path from 'node:path';

export const buildPlatforms = ['linux-x64', 'linux-arm64', 'darwin-x64', 'darwin-arm64', 'win32-x64', 'win32-arm64'];
export const executableName = (name, platform = process.platform) => platform === 'win32' ? `${name}.exe` : name;

export function insideDirectory(directory, file, paths = path) {
  const relative = paths.relative(directory, file);
  return relative !== '..' && !relative.startsWith('..' + paths.sep) && !paths.isAbsolute(relative);
}

/** Installed Lean distributions use different linker filenames on each OS. */
export function bundledTools(prefix, platform = process.platform, exists = existsSync) {
  const executable = name => path.join(prefix, 'bin', executableName(name, platform));
  const candidates = platform === 'darwin' ? ['ld64.lld', 'ld.lld', 'lld'] : ['ld.lld', 'lld'];
  const tools = { lean: executable('lean'), lake: executable('lake'), clang: executable('clang'),
    linker: candidates.map(executable).find(exists) };
  if (!tools.linker || Object.values(tools).some(file => !exists(file))) {
    throw new Error('The complete official Lean toolchain is required, including Lean, Lake, Clang, and LLD');
  }
  return tools;
}

/** LLD is explicitly told to use POSIX response-file quoting on every OS. */
export function responseFile(arguments_) {
  return arguments_.map(argument => {
    if (/[\0\r\n]/.test(argument)) throw new Error('Linker arguments cannot contain NUL or newlines');
    return '"' + argument.replaceAll('\\', '\\\\').replaceAll('"', '\\"') + '"';
  }).join('\n') + '\n';
}
