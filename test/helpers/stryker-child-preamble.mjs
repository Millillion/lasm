// A generated application entry point embeds functions of src/ by their source
// text (Function.prototype.toString; src/application-output.mjs). Under mutation
// testing that text is Stryker's instrumented code, which calls Stryker's switch
// functions. Child processes that run such an entry point import this file first
// (`node --import`): it defines those functions as Stryker's own preamble does,
// with the active mutant from __STRYKER_ACTIVE_MUTANT__, so the child runs the
// same mutant as the test. Outside mutation testing it does nothing observable.
globalThis.stryMutAct_9fa48 ??= id => process.env.__STRYKER_ACTIVE_MUTANT__ === id;
globalThis.stryCov_9fa48 ??= () => {};
