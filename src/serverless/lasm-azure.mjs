// Azure Functions (Node.js v4 programming model) for a Lasm program: one
// anonymous HTTP function on every route (host.json sets routePrefix to "")
// calls the fetch handler the program publishes (Lasm.JS.exportDefault).
import { app } from '@azure/functions';
import { azureReply, forward, loadHandler } from './lasm-function.mjs';

app.http('lasm', {
  route: '{*path}',
  methods: ['GET', 'POST', 'PUT', 'PATCH', 'DELETE', 'HEAD', 'OPTIONS'],
  authLevel: 'anonymous',
  handler: async request => {
    try {
      const url = new URL(request.url);
      const body = ['GET', 'HEAD'].includes(request.method) ? undefined : Buffer.from(await request.arrayBuffer());
      return azureReply(await forward({ method: request.method, path: url.pathname + url.search, headers: [...request.headers], body }));
    } catch (error) {
      console.error(error);
      return { status: 502, body: 'Lean program unavailable\n' };
    }
  },
});

// Start the Lean program while the worker loads the app, before the first request.
loadHandler().catch(error => console.error(error));
