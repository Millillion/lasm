// Property checks without a dependency: `forAll` draws `runs` inputs from a
// seeded generator and checks each one, reporting the seed and the input of
// the first failure. Each property's comment states the proposition it checks
// in Lean notation (docs/TESTING.md#mutation-testing), so that it can later
// become a theorem about a Lean model of the same code.
import assert from 'node:assert/strict';

/** A small deterministic generator (mulberry32) with helpers for test inputs. */
export function random(seed) {
  let state = seed >>> 0;
  const next = () => {
    state = (state + 0x6d2b79f5) >>> 0;
    let t = state;
    t = Math.imul(t ^ (t >>> 15), t | 1);
    t ^= t + Math.imul(t ^ (t >>> 7), t | 61);
    return ((t ^ (t >>> 14)) >>> 0) / 4294967296;
  };
  const int = (low, high) => low + Math.floor(next() * (high - low + 1));
  const pick = items => items[int(0, items.length - 1)];
  const array = (length, item) => Array.from({ length }, item);
  const string = (alphabet, low = 0, high = 12) => array(int(low, high), () => pick(alphabet)).join('');
  const bytes = (low = 0, high = 64) => Buffer.from(array(int(low, high), () => int(0, 255)));
  return { next, int, pick, array, string, bytes };
}

/** Checks `property(input)` for `runs` inputs `generate(random)`; a failure names the seed and the input. */
export function forAll(generate, property, { runs = 200, seed = 1 } = {}) {
  const gen = random(seed);
  for (let run = 0; run < runs; run++) {
    const input = generate(gen);
    try { property(input); }
    catch (error) {
      const shown = (() => { try { return JSON.stringify(input, (_, v) => Buffer.isBuffer(v) || v?.type === 'Buffer' ? `<${Buffer.from(v.data ?? v).toString('hex')}>` : v); } catch { return String(input); } })();
      assert.fail(`property failed on run ${run} (seed ${seed}) for ${shown?.slice(0, 2000)}: ${error.message}`);
    }
  }
}
