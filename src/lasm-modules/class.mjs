// lasm:class, the builtin module behind Lasm.JS.Class.define (A6.2,
// docs/JS_BINDINGS.md "JavaScript classes"): a real `class … extends Base`,
// made without eval, whose constructor and methods call Lean functions with
// `this` as their first argument.

/** The class `name` extending `Base` (Object when null): `construct(this,
 * ...args)` runs after `super(...args)`; each of `methods` is
 * [name, f] with f(this, ...args); each of `getters` is [name, f] with f(this);
 * `statics` are [name, value] pairs set on the class itself. */
export function define(name, Base, construct, methods, getters, statics) {
  const B = Base ?? Object;
  if (typeof B !== 'function') throw new TypeError(`Lasm.JS.Class.define ${name}: the base class is not a constructor`);
  const C = class extends B {
    constructor(...args) {
      super(...args);
      if (construct) construct(this, ...args);
    }
  };
  Object.defineProperty(C, 'name', { value: name });
  for (const [key, f] of methods ?? [])
    Object.defineProperty(C.prototype, key, { value: { [key](...args) { return f(this, ...args); } }[key], writable: true, configurable: true });
  for (const [key, f] of getters ?? [])
    Object.defineProperty(C.prototype, key, { get() { return f(this); }, configurable: true });
  for (const [key, value] of statics ?? []) Object.defineProperty(C, key, { value, writable: true, configurable: true });
  return C;
}
