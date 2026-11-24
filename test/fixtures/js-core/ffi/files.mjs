// A project file of test/fixtures/js-core, bound with @[js "./ffi/files.mjs" …].
import { greet } from './lib/helper.mjs';

export function twice(n) { return 2 * n; }

export function greeting(name) { return greet(name); }

export class Box {
  constructor(value) { this.value = value; }
}
