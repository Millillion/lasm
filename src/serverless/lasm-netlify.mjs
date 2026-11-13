// Netlify Function (v2, Node.js) for a Lasm program: the platform's Request
// goes to the fetch handler the program publishes (Lasm.JS.exportDefault),
// called directly, with Netlify's context after it.
import { fetchLean, loadHandler } from './lasm-function.mjs';

// Start the Lean program while the function loads; requests wait for its handler.
loadHandler().catch(() => { /* reported by the first request */ });

export default async (request, context) => {
  try { return await fetchLean(request, context); }
  catch (error) { console.error(error); return new Response('Lean program unavailable\n', { status: 502 }); }
};

// All paths; static files in the publish directory are served first.
export const config = { path: '/*', preferStatic: true };
