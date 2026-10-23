import { parseInitArguments } from './init.mjs';

export const cliUsage = `Usage: lasm <Main.lean> [-- arguments…]
       lasm build <Main.lean> [--output dist]
       lasm init <directory> [--template plain|express|hono|std-http]
       lasm build <lasm.json> [output-directory]
       lasm cache repair

Options: --rebuild, --verbose, --help
Application arguments must follow --.`;

/** Parse independently of provisioning: help/errors must never download tools. */
export function parseLasmArguments(argv) {
  const tokens = [...argv];
  if (tokens[0] === 'init') return parseInitArguments(tokens.slice(1));
  if (tokens[0] === 'cache') {
    if (tokens.includes('--help') || tokens.includes('-h')) return { command: 'help' };
    if (tokens.length !== 2 || tokens[1] !== 'repair') throw new Error('Usage: lasm cache repair');
    return { command: 'cache-repair' };
  }
  const result = { command: 'run', rebuild: false, verbose: false, args: [] };
  if (['build', 'run'].includes(tokens[0])) result.command = tokens.shift();
  const positional = [], supplied = new Set();
  for (let i = 0; i < tokens.length; i++) {
    const token = tokens[i];
    if (token === '--') {
      if (result.command !== 'run') throw new Error('Application arguments are accepted by lasm run, not lasm build');
      result.args = tokens.slice(i + 1); break;
    }
    if (token === '--help' || token === '-h') return { command: 'help' };
    if (token === '--rebuild' || token === '--verbose') { result[token.slice(2)] = true; continue; }
    const match = /^--output(?:=(.*))?$/.exec(token);
    if (match) {
      if (supplied.has('output')) throw new Error('Specify --output only once');
      supplied.add('output');
      const value = match[1] ?? tokens[++i];
      if (!value || value.startsWith('--')) throw new Error('--output requires a value');
      result.output = value; continue;
    }
    if (token.startsWith('-')) throw new Error(`Unknown Lasm option: ${token}. Application arguments must follow --.`);
    positional.push(token);
  }
  if (!positional.length) throw new Error(cliUsage);
  result.input = positional.shift();
  if (result.command === 'build' && positional.length === 1 && result.output === undefined) result.output = positional.shift();
  if (positional.length) throw new Error('Unexpected positional arguments. Put application arguments after --.');
  if (result.command === 'run' && result.output !== undefined) throw new Error('--output is available only with lasm build');
  if (!(result.input.endsWith('.lean') || result.command === 'build' && result.input.endsWith('.json')))
    throw new Error('Expected a Lean source file, or a binding configuration for lasm build');
  if (result.command === 'build') result.output ??= 'dist';
  return result;
}
