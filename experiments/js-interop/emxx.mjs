// Run the managed Emscripten 6.0.9 driver (Python emcc/em++) with the given arguments.
//   node emxx.mjs em++|emcc ARGS...
import { provisionSdk } from '../../src/managed-sdk.mjs';
const [tool, ...args] = process.argv.slice(2);
const sdk = await provisionSdk({ log: () => {} });
try { sdk.execute(tool, args, { stdio: 'inherit', timeout: 3_600_000, env: { ...sdk.env, ...(process.env.EMCC_DEBUG ? { EMCC_DEBUG: process.env.EMCC_DEBUG } : {}) } }); }
catch (error) { process.exit(error.status ?? 1); }
