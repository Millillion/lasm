// Vercel Function (Node.js runtime) for a Lasm program: the default export
// receives Node's (req, res) and serves it with the fetch handler the program
// publishes (Lasm.JS.exportDefault), called directly.
import { loadHandler, pipe } from './lasm-function.mjs';

// Start the Lean program while the function loads; requests wait for its handler.
loadHandler().catch(() => { /* reported by the first request */ });

export default async function handler(req, res) {
  try { await pipe(req, res); }
  catch (error) {
    console.error(error);
    if (!res.headersSent) { res.statusCode = 502; res.end('Lean program unavailable\n'); }
    else res.destroy(error);
  }
}
