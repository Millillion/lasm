// Serves the Supabase Edge Function (npm run build:supabase-edge) with the
// Supabase CLI's local stack, on 127.0.0.1:PORT:
//   - `supabase start` must have run (it starts Postgres with
//     supabase/migrations applied, the REST API and the gateway on 54321);
//   - the table conduit_kv is emptied, so each run starts fresh;
//   - `supabase functions serve` runs the function in Supabase's edge runtime;
//   - PORT forwards every path to /functions/v1/conduit (where Supabase
//     serves the function), so the app's absolute paths (/api, /client) work,
//     as they would behind a custom domain.
//   node test/supabase-serve.mjs PORT
import { spawn, spawnSync } from 'node:child_process';
import http from 'node:http';

const port = Number(process.argv[2]);
const gateway = { host: '127.0.0.1', port: 54321 }, prefix = '/functions/v1/conduit';
const truncate = spawnSync('docker', ['exec', 'supabase_db_conduit', 'psql', '-U', 'postgres', '-c', 'truncate public.conduit_kv'], { encoding: 'utf8' });
if (truncate.status !== 0) throw new Error(`Is the local stack running (supabase start)? ${truncate.stderr}`);
const serve = spawn('supabase', ['functions', 'serve', '--no-verify-jwt'], { stdio: 'inherit' });
const proxy = http.createServer((req, res) => {
  const headers = { ...req.headers, host: `${gateway.host}:${gateway.port}` };
  const upstream = http.request({ ...gateway, method: req.method, path: prefix + req.url, headers }, response => {
    res.writeHead(response.statusCode, response.headers);
    response.pipe(res);
  });
  upstream.on('error', error => { res.writeHead(502); res.end(String(error)); });
  req.pipe(upstream);
}).listen(port, '127.0.0.1');
const stop = () => { proxy.close(); serve.kill('SIGINT'); setTimeout(() => process.exit(0), 3000).unref(); };
for (const signal of ['SIGTERM', 'SIGINT']) process.on(signal, stop);
serve.on('exit', code => { proxy.close(); process.exit(code ?? 0); });
