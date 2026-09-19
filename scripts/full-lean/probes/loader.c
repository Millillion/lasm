#include <stdio.h>
#include <stdlib.h>

extern int library_value(void);

int main(int argc, char **argv) {
    if (argc != 2 || library_value() != atoi(argv[1])) return 1;
    printf("library value: %d\n", library_value());
    return 0;
}
