// Run a prototype deployment with the prototype host (throwaway launcher).
//   node run.mjs DIST [PROGRAM_ARGS...]
// Like DIST/main.mjs, but the host module is host/jsproto-host.mjs and the
// shared Wasm memory is captured for the synchronous-callback slot. DIST may be
// configuration A (dist/program.cjs) or B (JSPI relink: dist/program-jspi.cjs,
// selected with JSPROTO_PROGRAM=program-jspi.cjs).
import { createRequire } from 'node:module';
import { copyFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath, pathToFileURL } from 'node:url';

const [distArg, ...args] = process.argv.slice(2);
const dist = resolve(distArg);
copyFileSync(fileURLToPath(new URL('./host/jsproto-host.mjs', import.meta.url)), join(dist, 'host/jsproto-host.mjs'));
if (process.env.JSPROTO_V8_FLAGS) for (const flag of process.env.JSPROTO_V8_FLAGS.split(' ')) (await import('node:v8')).setFlagsFromString(flag);
const Original = WebAssembly.Memory;
WebAssembly.Memory = new Proxy(Original, { construct(target, parameters) {
  const memory = Reflect.construct(target, parameters);
  if (parameters[0]?.shared) globalThis.__jsprotoMemory ??= memory;
  return memory;
} });
(await import(pathToFileURL(join(dist, 'host/application-signals.mjs')).href)).prepareApplicationSignals();
process.env.LASM_FULL_HOST_MODULE = pathToFileURL(join(dist, 'host/jsproto-host.mjs')).href;
process.env.LASM_FULL_APP_PATH = join(dist, 'main.mjs');
process.argv = [process.argv[0], join(dist, 'main.mjs'), ...args];
if (process.env.JSPROTO_TRACE) process.on('worker', worker => { process.stderr.write(`[worker] created ${worker.threadId}\n`); worker.on('exit', code => process.stderr.write(`[worker] ${worker.threadId} exit ${code}\n`)); worker.on('error', error => process.stderr.write(`[worker] ${worker.threadId} error ${error?.stack}\n`)); worker.on('message', m => { if (m && typeof m === 'object' && m.cmd && !['callHandler', 9].includes(m.cmd)) process.stderr.write(`[worker] ${worker.threadId} message ${JSON.stringify(m).slice(0, 600)} ${m.error?.stack ?? m.error ?? ""}\n`); }); });
if (process.env.JSPROTO_REPORT) Object.assign(process.report, { reportOnSignal: true, signal: 'SIGUSR2', directory: process.env.JSPROTO_REPORT });
if (process.env.JSPROTO_WATCHDOG_MS) setTimeout(() => {
  console.error('[watchdog]', JSON.stringify({ jspi: globalThis.__jsprotoJspiStats?.(), host: globalThis.__jsprotoHost?.stats,
    handles: process.getActiveResourcesInfo() }));
  process.exit(124);
}, Number(process.env.JSPROTO_WATCHDOG_MS)).unref();
createRequire(join(dist, 'main.mjs'))('./' + (process.env.JSPROTO_PROGRAM ?? 'program.cjs'));
