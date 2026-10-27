import type { Plugin } from 'vite';
export interface LasmPluginOptions {
  /** none (default): blocking Lean waits stop the app; jspi: they suspend where the browser has JSPI. */
  suspend?: 'none' | 'jspi';
  /** The Lasm CLI's bin/lasm.mjs (default: the CLI this plugin ships in). */
  cli?: string;
  /** Release builds in development too (default: dev builds, faster). */
  release?: boolean;
}
export default function lasm(options?: LasmPluginOptions): Plugin;
export { lasm };
