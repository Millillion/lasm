#ifndef LASM_WASMTIME_CANONICAL_IMPORTS_H
#define LASM_WASMTIME_CANONICAL_IMPORTS_H
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Re-export the instance's own imported funcref before compiling. Wasmtime may
// wrap a host Func in a different VMFuncRef for an instance's element segments.
// Comparing the original host handle with that table entry loses C pointer
// equality. Private exports expose the canonical reference using public APIs.
#define LASM_CANONICAL_IMPORT_PREFIX "\0lasm.import."
static inline size_t lasm_canonical_import_name(uint32_t ordinal, char name[64]) {
    const size_t prefix = sizeof(LASM_CANONICAL_IMPORT_PREFIX) - 1;
    memcpy(name, LASM_CANONICAL_IMPORT_PREFIX, prefix);
    return prefix + (size_t)snprintf(name + prefix, 64 - prefix, "%u", ordinal);
}

#ifdef LASM_CANONICAL_IMPORTS_IMPLEMENTATION
// This preparatory transform is restricted to the private probe's module
// format. Unsupported metadata fails explicitly; Wasmtime still validates the
// complete transformed module. Code, elements and existing exports are copied
// byte-for-byte. Nothing is loaded from an external compiled-code cache here.
typedef struct { const uint8_t *at, *end; } lasm_wasm_reader;
typedef struct { uint32_t ordinal, index; } lasm_import_export;
static bool lasm_read_integer(lasm_wasm_reader *r, unsigned bits, uint64_t *value) {
    *value = 0;
    for (unsigned i = 0; i < (bits + 6) / 7; i++) {
        if (r->at == r->end) return false;
        uint8_t byte = *r->at++;
        unsigned remaining = bits - i * 7;
        if (remaining < 7 && (byte & 127) >= (1u << remaining)) return false;
        *value |= (uint64_t)(byte & 127) << (i * 7);
        if (!(byte & 128)) return true;
    }
    return false;
}
static bool lasm_read_name(lasm_wasm_reader *r, const uint8_t **name, size_t *size) {
    uint64_t length;
    if (!lasm_read_integer(r, 32, &length) || length > (size_t)(r->end - r->at)) return false;
    *name = r->at; *size = (size_t)length; r->at += length; return true;
}
static bool lasm_skip_value_type(lasm_wasm_reader *r) {
    if (r->at == r->end) return false;
    uint8_t type = *r->at++;
    if (type == 0x63 || type == 0x64) {
        // Signed heap-type indices can use a negative predefined reference.
        for (unsigned i = 0; i < 5; i++) {
            if (r->at == r->end) return false;
            if (!(*r->at++ & 128)) return true;
        }
        return false;
    }
    return type >= 0x66 && type <= 0x7f;
}
static bool lasm_skip_limits(lasm_wasm_reader *r) {
    uint64_t flags, ignored;
    if (!lasm_read_integer(r, 32, &flags) || flags & ~UINT64_C(7)) return false;
    unsigned bits = flags & 4 ? 64 : 32;
    return lasm_read_integer(r, bits, &ignored) && (!(flags & 1) || lasm_read_integer(r, bits, &ignored));
}
static size_t lasm_leb_size(uint32_t value) {
    size_t size = 1; while (value >= 128) { value >>= 7; size++; } return size;
}
static uint8_t *lasm_write_leb(uint8_t *out, uint32_t value) {
    do { uint8_t byte = value & 127; value >>= 7; *out++ = byte | (value ? 128 : 0); } while (value);
    return out;
}
static int lasm_canonicalize_imports(const uint8_t *bytes, size_t length,
    uint8_t **output, size_t *output_length, uint32_t *added,
    char *error, size_t capacity) {
    *output = NULL; *output_length = 0; *added = 0;
    const uint8_t header[] = {0, 97, 115, 109, 1, 0, 0, 0};
    lasm_import_export *functions = NULL;
    const char *problem = "invalid canonical-import metadata";
    if (length < 8 || memcmp(bytes, header, 8)) goto failed;
    lasm_wasm_reader file = {bytes + 8, bytes + length}, imports = {0}, exports = {0};
    const uint8_t *start = bytes + length, *end = start;
    bool has_exports = false, has_imports = false;
    while (file.at != file.end) {
        const uint8_t *section = file.at;
        uint8_t kind = *file.at++; uint64_t size;
        if (!lasm_read_integer(&file, 32, &size) || size > (size_t)(file.end - file.at)) goto failed;
        if (kind == 2) {
            if (has_imports) goto failed;
            has_imports = true; imports = (lasm_wasm_reader){file.at, file.at + size};
        }
        if (kind == 7) {
            if (has_exports) goto failed;
            has_exports = true; exports = (lasm_wasm_reader){file.at, file.at + size};
            start = section; end = file.at + size;
        } else if (!has_exports && start == bytes + length &&
            (kind == 8 || kind == 9 || kind == 10 || kind == 11 || kind == 12)) {
            // Tag section 13 precedes globals/exports despite its numeric id.
            start = end = section;
        }
        file.at += size;
    }
    uint64_t import_count = 0, export_count = 0, ignored;
    uint32_t count = 0;
    if (has_imports) {
        if (!lasm_read_integer(&imports, 32, &import_count) ||
            import_count > (size_t)(imports.end - imports.at) / 4 ||
            import_count > SIZE_MAX / sizeof(*functions)) goto failed;
        functions = calloc(import_count ? (size_t)import_count : 1, sizeof(*functions));
        if (!functions) { problem = "canonical-import allocation failed"; goto failed; }
        for (uint32_t ordinal = 0; ordinal < import_count; ordinal++) {
            const uint8_t *name; size_t size;
            if (!lasm_read_name(&imports, &name, &size) || !lasm_read_name(&imports, &name, &size) || imports.at == imports.end) goto failed;
            uint8_t kind = *imports.at++;
            if (kind == 0) {
                if (!lasm_read_integer(&imports, 32, &ignored)) goto failed;
                functions[count] = (lasm_import_export){ordinal, count}; count++;
            } else if (kind == 1) {
                if (!lasm_skip_value_type(&imports) || !lasm_skip_limits(&imports)) goto failed;
            } else if (kind == 2) {
                if (!lasm_skip_limits(&imports)) goto failed;
            } else if (kind == 3) {
                if (!lasm_skip_value_type(&imports) || imports.at == imports.end || *imports.at++ > 1) goto failed;
            } else if (kind == 4) {
                if (imports.at == imports.end || *imports.at++ != 0 || !lasm_read_integer(&imports, 32, &ignored)) goto failed;
            } else goto failed;
        }
        if (imports.at != imports.end) goto failed;
    }
    const uint8_t *original_exports = NULL; size_t original_export_bytes = 0;
    if (has_exports) {
        if (!lasm_read_integer(&exports, 32, &export_count)) goto failed;
        original_exports = exports.at; original_export_bytes = (size_t)(exports.end - exports.at);
        for (uint64_t i = 0; i < export_count; i++) {
            const uint8_t *name; size_t size;
            if (!lasm_read_name(&exports, &name, &size)) goto failed;
            if (size >= sizeof(LASM_CANONICAL_IMPORT_PREFIX) - 1 &&
                !memcmp(name, LASM_CANONICAL_IMPORT_PREFIX, sizeof(LASM_CANONICAL_IMPORT_PREFIX) - 1)) {
                problem = "reserved canonical-import export name"; goto failed;
            }
            if (exports.at == exports.end || *exports.at++ > 4 || !lasm_read_integer(&exports, 32, &ignored)) goto failed;
        }
        if (exports.at != exports.end) goto failed;
    }
    if (!count) { free(functions); return 0; }
    if (export_count > UINT32_MAX - count) goto failed;
    size_t payload = lasm_leb_size((uint32_t)export_count + count) + original_export_bytes;
    for (uint32_t i = 0; i < count; i++) {
        char name[64]; size_t size = lasm_canonical_import_name(functions[i].ordinal, name);
        if (payload > UINT32_MAX - size - 12) goto failed;
        payload += lasm_leb_size((uint32_t)size) + size + 1 + lasm_leb_size(functions[i].index);
    }
    if (payload > UINT32_MAX || length > SIZE_MAX - payload - 6) goto failed;
    size_t total = length - (size_t)(end - start) + 1 + lasm_leb_size((uint32_t)payload) + payload;
    uint8_t *result = malloc(total);
    if (!result) { problem = "canonical-import output allocation failed"; goto failed; }
    memcpy(result, bytes, (size_t)(start - bytes));
    uint8_t *cursor = result + (start - bytes); *cursor++ = 7;
    cursor = lasm_write_leb(cursor, (uint32_t)payload);
    cursor = lasm_write_leb(cursor, (uint32_t)export_count + count);
    if (original_export_bytes) { memcpy(cursor, original_exports, original_export_bytes); cursor += original_export_bytes; }
    for (uint32_t i = 0; i < count; i++) {
        char name[64]; size_t size = lasm_canonical_import_name(functions[i].ordinal, name);
        cursor = lasm_write_leb(cursor, (uint32_t)size); memcpy(cursor, name, size); cursor += size;
        *cursor++ = 0; cursor = lasm_write_leb(cursor, functions[i].index);
    }
    memcpy(cursor, end, (size_t)(bytes + length - end));
    free(functions); *output = result; *output_length = total; *added = count; return 0;
failed:
    free(functions);
    if (capacity) snprintf(error, capacity, "%s", problem);
    return 1;
}
#endif
#endif
