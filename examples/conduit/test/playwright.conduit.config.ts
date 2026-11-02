// Conduit's own browser tests (test/conduit), beside the official suite:
// the same server and browsers as test/playwright.config.ts.
//
//   npm run test:conduit
//   BROWSERS=chromium,firefox,webkit npm run test:conduit
import { defineConfig } from '@playwright/test';
import config from './playwright.config';

const browsers = process.env.BROWSERS ?? 'chromium';
export default defineConfig({
  ...config,
  testDir: './conduit',
  outputDir: '../test-results/conduit-output',
  reporter: [['list'], ['json', { outputFile: `../test-results/conduit-${process.env.E2E_NAME ?? browsers.split(',').join('-')}.json` }]],
});
