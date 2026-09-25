// Deterministic decoder inputs; the integration oracle executes the unchanged
// functions extracted from the pinned SDK's already-generated application glue.
export function emscriptenConsoleCases() {
  const cases = [{ name: 'null', nullPointer: true, bytes: [] }];
  for (const [name, text] of [['empty', ''], ['short-unicode', 'λ 雪 😀'], ['long-unicode', '雪😀'.repeat(12)],
    ['ascii-16', 'a'.repeat(16)], ['ascii-17', 'a'.repeat(17)], ['format-text', '%s %d\n\t']]) {
    cases.push({ name, bytes: Buffer.from(text + '\0ignored') });
  }
  for (const length of [15, 16, 17, 65534, 65535, 65536])
    cases.push({ name: `boundary-${length}`, bytes: Buffer.from('x'.repeat(length) + '😀雪\0tail') });
  for (let lead = 0; lead < 256; lead++) {
    cases.push({ name: `lead-${lead}-nul-tail`, bytes: [lead, 0, 0xbf, 0x81, 0] });
    cases.push({ name: `lead-${lead}-continuations`, bytes: [lead, 0xbf, 0xbf, 0xbf, 0] });
    cases.push({ name: `lead-${lead}-long`, bytes: [...Buffer.alloc(17, 97), lead, 0xbf, 0xbf, 0xbf, 0] });
  }
  for (const [name, bytes] of [['overlong', [0xc0, 0xaf]], ['surrogate', [0xed, 0xa0, 0x80]],
    ['bom', [0xef, 0xbb, 0xbf]], ['partial-4', [0xf0]], ['partial-3', [0xe4, 0xb8]],
    ['end-4', [0xf0, 0x9f, 0x98, 0x80]], ['heap-end', []]]) {
    cases.push({ name, endOfMemory: true, bytes });
  }
  return cases;
}
