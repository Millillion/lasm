Three small wasm-ld links and their maps, for test/link-validation.test.mjs.
Built with the managed link toolchain's clang and wasm-ld (LLD 24.0.0, Emscripten 6.0.9):

    clang --target=wasm64-unknown-unknown -O1 -ffunction-sections -fdata-sections -matomics -mbulk-memory -c a.c -o a.o  # and b.c
    wasm-ld -mwasm64 --shared-memory --max-memory=1048576 -o shared.wasm a.o b.o -Map=shared.map --export=helper --gc-sections
    wasm-ld -mwasm64 -o active.wasm a.o b.o -Map=active.map --strip-debug --export=helper
    wasm-ld -mwasm64 --import-memory --shared-memory --max-memory=1048576 -o imported.wasm a.o b.o -Map=imported.map --export=helper --strip-debug

shared and imported have passive segments (initialized by __wasm_init_memory,
the .bss by its memory.fill); active has active segments.
