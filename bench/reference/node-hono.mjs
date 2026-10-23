// Plain-Node reference server: Hono on @hono/node-server with a JavaScript handler
// (the same app as fixtures/hono, whose handler is Lean).
import { Hono } from 'hono';
import { serve } from '@hono/node-server';
const port = Number(process.env.PORT ?? 3000);
const app = new Hono();
app.get('/', c => c.json({ ok: true }));
serve({ fetch: app.fetch, port, hostname: '127.0.0.1' }, () => console.log(`Listening on http://127.0.0.1:${port} (Hono)`));
