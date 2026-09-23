import { runApplicationCli, runApplicationChild, reportCliError } from './application-cli.mjs';
import { engineName } from './js-engine.mjs';
import { fileURLToPath } from 'node:url';

export const launcherUsage = 'Usage: lasm-<node|deno|bun>.js [--rebuild] [--verbose] <Main.lean> [--] [arguments…]';

/** Keep the original filename launcher's arguments, including optional --. */
export function launcherArguments(argv) {
  const rest = [...argv], options = [];
  while (['--rebuild', '--verbose'].includes(rest[0])) options.push(rest.shift());
  if (['--help', '-h'].includes(rest[0])) return null;
  const file = rest.shift();
  if (!file?.endsWith('.lean') || file.startsWith('-')) throw new Error(launcherUsage);
  if (rest[0] === '--') rest.shift();
  return [...options, file, '--', ...rest];
}

export async function launch(target) {
  try {
    if (!['node', 'deno', 'bun'].includes(target)) throw new Error('Unknown launcher target');
    const args = launcherArguments(process.argv.slice(2));
    if (!args) { console.log(launcherUsage); return; }
    const actual = engineName();
    if (actual === 'node') process.exitCode = await runApplicationCli(args, { defaultTarget: target });
    else {
      if (actual !== target) throw new Error(`lasm-${target}.js requires Node or ${target}; this process is running ${actual}`);
      // Compilation remains in Node; deployment uses the exact Deno/Bun that
      // invoked this wrapper, even when that executable is absent from PATH.
      process.exitCode = await runApplicationChild('node',
        [fileURLToPath(new URL('./launcher-node.mjs', import.meta.url)), target, process.execPath, ...args],
        'Building Lean applications requires Node/npm. Put Node on PATH; Lean and the compiler SDK are provisioned automatically.');
    }
  } catch (error) { reportCliError(error); process.exitCode = 1; }
}
