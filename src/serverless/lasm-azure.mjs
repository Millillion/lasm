// Azure Functions (Node.js v4 programming model) for a Lasm HTTP server: one
// anonymous HTTP function on every route (host.json sets routePrefix to "")
// forwards each request to the Lean server.
import { app } from '@azure/functions';
import { azureReply, forward, startLeanServer } from './lasm-server.mjs';

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
      return { status: 502, body: 'Lean server unavailable\n' };
    }
  },
});

// Start the Lean server while the worker loads the app, before the first request.
startLeanServer().catch(error => console.error(error));
