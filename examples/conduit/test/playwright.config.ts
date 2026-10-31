// The official RealWorld end-to-end suite (test/realworld/specs/e2e, unmodified)
// against this app, extending upstream's playwright.base as upstream instructs
// (only baseURL, webServer, browsers and reporters are ours). Conduit owns its
// whole stack, so the suite runs in its `fullstack` mode (TEST_MODE=fullstack:
// everything through the UI; see specs/e2e/helpers/config.ts).
//
//   npm run test:e2e                                  # Chromium against the Node build
//   BROWSERS=chromium,firefox,webkit npm run test:e2e
//   E2E_PLATFORM=deno npm run test:e2e                 # any platform of test/platforms.mjs
//   E2E_SERVER="bun bun/main.mjs" npm run test:e2e      # any other server command (PORT, HOST)
import { defineConfig, devices } from '@playwright/test';
import { baseConfig } from './realworld/specs/e2e/playwright.base';

// The suite's mode (read by specs/e2e/helpers/config.ts in every worker).
process.env.TEST_MODE ??= 'fullstack';

const port = Number(process.env.E2E_PORT ?? 4100);
const browsers = (process.env.BROWSERS ?? 'chromium').split(',').map(b => b.trim()).filter(Boolean);
const device: Record<string, string> = { chromium: 'Desktop Chrome', firefox: 'Desktop Firefox', webkit: 'Desktop Safari' };

export default defineConfig({
  ...baseConfig,
  testDir: './realworld/specs/e2e',
  outputDir: '../test-results/e2e-output',
  reporter: [['list'], ['json', { outputFile: `../test-results/e2e-${process.env.E2E_NAME ?? browsers.join('-')}.json` }]],
  use: { ...baseConfig.use, baseURL: `http://127.0.0.1:${port}` },
  webServer: {
    command: process.env.E2E_SERVER ?? `node test/e2e-server.mjs`,
    cwd: '..',
    url: `http://127.0.0.1:${port}/api/tags`,
    env: { PORT: String(port), HOST: '127.0.0.1' },
    reuseExistingServer: false,
    timeout: 600_000,
    stdout: 'ignore',
    stderr: 'pipe',
  },
  projects: browsers.map(name => ({ name, use: { ...devices[device[name] ?? name] } })),
});
