// Minimal legacy try/catch control. The stock engine must validate and execute
// this exact bytecode before helper rejection/conversion is assessed.
export const legacyExceptionBytes = Uint8Array.of(
  0, 97, 115, 109, 1, 0, 0, 0,
  1, 9, 2, 0x60, 0, 1, 0x7e, 0x60, 1, 0x7e, 0,
  3, 2, 1, 0,
  13, 3, 1, 0, 1,
  7, 7, 1, 3, 114, 117, 110, 0, 0,
  10, 13, 1, 11, 0, 0x06, 0x7e, 0x42, 7, 0x08, 0, 0x07, 0, 0x0b, 0x0b,
);
