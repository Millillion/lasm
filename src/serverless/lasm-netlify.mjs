// Netlify Function (v2, Node.js) for a Lasm HTTP server: every path is
// forwarded to the Lean server as a WHATWG Request. The server starts on the
// first request (the function's cold start).
import { fetchLean } from './lasm-server.mjs';

export default async request => {
  try { return await fetchLean(request); }
  catch (error) { console.error(error); return new Response('Lean server unavailable\n', { status: 502 }); }
};

// All paths; static files in the publish directory are served first.
export const config = { path: '/*', preferStatic: true };
