import { createRequire } from 'node:module';
import { pathToFileURL } from 'node:url';
import { constants } from 'node:fs';

const ffi = createRequire(import.meta.url)('koffi');
const libc = ffi.load(process.platform === 'darwin' ? '/usr/lib/libSystem.B.dylib' : null);
const fcntl = libc.func('int fcntl(int fd, int command, int flags)');
const write = libc.func('intptr_t write(int fd, const void *bytes, size_t count)');
const clearerr = libc.func('void clearerr(void *stream)');
const ferror = libc.func('int ferror(void *stream)');
const { nativeFiles } = await import(pathToFileURL(process.argv[2]));
const files = nativeFiles();
const [reader, writer] = files.pipe();
const file = files.openDescriptor(reader, 'r');
let writerClosed = false;
if (fcntl(reader, 4 /* F_SETFL */, constants.O_NONBLOCK)) throw new Error('fcntl failed');
function put(text) {
  const bytes = Buffer.from(text);
  if (write(writer, bytes, bytes.length) !== bytes.length) throw new Error('write failed');
}
async function line(stream = file) {
  try { return { value: (await files.getLine(stream)).toString() }; }
  catch (error) { return { error: true, errno: error.errno }; }
}
try {
  put('part');
  const partial = await line();
  put('next\n');
  const sticky = await line();
  clearerr(file.stream);
  put('done\n');
  const cleared = await line();
  const [eofReader, eofWriter] = files.pipe();
  const eofFile = files.openDescriptor(eofReader, 'r');
  let eofBytes = null, eofReadError = false, eofErrorCleared;
  try {
    if (fcntl(eofReader, 4, constants.O_NONBLOCK)) throw new Error('fcntl failed');
    await line(eofFile); // Set a sticky read error independently of earlier results.
    files.closeDescriptor(eofWriter);
    try { eofBytes = (await files.read(eofFile, 1)).length; }
    catch { eofReadError = true; }
    eofErrorCleared = !ferror(eofFile.stream);
  } finally { await files.closeAsync(eofFile); }
  console.log(JSON.stringify({ partialError: !!partial.error, partialErrno: partial.errno ?? null,
    stickyError: !!sticky.error, clearedLine: cleared.value,
    eofReadError, eofBytes, eofErrorCleared }));
} finally {
  await files.closeAsync(file);
  if (!writerClosed) files.closeDescriptor(writer);
}
