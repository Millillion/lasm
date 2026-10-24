// Google Cloud Functions (gen2, Node.js Functions Framework) for a Lasm HTTP
// server: the HTTP function `lasm` (deploy with --entry-point lasm) pipes each
// request to the Lean server.
import functions from '@google-cloud/functions-framework';
import { pipe, startLeanServer } from './lasm-server.mjs';

functions.http('lasm', async (req, res) => {
  try { await pipe(req, res); }
  catch (error) {
    console.error(error);
    if (!res.headersSent) res.status(502).send('Lean server unavailable\n');
    else res.destroy(error);
  }
});

// Start the Lean server while the instance loads, before the first request.
startLeanServer().catch(error => console.error(error));
