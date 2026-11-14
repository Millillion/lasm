static int sq(int x) { return x * 3; }
int bss_big[1000];
int helper(int x) { bss_big[x] = x; return sq(x) + bss_big[x+1]; }
void _start(void) {}
