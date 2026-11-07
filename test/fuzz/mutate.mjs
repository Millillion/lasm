// Mutations for the JavaScript fuzzer (test/fuzz/worker.mjs), after libFuzzer's
// MutationDispatcher: bit and byte changes, interesting values, insertions and
// deletions, copies within the input, splices with another corpus entry,
// dictionary tokens, and whole 0x00-separated fields replaced by a token or
// dropped. Deterministic for a seed.

/** sfc32: a seeded generator (Math.random cannot be replayed). */
export function rng(seed) {
  let a = 0x9e3779b9, b = 0x243f6a88, c = 0xb7e15162, d = seed >>> 0;
  const next = () => {
    a >>>= 0; b >>>= 0; c >>>= 0; d >>>= 0;
    const t = (a + b | 0) + d | 0;
    d = d + 1 | 0; a = b ^ b >>> 9; b = c + (c << 3) | 0; c = c << 21 | c >>> 11; c = c + t | 0;
    return t >>> 0;
  };
  for (let i = 0; i < 16; i++) next();
  return {
    next,
    below: n => n <= 1 ? 0 : next() % n,
    chance: k => next() % k === 0,
  };
}

const interesting8 = [0, 1, 0x7f, 0x80, 0xff, 0x2f, 0x25, 0x3f, 0x23, 0x3b, 0x2c, 0x3d, 0x26, 0x0a, 0x0d, 0x5c, 0x22, 0xc0, 0xe0, 0xf0];

/** One mutated copy of `input` (a Uint8Array), at most `maxLength` bytes long. */
export function mutate(input, { random, maxLength, dictionary = [], corpus = [] }) {
  let data = Array.from(input);
  const rounds = 1 + random.below(random.chance(4) ? 16 : 4);
  for (let r = 0; r < rounds; r++) {
    const at = () => random.below(data.length + 1);
    switch (random.below(14)) {
    case 0: if (data.length) { const i = random.below(data.length); data[i] ^= 1 << random.below(8); } break;
    case 1: if (data.length) data[random.below(data.length)] = random.below(256); break;
    case 2: if (data.length) data[random.below(data.length)] = interesting8[random.below(interesting8.length)]; break;
    case 3: { const n = 1 + random.below(8), i = at(); const bytes = Array.from({ length: n }, () => random.below(256)); data.splice(i, 0, ...bytes); break; }
    case 4: if (data.length) { const i = random.below(data.length); data.splice(i, 1 + random.below(Math.min(16, data.length - i))); } break;
    case 5: if (data.length) { // copy a range elsewhere (repeats grow structure)
      const i = random.below(data.length), n = 1 + random.below(Math.min(64, data.length - i));
      data.splice(at(), 0, ...data.slice(i, i + n)); break; }
    case 6: case 7: if (dictionary.length) { const token = dictionary[random.below(dictionary.length)]; data.splice(at(), 0, ...token); } break;
    case 8: if (dictionary.length && data.length) { // overwrite with a token
      const token = dictionary[random.below(dictionary.length)], i = random.below(data.length);
      data.splice(i, Math.min(token.length, data.length - i), ...token); break; }
    case 9: if (corpus.length) { // splice: our prefix, another entry's suffix
      const other = corpus[random.below(corpus.length)];
      if (other.length) data = data.slice(0, at()).concat(Array.from(other.subarray(random.below(other.length)))); }
      break;
    case 10: if (data.length) { // a small arithmetic change
      const i = random.below(data.length); data[i] = (data[i] + (random.below(35) - 17)) & 255; } break;
    case 11: case 12: if (dictionary.length) { // replace a whole 0x00-separated field with a token
      const i = random.below(data.length + 1);
      let start = i, end = i;
      while (start > 0 && data[start - 1] !== 0) start--;
      while (end < data.length && data[end] !== 0) end++;
      let token = dictionary[random.below(dictionary.length)];
      if (token.length > 1 && token[token.length - 1] === 0) token = token.subarray(0, -1);
      data.splice(start, end - start, ...token); break; }
    case 13: if (data.length) { // drop a whole field (and its separator)
      const i = random.below(data.length);
      let start = i, end = i;
      while (start > 0 && data[start - 1] !== 0) start--;
      while (end < data.length && data[end] !== 0) end++;
      data.splice(start, end - start + 1); break; }
    }
  }
  if (data.length > maxLength) data.length = maxLength;
  return Uint8Array.from(data);
}
