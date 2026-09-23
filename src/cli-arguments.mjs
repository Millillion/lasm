export const cliUsage = `Usage: lasm <Main.lean> [--target node|deno|bun] [-- arguments…]
       lasm build <Main.lean> [--target node|deno|bun] [--output dist]
       lasm build <lasm.json> [output-directory]

Options: --rebuild, --verbose, --help
Application arguments must follow --. The default target is node.`;

/** Parse independently of provisioning: help/errors must never download tools. */
export function parseLasmArguments(argv) {
  const tokens = [...argv];
  const result = { command: 'run', target: 'node', rebuild: false, verbose: false, args: [] };
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
    const match = /^(--target|--output)(?:=(.*))?$/.exec(token);
    if (match) {
      const name = match[1].slice(2);
      if (supplied.has(name)) throw new Error(`Specify --${name} only once`);
      supplied.add(name);
      const value = match[2] ?? tokens[++i];
      if (!value || value.startsWith('--')) throw new Error(`--${name} requires a value`);
      result[name] = value; continue;
    }
    if (token.startsWith('-')) throw new Error(`Unknown Lasm option: ${token}. Application arguments must follow --.`);
    positional.push(token);
  }
  if (!['node', 'deno', 'bun'].includes(result.target)) throw new Error('Use --target node, deno, or bun');
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
