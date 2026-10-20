// Probe (Windows): can Node spawn use a ucrtbase _pipe descriptor as child stdio?
// Compares the raw descriptor with the same OS handle reopened through node.exe's
// exported uv_open_osfhandle (Node's own CRT).   node probe-windows-pipe.mjs NEW_OUTPUT [UNUSED]
import { mkdirSync, writeFileSync, closeSync, readSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { spawn } from 'node:child_process';
import { createRequire } from 'node:module';
import { nativeFiles } from '../../src/native-files.mjs';

const require = createRequire(import.meta.url);
const output = resolve(process.argv[2]);
mkdirSync(output, { recursive: true });
const result = { platform: process.platform, node: process.version, cases: [] };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(result, null, 1) + '\n');
const ffi = require('koffi');
const ucrt = ffi.load('ucrtbase.dll');
const getHandle = ucrt.func('intptr_t _get_osfhandle(int)');
const kernel = ffi.load('kernel32.dll');
const currentProcess = kernel.func('intptr_t __stdcall GetCurrentProcess()');
const duplicate = kernel.func('int __stdcall DuplicateHandle(intptr_t, intptr_t, intptr_t, _Out_ intptr_t *, uint32_t, int, uint32_t)');
let openHandle;
try { openHandle = ffi.load(process.execPath).func('int uv_open_osfhandle(intptr_t)'); result.uvOpen = true; }
catch (error) { result.uvOpen = String(error); }
const native = nativeFiles();
async function attempt(label, convert) {
  const fds = native.pipe(); // [read, write]
  const childFd = fds[1];
  let stdioFd = childFd;
  try {
    if (convert) {
      const out = [0];
      if (!duplicate(currentProcess(), getHandle(childFd), currentProcess(), out, 0, 0, 2 /* DUPLICATE_SAME_ACCESS */)) throw new Error('DuplicateHandle failed');
      stdioFd = openHandle(out[0]);
    }
    const child = spawn(process.execPath, ['-e', 'console.log("hello from child")'], { stdio: ['ignore', stdioFd, 'inherit'] });
    await new Promise((ok, fail) => { child.once('spawn', ok); child.once('error', fail); });
    if (convert) closeSync(stdioFd);
    native.closeDescriptor(childFd);
    const code = await new Promise(ok => child.once('exit', ok));
    const file = native.openDescriptor(fds[0], 'r');
    const text = (await native.getLine(file)).toString();
    result.cases.push({ label, ok: true, code, text });
  } catch (error) {
    result.cases.push({ label, ok: false, error: String(error), code: error.code, errno: error.errno });
  }
  save();
}
await attempt('raw ucrtbase descriptor', false);
if (openHandle) await attempt('handle reopened in Node CRT', true);
console.log(JSON.stringify(result, null, 1));
