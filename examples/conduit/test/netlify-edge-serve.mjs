// Serves the Netlify Edge Function (netlify/edge-functions/lasm.mjs, which
// `netlify build --offline` bundles) the way `netlify dev` runs it, without
// its proxy: in Deno (Netlify's edge runtime is Deno; the pinned Deno on
// PATH), with Netlify Blobs from @netlify/blobs' own local server (what
// `netlify dev` starts), on 127.0.0.1:PORT. Each request gets the blobs
// context as Netlify's edge runtime gives it.
// Not `netlify dev` itself: its proxy re-requests every 403 and 404 response
// as /path.html, /path.htm, /path/index.html, /path/index.htm (netlify-cli
// 27.14.2, dist/utils/proxy.js), so API errors come back as the last of
// those (docs/DECISIONS.md).
//   node test/netlify-edge-serve.mjs PORT
import { spawn } from 'node:child_process';
import { randomUUID } from 'node:crypto';
import { mkdtempSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { fileURLToPath, pathToFileURL } from 'node:url';
import { BlobsServer } from '@netlify/blobs/server';

const root = fileURLToPath(new URL('..', import.meta.url));
const port = Number(process.argv[2]);
const work = mkdtempSync(join(tmpdir(), 'conduit-netlify-edge-'));
const token = randomUUID();
const blobs = new BlobsServer({ directory: join(work, 'blobs'), token });
const { port: blobsPort } = await blobs.start();
const url = `http://127.0.0.1:${blobsPort}`;
const context = Buffer.from(JSON.stringify({ deployID: '0', edgeURL: url, uncachedEdgeURL: url, siteID: 'conduit-local', token,
  primaryRegion: 'dev' })).toString('base64');
const env = Object.fromEntries(['JWT_SECRET'].filter(k => process.env[k]).map(k => [k, process.env[k]]));
const main = join(work, 'serve.mjs');
writeFileSync(main, `// Netlify's edge globals for the function, then the function on every request.
const env = ${JSON.stringify(env)};
globalThis.Netlify = { env: { get: k => env[k], has: k => k in env, toObject: () => ({ ...env }) } };
const { default: lasm } = await import(${JSON.stringify(pathToFileURL(join(root, 'netlify/edge-functions/lasm.mjs')).href)});
Deno.serve({ port: ${port}, hostname: '127.0.0.1' }, request => {
  globalThis.netlifyBlobsContext = ${JSON.stringify(context)};
  return lasm(request, { next: () => new Response('Not Found', { status: 404 }), geo: {}, site: { id: 'conduit-local' }, cookies: undefined });
});
`);
// In the project, so "@netlify/blobs" resolves from its node_modules.
const deno = spawn('deno', ['run', '-A', '--node-modules-dir=manual', main], { cwd: root, stdio: 'inherit' });
const stop = async () => { deno.kill('SIGTERM'); await blobs.stop?.(); rmSync(work, { recursive: true, force: true }); };
for (const signal of ['SIGTERM', 'SIGINT']) process.on(signal, async () => { await stop(); process.exit(0); });
deno.on('exit', async code => { await stop(); process.exit(code ?? 0); });
