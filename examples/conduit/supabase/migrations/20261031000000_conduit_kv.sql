-- Conduit's store on Supabase (Server/SupabaseKv.lean, Server/Kv.lean): keys and JSON values.
create table if not exists public.conduit_kv (
  key text primary key,
  value text not null
);
-- Row-level security with no policy: only the service role, which bypasses it, reads and writes.
alter table public.conduit_kv enable row level security;
