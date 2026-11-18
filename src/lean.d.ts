// Types of `@lasm/cli/lean` (src/lean.mjs).
export interface LasmLean {
  /** The Lean release, such as "4.35.0". */
  version: string;
  /** The `lean` executable. */
  lean: string;
  /** The `lake` executable. */
  lake: string;
  /** Lean's own compiled library (`lib/lean`), for `LEAN_PATH`. */
  libraryDirectory: string;
}
/** Lasm's Lean for the project of `source`, installed on first use. */
export function lasmLean(source: string, options?: { progress?: (event: { stage?: string }) => void }): Promise<LasmLean>;
