import { readFileSync } from 'node:fs';

// Clang's GNU response-file convention: whitespace separates arguments outside
// quotes, backslash quotes the following character, and both quote styles group
// text. Response paths are interpreted relative to the compiler working directory.
export function tokenizeResponse(text) {
  const args = [];
  let value = '', quote = '', started = false;
  for (let i = 0; i < text.length; i++) {
    const c = text[i];
    if (c === '\\' && i + 1 < text.length) { value += text[++i]; started = true; }
    else if (quote) { if (c === quote) quote = ''; else value += c; }
    else if (c === '"' || c === "'") { quote = c; started = true; }
    else if (/\s/.test(c)) { if (started) { args.push(value); value = ''; started = false; } }
    else { value += c; started = true; }
  }
  if (started) args.push(value);
  return args;
}

export function expandResponseArgs(args, depth = 0) {
  if (depth > 32) throw new Error('Compiler response files are nested too deeply');
  return args.flatMap(arg => {
    if (!arg.startsWith('@')) return [arg];
    let contents;
    try { contents = readFileSync(arg.slice(1), 'utf8'); }
    catch (error) { if (error.code === 'ENOENT') return [arg]; throw error; }
    return expandResponseArgs(tokenizeResponse(contents), depth + 1);
  });
}
