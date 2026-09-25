import { Worker, isMainThread } from 'node:worker_threads';
import { createRequire } from 'node:module';
import { writeSync, existsSync } from 'node:fs';
import { dirname, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { readWasmtimeArtifact } from './wasmtime-artifact.mjs';
import { prepareBunStack } from './bun-stack.mjs';
import { prepareApplicationSignals } from './application-signals.mjs';
import { prepareApplicationMetadata } from './application-metadata-runtime.mjs';
import forwardWorkerStdio from './worker-stdio.cjs';
import { createWasmtimeProcessHost } from './wasmtime-process-host.mjs';
import { LeanExit } from './node-host.mjs';
import cwdFactory from './native-pthread-factory.cjs';

// Standalone entry only. This function owns process termination; it is not an
// embedding API and does not claim reusable Store cancellation or disposal.
export async function runWasmtimeApplication(entrypoint, args = process.argv.slice(2)) {
  if (!isMainThread || process.platform !== 'linux' || process.arch !== 'x64')
    throw new Error('The standalone Wasmtime backend currently requires Linux x64');
  prepareBunStack(entrypoint, { minimumStackMiB: 96 });
  prepareApplicationSignals();
  prepareApplicationMetadata(entrypoint);
  const directory = dirname(fileURLToPath(entrypoint));
  const manifest = await readWasmtimeArtifact(directory);
  const require = createRequire(import.meta.url);
  const bundled = new URL('./native/node_modules/koffi/index.cjs', import.meta.url);
  const ffi = require(existsSync(bundled) ? fileURLToPath(bundled) : 'koffi');
  const exit = ffi.load(null).func('void _Exit(int code)');
  const options = { helper: join(directory, 'host/instance.so'), cache: join(directory, 'program.cwasm'),
    cacheSha256: manifest.files['program.cwasm'].sha256, nativeApi: join(directory, 'host/native-api.node'),
    programName: fileURLToPath(entrypoint), leanVersion: manifest.leanVersion, args };
  const host = createWasmtimeProcessHost(options);
  let completed = false;
  const fail = error => {
    try { writeSync(2, String(error.stack ?? error) + '\n'); }
    finally { exit(1); }
  };
  const nodeStdio = !process.versions.deno && !process.versions.bun;
  let RuntimeWorker = Worker;
  if (process.versions.deno) {
    try { Deno.cwd(); }
    catch (error) {
      if (error.name !== 'NotFound' && error.name !== 'InvalidData' && error.code !== 'ENOENT') throw error;
      RuntimeWorker = cwdFactory.createCwdWorkerFactory();
    }
  }
  const worker = new RuntimeWorker(new URL('./wasmtime-worker.mjs', import.meta.url), {
    ...(nodeStdio ? { stdout: true, stderr: true } : {}),
    // V8 command-line heap flags cannot be replayed as explicit Worker flags;
    // the internal heap and stack reservations remain in resourceLimits below.
    ...(nodeStdio ? { execArgv: ['--require', fileURLToPath(new URL('./native-worker-cwd.cjs', import.meta.url))] } : {}),
    workerData: { runtimeRoot: true, options }, resourceLimits: { stackSizeMb: 96, maxOldGenerationSizeMb: 128 },
  });
  worker.on('message', value => {
    if (value.kind === 'application-exit' && Number.isInteger(value.code)) {
      if (completed) return;
      completed = true;
      // Lean main may return any UInt32. Match C's int conversion before the
      // operating system retains its exit-status bits, including 0xffffffff.
      host.finish(value.force).then(() => exit(value.code | 0)).catch(fail);
    } else if (value.kind === 'host-request') {
      host.request(value.request, value.sender).then(result => value.port.postMessage({ result }), error =>
        value.port.postMessage(error instanceof LeanExit ? { exit: { code: error.code, force: error.force } }
          : { failure: error.stack ?? String(error) })).finally(() => value.port.close()).catch(fail);
    } else if (value.kind === 'host-notification') {
      host.notify(value.request);
    } else if (value.kind === 'diagnostic-failure') fail(new Error(value.result.failure));
    else fail(new Error('Unexpected Wasmtime supervisor message'));
  });
  worker.on('error', fail);
  if (nodeStdio) forwardWorkerStdio(worker);
  worker.on('exit', code => { if (!completed) fail(new Error(`Wasmtime runtime exited before application completion: ${code}`)); });
}
