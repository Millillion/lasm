// JavaScript classes of test/fixtures/js-core, the recipes of docs/JS_BINDINGS.md
// ("JavaScript classes"): the class is JavaScript in the project's own file, and
// its methods call Lean functions passed in (Function.ofFn / ofSyncFn).

// An Error subclass, so that JavaScript callers can test `instanceof NotFound`.
export class NotFound extends Error {
  constructor(path) {
    super(`no such page: ${path}`);
    this.name = 'NotFound';
    this.path = path;
  }
}
export const isNotFound = e => e instanceof NotFound && e instanceof Error;
export function find(path) { throw new NotFound(path); }

// A custom element whose lifecycle callbacks are Lean functions.
export function defineGreeting(tag, connected, attributeChanged) {
  customElements.define(tag, class extends HTMLElement {
    static observedAttributes = ['name'];
    connectedCallback() { connected(this); }
    attributeChangedCallback(name, oldValue, newValue) { attributeChanged(this, name, newValue); }
  });
}
