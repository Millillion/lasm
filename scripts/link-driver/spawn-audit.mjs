// Maintainer audit (Phase 2 milestone C): record every child process a Node
// program starts, with the Lasm source frames that started it. Preload it:
//   LASM_SPAWN_AUDIT=FILE node --import ./scripts/link-driver/spawn-audit.mjs SCRIPT ...
// Each line of FILE is JSON: { program, args (first 4), frames, phase }.
// `globalThis.lasmSpawnPhase` (set by the caller, for example around a link)
// labels the entries; with LASM_SPAWN_AUDIT_FORBID=REGEX a matching program
// throws instead of starting.
import childProcess from 'node:child_process';
import { appendFileSync } from 'node:fs';
import { syncBuiltinESMExports } from 'node:module';

const file = process.env.LASM_SPAWN_AUDIT;
if (!file) throw new Error('Set LASM_SPAWN_AUDIT to the audit log file');
const forbid = process.env.LASM_SPAWN_AUDIT_FORBID ? new RegExp(process.env.LASM_SPAWN_AUDIT_FORBID) : null;

function record(kind, program, args) {
  const frames = (new Error().stack ?? '').split('\n').slice(2)
    .filter(line => /\/(?:src|scripts)\//.test(line) && !line.includes('spawn-audit.mjs')).slice(0, 4).map(line => line.trim());
  const entry = { kind, program: String(program), args: Array.isArray(args) ? args.slice(0, 4).map(String) : [],
    phase: globalThis.lasmSpawnPhase ?? null, frames };
  appendFileSync(file, JSON.stringify(entry) + '\n');
  if (forbid?.test(entry.program)) throw new Error(`Spawn audit: forbidden program ${entry.program}`);
}

for (const name of ['spawn', 'spawnSync', 'execFile', 'execFileSync', 'exec', 'execSync', 'fork']) {
  const original = childProcess[name];
  childProcess[name] = function audited(command, args, ...rest) {
    record(name, name === 'fork' ? process.execPath : command, name.startsWith('exec') && !name.startsWith('execFile') ? [] : args);
    return original.call(this, command, args, ...rest);
  };
}
syncBuiltinESMExports();
