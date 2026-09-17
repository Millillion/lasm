import express from 'express';

// Optional local upstream for exercising real outbound HTTP from Lean.
const templates = {
  1: { title: 'Review the Lasm API', description: 'Exercise filesystem and HTTP boundaries.', priority: 2 },
  2: { title: 'Ship a Lean endpoint', description: 'Implement, test, and document a real endpoint.', priority: 4 },
};
const app = express();
app.get('/templates/:id', (req, res) => {
  const template = Object.hasOwn(templates, req.params.id) ? templates[req.params.id] : undefined;
  if (template) res.json(template);
  else res.status(404).json({ error: 'Unknown template' });
});
const server = app.listen(3001, '127.0.0.1', () => console.log('Demo templates: http://127.0.0.1:3001'));
for (const signal of ['SIGINT', 'SIGTERM']) process.once(signal, () => server.close());
