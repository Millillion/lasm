// Stand-in `lean` and `lake` executables for tests of src/application-sources.mjs
// (no managed Lean). They answer from a JSON "world" file that the test edits
// and log every run (arguments, working directory, Lean's environment):
//   lean --src-deps FILE        world.deps[FILE] (paths, printed as given), or
//                               world.unknown[FILE] ('unknown module prefix'), or
//                               world.fail[FILE] (another failure)
//   lean … -o OLEAN -c C FILE   writes OLEAN, C (world.c[FILE] or "int main(…)")
//                               and an .ir file
//   lean … --run lake-module.lean [--native|--link] SOURCE
//                               Lasm's Lake adapter: world.adapter, world.native, world.link
//   lake … query T:transImports world.trans[T]; T:c, T:lean, T:olean: build/T.c, T.lean, T.olean
//   lake … lean SOURCE -- … -o OLEAN -c C   writes both
import { chmodSync, existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';

const program = (world, log) => `#!${process.execPath}
const { appendFileSync, readFileSync, writeFileSync, mkdirSync } = require('node:fs');
const { basename, dirname } = require('node:path');
const tool = basename(process.argv[1]), args = process.argv.slice(2);
const world = JSON.parse(readFileSync(${JSON.stringify(world)}, 'utf8'));
const env = Object.fromEntries(Object.entries(process.env).filter(([key]) => /^(?:LEAN|LAKE|ELAN|C_INCLUDE|SDKROOT)/.test(key)));
appendFileSync(${JSON.stringify(log)}, JSON.stringify({ tool, args, cwd: process.cwd(), env }) + '\\n');
const write = (file, text) => { mkdirSync(dirname(file), { recursive: true }); writeFileSync(file, text); };
const fail = (text, code = 1) => { process.stderr.write(text); process.exit(code); };
if (world.notice) process.stderr.write(world.notice);
if (tool === 'lean') {
  if (args[0] === '--src-deps') {
    const file = args[1];
    if (world.unknown?.[file]) fail("unknown module prefix '" + world.unknown[file] + "'\\n");
    if (world.fail?.[file]) fail(world.fail[file]);
    process.stdout.write((world.deps?.[file] ?? []).map(line => line + '\\n').join(''));
  } else if (args.includes('--run')) {
    const rest = args.slice(args.indexOf('--run') + 2);
    if (world.adapterFails) fail(world.adapterFails, 2);
    const answer = rest[0] === '--native' ? world.native : rest[0] === '--link' ? world.link : world.adapter;
    process.stdout.write('adapter progress\\n' + (typeof answer === 'string' ? answer : JSON.stringify(answer)) + '\\n\\n');
  } else {
    const file = args.at(-1);
    if (world.compileFails?.[file]) fail(world.compileFails[file]);
    const olean = args[args.indexOf('-o') + 1], c = args[args.indexOf('-c') + 1];
    write(olean, 'olean of ' + file); write(c, world.c?.[file] ?? 'int main(int argc, char ** argv) {}\\n');
    write(olean.replace(/\\.olean$/, '.ir'), 'ir');
  }
} else {
  if (args.includes('query')) {
    const targets = args.slice(args.indexOf('query') + 1);
    if (world.queryFails) fail(world.queryFails);
    const lines = targets.flatMap(target => {
      const [name, facet] = target.split(':');
      if (facet === 'transImports') return [world.trans?.[name] ?? []];
      if (world.missingC?.includes(name) && facet === 'c') return [null];
      if (world.short && facet === 'lean') return [];
      return ['build/' + name.replace(/^\\+/, '').replaceAll('.', '/') + '.' + facet];
    });
    process.stdout.write(lines.map(line => JSON.stringify(line) + '\\n').join(''));
  } else {
    const olean = args[args.indexOf('-o') + 1], c = args[args.indexOf('-c') + 1];
    write(olean, 'script olean'); write(c, world.scriptC ?? 'int main(int argc, char ** argv) {}\\n');
  }
}
`;

/** Writes bin/lean and bin/lake under `prefix` (with src/lean/Init.lean) and returns
 * the Lean description Lasm's functions take, the world editor and the run log. */
export function leanStandIn(prefix, world = {}) {
  const worldFile = join(prefix, 'world.json'), logFile = join(prefix, 'runs.jsonl');
  mkdirSync(join(prefix, 'bin'), { recursive: true });
  mkdirSync(join(prefix, 'src', 'lean', 'lake', 'Lake'), { recursive: true });
  for (const file of ['Init.lean', 'Std.lean', 'Lean.lean', 'lake/Lake.lean']) writeFileSync(join(prefix, 'src', 'lean', file), '');
  for (const tool of ['lean', 'lake']) { writeFileSync(join(prefix, 'bin', tool), program(worldFile, logFile)); chmodSync(join(prefix, 'bin', tool), 0o755); }
  const set = value => writeFileSync(worldFile, JSON.stringify(value));
  set(world);
  const runs = () => existsSync(logFile) ? readFileSync(logFile, 'utf8').trim().split('\n').filter(Boolean).map(line => JSON.parse(line)) : [];
  const clear = () => writeFileSync(logFile, '');
  return { lean: { lean: join(prefix, 'bin', 'lean'), lake: join(prefix, 'bin', 'lake'), prefix, commit: 'c0ffee', identity: 'stand-in-lean', version: '4.35.0' },
    world: set, runs, clear };
}
