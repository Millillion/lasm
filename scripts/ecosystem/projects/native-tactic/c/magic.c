#include <lean/lean.h>
/* Native code that a tactic calls while Lean elaborates (as lean-smt or
   LeanCopilot call solvers and models): not needed by the deployed program. */
LEAN_EXPORT uint64_t tac_magic(uint64_t n) { return n * n + 1; }
