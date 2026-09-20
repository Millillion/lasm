// Private host IDs cross signed i32 Wasm imports. Reuse the positive range
// instead of letting a long-lived instance's counters overflow that boundary.
export class HandleTable extends Map {
  #first;
  #last;
  #next;
  constructor({ first = 1, last = 0x7fffffff, entries = [] } = {}) {
    super(entries);
    if (!Number.isInteger(first) || !Number.isInteger(last) || first < 1 || last < first || last > 0x7fffffff)
      throw new RangeError('Host handles must fit the positive signed i32 range');
    this.#first = this.#next = first;
    this.#last = last;
  }
  allocate(value) {
    const start = this.#next;
    do {
      const id = this.#next;
      this.#next = id === this.#last ? this.#first : id + 1;
      if (!this.has(id)) { this.set(id, value); return id; }
    } while (this.#next !== start);
    throw Object.assign(new Error('Host resource handle table is full'), { code: 'EMFILE' });
  }
}
