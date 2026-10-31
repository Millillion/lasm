// Serves the Netlify Function that `netlify build --offline` bundled
// (.netlify/functions/lasm.zip, the zip Netlify deploys) the way Netlify runs
// it: in AWS Lambda's Node 24 image (Netlify Functions run on AWS Lambda) with
// Netlify's own bootstrap from the zip (___netlify-entry-point.handler, a
// response-streaming handler), through the image's Runtime Interface
// Emulator, read-only with /tmp writable. 127.0.0.1:PORT turns each HTTP
// request into the invocation Netlify's front end sends and the streamed
// reply back into HTTP, one invocation at a time (one instance).
// Not `netlify dev`: its proxy re-requests every 403 and 404 response as
// /path.html, /path.htm, /path/index.html, /path/index.htm (netlify-cli
// 27.14.2, dist/utils/proxy.js), so API errors come back as the last of
// those (docs/DECISIONS.md).
//   node test/netlify-serve.mjs PORT
import { execFileSync, spawnSync } from 'node:child_process';
import { chmodSync, existsSync, mkdtempSync, rmSync } from 'node:fs';
import http from 'node:http';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('..', import.meta.url));
const port = Number(process.argv[2]);
const zip = join(root, '.netlify/functions/lasm.zip');
if (!existsSync(zip)) throw new Error(`${zip} is missing: run netlify build --offline first`);
const task = mkdtempSync(join(tmpdir(), 'conduit-netlify-task-'));
execFileSync('unzip', ['-q', zip, '-d', task]);
chmodSync(task, 0o755);
const name = `conduit-netlify-${port}`;
const docker = args => spawnSync('docker', args, { encoding: 'utf8' });
docker(['rm', '-f', name]);
const started = docker(['run', '-d', '--name', name, '--read-only', '--tmpfs', '/tmp', '--memory=1g', '--memory-swap=1g',
  '-p', '127.0.0.1::8080', '-e', 'AWS_LAMBDA_FUNCTION_MEMORY_SIZE=1024', '-e', 'DATABASE_PATH=/tmp/conduit.db',
  ...(process.env.JWT_SECRET ? ['-e', 'JWT_SECRET'] : []),
  '-v', `${task}:/var/task:ro`, 'public.ecr.aws/lambda/nodejs:24', '___netlify-entry-point.handler']);
if (started.status !== 0) throw new Error(`docker run: ${started.stderr}`);
const emulator = docker(['port', name, '8080/tcp']).stdout.trim().split('\n')[0].split(':').pop();
const stop = () => { docker(['rm', '-f', name]); rmSync(task, { recursive: true, force: true }); };

const hopByHop = new Set(['connection', 'keep-alive', 'transfer-encoding', 'te', 'trailer', 'upgrade', 'host', 'content-length']);
let queue = Promise.resolve();
async function invoke(req, body) {
  const headers = {};
  for (const [key, value] of Object.entries(req.headers)) if (!hopByHop.has(key)) headers[key] = Array.isArray(value) ? value.join(', ') : value;
  headers.host = `127.0.0.1:${port}`;
  const event = { httpMethod: req.method, rawUrl: `http://127.0.0.1:${port}${req.url}`, route: '/*', headers,
    body: body.toString('base64'), isBase64Encoded: true };
  const response = await fetch(`http://127.0.0.1:${emulator}/2015-03-31/functions/function/invocations`, { method: 'POST', body: JSON.stringify(event) });
  const bytes = Buffer.from(await response.arrayBuffer());
  // A streamed reply: the JSON metadata, eight NUL bytes, then the body.
  const split = bytes.indexOf(Buffer.alloc(8));
  if (split < 0) throw new Error('not a streamed reply: ' + bytes.toString().slice(0, 1000));
  return { meta: JSON.parse(bytes.subarray(0, split).toString()), body: bytes.subarray(split + 8) };
}
const server = http.createServer((req, res) => {
  const chunks = [];
  req.on('data', chunk => chunks.push(chunk));
  req.on('end', () => {
    // The emulator runs one invocation at a time, as one Lambda instance does.
    queue = queue.then(async () => {
      try {
        const { meta, body } = await invoke(req, Buffer.concat(chunks));
        const headers = [];
        for (const [key, value] of Object.entries(meta.headers ?? {})) if (!hopByHop.has(key.toLowerCase())) headers.push(key, value);
        for (const [key, values] of Object.entries(meta.multiValueHeaders ?? {}))
          if (!hopByHop.has(key.toLowerCase())) for (const value of values) headers.push(key, value);
        for (const cookie of meta.cookies ?? []) headers.push('set-cookie', cookie);
        res.writeHead(meta.statusCode, headers);
        res.end(req.method === 'HEAD' ? undefined : body);
      } catch (error) {
        res.writeHead(502); res.end(String(error));
      }
    });
  });
}).listen(port, '127.0.0.1', () => console.log(`Netlify's bootstrap in the Lambda Node 24 image, at http://127.0.0.1:${port}`));
for (const signal of ['SIGTERM', 'SIGINT']) process.on(signal, () => { server.close(); stop(); process.exit(0); });
