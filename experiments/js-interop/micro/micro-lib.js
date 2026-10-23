addToLibrary({
  js_depth_probe__sig: 'i', js_depth_probe: function () { var lo = 1000, hi = 100000000; while (lo < hi) { var mid = Math.floor((lo + hi + 1) / 2); try { _probe_depth(mid); lo = mid; } catch (e) { if (!(e instanceof RangeError)) throw e; hi = mid - 1; } } return lo; },
  js_noop__sig: 'v', js_noop: function () {},
  js_random__sig: 'd', js_random: function () { return Math.random(); },
  js_now__sig: 'd', js_now: function () { return performance.now(); },
  js_sync_callback__sig: 'ii', js_sync_callback: function (n) { var s = 0; for (var i = 0; i < n; i++) s += _wasm_add(i, 1); return s; },
#if ASYNCIFY == 2
  js_async_sync_value__sig: 'i', js_async_sync_value__async: true, js_async_sync_value: function () { return 7; },
  js_await_resolved__sig: 'i', js_await_resolved__async: true,
  js_await_resolved: async function () { return await Promise.resolve(1); },
#endif
});
