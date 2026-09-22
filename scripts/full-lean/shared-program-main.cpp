// Experimental full-runtime application dispatcher. It calls the generated
// application C main before ordinary compiler initialization; Lean APIs are unchanged.
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <dlfcn.h>

extern "C" int lean_main(int, char **);
extern "C" int lasm_tool_lake_main(int, char **);
extern "C" int lasm_tool_leanc_main(int, char **);
extern "C" int lasm_tool_leanir_main(int, char **);
extern "C" int lasm_tool_leanchecker_main(int, char **);

int main(int argc, char **argv) {
    const char *tool = std::getenv("LASM_FULL_ENTRYPOINT");
    if (tool) {
        if (!std::strcmp(tool, "lake")) return lasm_tool_lake_main(argc, argv);
        if (!std::strcmp(tool, "leanc")) return lasm_tool_leanc_main(argc, argv);
        if (!std::strcmp(tool, "leanir")) return lasm_tool_leanir_main(argc, argv);
        if (!std::strcmp(tool, "leanchecker")) return lasm_tool_leanchecker_main(argc, argv);
        if (!std::strcmp(tool, "compiled")) {
            static bool dispatching = false;
            if (dispatching) {
                std::fprintf(stderr, "Compiled program main resolved to the dispatcher\n");
                return 127;
            }
            const char *path = std::getenv("LASM_FULL_PROGRAM");
            if (!path || !*path) {
                std::fprintf(stderr, "Missing compiled program path\n");
                return 127;
            }
            void *library = dlopen(path, RTLD_NOW | RTLD_GLOBAL);
            if (!library) {
                const char *error = dlerror();
                std::fprintf(stderr, "Cannot load compiled program: %s\n", error ? error : "unknown error");
                return 127;
            }
            dlerror();
            // Emscripten's shared linker retains C main under this ABI name.
            // Look up the side module directly; the base also exports a main.
            auto entry = reinterpret_cast<int (*)(int, char **)>(dlsym(library, "__main_argc_argv"));
            const char *error = dlerror();
            if (error || !entry) {
                std::fprintf(stderr, "Cannot resolve compiled program main: %s\n",
                    error ? error : "missing or conflicting entry point");
                return 127;
            }
            if (char *originalName = std::getenv("LASM_FULL_ARGV0")) argv[0] = originalName;
            dispatching = true;
            int result = entry(argc, argv);
            dispatching = false;
            return result;
        }
    }
    return lean_main(argc, argv);
}
