// Lean compiler output
// Module: Lasm.JS.Core
// Imports: public import Init public meta import Init public import Std.Data.HashMap public import Std.Async.Basic
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* l_Nat_reprFast(lean_object*);
uint32_t lean_uint8_to_uint32(uint8_t);
uint32_t lean_uint32_shift_left(uint32_t, uint32_t);
uint32_t lean_uint32_lor(uint32_t, uint32_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
uint8_t lean_byte_array_fget(lean_object*, lean_object*);
lean_object* l_IO_ofExcept___at___00IO_Process_output_spec__0___redArg(lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_ByteArray_extract(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_toInt_x3f(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint64_t lean_uint8_to_uint64(uint8_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
double lean_float_of_bits(uint64_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
double fabs(double);
uint64_t lean_float_to_uint64(double);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* lean_float_to_string(double);
double lean_float_of_nat(lean_object*);
uint8_t lean_float_decLt(double, double);
double floor(double);
uint8_t lean_float_beq(double, double);
double l_Float_ofScientific(lean_object*, uint8_t, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
extern lean_object* l_ByteArray_empty;
lean_object* lean_byte_array_push(lean_object*, uint8_t);
uint64_t lean_float_to_bits(double);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint8_t lean_uint64_to_uint8(uint64_t);
lean_object* lean_string_to_utf8(lean_object*);
uint32_t lean_uint32_of_nat(lean_object*);
uint8_t lean_uint32_to_uint8(uint32_t);
uint32_t lean_uint32_shift_right(uint32_t, uint32_t);
lean_object* lean_byte_array_copy_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint64_t lean_uint32_to_uint64(uint32_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_io_map_task(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_io_promise_result_opt(lean_object*);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_io_promise_new();
lean_object* lean_io_wait(lean_object*);
lean_object* l_IO_ofExcept___redArg(lean_object*, lean_object*);
lean_object* l_IO_Promise_result_x21___redArg(lean_object*);
lean_object* l_instMonadEIO___aux__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Async_EAsync_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_abs(lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Except_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_instMonad___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_pure(lean_object*, lean_object*, lean_object*);
lean_object* l_Except_instMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
uint32_t lean_uint32_add(uint32_t, uint32_t);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(lean_object*);
double lean_float_negate(double);
lean_object* lean_int_neg(lean_object*);
uint8_t lean_float_isnan(double);
uint8_t lean_float_isinf(double);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* lean_byte_array_mk(lean_object*);
lean_object* l_Nat_toUInt32___boxed(lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Nat_toUInt64___boxed(lean_object*);
lean_object* lean_uint16_to_nat(uint16_t);
uint8_t lean_byte_array_get(lean_object*, lean_object*);
lean_object* l_Nat_toUInt8___boxed(lean_object*);
lean_object* l_Nat_toUInt16___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_ValuePointed;
lean_object* lasm_js_value_of_handle(uint32_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_valueOfHandle___boxed(lean_object*, lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_valueHandle___boxed(lean_object*);
uint8_t lasm_js_available(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_available___boxed(lean_object*);
static lean_once_cell_t l_Lasm_JS_isAvailable___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_isAvailable___closed__0;
LEAN_EXPORT uint8_t l_Lasm_JS_isAvailable;
LEAN_EXPORT lean_object* l_Lasm_JS_Data_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Data_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Data_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Data_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Data_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Data_undefined_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Data_undefined_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Data_null_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Data_null_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Data_bool_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Data_bool_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Data_number_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Data_number_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Data_string_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Data_string_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Data_bigint_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Data_bigint_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Data_bytes_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Data_bytes_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Data_array_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Data_array_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Data_object_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Data_object_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Data_ref_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Data_ref_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instInhabitedData_default;
LEAN_EXPORT lean_object* l_Lasm_JS_instInhabitedData;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_JS_Data_describe_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Data_describe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "undefined"};
static const lean_object* l_Lasm_JS_Data_describe___closed__0 = (const lean_object*)&l_Lasm_JS_Data_describe___closed__0_value;
static const lean_string_object l_Lasm_JS_Data_describe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lasm_JS_Data_describe___closed__1 = (const lean_object*)&l_Lasm_JS_Data_describe___closed__1_value;
static const lean_string_object l_Lasm_JS_Data_describe___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "boolean false"};
static const lean_object* l_Lasm_JS_Data_describe___closed__2 = (const lean_object*)&l_Lasm_JS_Data_describe___closed__2_value;
static const lean_string_object l_Lasm_JS_Data_describe___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "boolean true"};
static const lean_object* l_Lasm_JS_Data_describe___closed__3 = (const lean_object*)&l_Lasm_JS_Data_describe___closed__3_value;
static const lean_string_object l_Lasm_JS_Data_describe___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "number "};
static const lean_object* l_Lasm_JS_Data_describe___closed__4 = (const lean_object*)&l_Lasm_JS_Data_describe___closed__4_value;
static lean_once_cell_t l_Lasm_JS_Data_describe___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lasm_JS_Data_describe___closed__5;
static const lean_string_object l_Lasm_JS_Data_describe___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Data_describe___closed__6 = (const lean_object*)&l_Lasm_JS_Data_describe___closed__6_value;
static const lean_string_object l_Lasm_JS_Data_describe___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Lasm_JS_Data_describe___closed__7 = (const lean_object*)&l_Lasm_JS_Data_describe___closed__7_value;
static lean_once_cell_t l_Lasm_JS_Data_describe___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lasm_JS_Data_describe___closed__8;
static const lean_string_object l_Lasm_JS_Data_describe___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "string "};
static const lean_object* l_Lasm_JS_Data_describe___closed__9 = (const lean_object*)&l_Lasm_JS_Data_describe___closed__9_value;
static const lean_string_object l_Lasm_JS_Data_describe___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "..."};
static const lean_object* l_Lasm_JS_Data_describe___closed__10 = (const lean_object*)&l_Lasm_JS_Data_describe___closed__10_value;
static const lean_string_object l_Lasm_JS_Data_describe___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "bigint "};
static const lean_object* l_Lasm_JS_Data_describe___closed__11 = (const lean_object*)&l_Lasm_JS_Data_describe___closed__11_value;
static const lean_string_object l_Lasm_JS_Data_describe___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "n"};
static const lean_object* l_Lasm_JS_Data_describe___closed__12 = (const lean_object*)&l_Lasm_JS_Data_describe___closed__12_value;
static const lean_string_object l_Lasm_JS_Data_describe___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Uint8Array of length "};
static const lean_object* l_Lasm_JS_Data_describe___closed__13 = (const lean_object*)&l_Lasm_JS_Data_describe___closed__13_value;
static const lean_string_object l_Lasm_JS_Data_describe___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "array of length "};
static const lean_object* l_Lasm_JS_Data_describe___closed__14 = (const lean_object*)&l_Lasm_JS_Data_describe___closed__14_value;
static const lean_string_object l_Lasm_JS_Data_describe___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "object {"};
static const lean_object* l_Lasm_JS_Data_describe___closed__15 = (const lean_object*)&l_Lasm_JS_Data_describe___closed__15_value;
static const lean_string_object l_Lasm_JS_Data_describe___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_Lasm_JS_Data_describe___closed__16 = (const lean_object*)&l_Lasm_JS_Data_describe___closed__16_value;
static const lean_array_object l_Lasm_JS_Data_describe___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Data_describe___closed__17 = (const lean_object*)&l_Lasm_JS_Data_describe___closed__17_value;
static const lean_string_object l_Lasm_JS_Data_describe___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l_Lasm_JS_Data_describe___closed__18 = (const lean_object*)&l_Lasm_JS_Data_describe___closed__18_value;
static const lean_string_object l_Lasm_JS_Data_describe___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = ", …"};
static const lean_object* l_Lasm_JS_Data_describe___closed__19 = (const lean_object*)&l_Lasm_JS_Data_describe___closed__19_value;
static const lean_string_object l_Lasm_JS_Data_describe___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "JavaScript value (a reference)"};
static const lean_object* l_Lasm_JS_Data_describe___closed__20 = (const lean_object*)&l_Lasm_JS_Data_describe___closed__20_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Data_describe(lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Data_field_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Data_field_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Data_field_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Data_field_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Data_field_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Data_field___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU32(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU32___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64_spec__0___redArg(uint64_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64___closed__0 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64_spec__0(uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushBytes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushBytes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushString(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushString___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_write(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_write___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_encode(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_encode___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Malformed Lasm.JS value (truncated)"};
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32___closed__0 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32___closed__0_value;
static const lean_ctor_object l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32___closed__0_value)}};
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32___closed__1 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64_spec__0___redArg(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32___closed__0_value)}};
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64___closed__0 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64_spec__0(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readRaw___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32___closed__0_value)}};
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readRaw___closed__0 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readRaw___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readRaw(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readRaw___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Malformed Lasm.JS value (invalid UTF-8)"};
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readString___closed__0 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readString___closed__0_value;
static const lean_ctor_object l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readString___closed__0_value)}};
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readString___closed__1 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readString___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readString(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readString___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Wire_read___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Malformed Lasm.JS value (tag "};
static const lean_object* l_Lasm_JS_Wire_read___closed__0 = (const lean_object*)&l_Lasm_JS_Wire_read___closed__0_value;
static const lean_string_object l_Lasm_JS_Wire_read___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_Wire_read___closed__1 = (const lean_object*)&l_Lasm_JS_Wire_read___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Wire_read___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Wire_read___closed__2;
static const lean_ctor_object l_Lasm_JS_Wire_read___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32___closed__0_value)}};
static const lean_object* l_Lasm_JS_Wire_read___closed__3 = (const lean_object*)&l_Lasm_JS_Wire_read___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_read(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_read___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Wire_decode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Malformed Lasm.JS value (trailing bytes)"};
static const lean_object* l_Lasm_JS_Wire_decode___closed__0 = (const lean_object*)&l_Lasm_JS_Wire_decode___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Wire_decode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lasm_JS_Wire_decode___closed__0_value)}};
static const lean_object* l_Lasm_JS_Wire_decode___closed__1 = (const lean_object*)&l_Lasm_JS_Wire_decode___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_decode(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_decode___boxed(lean_object*, lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallKeep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(uint32_t, uint32_t, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallInto___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_data_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_data_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_data_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_data_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_reference_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_reference_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_reference_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_reference_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_instBEqMode_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_instBEqMode_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_instBEqMode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instBEqMode_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instBEqMode___closed__0 = (const lean_object*)&l_Lasm_JS_instBEqMode___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_instBEqMode = (const lean_object*)&l_Lasm_JS_instBEqMode___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_instInhabitedMode_default;
LEAN_EXPORT uint8_t l_Lasm_JS_instInhabitedMode;
static const lean_string_object l_Lasm_JS_decodeAs___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___redArg___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___redArg___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___redArg___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___redArg___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___redArg___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___redArg___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___redArg___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___redArg___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___redArg___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___redArg___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___redArg___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___redArg___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___redArg___closed__6_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___redArg___closed__7;
static const lean_string_object l_Lasm_JS_decodeAs___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___redArg___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___redArg___closed__8_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_instToJSData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lasm_JS_instToJSData___closed__0 = (const lean_object*)&l_Lasm_JS_instToJSData___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_instToJSData = (const lean_object*)&l_Lasm_JS_instToJSData___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSData___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_instFromJSData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instFromJSData___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instFromJSData___closed__0 = (const lean_object*)&l_Lasm_JS_instFromJSData___closed__0_value;
static const lean_string_object l_Lasm_JS_instFromJSData___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lasm.JS.Data"};
static const lean_object* l_Lasm_JS_instFromJSData___closed__1 = (const lean_object*)&l_Lasm_JS_instFromJSData___closed__1_value;
static const lean_ctor_object l_Lasm_JS_instFromJSData___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_instFromJSData___closed__0_value),((lean_object*)&l_Lasm_JS_instFromJSData___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_instFromJSData___closed__2 = (const lean_object*)&l_Lasm_JS_instFromJSData___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_instFromJSData = (const lean_object*)&l_Lasm_JS_instFromJSData___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSValue___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_instToJSValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSValue___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instToJSValue___closed__0 = (const lean_object*)&l_Lasm_JS_instToJSValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_instToJSValue = (const lean_object*)&l_Lasm_JS_instToJSValue___closed__0_value;
static const lean_ctor_object l_Lasm_JS_instFromJSValue___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Data_describe___closed__6_value)}};
static const lean_object* l_Lasm_JS_instFromJSValue___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_instFromJSValue___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSValue___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSValue___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_instFromJSValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instFromJSValue___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instFromJSValue___closed__0 = (const lean_object*)&l_Lasm_JS_instFromJSValue___closed__0_value;
static const lean_string_object l_Lasm_JS_instFromJSValue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lasm.JS.Value"};
static const lean_object* l_Lasm_JS_instFromJSValue___closed__1 = (const lean_object*)&l_Lasm_JS_instFromJSValue___closed__1_value;
static const lean_ctor_object l_Lasm_JS_instFromJSValue___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_instFromJSValue___closed__0_value),((lean_object*)&l_Lasm_JS_instFromJSValue___closed__1_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_instFromJSValue___closed__2 = (const lean_object*)&l_Lasm_JS_instFromJSValue___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_instFromJSValue = (const lean_object*)&l_Lasm_JS_instFromJSValue___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_instToJSString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instToJSString___closed__0 = (const lean_object*)&l_Lasm_JS_instToJSString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_instToJSString = (const lean_object*)&l_Lasm_JS_instToJSString___closed__0_value;
static const lean_ctor_object l_Lasm_JS_instFromJSString___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Data_describe___closed__6_value)}};
static const lean_object* l_Lasm_JS_instFromJSString___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_instFromJSString___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_instFromJSString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instFromJSString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instFromJSString___closed__0 = (const lean_object*)&l_Lasm_JS_instFromJSString___closed__0_value;
static const lean_string_object l_Lasm_JS_instFromJSString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lasm_JS_instFromJSString___closed__1 = (const lean_object*)&l_Lasm_JS_instFromJSString___closed__1_value;
static const lean_ctor_object l_Lasm_JS_instFromJSString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_instFromJSString___closed__0_value),((lean_object*)&l_Lasm_JS_instFromJSString___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_instFromJSString___closed__2 = (const lean_object*)&l_Lasm_JS_instFromJSString___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_instFromJSString = (const lean_object*)&l_Lasm_JS_instFromJSString___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSBool___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_instToJSBool___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instToJSBool___closed__0 = (const lean_object*)&l_Lasm_JS_instToJSBool___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_instToJSBool = (const lean_object*)&l_Lasm_JS_instToJSBool___closed__0_value;
static const lean_ctor_object l_Lasm_JS_instFromJSBool___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Data_describe___closed__6_value)}};
static const lean_object* l_Lasm_JS_instFromJSBool___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_instFromJSBool___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSBool___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSBool___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_instFromJSBool___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instFromJSBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instFromJSBool___closed__0 = (const lean_object*)&l_Lasm_JS_instFromJSBool___closed__0_value;
static const lean_string_object l_Lasm_JS_instFromJSBool___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lasm_JS_instFromJSBool___closed__1 = (const lean_object*)&l_Lasm_JS_instFromJSBool___closed__1_value;
static const lean_ctor_object l_Lasm_JS_instFromJSBool___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_instFromJSBool___closed__0_value),((lean_object*)&l_Lasm_JS_instFromJSBool___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_instFromJSBool___closed__2 = (const lean_object*)&l_Lasm_JS_instFromJSBool___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_instFromJSBool = (const lean_object*)&l_Lasm_JS_instFromJSBool___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSFloat___lam__0(double);
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSFloat___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_instToJSFloat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSFloat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instToJSFloat___closed__0 = (const lean_object*)&l_Lasm_JS_instToJSFloat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_instToJSFloat = (const lean_object*)&l_Lasm_JS_instToJSFloat___closed__0_value;
static const lean_ctor_object l_Lasm_JS_instFromJSFloat___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Data_describe___closed__6_value)}};
static const lean_object* l_Lasm_JS_instFromJSFloat___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_instFromJSFloat___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSFloat___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSFloat___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_instFromJSFloat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instFromJSFloat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instFromJSFloat___closed__0 = (const lean_object*)&l_Lasm_JS_instFromJSFloat___closed__0_value;
static const lean_string_object l_Lasm_JS_instFromJSFloat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Float"};
static const lean_object* l_Lasm_JS_instFromJSFloat___closed__1 = (const lean_object*)&l_Lasm_JS_instFromJSFloat___closed__1_value;
static const lean_ctor_object l_Lasm_JS_instFromJSFloat___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_instFromJSFloat___closed__0_value),((lean_object*)&l_Lasm_JS_instFromJSFloat___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_instFromJSFloat___closed__2 = (const lean_object*)&l_Lasm_JS_instFromJSFloat___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_instFromJSFloat = (const lean_object*)&l_Lasm_JS_instFromJSFloat___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUnit___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_instToJSUnit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSUnit___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instToJSUnit___closed__0 = (const lean_object*)&l_Lasm_JS_instToJSUnit___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_instToJSUnit = (const lean_object*)&l_Lasm_JS_instToJSUnit___closed__0_value;
static const lean_ctor_object l_Lasm_JS_instFromJSUnit___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_instFromJSUnit___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_instFromJSUnit___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSUnit___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSUnit___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_instFromJSUnit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instFromJSUnit___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instFromJSUnit___closed__0 = (const lean_object*)&l_Lasm_JS_instFromJSUnit___closed__0_value;
static const lean_string_object l_Lasm_JS_instFromJSUnit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Unit"};
static const lean_object* l_Lasm_JS_instFromJSUnit___closed__1 = (const lean_object*)&l_Lasm_JS_instFromJSUnit___closed__1_value;
static const lean_ctor_object l_Lasm_JS_instFromJSUnit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_instFromJSUnit___closed__0_value),((lean_object*)&l_Lasm_JS_instFromJSUnit___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_instFromJSUnit___closed__2 = (const lean_object*)&l_Lasm_JS_instFromJSUnit___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_instFromJSUnit = (const lean_object*)&l_Lasm_JS_instFromJSUnit___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSByteArray___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_instToJSByteArray___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSByteArray___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instToJSByteArray___closed__0 = (const lean_object*)&l_Lasm_JS_instToJSByteArray___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_instToJSByteArray = (const lean_object*)&l_Lasm_JS_instToJSByteArray___closed__0_value;
static const lean_ctor_object l_Lasm_JS_instFromJSByteArray___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Data_describe___closed__6_value)}};
static const lean_object* l_Lasm_JS_instFromJSByteArray___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_instFromJSByteArray___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSByteArray___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_instFromJSByteArray___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instFromJSByteArray___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instFromJSByteArray___closed__0 = (const lean_object*)&l_Lasm_JS_instFromJSByteArray___closed__0_value;
static const lean_string_object l_Lasm_JS_instFromJSByteArray___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ByteArray"};
static const lean_object* l_Lasm_JS_instFromJSByteArray___closed__1 = (const lean_object*)&l_Lasm_JS_instFromJSByteArray___closed__1_value;
static const lean_ctor_object l_Lasm_JS_instFromJSByteArray___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_instFromJSByteArray___closed__0_value),((lean_object*)&l_Lasm_JS_instFromJSByteArray___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_instFromJSByteArray___closed__2 = (const lean_object*)&l_Lasm_JS_instFromJSByteArray___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_instFromJSByteArray = (const lean_object*)&l_Lasm_JS_instFromJSByteArray___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_maxSafe;
static lean_once_cell_t l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f___closed__0;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSInt___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_instToJSInt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSInt___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instToJSInt___closed__0 = (const lean_object*)&l_Lasm_JS_instToJSInt___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_instToJSInt = (const lean_object*)&l_Lasm_JS_instToJSInt___closed__0_value;
static const lean_string_object l_Lasm_JS_instFromJSInt___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not an integer"};
static const lean_object* l_Lasm_JS_instFromJSInt___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_instFromJSInt___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_instFromJSInt___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_instFromJSInt___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_instFromJSInt___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_instFromJSInt___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_instFromJSInt___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Data_describe___closed__6_value)}};
static const lean_object* l_Lasm_JS_instFromJSInt___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_instFromJSInt___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSInt___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_instFromJSInt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instFromJSInt___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instFromJSInt___closed__0 = (const lean_object*)&l_Lasm_JS_instFromJSInt___closed__0_value;
static const lean_string_object l_Lasm_JS_instFromJSInt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l_Lasm_JS_instFromJSInt___closed__1 = (const lean_object*)&l_Lasm_JS_instFromJSInt___closed__1_value;
static const lean_ctor_object l_Lasm_JS_instFromJSInt___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_instFromJSInt___closed__0_value),((lean_object*)&l_Lasm_JS_instFromJSInt___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_instFromJSInt___closed__2 = (const lean_object*)&l_Lasm_JS_instFromJSInt___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_instFromJSInt = (const lean_object*)&l_Lasm_JS_instFromJSInt___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSNat___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_instToJSNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSNat___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instToJSNat___closed__0 = (const lean_object*)&l_Lasm_JS_instToJSNat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_instToJSNat = (const lean_object*)&l_Lasm_JS_instToJSNat___closed__0_value;
static const lean_string_object l_Lasm_JS_instFromJSNat___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "negative"};
static const lean_object* l_Lasm_JS_instFromJSNat___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_instFromJSNat___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_instFromJSNat___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_instFromJSNat___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_instFromJSNat___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_instFromJSNat___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_instFromJSNat___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_instFromJSInt___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_instFromJSNat___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_instFromJSNat___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_instFromJSNat___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Data_describe___closed__6_value)}};
static const lean_object* l_Lasm_JS_instFromJSNat___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_instFromJSNat___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSNat___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_instFromJSNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instFromJSNat___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instFromJSNat___closed__0 = (const lean_object*)&l_Lasm_JS_instFromJSNat___closed__0_value;
static const lean_string_object l_Lasm_JS_instFromJSNat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lasm_JS_instFromJSNat___closed__1 = (const lean_object*)&l_Lasm_JS_instFromJSNat___closed__1_value;
static const lean_ctor_object l_Lasm_JS_instFromJSNat___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_instFromJSNat___closed__0_value),((lean_object*)&l_Lasm_JS_instFromJSNat___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_instFromJSNat___closed__2 = (const lean_object*)&l_Lasm_JS_instFromJSNat___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_instFromJSNat = (const lean_object*)&l_Lasm_JS_instFromJSNat___closed__2_value;
static const lean_ctor_object l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_instFromJSNat___lam__0___closed__0_value)}};
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0___closed__0_value;
static const lean_string_object l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "out of range for "};
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0___closed__1_value;
static const lean_ctor_object l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_instFromJSInt___lam__0___closed__0_value)}};
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt8___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt8___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_instToJSUInt8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSUInt8___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instToJSUInt8___closed__0 = (const lean_object*)&l_Lasm_JS_instToJSUInt8___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_instToJSUInt8 = (const lean_object*)&l_Lasm_JS_instToJSUInt8___closed__0_value;
static const lean_string_object l_Lasm_JS_instFromJSUInt8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "UInt8"};
static const lean_object* l_Lasm_JS_instFromJSUInt8___closed__0 = (const lean_object*)&l_Lasm_JS_instFromJSUInt8___closed__0_value;
static const lean_closure_object l_Lasm_JS_instFromJSUInt8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_toUInt8___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instFromJSUInt8___closed__1 = (const lean_object*)&l_Lasm_JS_instFromJSUInt8___closed__1_value;
static lean_once_cell_t l_Lasm_JS_instFromJSUInt8___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_instFromJSUInt8___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSUInt8;
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt16___lam__0(uint16_t);
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt16___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_instToJSUInt16___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSUInt16___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instToJSUInt16___closed__0 = (const lean_object*)&l_Lasm_JS_instToJSUInt16___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_instToJSUInt16 = (const lean_object*)&l_Lasm_JS_instToJSUInt16___closed__0_value;
static const lean_string_object l_Lasm_JS_instFromJSUInt16___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt16"};
static const lean_object* l_Lasm_JS_instFromJSUInt16___closed__0 = (const lean_object*)&l_Lasm_JS_instFromJSUInt16___closed__0_value;
static const lean_closure_object l_Lasm_JS_instFromJSUInt16___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_toUInt16___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instFromJSUInt16___closed__1 = (const lean_object*)&l_Lasm_JS_instFromJSUInt16___closed__1_value;
static lean_once_cell_t l_Lasm_JS_instFromJSUInt16___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_instFromJSUInt16___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSUInt16;
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt32___lam__0(uint32_t);
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt32___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_instToJSUInt32___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSUInt32___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instToJSUInt32___closed__0 = (const lean_object*)&l_Lasm_JS_instToJSUInt32___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_instToJSUInt32 = (const lean_object*)&l_Lasm_JS_instToJSUInt32___closed__0_value;
static const lean_string_object l_Lasm_JS_instFromJSUInt32___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt32"};
static const lean_object* l_Lasm_JS_instFromJSUInt32___closed__0 = (const lean_object*)&l_Lasm_JS_instFromJSUInt32___closed__0_value;
static const lean_closure_object l_Lasm_JS_instFromJSUInt32___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_toUInt32___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instFromJSUInt32___closed__1 = (const lean_object*)&l_Lasm_JS_instFromJSUInt32___closed__1_value;
static lean_once_cell_t l_Lasm_JS_instFromJSUInt32___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_instFromJSUInt32___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSUInt32;
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt64___lam__0(uint64_t);
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt64___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_instToJSUInt64___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSUInt64___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instToJSUInt64___closed__0 = (const lean_object*)&l_Lasm_JS_instToJSUInt64___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_instToJSUInt64 = (const lean_object*)&l_Lasm_JS_instToJSUInt64___closed__0_value;
static const lean_string_object l_Lasm_JS_instFromJSUInt64___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt64"};
static const lean_object* l_Lasm_JS_instFromJSUInt64___closed__0 = (const lean_object*)&l_Lasm_JS_instFromJSUInt64___closed__0_value;
static lean_once_cell_t l_Lasm_JS_instFromJSUInt64___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_instFromJSUInt64___closed__1;
static const lean_closure_object l_Lasm_JS_instFromJSUInt64___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_toUInt64___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instFromJSUInt64___closed__2 = (const lean_object*)&l_Lasm_JS_instFromJSUInt64___closed__2_value;
static lean_once_cell_t l_Lasm_JS_instFromJSUInt64___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_instFromJSUInt64___closed__3;
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSUInt64;
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSArray___redArg___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_instToJSArray___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instToJSArray___redArg___lam__1___closed__0 = (const lean_object*)&l_Lasm_JS_instToJSArray___redArg___lam__1___closed__0_value;
static const lean_closure_object l_Lasm_JS_instToJSArray___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instToJSArray___redArg___lam__1___closed__1 = (const lean_object*)&l_Lasm_JS_instToJSArray___redArg___lam__1___closed__1_value;
static const lean_closure_object l_Lasm_JS_instToJSArray___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instToJSArray___redArg___lam__1___closed__2 = (const lean_object*)&l_Lasm_JS_instToJSArray___redArg___lam__1___closed__2_value;
static const lean_closure_object l_Lasm_JS_instToJSArray___redArg___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instToJSArray___redArg___lam__1___closed__3 = (const lean_object*)&l_Lasm_JS_instToJSArray___redArg___lam__1___closed__3_value;
static const lean_closure_object l_Lasm_JS_instToJSArray___redArg___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instToJSArray___redArg___lam__1___closed__4 = (const lean_object*)&l_Lasm_JS_instToJSArray___redArg___lam__1___closed__4_value;
static const lean_closure_object l_Lasm_JS_instToJSArray___redArg___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instToJSArray___redArg___lam__1___closed__5 = (const lean_object*)&l_Lasm_JS_instToJSArray___redArg___lam__1___closed__5_value;
static const lean_closure_object l_Lasm_JS_instToJSArray___redArg___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instToJSArray___redArg___lam__1___closed__6 = (const lean_object*)&l_Lasm_JS_instToJSArray___redArg___lam__1___closed__6_value;
static const lean_ctor_object l_Lasm_JS_instToJSArray___redArg___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_instToJSArray___redArg___lam__1___closed__0_value),((lean_object*)&l_Lasm_JS_instToJSArray___redArg___lam__1___closed__1_value)}};
static const lean_object* l_Lasm_JS_instToJSArray___redArg___lam__1___closed__7 = (const lean_object*)&l_Lasm_JS_instToJSArray___redArg___lam__1___closed__7_value;
static const lean_ctor_object l_Lasm_JS_instToJSArray___redArg___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_instToJSArray___redArg___lam__1___closed__7_value),((lean_object*)&l_Lasm_JS_instToJSArray___redArg___lam__1___closed__2_value),((lean_object*)&l_Lasm_JS_instToJSArray___redArg___lam__1___closed__3_value),((lean_object*)&l_Lasm_JS_instToJSArray___redArg___lam__1___closed__4_value),((lean_object*)&l_Lasm_JS_instToJSArray___redArg___lam__1___closed__5_value)}};
static const lean_object* l_Lasm_JS_instToJSArray___redArg___lam__1___closed__8 = (const lean_object*)&l_Lasm_JS_instToJSArray___redArg___lam__1___closed__8_value;
static const lean_ctor_object l_Lasm_JS_instToJSArray___redArg___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_instToJSArray___redArg___lam__1___closed__8_value),((lean_object*)&l_Lasm_JS_instToJSArray___redArg___lam__1___closed__6_value)}};
static const lean_object* l_Lasm_JS_instToJSArray___redArg___lam__1___closed__9 = (const lean_object*)&l_Lasm_JS_instToJSArray___redArg___lam__1___closed__9_value;
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSArray___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSArray___redArg___lam__0(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "an element is not "};
static const lean_object* l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__0 = (const lean_object*)&l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__0_value;
static const lean_string_object l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__1 = (const lean_object*)&l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__1_value;
static const lean_ctor_object l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Data_describe___closed__6_value)}};
static const lean_object* l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__2 = (const lean_object*)&l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSArray___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSArray___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_instFromJSArray___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_instMonad___redArg___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instFromJSArray___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_instFromJSArray___redArg___closed__0_value;
static const lean_closure_object l_Lasm_JS_instFromJSArray___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_instMonad___redArg___lam__1, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instFromJSArray___redArg___closed__1 = (const lean_object*)&l_Lasm_JS_instFromJSArray___redArg___closed__1_value;
static const lean_closure_object l_Lasm_JS_instFromJSArray___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_instMonad___redArg___lam__2___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instFromJSArray___redArg___closed__2 = (const lean_object*)&l_Lasm_JS_instFromJSArray___redArg___closed__2_value;
static const lean_closure_object l_Lasm_JS_instFromJSArray___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_instMonad___redArg___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instFromJSArray___redArg___closed__3 = (const lean_object*)&l_Lasm_JS_instFromJSArray___redArg___closed__3_value;
static const lean_closure_object l_Lasm_JS_instFromJSArray___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_map, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lasm_JS_instFromJSArray___redArg___closed__4 = (const lean_object*)&l_Lasm_JS_instFromJSArray___redArg___closed__4_value;
static const lean_ctor_object l_Lasm_JS_instFromJSArray___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_instFromJSArray___redArg___closed__4_value),((lean_object*)&l_Lasm_JS_instFromJSArray___redArg___closed__0_value)}};
static const lean_object* l_Lasm_JS_instFromJSArray___redArg___closed__5 = (const lean_object*)&l_Lasm_JS_instFromJSArray___redArg___closed__5_value;
static const lean_closure_object l_Lasm_JS_instFromJSArray___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_pure, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lasm_JS_instFromJSArray___redArg___closed__6 = (const lean_object*)&l_Lasm_JS_instFromJSArray___redArg___closed__6_value;
static const lean_ctor_object l_Lasm_JS_instFromJSArray___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_instFromJSArray___redArg___closed__5_value),((lean_object*)&l_Lasm_JS_instFromJSArray___redArg___closed__6_value),((lean_object*)&l_Lasm_JS_instFromJSArray___redArg___closed__1_value),((lean_object*)&l_Lasm_JS_instFromJSArray___redArg___closed__2_value),((lean_object*)&l_Lasm_JS_instFromJSArray___redArg___closed__3_value)}};
static const lean_object* l_Lasm_JS_instFromJSArray___redArg___closed__7 = (const lean_object*)&l_Lasm_JS_instFromJSArray___redArg___closed__7_value;
static const lean_closure_object l_Lasm_JS_instFromJSArray___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_bind, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lasm_JS_instFromJSArray___redArg___closed__8 = (const lean_object*)&l_Lasm_JS_instFromJSArray___redArg___closed__8_value;
static const lean_ctor_object l_Lasm_JS_instFromJSArray___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_instFromJSArray___redArg___closed__7_value),((lean_object*)&l_Lasm_JS_instFromJSArray___redArg___closed__8_value)}};
static const lean_object* l_Lasm_JS_instFromJSArray___redArg___closed__9 = (const lean_object*)&l_Lasm_JS_instFromJSArray___redArg___closed__9_value;
static const lean_string_object l_Lasm_JS_instFromJSArray___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Array ("};
static const lean_object* l_Lasm_JS_instFromJSArray___redArg___closed__10 = (const lean_object*)&l_Lasm_JS_instFromJSArray___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSList___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSList(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_instFromJSList___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Data_describe___closed__6_value)}};
static const lean_object* l_Lasm_JS_instFromJSList___redArg___lam__1___closed__0 = (const lean_object*)&l_Lasm_JS_instFromJSList___redArg___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSList___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSList___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_instFromJSList___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "List ("};
static const lean_object* l_Lasm_JS_instFromJSList___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_instFromJSList___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSOption___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSOption___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSOption(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_instFromJSOption___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_instFromJSOption___redArg___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_instFromJSOption___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSOption___redArg___lam__0(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_instFromJSOption___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Option ("};
static const lean_object* l_Lasm_JS_instFromJSOption___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_instFromJSOption___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSOption___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSOption(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSProd___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSProd___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSProd(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_instFromJSProd___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "expected a two-element array"};
static const lean_object* l_Lasm_JS_instFromJSProd___redArg___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_instFromJSProd___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_instFromJSProd___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_instFromJSProd___redArg___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_instFromJSProd___redArg___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_instFromJSProd___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSProd___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSProd___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_instFromJSProd___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lasm_JS_instFromJSProd___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_instFromJSProd___redArg___closed__0_value;
static const lean_string_object l_Lasm_JS_instFromJSProd___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 3, .m_data = " × "};
static const lean_object* l_Lasm_JS_instFromJSProd___redArg___closed__1 = (const lean_object*)&l_Lasm_JS_instFromJSProd___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSProd___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSProd(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_obj(lean_object*);
static const lean_string_object l_Lasm_JS_readField___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "field "};
static const lean_object* l_Lasm_JS_readField___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_readField___redArg___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ": expected "};
static const lean_object* l_Lasm_JS_readField___redArg___closed__1 = (const lean_object*)&l_Lasm_JS_readField___redArg___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", received "};
static const lean_object* l_Lasm_JS_readField___redArg___closed__2 = (const lean_object*)&l_Lasm_JS_readField___redArg___closed__2_value;
static const lean_string_object l_Lasm_JS_readField___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected an object"};
static const lean_object* l_Lasm_JS_readField___redArg___closed__3 = (const lean_object*)&l_Lasm_JS_readField___redArg___closed__3_value;
static const lean_ctor_object l_Lasm_JS_readField___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___redArg___closed__3_value)}};
static const lean_object* l_Lasm_JS_readField___redArg___closed__4 = (const lean_object*)&l_Lasm_JS_readField___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_value_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_value_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_callMethod_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_callMethod_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__0_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__0_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__1_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__1_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__2_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__2_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_initFn_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_initFn_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_registry;
lean_object* lasm_js_start(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_startThread___boxed(lean_object*, lean_object*);
lean_object* lasm_js_await_into(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitInto___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lasm_js_park();
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_park___boxed(lean_object*);
lean_object* lasm_js_sync_start(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_startSync___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_errorText(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_reply_spec__0___redArg(uint64_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_reply_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_reply_spec__0(uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_reply_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_argsOf(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_argsOf___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__1(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_runCall(uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_runCall___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2___redArg(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3___redArg(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1___redArg(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0___redArg(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0___redArg(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_JS_Core_0__Lasm_JS_dispatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lasm.JS: the Lean function was released"};
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_dispatch___closed__0 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_dispatch___closed__0_value;
static const lean_ctor_object l___private_Lasm_JS_Core_0__Lasm_JS_dispatch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_dispatch___closed__0_value)}};
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_dispatch___closed__1 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_dispatch___closed__1_value;
static const lean_ctor_object l___private_Lasm_JS_Core_0__Lasm_JS_dispatch___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_dispatch___closed__1_value)}};
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_dispatch___closed__2 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_dispatch___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_dispatch(uint8_t, uint32_t, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_dispatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0(lean_object*, lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1(lean_object*, lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_sarray_object l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_sarray_object) + 1, .m_other = 1, .m_tag = 248}, .m_size = 1, .m_capacity = 1, .m_data = {1}};
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__0 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__0_value;
static lean_once_cell_t l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__1;
static const lean_sarray_object l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_sarray_object) + 1, .m_other = 1, .m_tag = 248}, .m_size = 1, .m_capacity = 1, .m_data = {0}};
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__2 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__2_value;
static lean_once_cell_t l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__3;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_dispatch___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted___closed__0 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTAsync___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTAsync___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTAsync___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTAsync(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTIO___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTIO___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTIO(lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "Lasm.JS: a JavaScript result was lost (internal error)"};
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes___lam__0___closed__0 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes___lam__0___closed__0_value)}};
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes___lam__0___closed__1 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes___lam__0___closed__1_value;
static const lean_ctor_object l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes___lam__0___closed__1_value)}};
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes___lam__0___closed__2 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes___lam__0(lean_object*);
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes___closed__0 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg(lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync(lean_object*, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_modeArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0___closed__1;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_global___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "global"};
static const lean_object* l_Lasm_JS_global___closed__0 = (const lean_object*)&l_Lasm_JS_global___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_global();
LEAN_EXPORT lean_object* l_Lasm_JS_global___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_require___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "require "};
static const lean_object* l_Lasm_JS_require___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_require___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_require___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_require___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_require(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_require___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_describe(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_describe___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_get___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Value_get___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___redArg___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Value_getFields___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Value_getFields___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Value_getFields___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Value_getFields___redArg___closed__0_value;
static const lean_string_object l_Lasm_JS_Value_getFields___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "getFields"};
static const lean_object* l_Lasm_JS_Value_getFields___redArg___closed__1 = (const lean_object*)&l_Lasm_JS_Value_getFields___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_invokeRaw___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(lean_object*, uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags(lean_object*, lean_object*, uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_call___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "call"};
static const lean_object* l_Lasm_JS_Value_call___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Value_call___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___redArg___boxed__const__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_callMethod___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethod___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Value_callMethod___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_new___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "new"};
static const lean_object* l_Lasm_JS_Value_new___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Value_new___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_toTask___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "await"};
static const lean_object* l_Lasm_JS_Value_toTask___redArg___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_toTask___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_toTask___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_toTask___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_toTask___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_toTask___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_toTask(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_toTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__0();
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Value_await___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Value_await___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Value_await___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Value_await___redArg___closed__0_value;
static const lean_closure_object l_Lasm_JS_Value_await___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lean_io_error_to_string, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Value_await___redArg___closed__1 = (const lean_object*)&l_Lasm_JS_Value_await___redArg___closed__1_value;
static const lean_closure_object l_Lasm_JS_Value_await___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Value_await___redArg___lam__6___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Value_await___redArg___closed__1_value)} };
static const lean_object* l_Lasm_JS_Value_await___redArg___closed__2 = (const lean_object*)&l_Lasm_JS_Value_await___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1___redArg(uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0___redArg(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_register(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_register___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0(lean_object*, lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1(lean_object*, uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_registerReply(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_registerReply___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Function_ofFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Function_ofFn___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Function_ofFn___closed__0 = (const lean_object*)&l_Lasm_JS_Function_ofFn___closed__0_value;
static const lean_string_object l_Lasm_JS_Function_ofFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Function.ofFn"};
static const lean_object* l_Lasm_JS_Function_ofFn___closed__1 = (const lean_object*)&l_Lasm_JS_Function_ofFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Function_ofFnReply___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Function.ofFnReply"};
static const lean_object* l_Lasm_JS_Function_ofFnReply___closed__0 = (const lean_object*)&l_Lasm_JS_Function_ofFnReply___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFnReply(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFnReply___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Function_ofSyncFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Function_ofSyncFn___closed__0 = (const lean_object*)&l_Lasm_JS_Function_ofSyncFn___closed__0_value;
static const lean_string_object l_Lasm_JS_Function_ofSyncFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Function.ofSyncFn"};
static const lean_object* l_Lasm_JS_Function_ofSyncFn___closed__1 = (const lean_object*)&l_Lasm_JS_Function_ofSyncFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "callback argument "};
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg___closed__0 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_instReprBinding_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lasm_JS_instReprBinding_repr___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_instReprBinding_repr___redArg___closed__0_value;
static const lean_string_object l_Lasm_JS_instReprBinding_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lasm_JS_instReprBinding_repr___redArg___closed__1 = (const lean_object*)&l_Lasm_JS_instReprBinding_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lasm_JS_instReprBinding_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_instReprBinding_repr___redArg___closed__1_value)}};
static const lean_object* l_Lasm_JS_instReprBinding_repr___redArg___closed__2 = (const lean_object*)&l_Lasm_JS_instReprBinding_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lasm_JS_instReprBinding_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_instReprBinding_repr___redArg___closed__2_value)}};
static const lean_object* l_Lasm_JS_instReprBinding_repr___redArg___closed__3 = (const lean_object*)&l_Lasm_JS_instReprBinding_repr___redArg___closed__3_value;
static const lean_string_object l_Lasm_JS_instReprBinding_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lasm_JS_instReprBinding_repr___redArg___closed__4 = (const lean_object*)&l_Lasm_JS_instReprBinding_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lasm_JS_instReprBinding_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_instReprBinding_repr___redArg___closed__4_value)}};
static const lean_object* l_Lasm_JS_instReprBinding_repr___redArg___closed__5 = (const lean_object*)&l_Lasm_JS_instReprBinding_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lasm_JS_instReprBinding_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_JS_instReprBinding_repr___redArg___closed__3_value),((lean_object*)&l_Lasm_JS_instReprBinding_repr___redArg___closed__5_value)}};
static const lean_object* l_Lasm_JS_instReprBinding_repr___redArg___closed__6 = (const lean_object*)&l_Lasm_JS_instReprBinding_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lasm_JS_instReprBinding_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_instReprBinding_repr___redArg___closed__7;
static const lean_string_object l_Lasm_JS_instReprBinding_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lasm_JS_instReprBinding_repr___redArg___closed__8 = (const lean_object*)&l_Lasm_JS_instReprBinding_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lasm_JS_instReprBinding_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_instReprBinding_repr___redArg___closed__8_value)}};
static const lean_object* l_Lasm_JS_instReprBinding_repr___redArg___closed__9 = (const lean_object*)&l_Lasm_JS_instReprBinding_repr___redArg___closed__9_value;
static const lean_string_object l_Lasm_JS_instReprBinding_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "module"};
static const lean_object* l_Lasm_JS_instReprBinding_repr___redArg___closed__10 = (const lean_object*)&l_Lasm_JS_instReprBinding_repr___redArg___closed__10_value;
static const lean_ctor_object l_Lasm_JS_instReprBinding_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_instReprBinding_repr___redArg___closed__10_value)}};
static const lean_object* l_Lasm_JS_instReprBinding_repr___redArg___closed__11 = (const lean_object*)&l_Lasm_JS_instReprBinding_repr___redArg___closed__11_value;
static lean_once_cell_t l_Lasm_JS_instReprBinding_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_instReprBinding_repr___redArg___closed__12;
static const lean_string_object l_Lasm_JS_instReprBinding_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "path"};
static const lean_object* l_Lasm_JS_instReprBinding_repr___redArg___closed__13 = (const lean_object*)&l_Lasm_JS_instReprBinding_repr___redArg___closed__13_value;
static const lean_ctor_object l_Lasm_JS_instReprBinding_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_instReprBinding_repr___redArg___closed__13_value)}};
static const lean_object* l_Lasm_JS_instReprBinding_repr___redArg___closed__14 = (const lean_object*)&l_Lasm_JS_instReprBinding_repr___redArg___closed__14_value;
static const lean_string_object l_Lasm_JS_instReprBinding_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "construct"};
static const lean_object* l_Lasm_JS_instReprBinding_repr___redArg___closed__15 = (const lean_object*)&l_Lasm_JS_instReprBinding_repr___redArg___closed__15_value;
static const lean_ctor_object l_Lasm_JS_instReprBinding_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_instReprBinding_repr___redArg___closed__15_value)}};
static const lean_object* l_Lasm_JS_instReprBinding_repr___redArg___closed__16 = (const lean_object*)&l_Lasm_JS_instReprBinding_repr___redArg___closed__16_value;
static lean_once_cell_t l_Lasm_JS_instReprBinding_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_instReprBinding_repr___redArg___closed__17;
static const lean_string_object l_Lasm_JS_instReprBinding_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "arity"};
static const lean_object* l_Lasm_JS_instReprBinding_repr___redArg___closed__18 = (const lean_object*)&l_Lasm_JS_instReprBinding_repr___redArg___closed__18_value;
static const lean_ctor_object l_Lasm_JS_instReprBinding_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_instReprBinding_repr___redArg___closed__18_value)}};
static const lean_object* l_Lasm_JS_instReprBinding_repr___redArg___closed__19 = (const lean_object*)&l_Lasm_JS_instReprBinding_repr___redArg___closed__19_value;
static lean_once_cell_t l_Lasm_JS_instReprBinding_repr___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_instReprBinding_repr___redArg___closed__20;
static const lean_string_object l_Lasm_JS_instReprBinding_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lasm_JS_instReprBinding_repr___redArg___closed__21 = (const lean_object*)&l_Lasm_JS_instReprBinding_repr___redArg___closed__21_value;
static lean_once_cell_t l_Lasm_JS_instReprBinding_repr___redArg___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_instReprBinding_repr___redArg___closed__22;
static lean_once_cell_t l_Lasm_JS_instReprBinding_repr___redArg___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_instReprBinding_repr___redArg___closed__23;
static const lean_ctor_object l_Lasm_JS_instReprBinding_repr___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_instReprBinding_repr___redArg___closed__0_value)}};
static const lean_object* l_Lasm_JS_instReprBinding_repr___redArg___closed__24 = (const lean_object*)&l_Lasm_JS_instReprBinding_repr___redArg___closed__24_value;
static const lean_ctor_object l_Lasm_JS_instReprBinding_repr___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_instReprBinding_repr___redArg___closed__21_value)}};
static const lean_object* l_Lasm_JS_instReprBinding_repr___redArg___closed__25 = (const lean_object*)&l_Lasm_JS_instReprBinding_repr___redArg___closed__25_value;
LEAN_EXPORT lean_object* l_Lasm_JS_instReprBinding_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instReprBinding_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instReprBinding_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_instReprBinding___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instReprBinding_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instReprBinding___closed__0 = (const lean_object*)&l_Lasm_JS_instReprBinding___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_instReprBinding = (const lean_object*)&l_Lasm_JS_instReprBinding___closed__0_value;
static const lean_string_object l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "binding "};
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context___closed__0 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context___closed__0_value;
static const lean_string_object l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context___closed__1 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOTaskExceptErrorOfFromJS___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOTaskExceptErrorOfFromJS___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOTaskExceptErrorOfFromJS___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOTaskExceptErrorOfFromJS(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOOfFromJS___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOOfFromJS___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOOfFromJS___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOOfFromJS(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableAsyncOfFromJS___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableAsyncOfFromJS___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableAsyncOfFromJS___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableAsyncOfFromJS(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableForallOfToJS___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableForallOfToJS___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableForallOfToJS(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_onEdge();
LEAN_EXPORT lean_object* l_Lasm_JS_onEdge___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___at___00Lasm_JS_exportDefault_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___at___00Lasm_JS_exportDefault_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_exportDefault___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "__lasmDefaultExport"};
static const lean_object* l_Lasm_JS_exportDefault___closed__0 = (const lean_object*)&l_Lasm_JS_exportDefault___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_exportDefault(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_exportDefault___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_waitForever();
LEAN_EXPORT lean_object* l_Lasm_JS_waitForever___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_stats();
LEAN_EXPORT lean_object* l_Lasm_JS_stats___boxed(lean_object*);
static lean_object* _init_l_Lasm_JS_ValuePointed(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_box(0);
return v___x_1_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_valueOfHandle___boxed(lean_object* v_handle_4_, lean_object* v_a_00___x40___internal___hyg_5_){
_start:
{
uint32_t v_handle_boxed_6_; lean_object* v_res_7_; 
v_handle_boxed_6_ = lean_unbox_uint32(v_handle_4_);
lean_dec(v_handle_4_);
v_res_7_ = lasm_js_value_of_handle(v_handle_boxed_6_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_valueHandle___boxed(lean_object* v_v_9_){
_start:
{
uint32_t v_res_10_; lean_object* v_r_11_; 
v_res_10_ = lasm_js_value_handle(v_v_9_);
lean_dec(v_v_9_);
v_r_11_ = lean_box_uint32(v_res_10_);
return v_r_11_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_available___boxed(lean_object* v_a_00___x40___internal___hyg_13_){
_start:
{
uint8_t v_res_14_; lean_object* v_r_15_; 
v_res_14_ = lasm_js_available(v_a_00___x40___internal___hyg_13_);
v_r_15_ = lean_box(v_res_14_);
return v_r_15_;
}
}
static uint8_t _init_l_Lasm_JS_isAvailable___closed__0(void){
_start:
{
lean_object* v___x_16_; uint8_t v___x_17_; 
v___x_16_ = lean_box(0);
v___x_17_ = lasm_js_available(v___x_16_);
return v___x_17_;
}
}
static uint8_t _init_l_Lasm_JS_isAvailable(void){
_start:
{
uint8_t v___x_18_; 
v___x_18_ = lean_uint8_once(&l_Lasm_JS_isAvailable___closed__0, &l_Lasm_JS_isAvailable___closed__0_once, _init_l_Lasm_JS_isAvailable___closed__0);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_ctorIdx(lean_object* v_x_19_){
_start:
{
switch(lean_obj_tag(v_x_19_))
{
case 0:
{
lean_object* v___x_20_; 
v___x_20_ = lean_unsigned_to_nat(0u);
return v___x_20_;
}
case 1:
{
lean_object* v___x_21_; 
v___x_21_ = lean_unsigned_to_nat(1u);
return v___x_21_;
}
case 2:
{
lean_object* v___x_22_; 
v___x_22_ = lean_unsigned_to_nat(2u);
return v___x_22_;
}
case 3:
{
lean_object* v___x_23_; 
v___x_23_ = lean_unsigned_to_nat(3u);
return v___x_23_;
}
case 4:
{
lean_object* v___x_24_; 
v___x_24_ = lean_unsigned_to_nat(4u);
return v___x_24_;
}
case 5:
{
lean_object* v___x_25_; 
v___x_25_ = lean_unsigned_to_nat(5u);
return v___x_25_;
}
case 6:
{
lean_object* v___x_26_; 
v___x_26_ = lean_unsigned_to_nat(6u);
return v___x_26_;
}
case 7:
{
lean_object* v___x_27_; 
v___x_27_ = lean_unsigned_to_nat(7u);
return v___x_27_;
}
case 8:
{
lean_object* v___x_28_; 
v___x_28_ = lean_unsigned_to_nat(8u);
return v___x_28_;
}
default: 
{
lean_object* v___x_29_; 
v___x_29_ = lean_unsigned_to_nat(9u);
return v___x_29_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_ctorIdx___boxed(lean_object* v_x_30_){
_start:
{
lean_object* v_res_31_; 
v_res_31_ = l_Lasm_JS_Data_ctorIdx(v_x_30_);
lean_dec(v_x_30_);
return v_res_31_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_ctorElim___redArg(lean_object* v_t_32_, lean_object* v_k_33_){
_start:
{
switch(lean_obj_tag(v_t_32_))
{
case 2:
{
uint8_t v_b_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v_b_34_ = lean_ctor_get_uint8(v_t_32_, 0);
lean_dec_ref_known(v_t_32_, 0);
v___x_35_ = lean_box(v_b_34_);
v___x_36_ = lean_apply_1(v_k_33_, v___x_35_);
return v___x_36_;
}
case 3:
{
double v_n_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v_n_37_ = lean_ctor_get_float(v_t_32_, 0);
lean_dec_ref_known(v_t_32_, 0);
v___x_38_ = lean_box_float(v_n_37_);
v___x_39_ = lean_apply_1(v_k_33_, v___x_38_);
return v___x_39_;
}
case 4:
{
lean_object* v_s_40_; lean_object* v___x_41_; 
v_s_40_ = lean_ctor_get(v_t_32_, 0);
lean_inc_ref(v_s_40_);
lean_dec_ref_known(v_t_32_, 1);
v___x_41_ = lean_apply_1(v_k_33_, v_s_40_);
return v___x_41_;
}
case 5:
{
lean_object* v_i_42_; lean_object* v___x_43_; 
v_i_42_ = lean_ctor_get(v_t_32_, 0);
lean_inc(v_i_42_);
lean_dec_ref_known(v_t_32_, 1);
v___x_43_ = lean_apply_1(v_k_33_, v_i_42_);
return v___x_43_;
}
case 6:
{
lean_object* v_b_44_; lean_object* v___x_45_; 
v_b_44_ = lean_ctor_get(v_t_32_, 0);
lean_inc_ref(v_b_44_);
lean_dec_ref_known(v_t_32_, 1);
v___x_45_ = lean_apply_1(v_k_33_, v_b_44_);
return v___x_45_;
}
case 7:
{
lean_object* v_items_46_; lean_object* v___x_47_; 
v_items_46_ = lean_ctor_get(v_t_32_, 0);
lean_inc_ref(v_items_46_);
lean_dec_ref_known(v_t_32_, 1);
v___x_47_ = lean_apply_1(v_k_33_, v_items_46_);
return v___x_47_;
}
case 8:
{
lean_object* v_fields_48_; lean_object* v___x_49_; 
v_fields_48_ = lean_ctor_get(v_t_32_, 0);
lean_inc_ref(v_fields_48_);
lean_dec_ref_known(v_t_32_, 1);
v___x_49_ = lean_apply_1(v_k_33_, v_fields_48_);
return v___x_49_;
}
case 9:
{
lean_object* v_value_50_; lean_object* v_description_51_; lean_object* v___x_52_; 
v_value_50_ = lean_ctor_get(v_t_32_, 0);
lean_inc(v_value_50_);
v_description_51_ = lean_ctor_get(v_t_32_, 1);
lean_inc_ref(v_description_51_);
lean_dec_ref_known(v_t_32_, 2);
v___x_52_ = lean_apply_2(v_k_33_, v_value_50_, v_description_51_);
return v___x_52_;
}
default: 
{
lean_dec(v_t_32_);
return v_k_33_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_ctorElim(lean_object* v_motive__1_53_, lean_object* v_ctorIdx_54_, lean_object* v_t_55_, lean_object* v_h_56_, lean_object* v_k_57_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_55_, v_k_57_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_ctorElim___boxed(lean_object* v_motive__1_59_, lean_object* v_ctorIdx_60_, lean_object* v_t_61_, lean_object* v_h_62_, lean_object* v_k_63_){
_start:
{
lean_object* v_res_64_; 
v_res_64_ = l_Lasm_JS_Data_ctorElim(v_motive__1_59_, v_ctorIdx_60_, v_t_61_, v_h_62_, v_k_63_);
lean_dec(v_ctorIdx_60_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_undefined_elim___redArg(lean_object* v_t_65_, lean_object* v_undefined_66_){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_65_, v_undefined_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_undefined_elim(lean_object* v_motive__1_68_, lean_object* v_t_69_, lean_object* v_h_70_, lean_object* v_undefined_71_){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_69_, v_undefined_71_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_null_elim___redArg(lean_object* v_t_73_, lean_object* v_null_74_){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_73_, v_null_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_null_elim(lean_object* v_motive__1_76_, lean_object* v_t_77_, lean_object* v_h_78_, lean_object* v_null_79_){
_start:
{
lean_object* v___x_80_; 
v___x_80_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_77_, v_null_79_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_bool_elim___redArg(lean_object* v_t_81_, lean_object* v_bool_82_){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_81_, v_bool_82_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_bool_elim(lean_object* v_motive__1_84_, lean_object* v_t_85_, lean_object* v_h_86_, lean_object* v_bool_87_){
_start:
{
lean_object* v___x_88_; 
v___x_88_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_85_, v_bool_87_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_number_elim___redArg(lean_object* v_t_89_, lean_object* v_number_90_){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_89_, v_number_90_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_number_elim(lean_object* v_motive__1_92_, lean_object* v_t_93_, lean_object* v_h_94_, lean_object* v_number_95_){
_start:
{
lean_object* v___x_96_; 
v___x_96_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_93_, v_number_95_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_string_elim___redArg(lean_object* v_t_97_, lean_object* v_string_98_){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_97_, v_string_98_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_string_elim(lean_object* v_motive__1_100_, lean_object* v_t_101_, lean_object* v_h_102_, lean_object* v_string_103_){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_101_, v_string_103_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_bigint_elim___redArg(lean_object* v_t_105_, lean_object* v_bigint_106_){
_start:
{
lean_object* v___x_107_; 
v___x_107_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_105_, v_bigint_106_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_bigint_elim(lean_object* v_motive__1_108_, lean_object* v_t_109_, lean_object* v_h_110_, lean_object* v_bigint_111_){
_start:
{
lean_object* v___x_112_; 
v___x_112_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_109_, v_bigint_111_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_bytes_elim___redArg(lean_object* v_t_113_, lean_object* v_bytes_114_){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_113_, v_bytes_114_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_bytes_elim(lean_object* v_motive__1_116_, lean_object* v_t_117_, lean_object* v_h_118_, lean_object* v_bytes_119_){
_start:
{
lean_object* v___x_120_; 
v___x_120_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_117_, v_bytes_119_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_array_elim___redArg(lean_object* v_t_121_, lean_object* v_array_122_){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_121_, v_array_122_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_array_elim(lean_object* v_motive__1_124_, lean_object* v_t_125_, lean_object* v_h_126_, lean_object* v_array_127_){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_125_, v_array_127_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_object_elim___redArg(lean_object* v_t_129_, lean_object* v_object_130_){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_129_, v_object_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_object_elim(lean_object* v_motive__1_132_, lean_object* v_t_133_, lean_object* v_h_134_, lean_object* v_object_135_){
_start:
{
lean_object* v___x_136_; 
v___x_136_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_133_, v_object_135_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_ref_elim___redArg(lean_object* v_t_137_, lean_object* v_ref_138_){
_start:
{
lean_object* v___x_139_; 
v___x_139_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_137_, v_ref_138_);
return v___x_139_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_ref_elim(lean_object* v_motive__1_140_, lean_object* v_t_141_, lean_object* v_h_142_, lean_object* v_ref_143_){
_start:
{
lean_object* v___x_144_; 
v___x_144_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_141_, v_ref_143_);
return v___x_144_;
}
}
static lean_object* _init_l_Lasm_JS_instInhabitedData_default(void){
_start:
{
lean_object* v___x_145_; 
v___x_145_ = lean_box(0);
return v___x_145_;
}
}
static lean_object* _init_l_Lasm_JS_instInhabitedData(void){
_start:
{
lean_object* v___x_146_; 
v___x_146_ = lean_box(0);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_JS_Data_describe_spec__0(lean_object* v_a_147_, lean_object* v_a_148_){
_start:
{
if (lean_obj_tag(v_a_147_) == 0)
{
lean_object* v___x_149_; 
v___x_149_ = l_List_reverse___redArg(v_a_148_);
return v___x_149_;
}
else
{
lean_object* v_head_150_; lean_object* v_tail_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_160_; 
v_head_150_ = lean_ctor_get(v_a_147_, 0);
v_tail_151_ = lean_ctor_get(v_a_147_, 1);
v_isSharedCheck_160_ = !lean_is_exclusive(v_a_147_);
if (v_isSharedCheck_160_ == 0)
{
v___x_153_ = v_a_147_;
v_isShared_154_ = v_isSharedCheck_160_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_tail_151_);
lean_inc(v_head_150_);
lean_dec(v_a_147_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_160_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
lean_object* v_fst_155_; lean_object* v___x_157_; 
v_fst_155_ = lean_ctor_get(v_head_150_, 0);
lean_inc(v_fst_155_);
lean_dec(v_head_150_);
if (v_isShared_154_ == 0)
{
lean_ctor_set(v___x_153_, 1, v_a_148_);
lean_ctor_set(v___x_153_, 0, v_fst_155_);
v___x_157_ = v___x_153_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v_fst_155_);
lean_ctor_set(v_reuseFailAlloc_159_, 1, v_a_148_);
v___x_157_ = v_reuseFailAlloc_159_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
v_a_147_ = v_tail_151_;
v_a_148_ = v___x_157_;
goto _start;
}
}
}
}
}
static double _init_l_Lasm_JS_Data_describe___closed__5(void){
_start:
{
lean_object* v___x_166_; double v___x_167_; 
v___x_166_ = lean_unsigned_to_nat(0u);
v___x_167_ = lean_float_of_nat(v___x_166_);
return v___x_167_;
}
}
static double _init_l_Lasm_JS_Data_describe___closed__8(void){
_start:
{
lean_object* v___x_170_; uint8_t v___x_171_; lean_object* v___x_172_; double v___x_173_; 
v___x_170_ = lean_unsigned_to_nat(15u);
v___x_171_ = 0;
v___x_172_ = lean_unsigned_to_nat(1u);
v___x_173_ = l_Float_ofScientific(v___x_172_, v___x_171_, v___x_170_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_describe(lean_object* v_x_187_){
_start:
{
switch(lean_obj_tag(v_x_187_))
{
case 0:
{
lean_object* v___x_188_; 
v___x_188_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__0));
return v___x_188_;
}
case 1:
{
lean_object* v___x_189_; 
v___x_189_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__1));
return v___x_189_;
}
case 2:
{
uint8_t v_b_190_; 
v_b_190_ = lean_ctor_get_uint8(v_x_187_, 0);
lean_dec_ref_known(v_x_187_, 0);
if (v_b_190_ == 0)
{
lean_object* v___x_191_; 
v___x_191_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__2));
return v___x_191_;
}
else
{
lean_object* v___x_192_; 
v___x_192_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__3));
return v___x_192_;
}
}
case 3:
{
double v_n_193_; lean_object* v___x_194_; lean_object* v___y_196_; uint8_t v___y_204_; double v___x_211_; uint8_t v___x_212_; 
v_n_193_ = lean_ctor_get_float(v_x_187_, 0);
lean_dec_ref_known(v_x_187_, 0);
v___x_194_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__4));
v___x_211_ = floor(v_n_193_);
v___x_212_ = lean_float_beq(v___x_211_, v_n_193_);
if (v___x_212_ == 0)
{
v___y_204_ = v___x_212_;
goto v___jp_203_;
}
else
{
double v___x_213_; double v___x_214_; uint8_t v___x_215_; 
v___x_213_ = fabs(v_n_193_);
v___x_214_ = lean_float_once(&l_Lasm_JS_Data_describe___closed__8, &l_Lasm_JS_Data_describe___closed__8_once, _init_l_Lasm_JS_Data_describe___closed__8);
v___x_215_ = lean_float_decLt(v___x_213_, v___x_214_);
v___y_204_ = v___x_215_;
goto v___jp_203_;
}
v___jp_195_:
{
double v___x_197_; uint64_t v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_197_ = fabs(v_n_193_);
v___x_198_ = lean_float_to_uint64(v___x_197_);
v___x_199_ = lean_uint64_to_nat(v___x_198_);
v___x_200_ = l_Nat_reprFast(v___x_199_);
lean_inc_ref(v___y_196_);
v___x_201_ = lean_string_append(v___y_196_, v___x_200_);
lean_dec_ref(v___x_200_);
v___x_202_ = lean_string_append(v___x_194_, v___x_201_);
lean_dec_ref(v___x_201_);
return v___x_202_;
}
v___jp_203_:
{
if (v___y_204_ == 0)
{
lean_object* v___x_205_; lean_object* v___x_206_; 
v___x_205_ = lean_float_to_string(v_n_193_);
v___x_206_ = lean_string_append(v___x_194_, v___x_205_);
lean_dec_ref(v___x_205_);
return v___x_206_;
}
else
{
double v___x_207_; uint8_t v___x_208_; 
v___x_207_ = lean_float_once(&l_Lasm_JS_Data_describe___closed__5, &l_Lasm_JS_Data_describe___closed__5_once, _init_l_Lasm_JS_Data_describe___closed__5);
v___x_208_ = lean_float_decLt(v_n_193_, v___x_207_);
if (v___x_208_ == 0)
{
lean_object* v___x_209_; 
v___x_209_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
v___y_196_ = v___x_209_;
goto v___jp_195_;
}
else
{
lean_object* v___x_210_; 
v___x_210_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___y_196_ = v___x_210_;
goto v___jp_195_;
}
}
}
}
case 4:
{
lean_object* v_s_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_243_; 
v_s_216_ = lean_ctor_get(v_x_187_, 0);
v_isSharedCheck_243_ = !lean_is_exclusive(v_x_187_);
if (v_isSharedCheck_243_ == 0)
{
v___x_218_ = v_x_187_;
v_isShared_219_ = v_isSharedCheck_243_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_s_216_);
lean_dec(v_x_187_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_243_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
lean_object* v___x_220_; lean_object* v___y_222_; lean_object* v___x_231_; lean_object* v___x_232_; uint8_t v___x_233_; 
v___x_220_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__9));
v___x_231_ = lean_unsigned_to_nat(60u);
v___x_232_ = lean_string_length(v_s_216_);
v___x_233_ = lean_nat_dec_lt(v___x_231_, v___x_232_);
if (v___x_233_ == 0)
{
v___y_222_ = v_s_216_;
goto v___jp_221_;
}
else
{
lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_234_ = lean_unsigned_to_nat(57u);
v___x_235_ = lean_unsigned_to_nat(0u);
v___x_236_ = lean_string_utf8_byte_size(v_s_216_);
lean_inc_ref(v_s_216_);
v___x_237_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_237_, 0, v_s_216_);
lean_ctor_set(v___x_237_, 1, v___x_235_);
lean_ctor_set(v___x_237_, 2, v___x_236_);
v___x_238_ = l_String_Slice_Pos_nextn(v___x_237_, v___x_235_, v___x_234_);
lean_dec_ref_known(v___x_237_, 3);
v___x_239_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_239_, 0, v_s_216_);
lean_ctor_set(v___x_239_, 1, v___x_235_);
lean_ctor_set(v___x_239_, 2, v___x_238_);
v___x_240_ = l_String_Slice_toString(v___x_239_);
lean_dec_ref_known(v___x_239_, 3);
v___x_241_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__10));
v___x_242_ = lean_string_append(v___x_240_, v___x_241_);
v___y_222_ = v___x_242_;
goto v___jp_221_;
}
v___jp_221_:
{
lean_object* v___x_223_; lean_object* v___x_225_; 
v___x_223_ = l_String_quote(v___y_222_);
if (v_isShared_219_ == 0)
{
lean_ctor_set_tag(v___x_218_, 3);
lean_ctor_set(v___x_218_, 0, v___x_223_);
v___x_225_ = v___x_218_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_230_; 
v_reuseFailAlloc_230_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_230_, 0, v___x_223_);
v___x_225_ = v_reuseFailAlloc_230_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_226_ = lean_unsigned_to_nat(120u);
v___x_227_ = lean_unsigned_to_nat(0u);
v___x_228_ = l_Std_Format_pretty(v___x_225_, v___x_226_, v___x_227_, v___x_227_);
v___x_229_ = lean_string_append(v___x_220_, v___x_228_);
lean_dec_ref(v___x_228_);
return v___x_229_;
}
}
}
}
case 5:
{
lean_object* v_i_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v_i_244_ = lean_ctor_get(v_x_187_, 0);
lean_inc(v_i_244_);
lean_dec_ref_known(v_x_187_, 1);
v___x_245_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__11));
v___x_246_ = l_Int_repr(v_i_244_);
lean_dec(v_i_244_);
v___x_247_ = lean_string_append(v___x_245_, v___x_246_);
lean_dec_ref(v___x_246_);
v___x_248_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__12));
v___x_249_ = lean_string_append(v___x_247_, v___x_248_);
return v___x_249_;
}
case 6:
{
lean_object* v_b_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v_b_250_ = lean_ctor_get(v_x_187_, 0);
lean_inc_ref(v_b_250_);
lean_dec_ref_known(v_x_187_, 1);
v___x_251_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__13));
v___x_252_ = lean_byte_array_size(v_b_250_);
lean_dec_ref(v_b_250_);
v___x_253_ = l_Nat_reprFast(v___x_252_);
v___x_254_ = lean_string_append(v___x_251_, v___x_253_);
lean_dec_ref(v___x_253_);
return v___x_254_;
}
case 7:
{
lean_object* v_items_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; 
v_items_255_ = lean_ctor_get(v_x_187_, 0);
lean_inc_ref(v_items_255_);
lean_dec_ref_known(v_x_187_, 1);
v___x_256_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__14));
v___x_257_ = lean_array_get_size(v_items_255_);
lean_dec_ref(v_items_255_);
v___x_258_ = l_Nat_reprFast(v___x_257_);
v___x_259_ = lean_string_append(v___x_256_, v___x_258_);
lean_dec_ref(v___x_258_);
return v___x_259_;
}
case 8:
{
lean_object* v_fields_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___y_272_; lean_object* v___x_276_; uint8_t v___x_277_; 
v_fields_260_ = lean_ctor_get(v_x_187_, 0);
lean_inc_ref_n(v_fields_260_, 2);
lean_dec_ref_known(v_x_187_, 1);
v___x_261_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__15));
v___x_262_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__16));
v___x_263_ = lean_unsigned_to_nat(6u);
v___x_264_ = lean_array_to_list(v_fields_260_);
v___x_265_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__17));
lean_inc(v___x_264_);
v___x_266_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_264_, v___x_264_, v___x_263_, v___x_265_);
lean_dec(v___x_264_);
v___x_267_ = lean_box(0);
v___x_268_ = l_List_mapTR_loop___at___00Lasm_JS_Data_describe_spec__0(v___x_266_, v___x_267_);
v___x_269_ = l_String_intercalate(v___x_262_, v___x_268_);
v___x_270_ = lean_string_append(v___x_261_, v___x_269_);
lean_dec_ref(v___x_269_);
v___x_276_ = lean_array_get_size(v_fields_260_);
lean_dec_ref(v_fields_260_);
v___x_277_ = lean_nat_dec_lt(v___x_263_, v___x_276_);
if (v___x_277_ == 0)
{
lean_object* v___x_278_; 
v___x_278_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
v___y_272_ = v___x_278_;
goto v___jp_271_;
}
else
{
lean_object* v___x_279_; 
v___x_279_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__19));
v___y_272_ = v___x_279_;
goto v___jp_271_;
}
v___jp_271_:
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
v___x_273_ = lean_string_append(v___x_270_, v___y_272_);
v___x_274_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__18));
v___x_275_ = lean_string_append(v___x_273_, v___x_274_);
return v___x_275_;
}
}
default: 
{
lean_object* v_description_280_; lean_object* v___x_281_; lean_object* v___x_282_; uint8_t v___x_283_; 
v_description_280_ = lean_ctor_get(v_x_187_, 1);
lean_inc_ref(v_description_280_);
lean_dec_ref_known(v_x_187_, 2);
v___x_281_ = lean_string_utf8_byte_size(v_description_280_);
v___x_282_ = lean_unsigned_to_nat(0u);
v___x_283_ = lean_nat_dec_eq(v___x_281_, v___x_282_);
if (v___x_283_ == 0)
{
return v_description_280_;
}
else
{
lean_object* v___x_284_; 
lean_dec_ref(v_description_280_);
v___x_284_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__20));
return v___x_284_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Data_field_spec__0(lean_object* v_key_288_, lean_object* v_as_289_, size_t v_sz_290_, size_t v_i_291_, lean_object* v_b_292_){
_start:
{
uint8_t v___x_293_; 
v___x_293_ = lean_usize_dec_lt(v_i_291_, v_sz_290_);
if (v___x_293_ == 0)
{
lean_inc_ref(v_b_292_);
return v_b_292_;
}
else
{
lean_object* v_a_294_; lean_object* v_fst_295_; lean_object* v___x_296_; uint8_t v___x_297_; 
v_a_294_ = lean_array_uget_borrowed(v_as_289_, v_i_291_);
v_fst_295_ = lean_ctor_get(v_a_294_, 0);
v___x_296_ = lean_box(0);
v___x_297_ = lean_string_dec_eq(v_fst_295_, v_key_288_);
if (v___x_297_ == 0)
{
lean_object* v___x_298_; size_t v___x_299_; size_t v___x_300_; 
v___x_298_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Data_field_spec__0___closed__0));
v___x_299_ = ((size_t)1ULL);
v___x_300_ = lean_usize_add(v_i_291_, v___x_299_);
v_i_291_ = v___x_300_;
v_b_292_ = v___x_298_;
goto _start;
}
else
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
lean_inc(v_a_294_);
v___x_302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_302_, 0, v_a_294_);
v___x_303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_303_, 0, v___x_302_);
v___x_304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_304_, 0, v___x_303_);
lean_ctor_set(v___x_304_, 1, v___x_296_);
return v___x_304_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Data_field_spec__0___boxed(lean_object* v_key_305_, lean_object* v_as_306_, lean_object* v_sz_307_, lean_object* v_i_308_, lean_object* v_b_309_){
_start:
{
size_t v_sz_boxed_310_; size_t v_i_boxed_311_; lean_object* v_res_312_; 
v_sz_boxed_310_ = lean_unbox_usize(v_sz_307_);
lean_dec(v_sz_307_);
v_i_boxed_311_ = lean_unbox_usize(v_i_308_);
lean_dec(v_i_308_);
v_res_312_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Data_field_spec__0(v_key_305_, v_as_306_, v_sz_boxed_310_, v_i_boxed_311_, v_b_309_);
lean_dec_ref(v_b_309_);
lean_dec_ref(v_as_306_);
lean_dec_ref(v_key_305_);
return v_res_312_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_field(lean_object* v_d_313_, lean_object* v_key_314_){
_start:
{
if (lean_obj_tag(v_d_313_) == 8)
{
lean_object* v_fields_315_; lean_object* v___x_316_; size_t v_sz_317_; size_t v___x_318_; lean_object* v___x_319_; lean_object* v_fst_320_; 
v_fields_315_ = lean_ctor_get(v_d_313_, 0);
v___x_316_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Data_field_spec__0___closed__0));
v_sz_317_ = lean_array_size(v_fields_315_);
v___x_318_ = ((size_t)0ULL);
v___x_319_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Data_field_spec__0(v_key_314_, v_fields_315_, v_sz_317_, v___x_318_, v___x_316_);
v_fst_320_ = lean_ctor_get(v___x_319_, 0);
lean_inc(v_fst_320_);
lean_dec_ref(v___x_319_);
if (lean_obj_tag(v_fst_320_) == 0)
{
lean_object* v___x_321_; 
v___x_321_ = lean_box(0);
return v___x_321_;
}
else
{
lean_object* v_val_322_; 
v_val_322_ = lean_ctor_get(v_fst_320_, 0);
lean_inc(v_val_322_);
lean_dec_ref_known(v_fst_320_, 1);
if (lean_obj_tag(v_val_322_) == 0)
{
lean_object* v___x_323_; 
v___x_323_ = lean_box(0);
return v___x_323_;
}
else
{
lean_object* v_val_324_; lean_object* v_snd_325_; 
v_val_324_ = lean_ctor_get(v_val_322_, 0);
lean_inc(v_val_324_);
lean_dec_ref_known(v_val_322_, 1);
v_snd_325_ = lean_ctor_get(v_val_324_, 1);
lean_inc(v_snd_325_);
lean_dec(v_val_324_);
return v_snd_325_;
}
}
}
else
{
lean_object* v___x_326_; 
v___x_326_ = lean_box(0);
return v___x_326_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_field___boxed(lean_object* v_d_327_, lean_object* v_key_328_){
_start:
{
lean_object* v_res_329_; 
v_res_329_ = l_Lasm_JS_Data_field(v_d_327_, v_key_328_);
lean_dec_ref(v_key_328_);
lean_dec(v_d_327_);
return v_res_329_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU32(lean_object* v_b_330_, uint32_t v_n_331_){
_start:
{
uint8_t v___x_332_; lean_object* v___x_333_; uint32_t v___x_334_; uint32_t v___x_335_; uint8_t v___x_336_; lean_object* v___x_337_; uint32_t v___x_338_; uint32_t v___x_339_; uint8_t v___x_340_; lean_object* v___x_341_; uint32_t v___x_342_; uint32_t v___x_343_; uint8_t v___x_344_; lean_object* v___x_345_; 
v___x_332_ = lean_uint32_to_uint8(v_n_331_);
v___x_333_ = lean_byte_array_push(v_b_330_, v___x_332_);
v___x_334_ = 8;
v___x_335_ = lean_uint32_shift_right(v_n_331_, v___x_334_);
v___x_336_ = lean_uint32_to_uint8(v___x_335_);
v___x_337_ = lean_byte_array_push(v___x_333_, v___x_336_);
v___x_338_ = 16;
v___x_339_ = lean_uint32_shift_right(v_n_331_, v___x_338_);
v___x_340_ = lean_uint32_to_uint8(v___x_339_);
v___x_341_ = lean_byte_array_push(v___x_337_, v___x_340_);
v___x_342_ = 24;
v___x_343_ = lean_uint32_shift_right(v_n_331_, v___x_342_);
v___x_344_ = lean_uint32_to_uint8(v___x_343_);
v___x_345_ = lean_byte_array_push(v___x_341_, v___x_344_);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU32___boxed(lean_object* v_b_346_, lean_object* v_n_347_){
_start:
{
uint32_t v_n_boxed_348_; lean_object* v_res_349_; 
v_n_boxed_348_ = lean_unbox_uint32(v_n_347_);
lean_dec(v_n_347_);
v_res_349_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU32(v_b_346_, v_n_boxed_348_);
return v_res_349_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64_spec__0___redArg(uint64_t v_n_350_, lean_object* v_range_351_, lean_object* v_b_352_, lean_object* v_i_353_){
_start:
{
lean_object* v_stop_354_; lean_object* v_step_355_; uint8_t v___x_356_; 
v_stop_354_ = lean_ctor_get(v_range_351_, 1);
v_step_355_ = lean_ctor_get(v_range_351_, 2);
v___x_356_ = lean_nat_dec_lt(v_i_353_, v_stop_354_);
if (v___x_356_ == 0)
{
lean_dec(v_i_353_);
return v_b_352_;
}
else
{
lean_object* v___x_357_; lean_object* v___x_358_; uint64_t v___x_359_; uint64_t v___x_360_; uint8_t v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_357_ = lean_unsigned_to_nat(8u);
v___x_358_ = lean_nat_mul(v___x_357_, v_i_353_);
v___x_359_ = lean_uint64_of_nat(v___x_358_);
lean_dec(v___x_358_);
v___x_360_ = lean_uint64_shift_right(v_n_350_, v___x_359_);
v___x_361_ = lean_uint64_to_uint8(v___x_360_);
v___x_362_ = lean_byte_array_push(v_b_352_, v___x_361_);
v___x_363_ = lean_nat_add(v_i_353_, v_step_355_);
lean_dec(v_i_353_);
v_b_352_ = v___x_362_;
v_i_353_ = v___x_363_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64_spec__0___redArg___boxed(lean_object* v_n_365_, lean_object* v_range_366_, lean_object* v_b_367_, lean_object* v_i_368_){
_start:
{
uint64_t v_n_boxed_369_; lean_object* v_res_370_; 
v_n_boxed_369_ = lean_unbox_uint64(v_n_365_);
lean_dec_ref(v_n_365_);
v_res_370_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64_spec__0___redArg(v_n_boxed_369_, v_range_366_, v_b_367_, v_i_368_);
lean_dec_ref(v_range_366_);
return v_res_370_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64(lean_object* v_b_375_, uint64_t v_n_376_){
_start:
{
lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_377_ = lean_unsigned_to_nat(0u);
v___x_378_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64___closed__0));
v___x_379_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64_spec__0___redArg(v_n_376_, v___x_378_, v_b_375_, v___x_377_);
return v___x_379_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64___boxed(lean_object* v_b_380_, lean_object* v_n_381_){
_start:
{
uint64_t v_n_boxed_382_; lean_object* v_res_383_; 
v_n_boxed_382_ = lean_unbox_uint64(v_n_381_);
lean_dec_ref(v_n_381_);
v_res_383_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64(v_b_380_, v_n_boxed_382_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64_spec__0(uint64_t v_n_384_, lean_object* v_range_385_, lean_object* v_b_386_, lean_object* v_i_387_, lean_object* v_hs_388_, lean_object* v_hl_389_){
_start:
{
lean_object* v___x_390_; 
v___x_390_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64_spec__0___redArg(v_n_384_, v_range_385_, v_b_386_, v_i_387_);
return v___x_390_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64_spec__0___boxed(lean_object* v_n_391_, lean_object* v_range_392_, lean_object* v_b_393_, lean_object* v_i_394_, lean_object* v_hs_395_, lean_object* v_hl_396_){
_start:
{
uint64_t v_n_boxed_397_; lean_object* v_res_398_; 
v_n_boxed_397_ = lean_unbox_uint64(v_n_391_);
lean_dec_ref(v_n_391_);
v_res_398_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64_spec__0(v_n_boxed_397_, v_range_392_, v_b_393_, v_i_394_, v_hs_395_, v_hl_396_);
lean_dec_ref(v_range_392_);
return v_res_398_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushBytes(lean_object* v_b_399_, lean_object* v_x_400_){
_start:
{
lean_object* v___x_401_; uint32_t v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; uint8_t v___x_406_; lean_object* v___x_407_; 
v___x_401_ = lean_byte_array_size(v_x_400_);
v___x_402_ = lean_uint32_of_nat(v___x_401_);
v___x_403_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU32(v_b_399_, v___x_402_);
v___x_404_ = lean_unsigned_to_nat(0u);
v___x_405_ = lean_byte_array_size(v___x_403_);
v___x_406_ = 0;
v___x_407_ = lean_byte_array_copy_slice(v_x_400_, v___x_404_, v___x_403_, v___x_405_, v___x_401_, v___x_406_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushBytes___boxed(lean_object* v_b_408_, lean_object* v_x_409_){
_start:
{
lean_object* v_res_410_; 
v_res_410_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushBytes(v_b_408_, v_x_409_);
lean_dec_ref(v_x_409_);
return v_res_410_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushString(lean_object* v_b_411_, lean_object* v_s_412_){
_start:
{
lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_413_ = lean_string_to_utf8(v_s_412_);
v___x_414_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushBytes(v_b_411_, v___x_413_);
lean_dec_ref(v___x_413_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushString___boxed(lean_object* v_b_415_, lean_object* v_s_416_){
_start:
{
lean_object* v_res_417_; 
v_res_417_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushString(v_b_415_, v_s_416_);
lean_dec_ref(v_s_416_);
return v_res_417_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__1(lean_object* v_as_418_, size_t v_i_419_, size_t v_stop_420_, lean_object* v_b_421_){
_start:
{
uint8_t v___x_422_; 
v___x_422_ = lean_usize_dec_eq(v_i_419_, v_stop_420_);
if (v___x_422_ == 0)
{
lean_object* v___x_423_; lean_object* v_fst_424_; lean_object* v_snd_425_; lean_object* v___x_426_; lean_object* v___x_427_; size_t v___x_428_; size_t v___x_429_; 
v___x_423_ = lean_array_uget_borrowed(v_as_418_, v_i_419_);
v_fst_424_ = lean_ctor_get(v___x_423_, 0);
v_snd_425_ = lean_ctor_get(v___x_423_, 1);
v___x_426_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushString(v_b_421_, v_fst_424_);
v___x_427_ = l_Lasm_JS_Wire_write(v___x_426_, v_snd_425_);
v___x_428_ = ((size_t)1ULL);
v___x_429_ = lean_usize_add(v_i_419_, v___x_428_);
v_i_419_ = v___x_429_;
v_b_421_ = v___x_427_;
goto _start;
}
else
{
return v_b_421_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_write(lean_object* v_b_431_, lean_object* v_x_432_){
_start:
{
switch(lean_obj_tag(v_x_432_))
{
case 0:
{
uint8_t v___x_433_; lean_object* v___x_434_; 
v___x_433_ = 0;
v___x_434_ = lean_byte_array_push(v_b_431_, v___x_433_);
return v___x_434_;
}
case 1:
{
uint8_t v___x_435_; lean_object* v___x_436_; 
v___x_435_ = 1;
v___x_436_ = lean_byte_array_push(v_b_431_, v___x_435_);
return v___x_436_;
}
case 2:
{
uint8_t v_b_437_; 
v_b_437_ = lean_ctor_get_uint8(v_x_432_, 0);
if (v_b_437_ == 0)
{
uint8_t v___x_438_; lean_object* v___x_439_; 
v___x_438_ = 2;
v___x_439_ = lean_byte_array_push(v_b_431_, v___x_438_);
return v___x_439_;
}
else
{
uint8_t v___x_440_; lean_object* v___x_441_; 
v___x_440_ = 3;
v___x_441_ = lean_byte_array_push(v_b_431_, v___x_440_);
return v___x_441_;
}
}
case 3:
{
double v_n_442_; uint8_t v___x_443_; lean_object* v___x_444_; uint64_t v___x_445_; lean_object* v___x_446_; 
v_n_442_ = lean_ctor_get_float(v_x_432_, 0);
v___x_443_ = 4;
v___x_444_ = lean_byte_array_push(v_b_431_, v___x_443_);
v___x_445_ = lean_float_to_bits(v_n_442_);
v___x_446_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64(v___x_444_, v___x_445_);
return v___x_446_;
}
case 4:
{
lean_object* v_s_447_; uint8_t v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; 
v_s_447_ = lean_ctor_get(v_x_432_, 0);
v___x_448_ = 5;
v___x_449_ = lean_byte_array_push(v_b_431_, v___x_448_);
v___x_450_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushString(v___x_449_, v_s_447_);
return v___x_450_;
}
case 5:
{
lean_object* v_i_451_; uint8_t v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
v_i_451_ = lean_ctor_get(v_x_432_, 0);
v___x_452_ = 6;
v___x_453_ = lean_byte_array_push(v_b_431_, v___x_452_);
v___x_454_ = l_Int_repr(v_i_451_);
v___x_455_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushString(v___x_453_, v___x_454_);
lean_dec_ref(v___x_454_);
return v___x_455_;
}
case 6:
{
lean_object* v_b_456_; uint8_t v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; 
v_b_456_ = lean_ctor_get(v_x_432_, 0);
v___x_457_ = 7;
v___x_458_ = lean_byte_array_push(v_b_431_, v___x_457_);
v___x_459_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushBytes(v___x_458_, v_b_456_);
return v___x_459_;
}
case 7:
{
lean_object* v_items_460_; uint8_t v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; uint32_t v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; uint8_t v___x_467_; 
v_items_460_ = lean_ctor_get(v_x_432_, 0);
v___x_461_ = 8;
v___x_462_ = lean_byte_array_push(v_b_431_, v___x_461_);
v___x_463_ = lean_array_get_size(v_items_460_);
v___x_464_ = lean_uint32_of_nat(v___x_463_);
v___x_465_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU32(v___x_462_, v___x_464_);
v___x_466_ = lean_unsigned_to_nat(0u);
v___x_467_ = lean_nat_dec_lt(v___x_466_, v___x_463_);
if (v___x_467_ == 0)
{
return v___x_465_;
}
else
{
uint8_t v___x_468_; 
v___x_468_ = lean_nat_dec_le(v___x_463_, v___x_463_);
if (v___x_468_ == 0)
{
if (v___x_467_ == 0)
{
return v___x_465_;
}
else
{
size_t v___x_469_; size_t v___x_470_; lean_object* v___x_471_; 
v___x_469_ = ((size_t)0ULL);
v___x_470_ = lean_usize_of_nat(v___x_463_);
v___x_471_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__0(v_items_460_, v___x_469_, v___x_470_, v___x_465_);
return v___x_471_;
}
}
else
{
size_t v___x_472_; size_t v___x_473_; lean_object* v___x_474_; 
v___x_472_ = ((size_t)0ULL);
v___x_473_ = lean_usize_of_nat(v___x_463_);
v___x_474_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__0(v_items_460_, v___x_472_, v___x_473_, v___x_465_);
return v___x_474_;
}
}
}
case 8:
{
lean_object* v_fields_475_; uint8_t v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; uint32_t v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; uint8_t v___x_482_; 
v_fields_475_ = lean_ctor_get(v_x_432_, 0);
v___x_476_ = 9;
v___x_477_ = lean_byte_array_push(v_b_431_, v___x_476_);
v___x_478_ = lean_array_get_size(v_fields_475_);
v___x_479_ = lean_uint32_of_nat(v___x_478_);
v___x_480_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU32(v___x_477_, v___x_479_);
v___x_481_ = lean_unsigned_to_nat(0u);
v___x_482_ = lean_nat_dec_lt(v___x_481_, v___x_478_);
if (v___x_482_ == 0)
{
return v___x_480_;
}
else
{
uint8_t v___x_483_; 
v___x_483_ = lean_nat_dec_le(v___x_478_, v___x_478_);
if (v___x_483_ == 0)
{
if (v___x_482_ == 0)
{
return v___x_480_;
}
else
{
size_t v___x_484_; size_t v___x_485_; lean_object* v___x_486_; 
v___x_484_ = ((size_t)0ULL);
v___x_485_ = lean_usize_of_nat(v___x_478_);
v___x_486_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__1(v_fields_475_, v___x_484_, v___x_485_, v___x_480_);
return v___x_486_;
}
}
else
{
size_t v___x_487_; size_t v___x_488_; lean_object* v___x_489_; 
v___x_487_ = ((size_t)0ULL);
v___x_488_ = lean_usize_of_nat(v___x_478_);
v___x_489_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__1(v_fields_475_, v___x_487_, v___x_488_, v___x_480_);
return v___x_489_;
}
}
}
default: 
{
lean_object* v_value_490_; uint8_t v___x_491_; lean_object* v___x_492_; uint32_t v___x_493_; lean_object* v___x_494_; uint32_t v___x_495_; lean_object* v___x_496_; 
v_value_490_ = lean_ctor_get(v_x_432_, 0);
v___x_491_ = 10;
v___x_492_ = lean_byte_array_push(v_b_431_, v___x_491_);
v___x_493_ = lasm_js_value_handle(v_value_490_);
v___x_494_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU32(v___x_492_, v___x_493_);
v___x_495_ = 0;
v___x_496_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU32(v___x_494_, v___x_495_);
return v___x_496_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__0(lean_object* v_as_497_, size_t v_i_498_, size_t v_stop_499_, lean_object* v_b_500_){
_start:
{
uint8_t v___x_501_; 
v___x_501_ = lean_usize_dec_eq(v_i_498_, v_stop_499_);
if (v___x_501_ == 0)
{
lean_object* v___x_502_; lean_object* v___x_503_; size_t v___x_504_; size_t v___x_505_; 
v___x_502_ = lean_array_uget_borrowed(v_as_497_, v_i_498_);
v___x_503_ = l_Lasm_JS_Wire_write(v_b_500_, v___x_502_);
v___x_504_ = ((size_t)1ULL);
v___x_505_ = lean_usize_add(v_i_498_, v___x_504_);
v_i_498_ = v___x_505_;
v_b_500_ = v___x_503_;
goto _start;
}
else
{
return v_b_500_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__0___boxed(lean_object* v_as_507_, lean_object* v_i_508_, lean_object* v_stop_509_, lean_object* v_b_510_){
_start:
{
size_t v_i_boxed_511_; size_t v_stop_boxed_512_; lean_object* v_res_513_; 
v_i_boxed_511_ = lean_unbox_usize(v_i_508_);
lean_dec(v_i_508_);
v_stop_boxed_512_ = lean_unbox_usize(v_stop_509_);
lean_dec(v_stop_509_);
v_res_513_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__0(v_as_507_, v_i_boxed_511_, v_stop_boxed_512_, v_b_510_);
lean_dec_ref(v_as_507_);
return v_res_513_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__1___boxed(lean_object* v_as_514_, lean_object* v_i_515_, lean_object* v_stop_516_, lean_object* v_b_517_){
_start:
{
size_t v_i_boxed_518_; size_t v_stop_boxed_519_; lean_object* v_res_520_; 
v_i_boxed_518_ = lean_unbox_usize(v_i_515_);
lean_dec(v_i_515_);
v_stop_boxed_519_ = lean_unbox_usize(v_stop_516_);
lean_dec(v_stop_516_);
v_res_520_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__1(v_as_514_, v_i_boxed_518_, v_stop_boxed_519_, v_b_517_);
lean_dec_ref(v_as_514_);
return v_res_520_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_write___boxed(lean_object* v_b_521_, lean_object* v_x_522_){
_start:
{
lean_object* v_res_523_; 
v_res_523_ = l_Lasm_JS_Wire_write(v_b_521_, v_x_522_);
lean_dec(v_x_522_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_encode(lean_object* v_d_524_){
_start:
{
lean_object* v___x_525_; lean_object* v___x_526_; 
v___x_525_ = l_ByteArray_empty;
v___x_526_ = l_Lasm_JS_Wire_write(v___x_525_, v_d_524_);
return v___x_526_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_encode___boxed(lean_object* v_d_527_){
_start:
{
lean_object* v_res_528_; 
v_res_528_ = l_Lasm_JS_Wire_encode(v_d_527_);
lean_dec(v_d_527_);
return v_res_528_;
}
}
LEAN_EXPORT uint8_t l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32___lam__0(lean_object* v_xs_529_, lean_object* v_i_530_){
_start:
{
lean_object* v___x_531_; uint8_t v___x_532_; 
v___x_531_ = lean_byte_array_size(v_xs_529_);
v___x_532_ = lean_nat_dec_lt(v_i_530_, v___x_531_);
return v___x_532_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32___lam__0___boxed(lean_object* v_xs_533_, lean_object* v_i_534_){
_start:
{
uint8_t v_res_535_; lean_object* v_r_536_; 
v_res_535_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32___lam__0(v_xs_533_, v_i_534_);
lean_dec(v_i_534_);
lean_dec_ref(v_xs_533_);
v_r_536_ = lean_box(v_res_535_);
return v_r_536_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32(lean_object* v_b_540_, lean_object* v_o_541_){
_start:
{
uint32_t v___y_543_; uint8_t v___y_544_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; uint8_t v___x_554_; 
v___x_551_ = lean_unsigned_to_nat(4u);
v___x_552_ = lean_nat_add(v_o_541_, v___x_551_);
v___x_553_ = lean_byte_array_size(v_b_540_);
v___x_554_ = lean_nat_dec_le(v___x_552_, v___x_553_);
lean_dec(v___x_552_);
if (v___x_554_ == 0)
{
lean_object* v___x_555_; 
v___x_555_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32___closed__1));
return v___x_555_;
}
else
{
uint8_t v___x_556_; uint32_t v___y_558_; uint8_t v___y_559_; uint32_t v___y_572_; uint8_t v___y_573_; uint8_t v___y_586_; uint8_t v___x_595_; 
v___x_556_ = 0;
v___x_595_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32___lam__0(v_b_540_, v_o_541_);
if (v___x_595_ == 0)
{
lean_object* v___x_596_; lean_object* v___x_597_; uint8_t v___x_598_; 
v___x_596_ = lean_box(v___x_556_);
v___x_597_ = l_outOfBounds___redArg(v___x_596_);
lean_dec(v___x_596_);
v___x_598_ = lean_unbox(v___x_597_);
lean_dec(v___x_597_);
v___y_586_ = v___x_598_;
goto v___jp_585_;
}
else
{
uint8_t v___x_599_; 
v___x_599_ = lean_byte_array_fget(v_b_540_, v_o_541_);
v___y_586_ = v___x_599_;
goto v___jp_585_;
}
v___jp_557_:
{
uint32_t v___x_560_; uint32_t v___x_561_; uint32_t v___x_562_; uint32_t v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; uint8_t v___x_566_; 
v___x_560_ = lean_uint8_to_uint32(v___y_559_);
v___x_561_ = 16;
v___x_562_ = lean_uint32_shift_left(v___x_560_, v___x_561_);
v___x_563_ = lean_uint32_lor(v___y_558_, v___x_562_);
v___x_564_ = lean_unsigned_to_nat(3u);
v___x_565_ = lean_nat_add(v_o_541_, v___x_564_);
v___x_566_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32___lam__0(v_b_540_, v___x_565_);
if (v___x_566_ == 0)
{
lean_object* v___x_567_; lean_object* v___x_568_; uint8_t v___x_569_; 
lean_dec(v___x_565_);
v___x_567_ = lean_box(v___x_556_);
v___x_568_ = l_outOfBounds___redArg(v___x_567_);
lean_dec(v___x_567_);
v___x_569_ = lean_unbox(v___x_568_);
lean_dec(v___x_568_);
v___y_543_ = v___x_563_;
v___y_544_ = v___x_569_;
goto v___jp_542_;
}
else
{
uint8_t v___x_570_; 
v___x_570_ = lean_byte_array_fget(v_b_540_, v___x_565_);
lean_dec(v___x_565_);
v___y_543_ = v___x_563_;
v___y_544_ = v___x_570_;
goto v___jp_542_;
}
}
v___jp_571_:
{
uint32_t v___x_574_; uint32_t v___x_575_; uint32_t v___x_576_; uint32_t v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; uint8_t v___x_580_; 
v___x_574_ = lean_uint8_to_uint32(v___y_573_);
v___x_575_ = 8;
v___x_576_ = lean_uint32_shift_left(v___x_574_, v___x_575_);
v___x_577_ = lean_uint32_lor(v___y_572_, v___x_576_);
v___x_578_ = lean_unsigned_to_nat(2u);
v___x_579_ = lean_nat_add(v_o_541_, v___x_578_);
v___x_580_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32___lam__0(v_b_540_, v___x_579_);
if (v___x_580_ == 0)
{
lean_object* v___x_581_; lean_object* v___x_582_; uint8_t v___x_583_; 
lean_dec(v___x_579_);
v___x_581_ = lean_box(v___x_556_);
v___x_582_ = l_outOfBounds___redArg(v___x_581_);
lean_dec(v___x_581_);
v___x_583_ = lean_unbox(v___x_582_);
lean_dec(v___x_582_);
v___y_558_ = v___x_577_;
v___y_559_ = v___x_583_;
goto v___jp_557_;
}
else
{
uint8_t v___x_584_; 
v___x_584_ = lean_byte_array_fget(v_b_540_, v___x_579_);
lean_dec(v___x_579_);
v___y_558_ = v___x_577_;
v___y_559_ = v___x_584_;
goto v___jp_557_;
}
}
v___jp_585_:
{
uint32_t v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; uint8_t v___x_590_; 
v___x_587_ = lean_uint8_to_uint32(v___y_586_);
v___x_588_ = lean_unsigned_to_nat(1u);
v___x_589_ = lean_nat_add(v_o_541_, v___x_588_);
v___x_590_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32___lam__0(v_b_540_, v___x_589_);
if (v___x_590_ == 0)
{
lean_object* v___x_591_; lean_object* v___x_592_; uint8_t v___x_593_; 
lean_dec(v___x_589_);
v___x_591_ = lean_box(v___x_556_);
v___x_592_ = l_outOfBounds___redArg(v___x_591_);
lean_dec(v___x_591_);
v___x_593_ = lean_unbox(v___x_592_);
lean_dec(v___x_592_);
v___y_572_ = v___x_587_;
v___y_573_ = v___x_593_;
goto v___jp_571_;
}
else
{
uint8_t v___x_594_; 
v___x_594_ = lean_byte_array_fget(v_b_540_, v___x_589_);
lean_dec(v___x_589_);
v___y_572_ = v___x_587_;
v___y_573_ = v___x_594_;
goto v___jp_571_;
}
}
}
v___jp_542_:
{
uint32_t v___x_545_; uint32_t v___x_546_; uint32_t v___x_547_; uint32_t v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; 
v___x_545_ = lean_uint8_to_uint32(v___y_544_);
v___x_546_ = 24;
v___x_547_ = lean_uint32_shift_left(v___x_545_, v___x_546_);
v___x_548_ = lean_uint32_lor(v___y_543_, v___x_547_);
v___x_549_ = lean_box_uint32(v___x_548_);
v___x_550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_550_, 0, v___x_549_);
return v___x_550_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32___boxed(lean_object* v_b_600_, lean_object* v_o_601_){
_start:
{
lean_object* v_res_602_; 
v_res_602_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32(v_b_600_, v_o_601_);
lean_dec(v_o_601_);
lean_dec_ref(v_b_600_);
return v_res_602_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64_spec__0___redArg(lean_object* v_o_603_, lean_object* v_b_604_, lean_object* v_range_605_, uint64_t v_b_606_, lean_object* v_i_607_){
_start:
{
lean_object* v_stop_608_; lean_object* v_step_609_; uint8_t v___x_610_; 
v_stop_608_ = lean_ctor_get(v_range_605_, 1);
v_step_609_ = lean_ctor_get(v_range_605_, 2);
v___x_610_ = lean_nat_dec_lt(v_i_607_, v_stop_608_);
if (v___x_610_ == 0)
{
lean_dec(v_i_607_);
return v_b_606_;
}
else
{
lean_object* v___x_611_; uint8_t v___y_613_; lean_object* v___x_621_; lean_object* v___x_622_; uint8_t v___x_623_; 
v___x_611_ = lean_unsigned_to_nat(8u);
v___x_621_ = lean_nat_add(v_o_603_, v_i_607_);
v___x_622_ = lean_byte_array_size(v_b_604_);
v___x_623_ = lean_nat_dec_lt(v___x_621_, v___x_622_);
if (v___x_623_ == 0)
{
uint8_t v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; uint8_t v___x_627_; 
lean_dec(v___x_621_);
v___x_624_ = 0;
v___x_625_ = lean_box(v___x_624_);
v___x_626_ = l_outOfBounds___redArg(v___x_625_);
lean_dec(v___x_625_);
v___x_627_ = lean_unbox(v___x_626_);
lean_dec(v___x_626_);
v___y_613_ = v___x_627_;
goto v___jp_612_;
}
else
{
uint8_t v___x_628_; 
v___x_628_ = lean_byte_array_fget(v_b_604_, v___x_621_);
lean_dec(v___x_621_);
v___y_613_ = v___x_628_;
goto v___jp_612_;
}
v___jp_612_:
{
uint64_t v___x_614_; lean_object* v___x_615_; uint64_t v___x_616_; uint64_t v___x_617_; uint64_t v___x_618_; lean_object* v___x_619_; 
v___x_614_ = lean_uint8_to_uint64(v___y_613_);
v___x_615_ = lean_nat_mul(v___x_611_, v_i_607_);
v___x_616_ = lean_uint64_of_nat(v___x_615_);
lean_dec(v___x_615_);
v___x_617_ = lean_uint64_shift_left(v___x_614_, v___x_616_);
v___x_618_ = lean_uint64_lor(v_b_606_, v___x_617_);
v___x_619_ = lean_nat_add(v_i_607_, v_step_609_);
lean_dec(v_i_607_);
v_b_606_ = v___x_618_;
v_i_607_ = v___x_619_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64_spec__0___redArg___boxed(lean_object* v_o_629_, lean_object* v_b_630_, lean_object* v_range_631_, lean_object* v_b_632_, lean_object* v_i_633_){
_start:
{
uint64_t v_b_boxed_634_; uint64_t v_res_635_; lean_object* v_r_636_; 
v_b_boxed_634_ = lean_unbox_uint64(v_b_632_);
lean_dec_ref(v_b_632_);
v_res_635_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64_spec__0___redArg(v_o_629_, v_b_630_, v_range_631_, v_b_boxed_634_, v_i_633_);
lean_dec_ref(v_range_631_);
lean_dec_ref(v_b_630_);
lean_dec(v_o_629_);
v_r_636_ = lean_box_uint64(v_res_635_);
return v_r_636_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64(lean_object* v_b_639_, lean_object* v_o_640_){
_start:
{
lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; uint8_t v___x_644_; 
v___x_641_ = lean_unsigned_to_nat(8u);
v___x_642_ = lean_nat_add(v_o_640_, v___x_641_);
v___x_643_ = lean_byte_array_size(v_b_639_);
v___x_644_ = lean_nat_dec_le(v___x_642_, v___x_643_);
lean_dec(v___x_642_);
if (v___x_644_ == 0)
{
lean_object* v___x_645_; 
v___x_645_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64___closed__0));
return v___x_645_;
}
else
{
lean_object* v___x_646_; uint64_t v_v_647_; lean_object* v___x_648_; uint64_t v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_646_ = lean_unsigned_to_nat(0u);
v_v_647_ = 0ULL;
v___x_648_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64___closed__0));
v___x_649_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64_spec__0___redArg(v_o_640_, v_b_639_, v___x_648_, v_v_647_, v___x_646_);
v___x_650_ = lean_box_uint64(v___x_649_);
v___x_651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_651_, 0, v___x_650_);
return v___x_651_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64___boxed(lean_object* v_b_652_, lean_object* v_o_653_){
_start:
{
lean_object* v_res_654_; 
v_res_654_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64(v_b_652_, v_o_653_);
lean_dec(v_o_653_);
lean_dec_ref(v_b_652_);
return v_res_654_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64_spec__0(lean_object* v_o_655_, lean_object* v_b_656_, lean_object* v_range_657_, uint64_t v_b_658_, lean_object* v_i_659_, lean_object* v_hs_660_, lean_object* v_hl_661_){
_start:
{
uint64_t v___x_662_; 
v___x_662_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64_spec__0___redArg(v_o_655_, v_b_656_, v_range_657_, v_b_658_, v_i_659_);
return v___x_662_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64_spec__0___boxed(lean_object* v_o_663_, lean_object* v_b_664_, lean_object* v_range_665_, lean_object* v_b_666_, lean_object* v_i_667_, lean_object* v_hs_668_, lean_object* v_hl_669_){
_start:
{
uint64_t v_b_boxed_670_; uint64_t v_res_671_; lean_object* v_r_672_; 
v_b_boxed_670_ = lean_unbox_uint64(v_b_666_);
lean_dec_ref(v_b_666_);
v_res_671_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64_spec__0(v_o_663_, v_b_664_, v_range_665_, v_b_boxed_670_, v_i_667_, v_hs_668_, v_hl_669_);
lean_dec_ref(v_range_665_);
lean_dec_ref(v_b_664_);
lean_dec(v_o_663_);
v_r_672_ = lean_box_uint64(v_res_671_);
return v_r_672_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readRaw(lean_object* v_b_675_, lean_object* v_o_676_){
_start:
{
lean_object* v___x_677_; 
v___x_677_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32(v_b_675_, v_o_676_);
if (lean_obj_tag(v___x_677_) == 0)
{
lean_object* v_a_678_; lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_685_; 
v_a_678_ = lean_ctor_get(v___x_677_, 0);
v_isSharedCheck_685_ = !lean_is_exclusive(v___x_677_);
if (v_isSharedCheck_685_ == 0)
{
v___x_680_ = v___x_677_;
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
else
{
lean_inc(v_a_678_);
lean_dec(v___x_677_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
lean_object* v___x_683_; 
if (v_isShared_681_ == 0)
{
v___x_683_ = v___x_680_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v_a_678_);
v___x_683_ = v_reuseFailAlloc_684_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
return v___x_683_;
}
}
}
else
{
lean_object* v_a_686_; lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_703_; 
v_a_686_ = lean_ctor_get(v___x_677_, 0);
v_isSharedCheck_703_ = !lean_is_exclusive(v___x_677_);
if (v_isSharedCheck_703_ == 0)
{
v___x_688_ = v___x_677_;
v_isShared_689_ = v_isSharedCheck_703_;
goto v_resetjp_687_;
}
else
{
lean_inc(v_a_686_);
lean_dec(v___x_677_);
v___x_688_ = lean_box(0);
v_isShared_689_ = v_isSharedCheck_703_;
goto v_resetjp_687_;
}
v_resetjp_687_:
{
uint32_t v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; uint8_t v___x_696_; 
v___x_690_ = lean_unbox_uint32(v_a_686_);
lean_dec(v_a_686_);
v___x_691_ = lean_uint32_to_nat(v___x_690_);
v___x_692_ = lean_unsigned_to_nat(4u);
v___x_693_ = lean_nat_add(v_o_676_, v___x_692_);
v___x_694_ = lean_nat_add(v___x_693_, v___x_691_);
lean_dec(v___x_691_);
v___x_695_ = lean_byte_array_size(v_b_675_);
v___x_696_ = lean_nat_dec_le(v___x_694_, v___x_695_);
if (v___x_696_ == 0)
{
lean_object* v___x_697_; 
lean_dec(v___x_694_);
lean_dec(v___x_693_);
lean_del_object(v___x_688_);
v___x_697_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readRaw___closed__0));
return v___x_697_;
}
else
{
lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_701_; 
v___x_698_ = l_ByteArray_extract(v_b_675_, v___x_693_, v___x_694_);
v___x_699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_699_, 0, v___x_698_);
lean_ctor_set(v___x_699_, 1, v___x_694_);
if (v_isShared_689_ == 0)
{
lean_ctor_set(v___x_688_, 0, v___x_699_);
v___x_701_ = v___x_688_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v___x_699_);
v___x_701_ = v_reuseFailAlloc_702_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
return v___x_701_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readRaw___boxed(lean_object* v_b_704_, lean_object* v_o_705_){
_start:
{
lean_object* v_res_706_; 
v_res_706_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readRaw(v_b_704_, v_o_705_);
lean_dec(v_o_705_);
lean_dec_ref(v_b_704_);
return v_res_706_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readString(lean_object* v_b_710_, lean_object* v_o_711_){
_start:
{
lean_object* v___x_712_; 
v___x_712_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readRaw(v_b_710_, v_o_711_);
if (lean_obj_tag(v___x_712_) == 0)
{
lean_object* v_a_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_720_; 
v_a_713_ = lean_ctor_get(v___x_712_, 0);
v_isSharedCheck_720_ = !lean_is_exclusive(v___x_712_);
if (v_isSharedCheck_720_ == 0)
{
v___x_715_ = v___x_712_;
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
else
{
lean_inc(v_a_713_);
lean_dec(v___x_712_);
v___x_715_ = lean_box(0);
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
v_resetjp_714_:
{
lean_object* v___x_718_; 
if (v_isShared_716_ == 0)
{
v___x_718_ = v___x_715_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v_a_713_);
v___x_718_ = v_reuseFailAlloc_719_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
return v___x_718_;
}
}
}
else
{
lean_object* v_a_721_; lean_object* v___x_723_; uint8_t v_isShared_724_; uint8_t v_isSharedCheck_740_; 
v_a_721_ = lean_ctor_get(v___x_712_, 0);
v_isSharedCheck_740_ = !lean_is_exclusive(v___x_712_);
if (v_isSharedCheck_740_ == 0)
{
v___x_723_ = v___x_712_;
v_isShared_724_ = v_isSharedCheck_740_;
goto v_resetjp_722_;
}
else
{
lean_inc(v_a_721_);
lean_dec(v___x_712_);
v___x_723_ = lean_box(0);
v_isShared_724_ = v_isSharedCheck_740_;
goto v_resetjp_722_;
}
v_resetjp_722_:
{
lean_object* v_fst_725_; lean_object* v_snd_726_; lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_739_; 
v_fst_725_ = lean_ctor_get(v_a_721_, 0);
v_snd_726_ = lean_ctor_get(v_a_721_, 1);
v_isSharedCheck_739_ = !lean_is_exclusive(v_a_721_);
if (v_isSharedCheck_739_ == 0)
{
v___x_728_ = v_a_721_;
v_isShared_729_ = v_isSharedCheck_739_;
goto v_resetjp_727_;
}
else
{
lean_inc(v_snd_726_);
lean_inc(v_fst_725_);
lean_dec(v_a_721_);
v___x_728_ = lean_box(0);
v_isShared_729_ = v_isSharedCheck_739_;
goto v_resetjp_727_;
}
v_resetjp_727_:
{
uint8_t v___x_730_; 
v___x_730_ = lean_string_validate_utf8(v_fst_725_);
if (v___x_730_ == 0)
{
lean_object* v___x_731_; 
lean_del_object(v___x_728_);
lean_dec(v_snd_726_);
lean_dec(v_fst_725_);
lean_del_object(v___x_723_);
v___x_731_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readString___closed__1));
return v___x_731_;
}
else
{
lean_object* v___x_732_; lean_object* v___x_734_; 
v___x_732_ = lean_string_from_utf8_unchecked(v_fst_725_);
if (v_isShared_729_ == 0)
{
lean_ctor_set(v___x_728_, 0, v___x_732_);
v___x_734_ = v___x_728_;
goto v_reusejp_733_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v___x_732_);
lean_ctor_set(v_reuseFailAlloc_738_, 1, v_snd_726_);
v___x_734_ = v_reuseFailAlloc_738_;
goto v_reusejp_733_;
}
v_reusejp_733_:
{
lean_object* v___x_736_; 
if (v_isShared_724_ == 0)
{
lean_ctor_set(v___x_723_, 0, v___x_734_);
v___x_736_ = v___x_723_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v___x_734_);
v___x_736_ = v_reuseFailAlloc_737_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
return v___x_736_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readString___boxed(lean_object* v_b_741_, lean_object* v_o_742_){
_start:
{
lean_object* v_res_743_; 
v_res_743_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readString(v_b_741_, v_o_742_);
lean_dec(v_o_742_);
lean_dec_ref(v_b_741_);
return v_res_743_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift___redArg(lean_object* v_e_744_){
_start:
{
if (lean_obj_tag(v_e_744_) == 0)
{
lean_object* v_a_746_; lean_object* v___x_748_; uint8_t v_isShared_749_; uint8_t v_isSharedCheck_755_; 
v_a_746_ = lean_ctor_get(v_e_744_, 0);
v_isSharedCheck_755_ = !lean_is_exclusive(v_e_744_);
if (v_isSharedCheck_755_ == 0)
{
v___x_748_ = v_e_744_;
v_isShared_749_ = v_isSharedCheck_755_;
goto v_resetjp_747_;
}
else
{
lean_inc(v_a_746_);
lean_dec(v_e_744_);
v___x_748_ = lean_box(0);
v_isShared_749_ = v_isSharedCheck_755_;
goto v_resetjp_747_;
}
v_resetjp_747_:
{
lean_object* v___x_750_; lean_object* v___x_752_; 
v___x_750_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_750_, 0, v_a_746_);
if (v_isShared_749_ == 0)
{
lean_ctor_set(v___x_748_, 0, v___x_750_);
v___x_752_ = v___x_748_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v___x_750_);
v___x_752_ = v_reuseFailAlloc_754_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
lean_object* v___x_753_; 
v___x_753_ = l_IO_ofExcept___at___00IO_Process_output_spec__0___redArg(v___x_752_);
return v___x_753_;
}
}
}
else
{
lean_object* v_a_756_; lean_object* v___x_758_; uint8_t v_isShared_759_; uint8_t v_isSharedCheck_764_; 
v_a_756_ = lean_ctor_get(v_e_744_, 0);
v_isSharedCheck_764_ = !lean_is_exclusive(v_e_744_);
if (v_isSharedCheck_764_ == 0)
{
v___x_758_ = v_e_744_;
v_isShared_759_ = v_isSharedCheck_764_;
goto v_resetjp_757_;
}
else
{
lean_inc(v_a_756_);
lean_dec(v_e_744_);
v___x_758_ = lean_box(0);
v_isShared_759_ = v_isSharedCheck_764_;
goto v_resetjp_757_;
}
v_resetjp_757_:
{
lean_object* v___x_761_; 
if (v_isShared_759_ == 0)
{
v___x_761_ = v___x_758_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v_a_756_);
v___x_761_ = v_reuseFailAlloc_763_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
lean_object* v___x_762_; 
v___x_762_ = l_IO_ofExcept___at___00IO_Process_output_spec__0___redArg(v___x_761_);
return v___x_762_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift___redArg___boxed(lean_object* v_e_765_, lean_object* v_a_766_){
_start:
{
lean_object* v_res_767_; 
v_res_767_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift___redArg(v_e_765_);
return v_res_767_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift(lean_object* v_00_u03b1_768_, lean_object* v_e_769_){
_start:
{
lean_object* v___x_771_; 
v___x_771_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift___redArg(v_e_769_);
return v___x_771_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift___boxed(lean_object* v_00_u03b1_772_, lean_object* v_e_773_, lean_object* v_a_774_){
_start:
{
lean_object* v_res_775_; 
v_res_775_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift(v_00_u03b1_772_, v_e_773_);
return v_res_775_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__0___redArg(lean_object* v_b_778_, lean_object* v_range_779_, lean_object* v_b_780_, lean_object* v_i_781_){
_start:
{
lean_object* v_stop_783_; lean_object* v_step_784_; uint8_t v___x_785_; 
v_stop_783_ = lean_ctor_get(v_range_779_, 1);
v_step_784_ = lean_ctor_get(v_range_779_, 2);
v___x_785_ = lean_nat_dec_lt(v_i_781_, v_stop_783_);
if (v___x_785_ == 0)
{
lean_object* v___x_786_; 
lean_dec(v_i_781_);
v___x_786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_786_, 0, v_b_780_);
return v___x_786_;
}
else
{
lean_object* v_fst_787_; lean_object* v_snd_788_; lean_object* v___x_789_; lean_object* v___x_790_; 
v_fst_787_ = lean_ctor_get(v_b_780_, 0);
lean_inc(v_fst_787_);
v_snd_788_ = lean_ctor_get(v_b_780_, 1);
lean_inc(v_snd_788_);
lean_dec_ref(v_b_780_);
v___x_789_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readString(v_b_778_, v_fst_787_);
lean_dec(v_fst_787_);
v___x_790_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift___redArg(v___x_789_);
if (lean_obj_tag(v___x_790_) == 0)
{
lean_object* v_a_791_; lean_object* v_fst_792_; lean_object* v_snd_793_; lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_822_; 
v_a_791_ = lean_ctor_get(v___x_790_, 0);
lean_inc(v_a_791_);
lean_dec_ref_known(v___x_790_, 1);
v_fst_792_ = lean_ctor_get(v_a_791_, 0);
v_snd_793_ = lean_ctor_get(v_a_791_, 1);
v_isSharedCheck_822_ = !lean_is_exclusive(v_a_791_);
if (v_isSharedCheck_822_ == 0)
{
v___x_795_ = v_a_791_;
v_isShared_796_ = v_isSharedCheck_822_;
goto v_resetjp_794_;
}
else
{
lean_inc(v_snd_793_);
lean_inc(v_fst_792_);
lean_dec(v_a_791_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_822_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
lean_object* v___x_797_; 
v___x_797_ = l_Lasm_JS_Wire_read(v_b_778_, v_snd_793_);
lean_dec(v_snd_793_);
if (lean_obj_tag(v___x_797_) == 0)
{
lean_object* v_a_798_; lean_object* v_fst_799_; lean_object* v_snd_800_; lean_object* v___x_802_; uint8_t v_isShared_803_; uint8_t v_isSharedCheck_813_; 
v_a_798_ = lean_ctor_get(v___x_797_, 0);
lean_inc(v_a_798_);
lean_dec_ref_known(v___x_797_, 1);
v_fst_799_ = lean_ctor_get(v_a_798_, 0);
v_snd_800_ = lean_ctor_get(v_a_798_, 1);
v_isSharedCheck_813_ = !lean_is_exclusive(v_a_798_);
if (v_isSharedCheck_813_ == 0)
{
v___x_802_ = v_a_798_;
v_isShared_803_ = v_isSharedCheck_813_;
goto v_resetjp_801_;
}
else
{
lean_inc(v_snd_800_);
lean_inc(v_fst_799_);
lean_dec(v_a_798_);
v___x_802_ = lean_box(0);
v_isShared_803_ = v_isSharedCheck_813_;
goto v_resetjp_801_;
}
v_resetjp_801_:
{
lean_object* v___x_805_; 
if (v_isShared_803_ == 0)
{
lean_ctor_set(v___x_802_, 1, v_fst_799_);
lean_ctor_set(v___x_802_, 0, v_fst_792_);
v___x_805_ = v___x_802_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_812_; 
v_reuseFailAlloc_812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_812_, 0, v_fst_792_);
lean_ctor_set(v_reuseFailAlloc_812_, 1, v_fst_799_);
v___x_805_ = v_reuseFailAlloc_812_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
lean_object* v___x_806_; lean_object* v___x_808_; 
v___x_806_ = lean_array_push(v_snd_788_, v___x_805_);
if (v_isShared_796_ == 0)
{
lean_ctor_set(v___x_795_, 1, v___x_806_);
lean_ctor_set(v___x_795_, 0, v_snd_800_);
v___x_808_ = v___x_795_;
goto v_reusejp_807_;
}
else
{
lean_object* v_reuseFailAlloc_811_; 
v_reuseFailAlloc_811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_811_, 0, v_snd_800_);
lean_ctor_set(v_reuseFailAlloc_811_, 1, v___x_806_);
v___x_808_ = v_reuseFailAlloc_811_;
goto v_reusejp_807_;
}
v_reusejp_807_:
{
lean_object* v___x_809_; 
v___x_809_ = lean_nat_add(v_i_781_, v_step_784_);
lean_dec(v_i_781_);
v_b_780_ = v___x_808_;
v_i_781_ = v___x_809_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_814_; lean_object* v___x_816_; uint8_t v_isShared_817_; uint8_t v_isSharedCheck_821_; 
lean_del_object(v___x_795_);
lean_dec(v_fst_792_);
lean_dec(v_snd_788_);
lean_dec(v_i_781_);
v_a_814_ = lean_ctor_get(v___x_797_, 0);
v_isSharedCheck_821_ = !lean_is_exclusive(v___x_797_);
if (v_isSharedCheck_821_ == 0)
{
v___x_816_ = v___x_797_;
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
else
{
lean_inc(v_a_814_);
lean_dec(v___x_797_);
v___x_816_ = lean_box(0);
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
v_resetjp_815_:
{
lean_object* v___x_819_; 
if (v_isShared_817_ == 0)
{
v___x_819_ = v___x_816_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v_a_814_);
v___x_819_ = v_reuseFailAlloc_820_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
return v___x_819_;
}
}
}
}
}
else
{
lean_object* v_a_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_830_; 
lean_dec(v_snd_788_);
lean_dec(v_i_781_);
v_a_823_ = lean_ctor_get(v___x_790_, 0);
v_isSharedCheck_830_ = !lean_is_exclusive(v___x_790_);
if (v_isSharedCheck_830_ == 0)
{
v___x_825_ = v___x_790_;
v_isShared_826_ = v_isSharedCheck_830_;
goto v_resetjp_824_;
}
else
{
lean_inc(v_a_823_);
lean_dec(v___x_790_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_830_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
lean_object* v___x_828_; 
if (v_isShared_826_ == 0)
{
v___x_828_ = v___x_825_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v_a_823_);
v___x_828_ = v_reuseFailAlloc_829_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
return v___x_828_;
}
}
}
}
}
}
static lean_object* _init_l_Lasm_JS_Wire_read___closed__2(void){
_start:
{
lean_object* v___x_831_; lean_object* v___x_832_; 
v___x_831_ = lean_unsigned_to_nat(0u);
v___x_832_ = lean_nat_to_int(v___x_831_);
return v___x_832_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_read(lean_object* v_b_835_, lean_object* v_o_836_){
_start:
{
lean_object* v___y_839_; lean_object* v___y_840_; lean_object* v___x_844_; uint8_t v___x_845_; 
v___x_844_ = lean_byte_array_size(v_b_835_);
v___x_845_ = lean_nat_dec_le(v___x_844_, v_o_836_);
if (v___x_845_ == 0)
{
lean_object* v___x_846_; lean_object* v_o_x27_847_; uint8_t v___y_849_; uint8_t v___x_1135_; 
v___x_846_ = lean_unsigned_to_nat(1u);
v_o_x27_847_ = lean_nat_add(v_o_836_, v___x_846_);
v___x_1135_ = lean_nat_dec_lt(v_o_836_, v___x_844_);
if (v___x_1135_ == 0)
{
uint8_t v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; uint8_t v___x_1139_; 
v___x_1136_ = 0;
v___x_1137_ = lean_box(v___x_1136_);
v___x_1138_ = l_outOfBounds___redArg(v___x_1137_);
lean_dec(v___x_1137_);
v___x_1139_ = lean_unbox(v___x_1138_);
lean_dec(v___x_1138_);
v___y_849_ = v___x_1139_;
goto v___jp_848_;
}
else
{
uint8_t v___x_1140_; 
v___x_1140_ = lean_byte_array_fget(v_b_835_, v_o_836_);
v___y_849_ = v___x_1140_;
goto v___jp_848_;
}
v___jp_848_:
{
uint8_t v___x_850_; uint8_t v___x_851_; 
v___x_850_ = 0;
v___x_851_ = lean_uint8_dec_eq(v___y_849_, v___x_850_);
if (v___x_851_ == 0)
{
uint8_t v___x_852_; uint8_t v___x_853_; 
v___x_852_ = 1;
v___x_853_ = lean_uint8_dec_eq(v___y_849_, v___x_852_);
if (v___x_853_ == 0)
{
uint8_t v___x_854_; uint8_t v___x_855_; 
v___x_854_ = 2;
v___x_855_ = lean_uint8_dec_eq(v___y_849_, v___x_854_);
if (v___x_855_ == 0)
{
uint8_t v___x_856_; uint8_t v___x_857_; 
v___x_856_ = 3;
v___x_857_ = lean_uint8_dec_eq(v___y_849_, v___x_856_);
if (v___x_857_ == 0)
{
uint8_t v___x_858_; uint8_t v___x_859_; 
v___x_858_ = 4;
v___x_859_ = lean_uint8_dec_eq(v___y_849_, v___x_858_);
if (v___x_859_ == 0)
{
uint8_t v___x_860_; uint8_t v___x_861_; 
v___x_860_ = 5;
v___x_861_ = lean_uint8_dec_eq(v___y_849_, v___x_860_);
if (v___x_861_ == 0)
{
uint8_t v___x_862_; uint8_t v___x_863_; 
v___x_862_ = 6;
v___x_863_ = lean_uint8_dec_eq(v___y_849_, v___x_862_);
if (v___x_863_ == 0)
{
uint8_t v___x_864_; uint8_t v___x_865_; 
v___x_864_ = 7;
v___x_865_ = lean_uint8_dec_eq(v___y_849_, v___x_864_);
if (v___x_865_ == 0)
{
uint8_t v___x_866_; uint8_t v___x_867_; 
v___x_866_ = 8;
v___x_867_ = lean_uint8_dec_eq(v___y_849_, v___x_866_);
if (v___x_867_ == 0)
{
uint8_t v___x_868_; uint8_t v___x_869_; 
v___x_868_ = 9;
v___x_869_ = lean_uint8_dec_eq(v___y_849_, v___x_868_);
if (v___x_869_ == 0)
{
uint8_t v___x_870_; uint8_t v___x_871_; 
v___x_870_ = 10;
v___x_871_ = lean_uint8_dec_eq(v___y_849_, v___x_870_);
if (v___x_871_ == 0)
{
lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; 
lean_dec(v_o_x27_847_);
v___x_872_ = ((lean_object*)(l_Lasm_JS_Wire_read___closed__0));
v___x_873_ = lean_uint8_to_nat(v___y_849_);
v___x_874_ = l_Nat_reprFast(v___x_873_);
v___x_875_ = lean_string_append(v___x_872_, v___x_874_);
lean_dec_ref(v___x_874_);
v___x_876_ = ((lean_object*)(l_Lasm_JS_Wire_read___closed__1));
v___x_877_ = lean_string_append(v___x_875_, v___x_876_);
v___x_878_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_878_, 0, v___x_877_);
v___x_879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_879_, 0, v___x_878_);
return v___x_879_;
}
else
{
lean_object* v___x_880_; lean_object* v___x_881_; 
v___x_880_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32(v_b_835_, v_o_x27_847_);
v___x_881_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift___redArg(v___x_880_);
if (lean_obj_tag(v___x_881_) == 0)
{
lean_object* v_a_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; 
v_a_882_ = lean_ctor_get(v___x_881_, 0);
lean_inc(v_a_882_);
lean_dec_ref_known(v___x_881_, 1);
v___x_883_ = lean_unsigned_to_nat(4u);
v___x_884_ = lean_nat_add(v_o_x27_847_, v___x_883_);
lean_dec(v_o_x27_847_);
v___x_885_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readString(v_b_835_, v___x_884_);
lean_dec(v___x_884_);
v___x_886_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift___redArg(v___x_885_);
if (lean_obj_tag(v___x_886_) == 0)
{
lean_object* v_a_887_; lean_object* v_fst_888_; lean_object* v_snd_889_; lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_915_; 
v_a_887_ = lean_ctor_get(v___x_886_, 0);
lean_inc(v_a_887_);
lean_dec_ref_known(v___x_886_, 1);
v_fst_888_ = lean_ctor_get(v_a_887_, 0);
v_snd_889_ = lean_ctor_get(v_a_887_, 1);
v_isSharedCheck_915_ = !lean_is_exclusive(v_a_887_);
if (v_isSharedCheck_915_ == 0)
{
v___x_891_ = v_a_887_;
v_isShared_892_ = v_isSharedCheck_915_;
goto v_resetjp_890_;
}
else
{
lean_inc(v_snd_889_);
lean_inc(v_fst_888_);
lean_dec(v_a_887_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_915_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
uint32_t v___x_893_; lean_object* v___x_894_; 
v___x_893_ = lean_unbox_uint32(v_a_882_);
lean_dec(v_a_882_);
v___x_894_ = lasm_js_value_of_handle(v___x_893_);
if (lean_obj_tag(v___x_894_) == 0)
{
lean_object* v_a_895_; lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_906_; 
v_a_895_ = lean_ctor_get(v___x_894_, 0);
v_isSharedCheck_906_ = !lean_is_exclusive(v___x_894_);
if (v_isSharedCheck_906_ == 0)
{
v___x_897_ = v___x_894_;
v_isShared_898_ = v_isSharedCheck_906_;
goto v_resetjp_896_;
}
else
{
lean_inc(v_a_895_);
lean_dec(v___x_894_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_906_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
lean_object* v___x_899_; lean_object* v___x_901_; 
v___x_899_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_899_, 0, v_a_895_);
lean_ctor_set(v___x_899_, 1, v_fst_888_);
if (v_isShared_892_ == 0)
{
lean_ctor_set(v___x_891_, 0, v___x_899_);
v___x_901_ = v___x_891_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v___x_899_);
lean_ctor_set(v_reuseFailAlloc_905_, 1, v_snd_889_);
v___x_901_ = v_reuseFailAlloc_905_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
lean_object* v___x_903_; 
if (v_isShared_898_ == 0)
{
lean_ctor_set(v___x_897_, 0, v___x_901_);
v___x_903_ = v___x_897_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v___x_901_);
v___x_903_ = v_reuseFailAlloc_904_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
return v___x_903_;
}
}
}
}
else
{
lean_object* v_a_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_914_; 
lean_del_object(v___x_891_);
lean_dec(v_snd_889_);
lean_dec(v_fst_888_);
v_a_907_ = lean_ctor_get(v___x_894_, 0);
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_894_);
if (v_isSharedCheck_914_ == 0)
{
v___x_909_ = v___x_894_;
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_a_907_);
lean_dec(v___x_894_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
lean_object* v___x_912_; 
if (v_isShared_910_ == 0)
{
v___x_912_ = v___x_909_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v_a_907_);
v___x_912_ = v_reuseFailAlloc_913_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
return v___x_912_;
}
}
}
}
}
else
{
lean_object* v_a_916_; lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_923_; 
lean_dec(v_a_882_);
v_a_916_ = lean_ctor_get(v___x_886_, 0);
v_isSharedCheck_923_ = !lean_is_exclusive(v___x_886_);
if (v_isSharedCheck_923_ == 0)
{
v___x_918_ = v___x_886_;
v_isShared_919_ = v_isSharedCheck_923_;
goto v_resetjp_917_;
}
else
{
lean_inc(v_a_916_);
lean_dec(v___x_886_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_923_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
lean_object* v___x_921_; 
if (v_isShared_919_ == 0)
{
v___x_921_ = v___x_918_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v_a_916_);
v___x_921_ = v_reuseFailAlloc_922_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
return v___x_921_;
}
}
}
}
else
{
lean_object* v_a_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_931_; 
lean_dec(v_o_x27_847_);
v_a_924_ = lean_ctor_get(v___x_881_, 0);
v_isSharedCheck_931_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_931_ == 0)
{
v___x_926_ = v___x_881_;
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_a_924_);
lean_dec(v___x_881_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
lean_object* v___x_929_; 
if (v_isShared_927_ == 0)
{
v___x_929_ = v___x_926_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v_a_924_);
v___x_929_ = v_reuseFailAlloc_930_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
return v___x_929_;
}
}
}
}
}
else
{
lean_object* v___x_932_; lean_object* v___x_933_; 
v___x_932_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32(v_b_835_, v_o_x27_847_);
v___x_933_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift___redArg(v___x_932_);
if (lean_obj_tag(v___x_933_) == 0)
{
lean_object* v_a_934_; uint32_t v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; 
v_a_934_ = lean_ctor_get(v___x_933_, 0);
lean_inc(v_a_934_);
lean_dec_ref_known(v___x_933_, 1);
v___x_935_ = lean_unbox_uint32(v_a_934_);
lean_dec(v_a_934_);
v___x_936_ = lean_uint32_to_nat(v___x_935_);
v___x_937_ = lean_unsigned_to_nat(4u);
v___x_938_ = lean_nat_add(v_o_x27_847_, v___x_937_);
lean_dec(v_o_x27_847_);
v___x_939_ = lean_mk_empty_array_with_capacity(v___x_936_);
v___x_940_ = lean_unsigned_to_nat(0u);
v___x_941_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_941_, 0, v___x_940_);
lean_ctor_set(v___x_941_, 1, v___x_936_);
lean_ctor_set(v___x_941_, 2, v___x_846_);
v___x_942_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_942_, 0, v___x_938_);
lean_ctor_set(v___x_942_, 1, v___x_939_);
v___x_943_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__0___redArg(v_b_835_, v___x_941_, v___x_942_, v___x_940_);
lean_dec_ref_known(v___x_941_, 3);
if (lean_obj_tag(v___x_943_) == 0)
{
lean_object* v_a_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_961_; 
v_a_944_ = lean_ctor_get(v___x_943_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v___x_943_);
if (v_isSharedCheck_961_ == 0)
{
v___x_946_ = v___x_943_;
v_isShared_947_ = v_isSharedCheck_961_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_a_944_);
lean_dec(v___x_943_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_961_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v_fst_948_; lean_object* v_snd_949_; lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_960_; 
v_fst_948_ = lean_ctor_get(v_a_944_, 0);
v_snd_949_ = lean_ctor_get(v_a_944_, 1);
v_isSharedCheck_960_ = !lean_is_exclusive(v_a_944_);
if (v_isSharedCheck_960_ == 0)
{
v___x_951_ = v_a_944_;
v_isShared_952_ = v_isSharedCheck_960_;
goto v_resetjp_950_;
}
else
{
lean_inc(v_snd_949_);
lean_inc(v_fst_948_);
lean_dec(v_a_944_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_960_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
lean_object* v___x_953_; lean_object* v___x_955_; 
v___x_953_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_953_, 0, v_snd_949_);
if (v_isShared_952_ == 0)
{
lean_ctor_set(v___x_951_, 1, v_fst_948_);
lean_ctor_set(v___x_951_, 0, v___x_953_);
v___x_955_ = v___x_951_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v___x_953_);
lean_ctor_set(v_reuseFailAlloc_959_, 1, v_fst_948_);
v___x_955_ = v_reuseFailAlloc_959_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
lean_object* v___x_957_; 
if (v_isShared_947_ == 0)
{
lean_ctor_set(v___x_946_, 0, v___x_955_);
v___x_957_ = v___x_946_;
goto v_reusejp_956_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v___x_955_);
v___x_957_ = v_reuseFailAlloc_958_;
goto v_reusejp_956_;
}
v_reusejp_956_:
{
return v___x_957_;
}
}
}
}
}
else
{
lean_object* v_a_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_969_; 
v_a_962_ = lean_ctor_get(v___x_943_, 0);
v_isSharedCheck_969_ = !lean_is_exclusive(v___x_943_);
if (v_isSharedCheck_969_ == 0)
{
v___x_964_ = v___x_943_;
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
else
{
lean_inc(v_a_962_);
lean_dec(v___x_943_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
lean_object* v___x_967_; 
if (v_isShared_965_ == 0)
{
v___x_967_ = v___x_964_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v_a_962_);
v___x_967_ = v_reuseFailAlloc_968_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
return v___x_967_;
}
}
}
}
else
{
lean_object* v_a_970_; lean_object* v___x_972_; uint8_t v_isShared_973_; uint8_t v_isSharedCheck_977_; 
lean_dec(v_o_x27_847_);
v_a_970_ = lean_ctor_get(v___x_933_, 0);
v_isSharedCheck_977_ = !lean_is_exclusive(v___x_933_);
if (v_isSharedCheck_977_ == 0)
{
v___x_972_ = v___x_933_;
v_isShared_973_ = v_isSharedCheck_977_;
goto v_resetjp_971_;
}
else
{
lean_inc(v_a_970_);
lean_dec(v___x_933_);
v___x_972_ = lean_box(0);
v_isShared_973_ = v_isSharedCheck_977_;
goto v_resetjp_971_;
}
v_resetjp_971_:
{
lean_object* v___x_975_; 
if (v_isShared_973_ == 0)
{
v___x_975_ = v___x_972_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v_a_970_);
v___x_975_ = v_reuseFailAlloc_976_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
return v___x_975_;
}
}
}
}
}
else
{
lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_978_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32(v_b_835_, v_o_x27_847_);
v___x_979_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift___redArg(v___x_978_);
if (lean_obj_tag(v___x_979_) == 0)
{
lean_object* v_a_980_; uint32_t v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; 
v_a_980_ = lean_ctor_get(v___x_979_, 0);
lean_inc(v_a_980_);
lean_dec_ref_known(v___x_979_, 1);
v___x_981_ = lean_unbox_uint32(v_a_980_);
lean_dec(v_a_980_);
v___x_982_ = lean_uint32_to_nat(v___x_981_);
v___x_983_ = lean_unsigned_to_nat(4u);
v___x_984_ = lean_nat_add(v_o_x27_847_, v___x_983_);
lean_dec(v_o_x27_847_);
v___x_985_ = lean_mk_empty_array_with_capacity(v___x_982_);
v___x_986_ = lean_unsigned_to_nat(0u);
v___x_987_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_987_, 0, v___x_986_);
lean_ctor_set(v___x_987_, 1, v___x_982_);
lean_ctor_set(v___x_987_, 2, v___x_846_);
v___x_988_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_988_, 0, v___x_984_);
lean_ctor_set(v___x_988_, 1, v___x_985_);
v___x_989_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__1___redArg(v_b_835_, v___x_987_, v___x_988_, v___x_986_);
lean_dec_ref_known(v___x_987_, 3);
if (lean_obj_tag(v___x_989_) == 0)
{
lean_object* v_a_990_; lean_object* v___x_992_; uint8_t v_isShared_993_; uint8_t v_isSharedCheck_1007_; 
v_a_990_ = lean_ctor_get(v___x_989_, 0);
v_isSharedCheck_1007_ = !lean_is_exclusive(v___x_989_);
if (v_isSharedCheck_1007_ == 0)
{
v___x_992_ = v___x_989_;
v_isShared_993_ = v_isSharedCheck_1007_;
goto v_resetjp_991_;
}
else
{
lean_inc(v_a_990_);
lean_dec(v___x_989_);
v___x_992_ = lean_box(0);
v_isShared_993_ = v_isSharedCheck_1007_;
goto v_resetjp_991_;
}
v_resetjp_991_:
{
lean_object* v_fst_994_; lean_object* v_snd_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1006_; 
v_fst_994_ = lean_ctor_get(v_a_990_, 0);
v_snd_995_ = lean_ctor_get(v_a_990_, 1);
v_isSharedCheck_1006_ = !lean_is_exclusive(v_a_990_);
if (v_isSharedCheck_1006_ == 0)
{
v___x_997_ = v_a_990_;
v_isShared_998_ = v_isSharedCheck_1006_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_snd_995_);
lean_inc(v_fst_994_);
lean_dec(v_a_990_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1006_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v___x_999_; lean_object* v___x_1001_; 
v___x_999_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_999_, 0, v_snd_995_);
if (v_isShared_998_ == 0)
{
lean_ctor_set(v___x_997_, 1, v_fst_994_);
lean_ctor_set(v___x_997_, 0, v___x_999_);
v___x_1001_ = v___x_997_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v___x_999_);
lean_ctor_set(v_reuseFailAlloc_1005_, 1, v_fst_994_);
v___x_1001_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1000_;
}
v_reusejp_1000_:
{
lean_object* v___x_1003_; 
if (v_isShared_993_ == 0)
{
lean_ctor_set(v___x_992_, 0, v___x_1001_);
v___x_1003_ = v___x_992_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1004_; 
v_reuseFailAlloc_1004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1004_, 0, v___x_1001_);
v___x_1003_ = v_reuseFailAlloc_1004_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
return v___x_1003_;
}
}
}
}
}
else
{
lean_object* v_a_1008_; lean_object* v___x_1010_; uint8_t v_isShared_1011_; uint8_t v_isSharedCheck_1015_; 
v_a_1008_ = lean_ctor_get(v___x_989_, 0);
v_isSharedCheck_1015_ = !lean_is_exclusive(v___x_989_);
if (v_isSharedCheck_1015_ == 0)
{
v___x_1010_ = v___x_989_;
v_isShared_1011_ = v_isSharedCheck_1015_;
goto v_resetjp_1009_;
}
else
{
lean_inc(v_a_1008_);
lean_dec(v___x_989_);
v___x_1010_ = lean_box(0);
v_isShared_1011_ = v_isSharedCheck_1015_;
goto v_resetjp_1009_;
}
v_resetjp_1009_:
{
lean_object* v___x_1013_; 
if (v_isShared_1011_ == 0)
{
v___x_1013_ = v___x_1010_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v_a_1008_);
v___x_1013_ = v_reuseFailAlloc_1014_;
goto v_reusejp_1012_;
}
v_reusejp_1012_:
{
return v___x_1013_;
}
}
}
}
else
{
lean_object* v_a_1016_; lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1023_; 
lean_dec(v_o_x27_847_);
v_a_1016_ = lean_ctor_get(v___x_979_, 0);
v_isSharedCheck_1023_ = !lean_is_exclusive(v___x_979_);
if (v_isSharedCheck_1023_ == 0)
{
v___x_1018_ = v___x_979_;
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_a_1016_);
lean_dec(v___x_979_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v___x_1021_; 
if (v_isShared_1019_ == 0)
{
v___x_1021_ = v___x_1018_;
goto v_reusejp_1020_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v_a_1016_);
v___x_1021_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1020_;
}
v_reusejp_1020_:
{
return v___x_1021_;
}
}
}
}
}
else
{
lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_1024_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readRaw(v_b_835_, v_o_x27_847_);
lean_dec(v_o_x27_847_);
v___x_1025_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift___redArg(v___x_1024_);
if (lean_obj_tag(v___x_1025_) == 0)
{
lean_object* v_a_1026_; lean_object* v___x_1028_; uint8_t v_isShared_1029_; uint8_t v_isSharedCheck_1043_; 
v_a_1026_ = lean_ctor_get(v___x_1025_, 0);
v_isSharedCheck_1043_ = !lean_is_exclusive(v___x_1025_);
if (v_isSharedCheck_1043_ == 0)
{
v___x_1028_ = v___x_1025_;
v_isShared_1029_ = v_isSharedCheck_1043_;
goto v_resetjp_1027_;
}
else
{
lean_inc(v_a_1026_);
lean_dec(v___x_1025_);
v___x_1028_ = lean_box(0);
v_isShared_1029_ = v_isSharedCheck_1043_;
goto v_resetjp_1027_;
}
v_resetjp_1027_:
{
lean_object* v_fst_1030_; lean_object* v_snd_1031_; lean_object* v___x_1033_; uint8_t v_isShared_1034_; uint8_t v_isSharedCheck_1042_; 
v_fst_1030_ = lean_ctor_get(v_a_1026_, 0);
v_snd_1031_ = lean_ctor_get(v_a_1026_, 1);
v_isSharedCheck_1042_ = !lean_is_exclusive(v_a_1026_);
if (v_isSharedCheck_1042_ == 0)
{
v___x_1033_ = v_a_1026_;
v_isShared_1034_ = v_isSharedCheck_1042_;
goto v_resetjp_1032_;
}
else
{
lean_inc(v_snd_1031_);
lean_inc(v_fst_1030_);
lean_dec(v_a_1026_);
v___x_1033_ = lean_box(0);
v_isShared_1034_ = v_isSharedCheck_1042_;
goto v_resetjp_1032_;
}
v_resetjp_1032_:
{
lean_object* v___x_1035_; lean_object* v___x_1037_; 
v___x_1035_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_1035_, 0, v_fst_1030_);
if (v_isShared_1034_ == 0)
{
lean_ctor_set(v___x_1033_, 0, v___x_1035_);
v___x_1037_ = v___x_1033_;
goto v_reusejp_1036_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v___x_1035_);
lean_ctor_set(v_reuseFailAlloc_1041_, 1, v_snd_1031_);
v___x_1037_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1036_;
}
v_reusejp_1036_:
{
lean_object* v___x_1039_; 
if (v_isShared_1029_ == 0)
{
lean_ctor_set(v___x_1028_, 0, v___x_1037_);
v___x_1039_ = v___x_1028_;
goto v_reusejp_1038_;
}
else
{
lean_object* v_reuseFailAlloc_1040_; 
v_reuseFailAlloc_1040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1040_, 0, v___x_1037_);
v___x_1039_ = v_reuseFailAlloc_1040_;
goto v_reusejp_1038_;
}
v_reusejp_1038_:
{
return v___x_1039_;
}
}
}
}
}
else
{
lean_object* v_a_1044_; lean_object* v___x_1046_; uint8_t v_isShared_1047_; uint8_t v_isSharedCheck_1051_; 
v_a_1044_ = lean_ctor_get(v___x_1025_, 0);
v_isSharedCheck_1051_ = !lean_is_exclusive(v___x_1025_);
if (v_isSharedCheck_1051_ == 0)
{
v___x_1046_ = v___x_1025_;
v_isShared_1047_ = v_isSharedCheck_1051_;
goto v_resetjp_1045_;
}
else
{
lean_inc(v_a_1044_);
lean_dec(v___x_1025_);
v___x_1046_ = lean_box(0);
v_isShared_1047_ = v_isSharedCheck_1051_;
goto v_resetjp_1045_;
}
v_resetjp_1045_:
{
lean_object* v___x_1049_; 
if (v_isShared_1047_ == 0)
{
v___x_1049_ = v___x_1046_;
goto v_reusejp_1048_;
}
else
{
lean_object* v_reuseFailAlloc_1050_; 
v_reuseFailAlloc_1050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1050_, 0, v_a_1044_);
v___x_1049_ = v_reuseFailAlloc_1050_;
goto v_reusejp_1048_;
}
v_reusejp_1048_:
{
return v___x_1049_;
}
}
}
}
}
else
{
lean_object* v___x_1052_; lean_object* v___x_1053_; 
v___x_1052_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readString(v_b_835_, v_o_x27_847_);
lean_dec(v_o_x27_847_);
v___x_1053_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift___redArg(v___x_1052_);
if (lean_obj_tag(v___x_1053_) == 0)
{
lean_object* v_a_1054_; lean_object* v_fst_1055_; lean_object* v_snd_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; 
v_a_1054_ = lean_ctor_get(v___x_1053_, 0);
lean_inc(v_a_1054_);
lean_dec_ref_known(v___x_1053_, 1);
v_fst_1055_ = lean_ctor_get(v_a_1054_, 0);
lean_inc(v_fst_1055_);
v_snd_1056_ = lean_ctor_get(v_a_1054_, 1);
lean_inc(v_snd_1056_);
lean_dec(v_a_1054_);
v___x_1057_ = lean_unsigned_to_nat(0u);
v___x_1058_ = lean_string_utf8_byte_size(v_fst_1055_);
v___x_1059_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1059_, 0, v_fst_1055_);
lean_ctor_set(v___x_1059_, 1, v___x_1057_);
lean_ctor_set(v___x_1059_, 2, v___x_1058_);
v___x_1060_ = l_String_Slice_toInt_x3f(v___x_1059_);
if (lean_obj_tag(v___x_1060_) == 0)
{
lean_object* v___x_1061_; 
v___x_1061_ = lean_obj_once(&l_Lasm_JS_Wire_read___closed__2, &l_Lasm_JS_Wire_read___closed__2_once, _init_l_Lasm_JS_Wire_read___closed__2);
v___y_839_ = v_snd_1056_;
v___y_840_ = v___x_1061_;
goto v___jp_838_;
}
else
{
lean_object* v_val_1062_; 
v_val_1062_ = lean_ctor_get(v___x_1060_, 0);
lean_inc(v_val_1062_);
lean_dec_ref_known(v___x_1060_, 1);
v___y_839_ = v_snd_1056_;
v___y_840_ = v_val_1062_;
goto v___jp_838_;
}
}
else
{
lean_object* v_a_1063_; lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1070_; 
v_a_1063_ = lean_ctor_get(v___x_1053_, 0);
v_isSharedCheck_1070_ = !lean_is_exclusive(v___x_1053_);
if (v_isSharedCheck_1070_ == 0)
{
v___x_1065_ = v___x_1053_;
v_isShared_1066_ = v_isSharedCheck_1070_;
goto v_resetjp_1064_;
}
else
{
lean_inc(v_a_1063_);
lean_dec(v___x_1053_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1070_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
lean_object* v___x_1068_; 
if (v_isShared_1066_ == 0)
{
v___x_1068_ = v___x_1065_;
goto v_reusejp_1067_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v_a_1063_);
v___x_1068_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1067_;
}
v_reusejp_1067_:
{
return v___x_1068_;
}
}
}
}
}
else
{
lean_object* v___x_1071_; lean_object* v___x_1072_; 
v___x_1071_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readString(v_b_835_, v_o_x27_847_);
lean_dec(v_o_x27_847_);
v___x_1072_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift___redArg(v___x_1071_);
if (lean_obj_tag(v___x_1072_) == 0)
{
lean_object* v_a_1073_; lean_object* v___x_1075_; uint8_t v_isShared_1076_; uint8_t v_isSharedCheck_1090_; 
v_a_1073_ = lean_ctor_get(v___x_1072_, 0);
v_isSharedCheck_1090_ = !lean_is_exclusive(v___x_1072_);
if (v_isSharedCheck_1090_ == 0)
{
v___x_1075_ = v___x_1072_;
v_isShared_1076_ = v_isSharedCheck_1090_;
goto v_resetjp_1074_;
}
else
{
lean_inc(v_a_1073_);
lean_dec(v___x_1072_);
v___x_1075_ = lean_box(0);
v_isShared_1076_ = v_isSharedCheck_1090_;
goto v_resetjp_1074_;
}
v_resetjp_1074_:
{
lean_object* v_fst_1077_; lean_object* v_snd_1078_; lean_object* v___x_1080_; uint8_t v_isShared_1081_; uint8_t v_isSharedCheck_1089_; 
v_fst_1077_ = lean_ctor_get(v_a_1073_, 0);
v_snd_1078_ = lean_ctor_get(v_a_1073_, 1);
v_isSharedCheck_1089_ = !lean_is_exclusive(v_a_1073_);
if (v_isSharedCheck_1089_ == 0)
{
v___x_1080_ = v_a_1073_;
v_isShared_1081_ = v_isSharedCheck_1089_;
goto v_resetjp_1079_;
}
else
{
lean_inc(v_snd_1078_);
lean_inc(v_fst_1077_);
lean_dec(v_a_1073_);
v___x_1080_ = lean_box(0);
v_isShared_1081_ = v_isSharedCheck_1089_;
goto v_resetjp_1079_;
}
v_resetjp_1079_:
{
lean_object* v___x_1082_; lean_object* v___x_1084_; 
v___x_1082_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1082_, 0, v_fst_1077_);
if (v_isShared_1081_ == 0)
{
lean_ctor_set(v___x_1080_, 0, v___x_1082_);
v___x_1084_ = v___x_1080_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v___x_1082_);
lean_ctor_set(v_reuseFailAlloc_1088_, 1, v_snd_1078_);
v___x_1084_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
lean_object* v___x_1086_; 
if (v_isShared_1076_ == 0)
{
lean_ctor_set(v___x_1075_, 0, v___x_1084_);
v___x_1086_ = v___x_1075_;
goto v_reusejp_1085_;
}
else
{
lean_object* v_reuseFailAlloc_1087_; 
v_reuseFailAlloc_1087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1087_, 0, v___x_1084_);
v___x_1086_ = v_reuseFailAlloc_1087_;
goto v_reusejp_1085_;
}
v_reusejp_1085_:
{
return v___x_1086_;
}
}
}
}
}
else
{
lean_object* v_a_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1098_; 
v_a_1091_ = lean_ctor_get(v___x_1072_, 0);
v_isSharedCheck_1098_ = !lean_is_exclusive(v___x_1072_);
if (v_isSharedCheck_1098_ == 0)
{
v___x_1093_ = v___x_1072_;
v_isShared_1094_ = v_isSharedCheck_1098_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_a_1091_);
lean_dec(v___x_1072_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1098_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
lean_object* v___x_1096_; 
if (v_isShared_1094_ == 0)
{
v___x_1096_ = v___x_1093_;
goto v_reusejp_1095_;
}
else
{
lean_object* v_reuseFailAlloc_1097_; 
v_reuseFailAlloc_1097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1097_, 0, v_a_1091_);
v___x_1096_ = v_reuseFailAlloc_1097_;
goto v_reusejp_1095_;
}
v_reusejp_1095_:
{
return v___x_1096_;
}
}
}
}
}
else
{
lean_object* v___x_1099_; lean_object* v___x_1100_; 
v___x_1099_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64(v_b_835_, v_o_x27_847_);
v___x_1100_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift___redArg(v___x_1099_);
if (lean_obj_tag(v___x_1100_) == 0)
{
lean_object* v_a_1101_; lean_object* v___x_1103_; uint8_t v_isShared_1104_; uint8_t v_isSharedCheck_1114_; 
v_a_1101_ = lean_ctor_get(v___x_1100_, 0);
v_isSharedCheck_1114_ = !lean_is_exclusive(v___x_1100_);
if (v_isSharedCheck_1114_ == 0)
{
v___x_1103_ = v___x_1100_;
v_isShared_1104_ = v_isSharedCheck_1114_;
goto v_resetjp_1102_;
}
else
{
lean_inc(v_a_1101_);
lean_dec(v___x_1100_);
v___x_1103_ = lean_box(0);
v_isShared_1104_ = v_isSharedCheck_1114_;
goto v_resetjp_1102_;
}
v_resetjp_1102_:
{
uint64_t v___x_1105_; double v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1112_; 
v___x_1105_ = lean_unbox_uint64(v_a_1101_);
lean_dec(v_a_1101_);
v___x_1106_ = lean_float_of_bits(v___x_1105_);
v___x_1107_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1107_, 0, v___x_1106_);
v___x_1108_ = lean_unsigned_to_nat(8u);
v___x_1109_ = lean_nat_add(v_o_x27_847_, v___x_1108_);
lean_dec(v_o_x27_847_);
v___x_1110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1110_, 0, v___x_1107_);
lean_ctor_set(v___x_1110_, 1, v___x_1109_);
if (v_isShared_1104_ == 0)
{
lean_ctor_set(v___x_1103_, 0, v___x_1110_);
v___x_1112_ = v___x_1103_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v___x_1110_);
v___x_1112_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
return v___x_1112_;
}
}
}
else
{
lean_object* v_a_1115_; lean_object* v___x_1117_; uint8_t v_isShared_1118_; uint8_t v_isSharedCheck_1122_; 
lean_dec(v_o_x27_847_);
v_a_1115_ = lean_ctor_get(v___x_1100_, 0);
v_isSharedCheck_1122_ = !lean_is_exclusive(v___x_1100_);
if (v_isSharedCheck_1122_ == 0)
{
v___x_1117_ = v___x_1100_;
v_isShared_1118_ = v_isSharedCheck_1122_;
goto v_resetjp_1116_;
}
else
{
lean_inc(v_a_1115_);
lean_dec(v___x_1100_);
v___x_1117_ = lean_box(0);
v_isShared_1118_ = v_isSharedCheck_1122_;
goto v_resetjp_1116_;
}
v_resetjp_1116_:
{
lean_object* v___x_1120_; 
if (v_isShared_1118_ == 0)
{
v___x_1120_ = v___x_1117_;
goto v_reusejp_1119_;
}
else
{
lean_object* v_reuseFailAlloc_1121_; 
v_reuseFailAlloc_1121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1121_, 0, v_a_1115_);
v___x_1120_ = v_reuseFailAlloc_1121_;
goto v_reusejp_1119_;
}
v_reusejp_1119_:
{
return v___x_1120_;
}
}
}
}
}
else
{
lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; 
v___x_1123_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1123_, 0, v___x_857_);
v___x_1124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1124_, 0, v___x_1123_);
lean_ctor_set(v___x_1124_, 1, v_o_x27_847_);
v___x_1125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1125_, 0, v___x_1124_);
return v___x_1125_;
}
}
else
{
lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; 
v___x_1126_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1126_, 0, v___x_845_);
v___x_1127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1127_, 0, v___x_1126_);
lean_ctor_set(v___x_1127_, 1, v_o_x27_847_);
v___x_1128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1128_, 0, v___x_1127_);
return v___x_1128_;
}
}
else
{
lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; 
v___x_1129_ = lean_box(1);
v___x_1130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1130_, 0, v___x_1129_);
lean_ctor_set(v___x_1130_, 1, v_o_x27_847_);
v___x_1131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1131_, 0, v___x_1130_);
return v___x_1131_;
}
}
else
{
lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; 
v___x_1132_ = lean_box(0);
v___x_1133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1133_, 0, v___x_1132_);
lean_ctor_set(v___x_1133_, 1, v_o_x27_847_);
v___x_1134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1134_, 0, v___x_1133_);
return v___x_1134_;
}
}
}
else
{
lean_object* v___x_1141_; lean_object* v___x_1142_; 
v___x_1141_ = ((lean_object*)(l_Lasm_JS_Wire_read___closed__3));
v___x_1142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1142_, 0, v___x_1141_);
return v___x_1142_;
}
v___jp_838_:
{
lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; 
v___x_841_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_841_, 0, v___y_840_);
v___x_842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_842_, 0, v___x_841_);
lean_ctor_set(v___x_842_, 1, v___y_839_);
v___x_843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_843_, 0, v___x_842_);
return v___x_843_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__1___redArg(lean_object* v_b_1143_, lean_object* v_range_1144_, lean_object* v_b_1145_, lean_object* v_i_1146_){
_start:
{
lean_object* v_stop_1148_; lean_object* v_step_1149_; uint8_t v___x_1150_; 
v_stop_1148_ = lean_ctor_get(v_range_1144_, 1);
v_step_1149_ = lean_ctor_get(v_range_1144_, 2);
v___x_1150_ = lean_nat_dec_lt(v_i_1146_, v_stop_1148_);
if (v___x_1150_ == 0)
{
lean_object* v___x_1151_; 
lean_dec(v_i_1146_);
v___x_1151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1151_, 0, v_b_1145_);
return v___x_1151_;
}
else
{
lean_object* v_fst_1152_; lean_object* v_snd_1153_; lean_object* v___x_1154_; 
v_fst_1152_ = lean_ctor_get(v_b_1145_, 0);
lean_inc(v_fst_1152_);
v_snd_1153_ = lean_ctor_get(v_b_1145_, 1);
lean_inc(v_snd_1153_);
lean_dec_ref(v_b_1145_);
v___x_1154_ = l_Lasm_JS_Wire_read(v_b_1143_, v_fst_1152_);
lean_dec(v_fst_1152_);
if (lean_obj_tag(v___x_1154_) == 0)
{
lean_object* v_a_1155_; lean_object* v_fst_1156_; lean_object* v_snd_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1167_; 
v_a_1155_ = lean_ctor_get(v___x_1154_, 0);
lean_inc(v_a_1155_);
lean_dec_ref_known(v___x_1154_, 1);
v_fst_1156_ = lean_ctor_get(v_a_1155_, 0);
v_snd_1157_ = lean_ctor_get(v_a_1155_, 1);
v_isSharedCheck_1167_ = !lean_is_exclusive(v_a_1155_);
if (v_isSharedCheck_1167_ == 0)
{
v___x_1159_ = v_a_1155_;
v_isShared_1160_ = v_isSharedCheck_1167_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_snd_1157_);
lean_inc(v_fst_1156_);
lean_dec(v_a_1155_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1167_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v___x_1161_; lean_object* v___x_1163_; 
v___x_1161_ = lean_array_push(v_snd_1153_, v_fst_1156_);
if (v_isShared_1160_ == 0)
{
lean_ctor_set(v___x_1159_, 1, v___x_1161_);
lean_ctor_set(v___x_1159_, 0, v_snd_1157_);
v___x_1163_ = v___x_1159_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v_snd_1157_);
lean_ctor_set(v_reuseFailAlloc_1166_, 1, v___x_1161_);
v___x_1163_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
lean_object* v___x_1164_; 
v___x_1164_ = lean_nat_add(v_i_1146_, v_step_1149_);
lean_dec(v_i_1146_);
v_b_1145_ = v___x_1163_;
v_i_1146_ = v___x_1164_;
goto _start;
}
}
}
else
{
lean_object* v_a_1168_; lean_object* v___x_1170_; uint8_t v_isShared_1171_; uint8_t v_isSharedCheck_1175_; 
lean_dec(v_snd_1153_);
lean_dec(v_i_1146_);
v_a_1168_ = lean_ctor_get(v___x_1154_, 0);
v_isSharedCheck_1175_ = !lean_is_exclusive(v___x_1154_);
if (v_isSharedCheck_1175_ == 0)
{
v___x_1170_ = v___x_1154_;
v_isShared_1171_ = v_isSharedCheck_1175_;
goto v_resetjp_1169_;
}
else
{
lean_inc(v_a_1168_);
lean_dec(v___x_1154_);
v___x_1170_ = lean_box(0);
v_isShared_1171_ = v_isSharedCheck_1175_;
goto v_resetjp_1169_;
}
v_resetjp_1169_:
{
lean_object* v___x_1173_; 
if (v_isShared_1171_ == 0)
{
v___x_1173_ = v___x_1170_;
goto v_reusejp_1172_;
}
else
{
lean_object* v_reuseFailAlloc_1174_; 
v_reuseFailAlloc_1174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1174_, 0, v_a_1168_);
v___x_1173_ = v_reuseFailAlloc_1174_;
goto v_reusejp_1172_;
}
v_reusejp_1172_:
{
return v___x_1173_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__1___redArg___boxed(lean_object* v_b_1176_, lean_object* v_range_1177_, lean_object* v_b_1178_, lean_object* v_i_1179_, lean_object* v___y_1180_){
_start:
{
lean_object* v_res_1181_; 
v_res_1181_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__1___redArg(v_b_1176_, v_range_1177_, v_b_1178_, v_i_1179_);
lean_dec_ref(v_range_1177_);
lean_dec_ref(v_b_1176_);
return v_res_1181_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__0___redArg___boxed(lean_object* v_b_1182_, lean_object* v_range_1183_, lean_object* v_b_1184_, lean_object* v_i_1185_, lean_object* v___y_1186_){
_start:
{
lean_object* v_res_1187_; 
v_res_1187_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__0___redArg(v_b_1182_, v_range_1183_, v_b_1184_, v_i_1185_);
lean_dec_ref(v_range_1183_);
lean_dec_ref(v_b_1182_);
return v_res_1187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_read___boxed(lean_object* v_b_1188_, lean_object* v_o_1189_, lean_object* v_a_1190_){
_start:
{
lean_object* v_res_1191_; 
v_res_1191_ = l_Lasm_JS_Wire_read(v_b_1188_, v_o_1189_);
lean_dec(v_o_1189_);
lean_dec_ref(v_b_1188_);
return v_res_1191_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__0(lean_object* v_b_1192_, lean_object* v_range_1193_, lean_object* v_b_1194_, lean_object* v_i_1195_, lean_object* v_hs_1196_, lean_object* v_hl_1197_){
_start:
{
lean_object* v___x_1199_; 
v___x_1199_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__0___redArg(v_b_1192_, v_range_1193_, v_b_1194_, v_i_1195_);
return v___x_1199_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__0___boxed(lean_object* v_b_1200_, lean_object* v_range_1201_, lean_object* v_b_1202_, lean_object* v_i_1203_, lean_object* v_hs_1204_, lean_object* v_hl_1205_, lean_object* v___y_1206_){
_start:
{
lean_object* v_res_1207_; 
v_res_1207_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__0(v_b_1200_, v_range_1201_, v_b_1202_, v_i_1203_, v_hs_1204_, v_hl_1205_);
lean_dec_ref(v_range_1201_);
lean_dec_ref(v_b_1200_);
return v_res_1207_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__1(lean_object* v_b_1208_, lean_object* v_range_1209_, lean_object* v_b_1210_, lean_object* v_i_1211_, lean_object* v_hs_1212_, lean_object* v_hl_1213_){
_start:
{
lean_object* v___x_1215_; 
v___x_1215_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__1___redArg(v_b_1208_, v_range_1209_, v_b_1210_, v_i_1211_);
return v___x_1215_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__1___boxed(lean_object* v_b_1216_, lean_object* v_range_1217_, lean_object* v_b_1218_, lean_object* v_i_1219_, lean_object* v_hs_1220_, lean_object* v_hl_1221_, lean_object* v___y_1222_){
_start:
{
lean_object* v_res_1223_; 
v_res_1223_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__1(v_b_1216_, v_range_1217_, v_b_1218_, v_i_1219_, v_hs_1220_, v_hl_1221_);
lean_dec_ref(v_range_1217_);
lean_dec_ref(v_b_1216_);
return v_res_1223_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_decode(lean_object* v_b_1227_){
_start:
{
lean_object* v___x_1229_; lean_object* v___x_1230_; 
v___x_1229_ = lean_unsigned_to_nat(0u);
v___x_1230_ = l_Lasm_JS_Wire_read(v_b_1227_, v___x_1229_);
if (lean_obj_tag(v___x_1230_) == 0)
{
lean_object* v_a_1231_; lean_object* v___x_1233_; uint8_t v_isShared_1234_; uint8_t v_isSharedCheck_1246_; 
v_a_1231_ = lean_ctor_get(v___x_1230_, 0);
v_isSharedCheck_1246_ = !lean_is_exclusive(v___x_1230_);
if (v_isSharedCheck_1246_ == 0)
{
v___x_1233_ = v___x_1230_;
v_isShared_1234_ = v_isSharedCheck_1246_;
goto v_resetjp_1232_;
}
else
{
lean_inc(v_a_1231_);
lean_dec(v___x_1230_);
v___x_1233_ = lean_box(0);
v_isShared_1234_ = v_isSharedCheck_1246_;
goto v_resetjp_1232_;
}
v_resetjp_1232_:
{
lean_object* v_fst_1235_; lean_object* v_snd_1236_; lean_object* v___x_1237_; uint8_t v___x_1238_; 
v_fst_1235_ = lean_ctor_get(v_a_1231_, 0);
lean_inc(v_fst_1235_);
v_snd_1236_ = lean_ctor_get(v_a_1231_, 1);
lean_inc(v_snd_1236_);
lean_dec(v_a_1231_);
v___x_1237_ = lean_byte_array_size(v_b_1227_);
v___x_1238_ = lean_nat_dec_eq(v_snd_1236_, v___x_1237_);
lean_dec(v_snd_1236_);
if (v___x_1238_ == 0)
{
lean_object* v___x_1239_; lean_object* v___x_1241_; 
lean_dec(v_fst_1235_);
v___x_1239_ = ((lean_object*)(l_Lasm_JS_Wire_decode___closed__1));
if (v_isShared_1234_ == 0)
{
lean_ctor_set_tag(v___x_1233_, 1);
lean_ctor_set(v___x_1233_, 0, v___x_1239_);
v___x_1241_ = v___x_1233_;
goto v_reusejp_1240_;
}
else
{
lean_object* v_reuseFailAlloc_1242_; 
v_reuseFailAlloc_1242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1242_, 0, v___x_1239_);
v___x_1241_ = v_reuseFailAlloc_1242_;
goto v_reusejp_1240_;
}
v_reusejp_1240_:
{
return v___x_1241_;
}
}
else
{
lean_object* v___x_1244_; 
if (v_isShared_1234_ == 0)
{
lean_ctor_set(v___x_1233_, 0, v_fst_1235_);
v___x_1244_ = v___x_1233_;
goto v_reusejp_1243_;
}
else
{
lean_object* v_reuseFailAlloc_1245_; 
v_reuseFailAlloc_1245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1245_, 0, v_fst_1235_);
v___x_1244_ = v_reuseFailAlloc_1245_;
goto v_reusejp_1243_;
}
v_reusejp_1243_:
{
return v___x_1244_;
}
}
}
}
else
{
lean_object* v_a_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1254_; 
v_a_1247_ = lean_ctor_get(v___x_1230_, 0);
v_isSharedCheck_1254_ = !lean_is_exclusive(v___x_1230_);
if (v_isSharedCheck_1254_ == 0)
{
v___x_1249_ = v___x_1230_;
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_a_1247_);
lean_dec(v___x_1230_);
v___x_1249_ = lean_box(0);
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
v_resetjp_1248_:
{
lean_object* v___x_1252_; 
if (v_isShared_1250_ == 0)
{
v___x_1252_ = v___x_1249_;
goto v_reusejp_1251_;
}
else
{
lean_object* v_reuseFailAlloc_1253_; 
v_reuseFailAlloc_1253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1253_, 0, v_a_1247_);
v___x_1252_ = v_reuseFailAlloc_1253_;
goto v_reusejp_1251_;
}
v_reusejp_1251_:
{
return v___x_1252_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_decode___boxed(lean_object* v_b_1255_, lean_object* v_a_1256_){
_start:
{
lean_object* v_res_1257_; 
v_res_1257_ = l_Lasm_JS_Wire_decode(v_b_1255_);
lean_dec_ref(v_b_1255_);
return v_res_1257_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallKeep___boxed(lean_object* v_op_1264_, lean_object* v_handle_1265_, lean_object* v_arg_1266_, lean_object* v_input_1267_, lean_object* v_keep_1268_, lean_object* v_a_00___x40___internal___hyg_1269_){
_start:
{
uint32_t v_op_boxed_1270_; uint32_t v_handle_boxed_1271_; uint64_t v_arg_boxed_1272_; lean_object* v_res_1273_; 
v_op_boxed_1270_ = lean_unbox_uint32(v_op_1264_);
lean_dec(v_op_1264_);
v_handle_boxed_1271_ = lean_unbox_uint32(v_handle_1265_);
lean_dec(v_handle_1265_);
v_arg_boxed_1272_ = lean_unbox_uint64(v_arg_1266_);
lean_dec_ref(v_arg_1266_);
v_res_1273_ = lasm_js_call(v_op_boxed_1270_, v_handle_boxed_1271_, v_arg_boxed_1272_, v_input_1267_, v_keep_1268_);
lean_dec(v_keep_1268_);
lean_dec_ref(v_input_1267_);
return v_res_1273_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(uint32_t v_op_1274_, uint32_t v_handle_1275_, uint64_t v_arg_1276_, lean_object* v_input_1277_){
_start:
{
lean_object* v___x_1279_; lean_object* v___x_1280_; 
v___x_1279_ = lean_box(0);
v___x_1280_ = lasm_js_call(v_op_1274_, v_handle_1275_, v_arg_1276_, v_input_1277_, v___x_1279_);
return v___x_1280_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCall___boxed(lean_object* v_op_1281_, lean_object* v_handle_1282_, lean_object* v_arg_1283_, lean_object* v_input_1284_, lean_object* v_a_1285_){
_start:
{
uint32_t v_op_boxed_1286_; uint32_t v_handle_boxed_1287_; uint64_t v_arg_boxed_1288_; lean_object* v_res_1289_; 
v_op_boxed_1286_ = lean_unbox_uint32(v_op_1281_);
lean_dec(v_op_1281_);
v_handle_boxed_1287_ = lean_unbox_uint32(v_handle_1282_);
lean_dec(v_handle_1282_);
v_arg_boxed_1288_ = lean_unbox_uint64(v_arg_1283_);
lean_dec_ref(v_arg_1283_);
v_res_1289_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v_op_boxed_1286_, v_handle_boxed_1287_, v_arg_boxed_1288_, v_input_1284_);
lean_dec_ref(v_input_1284_);
return v_res_1289_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t v_op_1290_, uint64_t v_arg_1291_, lean_object* v_payload_1292_, uint32_t v_handle_1293_){
_start:
{
lean_object* v___x_1295_; lean_object* v___x_1296_; 
v___x_1295_ = l_Lasm_JS_Wire_encode(v_payload_1292_);
v___x_1296_ = lasm_js_call(v_op_1290_, v_handle_1293_, v_arg_1291_, v___x_1295_, v_payload_1292_);
lean_dec_ref(v___x_1295_);
return v___x_1296_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith___boxed(lean_object* v_op_1297_, lean_object* v_arg_1298_, lean_object* v_payload_1299_, lean_object* v_handle_1300_, lean_object* v_a_1301_){
_start:
{
uint32_t v_op_boxed_1302_; uint64_t v_arg_boxed_1303_; uint32_t v_handle_boxed_1304_; lean_object* v_res_1305_; 
v_op_boxed_1302_ = lean_unbox_uint32(v_op_1297_);
lean_dec(v_op_1297_);
v_arg_boxed_1303_ = lean_unbox_uint64(v_arg_1298_);
lean_dec_ref(v_arg_1298_);
v_handle_boxed_1304_ = lean_unbox_uint32(v_handle_1300_);
lean_dec(v_handle_1300_);
v_res_1305_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v_op_boxed_1302_, v_arg_boxed_1303_, v_payload_1299_, v_handle_boxed_1304_);
lean_dec(v_payload_1299_);
return v_res_1305_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallInto___boxed(lean_object* v_p_1313_, lean_object* v_op_1314_, lean_object* v_handle_1315_, lean_object* v_arg_1316_, lean_object* v_input_1317_, lean_object* v_keep_1318_, lean_object* v_a_00___x40___internal___hyg_1319_){
_start:
{
uint32_t v_op_boxed_1320_; uint32_t v_handle_boxed_1321_; uint64_t v_arg_boxed_1322_; lean_object* v_res_1323_; 
v_op_boxed_1320_ = lean_unbox_uint32(v_op_1314_);
lean_dec(v_op_1314_);
v_handle_boxed_1321_ = lean_unbox_uint32(v_handle_1315_);
lean_dec(v_handle_1315_);
v_arg_boxed_1322_ = lean_unbox_uint64(v_arg_1316_);
lean_dec_ref(v_arg_1316_);
v_res_1323_ = lasm_js_call_into(v_p_1313_, v_op_boxed_1320_, v_handle_boxed_1321_, v_arg_boxed_1322_, v_input_1317_, v_keep_1318_);
lean_dec(v_keep_1318_);
lean_dec_ref(v_input_1317_);
lean_dec(v_p_1313_);
return v_res_1323_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_ctorIdx(uint8_t v_x_1324_){
_start:
{
if (v_x_1324_ == 0)
{
lean_object* v___x_1325_; 
v___x_1325_ = lean_unsigned_to_nat(0u);
return v___x_1325_;
}
else
{
lean_object* v___x_1326_; 
v___x_1326_ = lean_unsigned_to_nat(1u);
return v___x_1326_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_ctorIdx___boxed(lean_object* v_x_1327_){
_start:
{
uint8_t v_x_boxed_1328_; lean_object* v_res_1329_; 
v_x_boxed_1328_ = lean_unbox(v_x_1327_);
v_res_1329_ = l_Lasm_JS_Mode_ctorIdx(v_x_boxed_1328_);
return v_res_1329_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_ctorElim___redArg(lean_object* v_k_1330_){
_start:
{
lean_inc(v_k_1330_);
return v_k_1330_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_ctorElim___redArg___boxed(lean_object* v_k_1331_){
_start:
{
lean_object* v_res_1332_; 
v_res_1332_ = l_Lasm_JS_Mode_ctorElim___redArg(v_k_1331_);
lean_dec(v_k_1331_);
return v_res_1332_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_ctorElim(lean_object* v_motive_1333_, lean_object* v_ctorIdx_1334_, uint8_t v_t_1335_, lean_object* v_h_1336_, lean_object* v_k_1337_){
_start:
{
lean_inc(v_k_1337_);
return v_k_1337_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_ctorElim___boxed(lean_object* v_motive_1338_, lean_object* v_ctorIdx_1339_, lean_object* v_t_1340_, lean_object* v_h_1341_, lean_object* v_k_1342_){
_start:
{
uint8_t v_t_boxed_1343_; lean_object* v_res_1344_; 
v_t_boxed_1343_ = lean_unbox(v_t_1340_);
v_res_1344_ = l_Lasm_JS_Mode_ctorElim(v_motive_1338_, v_ctorIdx_1339_, v_t_boxed_1343_, v_h_1341_, v_k_1342_);
lean_dec(v_k_1342_);
lean_dec(v_ctorIdx_1339_);
return v_res_1344_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_data_elim___redArg(lean_object* v_data_1345_){
_start:
{
lean_inc(v_data_1345_);
return v_data_1345_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_data_elim___redArg___boxed(lean_object* v_data_1346_){
_start:
{
lean_object* v_res_1347_; 
v_res_1347_ = l_Lasm_JS_Mode_data_elim___redArg(v_data_1346_);
lean_dec(v_data_1346_);
return v_res_1347_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_data_elim(lean_object* v_motive_1348_, uint8_t v_t_1349_, lean_object* v_h_1350_, lean_object* v_data_1351_){
_start:
{
lean_inc(v_data_1351_);
return v_data_1351_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_data_elim___boxed(lean_object* v_motive_1352_, lean_object* v_t_1353_, lean_object* v_h_1354_, lean_object* v_data_1355_){
_start:
{
uint8_t v_t_boxed_1356_; lean_object* v_res_1357_; 
v_t_boxed_1356_ = lean_unbox(v_t_1353_);
v_res_1357_ = l_Lasm_JS_Mode_data_elim(v_motive_1352_, v_t_boxed_1356_, v_h_1354_, v_data_1355_);
lean_dec(v_data_1355_);
return v_res_1357_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_reference_elim___redArg(lean_object* v_reference_1358_){
_start:
{
lean_inc(v_reference_1358_);
return v_reference_1358_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_reference_elim___redArg___boxed(lean_object* v_reference_1359_){
_start:
{
lean_object* v_res_1360_; 
v_res_1360_ = l_Lasm_JS_Mode_reference_elim___redArg(v_reference_1359_);
lean_dec(v_reference_1359_);
return v_res_1360_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_reference_elim(lean_object* v_motive_1361_, uint8_t v_t_1362_, lean_object* v_h_1363_, lean_object* v_reference_1364_){
_start:
{
lean_inc(v_reference_1364_);
return v_reference_1364_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_reference_elim___boxed(lean_object* v_motive_1365_, lean_object* v_t_1366_, lean_object* v_h_1367_, lean_object* v_reference_1368_){
_start:
{
uint8_t v_t_boxed_1369_; lean_object* v_res_1370_; 
v_t_boxed_1369_ = lean_unbox(v_t_1366_);
v_res_1370_ = l_Lasm_JS_Mode_reference_elim(v_motive_1365_, v_t_boxed_1369_, v_h_1367_, v_reference_1368_);
lean_dec(v_reference_1368_);
return v_res_1370_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_instBEqMode_beq(uint8_t v_x_1371_, uint8_t v_y_1372_){
_start:
{
lean_object* v___x_1373_; lean_object* v___x_1374_; uint8_t v___x_1375_; 
v___x_1373_ = l_Lasm_JS_Mode_ctorIdx(v_x_1371_);
v___x_1374_ = l_Lasm_JS_Mode_ctorIdx(v_y_1372_);
v___x_1375_ = lean_nat_dec_eq(v___x_1373_, v___x_1374_);
lean_dec(v___x_1374_);
lean_dec(v___x_1373_);
return v___x_1375_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBEqMode_beq___boxed(lean_object* v_x_1376_, lean_object* v_y_1377_){
_start:
{
uint8_t v_x_21__boxed_1378_; uint8_t v_y_22__boxed_1379_; uint8_t v_res_1380_; lean_object* v_r_1381_; 
v_x_21__boxed_1378_ = lean_unbox(v_x_1376_);
v_y_22__boxed_1379_ = lean_unbox(v_y_1377_);
v_res_1380_ = l_Lasm_JS_instBEqMode_beq(v_x_21__boxed_1378_, v_y_22__boxed_1379_);
v_r_1381_ = lean_box(v_res_1380_);
return v_r_1381_;
}
}
static uint8_t _init_l_Lasm_JS_instInhabitedMode_default(void){
_start:
{
uint8_t v___x_1384_; 
v___x_1384_ = 0;
return v___x_1384_;
}
}
static uint8_t _init_l_Lasm_JS_instInhabitedMode(void){
_start:
{
uint8_t v___x_1385_; 
v___x_1385_ = 0;
return v___x_1385_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___redArg___closed__7(void){
_start:
{
lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; 
v___x_1393_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__6));
v___x_1394_ = lean_unsigned_to_nat(46u);
v___x_1395_ = lean_unsigned_to_nat(193u);
v___x_1396_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__5));
v___x_1397_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__4));
v___x_1398_ = l_mkPanicMessageWithDecl(v___x_1397_, v___x_1396_, v___x_1395_, v___x_1394_, v___x_1393_);
return v___x_1398_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___redArg(lean_object* v_inst_1400_, lean_object* v_context_1401_, lean_object* v_d_1402_){
_start:
{
lean_object* v___y_1405_; lean_object* v___y_1406_; lean_object* v_fromJS_1410_; lean_object* v_typeName_1411_; lean_object* v___x_1412_; 
v_fromJS_1410_ = lean_ctor_get(v_inst_1400_, 0);
lean_inc_ref(v_fromJS_1410_);
v_typeName_1411_ = lean_ctor_get(v_inst_1400_, 1);
lean_inc_ref(v_typeName_1411_);
lean_dec_ref(v_inst_1400_);
lean_inc(v_d_1402_);
v___x_1412_ = lean_apply_1(v_fromJS_1410_, v_d_1402_);
if (lean_obj_tag(v___x_1412_) == 0)
{
lean_object* v_a_1413_; lean_object* v_received_1415_; 
v_a_1413_ = lean_ctor_get(v___x_1412_, 0);
lean_inc(v_a_1413_);
lean_dec_ref_known(v___x_1412_, 1);
if (lean_obj_tag(v_d_1402_) == 9)
{
lean_object* v_value_1434_; lean_object* v_description_1435_; lean_object* v___x_1436_; uint8_t v___x_1437_; 
v_value_1434_ = lean_ctor_get(v_d_1402_, 0);
v_description_1435_ = lean_ctor_get(v_d_1402_, 1);
v___x_1436_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
v___x_1437_ = lean_string_dec_eq(v_description_1435_, v___x_1436_);
if (v___x_1437_ == 0)
{
goto v___jp_1432_;
}
else
{
lean_object* v___x_1439_; uint8_t v_isShared_1440_; uint8_t v_isSharedCheck_1454_; 
lean_inc(v_value_1434_);
v_isSharedCheck_1454_ = !lean_is_exclusive(v_d_1402_);
if (v_isSharedCheck_1454_ == 0)
{
lean_object* v_unused_1455_; lean_object* v_unused_1456_; 
v_unused_1455_ = lean_ctor_get(v_d_1402_, 1);
lean_dec(v_unused_1455_);
v_unused_1456_ = lean_ctor_get(v_d_1402_, 0);
lean_dec(v_unused_1456_);
v___x_1439_ = v_d_1402_;
v_isShared_1440_ = v_isSharedCheck_1454_;
goto v_resetjp_1438_;
}
else
{
lean_dec(v_d_1402_);
v___x_1439_ = lean_box(0);
v_isShared_1440_ = v_isSharedCheck_1454_;
goto v_resetjp_1438_;
}
v_resetjp_1438_:
{
uint32_t v___x_1441_; uint64_t v___x_1442_; lean_object* v___x_1444_; 
v___x_1441_ = 206;
v___x_1442_ = 0ULL;
lean_inc(v_value_1434_);
if (v_isShared_1440_ == 0)
{
lean_ctor_set(v___x_1439_, 1, v___x_1436_);
v___x_1444_ = v___x_1439_;
goto v_reusejp_1443_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v_value_1434_);
lean_ctor_set(v_reuseFailAlloc_1453_, 1, v___x_1436_);
v___x_1444_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1443_;
}
v_reusejp_1443_:
{
uint32_t v___x_1445_; lean_object* v___x_1446_; 
v___x_1445_ = lasm_js_value_handle(v_value_1434_);
lean_dec(v_value_1434_);
v___x_1446_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1441_, v___x_1442_, v___x_1444_, v___x_1445_);
lean_dec_ref(v___x_1444_);
if (lean_obj_tag(v___x_1446_) == 0)
{
lean_object* v_a_1447_; uint8_t v___x_1448_; 
v_a_1447_ = lean_ctor_get(v___x_1446_, 0);
lean_inc(v_a_1447_);
lean_dec_ref_known(v___x_1446_, 1);
v___x_1448_ = lean_string_validate_utf8(v_a_1447_);
if (v___x_1448_ == 0)
{
lean_object* v___x_1449_; lean_object* v___x_1450_; 
lean_dec(v_a_1447_);
v___x_1449_ = lean_obj_once(&l_Lasm_JS_decodeAs___redArg___closed__7, &l_Lasm_JS_decodeAs___redArg___closed__7_once, _init_l_Lasm_JS_decodeAs___redArg___closed__7);
v___x_1450_ = l_panic___redArg(v___x_1436_, v___x_1449_);
v_received_1415_ = v___x_1450_;
goto v___jp_1414_;
}
else
{
lean_object* v___x_1451_; 
v___x_1451_ = lean_string_from_utf8_unchecked(v_a_1447_);
v_received_1415_ = v___x_1451_;
goto v___jp_1414_;
}
}
else
{
lean_object* v___x_1452_; 
lean_dec_ref_known(v___x_1446_, 1);
v___x_1452_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__8));
v_received_1415_ = v___x_1452_;
goto v___jp_1414_;
}
}
}
}
}
else
{
goto v___jp_1432_;
}
v___jp_1414_:
{
lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; uint8_t v___x_1426_; 
v___x_1416_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__0));
v___x_1417_ = lean_string_append(v___x_1416_, v_context_1401_);
v___x_1418_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__1));
v___x_1419_ = lean_string_append(v___x_1417_, v___x_1418_);
v___x_1420_ = lean_string_append(v___x_1419_, v_typeName_1411_);
lean_dec_ref(v_typeName_1411_);
v___x_1421_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__2));
v___x_1422_ = lean_string_append(v___x_1420_, v___x_1421_);
v___x_1423_ = lean_string_append(v___x_1422_, v_received_1415_);
lean_dec_ref(v_received_1415_);
v___x_1424_ = lean_string_utf8_byte_size(v_a_1413_);
v___x_1425_ = lean_unsigned_to_nat(0u);
v___x_1426_ = lean_nat_dec_eq(v___x_1424_, v___x_1425_);
if (v___x_1426_ == 0)
{
lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; 
v___x_1427_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__3));
v___x_1428_ = lean_string_append(v___x_1427_, v_a_1413_);
lean_dec(v_a_1413_);
v___x_1429_ = ((lean_object*)(l_Lasm_JS_Wire_read___closed__1));
v___x_1430_ = lean_string_append(v___x_1428_, v___x_1429_);
v___y_1405_ = v___x_1423_;
v___y_1406_ = v___x_1430_;
goto v___jp_1404_;
}
else
{
lean_object* v___x_1431_; 
lean_dec(v_a_1413_);
v___x_1431_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
v___y_1405_ = v___x_1423_;
v___y_1406_ = v___x_1431_;
goto v___jp_1404_;
}
}
v___jp_1432_:
{
lean_object* v___x_1433_; 
v___x_1433_ = l_Lasm_JS_Data_describe(v_d_1402_);
v_received_1415_ = v___x_1433_;
goto v___jp_1414_;
}
}
else
{
lean_object* v_a_1457_; lean_object* v___x_1459_; uint8_t v_isShared_1460_; uint8_t v_isSharedCheck_1464_; 
lean_dec_ref(v_typeName_1411_);
lean_dec(v_d_1402_);
v_a_1457_ = lean_ctor_get(v___x_1412_, 0);
v_isSharedCheck_1464_ = !lean_is_exclusive(v___x_1412_);
if (v_isSharedCheck_1464_ == 0)
{
v___x_1459_ = v___x_1412_;
v_isShared_1460_ = v_isSharedCheck_1464_;
goto v_resetjp_1458_;
}
else
{
lean_inc(v_a_1457_);
lean_dec(v___x_1412_);
v___x_1459_ = lean_box(0);
v_isShared_1460_ = v_isSharedCheck_1464_;
goto v_resetjp_1458_;
}
v_resetjp_1458_:
{
lean_object* v___x_1462_; 
if (v_isShared_1460_ == 0)
{
lean_ctor_set_tag(v___x_1459_, 0);
v___x_1462_ = v___x_1459_;
goto v_reusejp_1461_;
}
else
{
lean_object* v_reuseFailAlloc_1463_; 
v_reuseFailAlloc_1463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1463_, 0, v_a_1457_);
v___x_1462_ = v_reuseFailAlloc_1463_;
goto v_reusejp_1461_;
}
v_reusejp_1461_:
{
return v___x_1462_;
}
}
}
v___jp_1404_:
{
lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; 
v___x_1407_ = lean_string_append(v___y_1405_, v___y_1406_);
lean_dec_ref(v___y_1406_);
v___x_1408_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1408_, 0, v___x_1407_);
v___x_1409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1409_, 0, v___x_1408_);
return v___x_1409_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___redArg___boxed(lean_object* v_inst_1465_, lean_object* v_context_1466_, lean_object* v_d_1467_, lean_object* v_a_1468_){
_start:
{
lean_object* v_res_1469_; 
v_res_1469_ = l_Lasm_JS_decodeAs___redArg(v_inst_1465_, v_context_1466_, v_d_1467_);
lean_dec_ref(v_context_1466_);
return v_res_1469_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs(lean_object* v_00_u03b1_1470_, lean_object* v_inst_1471_, lean_object* v_context_1472_, lean_object* v_d_1473_){
_start:
{
lean_object* v___x_1475_; 
v___x_1475_ = l_Lasm_JS_decodeAs___redArg(v_inst_1471_, v_context_1472_, v_d_1473_);
return v___x_1475_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___boxed(lean_object* v_00_u03b1_1476_, lean_object* v_inst_1477_, lean_object* v_context_1478_, lean_object* v_d_1479_, lean_object* v_a_1480_){
_start:
{
lean_object* v_res_1481_; 
v_res_1481_ = l_Lasm_JS_decodeAs(v_00_u03b1_1476_, v_inst_1477_, v_context_1478_, v_d_1479_);
lean_dec_ref(v_context_1478_);
return v_res_1481_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSData___lam__0(lean_object* v_a_1484_){
_start:
{
lean_object* v___x_1485_; 
v___x_1485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1485_, 0, v_a_1484_);
return v___x_1485_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSValue___lam__0(lean_object* v_v_1493_){
_start:
{
lean_object* v___x_1494_; lean_object* v___x_1495_; 
v___x_1494_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
v___x_1495_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1495_, 0, v_v_1493_);
lean_ctor_set(v___x_1495_, 1, v___x_1494_);
return v___x_1495_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSValue___lam__0(lean_object* v_x_1500_){
_start:
{
if (lean_obj_tag(v_x_1500_) == 9)
{
lean_object* v_value_1501_; lean_object* v___x_1502_; 
v_value_1501_ = lean_ctor_get(v_x_1500_, 0);
lean_inc(v_value_1501_);
v___x_1502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1502_, 0, v_value_1501_);
return v___x_1502_;
}
else
{
lean_object* v___x_1503_; 
v___x_1503_ = ((lean_object*)(l_Lasm_JS_instFromJSValue___lam__0___closed__0));
return v___x_1503_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSValue___lam__0___boxed(lean_object* v_x_1504_){
_start:
{
lean_object* v_res_1505_; 
v_res_1505_ = l_Lasm_JS_instFromJSValue___lam__0(v_x_1504_);
lean_dec(v_x_1504_);
return v_res_1505_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object* v_s_1513_){
_start:
{
lean_object* v___x_1514_; 
v___x_1514_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1514_, 0, v_s_1513_);
return v___x_1514_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSString___lam__0(lean_object* v_x_1519_){
_start:
{
if (lean_obj_tag(v_x_1519_) == 4)
{
lean_object* v_s_1520_; lean_object* v___x_1522_; uint8_t v_isShared_1523_; uint8_t v_isSharedCheck_1527_; 
v_s_1520_ = lean_ctor_get(v_x_1519_, 0);
v_isSharedCheck_1527_ = !lean_is_exclusive(v_x_1519_);
if (v_isSharedCheck_1527_ == 0)
{
v___x_1522_ = v_x_1519_;
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
else
{
lean_inc(v_s_1520_);
lean_dec(v_x_1519_);
v___x_1522_ = lean_box(0);
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
v_resetjp_1521_:
{
lean_object* v___x_1525_; 
if (v_isShared_1523_ == 0)
{
lean_ctor_set_tag(v___x_1522_, 1);
v___x_1525_ = v___x_1522_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v_s_1520_);
v___x_1525_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
return v___x_1525_;
}
}
}
else
{
lean_object* v___x_1528_; 
lean_dec(v_x_1519_);
v___x_1528_ = ((lean_object*)(l_Lasm_JS_instFromJSString___lam__0___closed__0));
return v___x_1528_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSBool___lam__0(uint8_t v_b_1536_){
_start:
{
lean_object* v___x_1537_; 
v___x_1537_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1537_, 0, v_b_1536_);
return v___x_1537_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object* v_b_1538_){
_start:
{
uint8_t v_b_boxed_1539_; lean_object* v_res_1540_; 
v_b_boxed_1539_ = lean_unbox(v_b_1538_);
v_res_1540_ = l_Lasm_JS_instToJSBool___lam__0(v_b_boxed_1539_);
return v_res_1540_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSBool___lam__0(lean_object* v_x_1545_){
_start:
{
if (lean_obj_tag(v_x_1545_) == 2)
{
uint8_t v_b_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; 
v_b_1546_ = lean_ctor_get_uint8(v_x_1545_, 0);
v___x_1547_ = lean_box(v_b_1546_);
v___x_1548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1548_, 0, v___x_1547_);
return v___x_1548_;
}
else
{
lean_object* v___x_1549_; 
v___x_1549_ = ((lean_object*)(l_Lasm_JS_instFromJSBool___lam__0___closed__0));
return v___x_1549_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSBool___lam__0___boxed(lean_object* v_x_1550_){
_start:
{
lean_object* v_res_1551_; 
v_res_1551_ = l_Lasm_JS_instFromJSBool___lam__0(v_x_1550_);
lean_dec(v_x_1550_);
return v_res_1551_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSFloat___lam__0(double v_n_1559_){
_start:
{
lean_object* v___x_1560_; 
v___x_1560_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1560_, 0, v_n_1559_);
return v___x_1560_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSFloat___lam__0___boxed(lean_object* v_n_1561_){
_start:
{
double v_n_boxed_1562_; lean_object* v_res_1563_; 
v_n_boxed_1562_ = lean_unbox_float(v_n_1561_);
lean_dec_ref(v_n_1561_);
v_res_1563_ = l_Lasm_JS_instToJSFloat___lam__0(v_n_boxed_1562_);
return v_res_1563_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSFloat___lam__0(lean_object* v_x_1568_){
_start:
{
if (lean_obj_tag(v_x_1568_) == 3)
{
double v_n_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; 
v_n_1569_ = lean_ctor_get_float(v_x_1568_, 0);
v___x_1570_ = lean_box_float(v_n_1569_);
v___x_1571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1571_, 0, v___x_1570_);
return v___x_1571_;
}
else
{
lean_object* v___x_1572_; 
v___x_1572_ = ((lean_object*)(l_Lasm_JS_instFromJSFloat___lam__0___closed__0));
return v___x_1572_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSFloat___lam__0___boxed(lean_object* v_x_1573_){
_start:
{
lean_object* v_res_1574_; 
v_res_1574_ = l_Lasm_JS_instFromJSFloat___lam__0(v_x_1573_);
lean_dec(v_x_1573_);
return v_res_1574_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUnit___lam__0(lean_object* v_x_1582_){
_start:
{
lean_object* v___x_1583_; 
v___x_1583_ = lean_box(0);
return v___x_1583_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSUnit___lam__0(lean_object* v_x_1588_){
_start:
{
lean_object* v___x_1589_; 
v___x_1589_ = ((lean_object*)(l_Lasm_JS_instFromJSUnit___lam__0___closed__0));
return v___x_1589_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSUnit___lam__0___boxed(lean_object* v_x_1590_){
_start:
{
lean_object* v_res_1591_; 
v_res_1591_ = l_Lasm_JS_instFromJSUnit___lam__0(v_x_1590_);
lean_dec(v_x_1590_);
return v_res_1591_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSByteArray___lam__0(lean_object* v_b_1599_){
_start:
{
lean_object* v___x_1600_; 
v___x_1600_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_1600_, 0, v_b_1599_);
return v___x_1600_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSByteArray___lam__0(lean_object* v_x_1605_){
_start:
{
if (lean_obj_tag(v_x_1605_) == 6)
{
lean_object* v_b_1606_; lean_object* v___x_1608_; uint8_t v_isShared_1609_; uint8_t v_isSharedCheck_1613_; 
v_b_1606_ = lean_ctor_get(v_x_1605_, 0);
v_isSharedCheck_1613_ = !lean_is_exclusive(v_x_1605_);
if (v_isSharedCheck_1613_ == 0)
{
v___x_1608_ = v_x_1605_;
v_isShared_1609_ = v_isSharedCheck_1613_;
goto v_resetjp_1607_;
}
else
{
lean_inc(v_b_1606_);
lean_dec(v_x_1605_);
v___x_1608_ = lean_box(0);
v_isShared_1609_ = v_isSharedCheck_1613_;
goto v_resetjp_1607_;
}
v_resetjp_1607_:
{
lean_object* v___x_1611_; 
if (v_isShared_1609_ == 0)
{
lean_ctor_set_tag(v___x_1608_, 1);
v___x_1611_ = v___x_1608_;
goto v_reusejp_1610_;
}
else
{
lean_object* v_reuseFailAlloc_1612_; 
v_reuseFailAlloc_1612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1612_, 0, v_b_1606_);
v___x_1611_ = v_reuseFailAlloc_1612_;
goto v_reusejp_1610_;
}
v_reusejp_1610_:
{
return v___x_1611_;
}
}
}
else
{
lean_object* v___x_1614_; 
lean_dec(v_x_1605_);
v___x_1614_ = ((lean_object*)(l_Lasm_JS_instFromJSByteArray___lam__0___closed__0));
return v___x_1614_;
}
}
}
static lean_object* _init_l___private_Lasm_JS_Core_0__Lasm_JS_maxSafe(void){
_start:
{
lean_object* v___x_1622_; 
v___x_1622_ = lean_cstr_to_nat("9007199254740991");
return v___x_1622_;
}
}
static double _init_l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f___closed__0(void){
_start:
{
lean_object* v___x_1623_; double v___x_1624_; 
v___x_1623_ = lean_cstr_to_nat("9007199254740991");
v___x_1624_ = lean_float_of_nat(v___x_1623_);
return v___x_1624_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double v_n_1625_){
_start:
{
uint8_t v___y_1627_; uint8_t v___x_1648_; 
v___x_1648_ = lean_float_isnan(v_n_1625_);
if (v___x_1648_ == 0)
{
uint8_t v___x_1649_; 
v___x_1649_ = lean_float_isinf(v_n_1625_);
v___y_1627_ = v___x_1649_;
goto v___jp_1626_;
}
else
{
v___y_1627_ = v___x_1648_;
goto v___jp_1626_;
}
v___jp_1626_:
{
if (v___y_1627_ == 0)
{
double v___x_1628_; uint8_t v___x_1629_; 
v___x_1628_ = floor(v_n_1625_);
v___x_1629_ = lean_float_beq(v___x_1628_, v_n_1625_);
if (v___x_1629_ == 0)
{
lean_object* v___x_1630_; 
v___x_1630_ = lean_box(0);
return v___x_1630_;
}
else
{
double v___x_1631_; double v___x_1632_; uint8_t v___x_1633_; 
v___x_1631_ = lean_float_once(&l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f___closed__0);
v___x_1632_ = fabs(v_n_1625_);
v___x_1633_ = lean_float_decLt(v___x_1631_, v___x_1632_);
if (v___x_1633_ == 0)
{
double v___x_1634_; uint8_t v___x_1635_; 
v___x_1634_ = lean_float_once(&l_Lasm_JS_Data_describe___closed__5, &l_Lasm_JS_Data_describe___closed__5_once, _init_l_Lasm_JS_Data_describe___closed__5);
v___x_1635_ = lean_float_decLt(v_n_1625_, v___x_1634_);
if (v___x_1635_ == 0)
{
uint64_t v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; 
v___x_1636_ = lean_float_to_uint64(v_n_1625_);
v___x_1637_ = lean_uint64_to_nat(v___x_1636_);
v___x_1638_ = lean_nat_to_int(v___x_1637_);
v___x_1639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1639_, 0, v___x_1638_);
return v___x_1639_;
}
else
{
double v___x_1640_; uint64_t v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; 
v___x_1640_ = lean_float_negate(v_n_1625_);
v___x_1641_ = lean_float_to_uint64(v___x_1640_);
v___x_1642_ = lean_uint64_to_nat(v___x_1641_);
v___x_1643_ = lean_nat_to_int(v___x_1642_);
v___x_1644_ = lean_int_neg(v___x_1643_);
lean_dec(v___x_1643_);
v___x_1645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1645_, 0, v___x_1644_);
return v___x_1645_;
}
}
else
{
lean_object* v___x_1646_; 
v___x_1646_ = lean_box(0);
return v___x_1646_;
}
}
}
else
{
lean_object* v___x_1647_; 
v___x_1647_ = lean_box(0);
return v___x_1647_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f___boxed(lean_object* v_n_1650_){
_start:
{
double v_n_boxed_1651_; lean_object* v_res_1652_; 
v_n_boxed_1651_ = lean_unbox_float(v_n_1650_);
lean_dec_ref(v_n_1650_);
v_res_1652_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_boxed_1651_);
return v_res_1652_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSInt___lam__0(lean_object* v_i_1653_){
_start:
{
lean_object* v___x_1654_; lean_object* v___x_1655_; uint8_t v___x_1656_; 
v___x_1654_ = lean_nat_abs(v_i_1653_);
v___x_1655_ = lean_cstr_to_nat("9007199254740991");
v___x_1656_ = lean_nat_dec_le(v___x_1654_, v___x_1655_);
lean_dec(v___x_1654_);
if (v___x_1656_ == 0)
{
lean_object* v___x_1657_; 
v___x_1657_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1657_, 0, v_i_1653_);
return v___x_1657_;
}
else
{
double v___x_1658_; lean_object* v___x_1659_; 
v___x_1658_ = l_Float_ofInt(v_i_1653_);
lean_dec(v_i_1653_);
v___x_1659_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1659_, 0, v___x_1658_);
return v___x_1659_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSInt___lam__0(lean_object* v_x_1667_){
_start:
{
switch(lean_obj_tag(v_x_1667_))
{
case 3:
{
double v_n_1668_; lean_object* v___x_1669_; 
v_n_1668_ = lean_ctor_get_float(v_x_1667_, 0);
lean_dec_ref_known(v_x_1667_, 0);
v___x_1669_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1668_);
if (lean_obj_tag(v___x_1669_) == 0)
{
lean_object* v___x_1670_; 
v___x_1670_ = ((lean_object*)(l_Lasm_JS_instFromJSInt___lam__0___closed__1));
return v___x_1670_;
}
else
{
lean_object* v_val_1671_; lean_object* v___x_1673_; uint8_t v_isShared_1674_; uint8_t v_isSharedCheck_1678_; 
v_val_1671_ = lean_ctor_get(v___x_1669_, 0);
v_isSharedCheck_1678_ = !lean_is_exclusive(v___x_1669_);
if (v_isSharedCheck_1678_ == 0)
{
v___x_1673_ = v___x_1669_;
v_isShared_1674_ = v_isSharedCheck_1678_;
goto v_resetjp_1672_;
}
else
{
lean_inc(v_val_1671_);
lean_dec(v___x_1669_);
v___x_1673_ = lean_box(0);
v_isShared_1674_ = v_isSharedCheck_1678_;
goto v_resetjp_1672_;
}
v_resetjp_1672_:
{
lean_object* v___x_1676_; 
if (v_isShared_1674_ == 0)
{
v___x_1676_ = v___x_1673_;
goto v_reusejp_1675_;
}
else
{
lean_object* v_reuseFailAlloc_1677_; 
v_reuseFailAlloc_1677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1677_, 0, v_val_1671_);
v___x_1676_ = v_reuseFailAlloc_1677_;
goto v_reusejp_1675_;
}
v_reusejp_1675_:
{
return v___x_1676_;
}
}
}
}
case 5:
{
lean_object* v_i_1679_; lean_object* v___x_1681_; uint8_t v_isShared_1682_; uint8_t v_isSharedCheck_1686_; 
v_i_1679_ = lean_ctor_get(v_x_1667_, 0);
v_isSharedCheck_1686_ = !lean_is_exclusive(v_x_1667_);
if (v_isSharedCheck_1686_ == 0)
{
v___x_1681_ = v_x_1667_;
v_isShared_1682_ = v_isSharedCheck_1686_;
goto v_resetjp_1680_;
}
else
{
lean_inc(v_i_1679_);
lean_dec(v_x_1667_);
v___x_1681_ = lean_box(0);
v_isShared_1682_ = v_isSharedCheck_1686_;
goto v_resetjp_1680_;
}
v_resetjp_1680_:
{
lean_object* v___x_1684_; 
if (v_isShared_1682_ == 0)
{
lean_ctor_set_tag(v___x_1681_, 1);
v___x_1684_ = v___x_1681_;
goto v_reusejp_1683_;
}
else
{
lean_object* v_reuseFailAlloc_1685_; 
v_reuseFailAlloc_1685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1685_, 0, v_i_1679_);
v___x_1684_ = v_reuseFailAlloc_1685_;
goto v_reusejp_1683_;
}
v_reusejp_1683_:
{
return v___x_1684_;
}
}
}
default: 
{
lean_object* v___x_1687_; 
lean_dec(v_x_1667_);
v___x_1687_ = ((lean_object*)(l_Lasm_JS_instFromJSInt___lam__0___closed__2));
return v___x_1687_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSNat___lam__0(lean_object* v_n_1695_){
_start:
{
lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; uint8_t v___x_1699_; 
v___x_1696_ = lean_nat_to_int(v_n_1695_);
v___x_1697_ = lean_nat_abs(v___x_1696_);
v___x_1698_ = lean_cstr_to_nat("9007199254740991");
v___x_1699_ = lean_nat_dec_le(v___x_1697_, v___x_1698_);
lean_dec(v___x_1697_);
if (v___x_1699_ == 0)
{
lean_object* v___x_1700_; 
v___x_1700_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1700_, 0, v___x_1696_);
return v___x_1700_;
}
else
{
double v___x_1701_; lean_object* v___x_1702_; 
v___x_1701_ = l_Float_ofInt(v___x_1696_);
lean_dec(v___x_1696_);
v___x_1702_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1702_, 0, v___x_1701_);
return v___x_1702_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSNat___lam__0(lean_object* v_d_1712_){
_start:
{
lean_object* v_a_1714_; 
switch(lean_obj_tag(v_d_1712_))
{
case 3:
{
double v_n_1720_; lean_object* v___x_1721_; 
v_n_1720_ = lean_ctor_get_float(v_d_1712_, 0);
lean_dec_ref_known(v_d_1712_, 0);
v___x_1721_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1720_);
if (lean_obj_tag(v___x_1721_) == 0)
{
lean_object* v___x_1722_; 
v___x_1722_ = ((lean_object*)(l_Lasm_JS_instFromJSNat___lam__0___closed__2));
return v___x_1722_;
}
else
{
lean_object* v_val_1723_; 
v_val_1723_ = lean_ctor_get(v___x_1721_, 0);
lean_inc(v_val_1723_);
lean_dec_ref_known(v___x_1721_, 1);
v_a_1714_ = v_val_1723_;
goto v___jp_1713_;
}
}
case 5:
{
lean_object* v_i_1724_; 
v_i_1724_ = lean_ctor_get(v_d_1712_, 0);
lean_inc(v_i_1724_);
lean_dec_ref_known(v_d_1712_, 1);
v_a_1714_ = v_i_1724_;
goto v___jp_1713_;
}
default: 
{
lean_object* v___x_1725_; 
lean_dec(v_d_1712_);
v___x_1725_ = ((lean_object*)(l_Lasm_JS_instFromJSNat___lam__0___closed__3));
return v___x_1725_;
}
}
v___jp_1713_:
{
lean_object* v___x_1715_; uint8_t v___x_1716_; 
v___x_1715_ = lean_obj_once(&l_Lasm_JS_Wire_read___closed__2, &l_Lasm_JS_Wire_read___closed__2_once, _init_l_Lasm_JS_Wire_read___closed__2);
v___x_1716_ = lean_int_dec_le(v___x_1715_, v_a_1714_);
if (v___x_1716_ == 0)
{
lean_object* v___x_1717_; 
lean_dec(v_a_1714_);
v___x_1717_ = ((lean_object*)(l_Lasm_JS_instFromJSNat___lam__0___closed__1));
return v___x_1717_;
}
else
{
lean_object* v___x_1718_; lean_object* v___x_1719_; 
v___x_1718_ = l_Int_toNat(v_a_1714_);
lean_dec(v_a_1714_);
v___x_1719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1719_, 0, v___x_1718_);
return v___x_1719_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0(lean_object* v_bound_1738_, lean_object* v_name_1739_, lean_object* v_f_1740_, lean_object* v_d_1741_){
_start:
{
lean_object* v_a_1743_; 
switch(lean_obj_tag(v_d_1741_))
{
case 3:
{
double v_n_1754_; lean_object* v___x_1755_; 
v_n_1754_ = lean_ctor_get_float(v_d_1741_, 0);
lean_dec_ref_known(v_d_1741_, 0);
v___x_1755_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1754_);
if (lean_obj_tag(v___x_1755_) == 0)
{
lean_object* v___x_1756_; 
lean_dec(v_f_1740_);
v___x_1756_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0___closed__2));
return v___x_1756_;
}
else
{
lean_object* v_val_1757_; 
v_val_1757_ = lean_ctor_get(v___x_1755_, 0);
lean_inc(v_val_1757_);
lean_dec_ref_known(v___x_1755_, 1);
v_a_1743_ = v_val_1757_;
goto v___jp_1742_;
}
}
case 5:
{
lean_object* v_i_1758_; 
v_i_1758_ = lean_ctor_get(v_d_1741_, 0);
lean_inc(v_i_1758_);
lean_dec_ref_known(v_d_1741_, 1);
v_a_1743_ = v_i_1758_;
goto v___jp_1742_;
}
default: 
{
lean_object* v___x_1759_; 
lean_dec(v_d_1741_);
lean_dec(v_f_1740_);
v___x_1759_ = ((lean_object*)(l_Lasm_JS_instFromJSValue___lam__0___closed__0));
return v___x_1759_;
}
}
v___jp_1742_:
{
lean_object* v___x_1744_; uint8_t v___x_1745_; 
v___x_1744_ = lean_obj_once(&l_Lasm_JS_Wire_read___closed__2, &l_Lasm_JS_Wire_read___closed__2_once, _init_l_Lasm_JS_Wire_read___closed__2);
v___x_1745_ = lean_int_dec_le(v___x_1744_, v_a_1743_);
if (v___x_1745_ == 0)
{
lean_object* v___x_1746_; 
lean_dec(v_a_1743_);
lean_dec(v_f_1740_);
v___x_1746_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0___closed__0));
return v___x_1746_;
}
else
{
lean_object* v___x_1747_; uint8_t v___x_1748_; 
v___x_1747_ = l_Int_toNat(v_a_1743_);
lean_dec(v_a_1743_);
v___x_1748_ = lean_nat_dec_lt(v___x_1747_, v_bound_1738_);
if (v___x_1748_ == 0)
{
lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; 
lean_dec(v___x_1747_);
lean_dec(v_f_1740_);
v___x_1749_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0___closed__1));
v___x_1750_ = lean_string_append(v___x_1749_, v_name_1739_);
v___x_1751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1751_, 0, v___x_1750_);
return v___x_1751_;
}
else
{
lean_object* v___x_1752_; lean_object* v___x_1753_; 
v___x_1752_ = lean_apply_1(v_f_1740_, v___x_1747_);
v___x_1753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1753_, 0, v___x_1752_);
return v___x_1753_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0___boxed(lean_object* v_bound_1760_, lean_object* v_name_1761_, lean_object* v_f_1762_, lean_object* v_d_1763_){
_start:
{
lean_object* v_res_1764_; 
v_res_1764_ = l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0(v_bound_1760_, v_name_1761_, v_f_1762_, v_d_1763_);
lean_dec_ref(v_name_1761_);
lean_dec(v_bound_1760_);
return v_res_1764_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg(lean_object* v_name_1765_, lean_object* v_bound_1766_, lean_object* v_f_1767_){
_start:
{
lean_object* v___f_1768_; uint8_t v___x_1769_; lean_object* v___x_1770_; 
lean_inc_ref(v_name_1765_);
v___f_1768_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1768_, 0, v_bound_1766_);
lean_closure_set(v___f_1768_, 1, v_name_1765_);
lean_closure_set(v___f_1768_, 2, v_f_1767_);
v___x_1769_ = 0;
v___x_1770_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1770_, 0, v___f_1768_);
lean_ctor_set(v___x_1770_, 1, v_name_1765_);
lean_ctor_set_uint8(v___x_1770_, sizeof(void*)*2, v___x_1769_);
return v___x_1770_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded(lean_object* v_00_u03b1_1771_, lean_object* v_name_1772_, lean_object* v_bound_1773_, lean_object* v_f_1774_){
_start:
{
lean_object* v___x_1775_; 
v___x_1775_ = l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg(v_name_1772_, v_bound_1773_, v_f_1774_);
return v___x_1775_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt8___lam__0(uint8_t v_n_1776_){
_start:
{
lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; uint8_t v___x_1781_; 
v___x_1777_ = lean_uint8_to_nat(v_n_1776_);
v___x_1778_ = lean_nat_to_int(v___x_1777_);
v___x_1779_ = lean_nat_abs(v___x_1778_);
v___x_1780_ = lean_cstr_to_nat("9007199254740991");
v___x_1781_ = lean_nat_dec_le(v___x_1779_, v___x_1780_);
lean_dec(v___x_1779_);
if (v___x_1781_ == 0)
{
lean_object* v___x_1782_; 
v___x_1782_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1782_, 0, v___x_1778_);
return v___x_1782_;
}
else
{
double v___x_1783_; lean_object* v___x_1784_; 
v___x_1783_ = l_Float_ofInt(v___x_1778_);
lean_dec(v___x_1778_);
v___x_1784_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1784_, 0, v___x_1783_);
return v___x_1784_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt8___lam__0___boxed(lean_object* v_n_1785_){
_start:
{
uint8_t v_n_boxed_1786_; lean_object* v_res_1787_; 
v_n_boxed_1786_ = lean_unbox(v_n_1785_);
v_res_1787_ = l_Lasm_JS_instToJSUInt8___lam__0(v_n_boxed_1786_);
return v_res_1787_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt8___closed__2(void){
_start:
{
lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; 
v___x_1792_ = ((lean_object*)(l_Lasm_JS_instFromJSUInt8___closed__1));
v___x_1793_ = lean_unsigned_to_nat(256u);
v___x_1794_ = ((lean_object*)(l_Lasm_JS_instFromJSUInt8___closed__0));
v___x_1795_ = l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg(v___x_1794_, v___x_1793_, v___x_1792_);
return v___x_1795_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt8(void){
_start:
{
lean_object* v___x_1796_; 
v___x_1796_ = lean_obj_once(&l_Lasm_JS_instFromJSUInt8___closed__2, &l_Lasm_JS_instFromJSUInt8___closed__2_once, _init_l_Lasm_JS_instFromJSUInt8___closed__2);
return v___x_1796_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt16___lam__0(uint16_t v_n_1797_){
_start:
{
lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; uint8_t v___x_1802_; 
v___x_1798_ = lean_uint16_to_nat(v_n_1797_);
v___x_1799_ = lean_nat_to_int(v___x_1798_);
v___x_1800_ = lean_nat_abs(v___x_1799_);
v___x_1801_ = lean_cstr_to_nat("9007199254740991");
v___x_1802_ = lean_nat_dec_le(v___x_1800_, v___x_1801_);
lean_dec(v___x_1800_);
if (v___x_1802_ == 0)
{
lean_object* v___x_1803_; 
v___x_1803_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1803_, 0, v___x_1799_);
return v___x_1803_;
}
else
{
double v___x_1804_; lean_object* v___x_1805_; 
v___x_1804_ = l_Float_ofInt(v___x_1799_);
lean_dec(v___x_1799_);
v___x_1805_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1805_, 0, v___x_1804_);
return v___x_1805_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt16___lam__0___boxed(lean_object* v_n_1806_){
_start:
{
uint16_t v_n_boxed_1807_; lean_object* v_res_1808_; 
v_n_boxed_1807_ = lean_unbox(v_n_1806_);
v_res_1808_ = l_Lasm_JS_instToJSUInt16___lam__0(v_n_boxed_1807_);
return v_res_1808_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt16___closed__2(void){
_start:
{
lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; 
v___x_1813_ = ((lean_object*)(l_Lasm_JS_instFromJSUInt16___closed__1));
v___x_1814_ = lean_unsigned_to_nat(65536u);
v___x_1815_ = ((lean_object*)(l_Lasm_JS_instFromJSUInt16___closed__0));
v___x_1816_ = l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg(v___x_1815_, v___x_1814_, v___x_1813_);
return v___x_1816_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt16(void){
_start:
{
lean_object* v___x_1817_; 
v___x_1817_ = lean_obj_once(&l_Lasm_JS_instFromJSUInt16___closed__2, &l_Lasm_JS_instFromJSUInt16___closed__2_once, _init_l_Lasm_JS_instFromJSUInt16___closed__2);
return v___x_1817_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt32___lam__0(uint32_t v_n_1818_){
_start:
{
lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; uint8_t v___x_1823_; 
v___x_1819_ = lean_uint32_to_nat(v_n_1818_);
v___x_1820_ = lean_nat_to_int(v___x_1819_);
v___x_1821_ = lean_nat_abs(v___x_1820_);
v___x_1822_ = lean_cstr_to_nat("9007199254740991");
v___x_1823_ = lean_nat_dec_le(v___x_1821_, v___x_1822_);
lean_dec(v___x_1821_);
if (v___x_1823_ == 0)
{
lean_object* v___x_1824_; 
v___x_1824_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1824_, 0, v___x_1820_);
return v___x_1824_;
}
else
{
double v___x_1825_; lean_object* v___x_1826_; 
v___x_1825_ = l_Float_ofInt(v___x_1820_);
lean_dec(v___x_1820_);
v___x_1826_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1826_, 0, v___x_1825_);
return v___x_1826_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt32___lam__0___boxed(lean_object* v_n_1827_){
_start:
{
uint32_t v_n_boxed_1828_; lean_object* v_res_1829_; 
v_n_boxed_1828_ = lean_unbox_uint32(v_n_1827_);
lean_dec(v_n_1827_);
v_res_1829_ = l_Lasm_JS_instToJSUInt32___lam__0(v_n_boxed_1828_);
return v_res_1829_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt32___closed__2(void){
_start:
{
lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; 
v___x_1834_ = ((lean_object*)(l_Lasm_JS_instFromJSUInt32___closed__1));
v___x_1835_ = lean_cstr_to_nat("4294967296");
v___x_1836_ = ((lean_object*)(l_Lasm_JS_instFromJSUInt32___closed__0));
v___x_1837_ = l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg(v___x_1836_, v___x_1835_, v___x_1834_);
return v___x_1837_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt32(void){
_start:
{
lean_object* v___x_1838_; 
v___x_1838_ = lean_obj_once(&l_Lasm_JS_instFromJSUInt32___closed__2, &l_Lasm_JS_instFromJSUInt32___closed__2_once, _init_l_Lasm_JS_instFromJSUInt32___closed__2);
return v___x_1838_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt64___lam__0(uint64_t v_n_1839_){
_start:
{
lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; uint8_t v___x_1844_; 
v___x_1840_ = lean_uint64_to_nat(v_n_1839_);
v___x_1841_ = lean_nat_to_int(v___x_1840_);
v___x_1842_ = lean_nat_abs(v___x_1841_);
v___x_1843_ = lean_cstr_to_nat("9007199254740991");
v___x_1844_ = lean_nat_dec_le(v___x_1842_, v___x_1843_);
lean_dec(v___x_1842_);
if (v___x_1844_ == 0)
{
lean_object* v___x_1845_; 
v___x_1845_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1845_, 0, v___x_1841_);
return v___x_1845_;
}
else
{
double v___x_1846_; lean_object* v___x_1847_; 
v___x_1846_ = l_Float_ofInt(v___x_1841_);
lean_dec(v___x_1841_);
v___x_1847_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1847_, 0, v___x_1846_);
return v___x_1847_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt64___lam__0___boxed(lean_object* v_n_1848_){
_start:
{
uint64_t v_n_boxed_1849_; lean_object* v_res_1850_; 
v_n_boxed_1849_ = lean_unbox_uint64(v_n_1848_);
lean_dec_ref(v_n_1848_);
v_res_1850_ = l_Lasm_JS_instToJSUInt64___lam__0(v_n_boxed_1849_);
return v_res_1850_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt64___closed__1(void){
_start:
{
lean_object* v___x_1854_; 
v___x_1854_ = lean_cstr_to_nat("18446744073709551616");
return v___x_1854_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt64___closed__3(void){
_start:
{
lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; 
v___x_1856_ = ((lean_object*)(l_Lasm_JS_instFromJSUInt64___closed__2));
v___x_1857_ = lean_obj_once(&l_Lasm_JS_instFromJSUInt64___closed__1, &l_Lasm_JS_instFromJSUInt64___closed__1_once, _init_l_Lasm_JS_instFromJSUInt64___closed__1);
v___x_1858_ = ((lean_object*)(l_Lasm_JS_instFromJSUInt64___closed__0));
v___x_1859_ = l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg(v___x_1858_, v___x_1857_, v___x_1856_);
return v___x_1859_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt64(void){
_start:
{
lean_object* v___x_1860_; 
v___x_1860_ = lean_obj_once(&l_Lasm_JS_instFromJSUInt64___closed__3, &l_Lasm_JS_instFromJSUInt64___closed__3_once, _init_l_Lasm_JS_instFromJSUInt64___closed__3);
return v___x_1860_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSArray___redArg___lam__0(lean_object* v_inst_1861_, lean_object* v_x_1862_){
_start:
{
lean_object* v___x_1863_; 
v___x_1863_ = lean_apply_1(v_inst_1861_, v_x_1862_);
return v___x_1863_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSArray___redArg___lam__1(lean_object* v___f_1883_, lean_object* v_xs_1884_){
_start:
{
lean_object* v___x_1885_; size_t v_sz_1886_; size_t v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; 
v___x_1885_ = ((lean_object*)(l_Lasm_JS_instToJSArray___redArg___lam__1___closed__9));
v_sz_1886_ = lean_array_size(v_xs_1884_);
v___x_1887_ = ((size_t)0ULL);
v___x_1888_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1885_, v___f_1883_, v_sz_1886_, v___x_1887_, v_xs_1884_);
v___x_1889_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1889_, 0, v___x_1888_);
return v___x_1889_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSArray___redArg(lean_object* v_inst_1890_){
_start:
{
lean_object* v___f_1891_; lean_object* v___f_1892_; 
v___f_1891_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSArray___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1891_, 0, v_inst_1890_);
v___f_1892_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSArray___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1892_, 0, v___f_1891_);
return v___f_1892_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSArray(lean_object* v_00_u03b1_1893_, lean_object* v_inst_1894_){
_start:
{
lean_object* v___x_1895_; 
v___x_1895_ = l_Lasm_JS_instToJSArray___redArg(v_inst_1894_);
return v___x_1895_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSArray___redArg___lam__0(lean_object* v_fromJS_1896_, lean_object* v_x_1897_){
_start:
{
lean_object* v___x_1898_; 
v___x_1898_ = lean_apply_1(v_fromJS_1896_, v_x_1897_);
return v___x_1898_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSArray___redArg___lam__1(lean_object* v___x_1903_, lean_object* v___f_1904_, lean_object* v_typeName_1905_, lean_object* v_x_1906_){
_start:
{
if (lean_obj_tag(v_x_1906_) == 7)
{
lean_object* v_items_1907_; size_t v_sz_1908_; size_t v___x_1909_; lean_object* v___x_1910_; 
v_items_1907_ = lean_ctor_get(v_x_1906_, 0);
lean_inc_ref(v_items_1907_);
lean_dec_ref_known(v_x_1906_, 1);
v_sz_1908_ = lean_array_size(v_items_1907_);
v___x_1909_ = ((size_t)0ULL);
v___x_1910_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1903_, v___f_1904_, v_sz_1908_, v___x_1909_, v_items_1907_);
if (lean_obj_tag(v___x_1910_) == 0)
{
lean_object* v_a_1911_; lean_object* v___x_1913_; uint8_t v_isShared_1914_; uint8_t v_isSharedCheck_1929_; 
v_a_1911_ = lean_ctor_get(v___x_1910_, 0);
v_isSharedCheck_1929_ = !lean_is_exclusive(v___x_1910_);
if (v_isSharedCheck_1929_ == 0)
{
v___x_1913_ = v___x_1910_;
v_isShared_1914_ = v_isSharedCheck_1929_;
goto v_resetjp_1912_;
}
else
{
lean_inc(v_a_1911_);
lean_dec(v___x_1910_);
v___x_1913_ = lean_box(0);
v_isShared_1914_ = v_isSharedCheck_1929_;
goto v_resetjp_1912_;
}
v_resetjp_1912_:
{
lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; uint8_t v___x_1919_; 
v___x_1915_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__0));
v___x_1916_ = lean_string_append(v___x_1915_, v_typeName_1905_);
v___x_1917_ = lean_string_utf8_byte_size(v_a_1911_);
v___x_1918_ = lean_unsigned_to_nat(0u);
v___x_1919_ = lean_nat_dec_eq(v___x_1917_, v___x_1918_);
if (v___x_1919_ == 0)
{
lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1924_; 
v___x_1920_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__1));
v___x_1921_ = lean_string_append(v___x_1920_, v_a_1911_);
lean_dec(v_a_1911_);
v___x_1922_ = lean_string_append(v___x_1916_, v___x_1921_);
lean_dec_ref(v___x_1921_);
if (v_isShared_1914_ == 0)
{
lean_ctor_set(v___x_1913_, 0, v___x_1922_);
v___x_1924_ = v___x_1913_;
goto v_reusejp_1923_;
}
else
{
lean_object* v_reuseFailAlloc_1925_; 
v_reuseFailAlloc_1925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1925_, 0, v___x_1922_);
v___x_1924_ = v_reuseFailAlloc_1925_;
goto v_reusejp_1923_;
}
v_reusejp_1923_:
{
return v___x_1924_;
}
}
else
{
lean_object* v___x_1927_; 
lean_dec(v_a_1911_);
if (v_isShared_1914_ == 0)
{
lean_ctor_set(v___x_1913_, 0, v___x_1916_);
v___x_1927_ = v___x_1913_;
goto v_reusejp_1926_;
}
else
{
lean_object* v_reuseFailAlloc_1928_; 
v_reuseFailAlloc_1928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1928_, 0, v___x_1916_);
v___x_1927_ = v_reuseFailAlloc_1928_;
goto v_reusejp_1926_;
}
v_reusejp_1926_:
{
return v___x_1927_;
}
}
}
}
else
{
return v___x_1910_;
}
}
else
{
lean_object* v___x_1930_; 
lean_dec(v_x_1906_);
lean_dec_ref(v___f_1904_);
lean_dec_ref(v___x_1903_);
v___x_1930_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__2));
return v___x_1930_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSArray___redArg___lam__1___boxed(lean_object* v___x_1931_, lean_object* v___f_1932_, lean_object* v_typeName_1933_, lean_object* v_x_1934_){
_start:
{
lean_object* v_res_1935_; 
v_res_1935_ = l_Lasm_JS_instFromJSArray___redArg___lam__1(v___x_1931_, v___f_1932_, v_typeName_1933_, v_x_1934_);
lean_dec_ref(v_typeName_1933_);
return v_res_1935_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSArray___redArg(lean_object* v_inst_1956_){
_start:
{
lean_object* v___x_1957_; lean_object* v_fromJS_1958_; lean_object* v_typeName_1959_; lean_object* v___x_1961_; uint8_t v_isShared_1962_; uint8_t v_isSharedCheck_1973_; 
v___x_1957_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___closed__9));
v_fromJS_1958_ = lean_ctor_get(v_inst_1956_, 0);
v_typeName_1959_ = lean_ctor_get(v_inst_1956_, 1);
v_isSharedCheck_1973_ = !lean_is_exclusive(v_inst_1956_);
if (v_isSharedCheck_1973_ == 0)
{
v___x_1961_ = v_inst_1956_;
v_isShared_1962_ = v_isSharedCheck_1973_;
goto v_resetjp_1960_;
}
else
{
lean_inc(v_typeName_1959_);
lean_inc(v_fromJS_1958_);
lean_dec(v_inst_1956_);
v___x_1961_ = lean_box(0);
v_isShared_1962_ = v_isSharedCheck_1973_;
goto v_resetjp_1960_;
}
v_resetjp_1960_:
{
lean_object* v___f_1963_; lean_object* v___f_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; uint8_t v___x_1969_; lean_object* v___x_1971_; 
v___f_1963_ = lean_alloc_closure((void*)(l_Lasm_JS_instFromJSArray___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1963_, 0, v_fromJS_1958_);
lean_inc_ref(v_typeName_1959_);
v___f_1964_ = lean_alloc_closure((void*)(l_Lasm_JS_instFromJSArray___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_1964_, 0, v___x_1957_);
lean_closure_set(v___f_1964_, 1, v___f_1963_);
lean_closure_set(v___f_1964_, 2, v_typeName_1959_);
v___x_1965_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___closed__10));
v___x_1966_ = lean_string_append(v___x_1965_, v_typeName_1959_);
lean_dec_ref(v_typeName_1959_);
v___x_1967_ = ((lean_object*)(l_Lasm_JS_Wire_read___closed__1));
v___x_1968_ = lean_string_append(v___x_1966_, v___x_1967_);
v___x_1969_ = 0;
if (v_isShared_1962_ == 0)
{
lean_ctor_set(v___x_1961_, 1, v___x_1968_);
lean_ctor_set(v___x_1961_, 0, v___f_1964_);
v___x_1971_ = v___x_1961_;
goto v_reusejp_1970_;
}
else
{
lean_object* v_reuseFailAlloc_1972_; 
v_reuseFailAlloc_1972_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_1972_, 0, v___f_1964_);
lean_ctor_set(v_reuseFailAlloc_1972_, 1, v___x_1968_);
v___x_1971_ = v_reuseFailAlloc_1972_;
goto v_reusejp_1970_;
}
v_reusejp_1970_:
{
lean_ctor_set_uint8(v___x_1971_, sizeof(void*)*2, v___x_1969_);
return v___x_1971_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSArray(lean_object* v_00_u03b1_1974_, lean_object* v_inst_1975_){
_start:
{
lean_object* v___x_1976_; 
v___x_1976_ = l_Lasm_JS_instFromJSArray___redArg(v_inst_1975_);
return v___x_1976_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSList___redArg___lam__1(lean_object* v___f_1977_, lean_object* v_xs_1978_){
_start:
{
lean_object* v___x_1979_; lean_object* v___x_1980_; size_t v_sz_1981_; size_t v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; 
v___x_1979_ = lean_array_mk(v_xs_1978_);
v___x_1980_ = ((lean_object*)(l_Lasm_JS_instToJSArray___redArg___lam__1___closed__9));
v_sz_1981_ = lean_array_size(v___x_1979_);
v___x_1982_ = ((size_t)0ULL);
v___x_1983_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1980_, v___f_1977_, v_sz_1981_, v___x_1982_, v___x_1979_);
v___x_1984_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1984_, 0, v___x_1983_);
return v___x_1984_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSList___redArg(lean_object* v_inst_1985_){
_start:
{
lean_object* v___f_1986_; lean_object* v___f_1987_; 
v___f_1986_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSArray___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1986_, 0, v_inst_1985_);
v___f_1987_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSList___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1987_, 0, v___f_1986_);
return v___f_1987_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSList(lean_object* v_00_u03b1_1988_, lean_object* v_inst_1989_){
_start:
{
lean_object* v___x_1990_; 
v___x_1990_ = l_Lasm_JS_instToJSList___redArg(v_inst_1989_);
return v___x_1990_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSList___redArg___lam__1(lean_object* v___f_1993_, lean_object* v_typeName_1994_, lean_object* v_d_1995_){
_start:
{
lean_object* v___x_1996_; 
v___x_1996_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___closed__9));
if (lean_obj_tag(v_d_1995_) == 7)
{
lean_object* v_items_1997_; size_t v_sz_1998_; size_t v___x_1999_; lean_object* v___x_2000_; 
v_items_1997_ = lean_ctor_get(v_d_1995_, 0);
lean_inc_ref(v_items_1997_);
lean_dec_ref_known(v_d_1995_, 1);
v_sz_1998_ = lean_array_size(v_items_1997_);
v___x_1999_ = ((size_t)0ULL);
v___x_2000_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1996_, v___f_1993_, v_sz_1998_, v___x_1999_, v_items_1997_);
if (lean_obj_tag(v___x_2000_) == 0)
{
lean_object* v_a_2001_; lean_object* v___x_2003_; uint8_t v_isShared_2004_; uint8_t v_isSharedCheck_2019_; 
v_a_2001_ = lean_ctor_get(v___x_2000_, 0);
v_isSharedCheck_2019_ = !lean_is_exclusive(v___x_2000_);
if (v_isSharedCheck_2019_ == 0)
{
v___x_2003_ = v___x_2000_;
v_isShared_2004_ = v_isSharedCheck_2019_;
goto v_resetjp_2002_;
}
else
{
lean_inc(v_a_2001_);
lean_dec(v___x_2000_);
v___x_2003_ = lean_box(0);
v_isShared_2004_ = v_isSharedCheck_2019_;
goto v_resetjp_2002_;
}
v_resetjp_2002_:
{
lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; uint8_t v___x_2009_; 
v___x_2005_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__0));
v___x_2006_ = lean_string_append(v___x_2005_, v_typeName_1994_);
v___x_2007_ = lean_string_utf8_byte_size(v_a_2001_);
v___x_2008_ = lean_unsigned_to_nat(0u);
v___x_2009_ = lean_nat_dec_eq(v___x_2007_, v___x_2008_);
if (v___x_2009_ == 0)
{
lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2014_; 
v___x_2010_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__1));
v___x_2011_ = lean_string_append(v___x_2010_, v_a_2001_);
lean_dec(v_a_2001_);
v___x_2012_ = lean_string_append(v___x_2006_, v___x_2011_);
lean_dec_ref(v___x_2011_);
if (v_isShared_2004_ == 0)
{
lean_ctor_set(v___x_2003_, 0, v___x_2012_);
v___x_2014_ = v___x_2003_;
goto v_reusejp_2013_;
}
else
{
lean_object* v_reuseFailAlloc_2015_; 
v_reuseFailAlloc_2015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2015_, 0, v___x_2012_);
v___x_2014_ = v_reuseFailAlloc_2015_;
goto v_reusejp_2013_;
}
v_reusejp_2013_:
{
return v___x_2014_;
}
}
else
{
lean_object* v___x_2017_; 
lean_dec(v_a_2001_);
if (v_isShared_2004_ == 0)
{
lean_ctor_set(v___x_2003_, 0, v___x_2006_);
v___x_2017_ = v___x_2003_;
goto v_reusejp_2016_;
}
else
{
lean_object* v_reuseFailAlloc_2018_; 
v_reuseFailAlloc_2018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2018_, 0, v___x_2006_);
v___x_2017_ = v_reuseFailAlloc_2018_;
goto v_reusejp_2016_;
}
v_reusejp_2016_:
{
return v___x_2017_;
}
}
}
}
else
{
if (lean_obj_tag(v___x_2000_) == 0)
{
lean_object* v_a_2020_; lean_object* v___x_2022_; uint8_t v_isShared_2023_; uint8_t v_isSharedCheck_2027_; 
v_a_2020_ = lean_ctor_get(v___x_2000_, 0);
v_isSharedCheck_2027_ = !lean_is_exclusive(v___x_2000_);
if (v_isSharedCheck_2027_ == 0)
{
v___x_2022_ = v___x_2000_;
v_isShared_2023_ = v_isSharedCheck_2027_;
goto v_resetjp_2021_;
}
else
{
lean_inc(v_a_2020_);
lean_dec(v___x_2000_);
v___x_2022_ = lean_box(0);
v_isShared_2023_ = v_isSharedCheck_2027_;
goto v_resetjp_2021_;
}
v_resetjp_2021_:
{
lean_object* v___x_2025_; 
if (v_isShared_2023_ == 0)
{
lean_ctor_set_tag(v___x_2022_, 0);
v___x_2025_ = v___x_2022_;
goto v_reusejp_2024_;
}
else
{
lean_object* v_reuseFailAlloc_2026_; 
v_reuseFailAlloc_2026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2026_, 0, v_a_2020_);
v___x_2025_ = v_reuseFailAlloc_2026_;
goto v_reusejp_2024_;
}
v_reusejp_2024_:
{
return v___x_2025_;
}
}
}
else
{
lean_object* v_a_2028_; lean_object* v___x_2030_; uint8_t v_isShared_2031_; uint8_t v_isSharedCheck_2036_; 
v_a_2028_ = lean_ctor_get(v___x_2000_, 0);
v_isSharedCheck_2036_ = !lean_is_exclusive(v___x_2000_);
if (v_isSharedCheck_2036_ == 0)
{
v___x_2030_ = v___x_2000_;
v_isShared_2031_ = v_isSharedCheck_2036_;
goto v_resetjp_2029_;
}
else
{
lean_inc(v_a_2028_);
lean_dec(v___x_2000_);
v___x_2030_ = lean_box(0);
v_isShared_2031_ = v_isSharedCheck_2036_;
goto v_resetjp_2029_;
}
v_resetjp_2029_:
{
lean_object* v___x_2032_; lean_object* v___x_2034_; 
v___x_2032_ = lean_array_to_list(v_a_2028_);
if (v_isShared_2031_ == 0)
{
lean_ctor_set(v___x_2030_, 0, v___x_2032_);
v___x_2034_ = v___x_2030_;
goto v_reusejp_2033_;
}
else
{
lean_object* v_reuseFailAlloc_2035_; 
v_reuseFailAlloc_2035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2035_, 0, v___x_2032_);
v___x_2034_ = v_reuseFailAlloc_2035_;
goto v_reusejp_2033_;
}
v_reusejp_2033_:
{
return v___x_2034_;
}
}
}
}
}
else
{
lean_object* v___x_2037_; 
lean_dec(v_d_1995_);
lean_dec_ref(v___f_1993_);
v___x_2037_ = ((lean_object*)(l_Lasm_JS_instFromJSList___redArg___lam__1___closed__0));
return v___x_2037_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSList___redArg___lam__1___boxed(lean_object* v___f_2038_, lean_object* v_typeName_2039_, lean_object* v_d_2040_){
_start:
{
lean_object* v_res_2041_; 
v_res_2041_ = l_Lasm_JS_instFromJSList___redArg___lam__1(v___f_2038_, v_typeName_2039_, v_d_2040_);
lean_dec_ref(v_typeName_2039_);
return v_res_2041_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSList___redArg(lean_object* v_inst_2043_){
_start:
{
lean_object* v_fromJS_2044_; lean_object* v_typeName_2045_; lean_object* v___x_2047_; uint8_t v_isShared_2048_; uint8_t v_isSharedCheck_2059_; 
v_fromJS_2044_ = lean_ctor_get(v_inst_2043_, 0);
v_typeName_2045_ = lean_ctor_get(v_inst_2043_, 1);
v_isSharedCheck_2059_ = !lean_is_exclusive(v_inst_2043_);
if (v_isSharedCheck_2059_ == 0)
{
v___x_2047_ = v_inst_2043_;
v_isShared_2048_ = v_isSharedCheck_2059_;
goto v_resetjp_2046_;
}
else
{
lean_inc(v_typeName_2045_);
lean_inc(v_fromJS_2044_);
lean_dec(v_inst_2043_);
v___x_2047_ = lean_box(0);
v_isShared_2048_ = v_isSharedCheck_2059_;
goto v_resetjp_2046_;
}
v_resetjp_2046_:
{
lean_object* v___f_2049_; lean_object* v___f_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; uint8_t v___x_2055_; lean_object* v___x_2057_; 
v___f_2049_ = lean_alloc_closure((void*)(l_Lasm_JS_instFromJSArray___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2049_, 0, v_fromJS_2044_);
lean_inc_ref(v_typeName_2045_);
v___f_2050_ = lean_alloc_closure((void*)(l_Lasm_JS_instFromJSList___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_2050_, 0, v___f_2049_);
lean_closure_set(v___f_2050_, 1, v_typeName_2045_);
v___x_2051_ = ((lean_object*)(l_Lasm_JS_instFromJSList___redArg___closed__0));
v___x_2052_ = lean_string_append(v___x_2051_, v_typeName_2045_);
lean_dec_ref(v_typeName_2045_);
v___x_2053_ = ((lean_object*)(l_Lasm_JS_Wire_read___closed__1));
v___x_2054_ = lean_string_append(v___x_2052_, v___x_2053_);
v___x_2055_ = 0;
if (v_isShared_2048_ == 0)
{
lean_ctor_set(v___x_2047_, 1, v___x_2054_);
lean_ctor_set(v___x_2047_, 0, v___f_2050_);
v___x_2057_ = v___x_2047_;
goto v_reusejp_2056_;
}
else
{
lean_object* v_reuseFailAlloc_2058_; 
v_reuseFailAlloc_2058_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2058_, 0, v___f_2050_);
lean_ctor_set(v_reuseFailAlloc_2058_, 1, v___x_2054_);
v___x_2057_ = v_reuseFailAlloc_2058_;
goto v_reusejp_2056_;
}
v_reusejp_2056_:
{
lean_ctor_set_uint8(v___x_2057_, sizeof(void*)*2, v___x_2055_);
return v___x_2057_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSList(lean_object* v_00_u03b1_2060_, lean_object* v_inst_2061_){
_start:
{
lean_object* v___x_2062_; 
v___x_2062_ = l_Lasm_JS_instFromJSList___redArg(v_inst_2061_);
return v___x_2062_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSOption___redArg___lam__0(lean_object* v_inst_2063_, lean_object* v_x_2064_){
_start:
{
if (lean_obj_tag(v_x_2064_) == 0)
{
lean_object* v___x_2065_; 
lean_dec_ref(v_inst_2063_);
v___x_2065_ = lean_box(1);
return v___x_2065_;
}
else
{
lean_object* v_val_2066_; lean_object* v___x_2067_; 
v_val_2066_ = lean_ctor_get(v_x_2064_, 0);
lean_inc(v_val_2066_);
lean_dec_ref_known(v_x_2064_, 1);
v___x_2067_ = lean_apply_1(v_inst_2063_, v_val_2066_);
return v___x_2067_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSOption___redArg(lean_object* v_inst_2068_){
_start:
{
lean_object* v___f_2069_; 
v___f_2069_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSOption___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2069_, 0, v_inst_2068_);
return v___f_2069_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSOption(lean_object* v_00_u03b1_2070_, lean_object* v_inst_2071_){
_start:
{
lean_object* v___f_2072_; 
v___f_2072_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSOption___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2072_, 0, v_inst_2071_);
return v___f_2072_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSOption___redArg___lam__0(lean_object* v_fromJS_2075_, lean_object* v_x_2076_){
_start:
{
switch(lean_obj_tag(v_x_2076_))
{
case 1:
{
lean_dec_ref(v_fromJS_2075_);
goto v___jp_2077_;
}
case 0:
{
lean_dec_ref(v_fromJS_2075_);
goto v___jp_2077_;
}
default: 
{
lean_object* v___x_2079_; 
v___x_2079_ = lean_apply_1(v_fromJS_2075_, v_x_2076_);
if (lean_obj_tag(v___x_2079_) == 0)
{
lean_object* v_a_2080_; lean_object* v___x_2082_; uint8_t v_isShared_2083_; uint8_t v_isSharedCheck_2087_; 
v_a_2080_ = lean_ctor_get(v___x_2079_, 0);
v_isSharedCheck_2087_ = !lean_is_exclusive(v___x_2079_);
if (v_isSharedCheck_2087_ == 0)
{
v___x_2082_ = v___x_2079_;
v_isShared_2083_ = v_isSharedCheck_2087_;
goto v_resetjp_2081_;
}
else
{
lean_inc(v_a_2080_);
lean_dec(v___x_2079_);
v___x_2082_ = lean_box(0);
v_isShared_2083_ = v_isSharedCheck_2087_;
goto v_resetjp_2081_;
}
v_resetjp_2081_:
{
lean_object* v___x_2085_; 
if (v_isShared_2083_ == 0)
{
v___x_2085_ = v___x_2082_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2086_; 
v_reuseFailAlloc_2086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2086_, 0, v_a_2080_);
v___x_2085_ = v_reuseFailAlloc_2086_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
return v___x_2085_;
}
}
}
else
{
lean_object* v_a_2088_; lean_object* v___x_2090_; uint8_t v_isShared_2091_; uint8_t v_isSharedCheck_2096_; 
v_a_2088_ = lean_ctor_get(v___x_2079_, 0);
v_isSharedCheck_2096_ = !lean_is_exclusive(v___x_2079_);
if (v_isSharedCheck_2096_ == 0)
{
v___x_2090_ = v___x_2079_;
v_isShared_2091_ = v_isSharedCheck_2096_;
goto v_resetjp_2089_;
}
else
{
lean_inc(v_a_2088_);
lean_dec(v___x_2079_);
v___x_2090_ = lean_box(0);
v_isShared_2091_ = v_isSharedCheck_2096_;
goto v_resetjp_2089_;
}
v_resetjp_2089_:
{
lean_object* v___x_2092_; lean_object* v___x_2094_; 
v___x_2092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2092_, 0, v_a_2088_);
if (v_isShared_2091_ == 0)
{
lean_ctor_set(v___x_2090_, 0, v___x_2092_);
v___x_2094_ = v___x_2090_;
goto v_reusejp_2093_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2095_, 0, v___x_2092_);
v___x_2094_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2093_;
}
v_reusejp_2093_:
{
return v___x_2094_;
}
}
}
}
}
v___jp_2077_:
{
lean_object* v___x_2078_; 
v___x_2078_ = ((lean_object*)(l_Lasm_JS_instFromJSOption___redArg___lam__0___closed__0));
return v___x_2078_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSOption___redArg(lean_object* v_inst_2098_){
_start:
{
lean_object* v_fromJS_2099_; lean_object* v_typeName_2100_; uint8_t v_mode_2101_; lean_object* v___x_2103_; uint8_t v_isShared_2104_; uint8_t v_isSharedCheck_2113_; 
v_fromJS_2099_ = lean_ctor_get(v_inst_2098_, 0);
v_typeName_2100_ = lean_ctor_get(v_inst_2098_, 1);
v_mode_2101_ = lean_ctor_get_uint8(v_inst_2098_, sizeof(void*)*2);
v_isSharedCheck_2113_ = !lean_is_exclusive(v_inst_2098_);
if (v_isSharedCheck_2113_ == 0)
{
v___x_2103_ = v_inst_2098_;
v_isShared_2104_ = v_isSharedCheck_2113_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_typeName_2100_);
lean_inc(v_fromJS_2099_);
lean_dec(v_inst_2098_);
v___x_2103_ = lean_box(0);
v_isShared_2104_ = v_isSharedCheck_2113_;
goto v_resetjp_2102_;
}
v_resetjp_2102_:
{
lean_object* v___f_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2111_; 
v___f_2105_ = lean_alloc_closure((void*)(l_Lasm_JS_instFromJSOption___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2105_, 0, v_fromJS_2099_);
v___x_2106_ = ((lean_object*)(l_Lasm_JS_instFromJSOption___redArg___closed__0));
v___x_2107_ = lean_string_append(v___x_2106_, v_typeName_2100_);
lean_dec_ref(v_typeName_2100_);
v___x_2108_ = ((lean_object*)(l_Lasm_JS_Wire_read___closed__1));
v___x_2109_ = lean_string_append(v___x_2107_, v___x_2108_);
if (v_isShared_2104_ == 0)
{
lean_ctor_set(v___x_2103_, 1, v___x_2109_);
lean_ctor_set(v___x_2103_, 0, v___f_2105_);
v___x_2111_ = v___x_2103_;
goto v_reusejp_2110_;
}
else
{
lean_object* v_reuseFailAlloc_2112_; 
v_reuseFailAlloc_2112_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2112_, 0, v___f_2105_);
lean_ctor_set(v_reuseFailAlloc_2112_, 1, v___x_2109_);
lean_ctor_set_uint8(v_reuseFailAlloc_2112_, sizeof(void*)*2, v_mode_2101_);
v___x_2111_ = v_reuseFailAlloc_2112_;
goto v_reusejp_2110_;
}
v_reusejp_2110_:
{
return v___x_2111_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSOption(lean_object* v_00_u03b1_2114_, lean_object* v_inst_2115_){
_start:
{
lean_object* v___x_2116_; 
v___x_2116_ = l_Lasm_JS_instFromJSOption___redArg(v_inst_2115_);
return v___x_2116_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSProd___redArg___lam__0(lean_object* v_inst_2117_, lean_object* v_inst_2118_, lean_object* v_x_2119_){
_start:
{
lean_object* v_fst_2120_; lean_object* v_snd_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; 
v_fst_2120_ = lean_ctor_get(v_x_2119_, 0);
lean_inc(v_fst_2120_);
v_snd_2121_ = lean_ctor_get(v_x_2119_, 1);
lean_inc(v_snd_2121_);
lean_dec_ref(v_x_2119_);
v___x_2122_ = lean_apply_1(v_inst_2117_, v_fst_2120_);
v___x_2123_ = lean_apply_1(v_inst_2118_, v_snd_2121_);
v___x_2124_ = lean_unsigned_to_nat(2u);
v___x_2125_ = lean_mk_empty_array_with_capacity(v___x_2124_);
v___x_2126_ = lean_array_push(v___x_2125_, v___x_2122_);
v___x_2127_ = lean_array_push(v___x_2126_, v___x_2123_);
v___x_2128_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2128_, 0, v___x_2127_);
return v___x_2128_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSProd___redArg(lean_object* v_inst_2129_, lean_object* v_inst_2130_){
_start:
{
lean_object* v___f_2131_; 
v___f_2131_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSProd___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2131_, 0, v_inst_2129_);
lean_closure_set(v___f_2131_, 1, v_inst_2130_);
return v___f_2131_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSProd(lean_object* v_00_u03b1_2132_, lean_object* v_00_u03b2_2133_, lean_object* v_inst_2134_, lean_object* v_inst_2135_){
_start:
{
lean_object* v___f_2136_; 
v___f_2136_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSProd___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2136_, 0, v_inst_2134_);
lean_closure_set(v___f_2136_, 1, v_inst_2135_);
return v___f_2136_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSProd___redArg___lam__0(lean_object* v_fromJS_2140_, lean_object* v_fromJS_2141_, lean_object* v_x_2142_){
_start:
{
if (lean_obj_tag(v_x_2142_) == 7)
{
lean_object* v_items_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; uint8_t v___x_2148_; 
v_items_2145_ = lean_ctor_get(v_x_2142_, 0);
v___x_2146_ = lean_array_get_size(v_items_2145_);
v___x_2147_ = lean_unsigned_to_nat(2u);
v___x_2148_ = lean_nat_dec_eq(v___x_2146_, v___x_2147_);
if (v___x_2148_ == 0)
{
lean_dec_ref(v_fromJS_2141_);
lean_dec_ref(v_fromJS_2140_);
goto v___jp_2143_;
}
else
{
lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; 
v___x_2149_ = lean_unsigned_to_nat(0u);
v___x_2150_ = lean_array_fget_borrowed(v_items_2145_, v___x_2149_);
lean_inc(v___x_2150_);
v___x_2151_ = lean_apply_1(v_fromJS_2140_, v___x_2150_);
if (lean_obj_tag(v___x_2151_) == 0)
{
lean_object* v_a_2152_; lean_object* v___x_2154_; uint8_t v_isShared_2155_; uint8_t v_isSharedCheck_2159_; 
lean_dec_ref(v_fromJS_2141_);
v_a_2152_ = lean_ctor_get(v___x_2151_, 0);
v_isSharedCheck_2159_ = !lean_is_exclusive(v___x_2151_);
if (v_isSharedCheck_2159_ == 0)
{
v___x_2154_ = v___x_2151_;
v_isShared_2155_ = v_isSharedCheck_2159_;
goto v_resetjp_2153_;
}
else
{
lean_inc(v_a_2152_);
lean_dec(v___x_2151_);
v___x_2154_ = lean_box(0);
v_isShared_2155_ = v_isSharedCheck_2159_;
goto v_resetjp_2153_;
}
v_resetjp_2153_:
{
lean_object* v___x_2157_; 
if (v_isShared_2155_ == 0)
{
v___x_2157_ = v___x_2154_;
goto v_reusejp_2156_;
}
else
{
lean_object* v_reuseFailAlloc_2158_; 
v_reuseFailAlloc_2158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2158_, 0, v_a_2152_);
v___x_2157_ = v_reuseFailAlloc_2158_;
goto v_reusejp_2156_;
}
v_reusejp_2156_:
{
return v___x_2157_;
}
}
}
else
{
lean_object* v_a_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; 
v_a_2160_ = lean_ctor_get(v___x_2151_, 0);
lean_inc(v_a_2160_);
lean_dec_ref_known(v___x_2151_, 1);
v___x_2161_ = lean_unsigned_to_nat(1u);
v___x_2162_ = lean_array_fget_borrowed(v_items_2145_, v___x_2161_);
lean_inc(v___x_2162_);
v___x_2163_ = lean_apply_1(v_fromJS_2141_, v___x_2162_);
if (lean_obj_tag(v___x_2163_) == 0)
{
lean_object* v_a_2164_; lean_object* v___x_2166_; uint8_t v_isShared_2167_; uint8_t v_isSharedCheck_2171_; 
lean_dec(v_a_2160_);
v_a_2164_ = lean_ctor_get(v___x_2163_, 0);
v_isSharedCheck_2171_ = !lean_is_exclusive(v___x_2163_);
if (v_isSharedCheck_2171_ == 0)
{
v___x_2166_ = v___x_2163_;
v_isShared_2167_ = v_isSharedCheck_2171_;
goto v_resetjp_2165_;
}
else
{
lean_inc(v_a_2164_);
lean_dec(v___x_2163_);
v___x_2166_ = lean_box(0);
v_isShared_2167_ = v_isSharedCheck_2171_;
goto v_resetjp_2165_;
}
v_resetjp_2165_:
{
lean_object* v___x_2169_; 
if (v_isShared_2167_ == 0)
{
v___x_2169_ = v___x_2166_;
goto v_reusejp_2168_;
}
else
{
lean_object* v_reuseFailAlloc_2170_; 
v_reuseFailAlloc_2170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2170_, 0, v_a_2164_);
v___x_2169_ = v_reuseFailAlloc_2170_;
goto v_reusejp_2168_;
}
v_reusejp_2168_:
{
return v___x_2169_;
}
}
}
else
{
lean_object* v_a_2172_; lean_object* v___x_2174_; uint8_t v_isShared_2175_; uint8_t v_isSharedCheck_2180_; 
v_a_2172_ = lean_ctor_get(v___x_2163_, 0);
v_isSharedCheck_2180_ = !lean_is_exclusive(v___x_2163_);
if (v_isSharedCheck_2180_ == 0)
{
v___x_2174_ = v___x_2163_;
v_isShared_2175_ = v_isSharedCheck_2180_;
goto v_resetjp_2173_;
}
else
{
lean_inc(v_a_2172_);
lean_dec(v___x_2163_);
v___x_2174_ = lean_box(0);
v_isShared_2175_ = v_isSharedCheck_2180_;
goto v_resetjp_2173_;
}
v_resetjp_2173_:
{
lean_object* v___x_2176_; lean_object* v___x_2178_; 
v___x_2176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2176_, 0, v_a_2160_);
lean_ctor_set(v___x_2176_, 1, v_a_2172_);
if (v_isShared_2175_ == 0)
{
lean_ctor_set(v___x_2174_, 0, v___x_2176_);
v___x_2178_ = v___x_2174_;
goto v_reusejp_2177_;
}
else
{
lean_object* v_reuseFailAlloc_2179_; 
v_reuseFailAlloc_2179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2179_, 0, v___x_2176_);
v___x_2178_ = v_reuseFailAlloc_2179_;
goto v_reusejp_2177_;
}
v_reusejp_2177_:
{
return v___x_2178_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_fromJS_2141_);
lean_dec_ref(v_fromJS_2140_);
goto v___jp_2143_;
}
v___jp_2143_:
{
lean_object* v___x_2144_; 
v___x_2144_ = ((lean_object*)(l_Lasm_JS_instFromJSProd___redArg___lam__0___closed__1));
return v___x_2144_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSProd___redArg___lam__0___boxed(lean_object* v_fromJS_2181_, lean_object* v_fromJS_2182_, lean_object* v_x_2183_){
_start:
{
lean_object* v_res_2184_; 
v_res_2184_ = l_Lasm_JS_instFromJSProd___redArg___lam__0(v_fromJS_2181_, v_fromJS_2182_, v_x_2183_);
lean_dec(v_x_2183_);
return v_res_2184_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSProd___redArg(lean_object* v_inst_2187_, lean_object* v_inst_2188_){
_start:
{
lean_object* v_fromJS_2189_; lean_object* v_typeName_2190_; lean_object* v_fromJS_2191_; lean_object* v_typeName_2192_; lean_object* v___x_2194_; uint8_t v_isShared_2195_; uint8_t v_isSharedCheck_2208_; 
v_fromJS_2189_ = lean_ctor_get(v_inst_2187_, 0);
lean_inc_ref(v_fromJS_2189_);
v_typeName_2190_ = lean_ctor_get(v_inst_2187_, 1);
lean_inc_ref(v_typeName_2190_);
lean_dec_ref(v_inst_2187_);
v_fromJS_2191_ = lean_ctor_get(v_inst_2188_, 0);
v_typeName_2192_ = lean_ctor_get(v_inst_2188_, 1);
v_isSharedCheck_2208_ = !lean_is_exclusive(v_inst_2188_);
if (v_isSharedCheck_2208_ == 0)
{
v___x_2194_ = v_inst_2188_;
v_isShared_2195_ = v_isSharedCheck_2208_;
goto v_resetjp_2193_;
}
else
{
lean_inc(v_typeName_2192_);
lean_inc(v_fromJS_2191_);
lean_dec(v_inst_2188_);
v___x_2194_ = lean_box(0);
v_isShared_2195_ = v_isSharedCheck_2208_;
goto v_resetjp_2193_;
}
v_resetjp_2193_:
{
lean_object* v___f_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; uint8_t v___x_2204_; lean_object* v___x_2206_; 
v___f_2196_ = lean_alloc_closure((void*)(l_Lasm_JS_instFromJSProd___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2196_, 0, v_fromJS_2189_);
lean_closure_set(v___f_2196_, 1, v_fromJS_2191_);
v___x_2197_ = ((lean_object*)(l_Lasm_JS_instFromJSProd___redArg___closed__0));
v___x_2198_ = lean_string_append(v___x_2197_, v_typeName_2190_);
lean_dec_ref(v_typeName_2190_);
v___x_2199_ = ((lean_object*)(l_Lasm_JS_instFromJSProd___redArg___closed__1));
v___x_2200_ = lean_string_append(v___x_2198_, v___x_2199_);
v___x_2201_ = lean_string_append(v___x_2200_, v_typeName_2192_);
lean_dec_ref(v_typeName_2192_);
v___x_2202_ = ((lean_object*)(l_Lasm_JS_Wire_read___closed__1));
v___x_2203_ = lean_string_append(v___x_2201_, v___x_2202_);
v___x_2204_ = 0;
if (v_isShared_2195_ == 0)
{
lean_ctor_set(v___x_2194_, 1, v___x_2203_);
lean_ctor_set(v___x_2194_, 0, v___f_2196_);
v___x_2206_ = v___x_2194_;
goto v_reusejp_2205_;
}
else
{
lean_object* v_reuseFailAlloc_2207_; 
v_reuseFailAlloc_2207_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2207_, 0, v___f_2196_);
lean_ctor_set(v_reuseFailAlloc_2207_, 1, v___x_2203_);
v___x_2206_ = v_reuseFailAlloc_2207_;
goto v_reusejp_2205_;
}
v_reusejp_2205_:
{
lean_ctor_set_uint8(v___x_2206_, sizeof(void*)*2, v___x_2204_);
return v___x_2206_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSProd(lean_object* v_00_u03b1_2209_, lean_object* v_00_u03b2_2210_, lean_object* v_inst_2211_, lean_object* v_inst_2212_){
_start:
{
lean_object* v___x_2213_; 
v___x_2213_ = l_Lasm_JS_instFromJSProd___redArg(v_inst_2211_, v_inst_2212_);
return v___x_2213_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_obj(lean_object* v_fields_2214_){
_start:
{
lean_object* v___x_2215_; lean_object* v___x_2216_; 
v___x_2215_ = lean_array_mk(v_fields_2214_);
v___x_2216_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_2216_, 0, v___x_2215_);
return v___x_2216_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___redArg(lean_object* v_inst_2223_, lean_object* v_d_2224_, lean_object* v_key_2225_){
_start:
{
if (lean_obj_tag(v_d_2224_) == 8)
{
lean_object* v_fromJS_2226_; lean_object* v_typeName_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; 
v_fromJS_2226_ = lean_ctor_get(v_inst_2223_, 0);
lean_inc_ref(v_fromJS_2226_);
v_typeName_2227_ = lean_ctor_get(v_inst_2223_, 1);
lean_inc_ref(v_typeName_2227_);
lean_dec_ref(v_inst_2223_);
v___x_2228_ = l_Lasm_JS_Data_field(v_d_2224_, v_key_2225_);
lean_inc(v___x_2228_);
v___x_2229_ = lean_apply_1(v_fromJS_2226_, v___x_2228_);
if (lean_obj_tag(v___x_2229_) == 0)
{
lean_object* v_a_2230_; lean_object* v___x_2232_; uint8_t v_isShared_2233_; uint8_t v_isSharedCheck_2257_; 
v_a_2230_ = lean_ctor_get(v___x_2229_, 0);
v_isSharedCheck_2257_ = !lean_is_exclusive(v___x_2229_);
if (v_isSharedCheck_2257_ == 0)
{
v___x_2232_ = v___x_2229_;
v_isShared_2233_ = v_isSharedCheck_2257_;
goto v_resetjp_2231_;
}
else
{
lean_inc(v_a_2230_);
lean_dec(v___x_2229_);
v___x_2232_ = lean_box(0);
v_isShared_2233_ = v_isSharedCheck_2257_;
goto v_resetjp_2231_;
}
v_resetjp_2231_:
{
lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; uint8_t v___x_2245_; 
v___x_2234_ = ((lean_object*)(l_Lasm_JS_readField___redArg___closed__0));
v___x_2235_ = lean_string_append(v___x_2234_, v_key_2225_);
v___x_2236_ = ((lean_object*)(l_Lasm_JS_readField___redArg___closed__1));
v___x_2237_ = lean_string_append(v___x_2235_, v___x_2236_);
v___x_2238_ = lean_string_append(v___x_2237_, v_typeName_2227_);
lean_dec_ref(v_typeName_2227_);
v___x_2239_ = ((lean_object*)(l_Lasm_JS_readField___redArg___closed__2));
v___x_2240_ = lean_string_append(v___x_2238_, v___x_2239_);
v___x_2241_ = l_Lasm_JS_Data_describe(v___x_2228_);
v___x_2242_ = lean_string_append(v___x_2240_, v___x_2241_);
lean_dec_ref(v___x_2241_);
v___x_2243_ = lean_string_utf8_byte_size(v_a_2230_);
v___x_2244_ = lean_unsigned_to_nat(0u);
v___x_2245_ = lean_nat_dec_eq(v___x_2243_, v___x_2244_);
if (v___x_2245_ == 0)
{
lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2252_; 
v___x_2246_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__3));
v___x_2247_ = lean_string_append(v___x_2246_, v_a_2230_);
lean_dec(v_a_2230_);
v___x_2248_ = ((lean_object*)(l_Lasm_JS_Wire_read___closed__1));
v___x_2249_ = lean_string_append(v___x_2247_, v___x_2248_);
v___x_2250_ = lean_string_append(v___x_2242_, v___x_2249_);
lean_dec_ref(v___x_2249_);
if (v_isShared_2233_ == 0)
{
lean_ctor_set(v___x_2232_, 0, v___x_2250_);
v___x_2252_ = v___x_2232_;
goto v_reusejp_2251_;
}
else
{
lean_object* v_reuseFailAlloc_2253_; 
v_reuseFailAlloc_2253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2253_, 0, v___x_2250_);
v___x_2252_ = v_reuseFailAlloc_2253_;
goto v_reusejp_2251_;
}
v_reusejp_2251_:
{
return v___x_2252_;
}
}
else
{
lean_object* v___x_2255_; 
lean_dec(v_a_2230_);
if (v_isShared_2233_ == 0)
{
lean_ctor_set(v___x_2232_, 0, v___x_2242_);
v___x_2255_ = v___x_2232_;
goto v_reusejp_2254_;
}
else
{
lean_object* v_reuseFailAlloc_2256_; 
v_reuseFailAlloc_2256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2256_, 0, v___x_2242_);
v___x_2255_ = v_reuseFailAlloc_2256_;
goto v_reusejp_2254_;
}
v_reusejp_2254_:
{
return v___x_2255_;
}
}
}
}
else
{
lean_dec(v___x_2228_);
lean_dec_ref(v_typeName_2227_);
return v___x_2229_;
}
}
else
{
lean_object* v___x_2258_; 
lean_dec_ref(v_inst_2223_);
v___x_2258_ = ((lean_object*)(l_Lasm_JS_readField___redArg___closed__4));
return v___x_2258_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___redArg___boxed(lean_object* v_inst_2259_, lean_object* v_d_2260_, lean_object* v_key_2261_){
_start:
{
lean_object* v_res_2262_; 
v_res_2262_ = l_Lasm_JS_readField___redArg(v_inst_2259_, v_d_2260_, v_key_2261_);
lean_dec_ref(v_key_2261_);
lean_dec(v_d_2260_);
return v_res_2262_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField(lean_object* v_00_u03b1_2263_, lean_object* v_inst_2264_, lean_object* v_d_2265_, lean_object* v_key_2266_){
_start:
{
lean_object* v___x_2267_; 
v___x_2267_ = l_Lasm_JS_readField___redArg(v_inst_2264_, v_d_2265_, v_key_2266_);
return v___x_2267_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___boxed(lean_object* v_00_u03b1_2268_, lean_object* v_inst_2269_, lean_object* v_d_2270_, lean_object* v_key_2271_){
_start:
{
lean_object* v_res_2272_; 
v_res_2272_ = l_Lasm_JS_readField(v_00_u03b1_2268_, v_inst_2269_, v_d_2270_, v_key_2271_);
lean_dec_ref(v_key_2271_);
lean_dec(v_d_2270_);
return v_res_2272_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_ctorIdx(lean_object* v_x_2273_){
_start:
{
if (lean_obj_tag(v_x_2273_) == 0)
{
lean_object* v___x_2274_; 
v___x_2274_ = lean_unsigned_to_nat(0u);
return v___x_2274_;
}
else
{
lean_object* v___x_2275_; 
v___x_2275_ = lean_unsigned_to_nat(1u);
return v___x_2275_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_ctorIdx___boxed(lean_object* v_x_2276_){
_start:
{
lean_object* v_res_2277_; 
v_res_2277_ = l_Lasm_JS_Function_Reply_ctorIdx(v_x_2276_);
lean_dec_ref(v_x_2276_);
return v_res_2277_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_ctorElim___redArg(lean_object* v_t_2278_, lean_object* v_k_2279_){
_start:
{
if (lean_obj_tag(v_t_2278_) == 0)
{
lean_object* v_result_2280_; lean_object* v___x_2281_; 
v_result_2280_ = lean_ctor_get(v_t_2278_, 0);
lean_inc(v_result_2280_);
lean_dec_ref_known(v_t_2278_, 1);
v___x_2281_ = lean_apply_1(v_k_2279_, v_result_2280_);
return v___x_2281_;
}
else
{
lean_object* v_target_2282_; lean_object* v_name_2283_; lean_object* v_args_2284_; lean_object* v___x_2285_; 
v_target_2282_ = lean_ctor_get(v_t_2278_, 0);
lean_inc(v_target_2282_);
v_name_2283_ = lean_ctor_get(v_t_2278_, 1);
lean_inc_ref(v_name_2283_);
v_args_2284_ = lean_ctor_get(v_t_2278_, 2);
lean_inc_ref(v_args_2284_);
lean_dec_ref_known(v_t_2278_, 3);
v___x_2285_ = lean_apply_3(v_k_2279_, v_target_2282_, v_name_2283_, v_args_2284_);
return v___x_2285_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_ctorElim(lean_object* v_motive_2286_, lean_object* v_ctorIdx_2287_, lean_object* v_t_2288_, lean_object* v_h_2289_, lean_object* v_k_2290_){
_start:
{
lean_object* v___x_2291_; 
v___x_2291_ = l_Lasm_JS_Function_Reply_ctorElim___redArg(v_t_2288_, v_k_2290_);
return v___x_2291_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_ctorElim___boxed(lean_object* v_motive_2292_, lean_object* v_ctorIdx_2293_, lean_object* v_t_2294_, lean_object* v_h_2295_, lean_object* v_k_2296_){
_start:
{
lean_object* v_res_2297_; 
v_res_2297_ = l_Lasm_JS_Function_Reply_ctorElim(v_motive_2292_, v_ctorIdx_2293_, v_t_2294_, v_h_2295_, v_k_2296_);
lean_dec(v_ctorIdx_2293_);
return v_res_2297_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_value_elim___redArg(lean_object* v_t_2298_, lean_object* v_value_2299_){
_start:
{
lean_object* v___x_2300_; 
v___x_2300_ = l_Lasm_JS_Function_Reply_ctorElim___redArg(v_t_2298_, v_value_2299_);
return v___x_2300_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_value_elim(lean_object* v_motive_2301_, lean_object* v_t_2302_, lean_object* v_h_2303_, lean_object* v_value_2304_){
_start:
{
lean_object* v___x_2305_; 
v___x_2305_ = l_Lasm_JS_Function_Reply_ctorElim___redArg(v_t_2302_, v_value_2304_);
return v___x_2305_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_callMethod_elim___redArg(lean_object* v_t_2306_, lean_object* v_callMethod_2307_){
_start:
{
lean_object* v___x_2308_; 
v___x_2308_ = l_Lasm_JS_Function_Reply_ctorElim___redArg(v_t_2306_, v_callMethod_2307_);
return v___x_2308_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_callMethod_elim(lean_object* v_motive_2309_, lean_object* v_t_2310_, lean_object* v_h_2311_, lean_object* v_callMethod_2312_){
_start:
{
lean_object* v___x_2313_; 
v___x_2313_ = l_Lasm_JS_Function_Reply_ctorElim___redArg(v_t_2310_, v_callMethod_2312_);
return v___x_2313_;
}
}
static lean_object* _init_l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__0_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; 
v___x_2314_ = lean_box(0);
v___x_2315_ = lean_unsigned_to_nat(16u);
v___x_2316_ = lean_mk_array(v___x_2315_, v___x_2314_);
return v___x_2316_;
}
}
static lean_object* _init_l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__1_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; 
v___x_2317_ = lean_obj_once(&l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__0_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_, &l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__0_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__0_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_);
v___x_2318_ = lean_unsigned_to_nat(0u);
v___x_2319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2319_, 0, v___x_2318_);
lean_ctor_set(v___x_2319_, 1, v___x_2317_);
return v___x_2319_;
}
}
static lean_object* _init_l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__2_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2320_; uint32_t v___x_2321_; lean_object* v___x_2322_; 
v___x_2320_ = lean_obj_once(&l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__1_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_, &l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__1_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__1_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_);
v___x_2321_ = 1;
v___x_2322_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_2322_, 0, v___x_2320_);
lean_ctor_set(v___x_2322_, 1, v___x_2320_);
lean_ctor_set_uint32(v___x_2322_, sizeof(void*)*2, v___x_2321_);
return v___x_2322_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_initFn_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; 
v___x_2324_ = lean_obj_once(&l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__2_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_, &l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__2_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__2_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_);
v___x_2325_ = lean_st_mk_ref(v___x_2324_);
v___x_2326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2326_, 0, v___x_2325_);
return v___x_2326_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_initFn_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2____boxed(lean_object* v_a_2327_){
_start:
{
lean_object* v_res_2328_; 
v_res_2328_ = l___private_Lasm_JS_Core_0__Lasm_JS_initFn_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_();
return v_res_2328_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_startThread___boxed(lean_object* v_dispatch_2331_, lean_object* v_a_00___x40___internal___hyg_2332_){
_start:
{
lean_object* v_res_2333_; 
v_res_2333_ = lasm_js_start(v_dispatch_2331_);
return v_res_2333_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitInto___boxed(lean_object* v_p_2338_, lean_object* v_value_2339_, lean_object* v_keep_2340_, lean_object* v_a_00___x40___internal___hyg_2341_){
_start:
{
lean_object* v_res_2342_; 
v_res_2342_ = lasm_js_await_into(v_p_2338_, v_value_2339_, v_keep_2340_);
lean_dec(v_keep_2340_);
lean_dec_ref(v_value_2339_);
lean_dec(v_p_2338_);
return v_res_2342_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_park___boxed(lean_object* v_a_00___x40___internal___hyg_2344_){
_start:
{
lean_object* v_res_2345_; 
v_res_2345_ = lasm_js_park();
return v_res_2345_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_startSync___boxed(lean_object* v_dispatch_2348_, lean_object* v_a_00___x40___internal___hyg_2349_){
_start:
{
lean_object* v_res_2350_; 
v_res_2350_ = lasm_js_sync_start(v_dispatch_2348_);
return v_res_2350_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_errorText(lean_object* v_e_2351_){
_start:
{
lean_object* v___x_2352_; 
v___x_2352_ = lean_io_error_to_string(v_e_2351_);
return v___x_2352_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_reply_spec__0___redArg(uint64_t v_call_2353_, lean_object* v_range_2354_, lean_object* v_b_2355_, lean_object* v_i_2356_){
_start:
{
lean_object* v_stop_2358_; lean_object* v_step_2359_; uint8_t v___x_2360_; 
v_stop_2358_ = lean_ctor_get(v_range_2354_, 1);
v_step_2359_ = lean_ctor_get(v_range_2354_, 2);
v___x_2360_ = lean_nat_dec_lt(v_i_2356_, v_stop_2358_);
if (v___x_2360_ == 0)
{
lean_object* v___x_2361_; 
lean_dec(v_i_2356_);
v___x_2361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2361_, 0, v_b_2355_);
return v___x_2361_;
}
else
{
lean_object* v___x_2362_; lean_object* v___x_2363_; uint64_t v___x_2364_; uint64_t v___x_2365_; uint8_t v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; 
v___x_2362_ = lean_unsigned_to_nat(8u);
v___x_2363_ = lean_nat_mul(v___x_2362_, v_i_2356_);
v___x_2364_ = lean_uint64_of_nat(v___x_2363_);
lean_dec(v___x_2363_);
v___x_2365_ = lean_uint64_shift_right(v_call_2353_, v___x_2364_);
v___x_2366_ = lean_uint64_to_uint8(v___x_2365_);
v___x_2367_ = lean_byte_array_push(v_b_2355_, v___x_2366_);
v___x_2368_ = lean_nat_add(v_i_2356_, v_step_2359_);
lean_dec(v_i_2356_);
v_b_2355_ = v___x_2367_;
v_i_2356_ = v___x_2368_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_reply_spec__0___redArg___boxed(lean_object* v_call_2370_, lean_object* v_range_2371_, lean_object* v_b_2372_, lean_object* v_i_2373_, lean_object* v___y_2374_){
_start:
{
uint64_t v_call_boxed_2375_; lean_object* v_res_2376_; 
v_call_boxed_2375_ = lean_unbox_uint64(v_call_2370_);
lean_dec_ref(v_call_2370_);
v_res_2376_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_reply_spec__0___redArg(v_call_boxed_2375_, v_range_2371_, v_b_2372_, v_i_2373_);
lean_dec_ref(v_range_2371_);
return v_res_2376_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply(uint64_t v_call_2377_, lean_object* v_result_2378_){
_start:
{
uint8_t v_fst_2381_; lean_object* v_fst_2382_; lean_object* v_snd_2383_; 
if (lean_obj_tag(v_result_2378_) == 0)
{
lean_object* v_a_2430_; uint8_t v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; 
v_a_2430_ = lean_ctor_get(v_result_2378_, 0);
lean_inc(v_a_2430_);
lean_dec_ref_known(v_result_2378_, 1);
v___x_2431_ = 1;
v___x_2432_ = lean_io_error_to_string(v_a_2430_);
v___x_2433_ = lean_string_to_utf8(v___x_2432_);
lean_dec_ref(v___x_2432_);
v___x_2434_ = lean_box(0);
v_fst_2381_ = v___x_2431_;
v_fst_2382_ = v___x_2433_;
v_snd_2383_ = v___x_2434_;
goto v___jp_2380_;
}
else
{
lean_object* v_a_2435_; lean_object* v___x_2437_; uint8_t v_isShared_2438_; uint8_t v_isSharedCheck_2459_; 
v_a_2435_ = lean_ctor_get(v_result_2378_, 0);
v_isSharedCheck_2459_ = !lean_is_exclusive(v_result_2378_);
if (v_isSharedCheck_2459_ == 0)
{
v___x_2437_ = v_result_2378_;
v_isShared_2438_ = v_isSharedCheck_2459_;
goto v_resetjp_2436_;
}
else
{
lean_inc(v_a_2435_);
lean_dec(v_result_2378_);
v___x_2437_ = lean_box(0);
v_isShared_2438_ = v_isSharedCheck_2459_;
goto v_resetjp_2436_;
}
v_resetjp_2436_:
{
if (lean_obj_tag(v_a_2435_) == 0)
{
lean_object* v_result_2439_; uint8_t v___x_2440_; lean_object* v___x_2441_; 
lean_del_object(v___x_2437_);
v_result_2439_ = lean_ctor_get(v_a_2435_, 0);
lean_inc(v_result_2439_);
lean_dec_ref_known(v_a_2435_, 1);
v___x_2440_ = 0;
v___x_2441_ = l_Lasm_JS_Wire_encode(v_result_2439_);
v_fst_2381_ = v___x_2440_;
v_fst_2382_ = v___x_2441_;
v_snd_2383_ = v_result_2439_;
goto v___jp_2380_;
}
else
{
lean_object* v_target_2442_; lean_object* v_name_2443_; lean_object* v_args_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2448_; 
v_target_2442_ = lean_ctor_get(v_a_2435_, 0);
lean_inc(v_target_2442_);
v_name_2443_ = lean_ctor_get(v_a_2435_, 1);
lean_inc_ref(v_name_2443_);
v_args_2444_ = lean_ctor_get(v_a_2435_, 2);
lean_inc_ref(v_args_2444_);
lean_dec_ref_known(v_a_2435_, 3);
v___x_2445_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
v___x_2446_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2446_, 0, v_target_2442_);
lean_ctor_set(v___x_2446_, 1, v___x_2445_);
if (v_isShared_2438_ == 0)
{
lean_ctor_set_tag(v___x_2437_, 4);
lean_ctor_set(v___x_2437_, 0, v_name_2443_);
v___x_2448_ = v___x_2437_;
goto v_reusejp_2447_;
}
else
{
lean_object* v_reuseFailAlloc_2458_; 
v_reuseFailAlloc_2458_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2458_, 0, v_name_2443_);
v___x_2448_ = v_reuseFailAlloc_2458_;
goto v_reusejp_2447_;
}
v_reusejp_2447_:
{
lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v_d_2455_; uint8_t v___x_2456_; lean_object* v___x_2457_; 
v___x_2449_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2449_, 0, v_args_2444_);
v___x_2450_ = lean_unsigned_to_nat(3u);
v___x_2451_ = lean_mk_empty_array_with_capacity(v___x_2450_);
v___x_2452_ = lean_array_push(v___x_2451_, v___x_2446_);
v___x_2453_ = lean_array_push(v___x_2452_, v___x_2448_);
v___x_2454_ = lean_array_push(v___x_2453_, v___x_2449_);
v_d_2455_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_d_2455_, 0, v___x_2454_);
v___x_2456_ = 2;
v___x_2457_ = l_Lasm_JS_Wire_encode(v_d_2455_);
v_fst_2381_ = v___x_2456_;
v_fst_2382_ = v___x_2457_;
v_snd_2383_ = v_d_2455_;
goto v___jp_2380_;
}
}
}
}
v___jp_2380_:
{
lean_object* v_b_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v_a_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; uint32_t v___x_2391_; uint8_t v___x_2392_; lean_object* v___x_2393_; uint32_t v___x_2394_; uint32_t v___x_2395_; uint8_t v___x_2396_; lean_object* v___x_2397_; uint32_t v___x_2398_; uint32_t v___x_2399_; uint8_t v___x_2400_; lean_object* v___x_2401_; uint32_t v___x_2402_; uint32_t v___x_2403_; uint8_t v___x_2404_; lean_object* v___x_2405_; uint32_t v___x_2406_; uint32_t v___x_2407_; uint64_t v___x_2408_; lean_object* v___x_2409_; uint8_t v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; 
v_b_2384_ = l_ByteArray_empty;
v___x_2385_ = lean_unsigned_to_nat(0u);
v___x_2386_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64___closed__0));
v___x_2387_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_reply_spec__0___redArg(v_call_2377_, v___x_2386_, v_b_2384_, v___x_2385_);
v_a_2388_ = lean_ctor_get(v___x_2387_, 0);
lean_inc(v_a_2388_);
lean_dec_ref(v___x_2387_);
v___x_2389_ = lean_byte_array_push(v_a_2388_, v_fst_2381_);
v___x_2390_ = lean_byte_array_size(v_fst_2382_);
v___x_2391_ = lean_uint32_of_nat(v___x_2390_);
v___x_2392_ = lean_uint32_to_uint8(v___x_2391_);
v___x_2393_ = lean_byte_array_push(v___x_2389_, v___x_2392_);
v___x_2394_ = 8;
v___x_2395_ = lean_uint32_shift_right(v___x_2391_, v___x_2394_);
v___x_2396_ = lean_uint32_to_uint8(v___x_2395_);
v___x_2397_ = lean_byte_array_push(v___x_2393_, v___x_2396_);
v___x_2398_ = 16;
v___x_2399_ = lean_uint32_shift_right(v___x_2391_, v___x_2398_);
v___x_2400_ = lean_uint32_to_uint8(v___x_2399_);
v___x_2401_ = lean_byte_array_push(v___x_2397_, v___x_2400_);
v___x_2402_ = 24;
v___x_2403_ = lean_uint32_shift_right(v___x_2391_, v___x_2402_);
v___x_2404_ = lean_uint32_to_uint8(v___x_2403_);
v___x_2405_ = lean_byte_array_push(v___x_2401_, v___x_2404_);
v___x_2406_ = 208;
v___x_2407_ = 0;
v___x_2408_ = 0ULL;
v___x_2409_ = lean_byte_array_size(v___x_2405_);
v___x_2410_ = 0;
v___x_2411_ = lean_byte_array_copy_slice(v_fst_2382_, v___x_2385_, v___x_2405_, v___x_2409_, v___x_2390_, v___x_2410_);
lean_dec_ref(v_fst_2382_);
v___x_2412_ = lean_box(0);
v___x_2413_ = lasm_js_call(v___x_2406_, v___x_2407_, v___x_2408_, v___x_2411_, v_snd_2383_);
lean_dec(v_snd_2383_);
lean_dec_ref(v___x_2411_);
if (lean_obj_tag(v___x_2413_) == 0)
{
lean_object* v___x_2415_; uint8_t v_isShared_2416_; uint8_t v_isSharedCheck_2420_; 
v_isSharedCheck_2420_ = !lean_is_exclusive(v___x_2413_);
if (v_isSharedCheck_2420_ == 0)
{
lean_object* v_unused_2421_; 
v_unused_2421_ = lean_ctor_get(v___x_2413_, 0);
lean_dec(v_unused_2421_);
v___x_2415_ = v___x_2413_;
v_isShared_2416_ = v_isSharedCheck_2420_;
goto v_resetjp_2414_;
}
else
{
lean_dec(v___x_2413_);
v___x_2415_ = lean_box(0);
v_isShared_2416_ = v_isSharedCheck_2420_;
goto v_resetjp_2414_;
}
v_resetjp_2414_:
{
lean_object* v___x_2418_; 
if (v_isShared_2416_ == 0)
{
lean_ctor_set(v___x_2415_, 0, v___x_2412_);
v___x_2418_ = v___x_2415_;
goto v_reusejp_2417_;
}
else
{
lean_object* v_reuseFailAlloc_2419_; 
v_reuseFailAlloc_2419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2419_, 0, v___x_2412_);
v___x_2418_ = v_reuseFailAlloc_2419_;
goto v_reusejp_2417_;
}
v_reusejp_2417_:
{
return v___x_2418_;
}
}
}
else
{
lean_object* v_a_2422_; lean_object* v___x_2424_; uint8_t v_isShared_2425_; uint8_t v_isSharedCheck_2429_; 
v_a_2422_ = lean_ctor_get(v___x_2413_, 0);
v_isSharedCheck_2429_ = !lean_is_exclusive(v___x_2413_);
if (v_isSharedCheck_2429_ == 0)
{
v___x_2424_ = v___x_2413_;
v_isShared_2425_ = v_isSharedCheck_2429_;
goto v_resetjp_2423_;
}
else
{
lean_inc(v_a_2422_);
lean_dec(v___x_2413_);
v___x_2424_ = lean_box(0);
v_isShared_2425_ = v_isSharedCheck_2429_;
goto v_resetjp_2423_;
}
v_resetjp_2423_:
{
lean_object* v___x_2427_; 
if (v_isShared_2425_ == 0)
{
v___x_2427_ = v___x_2424_;
goto v_reusejp_2426_;
}
else
{
lean_object* v_reuseFailAlloc_2428_; 
v_reuseFailAlloc_2428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2428_, 0, v_a_2422_);
v___x_2427_ = v_reuseFailAlloc_2428_;
goto v_reusejp_2426_;
}
v_reusejp_2426_:
{
return v___x_2427_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply___boxed(lean_object* v_call_2460_, lean_object* v_result_2461_, lean_object* v_a_2462_){
_start:
{
uint64_t v_call_boxed_2463_; lean_object* v_res_2464_; 
v_call_boxed_2463_ = lean_unbox_uint64(v_call_2460_);
lean_dec_ref(v_call_2460_);
v_res_2464_ = l___private_Lasm_JS_Core_0__Lasm_JS_reply(v_call_boxed_2463_, v_result_2461_);
return v_res_2464_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_reply_spec__0(uint64_t v_call_2465_, lean_object* v_range_2466_, lean_object* v_b_2467_, lean_object* v_i_2468_, lean_object* v_hs_2469_, lean_object* v_hl_2470_){
_start:
{
lean_object* v___x_2472_; 
v___x_2472_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_reply_spec__0___redArg(v_call_2465_, v_range_2466_, v_b_2467_, v_i_2468_);
return v___x_2472_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_reply_spec__0___boxed(lean_object* v_call_2473_, lean_object* v_range_2474_, lean_object* v_b_2475_, lean_object* v_i_2476_, lean_object* v_hs_2477_, lean_object* v_hl_2478_, lean_object* v___y_2479_){
_start:
{
uint64_t v_call_boxed_2480_; lean_object* v_res_2481_; 
v_call_boxed_2480_ = lean_unbox_uint64(v_call_2473_);
lean_dec_ref(v_call_2473_);
v_res_2481_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_reply_spec__0(v_call_boxed_2480_, v_range_2474_, v_b_2475_, v_i_2476_, v_hs_2477_, v_hl_2478_);
lean_dec_ref(v_range_2474_);
return v_res_2481_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_argsOf(lean_object* v_bytes_2482_){
_start:
{
lean_object* v___x_2484_; 
v___x_2484_ = l_Lasm_JS_Wire_decode(v_bytes_2482_);
if (lean_obj_tag(v___x_2484_) == 0)
{
lean_object* v_a_2485_; lean_object* v___x_2487_; uint8_t v_isShared_2488_; uint8_t v_isSharedCheck_2499_; 
v_a_2485_ = lean_ctor_get(v___x_2484_, 0);
v_isSharedCheck_2499_ = !lean_is_exclusive(v___x_2484_);
if (v_isSharedCheck_2499_ == 0)
{
v___x_2487_ = v___x_2484_;
v_isShared_2488_ = v_isSharedCheck_2499_;
goto v_resetjp_2486_;
}
else
{
lean_inc(v_a_2485_);
lean_dec(v___x_2484_);
v___x_2487_ = lean_box(0);
v_isShared_2488_ = v_isSharedCheck_2499_;
goto v_resetjp_2486_;
}
v_resetjp_2486_:
{
if (lean_obj_tag(v_a_2485_) == 7)
{
lean_object* v_items_2489_; lean_object* v___x_2491_; 
v_items_2489_ = lean_ctor_get(v_a_2485_, 0);
lean_inc_ref(v_items_2489_);
lean_dec_ref_known(v_a_2485_, 1);
if (v_isShared_2488_ == 0)
{
lean_ctor_set(v___x_2487_, 0, v_items_2489_);
v___x_2491_ = v___x_2487_;
goto v_reusejp_2490_;
}
else
{
lean_object* v_reuseFailAlloc_2492_; 
v_reuseFailAlloc_2492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2492_, 0, v_items_2489_);
v___x_2491_ = v_reuseFailAlloc_2492_;
goto v_reusejp_2490_;
}
v_reusejp_2490_:
{
return v___x_2491_;
}
}
else
{
lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2497_; 
v___x_2493_ = lean_unsigned_to_nat(1u);
v___x_2494_ = lean_mk_empty_array_with_capacity(v___x_2493_);
v___x_2495_ = lean_array_push(v___x_2494_, v_a_2485_);
if (v_isShared_2488_ == 0)
{
lean_ctor_set(v___x_2487_, 0, v___x_2495_);
v___x_2497_ = v___x_2487_;
goto v_reusejp_2496_;
}
else
{
lean_object* v_reuseFailAlloc_2498_; 
v_reuseFailAlloc_2498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2498_, 0, v___x_2495_);
v___x_2497_ = v_reuseFailAlloc_2498_;
goto v_reusejp_2496_;
}
v_reusejp_2496_:
{
return v___x_2497_;
}
}
}
}
else
{
lean_object* v_a_2500_; lean_object* v___x_2502_; uint8_t v_isShared_2503_; uint8_t v_isSharedCheck_2507_; 
v_a_2500_ = lean_ctor_get(v___x_2484_, 0);
v_isSharedCheck_2507_ = !lean_is_exclusive(v___x_2484_);
if (v_isSharedCheck_2507_ == 0)
{
v___x_2502_ = v___x_2484_;
v_isShared_2503_ = v_isSharedCheck_2507_;
goto v_resetjp_2501_;
}
else
{
lean_inc(v_a_2500_);
lean_dec(v___x_2484_);
v___x_2502_ = lean_box(0);
v_isShared_2503_ = v_isSharedCheck_2507_;
goto v_resetjp_2501_;
}
v_resetjp_2501_:
{
lean_object* v___x_2505_; 
if (v_isShared_2503_ == 0)
{
v___x_2505_ = v___x_2502_;
goto v_reusejp_2504_;
}
else
{
lean_object* v_reuseFailAlloc_2506_; 
v_reuseFailAlloc_2506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2506_, 0, v_a_2500_);
v___x_2505_ = v_reuseFailAlloc_2506_;
goto v_reusejp_2504_;
}
v_reusejp_2504_:
{
return v___x_2505_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_argsOf___boxed(lean_object* v_bytes_2508_, lean_object* v_a_2509_){
_start:
{
lean_object* v_res_2510_; 
v_res_2510_ = l___private_Lasm_JS_Core_0__Lasm_JS_argsOf(v_bytes_2508_);
lean_dec_ref(v_bytes_2508_);
return v_res_2510_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__0(lean_object* v_f_2511_, lean_object* v_x_2512_){
_start:
{
if (lean_obj_tag(v_x_2512_) == 0)
{
lean_object* v_a_2514_; lean_object* v___x_2516_; uint8_t v_isShared_2517_; uint8_t v_isSharedCheck_2522_; 
lean_dec_ref(v_f_2511_);
v_a_2514_ = lean_ctor_get(v_x_2512_, 0);
v_isSharedCheck_2522_ = !lean_is_exclusive(v_x_2512_);
if (v_isSharedCheck_2522_ == 0)
{
v___x_2516_ = v_x_2512_;
v_isShared_2517_ = v_isSharedCheck_2522_;
goto v_resetjp_2515_;
}
else
{
lean_inc(v_a_2514_);
lean_dec(v_x_2512_);
v___x_2516_ = lean_box(0);
v_isShared_2517_ = v_isSharedCheck_2522_;
goto v_resetjp_2515_;
}
v_resetjp_2515_:
{
lean_object* v___x_2519_; 
if (v_isShared_2517_ == 0)
{
v___x_2519_ = v___x_2516_;
goto v_reusejp_2518_;
}
else
{
lean_object* v_reuseFailAlloc_2521_; 
v_reuseFailAlloc_2521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2521_, 0, v_a_2514_);
v___x_2519_ = v_reuseFailAlloc_2521_;
goto v_reusejp_2518_;
}
v_reusejp_2518_:
{
lean_object* v___x_2520_; 
v___x_2520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2520_, 0, v___x_2519_);
return v___x_2520_;
}
}
}
else
{
lean_object* v_a_2523_; lean_object* v___x_2524_; 
v_a_2523_ = lean_ctor_get(v_x_2512_, 0);
lean_inc(v_a_2523_);
lean_dec_ref_known(v_x_2512_, 1);
v___x_2524_ = lean_apply_2(v_f_2511_, v_a_2523_, lean_box(0));
return v___x_2524_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__0___boxed(lean_object* v_f_2525_, lean_object* v_x_2526_, lean_object* v___y_2527_){
_start:
{
lean_object* v_res_2528_; 
v_res_2528_ = l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__0(v_f_2525_, v_x_2526_);
return v_res_2528_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__1(uint64_t v_call_2529_, lean_object* v_result_2530_){
_start:
{
lean_object* v___x_2532_; lean_object* v___x_2533_; 
v___x_2532_ = lean_box(0);
v___x_2533_ = l___private_Lasm_JS_Core_0__Lasm_JS_reply(v_call_2529_, v_result_2530_);
lean_dec_ref(v___x_2533_);
return v___x_2532_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__1___boxed(lean_object* v_call_2534_, lean_object* v_result_2535_, lean_object* v___y_2536_){
_start:
{
uint64_t v_call_boxed_2537_; lean_object* v_res_2538_; 
v_call_boxed_2537_ = lean_unbox_uint64(v_call_2534_);
lean_dec_ref(v_call_2534_);
v_res_2538_ = l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__1(v_call_boxed_2537_, v_result_2535_);
return v_res_2538_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_runCall(uint64_t v_call_2539_, lean_object* v_f_2540_, lean_object* v_bytes_2541_){
_start:
{
lean_object* v___f_2543_; lean_object* v___x_2544_; lean_object* v___f_2545_; lean_object* v___x_2546_; uint8_t v___x_2547_; lean_object* v_val_2549_; lean_object* v___x_2558_; 
v___f_2543_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2543_, 0, v_f_2540_);
v___x_2544_ = lean_box_uint64(v_call_2539_);
v___f_2545_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2545_, 0, v___x_2544_);
v___x_2546_ = lean_unsigned_to_nat(0u);
v___x_2547_ = 0;
v___x_2558_ = l___private_Lasm_JS_Core_0__Lasm_JS_argsOf(v_bytes_2541_);
if (lean_obj_tag(v___x_2558_) == 0)
{
lean_object* v_a_2559_; lean_object* v___x_2561_; uint8_t v_isShared_2562_; uint8_t v_isSharedCheck_2566_; 
v_a_2559_ = lean_ctor_get(v___x_2558_, 0);
v_isSharedCheck_2566_ = !lean_is_exclusive(v___x_2558_);
if (v_isSharedCheck_2566_ == 0)
{
v___x_2561_ = v___x_2558_;
v_isShared_2562_ = v_isSharedCheck_2566_;
goto v_resetjp_2560_;
}
else
{
lean_inc(v_a_2559_);
lean_dec(v___x_2558_);
v___x_2561_ = lean_box(0);
v_isShared_2562_ = v_isSharedCheck_2566_;
goto v_resetjp_2560_;
}
v_resetjp_2560_:
{
lean_object* v___x_2564_; 
if (v_isShared_2562_ == 0)
{
lean_ctor_set_tag(v___x_2561_, 1);
v___x_2564_ = v___x_2561_;
goto v_reusejp_2563_;
}
else
{
lean_object* v_reuseFailAlloc_2565_; 
v_reuseFailAlloc_2565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2565_, 0, v_a_2559_);
v___x_2564_ = v_reuseFailAlloc_2565_;
goto v_reusejp_2563_;
}
v_reusejp_2563_:
{
v_val_2549_ = v___x_2564_;
goto v___jp_2548_;
}
}
}
else
{
lean_object* v_a_2567_; lean_object* v___x_2569_; uint8_t v_isShared_2570_; uint8_t v_isSharedCheck_2574_; 
v_a_2567_ = lean_ctor_get(v___x_2558_, 0);
v_isSharedCheck_2574_ = !lean_is_exclusive(v___x_2558_);
if (v_isSharedCheck_2574_ == 0)
{
v___x_2569_ = v___x_2558_;
v_isShared_2570_ = v_isSharedCheck_2574_;
goto v_resetjp_2568_;
}
else
{
lean_inc(v_a_2567_);
lean_dec(v___x_2558_);
v___x_2569_ = lean_box(0);
v_isShared_2570_ = v_isSharedCheck_2574_;
goto v_resetjp_2568_;
}
v_resetjp_2568_:
{
lean_object* v___x_2572_; 
if (v_isShared_2570_ == 0)
{
lean_ctor_set_tag(v___x_2569_, 0);
v___x_2572_ = v___x_2569_;
goto v_reusejp_2571_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v_a_2567_);
v___x_2572_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2571_;
}
v_reusejp_2571_:
{
v_val_2549_ = v___x_2572_;
goto v___jp_2548_;
}
}
}
v___jp_2548_:
{
lean_object* v___x_2550_; lean_object* v___x_2551_; 
v___x_2550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2550_, 0, v_val_2549_);
v___x_2551_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2546_, v___x_2547_, v___x_2550_, v___f_2543_);
if (lean_obj_tag(v___x_2551_) == 0)
{
lean_object* v_a_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; 
lean_dec_ref(v___f_2545_);
v_a_2552_ = lean_ctor_get(v___x_2551_, 0);
lean_inc(v_a_2552_);
lean_dec_ref_known(v___x_2551_, 1);
v___x_2553_ = lean_box(0);
v___x_2554_ = l___private_Lasm_JS_Core_0__Lasm_JS_reply(v_call_2539_, v_a_2552_);
lean_dec_ref(v___x_2554_);
return v___x_2553_;
}
else
{
lean_object* v_a_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; 
v_a_2555_ = lean_ctor_get(v___x_2551_, 0);
lean_inc_ref(v_a_2555_);
lean_dec_ref_known(v___x_2551_, 1);
v___x_2556_ = lean_box(0);
v___x_2557_ = lean_io_map_task(v___f_2545_, v_a_2555_, v___x_2546_, v___x_2547_);
lean_dec_ref(v___x_2557_);
return v___x_2556_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_runCall___boxed(lean_object* v_call_2575_, lean_object* v_f_2576_, lean_object* v_bytes_2577_, lean_object* v_a_2578_){
_start:
{
uint64_t v_call_boxed_2579_; lean_object* v_res_2580_; 
v_call_boxed_2579_ = lean_unbox_uint64(v_call_2575_);
lean_dec_ref(v_call_2575_);
v_res_2580_ = l___private_Lasm_JS_Core_0__Lasm_JS_runCall(v_call_boxed_2579_, v_f_2576_, v_bytes_2577_);
lean_dec_ref(v_bytes_2577_);
return v_res_2580_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2___redArg(uint32_t v_a_2581_, lean_object* v_x_2582_){
_start:
{
if (lean_obj_tag(v_x_2582_) == 0)
{
uint8_t v___x_2583_; 
v___x_2583_ = 0;
return v___x_2583_;
}
else
{
lean_object* v_key_2584_; lean_object* v_tail_2585_; uint32_t v___x_2586_; uint8_t v___x_2587_; 
v_key_2584_ = lean_ctor_get(v_x_2582_, 0);
v_tail_2585_ = lean_ctor_get(v_x_2582_, 2);
v___x_2586_ = lean_unbox_uint32(v_key_2584_);
v___x_2587_ = lean_uint32_dec_eq(v___x_2586_, v_a_2581_);
if (v___x_2587_ == 0)
{
v_x_2582_ = v_tail_2585_;
goto _start;
}
else
{
return v___x_2587_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2___redArg___boxed(lean_object* v_a_2589_, lean_object* v_x_2590_){
_start:
{
uint32_t v_a_boxed_2591_; uint8_t v_res_2592_; lean_object* v_r_2593_; 
v_a_boxed_2591_ = lean_unbox_uint32(v_a_2589_);
lean_dec(v_a_2589_);
v_res_2592_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2___redArg(v_a_boxed_2591_, v_x_2590_);
lean_dec(v_x_2590_);
v_r_2593_ = lean_box(v_res_2592_);
return v_r_2593_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3___redArg(uint32_t v_a_2594_, lean_object* v_x_2595_){
_start:
{
if (lean_obj_tag(v_x_2595_) == 0)
{
return v_x_2595_;
}
else
{
lean_object* v_key_2596_; lean_object* v_value_2597_; lean_object* v_tail_2598_; lean_object* v___x_2600_; uint8_t v_isShared_2601_; uint8_t v_isSharedCheck_2608_; 
v_key_2596_ = lean_ctor_get(v_x_2595_, 0);
v_value_2597_ = lean_ctor_get(v_x_2595_, 1);
v_tail_2598_ = lean_ctor_get(v_x_2595_, 2);
v_isSharedCheck_2608_ = !lean_is_exclusive(v_x_2595_);
if (v_isSharedCheck_2608_ == 0)
{
v___x_2600_ = v_x_2595_;
v_isShared_2601_ = v_isSharedCheck_2608_;
goto v_resetjp_2599_;
}
else
{
lean_inc(v_tail_2598_);
lean_inc(v_value_2597_);
lean_inc(v_key_2596_);
lean_dec(v_x_2595_);
v___x_2600_ = lean_box(0);
v_isShared_2601_ = v_isSharedCheck_2608_;
goto v_resetjp_2599_;
}
v_resetjp_2599_:
{
uint32_t v___x_2602_; uint8_t v___x_2603_; 
v___x_2602_ = lean_unbox_uint32(v_key_2596_);
v___x_2603_ = lean_uint32_dec_eq(v___x_2602_, v_a_2594_);
if (v___x_2603_ == 0)
{
lean_object* v___x_2604_; lean_object* v___x_2606_; 
v___x_2604_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3___redArg(v_a_2594_, v_tail_2598_);
if (v_isShared_2601_ == 0)
{
lean_ctor_set(v___x_2600_, 2, v___x_2604_);
v___x_2606_ = v___x_2600_;
goto v_reusejp_2605_;
}
else
{
lean_object* v_reuseFailAlloc_2607_; 
v_reuseFailAlloc_2607_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2607_, 0, v_key_2596_);
lean_ctor_set(v_reuseFailAlloc_2607_, 1, v_value_2597_);
lean_ctor_set(v_reuseFailAlloc_2607_, 2, v___x_2604_);
v___x_2606_ = v_reuseFailAlloc_2607_;
goto v_reusejp_2605_;
}
v_reusejp_2605_:
{
return v___x_2606_;
}
}
else
{
lean_del_object(v___x_2600_);
lean_dec(v_value_2597_);
lean_dec(v_key_2596_);
return v_tail_2598_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3___redArg___boxed(lean_object* v_a_2609_, lean_object* v_x_2610_){
_start:
{
uint32_t v_a_boxed_2611_; lean_object* v_res_2612_; 
v_a_boxed_2611_ = lean_unbox_uint32(v_a_2609_);
lean_dec(v_a_2609_);
v_res_2612_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3___redArg(v_a_boxed_2611_, v_x_2610_);
return v_res_2612_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1___redArg(lean_object* v_m_2613_, uint32_t v_a_2614_){
_start:
{
lean_object* v_size_2615_; lean_object* v_buckets_2616_; lean_object* v___x_2617_; uint64_t v___x_2618_; uint64_t v___x_2619_; uint64_t v___x_2620_; uint64_t v_fold_2621_; uint64_t v___x_2622_; uint64_t v___x_2623_; uint64_t v___x_2624_; size_t v___x_2625_; size_t v___x_2626_; size_t v___x_2627_; size_t v___x_2628_; size_t v___x_2629_; lean_object* v_bkt_2630_; uint8_t v___x_2631_; 
v_size_2615_ = lean_ctor_get(v_m_2613_, 0);
v_buckets_2616_ = lean_ctor_get(v_m_2613_, 1);
v___x_2617_ = lean_array_get_size(v_buckets_2616_);
v___x_2618_ = lean_uint32_to_uint64(v_a_2614_);
v___x_2619_ = 32ULL;
v___x_2620_ = lean_uint64_shift_right(v___x_2618_, v___x_2619_);
v_fold_2621_ = lean_uint64_xor(v___x_2618_, v___x_2620_);
v___x_2622_ = 16ULL;
v___x_2623_ = lean_uint64_shift_right(v_fold_2621_, v___x_2622_);
v___x_2624_ = lean_uint64_xor(v_fold_2621_, v___x_2623_);
v___x_2625_ = lean_uint64_to_usize(v___x_2624_);
v___x_2626_ = lean_usize_of_nat(v___x_2617_);
v___x_2627_ = ((size_t)1ULL);
v___x_2628_ = lean_usize_sub(v___x_2626_, v___x_2627_);
v___x_2629_ = lean_usize_land(v___x_2625_, v___x_2628_);
v_bkt_2630_ = lean_array_uget_borrowed(v_buckets_2616_, v___x_2629_);
v___x_2631_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2___redArg(v_a_2614_, v_bkt_2630_);
if (v___x_2631_ == 0)
{
return v_m_2613_;
}
else
{
lean_object* v___x_2633_; uint8_t v_isShared_2634_; uint8_t v_isSharedCheck_2644_; 
lean_inc(v_bkt_2630_);
lean_inc_ref(v_buckets_2616_);
lean_inc(v_size_2615_);
v_isSharedCheck_2644_ = !lean_is_exclusive(v_m_2613_);
if (v_isSharedCheck_2644_ == 0)
{
lean_object* v_unused_2645_; lean_object* v_unused_2646_; 
v_unused_2645_ = lean_ctor_get(v_m_2613_, 1);
lean_dec(v_unused_2645_);
v_unused_2646_ = lean_ctor_get(v_m_2613_, 0);
lean_dec(v_unused_2646_);
v___x_2633_ = v_m_2613_;
v_isShared_2634_ = v_isSharedCheck_2644_;
goto v_resetjp_2632_;
}
else
{
lean_dec(v_m_2613_);
v___x_2633_ = lean_box(0);
v_isShared_2634_ = v_isSharedCheck_2644_;
goto v_resetjp_2632_;
}
v_resetjp_2632_:
{
lean_object* v___x_2635_; lean_object* v_buckets_x27_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2642_; 
v___x_2635_ = lean_box(0);
v_buckets_x27_2636_ = lean_array_uset(v_buckets_2616_, v___x_2629_, v___x_2635_);
v___x_2637_ = lean_unsigned_to_nat(1u);
v___x_2638_ = lean_nat_sub(v_size_2615_, v___x_2637_);
lean_dec(v_size_2615_);
v___x_2639_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3___redArg(v_a_2614_, v_bkt_2630_);
v___x_2640_ = lean_array_uset(v_buckets_x27_2636_, v___x_2629_, v___x_2639_);
if (v_isShared_2634_ == 0)
{
lean_ctor_set(v___x_2633_, 1, v___x_2640_);
lean_ctor_set(v___x_2633_, 0, v___x_2638_);
v___x_2642_ = v___x_2633_;
goto v_reusejp_2641_;
}
else
{
lean_object* v_reuseFailAlloc_2643_; 
v_reuseFailAlloc_2643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2643_, 0, v___x_2638_);
lean_ctor_set(v_reuseFailAlloc_2643_, 1, v___x_2640_);
v___x_2642_ = v_reuseFailAlloc_2643_;
goto v_reusejp_2641_;
}
v_reusejp_2641_:
{
return v___x_2642_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1___redArg___boxed(lean_object* v_m_2647_, lean_object* v_a_2648_){
_start:
{
uint32_t v_a_boxed_2649_; lean_object* v_res_2650_; 
v_a_boxed_2649_ = lean_unbox_uint32(v_a_2648_);
lean_dec(v_a_2648_);
v_res_2650_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1___redArg(v_m_2647_, v_a_boxed_2649_);
return v_res_2650_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0___redArg(uint32_t v_a_2651_, lean_object* v_x_2652_){
_start:
{
if (lean_obj_tag(v_x_2652_) == 0)
{
lean_object* v___x_2653_; 
v___x_2653_ = lean_box(0);
return v___x_2653_;
}
else
{
lean_object* v_key_2654_; lean_object* v_value_2655_; lean_object* v_tail_2656_; uint32_t v___x_2657_; uint8_t v___x_2658_; 
v_key_2654_ = lean_ctor_get(v_x_2652_, 0);
v_value_2655_ = lean_ctor_get(v_x_2652_, 1);
v_tail_2656_ = lean_ctor_get(v_x_2652_, 2);
v___x_2657_ = lean_unbox_uint32(v_key_2654_);
v___x_2658_ = lean_uint32_dec_eq(v___x_2657_, v_a_2651_);
if (v___x_2658_ == 0)
{
v_x_2652_ = v_tail_2656_;
goto _start;
}
else
{
lean_object* v___x_2660_; 
lean_inc(v_value_2655_);
v___x_2660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2660_, 0, v_value_2655_);
return v___x_2660_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0___redArg___boxed(lean_object* v_a_2661_, lean_object* v_x_2662_){
_start:
{
uint32_t v_a_boxed_2663_; lean_object* v_res_2664_; 
v_a_boxed_2663_ = lean_unbox_uint32(v_a_2661_);
lean_dec(v_a_2661_);
v_res_2664_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0___redArg(v_a_boxed_2663_, v_x_2662_);
lean_dec(v_x_2662_);
return v_res_2664_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0___redArg(lean_object* v_m_2665_, uint32_t v_a_2666_){
_start:
{
lean_object* v_buckets_2667_; lean_object* v___x_2668_; uint64_t v___x_2669_; uint64_t v___x_2670_; uint64_t v___x_2671_; uint64_t v_fold_2672_; uint64_t v___x_2673_; uint64_t v___x_2674_; uint64_t v___x_2675_; size_t v___x_2676_; size_t v___x_2677_; size_t v___x_2678_; size_t v___x_2679_; size_t v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; 
v_buckets_2667_ = lean_ctor_get(v_m_2665_, 1);
v___x_2668_ = lean_array_get_size(v_buckets_2667_);
v___x_2669_ = lean_uint32_to_uint64(v_a_2666_);
v___x_2670_ = 32ULL;
v___x_2671_ = lean_uint64_shift_right(v___x_2669_, v___x_2670_);
v_fold_2672_ = lean_uint64_xor(v___x_2669_, v___x_2671_);
v___x_2673_ = 16ULL;
v___x_2674_ = lean_uint64_shift_right(v_fold_2672_, v___x_2673_);
v___x_2675_ = lean_uint64_xor(v_fold_2672_, v___x_2674_);
v___x_2676_ = lean_uint64_to_usize(v___x_2675_);
v___x_2677_ = lean_usize_of_nat(v___x_2668_);
v___x_2678_ = ((size_t)1ULL);
v___x_2679_ = lean_usize_sub(v___x_2677_, v___x_2678_);
v___x_2680_ = lean_usize_land(v___x_2676_, v___x_2679_);
v___x_2681_ = lean_array_uget_borrowed(v_buckets_2667_, v___x_2680_);
v___x_2682_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0___redArg(v_a_2666_, v___x_2681_);
return v___x_2682_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0___redArg___boxed(lean_object* v_m_2683_, lean_object* v_a_2684_){
_start:
{
uint32_t v_a_boxed_2685_; lean_object* v_res_2686_; 
v_a_boxed_2685_ = lean_unbox_uint32(v_a_2684_);
lean_dec(v_a_2684_);
v_res_2686_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0___redArg(v_m_2683_, v_a_boxed_2685_);
lean_dec_ref(v_m_2683_);
return v_res_2686_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_dispatch(uint8_t v_kind_2692_, uint32_t v_fn_2693_, uint64_t v_call_2694_, lean_object* v_bytes_2695_){
_start:
{
uint8_t v___x_2697_; uint8_t v___x_2698_; 
v___x_2697_ = 3;
v___x_2698_ = lean_uint8_dec_eq(v_kind_2692_, v___x_2697_);
if (v___x_2698_ == 0)
{
lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v_asyncFns_2701_; lean_object* v___x_2702_; 
v___x_2699_ = l___private_Lasm_JS_Core_0__Lasm_JS_registry;
v___x_2700_ = lean_st_ref_get(v___x_2699_);
v_asyncFns_2701_ = lean_ctor_get(v___x_2700_, 0);
lean_inc_ref(v_asyncFns_2701_);
lean_dec(v___x_2700_);
v___x_2702_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0___redArg(v_asyncFns_2701_, v_fn_2693_);
lean_dec_ref(v_asyncFns_2701_);
if (lean_obj_tag(v___x_2702_) == 0)
{
lean_object* v___x_2703_; lean_object* v___x_2704_; 
lean_dec_ref(v_bytes_2695_);
v___x_2703_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_dispatch___closed__2));
v___x_2704_ = l___private_Lasm_JS_Core_0__Lasm_JS_reply(v_call_2694_, v___x_2703_);
return v___x_2704_;
}
else
{
lean_object* v_val_2705_; lean_object* v___x_2707_; uint8_t v_isShared_2708_; uint8_t v_isSharedCheck_2717_; 
v_val_2705_ = lean_ctor_get(v___x_2702_, 0);
v_isSharedCheck_2717_ = !lean_is_exclusive(v___x_2702_);
if (v_isSharedCheck_2717_ == 0)
{
v___x_2707_ = v___x_2702_;
v_isShared_2708_ = v_isSharedCheck_2717_;
goto v_resetjp_2706_;
}
else
{
lean_inc(v_val_2705_);
lean_dec(v___x_2702_);
v___x_2707_ = lean_box(0);
v_isShared_2708_ = v_isSharedCheck_2717_;
goto v_resetjp_2706_;
}
v_resetjp_2706_:
{
lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2715_; 
v___x_2709_ = lean_box_uint64(v_call_2694_);
v___x_2710_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_runCall___boxed), 4, 3);
lean_closure_set(v___x_2710_, 0, v___x_2709_);
lean_closure_set(v___x_2710_, 1, v_val_2705_);
lean_closure_set(v___x_2710_, 2, v_bytes_2695_);
v___x_2711_ = lean_unsigned_to_nat(0u);
v___x_2712_ = lean_box(0);
v___x_2713_ = lean_io_as_task(v___x_2710_, v___x_2711_);
lean_dec_ref(v___x_2713_);
if (v_isShared_2708_ == 0)
{
lean_ctor_set_tag(v___x_2707_, 0);
lean_ctor_set(v___x_2707_, 0, v___x_2712_);
v___x_2715_ = v___x_2707_;
goto v_reusejp_2714_;
}
else
{
lean_object* v_reuseFailAlloc_2716_; 
v_reuseFailAlloc_2716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2716_, 0, v___x_2712_);
v___x_2715_ = v_reuseFailAlloc_2716_;
goto v_reusejp_2714_;
}
v_reusejp_2714_:
{
return v___x_2715_;
}
}
}
}
else
{
lean_object* v___x_2718_; lean_object* v___x_2719_; uint32_t v_next_2720_; lean_object* v_asyncFns_2721_; lean_object* v_syncFns_2722_; lean_object* v___x_2724_; uint8_t v_isShared_2725_; uint8_t v_isSharedCheck_2733_; 
lean_dec_ref(v_bytes_2695_);
v___x_2718_ = l___private_Lasm_JS_Core_0__Lasm_JS_registry;
v___x_2719_ = lean_st_ref_take(v___x_2718_);
v_next_2720_ = lean_ctor_get_uint32(v___x_2719_, sizeof(void*)*2);
v_asyncFns_2721_ = lean_ctor_get(v___x_2719_, 0);
v_syncFns_2722_ = lean_ctor_get(v___x_2719_, 1);
v_isSharedCheck_2733_ = !lean_is_exclusive(v___x_2719_);
if (v_isSharedCheck_2733_ == 0)
{
v___x_2724_ = v___x_2719_;
v_isShared_2725_ = v_isSharedCheck_2733_;
goto v_resetjp_2723_;
}
else
{
lean_inc(v_syncFns_2722_);
lean_inc(v_asyncFns_2721_);
lean_dec(v___x_2719_);
v___x_2724_ = lean_box(0);
v_isShared_2725_ = v_isSharedCheck_2733_;
goto v_resetjp_2723_;
}
v_resetjp_2723_:
{
lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2729_; 
v___x_2726_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1___redArg(v_asyncFns_2721_, v_fn_2693_);
v___x_2727_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1___redArg(v_syncFns_2722_, v_fn_2693_);
if (v_isShared_2725_ == 0)
{
lean_ctor_set(v___x_2724_, 1, v___x_2727_);
lean_ctor_set(v___x_2724_, 0, v___x_2726_);
v___x_2729_ = v___x_2724_;
goto v_reusejp_2728_;
}
else
{
lean_object* v_reuseFailAlloc_2732_; 
v_reuseFailAlloc_2732_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v_reuseFailAlloc_2732_, 0, v___x_2726_);
lean_ctor_set(v_reuseFailAlloc_2732_, 1, v___x_2727_);
lean_ctor_set_uint32(v_reuseFailAlloc_2732_, sizeof(void*)*2, v_next_2720_);
v___x_2729_ = v_reuseFailAlloc_2732_;
goto v_reusejp_2728_;
}
v_reusejp_2728_:
{
lean_object* v___x_2730_; lean_object* v___x_2731_; 
v___x_2730_ = lean_st_ref_put(v___x_2718_, v___x_2729_);
v___x_2731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2731_, 0, v___x_2730_);
return v___x_2731_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_dispatch___boxed(lean_object* v_kind_2734_, lean_object* v_fn_2735_, lean_object* v_call_2736_, lean_object* v_bytes_2737_, lean_object* v_a_2738_){
_start:
{
uint8_t v_kind_boxed_2739_; uint32_t v_fn_boxed_2740_; uint64_t v_call_boxed_2741_; lean_object* v_res_2742_; 
v_kind_boxed_2739_ = lean_unbox(v_kind_2734_);
v_fn_boxed_2740_ = lean_unbox_uint32(v_fn_2735_);
lean_dec(v_fn_2735_);
v_call_boxed_2741_ = lean_unbox_uint64(v_call_2736_);
lean_dec_ref(v_call_2736_);
v_res_2742_ = l___private_Lasm_JS_Core_0__Lasm_JS_dispatch(v_kind_boxed_2739_, v_fn_boxed_2740_, v_call_boxed_2741_, v_bytes_2737_);
return v_res_2742_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0(lean_object* v_00_u03b2_2743_, lean_object* v_m_2744_, uint32_t v_a_2745_){
_start:
{
lean_object* v___x_2746_; 
v___x_2746_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0___redArg(v_m_2744_, v_a_2745_);
return v___x_2746_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0___boxed(lean_object* v_00_u03b2_2747_, lean_object* v_m_2748_, lean_object* v_a_2749_){
_start:
{
uint32_t v_a_boxed_2750_; lean_object* v_res_2751_; 
v_a_boxed_2750_ = lean_unbox_uint32(v_a_2749_);
lean_dec(v_a_2749_);
v_res_2751_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0(v_00_u03b2_2747_, v_m_2748_, v_a_boxed_2750_);
lean_dec_ref(v_m_2748_);
return v_res_2751_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1(lean_object* v_00_u03b2_2752_, lean_object* v_m_2753_, uint32_t v_a_2754_){
_start:
{
lean_object* v___x_2755_; 
v___x_2755_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1___redArg(v_m_2753_, v_a_2754_);
return v___x_2755_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1___boxed(lean_object* v_00_u03b2_2756_, lean_object* v_m_2757_, lean_object* v_a_2758_){
_start:
{
uint32_t v_a_boxed_2759_; lean_object* v_res_2760_; 
v_a_boxed_2759_ = lean_unbox_uint32(v_a_2758_);
lean_dec(v_a_2758_);
v_res_2760_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1(v_00_u03b2_2756_, v_m_2757_, v_a_boxed_2759_);
return v_res_2760_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0(lean_object* v_00_u03b2_2761_, uint32_t v_a_2762_, lean_object* v_x_2763_){
_start:
{
lean_object* v___x_2764_; 
v___x_2764_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0___redArg(v_a_2762_, v_x_2763_);
return v___x_2764_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2765_, lean_object* v_a_2766_, lean_object* v_x_2767_){
_start:
{
uint32_t v_a_boxed_2768_; lean_object* v_res_2769_; 
v_a_boxed_2768_ = lean_unbox_uint32(v_a_2766_);
lean_dec(v_a_2766_);
v_res_2769_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0(v_00_u03b2_2765_, v_a_boxed_2768_, v_x_2767_);
lean_dec(v_x_2767_);
return v_res_2769_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2(lean_object* v_00_u03b2_2770_, uint32_t v_a_2771_, lean_object* v_x_2772_){
_start:
{
uint8_t v___x_2773_; 
v___x_2773_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2___redArg(v_a_2771_, v_x_2772_);
return v___x_2773_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2774_, lean_object* v_a_2775_, lean_object* v_x_2776_){
_start:
{
uint32_t v_a_boxed_2777_; uint8_t v_res_2778_; lean_object* v_r_2779_; 
v_a_boxed_2777_ = lean_unbox_uint32(v_a_2775_);
lean_dec(v_a_2775_);
v_res_2778_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2(v_00_u03b2_2774_, v_a_boxed_2777_, v_x_2776_);
lean_dec(v_x_2776_);
v_r_2779_ = lean_box(v_res_2778_);
return v_r_2779_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3(lean_object* v_00_u03b2_2780_, uint32_t v_a_2781_, lean_object* v_x_2782_){
_start:
{
lean_object* v___x_2783_; 
v___x_2783_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3___redArg(v_a_2781_, v_x_2782_);
return v___x_2783_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3___boxed(lean_object* v_00_u03b2_2784_, lean_object* v_a_2785_, lean_object* v_x_2786_){
_start:
{
uint32_t v_a_boxed_2787_; lean_object* v_res_2788_; 
v_a_boxed_2787_ = lean_unbox_uint32(v_a_2785_);
lean_dec(v_a_2785_);
v_res_2788_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3(v_00_u03b2_2784_, v_a_boxed_2787_, v_x_2786_);
return v_res_2788_;
}
}
static lean_object* _init_l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__1(void){
_start:
{
lean_object* v___x_2795_; lean_object* v___x_2796_; 
v___x_2795_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__0));
v___x_2796_ = lean_byte_array_size(v___x_2795_);
return v___x_2796_;
}
}
static lean_object* _init_l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__3(void){
_start:
{
lean_object* v___x_2803_; lean_object* v___x_2804_; 
v___x_2803_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__2));
v___x_2804_ = lean_byte_array_size(v___x_2803_);
return v___x_2804_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch(uint32_t v_fn_2805_, lean_object* v_bytes_2806_){
_start:
{
lean_object* v_a_2809_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v_syncFns_2823_; lean_object* v___x_2824_; 
v___x_2821_ = l___private_Lasm_JS_Core_0__Lasm_JS_registry;
v___x_2822_ = lean_st_ref_get(v___x_2821_);
v_syncFns_2823_ = lean_ctor_get(v___x_2822_, 1);
lean_inc_ref(v_syncFns_2823_);
lean_dec(v___x_2822_);
v___x_2824_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0___redArg(v_syncFns_2823_, v_fn_2805_);
lean_dec_ref(v_syncFns_2823_);
if (lean_obj_tag(v___x_2824_) == 1)
{
lean_object* v_val_2825_; lean_object* v___x_2826_; 
v_val_2825_ = lean_ctor_get(v___x_2824_, 0);
lean_inc(v_val_2825_);
lean_dec_ref_known(v___x_2824_, 1);
v___x_2826_ = l___private_Lasm_JS_Core_0__Lasm_JS_argsOf(v_bytes_2806_);
if (lean_obj_tag(v___x_2826_) == 0)
{
lean_object* v_a_2827_; lean_object* v___x_2828_; 
v_a_2827_ = lean_ctor_get(v___x_2826_, 0);
lean_inc(v_a_2827_);
lean_dec_ref_known(v___x_2826_, 1);
v___x_2828_ = lean_apply_2(v_val_2825_, v_a_2827_, lean_box(0));
if (lean_obj_tag(v___x_2828_) == 0)
{
lean_object* v_a_2829_; lean_object* v___x_2831_; uint8_t v_isShared_2832_; uint8_t v_isSharedCheck_2844_; 
v_a_2829_ = lean_ctor_get(v___x_2828_, 0);
v_isSharedCheck_2844_ = !lean_is_exclusive(v___x_2828_);
if (v_isSharedCheck_2844_ == 0)
{
v___x_2831_ = v___x_2828_;
v_isShared_2832_ = v_isSharedCheck_2844_;
goto v_resetjp_2830_;
}
else
{
lean_inc(v_a_2829_);
lean_dec(v___x_2828_);
v___x_2831_ = lean_box(0);
v_isShared_2832_ = v_isSharedCheck_2844_;
goto v_resetjp_2830_;
}
v_resetjp_2830_:
{
lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; uint8_t v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2842_; 
v___x_2833_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__2));
v___x_2834_ = l_Lasm_JS_Wire_encode(v_a_2829_);
v___x_2835_ = lean_unsigned_to_nat(0u);
v___x_2836_ = lean_obj_once(&l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__3, &l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__3_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__3);
v___x_2837_ = lean_byte_array_size(v___x_2834_);
v___x_2838_ = 0;
v___x_2839_ = lean_byte_array_copy_slice(v___x_2834_, v___x_2835_, v___x_2833_, v___x_2836_, v___x_2837_, v___x_2838_);
lean_dec_ref(v___x_2834_);
v___x_2840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2840_, 0, v___x_2839_);
lean_ctor_set(v___x_2840_, 1, v_a_2829_);
if (v_isShared_2832_ == 0)
{
lean_ctor_set(v___x_2831_, 0, v___x_2840_);
v___x_2842_ = v___x_2831_;
goto v_reusejp_2841_;
}
else
{
lean_object* v_reuseFailAlloc_2843_; 
v_reuseFailAlloc_2843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2843_, 0, v___x_2840_);
v___x_2842_ = v_reuseFailAlloc_2843_;
goto v_reusejp_2841_;
}
v_reusejp_2841_:
{
return v___x_2842_;
}
}
}
else
{
lean_object* v_a_2845_; 
v_a_2845_ = lean_ctor_get(v___x_2828_, 0);
lean_inc(v_a_2845_);
lean_dec_ref_known(v___x_2828_, 1);
v_a_2809_ = v_a_2845_;
goto v___jp_2808_;
}
}
else
{
lean_object* v_a_2846_; 
lean_dec(v_val_2825_);
v_a_2846_ = lean_ctor_get(v___x_2826_, 0);
lean_inc(v_a_2846_);
lean_dec_ref_known(v___x_2826_, 1);
v_a_2809_ = v_a_2846_;
goto v___jp_2808_;
}
}
else
{
lean_object* v___x_2847_; 
lean_dec(v___x_2824_);
v___x_2847_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_dispatch___closed__1));
v_a_2809_ = v___x_2847_;
goto v___jp_2808_;
}
v___jp_2808_:
{
lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; uint8_t v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; 
v___x_2810_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__0));
v___x_2811_ = lean_io_error_to_string(v_a_2809_);
v___x_2812_ = lean_string_to_utf8(v___x_2811_);
lean_dec_ref(v___x_2811_);
v___x_2813_ = lean_unsigned_to_nat(0u);
v___x_2814_ = lean_obj_once(&l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__1, &l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__1_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__1);
v___x_2815_ = lean_byte_array_size(v___x_2812_);
v___x_2816_ = 0;
v___x_2817_ = lean_byte_array_copy_slice(v___x_2812_, v___x_2813_, v___x_2810_, v___x_2814_, v___x_2815_, v___x_2816_);
lean_dec_ref(v___x_2812_);
v___x_2818_ = lean_box(0);
v___x_2819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2819_, 0, v___x_2817_);
lean_ctor_set(v___x_2819_, 1, v___x_2818_);
v___x_2820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2820_, 0, v___x_2819_);
return v___x_2820_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___boxed(lean_object* v_fn_2848_, lean_object* v_bytes_2849_, lean_object* v_a_2850_){
_start:
{
uint32_t v_fn_boxed_2851_; lean_object* v_res_2852_; 
v_fn_boxed_2851_ = lean_unbox_uint32(v_fn_2848_);
lean_dec(v_fn_2848_);
v_res_2852_ = l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch(v_fn_boxed_2851_, v_bytes_2849_);
lean_dec_ref(v_bytes_2849_);
return v_res_2852_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted(){
_start:
{
lean_object* v___x_2855_; lean_object* v___x_2856_; 
v___x_2855_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted___closed__0));
v___x_2856_ = lasm_js_start(v___x_2855_);
return v___x_2856_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted___boxed(lean_object* v_a_2857_){
_start:
{
lean_object* v_res_2858_; 
v_res_2858_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
return v_res_2858_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTAsync___redArg___lam__0(lean_object* v_inst_2859_, lean_object* v_00_u03b1_2860_, lean_object* v_x_2861_, lean_object* v_a_2862_){
_start:
{
lean_object* v___x_2863_; 
v___x_2863_ = lean_apply_2(v_inst_2859_, lean_box(0), v_a_2862_);
return v___x_2863_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTAsync___redArg___lam__0___boxed(lean_object* v_inst_2864_, lean_object* v_00_u03b1_2865_, lean_object* v_x_2866_, lean_object* v_a_2867_){
_start:
{
lean_object* v_res_2868_; 
v_res_2868_ = l_Lasm_JS_instMonadJSOfMonadLiftTAsync___redArg___lam__0(v_inst_2864_, v_00_u03b1_2865_, v_x_2866_, v_a_2867_);
lean_dec_ref(v_x_2866_);
return v_res_2868_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTAsync___redArg(lean_object* v_inst_2869_){
_start:
{
lean_object* v___f_2870_; 
v___f_2870_ = lean_alloc_closure((void*)(l_Lasm_JS_instMonadJSOfMonadLiftTAsync___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_2870_, 0, v_inst_2869_);
return v___f_2870_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTAsync(lean_object* v_m_2871_, lean_object* v_inst_2872_){
_start:
{
lean_object* v___f_2873_; 
v___f_2873_ = lean_alloc_closure((void*)(l_Lasm_JS_instMonadJSOfMonadLiftTAsync___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_2873_, 0, v_inst_2872_);
return v___f_2873_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTIO___redArg___lam__0(lean_object* v_inst_2874_, lean_object* v_00_u03b1_2875_, lean_object* v_b_2876_, lean_object* v_x_2877_){
_start:
{
lean_object* v___x_2878_; 
v___x_2878_ = lean_apply_2(v_inst_2874_, lean_box(0), v_b_2876_);
return v___x_2878_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTIO___redArg___lam__0___boxed(lean_object* v_inst_2879_, lean_object* v_00_u03b1_2880_, lean_object* v_b_2881_, lean_object* v_x_2882_){
_start:
{
lean_object* v_res_2883_; 
v_res_2883_ = l_Lasm_JS_instMonadJSOfMonadLiftTIO___redArg___lam__0(v_inst_2879_, v_00_u03b1_2880_, v_b_2881_, v_x_2882_);
lean_dec_ref(v_x_2882_);
return v_res_2883_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTIO___redArg(lean_object* v_inst_2884_){
_start:
{
lean_object* v___f_2885_; 
v___f_2885_ = lean_alloc_closure((void*)(l_Lasm_JS_instMonadJSOfMonadLiftTIO___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_2885_, 0, v_inst_2884_);
return v___f_2885_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTIO(lean_object* v_m_2886_, lean_object* v_inst_2887_){
_start:
{
lean_object* v___f_2888_; 
v___f_2888_ = lean_alloc_closure((void*)(l_Lasm_JS_instMonadJSOfMonadLiftTIO___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_2888_, 0, v_inst_2887_);
return v___f_2888_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes___lam__0(lean_object* v_x_2894_){
_start:
{
if (lean_obj_tag(v_x_2894_) == 0)
{
lean_object* v___x_2895_; 
v___x_2895_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes___lam__0___closed__2));
return v___x_2895_;
}
else
{
lean_object* v_val_2896_; lean_object* v___x_2898_; uint8_t v_isShared_2899_; uint8_t v_isSharedCheck_2919_; 
v_val_2896_ = lean_ctor_get(v_x_2894_, 0);
v_isSharedCheck_2919_ = !lean_is_exclusive(v_x_2894_);
if (v_isSharedCheck_2919_ == 0)
{
v___x_2898_ = v_x_2894_;
v_isShared_2899_ = v_isSharedCheck_2919_;
goto v_resetjp_2897_;
}
else
{
lean_inc(v_val_2896_);
lean_dec(v_x_2894_);
v___x_2898_ = lean_box(0);
v_isShared_2899_ = v_isSharedCheck_2919_;
goto v_resetjp_2897_;
}
v_resetjp_2897_:
{
if (lean_obj_tag(v_val_2896_) == 0)
{
lean_object* v_a_2900_; lean_object* v___x_2902_; uint8_t v_isShared_2903_; uint8_t v_isSharedCheck_2910_; 
v_a_2900_ = lean_ctor_get(v_val_2896_, 0);
v_isSharedCheck_2910_ = !lean_is_exclusive(v_val_2896_);
if (v_isSharedCheck_2910_ == 0)
{
v___x_2902_ = v_val_2896_;
v_isShared_2903_ = v_isSharedCheck_2910_;
goto v_resetjp_2901_;
}
else
{
lean_inc(v_a_2900_);
lean_dec(v_val_2896_);
v___x_2902_ = lean_box(0);
v_isShared_2903_ = v_isSharedCheck_2910_;
goto v_resetjp_2901_;
}
v_resetjp_2901_:
{
lean_object* v___x_2905_; 
if (v_isShared_2899_ == 0)
{
lean_ctor_set_tag(v___x_2898_, 18);
lean_ctor_set(v___x_2898_, 0, v_a_2900_);
v___x_2905_ = v___x_2898_;
goto v_reusejp_2904_;
}
else
{
lean_object* v_reuseFailAlloc_2909_; 
v_reuseFailAlloc_2909_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2909_, 0, v_a_2900_);
v___x_2905_ = v_reuseFailAlloc_2909_;
goto v_reusejp_2904_;
}
v_reusejp_2904_:
{
lean_object* v___x_2907_; 
if (v_isShared_2903_ == 0)
{
lean_ctor_set(v___x_2902_, 0, v___x_2905_);
v___x_2907_ = v___x_2902_;
goto v_reusejp_2906_;
}
else
{
lean_object* v_reuseFailAlloc_2908_; 
v_reuseFailAlloc_2908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2908_, 0, v___x_2905_);
v___x_2907_ = v_reuseFailAlloc_2908_;
goto v_reusejp_2906_;
}
v_reusejp_2906_:
{
return v___x_2907_;
}
}
}
}
else
{
lean_object* v_a_2911_; lean_object* v___x_2913_; uint8_t v_isShared_2914_; uint8_t v_isSharedCheck_2918_; 
lean_del_object(v___x_2898_);
v_a_2911_ = lean_ctor_get(v_val_2896_, 0);
v_isSharedCheck_2918_ = !lean_is_exclusive(v_val_2896_);
if (v_isSharedCheck_2918_ == 0)
{
v___x_2913_ = v_val_2896_;
v_isShared_2914_ = v_isSharedCheck_2918_;
goto v_resetjp_2912_;
}
else
{
lean_inc(v_a_2911_);
lean_dec(v_val_2896_);
v___x_2913_ = lean_box(0);
v_isShared_2914_ = v_isSharedCheck_2918_;
goto v_resetjp_2912_;
}
v_resetjp_2912_:
{
lean_object* v___x_2916_; 
if (v_isShared_2914_ == 0)
{
v___x_2916_ = v___x_2913_;
goto v_reusejp_2915_;
}
else
{
lean_object* v_reuseFailAlloc_2917_; 
v_reuseFailAlloc_2917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2917_, 0, v_a_2911_);
v___x_2916_ = v_reuseFailAlloc_2917_;
goto v_reusejp_2915_;
}
v_reusejp_2915_:
{
return v___x_2916_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object* v_p_2921_){
_start:
{
lean_object* v___f_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; uint8_t v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; 
v___f_2923_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes___closed__0));
v___x_2924_ = lean_io_promise_result_opt(v_p_2921_);
v___x_2925_ = lean_unsigned_to_nat(0u);
v___x_2926_ = 1;
v___x_2927_ = lean_task_map(v___f_2923_, v___x_2924_, v___x_2925_, v___x_2926_);
v___x_2928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2928_, 0, v___x_2927_);
return v___x_2928_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes___boxed(lean_object* v_p_2929_, lean_object* v_a_2930_){
_start:
{
lean_object* v_res_2931_; 
v_res_2931_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_p_2929_);
lean_dec(v_p_2929_);
return v_res_2931_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__0(lean_object* v_failurePrefix_2932_, lean_object* v_x_2933_){
_start:
{
if (lean_obj_tag(v_x_2933_) == 0)
{
lean_object* v_a_2935_; lean_object* v___x_2937_; uint8_t v_isShared_2938_; uint8_t v_isSharedCheck_2946_; 
v_a_2935_ = lean_ctor_get(v_x_2933_, 0);
v_isSharedCheck_2946_ = !lean_is_exclusive(v_x_2933_);
if (v_isSharedCheck_2946_ == 0)
{
v___x_2937_ = v_x_2933_;
v_isShared_2938_ = v_isSharedCheck_2946_;
goto v_resetjp_2936_;
}
else
{
lean_inc(v_a_2935_);
lean_dec(v_x_2933_);
v___x_2937_ = lean_box(0);
v_isShared_2938_ = v_isSharedCheck_2946_;
goto v_resetjp_2936_;
}
v_resetjp_2936_:
{
lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2943_; 
v___x_2939_ = lean_io_error_to_string(v_a_2935_);
v___x_2940_ = lean_string_append(v_failurePrefix_2932_, v___x_2939_);
lean_dec_ref(v___x_2939_);
v___x_2941_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2941_, 0, v___x_2940_);
if (v_isShared_2938_ == 0)
{
lean_ctor_set(v___x_2937_, 0, v___x_2941_);
v___x_2943_ = v___x_2937_;
goto v_reusejp_2942_;
}
else
{
lean_object* v_reuseFailAlloc_2945_; 
v_reuseFailAlloc_2945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2945_, 0, v___x_2941_);
v___x_2943_ = v_reuseFailAlloc_2945_;
goto v_reusejp_2942_;
}
v_reusejp_2942_:
{
lean_object* v___x_2944_; 
v___x_2944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2944_, 0, v___x_2943_);
return v___x_2944_;
}
}
}
else
{
lean_object* v___x_2947_; 
lean_dec_ref(v_failurePrefix_2932_);
v___x_2947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2947_, 0, v_x_2933_);
return v___x_2947_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__0___boxed(lean_object* v_failurePrefix_2948_, lean_object* v_x_2949_, lean_object* v___y_2950_){
_start:
{
lean_object* v_res_2951_; 
v_res_2951_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__0(v_failurePrefix_2948_, v_x_2949_);
return v_res_2951_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__1(lean_object* v_inst_2952_, lean_object* v_context_2953_, lean_object* v_x_2954_){
_start:
{
lean_object* v_val_2957_; 
if (lean_obj_tag(v_x_2954_) == 0)
{
lean_object* v_a_2959_; lean_object* v___x_2961_; uint8_t v_isShared_2962_; uint8_t v_isSharedCheck_2967_; 
lean_dec_ref(v_inst_2952_);
v_a_2959_ = lean_ctor_get(v_x_2954_, 0);
v_isSharedCheck_2967_ = !lean_is_exclusive(v_x_2954_);
if (v_isSharedCheck_2967_ == 0)
{
v___x_2961_ = v_x_2954_;
v_isShared_2962_ = v_isSharedCheck_2967_;
goto v_resetjp_2960_;
}
else
{
lean_inc(v_a_2959_);
lean_dec(v_x_2954_);
v___x_2961_ = lean_box(0);
v_isShared_2962_ = v_isSharedCheck_2967_;
goto v_resetjp_2960_;
}
v_resetjp_2960_:
{
lean_object* v___x_2964_; 
if (v_isShared_2962_ == 0)
{
v___x_2964_ = v___x_2961_;
goto v_reusejp_2963_;
}
else
{
lean_object* v_reuseFailAlloc_2966_; 
v_reuseFailAlloc_2966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2966_, 0, v_a_2959_);
v___x_2964_ = v_reuseFailAlloc_2966_;
goto v_reusejp_2963_;
}
v_reusejp_2963_:
{
lean_object* v___x_2965_; 
v___x_2965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2965_, 0, v___x_2964_);
return v___x_2965_;
}
}
}
else
{
lean_object* v_a_2968_; lean_object* v___x_2970_; uint8_t v_isShared_2971_; uint8_t v_isSharedCheck_2981_; 
v_a_2968_ = lean_ctor_get(v_x_2954_, 0);
v_isSharedCheck_2981_ = !lean_is_exclusive(v_x_2954_);
if (v_isSharedCheck_2981_ == 0)
{
v___x_2970_ = v_x_2954_;
v_isShared_2971_ = v_isSharedCheck_2981_;
goto v_resetjp_2969_;
}
else
{
lean_inc(v_a_2968_);
lean_dec(v_x_2954_);
v___x_2970_ = lean_box(0);
v_isShared_2971_ = v_isSharedCheck_2981_;
goto v_resetjp_2969_;
}
v_resetjp_2969_:
{
lean_object* v___x_2972_; 
v___x_2972_ = l_Lasm_JS_decodeAs___redArg(v_inst_2952_, v_context_2953_, v_a_2968_);
if (lean_obj_tag(v___x_2972_) == 0)
{
lean_object* v_a_2973_; lean_object* v___x_2975_; 
v_a_2973_ = lean_ctor_get(v___x_2972_, 0);
lean_inc(v_a_2973_);
lean_dec_ref_known(v___x_2972_, 1);
if (v_isShared_2971_ == 0)
{
lean_ctor_set(v___x_2970_, 0, v_a_2973_);
v___x_2975_ = v___x_2970_;
goto v_reusejp_2974_;
}
else
{
lean_object* v_reuseFailAlloc_2976_; 
v_reuseFailAlloc_2976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2976_, 0, v_a_2973_);
v___x_2975_ = v_reuseFailAlloc_2976_;
goto v_reusejp_2974_;
}
v_reusejp_2974_:
{
v_val_2957_ = v___x_2975_;
goto v___jp_2956_;
}
}
else
{
lean_object* v_a_2977_; lean_object* v___x_2979_; 
v_a_2977_ = lean_ctor_get(v___x_2972_, 0);
lean_inc(v_a_2977_);
lean_dec_ref_known(v___x_2972_, 1);
if (v_isShared_2971_ == 0)
{
lean_ctor_set_tag(v___x_2970_, 0);
lean_ctor_set(v___x_2970_, 0, v_a_2977_);
v___x_2979_ = v___x_2970_;
goto v_reusejp_2978_;
}
else
{
lean_object* v_reuseFailAlloc_2980_; 
v_reuseFailAlloc_2980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2980_, 0, v_a_2977_);
v___x_2979_ = v_reuseFailAlloc_2980_;
goto v_reusejp_2978_;
}
v_reusejp_2978_:
{
v_val_2957_ = v___x_2979_;
goto v___jp_2956_;
}
}
}
}
v___jp_2956_:
{
lean_object* v___x_2958_; 
v___x_2958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2958_, 0, v_val_2957_);
return v___x_2958_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__1___boxed(lean_object* v_inst_2982_, lean_object* v_context_2983_, lean_object* v_x_2984_, lean_object* v___y_2985_){
_start:
{
lean_object* v_res_2986_; 
v_res_2986_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__1(v_inst_2982_, v_context_2983_, v_x_2984_);
lean_dec_ref(v_context_2983_);
return v_res_2986_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__2(lean_object* v___f_2987_, lean_object* v_bytes_2988_){
_start:
{
lean_object* v___x_2990_; uint8_t v___x_2991_; lean_object* v_val_2993_; lean_object* v___x_2996_; 
v___x_2990_ = lean_unsigned_to_nat(0u);
v___x_2991_ = 0;
v___x_2996_ = l_Lasm_JS_Wire_decode(v_bytes_2988_);
if (lean_obj_tag(v___x_2996_) == 0)
{
lean_object* v_a_2997_; lean_object* v___x_2999_; uint8_t v_isShared_3000_; uint8_t v_isSharedCheck_3004_; 
v_a_2997_ = lean_ctor_get(v___x_2996_, 0);
v_isSharedCheck_3004_ = !lean_is_exclusive(v___x_2996_);
if (v_isSharedCheck_3004_ == 0)
{
v___x_2999_ = v___x_2996_;
v_isShared_3000_ = v_isSharedCheck_3004_;
goto v_resetjp_2998_;
}
else
{
lean_inc(v_a_2997_);
lean_dec(v___x_2996_);
v___x_2999_ = lean_box(0);
v_isShared_3000_ = v_isSharedCheck_3004_;
goto v_resetjp_2998_;
}
v_resetjp_2998_:
{
lean_object* v___x_3002_; 
if (v_isShared_3000_ == 0)
{
lean_ctor_set_tag(v___x_2999_, 1);
v___x_3002_ = v___x_2999_;
goto v_reusejp_3001_;
}
else
{
lean_object* v_reuseFailAlloc_3003_; 
v_reuseFailAlloc_3003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3003_, 0, v_a_2997_);
v___x_3002_ = v_reuseFailAlloc_3003_;
goto v_reusejp_3001_;
}
v_reusejp_3001_:
{
v_val_2993_ = v___x_3002_;
goto v___jp_2992_;
}
}
}
else
{
lean_object* v_a_3005_; lean_object* v___x_3007_; uint8_t v_isShared_3008_; uint8_t v_isSharedCheck_3012_; 
v_a_3005_ = lean_ctor_get(v___x_2996_, 0);
v_isSharedCheck_3012_ = !lean_is_exclusive(v___x_2996_);
if (v_isSharedCheck_3012_ == 0)
{
v___x_3007_ = v___x_2996_;
v_isShared_3008_ = v_isSharedCheck_3012_;
goto v_resetjp_3006_;
}
else
{
lean_inc(v_a_3005_);
lean_dec(v___x_2996_);
v___x_3007_ = lean_box(0);
v_isShared_3008_ = v_isSharedCheck_3012_;
goto v_resetjp_3006_;
}
v_resetjp_3006_:
{
lean_object* v___x_3010_; 
if (v_isShared_3008_ == 0)
{
lean_ctor_set_tag(v___x_3007_, 0);
v___x_3010_ = v___x_3007_;
goto v_reusejp_3009_;
}
else
{
lean_object* v_reuseFailAlloc_3011_; 
v_reuseFailAlloc_3011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3011_, 0, v_a_3005_);
v___x_3010_ = v_reuseFailAlloc_3011_;
goto v_reusejp_3009_;
}
v_reusejp_3009_:
{
v_val_2993_ = v___x_3010_;
goto v___jp_2992_;
}
}
}
v___jp_2992_:
{
lean_object* v___x_2994_; lean_object* v___x_2995_; 
v___x_2994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2994_, 0, v_val_2993_);
v___x_2995_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2990_, v___x_2991_, v___x_2994_, v___f_2987_);
return v___x_2995_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__2___boxed(lean_object* v___f_3013_, lean_object* v_bytes_3014_, lean_object* v___y_3015_){
_start:
{
lean_object* v_res_3016_; 
v_res_3016_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__2(v___f_3013_, v_bytes_3014_);
lean_dec_ref(v_bytes_3014_);
return v_res_3016_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__3(lean_object* v___f_3017_, lean_object* v_x_3018_){
_start:
{
if (lean_obj_tag(v_x_3018_) == 0)
{
lean_object* v_a_3020_; lean_object* v___x_3022_; uint8_t v_isShared_3023_; uint8_t v_isSharedCheck_3028_; 
lean_dec_ref(v___f_3017_);
v_a_3020_ = lean_ctor_get(v_x_3018_, 0);
v_isSharedCheck_3028_ = !lean_is_exclusive(v_x_3018_);
if (v_isSharedCheck_3028_ == 0)
{
v___x_3022_ = v_x_3018_;
v_isShared_3023_ = v_isSharedCheck_3028_;
goto v_resetjp_3021_;
}
else
{
lean_inc(v_a_3020_);
lean_dec(v_x_3018_);
v___x_3022_ = lean_box(0);
v_isShared_3023_ = v_isSharedCheck_3028_;
goto v_resetjp_3021_;
}
v_resetjp_3021_:
{
lean_object* v___x_3025_; 
if (v_isShared_3023_ == 0)
{
v___x_3025_ = v___x_3022_;
goto v_reusejp_3024_;
}
else
{
lean_object* v_reuseFailAlloc_3027_; 
v_reuseFailAlloc_3027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3027_, 0, v_a_3020_);
v___x_3025_ = v_reuseFailAlloc_3027_;
goto v_reusejp_3024_;
}
v_reusejp_3024_:
{
lean_object* v___x_3026_; 
v___x_3026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3026_, 0, v___x_3025_);
return v___x_3026_;
}
}
}
else
{
lean_object* v_a_3029_; lean_object* v___x_3030_; 
v_a_3029_ = lean_ctor_get(v_x_3018_, 0);
lean_inc(v_a_3029_);
lean_dec_ref_known(v_x_3018_, 1);
v___x_3030_ = lean_apply_2(v___f_3017_, v_a_3029_, lean_box(0));
return v___x_3030_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__3___boxed(lean_object* v___f_3031_, lean_object* v_x_3032_, lean_object* v___y_3033_){
_start:
{
lean_object* v_res_3034_; 
v_res_3034_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__3(v___f_3031_, v_x_3032_);
return v_res_3034_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__5(lean_object* v_a_3035_, lean_object* v_x_3036_){
_start:
{
if (lean_obj_tag(v_x_3036_) == 0)
{
lean_object* v_a_3038_; lean_object* v___x_3040_; uint8_t v_isShared_3041_; uint8_t v_isSharedCheck_3046_; 
v_a_3038_ = lean_ctor_get(v_x_3036_, 0);
v_isSharedCheck_3046_ = !lean_is_exclusive(v_x_3036_);
if (v_isSharedCheck_3046_ == 0)
{
v___x_3040_ = v_x_3036_;
v_isShared_3041_ = v_isSharedCheck_3046_;
goto v_resetjp_3039_;
}
else
{
lean_inc(v_a_3038_);
lean_dec(v_x_3036_);
v___x_3040_ = lean_box(0);
v_isShared_3041_ = v_isSharedCheck_3046_;
goto v_resetjp_3039_;
}
v_resetjp_3039_:
{
lean_object* v___x_3043_; 
if (v_isShared_3041_ == 0)
{
v___x_3043_ = v___x_3040_;
goto v_reusejp_3042_;
}
else
{
lean_object* v_reuseFailAlloc_3045_; 
v_reuseFailAlloc_3045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3045_, 0, v_a_3038_);
v___x_3043_ = v_reuseFailAlloc_3045_;
goto v_reusejp_3042_;
}
v_reusejp_3042_:
{
lean_object* v___x_3044_; 
v___x_3044_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3044_, 0, v___x_3043_);
return v___x_3044_;
}
}
}
else
{
lean_object* v___x_3047_; 
lean_dec_ref_known(v_x_3036_, 1);
v___x_3047_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_3035_);
return v___x_3047_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__5___boxed(lean_object* v_a_3048_, lean_object* v_x_3049_, lean_object* v___y_3050_){
_start:
{
lean_object* v_res_3051_; 
v_res_3051_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__5(v_a_3048_, v_x_3049_);
lean_dec(v_a_3048_);
return v_res_3051_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__6(lean_object* v_payload_3052_, lean_object* v_failurePrefix_3053_, lean_object* v___f_3054_, lean_object* v___f_3055_, uint32_t v_op_3056_, uint64_t v_flags_3057_, lean_object* v___f_3058_, lean_object* v_x_3059_){
_start:
{
if (lean_obj_tag(v_x_3059_) == 0)
{
lean_object* v_a_3061_; lean_object* v___x_3063_; uint8_t v_isShared_3064_; uint8_t v_isSharedCheck_3069_; 
lean_dec_ref(v___f_3058_);
lean_dec_ref(v___f_3055_);
lean_dec_ref(v___f_3054_);
v_a_3061_ = lean_ctor_get(v_x_3059_, 0);
v_isSharedCheck_3069_ = !lean_is_exclusive(v_x_3059_);
if (v_isSharedCheck_3069_ == 0)
{
v___x_3063_ = v_x_3059_;
v_isShared_3064_ = v_isSharedCheck_3069_;
goto v_resetjp_3062_;
}
else
{
lean_inc(v_a_3061_);
lean_dec(v_x_3059_);
v___x_3063_ = lean_box(0);
v_isShared_3064_ = v_isSharedCheck_3069_;
goto v_resetjp_3062_;
}
v_resetjp_3062_:
{
lean_object* v___x_3066_; 
if (v_isShared_3064_ == 0)
{
v___x_3066_ = v___x_3063_;
goto v_reusejp_3065_;
}
else
{
lean_object* v_reuseFailAlloc_3068_; 
v_reuseFailAlloc_3068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3068_, 0, v_a_3061_);
v___x_3066_ = v_reuseFailAlloc_3068_;
goto v_reusejp_3065_;
}
v_reusejp_3065_:
{
lean_object* v___x_3067_; 
v___x_3067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3067_, 0, v___x_3066_);
return v___x_3067_;
}
}
}
else
{
lean_object* v_a_3070_; lean_object* v___x_3072_; uint8_t v_isShared_3073_; uint8_t v_isSharedCheck_3111_; 
v_a_3070_ = lean_ctor_get(v_x_3059_, 0);
v_isSharedCheck_3111_ = !lean_is_exclusive(v_x_3059_);
if (v_isSharedCheck_3111_ == 0)
{
v___x_3072_ = v_x_3059_;
v_isShared_3073_ = v_isSharedCheck_3111_;
goto v_resetjp_3071_;
}
else
{
lean_inc(v_a_3070_);
lean_dec(v_x_3059_);
v___x_3072_ = lean_box(0);
v_isShared_3073_ = v_isSharedCheck_3111_;
goto v_resetjp_3071_;
}
v_resetjp_3071_:
{
uint32_t v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; uint8_t v___x_3078_; 
v___x_3074_ = 0;
v___x_3075_ = l_Lasm_JS_Wire_encode(v_payload_3052_);
v___x_3076_ = lean_string_utf8_byte_size(v_failurePrefix_3053_);
v___x_3077_ = lean_unsigned_to_nat(0u);
v___x_3078_ = lean_nat_dec_eq(v___x_3076_, v___x_3077_);
if (v___x_3078_ == 0)
{
lean_object* v___f_3079_; lean_object* v_val_3081_; lean_object* v___x_3086_; 
lean_dec_ref(v___f_3058_);
lean_inc(v_a_3070_);
v___f_3079_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_3079_, 0, v_a_3070_);
v___x_3086_ = lasm_js_call_into(v_a_3070_, v_op_3056_, v___x_3074_, v_flags_3057_, v___x_3075_, v_payload_3052_);
lean_dec_ref(v___x_3075_);
lean_dec(v_a_3070_);
if (lean_obj_tag(v___x_3086_) == 0)
{
lean_object* v_a_3087_; lean_object* v___x_3089_; 
v_a_3087_ = lean_ctor_get(v___x_3086_, 0);
lean_inc(v_a_3087_);
lean_dec_ref_known(v___x_3086_, 1);
if (v_isShared_3073_ == 0)
{
lean_ctor_set(v___x_3072_, 0, v_a_3087_);
v___x_3089_ = v___x_3072_;
goto v_reusejp_3088_;
}
else
{
lean_object* v_reuseFailAlloc_3090_; 
v_reuseFailAlloc_3090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3090_, 0, v_a_3087_);
v___x_3089_ = v_reuseFailAlloc_3090_;
goto v_reusejp_3088_;
}
v_reusejp_3088_:
{
v_val_3081_ = v___x_3089_;
goto v___jp_3080_;
}
}
else
{
lean_object* v_a_3091_; lean_object* v___x_3093_; 
v_a_3091_ = lean_ctor_get(v___x_3086_, 0);
lean_inc(v_a_3091_);
lean_dec_ref_known(v___x_3086_, 1);
if (v_isShared_3073_ == 0)
{
lean_ctor_set_tag(v___x_3072_, 0);
lean_ctor_set(v___x_3072_, 0, v_a_3091_);
v___x_3093_ = v___x_3072_;
goto v_reusejp_3092_;
}
else
{
lean_object* v_reuseFailAlloc_3094_; 
v_reuseFailAlloc_3094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3094_, 0, v_a_3091_);
v___x_3093_ = v_reuseFailAlloc_3094_;
goto v_reusejp_3092_;
}
v_reusejp_3092_:
{
v_val_3081_ = v___x_3093_;
goto v___jp_3080_;
}
}
v___jp_3080_:
{
lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; 
v___x_3082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3082_, 0, v_val_3081_);
v___x_3083_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3077_, v___x_3078_, v___x_3082_, v___f_3079_);
v___x_3084_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3077_, v___x_3078_, v___x_3083_, v___f_3054_);
v___x_3085_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3077_, v___x_3078_, v___x_3084_, v___f_3055_);
return v___x_3085_;
}
}
else
{
lean_object* v___f_3095_; uint8_t v___x_3096_; lean_object* v_val_3098_; lean_object* v___x_3102_; 
lean_dec_ref(v___f_3055_);
lean_dec_ref(v___f_3054_);
lean_inc(v_a_3070_);
v___f_3095_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_3095_, 0, v_a_3070_);
v___x_3096_ = 0;
v___x_3102_ = lasm_js_call_into(v_a_3070_, v_op_3056_, v___x_3074_, v_flags_3057_, v___x_3075_, v_payload_3052_);
lean_dec_ref(v___x_3075_);
lean_dec(v_a_3070_);
if (lean_obj_tag(v___x_3102_) == 0)
{
lean_object* v_a_3103_; lean_object* v___x_3105_; 
v_a_3103_ = lean_ctor_get(v___x_3102_, 0);
lean_inc(v_a_3103_);
lean_dec_ref_known(v___x_3102_, 1);
if (v_isShared_3073_ == 0)
{
lean_ctor_set(v___x_3072_, 0, v_a_3103_);
v___x_3105_ = v___x_3072_;
goto v_reusejp_3104_;
}
else
{
lean_object* v_reuseFailAlloc_3106_; 
v_reuseFailAlloc_3106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3106_, 0, v_a_3103_);
v___x_3105_ = v_reuseFailAlloc_3106_;
goto v_reusejp_3104_;
}
v_reusejp_3104_:
{
v_val_3098_ = v___x_3105_;
goto v___jp_3097_;
}
}
else
{
lean_object* v_a_3107_; lean_object* v___x_3109_; 
v_a_3107_ = lean_ctor_get(v___x_3102_, 0);
lean_inc(v_a_3107_);
lean_dec_ref_known(v___x_3102_, 1);
if (v_isShared_3073_ == 0)
{
lean_ctor_set_tag(v___x_3072_, 0);
lean_ctor_set(v___x_3072_, 0, v_a_3107_);
v___x_3109_ = v___x_3072_;
goto v_reusejp_3108_;
}
else
{
lean_object* v_reuseFailAlloc_3110_; 
v_reuseFailAlloc_3110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3110_, 0, v_a_3107_);
v___x_3109_ = v_reuseFailAlloc_3110_;
goto v_reusejp_3108_;
}
v_reusejp_3108_:
{
v_val_3098_ = v___x_3109_;
goto v___jp_3097_;
}
}
v___jp_3097_:
{
lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; 
v___x_3099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3099_, 0, v_val_3098_);
v___x_3100_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3077_, v___x_3096_, v___x_3099_, v___f_3095_);
v___x_3101_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3077_, v___x_3096_, v___x_3100_, v___f_3058_);
return v___x_3101_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__6___boxed(lean_object* v_payload_3112_, lean_object* v_failurePrefix_3113_, lean_object* v___f_3114_, lean_object* v___f_3115_, lean_object* v_op_3116_, lean_object* v_flags_3117_, lean_object* v___f_3118_, lean_object* v_x_3119_, lean_object* v___y_3120_){
_start:
{
uint32_t v_op_boxed_3121_; uint64_t v_flags_boxed_3122_; lean_object* v_res_3123_; 
v_op_boxed_3121_ = lean_unbox_uint32(v_op_3116_);
lean_dec(v_op_3116_);
v_flags_boxed_3122_ = lean_unbox_uint64(v_flags_3117_);
lean_dec_ref(v_flags_3117_);
v_res_3123_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__6(v_payload_3112_, v_failurePrefix_3113_, v___f_3114_, v___f_3115_, v_op_boxed_3121_, v_flags_boxed_3122_, v___f_3118_, v_x_3119_);
lean_dec_ref(v_failurePrefix_3113_);
lean_dec(v_payload_3112_);
return v_res_3123_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__4(lean_object* v___f_3124_, lean_object* v_x_3125_){
_start:
{
if (lean_obj_tag(v_x_3125_) == 0)
{
lean_object* v_a_3127_; lean_object* v___x_3129_; uint8_t v_isShared_3130_; uint8_t v_isSharedCheck_3135_; 
lean_dec_ref(v___f_3124_);
v_a_3127_ = lean_ctor_get(v_x_3125_, 0);
v_isSharedCheck_3135_ = !lean_is_exclusive(v_x_3125_);
if (v_isSharedCheck_3135_ == 0)
{
v___x_3129_ = v_x_3125_;
v_isShared_3130_ = v_isSharedCheck_3135_;
goto v_resetjp_3128_;
}
else
{
lean_inc(v_a_3127_);
lean_dec(v_x_3125_);
v___x_3129_ = lean_box(0);
v_isShared_3130_ = v_isSharedCheck_3135_;
goto v_resetjp_3128_;
}
v_resetjp_3128_:
{
lean_object* v___x_3132_; 
if (v_isShared_3130_ == 0)
{
v___x_3132_ = v___x_3129_;
goto v_reusejp_3131_;
}
else
{
lean_object* v_reuseFailAlloc_3134_; 
v_reuseFailAlloc_3134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3134_, 0, v_a_3127_);
v___x_3132_ = v_reuseFailAlloc_3134_;
goto v_reusejp_3131_;
}
v_reusejp_3131_:
{
lean_object* v___x_3133_; 
v___x_3133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3133_, 0, v___x_3132_);
return v___x_3133_;
}
}
}
else
{
lean_object* v___x_3137_; uint8_t v_isShared_3138_; uint8_t v_isSharedCheck_3147_; 
v_isSharedCheck_3147_ = !lean_is_exclusive(v_x_3125_);
if (v_isSharedCheck_3147_ == 0)
{
lean_object* v_unused_3148_; 
v_unused_3148_ = lean_ctor_get(v_x_3125_, 0);
lean_dec(v_unused_3148_);
v___x_3137_ = v_x_3125_;
v_isShared_3138_ = v_isSharedCheck_3147_;
goto v_resetjp_3136_;
}
else
{
lean_dec(v_x_3125_);
v___x_3137_ = lean_box(0);
v_isShared_3138_ = v_isSharedCheck_3147_;
goto v_resetjp_3136_;
}
v_resetjp_3136_:
{
lean_object* v___x_3139_; uint8_t v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3143_; 
v___x_3139_ = lean_unsigned_to_nat(0u);
v___x_3140_ = 0;
v___x_3141_ = lean_io_promise_new();
if (v_isShared_3138_ == 0)
{
lean_ctor_set(v___x_3137_, 0, v___x_3141_);
v___x_3143_ = v___x_3137_;
goto v_reusejp_3142_;
}
else
{
lean_object* v_reuseFailAlloc_3146_; 
v_reuseFailAlloc_3146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3146_, 0, v___x_3141_);
v___x_3143_ = v_reuseFailAlloc_3146_;
goto v_reusejp_3142_;
}
v_reusejp_3142_:
{
lean_object* v___x_3144_; lean_object* v___x_3145_; 
v___x_3144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3144_, 0, v___x_3143_);
v___x_3145_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3139_, v___x_3140_, v___x_3144_, v___f_3124_);
return v___x_3145_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__4___boxed(lean_object* v___f_3149_, lean_object* v_x_3150_, lean_object* v___y_3151_){
_start:
{
lean_object* v_res_3152_; 
v_res_3152_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__4(v___f_3149_, v_x_3150_);
return v_res_3152_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg(lean_object* v_inst_3153_, lean_object* v_context_3154_, uint32_t v_op_3155_, uint64_t v_flags_3156_, lean_object* v_payload_3157_, lean_object* v_failurePrefix_3158_){
_start:
{
lean_object* v___f_3160_; lean_object* v___f_3161_; lean_object* v___f_3162_; lean_object* v___f_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___f_3166_; lean_object* v___f_3167_; lean_object* v___x_3168_; uint8_t v___x_3169_; lean_object* v_val_3171_; lean_object* v___x_3174_; 
lean_inc_ref(v_failurePrefix_3158_);
v___f_3160_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3160_, 0, v_failurePrefix_3158_);
v___f_3161_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_3161_, 0, v_inst_3153_);
lean_closure_set(v___f_3161_, 1, v_context_3154_);
v___f_3162_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3162_, 0, v___f_3161_);
v___f_3163_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3163_, 0, v___f_3162_);
v___x_3164_ = lean_box_uint32(v_op_3155_);
v___x_3165_ = lean_box_uint64(v_flags_3156_);
lean_inc_ref(v___f_3163_);
v___f_3166_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__6___boxed), 9, 7);
lean_closure_set(v___f_3166_, 0, v_payload_3157_);
lean_closure_set(v___f_3166_, 1, v_failurePrefix_3158_);
lean_closure_set(v___f_3166_, 2, v___f_3160_);
lean_closure_set(v___f_3166_, 3, v___f_3163_);
lean_closure_set(v___f_3166_, 4, v___x_3164_);
lean_closure_set(v___f_3166_, 5, v___x_3165_);
lean_closure_set(v___f_3166_, 6, v___f_3163_);
v___f_3167_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3167_, 0, v___f_3166_);
v___x_3168_ = lean_unsigned_to_nat(0u);
v___x_3169_ = 0;
v___x_3174_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3174_) == 0)
{
lean_object* v_a_3175_; lean_object* v___x_3177_; uint8_t v_isShared_3178_; uint8_t v_isSharedCheck_3182_; 
v_a_3175_ = lean_ctor_get(v___x_3174_, 0);
v_isSharedCheck_3182_ = !lean_is_exclusive(v___x_3174_);
if (v_isSharedCheck_3182_ == 0)
{
v___x_3177_ = v___x_3174_;
v_isShared_3178_ = v_isSharedCheck_3182_;
goto v_resetjp_3176_;
}
else
{
lean_inc(v_a_3175_);
lean_dec(v___x_3174_);
v___x_3177_ = lean_box(0);
v_isShared_3178_ = v_isSharedCheck_3182_;
goto v_resetjp_3176_;
}
v_resetjp_3176_:
{
lean_object* v___x_3180_; 
if (v_isShared_3178_ == 0)
{
lean_ctor_set_tag(v___x_3177_, 1);
v___x_3180_ = v___x_3177_;
goto v_reusejp_3179_;
}
else
{
lean_object* v_reuseFailAlloc_3181_; 
v_reuseFailAlloc_3181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3181_, 0, v_a_3175_);
v___x_3180_ = v_reuseFailAlloc_3181_;
goto v_reusejp_3179_;
}
v_reusejp_3179_:
{
v_val_3171_ = v___x_3180_;
goto v___jp_3170_;
}
}
}
else
{
lean_object* v_a_3183_; lean_object* v___x_3185_; uint8_t v_isShared_3186_; uint8_t v_isSharedCheck_3190_; 
v_a_3183_ = lean_ctor_get(v___x_3174_, 0);
v_isSharedCheck_3190_ = !lean_is_exclusive(v___x_3174_);
if (v_isSharedCheck_3190_ == 0)
{
v___x_3185_ = v___x_3174_;
v_isShared_3186_ = v_isSharedCheck_3190_;
goto v_resetjp_3184_;
}
else
{
lean_inc(v_a_3183_);
lean_dec(v___x_3174_);
v___x_3185_ = lean_box(0);
v_isShared_3186_ = v_isSharedCheck_3190_;
goto v_resetjp_3184_;
}
v_resetjp_3184_:
{
lean_object* v___x_3188_; 
if (v_isShared_3186_ == 0)
{
lean_ctor_set_tag(v___x_3185_, 0);
v___x_3188_ = v___x_3185_;
goto v_reusejp_3187_;
}
else
{
lean_object* v_reuseFailAlloc_3189_; 
v_reuseFailAlloc_3189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3189_, 0, v_a_3183_);
v___x_3188_ = v_reuseFailAlloc_3189_;
goto v_reusejp_3187_;
}
v_reusejp_3187_:
{
v_val_3171_ = v___x_3188_;
goto v___jp_3170_;
}
}
}
v___jp_3170_:
{
lean_object* v___x_3172_; lean_object* v___x_3173_; 
v___x_3172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3172_, 0, v_val_3171_);
v___x_3173_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3168_, v___x_3169_, v___x_3172_, v___f_3167_);
return v___x_3173_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___boxed(lean_object* v_inst_3191_, lean_object* v_context_3192_, lean_object* v_op_3193_, lean_object* v_flags_3194_, lean_object* v_payload_3195_, lean_object* v_failurePrefix_3196_, lean_object* v_a_3197_){
_start:
{
uint32_t v_op_boxed_3198_; uint64_t v_flags_boxed_3199_; lean_object* v_res_3200_; 
v_op_boxed_3198_ = lean_unbox_uint32(v_op_3193_);
lean_dec(v_op_3193_);
v_flags_boxed_3199_ = lean_unbox_uint64(v_flags_3194_);
lean_dec_ref(v_flags_3194_);
v_res_3200_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg(v_inst_3191_, v_context_3192_, v_op_boxed_3198_, v_flags_boxed_3199_, v_payload_3195_, v_failurePrefix_3196_);
return v_res_3200_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync(lean_object* v_00_u03b1_3201_, lean_object* v_inst_3202_, lean_object* v_context_3203_, uint32_t v_op_3204_, uint64_t v_flags_3205_, lean_object* v_payload_3206_, lean_object* v_failurePrefix_3207_){
_start:
{
lean_object* v___x_3209_; 
v___x_3209_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg(v_inst_3202_, v_context_3203_, v_op_3204_, v_flags_3205_, v_payload_3206_, v_failurePrefix_3207_);
return v___x_3209_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___boxed(lean_object* v_00_u03b1_3210_, lean_object* v_inst_3211_, lean_object* v_context_3212_, lean_object* v_op_3213_, lean_object* v_flags_3214_, lean_object* v_payload_3215_, lean_object* v_failurePrefix_3216_, lean_object* v_a_3217_){
_start:
{
uint32_t v_op_boxed_3218_; uint64_t v_flags_boxed_3219_; lean_object* v_res_3220_; 
v_op_boxed_3218_ = lean_unbox_uint32(v_op_3213_);
lean_dec(v_op_3213_);
v_flags_boxed_3219_ = lean_unbox_uint64(v_flags_3214_);
lean_dec_ref(v_flags_3214_);
v_res_3220_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync(v_00_u03b1_3210_, v_inst_3211_, v_context_3212_, v_op_boxed_3218_, v_flags_boxed_3219_, v_payload_3215_, v_failurePrefix_3216_);
return v_res_3220_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t v_m_3221_){
_start:
{
uint8_t v___x_3222_; uint8_t v___x_3223_; 
v___x_3222_ = 1;
v___x_3223_ = l_Lasm_JS_instBEqMode_beq(v_m_3221_, v___x_3222_);
if (v___x_3223_ == 0)
{
uint64_t v___x_3224_; 
v___x_3224_ = 0ULL;
return v___x_3224_;
}
else
{
uint64_t v___x_3225_; 
v___x_3225_ = 1ULL;
return v___x_3225_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_modeArg___boxed(lean_object* v_m_3226_){
_start:
{
uint8_t v_m_boxed_3227_; uint64_t v_res_3228_; lean_object* v_r_3229_; 
v_m_boxed_3227_ = lean_unbox(v_m_3226_);
v_res_3228_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v_m_boxed_3227_);
v_r_3229_ = lean_box_uint64(v_res_3228_);
return v_r_3229_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(lean_object* v_inst_3230_, lean_object* v_context_3231_, lean_object* v_bytes_3232_){
_start:
{
lean_object* v___x_3234_; 
v___x_3234_ = l_Lasm_JS_Wire_decode(v_bytes_3232_);
if (lean_obj_tag(v___x_3234_) == 0)
{
lean_object* v_a_3235_; lean_object* v___x_3236_; 
v_a_3235_ = lean_ctor_get(v___x_3234_, 0);
lean_inc(v_a_3235_);
lean_dec_ref_known(v___x_3234_, 1);
v___x_3236_ = l_Lasm_JS_decodeAs___redArg(v_inst_3230_, v_context_3231_, v_a_3235_);
return v___x_3236_;
}
else
{
lean_object* v_a_3237_; lean_object* v___x_3239_; uint8_t v_isShared_3240_; uint8_t v_isSharedCheck_3244_; 
lean_dec_ref(v_inst_3230_);
v_a_3237_ = lean_ctor_get(v___x_3234_, 0);
v_isSharedCheck_3244_ = !lean_is_exclusive(v___x_3234_);
if (v_isSharedCheck_3244_ == 0)
{
v___x_3239_ = v___x_3234_;
v_isShared_3240_ = v_isSharedCheck_3244_;
goto v_resetjp_3238_;
}
else
{
lean_inc(v_a_3237_);
lean_dec(v___x_3234_);
v___x_3239_ = lean_box(0);
v_isShared_3240_ = v_isSharedCheck_3244_;
goto v_resetjp_3238_;
}
v_resetjp_3238_:
{
lean_object* v___x_3242_; 
if (v_isShared_3240_ == 0)
{
v___x_3242_ = v___x_3239_;
goto v_reusejp_3241_;
}
else
{
lean_object* v_reuseFailAlloc_3243_; 
v_reuseFailAlloc_3243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3243_, 0, v_a_3237_);
v___x_3242_ = v_reuseFailAlloc_3243_;
goto v_reusejp_3241_;
}
v_reusejp_3241_:
{
return v___x_3242_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg___boxed(lean_object* v_inst_3245_, lean_object* v_context_3246_, lean_object* v_bytes_3247_, lean_object* v_a_3248_){
_start:
{
lean_object* v_res_3249_; 
v_res_3249_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_3245_, v_context_3246_, v_bytes_3247_);
lean_dec_ref(v_bytes_3247_);
lean_dec_ref(v_context_3246_);
return v_res_3249_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive(lean_object* v_00_u03b1_3250_, lean_object* v_inst_3251_, lean_object* v_context_3252_, lean_object* v_bytes_3253_){
_start:
{
lean_object* v___x_3255_; 
v___x_3255_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_3251_, v_context_3252_, v_bytes_3253_);
return v___x_3255_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___boxed(lean_object* v_00_u03b1_3256_, lean_object* v_inst_3257_, lean_object* v_context_3258_, lean_object* v_bytes_3259_, lean_object* v_a_3260_){
_start:
{
lean_object* v_res_3261_; 
v_res_3261_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive(v_00_u03b1_3256_, v_inst_3257_, v_context_3258_, v_bytes_3259_);
lean_dec_ref(v_bytes_3259_);
lean_dec_ref(v_context_3258_);
return v_res_3261_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_3262_; lean_object* v___x_3263_; 
v___x_3262_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
v___x_3263_ = lean_string_utf8_byte_size(v___x_3262_);
return v___x_3263_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_3264_; lean_object* v___x_3265_; uint8_t v___x_3266_; 
v___x_3264_ = lean_unsigned_to_nat(0u);
v___x_3265_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0___closed__0, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0___closed__0_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0___closed__0);
v___x_3266_ = lean_nat_dec_eq(v___x_3265_, v___x_3264_);
return v___x_3266_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(lean_object* v_context_3268_, lean_object* v_d_3269_){
_start:
{
lean_object* v___y_3272_; lean_object* v___y_3273_; 
if (lean_obj_tag(v_d_3269_) == 9)
{
lean_object* v_value_3277_; lean_object* v___x_3278_; 
v_value_3277_ = lean_ctor_get(v_d_3269_, 0);
lean_inc(v_value_3277_);
lean_dec_ref_known(v_d_3269_, 2);
v___x_3278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3278_, 0, v_value_3277_);
return v___x_3278_;
}
else
{
lean_object* v___x_3279_; lean_object* v_received_3281_; 
v___x_3279_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
if (lean_obj_tag(v_d_3269_) == 9)
{
lean_object* v_value_3295_; lean_object* v_description_3296_; uint8_t v___x_3297_; 
v_value_3295_ = lean_ctor_get(v_d_3269_, 0);
v_description_3296_ = lean_ctor_get(v_d_3269_, 1);
v___x_3297_ = lean_string_dec_eq(v_description_3296_, v___x_3279_);
if (v___x_3297_ == 0)
{
goto v___jp_3293_;
}
else
{
uint32_t v___x_3298_; uint64_t v___x_3299_; lean_object* v___x_3300_; uint32_t v___x_3301_; lean_object* v___x_3302_; 
lean_inc_n(v_value_3295_, 2);
lean_dec_ref_known(v_d_3269_, 2);
v___x_3298_ = 206;
v___x_3299_ = 0ULL;
v___x_3300_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3300_, 0, v_value_3295_);
lean_ctor_set(v___x_3300_, 1, v___x_3279_);
v___x_3301_ = lasm_js_value_handle(v_value_3295_);
lean_dec(v_value_3295_);
v___x_3302_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3298_, v___x_3299_, v___x_3300_, v___x_3301_);
lean_dec_ref_known(v___x_3300_, 2);
if (lean_obj_tag(v___x_3302_) == 0)
{
lean_object* v_a_3303_; uint8_t v___x_3304_; 
v_a_3303_ = lean_ctor_get(v___x_3302_, 0);
lean_inc(v_a_3303_);
lean_dec_ref_known(v___x_3302_, 1);
v___x_3304_ = lean_string_validate_utf8(v_a_3303_);
if (v___x_3304_ == 0)
{
lean_object* v___x_3305_; lean_object* v___x_3306_; 
lean_dec(v_a_3303_);
v___x_3305_ = lean_obj_once(&l_Lasm_JS_decodeAs___redArg___closed__7, &l_Lasm_JS_decodeAs___redArg___closed__7_once, _init_l_Lasm_JS_decodeAs___redArg___closed__7);
v___x_3306_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3305_);
v_received_3281_ = v___x_3306_;
goto v___jp_3280_;
}
else
{
lean_object* v___x_3307_; 
v___x_3307_ = lean_string_from_utf8_unchecked(v_a_3303_);
v_received_3281_ = v___x_3307_;
goto v___jp_3280_;
}
}
else
{
lean_object* v___x_3308_; 
lean_dec_ref_known(v___x_3302_, 1);
v___x_3308_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__8));
v_received_3281_ = v___x_3308_;
goto v___jp_3280_;
}
}
}
else
{
goto v___jp_3293_;
}
v___jp_3280_:
{
lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; uint8_t v___x_3291_; 
v___x_3282_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__0));
v___x_3283_ = lean_string_append(v___x_3282_, v_context_3268_);
v___x_3284_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__1));
v___x_3285_ = lean_string_append(v___x_3283_, v___x_3284_);
v___x_3286_ = ((lean_object*)(l_Lasm_JS_instFromJSValue___closed__1));
v___x_3287_ = lean_string_append(v___x_3285_, v___x_3286_);
v___x_3288_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__2));
v___x_3289_ = lean_string_append(v___x_3287_, v___x_3288_);
v___x_3290_ = lean_string_append(v___x_3289_, v_received_3281_);
lean_dec_ref(v_received_3281_);
v___x_3291_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0___closed__1, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0___closed__1_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0___closed__1);
if (v___x_3291_ == 0)
{
lean_object* v___x_3292_; 
v___x_3292_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0___closed__2));
v___y_3272_ = v___x_3290_;
v___y_3273_ = v___x_3292_;
goto v___jp_3271_;
}
else
{
v___y_3272_ = v___x_3290_;
v___y_3273_ = v___x_3279_;
goto v___jp_3271_;
}
}
v___jp_3293_:
{
lean_object* v___x_3294_; 
v___x_3294_ = l_Lasm_JS_Data_describe(v_d_3269_);
v_received_3281_ = v___x_3294_;
goto v___jp_3280_;
}
}
v___jp_3271_:
{
lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; 
v___x_3274_ = lean_string_append(v___y_3272_, v___y_3273_);
v___x_3275_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3275_, 0, v___x_3274_);
v___x_3276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3276_, 0, v___x_3275_);
return v___x_3276_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0___boxed(lean_object* v_context_3309_, lean_object* v_d_3310_, lean_object* v_a_3311_){
_start:
{
lean_object* v_res_3312_; 
v_res_3312_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v_context_3309_, v_d_3310_);
lean_dec_ref(v_context_3309_);
return v_res_3312_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object* v_context_3313_, lean_object* v_bytes_3314_){
_start:
{
lean_object* v___x_3316_; 
v___x_3316_ = l_Lasm_JS_Wire_decode(v_bytes_3314_);
if (lean_obj_tag(v___x_3316_) == 0)
{
lean_object* v_a_3317_; lean_object* v___x_3318_; 
v_a_3317_ = lean_ctor_get(v___x_3316_, 0);
lean_inc(v_a_3317_);
lean_dec_ref_known(v___x_3316_, 1);
v___x_3318_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v_context_3313_, v_a_3317_);
return v___x_3318_;
}
else
{
lean_object* v_a_3319_; lean_object* v___x_3321_; uint8_t v_isShared_3322_; uint8_t v_isSharedCheck_3326_; 
v_a_3319_ = lean_ctor_get(v___x_3316_, 0);
v_isSharedCheck_3326_ = !lean_is_exclusive(v___x_3316_);
if (v_isSharedCheck_3326_ == 0)
{
v___x_3321_ = v___x_3316_;
v_isShared_3322_ = v_isSharedCheck_3326_;
goto v_resetjp_3320_;
}
else
{
lean_inc(v_a_3319_);
lean_dec(v___x_3316_);
v___x_3321_ = lean_box(0);
v_isShared_3322_ = v_isSharedCheck_3326_;
goto v_resetjp_3320_;
}
v_resetjp_3320_:
{
lean_object* v___x_3324_; 
if (v_isShared_3322_ == 0)
{
v___x_3324_ = v___x_3321_;
goto v_reusejp_3323_;
}
else
{
lean_object* v_reuseFailAlloc_3325_; 
v_reuseFailAlloc_3325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3325_, 0, v_a_3319_);
v___x_3324_ = v_reuseFailAlloc_3325_;
goto v_reusejp_3323_;
}
v_reusejp_3323_:
{
return v___x_3324_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0___boxed(lean_object* v_context_3327_, lean_object* v_bytes_3328_, lean_object* v_a_3329_){
_start:
{
lean_object* v_res_3330_; 
v_res_3330_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v_context_3327_, v_bytes_3328_);
lean_dec_ref(v_bytes_3328_);
lean_dec_ref(v_context_3327_);
return v_res_3330_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_global(){
_start:
{
uint32_t v___x_3333_; uint32_t v___x_3334_; uint64_t v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; 
v___x_3333_ = 202;
v___x_3334_ = 0;
v___x_3335_ = 0ULL;
v___x_3336_ = l_ByteArray_empty;
v___x_3337_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_3333_, v___x_3334_, v___x_3335_, v___x_3336_);
if (lean_obj_tag(v___x_3337_) == 0)
{
lean_object* v_a_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; 
v_a_3338_ = lean_ctor_get(v___x_3337_, 0);
lean_inc(v_a_3338_);
lean_dec_ref_known(v___x_3337_, 1);
v___x_3339_ = ((lean_object*)(l_Lasm_JS_global___closed__0));
v___x_3340_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_3339_, v_a_3338_);
lean_dec(v_a_3338_);
return v___x_3340_;
}
else
{
lean_object* v_a_3341_; lean_object* v___x_3343_; uint8_t v_isShared_3344_; uint8_t v_isSharedCheck_3348_; 
v_a_3341_ = lean_ctor_get(v___x_3337_, 0);
v_isSharedCheck_3348_ = !lean_is_exclusive(v___x_3337_);
if (v_isSharedCheck_3348_ == 0)
{
v___x_3343_ = v___x_3337_;
v_isShared_3344_ = v_isSharedCheck_3348_;
goto v_resetjp_3342_;
}
else
{
lean_inc(v_a_3341_);
lean_dec(v___x_3337_);
v___x_3343_ = lean_box(0);
v_isShared_3344_ = v_isSharedCheck_3348_;
goto v_resetjp_3342_;
}
v_resetjp_3342_:
{
lean_object* v___x_3346_; 
if (v_isShared_3344_ == 0)
{
v___x_3346_ = v___x_3343_;
goto v_reusejp_3345_;
}
else
{
lean_object* v_reuseFailAlloc_3347_; 
v_reuseFailAlloc_3347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3347_, 0, v_a_3341_);
v___x_3346_ = v_reuseFailAlloc_3347_;
goto v_reusejp_3345_;
}
v_reusejp_3345_:
{
return v___x_3346_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_global___boxed(lean_object* v_a_3349_){
_start:
{
lean_object* v_res_3350_; 
v_res_3350_ = l_Lasm_JS_global();
return v_res_3350_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___redArg(lean_object* v_specifier_3352_, lean_object* v_inst_3353_){
_start:
{
uint8_t v_mode_3355_; uint32_t v___x_3356_; uint32_t v___x_3357_; uint64_t v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; 
v_mode_3355_ = lean_ctor_get_uint8(v_inst_3353_, sizeof(void*)*2);
v___x_3356_ = 201;
v___x_3357_ = 0;
v___x_3358_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v_mode_3355_);
v___x_3359_ = lean_string_to_utf8(v_specifier_3352_);
v___x_3360_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_3356_, v___x_3357_, v___x_3358_, v___x_3359_);
lean_dec_ref(v___x_3359_);
if (lean_obj_tag(v___x_3360_) == 0)
{
lean_object* v_a_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; 
v_a_3361_ = lean_ctor_get(v___x_3360_, 0);
lean_inc(v_a_3361_);
lean_dec_ref_known(v___x_3360_, 1);
v___x_3362_ = ((lean_object*)(l_Lasm_JS_require___redArg___closed__0));
v___x_3363_ = l_String_quote(v_specifier_3352_);
v___x_3364_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3364_, 0, v___x_3363_);
v___x_3365_ = lean_unsigned_to_nat(120u);
v___x_3366_ = lean_unsigned_to_nat(0u);
v___x_3367_ = l_Std_Format_pretty(v___x_3364_, v___x_3365_, v___x_3366_, v___x_3366_);
v___x_3368_ = lean_string_append(v___x_3362_, v___x_3367_);
lean_dec_ref(v___x_3367_);
v___x_3369_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_3353_, v___x_3368_, v_a_3361_);
lean_dec(v_a_3361_);
lean_dec_ref(v___x_3368_);
return v___x_3369_;
}
else
{
lean_object* v_a_3370_; lean_object* v___x_3372_; uint8_t v_isShared_3373_; uint8_t v_isSharedCheck_3377_; 
lean_dec_ref(v_inst_3353_);
lean_dec_ref(v_specifier_3352_);
v_a_3370_ = lean_ctor_get(v___x_3360_, 0);
v_isSharedCheck_3377_ = !lean_is_exclusive(v___x_3360_);
if (v_isSharedCheck_3377_ == 0)
{
v___x_3372_ = v___x_3360_;
v_isShared_3373_ = v_isSharedCheck_3377_;
goto v_resetjp_3371_;
}
else
{
lean_inc(v_a_3370_);
lean_dec(v___x_3360_);
v___x_3372_ = lean_box(0);
v_isShared_3373_ = v_isSharedCheck_3377_;
goto v_resetjp_3371_;
}
v_resetjp_3371_:
{
lean_object* v___x_3375_; 
if (v_isShared_3373_ == 0)
{
v___x_3375_ = v___x_3372_;
goto v_reusejp_3374_;
}
else
{
lean_object* v_reuseFailAlloc_3376_; 
v_reuseFailAlloc_3376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3376_, 0, v_a_3370_);
v___x_3375_ = v_reuseFailAlloc_3376_;
goto v_reusejp_3374_;
}
v_reusejp_3374_:
{
return v___x_3375_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___redArg___boxed(lean_object* v_specifier_3378_, lean_object* v_inst_3379_, lean_object* v_a_3380_){
_start:
{
lean_object* v_res_3381_; 
v_res_3381_ = l_Lasm_JS_require___redArg(v_specifier_3378_, v_inst_3379_);
return v_res_3381_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require(lean_object* v_specifier_3382_, lean_object* v_00_u03b1_3383_, lean_object* v_inst_3384_){
_start:
{
lean_object* v___x_3386_; 
v___x_3386_ = l_Lasm_JS_require___redArg(v_specifier_3382_, v_inst_3384_);
return v___x_3386_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___boxed(lean_object* v_specifier_3387_, lean_object* v_00_u03b1_3388_, lean_object* v_inst_3389_, lean_object* v_a_3390_){
_start:
{
lean_object* v_res_3391_; 
v_res_3391_ = l_Lasm_JS_require(v_specifier_3387_, v_00_u03b1_3388_, v_inst_3389_);
return v_res_3391_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_describe(lean_object* v_v_3392_){
_start:
{
uint32_t v___x_3394_; uint64_t v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; uint32_t v___x_3398_; lean_object* v___x_3399_; 
v___x_3394_ = 206;
v___x_3395_ = 0ULL;
v___x_3396_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
lean_inc(v_v_3392_);
v___x_3397_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3397_, 0, v_v_3392_);
lean_ctor_set(v___x_3397_, 1, v___x_3396_);
v___x_3398_ = lasm_js_value_handle(v_v_3392_);
lean_dec(v_v_3392_);
v___x_3399_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3394_, v___x_3395_, v___x_3397_, v___x_3398_);
lean_dec_ref_known(v___x_3397_, 2);
if (lean_obj_tag(v___x_3399_) == 0)
{
lean_object* v_a_3400_; lean_object* v___x_3402_; uint8_t v_isShared_3403_; uint8_t v_isSharedCheck_3414_; 
v_a_3400_ = lean_ctor_get(v___x_3399_, 0);
v_isSharedCheck_3414_ = !lean_is_exclusive(v___x_3399_);
if (v_isSharedCheck_3414_ == 0)
{
v___x_3402_ = v___x_3399_;
v_isShared_3403_ = v_isSharedCheck_3414_;
goto v_resetjp_3401_;
}
else
{
lean_inc(v_a_3400_);
lean_dec(v___x_3399_);
v___x_3402_ = lean_box(0);
v_isShared_3403_ = v_isSharedCheck_3414_;
goto v_resetjp_3401_;
}
v_resetjp_3401_:
{
uint8_t v___x_3404_; 
v___x_3404_ = lean_string_validate_utf8(v_a_3400_);
if (v___x_3404_ == 0)
{
lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3408_; 
lean_dec(v_a_3400_);
v___x_3405_ = lean_obj_once(&l_Lasm_JS_decodeAs___redArg___closed__7, &l_Lasm_JS_decodeAs___redArg___closed__7_once, _init_l_Lasm_JS_decodeAs___redArg___closed__7);
v___x_3406_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3405_);
if (v_isShared_3403_ == 0)
{
lean_ctor_set(v___x_3402_, 0, v___x_3406_);
v___x_3408_ = v___x_3402_;
goto v_reusejp_3407_;
}
else
{
lean_object* v_reuseFailAlloc_3409_; 
v_reuseFailAlloc_3409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3409_, 0, v___x_3406_);
v___x_3408_ = v_reuseFailAlloc_3409_;
goto v_reusejp_3407_;
}
v_reusejp_3407_:
{
return v___x_3408_;
}
}
else
{
lean_object* v___x_3410_; lean_object* v___x_3412_; 
v___x_3410_ = lean_string_from_utf8_unchecked(v_a_3400_);
if (v_isShared_3403_ == 0)
{
lean_ctor_set(v___x_3402_, 0, v___x_3410_);
v___x_3412_ = v___x_3402_;
goto v_reusejp_3411_;
}
else
{
lean_object* v_reuseFailAlloc_3413_; 
v_reuseFailAlloc_3413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3413_, 0, v___x_3410_);
v___x_3412_ = v_reuseFailAlloc_3413_;
goto v_reusejp_3411_;
}
v_reusejp_3411_:
{
return v___x_3412_;
}
}
}
}
else
{
lean_object* v_a_3415_; lean_object* v___x_3417_; uint8_t v_isShared_3418_; uint8_t v_isSharedCheck_3422_; 
v_a_3415_ = lean_ctor_get(v___x_3399_, 0);
v_isSharedCheck_3422_ = !lean_is_exclusive(v___x_3399_);
if (v_isSharedCheck_3422_ == 0)
{
v___x_3417_ = v___x_3399_;
v_isShared_3418_ = v_isSharedCheck_3422_;
goto v_resetjp_3416_;
}
else
{
lean_inc(v_a_3415_);
lean_dec(v___x_3399_);
v___x_3417_ = lean_box(0);
v_isShared_3418_ = v_isSharedCheck_3422_;
goto v_resetjp_3416_;
}
v_resetjp_3416_:
{
lean_object* v___x_3420_; 
if (v_isShared_3418_ == 0)
{
v___x_3420_ = v___x_3417_;
goto v_reusejp_3419_;
}
else
{
lean_object* v_reuseFailAlloc_3421_; 
v_reuseFailAlloc_3421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3421_, 0, v_a_3415_);
v___x_3420_ = v_reuseFailAlloc_3421_;
goto v_reusejp_3419_;
}
v_reusejp_3419_:
{
return v___x_3420_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_describe___boxed(lean_object* v_v_3423_, lean_object* v_a_3424_){
_start:
{
lean_object* v_res_3425_; 
v_res_3425_ = l_Lasm_JS_Value_describe(v_v_3423_);
return v_res_3425_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___redArg(lean_object* v_o_3427_, lean_object* v_key_3428_, lean_object* v_inst_3429_){
_start:
{
uint8_t v_mode_3431_; uint32_t v___x_3432_; uint32_t v___x_3433_; uint64_t v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; 
v_mode_3431_ = lean_ctor_get_uint8(v_inst_3429_, sizeof(void*)*2);
v___x_3432_ = 203;
v___x_3433_ = lasm_js_value_handle(v_o_3427_);
v___x_3434_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v_mode_3431_);
lean_inc_ref(v_key_3428_);
v___x_3435_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3435_, 0, v_key_3428_);
v___x_3436_ = l_Lasm_JS_Wire_encode(v___x_3435_);
lean_dec_ref_known(v___x_3435_, 1);
v___x_3437_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
v___x_3438_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3438_, 0, v_o_3427_);
lean_ctor_set(v___x_3438_, 1, v___x_3437_);
v___x_3439_ = lasm_js_call(v___x_3432_, v___x_3433_, v___x_3434_, v___x_3436_, v___x_3438_);
lean_dec_ref_known(v___x_3438_, 2);
lean_dec_ref(v___x_3436_);
if (lean_obj_tag(v___x_3439_) == 0)
{
lean_object* v_a_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; 
v_a_3440_ = lean_ctor_get(v___x_3439_, 0);
lean_inc(v_a_3440_);
lean_dec_ref_known(v___x_3439_, 1);
v___x_3441_ = ((lean_object*)(l_Lasm_JS_Value_get___redArg___closed__0));
v___x_3442_ = l_String_quote(v_key_3428_);
v___x_3443_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3443_, 0, v___x_3442_);
v___x_3444_ = lean_unsigned_to_nat(120u);
v___x_3445_ = lean_unsigned_to_nat(0u);
v___x_3446_ = l_Std_Format_pretty(v___x_3443_, v___x_3444_, v___x_3445_, v___x_3445_);
v___x_3447_ = lean_string_append(v___x_3441_, v___x_3446_);
lean_dec_ref(v___x_3446_);
v___x_3448_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_3429_, v___x_3447_, v_a_3440_);
lean_dec(v_a_3440_);
lean_dec_ref(v___x_3447_);
return v___x_3448_;
}
else
{
lean_object* v_a_3449_; lean_object* v___x_3451_; uint8_t v_isShared_3452_; uint8_t v_isSharedCheck_3456_; 
lean_dec_ref(v_inst_3429_);
lean_dec_ref(v_key_3428_);
v_a_3449_ = lean_ctor_get(v___x_3439_, 0);
v_isSharedCheck_3456_ = !lean_is_exclusive(v___x_3439_);
if (v_isSharedCheck_3456_ == 0)
{
v___x_3451_ = v___x_3439_;
v_isShared_3452_ = v_isSharedCheck_3456_;
goto v_resetjp_3450_;
}
else
{
lean_inc(v_a_3449_);
lean_dec(v___x_3439_);
v___x_3451_ = lean_box(0);
v_isShared_3452_ = v_isSharedCheck_3456_;
goto v_resetjp_3450_;
}
v_resetjp_3450_:
{
lean_object* v___x_3454_; 
if (v_isShared_3452_ == 0)
{
v___x_3454_ = v___x_3451_;
goto v_reusejp_3453_;
}
else
{
lean_object* v_reuseFailAlloc_3455_; 
v_reuseFailAlloc_3455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3455_, 0, v_a_3449_);
v___x_3454_ = v_reuseFailAlloc_3455_;
goto v_reusejp_3453_;
}
v_reusejp_3453_:
{
return v___x_3454_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___redArg___boxed(lean_object* v_o_3457_, lean_object* v_key_3458_, lean_object* v_inst_3459_, lean_object* v_a_3460_){
_start:
{
lean_object* v_res_3461_; 
v_res_3461_ = l_Lasm_JS_Value_get___redArg(v_o_3457_, v_key_3458_, v_inst_3459_);
return v_res_3461_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get(lean_object* v_o_3462_, lean_object* v_key_3463_, lean_object* v_00_u03b1_3464_, lean_object* v_inst_3465_){
_start:
{
lean_object* v___x_3467_; 
v___x_3467_ = l_Lasm_JS_Value_get___redArg(v_o_3462_, v_key_3463_, v_inst_3465_);
return v___x_3467_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___boxed(lean_object* v_o_3468_, lean_object* v_key_3469_, lean_object* v_00_u03b1_3470_, lean_object* v_inst_3471_, lean_object* v_a_3472_){
_start:
{
lean_object* v_res_3473_; 
v_res_3473_ = l_Lasm_JS_Value_get(v_o_3468_, v_key_3469_, v_00_u03b1_3470_, v_inst_3471_);
return v_res_3473_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___redArg___lam__0(lean_object* v_x_3474_){
_start:
{
lean_object* v___x_3475_; 
v___x_3475_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3475_, 0, v_x_3474_);
return v___x_3475_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___redArg(lean_object* v_o_3478_, lean_object* v_keys_3479_, lean_object* v_inst_3480_){
_start:
{
lean_object* v___f_3482_; uint32_t v___x_3483_; uint32_t v___x_3484_; uint64_t v___x_3485_; lean_object* v___x_3486_; size_t v_sz_3487_; size_t v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; 
v___f_3482_ = ((lean_object*)(l_Lasm_JS_Value_getFields___redArg___closed__0));
v___x_3483_ = 203;
v___x_3484_ = lasm_js_value_handle(v_o_3478_);
v___x_3485_ = 0ULL;
v___x_3486_ = ((lean_object*)(l_Lasm_JS_instToJSArray___redArg___lam__1___closed__9));
v_sz_3487_ = lean_array_size(v_keys_3479_);
v___x_3488_ = ((size_t)0ULL);
v___x_3489_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_3486_, v___f_3482_, v_sz_3487_, v___x_3488_, v_keys_3479_);
v___x_3490_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3490_, 0, v___x_3489_);
v___x_3491_ = l_Lasm_JS_Wire_encode(v___x_3490_);
lean_dec_ref_known(v___x_3490_, 1);
v___x_3492_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
v___x_3493_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3493_, 0, v_o_3478_);
lean_ctor_set(v___x_3493_, 1, v___x_3492_);
v___x_3494_ = lasm_js_call(v___x_3483_, v___x_3484_, v___x_3485_, v___x_3491_, v___x_3493_);
lean_dec_ref_known(v___x_3493_, 2);
lean_dec_ref(v___x_3491_);
if (lean_obj_tag(v___x_3494_) == 0)
{
lean_object* v_a_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; 
v_a_3495_ = lean_ctor_get(v___x_3494_, 0);
lean_inc(v_a_3495_);
lean_dec_ref_known(v___x_3494_, 1);
v___x_3496_ = ((lean_object*)(l_Lasm_JS_Value_getFields___redArg___closed__1));
v___x_3497_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_3480_, v___x_3496_, v_a_3495_);
lean_dec(v_a_3495_);
return v___x_3497_;
}
else
{
lean_object* v_a_3498_; lean_object* v___x_3500_; uint8_t v_isShared_3501_; uint8_t v_isSharedCheck_3505_; 
lean_dec_ref(v_inst_3480_);
v_a_3498_ = lean_ctor_get(v___x_3494_, 0);
v_isSharedCheck_3505_ = !lean_is_exclusive(v___x_3494_);
if (v_isSharedCheck_3505_ == 0)
{
v___x_3500_ = v___x_3494_;
v_isShared_3501_ = v_isSharedCheck_3505_;
goto v_resetjp_3499_;
}
else
{
lean_inc(v_a_3498_);
lean_dec(v___x_3494_);
v___x_3500_ = lean_box(0);
v_isShared_3501_ = v_isSharedCheck_3505_;
goto v_resetjp_3499_;
}
v_resetjp_3499_:
{
lean_object* v___x_3503_; 
if (v_isShared_3501_ == 0)
{
v___x_3503_ = v___x_3500_;
goto v_reusejp_3502_;
}
else
{
lean_object* v_reuseFailAlloc_3504_; 
v_reuseFailAlloc_3504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3504_, 0, v_a_3498_);
v___x_3503_ = v_reuseFailAlloc_3504_;
goto v_reusejp_3502_;
}
v_reusejp_3502_:
{
return v___x_3503_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___redArg___boxed(lean_object* v_o_3506_, lean_object* v_keys_3507_, lean_object* v_inst_3508_, lean_object* v_a_3509_){
_start:
{
lean_object* v_res_3510_; 
v_res_3510_ = l_Lasm_JS_Value_getFields___redArg(v_o_3506_, v_keys_3507_, v_inst_3508_);
return v_res_3510_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields(lean_object* v_o_3511_, lean_object* v_keys_3512_, lean_object* v_00_u03b1_3513_, lean_object* v_inst_3514_){
_start:
{
lean_object* v___x_3516_; 
v___x_3516_ = l_Lasm_JS_Value_getFields___redArg(v_o_3511_, v_keys_3512_, v_inst_3514_);
return v___x_3516_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___boxed(lean_object* v_o_3517_, lean_object* v_keys_3518_, lean_object* v_00_u03b1_3519_, lean_object* v_inst_3520_, lean_object* v_a_3521_){
_start:
{
lean_object* v_res_3522_; 
v_res_3522_ = l_Lasm_JS_Value_getFields(v_o_3517_, v_keys_3518_, v_00_u03b1_3519_, v_inst_3520_);
return v_res_3522_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___redArg(lean_object* v_inst_3523_, lean_object* v_o_3524_, lean_object* v_key_3525_, lean_object* v_x_3526_){
_start:
{
lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v_payload_3537_; uint32_t v___x_3538_; uint32_t v___x_3539_; uint64_t v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; 
v___x_3528_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3528_, 0, v_key_3525_);
v___x_3529_ = lean_apply_1(v_inst_3523_, v_x_3526_);
v___x_3530_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
lean_inc(v_o_3524_);
v___x_3531_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3531_, 0, v_o_3524_);
lean_ctor_set(v___x_3531_, 1, v___x_3530_);
v___x_3532_ = lean_unsigned_to_nat(3u);
v___x_3533_ = lean_mk_empty_array_with_capacity(v___x_3532_);
lean_inc_ref(v___x_3528_);
v___x_3534_ = lean_array_push(v___x_3533_, v___x_3528_);
lean_inc(v___x_3529_);
v___x_3535_ = lean_array_push(v___x_3534_, v___x_3529_);
v___x_3536_ = lean_array_push(v___x_3535_, v___x_3531_);
v_payload_3537_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_payload_3537_, 0, v___x_3536_);
v___x_3538_ = 204;
v___x_3539_ = lasm_js_value_handle(v_o_3524_);
lean_dec(v_o_3524_);
v___x_3540_ = 0ULL;
v___x_3541_ = lean_unsigned_to_nat(2u);
v___x_3542_ = lean_mk_empty_array_with_capacity(v___x_3541_);
v___x_3543_ = lean_array_push(v___x_3542_, v___x_3528_);
v___x_3544_ = lean_array_push(v___x_3543_, v___x_3529_);
v___x_3545_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3545_, 0, v___x_3544_);
v___x_3546_ = l_Lasm_JS_Wire_encode(v___x_3545_);
lean_dec_ref_known(v___x_3545_, 1);
v___x_3547_ = lean_box(0);
v___x_3548_ = lasm_js_call(v___x_3538_, v___x_3539_, v___x_3540_, v___x_3546_, v_payload_3537_);
lean_dec_ref_known(v_payload_3537_, 1);
lean_dec_ref(v___x_3546_);
if (lean_obj_tag(v___x_3548_) == 0)
{
lean_object* v___x_3550_; uint8_t v_isShared_3551_; uint8_t v_isSharedCheck_3555_; 
v_isSharedCheck_3555_ = !lean_is_exclusive(v___x_3548_);
if (v_isSharedCheck_3555_ == 0)
{
lean_object* v_unused_3556_; 
v_unused_3556_ = lean_ctor_get(v___x_3548_, 0);
lean_dec(v_unused_3556_);
v___x_3550_ = v___x_3548_;
v_isShared_3551_ = v_isSharedCheck_3555_;
goto v_resetjp_3549_;
}
else
{
lean_dec(v___x_3548_);
v___x_3550_ = lean_box(0);
v_isShared_3551_ = v_isSharedCheck_3555_;
goto v_resetjp_3549_;
}
v_resetjp_3549_:
{
lean_object* v___x_3553_; 
if (v_isShared_3551_ == 0)
{
lean_ctor_set(v___x_3550_, 0, v___x_3547_);
v___x_3553_ = v___x_3550_;
goto v_reusejp_3552_;
}
else
{
lean_object* v_reuseFailAlloc_3554_; 
v_reuseFailAlloc_3554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3554_, 0, v___x_3547_);
v___x_3553_ = v_reuseFailAlloc_3554_;
goto v_reusejp_3552_;
}
v_reusejp_3552_:
{
return v___x_3553_;
}
}
}
else
{
lean_object* v_a_3557_; lean_object* v___x_3559_; uint8_t v_isShared_3560_; uint8_t v_isSharedCheck_3564_; 
v_a_3557_ = lean_ctor_get(v___x_3548_, 0);
v_isSharedCheck_3564_ = !lean_is_exclusive(v___x_3548_);
if (v_isSharedCheck_3564_ == 0)
{
v___x_3559_ = v___x_3548_;
v_isShared_3560_ = v_isSharedCheck_3564_;
goto v_resetjp_3558_;
}
else
{
lean_inc(v_a_3557_);
lean_dec(v___x_3548_);
v___x_3559_ = lean_box(0);
v_isShared_3560_ = v_isSharedCheck_3564_;
goto v_resetjp_3558_;
}
v_resetjp_3558_:
{
lean_object* v___x_3562_; 
if (v_isShared_3560_ == 0)
{
v___x_3562_ = v___x_3559_;
goto v_reusejp_3561_;
}
else
{
lean_object* v_reuseFailAlloc_3563_; 
v_reuseFailAlloc_3563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3563_, 0, v_a_3557_);
v___x_3562_ = v_reuseFailAlloc_3563_;
goto v_reusejp_3561_;
}
v_reusejp_3561_:
{
return v___x_3562_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___redArg___boxed(lean_object* v_inst_3565_, lean_object* v_o_3566_, lean_object* v_key_3567_, lean_object* v_x_3568_, lean_object* v_a_3569_){
_start:
{
lean_object* v_res_3570_; 
v_res_3570_ = l_Lasm_JS_Value_set___redArg(v_inst_3565_, v_o_3566_, v_key_3567_, v_x_3568_);
return v_res_3570_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set(lean_object* v_00_u03b1_3571_, lean_object* v_inst_3572_, lean_object* v_o_3573_, lean_object* v_key_3574_, lean_object* v_x_3575_){
_start:
{
lean_object* v___x_3577_; 
v___x_3577_ = l_Lasm_JS_Value_set___redArg(v_inst_3572_, v_o_3573_, v_key_3574_, v_x_3575_);
return v___x_3577_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___boxed(lean_object* v_00_u03b1_3578_, lean_object* v_inst_3579_, lean_object* v_o_3580_, lean_object* v_key_3581_, lean_object* v_x_3582_, lean_object* v_a_3583_){
_start:
{
lean_object* v_res_3584_; 
v_res_3584_ = l_Lasm_JS_Value_set(v_00_u03b1_3578_, v_inst_3579_, v_o_3580_, v_key_3581_, v_x_3582_);
return v_res_3584_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_invokeRaw(lean_object* v_target_3585_, lean_object* v_receiver_3586_, lean_object* v_args_3587_, uint64_t v_flags_3588_){
_start:
{
uint32_t v___x_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; uint32_t v___x_3598_; lean_object* v___x_3599_; 
v___x_3590_ = 205;
v___x_3591_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3591_, 0, v_args_3587_);
v___x_3592_ = lean_unsigned_to_nat(3u);
v___x_3593_ = lean_mk_empty_array_with_capacity(v___x_3592_);
v___x_3594_ = lean_array_push(v___x_3593_, v_target_3585_);
v___x_3595_ = lean_array_push(v___x_3594_, v_receiver_3586_);
v___x_3596_ = lean_array_push(v___x_3595_, v___x_3591_);
v___x_3597_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3597_, 0, v___x_3596_);
v___x_3598_ = 0;
v___x_3599_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3590_, v_flags_3588_, v___x_3597_, v___x_3598_);
lean_dec_ref_known(v___x_3597_, 1);
return v___x_3599_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_invokeRaw___boxed(lean_object* v_target_3600_, lean_object* v_receiver_3601_, lean_object* v_args_3602_, lean_object* v_flags_3603_, lean_object* v_a_3604_){
_start:
{
uint64_t v_flags_boxed_3605_; lean_object* v_res_3606_; 
v_flags_boxed_3605_ = lean_unbox_uint64(v_flags_3603_);
lean_dec_ref(v_flags_3603_);
v_res_3606_ = l_Lasm_JS_Value_invokeRaw(v_target_3600_, v_receiver_3601_, v_args_3602_, v_flags_boxed_3605_);
return v_res_3606_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(lean_object* v_inst_3607_, uint8_t v_await_3608_, uint64_t v_extra_3609_){
_start:
{
uint8_t v_mode_3610_; uint64_t v___x_3611_; uint64_t v___y_3613_; 
v_mode_3610_ = lean_ctor_get_uint8(v_inst_3607_, sizeof(void*)*2);
v___x_3611_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v_mode_3610_);
if (v_await_3608_ == 0)
{
uint64_t v___x_3616_; 
v___x_3616_ = 0ULL;
v___y_3613_ = v___x_3616_;
goto v___jp_3612_;
}
else
{
uint64_t v___x_3617_; 
v___x_3617_ = 2ULL;
v___y_3613_ = v___x_3617_;
goto v___jp_3612_;
}
v___jp_3612_:
{
uint64_t v___x_3614_; uint64_t v___x_3615_; 
v___x_3614_ = lean_uint64_lor(v___x_3611_, v___y_3613_);
v___x_3615_ = lean_uint64_lor(v___x_3614_, v_extra_3609_);
return v___x_3615_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg___boxed(lean_object* v_inst_3618_, lean_object* v_await_3619_, lean_object* v_extra_3620_){
_start:
{
uint8_t v_await_boxed_3621_; uint64_t v_extra_boxed_3622_; uint64_t v_res_3623_; lean_object* v_r_3624_; 
v_await_boxed_3621_ = lean_unbox(v_await_3619_);
v_extra_boxed_3622_ = lean_unbox_uint64(v_extra_3620_);
lean_dec_ref(v_extra_3620_);
v_res_3623_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_3618_, v_await_boxed_3621_, v_extra_boxed_3622_);
lean_dec_ref(v_inst_3618_);
v_r_3624_ = lean_box_uint64(v_res_3623_);
return v_r_3624_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags(lean_object* v_00_u03b1_3625_, lean_object* v_inst_3626_, uint8_t v_await_3627_, uint64_t v_extra_3628_){
_start:
{
uint64_t v___x_3629_; 
v___x_3629_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_3626_, v_await_3627_, v_extra_3628_);
return v___x_3629_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___boxed(lean_object* v_00_u03b1_3630_, lean_object* v_inst_3631_, lean_object* v_await_3632_, lean_object* v_extra_3633_){
_start:
{
uint8_t v_await_boxed_3634_; uint64_t v_extra_boxed_3635_; uint64_t v_res_3636_; lean_object* v_r_3637_; 
v_await_boxed_3634_ = lean_unbox(v_await_3632_);
v_extra_boxed_3635_ = lean_unbox_uint64(v_extra_3633_);
lean_dec_ref(v_extra_3633_);
v_res_3636_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags(v_00_u03b1_3630_, v_inst_3631_, v_await_boxed_3634_, v_extra_boxed_3635_);
lean_dec_ref(v_inst_3631_);
v_r_3637_ = lean_box_uint64(v_res_3636_);
return v_r_3637_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___redArg(lean_object* v_f_3639_, lean_object* v_args_3640_, lean_object* v_inst_3641_, lean_object* v_this_3642_){
_start:
{
lean_object* v___x_3644_; lean_object* v___x_3645_; uint8_t v___x_3646_; uint64_t v___x_3647_; uint64_t v___x_3648_; lean_object* v___x_3649_; 
v___x_3644_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
v___x_3645_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3645_, 0, v_f_3639_);
lean_ctor_set(v___x_3645_, 1, v___x_3644_);
v___x_3646_ = 0;
v___x_3647_ = 0ULL;
v___x_3648_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_3641_, v___x_3646_, v___x_3647_);
v___x_3649_ = l_Lasm_JS_Value_invokeRaw(v___x_3645_, v_this_3642_, v_args_3640_, v___x_3648_);
if (lean_obj_tag(v___x_3649_) == 0)
{
lean_object* v_a_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; 
v_a_3650_ = lean_ctor_get(v___x_3649_, 0);
lean_inc(v_a_3650_);
lean_dec_ref_known(v___x_3649_, 1);
v___x_3651_ = ((lean_object*)(l_Lasm_JS_Value_call___redArg___closed__0));
v___x_3652_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_3641_, v___x_3651_, v_a_3650_);
lean_dec(v_a_3650_);
return v___x_3652_;
}
else
{
lean_object* v_a_3653_; lean_object* v___x_3655_; uint8_t v_isShared_3656_; uint8_t v_isSharedCheck_3660_; 
lean_dec_ref(v_inst_3641_);
v_a_3653_ = lean_ctor_get(v___x_3649_, 0);
v_isSharedCheck_3660_ = !lean_is_exclusive(v___x_3649_);
if (v_isSharedCheck_3660_ == 0)
{
v___x_3655_ = v___x_3649_;
v_isShared_3656_ = v_isSharedCheck_3660_;
goto v_resetjp_3654_;
}
else
{
lean_inc(v_a_3653_);
lean_dec(v___x_3649_);
v___x_3655_ = lean_box(0);
v_isShared_3656_ = v_isSharedCheck_3660_;
goto v_resetjp_3654_;
}
v_resetjp_3654_:
{
lean_object* v___x_3658_; 
if (v_isShared_3656_ == 0)
{
v___x_3658_ = v___x_3655_;
goto v_reusejp_3657_;
}
else
{
lean_object* v_reuseFailAlloc_3659_; 
v_reuseFailAlloc_3659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3659_, 0, v_a_3653_);
v___x_3658_ = v_reuseFailAlloc_3659_;
goto v_reusejp_3657_;
}
v_reusejp_3657_:
{
return v___x_3658_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___redArg___boxed(lean_object* v_f_3661_, lean_object* v_args_3662_, lean_object* v_inst_3663_, lean_object* v_this_3664_, lean_object* v_a_3665_){
_start:
{
lean_object* v_res_3666_; 
v_res_3666_ = l_Lasm_JS_Value_call___redArg(v_f_3661_, v_args_3662_, v_inst_3663_, v_this_3664_);
return v_res_3666_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call(lean_object* v_f_3667_, lean_object* v_args_3668_, lean_object* v_00_u03b1_3669_, lean_object* v_inst_3670_, lean_object* v_this_3671_){
_start:
{
lean_object* v___x_3673_; 
v___x_3673_ = l_Lasm_JS_Value_call___redArg(v_f_3667_, v_args_3668_, v_inst_3670_, v_this_3671_);
return v___x_3673_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___boxed(lean_object* v_f_3674_, lean_object* v_args_3675_, lean_object* v_00_u03b1_3676_, lean_object* v_inst_3677_, lean_object* v_this_3678_, lean_object* v_a_3679_){
_start:
{
lean_object* v_res_3680_; 
v_res_3680_ = l_Lasm_JS_Value_call(v_f_3674_, v_args_3675_, v_00_u03b1_3676_, v_inst_3677_, v_this_3678_);
return v_res_3680_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___redArg___lam__0(lean_object* v_inst_3681_, lean_object* v_____do__lift_3682_){
_start:
{
lean_object* v___x_3684_; lean_object* v___x_3685_; 
v___x_3684_ = ((lean_object*)(l_Lasm_JS_Value_call___redArg___closed__0));
v___x_3685_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_3681_, v___x_3684_, v_____do__lift_3682_);
return v___x_3685_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___redArg___lam__0___boxed(lean_object* v_inst_3686_, lean_object* v_____do__lift_3687_, lean_object* v___y_3688_){
_start:
{
lean_object* v_res_3689_; 
v_res_3689_ = l_Lasm_JS_Value_callAwait___redArg___lam__0(v_inst_3686_, v_____do__lift_3687_);
lean_dec_ref(v_____do__lift_3687_);
return v_res_3689_;
}
}
static lean_object* _init_l_Lasm_JS_Value_callAwait___redArg___boxed__const__1(void){
_start:
{
uint32_t v___x_3690_; lean_object* v___x_3691_; 
v___x_3690_ = 205;
v___x_3691_ = lean_box_uint32(v___x_3690_);
return v___x_3691_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___redArg(lean_object* v_inst_3692_, lean_object* v_f_3693_, lean_object* v_args_3694_, lean_object* v_inst_3695_, lean_object* v_this_3696_){
_start:
{
lean_object* v___f_3697_; lean_object* v___x_3698_; lean_object* v___x_3699_; uint8_t v___x_3700_; uint64_t v___x_3701_; uint64_t v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; uint8_t v___x_3707_; uint64_t v___x_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; 
lean_inc_ref(v_inst_3695_);
v___f_3697_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_callAwait___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3697_, 0, v_inst_3695_);
v___x_3698_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
v___x_3699_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3699_, 0, v_f_3693_);
lean_ctor_set(v___x_3699_, 1, v___x_3698_);
v___x_3700_ = 1;
v___x_3701_ = 0ULL;
v___x_3702_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_3695_, v___x_3700_, v___x_3701_);
v___x_3703_ = lean_box_uint64(v___x_3702_);
lean_inc_ref(v_args_3694_);
lean_inc(v_this_3696_);
lean_inc_ref(v___x_3699_);
v___x_3704_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_invokeRaw___boxed), 5, 4);
lean_closure_set(v___x_3704_, 0, v___x_3699_);
lean_closure_set(v___x_3704_, 1, v_this_3696_);
lean_closure_set(v___x_3704_, 2, v_args_3694_);
lean_closure_set(v___x_3704_, 3, v___x_3703_);
v___x_3705_ = lean_alloc_closure((void*)(l_instMonadEIO___aux__13___boxed), 6, 5);
lean_closure_set(v___x_3705_, 0, lean_box(0));
lean_closure_set(v___x_3705_, 1, lean_box(0));
lean_closure_set(v___x_3705_, 2, lean_box(0));
lean_closure_set(v___x_3705_, 3, v___x_3704_);
lean_closure_set(v___x_3705_, 4, v___f_3697_);
v___x_3706_ = ((lean_object*)(l_Lasm_JS_Value_call___redArg___closed__0));
v___x_3707_ = 0;
v___x_3708_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_3695_, v___x_3707_, v___x_3701_);
v___x_3709_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3709_, 0, v_args_3694_);
v___x_3710_ = lean_unsigned_to_nat(3u);
v___x_3711_ = lean_mk_empty_array_with_capacity(v___x_3710_);
v___x_3712_ = lean_array_push(v___x_3711_, v___x_3699_);
v___x_3713_ = lean_array_push(v___x_3712_, v_this_3696_);
v___x_3714_ = lean_array_push(v___x_3713_, v___x_3709_);
v___x_3715_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3715_, 0, v___x_3714_);
v___x_3716_ = l_Lasm_JS_Value_callAwait___redArg___boxed__const__1;
v___x_3717_ = lean_box_uint64(v___x_3708_);
v___x_3718_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___boxed), 8, 7);
lean_closure_set(v___x_3718_, 0, lean_box(0));
lean_closure_set(v___x_3718_, 1, v_inst_3695_);
lean_closure_set(v___x_3718_, 2, v___x_3706_);
lean_closure_set(v___x_3718_, 3, v___x_3716_);
lean_closure_set(v___x_3718_, 4, v___x_3717_);
lean_closure_set(v___x_3718_, 5, v___x_3715_);
lean_closure_set(v___x_3718_, 6, v___x_3698_);
v___x_3719_ = lean_apply_3(v_inst_3692_, lean_box(0), v___x_3705_, v___x_3718_);
return v___x_3719_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait(lean_object* v_m_3720_, lean_object* v_inst_3721_, lean_object* v_f_3722_, lean_object* v_args_3723_, lean_object* v_00_u03b1_3724_, lean_object* v_inst_3725_, lean_object* v_this_3726_){
_start:
{
lean_object* v___x_3727_; 
v___x_3727_ = l_Lasm_JS_Value_callAwait___redArg(v_inst_3721_, v_f_3722_, v_args_3723_, v_inst_3725_, v_this_3726_);
return v___x_3727_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___redArg(lean_object* v_o_3729_, lean_object* v_name_3730_, lean_object* v_args_3731_, lean_object* v_inst_3732_){
_start:
{
lean_object* v___x_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; uint8_t v___x_3737_; uint64_t v___x_3738_; uint64_t v___x_3739_; lean_object* v___x_3740_; 
v___x_3734_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
v___x_3735_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3735_, 0, v_o_3729_);
lean_ctor_set(v___x_3735_, 1, v___x_3734_);
lean_inc_ref(v_name_3730_);
v___x_3736_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3736_, 0, v_name_3730_);
v___x_3737_ = 0;
v___x_3738_ = 8ULL;
v___x_3739_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_3732_, v___x_3737_, v___x_3738_);
v___x_3740_ = l_Lasm_JS_Value_invokeRaw(v___x_3735_, v___x_3736_, v_args_3731_, v___x_3739_);
if (lean_obj_tag(v___x_3740_) == 0)
{
lean_object* v_a_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; 
v_a_3741_ = lean_ctor_get(v___x_3740_, 0);
lean_inc(v_a_3741_);
lean_dec_ref_known(v___x_3740_, 1);
v___x_3742_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___redArg___closed__0));
v___x_3743_ = lean_string_append(v___x_3742_, v_name_3730_);
lean_dec_ref(v_name_3730_);
v___x_3744_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_3732_, v___x_3743_, v_a_3741_);
lean_dec(v_a_3741_);
lean_dec_ref(v___x_3743_);
return v___x_3744_;
}
else
{
lean_object* v_a_3745_; lean_object* v___x_3747_; uint8_t v_isShared_3748_; uint8_t v_isSharedCheck_3752_; 
lean_dec_ref(v_inst_3732_);
lean_dec_ref(v_name_3730_);
v_a_3745_ = lean_ctor_get(v___x_3740_, 0);
v_isSharedCheck_3752_ = !lean_is_exclusive(v___x_3740_);
if (v_isSharedCheck_3752_ == 0)
{
v___x_3747_ = v___x_3740_;
v_isShared_3748_ = v_isSharedCheck_3752_;
goto v_resetjp_3746_;
}
else
{
lean_inc(v_a_3745_);
lean_dec(v___x_3740_);
v___x_3747_ = lean_box(0);
v_isShared_3748_ = v_isSharedCheck_3752_;
goto v_resetjp_3746_;
}
v_resetjp_3746_:
{
lean_object* v___x_3750_; 
if (v_isShared_3748_ == 0)
{
v___x_3750_ = v___x_3747_;
goto v_reusejp_3749_;
}
else
{
lean_object* v_reuseFailAlloc_3751_; 
v_reuseFailAlloc_3751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3751_, 0, v_a_3745_);
v___x_3750_ = v_reuseFailAlloc_3751_;
goto v_reusejp_3749_;
}
v_reusejp_3749_:
{
return v___x_3750_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___redArg___boxed(lean_object* v_o_3753_, lean_object* v_name_3754_, lean_object* v_args_3755_, lean_object* v_inst_3756_, lean_object* v_a_3757_){
_start:
{
lean_object* v_res_3758_; 
v_res_3758_ = l_Lasm_JS_Value_callMethod___redArg(v_o_3753_, v_name_3754_, v_args_3755_, v_inst_3756_);
return v_res_3758_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod(lean_object* v_o_3759_, lean_object* v_name_3760_, lean_object* v_args_3761_, lean_object* v_00_u03b1_3762_, lean_object* v_inst_3763_){
_start:
{
lean_object* v___x_3765_; 
v___x_3765_ = l_Lasm_JS_Value_callMethod___redArg(v_o_3759_, v_name_3760_, v_args_3761_, v_inst_3763_);
return v___x_3765_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___boxed(lean_object* v_o_3766_, lean_object* v_name_3767_, lean_object* v_args_3768_, lean_object* v_00_u03b1_3769_, lean_object* v_inst_3770_, lean_object* v_a_3771_){
_start:
{
lean_object* v_res_3772_; 
v_res_3772_ = l_Lasm_JS_Value_callMethod(v_o_3766_, v_name_3767_, v_args_3768_, v_00_u03b1_3769_, v_inst_3770_);
return v_res_3772_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___redArg___lam__0(lean_object* v_name_3773_, lean_object* v_inst_3774_, lean_object* v_____do__lift_3775_){
_start:
{
lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; 
v___x_3777_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___redArg___closed__0));
v___x_3778_ = lean_string_append(v___x_3777_, v_name_3773_);
v___x_3779_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_3774_, v___x_3778_, v_____do__lift_3775_);
lean_dec_ref(v___x_3778_);
return v___x_3779_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___redArg___lam__0___boxed(lean_object* v_name_3780_, lean_object* v_inst_3781_, lean_object* v_____do__lift_3782_, lean_object* v___y_3783_){
_start:
{
lean_object* v_res_3784_; 
v_res_3784_ = l_Lasm_JS_Value_callMethodAwait___redArg___lam__0(v_name_3780_, v_inst_3781_, v_____do__lift_3782_);
lean_dec_ref(v_____do__lift_3782_);
lean_dec_ref(v_name_3780_);
return v_res_3784_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___redArg(lean_object* v_inst_3785_, lean_object* v_o_3786_, lean_object* v_name_3787_, lean_object* v_args_3788_, lean_object* v_inst_3789_){
_start:
{
lean_object* v___f_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; uint8_t v___x_3794_; uint64_t v___x_3795_; uint64_t v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; uint8_t v___x_3802_; uint64_t v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; 
lean_inc_ref(v_inst_3789_);
lean_inc_ref_n(v_name_3787_, 2);
v___f_3790_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_callMethodAwait___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_3790_, 0, v_name_3787_);
lean_closure_set(v___f_3790_, 1, v_inst_3789_);
v___x_3791_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
v___x_3792_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3792_, 0, v_o_3786_);
lean_ctor_set(v___x_3792_, 1, v___x_3791_);
v___x_3793_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3793_, 0, v_name_3787_);
v___x_3794_ = 1;
v___x_3795_ = 8ULL;
v___x_3796_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_3789_, v___x_3794_, v___x_3795_);
v___x_3797_ = lean_box_uint64(v___x_3796_);
lean_inc_ref(v_args_3788_);
lean_inc_ref(v___x_3793_);
lean_inc_ref(v___x_3792_);
v___x_3798_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_invokeRaw___boxed), 5, 4);
lean_closure_set(v___x_3798_, 0, v___x_3792_);
lean_closure_set(v___x_3798_, 1, v___x_3793_);
lean_closure_set(v___x_3798_, 2, v_args_3788_);
lean_closure_set(v___x_3798_, 3, v___x_3797_);
v___x_3799_ = lean_alloc_closure((void*)(l_instMonadEIO___aux__13___boxed), 6, 5);
lean_closure_set(v___x_3799_, 0, lean_box(0));
lean_closure_set(v___x_3799_, 1, lean_box(0));
lean_closure_set(v___x_3799_, 2, lean_box(0));
lean_closure_set(v___x_3799_, 3, v___x_3798_);
lean_closure_set(v___x_3799_, 4, v___f_3790_);
v___x_3800_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___redArg___closed__0));
v___x_3801_ = lean_string_append(v___x_3800_, v_name_3787_);
lean_dec_ref(v_name_3787_);
v___x_3802_ = 0;
v___x_3803_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_3789_, v___x_3802_, v___x_3795_);
v___x_3804_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3804_, 0, v_args_3788_);
v___x_3805_ = lean_unsigned_to_nat(3u);
v___x_3806_ = lean_mk_empty_array_with_capacity(v___x_3805_);
v___x_3807_ = lean_array_push(v___x_3806_, v___x_3792_);
v___x_3808_ = lean_array_push(v___x_3807_, v___x_3793_);
v___x_3809_ = lean_array_push(v___x_3808_, v___x_3804_);
v___x_3810_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3810_, 0, v___x_3809_);
v___x_3811_ = l_Lasm_JS_Value_callAwait___redArg___boxed__const__1;
v___x_3812_ = lean_box_uint64(v___x_3803_);
v___x_3813_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___boxed), 8, 7);
lean_closure_set(v___x_3813_, 0, lean_box(0));
lean_closure_set(v___x_3813_, 1, v_inst_3789_);
lean_closure_set(v___x_3813_, 2, v___x_3801_);
lean_closure_set(v___x_3813_, 3, v___x_3811_);
lean_closure_set(v___x_3813_, 4, v___x_3812_);
lean_closure_set(v___x_3813_, 5, v___x_3810_);
lean_closure_set(v___x_3813_, 6, v___x_3791_);
v___x_3814_ = lean_apply_3(v_inst_3785_, lean_box(0), v___x_3799_, v___x_3813_);
return v___x_3814_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait(lean_object* v_m_3815_, lean_object* v_inst_3816_, lean_object* v_o_3817_, lean_object* v_name_3818_, lean_object* v_args_3819_, lean_object* v_00_u03b1_3820_, lean_object* v_inst_3821_){
_start:
{
lean_object* v___x_3822_; 
v___x_3822_ = l_Lasm_JS_Value_callMethodAwait___redArg(v_inst_3816_, v_o_3817_, v_name_3818_, v_args_3819_, v_inst_3821_);
return v___x_3822_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___redArg(lean_object* v_c_3824_, lean_object* v_args_3825_, lean_object* v_inst_3826_){
_start:
{
lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; uint8_t v___x_3831_; uint64_t v___x_3832_; uint64_t v___x_3833_; lean_object* v___x_3834_; 
v___x_3828_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
v___x_3829_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3829_, 0, v_c_3824_);
lean_ctor_set(v___x_3829_, 1, v___x_3828_);
v___x_3830_ = lean_box(0);
v___x_3831_ = 0;
v___x_3832_ = 4ULL;
v___x_3833_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_3826_, v___x_3831_, v___x_3832_);
v___x_3834_ = l_Lasm_JS_Value_invokeRaw(v___x_3829_, v___x_3830_, v_args_3825_, v___x_3833_);
if (lean_obj_tag(v___x_3834_) == 0)
{
lean_object* v_a_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; 
v_a_3835_ = lean_ctor_get(v___x_3834_, 0);
lean_inc(v_a_3835_);
lean_dec_ref_known(v___x_3834_, 1);
v___x_3836_ = ((lean_object*)(l_Lasm_JS_Value_new___redArg___closed__0));
v___x_3837_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_3826_, v___x_3836_, v_a_3835_);
lean_dec(v_a_3835_);
return v___x_3837_;
}
else
{
lean_object* v_a_3838_; lean_object* v___x_3840_; uint8_t v_isShared_3841_; uint8_t v_isSharedCheck_3845_; 
lean_dec_ref(v_inst_3826_);
v_a_3838_ = lean_ctor_get(v___x_3834_, 0);
v_isSharedCheck_3845_ = !lean_is_exclusive(v___x_3834_);
if (v_isSharedCheck_3845_ == 0)
{
v___x_3840_ = v___x_3834_;
v_isShared_3841_ = v_isSharedCheck_3845_;
goto v_resetjp_3839_;
}
else
{
lean_inc(v_a_3838_);
lean_dec(v___x_3834_);
v___x_3840_ = lean_box(0);
v_isShared_3841_ = v_isSharedCheck_3845_;
goto v_resetjp_3839_;
}
v_resetjp_3839_:
{
lean_object* v___x_3843_; 
if (v_isShared_3841_ == 0)
{
v___x_3843_ = v___x_3840_;
goto v_reusejp_3842_;
}
else
{
lean_object* v_reuseFailAlloc_3844_; 
v_reuseFailAlloc_3844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3844_, 0, v_a_3838_);
v___x_3843_ = v_reuseFailAlloc_3844_;
goto v_reusejp_3842_;
}
v_reusejp_3842_:
{
return v___x_3843_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___redArg___boxed(lean_object* v_c_3846_, lean_object* v_args_3847_, lean_object* v_inst_3848_, lean_object* v_a_3849_){
_start:
{
lean_object* v_res_3850_; 
v_res_3850_ = l_Lasm_JS_Value_new___redArg(v_c_3846_, v_args_3847_, v_inst_3848_);
return v_res_3850_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new(lean_object* v_c_3851_, lean_object* v_args_3852_, lean_object* v_00_u03b1_3853_, lean_object* v_inst_3854_){
_start:
{
lean_object* v___x_3856_; 
v___x_3856_ = l_Lasm_JS_Value_new___redArg(v_c_3851_, v_args_3852_, v_inst_3854_);
return v___x_3856_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___boxed(lean_object* v_c_3857_, lean_object* v_args_3858_, lean_object* v_00_u03b1_3859_, lean_object* v_inst_3860_, lean_object* v_a_3861_){
_start:
{
lean_object* v_res_3862_; 
v_res_3862_ = l_Lasm_JS_Value_new(v_c_3857_, v_args_3858_, v_00_u03b1_3859_, v_inst_3860_);
return v_res_3862_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_toTask___redArg___lam__0(lean_object* v_inst_3864_, lean_object* v_a_3865_){
_start:
{
lean_object* v_a_3868_; 
if (lean_obj_tag(v_a_3865_) == 0)
{
lean_object* v_a_3870_; lean_object* v___x_3871_; 
lean_dec_ref(v_inst_3864_);
v_a_3870_ = lean_ctor_get(v_a_3865_, 0);
lean_inc(v_a_3870_);
lean_dec_ref_known(v_a_3865_, 1);
v___x_3871_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3871_, 0, v_a_3870_);
v_a_3868_ = v___x_3871_;
goto v___jp_3867_;
}
else
{
lean_object* v_a_3872_; lean_object* v___x_3874_; uint8_t v_isShared_3875_; uint8_t v_isSharedCheck_3886_; 
v_a_3872_ = lean_ctor_get(v_a_3865_, 0);
v_isSharedCheck_3886_ = !lean_is_exclusive(v_a_3865_);
if (v_isSharedCheck_3886_ == 0)
{
v___x_3874_ = v_a_3865_;
v_isShared_3875_ = v_isSharedCheck_3886_;
goto v_resetjp_3873_;
}
else
{
lean_inc(v_a_3872_);
lean_dec(v_a_3865_);
v___x_3874_ = lean_box(0);
v_isShared_3875_ = v_isSharedCheck_3886_;
goto v_resetjp_3873_;
}
v_resetjp_3873_:
{
lean_object* v___x_3876_; 
v___x_3876_ = l_Lasm_JS_Wire_decode(v_a_3872_);
lean_dec(v_a_3872_);
if (lean_obj_tag(v___x_3876_) == 0)
{
lean_object* v_a_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; 
v_a_3877_ = lean_ctor_get(v___x_3876_, 0);
lean_inc(v_a_3877_);
lean_dec_ref_known(v___x_3876_, 1);
v___x_3878_ = ((lean_object*)(l_Lasm_JS_Value_toTask___redArg___lam__0___closed__0));
v___x_3879_ = l_Lasm_JS_decodeAs___redArg(v_inst_3864_, v___x_3878_, v_a_3877_);
if (lean_obj_tag(v___x_3879_) == 0)
{
lean_object* v_a_3880_; lean_object* v___x_3882_; 
v_a_3880_ = lean_ctor_get(v___x_3879_, 0);
lean_inc(v_a_3880_);
lean_dec_ref_known(v___x_3879_, 1);
if (v_isShared_3875_ == 0)
{
lean_ctor_set(v___x_3874_, 0, v_a_3880_);
v___x_3882_ = v___x_3874_;
goto v_reusejp_3881_;
}
else
{
lean_object* v_reuseFailAlloc_3883_; 
v_reuseFailAlloc_3883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3883_, 0, v_a_3880_);
v___x_3882_ = v_reuseFailAlloc_3883_;
goto v_reusejp_3881_;
}
v_reusejp_3881_:
{
return v___x_3882_;
}
}
else
{
lean_object* v_a_3884_; 
lean_del_object(v___x_3874_);
v_a_3884_ = lean_ctor_get(v___x_3879_, 0);
lean_inc(v_a_3884_);
lean_dec_ref_known(v___x_3879_, 1);
v_a_3868_ = v_a_3884_;
goto v___jp_3867_;
}
}
else
{
lean_object* v_a_3885_; 
lean_del_object(v___x_3874_);
lean_dec_ref(v_inst_3864_);
v_a_3885_ = lean_ctor_get(v___x_3876_, 0);
lean_inc(v_a_3885_);
lean_dec_ref_known(v___x_3876_, 1);
v_a_3868_ = v_a_3885_;
goto v___jp_3867_;
}
}
}
v___jp_3867_:
{
lean_object* v___x_3869_; 
v___x_3869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3869_, 0, v_a_3868_);
return v___x_3869_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_toTask___redArg___lam__0___boxed(lean_object* v_inst_3887_, lean_object* v_a_3888_, lean_object* v___y_3889_){
_start:
{
lean_object* v_res_3890_; 
v_res_3890_ = l_Lasm_JS_Value_toTask___redArg___lam__0(v_inst_3887_, v_a_3888_);
return v_res_3890_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_toTask___redArg(lean_object* v_v_3891_, lean_object* v_inst_3892_){
_start:
{
lean_object* v___f_3894_; lean_object* v___x_3895_; 
v___f_3894_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_toTask___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3894_, 0, v_inst_3892_);
v___x_3895_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3895_) == 0)
{
lean_object* v___x_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; 
lean_dec_ref_known(v___x_3895_, 1);
v___x_3896_ = lean_io_promise_new();
v___x_3897_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
v___x_3898_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3898_, 0, v_v_3891_);
lean_ctor_set(v___x_3898_, 1, v___x_3897_);
v___x_3899_ = l_Lasm_JS_Wire_encode(v___x_3898_);
v___x_3900_ = lasm_js_await_into(v___x_3896_, v___x_3899_, v___x_3898_);
lean_dec_ref_known(v___x_3898_, 2);
lean_dec_ref(v___x_3899_);
if (lean_obj_tag(v___x_3900_) == 0)
{
lean_object* v___x_3902_; uint8_t v_isShared_3903_; uint8_t v_isSharedCheck_3911_; 
v_isSharedCheck_3911_ = !lean_is_exclusive(v___x_3900_);
if (v_isSharedCheck_3911_ == 0)
{
lean_object* v_unused_3912_; 
v_unused_3912_ = lean_ctor_get(v___x_3900_, 0);
lean_dec(v_unused_3912_);
v___x_3902_ = v___x_3900_;
v_isShared_3903_ = v_isSharedCheck_3911_;
goto v_resetjp_3901_;
}
else
{
lean_dec(v___x_3900_);
v___x_3902_ = lean_box(0);
v_isShared_3903_ = v_isSharedCheck_3911_;
goto v_resetjp_3901_;
}
v_resetjp_3901_:
{
lean_object* v___x_3904_; lean_object* v___x_3905_; uint8_t v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3909_; 
v___x_3904_ = l_IO_Promise_result_x21___redArg(v___x_3896_);
lean_dec(v___x_3896_);
v___x_3905_ = lean_unsigned_to_nat(0u);
v___x_3906_ = 0;
v___x_3907_ = lean_io_map_task(v___f_3894_, v___x_3904_, v___x_3905_, v___x_3906_);
if (v_isShared_3903_ == 0)
{
lean_ctor_set(v___x_3902_, 0, v___x_3907_);
v___x_3909_ = v___x_3902_;
goto v_reusejp_3908_;
}
else
{
lean_object* v_reuseFailAlloc_3910_; 
v_reuseFailAlloc_3910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3910_, 0, v___x_3907_);
v___x_3909_ = v_reuseFailAlloc_3910_;
goto v_reusejp_3908_;
}
v_reusejp_3908_:
{
return v___x_3909_;
}
}
}
else
{
lean_object* v_a_3913_; lean_object* v___x_3915_; uint8_t v_isShared_3916_; uint8_t v_isSharedCheck_3920_; 
lean_dec(v___x_3896_);
lean_dec_ref(v___f_3894_);
v_a_3913_ = lean_ctor_get(v___x_3900_, 0);
v_isSharedCheck_3920_ = !lean_is_exclusive(v___x_3900_);
if (v_isSharedCheck_3920_ == 0)
{
v___x_3915_ = v___x_3900_;
v_isShared_3916_ = v_isSharedCheck_3920_;
goto v_resetjp_3914_;
}
else
{
lean_inc(v_a_3913_);
lean_dec(v___x_3900_);
v___x_3915_ = lean_box(0);
v_isShared_3916_ = v_isSharedCheck_3920_;
goto v_resetjp_3914_;
}
v_resetjp_3914_:
{
lean_object* v___x_3918_; 
if (v_isShared_3916_ == 0)
{
v___x_3918_ = v___x_3915_;
goto v_reusejp_3917_;
}
else
{
lean_object* v_reuseFailAlloc_3919_; 
v_reuseFailAlloc_3919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3919_, 0, v_a_3913_);
v___x_3918_ = v_reuseFailAlloc_3919_;
goto v_reusejp_3917_;
}
v_reusejp_3917_:
{
return v___x_3918_;
}
}
}
}
else
{
lean_object* v_a_3921_; lean_object* v___x_3923_; uint8_t v_isShared_3924_; uint8_t v_isSharedCheck_3928_; 
lean_dec_ref(v___f_3894_);
lean_dec(v_v_3891_);
v_a_3921_ = lean_ctor_get(v___x_3895_, 0);
v_isSharedCheck_3928_ = !lean_is_exclusive(v___x_3895_);
if (v_isSharedCheck_3928_ == 0)
{
v___x_3923_ = v___x_3895_;
v_isShared_3924_ = v_isSharedCheck_3928_;
goto v_resetjp_3922_;
}
else
{
lean_inc(v_a_3921_);
lean_dec(v___x_3895_);
v___x_3923_ = lean_box(0);
v_isShared_3924_ = v_isSharedCheck_3928_;
goto v_resetjp_3922_;
}
v_resetjp_3922_:
{
lean_object* v___x_3926_; 
if (v_isShared_3924_ == 0)
{
v___x_3926_ = v___x_3923_;
goto v_reusejp_3925_;
}
else
{
lean_object* v_reuseFailAlloc_3927_; 
v_reuseFailAlloc_3927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3927_, 0, v_a_3921_);
v___x_3926_ = v_reuseFailAlloc_3927_;
goto v_reusejp_3925_;
}
v_reusejp_3925_:
{
return v___x_3926_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_toTask___redArg___boxed(lean_object* v_v_3929_, lean_object* v_inst_3930_, lean_object* v_a_3931_){
_start:
{
lean_object* v_res_3932_; 
v_res_3932_ = l_Lasm_JS_Value_toTask___redArg(v_v_3929_, v_inst_3930_);
return v_res_3932_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_toTask(lean_object* v_v_3933_, lean_object* v_00_u03b1_3934_, lean_object* v_inst_3935_){
_start:
{
lean_object* v___x_3937_; 
v___x_3937_ = l_Lasm_JS_Value_toTask___redArg(v_v_3933_, v_inst_3935_);
return v___x_3937_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_toTask___boxed(lean_object* v_v_3938_, lean_object* v_00_u03b1_3939_, lean_object* v_inst_3940_, lean_object* v_a_3941_){
_start:
{
lean_object* v_res_3942_; 
v_res_3942_ = l_Lasm_JS_Value_toTask(v_v_3938_, v_00_u03b1_3939_, v_inst_3940_);
return v_res_3942_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__0(){
_start:
{
lean_object* v_val_3945_; lean_object* v___x_3947_; 
v___x_3947_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3947_) == 0)
{
lean_object* v_a_3948_; lean_object* v___x_3950_; uint8_t v_isShared_3951_; uint8_t v_isSharedCheck_3955_; 
v_a_3948_ = lean_ctor_get(v___x_3947_, 0);
v_isSharedCheck_3955_ = !lean_is_exclusive(v___x_3947_);
if (v_isSharedCheck_3955_ == 0)
{
v___x_3950_ = v___x_3947_;
v_isShared_3951_ = v_isSharedCheck_3955_;
goto v_resetjp_3949_;
}
else
{
lean_inc(v_a_3948_);
lean_dec(v___x_3947_);
v___x_3950_ = lean_box(0);
v_isShared_3951_ = v_isSharedCheck_3955_;
goto v_resetjp_3949_;
}
v_resetjp_3949_:
{
lean_object* v___x_3953_; 
if (v_isShared_3951_ == 0)
{
lean_ctor_set_tag(v___x_3950_, 1);
v___x_3953_ = v___x_3950_;
goto v_reusejp_3952_;
}
else
{
lean_object* v_reuseFailAlloc_3954_; 
v_reuseFailAlloc_3954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3954_, 0, v_a_3948_);
v___x_3953_ = v_reuseFailAlloc_3954_;
goto v_reusejp_3952_;
}
v_reusejp_3952_:
{
v_val_3945_ = v___x_3953_;
goto v___jp_3944_;
}
}
}
else
{
lean_object* v_a_3956_; lean_object* v___x_3958_; uint8_t v_isShared_3959_; uint8_t v_isSharedCheck_3963_; 
v_a_3956_ = lean_ctor_get(v___x_3947_, 0);
v_isSharedCheck_3963_ = !lean_is_exclusive(v___x_3947_);
if (v_isSharedCheck_3963_ == 0)
{
v___x_3958_ = v___x_3947_;
v_isShared_3959_ = v_isSharedCheck_3963_;
goto v_resetjp_3957_;
}
else
{
lean_inc(v_a_3956_);
lean_dec(v___x_3947_);
v___x_3958_ = lean_box(0);
v_isShared_3959_ = v_isSharedCheck_3963_;
goto v_resetjp_3957_;
}
v_resetjp_3957_:
{
lean_object* v___x_3961_; 
if (v_isShared_3959_ == 0)
{
lean_ctor_set_tag(v___x_3958_, 0);
v___x_3961_ = v___x_3958_;
goto v_reusejp_3960_;
}
else
{
lean_object* v_reuseFailAlloc_3962_; 
v_reuseFailAlloc_3962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3962_, 0, v_a_3956_);
v___x_3961_ = v_reuseFailAlloc_3962_;
goto v_reusejp_3960_;
}
v_reusejp_3960_:
{
v_val_3945_ = v___x_3961_;
goto v___jp_3944_;
}
}
}
v___jp_3944_:
{
lean_object* v___x_3946_; 
v___x_3946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3946_, 0, v_val_3945_);
return v___x_3946_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__0___boxed(lean_object* v___y_3964_){
_start:
{
lean_object* v_res_3965_; 
v_res_3965_ = l_Lasm_JS_Value_await___redArg___lam__0();
return v_res_3965_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__1(lean_object* v_inst_3966_, lean_object* v_x_3967_){
_start:
{
lean_object* v_val_3970_; 
if (lean_obj_tag(v_x_3967_) == 0)
{
lean_object* v_a_3972_; lean_object* v___x_3974_; uint8_t v_isShared_3975_; uint8_t v_isSharedCheck_3980_; 
lean_dec_ref(v_inst_3966_);
v_a_3972_ = lean_ctor_get(v_x_3967_, 0);
v_isSharedCheck_3980_ = !lean_is_exclusive(v_x_3967_);
if (v_isSharedCheck_3980_ == 0)
{
v___x_3974_ = v_x_3967_;
v_isShared_3975_ = v_isSharedCheck_3980_;
goto v_resetjp_3973_;
}
else
{
lean_inc(v_a_3972_);
lean_dec(v_x_3967_);
v___x_3974_ = lean_box(0);
v_isShared_3975_ = v_isSharedCheck_3980_;
goto v_resetjp_3973_;
}
v_resetjp_3973_:
{
lean_object* v___x_3977_; 
if (v_isShared_3975_ == 0)
{
v___x_3977_ = v___x_3974_;
goto v_reusejp_3976_;
}
else
{
lean_object* v_reuseFailAlloc_3979_; 
v_reuseFailAlloc_3979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3979_, 0, v_a_3972_);
v___x_3977_ = v_reuseFailAlloc_3979_;
goto v_reusejp_3976_;
}
v_reusejp_3976_:
{
lean_object* v___x_3978_; 
v___x_3978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3978_, 0, v___x_3977_);
return v___x_3978_;
}
}
}
else
{
lean_object* v_a_3981_; lean_object* v___x_3983_; uint8_t v_isShared_3984_; uint8_t v_isSharedCheck_3995_; 
v_a_3981_ = lean_ctor_get(v_x_3967_, 0);
v_isSharedCheck_3995_ = !lean_is_exclusive(v_x_3967_);
if (v_isSharedCheck_3995_ == 0)
{
v___x_3983_ = v_x_3967_;
v_isShared_3984_ = v_isSharedCheck_3995_;
goto v_resetjp_3982_;
}
else
{
lean_inc(v_a_3981_);
lean_dec(v_x_3967_);
v___x_3983_ = lean_box(0);
v_isShared_3984_ = v_isSharedCheck_3995_;
goto v_resetjp_3982_;
}
v_resetjp_3982_:
{
lean_object* v___x_3985_; lean_object* v___x_3986_; 
v___x_3985_ = ((lean_object*)(l_Lasm_JS_Value_toTask___redArg___lam__0___closed__0));
v___x_3986_ = l_Lasm_JS_decodeAs___redArg(v_inst_3966_, v___x_3985_, v_a_3981_);
if (lean_obj_tag(v___x_3986_) == 0)
{
lean_object* v_a_3987_; lean_object* v___x_3989_; 
v_a_3987_ = lean_ctor_get(v___x_3986_, 0);
lean_inc(v_a_3987_);
lean_dec_ref_known(v___x_3986_, 1);
if (v_isShared_3984_ == 0)
{
lean_ctor_set(v___x_3983_, 0, v_a_3987_);
v___x_3989_ = v___x_3983_;
goto v_reusejp_3988_;
}
else
{
lean_object* v_reuseFailAlloc_3990_; 
v_reuseFailAlloc_3990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3990_, 0, v_a_3987_);
v___x_3989_ = v_reuseFailAlloc_3990_;
goto v_reusejp_3988_;
}
v_reusejp_3988_:
{
v_val_3970_ = v___x_3989_;
goto v___jp_3969_;
}
}
else
{
lean_object* v_a_3991_; lean_object* v___x_3993_; 
v_a_3991_ = lean_ctor_get(v___x_3986_, 0);
lean_inc(v_a_3991_);
lean_dec_ref_known(v___x_3986_, 1);
if (v_isShared_3984_ == 0)
{
lean_ctor_set_tag(v___x_3983_, 0);
lean_ctor_set(v___x_3983_, 0, v_a_3991_);
v___x_3993_ = v___x_3983_;
goto v_reusejp_3992_;
}
else
{
lean_object* v_reuseFailAlloc_3994_; 
v_reuseFailAlloc_3994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3994_, 0, v_a_3991_);
v___x_3993_ = v_reuseFailAlloc_3994_;
goto v_reusejp_3992_;
}
v_reusejp_3992_:
{
v_val_3970_ = v___x_3993_;
goto v___jp_3969_;
}
}
}
}
v___jp_3969_:
{
lean_object* v___x_3971_; 
v___x_3971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3971_, 0, v_val_3970_);
return v___x_3971_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__1___boxed(lean_object* v_inst_3996_, lean_object* v_x_3997_, lean_object* v___y_3998_){
_start:
{
lean_object* v_res_3999_; 
v_res_3999_ = l_Lasm_JS_Value_await___redArg___lam__1(v_inst_3996_, v_x_3997_);
return v_res_3999_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__2(lean_object* v___f_4000_, lean_object* v_x_4001_){
_start:
{
if (lean_obj_tag(v_x_4001_) == 0)
{
lean_object* v_a_4003_; lean_object* v___x_4005_; uint8_t v_isShared_4006_; uint8_t v_isSharedCheck_4011_; 
lean_dec_ref(v___f_4000_);
v_a_4003_ = lean_ctor_get(v_x_4001_, 0);
v_isSharedCheck_4011_ = !lean_is_exclusive(v_x_4001_);
if (v_isSharedCheck_4011_ == 0)
{
v___x_4005_ = v_x_4001_;
v_isShared_4006_ = v_isSharedCheck_4011_;
goto v_resetjp_4004_;
}
else
{
lean_inc(v_a_4003_);
lean_dec(v_x_4001_);
v___x_4005_ = lean_box(0);
v_isShared_4006_ = v_isSharedCheck_4011_;
goto v_resetjp_4004_;
}
v_resetjp_4004_:
{
lean_object* v___x_4008_; 
if (v_isShared_4006_ == 0)
{
v___x_4008_ = v___x_4005_;
goto v_reusejp_4007_;
}
else
{
lean_object* v_reuseFailAlloc_4010_; 
v_reuseFailAlloc_4010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4010_, 0, v_a_4003_);
v___x_4008_ = v_reuseFailAlloc_4010_;
goto v_reusejp_4007_;
}
v_reusejp_4007_:
{
lean_object* v___x_4009_; 
v___x_4009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4009_, 0, v___x_4008_);
return v___x_4009_;
}
}
}
else
{
lean_object* v_a_4012_; lean_object* v___x_4014_; uint8_t v_isShared_4015_; uint8_t v_isSharedCheck_4031_; 
v_a_4012_ = lean_ctor_get(v_x_4001_, 0);
v_isSharedCheck_4031_ = !lean_is_exclusive(v_x_4001_);
if (v_isSharedCheck_4031_ == 0)
{
v___x_4014_ = v_x_4001_;
v_isShared_4015_ = v_isSharedCheck_4031_;
goto v_resetjp_4013_;
}
else
{
lean_inc(v_a_4012_);
lean_dec(v_x_4001_);
v___x_4014_ = lean_box(0);
v_isShared_4015_ = v_isSharedCheck_4031_;
goto v_resetjp_4013_;
}
v_resetjp_4013_:
{
lean_object* v___x_4016_; uint8_t v___x_4017_; lean_object* v_val_4019_; lean_object* v___x_4022_; 
v___x_4016_ = lean_unsigned_to_nat(0u);
v___x_4017_ = 0;
v___x_4022_ = l_Lasm_JS_Wire_decode(v_a_4012_);
lean_dec(v_a_4012_);
if (lean_obj_tag(v___x_4022_) == 0)
{
lean_object* v_a_4023_; lean_object* v___x_4025_; 
v_a_4023_ = lean_ctor_get(v___x_4022_, 0);
lean_inc(v_a_4023_);
lean_dec_ref_known(v___x_4022_, 1);
if (v_isShared_4015_ == 0)
{
lean_ctor_set(v___x_4014_, 0, v_a_4023_);
v___x_4025_ = v___x_4014_;
goto v_reusejp_4024_;
}
else
{
lean_object* v_reuseFailAlloc_4026_; 
v_reuseFailAlloc_4026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4026_, 0, v_a_4023_);
v___x_4025_ = v_reuseFailAlloc_4026_;
goto v_reusejp_4024_;
}
v_reusejp_4024_:
{
v_val_4019_ = v___x_4025_;
goto v___jp_4018_;
}
}
else
{
lean_object* v_a_4027_; lean_object* v___x_4029_; 
v_a_4027_ = lean_ctor_get(v___x_4022_, 0);
lean_inc(v_a_4027_);
lean_dec_ref_known(v___x_4022_, 1);
if (v_isShared_4015_ == 0)
{
lean_ctor_set_tag(v___x_4014_, 0);
lean_ctor_set(v___x_4014_, 0, v_a_4027_);
v___x_4029_ = v___x_4014_;
goto v_reusejp_4028_;
}
else
{
lean_object* v_reuseFailAlloc_4030_; 
v_reuseFailAlloc_4030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4030_, 0, v_a_4027_);
v___x_4029_ = v_reuseFailAlloc_4030_;
goto v_reusejp_4028_;
}
v_reusejp_4028_:
{
v_val_4019_ = v___x_4029_;
goto v___jp_4018_;
}
}
v___jp_4018_:
{
lean_object* v___x_4020_; lean_object* v___x_4021_; 
v___x_4020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4020_, 0, v_val_4019_);
v___x_4021_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4016_, v___x_4017_, v___x_4020_, v___f_4000_);
return v___x_4021_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__2___boxed(lean_object* v___f_4032_, lean_object* v_x_4033_, lean_object* v___y_4034_){
_start:
{
lean_object* v_res_4035_; 
v_res_4035_ = l_Lasm_JS_Value_await___redArg___lam__2(v___f_4032_, v_x_4033_);
return v_res_4035_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__3(lean_object* v_a_4036_, lean_object* v___f_4037_, lean_object* v_x_4038_){
_start:
{
if (lean_obj_tag(v_x_4038_) == 0)
{
lean_object* v_a_4040_; lean_object* v___x_4042_; uint8_t v_isShared_4043_; uint8_t v_isSharedCheck_4048_; 
lean_dec_ref(v___f_4037_);
v_a_4040_ = lean_ctor_get(v_x_4038_, 0);
v_isSharedCheck_4048_ = !lean_is_exclusive(v_x_4038_);
if (v_isSharedCheck_4048_ == 0)
{
v___x_4042_ = v_x_4038_;
v_isShared_4043_ = v_isSharedCheck_4048_;
goto v_resetjp_4041_;
}
else
{
lean_inc(v_a_4040_);
lean_dec(v_x_4038_);
v___x_4042_ = lean_box(0);
v_isShared_4043_ = v_isSharedCheck_4048_;
goto v_resetjp_4041_;
}
v_resetjp_4041_:
{
lean_object* v___x_4045_; 
if (v_isShared_4043_ == 0)
{
v___x_4045_ = v___x_4042_;
goto v_reusejp_4044_;
}
else
{
lean_object* v_reuseFailAlloc_4047_; 
v_reuseFailAlloc_4047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4047_, 0, v_a_4040_);
v___x_4045_ = v_reuseFailAlloc_4047_;
goto v_reusejp_4044_;
}
v_reusejp_4044_:
{
lean_object* v___x_4046_; 
v___x_4046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4046_, 0, v___x_4045_);
return v___x_4046_;
}
}
}
else
{
lean_object* v___x_4049_; uint8_t v___x_4050_; lean_object* v___x_4051_; lean_object* v___x_4052_; 
lean_dec_ref_known(v_x_4038_, 1);
v___x_4049_ = lean_unsigned_to_nat(0u);
v___x_4050_ = 0;
v___x_4051_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_4036_);
v___x_4052_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4049_, v___x_4050_, v___x_4051_, v___f_4037_);
return v___x_4052_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__3___boxed(lean_object* v_a_4053_, lean_object* v___f_4054_, lean_object* v_x_4055_, lean_object* v___y_4056_){
_start:
{
lean_object* v_res_4057_; 
v_res_4057_ = l_Lasm_JS_Value_await___redArg___lam__3(v_a_4053_, v___f_4054_, v_x_4055_);
lean_dec(v_a_4053_);
return v_res_4057_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__4(lean_object* v___f_4058_, lean_object* v_v_4059_, lean_object* v_x_4060_){
_start:
{
if (lean_obj_tag(v_x_4060_) == 0)
{
lean_object* v_a_4062_; lean_object* v___x_4064_; uint8_t v_isShared_4065_; uint8_t v_isSharedCheck_4070_; 
lean_dec(v_v_4059_);
lean_dec_ref(v___f_4058_);
v_a_4062_ = lean_ctor_get(v_x_4060_, 0);
v_isSharedCheck_4070_ = !lean_is_exclusive(v_x_4060_);
if (v_isSharedCheck_4070_ == 0)
{
v___x_4064_ = v_x_4060_;
v_isShared_4065_ = v_isSharedCheck_4070_;
goto v_resetjp_4063_;
}
else
{
lean_inc(v_a_4062_);
lean_dec(v_x_4060_);
v___x_4064_ = lean_box(0);
v_isShared_4065_ = v_isSharedCheck_4070_;
goto v_resetjp_4063_;
}
v_resetjp_4063_:
{
lean_object* v___x_4067_; 
if (v_isShared_4065_ == 0)
{
v___x_4067_ = v___x_4064_;
goto v_reusejp_4066_;
}
else
{
lean_object* v_reuseFailAlloc_4069_; 
v_reuseFailAlloc_4069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4069_, 0, v_a_4062_);
v___x_4067_ = v_reuseFailAlloc_4069_;
goto v_reusejp_4066_;
}
v_reusejp_4066_:
{
lean_object* v___x_4068_; 
v___x_4068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4068_, 0, v___x_4067_);
return v___x_4068_;
}
}
}
else
{
lean_object* v_a_4071_; lean_object* v___x_4073_; uint8_t v_isShared_4074_; uint8_t v_isSharedCheck_4094_; 
v_a_4071_ = lean_ctor_get(v_x_4060_, 0);
v_isSharedCheck_4094_ = !lean_is_exclusive(v_x_4060_);
if (v_isSharedCheck_4094_ == 0)
{
v___x_4073_ = v_x_4060_;
v_isShared_4074_ = v_isSharedCheck_4094_;
goto v_resetjp_4072_;
}
else
{
lean_inc(v_a_4071_);
lean_dec(v_x_4060_);
v___x_4073_ = lean_box(0);
v_isShared_4074_ = v_isSharedCheck_4094_;
goto v_resetjp_4072_;
}
v_resetjp_4072_:
{
lean_object* v___f_4075_; lean_object* v___x_4076_; lean_object* v___x_4077_; lean_object* v___x_4078_; lean_object* v___x_4079_; uint8_t v___x_4080_; lean_object* v_val_4082_; lean_object* v___x_4085_; 
lean_inc(v_a_4071_);
v___f_4075_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_4075_, 0, v_a_4071_);
lean_closure_set(v___f_4075_, 1, v___f_4058_);
v___x_4076_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
v___x_4077_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4077_, 0, v_v_4059_);
lean_ctor_set(v___x_4077_, 1, v___x_4076_);
v___x_4078_ = l_Lasm_JS_Wire_encode(v___x_4077_);
v___x_4079_ = lean_unsigned_to_nat(0u);
v___x_4080_ = 0;
v___x_4085_ = lasm_js_await_into(v_a_4071_, v___x_4078_, v___x_4077_);
lean_dec_ref_known(v___x_4077_, 2);
lean_dec_ref(v___x_4078_);
lean_dec(v_a_4071_);
if (lean_obj_tag(v___x_4085_) == 0)
{
lean_object* v_a_4086_; lean_object* v___x_4088_; 
v_a_4086_ = lean_ctor_get(v___x_4085_, 0);
lean_inc(v_a_4086_);
lean_dec_ref_known(v___x_4085_, 1);
if (v_isShared_4074_ == 0)
{
lean_ctor_set(v___x_4073_, 0, v_a_4086_);
v___x_4088_ = v___x_4073_;
goto v_reusejp_4087_;
}
else
{
lean_object* v_reuseFailAlloc_4089_; 
v_reuseFailAlloc_4089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4089_, 0, v_a_4086_);
v___x_4088_ = v_reuseFailAlloc_4089_;
goto v_reusejp_4087_;
}
v_reusejp_4087_:
{
v_val_4082_ = v___x_4088_;
goto v___jp_4081_;
}
}
else
{
lean_object* v_a_4090_; lean_object* v___x_4092_; 
v_a_4090_ = lean_ctor_get(v___x_4085_, 0);
lean_inc(v_a_4090_);
lean_dec_ref_known(v___x_4085_, 1);
if (v_isShared_4074_ == 0)
{
lean_ctor_set_tag(v___x_4073_, 0);
lean_ctor_set(v___x_4073_, 0, v_a_4090_);
v___x_4092_ = v___x_4073_;
goto v_reusejp_4091_;
}
else
{
lean_object* v_reuseFailAlloc_4093_; 
v_reuseFailAlloc_4093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4093_, 0, v_a_4090_);
v___x_4092_ = v_reuseFailAlloc_4093_;
goto v_reusejp_4091_;
}
v_reusejp_4091_:
{
v_val_4082_ = v___x_4092_;
goto v___jp_4081_;
}
}
v___jp_4081_:
{
lean_object* v___x_4083_; lean_object* v___x_4084_; 
v___x_4083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4083_, 0, v_val_4082_);
v___x_4084_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4079_, v___x_4080_, v___x_4083_, v___f_4075_);
return v___x_4084_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__4___boxed(lean_object* v___f_4095_, lean_object* v_v_4096_, lean_object* v_x_4097_, lean_object* v___y_4098_){
_start:
{
lean_object* v_res_4099_; 
v_res_4099_ = l_Lasm_JS_Value_await___redArg___lam__4(v___f_4095_, v_v_4096_, v_x_4097_);
return v_res_4099_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__5(lean_object* v___f_4100_, lean_object* v_____r_4101_){
_start:
{
lean_object* v___x_4103_; uint8_t v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; 
v___x_4103_ = lean_unsigned_to_nat(0u);
v___x_4104_ = 0;
v___x_4105_ = lean_io_promise_new();
v___x_4106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4106_, 0, v___x_4105_);
v___x_4107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4107_, 0, v___x_4106_);
v___x_4108_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4103_, v___x_4104_, v___x_4107_, v___f_4100_);
return v___x_4108_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__5___boxed(lean_object* v___f_4109_, lean_object* v_____r_4110_, lean_object* v___y_4111_){
_start:
{
lean_object* v_res_4112_; 
v_res_4112_ = l_Lasm_JS_Value_await___redArg___lam__5(v___f_4109_, v_____r_4110_);
return v_res_4112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__6(lean_object* v___x_4113_, lean_object* v_____do__lift_4114_){
_start:
{
lean_object* v___x_4116_; lean_object* v___x_4117_; 
v___x_4116_ = lean_io_wait(v_____do__lift_4114_);
v___x_4117_ = l_IO_ofExcept___redArg(v___x_4113_, v___x_4116_);
return v___x_4117_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__6___boxed(lean_object* v___x_4118_, lean_object* v_____do__lift_4119_, lean_object* v___y_4120_){
_start:
{
lean_object* v_res_4121_; 
v_res_4121_ = l_Lasm_JS_Value_await___redArg___lam__6(v___x_4118_, v_____do__lift_4119_);
return v_res_4121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg(lean_object* v_inst_4126_, lean_object* v_v_4127_, lean_object* v_inst_4128_){
_start:
{
lean_object* v___f_4129_; lean_object* v___f_4130_; lean_object* v___f_4131_; lean_object* v___f_4132_; lean_object* v___f_4133_; lean_object* v___f_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4137_; lean_object* v___x_4138_; 
v___f_4129_ = ((lean_object*)(l_Lasm_JS_Value_await___redArg___closed__0));
lean_inc_ref(v_inst_4128_);
v___f_4130_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4130_, 0, v_inst_4128_);
v___f_4131_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4131_, 0, v___f_4130_);
lean_inc(v_v_4127_);
v___f_4132_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___redArg___lam__4___boxed), 4, 2);
lean_closure_set(v___f_4132_, 0, v___f_4131_);
lean_closure_set(v___f_4132_, 1, v_v_4127_);
v___f_4133_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_4133_, 0, v___f_4132_);
v___f_4134_ = ((lean_object*)(l_Lasm_JS_Value_await___redArg___closed__2));
v___x_4135_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_toTask___boxed), 4, 3);
lean_closure_set(v___x_4135_, 0, v_v_4127_);
lean_closure_set(v___x_4135_, 1, lean_box(0));
lean_closure_set(v___x_4135_, 2, v_inst_4128_);
v___x_4136_ = lean_alloc_closure((void*)(l_instMonadEIO___aux__13___boxed), 6, 5);
lean_closure_set(v___x_4136_, 0, lean_box(0));
lean_closure_set(v___x_4136_, 1, lean_box(0));
lean_closure_set(v___x_4136_, 2, lean_box(0));
lean_closure_set(v___x_4136_, 3, v___x_4135_);
lean_closure_set(v___x_4136_, 4, v___f_4134_);
v___x_4137_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_bind___boxed), 6, 5);
lean_closure_set(v___x_4137_, 0, lean_box(0));
lean_closure_set(v___x_4137_, 1, lean_box(0));
lean_closure_set(v___x_4137_, 2, lean_box(0));
lean_closure_set(v___x_4137_, 3, v___f_4129_);
lean_closure_set(v___x_4137_, 4, v___f_4133_);
v___x_4138_ = lean_apply_3(v_inst_4126_, lean_box(0), v___x_4136_, v___x_4137_);
return v___x_4138_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await(lean_object* v_m_4139_, lean_object* v_inst_4140_, lean_object* v_v_4141_, lean_object* v_00_u03b1_4142_, lean_object* v_inst_4143_){
_start:
{
lean_object* v___x_4144_; 
v___x_4144_ = l_Lasm_JS_Value_await___redArg(v_inst_4140_, v_v_4141_, v_inst_4143_);
return v___x_4144_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1___redArg(uint32_t v_a_4145_, lean_object* v_b_4146_, lean_object* v_x_4147_){
_start:
{
if (lean_obj_tag(v_x_4147_) == 0)
{
lean_dec(v_b_4146_);
return v_x_4147_;
}
else
{
lean_object* v_key_4148_; lean_object* v_value_4149_; lean_object* v_tail_4150_; lean_object* v___x_4152_; uint8_t v_isShared_4153_; uint8_t v_isSharedCheck_4164_; 
v_key_4148_ = lean_ctor_get(v_x_4147_, 0);
v_value_4149_ = lean_ctor_get(v_x_4147_, 1);
v_tail_4150_ = lean_ctor_get(v_x_4147_, 2);
v_isSharedCheck_4164_ = !lean_is_exclusive(v_x_4147_);
if (v_isSharedCheck_4164_ == 0)
{
v___x_4152_ = v_x_4147_;
v_isShared_4153_ = v_isSharedCheck_4164_;
goto v_resetjp_4151_;
}
else
{
lean_inc(v_tail_4150_);
lean_inc(v_value_4149_);
lean_inc(v_key_4148_);
lean_dec(v_x_4147_);
v___x_4152_ = lean_box(0);
v_isShared_4153_ = v_isSharedCheck_4164_;
goto v_resetjp_4151_;
}
v_resetjp_4151_:
{
uint32_t v___x_4154_; uint8_t v___x_4155_; 
v___x_4154_ = lean_unbox_uint32(v_key_4148_);
v___x_4155_ = lean_uint32_dec_eq(v___x_4154_, v_a_4145_);
if (v___x_4155_ == 0)
{
lean_object* v___x_4156_; lean_object* v___x_4158_; 
v___x_4156_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1___redArg(v_a_4145_, v_b_4146_, v_tail_4150_);
if (v_isShared_4153_ == 0)
{
lean_ctor_set(v___x_4152_, 2, v___x_4156_);
v___x_4158_ = v___x_4152_;
goto v_reusejp_4157_;
}
else
{
lean_object* v_reuseFailAlloc_4159_; 
v_reuseFailAlloc_4159_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4159_, 0, v_key_4148_);
lean_ctor_set(v_reuseFailAlloc_4159_, 1, v_value_4149_);
lean_ctor_set(v_reuseFailAlloc_4159_, 2, v___x_4156_);
v___x_4158_ = v_reuseFailAlloc_4159_;
goto v_reusejp_4157_;
}
v_reusejp_4157_:
{
return v___x_4158_;
}
}
else
{
lean_object* v___x_4160_; lean_object* v___x_4162_; 
lean_dec(v_value_4149_);
lean_dec(v_key_4148_);
v___x_4160_ = lean_box_uint32(v_a_4145_);
if (v_isShared_4153_ == 0)
{
lean_ctor_set(v___x_4152_, 1, v_b_4146_);
lean_ctor_set(v___x_4152_, 0, v___x_4160_);
v___x_4162_ = v___x_4152_;
goto v_reusejp_4161_;
}
else
{
lean_object* v_reuseFailAlloc_4163_; 
v_reuseFailAlloc_4163_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4163_, 0, v___x_4160_);
lean_ctor_set(v_reuseFailAlloc_4163_, 1, v_b_4146_);
lean_ctor_set(v_reuseFailAlloc_4163_, 2, v_tail_4150_);
v___x_4162_ = v_reuseFailAlloc_4163_;
goto v_reusejp_4161_;
}
v_reusejp_4161_:
{
return v___x_4162_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1___redArg___boxed(lean_object* v_a_4165_, lean_object* v_b_4166_, lean_object* v_x_4167_){
_start:
{
uint32_t v_a_boxed_4168_; lean_object* v_res_4169_; 
v_a_boxed_4168_ = lean_unbox_uint32(v_a_4165_);
lean_dec(v_a_4165_);
v_res_4169_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1___redArg(v_a_boxed_4168_, v_b_4166_, v_x_4167_);
return v_res_4169_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_4170_, lean_object* v_x_4171_){
_start:
{
if (lean_obj_tag(v_x_4171_) == 0)
{
return v_x_4170_;
}
else
{
lean_object* v_key_4172_; lean_object* v_value_4173_; lean_object* v_tail_4174_; lean_object* v___x_4176_; uint8_t v_isShared_4177_; uint8_t v_isSharedCheck_4198_; 
v_key_4172_ = lean_ctor_get(v_x_4171_, 0);
v_value_4173_ = lean_ctor_get(v_x_4171_, 1);
v_tail_4174_ = lean_ctor_get(v_x_4171_, 2);
v_isSharedCheck_4198_ = !lean_is_exclusive(v_x_4171_);
if (v_isSharedCheck_4198_ == 0)
{
v___x_4176_ = v_x_4171_;
v_isShared_4177_ = v_isSharedCheck_4198_;
goto v_resetjp_4175_;
}
else
{
lean_inc(v_tail_4174_);
lean_inc(v_value_4173_);
lean_inc(v_key_4172_);
lean_dec(v_x_4171_);
v___x_4176_ = lean_box(0);
v_isShared_4177_ = v_isSharedCheck_4198_;
goto v_resetjp_4175_;
}
v_resetjp_4175_:
{
lean_object* v___x_4178_; uint32_t v___x_4179_; uint64_t v___x_4180_; uint64_t v___x_4181_; uint64_t v___x_4182_; uint64_t v_fold_4183_; uint64_t v___x_4184_; uint64_t v___x_4185_; uint64_t v___x_4186_; size_t v___x_4187_; size_t v___x_4188_; size_t v___x_4189_; size_t v___x_4190_; size_t v___x_4191_; lean_object* v___x_4192_; lean_object* v___x_4194_; 
v___x_4178_ = lean_array_get_size(v_x_4170_);
v___x_4179_ = lean_unbox_uint32(v_key_4172_);
v___x_4180_ = lean_uint32_to_uint64(v___x_4179_);
v___x_4181_ = 32ULL;
v___x_4182_ = lean_uint64_shift_right(v___x_4180_, v___x_4181_);
v_fold_4183_ = lean_uint64_xor(v___x_4180_, v___x_4182_);
v___x_4184_ = 16ULL;
v___x_4185_ = lean_uint64_shift_right(v_fold_4183_, v___x_4184_);
v___x_4186_ = lean_uint64_xor(v_fold_4183_, v___x_4185_);
v___x_4187_ = lean_uint64_to_usize(v___x_4186_);
v___x_4188_ = lean_usize_of_nat(v___x_4178_);
v___x_4189_ = ((size_t)1ULL);
v___x_4190_ = lean_usize_sub(v___x_4188_, v___x_4189_);
v___x_4191_ = lean_usize_land(v___x_4187_, v___x_4190_);
v___x_4192_ = lean_array_uget_borrowed(v_x_4170_, v___x_4191_);
lean_inc(v___x_4192_);
if (v_isShared_4177_ == 0)
{
lean_ctor_set(v___x_4176_, 2, v___x_4192_);
v___x_4194_ = v___x_4176_;
goto v_reusejp_4193_;
}
else
{
lean_object* v_reuseFailAlloc_4197_; 
v_reuseFailAlloc_4197_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4197_, 0, v_key_4172_);
lean_ctor_set(v_reuseFailAlloc_4197_, 1, v_value_4173_);
lean_ctor_set(v_reuseFailAlloc_4197_, 2, v___x_4192_);
v___x_4194_ = v_reuseFailAlloc_4197_;
goto v_reusejp_4193_;
}
v_reusejp_4193_:
{
lean_object* v___x_4195_; 
v___x_4195_ = lean_array_uset(v_x_4170_, v___x_4191_, v___x_4194_);
v_x_4170_ = v___x_4195_;
v_x_4171_ = v_tail_4174_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1___redArg(lean_object* v_i_4199_, lean_object* v_source_4200_, lean_object* v_target_4201_){
_start:
{
lean_object* v___x_4202_; uint8_t v___x_4203_; 
v___x_4202_ = lean_array_get_size(v_source_4200_);
v___x_4203_ = lean_nat_dec_lt(v_i_4199_, v___x_4202_);
if (v___x_4203_ == 0)
{
lean_dec_ref(v_source_4200_);
lean_dec(v_i_4199_);
return v_target_4201_;
}
else
{
lean_object* v_es_4204_; lean_object* v___x_4205_; lean_object* v_source_4206_; lean_object* v_target_4207_; lean_object* v___x_4208_; lean_object* v___x_4209_; 
v_es_4204_ = lean_array_fget(v_source_4200_, v_i_4199_);
v___x_4205_ = lean_box(0);
v_source_4206_ = lean_array_fset(v_source_4200_, v_i_4199_, v___x_4205_);
v_target_4207_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1_spec__2___redArg(v_target_4201_, v_es_4204_);
v___x_4208_ = lean_unsigned_to_nat(1u);
v___x_4209_ = lean_nat_add(v_i_4199_, v___x_4208_);
lean_dec(v_i_4199_);
v_i_4199_ = v___x_4209_;
v_source_4200_ = v_source_4206_;
v_target_4201_ = v_target_4207_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0___redArg(lean_object* v_data_4211_){
_start:
{
lean_object* v___x_4212_; lean_object* v___x_4213_; lean_object* v_nbuckets_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; lean_object* v___x_4219_; 
v___x_4212_ = lean_array_get_size(v_data_4211_);
v___x_4213_ = lean_unsigned_to_nat(2u);
v_nbuckets_4214_ = lean_nat_mul(v___x_4212_, v___x_4213_);
v___x_4215_ = lean_unsigned_to_nat(0u);
v___x_4216_ = lean_box(0);
v___x_4217_ = lean_mk_array(v_nbuckets_4214_, v___x_4216_);
v___x_4218_ = lean_array_propagate_mark(v_data_4211_, v___x_4217_);
v___x_4219_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1___redArg(v___x_4215_, v_data_4211_, v___x_4218_);
return v___x_4219_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0___redArg(lean_object* v_m_4220_, uint32_t v_a_4221_, lean_object* v_b_4222_){
_start:
{
lean_object* v_size_4223_; lean_object* v_buckets_4224_; lean_object* v___x_4226_; uint8_t v_isShared_4227_; uint8_t v_isSharedCheck_4268_; 
v_size_4223_ = lean_ctor_get(v_m_4220_, 0);
v_buckets_4224_ = lean_ctor_get(v_m_4220_, 1);
v_isSharedCheck_4268_ = !lean_is_exclusive(v_m_4220_);
if (v_isSharedCheck_4268_ == 0)
{
v___x_4226_ = v_m_4220_;
v_isShared_4227_ = v_isSharedCheck_4268_;
goto v_resetjp_4225_;
}
else
{
lean_inc(v_buckets_4224_);
lean_inc(v_size_4223_);
lean_dec(v_m_4220_);
v___x_4226_ = lean_box(0);
v_isShared_4227_ = v_isSharedCheck_4268_;
goto v_resetjp_4225_;
}
v_resetjp_4225_:
{
lean_object* v___x_4228_; uint64_t v___x_4229_; uint64_t v___x_4230_; uint64_t v___x_4231_; uint64_t v_fold_4232_; uint64_t v___x_4233_; uint64_t v___x_4234_; uint64_t v___x_4235_; size_t v___x_4236_; size_t v___x_4237_; size_t v___x_4238_; size_t v___x_4239_; size_t v___x_4240_; lean_object* v_bkt_4241_; uint8_t v___x_4242_; 
v___x_4228_ = lean_array_get_size(v_buckets_4224_);
v___x_4229_ = lean_uint32_to_uint64(v_a_4221_);
v___x_4230_ = 32ULL;
v___x_4231_ = lean_uint64_shift_right(v___x_4229_, v___x_4230_);
v_fold_4232_ = lean_uint64_xor(v___x_4229_, v___x_4231_);
v___x_4233_ = 16ULL;
v___x_4234_ = lean_uint64_shift_right(v_fold_4232_, v___x_4233_);
v___x_4235_ = lean_uint64_xor(v_fold_4232_, v___x_4234_);
v___x_4236_ = lean_uint64_to_usize(v___x_4235_);
v___x_4237_ = lean_usize_of_nat(v___x_4228_);
v___x_4238_ = ((size_t)1ULL);
v___x_4239_ = lean_usize_sub(v___x_4237_, v___x_4238_);
v___x_4240_ = lean_usize_land(v___x_4236_, v___x_4239_);
v_bkt_4241_ = lean_array_uget_borrowed(v_buckets_4224_, v___x_4240_);
v___x_4242_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2___redArg(v_a_4221_, v_bkt_4241_);
if (v___x_4242_ == 0)
{
lean_object* v___x_4243_; lean_object* v_size_x27_4244_; lean_object* v___x_4245_; lean_object* v___x_4246_; lean_object* v_buckets_x27_4247_; lean_object* v___x_4248_; lean_object* v___x_4249_; lean_object* v___x_4250_; lean_object* v___x_4251_; lean_object* v___x_4252_; uint8_t v___x_4253_; 
v___x_4243_ = lean_unsigned_to_nat(1u);
v_size_x27_4244_ = lean_nat_add(v_size_4223_, v___x_4243_);
lean_dec(v_size_4223_);
v___x_4245_ = lean_box_uint32(v_a_4221_);
lean_inc(v_bkt_4241_);
v___x_4246_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4246_, 0, v___x_4245_);
lean_ctor_set(v___x_4246_, 1, v_b_4222_);
lean_ctor_set(v___x_4246_, 2, v_bkt_4241_);
v_buckets_x27_4247_ = lean_array_uset(v_buckets_4224_, v___x_4240_, v___x_4246_);
v___x_4248_ = lean_unsigned_to_nat(4u);
v___x_4249_ = lean_nat_mul(v_size_x27_4244_, v___x_4248_);
v___x_4250_ = lean_unsigned_to_nat(3u);
v___x_4251_ = lean_nat_div(v___x_4249_, v___x_4250_);
lean_dec(v___x_4249_);
v___x_4252_ = lean_array_get_size(v_buckets_x27_4247_);
v___x_4253_ = lean_nat_dec_le(v___x_4251_, v___x_4252_);
lean_dec(v___x_4251_);
if (v___x_4253_ == 0)
{
lean_object* v_val_4254_; lean_object* v___x_4256_; 
v_val_4254_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0___redArg(v_buckets_x27_4247_);
if (v_isShared_4227_ == 0)
{
lean_ctor_set(v___x_4226_, 1, v_val_4254_);
lean_ctor_set(v___x_4226_, 0, v_size_x27_4244_);
v___x_4256_ = v___x_4226_;
goto v_reusejp_4255_;
}
else
{
lean_object* v_reuseFailAlloc_4257_; 
v_reuseFailAlloc_4257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4257_, 0, v_size_x27_4244_);
lean_ctor_set(v_reuseFailAlloc_4257_, 1, v_val_4254_);
v___x_4256_ = v_reuseFailAlloc_4257_;
goto v_reusejp_4255_;
}
v_reusejp_4255_:
{
return v___x_4256_;
}
}
else
{
lean_object* v___x_4259_; 
if (v_isShared_4227_ == 0)
{
lean_ctor_set(v___x_4226_, 1, v_buckets_x27_4247_);
lean_ctor_set(v___x_4226_, 0, v_size_x27_4244_);
v___x_4259_ = v___x_4226_;
goto v_reusejp_4258_;
}
else
{
lean_object* v_reuseFailAlloc_4260_; 
v_reuseFailAlloc_4260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4260_, 0, v_size_x27_4244_);
lean_ctor_set(v_reuseFailAlloc_4260_, 1, v_buckets_x27_4247_);
v___x_4259_ = v_reuseFailAlloc_4260_;
goto v_reusejp_4258_;
}
v_reusejp_4258_:
{
return v___x_4259_;
}
}
}
else
{
lean_object* v___x_4261_; lean_object* v_buckets_x27_4262_; lean_object* v___x_4263_; lean_object* v___x_4264_; lean_object* v___x_4266_; 
lean_inc(v_bkt_4241_);
v___x_4261_ = lean_box(0);
v_buckets_x27_4262_ = lean_array_uset(v_buckets_4224_, v___x_4240_, v___x_4261_);
v___x_4263_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1___redArg(v_a_4221_, v_b_4222_, v_bkt_4241_);
v___x_4264_ = lean_array_uset(v_buckets_x27_4262_, v___x_4240_, v___x_4263_);
if (v_isShared_4227_ == 0)
{
lean_ctor_set(v___x_4226_, 1, v___x_4264_);
v___x_4266_ = v___x_4226_;
goto v_reusejp_4265_;
}
else
{
lean_object* v_reuseFailAlloc_4267_; 
v_reuseFailAlloc_4267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4267_, 0, v_size_4223_);
lean_ctor_set(v_reuseFailAlloc_4267_, 1, v___x_4264_);
v___x_4266_ = v_reuseFailAlloc_4267_;
goto v_reusejp_4265_;
}
v_reusejp_4265_:
{
return v___x_4266_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0___redArg___boxed(lean_object* v_m_4269_, lean_object* v_a_4270_, lean_object* v_b_4271_){
_start:
{
uint32_t v_a_boxed_4272_; lean_object* v_res_4273_; 
v_a_boxed_4272_ = lean_unbox_uint32(v_a_4270_);
lean_dec(v_a_4270_);
v_res_4273_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0___redArg(v_m_4269_, v_a_boxed_4272_, v_b_4271_);
return v_res_4273_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_register(uint8_t v_synchronous_4274_, lean_object* v_f_4275_){
_start:
{
lean_object* v___x_4277_; lean_object* v___x_4278_; uint32_t v_next_4279_; lean_object* v_asyncFns_4280_; lean_object* v_syncFns_4281_; lean_object* v___x_4283_; uint8_t v_isShared_4284_; uint8_t v_isSharedCheck_4296_; 
v___x_4277_ = l___private_Lasm_JS_Core_0__Lasm_JS_registry;
v___x_4278_ = lean_st_ref_take(v___x_4277_);
v_next_4279_ = lean_ctor_get_uint32(v___x_4278_, sizeof(void*)*2);
v_asyncFns_4280_ = lean_ctor_get(v___x_4278_, 0);
v_syncFns_4281_ = lean_ctor_get(v___x_4278_, 1);
v_isSharedCheck_4296_ = !lean_is_exclusive(v___x_4278_);
if (v_isSharedCheck_4296_ == 0)
{
v___x_4283_ = v___x_4278_;
v_isShared_4284_ = v_isSharedCheck_4296_;
goto v_resetjp_4282_;
}
else
{
lean_inc(v_syncFns_4281_);
lean_inc(v_asyncFns_4280_);
lean_dec(v___x_4278_);
v___x_4283_ = lean_box(0);
v_isShared_4284_ = v_isSharedCheck_4296_;
goto v_resetjp_4282_;
}
v_resetjp_4282_:
{
uint32_t v___x_4285_; uint32_t v___x_4286_; lean_object* v___y_4288_; 
v___x_4285_ = 1;
v___x_4286_ = lean_uint32_add(v_next_4279_, v___x_4285_);
if (v_synchronous_4274_ == 0)
{
lean_dec_ref(v_f_4275_);
v___y_4288_ = v_syncFns_4281_;
goto v___jp_4287_;
}
else
{
lean_object* v___x_4295_; 
v___x_4295_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0___redArg(v_syncFns_4281_, v_next_4279_, v_f_4275_);
v___y_4288_ = v___x_4295_;
goto v___jp_4287_;
}
v___jp_4287_:
{
lean_object* v___x_4290_; 
if (v_isShared_4284_ == 0)
{
lean_ctor_set(v___x_4283_, 1, v___y_4288_);
v___x_4290_ = v___x_4283_;
goto v_reusejp_4289_;
}
else
{
lean_object* v_reuseFailAlloc_4294_; 
v_reuseFailAlloc_4294_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v_reuseFailAlloc_4294_, 0, v_asyncFns_4280_);
lean_ctor_set(v_reuseFailAlloc_4294_, 1, v___y_4288_);
v___x_4290_ = v_reuseFailAlloc_4294_;
goto v_reusejp_4289_;
}
v_reusejp_4289_:
{
lean_object* v___x_4291_; lean_object* v___x_4292_; lean_object* v___x_4293_; 
lean_ctor_set_uint32(v___x_4290_, sizeof(void*)*2, v___x_4286_);
v___x_4291_ = lean_st_ref_put(v___x_4277_, v___x_4290_);
v___x_4292_ = lean_box_uint32(v_next_4279_);
v___x_4293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4293_, 0, v___x_4292_);
return v___x_4293_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_register___boxed(lean_object* v_synchronous_4297_, lean_object* v_f_4298_, lean_object* v_a_4299_){
_start:
{
uint8_t v_synchronous_boxed_4300_; lean_object* v_res_4301_; 
v_synchronous_boxed_4300_ = lean_unbox(v_synchronous_4297_);
v_res_4301_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_register(v_synchronous_boxed_4300_, v_f_4298_);
return v_res_4301_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0(lean_object* v_00_u03b2_4302_, lean_object* v_m_4303_, uint32_t v_a_4304_, lean_object* v_b_4305_){
_start:
{
lean_object* v___x_4306_; 
v___x_4306_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0___redArg(v_m_4303_, v_a_4304_, v_b_4305_);
return v___x_4306_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0___boxed(lean_object* v_00_u03b2_4307_, lean_object* v_m_4308_, lean_object* v_a_4309_, lean_object* v_b_4310_){
_start:
{
uint32_t v_a_boxed_4311_; lean_object* v_res_4312_; 
v_a_boxed_4311_ = lean_unbox_uint32(v_a_4309_);
lean_dec(v_a_4309_);
v_res_4312_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0(v_00_u03b2_4307_, v_m_4308_, v_a_boxed_4311_, v_b_4310_);
return v_res_4312_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0(lean_object* v_00_u03b2_4313_, lean_object* v_data_4314_){
_start:
{
lean_object* v___x_4315_; 
v___x_4315_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0___redArg(v_data_4314_);
return v___x_4315_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1(lean_object* v_00_u03b2_4316_, uint32_t v_a_4317_, lean_object* v_b_4318_, lean_object* v_x_4319_){
_start:
{
lean_object* v___x_4320_; 
v___x_4320_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1___redArg(v_a_4317_, v_b_4318_, v_x_4319_);
return v___x_4320_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1___boxed(lean_object* v_00_u03b2_4321_, lean_object* v_a_4322_, lean_object* v_b_4323_, lean_object* v_x_4324_){
_start:
{
uint32_t v_a_boxed_4325_; lean_object* v_res_4326_; 
v_a_boxed_4325_ = lean_unbox_uint32(v_a_4322_);
lean_dec(v_a_4322_);
v_res_4326_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1(v_00_u03b2_4321_, v_a_boxed_4325_, v_b_4323_, v_x_4324_);
return v_res_4326_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_4327_, lean_object* v_i_4328_, lean_object* v_source_4329_, lean_object* v_target_4330_){
_start:
{
lean_object* v___x_4331_; 
v___x_4331_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1___redArg(v_i_4328_, v_source_4329_, v_target_4330_);
return v___x_4331_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_4332_, lean_object* v_x_4333_, lean_object* v_x_4334_){
_start:
{
lean_object* v___x_4335_; 
v___x_4335_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1_spec__2___redArg(v_x_4333_, v_x_4334_);
return v___x_4335_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_registerReply(lean_object* v_f_4336_){
_start:
{
lean_object* v___x_4338_; lean_object* v___x_4339_; uint32_t v_next_4340_; lean_object* v_asyncFns_4341_; lean_object* v_syncFns_4342_; lean_object* v___x_4344_; uint8_t v_isShared_4345_; uint8_t v_isSharedCheck_4355_; 
v___x_4338_ = l___private_Lasm_JS_Core_0__Lasm_JS_registry;
v___x_4339_ = lean_st_ref_take(v___x_4338_);
v_next_4340_ = lean_ctor_get_uint32(v___x_4339_, sizeof(void*)*2);
v_asyncFns_4341_ = lean_ctor_get(v___x_4339_, 0);
v_syncFns_4342_ = lean_ctor_get(v___x_4339_, 1);
v_isSharedCheck_4355_ = !lean_is_exclusive(v___x_4339_);
if (v_isSharedCheck_4355_ == 0)
{
v___x_4344_ = v___x_4339_;
v_isShared_4345_ = v_isSharedCheck_4355_;
goto v_resetjp_4343_;
}
else
{
lean_inc(v_syncFns_4342_);
lean_inc(v_asyncFns_4341_);
lean_dec(v___x_4339_);
v___x_4344_ = lean_box(0);
v_isShared_4345_ = v_isSharedCheck_4355_;
goto v_resetjp_4343_;
}
v_resetjp_4343_:
{
uint32_t v___x_4346_; uint32_t v___x_4347_; lean_object* v___x_4348_; lean_object* v___x_4350_; 
v___x_4346_ = 1;
v___x_4347_ = lean_uint32_add(v_next_4340_, v___x_4346_);
v___x_4348_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0___redArg(v_asyncFns_4341_, v_next_4340_, v_f_4336_);
if (v_isShared_4345_ == 0)
{
lean_ctor_set(v___x_4344_, 0, v___x_4348_);
v___x_4350_ = v___x_4344_;
goto v_reusejp_4349_;
}
else
{
lean_object* v_reuseFailAlloc_4354_; 
v_reuseFailAlloc_4354_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v_reuseFailAlloc_4354_, 0, v___x_4348_);
lean_ctor_set(v_reuseFailAlloc_4354_, 1, v_syncFns_4342_);
v___x_4350_ = v_reuseFailAlloc_4354_;
goto v_reusejp_4349_;
}
v_reusejp_4349_:
{
lean_object* v___x_4351_; lean_object* v___x_4352_; lean_object* v___x_4353_; 
lean_ctor_set_uint32(v___x_4350_, sizeof(void*)*2, v___x_4347_);
v___x_4351_ = lean_st_ref_put(v___x_4338_, v___x_4350_);
v___x_4352_ = lean_box_uint32(v_next_4340_);
v___x_4353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4353_, 0, v___x_4352_);
return v___x_4353_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_registerReply___boxed(lean_object* v_f_4356_, lean_object* v_a_4357_){
_start:
{
lean_object* v_res_4358_; 
v_res_4358_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_registerReply(v_f_4356_);
return v_res_4358_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn___lam__0(lean_object* v___y_4359_){
_start:
{
if (lean_obj_tag(v___y_4359_) == 0)
{
lean_object* v_a_4360_; lean_object* v___x_4362_; uint8_t v_isShared_4363_; uint8_t v_isSharedCheck_4367_; 
v_a_4360_ = lean_ctor_get(v___y_4359_, 0);
v_isSharedCheck_4367_ = !lean_is_exclusive(v___y_4359_);
if (v_isSharedCheck_4367_ == 0)
{
v___x_4362_ = v___y_4359_;
v_isShared_4363_ = v_isSharedCheck_4367_;
goto v_resetjp_4361_;
}
else
{
lean_inc(v_a_4360_);
lean_dec(v___y_4359_);
v___x_4362_ = lean_box(0);
v_isShared_4363_ = v_isSharedCheck_4367_;
goto v_resetjp_4361_;
}
v_resetjp_4361_:
{
lean_object* v___x_4365_; 
if (v_isShared_4363_ == 0)
{
v___x_4365_ = v___x_4362_;
goto v_reusejp_4364_;
}
else
{
lean_object* v_reuseFailAlloc_4366_; 
v_reuseFailAlloc_4366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4366_, 0, v_a_4360_);
v___x_4365_ = v_reuseFailAlloc_4366_;
goto v_reusejp_4364_;
}
v_reusejp_4364_:
{
return v___x_4365_;
}
}
}
else
{
lean_object* v_a_4368_; lean_object* v___x_4370_; uint8_t v_isShared_4371_; uint8_t v_isSharedCheck_4376_; 
v_a_4368_ = lean_ctor_get(v___y_4359_, 0);
v_isSharedCheck_4376_ = !lean_is_exclusive(v___y_4359_);
if (v_isSharedCheck_4376_ == 0)
{
v___x_4370_ = v___y_4359_;
v_isShared_4371_ = v_isSharedCheck_4376_;
goto v_resetjp_4369_;
}
else
{
lean_inc(v_a_4368_);
lean_dec(v___y_4359_);
v___x_4370_ = lean_box(0);
v_isShared_4371_ = v_isSharedCheck_4376_;
goto v_resetjp_4369_;
}
v_resetjp_4369_:
{
lean_object* v___x_4372_; lean_object* v___x_4374_; 
v___x_4372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4372_, 0, v_a_4368_);
if (v_isShared_4371_ == 0)
{
lean_ctor_set(v___x_4370_, 0, v___x_4372_);
v___x_4374_ = v___x_4370_;
goto v_reusejp_4373_;
}
else
{
lean_object* v_reuseFailAlloc_4375_; 
v_reuseFailAlloc_4375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4375_, 0, v___x_4372_);
v___x_4374_ = v_reuseFailAlloc_4375_;
goto v_reusejp_4373_;
}
v_reusejp_4373_:
{
return v___x_4374_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn___lam__1(lean_object* v_f_4377_, lean_object* v___f_4378_, lean_object* v_args_4379_){
_start:
{
lean_object* v___x_4381_; uint8_t v___x_4382_; lean_object* v___x_4383_; lean_object* v___y_4385_; 
v___x_4381_ = lean_unsigned_to_nat(0u);
v___x_4382_ = 0;
v___x_4383_ = lean_apply_2(v_f_4377_, v_args_4379_, lean_box(0));
if (lean_obj_tag(v___x_4383_) == 0)
{
lean_object* v_a_4387_; 
lean_dec_ref(v___f_4378_);
v_a_4387_ = lean_ctor_get(v___x_4383_, 0);
lean_inc(v_a_4387_);
lean_dec_ref_known(v___x_4383_, 1);
if (lean_obj_tag(v_a_4387_) == 0)
{
lean_object* v_a_4388_; lean_object* v___x_4390_; uint8_t v_isShared_4391_; uint8_t v_isSharedCheck_4395_; 
v_a_4388_ = lean_ctor_get(v_a_4387_, 0);
v_isSharedCheck_4395_ = !lean_is_exclusive(v_a_4387_);
if (v_isSharedCheck_4395_ == 0)
{
v___x_4390_ = v_a_4387_;
v_isShared_4391_ = v_isSharedCheck_4395_;
goto v_resetjp_4389_;
}
else
{
lean_inc(v_a_4388_);
lean_dec(v_a_4387_);
v___x_4390_ = lean_box(0);
v_isShared_4391_ = v_isSharedCheck_4395_;
goto v_resetjp_4389_;
}
v_resetjp_4389_:
{
lean_object* v___x_4393_; 
if (v_isShared_4391_ == 0)
{
v___x_4393_ = v___x_4390_;
goto v_reusejp_4392_;
}
else
{
lean_object* v_reuseFailAlloc_4394_; 
v_reuseFailAlloc_4394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4394_, 0, v_a_4388_);
v___x_4393_ = v_reuseFailAlloc_4394_;
goto v_reusejp_4392_;
}
v_reusejp_4392_:
{
v___y_4385_ = v___x_4393_;
goto v___jp_4384_;
}
}
}
else
{
lean_object* v_a_4396_; lean_object* v___x_4398_; uint8_t v_isShared_4399_; uint8_t v_isSharedCheck_4404_; 
v_a_4396_ = lean_ctor_get(v_a_4387_, 0);
v_isSharedCheck_4404_ = !lean_is_exclusive(v_a_4387_);
if (v_isSharedCheck_4404_ == 0)
{
v___x_4398_ = v_a_4387_;
v_isShared_4399_ = v_isSharedCheck_4404_;
goto v_resetjp_4397_;
}
else
{
lean_inc(v_a_4396_);
lean_dec(v_a_4387_);
v___x_4398_ = lean_box(0);
v_isShared_4399_ = v_isSharedCheck_4404_;
goto v_resetjp_4397_;
}
v_resetjp_4397_:
{
lean_object* v___x_4400_; lean_object* v___x_4402_; 
v___x_4400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4400_, 0, v_a_4396_);
if (v_isShared_4399_ == 0)
{
lean_ctor_set(v___x_4398_, 0, v___x_4400_);
v___x_4402_ = v___x_4398_;
goto v_reusejp_4401_;
}
else
{
lean_object* v_reuseFailAlloc_4403_; 
v_reuseFailAlloc_4403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4403_, 0, v___x_4400_);
v___x_4402_ = v_reuseFailAlloc_4403_;
goto v_reusejp_4401_;
}
v_reusejp_4401_:
{
v___y_4385_ = v___x_4402_;
goto v___jp_4384_;
}
}
}
}
else
{
lean_object* v_a_4405_; lean_object* v___x_4407_; uint8_t v_isShared_4408_; uint8_t v_isSharedCheck_4413_; 
v_a_4405_ = lean_ctor_get(v___x_4383_, 0);
v_isSharedCheck_4413_ = !lean_is_exclusive(v___x_4383_);
if (v_isSharedCheck_4413_ == 0)
{
v___x_4407_ = v___x_4383_;
v_isShared_4408_ = v_isSharedCheck_4413_;
goto v_resetjp_4406_;
}
else
{
lean_inc(v_a_4405_);
lean_dec(v___x_4383_);
v___x_4407_ = lean_box(0);
v_isShared_4408_ = v_isSharedCheck_4413_;
goto v_resetjp_4406_;
}
v_resetjp_4406_:
{
lean_object* v___x_4409_; lean_object* v___x_4411_; 
v___x_4409_ = lean_task_map(v___f_4378_, v_a_4405_, v___x_4381_, v___x_4382_);
if (v_isShared_4408_ == 0)
{
lean_ctor_set(v___x_4407_, 0, v___x_4409_);
v___x_4411_ = v___x_4407_;
goto v_reusejp_4410_;
}
else
{
lean_object* v_reuseFailAlloc_4412_; 
v_reuseFailAlloc_4412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4412_, 0, v___x_4409_);
v___x_4411_ = v_reuseFailAlloc_4412_;
goto v_reusejp_4410_;
}
v_reusejp_4410_:
{
return v___x_4411_;
}
}
}
v___jp_4384_:
{
lean_object* v___x_4386_; 
v___x_4386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4386_, 0, v___y_4385_);
return v___x_4386_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn___lam__1___boxed(lean_object* v_f_4414_, lean_object* v___f_4415_, lean_object* v_args_4416_, lean_object* v___y_4417_){
_start:
{
lean_object* v_res_4418_; 
v_res_4418_ = l_Lasm_JS_Function_ofFn___lam__1(v_f_4414_, v___f_4415_, v_args_4416_);
return v_res_4418_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn(lean_object* v_f_4421_){
_start:
{
lean_object* v___f_4423_; lean_object* v___f_4424_; lean_object* v___x_4425_; 
v___f_4423_ = ((lean_object*)(l_Lasm_JS_Function_ofFn___closed__0));
v___f_4424_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_4424_, 0, v_f_4421_);
lean_closure_set(v___f_4424_, 1, v___f_4423_);
v___x_4425_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_4425_) == 0)
{
lean_object* v___x_4426_; lean_object* v_a_4427_; uint32_t v___x_4428_; uint64_t v___x_4429_; lean_object* v___x_4430_; uint32_t v___x_4431_; lean_object* v___x_4432_; 
lean_dec_ref_known(v___x_4425_, 1);
v___x_4426_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_registerReply(v___f_4424_);
v_a_4427_ = lean_ctor_get(v___x_4426_, 0);
lean_inc(v_a_4427_);
lean_dec_ref(v___x_4426_);
v___x_4428_ = 210;
v___x_4429_ = 1ULL;
v___x_4430_ = l_ByteArray_empty;
v___x_4431_ = lean_unbox_uint32(v_a_4427_);
lean_dec(v_a_4427_);
v___x_4432_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_4428_, v___x_4431_, v___x_4429_, v___x_4430_);
if (lean_obj_tag(v___x_4432_) == 0)
{
lean_object* v_a_4433_; lean_object* v___x_4434_; 
v_a_4433_ = lean_ctor_get(v___x_4432_, 0);
lean_inc(v_a_4433_);
lean_dec_ref_known(v___x_4432_, 1);
v___x_4434_ = l_Lasm_JS_Wire_decode(v_a_4433_);
lean_dec(v_a_4433_);
if (lean_obj_tag(v___x_4434_) == 0)
{
lean_object* v_a_4435_; lean_object* v___x_4436_; lean_object* v___x_4437_; 
v_a_4435_ = lean_ctor_get(v___x_4434_, 0);
lean_inc(v_a_4435_);
lean_dec_ref_known(v___x_4434_, 1);
v___x_4436_ = ((lean_object*)(l_Lasm_JS_Function_ofFn___closed__1));
v___x_4437_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v___x_4436_, v_a_4435_);
return v___x_4437_;
}
else
{
lean_object* v_a_4438_; lean_object* v___x_4440_; uint8_t v_isShared_4441_; uint8_t v_isSharedCheck_4445_; 
v_a_4438_ = lean_ctor_get(v___x_4434_, 0);
v_isSharedCheck_4445_ = !lean_is_exclusive(v___x_4434_);
if (v_isSharedCheck_4445_ == 0)
{
v___x_4440_ = v___x_4434_;
v_isShared_4441_ = v_isSharedCheck_4445_;
goto v_resetjp_4439_;
}
else
{
lean_inc(v_a_4438_);
lean_dec(v___x_4434_);
v___x_4440_ = lean_box(0);
v_isShared_4441_ = v_isSharedCheck_4445_;
goto v_resetjp_4439_;
}
v_resetjp_4439_:
{
lean_object* v___x_4443_; 
if (v_isShared_4441_ == 0)
{
v___x_4443_ = v___x_4440_;
goto v_reusejp_4442_;
}
else
{
lean_object* v_reuseFailAlloc_4444_; 
v_reuseFailAlloc_4444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4444_, 0, v_a_4438_);
v___x_4443_ = v_reuseFailAlloc_4444_;
goto v_reusejp_4442_;
}
v_reusejp_4442_:
{
return v___x_4443_;
}
}
}
}
else
{
lean_object* v_a_4446_; lean_object* v___x_4448_; uint8_t v_isShared_4449_; uint8_t v_isSharedCheck_4453_; 
v_a_4446_ = lean_ctor_get(v___x_4432_, 0);
v_isSharedCheck_4453_ = !lean_is_exclusive(v___x_4432_);
if (v_isSharedCheck_4453_ == 0)
{
v___x_4448_ = v___x_4432_;
v_isShared_4449_ = v_isSharedCheck_4453_;
goto v_resetjp_4447_;
}
else
{
lean_inc(v_a_4446_);
lean_dec(v___x_4432_);
v___x_4448_ = lean_box(0);
v_isShared_4449_ = v_isSharedCheck_4453_;
goto v_resetjp_4447_;
}
v_resetjp_4447_:
{
lean_object* v___x_4451_; 
if (v_isShared_4449_ == 0)
{
v___x_4451_ = v___x_4448_;
goto v_reusejp_4450_;
}
else
{
lean_object* v_reuseFailAlloc_4452_; 
v_reuseFailAlloc_4452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4452_, 0, v_a_4446_);
v___x_4451_ = v_reuseFailAlloc_4452_;
goto v_reusejp_4450_;
}
v_reusejp_4450_:
{
return v___x_4451_;
}
}
}
}
else
{
lean_object* v_a_4454_; lean_object* v___x_4456_; uint8_t v_isShared_4457_; uint8_t v_isSharedCheck_4461_; 
lean_dec_ref(v___f_4424_);
v_a_4454_ = lean_ctor_get(v___x_4425_, 0);
v_isSharedCheck_4461_ = !lean_is_exclusive(v___x_4425_);
if (v_isSharedCheck_4461_ == 0)
{
v___x_4456_ = v___x_4425_;
v_isShared_4457_ = v_isSharedCheck_4461_;
goto v_resetjp_4455_;
}
else
{
lean_inc(v_a_4454_);
lean_dec(v___x_4425_);
v___x_4456_ = lean_box(0);
v_isShared_4457_ = v_isSharedCheck_4461_;
goto v_resetjp_4455_;
}
v_resetjp_4455_:
{
lean_object* v___x_4459_; 
if (v_isShared_4457_ == 0)
{
v___x_4459_ = v___x_4456_;
goto v_reusejp_4458_;
}
else
{
lean_object* v_reuseFailAlloc_4460_; 
v_reuseFailAlloc_4460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4460_, 0, v_a_4454_);
v___x_4459_ = v_reuseFailAlloc_4460_;
goto v_reusejp_4458_;
}
v_reusejp_4458_:
{
return v___x_4459_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn___boxed(lean_object* v_f_4462_, lean_object* v_a_4463_){
_start:
{
lean_object* v_res_4464_; 
v_res_4464_ = l_Lasm_JS_Function_ofFn(v_f_4462_);
return v_res_4464_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFnReply(lean_object* v_f_4466_){
_start:
{
lean_object* v___x_4468_; 
v___x_4468_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_4468_) == 0)
{
lean_object* v___x_4469_; lean_object* v_a_4470_; uint32_t v___x_4471_; uint64_t v___x_4472_; lean_object* v___x_4473_; uint32_t v___x_4474_; lean_object* v___x_4475_; 
lean_dec_ref_known(v___x_4468_, 1);
v___x_4469_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_registerReply(v_f_4466_);
v_a_4470_ = lean_ctor_get(v___x_4469_, 0);
lean_inc(v_a_4470_);
lean_dec_ref(v___x_4469_);
v___x_4471_ = 210;
v___x_4472_ = 1ULL;
v___x_4473_ = l_ByteArray_empty;
v___x_4474_ = lean_unbox_uint32(v_a_4470_);
lean_dec(v_a_4470_);
v___x_4475_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_4471_, v___x_4474_, v___x_4472_, v___x_4473_);
if (lean_obj_tag(v___x_4475_) == 0)
{
lean_object* v_a_4476_; lean_object* v___x_4477_; 
v_a_4476_ = lean_ctor_get(v___x_4475_, 0);
lean_inc(v_a_4476_);
lean_dec_ref_known(v___x_4475_, 1);
v___x_4477_ = l_Lasm_JS_Wire_decode(v_a_4476_);
lean_dec(v_a_4476_);
if (lean_obj_tag(v___x_4477_) == 0)
{
lean_object* v_a_4478_; lean_object* v___x_4479_; lean_object* v___x_4480_; 
v_a_4478_ = lean_ctor_get(v___x_4477_, 0);
lean_inc(v_a_4478_);
lean_dec_ref_known(v___x_4477_, 1);
v___x_4479_ = ((lean_object*)(l_Lasm_JS_Function_ofFnReply___closed__0));
v___x_4480_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v___x_4479_, v_a_4478_);
return v___x_4480_;
}
else
{
lean_object* v_a_4481_; lean_object* v___x_4483_; uint8_t v_isShared_4484_; uint8_t v_isSharedCheck_4488_; 
v_a_4481_ = lean_ctor_get(v___x_4477_, 0);
v_isSharedCheck_4488_ = !lean_is_exclusive(v___x_4477_);
if (v_isSharedCheck_4488_ == 0)
{
v___x_4483_ = v___x_4477_;
v_isShared_4484_ = v_isSharedCheck_4488_;
goto v_resetjp_4482_;
}
else
{
lean_inc(v_a_4481_);
lean_dec(v___x_4477_);
v___x_4483_ = lean_box(0);
v_isShared_4484_ = v_isSharedCheck_4488_;
goto v_resetjp_4482_;
}
v_resetjp_4482_:
{
lean_object* v___x_4486_; 
if (v_isShared_4484_ == 0)
{
v___x_4486_ = v___x_4483_;
goto v_reusejp_4485_;
}
else
{
lean_object* v_reuseFailAlloc_4487_; 
v_reuseFailAlloc_4487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4487_, 0, v_a_4481_);
v___x_4486_ = v_reuseFailAlloc_4487_;
goto v_reusejp_4485_;
}
v_reusejp_4485_:
{
return v___x_4486_;
}
}
}
}
else
{
lean_object* v_a_4489_; lean_object* v___x_4491_; uint8_t v_isShared_4492_; uint8_t v_isSharedCheck_4496_; 
v_a_4489_ = lean_ctor_get(v___x_4475_, 0);
v_isSharedCheck_4496_ = !lean_is_exclusive(v___x_4475_);
if (v_isSharedCheck_4496_ == 0)
{
v___x_4491_ = v___x_4475_;
v_isShared_4492_ = v_isSharedCheck_4496_;
goto v_resetjp_4490_;
}
else
{
lean_inc(v_a_4489_);
lean_dec(v___x_4475_);
v___x_4491_ = lean_box(0);
v_isShared_4492_ = v_isSharedCheck_4496_;
goto v_resetjp_4490_;
}
v_resetjp_4490_:
{
lean_object* v___x_4494_; 
if (v_isShared_4492_ == 0)
{
v___x_4494_ = v___x_4491_;
goto v_reusejp_4493_;
}
else
{
lean_object* v_reuseFailAlloc_4495_; 
v_reuseFailAlloc_4495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4495_, 0, v_a_4489_);
v___x_4494_ = v_reuseFailAlloc_4495_;
goto v_reusejp_4493_;
}
v_reusejp_4493_:
{
return v___x_4494_;
}
}
}
}
else
{
lean_object* v_a_4497_; lean_object* v___x_4499_; uint8_t v_isShared_4500_; uint8_t v_isSharedCheck_4504_; 
lean_dec_ref(v_f_4466_);
v_a_4497_ = lean_ctor_get(v___x_4468_, 0);
v_isSharedCheck_4504_ = !lean_is_exclusive(v___x_4468_);
if (v_isSharedCheck_4504_ == 0)
{
v___x_4499_ = v___x_4468_;
v_isShared_4500_ = v_isSharedCheck_4504_;
goto v_resetjp_4498_;
}
else
{
lean_inc(v_a_4497_);
lean_dec(v___x_4468_);
v___x_4499_ = lean_box(0);
v_isShared_4500_ = v_isSharedCheck_4504_;
goto v_resetjp_4498_;
}
v_resetjp_4498_:
{
lean_object* v___x_4502_; 
if (v_isShared_4500_ == 0)
{
v___x_4502_ = v___x_4499_;
goto v_reusejp_4501_;
}
else
{
lean_object* v_reuseFailAlloc_4503_; 
v_reuseFailAlloc_4503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4503_, 0, v_a_4497_);
v___x_4502_ = v_reuseFailAlloc_4503_;
goto v_reusejp_4501_;
}
v_reusejp_4501_:
{
return v___x_4502_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFnReply___boxed(lean_object* v_f_4505_, lean_object* v_a_4506_){
_start:
{
lean_object* v_res_4507_; 
v_res_4507_ = l_Lasm_JS_Function_ofFnReply(v_f_4505_);
return v_res_4507_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object* v_f_4510_){
_start:
{
lean_object* v___x_4512_; 
v___x_4512_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_4512_) == 0)
{
lean_object* v___x_4513_; lean_object* v___x_4514_; 
lean_dec_ref_known(v___x_4512_, 1);
v___x_4513_ = ((lean_object*)(l_Lasm_JS_Function_ofSyncFn___closed__0));
v___x_4514_ = lasm_js_sync_start(v___x_4513_);
if (lean_obj_tag(v___x_4514_) == 0)
{
uint8_t v___x_4515_; lean_object* v___x_4516_; lean_object* v_a_4517_; uint32_t v___x_4518_; uint64_t v___x_4519_; lean_object* v___x_4520_; uint32_t v___x_4521_; lean_object* v___x_4522_; 
lean_dec_ref_known(v___x_4514_, 1);
v___x_4515_ = 1;
v___x_4516_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_register(v___x_4515_, v_f_4510_);
v_a_4517_ = lean_ctor_get(v___x_4516_, 0);
lean_inc(v_a_4517_);
lean_dec_ref(v___x_4516_);
v___x_4518_ = 210;
v___x_4519_ = 2ULL;
v___x_4520_ = l_ByteArray_empty;
v___x_4521_ = lean_unbox_uint32(v_a_4517_);
lean_dec(v_a_4517_);
v___x_4522_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_4518_, v___x_4521_, v___x_4519_, v___x_4520_);
if (lean_obj_tag(v___x_4522_) == 0)
{
lean_object* v_a_4523_; lean_object* v___x_4524_; 
v_a_4523_ = lean_ctor_get(v___x_4522_, 0);
lean_inc(v_a_4523_);
lean_dec_ref_known(v___x_4522_, 1);
v___x_4524_ = l_Lasm_JS_Wire_decode(v_a_4523_);
lean_dec(v_a_4523_);
if (lean_obj_tag(v___x_4524_) == 0)
{
lean_object* v_a_4525_; lean_object* v___x_4526_; lean_object* v___x_4527_; 
v_a_4525_ = lean_ctor_get(v___x_4524_, 0);
lean_inc(v_a_4525_);
lean_dec_ref_known(v___x_4524_, 1);
v___x_4526_ = ((lean_object*)(l_Lasm_JS_Function_ofSyncFn___closed__1));
v___x_4527_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v___x_4526_, v_a_4525_);
return v___x_4527_;
}
else
{
lean_object* v_a_4528_; lean_object* v___x_4530_; uint8_t v_isShared_4531_; uint8_t v_isSharedCheck_4535_; 
v_a_4528_ = lean_ctor_get(v___x_4524_, 0);
v_isSharedCheck_4535_ = !lean_is_exclusive(v___x_4524_);
if (v_isSharedCheck_4535_ == 0)
{
v___x_4530_ = v___x_4524_;
v_isShared_4531_ = v_isSharedCheck_4535_;
goto v_resetjp_4529_;
}
else
{
lean_inc(v_a_4528_);
lean_dec(v___x_4524_);
v___x_4530_ = lean_box(0);
v_isShared_4531_ = v_isSharedCheck_4535_;
goto v_resetjp_4529_;
}
v_resetjp_4529_:
{
lean_object* v___x_4533_; 
if (v_isShared_4531_ == 0)
{
v___x_4533_ = v___x_4530_;
goto v_reusejp_4532_;
}
else
{
lean_object* v_reuseFailAlloc_4534_; 
v_reuseFailAlloc_4534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4534_, 0, v_a_4528_);
v___x_4533_ = v_reuseFailAlloc_4534_;
goto v_reusejp_4532_;
}
v_reusejp_4532_:
{
return v___x_4533_;
}
}
}
}
else
{
lean_object* v_a_4536_; lean_object* v___x_4538_; uint8_t v_isShared_4539_; uint8_t v_isSharedCheck_4543_; 
v_a_4536_ = lean_ctor_get(v___x_4522_, 0);
v_isSharedCheck_4543_ = !lean_is_exclusive(v___x_4522_);
if (v_isSharedCheck_4543_ == 0)
{
v___x_4538_ = v___x_4522_;
v_isShared_4539_ = v_isSharedCheck_4543_;
goto v_resetjp_4537_;
}
else
{
lean_inc(v_a_4536_);
lean_dec(v___x_4522_);
v___x_4538_ = lean_box(0);
v_isShared_4539_ = v_isSharedCheck_4543_;
goto v_resetjp_4537_;
}
v_resetjp_4537_:
{
lean_object* v___x_4541_; 
if (v_isShared_4539_ == 0)
{
v___x_4541_ = v___x_4538_;
goto v_reusejp_4540_;
}
else
{
lean_object* v_reuseFailAlloc_4542_; 
v_reuseFailAlloc_4542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4542_, 0, v_a_4536_);
v___x_4541_ = v_reuseFailAlloc_4542_;
goto v_reusejp_4540_;
}
v_reusejp_4540_:
{
return v___x_4541_;
}
}
}
}
else
{
lean_object* v_a_4544_; lean_object* v___x_4546_; uint8_t v_isShared_4547_; uint8_t v_isSharedCheck_4551_; 
lean_dec_ref(v_f_4510_);
v_a_4544_ = lean_ctor_get(v___x_4514_, 0);
v_isSharedCheck_4551_ = !lean_is_exclusive(v___x_4514_);
if (v_isSharedCheck_4551_ == 0)
{
v___x_4546_ = v___x_4514_;
v_isShared_4547_ = v_isSharedCheck_4551_;
goto v_resetjp_4545_;
}
else
{
lean_inc(v_a_4544_);
lean_dec(v___x_4514_);
v___x_4546_ = lean_box(0);
v_isShared_4547_ = v_isSharedCheck_4551_;
goto v_resetjp_4545_;
}
v_resetjp_4545_:
{
lean_object* v___x_4549_; 
if (v_isShared_4547_ == 0)
{
v___x_4549_ = v___x_4546_;
goto v_reusejp_4548_;
}
else
{
lean_object* v_reuseFailAlloc_4550_; 
v_reuseFailAlloc_4550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4550_, 0, v_a_4544_);
v___x_4549_ = v_reuseFailAlloc_4550_;
goto v_reusejp_4548_;
}
v_reusejp_4548_:
{
return v___x_4549_;
}
}
}
}
else
{
lean_object* v_a_4552_; lean_object* v___x_4554_; uint8_t v_isShared_4555_; uint8_t v_isSharedCheck_4559_; 
lean_dec_ref(v_f_4510_);
v_a_4552_ = lean_ctor_get(v___x_4512_, 0);
v_isSharedCheck_4559_ = !lean_is_exclusive(v___x_4512_);
if (v_isSharedCheck_4559_ == 0)
{
v___x_4554_ = v___x_4512_;
v_isShared_4555_ = v_isSharedCheck_4559_;
goto v_resetjp_4553_;
}
else
{
lean_inc(v_a_4552_);
lean_dec(v___x_4512_);
v___x_4554_ = lean_box(0);
v_isShared_4555_ = v_isSharedCheck_4559_;
goto v_resetjp_4553_;
}
v_resetjp_4553_:
{
lean_object* v___x_4557_; 
if (v_isShared_4555_ == 0)
{
v___x_4557_ = v___x_4554_;
goto v_reusejp_4556_;
}
else
{
lean_object* v_reuseFailAlloc_4558_; 
v_reuseFailAlloc_4558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4558_, 0, v_a_4552_);
v___x_4557_ = v_reuseFailAlloc_4558_;
goto v_reusejp_4556_;
}
v_reusejp_4556_:
{
return v___x_4557_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn___boxed(lean_object* v_f_4560_, lean_object* v_a_4561_){
_start:
{
lean_object* v_res_4562_; 
v_res_4562_ = l_Lasm_JS_Function_ofSyncFn(v_f_4560_);
return v_res_4562_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg(lean_object* v_inst_4564_, lean_object* v_args_4565_, lean_object* v_i_4566_){
_start:
{
lean_object* v___x_4568_; lean_object* v___x_4569_; lean_object* v___x_4570_; lean_object* v___x_4571_; lean_object* v___x_4572_; lean_object* v___x_4573_; uint8_t v___x_4574_; 
v___x_4568_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg___closed__0));
v___x_4569_ = lean_unsigned_to_nat(1u);
v___x_4570_ = lean_nat_add(v_i_4566_, v___x_4569_);
v___x_4571_ = l_Nat_reprFast(v___x_4570_);
v___x_4572_ = lean_string_append(v___x_4568_, v___x_4571_);
lean_dec_ref(v___x_4571_);
v___x_4573_ = lean_array_get_size(v_args_4565_);
v___x_4574_ = lean_nat_dec_lt(v_i_4566_, v___x_4573_);
if (v___x_4574_ == 0)
{
lean_object* v___x_4575_; lean_object* v___x_4576_; 
v___x_4575_ = lean_box(0);
v___x_4576_ = l_Lasm_JS_decodeAs___redArg(v_inst_4564_, v___x_4572_, v___x_4575_);
lean_dec_ref(v___x_4572_);
return v___x_4576_;
}
else
{
lean_object* v___x_4577_; lean_object* v___x_4578_; 
v___x_4577_ = lean_array_fget_borrowed(v_args_4565_, v_i_4566_);
lean_inc(v___x_4577_);
v___x_4578_ = l_Lasm_JS_decodeAs___redArg(v_inst_4564_, v___x_4572_, v___x_4577_);
lean_dec_ref(v___x_4572_);
return v___x_4578_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg___boxed(lean_object* v_inst_4579_, lean_object* v_args_4580_, lean_object* v_i_4581_, lean_object* v_a_4582_){
_start:
{
lean_object* v_res_4583_; 
v_res_4583_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg(v_inst_4579_, v_args_4580_, v_i_4581_);
lean_dec(v_i_4581_);
lean_dec_ref(v_args_4580_);
return v_res_4583_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument(lean_object* v_00_u03b1_4584_, lean_object* v_inst_4585_, lean_object* v_args_4586_, lean_object* v_i_4587_){
_start:
{
lean_object* v___x_4589_; 
v___x_4589_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg(v_inst_4585_, v_args_4586_, v_i_4587_);
return v___x_4589_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___boxed(lean_object* v_00_u03b1_4590_, lean_object* v_inst_4591_, lean_object* v_args_4592_, lean_object* v_i_4593_, lean_object* v_a_4594_){
_start:
{
lean_object* v_res_4595_; 
v_res_4595_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument(v_00_u03b1_4590_, v_inst_4591_, v_args_4592_, v_i_4593_);
lean_dec(v_i_4593_);
lean_dec_ref(v_args_4592_);
return v_res_4595_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___lam__0(lean_object* v_inst_4596_, lean_object* v_x_4597_){
_start:
{
if (lean_obj_tag(v_x_4597_) == 0)
{
lean_object* v_a_4599_; lean_object* v___x_4601_; uint8_t v_isShared_4602_; uint8_t v_isSharedCheck_4607_; 
lean_dec_ref(v_inst_4596_);
v_a_4599_ = lean_ctor_get(v_x_4597_, 0);
v_isSharedCheck_4607_ = !lean_is_exclusive(v_x_4597_);
if (v_isSharedCheck_4607_ == 0)
{
v___x_4601_ = v_x_4597_;
v_isShared_4602_ = v_isSharedCheck_4607_;
goto v_resetjp_4600_;
}
else
{
lean_inc(v_a_4599_);
lean_dec(v_x_4597_);
v___x_4601_ = lean_box(0);
v_isShared_4602_ = v_isSharedCheck_4607_;
goto v_resetjp_4600_;
}
v_resetjp_4600_:
{
lean_object* v___x_4604_; 
if (v_isShared_4602_ == 0)
{
v___x_4604_ = v___x_4601_;
goto v_reusejp_4603_;
}
else
{
lean_object* v_reuseFailAlloc_4606_; 
v_reuseFailAlloc_4606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4606_, 0, v_a_4599_);
v___x_4604_ = v_reuseFailAlloc_4606_;
goto v_reusejp_4603_;
}
v_reusejp_4603_:
{
lean_object* v___x_4605_; 
v___x_4605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4605_, 0, v___x_4604_);
return v___x_4605_;
}
}
}
else
{
lean_object* v_a_4608_; lean_object* v___x_4610_; uint8_t v_isShared_4611_; uint8_t v_isSharedCheck_4617_; 
v_a_4608_ = lean_ctor_get(v_x_4597_, 0);
v_isSharedCheck_4617_ = !lean_is_exclusive(v_x_4597_);
if (v_isSharedCheck_4617_ == 0)
{
v___x_4610_ = v_x_4597_;
v_isShared_4611_ = v_isSharedCheck_4617_;
goto v_resetjp_4609_;
}
else
{
lean_inc(v_a_4608_);
lean_dec(v_x_4597_);
v___x_4610_ = lean_box(0);
v_isShared_4611_ = v_isSharedCheck_4617_;
goto v_resetjp_4609_;
}
v_resetjp_4609_:
{
lean_object* v___x_4612_; lean_object* v___x_4614_; 
v___x_4612_ = lean_apply_1(v_inst_4596_, v_a_4608_);
if (v_isShared_4611_ == 0)
{
lean_ctor_set(v___x_4610_, 0, v___x_4612_);
v___x_4614_ = v___x_4610_;
goto v_reusejp_4613_;
}
else
{
lean_object* v_reuseFailAlloc_4616_; 
v_reuseFailAlloc_4616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4616_, 0, v___x_4612_);
v___x_4614_ = v_reuseFailAlloc_4616_;
goto v_reusejp_4613_;
}
v_reusejp_4613_:
{
lean_object* v___x_4615_; 
v___x_4615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4615_, 0, v___x_4614_);
return v___x_4615_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___lam__0___boxed(lean_object* v_inst_4618_, lean_object* v_x_4619_, lean_object* v___y_4620_){
_start:
{
lean_object* v_res_4621_; 
v_res_4621_ = l_Lasm_JS_Function_ofFn1___redArg___lam__0(v_inst_4618_, v_x_4619_);
return v_res_4621_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___lam__1(lean_object* v_f_4622_, lean_object* v___f_4623_, lean_object* v_x_4624_){
_start:
{
if (lean_obj_tag(v_x_4624_) == 0)
{
lean_object* v_a_4626_; lean_object* v___x_4628_; uint8_t v_isShared_4629_; uint8_t v_isSharedCheck_4634_; 
lean_dec_ref(v___f_4623_);
lean_dec_ref(v_f_4622_);
v_a_4626_ = lean_ctor_get(v_x_4624_, 0);
v_isSharedCheck_4634_ = !lean_is_exclusive(v_x_4624_);
if (v_isSharedCheck_4634_ == 0)
{
v___x_4628_ = v_x_4624_;
v_isShared_4629_ = v_isSharedCheck_4634_;
goto v_resetjp_4627_;
}
else
{
lean_inc(v_a_4626_);
lean_dec(v_x_4624_);
v___x_4628_ = lean_box(0);
v_isShared_4629_ = v_isSharedCheck_4634_;
goto v_resetjp_4627_;
}
v_resetjp_4627_:
{
lean_object* v___x_4631_; 
if (v_isShared_4629_ == 0)
{
v___x_4631_ = v___x_4628_;
goto v_reusejp_4630_;
}
else
{
lean_object* v_reuseFailAlloc_4633_; 
v_reuseFailAlloc_4633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4633_, 0, v_a_4626_);
v___x_4631_ = v_reuseFailAlloc_4633_;
goto v_reusejp_4630_;
}
v_reusejp_4630_:
{
lean_object* v___x_4632_; 
v___x_4632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4632_, 0, v___x_4631_);
return v___x_4632_;
}
}
}
else
{
lean_object* v_a_4635_; lean_object* v___x_4636_; uint8_t v___x_4637_; lean_object* v___x_4638_; lean_object* v___x_4639_; 
v_a_4635_ = lean_ctor_get(v_x_4624_, 0);
lean_inc(v_a_4635_);
lean_dec_ref_known(v_x_4624_, 1);
v___x_4636_ = lean_unsigned_to_nat(0u);
v___x_4637_ = 0;
v___x_4638_ = lean_apply_2(v_f_4622_, v_a_4635_, lean_box(0));
v___x_4639_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4636_, v___x_4637_, v___x_4638_, v___f_4623_);
return v___x_4639_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___lam__1___boxed(lean_object* v_f_4640_, lean_object* v___f_4641_, lean_object* v_x_4642_, lean_object* v___y_4643_){
_start:
{
lean_object* v_res_4644_; 
v_res_4644_ = l_Lasm_JS_Function_ofFn1___redArg___lam__1(v_f_4640_, v___f_4641_, v_x_4642_);
return v_res_4644_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___lam__2(lean_object* v___f_4645_, lean_object* v_inst_4646_, lean_object* v_args_4647_){
_start:
{
lean_object* v___x_4649_; uint8_t v___x_4650_; lean_object* v_val_4652_; lean_object* v___x_4655_; 
v___x_4649_ = lean_unsigned_to_nat(0u);
v___x_4650_ = 0;
v___x_4655_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg(v_inst_4646_, v_args_4647_, v___x_4649_);
if (lean_obj_tag(v___x_4655_) == 0)
{
lean_object* v_a_4656_; lean_object* v___x_4658_; uint8_t v_isShared_4659_; uint8_t v_isSharedCheck_4663_; 
v_a_4656_ = lean_ctor_get(v___x_4655_, 0);
v_isSharedCheck_4663_ = !lean_is_exclusive(v___x_4655_);
if (v_isSharedCheck_4663_ == 0)
{
v___x_4658_ = v___x_4655_;
v_isShared_4659_ = v_isSharedCheck_4663_;
goto v_resetjp_4657_;
}
else
{
lean_inc(v_a_4656_);
lean_dec(v___x_4655_);
v___x_4658_ = lean_box(0);
v_isShared_4659_ = v_isSharedCheck_4663_;
goto v_resetjp_4657_;
}
v_resetjp_4657_:
{
lean_object* v___x_4661_; 
if (v_isShared_4659_ == 0)
{
lean_ctor_set_tag(v___x_4658_, 1);
v___x_4661_ = v___x_4658_;
goto v_reusejp_4660_;
}
else
{
lean_object* v_reuseFailAlloc_4662_; 
v_reuseFailAlloc_4662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4662_, 0, v_a_4656_);
v___x_4661_ = v_reuseFailAlloc_4662_;
goto v_reusejp_4660_;
}
v_reusejp_4660_:
{
v_val_4652_ = v___x_4661_;
goto v___jp_4651_;
}
}
}
else
{
lean_object* v_a_4664_; lean_object* v___x_4666_; uint8_t v_isShared_4667_; uint8_t v_isSharedCheck_4671_; 
v_a_4664_ = lean_ctor_get(v___x_4655_, 0);
v_isSharedCheck_4671_ = !lean_is_exclusive(v___x_4655_);
if (v_isSharedCheck_4671_ == 0)
{
v___x_4666_ = v___x_4655_;
v_isShared_4667_ = v_isSharedCheck_4671_;
goto v_resetjp_4665_;
}
else
{
lean_inc(v_a_4664_);
lean_dec(v___x_4655_);
v___x_4666_ = lean_box(0);
v_isShared_4667_ = v_isSharedCheck_4671_;
goto v_resetjp_4665_;
}
v_resetjp_4665_:
{
lean_object* v___x_4669_; 
if (v_isShared_4667_ == 0)
{
lean_ctor_set_tag(v___x_4666_, 0);
v___x_4669_ = v___x_4666_;
goto v_reusejp_4668_;
}
else
{
lean_object* v_reuseFailAlloc_4670_; 
v_reuseFailAlloc_4670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4670_, 0, v_a_4664_);
v___x_4669_ = v_reuseFailAlloc_4670_;
goto v_reusejp_4668_;
}
v_reusejp_4668_:
{
v_val_4652_ = v___x_4669_;
goto v___jp_4651_;
}
}
}
v___jp_4651_:
{
lean_object* v___x_4653_; lean_object* v___x_4654_; 
v___x_4653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4653_, 0, v_val_4652_);
v___x_4654_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4649_, v___x_4650_, v___x_4653_, v___f_4645_);
return v___x_4654_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___lam__2___boxed(lean_object* v___f_4672_, lean_object* v_inst_4673_, lean_object* v_args_4674_, lean_object* v___y_4675_){
_start:
{
lean_object* v_res_4676_; 
v_res_4676_ = l_Lasm_JS_Function_ofFn1___redArg___lam__2(v___f_4672_, v_inst_4673_, v_args_4674_);
lean_dec_ref(v_args_4674_);
return v_res_4676_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg(lean_object* v_inst_4677_, lean_object* v_inst_4678_, lean_object* v_f_4679_){
_start:
{
lean_object* v___f_4681_; lean_object* v___f_4682_; lean_object* v___f_4683_; lean_object* v___x_4684_; 
v___f_4681_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn1___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4681_, 0, v_inst_4678_);
v___f_4682_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn1___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_4682_, 0, v_f_4679_);
lean_closure_set(v___f_4682_, 1, v___f_4681_);
v___f_4683_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn1___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_4683_, 0, v___f_4682_);
lean_closure_set(v___f_4683_, 1, v_inst_4677_);
v___x_4684_ = l_Lasm_JS_Function_ofFn(v___f_4683_);
return v___x_4684_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___boxed(lean_object* v_inst_4685_, lean_object* v_inst_4686_, lean_object* v_f_4687_, lean_object* v_a_4688_){
_start:
{
lean_object* v_res_4689_; 
v_res_4689_ = l_Lasm_JS_Function_ofFn1___redArg(v_inst_4685_, v_inst_4686_, v_f_4687_);
return v_res_4689_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1(lean_object* v_00_u03b1_4690_, lean_object* v_00_u03b2_4691_, lean_object* v_inst_4692_, lean_object* v_inst_4693_, lean_object* v_f_4694_){
_start:
{
lean_object* v___x_4696_; 
v___x_4696_ = l_Lasm_JS_Function_ofFn1___redArg(v_inst_4692_, v_inst_4693_, v_f_4694_);
return v___x_4696_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___boxed(lean_object* v_00_u03b1_4697_, lean_object* v_00_u03b2_4698_, lean_object* v_inst_4699_, lean_object* v_inst_4700_, lean_object* v_f_4701_, lean_object* v_a_4702_){
_start:
{
lean_object* v_res_4703_; 
v_res_4703_ = l_Lasm_JS_Function_ofFn1(v_00_u03b1_4697_, v_00_u03b2_4698_, v_inst_4699_, v_inst_4700_, v_f_4701_);
return v_res_4703_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___lam__1(lean_object* v_f_4704_, lean_object* v_a_4705_, lean_object* v___f_4706_, lean_object* v_x_4707_){
_start:
{
if (lean_obj_tag(v_x_4707_) == 0)
{
lean_object* v_a_4709_; lean_object* v___x_4711_; uint8_t v_isShared_4712_; uint8_t v_isSharedCheck_4717_; 
lean_dec_ref(v___f_4706_);
lean_dec(v_a_4705_);
lean_dec_ref(v_f_4704_);
v_a_4709_ = lean_ctor_get(v_x_4707_, 0);
v_isSharedCheck_4717_ = !lean_is_exclusive(v_x_4707_);
if (v_isSharedCheck_4717_ == 0)
{
v___x_4711_ = v_x_4707_;
v_isShared_4712_ = v_isSharedCheck_4717_;
goto v_resetjp_4710_;
}
else
{
lean_inc(v_a_4709_);
lean_dec(v_x_4707_);
v___x_4711_ = lean_box(0);
v_isShared_4712_ = v_isSharedCheck_4717_;
goto v_resetjp_4710_;
}
v_resetjp_4710_:
{
lean_object* v___x_4714_; 
if (v_isShared_4712_ == 0)
{
v___x_4714_ = v___x_4711_;
goto v_reusejp_4713_;
}
else
{
lean_object* v_reuseFailAlloc_4716_; 
v_reuseFailAlloc_4716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4716_, 0, v_a_4709_);
v___x_4714_ = v_reuseFailAlloc_4716_;
goto v_reusejp_4713_;
}
v_reusejp_4713_:
{
lean_object* v___x_4715_; 
v___x_4715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4715_, 0, v___x_4714_);
return v___x_4715_;
}
}
}
else
{
lean_object* v_a_4718_; lean_object* v___x_4719_; uint8_t v___x_4720_; lean_object* v___x_4721_; lean_object* v___x_4722_; 
v_a_4718_ = lean_ctor_get(v_x_4707_, 0);
lean_inc(v_a_4718_);
lean_dec_ref_known(v_x_4707_, 1);
v___x_4719_ = lean_unsigned_to_nat(0u);
v___x_4720_ = 0;
v___x_4721_ = lean_apply_3(v_f_4704_, v_a_4705_, v_a_4718_, lean_box(0));
v___x_4722_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4719_, v___x_4720_, v___x_4721_, v___f_4706_);
return v___x_4722_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___lam__1___boxed(lean_object* v_f_4723_, lean_object* v_a_4724_, lean_object* v___f_4725_, lean_object* v_x_4726_, lean_object* v___y_4727_){
_start:
{
lean_object* v_res_4728_; 
v_res_4728_ = l_Lasm_JS_Function_ofFn2___redArg___lam__1(v_f_4723_, v_a_4724_, v___f_4725_, v_x_4726_);
return v_res_4728_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___lam__0(lean_object* v_f_4729_, lean_object* v___f_4730_, lean_object* v_inst_4731_, lean_object* v_args_4732_, lean_object* v_x_4733_){
_start:
{
if (lean_obj_tag(v_x_4733_) == 0)
{
lean_object* v_a_4735_; lean_object* v___x_4737_; uint8_t v_isShared_4738_; uint8_t v_isSharedCheck_4743_; 
lean_dec_ref(v_inst_4731_);
lean_dec_ref(v___f_4730_);
lean_dec_ref(v_f_4729_);
v_a_4735_ = lean_ctor_get(v_x_4733_, 0);
v_isSharedCheck_4743_ = !lean_is_exclusive(v_x_4733_);
if (v_isSharedCheck_4743_ == 0)
{
v___x_4737_ = v_x_4733_;
v_isShared_4738_ = v_isSharedCheck_4743_;
goto v_resetjp_4736_;
}
else
{
lean_inc(v_a_4735_);
lean_dec(v_x_4733_);
v___x_4737_ = lean_box(0);
v_isShared_4738_ = v_isSharedCheck_4743_;
goto v_resetjp_4736_;
}
v_resetjp_4736_:
{
lean_object* v___x_4740_; 
if (v_isShared_4738_ == 0)
{
v___x_4740_ = v___x_4737_;
goto v_reusejp_4739_;
}
else
{
lean_object* v_reuseFailAlloc_4742_; 
v_reuseFailAlloc_4742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4742_, 0, v_a_4735_);
v___x_4740_ = v_reuseFailAlloc_4742_;
goto v_reusejp_4739_;
}
v_reusejp_4739_:
{
lean_object* v___x_4741_; 
v___x_4741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4741_, 0, v___x_4740_);
return v___x_4741_;
}
}
}
else
{
lean_object* v_a_4744_; lean_object* v___x_4746_; uint8_t v_isShared_4747_; uint8_t v_isSharedCheck_4765_; 
v_a_4744_ = lean_ctor_get(v_x_4733_, 0);
v_isSharedCheck_4765_ = !lean_is_exclusive(v_x_4733_);
if (v_isSharedCheck_4765_ == 0)
{
v___x_4746_ = v_x_4733_;
v_isShared_4747_ = v_isSharedCheck_4765_;
goto v_resetjp_4745_;
}
else
{
lean_inc(v_a_4744_);
lean_dec(v_x_4733_);
v___x_4746_ = lean_box(0);
v_isShared_4747_ = v_isSharedCheck_4765_;
goto v_resetjp_4745_;
}
v_resetjp_4745_:
{
lean_object* v___f_4748_; lean_object* v___x_4749_; lean_object* v___x_4750_; uint8_t v___x_4751_; lean_object* v_val_4753_; lean_object* v___x_4756_; 
v___f_4748_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn2___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_4748_, 0, v_f_4729_);
lean_closure_set(v___f_4748_, 1, v_a_4744_);
lean_closure_set(v___f_4748_, 2, v___f_4730_);
v___x_4749_ = lean_unsigned_to_nat(1u);
v___x_4750_ = lean_unsigned_to_nat(0u);
v___x_4751_ = 0;
v___x_4756_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg(v_inst_4731_, v_args_4732_, v___x_4749_);
if (lean_obj_tag(v___x_4756_) == 0)
{
lean_object* v_a_4757_; lean_object* v___x_4759_; 
v_a_4757_ = lean_ctor_get(v___x_4756_, 0);
lean_inc(v_a_4757_);
lean_dec_ref_known(v___x_4756_, 1);
if (v_isShared_4747_ == 0)
{
lean_ctor_set(v___x_4746_, 0, v_a_4757_);
v___x_4759_ = v___x_4746_;
goto v_reusejp_4758_;
}
else
{
lean_object* v_reuseFailAlloc_4760_; 
v_reuseFailAlloc_4760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4760_, 0, v_a_4757_);
v___x_4759_ = v_reuseFailAlloc_4760_;
goto v_reusejp_4758_;
}
v_reusejp_4758_:
{
v_val_4753_ = v___x_4759_;
goto v___jp_4752_;
}
}
else
{
lean_object* v_a_4761_; lean_object* v___x_4763_; 
v_a_4761_ = lean_ctor_get(v___x_4756_, 0);
lean_inc(v_a_4761_);
lean_dec_ref_known(v___x_4756_, 1);
if (v_isShared_4747_ == 0)
{
lean_ctor_set_tag(v___x_4746_, 0);
lean_ctor_set(v___x_4746_, 0, v_a_4761_);
v___x_4763_ = v___x_4746_;
goto v_reusejp_4762_;
}
else
{
lean_object* v_reuseFailAlloc_4764_; 
v_reuseFailAlloc_4764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4764_, 0, v_a_4761_);
v___x_4763_ = v_reuseFailAlloc_4764_;
goto v_reusejp_4762_;
}
v_reusejp_4762_:
{
v_val_4753_ = v___x_4763_;
goto v___jp_4752_;
}
}
v___jp_4752_:
{
lean_object* v___x_4754_; lean_object* v___x_4755_; 
v___x_4754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4754_, 0, v_val_4753_);
v___x_4755_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4750_, v___x_4751_, v___x_4754_, v___f_4748_);
return v___x_4755_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___lam__0___boxed(lean_object* v_f_4766_, lean_object* v___f_4767_, lean_object* v_inst_4768_, lean_object* v_args_4769_, lean_object* v_x_4770_, lean_object* v___y_4771_){
_start:
{
lean_object* v_res_4772_; 
v_res_4772_ = l_Lasm_JS_Function_ofFn2___redArg___lam__0(v_f_4766_, v___f_4767_, v_inst_4768_, v_args_4769_, v_x_4770_);
lean_dec_ref(v_args_4769_);
return v_res_4772_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___lam__2(lean_object* v_f_4773_, lean_object* v___f_4774_, lean_object* v_inst_4775_, lean_object* v_inst_4776_, lean_object* v_args_4777_){
_start:
{
lean_object* v___f_4779_; lean_object* v___x_4780_; uint8_t v___x_4781_; lean_object* v_val_4783_; lean_object* v___x_4786_; 
lean_inc_ref(v_args_4777_);
v___f_4779_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn2___redArg___lam__0___boxed), 6, 4);
lean_closure_set(v___f_4779_, 0, v_f_4773_);
lean_closure_set(v___f_4779_, 1, v___f_4774_);
lean_closure_set(v___f_4779_, 2, v_inst_4775_);
lean_closure_set(v___f_4779_, 3, v_args_4777_);
v___x_4780_ = lean_unsigned_to_nat(0u);
v___x_4781_ = 0;
v___x_4786_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg(v_inst_4776_, v_args_4777_, v___x_4780_);
lean_dec_ref(v_args_4777_);
if (lean_obj_tag(v___x_4786_) == 0)
{
lean_object* v_a_4787_; lean_object* v___x_4789_; uint8_t v_isShared_4790_; uint8_t v_isSharedCheck_4794_; 
v_a_4787_ = lean_ctor_get(v___x_4786_, 0);
v_isSharedCheck_4794_ = !lean_is_exclusive(v___x_4786_);
if (v_isSharedCheck_4794_ == 0)
{
v___x_4789_ = v___x_4786_;
v_isShared_4790_ = v_isSharedCheck_4794_;
goto v_resetjp_4788_;
}
else
{
lean_inc(v_a_4787_);
lean_dec(v___x_4786_);
v___x_4789_ = lean_box(0);
v_isShared_4790_ = v_isSharedCheck_4794_;
goto v_resetjp_4788_;
}
v_resetjp_4788_:
{
lean_object* v___x_4792_; 
if (v_isShared_4790_ == 0)
{
lean_ctor_set_tag(v___x_4789_, 1);
v___x_4792_ = v___x_4789_;
goto v_reusejp_4791_;
}
else
{
lean_object* v_reuseFailAlloc_4793_; 
v_reuseFailAlloc_4793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4793_, 0, v_a_4787_);
v___x_4792_ = v_reuseFailAlloc_4793_;
goto v_reusejp_4791_;
}
v_reusejp_4791_:
{
v_val_4783_ = v___x_4792_;
goto v___jp_4782_;
}
}
}
else
{
lean_object* v_a_4795_; lean_object* v___x_4797_; uint8_t v_isShared_4798_; uint8_t v_isSharedCheck_4802_; 
v_a_4795_ = lean_ctor_get(v___x_4786_, 0);
v_isSharedCheck_4802_ = !lean_is_exclusive(v___x_4786_);
if (v_isSharedCheck_4802_ == 0)
{
v___x_4797_ = v___x_4786_;
v_isShared_4798_ = v_isSharedCheck_4802_;
goto v_resetjp_4796_;
}
else
{
lean_inc(v_a_4795_);
lean_dec(v___x_4786_);
v___x_4797_ = lean_box(0);
v_isShared_4798_ = v_isSharedCheck_4802_;
goto v_resetjp_4796_;
}
v_resetjp_4796_:
{
lean_object* v___x_4800_; 
if (v_isShared_4798_ == 0)
{
lean_ctor_set_tag(v___x_4797_, 0);
v___x_4800_ = v___x_4797_;
goto v_reusejp_4799_;
}
else
{
lean_object* v_reuseFailAlloc_4801_; 
v_reuseFailAlloc_4801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4801_, 0, v_a_4795_);
v___x_4800_ = v_reuseFailAlloc_4801_;
goto v_reusejp_4799_;
}
v_reusejp_4799_:
{
v_val_4783_ = v___x_4800_;
goto v___jp_4782_;
}
}
}
v___jp_4782_:
{
lean_object* v___x_4784_; lean_object* v___x_4785_; 
v___x_4784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4784_, 0, v_val_4783_);
v___x_4785_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4780_, v___x_4781_, v___x_4784_, v___f_4779_);
return v___x_4785_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___lam__2___boxed(lean_object* v_f_4803_, lean_object* v___f_4804_, lean_object* v_inst_4805_, lean_object* v_inst_4806_, lean_object* v_args_4807_, lean_object* v___y_4808_){
_start:
{
lean_object* v_res_4809_; 
v_res_4809_ = l_Lasm_JS_Function_ofFn2___redArg___lam__2(v_f_4803_, v___f_4804_, v_inst_4805_, v_inst_4806_, v_args_4807_);
return v_res_4809_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg(lean_object* v_inst_4810_, lean_object* v_inst_4811_, lean_object* v_inst_4812_, lean_object* v_f_4813_){
_start:
{
lean_object* v___f_4815_; lean_object* v___f_4816_; lean_object* v___x_4817_; 
v___f_4815_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn1___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4815_, 0, v_inst_4812_);
v___f_4816_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn2___redArg___lam__2___boxed), 6, 4);
lean_closure_set(v___f_4816_, 0, v_f_4813_);
lean_closure_set(v___f_4816_, 1, v___f_4815_);
lean_closure_set(v___f_4816_, 2, v_inst_4811_);
lean_closure_set(v___f_4816_, 3, v_inst_4810_);
v___x_4817_ = l_Lasm_JS_Function_ofFn(v___f_4816_);
return v___x_4817_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___boxed(lean_object* v_inst_4818_, lean_object* v_inst_4819_, lean_object* v_inst_4820_, lean_object* v_f_4821_, lean_object* v_a_4822_){
_start:
{
lean_object* v_res_4823_; 
v_res_4823_ = l_Lasm_JS_Function_ofFn2___redArg(v_inst_4818_, v_inst_4819_, v_inst_4820_, v_f_4821_);
return v_res_4823_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2(lean_object* v_00_u03b1_4824_, lean_object* v_00_u03b2_4825_, lean_object* v_00_u03b3_4826_, lean_object* v_inst_4827_, lean_object* v_inst_4828_, lean_object* v_inst_4829_, lean_object* v_f_4830_){
_start:
{
lean_object* v___x_4832_; 
v___x_4832_ = l_Lasm_JS_Function_ofFn2___redArg(v_inst_4827_, v_inst_4828_, v_inst_4829_, v_f_4830_);
return v___x_4832_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___boxed(lean_object* v_00_u03b1_4833_, lean_object* v_00_u03b2_4834_, lean_object* v_00_u03b3_4835_, lean_object* v_inst_4836_, lean_object* v_inst_4837_, lean_object* v_inst_4838_, lean_object* v_f_4839_, lean_object* v_a_4840_){
_start:
{
lean_object* v_res_4841_; 
v_res_4841_ = l_Lasm_JS_Function_ofFn2(v_00_u03b1_4833_, v_00_u03b2_4834_, v_00_u03b3_4835_, v_inst_4836_, v_inst_4837_, v_inst_4838_, v_f_4839_);
return v_res_4841_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn2___redArg___lam__0(lean_object* v_inst_4842_, lean_object* v_inst_4843_, lean_object* v_f_4844_, lean_object* v_inst_4845_, lean_object* v_args_4846_){
_start:
{
lean_object* v___x_4848_; lean_object* v___x_4849_; 
v___x_4848_ = lean_unsigned_to_nat(0u);
v___x_4849_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg(v_inst_4842_, v_args_4846_, v___x_4848_);
if (lean_obj_tag(v___x_4849_) == 0)
{
lean_object* v_a_4850_; lean_object* v___x_4851_; lean_object* v___x_4852_; 
v_a_4850_ = lean_ctor_get(v___x_4849_, 0);
lean_inc(v_a_4850_);
lean_dec_ref_known(v___x_4849_, 1);
v___x_4851_ = lean_unsigned_to_nat(1u);
v___x_4852_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg(v_inst_4843_, v_args_4846_, v___x_4851_);
if (lean_obj_tag(v___x_4852_) == 0)
{
lean_object* v_a_4853_; lean_object* v___x_4854_; 
v_a_4853_ = lean_ctor_get(v___x_4852_, 0);
lean_inc(v_a_4853_);
lean_dec_ref_known(v___x_4852_, 1);
v___x_4854_ = lean_apply_3(v_f_4844_, v_a_4850_, v_a_4853_, lean_box(0));
if (lean_obj_tag(v___x_4854_) == 0)
{
lean_object* v_a_4855_; lean_object* v___x_4857_; uint8_t v_isShared_4858_; uint8_t v_isSharedCheck_4863_; 
v_a_4855_ = lean_ctor_get(v___x_4854_, 0);
v_isSharedCheck_4863_ = !lean_is_exclusive(v___x_4854_);
if (v_isSharedCheck_4863_ == 0)
{
v___x_4857_ = v___x_4854_;
v_isShared_4858_ = v_isSharedCheck_4863_;
goto v_resetjp_4856_;
}
else
{
lean_inc(v_a_4855_);
lean_dec(v___x_4854_);
v___x_4857_ = lean_box(0);
v_isShared_4858_ = v_isSharedCheck_4863_;
goto v_resetjp_4856_;
}
v_resetjp_4856_:
{
lean_object* v___x_4859_; lean_object* v___x_4861_; 
v___x_4859_ = lean_apply_1(v_inst_4845_, v_a_4855_);
if (v_isShared_4858_ == 0)
{
lean_ctor_set(v___x_4857_, 0, v___x_4859_);
v___x_4861_ = v___x_4857_;
goto v_reusejp_4860_;
}
else
{
lean_object* v_reuseFailAlloc_4862_; 
v_reuseFailAlloc_4862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4862_, 0, v___x_4859_);
v___x_4861_ = v_reuseFailAlloc_4862_;
goto v_reusejp_4860_;
}
v_reusejp_4860_:
{
return v___x_4861_;
}
}
}
else
{
lean_object* v_a_4864_; lean_object* v___x_4866_; uint8_t v_isShared_4867_; uint8_t v_isSharedCheck_4871_; 
lean_dec_ref(v_inst_4845_);
v_a_4864_ = lean_ctor_get(v___x_4854_, 0);
v_isSharedCheck_4871_ = !lean_is_exclusive(v___x_4854_);
if (v_isSharedCheck_4871_ == 0)
{
v___x_4866_ = v___x_4854_;
v_isShared_4867_ = v_isSharedCheck_4871_;
goto v_resetjp_4865_;
}
else
{
lean_inc(v_a_4864_);
lean_dec(v___x_4854_);
v___x_4866_ = lean_box(0);
v_isShared_4867_ = v_isSharedCheck_4871_;
goto v_resetjp_4865_;
}
v_resetjp_4865_:
{
lean_object* v___x_4869_; 
if (v_isShared_4867_ == 0)
{
v___x_4869_ = v___x_4866_;
goto v_reusejp_4868_;
}
else
{
lean_object* v_reuseFailAlloc_4870_; 
v_reuseFailAlloc_4870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4870_, 0, v_a_4864_);
v___x_4869_ = v_reuseFailAlloc_4870_;
goto v_reusejp_4868_;
}
v_reusejp_4868_:
{
return v___x_4869_;
}
}
}
}
else
{
lean_object* v_a_4872_; lean_object* v___x_4874_; uint8_t v_isShared_4875_; uint8_t v_isSharedCheck_4879_; 
lean_dec(v_a_4850_);
lean_dec_ref(v_inst_4845_);
lean_dec_ref(v_f_4844_);
v_a_4872_ = lean_ctor_get(v___x_4852_, 0);
v_isSharedCheck_4879_ = !lean_is_exclusive(v___x_4852_);
if (v_isSharedCheck_4879_ == 0)
{
v___x_4874_ = v___x_4852_;
v_isShared_4875_ = v_isSharedCheck_4879_;
goto v_resetjp_4873_;
}
else
{
lean_inc(v_a_4872_);
lean_dec(v___x_4852_);
v___x_4874_ = lean_box(0);
v_isShared_4875_ = v_isSharedCheck_4879_;
goto v_resetjp_4873_;
}
v_resetjp_4873_:
{
lean_object* v___x_4877_; 
if (v_isShared_4875_ == 0)
{
v___x_4877_ = v___x_4874_;
goto v_reusejp_4876_;
}
else
{
lean_object* v_reuseFailAlloc_4878_; 
v_reuseFailAlloc_4878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4878_, 0, v_a_4872_);
v___x_4877_ = v_reuseFailAlloc_4878_;
goto v_reusejp_4876_;
}
v_reusejp_4876_:
{
return v___x_4877_;
}
}
}
}
else
{
lean_object* v_a_4880_; lean_object* v___x_4882_; uint8_t v_isShared_4883_; uint8_t v_isSharedCheck_4887_; 
lean_dec_ref(v_inst_4845_);
lean_dec_ref(v_f_4844_);
lean_dec_ref(v_inst_4843_);
v_a_4880_ = lean_ctor_get(v___x_4849_, 0);
v_isSharedCheck_4887_ = !lean_is_exclusive(v___x_4849_);
if (v_isSharedCheck_4887_ == 0)
{
v___x_4882_ = v___x_4849_;
v_isShared_4883_ = v_isSharedCheck_4887_;
goto v_resetjp_4881_;
}
else
{
lean_inc(v_a_4880_);
lean_dec(v___x_4849_);
v___x_4882_ = lean_box(0);
v_isShared_4883_ = v_isSharedCheck_4887_;
goto v_resetjp_4881_;
}
v_resetjp_4881_:
{
lean_object* v___x_4885_; 
if (v_isShared_4883_ == 0)
{
v___x_4885_ = v___x_4882_;
goto v_reusejp_4884_;
}
else
{
lean_object* v_reuseFailAlloc_4886_; 
v_reuseFailAlloc_4886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4886_, 0, v_a_4880_);
v___x_4885_ = v_reuseFailAlloc_4886_;
goto v_reusejp_4884_;
}
v_reusejp_4884_:
{
return v___x_4885_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn2___redArg___lam__0___boxed(lean_object* v_inst_4888_, lean_object* v_inst_4889_, lean_object* v_f_4890_, lean_object* v_inst_4891_, lean_object* v_args_4892_, lean_object* v___y_4893_){
_start:
{
lean_object* v_res_4894_; 
v_res_4894_ = l_Lasm_JS_Function_ofSyncFn2___redArg___lam__0(v_inst_4888_, v_inst_4889_, v_f_4890_, v_inst_4891_, v_args_4892_);
lean_dec_ref(v_args_4892_);
return v_res_4894_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn2___redArg(lean_object* v_inst_4895_, lean_object* v_inst_4896_, lean_object* v_inst_4897_, lean_object* v_f_4898_){
_start:
{
lean_object* v___f_4900_; lean_object* v___x_4901_; 
v___f_4900_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofSyncFn2___redArg___lam__0___boxed), 6, 4);
lean_closure_set(v___f_4900_, 0, v_inst_4895_);
lean_closure_set(v___f_4900_, 1, v_inst_4896_);
lean_closure_set(v___f_4900_, 2, v_f_4898_);
lean_closure_set(v___f_4900_, 3, v_inst_4897_);
v___x_4901_ = l_Lasm_JS_Function_ofSyncFn(v___f_4900_);
return v___x_4901_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn2___redArg___boxed(lean_object* v_inst_4902_, lean_object* v_inst_4903_, lean_object* v_inst_4904_, lean_object* v_f_4905_, lean_object* v_a_4906_){
_start:
{
lean_object* v_res_4907_; 
v_res_4907_ = l_Lasm_JS_Function_ofSyncFn2___redArg(v_inst_4902_, v_inst_4903_, v_inst_4904_, v_f_4905_);
return v_res_4907_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn2(lean_object* v_00_u03b1_4908_, lean_object* v_00_u03b2_4909_, lean_object* v_00_u03b3_4910_, lean_object* v_inst_4911_, lean_object* v_inst_4912_, lean_object* v_inst_4913_, lean_object* v_f_4914_){
_start:
{
lean_object* v___x_4916_; 
v___x_4916_ = l_Lasm_JS_Function_ofSyncFn2___redArg(v_inst_4911_, v_inst_4912_, v_inst_4913_, v_f_4914_);
return v___x_4916_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn2___boxed(lean_object* v_00_u03b1_4917_, lean_object* v_00_u03b2_4918_, lean_object* v_00_u03b3_4919_, lean_object* v_inst_4920_, lean_object* v_inst_4921_, lean_object* v_inst_4922_, lean_object* v_f_4923_, lean_object* v_a_4924_){
_start:
{
lean_object* v_res_4925_; 
v_res_4925_ = l_Lasm_JS_Function_ofSyncFn2(v_00_u03b1_4917_, v_00_u03b2_4918_, v_00_u03b3_4919_, v_inst_4920_, v_inst_4921_, v_inst_4922_, v_f_4923_);
return v_res_4925_;
}
}
static lean_object* _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_4939_; lean_object* v___x_4940_; 
v___x_4939_ = lean_unsigned_to_nat(8u);
v___x_4940_ = lean_nat_to_int(v___x_4939_);
return v___x_4940_;
}
}
static lean_object* _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_4947_; lean_object* v___x_4948_; 
v___x_4947_ = lean_unsigned_to_nat(10u);
v___x_4948_ = lean_nat_to_int(v___x_4947_);
return v___x_4948_;
}
}
static lean_object* _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_4955_; lean_object* v___x_4956_; 
v___x_4955_ = lean_unsigned_to_nat(13u);
v___x_4956_ = lean_nat_to_int(v___x_4955_);
return v___x_4956_;
}
}
static lean_object* _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__20(void){
_start:
{
lean_object* v___x_4960_; lean_object* v___x_4961_; 
v___x_4960_ = lean_unsigned_to_nat(9u);
v___x_4961_ = lean_nat_to_int(v___x_4960_);
return v___x_4961_;
}
}
static lean_object* _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__22(void){
_start:
{
lean_object* v___x_4963_; lean_object* v___x_4964_; 
v___x_4963_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__0));
v___x_4964_ = lean_string_length(v___x_4963_);
return v___x_4964_;
}
}
static lean_object* _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__23(void){
_start:
{
lean_object* v___x_4965_; lean_object* v___x_4966_; 
v___x_4965_ = lean_obj_once(&l_Lasm_JS_instReprBinding_repr___redArg___closed__22, &l_Lasm_JS_instReprBinding_repr___redArg___closed__22_once, _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__22);
v___x_4966_ = lean_nat_to_int(v___x_4965_);
return v___x_4966_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instReprBinding_repr___redArg(lean_object* v_x_4971_){
_start:
{
lean_object* v_name_4972_; lean_object* v_module_4973_; lean_object* v_path_4974_; uint8_t v_construct_4975_; lean_object* v_arity_4976_; lean_object* v___x_4977_; lean_object* v___x_4978_; lean_object* v___x_4979_; lean_object* v___x_4980_; lean_object* v___x_4981_; lean_object* v___x_4982_; uint8_t v___x_4983_; lean_object* v___x_4984_; lean_object* v___x_4985_; lean_object* v___x_4986_; lean_object* v___x_4987_; lean_object* v___x_4988_; lean_object* v___x_4989_; lean_object* v___x_4990_; lean_object* v___x_4991_; lean_object* v___x_4992_; lean_object* v___x_4993_; lean_object* v___x_4994_; lean_object* v___x_4995_; lean_object* v___x_4996_; lean_object* v___x_4997_; lean_object* v___x_4998_; lean_object* v___x_4999_; lean_object* v___x_5000_; lean_object* v___x_5001_; lean_object* v___x_5002_; lean_object* v___x_5003_; lean_object* v___x_5004_; lean_object* v___x_5005_; lean_object* v___x_5006_; lean_object* v___x_5007_; lean_object* v___x_5008_; lean_object* v___x_5009_; lean_object* v___x_5010_; lean_object* v___x_5011_; lean_object* v___x_5012_; lean_object* v___x_5013_; lean_object* v___x_5014_; lean_object* v___x_5015_; lean_object* v___x_5016_; lean_object* v___x_5017_; lean_object* v___x_5018_; lean_object* v___x_5019_; lean_object* v___x_5020_; lean_object* v___x_5021_; lean_object* v___x_5022_; lean_object* v___x_5023_; lean_object* v___x_5024_; lean_object* v___x_5025_; lean_object* v___x_5026_; lean_object* v___x_5027_; lean_object* v___x_5028_; lean_object* v___x_5029_; lean_object* v___x_5030_; lean_object* v___x_5031_; lean_object* v___x_5032_; lean_object* v___x_5033_; lean_object* v___x_5034_; lean_object* v___x_5035_; lean_object* v___x_5036_; 
v_name_4972_ = lean_ctor_get(v_x_4971_, 0);
lean_inc_ref(v_name_4972_);
v_module_4973_ = lean_ctor_get(v_x_4971_, 1);
lean_inc_ref(v_module_4973_);
v_path_4974_ = lean_ctor_get(v_x_4971_, 2);
lean_inc_ref(v_path_4974_);
v_construct_4975_ = lean_ctor_get_uint8(v_x_4971_, sizeof(void*)*4);
v_arity_4976_ = lean_ctor_get(v_x_4971_, 3);
lean_inc(v_arity_4976_);
lean_dec_ref(v_x_4971_);
v___x_4977_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__5));
v___x_4978_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__6));
v___x_4979_ = lean_obj_once(&l_Lasm_JS_instReprBinding_repr___redArg___closed__7, &l_Lasm_JS_instReprBinding_repr___redArg___closed__7_once, _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__7);
v___x_4980_ = l_String_quote(v_name_4972_);
v___x_4981_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4981_, 0, v___x_4980_);
v___x_4982_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4982_, 0, v___x_4979_);
lean_ctor_set(v___x_4982_, 1, v___x_4981_);
v___x_4983_ = 0;
v___x_4984_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4984_, 0, v___x_4982_);
lean_ctor_set_uint8(v___x_4984_, sizeof(void*)*1, v___x_4983_);
v___x_4985_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4985_, 0, v___x_4978_);
lean_ctor_set(v___x_4985_, 1, v___x_4984_);
v___x_4986_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__9));
v___x_4987_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4987_, 0, v___x_4985_);
lean_ctor_set(v___x_4987_, 1, v___x_4986_);
v___x_4988_ = lean_box(1);
v___x_4989_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4989_, 0, v___x_4987_);
lean_ctor_set(v___x_4989_, 1, v___x_4988_);
v___x_4990_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__11));
v___x_4991_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4991_, 0, v___x_4989_);
lean_ctor_set(v___x_4991_, 1, v___x_4990_);
v___x_4992_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4992_, 0, v___x_4991_);
lean_ctor_set(v___x_4992_, 1, v___x_4977_);
v___x_4993_ = lean_obj_once(&l_Lasm_JS_instReprBinding_repr___redArg___closed__12, &l_Lasm_JS_instReprBinding_repr___redArg___closed__12_once, _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__12);
v___x_4994_ = l_String_quote(v_module_4973_);
v___x_4995_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4995_, 0, v___x_4994_);
v___x_4996_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4996_, 0, v___x_4993_);
lean_ctor_set(v___x_4996_, 1, v___x_4995_);
v___x_4997_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4997_, 0, v___x_4996_);
lean_ctor_set_uint8(v___x_4997_, sizeof(void*)*1, v___x_4983_);
v___x_4998_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4998_, 0, v___x_4992_);
lean_ctor_set(v___x_4998_, 1, v___x_4997_);
v___x_4999_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4999_, 0, v___x_4998_);
lean_ctor_set(v___x_4999_, 1, v___x_4986_);
v___x_5000_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5000_, 0, v___x_4999_);
lean_ctor_set(v___x_5000_, 1, v___x_4988_);
v___x_5001_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__14));
v___x_5002_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5002_, 0, v___x_5000_);
lean_ctor_set(v___x_5002_, 1, v___x_5001_);
v___x_5003_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5003_, 0, v___x_5002_);
lean_ctor_set(v___x_5003_, 1, v___x_4977_);
v___x_5004_ = l_String_quote(v_path_4974_);
v___x_5005_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5005_, 0, v___x_5004_);
v___x_5006_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5006_, 0, v___x_4979_);
lean_ctor_set(v___x_5006_, 1, v___x_5005_);
v___x_5007_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5007_, 0, v___x_5006_);
lean_ctor_set_uint8(v___x_5007_, sizeof(void*)*1, v___x_4983_);
v___x_5008_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5008_, 0, v___x_5003_);
lean_ctor_set(v___x_5008_, 1, v___x_5007_);
v___x_5009_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5009_, 0, v___x_5008_);
lean_ctor_set(v___x_5009_, 1, v___x_4986_);
v___x_5010_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5010_, 0, v___x_5009_);
lean_ctor_set(v___x_5010_, 1, v___x_4988_);
v___x_5011_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__16));
v___x_5012_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5012_, 0, v___x_5010_);
lean_ctor_set(v___x_5012_, 1, v___x_5011_);
v___x_5013_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5013_, 0, v___x_5012_);
lean_ctor_set(v___x_5013_, 1, v___x_4977_);
v___x_5014_ = lean_obj_once(&l_Lasm_JS_instReprBinding_repr___redArg___closed__17, &l_Lasm_JS_instReprBinding_repr___redArg___closed__17_once, _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__17);
v___x_5015_ = l_Bool_repr___redArg(v_construct_4975_);
v___x_5016_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5016_, 0, v___x_5014_);
lean_ctor_set(v___x_5016_, 1, v___x_5015_);
v___x_5017_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5017_, 0, v___x_5016_);
lean_ctor_set_uint8(v___x_5017_, sizeof(void*)*1, v___x_4983_);
v___x_5018_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5018_, 0, v___x_5013_);
lean_ctor_set(v___x_5018_, 1, v___x_5017_);
v___x_5019_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5019_, 0, v___x_5018_);
lean_ctor_set(v___x_5019_, 1, v___x_4986_);
v___x_5020_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5020_, 0, v___x_5019_);
lean_ctor_set(v___x_5020_, 1, v___x_4988_);
v___x_5021_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__19));
v___x_5022_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5022_, 0, v___x_5020_);
lean_ctor_set(v___x_5022_, 1, v___x_5021_);
v___x_5023_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5023_, 0, v___x_5022_);
lean_ctor_set(v___x_5023_, 1, v___x_4977_);
v___x_5024_ = lean_obj_once(&l_Lasm_JS_instReprBinding_repr___redArg___closed__20, &l_Lasm_JS_instReprBinding_repr___redArg___closed__20_once, _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__20);
v___x_5025_ = l_Nat_reprFast(v_arity_4976_);
v___x_5026_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5026_, 0, v___x_5025_);
v___x_5027_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5027_, 0, v___x_5024_);
lean_ctor_set(v___x_5027_, 1, v___x_5026_);
v___x_5028_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5028_, 0, v___x_5027_);
lean_ctor_set_uint8(v___x_5028_, sizeof(void*)*1, v___x_4983_);
v___x_5029_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5029_, 0, v___x_5023_);
lean_ctor_set(v___x_5029_, 1, v___x_5028_);
v___x_5030_ = lean_obj_once(&l_Lasm_JS_instReprBinding_repr___redArg___closed__23, &l_Lasm_JS_instReprBinding_repr___redArg___closed__23_once, _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__23);
v___x_5031_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__24));
v___x_5032_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5032_, 0, v___x_5031_);
lean_ctor_set(v___x_5032_, 1, v___x_5029_);
v___x_5033_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__25));
v___x_5034_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5034_, 0, v___x_5032_);
lean_ctor_set(v___x_5034_, 1, v___x_5033_);
v___x_5035_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5035_, 0, v___x_5030_);
lean_ctor_set(v___x_5035_, 1, v___x_5034_);
v___x_5036_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5036_, 0, v___x_5035_);
lean_ctor_set_uint8(v___x_5036_, sizeof(void*)*1, v___x_4983_);
return v___x_5036_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instReprBinding_repr(lean_object* v_x_5037_, lean_object* v_prec_5038_){
_start:
{
lean_object* v___x_5039_; 
v___x_5039_ = l_Lasm_JS_instReprBinding_repr___redArg(v_x_5037_);
return v___x_5039_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instReprBinding_repr___boxed(lean_object* v_x_5040_, lean_object* v_prec_5041_){
_start:
{
lean_object* v_res_5042_; 
v_res_5042_ = l_Lasm_JS_instReprBinding_repr(v_x_5040_, v_prec_5041_);
lean_dec(v_prec_5041_);
return v_res_5042_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object* v_b_5047_){
_start:
{
lean_object* v_name_5048_; lean_object* v_module_5049_; lean_object* v_path_5050_; lean_object* v___x_5051_; lean_object* v___x_5052_; lean_object* v___x_5053_; lean_object* v___x_5054_; lean_object* v___x_5055_; lean_object* v___y_5057_; lean_object* v___x_5061_; lean_object* v___x_5062_; uint8_t v___x_5063_; 
v_name_5048_ = lean_ctor_get(v_b_5047_, 0);
v_module_5049_ = lean_ctor_get(v_b_5047_, 1);
v_path_5050_ = lean_ctor_get(v_b_5047_, 2);
v___x_5051_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context___closed__0));
v___x_5052_ = lean_string_append(v___x_5051_, v_name_5048_);
v___x_5053_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__3));
v___x_5054_ = lean_string_append(v___x_5052_, v___x_5053_);
v___x_5055_ = lean_string_append(v___x_5054_, v_module_5049_);
v___x_5061_ = lean_string_utf8_byte_size(v_path_5050_);
v___x_5062_ = lean_unsigned_to_nat(0u);
v___x_5063_ = lean_nat_dec_eq(v___x_5061_, v___x_5062_);
if (v___x_5063_ == 0)
{
lean_object* v___x_5064_; lean_object* v___x_5065_; 
v___x_5064_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context___closed__1));
v___x_5065_ = lean_string_append(v___x_5064_, v_path_5050_);
v___y_5057_ = v___x_5065_;
goto v___jp_5056_;
}
else
{
lean_object* v___x_5066_; 
v___x_5066_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
v___y_5057_ = v___x_5066_;
goto v___jp_5056_;
}
v___jp_5056_:
{
lean_object* v___x_5058_; lean_object* v___x_5059_; lean_object* v___x_5060_; 
v___x_5058_ = lean_string_append(v___x_5055_, v___y_5057_);
lean_dec_ref(v___y_5057_);
v___x_5059_ = ((lean_object*)(l_Lasm_JS_Wire_read___closed__1));
v___x_5060_ = lean_string_append(v___x_5058_, v___x_5059_);
return v___x_5060_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context___boxed(lean_object* v_b_5067_){
_start:
{
lean_object* v_res_5068_; 
v_res_5068_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5067_);
lean_dec_ref(v_b_5067_);
return v_res_5068_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object* v_b_5069_, lean_object* v_args_5070_){
_start:
{
lean_object* v_name_5071_; lean_object* v_module_5072_; lean_object* v_path_5073_; lean_object* v___x_5074_; lean_object* v___x_5075_; lean_object* v___x_5076_; lean_object* v___x_5077_; lean_object* v___x_5078_; lean_object* v___x_5079_; lean_object* v___x_5080_; lean_object* v___x_5081_; lean_object* v___x_5082_; lean_object* v___x_5083_; lean_object* v___x_5084_; 
v_name_5071_ = lean_ctor_get(v_b_5069_, 0);
v_module_5072_ = lean_ctor_get(v_b_5069_, 1);
v_path_5073_ = lean_ctor_get(v_b_5069_, 2);
lean_inc_ref(v_name_5071_);
v___x_5074_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5074_, 0, v_name_5071_);
lean_inc_ref(v_module_5072_);
v___x_5075_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5075_, 0, v_module_5072_);
lean_inc_ref(v_path_5073_);
v___x_5076_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5076_, 0, v_path_5073_);
v___x_5077_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5077_, 0, v_args_5070_);
v___x_5078_ = lean_unsigned_to_nat(4u);
v___x_5079_ = lean_mk_empty_array_with_capacity(v___x_5078_);
v___x_5080_ = lean_array_push(v___x_5079_, v___x_5074_);
v___x_5081_ = lean_array_push(v___x_5080_, v___x_5075_);
v___x_5082_ = lean_array_push(v___x_5081_, v___x_5076_);
v___x_5083_ = lean_array_push(v___x_5082_, v___x_5077_);
v___x_5084_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5084_, 0, v___x_5083_);
return v___x_5084_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload___boxed(lean_object* v_b_5085_, lean_object* v_args_5086_){
_start:
{
lean_object* v_res_5087_; 
v_res_5087_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5085_, v_args_5086_);
lean_dec_ref(v_b_5085_);
return v_res_5087_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___redArg(lean_object* v_inst_5088_, lean_object* v_b_5089_, lean_object* v_args_5090_, uint8_t v_await_5091_){
_start:
{
uint64_t v___y_5094_; uint64_t v___y_5095_; uint8_t v_mode_5138_; uint64_t v___x_5139_; uint64_t v___y_5141_; 
v_mode_5138_ = lean_ctor_get_uint8(v_inst_5088_, sizeof(void*)*2);
v___x_5139_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v_mode_5138_);
if (v_await_5091_ == 0)
{
uint64_t v___x_5146_; 
v___x_5146_ = 0ULL;
v___y_5141_ = v___x_5146_;
goto v___jp_5140_;
}
else
{
uint64_t v___x_5147_; 
v___x_5147_ = 2ULL;
v___y_5141_ = v___x_5147_;
goto v___jp_5140_;
}
v___jp_5093_:
{
uint64_t v_flags_5096_; uint32_t v___x_5097_; lean_object* v___x_5098_; uint32_t v___x_5099_; lean_object* v___x_5100_; 
v_flags_5096_ = lean_uint64_lor(v___y_5094_, v___y_5095_);
v___x_5097_ = 214;
v___x_5098_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5089_, v_args_5090_);
v___x_5099_ = 0;
v___x_5100_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5097_, v_flags_5096_, v___x_5098_, v___x_5099_);
lean_dec(v___x_5098_);
if (lean_obj_tag(v___x_5100_) == 0)
{
if (lean_obj_tag(v___x_5100_) == 0)
{
lean_object* v_a_5101_; lean_object* v___x_5102_; 
v_a_5101_ = lean_ctor_get(v___x_5100_, 0);
lean_inc(v_a_5101_);
lean_dec_ref_known(v___x_5100_, 1);
v___x_5102_ = l_Lasm_JS_Wire_decode(v_a_5101_);
lean_dec(v_a_5101_);
if (lean_obj_tag(v___x_5102_) == 0)
{
lean_object* v_a_5103_; lean_object* v___x_5104_; lean_object* v___x_5105_; 
v_a_5103_ = lean_ctor_get(v___x_5102_, 0);
lean_inc(v_a_5103_);
lean_dec_ref_known(v___x_5102_, 1);
v___x_5104_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5089_);
v___x_5105_ = l_Lasm_JS_decodeAs___redArg(v_inst_5088_, v___x_5104_, v_a_5103_);
lean_dec_ref(v___x_5104_);
return v___x_5105_;
}
else
{
lean_object* v_a_5106_; lean_object* v___x_5108_; uint8_t v_isShared_5109_; uint8_t v_isSharedCheck_5113_; 
lean_dec_ref(v_inst_5088_);
v_a_5106_ = lean_ctor_get(v___x_5102_, 0);
v_isSharedCheck_5113_ = !lean_is_exclusive(v___x_5102_);
if (v_isSharedCheck_5113_ == 0)
{
v___x_5108_ = v___x_5102_;
v_isShared_5109_ = v_isSharedCheck_5113_;
goto v_resetjp_5107_;
}
else
{
lean_inc(v_a_5106_);
lean_dec(v___x_5102_);
v___x_5108_ = lean_box(0);
v_isShared_5109_ = v_isSharedCheck_5113_;
goto v_resetjp_5107_;
}
v_resetjp_5107_:
{
lean_object* v___x_5111_; 
if (v_isShared_5109_ == 0)
{
v___x_5111_ = v___x_5108_;
goto v_reusejp_5110_;
}
else
{
lean_object* v_reuseFailAlloc_5112_; 
v_reuseFailAlloc_5112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5112_, 0, v_a_5106_);
v___x_5111_ = v_reuseFailAlloc_5112_;
goto v_reusejp_5110_;
}
v_reusejp_5110_:
{
return v___x_5111_;
}
}
}
}
else
{
lean_object* v_a_5114_; lean_object* v___x_5116_; uint8_t v_isShared_5117_; uint8_t v_isSharedCheck_5121_; 
lean_dec_ref(v_inst_5088_);
v_a_5114_ = lean_ctor_get(v___x_5100_, 0);
v_isSharedCheck_5121_ = !lean_is_exclusive(v___x_5100_);
if (v_isSharedCheck_5121_ == 0)
{
v___x_5116_ = v___x_5100_;
v_isShared_5117_ = v_isSharedCheck_5121_;
goto v_resetjp_5115_;
}
else
{
lean_inc(v_a_5114_);
lean_dec(v___x_5100_);
v___x_5116_ = lean_box(0);
v_isShared_5117_ = v_isSharedCheck_5121_;
goto v_resetjp_5115_;
}
v_resetjp_5115_:
{
lean_object* v___x_5119_; 
if (v_isShared_5117_ == 0)
{
lean_ctor_set_tag(v___x_5116_, 1);
v___x_5119_ = v___x_5116_;
goto v_reusejp_5118_;
}
else
{
lean_object* v_reuseFailAlloc_5120_; 
v_reuseFailAlloc_5120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5120_, 0, v_a_5114_);
v___x_5119_ = v_reuseFailAlloc_5120_;
goto v_reusejp_5118_;
}
v_reusejp_5118_:
{
return v___x_5119_;
}
}
}
}
else
{
lean_object* v_a_5122_; lean_object* v___x_5124_; uint8_t v_isShared_5125_; uint8_t v_isSharedCheck_5137_; 
lean_dec_ref(v_inst_5088_);
v_a_5122_ = lean_ctor_get(v___x_5100_, 0);
v_isSharedCheck_5137_ = !lean_is_exclusive(v___x_5100_);
if (v_isSharedCheck_5137_ == 0)
{
v___x_5124_ = v___x_5100_;
v_isShared_5125_ = v_isSharedCheck_5137_;
goto v_resetjp_5123_;
}
else
{
lean_inc(v_a_5122_);
lean_dec(v___x_5100_);
v___x_5124_ = lean_box(0);
v_isShared_5125_ = v_isSharedCheck_5137_;
goto v_resetjp_5123_;
}
v_resetjp_5123_:
{
lean_object* v___x_5126_; lean_object* v___x_5127_; lean_object* v___x_5128_; lean_object* v___x_5129_; lean_object* v___x_5130_; lean_object* v___x_5131_; lean_object* v___x_5132_; lean_object* v___x_5133_; lean_object* v___x_5135_; 
v___x_5126_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__0));
v___x_5127_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5089_);
v___x_5128_ = lean_string_append(v___x_5126_, v___x_5127_);
lean_dec_ref(v___x_5127_);
v___x_5129_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__1));
v___x_5130_ = lean_string_append(v___x_5128_, v___x_5129_);
v___x_5131_ = lean_io_error_to_string(v_a_5122_);
v___x_5132_ = lean_string_append(v___x_5130_, v___x_5131_);
lean_dec_ref(v___x_5131_);
v___x_5133_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5133_, 0, v___x_5132_);
if (v_isShared_5125_ == 0)
{
lean_ctor_set(v___x_5124_, 0, v___x_5133_);
v___x_5135_ = v___x_5124_;
goto v_reusejp_5134_;
}
else
{
lean_object* v_reuseFailAlloc_5136_; 
v_reuseFailAlloc_5136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5136_, 0, v___x_5133_);
v___x_5135_ = v_reuseFailAlloc_5136_;
goto v_reusejp_5134_;
}
v_reusejp_5134_:
{
return v___x_5135_;
}
}
}
}
v___jp_5140_:
{
uint8_t v_construct_5142_; uint64_t v___x_5143_; 
v_construct_5142_ = lean_ctor_get_uint8(v_b_5089_, sizeof(void*)*4);
v___x_5143_ = lean_uint64_lor(v___x_5139_, v___y_5141_);
if (v_construct_5142_ == 0)
{
uint64_t v___x_5144_; 
v___x_5144_ = 0ULL;
v___y_5094_ = v___x_5143_;
v___y_5095_ = v___x_5144_;
goto v___jp_5093_;
}
else
{
uint64_t v___x_5145_; 
v___x_5145_ = 4ULL;
v___y_5094_ = v___x_5143_;
v___y_5095_ = v___x_5145_;
goto v___jp_5093_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___redArg___boxed(lean_object* v_inst_5148_, lean_object* v_b_5149_, lean_object* v_args_5150_, lean_object* v_await_5151_, lean_object* v_a_5152_){
_start:
{
uint8_t v_await_boxed_5153_; lean_object* v_res_5154_; 
v_await_boxed_5153_ = lean_unbox(v_await_5151_);
v_res_5154_ = l_Lasm_JS_Binding_invoke___redArg(v_inst_5148_, v_b_5149_, v_args_5150_, v_await_boxed_5153_);
lean_dec_ref(v_b_5149_);
return v_res_5154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke(lean_object* v_00_u03b1_5155_, lean_object* v_inst_5156_, lean_object* v_b_5157_, lean_object* v_args_5158_, uint8_t v_await_5159_){
_start:
{
lean_object* v___x_5161_; 
v___x_5161_ = l_Lasm_JS_Binding_invoke___redArg(v_inst_5156_, v_b_5157_, v_args_5158_, v_await_5159_);
return v___x_5161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___boxed(lean_object* v_00_u03b1_5162_, lean_object* v_inst_5163_, lean_object* v_b_5164_, lean_object* v_args_5165_, lean_object* v_await_5166_, lean_object* v_a_5167_){
_start:
{
uint8_t v_await_boxed_5168_; lean_object* v_res_5169_; 
v_await_boxed_5168_ = lean_unbox(v_await_5166_);
v_res_5169_ = l_Lasm_JS_Binding_invoke(v_00_u03b1_5162_, v_inst_5163_, v_b_5164_, v_args_5165_, v_await_boxed_5168_);
lean_dec_ref(v_b_5164_);
return v_res_5169_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___redArg(lean_object* v_inst_5170_, lean_object* v_b_5171_, lean_object* v_args_5172_){
_start:
{
uint8_t v_mode_5174_; uint8_t v_construct_5175_; lean_object* v___x_5176_; uint32_t v___x_5177_; uint64_t v___x_5178_; uint64_t v___y_5180_; 
v_mode_5174_ = lean_ctor_get_uint8(v_inst_5170_, sizeof(void*)*2);
v_construct_5175_ = lean_ctor_get_uint8(v_b_5171_, sizeof(void*)*4);
v___x_5176_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5171_);
v___x_5177_ = 214;
v___x_5178_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v_mode_5174_);
if (v_construct_5175_ == 0)
{
uint64_t v___x_5188_; 
v___x_5188_ = 0ULL;
v___y_5180_ = v___x_5188_;
goto v___jp_5179_;
}
else
{
uint64_t v___x_5189_; 
v___x_5189_ = 4ULL;
v___y_5180_ = v___x_5189_;
goto v___jp_5179_;
}
v___jp_5179_:
{
uint64_t v___x_5181_; lean_object* v___x_5182_; lean_object* v___x_5183_; lean_object* v___x_5184_; lean_object* v___x_5185_; lean_object* v___x_5186_; lean_object* v___x_5187_; 
v___x_5181_ = lean_uint64_lor(v___x_5178_, v___y_5180_);
v___x_5182_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5171_, v_args_5172_);
v___x_5183_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__0));
v___x_5184_ = lean_string_append(v___x_5183_, v___x_5176_);
v___x_5185_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__1));
v___x_5186_ = lean_string_append(v___x_5184_, v___x_5185_);
v___x_5187_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg(v_inst_5170_, v___x_5176_, v___x_5177_, v___x_5181_, v___x_5182_, v___x_5186_);
return v___x_5187_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___redArg___boxed(lean_object* v_inst_5190_, lean_object* v_b_5191_, lean_object* v_args_5192_, lean_object* v_a_5193_){
_start:
{
lean_object* v_res_5194_; 
v_res_5194_ = l_Lasm_JS_Binding_invokeAsync___redArg(v_inst_5190_, v_b_5191_, v_args_5192_);
lean_dec_ref(v_b_5191_);
return v_res_5194_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync(lean_object* v_00_u03b1_5195_, lean_object* v_inst_5196_, lean_object* v_b_5197_, lean_object* v_args_5198_){
_start:
{
lean_object* v___x_5200_; 
v___x_5200_ = l_Lasm_JS_Binding_invokeAsync___redArg(v_inst_5196_, v_b_5197_, v_args_5198_);
return v___x_5200_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___boxed(lean_object* v_00_u03b1_5201_, lean_object* v_inst_5202_, lean_object* v_b_5203_, lean_object* v_args_5204_, lean_object* v_a_5205_){
_start:
{
lean_object* v_res_5206_; 
v_res_5206_ = l_Lasm_JS_Binding_invokeAsync(v_00_u03b1_5201_, v_inst_5202_, v_b_5203_, v_args_5204_);
lean_dec_ref(v_b_5203_);
return v_res_5206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOTaskExceptErrorOfFromJS___redArg___lam__0(lean_object* v___x_5207_, lean_object* v_inst_5208_, lean_object* v_b_5209_, lean_object* v_args_5210_){
_start:
{
uint8_t v___x_5212_; lean_object* v___x_5213_; 
v___x_5212_ = 0;
v___x_5213_ = l_Lasm_JS_Binding_invoke___redArg(v___x_5207_, v_b_5209_, v_args_5210_, v___x_5212_);
if (lean_obj_tag(v___x_5213_) == 0)
{
lean_object* v_a_5214_; lean_object* v___x_5215_; 
v_a_5214_ = lean_ctor_get(v___x_5213_, 0);
lean_inc(v_a_5214_);
lean_dec_ref_known(v___x_5213_, 1);
v___x_5215_ = l_Lasm_JS_Value_toTask___redArg(v_a_5214_, v_inst_5208_);
return v___x_5215_;
}
else
{
lean_object* v_a_5216_; lean_object* v___x_5218_; uint8_t v_isShared_5219_; uint8_t v_isSharedCheck_5223_; 
lean_dec_ref(v_inst_5208_);
v_a_5216_ = lean_ctor_get(v___x_5213_, 0);
v_isSharedCheck_5223_ = !lean_is_exclusive(v___x_5213_);
if (v_isSharedCheck_5223_ == 0)
{
v___x_5218_ = v___x_5213_;
v_isShared_5219_ = v_isSharedCheck_5223_;
goto v_resetjp_5217_;
}
else
{
lean_inc(v_a_5216_);
lean_dec(v___x_5213_);
v___x_5218_ = lean_box(0);
v_isShared_5219_ = v_isSharedCheck_5223_;
goto v_resetjp_5217_;
}
v_resetjp_5217_:
{
lean_object* v___x_5221_; 
if (v_isShared_5219_ == 0)
{
v___x_5221_ = v___x_5218_;
goto v_reusejp_5220_;
}
else
{
lean_object* v_reuseFailAlloc_5222_; 
v_reuseFailAlloc_5222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5222_, 0, v_a_5216_);
v___x_5221_ = v_reuseFailAlloc_5222_;
goto v_reusejp_5220_;
}
v_reusejp_5220_:
{
return v___x_5221_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOTaskExceptErrorOfFromJS___redArg___lam__0___boxed(lean_object* v___x_5224_, lean_object* v_inst_5225_, lean_object* v_b_5226_, lean_object* v_args_5227_, lean_object* v___y_5228_){
_start:
{
lean_object* v_res_5229_; 
v_res_5229_ = l_Lasm_JS_instBindableIOTaskExceptErrorOfFromJS___redArg___lam__0(v___x_5224_, v_inst_5225_, v_b_5226_, v_args_5227_);
lean_dec_ref(v_b_5226_);
return v_res_5229_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOTaskExceptErrorOfFromJS___redArg(lean_object* v_inst_5230_){
_start:
{
lean_object* v___x_5231_; lean_object* v___f_5232_; lean_object* v___x_5233_; lean_object* v___x_5234_; 
v___x_5231_ = ((lean_object*)(l_Lasm_JS_instFromJSValue));
v___f_5232_ = lean_alloc_closure((void*)(l_Lasm_JS_instBindableIOTaskExceptErrorOfFromJS___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_5232_, 0, v___x_5231_);
lean_closure_set(v___f_5232_, 1, v_inst_5230_);
v___x_5233_ = lean_unsigned_to_nat(0u);
v___x_5234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5234_, 0, v___x_5233_);
lean_ctor_set(v___x_5234_, 1, v___f_5232_);
return v___x_5234_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOTaskExceptErrorOfFromJS(lean_object* v_00_u03b2_5235_, lean_object* v_inst_5236_){
_start:
{
lean_object* v___x_5237_; 
v___x_5237_ = l_Lasm_JS_instBindableIOTaskExceptErrorOfFromJS___redArg(v_inst_5236_);
return v___x_5237_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOOfFromJS___redArg___lam__0(lean_object* v_inst_5238_, lean_object* v_b_5239_, lean_object* v_args_5240_){
_start:
{
uint8_t v___x_5242_; lean_object* v___x_5243_; 
v___x_5242_ = 1;
v___x_5243_ = l_Lasm_JS_Binding_invoke___redArg(v_inst_5238_, v_b_5239_, v_args_5240_, v___x_5242_);
return v___x_5243_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOOfFromJS___redArg___lam__0___boxed(lean_object* v_inst_5244_, lean_object* v_b_5245_, lean_object* v_args_5246_, lean_object* v___y_5247_){
_start:
{
lean_object* v_res_5248_; 
v_res_5248_ = l_Lasm_JS_instBindableIOOfFromJS___redArg___lam__0(v_inst_5244_, v_b_5245_, v_args_5246_);
lean_dec_ref(v_b_5245_);
return v_res_5248_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOOfFromJS___redArg(lean_object* v_inst_5249_){
_start:
{
lean_object* v___f_5250_; lean_object* v___x_5251_; lean_object* v___x_5252_; 
v___f_5250_ = lean_alloc_closure((void*)(l_Lasm_JS_instBindableIOOfFromJS___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_5250_, 0, v_inst_5249_);
v___x_5251_ = lean_unsigned_to_nat(0u);
v___x_5252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5252_, 0, v___x_5251_);
lean_ctor_set(v___x_5252_, 1, v___f_5250_);
return v___x_5252_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOOfFromJS(lean_object* v_00_u03b2_5253_, lean_object* v_inst_5254_){
_start:
{
lean_object* v___x_5255_; 
v___x_5255_ = l_Lasm_JS_instBindableIOOfFromJS___redArg(v_inst_5254_);
return v___x_5255_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableAsyncOfFromJS___redArg___lam__0(lean_object* v_inst_5256_, lean_object* v_b_5257_, lean_object* v_args_5258_){
_start:
{
lean_object* v___x_5260_; 
v___x_5260_ = l_Lasm_JS_Binding_invokeAsync___redArg(v_inst_5256_, v_b_5257_, v_args_5258_);
return v___x_5260_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableAsyncOfFromJS___redArg___lam__0___boxed(lean_object* v_inst_5261_, lean_object* v_b_5262_, lean_object* v_args_5263_, lean_object* v___y_5264_){
_start:
{
lean_object* v_res_5265_; 
v_res_5265_ = l_Lasm_JS_instBindableAsyncOfFromJS___redArg___lam__0(v_inst_5261_, v_b_5262_, v_args_5263_);
lean_dec_ref(v_b_5262_);
return v_res_5265_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableAsyncOfFromJS___redArg(lean_object* v_inst_5266_){
_start:
{
lean_object* v___f_5267_; lean_object* v___x_5268_; lean_object* v___x_5269_; 
v___f_5267_ = lean_alloc_closure((void*)(l_Lasm_JS_instBindableAsyncOfFromJS___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_5267_, 0, v_inst_5266_);
v___x_5268_ = lean_unsigned_to_nat(0u);
v___x_5269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5269_, 0, v___x_5268_);
lean_ctor_set(v___x_5269_, 1, v___f_5267_);
return v___x_5269_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableAsyncOfFromJS(lean_object* v_00_u03b2_5270_, lean_object* v_inst_5271_){
_start:
{
lean_object* v___x_5272_; 
v___x_5272_ = l_Lasm_JS_instBindableAsyncOfFromJS___redArg(v_inst_5271_);
return v___x_5272_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableForallOfToJS___redArg___lam__0(lean_object* v_inst_5273_, lean_object* v_bind_5274_, lean_object* v_b_5275_, lean_object* v_args_5276_, lean_object* v_a_5277_){
_start:
{
lean_object* v___x_5278_; lean_object* v___x_5279_; lean_object* v___x_5280_; 
v___x_5278_ = lean_apply_1(v_inst_5273_, v_a_5277_);
v___x_5279_ = lean_array_push(v_args_5276_, v___x_5278_);
v___x_5280_ = lean_apply_2(v_bind_5274_, v_b_5275_, v___x_5279_);
return v___x_5280_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableForallOfToJS___redArg(lean_object* v_inst_5281_, lean_object* v_inst_5282_){
_start:
{
lean_object* v_arity_5283_; lean_object* v_bind_5284_; lean_object* v___x_5286_; uint8_t v_isShared_5287_; uint8_t v_isSharedCheck_5294_; 
v_arity_5283_ = lean_ctor_get(v_inst_5282_, 0);
v_bind_5284_ = lean_ctor_get(v_inst_5282_, 1);
v_isSharedCheck_5294_ = !lean_is_exclusive(v_inst_5282_);
if (v_isSharedCheck_5294_ == 0)
{
v___x_5286_ = v_inst_5282_;
v_isShared_5287_ = v_isSharedCheck_5294_;
goto v_resetjp_5285_;
}
else
{
lean_inc(v_bind_5284_);
lean_inc(v_arity_5283_);
lean_dec(v_inst_5282_);
v___x_5286_ = lean_box(0);
v_isShared_5287_ = v_isSharedCheck_5294_;
goto v_resetjp_5285_;
}
v_resetjp_5285_:
{
lean_object* v___f_5288_; lean_object* v___x_5289_; lean_object* v___x_5290_; lean_object* v___x_5292_; 
v___f_5288_ = lean_alloc_closure((void*)(l_Lasm_JS_instBindableForallOfToJS___redArg___lam__0), 5, 2);
lean_closure_set(v___f_5288_, 0, v_inst_5281_);
lean_closure_set(v___f_5288_, 1, v_bind_5284_);
v___x_5289_ = lean_unsigned_to_nat(1u);
v___x_5290_ = lean_nat_add(v_arity_5283_, v___x_5289_);
lean_dec(v_arity_5283_);
if (v_isShared_5287_ == 0)
{
lean_ctor_set(v___x_5286_, 1, v___f_5288_);
lean_ctor_set(v___x_5286_, 0, v___x_5290_);
v___x_5292_ = v___x_5286_;
goto v_reusejp_5291_;
}
else
{
lean_object* v_reuseFailAlloc_5293_; 
v_reuseFailAlloc_5293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5293_, 0, v___x_5290_);
lean_ctor_set(v_reuseFailAlloc_5293_, 1, v___f_5288_);
v___x_5292_ = v_reuseFailAlloc_5293_;
goto v_reusejp_5291_;
}
v_reusejp_5291_:
{
return v___x_5292_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableForallOfToJS(lean_object* v_00_u03b1_5295_, lean_object* v_00_u03b2_5296_, lean_object* v_inst_5297_, lean_object* v_inst_5298_){
_start:
{
lean_object* v___x_5299_; 
v___x_5299_ = l_Lasm_JS_instBindableForallOfToJS___redArg(v_inst_5297_, v_inst_5298_);
return v___x_5299_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_onEdge(){
_start:
{
uint8_t v___x_5301_; 
v___x_5301_ = l_Lasm_JS_isAvailable;
if (v___x_5301_ == 0)
{
lean_object* v___x_5302_; lean_object* v___x_5303_; 
v___x_5302_ = lean_box(v___x_5301_);
v___x_5303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5303_, 0, v___x_5302_);
return v___x_5303_;
}
else
{
uint8_t v___x_5304_; uint32_t v___x_5305_; uint32_t v___x_5306_; uint64_t v___x_5307_; lean_object* v___x_5308_; lean_object* v___x_5309_; 
v___x_5304_ = 0;
v___x_5305_ = 200;
v___x_5306_ = 0;
v___x_5307_ = 0ULL;
v___x_5308_ = l_ByteArray_empty;
v___x_5309_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_5305_, v___x_5306_, v___x_5307_, v___x_5308_);
if (lean_obj_tag(v___x_5309_) == 0)
{
lean_object* v_a_5310_; lean_object* v___x_5312_; uint8_t v_isShared_5313_; uint8_t v_isSharedCheck_5329_; 
v_a_5310_ = lean_ctor_get(v___x_5309_, 0);
v_isSharedCheck_5329_ = !lean_is_exclusive(v___x_5309_);
if (v_isSharedCheck_5329_ == 0)
{
v___x_5312_ = v___x_5309_;
v_isShared_5313_ = v_isSharedCheck_5329_;
goto v_resetjp_5311_;
}
else
{
lean_inc(v_a_5310_);
lean_dec(v___x_5309_);
v___x_5312_ = lean_box(0);
v_isShared_5313_ = v_isSharedCheck_5329_;
goto v_resetjp_5311_;
}
v_resetjp_5311_:
{
lean_object* v___x_5314_; lean_object* v___x_5315_; uint8_t v___x_5316_; 
v___x_5314_ = lean_unsigned_to_nat(8u);
v___x_5315_ = lean_byte_array_size(v_a_5310_);
v___x_5316_ = lean_nat_dec_le(v___x_5314_, v___x_5315_);
if (v___x_5316_ == 0)
{
lean_object* v___x_5317_; lean_object* v___x_5319_; 
lean_dec(v_a_5310_);
v___x_5317_ = lean_box(v___x_5304_);
if (v_isShared_5313_ == 0)
{
lean_ctor_set(v___x_5312_, 0, v___x_5317_);
v___x_5319_ = v___x_5312_;
goto v_reusejp_5318_;
}
else
{
lean_object* v_reuseFailAlloc_5320_; 
v_reuseFailAlloc_5320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5320_, 0, v___x_5317_);
v___x_5319_ = v_reuseFailAlloc_5320_;
goto v_reusejp_5318_;
}
v_reusejp_5318_:
{
return v___x_5319_;
}
}
else
{
lean_object* v___x_5321_; uint8_t v___x_5322_; uint8_t v___x_5323_; uint8_t v___x_5324_; lean_object* v___x_5325_; lean_object* v___x_5327_; 
v___x_5321_ = lean_unsigned_to_nat(4u);
v___x_5322_ = lean_byte_array_get(v_a_5310_, v___x_5321_);
lean_dec(v_a_5310_);
v___x_5323_ = 1;
v___x_5324_ = lean_uint8_dec_eq(v___x_5322_, v___x_5323_);
v___x_5325_ = lean_box(v___x_5324_);
if (v_isShared_5313_ == 0)
{
lean_ctor_set(v___x_5312_, 0, v___x_5325_);
v___x_5327_ = v___x_5312_;
goto v_reusejp_5326_;
}
else
{
lean_object* v_reuseFailAlloc_5328_; 
v_reuseFailAlloc_5328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5328_, 0, v___x_5325_);
v___x_5327_ = v_reuseFailAlloc_5328_;
goto v_reusejp_5326_;
}
v_reusejp_5326_:
{
return v___x_5327_;
}
}
}
}
else
{
lean_object* v_a_5330_; lean_object* v___x_5332_; uint8_t v_isShared_5333_; uint8_t v_isSharedCheck_5337_; 
v_a_5330_ = lean_ctor_get(v___x_5309_, 0);
v_isSharedCheck_5337_ = !lean_is_exclusive(v___x_5309_);
if (v_isSharedCheck_5337_ == 0)
{
v___x_5332_ = v___x_5309_;
v_isShared_5333_ = v_isSharedCheck_5337_;
goto v_resetjp_5331_;
}
else
{
lean_inc(v_a_5330_);
lean_dec(v___x_5309_);
v___x_5332_ = lean_box(0);
v_isShared_5333_ = v_isSharedCheck_5337_;
goto v_resetjp_5331_;
}
v_resetjp_5331_:
{
lean_object* v___x_5335_; 
if (v_isShared_5333_ == 0)
{
v___x_5335_ = v___x_5332_;
goto v_reusejp_5334_;
}
else
{
lean_object* v_reuseFailAlloc_5336_; 
v_reuseFailAlloc_5336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5336_, 0, v_a_5330_);
v___x_5335_ = v_reuseFailAlloc_5336_;
goto v_reusejp_5334_;
}
v_reusejp_5334_:
{
return v___x_5335_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_onEdge___boxed(lean_object* v_a_5338_){
_start:
{
lean_object* v_res_5339_; 
v_res_5339_ = l_Lasm_JS_onEdge();
return v_res_5339_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___at___00Lasm_JS_exportDefault_spec__0(lean_object* v_o_5340_, lean_object* v_key_5341_, lean_object* v_x_5342_){
_start:
{
lean_object* v___x_5344_; lean_object* v___x_5345_; lean_object* v___x_5346_; lean_object* v___x_5347_; lean_object* v___x_5348_; lean_object* v___x_5349_; lean_object* v___x_5350_; lean_object* v___x_5351_; lean_object* v___x_5352_; lean_object* v_payload_5353_; uint32_t v___x_5354_; uint32_t v___x_5355_; uint64_t v___x_5356_; lean_object* v___x_5357_; lean_object* v___x_5358_; lean_object* v___x_5359_; lean_object* v___x_5360_; lean_object* v___x_5361_; lean_object* v___x_5362_; lean_object* v___x_5363_; lean_object* v___x_5364_; 
v___x_5344_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5344_, 0, v_key_5341_);
v___x_5345_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
v___x_5346_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5346_, 0, v_x_5342_);
lean_ctor_set(v___x_5346_, 1, v___x_5345_);
lean_inc(v_o_5340_);
v___x_5347_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5347_, 0, v_o_5340_);
lean_ctor_set(v___x_5347_, 1, v___x_5345_);
v___x_5348_ = lean_unsigned_to_nat(3u);
v___x_5349_ = lean_mk_empty_array_with_capacity(v___x_5348_);
lean_inc_ref(v___x_5344_);
v___x_5350_ = lean_array_push(v___x_5349_, v___x_5344_);
lean_inc_ref(v___x_5346_);
v___x_5351_ = lean_array_push(v___x_5350_, v___x_5346_);
v___x_5352_ = lean_array_push(v___x_5351_, v___x_5347_);
v_payload_5353_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_payload_5353_, 0, v___x_5352_);
v___x_5354_ = 204;
v___x_5355_ = lasm_js_value_handle(v_o_5340_);
lean_dec(v_o_5340_);
v___x_5356_ = 0ULL;
v___x_5357_ = lean_unsigned_to_nat(2u);
v___x_5358_ = lean_mk_empty_array_with_capacity(v___x_5357_);
v___x_5359_ = lean_array_push(v___x_5358_, v___x_5344_);
v___x_5360_ = lean_array_push(v___x_5359_, v___x_5346_);
v___x_5361_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5361_, 0, v___x_5360_);
v___x_5362_ = l_Lasm_JS_Wire_encode(v___x_5361_);
lean_dec_ref_known(v___x_5361_, 1);
v___x_5363_ = lean_box(0);
v___x_5364_ = lasm_js_call(v___x_5354_, v___x_5355_, v___x_5356_, v___x_5362_, v_payload_5353_);
lean_dec_ref_known(v_payload_5353_, 1);
lean_dec_ref(v___x_5362_);
if (lean_obj_tag(v___x_5364_) == 0)
{
lean_object* v___x_5366_; uint8_t v_isShared_5367_; uint8_t v_isSharedCheck_5371_; 
v_isSharedCheck_5371_ = !lean_is_exclusive(v___x_5364_);
if (v_isSharedCheck_5371_ == 0)
{
lean_object* v_unused_5372_; 
v_unused_5372_ = lean_ctor_get(v___x_5364_, 0);
lean_dec(v_unused_5372_);
v___x_5366_ = v___x_5364_;
v_isShared_5367_ = v_isSharedCheck_5371_;
goto v_resetjp_5365_;
}
else
{
lean_dec(v___x_5364_);
v___x_5366_ = lean_box(0);
v_isShared_5367_ = v_isSharedCheck_5371_;
goto v_resetjp_5365_;
}
v_resetjp_5365_:
{
lean_object* v___x_5369_; 
if (v_isShared_5367_ == 0)
{
lean_ctor_set(v___x_5366_, 0, v___x_5363_);
v___x_5369_ = v___x_5366_;
goto v_reusejp_5368_;
}
else
{
lean_object* v_reuseFailAlloc_5370_; 
v_reuseFailAlloc_5370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5370_, 0, v___x_5363_);
v___x_5369_ = v_reuseFailAlloc_5370_;
goto v_reusejp_5368_;
}
v_reusejp_5368_:
{
return v___x_5369_;
}
}
}
else
{
lean_object* v_a_5373_; lean_object* v___x_5375_; uint8_t v_isShared_5376_; uint8_t v_isSharedCheck_5380_; 
v_a_5373_ = lean_ctor_get(v___x_5364_, 0);
v_isSharedCheck_5380_ = !lean_is_exclusive(v___x_5364_);
if (v_isSharedCheck_5380_ == 0)
{
v___x_5375_ = v___x_5364_;
v_isShared_5376_ = v_isSharedCheck_5380_;
goto v_resetjp_5374_;
}
else
{
lean_inc(v_a_5373_);
lean_dec(v___x_5364_);
v___x_5375_ = lean_box(0);
v_isShared_5376_ = v_isSharedCheck_5380_;
goto v_resetjp_5374_;
}
v_resetjp_5374_:
{
lean_object* v___x_5378_; 
if (v_isShared_5376_ == 0)
{
v___x_5378_ = v___x_5375_;
goto v_reusejp_5377_;
}
else
{
lean_object* v_reuseFailAlloc_5379_; 
v_reuseFailAlloc_5379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5379_, 0, v_a_5373_);
v___x_5378_ = v_reuseFailAlloc_5379_;
goto v_reusejp_5377_;
}
v_reusejp_5377_:
{
return v___x_5378_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___at___00Lasm_JS_exportDefault_spec__0___boxed(lean_object* v_o_5381_, lean_object* v_key_5382_, lean_object* v_x_5383_, lean_object* v_a_5384_){
_start:
{
lean_object* v_res_5385_; 
v_res_5385_ = l_Lasm_JS_Value_set___at___00Lasm_JS_exportDefault_spec__0(v_o_5381_, v_key_5382_, v_x_5383_);
return v_res_5385_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_exportDefault(lean_object* v_v_5387_){
_start:
{
lean_object* v___x_5389_; 
v___x_5389_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_5389_) == 0)
{
lean_object* v_a_5390_; lean_object* v___x_5391_; lean_object* v___x_5392_; 
v_a_5390_ = lean_ctor_get(v___x_5389_, 0);
lean_inc(v_a_5390_);
lean_dec_ref_known(v___x_5389_, 1);
v___x_5391_ = ((lean_object*)(l_Lasm_JS_exportDefault___closed__0));
v___x_5392_ = l_Lasm_JS_Value_set___at___00Lasm_JS_exportDefault_spec__0(v_a_5390_, v___x_5391_, v_v_5387_);
return v___x_5392_;
}
else
{
lean_object* v_a_5393_; lean_object* v___x_5395_; uint8_t v_isShared_5396_; uint8_t v_isSharedCheck_5400_; 
lean_dec(v_v_5387_);
v_a_5393_ = lean_ctor_get(v___x_5389_, 0);
v_isSharedCheck_5400_ = !lean_is_exclusive(v___x_5389_);
if (v_isSharedCheck_5400_ == 0)
{
v___x_5395_ = v___x_5389_;
v_isShared_5396_ = v_isSharedCheck_5400_;
goto v_resetjp_5394_;
}
else
{
lean_inc(v_a_5393_);
lean_dec(v___x_5389_);
v___x_5395_ = lean_box(0);
v_isShared_5396_ = v_isSharedCheck_5400_;
goto v_resetjp_5394_;
}
v_resetjp_5394_:
{
lean_object* v___x_5398_; 
if (v_isShared_5396_ == 0)
{
v___x_5398_ = v___x_5395_;
goto v_reusejp_5397_;
}
else
{
lean_object* v_reuseFailAlloc_5399_; 
v_reuseFailAlloc_5399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5399_, 0, v_a_5393_);
v___x_5398_ = v_reuseFailAlloc_5399_;
goto v_reusejp_5397_;
}
v_reusejp_5397_:
{
return v___x_5398_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_exportDefault___boxed(lean_object* v_v_5401_, lean_object* v_a_5402_){
_start:
{
lean_object* v_res_5403_; 
v_res_5403_ = l_Lasm_JS_exportDefault(v_v_5401_);
return v_res_5403_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_waitForever(){
_start:
{
lean_object* v___x_5405_; 
v___x_5405_ = l_Lasm_JS_onEdge();
if (lean_obj_tag(v___x_5405_) == 0)
{
lean_object* v_a_5406_; lean_object* v___x_5408_; uint8_t v_isShared_5409_; uint8_t v_isSharedCheck_5444_; 
v_a_5406_ = lean_ctor_get(v___x_5405_, 0);
v_isSharedCheck_5444_ = !lean_is_exclusive(v___x_5405_);
if (v_isSharedCheck_5444_ == 0)
{
v___x_5408_ = v___x_5405_;
v_isShared_5409_ = v_isSharedCheck_5444_;
goto v_resetjp_5407_;
}
else
{
lean_inc(v_a_5406_);
lean_dec(v___x_5405_);
v___x_5408_ = lean_box(0);
v_isShared_5409_ = v_isSharedCheck_5444_;
goto v_resetjp_5407_;
}
v_resetjp_5407_:
{
uint8_t v___x_5410_; 
v___x_5410_ = lean_unbox(v_a_5406_);
lean_dec(v_a_5406_);
if (v___x_5410_ == 0)
{
lean_object* v___x_5411_; 
lean_del_object(v___x_5408_);
v___x_5411_ = lasm_js_park();
if (lean_obj_tag(v___x_5411_) == 0)
{
lean_object* v_a_5412_; lean_object* v___x_5414_; uint8_t v_isShared_5415_; uint8_t v_isSharedCheck_5431_; 
v_a_5412_ = lean_ctor_get(v___x_5411_, 0);
v_isSharedCheck_5431_ = !lean_is_exclusive(v___x_5411_);
if (v_isSharedCheck_5431_ == 0)
{
v___x_5414_ = v___x_5411_;
v_isShared_5415_ = v_isSharedCheck_5431_;
goto v_resetjp_5413_;
}
else
{
lean_inc(v_a_5412_);
lean_dec(v___x_5411_);
v___x_5414_ = lean_box(0);
v_isShared_5415_ = v_isSharedCheck_5431_;
goto v_resetjp_5413_;
}
v_resetjp_5413_:
{
uint8_t v___x_5416_; 
v___x_5416_ = lean_unbox(v_a_5412_);
lean_dec(v_a_5412_);
if (v___x_5416_ == 0)
{
lean_object* v___x_5417_; lean_object* v___x_5418_; lean_object* v___x_5419_; lean_object* v___x_5420_; lean_object* v___x_5421_; lean_object* v___x_5422_; lean_object* v___x_5423_; lean_object* v___x_5425_; 
v___x_5417_ = lean_io_promise_new();
lean_inc(v___x_5417_);
v___x_5418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5418_, 0, v___x_5417_);
v___x_5419_ = lean_st_mk_ref(v___x_5418_);
v___x_5420_ = lean_io_promise_result_opt(v___x_5417_);
lean_dec(v___x_5417_);
v___x_5421_ = lean_io_wait(v___x_5420_);
lean_dec(v___x_5421_);
v___x_5422_ = lean_box(0);
v___x_5423_ = lean_st_ref_get(v___x_5419_);
lean_dec(v___x_5419_);
lean_dec(v___x_5423_);
if (v_isShared_5415_ == 0)
{
lean_ctor_set(v___x_5414_, 0, v___x_5422_);
v___x_5425_ = v___x_5414_;
goto v_reusejp_5424_;
}
else
{
lean_object* v_reuseFailAlloc_5426_; 
v_reuseFailAlloc_5426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5426_, 0, v___x_5422_);
v___x_5425_ = v_reuseFailAlloc_5426_;
goto v_reusejp_5424_;
}
v_reusejp_5424_:
{
return v___x_5425_;
}
}
else
{
lean_object* v___x_5427_; lean_object* v___x_5429_; 
v___x_5427_ = lean_box(0);
if (v_isShared_5415_ == 0)
{
lean_ctor_set(v___x_5414_, 0, v___x_5427_);
v___x_5429_ = v___x_5414_;
goto v_reusejp_5428_;
}
else
{
lean_object* v_reuseFailAlloc_5430_; 
v_reuseFailAlloc_5430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5430_, 0, v___x_5427_);
v___x_5429_ = v_reuseFailAlloc_5430_;
goto v_reusejp_5428_;
}
v_reusejp_5428_:
{
return v___x_5429_;
}
}
}
}
else
{
lean_object* v_a_5432_; lean_object* v___x_5434_; uint8_t v_isShared_5435_; uint8_t v_isSharedCheck_5439_; 
v_a_5432_ = lean_ctor_get(v___x_5411_, 0);
v_isSharedCheck_5439_ = !lean_is_exclusive(v___x_5411_);
if (v_isSharedCheck_5439_ == 0)
{
v___x_5434_ = v___x_5411_;
v_isShared_5435_ = v_isSharedCheck_5439_;
goto v_resetjp_5433_;
}
else
{
lean_inc(v_a_5432_);
lean_dec(v___x_5411_);
v___x_5434_ = lean_box(0);
v_isShared_5435_ = v_isSharedCheck_5439_;
goto v_resetjp_5433_;
}
v_resetjp_5433_:
{
lean_object* v___x_5437_; 
if (v_isShared_5435_ == 0)
{
v___x_5437_ = v___x_5434_;
goto v_reusejp_5436_;
}
else
{
lean_object* v_reuseFailAlloc_5438_; 
v_reuseFailAlloc_5438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5438_, 0, v_a_5432_);
v___x_5437_ = v_reuseFailAlloc_5438_;
goto v_reusejp_5436_;
}
v_reusejp_5436_:
{
return v___x_5437_;
}
}
}
}
else
{
lean_object* v___x_5440_; lean_object* v___x_5442_; 
v___x_5440_ = lean_box(0);
if (v_isShared_5409_ == 0)
{
lean_ctor_set(v___x_5408_, 0, v___x_5440_);
v___x_5442_ = v___x_5408_;
goto v_reusejp_5441_;
}
else
{
lean_object* v_reuseFailAlloc_5443_; 
v_reuseFailAlloc_5443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5443_, 0, v___x_5440_);
v___x_5442_ = v_reuseFailAlloc_5443_;
goto v_reusejp_5441_;
}
v_reusejp_5441_:
{
return v___x_5442_;
}
}
}
}
else
{
lean_object* v_a_5445_; lean_object* v___x_5447_; uint8_t v_isShared_5448_; uint8_t v_isSharedCheck_5452_; 
v_a_5445_ = lean_ctor_get(v___x_5405_, 0);
v_isSharedCheck_5452_ = !lean_is_exclusive(v___x_5405_);
if (v_isSharedCheck_5452_ == 0)
{
v___x_5447_ = v___x_5405_;
v_isShared_5448_ = v_isSharedCheck_5452_;
goto v_resetjp_5446_;
}
else
{
lean_inc(v_a_5445_);
lean_dec(v___x_5405_);
v___x_5447_ = lean_box(0);
v_isShared_5448_ = v_isSharedCheck_5452_;
goto v_resetjp_5446_;
}
v_resetjp_5446_:
{
lean_object* v___x_5450_; 
if (v_isShared_5448_ == 0)
{
v___x_5450_ = v___x_5447_;
goto v_reusejp_5449_;
}
else
{
lean_object* v_reuseFailAlloc_5451_; 
v_reuseFailAlloc_5451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5451_, 0, v_a_5445_);
v___x_5450_ = v_reuseFailAlloc_5451_;
goto v_reusejp_5449_;
}
v_reusejp_5449_:
{
return v___x_5450_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_waitForever___boxed(lean_object* v_a_5453_){
_start:
{
lean_object* v_res_5454_; 
v_res_5454_ = l_Lasm_JS_waitForever();
return v_res_5454_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_stats(){
_start:
{
uint32_t v___x_5456_; uint32_t v___x_5457_; uint64_t v___x_5458_; lean_object* v___x_5459_; lean_object* v___x_5460_; 
v___x_5456_ = 213;
v___x_5457_ = 0;
v___x_5458_ = 0ULL;
v___x_5459_ = l_ByteArray_empty;
v___x_5460_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_5456_, v___x_5457_, v___x_5458_, v___x_5459_);
if (lean_obj_tag(v___x_5460_) == 0)
{
lean_object* v_a_5461_; lean_object* v___x_5463_; uint8_t v_isShared_5464_; uint8_t v_isSharedCheck_5475_; 
v_a_5461_ = lean_ctor_get(v___x_5460_, 0);
v_isSharedCheck_5475_ = !lean_is_exclusive(v___x_5460_);
if (v_isSharedCheck_5475_ == 0)
{
v___x_5463_ = v___x_5460_;
v_isShared_5464_ = v_isSharedCheck_5475_;
goto v_resetjp_5462_;
}
else
{
lean_inc(v_a_5461_);
lean_dec(v___x_5460_);
v___x_5463_ = lean_box(0);
v_isShared_5464_ = v_isSharedCheck_5475_;
goto v_resetjp_5462_;
}
v_resetjp_5462_:
{
uint8_t v___x_5465_; 
v___x_5465_ = lean_string_validate_utf8(v_a_5461_);
if (v___x_5465_ == 0)
{
lean_object* v___x_5466_; lean_object* v___x_5467_; lean_object* v___x_5469_; 
lean_dec(v_a_5461_);
v___x_5466_ = lean_obj_once(&l_Lasm_JS_decodeAs___redArg___closed__7, &l_Lasm_JS_decodeAs___redArg___closed__7_once, _init_l_Lasm_JS_decodeAs___redArg___closed__7);
v___x_5467_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5466_);
if (v_isShared_5464_ == 0)
{
lean_ctor_set(v___x_5463_, 0, v___x_5467_);
v___x_5469_ = v___x_5463_;
goto v_reusejp_5468_;
}
else
{
lean_object* v_reuseFailAlloc_5470_; 
v_reuseFailAlloc_5470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5470_, 0, v___x_5467_);
v___x_5469_ = v_reuseFailAlloc_5470_;
goto v_reusejp_5468_;
}
v_reusejp_5468_:
{
return v___x_5469_;
}
}
else
{
lean_object* v___x_5471_; lean_object* v___x_5473_; 
v___x_5471_ = lean_string_from_utf8_unchecked(v_a_5461_);
if (v_isShared_5464_ == 0)
{
lean_ctor_set(v___x_5463_, 0, v___x_5471_);
v___x_5473_ = v___x_5463_;
goto v_reusejp_5472_;
}
else
{
lean_object* v_reuseFailAlloc_5474_; 
v_reuseFailAlloc_5474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5474_, 0, v___x_5471_);
v___x_5473_ = v_reuseFailAlloc_5474_;
goto v_reusejp_5472_;
}
v_reusejp_5472_:
{
return v___x_5473_;
}
}
}
}
else
{
lean_object* v_a_5476_; lean_object* v___x_5478_; uint8_t v_isShared_5479_; uint8_t v_isSharedCheck_5483_; 
v_a_5476_ = lean_ctor_get(v___x_5460_, 0);
v_isSharedCheck_5483_ = !lean_is_exclusive(v___x_5460_);
if (v_isSharedCheck_5483_ == 0)
{
v___x_5478_ = v___x_5460_;
v_isShared_5479_ = v_isSharedCheck_5483_;
goto v_resetjp_5477_;
}
else
{
lean_inc(v_a_5476_);
lean_dec(v___x_5460_);
v___x_5478_ = lean_box(0);
v_isShared_5479_ = v_isSharedCheck_5483_;
goto v_resetjp_5477_;
}
v_resetjp_5477_:
{
lean_object* v___x_5481_; 
if (v_isShared_5479_ == 0)
{
v___x_5481_ = v___x_5478_;
goto v_reusejp_5480_;
}
else
{
lean_object* v_reuseFailAlloc_5482_; 
v_reuseFailAlloc_5482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5482_, 0, v_a_5476_);
v___x_5481_ = v_reuseFailAlloc_5482_;
goto v_reusejp_5480_;
}
v_reusejp_5480_:
{
return v___x_5481_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_stats___boxed(lean_object* v_a_5484_){
_start:
{
lean_object* v_res_5485_; 
v_res_5485_ = l_Lasm_JS_stats();
return v_res_5485_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Std_Data_HashMap(uint8_t builtin);
lean_object* initialize_Std_Async_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Core(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize_runtime_module();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_HashMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Async_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_ValuePointed = _init_l_Lasm_JS_ValuePointed();
l_Lasm_JS_isAvailable = _init_l_Lasm_JS_isAvailable();
l_Lasm_JS_instInhabitedData_default = _init_l_Lasm_JS_instInhabitedData_default();
lean_mark_persistent(l_Lasm_JS_instInhabitedData_default);
l_Lasm_JS_instInhabitedData = _init_l_Lasm_JS_instInhabitedData();
lean_mark_persistent(l_Lasm_JS_instInhabitedData);
l_Lasm_JS_instInhabitedMode_default = _init_l_Lasm_JS_instInhabitedMode_default();
l_Lasm_JS_instInhabitedMode = _init_l_Lasm_JS_instInhabitedMode();
l___private_Lasm_JS_Core_0__Lasm_JS_maxSafe = _init_l___private_Lasm_JS_Core_0__Lasm_JS_maxSafe();
lean_mark_persistent(l___private_Lasm_JS_Core_0__Lasm_JS_maxSafe);
l_Lasm_JS_instFromJSUInt8 = _init_l_Lasm_JS_instFromJSUInt8();
lean_mark_persistent(l_Lasm_JS_instFromJSUInt8);
l_Lasm_JS_instFromJSUInt16 = _init_l_Lasm_JS_instFromJSUInt16();
lean_mark_persistent(l_Lasm_JS_instFromJSUInt16);
l_Lasm_JS_instFromJSUInt32 = _init_l_Lasm_JS_instFromJSUInt32();
lean_mark_persistent(l_Lasm_JS_instFromJSUInt32);
l_Lasm_JS_instFromJSUInt64 = _init_l_Lasm_JS_instFromJSUInt64();
lean_mark_persistent(l_Lasm_JS_instFromJSUInt64);
res = l___private_Lasm_JS_Core_0__Lasm_JS_initFn_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lasm_JS_Core_0__Lasm_JS_registry = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lasm_JS_Core_0__Lasm_JS_registry);
lean_dec_ref(res);
l_Lasm_JS_Value_callAwait___redArg___boxed__const__1 = _init_l_Lasm_JS_Value_callAwait___redArg___boxed__const__1();
lean_mark_persistent(l_Lasm_JS_Value_callAwait___redArg___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
