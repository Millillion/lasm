// Binary-search the deepest recursion that completes, by subprocess.
import { spawnSync } from 'node:child_process';
const [file, ...flags] = process.argv.slice(2);
const ok = n => spawnSync(process.execPath, [...flags, file, 'depth', String(n)], { encoding: 'utf8', timeout: 120000 }).stdout.includes('depthOk');
let lo = 1000, hi = 50_000_000;
while (lo < hi) { const mid = Math.floor((lo + hi + 1) / 2); if (ok(mid)) lo = mid; else hi = mid - 1; }
console.log(JSON.stringify({ file, flags, maxDepth: lo }));
