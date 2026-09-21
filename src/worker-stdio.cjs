// Node's default Worker stdio forwarding opens process.stdout/process.stderr
// as libuv streams, which can change shared pipe descriptors to O_NONBLOCK.
// Descriptor-backed file writes preserve the flags while forwarding diagnostics.
const { createWriteStream } = require('node:fs');

module.exports = function forwardWorkerStdio(worker) {
  for (const [name, fd] of [['stdout', 1], ['stderr', 2]]) {
    const stream = worker[name];
    // Match Node's ordinary forwarding lifetime: reading worker diagnostics
    // must not independently keep an explicitly unreferenced worker alive.
    // This private Node adapter checks the layout before changing the flag.
    const refFlag = Object.getOwnPropertySymbols(stream).find(key => key.description === 'kIncrementsPortRef');
    const started = Object.getOwnPropertySymbols(stream).find(key => key.description === 'kStartedReading');
    if (!refFlag || !started || stream[refFlag] !== true || stream[started] !== false) {
      void worker.terminate();
      throw new Error('Unsupported Node Worker diagnostic-stream lifetime controls');
    }
    stream[refFlag] = false;
    const sink = createWriteStream(null, { fd, autoClose: false });
    sink.on('error', error => worker.emit('error', error));
    // Readable.pipe's default end handling itself compares against
    // process.stdout/process.stderr. Disable that branch and end explicitly.
    stream.pipe(sink, { end: false });
    stream.on('end', () => sink.end());
  }
};
