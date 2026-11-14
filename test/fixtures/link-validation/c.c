int __real_helper(int x);
int __wrap_helper(int x) { return __real_helper(x) + 1; }
