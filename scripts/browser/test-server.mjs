// The browser CI's server (.github/workflows/browser.yml): the browser builds
// under test, served as a static host serves them (src/browser/static-server.mjs),
// plus the routes the Lasm.Web platform suite calls (test/browser/platform):
// fetch endpoints under /api/ and a WebSocket echo at /ws.
//   import { startTestServer } from './test-server.mjs'; const s = await startTestServer(dir)
import { createHash } from 'node:crypto';
import { startStaticServer } from '../../src/browser/static-server.mjs';

const json = (response, status, value, headers = {}) =>
  response.writeHead(status, { 'content-type': 'application/json; charset=utf-8', 'cache-control': 'no-store', ...headers }).end(JSON.stringify(value));
const body = request => new Promise((resolve, reject) => {
  const chunks = [];
  request.on('data', chunk => chunks.push(chunk)).on('end', () => resolve(Buffer.concat(chunks))).on('error', reject);
});

/** /api/* routes; true when handled. */
function apiRoutes(request, response, url) {
  if (!url.pathname.startsWith('/api/')) return false;
  const route = `${request.method} ${url.pathname}`;
  switch (route) {
  case 'GET /api/text':
    response.writeHead(200, { 'content-type': 'text/plain; charset=utf-8' }).end('hello from the server');
    return true;
  case 'GET /api/json':
    json(response, 200, { items: [1, 2, 3], name: 'lasm' });
    return true;
  case 'POST /api/echo':
    body(request).then(bytes => json(response, 200, JSON.parse(bytes.toString('utf8') || 'null'),
      { 'x-request-content-type': String(request.headers['content-type'] ?? '') }), error => json(response, 400, { error: error.message }));
    return true;
  case 'GET /api/bytes':
    response.writeHead(200, { 'content-type': 'application/octet-stream', 'x-echo-lasm': String(request.headers['x-lasm'] ?? ''),
      'access-control-expose-headers': 'x-echo-lasm' }).end(Buffer.from([0, 1, 2, 254, 255]));
    return true;
  case 'POST /api/form':
    body(request).then(bytes => response.writeHead(200, { 'content-type': 'text/plain' })
      .end(`${request.headers['content-type']} ${bytes.length}`));
    return true;
  case 'GET /api/slow': {
    const timer = setTimeout(() => response.writeHead(200, { 'content-type': 'text/plain' }).end('slow'), 5000);
    request.on('close', () => clearTimeout(timer));
    return true;
  }
  default:
    json(response, 404, { error: 'no such route', route });
    return true;
  }
}

/** A WebSocket echo (RFC 6455: text and binary frames, ping, close) on /ws. */
function attachEcho(server) {
  server.on('upgrade', (request, socket) => {
    if (new URL(request.url, 'http://localhost').pathname !== '/ws' || request.headers.upgrade?.toLowerCase() !== 'websocket') { socket.destroy(); return; }
    const accept = createHash('sha1').update(request.headers['sec-websocket-key'] + '258EAFA5-E914-47DA-95CA-C5AB0DC85B11').digest('base64');
    socket.write(`HTTP/1.1 101 Switching Protocols\r\nUpgrade: websocket\r\nConnection: Upgrade\r\nSec-WebSocket-Accept: ${accept}\r\n\r\n`);
    const frame = (opcode, payload) => {
      const length = payload.length;
      const head = length < 126 ? Buffer.from([0x80 | opcode, length])
        : length < 65536 ? Buffer.from([0x80 | opcode, 126, length >> 8, length & 255])
        : Buffer.concat([Buffer.from([0x80 | opcode, 127]), (() => { const b = Buffer.alloc(8); b.writeBigUInt64BE(BigInt(length)); return b; })()]);
      socket.write(Buffer.concat([head, payload]));
    };
    let buffered = Buffer.alloc(0);
    socket.on('data', chunk => {
      buffered = Buffer.concat([buffered, chunk]);
      for (;;) {
        if (buffered.length < 2) return;
        const opcode = buffered[0] & 15, masked = buffered[1] & 128;
        let length = buffered[1] & 127, offset = 2;
        if (length === 126) { if (buffered.length < 4) return; length = buffered.readUInt16BE(2); offset = 4; }
        else if (length === 127) { if (buffered.length < 10) return; length = Number(buffered.readBigUInt64BE(2)); offset = 10; }
        const mask = masked ? buffered.subarray(offset, offset + 4) : null;
        if (masked) offset += 4;
        if (buffered.length < offset + length) return;
        const payload = Buffer.from(buffered.subarray(offset, offset + length));
        if (mask) for (let i = 0; i < payload.length; i++) payload[i] ^= mask[i & 3];
        buffered = buffered.subarray(offset + length);
        if (opcode === 1 || opcode === 2) frame(opcode, payload);
        else if (opcode === 9) frame(10, payload);
        else if (opcode === 8) { frame(8, payload.subarray(0, 2)); socket.end(); return; }
      }
    });
    socket.on('error', () => socket.destroy());
  });
}

// The strict policy docs/deploy/browser.md recommends: the apps run under it.
export const contentSecurityPolicy = "default-src 'self'; script-src 'self' 'wasm-unsafe-eval'; connect-src 'self' ws://127.0.0.1:*; style-src 'self' 'unsafe-inline'; img-src 'self' data:";
export async function startTestServer(root, options = {}) {
  const started = await startStaticServer(root, { ...options, routes: apiRoutes, headers: { 'content-security-policy': contentSecurityPolicy } });
  attachEcho(started.server);
  return started;
}
