// Plain-Node reference server: Express 5 with a JavaScript handler
// (the same app as fixtures/express, whose handler is Lean).
import express from 'express';
const port = Number(process.env.PORT ?? 3000);
const app = express();
app.get('/', (req, res) => { res.json({ ok: true }); });
app.listen(port, '127.0.0.1', () => console.log(`Listening on http://127.0.0.1:${port} (Express)`));
