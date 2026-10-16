import { runApplicationCli, reportCliError } from './application-cli.mjs';

export const launcherUsage = 'Usage: lasm-node.js [--rebuild] [--verbose] <Main.lean> [--] [arguments…]';

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

export async function launch() {
  try {
    const args = launcherArguments(process.argv.slice(2));
    if (!args) { console.log(launcherUsage); return; }
    process.exitCode = await runApplicationCli(args);
  } catch (error) { reportCliError(error); process.exitCode = 1; }
}
