// Plain-Node reference server: node:http, GET / answers {"ok":true}.
import http from 'node:http';
const port = Number(process.env.PORT ?? 3000);
const body = JSON.stringify({ ok: true });
http.createServer((req, res) => {
  res.writeHead(200, { 'content-type': 'application/json', 'content-length': Buffer.byteLength(body) });
  res.end(body);
}).listen(port, '127.0.0.1', () => console.log(`Listening on http://127.0.0.1:${port} (node:http)`));
