#include <lean/lean.h>
#include <stdint.h>
typedef uint64_t (*op_t)(uint64_t);
static uint64_t twice(uint64_t x) { return 2 * x; }
static uint64_t square(uint64_t x) { return x * x; }
static uint64_t scaled(uint64_t x) { return CTABLE_SCALE * x; }
static struct { const char *name; op_t op; } table[] = { {"twice", twice}, {"square", square}, {"scaled", scaled} };
LEAN_EXPORT uint64_t ctable_apply(uint64_t which, uint64_t x) { return table[which % 3].op(x); }
LEAN_EXPORT lean_obj_res ctable_name(uint64_t which) { return lean_mk_string(table[which % 3].name); }
