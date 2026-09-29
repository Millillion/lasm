import { readFile } from 'node:fs/promises';
import { buildApplicationWithProgress } from '../../src/application-build-client.mjs';
const configuration = JSON.parse(await readFile(process.argv[2], 'utf8'));
try {
  await buildApplicationWithProgress('TLS fixture', configuration, {
    workerUrl: new URL('./download-network-worker.mjs', import.meta.url), intervalMs: 100,
  });
} catch (error) { console.error(error.message); process.exitCode = 1; }
