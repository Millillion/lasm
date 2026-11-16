static int counter = 3;
const char msg[] = "hello world";
int table[100];
__thread int tl = 7;
int helper(int x);
static int sq(int x) { return x * x + counter; }
int (*fp)(int) = sq;
__attribute__((export_name("run"))) int run(int n) { counter += n; return helper(n) + fp(n) + msg[n] + table[n] + tl; }
