// JSPI / sync-import micro benchmark (no Lean).
#include <emscripten.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
extern void js_noop(void);
extern double js_random(void);
extern int js_await_resolved(void);   // suspending import (JSPI)
extern double js_now(void);
extern int js_async_sync_value(void); // __async import whose JS returns a plain number
extern int js_sync_callback(int n);
extern int js_depth_probe(void);   // JS calls back into Wasm export `wasm_add` n times

EMSCRIPTEN_KEEPALIVE int wasm_add(int a, int b) { return a + b; }

static int cmpd(const void *a, const void *b) { double x = *(double*)a, y = *(double*)b; return x < y ? -1 : x > y; }
static double samples[200000];
static void report(const char *name, int n) {
  qsort(samples, n, sizeof(double), cmpd);
  printf("{\"bench\":\"%s\",\"n\":%d,\"medianNs\":%.1f,\"p99Ns\":%.1f}\n", name, n, samples[n/2]*1e6, samples[(int)(n*0.99)]*1e6);
}
#define BENCH(name, expr) do { \
  for (int i = 0; i < 20000; i++) { expr; } \
  double t0 = js_now(); for (int i = 0; i < 200000; i++) { expr; } double t1 = js_now(); \
  printf("{\"bench\":\"%s\",\"batchMeanNs\":%.1f}\n", name, (t1 - t0) * 1e6 / 200000); \
  for (int i = 0; i < 200000; i++) { double a = js_now(); expr; samples[i] = js_now() - a; } \
  report(name, 200000); } while (0)

static int depth_reached;
__attribute__((noinline)) int recurse(int n) { volatile char pad[64]; pad[0] = n; depth_reached = n; return n == 0 ? pad[0] : recurse(n - 1) + pad[0]; }
EMSCRIPTEN_KEEPALIVE int probe_depth(int n) { return recurse(n); }
EMSCRIPTEN_KEEPALIVE int get_depth(void) { return depth_reached; }

static void *thread_main(void *arg) { (void)arg; volatile double r = 0; for (int i = 0; i < 1000; i++) r += js_random();
#ifdef WITH_JSPI
  for (int i = 0; i < 1000; i++) r += js_async_sync_value();
  double t0 = js_now(); for (int i = 0; i < 1000; i++) r += js_await_resolved(); double t1 = js_now();
  printf("{\"thread_await_resolved_meanNs\":%.1f}\n", (t1 - t0) * 1e6 / 1000);
#endif
  printf("{\"thread\":\"ok\",\"sum\":%d}\n", r > 0); return 0; }

int main(int argc, char **argv) {
  if (argc > 2) { printf("{\"depthOk\":%d}\n", probe_depth(atoi(argv[2]))); return 0; } if (argc > 1) { printf("{\"maxDepth\":%d}\n", js_depth_probe()); return 0; }
  volatile double sink = 0;
  BENCH("clock", (void)0);
  BENCH("sync_noop", js_noop());
  BENCH("sync_random", sink += js_random());
#ifdef WITH_JSPI
  BENCH("await_resolved", sink += js_await_resolved());
  BENCH("async_import_sync_value", sink += js_async_sync_value());
#endif
  BENCH("sync_callback_x1", sink += js_sync_callback(1));
  pthread_t t; if (pthread_create(&t, 0, thread_main, 0) == 0) pthread_join(t, 0); else printf("{\"thread\":\"failed\"}\n");
  return 0;
}
