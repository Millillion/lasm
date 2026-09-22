extern int l_registry_add(int);
extern int l_shared_data;
extern int l_missing_weak(void) __attribute__((weak));
static int (*volatile imported_pointer)(int) = l_registry_add;
int plugin_direct(void) { return l_registry_add(l_shared_data); }
int plugin_indirect(void) { return imported_pointer(l_shared_data); }
int plugin_missing(void) { return l_missing_weak == 0; }
