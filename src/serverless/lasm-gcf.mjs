// Google Cloud Functions (gen2, Node.js Functions Framework) for a Lasm
// program: the HTTP function `lasm` (deploy with --entry-point lasm) serves
// each request with the fetch handler the program publishes
// (Lasm.JS.exportDefault), called directly.
import functions from '@google-cloud/functions-framework';
import { loadHandler, pipe } from './lasm-function.mjs';

functions.http('lasm', async (req, res) => {
  try { await pipe(req, res); }
  catch (error) {
    console.error(error);
    if (!res.headersSent) res.status(502).send('Lean program unavailable\n');
    else res.destroy(error);
  }
});

// Start the Lean program while the instance loads, before the first request.
loadHandler().catch(error => console.error(error));
