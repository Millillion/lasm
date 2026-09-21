const { parentPort, workerData, MessageChannel } = require('node:worker_threads');
if (workerData !== 'em-pthread') throw new Error('workerData changed');
parentPort.once('message', data => {
  if (data === 'error') throw new RangeError('intentional worker error');
  if (data === 'drop') { parentPort.postMessage('ready'); setTimeout(() => {}, 30_000); return; }
  if (process.cwd() !== '/') throw new Error('factory child lost its private directory');
  Atomics.add(new Int32Array(data.memory), 0, 2);
  parentPort.postMessage({ cmd: 8, error: new RangeError('nested pthread exception') });
  data.port.postMessage('parent port arrived'); data.port.close();
  const { port1, port2 } = new MessageChannel();
  port1.once('message', value => { parentPort.postMessage(value); port1.close(); });
  parentPort.postMessage({ nested: { port: port2 } }, [port2]);
});
