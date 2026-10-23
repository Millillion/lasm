// Starts a temporary Postgres for the interop examples where no service
// container is available (macOS, Windows CI runners): the embedded-postgres
// npm package (PostgreSQL binaries published on npm), installed in WORK_DIR.
//   node start-postgres.mjs WORK_DIR PORT
// Prints DATABASE_URL=… once the server accepts connections, then keeps running
// until it receives SIGTERM/SIGINT.
import { execFileSync } from 'node:child_process';
import { mkdirSync, writeFileSync } from 'node:fs';
import { createRequire } from 'node:module';
import { join, resolve, dirname } from 'node:path';

const [workArg, portArg = '55432'] = process.argv.slice(2);
const work = resolve(workArg), port = Number(portArg);
mkdirSync(work, { recursive: true });
writeFileSync(join(work, 'package.json'), JSON.stringify({ private: true, dependencies: { 'embedded-postgres': '18.4.0-beta.17' } }));
const npm = process.platform === 'win32' ? [process.execPath, join(dirname(process.execPath), 'node_modules/npm/bin/npm-cli.js')] : ['npm'];
execFileSync(npm[0], [...npm.slice(1), 'install', '--no-audit', '--no-fund'], { cwd: work, stdio: 'inherit' });
const { default: EmbeddedPostgres } = await import(createRequire(join(work, 'package.json')).resolve('embedded-postgres'));
const server = new EmbeddedPostgres({ databaseDir: join(work, 'data'), user: 'postgres', password: 'postgres', port, persistent: false });
await server.initialise();
await server.start();
console.log(`DATABASE_URL=postgres://postgres:postgres@127.0.0.1:${port}/postgres`);
const stop = async () => { try { await server.stop(); } finally { process.exit(0); } };
process.on('SIGTERM', stop); process.on('SIGINT', stop);
setInterval(() => {}, 1 << 30);
