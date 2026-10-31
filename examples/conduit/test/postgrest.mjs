// Postgres with PostgREST in front, in Docker, for the wasi:http component
// (ServerWasiHttp.lean keeps its data there): the table of
// supabase/migrations/, writable by PostgREST's anonymous role (a local test
// database; in production, put PostgREST behind your network or require a
// key: CONDUIT_STORE_KEY).
//   node test/postgrest.mjs up         Postgres 17 and PostgREST 13 on 127.0.0.1:3000
//   node test/postgrest.mjs truncate   empty the table (each test run starts fresh)
//   node test/postgrest.mjs down
import { spawnSync } from 'node:child_process';
import { readFileSync, readdirSync } from 'node:fs';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('..', import.meta.url));
const network = 'conduit-pg', db = 'conduit-pg-db', rest = 'conduit-pg-rest';
const docker = (args, input) => {
  const r = spawnSync('docker', args, { encoding: 'utf8', input, timeout: 600_000 });
  if (r.status !== 0) throw new Error(`docker ${args.join(' ')}: ${r.stderr}`);
  return r.stdout.trim();
};
const psql = sql => docker(['exec', '-i', db, 'psql', '-v', 'ON_ERROR_STOP=1', '-U', 'postgres', '-q'], sql);
const migrations = readdirSync(join(root, 'supabase/migrations')).sort().map(f => readFileSync(join(root, 'supabase/migrations', f), 'utf8')).join('\n');

const command = process.argv[2];
if (command === 'up') {
  spawnSync('docker', ['rm', '-f', db, rest], { stdio: 'ignore' });
  spawnSync('docker', ['network', 'create', network], { stdio: 'ignore' });
  docker(['run', '-d', '--name', db, '--network', network, '-e', 'POSTGRES_PASSWORD=conduit', 'postgres:17.6']);
  for (let i = 0; ; i++) {
    if (spawnSync('docker', ['exec', db, 'pg_isready', '-U', 'postgres'], { stdio: 'ignore' }).status === 0
      && spawnSync('docker', ['exec', db, 'psql', '-U', 'postgres', '-c', 'select 1'], { stdio: 'ignore' }).status === 0) break;
    if (i > 120) throw new Error('Postgres did not start');
    await new Promise(r => setTimeout(r, 500));
  }
  psql(`create role anon nologin;
create role authenticator login password 'conduit' noinherit;
grant anon to authenticator;
${migrations}
grant usage on schema public to anon;
grant select, insert, update, delete on public.conduit_kv to anon;
create policy "local tests: anyone" on public.conduit_kv for all to anon using (true) with check (true);
`);
  docker(['run', '-d', '--name', rest, '--network', network, '-p', '127.0.0.1:3000:3000',
    '-e', `PGRST_DB_URI=postgres://authenticator:conduit@${db}:5432/postgres`, '-e', 'PGRST_DB_SCHEMAS=public',
    '-e', 'PGRST_DB_ANON_ROLE=anon', 'postgrest/postgrest:v13.0.4']);
  for (let i = 0; ; i++) {
    try { if ((await fetch('http://127.0.0.1:3000/conduit_kv?limit=1')).ok) break; } catch {}
    if (i > 120) throw new Error('PostgREST did not start: ' + spawnSync('docker', ['logs', rest], { encoding: 'utf8' }).stderr);
    await new Promise(r => setTimeout(r, 500));
  }
  console.log('PostgREST on http://127.0.0.1:3000 (table conduit_kv)');
} else if (command === 'truncate') psql('truncate public.conduit_kv;');
else if (command === 'down') {
  spawnSync('docker', ['rm', '-f', db, rest], { stdio: 'ignore' });
  spawnSync('docker', ['network', 'rm', network], { stdio: 'ignore' });
} else throw new Error('Usage: node test/postgrest.mjs up|truncate|down');
