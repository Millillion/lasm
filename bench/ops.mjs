// Group a fixture's JSON lines by their "op" field (bench/run.mjs). A Map, not a
// plain object: op names such as "toString" collide with Object.prototype.
export function groupByOp(outputs) {
  const ops = new Map();
  for (const output of outputs)
    for (const line of output.trim().split('\n')) {
      if (!line) continue;
      const o = JSON.parse(line);
      if (!ops.has(o.op)) ops.set(o.op, []);
      ops.get(o.op).push(o);
    }
  return ops;
}
