// Imported by ../files.mjs by relative path, and bound directly by Main.lean:
// both reach the same module instance, so `calls` counts every greeting.
let count = 0;

export function greet(name) {
  count += 1;
  return `hello, ${name} (from helper)`;
}

export function calls() { return count; }
