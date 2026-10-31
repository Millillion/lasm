// The server for the end-to-end suite (test/playwright.config.ts starts it;
// PORT and HOST come from there): the platform E2E_PLATFORM of
// test/platforms.mjs (default node, the Node build), on a fresh database,
// served by the platform's own local tooling. It stays in Playwright's
// process group, so Playwright's stop reaches every process; on SIGTERM it
// also runs the platform's clean-up (containers).
import { startServer } from './platforms.mjs';

const name = process.env.E2E_PLATFORM ?? 'node';
const { child, stop } = startServer(name, Number(process.env.PORT ?? 4100), { stdio: ['ignore', 'ignore', 'inherit'], detached: false });
const end = code => { stop(); process.exit(code ?? 0); };
process.on('SIGTERM', () => end(0));
process.on('SIGINT', () => end(0));
child.on('exit', code => end(code));
