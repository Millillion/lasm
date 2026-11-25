// Lasm.target (library/Lasm/Target.lean) is stamped in at link time, the same
// way on every target: each link of a program links a generated C object that
// defines `lasm_target`, which returns the index of the `--target` it is linked
// for in buildTargets (src/cli-names.mjs), the order of Lasm.Target's
// constructors (test/lasm-target.test.mjs). The Node build links it
// (src/application-link.mjs: node, or the function platform it is built for);
// the edge, browser and WASI links relink that build and replace its object
// with their own (src/edge/edge-link.mjs, src/wasi/wasi-link.mjs).
import { buildTargets } from './cli-names.mjs';

/** The stamp object's file name in a link's work directory, by which the relinks find the Node build's. */
export const targetStampObject = 'lasm-target.o';

/** The C source of the stamp for `target`. */
export function targetStampSource(target) {
  const index = buildTargets.indexOf(target);
  if (index < 0) throw new Error(`Unknown target ${JSON.stringify(target)}`);
  return `/* Lasm.target: this program is linked for --target ${target} (src/target-stamp.mjs). */\n`
    + '#include <stdint.h>\n'
    + `uint8_t lasm_target(void *unit) { (void)unit; return ${index}; }\n`;
}
