// Netlify Function (v2, Node.js) for a Lasm HTTP server: every path is
// forwarded to the Lean server as a WHATWG Request.
import { fetchLean, startLeanServer } from './lasm-server.mjs';

// Start the Lean server while the function loads; requests wait for it.
startLeanServer().catch(() => { /* reported by the first request */ });

export default async request => {
  try { return await fetchLean(request); }
  catch (error) { console.error(error); return new Response('Lean server unavailable\n', { status: 502 }); }
};

// All paths; static files in the publish directory are served first.
export const config = { path: '/*', preferStatic: true };
