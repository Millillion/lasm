import test from 'node:test';
import assert from 'node:assert/strict';
import { createLinuxMemory } from '../src/linux-memory.mjs';
import { memoryVectors, fixtureMemoryBackend } from './fixtures/linux-memory.mjs';

for (const vector of memoryVectors) test(vector.name, () => {
  const memory = createLinuxMemory(fixtureMemoryBackend(vector));
  assert.deepEqual([memory.free(), memory.total(), memory.constrained(), memory.available()], vector.expected);
});
