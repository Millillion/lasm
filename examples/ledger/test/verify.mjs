// The journal auditor on WASI: `ledger verify journal.ndjson` (wasi/main.wasm,
// npm run build:wasi) on each engine named, against a journal exported from a
// live server after a seeded bank workload, and against tampered copies of it,
// which it must reject.
//
//   node test/verify.mjs --engine node|wasmtime|wasmer [--engine …] [--seed N]
//
// The server is the Node build (npm run build first); wasmtime and wasmer must
// be on PATH for their engines.
import { spawnSync } from 'node:child_process';
import { mkdtempSync, readFileSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { root, seedFrom, startLedger } from './server.mjs';

const args = process.argv.slice(2);
const engines = args.flatMap((a, i) => a === '--engine' ? [args[i + 1]] : []);
if (!engines.length) engines.push('node');
const seed = seedFrom(args);
console.log(`seed ${seed}`);

// A journal from a real run.
const server = await startLedger();
let journal;
try {
  const bank = spawnSync(process.execPath, [join(root, 'test/bank.mjs'), '--url', server.base, '--seconds', '8', '--seed', String(seed)],
    { stdio: 'inherit' });
  if (bank.status !== 0) throw new Error('the bank workload failed');
  journal = await fetch(server.base + '/api/journal').then(r => r.text());
} finally {
  await server.stop();
}
const dir = mkdtempSync(join(tmpdir(), 'ledger-verify-'));
const lines = journal.trim().split('\n');
const write = (name, ls) => { writeFileSync(join(dir, name), ls.join('\n') + '\n'); return name; };
const cases = [{ file: write('journal.ndjson', lines), status: 0, what: 'the exported journal' }];
// Tampered copies: a balance changed, a transfer dropped, a transfer's amount changed.
const at = (pred) => lines.findIndex(l => pred(JSON.parse(l)));
const edit = (i, f) => lines.map((l, j) => j === i ? JSON.stringify(f(JSON.parse(l))) : l);
const acc = at(l => l.type === 'account' && l.data.credits_posted !== '0');
cases.push({ file: write('balance.ndjson', edit(acc, l => ({ ...l, data: { ...l.data, credits_posted: String(BigInt(l.data.credits_posted) + 1n) } }))),
  status: 1, what: 'a balance changed' });
const tr = at(l => l.type === 'transfer' && !l.data.flags.pending && !l.data.flags.post_pending_transfer && !l.data.flags.void_pending_transfer);
cases.push({ file: write('dropped.ndjson', lines.filter((_, j) => j !== tr)), status: 1, what: 'a transfer dropped' });
cases.push({ file: write('amount.ndjson', edit(tr, l => ({ ...l, data: { ...l.data, amount: String(BigInt(l.data.amount) + 5n) } }))),
  status: 1, what: 'a transfer\'s amount changed' });
cases.push({ file: write('garbage.ndjson', ['{"type": "account"']), status: 2, what: 'unreadable input' });

const wasm = join(root, 'wasi/main.wasm');
const run = (engine, file) => {
  const cmd = {
    wasmtime: ['wasmtime', ['run', '--dir', `${dir}::/j`, wasm, 'verify', `/j/${file}`]],
    wasmer: ['wasmer', ['run', '--enable-tail-call', `--volume=${dir}:/j`, wasm, '--', 'verify', `/j/${file}`]],
    node: [process.execPath, ['--no-warnings', '--input-type=module', '-e', `
      import { WASI } from 'node:wasi'; import { readFile } from 'node:fs/promises';
      const wasi = new WASI({ version: 'preview1', args: ['ledger', 'verify', '/j/${file}'], env: {},
        preopens: { '/j': ${JSON.stringify(dir)} }, returnOnExit: true });
      const m = await WebAssembly.compile(await readFile(${JSON.stringify(wasm)}));
      process.exitCode = wasi.start(await WebAssembly.instantiate(m, wasi.getImportObject()));`]],
  }[engine];
  return spawnSync(cmd[0], cmd[1], { encoding: 'utf8' });
};
let failed = 0;
for (const engine of engines) {
  for (const c of cases) {
    const r = run(engine, c.file);
    const ok = r.status === c.status;
    if (!ok) failed++;
    console.log(`${ok ? 'ok  ' : 'FAIL'} ${engine}: ${c.what}: exit ${r.status} (expected ${c.status}) ${(r.stdout + r.stderr).trim().split('\n').slice(-1)[0] ?? ''}`);
  }
}
console.log(`${lines.length} journal lines; ${engines.length * cases.length - failed}/${engines.length * cases.length} checks passed`);
if (failed) process.exitCode = 1;
