// Synthetic counts exercise the real imported ABI without large allocations.
// The production lasm_node_call and lasm_node_start implementations are retained.
addToLibrary({
  lasm_probe_begin__deps: ['$lasmFullRPC'],
  lasm_probe_begin__sig: 'vji',
  lasm_probe_begin: function (length, failed) {
    Module.lasmProbeLength = length;
    Module.lasmProbeInput = 0;
    lasmFullRPC.call = function (kind, operation, handle, argument, input, inputLength) {
      Module.lasmProbeInput = inputLength;
      if (kind === 'start') return { id: 1 };
      return { error: Boolean(failed), bytes: { length: Number(Module.lasmProbeLength) } };
    };
  },
  lasm_probe_input_length__sig: 'j',
  lasm_probe_input_length: function () { return BigInt(Module.lasmProbeInput); },
});
