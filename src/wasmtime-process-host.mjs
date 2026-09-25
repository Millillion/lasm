import assert from 'node:assert/strict';
import { createNodeRuntimeHost } from './node-host.mjs';
import { nativeFiles } from './native-files.mjs';
import { writeNativeWasiStdio } from './wasmtime-native-stdio.mjs';

// Keep ordinary process operations on the supervisor's main JavaScript thread.
// Node workers cannot call process.chdir, and Deno's exceptional-cwd workers
// use a private filesystem context. Wasm stacks remain on separate workers.
export function createWasmtimeProcessHost({ programName, leanVersion, args }) {
  const host = createNodeRuntimeHost({ leanVersion, args, appPath: programName,
    propagateCwd: true, applicationCommand: { executable: process.execPath,
      arguments: process.versions.deno ? ['run', '--no-config', '-A'] : [] } });
  const completions = [];
  let completionWaiter, failed;
  const pending = new Set();
  async function request(request, sender) {
    if (failed) throw failed;
    if (request.kind === 'wasi-stdio') {
      const bytes = new Uint8Array(request.byteBuffer, request.byteOffset, request.byteLength);
      return writeNativeWasiStdio(request.fd, bytes);
    }
    if (request.kind === 'emscripten-output') {
      assert.ok(request.fd === 1 || request.fd === 2);
      assert.equal(typeof request.text, 'string');
      const result = await host.request(3, request.fd, 0n, Buffer.from(request.text + '\n'));
      if (result.error) throw new Error('Console write failed');
      return {};
    }
    assert.equal(request.kind, 'host');
    const { operation, handle, argument, mode } = request;
    const bytes = new Uint8Array(request.byteBuffer, request.byteOffset, request.byteLength);
    const args = [operation, handle, argument, bytes,
      { fiber: Number(sender), nativeThreadId: request.nativeThreadId }];
    let result;
    if (mode === 'start') return { id: host.start(...args) };
    if (mode === 'release') { await host.releaseAsync(handle); return {}; }
    assert.equal(mode, 'request');
    if (operation === 91) {
      host.whenReady(handle).then(() => {
        const entry = { error: false, bytes };
        if (completionWaiter) {
          const { resolve } = completionWaiter; completionWaiter = undefined; resolve(entry);
        } else completions.push(entry);
      }).catch(error => {
        failed = error;
        completionWaiter?.reject(error); completionWaiter = undefined;
      });
      result = { error: false, bytes: new Uint8Array(0) };
    } else if (operation === 92) result = completions.length ? completions.shift()
      : await new Promise((resolve, reject) => { assert.ok(!completionWaiter); completionWaiter = { resolve, reject }; });
    else result = await host.request(...args);
    return { error: result.error, byteBuffer: result.bytes.buffer,
      byteOffset: result.bytes.byteOffset, byteLength: result.bytes.byteLength };
  }
  return {
    request,
    notify(request) {
      const operation = this.request(request, 0n);
      pending.add(operation);
      operation.catch(error => { failed = error; }).finally(() => pending.delete(operation));
    },
    async finish(force = false) {
      if (!force) {
        await Promise.all([...pending]);
        if (failed) throw failed;
        // Preserve live FILE buffers at normal CRT exit; forced exit discards
        // them. Flush failures do not replace the application's exit status.
        await nativeFiles().flushAll();
      }
      // This application owns its process. The caller terminates it after the
      // flush; do not synchronously close descriptors used by other workers.
    },
    close() { host.close(); },
  };
}
