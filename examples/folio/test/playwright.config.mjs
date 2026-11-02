// The live preview's end-to-end tests (test/e2e), against a fresh server.
//
//   npm run test:e2e                                    # Chromium against the Node build
//   BROWSERS=chromium,firefox,webkit npm run test:e2e
//   E2E_SERVER="bun bun/main.mjs" npm run test:e2e      # the Bun build (PORT, HOST)
//   E2E_SERVER="deno run -A deno/main.mjs" npm run test:e2e
import { defineConfig, devices } from '@playwright/test';

const port = Number(process.env.E2E_PORT ?? 4300);
const base = `http://127.0.0.1:${port}`;
const browsers = (process.env.BROWSERS ?? 'chromium').split(',').map(b => b.trim()).filter(Boolean);
const device = { chromium: 'Desktop Chrome', firefox: 'Desktop Firefox', webkit: 'Desktop Safari' };

export default defineConfig({
  testDir: './e2e',
  outputDir: '../test-results/e2e-output',
  retries: 0,
  workers: 1,
  reporter: [['list'], ['json', { outputFile: `../test-results/e2e-${process.env.E2E_NAME ?? browsers.join('-')}.json` }]],
  use: { baseURL: base, trace: 'retain-on-failure' },
  webServer: {
    command: process.env.E2E_SERVER ?? 'node dist/server/main.mjs',
    cwd: '..',
    url: `${base}/`,
    env: { PORT: String(port), HOST: '127.0.0.1' },
    reuseExistingServer: false,
    timeout: 600_000,
    stdout: 'ignore',
    stderr: 'pipe',
  },
  projects: browsers.map(name => ({ name, use: { ...devices[device[name] ?? name] } })),
});
