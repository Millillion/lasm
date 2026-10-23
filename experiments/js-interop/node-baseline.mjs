// Pure Node `http` baseline for experiments/js-interop/load.mjs: the same route
// and body shape as the prototype's Lean handler, written in JavaScript.
import http from 'node:http';
const server = http.createServer((req, res) => {
  const body = `{"ok":true,"len":${`${req.method} ${req.url}`.length}}`;
  res.writeHead(200, { 'content-type': 'application/json', 'content-length': Buffer.byteLength(body) });
  res.end(body);
});
server.keepAliveTimeout = 5000;
server.listen(Number(process.argv[2] ?? 0), '127.0.0.1', () => console.log(`Listening on http://127.0.0.1:${server.address().port}`));
