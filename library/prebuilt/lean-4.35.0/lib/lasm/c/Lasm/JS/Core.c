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
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_byte_array_fget(lean_object*, lean_object*);
uint64_t lean_uint8_to_uint64(uint8_t);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t lean_uint64_add(uint64_t, uint64_t);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* l_Nat_reprFast(lean_object*);
uint32_t lean_uint8_to_uint32(uint8_t);
uint32_t lean_uint32_shift_left(uint32_t, uint32_t);
uint32_t lean_uint32_add(uint32_t, uint32_t);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_ByteArray_extract(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_toInt_x3f(lean_object*);
double lean_float_of_bits(uint64_t);
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
uint8_t lean_uint64_to_uint8(uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint32_t lean_uint32_of_nat(lean_object*);
uint8_t lean_uint32_to_uint8(uint32_t);
uint32_t lean_uint32_shift_right(uint32_t, uint32_t);
lean_object* lean_string_to_utf8(lean_object*);
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
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_abs(lean_object*);
double l_Float_ofInt(lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
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
lean_object* lean_nat_mul(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_maxLength;
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_pushU32(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_pushU32___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_pushU64(lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_pushU64___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Wire_pushLength___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.JS: cannot pass "};
static const lean_object* l_Lasm_JS_Wire_pushLength___closed__0 = (const lean_object*)&l_Lasm_JS_Wire_pushLength___closed__0_value;
static const lean_string_object l_Lasm_JS_Wire_pushLength___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l_Lasm_JS_Wire_pushLength___closed__1 = (const lean_object*)&l_Lasm_JS_Wire_pushLength___closed__1_value;
static const lean_string_object l_Lasm_JS_Wire_pushLength___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lasm_JS_Wire_pushLength___closed__2 = (const lean_object*)&l_Lasm_JS_Wire_pushLength___closed__2_value;
static const lean_string_object l_Lasm_JS_Wire_pushLength___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = " to JavaScript (lengths cross as 32-bit numbers, so at most "};
static const lean_object* l_Lasm_JS_Wire_pushLength___closed__3 = (const lean_object*)&l_Lasm_JS_Wire_pushLength___closed__3_value;
static const lean_string_object l_Lasm_JS_Wire_pushLength___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "4294967295"};
static const lean_object* l_Lasm_JS_Wire_pushLength___closed__4 = (const lean_object*)&l_Lasm_JS_Wire_pushLength___closed__4_value;
static const lean_string_object l_Lasm_JS_Wire_pushLength___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_Wire_pushLength___closed__5 = (const lean_object*)&l_Lasm_JS_Wire_pushLength___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_pushLength(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_pushLength___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Wire_pushString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "bytes"};
static const lean_object* l_Lasm_JS_Wire_pushString___closed__0 = (const lean_object*)&l_Lasm_JS_Wire_pushString___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_pushString(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_pushString___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Wire_write___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "a string"};
static const lean_object* l_Lasm_JS_Wire_write___closed__0 = (const lean_object*)&l_Lasm_JS_Wire_write___closed__0_value;
static const lean_string_object l_Lasm_JS_Wire_write___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "a bigint"};
static const lean_object* l_Lasm_JS_Wire_write___closed__1 = (const lean_object*)&l_Lasm_JS_Wire_write___closed__1_value;
static const lean_string_object l_Lasm_JS_Wire_write___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "a ByteArray"};
static const lean_object* l_Lasm_JS_Wire_write___closed__2 = (const lean_object*)&l_Lasm_JS_Wire_write___closed__2_value;
static const lean_string_object l_Lasm_JS_Wire_write___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "an array"};
static const lean_object* l_Lasm_JS_Wire_write___closed__3 = (const lean_object*)&l_Lasm_JS_Wire_write___closed__3_value;
static const lean_string_object l_Lasm_JS_Wire_write___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "elements"};
static const lean_object* l_Lasm_JS_Wire_write___closed__4 = (const lean_object*)&l_Lasm_JS_Wire_write___closed__4_value;
static const lean_string_object l_Lasm_JS_Wire_write___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "an object"};
static const lean_object* l_Lasm_JS_Wire_write___closed__5 = (const lean_object*)&l_Lasm_JS_Wire_write___closed__5_value;
static const lean_string_object l_Lasm_JS_Wire_write___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "fields"};
static const lean_object* l_Lasm_JS_Wire_write___closed__6 = (const lean_object*)&l_Lasm_JS_Wire_write___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "an object key"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_write(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_write___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_write_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_write_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Array_foldlM__unattach_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Array_foldlM__unattach_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_encode(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_encode___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readU32(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readU32___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readU64(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readU64___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readRaw(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readRaw___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Wire_readString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Malformed Lasm.JS value (truncated)"};
static const lean_object* l_Lasm_JS_Wire_readString___closed__0 = (const lean_object*)&l_Lasm_JS_Wire_readString___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Wire_readString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Wire_readString___closed__0_value)}};
static const lean_object* l_Lasm_JS_Wire_readString___closed__1 = (const lean_object*)&l_Lasm_JS_Wire_readString___closed__1_value;
static const lean_string_object l_Lasm_JS_Wire_readString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Malformed Lasm.JS value (invalid UTF-8)"};
static const lean_object* l_Lasm_JS_Wire_readString___closed__2 = (const lean_object*)&l_Lasm_JS_Wire_readString___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Wire_readString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Wire_readString___closed__2_value)}};
static const lean_object* l_Lasm_JS_Wire_readString___closed__3 = (const lean_object*)&l_Lasm_JS_Wire_readString___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readString(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readString___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readAt___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readAt___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readAt___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readItems___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Wire_readAt___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Malformed Lasm.JS value (tag "};
static const lean_object* l_Lasm_JS_Wire_readAt___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Wire_readAt___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readFields___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readFields___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readFields___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Wire_readAt___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Malformed Lasm.JS value (bigint)"};
static const lean_object* l_Lasm_JS_Wire_readAt___redArg___closed__1 = (const lean_object*)&l_Lasm_JS_Wire_readAt___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readItems___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readItems___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readItems___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readFields___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readAt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readAt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readFields(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readFields___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readItems(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readItems___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__13_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__13_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__13_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__13_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__11_splitter___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__11_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__11_splitter(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__11_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__5_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__5_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readString_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readString_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readRaw_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readRaw_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__7_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__7_splitter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__9_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__9_splitter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readFields_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readFields_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readFields_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readFields_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readItems_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readItems_match__1_splitter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readItems_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readItems_match__3_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readItems_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readItems_match__3_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_decodeWith___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Wire_decodeWith___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Malformed Lasm.JS value (trailing bytes)"};
static const lean_object* l_Lasm_JS_Wire_decodeWith___redArg___lam__1___closed__0 = (const lean_object*)&l_Lasm_JS_Wire_decodeWith___redArg___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_decodeWith___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_decodeWith___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_decodeWith___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_decodeWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lasm_JS_Wire_readString___closed__0_value)}};
static const lean_object* l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readFields___at___00Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lasm_JS_Wire_readAt___redArg___closed__1_value)}};
static const lean_object* l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readItems___at___00Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readItems___at___00Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readFields___at___00Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lasm_JS_Wire_decodeWith___redArg___lam__1___closed__0_value)}};
static const lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_decode(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_decode___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_encodeIO___boxed(lean_object*, lean_object*);
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
static lean_once_cell_t l_Lasm_JS_instFromJSNat___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_instFromJSNat___lam__0___closed__0;
static const lean_string_object l_Lasm_JS_instFromJSNat___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "negative"};
static const lean_object* l_Lasm_JS_instFromJSNat___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_instFromJSNat___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_instFromJSNat___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_instFromJSNat___lam__0___closed__1_value)}};
static const lean_object* l_Lasm_JS_instFromJSNat___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_instFromJSNat___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_instFromJSNat___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_instFromJSInt___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_instFromJSNat___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_instFromJSNat___lam__0___closed__3_value;
static const lean_ctor_object l_Lasm_JS_instFromJSNat___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Data_describe___closed__6_value)}};
static const lean_object* l_Lasm_JS_instFromJSNat___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_instFromJSNat___lam__0___closed__4_value;
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSNat___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_instFromJSNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instFromJSNat___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_instFromJSNat___closed__0 = (const lean_object*)&l_Lasm_JS_instFromJSNat___closed__0_value;
static const lean_string_object l_Lasm_JS_instFromJSNat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lasm_JS_instFromJSNat___closed__1 = (const lean_object*)&l_Lasm_JS_instFromJSNat___closed__1_value;
static const lean_ctor_object l_Lasm_JS_instFromJSNat___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_instFromJSNat___closed__0_value),((lean_object*)&l_Lasm_JS_instFromJSNat___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_instFromJSNat___closed__2 = (const lean_object*)&l_Lasm_JS_instFromJSNat___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_instFromJSNat = (const lean_object*)&l_Lasm_JS_instFromJSNat___closed__2_value;
static const lean_ctor_object l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_instFromJSNat___lam__0___closed__1_value)}};
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__1(uint64_t, uint8_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__2(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_reply___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply___closed__0 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_reply___closed__0_value;
static const lean_string_object l___private_Lasm_JS_Core_0__Lasm_JS_reply___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "a Lean function's result"};
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply___closed__1 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_reply___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__7(lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__6(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
static const lean_string_object l_Lasm_JS_Value_get___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Value_get___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___redArg___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Value_getFields___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Value_getFields___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Value_getFields___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Value_getFields___redArg___closed__0_value;
static const lean_string_object l_Lasm_JS_Value_getFields___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "getFields"};
static const lean_object* l_Lasm_JS_Value_getFields___redArg___closed__1 = (const lean_object*)&l_Lasm_JS_Value_getFields___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_string_object l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "await"};
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Value_await___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Value_await___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Value_await___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Value_await___redArg___closed__0_value;
static const lean_closure_object l_Lasm_JS_Value_await___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lean_io_error_to_string, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Value_await___redArg___closed__1 = (const lean_object*)&l_Lasm_JS_Value_await___redArg___closed__1_value;
static const lean_closure_object l_Lasm_JS_Value_await___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Value_await___redArg___lam__7___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Value_await___redArg___closed__1_value)} };
static const lean_object* l_Lasm_JS_Value_await___redArg___closed__2 = (const lean_object*)&l_Lasm_JS_Value_await___redArg___closed__2_value;
static const lean_string_object l_Lasm_JS_Value_await___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Value.await"};
static const lean_object* l_Lasm_JS_Value_await___redArg___closed__3 = (const lean_object*)&l_Lasm_JS_Value_await___redArg___closed__3_value;
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
static const lean_string_object l_Lasm_JS_exportDefault___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "__lasmDefaultExport"};
static const lean_object* l_Lasm_JS_exportDefault___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_exportDefault___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_exportDefault___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_exportDefault___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_exportDefault(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_exportDefault___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
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
static lean_object* _init_l_Lasm_JS_Wire_maxLength(void){
_start:
{
lean_object* v___x_330_; 
v___x_330_ = lean_unsigned_to_nat(4294967295u);
return v___x_330_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_pushU32(lean_object* v_b_331_, uint32_t v_n_332_){
_start:
{
uint8_t v___x_333_; lean_object* v___x_334_; uint32_t v___x_335_; uint32_t v___x_336_; uint8_t v___x_337_; lean_object* v___x_338_; uint32_t v___x_339_; uint32_t v___x_340_; uint8_t v___x_341_; lean_object* v___x_342_; uint32_t v___x_343_; uint32_t v___x_344_; uint8_t v___x_345_; lean_object* v___x_346_; 
v___x_333_ = lean_uint32_to_uint8(v_n_332_);
v___x_334_ = lean_byte_array_push(v_b_331_, v___x_333_);
v___x_335_ = 8;
v___x_336_ = lean_uint32_shift_right(v_n_332_, v___x_335_);
v___x_337_ = lean_uint32_to_uint8(v___x_336_);
v___x_338_ = lean_byte_array_push(v___x_334_, v___x_337_);
v___x_339_ = 16;
v___x_340_ = lean_uint32_shift_right(v_n_332_, v___x_339_);
v___x_341_ = lean_uint32_to_uint8(v___x_340_);
v___x_342_ = lean_byte_array_push(v___x_338_, v___x_341_);
v___x_343_ = 24;
v___x_344_ = lean_uint32_shift_right(v_n_332_, v___x_343_);
v___x_345_ = lean_uint32_to_uint8(v___x_344_);
v___x_346_ = lean_byte_array_push(v___x_342_, v___x_345_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_pushU32___boxed(lean_object* v_b_347_, lean_object* v_n_348_){
_start:
{
uint32_t v_n_boxed_349_; lean_object* v_res_350_; 
v_n_boxed_349_ = lean_unbox_uint32(v_n_348_);
lean_dec(v_n_348_);
v_res_350_ = l_Lasm_JS_Wire_pushU32(v_b_347_, v_n_boxed_349_);
return v_res_350_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_pushU64(lean_object* v_b_351_, uint64_t v_n_352_){
_start:
{
uint8_t v___x_353_; lean_object* v___x_354_; uint64_t v___x_355_; uint64_t v___x_356_; uint8_t v___x_357_; lean_object* v___x_358_; uint64_t v___x_359_; uint64_t v___x_360_; uint8_t v___x_361_; lean_object* v___x_362_; uint64_t v___x_363_; uint64_t v___x_364_; uint8_t v___x_365_; lean_object* v___x_366_; uint64_t v___x_367_; uint64_t v___x_368_; uint8_t v___x_369_; lean_object* v___x_370_; uint64_t v___x_371_; uint64_t v___x_372_; uint8_t v___x_373_; lean_object* v___x_374_; uint64_t v___x_375_; uint64_t v___x_376_; uint8_t v___x_377_; lean_object* v___x_378_; uint64_t v___x_379_; uint64_t v___x_380_; uint8_t v___x_381_; lean_object* v___x_382_; 
v___x_353_ = lean_uint64_to_uint8(v_n_352_);
v___x_354_ = lean_byte_array_push(v_b_351_, v___x_353_);
v___x_355_ = 8ULL;
v___x_356_ = lean_uint64_shift_right(v_n_352_, v___x_355_);
v___x_357_ = lean_uint64_to_uint8(v___x_356_);
v___x_358_ = lean_byte_array_push(v___x_354_, v___x_357_);
v___x_359_ = 16ULL;
v___x_360_ = lean_uint64_shift_right(v_n_352_, v___x_359_);
v___x_361_ = lean_uint64_to_uint8(v___x_360_);
v___x_362_ = lean_byte_array_push(v___x_358_, v___x_361_);
v___x_363_ = 24ULL;
v___x_364_ = lean_uint64_shift_right(v_n_352_, v___x_363_);
v___x_365_ = lean_uint64_to_uint8(v___x_364_);
v___x_366_ = lean_byte_array_push(v___x_362_, v___x_365_);
v___x_367_ = 32ULL;
v___x_368_ = lean_uint64_shift_right(v_n_352_, v___x_367_);
v___x_369_ = lean_uint64_to_uint8(v___x_368_);
v___x_370_ = lean_byte_array_push(v___x_366_, v___x_369_);
v___x_371_ = 40ULL;
v___x_372_ = lean_uint64_shift_right(v_n_352_, v___x_371_);
v___x_373_ = lean_uint64_to_uint8(v___x_372_);
v___x_374_ = lean_byte_array_push(v___x_370_, v___x_373_);
v___x_375_ = 48ULL;
v___x_376_ = lean_uint64_shift_right(v_n_352_, v___x_375_);
v___x_377_ = lean_uint64_to_uint8(v___x_376_);
v___x_378_ = lean_byte_array_push(v___x_374_, v___x_377_);
v___x_379_ = 56ULL;
v___x_380_ = lean_uint64_shift_right(v_n_352_, v___x_379_);
v___x_381_ = lean_uint64_to_uint8(v___x_380_);
v___x_382_ = lean_byte_array_push(v___x_378_, v___x_381_);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_pushU64___boxed(lean_object* v_b_383_, lean_object* v_n_384_){
_start:
{
uint64_t v_n_boxed_385_; lean_object* v_res_386_; 
v_n_boxed_385_ = lean_unbox_uint64(v_n_384_);
lean_dec_ref(v_n_384_);
v_res_386_ = l_Lasm_JS_Wire_pushU64(v_b_383_, v_n_boxed_385_);
return v_res_386_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_pushLength(lean_object* v_b_393_, lean_object* v_n_394_, lean_object* v_what_395_, lean_object* v_unit_396_){
_start:
{
lean_object* v___x_397_; uint8_t v___x_398_; 
v___x_397_ = lean_unsigned_to_nat(4294967295u);
v___x_398_ = lean_nat_dec_le(v_n_394_, v___x_397_);
if (v___x_398_ == 0)
{
lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
lean_dec_ref(v_b_393_);
v___x_399_ = ((lean_object*)(l_Lasm_JS_Wire_pushLength___closed__0));
v___x_400_ = lean_string_append(v___x_399_, v_what_395_);
v___x_401_ = ((lean_object*)(l_Lasm_JS_Wire_pushLength___closed__1));
v___x_402_ = lean_string_append(v___x_400_, v___x_401_);
v___x_403_ = l_Nat_reprFast(v_n_394_);
v___x_404_ = lean_string_append(v___x_402_, v___x_403_);
lean_dec_ref(v___x_403_);
v___x_405_ = ((lean_object*)(l_Lasm_JS_Wire_pushLength___closed__2));
v___x_406_ = lean_string_append(v___x_404_, v___x_405_);
v___x_407_ = lean_string_append(v___x_406_, v_unit_396_);
v___x_408_ = ((lean_object*)(l_Lasm_JS_Wire_pushLength___closed__3));
v___x_409_ = lean_string_append(v___x_407_, v___x_408_);
v___x_410_ = ((lean_object*)(l_Lasm_JS_Wire_pushLength___closed__4));
v___x_411_ = lean_string_append(v___x_409_, v___x_410_);
v___x_412_ = ((lean_object*)(l_Lasm_JS_Wire_pushLength___closed__5));
v___x_413_ = lean_string_append(v___x_411_, v___x_412_);
v___x_414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_414_, 0, v___x_413_);
return v___x_414_;
}
else
{
uint32_t v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_415_ = lean_uint32_of_nat(v_n_394_);
lean_dec(v_n_394_);
v___x_416_ = l_Lasm_JS_Wire_pushU32(v_b_393_, v___x_415_);
v___x_417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_417_, 0, v___x_416_);
return v___x_417_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_pushLength___boxed(lean_object* v_b_418_, lean_object* v_n_419_, lean_object* v_what_420_, lean_object* v_unit_421_){
_start:
{
lean_object* v_res_422_; 
v_res_422_ = l_Lasm_JS_Wire_pushLength(v_b_418_, v_n_419_, v_what_420_, v_unit_421_);
lean_dec_ref(v_unit_421_);
lean_dec_ref(v_what_420_);
return v_res_422_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_pushString(lean_object* v_b_424_, lean_object* v_s_425_, lean_object* v_what_426_){
_start:
{
lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_427_ = lean_string_utf8_byte_size(v_s_425_);
v___x_428_ = ((lean_object*)(l_Lasm_JS_Wire_pushString___closed__0));
v___x_429_ = l_Lasm_JS_Wire_pushLength(v_b_424_, v___x_427_, v_what_426_, v___x_428_);
if (lean_obj_tag(v___x_429_) == 0)
{
return v___x_429_;
}
else
{
lean_object* v_a_430_; lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_443_; 
v_a_430_ = lean_ctor_get(v___x_429_, 0);
v_isSharedCheck_443_ = !lean_is_exclusive(v___x_429_);
if (v_isSharedCheck_443_ == 0)
{
v___x_432_ = v___x_429_;
v_isShared_433_ = v_isSharedCheck_443_;
goto v_resetjp_431_;
}
else
{
lean_inc(v_a_430_);
lean_dec(v___x_429_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_443_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; uint8_t v___x_438_; lean_object* v___x_439_; lean_object* v___x_441_; 
v___x_434_ = lean_string_to_utf8(v_s_425_);
v___x_435_ = lean_unsigned_to_nat(0u);
v___x_436_ = lean_byte_array_size(v_a_430_);
v___x_437_ = lean_byte_array_size(v___x_434_);
v___x_438_ = 0;
v___x_439_ = lean_byte_array_copy_slice(v___x_434_, v___x_435_, v_a_430_, v___x_436_, v___x_437_, v___x_438_);
lean_dec_ref(v___x_434_);
if (v_isShared_433_ == 0)
{
lean_ctor_set(v___x_432_, 0, v___x_439_);
v___x_441_ = v___x_432_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v___x_439_);
v___x_441_ = v_reuseFailAlloc_442_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
return v___x_441_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_pushString___boxed(lean_object* v_b_444_, lean_object* v_s_445_, lean_object* v_what_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = l_Lasm_JS_Wire_pushString(v_b_444_, v_s_445_, v_what_446_);
lean_dec_ref(v_what_446_);
lean_dec_ref(v_s_445_);
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__1(lean_object* v_as_456_, size_t v_i_457_, size_t v_stop_458_, lean_object* v_b_459_){
_start:
{
lean_object* v___y_461_; uint8_t v___x_466_; 
v___x_466_ = lean_usize_dec_eq(v_i_457_, v_stop_458_);
if (v___x_466_ == 0)
{
lean_object* v___x_467_; lean_object* v_fst_468_; lean_object* v_snd_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_467_ = lean_array_uget_borrowed(v_as_456_, v_i_457_);
v_fst_468_ = lean_ctor_get(v___x_467_, 0);
v_snd_469_ = lean_ctor_get(v___x_467_, 1);
v___x_470_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__1___closed__0));
v___x_471_ = l_Lasm_JS_Wire_pushString(v_b_459_, v_fst_468_, v___x_470_);
if (lean_obj_tag(v___x_471_) == 0)
{
v___y_461_ = v___x_471_;
goto v___jp_460_;
}
else
{
lean_object* v_a_472_; lean_object* v___x_473_; 
v_a_472_ = lean_ctor_get(v___x_471_, 0);
lean_inc(v_a_472_);
lean_dec_ref_known(v___x_471_, 1);
v___x_473_ = l_Lasm_JS_Wire_write(v_a_472_, v_snd_469_);
v___y_461_ = v___x_473_;
goto v___jp_460_;
}
}
else
{
lean_object* v___x_474_; 
v___x_474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_474_, 0, v_b_459_);
return v___x_474_;
}
v___jp_460_:
{
if (lean_obj_tag(v___y_461_) == 0)
{
return v___y_461_;
}
else
{
lean_object* v_a_462_; size_t v___x_463_; size_t v___x_464_; 
v_a_462_ = lean_ctor_get(v___y_461_, 0);
lean_inc(v_a_462_);
lean_dec_ref_known(v___y_461_, 1);
v___x_463_ = ((size_t)1ULL);
v___x_464_ = lean_usize_add(v_i_457_, v___x_463_);
v_i_457_ = v___x_464_;
v_b_459_ = v_a_462_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_write(lean_object* v_b_475_, lean_object* v_x_476_){
_start:
{
switch(lean_obj_tag(v_x_476_))
{
case 0:
{
uint8_t v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; 
v___x_477_ = 0;
v___x_478_ = lean_byte_array_push(v_b_475_, v___x_477_);
v___x_479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_479_, 0, v___x_478_);
return v___x_479_;
}
case 1:
{
uint8_t v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; 
v___x_480_ = 1;
v___x_481_ = lean_byte_array_push(v_b_475_, v___x_480_);
v___x_482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_482_, 0, v___x_481_);
return v___x_482_;
}
case 2:
{
uint8_t v_b_483_; 
v_b_483_ = lean_ctor_get_uint8(v_x_476_, 0);
if (v_b_483_ == 0)
{
uint8_t v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_484_ = 2;
v___x_485_ = lean_byte_array_push(v_b_475_, v___x_484_);
v___x_486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_486_, 0, v___x_485_);
return v___x_486_;
}
else
{
uint8_t v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; 
v___x_487_ = 3;
v___x_488_ = lean_byte_array_push(v_b_475_, v___x_487_);
v___x_489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_489_, 0, v___x_488_);
return v___x_489_;
}
}
case 3:
{
double v_n_490_; uint8_t v___x_491_; lean_object* v___x_492_; uint64_t v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; 
v_n_490_ = lean_ctor_get_float(v_x_476_, 0);
v___x_491_ = 4;
v___x_492_ = lean_byte_array_push(v_b_475_, v___x_491_);
v___x_493_ = lean_float_to_bits(v_n_490_);
v___x_494_ = l_Lasm_JS_Wire_pushU64(v___x_492_, v___x_493_);
v___x_495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_495_, 0, v___x_494_);
return v___x_495_;
}
case 4:
{
lean_object* v_s_496_; uint8_t v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
v_s_496_ = lean_ctor_get(v_x_476_, 0);
v___x_497_ = 5;
v___x_498_ = lean_byte_array_push(v_b_475_, v___x_497_);
v___x_499_ = ((lean_object*)(l_Lasm_JS_Wire_write___closed__0));
v___x_500_ = l_Lasm_JS_Wire_pushString(v___x_498_, v_s_496_, v___x_499_);
return v___x_500_;
}
case 5:
{
lean_object* v_i_501_; uint8_t v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v_i_501_ = lean_ctor_get(v_x_476_, 0);
v___x_502_ = 6;
v___x_503_ = lean_byte_array_push(v_b_475_, v___x_502_);
v___x_504_ = l_Int_repr(v_i_501_);
v___x_505_ = ((lean_object*)(l_Lasm_JS_Wire_write___closed__1));
v___x_506_ = l_Lasm_JS_Wire_pushString(v___x_503_, v___x_504_, v___x_505_);
lean_dec_ref(v___x_504_);
return v___x_506_;
}
case 6:
{
lean_object* v_b_507_; uint8_t v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; 
v_b_507_ = lean_ctor_get(v_x_476_, 0);
v___x_508_ = 7;
v___x_509_ = lean_byte_array_push(v_b_475_, v___x_508_);
v___x_510_ = lean_byte_array_size(v_b_507_);
v___x_511_ = ((lean_object*)(l_Lasm_JS_Wire_write___closed__2));
v___x_512_ = ((lean_object*)(l_Lasm_JS_Wire_pushString___closed__0));
v___x_513_ = l_Lasm_JS_Wire_pushLength(v___x_509_, v___x_510_, v___x_511_, v___x_512_);
if (lean_obj_tag(v___x_513_) == 0)
{
return v___x_513_;
}
else
{
lean_object* v_a_514_; lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_525_; 
v_a_514_ = lean_ctor_get(v___x_513_, 0);
v_isSharedCheck_525_ = !lean_is_exclusive(v___x_513_);
if (v_isSharedCheck_525_ == 0)
{
v___x_516_ = v___x_513_;
v_isShared_517_ = v_isSharedCheck_525_;
goto v_resetjp_515_;
}
else
{
lean_inc(v_a_514_);
lean_dec(v___x_513_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_525_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
lean_object* v___x_518_; lean_object* v___x_519_; uint8_t v___x_520_; lean_object* v___x_521_; lean_object* v___x_523_; 
v___x_518_ = lean_unsigned_to_nat(0u);
v___x_519_ = lean_byte_array_size(v_a_514_);
v___x_520_ = 0;
v___x_521_ = lean_byte_array_copy_slice(v_b_507_, v___x_518_, v_a_514_, v___x_519_, v___x_510_, v___x_520_);
if (v_isShared_517_ == 0)
{
lean_ctor_set(v___x_516_, 0, v___x_521_);
v___x_523_ = v___x_516_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v___x_521_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
}
}
case 7:
{
lean_object* v_items_526_; uint8_t v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
v_items_526_ = lean_ctor_get(v_x_476_, 0);
v___x_527_ = 8;
v___x_528_ = lean_byte_array_push(v_b_475_, v___x_527_);
v___x_529_ = lean_array_get_size(v_items_526_);
v___x_530_ = ((lean_object*)(l_Lasm_JS_Wire_write___closed__3));
v___x_531_ = ((lean_object*)(l_Lasm_JS_Wire_write___closed__4));
v___x_532_ = l_Lasm_JS_Wire_pushLength(v___x_528_, v___x_529_, v___x_530_, v___x_531_);
if (lean_obj_tag(v___x_532_) == 0)
{
return v___x_532_;
}
else
{
lean_object* v_a_533_; lean_object* v___x_534_; uint8_t v___x_535_; 
v_a_533_ = lean_ctor_get(v___x_532_, 0);
lean_inc(v_a_533_);
v___x_534_ = lean_unsigned_to_nat(0u);
v___x_535_ = lean_nat_dec_lt(v___x_534_, v___x_529_);
if (v___x_535_ == 0)
{
lean_dec(v_a_533_);
return v___x_532_;
}
else
{
uint8_t v___x_536_; 
v___x_536_ = lean_nat_dec_le(v___x_529_, v___x_529_);
if (v___x_536_ == 0)
{
if (v___x_535_ == 0)
{
lean_dec(v_a_533_);
return v___x_532_;
}
else
{
size_t v___x_537_; size_t v___x_538_; lean_object* v___x_539_; 
lean_dec_ref_known(v___x_532_, 1);
v___x_537_ = ((size_t)0ULL);
v___x_538_ = lean_usize_of_nat(v___x_529_);
v___x_539_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__0(v_items_526_, v___x_537_, v___x_538_, v_a_533_);
return v___x_539_;
}
}
else
{
size_t v___x_540_; size_t v___x_541_; lean_object* v___x_542_; 
lean_dec_ref_known(v___x_532_, 1);
v___x_540_ = ((size_t)0ULL);
v___x_541_ = lean_usize_of_nat(v___x_529_);
v___x_542_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__0(v_items_526_, v___x_540_, v___x_541_, v_a_533_);
return v___x_542_;
}
}
}
}
case 8:
{
lean_object* v_fields_543_; uint8_t v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
v_fields_543_ = lean_ctor_get(v_x_476_, 0);
v___x_544_ = 9;
v___x_545_ = lean_byte_array_push(v_b_475_, v___x_544_);
v___x_546_ = lean_array_get_size(v_fields_543_);
v___x_547_ = ((lean_object*)(l_Lasm_JS_Wire_write___closed__5));
v___x_548_ = ((lean_object*)(l_Lasm_JS_Wire_write___closed__6));
v___x_549_ = l_Lasm_JS_Wire_pushLength(v___x_545_, v___x_546_, v___x_547_, v___x_548_);
if (lean_obj_tag(v___x_549_) == 0)
{
return v___x_549_;
}
else
{
lean_object* v_a_550_; lean_object* v___x_551_; uint8_t v___x_552_; 
v_a_550_ = lean_ctor_get(v___x_549_, 0);
lean_inc(v_a_550_);
v___x_551_ = lean_unsigned_to_nat(0u);
v___x_552_ = lean_nat_dec_lt(v___x_551_, v___x_546_);
if (v___x_552_ == 0)
{
lean_dec(v_a_550_);
return v___x_549_;
}
else
{
uint8_t v___x_553_; 
v___x_553_ = lean_nat_dec_le(v___x_546_, v___x_546_);
if (v___x_553_ == 0)
{
if (v___x_552_ == 0)
{
lean_dec(v_a_550_);
return v___x_549_;
}
else
{
size_t v___x_554_; size_t v___x_555_; lean_object* v___x_556_; 
lean_dec_ref_known(v___x_549_, 1);
v___x_554_ = ((size_t)0ULL);
v___x_555_ = lean_usize_of_nat(v___x_546_);
v___x_556_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__1(v_fields_543_, v___x_554_, v___x_555_, v_a_550_);
return v___x_556_;
}
}
else
{
size_t v___x_557_; size_t v___x_558_; lean_object* v___x_559_; 
lean_dec_ref_known(v___x_549_, 1);
v___x_557_ = ((size_t)0ULL);
v___x_558_ = lean_usize_of_nat(v___x_546_);
v___x_559_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__1(v_fields_543_, v___x_557_, v___x_558_, v_a_550_);
return v___x_559_;
}
}
}
}
default: 
{
lean_object* v_value_560_; uint8_t v___x_561_; lean_object* v___x_562_; uint32_t v___x_563_; lean_object* v___x_564_; uint32_t v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
v_value_560_ = lean_ctor_get(v_x_476_, 0);
v___x_561_ = 10;
v___x_562_ = lean_byte_array_push(v_b_475_, v___x_561_);
v___x_563_ = lasm_js_value_handle(v_value_560_);
v___x_564_ = l_Lasm_JS_Wire_pushU32(v___x_562_, v___x_563_);
v___x_565_ = 0;
v___x_566_ = l_Lasm_JS_Wire_pushU32(v___x_564_, v___x_565_);
v___x_567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_567_, 0, v___x_566_);
return v___x_567_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__0(lean_object* v_as_568_, size_t v_i_569_, size_t v_stop_570_, lean_object* v_b_571_){
_start:
{
uint8_t v___x_572_; 
v___x_572_ = lean_usize_dec_eq(v_i_569_, v_stop_570_);
if (v___x_572_ == 0)
{
lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_573_ = lean_array_uget_borrowed(v_as_568_, v_i_569_);
v___x_574_ = l_Lasm_JS_Wire_write(v_b_571_, v___x_573_);
if (lean_obj_tag(v___x_574_) == 0)
{
return v___x_574_;
}
else
{
lean_object* v_a_575_; size_t v___x_576_; size_t v___x_577_; 
v_a_575_ = lean_ctor_get(v___x_574_, 0);
lean_inc(v_a_575_);
lean_dec_ref_known(v___x_574_, 1);
v___x_576_ = ((size_t)1ULL);
v___x_577_ = lean_usize_add(v_i_569_, v___x_576_);
v_i_569_ = v___x_577_;
v_b_571_ = v_a_575_;
goto _start;
}
}
else
{
lean_object* v___x_579_; 
v___x_579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_579_, 0, v_b_571_);
return v___x_579_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__0___boxed(lean_object* v_as_580_, lean_object* v_i_581_, lean_object* v_stop_582_, lean_object* v_b_583_){
_start:
{
size_t v_i_boxed_584_; size_t v_stop_boxed_585_; lean_object* v_res_586_; 
v_i_boxed_584_ = lean_unbox_usize(v_i_581_);
lean_dec(v_i_581_);
v_stop_boxed_585_ = lean_unbox_usize(v_stop_582_);
lean_dec(v_stop_582_);
v_res_586_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__0(v_as_580_, v_i_boxed_584_, v_stop_boxed_585_, v_b_583_);
lean_dec_ref(v_as_580_);
return v_res_586_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__1___boxed(lean_object* v_as_587_, lean_object* v_i_588_, lean_object* v_stop_589_, lean_object* v_b_590_){
_start:
{
size_t v_i_boxed_591_; size_t v_stop_boxed_592_; lean_object* v_res_593_; 
v_i_boxed_591_ = lean_unbox_usize(v_i_588_);
lean_dec(v_i_588_);
v_stop_boxed_592_ = lean_unbox_usize(v_stop_589_);
lean_dec(v_stop_589_);
v_res_593_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__1(v_as_587_, v_i_boxed_591_, v_stop_boxed_592_, v_b_590_);
lean_dec_ref(v_as_587_);
return v_res_593_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_write___boxed(lean_object* v_b_594_, lean_object* v_x_595_){
_start:
{
lean_object* v_res_596_; 
v_res_596_ = l_Lasm_JS_Wire_write(v_b_594_, v_x_595_);
lean_dec(v_x_595_);
return v_res_596_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_write_match__1_splitter___redArg(lean_object* v_x_597_, lean_object* v_h__1_598_, lean_object* v_h__2_599_, lean_object* v_h__3_600_, lean_object* v_h__4_601_, lean_object* v_h__5_602_, lean_object* v_h__6_603_, lean_object* v_h__7_604_, lean_object* v_h__8_605_, lean_object* v_h__9_606_, lean_object* v_h__10_607_, lean_object* v_h__11_608_){
_start:
{
switch(lean_obj_tag(v_x_597_))
{
case 0:
{
lean_object* v___x_609_; lean_object* v___x_610_; 
lean_dec(v_h__11_608_);
lean_dec(v_h__10_607_);
lean_dec(v_h__9_606_);
lean_dec(v_h__8_605_);
lean_dec(v_h__7_604_);
lean_dec(v_h__6_603_);
lean_dec(v_h__5_602_);
lean_dec(v_h__4_601_);
lean_dec(v_h__3_600_);
lean_dec(v_h__2_599_);
v___x_609_ = lean_box(0);
v___x_610_ = lean_apply_1(v_h__1_598_, v___x_609_);
return v___x_610_;
}
case 1:
{
lean_object* v___x_611_; lean_object* v___x_612_; 
lean_dec(v_h__11_608_);
lean_dec(v_h__10_607_);
lean_dec(v_h__9_606_);
lean_dec(v_h__8_605_);
lean_dec(v_h__7_604_);
lean_dec(v_h__6_603_);
lean_dec(v_h__5_602_);
lean_dec(v_h__4_601_);
lean_dec(v_h__3_600_);
lean_dec(v_h__1_598_);
v___x_611_ = lean_box(0);
v___x_612_ = lean_apply_1(v_h__2_599_, v___x_611_);
return v___x_612_;
}
case 2:
{
uint8_t v_b_613_; 
lean_dec(v_h__11_608_);
lean_dec(v_h__10_607_);
lean_dec(v_h__9_606_);
lean_dec(v_h__8_605_);
lean_dec(v_h__7_604_);
lean_dec(v_h__6_603_);
lean_dec(v_h__5_602_);
lean_dec(v_h__2_599_);
lean_dec(v_h__1_598_);
v_b_613_ = lean_ctor_get_uint8(v_x_597_, 0);
lean_dec_ref_known(v_x_597_, 0);
if (v_b_613_ == 0)
{
lean_object* v___x_614_; lean_object* v___x_615_; 
lean_dec(v_h__4_601_);
v___x_614_ = lean_box(0);
v___x_615_ = lean_apply_1(v_h__3_600_, v___x_614_);
return v___x_615_;
}
else
{
lean_object* v___x_616_; lean_object* v___x_617_; 
lean_dec(v_h__3_600_);
v___x_616_ = lean_box(0);
v___x_617_ = lean_apply_1(v_h__4_601_, v___x_616_);
return v___x_617_;
}
}
case 3:
{
double v_n_618_; lean_object* v___x_619_; lean_object* v___x_620_; 
lean_dec(v_h__11_608_);
lean_dec(v_h__10_607_);
lean_dec(v_h__9_606_);
lean_dec(v_h__8_605_);
lean_dec(v_h__7_604_);
lean_dec(v_h__6_603_);
lean_dec(v_h__4_601_);
lean_dec(v_h__3_600_);
lean_dec(v_h__2_599_);
lean_dec(v_h__1_598_);
v_n_618_ = lean_ctor_get_float(v_x_597_, 0);
lean_dec_ref_known(v_x_597_, 0);
v___x_619_ = lean_box_float(v_n_618_);
v___x_620_ = lean_apply_1(v_h__5_602_, v___x_619_);
return v___x_620_;
}
case 4:
{
lean_object* v_s_621_; lean_object* v___x_622_; 
lean_dec(v_h__11_608_);
lean_dec(v_h__10_607_);
lean_dec(v_h__9_606_);
lean_dec(v_h__8_605_);
lean_dec(v_h__7_604_);
lean_dec(v_h__5_602_);
lean_dec(v_h__4_601_);
lean_dec(v_h__3_600_);
lean_dec(v_h__2_599_);
lean_dec(v_h__1_598_);
v_s_621_ = lean_ctor_get(v_x_597_, 0);
lean_inc_ref(v_s_621_);
lean_dec_ref_known(v_x_597_, 1);
v___x_622_ = lean_apply_1(v_h__6_603_, v_s_621_);
return v___x_622_;
}
case 5:
{
lean_object* v_i_623_; lean_object* v___x_624_; 
lean_dec(v_h__11_608_);
lean_dec(v_h__10_607_);
lean_dec(v_h__9_606_);
lean_dec(v_h__8_605_);
lean_dec(v_h__6_603_);
lean_dec(v_h__5_602_);
lean_dec(v_h__4_601_);
lean_dec(v_h__3_600_);
lean_dec(v_h__2_599_);
lean_dec(v_h__1_598_);
v_i_623_ = lean_ctor_get(v_x_597_, 0);
lean_inc(v_i_623_);
lean_dec_ref_known(v_x_597_, 1);
v___x_624_ = lean_apply_1(v_h__7_604_, v_i_623_);
return v___x_624_;
}
case 6:
{
lean_object* v_b_625_; lean_object* v___x_626_; 
lean_dec(v_h__11_608_);
lean_dec(v_h__10_607_);
lean_dec(v_h__9_606_);
lean_dec(v_h__7_604_);
lean_dec(v_h__6_603_);
lean_dec(v_h__5_602_);
lean_dec(v_h__4_601_);
lean_dec(v_h__3_600_);
lean_dec(v_h__2_599_);
lean_dec(v_h__1_598_);
v_b_625_ = lean_ctor_get(v_x_597_, 0);
lean_inc_ref(v_b_625_);
lean_dec_ref_known(v_x_597_, 1);
v___x_626_ = lean_apply_1(v_h__8_605_, v_b_625_);
return v___x_626_;
}
case 7:
{
lean_object* v_items_627_; lean_object* v___x_628_; 
lean_dec(v_h__11_608_);
lean_dec(v_h__10_607_);
lean_dec(v_h__8_605_);
lean_dec(v_h__7_604_);
lean_dec(v_h__6_603_);
lean_dec(v_h__5_602_);
lean_dec(v_h__4_601_);
lean_dec(v_h__3_600_);
lean_dec(v_h__2_599_);
lean_dec(v_h__1_598_);
v_items_627_ = lean_ctor_get(v_x_597_, 0);
lean_inc_ref(v_items_627_);
lean_dec_ref_known(v_x_597_, 1);
v___x_628_ = lean_apply_1(v_h__9_606_, v_items_627_);
return v___x_628_;
}
case 8:
{
lean_object* v_fields_629_; lean_object* v___x_630_; 
lean_dec(v_h__11_608_);
lean_dec(v_h__9_606_);
lean_dec(v_h__8_605_);
lean_dec(v_h__7_604_);
lean_dec(v_h__6_603_);
lean_dec(v_h__5_602_);
lean_dec(v_h__4_601_);
lean_dec(v_h__3_600_);
lean_dec(v_h__2_599_);
lean_dec(v_h__1_598_);
v_fields_629_ = lean_ctor_get(v_x_597_, 0);
lean_inc_ref(v_fields_629_);
lean_dec_ref_known(v_x_597_, 1);
v___x_630_ = lean_apply_1(v_h__10_607_, v_fields_629_);
return v___x_630_;
}
default: 
{
lean_object* v_value_631_; lean_object* v_description_632_; lean_object* v___x_633_; 
lean_dec(v_h__10_607_);
lean_dec(v_h__9_606_);
lean_dec(v_h__8_605_);
lean_dec(v_h__7_604_);
lean_dec(v_h__6_603_);
lean_dec(v_h__5_602_);
lean_dec(v_h__4_601_);
lean_dec(v_h__3_600_);
lean_dec(v_h__2_599_);
lean_dec(v_h__1_598_);
v_value_631_ = lean_ctor_get(v_x_597_, 0);
lean_inc(v_value_631_);
v_description_632_ = lean_ctor_get(v_x_597_, 1);
lean_inc_ref(v_description_632_);
lean_dec_ref_known(v_x_597_, 2);
v___x_633_ = lean_apply_2(v_h__11_608_, v_value_631_, v_description_632_);
return v___x_633_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_write_match__1_splitter(lean_object* v_motive_634_, lean_object* v_x_635_, lean_object* v_h__1_636_, lean_object* v_h__2_637_, lean_object* v_h__3_638_, lean_object* v_h__4_639_, lean_object* v_h__5_640_, lean_object* v_h__6_641_, lean_object* v_h__7_642_, lean_object* v_h__8_643_, lean_object* v_h__9_644_, lean_object* v_h__10_645_, lean_object* v_h__11_646_){
_start:
{
switch(lean_obj_tag(v_x_635_))
{
case 0:
{
lean_object* v___x_647_; lean_object* v___x_648_; 
lean_dec(v_h__11_646_);
lean_dec(v_h__10_645_);
lean_dec(v_h__9_644_);
lean_dec(v_h__8_643_);
lean_dec(v_h__7_642_);
lean_dec(v_h__6_641_);
lean_dec(v_h__5_640_);
lean_dec(v_h__4_639_);
lean_dec(v_h__3_638_);
lean_dec(v_h__2_637_);
v___x_647_ = lean_box(0);
v___x_648_ = lean_apply_1(v_h__1_636_, v___x_647_);
return v___x_648_;
}
case 1:
{
lean_object* v___x_649_; lean_object* v___x_650_; 
lean_dec(v_h__11_646_);
lean_dec(v_h__10_645_);
lean_dec(v_h__9_644_);
lean_dec(v_h__8_643_);
lean_dec(v_h__7_642_);
lean_dec(v_h__6_641_);
lean_dec(v_h__5_640_);
lean_dec(v_h__4_639_);
lean_dec(v_h__3_638_);
lean_dec(v_h__1_636_);
v___x_649_ = lean_box(0);
v___x_650_ = lean_apply_1(v_h__2_637_, v___x_649_);
return v___x_650_;
}
case 2:
{
uint8_t v_b_651_; 
lean_dec(v_h__11_646_);
lean_dec(v_h__10_645_);
lean_dec(v_h__9_644_);
lean_dec(v_h__8_643_);
lean_dec(v_h__7_642_);
lean_dec(v_h__6_641_);
lean_dec(v_h__5_640_);
lean_dec(v_h__2_637_);
lean_dec(v_h__1_636_);
v_b_651_ = lean_ctor_get_uint8(v_x_635_, 0);
lean_dec_ref_known(v_x_635_, 0);
if (v_b_651_ == 0)
{
lean_object* v___x_652_; lean_object* v___x_653_; 
lean_dec(v_h__4_639_);
v___x_652_ = lean_box(0);
v___x_653_ = lean_apply_1(v_h__3_638_, v___x_652_);
return v___x_653_;
}
else
{
lean_object* v___x_654_; lean_object* v___x_655_; 
lean_dec(v_h__3_638_);
v___x_654_ = lean_box(0);
v___x_655_ = lean_apply_1(v_h__4_639_, v___x_654_);
return v___x_655_;
}
}
case 3:
{
double v_n_656_; lean_object* v___x_657_; lean_object* v___x_658_; 
lean_dec(v_h__11_646_);
lean_dec(v_h__10_645_);
lean_dec(v_h__9_644_);
lean_dec(v_h__8_643_);
lean_dec(v_h__7_642_);
lean_dec(v_h__6_641_);
lean_dec(v_h__4_639_);
lean_dec(v_h__3_638_);
lean_dec(v_h__2_637_);
lean_dec(v_h__1_636_);
v_n_656_ = lean_ctor_get_float(v_x_635_, 0);
lean_dec_ref_known(v_x_635_, 0);
v___x_657_ = lean_box_float(v_n_656_);
v___x_658_ = lean_apply_1(v_h__5_640_, v___x_657_);
return v___x_658_;
}
case 4:
{
lean_object* v_s_659_; lean_object* v___x_660_; 
lean_dec(v_h__11_646_);
lean_dec(v_h__10_645_);
lean_dec(v_h__9_644_);
lean_dec(v_h__8_643_);
lean_dec(v_h__7_642_);
lean_dec(v_h__5_640_);
lean_dec(v_h__4_639_);
lean_dec(v_h__3_638_);
lean_dec(v_h__2_637_);
lean_dec(v_h__1_636_);
v_s_659_ = lean_ctor_get(v_x_635_, 0);
lean_inc_ref(v_s_659_);
lean_dec_ref_known(v_x_635_, 1);
v___x_660_ = lean_apply_1(v_h__6_641_, v_s_659_);
return v___x_660_;
}
case 5:
{
lean_object* v_i_661_; lean_object* v___x_662_; 
lean_dec(v_h__11_646_);
lean_dec(v_h__10_645_);
lean_dec(v_h__9_644_);
lean_dec(v_h__8_643_);
lean_dec(v_h__6_641_);
lean_dec(v_h__5_640_);
lean_dec(v_h__4_639_);
lean_dec(v_h__3_638_);
lean_dec(v_h__2_637_);
lean_dec(v_h__1_636_);
v_i_661_ = lean_ctor_get(v_x_635_, 0);
lean_inc(v_i_661_);
lean_dec_ref_known(v_x_635_, 1);
v___x_662_ = lean_apply_1(v_h__7_642_, v_i_661_);
return v___x_662_;
}
case 6:
{
lean_object* v_b_663_; lean_object* v___x_664_; 
lean_dec(v_h__11_646_);
lean_dec(v_h__10_645_);
lean_dec(v_h__9_644_);
lean_dec(v_h__7_642_);
lean_dec(v_h__6_641_);
lean_dec(v_h__5_640_);
lean_dec(v_h__4_639_);
lean_dec(v_h__3_638_);
lean_dec(v_h__2_637_);
lean_dec(v_h__1_636_);
v_b_663_ = lean_ctor_get(v_x_635_, 0);
lean_inc_ref(v_b_663_);
lean_dec_ref_known(v_x_635_, 1);
v___x_664_ = lean_apply_1(v_h__8_643_, v_b_663_);
return v___x_664_;
}
case 7:
{
lean_object* v_items_665_; lean_object* v___x_666_; 
lean_dec(v_h__11_646_);
lean_dec(v_h__10_645_);
lean_dec(v_h__8_643_);
lean_dec(v_h__7_642_);
lean_dec(v_h__6_641_);
lean_dec(v_h__5_640_);
lean_dec(v_h__4_639_);
lean_dec(v_h__3_638_);
lean_dec(v_h__2_637_);
lean_dec(v_h__1_636_);
v_items_665_ = lean_ctor_get(v_x_635_, 0);
lean_inc_ref(v_items_665_);
lean_dec_ref_known(v_x_635_, 1);
v___x_666_ = lean_apply_1(v_h__9_644_, v_items_665_);
return v___x_666_;
}
case 8:
{
lean_object* v_fields_667_; lean_object* v___x_668_; 
lean_dec(v_h__11_646_);
lean_dec(v_h__9_644_);
lean_dec(v_h__8_643_);
lean_dec(v_h__7_642_);
lean_dec(v_h__6_641_);
lean_dec(v_h__5_640_);
lean_dec(v_h__4_639_);
lean_dec(v_h__3_638_);
lean_dec(v_h__2_637_);
lean_dec(v_h__1_636_);
v_fields_667_ = lean_ctor_get(v_x_635_, 0);
lean_inc_ref(v_fields_667_);
lean_dec_ref_known(v_x_635_, 1);
v___x_668_ = lean_apply_1(v_h__10_645_, v_fields_667_);
return v___x_668_;
}
default: 
{
lean_object* v_value_669_; lean_object* v_description_670_; lean_object* v___x_671_; 
lean_dec(v_h__10_645_);
lean_dec(v_h__9_644_);
lean_dec(v_h__8_643_);
lean_dec(v_h__7_642_);
lean_dec(v_h__6_641_);
lean_dec(v_h__5_640_);
lean_dec(v_h__4_639_);
lean_dec(v_h__3_638_);
lean_dec(v_h__2_637_);
lean_dec(v_h__1_636_);
v_value_669_ = lean_ctor_get(v_x_635_, 0);
lean_inc(v_value_669_);
v_description_670_ = lean_ctor_get(v_x_635_, 1);
lean_inc_ref(v_description_670_);
lean_dec_ref_known(v_x_635_, 2);
v___x_671_ = lean_apply_2(v_h__11_646_, v_value_669_, v_description_670_);
return v___x_671_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Array_foldlM__unattach_match__1_splitter___redArg(lean_object* v_x_672_, lean_object* v_h__1_673_){
_start:
{
lean_object* v___x_674_; 
v___x_674_ = lean_apply_2(v_h__1_673_, v_x_672_, lean_box(0));
return v___x_674_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Array_foldlM__unattach_match__1_splitter(lean_object* v_00_u03b1_675_, lean_object* v_P_676_, lean_object* v_motive_677_, lean_object* v_x_678_, lean_object* v_h__1_679_){
_start:
{
lean_object* v___x_680_; 
v___x_680_ = lean_apply_2(v_h__1_679_, v_x_678_, lean_box(0));
return v___x_680_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_encode(lean_object* v_d_681_){
_start:
{
lean_object* v___x_682_; lean_object* v___x_683_; 
v___x_682_ = l_ByteArray_empty;
v___x_683_ = l_Lasm_JS_Wire_write(v___x_682_, v_d_681_);
return v___x_683_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_encode___boxed(lean_object* v_d_684_){
_start:
{
lean_object* v_res_685_; 
v_res_685_ = l_Lasm_JS_Wire_encode(v_d_684_);
lean_dec(v_d_684_);
return v_res_685_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readU32(lean_object* v_b_686_, lean_object* v_o_687_){
_start:
{
lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; uint8_t v___x_691_; 
v___x_688_ = lean_unsigned_to_nat(4u);
v___x_689_ = lean_nat_add(v_o_687_, v___x_688_);
v___x_690_ = lean_byte_array_size(v_b_686_);
v___x_691_ = lean_nat_dec_le(v___x_689_, v___x_690_);
lean_dec(v___x_689_);
if (v___x_691_ == 0)
{
lean_object* v___x_692_; 
v___x_692_ = lean_box(0);
return v___x_692_;
}
else
{
uint8_t v___x_693_; uint32_t v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; uint8_t v___x_697_; uint32_t v___x_698_; uint32_t v___x_699_; uint32_t v___x_700_; uint32_t v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; uint8_t v___x_704_; uint32_t v___x_705_; uint32_t v___x_706_; uint32_t v___x_707_; uint32_t v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; uint8_t v___x_711_; uint32_t v___x_712_; uint32_t v___x_713_; uint32_t v___x_714_; uint32_t v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; 
v___x_693_ = lean_byte_array_fget(v_b_686_, v_o_687_);
v___x_694_ = lean_uint8_to_uint32(v___x_693_);
v___x_695_ = lean_unsigned_to_nat(1u);
v___x_696_ = lean_nat_add(v_o_687_, v___x_695_);
v___x_697_ = lean_byte_array_fget(v_b_686_, v___x_696_);
lean_dec(v___x_696_);
v___x_698_ = lean_uint8_to_uint32(v___x_697_);
v___x_699_ = 8;
v___x_700_ = lean_uint32_shift_left(v___x_698_, v___x_699_);
v___x_701_ = lean_uint32_add(v___x_694_, v___x_700_);
v___x_702_ = lean_unsigned_to_nat(2u);
v___x_703_ = lean_nat_add(v_o_687_, v___x_702_);
v___x_704_ = lean_byte_array_fget(v_b_686_, v___x_703_);
lean_dec(v___x_703_);
v___x_705_ = lean_uint8_to_uint32(v___x_704_);
v___x_706_ = 16;
v___x_707_ = lean_uint32_shift_left(v___x_705_, v___x_706_);
v___x_708_ = lean_uint32_add(v___x_701_, v___x_707_);
v___x_709_ = lean_unsigned_to_nat(3u);
v___x_710_ = lean_nat_add(v_o_687_, v___x_709_);
v___x_711_ = lean_byte_array_fget(v_b_686_, v___x_710_);
lean_dec(v___x_710_);
v___x_712_ = lean_uint8_to_uint32(v___x_711_);
v___x_713_ = 24;
v___x_714_ = lean_uint32_shift_left(v___x_712_, v___x_713_);
v___x_715_ = lean_uint32_add(v___x_708_, v___x_714_);
v___x_716_ = lean_box_uint32(v___x_715_);
v___x_717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_717_, 0, v___x_716_);
return v___x_717_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readU32___boxed(lean_object* v_b_718_, lean_object* v_o_719_){
_start:
{
lean_object* v_res_720_; 
v_res_720_ = l_Lasm_JS_Wire_readU32(v_b_718_, v_o_719_);
lean_dec(v_o_719_);
lean_dec_ref(v_b_718_);
return v_res_720_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readU64(lean_object* v_b_721_, lean_object* v_o_722_){
_start:
{
lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; uint8_t v___x_726_; 
v___x_723_ = lean_unsigned_to_nat(8u);
v___x_724_ = lean_nat_add(v_o_722_, v___x_723_);
v___x_725_ = lean_byte_array_size(v_b_721_);
v___x_726_ = lean_nat_dec_le(v___x_724_, v___x_725_);
lean_dec(v___x_724_);
if (v___x_726_ == 0)
{
lean_object* v___x_727_; 
v___x_727_ = lean_box(0);
return v___x_727_;
}
else
{
uint8_t v___x_728_; uint64_t v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; uint8_t v___x_732_; uint64_t v___x_733_; uint64_t v___x_734_; uint64_t v___x_735_; uint64_t v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; uint8_t v___x_739_; uint64_t v___x_740_; uint64_t v___x_741_; uint64_t v___x_742_; uint64_t v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; uint8_t v___x_746_; uint64_t v___x_747_; uint64_t v___x_748_; uint64_t v___x_749_; uint64_t v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; uint8_t v___x_753_; uint64_t v___x_754_; uint64_t v___x_755_; uint64_t v___x_756_; uint64_t v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; uint8_t v___x_760_; uint64_t v___x_761_; uint64_t v___x_762_; uint64_t v___x_763_; uint64_t v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; uint8_t v___x_767_; uint64_t v___x_768_; uint64_t v___x_769_; uint64_t v___x_770_; uint64_t v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; uint8_t v___x_774_; uint64_t v___x_775_; uint64_t v___x_776_; uint64_t v___x_777_; uint64_t v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; 
v___x_728_ = lean_byte_array_fget(v_b_721_, v_o_722_);
v___x_729_ = lean_uint8_to_uint64(v___x_728_);
v___x_730_ = lean_unsigned_to_nat(1u);
v___x_731_ = lean_nat_add(v_o_722_, v___x_730_);
v___x_732_ = lean_byte_array_fget(v_b_721_, v___x_731_);
lean_dec(v___x_731_);
v___x_733_ = lean_uint8_to_uint64(v___x_732_);
v___x_734_ = 8ULL;
v___x_735_ = lean_uint64_shift_left(v___x_733_, v___x_734_);
v___x_736_ = lean_uint64_add(v___x_729_, v___x_735_);
v___x_737_ = lean_unsigned_to_nat(2u);
v___x_738_ = lean_nat_add(v_o_722_, v___x_737_);
v___x_739_ = lean_byte_array_fget(v_b_721_, v___x_738_);
lean_dec(v___x_738_);
v___x_740_ = lean_uint8_to_uint64(v___x_739_);
v___x_741_ = 16ULL;
v___x_742_ = lean_uint64_shift_left(v___x_740_, v___x_741_);
v___x_743_ = lean_uint64_add(v___x_736_, v___x_742_);
v___x_744_ = lean_unsigned_to_nat(3u);
v___x_745_ = lean_nat_add(v_o_722_, v___x_744_);
v___x_746_ = lean_byte_array_fget(v_b_721_, v___x_745_);
lean_dec(v___x_745_);
v___x_747_ = lean_uint8_to_uint64(v___x_746_);
v___x_748_ = 24ULL;
v___x_749_ = lean_uint64_shift_left(v___x_747_, v___x_748_);
v___x_750_ = lean_uint64_add(v___x_743_, v___x_749_);
v___x_751_ = lean_unsigned_to_nat(4u);
v___x_752_ = lean_nat_add(v_o_722_, v___x_751_);
v___x_753_ = lean_byte_array_fget(v_b_721_, v___x_752_);
lean_dec(v___x_752_);
v___x_754_ = lean_uint8_to_uint64(v___x_753_);
v___x_755_ = 32ULL;
v___x_756_ = lean_uint64_shift_left(v___x_754_, v___x_755_);
v___x_757_ = lean_uint64_add(v___x_750_, v___x_756_);
v___x_758_ = lean_unsigned_to_nat(5u);
v___x_759_ = lean_nat_add(v_o_722_, v___x_758_);
v___x_760_ = lean_byte_array_fget(v_b_721_, v___x_759_);
lean_dec(v___x_759_);
v___x_761_ = lean_uint8_to_uint64(v___x_760_);
v___x_762_ = 40ULL;
v___x_763_ = lean_uint64_shift_left(v___x_761_, v___x_762_);
v___x_764_ = lean_uint64_add(v___x_757_, v___x_763_);
v___x_765_ = lean_unsigned_to_nat(6u);
v___x_766_ = lean_nat_add(v_o_722_, v___x_765_);
v___x_767_ = lean_byte_array_fget(v_b_721_, v___x_766_);
lean_dec(v___x_766_);
v___x_768_ = lean_uint8_to_uint64(v___x_767_);
v___x_769_ = 48ULL;
v___x_770_ = lean_uint64_shift_left(v___x_768_, v___x_769_);
v___x_771_ = lean_uint64_add(v___x_764_, v___x_770_);
v___x_772_ = lean_unsigned_to_nat(7u);
v___x_773_ = lean_nat_add(v_o_722_, v___x_772_);
v___x_774_ = lean_byte_array_fget(v_b_721_, v___x_773_);
lean_dec(v___x_773_);
v___x_775_ = lean_uint8_to_uint64(v___x_774_);
v___x_776_ = 56ULL;
v___x_777_ = lean_uint64_shift_left(v___x_775_, v___x_776_);
v___x_778_ = lean_uint64_add(v___x_771_, v___x_777_);
v___x_779_ = lean_box_uint64(v___x_778_);
v___x_780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_780_, 0, v___x_779_);
return v___x_780_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readU64___boxed(lean_object* v_b_781_, lean_object* v_o_782_){
_start:
{
lean_object* v_res_783_; 
v_res_783_ = l_Lasm_JS_Wire_readU64(v_b_781_, v_o_782_);
lean_dec(v_o_782_);
lean_dec_ref(v_b_781_);
return v_res_783_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readRaw(lean_object* v_b_784_, lean_object* v_o_785_){
_start:
{
lean_object* v___x_786_; 
v___x_786_ = l_Lasm_JS_Wire_readU32(v_b_784_, v_o_785_);
if (lean_obj_tag(v___x_786_) == 0)
{
lean_object* v___x_787_; 
v___x_787_ = lean_box(0);
return v___x_787_;
}
else
{
lean_object* v_val_788_; lean_object* v___x_790_; uint8_t v_isShared_791_; uint8_t v_isSharedCheck_805_; 
v_val_788_ = lean_ctor_get(v___x_786_, 0);
v_isSharedCheck_805_ = !lean_is_exclusive(v___x_786_);
if (v_isSharedCheck_805_ == 0)
{
v___x_790_ = v___x_786_;
v_isShared_791_ = v_isSharedCheck_805_;
goto v_resetjp_789_;
}
else
{
lean_inc(v_val_788_);
lean_dec(v___x_786_);
v___x_790_ = lean_box(0);
v_isShared_791_ = v_isSharedCheck_805_;
goto v_resetjp_789_;
}
v_resetjp_789_:
{
lean_object* v___x_792_; lean_object* v___x_793_; uint32_t v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; uint8_t v___x_798_; 
v___x_792_ = lean_unsigned_to_nat(4u);
v___x_793_ = lean_nat_add(v_o_785_, v___x_792_);
v___x_794_ = lean_unbox_uint32(v_val_788_);
lean_dec(v_val_788_);
v___x_795_ = lean_uint32_to_nat(v___x_794_);
v___x_796_ = lean_nat_add(v___x_793_, v___x_795_);
lean_dec(v___x_795_);
v___x_797_ = lean_byte_array_size(v_b_784_);
v___x_798_ = lean_nat_dec_le(v___x_796_, v___x_797_);
if (v___x_798_ == 0)
{
lean_object* v___x_799_; 
lean_dec(v___x_796_);
lean_dec(v___x_793_);
lean_del_object(v___x_790_);
v___x_799_ = lean_box(0);
return v___x_799_;
}
else
{
lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_803_; 
v___x_800_ = l_ByteArray_extract(v_b_784_, v___x_793_, v___x_796_);
v___x_801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_801_, 0, v___x_800_);
lean_ctor_set(v___x_801_, 1, v___x_796_);
if (v_isShared_791_ == 0)
{
lean_ctor_set(v___x_790_, 0, v___x_801_);
v___x_803_ = v___x_790_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v___x_801_);
v___x_803_ = v_reuseFailAlloc_804_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
return v___x_803_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readRaw___boxed(lean_object* v_b_806_, lean_object* v_o_807_){
_start:
{
lean_object* v_res_808_; 
v_res_808_ = l_Lasm_JS_Wire_readRaw(v_b_806_, v_o_807_);
lean_dec(v_o_807_);
lean_dec_ref(v_b_806_);
return v_res_808_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readString(lean_object* v_b_815_, lean_object* v_o_816_){
_start:
{
lean_object* v___x_817_; 
v___x_817_ = l_Lasm_JS_Wire_readRaw(v_b_815_, v_o_816_);
if (lean_obj_tag(v___x_817_) == 0)
{
lean_object* v___x_818_; 
v___x_818_ = ((lean_object*)(l_Lasm_JS_Wire_readString___closed__1));
return v___x_818_;
}
else
{
lean_object* v_val_819_; lean_object* v___x_821_; uint8_t v_isShared_822_; uint8_t v_isSharedCheck_838_; 
v_val_819_ = lean_ctor_get(v___x_817_, 0);
v_isSharedCheck_838_ = !lean_is_exclusive(v___x_817_);
if (v_isSharedCheck_838_ == 0)
{
v___x_821_ = v___x_817_;
v_isShared_822_ = v_isSharedCheck_838_;
goto v_resetjp_820_;
}
else
{
lean_inc(v_val_819_);
lean_dec(v___x_817_);
v___x_821_ = lean_box(0);
v_isShared_822_ = v_isSharedCheck_838_;
goto v_resetjp_820_;
}
v_resetjp_820_:
{
lean_object* v_fst_823_; lean_object* v_snd_824_; lean_object* v___x_826_; uint8_t v_isShared_827_; uint8_t v_isSharedCheck_837_; 
v_fst_823_ = lean_ctor_get(v_val_819_, 0);
v_snd_824_ = lean_ctor_get(v_val_819_, 1);
v_isSharedCheck_837_ = !lean_is_exclusive(v_val_819_);
if (v_isSharedCheck_837_ == 0)
{
v___x_826_ = v_val_819_;
v_isShared_827_ = v_isSharedCheck_837_;
goto v_resetjp_825_;
}
else
{
lean_inc(v_snd_824_);
lean_inc(v_fst_823_);
lean_dec(v_val_819_);
v___x_826_ = lean_box(0);
v_isShared_827_ = v_isSharedCheck_837_;
goto v_resetjp_825_;
}
v_resetjp_825_:
{
uint8_t v___x_828_; 
v___x_828_ = lean_string_validate_utf8(v_fst_823_);
if (v___x_828_ == 0)
{
lean_object* v___x_829_; 
lean_del_object(v___x_826_);
lean_dec(v_snd_824_);
lean_dec(v_fst_823_);
lean_del_object(v___x_821_);
v___x_829_ = ((lean_object*)(l_Lasm_JS_Wire_readString___closed__3));
return v___x_829_;
}
else
{
lean_object* v___x_830_; lean_object* v___x_832_; 
v___x_830_ = lean_string_from_utf8_unchecked(v_fst_823_);
if (v_isShared_827_ == 0)
{
lean_ctor_set(v___x_826_, 0, v___x_830_);
v___x_832_ = v___x_826_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v___x_830_);
lean_ctor_set(v_reuseFailAlloc_836_, 1, v_snd_824_);
v___x_832_ = v_reuseFailAlloc_836_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
lean_object* v___x_834_; 
if (v_isShared_822_ == 0)
{
lean_ctor_set(v___x_821_, 0, v___x_832_);
v___x_834_ = v___x_821_;
goto v_reusejp_833_;
}
else
{
lean_object* v_reuseFailAlloc_835_; 
v_reuseFailAlloc_835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_835_, 0, v___x_832_);
v___x_834_ = v_reuseFailAlloc_835_;
goto v_reusejp_833_;
}
v_reusejp_833_:
{
return v___x_834_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readString___boxed(lean_object* v_b_839_, lean_object* v_o_840_){
_start:
{
lean_object* v_res_841_; 
v_res_841_ = l_Lasm_JS_Wire_readString(v_b_839_, v_o_840_);
lean_dec(v_o_840_);
lean_dec_ref(v_b_839_);
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readAt___redArg___lam__0(lean_object* v_snd_842_, lean_object* v_toPure_843_, lean_object* v_____do__lift_844_){
_start:
{
lean_object* v___x_845_; lean_object* v___x_846_; 
v___x_845_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_845_, 0, v_____do__lift_844_);
lean_ctor_set(v___x_845_, 1, v_snd_842_);
v___x_846_ = lean_apply_2(v_toPure_843_, lean_box(0), v___x_845_);
return v___x_846_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readAt___redArg___lam__1(lean_object* v_toPure_847_, lean_object* v_____x_848_){
_start:
{
lean_object* v_fst_849_; lean_object* v_snd_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_859_; 
v_fst_849_ = lean_ctor_get(v_____x_848_, 0);
v_snd_850_ = lean_ctor_get(v_____x_848_, 1);
v_isSharedCheck_859_ = !lean_is_exclusive(v_____x_848_);
if (v_isSharedCheck_859_ == 0)
{
v___x_852_ = v_____x_848_;
v_isShared_853_ = v_isSharedCheck_859_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_snd_850_);
lean_inc(v_fst_849_);
lean_dec(v_____x_848_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_859_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
lean_object* v___x_854_; lean_object* v___x_856_; 
v___x_854_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_854_, 0, v_fst_849_);
if (v_isShared_853_ == 0)
{
lean_ctor_set(v___x_852_, 0, v___x_854_);
v___x_856_ = v___x_852_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_858_; 
v_reuseFailAlloc_858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_858_, 0, v___x_854_);
lean_ctor_set(v_reuseFailAlloc_858_, 1, v_snd_850_);
v___x_856_ = v_reuseFailAlloc_858_;
goto v_reusejp_855_;
}
v_reusejp_855_:
{
lean_object* v___x_857_; 
v___x_857_ = lean_apply_2(v_toPure_847_, lean_box(0), v___x_856_);
return v___x_857_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readAt___redArg___lam__2(lean_object* v_toPure_860_, lean_object* v_____x_861_){
_start:
{
lean_object* v_fst_862_; lean_object* v_snd_863_; lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_872_; 
v_fst_862_ = lean_ctor_get(v_____x_861_, 0);
v_snd_863_ = lean_ctor_get(v_____x_861_, 1);
v_isSharedCheck_872_ = !lean_is_exclusive(v_____x_861_);
if (v_isSharedCheck_872_ == 0)
{
v___x_865_ = v_____x_861_;
v_isShared_866_ = v_isSharedCheck_872_;
goto v_resetjp_864_;
}
else
{
lean_inc(v_snd_863_);
lean_inc(v_fst_862_);
lean_dec(v_____x_861_);
v___x_865_ = lean_box(0);
v_isShared_866_ = v_isSharedCheck_872_;
goto v_resetjp_864_;
}
v_resetjp_864_:
{
lean_object* v___x_867_; lean_object* v___x_869_; 
v___x_867_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_867_, 0, v_fst_862_);
if (v_isShared_866_ == 0)
{
lean_ctor_set(v___x_865_, 0, v___x_867_);
v___x_869_ = v___x_865_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_871_; 
v_reuseFailAlloc_871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_871_, 0, v___x_867_);
lean_ctor_set(v_reuseFailAlloc_871_, 1, v_snd_863_);
v___x_869_ = v_reuseFailAlloc_871_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
lean_object* v___x_870_; 
v___x_870_ = lean_apply_2(v_toPure_860_, lean_box(0), v___x_869_);
return v___x_870_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readItems___redArg___lam__0___boxed(lean_object* v_x_873_, lean_object* v_inst_874_, lean_object* v_inst_875_, lean_object* v_err_876_, lean_object* v_ref_877_, lean_object* v_fuel_878_, lean_object* v_b_879_, lean_object* v_n_880_, lean_object* v_____x_881_){
_start:
{
lean_object* v_res_882_; 
v_res_882_ = l_Lasm_JS_Wire_readItems___redArg___lam__0(v_x_873_, v_inst_874_, v_inst_875_, v_err_876_, v_ref_877_, v_fuel_878_, v_b_879_, v_n_880_, v_____x_881_);
lean_dec(v_n_880_);
return v_res_882_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readFields___redArg___lam__0(lean_object* v_fst_884_, lean_object* v_x_885_, lean_object* v_inst_886_, lean_object* v_inst_887_, lean_object* v_err_888_, lean_object* v_ref_889_, lean_object* v_fuel_890_, lean_object* v_b_891_, lean_object* v_n_892_, lean_object* v_____x_893_){
_start:
{
lean_object* v_fst_894_; lean_object* v_snd_895_; lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_904_; 
v_fst_894_ = lean_ctor_get(v_____x_893_, 0);
v_snd_895_ = lean_ctor_get(v_____x_893_, 1);
v_isSharedCheck_904_ = !lean_is_exclusive(v_____x_893_);
if (v_isSharedCheck_904_ == 0)
{
v___x_897_ = v_____x_893_;
v_isShared_898_ = v_isSharedCheck_904_;
goto v_resetjp_896_;
}
else
{
lean_inc(v_snd_895_);
lean_inc(v_fst_894_);
lean_dec(v_____x_893_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_904_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
lean_object* v___x_900_; 
if (v_isShared_898_ == 0)
{
lean_ctor_set(v___x_897_, 1, v_fst_894_);
lean_ctor_set(v___x_897_, 0, v_fst_884_);
v___x_900_ = v___x_897_;
goto v_reusejp_899_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v_fst_884_);
lean_ctor_set(v_reuseFailAlloc_903_, 1, v_fst_894_);
v___x_900_ = v_reuseFailAlloc_903_;
goto v_reusejp_899_;
}
v_reusejp_899_:
{
lean_object* v___x_901_; lean_object* v___x_902_; 
v___x_901_ = lean_array_push(v_x_885_, v___x_900_);
v___x_902_ = l_Lasm_JS_Wire_readFields___redArg(v_inst_886_, v_inst_887_, v_err_888_, v_ref_889_, v_fuel_890_, v_b_891_, v_n_892_, v_snd_895_, v___x_901_);
return v___x_902_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readFields___redArg___lam__0___boxed(lean_object* v_fst_905_, lean_object* v_x_906_, lean_object* v_inst_907_, lean_object* v_inst_908_, lean_object* v_err_909_, lean_object* v_ref_910_, lean_object* v_fuel_911_, lean_object* v_b_912_, lean_object* v_n_913_, lean_object* v_____x_914_){
_start:
{
lean_object* v_res_915_; 
v_res_915_ = l_Lasm_JS_Wire_readFields___redArg___lam__0(v_fst_905_, v_x_906_, v_inst_907_, v_inst_908_, v_err_909_, v_ref_910_, v_fuel_911_, v_b_912_, v_n_913_, v_____x_914_);
lean_dec(v_n_913_);
return v_res_915_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readFields___redArg(lean_object* v_inst_916_, lean_object* v_inst_917_, lean_object* v_err_918_, lean_object* v_ref_919_, lean_object* v_fuel_920_, lean_object* v_b_921_, lean_object* v_x_922_, lean_object* v_x_923_, lean_object* v_x_924_){
_start:
{
lean_object* v_toApplicative_925_; lean_object* v_toBind_926_; lean_object* v_toPure_927_; lean_object* v_zero_928_; uint8_t v_isZero_929_; 
v_toApplicative_925_ = lean_ctor_get(v_inst_916_, 0);
v_toBind_926_ = lean_ctor_get(v_inst_916_, 1);
v_toPure_927_ = lean_ctor_get(v_toApplicative_925_, 1);
v_zero_928_ = lean_unsigned_to_nat(0u);
v_isZero_929_ = lean_nat_dec_eq(v_x_922_, v_zero_928_);
if (v_isZero_929_ == 1)
{
lean_object* v___x_931_; uint8_t v_isShared_932_; uint8_t v_isSharedCheck_937_; 
lean_inc(v_toPure_927_);
lean_dec_ref(v_b_921_);
lean_dec(v_fuel_920_);
lean_dec(v_ref_919_);
lean_dec(v_err_918_);
lean_dec_ref(v_inst_917_);
v_isSharedCheck_937_ = !lean_is_exclusive(v_inst_916_);
if (v_isSharedCheck_937_ == 0)
{
lean_object* v_unused_938_; lean_object* v_unused_939_; 
v_unused_938_ = lean_ctor_get(v_inst_916_, 1);
lean_dec(v_unused_938_);
v_unused_939_ = lean_ctor_get(v_inst_916_, 0);
lean_dec(v_unused_939_);
v___x_931_ = v_inst_916_;
v_isShared_932_ = v_isSharedCheck_937_;
goto v_resetjp_930_;
}
else
{
lean_dec(v_inst_916_);
v___x_931_ = lean_box(0);
v_isShared_932_ = v_isSharedCheck_937_;
goto v_resetjp_930_;
}
v_resetjp_930_:
{
lean_object* v___x_934_; 
if (v_isShared_932_ == 0)
{
lean_ctor_set(v___x_931_, 1, v_x_923_);
lean_ctor_set(v___x_931_, 0, v_x_924_);
v___x_934_ = v___x_931_;
goto v_reusejp_933_;
}
else
{
lean_object* v_reuseFailAlloc_936_; 
v_reuseFailAlloc_936_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_936_, 0, v_x_924_);
lean_ctor_set(v_reuseFailAlloc_936_, 1, v_x_923_);
v___x_934_ = v_reuseFailAlloc_936_;
goto v_reusejp_933_;
}
v_reusejp_933_:
{
lean_object* v___x_935_; 
v___x_935_ = lean_apply_2(v_toPure_927_, lean_box(0), v___x_934_);
return v___x_935_;
}
}
}
else
{
lean_object* v___x_940_; 
lean_inc(v_toBind_926_);
v___x_940_ = l_Lasm_JS_Wire_readString(v_b_921_, v_x_923_);
lean_dec(v_x_923_);
if (lean_obj_tag(v___x_940_) == 0)
{
lean_object* v_a_941_; lean_object* v_throw_942_; lean_object* v___x_943_; lean_object* v___x_944_; 
lean_dec(v_toBind_926_);
lean_dec_ref(v_x_924_);
lean_dec_ref(v_b_921_);
lean_dec(v_fuel_920_);
lean_dec(v_ref_919_);
lean_dec_ref(v_inst_916_);
v_a_941_ = lean_ctor_get(v___x_940_, 0);
lean_inc(v_a_941_);
lean_dec_ref_known(v___x_940_, 1);
v_throw_942_ = lean_ctor_get(v_inst_917_, 0);
lean_inc(v_throw_942_);
lean_dec_ref(v_inst_917_);
v___x_943_ = lean_apply_1(v_err_918_, v_a_941_);
v___x_944_ = lean_apply_2(v_throw_942_, lean_box(0), v___x_943_);
return v___x_944_;
}
else
{
lean_object* v_a_945_; lean_object* v_fst_946_; lean_object* v_snd_947_; lean_object* v_one_948_; lean_object* v_n_949_; lean_object* v___f_950_; lean_object* v___x_951_; lean_object* v___x_952_; 
v_a_945_ = lean_ctor_get(v___x_940_, 0);
lean_inc(v_a_945_);
lean_dec_ref_known(v___x_940_, 1);
v_fst_946_ = lean_ctor_get(v_a_945_, 0);
lean_inc(v_fst_946_);
v_snd_947_ = lean_ctor_get(v_a_945_, 1);
lean_inc(v_snd_947_);
lean_dec(v_a_945_);
v_one_948_ = lean_unsigned_to_nat(1u);
v_n_949_ = lean_nat_sub(v_x_922_, v_one_948_);
lean_inc_ref(v_b_921_);
lean_inc(v_fuel_920_);
lean_inc(v_ref_919_);
lean_inc(v_err_918_);
lean_inc_ref(v_inst_917_);
lean_inc_ref(v_inst_916_);
v___f_950_ = lean_alloc_closure((void*)(l_Lasm_JS_Wire_readFields___redArg___lam__0___boxed), 10, 9);
lean_closure_set(v___f_950_, 0, v_fst_946_);
lean_closure_set(v___f_950_, 1, v_x_924_);
lean_closure_set(v___f_950_, 2, v_inst_916_);
lean_closure_set(v___f_950_, 3, v_inst_917_);
lean_closure_set(v___f_950_, 4, v_err_918_);
lean_closure_set(v___f_950_, 5, v_ref_919_);
lean_closure_set(v___f_950_, 6, v_fuel_920_);
lean_closure_set(v___f_950_, 7, v_b_921_);
lean_closure_set(v___f_950_, 8, v_n_949_);
v___x_951_ = l_Lasm_JS_Wire_readAt___redArg(v_inst_916_, v_inst_917_, v_err_918_, v_ref_919_, v_fuel_920_, v_b_921_, v_snd_947_);
lean_dec(v_snd_947_);
lean_dec(v_fuel_920_);
v___x_952_ = lean_apply_4(v_toBind_926_, lean_box(0), lean_box(0), v___x_951_, v___f_950_);
return v___x_952_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readAt___redArg(lean_object* v_inst_954_, lean_object* v_inst_955_, lean_object* v_err_956_, lean_object* v_ref_957_, lean_object* v_x_958_, lean_object* v_x_959_, lean_object* v_x_960_){
_start:
{
lean_object* v_toApplicative_961_; lean_object* v_toBind_962_; lean_object* v_toPure_963_; lean_object* v_zero_964_; uint8_t v_isZero_965_; 
v_toApplicative_961_ = lean_ctor_get(v_inst_954_, 0);
v_toBind_962_ = lean_ctor_get(v_inst_954_, 1);
v_toPure_963_ = lean_ctor_get(v_toApplicative_961_, 1);
v_zero_964_ = lean_unsigned_to_nat(0u);
v_isZero_965_ = lean_nat_dec_eq(v_x_958_, v_zero_964_);
if (v_isZero_965_ == 1)
{
lean_object* v_throw_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; 
lean_dec_ref(v_x_959_);
lean_dec(v_ref_957_);
lean_dec_ref(v_inst_954_);
v_throw_966_ = lean_ctor_get(v_inst_955_, 0);
lean_inc(v_throw_966_);
lean_dec_ref(v_inst_955_);
v___x_967_ = ((lean_object*)(l_Lasm_JS_Wire_readString___closed__0));
v___x_968_ = lean_apply_1(v_err_956_, v___x_967_);
v___x_969_ = lean_apply_2(v_throw_966_, lean_box(0), v___x_968_);
return v___x_969_;
}
else
{
lean_object* v___x_970_; uint8_t v___x_971_; 
v___x_970_ = lean_byte_array_size(v_x_959_);
v___x_971_ = lean_nat_dec_lt(v_x_960_, v___x_970_);
if (v___x_971_ == 0)
{
lean_object* v_throw_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; 
lean_dec_ref(v_x_959_);
lean_dec(v_ref_957_);
lean_dec_ref(v_inst_954_);
v_throw_972_ = lean_ctor_get(v_inst_955_, 0);
lean_inc(v_throw_972_);
lean_dec_ref(v_inst_955_);
v___x_973_ = ((lean_object*)(l_Lasm_JS_Wire_readString___closed__0));
v___x_974_ = lean_apply_1(v_err_956_, v___x_973_);
v___x_975_ = lean_apply_2(v_throw_972_, lean_box(0), v___x_974_);
return v___x_975_;
}
else
{
lean_object* v___x_976_; lean_object* v_o_x27_977_; uint8_t v___x_978_; uint8_t v___x_979_; uint8_t v___x_980_; 
v___x_976_ = lean_unsigned_to_nat(1u);
v_o_x27_977_ = lean_nat_add(v_x_960_, v___x_976_);
v___x_978_ = lean_byte_array_fget(v_x_959_, v_x_960_);
v___x_979_ = 0;
v___x_980_ = lean_uint8_dec_eq(v___x_978_, v___x_979_);
if (v___x_980_ == 0)
{
uint8_t v___x_981_; uint8_t v___x_982_; 
v___x_981_ = 1;
v___x_982_ = lean_uint8_dec_eq(v___x_978_, v___x_981_);
if (v___x_982_ == 0)
{
uint8_t v___x_983_; uint8_t v___x_984_; 
v___x_983_ = 2;
v___x_984_ = lean_uint8_dec_eq(v___x_978_, v___x_983_);
if (v___x_984_ == 0)
{
uint8_t v___x_985_; uint8_t v___x_986_; 
v___x_985_ = 3;
v___x_986_ = lean_uint8_dec_eq(v___x_978_, v___x_985_);
if (v___x_986_ == 0)
{
uint8_t v___x_987_; uint8_t v___x_988_; 
v___x_987_ = 4;
v___x_988_ = lean_uint8_dec_eq(v___x_978_, v___x_987_);
if (v___x_988_ == 0)
{
uint8_t v___x_989_; uint8_t v___x_990_; 
lean_inc(v_toBind_962_);
v___x_989_ = 5;
v___x_990_ = lean_uint8_dec_eq(v___x_978_, v___x_989_);
if (v___x_990_ == 0)
{
uint8_t v___x_991_; uint8_t v___x_992_; 
v___x_991_ = 6;
v___x_992_ = lean_uint8_dec_eq(v___x_978_, v___x_991_);
if (v___x_992_ == 0)
{
uint8_t v___x_993_; uint8_t v___x_994_; 
v___x_993_ = 7;
v___x_994_ = lean_uint8_dec_eq(v___x_978_, v___x_993_);
if (v___x_994_ == 0)
{
lean_object* v_n_995_; uint8_t v___x_996_; uint8_t v___x_997_; 
v_n_995_ = lean_nat_sub(v_x_958_, v___x_976_);
v___x_996_ = 8;
v___x_997_ = lean_uint8_dec_eq(v___x_978_, v___x_996_);
if (v___x_997_ == 0)
{
uint8_t v___x_998_; uint8_t v___x_999_; 
v___x_998_ = 9;
v___x_999_ = lean_uint8_dec_eq(v___x_978_, v___x_998_);
if (v___x_999_ == 0)
{
uint8_t v___x_1000_; uint8_t v___x_1001_; 
lean_inc(v_toPure_963_);
lean_dec(v_n_995_);
lean_dec_ref(v_inst_954_);
v___x_1000_ = 10;
v___x_1001_ = lean_uint8_dec_eq(v___x_978_, v___x_1000_);
if (v___x_1001_ == 0)
{
lean_object* v_throw_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; 
lean_dec(v_o_x27_977_);
lean_dec(v_toPure_963_);
lean_dec(v_toBind_962_);
lean_dec_ref(v_x_959_);
lean_dec(v_ref_957_);
v_throw_1002_ = lean_ctor_get(v_inst_955_, 0);
lean_inc(v_throw_1002_);
lean_dec_ref(v_inst_955_);
v___x_1003_ = ((lean_object*)(l_Lasm_JS_Wire_readAt___redArg___closed__0));
v___x_1004_ = lean_uint8_to_nat(v___x_978_);
v___x_1005_ = l_Nat_reprFast(v___x_1004_);
v___x_1006_ = lean_string_append(v___x_1003_, v___x_1005_);
lean_dec_ref(v___x_1005_);
v___x_1007_ = ((lean_object*)(l_Lasm_JS_Wire_pushLength___closed__5));
v___x_1008_ = lean_string_append(v___x_1006_, v___x_1007_);
v___x_1009_ = lean_apply_1(v_err_956_, v___x_1008_);
v___x_1010_ = lean_apply_2(v_throw_1002_, lean_box(0), v___x_1009_);
return v___x_1010_;
}
else
{
lean_object* v___x_1011_; 
v___x_1011_ = l_Lasm_JS_Wire_readU32(v_x_959_, v_o_x27_977_);
if (lean_obj_tag(v___x_1011_) == 0)
{
lean_object* v_throw_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; 
lean_dec(v_o_x27_977_);
lean_dec(v_toPure_963_);
lean_dec(v_toBind_962_);
lean_dec_ref(v_x_959_);
lean_dec(v_ref_957_);
v_throw_1012_ = lean_ctor_get(v_inst_955_, 0);
lean_inc(v_throw_1012_);
lean_dec_ref(v_inst_955_);
v___x_1013_ = ((lean_object*)(l_Lasm_JS_Wire_readString___closed__0));
v___x_1014_ = lean_apply_1(v_err_956_, v___x_1013_);
v___x_1015_ = lean_apply_2(v_throw_1012_, lean_box(0), v___x_1014_);
return v___x_1015_;
}
else
{
lean_object* v_val_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; 
v_val_1016_ = lean_ctor_get(v___x_1011_, 0);
lean_inc(v_val_1016_);
lean_dec_ref_known(v___x_1011_, 1);
v___x_1017_ = lean_unsigned_to_nat(4u);
v___x_1018_ = lean_nat_add(v_o_x27_977_, v___x_1017_);
lean_dec(v_o_x27_977_);
v___x_1019_ = l_Lasm_JS_Wire_readString(v_x_959_, v___x_1018_);
lean_dec(v___x_1018_);
lean_dec_ref(v_x_959_);
if (lean_obj_tag(v___x_1019_) == 0)
{
lean_object* v_a_1020_; lean_object* v_throw_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; 
lean_dec(v_val_1016_);
lean_dec(v_toPure_963_);
lean_dec(v_toBind_962_);
lean_dec(v_ref_957_);
v_a_1020_ = lean_ctor_get(v___x_1019_, 0);
lean_inc(v_a_1020_);
lean_dec_ref_known(v___x_1019_, 1);
v_throw_1021_ = lean_ctor_get(v_inst_955_, 0);
lean_inc(v_throw_1021_);
lean_dec_ref(v_inst_955_);
v___x_1022_ = lean_apply_1(v_err_956_, v_a_1020_);
v___x_1023_ = lean_apply_2(v_throw_1021_, lean_box(0), v___x_1022_);
return v___x_1023_;
}
else
{
lean_object* v_a_1024_; lean_object* v_fst_1025_; lean_object* v_snd_1026_; lean_object* v___f_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; 
lean_dec(v_err_956_);
lean_dec_ref(v_inst_955_);
v_a_1024_ = lean_ctor_get(v___x_1019_, 0);
lean_inc(v_a_1024_);
lean_dec_ref_known(v___x_1019_, 1);
v_fst_1025_ = lean_ctor_get(v_a_1024_, 0);
lean_inc(v_fst_1025_);
v_snd_1026_ = lean_ctor_get(v_a_1024_, 1);
lean_inc(v_snd_1026_);
lean_dec(v_a_1024_);
v___f_1027_ = lean_alloc_closure((void*)(l_Lasm_JS_Wire_readAt___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1027_, 0, v_snd_1026_);
lean_closure_set(v___f_1027_, 1, v_toPure_963_);
v___x_1028_ = lean_apply_2(v_ref_957_, v_val_1016_, v_fst_1025_);
v___x_1029_ = lean_apply_4(v_toBind_962_, lean_box(0), lean_box(0), v___x_1028_, v___f_1027_);
return v___x_1029_;
}
}
}
}
else
{
lean_object* v___x_1030_; 
v___x_1030_ = l_Lasm_JS_Wire_readU32(v_x_959_, v_o_x27_977_);
if (lean_obj_tag(v___x_1030_) == 0)
{
lean_object* v_throw_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; 
lean_dec(v_n_995_);
lean_dec(v_o_x27_977_);
lean_dec(v_toBind_962_);
lean_dec_ref(v_x_959_);
lean_dec(v_ref_957_);
lean_dec_ref(v_inst_954_);
v_throw_1031_ = lean_ctor_get(v_inst_955_, 0);
lean_inc(v_throw_1031_);
lean_dec_ref(v_inst_955_);
v___x_1032_ = ((lean_object*)(l_Lasm_JS_Wire_readString___closed__0));
v___x_1033_ = lean_apply_1(v_err_956_, v___x_1032_);
v___x_1034_ = lean_apply_2(v_throw_1031_, lean_box(0), v___x_1033_);
return v___x_1034_;
}
else
{
lean_object* v_val_1035_; lean_object* v___f_1036_; uint32_t v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___y_1042_; lean_object* v___x_1046_; uint8_t v___x_1047_; 
v_val_1035_ = lean_ctor_get(v___x_1030_, 0);
lean_inc(v_val_1035_);
lean_dec_ref_known(v___x_1030_, 1);
lean_inc(v_toPure_963_);
v___f_1036_ = lean_alloc_closure((void*)(l_Lasm_JS_Wire_readAt___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1036_, 0, v_toPure_963_);
v___x_1037_ = lean_unbox_uint32(v_val_1035_);
lean_dec(v_val_1035_);
v___x_1038_ = lean_uint32_to_nat(v___x_1037_);
v___x_1039_ = lean_unsigned_to_nat(4u);
v___x_1040_ = lean_nat_add(v_o_x27_977_, v___x_1039_);
lean_dec(v_o_x27_977_);
v___x_1046_ = lean_nat_sub(v___x_970_, v_x_960_);
v___x_1047_ = lean_nat_dec_le(v___x_1038_, v___x_1046_);
if (v___x_1047_ == 0)
{
v___y_1042_ = v___x_1046_;
goto v___jp_1041_;
}
else
{
lean_dec(v___x_1046_);
lean_inc(v___x_1038_);
v___y_1042_ = v___x_1038_;
goto v___jp_1041_;
}
v___jp_1041_:
{
lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; 
v___x_1043_ = lean_mk_empty_array_with_capacity(v___y_1042_);
lean_dec(v___y_1042_);
v___x_1044_ = l_Lasm_JS_Wire_readFields___redArg(v_inst_954_, v_inst_955_, v_err_956_, v_ref_957_, v_n_995_, v_x_959_, v___x_1038_, v___x_1040_, v___x_1043_);
lean_dec(v___x_1038_);
v___x_1045_ = lean_apply_4(v_toBind_962_, lean_box(0), lean_box(0), v___x_1044_, v___f_1036_);
return v___x_1045_;
}
}
}
}
else
{
lean_object* v___x_1048_; 
v___x_1048_ = l_Lasm_JS_Wire_readU32(v_x_959_, v_o_x27_977_);
if (lean_obj_tag(v___x_1048_) == 0)
{
lean_object* v_throw_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; 
lean_dec(v_n_995_);
lean_dec(v_o_x27_977_);
lean_dec(v_toBind_962_);
lean_dec_ref(v_x_959_);
lean_dec(v_ref_957_);
lean_dec_ref(v_inst_954_);
v_throw_1049_ = lean_ctor_get(v_inst_955_, 0);
lean_inc(v_throw_1049_);
lean_dec_ref(v_inst_955_);
v___x_1050_ = ((lean_object*)(l_Lasm_JS_Wire_readString___closed__0));
v___x_1051_ = lean_apply_1(v_err_956_, v___x_1050_);
v___x_1052_ = lean_apply_2(v_throw_1049_, lean_box(0), v___x_1051_);
return v___x_1052_;
}
else
{
lean_object* v_val_1053_; lean_object* v___f_1054_; uint32_t v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___y_1060_; lean_object* v___x_1064_; uint8_t v___x_1065_; 
v_val_1053_ = lean_ctor_get(v___x_1048_, 0);
lean_inc(v_val_1053_);
lean_dec_ref_known(v___x_1048_, 1);
lean_inc(v_toPure_963_);
v___f_1054_ = lean_alloc_closure((void*)(l_Lasm_JS_Wire_readAt___redArg___lam__2), 2, 1);
lean_closure_set(v___f_1054_, 0, v_toPure_963_);
v___x_1055_ = lean_unbox_uint32(v_val_1053_);
lean_dec(v_val_1053_);
v___x_1056_ = lean_uint32_to_nat(v___x_1055_);
v___x_1057_ = lean_unsigned_to_nat(4u);
v___x_1058_ = lean_nat_add(v_o_x27_977_, v___x_1057_);
lean_dec(v_o_x27_977_);
v___x_1064_ = lean_nat_sub(v___x_970_, v_x_960_);
v___x_1065_ = lean_nat_dec_le(v___x_1056_, v___x_1064_);
if (v___x_1065_ == 0)
{
v___y_1060_ = v___x_1064_;
goto v___jp_1059_;
}
else
{
lean_dec(v___x_1064_);
lean_inc(v___x_1056_);
v___y_1060_ = v___x_1056_;
goto v___jp_1059_;
}
v___jp_1059_:
{
lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; 
v___x_1061_ = lean_mk_empty_array_with_capacity(v___y_1060_);
lean_dec(v___y_1060_);
v___x_1062_ = l_Lasm_JS_Wire_readItems___redArg(v_inst_954_, v_inst_955_, v_err_956_, v_ref_957_, v_n_995_, v_x_959_, v___x_1056_, v___x_1058_, v___x_1061_);
lean_dec(v___x_1056_);
v___x_1063_ = lean_apply_4(v_toBind_962_, lean_box(0), lean_box(0), v___x_1062_, v___f_1054_);
return v___x_1063_;
}
}
}
}
else
{
lean_object* v___x_1066_; 
lean_inc(v_toPure_963_);
lean_dec(v_toBind_962_);
lean_dec(v_ref_957_);
lean_dec_ref(v_inst_954_);
v___x_1066_ = l_Lasm_JS_Wire_readRaw(v_x_959_, v_o_x27_977_);
lean_dec(v_o_x27_977_);
lean_dec_ref(v_x_959_);
if (lean_obj_tag(v___x_1066_) == 0)
{
lean_object* v_throw_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; 
lean_dec(v_toPure_963_);
v_throw_1067_ = lean_ctor_get(v_inst_955_, 0);
lean_inc(v_throw_1067_);
lean_dec_ref(v_inst_955_);
v___x_1068_ = ((lean_object*)(l_Lasm_JS_Wire_readString___closed__0));
v___x_1069_ = lean_apply_1(v_err_956_, v___x_1068_);
v___x_1070_ = lean_apply_2(v_throw_1067_, lean_box(0), v___x_1069_);
return v___x_1070_;
}
else
{
lean_object* v_val_1071_; lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1088_; 
lean_dec(v_err_956_);
lean_dec_ref(v_inst_955_);
v_val_1071_ = lean_ctor_get(v___x_1066_, 0);
v_isSharedCheck_1088_ = !lean_is_exclusive(v___x_1066_);
if (v_isSharedCheck_1088_ == 0)
{
v___x_1073_ = v___x_1066_;
v_isShared_1074_ = v_isSharedCheck_1088_;
goto v_resetjp_1072_;
}
else
{
lean_inc(v_val_1071_);
lean_dec(v___x_1066_);
v___x_1073_ = lean_box(0);
v_isShared_1074_ = v_isSharedCheck_1088_;
goto v_resetjp_1072_;
}
v_resetjp_1072_:
{
lean_object* v_fst_1075_; lean_object* v_snd_1076_; lean_object* v___x_1078_; uint8_t v_isShared_1079_; uint8_t v_isSharedCheck_1087_; 
v_fst_1075_ = lean_ctor_get(v_val_1071_, 0);
v_snd_1076_ = lean_ctor_get(v_val_1071_, 1);
v_isSharedCheck_1087_ = !lean_is_exclusive(v_val_1071_);
if (v_isSharedCheck_1087_ == 0)
{
v___x_1078_ = v_val_1071_;
v_isShared_1079_ = v_isSharedCheck_1087_;
goto v_resetjp_1077_;
}
else
{
lean_inc(v_snd_1076_);
lean_inc(v_fst_1075_);
lean_dec(v_val_1071_);
v___x_1078_ = lean_box(0);
v_isShared_1079_ = v_isSharedCheck_1087_;
goto v_resetjp_1077_;
}
v_resetjp_1077_:
{
lean_object* v___x_1081_; 
if (v_isShared_1074_ == 0)
{
lean_ctor_set_tag(v___x_1073_, 6);
lean_ctor_set(v___x_1073_, 0, v_fst_1075_);
v___x_1081_ = v___x_1073_;
goto v_reusejp_1080_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v_fst_1075_);
v___x_1081_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1080_;
}
v_reusejp_1080_:
{
lean_object* v___x_1083_; 
if (v_isShared_1079_ == 0)
{
lean_ctor_set(v___x_1078_, 0, v___x_1081_);
v___x_1083_ = v___x_1078_;
goto v_reusejp_1082_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v___x_1081_);
lean_ctor_set(v_reuseFailAlloc_1085_, 1, v_snd_1076_);
v___x_1083_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1082_;
}
v_reusejp_1082_:
{
lean_object* v___x_1084_; 
v___x_1084_ = lean_apply_2(v_toPure_963_, lean_box(0), v___x_1083_);
return v___x_1084_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1089_; 
lean_inc(v_toPure_963_);
lean_dec(v_toBind_962_);
lean_dec(v_ref_957_);
lean_dec_ref(v_inst_954_);
v___x_1089_ = l_Lasm_JS_Wire_readString(v_x_959_, v_o_x27_977_);
lean_dec(v_o_x27_977_);
lean_dec_ref(v_x_959_);
if (lean_obj_tag(v___x_1089_) == 0)
{
lean_object* v_a_1090_; lean_object* v_throw_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; 
lean_dec(v_toPure_963_);
v_a_1090_ = lean_ctor_get(v___x_1089_, 0);
lean_inc(v_a_1090_);
lean_dec_ref_known(v___x_1089_, 1);
v_throw_1091_ = lean_ctor_get(v_inst_955_, 0);
lean_inc(v_throw_1091_);
lean_dec_ref(v_inst_955_);
v___x_1092_ = lean_apply_1(v_err_956_, v_a_1090_);
v___x_1093_ = lean_apply_2(v_throw_1091_, lean_box(0), v___x_1092_);
return v___x_1093_;
}
else
{
lean_object* v_a_1094_; lean_object* v_fst_1095_; lean_object* v_snd_1096_; lean_object* v___x_1098_; uint8_t v_isShared_1099_; uint8_t v_isSharedCheck_1119_; 
v_a_1094_ = lean_ctor_get(v___x_1089_, 0);
lean_inc(v_a_1094_);
lean_dec_ref_known(v___x_1089_, 1);
v_fst_1095_ = lean_ctor_get(v_a_1094_, 0);
v_snd_1096_ = lean_ctor_get(v_a_1094_, 1);
v_isSharedCheck_1119_ = !lean_is_exclusive(v_a_1094_);
if (v_isSharedCheck_1119_ == 0)
{
v___x_1098_ = v_a_1094_;
v_isShared_1099_ = v_isSharedCheck_1119_;
goto v_resetjp_1097_;
}
else
{
lean_inc(v_snd_1096_);
lean_inc(v_fst_1095_);
lean_dec(v_a_1094_);
v___x_1098_ = lean_box(0);
v_isShared_1099_ = v_isSharedCheck_1119_;
goto v_resetjp_1097_;
}
v_resetjp_1097_:
{
lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; 
v___x_1100_ = lean_string_utf8_byte_size(v_fst_1095_);
v___x_1101_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1101_, 0, v_fst_1095_);
lean_ctor_set(v___x_1101_, 1, v_zero_964_);
lean_ctor_set(v___x_1101_, 2, v___x_1100_);
v___x_1102_ = l_String_Slice_toInt_x3f(v___x_1101_);
if (lean_obj_tag(v___x_1102_) == 0)
{
lean_object* v_throw_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; 
lean_del_object(v___x_1098_);
lean_dec(v_snd_1096_);
lean_dec(v_toPure_963_);
v_throw_1103_ = lean_ctor_get(v_inst_955_, 0);
lean_inc(v_throw_1103_);
lean_dec_ref(v_inst_955_);
v___x_1104_ = ((lean_object*)(l_Lasm_JS_Wire_readAt___redArg___closed__1));
v___x_1105_ = lean_apply_1(v_err_956_, v___x_1104_);
v___x_1106_ = lean_apply_2(v_throw_1103_, lean_box(0), v___x_1105_);
return v___x_1106_;
}
else
{
lean_object* v_val_1107_; lean_object* v___x_1109_; uint8_t v_isShared_1110_; uint8_t v_isSharedCheck_1118_; 
lean_dec(v_err_956_);
lean_dec_ref(v_inst_955_);
v_val_1107_ = lean_ctor_get(v___x_1102_, 0);
v_isSharedCheck_1118_ = !lean_is_exclusive(v___x_1102_);
if (v_isSharedCheck_1118_ == 0)
{
v___x_1109_ = v___x_1102_;
v_isShared_1110_ = v_isSharedCheck_1118_;
goto v_resetjp_1108_;
}
else
{
lean_inc(v_val_1107_);
lean_dec(v___x_1102_);
v___x_1109_ = lean_box(0);
v_isShared_1110_ = v_isSharedCheck_1118_;
goto v_resetjp_1108_;
}
v_resetjp_1108_:
{
lean_object* v___x_1112_; 
if (v_isShared_1110_ == 0)
{
lean_ctor_set_tag(v___x_1109_, 5);
v___x_1112_ = v___x_1109_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v_val_1107_);
v___x_1112_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
lean_object* v___x_1114_; 
if (v_isShared_1099_ == 0)
{
lean_ctor_set(v___x_1098_, 0, v___x_1112_);
v___x_1114_ = v___x_1098_;
goto v_reusejp_1113_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v___x_1112_);
lean_ctor_set(v_reuseFailAlloc_1116_, 1, v_snd_1096_);
v___x_1114_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1113_;
}
v_reusejp_1113_:
{
lean_object* v___x_1115_; 
v___x_1115_ = lean_apply_2(v_toPure_963_, lean_box(0), v___x_1114_);
return v___x_1115_;
}
}
}
}
}
}
}
}
else
{
lean_object* v___x_1120_; 
lean_inc(v_toPure_963_);
lean_dec(v_toBind_962_);
lean_dec(v_ref_957_);
lean_dec_ref(v_inst_954_);
v___x_1120_ = l_Lasm_JS_Wire_readString(v_x_959_, v_o_x27_977_);
lean_dec(v_o_x27_977_);
lean_dec_ref(v_x_959_);
if (lean_obj_tag(v___x_1120_) == 0)
{
lean_object* v_a_1121_; lean_object* v_throw_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; 
lean_dec(v_toPure_963_);
v_a_1121_ = lean_ctor_get(v___x_1120_, 0);
lean_inc(v_a_1121_);
lean_dec_ref_known(v___x_1120_, 1);
v_throw_1122_ = lean_ctor_get(v_inst_955_, 0);
lean_inc(v_throw_1122_);
lean_dec_ref(v_inst_955_);
v___x_1123_ = lean_apply_1(v_err_956_, v_a_1121_);
v___x_1124_ = lean_apply_2(v_throw_1122_, lean_box(0), v___x_1123_);
return v___x_1124_;
}
else
{
lean_object* v_a_1125_; lean_object* v___x_1127_; uint8_t v_isShared_1128_; uint8_t v_isSharedCheck_1142_; 
lean_dec(v_err_956_);
lean_dec_ref(v_inst_955_);
v_a_1125_ = lean_ctor_get(v___x_1120_, 0);
v_isSharedCheck_1142_ = !lean_is_exclusive(v___x_1120_);
if (v_isSharedCheck_1142_ == 0)
{
v___x_1127_ = v___x_1120_;
v_isShared_1128_ = v_isSharedCheck_1142_;
goto v_resetjp_1126_;
}
else
{
lean_inc(v_a_1125_);
lean_dec(v___x_1120_);
v___x_1127_ = lean_box(0);
v_isShared_1128_ = v_isSharedCheck_1142_;
goto v_resetjp_1126_;
}
v_resetjp_1126_:
{
lean_object* v_fst_1129_; lean_object* v_snd_1130_; lean_object* v___x_1132_; uint8_t v_isShared_1133_; uint8_t v_isSharedCheck_1141_; 
v_fst_1129_ = lean_ctor_get(v_a_1125_, 0);
v_snd_1130_ = lean_ctor_get(v_a_1125_, 1);
v_isSharedCheck_1141_ = !lean_is_exclusive(v_a_1125_);
if (v_isSharedCheck_1141_ == 0)
{
v___x_1132_ = v_a_1125_;
v_isShared_1133_ = v_isSharedCheck_1141_;
goto v_resetjp_1131_;
}
else
{
lean_inc(v_snd_1130_);
lean_inc(v_fst_1129_);
lean_dec(v_a_1125_);
v___x_1132_ = lean_box(0);
v_isShared_1133_ = v_isSharedCheck_1141_;
goto v_resetjp_1131_;
}
v_resetjp_1131_:
{
lean_object* v___x_1135_; 
if (v_isShared_1128_ == 0)
{
lean_ctor_set_tag(v___x_1127_, 4);
lean_ctor_set(v___x_1127_, 0, v_fst_1129_);
v___x_1135_ = v___x_1127_;
goto v_reusejp_1134_;
}
else
{
lean_object* v_reuseFailAlloc_1140_; 
v_reuseFailAlloc_1140_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1140_, 0, v_fst_1129_);
v___x_1135_ = v_reuseFailAlloc_1140_;
goto v_reusejp_1134_;
}
v_reusejp_1134_:
{
lean_object* v___x_1137_; 
if (v_isShared_1133_ == 0)
{
lean_ctor_set(v___x_1132_, 0, v___x_1135_);
v___x_1137_ = v___x_1132_;
goto v_reusejp_1136_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v___x_1135_);
lean_ctor_set(v_reuseFailAlloc_1139_, 1, v_snd_1130_);
v___x_1137_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1136_;
}
v_reusejp_1136_:
{
lean_object* v___x_1138_; 
v___x_1138_ = lean_apply_2(v_toPure_963_, lean_box(0), v___x_1137_);
return v___x_1138_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1144_; uint8_t v_isShared_1145_; uint8_t v_isSharedCheck_1161_; 
lean_inc(v_toPure_963_);
lean_dec(v_ref_957_);
v_isSharedCheck_1161_ = !lean_is_exclusive(v_inst_954_);
if (v_isSharedCheck_1161_ == 0)
{
lean_object* v_unused_1162_; lean_object* v_unused_1163_; 
v_unused_1162_ = lean_ctor_get(v_inst_954_, 1);
lean_dec(v_unused_1162_);
v_unused_1163_ = lean_ctor_get(v_inst_954_, 0);
lean_dec(v_unused_1163_);
v___x_1144_ = v_inst_954_;
v_isShared_1145_ = v_isSharedCheck_1161_;
goto v_resetjp_1143_;
}
else
{
lean_dec(v_inst_954_);
v___x_1144_ = lean_box(0);
v_isShared_1145_ = v_isSharedCheck_1161_;
goto v_resetjp_1143_;
}
v_resetjp_1143_:
{
lean_object* v___x_1146_; 
v___x_1146_ = l_Lasm_JS_Wire_readU64(v_x_959_, v_o_x27_977_);
lean_dec_ref(v_x_959_);
if (lean_obj_tag(v___x_1146_) == 0)
{
lean_object* v_throw_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; 
lean_del_object(v___x_1144_);
lean_dec(v_o_x27_977_);
lean_dec(v_toPure_963_);
v_throw_1147_ = lean_ctor_get(v_inst_955_, 0);
lean_inc(v_throw_1147_);
lean_dec_ref(v_inst_955_);
v___x_1148_ = ((lean_object*)(l_Lasm_JS_Wire_readString___closed__0));
v___x_1149_ = lean_apply_1(v_err_956_, v___x_1148_);
v___x_1150_ = lean_apply_2(v_throw_1147_, lean_box(0), v___x_1149_);
return v___x_1150_;
}
else
{
lean_object* v_val_1151_; uint64_t v___x_1152_; double v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1158_; 
lean_dec(v_err_956_);
lean_dec_ref(v_inst_955_);
v_val_1151_ = lean_ctor_get(v___x_1146_, 0);
lean_inc(v_val_1151_);
lean_dec_ref_known(v___x_1146_, 1);
v___x_1152_ = lean_unbox_uint64(v_val_1151_);
lean_dec(v_val_1151_);
v___x_1153_ = lean_float_of_bits(v___x_1152_);
v___x_1154_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1154_, 0, v___x_1153_);
v___x_1155_ = lean_unsigned_to_nat(8u);
v___x_1156_ = lean_nat_add(v_o_x27_977_, v___x_1155_);
lean_dec(v_o_x27_977_);
if (v_isShared_1145_ == 0)
{
lean_ctor_set(v___x_1144_, 1, v___x_1156_);
lean_ctor_set(v___x_1144_, 0, v___x_1154_);
v___x_1158_ = v___x_1144_;
goto v_reusejp_1157_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v___x_1154_);
lean_ctor_set(v_reuseFailAlloc_1160_, 1, v___x_1156_);
v___x_1158_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1157_;
}
v_reusejp_1157_:
{
lean_object* v___x_1159_; 
v___x_1159_ = lean_apply_2(v_toPure_963_, lean_box(0), v___x_1158_);
return v___x_1159_;
}
}
}
}
}
else
{
lean_object* v___x_1165_; uint8_t v_isShared_1166_; uint8_t v_isSharedCheck_1172_; 
lean_inc(v_toPure_963_);
lean_dec_ref(v_x_959_);
lean_dec(v_ref_957_);
lean_dec(v_err_956_);
lean_dec_ref(v_inst_955_);
v_isSharedCheck_1172_ = !lean_is_exclusive(v_inst_954_);
if (v_isSharedCheck_1172_ == 0)
{
lean_object* v_unused_1173_; lean_object* v_unused_1174_; 
v_unused_1173_ = lean_ctor_get(v_inst_954_, 1);
lean_dec(v_unused_1173_);
v_unused_1174_ = lean_ctor_get(v_inst_954_, 0);
lean_dec(v_unused_1174_);
v___x_1165_ = v_inst_954_;
v_isShared_1166_ = v_isSharedCheck_1172_;
goto v_resetjp_1164_;
}
else
{
lean_dec(v_inst_954_);
v___x_1165_ = lean_box(0);
v_isShared_1166_ = v_isSharedCheck_1172_;
goto v_resetjp_1164_;
}
v_resetjp_1164_:
{
lean_object* v___x_1167_; lean_object* v___x_1169_; 
v___x_1167_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1167_, 0, v___x_971_);
if (v_isShared_1166_ == 0)
{
lean_ctor_set(v___x_1165_, 1, v_o_x27_977_);
lean_ctor_set(v___x_1165_, 0, v___x_1167_);
v___x_1169_ = v___x_1165_;
goto v_reusejp_1168_;
}
else
{
lean_object* v_reuseFailAlloc_1171_; 
v_reuseFailAlloc_1171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1171_, 0, v___x_1167_);
lean_ctor_set(v_reuseFailAlloc_1171_, 1, v_o_x27_977_);
v___x_1169_ = v_reuseFailAlloc_1171_;
goto v_reusejp_1168_;
}
v_reusejp_1168_:
{
lean_object* v___x_1170_; 
v___x_1170_ = lean_apply_2(v_toPure_963_, lean_box(0), v___x_1169_);
return v___x_1170_;
}
}
}
}
else
{
lean_object* v___x_1176_; uint8_t v_isShared_1177_; uint8_t v_isSharedCheck_1183_; 
lean_inc(v_toPure_963_);
lean_dec_ref(v_x_959_);
lean_dec(v_ref_957_);
lean_dec(v_err_956_);
lean_dec_ref(v_inst_955_);
v_isSharedCheck_1183_ = !lean_is_exclusive(v_inst_954_);
if (v_isSharedCheck_1183_ == 0)
{
lean_object* v_unused_1184_; lean_object* v_unused_1185_; 
v_unused_1184_ = lean_ctor_get(v_inst_954_, 1);
lean_dec(v_unused_1184_);
v_unused_1185_ = lean_ctor_get(v_inst_954_, 0);
lean_dec(v_unused_1185_);
v___x_1176_ = v_inst_954_;
v_isShared_1177_ = v_isSharedCheck_1183_;
goto v_resetjp_1175_;
}
else
{
lean_dec(v_inst_954_);
v___x_1176_ = lean_box(0);
v_isShared_1177_ = v_isSharedCheck_1183_;
goto v_resetjp_1175_;
}
v_resetjp_1175_:
{
lean_object* v___x_1178_; lean_object* v___x_1180_; 
v___x_1178_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1178_, 0, v___x_982_);
if (v_isShared_1177_ == 0)
{
lean_ctor_set(v___x_1176_, 1, v_o_x27_977_);
lean_ctor_set(v___x_1176_, 0, v___x_1178_);
v___x_1180_ = v___x_1176_;
goto v_reusejp_1179_;
}
else
{
lean_object* v_reuseFailAlloc_1182_; 
v_reuseFailAlloc_1182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1182_, 0, v___x_1178_);
lean_ctor_set(v_reuseFailAlloc_1182_, 1, v_o_x27_977_);
v___x_1180_ = v_reuseFailAlloc_1182_;
goto v_reusejp_1179_;
}
v_reusejp_1179_:
{
lean_object* v___x_1181_; 
v___x_1181_ = lean_apply_2(v_toPure_963_, lean_box(0), v___x_1180_);
return v___x_1181_;
}
}
}
}
else
{
lean_object* v___x_1187_; uint8_t v_isShared_1188_; uint8_t v_isSharedCheck_1194_; 
lean_inc(v_toPure_963_);
lean_dec_ref(v_x_959_);
lean_dec(v_ref_957_);
lean_dec(v_err_956_);
lean_dec_ref(v_inst_955_);
v_isSharedCheck_1194_ = !lean_is_exclusive(v_inst_954_);
if (v_isSharedCheck_1194_ == 0)
{
lean_object* v_unused_1195_; lean_object* v_unused_1196_; 
v_unused_1195_ = lean_ctor_get(v_inst_954_, 1);
lean_dec(v_unused_1195_);
v_unused_1196_ = lean_ctor_get(v_inst_954_, 0);
lean_dec(v_unused_1196_);
v___x_1187_ = v_inst_954_;
v_isShared_1188_ = v_isSharedCheck_1194_;
goto v_resetjp_1186_;
}
else
{
lean_dec(v_inst_954_);
v___x_1187_ = lean_box(0);
v_isShared_1188_ = v_isSharedCheck_1194_;
goto v_resetjp_1186_;
}
v_resetjp_1186_:
{
lean_object* v___x_1189_; lean_object* v___x_1191_; 
v___x_1189_ = lean_box(1);
if (v_isShared_1188_ == 0)
{
lean_ctor_set(v___x_1187_, 1, v_o_x27_977_);
lean_ctor_set(v___x_1187_, 0, v___x_1189_);
v___x_1191_ = v___x_1187_;
goto v_reusejp_1190_;
}
else
{
lean_object* v_reuseFailAlloc_1193_; 
v_reuseFailAlloc_1193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1193_, 0, v___x_1189_);
lean_ctor_set(v_reuseFailAlloc_1193_, 1, v_o_x27_977_);
v___x_1191_ = v_reuseFailAlloc_1193_;
goto v_reusejp_1190_;
}
v_reusejp_1190_:
{
lean_object* v___x_1192_; 
v___x_1192_ = lean_apply_2(v_toPure_963_, lean_box(0), v___x_1191_);
return v___x_1192_;
}
}
}
}
else
{
lean_object* v___x_1198_; uint8_t v_isShared_1199_; uint8_t v_isSharedCheck_1205_; 
lean_inc(v_toPure_963_);
lean_dec_ref(v_x_959_);
lean_dec(v_ref_957_);
lean_dec(v_err_956_);
lean_dec_ref(v_inst_955_);
v_isSharedCheck_1205_ = !lean_is_exclusive(v_inst_954_);
if (v_isSharedCheck_1205_ == 0)
{
lean_object* v_unused_1206_; lean_object* v_unused_1207_; 
v_unused_1206_ = lean_ctor_get(v_inst_954_, 1);
lean_dec(v_unused_1206_);
v_unused_1207_ = lean_ctor_get(v_inst_954_, 0);
lean_dec(v_unused_1207_);
v___x_1198_ = v_inst_954_;
v_isShared_1199_ = v_isSharedCheck_1205_;
goto v_resetjp_1197_;
}
else
{
lean_dec(v_inst_954_);
v___x_1198_ = lean_box(0);
v_isShared_1199_ = v_isSharedCheck_1205_;
goto v_resetjp_1197_;
}
v_resetjp_1197_:
{
lean_object* v___x_1200_; lean_object* v___x_1202_; 
v___x_1200_ = lean_box(0);
if (v_isShared_1199_ == 0)
{
lean_ctor_set(v___x_1198_, 1, v_o_x27_977_);
lean_ctor_set(v___x_1198_, 0, v___x_1200_);
v___x_1202_ = v___x_1198_;
goto v_reusejp_1201_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v___x_1200_);
lean_ctor_set(v_reuseFailAlloc_1204_, 1, v_o_x27_977_);
v___x_1202_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1201_;
}
v_reusejp_1201_:
{
lean_object* v___x_1203_; 
v___x_1203_ = lean_apply_2(v_toPure_963_, lean_box(0), v___x_1202_);
return v___x_1203_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readItems___redArg(lean_object* v_inst_1208_, lean_object* v_inst_1209_, lean_object* v_err_1210_, lean_object* v_ref_1211_, lean_object* v_fuel_1212_, lean_object* v_b_1213_, lean_object* v_x_1214_, lean_object* v_x_1215_, lean_object* v_x_1216_){
_start:
{
lean_object* v_toApplicative_1217_; lean_object* v_toBind_1218_; lean_object* v_toPure_1219_; lean_object* v_zero_1220_; uint8_t v_isZero_1221_; 
v_toApplicative_1217_ = lean_ctor_get(v_inst_1208_, 0);
v_toBind_1218_ = lean_ctor_get(v_inst_1208_, 1);
v_toPure_1219_ = lean_ctor_get(v_toApplicative_1217_, 1);
v_zero_1220_ = lean_unsigned_to_nat(0u);
v_isZero_1221_ = lean_nat_dec_eq(v_x_1214_, v_zero_1220_);
if (v_isZero_1221_ == 1)
{
lean_object* v___x_1223_; uint8_t v_isShared_1224_; uint8_t v_isSharedCheck_1229_; 
lean_inc(v_toPure_1219_);
lean_dec_ref(v_b_1213_);
lean_dec(v_fuel_1212_);
lean_dec(v_ref_1211_);
lean_dec(v_err_1210_);
lean_dec_ref(v_inst_1209_);
v_isSharedCheck_1229_ = !lean_is_exclusive(v_inst_1208_);
if (v_isSharedCheck_1229_ == 0)
{
lean_object* v_unused_1230_; lean_object* v_unused_1231_; 
v_unused_1230_ = lean_ctor_get(v_inst_1208_, 1);
lean_dec(v_unused_1230_);
v_unused_1231_ = lean_ctor_get(v_inst_1208_, 0);
lean_dec(v_unused_1231_);
v___x_1223_ = v_inst_1208_;
v_isShared_1224_ = v_isSharedCheck_1229_;
goto v_resetjp_1222_;
}
else
{
lean_dec(v_inst_1208_);
v___x_1223_ = lean_box(0);
v_isShared_1224_ = v_isSharedCheck_1229_;
goto v_resetjp_1222_;
}
v_resetjp_1222_:
{
lean_object* v___x_1226_; 
if (v_isShared_1224_ == 0)
{
lean_ctor_set(v___x_1223_, 1, v_x_1215_);
lean_ctor_set(v___x_1223_, 0, v_x_1216_);
v___x_1226_ = v___x_1223_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1228_; 
v_reuseFailAlloc_1228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1228_, 0, v_x_1216_);
lean_ctor_set(v_reuseFailAlloc_1228_, 1, v_x_1215_);
v___x_1226_ = v_reuseFailAlloc_1228_;
goto v_reusejp_1225_;
}
v_reusejp_1225_:
{
lean_object* v___x_1227_; 
v___x_1227_ = lean_apply_2(v_toPure_1219_, lean_box(0), v___x_1226_);
return v___x_1227_;
}
}
}
else
{
lean_object* v_one_1232_; lean_object* v_n_1233_; lean_object* v___f_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; 
lean_inc(v_toBind_1218_);
v_one_1232_ = lean_unsigned_to_nat(1u);
v_n_1233_ = lean_nat_sub(v_x_1214_, v_one_1232_);
lean_inc_ref(v_b_1213_);
lean_inc(v_fuel_1212_);
lean_inc(v_ref_1211_);
lean_inc(v_err_1210_);
lean_inc_ref(v_inst_1209_);
lean_inc_ref(v_inst_1208_);
v___f_1234_ = lean_alloc_closure((void*)(l_Lasm_JS_Wire_readItems___redArg___lam__0___boxed), 9, 8);
lean_closure_set(v___f_1234_, 0, v_x_1216_);
lean_closure_set(v___f_1234_, 1, v_inst_1208_);
lean_closure_set(v___f_1234_, 2, v_inst_1209_);
lean_closure_set(v___f_1234_, 3, v_err_1210_);
lean_closure_set(v___f_1234_, 4, v_ref_1211_);
lean_closure_set(v___f_1234_, 5, v_fuel_1212_);
lean_closure_set(v___f_1234_, 6, v_b_1213_);
lean_closure_set(v___f_1234_, 7, v_n_1233_);
v___x_1235_ = l_Lasm_JS_Wire_readAt___redArg(v_inst_1208_, v_inst_1209_, v_err_1210_, v_ref_1211_, v_fuel_1212_, v_b_1213_, v_x_1215_);
lean_dec(v_x_1215_);
lean_dec(v_fuel_1212_);
v___x_1236_ = lean_apply_4(v_toBind_1218_, lean_box(0), lean_box(0), v___x_1235_, v___f_1234_);
return v___x_1236_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readItems___redArg___lam__0(lean_object* v_x_1237_, lean_object* v_inst_1238_, lean_object* v_inst_1239_, lean_object* v_err_1240_, lean_object* v_ref_1241_, lean_object* v_fuel_1242_, lean_object* v_b_1243_, lean_object* v_n_1244_, lean_object* v_____x_1245_){
_start:
{
lean_object* v_fst_1246_; lean_object* v_snd_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; 
v_fst_1246_ = lean_ctor_get(v_____x_1245_, 0);
lean_inc(v_fst_1246_);
v_snd_1247_ = lean_ctor_get(v_____x_1245_, 1);
lean_inc(v_snd_1247_);
lean_dec_ref(v_____x_1245_);
v___x_1248_ = lean_array_push(v_x_1237_, v_fst_1246_);
v___x_1249_ = l_Lasm_JS_Wire_readItems___redArg(v_inst_1238_, v_inst_1239_, v_err_1240_, v_ref_1241_, v_fuel_1242_, v_b_1243_, v_n_1244_, v_snd_1247_, v___x_1248_);
return v___x_1249_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readItems___redArg___boxed(lean_object* v_inst_1250_, lean_object* v_inst_1251_, lean_object* v_err_1252_, lean_object* v_ref_1253_, lean_object* v_fuel_1254_, lean_object* v_b_1255_, lean_object* v_x_1256_, lean_object* v_x_1257_, lean_object* v_x_1258_){
_start:
{
lean_object* v_res_1259_; 
v_res_1259_ = l_Lasm_JS_Wire_readItems___redArg(v_inst_1250_, v_inst_1251_, v_err_1252_, v_ref_1253_, v_fuel_1254_, v_b_1255_, v_x_1256_, v_x_1257_, v_x_1258_);
lean_dec(v_x_1256_);
return v_res_1259_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readFields___redArg___boxed(lean_object* v_inst_1260_, lean_object* v_inst_1261_, lean_object* v_err_1262_, lean_object* v_ref_1263_, lean_object* v_fuel_1264_, lean_object* v_b_1265_, lean_object* v_x_1266_, lean_object* v_x_1267_, lean_object* v_x_1268_){
_start:
{
lean_object* v_res_1269_; 
v_res_1269_ = l_Lasm_JS_Wire_readFields___redArg(v_inst_1260_, v_inst_1261_, v_err_1262_, v_ref_1263_, v_fuel_1264_, v_b_1265_, v_x_1266_, v_x_1267_, v_x_1268_);
lean_dec(v_x_1266_);
return v_res_1269_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readAt___redArg___boxed(lean_object* v_inst_1270_, lean_object* v_inst_1271_, lean_object* v_err_1272_, lean_object* v_ref_1273_, lean_object* v_x_1274_, lean_object* v_x_1275_, lean_object* v_x_1276_){
_start:
{
lean_object* v_res_1277_; 
v_res_1277_ = l_Lasm_JS_Wire_readAt___redArg(v_inst_1270_, v_inst_1271_, v_err_1272_, v_ref_1273_, v_x_1274_, v_x_1275_, v_x_1276_);
lean_dec(v_x_1276_);
lean_dec(v_x_1274_);
return v_res_1277_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readAt(lean_object* v_m_1278_, lean_object* v_inst_1279_, lean_object* v_00_u03b5_1280_, lean_object* v_inst_1281_, lean_object* v_err_1282_, lean_object* v_ref_1283_, lean_object* v_x_1284_, lean_object* v_x_1285_, lean_object* v_x_1286_){
_start:
{
lean_object* v___x_1287_; 
v___x_1287_ = l_Lasm_JS_Wire_readAt___redArg(v_inst_1279_, v_inst_1281_, v_err_1282_, v_ref_1283_, v_x_1284_, v_x_1285_, v_x_1286_);
return v___x_1287_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readAt___boxed(lean_object* v_m_1288_, lean_object* v_inst_1289_, lean_object* v_00_u03b5_1290_, lean_object* v_inst_1291_, lean_object* v_err_1292_, lean_object* v_ref_1293_, lean_object* v_x_1294_, lean_object* v_x_1295_, lean_object* v_x_1296_){
_start:
{
lean_object* v_res_1297_; 
v_res_1297_ = l_Lasm_JS_Wire_readAt(v_m_1288_, v_inst_1289_, v_00_u03b5_1290_, v_inst_1291_, v_err_1292_, v_ref_1293_, v_x_1294_, v_x_1295_, v_x_1296_);
lean_dec(v_x_1296_);
lean_dec(v_x_1294_);
return v_res_1297_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readFields(lean_object* v_m_1298_, lean_object* v_inst_1299_, lean_object* v_00_u03b5_1300_, lean_object* v_inst_1301_, lean_object* v_err_1302_, lean_object* v_ref_1303_, lean_object* v_fuel_1304_, lean_object* v_b_1305_, lean_object* v_x_1306_, lean_object* v_x_1307_, lean_object* v_x_1308_){
_start:
{
lean_object* v___x_1309_; 
v___x_1309_ = l_Lasm_JS_Wire_readFields___redArg(v_inst_1299_, v_inst_1301_, v_err_1302_, v_ref_1303_, v_fuel_1304_, v_b_1305_, v_x_1306_, v_x_1307_, v_x_1308_);
return v___x_1309_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readFields___boxed(lean_object* v_m_1310_, lean_object* v_inst_1311_, lean_object* v_00_u03b5_1312_, lean_object* v_inst_1313_, lean_object* v_err_1314_, lean_object* v_ref_1315_, lean_object* v_fuel_1316_, lean_object* v_b_1317_, lean_object* v_x_1318_, lean_object* v_x_1319_, lean_object* v_x_1320_){
_start:
{
lean_object* v_res_1321_; 
v_res_1321_ = l_Lasm_JS_Wire_readFields(v_m_1310_, v_inst_1311_, v_00_u03b5_1312_, v_inst_1313_, v_err_1314_, v_ref_1315_, v_fuel_1316_, v_b_1317_, v_x_1318_, v_x_1319_, v_x_1320_);
lean_dec(v_x_1318_);
return v_res_1321_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readItems(lean_object* v_m_1322_, lean_object* v_inst_1323_, lean_object* v_00_u03b5_1324_, lean_object* v_inst_1325_, lean_object* v_err_1326_, lean_object* v_ref_1327_, lean_object* v_fuel_1328_, lean_object* v_b_1329_, lean_object* v_x_1330_, lean_object* v_x_1331_, lean_object* v_x_1332_){
_start:
{
lean_object* v___x_1333_; 
v___x_1333_ = l_Lasm_JS_Wire_readItems___redArg(v_inst_1323_, v_inst_1325_, v_err_1326_, v_ref_1327_, v_fuel_1328_, v_b_1329_, v_x_1330_, v_x_1331_, v_x_1332_);
return v___x_1333_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readItems___boxed(lean_object* v_m_1334_, lean_object* v_inst_1335_, lean_object* v_00_u03b5_1336_, lean_object* v_inst_1337_, lean_object* v_err_1338_, lean_object* v_ref_1339_, lean_object* v_fuel_1340_, lean_object* v_b_1341_, lean_object* v_x_1342_, lean_object* v_x_1343_, lean_object* v_x_1344_){
_start:
{
lean_object* v_res_1345_; 
v_res_1345_ = l_Lasm_JS_Wire_readItems(v_m_1334_, v_inst_1335_, v_00_u03b5_1336_, v_inst_1337_, v_err_1338_, v_ref_1339_, v_fuel_1340_, v_b_1341_, v_x_1342_, v_x_1343_, v_x_1344_);
lean_dec(v_x_1342_);
return v_res_1345_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__13_splitter___redArg(lean_object* v_x_1346_, lean_object* v_x_1347_, lean_object* v_x_1348_, lean_object* v_h__1_1349_, lean_object* v_h__2_1350_){
_start:
{
lean_object* v_zero_1351_; uint8_t v_isZero_1352_; 
v_zero_1351_ = lean_unsigned_to_nat(0u);
v_isZero_1352_ = lean_nat_dec_eq(v_x_1346_, v_zero_1351_);
if (v_isZero_1352_ == 1)
{
lean_object* v___x_1353_; 
lean_dec(v_h__2_1350_);
v___x_1353_ = lean_apply_2(v_h__1_1349_, v_x_1347_, v_x_1348_);
return v___x_1353_;
}
else
{
lean_object* v_one_1354_; lean_object* v_n_1355_; lean_object* v___x_1356_; 
lean_dec(v_h__1_1349_);
v_one_1354_ = lean_unsigned_to_nat(1u);
v_n_1355_ = lean_nat_sub(v_x_1346_, v_one_1354_);
v___x_1356_ = lean_apply_3(v_h__2_1350_, v_n_1355_, v_x_1347_, v_x_1348_);
return v___x_1356_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__13_splitter___redArg___boxed(lean_object* v_x_1357_, lean_object* v_x_1358_, lean_object* v_x_1359_, lean_object* v_h__1_1360_, lean_object* v_h__2_1361_){
_start:
{
lean_object* v_res_1362_; 
v_res_1362_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__13_splitter___redArg(v_x_1357_, v_x_1358_, v_x_1359_, v_h__1_1360_, v_h__2_1361_);
lean_dec(v_x_1357_);
return v_res_1362_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__13_splitter(lean_object* v_motive_1363_, lean_object* v_x_1364_, lean_object* v_x_1365_, lean_object* v_x_1366_, lean_object* v_h__1_1367_, lean_object* v_h__2_1368_){
_start:
{
lean_object* v_zero_1369_; uint8_t v_isZero_1370_; 
v_zero_1369_ = lean_unsigned_to_nat(0u);
v_isZero_1370_ = lean_nat_dec_eq(v_x_1364_, v_zero_1369_);
if (v_isZero_1370_ == 1)
{
lean_object* v___x_1371_; 
lean_dec(v_h__2_1368_);
v___x_1371_ = lean_apply_2(v_h__1_1367_, v_x_1365_, v_x_1366_);
return v___x_1371_;
}
else
{
lean_object* v_one_1372_; lean_object* v_n_1373_; lean_object* v___x_1374_; 
lean_dec(v_h__1_1367_);
v_one_1372_ = lean_unsigned_to_nat(1u);
v_n_1373_ = lean_nat_sub(v_x_1364_, v_one_1372_);
v___x_1374_ = lean_apply_3(v_h__2_1368_, v_n_1373_, v_x_1365_, v_x_1366_);
return v___x_1374_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__13_splitter___boxed(lean_object* v_motive_1375_, lean_object* v_x_1376_, lean_object* v_x_1377_, lean_object* v_x_1378_, lean_object* v_h__1_1379_, lean_object* v_h__2_1380_){
_start:
{
lean_object* v_res_1381_; 
v_res_1381_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__13_splitter(v_motive_1375_, v_x_1376_, v_x_1377_, v_x_1378_, v_h__1_1379_, v_h__2_1380_);
lean_dec(v_x_1376_);
return v_res_1381_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__11_splitter___redArg(uint8_t v_x_1382_, lean_object* v_h__1_1383_, lean_object* v_h__2_1384_, lean_object* v_h__3_1385_, lean_object* v_h__4_1386_, lean_object* v_h__5_1387_, lean_object* v_h__6_1388_, lean_object* v_h__7_1389_, lean_object* v_h__8_1390_, lean_object* v_h__9_1391_, lean_object* v_h__10_1392_, lean_object* v_h__11_1393_, lean_object* v_h__12_1394_){
_start:
{
uint8_t v___x_1395_; uint8_t v___x_1396_; 
v___x_1395_ = 0;
v___x_1396_ = lean_uint8_dec_eq(v_x_1382_, v___x_1395_);
if (v___x_1396_ == 0)
{
uint8_t v___x_1397_; uint8_t v___x_1398_; 
lean_dec(v_h__1_1383_);
v___x_1397_ = 1;
v___x_1398_ = lean_uint8_dec_eq(v_x_1382_, v___x_1397_);
if (v___x_1398_ == 0)
{
uint8_t v___x_1399_; uint8_t v___x_1400_; 
lean_dec(v_h__2_1384_);
v___x_1399_ = 2;
v___x_1400_ = lean_uint8_dec_eq(v_x_1382_, v___x_1399_);
if (v___x_1400_ == 0)
{
uint8_t v___x_1401_; uint8_t v___x_1402_; 
lean_dec(v_h__3_1385_);
v___x_1401_ = 3;
v___x_1402_ = lean_uint8_dec_eq(v_x_1382_, v___x_1401_);
if (v___x_1402_ == 0)
{
uint8_t v___x_1403_; uint8_t v___x_1404_; 
lean_dec(v_h__4_1386_);
v___x_1403_ = 4;
v___x_1404_ = lean_uint8_dec_eq(v_x_1382_, v___x_1403_);
if (v___x_1404_ == 0)
{
uint8_t v___x_1405_; uint8_t v___x_1406_; 
lean_dec(v_h__5_1387_);
v___x_1405_ = 5;
v___x_1406_ = lean_uint8_dec_eq(v_x_1382_, v___x_1405_);
if (v___x_1406_ == 0)
{
uint8_t v___x_1407_; uint8_t v___x_1408_; 
lean_dec(v_h__6_1388_);
v___x_1407_ = 6;
v___x_1408_ = lean_uint8_dec_eq(v_x_1382_, v___x_1407_);
if (v___x_1408_ == 0)
{
uint8_t v___x_1409_; uint8_t v___x_1410_; 
lean_dec(v_h__7_1389_);
v___x_1409_ = 7;
v___x_1410_ = lean_uint8_dec_eq(v_x_1382_, v___x_1409_);
if (v___x_1410_ == 0)
{
uint8_t v___x_1411_; uint8_t v___x_1412_; 
lean_dec(v_h__8_1390_);
v___x_1411_ = 8;
v___x_1412_ = lean_uint8_dec_eq(v_x_1382_, v___x_1411_);
if (v___x_1412_ == 0)
{
uint8_t v___x_1413_; uint8_t v___x_1414_; 
lean_dec(v_h__9_1391_);
v___x_1413_ = 9;
v___x_1414_ = lean_uint8_dec_eq(v_x_1382_, v___x_1413_);
if (v___x_1414_ == 0)
{
uint8_t v___x_1415_; uint8_t v___x_1416_; 
lean_dec(v_h__10_1392_);
v___x_1415_ = 10;
v___x_1416_ = lean_uint8_dec_eq(v_x_1382_, v___x_1415_);
if (v___x_1416_ == 0)
{
lean_object* v___x_1417_; lean_object* v___x_1418_; 
lean_dec(v_h__11_1393_);
v___x_1417_ = lean_box(v_x_1382_);
v___x_1418_ = lean_apply_12(v_h__12_1394_, v___x_1417_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1418_;
}
else
{
lean_object* v___x_1419_; lean_object* v___x_1420_; 
lean_dec(v_h__12_1394_);
v___x_1419_ = lean_box(0);
v___x_1420_ = lean_apply_1(v_h__11_1393_, v___x_1419_);
return v___x_1420_;
}
}
else
{
lean_object* v___x_1421_; lean_object* v___x_1422_; 
lean_dec(v_h__12_1394_);
lean_dec(v_h__11_1393_);
v___x_1421_ = lean_box(0);
v___x_1422_ = lean_apply_1(v_h__10_1392_, v___x_1421_);
return v___x_1422_;
}
}
else
{
lean_object* v___x_1423_; lean_object* v___x_1424_; 
lean_dec(v_h__12_1394_);
lean_dec(v_h__11_1393_);
lean_dec(v_h__10_1392_);
v___x_1423_ = lean_box(0);
v___x_1424_ = lean_apply_1(v_h__9_1391_, v___x_1423_);
return v___x_1424_;
}
}
else
{
lean_object* v___x_1425_; lean_object* v___x_1426_; 
lean_dec(v_h__12_1394_);
lean_dec(v_h__11_1393_);
lean_dec(v_h__10_1392_);
lean_dec(v_h__9_1391_);
v___x_1425_ = lean_box(0);
v___x_1426_ = lean_apply_1(v_h__8_1390_, v___x_1425_);
return v___x_1426_;
}
}
else
{
lean_object* v___x_1427_; lean_object* v___x_1428_; 
lean_dec(v_h__12_1394_);
lean_dec(v_h__11_1393_);
lean_dec(v_h__10_1392_);
lean_dec(v_h__9_1391_);
lean_dec(v_h__8_1390_);
v___x_1427_ = lean_box(0);
v___x_1428_ = lean_apply_1(v_h__7_1389_, v___x_1427_);
return v___x_1428_;
}
}
else
{
lean_object* v___x_1429_; lean_object* v___x_1430_; 
lean_dec(v_h__12_1394_);
lean_dec(v_h__11_1393_);
lean_dec(v_h__10_1392_);
lean_dec(v_h__9_1391_);
lean_dec(v_h__8_1390_);
lean_dec(v_h__7_1389_);
v___x_1429_ = lean_box(0);
v___x_1430_ = lean_apply_1(v_h__6_1388_, v___x_1429_);
return v___x_1430_;
}
}
else
{
lean_object* v___x_1431_; lean_object* v___x_1432_; 
lean_dec(v_h__12_1394_);
lean_dec(v_h__11_1393_);
lean_dec(v_h__10_1392_);
lean_dec(v_h__9_1391_);
lean_dec(v_h__8_1390_);
lean_dec(v_h__7_1389_);
lean_dec(v_h__6_1388_);
v___x_1431_ = lean_box(0);
v___x_1432_ = lean_apply_1(v_h__5_1387_, v___x_1431_);
return v___x_1432_;
}
}
else
{
lean_object* v___x_1433_; lean_object* v___x_1434_; 
lean_dec(v_h__12_1394_);
lean_dec(v_h__11_1393_);
lean_dec(v_h__10_1392_);
lean_dec(v_h__9_1391_);
lean_dec(v_h__8_1390_);
lean_dec(v_h__7_1389_);
lean_dec(v_h__6_1388_);
lean_dec(v_h__5_1387_);
v___x_1433_ = lean_box(0);
v___x_1434_ = lean_apply_1(v_h__4_1386_, v___x_1433_);
return v___x_1434_;
}
}
else
{
lean_object* v___x_1435_; lean_object* v___x_1436_; 
lean_dec(v_h__12_1394_);
lean_dec(v_h__11_1393_);
lean_dec(v_h__10_1392_);
lean_dec(v_h__9_1391_);
lean_dec(v_h__8_1390_);
lean_dec(v_h__7_1389_);
lean_dec(v_h__6_1388_);
lean_dec(v_h__5_1387_);
lean_dec(v_h__4_1386_);
v___x_1435_ = lean_box(0);
v___x_1436_ = lean_apply_1(v_h__3_1385_, v___x_1435_);
return v___x_1436_;
}
}
else
{
lean_object* v___x_1437_; lean_object* v___x_1438_; 
lean_dec(v_h__12_1394_);
lean_dec(v_h__11_1393_);
lean_dec(v_h__10_1392_);
lean_dec(v_h__9_1391_);
lean_dec(v_h__8_1390_);
lean_dec(v_h__7_1389_);
lean_dec(v_h__6_1388_);
lean_dec(v_h__5_1387_);
lean_dec(v_h__4_1386_);
lean_dec(v_h__3_1385_);
v___x_1437_ = lean_box(0);
v___x_1438_ = lean_apply_1(v_h__2_1384_, v___x_1437_);
return v___x_1438_;
}
}
else
{
lean_object* v___x_1439_; lean_object* v___x_1440_; 
lean_dec(v_h__12_1394_);
lean_dec(v_h__11_1393_);
lean_dec(v_h__10_1392_);
lean_dec(v_h__9_1391_);
lean_dec(v_h__8_1390_);
lean_dec(v_h__7_1389_);
lean_dec(v_h__6_1388_);
lean_dec(v_h__5_1387_);
lean_dec(v_h__4_1386_);
lean_dec(v_h__3_1385_);
lean_dec(v_h__2_1384_);
v___x_1439_ = lean_box(0);
v___x_1440_ = lean_apply_1(v_h__1_1383_, v___x_1439_);
return v___x_1440_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__11_splitter___redArg___boxed(lean_object* v_x_1441_, lean_object* v_h__1_1442_, lean_object* v_h__2_1443_, lean_object* v_h__3_1444_, lean_object* v_h__4_1445_, lean_object* v_h__5_1446_, lean_object* v_h__6_1447_, lean_object* v_h__7_1448_, lean_object* v_h__8_1449_, lean_object* v_h__9_1450_, lean_object* v_h__10_1451_, lean_object* v_h__11_1452_, lean_object* v_h__12_1453_){
_start:
{
uint8_t v_x_249__boxed_1454_; lean_object* v_res_1455_; 
v_x_249__boxed_1454_ = lean_unbox(v_x_1441_);
v_res_1455_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__11_splitter___redArg(v_x_249__boxed_1454_, v_h__1_1442_, v_h__2_1443_, v_h__3_1444_, v_h__4_1445_, v_h__5_1446_, v_h__6_1447_, v_h__7_1448_, v_h__8_1449_, v_h__9_1450_, v_h__10_1451_, v_h__11_1452_, v_h__12_1453_);
return v_res_1455_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__11_splitter(lean_object* v_motive_1456_, uint8_t v_x_1457_, lean_object* v_h__1_1458_, lean_object* v_h__2_1459_, lean_object* v_h__3_1460_, lean_object* v_h__4_1461_, lean_object* v_h__5_1462_, lean_object* v_h__6_1463_, lean_object* v_h__7_1464_, lean_object* v_h__8_1465_, lean_object* v_h__9_1466_, lean_object* v_h__10_1467_, lean_object* v_h__11_1468_, lean_object* v_h__12_1469_){
_start:
{
uint8_t v___x_1470_; uint8_t v___x_1471_; 
v___x_1470_ = 0;
v___x_1471_ = lean_uint8_dec_eq(v_x_1457_, v___x_1470_);
if (v___x_1471_ == 0)
{
uint8_t v___x_1472_; uint8_t v___x_1473_; 
lean_dec(v_h__1_1458_);
v___x_1472_ = 1;
v___x_1473_ = lean_uint8_dec_eq(v_x_1457_, v___x_1472_);
if (v___x_1473_ == 0)
{
uint8_t v___x_1474_; uint8_t v___x_1475_; 
lean_dec(v_h__2_1459_);
v___x_1474_ = 2;
v___x_1475_ = lean_uint8_dec_eq(v_x_1457_, v___x_1474_);
if (v___x_1475_ == 0)
{
uint8_t v___x_1476_; uint8_t v___x_1477_; 
lean_dec(v_h__3_1460_);
v___x_1476_ = 3;
v___x_1477_ = lean_uint8_dec_eq(v_x_1457_, v___x_1476_);
if (v___x_1477_ == 0)
{
uint8_t v___x_1478_; uint8_t v___x_1479_; 
lean_dec(v_h__4_1461_);
v___x_1478_ = 4;
v___x_1479_ = lean_uint8_dec_eq(v_x_1457_, v___x_1478_);
if (v___x_1479_ == 0)
{
uint8_t v___x_1480_; uint8_t v___x_1481_; 
lean_dec(v_h__5_1462_);
v___x_1480_ = 5;
v___x_1481_ = lean_uint8_dec_eq(v_x_1457_, v___x_1480_);
if (v___x_1481_ == 0)
{
uint8_t v___x_1482_; uint8_t v___x_1483_; 
lean_dec(v_h__6_1463_);
v___x_1482_ = 6;
v___x_1483_ = lean_uint8_dec_eq(v_x_1457_, v___x_1482_);
if (v___x_1483_ == 0)
{
uint8_t v___x_1484_; uint8_t v___x_1485_; 
lean_dec(v_h__7_1464_);
v___x_1484_ = 7;
v___x_1485_ = lean_uint8_dec_eq(v_x_1457_, v___x_1484_);
if (v___x_1485_ == 0)
{
uint8_t v___x_1486_; uint8_t v___x_1487_; 
lean_dec(v_h__8_1465_);
v___x_1486_ = 8;
v___x_1487_ = lean_uint8_dec_eq(v_x_1457_, v___x_1486_);
if (v___x_1487_ == 0)
{
uint8_t v___x_1488_; uint8_t v___x_1489_; 
lean_dec(v_h__9_1466_);
v___x_1488_ = 9;
v___x_1489_ = lean_uint8_dec_eq(v_x_1457_, v___x_1488_);
if (v___x_1489_ == 0)
{
uint8_t v___x_1490_; uint8_t v___x_1491_; 
lean_dec(v_h__10_1467_);
v___x_1490_ = 10;
v___x_1491_ = lean_uint8_dec_eq(v_x_1457_, v___x_1490_);
if (v___x_1491_ == 0)
{
lean_object* v___x_1492_; lean_object* v___x_1493_; 
lean_dec(v_h__11_1468_);
v___x_1492_ = lean_box(v_x_1457_);
v___x_1493_ = lean_apply_12(v_h__12_1469_, v___x_1492_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1493_;
}
else
{
lean_object* v___x_1494_; lean_object* v___x_1495_; 
lean_dec(v_h__12_1469_);
v___x_1494_ = lean_box(0);
v___x_1495_ = lean_apply_1(v_h__11_1468_, v___x_1494_);
return v___x_1495_;
}
}
else
{
lean_object* v___x_1496_; lean_object* v___x_1497_; 
lean_dec(v_h__12_1469_);
lean_dec(v_h__11_1468_);
v___x_1496_ = lean_box(0);
v___x_1497_ = lean_apply_1(v_h__10_1467_, v___x_1496_);
return v___x_1497_;
}
}
else
{
lean_object* v___x_1498_; lean_object* v___x_1499_; 
lean_dec(v_h__12_1469_);
lean_dec(v_h__11_1468_);
lean_dec(v_h__10_1467_);
v___x_1498_ = lean_box(0);
v___x_1499_ = lean_apply_1(v_h__9_1466_, v___x_1498_);
return v___x_1499_;
}
}
else
{
lean_object* v___x_1500_; lean_object* v___x_1501_; 
lean_dec(v_h__12_1469_);
lean_dec(v_h__11_1468_);
lean_dec(v_h__10_1467_);
lean_dec(v_h__9_1466_);
v___x_1500_ = lean_box(0);
v___x_1501_ = lean_apply_1(v_h__8_1465_, v___x_1500_);
return v___x_1501_;
}
}
else
{
lean_object* v___x_1502_; lean_object* v___x_1503_; 
lean_dec(v_h__12_1469_);
lean_dec(v_h__11_1468_);
lean_dec(v_h__10_1467_);
lean_dec(v_h__9_1466_);
lean_dec(v_h__8_1465_);
v___x_1502_ = lean_box(0);
v___x_1503_ = lean_apply_1(v_h__7_1464_, v___x_1502_);
return v___x_1503_;
}
}
else
{
lean_object* v___x_1504_; lean_object* v___x_1505_; 
lean_dec(v_h__12_1469_);
lean_dec(v_h__11_1468_);
lean_dec(v_h__10_1467_);
lean_dec(v_h__9_1466_);
lean_dec(v_h__8_1465_);
lean_dec(v_h__7_1464_);
v___x_1504_ = lean_box(0);
v___x_1505_ = lean_apply_1(v_h__6_1463_, v___x_1504_);
return v___x_1505_;
}
}
else
{
lean_object* v___x_1506_; lean_object* v___x_1507_; 
lean_dec(v_h__12_1469_);
lean_dec(v_h__11_1468_);
lean_dec(v_h__10_1467_);
lean_dec(v_h__9_1466_);
lean_dec(v_h__8_1465_);
lean_dec(v_h__7_1464_);
lean_dec(v_h__6_1463_);
v___x_1506_ = lean_box(0);
v___x_1507_ = lean_apply_1(v_h__5_1462_, v___x_1506_);
return v___x_1507_;
}
}
else
{
lean_object* v___x_1508_; lean_object* v___x_1509_; 
lean_dec(v_h__12_1469_);
lean_dec(v_h__11_1468_);
lean_dec(v_h__10_1467_);
lean_dec(v_h__9_1466_);
lean_dec(v_h__8_1465_);
lean_dec(v_h__7_1464_);
lean_dec(v_h__6_1463_);
lean_dec(v_h__5_1462_);
v___x_1508_ = lean_box(0);
v___x_1509_ = lean_apply_1(v_h__4_1461_, v___x_1508_);
return v___x_1509_;
}
}
else
{
lean_object* v___x_1510_; lean_object* v___x_1511_; 
lean_dec(v_h__12_1469_);
lean_dec(v_h__11_1468_);
lean_dec(v_h__10_1467_);
lean_dec(v_h__9_1466_);
lean_dec(v_h__8_1465_);
lean_dec(v_h__7_1464_);
lean_dec(v_h__6_1463_);
lean_dec(v_h__5_1462_);
lean_dec(v_h__4_1461_);
v___x_1510_ = lean_box(0);
v___x_1511_ = lean_apply_1(v_h__3_1460_, v___x_1510_);
return v___x_1511_;
}
}
else
{
lean_object* v___x_1512_; lean_object* v___x_1513_; 
lean_dec(v_h__12_1469_);
lean_dec(v_h__11_1468_);
lean_dec(v_h__10_1467_);
lean_dec(v_h__9_1466_);
lean_dec(v_h__8_1465_);
lean_dec(v_h__7_1464_);
lean_dec(v_h__6_1463_);
lean_dec(v_h__5_1462_);
lean_dec(v_h__4_1461_);
lean_dec(v_h__3_1460_);
v___x_1512_ = lean_box(0);
v___x_1513_ = lean_apply_1(v_h__2_1459_, v___x_1512_);
return v___x_1513_;
}
}
else
{
lean_object* v___x_1514_; lean_object* v___x_1515_; 
lean_dec(v_h__12_1469_);
lean_dec(v_h__11_1468_);
lean_dec(v_h__10_1467_);
lean_dec(v_h__9_1466_);
lean_dec(v_h__8_1465_);
lean_dec(v_h__7_1464_);
lean_dec(v_h__6_1463_);
lean_dec(v_h__5_1462_);
lean_dec(v_h__4_1461_);
lean_dec(v_h__3_1460_);
lean_dec(v_h__2_1459_);
v___x_1514_ = lean_box(0);
v___x_1515_ = lean_apply_1(v_h__1_1458_, v___x_1514_);
return v___x_1515_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__11_splitter___boxed(lean_object* v_motive_1516_, lean_object* v_x_1517_, lean_object* v_h__1_1518_, lean_object* v_h__2_1519_, lean_object* v_h__3_1520_, lean_object* v_h__4_1521_, lean_object* v_h__5_1522_, lean_object* v_h__6_1523_, lean_object* v_h__7_1524_, lean_object* v_h__8_1525_, lean_object* v_h__9_1526_, lean_object* v_h__10_1527_, lean_object* v_h__11_1528_, lean_object* v_h__12_1529_){
_start:
{
uint8_t v_x_344__boxed_1530_; lean_object* v_res_1531_; 
v_x_344__boxed_1530_ = lean_unbox(v_x_1517_);
v_res_1531_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__11_splitter(v_motive_1516_, v_x_344__boxed_1530_, v_h__1_1518_, v_h__2_1519_, v_h__3_1520_, v_h__4_1521_, v_h__5_1522_, v_h__6_1523_, v_h__7_1524_, v_h__8_1525_, v_h__9_1526_, v_h__10_1527_, v_h__11_1528_, v_h__12_1529_);
return v_res_1531_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__1_splitter___redArg(lean_object* v_x_1532_, lean_object* v_h__1_1533_, lean_object* v_h__2_1534_){
_start:
{
if (lean_obj_tag(v_x_1532_) == 0)
{
lean_object* v___x_1535_; lean_object* v___x_1536_; 
lean_dec(v_h__1_1533_);
v___x_1535_ = lean_box(0);
v___x_1536_ = lean_apply_1(v_h__2_1534_, v___x_1535_);
return v___x_1536_;
}
else
{
lean_object* v_val_1537_; lean_object* v___x_1538_; 
lean_dec(v_h__2_1534_);
v_val_1537_ = lean_ctor_get(v_x_1532_, 0);
lean_inc(v_val_1537_);
lean_dec_ref_known(v_x_1532_, 1);
v___x_1538_ = lean_apply_1(v_h__1_1533_, v_val_1537_);
return v___x_1538_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__1_splitter(lean_object* v_motive_1539_, lean_object* v_x_1540_, lean_object* v_h__1_1541_, lean_object* v_h__2_1542_){
_start:
{
if (lean_obj_tag(v_x_1540_) == 0)
{
lean_object* v___x_1543_; lean_object* v___x_1544_; 
lean_dec(v_h__1_1541_);
v___x_1543_ = lean_box(0);
v___x_1544_ = lean_apply_1(v_h__2_1542_, v___x_1543_);
return v___x_1544_;
}
else
{
lean_object* v_val_1545_; lean_object* v___x_1546_; 
lean_dec(v_h__2_1542_);
v_val_1545_ = lean_ctor_get(v_x_1540_, 0);
lean_inc(v_val_1545_);
lean_dec_ref_known(v_x_1540_, 1);
v___x_1546_ = lean_apply_1(v_h__1_1541_, v_val_1545_);
return v___x_1546_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__3_splitter___redArg(lean_object* v_x_1547_, lean_object* v_h__1_1548_, lean_object* v_h__2_1549_){
_start:
{
if (lean_obj_tag(v_x_1547_) == 0)
{
lean_object* v_a_1550_; lean_object* v___x_1551_; 
lean_dec(v_h__1_1548_);
v_a_1550_ = lean_ctor_get(v_x_1547_, 0);
lean_inc(v_a_1550_);
lean_dec_ref_known(v_x_1547_, 1);
v___x_1551_ = lean_apply_1(v_h__2_1549_, v_a_1550_);
return v___x_1551_;
}
else
{
lean_object* v_a_1552_; lean_object* v_fst_1553_; lean_object* v_snd_1554_; lean_object* v___x_1555_; 
lean_dec(v_h__2_1549_);
v_a_1552_ = lean_ctor_get(v_x_1547_, 0);
lean_inc(v_a_1552_);
lean_dec_ref_known(v_x_1547_, 1);
v_fst_1553_ = lean_ctor_get(v_a_1552_, 0);
lean_inc(v_fst_1553_);
v_snd_1554_ = lean_ctor_get(v_a_1552_, 1);
lean_inc(v_snd_1554_);
lean_dec(v_a_1552_);
v___x_1555_ = lean_apply_2(v_h__1_1548_, v_fst_1553_, v_snd_1554_);
return v___x_1555_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__3_splitter(lean_object* v_motive_1556_, lean_object* v_x_1557_, lean_object* v_h__1_1558_, lean_object* v_h__2_1559_){
_start:
{
if (lean_obj_tag(v_x_1557_) == 0)
{
lean_object* v_a_1560_; lean_object* v___x_1561_; 
lean_dec(v_h__1_1558_);
v_a_1560_ = lean_ctor_get(v_x_1557_, 0);
lean_inc(v_a_1560_);
lean_dec_ref_known(v_x_1557_, 1);
v___x_1561_ = lean_apply_1(v_h__2_1559_, v_a_1560_);
return v___x_1561_;
}
else
{
lean_object* v_a_1562_; lean_object* v_fst_1563_; lean_object* v_snd_1564_; lean_object* v___x_1565_; 
lean_dec(v_h__2_1559_);
v_a_1562_ = lean_ctor_get(v_x_1557_, 0);
lean_inc(v_a_1562_);
lean_dec_ref_known(v_x_1557_, 1);
v_fst_1563_ = lean_ctor_get(v_a_1562_, 0);
lean_inc(v_fst_1563_);
v_snd_1564_ = lean_ctor_get(v_a_1562_, 1);
lean_inc(v_snd_1564_);
lean_dec(v_a_1562_);
v___x_1565_ = lean_apply_2(v_h__1_1558_, v_fst_1563_, v_snd_1564_);
return v___x_1565_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__5_splitter___redArg(lean_object* v_x_1566_, lean_object* v_h__1_1567_, lean_object* v_h__2_1568_){
_start:
{
if (lean_obj_tag(v_x_1566_) == 0)
{
lean_object* v___x_1569_; lean_object* v___x_1570_; 
lean_dec(v_h__1_1567_);
v___x_1569_ = lean_box(0);
v___x_1570_ = lean_apply_1(v_h__2_1568_, v___x_1569_);
return v___x_1570_;
}
else
{
lean_object* v_val_1571_; lean_object* v___x_1572_; 
lean_dec(v_h__2_1568_);
v_val_1571_ = lean_ctor_get(v_x_1566_, 0);
lean_inc(v_val_1571_);
lean_dec_ref_known(v_x_1566_, 1);
v___x_1572_ = lean_apply_1(v_h__1_1567_, v_val_1571_);
return v___x_1572_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__5_splitter(lean_object* v_motive_1573_, lean_object* v_x_1574_, lean_object* v_h__1_1575_, lean_object* v_h__2_1576_){
_start:
{
if (lean_obj_tag(v_x_1574_) == 0)
{
lean_object* v___x_1577_; lean_object* v___x_1578_; 
lean_dec(v_h__1_1575_);
v___x_1577_ = lean_box(0);
v___x_1578_ = lean_apply_1(v_h__2_1576_, v___x_1577_);
return v___x_1578_;
}
else
{
lean_object* v_val_1579_; lean_object* v___x_1580_; 
lean_dec(v_h__2_1576_);
v_val_1579_ = lean_ctor_get(v_x_1574_, 0);
lean_inc(v_val_1579_);
lean_dec_ref_known(v_x_1574_, 1);
v___x_1580_ = lean_apply_1(v_h__1_1575_, v_val_1579_);
return v___x_1580_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readString_match__3_splitter___redArg(lean_object* v_x_1581_, lean_object* v_h__1_1582_, lean_object* v_h__2_1583_){
_start:
{
if (lean_obj_tag(v_x_1581_) == 0)
{
lean_object* v___x_1584_; lean_object* v___x_1585_; 
lean_dec(v_h__1_1582_);
v___x_1584_ = lean_box(0);
v___x_1585_ = lean_apply_1(v_h__2_1583_, v___x_1584_);
return v___x_1585_;
}
else
{
lean_object* v_val_1586_; lean_object* v_fst_1587_; lean_object* v_snd_1588_; lean_object* v___x_1589_; 
lean_dec(v_h__2_1583_);
v_val_1586_ = lean_ctor_get(v_x_1581_, 0);
lean_inc(v_val_1586_);
lean_dec_ref_known(v_x_1581_, 1);
v_fst_1587_ = lean_ctor_get(v_val_1586_, 0);
lean_inc(v_fst_1587_);
v_snd_1588_ = lean_ctor_get(v_val_1586_, 1);
lean_inc(v_snd_1588_);
lean_dec(v_val_1586_);
v___x_1589_ = lean_apply_2(v_h__1_1582_, v_fst_1587_, v_snd_1588_);
return v___x_1589_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readString_match__3_splitter(lean_object* v_motive_1590_, lean_object* v_x_1591_, lean_object* v_h__1_1592_, lean_object* v_h__2_1593_){
_start:
{
if (lean_obj_tag(v_x_1591_) == 0)
{
lean_object* v___x_1594_; lean_object* v___x_1595_; 
lean_dec(v_h__1_1592_);
v___x_1594_ = lean_box(0);
v___x_1595_ = lean_apply_1(v_h__2_1593_, v___x_1594_);
return v___x_1595_;
}
else
{
lean_object* v_val_1596_; lean_object* v_fst_1597_; lean_object* v_snd_1598_; lean_object* v___x_1599_; 
lean_dec(v_h__2_1593_);
v_val_1596_ = lean_ctor_get(v_x_1591_, 0);
lean_inc(v_val_1596_);
lean_dec_ref_known(v_x_1591_, 1);
v_fst_1597_ = lean_ctor_get(v_val_1596_, 0);
lean_inc(v_fst_1597_);
v_snd_1598_ = lean_ctor_get(v_val_1596_, 1);
lean_inc(v_snd_1598_);
lean_dec(v_val_1596_);
v___x_1599_ = lean_apply_2(v_h__1_1592_, v_fst_1597_, v_snd_1598_);
return v___x_1599_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readRaw_match__1_splitter___redArg(lean_object* v_x_1600_, lean_object* v_h__1_1601_, lean_object* v_h__2_1602_){
_start:
{
if (lean_obj_tag(v_x_1600_) == 0)
{
lean_object* v___x_1603_; lean_object* v___x_1604_; 
lean_dec(v_h__1_1601_);
v___x_1603_ = lean_box(0);
v___x_1604_ = lean_apply_1(v_h__2_1602_, v___x_1603_);
return v___x_1604_;
}
else
{
lean_object* v_val_1605_; lean_object* v___x_1606_; 
lean_dec(v_h__2_1602_);
v_val_1605_ = lean_ctor_get(v_x_1600_, 0);
lean_inc(v_val_1605_);
lean_dec_ref_known(v_x_1600_, 1);
v___x_1606_ = lean_apply_1(v_h__1_1601_, v_val_1605_);
return v___x_1606_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readRaw_match__1_splitter(lean_object* v_motive_1607_, lean_object* v_x_1608_, lean_object* v_h__1_1609_, lean_object* v_h__2_1610_){
_start:
{
if (lean_obj_tag(v_x_1608_) == 0)
{
lean_object* v___x_1611_; lean_object* v___x_1612_; 
lean_dec(v_h__1_1609_);
v___x_1611_ = lean_box(0);
v___x_1612_ = lean_apply_1(v_h__2_1610_, v___x_1611_);
return v___x_1612_;
}
else
{
lean_object* v_val_1613_; lean_object* v___x_1614_; 
lean_dec(v_h__2_1610_);
v_val_1613_ = lean_ctor_get(v_x_1608_, 0);
lean_inc(v_val_1613_);
lean_dec_ref_known(v_x_1608_, 1);
v___x_1614_ = lean_apply_1(v_h__1_1609_, v_val_1613_);
return v___x_1614_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__7_splitter___redArg(lean_object* v_x_1615_, lean_object* v_h__1_1616_){
_start:
{
lean_object* v_fst_1617_; lean_object* v_snd_1618_; lean_object* v___x_1619_; 
v_fst_1617_ = lean_ctor_get(v_x_1615_, 0);
lean_inc(v_fst_1617_);
v_snd_1618_ = lean_ctor_get(v_x_1615_, 1);
lean_inc(v_snd_1618_);
lean_dec_ref(v_x_1615_);
v___x_1619_ = lean_apply_2(v_h__1_1616_, v_fst_1617_, v_snd_1618_);
return v___x_1619_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__7_splitter(lean_object* v_motive_1620_, lean_object* v_x_1621_, lean_object* v_h__1_1622_){
_start:
{
lean_object* v_fst_1623_; lean_object* v_snd_1624_; lean_object* v___x_1625_; 
v_fst_1623_ = lean_ctor_get(v_x_1621_, 0);
lean_inc(v_fst_1623_);
v_snd_1624_ = lean_ctor_get(v_x_1621_, 1);
lean_inc(v_snd_1624_);
lean_dec_ref(v_x_1621_);
v___x_1625_ = lean_apply_2(v_h__1_1622_, v_fst_1623_, v_snd_1624_);
return v___x_1625_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__9_splitter___redArg(lean_object* v_x_1626_, lean_object* v_h__1_1627_){
_start:
{
lean_object* v_fst_1628_; lean_object* v_snd_1629_; lean_object* v___x_1630_; 
v_fst_1628_ = lean_ctor_get(v_x_1626_, 0);
lean_inc(v_fst_1628_);
v_snd_1629_ = lean_ctor_get(v_x_1626_, 1);
lean_inc(v_snd_1629_);
lean_dec_ref(v_x_1626_);
v___x_1630_ = lean_apply_2(v_h__1_1627_, v_fst_1628_, v_snd_1629_);
return v___x_1630_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__9_splitter(lean_object* v_motive_1631_, lean_object* v_x_1632_, lean_object* v_h__1_1633_){
_start:
{
lean_object* v_fst_1634_; lean_object* v_snd_1635_; lean_object* v___x_1636_; 
v_fst_1634_ = lean_ctor_get(v_x_1632_, 0);
lean_inc(v_fst_1634_);
v_snd_1635_ = lean_ctor_get(v_x_1632_, 1);
lean_inc(v_snd_1635_);
lean_dec_ref(v_x_1632_);
v___x_1636_ = lean_apply_2(v_h__1_1633_, v_fst_1634_, v_snd_1635_);
return v___x_1636_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readFields_match__1_splitter___redArg(lean_object* v_x_1637_, lean_object* v_x_1638_, lean_object* v_x_1639_, lean_object* v_h__1_1640_, lean_object* v_h__2_1641_){
_start:
{
lean_object* v_zero_1642_; uint8_t v_isZero_1643_; 
v_zero_1642_ = lean_unsigned_to_nat(0u);
v_isZero_1643_ = lean_nat_dec_eq(v_x_1637_, v_zero_1642_);
if (v_isZero_1643_ == 1)
{
lean_object* v___x_1644_; 
lean_dec(v_h__2_1641_);
v___x_1644_ = lean_apply_2(v_h__1_1640_, v_x_1638_, v_x_1639_);
return v___x_1644_;
}
else
{
lean_object* v_one_1645_; lean_object* v_n_1646_; lean_object* v___x_1647_; 
lean_dec(v_h__1_1640_);
v_one_1645_ = lean_unsigned_to_nat(1u);
v_n_1646_ = lean_nat_sub(v_x_1637_, v_one_1645_);
v___x_1647_ = lean_apply_3(v_h__2_1641_, v_n_1646_, v_x_1638_, v_x_1639_);
return v___x_1647_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readFields_match__1_splitter___redArg___boxed(lean_object* v_x_1648_, lean_object* v_x_1649_, lean_object* v_x_1650_, lean_object* v_h__1_1651_, lean_object* v_h__2_1652_){
_start:
{
lean_object* v_res_1653_; 
v_res_1653_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readFields_match__1_splitter___redArg(v_x_1648_, v_x_1649_, v_x_1650_, v_h__1_1651_, v_h__2_1652_);
lean_dec(v_x_1648_);
return v_res_1653_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readFields_match__1_splitter(lean_object* v_motive_1654_, lean_object* v_x_1655_, lean_object* v_x_1656_, lean_object* v_x_1657_, lean_object* v_h__1_1658_, lean_object* v_h__2_1659_){
_start:
{
lean_object* v_zero_1660_; uint8_t v_isZero_1661_; 
v_zero_1660_ = lean_unsigned_to_nat(0u);
v_isZero_1661_ = lean_nat_dec_eq(v_x_1655_, v_zero_1660_);
if (v_isZero_1661_ == 1)
{
lean_object* v___x_1662_; 
lean_dec(v_h__2_1659_);
v___x_1662_ = lean_apply_2(v_h__1_1658_, v_x_1656_, v_x_1657_);
return v___x_1662_;
}
else
{
lean_object* v_one_1663_; lean_object* v_n_1664_; lean_object* v___x_1665_; 
lean_dec(v_h__1_1658_);
v_one_1663_ = lean_unsigned_to_nat(1u);
v_n_1664_ = lean_nat_sub(v_x_1655_, v_one_1663_);
v___x_1665_ = lean_apply_3(v_h__2_1659_, v_n_1664_, v_x_1656_, v_x_1657_);
return v___x_1665_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readFields_match__1_splitter___boxed(lean_object* v_motive_1666_, lean_object* v_x_1667_, lean_object* v_x_1668_, lean_object* v_x_1669_, lean_object* v_h__1_1670_, lean_object* v_h__2_1671_){
_start:
{
lean_object* v_res_1672_; 
v_res_1672_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readFields_match__1_splitter(v_motive_1666_, v_x_1667_, v_x_1668_, v_x_1669_, v_h__1_1670_, v_h__2_1671_);
lean_dec(v_x_1667_);
return v_res_1672_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readItems_match__1_splitter___redArg(lean_object* v_x_1673_, lean_object* v_h__1_1674_){
_start:
{
lean_object* v_fst_1675_; lean_object* v_snd_1676_; lean_object* v___x_1677_; 
v_fst_1675_ = lean_ctor_get(v_x_1673_, 0);
lean_inc(v_fst_1675_);
v_snd_1676_ = lean_ctor_get(v_x_1673_, 1);
lean_inc(v_snd_1676_);
lean_dec_ref(v_x_1673_);
v___x_1677_ = lean_apply_2(v_h__1_1674_, v_fst_1675_, v_snd_1676_);
return v___x_1677_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readItems_match__1_splitter(lean_object* v_motive_1678_, lean_object* v_x_1679_, lean_object* v_h__1_1680_){
_start:
{
lean_object* v_fst_1681_; lean_object* v_snd_1682_; lean_object* v___x_1683_; 
v_fst_1681_ = lean_ctor_get(v_x_1679_, 0);
lean_inc(v_fst_1681_);
v_snd_1682_ = lean_ctor_get(v_x_1679_, 1);
lean_inc(v_snd_1682_);
lean_dec_ref(v_x_1679_);
v___x_1683_ = lean_apply_2(v_h__1_1680_, v_fst_1681_, v_snd_1682_);
return v___x_1683_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readItems_match__3_splitter___redArg(lean_object* v_x_1684_, lean_object* v_x_1685_, lean_object* v_x_1686_, lean_object* v_h__1_1687_, lean_object* v_h__2_1688_){
_start:
{
lean_object* v_zero_1689_; uint8_t v_isZero_1690_; 
v_zero_1689_ = lean_unsigned_to_nat(0u);
v_isZero_1690_ = lean_nat_dec_eq(v_x_1684_, v_zero_1689_);
if (v_isZero_1690_ == 1)
{
lean_object* v___x_1691_; 
lean_dec(v_h__2_1688_);
v___x_1691_ = lean_apply_2(v_h__1_1687_, v_x_1685_, v_x_1686_);
return v___x_1691_;
}
else
{
lean_object* v_one_1692_; lean_object* v_n_1693_; lean_object* v___x_1694_; 
lean_dec(v_h__1_1687_);
v_one_1692_ = lean_unsigned_to_nat(1u);
v_n_1693_ = lean_nat_sub(v_x_1684_, v_one_1692_);
v___x_1694_ = lean_apply_3(v_h__2_1688_, v_n_1693_, v_x_1685_, v_x_1686_);
return v___x_1694_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readItems_match__3_splitter___redArg___boxed(lean_object* v_x_1695_, lean_object* v_x_1696_, lean_object* v_x_1697_, lean_object* v_h__1_1698_, lean_object* v_h__2_1699_){
_start:
{
lean_object* v_res_1700_; 
v_res_1700_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readItems_match__3_splitter___redArg(v_x_1695_, v_x_1696_, v_x_1697_, v_h__1_1698_, v_h__2_1699_);
lean_dec(v_x_1695_);
return v_res_1700_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readItems_match__3_splitter(lean_object* v_motive_1701_, lean_object* v_x_1702_, lean_object* v_x_1703_, lean_object* v_x_1704_, lean_object* v_h__1_1705_, lean_object* v_h__2_1706_){
_start:
{
lean_object* v_zero_1707_; uint8_t v_isZero_1708_; 
v_zero_1707_ = lean_unsigned_to_nat(0u);
v_isZero_1708_ = lean_nat_dec_eq(v_x_1702_, v_zero_1707_);
if (v_isZero_1708_ == 1)
{
lean_object* v___x_1709_; 
lean_dec(v_h__2_1706_);
v___x_1709_ = lean_apply_2(v_h__1_1705_, v_x_1703_, v_x_1704_);
return v___x_1709_;
}
else
{
lean_object* v_one_1710_; lean_object* v_n_1711_; lean_object* v___x_1712_; 
lean_dec(v_h__1_1705_);
v_one_1710_ = lean_unsigned_to_nat(1u);
v_n_1711_ = lean_nat_sub(v_x_1702_, v_one_1710_);
v___x_1712_ = lean_apply_3(v_h__2_1706_, v_n_1711_, v_x_1703_, v_x_1704_);
return v___x_1712_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readItems_match__3_splitter___boxed(lean_object* v_motive_1713_, lean_object* v_x_1714_, lean_object* v_x_1715_, lean_object* v_x_1716_, lean_object* v_h__1_1717_, lean_object* v_h__2_1718_){
_start:
{
lean_object* v_res_1719_; 
v_res_1719_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readItems_match__3_splitter(v_motive_1713_, v_x_1714_, v_x_1715_, v_x_1716_, v_h__1_1717_, v_h__2_1718_);
lean_dec(v_x_1714_);
return v_res_1719_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_decodeWith___redArg___lam__0(lean_object* v_toPure_1720_, lean_object* v_fst_1721_, lean_object* v_____r_1722_){
_start:
{
lean_object* v___x_1723_; 
v___x_1723_ = lean_apply_2(v_toPure_1720_, lean_box(0), v_fst_1721_);
return v___x_1723_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_decodeWith___redArg___lam__1(lean_object* v___x_1725_, lean_object* v_inst_1726_, lean_object* v_toPure_1727_, lean_object* v_err_1728_, lean_object* v_toBind_1729_, lean_object* v_____x_1730_){
_start:
{
lean_object* v_fst_1731_; lean_object* v_snd_1732_; uint8_t v___x_1733_; 
v_fst_1731_ = lean_ctor_get(v_____x_1730_, 0);
lean_inc(v_fst_1731_);
v_snd_1732_ = lean_ctor_get(v_____x_1730_, 1);
lean_inc(v_snd_1732_);
lean_dec_ref(v_____x_1730_);
v___x_1733_ = lean_nat_dec_eq(v_snd_1732_, v___x_1725_);
lean_dec(v_snd_1732_);
if (v___x_1733_ == 0)
{
lean_object* v_throw_1734_; lean_object* v___f_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; 
v_throw_1734_ = lean_ctor_get(v_inst_1726_, 0);
lean_inc(v_throw_1734_);
lean_dec_ref(v_inst_1726_);
v___f_1735_ = lean_alloc_closure((void*)(l_Lasm_JS_Wire_decodeWith___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1735_, 0, v_toPure_1727_);
lean_closure_set(v___f_1735_, 1, v_fst_1731_);
v___x_1736_ = ((lean_object*)(l_Lasm_JS_Wire_decodeWith___redArg___lam__1___closed__0));
v___x_1737_ = lean_apply_1(v_err_1728_, v___x_1736_);
v___x_1738_ = lean_apply_2(v_throw_1734_, lean_box(0), v___x_1737_);
v___x_1739_ = lean_apply_4(v_toBind_1729_, lean_box(0), lean_box(0), v___x_1738_, v___f_1735_);
return v___x_1739_;
}
else
{
lean_object* v___x_1740_; 
lean_dec(v_toBind_1729_);
lean_dec(v_err_1728_);
lean_dec_ref(v_inst_1726_);
v___x_1740_ = lean_apply_2(v_toPure_1727_, lean_box(0), v_fst_1731_);
return v___x_1740_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_decodeWith___redArg___lam__1___boxed(lean_object* v___x_1741_, lean_object* v_inst_1742_, lean_object* v_toPure_1743_, lean_object* v_err_1744_, lean_object* v_toBind_1745_, lean_object* v_____x_1746_){
_start:
{
lean_object* v_res_1747_; 
v_res_1747_ = l_Lasm_JS_Wire_decodeWith___redArg___lam__1(v___x_1741_, v_inst_1742_, v_toPure_1743_, v_err_1744_, v_toBind_1745_, v_____x_1746_);
lean_dec(v___x_1741_);
return v_res_1747_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_decodeWith___redArg(lean_object* v_inst_1748_, lean_object* v_inst_1749_, lean_object* v_err_1750_, lean_object* v_ref_1751_, lean_object* v_b_1752_){
_start:
{
lean_object* v_toApplicative_1753_; lean_object* v_toBind_1754_; lean_object* v_toPure_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___f_1759_; lean_object* v___x_1760_; 
v_toApplicative_1753_ = lean_ctor_get(v_inst_1748_, 0);
v_toBind_1754_ = lean_ctor_get(v_inst_1748_, 1);
lean_inc_n(v_toBind_1754_, 2);
v_toPure_1755_ = lean_ctor_get(v_toApplicative_1753_, 1);
lean_inc(v_toPure_1755_);
v___x_1756_ = lean_byte_array_size(v_b_1752_);
v___x_1757_ = lean_unsigned_to_nat(0u);
lean_inc(v_err_1750_);
lean_inc_ref(v_inst_1749_);
v___x_1758_ = l_Lasm_JS_Wire_readAt___redArg(v_inst_1748_, v_inst_1749_, v_err_1750_, v_ref_1751_, v___x_1756_, v_b_1752_, v___x_1757_);
v___f_1759_ = lean_alloc_closure((void*)(l_Lasm_JS_Wire_decodeWith___redArg___lam__1___boxed), 6, 5);
lean_closure_set(v___f_1759_, 0, v___x_1756_);
lean_closure_set(v___f_1759_, 1, v_inst_1749_);
lean_closure_set(v___f_1759_, 2, v_toPure_1755_);
lean_closure_set(v___f_1759_, 3, v_err_1750_);
lean_closure_set(v___f_1759_, 4, v_toBind_1754_);
v___x_1760_ = lean_apply_4(v_toBind_1754_, lean_box(0), lean_box(0), v___x_1758_, v___f_1759_);
return v___x_1760_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_decodeWith(lean_object* v_m_1761_, lean_object* v_inst_1762_, lean_object* v_00_u03b5_1763_, lean_object* v_inst_1764_, lean_object* v_err_1765_, lean_object* v_ref_1766_, lean_object* v_b_1767_){
_start:
{
lean_object* v___x_1768_; 
v___x_1768_ = l_Lasm_JS_Wire_decodeWith___redArg(v_inst_1762_, v_inst_1764_, v_err_1765_, v_ref_1766_, v_b_1767_);
return v___x_1768_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readFields___at___00Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0_spec__1(lean_object* v_fuel_1771_, lean_object* v_b_1772_, lean_object* v_x_1773_, lean_object* v_x_1774_, lean_object* v_x_1775_){
_start:
{
lean_object* v_zero_1777_; uint8_t v_isZero_1778_; 
v_zero_1777_ = lean_unsigned_to_nat(0u);
v_isZero_1778_ = lean_nat_dec_eq(v_x_1773_, v_zero_1777_);
if (v_isZero_1778_ == 1)
{
lean_object* v___x_1779_; lean_object* v___x_1780_; 
lean_dec(v_x_1773_);
v___x_1779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1779_, 0, v_x_1775_);
lean_ctor_set(v___x_1779_, 1, v_x_1774_);
v___x_1780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1780_, 0, v___x_1779_);
return v___x_1780_;
}
else
{
lean_object* v___x_1781_; 
v___x_1781_ = l_Lasm_JS_Wire_readString(v_b_1772_, v_x_1774_);
lean_dec(v_x_1774_);
if (lean_obj_tag(v___x_1781_) == 0)
{
lean_object* v_a_1782_; lean_object* v___x_1784_; uint8_t v_isShared_1785_; uint8_t v_isSharedCheck_1790_; 
lean_dec_ref(v_x_1775_);
lean_dec(v_x_1773_);
v_a_1782_ = lean_ctor_get(v___x_1781_, 0);
v_isSharedCheck_1790_ = !lean_is_exclusive(v___x_1781_);
if (v_isSharedCheck_1790_ == 0)
{
v___x_1784_ = v___x_1781_;
v_isShared_1785_ = v_isSharedCheck_1790_;
goto v_resetjp_1783_;
}
else
{
lean_inc(v_a_1782_);
lean_dec(v___x_1781_);
v___x_1784_ = lean_box(0);
v_isShared_1785_ = v_isSharedCheck_1790_;
goto v_resetjp_1783_;
}
v_resetjp_1783_:
{
lean_object* v___x_1787_; 
if (v_isShared_1785_ == 0)
{
lean_ctor_set_tag(v___x_1784_, 18);
v___x_1787_ = v___x_1784_;
goto v_reusejp_1786_;
}
else
{
lean_object* v_reuseFailAlloc_1789_; 
v_reuseFailAlloc_1789_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1789_, 0, v_a_1782_);
v___x_1787_ = v_reuseFailAlloc_1789_;
goto v_reusejp_1786_;
}
v_reusejp_1786_:
{
lean_object* v___x_1788_; 
v___x_1788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1788_, 0, v___x_1787_);
return v___x_1788_;
}
}
}
else
{
lean_object* v_a_1791_; lean_object* v_fst_1792_; lean_object* v_snd_1793_; lean_object* v_one_1794_; lean_object* v_n_1795_; lean_object* v___x_1796_; 
v_a_1791_ = lean_ctor_get(v___x_1781_, 0);
lean_inc(v_a_1791_);
lean_dec_ref_known(v___x_1781_, 1);
v_fst_1792_ = lean_ctor_get(v_a_1791_, 0);
lean_inc(v_fst_1792_);
v_snd_1793_ = lean_ctor_get(v_a_1791_, 1);
lean_inc(v_snd_1793_);
lean_dec(v_a_1791_);
v_one_1794_ = lean_unsigned_to_nat(1u);
v_n_1795_ = lean_nat_sub(v_x_1773_, v_one_1794_);
lean_dec(v_x_1773_);
v___x_1796_ = l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0(v_fuel_1771_, v_b_1772_, v_snd_1793_);
lean_dec(v_snd_1793_);
if (lean_obj_tag(v___x_1796_) == 0)
{
lean_object* v_a_1797_; lean_object* v_fst_1798_; lean_object* v_snd_1799_; lean_object* v___x_1801_; uint8_t v_isShared_1802_; uint8_t v_isSharedCheck_1808_; 
v_a_1797_ = lean_ctor_get(v___x_1796_, 0);
lean_inc(v_a_1797_);
lean_dec_ref_known(v___x_1796_, 1);
v_fst_1798_ = lean_ctor_get(v_a_1797_, 0);
v_snd_1799_ = lean_ctor_get(v_a_1797_, 1);
v_isSharedCheck_1808_ = !lean_is_exclusive(v_a_1797_);
if (v_isSharedCheck_1808_ == 0)
{
v___x_1801_ = v_a_1797_;
v_isShared_1802_ = v_isSharedCheck_1808_;
goto v_resetjp_1800_;
}
else
{
lean_inc(v_snd_1799_);
lean_inc(v_fst_1798_);
lean_dec(v_a_1797_);
v___x_1801_ = lean_box(0);
v_isShared_1802_ = v_isSharedCheck_1808_;
goto v_resetjp_1800_;
}
v_resetjp_1800_:
{
lean_object* v___x_1804_; 
if (v_isShared_1802_ == 0)
{
lean_ctor_set(v___x_1801_, 1, v_fst_1798_);
lean_ctor_set(v___x_1801_, 0, v_fst_1792_);
v___x_1804_ = v___x_1801_;
goto v_reusejp_1803_;
}
else
{
lean_object* v_reuseFailAlloc_1807_; 
v_reuseFailAlloc_1807_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1807_, 0, v_fst_1792_);
lean_ctor_set(v_reuseFailAlloc_1807_, 1, v_fst_1798_);
v___x_1804_ = v_reuseFailAlloc_1807_;
goto v_reusejp_1803_;
}
v_reusejp_1803_:
{
lean_object* v___x_1805_; 
v___x_1805_ = lean_array_push(v_x_1775_, v___x_1804_);
v_x_1773_ = v_n_1795_;
v_x_1774_ = v_snd_1799_;
v_x_1775_ = v___x_1805_;
goto _start;
}
}
}
else
{
lean_object* v_a_1809_; lean_object* v___x_1811_; uint8_t v_isShared_1812_; uint8_t v_isSharedCheck_1816_; 
lean_dec(v_n_1795_);
lean_dec(v_fst_1792_);
lean_dec_ref(v_x_1775_);
v_a_1809_ = lean_ctor_get(v___x_1796_, 0);
v_isSharedCheck_1816_ = !lean_is_exclusive(v___x_1796_);
if (v_isSharedCheck_1816_ == 0)
{
v___x_1811_ = v___x_1796_;
v_isShared_1812_ = v_isSharedCheck_1816_;
goto v_resetjp_1810_;
}
else
{
lean_inc(v_a_1809_);
lean_dec(v___x_1796_);
v___x_1811_ = lean_box(0);
v_isShared_1812_ = v_isSharedCheck_1816_;
goto v_resetjp_1810_;
}
v_resetjp_1810_:
{
lean_object* v___x_1814_; 
if (v_isShared_1812_ == 0)
{
v___x_1814_ = v___x_1811_;
goto v_reusejp_1813_;
}
else
{
lean_object* v_reuseFailAlloc_1815_; 
v_reuseFailAlloc_1815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1815_, 0, v_a_1809_);
v___x_1814_ = v_reuseFailAlloc_1815_;
goto v_reusejp_1813_;
}
v_reusejp_1813_:
{
return v___x_1814_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0(lean_object* v_x_1819_, lean_object* v_x_1820_, lean_object* v_x_1821_){
_start:
{
lean_object* v_zero_1823_; uint8_t v_isZero_1824_; 
v_zero_1823_ = lean_unsigned_to_nat(0u);
v_isZero_1824_ = lean_nat_dec_eq(v_x_1819_, v_zero_1823_);
if (v_isZero_1824_ == 1)
{
lean_object* v___x_1825_; lean_object* v___x_1826_; 
v___x_1825_ = ((lean_object*)(l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0___closed__0));
v___x_1826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1826_, 0, v___x_1825_);
return v___x_1826_;
}
else
{
lean_object* v___x_1827_; uint8_t v___x_1828_; 
v___x_1827_ = lean_byte_array_size(v_x_1820_);
v___x_1828_ = lean_nat_dec_lt(v_x_1821_, v___x_1827_);
if (v___x_1828_ == 0)
{
lean_object* v___x_1829_; lean_object* v___x_1830_; 
v___x_1829_ = ((lean_object*)(l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0___closed__0));
v___x_1830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1830_, 0, v___x_1829_);
return v___x_1830_;
}
else
{
lean_object* v___x_1831_; lean_object* v_o_x27_1832_; uint8_t v___x_1833_; uint8_t v___x_1834_; uint8_t v___x_1835_; 
v___x_1831_ = lean_unsigned_to_nat(1u);
v_o_x27_1832_ = lean_nat_add(v_x_1821_, v___x_1831_);
v___x_1833_ = lean_byte_array_fget(v_x_1820_, v_x_1821_);
v___x_1834_ = 0;
v___x_1835_ = lean_uint8_dec_eq(v___x_1833_, v___x_1834_);
if (v___x_1835_ == 0)
{
uint8_t v___x_1836_; uint8_t v___x_1837_; 
v___x_1836_ = 1;
v___x_1837_ = lean_uint8_dec_eq(v___x_1833_, v___x_1836_);
if (v___x_1837_ == 0)
{
uint8_t v___x_1838_; uint8_t v___x_1839_; 
v___x_1838_ = 2;
v___x_1839_ = lean_uint8_dec_eq(v___x_1833_, v___x_1838_);
if (v___x_1839_ == 0)
{
uint8_t v___x_1840_; uint8_t v___x_1841_; 
v___x_1840_ = 3;
v___x_1841_ = lean_uint8_dec_eq(v___x_1833_, v___x_1840_);
if (v___x_1841_ == 0)
{
uint8_t v___x_1842_; uint8_t v___x_1843_; 
v___x_1842_ = 4;
v___x_1843_ = lean_uint8_dec_eq(v___x_1833_, v___x_1842_);
if (v___x_1843_ == 0)
{
uint8_t v___x_1844_; uint8_t v___x_1845_; 
v___x_1844_ = 5;
v___x_1845_ = lean_uint8_dec_eq(v___x_1833_, v___x_1844_);
if (v___x_1845_ == 0)
{
uint8_t v___x_1846_; uint8_t v___x_1847_; 
v___x_1846_ = 6;
v___x_1847_ = lean_uint8_dec_eq(v___x_1833_, v___x_1846_);
if (v___x_1847_ == 0)
{
uint8_t v___x_1848_; uint8_t v___x_1849_; 
v___x_1848_ = 7;
v___x_1849_ = lean_uint8_dec_eq(v___x_1833_, v___x_1848_);
if (v___x_1849_ == 0)
{
lean_object* v_n_1850_; uint8_t v___x_1851_; uint8_t v___x_1852_; 
v_n_1850_ = lean_nat_sub(v_x_1819_, v___x_1831_);
v___x_1851_ = 8;
v___x_1852_ = lean_uint8_dec_eq(v___x_1833_, v___x_1851_);
if (v___x_1852_ == 0)
{
uint8_t v___x_1853_; uint8_t v___x_1854_; 
v___x_1853_ = 9;
v___x_1854_ = lean_uint8_dec_eq(v___x_1833_, v___x_1853_);
if (v___x_1854_ == 0)
{
uint8_t v___x_1855_; uint8_t v___x_1856_; 
lean_dec(v_n_1850_);
v___x_1855_ = 10;
v___x_1856_ = lean_uint8_dec_eq(v___x_1833_, v___x_1855_);
if (v___x_1856_ == 0)
{
lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; 
lean_dec(v_o_x27_1832_);
v___x_1857_ = ((lean_object*)(l_Lasm_JS_Wire_readAt___redArg___closed__0));
v___x_1858_ = lean_uint8_to_nat(v___x_1833_);
v___x_1859_ = l_Nat_reprFast(v___x_1858_);
v___x_1860_ = lean_string_append(v___x_1857_, v___x_1859_);
lean_dec_ref(v___x_1859_);
v___x_1861_ = ((lean_object*)(l_Lasm_JS_Wire_pushLength___closed__5));
v___x_1862_ = lean_string_append(v___x_1860_, v___x_1861_);
v___x_1863_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1863_, 0, v___x_1862_);
v___x_1864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1864_, 0, v___x_1863_);
return v___x_1864_;
}
else
{
lean_object* v___x_1865_; 
v___x_1865_ = l_Lasm_JS_Wire_readU32(v_x_1820_, v_o_x27_1832_);
if (lean_obj_tag(v___x_1865_) == 0)
{
lean_object* v___x_1866_; lean_object* v___x_1867_; 
lean_dec(v_o_x27_1832_);
v___x_1866_ = ((lean_object*)(l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0___closed__0));
v___x_1867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1867_, 0, v___x_1866_);
return v___x_1867_;
}
else
{
lean_object* v_val_1868_; lean_object* v___x_1870_; uint8_t v_isShared_1871_; uint8_t v_isSharedCheck_1915_; 
v_val_1868_ = lean_ctor_get(v___x_1865_, 0);
v_isSharedCheck_1915_ = !lean_is_exclusive(v___x_1865_);
if (v_isSharedCheck_1915_ == 0)
{
v___x_1870_ = v___x_1865_;
v_isShared_1871_ = v_isSharedCheck_1915_;
goto v_resetjp_1869_;
}
else
{
lean_inc(v_val_1868_);
lean_dec(v___x_1865_);
v___x_1870_ = lean_box(0);
v_isShared_1871_ = v_isSharedCheck_1915_;
goto v_resetjp_1869_;
}
v_resetjp_1869_:
{
lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; 
v___x_1872_ = lean_unsigned_to_nat(4u);
v___x_1873_ = lean_nat_add(v_o_x27_1832_, v___x_1872_);
lean_dec(v_o_x27_1832_);
v___x_1874_ = l_Lasm_JS_Wire_readString(v_x_1820_, v___x_1873_);
lean_dec(v___x_1873_);
if (lean_obj_tag(v___x_1874_) == 0)
{
lean_object* v_a_1875_; lean_object* v___x_1877_; uint8_t v_isShared_1878_; uint8_t v_isSharedCheck_1885_; 
lean_dec(v_val_1868_);
v_a_1875_ = lean_ctor_get(v___x_1874_, 0);
v_isSharedCheck_1885_ = !lean_is_exclusive(v___x_1874_);
if (v_isSharedCheck_1885_ == 0)
{
v___x_1877_ = v___x_1874_;
v_isShared_1878_ = v_isSharedCheck_1885_;
goto v_resetjp_1876_;
}
else
{
lean_inc(v_a_1875_);
lean_dec(v___x_1874_);
v___x_1877_ = lean_box(0);
v_isShared_1878_ = v_isSharedCheck_1885_;
goto v_resetjp_1876_;
}
v_resetjp_1876_:
{
lean_object* v___x_1880_; 
if (v_isShared_1878_ == 0)
{
lean_ctor_set_tag(v___x_1877_, 18);
v___x_1880_ = v___x_1877_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1884_; 
v_reuseFailAlloc_1884_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1884_, 0, v_a_1875_);
v___x_1880_ = v_reuseFailAlloc_1884_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
lean_object* v___x_1882_; 
if (v_isShared_1871_ == 0)
{
lean_ctor_set(v___x_1870_, 0, v___x_1880_);
v___x_1882_ = v___x_1870_;
goto v_reusejp_1881_;
}
else
{
lean_object* v_reuseFailAlloc_1883_; 
v_reuseFailAlloc_1883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1883_, 0, v___x_1880_);
v___x_1882_ = v_reuseFailAlloc_1883_;
goto v_reusejp_1881_;
}
v_reusejp_1881_:
{
return v___x_1882_;
}
}
}
}
else
{
lean_object* v_a_1886_; lean_object* v_fst_1887_; lean_object* v_snd_1888_; lean_object* v___x_1890_; uint8_t v_isShared_1891_; uint8_t v_isSharedCheck_1914_; 
lean_del_object(v___x_1870_);
v_a_1886_ = lean_ctor_get(v___x_1874_, 0);
lean_inc(v_a_1886_);
lean_dec_ref_known(v___x_1874_, 1);
v_fst_1887_ = lean_ctor_get(v_a_1886_, 0);
v_snd_1888_ = lean_ctor_get(v_a_1886_, 1);
v_isSharedCheck_1914_ = !lean_is_exclusive(v_a_1886_);
if (v_isSharedCheck_1914_ == 0)
{
v___x_1890_ = v_a_1886_;
v_isShared_1891_ = v_isSharedCheck_1914_;
goto v_resetjp_1889_;
}
else
{
lean_inc(v_snd_1888_);
lean_inc(v_fst_1887_);
lean_dec(v_a_1886_);
v___x_1890_ = lean_box(0);
v_isShared_1891_ = v_isSharedCheck_1914_;
goto v_resetjp_1889_;
}
v_resetjp_1889_:
{
uint32_t v___x_1892_; lean_object* v___x_1893_; 
v___x_1892_ = lean_unbox_uint32(v_val_1868_);
lean_dec(v_val_1868_);
v___x_1893_ = lasm_js_value_of_handle(v___x_1892_);
if (lean_obj_tag(v___x_1893_) == 0)
{
lean_object* v_a_1894_; lean_object* v___x_1896_; uint8_t v_isShared_1897_; uint8_t v_isSharedCheck_1905_; 
v_a_1894_ = lean_ctor_get(v___x_1893_, 0);
v_isSharedCheck_1905_ = !lean_is_exclusive(v___x_1893_);
if (v_isSharedCheck_1905_ == 0)
{
v___x_1896_ = v___x_1893_;
v_isShared_1897_ = v_isSharedCheck_1905_;
goto v_resetjp_1895_;
}
else
{
lean_inc(v_a_1894_);
lean_dec(v___x_1893_);
v___x_1896_ = lean_box(0);
v_isShared_1897_ = v_isSharedCheck_1905_;
goto v_resetjp_1895_;
}
v_resetjp_1895_:
{
lean_object* v___x_1898_; lean_object* v___x_1900_; 
v___x_1898_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1898_, 0, v_a_1894_);
lean_ctor_set(v___x_1898_, 1, v_fst_1887_);
if (v_isShared_1891_ == 0)
{
lean_ctor_set(v___x_1890_, 0, v___x_1898_);
v___x_1900_ = v___x_1890_;
goto v_reusejp_1899_;
}
else
{
lean_object* v_reuseFailAlloc_1904_; 
v_reuseFailAlloc_1904_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1904_, 0, v___x_1898_);
lean_ctor_set(v_reuseFailAlloc_1904_, 1, v_snd_1888_);
v___x_1900_ = v_reuseFailAlloc_1904_;
goto v_reusejp_1899_;
}
v_reusejp_1899_:
{
lean_object* v___x_1902_; 
if (v_isShared_1897_ == 0)
{
lean_ctor_set(v___x_1896_, 0, v___x_1900_);
v___x_1902_ = v___x_1896_;
goto v_reusejp_1901_;
}
else
{
lean_object* v_reuseFailAlloc_1903_; 
v_reuseFailAlloc_1903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1903_, 0, v___x_1900_);
v___x_1902_ = v_reuseFailAlloc_1903_;
goto v_reusejp_1901_;
}
v_reusejp_1901_:
{
return v___x_1902_;
}
}
}
}
else
{
lean_object* v_a_1906_; lean_object* v___x_1908_; uint8_t v_isShared_1909_; uint8_t v_isSharedCheck_1913_; 
lean_del_object(v___x_1890_);
lean_dec(v_snd_1888_);
lean_dec(v_fst_1887_);
v_a_1906_ = lean_ctor_get(v___x_1893_, 0);
v_isSharedCheck_1913_ = !lean_is_exclusive(v___x_1893_);
if (v_isSharedCheck_1913_ == 0)
{
v___x_1908_ = v___x_1893_;
v_isShared_1909_ = v_isSharedCheck_1913_;
goto v_resetjp_1907_;
}
else
{
lean_inc(v_a_1906_);
lean_dec(v___x_1893_);
v___x_1908_ = lean_box(0);
v_isShared_1909_ = v_isSharedCheck_1913_;
goto v_resetjp_1907_;
}
v_resetjp_1907_:
{
lean_object* v___x_1911_; 
if (v_isShared_1909_ == 0)
{
v___x_1911_ = v___x_1908_;
goto v_reusejp_1910_;
}
else
{
lean_object* v_reuseFailAlloc_1912_; 
v_reuseFailAlloc_1912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1912_, 0, v_a_1906_);
v___x_1911_ = v_reuseFailAlloc_1912_;
goto v_reusejp_1910_;
}
v_reusejp_1910_:
{
return v___x_1911_;
}
}
}
}
}
}
}
}
}
else
{
lean_object* v___x_1916_; 
v___x_1916_ = l_Lasm_JS_Wire_readU32(v_x_1820_, v_o_x27_1832_);
if (lean_obj_tag(v___x_1916_) == 0)
{
lean_object* v___x_1917_; lean_object* v___x_1918_; 
lean_dec(v_n_1850_);
lean_dec(v_o_x27_1832_);
v___x_1917_ = ((lean_object*)(l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0___closed__0));
v___x_1918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1918_, 0, v___x_1917_);
return v___x_1918_;
}
else
{
lean_object* v_val_1919_; lean_object* v___x_1921_; uint8_t v_isShared_1922_; uint8_t v_isSharedCheck_1961_; 
v_val_1919_ = lean_ctor_get(v___x_1916_, 0);
v_isSharedCheck_1961_ = !lean_is_exclusive(v___x_1916_);
if (v_isSharedCheck_1961_ == 0)
{
v___x_1921_ = v___x_1916_;
v_isShared_1922_ = v_isSharedCheck_1961_;
goto v_resetjp_1920_;
}
else
{
lean_inc(v_val_1919_);
lean_dec(v___x_1916_);
v___x_1921_ = lean_box(0);
v_isShared_1922_ = v_isSharedCheck_1961_;
goto v_resetjp_1920_;
}
v_resetjp_1920_:
{
uint32_t v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___y_1928_; lean_object* v___x_1959_; uint8_t v___x_1960_; 
v___x_1923_ = lean_unbox_uint32(v_val_1919_);
lean_dec(v_val_1919_);
v___x_1924_ = lean_uint32_to_nat(v___x_1923_);
v___x_1925_ = lean_unsigned_to_nat(4u);
v___x_1926_ = lean_nat_add(v_o_x27_1832_, v___x_1925_);
lean_dec(v_o_x27_1832_);
v___x_1959_ = lean_nat_sub(v___x_1827_, v_x_1821_);
v___x_1960_ = lean_nat_dec_le(v___x_1924_, v___x_1959_);
if (v___x_1960_ == 0)
{
v___y_1928_ = v___x_1959_;
goto v___jp_1927_;
}
else
{
lean_dec(v___x_1959_);
lean_inc(v___x_1924_);
v___y_1928_ = v___x_1924_;
goto v___jp_1927_;
}
v___jp_1927_:
{
lean_object* v___x_1929_; lean_object* v___x_1930_; 
v___x_1929_ = lean_mk_empty_array_with_capacity(v___y_1928_);
lean_dec(v___y_1928_);
v___x_1930_ = l_Lasm_JS_Wire_readFields___at___00Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0_spec__1(v_n_1850_, v_x_1820_, v___x_1924_, v___x_1926_, v___x_1929_);
lean_dec(v_n_1850_);
if (lean_obj_tag(v___x_1930_) == 0)
{
lean_object* v_a_1931_; lean_object* v___x_1933_; uint8_t v_isShared_1934_; uint8_t v_isSharedCheck_1950_; 
v_a_1931_ = lean_ctor_get(v___x_1930_, 0);
v_isSharedCheck_1950_ = !lean_is_exclusive(v___x_1930_);
if (v_isSharedCheck_1950_ == 0)
{
v___x_1933_ = v___x_1930_;
v_isShared_1934_ = v_isSharedCheck_1950_;
goto v_resetjp_1932_;
}
else
{
lean_inc(v_a_1931_);
lean_dec(v___x_1930_);
v___x_1933_ = lean_box(0);
v_isShared_1934_ = v_isSharedCheck_1950_;
goto v_resetjp_1932_;
}
v_resetjp_1932_:
{
lean_object* v_fst_1935_; lean_object* v_snd_1936_; lean_object* v___x_1938_; uint8_t v_isShared_1939_; uint8_t v_isSharedCheck_1949_; 
v_fst_1935_ = lean_ctor_get(v_a_1931_, 0);
v_snd_1936_ = lean_ctor_get(v_a_1931_, 1);
v_isSharedCheck_1949_ = !lean_is_exclusive(v_a_1931_);
if (v_isSharedCheck_1949_ == 0)
{
v___x_1938_ = v_a_1931_;
v_isShared_1939_ = v_isSharedCheck_1949_;
goto v_resetjp_1937_;
}
else
{
lean_inc(v_snd_1936_);
lean_inc(v_fst_1935_);
lean_dec(v_a_1931_);
v___x_1938_ = lean_box(0);
v_isShared_1939_ = v_isSharedCheck_1949_;
goto v_resetjp_1937_;
}
v_resetjp_1937_:
{
lean_object* v___x_1941_; 
if (v_isShared_1922_ == 0)
{
lean_ctor_set_tag(v___x_1921_, 8);
lean_ctor_set(v___x_1921_, 0, v_fst_1935_);
v___x_1941_ = v___x_1921_;
goto v_reusejp_1940_;
}
else
{
lean_object* v_reuseFailAlloc_1948_; 
v_reuseFailAlloc_1948_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1948_, 0, v_fst_1935_);
v___x_1941_ = v_reuseFailAlloc_1948_;
goto v_reusejp_1940_;
}
v_reusejp_1940_:
{
lean_object* v___x_1943_; 
if (v_isShared_1939_ == 0)
{
lean_ctor_set(v___x_1938_, 0, v___x_1941_);
v___x_1943_ = v___x_1938_;
goto v_reusejp_1942_;
}
else
{
lean_object* v_reuseFailAlloc_1947_; 
v_reuseFailAlloc_1947_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1947_, 0, v___x_1941_);
lean_ctor_set(v_reuseFailAlloc_1947_, 1, v_snd_1936_);
v___x_1943_ = v_reuseFailAlloc_1947_;
goto v_reusejp_1942_;
}
v_reusejp_1942_:
{
lean_object* v___x_1945_; 
if (v_isShared_1934_ == 0)
{
lean_ctor_set(v___x_1933_, 0, v___x_1943_);
v___x_1945_ = v___x_1933_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1946_; 
v_reuseFailAlloc_1946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1946_, 0, v___x_1943_);
v___x_1945_ = v_reuseFailAlloc_1946_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
return v___x_1945_;
}
}
}
}
}
}
else
{
lean_object* v_a_1951_; lean_object* v___x_1953_; uint8_t v_isShared_1954_; uint8_t v_isSharedCheck_1958_; 
lean_del_object(v___x_1921_);
v_a_1951_ = lean_ctor_get(v___x_1930_, 0);
v_isSharedCheck_1958_ = !lean_is_exclusive(v___x_1930_);
if (v_isSharedCheck_1958_ == 0)
{
v___x_1953_ = v___x_1930_;
v_isShared_1954_ = v_isSharedCheck_1958_;
goto v_resetjp_1952_;
}
else
{
lean_inc(v_a_1951_);
lean_dec(v___x_1930_);
v___x_1953_ = lean_box(0);
v_isShared_1954_ = v_isSharedCheck_1958_;
goto v_resetjp_1952_;
}
v_resetjp_1952_:
{
lean_object* v___x_1956_; 
if (v_isShared_1954_ == 0)
{
v___x_1956_ = v___x_1953_;
goto v_reusejp_1955_;
}
else
{
lean_object* v_reuseFailAlloc_1957_; 
v_reuseFailAlloc_1957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1957_, 0, v_a_1951_);
v___x_1956_ = v_reuseFailAlloc_1957_;
goto v_reusejp_1955_;
}
v_reusejp_1955_:
{
return v___x_1956_;
}
}
}
}
}
}
}
}
else
{
lean_object* v___x_1962_; 
v___x_1962_ = l_Lasm_JS_Wire_readU32(v_x_1820_, v_o_x27_1832_);
if (lean_obj_tag(v___x_1962_) == 0)
{
lean_object* v___x_1963_; lean_object* v___x_1964_; 
lean_dec(v_n_1850_);
lean_dec(v_o_x27_1832_);
v___x_1963_ = ((lean_object*)(l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0___closed__0));
v___x_1964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1964_, 0, v___x_1963_);
return v___x_1964_;
}
else
{
lean_object* v_val_1965_; lean_object* v___x_1967_; uint8_t v_isShared_1968_; uint8_t v_isSharedCheck_2007_; 
v_val_1965_ = lean_ctor_get(v___x_1962_, 0);
v_isSharedCheck_2007_ = !lean_is_exclusive(v___x_1962_);
if (v_isSharedCheck_2007_ == 0)
{
v___x_1967_ = v___x_1962_;
v_isShared_1968_ = v_isSharedCheck_2007_;
goto v_resetjp_1966_;
}
else
{
lean_inc(v_val_1965_);
lean_dec(v___x_1962_);
v___x_1967_ = lean_box(0);
v_isShared_1968_ = v_isSharedCheck_2007_;
goto v_resetjp_1966_;
}
v_resetjp_1966_:
{
uint32_t v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___y_1974_; lean_object* v___x_2005_; uint8_t v___x_2006_; 
v___x_1969_ = lean_unbox_uint32(v_val_1965_);
lean_dec(v_val_1965_);
v___x_1970_ = lean_uint32_to_nat(v___x_1969_);
v___x_1971_ = lean_unsigned_to_nat(4u);
v___x_1972_ = lean_nat_add(v_o_x27_1832_, v___x_1971_);
lean_dec(v_o_x27_1832_);
v___x_2005_ = lean_nat_sub(v___x_1827_, v_x_1821_);
v___x_2006_ = lean_nat_dec_le(v___x_1970_, v___x_2005_);
if (v___x_2006_ == 0)
{
v___y_1974_ = v___x_2005_;
goto v___jp_1973_;
}
else
{
lean_dec(v___x_2005_);
lean_inc(v___x_1970_);
v___y_1974_ = v___x_1970_;
goto v___jp_1973_;
}
v___jp_1973_:
{
lean_object* v___x_1975_; lean_object* v___x_1976_; 
v___x_1975_ = lean_mk_empty_array_with_capacity(v___y_1974_);
lean_dec(v___y_1974_);
v___x_1976_ = l_Lasm_JS_Wire_readItems___at___00Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0_spec__2(v_n_1850_, v_x_1820_, v___x_1970_, v___x_1972_, v___x_1975_);
lean_dec(v_n_1850_);
if (lean_obj_tag(v___x_1976_) == 0)
{
lean_object* v_a_1977_; lean_object* v___x_1979_; uint8_t v_isShared_1980_; uint8_t v_isSharedCheck_1996_; 
v_a_1977_ = lean_ctor_get(v___x_1976_, 0);
v_isSharedCheck_1996_ = !lean_is_exclusive(v___x_1976_);
if (v_isSharedCheck_1996_ == 0)
{
v___x_1979_ = v___x_1976_;
v_isShared_1980_ = v_isSharedCheck_1996_;
goto v_resetjp_1978_;
}
else
{
lean_inc(v_a_1977_);
lean_dec(v___x_1976_);
v___x_1979_ = lean_box(0);
v_isShared_1980_ = v_isSharedCheck_1996_;
goto v_resetjp_1978_;
}
v_resetjp_1978_:
{
lean_object* v_fst_1981_; lean_object* v_snd_1982_; lean_object* v___x_1984_; uint8_t v_isShared_1985_; uint8_t v_isSharedCheck_1995_; 
v_fst_1981_ = lean_ctor_get(v_a_1977_, 0);
v_snd_1982_ = lean_ctor_get(v_a_1977_, 1);
v_isSharedCheck_1995_ = !lean_is_exclusive(v_a_1977_);
if (v_isSharedCheck_1995_ == 0)
{
v___x_1984_ = v_a_1977_;
v_isShared_1985_ = v_isSharedCheck_1995_;
goto v_resetjp_1983_;
}
else
{
lean_inc(v_snd_1982_);
lean_inc(v_fst_1981_);
lean_dec(v_a_1977_);
v___x_1984_ = lean_box(0);
v_isShared_1985_ = v_isSharedCheck_1995_;
goto v_resetjp_1983_;
}
v_resetjp_1983_:
{
lean_object* v___x_1987_; 
if (v_isShared_1968_ == 0)
{
lean_ctor_set_tag(v___x_1967_, 7);
lean_ctor_set(v___x_1967_, 0, v_fst_1981_);
v___x_1987_ = v___x_1967_;
goto v_reusejp_1986_;
}
else
{
lean_object* v_reuseFailAlloc_1994_; 
v_reuseFailAlloc_1994_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1994_, 0, v_fst_1981_);
v___x_1987_ = v_reuseFailAlloc_1994_;
goto v_reusejp_1986_;
}
v_reusejp_1986_:
{
lean_object* v___x_1989_; 
if (v_isShared_1985_ == 0)
{
lean_ctor_set(v___x_1984_, 0, v___x_1987_);
v___x_1989_ = v___x_1984_;
goto v_reusejp_1988_;
}
else
{
lean_object* v_reuseFailAlloc_1993_; 
v_reuseFailAlloc_1993_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1993_, 0, v___x_1987_);
lean_ctor_set(v_reuseFailAlloc_1993_, 1, v_snd_1982_);
v___x_1989_ = v_reuseFailAlloc_1993_;
goto v_reusejp_1988_;
}
v_reusejp_1988_:
{
lean_object* v___x_1991_; 
if (v_isShared_1980_ == 0)
{
lean_ctor_set(v___x_1979_, 0, v___x_1989_);
v___x_1991_ = v___x_1979_;
goto v_reusejp_1990_;
}
else
{
lean_object* v_reuseFailAlloc_1992_; 
v_reuseFailAlloc_1992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1992_, 0, v___x_1989_);
v___x_1991_ = v_reuseFailAlloc_1992_;
goto v_reusejp_1990_;
}
v_reusejp_1990_:
{
return v___x_1991_;
}
}
}
}
}
}
else
{
lean_object* v_a_1997_; lean_object* v___x_1999_; uint8_t v_isShared_2000_; uint8_t v_isSharedCheck_2004_; 
lean_del_object(v___x_1967_);
v_a_1997_ = lean_ctor_get(v___x_1976_, 0);
v_isSharedCheck_2004_ = !lean_is_exclusive(v___x_1976_);
if (v_isSharedCheck_2004_ == 0)
{
v___x_1999_ = v___x_1976_;
v_isShared_2000_ = v_isSharedCheck_2004_;
goto v_resetjp_1998_;
}
else
{
lean_inc(v_a_1997_);
lean_dec(v___x_1976_);
v___x_1999_ = lean_box(0);
v_isShared_2000_ = v_isSharedCheck_2004_;
goto v_resetjp_1998_;
}
v_resetjp_1998_:
{
lean_object* v___x_2002_; 
if (v_isShared_2000_ == 0)
{
v___x_2002_ = v___x_1999_;
goto v_reusejp_2001_;
}
else
{
lean_object* v_reuseFailAlloc_2003_; 
v_reuseFailAlloc_2003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2003_, 0, v_a_1997_);
v___x_2002_ = v_reuseFailAlloc_2003_;
goto v_reusejp_2001_;
}
v_reusejp_2001_:
{
return v___x_2002_;
}
}
}
}
}
}
}
}
else
{
lean_object* v___x_2008_; 
v___x_2008_ = l_Lasm_JS_Wire_readRaw(v_x_1820_, v_o_x27_1832_);
lean_dec(v_o_x27_1832_);
if (lean_obj_tag(v___x_2008_) == 0)
{
lean_object* v___x_2009_; lean_object* v___x_2010_; 
v___x_2009_ = ((lean_object*)(l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0___closed__0));
v___x_2010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2010_, 0, v___x_2009_);
return v___x_2010_;
}
else
{
lean_object* v_val_2011_; lean_object* v___x_2013_; uint8_t v_isShared_2014_; uint8_t v_isSharedCheck_2028_; 
v_val_2011_ = lean_ctor_get(v___x_2008_, 0);
v_isSharedCheck_2028_ = !lean_is_exclusive(v___x_2008_);
if (v_isSharedCheck_2028_ == 0)
{
v___x_2013_ = v___x_2008_;
v_isShared_2014_ = v_isSharedCheck_2028_;
goto v_resetjp_2012_;
}
else
{
lean_inc(v_val_2011_);
lean_dec(v___x_2008_);
v___x_2013_ = lean_box(0);
v_isShared_2014_ = v_isSharedCheck_2028_;
goto v_resetjp_2012_;
}
v_resetjp_2012_:
{
lean_object* v_fst_2015_; lean_object* v_snd_2016_; lean_object* v___x_2018_; uint8_t v_isShared_2019_; uint8_t v_isSharedCheck_2027_; 
v_fst_2015_ = lean_ctor_get(v_val_2011_, 0);
v_snd_2016_ = lean_ctor_get(v_val_2011_, 1);
v_isSharedCheck_2027_ = !lean_is_exclusive(v_val_2011_);
if (v_isSharedCheck_2027_ == 0)
{
v___x_2018_ = v_val_2011_;
v_isShared_2019_ = v_isSharedCheck_2027_;
goto v_resetjp_2017_;
}
else
{
lean_inc(v_snd_2016_);
lean_inc(v_fst_2015_);
lean_dec(v_val_2011_);
v___x_2018_ = lean_box(0);
v_isShared_2019_ = v_isSharedCheck_2027_;
goto v_resetjp_2017_;
}
v_resetjp_2017_:
{
lean_object* v___x_2021_; 
if (v_isShared_2014_ == 0)
{
lean_ctor_set_tag(v___x_2013_, 6);
lean_ctor_set(v___x_2013_, 0, v_fst_2015_);
v___x_2021_ = v___x_2013_;
goto v_reusejp_2020_;
}
else
{
lean_object* v_reuseFailAlloc_2026_; 
v_reuseFailAlloc_2026_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2026_, 0, v_fst_2015_);
v___x_2021_ = v_reuseFailAlloc_2026_;
goto v_reusejp_2020_;
}
v_reusejp_2020_:
{
lean_object* v___x_2023_; 
if (v_isShared_2019_ == 0)
{
lean_ctor_set(v___x_2018_, 0, v___x_2021_);
v___x_2023_ = v___x_2018_;
goto v_reusejp_2022_;
}
else
{
lean_object* v_reuseFailAlloc_2025_; 
v_reuseFailAlloc_2025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2025_, 0, v___x_2021_);
lean_ctor_set(v_reuseFailAlloc_2025_, 1, v_snd_2016_);
v___x_2023_ = v_reuseFailAlloc_2025_;
goto v_reusejp_2022_;
}
v_reusejp_2022_:
{
lean_object* v___x_2024_; 
v___x_2024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2024_, 0, v___x_2023_);
return v___x_2024_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2029_; 
v___x_2029_ = l_Lasm_JS_Wire_readString(v_x_1820_, v_o_x27_1832_);
lean_dec(v_o_x27_1832_);
if (lean_obj_tag(v___x_2029_) == 0)
{
lean_object* v_a_2030_; lean_object* v___x_2032_; uint8_t v_isShared_2033_; uint8_t v_isSharedCheck_2038_; 
v_a_2030_ = lean_ctor_get(v___x_2029_, 0);
v_isSharedCheck_2038_ = !lean_is_exclusive(v___x_2029_);
if (v_isSharedCheck_2038_ == 0)
{
v___x_2032_ = v___x_2029_;
v_isShared_2033_ = v_isSharedCheck_2038_;
goto v_resetjp_2031_;
}
else
{
lean_inc(v_a_2030_);
lean_dec(v___x_2029_);
v___x_2032_ = lean_box(0);
v_isShared_2033_ = v_isSharedCheck_2038_;
goto v_resetjp_2031_;
}
v_resetjp_2031_:
{
lean_object* v___x_2035_; 
if (v_isShared_2033_ == 0)
{
lean_ctor_set_tag(v___x_2032_, 18);
v___x_2035_ = v___x_2032_;
goto v_reusejp_2034_;
}
else
{
lean_object* v_reuseFailAlloc_2037_; 
v_reuseFailAlloc_2037_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2037_, 0, v_a_2030_);
v___x_2035_ = v_reuseFailAlloc_2037_;
goto v_reusejp_2034_;
}
v_reusejp_2034_:
{
lean_object* v___x_2036_; 
v___x_2036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2036_, 0, v___x_2035_);
return v___x_2036_;
}
}
}
else
{
lean_object* v_a_2039_; lean_object* v___x_2041_; uint8_t v_isShared_2042_; uint8_t v_isSharedCheck_2070_; 
v_a_2039_ = lean_ctor_get(v___x_2029_, 0);
v_isSharedCheck_2070_ = !lean_is_exclusive(v___x_2029_);
if (v_isSharedCheck_2070_ == 0)
{
v___x_2041_ = v___x_2029_;
v_isShared_2042_ = v_isSharedCheck_2070_;
goto v_resetjp_2040_;
}
else
{
lean_inc(v_a_2039_);
lean_dec(v___x_2029_);
v___x_2041_ = lean_box(0);
v_isShared_2042_ = v_isSharedCheck_2070_;
goto v_resetjp_2040_;
}
v_resetjp_2040_:
{
lean_object* v_fst_2043_; lean_object* v_snd_2044_; lean_object* v___x_2046_; uint8_t v_isShared_2047_; uint8_t v_isSharedCheck_2069_; 
v_fst_2043_ = lean_ctor_get(v_a_2039_, 0);
v_snd_2044_ = lean_ctor_get(v_a_2039_, 1);
v_isSharedCheck_2069_ = !lean_is_exclusive(v_a_2039_);
if (v_isSharedCheck_2069_ == 0)
{
v___x_2046_ = v_a_2039_;
v_isShared_2047_ = v_isSharedCheck_2069_;
goto v_resetjp_2045_;
}
else
{
lean_inc(v_snd_2044_);
lean_inc(v_fst_2043_);
lean_dec(v_a_2039_);
v___x_2046_ = lean_box(0);
v_isShared_2047_ = v_isSharedCheck_2069_;
goto v_resetjp_2045_;
}
v_resetjp_2045_:
{
lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; 
v___x_2048_ = lean_string_utf8_byte_size(v_fst_2043_);
v___x_2049_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2049_, 0, v_fst_2043_);
lean_ctor_set(v___x_2049_, 1, v_zero_1823_);
lean_ctor_set(v___x_2049_, 2, v___x_2048_);
v___x_2050_ = l_String_Slice_toInt_x3f(v___x_2049_);
if (lean_obj_tag(v___x_2050_) == 0)
{
lean_object* v___x_2051_; lean_object* v___x_2053_; 
lean_del_object(v___x_2046_);
lean_dec(v_snd_2044_);
v___x_2051_ = ((lean_object*)(l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0___closed__1));
if (v_isShared_2042_ == 0)
{
lean_ctor_set(v___x_2041_, 0, v___x_2051_);
v___x_2053_ = v___x_2041_;
goto v_reusejp_2052_;
}
else
{
lean_object* v_reuseFailAlloc_2054_; 
v_reuseFailAlloc_2054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2054_, 0, v___x_2051_);
v___x_2053_ = v_reuseFailAlloc_2054_;
goto v_reusejp_2052_;
}
v_reusejp_2052_:
{
return v___x_2053_;
}
}
else
{
lean_object* v_val_2055_; lean_object* v___x_2057_; uint8_t v_isShared_2058_; uint8_t v_isSharedCheck_2068_; 
v_val_2055_ = lean_ctor_get(v___x_2050_, 0);
v_isSharedCheck_2068_ = !lean_is_exclusive(v___x_2050_);
if (v_isSharedCheck_2068_ == 0)
{
v___x_2057_ = v___x_2050_;
v_isShared_2058_ = v_isSharedCheck_2068_;
goto v_resetjp_2056_;
}
else
{
lean_inc(v_val_2055_);
lean_dec(v___x_2050_);
v___x_2057_ = lean_box(0);
v_isShared_2058_ = v_isSharedCheck_2068_;
goto v_resetjp_2056_;
}
v_resetjp_2056_:
{
lean_object* v___x_2060_; 
if (v_isShared_2058_ == 0)
{
lean_ctor_set_tag(v___x_2057_, 5);
v___x_2060_ = v___x_2057_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2067_; 
v_reuseFailAlloc_2067_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2067_, 0, v_val_2055_);
v___x_2060_ = v_reuseFailAlloc_2067_;
goto v_reusejp_2059_;
}
v_reusejp_2059_:
{
lean_object* v___x_2062_; 
if (v_isShared_2047_ == 0)
{
lean_ctor_set(v___x_2046_, 0, v___x_2060_);
v___x_2062_ = v___x_2046_;
goto v_reusejp_2061_;
}
else
{
lean_object* v_reuseFailAlloc_2066_; 
v_reuseFailAlloc_2066_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2066_, 0, v___x_2060_);
lean_ctor_set(v_reuseFailAlloc_2066_, 1, v_snd_2044_);
v___x_2062_ = v_reuseFailAlloc_2066_;
goto v_reusejp_2061_;
}
v_reusejp_2061_:
{
lean_object* v___x_2064_; 
if (v_isShared_2042_ == 0)
{
lean_ctor_set_tag(v___x_2041_, 0);
lean_ctor_set(v___x_2041_, 0, v___x_2062_);
v___x_2064_ = v___x_2041_;
goto v_reusejp_2063_;
}
else
{
lean_object* v_reuseFailAlloc_2065_; 
v_reuseFailAlloc_2065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2065_, 0, v___x_2062_);
v___x_2064_ = v_reuseFailAlloc_2065_;
goto v_reusejp_2063_;
}
v_reusejp_2063_:
{
return v___x_2064_;
}
}
}
}
}
}
}
}
}
}
else
{
lean_object* v___x_2071_; 
v___x_2071_ = l_Lasm_JS_Wire_readString(v_x_1820_, v_o_x27_1832_);
lean_dec(v_o_x27_1832_);
if (lean_obj_tag(v___x_2071_) == 0)
{
lean_object* v_a_2072_; lean_object* v___x_2074_; uint8_t v_isShared_2075_; uint8_t v_isSharedCheck_2080_; 
v_a_2072_ = lean_ctor_get(v___x_2071_, 0);
v_isSharedCheck_2080_ = !lean_is_exclusive(v___x_2071_);
if (v_isSharedCheck_2080_ == 0)
{
v___x_2074_ = v___x_2071_;
v_isShared_2075_ = v_isSharedCheck_2080_;
goto v_resetjp_2073_;
}
else
{
lean_inc(v_a_2072_);
lean_dec(v___x_2071_);
v___x_2074_ = lean_box(0);
v_isShared_2075_ = v_isSharedCheck_2080_;
goto v_resetjp_2073_;
}
v_resetjp_2073_:
{
lean_object* v___x_2077_; 
if (v_isShared_2075_ == 0)
{
lean_ctor_set_tag(v___x_2074_, 18);
v___x_2077_ = v___x_2074_;
goto v_reusejp_2076_;
}
else
{
lean_object* v_reuseFailAlloc_2079_; 
v_reuseFailAlloc_2079_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2079_, 0, v_a_2072_);
v___x_2077_ = v_reuseFailAlloc_2079_;
goto v_reusejp_2076_;
}
v_reusejp_2076_:
{
lean_object* v___x_2078_; 
v___x_2078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2078_, 0, v___x_2077_);
return v___x_2078_;
}
}
}
else
{
lean_object* v_a_2081_; lean_object* v___x_2083_; uint8_t v_isShared_2084_; uint8_t v_isSharedCheck_2098_; 
v_a_2081_ = lean_ctor_get(v___x_2071_, 0);
v_isSharedCheck_2098_ = !lean_is_exclusive(v___x_2071_);
if (v_isSharedCheck_2098_ == 0)
{
v___x_2083_ = v___x_2071_;
v_isShared_2084_ = v_isSharedCheck_2098_;
goto v_resetjp_2082_;
}
else
{
lean_inc(v_a_2081_);
lean_dec(v___x_2071_);
v___x_2083_ = lean_box(0);
v_isShared_2084_ = v_isSharedCheck_2098_;
goto v_resetjp_2082_;
}
v_resetjp_2082_:
{
lean_object* v_fst_2085_; lean_object* v_snd_2086_; lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2097_; 
v_fst_2085_ = lean_ctor_get(v_a_2081_, 0);
v_snd_2086_ = lean_ctor_get(v_a_2081_, 1);
v_isSharedCheck_2097_ = !lean_is_exclusive(v_a_2081_);
if (v_isSharedCheck_2097_ == 0)
{
v___x_2088_ = v_a_2081_;
v_isShared_2089_ = v_isSharedCheck_2097_;
goto v_resetjp_2087_;
}
else
{
lean_inc(v_snd_2086_);
lean_inc(v_fst_2085_);
lean_dec(v_a_2081_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2097_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
lean_object* v___x_2091_; 
if (v_isShared_2084_ == 0)
{
lean_ctor_set_tag(v___x_2083_, 4);
lean_ctor_set(v___x_2083_, 0, v_fst_2085_);
v___x_2091_ = v___x_2083_;
goto v_reusejp_2090_;
}
else
{
lean_object* v_reuseFailAlloc_2096_; 
v_reuseFailAlloc_2096_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2096_, 0, v_fst_2085_);
v___x_2091_ = v_reuseFailAlloc_2096_;
goto v_reusejp_2090_;
}
v_reusejp_2090_:
{
lean_object* v___x_2093_; 
if (v_isShared_2089_ == 0)
{
lean_ctor_set(v___x_2088_, 0, v___x_2091_);
v___x_2093_ = v___x_2088_;
goto v_reusejp_2092_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2095_, 0, v___x_2091_);
lean_ctor_set(v_reuseFailAlloc_2095_, 1, v_snd_2086_);
v___x_2093_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2092_;
}
v_reusejp_2092_:
{
lean_object* v___x_2094_; 
v___x_2094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2094_, 0, v___x_2093_);
return v___x_2094_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2099_; 
v___x_2099_ = l_Lasm_JS_Wire_readU64(v_x_1820_, v_o_x27_1832_);
if (lean_obj_tag(v___x_2099_) == 0)
{
lean_object* v___x_2100_; lean_object* v___x_2101_; 
lean_dec(v_o_x27_1832_);
v___x_2100_ = ((lean_object*)(l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0___closed__0));
v___x_2101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2101_, 0, v___x_2100_);
return v___x_2101_;
}
else
{
lean_object* v_val_2102_; lean_object* v___x_2104_; uint8_t v_isShared_2105_; uint8_t v_isSharedCheck_2115_; 
v_val_2102_ = lean_ctor_get(v___x_2099_, 0);
v_isSharedCheck_2115_ = !lean_is_exclusive(v___x_2099_);
if (v_isSharedCheck_2115_ == 0)
{
v___x_2104_ = v___x_2099_;
v_isShared_2105_ = v_isSharedCheck_2115_;
goto v_resetjp_2103_;
}
else
{
lean_inc(v_val_2102_);
lean_dec(v___x_2099_);
v___x_2104_ = lean_box(0);
v_isShared_2105_ = v_isSharedCheck_2115_;
goto v_resetjp_2103_;
}
v_resetjp_2103_:
{
uint64_t v___x_2106_; double v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2113_; 
v___x_2106_ = lean_unbox_uint64(v_val_2102_);
lean_dec(v_val_2102_);
v___x_2107_ = lean_float_of_bits(v___x_2106_);
v___x_2108_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2108_, 0, v___x_2107_);
v___x_2109_ = lean_unsigned_to_nat(8u);
v___x_2110_ = lean_nat_add(v_o_x27_1832_, v___x_2109_);
lean_dec(v_o_x27_1832_);
v___x_2111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2111_, 0, v___x_2108_);
lean_ctor_set(v___x_2111_, 1, v___x_2110_);
if (v_isShared_2105_ == 0)
{
lean_ctor_set_tag(v___x_2104_, 0);
lean_ctor_set(v___x_2104_, 0, v___x_2111_);
v___x_2113_ = v___x_2104_;
goto v_reusejp_2112_;
}
else
{
lean_object* v_reuseFailAlloc_2114_; 
v_reuseFailAlloc_2114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2114_, 0, v___x_2111_);
v___x_2113_ = v_reuseFailAlloc_2114_;
goto v_reusejp_2112_;
}
v_reusejp_2112_:
{
return v___x_2113_;
}
}
}
}
}
else
{
lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; 
v___x_2116_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_2116_, 0, v___x_1828_);
v___x_2117_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2117_, 0, v___x_2116_);
lean_ctor_set(v___x_2117_, 1, v_o_x27_1832_);
v___x_2118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2118_, 0, v___x_2117_);
return v___x_2118_;
}
}
else
{
lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; 
v___x_2119_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_2119_, 0, v___x_1837_);
v___x_2120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2120_, 0, v___x_2119_);
lean_ctor_set(v___x_2120_, 1, v_o_x27_1832_);
v___x_2121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2121_, 0, v___x_2120_);
return v___x_2121_;
}
}
else
{
lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; 
v___x_2122_ = lean_box(1);
v___x_2123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2123_, 0, v___x_2122_);
lean_ctor_set(v___x_2123_, 1, v_o_x27_1832_);
v___x_2124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2124_, 0, v___x_2123_);
return v___x_2124_;
}
}
else
{
lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; 
v___x_2125_ = lean_box(0);
v___x_2126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2126_, 0, v___x_2125_);
lean_ctor_set(v___x_2126_, 1, v_o_x27_1832_);
v___x_2127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2127_, 0, v___x_2126_);
return v___x_2127_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readItems___at___00Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0_spec__2(lean_object* v_fuel_2128_, lean_object* v_b_2129_, lean_object* v_x_2130_, lean_object* v_x_2131_, lean_object* v_x_2132_){
_start:
{
lean_object* v_zero_2134_; uint8_t v_isZero_2135_; 
v_zero_2134_ = lean_unsigned_to_nat(0u);
v_isZero_2135_ = lean_nat_dec_eq(v_x_2130_, v_zero_2134_);
if (v_isZero_2135_ == 1)
{
lean_object* v___x_2136_; lean_object* v___x_2137_; 
lean_dec(v_x_2130_);
v___x_2136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2136_, 0, v_x_2132_);
lean_ctor_set(v___x_2136_, 1, v_x_2131_);
v___x_2137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2137_, 0, v___x_2136_);
return v___x_2137_;
}
else
{
lean_object* v_one_2138_; lean_object* v_n_2139_; lean_object* v___x_2140_; 
v_one_2138_ = lean_unsigned_to_nat(1u);
v_n_2139_ = lean_nat_sub(v_x_2130_, v_one_2138_);
lean_dec(v_x_2130_);
v___x_2140_ = l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0(v_fuel_2128_, v_b_2129_, v_x_2131_);
lean_dec(v_x_2131_);
if (lean_obj_tag(v___x_2140_) == 0)
{
lean_object* v_a_2141_; lean_object* v_fst_2142_; lean_object* v_snd_2143_; lean_object* v___x_2144_; 
v_a_2141_ = lean_ctor_get(v___x_2140_, 0);
lean_inc(v_a_2141_);
lean_dec_ref_known(v___x_2140_, 1);
v_fst_2142_ = lean_ctor_get(v_a_2141_, 0);
lean_inc(v_fst_2142_);
v_snd_2143_ = lean_ctor_get(v_a_2141_, 1);
lean_inc(v_snd_2143_);
lean_dec(v_a_2141_);
v___x_2144_ = lean_array_push(v_x_2132_, v_fst_2142_);
v_x_2130_ = v_n_2139_;
v_x_2131_ = v_snd_2143_;
v_x_2132_ = v___x_2144_;
goto _start;
}
else
{
lean_object* v_a_2146_; lean_object* v___x_2148_; uint8_t v_isShared_2149_; uint8_t v_isSharedCheck_2153_; 
lean_dec(v_n_2139_);
lean_dec_ref(v_x_2132_);
v_a_2146_ = lean_ctor_get(v___x_2140_, 0);
v_isSharedCheck_2153_ = !lean_is_exclusive(v___x_2140_);
if (v_isSharedCheck_2153_ == 0)
{
v___x_2148_ = v___x_2140_;
v_isShared_2149_ = v_isSharedCheck_2153_;
goto v_resetjp_2147_;
}
else
{
lean_inc(v_a_2146_);
lean_dec(v___x_2140_);
v___x_2148_ = lean_box(0);
v_isShared_2149_ = v_isSharedCheck_2153_;
goto v_resetjp_2147_;
}
v_resetjp_2147_:
{
lean_object* v___x_2151_; 
if (v_isShared_2149_ == 0)
{
v___x_2151_ = v___x_2148_;
goto v_reusejp_2150_;
}
else
{
lean_object* v_reuseFailAlloc_2152_; 
v_reuseFailAlloc_2152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2152_, 0, v_a_2146_);
v___x_2151_ = v_reuseFailAlloc_2152_;
goto v_reusejp_2150_;
}
v_reusejp_2150_:
{
return v___x_2151_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readItems___at___00Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0_spec__2___boxed(lean_object* v_fuel_2154_, lean_object* v_b_2155_, lean_object* v_x_2156_, lean_object* v_x_2157_, lean_object* v_x_2158_, lean_object* v___y_2159_){
_start:
{
lean_object* v_res_2160_; 
v_res_2160_ = l_Lasm_JS_Wire_readItems___at___00Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0_spec__2(v_fuel_2154_, v_b_2155_, v_x_2156_, v_x_2157_, v_x_2158_);
lean_dec_ref(v_b_2155_);
lean_dec(v_fuel_2154_);
return v_res_2160_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readFields___at___00Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0_spec__1___boxed(lean_object* v_fuel_2161_, lean_object* v_b_2162_, lean_object* v_x_2163_, lean_object* v_x_2164_, lean_object* v_x_2165_, lean_object* v___y_2166_){
_start:
{
lean_object* v_res_2167_; 
v_res_2167_ = l_Lasm_JS_Wire_readFields___at___00Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0_spec__1(v_fuel_2161_, v_b_2162_, v_x_2163_, v_x_2164_, v_x_2165_);
lean_dec_ref(v_b_2162_);
lean_dec(v_fuel_2161_);
return v_res_2167_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0___boxed(lean_object* v_x_2168_, lean_object* v_x_2169_, lean_object* v_x_2170_, lean_object* v___y_2171_){
_start:
{
lean_object* v_res_2172_; 
v_res_2172_ = l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0(v_x_2168_, v_x_2169_, v_x_2170_);
lean_dec(v_x_2170_);
lean_dec_ref(v_x_2169_);
lean_dec(v_x_2168_);
return v_res_2172_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object* v_b_2175_){
_start:
{
lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; 
v___x_2177_ = lean_byte_array_size(v_b_2175_);
v___x_2178_ = lean_unsigned_to_nat(0u);
v___x_2179_ = l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0(v___x_2177_, v_b_2175_, v___x_2178_);
if (lean_obj_tag(v___x_2179_) == 0)
{
lean_object* v_a_2180_; lean_object* v___x_2182_; uint8_t v_isShared_2183_; uint8_t v_isSharedCheck_2194_; 
v_a_2180_ = lean_ctor_get(v___x_2179_, 0);
v_isSharedCheck_2194_ = !lean_is_exclusive(v___x_2179_);
if (v_isSharedCheck_2194_ == 0)
{
v___x_2182_ = v___x_2179_;
v_isShared_2183_ = v_isSharedCheck_2194_;
goto v_resetjp_2181_;
}
else
{
lean_inc(v_a_2180_);
lean_dec(v___x_2179_);
v___x_2182_ = lean_box(0);
v_isShared_2183_ = v_isSharedCheck_2194_;
goto v_resetjp_2181_;
}
v_resetjp_2181_:
{
lean_object* v_fst_2184_; lean_object* v_snd_2185_; uint8_t v___x_2186_; 
v_fst_2184_ = lean_ctor_get(v_a_2180_, 0);
lean_inc(v_fst_2184_);
v_snd_2185_ = lean_ctor_get(v_a_2180_, 1);
lean_inc(v_snd_2185_);
lean_dec(v_a_2180_);
v___x_2186_ = lean_nat_dec_eq(v_snd_2185_, v___x_2177_);
lean_dec(v_snd_2185_);
if (v___x_2186_ == 0)
{
lean_object* v___x_2187_; lean_object* v___x_2189_; 
lean_dec(v_fst_2184_);
v___x_2187_ = ((lean_object*)(l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0___closed__0));
if (v_isShared_2183_ == 0)
{
lean_ctor_set_tag(v___x_2182_, 1);
lean_ctor_set(v___x_2182_, 0, v___x_2187_);
v___x_2189_ = v___x_2182_;
goto v_reusejp_2188_;
}
else
{
lean_object* v_reuseFailAlloc_2190_; 
v_reuseFailAlloc_2190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2190_, 0, v___x_2187_);
v___x_2189_ = v_reuseFailAlloc_2190_;
goto v_reusejp_2188_;
}
v_reusejp_2188_:
{
return v___x_2189_;
}
}
else
{
lean_object* v___x_2192_; 
if (v_isShared_2183_ == 0)
{
lean_ctor_set(v___x_2182_, 0, v_fst_2184_);
v___x_2192_ = v___x_2182_;
goto v_reusejp_2191_;
}
else
{
lean_object* v_reuseFailAlloc_2193_; 
v_reuseFailAlloc_2193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2193_, 0, v_fst_2184_);
v___x_2192_ = v_reuseFailAlloc_2193_;
goto v_reusejp_2191_;
}
v_reusejp_2191_:
{
return v___x_2192_;
}
}
}
}
else
{
lean_object* v_a_2195_; lean_object* v___x_2197_; uint8_t v_isShared_2198_; uint8_t v_isSharedCheck_2202_; 
v_a_2195_ = lean_ctor_get(v___x_2179_, 0);
v_isSharedCheck_2202_ = !lean_is_exclusive(v___x_2179_);
if (v_isSharedCheck_2202_ == 0)
{
v___x_2197_ = v___x_2179_;
v_isShared_2198_ = v_isSharedCheck_2202_;
goto v_resetjp_2196_;
}
else
{
lean_inc(v_a_2195_);
lean_dec(v___x_2179_);
v___x_2197_ = lean_box(0);
v_isShared_2198_ = v_isSharedCheck_2202_;
goto v_resetjp_2196_;
}
v_resetjp_2196_:
{
lean_object* v___x_2200_; 
if (v_isShared_2198_ == 0)
{
v___x_2200_ = v___x_2197_;
goto v_reusejp_2199_;
}
else
{
lean_object* v_reuseFailAlloc_2201_; 
v_reuseFailAlloc_2201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2201_, 0, v_a_2195_);
v___x_2200_ = v_reuseFailAlloc_2201_;
goto v_reusejp_2199_;
}
v_reusejp_2199_:
{
return v___x_2200_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0___boxed(lean_object* v_b_2203_, lean_object* v___y_2204_){
_start:
{
lean_object* v_res_2205_; 
v_res_2205_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_b_2203_);
lean_dec_ref(v_b_2203_);
return v_res_2205_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_decode(lean_object* v_b_2206_){
_start:
{
lean_object* v___x_2208_; 
v___x_2208_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_b_2206_);
return v___x_2208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_decode___boxed(lean_object* v_b_2209_, lean_object* v_a_2210_){
_start:
{
lean_object* v_res_2211_; 
v_res_2211_ = l_Lasm_JS_Wire_decode(v_b_2209_);
lean_dec_ref(v_b_2209_);
return v_res_2211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_encodeIO(lean_object* v_d_2212_){
_start:
{
lean_object* v___x_2214_; 
v___x_2214_ = l_Lasm_JS_Wire_encode(v_d_2212_);
if (lean_obj_tag(v___x_2214_) == 0)
{
lean_object* v_a_2215_; lean_object* v___x_2217_; uint8_t v_isShared_2218_; uint8_t v_isSharedCheck_2223_; 
v_a_2215_ = lean_ctor_get(v___x_2214_, 0);
v_isSharedCheck_2223_ = !lean_is_exclusive(v___x_2214_);
if (v_isSharedCheck_2223_ == 0)
{
v___x_2217_ = v___x_2214_;
v_isShared_2218_ = v_isSharedCheck_2223_;
goto v_resetjp_2216_;
}
else
{
lean_inc(v_a_2215_);
lean_dec(v___x_2214_);
v___x_2217_ = lean_box(0);
v_isShared_2218_ = v_isSharedCheck_2223_;
goto v_resetjp_2216_;
}
v_resetjp_2216_:
{
lean_object* v___x_2220_; 
if (v_isShared_2218_ == 0)
{
lean_ctor_set_tag(v___x_2217_, 18);
v___x_2220_ = v___x_2217_;
goto v_reusejp_2219_;
}
else
{
lean_object* v_reuseFailAlloc_2222_; 
v_reuseFailAlloc_2222_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2222_, 0, v_a_2215_);
v___x_2220_ = v_reuseFailAlloc_2222_;
goto v_reusejp_2219_;
}
v_reusejp_2219_:
{
lean_object* v___x_2221_; 
v___x_2221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2221_, 0, v___x_2220_);
return v___x_2221_;
}
}
}
else
{
lean_object* v_a_2224_; lean_object* v___x_2226_; uint8_t v_isShared_2227_; uint8_t v_isSharedCheck_2231_; 
v_a_2224_ = lean_ctor_get(v___x_2214_, 0);
v_isSharedCheck_2231_ = !lean_is_exclusive(v___x_2214_);
if (v_isSharedCheck_2231_ == 0)
{
v___x_2226_ = v___x_2214_;
v_isShared_2227_ = v_isSharedCheck_2231_;
goto v_resetjp_2225_;
}
else
{
lean_inc(v_a_2224_);
lean_dec(v___x_2214_);
v___x_2226_ = lean_box(0);
v_isShared_2227_ = v_isSharedCheck_2231_;
goto v_resetjp_2225_;
}
v_resetjp_2225_:
{
lean_object* v___x_2229_; 
if (v_isShared_2227_ == 0)
{
lean_ctor_set_tag(v___x_2226_, 0);
v___x_2229_ = v___x_2226_;
goto v_reusejp_2228_;
}
else
{
lean_object* v_reuseFailAlloc_2230_; 
v_reuseFailAlloc_2230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2230_, 0, v_a_2224_);
v___x_2229_ = v_reuseFailAlloc_2230_;
goto v_reusejp_2228_;
}
v_reusejp_2228_:
{
return v___x_2229_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_encodeIO___boxed(lean_object* v_d_2232_, lean_object* v_a_2233_){
_start:
{
lean_object* v_res_2234_; 
v_res_2234_ = l_Lasm_JS_Wire_encodeIO(v_d_2232_);
lean_dec(v_d_2232_);
return v_res_2234_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallKeep___boxed(lean_object* v_op_2241_, lean_object* v_handle_2242_, lean_object* v_arg_2243_, lean_object* v_input_2244_, lean_object* v_keep_2245_, lean_object* v_a_00___x40___internal___hyg_2246_){
_start:
{
uint32_t v_op_boxed_2247_; uint32_t v_handle_boxed_2248_; uint64_t v_arg_boxed_2249_; lean_object* v_res_2250_; 
v_op_boxed_2247_ = lean_unbox_uint32(v_op_2241_);
lean_dec(v_op_2241_);
v_handle_boxed_2248_ = lean_unbox_uint32(v_handle_2242_);
lean_dec(v_handle_2242_);
v_arg_boxed_2249_ = lean_unbox_uint64(v_arg_2243_);
lean_dec_ref(v_arg_2243_);
v_res_2250_ = lasm_js_call(v_op_boxed_2247_, v_handle_boxed_2248_, v_arg_boxed_2249_, v_input_2244_, v_keep_2245_);
lean_dec(v_keep_2245_);
lean_dec_ref(v_input_2244_);
return v_res_2250_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(uint32_t v_op_2251_, uint32_t v_handle_2252_, uint64_t v_arg_2253_, lean_object* v_input_2254_){
_start:
{
lean_object* v___x_2256_; lean_object* v___x_2257_; 
v___x_2256_ = lean_box(0);
v___x_2257_ = lasm_js_call(v_op_2251_, v_handle_2252_, v_arg_2253_, v_input_2254_, v___x_2256_);
return v___x_2257_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCall___boxed(lean_object* v_op_2258_, lean_object* v_handle_2259_, lean_object* v_arg_2260_, lean_object* v_input_2261_, lean_object* v_a_2262_){
_start:
{
uint32_t v_op_boxed_2263_; uint32_t v_handle_boxed_2264_; uint64_t v_arg_boxed_2265_; lean_object* v_res_2266_; 
v_op_boxed_2263_ = lean_unbox_uint32(v_op_2258_);
lean_dec(v_op_2258_);
v_handle_boxed_2264_ = lean_unbox_uint32(v_handle_2259_);
lean_dec(v_handle_2259_);
v_arg_boxed_2265_ = lean_unbox_uint64(v_arg_2260_);
lean_dec_ref(v_arg_2260_);
v_res_2266_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v_op_boxed_2263_, v_handle_boxed_2264_, v_arg_boxed_2265_, v_input_2261_);
lean_dec_ref(v_input_2261_);
return v_res_2266_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t v_op_2267_, uint64_t v_arg_2268_, lean_object* v_payload_2269_, uint32_t v_handle_2270_){
_start:
{
lean_object* v___x_2272_; 
v___x_2272_ = l_Lasm_JS_Wire_encodeIO(v_payload_2269_);
if (lean_obj_tag(v___x_2272_) == 0)
{
lean_object* v_a_2273_; lean_object* v___x_2274_; 
v_a_2273_ = lean_ctor_get(v___x_2272_, 0);
lean_inc(v_a_2273_);
lean_dec_ref_known(v___x_2272_, 1);
v___x_2274_ = lasm_js_call(v_op_2267_, v_handle_2270_, v_arg_2268_, v_a_2273_, v_payload_2269_);
lean_dec(v_a_2273_);
return v___x_2274_;
}
else
{
return v___x_2272_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith___boxed(lean_object* v_op_2275_, lean_object* v_arg_2276_, lean_object* v_payload_2277_, lean_object* v_handle_2278_, lean_object* v_a_2279_){
_start:
{
uint32_t v_op_boxed_2280_; uint64_t v_arg_boxed_2281_; uint32_t v_handle_boxed_2282_; lean_object* v_res_2283_; 
v_op_boxed_2280_ = lean_unbox_uint32(v_op_2275_);
lean_dec(v_op_2275_);
v_arg_boxed_2281_ = lean_unbox_uint64(v_arg_2276_);
lean_dec_ref(v_arg_2276_);
v_handle_boxed_2282_ = lean_unbox_uint32(v_handle_2278_);
lean_dec(v_handle_2278_);
v_res_2283_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v_op_boxed_2280_, v_arg_boxed_2281_, v_payload_2277_, v_handle_boxed_2282_);
lean_dec(v_payload_2277_);
return v_res_2283_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallInto___boxed(lean_object* v_p_2291_, lean_object* v_op_2292_, lean_object* v_handle_2293_, lean_object* v_arg_2294_, lean_object* v_input_2295_, lean_object* v_keep_2296_, lean_object* v_a_00___x40___internal___hyg_2297_){
_start:
{
uint32_t v_op_boxed_2298_; uint32_t v_handle_boxed_2299_; uint64_t v_arg_boxed_2300_; lean_object* v_res_2301_; 
v_op_boxed_2298_ = lean_unbox_uint32(v_op_2292_);
lean_dec(v_op_2292_);
v_handle_boxed_2299_ = lean_unbox_uint32(v_handle_2293_);
lean_dec(v_handle_2293_);
v_arg_boxed_2300_ = lean_unbox_uint64(v_arg_2294_);
lean_dec_ref(v_arg_2294_);
v_res_2301_ = lasm_js_call_into(v_p_2291_, v_op_boxed_2298_, v_handle_boxed_2299_, v_arg_boxed_2300_, v_input_2295_, v_keep_2296_);
lean_dec(v_keep_2296_);
lean_dec_ref(v_input_2295_);
lean_dec(v_p_2291_);
return v_res_2301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_ctorIdx(uint8_t v_x_2302_){
_start:
{
if (v_x_2302_ == 0)
{
lean_object* v___x_2303_; 
v___x_2303_ = lean_unsigned_to_nat(0u);
return v___x_2303_;
}
else
{
lean_object* v___x_2304_; 
v___x_2304_ = lean_unsigned_to_nat(1u);
return v___x_2304_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_ctorIdx___boxed(lean_object* v_x_2305_){
_start:
{
uint8_t v_x_boxed_2306_; lean_object* v_res_2307_; 
v_x_boxed_2306_ = lean_unbox(v_x_2305_);
v_res_2307_ = l_Lasm_JS_Mode_ctorIdx(v_x_boxed_2306_);
return v_res_2307_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_ctorElim___redArg(lean_object* v_k_2308_){
_start:
{
lean_inc(v_k_2308_);
return v_k_2308_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_ctorElim___redArg___boxed(lean_object* v_k_2309_){
_start:
{
lean_object* v_res_2310_; 
v_res_2310_ = l_Lasm_JS_Mode_ctorElim___redArg(v_k_2309_);
lean_dec(v_k_2309_);
return v_res_2310_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_ctorElim(lean_object* v_motive_2311_, lean_object* v_ctorIdx_2312_, uint8_t v_t_2313_, lean_object* v_h_2314_, lean_object* v_k_2315_){
_start:
{
lean_inc(v_k_2315_);
return v_k_2315_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_ctorElim___boxed(lean_object* v_motive_2316_, lean_object* v_ctorIdx_2317_, lean_object* v_t_2318_, lean_object* v_h_2319_, lean_object* v_k_2320_){
_start:
{
uint8_t v_t_boxed_2321_; lean_object* v_res_2322_; 
v_t_boxed_2321_ = lean_unbox(v_t_2318_);
v_res_2322_ = l_Lasm_JS_Mode_ctorElim(v_motive_2316_, v_ctorIdx_2317_, v_t_boxed_2321_, v_h_2319_, v_k_2320_);
lean_dec(v_k_2320_);
lean_dec(v_ctorIdx_2317_);
return v_res_2322_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_data_elim___redArg(lean_object* v_data_2323_){
_start:
{
lean_inc(v_data_2323_);
return v_data_2323_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_data_elim___redArg___boxed(lean_object* v_data_2324_){
_start:
{
lean_object* v_res_2325_; 
v_res_2325_ = l_Lasm_JS_Mode_data_elim___redArg(v_data_2324_);
lean_dec(v_data_2324_);
return v_res_2325_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_data_elim(lean_object* v_motive_2326_, uint8_t v_t_2327_, lean_object* v_h_2328_, lean_object* v_data_2329_){
_start:
{
lean_inc(v_data_2329_);
return v_data_2329_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_data_elim___boxed(lean_object* v_motive_2330_, lean_object* v_t_2331_, lean_object* v_h_2332_, lean_object* v_data_2333_){
_start:
{
uint8_t v_t_boxed_2334_; lean_object* v_res_2335_; 
v_t_boxed_2334_ = lean_unbox(v_t_2331_);
v_res_2335_ = l_Lasm_JS_Mode_data_elim(v_motive_2330_, v_t_boxed_2334_, v_h_2332_, v_data_2333_);
lean_dec(v_data_2333_);
return v_res_2335_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_reference_elim___redArg(lean_object* v_reference_2336_){
_start:
{
lean_inc(v_reference_2336_);
return v_reference_2336_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_reference_elim___redArg___boxed(lean_object* v_reference_2337_){
_start:
{
lean_object* v_res_2338_; 
v_res_2338_ = l_Lasm_JS_Mode_reference_elim___redArg(v_reference_2337_);
lean_dec(v_reference_2337_);
return v_res_2338_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_reference_elim(lean_object* v_motive_2339_, uint8_t v_t_2340_, lean_object* v_h_2341_, lean_object* v_reference_2342_){
_start:
{
lean_inc(v_reference_2342_);
return v_reference_2342_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_reference_elim___boxed(lean_object* v_motive_2343_, lean_object* v_t_2344_, lean_object* v_h_2345_, lean_object* v_reference_2346_){
_start:
{
uint8_t v_t_boxed_2347_; lean_object* v_res_2348_; 
v_t_boxed_2347_ = lean_unbox(v_t_2344_);
v_res_2348_ = l_Lasm_JS_Mode_reference_elim(v_motive_2343_, v_t_boxed_2347_, v_h_2345_, v_reference_2346_);
lean_dec(v_reference_2346_);
return v_res_2348_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_instBEqMode_beq(uint8_t v_x_2349_, uint8_t v_y_2350_){
_start:
{
lean_object* v___x_2351_; lean_object* v___x_2352_; uint8_t v___x_2353_; 
v___x_2351_ = l_Lasm_JS_Mode_ctorIdx(v_x_2349_);
v___x_2352_ = l_Lasm_JS_Mode_ctorIdx(v_y_2350_);
v___x_2353_ = lean_nat_dec_eq(v___x_2351_, v___x_2352_);
lean_dec(v___x_2352_);
lean_dec(v___x_2351_);
return v___x_2353_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBEqMode_beq___boxed(lean_object* v_x_2354_, lean_object* v_y_2355_){
_start:
{
uint8_t v_x_21__boxed_2356_; uint8_t v_y_22__boxed_2357_; uint8_t v_res_2358_; lean_object* v_r_2359_; 
v_x_21__boxed_2356_ = lean_unbox(v_x_2354_);
v_y_22__boxed_2357_ = lean_unbox(v_y_2355_);
v_res_2358_ = l_Lasm_JS_instBEqMode_beq(v_x_21__boxed_2356_, v_y_22__boxed_2357_);
v_r_2359_ = lean_box(v_res_2358_);
return v_r_2359_;
}
}
static uint8_t _init_l_Lasm_JS_instInhabitedMode_default(void){
_start:
{
uint8_t v___x_2362_; 
v___x_2362_ = 0;
return v___x_2362_;
}
}
static uint8_t _init_l_Lasm_JS_instInhabitedMode(void){
_start:
{
uint8_t v___x_2363_; 
v___x_2363_ = 0;
return v___x_2363_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___redArg___closed__7(void){
_start:
{
lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; 
v___x_2371_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__6));
v___x_2372_ = lean_unsigned_to_nat(46u);
v___x_2373_ = lean_unsigned_to_nat(193u);
v___x_2374_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__5));
v___x_2375_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__4));
v___x_2376_ = l_mkPanicMessageWithDecl(v___x_2375_, v___x_2374_, v___x_2373_, v___x_2372_, v___x_2371_);
return v___x_2376_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___redArg(lean_object* v_inst_2378_, lean_object* v_context_2379_, lean_object* v_d_2380_){
_start:
{
lean_object* v___y_2383_; lean_object* v___y_2384_; lean_object* v_fromJS_2388_; lean_object* v_typeName_2389_; lean_object* v___x_2390_; 
v_fromJS_2388_ = lean_ctor_get(v_inst_2378_, 0);
lean_inc_ref(v_fromJS_2388_);
v_typeName_2389_ = lean_ctor_get(v_inst_2378_, 1);
lean_inc_ref(v_typeName_2389_);
lean_dec_ref(v_inst_2378_);
lean_inc(v_d_2380_);
v___x_2390_ = lean_apply_1(v_fromJS_2388_, v_d_2380_);
if (lean_obj_tag(v___x_2390_) == 0)
{
lean_object* v_a_2391_; lean_object* v_received_2393_; 
v_a_2391_ = lean_ctor_get(v___x_2390_, 0);
lean_inc(v_a_2391_);
lean_dec_ref_known(v___x_2390_, 1);
if (lean_obj_tag(v_d_2380_) == 9)
{
lean_object* v_value_2412_; lean_object* v_description_2413_; lean_object* v___x_2414_; uint8_t v___x_2415_; 
v_value_2412_ = lean_ctor_get(v_d_2380_, 0);
v_description_2413_ = lean_ctor_get(v_d_2380_, 1);
v___x_2414_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
v___x_2415_ = lean_string_dec_eq(v_description_2413_, v___x_2414_);
if (v___x_2415_ == 0)
{
goto v___jp_2410_;
}
else
{
lean_object* v___x_2417_; uint8_t v_isShared_2418_; uint8_t v_isSharedCheck_2432_; 
lean_inc(v_value_2412_);
v_isSharedCheck_2432_ = !lean_is_exclusive(v_d_2380_);
if (v_isSharedCheck_2432_ == 0)
{
lean_object* v_unused_2433_; lean_object* v_unused_2434_; 
v_unused_2433_ = lean_ctor_get(v_d_2380_, 1);
lean_dec(v_unused_2433_);
v_unused_2434_ = lean_ctor_get(v_d_2380_, 0);
lean_dec(v_unused_2434_);
v___x_2417_ = v_d_2380_;
v_isShared_2418_ = v_isSharedCheck_2432_;
goto v_resetjp_2416_;
}
else
{
lean_dec(v_d_2380_);
v___x_2417_ = lean_box(0);
v_isShared_2418_ = v_isSharedCheck_2432_;
goto v_resetjp_2416_;
}
v_resetjp_2416_:
{
uint32_t v___x_2419_; uint64_t v___x_2420_; lean_object* v___x_2422_; 
v___x_2419_ = 206;
v___x_2420_ = 0ULL;
lean_inc(v_value_2412_);
if (v_isShared_2418_ == 0)
{
lean_ctor_set(v___x_2417_, 1, v___x_2414_);
v___x_2422_ = v___x_2417_;
goto v_reusejp_2421_;
}
else
{
lean_object* v_reuseFailAlloc_2431_; 
v_reuseFailAlloc_2431_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2431_, 0, v_value_2412_);
lean_ctor_set(v_reuseFailAlloc_2431_, 1, v___x_2414_);
v___x_2422_ = v_reuseFailAlloc_2431_;
goto v_reusejp_2421_;
}
v_reusejp_2421_:
{
uint32_t v___x_2423_; lean_object* v___x_2424_; 
v___x_2423_ = lasm_js_value_handle(v_value_2412_);
lean_dec(v_value_2412_);
v___x_2424_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2419_, v___x_2420_, v___x_2422_, v___x_2423_);
lean_dec_ref(v___x_2422_);
if (lean_obj_tag(v___x_2424_) == 0)
{
lean_object* v_a_2425_; uint8_t v___x_2426_; 
v_a_2425_ = lean_ctor_get(v___x_2424_, 0);
lean_inc(v_a_2425_);
lean_dec_ref_known(v___x_2424_, 1);
v___x_2426_ = lean_string_validate_utf8(v_a_2425_);
if (v___x_2426_ == 0)
{
lean_object* v___x_2427_; lean_object* v___x_2428_; 
lean_dec(v_a_2425_);
v___x_2427_ = lean_obj_once(&l_Lasm_JS_decodeAs___redArg___closed__7, &l_Lasm_JS_decodeAs___redArg___closed__7_once, _init_l_Lasm_JS_decodeAs___redArg___closed__7);
v___x_2428_ = l_panic___redArg(v___x_2414_, v___x_2427_);
v_received_2393_ = v___x_2428_;
goto v___jp_2392_;
}
else
{
lean_object* v___x_2429_; 
v___x_2429_ = lean_string_from_utf8_unchecked(v_a_2425_);
v_received_2393_ = v___x_2429_;
goto v___jp_2392_;
}
}
else
{
lean_object* v___x_2430_; 
lean_dec_ref_known(v___x_2424_, 1);
v___x_2430_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__8));
v_received_2393_ = v___x_2430_;
goto v___jp_2392_;
}
}
}
}
}
else
{
goto v___jp_2410_;
}
v___jp_2392_:
{
lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; uint8_t v___x_2404_; 
v___x_2394_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__0));
v___x_2395_ = lean_string_append(v___x_2394_, v_context_2379_);
v___x_2396_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__1));
v___x_2397_ = lean_string_append(v___x_2395_, v___x_2396_);
v___x_2398_ = lean_string_append(v___x_2397_, v_typeName_2389_);
lean_dec_ref(v_typeName_2389_);
v___x_2399_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__2));
v___x_2400_ = lean_string_append(v___x_2398_, v___x_2399_);
v___x_2401_ = lean_string_append(v___x_2400_, v_received_2393_);
lean_dec_ref(v_received_2393_);
v___x_2402_ = lean_string_utf8_byte_size(v_a_2391_);
v___x_2403_ = lean_unsigned_to_nat(0u);
v___x_2404_ = lean_nat_dec_eq(v___x_2402_, v___x_2403_);
if (v___x_2404_ == 0)
{
lean_object* v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; 
v___x_2405_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__3));
v___x_2406_ = lean_string_append(v___x_2405_, v_a_2391_);
lean_dec(v_a_2391_);
v___x_2407_ = ((lean_object*)(l_Lasm_JS_Wire_pushLength___closed__5));
v___x_2408_ = lean_string_append(v___x_2406_, v___x_2407_);
v___y_2383_ = v___x_2401_;
v___y_2384_ = v___x_2408_;
goto v___jp_2382_;
}
else
{
lean_object* v___x_2409_; 
lean_dec(v_a_2391_);
v___x_2409_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
v___y_2383_ = v___x_2401_;
v___y_2384_ = v___x_2409_;
goto v___jp_2382_;
}
}
v___jp_2410_:
{
lean_object* v___x_2411_; 
v___x_2411_ = l_Lasm_JS_Data_describe(v_d_2380_);
v_received_2393_ = v___x_2411_;
goto v___jp_2392_;
}
}
else
{
lean_object* v_a_2435_; lean_object* v___x_2437_; uint8_t v_isShared_2438_; uint8_t v_isSharedCheck_2442_; 
lean_dec_ref(v_typeName_2389_);
lean_dec(v_d_2380_);
v_a_2435_ = lean_ctor_get(v___x_2390_, 0);
v_isSharedCheck_2442_ = !lean_is_exclusive(v___x_2390_);
if (v_isSharedCheck_2442_ == 0)
{
v___x_2437_ = v___x_2390_;
v_isShared_2438_ = v_isSharedCheck_2442_;
goto v_resetjp_2436_;
}
else
{
lean_inc(v_a_2435_);
lean_dec(v___x_2390_);
v___x_2437_ = lean_box(0);
v_isShared_2438_ = v_isSharedCheck_2442_;
goto v_resetjp_2436_;
}
v_resetjp_2436_:
{
lean_object* v___x_2440_; 
if (v_isShared_2438_ == 0)
{
lean_ctor_set_tag(v___x_2437_, 0);
v___x_2440_ = v___x_2437_;
goto v_reusejp_2439_;
}
else
{
lean_object* v_reuseFailAlloc_2441_; 
v_reuseFailAlloc_2441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2441_, 0, v_a_2435_);
v___x_2440_ = v_reuseFailAlloc_2441_;
goto v_reusejp_2439_;
}
v_reusejp_2439_:
{
return v___x_2440_;
}
}
}
v___jp_2382_:
{
lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; 
v___x_2385_ = lean_string_append(v___y_2383_, v___y_2384_);
lean_dec_ref(v___y_2384_);
v___x_2386_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2386_, 0, v___x_2385_);
v___x_2387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2387_, 0, v___x_2386_);
return v___x_2387_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___redArg___boxed(lean_object* v_inst_2443_, lean_object* v_context_2444_, lean_object* v_d_2445_, lean_object* v_a_2446_){
_start:
{
lean_object* v_res_2447_; 
v_res_2447_ = l_Lasm_JS_decodeAs___redArg(v_inst_2443_, v_context_2444_, v_d_2445_);
lean_dec_ref(v_context_2444_);
return v_res_2447_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs(lean_object* v_00_u03b1_2448_, lean_object* v_inst_2449_, lean_object* v_context_2450_, lean_object* v_d_2451_){
_start:
{
lean_object* v___x_2453_; 
v___x_2453_ = l_Lasm_JS_decodeAs___redArg(v_inst_2449_, v_context_2450_, v_d_2451_);
return v___x_2453_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___boxed(lean_object* v_00_u03b1_2454_, lean_object* v_inst_2455_, lean_object* v_context_2456_, lean_object* v_d_2457_, lean_object* v_a_2458_){
_start:
{
lean_object* v_res_2459_; 
v_res_2459_ = l_Lasm_JS_decodeAs(v_00_u03b1_2454_, v_inst_2455_, v_context_2456_, v_d_2457_);
lean_dec_ref(v_context_2456_);
return v_res_2459_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSData___lam__0(lean_object* v_a_2462_){
_start:
{
lean_object* v___x_2463_; 
v___x_2463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2463_, 0, v_a_2462_);
return v___x_2463_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSValue___lam__0(lean_object* v_v_2471_){
_start:
{
lean_object* v___x_2472_; lean_object* v___x_2473_; 
v___x_2472_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
v___x_2473_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2473_, 0, v_v_2471_);
lean_ctor_set(v___x_2473_, 1, v___x_2472_);
return v___x_2473_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSValue___lam__0(lean_object* v_x_2478_){
_start:
{
if (lean_obj_tag(v_x_2478_) == 9)
{
lean_object* v_value_2479_; lean_object* v___x_2480_; 
v_value_2479_ = lean_ctor_get(v_x_2478_, 0);
lean_inc(v_value_2479_);
v___x_2480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2480_, 0, v_value_2479_);
return v___x_2480_;
}
else
{
lean_object* v___x_2481_; 
v___x_2481_ = ((lean_object*)(l_Lasm_JS_instFromJSValue___lam__0___closed__0));
return v___x_2481_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSValue___lam__0___boxed(lean_object* v_x_2482_){
_start:
{
lean_object* v_res_2483_; 
v_res_2483_ = l_Lasm_JS_instFromJSValue___lam__0(v_x_2482_);
lean_dec(v_x_2482_);
return v_res_2483_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object* v_s_2491_){
_start:
{
lean_object* v___x_2492_; 
v___x_2492_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2492_, 0, v_s_2491_);
return v___x_2492_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSString___lam__0(lean_object* v_x_2497_){
_start:
{
if (lean_obj_tag(v_x_2497_) == 4)
{
lean_object* v_s_2498_; lean_object* v___x_2500_; uint8_t v_isShared_2501_; uint8_t v_isSharedCheck_2505_; 
v_s_2498_ = lean_ctor_get(v_x_2497_, 0);
v_isSharedCheck_2505_ = !lean_is_exclusive(v_x_2497_);
if (v_isSharedCheck_2505_ == 0)
{
v___x_2500_ = v_x_2497_;
v_isShared_2501_ = v_isSharedCheck_2505_;
goto v_resetjp_2499_;
}
else
{
lean_inc(v_s_2498_);
lean_dec(v_x_2497_);
v___x_2500_ = lean_box(0);
v_isShared_2501_ = v_isSharedCheck_2505_;
goto v_resetjp_2499_;
}
v_resetjp_2499_:
{
lean_object* v___x_2503_; 
if (v_isShared_2501_ == 0)
{
lean_ctor_set_tag(v___x_2500_, 1);
v___x_2503_ = v___x_2500_;
goto v_reusejp_2502_;
}
else
{
lean_object* v_reuseFailAlloc_2504_; 
v_reuseFailAlloc_2504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2504_, 0, v_s_2498_);
v___x_2503_ = v_reuseFailAlloc_2504_;
goto v_reusejp_2502_;
}
v_reusejp_2502_:
{
return v___x_2503_;
}
}
}
else
{
lean_object* v___x_2506_; 
lean_dec(v_x_2497_);
v___x_2506_ = ((lean_object*)(l_Lasm_JS_instFromJSString___lam__0___closed__0));
return v___x_2506_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSBool___lam__0(uint8_t v_b_2514_){
_start:
{
lean_object* v___x_2515_; 
v___x_2515_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_2515_, 0, v_b_2514_);
return v___x_2515_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object* v_b_2516_){
_start:
{
uint8_t v_b_boxed_2517_; lean_object* v_res_2518_; 
v_b_boxed_2517_ = lean_unbox(v_b_2516_);
v_res_2518_ = l_Lasm_JS_instToJSBool___lam__0(v_b_boxed_2517_);
return v_res_2518_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSBool___lam__0(lean_object* v_x_2523_){
_start:
{
if (lean_obj_tag(v_x_2523_) == 2)
{
uint8_t v_b_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; 
v_b_2524_ = lean_ctor_get_uint8(v_x_2523_, 0);
v___x_2525_ = lean_box(v_b_2524_);
v___x_2526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2526_, 0, v___x_2525_);
return v___x_2526_;
}
else
{
lean_object* v___x_2527_; 
v___x_2527_ = ((lean_object*)(l_Lasm_JS_instFromJSBool___lam__0___closed__0));
return v___x_2527_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSBool___lam__0___boxed(lean_object* v_x_2528_){
_start:
{
lean_object* v_res_2529_; 
v_res_2529_ = l_Lasm_JS_instFromJSBool___lam__0(v_x_2528_);
lean_dec(v_x_2528_);
return v_res_2529_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSFloat___lam__0(double v_n_2537_){
_start:
{
lean_object* v___x_2538_; 
v___x_2538_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2538_, 0, v_n_2537_);
return v___x_2538_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSFloat___lam__0___boxed(lean_object* v_n_2539_){
_start:
{
double v_n_boxed_2540_; lean_object* v_res_2541_; 
v_n_boxed_2540_ = lean_unbox_float(v_n_2539_);
lean_dec_ref(v_n_2539_);
v_res_2541_ = l_Lasm_JS_instToJSFloat___lam__0(v_n_boxed_2540_);
return v_res_2541_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSFloat___lam__0(lean_object* v_x_2546_){
_start:
{
if (lean_obj_tag(v_x_2546_) == 3)
{
double v_n_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; 
v_n_2547_ = lean_ctor_get_float(v_x_2546_, 0);
v___x_2548_ = lean_box_float(v_n_2547_);
v___x_2549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2549_, 0, v___x_2548_);
return v___x_2549_;
}
else
{
lean_object* v___x_2550_; 
v___x_2550_ = ((lean_object*)(l_Lasm_JS_instFromJSFloat___lam__0___closed__0));
return v___x_2550_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSFloat___lam__0___boxed(lean_object* v_x_2551_){
_start:
{
lean_object* v_res_2552_; 
v_res_2552_ = l_Lasm_JS_instFromJSFloat___lam__0(v_x_2551_);
lean_dec(v_x_2551_);
return v_res_2552_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUnit___lam__0(lean_object* v_x_2560_){
_start:
{
lean_object* v___x_2561_; 
v___x_2561_ = lean_box(0);
return v___x_2561_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSUnit___lam__0(lean_object* v_x_2566_){
_start:
{
lean_object* v___x_2567_; 
v___x_2567_ = ((lean_object*)(l_Lasm_JS_instFromJSUnit___lam__0___closed__0));
return v___x_2567_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSUnit___lam__0___boxed(lean_object* v_x_2568_){
_start:
{
lean_object* v_res_2569_; 
v_res_2569_ = l_Lasm_JS_instFromJSUnit___lam__0(v_x_2568_);
lean_dec(v_x_2568_);
return v_res_2569_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSByteArray___lam__0(lean_object* v_b_2577_){
_start:
{
lean_object* v___x_2578_; 
v___x_2578_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2578_, 0, v_b_2577_);
return v___x_2578_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSByteArray___lam__0(lean_object* v_x_2583_){
_start:
{
if (lean_obj_tag(v_x_2583_) == 6)
{
lean_object* v_b_2584_; lean_object* v___x_2586_; uint8_t v_isShared_2587_; uint8_t v_isSharedCheck_2591_; 
v_b_2584_ = lean_ctor_get(v_x_2583_, 0);
v_isSharedCheck_2591_ = !lean_is_exclusive(v_x_2583_);
if (v_isSharedCheck_2591_ == 0)
{
v___x_2586_ = v_x_2583_;
v_isShared_2587_ = v_isSharedCheck_2591_;
goto v_resetjp_2585_;
}
else
{
lean_inc(v_b_2584_);
lean_dec(v_x_2583_);
v___x_2586_ = lean_box(0);
v_isShared_2587_ = v_isSharedCheck_2591_;
goto v_resetjp_2585_;
}
v_resetjp_2585_:
{
lean_object* v___x_2589_; 
if (v_isShared_2587_ == 0)
{
lean_ctor_set_tag(v___x_2586_, 1);
v___x_2589_ = v___x_2586_;
goto v_reusejp_2588_;
}
else
{
lean_object* v_reuseFailAlloc_2590_; 
v_reuseFailAlloc_2590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2590_, 0, v_b_2584_);
v___x_2589_ = v_reuseFailAlloc_2590_;
goto v_reusejp_2588_;
}
v_reusejp_2588_:
{
return v___x_2589_;
}
}
}
else
{
lean_object* v___x_2592_; 
lean_dec(v_x_2583_);
v___x_2592_ = ((lean_object*)(l_Lasm_JS_instFromJSByteArray___lam__0___closed__0));
return v___x_2592_;
}
}
}
static lean_object* _init_l___private_Lasm_JS_Core_0__Lasm_JS_maxSafe(void){
_start:
{
lean_object* v___x_2600_; 
v___x_2600_ = lean_cstr_to_nat("9007199254740991");
return v___x_2600_;
}
}
static double _init_l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f___closed__0(void){
_start:
{
lean_object* v___x_2601_; double v___x_2602_; 
v___x_2601_ = lean_cstr_to_nat("9007199254740991");
v___x_2602_ = lean_float_of_nat(v___x_2601_);
return v___x_2602_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double v_n_2603_){
_start:
{
uint8_t v___y_2605_; uint8_t v___x_2626_; 
v___x_2626_ = lean_float_isnan(v_n_2603_);
if (v___x_2626_ == 0)
{
uint8_t v___x_2627_; 
v___x_2627_ = lean_float_isinf(v_n_2603_);
v___y_2605_ = v___x_2627_;
goto v___jp_2604_;
}
else
{
v___y_2605_ = v___x_2626_;
goto v___jp_2604_;
}
v___jp_2604_:
{
if (v___y_2605_ == 0)
{
double v___x_2606_; uint8_t v___x_2607_; 
v___x_2606_ = floor(v_n_2603_);
v___x_2607_ = lean_float_beq(v___x_2606_, v_n_2603_);
if (v___x_2607_ == 0)
{
lean_object* v___x_2608_; 
v___x_2608_ = lean_box(0);
return v___x_2608_;
}
else
{
double v___x_2609_; double v___x_2610_; uint8_t v___x_2611_; 
v___x_2609_ = lean_float_once(&l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f___closed__0);
v___x_2610_ = fabs(v_n_2603_);
v___x_2611_ = lean_float_decLt(v___x_2609_, v___x_2610_);
if (v___x_2611_ == 0)
{
double v___x_2612_; uint8_t v___x_2613_; 
v___x_2612_ = lean_float_once(&l_Lasm_JS_Data_describe___closed__5, &l_Lasm_JS_Data_describe___closed__5_once, _init_l_Lasm_JS_Data_describe___closed__5);
v___x_2613_ = lean_float_decLt(v_n_2603_, v___x_2612_);
if (v___x_2613_ == 0)
{
uint64_t v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; 
v___x_2614_ = lean_float_to_uint64(v_n_2603_);
v___x_2615_ = lean_uint64_to_nat(v___x_2614_);
v___x_2616_ = lean_nat_to_int(v___x_2615_);
v___x_2617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2617_, 0, v___x_2616_);
return v___x_2617_;
}
else
{
double v___x_2618_; uint64_t v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; 
v___x_2618_ = lean_float_negate(v_n_2603_);
v___x_2619_ = lean_float_to_uint64(v___x_2618_);
v___x_2620_ = lean_uint64_to_nat(v___x_2619_);
v___x_2621_ = lean_nat_to_int(v___x_2620_);
v___x_2622_ = lean_int_neg(v___x_2621_);
lean_dec(v___x_2621_);
v___x_2623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2623_, 0, v___x_2622_);
return v___x_2623_;
}
}
else
{
lean_object* v___x_2624_; 
v___x_2624_ = lean_box(0);
return v___x_2624_;
}
}
}
else
{
lean_object* v___x_2625_; 
v___x_2625_ = lean_box(0);
return v___x_2625_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f___boxed(lean_object* v_n_2628_){
_start:
{
double v_n_boxed_2629_; lean_object* v_res_2630_; 
v_n_boxed_2629_ = lean_unbox_float(v_n_2628_);
lean_dec_ref(v_n_2628_);
v_res_2630_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_boxed_2629_);
return v_res_2630_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSInt___lam__0(lean_object* v_i_2631_){
_start:
{
lean_object* v___x_2632_; lean_object* v___x_2633_; uint8_t v___x_2634_; 
v___x_2632_ = lean_nat_abs(v_i_2631_);
v___x_2633_ = lean_cstr_to_nat("9007199254740991");
v___x_2634_ = lean_nat_dec_le(v___x_2632_, v___x_2633_);
lean_dec(v___x_2632_);
if (v___x_2634_ == 0)
{
lean_object* v___x_2635_; 
v___x_2635_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2635_, 0, v_i_2631_);
return v___x_2635_;
}
else
{
double v___x_2636_; lean_object* v___x_2637_; 
v___x_2636_ = l_Float_ofInt(v_i_2631_);
lean_dec(v_i_2631_);
v___x_2637_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2637_, 0, v___x_2636_);
return v___x_2637_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSInt___lam__0(lean_object* v_x_2645_){
_start:
{
switch(lean_obj_tag(v_x_2645_))
{
case 3:
{
double v_n_2646_; lean_object* v___x_2647_; 
v_n_2646_ = lean_ctor_get_float(v_x_2645_, 0);
lean_dec_ref_known(v_x_2645_, 0);
v___x_2647_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_2646_);
if (lean_obj_tag(v___x_2647_) == 0)
{
lean_object* v___x_2648_; 
v___x_2648_ = ((lean_object*)(l_Lasm_JS_instFromJSInt___lam__0___closed__1));
return v___x_2648_;
}
else
{
lean_object* v_val_2649_; lean_object* v___x_2651_; uint8_t v_isShared_2652_; uint8_t v_isSharedCheck_2656_; 
v_val_2649_ = lean_ctor_get(v___x_2647_, 0);
v_isSharedCheck_2656_ = !lean_is_exclusive(v___x_2647_);
if (v_isSharedCheck_2656_ == 0)
{
v___x_2651_ = v___x_2647_;
v_isShared_2652_ = v_isSharedCheck_2656_;
goto v_resetjp_2650_;
}
else
{
lean_inc(v_val_2649_);
lean_dec(v___x_2647_);
v___x_2651_ = lean_box(0);
v_isShared_2652_ = v_isSharedCheck_2656_;
goto v_resetjp_2650_;
}
v_resetjp_2650_:
{
lean_object* v___x_2654_; 
if (v_isShared_2652_ == 0)
{
v___x_2654_ = v___x_2651_;
goto v_reusejp_2653_;
}
else
{
lean_object* v_reuseFailAlloc_2655_; 
v_reuseFailAlloc_2655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2655_, 0, v_val_2649_);
v___x_2654_ = v_reuseFailAlloc_2655_;
goto v_reusejp_2653_;
}
v_reusejp_2653_:
{
return v___x_2654_;
}
}
}
}
case 5:
{
lean_object* v_i_2657_; lean_object* v___x_2659_; uint8_t v_isShared_2660_; uint8_t v_isSharedCheck_2664_; 
v_i_2657_ = lean_ctor_get(v_x_2645_, 0);
v_isSharedCheck_2664_ = !lean_is_exclusive(v_x_2645_);
if (v_isSharedCheck_2664_ == 0)
{
v___x_2659_ = v_x_2645_;
v_isShared_2660_ = v_isSharedCheck_2664_;
goto v_resetjp_2658_;
}
else
{
lean_inc(v_i_2657_);
lean_dec(v_x_2645_);
v___x_2659_ = lean_box(0);
v_isShared_2660_ = v_isSharedCheck_2664_;
goto v_resetjp_2658_;
}
v_resetjp_2658_:
{
lean_object* v___x_2662_; 
if (v_isShared_2660_ == 0)
{
lean_ctor_set_tag(v___x_2659_, 1);
v___x_2662_ = v___x_2659_;
goto v_reusejp_2661_;
}
else
{
lean_object* v_reuseFailAlloc_2663_; 
v_reuseFailAlloc_2663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2663_, 0, v_i_2657_);
v___x_2662_ = v_reuseFailAlloc_2663_;
goto v_reusejp_2661_;
}
v_reusejp_2661_:
{
return v___x_2662_;
}
}
}
default: 
{
lean_object* v___x_2665_; 
lean_dec(v_x_2645_);
v___x_2665_ = ((lean_object*)(l_Lasm_JS_instFromJSInt___lam__0___closed__2));
return v___x_2665_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSNat___lam__0(lean_object* v_n_2673_){
_start:
{
lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; uint8_t v___x_2677_; 
v___x_2674_ = lean_nat_to_int(v_n_2673_);
v___x_2675_ = lean_nat_abs(v___x_2674_);
v___x_2676_ = lean_cstr_to_nat("9007199254740991");
v___x_2677_ = lean_nat_dec_le(v___x_2675_, v___x_2676_);
lean_dec(v___x_2675_);
if (v___x_2677_ == 0)
{
lean_object* v___x_2678_; 
v___x_2678_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2678_, 0, v___x_2674_);
return v___x_2678_;
}
else
{
double v___x_2679_; lean_object* v___x_2680_; 
v___x_2679_ = l_Float_ofInt(v___x_2674_);
lean_dec(v___x_2674_);
v___x_2680_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2680_, 0, v___x_2679_);
return v___x_2680_;
}
}
}
static lean_object* _init_l_Lasm_JS_instFromJSNat___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2683_; lean_object* v___x_2684_; 
v___x_2683_ = lean_unsigned_to_nat(0u);
v___x_2684_ = lean_nat_to_int(v___x_2683_);
return v___x_2684_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSNat___lam__0(lean_object* v_d_2692_){
_start:
{
lean_object* v_a_2694_; 
switch(lean_obj_tag(v_d_2692_))
{
case 3:
{
double v_n_2700_; lean_object* v___x_2701_; 
v_n_2700_ = lean_ctor_get_float(v_d_2692_, 0);
lean_dec_ref_known(v_d_2692_, 0);
v___x_2701_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_2700_);
if (lean_obj_tag(v___x_2701_) == 0)
{
lean_object* v___x_2702_; 
v___x_2702_ = ((lean_object*)(l_Lasm_JS_instFromJSNat___lam__0___closed__3));
return v___x_2702_;
}
else
{
lean_object* v_val_2703_; 
v_val_2703_ = lean_ctor_get(v___x_2701_, 0);
lean_inc(v_val_2703_);
lean_dec_ref_known(v___x_2701_, 1);
v_a_2694_ = v_val_2703_;
goto v___jp_2693_;
}
}
case 5:
{
lean_object* v_i_2704_; 
v_i_2704_ = lean_ctor_get(v_d_2692_, 0);
lean_inc(v_i_2704_);
lean_dec_ref_known(v_d_2692_, 1);
v_a_2694_ = v_i_2704_;
goto v___jp_2693_;
}
default: 
{
lean_object* v___x_2705_; 
lean_dec(v_d_2692_);
v___x_2705_ = ((lean_object*)(l_Lasm_JS_instFromJSNat___lam__0___closed__4));
return v___x_2705_;
}
}
v___jp_2693_:
{
lean_object* v___x_2695_; uint8_t v___x_2696_; 
v___x_2695_ = lean_obj_once(&l_Lasm_JS_instFromJSNat___lam__0___closed__0, &l_Lasm_JS_instFromJSNat___lam__0___closed__0_once, _init_l_Lasm_JS_instFromJSNat___lam__0___closed__0);
v___x_2696_ = lean_int_dec_le(v___x_2695_, v_a_2694_);
if (v___x_2696_ == 0)
{
lean_object* v___x_2697_; 
lean_dec(v_a_2694_);
v___x_2697_ = ((lean_object*)(l_Lasm_JS_instFromJSNat___lam__0___closed__2));
return v___x_2697_;
}
else
{
lean_object* v___x_2698_; lean_object* v___x_2699_; 
v___x_2698_ = l_Int_toNat(v_a_2694_);
lean_dec(v_a_2694_);
v___x_2699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2699_, 0, v___x_2698_);
return v___x_2699_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0(lean_object* v_bound_2718_, lean_object* v_name_2719_, lean_object* v_f_2720_, lean_object* v_d_2721_){
_start:
{
lean_object* v_a_2723_; 
switch(lean_obj_tag(v_d_2721_))
{
case 3:
{
double v_n_2734_; lean_object* v___x_2735_; 
v_n_2734_ = lean_ctor_get_float(v_d_2721_, 0);
lean_dec_ref_known(v_d_2721_, 0);
v___x_2735_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_2734_);
if (lean_obj_tag(v___x_2735_) == 0)
{
lean_object* v___x_2736_; 
lean_dec(v_f_2720_);
v___x_2736_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0___closed__2));
return v___x_2736_;
}
else
{
lean_object* v_val_2737_; 
v_val_2737_ = lean_ctor_get(v___x_2735_, 0);
lean_inc(v_val_2737_);
lean_dec_ref_known(v___x_2735_, 1);
v_a_2723_ = v_val_2737_;
goto v___jp_2722_;
}
}
case 5:
{
lean_object* v_i_2738_; 
v_i_2738_ = lean_ctor_get(v_d_2721_, 0);
lean_inc(v_i_2738_);
lean_dec_ref_known(v_d_2721_, 1);
v_a_2723_ = v_i_2738_;
goto v___jp_2722_;
}
default: 
{
lean_object* v___x_2739_; 
lean_dec(v_d_2721_);
lean_dec(v_f_2720_);
v___x_2739_ = ((lean_object*)(l_Lasm_JS_instFromJSValue___lam__0___closed__0));
return v___x_2739_;
}
}
v___jp_2722_:
{
lean_object* v___x_2724_; uint8_t v___x_2725_; 
v___x_2724_ = lean_obj_once(&l_Lasm_JS_instFromJSNat___lam__0___closed__0, &l_Lasm_JS_instFromJSNat___lam__0___closed__0_once, _init_l_Lasm_JS_instFromJSNat___lam__0___closed__0);
v___x_2725_ = lean_int_dec_le(v___x_2724_, v_a_2723_);
if (v___x_2725_ == 0)
{
lean_object* v___x_2726_; 
lean_dec(v_a_2723_);
lean_dec(v_f_2720_);
v___x_2726_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0___closed__0));
return v___x_2726_;
}
else
{
lean_object* v___x_2727_; uint8_t v___x_2728_; 
v___x_2727_ = l_Int_toNat(v_a_2723_);
lean_dec(v_a_2723_);
v___x_2728_ = lean_nat_dec_lt(v___x_2727_, v_bound_2718_);
if (v___x_2728_ == 0)
{
lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; 
lean_dec(v___x_2727_);
lean_dec(v_f_2720_);
v___x_2729_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0___closed__1));
v___x_2730_ = lean_string_append(v___x_2729_, v_name_2719_);
v___x_2731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2731_, 0, v___x_2730_);
return v___x_2731_;
}
else
{
lean_object* v___x_2732_; lean_object* v___x_2733_; 
v___x_2732_ = lean_apply_1(v_f_2720_, v___x_2727_);
v___x_2733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2733_, 0, v___x_2732_);
return v___x_2733_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0___boxed(lean_object* v_bound_2740_, lean_object* v_name_2741_, lean_object* v_f_2742_, lean_object* v_d_2743_){
_start:
{
lean_object* v_res_2744_; 
v_res_2744_ = l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0(v_bound_2740_, v_name_2741_, v_f_2742_, v_d_2743_);
lean_dec_ref(v_name_2741_);
lean_dec(v_bound_2740_);
return v_res_2744_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg(lean_object* v_name_2745_, lean_object* v_bound_2746_, lean_object* v_f_2747_){
_start:
{
lean_object* v___f_2748_; uint8_t v___x_2749_; lean_object* v___x_2750_; 
lean_inc_ref(v_name_2745_);
v___f_2748_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_2748_, 0, v_bound_2746_);
lean_closure_set(v___f_2748_, 1, v_name_2745_);
lean_closure_set(v___f_2748_, 2, v_f_2747_);
v___x_2749_ = 0;
v___x_2750_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2750_, 0, v___f_2748_);
lean_ctor_set(v___x_2750_, 1, v_name_2745_);
lean_ctor_set_uint8(v___x_2750_, sizeof(void*)*2, v___x_2749_);
return v___x_2750_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded(lean_object* v_00_u03b1_2751_, lean_object* v_name_2752_, lean_object* v_bound_2753_, lean_object* v_f_2754_){
_start:
{
lean_object* v___x_2755_; 
v___x_2755_ = l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg(v_name_2752_, v_bound_2753_, v_f_2754_);
return v___x_2755_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt8___lam__0(uint8_t v_n_2756_){
_start:
{
lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; uint8_t v___x_2761_; 
v___x_2757_ = lean_uint8_to_nat(v_n_2756_);
v___x_2758_ = lean_nat_to_int(v___x_2757_);
v___x_2759_ = lean_nat_abs(v___x_2758_);
v___x_2760_ = lean_cstr_to_nat("9007199254740991");
v___x_2761_ = lean_nat_dec_le(v___x_2759_, v___x_2760_);
lean_dec(v___x_2759_);
if (v___x_2761_ == 0)
{
lean_object* v___x_2762_; 
v___x_2762_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2762_, 0, v___x_2758_);
return v___x_2762_;
}
else
{
double v___x_2763_; lean_object* v___x_2764_; 
v___x_2763_ = l_Float_ofInt(v___x_2758_);
lean_dec(v___x_2758_);
v___x_2764_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2764_, 0, v___x_2763_);
return v___x_2764_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt8___lam__0___boxed(lean_object* v_n_2765_){
_start:
{
uint8_t v_n_boxed_2766_; lean_object* v_res_2767_; 
v_n_boxed_2766_ = lean_unbox(v_n_2765_);
v_res_2767_ = l_Lasm_JS_instToJSUInt8___lam__0(v_n_boxed_2766_);
return v_res_2767_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt8___closed__2(void){
_start:
{
lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; 
v___x_2772_ = ((lean_object*)(l_Lasm_JS_instFromJSUInt8___closed__1));
v___x_2773_ = lean_unsigned_to_nat(256u);
v___x_2774_ = ((lean_object*)(l_Lasm_JS_instFromJSUInt8___closed__0));
v___x_2775_ = l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg(v___x_2774_, v___x_2773_, v___x_2772_);
return v___x_2775_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt8(void){
_start:
{
lean_object* v___x_2776_; 
v___x_2776_ = lean_obj_once(&l_Lasm_JS_instFromJSUInt8___closed__2, &l_Lasm_JS_instFromJSUInt8___closed__2_once, _init_l_Lasm_JS_instFromJSUInt8___closed__2);
return v___x_2776_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt16___lam__0(uint16_t v_n_2777_){
_start:
{
lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; uint8_t v___x_2782_; 
v___x_2778_ = lean_uint16_to_nat(v_n_2777_);
v___x_2779_ = lean_nat_to_int(v___x_2778_);
v___x_2780_ = lean_nat_abs(v___x_2779_);
v___x_2781_ = lean_cstr_to_nat("9007199254740991");
v___x_2782_ = lean_nat_dec_le(v___x_2780_, v___x_2781_);
lean_dec(v___x_2780_);
if (v___x_2782_ == 0)
{
lean_object* v___x_2783_; 
v___x_2783_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2783_, 0, v___x_2779_);
return v___x_2783_;
}
else
{
double v___x_2784_; lean_object* v___x_2785_; 
v___x_2784_ = l_Float_ofInt(v___x_2779_);
lean_dec(v___x_2779_);
v___x_2785_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2785_, 0, v___x_2784_);
return v___x_2785_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt16___lam__0___boxed(lean_object* v_n_2786_){
_start:
{
uint16_t v_n_boxed_2787_; lean_object* v_res_2788_; 
v_n_boxed_2787_ = lean_unbox(v_n_2786_);
v_res_2788_ = l_Lasm_JS_instToJSUInt16___lam__0(v_n_boxed_2787_);
return v_res_2788_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt16___closed__2(void){
_start:
{
lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; 
v___x_2793_ = ((lean_object*)(l_Lasm_JS_instFromJSUInt16___closed__1));
v___x_2794_ = lean_unsigned_to_nat(65536u);
v___x_2795_ = ((lean_object*)(l_Lasm_JS_instFromJSUInt16___closed__0));
v___x_2796_ = l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg(v___x_2795_, v___x_2794_, v___x_2793_);
return v___x_2796_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt16(void){
_start:
{
lean_object* v___x_2797_; 
v___x_2797_ = lean_obj_once(&l_Lasm_JS_instFromJSUInt16___closed__2, &l_Lasm_JS_instFromJSUInt16___closed__2_once, _init_l_Lasm_JS_instFromJSUInt16___closed__2);
return v___x_2797_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt32___lam__0(uint32_t v_n_2798_){
_start:
{
lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; uint8_t v___x_2803_; 
v___x_2799_ = lean_uint32_to_nat(v_n_2798_);
v___x_2800_ = lean_nat_to_int(v___x_2799_);
v___x_2801_ = lean_nat_abs(v___x_2800_);
v___x_2802_ = lean_cstr_to_nat("9007199254740991");
v___x_2803_ = lean_nat_dec_le(v___x_2801_, v___x_2802_);
lean_dec(v___x_2801_);
if (v___x_2803_ == 0)
{
lean_object* v___x_2804_; 
v___x_2804_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2804_, 0, v___x_2800_);
return v___x_2804_;
}
else
{
double v___x_2805_; lean_object* v___x_2806_; 
v___x_2805_ = l_Float_ofInt(v___x_2800_);
lean_dec(v___x_2800_);
v___x_2806_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2806_, 0, v___x_2805_);
return v___x_2806_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt32___lam__0___boxed(lean_object* v_n_2807_){
_start:
{
uint32_t v_n_boxed_2808_; lean_object* v_res_2809_; 
v_n_boxed_2808_ = lean_unbox_uint32(v_n_2807_);
lean_dec(v_n_2807_);
v_res_2809_ = l_Lasm_JS_instToJSUInt32___lam__0(v_n_boxed_2808_);
return v_res_2809_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt32___closed__2(void){
_start:
{
lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; 
v___x_2814_ = ((lean_object*)(l_Lasm_JS_instFromJSUInt32___closed__1));
v___x_2815_ = lean_cstr_to_nat("4294967296");
v___x_2816_ = ((lean_object*)(l_Lasm_JS_instFromJSUInt32___closed__0));
v___x_2817_ = l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg(v___x_2816_, v___x_2815_, v___x_2814_);
return v___x_2817_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt32(void){
_start:
{
lean_object* v___x_2818_; 
v___x_2818_ = lean_obj_once(&l_Lasm_JS_instFromJSUInt32___closed__2, &l_Lasm_JS_instFromJSUInt32___closed__2_once, _init_l_Lasm_JS_instFromJSUInt32___closed__2);
return v___x_2818_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt64___lam__0(uint64_t v_n_2819_){
_start:
{
lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; uint8_t v___x_2824_; 
v___x_2820_ = lean_uint64_to_nat(v_n_2819_);
v___x_2821_ = lean_nat_to_int(v___x_2820_);
v___x_2822_ = lean_nat_abs(v___x_2821_);
v___x_2823_ = lean_cstr_to_nat("9007199254740991");
v___x_2824_ = lean_nat_dec_le(v___x_2822_, v___x_2823_);
lean_dec(v___x_2822_);
if (v___x_2824_ == 0)
{
lean_object* v___x_2825_; 
v___x_2825_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2825_, 0, v___x_2821_);
return v___x_2825_;
}
else
{
double v___x_2826_; lean_object* v___x_2827_; 
v___x_2826_ = l_Float_ofInt(v___x_2821_);
lean_dec(v___x_2821_);
v___x_2827_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2827_, 0, v___x_2826_);
return v___x_2827_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt64___lam__0___boxed(lean_object* v_n_2828_){
_start:
{
uint64_t v_n_boxed_2829_; lean_object* v_res_2830_; 
v_n_boxed_2829_ = lean_unbox_uint64(v_n_2828_);
lean_dec_ref(v_n_2828_);
v_res_2830_ = l_Lasm_JS_instToJSUInt64___lam__0(v_n_boxed_2829_);
return v_res_2830_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt64___closed__1(void){
_start:
{
lean_object* v___x_2834_; 
v___x_2834_ = lean_cstr_to_nat("18446744073709551616");
return v___x_2834_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt64___closed__3(void){
_start:
{
lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; 
v___x_2836_ = ((lean_object*)(l_Lasm_JS_instFromJSUInt64___closed__2));
v___x_2837_ = lean_obj_once(&l_Lasm_JS_instFromJSUInt64___closed__1, &l_Lasm_JS_instFromJSUInt64___closed__1_once, _init_l_Lasm_JS_instFromJSUInt64___closed__1);
v___x_2838_ = ((lean_object*)(l_Lasm_JS_instFromJSUInt64___closed__0));
v___x_2839_ = l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg(v___x_2838_, v___x_2837_, v___x_2836_);
return v___x_2839_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt64(void){
_start:
{
lean_object* v___x_2840_; 
v___x_2840_ = lean_obj_once(&l_Lasm_JS_instFromJSUInt64___closed__3, &l_Lasm_JS_instFromJSUInt64___closed__3_once, _init_l_Lasm_JS_instFromJSUInt64___closed__3);
return v___x_2840_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSArray___redArg___lam__0(lean_object* v_inst_2841_, lean_object* v_x_2842_){
_start:
{
lean_object* v___x_2843_; 
v___x_2843_ = lean_apply_1(v_inst_2841_, v_x_2842_);
return v___x_2843_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSArray___redArg___lam__1(lean_object* v___f_2863_, lean_object* v_xs_2864_){
_start:
{
lean_object* v___x_2865_; size_t v_sz_2866_; size_t v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; 
v___x_2865_ = ((lean_object*)(l_Lasm_JS_instToJSArray___redArg___lam__1___closed__9));
v_sz_2866_ = lean_array_size(v_xs_2864_);
v___x_2867_ = ((size_t)0ULL);
v___x_2868_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2865_, v___f_2863_, v_sz_2866_, v___x_2867_, v_xs_2864_);
v___x_2869_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2869_, 0, v___x_2868_);
return v___x_2869_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSArray___redArg(lean_object* v_inst_2870_){
_start:
{
lean_object* v___f_2871_; lean_object* v___f_2872_; 
v___f_2871_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSArray___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2871_, 0, v_inst_2870_);
v___f_2872_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSArray___redArg___lam__1), 2, 1);
lean_closure_set(v___f_2872_, 0, v___f_2871_);
return v___f_2872_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSArray(lean_object* v_00_u03b1_2873_, lean_object* v_inst_2874_){
_start:
{
lean_object* v___x_2875_; 
v___x_2875_ = l_Lasm_JS_instToJSArray___redArg(v_inst_2874_);
return v___x_2875_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSArray___redArg___lam__0(lean_object* v_fromJS_2876_, lean_object* v_x_2877_){
_start:
{
lean_object* v___x_2878_; 
v___x_2878_ = lean_apply_1(v_fromJS_2876_, v_x_2877_);
return v___x_2878_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSArray___redArg___lam__1(lean_object* v___x_2883_, lean_object* v___f_2884_, lean_object* v_typeName_2885_, lean_object* v_x_2886_){
_start:
{
if (lean_obj_tag(v_x_2886_) == 7)
{
lean_object* v_items_2887_; size_t v_sz_2888_; size_t v___x_2889_; lean_object* v___x_2890_; 
v_items_2887_ = lean_ctor_get(v_x_2886_, 0);
lean_inc_ref(v_items_2887_);
lean_dec_ref_known(v_x_2886_, 1);
v_sz_2888_ = lean_array_size(v_items_2887_);
v___x_2889_ = ((size_t)0ULL);
v___x_2890_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2883_, v___f_2884_, v_sz_2888_, v___x_2889_, v_items_2887_);
if (lean_obj_tag(v___x_2890_) == 0)
{
lean_object* v_a_2891_; lean_object* v___x_2893_; uint8_t v_isShared_2894_; uint8_t v_isSharedCheck_2909_; 
v_a_2891_ = lean_ctor_get(v___x_2890_, 0);
v_isSharedCheck_2909_ = !lean_is_exclusive(v___x_2890_);
if (v_isSharedCheck_2909_ == 0)
{
v___x_2893_ = v___x_2890_;
v_isShared_2894_ = v_isSharedCheck_2909_;
goto v_resetjp_2892_;
}
else
{
lean_inc(v_a_2891_);
lean_dec(v___x_2890_);
v___x_2893_ = lean_box(0);
v_isShared_2894_ = v_isSharedCheck_2909_;
goto v_resetjp_2892_;
}
v_resetjp_2892_:
{
lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; uint8_t v___x_2899_; 
v___x_2895_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__0));
v___x_2896_ = lean_string_append(v___x_2895_, v_typeName_2885_);
v___x_2897_ = lean_string_utf8_byte_size(v_a_2891_);
v___x_2898_ = lean_unsigned_to_nat(0u);
v___x_2899_ = lean_nat_dec_eq(v___x_2897_, v___x_2898_);
if (v___x_2899_ == 0)
{
lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2904_; 
v___x_2900_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__1));
v___x_2901_ = lean_string_append(v___x_2900_, v_a_2891_);
lean_dec(v_a_2891_);
v___x_2902_ = lean_string_append(v___x_2896_, v___x_2901_);
lean_dec_ref(v___x_2901_);
if (v_isShared_2894_ == 0)
{
lean_ctor_set(v___x_2893_, 0, v___x_2902_);
v___x_2904_ = v___x_2893_;
goto v_reusejp_2903_;
}
else
{
lean_object* v_reuseFailAlloc_2905_; 
v_reuseFailAlloc_2905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2905_, 0, v___x_2902_);
v___x_2904_ = v_reuseFailAlloc_2905_;
goto v_reusejp_2903_;
}
v_reusejp_2903_:
{
return v___x_2904_;
}
}
else
{
lean_object* v___x_2907_; 
lean_dec(v_a_2891_);
if (v_isShared_2894_ == 0)
{
lean_ctor_set(v___x_2893_, 0, v___x_2896_);
v___x_2907_ = v___x_2893_;
goto v_reusejp_2906_;
}
else
{
lean_object* v_reuseFailAlloc_2908_; 
v_reuseFailAlloc_2908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2908_, 0, v___x_2896_);
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
return v___x_2890_;
}
}
else
{
lean_object* v___x_2910_; 
lean_dec(v_x_2886_);
lean_dec_ref(v___f_2884_);
lean_dec_ref(v___x_2883_);
v___x_2910_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__2));
return v___x_2910_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSArray___redArg___lam__1___boxed(lean_object* v___x_2911_, lean_object* v___f_2912_, lean_object* v_typeName_2913_, lean_object* v_x_2914_){
_start:
{
lean_object* v_res_2915_; 
v_res_2915_ = l_Lasm_JS_instFromJSArray___redArg___lam__1(v___x_2911_, v___f_2912_, v_typeName_2913_, v_x_2914_);
lean_dec_ref(v_typeName_2913_);
return v_res_2915_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSArray___redArg(lean_object* v_inst_2936_){
_start:
{
lean_object* v___x_2937_; lean_object* v_fromJS_2938_; lean_object* v_typeName_2939_; lean_object* v___x_2941_; uint8_t v_isShared_2942_; uint8_t v_isSharedCheck_2953_; 
v___x_2937_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___closed__9));
v_fromJS_2938_ = lean_ctor_get(v_inst_2936_, 0);
v_typeName_2939_ = lean_ctor_get(v_inst_2936_, 1);
v_isSharedCheck_2953_ = !lean_is_exclusive(v_inst_2936_);
if (v_isSharedCheck_2953_ == 0)
{
v___x_2941_ = v_inst_2936_;
v_isShared_2942_ = v_isSharedCheck_2953_;
goto v_resetjp_2940_;
}
else
{
lean_inc(v_typeName_2939_);
lean_inc(v_fromJS_2938_);
lean_dec(v_inst_2936_);
v___x_2941_ = lean_box(0);
v_isShared_2942_ = v_isSharedCheck_2953_;
goto v_resetjp_2940_;
}
v_resetjp_2940_:
{
lean_object* v___f_2943_; lean_object* v___f_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; uint8_t v___x_2949_; lean_object* v___x_2951_; 
v___f_2943_ = lean_alloc_closure((void*)(l_Lasm_JS_instFromJSArray___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2943_, 0, v_fromJS_2938_);
lean_inc_ref(v_typeName_2939_);
v___f_2944_ = lean_alloc_closure((void*)(l_Lasm_JS_instFromJSArray___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_2944_, 0, v___x_2937_);
lean_closure_set(v___f_2944_, 1, v___f_2943_);
lean_closure_set(v___f_2944_, 2, v_typeName_2939_);
v___x_2945_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___closed__10));
v___x_2946_ = lean_string_append(v___x_2945_, v_typeName_2939_);
lean_dec_ref(v_typeName_2939_);
v___x_2947_ = ((lean_object*)(l_Lasm_JS_Wire_pushLength___closed__5));
v___x_2948_ = lean_string_append(v___x_2946_, v___x_2947_);
v___x_2949_ = 0;
if (v_isShared_2942_ == 0)
{
lean_ctor_set(v___x_2941_, 1, v___x_2948_);
lean_ctor_set(v___x_2941_, 0, v___f_2944_);
v___x_2951_ = v___x_2941_;
goto v_reusejp_2950_;
}
else
{
lean_object* v_reuseFailAlloc_2952_; 
v_reuseFailAlloc_2952_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2952_, 0, v___f_2944_);
lean_ctor_set(v_reuseFailAlloc_2952_, 1, v___x_2948_);
v___x_2951_ = v_reuseFailAlloc_2952_;
goto v_reusejp_2950_;
}
v_reusejp_2950_:
{
lean_ctor_set_uint8(v___x_2951_, sizeof(void*)*2, v___x_2949_);
return v___x_2951_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSArray(lean_object* v_00_u03b1_2954_, lean_object* v_inst_2955_){
_start:
{
lean_object* v___x_2956_; 
v___x_2956_ = l_Lasm_JS_instFromJSArray___redArg(v_inst_2955_);
return v___x_2956_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSList___redArg___lam__1(lean_object* v___f_2957_, lean_object* v_xs_2958_){
_start:
{
lean_object* v___x_2959_; lean_object* v___x_2960_; size_t v_sz_2961_; size_t v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; 
v___x_2959_ = lean_array_mk(v_xs_2958_);
v___x_2960_ = ((lean_object*)(l_Lasm_JS_instToJSArray___redArg___lam__1___closed__9));
v_sz_2961_ = lean_array_size(v___x_2959_);
v___x_2962_ = ((size_t)0ULL);
v___x_2963_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2960_, v___f_2957_, v_sz_2961_, v___x_2962_, v___x_2959_);
v___x_2964_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2964_, 0, v___x_2963_);
return v___x_2964_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSList___redArg(lean_object* v_inst_2965_){
_start:
{
lean_object* v___f_2966_; lean_object* v___f_2967_; 
v___f_2966_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSArray___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2966_, 0, v_inst_2965_);
v___f_2967_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSList___redArg___lam__1), 2, 1);
lean_closure_set(v___f_2967_, 0, v___f_2966_);
return v___f_2967_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSList(lean_object* v_00_u03b1_2968_, lean_object* v_inst_2969_){
_start:
{
lean_object* v___x_2970_; 
v___x_2970_ = l_Lasm_JS_instToJSList___redArg(v_inst_2969_);
return v___x_2970_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSList___redArg___lam__1(lean_object* v___f_2973_, lean_object* v_typeName_2974_, lean_object* v_d_2975_){
_start:
{
lean_object* v___x_2976_; 
v___x_2976_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___closed__9));
if (lean_obj_tag(v_d_2975_) == 7)
{
lean_object* v_items_2977_; size_t v_sz_2978_; size_t v___x_2979_; lean_object* v___x_2980_; 
v_items_2977_ = lean_ctor_get(v_d_2975_, 0);
lean_inc_ref(v_items_2977_);
lean_dec_ref_known(v_d_2975_, 1);
v_sz_2978_ = lean_array_size(v_items_2977_);
v___x_2979_ = ((size_t)0ULL);
v___x_2980_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2976_, v___f_2973_, v_sz_2978_, v___x_2979_, v_items_2977_);
if (lean_obj_tag(v___x_2980_) == 0)
{
lean_object* v_a_2981_; lean_object* v___x_2983_; uint8_t v_isShared_2984_; uint8_t v_isSharedCheck_2999_; 
v_a_2981_ = lean_ctor_get(v___x_2980_, 0);
v_isSharedCheck_2999_ = !lean_is_exclusive(v___x_2980_);
if (v_isSharedCheck_2999_ == 0)
{
v___x_2983_ = v___x_2980_;
v_isShared_2984_ = v_isSharedCheck_2999_;
goto v_resetjp_2982_;
}
else
{
lean_inc(v_a_2981_);
lean_dec(v___x_2980_);
v___x_2983_ = lean_box(0);
v_isShared_2984_ = v_isSharedCheck_2999_;
goto v_resetjp_2982_;
}
v_resetjp_2982_:
{
lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; uint8_t v___x_2989_; 
v___x_2985_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__0));
v___x_2986_ = lean_string_append(v___x_2985_, v_typeName_2974_);
v___x_2987_ = lean_string_utf8_byte_size(v_a_2981_);
v___x_2988_ = lean_unsigned_to_nat(0u);
v___x_2989_ = lean_nat_dec_eq(v___x_2987_, v___x_2988_);
if (v___x_2989_ == 0)
{
lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2994_; 
v___x_2990_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__1));
v___x_2991_ = lean_string_append(v___x_2990_, v_a_2981_);
lean_dec(v_a_2981_);
v___x_2992_ = lean_string_append(v___x_2986_, v___x_2991_);
lean_dec_ref(v___x_2991_);
if (v_isShared_2984_ == 0)
{
lean_ctor_set(v___x_2983_, 0, v___x_2992_);
v___x_2994_ = v___x_2983_;
goto v_reusejp_2993_;
}
else
{
lean_object* v_reuseFailAlloc_2995_; 
v_reuseFailAlloc_2995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2995_, 0, v___x_2992_);
v___x_2994_ = v_reuseFailAlloc_2995_;
goto v_reusejp_2993_;
}
v_reusejp_2993_:
{
return v___x_2994_;
}
}
else
{
lean_object* v___x_2997_; 
lean_dec(v_a_2981_);
if (v_isShared_2984_ == 0)
{
lean_ctor_set(v___x_2983_, 0, v___x_2986_);
v___x_2997_ = v___x_2983_;
goto v_reusejp_2996_;
}
else
{
lean_object* v_reuseFailAlloc_2998_; 
v_reuseFailAlloc_2998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2998_, 0, v___x_2986_);
v___x_2997_ = v_reuseFailAlloc_2998_;
goto v_reusejp_2996_;
}
v_reusejp_2996_:
{
return v___x_2997_;
}
}
}
}
else
{
if (lean_obj_tag(v___x_2980_) == 0)
{
lean_object* v_a_3000_; lean_object* v___x_3002_; uint8_t v_isShared_3003_; uint8_t v_isSharedCheck_3007_; 
v_a_3000_ = lean_ctor_get(v___x_2980_, 0);
v_isSharedCheck_3007_ = !lean_is_exclusive(v___x_2980_);
if (v_isSharedCheck_3007_ == 0)
{
v___x_3002_ = v___x_2980_;
v_isShared_3003_ = v_isSharedCheck_3007_;
goto v_resetjp_3001_;
}
else
{
lean_inc(v_a_3000_);
lean_dec(v___x_2980_);
v___x_3002_ = lean_box(0);
v_isShared_3003_ = v_isSharedCheck_3007_;
goto v_resetjp_3001_;
}
v_resetjp_3001_:
{
lean_object* v___x_3005_; 
if (v_isShared_3003_ == 0)
{
lean_ctor_set_tag(v___x_3002_, 0);
v___x_3005_ = v___x_3002_;
goto v_reusejp_3004_;
}
else
{
lean_object* v_reuseFailAlloc_3006_; 
v_reuseFailAlloc_3006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3006_, 0, v_a_3000_);
v___x_3005_ = v_reuseFailAlloc_3006_;
goto v_reusejp_3004_;
}
v_reusejp_3004_:
{
return v___x_3005_;
}
}
}
else
{
lean_object* v_a_3008_; lean_object* v___x_3010_; uint8_t v_isShared_3011_; uint8_t v_isSharedCheck_3016_; 
v_a_3008_ = lean_ctor_get(v___x_2980_, 0);
v_isSharedCheck_3016_ = !lean_is_exclusive(v___x_2980_);
if (v_isSharedCheck_3016_ == 0)
{
v___x_3010_ = v___x_2980_;
v_isShared_3011_ = v_isSharedCheck_3016_;
goto v_resetjp_3009_;
}
else
{
lean_inc(v_a_3008_);
lean_dec(v___x_2980_);
v___x_3010_ = lean_box(0);
v_isShared_3011_ = v_isSharedCheck_3016_;
goto v_resetjp_3009_;
}
v_resetjp_3009_:
{
lean_object* v___x_3012_; lean_object* v___x_3014_; 
v___x_3012_ = lean_array_to_list(v_a_3008_);
if (v_isShared_3011_ == 0)
{
lean_ctor_set(v___x_3010_, 0, v___x_3012_);
v___x_3014_ = v___x_3010_;
goto v_reusejp_3013_;
}
else
{
lean_object* v_reuseFailAlloc_3015_; 
v_reuseFailAlloc_3015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3015_, 0, v___x_3012_);
v___x_3014_ = v_reuseFailAlloc_3015_;
goto v_reusejp_3013_;
}
v_reusejp_3013_:
{
return v___x_3014_;
}
}
}
}
}
else
{
lean_object* v___x_3017_; 
lean_dec(v_d_2975_);
lean_dec_ref(v___f_2973_);
v___x_3017_ = ((lean_object*)(l_Lasm_JS_instFromJSList___redArg___lam__1___closed__0));
return v___x_3017_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSList___redArg___lam__1___boxed(lean_object* v___f_3018_, lean_object* v_typeName_3019_, lean_object* v_d_3020_){
_start:
{
lean_object* v_res_3021_; 
v_res_3021_ = l_Lasm_JS_instFromJSList___redArg___lam__1(v___f_3018_, v_typeName_3019_, v_d_3020_);
lean_dec_ref(v_typeName_3019_);
return v_res_3021_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSList___redArg(lean_object* v_inst_3023_){
_start:
{
lean_object* v_fromJS_3024_; lean_object* v_typeName_3025_; lean_object* v___x_3027_; uint8_t v_isShared_3028_; uint8_t v_isSharedCheck_3039_; 
v_fromJS_3024_ = lean_ctor_get(v_inst_3023_, 0);
v_typeName_3025_ = lean_ctor_get(v_inst_3023_, 1);
v_isSharedCheck_3039_ = !lean_is_exclusive(v_inst_3023_);
if (v_isSharedCheck_3039_ == 0)
{
v___x_3027_ = v_inst_3023_;
v_isShared_3028_ = v_isSharedCheck_3039_;
goto v_resetjp_3026_;
}
else
{
lean_inc(v_typeName_3025_);
lean_inc(v_fromJS_3024_);
lean_dec(v_inst_3023_);
v___x_3027_ = lean_box(0);
v_isShared_3028_ = v_isSharedCheck_3039_;
goto v_resetjp_3026_;
}
v_resetjp_3026_:
{
lean_object* v___f_3029_; lean_object* v___f_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; uint8_t v___x_3035_; lean_object* v___x_3037_; 
v___f_3029_ = lean_alloc_closure((void*)(l_Lasm_JS_instFromJSArray___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3029_, 0, v_fromJS_3024_);
lean_inc_ref(v_typeName_3025_);
v___f_3030_ = lean_alloc_closure((void*)(l_Lasm_JS_instFromJSList___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_3030_, 0, v___f_3029_);
lean_closure_set(v___f_3030_, 1, v_typeName_3025_);
v___x_3031_ = ((lean_object*)(l_Lasm_JS_instFromJSList___redArg___closed__0));
v___x_3032_ = lean_string_append(v___x_3031_, v_typeName_3025_);
lean_dec_ref(v_typeName_3025_);
v___x_3033_ = ((lean_object*)(l_Lasm_JS_Wire_pushLength___closed__5));
v___x_3034_ = lean_string_append(v___x_3032_, v___x_3033_);
v___x_3035_ = 0;
if (v_isShared_3028_ == 0)
{
lean_ctor_set(v___x_3027_, 1, v___x_3034_);
lean_ctor_set(v___x_3027_, 0, v___f_3030_);
v___x_3037_ = v___x_3027_;
goto v_reusejp_3036_;
}
else
{
lean_object* v_reuseFailAlloc_3038_; 
v_reuseFailAlloc_3038_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_3038_, 0, v___f_3030_);
lean_ctor_set(v_reuseFailAlloc_3038_, 1, v___x_3034_);
v___x_3037_ = v_reuseFailAlloc_3038_;
goto v_reusejp_3036_;
}
v_reusejp_3036_:
{
lean_ctor_set_uint8(v___x_3037_, sizeof(void*)*2, v___x_3035_);
return v___x_3037_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSList(lean_object* v_00_u03b1_3040_, lean_object* v_inst_3041_){
_start:
{
lean_object* v___x_3042_; 
v___x_3042_ = l_Lasm_JS_instFromJSList___redArg(v_inst_3041_);
return v___x_3042_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSOption___redArg___lam__0(lean_object* v_inst_3043_, lean_object* v_x_3044_){
_start:
{
if (lean_obj_tag(v_x_3044_) == 0)
{
lean_object* v___x_3045_; 
lean_dec_ref(v_inst_3043_);
v___x_3045_ = lean_box(1);
return v___x_3045_;
}
else
{
lean_object* v_val_3046_; lean_object* v___x_3047_; 
v_val_3046_ = lean_ctor_get(v_x_3044_, 0);
lean_inc(v_val_3046_);
lean_dec_ref_known(v_x_3044_, 1);
v___x_3047_ = lean_apply_1(v_inst_3043_, v_val_3046_);
return v___x_3047_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSOption___redArg(lean_object* v_inst_3048_){
_start:
{
lean_object* v___f_3049_; 
v___f_3049_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSOption___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3049_, 0, v_inst_3048_);
return v___f_3049_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSOption(lean_object* v_00_u03b1_3050_, lean_object* v_inst_3051_){
_start:
{
lean_object* v___f_3052_; 
v___f_3052_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSOption___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3052_, 0, v_inst_3051_);
return v___f_3052_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSOption___redArg___lam__0(lean_object* v_fromJS_3055_, lean_object* v_x_3056_){
_start:
{
switch(lean_obj_tag(v_x_3056_))
{
case 1:
{
lean_dec_ref(v_fromJS_3055_);
goto v___jp_3057_;
}
case 0:
{
lean_dec_ref(v_fromJS_3055_);
goto v___jp_3057_;
}
default: 
{
lean_object* v___x_3059_; 
v___x_3059_ = lean_apply_1(v_fromJS_3055_, v_x_3056_);
if (lean_obj_tag(v___x_3059_) == 0)
{
lean_object* v_a_3060_; lean_object* v___x_3062_; uint8_t v_isShared_3063_; uint8_t v_isSharedCheck_3067_; 
v_a_3060_ = lean_ctor_get(v___x_3059_, 0);
v_isSharedCheck_3067_ = !lean_is_exclusive(v___x_3059_);
if (v_isSharedCheck_3067_ == 0)
{
v___x_3062_ = v___x_3059_;
v_isShared_3063_ = v_isSharedCheck_3067_;
goto v_resetjp_3061_;
}
else
{
lean_inc(v_a_3060_);
lean_dec(v___x_3059_);
v___x_3062_ = lean_box(0);
v_isShared_3063_ = v_isSharedCheck_3067_;
goto v_resetjp_3061_;
}
v_resetjp_3061_:
{
lean_object* v___x_3065_; 
if (v_isShared_3063_ == 0)
{
v___x_3065_ = v___x_3062_;
goto v_reusejp_3064_;
}
else
{
lean_object* v_reuseFailAlloc_3066_; 
v_reuseFailAlloc_3066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3066_, 0, v_a_3060_);
v___x_3065_ = v_reuseFailAlloc_3066_;
goto v_reusejp_3064_;
}
v_reusejp_3064_:
{
return v___x_3065_;
}
}
}
else
{
lean_object* v_a_3068_; lean_object* v___x_3070_; uint8_t v_isShared_3071_; uint8_t v_isSharedCheck_3076_; 
v_a_3068_ = lean_ctor_get(v___x_3059_, 0);
v_isSharedCheck_3076_ = !lean_is_exclusive(v___x_3059_);
if (v_isSharedCheck_3076_ == 0)
{
v___x_3070_ = v___x_3059_;
v_isShared_3071_ = v_isSharedCheck_3076_;
goto v_resetjp_3069_;
}
else
{
lean_inc(v_a_3068_);
lean_dec(v___x_3059_);
v___x_3070_ = lean_box(0);
v_isShared_3071_ = v_isSharedCheck_3076_;
goto v_resetjp_3069_;
}
v_resetjp_3069_:
{
lean_object* v___x_3072_; lean_object* v___x_3074_; 
v___x_3072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3072_, 0, v_a_3068_);
if (v_isShared_3071_ == 0)
{
lean_ctor_set(v___x_3070_, 0, v___x_3072_);
v___x_3074_ = v___x_3070_;
goto v_reusejp_3073_;
}
else
{
lean_object* v_reuseFailAlloc_3075_; 
v_reuseFailAlloc_3075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3075_, 0, v___x_3072_);
v___x_3074_ = v_reuseFailAlloc_3075_;
goto v_reusejp_3073_;
}
v_reusejp_3073_:
{
return v___x_3074_;
}
}
}
}
}
v___jp_3057_:
{
lean_object* v___x_3058_; 
v___x_3058_ = ((lean_object*)(l_Lasm_JS_instFromJSOption___redArg___lam__0___closed__0));
return v___x_3058_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSOption___redArg(lean_object* v_inst_3078_){
_start:
{
lean_object* v_fromJS_3079_; lean_object* v_typeName_3080_; uint8_t v_mode_3081_; lean_object* v___x_3083_; uint8_t v_isShared_3084_; uint8_t v_isSharedCheck_3093_; 
v_fromJS_3079_ = lean_ctor_get(v_inst_3078_, 0);
v_typeName_3080_ = lean_ctor_get(v_inst_3078_, 1);
v_mode_3081_ = lean_ctor_get_uint8(v_inst_3078_, sizeof(void*)*2);
v_isSharedCheck_3093_ = !lean_is_exclusive(v_inst_3078_);
if (v_isSharedCheck_3093_ == 0)
{
v___x_3083_ = v_inst_3078_;
v_isShared_3084_ = v_isSharedCheck_3093_;
goto v_resetjp_3082_;
}
else
{
lean_inc(v_typeName_3080_);
lean_inc(v_fromJS_3079_);
lean_dec(v_inst_3078_);
v___x_3083_ = lean_box(0);
v_isShared_3084_ = v_isSharedCheck_3093_;
goto v_resetjp_3082_;
}
v_resetjp_3082_:
{
lean_object* v___f_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3091_; 
v___f_3085_ = lean_alloc_closure((void*)(l_Lasm_JS_instFromJSOption___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3085_, 0, v_fromJS_3079_);
v___x_3086_ = ((lean_object*)(l_Lasm_JS_instFromJSOption___redArg___closed__0));
v___x_3087_ = lean_string_append(v___x_3086_, v_typeName_3080_);
lean_dec_ref(v_typeName_3080_);
v___x_3088_ = ((lean_object*)(l_Lasm_JS_Wire_pushLength___closed__5));
v___x_3089_ = lean_string_append(v___x_3087_, v___x_3088_);
if (v_isShared_3084_ == 0)
{
lean_ctor_set(v___x_3083_, 1, v___x_3089_);
lean_ctor_set(v___x_3083_, 0, v___f_3085_);
v___x_3091_ = v___x_3083_;
goto v_reusejp_3090_;
}
else
{
lean_object* v_reuseFailAlloc_3092_; 
v_reuseFailAlloc_3092_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_3092_, 0, v___f_3085_);
lean_ctor_set(v_reuseFailAlloc_3092_, 1, v___x_3089_);
lean_ctor_set_uint8(v_reuseFailAlloc_3092_, sizeof(void*)*2, v_mode_3081_);
v___x_3091_ = v_reuseFailAlloc_3092_;
goto v_reusejp_3090_;
}
v_reusejp_3090_:
{
return v___x_3091_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSOption(lean_object* v_00_u03b1_3094_, lean_object* v_inst_3095_){
_start:
{
lean_object* v___x_3096_; 
v___x_3096_ = l_Lasm_JS_instFromJSOption___redArg(v_inst_3095_);
return v___x_3096_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSProd___redArg___lam__0(lean_object* v_inst_3097_, lean_object* v_inst_3098_, lean_object* v_x_3099_){
_start:
{
lean_object* v_fst_3100_; lean_object* v_snd_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; 
v_fst_3100_ = lean_ctor_get(v_x_3099_, 0);
lean_inc(v_fst_3100_);
v_snd_3101_ = lean_ctor_get(v_x_3099_, 1);
lean_inc(v_snd_3101_);
lean_dec_ref(v_x_3099_);
v___x_3102_ = lean_apply_1(v_inst_3097_, v_fst_3100_);
v___x_3103_ = lean_apply_1(v_inst_3098_, v_snd_3101_);
v___x_3104_ = lean_unsigned_to_nat(2u);
v___x_3105_ = lean_mk_empty_array_with_capacity(v___x_3104_);
v___x_3106_ = lean_array_push(v___x_3105_, v___x_3102_);
v___x_3107_ = lean_array_push(v___x_3106_, v___x_3103_);
v___x_3108_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3108_, 0, v___x_3107_);
return v___x_3108_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSProd___redArg(lean_object* v_inst_3109_, lean_object* v_inst_3110_){
_start:
{
lean_object* v___f_3111_; 
v___f_3111_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSProd___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3111_, 0, v_inst_3109_);
lean_closure_set(v___f_3111_, 1, v_inst_3110_);
return v___f_3111_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSProd(lean_object* v_00_u03b1_3112_, lean_object* v_00_u03b2_3113_, lean_object* v_inst_3114_, lean_object* v_inst_3115_){
_start:
{
lean_object* v___f_3116_; 
v___f_3116_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSProd___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3116_, 0, v_inst_3114_);
lean_closure_set(v___f_3116_, 1, v_inst_3115_);
return v___f_3116_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSProd___redArg___lam__0(lean_object* v_fromJS_3120_, lean_object* v_fromJS_3121_, lean_object* v_x_3122_){
_start:
{
if (lean_obj_tag(v_x_3122_) == 7)
{
lean_object* v_items_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; uint8_t v___x_3128_; 
v_items_3125_ = lean_ctor_get(v_x_3122_, 0);
v___x_3126_ = lean_array_get_size(v_items_3125_);
v___x_3127_ = lean_unsigned_to_nat(2u);
v___x_3128_ = lean_nat_dec_eq(v___x_3126_, v___x_3127_);
if (v___x_3128_ == 0)
{
lean_dec_ref(v_fromJS_3121_);
lean_dec_ref(v_fromJS_3120_);
goto v___jp_3123_;
}
else
{
lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; 
v___x_3129_ = lean_unsigned_to_nat(0u);
v___x_3130_ = lean_array_fget_borrowed(v_items_3125_, v___x_3129_);
lean_inc(v___x_3130_);
v___x_3131_ = lean_apply_1(v_fromJS_3120_, v___x_3130_);
if (lean_obj_tag(v___x_3131_) == 0)
{
lean_object* v_a_3132_; lean_object* v___x_3134_; uint8_t v_isShared_3135_; uint8_t v_isSharedCheck_3139_; 
lean_dec_ref(v_fromJS_3121_);
v_a_3132_ = lean_ctor_get(v___x_3131_, 0);
v_isSharedCheck_3139_ = !lean_is_exclusive(v___x_3131_);
if (v_isSharedCheck_3139_ == 0)
{
v___x_3134_ = v___x_3131_;
v_isShared_3135_ = v_isSharedCheck_3139_;
goto v_resetjp_3133_;
}
else
{
lean_inc(v_a_3132_);
lean_dec(v___x_3131_);
v___x_3134_ = lean_box(0);
v_isShared_3135_ = v_isSharedCheck_3139_;
goto v_resetjp_3133_;
}
v_resetjp_3133_:
{
lean_object* v___x_3137_; 
if (v_isShared_3135_ == 0)
{
v___x_3137_ = v___x_3134_;
goto v_reusejp_3136_;
}
else
{
lean_object* v_reuseFailAlloc_3138_; 
v_reuseFailAlloc_3138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3138_, 0, v_a_3132_);
v___x_3137_ = v_reuseFailAlloc_3138_;
goto v_reusejp_3136_;
}
v_reusejp_3136_:
{
return v___x_3137_;
}
}
}
else
{
lean_object* v_a_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; 
v_a_3140_ = lean_ctor_get(v___x_3131_, 0);
lean_inc(v_a_3140_);
lean_dec_ref_known(v___x_3131_, 1);
v___x_3141_ = lean_unsigned_to_nat(1u);
v___x_3142_ = lean_array_fget_borrowed(v_items_3125_, v___x_3141_);
lean_inc(v___x_3142_);
v___x_3143_ = lean_apply_1(v_fromJS_3121_, v___x_3142_);
if (lean_obj_tag(v___x_3143_) == 0)
{
lean_object* v_a_3144_; lean_object* v___x_3146_; uint8_t v_isShared_3147_; uint8_t v_isSharedCheck_3151_; 
lean_dec(v_a_3140_);
v_a_3144_ = lean_ctor_get(v___x_3143_, 0);
v_isSharedCheck_3151_ = !lean_is_exclusive(v___x_3143_);
if (v_isSharedCheck_3151_ == 0)
{
v___x_3146_ = v___x_3143_;
v_isShared_3147_ = v_isSharedCheck_3151_;
goto v_resetjp_3145_;
}
else
{
lean_inc(v_a_3144_);
lean_dec(v___x_3143_);
v___x_3146_ = lean_box(0);
v_isShared_3147_ = v_isSharedCheck_3151_;
goto v_resetjp_3145_;
}
v_resetjp_3145_:
{
lean_object* v___x_3149_; 
if (v_isShared_3147_ == 0)
{
v___x_3149_ = v___x_3146_;
goto v_reusejp_3148_;
}
else
{
lean_object* v_reuseFailAlloc_3150_; 
v_reuseFailAlloc_3150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3150_, 0, v_a_3144_);
v___x_3149_ = v_reuseFailAlloc_3150_;
goto v_reusejp_3148_;
}
v_reusejp_3148_:
{
return v___x_3149_;
}
}
}
else
{
lean_object* v_a_3152_; lean_object* v___x_3154_; uint8_t v_isShared_3155_; uint8_t v_isSharedCheck_3160_; 
v_a_3152_ = lean_ctor_get(v___x_3143_, 0);
v_isSharedCheck_3160_ = !lean_is_exclusive(v___x_3143_);
if (v_isSharedCheck_3160_ == 0)
{
v___x_3154_ = v___x_3143_;
v_isShared_3155_ = v_isSharedCheck_3160_;
goto v_resetjp_3153_;
}
else
{
lean_inc(v_a_3152_);
lean_dec(v___x_3143_);
v___x_3154_ = lean_box(0);
v_isShared_3155_ = v_isSharedCheck_3160_;
goto v_resetjp_3153_;
}
v_resetjp_3153_:
{
lean_object* v___x_3156_; lean_object* v___x_3158_; 
v___x_3156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3156_, 0, v_a_3140_);
lean_ctor_set(v___x_3156_, 1, v_a_3152_);
if (v_isShared_3155_ == 0)
{
lean_ctor_set(v___x_3154_, 0, v___x_3156_);
v___x_3158_ = v___x_3154_;
goto v_reusejp_3157_;
}
else
{
lean_object* v_reuseFailAlloc_3159_; 
v_reuseFailAlloc_3159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3159_, 0, v___x_3156_);
v___x_3158_ = v_reuseFailAlloc_3159_;
goto v_reusejp_3157_;
}
v_reusejp_3157_:
{
return v___x_3158_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_fromJS_3121_);
lean_dec_ref(v_fromJS_3120_);
goto v___jp_3123_;
}
v___jp_3123_:
{
lean_object* v___x_3124_; 
v___x_3124_ = ((lean_object*)(l_Lasm_JS_instFromJSProd___redArg___lam__0___closed__1));
return v___x_3124_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSProd___redArg___lam__0___boxed(lean_object* v_fromJS_3161_, lean_object* v_fromJS_3162_, lean_object* v_x_3163_){
_start:
{
lean_object* v_res_3164_; 
v_res_3164_ = l_Lasm_JS_instFromJSProd___redArg___lam__0(v_fromJS_3161_, v_fromJS_3162_, v_x_3163_);
lean_dec(v_x_3163_);
return v_res_3164_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSProd___redArg(lean_object* v_inst_3167_, lean_object* v_inst_3168_){
_start:
{
lean_object* v_fromJS_3169_; lean_object* v_typeName_3170_; lean_object* v_fromJS_3171_; lean_object* v_typeName_3172_; lean_object* v___x_3174_; uint8_t v_isShared_3175_; uint8_t v_isSharedCheck_3188_; 
v_fromJS_3169_ = lean_ctor_get(v_inst_3167_, 0);
lean_inc_ref(v_fromJS_3169_);
v_typeName_3170_ = lean_ctor_get(v_inst_3167_, 1);
lean_inc_ref(v_typeName_3170_);
lean_dec_ref(v_inst_3167_);
v_fromJS_3171_ = lean_ctor_get(v_inst_3168_, 0);
v_typeName_3172_ = lean_ctor_get(v_inst_3168_, 1);
v_isSharedCheck_3188_ = !lean_is_exclusive(v_inst_3168_);
if (v_isSharedCheck_3188_ == 0)
{
v___x_3174_ = v_inst_3168_;
v_isShared_3175_ = v_isSharedCheck_3188_;
goto v_resetjp_3173_;
}
else
{
lean_inc(v_typeName_3172_);
lean_inc(v_fromJS_3171_);
lean_dec(v_inst_3168_);
v___x_3174_ = lean_box(0);
v_isShared_3175_ = v_isSharedCheck_3188_;
goto v_resetjp_3173_;
}
v_resetjp_3173_:
{
lean_object* v___f_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; uint8_t v___x_3184_; lean_object* v___x_3186_; 
v___f_3176_ = lean_alloc_closure((void*)(l_Lasm_JS_instFromJSProd___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3176_, 0, v_fromJS_3169_);
lean_closure_set(v___f_3176_, 1, v_fromJS_3171_);
v___x_3177_ = ((lean_object*)(l_Lasm_JS_instFromJSProd___redArg___closed__0));
v___x_3178_ = lean_string_append(v___x_3177_, v_typeName_3170_);
lean_dec_ref(v_typeName_3170_);
v___x_3179_ = ((lean_object*)(l_Lasm_JS_instFromJSProd___redArg___closed__1));
v___x_3180_ = lean_string_append(v___x_3178_, v___x_3179_);
v___x_3181_ = lean_string_append(v___x_3180_, v_typeName_3172_);
lean_dec_ref(v_typeName_3172_);
v___x_3182_ = ((lean_object*)(l_Lasm_JS_Wire_pushLength___closed__5));
v___x_3183_ = lean_string_append(v___x_3181_, v___x_3182_);
v___x_3184_ = 0;
if (v_isShared_3175_ == 0)
{
lean_ctor_set(v___x_3174_, 1, v___x_3183_);
lean_ctor_set(v___x_3174_, 0, v___f_3176_);
v___x_3186_ = v___x_3174_;
goto v_reusejp_3185_;
}
else
{
lean_object* v_reuseFailAlloc_3187_; 
v_reuseFailAlloc_3187_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_3187_, 0, v___f_3176_);
lean_ctor_set(v_reuseFailAlloc_3187_, 1, v___x_3183_);
v___x_3186_ = v_reuseFailAlloc_3187_;
goto v_reusejp_3185_;
}
v_reusejp_3185_:
{
lean_ctor_set_uint8(v___x_3186_, sizeof(void*)*2, v___x_3184_);
return v___x_3186_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSProd(lean_object* v_00_u03b1_3189_, lean_object* v_00_u03b2_3190_, lean_object* v_inst_3191_, lean_object* v_inst_3192_){
_start:
{
lean_object* v___x_3193_; 
v___x_3193_ = l_Lasm_JS_instFromJSProd___redArg(v_inst_3191_, v_inst_3192_);
return v___x_3193_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_obj(lean_object* v_fields_3194_){
_start:
{
lean_object* v___x_3195_; lean_object* v___x_3196_; 
v___x_3195_ = lean_array_mk(v_fields_3194_);
v___x_3196_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_3196_, 0, v___x_3195_);
return v___x_3196_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___redArg(lean_object* v_inst_3203_, lean_object* v_d_3204_, lean_object* v_key_3205_){
_start:
{
if (lean_obj_tag(v_d_3204_) == 8)
{
lean_object* v_fromJS_3206_; lean_object* v_typeName_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; 
v_fromJS_3206_ = lean_ctor_get(v_inst_3203_, 0);
lean_inc_ref(v_fromJS_3206_);
v_typeName_3207_ = lean_ctor_get(v_inst_3203_, 1);
lean_inc_ref(v_typeName_3207_);
lean_dec_ref(v_inst_3203_);
v___x_3208_ = l_Lasm_JS_Data_field(v_d_3204_, v_key_3205_);
lean_inc(v___x_3208_);
v___x_3209_ = lean_apply_1(v_fromJS_3206_, v___x_3208_);
if (lean_obj_tag(v___x_3209_) == 0)
{
lean_object* v_a_3210_; lean_object* v___x_3212_; uint8_t v_isShared_3213_; uint8_t v_isSharedCheck_3237_; 
v_a_3210_ = lean_ctor_get(v___x_3209_, 0);
v_isSharedCheck_3237_ = !lean_is_exclusive(v___x_3209_);
if (v_isSharedCheck_3237_ == 0)
{
v___x_3212_ = v___x_3209_;
v_isShared_3213_ = v_isSharedCheck_3237_;
goto v_resetjp_3211_;
}
else
{
lean_inc(v_a_3210_);
lean_dec(v___x_3209_);
v___x_3212_ = lean_box(0);
v_isShared_3213_ = v_isSharedCheck_3237_;
goto v_resetjp_3211_;
}
v_resetjp_3211_:
{
lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; uint8_t v___x_3225_; 
v___x_3214_ = ((lean_object*)(l_Lasm_JS_readField___redArg___closed__0));
v___x_3215_ = lean_string_append(v___x_3214_, v_key_3205_);
v___x_3216_ = ((lean_object*)(l_Lasm_JS_readField___redArg___closed__1));
v___x_3217_ = lean_string_append(v___x_3215_, v___x_3216_);
v___x_3218_ = lean_string_append(v___x_3217_, v_typeName_3207_);
lean_dec_ref(v_typeName_3207_);
v___x_3219_ = ((lean_object*)(l_Lasm_JS_readField___redArg___closed__2));
v___x_3220_ = lean_string_append(v___x_3218_, v___x_3219_);
v___x_3221_ = l_Lasm_JS_Data_describe(v___x_3208_);
v___x_3222_ = lean_string_append(v___x_3220_, v___x_3221_);
lean_dec_ref(v___x_3221_);
v___x_3223_ = lean_string_utf8_byte_size(v_a_3210_);
v___x_3224_ = lean_unsigned_to_nat(0u);
v___x_3225_ = lean_nat_dec_eq(v___x_3223_, v___x_3224_);
if (v___x_3225_ == 0)
{
lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3232_; 
v___x_3226_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__3));
v___x_3227_ = lean_string_append(v___x_3226_, v_a_3210_);
lean_dec(v_a_3210_);
v___x_3228_ = ((lean_object*)(l_Lasm_JS_Wire_pushLength___closed__5));
v___x_3229_ = lean_string_append(v___x_3227_, v___x_3228_);
v___x_3230_ = lean_string_append(v___x_3222_, v___x_3229_);
lean_dec_ref(v___x_3229_);
if (v_isShared_3213_ == 0)
{
lean_ctor_set(v___x_3212_, 0, v___x_3230_);
v___x_3232_ = v___x_3212_;
goto v_reusejp_3231_;
}
else
{
lean_object* v_reuseFailAlloc_3233_; 
v_reuseFailAlloc_3233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3233_, 0, v___x_3230_);
v___x_3232_ = v_reuseFailAlloc_3233_;
goto v_reusejp_3231_;
}
v_reusejp_3231_:
{
return v___x_3232_;
}
}
else
{
lean_object* v___x_3235_; 
lean_dec(v_a_3210_);
if (v_isShared_3213_ == 0)
{
lean_ctor_set(v___x_3212_, 0, v___x_3222_);
v___x_3235_ = v___x_3212_;
goto v_reusejp_3234_;
}
else
{
lean_object* v_reuseFailAlloc_3236_; 
v_reuseFailAlloc_3236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3236_, 0, v___x_3222_);
v___x_3235_ = v_reuseFailAlloc_3236_;
goto v_reusejp_3234_;
}
v_reusejp_3234_:
{
return v___x_3235_;
}
}
}
}
else
{
lean_dec(v___x_3208_);
lean_dec_ref(v_typeName_3207_);
return v___x_3209_;
}
}
else
{
lean_object* v___x_3238_; 
lean_dec_ref(v_inst_3203_);
v___x_3238_ = ((lean_object*)(l_Lasm_JS_readField___redArg___closed__4));
return v___x_3238_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___redArg___boxed(lean_object* v_inst_3239_, lean_object* v_d_3240_, lean_object* v_key_3241_){
_start:
{
lean_object* v_res_3242_; 
v_res_3242_ = l_Lasm_JS_readField___redArg(v_inst_3239_, v_d_3240_, v_key_3241_);
lean_dec_ref(v_key_3241_);
lean_dec(v_d_3240_);
return v_res_3242_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField(lean_object* v_00_u03b1_3243_, lean_object* v_inst_3244_, lean_object* v_d_3245_, lean_object* v_key_3246_){
_start:
{
lean_object* v___x_3247_; 
v___x_3247_ = l_Lasm_JS_readField___redArg(v_inst_3244_, v_d_3245_, v_key_3246_);
return v___x_3247_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___boxed(lean_object* v_00_u03b1_3248_, lean_object* v_inst_3249_, lean_object* v_d_3250_, lean_object* v_key_3251_){
_start:
{
lean_object* v_res_3252_; 
v_res_3252_ = l_Lasm_JS_readField(v_00_u03b1_3248_, v_inst_3249_, v_d_3250_, v_key_3251_);
lean_dec_ref(v_key_3251_);
lean_dec(v_d_3250_);
return v_res_3252_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_ctorIdx(lean_object* v_x_3253_){
_start:
{
if (lean_obj_tag(v_x_3253_) == 0)
{
lean_object* v___x_3254_; 
v___x_3254_ = lean_unsigned_to_nat(0u);
return v___x_3254_;
}
else
{
lean_object* v___x_3255_; 
v___x_3255_ = lean_unsigned_to_nat(1u);
return v___x_3255_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_ctorIdx___boxed(lean_object* v_x_3256_){
_start:
{
lean_object* v_res_3257_; 
v_res_3257_ = l_Lasm_JS_Function_Reply_ctorIdx(v_x_3256_);
lean_dec_ref(v_x_3256_);
return v_res_3257_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_ctorElim___redArg(lean_object* v_t_3258_, lean_object* v_k_3259_){
_start:
{
if (lean_obj_tag(v_t_3258_) == 0)
{
lean_object* v_result_3260_; lean_object* v___x_3261_; 
v_result_3260_ = lean_ctor_get(v_t_3258_, 0);
lean_inc(v_result_3260_);
lean_dec_ref_known(v_t_3258_, 1);
v___x_3261_ = lean_apply_1(v_k_3259_, v_result_3260_);
return v___x_3261_;
}
else
{
lean_object* v_target_3262_; lean_object* v_name_3263_; lean_object* v_args_3264_; lean_object* v___x_3265_; 
v_target_3262_ = lean_ctor_get(v_t_3258_, 0);
lean_inc(v_target_3262_);
v_name_3263_ = lean_ctor_get(v_t_3258_, 1);
lean_inc_ref(v_name_3263_);
v_args_3264_ = lean_ctor_get(v_t_3258_, 2);
lean_inc_ref(v_args_3264_);
lean_dec_ref_known(v_t_3258_, 3);
v___x_3265_ = lean_apply_3(v_k_3259_, v_target_3262_, v_name_3263_, v_args_3264_);
return v___x_3265_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_ctorElim(lean_object* v_motive_3266_, lean_object* v_ctorIdx_3267_, lean_object* v_t_3268_, lean_object* v_h_3269_, lean_object* v_k_3270_){
_start:
{
lean_object* v___x_3271_; 
v___x_3271_ = l_Lasm_JS_Function_Reply_ctorElim___redArg(v_t_3268_, v_k_3270_);
return v___x_3271_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_ctorElim___boxed(lean_object* v_motive_3272_, lean_object* v_ctorIdx_3273_, lean_object* v_t_3274_, lean_object* v_h_3275_, lean_object* v_k_3276_){
_start:
{
lean_object* v_res_3277_; 
v_res_3277_ = l_Lasm_JS_Function_Reply_ctorElim(v_motive_3272_, v_ctorIdx_3273_, v_t_3274_, v_h_3275_, v_k_3276_);
lean_dec(v_ctorIdx_3273_);
return v_res_3277_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_value_elim___redArg(lean_object* v_t_3278_, lean_object* v_value_3279_){
_start:
{
lean_object* v___x_3280_; 
v___x_3280_ = l_Lasm_JS_Function_Reply_ctorElim___redArg(v_t_3278_, v_value_3279_);
return v___x_3280_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_value_elim(lean_object* v_motive_3281_, lean_object* v_t_3282_, lean_object* v_h_3283_, lean_object* v_value_3284_){
_start:
{
lean_object* v___x_3285_; 
v___x_3285_ = l_Lasm_JS_Function_Reply_ctorElim___redArg(v_t_3282_, v_value_3284_);
return v___x_3285_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_callMethod_elim___redArg(lean_object* v_t_3286_, lean_object* v_callMethod_3287_){
_start:
{
lean_object* v___x_3288_; 
v___x_3288_ = l_Lasm_JS_Function_Reply_ctorElim___redArg(v_t_3286_, v_callMethod_3287_);
return v___x_3288_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_callMethod_elim(lean_object* v_motive_3289_, lean_object* v_t_3290_, lean_object* v_h_3291_, lean_object* v_callMethod_3292_){
_start:
{
lean_object* v___x_3293_; 
v___x_3293_ = l_Lasm_JS_Function_Reply_ctorElim___redArg(v_t_3290_, v_callMethod_3292_);
return v___x_3293_;
}
}
static lean_object* _init_l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__0_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; 
v___x_3294_ = lean_box(0);
v___x_3295_ = lean_unsigned_to_nat(16u);
v___x_3296_ = lean_mk_array(v___x_3295_, v___x_3294_);
return v___x_3296_;
}
}
static lean_object* _init_l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__1_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; 
v___x_3297_ = lean_obj_once(&l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__0_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_, &l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__0_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__0_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_);
v___x_3298_ = lean_unsigned_to_nat(0u);
v___x_3299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3299_, 0, v___x_3298_);
lean_ctor_set(v___x_3299_, 1, v___x_3297_);
return v___x_3299_;
}
}
static lean_object* _init_l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__2_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3300_; uint32_t v___x_3301_; lean_object* v___x_3302_; 
v___x_3300_ = lean_obj_once(&l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__1_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_, &l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__1_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__1_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_);
v___x_3301_ = 1;
v___x_3302_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_3302_, 0, v___x_3300_);
lean_ctor_set(v___x_3302_, 1, v___x_3300_);
lean_ctor_set_uint32(v___x_3302_, sizeof(void*)*2, v___x_3301_);
return v___x_3302_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_initFn_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; 
v___x_3304_ = lean_obj_once(&l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__2_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_, &l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__2_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__2_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_);
v___x_3305_ = lean_st_mk_ref(v___x_3304_);
v___x_3306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3306_, 0, v___x_3305_);
return v___x_3306_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_initFn_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2____boxed(lean_object* v_a_3307_){
_start:
{
lean_object* v_res_3308_; 
v_res_3308_ = l___private_Lasm_JS_Core_0__Lasm_JS_initFn_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_();
return v_res_3308_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_startThread___boxed(lean_object* v_dispatch_3311_, lean_object* v_a_00___x40___internal___hyg_3312_){
_start:
{
lean_object* v_res_3313_; 
v_res_3313_ = lasm_js_start(v_dispatch_3311_);
return v_res_3313_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitInto___boxed(lean_object* v_p_3318_, lean_object* v_value_3319_, lean_object* v_keep_3320_, lean_object* v_a_00___x40___internal___hyg_3321_){
_start:
{
lean_object* v_res_3322_; 
v_res_3322_ = lasm_js_await_into(v_p_3318_, v_value_3319_, v_keep_3320_);
lean_dec(v_keep_3320_);
lean_dec_ref(v_value_3319_);
lean_dec(v_p_3318_);
return v_res_3322_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_park___boxed(lean_object* v_a_00___x40___internal___hyg_3324_){
_start:
{
lean_object* v_res_3325_; 
v_res_3325_ = lasm_js_park();
return v_res_3325_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_startSync___boxed(lean_object* v_dispatch_3328_, lean_object* v_a_00___x40___internal___hyg_3329_){
_start:
{
lean_object* v_res_3330_; 
v_res_3330_ = lasm_js_sync_start(v_dispatch_3328_);
return v_res_3330_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_errorText(lean_object* v_e_3331_){
_start:
{
lean_object* v___x_3332_; 
v___x_3332_ = lean_io_error_to_string(v_e_3331_);
return v___x_3332_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__0(lean_object* v_message_3333_){
_start:
{
uint8_t v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; 
v___x_3334_ = 1;
v___x_3335_ = lean_string_to_utf8(v_message_3333_);
v___x_3336_ = lean_box(0);
v___x_3337_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3337_, 0, v___x_3335_);
lean_ctor_set(v___x_3337_, 1, v___x_3336_);
v___x_3338_ = lean_box(v___x_3334_);
v___x_3339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3339_, 0, v___x_3338_);
lean_ctor_set(v___x_3339_, 1, v___x_3337_);
return v___x_3339_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__0___boxed(lean_object* v_message_3340_){
_start:
{
lean_object* v_res_3341_; 
v_res_3341_ = l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__0(v_message_3340_);
lean_dec_ref(v_message_3340_);
return v_res_3341_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__1(uint64_t v_call_3342_, uint8_t v_status_3343_){
_start:
{
lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; 
v___x_3344_ = l_ByteArray_empty;
v___x_3345_ = l_Lasm_JS_Wire_pushU64(v___x_3344_, v_call_3342_);
v___x_3346_ = lean_byte_array_push(v___x_3345_, v_status_3343_);
return v___x_3346_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__1___boxed(lean_object* v_call_3347_, lean_object* v_status_3348_){
_start:
{
uint64_t v_call_boxed_3349_; uint8_t v_status_boxed_3350_; lean_object* v_res_3351_; 
v_call_boxed_3349_ = lean_unbox_uint64(v_call_3347_);
lean_dec_ref(v_call_3347_);
v_status_boxed_3350_ = lean_unbox(v_status_3348_);
v_res_3351_ = l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__1(v_call_boxed_3349_, v_status_boxed_3350_);
return v_res_3351_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__2(lean_object* v_failure_3352_, uint8_t v_status_3353_, lean_object* v_d_3354_){
_start:
{
lean_object* v___x_3355_; 
v___x_3355_ = l_Lasm_JS_Wire_encode(v_d_3354_);
if (lean_obj_tag(v___x_3355_) == 0)
{
lean_object* v_a_3356_; lean_object* v___x_3357_; 
lean_dec(v_d_3354_);
v_a_3356_ = lean_ctor_get(v___x_3355_, 0);
lean_inc(v_a_3356_);
lean_dec_ref_known(v___x_3355_, 1);
v___x_3357_ = lean_apply_1(v_failure_3352_, v_a_3356_);
return v___x_3357_;
}
else
{
lean_object* v_a_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; 
lean_dec_ref(v_failure_3352_);
v_a_3358_ = lean_ctor_get(v___x_3355_, 0);
lean_inc(v_a_3358_);
lean_dec_ref_known(v___x_3355_, 1);
v___x_3359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3359_, 0, v_a_3358_);
lean_ctor_set(v___x_3359_, 1, v_d_3354_);
v___x_3360_ = lean_box(v_status_3353_);
v___x_3361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3361_, 0, v___x_3360_);
lean_ctor_set(v___x_3361_, 1, v___x_3359_);
return v___x_3361_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__2___boxed(lean_object* v_failure_3362_, lean_object* v_status_3363_, lean_object* v_d_3364_){
_start:
{
uint8_t v_status_boxed_3365_; lean_object* v_res_3366_; 
v_status_boxed_3365_ = lean_unbox(v_status_3363_);
v_res_3366_ = l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__2(v_failure_3362_, v_status_boxed_3365_, v_d_3364_);
return v_res_3366_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply(uint64_t v_call_3369_, lean_object* v_result_3370_){
_start:
{
lean_object* v_fst_3373_; lean_object* v_fst_3374_; lean_object* v_snd_3375_; lean_object* v_failure_3402_; lean_object* v___y_3404_; 
v_failure_3402_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_reply___closed__0));
if (lean_obj_tag(v_result_3370_) == 0)
{
lean_object* v_a_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; 
v_a_3424_ = lean_ctor_get(v_result_3370_, 0);
lean_inc(v_a_3424_);
lean_dec_ref_known(v_result_3370_, 1);
v___x_3425_ = lean_io_error_to_string(v_a_3424_);
v___x_3426_ = l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__0(v___x_3425_);
lean_dec_ref(v___x_3425_);
v___y_3404_ = v___x_3426_;
goto v___jp_3403_;
}
else
{
lean_object* v_a_3427_; lean_object* v___x_3429_; uint8_t v_isShared_3430_; uint8_t v_isSharedCheck_3451_; 
v_a_3427_ = lean_ctor_get(v_result_3370_, 0);
v_isSharedCheck_3451_ = !lean_is_exclusive(v_result_3370_);
if (v_isSharedCheck_3451_ == 0)
{
v___x_3429_ = v_result_3370_;
v_isShared_3430_ = v_isSharedCheck_3451_;
goto v_resetjp_3428_;
}
else
{
lean_inc(v_a_3427_);
lean_dec(v_result_3370_);
v___x_3429_ = lean_box(0);
v_isShared_3430_ = v_isSharedCheck_3451_;
goto v_resetjp_3428_;
}
v_resetjp_3428_:
{
if (lean_obj_tag(v_a_3427_) == 0)
{
lean_object* v_result_3431_; uint8_t v___x_3432_; lean_object* v___x_3433_; 
lean_del_object(v___x_3429_);
v_result_3431_ = lean_ctor_get(v_a_3427_, 0);
lean_inc(v_result_3431_);
lean_dec_ref_known(v_a_3427_, 1);
v___x_3432_ = 0;
v___x_3433_ = l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__2(v_failure_3402_, v___x_3432_, v_result_3431_);
v___y_3404_ = v___x_3433_;
goto v___jp_3403_;
}
else
{
lean_object* v_target_3434_; lean_object* v_name_3435_; lean_object* v_args_3436_; uint8_t v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3441_; 
v_target_3434_ = lean_ctor_get(v_a_3427_, 0);
lean_inc(v_target_3434_);
v_name_3435_ = lean_ctor_get(v_a_3427_, 1);
lean_inc_ref(v_name_3435_);
v_args_3436_ = lean_ctor_get(v_a_3427_, 2);
lean_inc_ref(v_args_3436_);
lean_dec_ref_known(v_a_3427_, 3);
v___x_3437_ = 2;
v___x_3438_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
v___x_3439_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3439_, 0, v_target_3434_);
lean_ctor_set(v___x_3439_, 1, v___x_3438_);
if (v_isShared_3430_ == 0)
{
lean_ctor_set_tag(v___x_3429_, 4);
lean_ctor_set(v___x_3429_, 0, v_name_3435_);
v___x_3441_ = v___x_3429_;
goto v_reusejp_3440_;
}
else
{
lean_object* v_reuseFailAlloc_3450_; 
v_reuseFailAlloc_3450_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3450_, 0, v_name_3435_);
v___x_3441_ = v_reuseFailAlloc_3450_;
goto v_reusejp_3440_;
}
v_reusejp_3440_:
{
lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; 
v___x_3442_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3442_, 0, v_args_3436_);
v___x_3443_ = lean_unsigned_to_nat(3u);
v___x_3444_ = lean_mk_empty_array_with_capacity(v___x_3443_);
v___x_3445_ = lean_array_push(v___x_3444_, v___x_3439_);
v___x_3446_ = lean_array_push(v___x_3445_, v___x_3441_);
v___x_3447_ = lean_array_push(v___x_3446_, v___x_3442_);
v___x_3448_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3448_, 0, v___x_3447_);
v___x_3449_ = l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__2(v_failure_3402_, v___x_3437_, v___x_3448_);
v___y_3404_ = v___x_3449_;
goto v___jp_3403_;
}
}
}
}
v___jp_3372_:
{
uint32_t v___x_3376_; uint32_t v___x_3377_; uint64_t v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; uint8_t v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; 
v___x_3376_ = 208;
v___x_3377_ = 0;
v___x_3378_ = 0ULL;
v___x_3379_ = lean_unsigned_to_nat(0u);
v___x_3380_ = lean_byte_array_size(v_fst_3373_);
v___x_3381_ = lean_byte_array_size(v_fst_3374_);
v___x_3382_ = 0;
v___x_3383_ = lean_byte_array_copy_slice(v_fst_3374_, v___x_3379_, v_fst_3373_, v___x_3380_, v___x_3381_, v___x_3382_);
lean_dec_ref(v_fst_3374_);
v___x_3384_ = lean_box(0);
v___x_3385_ = lasm_js_call(v___x_3376_, v___x_3377_, v___x_3378_, v___x_3383_, v_snd_3375_);
lean_dec(v_snd_3375_);
lean_dec_ref(v___x_3383_);
if (lean_obj_tag(v___x_3385_) == 0)
{
lean_object* v___x_3387_; uint8_t v_isShared_3388_; uint8_t v_isSharedCheck_3392_; 
v_isSharedCheck_3392_ = !lean_is_exclusive(v___x_3385_);
if (v_isSharedCheck_3392_ == 0)
{
lean_object* v_unused_3393_; 
v_unused_3393_ = lean_ctor_get(v___x_3385_, 0);
lean_dec(v_unused_3393_);
v___x_3387_ = v___x_3385_;
v_isShared_3388_ = v_isSharedCheck_3392_;
goto v_resetjp_3386_;
}
else
{
lean_dec(v___x_3385_);
v___x_3387_ = lean_box(0);
v_isShared_3388_ = v_isSharedCheck_3392_;
goto v_resetjp_3386_;
}
v_resetjp_3386_:
{
lean_object* v___x_3390_; 
if (v_isShared_3388_ == 0)
{
lean_ctor_set(v___x_3387_, 0, v___x_3384_);
v___x_3390_ = v___x_3387_;
goto v_reusejp_3389_;
}
else
{
lean_object* v_reuseFailAlloc_3391_; 
v_reuseFailAlloc_3391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3391_, 0, v___x_3384_);
v___x_3390_ = v_reuseFailAlloc_3391_;
goto v_reusejp_3389_;
}
v_reusejp_3389_:
{
return v___x_3390_;
}
}
}
else
{
lean_object* v_a_3394_; lean_object* v___x_3396_; uint8_t v_isShared_3397_; uint8_t v_isSharedCheck_3401_; 
v_a_3394_ = lean_ctor_get(v___x_3385_, 0);
v_isSharedCheck_3401_ = !lean_is_exclusive(v___x_3385_);
if (v_isSharedCheck_3401_ == 0)
{
v___x_3396_ = v___x_3385_;
v_isShared_3397_ = v_isSharedCheck_3401_;
goto v_resetjp_3395_;
}
else
{
lean_inc(v_a_3394_);
lean_dec(v___x_3385_);
v___x_3396_ = lean_box(0);
v_isShared_3397_ = v_isSharedCheck_3401_;
goto v_resetjp_3395_;
}
v_resetjp_3395_:
{
lean_object* v___x_3399_; 
if (v_isShared_3397_ == 0)
{
v___x_3399_ = v___x_3396_;
goto v_reusejp_3398_;
}
else
{
lean_object* v_reuseFailAlloc_3400_; 
v_reuseFailAlloc_3400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3400_, 0, v_a_3394_);
v___x_3399_ = v_reuseFailAlloc_3400_;
goto v_reusejp_3398_;
}
v_reusejp_3398_:
{
return v___x_3399_;
}
}
}
}
v___jp_3403_:
{
lean_object* v_snd_3405_; lean_object* v_fst_3406_; lean_object* v_fst_3407_; lean_object* v_snd_3408_; uint8_t v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; 
v_snd_3405_ = lean_ctor_get(v___y_3404_, 1);
lean_inc(v_snd_3405_);
v_fst_3406_ = lean_ctor_get(v___y_3404_, 0);
lean_inc(v_fst_3406_);
lean_dec_ref(v___y_3404_);
v_fst_3407_ = lean_ctor_get(v_snd_3405_, 0);
lean_inc(v_fst_3407_);
v_snd_3408_ = lean_ctor_get(v_snd_3405_, 1);
lean_inc(v_snd_3408_);
lean_dec(v_snd_3405_);
v___x_3409_ = lean_unbox(v_fst_3406_);
lean_dec(v_fst_3406_);
v___x_3410_ = l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__1(v_call_3369_, v___x_3409_);
v___x_3411_ = lean_byte_array_size(v_fst_3407_);
v___x_3412_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_reply___closed__1));
v___x_3413_ = ((lean_object*)(l_Lasm_JS_Wire_pushString___closed__0));
v___x_3414_ = l_Lasm_JS_Wire_pushLength(v___x_3410_, v___x_3411_, v___x_3412_, v___x_3413_);
if (lean_obj_tag(v___x_3414_) == 0)
{
lean_object* v_a_3415_; uint8_t v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; uint32_t v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; 
lean_dec(v_snd_3408_);
lean_dec(v_fst_3407_);
v_a_3415_ = lean_ctor_get(v___x_3414_, 0);
lean_inc(v_a_3415_);
lean_dec_ref_known(v___x_3414_, 1);
v___x_3416_ = 1;
v___x_3417_ = l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__1(v_call_3369_, v___x_3416_);
v___x_3418_ = lean_string_utf8_byte_size(v_a_3415_);
v___x_3419_ = lean_uint32_of_nat(v___x_3418_);
v___x_3420_ = l_Lasm_JS_Wire_pushU32(v___x_3417_, v___x_3419_);
v___x_3421_ = lean_string_to_utf8(v_a_3415_);
lean_dec(v_a_3415_);
v___x_3422_ = lean_box(0);
v_fst_3373_ = v___x_3420_;
v_fst_3374_ = v___x_3421_;
v_snd_3375_ = v___x_3422_;
goto v___jp_3372_;
}
else
{
lean_object* v_a_3423_; 
v_a_3423_ = lean_ctor_get(v___x_3414_, 0);
lean_inc(v_a_3423_);
lean_dec_ref_known(v___x_3414_, 1);
v_fst_3373_ = v_a_3423_;
v_fst_3374_ = v_fst_3407_;
v_snd_3375_ = v_snd_3408_;
goto v___jp_3372_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply___boxed(lean_object* v_call_3452_, lean_object* v_result_3453_, lean_object* v_a_3454_){
_start:
{
uint64_t v_call_boxed_3455_; lean_object* v_res_3456_; 
v_call_boxed_3455_ = lean_unbox_uint64(v_call_3452_);
lean_dec_ref(v_call_3452_);
v_res_3456_ = l___private_Lasm_JS_Core_0__Lasm_JS_reply(v_call_boxed_3455_, v_result_3453_);
return v_res_3456_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_argsOf(lean_object* v_bytes_3457_){
_start:
{
lean_object* v___x_3459_; 
v___x_3459_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3457_);
if (lean_obj_tag(v___x_3459_) == 0)
{
lean_object* v_a_3460_; lean_object* v___x_3462_; uint8_t v_isShared_3463_; uint8_t v_isSharedCheck_3474_; 
v_a_3460_ = lean_ctor_get(v___x_3459_, 0);
v_isSharedCheck_3474_ = !lean_is_exclusive(v___x_3459_);
if (v_isSharedCheck_3474_ == 0)
{
v___x_3462_ = v___x_3459_;
v_isShared_3463_ = v_isSharedCheck_3474_;
goto v_resetjp_3461_;
}
else
{
lean_inc(v_a_3460_);
lean_dec(v___x_3459_);
v___x_3462_ = lean_box(0);
v_isShared_3463_ = v_isSharedCheck_3474_;
goto v_resetjp_3461_;
}
v_resetjp_3461_:
{
if (lean_obj_tag(v_a_3460_) == 7)
{
lean_object* v_items_3464_; lean_object* v___x_3466_; 
v_items_3464_ = lean_ctor_get(v_a_3460_, 0);
lean_inc_ref(v_items_3464_);
lean_dec_ref_known(v_a_3460_, 1);
if (v_isShared_3463_ == 0)
{
lean_ctor_set(v___x_3462_, 0, v_items_3464_);
v___x_3466_ = v___x_3462_;
goto v_reusejp_3465_;
}
else
{
lean_object* v_reuseFailAlloc_3467_; 
v_reuseFailAlloc_3467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3467_, 0, v_items_3464_);
v___x_3466_ = v_reuseFailAlloc_3467_;
goto v_reusejp_3465_;
}
v_reusejp_3465_:
{
return v___x_3466_;
}
}
else
{
lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3472_; 
v___x_3468_ = lean_unsigned_to_nat(1u);
v___x_3469_ = lean_mk_empty_array_with_capacity(v___x_3468_);
v___x_3470_ = lean_array_push(v___x_3469_, v_a_3460_);
if (v_isShared_3463_ == 0)
{
lean_ctor_set(v___x_3462_, 0, v___x_3470_);
v___x_3472_ = v___x_3462_;
goto v_reusejp_3471_;
}
else
{
lean_object* v_reuseFailAlloc_3473_; 
v_reuseFailAlloc_3473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3473_, 0, v___x_3470_);
v___x_3472_ = v_reuseFailAlloc_3473_;
goto v_reusejp_3471_;
}
v_reusejp_3471_:
{
return v___x_3472_;
}
}
}
}
else
{
lean_object* v_a_3475_; lean_object* v___x_3477_; uint8_t v_isShared_3478_; uint8_t v_isSharedCheck_3482_; 
v_a_3475_ = lean_ctor_get(v___x_3459_, 0);
v_isSharedCheck_3482_ = !lean_is_exclusive(v___x_3459_);
if (v_isSharedCheck_3482_ == 0)
{
v___x_3477_ = v___x_3459_;
v_isShared_3478_ = v_isSharedCheck_3482_;
goto v_resetjp_3476_;
}
else
{
lean_inc(v_a_3475_);
lean_dec(v___x_3459_);
v___x_3477_ = lean_box(0);
v_isShared_3478_ = v_isSharedCheck_3482_;
goto v_resetjp_3476_;
}
v_resetjp_3476_:
{
lean_object* v___x_3480_; 
if (v_isShared_3478_ == 0)
{
v___x_3480_ = v___x_3477_;
goto v_reusejp_3479_;
}
else
{
lean_object* v_reuseFailAlloc_3481_; 
v_reuseFailAlloc_3481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3481_, 0, v_a_3475_);
v___x_3480_ = v_reuseFailAlloc_3481_;
goto v_reusejp_3479_;
}
v_reusejp_3479_:
{
return v___x_3480_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_argsOf___boxed(lean_object* v_bytes_3483_, lean_object* v_a_3484_){
_start:
{
lean_object* v_res_3485_; 
v_res_3485_ = l___private_Lasm_JS_Core_0__Lasm_JS_argsOf(v_bytes_3483_);
lean_dec_ref(v_bytes_3483_);
return v_res_3485_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__0(lean_object* v_f_3486_, lean_object* v_x_3487_){
_start:
{
if (lean_obj_tag(v_x_3487_) == 0)
{
lean_object* v_a_3489_; lean_object* v___x_3491_; uint8_t v_isShared_3492_; uint8_t v_isSharedCheck_3497_; 
lean_dec_ref(v_f_3486_);
v_a_3489_ = lean_ctor_get(v_x_3487_, 0);
v_isSharedCheck_3497_ = !lean_is_exclusive(v_x_3487_);
if (v_isSharedCheck_3497_ == 0)
{
v___x_3491_ = v_x_3487_;
v_isShared_3492_ = v_isSharedCheck_3497_;
goto v_resetjp_3490_;
}
else
{
lean_inc(v_a_3489_);
lean_dec(v_x_3487_);
v___x_3491_ = lean_box(0);
v_isShared_3492_ = v_isSharedCheck_3497_;
goto v_resetjp_3490_;
}
v_resetjp_3490_:
{
lean_object* v___x_3494_; 
if (v_isShared_3492_ == 0)
{
v___x_3494_ = v___x_3491_;
goto v_reusejp_3493_;
}
else
{
lean_object* v_reuseFailAlloc_3496_; 
v_reuseFailAlloc_3496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3496_, 0, v_a_3489_);
v___x_3494_ = v_reuseFailAlloc_3496_;
goto v_reusejp_3493_;
}
v_reusejp_3493_:
{
lean_object* v___x_3495_; 
v___x_3495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3495_, 0, v___x_3494_);
return v___x_3495_;
}
}
}
else
{
lean_object* v_a_3498_; lean_object* v___x_3499_; 
v_a_3498_ = lean_ctor_get(v_x_3487_, 0);
lean_inc(v_a_3498_);
lean_dec_ref_known(v_x_3487_, 1);
v___x_3499_ = lean_apply_2(v_f_3486_, v_a_3498_, lean_box(0));
return v___x_3499_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__0___boxed(lean_object* v_f_3500_, lean_object* v_x_3501_, lean_object* v___y_3502_){
_start:
{
lean_object* v_res_3503_; 
v_res_3503_ = l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__0(v_f_3500_, v_x_3501_);
return v_res_3503_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__1(uint64_t v_call_3504_, lean_object* v_result_3505_){
_start:
{
lean_object* v___x_3507_; lean_object* v___x_3508_; 
v___x_3507_ = lean_box(0);
v___x_3508_ = l___private_Lasm_JS_Core_0__Lasm_JS_reply(v_call_3504_, v_result_3505_);
lean_dec_ref(v___x_3508_);
return v___x_3507_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__1___boxed(lean_object* v_call_3509_, lean_object* v_result_3510_, lean_object* v___y_3511_){
_start:
{
uint64_t v_call_boxed_3512_; lean_object* v_res_3513_; 
v_call_boxed_3512_ = lean_unbox_uint64(v_call_3509_);
lean_dec_ref(v_call_3509_);
v_res_3513_ = l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__1(v_call_boxed_3512_, v_result_3510_);
return v_res_3513_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_runCall(uint64_t v_call_3514_, lean_object* v_f_3515_, lean_object* v_bytes_3516_){
_start:
{
lean_object* v___f_3518_; lean_object* v___x_3519_; lean_object* v___f_3520_; lean_object* v___x_3521_; uint8_t v___x_3522_; lean_object* v_val_3524_; lean_object* v___x_3533_; 
v___f_3518_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3518_, 0, v_f_3515_);
v___x_3519_ = lean_box_uint64(v_call_3514_);
v___f_3520_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3520_, 0, v___x_3519_);
v___x_3521_ = lean_unsigned_to_nat(0u);
v___x_3522_ = 0;
v___x_3533_ = l___private_Lasm_JS_Core_0__Lasm_JS_argsOf(v_bytes_3516_);
if (lean_obj_tag(v___x_3533_) == 0)
{
lean_object* v_a_3534_; lean_object* v___x_3536_; uint8_t v_isShared_3537_; uint8_t v_isSharedCheck_3541_; 
v_a_3534_ = lean_ctor_get(v___x_3533_, 0);
v_isSharedCheck_3541_ = !lean_is_exclusive(v___x_3533_);
if (v_isSharedCheck_3541_ == 0)
{
v___x_3536_ = v___x_3533_;
v_isShared_3537_ = v_isSharedCheck_3541_;
goto v_resetjp_3535_;
}
else
{
lean_inc(v_a_3534_);
lean_dec(v___x_3533_);
v___x_3536_ = lean_box(0);
v_isShared_3537_ = v_isSharedCheck_3541_;
goto v_resetjp_3535_;
}
v_resetjp_3535_:
{
lean_object* v___x_3539_; 
if (v_isShared_3537_ == 0)
{
lean_ctor_set_tag(v___x_3536_, 1);
v___x_3539_ = v___x_3536_;
goto v_reusejp_3538_;
}
else
{
lean_object* v_reuseFailAlloc_3540_; 
v_reuseFailAlloc_3540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3540_, 0, v_a_3534_);
v___x_3539_ = v_reuseFailAlloc_3540_;
goto v_reusejp_3538_;
}
v_reusejp_3538_:
{
v_val_3524_ = v___x_3539_;
goto v___jp_3523_;
}
}
}
else
{
lean_object* v_a_3542_; lean_object* v___x_3544_; uint8_t v_isShared_3545_; uint8_t v_isSharedCheck_3549_; 
v_a_3542_ = lean_ctor_get(v___x_3533_, 0);
v_isSharedCheck_3549_ = !lean_is_exclusive(v___x_3533_);
if (v_isSharedCheck_3549_ == 0)
{
v___x_3544_ = v___x_3533_;
v_isShared_3545_ = v_isSharedCheck_3549_;
goto v_resetjp_3543_;
}
else
{
lean_inc(v_a_3542_);
lean_dec(v___x_3533_);
v___x_3544_ = lean_box(0);
v_isShared_3545_ = v_isSharedCheck_3549_;
goto v_resetjp_3543_;
}
v_resetjp_3543_:
{
lean_object* v___x_3547_; 
if (v_isShared_3545_ == 0)
{
lean_ctor_set_tag(v___x_3544_, 0);
v___x_3547_ = v___x_3544_;
goto v_reusejp_3546_;
}
else
{
lean_object* v_reuseFailAlloc_3548_; 
v_reuseFailAlloc_3548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3548_, 0, v_a_3542_);
v___x_3547_ = v_reuseFailAlloc_3548_;
goto v_reusejp_3546_;
}
v_reusejp_3546_:
{
v_val_3524_ = v___x_3547_;
goto v___jp_3523_;
}
}
}
v___jp_3523_:
{
lean_object* v___x_3525_; lean_object* v___x_3526_; 
v___x_3525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3525_, 0, v_val_3524_);
v___x_3526_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3521_, v___x_3522_, v___x_3525_, v___f_3518_);
if (lean_obj_tag(v___x_3526_) == 0)
{
lean_object* v_a_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; 
lean_dec_ref(v___f_3520_);
v_a_3527_ = lean_ctor_get(v___x_3526_, 0);
lean_inc(v_a_3527_);
lean_dec_ref_known(v___x_3526_, 1);
v___x_3528_ = lean_box(0);
v___x_3529_ = l___private_Lasm_JS_Core_0__Lasm_JS_reply(v_call_3514_, v_a_3527_);
lean_dec_ref(v___x_3529_);
return v___x_3528_;
}
else
{
lean_object* v_a_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; 
v_a_3530_ = lean_ctor_get(v___x_3526_, 0);
lean_inc_ref(v_a_3530_);
lean_dec_ref_known(v___x_3526_, 1);
v___x_3531_ = lean_box(0);
v___x_3532_ = lean_io_map_task(v___f_3520_, v_a_3530_, v___x_3521_, v___x_3522_);
lean_dec_ref(v___x_3532_);
return v___x_3531_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_runCall___boxed(lean_object* v_call_3550_, lean_object* v_f_3551_, lean_object* v_bytes_3552_, lean_object* v_a_3553_){
_start:
{
uint64_t v_call_boxed_3554_; lean_object* v_res_3555_; 
v_call_boxed_3554_ = lean_unbox_uint64(v_call_3550_);
lean_dec_ref(v_call_3550_);
v_res_3555_ = l___private_Lasm_JS_Core_0__Lasm_JS_runCall(v_call_boxed_3554_, v_f_3551_, v_bytes_3552_);
lean_dec_ref(v_bytes_3552_);
return v_res_3555_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2___redArg(uint32_t v_a_3556_, lean_object* v_x_3557_){
_start:
{
if (lean_obj_tag(v_x_3557_) == 0)
{
uint8_t v___x_3558_; 
v___x_3558_ = 0;
return v___x_3558_;
}
else
{
lean_object* v_key_3559_; lean_object* v_tail_3560_; uint32_t v___x_3561_; uint8_t v___x_3562_; 
v_key_3559_ = lean_ctor_get(v_x_3557_, 0);
v_tail_3560_ = lean_ctor_get(v_x_3557_, 2);
v___x_3561_ = lean_unbox_uint32(v_key_3559_);
v___x_3562_ = lean_uint32_dec_eq(v___x_3561_, v_a_3556_);
if (v___x_3562_ == 0)
{
v_x_3557_ = v_tail_3560_;
goto _start;
}
else
{
return v___x_3562_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2___redArg___boxed(lean_object* v_a_3564_, lean_object* v_x_3565_){
_start:
{
uint32_t v_a_boxed_3566_; uint8_t v_res_3567_; lean_object* v_r_3568_; 
v_a_boxed_3566_ = lean_unbox_uint32(v_a_3564_);
lean_dec(v_a_3564_);
v_res_3567_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2___redArg(v_a_boxed_3566_, v_x_3565_);
lean_dec(v_x_3565_);
v_r_3568_ = lean_box(v_res_3567_);
return v_r_3568_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3___redArg(uint32_t v_a_3569_, lean_object* v_x_3570_){
_start:
{
if (lean_obj_tag(v_x_3570_) == 0)
{
return v_x_3570_;
}
else
{
lean_object* v_key_3571_; lean_object* v_value_3572_; lean_object* v_tail_3573_; lean_object* v___x_3575_; uint8_t v_isShared_3576_; uint8_t v_isSharedCheck_3583_; 
v_key_3571_ = lean_ctor_get(v_x_3570_, 0);
v_value_3572_ = lean_ctor_get(v_x_3570_, 1);
v_tail_3573_ = lean_ctor_get(v_x_3570_, 2);
v_isSharedCheck_3583_ = !lean_is_exclusive(v_x_3570_);
if (v_isSharedCheck_3583_ == 0)
{
v___x_3575_ = v_x_3570_;
v_isShared_3576_ = v_isSharedCheck_3583_;
goto v_resetjp_3574_;
}
else
{
lean_inc(v_tail_3573_);
lean_inc(v_value_3572_);
lean_inc(v_key_3571_);
lean_dec(v_x_3570_);
v___x_3575_ = lean_box(0);
v_isShared_3576_ = v_isSharedCheck_3583_;
goto v_resetjp_3574_;
}
v_resetjp_3574_:
{
uint32_t v___x_3577_; uint8_t v___x_3578_; 
v___x_3577_ = lean_unbox_uint32(v_key_3571_);
v___x_3578_ = lean_uint32_dec_eq(v___x_3577_, v_a_3569_);
if (v___x_3578_ == 0)
{
lean_object* v___x_3579_; lean_object* v___x_3581_; 
v___x_3579_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3___redArg(v_a_3569_, v_tail_3573_);
if (v_isShared_3576_ == 0)
{
lean_ctor_set(v___x_3575_, 2, v___x_3579_);
v___x_3581_ = v___x_3575_;
goto v_reusejp_3580_;
}
else
{
lean_object* v_reuseFailAlloc_3582_; 
v_reuseFailAlloc_3582_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3582_, 0, v_key_3571_);
lean_ctor_set(v_reuseFailAlloc_3582_, 1, v_value_3572_);
lean_ctor_set(v_reuseFailAlloc_3582_, 2, v___x_3579_);
v___x_3581_ = v_reuseFailAlloc_3582_;
goto v_reusejp_3580_;
}
v_reusejp_3580_:
{
return v___x_3581_;
}
}
else
{
lean_del_object(v___x_3575_);
lean_dec(v_value_3572_);
lean_dec(v_key_3571_);
return v_tail_3573_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3___redArg___boxed(lean_object* v_a_3584_, lean_object* v_x_3585_){
_start:
{
uint32_t v_a_boxed_3586_; lean_object* v_res_3587_; 
v_a_boxed_3586_ = lean_unbox_uint32(v_a_3584_);
lean_dec(v_a_3584_);
v_res_3587_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3___redArg(v_a_boxed_3586_, v_x_3585_);
return v_res_3587_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1___redArg(lean_object* v_m_3588_, uint32_t v_a_3589_){
_start:
{
lean_object* v_size_3590_; lean_object* v_buckets_3591_; lean_object* v___x_3592_; uint64_t v___x_3593_; uint64_t v___x_3594_; uint64_t v___x_3595_; uint64_t v_fold_3596_; uint64_t v___x_3597_; uint64_t v___x_3598_; uint64_t v___x_3599_; size_t v___x_3600_; size_t v___x_3601_; size_t v___x_3602_; size_t v___x_3603_; size_t v___x_3604_; lean_object* v_bkt_3605_; uint8_t v___x_3606_; 
v_size_3590_ = lean_ctor_get(v_m_3588_, 0);
v_buckets_3591_ = lean_ctor_get(v_m_3588_, 1);
v___x_3592_ = lean_array_get_size(v_buckets_3591_);
v___x_3593_ = lean_uint32_to_uint64(v_a_3589_);
v___x_3594_ = 32ULL;
v___x_3595_ = lean_uint64_shift_right(v___x_3593_, v___x_3594_);
v_fold_3596_ = lean_uint64_xor(v___x_3593_, v___x_3595_);
v___x_3597_ = 16ULL;
v___x_3598_ = lean_uint64_shift_right(v_fold_3596_, v___x_3597_);
v___x_3599_ = lean_uint64_xor(v_fold_3596_, v___x_3598_);
v___x_3600_ = lean_uint64_to_usize(v___x_3599_);
v___x_3601_ = lean_usize_of_nat(v___x_3592_);
v___x_3602_ = ((size_t)1ULL);
v___x_3603_ = lean_usize_sub(v___x_3601_, v___x_3602_);
v___x_3604_ = lean_usize_land(v___x_3600_, v___x_3603_);
v_bkt_3605_ = lean_array_uget_borrowed(v_buckets_3591_, v___x_3604_);
v___x_3606_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2___redArg(v_a_3589_, v_bkt_3605_);
if (v___x_3606_ == 0)
{
return v_m_3588_;
}
else
{
lean_object* v___x_3608_; uint8_t v_isShared_3609_; uint8_t v_isSharedCheck_3619_; 
lean_inc(v_bkt_3605_);
lean_inc_ref(v_buckets_3591_);
lean_inc(v_size_3590_);
v_isSharedCheck_3619_ = !lean_is_exclusive(v_m_3588_);
if (v_isSharedCheck_3619_ == 0)
{
lean_object* v_unused_3620_; lean_object* v_unused_3621_; 
v_unused_3620_ = lean_ctor_get(v_m_3588_, 1);
lean_dec(v_unused_3620_);
v_unused_3621_ = lean_ctor_get(v_m_3588_, 0);
lean_dec(v_unused_3621_);
v___x_3608_ = v_m_3588_;
v_isShared_3609_ = v_isSharedCheck_3619_;
goto v_resetjp_3607_;
}
else
{
lean_dec(v_m_3588_);
v___x_3608_ = lean_box(0);
v_isShared_3609_ = v_isSharedCheck_3619_;
goto v_resetjp_3607_;
}
v_resetjp_3607_:
{
lean_object* v___x_3610_; lean_object* v_buckets_x27_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3617_; 
v___x_3610_ = lean_box(0);
v_buckets_x27_3611_ = lean_array_uset(v_buckets_3591_, v___x_3604_, v___x_3610_);
v___x_3612_ = lean_unsigned_to_nat(1u);
v___x_3613_ = lean_nat_sub(v_size_3590_, v___x_3612_);
lean_dec(v_size_3590_);
v___x_3614_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3___redArg(v_a_3589_, v_bkt_3605_);
v___x_3615_ = lean_array_uset(v_buckets_x27_3611_, v___x_3604_, v___x_3614_);
if (v_isShared_3609_ == 0)
{
lean_ctor_set(v___x_3608_, 1, v___x_3615_);
lean_ctor_set(v___x_3608_, 0, v___x_3613_);
v___x_3617_ = v___x_3608_;
goto v_reusejp_3616_;
}
else
{
lean_object* v_reuseFailAlloc_3618_; 
v_reuseFailAlloc_3618_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3618_, 0, v___x_3613_);
lean_ctor_set(v_reuseFailAlloc_3618_, 1, v___x_3615_);
v___x_3617_ = v_reuseFailAlloc_3618_;
goto v_reusejp_3616_;
}
v_reusejp_3616_:
{
return v___x_3617_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1___redArg___boxed(lean_object* v_m_3622_, lean_object* v_a_3623_){
_start:
{
uint32_t v_a_boxed_3624_; lean_object* v_res_3625_; 
v_a_boxed_3624_ = lean_unbox_uint32(v_a_3623_);
lean_dec(v_a_3623_);
v_res_3625_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1___redArg(v_m_3622_, v_a_boxed_3624_);
return v_res_3625_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0___redArg(uint32_t v_a_3626_, lean_object* v_x_3627_){
_start:
{
if (lean_obj_tag(v_x_3627_) == 0)
{
lean_object* v___x_3628_; 
v___x_3628_ = lean_box(0);
return v___x_3628_;
}
else
{
lean_object* v_key_3629_; lean_object* v_value_3630_; lean_object* v_tail_3631_; uint32_t v___x_3632_; uint8_t v___x_3633_; 
v_key_3629_ = lean_ctor_get(v_x_3627_, 0);
v_value_3630_ = lean_ctor_get(v_x_3627_, 1);
v_tail_3631_ = lean_ctor_get(v_x_3627_, 2);
v___x_3632_ = lean_unbox_uint32(v_key_3629_);
v___x_3633_ = lean_uint32_dec_eq(v___x_3632_, v_a_3626_);
if (v___x_3633_ == 0)
{
v_x_3627_ = v_tail_3631_;
goto _start;
}
else
{
lean_object* v___x_3635_; 
lean_inc(v_value_3630_);
v___x_3635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3635_, 0, v_value_3630_);
return v___x_3635_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0___redArg___boxed(lean_object* v_a_3636_, lean_object* v_x_3637_){
_start:
{
uint32_t v_a_boxed_3638_; lean_object* v_res_3639_; 
v_a_boxed_3638_ = lean_unbox_uint32(v_a_3636_);
lean_dec(v_a_3636_);
v_res_3639_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0___redArg(v_a_boxed_3638_, v_x_3637_);
lean_dec(v_x_3637_);
return v_res_3639_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0___redArg(lean_object* v_m_3640_, uint32_t v_a_3641_){
_start:
{
lean_object* v_buckets_3642_; lean_object* v___x_3643_; uint64_t v___x_3644_; uint64_t v___x_3645_; uint64_t v___x_3646_; uint64_t v_fold_3647_; uint64_t v___x_3648_; uint64_t v___x_3649_; uint64_t v___x_3650_; size_t v___x_3651_; size_t v___x_3652_; size_t v___x_3653_; size_t v___x_3654_; size_t v___x_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; 
v_buckets_3642_ = lean_ctor_get(v_m_3640_, 1);
v___x_3643_ = lean_array_get_size(v_buckets_3642_);
v___x_3644_ = lean_uint32_to_uint64(v_a_3641_);
v___x_3645_ = 32ULL;
v___x_3646_ = lean_uint64_shift_right(v___x_3644_, v___x_3645_);
v_fold_3647_ = lean_uint64_xor(v___x_3644_, v___x_3646_);
v___x_3648_ = 16ULL;
v___x_3649_ = lean_uint64_shift_right(v_fold_3647_, v___x_3648_);
v___x_3650_ = lean_uint64_xor(v_fold_3647_, v___x_3649_);
v___x_3651_ = lean_uint64_to_usize(v___x_3650_);
v___x_3652_ = lean_usize_of_nat(v___x_3643_);
v___x_3653_ = ((size_t)1ULL);
v___x_3654_ = lean_usize_sub(v___x_3652_, v___x_3653_);
v___x_3655_ = lean_usize_land(v___x_3651_, v___x_3654_);
v___x_3656_ = lean_array_uget_borrowed(v_buckets_3642_, v___x_3655_);
v___x_3657_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0___redArg(v_a_3641_, v___x_3656_);
return v___x_3657_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0___redArg___boxed(lean_object* v_m_3658_, lean_object* v_a_3659_){
_start:
{
uint32_t v_a_boxed_3660_; lean_object* v_res_3661_; 
v_a_boxed_3660_ = lean_unbox_uint32(v_a_3659_);
lean_dec(v_a_3659_);
v_res_3661_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0___redArg(v_m_3658_, v_a_boxed_3660_);
lean_dec_ref(v_m_3658_);
return v_res_3661_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_dispatch(uint8_t v_kind_3667_, uint32_t v_fn_3668_, uint64_t v_call_3669_, lean_object* v_bytes_3670_){
_start:
{
uint8_t v___x_3672_; uint8_t v___x_3673_; 
v___x_3672_ = 3;
v___x_3673_ = lean_uint8_dec_eq(v_kind_3667_, v___x_3672_);
if (v___x_3673_ == 0)
{
lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v_asyncFns_3676_; lean_object* v___x_3677_; 
v___x_3674_ = l___private_Lasm_JS_Core_0__Lasm_JS_registry;
v___x_3675_ = lean_st_ref_get(v___x_3674_);
v_asyncFns_3676_ = lean_ctor_get(v___x_3675_, 0);
lean_inc_ref(v_asyncFns_3676_);
lean_dec(v___x_3675_);
v___x_3677_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0___redArg(v_asyncFns_3676_, v_fn_3668_);
lean_dec_ref(v_asyncFns_3676_);
if (lean_obj_tag(v___x_3677_) == 0)
{
lean_object* v___x_3678_; lean_object* v___x_3679_; 
lean_dec_ref(v_bytes_3670_);
v___x_3678_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_dispatch___closed__2));
v___x_3679_ = l___private_Lasm_JS_Core_0__Lasm_JS_reply(v_call_3669_, v___x_3678_);
return v___x_3679_;
}
else
{
lean_object* v_val_3680_; lean_object* v___x_3682_; uint8_t v_isShared_3683_; uint8_t v_isSharedCheck_3692_; 
v_val_3680_ = lean_ctor_get(v___x_3677_, 0);
v_isSharedCheck_3692_ = !lean_is_exclusive(v___x_3677_);
if (v_isSharedCheck_3692_ == 0)
{
v___x_3682_ = v___x_3677_;
v_isShared_3683_ = v_isSharedCheck_3692_;
goto v_resetjp_3681_;
}
else
{
lean_inc(v_val_3680_);
lean_dec(v___x_3677_);
v___x_3682_ = lean_box(0);
v_isShared_3683_ = v_isSharedCheck_3692_;
goto v_resetjp_3681_;
}
v_resetjp_3681_:
{
lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3690_; 
v___x_3684_ = lean_box_uint64(v_call_3669_);
v___x_3685_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_runCall___boxed), 4, 3);
lean_closure_set(v___x_3685_, 0, v___x_3684_);
lean_closure_set(v___x_3685_, 1, v_val_3680_);
lean_closure_set(v___x_3685_, 2, v_bytes_3670_);
v___x_3686_ = lean_unsigned_to_nat(0u);
v___x_3687_ = lean_box(0);
v___x_3688_ = lean_io_as_task(v___x_3685_, v___x_3686_);
lean_dec_ref(v___x_3688_);
if (v_isShared_3683_ == 0)
{
lean_ctor_set_tag(v___x_3682_, 0);
lean_ctor_set(v___x_3682_, 0, v___x_3687_);
v___x_3690_ = v___x_3682_;
goto v_reusejp_3689_;
}
else
{
lean_object* v_reuseFailAlloc_3691_; 
v_reuseFailAlloc_3691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3691_, 0, v___x_3687_);
v___x_3690_ = v_reuseFailAlloc_3691_;
goto v_reusejp_3689_;
}
v_reusejp_3689_:
{
return v___x_3690_;
}
}
}
}
else
{
lean_object* v___x_3693_; lean_object* v___x_3694_; uint32_t v_next_3695_; lean_object* v_asyncFns_3696_; lean_object* v_syncFns_3697_; lean_object* v___x_3699_; uint8_t v_isShared_3700_; uint8_t v_isSharedCheck_3708_; 
lean_dec_ref(v_bytes_3670_);
v___x_3693_ = l___private_Lasm_JS_Core_0__Lasm_JS_registry;
v___x_3694_ = lean_st_ref_take(v___x_3693_);
v_next_3695_ = lean_ctor_get_uint32(v___x_3694_, sizeof(void*)*2);
v_asyncFns_3696_ = lean_ctor_get(v___x_3694_, 0);
v_syncFns_3697_ = lean_ctor_get(v___x_3694_, 1);
v_isSharedCheck_3708_ = !lean_is_exclusive(v___x_3694_);
if (v_isSharedCheck_3708_ == 0)
{
v___x_3699_ = v___x_3694_;
v_isShared_3700_ = v_isSharedCheck_3708_;
goto v_resetjp_3698_;
}
else
{
lean_inc(v_syncFns_3697_);
lean_inc(v_asyncFns_3696_);
lean_dec(v___x_3694_);
v___x_3699_ = lean_box(0);
v_isShared_3700_ = v_isSharedCheck_3708_;
goto v_resetjp_3698_;
}
v_resetjp_3698_:
{
lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3704_; 
v___x_3701_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1___redArg(v_asyncFns_3696_, v_fn_3668_);
v___x_3702_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1___redArg(v_syncFns_3697_, v_fn_3668_);
if (v_isShared_3700_ == 0)
{
lean_ctor_set(v___x_3699_, 1, v___x_3702_);
lean_ctor_set(v___x_3699_, 0, v___x_3701_);
v___x_3704_ = v___x_3699_;
goto v_reusejp_3703_;
}
else
{
lean_object* v_reuseFailAlloc_3707_; 
v_reuseFailAlloc_3707_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v_reuseFailAlloc_3707_, 0, v___x_3701_);
lean_ctor_set(v_reuseFailAlloc_3707_, 1, v___x_3702_);
lean_ctor_set_uint32(v_reuseFailAlloc_3707_, sizeof(void*)*2, v_next_3695_);
v___x_3704_ = v_reuseFailAlloc_3707_;
goto v_reusejp_3703_;
}
v_reusejp_3703_:
{
lean_object* v___x_3705_; lean_object* v___x_3706_; 
v___x_3705_ = lean_st_ref_put(v___x_3693_, v___x_3704_);
v___x_3706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3706_, 0, v___x_3705_);
return v___x_3706_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_dispatch___boxed(lean_object* v_kind_3709_, lean_object* v_fn_3710_, lean_object* v_call_3711_, lean_object* v_bytes_3712_, lean_object* v_a_3713_){
_start:
{
uint8_t v_kind_boxed_3714_; uint32_t v_fn_boxed_3715_; uint64_t v_call_boxed_3716_; lean_object* v_res_3717_; 
v_kind_boxed_3714_ = lean_unbox(v_kind_3709_);
v_fn_boxed_3715_ = lean_unbox_uint32(v_fn_3710_);
lean_dec(v_fn_3710_);
v_call_boxed_3716_ = lean_unbox_uint64(v_call_3711_);
lean_dec_ref(v_call_3711_);
v_res_3717_ = l___private_Lasm_JS_Core_0__Lasm_JS_dispatch(v_kind_boxed_3714_, v_fn_boxed_3715_, v_call_boxed_3716_, v_bytes_3712_);
return v_res_3717_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0(lean_object* v_00_u03b2_3718_, lean_object* v_m_3719_, uint32_t v_a_3720_){
_start:
{
lean_object* v___x_3721_; 
v___x_3721_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0___redArg(v_m_3719_, v_a_3720_);
return v___x_3721_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0___boxed(lean_object* v_00_u03b2_3722_, lean_object* v_m_3723_, lean_object* v_a_3724_){
_start:
{
uint32_t v_a_boxed_3725_; lean_object* v_res_3726_; 
v_a_boxed_3725_ = lean_unbox_uint32(v_a_3724_);
lean_dec(v_a_3724_);
v_res_3726_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0(v_00_u03b2_3722_, v_m_3723_, v_a_boxed_3725_);
lean_dec_ref(v_m_3723_);
return v_res_3726_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1(lean_object* v_00_u03b2_3727_, lean_object* v_m_3728_, uint32_t v_a_3729_){
_start:
{
lean_object* v___x_3730_; 
v___x_3730_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1___redArg(v_m_3728_, v_a_3729_);
return v___x_3730_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1___boxed(lean_object* v_00_u03b2_3731_, lean_object* v_m_3732_, lean_object* v_a_3733_){
_start:
{
uint32_t v_a_boxed_3734_; lean_object* v_res_3735_; 
v_a_boxed_3734_ = lean_unbox_uint32(v_a_3733_);
lean_dec(v_a_3733_);
v_res_3735_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1(v_00_u03b2_3731_, v_m_3732_, v_a_boxed_3734_);
return v_res_3735_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0(lean_object* v_00_u03b2_3736_, uint32_t v_a_3737_, lean_object* v_x_3738_){
_start:
{
lean_object* v___x_3739_; 
v___x_3739_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0___redArg(v_a_3737_, v_x_3738_);
return v___x_3739_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3740_, lean_object* v_a_3741_, lean_object* v_x_3742_){
_start:
{
uint32_t v_a_boxed_3743_; lean_object* v_res_3744_; 
v_a_boxed_3743_ = lean_unbox_uint32(v_a_3741_);
lean_dec(v_a_3741_);
v_res_3744_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0(v_00_u03b2_3740_, v_a_boxed_3743_, v_x_3742_);
lean_dec(v_x_3742_);
return v_res_3744_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2(lean_object* v_00_u03b2_3745_, uint32_t v_a_3746_, lean_object* v_x_3747_){
_start:
{
uint8_t v___x_3748_; 
v___x_3748_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2___redArg(v_a_3746_, v_x_3747_);
return v___x_3748_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2___boxed(lean_object* v_00_u03b2_3749_, lean_object* v_a_3750_, lean_object* v_x_3751_){
_start:
{
uint32_t v_a_boxed_3752_; uint8_t v_res_3753_; lean_object* v_r_3754_; 
v_a_boxed_3752_ = lean_unbox_uint32(v_a_3750_);
lean_dec(v_a_3750_);
v_res_3753_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2(v_00_u03b2_3749_, v_a_boxed_3752_, v_x_3751_);
lean_dec(v_x_3751_);
v_r_3754_ = lean_box(v_res_3753_);
return v_r_3754_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3(lean_object* v_00_u03b2_3755_, uint32_t v_a_3756_, lean_object* v_x_3757_){
_start:
{
lean_object* v___x_3758_; 
v___x_3758_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3___redArg(v_a_3756_, v_x_3757_);
return v___x_3758_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3___boxed(lean_object* v_00_u03b2_3759_, lean_object* v_a_3760_, lean_object* v_x_3761_){
_start:
{
uint32_t v_a_boxed_3762_; lean_object* v_res_3763_; 
v_a_boxed_3762_ = lean_unbox_uint32(v_a_3760_);
lean_dec(v_a_3760_);
v_res_3763_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3(v_00_u03b2_3759_, v_a_boxed_3762_, v_x_3761_);
return v_res_3763_;
}
}
static lean_object* _init_l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__1(void){
_start:
{
lean_object* v___x_3770_; lean_object* v___x_3771_; 
v___x_3770_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__0));
v___x_3771_ = lean_byte_array_size(v___x_3770_);
return v___x_3771_;
}
}
static lean_object* _init_l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__3(void){
_start:
{
lean_object* v___x_3778_; lean_object* v___x_3779_; 
v___x_3778_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__2));
v___x_3779_ = lean_byte_array_size(v___x_3778_);
return v___x_3779_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch(uint32_t v_fn_3780_, lean_object* v_bytes_3781_){
_start:
{
lean_object* v_a_3784_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v_syncFns_3798_; lean_object* v___x_3799_; 
v___x_3796_ = l___private_Lasm_JS_Core_0__Lasm_JS_registry;
v___x_3797_ = lean_st_ref_get(v___x_3796_);
v_syncFns_3798_ = lean_ctor_get(v___x_3797_, 1);
lean_inc_ref(v_syncFns_3798_);
lean_dec(v___x_3797_);
v___x_3799_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0___redArg(v_syncFns_3798_, v_fn_3780_);
lean_dec_ref(v_syncFns_3798_);
if (lean_obj_tag(v___x_3799_) == 1)
{
lean_object* v_val_3800_; lean_object* v___x_3801_; 
v_val_3800_ = lean_ctor_get(v___x_3799_, 0);
lean_inc(v_val_3800_);
lean_dec_ref_known(v___x_3799_, 1);
v___x_3801_ = l___private_Lasm_JS_Core_0__Lasm_JS_argsOf(v_bytes_3781_);
if (lean_obj_tag(v___x_3801_) == 0)
{
lean_object* v_a_3802_; lean_object* v___x_3803_; 
v_a_3802_ = lean_ctor_get(v___x_3801_, 0);
lean_inc(v_a_3802_);
lean_dec_ref_known(v___x_3801_, 1);
v___x_3803_ = lean_apply_2(v_val_3800_, v_a_3802_, lean_box(0));
if (lean_obj_tag(v___x_3803_) == 0)
{
lean_object* v_a_3804_; lean_object* v___x_3806_; uint8_t v_isShared_3807_; uint8_t v_isSharedCheck_3833_; 
v_a_3804_ = lean_ctor_get(v___x_3803_, 0);
v_isSharedCheck_3833_ = !lean_is_exclusive(v___x_3803_);
if (v_isSharedCheck_3833_ == 0)
{
v___x_3806_ = v___x_3803_;
v_isShared_3807_ = v_isSharedCheck_3833_;
goto v_resetjp_3805_;
}
else
{
lean_inc(v_a_3804_);
lean_dec(v___x_3803_);
v___x_3806_ = lean_box(0);
v_isShared_3807_ = v_isSharedCheck_3833_;
goto v_resetjp_3805_;
}
v_resetjp_3805_:
{
lean_object* v___x_3808_; 
v___x_3808_ = l_Lasm_JS_Wire_encode(v_a_3804_);
if (lean_obj_tag(v___x_3808_) == 0)
{
lean_object* v_a_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; uint8_t v___x_3815_; lean_object* v___x_3816_; lean_object* v___x_3817_; lean_object* v___x_3818_; lean_object* v___x_3820_; 
lean_dec(v_a_3804_);
v_a_3809_ = lean_ctor_get(v___x_3808_, 0);
lean_inc(v_a_3809_);
lean_dec_ref_known(v___x_3808_, 1);
v___x_3810_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__0));
v___x_3811_ = lean_string_to_utf8(v_a_3809_);
lean_dec(v_a_3809_);
v___x_3812_ = lean_unsigned_to_nat(0u);
v___x_3813_ = lean_obj_once(&l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__1, &l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__1_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__1);
v___x_3814_ = lean_byte_array_size(v___x_3811_);
v___x_3815_ = 0;
v___x_3816_ = lean_byte_array_copy_slice(v___x_3811_, v___x_3812_, v___x_3810_, v___x_3813_, v___x_3814_, v___x_3815_);
lean_dec_ref(v___x_3811_);
v___x_3817_ = lean_box(0);
v___x_3818_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3818_, 0, v___x_3816_);
lean_ctor_set(v___x_3818_, 1, v___x_3817_);
if (v_isShared_3807_ == 0)
{
lean_ctor_set(v___x_3806_, 0, v___x_3818_);
v___x_3820_ = v___x_3806_;
goto v_reusejp_3819_;
}
else
{
lean_object* v_reuseFailAlloc_3821_; 
v_reuseFailAlloc_3821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3821_, 0, v___x_3818_);
v___x_3820_ = v_reuseFailAlloc_3821_;
goto v_reusejp_3819_;
}
v_reusejp_3819_:
{
return v___x_3820_;
}
}
else
{
lean_object* v_a_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; lean_object* v___x_3826_; uint8_t v___x_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3831_; 
v_a_3822_ = lean_ctor_get(v___x_3808_, 0);
lean_inc(v_a_3822_);
lean_dec_ref_known(v___x_3808_, 1);
v___x_3823_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__2));
v___x_3824_ = lean_unsigned_to_nat(0u);
v___x_3825_ = lean_obj_once(&l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__3, &l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__3_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__3);
v___x_3826_ = lean_byte_array_size(v_a_3822_);
v___x_3827_ = 0;
v___x_3828_ = lean_byte_array_copy_slice(v_a_3822_, v___x_3824_, v___x_3823_, v___x_3825_, v___x_3826_, v___x_3827_);
lean_dec(v_a_3822_);
v___x_3829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3829_, 0, v___x_3828_);
lean_ctor_set(v___x_3829_, 1, v_a_3804_);
if (v_isShared_3807_ == 0)
{
lean_ctor_set(v___x_3806_, 0, v___x_3829_);
v___x_3831_ = v___x_3806_;
goto v_reusejp_3830_;
}
else
{
lean_object* v_reuseFailAlloc_3832_; 
v_reuseFailAlloc_3832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3832_, 0, v___x_3829_);
v___x_3831_ = v_reuseFailAlloc_3832_;
goto v_reusejp_3830_;
}
v_reusejp_3830_:
{
return v___x_3831_;
}
}
}
}
else
{
lean_object* v_a_3834_; 
v_a_3834_ = lean_ctor_get(v___x_3803_, 0);
lean_inc(v_a_3834_);
lean_dec_ref_known(v___x_3803_, 1);
v_a_3784_ = v_a_3834_;
goto v___jp_3783_;
}
}
else
{
lean_object* v_a_3835_; 
lean_dec(v_val_3800_);
v_a_3835_ = lean_ctor_get(v___x_3801_, 0);
lean_inc(v_a_3835_);
lean_dec_ref_known(v___x_3801_, 1);
v_a_3784_ = v_a_3835_;
goto v___jp_3783_;
}
}
else
{
lean_object* v___x_3836_; 
lean_dec(v___x_3799_);
v___x_3836_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_dispatch___closed__1));
v_a_3784_ = v___x_3836_;
goto v___jp_3783_;
}
v___jp_3783_:
{
lean_object* v___x_3785_; lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; uint8_t v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; 
v___x_3785_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__0));
v___x_3786_ = lean_io_error_to_string(v_a_3784_);
v___x_3787_ = lean_string_to_utf8(v___x_3786_);
lean_dec_ref(v___x_3786_);
v___x_3788_ = lean_unsigned_to_nat(0u);
v___x_3789_ = lean_obj_once(&l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__1, &l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__1_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__1);
v___x_3790_ = lean_byte_array_size(v___x_3787_);
v___x_3791_ = 0;
v___x_3792_ = lean_byte_array_copy_slice(v___x_3787_, v___x_3788_, v___x_3785_, v___x_3789_, v___x_3790_, v___x_3791_);
lean_dec_ref(v___x_3787_);
v___x_3793_ = lean_box(0);
v___x_3794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3794_, 0, v___x_3792_);
lean_ctor_set(v___x_3794_, 1, v___x_3793_);
v___x_3795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3795_, 0, v___x_3794_);
return v___x_3795_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___boxed(lean_object* v_fn_3837_, lean_object* v_bytes_3838_, lean_object* v_a_3839_){
_start:
{
uint32_t v_fn_boxed_3840_; lean_object* v_res_3841_; 
v_fn_boxed_3840_ = lean_unbox_uint32(v_fn_3837_);
lean_dec(v_fn_3837_);
v_res_3841_ = l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch(v_fn_boxed_3840_, v_bytes_3838_);
lean_dec_ref(v_bytes_3838_);
return v_res_3841_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted(){
_start:
{
lean_object* v___x_3844_; lean_object* v___x_3845_; 
v___x_3844_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted___closed__0));
v___x_3845_ = lasm_js_start(v___x_3844_);
return v___x_3845_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted___boxed(lean_object* v_a_3846_){
_start:
{
lean_object* v_res_3847_; 
v_res_3847_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
return v_res_3847_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTAsync___redArg___lam__0(lean_object* v_inst_3848_, lean_object* v_00_u03b1_3849_, lean_object* v_x_3850_, lean_object* v_a_3851_){
_start:
{
lean_object* v___x_3852_; 
v___x_3852_ = lean_apply_2(v_inst_3848_, lean_box(0), v_a_3851_);
return v___x_3852_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTAsync___redArg___lam__0___boxed(lean_object* v_inst_3853_, lean_object* v_00_u03b1_3854_, lean_object* v_x_3855_, lean_object* v_a_3856_){
_start:
{
lean_object* v_res_3857_; 
v_res_3857_ = l_Lasm_JS_instMonadJSOfMonadLiftTAsync___redArg___lam__0(v_inst_3853_, v_00_u03b1_3854_, v_x_3855_, v_a_3856_);
lean_dec_ref(v_x_3855_);
return v_res_3857_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTAsync___redArg(lean_object* v_inst_3858_){
_start:
{
lean_object* v___f_3859_; 
v___f_3859_ = lean_alloc_closure((void*)(l_Lasm_JS_instMonadJSOfMonadLiftTAsync___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_3859_, 0, v_inst_3858_);
return v___f_3859_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTAsync(lean_object* v_m_3860_, lean_object* v_inst_3861_){
_start:
{
lean_object* v___f_3862_; 
v___f_3862_ = lean_alloc_closure((void*)(l_Lasm_JS_instMonadJSOfMonadLiftTAsync___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_3862_, 0, v_inst_3861_);
return v___f_3862_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTIO___redArg___lam__0(lean_object* v_inst_3863_, lean_object* v_00_u03b1_3864_, lean_object* v_b_3865_, lean_object* v_x_3866_){
_start:
{
lean_object* v___x_3867_; 
v___x_3867_ = lean_apply_2(v_inst_3863_, lean_box(0), v_b_3865_);
return v___x_3867_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTIO___redArg___lam__0___boxed(lean_object* v_inst_3868_, lean_object* v_00_u03b1_3869_, lean_object* v_b_3870_, lean_object* v_x_3871_){
_start:
{
lean_object* v_res_3872_; 
v_res_3872_ = l_Lasm_JS_instMonadJSOfMonadLiftTIO___redArg___lam__0(v_inst_3868_, v_00_u03b1_3869_, v_b_3870_, v_x_3871_);
lean_dec_ref(v_x_3871_);
return v_res_3872_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTIO___redArg(lean_object* v_inst_3873_){
_start:
{
lean_object* v___f_3874_; 
v___f_3874_ = lean_alloc_closure((void*)(l_Lasm_JS_instMonadJSOfMonadLiftTIO___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_3874_, 0, v_inst_3873_);
return v___f_3874_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTIO(lean_object* v_m_3875_, lean_object* v_inst_3876_){
_start:
{
lean_object* v___f_3877_; 
v___f_3877_ = lean_alloc_closure((void*)(l_Lasm_JS_instMonadJSOfMonadLiftTIO___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_3877_, 0, v_inst_3876_);
return v___f_3877_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes___lam__0(lean_object* v_x_3883_){
_start:
{
if (lean_obj_tag(v_x_3883_) == 0)
{
lean_object* v___x_3884_; 
v___x_3884_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes___lam__0___closed__2));
return v___x_3884_;
}
else
{
lean_object* v_val_3885_; lean_object* v___x_3887_; uint8_t v_isShared_3888_; uint8_t v_isSharedCheck_3908_; 
v_val_3885_ = lean_ctor_get(v_x_3883_, 0);
v_isSharedCheck_3908_ = !lean_is_exclusive(v_x_3883_);
if (v_isSharedCheck_3908_ == 0)
{
v___x_3887_ = v_x_3883_;
v_isShared_3888_ = v_isSharedCheck_3908_;
goto v_resetjp_3886_;
}
else
{
lean_inc(v_val_3885_);
lean_dec(v_x_3883_);
v___x_3887_ = lean_box(0);
v_isShared_3888_ = v_isSharedCheck_3908_;
goto v_resetjp_3886_;
}
v_resetjp_3886_:
{
if (lean_obj_tag(v_val_3885_) == 0)
{
lean_object* v_a_3889_; lean_object* v___x_3891_; uint8_t v_isShared_3892_; uint8_t v_isSharedCheck_3899_; 
v_a_3889_ = lean_ctor_get(v_val_3885_, 0);
v_isSharedCheck_3899_ = !lean_is_exclusive(v_val_3885_);
if (v_isSharedCheck_3899_ == 0)
{
v___x_3891_ = v_val_3885_;
v_isShared_3892_ = v_isSharedCheck_3899_;
goto v_resetjp_3890_;
}
else
{
lean_inc(v_a_3889_);
lean_dec(v_val_3885_);
v___x_3891_ = lean_box(0);
v_isShared_3892_ = v_isSharedCheck_3899_;
goto v_resetjp_3890_;
}
v_resetjp_3890_:
{
lean_object* v___x_3894_; 
if (v_isShared_3888_ == 0)
{
lean_ctor_set_tag(v___x_3887_, 18);
lean_ctor_set(v___x_3887_, 0, v_a_3889_);
v___x_3894_ = v___x_3887_;
goto v_reusejp_3893_;
}
else
{
lean_object* v_reuseFailAlloc_3898_; 
v_reuseFailAlloc_3898_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3898_, 0, v_a_3889_);
v___x_3894_ = v_reuseFailAlloc_3898_;
goto v_reusejp_3893_;
}
v_reusejp_3893_:
{
lean_object* v___x_3896_; 
if (v_isShared_3892_ == 0)
{
lean_ctor_set(v___x_3891_, 0, v___x_3894_);
v___x_3896_ = v___x_3891_;
goto v_reusejp_3895_;
}
else
{
lean_object* v_reuseFailAlloc_3897_; 
v_reuseFailAlloc_3897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3897_, 0, v___x_3894_);
v___x_3896_ = v_reuseFailAlloc_3897_;
goto v_reusejp_3895_;
}
v_reusejp_3895_:
{
return v___x_3896_;
}
}
}
}
else
{
lean_object* v_a_3900_; lean_object* v___x_3902_; uint8_t v_isShared_3903_; uint8_t v_isSharedCheck_3907_; 
lean_del_object(v___x_3887_);
v_a_3900_ = lean_ctor_get(v_val_3885_, 0);
v_isSharedCheck_3907_ = !lean_is_exclusive(v_val_3885_);
if (v_isSharedCheck_3907_ == 0)
{
v___x_3902_ = v_val_3885_;
v_isShared_3903_ = v_isSharedCheck_3907_;
goto v_resetjp_3901_;
}
else
{
lean_inc(v_a_3900_);
lean_dec(v_val_3885_);
v___x_3902_ = lean_box(0);
v_isShared_3903_ = v_isSharedCheck_3907_;
goto v_resetjp_3901_;
}
v_resetjp_3901_:
{
lean_object* v___x_3905_; 
if (v_isShared_3903_ == 0)
{
v___x_3905_ = v___x_3902_;
goto v_reusejp_3904_;
}
else
{
lean_object* v_reuseFailAlloc_3906_; 
v_reuseFailAlloc_3906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3906_, 0, v_a_3900_);
v___x_3905_ = v_reuseFailAlloc_3906_;
goto v_reusejp_3904_;
}
v_reusejp_3904_:
{
return v___x_3905_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object* v_p_3910_){
_start:
{
lean_object* v___f_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; uint8_t v___x_3915_; lean_object* v___x_3916_; lean_object* v___x_3917_; 
v___f_3912_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes___closed__0));
v___x_3913_ = lean_io_promise_result_opt(v_p_3910_);
v___x_3914_ = lean_unsigned_to_nat(0u);
v___x_3915_ = 1;
v___x_3916_ = lean_task_map(v___f_3912_, v___x_3913_, v___x_3914_, v___x_3915_);
v___x_3917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3917_, 0, v___x_3916_);
return v___x_3917_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes___boxed(lean_object* v_p_3918_, lean_object* v_a_3919_){
_start:
{
lean_object* v_res_3920_; 
v_res_3920_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_p_3918_);
lean_dec(v_p_3918_);
return v_res_3920_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__0(lean_object* v_inst_3921_, lean_object* v_context_3922_, lean_object* v_x_3923_){
_start:
{
lean_object* v_val_3926_; 
if (lean_obj_tag(v_x_3923_) == 0)
{
lean_object* v_a_3928_; lean_object* v___x_3930_; uint8_t v_isShared_3931_; uint8_t v_isSharedCheck_3936_; 
lean_dec_ref(v_inst_3921_);
v_a_3928_ = lean_ctor_get(v_x_3923_, 0);
v_isSharedCheck_3936_ = !lean_is_exclusive(v_x_3923_);
if (v_isSharedCheck_3936_ == 0)
{
v___x_3930_ = v_x_3923_;
v_isShared_3931_ = v_isSharedCheck_3936_;
goto v_resetjp_3929_;
}
else
{
lean_inc(v_a_3928_);
lean_dec(v_x_3923_);
v___x_3930_ = lean_box(0);
v_isShared_3931_ = v_isSharedCheck_3936_;
goto v_resetjp_3929_;
}
v_resetjp_3929_:
{
lean_object* v___x_3933_; 
if (v_isShared_3931_ == 0)
{
v___x_3933_ = v___x_3930_;
goto v_reusejp_3932_;
}
else
{
lean_object* v_reuseFailAlloc_3935_; 
v_reuseFailAlloc_3935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3935_, 0, v_a_3928_);
v___x_3933_ = v_reuseFailAlloc_3935_;
goto v_reusejp_3932_;
}
v_reusejp_3932_:
{
lean_object* v___x_3934_; 
v___x_3934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3934_, 0, v___x_3933_);
return v___x_3934_;
}
}
}
else
{
lean_object* v_a_3937_; lean_object* v___x_3939_; uint8_t v_isShared_3940_; uint8_t v_isSharedCheck_3950_; 
v_a_3937_ = lean_ctor_get(v_x_3923_, 0);
v_isSharedCheck_3950_ = !lean_is_exclusive(v_x_3923_);
if (v_isSharedCheck_3950_ == 0)
{
v___x_3939_ = v_x_3923_;
v_isShared_3940_ = v_isSharedCheck_3950_;
goto v_resetjp_3938_;
}
else
{
lean_inc(v_a_3937_);
lean_dec(v_x_3923_);
v___x_3939_ = lean_box(0);
v_isShared_3940_ = v_isSharedCheck_3950_;
goto v_resetjp_3938_;
}
v_resetjp_3938_:
{
lean_object* v___x_3941_; 
v___x_3941_ = l_Lasm_JS_decodeAs___redArg(v_inst_3921_, v_context_3922_, v_a_3937_);
if (lean_obj_tag(v___x_3941_) == 0)
{
lean_object* v_a_3942_; lean_object* v___x_3944_; 
v_a_3942_ = lean_ctor_get(v___x_3941_, 0);
lean_inc(v_a_3942_);
lean_dec_ref_known(v___x_3941_, 1);
if (v_isShared_3940_ == 0)
{
lean_ctor_set(v___x_3939_, 0, v_a_3942_);
v___x_3944_ = v___x_3939_;
goto v_reusejp_3943_;
}
else
{
lean_object* v_reuseFailAlloc_3945_; 
v_reuseFailAlloc_3945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3945_, 0, v_a_3942_);
v___x_3944_ = v_reuseFailAlloc_3945_;
goto v_reusejp_3943_;
}
v_reusejp_3943_:
{
v_val_3926_ = v___x_3944_;
goto v___jp_3925_;
}
}
else
{
lean_object* v_a_3946_; lean_object* v___x_3948_; 
v_a_3946_ = lean_ctor_get(v___x_3941_, 0);
lean_inc(v_a_3946_);
lean_dec_ref_known(v___x_3941_, 1);
if (v_isShared_3940_ == 0)
{
lean_ctor_set_tag(v___x_3939_, 0);
lean_ctor_set(v___x_3939_, 0, v_a_3946_);
v___x_3948_ = v___x_3939_;
goto v_reusejp_3947_;
}
else
{
lean_object* v_reuseFailAlloc_3949_; 
v_reuseFailAlloc_3949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3949_, 0, v_a_3946_);
v___x_3948_ = v_reuseFailAlloc_3949_;
goto v_reusejp_3947_;
}
v_reusejp_3947_:
{
v_val_3926_ = v___x_3948_;
goto v___jp_3925_;
}
}
}
}
v___jp_3925_:
{
lean_object* v___x_3927_; 
v___x_3927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3927_, 0, v_val_3926_);
return v___x_3927_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__0___boxed(lean_object* v_inst_3951_, lean_object* v_context_3952_, lean_object* v_x_3953_, lean_object* v___y_3954_){
_start:
{
lean_object* v_res_3955_; 
v_res_3955_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__0(v_inst_3951_, v_context_3952_, v_x_3953_);
lean_dec_ref(v_context_3952_);
return v_res_3955_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__1(lean_object* v___f_3956_, lean_object* v_bytes_3957_){
_start:
{
lean_object* v___x_3959_; uint8_t v___x_3960_; lean_object* v_val_3962_; lean_object* v___x_3965_; 
v___x_3959_ = lean_unsigned_to_nat(0u);
v___x_3960_ = 0;
v___x_3965_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3957_);
if (lean_obj_tag(v___x_3965_) == 0)
{
lean_object* v_a_3966_; lean_object* v___x_3968_; uint8_t v_isShared_3969_; uint8_t v_isSharedCheck_3973_; 
v_a_3966_ = lean_ctor_get(v___x_3965_, 0);
v_isSharedCheck_3973_ = !lean_is_exclusive(v___x_3965_);
if (v_isSharedCheck_3973_ == 0)
{
v___x_3968_ = v___x_3965_;
v_isShared_3969_ = v_isSharedCheck_3973_;
goto v_resetjp_3967_;
}
else
{
lean_inc(v_a_3966_);
lean_dec(v___x_3965_);
v___x_3968_ = lean_box(0);
v_isShared_3969_ = v_isSharedCheck_3973_;
goto v_resetjp_3967_;
}
v_resetjp_3967_:
{
lean_object* v___x_3971_; 
if (v_isShared_3969_ == 0)
{
lean_ctor_set_tag(v___x_3968_, 1);
v___x_3971_ = v___x_3968_;
goto v_reusejp_3970_;
}
else
{
lean_object* v_reuseFailAlloc_3972_; 
v_reuseFailAlloc_3972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3972_, 0, v_a_3966_);
v___x_3971_ = v_reuseFailAlloc_3972_;
goto v_reusejp_3970_;
}
v_reusejp_3970_:
{
v_val_3962_ = v___x_3971_;
goto v___jp_3961_;
}
}
}
else
{
lean_object* v_a_3974_; lean_object* v___x_3976_; uint8_t v_isShared_3977_; uint8_t v_isSharedCheck_3981_; 
v_a_3974_ = lean_ctor_get(v___x_3965_, 0);
v_isSharedCheck_3981_ = !lean_is_exclusive(v___x_3965_);
if (v_isSharedCheck_3981_ == 0)
{
v___x_3976_ = v___x_3965_;
v_isShared_3977_ = v_isSharedCheck_3981_;
goto v_resetjp_3975_;
}
else
{
lean_inc(v_a_3974_);
lean_dec(v___x_3965_);
v___x_3976_ = lean_box(0);
v_isShared_3977_ = v_isSharedCheck_3981_;
goto v_resetjp_3975_;
}
v_resetjp_3975_:
{
lean_object* v___x_3979_; 
if (v_isShared_3977_ == 0)
{
lean_ctor_set_tag(v___x_3976_, 0);
v___x_3979_ = v___x_3976_;
goto v_reusejp_3978_;
}
else
{
lean_object* v_reuseFailAlloc_3980_; 
v_reuseFailAlloc_3980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3980_, 0, v_a_3974_);
v___x_3979_ = v_reuseFailAlloc_3980_;
goto v_reusejp_3978_;
}
v_reusejp_3978_:
{
v_val_3962_ = v___x_3979_;
goto v___jp_3961_;
}
}
}
v___jp_3961_:
{
lean_object* v___x_3963_; lean_object* v___x_3964_; 
v___x_3963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3963_, 0, v_val_3962_);
v___x_3964_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3959_, v___x_3960_, v___x_3963_, v___f_3956_);
return v___x_3964_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__1___boxed(lean_object* v___f_3982_, lean_object* v_bytes_3983_, lean_object* v___y_3984_){
_start:
{
lean_object* v_res_3985_; 
v_res_3985_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__1(v___f_3982_, v_bytes_3983_);
lean_dec_ref(v_bytes_3983_);
return v_res_3985_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__2(lean_object* v___f_3986_, lean_object* v_x_3987_){
_start:
{
if (lean_obj_tag(v_x_3987_) == 0)
{
lean_object* v_a_3989_; lean_object* v___x_3991_; uint8_t v_isShared_3992_; uint8_t v_isSharedCheck_3997_; 
lean_dec_ref(v___f_3986_);
v_a_3989_ = lean_ctor_get(v_x_3987_, 0);
v_isSharedCheck_3997_ = !lean_is_exclusive(v_x_3987_);
if (v_isSharedCheck_3997_ == 0)
{
v___x_3991_ = v_x_3987_;
v_isShared_3992_ = v_isSharedCheck_3997_;
goto v_resetjp_3990_;
}
else
{
lean_inc(v_a_3989_);
lean_dec(v_x_3987_);
v___x_3991_ = lean_box(0);
v_isShared_3992_ = v_isSharedCheck_3997_;
goto v_resetjp_3990_;
}
v_resetjp_3990_:
{
lean_object* v___x_3994_; 
if (v_isShared_3992_ == 0)
{
v___x_3994_ = v___x_3991_;
goto v_reusejp_3993_;
}
else
{
lean_object* v_reuseFailAlloc_3996_; 
v_reuseFailAlloc_3996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3996_, 0, v_a_3989_);
v___x_3994_ = v_reuseFailAlloc_3996_;
goto v_reusejp_3993_;
}
v_reusejp_3993_:
{
lean_object* v___x_3995_; 
v___x_3995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3995_, 0, v___x_3994_);
return v___x_3995_;
}
}
}
else
{
lean_object* v_a_3998_; lean_object* v___x_3999_; 
v_a_3998_ = lean_ctor_get(v_x_3987_, 0);
lean_inc(v_a_3998_);
lean_dec_ref_known(v_x_3987_, 1);
v___x_3999_ = lean_apply_2(v___f_3986_, v_a_3998_, lean_box(0));
return v___x_3999_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__2___boxed(lean_object* v___f_4000_, lean_object* v_x_4001_, lean_object* v___y_4002_){
_start:
{
lean_object* v_res_4003_; 
v_res_4003_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__2(v___f_4000_, v_x_4001_);
return v_res_4003_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__4(lean_object* v_failurePrefix_4004_, lean_object* v_x_4005_){
_start:
{
if (lean_obj_tag(v_x_4005_) == 0)
{
lean_object* v_a_4007_; lean_object* v___x_4009_; uint8_t v_isShared_4010_; uint8_t v_isSharedCheck_4018_; 
v_a_4007_ = lean_ctor_get(v_x_4005_, 0);
v_isSharedCheck_4018_ = !lean_is_exclusive(v_x_4005_);
if (v_isSharedCheck_4018_ == 0)
{
v___x_4009_ = v_x_4005_;
v_isShared_4010_ = v_isSharedCheck_4018_;
goto v_resetjp_4008_;
}
else
{
lean_inc(v_a_4007_);
lean_dec(v_x_4005_);
v___x_4009_ = lean_box(0);
v_isShared_4010_ = v_isSharedCheck_4018_;
goto v_resetjp_4008_;
}
v_resetjp_4008_:
{
lean_object* v___x_4011_; lean_object* v___x_4012_; lean_object* v___x_4013_; lean_object* v___x_4015_; 
v___x_4011_ = lean_io_error_to_string(v_a_4007_);
v___x_4012_ = lean_string_append(v_failurePrefix_4004_, v___x_4011_);
lean_dec_ref(v___x_4011_);
v___x_4013_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4013_, 0, v___x_4012_);
if (v_isShared_4010_ == 0)
{
lean_ctor_set(v___x_4009_, 0, v___x_4013_);
v___x_4015_ = v___x_4009_;
goto v_reusejp_4014_;
}
else
{
lean_object* v_reuseFailAlloc_4017_; 
v_reuseFailAlloc_4017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4017_, 0, v___x_4013_);
v___x_4015_ = v_reuseFailAlloc_4017_;
goto v_reusejp_4014_;
}
v_reusejp_4014_:
{
lean_object* v___x_4016_; 
v___x_4016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4016_, 0, v___x_4015_);
return v___x_4016_;
}
}
}
else
{
lean_object* v___x_4019_; 
lean_dec_ref(v_failurePrefix_4004_);
v___x_4019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4019_, 0, v_x_4005_);
return v___x_4019_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__4___boxed(lean_object* v_failurePrefix_4020_, lean_object* v_x_4021_, lean_object* v___y_4022_){
_start:
{
lean_object* v_res_4023_; 
v_res_4023_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__4(v_failurePrefix_4020_, v_x_4021_);
return v_res_4023_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__3(lean_object* v_a_4024_, lean_object* v_x_4025_){
_start:
{
if (lean_obj_tag(v_x_4025_) == 0)
{
lean_object* v_a_4027_; lean_object* v___x_4029_; uint8_t v_isShared_4030_; uint8_t v_isSharedCheck_4035_; 
v_a_4027_ = lean_ctor_get(v_x_4025_, 0);
v_isSharedCheck_4035_ = !lean_is_exclusive(v_x_4025_);
if (v_isSharedCheck_4035_ == 0)
{
v___x_4029_ = v_x_4025_;
v_isShared_4030_ = v_isSharedCheck_4035_;
goto v_resetjp_4028_;
}
else
{
lean_inc(v_a_4027_);
lean_dec(v_x_4025_);
v___x_4029_ = lean_box(0);
v_isShared_4030_ = v_isSharedCheck_4035_;
goto v_resetjp_4028_;
}
v_resetjp_4028_:
{
lean_object* v___x_4032_; 
if (v_isShared_4030_ == 0)
{
v___x_4032_ = v___x_4029_;
goto v_reusejp_4031_;
}
else
{
lean_object* v_reuseFailAlloc_4034_; 
v_reuseFailAlloc_4034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4034_, 0, v_a_4027_);
v___x_4032_ = v_reuseFailAlloc_4034_;
goto v_reusejp_4031_;
}
v_reusejp_4031_:
{
lean_object* v___x_4033_; 
v___x_4033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4033_, 0, v___x_4032_);
return v___x_4033_;
}
}
}
else
{
lean_object* v___x_4036_; 
lean_dec_ref_known(v_x_4025_, 1);
v___x_4036_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_4024_);
return v___x_4036_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__3___boxed(lean_object* v_a_4037_, lean_object* v_x_4038_, lean_object* v___y_4039_){
_start:
{
lean_object* v_res_4040_; 
v_res_4040_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__3(v_a_4037_, v_x_4038_);
lean_dec(v_a_4037_);
return v_res_4040_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__5(lean_object* v___x_4041_, uint8_t v___x_4042_, lean_object* v___f_4043_, lean_object* v_a_4044_, uint32_t v_op_4045_, uint64_t v_flags_4046_, lean_object* v_payload_4047_, lean_object* v_x_4048_){
_start:
{
lean_object* v_val_4051_; 
if (lean_obj_tag(v_x_4048_) == 0)
{
lean_object* v___x_4054_; 
lean_dec_ref(v___f_4043_);
lean_dec(v___x_4041_);
v___x_4054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4054_, 0, v_x_4048_);
return v___x_4054_;
}
else
{
lean_object* v_a_4055_; lean_object* v___x_4057_; uint8_t v_isShared_4058_; uint8_t v_isSharedCheck_4069_; 
v_a_4055_ = lean_ctor_get(v_x_4048_, 0);
v_isSharedCheck_4069_ = !lean_is_exclusive(v_x_4048_);
if (v_isSharedCheck_4069_ == 0)
{
v___x_4057_ = v_x_4048_;
v_isShared_4058_ = v_isSharedCheck_4069_;
goto v_resetjp_4056_;
}
else
{
lean_inc(v_a_4055_);
lean_dec(v_x_4048_);
v___x_4057_ = lean_box(0);
v_isShared_4058_ = v_isSharedCheck_4069_;
goto v_resetjp_4056_;
}
v_resetjp_4056_:
{
uint32_t v___x_4059_; lean_object* v___x_4060_; 
v___x_4059_ = 0;
v___x_4060_ = lasm_js_call_into(v_a_4044_, v_op_4045_, v___x_4059_, v_flags_4046_, v_a_4055_, v_payload_4047_);
lean_dec(v_a_4055_);
if (lean_obj_tag(v___x_4060_) == 0)
{
lean_object* v_a_4061_; lean_object* v___x_4063_; 
v_a_4061_ = lean_ctor_get(v___x_4060_, 0);
lean_inc(v_a_4061_);
lean_dec_ref_known(v___x_4060_, 1);
if (v_isShared_4058_ == 0)
{
lean_ctor_set(v___x_4057_, 0, v_a_4061_);
v___x_4063_ = v___x_4057_;
goto v_reusejp_4062_;
}
else
{
lean_object* v_reuseFailAlloc_4064_; 
v_reuseFailAlloc_4064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4064_, 0, v_a_4061_);
v___x_4063_ = v_reuseFailAlloc_4064_;
goto v_reusejp_4062_;
}
v_reusejp_4062_:
{
v_val_4051_ = v___x_4063_;
goto v___jp_4050_;
}
}
else
{
lean_object* v_a_4065_; lean_object* v___x_4067_; 
v_a_4065_ = lean_ctor_get(v___x_4060_, 0);
lean_inc(v_a_4065_);
lean_dec_ref_known(v___x_4060_, 1);
if (v_isShared_4058_ == 0)
{
lean_ctor_set_tag(v___x_4057_, 0);
lean_ctor_set(v___x_4057_, 0, v_a_4065_);
v___x_4067_ = v___x_4057_;
goto v_reusejp_4066_;
}
else
{
lean_object* v_reuseFailAlloc_4068_; 
v_reuseFailAlloc_4068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4068_, 0, v_a_4065_);
v___x_4067_ = v_reuseFailAlloc_4068_;
goto v_reusejp_4066_;
}
v_reusejp_4066_:
{
v_val_4051_ = v___x_4067_;
goto v___jp_4050_;
}
}
}
}
v___jp_4050_:
{
lean_object* v___x_4052_; lean_object* v___x_4053_; 
v___x_4052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4052_, 0, v_val_4051_);
v___x_4053_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4041_, v___x_4042_, v___x_4052_, v___f_4043_);
return v___x_4053_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__5___boxed(lean_object* v___x_4070_, lean_object* v___x_4071_, lean_object* v___f_4072_, lean_object* v_a_4073_, lean_object* v_op_4074_, lean_object* v_flags_4075_, lean_object* v_payload_4076_, lean_object* v_x_4077_, lean_object* v___y_4078_){
_start:
{
uint8_t v___x_1877__boxed_4079_; uint32_t v_op_boxed_4080_; uint64_t v_flags_boxed_4081_; lean_object* v_res_4082_; 
v___x_1877__boxed_4079_ = lean_unbox(v___x_4071_);
v_op_boxed_4080_ = lean_unbox_uint32(v_op_4074_);
lean_dec(v_op_4074_);
v_flags_boxed_4081_ = lean_unbox_uint64(v_flags_4075_);
lean_dec_ref(v_flags_4075_);
v_res_4082_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__5(v___x_4070_, v___x_1877__boxed_4079_, v___f_4072_, v_a_4073_, v_op_boxed_4080_, v_flags_boxed_4081_, v_payload_4076_, v_x_4077_);
lean_dec(v_payload_4076_);
lean_dec(v_a_4073_);
return v_res_4082_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__7(lean_object* v___f_4083_, lean_object* v_a_4084_, uint32_t v_op_4085_, uint64_t v_flags_4086_, lean_object* v_payload_4087_, lean_object* v_x_4088_){
_start:
{
if (lean_obj_tag(v_x_4088_) == 0)
{
lean_object* v___x_4090_; 
lean_dec_ref(v___f_4083_);
v___x_4090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4090_, 0, v_x_4088_);
return v___x_4090_;
}
else
{
lean_object* v_a_4091_; lean_object* v___x_4093_; uint8_t v_isShared_4094_; uint8_t v_isSharedCheck_4111_; 
v_a_4091_ = lean_ctor_get(v_x_4088_, 0);
v_isSharedCheck_4111_ = !lean_is_exclusive(v_x_4088_);
if (v_isSharedCheck_4111_ == 0)
{
v___x_4093_ = v_x_4088_;
v_isShared_4094_ = v_isSharedCheck_4111_;
goto v_resetjp_4092_;
}
else
{
lean_inc(v_a_4091_);
lean_dec(v_x_4088_);
v___x_4093_ = lean_box(0);
v_isShared_4094_ = v_isSharedCheck_4111_;
goto v_resetjp_4092_;
}
v_resetjp_4092_:
{
uint32_t v___x_4095_; lean_object* v___x_4096_; uint8_t v___x_4097_; lean_object* v_val_4099_; lean_object* v___x_4102_; 
v___x_4095_ = 0;
v___x_4096_ = lean_unsigned_to_nat(0u);
v___x_4097_ = 0;
v___x_4102_ = lasm_js_call_into(v_a_4084_, v_op_4085_, v___x_4095_, v_flags_4086_, v_a_4091_, v_payload_4087_);
lean_dec(v_a_4091_);
if (lean_obj_tag(v___x_4102_) == 0)
{
lean_object* v_a_4103_; lean_object* v___x_4105_; 
v_a_4103_ = lean_ctor_get(v___x_4102_, 0);
lean_inc(v_a_4103_);
lean_dec_ref_known(v___x_4102_, 1);
if (v_isShared_4094_ == 0)
{
lean_ctor_set(v___x_4093_, 0, v_a_4103_);
v___x_4105_ = v___x_4093_;
goto v_reusejp_4104_;
}
else
{
lean_object* v_reuseFailAlloc_4106_; 
v_reuseFailAlloc_4106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4106_, 0, v_a_4103_);
v___x_4105_ = v_reuseFailAlloc_4106_;
goto v_reusejp_4104_;
}
v_reusejp_4104_:
{
v_val_4099_ = v___x_4105_;
goto v___jp_4098_;
}
}
else
{
lean_object* v_a_4107_; lean_object* v___x_4109_; 
v_a_4107_ = lean_ctor_get(v___x_4102_, 0);
lean_inc(v_a_4107_);
lean_dec_ref_known(v___x_4102_, 1);
if (v_isShared_4094_ == 0)
{
lean_ctor_set_tag(v___x_4093_, 0);
lean_ctor_set(v___x_4093_, 0, v_a_4107_);
v___x_4109_ = v___x_4093_;
goto v_reusejp_4108_;
}
else
{
lean_object* v_reuseFailAlloc_4110_; 
v_reuseFailAlloc_4110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4110_, 0, v_a_4107_);
v___x_4109_ = v_reuseFailAlloc_4110_;
goto v_reusejp_4108_;
}
v_reusejp_4108_:
{
v_val_4099_ = v___x_4109_;
goto v___jp_4098_;
}
}
v___jp_4098_:
{
lean_object* v___x_4100_; lean_object* v___x_4101_; 
v___x_4100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4100_, 0, v_val_4099_);
v___x_4101_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4096_, v___x_4097_, v___x_4100_, v___f_4083_);
return v___x_4101_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__7___boxed(lean_object* v___f_4112_, lean_object* v_a_4113_, lean_object* v_op_4114_, lean_object* v_flags_4115_, lean_object* v_payload_4116_, lean_object* v_x_4117_, lean_object* v___y_4118_){
_start:
{
uint32_t v_op_boxed_4119_; uint64_t v_flags_boxed_4120_; lean_object* v_res_4121_; 
v_op_boxed_4119_ = lean_unbox_uint32(v_op_4114_);
lean_dec(v_op_4114_);
v_flags_boxed_4120_ = lean_unbox_uint64(v_flags_4115_);
lean_dec_ref(v_flags_4115_);
v_res_4121_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__7(v___f_4112_, v_a_4113_, v_op_boxed_4119_, v_flags_boxed_4120_, v_payload_4116_, v_x_4117_);
lean_dec(v_payload_4116_);
lean_dec(v_a_4113_);
return v_res_4121_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__6(lean_object* v_failurePrefix_4122_, uint32_t v_op_4123_, uint64_t v_flags_4124_, lean_object* v_payload_4125_, lean_object* v___f_4126_, lean_object* v___f_4127_, lean_object* v___f_4128_, lean_object* v_x_4129_){
_start:
{
if (lean_obj_tag(v_x_4129_) == 0)
{
lean_object* v_a_4131_; lean_object* v___x_4133_; uint8_t v_isShared_4134_; uint8_t v_isSharedCheck_4139_; 
lean_dec_ref(v___f_4128_);
lean_dec_ref(v___f_4127_);
lean_dec_ref(v___f_4126_);
lean_dec(v_payload_4125_);
v_a_4131_ = lean_ctor_get(v_x_4129_, 0);
v_isSharedCheck_4139_ = !lean_is_exclusive(v_x_4129_);
if (v_isSharedCheck_4139_ == 0)
{
v___x_4133_ = v_x_4129_;
v_isShared_4134_ = v_isSharedCheck_4139_;
goto v_resetjp_4132_;
}
else
{
lean_inc(v_a_4131_);
lean_dec(v_x_4129_);
v___x_4133_ = lean_box(0);
v_isShared_4134_ = v_isSharedCheck_4139_;
goto v_resetjp_4132_;
}
v_resetjp_4132_:
{
lean_object* v___x_4136_; 
if (v_isShared_4134_ == 0)
{
v___x_4136_ = v___x_4133_;
goto v_reusejp_4135_;
}
else
{
lean_object* v_reuseFailAlloc_4138_; 
v_reuseFailAlloc_4138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4138_, 0, v_a_4131_);
v___x_4136_ = v_reuseFailAlloc_4138_;
goto v_reusejp_4135_;
}
v_reusejp_4135_:
{
lean_object* v___x_4137_; 
v___x_4137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4137_, 0, v___x_4136_);
return v___x_4137_;
}
}
}
else
{
lean_object* v_a_4140_; lean_object* v___x_4142_; uint8_t v_isShared_4143_; uint8_t v_isSharedCheck_4186_; 
v_a_4140_ = lean_ctor_get(v_x_4129_, 0);
v_isSharedCheck_4186_ = !lean_is_exclusive(v_x_4129_);
if (v_isSharedCheck_4186_ == 0)
{
v___x_4142_ = v_x_4129_;
v_isShared_4143_ = v_isSharedCheck_4186_;
goto v_resetjp_4141_;
}
else
{
lean_inc(v_a_4140_);
lean_dec(v_x_4129_);
v___x_4142_ = lean_box(0);
v_isShared_4143_ = v_isSharedCheck_4186_;
goto v_resetjp_4141_;
}
v_resetjp_4141_:
{
lean_object* v___x_4144_; lean_object* v___x_4145_; uint8_t v___x_4146_; 
v___x_4144_ = lean_string_utf8_byte_size(v_failurePrefix_4122_);
v___x_4145_ = lean_unsigned_to_nat(0u);
v___x_4146_ = lean_nat_dec_eq(v___x_4144_, v___x_4145_);
if (v___x_4146_ == 0)
{
lean_object* v___f_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; lean_object* v___x_4150_; lean_object* v___f_4151_; lean_object* v_val_4153_; lean_object* v___x_4158_; 
lean_dec_ref(v___f_4128_);
lean_inc(v_a_4140_);
v___f_4147_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4147_, 0, v_a_4140_);
v___x_4148_ = lean_box(v___x_4146_);
v___x_4149_ = lean_box_uint32(v_op_4123_);
v___x_4150_ = lean_box_uint64(v_flags_4124_);
lean_inc(v_payload_4125_);
v___f_4151_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__5___boxed), 9, 7);
lean_closure_set(v___f_4151_, 0, v___x_4145_);
lean_closure_set(v___f_4151_, 1, v___x_4148_);
lean_closure_set(v___f_4151_, 2, v___f_4147_);
lean_closure_set(v___f_4151_, 3, v_a_4140_);
lean_closure_set(v___f_4151_, 4, v___x_4149_);
lean_closure_set(v___f_4151_, 5, v___x_4150_);
lean_closure_set(v___f_4151_, 6, v_payload_4125_);
v___x_4158_ = l_Lasm_JS_Wire_encodeIO(v_payload_4125_);
lean_dec(v_payload_4125_);
if (lean_obj_tag(v___x_4158_) == 0)
{
lean_object* v_a_4159_; lean_object* v___x_4161_; 
v_a_4159_ = lean_ctor_get(v___x_4158_, 0);
lean_inc(v_a_4159_);
lean_dec_ref_known(v___x_4158_, 1);
if (v_isShared_4143_ == 0)
{
lean_ctor_set(v___x_4142_, 0, v_a_4159_);
v___x_4161_ = v___x_4142_;
goto v_reusejp_4160_;
}
else
{
lean_object* v_reuseFailAlloc_4162_; 
v_reuseFailAlloc_4162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4162_, 0, v_a_4159_);
v___x_4161_ = v_reuseFailAlloc_4162_;
goto v_reusejp_4160_;
}
v_reusejp_4160_:
{
v_val_4153_ = v___x_4161_;
goto v___jp_4152_;
}
}
else
{
lean_object* v_a_4163_; lean_object* v___x_4165_; 
v_a_4163_ = lean_ctor_get(v___x_4158_, 0);
lean_inc(v_a_4163_);
lean_dec_ref_known(v___x_4158_, 1);
if (v_isShared_4143_ == 0)
{
lean_ctor_set_tag(v___x_4142_, 0);
lean_ctor_set(v___x_4142_, 0, v_a_4163_);
v___x_4165_ = v___x_4142_;
goto v_reusejp_4164_;
}
else
{
lean_object* v_reuseFailAlloc_4166_; 
v_reuseFailAlloc_4166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4166_, 0, v_a_4163_);
v___x_4165_ = v_reuseFailAlloc_4166_;
goto v_reusejp_4164_;
}
v_reusejp_4164_:
{
v_val_4153_ = v___x_4165_;
goto v___jp_4152_;
}
}
v___jp_4152_:
{
lean_object* v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; lean_object* v___x_4157_; 
v___x_4154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4154_, 0, v_val_4153_);
v___x_4155_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4145_, v___x_4146_, v___x_4154_, v___f_4151_);
v___x_4156_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4145_, v___x_4146_, v___x_4155_, v___f_4126_);
v___x_4157_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4145_, v___x_4146_, v___x_4156_, v___f_4127_);
return v___x_4157_;
}
}
else
{
lean_object* v___f_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; lean_object* v___f_4170_; uint8_t v___x_4171_; lean_object* v_val_4173_; lean_object* v___x_4177_; 
lean_dec_ref(v___f_4127_);
lean_dec_ref(v___f_4126_);
lean_inc(v_a_4140_);
v___f_4167_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4167_, 0, v_a_4140_);
v___x_4168_ = lean_box_uint32(v_op_4123_);
v___x_4169_ = lean_box_uint64(v_flags_4124_);
lean_inc(v_payload_4125_);
v___f_4170_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__7___boxed), 7, 5);
lean_closure_set(v___f_4170_, 0, v___f_4167_);
lean_closure_set(v___f_4170_, 1, v_a_4140_);
lean_closure_set(v___f_4170_, 2, v___x_4168_);
lean_closure_set(v___f_4170_, 3, v___x_4169_);
lean_closure_set(v___f_4170_, 4, v_payload_4125_);
v___x_4171_ = 0;
v___x_4177_ = l_Lasm_JS_Wire_encodeIO(v_payload_4125_);
lean_dec(v_payload_4125_);
if (lean_obj_tag(v___x_4177_) == 0)
{
lean_object* v_a_4178_; lean_object* v___x_4180_; 
v_a_4178_ = lean_ctor_get(v___x_4177_, 0);
lean_inc(v_a_4178_);
lean_dec_ref_known(v___x_4177_, 1);
if (v_isShared_4143_ == 0)
{
lean_ctor_set(v___x_4142_, 0, v_a_4178_);
v___x_4180_ = v___x_4142_;
goto v_reusejp_4179_;
}
else
{
lean_object* v_reuseFailAlloc_4181_; 
v_reuseFailAlloc_4181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4181_, 0, v_a_4178_);
v___x_4180_ = v_reuseFailAlloc_4181_;
goto v_reusejp_4179_;
}
v_reusejp_4179_:
{
v_val_4173_ = v___x_4180_;
goto v___jp_4172_;
}
}
else
{
lean_object* v_a_4182_; lean_object* v___x_4184_; 
v_a_4182_ = lean_ctor_get(v___x_4177_, 0);
lean_inc(v_a_4182_);
lean_dec_ref_known(v___x_4177_, 1);
if (v_isShared_4143_ == 0)
{
lean_ctor_set_tag(v___x_4142_, 0);
lean_ctor_set(v___x_4142_, 0, v_a_4182_);
v___x_4184_ = v___x_4142_;
goto v_reusejp_4183_;
}
else
{
lean_object* v_reuseFailAlloc_4185_; 
v_reuseFailAlloc_4185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4185_, 0, v_a_4182_);
v___x_4184_ = v_reuseFailAlloc_4185_;
goto v_reusejp_4183_;
}
v_reusejp_4183_:
{
v_val_4173_ = v___x_4184_;
goto v___jp_4172_;
}
}
v___jp_4172_:
{
lean_object* v___x_4174_; lean_object* v___x_4175_; lean_object* v___x_4176_; 
v___x_4174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4174_, 0, v_val_4173_);
v___x_4175_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4145_, v___x_4171_, v___x_4174_, v___f_4170_);
v___x_4176_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4145_, v___x_4171_, v___x_4175_, v___f_4128_);
return v___x_4176_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__6___boxed(lean_object* v_failurePrefix_4187_, lean_object* v_op_4188_, lean_object* v_flags_4189_, lean_object* v_payload_4190_, lean_object* v___f_4191_, lean_object* v___f_4192_, lean_object* v___f_4193_, lean_object* v_x_4194_, lean_object* v___y_4195_){
_start:
{
uint32_t v_op_boxed_4196_; uint64_t v_flags_boxed_4197_; lean_object* v_res_4198_; 
v_op_boxed_4196_ = lean_unbox_uint32(v_op_4188_);
lean_dec(v_op_4188_);
v_flags_boxed_4197_ = lean_unbox_uint64(v_flags_4189_);
lean_dec_ref(v_flags_4189_);
v_res_4198_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__6(v_failurePrefix_4187_, v_op_boxed_4196_, v_flags_boxed_4197_, v_payload_4190_, v___f_4191_, v___f_4192_, v___f_4193_, v_x_4194_);
lean_dec_ref(v_failurePrefix_4187_);
return v_res_4198_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__8(lean_object* v___f_4199_, lean_object* v_x_4200_){
_start:
{
if (lean_obj_tag(v_x_4200_) == 0)
{
lean_object* v_a_4202_; lean_object* v___x_4204_; uint8_t v_isShared_4205_; uint8_t v_isSharedCheck_4210_; 
lean_dec_ref(v___f_4199_);
v_a_4202_ = lean_ctor_get(v_x_4200_, 0);
v_isSharedCheck_4210_ = !lean_is_exclusive(v_x_4200_);
if (v_isSharedCheck_4210_ == 0)
{
v___x_4204_ = v_x_4200_;
v_isShared_4205_ = v_isSharedCheck_4210_;
goto v_resetjp_4203_;
}
else
{
lean_inc(v_a_4202_);
lean_dec(v_x_4200_);
v___x_4204_ = lean_box(0);
v_isShared_4205_ = v_isSharedCheck_4210_;
goto v_resetjp_4203_;
}
v_resetjp_4203_:
{
lean_object* v___x_4207_; 
if (v_isShared_4205_ == 0)
{
v___x_4207_ = v___x_4204_;
goto v_reusejp_4206_;
}
else
{
lean_object* v_reuseFailAlloc_4209_; 
v_reuseFailAlloc_4209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4209_, 0, v_a_4202_);
v___x_4207_ = v_reuseFailAlloc_4209_;
goto v_reusejp_4206_;
}
v_reusejp_4206_:
{
lean_object* v___x_4208_; 
v___x_4208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4208_, 0, v___x_4207_);
return v___x_4208_;
}
}
}
else
{
lean_object* v___x_4212_; uint8_t v_isShared_4213_; uint8_t v_isSharedCheck_4222_; 
v_isSharedCheck_4222_ = !lean_is_exclusive(v_x_4200_);
if (v_isSharedCheck_4222_ == 0)
{
lean_object* v_unused_4223_; 
v_unused_4223_ = lean_ctor_get(v_x_4200_, 0);
lean_dec(v_unused_4223_);
v___x_4212_ = v_x_4200_;
v_isShared_4213_ = v_isSharedCheck_4222_;
goto v_resetjp_4211_;
}
else
{
lean_dec(v_x_4200_);
v___x_4212_ = lean_box(0);
v_isShared_4213_ = v_isSharedCheck_4222_;
goto v_resetjp_4211_;
}
v_resetjp_4211_:
{
lean_object* v___x_4214_; uint8_t v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4218_; 
v___x_4214_ = lean_unsigned_to_nat(0u);
v___x_4215_ = 0;
v___x_4216_ = lean_io_promise_new();
if (v_isShared_4213_ == 0)
{
lean_ctor_set(v___x_4212_, 0, v___x_4216_);
v___x_4218_ = v___x_4212_;
goto v_reusejp_4217_;
}
else
{
lean_object* v_reuseFailAlloc_4221_; 
v_reuseFailAlloc_4221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4221_, 0, v___x_4216_);
v___x_4218_ = v_reuseFailAlloc_4221_;
goto v_reusejp_4217_;
}
v_reusejp_4217_:
{
lean_object* v___x_4219_; lean_object* v___x_4220_; 
v___x_4219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4219_, 0, v___x_4218_);
v___x_4220_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4214_, v___x_4215_, v___x_4219_, v___f_4199_);
return v___x_4220_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__8___boxed(lean_object* v___f_4224_, lean_object* v_x_4225_, lean_object* v___y_4226_){
_start:
{
lean_object* v_res_4227_; 
v_res_4227_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__8(v___f_4224_, v_x_4225_);
return v_res_4227_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg(lean_object* v_inst_4228_, lean_object* v_context_4229_, uint32_t v_op_4230_, uint64_t v_flags_4231_, lean_object* v_payload_4232_, lean_object* v_failurePrefix_4233_){
_start:
{
lean_object* v___f_4235_; lean_object* v___f_4236_; lean_object* v___f_4237_; lean_object* v___f_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; lean_object* v___f_4241_; lean_object* v___f_4242_; lean_object* v___x_4243_; uint8_t v___x_4244_; lean_object* v_val_4246_; lean_object* v___x_4249_; 
v___f_4235_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_4235_, 0, v_inst_4228_);
lean_closure_set(v___f_4235_, 1, v_context_4229_);
v___f_4236_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4236_, 0, v___f_4235_);
v___f_4237_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4237_, 0, v___f_4236_);
lean_inc_ref(v_failurePrefix_4233_);
v___f_4238_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_4238_, 0, v_failurePrefix_4233_);
v___x_4239_ = lean_box_uint32(v_op_4230_);
v___x_4240_ = lean_box_uint64(v_flags_4231_);
lean_inc_ref(v___f_4237_);
v___f_4241_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__6___boxed), 9, 7);
lean_closure_set(v___f_4241_, 0, v_failurePrefix_4233_);
lean_closure_set(v___f_4241_, 1, v___x_4239_);
lean_closure_set(v___f_4241_, 2, v___x_4240_);
lean_closure_set(v___f_4241_, 3, v_payload_4232_);
lean_closure_set(v___f_4241_, 4, v___f_4238_);
lean_closure_set(v___f_4241_, 5, v___f_4237_);
lean_closure_set(v___f_4241_, 6, v___f_4237_);
v___f_4242_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__8___boxed), 3, 1);
lean_closure_set(v___f_4242_, 0, v___f_4241_);
v___x_4243_ = lean_unsigned_to_nat(0u);
v___x_4244_ = 0;
v___x_4249_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_4249_) == 0)
{
lean_object* v_a_4250_; lean_object* v___x_4252_; uint8_t v_isShared_4253_; uint8_t v_isSharedCheck_4257_; 
v_a_4250_ = lean_ctor_get(v___x_4249_, 0);
v_isSharedCheck_4257_ = !lean_is_exclusive(v___x_4249_);
if (v_isSharedCheck_4257_ == 0)
{
v___x_4252_ = v___x_4249_;
v_isShared_4253_ = v_isSharedCheck_4257_;
goto v_resetjp_4251_;
}
else
{
lean_inc(v_a_4250_);
lean_dec(v___x_4249_);
v___x_4252_ = lean_box(0);
v_isShared_4253_ = v_isSharedCheck_4257_;
goto v_resetjp_4251_;
}
v_resetjp_4251_:
{
lean_object* v___x_4255_; 
if (v_isShared_4253_ == 0)
{
lean_ctor_set_tag(v___x_4252_, 1);
v___x_4255_ = v___x_4252_;
goto v_reusejp_4254_;
}
else
{
lean_object* v_reuseFailAlloc_4256_; 
v_reuseFailAlloc_4256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4256_, 0, v_a_4250_);
v___x_4255_ = v_reuseFailAlloc_4256_;
goto v_reusejp_4254_;
}
v_reusejp_4254_:
{
v_val_4246_ = v___x_4255_;
goto v___jp_4245_;
}
}
}
else
{
lean_object* v_a_4258_; lean_object* v___x_4260_; uint8_t v_isShared_4261_; uint8_t v_isSharedCheck_4265_; 
v_a_4258_ = lean_ctor_get(v___x_4249_, 0);
v_isSharedCheck_4265_ = !lean_is_exclusive(v___x_4249_);
if (v_isSharedCheck_4265_ == 0)
{
v___x_4260_ = v___x_4249_;
v_isShared_4261_ = v_isSharedCheck_4265_;
goto v_resetjp_4259_;
}
else
{
lean_inc(v_a_4258_);
lean_dec(v___x_4249_);
v___x_4260_ = lean_box(0);
v_isShared_4261_ = v_isSharedCheck_4265_;
goto v_resetjp_4259_;
}
v_resetjp_4259_:
{
lean_object* v___x_4263_; 
if (v_isShared_4261_ == 0)
{
lean_ctor_set_tag(v___x_4260_, 0);
v___x_4263_ = v___x_4260_;
goto v_reusejp_4262_;
}
else
{
lean_object* v_reuseFailAlloc_4264_; 
v_reuseFailAlloc_4264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4264_, 0, v_a_4258_);
v___x_4263_ = v_reuseFailAlloc_4264_;
goto v_reusejp_4262_;
}
v_reusejp_4262_:
{
v_val_4246_ = v___x_4263_;
goto v___jp_4245_;
}
}
}
v___jp_4245_:
{
lean_object* v___x_4247_; lean_object* v___x_4248_; 
v___x_4247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4247_, 0, v_val_4246_);
v___x_4248_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4243_, v___x_4244_, v___x_4247_, v___f_4242_);
return v___x_4248_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___boxed(lean_object* v_inst_4266_, lean_object* v_context_4267_, lean_object* v_op_4268_, lean_object* v_flags_4269_, lean_object* v_payload_4270_, lean_object* v_failurePrefix_4271_, lean_object* v_a_4272_){
_start:
{
uint32_t v_op_boxed_4273_; uint64_t v_flags_boxed_4274_; lean_object* v_res_4275_; 
v_op_boxed_4273_ = lean_unbox_uint32(v_op_4268_);
lean_dec(v_op_4268_);
v_flags_boxed_4274_ = lean_unbox_uint64(v_flags_4269_);
lean_dec_ref(v_flags_4269_);
v_res_4275_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg(v_inst_4266_, v_context_4267_, v_op_boxed_4273_, v_flags_boxed_4274_, v_payload_4270_, v_failurePrefix_4271_);
return v_res_4275_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync(lean_object* v_00_u03b1_4276_, lean_object* v_inst_4277_, lean_object* v_context_4278_, uint32_t v_op_4279_, uint64_t v_flags_4280_, lean_object* v_payload_4281_, lean_object* v_failurePrefix_4282_){
_start:
{
lean_object* v___x_4284_; 
v___x_4284_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg(v_inst_4277_, v_context_4278_, v_op_4279_, v_flags_4280_, v_payload_4281_, v_failurePrefix_4282_);
return v___x_4284_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___boxed(lean_object* v_00_u03b1_4285_, lean_object* v_inst_4286_, lean_object* v_context_4287_, lean_object* v_op_4288_, lean_object* v_flags_4289_, lean_object* v_payload_4290_, lean_object* v_failurePrefix_4291_, lean_object* v_a_4292_){
_start:
{
uint32_t v_op_boxed_4293_; uint64_t v_flags_boxed_4294_; lean_object* v_res_4295_; 
v_op_boxed_4293_ = lean_unbox_uint32(v_op_4288_);
lean_dec(v_op_4288_);
v_flags_boxed_4294_ = lean_unbox_uint64(v_flags_4289_);
lean_dec_ref(v_flags_4289_);
v_res_4295_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync(v_00_u03b1_4285_, v_inst_4286_, v_context_4287_, v_op_boxed_4293_, v_flags_boxed_4294_, v_payload_4290_, v_failurePrefix_4291_);
return v_res_4295_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t v_m_4296_){
_start:
{
uint8_t v___x_4297_; uint8_t v___x_4298_; 
v___x_4297_ = 1;
v___x_4298_ = l_Lasm_JS_instBEqMode_beq(v_m_4296_, v___x_4297_);
if (v___x_4298_ == 0)
{
uint64_t v___x_4299_; 
v___x_4299_ = 0ULL;
return v___x_4299_;
}
else
{
uint64_t v___x_4300_; 
v___x_4300_ = 1ULL;
return v___x_4300_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_modeArg___boxed(lean_object* v_m_4301_){
_start:
{
uint8_t v_m_boxed_4302_; uint64_t v_res_4303_; lean_object* v_r_4304_; 
v_m_boxed_4302_ = lean_unbox(v_m_4301_);
v_res_4303_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v_m_boxed_4302_);
v_r_4304_ = lean_box_uint64(v_res_4303_);
return v_r_4304_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(lean_object* v_inst_4305_, lean_object* v_context_4306_, lean_object* v_bytes_4307_){
_start:
{
lean_object* v___x_4309_; 
v___x_4309_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4307_);
if (lean_obj_tag(v___x_4309_) == 0)
{
lean_object* v_a_4310_; lean_object* v___x_4311_; 
v_a_4310_ = lean_ctor_get(v___x_4309_, 0);
lean_inc(v_a_4310_);
lean_dec_ref_known(v___x_4309_, 1);
v___x_4311_ = l_Lasm_JS_decodeAs___redArg(v_inst_4305_, v_context_4306_, v_a_4310_);
return v___x_4311_;
}
else
{
lean_object* v_a_4312_; lean_object* v___x_4314_; uint8_t v_isShared_4315_; uint8_t v_isSharedCheck_4319_; 
lean_dec_ref(v_inst_4305_);
v_a_4312_ = lean_ctor_get(v___x_4309_, 0);
v_isSharedCheck_4319_ = !lean_is_exclusive(v___x_4309_);
if (v_isSharedCheck_4319_ == 0)
{
v___x_4314_ = v___x_4309_;
v_isShared_4315_ = v_isSharedCheck_4319_;
goto v_resetjp_4313_;
}
else
{
lean_inc(v_a_4312_);
lean_dec(v___x_4309_);
v___x_4314_ = lean_box(0);
v_isShared_4315_ = v_isSharedCheck_4319_;
goto v_resetjp_4313_;
}
v_resetjp_4313_:
{
lean_object* v___x_4317_; 
if (v_isShared_4315_ == 0)
{
v___x_4317_ = v___x_4314_;
goto v_reusejp_4316_;
}
else
{
lean_object* v_reuseFailAlloc_4318_; 
v_reuseFailAlloc_4318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4318_, 0, v_a_4312_);
v___x_4317_ = v_reuseFailAlloc_4318_;
goto v_reusejp_4316_;
}
v_reusejp_4316_:
{
return v___x_4317_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg___boxed(lean_object* v_inst_4320_, lean_object* v_context_4321_, lean_object* v_bytes_4322_, lean_object* v_a_4323_){
_start:
{
lean_object* v_res_4324_; 
v_res_4324_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_4320_, v_context_4321_, v_bytes_4322_);
lean_dec_ref(v_bytes_4322_);
lean_dec_ref(v_context_4321_);
return v_res_4324_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive(lean_object* v_00_u03b1_4325_, lean_object* v_inst_4326_, lean_object* v_context_4327_, lean_object* v_bytes_4328_){
_start:
{
lean_object* v___x_4330_; 
v___x_4330_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_4326_, v_context_4327_, v_bytes_4328_);
return v___x_4330_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___boxed(lean_object* v_00_u03b1_4331_, lean_object* v_inst_4332_, lean_object* v_context_4333_, lean_object* v_bytes_4334_, lean_object* v_a_4335_){
_start:
{
lean_object* v_res_4336_; 
v_res_4336_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive(v_00_u03b1_4331_, v_inst_4332_, v_context_4333_, v_bytes_4334_);
lean_dec_ref(v_bytes_4334_);
lean_dec_ref(v_context_4333_);
return v_res_4336_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_4337_; lean_object* v___x_4338_; 
v___x_4337_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
v___x_4338_ = lean_string_utf8_byte_size(v___x_4337_);
return v___x_4338_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_4339_; lean_object* v___x_4340_; uint8_t v___x_4341_; 
v___x_4339_ = lean_unsigned_to_nat(0u);
v___x_4340_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0___closed__0, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0___closed__0_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0___closed__0);
v___x_4341_ = lean_nat_dec_eq(v___x_4340_, v___x_4339_);
return v___x_4341_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(lean_object* v_context_4343_, lean_object* v_d_4344_){
_start:
{
lean_object* v___y_4347_; lean_object* v___y_4348_; 
if (lean_obj_tag(v_d_4344_) == 9)
{
lean_object* v_value_4352_; lean_object* v___x_4353_; 
v_value_4352_ = lean_ctor_get(v_d_4344_, 0);
lean_inc(v_value_4352_);
lean_dec_ref_known(v_d_4344_, 2);
v___x_4353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4353_, 0, v_value_4352_);
return v___x_4353_;
}
else
{
lean_object* v___x_4354_; lean_object* v_received_4356_; 
v___x_4354_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
if (lean_obj_tag(v_d_4344_) == 9)
{
lean_object* v_value_4370_; lean_object* v_description_4371_; uint8_t v___x_4372_; 
v_value_4370_ = lean_ctor_get(v_d_4344_, 0);
v_description_4371_ = lean_ctor_get(v_d_4344_, 1);
v___x_4372_ = lean_string_dec_eq(v_description_4371_, v___x_4354_);
if (v___x_4372_ == 0)
{
goto v___jp_4368_;
}
else
{
uint32_t v___x_4373_; uint64_t v___x_4374_; lean_object* v___x_4375_; uint32_t v___x_4376_; lean_object* v___x_4377_; 
lean_inc_n(v_value_4370_, 2);
lean_dec_ref_known(v_d_4344_, 2);
v___x_4373_ = 206;
v___x_4374_ = 0ULL;
v___x_4375_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4375_, 0, v_value_4370_);
lean_ctor_set(v___x_4375_, 1, v___x_4354_);
v___x_4376_ = lasm_js_value_handle(v_value_4370_);
lean_dec(v_value_4370_);
v___x_4377_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4373_, v___x_4374_, v___x_4375_, v___x_4376_);
lean_dec_ref_known(v___x_4375_, 2);
if (lean_obj_tag(v___x_4377_) == 0)
{
lean_object* v_a_4378_; uint8_t v___x_4379_; 
v_a_4378_ = lean_ctor_get(v___x_4377_, 0);
lean_inc(v_a_4378_);
lean_dec_ref_known(v___x_4377_, 1);
v___x_4379_ = lean_string_validate_utf8(v_a_4378_);
if (v___x_4379_ == 0)
{
lean_object* v___x_4380_; lean_object* v___x_4381_; 
lean_dec(v_a_4378_);
v___x_4380_ = lean_obj_once(&l_Lasm_JS_decodeAs___redArg___closed__7, &l_Lasm_JS_decodeAs___redArg___closed__7_once, _init_l_Lasm_JS_decodeAs___redArg___closed__7);
v___x_4381_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4380_);
v_received_4356_ = v___x_4381_;
goto v___jp_4355_;
}
else
{
lean_object* v___x_4382_; 
v___x_4382_ = lean_string_from_utf8_unchecked(v_a_4378_);
v_received_4356_ = v___x_4382_;
goto v___jp_4355_;
}
}
else
{
lean_object* v___x_4383_; 
lean_dec_ref_known(v___x_4377_, 1);
v___x_4383_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__8));
v_received_4356_ = v___x_4383_;
goto v___jp_4355_;
}
}
}
else
{
goto v___jp_4368_;
}
v___jp_4355_:
{
lean_object* v___x_4357_; lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; lean_object* v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; uint8_t v___x_4366_; 
v___x_4357_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__0));
v___x_4358_ = lean_string_append(v___x_4357_, v_context_4343_);
v___x_4359_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__1));
v___x_4360_ = lean_string_append(v___x_4358_, v___x_4359_);
v___x_4361_ = ((lean_object*)(l_Lasm_JS_instFromJSValue___closed__1));
v___x_4362_ = lean_string_append(v___x_4360_, v___x_4361_);
v___x_4363_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__2));
v___x_4364_ = lean_string_append(v___x_4362_, v___x_4363_);
v___x_4365_ = lean_string_append(v___x_4364_, v_received_4356_);
lean_dec_ref(v_received_4356_);
v___x_4366_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0___closed__1, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0___closed__1_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0___closed__1);
if (v___x_4366_ == 0)
{
lean_object* v___x_4367_; 
v___x_4367_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0___closed__2));
v___y_4347_ = v___x_4365_;
v___y_4348_ = v___x_4367_;
goto v___jp_4346_;
}
else
{
v___y_4347_ = v___x_4365_;
v___y_4348_ = v___x_4354_;
goto v___jp_4346_;
}
}
v___jp_4368_:
{
lean_object* v___x_4369_; 
v___x_4369_ = l_Lasm_JS_Data_describe(v_d_4344_);
v_received_4356_ = v___x_4369_;
goto v___jp_4355_;
}
}
v___jp_4346_:
{
lean_object* v___x_4349_; lean_object* v___x_4350_; lean_object* v___x_4351_; 
v___x_4349_ = lean_string_append(v___y_4347_, v___y_4348_);
v___x_4350_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4350_, 0, v___x_4349_);
v___x_4351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4351_, 0, v___x_4350_);
return v___x_4351_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0___boxed(lean_object* v_context_4384_, lean_object* v_d_4385_, lean_object* v_a_4386_){
_start:
{
lean_object* v_res_4387_; 
v_res_4387_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v_context_4384_, v_d_4385_);
lean_dec_ref(v_context_4384_);
return v_res_4387_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object* v_context_4388_, lean_object* v_bytes_4389_){
_start:
{
lean_object* v___x_4391_; 
v___x_4391_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4389_);
if (lean_obj_tag(v___x_4391_) == 0)
{
lean_object* v_a_4392_; lean_object* v___x_4393_; 
v_a_4392_ = lean_ctor_get(v___x_4391_, 0);
lean_inc(v_a_4392_);
lean_dec_ref_known(v___x_4391_, 1);
v___x_4393_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v_context_4388_, v_a_4392_);
return v___x_4393_;
}
else
{
lean_object* v_a_4394_; lean_object* v___x_4396_; uint8_t v_isShared_4397_; uint8_t v_isSharedCheck_4401_; 
v_a_4394_ = lean_ctor_get(v___x_4391_, 0);
v_isSharedCheck_4401_ = !lean_is_exclusive(v___x_4391_);
if (v_isSharedCheck_4401_ == 0)
{
v___x_4396_ = v___x_4391_;
v_isShared_4397_ = v_isSharedCheck_4401_;
goto v_resetjp_4395_;
}
else
{
lean_inc(v_a_4394_);
lean_dec(v___x_4391_);
v___x_4396_ = lean_box(0);
v_isShared_4397_ = v_isSharedCheck_4401_;
goto v_resetjp_4395_;
}
v_resetjp_4395_:
{
lean_object* v___x_4399_; 
if (v_isShared_4397_ == 0)
{
v___x_4399_ = v___x_4396_;
goto v_reusejp_4398_;
}
else
{
lean_object* v_reuseFailAlloc_4400_; 
v_reuseFailAlloc_4400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4400_, 0, v_a_4394_);
v___x_4399_ = v_reuseFailAlloc_4400_;
goto v_reusejp_4398_;
}
v_reusejp_4398_:
{
return v___x_4399_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0___boxed(lean_object* v_context_4402_, lean_object* v_bytes_4403_, lean_object* v_a_4404_){
_start:
{
lean_object* v_res_4405_; 
v_res_4405_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v_context_4402_, v_bytes_4403_);
lean_dec_ref(v_bytes_4403_);
lean_dec_ref(v_context_4402_);
return v_res_4405_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_global(){
_start:
{
uint32_t v___x_4408_; uint32_t v___x_4409_; uint64_t v___x_4410_; lean_object* v___x_4411_; lean_object* v___x_4412_; 
v___x_4408_ = 202;
v___x_4409_ = 0;
v___x_4410_ = 0ULL;
v___x_4411_ = l_ByteArray_empty;
v___x_4412_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_4408_, v___x_4409_, v___x_4410_, v___x_4411_);
if (lean_obj_tag(v___x_4412_) == 0)
{
lean_object* v_a_4413_; lean_object* v___x_4414_; lean_object* v___x_4415_; 
v_a_4413_ = lean_ctor_get(v___x_4412_, 0);
lean_inc(v_a_4413_);
lean_dec_ref_known(v___x_4412_, 1);
v___x_4414_ = ((lean_object*)(l_Lasm_JS_global___closed__0));
v___x_4415_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_4414_, v_a_4413_);
lean_dec(v_a_4413_);
return v___x_4415_;
}
else
{
lean_object* v_a_4416_; lean_object* v___x_4418_; uint8_t v_isShared_4419_; uint8_t v_isSharedCheck_4423_; 
v_a_4416_ = lean_ctor_get(v___x_4412_, 0);
v_isSharedCheck_4423_ = !lean_is_exclusive(v___x_4412_);
if (v_isSharedCheck_4423_ == 0)
{
v___x_4418_ = v___x_4412_;
v_isShared_4419_ = v_isSharedCheck_4423_;
goto v_resetjp_4417_;
}
else
{
lean_inc(v_a_4416_);
lean_dec(v___x_4412_);
v___x_4418_ = lean_box(0);
v_isShared_4419_ = v_isSharedCheck_4423_;
goto v_resetjp_4417_;
}
v_resetjp_4417_:
{
lean_object* v___x_4421_; 
if (v_isShared_4419_ == 0)
{
v___x_4421_ = v___x_4418_;
goto v_reusejp_4420_;
}
else
{
lean_object* v_reuseFailAlloc_4422_; 
v_reuseFailAlloc_4422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4422_, 0, v_a_4416_);
v___x_4421_ = v_reuseFailAlloc_4422_;
goto v_reusejp_4420_;
}
v_reusejp_4420_:
{
return v___x_4421_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_global___boxed(lean_object* v_a_4424_){
_start:
{
lean_object* v_res_4425_; 
v_res_4425_ = l_Lasm_JS_global();
return v_res_4425_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___redArg(lean_object* v_specifier_4427_, lean_object* v_inst_4428_){
_start:
{
uint8_t v_mode_4430_; uint32_t v___x_4431_; uint32_t v___x_4432_; uint64_t v___x_4433_; lean_object* v___x_4434_; lean_object* v___x_4435_; 
v_mode_4430_ = lean_ctor_get_uint8(v_inst_4428_, sizeof(void*)*2);
v___x_4431_ = 201;
v___x_4432_ = 0;
v___x_4433_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v_mode_4430_);
v___x_4434_ = lean_string_to_utf8(v_specifier_4427_);
v___x_4435_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_4431_, v___x_4432_, v___x_4433_, v___x_4434_);
lean_dec_ref(v___x_4434_);
if (lean_obj_tag(v___x_4435_) == 0)
{
lean_object* v_a_4436_; lean_object* v___x_4437_; lean_object* v___x_4438_; lean_object* v___x_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; lean_object* v___x_4444_; 
v_a_4436_ = lean_ctor_get(v___x_4435_, 0);
lean_inc(v_a_4436_);
lean_dec_ref_known(v___x_4435_, 1);
v___x_4437_ = ((lean_object*)(l_Lasm_JS_require___redArg___closed__0));
v___x_4438_ = l_String_quote(v_specifier_4427_);
v___x_4439_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4439_, 0, v___x_4438_);
v___x_4440_ = lean_unsigned_to_nat(120u);
v___x_4441_ = lean_unsigned_to_nat(0u);
v___x_4442_ = l_Std_Format_pretty(v___x_4439_, v___x_4440_, v___x_4441_, v___x_4441_);
v___x_4443_ = lean_string_append(v___x_4437_, v___x_4442_);
lean_dec_ref(v___x_4442_);
v___x_4444_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_4428_, v___x_4443_, v_a_4436_);
lean_dec(v_a_4436_);
lean_dec_ref(v___x_4443_);
return v___x_4444_;
}
else
{
lean_object* v_a_4445_; lean_object* v___x_4447_; uint8_t v_isShared_4448_; uint8_t v_isSharedCheck_4452_; 
lean_dec_ref(v_inst_4428_);
lean_dec_ref(v_specifier_4427_);
v_a_4445_ = lean_ctor_get(v___x_4435_, 0);
v_isSharedCheck_4452_ = !lean_is_exclusive(v___x_4435_);
if (v_isSharedCheck_4452_ == 0)
{
v___x_4447_ = v___x_4435_;
v_isShared_4448_ = v_isSharedCheck_4452_;
goto v_resetjp_4446_;
}
else
{
lean_inc(v_a_4445_);
lean_dec(v___x_4435_);
v___x_4447_ = lean_box(0);
v_isShared_4448_ = v_isSharedCheck_4452_;
goto v_resetjp_4446_;
}
v_resetjp_4446_:
{
lean_object* v___x_4450_; 
if (v_isShared_4448_ == 0)
{
v___x_4450_ = v___x_4447_;
goto v_reusejp_4449_;
}
else
{
lean_object* v_reuseFailAlloc_4451_; 
v_reuseFailAlloc_4451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4451_, 0, v_a_4445_);
v___x_4450_ = v_reuseFailAlloc_4451_;
goto v_reusejp_4449_;
}
v_reusejp_4449_:
{
return v___x_4450_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___redArg___boxed(lean_object* v_specifier_4453_, lean_object* v_inst_4454_, lean_object* v_a_4455_){
_start:
{
lean_object* v_res_4456_; 
v_res_4456_ = l_Lasm_JS_require___redArg(v_specifier_4453_, v_inst_4454_);
return v_res_4456_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require(lean_object* v_specifier_4457_, lean_object* v_00_u03b1_4458_, lean_object* v_inst_4459_){
_start:
{
lean_object* v___x_4461_; 
v___x_4461_ = l_Lasm_JS_require___redArg(v_specifier_4457_, v_inst_4459_);
return v___x_4461_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___boxed(lean_object* v_specifier_4462_, lean_object* v_00_u03b1_4463_, lean_object* v_inst_4464_, lean_object* v_a_4465_){
_start:
{
lean_object* v_res_4466_; 
v_res_4466_ = l_Lasm_JS_require(v_specifier_4462_, v_00_u03b1_4463_, v_inst_4464_);
return v_res_4466_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_describe(lean_object* v_v_4467_){
_start:
{
uint32_t v___x_4469_; uint64_t v___x_4470_; lean_object* v___x_4471_; lean_object* v___x_4472_; uint32_t v___x_4473_; lean_object* v___x_4474_; 
v___x_4469_ = 206;
v___x_4470_ = 0ULL;
v___x_4471_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
lean_inc(v_v_4467_);
v___x_4472_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4472_, 0, v_v_4467_);
lean_ctor_set(v___x_4472_, 1, v___x_4471_);
v___x_4473_ = lasm_js_value_handle(v_v_4467_);
lean_dec(v_v_4467_);
v___x_4474_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4469_, v___x_4470_, v___x_4472_, v___x_4473_);
lean_dec_ref_known(v___x_4472_, 2);
if (lean_obj_tag(v___x_4474_) == 0)
{
lean_object* v_a_4475_; lean_object* v___x_4477_; uint8_t v_isShared_4478_; uint8_t v_isSharedCheck_4489_; 
v_a_4475_ = lean_ctor_get(v___x_4474_, 0);
v_isSharedCheck_4489_ = !lean_is_exclusive(v___x_4474_);
if (v_isSharedCheck_4489_ == 0)
{
v___x_4477_ = v___x_4474_;
v_isShared_4478_ = v_isSharedCheck_4489_;
goto v_resetjp_4476_;
}
else
{
lean_inc(v_a_4475_);
lean_dec(v___x_4474_);
v___x_4477_ = lean_box(0);
v_isShared_4478_ = v_isSharedCheck_4489_;
goto v_resetjp_4476_;
}
v_resetjp_4476_:
{
uint8_t v___x_4479_; 
v___x_4479_ = lean_string_validate_utf8(v_a_4475_);
if (v___x_4479_ == 0)
{
lean_object* v___x_4480_; lean_object* v___x_4481_; lean_object* v___x_4483_; 
lean_dec(v_a_4475_);
v___x_4480_ = lean_obj_once(&l_Lasm_JS_decodeAs___redArg___closed__7, &l_Lasm_JS_decodeAs___redArg___closed__7_once, _init_l_Lasm_JS_decodeAs___redArg___closed__7);
v___x_4481_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4480_);
if (v_isShared_4478_ == 0)
{
lean_ctor_set(v___x_4477_, 0, v___x_4481_);
v___x_4483_ = v___x_4477_;
goto v_reusejp_4482_;
}
else
{
lean_object* v_reuseFailAlloc_4484_; 
v_reuseFailAlloc_4484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4484_, 0, v___x_4481_);
v___x_4483_ = v_reuseFailAlloc_4484_;
goto v_reusejp_4482_;
}
v_reusejp_4482_:
{
return v___x_4483_;
}
}
else
{
lean_object* v___x_4485_; lean_object* v___x_4487_; 
v___x_4485_ = lean_string_from_utf8_unchecked(v_a_4475_);
if (v_isShared_4478_ == 0)
{
lean_ctor_set(v___x_4477_, 0, v___x_4485_);
v___x_4487_ = v___x_4477_;
goto v_reusejp_4486_;
}
else
{
lean_object* v_reuseFailAlloc_4488_; 
v_reuseFailAlloc_4488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4488_, 0, v___x_4485_);
v___x_4487_ = v_reuseFailAlloc_4488_;
goto v_reusejp_4486_;
}
v_reusejp_4486_:
{
return v___x_4487_;
}
}
}
}
else
{
lean_object* v_a_4490_; lean_object* v___x_4492_; uint8_t v_isShared_4493_; uint8_t v_isSharedCheck_4497_; 
v_a_4490_ = lean_ctor_get(v___x_4474_, 0);
v_isSharedCheck_4497_ = !lean_is_exclusive(v___x_4474_);
if (v_isSharedCheck_4497_ == 0)
{
v___x_4492_ = v___x_4474_;
v_isShared_4493_ = v_isSharedCheck_4497_;
goto v_resetjp_4491_;
}
else
{
lean_inc(v_a_4490_);
lean_dec(v___x_4474_);
v___x_4492_ = lean_box(0);
v_isShared_4493_ = v_isSharedCheck_4497_;
goto v_resetjp_4491_;
}
v_resetjp_4491_:
{
lean_object* v___x_4495_; 
if (v_isShared_4493_ == 0)
{
v___x_4495_ = v___x_4492_;
goto v_reusejp_4494_;
}
else
{
lean_object* v_reuseFailAlloc_4496_; 
v_reuseFailAlloc_4496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4496_, 0, v_a_4490_);
v___x_4495_ = v_reuseFailAlloc_4496_;
goto v_reusejp_4494_;
}
v_reusejp_4494_:
{
return v___x_4495_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_describe___boxed(lean_object* v_v_4498_, lean_object* v_a_4499_){
_start:
{
lean_object* v_res_4500_; 
v_res_4500_ = l_Lasm_JS_Value_describe(v_v_4498_);
return v_res_4500_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object* v_x_4501_){
_start:
{
if (lean_obj_tag(v_x_4501_) == 4)
{
lean_object* v_s_4502_; lean_object* v___x_4504_; uint8_t v_isShared_4505_; uint8_t v_isSharedCheck_4513_; 
v_s_4502_ = lean_ctor_get(v_x_4501_, 0);
v_isSharedCheck_4513_ = !lean_is_exclusive(v_x_4501_);
if (v_isSharedCheck_4513_ == 0)
{
v___x_4504_ = v_x_4501_;
v_isShared_4505_ = v_isSharedCheck_4513_;
goto v_resetjp_4503_;
}
else
{
lean_inc(v_s_4502_);
lean_dec(v_x_4501_);
v___x_4504_ = lean_box(0);
v_isShared_4505_ = v_isSharedCheck_4513_;
goto v_resetjp_4503_;
}
v_resetjp_4503_:
{
lean_object* v___x_4506_; lean_object* v___x_4508_; 
v___x_4506_ = l_String_quote(v_s_4502_);
if (v_isShared_4505_ == 0)
{
lean_ctor_set_tag(v___x_4504_, 3);
lean_ctor_set(v___x_4504_, 0, v___x_4506_);
v___x_4508_ = v___x_4504_;
goto v_reusejp_4507_;
}
else
{
lean_object* v_reuseFailAlloc_4512_; 
v_reuseFailAlloc_4512_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4512_, 0, v___x_4506_);
v___x_4508_ = v_reuseFailAlloc_4512_;
goto v_reusejp_4507_;
}
v_reusejp_4507_:
{
lean_object* v___x_4509_; lean_object* v___x_4510_; lean_object* v___x_4511_; 
v___x_4509_ = lean_unsigned_to_nat(120u);
v___x_4510_ = lean_unsigned_to_nat(0u);
v___x_4511_ = l_Std_Format_pretty(v___x_4508_, v___x_4509_, v___x_4510_, v___x_4510_);
return v___x_4511_;
}
}
}
else
{
lean_object* v___x_4514_; 
v___x_4514_ = l_Lasm_JS_Data_describe(v_x_4501_);
return v___x_4514_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___redArg(lean_object* v_inst_4516_, lean_object* v_o_4517_, lean_object* v_key_4518_, lean_object* v_inst_4519_){
_start:
{
lean_object* v_k_4521_; lean_object* v___x_4522_; 
v_k_4521_ = lean_apply_1(v_inst_4516_, v_key_4518_);
v___x_4522_ = l_Lasm_JS_Wire_encodeIO(v_k_4521_);
if (lean_obj_tag(v___x_4522_) == 0)
{
lean_object* v_a_4523_; uint8_t v_mode_4524_; uint32_t v___x_4525_; uint32_t v___x_4526_; uint64_t v___x_4527_; lean_object* v___x_4528_; lean_object* v___x_4529_; lean_object* v___x_4530_; lean_object* v___x_4531_; lean_object* v___x_4532_; lean_object* v___x_4533_; lean_object* v___x_4534_; lean_object* v___x_4535_; 
v_a_4523_ = lean_ctor_get(v___x_4522_, 0);
lean_inc(v_a_4523_);
lean_dec_ref_known(v___x_4522_, 1);
v_mode_4524_ = lean_ctor_get_uint8(v_inst_4519_, sizeof(void*)*2);
v___x_4525_ = 203;
v___x_4526_ = lasm_js_value_handle(v_o_4517_);
v___x_4527_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v_mode_4524_);
v___x_4528_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
v___x_4529_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4529_, 0, v_o_4517_);
lean_ctor_set(v___x_4529_, 1, v___x_4528_);
v___x_4530_ = lean_unsigned_to_nat(2u);
v___x_4531_ = lean_mk_empty_array_with_capacity(v___x_4530_);
lean_inc(v_k_4521_);
v___x_4532_ = lean_array_push(v___x_4531_, v_k_4521_);
v___x_4533_ = lean_array_push(v___x_4532_, v___x_4529_);
v___x_4534_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4534_, 0, v___x_4533_);
v___x_4535_ = lasm_js_call(v___x_4525_, v___x_4526_, v___x_4527_, v_a_4523_, v___x_4534_);
lean_dec_ref_known(v___x_4534_, 1);
lean_dec(v_a_4523_);
if (lean_obj_tag(v___x_4535_) == 0)
{
lean_object* v_a_4536_; lean_object* v___x_4537_; lean_object* v___x_4538_; lean_object* v___x_4539_; lean_object* v___x_4540_; 
v_a_4536_ = lean_ctor_get(v___x_4535_, 0);
lean_inc(v_a_4536_);
lean_dec_ref_known(v___x_4535_, 1);
v___x_4537_ = ((lean_object*)(l_Lasm_JS_Value_get___redArg___closed__0));
v___x_4538_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_4521_);
v___x_4539_ = lean_string_append(v___x_4537_, v___x_4538_);
lean_dec_ref(v___x_4538_);
v___x_4540_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_4519_, v___x_4539_, v_a_4536_);
lean_dec(v_a_4536_);
lean_dec_ref(v___x_4539_);
return v___x_4540_;
}
else
{
lean_object* v_a_4541_; lean_object* v___x_4543_; uint8_t v_isShared_4544_; uint8_t v_isSharedCheck_4548_; 
lean_dec(v_k_4521_);
lean_dec_ref(v_inst_4519_);
v_a_4541_ = lean_ctor_get(v___x_4535_, 0);
v_isSharedCheck_4548_ = !lean_is_exclusive(v___x_4535_);
if (v_isSharedCheck_4548_ == 0)
{
v___x_4543_ = v___x_4535_;
v_isShared_4544_ = v_isSharedCheck_4548_;
goto v_resetjp_4542_;
}
else
{
lean_inc(v_a_4541_);
lean_dec(v___x_4535_);
v___x_4543_ = lean_box(0);
v_isShared_4544_ = v_isSharedCheck_4548_;
goto v_resetjp_4542_;
}
v_resetjp_4542_:
{
lean_object* v___x_4546_; 
if (v_isShared_4544_ == 0)
{
v___x_4546_ = v___x_4543_;
goto v_reusejp_4545_;
}
else
{
lean_object* v_reuseFailAlloc_4547_; 
v_reuseFailAlloc_4547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4547_, 0, v_a_4541_);
v___x_4546_ = v_reuseFailAlloc_4547_;
goto v_reusejp_4545_;
}
v_reusejp_4545_:
{
return v___x_4546_;
}
}
}
}
else
{
lean_object* v_a_4549_; lean_object* v___x_4551_; uint8_t v_isShared_4552_; uint8_t v_isSharedCheck_4556_; 
lean_dec(v_k_4521_);
lean_dec_ref(v_inst_4519_);
lean_dec(v_o_4517_);
v_a_4549_ = lean_ctor_get(v___x_4522_, 0);
v_isSharedCheck_4556_ = !lean_is_exclusive(v___x_4522_);
if (v_isSharedCheck_4556_ == 0)
{
v___x_4551_ = v___x_4522_;
v_isShared_4552_ = v_isSharedCheck_4556_;
goto v_resetjp_4550_;
}
else
{
lean_inc(v_a_4549_);
lean_dec(v___x_4522_);
v___x_4551_ = lean_box(0);
v_isShared_4552_ = v_isSharedCheck_4556_;
goto v_resetjp_4550_;
}
v_resetjp_4550_:
{
lean_object* v___x_4554_; 
if (v_isShared_4552_ == 0)
{
v___x_4554_ = v___x_4551_;
goto v_reusejp_4553_;
}
else
{
lean_object* v_reuseFailAlloc_4555_; 
v_reuseFailAlloc_4555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4555_, 0, v_a_4549_);
v___x_4554_ = v_reuseFailAlloc_4555_;
goto v_reusejp_4553_;
}
v_reusejp_4553_:
{
return v___x_4554_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___redArg___boxed(lean_object* v_inst_4557_, lean_object* v_o_4558_, lean_object* v_key_4559_, lean_object* v_inst_4560_, lean_object* v_a_4561_){
_start:
{
lean_object* v_res_4562_; 
v_res_4562_ = l_Lasm_JS_Value_get___redArg(v_inst_4557_, v_o_4558_, v_key_4559_, v_inst_4560_);
return v_res_4562_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get(lean_object* v_00_u03ba_4563_, lean_object* v_inst_4564_, lean_object* v_o_4565_, lean_object* v_key_4566_, lean_object* v_00_u03b1_4567_, lean_object* v_inst_4568_){
_start:
{
lean_object* v___x_4570_; 
v___x_4570_ = l_Lasm_JS_Value_get___redArg(v_inst_4564_, v_o_4565_, v_key_4566_, v_inst_4568_);
return v___x_4570_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___boxed(lean_object* v_00_u03ba_4571_, lean_object* v_inst_4572_, lean_object* v_o_4573_, lean_object* v_key_4574_, lean_object* v_00_u03b1_4575_, lean_object* v_inst_4576_, lean_object* v_a_4577_){
_start:
{
lean_object* v_res_4578_; 
v_res_4578_ = l_Lasm_JS_Value_get(v_00_u03ba_4571_, v_inst_4572_, v_o_4573_, v_key_4574_, v_00_u03b1_4575_, v_inst_4576_);
return v_res_4578_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___redArg___lam__0(lean_object* v_x_4579_){
_start:
{
lean_object* v___x_4580_; 
v___x_4580_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4580_, 0, v_x_4579_);
return v___x_4580_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___redArg(lean_object* v_o_4583_, lean_object* v_keys_4584_, lean_object* v_inst_4585_){
_start:
{
lean_object* v___f_4587_; lean_object* v___x_4588_; size_t v_sz_4589_; size_t v___x_4590_; lean_object* v___x_4591_; lean_object* v___x_4592_; lean_object* v___x_4593_; 
v___f_4587_ = ((lean_object*)(l_Lasm_JS_Value_getFields___redArg___closed__0));
v___x_4588_ = ((lean_object*)(l_Lasm_JS_instToJSArray___redArg___lam__1___closed__9));
v_sz_4589_ = lean_array_size(v_keys_4584_);
v___x_4590_ = ((size_t)0ULL);
v___x_4591_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_4588_, v___f_4587_, v_sz_4589_, v___x_4590_, v_keys_4584_);
v___x_4592_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4592_, 0, v___x_4591_);
v___x_4593_ = l_Lasm_JS_Wire_encodeIO(v___x_4592_);
lean_dec_ref_known(v___x_4592_, 1);
if (lean_obj_tag(v___x_4593_) == 0)
{
lean_object* v_a_4594_; uint32_t v___x_4595_; uint32_t v___x_4596_; uint64_t v___x_4597_; lean_object* v___x_4598_; lean_object* v___x_4599_; lean_object* v___x_4600_; 
v_a_4594_ = lean_ctor_get(v___x_4593_, 0);
lean_inc(v_a_4594_);
lean_dec_ref_known(v___x_4593_, 1);
v___x_4595_ = 203;
v___x_4596_ = lasm_js_value_handle(v_o_4583_);
v___x_4597_ = 2ULL;
v___x_4598_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
v___x_4599_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4599_, 0, v_o_4583_);
lean_ctor_set(v___x_4599_, 1, v___x_4598_);
v___x_4600_ = lasm_js_call(v___x_4595_, v___x_4596_, v___x_4597_, v_a_4594_, v___x_4599_);
lean_dec_ref_known(v___x_4599_, 2);
lean_dec(v_a_4594_);
if (lean_obj_tag(v___x_4600_) == 0)
{
lean_object* v_a_4601_; lean_object* v___x_4602_; lean_object* v___x_4603_; 
v_a_4601_ = lean_ctor_get(v___x_4600_, 0);
lean_inc(v_a_4601_);
lean_dec_ref_known(v___x_4600_, 1);
v___x_4602_ = ((lean_object*)(l_Lasm_JS_Value_getFields___redArg___closed__1));
v___x_4603_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_4585_, v___x_4602_, v_a_4601_);
lean_dec(v_a_4601_);
return v___x_4603_;
}
else
{
lean_object* v_a_4604_; lean_object* v___x_4606_; uint8_t v_isShared_4607_; uint8_t v_isSharedCheck_4611_; 
lean_dec_ref(v_inst_4585_);
v_a_4604_ = lean_ctor_get(v___x_4600_, 0);
v_isSharedCheck_4611_ = !lean_is_exclusive(v___x_4600_);
if (v_isSharedCheck_4611_ == 0)
{
v___x_4606_ = v___x_4600_;
v_isShared_4607_ = v_isSharedCheck_4611_;
goto v_resetjp_4605_;
}
else
{
lean_inc(v_a_4604_);
lean_dec(v___x_4600_);
v___x_4606_ = lean_box(0);
v_isShared_4607_ = v_isSharedCheck_4611_;
goto v_resetjp_4605_;
}
v_resetjp_4605_:
{
lean_object* v___x_4609_; 
if (v_isShared_4607_ == 0)
{
v___x_4609_ = v___x_4606_;
goto v_reusejp_4608_;
}
else
{
lean_object* v_reuseFailAlloc_4610_; 
v_reuseFailAlloc_4610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4610_, 0, v_a_4604_);
v___x_4609_ = v_reuseFailAlloc_4610_;
goto v_reusejp_4608_;
}
v_reusejp_4608_:
{
return v___x_4609_;
}
}
}
}
else
{
lean_object* v_a_4612_; lean_object* v___x_4614_; uint8_t v_isShared_4615_; uint8_t v_isSharedCheck_4619_; 
lean_dec_ref(v_inst_4585_);
lean_dec(v_o_4583_);
v_a_4612_ = lean_ctor_get(v___x_4593_, 0);
v_isSharedCheck_4619_ = !lean_is_exclusive(v___x_4593_);
if (v_isSharedCheck_4619_ == 0)
{
v___x_4614_ = v___x_4593_;
v_isShared_4615_ = v_isSharedCheck_4619_;
goto v_resetjp_4613_;
}
else
{
lean_inc(v_a_4612_);
lean_dec(v___x_4593_);
v___x_4614_ = lean_box(0);
v_isShared_4615_ = v_isSharedCheck_4619_;
goto v_resetjp_4613_;
}
v_resetjp_4613_:
{
lean_object* v___x_4617_; 
if (v_isShared_4615_ == 0)
{
v___x_4617_ = v___x_4614_;
goto v_reusejp_4616_;
}
else
{
lean_object* v_reuseFailAlloc_4618_; 
v_reuseFailAlloc_4618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4618_, 0, v_a_4612_);
v___x_4617_ = v_reuseFailAlloc_4618_;
goto v_reusejp_4616_;
}
v_reusejp_4616_:
{
return v___x_4617_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___redArg___boxed(lean_object* v_o_4620_, lean_object* v_keys_4621_, lean_object* v_inst_4622_, lean_object* v_a_4623_){
_start:
{
lean_object* v_res_4624_; 
v_res_4624_ = l_Lasm_JS_Value_getFields___redArg(v_o_4620_, v_keys_4621_, v_inst_4622_);
return v_res_4624_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields(lean_object* v_o_4625_, lean_object* v_keys_4626_, lean_object* v_00_u03b1_4627_, lean_object* v_inst_4628_){
_start:
{
lean_object* v___x_4630_; 
v___x_4630_ = l_Lasm_JS_Value_getFields___redArg(v_o_4625_, v_keys_4626_, v_inst_4628_);
return v___x_4630_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___boxed(lean_object* v_o_4631_, lean_object* v_keys_4632_, lean_object* v_00_u03b1_4633_, lean_object* v_inst_4634_, lean_object* v_a_4635_){
_start:
{
lean_object* v_res_4636_; 
v_res_4636_ = l_Lasm_JS_Value_getFields(v_o_4631_, v_keys_4632_, v_00_u03b1_4633_, v_inst_4634_);
return v_res_4636_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___redArg(lean_object* v_inst_4637_, lean_object* v_inst_4638_, lean_object* v_o_4639_, lean_object* v_key_4640_, lean_object* v_x_4641_){
_start:
{
lean_object* v___x_4643_; lean_object* v___x_4644_; lean_object* v___x_4645_; lean_object* v___x_4646_; lean_object* v___x_4647_; lean_object* v___x_4648_; lean_object* v___x_4649_; lean_object* v___x_4650_; lean_object* v___x_4651_; lean_object* v_payload_4652_; lean_object* v___x_4653_; lean_object* v___x_4654_; lean_object* v___x_4655_; lean_object* v___x_4656_; lean_object* v___x_4657_; lean_object* v___x_4658_; 
v___x_4643_ = lean_apply_1(v_inst_4637_, v_key_4640_);
v___x_4644_ = lean_apply_1(v_inst_4638_, v_x_4641_);
v___x_4645_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
lean_inc(v_o_4639_);
v___x_4646_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4646_, 0, v_o_4639_);
lean_ctor_set(v___x_4646_, 1, v___x_4645_);
v___x_4647_ = lean_unsigned_to_nat(3u);
v___x_4648_ = lean_mk_empty_array_with_capacity(v___x_4647_);
lean_inc(v___x_4643_);
v___x_4649_ = lean_array_push(v___x_4648_, v___x_4643_);
lean_inc(v___x_4644_);
v___x_4650_ = lean_array_push(v___x_4649_, v___x_4644_);
v___x_4651_ = lean_array_push(v___x_4650_, v___x_4646_);
v_payload_4652_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_payload_4652_, 0, v___x_4651_);
v___x_4653_ = lean_unsigned_to_nat(2u);
v___x_4654_ = lean_mk_empty_array_with_capacity(v___x_4653_);
v___x_4655_ = lean_array_push(v___x_4654_, v___x_4643_);
v___x_4656_ = lean_array_push(v___x_4655_, v___x_4644_);
v___x_4657_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4657_, 0, v___x_4656_);
v___x_4658_ = l_Lasm_JS_Wire_encodeIO(v___x_4657_);
lean_dec_ref_known(v___x_4657_, 1);
if (lean_obj_tag(v___x_4658_) == 0)
{
lean_object* v_a_4659_; uint32_t v___x_4660_; uint32_t v___x_4661_; uint64_t v___x_4662_; lean_object* v___x_4663_; lean_object* v___x_4664_; 
v_a_4659_ = lean_ctor_get(v___x_4658_, 0);
lean_inc(v_a_4659_);
lean_dec_ref_known(v___x_4658_, 1);
v___x_4660_ = 204;
v___x_4661_ = lasm_js_value_handle(v_o_4639_);
lean_dec(v_o_4639_);
v___x_4662_ = 0ULL;
v___x_4663_ = lean_box(0);
v___x_4664_ = lasm_js_call(v___x_4660_, v___x_4661_, v___x_4662_, v_a_4659_, v_payload_4652_);
lean_dec_ref_known(v_payload_4652_, 1);
lean_dec(v_a_4659_);
if (lean_obj_tag(v___x_4664_) == 0)
{
lean_object* v___x_4666_; uint8_t v_isShared_4667_; uint8_t v_isSharedCheck_4671_; 
v_isSharedCheck_4671_ = !lean_is_exclusive(v___x_4664_);
if (v_isSharedCheck_4671_ == 0)
{
lean_object* v_unused_4672_; 
v_unused_4672_ = lean_ctor_get(v___x_4664_, 0);
lean_dec(v_unused_4672_);
v___x_4666_ = v___x_4664_;
v_isShared_4667_ = v_isSharedCheck_4671_;
goto v_resetjp_4665_;
}
else
{
lean_dec(v___x_4664_);
v___x_4666_ = lean_box(0);
v_isShared_4667_ = v_isSharedCheck_4671_;
goto v_resetjp_4665_;
}
v_resetjp_4665_:
{
lean_object* v___x_4669_; 
if (v_isShared_4667_ == 0)
{
lean_ctor_set(v___x_4666_, 0, v___x_4663_);
v___x_4669_ = v___x_4666_;
goto v_reusejp_4668_;
}
else
{
lean_object* v_reuseFailAlloc_4670_; 
v_reuseFailAlloc_4670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4670_, 0, v___x_4663_);
v___x_4669_ = v_reuseFailAlloc_4670_;
goto v_reusejp_4668_;
}
v_reusejp_4668_:
{
return v___x_4669_;
}
}
}
else
{
lean_object* v_a_4673_; lean_object* v___x_4675_; uint8_t v_isShared_4676_; uint8_t v_isSharedCheck_4680_; 
v_a_4673_ = lean_ctor_get(v___x_4664_, 0);
v_isSharedCheck_4680_ = !lean_is_exclusive(v___x_4664_);
if (v_isSharedCheck_4680_ == 0)
{
v___x_4675_ = v___x_4664_;
v_isShared_4676_ = v_isSharedCheck_4680_;
goto v_resetjp_4674_;
}
else
{
lean_inc(v_a_4673_);
lean_dec(v___x_4664_);
v___x_4675_ = lean_box(0);
v_isShared_4676_ = v_isSharedCheck_4680_;
goto v_resetjp_4674_;
}
v_resetjp_4674_:
{
lean_object* v___x_4678_; 
if (v_isShared_4676_ == 0)
{
v___x_4678_ = v___x_4675_;
goto v_reusejp_4677_;
}
else
{
lean_object* v_reuseFailAlloc_4679_; 
v_reuseFailAlloc_4679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4679_, 0, v_a_4673_);
v___x_4678_ = v_reuseFailAlloc_4679_;
goto v_reusejp_4677_;
}
v_reusejp_4677_:
{
return v___x_4678_;
}
}
}
}
else
{
lean_object* v_a_4681_; lean_object* v___x_4683_; uint8_t v_isShared_4684_; uint8_t v_isSharedCheck_4688_; 
lean_dec_ref_known(v_payload_4652_, 1);
lean_dec(v_o_4639_);
v_a_4681_ = lean_ctor_get(v___x_4658_, 0);
v_isSharedCheck_4688_ = !lean_is_exclusive(v___x_4658_);
if (v_isSharedCheck_4688_ == 0)
{
v___x_4683_ = v___x_4658_;
v_isShared_4684_ = v_isSharedCheck_4688_;
goto v_resetjp_4682_;
}
else
{
lean_inc(v_a_4681_);
lean_dec(v___x_4658_);
v___x_4683_ = lean_box(0);
v_isShared_4684_ = v_isSharedCheck_4688_;
goto v_resetjp_4682_;
}
v_resetjp_4682_:
{
lean_object* v___x_4686_; 
if (v_isShared_4684_ == 0)
{
v___x_4686_ = v___x_4683_;
goto v_reusejp_4685_;
}
else
{
lean_object* v_reuseFailAlloc_4687_; 
v_reuseFailAlloc_4687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4687_, 0, v_a_4681_);
v___x_4686_ = v_reuseFailAlloc_4687_;
goto v_reusejp_4685_;
}
v_reusejp_4685_:
{
return v___x_4686_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___redArg___boxed(lean_object* v_inst_4689_, lean_object* v_inst_4690_, lean_object* v_o_4691_, lean_object* v_key_4692_, lean_object* v_x_4693_, lean_object* v_a_4694_){
_start:
{
lean_object* v_res_4695_; 
v_res_4695_ = l_Lasm_JS_Value_set___redArg(v_inst_4689_, v_inst_4690_, v_o_4691_, v_key_4692_, v_x_4693_);
return v_res_4695_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set(lean_object* v_00_u03ba_4696_, lean_object* v_00_u03b1_4697_, lean_object* v_inst_4698_, lean_object* v_inst_4699_, lean_object* v_o_4700_, lean_object* v_key_4701_, lean_object* v_x_4702_){
_start:
{
lean_object* v___x_4704_; 
v___x_4704_ = l_Lasm_JS_Value_set___redArg(v_inst_4698_, v_inst_4699_, v_o_4700_, v_key_4701_, v_x_4702_);
return v___x_4704_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___boxed(lean_object* v_00_u03ba_4705_, lean_object* v_00_u03b1_4706_, lean_object* v_inst_4707_, lean_object* v_inst_4708_, lean_object* v_o_4709_, lean_object* v_key_4710_, lean_object* v_x_4711_, lean_object* v_a_4712_){
_start:
{
lean_object* v_res_4713_; 
v_res_4713_ = l_Lasm_JS_Value_set(v_00_u03ba_4705_, v_00_u03b1_4706_, v_inst_4707_, v_inst_4708_, v_o_4709_, v_key_4710_, v_x_4711_);
return v_res_4713_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_invokeRaw(lean_object* v_target_4714_, lean_object* v_receiver_4715_, lean_object* v_args_4716_, uint64_t v_flags_4717_){
_start:
{
uint32_t v___x_4719_; lean_object* v___x_4720_; lean_object* v___x_4721_; lean_object* v___x_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; lean_object* v___x_4725_; lean_object* v___x_4726_; uint32_t v___x_4727_; lean_object* v___x_4728_; 
v___x_4719_ = 205;
v___x_4720_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4720_, 0, v_args_4716_);
v___x_4721_ = lean_unsigned_to_nat(3u);
v___x_4722_ = lean_mk_empty_array_with_capacity(v___x_4721_);
v___x_4723_ = lean_array_push(v___x_4722_, v_target_4714_);
v___x_4724_ = lean_array_push(v___x_4723_, v_receiver_4715_);
v___x_4725_ = lean_array_push(v___x_4724_, v___x_4720_);
v___x_4726_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4726_, 0, v___x_4725_);
v___x_4727_ = 0;
v___x_4728_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4719_, v_flags_4717_, v___x_4726_, v___x_4727_);
lean_dec_ref_known(v___x_4726_, 1);
return v___x_4728_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_invokeRaw___boxed(lean_object* v_target_4729_, lean_object* v_receiver_4730_, lean_object* v_args_4731_, lean_object* v_flags_4732_, lean_object* v_a_4733_){
_start:
{
uint64_t v_flags_boxed_4734_; lean_object* v_res_4735_; 
v_flags_boxed_4734_ = lean_unbox_uint64(v_flags_4732_);
lean_dec_ref(v_flags_4732_);
v_res_4735_ = l_Lasm_JS_Value_invokeRaw(v_target_4729_, v_receiver_4730_, v_args_4731_, v_flags_boxed_4734_);
return v_res_4735_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(lean_object* v_inst_4736_, uint8_t v_await_4737_, uint64_t v_extra_4738_){
_start:
{
uint8_t v_mode_4739_; uint64_t v___x_4740_; uint64_t v___y_4742_; 
v_mode_4739_ = lean_ctor_get_uint8(v_inst_4736_, sizeof(void*)*2);
v___x_4740_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v_mode_4739_);
if (v_await_4737_ == 0)
{
uint64_t v___x_4745_; 
v___x_4745_ = 0ULL;
v___y_4742_ = v___x_4745_;
goto v___jp_4741_;
}
else
{
uint64_t v___x_4746_; 
v___x_4746_ = 2ULL;
v___y_4742_ = v___x_4746_;
goto v___jp_4741_;
}
v___jp_4741_:
{
uint64_t v___x_4743_; uint64_t v___x_4744_; 
v___x_4743_ = lean_uint64_lor(v___x_4740_, v___y_4742_);
v___x_4744_ = lean_uint64_lor(v___x_4743_, v_extra_4738_);
return v___x_4744_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg___boxed(lean_object* v_inst_4747_, lean_object* v_await_4748_, lean_object* v_extra_4749_){
_start:
{
uint8_t v_await_boxed_4750_; uint64_t v_extra_boxed_4751_; uint64_t v_res_4752_; lean_object* v_r_4753_; 
v_await_boxed_4750_ = lean_unbox(v_await_4748_);
v_extra_boxed_4751_ = lean_unbox_uint64(v_extra_4749_);
lean_dec_ref(v_extra_4749_);
v_res_4752_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_4747_, v_await_boxed_4750_, v_extra_boxed_4751_);
lean_dec_ref(v_inst_4747_);
v_r_4753_ = lean_box_uint64(v_res_4752_);
return v_r_4753_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags(lean_object* v_00_u03b1_4754_, lean_object* v_inst_4755_, uint8_t v_await_4756_, uint64_t v_extra_4757_){
_start:
{
uint64_t v___x_4758_; 
v___x_4758_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_4755_, v_await_4756_, v_extra_4757_);
return v___x_4758_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___boxed(lean_object* v_00_u03b1_4759_, lean_object* v_inst_4760_, lean_object* v_await_4761_, lean_object* v_extra_4762_){
_start:
{
uint8_t v_await_boxed_4763_; uint64_t v_extra_boxed_4764_; uint64_t v_res_4765_; lean_object* v_r_4766_; 
v_await_boxed_4763_ = lean_unbox(v_await_4761_);
v_extra_boxed_4764_ = lean_unbox_uint64(v_extra_4762_);
lean_dec_ref(v_extra_4762_);
v_res_4765_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags(v_00_u03b1_4759_, v_inst_4760_, v_await_boxed_4763_, v_extra_boxed_4764_);
lean_dec_ref(v_inst_4760_);
v_r_4766_ = lean_box_uint64(v_res_4765_);
return v_r_4766_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___redArg(lean_object* v_f_4768_, lean_object* v_args_4769_, lean_object* v_inst_4770_, lean_object* v_this_4771_){
_start:
{
lean_object* v___x_4773_; lean_object* v___x_4774_; uint8_t v___x_4775_; uint64_t v___x_4776_; uint64_t v___x_4777_; lean_object* v___x_4778_; 
v___x_4773_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
v___x_4774_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4774_, 0, v_f_4768_);
lean_ctor_set(v___x_4774_, 1, v___x_4773_);
v___x_4775_ = 0;
v___x_4776_ = 0ULL;
v___x_4777_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_4770_, v___x_4775_, v___x_4776_);
v___x_4778_ = l_Lasm_JS_Value_invokeRaw(v___x_4774_, v_this_4771_, v_args_4769_, v___x_4777_);
if (lean_obj_tag(v___x_4778_) == 0)
{
lean_object* v_a_4779_; lean_object* v___x_4780_; lean_object* v___x_4781_; 
v_a_4779_ = lean_ctor_get(v___x_4778_, 0);
lean_inc(v_a_4779_);
lean_dec_ref_known(v___x_4778_, 1);
v___x_4780_ = ((lean_object*)(l_Lasm_JS_Value_call___redArg___closed__0));
v___x_4781_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_4770_, v___x_4780_, v_a_4779_);
lean_dec(v_a_4779_);
return v___x_4781_;
}
else
{
lean_object* v_a_4782_; lean_object* v___x_4784_; uint8_t v_isShared_4785_; uint8_t v_isSharedCheck_4789_; 
lean_dec_ref(v_inst_4770_);
v_a_4782_ = lean_ctor_get(v___x_4778_, 0);
v_isSharedCheck_4789_ = !lean_is_exclusive(v___x_4778_);
if (v_isSharedCheck_4789_ == 0)
{
v___x_4784_ = v___x_4778_;
v_isShared_4785_ = v_isSharedCheck_4789_;
goto v_resetjp_4783_;
}
else
{
lean_inc(v_a_4782_);
lean_dec(v___x_4778_);
v___x_4784_ = lean_box(0);
v_isShared_4785_ = v_isSharedCheck_4789_;
goto v_resetjp_4783_;
}
v_resetjp_4783_:
{
lean_object* v___x_4787_; 
if (v_isShared_4785_ == 0)
{
v___x_4787_ = v___x_4784_;
goto v_reusejp_4786_;
}
else
{
lean_object* v_reuseFailAlloc_4788_; 
v_reuseFailAlloc_4788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4788_, 0, v_a_4782_);
v___x_4787_ = v_reuseFailAlloc_4788_;
goto v_reusejp_4786_;
}
v_reusejp_4786_:
{
return v___x_4787_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___redArg___boxed(lean_object* v_f_4790_, lean_object* v_args_4791_, lean_object* v_inst_4792_, lean_object* v_this_4793_, lean_object* v_a_4794_){
_start:
{
lean_object* v_res_4795_; 
v_res_4795_ = l_Lasm_JS_Value_call___redArg(v_f_4790_, v_args_4791_, v_inst_4792_, v_this_4793_);
return v_res_4795_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call(lean_object* v_f_4796_, lean_object* v_args_4797_, lean_object* v_00_u03b1_4798_, lean_object* v_inst_4799_, lean_object* v_this_4800_){
_start:
{
lean_object* v___x_4802_; 
v___x_4802_ = l_Lasm_JS_Value_call___redArg(v_f_4796_, v_args_4797_, v_inst_4799_, v_this_4800_);
return v___x_4802_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___boxed(lean_object* v_f_4803_, lean_object* v_args_4804_, lean_object* v_00_u03b1_4805_, lean_object* v_inst_4806_, lean_object* v_this_4807_, lean_object* v_a_4808_){
_start:
{
lean_object* v_res_4809_; 
v_res_4809_ = l_Lasm_JS_Value_call(v_f_4803_, v_args_4804_, v_00_u03b1_4805_, v_inst_4806_, v_this_4807_);
return v_res_4809_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___redArg___lam__0(lean_object* v_inst_4810_, lean_object* v_____do__lift_4811_){
_start:
{
lean_object* v___x_4813_; lean_object* v___x_4814_; 
v___x_4813_ = ((lean_object*)(l_Lasm_JS_Value_call___redArg___closed__0));
v___x_4814_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_4810_, v___x_4813_, v_____do__lift_4811_);
return v___x_4814_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___redArg___lam__0___boxed(lean_object* v_inst_4815_, lean_object* v_____do__lift_4816_, lean_object* v___y_4817_){
_start:
{
lean_object* v_res_4818_; 
v_res_4818_ = l_Lasm_JS_Value_callAwait___redArg___lam__0(v_inst_4815_, v_____do__lift_4816_);
lean_dec_ref(v_____do__lift_4816_);
return v_res_4818_;
}
}
static lean_object* _init_l_Lasm_JS_Value_callAwait___redArg___boxed__const__1(void){
_start:
{
uint32_t v___x_4819_; lean_object* v___x_4820_; 
v___x_4819_ = 205;
v___x_4820_ = lean_box_uint32(v___x_4819_);
return v___x_4820_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___redArg(lean_object* v_inst_4821_, lean_object* v_f_4822_, lean_object* v_args_4823_, lean_object* v_inst_4824_, lean_object* v_this_4825_){
_start:
{
lean_object* v___f_4826_; lean_object* v___x_4827_; lean_object* v___x_4828_; uint8_t v___x_4829_; uint64_t v___x_4830_; uint64_t v___x_4831_; lean_object* v___x_4832_; lean_object* v___x_4833_; lean_object* v___x_4834_; lean_object* v___x_4835_; uint8_t v___x_4836_; uint64_t v___x_4837_; lean_object* v___x_4838_; lean_object* v___x_4839_; lean_object* v___x_4840_; lean_object* v___x_4841_; lean_object* v___x_4842_; lean_object* v___x_4843_; lean_object* v___x_4844_; lean_object* v___x_4845_; lean_object* v___x_4846_; lean_object* v___x_4847_; lean_object* v___x_4848_; 
lean_inc_ref(v_inst_4824_);
v___f_4826_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_callAwait___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4826_, 0, v_inst_4824_);
v___x_4827_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
v___x_4828_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4828_, 0, v_f_4822_);
lean_ctor_set(v___x_4828_, 1, v___x_4827_);
v___x_4829_ = 1;
v___x_4830_ = 0ULL;
v___x_4831_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_4824_, v___x_4829_, v___x_4830_);
v___x_4832_ = lean_box_uint64(v___x_4831_);
lean_inc_ref(v_args_4823_);
lean_inc(v_this_4825_);
lean_inc_ref(v___x_4828_);
v___x_4833_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_invokeRaw___boxed), 5, 4);
lean_closure_set(v___x_4833_, 0, v___x_4828_);
lean_closure_set(v___x_4833_, 1, v_this_4825_);
lean_closure_set(v___x_4833_, 2, v_args_4823_);
lean_closure_set(v___x_4833_, 3, v___x_4832_);
v___x_4834_ = lean_alloc_closure((void*)(l_instMonadEIO___aux__13___boxed), 6, 5);
lean_closure_set(v___x_4834_, 0, lean_box(0));
lean_closure_set(v___x_4834_, 1, lean_box(0));
lean_closure_set(v___x_4834_, 2, lean_box(0));
lean_closure_set(v___x_4834_, 3, v___x_4833_);
lean_closure_set(v___x_4834_, 4, v___f_4826_);
v___x_4835_ = ((lean_object*)(l_Lasm_JS_Value_call___redArg___closed__0));
v___x_4836_ = 0;
v___x_4837_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_4824_, v___x_4836_, v___x_4830_);
v___x_4838_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4838_, 0, v_args_4823_);
v___x_4839_ = lean_unsigned_to_nat(3u);
v___x_4840_ = lean_mk_empty_array_with_capacity(v___x_4839_);
v___x_4841_ = lean_array_push(v___x_4840_, v___x_4828_);
v___x_4842_ = lean_array_push(v___x_4841_, v_this_4825_);
v___x_4843_ = lean_array_push(v___x_4842_, v___x_4838_);
v___x_4844_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4844_, 0, v___x_4843_);
v___x_4845_ = l_Lasm_JS_Value_callAwait___redArg___boxed__const__1;
v___x_4846_ = lean_box_uint64(v___x_4837_);
v___x_4847_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___boxed), 8, 7);
lean_closure_set(v___x_4847_, 0, lean_box(0));
lean_closure_set(v___x_4847_, 1, v_inst_4824_);
lean_closure_set(v___x_4847_, 2, v___x_4835_);
lean_closure_set(v___x_4847_, 3, v___x_4845_);
lean_closure_set(v___x_4847_, 4, v___x_4846_);
lean_closure_set(v___x_4847_, 5, v___x_4844_);
lean_closure_set(v___x_4847_, 6, v___x_4827_);
v___x_4848_ = lean_apply_3(v_inst_4821_, lean_box(0), v___x_4834_, v___x_4847_);
return v___x_4848_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait(lean_object* v_m_4849_, lean_object* v_inst_4850_, lean_object* v_f_4851_, lean_object* v_args_4852_, lean_object* v_00_u03b1_4853_, lean_object* v_inst_4854_, lean_object* v_this_4855_){
_start:
{
lean_object* v___x_4856_; 
v___x_4856_ = l_Lasm_JS_Value_callAwait___redArg(v_inst_4850_, v_f_4851_, v_args_4852_, v_inst_4854_, v_this_4855_);
return v___x_4856_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___redArg(lean_object* v_o_4858_, lean_object* v_name_4859_, lean_object* v_args_4860_, lean_object* v_inst_4861_){
_start:
{
lean_object* v___x_4863_; lean_object* v___x_4864_; lean_object* v___x_4865_; uint8_t v___x_4866_; uint64_t v___x_4867_; uint64_t v___x_4868_; lean_object* v___x_4869_; 
v___x_4863_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
v___x_4864_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4864_, 0, v_o_4858_);
lean_ctor_set(v___x_4864_, 1, v___x_4863_);
lean_inc_ref(v_name_4859_);
v___x_4865_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4865_, 0, v_name_4859_);
v___x_4866_ = 0;
v___x_4867_ = 8ULL;
v___x_4868_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_4861_, v___x_4866_, v___x_4867_);
v___x_4869_ = l_Lasm_JS_Value_invokeRaw(v___x_4864_, v___x_4865_, v_args_4860_, v___x_4868_);
if (lean_obj_tag(v___x_4869_) == 0)
{
lean_object* v_a_4870_; lean_object* v___x_4871_; lean_object* v___x_4872_; lean_object* v___x_4873_; 
v_a_4870_ = lean_ctor_get(v___x_4869_, 0);
lean_inc(v_a_4870_);
lean_dec_ref_known(v___x_4869_, 1);
v___x_4871_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___redArg___closed__0));
v___x_4872_ = lean_string_append(v___x_4871_, v_name_4859_);
lean_dec_ref(v_name_4859_);
v___x_4873_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_4861_, v___x_4872_, v_a_4870_);
lean_dec(v_a_4870_);
lean_dec_ref(v___x_4872_);
return v___x_4873_;
}
else
{
lean_object* v_a_4874_; lean_object* v___x_4876_; uint8_t v_isShared_4877_; uint8_t v_isSharedCheck_4881_; 
lean_dec_ref(v_inst_4861_);
lean_dec_ref(v_name_4859_);
v_a_4874_ = lean_ctor_get(v___x_4869_, 0);
v_isSharedCheck_4881_ = !lean_is_exclusive(v___x_4869_);
if (v_isSharedCheck_4881_ == 0)
{
v___x_4876_ = v___x_4869_;
v_isShared_4877_ = v_isSharedCheck_4881_;
goto v_resetjp_4875_;
}
else
{
lean_inc(v_a_4874_);
lean_dec(v___x_4869_);
v___x_4876_ = lean_box(0);
v_isShared_4877_ = v_isSharedCheck_4881_;
goto v_resetjp_4875_;
}
v_resetjp_4875_:
{
lean_object* v___x_4879_; 
if (v_isShared_4877_ == 0)
{
v___x_4879_ = v___x_4876_;
goto v_reusejp_4878_;
}
else
{
lean_object* v_reuseFailAlloc_4880_; 
v_reuseFailAlloc_4880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4880_, 0, v_a_4874_);
v___x_4879_ = v_reuseFailAlloc_4880_;
goto v_reusejp_4878_;
}
v_reusejp_4878_:
{
return v___x_4879_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___redArg___boxed(lean_object* v_o_4882_, lean_object* v_name_4883_, lean_object* v_args_4884_, lean_object* v_inst_4885_, lean_object* v_a_4886_){
_start:
{
lean_object* v_res_4887_; 
v_res_4887_ = l_Lasm_JS_Value_callMethod___redArg(v_o_4882_, v_name_4883_, v_args_4884_, v_inst_4885_);
return v_res_4887_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod(lean_object* v_o_4888_, lean_object* v_name_4889_, lean_object* v_args_4890_, lean_object* v_00_u03b1_4891_, lean_object* v_inst_4892_){
_start:
{
lean_object* v___x_4894_; 
v___x_4894_ = l_Lasm_JS_Value_callMethod___redArg(v_o_4888_, v_name_4889_, v_args_4890_, v_inst_4892_);
return v___x_4894_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___boxed(lean_object* v_o_4895_, lean_object* v_name_4896_, lean_object* v_args_4897_, lean_object* v_00_u03b1_4898_, lean_object* v_inst_4899_, lean_object* v_a_4900_){
_start:
{
lean_object* v_res_4901_; 
v_res_4901_ = l_Lasm_JS_Value_callMethod(v_o_4895_, v_name_4896_, v_args_4897_, v_00_u03b1_4898_, v_inst_4899_);
return v_res_4901_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___redArg___lam__0(lean_object* v_name_4902_, lean_object* v_inst_4903_, lean_object* v_____do__lift_4904_){
_start:
{
lean_object* v___x_4906_; lean_object* v___x_4907_; lean_object* v___x_4908_; 
v___x_4906_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___redArg___closed__0));
v___x_4907_ = lean_string_append(v___x_4906_, v_name_4902_);
v___x_4908_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_4903_, v___x_4907_, v_____do__lift_4904_);
lean_dec_ref(v___x_4907_);
return v___x_4908_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___redArg___lam__0___boxed(lean_object* v_name_4909_, lean_object* v_inst_4910_, lean_object* v_____do__lift_4911_, lean_object* v___y_4912_){
_start:
{
lean_object* v_res_4913_; 
v_res_4913_ = l_Lasm_JS_Value_callMethodAwait___redArg___lam__0(v_name_4909_, v_inst_4910_, v_____do__lift_4911_);
lean_dec_ref(v_____do__lift_4911_);
lean_dec_ref(v_name_4909_);
return v_res_4913_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___redArg(lean_object* v_inst_4914_, lean_object* v_o_4915_, lean_object* v_name_4916_, lean_object* v_args_4917_, lean_object* v_inst_4918_){
_start:
{
lean_object* v___f_4919_; lean_object* v___x_4920_; lean_object* v___x_4921_; lean_object* v___x_4922_; uint8_t v___x_4923_; uint64_t v___x_4924_; uint64_t v___x_4925_; lean_object* v___x_4926_; lean_object* v___x_4927_; lean_object* v___x_4928_; lean_object* v___x_4929_; lean_object* v___x_4930_; uint8_t v___x_4931_; uint64_t v___x_4932_; lean_object* v___x_4933_; lean_object* v___x_4934_; lean_object* v___x_4935_; lean_object* v___x_4936_; lean_object* v___x_4937_; lean_object* v___x_4938_; lean_object* v___x_4939_; lean_object* v___x_4940_; lean_object* v___x_4941_; lean_object* v___x_4942_; lean_object* v___x_4943_; 
lean_inc_ref(v_inst_4918_);
lean_inc_ref_n(v_name_4916_, 2);
v___f_4919_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_callMethodAwait___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_4919_, 0, v_name_4916_);
lean_closure_set(v___f_4919_, 1, v_inst_4918_);
v___x_4920_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
v___x_4921_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4921_, 0, v_o_4915_);
lean_ctor_set(v___x_4921_, 1, v___x_4920_);
v___x_4922_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4922_, 0, v_name_4916_);
v___x_4923_ = 1;
v___x_4924_ = 8ULL;
v___x_4925_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_4918_, v___x_4923_, v___x_4924_);
v___x_4926_ = lean_box_uint64(v___x_4925_);
lean_inc_ref(v_args_4917_);
lean_inc_ref(v___x_4922_);
lean_inc_ref(v___x_4921_);
v___x_4927_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_invokeRaw___boxed), 5, 4);
lean_closure_set(v___x_4927_, 0, v___x_4921_);
lean_closure_set(v___x_4927_, 1, v___x_4922_);
lean_closure_set(v___x_4927_, 2, v_args_4917_);
lean_closure_set(v___x_4927_, 3, v___x_4926_);
v___x_4928_ = lean_alloc_closure((void*)(l_instMonadEIO___aux__13___boxed), 6, 5);
lean_closure_set(v___x_4928_, 0, lean_box(0));
lean_closure_set(v___x_4928_, 1, lean_box(0));
lean_closure_set(v___x_4928_, 2, lean_box(0));
lean_closure_set(v___x_4928_, 3, v___x_4927_);
lean_closure_set(v___x_4928_, 4, v___f_4919_);
v___x_4929_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___redArg___closed__0));
v___x_4930_ = lean_string_append(v___x_4929_, v_name_4916_);
lean_dec_ref(v_name_4916_);
v___x_4931_ = 0;
v___x_4932_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_4918_, v___x_4931_, v___x_4924_);
v___x_4933_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4933_, 0, v_args_4917_);
v___x_4934_ = lean_unsigned_to_nat(3u);
v___x_4935_ = lean_mk_empty_array_with_capacity(v___x_4934_);
v___x_4936_ = lean_array_push(v___x_4935_, v___x_4921_);
v___x_4937_ = lean_array_push(v___x_4936_, v___x_4922_);
v___x_4938_ = lean_array_push(v___x_4937_, v___x_4933_);
v___x_4939_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4939_, 0, v___x_4938_);
v___x_4940_ = l_Lasm_JS_Value_callAwait___redArg___boxed__const__1;
v___x_4941_ = lean_box_uint64(v___x_4932_);
v___x_4942_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___boxed), 8, 7);
lean_closure_set(v___x_4942_, 0, lean_box(0));
lean_closure_set(v___x_4942_, 1, v_inst_4918_);
lean_closure_set(v___x_4942_, 2, v___x_4930_);
lean_closure_set(v___x_4942_, 3, v___x_4940_);
lean_closure_set(v___x_4942_, 4, v___x_4941_);
lean_closure_set(v___x_4942_, 5, v___x_4939_);
lean_closure_set(v___x_4942_, 6, v___x_4920_);
v___x_4943_ = lean_apply_3(v_inst_4914_, lean_box(0), v___x_4928_, v___x_4942_);
return v___x_4943_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait(lean_object* v_m_4944_, lean_object* v_inst_4945_, lean_object* v_o_4946_, lean_object* v_name_4947_, lean_object* v_args_4948_, lean_object* v_00_u03b1_4949_, lean_object* v_inst_4950_){
_start:
{
lean_object* v___x_4951_; 
v___x_4951_ = l_Lasm_JS_Value_callMethodAwait___redArg(v_inst_4945_, v_o_4946_, v_name_4947_, v_args_4948_, v_inst_4950_);
return v___x_4951_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___redArg(lean_object* v_c_4953_, lean_object* v_args_4954_, lean_object* v_inst_4955_){
_start:
{
lean_object* v___x_4957_; lean_object* v___x_4958_; lean_object* v___x_4959_; uint8_t v___x_4960_; uint64_t v___x_4961_; uint64_t v___x_4962_; lean_object* v___x_4963_; 
v___x_4957_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
v___x_4958_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4958_, 0, v_c_4953_);
lean_ctor_set(v___x_4958_, 1, v___x_4957_);
v___x_4959_ = lean_box(0);
v___x_4960_ = 0;
v___x_4961_ = 4ULL;
v___x_4962_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_4955_, v___x_4960_, v___x_4961_);
v___x_4963_ = l_Lasm_JS_Value_invokeRaw(v___x_4958_, v___x_4959_, v_args_4954_, v___x_4962_);
if (lean_obj_tag(v___x_4963_) == 0)
{
lean_object* v_a_4964_; lean_object* v___x_4965_; lean_object* v___x_4966_; 
v_a_4964_ = lean_ctor_get(v___x_4963_, 0);
lean_inc(v_a_4964_);
lean_dec_ref_known(v___x_4963_, 1);
v___x_4965_ = ((lean_object*)(l_Lasm_JS_Value_new___redArg___closed__0));
v___x_4966_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_4955_, v___x_4965_, v_a_4964_);
lean_dec(v_a_4964_);
return v___x_4966_;
}
else
{
lean_object* v_a_4967_; lean_object* v___x_4969_; uint8_t v_isShared_4970_; uint8_t v_isSharedCheck_4974_; 
lean_dec_ref(v_inst_4955_);
v_a_4967_ = lean_ctor_get(v___x_4963_, 0);
v_isSharedCheck_4974_ = !lean_is_exclusive(v___x_4963_);
if (v_isSharedCheck_4974_ == 0)
{
v___x_4969_ = v___x_4963_;
v_isShared_4970_ = v_isSharedCheck_4974_;
goto v_resetjp_4968_;
}
else
{
lean_inc(v_a_4967_);
lean_dec(v___x_4963_);
v___x_4969_ = lean_box(0);
v_isShared_4970_ = v_isSharedCheck_4974_;
goto v_resetjp_4968_;
}
v_resetjp_4968_:
{
lean_object* v___x_4972_; 
if (v_isShared_4970_ == 0)
{
v___x_4972_ = v___x_4969_;
goto v_reusejp_4971_;
}
else
{
lean_object* v_reuseFailAlloc_4973_; 
v_reuseFailAlloc_4973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4973_, 0, v_a_4967_);
v___x_4972_ = v_reuseFailAlloc_4973_;
goto v_reusejp_4971_;
}
v_reusejp_4971_:
{
return v___x_4972_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___redArg___boxed(lean_object* v_c_4975_, lean_object* v_args_4976_, lean_object* v_inst_4977_, lean_object* v_a_4978_){
_start:
{
lean_object* v_res_4979_; 
v_res_4979_ = l_Lasm_JS_Value_new___redArg(v_c_4975_, v_args_4976_, v_inst_4977_);
return v_res_4979_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new(lean_object* v_c_4980_, lean_object* v_args_4981_, lean_object* v_00_u03b1_4982_, lean_object* v_inst_4983_){
_start:
{
lean_object* v___x_4985_; 
v___x_4985_ = l_Lasm_JS_Value_new___redArg(v_c_4980_, v_args_4981_, v_inst_4983_);
return v___x_4985_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___boxed(lean_object* v_c_4986_, lean_object* v_args_4987_, lean_object* v_00_u03b1_4988_, lean_object* v_inst_4989_, lean_object* v_a_4990_){
_start:
{
lean_object* v_res_4991_; 
v_res_4991_ = l_Lasm_JS_Value_new(v_c_4986_, v_args_4987_, v_00_u03b1_4988_, v_inst_4989_);
return v_res_4991_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___redArg___lam__0(lean_object* v_inst_4993_, lean_object* v_a_4994_){
_start:
{
lean_object* v_a_4997_; 
if (lean_obj_tag(v_a_4994_) == 0)
{
lean_object* v_a_4999_; lean_object* v___x_5000_; 
lean_dec_ref(v_inst_4993_);
v_a_4999_ = lean_ctor_get(v_a_4994_, 0);
lean_inc(v_a_4999_);
lean_dec_ref_known(v_a_4994_, 1);
v___x_5000_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5000_, 0, v_a_4999_);
v_a_4997_ = v___x_5000_;
goto v___jp_4996_;
}
else
{
lean_object* v_a_5001_; lean_object* v___x_5003_; uint8_t v_isShared_5004_; uint8_t v_isSharedCheck_5015_; 
v_a_5001_ = lean_ctor_get(v_a_4994_, 0);
v_isSharedCheck_5015_ = !lean_is_exclusive(v_a_4994_);
if (v_isSharedCheck_5015_ == 0)
{
v___x_5003_ = v_a_4994_;
v_isShared_5004_ = v_isSharedCheck_5015_;
goto v_resetjp_5002_;
}
else
{
lean_inc(v_a_5001_);
lean_dec(v_a_4994_);
v___x_5003_ = lean_box(0);
v_isShared_5004_ = v_isSharedCheck_5015_;
goto v_resetjp_5002_;
}
v_resetjp_5002_:
{
lean_object* v___x_5005_; 
v___x_5005_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_5001_);
lean_dec(v_a_5001_);
if (lean_obj_tag(v___x_5005_) == 0)
{
lean_object* v_a_5006_; lean_object* v___x_5007_; lean_object* v___x_5008_; 
v_a_5006_ = lean_ctor_get(v___x_5005_, 0);
lean_inc(v_a_5006_);
lean_dec_ref_known(v___x_5005_, 1);
v___x_5007_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___redArg___lam__0___closed__0));
v___x_5008_ = l_Lasm_JS_decodeAs___redArg(v_inst_4993_, v___x_5007_, v_a_5006_);
if (lean_obj_tag(v___x_5008_) == 0)
{
lean_object* v_a_5009_; lean_object* v___x_5011_; 
v_a_5009_ = lean_ctor_get(v___x_5008_, 0);
lean_inc(v_a_5009_);
lean_dec_ref_known(v___x_5008_, 1);
if (v_isShared_5004_ == 0)
{
lean_ctor_set(v___x_5003_, 0, v_a_5009_);
v___x_5011_ = v___x_5003_;
goto v_reusejp_5010_;
}
else
{
lean_object* v_reuseFailAlloc_5012_; 
v_reuseFailAlloc_5012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5012_, 0, v_a_5009_);
v___x_5011_ = v_reuseFailAlloc_5012_;
goto v_reusejp_5010_;
}
v_reusejp_5010_:
{
return v___x_5011_;
}
}
else
{
lean_object* v_a_5013_; 
lean_del_object(v___x_5003_);
v_a_5013_ = lean_ctor_get(v___x_5008_, 0);
lean_inc(v_a_5013_);
lean_dec_ref_known(v___x_5008_, 1);
v_a_4997_ = v_a_5013_;
goto v___jp_4996_;
}
}
else
{
lean_object* v_a_5014_; 
lean_del_object(v___x_5003_);
lean_dec_ref(v_inst_4993_);
v_a_5014_ = lean_ctor_get(v___x_5005_, 0);
lean_inc(v_a_5014_);
lean_dec_ref_known(v___x_5005_, 1);
v_a_4997_ = v_a_5014_;
goto v___jp_4996_;
}
}
}
v___jp_4996_:
{
lean_object* v___x_4998_; 
v___x_4998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4998_, 0, v_a_4997_);
return v___x_4998_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___redArg___lam__0___boxed(lean_object* v_inst_5016_, lean_object* v_a_5017_, lean_object* v___y_5018_){
_start:
{
lean_object* v_res_5019_; 
v_res_5019_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___redArg___lam__0(v_inst_5016_, v_a_5017_);
return v_res_5019_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___redArg(lean_object* v_v_5020_, lean_object* v_inst_5021_, lean_object* v_keep_5022_){
_start:
{
lean_object* v___f_5024_; lean_object* v___x_5025_; 
v___f_5024_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_5024_, 0, v_inst_5021_);
v___x_5025_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_5025_) == 0)
{
lean_object* v___x_5026_; lean_object* v___x_5027_; lean_object* v___x_5028_; lean_object* v___x_5029_; 
lean_dec_ref_known(v___x_5025_, 1);
v___x_5026_ = lean_io_promise_new();
v___x_5027_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
v___x_5028_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5028_, 0, v_v_5020_);
lean_ctor_set(v___x_5028_, 1, v___x_5027_);
v___x_5029_ = l_Lasm_JS_Wire_encodeIO(v___x_5028_);
lean_dec_ref_known(v___x_5028_, 2);
if (lean_obj_tag(v___x_5029_) == 0)
{
lean_object* v_a_5030_; lean_object* v___x_5031_; 
v_a_5030_ = lean_ctor_get(v___x_5029_, 0);
lean_inc(v_a_5030_);
lean_dec_ref_known(v___x_5029_, 1);
v___x_5031_ = lasm_js_await_into(v___x_5026_, v_a_5030_, v_keep_5022_);
lean_dec(v_a_5030_);
if (lean_obj_tag(v___x_5031_) == 0)
{
lean_object* v___x_5033_; uint8_t v_isShared_5034_; uint8_t v_isSharedCheck_5042_; 
v_isSharedCheck_5042_ = !lean_is_exclusive(v___x_5031_);
if (v_isSharedCheck_5042_ == 0)
{
lean_object* v_unused_5043_; 
v_unused_5043_ = lean_ctor_get(v___x_5031_, 0);
lean_dec(v_unused_5043_);
v___x_5033_ = v___x_5031_;
v_isShared_5034_ = v_isSharedCheck_5042_;
goto v_resetjp_5032_;
}
else
{
lean_dec(v___x_5031_);
v___x_5033_ = lean_box(0);
v_isShared_5034_ = v_isSharedCheck_5042_;
goto v_resetjp_5032_;
}
v_resetjp_5032_:
{
lean_object* v___x_5035_; lean_object* v___x_5036_; uint8_t v___x_5037_; lean_object* v___x_5038_; lean_object* v___x_5040_; 
v___x_5035_ = l_IO_Promise_result_x21___redArg(v___x_5026_);
lean_dec(v___x_5026_);
v___x_5036_ = lean_unsigned_to_nat(0u);
v___x_5037_ = 0;
v___x_5038_ = lean_io_map_task(v___f_5024_, v___x_5035_, v___x_5036_, v___x_5037_);
if (v_isShared_5034_ == 0)
{
lean_ctor_set(v___x_5033_, 0, v___x_5038_);
v___x_5040_ = v___x_5033_;
goto v_reusejp_5039_;
}
else
{
lean_object* v_reuseFailAlloc_5041_; 
v_reuseFailAlloc_5041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5041_, 0, v___x_5038_);
v___x_5040_ = v_reuseFailAlloc_5041_;
goto v_reusejp_5039_;
}
v_reusejp_5039_:
{
return v___x_5040_;
}
}
}
else
{
lean_object* v_a_5044_; lean_object* v___x_5046_; uint8_t v_isShared_5047_; uint8_t v_isSharedCheck_5051_; 
lean_dec(v___x_5026_);
lean_dec_ref(v___f_5024_);
v_a_5044_ = lean_ctor_get(v___x_5031_, 0);
v_isSharedCheck_5051_ = !lean_is_exclusive(v___x_5031_);
if (v_isSharedCheck_5051_ == 0)
{
v___x_5046_ = v___x_5031_;
v_isShared_5047_ = v_isSharedCheck_5051_;
goto v_resetjp_5045_;
}
else
{
lean_inc(v_a_5044_);
lean_dec(v___x_5031_);
v___x_5046_ = lean_box(0);
v_isShared_5047_ = v_isSharedCheck_5051_;
goto v_resetjp_5045_;
}
v_resetjp_5045_:
{
lean_object* v___x_5049_; 
if (v_isShared_5047_ == 0)
{
v___x_5049_ = v___x_5046_;
goto v_reusejp_5048_;
}
else
{
lean_object* v_reuseFailAlloc_5050_; 
v_reuseFailAlloc_5050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5050_, 0, v_a_5044_);
v___x_5049_ = v_reuseFailAlloc_5050_;
goto v_reusejp_5048_;
}
v_reusejp_5048_:
{
return v___x_5049_;
}
}
}
}
else
{
lean_object* v_a_5052_; lean_object* v___x_5054_; uint8_t v_isShared_5055_; uint8_t v_isSharedCheck_5059_; 
lean_dec(v___x_5026_);
lean_dec_ref(v___f_5024_);
v_a_5052_ = lean_ctor_get(v___x_5029_, 0);
v_isSharedCheck_5059_ = !lean_is_exclusive(v___x_5029_);
if (v_isSharedCheck_5059_ == 0)
{
v___x_5054_ = v___x_5029_;
v_isShared_5055_ = v_isSharedCheck_5059_;
goto v_resetjp_5053_;
}
else
{
lean_inc(v_a_5052_);
lean_dec(v___x_5029_);
v___x_5054_ = lean_box(0);
v_isShared_5055_ = v_isSharedCheck_5059_;
goto v_resetjp_5053_;
}
v_resetjp_5053_:
{
lean_object* v___x_5057_; 
if (v_isShared_5055_ == 0)
{
v___x_5057_ = v___x_5054_;
goto v_reusejp_5056_;
}
else
{
lean_object* v_reuseFailAlloc_5058_; 
v_reuseFailAlloc_5058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5058_, 0, v_a_5052_);
v___x_5057_ = v_reuseFailAlloc_5058_;
goto v_reusejp_5056_;
}
v_reusejp_5056_:
{
return v___x_5057_;
}
}
}
}
else
{
lean_object* v_a_5060_; lean_object* v___x_5062_; uint8_t v_isShared_5063_; uint8_t v_isSharedCheck_5067_; 
lean_dec_ref(v___f_5024_);
lean_dec(v_v_5020_);
v_a_5060_ = lean_ctor_get(v___x_5025_, 0);
v_isSharedCheck_5067_ = !lean_is_exclusive(v___x_5025_);
if (v_isSharedCheck_5067_ == 0)
{
v___x_5062_ = v___x_5025_;
v_isShared_5063_ = v_isSharedCheck_5067_;
goto v_resetjp_5061_;
}
else
{
lean_inc(v_a_5060_);
lean_dec(v___x_5025_);
v___x_5062_ = lean_box(0);
v_isShared_5063_ = v_isSharedCheck_5067_;
goto v_resetjp_5061_;
}
v_resetjp_5061_:
{
lean_object* v___x_5065_; 
if (v_isShared_5063_ == 0)
{
v___x_5065_ = v___x_5062_;
goto v_reusejp_5064_;
}
else
{
lean_object* v_reuseFailAlloc_5066_; 
v_reuseFailAlloc_5066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5066_, 0, v_a_5060_);
v___x_5065_ = v_reuseFailAlloc_5066_;
goto v_reusejp_5064_;
}
v_reusejp_5064_:
{
return v___x_5065_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___redArg___boxed(lean_object* v_v_5068_, lean_object* v_inst_5069_, lean_object* v_keep_5070_, lean_object* v_a_5071_){
_start:
{
lean_object* v_res_5072_; 
v_res_5072_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___redArg(v_v_5068_, v_inst_5069_, v_keep_5070_);
lean_dec(v_keep_5070_);
return v_res_5072_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping(lean_object* v_v_5073_, lean_object* v_00_u03b1_5074_, lean_object* v_inst_5075_, lean_object* v_keep_5076_){
_start:
{
lean_object* v___x_5078_; 
v___x_5078_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___redArg(v_v_5073_, v_inst_5075_, v_keep_5076_);
return v___x_5078_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___boxed(lean_object* v_v_5079_, lean_object* v_00_u03b1_5080_, lean_object* v_inst_5081_, lean_object* v_keep_5082_, lean_object* v_a_5083_){
_start:
{
lean_object* v_res_5084_; 
v_res_5084_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping(v_v_5079_, v_00_u03b1_5080_, v_inst_5081_, v_keep_5082_);
lean_dec(v_keep_5082_);
return v_res_5084_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_toTask___redArg(lean_object* v_v_5085_, lean_object* v_inst_5086_){
_start:
{
lean_object* v___x_5088_; lean_object* v___x_5089_; lean_object* v___x_5090_; 
v___x_5088_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
lean_inc(v_v_5085_);
v___x_5089_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5089_, 0, v_v_5085_);
lean_ctor_set(v___x_5089_, 1, v___x_5088_);
v___x_5090_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___redArg(v_v_5085_, v_inst_5086_, v___x_5089_);
lean_dec_ref_known(v___x_5089_, 2);
return v___x_5090_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_toTask___redArg___boxed(lean_object* v_v_5091_, lean_object* v_inst_5092_, lean_object* v_a_5093_){
_start:
{
lean_object* v_res_5094_; 
v_res_5094_ = l_Lasm_JS_Value_toTask___redArg(v_v_5091_, v_inst_5092_);
return v_res_5094_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_toTask(lean_object* v_v_5095_, lean_object* v_00_u03b1_5096_, lean_object* v_inst_5097_){
_start:
{
lean_object* v___x_5099_; 
v___x_5099_ = l_Lasm_JS_Value_toTask___redArg(v_v_5095_, v_inst_5097_);
return v___x_5099_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_toTask___boxed(lean_object* v_v_5100_, lean_object* v_00_u03b1_5101_, lean_object* v_inst_5102_, lean_object* v_a_5103_){
_start:
{
lean_object* v_res_5104_; 
v_res_5104_ = l_Lasm_JS_Value_toTask(v_v_5100_, v_00_u03b1_5101_, v_inst_5102_);
return v_res_5104_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__0(){
_start:
{
lean_object* v_val_5107_; lean_object* v___x_5109_; 
v___x_5109_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_5109_) == 0)
{
lean_object* v_a_5110_; lean_object* v___x_5112_; uint8_t v_isShared_5113_; uint8_t v_isSharedCheck_5117_; 
v_a_5110_ = lean_ctor_get(v___x_5109_, 0);
v_isSharedCheck_5117_ = !lean_is_exclusive(v___x_5109_);
if (v_isSharedCheck_5117_ == 0)
{
v___x_5112_ = v___x_5109_;
v_isShared_5113_ = v_isSharedCheck_5117_;
goto v_resetjp_5111_;
}
else
{
lean_inc(v_a_5110_);
lean_dec(v___x_5109_);
v___x_5112_ = lean_box(0);
v_isShared_5113_ = v_isSharedCheck_5117_;
goto v_resetjp_5111_;
}
v_resetjp_5111_:
{
lean_object* v___x_5115_; 
if (v_isShared_5113_ == 0)
{
lean_ctor_set_tag(v___x_5112_, 1);
v___x_5115_ = v___x_5112_;
goto v_reusejp_5114_;
}
else
{
lean_object* v_reuseFailAlloc_5116_; 
v_reuseFailAlloc_5116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5116_, 0, v_a_5110_);
v___x_5115_ = v_reuseFailAlloc_5116_;
goto v_reusejp_5114_;
}
v_reusejp_5114_:
{
v_val_5107_ = v___x_5115_;
goto v___jp_5106_;
}
}
}
else
{
lean_object* v_a_5118_; lean_object* v___x_5120_; uint8_t v_isShared_5121_; uint8_t v_isSharedCheck_5125_; 
v_a_5118_ = lean_ctor_get(v___x_5109_, 0);
v_isSharedCheck_5125_ = !lean_is_exclusive(v___x_5109_);
if (v_isSharedCheck_5125_ == 0)
{
v___x_5120_ = v___x_5109_;
v_isShared_5121_ = v_isSharedCheck_5125_;
goto v_resetjp_5119_;
}
else
{
lean_inc(v_a_5118_);
lean_dec(v___x_5109_);
v___x_5120_ = lean_box(0);
v_isShared_5121_ = v_isSharedCheck_5125_;
goto v_resetjp_5119_;
}
v_resetjp_5119_:
{
lean_object* v___x_5123_; 
if (v_isShared_5121_ == 0)
{
lean_ctor_set_tag(v___x_5120_, 0);
v___x_5123_ = v___x_5120_;
goto v_reusejp_5122_;
}
else
{
lean_object* v_reuseFailAlloc_5124_; 
v_reuseFailAlloc_5124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5124_, 0, v_a_5118_);
v___x_5123_ = v_reuseFailAlloc_5124_;
goto v_reusejp_5122_;
}
v_reusejp_5122_:
{
v_val_5107_ = v___x_5123_;
goto v___jp_5106_;
}
}
}
v___jp_5106_:
{
lean_object* v___x_5108_; 
v___x_5108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5108_, 0, v_val_5107_);
return v___x_5108_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__0___boxed(lean_object* v___y_5126_){
_start:
{
lean_object* v_res_5127_; 
v_res_5127_ = l_Lasm_JS_Value_await___redArg___lam__0();
return v_res_5127_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__1(lean_object* v_inst_5128_, lean_object* v_x_5129_){
_start:
{
lean_object* v_val_5132_; 
if (lean_obj_tag(v_x_5129_) == 0)
{
lean_object* v_a_5134_; lean_object* v___x_5136_; uint8_t v_isShared_5137_; uint8_t v_isSharedCheck_5142_; 
lean_dec_ref(v_inst_5128_);
v_a_5134_ = lean_ctor_get(v_x_5129_, 0);
v_isSharedCheck_5142_ = !lean_is_exclusive(v_x_5129_);
if (v_isSharedCheck_5142_ == 0)
{
v___x_5136_ = v_x_5129_;
v_isShared_5137_ = v_isSharedCheck_5142_;
goto v_resetjp_5135_;
}
else
{
lean_inc(v_a_5134_);
lean_dec(v_x_5129_);
v___x_5136_ = lean_box(0);
v_isShared_5137_ = v_isSharedCheck_5142_;
goto v_resetjp_5135_;
}
v_resetjp_5135_:
{
lean_object* v___x_5139_; 
if (v_isShared_5137_ == 0)
{
v___x_5139_ = v___x_5136_;
goto v_reusejp_5138_;
}
else
{
lean_object* v_reuseFailAlloc_5141_; 
v_reuseFailAlloc_5141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5141_, 0, v_a_5134_);
v___x_5139_ = v_reuseFailAlloc_5141_;
goto v_reusejp_5138_;
}
v_reusejp_5138_:
{
lean_object* v___x_5140_; 
v___x_5140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5140_, 0, v___x_5139_);
return v___x_5140_;
}
}
}
else
{
lean_object* v_a_5143_; lean_object* v___x_5145_; uint8_t v_isShared_5146_; uint8_t v_isSharedCheck_5157_; 
v_a_5143_ = lean_ctor_get(v_x_5129_, 0);
v_isSharedCheck_5157_ = !lean_is_exclusive(v_x_5129_);
if (v_isSharedCheck_5157_ == 0)
{
v___x_5145_ = v_x_5129_;
v_isShared_5146_ = v_isSharedCheck_5157_;
goto v_resetjp_5144_;
}
else
{
lean_inc(v_a_5143_);
lean_dec(v_x_5129_);
v___x_5145_ = lean_box(0);
v_isShared_5146_ = v_isSharedCheck_5157_;
goto v_resetjp_5144_;
}
v_resetjp_5144_:
{
lean_object* v___x_5147_; lean_object* v___x_5148_; 
v___x_5147_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___redArg___lam__0___closed__0));
v___x_5148_ = l_Lasm_JS_decodeAs___redArg(v_inst_5128_, v___x_5147_, v_a_5143_);
if (lean_obj_tag(v___x_5148_) == 0)
{
lean_object* v_a_5149_; lean_object* v___x_5151_; 
v_a_5149_ = lean_ctor_get(v___x_5148_, 0);
lean_inc(v_a_5149_);
lean_dec_ref_known(v___x_5148_, 1);
if (v_isShared_5146_ == 0)
{
lean_ctor_set(v___x_5145_, 0, v_a_5149_);
v___x_5151_ = v___x_5145_;
goto v_reusejp_5150_;
}
else
{
lean_object* v_reuseFailAlloc_5152_; 
v_reuseFailAlloc_5152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5152_, 0, v_a_5149_);
v___x_5151_ = v_reuseFailAlloc_5152_;
goto v_reusejp_5150_;
}
v_reusejp_5150_:
{
v_val_5132_ = v___x_5151_;
goto v___jp_5131_;
}
}
else
{
lean_object* v_a_5153_; lean_object* v___x_5155_; 
v_a_5153_ = lean_ctor_get(v___x_5148_, 0);
lean_inc(v_a_5153_);
lean_dec_ref_known(v___x_5148_, 1);
if (v_isShared_5146_ == 0)
{
lean_ctor_set_tag(v___x_5145_, 0);
lean_ctor_set(v___x_5145_, 0, v_a_5153_);
v___x_5155_ = v___x_5145_;
goto v_reusejp_5154_;
}
else
{
lean_object* v_reuseFailAlloc_5156_; 
v_reuseFailAlloc_5156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5156_, 0, v_a_5153_);
v___x_5155_ = v_reuseFailAlloc_5156_;
goto v_reusejp_5154_;
}
v_reusejp_5154_:
{
v_val_5132_ = v___x_5155_;
goto v___jp_5131_;
}
}
}
}
v___jp_5131_:
{
lean_object* v___x_5133_; 
v___x_5133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5133_, 0, v_val_5132_);
return v___x_5133_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__1___boxed(lean_object* v_inst_5158_, lean_object* v_x_5159_, lean_object* v___y_5160_){
_start:
{
lean_object* v_res_5161_; 
v_res_5161_ = l_Lasm_JS_Value_await___redArg___lam__1(v_inst_5158_, v_x_5159_);
return v_res_5161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__2(lean_object* v___f_5162_, lean_object* v_x_5163_){
_start:
{
if (lean_obj_tag(v_x_5163_) == 0)
{
lean_object* v_a_5165_; lean_object* v___x_5167_; uint8_t v_isShared_5168_; uint8_t v_isSharedCheck_5173_; 
lean_dec_ref(v___f_5162_);
v_a_5165_ = lean_ctor_get(v_x_5163_, 0);
v_isSharedCheck_5173_ = !lean_is_exclusive(v_x_5163_);
if (v_isSharedCheck_5173_ == 0)
{
v___x_5167_ = v_x_5163_;
v_isShared_5168_ = v_isSharedCheck_5173_;
goto v_resetjp_5166_;
}
else
{
lean_inc(v_a_5165_);
lean_dec(v_x_5163_);
v___x_5167_ = lean_box(0);
v_isShared_5168_ = v_isSharedCheck_5173_;
goto v_resetjp_5166_;
}
v_resetjp_5166_:
{
lean_object* v___x_5170_; 
if (v_isShared_5168_ == 0)
{
v___x_5170_ = v___x_5167_;
goto v_reusejp_5169_;
}
else
{
lean_object* v_reuseFailAlloc_5172_; 
v_reuseFailAlloc_5172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5172_, 0, v_a_5165_);
v___x_5170_ = v_reuseFailAlloc_5172_;
goto v_reusejp_5169_;
}
v_reusejp_5169_:
{
lean_object* v___x_5171_; 
v___x_5171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5171_, 0, v___x_5170_);
return v___x_5171_;
}
}
}
else
{
lean_object* v_a_5174_; lean_object* v___x_5176_; uint8_t v_isShared_5177_; uint8_t v_isSharedCheck_5193_; 
v_a_5174_ = lean_ctor_get(v_x_5163_, 0);
v_isSharedCheck_5193_ = !lean_is_exclusive(v_x_5163_);
if (v_isSharedCheck_5193_ == 0)
{
v___x_5176_ = v_x_5163_;
v_isShared_5177_ = v_isSharedCheck_5193_;
goto v_resetjp_5175_;
}
else
{
lean_inc(v_a_5174_);
lean_dec(v_x_5163_);
v___x_5176_ = lean_box(0);
v_isShared_5177_ = v_isSharedCheck_5193_;
goto v_resetjp_5175_;
}
v_resetjp_5175_:
{
lean_object* v___x_5178_; uint8_t v___x_5179_; lean_object* v_val_5181_; lean_object* v___x_5184_; 
v___x_5178_ = lean_unsigned_to_nat(0u);
v___x_5179_ = 0;
v___x_5184_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_5174_);
lean_dec(v_a_5174_);
if (lean_obj_tag(v___x_5184_) == 0)
{
lean_object* v_a_5185_; lean_object* v___x_5187_; 
v_a_5185_ = lean_ctor_get(v___x_5184_, 0);
lean_inc(v_a_5185_);
lean_dec_ref_known(v___x_5184_, 1);
if (v_isShared_5177_ == 0)
{
lean_ctor_set(v___x_5176_, 0, v_a_5185_);
v___x_5187_ = v___x_5176_;
goto v_reusejp_5186_;
}
else
{
lean_object* v_reuseFailAlloc_5188_; 
v_reuseFailAlloc_5188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5188_, 0, v_a_5185_);
v___x_5187_ = v_reuseFailAlloc_5188_;
goto v_reusejp_5186_;
}
v_reusejp_5186_:
{
v_val_5181_ = v___x_5187_;
goto v___jp_5180_;
}
}
else
{
lean_object* v_a_5189_; lean_object* v___x_5191_; 
v_a_5189_ = lean_ctor_get(v___x_5184_, 0);
lean_inc(v_a_5189_);
lean_dec_ref_known(v___x_5184_, 1);
if (v_isShared_5177_ == 0)
{
lean_ctor_set_tag(v___x_5176_, 0);
lean_ctor_set(v___x_5176_, 0, v_a_5189_);
v___x_5191_ = v___x_5176_;
goto v_reusejp_5190_;
}
else
{
lean_object* v_reuseFailAlloc_5192_; 
v_reuseFailAlloc_5192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5192_, 0, v_a_5189_);
v___x_5191_ = v_reuseFailAlloc_5192_;
goto v_reusejp_5190_;
}
v_reusejp_5190_:
{
v_val_5181_ = v___x_5191_;
goto v___jp_5180_;
}
}
v___jp_5180_:
{
lean_object* v___x_5182_; lean_object* v___x_5183_; 
v___x_5182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5182_, 0, v_val_5181_);
v___x_5183_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5178_, v___x_5179_, v___x_5182_, v___f_5162_);
return v___x_5183_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__2___boxed(lean_object* v___f_5194_, lean_object* v_x_5195_, lean_object* v___y_5196_){
_start:
{
lean_object* v_res_5197_; 
v_res_5197_ = l_Lasm_JS_Value_await___redArg___lam__2(v___f_5194_, v_x_5195_);
return v_res_5197_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__3(lean_object* v_a_5198_, lean_object* v___f_5199_, lean_object* v_x_5200_){
_start:
{
if (lean_obj_tag(v_x_5200_) == 0)
{
lean_object* v_a_5202_; lean_object* v___x_5204_; uint8_t v_isShared_5205_; uint8_t v_isSharedCheck_5210_; 
lean_dec_ref(v___f_5199_);
v_a_5202_ = lean_ctor_get(v_x_5200_, 0);
v_isSharedCheck_5210_ = !lean_is_exclusive(v_x_5200_);
if (v_isSharedCheck_5210_ == 0)
{
v___x_5204_ = v_x_5200_;
v_isShared_5205_ = v_isSharedCheck_5210_;
goto v_resetjp_5203_;
}
else
{
lean_inc(v_a_5202_);
lean_dec(v_x_5200_);
v___x_5204_ = lean_box(0);
v_isShared_5205_ = v_isSharedCheck_5210_;
goto v_resetjp_5203_;
}
v_resetjp_5203_:
{
lean_object* v___x_5207_; 
if (v_isShared_5205_ == 0)
{
v___x_5207_ = v___x_5204_;
goto v_reusejp_5206_;
}
else
{
lean_object* v_reuseFailAlloc_5209_; 
v_reuseFailAlloc_5209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5209_, 0, v_a_5202_);
v___x_5207_ = v_reuseFailAlloc_5209_;
goto v_reusejp_5206_;
}
v_reusejp_5206_:
{
lean_object* v___x_5208_; 
v___x_5208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5208_, 0, v___x_5207_);
return v___x_5208_;
}
}
}
else
{
lean_object* v___x_5211_; uint8_t v___x_5212_; lean_object* v___x_5213_; lean_object* v___x_5214_; 
lean_dec_ref_known(v_x_5200_, 1);
v___x_5211_ = lean_unsigned_to_nat(0u);
v___x_5212_ = 0;
v___x_5213_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_5198_);
v___x_5214_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5211_, v___x_5212_, v___x_5213_, v___f_5199_);
return v___x_5214_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__3___boxed(lean_object* v_a_5215_, lean_object* v___f_5216_, lean_object* v_x_5217_, lean_object* v___y_5218_){
_start:
{
lean_object* v_res_5219_; 
v_res_5219_ = l_Lasm_JS_Value_await___redArg___lam__3(v_a_5215_, v___f_5216_, v_x_5217_);
lean_dec(v_a_5215_);
return v_res_5219_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__4(lean_object* v___f_5220_, lean_object* v_a_5221_, lean_object* v___x_5222_, lean_object* v_x_5223_){
_start:
{
if (lean_obj_tag(v_x_5223_) == 0)
{
lean_object* v_a_5225_; lean_object* v___x_5227_; uint8_t v_isShared_5228_; uint8_t v_isSharedCheck_5233_; 
lean_dec_ref(v___f_5220_);
v_a_5225_ = lean_ctor_get(v_x_5223_, 0);
v_isSharedCheck_5233_ = !lean_is_exclusive(v_x_5223_);
if (v_isSharedCheck_5233_ == 0)
{
v___x_5227_ = v_x_5223_;
v_isShared_5228_ = v_isSharedCheck_5233_;
goto v_resetjp_5226_;
}
else
{
lean_inc(v_a_5225_);
lean_dec(v_x_5223_);
v___x_5227_ = lean_box(0);
v_isShared_5228_ = v_isSharedCheck_5233_;
goto v_resetjp_5226_;
}
v_resetjp_5226_:
{
lean_object* v___x_5230_; 
if (v_isShared_5228_ == 0)
{
v___x_5230_ = v___x_5227_;
goto v_reusejp_5229_;
}
else
{
lean_object* v_reuseFailAlloc_5232_; 
v_reuseFailAlloc_5232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5232_, 0, v_a_5225_);
v___x_5230_ = v_reuseFailAlloc_5232_;
goto v_reusejp_5229_;
}
v_reusejp_5229_:
{
lean_object* v___x_5231_; 
v___x_5231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5231_, 0, v___x_5230_);
return v___x_5231_;
}
}
}
else
{
lean_object* v_a_5234_; lean_object* v___x_5236_; uint8_t v_isShared_5237_; uint8_t v_isSharedCheck_5253_; 
v_a_5234_ = lean_ctor_get(v_x_5223_, 0);
v_isSharedCheck_5253_ = !lean_is_exclusive(v_x_5223_);
if (v_isSharedCheck_5253_ == 0)
{
v___x_5236_ = v_x_5223_;
v_isShared_5237_ = v_isSharedCheck_5253_;
goto v_resetjp_5235_;
}
else
{
lean_inc(v_a_5234_);
lean_dec(v_x_5223_);
v___x_5236_ = lean_box(0);
v_isShared_5237_ = v_isSharedCheck_5253_;
goto v_resetjp_5235_;
}
v_resetjp_5235_:
{
lean_object* v___x_5238_; uint8_t v___x_5239_; lean_object* v_val_5241_; lean_object* v___x_5244_; 
v___x_5238_ = lean_unsigned_to_nat(0u);
v___x_5239_ = 0;
v___x_5244_ = lasm_js_await_into(v_a_5221_, v_a_5234_, v___x_5222_);
lean_dec(v_a_5234_);
if (lean_obj_tag(v___x_5244_) == 0)
{
lean_object* v_a_5245_; lean_object* v___x_5247_; 
v_a_5245_ = lean_ctor_get(v___x_5244_, 0);
lean_inc(v_a_5245_);
lean_dec_ref_known(v___x_5244_, 1);
if (v_isShared_5237_ == 0)
{
lean_ctor_set(v___x_5236_, 0, v_a_5245_);
v___x_5247_ = v___x_5236_;
goto v_reusejp_5246_;
}
else
{
lean_object* v_reuseFailAlloc_5248_; 
v_reuseFailAlloc_5248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5248_, 0, v_a_5245_);
v___x_5247_ = v_reuseFailAlloc_5248_;
goto v_reusejp_5246_;
}
v_reusejp_5246_:
{
v_val_5241_ = v___x_5247_;
goto v___jp_5240_;
}
}
else
{
lean_object* v_a_5249_; lean_object* v___x_5251_; 
v_a_5249_ = lean_ctor_get(v___x_5244_, 0);
lean_inc(v_a_5249_);
lean_dec_ref_known(v___x_5244_, 1);
if (v_isShared_5237_ == 0)
{
lean_ctor_set_tag(v___x_5236_, 0);
lean_ctor_set(v___x_5236_, 0, v_a_5249_);
v___x_5251_ = v___x_5236_;
goto v_reusejp_5250_;
}
else
{
lean_object* v_reuseFailAlloc_5252_; 
v_reuseFailAlloc_5252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5252_, 0, v_a_5249_);
v___x_5251_ = v_reuseFailAlloc_5252_;
goto v_reusejp_5250_;
}
v_reusejp_5250_:
{
v_val_5241_ = v___x_5251_;
goto v___jp_5240_;
}
}
v___jp_5240_:
{
lean_object* v___x_5242_; lean_object* v___x_5243_; 
v___x_5242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5242_, 0, v_val_5241_);
v___x_5243_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5238_, v___x_5239_, v___x_5242_, v___f_5220_);
return v___x_5243_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__4___boxed(lean_object* v___f_5254_, lean_object* v_a_5255_, lean_object* v___x_5256_, lean_object* v_x_5257_, lean_object* v___y_5258_){
_start:
{
lean_object* v_res_5259_; 
v_res_5259_ = l_Lasm_JS_Value_await___redArg___lam__4(v___f_5254_, v_a_5255_, v___x_5256_, v_x_5257_);
lean_dec(v___x_5256_);
lean_dec(v_a_5255_);
return v_res_5259_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__5(lean_object* v___f_5260_, lean_object* v_v_5261_, lean_object* v_x_5262_){
_start:
{
if (lean_obj_tag(v_x_5262_) == 0)
{
lean_object* v_a_5264_; lean_object* v___x_5266_; uint8_t v_isShared_5267_; uint8_t v_isSharedCheck_5272_; 
lean_dec(v_v_5261_);
lean_dec_ref(v___f_5260_);
v_a_5264_ = lean_ctor_get(v_x_5262_, 0);
v_isSharedCheck_5272_ = !lean_is_exclusive(v_x_5262_);
if (v_isSharedCheck_5272_ == 0)
{
v___x_5266_ = v_x_5262_;
v_isShared_5267_ = v_isSharedCheck_5272_;
goto v_resetjp_5265_;
}
else
{
lean_inc(v_a_5264_);
lean_dec(v_x_5262_);
v___x_5266_ = lean_box(0);
v_isShared_5267_ = v_isSharedCheck_5272_;
goto v_resetjp_5265_;
}
v_resetjp_5265_:
{
lean_object* v___x_5269_; 
if (v_isShared_5267_ == 0)
{
v___x_5269_ = v___x_5266_;
goto v_reusejp_5268_;
}
else
{
lean_object* v_reuseFailAlloc_5271_; 
v_reuseFailAlloc_5271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5271_, 0, v_a_5264_);
v___x_5269_ = v_reuseFailAlloc_5271_;
goto v_reusejp_5268_;
}
v_reusejp_5268_:
{
lean_object* v___x_5270_; 
v___x_5270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5270_, 0, v___x_5269_);
return v___x_5270_;
}
}
}
else
{
lean_object* v_a_5273_; lean_object* v___x_5275_; uint8_t v_isShared_5276_; uint8_t v_isSharedCheck_5296_; 
v_a_5273_ = lean_ctor_get(v_x_5262_, 0);
v_isSharedCheck_5296_ = !lean_is_exclusive(v_x_5262_);
if (v_isSharedCheck_5296_ == 0)
{
v___x_5275_ = v_x_5262_;
v_isShared_5276_ = v_isSharedCheck_5296_;
goto v_resetjp_5274_;
}
else
{
lean_inc(v_a_5273_);
lean_dec(v_x_5262_);
v___x_5275_ = lean_box(0);
v_isShared_5276_ = v_isSharedCheck_5296_;
goto v_resetjp_5274_;
}
v_resetjp_5274_:
{
lean_object* v___f_5277_; lean_object* v___x_5278_; lean_object* v___x_5279_; lean_object* v___f_5280_; lean_object* v___x_5281_; uint8_t v___x_5282_; lean_object* v_val_5284_; lean_object* v___x_5287_; 
lean_inc(v_a_5273_);
v___f_5277_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_5277_, 0, v_a_5273_);
lean_closure_set(v___f_5277_, 1, v___f_5260_);
v___x_5278_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
v___x_5279_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5279_, 0, v_v_5261_);
lean_ctor_set(v___x_5279_, 1, v___x_5278_);
lean_inc_ref(v___x_5279_);
v___f_5280_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___redArg___lam__4___boxed), 5, 3);
lean_closure_set(v___f_5280_, 0, v___f_5277_);
lean_closure_set(v___f_5280_, 1, v_a_5273_);
lean_closure_set(v___f_5280_, 2, v___x_5279_);
v___x_5281_ = lean_unsigned_to_nat(0u);
v___x_5282_ = 0;
v___x_5287_ = l_Lasm_JS_Wire_encodeIO(v___x_5279_);
lean_dec_ref_known(v___x_5279_, 2);
if (lean_obj_tag(v___x_5287_) == 0)
{
lean_object* v_a_5288_; lean_object* v___x_5290_; 
v_a_5288_ = lean_ctor_get(v___x_5287_, 0);
lean_inc(v_a_5288_);
lean_dec_ref_known(v___x_5287_, 1);
if (v_isShared_5276_ == 0)
{
lean_ctor_set(v___x_5275_, 0, v_a_5288_);
v___x_5290_ = v___x_5275_;
goto v_reusejp_5289_;
}
else
{
lean_object* v_reuseFailAlloc_5291_; 
v_reuseFailAlloc_5291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5291_, 0, v_a_5288_);
v___x_5290_ = v_reuseFailAlloc_5291_;
goto v_reusejp_5289_;
}
v_reusejp_5289_:
{
v_val_5284_ = v___x_5290_;
goto v___jp_5283_;
}
}
else
{
lean_object* v_a_5292_; lean_object* v___x_5294_; 
v_a_5292_ = lean_ctor_get(v___x_5287_, 0);
lean_inc(v_a_5292_);
lean_dec_ref_known(v___x_5287_, 1);
if (v_isShared_5276_ == 0)
{
lean_ctor_set_tag(v___x_5275_, 0);
lean_ctor_set(v___x_5275_, 0, v_a_5292_);
v___x_5294_ = v___x_5275_;
goto v_reusejp_5293_;
}
else
{
lean_object* v_reuseFailAlloc_5295_; 
v_reuseFailAlloc_5295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5295_, 0, v_a_5292_);
v___x_5294_ = v_reuseFailAlloc_5295_;
goto v_reusejp_5293_;
}
v_reusejp_5293_:
{
v_val_5284_ = v___x_5294_;
goto v___jp_5283_;
}
}
v___jp_5283_:
{
lean_object* v___x_5285_; lean_object* v___x_5286_; 
v___x_5285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5285_, 0, v_val_5284_);
v___x_5286_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5281_, v___x_5282_, v___x_5285_, v___f_5280_);
return v___x_5286_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__5___boxed(lean_object* v___f_5297_, lean_object* v_v_5298_, lean_object* v_x_5299_, lean_object* v___y_5300_){
_start:
{
lean_object* v_res_5301_; 
v_res_5301_ = l_Lasm_JS_Value_await___redArg___lam__5(v___f_5297_, v_v_5298_, v_x_5299_);
return v_res_5301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__6(lean_object* v___f_5302_, lean_object* v_____r_5303_){
_start:
{
lean_object* v___x_5305_; uint8_t v___x_5306_; lean_object* v___x_5307_; lean_object* v___x_5308_; lean_object* v___x_5309_; lean_object* v___x_5310_; 
v___x_5305_ = lean_unsigned_to_nat(0u);
v___x_5306_ = 0;
v___x_5307_ = lean_io_promise_new();
v___x_5308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5308_, 0, v___x_5307_);
v___x_5309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5309_, 0, v___x_5308_);
v___x_5310_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5305_, v___x_5306_, v___x_5309_, v___f_5302_);
return v___x_5310_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__6___boxed(lean_object* v___f_5311_, lean_object* v_____r_5312_, lean_object* v___y_5313_){
_start:
{
lean_object* v_res_5314_; 
v_res_5314_ = l_Lasm_JS_Value_await___redArg___lam__6(v___f_5311_, v_____r_5312_);
return v_res_5314_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__7(lean_object* v___x_5315_, lean_object* v_____do__lift_5316_){
_start:
{
lean_object* v___x_5318_; lean_object* v___x_5319_; 
v___x_5318_ = lean_io_wait(v_____do__lift_5316_);
v___x_5319_ = l_IO_ofExcept___redArg(v___x_5315_, v___x_5318_);
return v___x_5319_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__7___boxed(lean_object* v___x_5320_, lean_object* v_____do__lift_5321_, lean_object* v___y_5322_){
_start:
{
lean_object* v_res_5323_; 
v_res_5323_ = l_Lasm_JS_Value_await___redArg___lam__7(v___x_5320_, v_____do__lift_5321_);
return v_res_5323_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg(lean_object* v_inst_5329_, lean_object* v_v_5330_, lean_object* v_inst_5331_){
_start:
{
lean_object* v___f_5332_; lean_object* v___f_5333_; lean_object* v___f_5334_; lean_object* v___f_5335_; lean_object* v___f_5336_; lean_object* v___f_5337_; lean_object* v___x_5338_; lean_object* v___x_5339_; lean_object* v___x_5340_; lean_object* v___x_5341_; lean_object* v___x_5342_; lean_object* v___x_5343_; 
v___f_5332_ = ((lean_object*)(l_Lasm_JS_Value_await___redArg___closed__0));
lean_inc_ref(v_inst_5331_);
v___f_5333_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_5333_, 0, v_inst_5331_);
v___f_5334_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_5334_, 0, v___f_5333_);
lean_inc_n(v_v_5330_, 2);
v___f_5335_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___redArg___lam__5___boxed), 4, 2);
lean_closure_set(v___f_5335_, 0, v___f_5334_);
lean_closure_set(v___f_5335_, 1, v_v_5330_);
v___f_5336_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___redArg___lam__6___boxed), 3, 1);
lean_closure_set(v___f_5336_, 0, v___f_5335_);
v___f_5337_ = ((lean_object*)(l_Lasm_JS_Value_await___redArg___closed__2));
v___x_5338_ = ((lean_object*)(l_Lasm_JS_Value_await___redArg___closed__3));
v___x_5339_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5339_, 0, v_v_5330_);
lean_ctor_set(v___x_5339_, 1, v___x_5338_);
v___x_5340_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___boxed), 5, 4);
lean_closure_set(v___x_5340_, 0, v_v_5330_);
lean_closure_set(v___x_5340_, 1, lean_box(0));
lean_closure_set(v___x_5340_, 2, v_inst_5331_);
lean_closure_set(v___x_5340_, 3, v___x_5339_);
v___x_5341_ = lean_alloc_closure((void*)(l_instMonadEIO___aux__13___boxed), 6, 5);
lean_closure_set(v___x_5341_, 0, lean_box(0));
lean_closure_set(v___x_5341_, 1, lean_box(0));
lean_closure_set(v___x_5341_, 2, lean_box(0));
lean_closure_set(v___x_5341_, 3, v___x_5340_);
lean_closure_set(v___x_5341_, 4, v___f_5337_);
v___x_5342_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_bind___boxed), 6, 5);
lean_closure_set(v___x_5342_, 0, lean_box(0));
lean_closure_set(v___x_5342_, 1, lean_box(0));
lean_closure_set(v___x_5342_, 2, lean_box(0));
lean_closure_set(v___x_5342_, 3, v___f_5332_);
lean_closure_set(v___x_5342_, 4, v___f_5336_);
v___x_5343_ = lean_apply_3(v_inst_5329_, lean_box(0), v___x_5341_, v___x_5342_);
return v___x_5343_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await(lean_object* v_m_5344_, lean_object* v_inst_5345_, lean_object* v_v_5346_, lean_object* v_00_u03b1_5347_, lean_object* v_inst_5348_){
_start:
{
lean_object* v___x_5349_; 
v___x_5349_ = l_Lasm_JS_Value_await___redArg(v_inst_5345_, v_v_5346_, v_inst_5348_);
return v___x_5349_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1___redArg(uint32_t v_a_5350_, lean_object* v_b_5351_, lean_object* v_x_5352_){
_start:
{
if (lean_obj_tag(v_x_5352_) == 0)
{
lean_dec(v_b_5351_);
return v_x_5352_;
}
else
{
lean_object* v_key_5353_; lean_object* v_value_5354_; lean_object* v_tail_5355_; lean_object* v___x_5357_; uint8_t v_isShared_5358_; uint8_t v_isSharedCheck_5369_; 
v_key_5353_ = lean_ctor_get(v_x_5352_, 0);
v_value_5354_ = lean_ctor_get(v_x_5352_, 1);
v_tail_5355_ = lean_ctor_get(v_x_5352_, 2);
v_isSharedCheck_5369_ = !lean_is_exclusive(v_x_5352_);
if (v_isSharedCheck_5369_ == 0)
{
v___x_5357_ = v_x_5352_;
v_isShared_5358_ = v_isSharedCheck_5369_;
goto v_resetjp_5356_;
}
else
{
lean_inc(v_tail_5355_);
lean_inc(v_value_5354_);
lean_inc(v_key_5353_);
lean_dec(v_x_5352_);
v___x_5357_ = lean_box(0);
v_isShared_5358_ = v_isSharedCheck_5369_;
goto v_resetjp_5356_;
}
v_resetjp_5356_:
{
uint32_t v___x_5359_; uint8_t v___x_5360_; 
v___x_5359_ = lean_unbox_uint32(v_key_5353_);
v___x_5360_ = lean_uint32_dec_eq(v___x_5359_, v_a_5350_);
if (v___x_5360_ == 0)
{
lean_object* v___x_5361_; lean_object* v___x_5363_; 
v___x_5361_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1___redArg(v_a_5350_, v_b_5351_, v_tail_5355_);
if (v_isShared_5358_ == 0)
{
lean_ctor_set(v___x_5357_, 2, v___x_5361_);
v___x_5363_ = v___x_5357_;
goto v_reusejp_5362_;
}
else
{
lean_object* v_reuseFailAlloc_5364_; 
v_reuseFailAlloc_5364_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5364_, 0, v_key_5353_);
lean_ctor_set(v_reuseFailAlloc_5364_, 1, v_value_5354_);
lean_ctor_set(v_reuseFailAlloc_5364_, 2, v___x_5361_);
v___x_5363_ = v_reuseFailAlloc_5364_;
goto v_reusejp_5362_;
}
v_reusejp_5362_:
{
return v___x_5363_;
}
}
else
{
lean_object* v___x_5365_; lean_object* v___x_5367_; 
lean_dec(v_value_5354_);
lean_dec(v_key_5353_);
v___x_5365_ = lean_box_uint32(v_a_5350_);
if (v_isShared_5358_ == 0)
{
lean_ctor_set(v___x_5357_, 1, v_b_5351_);
lean_ctor_set(v___x_5357_, 0, v___x_5365_);
v___x_5367_ = v___x_5357_;
goto v_reusejp_5366_;
}
else
{
lean_object* v_reuseFailAlloc_5368_; 
v_reuseFailAlloc_5368_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5368_, 0, v___x_5365_);
lean_ctor_set(v_reuseFailAlloc_5368_, 1, v_b_5351_);
lean_ctor_set(v_reuseFailAlloc_5368_, 2, v_tail_5355_);
v___x_5367_ = v_reuseFailAlloc_5368_;
goto v_reusejp_5366_;
}
v_reusejp_5366_:
{
return v___x_5367_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1___redArg___boxed(lean_object* v_a_5370_, lean_object* v_b_5371_, lean_object* v_x_5372_){
_start:
{
uint32_t v_a_boxed_5373_; lean_object* v_res_5374_; 
v_a_boxed_5373_ = lean_unbox_uint32(v_a_5370_);
lean_dec(v_a_5370_);
v_res_5374_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1___redArg(v_a_boxed_5373_, v_b_5371_, v_x_5372_);
return v_res_5374_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_5375_, lean_object* v_x_5376_){
_start:
{
if (lean_obj_tag(v_x_5376_) == 0)
{
return v_x_5375_;
}
else
{
lean_object* v_key_5377_; lean_object* v_value_5378_; lean_object* v_tail_5379_; lean_object* v___x_5381_; uint8_t v_isShared_5382_; uint8_t v_isSharedCheck_5403_; 
v_key_5377_ = lean_ctor_get(v_x_5376_, 0);
v_value_5378_ = lean_ctor_get(v_x_5376_, 1);
v_tail_5379_ = lean_ctor_get(v_x_5376_, 2);
v_isSharedCheck_5403_ = !lean_is_exclusive(v_x_5376_);
if (v_isSharedCheck_5403_ == 0)
{
v___x_5381_ = v_x_5376_;
v_isShared_5382_ = v_isSharedCheck_5403_;
goto v_resetjp_5380_;
}
else
{
lean_inc(v_tail_5379_);
lean_inc(v_value_5378_);
lean_inc(v_key_5377_);
lean_dec(v_x_5376_);
v___x_5381_ = lean_box(0);
v_isShared_5382_ = v_isSharedCheck_5403_;
goto v_resetjp_5380_;
}
v_resetjp_5380_:
{
lean_object* v___x_5383_; uint32_t v___x_5384_; uint64_t v___x_5385_; uint64_t v___x_5386_; uint64_t v___x_5387_; uint64_t v_fold_5388_; uint64_t v___x_5389_; uint64_t v___x_5390_; uint64_t v___x_5391_; size_t v___x_5392_; size_t v___x_5393_; size_t v___x_5394_; size_t v___x_5395_; size_t v___x_5396_; lean_object* v___x_5397_; lean_object* v___x_5399_; 
v___x_5383_ = lean_array_get_size(v_x_5375_);
v___x_5384_ = lean_unbox_uint32(v_key_5377_);
v___x_5385_ = lean_uint32_to_uint64(v___x_5384_);
v___x_5386_ = 32ULL;
v___x_5387_ = lean_uint64_shift_right(v___x_5385_, v___x_5386_);
v_fold_5388_ = lean_uint64_xor(v___x_5385_, v___x_5387_);
v___x_5389_ = 16ULL;
v___x_5390_ = lean_uint64_shift_right(v_fold_5388_, v___x_5389_);
v___x_5391_ = lean_uint64_xor(v_fold_5388_, v___x_5390_);
v___x_5392_ = lean_uint64_to_usize(v___x_5391_);
v___x_5393_ = lean_usize_of_nat(v___x_5383_);
v___x_5394_ = ((size_t)1ULL);
v___x_5395_ = lean_usize_sub(v___x_5393_, v___x_5394_);
v___x_5396_ = lean_usize_land(v___x_5392_, v___x_5395_);
v___x_5397_ = lean_array_uget_borrowed(v_x_5375_, v___x_5396_);
lean_inc(v___x_5397_);
if (v_isShared_5382_ == 0)
{
lean_ctor_set(v___x_5381_, 2, v___x_5397_);
v___x_5399_ = v___x_5381_;
goto v_reusejp_5398_;
}
else
{
lean_object* v_reuseFailAlloc_5402_; 
v_reuseFailAlloc_5402_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5402_, 0, v_key_5377_);
lean_ctor_set(v_reuseFailAlloc_5402_, 1, v_value_5378_);
lean_ctor_set(v_reuseFailAlloc_5402_, 2, v___x_5397_);
v___x_5399_ = v_reuseFailAlloc_5402_;
goto v_reusejp_5398_;
}
v_reusejp_5398_:
{
lean_object* v___x_5400_; 
v___x_5400_ = lean_array_uset(v_x_5375_, v___x_5396_, v___x_5399_);
v_x_5375_ = v___x_5400_;
v_x_5376_ = v_tail_5379_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1___redArg(lean_object* v_i_5404_, lean_object* v_source_5405_, lean_object* v_target_5406_){
_start:
{
lean_object* v___x_5407_; uint8_t v___x_5408_; 
v___x_5407_ = lean_array_get_size(v_source_5405_);
v___x_5408_ = lean_nat_dec_lt(v_i_5404_, v___x_5407_);
if (v___x_5408_ == 0)
{
lean_dec_ref(v_source_5405_);
lean_dec(v_i_5404_);
return v_target_5406_;
}
else
{
lean_object* v_es_5409_; lean_object* v___x_5410_; lean_object* v_source_5411_; lean_object* v_target_5412_; lean_object* v___x_5413_; lean_object* v___x_5414_; 
v_es_5409_ = lean_array_fget(v_source_5405_, v_i_5404_);
v___x_5410_ = lean_box(0);
v_source_5411_ = lean_array_fset(v_source_5405_, v_i_5404_, v___x_5410_);
v_target_5412_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1_spec__2___redArg(v_target_5406_, v_es_5409_);
v___x_5413_ = lean_unsigned_to_nat(1u);
v___x_5414_ = lean_nat_add(v_i_5404_, v___x_5413_);
lean_dec(v_i_5404_);
v_i_5404_ = v___x_5414_;
v_source_5405_ = v_source_5411_;
v_target_5406_ = v_target_5412_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0___redArg(lean_object* v_data_5416_){
_start:
{
lean_object* v___x_5417_; lean_object* v___x_5418_; lean_object* v_nbuckets_5419_; lean_object* v___x_5420_; lean_object* v___x_5421_; lean_object* v___x_5422_; lean_object* v___x_5423_; lean_object* v___x_5424_; 
v___x_5417_ = lean_array_get_size(v_data_5416_);
v___x_5418_ = lean_unsigned_to_nat(2u);
v_nbuckets_5419_ = lean_nat_mul(v___x_5417_, v___x_5418_);
v___x_5420_ = lean_unsigned_to_nat(0u);
v___x_5421_ = lean_box(0);
v___x_5422_ = lean_mk_array(v_nbuckets_5419_, v___x_5421_);
v___x_5423_ = lean_array_propagate_mark(v_data_5416_, v___x_5422_);
v___x_5424_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1___redArg(v___x_5420_, v_data_5416_, v___x_5423_);
return v___x_5424_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0___redArg(lean_object* v_m_5425_, uint32_t v_a_5426_, lean_object* v_b_5427_){
_start:
{
lean_object* v_size_5428_; lean_object* v_buckets_5429_; lean_object* v___x_5431_; uint8_t v_isShared_5432_; uint8_t v_isSharedCheck_5473_; 
v_size_5428_ = lean_ctor_get(v_m_5425_, 0);
v_buckets_5429_ = lean_ctor_get(v_m_5425_, 1);
v_isSharedCheck_5473_ = !lean_is_exclusive(v_m_5425_);
if (v_isSharedCheck_5473_ == 0)
{
v___x_5431_ = v_m_5425_;
v_isShared_5432_ = v_isSharedCheck_5473_;
goto v_resetjp_5430_;
}
else
{
lean_inc(v_buckets_5429_);
lean_inc(v_size_5428_);
lean_dec(v_m_5425_);
v___x_5431_ = lean_box(0);
v_isShared_5432_ = v_isSharedCheck_5473_;
goto v_resetjp_5430_;
}
v_resetjp_5430_:
{
lean_object* v___x_5433_; uint64_t v___x_5434_; uint64_t v___x_5435_; uint64_t v___x_5436_; uint64_t v_fold_5437_; uint64_t v___x_5438_; uint64_t v___x_5439_; uint64_t v___x_5440_; size_t v___x_5441_; size_t v___x_5442_; size_t v___x_5443_; size_t v___x_5444_; size_t v___x_5445_; lean_object* v_bkt_5446_; uint8_t v___x_5447_; 
v___x_5433_ = lean_array_get_size(v_buckets_5429_);
v___x_5434_ = lean_uint32_to_uint64(v_a_5426_);
v___x_5435_ = 32ULL;
v___x_5436_ = lean_uint64_shift_right(v___x_5434_, v___x_5435_);
v_fold_5437_ = lean_uint64_xor(v___x_5434_, v___x_5436_);
v___x_5438_ = 16ULL;
v___x_5439_ = lean_uint64_shift_right(v_fold_5437_, v___x_5438_);
v___x_5440_ = lean_uint64_xor(v_fold_5437_, v___x_5439_);
v___x_5441_ = lean_uint64_to_usize(v___x_5440_);
v___x_5442_ = lean_usize_of_nat(v___x_5433_);
v___x_5443_ = ((size_t)1ULL);
v___x_5444_ = lean_usize_sub(v___x_5442_, v___x_5443_);
v___x_5445_ = lean_usize_land(v___x_5441_, v___x_5444_);
v_bkt_5446_ = lean_array_uget_borrowed(v_buckets_5429_, v___x_5445_);
v___x_5447_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2___redArg(v_a_5426_, v_bkt_5446_);
if (v___x_5447_ == 0)
{
lean_object* v___x_5448_; lean_object* v_size_x27_5449_; lean_object* v___x_5450_; lean_object* v___x_5451_; lean_object* v_buckets_x27_5452_; lean_object* v___x_5453_; lean_object* v___x_5454_; lean_object* v___x_5455_; lean_object* v___x_5456_; lean_object* v___x_5457_; uint8_t v___x_5458_; 
v___x_5448_ = lean_unsigned_to_nat(1u);
v_size_x27_5449_ = lean_nat_add(v_size_5428_, v___x_5448_);
lean_dec(v_size_5428_);
v___x_5450_ = lean_box_uint32(v_a_5426_);
lean_inc(v_bkt_5446_);
v___x_5451_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5451_, 0, v___x_5450_);
lean_ctor_set(v___x_5451_, 1, v_b_5427_);
lean_ctor_set(v___x_5451_, 2, v_bkt_5446_);
v_buckets_x27_5452_ = lean_array_uset(v_buckets_5429_, v___x_5445_, v___x_5451_);
v___x_5453_ = lean_unsigned_to_nat(4u);
v___x_5454_ = lean_nat_mul(v_size_x27_5449_, v___x_5453_);
v___x_5455_ = lean_unsigned_to_nat(3u);
v___x_5456_ = lean_nat_div(v___x_5454_, v___x_5455_);
lean_dec(v___x_5454_);
v___x_5457_ = lean_array_get_size(v_buckets_x27_5452_);
v___x_5458_ = lean_nat_dec_le(v___x_5456_, v___x_5457_);
lean_dec(v___x_5456_);
if (v___x_5458_ == 0)
{
lean_object* v_val_5459_; lean_object* v___x_5461_; 
v_val_5459_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0___redArg(v_buckets_x27_5452_);
if (v_isShared_5432_ == 0)
{
lean_ctor_set(v___x_5431_, 1, v_val_5459_);
lean_ctor_set(v___x_5431_, 0, v_size_x27_5449_);
v___x_5461_ = v___x_5431_;
goto v_reusejp_5460_;
}
else
{
lean_object* v_reuseFailAlloc_5462_; 
v_reuseFailAlloc_5462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5462_, 0, v_size_x27_5449_);
lean_ctor_set(v_reuseFailAlloc_5462_, 1, v_val_5459_);
v___x_5461_ = v_reuseFailAlloc_5462_;
goto v_reusejp_5460_;
}
v_reusejp_5460_:
{
return v___x_5461_;
}
}
else
{
lean_object* v___x_5464_; 
if (v_isShared_5432_ == 0)
{
lean_ctor_set(v___x_5431_, 1, v_buckets_x27_5452_);
lean_ctor_set(v___x_5431_, 0, v_size_x27_5449_);
v___x_5464_ = v___x_5431_;
goto v_reusejp_5463_;
}
else
{
lean_object* v_reuseFailAlloc_5465_; 
v_reuseFailAlloc_5465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5465_, 0, v_size_x27_5449_);
lean_ctor_set(v_reuseFailAlloc_5465_, 1, v_buckets_x27_5452_);
v___x_5464_ = v_reuseFailAlloc_5465_;
goto v_reusejp_5463_;
}
v_reusejp_5463_:
{
return v___x_5464_;
}
}
}
else
{
lean_object* v___x_5466_; lean_object* v_buckets_x27_5467_; lean_object* v___x_5468_; lean_object* v___x_5469_; lean_object* v___x_5471_; 
lean_inc(v_bkt_5446_);
v___x_5466_ = lean_box(0);
v_buckets_x27_5467_ = lean_array_uset(v_buckets_5429_, v___x_5445_, v___x_5466_);
v___x_5468_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1___redArg(v_a_5426_, v_b_5427_, v_bkt_5446_);
v___x_5469_ = lean_array_uset(v_buckets_x27_5467_, v___x_5445_, v___x_5468_);
if (v_isShared_5432_ == 0)
{
lean_ctor_set(v___x_5431_, 1, v___x_5469_);
v___x_5471_ = v___x_5431_;
goto v_reusejp_5470_;
}
else
{
lean_object* v_reuseFailAlloc_5472_; 
v_reuseFailAlloc_5472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5472_, 0, v_size_5428_);
lean_ctor_set(v_reuseFailAlloc_5472_, 1, v___x_5469_);
v___x_5471_ = v_reuseFailAlloc_5472_;
goto v_reusejp_5470_;
}
v_reusejp_5470_:
{
return v___x_5471_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0___redArg___boxed(lean_object* v_m_5474_, lean_object* v_a_5475_, lean_object* v_b_5476_){
_start:
{
uint32_t v_a_boxed_5477_; lean_object* v_res_5478_; 
v_a_boxed_5477_ = lean_unbox_uint32(v_a_5475_);
lean_dec(v_a_5475_);
v_res_5478_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0___redArg(v_m_5474_, v_a_boxed_5477_, v_b_5476_);
return v_res_5478_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_register(uint8_t v_synchronous_5479_, lean_object* v_f_5480_){
_start:
{
lean_object* v___x_5482_; lean_object* v___x_5483_; uint32_t v_next_5484_; lean_object* v_asyncFns_5485_; lean_object* v_syncFns_5486_; lean_object* v___x_5488_; uint8_t v_isShared_5489_; uint8_t v_isSharedCheck_5501_; 
v___x_5482_ = l___private_Lasm_JS_Core_0__Lasm_JS_registry;
v___x_5483_ = lean_st_ref_take(v___x_5482_);
v_next_5484_ = lean_ctor_get_uint32(v___x_5483_, sizeof(void*)*2);
v_asyncFns_5485_ = lean_ctor_get(v___x_5483_, 0);
v_syncFns_5486_ = lean_ctor_get(v___x_5483_, 1);
v_isSharedCheck_5501_ = !lean_is_exclusive(v___x_5483_);
if (v_isSharedCheck_5501_ == 0)
{
v___x_5488_ = v___x_5483_;
v_isShared_5489_ = v_isSharedCheck_5501_;
goto v_resetjp_5487_;
}
else
{
lean_inc(v_syncFns_5486_);
lean_inc(v_asyncFns_5485_);
lean_dec(v___x_5483_);
v___x_5488_ = lean_box(0);
v_isShared_5489_ = v_isSharedCheck_5501_;
goto v_resetjp_5487_;
}
v_resetjp_5487_:
{
uint32_t v___x_5490_; uint32_t v___x_5491_; lean_object* v___y_5493_; 
v___x_5490_ = 1;
v___x_5491_ = lean_uint32_add(v_next_5484_, v___x_5490_);
if (v_synchronous_5479_ == 0)
{
lean_dec_ref(v_f_5480_);
v___y_5493_ = v_syncFns_5486_;
goto v___jp_5492_;
}
else
{
lean_object* v___x_5500_; 
v___x_5500_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0___redArg(v_syncFns_5486_, v_next_5484_, v_f_5480_);
v___y_5493_ = v___x_5500_;
goto v___jp_5492_;
}
v___jp_5492_:
{
lean_object* v___x_5495_; 
if (v_isShared_5489_ == 0)
{
lean_ctor_set(v___x_5488_, 1, v___y_5493_);
v___x_5495_ = v___x_5488_;
goto v_reusejp_5494_;
}
else
{
lean_object* v_reuseFailAlloc_5499_; 
v_reuseFailAlloc_5499_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v_reuseFailAlloc_5499_, 0, v_asyncFns_5485_);
lean_ctor_set(v_reuseFailAlloc_5499_, 1, v___y_5493_);
v___x_5495_ = v_reuseFailAlloc_5499_;
goto v_reusejp_5494_;
}
v_reusejp_5494_:
{
lean_object* v___x_5496_; lean_object* v___x_5497_; lean_object* v___x_5498_; 
lean_ctor_set_uint32(v___x_5495_, sizeof(void*)*2, v___x_5491_);
v___x_5496_ = lean_st_ref_put(v___x_5482_, v___x_5495_);
v___x_5497_ = lean_box_uint32(v_next_5484_);
v___x_5498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5498_, 0, v___x_5497_);
return v___x_5498_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_register___boxed(lean_object* v_synchronous_5502_, lean_object* v_f_5503_, lean_object* v_a_5504_){
_start:
{
uint8_t v_synchronous_boxed_5505_; lean_object* v_res_5506_; 
v_synchronous_boxed_5505_ = lean_unbox(v_synchronous_5502_);
v_res_5506_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_register(v_synchronous_boxed_5505_, v_f_5503_);
return v_res_5506_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0(lean_object* v_00_u03b2_5507_, lean_object* v_m_5508_, uint32_t v_a_5509_, lean_object* v_b_5510_){
_start:
{
lean_object* v___x_5511_; 
v___x_5511_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0___redArg(v_m_5508_, v_a_5509_, v_b_5510_);
return v___x_5511_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0___boxed(lean_object* v_00_u03b2_5512_, lean_object* v_m_5513_, lean_object* v_a_5514_, lean_object* v_b_5515_){
_start:
{
uint32_t v_a_boxed_5516_; lean_object* v_res_5517_; 
v_a_boxed_5516_ = lean_unbox_uint32(v_a_5514_);
lean_dec(v_a_5514_);
v_res_5517_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0(v_00_u03b2_5512_, v_m_5513_, v_a_boxed_5516_, v_b_5515_);
return v_res_5517_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0(lean_object* v_00_u03b2_5518_, lean_object* v_data_5519_){
_start:
{
lean_object* v___x_5520_; 
v___x_5520_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0___redArg(v_data_5519_);
return v___x_5520_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1(lean_object* v_00_u03b2_5521_, uint32_t v_a_5522_, lean_object* v_b_5523_, lean_object* v_x_5524_){
_start:
{
lean_object* v___x_5525_; 
v___x_5525_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1___redArg(v_a_5522_, v_b_5523_, v_x_5524_);
return v___x_5525_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1___boxed(lean_object* v_00_u03b2_5526_, lean_object* v_a_5527_, lean_object* v_b_5528_, lean_object* v_x_5529_){
_start:
{
uint32_t v_a_boxed_5530_; lean_object* v_res_5531_; 
v_a_boxed_5530_ = lean_unbox_uint32(v_a_5527_);
lean_dec(v_a_5527_);
v_res_5531_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1(v_00_u03b2_5526_, v_a_boxed_5530_, v_b_5528_, v_x_5529_);
return v_res_5531_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_5532_, lean_object* v_i_5533_, lean_object* v_source_5534_, lean_object* v_target_5535_){
_start:
{
lean_object* v___x_5536_; 
v___x_5536_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1___redArg(v_i_5533_, v_source_5534_, v_target_5535_);
return v___x_5536_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_5537_, lean_object* v_x_5538_, lean_object* v_x_5539_){
_start:
{
lean_object* v___x_5540_; 
v___x_5540_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1_spec__2___redArg(v_x_5538_, v_x_5539_);
return v___x_5540_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_registerReply(lean_object* v_f_5541_){
_start:
{
lean_object* v___x_5543_; lean_object* v___x_5544_; uint32_t v_next_5545_; lean_object* v_asyncFns_5546_; lean_object* v_syncFns_5547_; lean_object* v___x_5549_; uint8_t v_isShared_5550_; uint8_t v_isSharedCheck_5560_; 
v___x_5543_ = l___private_Lasm_JS_Core_0__Lasm_JS_registry;
v___x_5544_ = lean_st_ref_take(v___x_5543_);
v_next_5545_ = lean_ctor_get_uint32(v___x_5544_, sizeof(void*)*2);
v_asyncFns_5546_ = lean_ctor_get(v___x_5544_, 0);
v_syncFns_5547_ = lean_ctor_get(v___x_5544_, 1);
v_isSharedCheck_5560_ = !lean_is_exclusive(v___x_5544_);
if (v_isSharedCheck_5560_ == 0)
{
v___x_5549_ = v___x_5544_;
v_isShared_5550_ = v_isSharedCheck_5560_;
goto v_resetjp_5548_;
}
else
{
lean_inc(v_syncFns_5547_);
lean_inc(v_asyncFns_5546_);
lean_dec(v___x_5544_);
v___x_5549_ = lean_box(0);
v_isShared_5550_ = v_isSharedCheck_5560_;
goto v_resetjp_5548_;
}
v_resetjp_5548_:
{
uint32_t v___x_5551_; uint32_t v___x_5552_; lean_object* v___x_5553_; lean_object* v___x_5555_; 
v___x_5551_ = 1;
v___x_5552_ = lean_uint32_add(v_next_5545_, v___x_5551_);
v___x_5553_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0___redArg(v_asyncFns_5546_, v_next_5545_, v_f_5541_);
if (v_isShared_5550_ == 0)
{
lean_ctor_set(v___x_5549_, 0, v___x_5553_);
v___x_5555_ = v___x_5549_;
goto v_reusejp_5554_;
}
else
{
lean_object* v_reuseFailAlloc_5559_; 
v_reuseFailAlloc_5559_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v_reuseFailAlloc_5559_, 0, v___x_5553_);
lean_ctor_set(v_reuseFailAlloc_5559_, 1, v_syncFns_5547_);
v___x_5555_ = v_reuseFailAlloc_5559_;
goto v_reusejp_5554_;
}
v_reusejp_5554_:
{
lean_object* v___x_5556_; lean_object* v___x_5557_; lean_object* v___x_5558_; 
lean_ctor_set_uint32(v___x_5555_, sizeof(void*)*2, v___x_5552_);
v___x_5556_ = lean_st_ref_put(v___x_5543_, v___x_5555_);
v___x_5557_ = lean_box_uint32(v_next_5545_);
v___x_5558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5558_, 0, v___x_5557_);
return v___x_5558_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_registerReply___boxed(lean_object* v_f_5561_, lean_object* v_a_5562_){
_start:
{
lean_object* v_res_5563_; 
v_res_5563_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_registerReply(v_f_5561_);
return v_res_5563_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn___lam__0(lean_object* v___y_5564_){
_start:
{
if (lean_obj_tag(v___y_5564_) == 0)
{
lean_object* v_a_5565_; lean_object* v___x_5567_; uint8_t v_isShared_5568_; uint8_t v_isSharedCheck_5572_; 
v_a_5565_ = lean_ctor_get(v___y_5564_, 0);
v_isSharedCheck_5572_ = !lean_is_exclusive(v___y_5564_);
if (v_isSharedCheck_5572_ == 0)
{
v___x_5567_ = v___y_5564_;
v_isShared_5568_ = v_isSharedCheck_5572_;
goto v_resetjp_5566_;
}
else
{
lean_inc(v_a_5565_);
lean_dec(v___y_5564_);
v___x_5567_ = lean_box(0);
v_isShared_5568_ = v_isSharedCheck_5572_;
goto v_resetjp_5566_;
}
v_resetjp_5566_:
{
lean_object* v___x_5570_; 
if (v_isShared_5568_ == 0)
{
v___x_5570_ = v___x_5567_;
goto v_reusejp_5569_;
}
else
{
lean_object* v_reuseFailAlloc_5571_; 
v_reuseFailAlloc_5571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5571_, 0, v_a_5565_);
v___x_5570_ = v_reuseFailAlloc_5571_;
goto v_reusejp_5569_;
}
v_reusejp_5569_:
{
return v___x_5570_;
}
}
}
else
{
lean_object* v_a_5573_; lean_object* v___x_5575_; uint8_t v_isShared_5576_; uint8_t v_isSharedCheck_5581_; 
v_a_5573_ = lean_ctor_get(v___y_5564_, 0);
v_isSharedCheck_5581_ = !lean_is_exclusive(v___y_5564_);
if (v_isSharedCheck_5581_ == 0)
{
v___x_5575_ = v___y_5564_;
v_isShared_5576_ = v_isSharedCheck_5581_;
goto v_resetjp_5574_;
}
else
{
lean_inc(v_a_5573_);
lean_dec(v___y_5564_);
v___x_5575_ = lean_box(0);
v_isShared_5576_ = v_isSharedCheck_5581_;
goto v_resetjp_5574_;
}
v_resetjp_5574_:
{
lean_object* v___x_5577_; lean_object* v___x_5579_; 
v___x_5577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5577_, 0, v_a_5573_);
if (v_isShared_5576_ == 0)
{
lean_ctor_set(v___x_5575_, 0, v___x_5577_);
v___x_5579_ = v___x_5575_;
goto v_reusejp_5578_;
}
else
{
lean_object* v_reuseFailAlloc_5580_; 
v_reuseFailAlloc_5580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5580_, 0, v___x_5577_);
v___x_5579_ = v_reuseFailAlloc_5580_;
goto v_reusejp_5578_;
}
v_reusejp_5578_:
{
return v___x_5579_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn___lam__1(lean_object* v_f_5582_, lean_object* v___f_5583_, lean_object* v_args_5584_){
_start:
{
lean_object* v___x_5586_; uint8_t v___x_5587_; lean_object* v___x_5588_; lean_object* v___y_5590_; 
v___x_5586_ = lean_unsigned_to_nat(0u);
v___x_5587_ = 0;
v___x_5588_ = lean_apply_2(v_f_5582_, v_args_5584_, lean_box(0));
if (lean_obj_tag(v___x_5588_) == 0)
{
lean_object* v_a_5592_; 
lean_dec_ref(v___f_5583_);
v_a_5592_ = lean_ctor_get(v___x_5588_, 0);
lean_inc(v_a_5592_);
lean_dec_ref_known(v___x_5588_, 1);
if (lean_obj_tag(v_a_5592_) == 0)
{
lean_object* v_a_5593_; lean_object* v___x_5595_; uint8_t v_isShared_5596_; uint8_t v_isSharedCheck_5600_; 
v_a_5593_ = lean_ctor_get(v_a_5592_, 0);
v_isSharedCheck_5600_ = !lean_is_exclusive(v_a_5592_);
if (v_isSharedCheck_5600_ == 0)
{
v___x_5595_ = v_a_5592_;
v_isShared_5596_ = v_isSharedCheck_5600_;
goto v_resetjp_5594_;
}
else
{
lean_inc(v_a_5593_);
lean_dec(v_a_5592_);
v___x_5595_ = lean_box(0);
v_isShared_5596_ = v_isSharedCheck_5600_;
goto v_resetjp_5594_;
}
v_resetjp_5594_:
{
lean_object* v___x_5598_; 
if (v_isShared_5596_ == 0)
{
v___x_5598_ = v___x_5595_;
goto v_reusejp_5597_;
}
else
{
lean_object* v_reuseFailAlloc_5599_; 
v_reuseFailAlloc_5599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5599_, 0, v_a_5593_);
v___x_5598_ = v_reuseFailAlloc_5599_;
goto v_reusejp_5597_;
}
v_reusejp_5597_:
{
v___y_5590_ = v___x_5598_;
goto v___jp_5589_;
}
}
}
else
{
lean_object* v_a_5601_; lean_object* v___x_5603_; uint8_t v_isShared_5604_; uint8_t v_isSharedCheck_5609_; 
v_a_5601_ = lean_ctor_get(v_a_5592_, 0);
v_isSharedCheck_5609_ = !lean_is_exclusive(v_a_5592_);
if (v_isSharedCheck_5609_ == 0)
{
v___x_5603_ = v_a_5592_;
v_isShared_5604_ = v_isSharedCheck_5609_;
goto v_resetjp_5602_;
}
else
{
lean_inc(v_a_5601_);
lean_dec(v_a_5592_);
v___x_5603_ = lean_box(0);
v_isShared_5604_ = v_isSharedCheck_5609_;
goto v_resetjp_5602_;
}
v_resetjp_5602_:
{
lean_object* v___x_5605_; lean_object* v___x_5607_; 
v___x_5605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5605_, 0, v_a_5601_);
if (v_isShared_5604_ == 0)
{
lean_ctor_set(v___x_5603_, 0, v___x_5605_);
v___x_5607_ = v___x_5603_;
goto v_reusejp_5606_;
}
else
{
lean_object* v_reuseFailAlloc_5608_; 
v_reuseFailAlloc_5608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5608_, 0, v___x_5605_);
v___x_5607_ = v_reuseFailAlloc_5608_;
goto v_reusejp_5606_;
}
v_reusejp_5606_:
{
v___y_5590_ = v___x_5607_;
goto v___jp_5589_;
}
}
}
}
else
{
lean_object* v_a_5610_; lean_object* v___x_5612_; uint8_t v_isShared_5613_; uint8_t v_isSharedCheck_5618_; 
v_a_5610_ = lean_ctor_get(v___x_5588_, 0);
v_isSharedCheck_5618_ = !lean_is_exclusive(v___x_5588_);
if (v_isSharedCheck_5618_ == 0)
{
v___x_5612_ = v___x_5588_;
v_isShared_5613_ = v_isSharedCheck_5618_;
goto v_resetjp_5611_;
}
else
{
lean_inc(v_a_5610_);
lean_dec(v___x_5588_);
v___x_5612_ = lean_box(0);
v_isShared_5613_ = v_isSharedCheck_5618_;
goto v_resetjp_5611_;
}
v_resetjp_5611_:
{
lean_object* v___x_5614_; lean_object* v___x_5616_; 
v___x_5614_ = lean_task_map(v___f_5583_, v_a_5610_, v___x_5586_, v___x_5587_);
if (v_isShared_5613_ == 0)
{
lean_ctor_set(v___x_5612_, 0, v___x_5614_);
v___x_5616_ = v___x_5612_;
goto v_reusejp_5615_;
}
else
{
lean_object* v_reuseFailAlloc_5617_; 
v_reuseFailAlloc_5617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5617_, 0, v___x_5614_);
v___x_5616_ = v_reuseFailAlloc_5617_;
goto v_reusejp_5615_;
}
v_reusejp_5615_:
{
return v___x_5616_;
}
}
}
v___jp_5589_:
{
lean_object* v___x_5591_; 
v___x_5591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5591_, 0, v___y_5590_);
return v___x_5591_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn___lam__1___boxed(lean_object* v_f_5619_, lean_object* v___f_5620_, lean_object* v_args_5621_, lean_object* v___y_5622_){
_start:
{
lean_object* v_res_5623_; 
v_res_5623_ = l_Lasm_JS_Function_ofFn___lam__1(v_f_5619_, v___f_5620_, v_args_5621_);
return v_res_5623_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn(lean_object* v_f_5626_){
_start:
{
lean_object* v___f_5628_; lean_object* v___f_5629_; lean_object* v___x_5630_; 
v___f_5628_ = ((lean_object*)(l_Lasm_JS_Function_ofFn___closed__0));
v___f_5629_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_5629_, 0, v_f_5626_);
lean_closure_set(v___f_5629_, 1, v___f_5628_);
v___x_5630_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_5630_) == 0)
{
lean_object* v___x_5631_; lean_object* v_a_5632_; uint32_t v___x_5633_; uint64_t v___x_5634_; lean_object* v___x_5635_; uint32_t v___x_5636_; lean_object* v___x_5637_; 
lean_dec_ref_known(v___x_5630_, 1);
v___x_5631_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_registerReply(v___f_5629_);
v_a_5632_ = lean_ctor_get(v___x_5631_, 0);
lean_inc(v_a_5632_);
lean_dec_ref(v___x_5631_);
v___x_5633_ = 210;
v___x_5634_ = 1ULL;
v___x_5635_ = l_ByteArray_empty;
v___x_5636_ = lean_unbox_uint32(v_a_5632_);
lean_dec(v_a_5632_);
v___x_5637_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_5633_, v___x_5636_, v___x_5634_, v___x_5635_);
if (lean_obj_tag(v___x_5637_) == 0)
{
lean_object* v_a_5638_; lean_object* v___x_5639_; 
v_a_5638_ = lean_ctor_get(v___x_5637_, 0);
lean_inc(v_a_5638_);
lean_dec_ref_known(v___x_5637_, 1);
v___x_5639_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_5638_);
lean_dec(v_a_5638_);
if (lean_obj_tag(v___x_5639_) == 0)
{
lean_object* v_a_5640_; lean_object* v___x_5641_; lean_object* v___x_5642_; 
v_a_5640_ = lean_ctor_get(v___x_5639_, 0);
lean_inc(v_a_5640_);
lean_dec_ref_known(v___x_5639_, 1);
v___x_5641_ = ((lean_object*)(l_Lasm_JS_Function_ofFn___closed__1));
v___x_5642_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v___x_5641_, v_a_5640_);
return v___x_5642_;
}
else
{
lean_object* v_a_5643_; lean_object* v___x_5645_; uint8_t v_isShared_5646_; uint8_t v_isSharedCheck_5650_; 
v_a_5643_ = lean_ctor_get(v___x_5639_, 0);
v_isSharedCheck_5650_ = !lean_is_exclusive(v___x_5639_);
if (v_isSharedCheck_5650_ == 0)
{
v___x_5645_ = v___x_5639_;
v_isShared_5646_ = v_isSharedCheck_5650_;
goto v_resetjp_5644_;
}
else
{
lean_inc(v_a_5643_);
lean_dec(v___x_5639_);
v___x_5645_ = lean_box(0);
v_isShared_5646_ = v_isSharedCheck_5650_;
goto v_resetjp_5644_;
}
v_resetjp_5644_:
{
lean_object* v___x_5648_; 
if (v_isShared_5646_ == 0)
{
v___x_5648_ = v___x_5645_;
goto v_reusejp_5647_;
}
else
{
lean_object* v_reuseFailAlloc_5649_; 
v_reuseFailAlloc_5649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5649_, 0, v_a_5643_);
v___x_5648_ = v_reuseFailAlloc_5649_;
goto v_reusejp_5647_;
}
v_reusejp_5647_:
{
return v___x_5648_;
}
}
}
}
else
{
lean_object* v_a_5651_; lean_object* v___x_5653_; uint8_t v_isShared_5654_; uint8_t v_isSharedCheck_5658_; 
v_a_5651_ = lean_ctor_get(v___x_5637_, 0);
v_isSharedCheck_5658_ = !lean_is_exclusive(v___x_5637_);
if (v_isSharedCheck_5658_ == 0)
{
v___x_5653_ = v___x_5637_;
v_isShared_5654_ = v_isSharedCheck_5658_;
goto v_resetjp_5652_;
}
else
{
lean_inc(v_a_5651_);
lean_dec(v___x_5637_);
v___x_5653_ = lean_box(0);
v_isShared_5654_ = v_isSharedCheck_5658_;
goto v_resetjp_5652_;
}
v_resetjp_5652_:
{
lean_object* v___x_5656_; 
if (v_isShared_5654_ == 0)
{
v___x_5656_ = v___x_5653_;
goto v_reusejp_5655_;
}
else
{
lean_object* v_reuseFailAlloc_5657_; 
v_reuseFailAlloc_5657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5657_, 0, v_a_5651_);
v___x_5656_ = v_reuseFailAlloc_5657_;
goto v_reusejp_5655_;
}
v_reusejp_5655_:
{
return v___x_5656_;
}
}
}
}
else
{
lean_object* v_a_5659_; lean_object* v___x_5661_; uint8_t v_isShared_5662_; uint8_t v_isSharedCheck_5666_; 
lean_dec_ref(v___f_5629_);
v_a_5659_ = lean_ctor_get(v___x_5630_, 0);
v_isSharedCheck_5666_ = !lean_is_exclusive(v___x_5630_);
if (v_isSharedCheck_5666_ == 0)
{
v___x_5661_ = v___x_5630_;
v_isShared_5662_ = v_isSharedCheck_5666_;
goto v_resetjp_5660_;
}
else
{
lean_inc(v_a_5659_);
lean_dec(v___x_5630_);
v___x_5661_ = lean_box(0);
v_isShared_5662_ = v_isSharedCheck_5666_;
goto v_resetjp_5660_;
}
v_resetjp_5660_:
{
lean_object* v___x_5664_; 
if (v_isShared_5662_ == 0)
{
v___x_5664_ = v___x_5661_;
goto v_reusejp_5663_;
}
else
{
lean_object* v_reuseFailAlloc_5665_; 
v_reuseFailAlloc_5665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5665_, 0, v_a_5659_);
v___x_5664_ = v_reuseFailAlloc_5665_;
goto v_reusejp_5663_;
}
v_reusejp_5663_:
{
return v___x_5664_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn___boxed(lean_object* v_f_5667_, lean_object* v_a_5668_){
_start:
{
lean_object* v_res_5669_; 
v_res_5669_ = l_Lasm_JS_Function_ofFn(v_f_5667_);
return v_res_5669_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFnReply(lean_object* v_f_5671_){
_start:
{
lean_object* v___x_5673_; 
v___x_5673_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_5673_) == 0)
{
lean_object* v___x_5674_; lean_object* v_a_5675_; uint32_t v___x_5676_; uint64_t v___x_5677_; lean_object* v___x_5678_; uint32_t v___x_5679_; lean_object* v___x_5680_; 
lean_dec_ref_known(v___x_5673_, 1);
v___x_5674_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_registerReply(v_f_5671_);
v_a_5675_ = lean_ctor_get(v___x_5674_, 0);
lean_inc(v_a_5675_);
lean_dec_ref(v___x_5674_);
v___x_5676_ = 210;
v___x_5677_ = 1ULL;
v___x_5678_ = l_ByteArray_empty;
v___x_5679_ = lean_unbox_uint32(v_a_5675_);
lean_dec(v_a_5675_);
v___x_5680_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_5676_, v___x_5679_, v___x_5677_, v___x_5678_);
if (lean_obj_tag(v___x_5680_) == 0)
{
lean_object* v_a_5681_; lean_object* v___x_5682_; 
v_a_5681_ = lean_ctor_get(v___x_5680_, 0);
lean_inc(v_a_5681_);
lean_dec_ref_known(v___x_5680_, 1);
v___x_5682_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_5681_);
lean_dec(v_a_5681_);
if (lean_obj_tag(v___x_5682_) == 0)
{
lean_object* v_a_5683_; lean_object* v___x_5684_; lean_object* v___x_5685_; 
v_a_5683_ = lean_ctor_get(v___x_5682_, 0);
lean_inc(v_a_5683_);
lean_dec_ref_known(v___x_5682_, 1);
v___x_5684_ = ((lean_object*)(l_Lasm_JS_Function_ofFnReply___closed__0));
v___x_5685_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v___x_5684_, v_a_5683_);
return v___x_5685_;
}
else
{
lean_object* v_a_5686_; lean_object* v___x_5688_; uint8_t v_isShared_5689_; uint8_t v_isSharedCheck_5693_; 
v_a_5686_ = lean_ctor_get(v___x_5682_, 0);
v_isSharedCheck_5693_ = !lean_is_exclusive(v___x_5682_);
if (v_isSharedCheck_5693_ == 0)
{
v___x_5688_ = v___x_5682_;
v_isShared_5689_ = v_isSharedCheck_5693_;
goto v_resetjp_5687_;
}
else
{
lean_inc(v_a_5686_);
lean_dec(v___x_5682_);
v___x_5688_ = lean_box(0);
v_isShared_5689_ = v_isSharedCheck_5693_;
goto v_resetjp_5687_;
}
v_resetjp_5687_:
{
lean_object* v___x_5691_; 
if (v_isShared_5689_ == 0)
{
v___x_5691_ = v___x_5688_;
goto v_reusejp_5690_;
}
else
{
lean_object* v_reuseFailAlloc_5692_; 
v_reuseFailAlloc_5692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5692_, 0, v_a_5686_);
v___x_5691_ = v_reuseFailAlloc_5692_;
goto v_reusejp_5690_;
}
v_reusejp_5690_:
{
return v___x_5691_;
}
}
}
}
else
{
lean_object* v_a_5694_; lean_object* v___x_5696_; uint8_t v_isShared_5697_; uint8_t v_isSharedCheck_5701_; 
v_a_5694_ = lean_ctor_get(v___x_5680_, 0);
v_isSharedCheck_5701_ = !lean_is_exclusive(v___x_5680_);
if (v_isSharedCheck_5701_ == 0)
{
v___x_5696_ = v___x_5680_;
v_isShared_5697_ = v_isSharedCheck_5701_;
goto v_resetjp_5695_;
}
else
{
lean_inc(v_a_5694_);
lean_dec(v___x_5680_);
v___x_5696_ = lean_box(0);
v_isShared_5697_ = v_isSharedCheck_5701_;
goto v_resetjp_5695_;
}
v_resetjp_5695_:
{
lean_object* v___x_5699_; 
if (v_isShared_5697_ == 0)
{
v___x_5699_ = v___x_5696_;
goto v_reusejp_5698_;
}
else
{
lean_object* v_reuseFailAlloc_5700_; 
v_reuseFailAlloc_5700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5700_, 0, v_a_5694_);
v___x_5699_ = v_reuseFailAlloc_5700_;
goto v_reusejp_5698_;
}
v_reusejp_5698_:
{
return v___x_5699_;
}
}
}
}
else
{
lean_object* v_a_5702_; lean_object* v___x_5704_; uint8_t v_isShared_5705_; uint8_t v_isSharedCheck_5709_; 
lean_dec_ref(v_f_5671_);
v_a_5702_ = lean_ctor_get(v___x_5673_, 0);
v_isSharedCheck_5709_ = !lean_is_exclusive(v___x_5673_);
if (v_isSharedCheck_5709_ == 0)
{
v___x_5704_ = v___x_5673_;
v_isShared_5705_ = v_isSharedCheck_5709_;
goto v_resetjp_5703_;
}
else
{
lean_inc(v_a_5702_);
lean_dec(v___x_5673_);
v___x_5704_ = lean_box(0);
v_isShared_5705_ = v_isSharedCheck_5709_;
goto v_resetjp_5703_;
}
v_resetjp_5703_:
{
lean_object* v___x_5707_; 
if (v_isShared_5705_ == 0)
{
v___x_5707_ = v___x_5704_;
goto v_reusejp_5706_;
}
else
{
lean_object* v_reuseFailAlloc_5708_; 
v_reuseFailAlloc_5708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5708_, 0, v_a_5702_);
v___x_5707_ = v_reuseFailAlloc_5708_;
goto v_reusejp_5706_;
}
v_reusejp_5706_:
{
return v___x_5707_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFnReply___boxed(lean_object* v_f_5710_, lean_object* v_a_5711_){
_start:
{
lean_object* v_res_5712_; 
v_res_5712_ = l_Lasm_JS_Function_ofFnReply(v_f_5710_);
return v_res_5712_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object* v_f_5715_){
_start:
{
lean_object* v___x_5717_; 
v___x_5717_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_5717_) == 0)
{
lean_object* v___x_5718_; lean_object* v___x_5719_; 
lean_dec_ref_known(v___x_5717_, 1);
v___x_5718_ = ((lean_object*)(l_Lasm_JS_Function_ofSyncFn___closed__0));
v___x_5719_ = lasm_js_sync_start(v___x_5718_);
if (lean_obj_tag(v___x_5719_) == 0)
{
uint8_t v___x_5720_; lean_object* v___x_5721_; lean_object* v_a_5722_; uint32_t v___x_5723_; uint64_t v___x_5724_; lean_object* v___x_5725_; uint32_t v___x_5726_; lean_object* v___x_5727_; 
lean_dec_ref_known(v___x_5719_, 1);
v___x_5720_ = 1;
v___x_5721_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_register(v___x_5720_, v_f_5715_);
v_a_5722_ = lean_ctor_get(v___x_5721_, 0);
lean_inc(v_a_5722_);
lean_dec_ref(v___x_5721_);
v___x_5723_ = 210;
v___x_5724_ = 2ULL;
v___x_5725_ = l_ByteArray_empty;
v___x_5726_ = lean_unbox_uint32(v_a_5722_);
lean_dec(v_a_5722_);
v___x_5727_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_5723_, v___x_5726_, v___x_5724_, v___x_5725_);
if (lean_obj_tag(v___x_5727_) == 0)
{
lean_object* v_a_5728_; lean_object* v___x_5729_; 
v_a_5728_ = lean_ctor_get(v___x_5727_, 0);
lean_inc(v_a_5728_);
lean_dec_ref_known(v___x_5727_, 1);
v___x_5729_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_5728_);
lean_dec(v_a_5728_);
if (lean_obj_tag(v___x_5729_) == 0)
{
lean_object* v_a_5730_; lean_object* v___x_5731_; lean_object* v___x_5732_; 
v_a_5730_ = lean_ctor_get(v___x_5729_, 0);
lean_inc(v_a_5730_);
lean_dec_ref_known(v___x_5729_, 1);
v___x_5731_ = ((lean_object*)(l_Lasm_JS_Function_ofSyncFn___closed__1));
v___x_5732_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v___x_5731_, v_a_5730_);
return v___x_5732_;
}
else
{
lean_object* v_a_5733_; lean_object* v___x_5735_; uint8_t v_isShared_5736_; uint8_t v_isSharedCheck_5740_; 
v_a_5733_ = lean_ctor_get(v___x_5729_, 0);
v_isSharedCheck_5740_ = !lean_is_exclusive(v___x_5729_);
if (v_isSharedCheck_5740_ == 0)
{
v___x_5735_ = v___x_5729_;
v_isShared_5736_ = v_isSharedCheck_5740_;
goto v_resetjp_5734_;
}
else
{
lean_inc(v_a_5733_);
lean_dec(v___x_5729_);
v___x_5735_ = lean_box(0);
v_isShared_5736_ = v_isSharedCheck_5740_;
goto v_resetjp_5734_;
}
v_resetjp_5734_:
{
lean_object* v___x_5738_; 
if (v_isShared_5736_ == 0)
{
v___x_5738_ = v___x_5735_;
goto v_reusejp_5737_;
}
else
{
lean_object* v_reuseFailAlloc_5739_; 
v_reuseFailAlloc_5739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5739_, 0, v_a_5733_);
v___x_5738_ = v_reuseFailAlloc_5739_;
goto v_reusejp_5737_;
}
v_reusejp_5737_:
{
return v___x_5738_;
}
}
}
}
else
{
lean_object* v_a_5741_; lean_object* v___x_5743_; uint8_t v_isShared_5744_; uint8_t v_isSharedCheck_5748_; 
v_a_5741_ = lean_ctor_get(v___x_5727_, 0);
v_isSharedCheck_5748_ = !lean_is_exclusive(v___x_5727_);
if (v_isSharedCheck_5748_ == 0)
{
v___x_5743_ = v___x_5727_;
v_isShared_5744_ = v_isSharedCheck_5748_;
goto v_resetjp_5742_;
}
else
{
lean_inc(v_a_5741_);
lean_dec(v___x_5727_);
v___x_5743_ = lean_box(0);
v_isShared_5744_ = v_isSharedCheck_5748_;
goto v_resetjp_5742_;
}
v_resetjp_5742_:
{
lean_object* v___x_5746_; 
if (v_isShared_5744_ == 0)
{
v___x_5746_ = v___x_5743_;
goto v_reusejp_5745_;
}
else
{
lean_object* v_reuseFailAlloc_5747_; 
v_reuseFailAlloc_5747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5747_, 0, v_a_5741_);
v___x_5746_ = v_reuseFailAlloc_5747_;
goto v_reusejp_5745_;
}
v_reusejp_5745_:
{
return v___x_5746_;
}
}
}
}
else
{
lean_object* v_a_5749_; lean_object* v___x_5751_; uint8_t v_isShared_5752_; uint8_t v_isSharedCheck_5756_; 
lean_dec_ref(v_f_5715_);
v_a_5749_ = lean_ctor_get(v___x_5719_, 0);
v_isSharedCheck_5756_ = !lean_is_exclusive(v___x_5719_);
if (v_isSharedCheck_5756_ == 0)
{
v___x_5751_ = v___x_5719_;
v_isShared_5752_ = v_isSharedCheck_5756_;
goto v_resetjp_5750_;
}
else
{
lean_inc(v_a_5749_);
lean_dec(v___x_5719_);
v___x_5751_ = lean_box(0);
v_isShared_5752_ = v_isSharedCheck_5756_;
goto v_resetjp_5750_;
}
v_resetjp_5750_:
{
lean_object* v___x_5754_; 
if (v_isShared_5752_ == 0)
{
v___x_5754_ = v___x_5751_;
goto v_reusejp_5753_;
}
else
{
lean_object* v_reuseFailAlloc_5755_; 
v_reuseFailAlloc_5755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5755_, 0, v_a_5749_);
v___x_5754_ = v_reuseFailAlloc_5755_;
goto v_reusejp_5753_;
}
v_reusejp_5753_:
{
return v___x_5754_;
}
}
}
}
else
{
lean_object* v_a_5757_; lean_object* v___x_5759_; uint8_t v_isShared_5760_; uint8_t v_isSharedCheck_5764_; 
lean_dec_ref(v_f_5715_);
v_a_5757_ = lean_ctor_get(v___x_5717_, 0);
v_isSharedCheck_5764_ = !lean_is_exclusive(v___x_5717_);
if (v_isSharedCheck_5764_ == 0)
{
v___x_5759_ = v___x_5717_;
v_isShared_5760_ = v_isSharedCheck_5764_;
goto v_resetjp_5758_;
}
else
{
lean_inc(v_a_5757_);
lean_dec(v___x_5717_);
v___x_5759_ = lean_box(0);
v_isShared_5760_ = v_isSharedCheck_5764_;
goto v_resetjp_5758_;
}
v_resetjp_5758_:
{
lean_object* v___x_5762_; 
if (v_isShared_5760_ == 0)
{
v___x_5762_ = v___x_5759_;
goto v_reusejp_5761_;
}
else
{
lean_object* v_reuseFailAlloc_5763_; 
v_reuseFailAlloc_5763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5763_, 0, v_a_5757_);
v___x_5762_ = v_reuseFailAlloc_5763_;
goto v_reusejp_5761_;
}
v_reusejp_5761_:
{
return v___x_5762_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn___boxed(lean_object* v_f_5765_, lean_object* v_a_5766_){
_start:
{
lean_object* v_res_5767_; 
v_res_5767_ = l_Lasm_JS_Function_ofSyncFn(v_f_5765_);
return v_res_5767_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg(lean_object* v_inst_5769_, lean_object* v_args_5770_, lean_object* v_i_5771_){
_start:
{
lean_object* v___x_5773_; lean_object* v___x_5774_; lean_object* v___x_5775_; lean_object* v___x_5776_; lean_object* v___x_5777_; lean_object* v___x_5778_; uint8_t v___x_5779_; 
v___x_5773_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg___closed__0));
v___x_5774_ = lean_unsigned_to_nat(1u);
v___x_5775_ = lean_nat_add(v_i_5771_, v___x_5774_);
v___x_5776_ = l_Nat_reprFast(v___x_5775_);
v___x_5777_ = lean_string_append(v___x_5773_, v___x_5776_);
lean_dec_ref(v___x_5776_);
v___x_5778_ = lean_array_get_size(v_args_5770_);
v___x_5779_ = lean_nat_dec_lt(v_i_5771_, v___x_5778_);
if (v___x_5779_ == 0)
{
lean_object* v___x_5780_; lean_object* v___x_5781_; 
v___x_5780_ = lean_box(0);
v___x_5781_ = l_Lasm_JS_decodeAs___redArg(v_inst_5769_, v___x_5777_, v___x_5780_);
lean_dec_ref(v___x_5777_);
return v___x_5781_;
}
else
{
lean_object* v___x_5782_; lean_object* v___x_5783_; 
v___x_5782_ = lean_array_fget_borrowed(v_args_5770_, v_i_5771_);
lean_inc(v___x_5782_);
v___x_5783_ = l_Lasm_JS_decodeAs___redArg(v_inst_5769_, v___x_5777_, v___x_5782_);
lean_dec_ref(v___x_5777_);
return v___x_5783_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg___boxed(lean_object* v_inst_5784_, lean_object* v_args_5785_, lean_object* v_i_5786_, lean_object* v_a_5787_){
_start:
{
lean_object* v_res_5788_; 
v_res_5788_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg(v_inst_5784_, v_args_5785_, v_i_5786_);
lean_dec(v_i_5786_);
lean_dec_ref(v_args_5785_);
return v_res_5788_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument(lean_object* v_00_u03b1_5789_, lean_object* v_inst_5790_, lean_object* v_args_5791_, lean_object* v_i_5792_){
_start:
{
lean_object* v___x_5794_; 
v___x_5794_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg(v_inst_5790_, v_args_5791_, v_i_5792_);
return v___x_5794_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___boxed(lean_object* v_00_u03b1_5795_, lean_object* v_inst_5796_, lean_object* v_args_5797_, lean_object* v_i_5798_, lean_object* v_a_5799_){
_start:
{
lean_object* v_res_5800_; 
v_res_5800_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument(v_00_u03b1_5795_, v_inst_5796_, v_args_5797_, v_i_5798_);
lean_dec(v_i_5798_);
lean_dec_ref(v_args_5797_);
return v_res_5800_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___lam__0(lean_object* v_inst_5801_, lean_object* v_x_5802_){
_start:
{
if (lean_obj_tag(v_x_5802_) == 0)
{
lean_object* v_a_5804_; lean_object* v___x_5806_; uint8_t v_isShared_5807_; uint8_t v_isSharedCheck_5812_; 
lean_dec_ref(v_inst_5801_);
v_a_5804_ = lean_ctor_get(v_x_5802_, 0);
v_isSharedCheck_5812_ = !lean_is_exclusive(v_x_5802_);
if (v_isSharedCheck_5812_ == 0)
{
v___x_5806_ = v_x_5802_;
v_isShared_5807_ = v_isSharedCheck_5812_;
goto v_resetjp_5805_;
}
else
{
lean_inc(v_a_5804_);
lean_dec(v_x_5802_);
v___x_5806_ = lean_box(0);
v_isShared_5807_ = v_isSharedCheck_5812_;
goto v_resetjp_5805_;
}
v_resetjp_5805_:
{
lean_object* v___x_5809_; 
if (v_isShared_5807_ == 0)
{
v___x_5809_ = v___x_5806_;
goto v_reusejp_5808_;
}
else
{
lean_object* v_reuseFailAlloc_5811_; 
v_reuseFailAlloc_5811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5811_, 0, v_a_5804_);
v___x_5809_ = v_reuseFailAlloc_5811_;
goto v_reusejp_5808_;
}
v_reusejp_5808_:
{
lean_object* v___x_5810_; 
v___x_5810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5810_, 0, v___x_5809_);
return v___x_5810_;
}
}
}
else
{
lean_object* v_a_5813_; lean_object* v___x_5815_; uint8_t v_isShared_5816_; uint8_t v_isSharedCheck_5822_; 
v_a_5813_ = lean_ctor_get(v_x_5802_, 0);
v_isSharedCheck_5822_ = !lean_is_exclusive(v_x_5802_);
if (v_isSharedCheck_5822_ == 0)
{
v___x_5815_ = v_x_5802_;
v_isShared_5816_ = v_isSharedCheck_5822_;
goto v_resetjp_5814_;
}
else
{
lean_inc(v_a_5813_);
lean_dec(v_x_5802_);
v___x_5815_ = lean_box(0);
v_isShared_5816_ = v_isSharedCheck_5822_;
goto v_resetjp_5814_;
}
v_resetjp_5814_:
{
lean_object* v___x_5817_; lean_object* v___x_5819_; 
v___x_5817_ = lean_apply_1(v_inst_5801_, v_a_5813_);
if (v_isShared_5816_ == 0)
{
lean_ctor_set(v___x_5815_, 0, v___x_5817_);
v___x_5819_ = v___x_5815_;
goto v_reusejp_5818_;
}
else
{
lean_object* v_reuseFailAlloc_5821_; 
v_reuseFailAlloc_5821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5821_, 0, v___x_5817_);
v___x_5819_ = v_reuseFailAlloc_5821_;
goto v_reusejp_5818_;
}
v_reusejp_5818_:
{
lean_object* v___x_5820_; 
v___x_5820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5820_, 0, v___x_5819_);
return v___x_5820_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___lam__0___boxed(lean_object* v_inst_5823_, lean_object* v_x_5824_, lean_object* v___y_5825_){
_start:
{
lean_object* v_res_5826_; 
v_res_5826_ = l_Lasm_JS_Function_ofFn1___redArg___lam__0(v_inst_5823_, v_x_5824_);
return v_res_5826_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___lam__1(lean_object* v_f_5827_, lean_object* v___f_5828_, lean_object* v_x_5829_){
_start:
{
if (lean_obj_tag(v_x_5829_) == 0)
{
lean_object* v_a_5831_; lean_object* v___x_5833_; uint8_t v_isShared_5834_; uint8_t v_isSharedCheck_5839_; 
lean_dec_ref(v___f_5828_);
lean_dec_ref(v_f_5827_);
v_a_5831_ = lean_ctor_get(v_x_5829_, 0);
v_isSharedCheck_5839_ = !lean_is_exclusive(v_x_5829_);
if (v_isSharedCheck_5839_ == 0)
{
v___x_5833_ = v_x_5829_;
v_isShared_5834_ = v_isSharedCheck_5839_;
goto v_resetjp_5832_;
}
else
{
lean_inc(v_a_5831_);
lean_dec(v_x_5829_);
v___x_5833_ = lean_box(0);
v_isShared_5834_ = v_isSharedCheck_5839_;
goto v_resetjp_5832_;
}
v_resetjp_5832_:
{
lean_object* v___x_5836_; 
if (v_isShared_5834_ == 0)
{
v___x_5836_ = v___x_5833_;
goto v_reusejp_5835_;
}
else
{
lean_object* v_reuseFailAlloc_5838_; 
v_reuseFailAlloc_5838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5838_, 0, v_a_5831_);
v___x_5836_ = v_reuseFailAlloc_5838_;
goto v_reusejp_5835_;
}
v_reusejp_5835_:
{
lean_object* v___x_5837_; 
v___x_5837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5837_, 0, v___x_5836_);
return v___x_5837_;
}
}
}
else
{
lean_object* v_a_5840_; lean_object* v___x_5841_; uint8_t v___x_5842_; lean_object* v___x_5843_; lean_object* v___x_5844_; 
v_a_5840_ = lean_ctor_get(v_x_5829_, 0);
lean_inc(v_a_5840_);
lean_dec_ref_known(v_x_5829_, 1);
v___x_5841_ = lean_unsigned_to_nat(0u);
v___x_5842_ = 0;
v___x_5843_ = lean_apply_2(v_f_5827_, v_a_5840_, lean_box(0));
v___x_5844_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5841_, v___x_5842_, v___x_5843_, v___f_5828_);
return v___x_5844_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___lam__1___boxed(lean_object* v_f_5845_, lean_object* v___f_5846_, lean_object* v_x_5847_, lean_object* v___y_5848_){
_start:
{
lean_object* v_res_5849_; 
v_res_5849_ = l_Lasm_JS_Function_ofFn1___redArg___lam__1(v_f_5845_, v___f_5846_, v_x_5847_);
return v_res_5849_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___lam__2(lean_object* v___f_5850_, lean_object* v_inst_5851_, lean_object* v_args_5852_){
_start:
{
lean_object* v___x_5854_; uint8_t v___x_5855_; lean_object* v_val_5857_; lean_object* v___x_5860_; 
v___x_5854_ = lean_unsigned_to_nat(0u);
v___x_5855_ = 0;
v___x_5860_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg(v_inst_5851_, v_args_5852_, v___x_5854_);
if (lean_obj_tag(v___x_5860_) == 0)
{
lean_object* v_a_5861_; lean_object* v___x_5863_; uint8_t v_isShared_5864_; uint8_t v_isSharedCheck_5868_; 
v_a_5861_ = lean_ctor_get(v___x_5860_, 0);
v_isSharedCheck_5868_ = !lean_is_exclusive(v___x_5860_);
if (v_isSharedCheck_5868_ == 0)
{
v___x_5863_ = v___x_5860_;
v_isShared_5864_ = v_isSharedCheck_5868_;
goto v_resetjp_5862_;
}
else
{
lean_inc(v_a_5861_);
lean_dec(v___x_5860_);
v___x_5863_ = lean_box(0);
v_isShared_5864_ = v_isSharedCheck_5868_;
goto v_resetjp_5862_;
}
v_resetjp_5862_:
{
lean_object* v___x_5866_; 
if (v_isShared_5864_ == 0)
{
lean_ctor_set_tag(v___x_5863_, 1);
v___x_5866_ = v___x_5863_;
goto v_reusejp_5865_;
}
else
{
lean_object* v_reuseFailAlloc_5867_; 
v_reuseFailAlloc_5867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5867_, 0, v_a_5861_);
v___x_5866_ = v_reuseFailAlloc_5867_;
goto v_reusejp_5865_;
}
v_reusejp_5865_:
{
v_val_5857_ = v___x_5866_;
goto v___jp_5856_;
}
}
}
else
{
lean_object* v_a_5869_; lean_object* v___x_5871_; uint8_t v_isShared_5872_; uint8_t v_isSharedCheck_5876_; 
v_a_5869_ = lean_ctor_get(v___x_5860_, 0);
v_isSharedCheck_5876_ = !lean_is_exclusive(v___x_5860_);
if (v_isSharedCheck_5876_ == 0)
{
v___x_5871_ = v___x_5860_;
v_isShared_5872_ = v_isSharedCheck_5876_;
goto v_resetjp_5870_;
}
else
{
lean_inc(v_a_5869_);
lean_dec(v___x_5860_);
v___x_5871_ = lean_box(0);
v_isShared_5872_ = v_isSharedCheck_5876_;
goto v_resetjp_5870_;
}
v_resetjp_5870_:
{
lean_object* v___x_5874_; 
if (v_isShared_5872_ == 0)
{
lean_ctor_set_tag(v___x_5871_, 0);
v___x_5874_ = v___x_5871_;
goto v_reusejp_5873_;
}
else
{
lean_object* v_reuseFailAlloc_5875_; 
v_reuseFailAlloc_5875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5875_, 0, v_a_5869_);
v___x_5874_ = v_reuseFailAlloc_5875_;
goto v_reusejp_5873_;
}
v_reusejp_5873_:
{
v_val_5857_ = v___x_5874_;
goto v___jp_5856_;
}
}
}
v___jp_5856_:
{
lean_object* v___x_5858_; lean_object* v___x_5859_; 
v___x_5858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5858_, 0, v_val_5857_);
v___x_5859_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5854_, v___x_5855_, v___x_5858_, v___f_5850_);
return v___x_5859_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___lam__2___boxed(lean_object* v___f_5877_, lean_object* v_inst_5878_, lean_object* v_args_5879_, lean_object* v___y_5880_){
_start:
{
lean_object* v_res_5881_; 
v_res_5881_ = l_Lasm_JS_Function_ofFn1___redArg___lam__2(v___f_5877_, v_inst_5878_, v_args_5879_);
lean_dec_ref(v_args_5879_);
return v_res_5881_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg(lean_object* v_inst_5882_, lean_object* v_inst_5883_, lean_object* v_f_5884_){
_start:
{
lean_object* v___f_5886_; lean_object* v___f_5887_; lean_object* v___f_5888_; lean_object* v___x_5889_; 
v___f_5886_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn1___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_5886_, 0, v_inst_5883_);
v___f_5887_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn1___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_5887_, 0, v_f_5884_);
lean_closure_set(v___f_5887_, 1, v___f_5886_);
v___f_5888_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn1___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_5888_, 0, v___f_5887_);
lean_closure_set(v___f_5888_, 1, v_inst_5882_);
v___x_5889_ = l_Lasm_JS_Function_ofFn(v___f_5888_);
return v___x_5889_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___boxed(lean_object* v_inst_5890_, lean_object* v_inst_5891_, lean_object* v_f_5892_, lean_object* v_a_5893_){
_start:
{
lean_object* v_res_5894_; 
v_res_5894_ = l_Lasm_JS_Function_ofFn1___redArg(v_inst_5890_, v_inst_5891_, v_f_5892_);
return v_res_5894_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1(lean_object* v_00_u03b1_5895_, lean_object* v_00_u03b2_5896_, lean_object* v_inst_5897_, lean_object* v_inst_5898_, lean_object* v_f_5899_){
_start:
{
lean_object* v___x_5901_; 
v___x_5901_ = l_Lasm_JS_Function_ofFn1___redArg(v_inst_5897_, v_inst_5898_, v_f_5899_);
return v___x_5901_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___boxed(lean_object* v_00_u03b1_5902_, lean_object* v_00_u03b2_5903_, lean_object* v_inst_5904_, lean_object* v_inst_5905_, lean_object* v_f_5906_, lean_object* v_a_5907_){
_start:
{
lean_object* v_res_5908_; 
v_res_5908_ = l_Lasm_JS_Function_ofFn1(v_00_u03b1_5902_, v_00_u03b2_5903_, v_inst_5904_, v_inst_5905_, v_f_5906_);
return v_res_5908_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___lam__1(lean_object* v_f_5909_, lean_object* v_a_5910_, lean_object* v___f_5911_, lean_object* v_x_5912_){
_start:
{
if (lean_obj_tag(v_x_5912_) == 0)
{
lean_object* v_a_5914_; lean_object* v___x_5916_; uint8_t v_isShared_5917_; uint8_t v_isSharedCheck_5922_; 
lean_dec_ref(v___f_5911_);
lean_dec(v_a_5910_);
lean_dec_ref(v_f_5909_);
v_a_5914_ = lean_ctor_get(v_x_5912_, 0);
v_isSharedCheck_5922_ = !lean_is_exclusive(v_x_5912_);
if (v_isSharedCheck_5922_ == 0)
{
v___x_5916_ = v_x_5912_;
v_isShared_5917_ = v_isSharedCheck_5922_;
goto v_resetjp_5915_;
}
else
{
lean_inc(v_a_5914_);
lean_dec(v_x_5912_);
v___x_5916_ = lean_box(0);
v_isShared_5917_ = v_isSharedCheck_5922_;
goto v_resetjp_5915_;
}
v_resetjp_5915_:
{
lean_object* v___x_5919_; 
if (v_isShared_5917_ == 0)
{
v___x_5919_ = v___x_5916_;
goto v_reusejp_5918_;
}
else
{
lean_object* v_reuseFailAlloc_5921_; 
v_reuseFailAlloc_5921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5921_, 0, v_a_5914_);
v___x_5919_ = v_reuseFailAlloc_5921_;
goto v_reusejp_5918_;
}
v_reusejp_5918_:
{
lean_object* v___x_5920_; 
v___x_5920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5920_, 0, v___x_5919_);
return v___x_5920_;
}
}
}
else
{
lean_object* v_a_5923_; lean_object* v___x_5924_; uint8_t v___x_5925_; lean_object* v___x_5926_; lean_object* v___x_5927_; 
v_a_5923_ = lean_ctor_get(v_x_5912_, 0);
lean_inc(v_a_5923_);
lean_dec_ref_known(v_x_5912_, 1);
v___x_5924_ = lean_unsigned_to_nat(0u);
v___x_5925_ = 0;
v___x_5926_ = lean_apply_3(v_f_5909_, v_a_5910_, v_a_5923_, lean_box(0));
v___x_5927_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5924_, v___x_5925_, v___x_5926_, v___f_5911_);
return v___x_5927_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___lam__1___boxed(lean_object* v_f_5928_, lean_object* v_a_5929_, lean_object* v___f_5930_, lean_object* v_x_5931_, lean_object* v___y_5932_){
_start:
{
lean_object* v_res_5933_; 
v_res_5933_ = l_Lasm_JS_Function_ofFn2___redArg___lam__1(v_f_5928_, v_a_5929_, v___f_5930_, v_x_5931_);
return v_res_5933_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___lam__0(lean_object* v_f_5934_, lean_object* v___f_5935_, lean_object* v_inst_5936_, lean_object* v_args_5937_, lean_object* v_x_5938_){
_start:
{
if (lean_obj_tag(v_x_5938_) == 0)
{
lean_object* v_a_5940_; lean_object* v___x_5942_; uint8_t v_isShared_5943_; uint8_t v_isSharedCheck_5948_; 
lean_dec_ref(v_inst_5936_);
lean_dec_ref(v___f_5935_);
lean_dec_ref(v_f_5934_);
v_a_5940_ = lean_ctor_get(v_x_5938_, 0);
v_isSharedCheck_5948_ = !lean_is_exclusive(v_x_5938_);
if (v_isSharedCheck_5948_ == 0)
{
v___x_5942_ = v_x_5938_;
v_isShared_5943_ = v_isSharedCheck_5948_;
goto v_resetjp_5941_;
}
else
{
lean_inc(v_a_5940_);
lean_dec(v_x_5938_);
v___x_5942_ = lean_box(0);
v_isShared_5943_ = v_isSharedCheck_5948_;
goto v_resetjp_5941_;
}
v_resetjp_5941_:
{
lean_object* v___x_5945_; 
if (v_isShared_5943_ == 0)
{
v___x_5945_ = v___x_5942_;
goto v_reusejp_5944_;
}
else
{
lean_object* v_reuseFailAlloc_5947_; 
v_reuseFailAlloc_5947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5947_, 0, v_a_5940_);
v___x_5945_ = v_reuseFailAlloc_5947_;
goto v_reusejp_5944_;
}
v_reusejp_5944_:
{
lean_object* v___x_5946_; 
v___x_5946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5946_, 0, v___x_5945_);
return v___x_5946_;
}
}
}
else
{
lean_object* v_a_5949_; lean_object* v___x_5951_; uint8_t v_isShared_5952_; uint8_t v_isSharedCheck_5970_; 
v_a_5949_ = lean_ctor_get(v_x_5938_, 0);
v_isSharedCheck_5970_ = !lean_is_exclusive(v_x_5938_);
if (v_isSharedCheck_5970_ == 0)
{
v___x_5951_ = v_x_5938_;
v_isShared_5952_ = v_isSharedCheck_5970_;
goto v_resetjp_5950_;
}
else
{
lean_inc(v_a_5949_);
lean_dec(v_x_5938_);
v___x_5951_ = lean_box(0);
v_isShared_5952_ = v_isSharedCheck_5970_;
goto v_resetjp_5950_;
}
v_resetjp_5950_:
{
lean_object* v___f_5953_; lean_object* v___x_5954_; lean_object* v___x_5955_; uint8_t v___x_5956_; lean_object* v_val_5958_; lean_object* v___x_5961_; 
v___f_5953_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn2___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_5953_, 0, v_f_5934_);
lean_closure_set(v___f_5953_, 1, v_a_5949_);
lean_closure_set(v___f_5953_, 2, v___f_5935_);
v___x_5954_ = lean_unsigned_to_nat(1u);
v___x_5955_ = lean_unsigned_to_nat(0u);
v___x_5956_ = 0;
v___x_5961_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg(v_inst_5936_, v_args_5937_, v___x_5954_);
if (lean_obj_tag(v___x_5961_) == 0)
{
lean_object* v_a_5962_; lean_object* v___x_5964_; 
v_a_5962_ = lean_ctor_get(v___x_5961_, 0);
lean_inc(v_a_5962_);
lean_dec_ref_known(v___x_5961_, 1);
if (v_isShared_5952_ == 0)
{
lean_ctor_set(v___x_5951_, 0, v_a_5962_);
v___x_5964_ = v___x_5951_;
goto v_reusejp_5963_;
}
else
{
lean_object* v_reuseFailAlloc_5965_; 
v_reuseFailAlloc_5965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5965_, 0, v_a_5962_);
v___x_5964_ = v_reuseFailAlloc_5965_;
goto v_reusejp_5963_;
}
v_reusejp_5963_:
{
v_val_5958_ = v___x_5964_;
goto v___jp_5957_;
}
}
else
{
lean_object* v_a_5966_; lean_object* v___x_5968_; 
v_a_5966_ = lean_ctor_get(v___x_5961_, 0);
lean_inc(v_a_5966_);
lean_dec_ref_known(v___x_5961_, 1);
if (v_isShared_5952_ == 0)
{
lean_ctor_set_tag(v___x_5951_, 0);
lean_ctor_set(v___x_5951_, 0, v_a_5966_);
v___x_5968_ = v___x_5951_;
goto v_reusejp_5967_;
}
else
{
lean_object* v_reuseFailAlloc_5969_; 
v_reuseFailAlloc_5969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5969_, 0, v_a_5966_);
v___x_5968_ = v_reuseFailAlloc_5969_;
goto v_reusejp_5967_;
}
v_reusejp_5967_:
{
v_val_5958_ = v___x_5968_;
goto v___jp_5957_;
}
}
v___jp_5957_:
{
lean_object* v___x_5959_; lean_object* v___x_5960_; 
v___x_5959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5959_, 0, v_val_5958_);
v___x_5960_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5955_, v___x_5956_, v___x_5959_, v___f_5953_);
return v___x_5960_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___lam__0___boxed(lean_object* v_f_5971_, lean_object* v___f_5972_, lean_object* v_inst_5973_, lean_object* v_args_5974_, lean_object* v_x_5975_, lean_object* v___y_5976_){
_start:
{
lean_object* v_res_5977_; 
v_res_5977_ = l_Lasm_JS_Function_ofFn2___redArg___lam__0(v_f_5971_, v___f_5972_, v_inst_5973_, v_args_5974_, v_x_5975_);
lean_dec_ref(v_args_5974_);
return v_res_5977_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___lam__2(lean_object* v_f_5978_, lean_object* v___f_5979_, lean_object* v_inst_5980_, lean_object* v_inst_5981_, lean_object* v_args_5982_){
_start:
{
lean_object* v___f_5984_; lean_object* v___x_5985_; uint8_t v___x_5986_; lean_object* v_val_5988_; lean_object* v___x_5991_; 
lean_inc_ref(v_args_5982_);
v___f_5984_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn2___redArg___lam__0___boxed), 6, 4);
lean_closure_set(v___f_5984_, 0, v_f_5978_);
lean_closure_set(v___f_5984_, 1, v___f_5979_);
lean_closure_set(v___f_5984_, 2, v_inst_5980_);
lean_closure_set(v___f_5984_, 3, v_args_5982_);
v___x_5985_ = lean_unsigned_to_nat(0u);
v___x_5986_ = 0;
v___x_5991_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg(v_inst_5981_, v_args_5982_, v___x_5985_);
lean_dec_ref(v_args_5982_);
if (lean_obj_tag(v___x_5991_) == 0)
{
lean_object* v_a_5992_; lean_object* v___x_5994_; uint8_t v_isShared_5995_; uint8_t v_isSharedCheck_5999_; 
v_a_5992_ = lean_ctor_get(v___x_5991_, 0);
v_isSharedCheck_5999_ = !lean_is_exclusive(v___x_5991_);
if (v_isSharedCheck_5999_ == 0)
{
v___x_5994_ = v___x_5991_;
v_isShared_5995_ = v_isSharedCheck_5999_;
goto v_resetjp_5993_;
}
else
{
lean_inc(v_a_5992_);
lean_dec(v___x_5991_);
v___x_5994_ = lean_box(0);
v_isShared_5995_ = v_isSharedCheck_5999_;
goto v_resetjp_5993_;
}
v_resetjp_5993_:
{
lean_object* v___x_5997_; 
if (v_isShared_5995_ == 0)
{
lean_ctor_set_tag(v___x_5994_, 1);
v___x_5997_ = v___x_5994_;
goto v_reusejp_5996_;
}
else
{
lean_object* v_reuseFailAlloc_5998_; 
v_reuseFailAlloc_5998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5998_, 0, v_a_5992_);
v___x_5997_ = v_reuseFailAlloc_5998_;
goto v_reusejp_5996_;
}
v_reusejp_5996_:
{
v_val_5988_ = v___x_5997_;
goto v___jp_5987_;
}
}
}
else
{
lean_object* v_a_6000_; lean_object* v___x_6002_; uint8_t v_isShared_6003_; uint8_t v_isSharedCheck_6007_; 
v_a_6000_ = lean_ctor_get(v___x_5991_, 0);
v_isSharedCheck_6007_ = !lean_is_exclusive(v___x_5991_);
if (v_isSharedCheck_6007_ == 0)
{
v___x_6002_ = v___x_5991_;
v_isShared_6003_ = v_isSharedCheck_6007_;
goto v_resetjp_6001_;
}
else
{
lean_inc(v_a_6000_);
lean_dec(v___x_5991_);
v___x_6002_ = lean_box(0);
v_isShared_6003_ = v_isSharedCheck_6007_;
goto v_resetjp_6001_;
}
v_resetjp_6001_:
{
lean_object* v___x_6005_; 
if (v_isShared_6003_ == 0)
{
lean_ctor_set_tag(v___x_6002_, 0);
v___x_6005_ = v___x_6002_;
goto v_reusejp_6004_;
}
else
{
lean_object* v_reuseFailAlloc_6006_; 
v_reuseFailAlloc_6006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6006_, 0, v_a_6000_);
v___x_6005_ = v_reuseFailAlloc_6006_;
goto v_reusejp_6004_;
}
v_reusejp_6004_:
{
v_val_5988_ = v___x_6005_;
goto v___jp_5987_;
}
}
}
v___jp_5987_:
{
lean_object* v___x_5989_; lean_object* v___x_5990_; 
v___x_5989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5989_, 0, v_val_5988_);
v___x_5990_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5985_, v___x_5986_, v___x_5989_, v___f_5984_);
return v___x_5990_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___lam__2___boxed(lean_object* v_f_6008_, lean_object* v___f_6009_, lean_object* v_inst_6010_, lean_object* v_inst_6011_, lean_object* v_args_6012_, lean_object* v___y_6013_){
_start:
{
lean_object* v_res_6014_; 
v_res_6014_ = l_Lasm_JS_Function_ofFn2___redArg___lam__2(v_f_6008_, v___f_6009_, v_inst_6010_, v_inst_6011_, v_args_6012_);
return v_res_6014_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg(lean_object* v_inst_6015_, lean_object* v_inst_6016_, lean_object* v_inst_6017_, lean_object* v_f_6018_){
_start:
{
lean_object* v___f_6020_; lean_object* v___f_6021_; lean_object* v___x_6022_; 
v___f_6020_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn1___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_6020_, 0, v_inst_6017_);
v___f_6021_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn2___redArg___lam__2___boxed), 6, 4);
lean_closure_set(v___f_6021_, 0, v_f_6018_);
lean_closure_set(v___f_6021_, 1, v___f_6020_);
lean_closure_set(v___f_6021_, 2, v_inst_6016_);
lean_closure_set(v___f_6021_, 3, v_inst_6015_);
v___x_6022_ = l_Lasm_JS_Function_ofFn(v___f_6021_);
return v___x_6022_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___boxed(lean_object* v_inst_6023_, lean_object* v_inst_6024_, lean_object* v_inst_6025_, lean_object* v_f_6026_, lean_object* v_a_6027_){
_start:
{
lean_object* v_res_6028_; 
v_res_6028_ = l_Lasm_JS_Function_ofFn2___redArg(v_inst_6023_, v_inst_6024_, v_inst_6025_, v_f_6026_);
return v_res_6028_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2(lean_object* v_00_u03b1_6029_, lean_object* v_00_u03b2_6030_, lean_object* v_00_u03b3_6031_, lean_object* v_inst_6032_, lean_object* v_inst_6033_, lean_object* v_inst_6034_, lean_object* v_f_6035_){
_start:
{
lean_object* v___x_6037_; 
v___x_6037_ = l_Lasm_JS_Function_ofFn2___redArg(v_inst_6032_, v_inst_6033_, v_inst_6034_, v_f_6035_);
return v___x_6037_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___boxed(lean_object* v_00_u03b1_6038_, lean_object* v_00_u03b2_6039_, lean_object* v_00_u03b3_6040_, lean_object* v_inst_6041_, lean_object* v_inst_6042_, lean_object* v_inst_6043_, lean_object* v_f_6044_, lean_object* v_a_6045_){
_start:
{
lean_object* v_res_6046_; 
v_res_6046_ = l_Lasm_JS_Function_ofFn2(v_00_u03b1_6038_, v_00_u03b2_6039_, v_00_u03b3_6040_, v_inst_6041_, v_inst_6042_, v_inst_6043_, v_f_6044_);
return v_res_6046_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn2___redArg___lam__0(lean_object* v_inst_6047_, lean_object* v_inst_6048_, lean_object* v_f_6049_, lean_object* v_inst_6050_, lean_object* v_args_6051_){
_start:
{
lean_object* v___x_6053_; lean_object* v___x_6054_; 
v___x_6053_ = lean_unsigned_to_nat(0u);
v___x_6054_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg(v_inst_6047_, v_args_6051_, v___x_6053_);
if (lean_obj_tag(v___x_6054_) == 0)
{
lean_object* v_a_6055_; lean_object* v___x_6056_; lean_object* v___x_6057_; 
v_a_6055_ = lean_ctor_get(v___x_6054_, 0);
lean_inc(v_a_6055_);
lean_dec_ref_known(v___x_6054_, 1);
v___x_6056_ = lean_unsigned_to_nat(1u);
v___x_6057_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg(v_inst_6048_, v_args_6051_, v___x_6056_);
if (lean_obj_tag(v___x_6057_) == 0)
{
lean_object* v_a_6058_; lean_object* v___x_6059_; 
v_a_6058_ = lean_ctor_get(v___x_6057_, 0);
lean_inc(v_a_6058_);
lean_dec_ref_known(v___x_6057_, 1);
v___x_6059_ = lean_apply_3(v_f_6049_, v_a_6055_, v_a_6058_, lean_box(0));
if (lean_obj_tag(v___x_6059_) == 0)
{
lean_object* v_a_6060_; lean_object* v___x_6062_; uint8_t v_isShared_6063_; uint8_t v_isSharedCheck_6068_; 
v_a_6060_ = lean_ctor_get(v___x_6059_, 0);
v_isSharedCheck_6068_ = !lean_is_exclusive(v___x_6059_);
if (v_isSharedCheck_6068_ == 0)
{
v___x_6062_ = v___x_6059_;
v_isShared_6063_ = v_isSharedCheck_6068_;
goto v_resetjp_6061_;
}
else
{
lean_inc(v_a_6060_);
lean_dec(v___x_6059_);
v___x_6062_ = lean_box(0);
v_isShared_6063_ = v_isSharedCheck_6068_;
goto v_resetjp_6061_;
}
v_resetjp_6061_:
{
lean_object* v___x_6064_; lean_object* v___x_6066_; 
v___x_6064_ = lean_apply_1(v_inst_6050_, v_a_6060_);
if (v_isShared_6063_ == 0)
{
lean_ctor_set(v___x_6062_, 0, v___x_6064_);
v___x_6066_ = v___x_6062_;
goto v_reusejp_6065_;
}
else
{
lean_object* v_reuseFailAlloc_6067_; 
v_reuseFailAlloc_6067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6067_, 0, v___x_6064_);
v___x_6066_ = v_reuseFailAlloc_6067_;
goto v_reusejp_6065_;
}
v_reusejp_6065_:
{
return v___x_6066_;
}
}
}
else
{
lean_object* v_a_6069_; lean_object* v___x_6071_; uint8_t v_isShared_6072_; uint8_t v_isSharedCheck_6076_; 
lean_dec_ref(v_inst_6050_);
v_a_6069_ = lean_ctor_get(v___x_6059_, 0);
v_isSharedCheck_6076_ = !lean_is_exclusive(v___x_6059_);
if (v_isSharedCheck_6076_ == 0)
{
v___x_6071_ = v___x_6059_;
v_isShared_6072_ = v_isSharedCheck_6076_;
goto v_resetjp_6070_;
}
else
{
lean_inc(v_a_6069_);
lean_dec(v___x_6059_);
v___x_6071_ = lean_box(0);
v_isShared_6072_ = v_isSharedCheck_6076_;
goto v_resetjp_6070_;
}
v_resetjp_6070_:
{
lean_object* v___x_6074_; 
if (v_isShared_6072_ == 0)
{
v___x_6074_ = v___x_6071_;
goto v_reusejp_6073_;
}
else
{
lean_object* v_reuseFailAlloc_6075_; 
v_reuseFailAlloc_6075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6075_, 0, v_a_6069_);
v___x_6074_ = v_reuseFailAlloc_6075_;
goto v_reusejp_6073_;
}
v_reusejp_6073_:
{
return v___x_6074_;
}
}
}
}
else
{
lean_object* v_a_6077_; lean_object* v___x_6079_; uint8_t v_isShared_6080_; uint8_t v_isSharedCheck_6084_; 
lean_dec(v_a_6055_);
lean_dec_ref(v_inst_6050_);
lean_dec_ref(v_f_6049_);
v_a_6077_ = lean_ctor_get(v___x_6057_, 0);
v_isSharedCheck_6084_ = !lean_is_exclusive(v___x_6057_);
if (v_isSharedCheck_6084_ == 0)
{
v___x_6079_ = v___x_6057_;
v_isShared_6080_ = v_isSharedCheck_6084_;
goto v_resetjp_6078_;
}
else
{
lean_inc(v_a_6077_);
lean_dec(v___x_6057_);
v___x_6079_ = lean_box(0);
v_isShared_6080_ = v_isSharedCheck_6084_;
goto v_resetjp_6078_;
}
v_resetjp_6078_:
{
lean_object* v___x_6082_; 
if (v_isShared_6080_ == 0)
{
v___x_6082_ = v___x_6079_;
goto v_reusejp_6081_;
}
else
{
lean_object* v_reuseFailAlloc_6083_; 
v_reuseFailAlloc_6083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6083_, 0, v_a_6077_);
v___x_6082_ = v_reuseFailAlloc_6083_;
goto v_reusejp_6081_;
}
v_reusejp_6081_:
{
return v___x_6082_;
}
}
}
}
else
{
lean_object* v_a_6085_; lean_object* v___x_6087_; uint8_t v_isShared_6088_; uint8_t v_isSharedCheck_6092_; 
lean_dec_ref(v_inst_6050_);
lean_dec_ref(v_f_6049_);
lean_dec_ref(v_inst_6048_);
v_a_6085_ = lean_ctor_get(v___x_6054_, 0);
v_isSharedCheck_6092_ = !lean_is_exclusive(v___x_6054_);
if (v_isSharedCheck_6092_ == 0)
{
v___x_6087_ = v___x_6054_;
v_isShared_6088_ = v_isSharedCheck_6092_;
goto v_resetjp_6086_;
}
else
{
lean_inc(v_a_6085_);
lean_dec(v___x_6054_);
v___x_6087_ = lean_box(0);
v_isShared_6088_ = v_isSharedCheck_6092_;
goto v_resetjp_6086_;
}
v_resetjp_6086_:
{
lean_object* v___x_6090_; 
if (v_isShared_6088_ == 0)
{
v___x_6090_ = v___x_6087_;
goto v_reusejp_6089_;
}
else
{
lean_object* v_reuseFailAlloc_6091_; 
v_reuseFailAlloc_6091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6091_, 0, v_a_6085_);
v___x_6090_ = v_reuseFailAlloc_6091_;
goto v_reusejp_6089_;
}
v_reusejp_6089_:
{
return v___x_6090_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn2___redArg___lam__0___boxed(lean_object* v_inst_6093_, lean_object* v_inst_6094_, lean_object* v_f_6095_, lean_object* v_inst_6096_, lean_object* v_args_6097_, lean_object* v___y_6098_){
_start:
{
lean_object* v_res_6099_; 
v_res_6099_ = l_Lasm_JS_Function_ofSyncFn2___redArg___lam__0(v_inst_6093_, v_inst_6094_, v_f_6095_, v_inst_6096_, v_args_6097_);
lean_dec_ref(v_args_6097_);
return v_res_6099_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn2___redArg(lean_object* v_inst_6100_, lean_object* v_inst_6101_, lean_object* v_inst_6102_, lean_object* v_f_6103_){
_start:
{
lean_object* v___f_6105_; lean_object* v___x_6106_; 
v___f_6105_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofSyncFn2___redArg___lam__0___boxed), 6, 4);
lean_closure_set(v___f_6105_, 0, v_inst_6100_);
lean_closure_set(v___f_6105_, 1, v_inst_6101_);
lean_closure_set(v___f_6105_, 2, v_f_6103_);
lean_closure_set(v___f_6105_, 3, v_inst_6102_);
v___x_6106_ = l_Lasm_JS_Function_ofSyncFn(v___f_6105_);
return v___x_6106_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn2___redArg___boxed(lean_object* v_inst_6107_, lean_object* v_inst_6108_, lean_object* v_inst_6109_, lean_object* v_f_6110_, lean_object* v_a_6111_){
_start:
{
lean_object* v_res_6112_; 
v_res_6112_ = l_Lasm_JS_Function_ofSyncFn2___redArg(v_inst_6107_, v_inst_6108_, v_inst_6109_, v_f_6110_);
return v_res_6112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn2(lean_object* v_00_u03b1_6113_, lean_object* v_00_u03b2_6114_, lean_object* v_00_u03b3_6115_, lean_object* v_inst_6116_, lean_object* v_inst_6117_, lean_object* v_inst_6118_, lean_object* v_f_6119_){
_start:
{
lean_object* v___x_6121_; 
v___x_6121_ = l_Lasm_JS_Function_ofSyncFn2___redArg(v_inst_6116_, v_inst_6117_, v_inst_6118_, v_f_6119_);
return v___x_6121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn2___boxed(lean_object* v_00_u03b1_6122_, lean_object* v_00_u03b2_6123_, lean_object* v_00_u03b3_6124_, lean_object* v_inst_6125_, lean_object* v_inst_6126_, lean_object* v_inst_6127_, lean_object* v_f_6128_, lean_object* v_a_6129_){
_start:
{
lean_object* v_res_6130_; 
v_res_6130_ = l_Lasm_JS_Function_ofSyncFn2(v_00_u03b1_6122_, v_00_u03b2_6123_, v_00_u03b3_6124_, v_inst_6125_, v_inst_6126_, v_inst_6127_, v_f_6128_);
return v_res_6130_;
}
}
static lean_object* _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_6144_; lean_object* v___x_6145_; 
v___x_6144_ = lean_unsigned_to_nat(8u);
v___x_6145_ = lean_nat_to_int(v___x_6144_);
return v___x_6145_;
}
}
static lean_object* _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_6152_; lean_object* v___x_6153_; 
v___x_6152_ = lean_unsigned_to_nat(10u);
v___x_6153_ = lean_nat_to_int(v___x_6152_);
return v___x_6153_;
}
}
static lean_object* _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_6160_; lean_object* v___x_6161_; 
v___x_6160_ = lean_unsigned_to_nat(13u);
v___x_6161_ = lean_nat_to_int(v___x_6160_);
return v___x_6161_;
}
}
static lean_object* _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__20(void){
_start:
{
lean_object* v___x_6165_; lean_object* v___x_6166_; 
v___x_6165_ = lean_unsigned_to_nat(9u);
v___x_6166_ = lean_nat_to_int(v___x_6165_);
return v___x_6166_;
}
}
static lean_object* _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__22(void){
_start:
{
lean_object* v___x_6168_; lean_object* v___x_6169_; 
v___x_6168_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__0));
v___x_6169_ = lean_string_length(v___x_6168_);
return v___x_6169_;
}
}
static lean_object* _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__23(void){
_start:
{
lean_object* v___x_6170_; lean_object* v___x_6171_; 
v___x_6170_ = lean_obj_once(&l_Lasm_JS_instReprBinding_repr___redArg___closed__22, &l_Lasm_JS_instReprBinding_repr___redArg___closed__22_once, _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__22);
v___x_6171_ = lean_nat_to_int(v___x_6170_);
return v___x_6171_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instReprBinding_repr___redArg(lean_object* v_x_6176_){
_start:
{
lean_object* v_name_6177_; lean_object* v_module_6178_; lean_object* v_path_6179_; uint8_t v_construct_6180_; lean_object* v_arity_6181_; lean_object* v___x_6182_; lean_object* v___x_6183_; lean_object* v___x_6184_; lean_object* v___x_6185_; lean_object* v___x_6186_; lean_object* v___x_6187_; uint8_t v___x_6188_; lean_object* v___x_6189_; lean_object* v___x_6190_; lean_object* v___x_6191_; lean_object* v___x_6192_; lean_object* v___x_6193_; lean_object* v___x_6194_; lean_object* v___x_6195_; lean_object* v___x_6196_; lean_object* v___x_6197_; lean_object* v___x_6198_; lean_object* v___x_6199_; lean_object* v___x_6200_; lean_object* v___x_6201_; lean_object* v___x_6202_; lean_object* v___x_6203_; lean_object* v___x_6204_; lean_object* v___x_6205_; lean_object* v___x_6206_; lean_object* v___x_6207_; lean_object* v___x_6208_; lean_object* v___x_6209_; lean_object* v___x_6210_; lean_object* v___x_6211_; lean_object* v___x_6212_; lean_object* v___x_6213_; lean_object* v___x_6214_; lean_object* v___x_6215_; lean_object* v___x_6216_; lean_object* v___x_6217_; lean_object* v___x_6218_; lean_object* v___x_6219_; lean_object* v___x_6220_; lean_object* v___x_6221_; lean_object* v___x_6222_; lean_object* v___x_6223_; lean_object* v___x_6224_; lean_object* v___x_6225_; lean_object* v___x_6226_; lean_object* v___x_6227_; lean_object* v___x_6228_; lean_object* v___x_6229_; lean_object* v___x_6230_; lean_object* v___x_6231_; lean_object* v___x_6232_; lean_object* v___x_6233_; lean_object* v___x_6234_; lean_object* v___x_6235_; lean_object* v___x_6236_; lean_object* v___x_6237_; lean_object* v___x_6238_; lean_object* v___x_6239_; lean_object* v___x_6240_; lean_object* v___x_6241_; 
v_name_6177_ = lean_ctor_get(v_x_6176_, 0);
lean_inc_ref(v_name_6177_);
v_module_6178_ = lean_ctor_get(v_x_6176_, 1);
lean_inc_ref(v_module_6178_);
v_path_6179_ = lean_ctor_get(v_x_6176_, 2);
lean_inc_ref(v_path_6179_);
v_construct_6180_ = lean_ctor_get_uint8(v_x_6176_, sizeof(void*)*4);
v_arity_6181_ = lean_ctor_get(v_x_6176_, 3);
lean_inc(v_arity_6181_);
lean_dec_ref(v_x_6176_);
v___x_6182_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__5));
v___x_6183_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__6));
v___x_6184_ = lean_obj_once(&l_Lasm_JS_instReprBinding_repr___redArg___closed__7, &l_Lasm_JS_instReprBinding_repr___redArg___closed__7_once, _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__7);
v___x_6185_ = l_String_quote(v_name_6177_);
v___x_6186_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_6186_, 0, v___x_6185_);
v___x_6187_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6187_, 0, v___x_6184_);
lean_ctor_set(v___x_6187_, 1, v___x_6186_);
v___x_6188_ = 0;
v___x_6189_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6189_, 0, v___x_6187_);
lean_ctor_set_uint8(v___x_6189_, sizeof(void*)*1, v___x_6188_);
v___x_6190_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6190_, 0, v___x_6183_);
lean_ctor_set(v___x_6190_, 1, v___x_6189_);
v___x_6191_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__9));
v___x_6192_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6192_, 0, v___x_6190_);
lean_ctor_set(v___x_6192_, 1, v___x_6191_);
v___x_6193_ = lean_box(1);
v___x_6194_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6194_, 0, v___x_6192_);
lean_ctor_set(v___x_6194_, 1, v___x_6193_);
v___x_6195_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__11));
v___x_6196_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6196_, 0, v___x_6194_);
lean_ctor_set(v___x_6196_, 1, v___x_6195_);
v___x_6197_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6197_, 0, v___x_6196_);
lean_ctor_set(v___x_6197_, 1, v___x_6182_);
v___x_6198_ = lean_obj_once(&l_Lasm_JS_instReprBinding_repr___redArg___closed__12, &l_Lasm_JS_instReprBinding_repr___redArg___closed__12_once, _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__12);
v___x_6199_ = l_String_quote(v_module_6178_);
v___x_6200_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_6200_, 0, v___x_6199_);
v___x_6201_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6201_, 0, v___x_6198_);
lean_ctor_set(v___x_6201_, 1, v___x_6200_);
v___x_6202_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6202_, 0, v___x_6201_);
lean_ctor_set_uint8(v___x_6202_, sizeof(void*)*1, v___x_6188_);
v___x_6203_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6203_, 0, v___x_6197_);
lean_ctor_set(v___x_6203_, 1, v___x_6202_);
v___x_6204_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6204_, 0, v___x_6203_);
lean_ctor_set(v___x_6204_, 1, v___x_6191_);
v___x_6205_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6205_, 0, v___x_6204_);
lean_ctor_set(v___x_6205_, 1, v___x_6193_);
v___x_6206_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__14));
v___x_6207_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6207_, 0, v___x_6205_);
lean_ctor_set(v___x_6207_, 1, v___x_6206_);
v___x_6208_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6208_, 0, v___x_6207_);
lean_ctor_set(v___x_6208_, 1, v___x_6182_);
v___x_6209_ = l_String_quote(v_path_6179_);
v___x_6210_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_6210_, 0, v___x_6209_);
v___x_6211_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6211_, 0, v___x_6184_);
lean_ctor_set(v___x_6211_, 1, v___x_6210_);
v___x_6212_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6212_, 0, v___x_6211_);
lean_ctor_set_uint8(v___x_6212_, sizeof(void*)*1, v___x_6188_);
v___x_6213_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6213_, 0, v___x_6208_);
lean_ctor_set(v___x_6213_, 1, v___x_6212_);
v___x_6214_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6214_, 0, v___x_6213_);
lean_ctor_set(v___x_6214_, 1, v___x_6191_);
v___x_6215_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6215_, 0, v___x_6214_);
lean_ctor_set(v___x_6215_, 1, v___x_6193_);
v___x_6216_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__16));
v___x_6217_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6217_, 0, v___x_6215_);
lean_ctor_set(v___x_6217_, 1, v___x_6216_);
v___x_6218_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6218_, 0, v___x_6217_);
lean_ctor_set(v___x_6218_, 1, v___x_6182_);
v___x_6219_ = lean_obj_once(&l_Lasm_JS_instReprBinding_repr___redArg___closed__17, &l_Lasm_JS_instReprBinding_repr___redArg___closed__17_once, _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__17);
v___x_6220_ = l_Bool_repr___redArg(v_construct_6180_);
v___x_6221_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6221_, 0, v___x_6219_);
lean_ctor_set(v___x_6221_, 1, v___x_6220_);
v___x_6222_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6222_, 0, v___x_6221_);
lean_ctor_set_uint8(v___x_6222_, sizeof(void*)*1, v___x_6188_);
v___x_6223_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6223_, 0, v___x_6218_);
lean_ctor_set(v___x_6223_, 1, v___x_6222_);
v___x_6224_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6224_, 0, v___x_6223_);
lean_ctor_set(v___x_6224_, 1, v___x_6191_);
v___x_6225_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6225_, 0, v___x_6224_);
lean_ctor_set(v___x_6225_, 1, v___x_6193_);
v___x_6226_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__19));
v___x_6227_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6227_, 0, v___x_6225_);
lean_ctor_set(v___x_6227_, 1, v___x_6226_);
v___x_6228_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6228_, 0, v___x_6227_);
lean_ctor_set(v___x_6228_, 1, v___x_6182_);
v___x_6229_ = lean_obj_once(&l_Lasm_JS_instReprBinding_repr___redArg___closed__20, &l_Lasm_JS_instReprBinding_repr___redArg___closed__20_once, _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__20);
v___x_6230_ = l_Nat_reprFast(v_arity_6181_);
v___x_6231_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_6231_, 0, v___x_6230_);
v___x_6232_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6232_, 0, v___x_6229_);
lean_ctor_set(v___x_6232_, 1, v___x_6231_);
v___x_6233_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6233_, 0, v___x_6232_);
lean_ctor_set_uint8(v___x_6233_, sizeof(void*)*1, v___x_6188_);
v___x_6234_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6234_, 0, v___x_6228_);
lean_ctor_set(v___x_6234_, 1, v___x_6233_);
v___x_6235_ = lean_obj_once(&l_Lasm_JS_instReprBinding_repr___redArg___closed__23, &l_Lasm_JS_instReprBinding_repr___redArg___closed__23_once, _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__23);
v___x_6236_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__24));
v___x_6237_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6237_, 0, v___x_6236_);
lean_ctor_set(v___x_6237_, 1, v___x_6234_);
v___x_6238_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__25));
v___x_6239_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6239_, 0, v___x_6237_);
lean_ctor_set(v___x_6239_, 1, v___x_6238_);
v___x_6240_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6240_, 0, v___x_6235_);
lean_ctor_set(v___x_6240_, 1, v___x_6239_);
v___x_6241_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6241_, 0, v___x_6240_);
lean_ctor_set_uint8(v___x_6241_, sizeof(void*)*1, v___x_6188_);
return v___x_6241_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instReprBinding_repr(lean_object* v_x_6242_, lean_object* v_prec_6243_){
_start:
{
lean_object* v___x_6244_; 
v___x_6244_ = l_Lasm_JS_instReprBinding_repr___redArg(v_x_6242_);
return v___x_6244_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instReprBinding_repr___boxed(lean_object* v_x_6245_, lean_object* v_prec_6246_){
_start:
{
lean_object* v_res_6247_; 
v_res_6247_ = l_Lasm_JS_instReprBinding_repr(v_x_6245_, v_prec_6246_);
lean_dec(v_prec_6246_);
return v_res_6247_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object* v_b_6251_){
_start:
{
lean_object* v_name_6252_; lean_object* v_module_6253_; lean_object* v_path_6254_; lean_object* v___x_6255_; lean_object* v___x_6256_; lean_object* v___x_6257_; lean_object* v___x_6258_; lean_object* v___x_6259_; lean_object* v___y_6261_; lean_object* v___x_6265_; lean_object* v___x_6266_; uint8_t v___x_6267_; 
v_name_6252_ = lean_ctor_get(v_b_6251_, 0);
v_module_6253_ = lean_ctor_get(v_b_6251_, 1);
v_path_6254_ = lean_ctor_get(v_b_6251_, 2);
v___x_6255_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context___closed__0));
v___x_6256_ = lean_string_append(v___x_6255_, v_name_6252_);
v___x_6257_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__3));
v___x_6258_ = lean_string_append(v___x_6256_, v___x_6257_);
v___x_6259_ = lean_string_append(v___x_6258_, v_module_6253_);
v___x_6265_ = lean_string_utf8_byte_size(v_path_6254_);
v___x_6266_ = lean_unsigned_to_nat(0u);
v___x_6267_ = lean_nat_dec_eq(v___x_6265_, v___x_6266_);
if (v___x_6267_ == 0)
{
lean_object* v___x_6268_; lean_object* v___x_6269_; 
v___x_6268_ = ((lean_object*)(l_Lasm_JS_Wire_pushLength___closed__2));
v___x_6269_ = lean_string_append(v___x_6268_, v_path_6254_);
v___y_6261_ = v___x_6269_;
goto v___jp_6260_;
}
else
{
lean_object* v___x_6270_; 
v___x_6270_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__6));
v___y_6261_ = v___x_6270_;
goto v___jp_6260_;
}
v___jp_6260_:
{
lean_object* v___x_6262_; lean_object* v___x_6263_; lean_object* v___x_6264_; 
v___x_6262_ = lean_string_append(v___x_6259_, v___y_6261_);
lean_dec_ref(v___y_6261_);
v___x_6263_ = ((lean_object*)(l_Lasm_JS_Wire_pushLength___closed__5));
v___x_6264_ = lean_string_append(v___x_6262_, v___x_6263_);
return v___x_6264_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context___boxed(lean_object* v_b_6271_){
_start:
{
lean_object* v_res_6272_; 
v_res_6272_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_6271_);
lean_dec_ref(v_b_6271_);
return v_res_6272_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object* v_b_6273_, lean_object* v_args_6274_){
_start:
{
lean_object* v_name_6275_; lean_object* v_module_6276_; lean_object* v_path_6277_; lean_object* v___x_6278_; lean_object* v___x_6279_; lean_object* v___x_6280_; lean_object* v___x_6281_; lean_object* v___x_6282_; lean_object* v___x_6283_; lean_object* v___x_6284_; lean_object* v___x_6285_; lean_object* v___x_6286_; lean_object* v___x_6287_; lean_object* v___x_6288_; 
v_name_6275_ = lean_ctor_get(v_b_6273_, 0);
v_module_6276_ = lean_ctor_get(v_b_6273_, 1);
v_path_6277_ = lean_ctor_get(v_b_6273_, 2);
lean_inc_ref(v_name_6275_);
v___x_6278_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6278_, 0, v_name_6275_);
lean_inc_ref(v_module_6276_);
v___x_6279_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6279_, 0, v_module_6276_);
lean_inc_ref(v_path_6277_);
v___x_6280_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6280_, 0, v_path_6277_);
v___x_6281_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_6281_, 0, v_args_6274_);
v___x_6282_ = lean_unsigned_to_nat(4u);
v___x_6283_ = lean_mk_empty_array_with_capacity(v___x_6282_);
v___x_6284_ = lean_array_push(v___x_6283_, v___x_6278_);
v___x_6285_ = lean_array_push(v___x_6284_, v___x_6279_);
v___x_6286_ = lean_array_push(v___x_6285_, v___x_6280_);
v___x_6287_ = lean_array_push(v___x_6286_, v___x_6281_);
v___x_6288_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_6288_, 0, v___x_6287_);
return v___x_6288_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload___boxed(lean_object* v_b_6289_, lean_object* v_args_6290_){
_start:
{
lean_object* v_res_6291_; 
v_res_6291_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_6289_, v_args_6290_);
lean_dec_ref(v_b_6289_);
return v_res_6291_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___redArg(lean_object* v_inst_6292_, lean_object* v_b_6293_, lean_object* v_args_6294_, uint8_t v_await_6295_){
_start:
{
uint64_t v___y_6298_; uint64_t v___y_6299_; uint8_t v_mode_6342_; uint64_t v___x_6343_; uint64_t v___y_6345_; 
v_mode_6342_ = lean_ctor_get_uint8(v_inst_6292_, sizeof(void*)*2);
v___x_6343_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v_mode_6342_);
if (v_await_6295_ == 0)
{
uint64_t v___x_6350_; 
v___x_6350_ = 0ULL;
v___y_6345_ = v___x_6350_;
goto v___jp_6344_;
}
else
{
uint64_t v___x_6351_; 
v___x_6351_ = 2ULL;
v___y_6345_ = v___x_6351_;
goto v___jp_6344_;
}
v___jp_6297_:
{
uint64_t v_flags_6300_; uint32_t v___x_6301_; lean_object* v___x_6302_; uint32_t v___x_6303_; lean_object* v___x_6304_; 
v_flags_6300_ = lean_uint64_lor(v___y_6298_, v___y_6299_);
v___x_6301_ = 214;
v___x_6302_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_6293_, v_args_6294_);
v___x_6303_ = 0;
v___x_6304_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_6301_, v_flags_6300_, v___x_6302_, v___x_6303_);
lean_dec(v___x_6302_);
if (lean_obj_tag(v___x_6304_) == 0)
{
if (lean_obj_tag(v___x_6304_) == 0)
{
lean_object* v_a_6305_; lean_object* v___x_6306_; 
v_a_6305_ = lean_ctor_get(v___x_6304_, 0);
lean_inc(v_a_6305_);
lean_dec_ref_known(v___x_6304_, 1);
v___x_6306_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_6305_);
lean_dec(v_a_6305_);
if (lean_obj_tag(v___x_6306_) == 0)
{
lean_object* v_a_6307_; lean_object* v___x_6308_; lean_object* v___x_6309_; 
v_a_6307_ = lean_ctor_get(v___x_6306_, 0);
lean_inc(v_a_6307_);
lean_dec_ref_known(v___x_6306_, 1);
v___x_6308_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_6293_);
v___x_6309_ = l_Lasm_JS_decodeAs___redArg(v_inst_6292_, v___x_6308_, v_a_6307_);
lean_dec_ref(v___x_6308_);
return v___x_6309_;
}
else
{
lean_object* v_a_6310_; lean_object* v___x_6312_; uint8_t v_isShared_6313_; uint8_t v_isSharedCheck_6317_; 
lean_dec_ref(v_inst_6292_);
v_a_6310_ = lean_ctor_get(v___x_6306_, 0);
v_isSharedCheck_6317_ = !lean_is_exclusive(v___x_6306_);
if (v_isSharedCheck_6317_ == 0)
{
v___x_6312_ = v___x_6306_;
v_isShared_6313_ = v_isSharedCheck_6317_;
goto v_resetjp_6311_;
}
else
{
lean_inc(v_a_6310_);
lean_dec(v___x_6306_);
v___x_6312_ = lean_box(0);
v_isShared_6313_ = v_isSharedCheck_6317_;
goto v_resetjp_6311_;
}
v_resetjp_6311_:
{
lean_object* v___x_6315_; 
if (v_isShared_6313_ == 0)
{
v___x_6315_ = v___x_6312_;
goto v_reusejp_6314_;
}
else
{
lean_object* v_reuseFailAlloc_6316_; 
v_reuseFailAlloc_6316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6316_, 0, v_a_6310_);
v___x_6315_ = v_reuseFailAlloc_6316_;
goto v_reusejp_6314_;
}
v_reusejp_6314_:
{
return v___x_6315_;
}
}
}
}
else
{
lean_object* v_a_6318_; lean_object* v___x_6320_; uint8_t v_isShared_6321_; uint8_t v_isSharedCheck_6325_; 
lean_dec_ref(v_inst_6292_);
v_a_6318_ = lean_ctor_get(v___x_6304_, 0);
v_isSharedCheck_6325_ = !lean_is_exclusive(v___x_6304_);
if (v_isSharedCheck_6325_ == 0)
{
v___x_6320_ = v___x_6304_;
v_isShared_6321_ = v_isSharedCheck_6325_;
goto v_resetjp_6319_;
}
else
{
lean_inc(v_a_6318_);
lean_dec(v___x_6304_);
v___x_6320_ = lean_box(0);
v_isShared_6321_ = v_isSharedCheck_6325_;
goto v_resetjp_6319_;
}
v_resetjp_6319_:
{
lean_object* v___x_6323_; 
if (v_isShared_6321_ == 0)
{
lean_ctor_set_tag(v___x_6320_, 1);
v___x_6323_ = v___x_6320_;
goto v_reusejp_6322_;
}
else
{
lean_object* v_reuseFailAlloc_6324_; 
v_reuseFailAlloc_6324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6324_, 0, v_a_6318_);
v___x_6323_ = v_reuseFailAlloc_6324_;
goto v_reusejp_6322_;
}
v_reusejp_6322_:
{
return v___x_6323_;
}
}
}
}
else
{
lean_object* v_a_6326_; lean_object* v___x_6328_; uint8_t v_isShared_6329_; uint8_t v_isSharedCheck_6341_; 
lean_dec_ref(v_inst_6292_);
v_a_6326_ = lean_ctor_get(v___x_6304_, 0);
v_isSharedCheck_6341_ = !lean_is_exclusive(v___x_6304_);
if (v_isSharedCheck_6341_ == 0)
{
v___x_6328_ = v___x_6304_;
v_isShared_6329_ = v_isSharedCheck_6341_;
goto v_resetjp_6327_;
}
else
{
lean_inc(v_a_6326_);
lean_dec(v___x_6304_);
v___x_6328_ = lean_box(0);
v_isShared_6329_ = v_isSharedCheck_6341_;
goto v_resetjp_6327_;
}
v_resetjp_6327_:
{
lean_object* v___x_6330_; lean_object* v___x_6331_; lean_object* v___x_6332_; lean_object* v___x_6333_; lean_object* v___x_6334_; lean_object* v___x_6335_; lean_object* v___x_6336_; lean_object* v___x_6337_; lean_object* v___x_6339_; 
v___x_6330_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__0));
v___x_6331_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_6293_);
v___x_6332_ = lean_string_append(v___x_6330_, v___x_6331_);
lean_dec_ref(v___x_6331_);
v___x_6333_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__1));
v___x_6334_ = lean_string_append(v___x_6332_, v___x_6333_);
v___x_6335_ = lean_io_error_to_string(v_a_6326_);
v___x_6336_ = lean_string_append(v___x_6334_, v___x_6335_);
lean_dec_ref(v___x_6335_);
v___x_6337_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_6337_, 0, v___x_6336_);
if (v_isShared_6329_ == 0)
{
lean_ctor_set(v___x_6328_, 0, v___x_6337_);
v___x_6339_ = v___x_6328_;
goto v_reusejp_6338_;
}
else
{
lean_object* v_reuseFailAlloc_6340_; 
v_reuseFailAlloc_6340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6340_, 0, v___x_6337_);
v___x_6339_ = v_reuseFailAlloc_6340_;
goto v_reusejp_6338_;
}
v_reusejp_6338_:
{
return v___x_6339_;
}
}
}
}
v___jp_6344_:
{
uint8_t v_construct_6346_; uint64_t v___x_6347_; 
v_construct_6346_ = lean_ctor_get_uint8(v_b_6293_, sizeof(void*)*4);
v___x_6347_ = lean_uint64_lor(v___x_6343_, v___y_6345_);
if (v_construct_6346_ == 0)
{
uint64_t v___x_6348_; 
v___x_6348_ = 0ULL;
v___y_6298_ = v___x_6347_;
v___y_6299_ = v___x_6348_;
goto v___jp_6297_;
}
else
{
uint64_t v___x_6349_; 
v___x_6349_ = 4ULL;
v___y_6298_ = v___x_6347_;
v___y_6299_ = v___x_6349_;
goto v___jp_6297_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___redArg___boxed(lean_object* v_inst_6352_, lean_object* v_b_6353_, lean_object* v_args_6354_, lean_object* v_await_6355_, lean_object* v_a_6356_){
_start:
{
uint8_t v_await_boxed_6357_; lean_object* v_res_6358_; 
v_await_boxed_6357_ = lean_unbox(v_await_6355_);
v_res_6358_ = l_Lasm_JS_Binding_invoke___redArg(v_inst_6352_, v_b_6353_, v_args_6354_, v_await_boxed_6357_);
lean_dec_ref(v_b_6353_);
return v_res_6358_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke(lean_object* v_00_u03b1_6359_, lean_object* v_inst_6360_, lean_object* v_b_6361_, lean_object* v_args_6362_, uint8_t v_await_6363_){
_start:
{
lean_object* v___x_6365_; 
v___x_6365_ = l_Lasm_JS_Binding_invoke___redArg(v_inst_6360_, v_b_6361_, v_args_6362_, v_await_6363_);
return v___x_6365_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___boxed(lean_object* v_00_u03b1_6366_, lean_object* v_inst_6367_, lean_object* v_b_6368_, lean_object* v_args_6369_, lean_object* v_await_6370_, lean_object* v_a_6371_){
_start:
{
uint8_t v_await_boxed_6372_; lean_object* v_res_6373_; 
v_await_boxed_6372_ = lean_unbox(v_await_6370_);
v_res_6373_ = l_Lasm_JS_Binding_invoke(v_00_u03b1_6366_, v_inst_6367_, v_b_6368_, v_args_6369_, v_await_boxed_6372_);
lean_dec_ref(v_b_6368_);
return v_res_6373_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___redArg(lean_object* v_inst_6374_, lean_object* v_b_6375_, lean_object* v_args_6376_){
_start:
{
uint8_t v_mode_6378_; uint8_t v_construct_6379_; lean_object* v___x_6380_; uint32_t v___x_6381_; uint64_t v___x_6382_; uint64_t v___y_6384_; 
v_mode_6378_ = lean_ctor_get_uint8(v_inst_6374_, sizeof(void*)*2);
v_construct_6379_ = lean_ctor_get_uint8(v_b_6375_, sizeof(void*)*4);
v___x_6380_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_6375_);
v___x_6381_ = 214;
v___x_6382_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v_mode_6378_);
if (v_construct_6379_ == 0)
{
uint64_t v___x_6392_; 
v___x_6392_ = 0ULL;
v___y_6384_ = v___x_6392_;
goto v___jp_6383_;
}
else
{
uint64_t v___x_6393_; 
v___x_6393_ = 4ULL;
v___y_6384_ = v___x_6393_;
goto v___jp_6383_;
}
v___jp_6383_:
{
uint64_t v___x_6385_; lean_object* v___x_6386_; lean_object* v___x_6387_; lean_object* v___x_6388_; lean_object* v___x_6389_; lean_object* v___x_6390_; lean_object* v___x_6391_; 
v___x_6385_ = lean_uint64_lor(v___x_6382_, v___y_6384_);
v___x_6386_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_6375_, v_args_6376_);
v___x_6387_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__0));
v___x_6388_ = lean_string_append(v___x_6387_, v___x_6380_);
v___x_6389_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__1));
v___x_6390_ = lean_string_append(v___x_6388_, v___x_6389_);
v___x_6391_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg(v_inst_6374_, v___x_6380_, v___x_6381_, v___x_6385_, v___x_6386_, v___x_6390_);
return v___x_6391_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___redArg___boxed(lean_object* v_inst_6394_, lean_object* v_b_6395_, lean_object* v_args_6396_, lean_object* v_a_6397_){
_start:
{
lean_object* v_res_6398_; 
v_res_6398_ = l_Lasm_JS_Binding_invokeAsync___redArg(v_inst_6394_, v_b_6395_, v_args_6396_);
lean_dec_ref(v_b_6395_);
return v_res_6398_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync(lean_object* v_00_u03b1_6399_, lean_object* v_inst_6400_, lean_object* v_b_6401_, lean_object* v_args_6402_){
_start:
{
lean_object* v___x_6404_; 
v___x_6404_ = l_Lasm_JS_Binding_invokeAsync___redArg(v_inst_6400_, v_b_6401_, v_args_6402_);
return v___x_6404_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___boxed(lean_object* v_00_u03b1_6405_, lean_object* v_inst_6406_, lean_object* v_b_6407_, lean_object* v_args_6408_, lean_object* v_a_6409_){
_start:
{
lean_object* v_res_6410_; 
v_res_6410_ = l_Lasm_JS_Binding_invokeAsync(v_00_u03b1_6405_, v_inst_6406_, v_b_6407_, v_args_6408_);
lean_dec_ref(v_b_6407_);
return v_res_6410_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOTaskExceptErrorOfFromJS___redArg___lam__0(lean_object* v___x_6411_, lean_object* v_inst_6412_, lean_object* v_b_6413_, lean_object* v_args_6414_){
_start:
{
uint8_t v___x_6416_; lean_object* v___x_6417_; 
v___x_6416_ = 0;
v___x_6417_ = l_Lasm_JS_Binding_invoke___redArg(v___x_6411_, v_b_6413_, v_args_6414_, v___x_6416_);
if (lean_obj_tag(v___x_6417_) == 0)
{
lean_object* v_a_6418_; lean_object* v___x_6419_; 
v_a_6418_ = lean_ctor_get(v___x_6417_, 0);
lean_inc(v_a_6418_);
lean_dec_ref_known(v___x_6417_, 1);
v___x_6419_ = l_Lasm_JS_Value_toTask___redArg(v_a_6418_, v_inst_6412_);
return v___x_6419_;
}
else
{
lean_object* v_a_6420_; lean_object* v___x_6422_; uint8_t v_isShared_6423_; uint8_t v_isSharedCheck_6427_; 
lean_dec_ref(v_inst_6412_);
v_a_6420_ = lean_ctor_get(v___x_6417_, 0);
v_isSharedCheck_6427_ = !lean_is_exclusive(v___x_6417_);
if (v_isSharedCheck_6427_ == 0)
{
v___x_6422_ = v___x_6417_;
v_isShared_6423_ = v_isSharedCheck_6427_;
goto v_resetjp_6421_;
}
else
{
lean_inc(v_a_6420_);
lean_dec(v___x_6417_);
v___x_6422_ = lean_box(0);
v_isShared_6423_ = v_isSharedCheck_6427_;
goto v_resetjp_6421_;
}
v_resetjp_6421_:
{
lean_object* v___x_6425_; 
if (v_isShared_6423_ == 0)
{
v___x_6425_ = v___x_6422_;
goto v_reusejp_6424_;
}
else
{
lean_object* v_reuseFailAlloc_6426_; 
v_reuseFailAlloc_6426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6426_, 0, v_a_6420_);
v___x_6425_ = v_reuseFailAlloc_6426_;
goto v_reusejp_6424_;
}
v_reusejp_6424_:
{
return v___x_6425_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOTaskExceptErrorOfFromJS___redArg___lam__0___boxed(lean_object* v___x_6428_, lean_object* v_inst_6429_, lean_object* v_b_6430_, lean_object* v_args_6431_, lean_object* v___y_6432_){
_start:
{
lean_object* v_res_6433_; 
v_res_6433_ = l_Lasm_JS_instBindableIOTaskExceptErrorOfFromJS___redArg___lam__0(v___x_6428_, v_inst_6429_, v_b_6430_, v_args_6431_);
lean_dec_ref(v_b_6430_);
return v_res_6433_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOTaskExceptErrorOfFromJS___redArg(lean_object* v_inst_6434_){
_start:
{
lean_object* v___x_6435_; lean_object* v___f_6436_; lean_object* v___x_6437_; lean_object* v___x_6438_; 
v___x_6435_ = ((lean_object*)(l_Lasm_JS_instFromJSValue));
v___f_6436_ = lean_alloc_closure((void*)(l_Lasm_JS_instBindableIOTaskExceptErrorOfFromJS___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_6436_, 0, v___x_6435_);
lean_closure_set(v___f_6436_, 1, v_inst_6434_);
v___x_6437_ = lean_unsigned_to_nat(0u);
v___x_6438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6438_, 0, v___x_6437_);
lean_ctor_set(v___x_6438_, 1, v___f_6436_);
return v___x_6438_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOTaskExceptErrorOfFromJS(lean_object* v_00_u03b2_6439_, lean_object* v_inst_6440_){
_start:
{
lean_object* v___x_6441_; 
v___x_6441_ = l_Lasm_JS_instBindableIOTaskExceptErrorOfFromJS___redArg(v_inst_6440_);
return v___x_6441_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOOfFromJS___redArg___lam__0(lean_object* v_inst_6442_, lean_object* v_b_6443_, lean_object* v_args_6444_){
_start:
{
uint8_t v___x_6446_; lean_object* v___x_6447_; 
v___x_6446_ = 1;
v___x_6447_ = l_Lasm_JS_Binding_invoke___redArg(v_inst_6442_, v_b_6443_, v_args_6444_, v___x_6446_);
return v___x_6447_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOOfFromJS___redArg___lam__0___boxed(lean_object* v_inst_6448_, lean_object* v_b_6449_, lean_object* v_args_6450_, lean_object* v___y_6451_){
_start:
{
lean_object* v_res_6452_; 
v_res_6452_ = l_Lasm_JS_instBindableIOOfFromJS___redArg___lam__0(v_inst_6448_, v_b_6449_, v_args_6450_);
lean_dec_ref(v_b_6449_);
return v_res_6452_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOOfFromJS___redArg(lean_object* v_inst_6453_){
_start:
{
lean_object* v___f_6454_; lean_object* v___x_6455_; lean_object* v___x_6456_; 
v___f_6454_ = lean_alloc_closure((void*)(l_Lasm_JS_instBindableIOOfFromJS___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_6454_, 0, v_inst_6453_);
v___x_6455_ = lean_unsigned_to_nat(0u);
v___x_6456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6456_, 0, v___x_6455_);
lean_ctor_set(v___x_6456_, 1, v___f_6454_);
return v___x_6456_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOOfFromJS(lean_object* v_00_u03b2_6457_, lean_object* v_inst_6458_){
_start:
{
lean_object* v___x_6459_; 
v___x_6459_ = l_Lasm_JS_instBindableIOOfFromJS___redArg(v_inst_6458_);
return v___x_6459_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableAsyncOfFromJS___redArg___lam__0(lean_object* v_inst_6460_, lean_object* v_b_6461_, lean_object* v_args_6462_){
_start:
{
lean_object* v___x_6464_; 
v___x_6464_ = l_Lasm_JS_Binding_invokeAsync___redArg(v_inst_6460_, v_b_6461_, v_args_6462_);
return v___x_6464_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableAsyncOfFromJS___redArg___lam__0___boxed(lean_object* v_inst_6465_, lean_object* v_b_6466_, lean_object* v_args_6467_, lean_object* v___y_6468_){
_start:
{
lean_object* v_res_6469_; 
v_res_6469_ = l_Lasm_JS_instBindableAsyncOfFromJS___redArg___lam__0(v_inst_6465_, v_b_6466_, v_args_6467_);
lean_dec_ref(v_b_6466_);
return v_res_6469_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableAsyncOfFromJS___redArg(lean_object* v_inst_6470_){
_start:
{
lean_object* v___f_6471_; lean_object* v___x_6472_; lean_object* v___x_6473_; 
v___f_6471_ = lean_alloc_closure((void*)(l_Lasm_JS_instBindableAsyncOfFromJS___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_6471_, 0, v_inst_6470_);
v___x_6472_ = lean_unsigned_to_nat(0u);
v___x_6473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6473_, 0, v___x_6472_);
lean_ctor_set(v___x_6473_, 1, v___f_6471_);
return v___x_6473_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableAsyncOfFromJS(lean_object* v_00_u03b2_6474_, lean_object* v_inst_6475_){
_start:
{
lean_object* v___x_6476_; 
v___x_6476_ = l_Lasm_JS_instBindableAsyncOfFromJS___redArg(v_inst_6475_);
return v___x_6476_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableForallOfToJS___redArg___lam__0(lean_object* v_inst_6477_, lean_object* v_bind_6478_, lean_object* v_b_6479_, lean_object* v_args_6480_, lean_object* v_a_6481_){
_start:
{
lean_object* v___x_6482_; lean_object* v___x_6483_; lean_object* v___x_6484_; 
v___x_6482_ = lean_apply_1(v_inst_6477_, v_a_6481_);
v___x_6483_ = lean_array_push(v_args_6480_, v___x_6482_);
v___x_6484_ = lean_apply_2(v_bind_6478_, v_b_6479_, v___x_6483_);
return v___x_6484_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableForallOfToJS___redArg(lean_object* v_inst_6485_, lean_object* v_inst_6486_){
_start:
{
lean_object* v_arity_6487_; lean_object* v_bind_6488_; lean_object* v___x_6490_; uint8_t v_isShared_6491_; uint8_t v_isSharedCheck_6498_; 
v_arity_6487_ = lean_ctor_get(v_inst_6486_, 0);
v_bind_6488_ = lean_ctor_get(v_inst_6486_, 1);
v_isSharedCheck_6498_ = !lean_is_exclusive(v_inst_6486_);
if (v_isSharedCheck_6498_ == 0)
{
v___x_6490_ = v_inst_6486_;
v_isShared_6491_ = v_isSharedCheck_6498_;
goto v_resetjp_6489_;
}
else
{
lean_inc(v_bind_6488_);
lean_inc(v_arity_6487_);
lean_dec(v_inst_6486_);
v___x_6490_ = lean_box(0);
v_isShared_6491_ = v_isSharedCheck_6498_;
goto v_resetjp_6489_;
}
v_resetjp_6489_:
{
lean_object* v___f_6492_; lean_object* v___x_6493_; lean_object* v___x_6494_; lean_object* v___x_6496_; 
v___f_6492_ = lean_alloc_closure((void*)(l_Lasm_JS_instBindableForallOfToJS___redArg___lam__0), 5, 2);
lean_closure_set(v___f_6492_, 0, v_inst_6485_);
lean_closure_set(v___f_6492_, 1, v_bind_6488_);
v___x_6493_ = lean_unsigned_to_nat(1u);
v___x_6494_ = lean_nat_add(v_arity_6487_, v___x_6493_);
lean_dec(v_arity_6487_);
if (v_isShared_6491_ == 0)
{
lean_ctor_set(v___x_6490_, 1, v___f_6492_);
lean_ctor_set(v___x_6490_, 0, v___x_6494_);
v___x_6496_ = v___x_6490_;
goto v_reusejp_6495_;
}
else
{
lean_object* v_reuseFailAlloc_6497_; 
v_reuseFailAlloc_6497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6497_, 0, v___x_6494_);
lean_ctor_set(v_reuseFailAlloc_6497_, 1, v___f_6492_);
v___x_6496_ = v_reuseFailAlloc_6497_;
goto v_reusejp_6495_;
}
v_reusejp_6495_:
{
return v___x_6496_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableForallOfToJS(lean_object* v_00_u03b1_6499_, lean_object* v_00_u03b2_6500_, lean_object* v_inst_6501_, lean_object* v_inst_6502_){
_start:
{
lean_object* v___x_6503_; 
v___x_6503_ = l_Lasm_JS_instBindableForallOfToJS___redArg(v_inst_6501_, v_inst_6502_);
return v___x_6503_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_onEdge(){
_start:
{
uint8_t v___x_6505_; 
v___x_6505_ = l_Lasm_JS_isAvailable;
if (v___x_6505_ == 0)
{
lean_object* v___x_6506_; lean_object* v___x_6507_; 
v___x_6506_ = lean_box(v___x_6505_);
v___x_6507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6507_, 0, v___x_6506_);
return v___x_6507_;
}
else
{
uint8_t v___x_6508_; uint32_t v___x_6509_; uint32_t v___x_6510_; uint64_t v___x_6511_; lean_object* v___x_6512_; lean_object* v___x_6513_; 
v___x_6508_ = 0;
v___x_6509_ = 200;
v___x_6510_ = 0;
v___x_6511_ = 0ULL;
v___x_6512_ = l_ByteArray_empty;
v___x_6513_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_6509_, v___x_6510_, v___x_6511_, v___x_6512_);
if (lean_obj_tag(v___x_6513_) == 0)
{
lean_object* v_a_6514_; lean_object* v___x_6516_; uint8_t v_isShared_6517_; uint8_t v_isSharedCheck_6533_; 
v_a_6514_ = lean_ctor_get(v___x_6513_, 0);
v_isSharedCheck_6533_ = !lean_is_exclusive(v___x_6513_);
if (v_isSharedCheck_6533_ == 0)
{
v___x_6516_ = v___x_6513_;
v_isShared_6517_ = v_isSharedCheck_6533_;
goto v_resetjp_6515_;
}
else
{
lean_inc(v_a_6514_);
lean_dec(v___x_6513_);
v___x_6516_ = lean_box(0);
v_isShared_6517_ = v_isSharedCheck_6533_;
goto v_resetjp_6515_;
}
v_resetjp_6515_:
{
lean_object* v___x_6518_; lean_object* v___x_6519_; uint8_t v___x_6520_; 
v___x_6518_ = lean_unsigned_to_nat(8u);
v___x_6519_ = lean_byte_array_size(v_a_6514_);
v___x_6520_ = lean_nat_dec_le(v___x_6518_, v___x_6519_);
if (v___x_6520_ == 0)
{
lean_object* v___x_6521_; lean_object* v___x_6523_; 
lean_dec(v_a_6514_);
v___x_6521_ = lean_box(v___x_6508_);
if (v_isShared_6517_ == 0)
{
lean_ctor_set(v___x_6516_, 0, v___x_6521_);
v___x_6523_ = v___x_6516_;
goto v_reusejp_6522_;
}
else
{
lean_object* v_reuseFailAlloc_6524_; 
v_reuseFailAlloc_6524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6524_, 0, v___x_6521_);
v___x_6523_ = v_reuseFailAlloc_6524_;
goto v_reusejp_6522_;
}
v_reusejp_6522_:
{
return v___x_6523_;
}
}
else
{
lean_object* v___x_6525_; uint8_t v___x_6526_; uint8_t v___x_6527_; uint8_t v___x_6528_; lean_object* v___x_6529_; lean_object* v___x_6531_; 
v___x_6525_ = lean_unsigned_to_nat(4u);
v___x_6526_ = lean_byte_array_get(v_a_6514_, v___x_6525_);
lean_dec(v_a_6514_);
v___x_6527_ = 1;
v___x_6528_ = lean_uint8_dec_eq(v___x_6526_, v___x_6527_);
v___x_6529_ = lean_box(v___x_6528_);
if (v_isShared_6517_ == 0)
{
lean_ctor_set(v___x_6516_, 0, v___x_6529_);
v___x_6531_ = v___x_6516_;
goto v_reusejp_6530_;
}
else
{
lean_object* v_reuseFailAlloc_6532_; 
v_reuseFailAlloc_6532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6532_, 0, v___x_6529_);
v___x_6531_ = v_reuseFailAlloc_6532_;
goto v_reusejp_6530_;
}
v_reusejp_6530_:
{
return v___x_6531_;
}
}
}
}
else
{
lean_object* v_a_6534_; lean_object* v___x_6536_; uint8_t v_isShared_6537_; uint8_t v_isSharedCheck_6541_; 
v_a_6534_ = lean_ctor_get(v___x_6513_, 0);
v_isSharedCheck_6541_ = !lean_is_exclusive(v___x_6513_);
if (v_isSharedCheck_6541_ == 0)
{
v___x_6536_ = v___x_6513_;
v_isShared_6537_ = v_isSharedCheck_6541_;
goto v_resetjp_6535_;
}
else
{
lean_inc(v_a_6534_);
lean_dec(v___x_6513_);
v___x_6536_ = lean_box(0);
v_isShared_6537_ = v_isSharedCheck_6541_;
goto v_resetjp_6535_;
}
v_resetjp_6535_:
{
lean_object* v___x_6539_; 
if (v_isShared_6537_ == 0)
{
v___x_6539_ = v___x_6536_;
goto v_reusejp_6538_;
}
else
{
lean_object* v_reuseFailAlloc_6540_; 
v_reuseFailAlloc_6540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6540_, 0, v_a_6534_);
v___x_6539_ = v_reuseFailAlloc_6540_;
goto v_reusejp_6538_;
}
v_reusejp_6538_:
{
return v___x_6539_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_onEdge___boxed(lean_object* v_a_6542_){
_start:
{
lean_object* v_res_6543_; 
v_res_6543_ = l_Lasm_JS_onEdge();
return v_res_6543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_exportDefault___redArg(lean_object* v_inst_6545_, lean_object* v_v_6546_){
_start:
{
lean_object* v___f_6548_; lean_object* v___x_6549_; 
v___f_6548_ = ((lean_object*)(l_Lasm_JS_instToJSString___closed__0));
v___x_6549_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_6549_) == 0)
{
lean_object* v_a_6550_; lean_object* v___x_6551_; lean_object* v___x_6552_; 
v_a_6550_ = lean_ctor_get(v___x_6549_, 0);
lean_inc(v_a_6550_);
lean_dec_ref_known(v___x_6549_, 1);
v___x_6551_ = ((lean_object*)(l_Lasm_JS_exportDefault___redArg___closed__0));
v___x_6552_ = l_Lasm_JS_Value_set___redArg(v___f_6548_, v_inst_6545_, v_a_6550_, v___x_6551_, v_v_6546_);
return v___x_6552_;
}
else
{
lean_object* v_a_6553_; lean_object* v___x_6555_; uint8_t v_isShared_6556_; uint8_t v_isSharedCheck_6560_; 
lean_dec(v_v_6546_);
lean_dec_ref(v_inst_6545_);
v_a_6553_ = lean_ctor_get(v___x_6549_, 0);
v_isSharedCheck_6560_ = !lean_is_exclusive(v___x_6549_);
if (v_isSharedCheck_6560_ == 0)
{
v___x_6555_ = v___x_6549_;
v_isShared_6556_ = v_isSharedCheck_6560_;
goto v_resetjp_6554_;
}
else
{
lean_inc(v_a_6553_);
lean_dec(v___x_6549_);
v___x_6555_ = lean_box(0);
v_isShared_6556_ = v_isSharedCheck_6560_;
goto v_resetjp_6554_;
}
v_resetjp_6554_:
{
lean_object* v___x_6558_; 
if (v_isShared_6556_ == 0)
{
v___x_6558_ = v___x_6555_;
goto v_reusejp_6557_;
}
else
{
lean_object* v_reuseFailAlloc_6559_; 
v_reuseFailAlloc_6559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6559_, 0, v_a_6553_);
v___x_6558_ = v_reuseFailAlloc_6559_;
goto v_reusejp_6557_;
}
v_reusejp_6557_:
{
return v___x_6558_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_exportDefault___redArg___boxed(lean_object* v_inst_6561_, lean_object* v_v_6562_, lean_object* v_a_6563_){
_start:
{
lean_object* v_res_6564_; 
v_res_6564_ = l_Lasm_JS_exportDefault___redArg(v_inst_6561_, v_v_6562_);
return v_res_6564_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_exportDefault(lean_object* v_00_u03b1_6565_, lean_object* v_inst_6566_, lean_object* v_v_6567_){
_start:
{
lean_object* v___x_6569_; 
v___x_6569_ = l_Lasm_JS_exportDefault___redArg(v_inst_6566_, v_v_6567_);
return v___x_6569_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_exportDefault___boxed(lean_object* v_00_u03b1_6570_, lean_object* v_inst_6571_, lean_object* v_v_6572_, lean_object* v_a_6573_){
_start:
{
lean_object* v_res_6574_; 
v_res_6574_ = l_Lasm_JS_exportDefault(v_00_u03b1_6570_, v_inst_6571_, v_v_6572_);
return v_res_6574_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_waitForever(){
_start:
{
lean_object* v___x_6576_; 
v___x_6576_ = l_Lasm_JS_onEdge();
if (lean_obj_tag(v___x_6576_) == 0)
{
lean_object* v_a_6577_; lean_object* v___x_6579_; uint8_t v_isShared_6580_; uint8_t v_isSharedCheck_6615_; 
v_a_6577_ = lean_ctor_get(v___x_6576_, 0);
v_isSharedCheck_6615_ = !lean_is_exclusive(v___x_6576_);
if (v_isSharedCheck_6615_ == 0)
{
v___x_6579_ = v___x_6576_;
v_isShared_6580_ = v_isSharedCheck_6615_;
goto v_resetjp_6578_;
}
else
{
lean_inc(v_a_6577_);
lean_dec(v___x_6576_);
v___x_6579_ = lean_box(0);
v_isShared_6580_ = v_isSharedCheck_6615_;
goto v_resetjp_6578_;
}
v_resetjp_6578_:
{
uint8_t v___x_6581_; 
v___x_6581_ = lean_unbox(v_a_6577_);
lean_dec(v_a_6577_);
if (v___x_6581_ == 0)
{
lean_object* v___x_6582_; 
lean_del_object(v___x_6579_);
v___x_6582_ = lasm_js_park();
if (lean_obj_tag(v___x_6582_) == 0)
{
lean_object* v_a_6583_; lean_object* v___x_6585_; uint8_t v_isShared_6586_; uint8_t v_isSharedCheck_6602_; 
v_a_6583_ = lean_ctor_get(v___x_6582_, 0);
v_isSharedCheck_6602_ = !lean_is_exclusive(v___x_6582_);
if (v_isSharedCheck_6602_ == 0)
{
v___x_6585_ = v___x_6582_;
v_isShared_6586_ = v_isSharedCheck_6602_;
goto v_resetjp_6584_;
}
else
{
lean_inc(v_a_6583_);
lean_dec(v___x_6582_);
v___x_6585_ = lean_box(0);
v_isShared_6586_ = v_isSharedCheck_6602_;
goto v_resetjp_6584_;
}
v_resetjp_6584_:
{
uint8_t v___x_6587_; 
v___x_6587_ = lean_unbox(v_a_6583_);
lean_dec(v_a_6583_);
if (v___x_6587_ == 0)
{
lean_object* v___x_6588_; lean_object* v___x_6589_; lean_object* v___x_6590_; lean_object* v___x_6591_; lean_object* v___x_6592_; lean_object* v___x_6593_; lean_object* v___x_6594_; lean_object* v___x_6596_; 
v___x_6588_ = lean_io_promise_new();
lean_inc(v___x_6588_);
v___x_6589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6589_, 0, v___x_6588_);
v___x_6590_ = lean_st_mk_ref(v___x_6589_);
v___x_6591_ = lean_io_promise_result_opt(v___x_6588_);
lean_dec(v___x_6588_);
v___x_6592_ = lean_io_wait(v___x_6591_);
lean_dec(v___x_6592_);
v___x_6593_ = lean_box(0);
v___x_6594_ = lean_st_ref_get(v___x_6590_);
lean_dec(v___x_6590_);
lean_dec(v___x_6594_);
if (v_isShared_6586_ == 0)
{
lean_ctor_set(v___x_6585_, 0, v___x_6593_);
v___x_6596_ = v___x_6585_;
goto v_reusejp_6595_;
}
else
{
lean_object* v_reuseFailAlloc_6597_; 
v_reuseFailAlloc_6597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6597_, 0, v___x_6593_);
v___x_6596_ = v_reuseFailAlloc_6597_;
goto v_reusejp_6595_;
}
v_reusejp_6595_:
{
return v___x_6596_;
}
}
else
{
lean_object* v___x_6598_; lean_object* v___x_6600_; 
v___x_6598_ = lean_box(0);
if (v_isShared_6586_ == 0)
{
lean_ctor_set(v___x_6585_, 0, v___x_6598_);
v___x_6600_ = v___x_6585_;
goto v_reusejp_6599_;
}
else
{
lean_object* v_reuseFailAlloc_6601_; 
v_reuseFailAlloc_6601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6601_, 0, v___x_6598_);
v___x_6600_ = v_reuseFailAlloc_6601_;
goto v_reusejp_6599_;
}
v_reusejp_6599_:
{
return v___x_6600_;
}
}
}
}
else
{
lean_object* v_a_6603_; lean_object* v___x_6605_; uint8_t v_isShared_6606_; uint8_t v_isSharedCheck_6610_; 
v_a_6603_ = lean_ctor_get(v___x_6582_, 0);
v_isSharedCheck_6610_ = !lean_is_exclusive(v___x_6582_);
if (v_isSharedCheck_6610_ == 0)
{
v___x_6605_ = v___x_6582_;
v_isShared_6606_ = v_isSharedCheck_6610_;
goto v_resetjp_6604_;
}
else
{
lean_inc(v_a_6603_);
lean_dec(v___x_6582_);
v___x_6605_ = lean_box(0);
v_isShared_6606_ = v_isSharedCheck_6610_;
goto v_resetjp_6604_;
}
v_resetjp_6604_:
{
lean_object* v___x_6608_; 
if (v_isShared_6606_ == 0)
{
v___x_6608_ = v___x_6605_;
goto v_reusejp_6607_;
}
else
{
lean_object* v_reuseFailAlloc_6609_; 
v_reuseFailAlloc_6609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6609_, 0, v_a_6603_);
v___x_6608_ = v_reuseFailAlloc_6609_;
goto v_reusejp_6607_;
}
v_reusejp_6607_:
{
return v___x_6608_;
}
}
}
}
else
{
lean_object* v___x_6611_; lean_object* v___x_6613_; 
v___x_6611_ = lean_box(0);
if (v_isShared_6580_ == 0)
{
lean_ctor_set(v___x_6579_, 0, v___x_6611_);
v___x_6613_ = v___x_6579_;
goto v_reusejp_6612_;
}
else
{
lean_object* v_reuseFailAlloc_6614_; 
v_reuseFailAlloc_6614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6614_, 0, v___x_6611_);
v___x_6613_ = v_reuseFailAlloc_6614_;
goto v_reusejp_6612_;
}
v_reusejp_6612_:
{
return v___x_6613_;
}
}
}
}
else
{
lean_object* v_a_6616_; lean_object* v___x_6618_; uint8_t v_isShared_6619_; uint8_t v_isSharedCheck_6623_; 
v_a_6616_ = lean_ctor_get(v___x_6576_, 0);
v_isSharedCheck_6623_ = !lean_is_exclusive(v___x_6576_);
if (v_isSharedCheck_6623_ == 0)
{
v___x_6618_ = v___x_6576_;
v_isShared_6619_ = v_isSharedCheck_6623_;
goto v_resetjp_6617_;
}
else
{
lean_inc(v_a_6616_);
lean_dec(v___x_6576_);
v___x_6618_ = lean_box(0);
v_isShared_6619_ = v_isSharedCheck_6623_;
goto v_resetjp_6617_;
}
v_resetjp_6617_:
{
lean_object* v___x_6621_; 
if (v_isShared_6619_ == 0)
{
v___x_6621_ = v___x_6618_;
goto v_reusejp_6620_;
}
else
{
lean_object* v_reuseFailAlloc_6622_; 
v_reuseFailAlloc_6622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6622_, 0, v_a_6616_);
v___x_6621_ = v_reuseFailAlloc_6622_;
goto v_reusejp_6620_;
}
v_reusejp_6620_:
{
return v___x_6621_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_waitForever___boxed(lean_object* v_a_6624_){
_start:
{
lean_object* v_res_6625_; 
v_res_6625_ = l_Lasm_JS_waitForever();
return v_res_6625_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_stats(){
_start:
{
uint32_t v___x_6627_; uint32_t v___x_6628_; uint64_t v___x_6629_; lean_object* v___x_6630_; lean_object* v___x_6631_; 
v___x_6627_ = 213;
v___x_6628_ = 0;
v___x_6629_ = 0ULL;
v___x_6630_ = l_ByteArray_empty;
v___x_6631_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_6627_, v___x_6628_, v___x_6629_, v___x_6630_);
if (lean_obj_tag(v___x_6631_) == 0)
{
lean_object* v_a_6632_; lean_object* v___x_6634_; uint8_t v_isShared_6635_; uint8_t v_isSharedCheck_6646_; 
v_a_6632_ = lean_ctor_get(v___x_6631_, 0);
v_isSharedCheck_6646_ = !lean_is_exclusive(v___x_6631_);
if (v_isSharedCheck_6646_ == 0)
{
v___x_6634_ = v___x_6631_;
v_isShared_6635_ = v_isSharedCheck_6646_;
goto v_resetjp_6633_;
}
else
{
lean_inc(v_a_6632_);
lean_dec(v___x_6631_);
v___x_6634_ = lean_box(0);
v_isShared_6635_ = v_isSharedCheck_6646_;
goto v_resetjp_6633_;
}
v_resetjp_6633_:
{
uint8_t v___x_6636_; 
v___x_6636_ = lean_string_validate_utf8(v_a_6632_);
if (v___x_6636_ == 0)
{
lean_object* v___x_6637_; lean_object* v___x_6638_; lean_object* v___x_6640_; 
lean_dec(v_a_6632_);
v___x_6637_ = lean_obj_once(&l_Lasm_JS_decodeAs___redArg___closed__7, &l_Lasm_JS_decodeAs___redArg___closed__7_once, _init_l_Lasm_JS_decodeAs___redArg___closed__7);
v___x_6638_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_6637_);
if (v_isShared_6635_ == 0)
{
lean_ctor_set(v___x_6634_, 0, v___x_6638_);
v___x_6640_ = v___x_6634_;
goto v_reusejp_6639_;
}
else
{
lean_object* v_reuseFailAlloc_6641_; 
v_reuseFailAlloc_6641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6641_, 0, v___x_6638_);
v___x_6640_ = v_reuseFailAlloc_6641_;
goto v_reusejp_6639_;
}
v_reusejp_6639_:
{
return v___x_6640_;
}
}
else
{
lean_object* v___x_6642_; lean_object* v___x_6644_; 
v___x_6642_ = lean_string_from_utf8_unchecked(v_a_6632_);
if (v_isShared_6635_ == 0)
{
lean_ctor_set(v___x_6634_, 0, v___x_6642_);
v___x_6644_ = v___x_6634_;
goto v_reusejp_6643_;
}
else
{
lean_object* v_reuseFailAlloc_6645_; 
v_reuseFailAlloc_6645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6645_, 0, v___x_6642_);
v___x_6644_ = v_reuseFailAlloc_6645_;
goto v_reusejp_6643_;
}
v_reusejp_6643_:
{
return v___x_6644_;
}
}
}
}
else
{
lean_object* v_a_6647_; lean_object* v___x_6649_; uint8_t v_isShared_6650_; uint8_t v_isSharedCheck_6654_; 
v_a_6647_ = lean_ctor_get(v___x_6631_, 0);
v_isSharedCheck_6654_ = !lean_is_exclusive(v___x_6631_);
if (v_isSharedCheck_6654_ == 0)
{
v___x_6649_ = v___x_6631_;
v_isShared_6650_ = v_isSharedCheck_6654_;
goto v_resetjp_6648_;
}
else
{
lean_inc(v_a_6647_);
lean_dec(v___x_6631_);
v___x_6649_ = lean_box(0);
v_isShared_6650_ = v_isSharedCheck_6654_;
goto v_resetjp_6648_;
}
v_resetjp_6648_:
{
lean_object* v___x_6652_; 
if (v_isShared_6650_ == 0)
{
v___x_6652_ = v___x_6649_;
goto v_reusejp_6651_;
}
else
{
lean_object* v_reuseFailAlloc_6653_; 
v_reuseFailAlloc_6653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6653_, 0, v_a_6647_);
v___x_6652_ = v_reuseFailAlloc_6653_;
goto v_reusejp_6651_;
}
v_reusejp_6651_:
{
return v___x_6652_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_stats___boxed(lean_object* v_a_6655_){
_start:
{
lean_object* v_res_6656_; 
v_res_6656_ = l_Lasm_JS_stats();
return v_res_6656_;
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
l_Lasm_JS_Wire_maxLength = _init_l_Lasm_JS_Wire_maxLength();
lean_mark_persistent(l_Lasm_JS_Wire_maxLength);
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
