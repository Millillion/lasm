#ifdef __cplusplus
#error C inputs must retain C semantics
#endif
#include <stdio.h>

extern int answer(void);

int main(void) {
    int value = answer();
    printf("%d\n", value);
    return value != 42;
}
