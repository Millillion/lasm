import { createLinuxMemory } from '../src/linux-memory.mjs';
import { memoryVectors, fixtureMemoryBackend } from '../test/fixtures/linux-memory.mjs';

console.log(JSON.stringify(memoryVectors.map(vector => {
  const memory = createLinuxMemory(fixtureMemoryBackend(vector));
  return { name: vector.name, values: [memory.free(), memory.total(), memory.constrained(), memory.available()].map(String) };
})));
