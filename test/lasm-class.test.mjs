// lasm:class (src/lasm-modules/class.mjs), behind Lasm.JS.Class.define (A6.2):
// a real class, extending a base, whose constructor, methods and getters call
// the functions they were given with `this` first.
import { test } from 'node:test';
import assert from 'node:assert/strict';
import { define } from '../src/lasm-modules/class.mjs';

test('a class: named, constructed after super, methods and getters with this first, statics', () => {
  const calls = [];
  const C = define('Counter', null, (self, start) => { calls.push(['construct', start]); self.count = start ?? 0; },
    [['increment', (self, by) => (self.count += by ?? 1)]], [['double', self => 2 * self.count]], [['kind', 'counter']]);
  assert.equal(C.name, 'Counter');
  assert.equal(C.kind, 'counter');
  const c = new C(5);
  assert.deepEqual(calls, [['construct', 5]]);
  assert.ok(c instanceof C);
  assert.equal(c.increment(2), 7);
  assert.equal(c.double, 14);
  assert.equal(C.prototype.increment.name, 'increment');
  assert.equal(Object.keys(c).join(), 'count');
  assert.throws(() => { c.double = 1; }, TypeError);
});

test('extends: super gets the arguments; instanceof, the prototype chain and overriding work', () => {
  const E = define('NotFound', Error, (self, message) => { self.status = 404; }, [['toString', self => `${self.name}: ${self.message} (${self.status})`]], [], []);
  const e = new E('no such page');
  assert.ok(e instanceof E && e instanceof Error);
  assert.equal(e.message, 'no such page');
  assert.equal(String(e), 'Error: no such page (404)');
  class Base { constructor(x) { this.x = x; } hello() { return 'base ' + this.x; } }
  const D = define('Derived', Base, null, [], [['shout', self => self.hello().toUpperCase()]], null);
  const d = new D('y');
  assert.equal(d.shout, 'BASE Y');
  assert.equal(Object.getPrototypeOf(D), Base);
  assert.throws(() => define('Bad', 42, null, [], [], []), { name: 'TypeError', message: 'Lasm.JS.Class.define Bad: the base class is not a constructor' });
  // No constructor function and no lists: an empty class.
  assert.equal(new (define('Empty', undefined, null, null, null, null))().constructor.name, 'Empty');
});
