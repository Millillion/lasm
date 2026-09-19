static int value = 41;
static int get_value() { return value + 1; }
extern "C" int (*shared_factory())() { return &get_value; }
