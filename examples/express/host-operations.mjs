/** Track the actual host Promises, which may outlive guest cancellation. */
export function trackHostOperations(capabilities) {
  const active = new Set();
  const host = Object.fromEntries(Object.entries(capabilities).map(([name, operation]) => [name, (...args) => {
    const pending = Promise.resolve().then(() => operation(...args));
    active.add(pending);
    const settled = () => active.delete(pending);
    pending.then(settled, settled);
    return pending;
  }]));
  return {
    host,
    async drain() {
      while (active.size) await Promise.allSettled([...active]);
    },
  };
}
