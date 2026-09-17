import { createServer } from 'node:http';
import { fileURLToPath } from 'node:url';
import { createApp } from './app.mjs';

const port = Number(process.env.PORT ?? 3000);
if (!Number.isInteger(port) || port < 0 || port > 65535) throw new Error('PORT must be an integer from 0 through 65535');
const service = await createApp({
  directory: process.env.DATA_DIR ?? fileURLToPath(new URL('../../.work/express-data', import.meta.url)),
  upstream: process.env.TEMPLATE_SERVICE_URL,
});
const server = createServer(service.app);
try {
  await new Promise((resolve, reject) => {
    server.once('error', reject);
    server.listen(port, process.env.HOST ?? '127.0.0.1', resolve);
  });
} catch (error) { await service.close(); throw error; }
console.log(`Lean task board listening at http://${process.env.HOST ?? '127.0.0.1'}:${server.address().port}`);
let stopping = false;
async function shutdown() {
  if (stopping) return;
  stopping = true;
  const stopped = new Promise((resolve, reject) => server.close(error => error ? reject(error) : resolve()));
  await service.close();
  await stopped;
}
for (const signal of ['SIGINT', 'SIGTERM']) process.once(signal, () => {
  shutdown().catch(error => { console.error(error); process.exitCode = 1; });
});
