// A stand-in for a Lasm Node build (dist/): main.mjs publishes a fetch
// handler as a Lean program's main does with Lasm.JS.exportDefault (it hands
// it to globalThis.__lasmFunctionHost when a function platform's shim set
// one), so `lasm package` and the function-platform shims can be tested
// without a Lean toolchain (test/serverless.test.mjs) and on each platform's
// own local runtime (scripts/serverless/adapter-platforms.mjs). It echoes
// each request as JSON; /binary, /cookies, /session, /empty, /see-other and
// /throw exercise encodings and failures. A leading /v1 or /v2 (SAM routes)
// is not part of the app's path.
import { mkdirSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';

// Set by /session: what a sign-in sends (a session cookie with every common
// attribute, a cleared cookie, a base64 value).
export const sessionCookies = ['sid=abc.DEF-1_~; Path=/; HttpOnly; SameSite=Lax', 'flow=; Path=/; Max-Age=0', 'b64=YQ+/Zg==; Path=/'];

export const standInProgram = `if (process.argv.length !== 2) throw new Error('unexpected arguments ' + process.argv);
const json = (value, status = 200) => new Response(JSON.stringify(value), { status, headers: { 'content-type': 'application/json' } });
const handler = {
  async fetch(request) {
    const url = new URL(request.url);
    const path = url.pathname.replace(/^\\/v[12](?=\\/)/, '');
    if (path === '/health') return json({ ok: true });
    if (path === '/binary') return new Response(new Uint8Array([0, 255, 1, 254]), { headers: { 'content-type': 'application/octet-stream' } });
    if (path === '/cookies') {
      const headers = new Headers([['set-cookie', 'a=1; Path=/'], ['set-cookie', 'b=2; Path=/'], ['x-many', 'p'], ['x-many', 'q']]);
      return new Response('ok', { headers });
    }
    if (path === '/session') {
      const headers = new Headers([['location', '/home'], ...${JSON.stringify(sessionCookies)}.map(c => ['set-cookie', c])]);
      return new Response(null, { status: 303, headers });
    }
    if (path === '/empty') return new Response(null, { status: 204 });
    // An empty byte body (no content type): sent as no body at all (#82).
    if (path === '/see-other') return new Response(new Uint8Array(0), { status: 303, headers: { location: '/there' } });
    if (path === '/throw') throw new Error('the handler threw');
    return json({ method: request.method, url: path + url.search, scheme: url.protocol.slice(0, -1), host: request.headers.get('host'),
      type: request.headers.get('content-type'), cookie: request.headers.get('cookie'), length: request.headers.get('content-length'),
      body: request.body ? await request.text() : '' }, path === '/missing' ? 404 : 200);
  },
};
globalThis.__lasmDefaultExport = handler;
globalThis.__lasmFunctionHost?.(handler);
`;

/** Writes the stand-in build into `directory`; `packages` are stand-in npm packages ({ name: index.js source }). */
export function standInApplication(directory, { packages = {} } = {}) {
  const write = (name, text, mode = 0o644) => {
    mkdirSync(join(directory, name, '..'), { recursive: true });
    writeFileSync(join(directory, name), text, { mode });
  };
  write('main.mjs', standInProgram, 0o755);
  write('package.json', JSON.stringify({ private: true, type: 'module' }));
  write('program.cjs', '');
  write('program.wasm', '');
  write('build-info.json', '{}');
  write('.lasm-application.json', '{}');
  write('host/native/manifest.json', JSON.stringify({ deployment: { target: 'node', targets: ['linux-x64', 'linux-arm64'] } }));
  // Built on Windows: no execute permission recorded.
  write('host/native/process/linux-x64-gnu', 'ELF', 0o644);
  write('host/native/process/manifest.json', '{}');
  for (const [name, text] of Object.entries(packages)) {
    write(`node_modules/${name}/package.json`, JSON.stringify({ name, version: '1.2.3', type: 'module', main: 'index.js' }));
    write(`node_modules/${name}/index.js`, text);
  }
  return directory;
}
