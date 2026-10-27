// Types of `import app from './Main.lean?lasm'` (add "@lasm/cli/vite/client" to compilerOptions.types).
declare module '*.lean?lasm' {
  export interface LasmMountOptions {
    /** Any JSON-like value: Lasm.Web.App.flags. */
    flags?: unknown;
    /** Adopt server-rendered content (Lasm.Web.App.hydrating). */
    hydrate?: boolean;
    /** Let blocking Lean waits suspend where the browser has JSPI. */
    jspi?: boolean;
    onError?: (error: Error) => void;
    stdout?: (line: string) => void;
    stderr?: (line: string) => void;
  }
  export interface LasmPort {
    send(value: unknown): Promise<void>;
    subscribe(fn: (value: unknown) => void): () => void;
    unsubscribe(fn: (value: unknown) => void): void;
  }
  export interface LasmApp {
    readonly element: Element;
    readonly name: string;
    readonly ports: Record<string, LasmPort>;
    readonly stopped: boolean;
    send(message: unknown): Promise<void>;
    unmount(options?: { clear?: boolean }): void;
  }
  export const name: string;
  export function mount(element: Element | string, options?: LasmMountOptions): Promise<LasmApp>;
  export function mountAll(root?: ParentNode): Promise<(LasmApp | null)[]>;
  export function preload(): Promise<WebAssembly.Module>;
  export function appOf(element: Element): LasmApp | null;
  const app: { name: string; mount: typeof mount; mountAll: typeof mountAll; preload: typeof preload; appOf: typeof appOf };
  export default app;
}
