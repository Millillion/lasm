import { defineConfig } from 'vitest/config';
export default defineConfig({ test: {
  environment: 'node', include: ['examples/lean-server/test/**/*.test.mjs'],
  fileParallelism: false, testTimeout: 20_000, hookTimeout: 180_000,
} });
