// A stand-in for a Lasm Node build (dist/): main.mjs is a plain Node HTTP
// server on $HOST:$PORT, so `lasm package` and the function-platform shims
// can be tested without a Lean toolchain (test/serverless.test.mjs) and on
// each platform's own local runtime (scripts/serverless/adapter-platforms.mjs).
// It echoes each request as JSON (cookieFields: how many Cookie header lines
// arrived); /binary, /cookies, /session, /empty and /see-other exercise
// encodings. A leading /v1 or /v2 (SAM routes) is not part of the app's path.
import { mkdirSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';

// Set by /session: what a sign-in sends (a session cookie with every common
// attribute, a cleared cookie, a base64 value).
export const sessionCookies = ['sid=abc.DEF-1_~; Path=/; HttpOnly; SameSite=Lax', 'flow=; Path=/; Max-Age=0', 'b64=YQ+/Zg==; Path=/'];

export const standInServer = `import http from 'node:http';
if (process.argv.length !== 2) throw new Error('unexpected arguments ' + process.argv);
http.createServer((req, res) => {
  const chunks = [];
  req.on('data', c => chunks.push(c)).on('end', () => {
    const url = new URL(req.url.replace(/^\\/v[12](?=\\/)/, ''), 'http://x');
    if (url.pathname === '/health') { res.writeHead(200, { 'content-type': 'application/json' }); return res.end('{"ok":true}'); }
    if (url.pathname === '/binary') { res.writeHead(200, { 'content-type': 'application/octet-stream' }); return res.end(Buffer.from([0, 255, 1, 254])); }
    if (url.pathname === '/cookies') { res.setHeader('set-cookie', ['a=1; Path=/', 'b=2; Path=/']); res.setHeader('x-many', ['p', 'q']); return res.end('ok'); }
    if (url.pathname === '/session') { res.setHeader('set-cookie', ${JSON.stringify(sessionCookies)}); res.writeHead(303, { location: '/home' }); return res.end(); }
    if (url.pathname === '/empty') { res.writeHead(204); return res.end(); }
    if (url.pathname === '/see-other') { res.writeHead(303, { location: '/there' }); return res.end(); }
    res.writeHead(url.pathname === '/missing' ? 404 : 200, { 'content-type': 'application/json' });
    res.end(JSON.stringify({ method: req.method, url: req.url, host: req.headers.host, type: req.headers['content-type'] ?? null,
      cookie: req.headers.cookie ?? null, cookieFields: req.rawHeaders.filter((h, i) => i % 2 === 0 && h.toLowerCase() === 'cookie').length,
      body: Buffer.concat(chunks).toString() }));
  });
}).listen(Number(process.env.PORT), process.env.HOST);
`;

/** Writes the stand-in build into `directory`; `packages` are stand-in npm packages ({ name: index.js source }). */
export function standInApplication(directory, { packages = {} } = {}) {
  const write = (name, text, mode = 0o644) => {
    mkdirSync(join(directory, name, '..'), { recursive: true });
    writeFileSync(join(directory, name), text, { mode });
  };
  write('main.mjs', standInServer, 0o755);
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
