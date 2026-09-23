#include <emscripten/emmalloc.h>
#include <emscripten/heap.h>
#include <errno.h>
#include <pthread.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CHECK(condition) do { if (!(condition)) { \
  fprintf(stderr, "check failed at line %d: %s\n", __LINE__, #condition); \
  exit(1); } } while (0)

static const size_t boundary = (size_t)1 << 32;

static void allocator(void) {
  const size_t size = boundary + 65536;
  const size_t positions[] = {0, 4096, ((size_t)1 << 31),
                              ((size_t)1 << 32) - 1, ((size_t)1 << 32),
                              ((size_t)1 << 32) + 65535};
  // Touch only a few pages. This checks 64-bit region metadata without
  // committing the multi-gigabyte reservation to physical memory.
  unsigned char *large = emmalloc_malloc(size);
  CHECK(large != NULL);
  CHECK(emmalloc_usable_size(large) >= size);
  for (size_t i = 0; i < sizeof(positions) / sizeof(*positions); i++)
    large[positions[i]] = (unsigned char)(17 + i);
  unsigned char *tail = emmalloc_malloc(4096);
  CHECK(tail != NULL);
  memset(tail, 0x5a, 4096);
  for (size_t i = 0; i < sizeof(positions) / sizeof(*positions); i++)
    CHECK(large[positions[i]] == (unsigned char)(17 + i));
  CHECK(emmalloc_validate_memory_regions() == 0);
  emmalloc_free(large);
  size_t histogram[32];
  CHECK(emmalloc_compute_free_dynamic_memory_fragmentation_map(histogram) > 0);
  CHECK(histogram[31] > 0);
  CHECK(emmalloc_validate_memory_regions() == 0);
  large = emmalloc_memalign(65536, size - 131072);
  CHECK(large != NULL && (uintptr_t)large % 65536 == 0);
  CHECK(emmalloc_realloc_try(large, 65536) == large);
  CHECK(emmalloc_validate_memory_regions() == 0);
  emmalloc_free(large);
  for (size_t i = 0; i < 4096; i++) CHECK(tail[i] == 0x5a);
  emmalloc_free(tail);
  CHECK(emmalloc_validate_memory_regions() == 0);
  CHECK(emmalloc_malloc(SIZE_MAX) == NULL);
  CHECK(emmalloc_memalign((size_t)1 << 63, 1024) == NULL);
  CHECK(emmalloc_calloc(SIZE_MAX / 16 + 1, 16) == NULL);
  puts("memory64 allocation, reuse, coalescing, histogram and overflow checks passed");
}

static void *thread_entry(void *argument) {
  volatile unsigned char on_stack[16384];
  on_stack[0] = 12;
  on_stack[sizeof(on_stack) - 1] = 34;
  CHECK(on_stack[0] + on_stack[sizeof(on_stack) - 1] == 46);
  return argument;
}

static void threads(void) {
  pthread_attr_t attr;
  pthread_t thread;
  void *result = NULL;
  CHECK(pthread_attr_init(&attr) == 0);
  // This is larger than the module's declared linear-memory maximum. It
  // must be rejected before memory growth; it is not a host OOM experiment.
  CHECK(pthread_attr_setstacksize(&attr, emscripten_get_heap_max()) == 0);
  CHECK(pthread_create(&thread, &attr, thread_entry, (void *)91) == EAGAIN);
  CHECK(pthread_attr_setstacksize(&attr, boundary + 65536) == 0);
  for (int i = 0; i < 3; i++) {
    int code = pthread_create(&thread, &attr, thread_entry, (void *)91);
    if (code != 0) fprintf(stderr, "pthread_create attempt=%d code=%d heap=%zu\n",
                           i, code, emscripten_get_heap_size());
    CHECK(code == 0);
    CHECK(pthread_join(thread, &result) == 0 && result == (void *)91);
  }
  CHECK(pthread_attr_destroy(&attr) == 0);
  puts("memory64 pthread stack, join, reuse and allocation rejection checks passed");
}

int main(int argc, char **argv) {
  CHECK(sizeof(size_t) == 8);
  CHECK(argc == 2);
  if (!strcmp(argv[1], "allocator")) allocator();
  else if (!strcmp(argv[1], "threads")) threads();
  else CHECK(0);
  return 0;
}
