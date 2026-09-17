#include <stdio.h>

__attribute__((export_name("say_hello")))
int say_hello(void) { return puts("Lasm WASI probe"); }
