// Synthetic counts exercise the real imported ABI without large allocations.
// The production lasm_node_call and lasm_node_start implementations are retained.
addToLibrary({
  lasm_probe_begin__deps: ['$lasmFullRPC', 'malloc'],
  lasm_probe_begin__sig: 'vji',
  lasm_probe_begin: function (length, failed) {
    Module.lasmProbeLength = length;
    Module.lasmProbeInput = 0;
    if (!Module.lasmProbeStartId) {
      Module.lasmProbeStartId = Number(_malloc(8));
      HEAPU64[Module.lasmProbeStartId / 8] = 1n;
    }
    lasmFullRPC.call = function (kind, operation, handle, argument, input, inputLength) {
      Module.lasmProbeInput = inputLength;
      // Slot transport result shape: the reply is never copied by this probe.
      // A start reply holds its 8-byte id at pointer.
      if (kind === 'start') return { error: false, pointer: Module.lasmProbeStartId, length: 8 };
      return { error: Boolean(failed), pointer: 0, length: Number(Module.lasmProbeLength) };
    };
  },
  lasm_probe_input_length__sig: 'j',
  lasm_probe_input_length: function () { return BigInt(Module.lasmProbeInput); },
});
