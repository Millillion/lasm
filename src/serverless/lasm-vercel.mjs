// Vercel Function (Node.js runtime) for a Lasm HTTP server: the default
// export receives Node's (req, res) and pipes it to the Lean server. The
// server starts on the first request, not at import: Vercel's launcher
// intercepts http.Server#listen while it imports the function.
import { pipe } from './lasm-server.mjs';

export default async function handler(req, res) {
  try { await pipe(req, res); }
  catch (error) {
    console.error(error);
    if (!res.headersSent) { res.statusCode = 502; res.end('Lean server unavailable\n'); }
    else res.destroy(error);
  }
}
