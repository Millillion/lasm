// Private Node build bridge for the engine-specific compatibility launchers.
import { runApplicationCli, reportCliError } from './application-cli.mjs';
const [target, executable, ...args] = process.argv.slice(2);
try {
  if (!['deno', 'bun'].includes(target) || !executable) throw new Error('Invalid compatibility launcher invocation');
  process.exitCode = await runApplicationCli(args, { defaultTarget: target, targetExecutable: executable });
} catch (error) { reportCliError(error); process.exitCode = 1; }
