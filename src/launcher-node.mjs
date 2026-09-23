// Private Node build bridge for the engine-specific compatibility launchers.
import { runApplicationCli, reportCliError } from './application-cli.mjs';
try {
  if (process.argv.length !== 3) throw new Error('Invalid compatibility launcher invocation');
  const { target, executable, args } = JSON.parse(process.argv[2]);
  if (!['deno', 'bun'].includes(target) || typeof executable !== 'string' || !executable)
    throw new Error('Invalid compatibility launcher invocation');
  if (!Array.isArray(args) || args.some(value => typeof value !== 'string'))
    throw new Error('Invalid compatibility launcher arguments');
  process.exitCode = await runApplicationCli(args, { defaultTarget: target, targetExecutable: executable });
} catch (error) { reportCliError(error); process.exitCode = 1; }
