// create-lasm: `npm create @lasm@latest my-app -- --template hono` runs
// `lasm init my-app --template hono` with the @lasm/cli this package pins exactly.
// No dependencies besides @lasm/cli; arguments are passed through unchanged.
import { spawn } from 'node:child_process';
import { readFileSync } from 'node:fs';
import { createRequire } from 'node:module';
import { dirname, join } from 'node:path';
import { createInterface } from 'node:readline/promises';

export const usage = 'Usage: npm create @lasm@latest <directory> -- [--template NAME] [--deploy TARGET]…\nnpx @lasm/cli init --help lists the templates and deploy targets.';

/** Whether `lasm init` gets a directory (or --help) from these arguments, as lasm init parses them. */
export function hasDirectory(args) {
  for (let i = 0; i < args.length; i++) {
    const token = args[i];
    if (token === '--help' || token === '-h') return true;
    if (token === '--template' || token === '-t' || token === '--deploy') { i++; continue; }
    if (!token.startsWith('-')) return true;
  }
  return false;
}

export const hasTemplate = args => args.some(token => /^(?:--template|-t)(?:=|$)/.test(token));

/** The @lasm/cli installed with this package: its directory and `lasm` bin script. */
export function locateCli(from = import.meta.url) {
  const manifest = createRequire(from).resolve('@lasm/cli/package.json');
  const pkg = JSON.parse(readFileSync(manifest, 'utf8'));
  const bin = typeof pkg.bin === 'string' ? pkg.bin : pkg.bin?.lasm;
  if (!bin) throw new Error(`${pkg.name}@${pkg.version} has no lasm bin`);
  return { directory: dirname(manifest), bin: join(dirname(manifest), bin), version: pkg.version };
}

/** The templates of the @lasm/cli this package pins (released together; test/create-lasm.test.mjs
 * checks the list against src/init.mjs), so nothing reads the CLI's files. */
export const templateNames = ['plain', 'express', 'hono', 'fastify', 'std-http', 'web', 'fetch', 'fullstack'];

/** Ask for the directory (and the template unless one was given) on an interactive terminal. */
export async function prompt(args, { input = process.stdin, output = process.stdout } = {}) {
  const names = templateNames;
  const rl = createInterface({ input, output });
  try {
    let directory = '';
    while (!directory) directory = (await rl.question('Project directory: ')).trim();
    const extra = [directory];
    if (!hasTemplate(args)) {
      let template;
      while (!template) {
        const answer = (await rl.question(`Template (${names.join(', ')}) [plain]: `)).trim() || 'plain';
        if (names.includes(answer)) template = answer; else output.write(`Choose one of: ${names.join(', ')}\n`);
      }
      extra.push('--template', template);
    }
    return [...extra, ...args];
  } finally { rl.close(); }
}

export async function main(args = process.argv.slice(2), { stdin = process.stdin, stderr = process.stderr, cli = locateCli(), run = runCli } = {}) {
  if (!hasDirectory(args)) {
    if (!stdin.isTTY) { stderr.write(usage + '\n'); return 1; }
    args = await prompt(args, { input: stdin });
  }
  return run(cli, ['init', ...args]);
}

/** Run `lasm init …` with this runtime (Node, Bun, or Deno with `run -A`:
 * `deno run -A npm:create-lasm`), forwarding the exit status (or signal). */
export function runCli(cli, args) {
  return new Promise((resolve, reject) => {
    const prefix = typeof globalThis.Deno?.version?.deno === 'string' ? ['run', '--allow-all', '--no-lock'] : [];
    const child = spawn(process.execPath, [...prefix, cli.bin, ...args], { stdio: 'inherit', windowsHide: false });
    const forward = signal => child.kill(signal);
    for (const signal of ['SIGINT', 'SIGTERM']) process.on(signal, forward);
    child.once('error', reject);
    child.once('exit', (code, signal) => {
      for (const name of ['SIGINT', 'SIGTERM']) process.off(name, forward);
      resolve(signal ? 128 + ({ SIGINT: 2, SIGTERM: 15 }[signal] ?? 1) : code ?? 1);
    });
  });
}
