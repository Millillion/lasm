// Structure-aware reading of a fuzz input (like libFuzzer's FuzzedDataProvider):
// targets turn the mutated bytes into argument lists, events and patch frames.
// Past the end every read returns zeros or empty values, so any byte string
// is a valid input.
const utf8 = new TextDecoder();

export class Input {
  constructor(bytes) { this.bytes = bytes; this.p = 0; }
  get done() { return this.p >= this.bytes.length; }
  byte() { return this.p < this.bytes.length ? this.bytes[this.p++] : 0; }
  bool() { return (this.byte() & 1) === 1; }
  /** An integer in [0, n). */
  int(n) { if (n <= 1) return 0; let x = this.byte(); if (n > 256) x = x * 256 + this.byte(); return x % n; }
  pick(items) { return items[this.int(items.length)]; }
  /** Bytes up to the next 0x00 (consumed), or to the end. */
  field() {
    const start = this.p;
    while (this.p < this.bytes.length && this.bytes[this.p] !== 0) this.p++;
    const out = this.bytes.subarray(start, this.p);
    if (this.p < this.bytes.length) this.p++;
    return out;
  }
  /** A field as text: UTF-8 (invalid sequences become U+FFFD), or Latin-1 when the
   * field starts with 0x01 (as Node gives raw header bytes). */
  text() {
    const f = this.field();
    if (f[0] === 1) return String.fromCharCode(...f.subarray(1));
    return utf8.decode(f);
  }
  rest() { const out = this.bytes.subarray(this.p); this.p = this.bytes.length; return out; }
}

/** Fields joined with 0x00: the inverse of Input#field, for writing seeds. */
export function fields(...parts) {
  const enc = new TextEncoder();
  const chunks = parts.map(part => typeof part === 'string' ? enc.encode(part) : Uint8Array.from(part));
  const out = [];
  chunks.forEach((c, i) => { if (i) out.push(0); out.push(...c); });
  return Uint8Array.from(out);
}
