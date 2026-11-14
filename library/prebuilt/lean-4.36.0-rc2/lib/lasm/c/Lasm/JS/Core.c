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
double floor(double);
uint8_t lean_float_beq(double, double);
double l_Float_ofScientific(lean_object*, uint8_t, lean_object*);
uint8_t lean_float_decLt(double, double);
double lean_float_of_nat(lean_object*);
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
lean_object* lean_obj_tag_nat(lean_object*);
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
uint8_t lean_float_isnan(double);
uint8_t lean_float_isinf(double);
double lean_float_negate(double);
lean_object* lean_int_neg(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Data_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Data_ctorIdx___impl___boxed(lean_object*);
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
static lean_once_cell_t l_Lasm_JS_Data_describe___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lasm_JS_Data_describe___closed__6;
static const lean_string_object l_Lasm_JS_Data_describe___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Data_describe___closed__7 = (const lean_object*)&l_Lasm_JS_Data_describe___closed__7_value;
static const lean_string_object l_Lasm_JS_Data_describe___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Lasm_JS_Data_describe___closed__8 = (const lean_object*)&l_Lasm_JS_Data_describe___closed__8_value;
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_write_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_write_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Array_foldlM__unattach_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Array_foldlM__unattach_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_encode(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_ctorIdx___impl___boxed(lean_object*);
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
static const lean_ctor_object l_Lasm_JS_instFromJSValue___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Data_describe___closed__7_value)}};
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
static const lean_ctor_object l_Lasm_JS_instFromJSString___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Data_describe___closed__7_value)}};
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
static const lean_ctor_object l_Lasm_JS_instFromJSBool___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Data_describe___closed__7_value)}};
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
static const lean_ctor_object l_Lasm_JS_instFromJSFloat___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Data_describe___closed__7_value)}};
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
static const lean_ctor_object l_Lasm_JS_instFromJSByteArray___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Data_describe___closed__7_value)}};
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
static const lean_ctor_object l_Lasm_JS_instFromJSInt___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Data_describe___closed__7_value)}};
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
static const lean_ctor_object l_Lasm_JS_instFromJSNat___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Data_describe___closed__7_value)}};
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
static const lean_ctor_object l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Data_describe___closed__7_value)}};
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
static const lean_ctor_object l_Lasm_JS_instFromJSList___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Data_describe___closed__7_value)}};
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
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_ctorIdx___impl___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__1(uint64_t, uint8_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__2(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_reply___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
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
LEAN_EXPORT lean_object* l_Lasm_JS_Data_ctorIdx___impl(lean_object* v_x_19_){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = lean_obj_tag_nat(v_x_19_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_ctorIdx___impl___boxed(lean_object* v_x_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lasm_JS_Data_ctorIdx___impl(v_x_21_);
lean_dec(v_x_21_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_ctorElim___redArg(lean_object* v_t_23_, lean_object* v_k_24_){
_start:
{
switch(lean_obj_tag(v_t_23_))
{
case 2:
{
uint8_t v_b_25_; lean_object* v___x_26_; lean_object* v___x_27_; 
v_b_25_ = lean_ctor_get_uint8(v_t_23_, 0);
lean_dec_ref_known(v_t_23_, 0);
v___x_26_ = lean_box(v_b_25_);
v___x_27_ = lean_apply_1(v_k_24_, v___x_26_);
return v___x_27_;
}
case 3:
{
double v_n_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v_n_28_ = lean_ctor_get_float(v_t_23_, 0);
lean_dec_ref_known(v_t_23_, 0);
v___x_29_ = lean_box_float(v_n_28_);
v___x_30_ = lean_apply_1(v_k_24_, v___x_29_);
return v___x_30_;
}
case 4:
{
lean_object* v_s_31_; lean_object* v___x_32_; 
v_s_31_ = lean_ctor_get(v_t_23_, 0);
lean_inc_ref(v_s_31_);
lean_dec_ref_known(v_t_23_, 1);
v___x_32_ = lean_apply_1(v_k_24_, v_s_31_);
return v___x_32_;
}
case 5:
{
lean_object* v_i_33_; lean_object* v___x_34_; 
v_i_33_ = lean_ctor_get(v_t_23_, 0);
lean_inc(v_i_33_);
lean_dec_ref_known(v_t_23_, 1);
v___x_34_ = lean_apply_1(v_k_24_, v_i_33_);
return v___x_34_;
}
case 6:
{
lean_object* v_b_35_; lean_object* v___x_36_; 
v_b_35_ = lean_ctor_get(v_t_23_, 0);
lean_inc_ref(v_b_35_);
lean_dec_ref_known(v_t_23_, 1);
v___x_36_ = lean_apply_1(v_k_24_, v_b_35_);
return v___x_36_;
}
case 7:
{
lean_object* v_items_37_; lean_object* v___x_38_; 
v_items_37_ = lean_ctor_get(v_t_23_, 0);
lean_inc_ref(v_items_37_);
lean_dec_ref_known(v_t_23_, 1);
v___x_38_ = lean_apply_1(v_k_24_, v_items_37_);
return v___x_38_;
}
case 8:
{
lean_object* v_fields_39_; lean_object* v___x_40_; 
v_fields_39_ = lean_ctor_get(v_t_23_, 0);
lean_inc_ref(v_fields_39_);
lean_dec_ref_known(v_t_23_, 1);
v___x_40_ = lean_apply_1(v_k_24_, v_fields_39_);
return v___x_40_;
}
case 9:
{
lean_object* v_value_41_; lean_object* v_description_42_; lean_object* v___x_43_; 
v_value_41_ = lean_ctor_get(v_t_23_, 0);
lean_inc(v_value_41_);
v_description_42_ = lean_ctor_get(v_t_23_, 1);
lean_inc_ref(v_description_42_);
lean_dec_ref_known(v_t_23_, 2);
v___x_43_ = lean_apply_2(v_k_24_, v_value_41_, v_description_42_);
return v___x_43_;
}
default: 
{
lean_dec(v_t_23_);
return v_k_24_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_ctorElim(lean_object* v_motive__1_44_, lean_object* v_ctorIdx_45_, lean_object* v_t_46_, lean_object* v_h_47_, lean_object* v_k_48_){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_46_, v_k_48_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_ctorElim___boxed(lean_object* v_motive__1_50_, lean_object* v_ctorIdx_51_, lean_object* v_t_52_, lean_object* v_h_53_, lean_object* v_k_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = l_Lasm_JS_Data_ctorElim(v_motive__1_50_, v_ctorIdx_51_, v_t_52_, v_h_53_, v_k_54_);
lean_dec(v_ctorIdx_51_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_undefined_elim___redArg(lean_object* v_t_56_, lean_object* v_undefined_57_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_56_, v_undefined_57_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_undefined_elim(lean_object* v_motive__1_59_, lean_object* v_t_60_, lean_object* v_h_61_, lean_object* v_undefined_62_){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_60_, v_undefined_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_null_elim___redArg(lean_object* v_t_64_, lean_object* v_null_65_){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_64_, v_null_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_null_elim(lean_object* v_motive__1_67_, lean_object* v_t_68_, lean_object* v_h_69_, lean_object* v_null_70_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_68_, v_null_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_bool_elim___redArg(lean_object* v_t_72_, lean_object* v_bool_73_){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_72_, v_bool_73_);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_bool_elim(lean_object* v_motive__1_75_, lean_object* v_t_76_, lean_object* v_h_77_, lean_object* v_bool_78_){
_start:
{
lean_object* v___x_79_; 
v___x_79_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_76_, v_bool_78_);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_number_elim___redArg(lean_object* v_t_80_, lean_object* v_number_81_){
_start:
{
lean_object* v___x_82_; 
v___x_82_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_80_, v_number_81_);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_number_elim(lean_object* v_motive__1_83_, lean_object* v_t_84_, lean_object* v_h_85_, lean_object* v_number_86_){
_start:
{
lean_object* v___x_87_; 
v___x_87_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_84_, v_number_86_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_string_elim___redArg(lean_object* v_t_88_, lean_object* v_string_89_){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_88_, v_string_89_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_string_elim(lean_object* v_motive__1_91_, lean_object* v_t_92_, lean_object* v_h_93_, lean_object* v_string_94_){
_start:
{
lean_object* v___x_95_; 
v___x_95_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_92_, v_string_94_);
return v___x_95_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_bigint_elim___redArg(lean_object* v_t_96_, lean_object* v_bigint_97_){
_start:
{
lean_object* v___x_98_; 
v___x_98_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_96_, v_bigint_97_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_bigint_elim(lean_object* v_motive__1_99_, lean_object* v_t_100_, lean_object* v_h_101_, lean_object* v_bigint_102_){
_start:
{
lean_object* v___x_103_; 
v___x_103_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_100_, v_bigint_102_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_bytes_elim___redArg(lean_object* v_t_104_, lean_object* v_bytes_105_){
_start:
{
lean_object* v___x_106_; 
v___x_106_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_104_, v_bytes_105_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_bytes_elim(lean_object* v_motive__1_107_, lean_object* v_t_108_, lean_object* v_h_109_, lean_object* v_bytes_110_){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_108_, v_bytes_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_array_elim___redArg(lean_object* v_t_112_, lean_object* v_array_113_){
_start:
{
lean_object* v___x_114_; 
v___x_114_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_112_, v_array_113_);
return v___x_114_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_array_elim(lean_object* v_motive__1_115_, lean_object* v_t_116_, lean_object* v_h_117_, lean_object* v_array_118_){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_116_, v_array_118_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_object_elim___redArg(lean_object* v_t_120_, lean_object* v_object_121_){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_120_, v_object_121_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_object_elim(lean_object* v_motive__1_123_, lean_object* v_t_124_, lean_object* v_h_125_, lean_object* v_object_126_){
_start:
{
lean_object* v___x_127_; 
v___x_127_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_124_, v_object_126_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_ref_elim___redArg(lean_object* v_t_128_, lean_object* v_ref_129_){
_start:
{
lean_object* v___x_130_; 
v___x_130_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_128_, v_ref_129_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_ref_elim(lean_object* v_motive__1_131_, lean_object* v_t_132_, lean_object* v_h_133_, lean_object* v_ref_134_){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = l_Lasm_JS_Data_ctorElim___redArg(v_t_132_, v_ref_134_);
return v___x_135_;
}
}
static lean_object* _init_l_Lasm_JS_instInhabitedData_default(void){
_start:
{
lean_object* v___x_136_; 
v___x_136_ = lean_box(0);
return v___x_136_;
}
}
static lean_object* _init_l_Lasm_JS_instInhabitedData(void){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = lean_box(0);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lasm_JS_Data_describe_spec__0(lean_object* v_a_138_, lean_object* v_a_139_){
_start:
{
if (lean_obj_tag(v_a_138_) == 0)
{
lean_object* v___x_140_; 
v___x_140_ = l_List_reverse___redArg(v_a_139_);
return v___x_140_;
}
else
{
lean_object* v_head_141_; lean_object* v_tail_142_; lean_object* v___x_144_; uint8_t v_isShared_145_; uint8_t v_isSharedCheck_151_; 
v_head_141_ = lean_ctor_get(v_a_138_, 0);
v_tail_142_ = lean_ctor_get(v_a_138_, 1);
v_isSharedCheck_151_ = !lean_is_exclusive(v_a_138_);
if (v_isSharedCheck_151_ == 0)
{
v___x_144_ = v_a_138_;
v_isShared_145_ = v_isSharedCheck_151_;
goto v_resetjp_143_;
}
else
{
lean_inc(v_tail_142_);
lean_inc(v_head_141_);
lean_dec(v_a_138_);
v___x_144_ = lean_box(0);
v_isShared_145_ = v_isSharedCheck_151_;
goto v_resetjp_143_;
}
v_resetjp_143_:
{
lean_object* v_fst_146_; lean_object* v___x_148_; 
v_fst_146_ = lean_ctor_get(v_head_141_, 0);
lean_inc(v_fst_146_);
lean_dec(v_head_141_);
if (v_isShared_145_ == 0)
{
lean_ctor_set(v___x_144_, 1, v_a_139_);
lean_ctor_set(v___x_144_, 0, v_fst_146_);
v___x_148_ = v___x_144_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v_fst_146_);
lean_ctor_set(v_reuseFailAlloc_150_, 1, v_a_139_);
v___x_148_ = v_reuseFailAlloc_150_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
v_a_138_ = v_tail_142_;
v_a_139_ = v___x_148_;
goto _start;
}
}
}
}
}
static double _init_l_Lasm_JS_Data_describe___closed__5(void){
_start:
{
lean_object* v___x_157_; uint8_t v___x_158_; lean_object* v___x_159_; double v___x_160_; 
v___x_157_ = lean_unsigned_to_nat(15u);
v___x_158_ = 0;
v___x_159_ = lean_unsigned_to_nat(1u);
v___x_160_ = l_Float_ofScientific(v___x_159_, v___x_158_, v___x_157_);
return v___x_160_;
}
}
static double _init_l_Lasm_JS_Data_describe___closed__6(void){
_start:
{
lean_object* v___x_161_; double v___x_162_; 
v___x_161_ = lean_unsigned_to_nat(0u);
v___x_162_ = lean_float_of_nat(v___x_161_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_describe(lean_object* v_x_178_){
_start:
{
switch(lean_obj_tag(v_x_178_))
{
case 0:
{
lean_object* v___x_179_; 
v___x_179_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__0));
return v___x_179_;
}
case 1:
{
lean_object* v___x_180_; 
v___x_180_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__1));
return v___x_180_;
}
case 2:
{
uint8_t v_b_181_; 
v_b_181_ = lean_ctor_get_uint8(v_x_178_, 0);
lean_dec_ref_known(v_x_178_, 0);
if (v_b_181_ == 0)
{
lean_object* v___x_182_; 
v___x_182_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__2));
return v___x_182_;
}
else
{
lean_object* v___x_183_; 
v___x_183_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__3));
return v___x_183_;
}
}
case 3:
{
double v_n_184_; lean_object* v___x_185_; lean_object* v___y_187_; double v___x_197_; uint8_t v___x_198_; 
v_n_184_ = lean_ctor_get_float(v_x_178_, 0);
lean_dec_ref_known(v_x_178_, 0);
v___x_185_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__4));
v___x_197_ = floor(v_n_184_);
v___x_198_ = lean_float_beq(v___x_197_, v_n_184_);
if (v___x_198_ == 0)
{
goto v___jp_194_;
}
else
{
double v___x_199_; double v___x_200_; uint8_t v___x_201_; 
v___x_199_ = fabs(v_n_184_);
v___x_200_ = lean_float_once(&l_Lasm_JS_Data_describe___closed__5, &l_Lasm_JS_Data_describe___closed__5_once, _init_l_Lasm_JS_Data_describe___closed__5);
v___x_201_ = lean_float_decLt(v___x_199_, v___x_200_);
if (v___x_201_ == 0)
{
goto v___jp_194_;
}
else
{
double v___x_202_; uint8_t v___x_203_; 
v___x_202_ = lean_float_once(&l_Lasm_JS_Data_describe___closed__6, &l_Lasm_JS_Data_describe___closed__6_once, _init_l_Lasm_JS_Data_describe___closed__6);
v___x_203_ = lean_float_decLt(v_n_184_, v___x_202_);
if (v___x_203_ == 0)
{
lean_object* v___x_204_; 
v___x_204_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___y_187_ = v___x_204_;
goto v___jp_186_;
}
else
{
lean_object* v___x_205_; 
v___x_205_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__8));
v___y_187_ = v___x_205_;
goto v___jp_186_;
}
}
}
v___jp_186_:
{
double v___x_188_; uint64_t v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_188_ = fabs(v_n_184_);
v___x_189_ = lean_float_to_uint64(v___x_188_);
v___x_190_ = lean_uint64_to_nat(v___x_189_);
v___x_191_ = l_Nat_reprFast(v___x_190_);
lean_inc_ref(v___y_187_);
v___x_192_ = lean_string_append(v___y_187_, v___x_191_);
lean_dec_ref(v___x_191_);
v___x_193_ = lean_string_append(v___x_185_, v___x_192_);
lean_dec_ref(v___x_192_);
return v___x_193_;
}
v___jp_194_:
{
lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_195_ = lean_float_to_string(v_n_184_);
v___x_196_ = lean_string_append(v___x_185_, v___x_195_);
lean_dec_ref(v___x_195_);
return v___x_196_;
}
}
case 4:
{
lean_object* v_s_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_233_; 
v_s_206_ = lean_ctor_get(v_x_178_, 0);
v_isSharedCheck_233_ = !lean_is_exclusive(v_x_178_);
if (v_isSharedCheck_233_ == 0)
{
v___x_208_ = v_x_178_;
v_isShared_209_ = v_isSharedCheck_233_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_s_206_);
lean_dec(v_x_178_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_233_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v___x_210_; lean_object* v___y_212_; lean_object* v___x_221_; lean_object* v___x_222_; uint8_t v___x_223_; 
v___x_210_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__9));
v___x_221_ = lean_unsigned_to_nat(60u);
v___x_222_ = lean_string_length(v_s_206_);
v___x_223_ = lean_nat_dec_lt(v___x_221_, v___x_222_);
if (v___x_223_ == 0)
{
v___y_212_ = v_s_206_;
goto v___jp_211_;
}
else
{
lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; 
v___x_224_ = lean_unsigned_to_nat(57u);
v___x_225_ = lean_unsigned_to_nat(0u);
v___x_226_ = lean_string_utf8_byte_size(v_s_206_);
lean_inc_ref(v_s_206_);
v___x_227_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_227_, 0, v_s_206_);
lean_ctor_set(v___x_227_, 1, v___x_225_);
lean_ctor_set(v___x_227_, 2, v___x_226_);
v___x_228_ = l_String_Slice_Pos_nextn(v___x_227_, v___x_225_, v___x_224_);
lean_dec_ref_known(v___x_227_, 3);
v___x_229_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_229_, 0, v_s_206_);
lean_ctor_set(v___x_229_, 1, v___x_225_);
lean_ctor_set(v___x_229_, 2, v___x_228_);
v___x_230_ = l_String_Slice_toString(v___x_229_);
lean_dec_ref_known(v___x_229_, 3);
v___x_231_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__10));
v___x_232_ = lean_string_append(v___x_230_, v___x_231_);
v___y_212_ = v___x_232_;
goto v___jp_211_;
}
v___jp_211_:
{
lean_object* v___x_213_; lean_object* v___x_215_; 
v___x_213_ = l_String_quote(v___y_212_);
if (v_isShared_209_ == 0)
{
lean_ctor_set_tag(v___x_208_, 3);
lean_ctor_set(v___x_208_, 0, v___x_213_);
v___x_215_ = v___x_208_;
goto v_reusejp_214_;
}
else
{
lean_object* v_reuseFailAlloc_220_; 
v_reuseFailAlloc_220_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_220_, 0, v___x_213_);
v___x_215_ = v_reuseFailAlloc_220_;
goto v_reusejp_214_;
}
v_reusejp_214_:
{
lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_216_ = lean_unsigned_to_nat(120u);
v___x_217_ = lean_unsigned_to_nat(0u);
v___x_218_ = l_Std_Format_pretty(v___x_215_, v___x_216_, v___x_217_, v___x_217_);
v___x_219_ = lean_string_append(v___x_210_, v___x_218_);
lean_dec_ref(v___x_218_);
return v___x_219_;
}
}
}
}
case 5:
{
lean_object* v_i_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
v_i_234_ = lean_ctor_get(v_x_178_, 0);
lean_inc(v_i_234_);
lean_dec_ref_known(v_x_178_, 1);
v___x_235_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__11));
v___x_236_ = l_Int_repr(v_i_234_);
lean_dec(v_i_234_);
v___x_237_ = lean_string_append(v___x_235_, v___x_236_);
lean_dec_ref(v___x_236_);
v___x_238_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__12));
v___x_239_ = lean_string_append(v___x_237_, v___x_238_);
return v___x_239_;
}
case 6:
{
lean_object* v_b_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
v_b_240_ = lean_ctor_get(v_x_178_, 0);
lean_inc_ref(v_b_240_);
lean_dec_ref_known(v_x_178_, 1);
v___x_241_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__13));
v___x_242_ = lean_byte_array_size(v_b_240_);
lean_dec_ref(v_b_240_);
v___x_243_ = l_Nat_reprFast(v___x_242_);
v___x_244_ = lean_string_append(v___x_241_, v___x_243_);
lean_dec_ref(v___x_243_);
return v___x_244_;
}
case 7:
{
lean_object* v_items_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v_items_245_ = lean_ctor_get(v_x_178_, 0);
lean_inc_ref(v_items_245_);
lean_dec_ref_known(v_x_178_, 1);
v___x_246_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__14));
v___x_247_ = lean_array_get_size(v_items_245_);
lean_dec_ref(v_items_245_);
v___x_248_ = l_Nat_reprFast(v___x_247_);
v___x_249_ = lean_string_append(v___x_246_, v___x_248_);
lean_dec_ref(v___x_248_);
return v___x_249_;
}
case 8:
{
lean_object* v_fields_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___y_262_; lean_object* v___x_266_; uint8_t v___x_267_; 
v_fields_250_ = lean_ctor_get(v_x_178_, 0);
lean_inc_ref_n(v_fields_250_, 2);
lean_dec_ref_known(v_x_178_, 1);
v___x_251_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__15));
v___x_252_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__16));
v___x_253_ = lean_unsigned_to_nat(6u);
v___x_254_ = lean_array_to_list(v_fields_250_);
v___x_255_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__17));
lean_inc(v___x_254_);
v___x_256_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_254_, v___x_254_, v___x_253_, v___x_255_);
lean_dec(v___x_254_);
v___x_257_ = lean_box(0);
v___x_258_ = l_List_mapTR_loop___at___00Lasm_JS_Data_describe_spec__0(v___x_256_, v___x_257_);
v___x_259_ = l_String_intercalate(v___x_252_, v___x_258_);
v___x_260_ = lean_string_append(v___x_251_, v___x_259_);
lean_dec_ref(v___x_259_);
v___x_266_ = lean_array_get_size(v_fields_250_);
lean_dec_ref(v_fields_250_);
v___x_267_ = lean_nat_dec_lt(v___x_253_, v___x_266_);
if (v___x_267_ == 0)
{
lean_object* v___x_268_; 
v___x_268_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___y_262_ = v___x_268_;
goto v___jp_261_;
}
else
{
lean_object* v___x_269_; 
v___x_269_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__19));
v___y_262_ = v___x_269_;
goto v___jp_261_;
}
v___jp_261_:
{
lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_263_ = lean_string_append(v___x_260_, v___y_262_);
v___x_264_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__18));
v___x_265_ = lean_string_append(v___x_263_, v___x_264_);
return v___x_265_;
}
}
default: 
{
lean_object* v_description_270_; lean_object* v___x_271_; lean_object* v___x_272_; uint8_t v___x_273_; 
v_description_270_ = lean_ctor_get(v_x_178_, 1);
lean_inc_ref(v_description_270_);
lean_dec_ref_known(v_x_178_, 2);
v___x_271_ = lean_string_utf8_byte_size(v_description_270_);
v___x_272_ = lean_unsigned_to_nat(0u);
v___x_273_ = lean_nat_dec_eq(v___x_271_, v___x_272_);
if (v___x_273_ == 0)
{
return v_description_270_;
}
else
{
lean_object* v___x_274_; 
lean_dec_ref(v_description_270_);
v___x_274_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__20));
return v___x_274_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Data_field_spec__0(lean_object* v_key_278_, lean_object* v_as_279_, size_t v_sz_280_, size_t v_i_281_, lean_object* v_b_282_){
_start:
{
uint8_t v___x_283_; 
v___x_283_ = lean_usize_dec_lt(v_i_281_, v_sz_280_);
if (v___x_283_ == 0)
{
lean_inc_ref(v_b_282_);
return v_b_282_;
}
else
{
lean_object* v_a_284_; lean_object* v_fst_285_; lean_object* v___x_286_; uint8_t v___x_287_; 
v_a_284_ = lean_array_uget_borrowed(v_as_279_, v_i_281_);
v_fst_285_ = lean_ctor_get(v_a_284_, 0);
v___x_286_ = lean_box(0);
v___x_287_ = lean_string_dec_eq(v_fst_285_, v_key_278_);
if (v___x_287_ == 0)
{
lean_object* v___x_288_; size_t v___x_289_; size_t v___x_290_; 
v___x_288_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Data_field_spec__0___closed__0));
v___x_289_ = ((size_t)1ULL);
v___x_290_ = lean_usize_add(v_i_281_, v___x_289_);
v_i_281_ = v___x_290_;
v_b_282_ = v___x_288_;
goto _start;
}
else
{
lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; 
lean_inc(v_a_284_);
v___x_292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_292_, 0, v_a_284_);
v___x_293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_293_, 0, v___x_292_);
v___x_294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_294_, 0, v___x_293_);
lean_ctor_set(v___x_294_, 1, v___x_286_);
return v___x_294_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Data_field_spec__0___boxed(lean_object* v_key_295_, lean_object* v_as_296_, lean_object* v_sz_297_, lean_object* v_i_298_, lean_object* v_b_299_){
_start:
{
size_t v_sz_boxed_300_; size_t v_i_boxed_301_; lean_object* v_res_302_; 
v_sz_boxed_300_ = lean_unbox_usize(v_sz_297_);
lean_dec(v_sz_297_);
v_i_boxed_301_ = lean_unbox_usize(v_i_298_);
lean_dec(v_i_298_);
v_res_302_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Data_field_spec__0(v_key_295_, v_as_296_, v_sz_boxed_300_, v_i_boxed_301_, v_b_299_);
lean_dec_ref(v_b_299_);
lean_dec_ref(v_as_296_);
lean_dec_ref(v_key_295_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_field(lean_object* v_d_303_, lean_object* v_key_304_){
_start:
{
if (lean_obj_tag(v_d_303_) == 8)
{
lean_object* v_fields_305_; lean_object* v___x_306_; size_t v_sz_307_; size_t v___x_308_; lean_object* v___x_309_; lean_object* v_fst_310_; 
v_fields_305_ = lean_ctor_get(v_d_303_, 0);
v___x_306_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Data_field_spec__0___closed__0));
v_sz_307_ = lean_array_size(v_fields_305_);
v___x_308_ = ((size_t)0ULL);
v___x_309_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lasm_JS_Data_field_spec__0(v_key_304_, v_fields_305_, v_sz_307_, v___x_308_, v___x_306_);
v_fst_310_ = lean_ctor_get(v___x_309_, 0);
lean_inc(v_fst_310_);
lean_dec_ref(v___x_309_);
if (lean_obj_tag(v_fst_310_) == 0)
{
lean_object* v___x_311_; 
v___x_311_ = lean_box(0);
return v___x_311_;
}
else
{
lean_object* v_val_312_; 
v_val_312_ = lean_ctor_get(v_fst_310_, 0);
lean_inc(v_val_312_);
lean_dec_ref_known(v_fst_310_, 1);
if (lean_obj_tag(v_val_312_) == 0)
{
lean_object* v___x_313_; 
v___x_313_ = lean_box(0);
return v___x_313_;
}
else
{
lean_object* v_val_314_; lean_object* v_snd_315_; 
v_val_314_ = lean_ctor_get(v_val_312_, 0);
lean_inc(v_val_314_);
lean_dec_ref_known(v_val_312_, 1);
v_snd_315_ = lean_ctor_get(v_val_314_, 1);
lean_inc(v_snd_315_);
lean_dec(v_val_314_);
return v_snd_315_;
}
}
}
else
{
lean_object* v___x_316_; 
v___x_316_ = lean_box(0);
return v___x_316_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Data_field___boxed(lean_object* v_d_317_, lean_object* v_key_318_){
_start:
{
lean_object* v_res_319_; 
v_res_319_ = l_Lasm_JS_Data_field(v_d_317_, v_key_318_);
lean_dec_ref(v_key_318_);
lean_dec(v_d_317_);
return v_res_319_;
}
}
static lean_object* _init_l_Lasm_JS_Wire_maxLength(void){
_start:
{
lean_object* v___x_320_; 
v___x_320_ = lean_unsigned_to_nat(4294967295u);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_pushU32(lean_object* v_b_321_, uint32_t v_n_322_){
_start:
{
uint8_t v___x_323_; lean_object* v___x_324_; uint32_t v___x_325_; uint32_t v___x_326_; uint8_t v___x_327_; lean_object* v___x_328_; uint32_t v___x_329_; uint32_t v___x_330_; uint8_t v___x_331_; lean_object* v___x_332_; uint32_t v___x_333_; uint32_t v___x_334_; uint8_t v___x_335_; lean_object* v___x_336_; 
v___x_323_ = lean_uint32_to_uint8(v_n_322_);
v___x_324_ = lean_byte_array_push(v_b_321_, v___x_323_);
v___x_325_ = 8;
v___x_326_ = lean_uint32_shift_right(v_n_322_, v___x_325_);
v___x_327_ = lean_uint32_to_uint8(v___x_326_);
v___x_328_ = lean_byte_array_push(v___x_324_, v___x_327_);
v___x_329_ = 16;
v___x_330_ = lean_uint32_shift_right(v_n_322_, v___x_329_);
v___x_331_ = lean_uint32_to_uint8(v___x_330_);
v___x_332_ = lean_byte_array_push(v___x_328_, v___x_331_);
v___x_333_ = 24;
v___x_334_ = lean_uint32_shift_right(v_n_322_, v___x_333_);
v___x_335_ = lean_uint32_to_uint8(v___x_334_);
v___x_336_ = lean_byte_array_push(v___x_332_, v___x_335_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_pushU32___boxed(lean_object* v_b_337_, lean_object* v_n_338_){
_start:
{
uint32_t v_n_boxed_339_; lean_object* v_res_340_; 
v_n_boxed_339_ = lean_unbox_uint32(v_n_338_);
lean_dec(v_n_338_);
v_res_340_ = l_Lasm_JS_Wire_pushU32(v_b_337_, v_n_boxed_339_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_pushU64(lean_object* v_b_341_, uint64_t v_n_342_){
_start:
{
uint8_t v___x_343_; lean_object* v___x_344_; uint64_t v___x_345_; uint64_t v___x_346_; uint8_t v___x_347_; lean_object* v___x_348_; uint64_t v___x_349_; uint64_t v___x_350_; uint8_t v___x_351_; lean_object* v___x_352_; uint64_t v___x_353_; uint64_t v___x_354_; uint8_t v___x_355_; lean_object* v___x_356_; uint64_t v___x_357_; uint64_t v___x_358_; uint8_t v___x_359_; lean_object* v___x_360_; uint64_t v___x_361_; uint64_t v___x_362_; uint8_t v___x_363_; lean_object* v___x_364_; uint64_t v___x_365_; uint64_t v___x_366_; uint8_t v___x_367_; lean_object* v___x_368_; uint64_t v___x_369_; uint64_t v___x_370_; uint8_t v___x_371_; lean_object* v___x_372_; 
v___x_343_ = lean_uint64_to_uint8(v_n_342_);
v___x_344_ = lean_byte_array_push(v_b_341_, v___x_343_);
v___x_345_ = 8ULL;
v___x_346_ = lean_uint64_shift_right(v_n_342_, v___x_345_);
v___x_347_ = lean_uint64_to_uint8(v___x_346_);
v___x_348_ = lean_byte_array_push(v___x_344_, v___x_347_);
v___x_349_ = 16ULL;
v___x_350_ = lean_uint64_shift_right(v_n_342_, v___x_349_);
v___x_351_ = lean_uint64_to_uint8(v___x_350_);
v___x_352_ = lean_byte_array_push(v___x_348_, v___x_351_);
v___x_353_ = 24ULL;
v___x_354_ = lean_uint64_shift_right(v_n_342_, v___x_353_);
v___x_355_ = lean_uint64_to_uint8(v___x_354_);
v___x_356_ = lean_byte_array_push(v___x_352_, v___x_355_);
v___x_357_ = 32ULL;
v___x_358_ = lean_uint64_shift_right(v_n_342_, v___x_357_);
v___x_359_ = lean_uint64_to_uint8(v___x_358_);
v___x_360_ = lean_byte_array_push(v___x_356_, v___x_359_);
v___x_361_ = 40ULL;
v___x_362_ = lean_uint64_shift_right(v_n_342_, v___x_361_);
v___x_363_ = lean_uint64_to_uint8(v___x_362_);
v___x_364_ = lean_byte_array_push(v___x_360_, v___x_363_);
v___x_365_ = 48ULL;
v___x_366_ = lean_uint64_shift_right(v_n_342_, v___x_365_);
v___x_367_ = lean_uint64_to_uint8(v___x_366_);
v___x_368_ = lean_byte_array_push(v___x_364_, v___x_367_);
v___x_369_ = 56ULL;
v___x_370_ = lean_uint64_shift_right(v_n_342_, v___x_369_);
v___x_371_ = lean_uint64_to_uint8(v___x_370_);
v___x_372_ = lean_byte_array_push(v___x_368_, v___x_371_);
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_pushU64___boxed(lean_object* v_b_373_, lean_object* v_n_374_){
_start:
{
uint64_t v_n_boxed_375_; lean_object* v_res_376_; 
v_n_boxed_375_ = lean_unbox_uint64(v_n_374_);
lean_dec_ref(v_n_374_);
v_res_376_ = l_Lasm_JS_Wire_pushU64(v_b_373_, v_n_boxed_375_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_pushLength(lean_object* v_b_383_, lean_object* v_n_384_, lean_object* v_what_385_, lean_object* v_unit_386_){
_start:
{
lean_object* v___x_387_; uint8_t v___x_388_; 
v___x_387_ = lean_unsigned_to_nat(4294967295u);
v___x_388_ = lean_nat_dec_le(v_n_384_, v___x_387_);
if (v___x_388_ == 0)
{
lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
lean_dec_ref(v_b_383_);
v___x_389_ = ((lean_object*)(l_Lasm_JS_Wire_pushLength___closed__0));
v___x_390_ = lean_string_append(v___x_389_, v_what_385_);
v___x_391_ = ((lean_object*)(l_Lasm_JS_Wire_pushLength___closed__1));
v___x_392_ = lean_string_append(v___x_390_, v___x_391_);
v___x_393_ = l_Nat_reprFast(v_n_384_);
v___x_394_ = lean_string_append(v___x_392_, v___x_393_);
lean_dec_ref(v___x_393_);
v___x_395_ = ((lean_object*)(l_Lasm_JS_Wire_pushLength___closed__2));
v___x_396_ = lean_string_append(v___x_394_, v___x_395_);
v___x_397_ = lean_string_append(v___x_396_, v_unit_386_);
v___x_398_ = ((lean_object*)(l_Lasm_JS_Wire_pushLength___closed__3));
v___x_399_ = lean_string_append(v___x_397_, v___x_398_);
v___x_400_ = ((lean_object*)(l_Lasm_JS_Wire_pushLength___closed__4));
v___x_401_ = lean_string_append(v___x_399_, v___x_400_);
v___x_402_ = ((lean_object*)(l_Lasm_JS_Wire_pushLength___closed__5));
v___x_403_ = lean_string_append(v___x_401_, v___x_402_);
v___x_404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_404_, 0, v___x_403_);
return v___x_404_;
}
else
{
uint32_t v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_405_ = lean_uint32_of_nat(v_n_384_);
lean_dec(v_n_384_);
v___x_406_ = l_Lasm_JS_Wire_pushU32(v_b_383_, v___x_405_);
v___x_407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_407_, 0, v___x_406_);
return v___x_407_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_pushLength___boxed(lean_object* v_b_408_, lean_object* v_n_409_, lean_object* v_what_410_, lean_object* v_unit_411_){
_start:
{
lean_object* v_res_412_; 
v_res_412_ = l_Lasm_JS_Wire_pushLength(v_b_408_, v_n_409_, v_what_410_, v_unit_411_);
lean_dec_ref(v_unit_411_);
lean_dec_ref(v_what_410_);
return v_res_412_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_pushString(lean_object* v_b_414_, lean_object* v_s_415_, lean_object* v_what_416_){
_start:
{
lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; 
v___x_417_ = lean_string_utf8_byte_size(v_s_415_);
v___x_418_ = ((lean_object*)(l_Lasm_JS_Wire_pushString___closed__0));
v___x_419_ = l_Lasm_JS_Wire_pushLength(v_b_414_, v___x_417_, v_what_416_, v___x_418_);
if (lean_obj_tag(v___x_419_) == 0)
{
lean_dec_ref(v_s_415_);
return v___x_419_;
}
else
{
lean_object* v_a_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_433_; 
v_a_420_ = lean_ctor_get(v___x_419_, 0);
v_isSharedCheck_433_ = !lean_is_exclusive(v___x_419_);
if (v_isSharedCheck_433_ == 0)
{
v___x_422_ = v___x_419_;
v_isShared_423_ = v_isSharedCheck_433_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_a_420_);
lean_dec(v___x_419_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_433_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; uint8_t v___x_428_; lean_object* v___x_429_; lean_object* v___x_431_; 
v___x_424_ = lean_string_to_utf8(v_s_415_);
v___x_425_ = lean_unsigned_to_nat(0u);
v___x_426_ = lean_byte_array_size(v_a_420_);
v___x_427_ = lean_byte_array_size(v___x_424_);
v___x_428_ = 0;
v___x_429_ = lean_byte_array_copy_slice(v___x_424_, v___x_425_, v_a_420_, v___x_426_, v___x_427_, v___x_428_);
lean_dec_ref(v___x_424_);
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 0, v___x_429_);
v___x_431_ = v___x_422_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v___x_429_);
v___x_431_ = v_reuseFailAlloc_432_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
return v___x_431_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_pushString___boxed(lean_object* v_b_434_, lean_object* v_s_435_, lean_object* v_what_436_){
_start:
{
lean_object* v_res_437_; 
v_res_437_ = l_Lasm_JS_Wire_pushString(v_b_434_, v_s_435_, v_what_436_);
lean_dec_ref(v_what_436_);
return v_res_437_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__1(lean_object* v_as_446_, size_t v_i_447_, size_t v_stop_448_, lean_object* v_b_449_){
_start:
{
uint8_t v___x_450_; 
v___x_450_ = lean_usize_dec_eq(v_i_447_, v_stop_448_);
if (v___x_450_ == 0)
{
lean_object* v___x_451_; lean_object* v_fst_452_; lean_object* v_snd_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_451_ = lean_array_uget_borrowed(v_as_446_, v_i_447_);
v_fst_452_ = lean_ctor_get(v___x_451_, 0);
v_snd_453_ = lean_ctor_get(v___x_451_, 1);
v___x_454_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__1___closed__0));
lean_inc(v_fst_452_);
v___x_455_ = l_Lasm_JS_Wire_pushString(v_b_449_, v_fst_452_, v___x_454_);
if (lean_obj_tag(v___x_455_) == 0)
{
return v___x_455_;
}
else
{
lean_object* v_a_456_; lean_object* v___x_457_; 
v_a_456_ = lean_ctor_get(v___x_455_, 0);
lean_inc(v_a_456_);
lean_dec_ref_known(v___x_455_, 1);
lean_inc(v_snd_453_);
v___x_457_ = l_Lasm_JS_Wire_write(v_a_456_, v_snd_453_);
if (lean_obj_tag(v___x_457_) == 0)
{
return v___x_457_;
}
else
{
lean_object* v_a_458_; size_t v___x_459_; size_t v___x_460_; 
v_a_458_ = lean_ctor_get(v___x_457_, 0);
lean_inc(v_a_458_);
lean_dec_ref_known(v___x_457_, 1);
v___x_459_ = ((size_t)1ULL);
v___x_460_ = lean_usize_add(v_i_447_, v___x_459_);
v_i_447_ = v___x_460_;
v_b_449_ = v_a_458_;
goto _start;
}
}
}
else
{
lean_object* v___x_462_; 
v___x_462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_462_, 0, v_b_449_);
return v___x_462_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_write(lean_object* v_b_463_, lean_object* v_x_464_){
_start:
{
switch(lean_obj_tag(v_x_464_))
{
case 0:
{
uint8_t v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; 
v___x_465_ = 0;
v___x_466_ = lean_byte_array_push(v_b_463_, v___x_465_);
v___x_467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_467_, 0, v___x_466_);
return v___x_467_;
}
case 1:
{
uint8_t v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_468_ = 1;
v___x_469_ = lean_byte_array_push(v_b_463_, v___x_468_);
v___x_470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_470_, 0, v___x_469_);
return v___x_470_;
}
case 2:
{
uint8_t v_b_471_; 
v_b_471_ = lean_ctor_get_uint8(v_x_464_, 0);
lean_dec_ref_known(v_x_464_, 0);
if (v_b_471_ == 0)
{
uint8_t v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_472_ = 2;
v___x_473_ = lean_byte_array_push(v_b_463_, v___x_472_);
v___x_474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_474_, 0, v___x_473_);
return v___x_474_;
}
else
{
uint8_t v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; 
v___x_475_ = 3;
v___x_476_ = lean_byte_array_push(v_b_463_, v___x_475_);
v___x_477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_477_, 0, v___x_476_);
return v___x_477_;
}
}
case 3:
{
double v_n_478_; uint8_t v___x_479_; lean_object* v___x_480_; uint64_t v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v_n_478_ = lean_ctor_get_float(v_x_464_, 0);
lean_dec_ref_known(v_x_464_, 0);
v___x_479_ = 4;
v___x_480_ = lean_byte_array_push(v_b_463_, v___x_479_);
v___x_481_ = lean_float_to_bits(v_n_478_);
v___x_482_ = l_Lasm_JS_Wire_pushU64(v___x_480_, v___x_481_);
v___x_483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_483_, 0, v___x_482_);
return v___x_483_;
}
case 4:
{
lean_object* v_s_484_; uint8_t v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; 
v_s_484_ = lean_ctor_get(v_x_464_, 0);
lean_inc_ref(v_s_484_);
lean_dec_ref_known(v_x_464_, 1);
v___x_485_ = 5;
v___x_486_ = lean_byte_array_push(v_b_463_, v___x_485_);
v___x_487_ = ((lean_object*)(l_Lasm_JS_Wire_write___closed__0));
v___x_488_ = l_Lasm_JS_Wire_pushString(v___x_486_, v_s_484_, v___x_487_);
return v___x_488_;
}
case 5:
{
lean_object* v_i_489_; uint8_t v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
v_i_489_ = lean_ctor_get(v_x_464_, 0);
lean_inc(v_i_489_);
lean_dec_ref_known(v_x_464_, 1);
v___x_490_ = 6;
v___x_491_ = lean_byte_array_push(v_b_463_, v___x_490_);
v___x_492_ = l_Int_repr(v_i_489_);
lean_dec(v_i_489_);
v___x_493_ = ((lean_object*)(l_Lasm_JS_Wire_write___closed__1));
v___x_494_ = l_Lasm_JS_Wire_pushString(v___x_491_, v___x_492_, v___x_493_);
return v___x_494_;
}
case 6:
{
lean_object* v_b_495_; uint8_t v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; 
v_b_495_ = lean_ctor_get(v_x_464_, 0);
lean_inc_ref(v_b_495_);
lean_dec_ref_known(v_x_464_, 1);
v___x_496_ = 7;
v___x_497_ = lean_byte_array_push(v_b_463_, v___x_496_);
v___x_498_ = lean_byte_array_size(v_b_495_);
v___x_499_ = ((lean_object*)(l_Lasm_JS_Wire_write___closed__2));
v___x_500_ = ((lean_object*)(l_Lasm_JS_Wire_pushString___closed__0));
v___x_501_ = l_Lasm_JS_Wire_pushLength(v___x_497_, v___x_498_, v___x_499_, v___x_500_);
if (lean_obj_tag(v___x_501_) == 0)
{
lean_dec_ref(v_b_495_);
return v___x_501_;
}
else
{
lean_object* v_a_502_; lean_object* v___x_504_; uint8_t v_isShared_505_; uint8_t v_isSharedCheck_513_; 
v_a_502_ = lean_ctor_get(v___x_501_, 0);
v_isSharedCheck_513_ = !lean_is_exclusive(v___x_501_);
if (v_isSharedCheck_513_ == 0)
{
v___x_504_ = v___x_501_;
v_isShared_505_ = v_isSharedCheck_513_;
goto v_resetjp_503_;
}
else
{
lean_inc(v_a_502_);
lean_dec(v___x_501_);
v___x_504_ = lean_box(0);
v_isShared_505_ = v_isSharedCheck_513_;
goto v_resetjp_503_;
}
v_resetjp_503_:
{
lean_object* v___x_506_; lean_object* v___x_507_; uint8_t v___x_508_; lean_object* v___x_509_; lean_object* v___x_511_; 
v___x_506_ = lean_unsigned_to_nat(0u);
v___x_507_ = lean_byte_array_size(v_a_502_);
v___x_508_ = 0;
v___x_509_ = lean_byte_array_copy_slice(v_b_495_, v___x_506_, v_a_502_, v___x_507_, v___x_498_, v___x_508_);
lean_dec_ref(v_b_495_);
if (v_isShared_505_ == 0)
{
lean_ctor_set(v___x_504_, 0, v___x_509_);
v___x_511_ = v___x_504_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_512_; 
v_reuseFailAlloc_512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_512_, 0, v___x_509_);
v___x_511_ = v_reuseFailAlloc_512_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
return v___x_511_;
}
}
}
}
case 7:
{
lean_object* v_items_514_; uint8_t v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; 
v_items_514_ = lean_ctor_get(v_x_464_, 0);
lean_inc_ref(v_items_514_);
lean_dec_ref_known(v_x_464_, 1);
v___x_515_ = 8;
v___x_516_ = lean_byte_array_push(v_b_463_, v___x_515_);
v___x_517_ = lean_array_get_size(v_items_514_);
v___x_518_ = ((lean_object*)(l_Lasm_JS_Wire_write___closed__3));
v___x_519_ = ((lean_object*)(l_Lasm_JS_Wire_write___closed__4));
v___x_520_ = l_Lasm_JS_Wire_pushLength(v___x_516_, v___x_517_, v___x_518_, v___x_519_);
if (lean_obj_tag(v___x_520_) == 0)
{
lean_dec_ref(v_items_514_);
return v___x_520_;
}
else
{
lean_object* v_a_521_; lean_object* v___x_522_; uint8_t v___x_523_; 
v_a_521_ = lean_ctor_get(v___x_520_, 0);
v___x_522_ = lean_unsigned_to_nat(0u);
v___x_523_ = lean_nat_dec_lt(v___x_522_, v___x_517_);
if (v___x_523_ == 0)
{
lean_dec_ref(v_items_514_);
return v___x_520_;
}
else
{
size_t v___x_524_; size_t v___x_525_; lean_object* v___x_526_; 
lean_inc(v_a_521_);
lean_dec_ref_known(v___x_520_, 1);
v___x_524_ = ((size_t)0ULL);
v___x_525_ = lean_usize_of_nat(v___x_517_);
v___x_526_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__0(v_items_514_, v___x_524_, v___x_525_, v_a_521_);
lean_dec_ref(v_items_514_);
return v___x_526_;
}
}
}
case 8:
{
lean_object* v_fields_527_; uint8_t v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; 
v_fields_527_ = lean_ctor_get(v_x_464_, 0);
lean_inc_ref(v_fields_527_);
lean_dec_ref_known(v_x_464_, 1);
v___x_528_ = 9;
v___x_529_ = lean_byte_array_push(v_b_463_, v___x_528_);
v___x_530_ = lean_array_get_size(v_fields_527_);
v___x_531_ = ((lean_object*)(l_Lasm_JS_Wire_write___closed__5));
v___x_532_ = ((lean_object*)(l_Lasm_JS_Wire_write___closed__6));
v___x_533_ = l_Lasm_JS_Wire_pushLength(v___x_529_, v___x_530_, v___x_531_, v___x_532_);
if (lean_obj_tag(v___x_533_) == 0)
{
lean_dec_ref(v_fields_527_);
return v___x_533_;
}
else
{
lean_object* v_a_534_; lean_object* v___x_535_; uint8_t v___x_536_; 
v_a_534_ = lean_ctor_get(v___x_533_, 0);
v___x_535_ = lean_unsigned_to_nat(0u);
v___x_536_ = lean_nat_dec_lt(v___x_535_, v___x_530_);
if (v___x_536_ == 0)
{
lean_dec_ref(v_fields_527_);
return v___x_533_;
}
else
{
size_t v___x_537_; size_t v___x_538_; lean_object* v___x_539_; 
lean_inc(v_a_534_);
lean_dec_ref_known(v___x_533_, 1);
v___x_537_ = ((size_t)0ULL);
v___x_538_ = lean_usize_of_nat(v___x_530_);
v___x_539_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__1(v_fields_527_, v___x_537_, v___x_538_, v_a_534_);
lean_dec_ref(v_fields_527_);
return v___x_539_;
}
}
}
default: 
{
lean_object* v_value_540_; uint8_t v___x_541_; lean_object* v___x_542_; uint32_t v___x_543_; lean_object* v___x_544_; uint32_t v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; 
v_value_540_ = lean_ctor_get(v_x_464_, 0);
lean_inc(v_value_540_);
lean_dec_ref_known(v_x_464_, 2);
v___x_541_ = 10;
v___x_542_ = lean_byte_array_push(v_b_463_, v___x_541_);
v___x_543_ = lasm_js_value_handle(v_value_540_);
lean_dec(v_value_540_);
v___x_544_ = l_Lasm_JS_Wire_pushU32(v___x_542_, v___x_543_);
v___x_545_ = 0;
v___x_546_ = l_Lasm_JS_Wire_pushU32(v___x_544_, v___x_545_);
v___x_547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_547_, 0, v___x_546_);
return v___x_547_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__0(lean_object* v_as_548_, size_t v_i_549_, size_t v_stop_550_, lean_object* v_b_551_){
_start:
{
uint8_t v___x_552_; 
v___x_552_ = lean_usize_dec_eq(v_i_549_, v_stop_550_);
if (v___x_552_ == 0)
{
lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_553_ = lean_array_uget_borrowed(v_as_548_, v_i_549_);
lean_inc(v___x_553_);
v___x_554_ = l_Lasm_JS_Wire_write(v_b_551_, v___x_553_);
if (lean_obj_tag(v___x_554_) == 0)
{
return v___x_554_;
}
else
{
lean_object* v_a_555_; size_t v___x_556_; size_t v___x_557_; 
v_a_555_ = lean_ctor_get(v___x_554_, 0);
lean_inc(v_a_555_);
lean_dec_ref_known(v___x_554_, 1);
v___x_556_ = ((size_t)1ULL);
v___x_557_ = lean_usize_add(v_i_549_, v___x_556_);
v_i_549_ = v___x_557_;
v_b_551_ = v_a_555_;
goto _start;
}
}
else
{
lean_object* v___x_559_; 
v___x_559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_559_, 0, v_b_551_);
return v___x_559_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__0___boxed(lean_object* v_as_560_, lean_object* v_i_561_, lean_object* v_stop_562_, lean_object* v_b_563_){
_start:
{
size_t v_i_boxed_564_; size_t v_stop_boxed_565_; lean_object* v_res_566_; 
v_i_boxed_564_ = lean_unbox_usize(v_i_561_);
lean_dec(v_i_561_);
v_stop_boxed_565_ = lean_unbox_usize(v_stop_562_);
lean_dec(v_stop_562_);
v_res_566_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__0(v_as_560_, v_i_boxed_564_, v_stop_boxed_565_, v_b_563_);
lean_dec_ref(v_as_560_);
return v_res_566_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__1___boxed(lean_object* v_as_567_, lean_object* v_i_568_, lean_object* v_stop_569_, lean_object* v_b_570_){
_start:
{
size_t v_i_boxed_571_; size_t v_stop_boxed_572_; lean_object* v_res_573_; 
v_i_boxed_571_ = lean_unbox_usize(v_i_568_);
lean_dec(v_i_568_);
v_stop_boxed_572_ = lean_unbox_usize(v_stop_569_);
lean_dec(v_stop_569_);
v_res_573_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__1(v_as_567_, v_i_boxed_571_, v_stop_boxed_572_, v_b_570_);
lean_dec_ref(v_as_567_);
return v_res_573_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_write_match__1_splitter___redArg(lean_object* v_x_574_, lean_object* v_h__1_575_, lean_object* v_h__2_576_, lean_object* v_h__3_577_, lean_object* v_h__4_578_, lean_object* v_h__5_579_, lean_object* v_h__6_580_, lean_object* v_h__7_581_, lean_object* v_h__8_582_, lean_object* v_h__9_583_, lean_object* v_h__10_584_, lean_object* v_h__11_585_){
_start:
{
switch(lean_obj_tag(v_x_574_))
{
case 0:
{
lean_object* v___x_586_; lean_object* v___x_587_; 
lean_dec(v_h__11_585_);
lean_dec(v_h__10_584_);
lean_dec(v_h__9_583_);
lean_dec(v_h__8_582_);
lean_dec(v_h__7_581_);
lean_dec(v_h__6_580_);
lean_dec(v_h__5_579_);
lean_dec(v_h__4_578_);
lean_dec(v_h__3_577_);
lean_dec(v_h__2_576_);
v___x_586_ = lean_box(0);
v___x_587_ = lean_apply_1(v_h__1_575_, v___x_586_);
return v___x_587_;
}
case 1:
{
lean_object* v___x_588_; lean_object* v___x_589_; 
lean_dec(v_h__11_585_);
lean_dec(v_h__10_584_);
lean_dec(v_h__9_583_);
lean_dec(v_h__8_582_);
lean_dec(v_h__7_581_);
lean_dec(v_h__6_580_);
lean_dec(v_h__5_579_);
lean_dec(v_h__4_578_);
lean_dec(v_h__3_577_);
lean_dec(v_h__1_575_);
v___x_588_ = lean_box(0);
v___x_589_ = lean_apply_1(v_h__2_576_, v___x_588_);
return v___x_589_;
}
case 2:
{
uint8_t v_b_590_; 
lean_dec(v_h__11_585_);
lean_dec(v_h__10_584_);
lean_dec(v_h__9_583_);
lean_dec(v_h__8_582_);
lean_dec(v_h__7_581_);
lean_dec(v_h__6_580_);
lean_dec(v_h__5_579_);
lean_dec(v_h__2_576_);
lean_dec(v_h__1_575_);
v_b_590_ = lean_ctor_get_uint8(v_x_574_, 0);
lean_dec_ref_known(v_x_574_, 0);
if (v_b_590_ == 0)
{
lean_object* v___x_591_; lean_object* v___x_592_; 
lean_dec(v_h__4_578_);
v___x_591_ = lean_box(0);
v___x_592_ = lean_apply_1(v_h__3_577_, v___x_591_);
return v___x_592_;
}
else
{
lean_object* v___x_593_; lean_object* v___x_594_; 
lean_dec(v_h__3_577_);
v___x_593_ = lean_box(0);
v___x_594_ = lean_apply_1(v_h__4_578_, v___x_593_);
return v___x_594_;
}
}
case 3:
{
double v_n_595_; lean_object* v___x_596_; lean_object* v___x_597_; 
lean_dec(v_h__11_585_);
lean_dec(v_h__10_584_);
lean_dec(v_h__9_583_);
lean_dec(v_h__8_582_);
lean_dec(v_h__7_581_);
lean_dec(v_h__6_580_);
lean_dec(v_h__4_578_);
lean_dec(v_h__3_577_);
lean_dec(v_h__2_576_);
lean_dec(v_h__1_575_);
v_n_595_ = lean_ctor_get_float(v_x_574_, 0);
lean_dec_ref_known(v_x_574_, 0);
v___x_596_ = lean_box_float(v_n_595_);
v___x_597_ = lean_apply_1(v_h__5_579_, v___x_596_);
return v___x_597_;
}
case 4:
{
lean_object* v_s_598_; lean_object* v___x_599_; 
lean_dec(v_h__11_585_);
lean_dec(v_h__10_584_);
lean_dec(v_h__9_583_);
lean_dec(v_h__8_582_);
lean_dec(v_h__7_581_);
lean_dec(v_h__5_579_);
lean_dec(v_h__4_578_);
lean_dec(v_h__3_577_);
lean_dec(v_h__2_576_);
lean_dec(v_h__1_575_);
v_s_598_ = lean_ctor_get(v_x_574_, 0);
lean_inc_ref(v_s_598_);
lean_dec_ref_known(v_x_574_, 1);
v___x_599_ = lean_apply_1(v_h__6_580_, v_s_598_);
return v___x_599_;
}
case 5:
{
lean_object* v_i_600_; lean_object* v___x_601_; 
lean_dec(v_h__11_585_);
lean_dec(v_h__10_584_);
lean_dec(v_h__9_583_);
lean_dec(v_h__8_582_);
lean_dec(v_h__6_580_);
lean_dec(v_h__5_579_);
lean_dec(v_h__4_578_);
lean_dec(v_h__3_577_);
lean_dec(v_h__2_576_);
lean_dec(v_h__1_575_);
v_i_600_ = lean_ctor_get(v_x_574_, 0);
lean_inc(v_i_600_);
lean_dec_ref_known(v_x_574_, 1);
v___x_601_ = lean_apply_1(v_h__7_581_, v_i_600_);
return v___x_601_;
}
case 6:
{
lean_object* v_b_602_; lean_object* v___x_603_; 
lean_dec(v_h__11_585_);
lean_dec(v_h__10_584_);
lean_dec(v_h__9_583_);
lean_dec(v_h__7_581_);
lean_dec(v_h__6_580_);
lean_dec(v_h__5_579_);
lean_dec(v_h__4_578_);
lean_dec(v_h__3_577_);
lean_dec(v_h__2_576_);
lean_dec(v_h__1_575_);
v_b_602_ = lean_ctor_get(v_x_574_, 0);
lean_inc_ref(v_b_602_);
lean_dec_ref_known(v_x_574_, 1);
v___x_603_ = lean_apply_1(v_h__8_582_, v_b_602_);
return v___x_603_;
}
case 7:
{
lean_object* v_items_604_; lean_object* v___x_605_; 
lean_dec(v_h__11_585_);
lean_dec(v_h__10_584_);
lean_dec(v_h__8_582_);
lean_dec(v_h__7_581_);
lean_dec(v_h__6_580_);
lean_dec(v_h__5_579_);
lean_dec(v_h__4_578_);
lean_dec(v_h__3_577_);
lean_dec(v_h__2_576_);
lean_dec(v_h__1_575_);
v_items_604_ = lean_ctor_get(v_x_574_, 0);
lean_inc_ref(v_items_604_);
lean_dec_ref_known(v_x_574_, 1);
v___x_605_ = lean_apply_1(v_h__9_583_, v_items_604_);
return v___x_605_;
}
case 8:
{
lean_object* v_fields_606_; lean_object* v___x_607_; 
lean_dec(v_h__11_585_);
lean_dec(v_h__9_583_);
lean_dec(v_h__8_582_);
lean_dec(v_h__7_581_);
lean_dec(v_h__6_580_);
lean_dec(v_h__5_579_);
lean_dec(v_h__4_578_);
lean_dec(v_h__3_577_);
lean_dec(v_h__2_576_);
lean_dec(v_h__1_575_);
v_fields_606_ = lean_ctor_get(v_x_574_, 0);
lean_inc_ref(v_fields_606_);
lean_dec_ref_known(v_x_574_, 1);
v___x_607_ = lean_apply_1(v_h__10_584_, v_fields_606_);
return v___x_607_;
}
default: 
{
lean_object* v_value_608_; lean_object* v_description_609_; lean_object* v___x_610_; 
lean_dec(v_h__10_584_);
lean_dec(v_h__9_583_);
lean_dec(v_h__8_582_);
lean_dec(v_h__7_581_);
lean_dec(v_h__6_580_);
lean_dec(v_h__5_579_);
lean_dec(v_h__4_578_);
lean_dec(v_h__3_577_);
lean_dec(v_h__2_576_);
lean_dec(v_h__1_575_);
v_value_608_ = lean_ctor_get(v_x_574_, 0);
lean_inc(v_value_608_);
v_description_609_ = lean_ctor_get(v_x_574_, 1);
lean_inc_ref(v_description_609_);
lean_dec_ref_known(v_x_574_, 2);
v___x_610_ = lean_apply_2(v_h__11_585_, v_value_608_, v_description_609_);
return v___x_610_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_write_match__1_splitter(lean_object* v_motive_611_, lean_object* v_x_612_, lean_object* v_h__1_613_, lean_object* v_h__2_614_, lean_object* v_h__3_615_, lean_object* v_h__4_616_, lean_object* v_h__5_617_, lean_object* v_h__6_618_, lean_object* v_h__7_619_, lean_object* v_h__8_620_, lean_object* v_h__9_621_, lean_object* v_h__10_622_, lean_object* v_h__11_623_){
_start:
{
switch(lean_obj_tag(v_x_612_))
{
case 0:
{
lean_object* v___x_624_; lean_object* v___x_625_; 
lean_dec(v_h__11_623_);
lean_dec(v_h__10_622_);
lean_dec(v_h__9_621_);
lean_dec(v_h__8_620_);
lean_dec(v_h__7_619_);
lean_dec(v_h__6_618_);
lean_dec(v_h__5_617_);
lean_dec(v_h__4_616_);
lean_dec(v_h__3_615_);
lean_dec(v_h__2_614_);
v___x_624_ = lean_box(0);
v___x_625_ = lean_apply_1(v_h__1_613_, v___x_624_);
return v___x_625_;
}
case 1:
{
lean_object* v___x_626_; lean_object* v___x_627_; 
lean_dec(v_h__11_623_);
lean_dec(v_h__10_622_);
lean_dec(v_h__9_621_);
lean_dec(v_h__8_620_);
lean_dec(v_h__7_619_);
lean_dec(v_h__6_618_);
lean_dec(v_h__5_617_);
lean_dec(v_h__4_616_);
lean_dec(v_h__3_615_);
lean_dec(v_h__1_613_);
v___x_626_ = lean_box(0);
v___x_627_ = lean_apply_1(v_h__2_614_, v___x_626_);
return v___x_627_;
}
case 2:
{
uint8_t v_b_628_; 
lean_dec(v_h__11_623_);
lean_dec(v_h__10_622_);
lean_dec(v_h__9_621_);
lean_dec(v_h__8_620_);
lean_dec(v_h__7_619_);
lean_dec(v_h__6_618_);
lean_dec(v_h__5_617_);
lean_dec(v_h__2_614_);
lean_dec(v_h__1_613_);
v_b_628_ = lean_ctor_get_uint8(v_x_612_, 0);
lean_dec_ref_known(v_x_612_, 0);
if (v_b_628_ == 0)
{
lean_object* v___x_629_; lean_object* v___x_630_; 
lean_dec(v_h__4_616_);
v___x_629_ = lean_box(0);
v___x_630_ = lean_apply_1(v_h__3_615_, v___x_629_);
return v___x_630_;
}
else
{
lean_object* v___x_631_; lean_object* v___x_632_; 
lean_dec(v_h__3_615_);
v___x_631_ = lean_box(0);
v___x_632_ = lean_apply_1(v_h__4_616_, v___x_631_);
return v___x_632_;
}
}
case 3:
{
double v_n_633_; lean_object* v___x_634_; lean_object* v___x_635_; 
lean_dec(v_h__11_623_);
lean_dec(v_h__10_622_);
lean_dec(v_h__9_621_);
lean_dec(v_h__8_620_);
lean_dec(v_h__7_619_);
lean_dec(v_h__6_618_);
lean_dec(v_h__4_616_);
lean_dec(v_h__3_615_);
lean_dec(v_h__2_614_);
lean_dec(v_h__1_613_);
v_n_633_ = lean_ctor_get_float(v_x_612_, 0);
lean_dec_ref_known(v_x_612_, 0);
v___x_634_ = lean_box_float(v_n_633_);
v___x_635_ = lean_apply_1(v_h__5_617_, v___x_634_);
return v___x_635_;
}
case 4:
{
lean_object* v_s_636_; lean_object* v___x_637_; 
lean_dec(v_h__11_623_);
lean_dec(v_h__10_622_);
lean_dec(v_h__9_621_);
lean_dec(v_h__8_620_);
lean_dec(v_h__7_619_);
lean_dec(v_h__5_617_);
lean_dec(v_h__4_616_);
lean_dec(v_h__3_615_);
lean_dec(v_h__2_614_);
lean_dec(v_h__1_613_);
v_s_636_ = lean_ctor_get(v_x_612_, 0);
lean_inc_ref(v_s_636_);
lean_dec_ref_known(v_x_612_, 1);
v___x_637_ = lean_apply_1(v_h__6_618_, v_s_636_);
return v___x_637_;
}
case 5:
{
lean_object* v_i_638_; lean_object* v___x_639_; 
lean_dec(v_h__11_623_);
lean_dec(v_h__10_622_);
lean_dec(v_h__9_621_);
lean_dec(v_h__8_620_);
lean_dec(v_h__6_618_);
lean_dec(v_h__5_617_);
lean_dec(v_h__4_616_);
lean_dec(v_h__3_615_);
lean_dec(v_h__2_614_);
lean_dec(v_h__1_613_);
v_i_638_ = lean_ctor_get(v_x_612_, 0);
lean_inc(v_i_638_);
lean_dec_ref_known(v_x_612_, 1);
v___x_639_ = lean_apply_1(v_h__7_619_, v_i_638_);
return v___x_639_;
}
case 6:
{
lean_object* v_b_640_; lean_object* v___x_641_; 
lean_dec(v_h__11_623_);
lean_dec(v_h__10_622_);
lean_dec(v_h__9_621_);
lean_dec(v_h__7_619_);
lean_dec(v_h__6_618_);
lean_dec(v_h__5_617_);
lean_dec(v_h__4_616_);
lean_dec(v_h__3_615_);
lean_dec(v_h__2_614_);
lean_dec(v_h__1_613_);
v_b_640_ = lean_ctor_get(v_x_612_, 0);
lean_inc_ref(v_b_640_);
lean_dec_ref_known(v_x_612_, 1);
v___x_641_ = lean_apply_1(v_h__8_620_, v_b_640_);
return v___x_641_;
}
case 7:
{
lean_object* v_items_642_; lean_object* v___x_643_; 
lean_dec(v_h__11_623_);
lean_dec(v_h__10_622_);
lean_dec(v_h__8_620_);
lean_dec(v_h__7_619_);
lean_dec(v_h__6_618_);
lean_dec(v_h__5_617_);
lean_dec(v_h__4_616_);
lean_dec(v_h__3_615_);
lean_dec(v_h__2_614_);
lean_dec(v_h__1_613_);
v_items_642_ = lean_ctor_get(v_x_612_, 0);
lean_inc_ref(v_items_642_);
lean_dec_ref_known(v_x_612_, 1);
v___x_643_ = lean_apply_1(v_h__9_621_, v_items_642_);
return v___x_643_;
}
case 8:
{
lean_object* v_fields_644_; lean_object* v___x_645_; 
lean_dec(v_h__11_623_);
lean_dec(v_h__9_621_);
lean_dec(v_h__8_620_);
lean_dec(v_h__7_619_);
lean_dec(v_h__6_618_);
lean_dec(v_h__5_617_);
lean_dec(v_h__4_616_);
lean_dec(v_h__3_615_);
lean_dec(v_h__2_614_);
lean_dec(v_h__1_613_);
v_fields_644_ = lean_ctor_get(v_x_612_, 0);
lean_inc_ref(v_fields_644_);
lean_dec_ref_known(v_x_612_, 1);
v___x_645_ = lean_apply_1(v_h__10_622_, v_fields_644_);
return v___x_645_;
}
default: 
{
lean_object* v_value_646_; lean_object* v_description_647_; lean_object* v___x_648_; 
lean_dec(v_h__10_622_);
lean_dec(v_h__9_621_);
lean_dec(v_h__8_620_);
lean_dec(v_h__7_619_);
lean_dec(v_h__6_618_);
lean_dec(v_h__5_617_);
lean_dec(v_h__4_616_);
lean_dec(v_h__3_615_);
lean_dec(v_h__2_614_);
lean_dec(v_h__1_613_);
v_value_646_ = lean_ctor_get(v_x_612_, 0);
lean_inc(v_value_646_);
v_description_647_ = lean_ctor_get(v_x_612_, 1);
lean_inc_ref(v_description_647_);
lean_dec_ref_known(v_x_612_, 2);
v___x_648_ = lean_apply_2(v_h__11_623_, v_value_646_, v_description_647_);
return v___x_648_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Array_foldlM__unattach_match__1_splitter___redArg(lean_object* v_x_649_, lean_object* v_h__1_650_){
_start:
{
lean_object* v___x_651_; 
v___x_651_ = lean_apply_2(v_h__1_650_, v_x_649_, lean_box(0));
return v___x_651_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Array_foldlM__unattach_match__1_splitter(lean_object* v_00_u03b1_652_, lean_object* v_P_653_, lean_object* v_motive_654_, lean_object* v_x_655_, lean_object* v_h__1_656_){
_start:
{
lean_object* v___x_657_; 
v___x_657_ = lean_apply_2(v_h__1_656_, v_x_655_, lean_box(0));
return v___x_657_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_encode(lean_object* v_d_658_){
_start:
{
lean_object* v___x_659_; lean_object* v___x_660_; 
v___x_659_ = l_ByteArray_empty;
v___x_660_ = l_Lasm_JS_Wire_write(v___x_659_, v_d_658_);
return v___x_660_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readU32(lean_object* v_b_661_, lean_object* v_o_662_){
_start:
{
lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; uint8_t v___x_666_; 
v___x_663_ = lean_unsigned_to_nat(4u);
v___x_664_ = lean_nat_add(v_o_662_, v___x_663_);
v___x_665_ = lean_byte_array_size(v_b_661_);
v___x_666_ = lean_nat_dec_le(v___x_664_, v___x_665_);
lean_dec(v___x_664_);
if (v___x_666_ == 0)
{
lean_object* v___x_667_; 
v___x_667_ = lean_box(0);
return v___x_667_;
}
else
{
uint8_t v___x_668_; uint32_t v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; uint8_t v___x_672_; uint32_t v___x_673_; uint32_t v___x_674_; uint32_t v___x_675_; uint32_t v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; uint8_t v___x_679_; uint32_t v___x_680_; uint32_t v___x_681_; uint32_t v___x_682_; uint32_t v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; uint8_t v___x_686_; uint32_t v___x_687_; uint32_t v___x_688_; uint32_t v___x_689_; uint32_t v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_668_ = lean_byte_array_fget(v_b_661_, v_o_662_);
v___x_669_ = lean_uint8_to_uint32(v___x_668_);
v___x_670_ = lean_unsigned_to_nat(1u);
v___x_671_ = lean_nat_add(v_o_662_, v___x_670_);
v___x_672_ = lean_byte_array_fget(v_b_661_, v___x_671_);
lean_dec(v___x_671_);
v___x_673_ = lean_uint8_to_uint32(v___x_672_);
v___x_674_ = 8;
v___x_675_ = lean_uint32_shift_left(v___x_673_, v___x_674_);
v___x_676_ = lean_uint32_add(v___x_669_, v___x_675_);
v___x_677_ = lean_unsigned_to_nat(2u);
v___x_678_ = lean_nat_add(v_o_662_, v___x_677_);
v___x_679_ = lean_byte_array_fget(v_b_661_, v___x_678_);
lean_dec(v___x_678_);
v___x_680_ = lean_uint8_to_uint32(v___x_679_);
v___x_681_ = 16;
v___x_682_ = lean_uint32_shift_left(v___x_680_, v___x_681_);
v___x_683_ = lean_uint32_add(v___x_676_, v___x_682_);
v___x_684_ = lean_unsigned_to_nat(3u);
v___x_685_ = lean_nat_add(v_o_662_, v___x_684_);
v___x_686_ = lean_byte_array_fget(v_b_661_, v___x_685_);
lean_dec(v___x_685_);
v___x_687_ = lean_uint8_to_uint32(v___x_686_);
v___x_688_ = 24;
v___x_689_ = lean_uint32_shift_left(v___x_687_, v___x_688_);
v___x_690_ = lean_uint32_add(v___x_683_, v___x_689_);
v___x_691_ = lean_box_uint32(v___x_690_);
v___x_692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_692_, 0, v___x_691_);
return v___x_692_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readU32___boxed(lean_object* v_b_693_, lean_object* v_o_694_){
_start:
{
lean_object* v_res_695_; 
v_res_695_ = l_Lasm_JS_Wire_readU32(v_b_693_, v_o_694_);
lean_dec(v_o_694_);
lean_dec_ref(v_b_693_);
return v_res_695_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readU64(lean_object* v_b_696_, lean_object* v_o_697_){
_start:
{
lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; uint8_t v___x_701_; 
v___x_698_ = lean_unsigned_to_nat(8u);
v___x_699_ = lean_nat_add(v_o_697_, v___x_698_);
v___x_700_ = lean_byte_array_size(v_b_696_);
v___x_701_ = lean_nat_dec_le(v___x_699_, v___x_700_);
lean_dec(v___x_699_);
if (v___x_701_ == 0)
{
lean_object* v___x_702_; 
v___x_702_ = lean_box(0);
return v___x_702_;
}
else
{
uint8_t v___x_703_; uint64_t v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; uint8_t v___x_707_; uint64_t v___x_708_; uint64_t v___x_709_; uint64_t v___x_710_; uint64_t v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; uint8_t v___x_714_; uint64_t v___x_715_; uint64_t v___x_716_; uint64_t v___x_717_; uint64_t v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; uint8_t v___x_721_; uint64_t v___x_722_; uint64_t v___x_723_; uint64_t v___x_724_; uint64_t v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; uint8_t v___x_728_; uint64_t v___x_729_; uint64_t v___x_730_; uint64_t v___x_731_; uint64_t v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; uint8_t v___x_735_; uint64_t v___x_736_; uint64_t v___x_737_; uint64_t v___x_738_; uint64_t v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; uint8_t v___x_742_; uint64_t v___x_743_; uint64_t v___x_744_; uint64_t v___x_745_; uint64_t v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; uint8_t v___x_749_; uint64_t v___x_750_; uint64_t v___x_751_; uint64_t v___x_752_; uint64_t v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; 
v___x_703_ = lean_byte_array_fget(v_b_696_, v_o_697_);
v___x_704_ = lean_uint8_to_uint64(v___x_703_);
v___x_705_ = lean_unsigned_to_nat(1u);
v___x_706_ = lean_nat_add(v_o_697_, v___x_705_);
v___x_707_ = lean_byte_array_fget(v_b_696_, v___x_706_);
lean_dec(v___x_706_);
v___x_708_ = lean_uint8_to_uint64(v___x_707_);
v___x_709_ = 8ULL;
v___x_710_ = lean_uint64_shift_left(v___x_708_, v___x_709_);
v___x_711_ = lean_uint64_add(v___x_704_, v___x_710_);
v___x_712_ = lean_unsigned_to_nat(2u);
v___x_713_ = lean_nat_add(v_o_697_, v___x_712_);
v___x_714_ = lean_byte_array_fget(v_b_696_, v___x_713_);
lean_dec(v___x_713_);
v___x_715_ = lean_uint8_to_uint64(v___x_714_);
v___x_716_ = 16ULL;
v___x_717_ = lean_uint64_shift_left(v___x_715_, v___x_716_);
v___x_718_ = lean_uint64_add(v___x_711_, v___x_717_);
v___x_719_ = lean_unsigned_to_nat(3u);
v___x_720_ = lean_nat_add(v_o_697_, v___x_719_);
v___x_721_ = lean_byte_array_fget(v_b_696_, v___x_720_);
lean_dec(v___x_720_);
v___x_722_ = lean_uint8_to_uint64(v___x_721_);
v___x_723_ = 24ULL;
v___x_724_ = lean_uint64_shift_left(v___x_722_, v___x_723_);
v___x_725_ = lean_uint64_add(v___x_718_, v___x_724_);
v___x_726_ = lean_unsigned_to_nat(4u);
v___x_727_ = lean_nat_add(v_o_697_, v___x_726_);
v___x_728_ = lean_byte_array_fget(v_b_696_, v___x_727_);
lean_dec(v___x_727_);
v___x_729_ = lean_uint8_to_uint64(v___x_728_);
v___x_730_ = 32ULL;
v___x_731_ = lean_uint64_shift_left(v___x_729_, v___x_730_);
v___x_732_ = lean_uint64_add(v___x_725_, v___x_731_);
v___x_733_ = lean_unsigned_to_nat(5u);
v___x_734_ = lean_nat_add(v_o_697_, v___x_733_);
v___x_735_ = lean_byte_array_fget(v_b_696_, v___x_734_);
lean_dec(v___x_734_);
v___x_736_ = lean_uint8_to_uint64(v___x_735_);
v___x_737_ = 40ULL;
v___x_738_ = lean_uint64_shift_left(v___x_736_, v___x_737_);
v___x_739_ = lean_uint64_add(v___x_732_, v___x_738_);
v___x_740_ = lean_unsigned_to_nat(6u);
v___x_741_ = lean_nat_add(v_o_697_, v___x_740_);
v___x_742_ = lean_byte_array_fget(v_b_696_, v___x_741_);
lean_dec(v___x_741_);
v___x_743_ = lean_uint8_to_uint64(v___x_742_);
v___x_744_ = 48ULL;
v___x_745_ = lean_uint64_shift_left(v___x_743_, v___x_744_);
v___x_746_ = lean_uint64_add(v___x_739_, v___x_745_);
v___x_747_ = lean_unsigned_to_nat(7u);
v___x_748_ = lean_nat_add(v_o_697_, v___x_747_);
v___x_749_ = lean_byte_array_fget(v_b_696_, v___x_748_);
lean_dec(v___x_748_);
v___x_750_ = lean_uint8_to_uint64(v___x_749_);
v___x_751_ = 56ULL;
v___x_752_ = lean_uint64_shift_left(v___x_750_, v___x_751_);
v___x_753_ = lean_uint64_add(v___x_746_, v___x_752_);
v___x_754_ = lean_box_uint64(v___x_753_);
v___x_755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_755_, 0, v___x_754_);
return v___x_755_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readU64___boxed(lean_object* v_b_756_, lean_object* v_o_757_){
_start:
{
lean_object* v_res_758_; 
v_res_758_ = l_Lasm_JS_Wire_readU64(v_b_756_, v_o_757_);
lean_dec(v_o_757_);
lean_dec_ref(v_b_756_);
return v_res_758_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readRaw(lean_object* v_b_759_, lean_object* v_o_760_){
_start:
{
lean_object* v___x_761_; 
v___x_761_ = l_Lasm_JS_Wire_readU32(v_b_759_, v_o_760_);
if (lean_obj_tag(v___x_761_) == 0)
{
lean_object* v___x_762_; 
v___x_762_ = lean_box(0);
return v___x_762_;
}
else
{
lean_object* v_val_763_; lean_object* v___x_765_; uint8_t v_isShared_766_; uint8_t v_isSharedCheck_780_; 
v_val_763_ = lean_ctor_get(v___x_761_, 0);
v_isSharedCheck_780_ = !lean_is_exclusive(v___x_761_);
if (v_isSharedCheck_780_ == 0)
{
v___x_765_ = v___x_761_;
v_isShared_766_ = v_isSharedCheck_780_;
goto v_resetjp_764_;
}
else
{
lean_inc(v_val_763_);
lean_dec(v___x_761_);
v___x_765_ = lean_box(0);
v_isShared_766_ = v_isSharedCheck_780_;
goto v_resetjp_764_;
}
v_resetjp_764_:
{
lean_object* v___x_767_; lean_object* v___x_768_; uint32_t v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; uint8_t v___x_773_; 
v___x_767_ = lean_unsigned_to_nat(4u);
v___x_768_ = lean_nat_add(v_o_760_, v___x_767_);
v___x_769_ = lean_unbox_uint32(v_val_763_);
lean_dec(v_val_763_);
v___x_770_ = lean_uint32_to_nat(v___x_769_);
v___x_771_ = lean_nat_add(v___x_768_, v___x_770_);
lean_dec(v___x_770_);
v___x_772_ = lean_byte_array_size(v_b_759_);
v___x_773_ = lean_nat_dec_le(v___x_771_, v___x_772_);
if (v___x_773_ == 0)
{
lean_object* v___x_774_; 
lean_dec(v___x_771_);
lean_dec(v___x_768_);
lean_del_object(v___x_765_);
v___x_774_ = lean_box(0);
return v___x_774_;
}
else
{
lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_778_; 
v___x_775_ = l_ByteArray_extract(v_b_759_, v___x_768_, v___x_771_);
v___x_776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_776_, 0, v___x_775_);
lean_ctor_set(v___x_776_, 1, v___x_771_);
if (v_isShared_766_ == 0)
{
lean_ctor_set(v___x_765_, 0, v___x_776_);
v___x_778_ = v___x_765_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v___x_776_);
v___x_778_ = v_reuseFailAlloc_779_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
return v___x_778_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readRaw___boxed(lean_object* v_b_781_, lean_object* v_o_782_){
_start:
{
lean_object* v_res_783_; 
v_res_783_ = l_Lasm_JS_Wire_readRaw(v_b_781_, v_o_782_);
lean_dec(v_o_782_);
lean_dec_ref(v_b_781_);
return v_res_783_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readString(lean_object* v_b_790_, lean_object* v_o_791_){
_start:
{
lean_object* v___x_792_; 
v___x_792_ = l_Lasm_JS_Wire_readRaw(v_b_790_, v_o_791_);
if (lean_obj_tag(v___x_792_) == 0)
{
lean_object* v___x_793_; 
v___x_793_ = ((lean_object*)(l_Lasm_JS_Wire_readString___closed__1));
return v___x_793_;
}
else
{
lean_object* v_val_794_; lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_813_; 
v_val_794_ = lean_ctor_get(v___x_792_, 0);
v_isSharedCheck_813_ = !lean_is_exclusive(v___x_792_);
if (v_isSharedCheck_813_ == 0)
{
v___x_796_ = v___x_792_;
v_isShared_797_ = v_isSharedCheck_813_;
goto v_resetjp_795_;
}
else
{
lean_inc(v_val_794_);
lean_dec(v___x_792_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_813_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
lean_object* v_fst_798_; lean_object* v_snd_799_; lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_812_; 
v_fst_798_ = lean_ctor_get(v_val_794_, 0);
v_snd_799_ = lean_ctor_get(v_val_794_, 1);
v_isSharedCheck_812_ = !lean_is_exclusive(v_val_794_);
if (v_isSharedCheck_812_ == 0)
{
v___x_801_ = v_val_794_;
v_isShared_802_ = v_isSharedCheck_812_;
goto v_resetjp_800_;
}
else
{
lean_inc(v_snd_799_);
lean_inc(v_fst_798_);
lean_dec(v_val_794_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_812_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
uint8_t v___x_803_; 
v___x_803_ = lean_string_validate_utf8(v_fst_798_);
if (v___x_803_ == 0)
{
lean_object* v___x_804_; 
lean_del_object(v___x_801_);
lean_dec(v_snd_799_);
lean_dec(v_fst_798_);
lean_del_object(v___x_796_);
v___x_804_ = ((lean_object*)(l_Lasm_JS_Wire_readString___closed__3));
return v___x_804_;
}
else
{
lean_object* v___x_805_; lean_object* v___x_807_; 
v___x_805_ = lean_string_from_utf8_unchecked(v_fst_798_);
if (v_isShared_802_ == 0)
{
lean_ctor_set(v___x_801_, 0, v___x_805_);
v___x_807_ = v___x_801_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_811_; 
v_reuseFailAlloc_811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_811_, 0, v___x_805_);
lean_ctor_set(v_reuseFailAlloc_811_, 1, v_snd_799_);
v___x_807_ = v_reuseFailAlloc_811_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
lean_object* v___x_809_; 
if (v_isShared_797_ == 0)
{
lean_ctor_set(v___x_796_, 0, v___x_807_);
v___x_809_ = v___x_796_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v___x_807_);
v___x_809_ = v_reuseFailAlloc_810_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
return v___x_809_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readString___boxed(lean_object* v_b_814_, lean_object* v_o_815_){
_start:
{
lean_object* v_res_816_; 
v_res_816_ = l_Lasm_JS_Wire_readString(v_b_814_, v_o_815_);
lean_dec(v_o_815_);
lean_dec_ref(v_b_814_);
return v_res_816_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readAt___redArg___lam__0(lean_object* v_snd_817_, lean_object* v_toPure_818_, lean_object* v_____do__lift_819_){
_start:
{
lean_object* v___x_820_; lean_object* v___x_821_; 
v___x_820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_820_, 0, v_____do__lift_819_);
lean_ctor_set(v___x_820_, 1, v_snd_817_);
v___x_821_ = lean_apply_2(v_toPure_818_, lean_box(0), v___x_820_);
return v___x_821_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readAt___redArg___lam__1(lean_object* v_toPure_822_, lean_object* v_____x_823_){
_start:
{
lean_object* v_fst_824_; lean_object* v_snd_825_; lean_object* v___x_827_; uint8_t v_isShared_828_; uint8_t v_isSharedCheck_834_; 
v_fst_824_ = lean_ctor_get(v_____x_823_, 0);
v_snd_825_ = lean_ctor_get(v_____x_823_, 1);
v_isSharedCheck_834_ = !lean_is_exclusive(v_____x_823_);
if (v_isSharedCheck_834_ == 0)
{
v___x_827_ = v_____x_823_;
v_isShared_828_ = v_isSharedCheck_834_;
goto v_resetjp_826_;
}
else
{
lean_inc(v_snd_825_);
lean_inc(v_fst_824_);
lean_dec(v_____x_823_);
v___x_827_ = lean_box(0);
v_isShared_828_ = v_isSharedCheck_834_;
goto v_resetjp_826_;
}
v_resetjp_826_:
{
lean_object* v___x_829_; lean_object* v___x_831_; 
v___x_829_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_829_, 0, v_fst_824_);
if (v_isShared_828_ == 0)
{
lean_ctor_set(v___x_827_, 0, v___x_829_);
v___x_831_ = v___x_827_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v___x_829_);
lean_ctor_set(v_reuseFailAlloc_833_, 1, v_snd_825_);
v___x_831_ = v_reuseFailAlloc_833_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
lean_object* v___x_832_; 
v___x_832_ = lean_apply_2(v_toPure_822_, lean_box(0), v___x_831_);
return v___x_832_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readAt___redArg___lam__2(lean_object* v_toPure_835_, lean_object* v_____x_836_){
_start:
{
lean_object* v_fst_837_; lean_object* v_snd_838_; lean_object* v___x_840_; uint8_t v_isShared_841_; uint8_t v_isSharedCheck_847_; 
v_fst_837_ = lean_ctor_get(v_____x_836_, 0);
v_snd_838_ = lean_ctor_get(v_____x_836_, 1);
v_isSharedCheck_847_ = !lean_is_exclusive(v_____x_836_);
if (v_isSharedCheck_847_ == 0)
{
v___x_840_ = v_____x_836_;
v_isShared_841_ = v_isSharedCheck_847_;
goto v_resetjp_839_;
}
else
{
lean_inc(v_snd_838_);
lean_inc(v_fst_837_);
lean_dec(v_____x_836_);
v___x_840_ = lean_box(0);
v_isShared_841_ = v_isSharedCheck_847_;
goto v_resetjp_839_;
}
v_resetjp_839_:
{
lean_object* v___x_842_; lean_object* v___x_844_; 
v___x_842_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_842_, 0, v_fst_837_);
if (v_isShared_841_ == 0)
{
lean_ctor_set(v___x_840_, 0, v___x_842_);
v___x_844_ = v___x_840_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v___x_842_);
lean_ctor_set(v_reuseFailAlloc_846_, 1, v_snd_838_);
v___x_844_ = v_reuseFailAlloc_846_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
lean_object* v___x_845_; 
v___x_845_ = lean_apply_2(v_toPure_835_, lean_box(0), v___x_844_);
return v___x_845_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readItems___redArg___lam__0___boxed(lean_object* v_x_848_, lean_object* v_inst_849_, lean_object* v_inst_850_, lean_object* v_err_851_, lean_object* v_ref_852_, lean_object* v_fuel_853_, lean_object* v_b_854_, lean_object* v_n_855_, lean_object* v_____x_856_){
_start:
{
lean_object* v_res_857_; 
v_res_857_ = l_Lasm_JS_Wire_readItems___redArg___lam__0(v_x_848_, v_inst_849_, v_inst_850_, v_err_851_, v_ref_852_, v_fuel_853_, v_b_854_, v_n_855_, v_____x_856_);
lean_dec(v_n_855_);
return v_res_857_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readFields___redArg___lam__0(lean_object* v_fst_859_, lean_object* v_x_860_, lean_object* v_inst_861_, lean_object* v_inst_862_, lean_object* v_err_863_, lean_object* v_ref_864_, lean_object* v_fuel_865_, lean_object* v_b_866_, lean_object* v_n_867_, lean_object* v_____x_868_){
_start:
{
lean_object* v_fst_869_; lean_object* v_snd_870_; lean_object* v___x_872_; uint8_t v_isShared_873_; uint8_t v_isSharedCheck_879_; 
v_fst_869_ = lean_ctor_get(v_____x_868_, 0);
v_snd_870_ = lean_ctor_get(v_____x_868_, 1);
v_isSharedCheck_879_ = !lean_is_exclusive(v_____x_868_);
if (v_isSharedCheck_879_ == 0)
{
v___x_872_ = v_____x_868_;
v_isShared_873_ = v_isSharedCheck_879_;
goto v_resetjp_871_;
}
else
{
lean_inc(v_snd_870_);
lean_inc(v_fst_869_);
lean_dec(v_____x_868_);
v___x_872_ = lean_box(0);
v_isShared_873_ = v_isSharedCheck_879_;
goto v_resetjp_871_;
}
v_resetjp_871_:
{
lean_object* v___x_875_; 
if (v_isShared_873_ == 0)
{
lean_ctor_set(v___x_872_, 1, v_fst_869_);
lean_ctor_set(v___x_872_, 0, v_fst_859_);
v___x_875_ = v___x_872_;
goto v_reusejp_874_;
}
else
{
lean_object* v_reuseFailAlloc_878_; 
v_reuseFailAlloc_878_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v_fst_859_);
lean_ctor_set(v_reuseFailAlloc_878_, 1, v_fst_869_);
v___x_875_ = v_reuseFailAlloc_878_;
goto v_reusejp_874_;
}
v_reusejp_874_:
{
lean_object* v___x_876_; lean_object* v___x_877_; 
v___x_876_ = lean_array_push(v_x_860_, v___x_875_);
v___x_877_ = l_Lasm_JS_Wire_readFields___redArg(v_inst_861_, v_inst_862_, v_err_863_, v_ref_864_, v_fuel_865_, v_b_866_, v_n_867_, v_snd_870_, v___x_876_);
return v___x_877_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readFields___redArg___lam__0___boxed(lean_object* v_fst_880_, lean_object* v_x_881_, lean_object* v_inst_882_, lean_object* v_inst_883_, lean_object* v_err_884_, lean_object* v_ref_885_, lean_object* v_fuel_886_, lean_object* v_b_887_, lean_object* v_n_888_, lean_object* v_____x_889_){
_start:
{
lean_object* v_res_890_; 
v_res_890_ = l_Lasm_JS_Wire_readFields___redArg___lam__0(v_fst_880_, v_x_881_, v_inst_882_, v_inst_883_, v_err_884_, v_ref_885_, v_fuel_886_, v_b_887_, v_n_888_, v_____x_889_);
lean_dec(v_n_888_);
return v_res_890_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readFields___redArg(lean_object* v_inst_891_, lean_object* v_inst_892_, lean_object* v_err_893_, lean_object* v_ref_894_, lean_object* v_fuel_895_, lean_object* v_b_896_, lean_object* v_x_897_, lean_object* v_x_898_, lean_object* v_x_899_){
_start:
{
lean_object* v_toApplicative_900_; lean_object* v_toBind_901_; lean_object* v_toPure_902_; lean_object* v_zero_903_; uint8_t v_isZero_904_; 
v_toApplicative_900_ = lean_ctor_get(v_inst_891_, 0);
v_toBind_901_ = lean_ctor_get(v_inst_891_, 1);
v_toPure_902_ = lean_ctor_get(v_toApplicative_900_, 1);
v_zero_903_ = lean_unsigned_to_nat(0u);
v_isZero_904_ = lean_nat_dec_eq(v_x_897_, v_zero_903_);
if (v_isZero_904_ == 1)
{
lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_912_; 
lean_inc(v_toPure_902_);
lean_dec_ref(v_b_896_);
lean_dec(v_fuel_895_);
lean_dec(v_ref_894_);
lean_dec(v_err_893_);
lean_dec_ref(v_inst_892_);
v_isSharedCheck_912_ = !lean_is_exclusive(v_inst_891_);
if (v_isSharedCheck_912_ == 0)
{
lean_object* v_unused_913_; lean_object* v_unused_914_; 
v_unused_913_ = lean_ctor_get(v_inst_891_, 1);
lean_dec(v_unused_913_);
v_unused_914_ = lean_ctor_get(v_inst_891_, 0);
lean_dec(v_unused_914_);
v___x_906_ = v_inst_891_;
v_isShared_907_ = v_isSharedCheck_912_;
goto v_resetjp_905_;
}
else
{
lean_dec(v_inst_891_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_912_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
lean_object* v___x_909_; 
if (v_isShared_907_ == 0)
{
lean_ctor_set(v___x_906_, 1, v_x_898_);
lean_ctor_set(v___x_906_, 0, v_x_899_);
v___x_909_ = v___x_906_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_911_; 
v_reuseFailAlloc_911_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_911_, 0, v_x_899_);
lean_ctor_set(v_reuseFailAlloc_911_, 1, v_x_898_);
v___x_909_ = v_reuseFailAlloc_911_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
lean_object* v___x_910_; 
v___x_910_ = lean_apply_2(v_toPure_902_, lean_box(0), v___x_909_);
return v___x_910_;
}
}
}
else
{
lean_object* v___x_915_; 
lean_inc(v_toBind_901_);
v___x_915_ = l_Lasm_JS_Wire_readString(v_b_896_, v_x_898_);
lean_dec(v_x_898_);
if (lean_obj_tag(v___x_915_) == 0)
{
lean_object* v_a_916_; lean_object* v_throw_917_; lean_object* v___x_918_; lean_object* v___x_919_; 
lean_dec(v_toBind_901_);
lean_dec_ref(v_x_899_);
lean_dec_ref(v_b_896_);
lean_dec(v_fuel_895_);
lean_dec(v_ref_894_);
lean_dec_ref(v_inst_891_);
v_a_916_ = lean_ctor_get(v___x_915_, 0);
lean_inc(v_a_916_);
lean_dec_ref_known(v___x_915_, 1);
v_throw_917_ = lean_ctor_get(v_inst_892_, 0);
lean_inc(v_throw_917_);
lean_dec_ref(v_inst_892_);
v___x_918_ = lean_apply_1(v_err_893_, v_a_916_);
v___x_919_ = lean_apply_2(v_throw_917_, lean_box(0), v___x_918_);
return v___x_919_;
}
else
{
lean_object* v_a_920_; lean_object* v_fst_921_; lean_object* v_snd_922_; lean_object* v_one_923_; lean_object* v_n_924_; lean_object* v___f_925_; lean_object* v___x_926_; lean_object* v___x_927_; 
v_a_920_ = lean_ctor_get(v___x_915_, 0);
lean_inc(v_a_920_);
lean_dec_ref_known(v___x_915_, 1);
v_fst_921_ = lean_ctor_get(v_a_920_, 0);
lean_inc(v_fst_921_);
v_snd_922_ = lean_ctor_get(v_a_920_, 1);
lean_inc(v_snd_922_);
lean_dec(v_a_920_);
v_one_923_ = lean_unsigned_to_nat(1u);
v_n_924_ = lean_nat_sub(v_x_897_, v_one_923_);
lean_inc_ref(v_b_896_);
lean_inc(v_fuel_895_);
lean_inc(v_ref_894_);
lean_inc(v_err_893_);
lean_inc_ref(v_inst_892_);
lean_inc_ref(v_inst_891_);
v___f_925_ = lean_alloc_closure((void*)(l_Lasm_JS_Wire_readFields___redArg___lam__0___boxed), 10, 9);
lean_closure_set(v___f_925_, 0, v_fst_921_);
lean_closure_set(v___f_925_, 1, v_x_899_);
lean_closure_set(v___f_925_, 2, v_inst_891_);
lean_closure_set(v___f_925_, 3, v_inst_892_);
lean_closure_set(v___f_925_, 4, v_err_893_);
lean_closure_set(v___f_925_, 5, v_ref_894_);
lean_closure_set(v___f_925_, 6, v_fuel_895_);
lean_closure_set(v___f_925_, 7, v_b_896_);
lean_closure_set(v___f_925_, 8, v_n_924_);
v___x_926_ = l_Lasm_JS_Wire_readAt___redArg(v_inst_891_, v_inst_892_, v_err_893_, v_ref_894_, v_fuel_895_, v_b_896_, v_snd_922_);
lean_dec(v_snd_922_);
lean_dec(v_fuel_895_);
v___x_927_ = lean_apply_4(v_toBind_901_, lean_box(0), lean_box(0), v___x_926_, v___f_925_);
return v___x_927_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readAt___redArg(lean_object* v_inst_929_, lean_object* v_inst_930_, lean_object* v_err_931_, lean_object* v_ref_932_, lean_object* v_x_933_, lean_object* v_x_934_, lean_object* v_x_935_){
_start:
{
lean_object* v_toApplicative_936_; lean_object* v_toBind_937_; lean_object* v_toPure_938_; lean_object* v_zero_939_; uint8_t v_isZero_940_; 
v_toApplicative_936_ = lean_ctor_get(v_inst_929_, 0);
v_toBind_937_ = lean_ctor_get(v_inst_929_, 1);
v_toPure_938_ = lean_ctor_get(v_toApplicative_936_, 1);
v_zero_939_ = lean_unsigned_to_nat(0u);
v_isZero_940_ = lean_nat_dec_eq(v_x_933_, v_zero_939_);
if (v_isZero_940_ == 1)
{
lean_object* v_throw_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; 
lean_dec_ref(v_x_934_);
lean_dec(v_ref_932_);
lean_dec_ref(v_inst_929_);
v_throw_941_ = lean_ctor_get(v_inst_930_, 0);
lean_inc(v_throw_941_);
lean_dec_ref(v_inst_930_);
v___x_942_ = ((lean_object*)(l_Lasm_JS_Wire_readString___closed__0));
v___x_943_ = lean_apply_1(v_err_931_, v___x_942_);
v___x_944_ = lean_apply_2(v_throw_941_, lean_box(0), v___x_943_);
return v___x_944_;
}
else
{
lean_object* v___x_945_; uint8_t v___x_946_; 
v___x_945_ = lean_byte_array_size(v_x_934_);
v___x_946_ = lean_nat_dec_lt(v_x_935_, v___x_945_);
if (v___x_946_ == 0)
{
lean_object* v_throw_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; 
lean_dec_ref(v_x_934_);
lean_dec(v_ref_932_);
lean_dec_ref(v_inst_929_);
v_throw_947_ = lean_ctor_get(v_inst_930_, 0);
lean_inc(v_throw_947_);
lean_dec_ref(v_inst_930_);
v___x_948_ = ((lean_object*)(l_Lasm_JS_Wire_readString___closed__0));
v___x_949_ = lean_apply_1(v_err_931_, v___x_948_);
v___x_950_ = lean_apply_2(v_throw_947_, lean_box(0), v___x_949_);
return v___x_950_;
}
else
{
lean_object* v___x_951_; lean_object* v_o_x27_952_; uint8_t v___x_953_; uint8_t v___x_954_; uint8_t v___x_955_; 
v___x_951_ = lean_unsigned_to_nat(1u);
v_o_x27_952_ = lean_nat_add(v_x_935_, v___x_951_);
v___x_953_ = lean_byte_array_fget(v_x_934_, v_x_935_);
v___x_954_ = 0;
v___x_955_ = lean_uint8_dec_eq(v___x_953_, v___x_954_);
if (v___x_955_ == 0)
{
uint8_t v___x_956_; uint8_t v___x_957_; 
v___x_956_ = 1;
v___x_957_ = lean_uint8_dec_eq(v___x_953_, v___x_956_);
if (v___x_957_ == 0)
{
uint8_t v___x_958_; uint8_t v___x_959_; 
v___x_958_ = 2;
v___x_959_ = lean_uint8_dec_eq(v___x_953_, v___x_958_);
if (v___x_959_ == 0)
{
uint8_t v___x_960_; uint8_t v___x_961_; 
v___x_960_ = 3;
v___x_961_ = lean_uint8_dec_eq(v___x_953_, v___x_960_);
if (v___x_961_ == 0)
{
uint8_t v___x_962_; uint8_t v___x_963_; 
v___x_962_ = 4;
v___x_963_ = lean_uint8_dec_eq(v___x_953_, v___x_962_);
if (v___x_963_ == 0)
{
uint8_t v___x_964_; uint8_t v___x_965_; 
lean_inc(v_toBind_937_);
v___x_964_ = 5;
v___x_965_ = lean_uint8_dec_eq(v___x_953_, v___x_964_);
if (v___x_965_ == 0)
{
uint8_t v___x_966_; uint8_t v___x_967_; 
v___x_966_ = 6;
v___x_967_ = lean_uint8_dec_eq(v___x_953_, v___x_966_);
if (v___x_967_ == 0)
{
uint8_t v___x_968_; uint8_t v___x_969_; 
v___x_968_ = 7;
v___x_969_ = lean_uint8_dec_eq(v___x_953_, v___x_968_);
if (v___x_969_ == 0)
{
lean_object* v_n_970_; uint8_t v___x_971_; uint8_t v___x_972_; 
v_n_970_ = lean_nat_sub(v_x_933_, v___x_951_);
v___x_971_ = 8;
v___x_972_ = lean_uint8_dec_eq(v___x_953_, v___x_971_);
if (v___x_972_ == 0)
{
uint8_t v___x_973_; uint8_t v___x_974_; 
v___x_973_ = 9;
v___x_974_ = lean_uint8_dec_eq(v___x_953_, v___x_973_);
if (v___x_974_ == 0)
{
uint8_t v___x_975_; uint8_t v___x_976_; 
lean_inc(v_toPure_938_);
lean_dec(v_n_970_);
lean_dec_ref(v_inst_929_);
v___x_975_ = 10;
v___x_976_ = lean_uint8_dec_eq(v___x_953_, v___x_975_);
if (v___x_976_ == 0)
{
lean_object* v_throw_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; 
lean_dec(v_o_x27_952_);
lean_dec(v_toPure_938_);
lean_dec(v_toBind_937_);
lean_dec_ref(v_x_934_);
lean_dec(v_ref_932_);
v_throw_977_ = lean_ctor_get(v_inst_930_, 0);
lean_inc(v_throw_977_);
lean_dec_ref(v_inst_930_);
v___x_978_ = ((lean_object*)(l_Lasm_JS_Wire_readAt___redArg___closed__0));
v___x_979_ = lean_uint8_to_nat(v___x_953_);
v___x_980_ = l_Nat_reprFast(v___x_979_);
v___x_981_ = lean_string_append(v___x_978_, v___x_980_);
lean_dec_ref(v___x_980_);
v___x_982_ = ((lean_object*)(l_Lasm_JS_Wire_pushLength___closed__5));
v___x_983_ = lean_string_append(v___x_981_, v___x_982_);
v___x_984_ = lean_apply_1(v_err_931_, v___x_983_);
v___x_985_ = lean_apply_2(v_throw_977_, lean_box(0), v___x_984_);
return v___x_985_;
}
else
{
lean_object* v___x_986_; 
v___x_986_ = l_Lasm_JS_Wire_readU32(v_x_934_, v_o_x27_952_);
if (lean_obj_tag(v___x_986_) == 0)
{
lean_object* v_throw_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; 
lean_dec(v_o_x27_952_);
lean_dec(v_toPure_938_);
lean_dec(v_toBind_937_);
lean_dec_ref(v_x_934_);
lean_dec(v_ref_932_);
v_throw_987_ = lean_ctor_get(v_inst_930_, 0);
lean_inc(v_throw_987_);
lean_dec_ref(v_inst_930_);
v___x_988_ = ((lean_object*)(l_Lasm_JS_Wire_readString___closed__0));
v___x_989_ = lean_apply_1(v_err_931_, v___x_988_);
v___x_990_ = lean_apply_2(v_throw_987_, lean_box(0), v___x_989_);
return v___x_990_;
}
else
{
lean_object* v_val_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; 
v_val_991_ = lean_ctor_get(v___x_986_, 0);
lean_inc(v_val_991_);
lean_dec_ref_known(v___x_986_, 1);
v___x_992_ = lean_unsigned_to_nat(4u);
v___x_993_ = lean_nat_add(v_o_x27_952_, v___x_992_);
lean_dec(v_o_x27_952_);
v___x_994_ = l_Lasm_JS_Wire_readString(v_x_934_, v___x_993_);
lean_dec(v___x_993_);
lean_dec_ref(v_x_934_);
if (lean_obj_tag(v___x_994_) == 0)
{
lean_object* v_a_995_; lean_object* v_throw_996_; lean_object* v___x_997_; lean_object* v___x_998_; 
lean_dec(v_val_991_);
lean_dec(v_toPure_938_);
lean_dec(v_toBind_937_);
lean_dec(v_ref_932_);
v_a_995_ = lean_ctor_get(v___x_994_, 0);
lean_inc(v_a_995_);
lean_dec_ref_known(v___x_994_, 1);
v_throw_996_ = lean_ctor_get(v_inst_930_, 0);
lean_inc(v_throw_996_);
lean_dec_ref(v_inst_930_);
v___x_997_ = lean_apply_1(v_err_931_, v_a_995_);
v___x_998_ = lean_apply_2(v_throw_996_, lean_box(0), v___x_997_);
return v___x_998_;
}
else
{
lean_object* v_a_999_; lean_object* v_fst_1000_; lean_object* v_snd_1001_; lean_object* v___f_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; 
lean_dec(v_err_931_);
lean_dec_ref(v_inst_930_);
v_a_999_ = lean_ctor_get(v___x_994_, 0);
lean_inc(v_a_999_);
lean_dec_ref_known(v___x_994_, 1);
v_fst_1000_ = lean_ctor_get(v_a_999_, 0);
lean_inc(v_fst_1000_);
v_snd_1001_ = lean_ctor_get(v_a_999_, 1);
lean_inc(v_snd_1001_);
lean_dec(v_a_999_);
v___f_1002_ = lean_alloc_closure((void*)(l_Lasm_JS_Wire_readAt___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1002_, 0, v_snd_1001_);
lean_closure_set(v___f_1002_, 1, v_toPure_938_);
v___x_1003_ = lean_apply_2(v_ref_932_, v_val_991_, v_fst_1000_);
v___x_1004_ = lean_apply_4(v_toBind_937_, lean_box(0), lean_box(0), v___x_1003_, v___f_1002_);
return v___x_1004_;
}
}
}
}
else
{
lean_object* v___x_1005_; 
v___x_1005_ = l_Lasm_JS_Wire_readU32(v_x_934_, v_o_x27_952_);
if (lean_obj_tag(v___x_1005_) == 0)
{
lean_object* v_throw_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; 
lean_dec(v_n_970_);
lean_dec(v_o_x27_952_);
lean_dec(v_toBind_937_);
lean_dec_ref(v_x_934_);
lean_dec(v_ref_932_);
lean_dec_ref(v_inst_929_);
v_throw_1006_ = lean_ctor_get(v_inst_930_, 0);
lean_inc(v_throw_1006_);
lean_dec_ref(v_inst_930_);
v___x_1007_ = ((lean_object*)(l_Lasm_JS_Wire_readString___closed__0));
v___x_1008_ = lean_apply_1(v_err_931_, v___x_1007_);
v___x_1009_ = lean_apply_2(v_throw_1006_, lean_box(0), v___x_1008_);
return v___x_1009_;
}
else
{
lean_object* v_val_1010_; lean_object* v___f_1011_; uint32_t v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___y_1017_; lean_object* v___x_1021_; uint8_t v___x_1022_; 
v_val_1010_ = lean_ctor_get(v___x_1005_, 0);
lean_inc(v_val_1010_);
lean_dec_ref_known(v___x_1005_, 1);
lean_inc(v_toPure_938_);
v___f_1011_ = lean_alloc_closure((void*)(l_Lasm_JS_Wire_readAt___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1011_, 0, v_toPure_938_);
v___x_1012_ = lean_unbox_uint32(v_val_1010_);
lean_dec(v_val_1010_);
v___x_1013_ = lean_uint32_to_nat(v___x_1012_);
v___x_1014_ = lean_unsigned_to_nat(4u);
v___x_1015_ = lean_nat_add(v_o_x27_952_, v___x_1014_);
lean_dec(v_o_x27_952_);
v___x_1021_ = lean_nat_sub(v___x_945_, v_x_935_);
v___x_1022_ = lean_nat_dec_le(v___x_1013_, v___x_1021_);
if (v___x_1022_ == 0)
{
v___y_1017_ = v___x_1021_;
goto v___jp_1016_;
}
else
{
lean_dec(v___x_1021_);
lean_inc(v___x_1013_);
v___y_1017_ = v___x_1013_;
goto v___jp_1016_;
}
v___jp_1016_:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; 
v___x_1018_ = lean_mk_empty_array_with_capacity(v___y_1017_);
lean_dec(v___y_1017_);
v___x_1019_ = l_Lasm_JS_Wire_readFields___redArg(v_inst_929_, v_inst_930_, v_err_931_, v_ref_932_, v_n_970_, v_x_934_, v___x_1013_, v___x_1015_, v___x_1018_);
lean_dec(v___x_1013_);
v___x_1020_ = lean_apply_4(v_toBind_937_, lean_box(0), lean_box(0), v___x_1019_, v___f_1011_);
return v___x_1020_;
}
}
}
}
else
{
lean_object* v___x_1023_; 
v___x_1023_ = l_Lasm_JS_Wire_readU32(v_x_934_, v_o_x27_952_);
if (lean_obj_tag(v___x_1023_) == 0)
{
lean_object* v_throw_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; 
lean_dec(v_n_970_);
lean_dec(v_o_x27_952_);
lean_dec(v_toBind_937_);
lean_dec_ref(v_x_934_);
lean_dec(v_ref_932_);
lean_dec_ref(v_inst_929_);
v_throw_1024_ = lean_ctor_get(v_inst_930_, 0);
lean_inc(v_throw_1024_);
lean_dec_ref(v_inst_930_);
v___x_1025_ = ((lean_object*)(l_Lasm_JS_Wire_readString___closed__0));
v___x_1026_ = lean_apply_1(v_err_931_, v___x_1025_);
v___x_1027_ = lean_apply_2(v_throw_1024_, lean_box(0), v___x_1026_);
return v___x_1027_;
}
else
{
lean_object* v_val_1028_; lean_object* v___f_1029_; uint32_t v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___y_1035_; lean_object* v___x_1039_; uint8_t v___x_1040_; 
v_val_1028_ = lean_ctor_get(v___x_1023_, 0);
lean_inc(v_val_1028_);
lean_dec_ref_known(v___x_1023_, 1);
lean_inc(v_toPure_938_);
v___f_1029_ = lean_alloc_closure((void*)(l_Lasm_JS_Wire_readAt___redArg___lam__2), 2, 1);
lean_closure_set(v___f_1029_, 0, v_toPure_938_);
v___x_1030_ = lean_unbox_uint32(v_val_1028_);
lean_dec(v_val_1028_);
v___x_1031_ = lean_uint32_to_nat(v___x_1030_);
v___x_1032_ = lean_unsigned_to_nat(4u);
v___x_1033_ = lean_nat_add(v_o_x27_952_, v___x_1032_);
lean_dec(v_o_x27_952_);
v___x_1039_ = lean_nat_sub(v___x_945_, v_x_935_);
v___x_1040_ = lean_nat_dec_le(v___x_1031_, v___x_1039_);
if (v___x_1040_ == 0)
{
v___y_1035_ = v___x_1039_;
goto v___jp_1034_;
}
else
{
lean_dec(v___x_1039_);
lean_inc(v___x_1031_);
v___y_1035_ = v___x_1031_;
goto v___jp_1034_;
}
v___jp_1034_:
{
lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; 
v___x_1036_ = lean_mk_empty_array_with_capacity(v___y_1035_);
lean_dec(v___y_1035_);
v___x_1037_ = l_Lasm_JS_Wire_readItems___redArg(v_inst_929_, v_inst_930_, v_err_931_, v_ref_932_, v_n_970_, v_x_934_, v___x_1031_, v___x_1033_, v___x_1036_);
lean_dec(v___x_1031_);
v___x_1038_ = lean_apply_4(v_toBind_937_, lean_box(0), lean_box(0), v___x_1037_, v___f_1029_);
return v___x_1038_;
}
}
}
}
else
{
lean_object* v___x_1041_; 
lean_inc(v_toPure_938_);
lean_dec(v_toBind_937_);
lean_dec(v_ref_932_);
lean_dec_ref(v_inst_929_);
v___x_1041_ = l_Lasm_JS_Wire_readRaw(v_x_934_, v_o_x27_952_);
lean_dec(v_o_x27_952_);
lean_dec_ref(v_x_934_);
if (lean_obj_tag(v___x_1041_) == 0)
{
lean_object* v_throw_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; 
lean_dec(v_toPure_938_);
v_throw_1042_ = lean_ctor_get(v_inst_930_, 0);
lean_inc(v_throw_1042_);
lean_dec_ref(v_inst_930_);
v___x_1043_ = ((lean_object*)(l_Lasm_JS_Wire_readString___closed__0));
v___x_1044_ = lean_apply_1(v_err_931_, v___x_1043_);
v___x_1045_ = lean_apply_2(v_throw_1042_, lean_box(0), v___x_1044_);
return v___x_1045_;
}
else
{
lean_object* v_val_1046_; lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1063_; 
lean_dec(v_err_931_);
lean_dec_ref(v_inst_930_);
v_val_1046_ = lean_ctor_get(v___x_1041_, 0);
v_isSharedCheck_1063_ = !lean_is_exclusive(v___x_1041_);
if (v_isSharedCheck_1063_ == 0)
{
v___x_1048_ = v___x_1041_;
v_isShared_1049_ = v_isSharedCheck_1063_;
goto v_resetjp_1047_;
}
else
{
lean_inc(v_val_1046_);
lean_dec(v___x_1041_);
v___x_1048_ = lean_box(0);
v_isShared_1049_ = v_isSharedCheck_1063_;
goto v_resetjp_1047_;
}
v_resetjp_1047_:
{
lean_object* v_fst_1050_; lean_object* v_snd_1051_; lean_object* v___x_1053_; uint8_t v_isShared_1054_; uint8_t v_isSharedCheck_1062_; 
v_fst_1050_ = lean_ctor_get(v_val_1046_, 0);
v_snd_1051_ = lean_ctor_get(v_val_1046_, 1);
v_isSharedCheck_1062_ = !lean_is_exclusive(v_val_1046_);
if (v_isSharedCheck_1062_ == 0)
{
v___x_1053_ = v_val_1046_;
v_isShared_1054_ = v_isSharedCheck_1062_;
goto v_resetjp_1052_;
}
else
{
lean_inc(v_snd_1051_);
lean_inc(v_fst_1050_);
lean_dec(v_val_1046_);
v___x_1053_ = lean_box(0);
v_isShared_1054_ = v_isSharedCheck_1062_;
goto v_resetjp_1052_;
}
v_resetjp_1052_:
{
lean_object* v___x_1056_; 
if (v_isShared_1049_ == 0)
{
lean_ctor_set_tag(v___x_1048_, 6);
lean_ctor_set(v___x_1048_, 0, v_fst_1050_);
v___x_1056_ = v___x_1048_;
goto v_reusejp_1055_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v_fst_1050_);
v___x_1056_ = v_reuseFailAlloc_1061_;
goto v_reusejp_1055_;
}
v_reusejp_1055_:
{
lean_object* v___x_1058_; 
if (v_isShared_1054_ == 0)
{
lean_ctor_set(v___x_1053_, 0, v___x_1056_);
v___x_1058_ = v___x_1053_;
goto v_reusejp_1057_;
}
else
{
lean_object* v_reuseFailAlloc_1060_; 
v_reuseFailAlloc_1060_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1060_, 0, v___x_1056_);
lean_ctor_set(v_reuseFailAlloc_1060_, 1, v_snd_1051_);
v___x_1058_ = v_reuseFailAlloc_1060_;
goto v_reusejp_1057_;
}
v_reusejp_1057_:
{
lean_object* v___x_1059_; 
v___x_1059_ = lean_apply_2(v_toPure_938_, lean_box(0), v___x_1058_);
return v___x_1059_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1064_; 
lean_inc(v_toPure_938_);
lean_dec(v_toBind_937_);
lean_dec(v_ref_932_);
lean_dec_ref(v_inst_929_);
v___x_1064_ = l_Lasm_JS_Wire_readString(v_x_934_, v_o_x27_952_);
lean_dec(v_o_x27_952_);
lean_dec_ref(v_x_934_);
if (lean_obj_tag(v___x_1064_) == 0)
{
lean_object* v_a_1065_; lean_object* v_throw_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; 
lean_dec(v_toPure_938_);
v_a_1065_ = lean_ctor_get(v___x_1064_, 0);
lean_inc(v_a_1065_);
lean_dec_ref_known(v___x_1064_, 1);
v_throw_1066_ = lean_ctor_get(v_inst_930_, 0);
lean_inc(v_throw_1066_);
lean_dec_ref(v_inst_930_);
v___x_1067_ = lean_apply_1(v_err_931_, v_a_1065_);
v___x_1068_ = lean_apply_2(v_throw_1066_, lean_box(0), v___x_1067_);
return v___x_1068_;
}
else
{
lean_object* v_a_1069_; lean_object* v_fst_1070_; lean_object* v_snd_1071_; lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1094_; 
v_a_1069_ = lean_ctor_get(v___x_1064_, 0);
lean_inc(v_a_1069_);
lean_dec_ref_known(v___x_1064_, 1);
v_fst_1070_ = lean_ctor_get(v_a_1069_, 0);
v_snd_1071_ = lean_ctor_get(v_a_1069_, 1);
v_isSharedCheck_1094_ = !lean_is_exclusive(v_a_1069_);
if (v_isSharedCheck_1094_ == 0)
{
v___x_1073_ = v_a_1069_;
v_isShared_1074_ = v_isSharedCheck_1094_;
goto v_resetjp_1072_;
}
else
{
lean_inc(v_snd_1071_);
lean_inc(v_fst_1070_);
lean_dec(v_a_1069_);
v___x_1073_ = lean_box(0);
v_isShared_1074_ = v_isSharedCheck_1094_;
goto v_resetjp_1072_;
}
v_resetjp_1072_:
{
lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; 
v___x_1075_ = lean_string_utf8_byte_size(v_fst_1070_);
v___x_1076_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1076_, 0, v_fst_1070_);
lean_ctor_set(v___x_1076_, 1, v_zero_939_);
lean_ctor_set(v___x_1076_, 2, v___x_1075_);
v___x_1077_ = l_String_Slice_toInt_x3f(v___x_1076_);
if (lean_obj_tag(v___x_1077_) == 0)
{
lean_object* v_throw_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; 
lean_del_object(v___x_1073_);
lean_dec(v_snd_1071_);
lean_dec(v_toPure_938_);
v_throw_1078_ = lean_ctor_get(v_inst_930_, 0);
lean_inc(v_throw_1078_);
lean_dec_ref(v_inst_930_);
v___x_1079_ = ((lean_object*)(l_Lasm_JS_Wire_readAt___redArg___closed__1));
v___x_1080_ = lean_apply_1(v_err_931_, v___x_1079_);
v___x_1081_ = lean_apply_2(v_throw_1078_, lean_box(0), v___x_1080_);
return v___x_1081_;
}
else
{
lean_object* v_val_1082_; lean_object* v___x_1084_; uint8_t v_isShared_1085_; uint8_t v_isSharedCheck_1093_; 
lean_dec(v_err_931_);
lean_dec_ref(v_inst_930_);
v_val_1082_ = lean_ctor_get(v___x_1077_, 0);
v_isSharedCheck_1093_ = !lean_is_exclusive(v___x_1077_);
if (v_isSharedCheck_1093_ == 0)
{
v___x_1084_ = v___x_1077_;
v_isShared_1085_ = v_isSharedCheck_1093_;
goto v_resetjp_1083_;
}
else
{
lean_inc(v_val_1082_);
lean_dec(v___x_1077_);
v___x_1084_ = lean_box(0);
v_isShared_1085_ = v_isSharedCheck_1093_;
goto v_resetjp_1083_;
}
v_resetjp_1083_:
{
lean_object* v___x_1087_; 
if (v_isShared_1085_ == 0)
{
lean_ctor_set_tag(v___x_1084_, 5);
v___x_1087_ = v___x_1084_;
goto v_reusejp_1086_;
}
else
{
lean_object* v_reuseFailAlloc_1092_; 
v_reuseFailAlloc_1092_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1092_, 0, v_val_1082_);
v___x_1087_ = v_reuseFailAlloc_1092_;
goto v_reusejp_1086_;
}
v_reusejp_1086_:
{
lean_object* v___x_1089_; 
if (v_isShared_1074_ == 0)
{
lean_ctor_set(v___x_1073_, 0, v___x_1087_);
v___x_1089_ = v___x_1073_;
goto v_reusejp_1088_;
}
else
{
lean_object* v_reuseFailAlloc_1091_; 
v_reuseFailAlloc_1091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1091_, 0, v___x_1087_);
lean_ctor_set(v_reuseFailAlloc_1091_, 1, v_snd_1071_);
v___x_1089_ = v_reuseFailAlloc_1091_;
goto v_reusejp_1088_;
}
v_reusejp_1088_:
{
lean_object* v___x_1090_; 
v___x_1090_ = lean_apply_2(v_toPure_938_, lean_box(0), v___x_1089_);
return v___x_1090_;
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
lean_object* v___x_1095_; 
lean_inc(v_toPure_938_);
lean_dec(v_toBind_937_);
lean_dec(v_ref_932_);
lean_dec_ref(v_inst_929_);
v___x_1095_ = l_Lasm_JS_Wire_readString(v_x_934_, v_o_x27_952_);
lean_dec(v_o_x27_952_);
lean_dec_ref(v_x_934_);
if (lean_obj_tag(v___x_1095_) == 0)
{
lean_object* v_a_1096_; lean_object* v_throw_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; 
lean_dec(v_toPure_938_);
v_a_1096_ = lean_ctor_get(v___x_1095_, 0);
lean_inc(v_a_1096_);
lean_dec_ref_known(v___x_1095_, 1);
v_throw_1097_ = lean_ctor_get(v_inst_930_, 0);
lean_inc(v_throw_1097_);
lean_dec_ref(v_inst_930_);
v___x_1098_ = lean_apply_1(v_err_931_, v_a_1096_);
v___x_1099_ = lean_apply_2(v_throw_1097_, lean_box(0), v___x_1098_);
return v___x_1099_;
}
else
{
lean_object* v_a_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1117_; 
lean_dec(v_err_931_);
lean_dec_ref(v_inst_930_);
v_a_1100_ = lean_ctor_get(v___x_1095_, 0);
v_isSharedCheck_1117_ = !lean_is_exclusive(v___x_1095_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1102_ = v___x_1095_;
v_isShared_1103_ = v_isSharedCheck_1117_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_a_1100_);
lean_dec(v___x_1095_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1117_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v_fst_1104_; lean_object* v_snd_1105_; lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1116_; 
v_fst_1104_ = lean_ctor_get(v_a_1100_, 0);
v_snd_1105_ = lean_ctor_get(v_a_1100_, 1);
v_isSharedCheck_1116_ = !lean_is_exclusive(v_a_1100_);
if (v_isSharedCheck_1116_ == 0)
{
v___x_1107_ = v_a_1100_;
v_isShared_1108_ = v_isSharedCheck_1116_;
goto v_resetjp_1106_;
}
else
{
lean_inc(v_snd_1105_);
lean_inc(v_fst_1104_);
lean_dec(v_a_1100_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1116_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
lean_object* v___x_1110_; 
if (v_isShared_1103_ == 0)
{
lean_ctor_set_tag(v___x_1102_, 4);
lean_ctor_set(v___x_1102_, 0, v_fst_1104_);
v___x_1110_ = v___x_1102_;
goto v_reusejp_1109_;
}
else
{
lean_object* v_reuseFailAlloc_1115_; 
v_reuseFailAlloc_1115_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1115_, 0, v_fst_1104_);
v___x_1110_ = v_reuseFailAlloc_1115_;
goto v_reusejp_1109_;
}
v_reusejp_1109_:
{
lean_object* v___x_1112_; 
if (v_isShared_1108_ == 0)
{
lean_ctor_set(v___x_1107_, 0, v___x_1110_);
v___x_1112_ = v___x_1107_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v___x_1110_);
lean_ctor_set(v_reuseFailAlloc_1114_, 1, v_snd_1105_);
v___x_1112_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
lean_object* v___x_1113_; 
v___x_1113_ = lean_apply_2(v_toPure_938_, lean_box(0), v___x_1112_);
return v___x_1113_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1119_; uint8_t v_isShared_1120_; uint8_t v_isSharedCheck_1136_; 
lean_inc(v_toPure_938_);
lean_dec(v_ref_932_);
v_isSharedCheck_1136_ = !lean_is_exclusive(v_inst_929_);
if (v_isSharedCheck_1136_ == 0)
{
lean_object* v_unused_1137_; lean_object* v_unused_1138_; 
v_unused_1137_ = lean_ctor_get(v_inst_929_, 1);
lean_dec(v_unused_1137_);
v_unused_1138_ = lean_ctor_get(v_inst_929_, 0);
lean_dec(v_unused_1138_);
v___x_1119_ = v_inst_929_;
v_isShared_1120_ = v_isSharedCheck_1136_;
goto v_resetjp_1118_;
}
else
{
lean_dec(v_inst_929_);
v___x_1119_ = lean_box(0);
v_isShared_1120_ = v_isSharedCheck_1136_;
goto v_resetjp_1118_;
}
v_resetjp_1118_:
{
lean_object* v___x_1121_; 
v___x_1121_ = l_Lasm_JS_Wire_readU64(v_x_934_, v_o_x27_952_);
lean_dec_ref(v_x_934_);
if (lean_obj_tag(v___x_1121_) == 0)
{
lean_object* v_throw_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; 
lean_del_object(v___x_1119_);
lean_dec(v_o_x27_952_);
lean_dec(v_toPure_938_);
v_throw_1122_ = lean_ctor_get(v_inst_930_, 0);
lean_inc(v_throw_1122_);
lean_dec_ref(v_inst_930_);
v___x_1123_ = ((lean_object*)(l_Lasm_JS_Wire_readString___closed__0));
v___x_1124_ = lean_apply_1(v_err_931_, v___x_1123_);
v___x_1125_ = lean_apply_2(v_throw_1122_, lean_box(0), v___x_1124_);
return v___x_1125_;
}
else
{
lean_object* v_val_1126_; uint64_t v___x_1127_; double v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1133_; 
lean_dec(v_err_931_);
lean_dec_ref(v_inst_930_);
v_val_1126_ = lean_ctor_get(v___x_1121_, 0);
lean_inc(v_val_1126_);
lean_dec_ref_known(v___x_1121_, 1);
v___x_1127_ = lean_unbox_uint64(v_val_1126_);
lean_dec(v_val_1126_);
v___x_1128_ = lean_float_of_bits(v___x_1127_);
v___x_1129_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1129_, 0, v___x_1128_);
v___x_1130_ = lean_unsigned_to_nat(8u);
v___x_1131_ = lean_nat_add(v_o_x27_952_, v___x_1130_);
lean_dec(v_o_x27_952_);
if (v_isShared_1120_ == 0)
{
lean_ctor_set(v___x_1119_, 1, v___x_1131_);
lean_ctor_set(v___x_1119_, 0, v___x_1129_);
v___x_1133_ = v___x_1119_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v___x_1129_);
lean_ctor_set(v_reuseFailAlloc_1135_, 1, v___x_1131_);
v___x_1133_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1132_;
}
v_reusejp_1132_:
{
lean_object* v___x_1134_; 
v___x_1134_ = lean_apply_2(v_toPure_938_, lean_box(0), v___x_1133_);
return v___x_1134_;
}
}
}
}
}
else
{
lean_object* v___x_1140_; uint8_t v_isShared_1141_; uint8_t v_isSharedCheck_1147_; 
lean_inc(v_toPure_938_);
lean_dec_ref(v_x_934_);
lean_dec(v_ref_932_);
lean_dec(v_err_931_);
lean_dec_ref(v_inst_930_);
v_isSharedCheck_1147_ = !lean_is_exclusive(v_inst_929_);
if (v_isSharedCheck_1147_ == 0)
{
lean_object* v_unused_1148_; lean_object* v_unused_1149_; 
v_unused_1148_ = lean_ctor_get(v_inst_929_, 1);
lean_dec(v_unused_1148_);
v_unused_1149_ = lean_ctor_get(v_inst_929_, 0);
lean_dec(v_unused_1149_);
v___x_1140_ = v_inst_929_;
v_isShared_1141_ = v_isSharedCheck_1147_;
goto v_resetjp_1139_;
}
else
{
lean_dec(v_inst_929_);
v___x_1140_ = lean_box(0);
v_isShared_1141_ = v_isSharedCheck_1147_;
goto v_resetjp_1139_;
}
v_resetjp_1139_:
{
lean_object* v___x_1142_; lean_object* v___x_1144_; 
v___x_1142_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1142_, 0, v___x_946_);
if (v_isShared_1141_ == 0)
{
lean_ctor_set(v___x_1140_, 1, v_o_x27_952_);
lean_ctor_set(v___x_1140_, 0, v___x_1142_);
v___x_1144_ = v___x_1140_;
goto v_reusejp_1143_;
}
else
{
lean_object* v_reuseFailAlloc_1146_; 
v_reuseFailAlloc_1146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1146_, 0, v___x_1142_);
lean_ctor_set(v_reuseFailAlloc_1146_, 1, v_o_x27_952_);
v___x_1144_ = v_reuseFailAlloc_1146_;
goto v_reusejp_1143_;
}
v_reusejp_1143_:
{
lean_object* v___x_1145_; 
v___x_1145_ = lean_apply_2(v_toPure_938_, lean_box(0), v___x_1144_);
return v___x_1145_;
}
}
}
}
else
{
lean_object* v___x_1151_; uint8_t v_isShared_1152_; uint8_t v_isSharedCheck_1158_; 
lean_inc(v_toPure_938_);
lean_dec_ref(v_x_934_);
lean_dec(v_ref_932_);
lean_dec(v_err_931_);
lean_dec_ref(v_inst_930_);
v_isSharedCheck_1158_ = !lean_is_exclusive(v_inst_929_);
if (v_isSharedCheck_1158_ == 0)
{
lean_object* v_unused_1159_; lean_object* v_unused_1160_; 
v_unused_1159_ = lean_ctor_get(v_inst_929_, 1);
lean_dec(v_unused_1159_);
v_unused_1160_ = lean_ctor_get(v_inst_929_, 0);
lean_dec(v_unused_1160_);
v___x_1151_ = v_inst_929_;
v_isShared_1152_ = v_isSharedCheck_1158_;
goto v_resetjp_1150_;
}
else
{
lean_dec(v_inst_929_);
v___x_1151_ = lean_box(0);
v_isShared_1152_ = v_isSharedCheck_1158_;
goto v_resetjp_1150_;
}
v_resetjp_1150_:
{
lean_object* v___x_1153_; lean_object* v___x_1155_; 
v___x_1153_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1153_, 0, v___x_957_);
if (v_isShared_1152_ == 0)
{
lean_ctor_set(v___x_1151_, 1, v_o_x27_952_);
lean_ctor_set(v___x_1151_, 0, v___x_1153_);
v___x_1155_ = v___x_1151_;
goto v_reusejp_1154_;
}
else
{
lean_object* v_reuseFailAlloc_1157_; 
v_reuseFailAlloc_1157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1157_, 0, v___x_1153_);
lean_ctor_set(v_reuseFailAlloc_1157_, 1, v_o_x27_952_);
v___x_1155_ = v_reuseFailAlloc_1157_;
goto v_reusejp_1154_;
}
v_reusejp_1154_:
{
lean_object* v___x_1156_; 
v___x_1156_ = lean_apply_2(v_toPure_938_, lean_box(0), v___x_1155_);
return v___x_1156_;
}
}
}
}
else
{
lean_object* v___x_1162_; uint8_t v_isShared_1163_; uint8_t v_isSharedCheck_1169_; 
lean_inc(v_toPure_938_);
lean_dec_ref(v_x_934_);
lean_dec(v_ref_932_);
lean_dec(v_err_931_);
lean_dec_ref(v_inst_930_);
v_isSharedCheck_1169_ = !lean_is_exclusive(v_inst_929_);
if (v_isSharedCheck_1169_ == 0)
{
lean_object* v_unused_1170_; lean_object* v_unused_1171_; 
v_unused_1170_ = lean_ctor_get(v_inst_929_, 1);
lean_dec(v_unused_1170_);
v_unused_1171_ = lean_ctor_get(v_inst_929_, 0);
lean_dec(v_unused_1171_);
v___x_1162_ = v_inst_929_;
v_isShared_1163_ = v_isSharedCheck_1169_;
goto v_resetjp_1161_;
}
else
{
lean_dec(v_inst_929_);
v___x_1162_ = lean_box(0);
v_isShared_1163_ = v_isSharedCheck_1169_;
goto v_resetjp_1161_;
}
v_resetjp_1161_:
{
lean_object* v___x_1164_; lean_object* v___x_1166_; 
v___x_1164_ = lean_box(1);
if (v_isShared_1163_ == 0)
{
lean_ctor_set(v___x_1162_, 1, v_o_x27_952_);
lean_ctor_set(v___x_1162_, 0, v___x_1164_);
v___x_1166_ = v___x_1162_;
goto v_reusejp_1165_;
}
else
{
lean_object* v_reuseFailAlloc_1168_; 
v_reuseFailAlloc_1168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1168_, 0, v___x_1164_);
lean_ctor_set(v_reuseFailAlloc_1168_, 1, v_o_x27_952_);
v___x_1166_ = v_reuseFailAlloc_1168_;
goto v_reusejp_1165_;
}
v_reusejp_1165_:
{
lean_object* v___x_1167_; 
v___x_1167_ = lean_apply_2(v_toPure_938_, lean_box(0), v___x_1166_);
return v___x_1167_;
}
}
}
}
else
{
lean_object* v___x_1173_; uint8_t v_isShared_1174_; uint8_t v_isSharedCheck_1180_; 
lean_inc(v_toPure_938_);
lean_dec_ref(v_x_934_);
lean_dec(v_ref_932_);
lean_dec(v_err_931_);
lean_dec_ref(v_inst_930_);
v_isSharedCheck_1180_ = !lean_is_exclusive(v_inst_929_);
if (v_isSharedCheck_1180_ == 0)
{
lean_object* v_unused_1181_; lean_object* v_unused_1182_; 
v_unused_1181_ = lean_ctor_get(v_inst_929_, 1);
lean_dec(v_unused_1181_);
v_unused_1182_ = lean_ctor_get(v_inst_929_, 0);
lean_dec(v_unused_1182_);
v___x_1173_ = v_inst_929_;
v_isShared_1174_ = v_isSharedCheck_1180_;
goto v_resetjp_1172_;
}
else
{
lean_dec(v_inst_929_);
v___x_1173_ = lean_box(0);
v_isShared_1174_ = v_isSharedCheck_1180_;
goto v_resetjp_1172_;
}
v_resetjp_1172_:
{
lean_object* v___x_1175_; lean_object* v___x_1177_; 
v___x_1175_ = lean_box(0);
if (v_isShared_1174_ == 0)
{
lean_ctor_set(v___x_1173_, 1, v_o_x27_952_);
lean_ctor_set(v___x_1173_, 0, v___x_1175_);
v___x_1177_ = v___x_1173_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1179_; 
v_reuseFailAlloc_1179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1179_, 0, v___x_1175_);
lean_ctor_set(v_reuseFailAlloc_1179_, 1, v_o_x27_952_);
v___x_1177_ = v_reuseFailAlloc_1179_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
lean_object* v___x_1178_; 
v___x_1178_ = lean_apply_2(v_toPure_938_, lean_box(0), v___x_1177_);
return v___x_1178_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readItems___redArg(lean_object* v_inst_1183_, lean_object* v_inst_1184_, lean_object* v_err_1185_, lean_object* v_ref_1186_, lean_object* v_fuel_1187_, lean_object* v_b_1188_, lean_object* v_x_1189_, lean_object* v_x_1190_, lean_object* v_x_1191_){
_start:
{
lean_object* v_toApplicative_1192_; lean_object* v_toBind_1193_; lean_object* v_toPure_1194_; lean_object* v_zero_1195_; uint8_t v_isZero_1196_; 
v_toApplicative_1192_ = lean_ctor_get(v_inst_1183_, 0);
v_toBind_1193_ = lean_ctor_get(v_inst_1183_, 1);
v_toPure_1194_ = lean_ctor_get(v_toApplicative_1192_, 1);
v_zero_1195_ = lean_unsigned_to_nat(0u);
v_isZero_1196_ = lean_nat_dec_eq(v_x_1189_, v_zero_1195_);
if (v_isZero_1196_ == 1)
{
lean_object* v___x_1198_; uint8_t v_isShared_1199_; uint8_t v_isSharedCheck_1204_; 
lean_inc(v_toPure_1194_);
lean_dec_ref(v_b_1188_);
lean_dec(v_fuel_1187_);
lean_dec(v_ref_1186_);
lean_dec(v_err_1185_);
lean_dec_ref(v_inst_1184_);
v_isSharedCheck_1204_ = !lean_is_exclusive(v_inst_1183_);
if (v_isSharedCheck_1204_ == 0)
{
lean_object* v_unused_1205_; lean_object* v_unused_1206_; 
v_unused_1205_ = lean_ctor_get(v_inst_1183_, 1);
lean_dec(v_unused_1205_);
v_unused_1206_ = lean_ctor_get(v_inst_1183_, 0);
lean_dec(v_unused_1206_);
v___x_1198_ = v_inst_1183_;
v_isShared_1199_ = v_isSharedCheck_1204_;
goto v_resetjp_1197_;
}
else
{
lean_dec(v_inst_1183_);
v___x_1198_ = lean_box(0);
v_isShared_1199_ = v_isSharedCheck_1204_;
goto v_resetjp_1197_;
}
v_resetjp_1197_:
{
lean_object* v___x_1201_; 
if (v_isShared_1199_ == 0)
{
lean_ctor_set(v___x_1198_, 1, v_x_1190_);
lean_ctor_set(v___x_1198_, 0, v_x_1191_);
v___x_1201_ = v___x_1198_;
goto v_reusejp_1200_;
}
else
{
lean_object* v_reuseFailAlloc_1203_; 
v_reuseFailAlloc_1203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1203_, 0, v_x_1191_);
lean_ctor_set(v_reuseFailAlloc_1203_, 1, v_x_1190_);
v___x_1201_ = v_reuseFailAlloc_1203_;
goto v_reusejp_1200_;
}
v_reusejp_1200_:
{
lean_object* v___x_1202_; 
v___x_1202_ = lean_apply_2(v_toPure_1194_, lean_box(0), v___x_1201_);
return v___x_1202_;
}
}
}
else
{
lean_object* v_one_1207_; lean_object* v_n_1208_; lean_object* v___f_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; 
lean_inc(v_toBind_1193_);
v_one_1207_ = lean_unsigned_to_nat(1u);
v_n_1208_ = lean_nat_sub(v_x_1189_, v_one_1207_);
lean_inc_ref(v_b_1188_);
lean_inc(v_fuel_1187_);
lean_inc(v_ref_1186_);
lean_inc(v_err_1185_);
lean_inc_ref(v_inst_1184_);
lean_inc_ref(v_inst_1183_);
v___f_1209_ = lean_alloc_closure((void*)(l_Lasm_JS_Wire_readItems___redArg___lam__0___boxed), 9, 8);
lean_closure_set(v___f_1209_, 0, v_x_1191_);
lean_closure_set(v___f_1209_, 1, v_inst_1183_);
lean_closure_set(v___f_1209_, 2, v_inst_1184_);
lean_closure_set(v___f_1209_, 3, v_err_1185_);
lean_closure_set(v___f_1209_, 4, v_ref_1186_);
lean_closure_set(v___f_1209_, 5, v_fuel_1187_);
lean_closure_set(v___f_1209_, 6, v_b_1188_);
lean_closure_set(v___f_1209_, 7, v_n_1208_);
v___x_1210_ = l_Lasm_JS_Wire_readAt___redArg(v_inst_1183_, v_inst_1184_, v_err_1185_, v_ref_1186_, v_fuel_1187_, v_b_1188_, v_x_1190_);
lean_dec(v_x_1190_);
lean_dec(v_fuel_1187_);
v___x_1211_ = lean_apply_4(v_toBind_1193_, lean_box(0), lean_box(0), v___x_1210_, v___f_1209_);
return v___x_1211_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readItems___redArg___lam__0(lean_object* v_x_1212_, lean_object* v_inst_1213_, lean_object* v_inst_1214_, lean_object* v_err_1215_, lean_object* v_ref_1216_, lean_object* v_fuel_1217_, lean_object* v_b_1218_, lean_object* v_n_1219_, lean_object* v_____x_1220_){
_start:
{
lean_object* v_fst_1221_; lean_object* v_snd_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; 
v_fst_1221_ = lean_ctor_get(v_____x_1220_, 0);
lean_inc(v_fst_1221_);
v_snd_1222_ = lean_ctor_get(v_____x_1220_, 1);
lean_inc(v_snd_1222_);
lean_dec_ref(v_____x_1220_);
v___x_1223_ = lean_array_push(v_x_1212_, v_fst_1221_);
v___x_1224_ = l_Lasm_JS_Wire_readItems___redArg(v_inst_1213_, v_inst_1214_, v_err_1215_, v_ref_1216_, v_fuel_1217_, v_b_1218_, v_n_1219_, v_snd_1222_, v___x_1223_);
return v___x_1224_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readItems___redArg___boxed(lean_object* v_inst_1225_, lean_object* v_inst_1226_, lean_object* v_err_1227_, lean_object* v_ref_1228_, lean_object* v_fuel_1229_, lean_object* v_b_1230_, lean_object* v_x_1231_, lean_object* v_x_1232_, lean_object* v_x_1233_){
_start:
{
lean_object* v_res_1234_; 
v_res_1234_ = l_Lasm_JS_Wire_readItems___redArg(v_inst_1225_, v_inst_1226_, v_err_1227_, v_ref_1228_, v_fuel_1229_, v_b_1230_, v_x_1231_, v_x_1232_, v_x_1233_);
lean_dec(v_x_1231_);
return v_res_1234_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readFields___redArg___boxed(lean_object* v_inst_1235_, lean_object* v_inst_1236_, lean_object* v_err_1237_, lean_object* v_ref_1238_, lean_object* v_fuel_1239_, lean_object* v_b_1240_, lean_object* v_x_1241_, lean_object* v_x_1242_, lean_object* v_x_1243_){
_start:
{
lean_object* v_res_1244_; 
v_res_1244_ = l_Lasm_JS_Wire_readFields___redArg(v_inst_1235_, v_inst_1236_, v_err_1237_, v_ref_1238_, v_fuel_1239_, v_b_1240_, v_x_1241_, v_x_1242_, v_x_1243_);
lean_dec(v_x_1241_);
return v_res_1244_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readAt___redArg___boxed(lean_object* v_inst_1245_, lean_object* v_inst_1246_, lean_object* v_err_1247_, lean_object* v_ref_1248_, lean_object* v_x_1249_, lean_object* v_x_1250_, lean_object* v_x_1251_){
_start:
{
lean_object* v_res_1252_; 
v_res_1252_ = l_Lasm_JS_Wire_readAt___redArg(v_inst_1245_, v_inst_1246_, v_err_1247_, v_ref_1248_, v_x_1249_, v_x_1250_, v_x_1251_);
lean_dec(v_x_1251_);
lean_dec(v_x_1249_);
return v_res_1252_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readAt(lean_object* v_m_1253_, lean_object* v_inst_1254_, lean_object* v_00_u03b5_1255_, lean_object* v_inst_1256_, lean_object* v_err_1257_, lean_object* v_ref_1258_, lean_object* v_x_1259_, lean_object* v_x_1260_, lean_object* v_x_1261_){
_start:
{
lean_object* v___x_1262_; 
v___x_1262_ = l_Lasm_JS_Wire_readAt___redArg(v_inst_1254_, v_inst_1256_, v_err_1257_, v_ref_1258_, v_x_1259_, v_x_1260_, v_x_1261_);
return v___x_1262_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readAt___boxed(lean_object* v_m_1263_, lean_object* v_inst_1264_, lean_object* v_00_u03b5_1265_, lean_object* v_inst_1266_, lean_object* v_err_1267_, lean_object* v_ref_1268_, lean_object* v_x_1269_, lean_object* v_x_1270_, lean_object* v_x_1271_){
_start:
{
lean_object* v_res_1272_; 
v_res_1272_ = l_Lasm_JS_Wire_readAt(v_m_1263_, v_inst_1264_, v_00_u03b5_1265_, v_inst_1266_, v_err_1267_, v_ref_1268_, v_x_1269_, v_x_1270_, v_x_1271_);
lean_dec(v_x_1271_);
lean_dec(v_x_1269_);
return v_res_1272_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readFields(lean_object* v_m_1273_, lean_object* v_inst_1274_, lean_object* v_00_u03b5_1275_, lean_object* v_inst_1276_, lean_object* v_err_1277_, lean_object* v_ref_1278_, lean_object* v_fuel_1279_, lean_object* v_b_1280_, lean_object* v_x_1281_, lean_object* v_x_1282_, lean_object* v_x_1283_){
_start:
{
lean_object* v___x_1284_; 
v___x_1284_ = l_Lasm_JS_Wire_readFields___redArg(v_inst_1274_, v_inst_1276_, v_err_1277_, v_ref_1278_, v_fuel_1279_, v_b_1280_, v_x_1281_, v_x_1282_, v_x_1283_);
return v___x_1284_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readFields___boxed(lean_object* v_m_1285_, lean_object* v_inst_1286_, lean_object* v_00_u03b5_1287_, lean_object* v_inst_1288_, lean_object* v_err_1289_, lean_object* v_ref_1290_, lean_object* v_fuel_1291_, lean_object* v_b_1292_, lean_object* v_x_1293_, lean_object* v_x_1294_, lean_object* v_x_1295_){
_start:
{
lean_object* v_res_1296_; 
v_res_1296_ = l_Lasm_JS_Wire_readFields(v_m_1285_, v_inst_1286_, v_00_u03b5_1287_, v_inst_1288_, v_err_1289_, v_ref_1290_, v_fuel_1291_, v_b_1292_, v_x_1293_, v_x_1294_, v_x_1295_);
lean_dec(v_x_1293_);
return v_res_1296_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readItems(lean_object* v_m_1297_, lean_object* v_inst_1298_, lean_object* v_00_u03b5_1299_, lean_object* v_inst_1300_, lean_object* v_err_1301_, lean_object* v_ref_1302_, lean_object* v_fuel_1303_, lean_object* v_b_1304_, lean_object* v_x_1305_, lean_object* v_x_1306_, lean_object* v_x_1307_){
_start:
{
lean_object* v___x_1308_; 
v___x_1308_ = l_Lasm_JS_Wire_readItems___redArg(v_inst_1298_, v_inst_1300_, v_err_1301_, v_ref_1302_, v_fuel_1303_, v_b_1304_, v_x_1305_, v_x_1306_, v_x_1307_);
return v___x_1308_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readItems___boxed(lean_object* v_m_1309_, lean_object* v_inst_1310_, lean_object* v_00_u03b5_1311_, lean_object* v_inst_1312_, lean_object* v_err_1313_, lean_object* v_ref_1314_, lean_object* v_fuel_1315_, lean_object* v_b_1316_, lean_object* v_x_1317_, lean_object* v_x_1318_, lean_object* v_x_1319_){
_start:
{
lean_object* v_res_1320_; 
v_res_1320_ = l_Lasm_JS_Wire_readItems(v_m_1309_, v_inst_1310_, v_00_u03b5_1311_, v_inst_1312_, v_err_1313_, v_ref_1314_, v_fuel_1315_, v_b_1316_, v_x_1317_, v_x_1318_, v_x_1319_);
lean_dec(v_x_1317_);
return v_res_1320_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__13_splitter___redArg(lean_object* v_x_1321_, lean_object* v_x_1322_, lean_object* v_x_1323_, lean_object* v_h__1_1324_, lean_object* v_h__2_1325_){
_start:
{
lean_object* v_zero_1326_; uint8_t v_isZero_1327_; 
v_zero_1326_ = lean_unsigned_to_nat(0u);
v_isZero_1327_ = lean_nat_dec_eq(v_x_1321_, v_zero_1326_);
if (v_isZero_1327_ == 1)
{
lean_object* v___x_1328_; 
lean_dec(v_h__2_1325_);
v___x_1328_ = lean_apply_2(v_h__1_1324_, v_x_1322_, v_x_1323_);
return v___x_1328_;
}
else
{
lean_object* v_one_1329_; lean_object* v_n_1330_; lean_object* v___x_1331_; 
lean_dec(v_h__1_1324_);
v_one_1329_ = lean_unsigned_to_nat(1u);
v_n_1330_ = lean_nat_sub(v_x_1321_, v_one_1329_);
v___x_1331_ = lean_apply_3(v_h__2_1325_, v_n_1330_, v_x_1322_, v_x_1323_);
return v___x_1331_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__13_splitter___redArg___boxed(lean_object* v_x_1332_, lean_object* v_x_1333_, lean_object* v_x_1334_, lean_object* v_h__1_1335_, lean_object* v_h__2_1336_){
_start:
{
lean_object* v_res_1337_; 
v_res_1337_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__13_splitter___redArg(v_x_1332_, v_x_1333_, v_x_1334_, v_h__1_1335_, v_h__2_1336_);
lean_dec(v_x_1332_);
return v_res_1337_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__13_splitter(lean_object* v_motive_1338_, lean_object* v_x_1339_, lean_object* v_x_1340_, lean_object* v_x_1341_, lean_object* v_h__1_1342_, lean_object* v_h__2_1343_){
_start:
{
lean_object* v_zero_1344_; uint8_t v_isZero_1345_; 
v_zero_1344_ = lean_unsigned_to_nat(0u);
v_isZero_1345_ = lean_nat_dec_eq(v_x_1339_, v_zero_1344_);
if (v_isZero_1345_ == 1)
{
lean_object* v___x_1346_; 
lean_dec(v_h__2_1343_);
v___x_1346_ = lean_apply_2(v_h__1_1342_, v_x_1340_, v_x_1341_);
return v___x_1346_;
}
else
{
lean_object* v_one_1347_; lean_object* v_n_1348_; lean_object* v___x_1349_; 
lean_dec(v_h__1_1342_);
v_one_1347_ = lean_unsigned_to_nat(1u);
v_n_1348_ = lean_nat_sub(v_x_1339_, v_one_1347_);
v___x_1349_ = lean_apply_3(v_h__2_1343_, v_n_1348_, v_x_1340_, v_x_1341_);
return v___x_1349_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__13_splitter___boxed(lean_object* v_motive_1350_, lean_object* v_x_1351_, lean_object* v_x_1352_, lean_object* v_x_1353_, lean_object* v_h__1_1354_, lean_object* v_h__2_1355_){
_start:
{
lean_object* v_res_1356_; 
v_res_1356_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__13_splitter(v_motive_1350_, v_x_1351_, v_x_1352_, v_x_1353_, v_h__1_1354_, v_h__2_1355_);
lean_dec(v_x_1351_);
return v_res_1356_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__11_splitter___redArg(uint8_t v_x_1357_, lean_object* v_h__1_1358_, lean_object* v_h__2_1359_, lean_object* v_h__3_1360_, lean_object* v_h__4_1361_, lean_object* v_h__5_1362_, lean_object* v_h__6_1363_, lean_object* v_h__7_1364_, lean_object* v_h__8_1365_, lean_object* v_h__9_1366_, lean_object* v_h__10_1367_, lean_object* v_h__11_1368_, lean_object* v_h__12_1369_){
_start:
{
uint8_t v___x_1370_; uint8_t v___x_1371_; 
v___x_1370_ = 0;
v___x_1371_ = lean_uint8_dec_eq(v_x_1357_, v___x_1370_);
if (v___x_1371_ == 0)
{
uint8_t v___x_1372_; uint8_t v___x_1373_; 
lean_dec(v_h__1_1358_);
v___x_1372_ = 1;
v___x_1373_ = lean_uint8_dec_eq(v_x_1357_, v___x_1372_);
if (v___x_1373_ == 0)
{
uint8_t v___x_1374_; uint8_t v___x_1375_; 
lean_dec(v_h__2_1359_);
v___x_1374_ = 2;
v___x_1375_ = lean_uint8_dec_eq(v_x_1357_, v___x_1374_);
if (v___x_1375_ == 0)
{
uint8_t v___x_1376_; uint8_t v___x_1377_; 
lean_dec(v_h__3_1360_);
v___x_1376_ = 3;
v___x_1377_ = lean_uint8_dec_eq(v_x_1357_, v___x_1376_);
if (v___x_1377_ == 0)
{
uint8_t v___x_1378_; uint8_t v___x_1379_; 
lean_dec(v_h__4_1361_);
v___x_1378_ = 4;
v___x_1379_ = lean_uint8_dec_eq(v_x_1357_, v___x_1378_);
if (v___x_1379_ == 0)
{
uint8_t v___x_1380_; uint8_t v___x_1381_; 
lean_dec(v_h__5_1362_);
v___x_1380_ = 5;
v___x_1381_ = lean_uint8_dec_eq(v_x_1357_, v___x_1380_);
if (v___x_1381_ == 0)
{
uint8_t v___x_1382_; uint8_t v___x_1383_; 
lean_dec(v_h__6_1363_);
v___x_1382_ = 6;
v___x_1383_ = lean_uint8_dec_eq(v_x_1357_, v___x_1382_);
if (v___x_1383_ == 0)
{
uint8_t v___x_1384_; uint8_t v___x_1385_; 
lean_dec(v_h__7_1364_);
v___x_1384_ = 7;
v___x_1385_ = lean_uint8_dec_eq(v_x_1357_, v___x_1384_);
if (v___x_1385_ == 0)
{
uint8_t v___x_1386_; uint8_t v___x_1387_; 
lean_dec(v_h__8_1365_);
v___x_1386_ = 8;
v___x_1387_ = lean_uint8_dec_eq(v_x_1357_, v___x_1386_);
if (v___x_1387_ == 0)
{
uint8_t v___x_1388_; uint8_t v___x_1389_; 
lean_dec(v_h__9_1366_);
v___x_1388_ = 9;
v___x_1389_ = lean_uint8_dec_eq(v_x_1357_, v___x_1388_);
if (v___x_1389_ == 0)
{
uint8_t v___x_1390_; uint8_t v___x_1391_; 
lean_dec(v_h__10_1367_);
v___x_1390_ = 10;
v___x_1391_ = lean_uint8_dec_eq(v_x_1357_, v___x_1390_);
if (v___x_1391_ == 0)
{
lean_object* v___x_1392_; lean_object* v___x_1393_; 
lean_dec(v_h__11_1368_);
v___x_1392_ = lean_box(v_x_1357_);
v___x_1393_ = lean_apply_12(v_h__12_1369_, v___x_1392_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1393_;
}
else
{
lean_object* v___x_1394_; lean_object* v___x_1395_; 
lean_dec(v_h__12_1369_);
v___x_1394_ = lean_box(0);
v___x_1395_ = lean_apply_1(v_h__11_1368_, v___x_1394_);
return v___x_1395_;
}
}
else
{
lean_object* v___x_1396_; lean_object* v___x_1397_; 
lean_dec(v_h__12_1369_);
lean_dec(v_h__11_1368_);
v___x_1396_ = lean_box(0);
v___x_1397_ = lean_apply_1(v_h__10_1367_, v___x_1396_);
return v___x_1397_;
}
}
else
{
lean_object* v___x_1398_; lean_object* v___x_1399_; 
lean_dec(v_h__12_1369_);
lean_dec(v_h__11_1368_);
lean_dec(v_h__10_1367_);
v___x_1398_ = lean_box(0);
v___x_1399_ = lean_apply_1(v_h__9_1366_, v___x_1398_);
return v___x_1399_;
}
}
else
{
lean_object* v___x_1400_; lean_object* v___x_1401_; 
lean_dec(v_h__12_1369_);
lean_dec(v_h__11_1368_);
lean_dec(v_h__10_1367_);
lean_dec(v_h__9_1366_);
v___x_1400_ = lean_box(0);
v___x_1401_ = lean_apply_1(v_h__8_1365_, v___x_1400_);
return v___x_1401_;
}
}
else
{
lean_object* v___x_1402_; lean_object* v___x_1403_; 
lean_dec(v_h__12_1369_);
lean_dec(v_h__11_1368_);
lean_dec(v_h__10_1367_);
lean_dec(v_h__9_1366_);
lean_dec(v_h__8_1365_);
v___x_1402_ = lean_box(0);
v___x_1403_ = lean_apply_1(v_h__7_1364_, v___x_1402_);
return v___x_1403_;
}
}
else
{
lean_object* v___x_1404_; lean_object* v___x_1405_; 
lean_dec(v_h__12_1369_);
lean_dec(v_h__11_1368_);
lean_dec(v_h__10_1367_);
lean_dec(v_h__9_1366_);
lean_dec(v_h__8_1365_);
lean_dec(v_h__7_1364_);
v___x_1404_ = lean_box(0);
v___x_1405_ = lean_apply_1(v_h__6_1363_, v___x_1404_);
return v___x_1405_;
}
}
else
{
lean_object* v___x_1406_; lean_object* v___x_1407_; 
lean_dec(v_h__12_1369_);
lean_dec(v_h__11_1368_);
lean_dec(v_h__10_1367_);
lean_dec(v_h__9_1366_);
lean_dec(v_h__8_1365_);
lean_dec(v_h__7_1364_);
lean_dec(v_h__6_1363_);
v___x_1406_ = lean_box(0);
v___x_1407_ = lean_apply_1(v_h__5_1362_, v___x_1406_);
return v___x_1407_;
}
}
else
{
lean_object* v___x_1408_; lean_object* v___x_1409_; 
lean_dec(v_h__12_1369_);
lean_dec(v_h__11_1368_);
lean_dec(v_h__10_1367_);
lean_dec(v_h__9_1366_);
lean_dec(v_h__8_1365_);
lean_dec(v_h__7_1364_);
lean_dec(v_h__6_1363_);
lean_dec(v_h__5_1362_);
v___x_1408_ = lean_box(0);
v___x_1409_ = lean_apply_1(v_h__4_1361_, v___x_1408_);
return v___x_1409_;
}
}
else
{
lean_object* v___x_1410_; lean_object* v___x_1411_; 
lean_dec(v_h__12_1369_);
lean_dec(v_h__11_1368_);
lean_dec(v_h__10_1367_);
lean_dec(v_h__9_1366_);
lean_dec(v_h__8_1365_);
lean_dec(v_h__7_1364_);
lean_dec(v_h__6_1363_);
lean_dec(v_h__5_1362_);
lean_dec(v_h__4_1361_);
v___x_1410_ = lean_box(0);
v___x_1411_ = lean_apply_1(v_h__3_1360_, v___x_1410_);
return v___x_1411_;
}
}
else
{
lean_object* v___x_1412_; lean_object* v___x_1413_; 
lean_dec(v_h__12_1369_);
lean_dec(v_h__11_1368_);
lean_dec(v_h__10_1367_);
lean_dec(v_h__9_1366_);
lean_dec(v_h__8_1365_);
lean_dec(v_h__7_1364_);
lean_dec(v_h__6_1363_);
lean_dec(v_h__5_1362_);
lean_dec(v_h__4_1361_);
lean_dec(v_h__3_1360_);
v___x_1412_ = lean_box(0);
v___x_1413_ = lean_apply_1(v_h__2_1359_, v___x_1412_);
return v___x_1413_;
}
}
else
{
lean_object* v___x_1414_; lean_object* v___x_1415_; 
lean_dec(v_h__12_1369_);
lean_dec(v_h__11_1368_);
lean_dec(v_h__10_1367_);
lean_dec(v_h__9_1366_);
lean_dec(v_h__8_1365_);
lean_dec(v_h__7_1364_);
lean_dec(v_h__6_1363_);
lean_dec(v_h__5_1362_);
lean_dec(v_h__4_1361_);
lean_dec(v_h__3_1360_);
lean_dec(v_h__2_1359_);
v___x_1414_ = lean_box(0);
v___x_1415_ = lean_apply_1(v_h__1_1358_, v___x_1414_);
return v___x_1415_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__11_splitter___redArg___boxed(lean_object* v_x_1416_, lean_object* v_h__1_1417_, lean_object* v_h__2_1418_, lean_object* v_h__3_1419_, lean_object* v_h__4_1420_, lean_object* v_h__5_1421_, lean_object* v_h__6_1422_, lean_object* v_h__7_1423_, lean_object* v_h__8_1424_, lean_object* v_h__9_1425_, lean_object* v_h__10_1426_, lean_object* v_h__11_1427_, lean_object* v_h__12_1428_){
_start:
{
uint8_t v_x_249__boxed_1429_; lean_object* v_res_1430_; 
v_x_249__boxed_1429_ = lean_unbox(v_x_1416_);
v_res_1430_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__11_splitter___redArg(v_x_249__boxed_1429_, v_h__1_1417_, v_h__2_1418_, v_h__3_1419_, v_h__4_1420_, v_h__5_1421_, v_h__6_1422_, v_h__7_1423_, v_h__8_1424_, v_h__9_1425_, v_h__10_1426_, v_h__11_1427_, v_h__12_1428_);
return v_res_1430_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__11_splitter(lean_object* v_motive_1431_, uint8_t v_x_1432_, lean_object* v_h__1_1433_, lean_object* v_h__2_1434_, lean_object* v_h__3_1435_, lean_object* v_h__4_1436_, lean_object* v_h__5_1437_, lean_object* v_h__6_1438_, lean_object* v_h__7_1439_, lean_object* v_h__8_1440_, lean_object* v_h__9_1441_, lean_object* v_h__10_1442_, lean_object* v_h__11_1443_, lean_object* v_h__12_1444_){
_start:
{
uint8_t v___x_1445_; uint8_t v___x_1446_; 
v___x_1445_ = 0;
v___x_1446_ = lean_uint8_dec_eq(v_x_1432_, v___x_1445_);
if (v___x_1446_ == 0)
{
uint8_t v___x_1447_; uint8_t v___x_1448_; 
lean_dec(v_h__1_1433_);
v___x_1447_ = 1;
v___x_1448_ = lean_uint8_dec_eq(v_x_1432_, v___x_1447_);
if (v___x_1448_ == 0)
{
uint8_t v___x_1449_; uint8_t v___x_1450_; 
lean_dec(v_h__2_1434_);
v___x_1449_ = 2;
v___x_1450_ = lean_uint8_dec_eq(v_x_1432_, v___x_1449_);
if (v___x_1450_ == 0)
{
uint8_t v___x_1451_; uint8_t v___x_1452_; 
lean_dec(v_h__3_1435_);
v___x_1451_ = 3;
v___x_1452_ = lean_uint8_dec_eq(v_x_1432_, v___x_1451_);
if (v___x_1452_ == 0)
{
uint8_t v___x_1453_; uint8_t v___x_1454_; 
lean_dec(v_h__4_1436_);
v___x_1453_ = 4;
v___x_1454_ = lean_uint8_dec_eq(v_x_1432_, v___x_1453_);
if (v___x_1454_ == 0)
{
uint8_t v___x_1455_; uint8_t v___x_1456_; 
lean_dec(v_h__5_1437_);
v___x_1455_ = 5;
v___x_1456_ = lean_uint8_dec_eq(v_x_1432_, v___x_1455_);
if (v___x_1456_ == 0)
{
uint8_t v___x_1457_; uint8_t v___x_1458_; 
lean_dec(v_h__6_1438_);
v___x_1457_ = 6;
v___x_1458_ = lean_uint8_dec_eq(v_x_1432_, v___x_1457_);
if (v___x_1458_ == 0)
{
uint8_t v___x_1459_; uint8_t v___x_1460_; 
lean_dec(v_h__7_1439_);
v___x_1459_ = 7;
v___x_1460_ = lean_uint8_dec_eq(v_x_1432_, v___x_1459_);
if (v___x_1460_ == 0)
{
uint8_t v___x_1461_; uint8_t v___x_1462_; 
lean_dec(v_h__8_1440_);
v___x_1461_ = 8;
v___x_1462_ = lean_uint8_dec_eq(v_x_1432_, v___x_1461_);
if (v___x_1462_ == 0)
{
uint8_t v___x_1463_; uint8_t v___x_1464_; 
lean_dec(v_h__9_1441_);
v___x_1463_ = 9;
v___x_1464_ = lean_uint8_dec_eq(v_x_1432_, v___x_1463_);
if (v___x_1464_ == 0)
{
uint8_t v___x_1465_; uint8_t v___x_1466_; 
lean_dec(v_h__10_1442_);
v___x_1465_ = 10;
v___x_1466_ = lean_uint8_dec_eq(v_x_1432_, v___x_1465_);
if (v___x_1466_ == 0)
{
lean_object* v___x_1467_; lean_object* v___x_1468_; 
lean_dec(v_h__11_1443_);
v___x_1467_ = lean_box(v_x_1432_);
v___x_1468_ = lean_apply_12(v_h__12_1444_, v___x_1467_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1468_;
}
else
{
lean_object* v___x_1469_; lean_object* v___x_1470_; 
lean_dec(v_h__12_1444_);
v___x_1469_ = lean_box(0);
v___x_1470_ = lean_apply_1(v_h__11_1443_, v___x_1469_);
return v___x_1470_;
}
}
else
{
lean_object* v___x_1471_; lean_object* v___x_1472_; 
lean_dec(v_h__12_1444_);
lean_dec(v_h__11_1443_);
v___x_1471_ = lean_box(0);
v___x_1472_ = lean_apply_1(v_h__10_1442_, v___x_1471_);
return v___x_1472_;
}
}
else
{
lean_object* v___x_1473_; lean_object* v___x_1474_; 
lean_dec(v_h__12_1444_);
lean_dec(v_h__11_1443_);
lean_dec(v_h__10_1442_);
v___x_1473_ = lean_box(0);
v___x_1474_ = lean_apply_1(v_h__9_1441_, v___x_1473_);
return v___x_1474_;
}
}
else
{
lean_object* v___x_1475_; lean_object* v___x_1476_; 
lean_dec(v_h__12_1444_);
lean_dec(v_h__11_1443_);
lean_dec(v_h__10_1442_);
lean_dec(v_h__9_1441_);
v___x_1475_ = lean_box(0);
v___x_1476_ = lean_apply_1(v_h__8_1440_, v___x_1475_);
return v___x_1476_;
}
}
else
{
lean_object* v___x_1477_; lean_object* v___x_1478_; 
lean_dec(v_h__12_1444_);
lean_dec(v_h__11_1443_);
lean_dec(v_h__10_1442_);
lean_dec(v_h__9_1441_);
lean_dec(v_h__8_1440_);
v___x_1477_ = lean_box(0);
v___x_1478_ = lean_apply_1(v_h__7_1439_, v___x_1477_);
return v___x_1478_;
}
}
else
{
lean_object* v___x_1479_; lean_object* v___x_1480_; 
lean_dec(v_h__12_1444_);
lean_dec(v_h__11_1443_);
lean_dec(v_h__10_1442_);
lean_dec(v_h__9_1441_);
lean_dec(v_h__8_1440_);
lean_dec(v_h__7_1439_);
v___x_1479_ = lean_box(0);
v___x_1480_ = lean_apply_1(v_h__6_1438_, v___x_1479_);
return v___x_1480_;
}
}
else
{
lean_object* v___x_1481_; lean_object* v___x_1482_; 
lean_dec(v_h__12_1444_);
lean_dec(v_h__11_1443_);
lean_dec(v_h__10_1442_);
lean_dec(v_h__9_1441_);
lean_dec(v_h__8_1440_);
lean_dec(v_h__7_1439_);
lean_dec(v_h__6_1438_);
v___x_1481_ = lean_box(0);
v___x_1482_ = lean_apply_1(v_h__5_1437_, v___x_1481_);
return v___x_1482_;
}
}
else
{
lean_object* v___x_1483_; lean_object* v___x_1484_; 
lean_dec(v_h__12_1444_);
lean_dec(v_h__11_1443_);
lean_dec(v_h__10_1442_);
lean_dec(v_h__9_1441_);
lean_dec(v_h__8_1440_);
lean_dec(v_h__7_1439_);
lean_dec(v_h__6_1438_);
lean_dec(v_h__5_1437_);
v___x_1483_ = lean_box(0);
v___x_1484_ = lean_apply_1(v_h__4_1436_, v___x_1483_);
return v___x_1484_;
}
}
else
{
lean_object* v___x_1485_; lean_object* v___x_1486_; 
lean_dec(v_h__12_1444_);
lean_dec(v_h__11_1443_);
lean_dec(v_h__10_1442_);
lean_dec(v_h__9_1441_);
lean_dec(v_h__8_1440_);
lean_dec(v_h__7_1439_);
lean_dec(v_h__6_1438_);
lean_dec(v_h__5_1437_);
lean_dec(v_h__4_1436_);
v___x_1485_ = lean_box(0);
v___x_1486_ = lean_apply_1(v_h__3_1435_, v___x_1485_);
return v___x_1486_;
}
}
else
{
lean_object* v___x_1487_; lean_object* v___x_1488_; 
lean_dec(v_h__12_1444_);
lean_dec(v_h__11_1443_);
lean_dec(v_h__10_1442_);
lean_dec(v_h__9_1441_);
lean_dec(v_h__8_1440_);
lean_dec(v_h__7_1439_);
lean_dec(v_h__6_1438_);
lean_dec(v_h__5_1437_);
lean_dec(v_h__4_1436_);
lean_dec(v_h__3_1435_);
v___x_1487_ = lean_box(0);
v___x_1488_ = lean_apply_1(v_h__2_1434_, v___x_1487_);
return v___x_1488_;
}
}
else
{
lean_object* v___x_1489_; lean_object* v___x_1490_; 
lean_dec(v_h__12_1444_);
lean_dec(v_h__11_1443_);
lean_dec(v_h__10_1442_);
lean_dec(v_h__9_1441_);
lean_dec(v_h__8_1440_);
lean_dec(v_h__7_1439_);
lean_dec(v_h__6_1438_);
lean_dec(v_h__5_1437_);
lean_dec(v_h__4_1436_);
lean_dec(v_h__3_1435_);
lean_dec(v_h__2_1434_);
v___x_1489_ = lean_box(0);
v___x_1490_ = lean_apply_1(v_h__1_1433_, v___x_1489_);
return v___x_1490_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__11_splitter___boxed(lean_object* v_motive_1491_, lean_object* v_x_1492_, lean_object* v_h__1_1493_, lean_object* v_h__2_1494_, lean_object* v_h__3_1495_, lean_object* v_h__4_1496_, lean_object* v_h__5_1497_, lean_object* v_h__6_1498_, lean_object* v_h__7_1499_, lean_object* v_h__8_1500_, lean_object* v_h__9_1501_, lean_object* v_h__10_1502_, lean_object* v_h__11_1503_, lean_object* v_h__12_1504_){
_start:
{
uint8_t v_x_344__boxed_1505_; lean_object* v_res_1506_; 
v_x_344__boxed_1505_ = lean_unbox(v_x_1492_);
v_res_1506_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__11_splitter(v_motive_1491_, v_x_344__boxed_1505_, v_h__1_1493_, v_h__2_1494_, v_h__3_1495_, v_h__4_1496_, v_h__5_1497_, v_h__6_1498_, v_h__7_1499_, v_h__8_1500_, v_h__9_1501_, v_h__10_1502_, v_h__11_1503_, v_h__12_1504_);
return v_res_1506_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__1_splitter___redArg(lean_object* v_x_1507_, lean_object* v_h__1_1508_, lean_object* v_h__2_1509_){
_start:
{
if (lean_obj_tag(v_x_1507_) == 0)
{
lean_object* v___x_1510_; lean_object* v___x_1511_; 
lean_dec(v_h__1_1508_);
v___x_1510_ = lean_box(0);
v___x_1511_ = lean_apply_1(v_h__2_1509_, v___x_1510_);
return v___x_1511_;
}
else
{
lean_object* v_val_1512_; lean_object* v___x_1513_; 
lean_dec(v_h__2_1509_);
v_val_1512_ = lean_ctor_get(v_x_1507_, 0);
lean_inc(v_val_1512_);
lean_dec_ref_known(v_x_1507_, 1);
v___x_1513_ = lean_apply_1(v_h__1_1508_, v_val_1512_);
return v___x_1513_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__1_splitter(lean_object* v_motive_1514_, lean_object* v_x_1515_, lean_object* v_h__1_1516_, lean_object* v_h__2_1517_){
_start:
{
if (lean_obj_tag(v_x_1515_) == 0)
{
lean_object* v___x_1518_; lean_object* v___x_1519_; 
lean_dec(v_h__1_1516_);
v___x_1518_ = lean_box(0);
v___x_1519_ = lean_apply_1(v_h__2_1517_, v___x_1518_);
return v___x_1519_;
}
else
{
lean_object* v_val_1520_; lean_object* v___x_1521_; 
lean_dec(v_h__2_1517_);
v_val_1520_ = lean_ctor_get(v_x_1515_, 0);
lean_inc(v_val_1520_);
lean_dec_ref_known(v_x_1515_, 1);
v___x_1521_ = lean_apply_1(v_h__1_1516_, v_val_1520_);
return v___x_1521_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__3_splitter___redArg(lean_object* v_x_1522_, lean_object* v_h__1_1523_, lean_object* v_h__2_1524_){
_start:
{
if (lean_obj_tag(v_x_1522_) == 0)
{
lean_object* v_a_1525_; lean_object* v___x_1526_; 
lean_dec(v_h__1_1523_);
v_a_1525_ = lean_ctor_get(v_x_1522_, 0);
lean_inc(v_a_1525_);
lean_dec_ref_known(v_x_1522_, 1);
v___x_1526_ = lean_apply_1(v_h__2_1524_, v_a_1525_);
return v___x_1526_;
}
else
{
lean_object* v_a_1527_; lean_object* v_fst_1528_; lean_object* v_snd_1529_; lean_object* v___x_1530_; 
lean_dec(v_h__2_1524_);
v_a_1527_ = lean_ctor_get(v_x_1522_, 0);
lean_inc(v_a_1527_);
lean_dec_ref_known(v_x_1522_, 1);
v_fst_1528_ = lean_ctor_get(v_a_1527_, 0);
lean_inc(v_fst_1528_);
v_snd_1529_ = lean_ctor_get(v_a_1527_, 1);
lean_inc(v_snd_1529_);
lean_dec(v_a_1527_);
v___x_1530_ = lean_apply_2(v_h__1_1523_, v_fst_1528_, v_snd_1529_);
return v___x_1530_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__3_splitter(lean_object* v_motive_1531_, lean_object* v_x_1532_, lean_object* v_h__1_1533_, lean_object* v_h__2_1534_){
_start:
{
if (lean_obj_tag(v_x_1532_) == 0)
{
lean_object* v_a_1535_; lean_object* v___x_1536_; 
lean_dec(v_h__1_1533_);
v_a_1535_ = lean_ctor_get(v_x_1532_, 0);
lean_inc(v_a_1535_);
lean_dec_ref_known(v_x_1532_, 1);
v___x_1536_ = lean_apply_1(v_h__2_1534_, v_a_1535_);
return v___x_1536_;
}
else
{
lean_object* v_a_1537_; lean_object* v_fst_1538_; lean_object* v_snd_1539_; lean_object* v___x_1540_; 
lean_dec(v_h__2_1534_);
v_a_1537_ = lean_ctor_get(v_x_1532_, 0);
lean_inc(v_a_1537_);
lean_dec_ref_known(v_x_1532_, 1);
v_fst_1538_ = lean_ctor_get(v_a_1537_, 0);
lean_inc(v_fst_1538_);
v_snd_1539_ = lean_ctor_get(v_a_1537_, 1);
lean_inc(v_snd_1539_);
lean_dec(v_a_1537_);
v___x_1540_ = lean_apply_2(v_h__1_1533_, v_fst_1538_, v_snd_1539_);
return v___x_1540_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__5_splitter___redArg(lean_object* v_x_1541_, lean_object* v_h__1_1542_, lean_object* v_h__2_1543_){
_start:
{
if (lean_obj_tag(v_x_1541_) == 0)
{
lean_object* v___x_1544_; lean_object* v___x_1545_; 
lean_dec(v_h__1_1542_);
v___x_1544_ = lean_box(0);
v___x_1545_ = lean_apply_1(v_h__2_1543_, v___x_1544_);
return v___x_1545_;
}
else
{
lean_object* v_val_1546_; lean_object* v___x_1547_; 
lean_dec(v_h__2_1543_);
v_val_1546_ = lean_ctor_get(v_x_1541_, 0);
lean_inc(v_val_1546_);
lean_dec_ref_known(v_x_1541_, 1);
v___x_1547_ = lean_apply_1(v_h__1_1542_, v_val_1546_);
return v___x_1547_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__5_splitter(lean_object* v_motive_1548_, lean_object* v_x_1549_, lean_object* v_h__1_1550_, lean_object* v_h__2_1551_){
_start:
{
if (lean_obj_tag(v_x_1549_) == 0)
{
lean_object* v___x_1552_; lean_object* v___x_1553_; 
lean_dec(v_h__1_1550_);
v___x_1552_ = lean_box(0);
v___x_1553_ = lean_apply_1(v_h__2_1551_, v___x_1552_);
return v___x_1553_;
}
else
{
lean_object* v_val_1554_; lean_object* v___x_1555_; 
lean_dec(v_h__2_1551_);
v_val_1554_ = lean_ctor_get(v_x_1549_, 0);
lean_inc(v_val_1554_);
lean_dec_ref_known(v_x_1549_, 1);
v___x_1555_ = lean_apply_1(v_h__1_1550_, v_val_1554_);
return v___x_1555_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readString_match__3_splitter___redArg(lean_object* v_x_1556_, lean_object* v_h__1_1557_, lean_object* v_h__2_1558_){
_start:
{
if (lean_obj_tag(v_x_1556_) == 0)
{
lean_object* v___x_1559_; lean_object* v___x_1560_; 
lean_dec(v_h__1_1557_);
v___x_1559_ = lean_box(0);
v___x_1560_ = lean_apply_1(v_h__2_1558_, v___x_1559_);
return v___x_1560_;
}
else
{
lean_object* v_val_1561_; lean_object* v_fst_1562_; lean_object* v_snd_1563_; lean_object* v___x_1564_; 
lean_dec(v_h__2_1558_);
v_val_1561_ = lean_ctor_get(v_x_1556_, 0);
lean_inc(v_val_1561_);
lean_dec_ref_known(v_x_1556_, 1);
v_fst_1562_ = lean_ctor_get(v_val_1561_, 0);
lean_inc(v_fst_1562_);
v_snd_1563_ = lean_ctor_get(v_val_1561_, 1);
lean_inc(v_snd_1563_);
lean_dec(v_val_1561_);
v___x_1564_ = lean_apply_2(v_h__1_1557_, v_fst_1562_, v_snd_1563_);
return v___x_1564_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readString_match__3_splitter(lean_object* v_motive_1565_, lean_object* v_x_1566_, lean_object* v_h__1_1567_, lean_object* v_h__2_1568_){
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
lean_object* v_val_1571_; lean_object* v_fst_1572_; lean_object* v_snd_1573_; lean_object* v___x_1574_; 
lean_dec(v_h__2_1568_);
v_val_1571_ = lean_ctor_get(v_x_1566_, 0);
lean_inc(v_val_1571_);
lean_dec_ref_known(v_x_1566_, 1);
v_fst_1572_ = lean_ctor_get(v_val_1571_, 0);
lean_inc(v_fst_1572_);
v_snd_1573_ = lean_ctor_get(v_val_1571_, 1);
lean_inc(v_snd_1573_);
lean_dec(v_val_1571_);
v___x_1574_ = lean_apply_2(v_h__1_1567_, v_fst_1572_, v_snd_1573_);
return v___x_1574_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readRaw_match__1_splitter___redArg(lean_object* v_x_1575_, lean_object* v_h__1_1576_, lean_object* v_h__2_1577_){
_start:
{
if (lean_obj_tag(v_x_1575_) == 0)
{
lean_object* v___x_1578_; lean_object* v___x_1579_; 
lean_dec(v_h__1_1576_);
v___x_1578_ = lean_box(0);
v___x_1579_ = lean_apply_1(v_h__2_1577_, v___x_1578_);
return v___x_1579_;
}
else
{
lean_object* v_val_1580_; lean_object* v___x_1581_; 
lean_dec(v_h__2_1577_);
v_val_1580_ = lean_ctor_get(v_x_1575_, 0);
lean_inc(v_val_1580_);
lean_dec_ref_known(v_x_1575_, 1);
v___x_1581_ = lean_apply_1(v_h__1_1576_, v_val_1580_);
return v___x_1581_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readRaw_match__1_splitter(lean_object* v_motive_1582_, lean_object* v_x_1583_, lean_object* v_h__1_1584_, lean_object* v_h__2_1585_){
_start:
{
if (lean_obj_tag(v_x_1583_) == 0)
{
lean_object* v___x_1586_; lean_object* v___x_1587_; 
lean_dec(v_h__1_1584_);
v___x_1586_ = lean_box(0);
v___x_1587_ = lean_apply_1(v_h__2_1585_, v___x_1586_);
return v___x_1587_;
}
else
{
lean_object* v_val_1588_; lean_object* v___x_1589_; 
lean_dec(v_h__2_1585_);
v_val_1588_ = lean_ctor_get(v_x_1583_, 0);
lean_inc(v_val_1588_);
lean_dec_ref_known(v_x_1583_, 1);
v___x_1589_ = lean_apply_1(v_h__1_1584_, v_val_1588_);
return v___x_1589_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__7_splitter___redArg(lean_object* v_x_1590_, lean_object* v_h__1_1591_){
_start:
{
lean_object* v_fst_1592_; lean_object* v_snd_1593_; lean_object* v___x_1594_; 
v_fst_1592_ = lean_ctor_get(v_x_1590_, 0);
lean_inc(v_fst_1592_);
v_snd_1593_ = lean_ctor_get(v_x_1590_, 1);
lean_inc(v_snd_1593_);
lean_dec_ref(v_x_1590_);
v___x_1594_ = lean_apply_2(v_h__1_1591_, v_fst_1592_, v_snd_1593_);
return v___x_1594_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__7_splitter(lean_object* v_motive_1595_, lean_object* v_x_1596_, lean_object* v_h__1_1597_){
_start:
{
lean_object* v_fst_1598_; lean_object* v_snd_1599_; lean_object* v___x_1600_; 
v_fst_1598_ = lean_ctor_get(v_x_1596_, 0);
lean_inc(v_fst_1598_);
v_snd_1599_ = lean_ctor_get(v_x_1596_, 1);
lean_inc(v_snd_1599_);
lean_dec_ref(v_x_1596_);
v___x_1600_ = lean_apply_2(v_h__1_1597_, v_fst_1598_, v_snd_1599_);
return v___x_1600_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__9_splitter___redArg(lean_object* v_x_1601_, lean_object* v_h__1_1602_){
_start:
{
lean_object* v_fst_1603_; lean_object* v_snd_1604_; lean_object* v___x_1605_; 
v_fst_1603_ = lean_ctor_get(v_x_1601_, 0);
lean_inc(v_fst_1603_);
v_snd_1604_ = lean_ctor_get(v_x_1601_, 1);
lean_inc(v_snd_1604_);
lean_dec_ref(v_x_1601_);
v___x_1605_ = lean_apply_2(v_h__1_1602_, v_fst_1603_, v_snd_1604_);
return v___x_1605_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readAt_match__9_splitter(lean_object* v_motive_1606_, lean_object* v_x_1607_, lean_object* v_h__1_1608_){
_start:
{
lean_object* v_fst_1609_; lean_object* v_snd_1610_; lean_object* v___x_1611_; 
v_fst_1609_ = lean_ctor_get(v_x_1607_, 0);
lean_inc(v_fst_1609_);
v_snd_1610_ = lean_ctor_get(v_x_1607_, 1);
lean_inc(v_snd_1610_);
lean_dec_ref(v_x_1607_);
v___x_1611_ = lean_apply_2(v_h__1_1608_, v_fst_1609_, v_snd_1610_);
return v___x_1611_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readFields_match__1_splitter___redArg(lean_object* v_x_1612_, lean_object* v_x_1613_, lean_object* v_x_1614_, lean_object* v_h__1_1615_, lean_object* v_h__2_1616_){
_start:
{
lean_object* v_zero_1617_; uint8_t v_isZero_1618_; 
v_zero_1617_ = lean_unsigned_to_nat(0u);
v_isZero_1618_ = lean_nat_dec_eq(v_x_1612_, v_zero_1617_);
if (v_isZero_1618_ == 1)
{
lean_object* v___x_1619_; 
lean_dec(v_h__2_1616_);
v___x_1619_ = lean_apply_2(v_h__1_1615_, v_x_1613_, v_x_1614_);
return v___x_1619_;
}
else
{
lean_object* v_one_1620_; lean_object* v_n_1621_; lean_object* v___x_1622_; 
lean_dec(v_h__1_1615_);
v_one_1620_ = lean_unsigned_to_nat(1u);
v_n_1621_ = lean_nat_sub(v_x_1612_, v_one_1620_);
v___x_1622_ = lean_apply_3(v_h__2_1616_, v_n_1621_, v_x_1613_, v_x_1614_);
return v___x_1622_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readFields_match__1_splitter___redArg___boxed(lean_object* v_x_1623_, lean_object* v_x_1624_, lean_object* v_x_1625_, lean_object* v_h__1_1626_, lean_object* v_h__2_1627_){
_start:
{
lean_object* v_res_1628_; 
v_res_1628_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readFields_match__1_splitter___redArg(v_x_1623_, v_x_1624_, v_x_1625_, v_h__1_1626_, v_h__2_1627_);
lean_dec(v_x_1623_);
return v_res_1628_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readFields_match__1_splitter(lean_object* v_motive_1629_, lean_object* v_x_1630_, lean_object* v_x_1631_, lean_object* v_x_1632_, lean_object* v_h__1_1633_, lean_object* v_h__2_1634_){
_start:
{
lean_object* v_zero_1635_; uint8_t v_isZero_1636_; 
v_zero_1635_ = lean_unsigned_to_nat(0u);
v_isZero_1636_ = lean_nat_dec_eq(v_x_1630_, v_zero_1635_);
if (v_isZero_1636_ == 1)
{
lean_object* v___x_1637_; 
lean_dec(v_h__2_1634_);
v___x_1637_ = lean_apply_2(v_h__1_1633_, v_x_1631_, v_x_1632_);
return v___x_1637_;
}
else
{
lean_object* v_one_1638_; lean_object* v_n_1639_; lean_object* v___x_1640_; 
lean_dec(v_h__1_1633_);
v_one_1638_ = lean_unsigned_to_nat(1u);
v_n_1639_ = lean_nat_sub(v_x_1630_, v_one_1638_);
v___x_1640_ = lean_apply_3(v_h__2_1634_, v_n_1639_, v_x_1631_, v_x_1632_);
return v___x_1640_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readFields_match__1_splitter___boxed(lean_object* v_motive_1641_, lean_object* v_x_1642_, lean_object* v_x_1643_, lean_object* v_x_1644_, lean_object* v_h__1_1645_, lean_object* v_h__2_1646_){
_start:
{
lean_object* v_res_1647_; 
v_res_1647_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readFields_match__1_splitter(v_motive_1641_, v_x_1642_, v_x_1643_, v_x_1644_, v_h__1_1645_, v_h__2_1646_);
lean_dec(v_x_1642_);
return v_res_1647_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readItems_match__1_splitter___redArg(lean_object* v_x_1648_, lean_object* v_h__1_1649_){
_start:
{
lean_object* v_fst_1650_; lean_object* v_snd_1651_; lean_object* v___x_1652_; 
v_fst_1650_ = lean_ctor_get(v_x_1648_, 0);
lean_inc(v_fst_1650_);
v_snd_1651_ = lean_ctor_get(v_x_1648_, 1);
lean_inc(v_snd_1651_);
lean_dec_ref(v_x_1648_);
v___x_1652_ = lean_apply_2(v_h__1_1649_, v_fst_1650_, v_snd_1651_);
return v___x_1652_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readItems_match__1_splitter(lean_object* v_motive_1653_, lean_object* v_x_1654_, lean_object* v_h__1_1655_){
_start:
{
lean_object* v_fst_1656_; lean_object* v_snd_1657_; lean_object* v___x_1658_; 
v_fst_1656_ = lean_ctor_get(v_x_1654_, 0);
lean_inc(v_fst_1656_);
v_snd_1657_ = lean_ctor_get(v_x_1654_, 1);
lean_inc(v_snd_1657_);
lean_dec_ref(v_x_1654_);
v___x_1658_ = lean_apply_2(v_h__1_1655_, v_fst_1656_, v_snd_1657_);
return v___x_1658_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readItems_match__3_splitter___redArg(lean_object* v_x_1659_, lean_object* v_x_1660_, lean_object* v_x_1661_, lean_object* v_h__1_1662_, lean_object* v_h__2_1663_){
_start:
{
lean_object* v_zero_1664_; uint8_t v_isZero_1665_; 
v_zero_1664_ = lean_unsigned_to_nat(0u);
v_isZero_1665_ = lean_nat_dec_eq(v_x_1659_, v_zero_1664_);
if (v_isZero_1665_ == 1)
{
lean_object* v___x_1666_; 
lean_dec(v_h__2_1663_);
v___x_1666_ = lean_apply_2(v_h__1_1662_, v_x_1660_, v_x_1661_);
return v___x_1666_;
}
else
{
lean_object* v_one_1667_; lean_object* v_n_1668_; lean_object* v___x_1669_; 
lean_dec(v_h__1_1662_);
v_one_1667_ = lean_unsigned_to_nat(1u);
v_n_1668_ = lean_nat_sub(v_x_1659_, v_one_1667_);
v___x_1669_ = lean_apply_3(v_h__2_1663_, v_n_1668_, v_x_1660_, v_x_1661_);
return v___x_1669_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readItems_match__3_splitter___redArg___boxed(lean_object* v_x_1670_, lean_object* v_x_1671_, lean_object* v_x_1672_, lean_object* v_h__1_1673_, lean_object* v_h__2_1674_){
_start:
{
lean_object* v_res_1675_; 
v_res_1675_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readItems_match__3_splitter___redArg(v_x_1670_, v_x_1671_, v_x_1672_, v_h__1_1673_, v_h__2_1674_);
lean_dec(v_x_1670_);
return v_res_1675_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readItems_match__3_splitter(lean_object* v_motive_1676_, lean_object* v_x_1677_, lean_object* v_x_1678_, lean_object* v_x_1679_, lean_object* v_h__1_1680_, lean_object* v_h__2_1681_){
_start:
{
lean_object* v_zero_1682_; uint8_t v_isZero_1683_; 
v_zero_1682_ = lean_unsigned_to_nat(0u);
v_isZero_1683_ = lean_nat_dec_eq(v_x_1677_, v_zero_1682_);
if (v_isZero_1683_ == 1)
{
lean_object* v___x_1684_; 
lean_dec(v_h__2_1681_);
v___x_1684_ = lean_apply_2(v_h__1_1680_, v_x_1678_, v_x_1679_);
return v___x_1684_;
}
else
{
lean_object* v_one_1685_; lean_object* v_n_1686_; lean_object* v___x_1687_; 
lean_dec(v_h__1_1680_);
v_one_1685_ = lean_unsigned_to_nat(1u);
v_n_1686_ = lean_nat_sub(v_x_1677_, v_one_1685_);
v___x_1687_ = lean_apply_3(v_h__2_1681_, v_n_1686_, v_x_1678_, v_x_1679_);
return v___x_1687_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readItems_match__3_splitter___boxed(lean_object* v_motive_1688_, lean_object* v_x_1689_, lean_object* v_x_1690_, lean_object* v_x_1691_, lean_object* v_h__1_1692_, lean_object* v_h__2_1693_){
_start:
{
lean_object* v_res_1694_; 
v_res_1694_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readItems_match__3_splitter(v_motive_1688_, v_x_1689_, v_x_1690_, v_x_1691_, v_h__1_1692_, v_h__2_1693_);
lean_dec(v_x_1689_);
return v_res_1694_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_decodeWith___redArg___lam__0(lean_object* v_toPure_1695_, lean_object* v_fst_1696_, lean_object* v_____r_1697_){
_start:
{
lean_object* v___x_1698_; 
v___x_1698_ = lean_apply_2(v_toPure_1695_, lean_box(0), v_fst_1696_);
return v___x_1698_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_decodeWith___redArg___lam__1(lean_object* v___x_1700_, lean_object* v_inst_1701_, lean_object* v_toPure_1702_, lean_object* v_err_1703_, lean_object* v_toBind_1704_, lean_object* v_____x_1705_){
_start:
{
lean_object* v_fst_1706_; lean_object* v_snd_1707_; uint8_t v___x_1708_; 
v_fst_1706_ = lean_ctor_get(v_____x_1705_, 0);
lean_inc(v_fst_1706_);
v_snd_1707_ = lean_ctor_get(v_____x_1705_, 1);
lean_inc(v_snd_1707_);
lean_dec_ref(v_____x_1705_);
v___x_1708_ = lean_nat_dec_eq(v_snd_1707_, v___x_1700_);
lean_dec(v_snd_1707_);
if (v___x_1708_ == 0)
{
lean_object* v_throw_1709_; lean_object* v___f_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; 
v_throw_1709_ = lean_ctor_get(v_inst_1701_, 0);
lean_inc(v_throw_1709_);
lean_dec_ref(v_inst_1701_);
v___f_1710_ = lean_alloc_closure((void*)(l_Lasm_JS_Wire_decodeWith___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1710_, 0, v_toPure_1702_);
lean_closure_set(v___f_1710_, 1, v_fst_1706_);
v___x_1711_ = ((lean_object*)(l_Lasm_JS_Wire_decodeWith___redArg___lam__1___closed__0));
v___x_1712_ = lean_apply_1(v_err_1703_, v___x_1711_);
v___x_1713_ = lean_apply_2(v_throw_1709_, lean_box(0), v___x_1712_);
v___x_1714_ = lean_apply_4(v_toBind_1704_, lean_box(0), lean_box(0), v___x_1713_, v___f_1710_);
return v___x_1714_;
}
else
{
lean_object* v___x_1715_; 
lean_dec(v_toBind_1704_);
lean_dec(v_err_1703_);
lean_dec_ref(v_inst_1701_);
v___x_1715_ = lean_apply_2(v_toPure_1702_, lean_box(0), v_fst_1706_);
return v___x_1715_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_decodeWith___redArg___lam__1___boxed(lean_object* v___x_1716_, lean_object* v_inst_1717_, lean_object* v_toPure_1718_, lean_object* v_err_1719_, lean_object* v_toBind_1720_, lean_object* v_____x_1721_){
_start:
{
lean_object* v_res_1722_; 
v_res_1722_ = l_Lasm_JS_Wire_decodeWith___redArg___lam__1(v___x_1716_, v_inst_1717_, v_toPure_1718_, v_err_1719_, v_toBind_1720_, v_____x_1721_);
lean_dec(v___x_1716_);
return v_res_1722_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_decodeWith___redArg(lean_object* v_inst_1723_, lean_object* v_inst_1724_, lean_object* v_err_1725_, lean_object* v_ref_1726_, lean_object* v_b_1727_){
_start:
{
lean_object* v_toApplicative_1728_; lean_object* v_toBind_1729_; lean_object* v_toPure_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___f_1734_; lean_object* v___x_1735_; 
v_toApplicative_1728_ = lean_ctor_get(v_inst_1723_, 0);
v_toBind_1729_ = lean_ctor_get(v_inst_1723_, 1);
lean_inc_n(v_toBind_1729_, 2);
v_toPure_1730_ = lean_ctor_get(v_toApplicative_1728_, 1);
lean_inc(v_toPure_1730_);
v___x_1731_ = lean_byte_array_size(v_b_1727_);
v___x_1732_ = lean_unsigned_to_nat(0u);
lean_inc(v_err_1725_);
lean_inc_ref(v_inst_1724_);
v___x_1733_ = l_Lasm_JS_Wire_readAt___redArg(v_inst_1723_, v_inst_1724_, v_err_1725_, v_ref_1726_, v___x_1731_, v_b_1727_, v___x_1732_);
v___f_1734_ = lean_alloc_closure((void*)(l_Lasm_JS_Wire_decodeWith___redArg___lam__1___boxed), 6, 5);
lean_closure_set(v___f_1734_, 0, v___x_1731_);
lean_closure_set(v___f_1734_, 1, v_inst_1724_);
lean_closure_set(v___f_1734_, 2, v_toPure_1730_);
lean_closure_set(v___f_1734_, 3, v_err_1725_);
lean_closure_set(v___f_1734_, 4, v_toBind_1729_);
v___x_1735_ = lean_apply_4(v_toBind_1729_, lean_box(0), lean_box(0), v___x_1733_, v___f_1734_);
return v___x_1735_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_decodeWith(lean_object* v_m_1736_, lean_object* v_inst_1737_, lean_object* v_00_u03b5_1738_, lean_object* v_inst_1739_, lean_object* v_err_1740_, lean_object* v_ref_1741_, lean_object* v_b_1742_){
_start:
{
lean_object* v___x_1743_; 
v___x_1743_ = l_Lasm_JS_Wire_decodeWith___redArg(v_inst_1737_, v_inst_1739_, v_err_1740_, v_ref_1741_, v_b_1742_);
return v___x_1743_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readFields___at___00Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0_spec__1(lean_object* v_fuel_1746_, lean_object* v_b_1747_, lean_object* v_x_1748_, lean_object* v_x_1749_, lean_object* v_x_1750_){
_start:
{
lean_object* v_zero_1752_; uint8_t v_isZero_1753_; 
v_zero_1752_ = lean_unsigned_to_nat(0u);
v_isZero_1753_ = lean_nat_dec_eq(v_x_1748_, v_zero_1752_);
if (v_isZero_1753_ == 1)
{
lean_object* v___x_1754_; lean_object* v___x_1755_; 
lean_dec(v_x_1748_);
v___x_1754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1754_, 0, v_x_1750_);
lean_ctor_set(v___x_1754_, 1, v_x_1749_);
v___x_1755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1755_, 0, v___x_1754_);
return v___x_1755_;
}
else
{
lean_object* v___x_1756_; 
v___x_1756_ = l_Lasm_JS_Wire_readString(v_b_1747_, v_x_1749_);
lean_dec(v_x_1749_);
if (lean_obj_tag(v___x_1756_) == 0)
{
lean_object* v_a_1757_; lean_object* v___x_1759_; uint8_t v_isShared_1760_; uint8_t v_isSharedCheck_1765_; 
lean_dec_ref(v_x_1750_);
lean_dec(v_x_1748_);
v_a_1757_ = lean_ctor_get(v___x_1756_, 0);
v_isSharedCheck_1765_ = !lean_is_exclusive(v___x_1756_);
if (v_isSharedCheck_1765_ == 0)
{
v___x_1759_ = v___x_1756_;
v_isShared_1760_ = v_isSharedCheck_1765_;
goto v_resetjp_1758_;
}
else
{
lean_inc(v_a_1757_);
lean_dec(v___x_1756_);
v___x_1759_ = lean_box(0);
v_isShared_1760_ = v_isSharedCheck_1765_;
goto v_resetjp_1758_;
}
v_resetjp_1758_:
{
lean_object* v___x_1762_; 
if (v_isShared_1760_ == 0)
{
lean_ctor_set_tag(v___x_1759_, 18);
v___x_1762_ = v___x_1759_;
goto v_reusejp_1761_;
}
else
{
lean_object* v_reuseFailAlloc_1764_; 
v_reuseFailAlloc_1764_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1764_, 0, v_a_1757_);
v___x_1762_ = v_reuseFailAlloc_1764_;
goto v_reusejp_1761_;
}
v_reusejp_1761_:
{
lean_object* v___x_1763_; 
v___x_1763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1763_, 0, v___x_1762_);
return v___x_1763_;
}
}
}
else
{
lean_object* v_a_1766_; lean_object* v_fst_1767_; lean_object* v_snd_1768_; lean_object* v_one_1769_; lean_object* v_n_1770_; lean_object* v___x_1771_; 
v_a_1766_ = lean_ctor_get(v___x_1756_, 0);
lean_inc(v_a_1766_);
lean_dec_ref_known(v___x_1756_, 1);
v_fst_1767_ = lean_ctor_get(v_a_1766_, 0);
lean_inc(v_fst_1767_);
v_snd_1768_ = lean_ctor_get(v_a_1766_, 1);
lean_inc(v_snd_1768_);
lean_dec(v_a_1766_);
v_one_1769_ = lean_unsigned_to_nat(1u);
v_n_1770_ = lean_nat_sub(v_x_1748_, v_one_1769_);
lean_dec(v_x_1748_);
v___x_1771_ = l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0(v_fuel_1746_, v_b_1747_, v_snd_1768_);
lean_dec(v_snd_1768_);
if (lean_obj_tag(v___x_1771_) == 0)
{
lean_object* v_a_1772_; lean_object* v_fst_1773_; lean_object* v_snd_1774_; lean_object* v___x_1776_; uint8_t v_isShared_1777_; uint8_t v_isSharedCheck_1783_; 
v_a_1772_ = lean_ctor_get(v___x_1771_, 0);
lean_inc(v_a_1772_);
lean_dec_ref_known(v___x_1771_, 1);
v_fst_1773_ = lean_ctor_get(v_a_1772_, 0);
v_snd_1774_ = lean_ctor_get(v_a_1772_, 1);
v_isSharedCheck_1783_ = !lean_is_exclusive(v_a_1772_);
if (v_isSharedCheck_1783_ == 0)
{
v___x_1776_ = v_a_1772_;
v_isShared_1777_ = v_isSharedCheck_1783_;
goto v_resetjp_1775_;
}
else
{
lean_inc(v_snd_1774_);
lean_inc(v_fst_1773_);
lean_dec(v_a_1772_);
v___x_1776_ = lean_box(0);
v_isShared_1777_ = v_isSharedCheck_1783_;
goto v_resetjp_1775_;
}
v_resetjp_1775_:
{
lean_object* v___x_1779_; 
if (v_isShared_1777_ == 0)
{
lean_ctor_set(v___x_1776_, 1, v_fst_1773_);
lean_ctor_set(v___x_1776_, 0, v_fst_1767_);
v___x_1779_ = v___x_1776_;
goto v_reusejp_1778_;
}
else
{
lean_object* v_reuseFailAlloc_1782_; 
v_reuseFailAlloc_1782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1782_, 0, v_fst_1767_);
lean_ctor_set(v_reuseFailAlloc_1782_, 1, v_fst_1773_);
v___x_1779_ = v_reuseFailAlloc_1782_;
goto v_reusejp_1778_;
}
v_reusejp_1778_:
{
lean_object* v___x_1780_; 
v___x_1780_ = lean_array_push(v_x_1750_, v___x_1779_);
v_x_1748_ = v_n_1770_;
v_x_1749_ = v_snd_1774_;
v_x_1750_ = v___x_1780_;
goto _start;
}
}
}
else
{
lean_object* v_a_1784_; lean_object* v___x_1786_; uint8_t v_isShared_1787_; uint8_t v_isSharedCheck_1791_; 
lean_dec(v_n_1770_);
lean_dec(v_fst_1767_);
lean_dec_ref(v_x_1750_);
v_a_1784_ = lean_ctor_get(v___x_1771_, 0);
v_isSharedCheck_1791_ = !lean_is_exclusive(v___x_1771_);
if (v_isSharedCheck_1791_ == 0)
{
v___x_1786_ = v___x_1771_;
v_isShared_1787_ = v_isSharedCheck_1791_;
goto v_resetjp_1785_;
}
else
{
lean_inc(v_a_1784_);
lean_dec(v___x_1771_);
v___x_1786_ = lean_box(0);
v_isShared_1787_ = v_isSharedCheck_1791_;
goto v_resetjp_1785_;
}
v_resetjp_1785_:
{
lean_object* v___x_1789_; 
if (v_isShared_1787_ == 0)
{
v___x_1789_ = v___x_1786_;
goto v_reusejp_1788_;
}
else
{
lean_object* v_reuseFailAlloc_1790_; 
v_reuseFailAlloc_1790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1790_, 0, v_a_1784_);
v___x_1789_ = v_reuseFailAlloc_1790_;
goto v_reusejp_1788_;
}
v_reusejp_1788_:
{
return v___x_1789_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0(lean_object* v_x_1794_, lean_object* v_x_1795_, lean_object* v_x_1796_){
_start:
{
lean_object* v_zero_1798_; uint8_t v_isZero_1799_; 
v_zero_1798_ = lean_unsigned_to_nat(0u);
v_isZero_1799_ = lean_nat_dec_eq(v_x_1794_, v_zero_1798_);
if (v_isZero_1799_ == 1)
{
lean_object* v___x_1800_; lean_object* v___x_1801_; 
v___x_1800_ = ((lean_object*)(l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0___closed__0));
v___x_1801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1801_, 0, v___x_1800_);
return v___x_1801_;
}
else
{
lean_object* v___x_1802_; uint8_t v___x_1803_; 
v___x_1802_ = lean_byte_array_size(v_x_1795_);
v___x_1803_ = lean_nat_dec_lt(v_x_1796_, v___x_1802_);
if (v___x_1803_ == 0)
{
lean_object* v___x_1804_; lean_object* v___x_1805_; 
v___x_1804_ = ((lean_object*)(l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0___closed__0));
v___x_1805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1805_, 0, v___x_1804_);
return v___x_1805_;
}
else
{
lean_object* v___x_1806_; lean_object* v_o_x27_1807_; uint8_t v___x_1808_; uint8_t v___x_1809_; uint8_t v___x_1810_; 
v___x_1806_ = lean_unsigned_to_nat(1u);
v_o_x27_1807_ = lean_nat_add(v_x_1796_, v___x_1806_);
v___x_1808_ = lean_byte_array_fget(v_x_1795_, v_x_1796_);
v___x_1809_ = 0;
v___x_1810_ = lean_uint8_dec_eq(v___x_1808_, v___x_1809_);
if (v___x_1810_ == 0)
{
uint8_t v___x_1811_; uint8_t v___x_1812_; 
v___x_1811_ = 1;
v___x_1812_ = lean_uint8_dec_eq(v___x_1808_, v___x_1811_);
if (v___x_1812_ == 0)
{
uint8_t v___x_1813_; uint8_t v___x_1814_; 
v___x_1813_ = 2;
v___x_1814_ = lean_uint8_dec_eq(v___x_1808_, v___x_1813_);
if (v___x_1814_ == 0)
{
uint8_t v___x_1815_; uint8_t v___x_1816_; 
v___x_1815_ = 3;
v___x_1816_ = lean_uint8_dec_eq(v___x_1808_, v___x_1815_);
if (v___x_1816_ == 0)
{
uint8_t v___x_1817_; uint8_t v___x_1818_; 
v___x_1817_ = 4;
v___x_1818_ = lean_uint8_dec_eq(v___x_1808_, v___x_1817_);
if (v___x_1818_ == 0)
{
uint8_t v___x_1819_; uint8_t v___x_1820_; 
v___x_1819_ = 5;
v___x_1820_ = lean_uint8_dec_eq(v___x_1808_, v___x_1819_);
if (v___x_1820_ == 0)
{
uint8_t v___x_1821_; uint8_t v___x_1822_; 
v___x_1821_ = 6;
v___x_1822_ = lean_uint8_dec_eq(v___x_1808_, v___x_1821_);
if (v___x_1822_ == 0)
{
uint8_t v___x_1823_; uint8_t v___x_1824_; 
v___x_1823_ = 7;
v___x_1824_ = lean_uint8_dec_eq(v___x_1808_, v___x_1823_);
if (v___x_1824_ == 0)
{
lean_object* v_n_1825_; uint8_t v___x_1826_; uint8_t v___x_1827_; 
v_n_1825_ = lean_nat_sub(v_x_1794_, v___x_1806_);
v___x_1826_ = 8;
v___x_1827_ = lean_uint8_dec_eq(v___x_1808_, v___x_1826_);
if (v___x_1827_ == 0)
{
uint8_t v___x_1828_; uint8_t v___x_1829_; 
v___x_1828_ = 9;
v___x_1829_ = lean_uint8_dec_eq(v___x_1808_, v___x_1828_);
if (v___x_1829_ == 0)
{
uint8_t v___x_1830_; uint8_t v___x_1831_; 
lean_dec(v_n_1825_);
v___x_1830_ = 10;
v___x_1831_ = lean_uint8_dec_eq(v___x_1808_, v___x_1830_);
if (v___x_1831_ == 0)
{
lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; 
lean_dec(v_o_x27_1807_);
v___x_1832_ = ((lean_object*)(l_Lasm_JS_Wire_readAt___redArg___closed__0));
v___x_1833_ = lean_uint8_to_nat(v___x_1808_);
v___x_1834_ = l_Nat_reprFast(v___x_1833_);
v___x_1835_ = lean_string_append(v___x_1832_, v___x_1834_);
lean_dec_ref(v___x_1834_);
v___x_1836_ = ((lean_object*)(l_Lasm_JS_Wire_pushLength___closed__5));
v___x_1837_ = lean_string_append(v___x_1835_, v___x_1836_);
v___x_1838_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1838_, 0, v___x_1837_);
v___x_1839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1839_, 0, v___x_1838_);
return v___x_1839_;
}
else
{
lean_object* v___x_1840_; 
v___x_1840_ = l_Lasm_JS_Wire_readU32(v_x_1795_, v_o_x27_1807_);
if (lean_obj_tag(v___x_1840_) == 0)
{
lean_object* v___x_1841_; lean_object* v___x_1842_; 
lean_dec(v_o_x27_1807_);
v___x_1841_ = ((lean_object*)(l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0___closed__0));
v___x_1842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1842_, 0, v___x_1841_);
return v___x_1842_;
}
else
{
lean_object* v_val_1843_; lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1890_; 
v_val_1843_ = lean_ctor_get(v___x_1840_, 0);
v_isSharedCheck_1890_ = !lean_is_exclusive(v___x_1840_);
if (v_isSharedCheck_1890_ == 0)
{
v___x_1845_ = v___x_1840_;
v_isShared_1846_ = v_isSharedCheck_1890_;
goto v_resetjp_1844_;
}
else
{
lean_inc(v_val_1843_);
lean_dec(v___x_1840_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_1890_;
goto v_resetjp_1844_;
}
v_resetjp_1844_:
{
lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; 
v___x_1847_ = lean_unsigned_to_nat(4u);
v___x_1848_ = lean_nat_add(v_o_x27_1807_, v___x_1847_);
lean_dec(v_o_x27_1807_);
v___x_1849_ = l_Lasm_JS_Wire_readString(v_x_1795_, v___x_1848_);
lean_dec(v___x_1848_);
if (lean_obj_tag(v___x_1849_) == 0)
{
lean_object* v_a_1850_; lean_object* v___x_1852_; uint8_t v_isShared_1853_; uint8_t v_isSharedCheck_1860_; 
lean_dec(v_val_1843_);
v_a_1850_ = lean_ctor_get(v___x_1849_, 0);
v_isSharedCheck_1860_ = !lean_is_exclusive(v___x_1849_);
if (v_isSharedCheck_1860_ == 0)
{
v___x_1852_ = v___x_1849_;
v_isShared_1853_ = v_isSharedCheck_1860_;
goto v_resetjp_1851_;
}
else
{
lean_inc(v_a_1850_);
lean_dec(v___x_1849_);
v___x_1852_ = lean_box(0);
v_isShared_1853_ = v_isSharedCheck_1860_;
goto v_resetjp_1851_;
}
v_resetjp_1851_:
{
lean_object* v___x_1855_; 
if (v_isShared_1853_ == 0)
{
lean_ctor_set_tag(v___x_1852_, 18);
v___x_1855_ = v___x_1852_;
goto v_reusejp_1854_;
}
else
{
lean_object* v_reuseFailAlloc_1859_; 
v_reuseFailAlloc_1859_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1859_, 0, v_a_1850_);
v___x_1855_ = v_reuseFailAlloc_1859_;
goto v_reusejp_1854_;
}
v_reusejp_1854_:
{
lean_object* v___x_1857_; 
if (v_isShared_1846_ == 0)
{
lean_ctor_set(v___x_1845_, 0, v___x_1855_);
v___x_1857_ = v___x_1845_;
goto v_reusejp_1856_;
}
else
{
lean_object* v_reuseFailAlloc_1858_; 
v_reuseFailAlloc_1858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1858_, 0, v___x_1855_);
v___x_1857_ = v_reuseFailAlloc_1858_;
goto v_reusejp_1856_;
}
v_reusejp_1856_:
{
return v___x_1857_;
}
}
}
}
else
{
lean_object* v_a_1861_; lean_object* v_fst_1862_; lean_object* v_snd_1863_; lean_object* v___x_1865_; uint8_t v_isShared_1866_; uint8_t v_isSharedCheck_1889_; 
lean_del_object(v___x_1845_);
v_a_1861_ = lean_ctor_get(v___x_1849_, 0);
lean_inc(v_a_1861_);
lean_dec_ref_known(v___x_1849_, 1);
v_fst_1862_ = lean_ctor_get(v_a_1861_, 0);
v_snd_1863_ = lean_ctor_get(v_a_1861_, 1);
v_isSharedCheck_1889_ = !lean_is_exclusive(v_a_1861_);
if (v_isSharedCheck_1889_ == 0)
{
v___x_1865_ = v_a_1861_;
v_isShared_1866_ = v_isSharedCheck_1889_;
goto v_resetjp_1864_;
}
else
{
lean_inc(v_snd_1863_);
lean_inc(v_fst_1862_);
lean_dec(v_a_1861_);
v___x_1865_ = lean_box(0);
v_isShared_1866_ = v_isSharedCheck_1889_;
goto v_resetjp_1864_;
}
v_resetjp_1864_:
{
uint32_t v___x_1867_; lean_object* v___x_1868_; 
v___x_1867_ = lean_unbox_uint32(v_val_1843_);
lean_dec(v_val_1843_);
v___x_1868_ = lasm_js_value_of_handle(v___x_1867_);
if (lean_obj_tag(v___x_1868_) == 0)
{
lean_object* v_a_1869_; lean_object* v___x_1871_; uint8_t v_isShared_1872_; uint8_t v_isSharedCheck_1880_; 
v_a_1869_ = lean_ctor_get(v___x_1868_, 0);
v_isSharedCheck_1880_ = !lean_is_exclusive(v___x_1868_);
if (v_isSharedCheck_1880_ == 0)
{
v___x_1871_ = v___x_1868_;
v_isShared_1872_ = v_isSharedCheck_1880_;
goto v_resetjp_1870_;
}
else
{
lean_inc(v_a_1869_);
lean_dec(v___x_1868_);
v___x_1871_ = lean_box(0);
v_isShared_1872_ = v_isSharedCheck_1880_;
goto v_resetjp_1870_;
}
v_resetjp_1870_:
{
lean_object* v___x_1873_; lean_object* v___x_1875_; 
v___x_1873_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1873_, 0, v_a_1869_);
lean_ctor_set(v___x_1873_, 1, v_fst_1862_);
if (v_isShared_1866_ == 0)
{
lean_ctor_set(v___x_1865_, 0, v___x_1873_);
v___x_1875_ = v___x_1865_;
goto v_reusejp_1874_;
}
else
{
lean_object* v_reuseFailAlloc_1879_; 
v_reuseFailAlloc_1879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1879_, 0, v___x_1873_);
lean_ctor_set(v_reuseFailAlloc_1879_, 1, v_snd_1863_);
v___x_1875_ = v_reuseFailAlloc_1879_;
goto v_reusejp_1874_;
}
v_reusejp_1874_:
{
lean_object* v___x_1877_; 
if (v_isShared_1872_ == 0)
{
lean_ctor_set(v___x_1871_, 0, v___x_1875_);
v___x_1877_ = v___x_1871_;
goto v_reusejp_1876_;
}
else
{
lean_object* v_reuseFailAlloc_1878_; 
v_reuseFailAlloc_1878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1878_, 0, v___x_1875_);
v___x_1877_ = v_reuseFailAlloc_1878_;
goto v_reusejp_1876_;
}
v_reusejp_1876_:
{
return v___x_1877_;
}
}
}
}
else
{
lean_object* v_a_1881_; lean_object* v___x_1883_; uint8_t v_isShared_1884_; uint8_t v_isSharedCheck_1888_; 
lean_del_object(v___x_1865_);
lean_dec(v_snd_1863_);
lean_dec(v_fst_1862_);
v_a_1881_ = lean_ctor_get(v___x_1868_, 0);
v_isSharedCheck_1888_ = !lean_is_exclusive(v___x_1868_);
if (v_isSharedCheck_1888_ == 0)
{
v___x_1883_ = v___x_1868_;
v_isShared_1884_ = v_isSharedCheck_1888_;
goto v_resetjp_1882_;
}
else
{
lean_inc(v_a_1881_);
lean_dec(v___x_1868_);
v___x_1883_ = lean_box(0);
v_isShared_1884_ = v_isSharedCheck_1888_;
goto v_resetjp_1882_;
}
v_resetjp_1882_:
{
lean_object* v___x_1886_; 
if (v_isShared_1884_ == 0)
{
v___x_1886_ = v___x_1883_;
goto v_reusejp_1885_;
}
else
{
lean_object* v_reuseFailAlloc_1887_; 
v_reuseFailAlloc_1887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1887_, 0, v_a_1881_);
v___x_1886_ = v_reuseFailAlloc_1887_;
goto v_reusejp_1885_;
}
v_reusejp_1885_:
{
return v___x_1886_;
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
lean_object* v___x_1891_; 
v___x_1891_ = l_Lasm_JS_Wire_readU32(v_x_1795_, v_o_x27_1807_);
if (lean_obj_tag(v___x_1891_) == 0)
{
lean_object* v___x_1892_; lean_object* v___x_1893_; 
lean_dec(v_n_1825_);
lean_dec(v_o_x27_1807_);
v___x_1892_ = ((lean_object*)(l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0___closed__0));
v___x_1893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1893_, 0, v___x_1892_);
return v___x_1893_;
}
else
{
lean_object* v_val_1894_; lean_object* v___x_1896_; uint8_t v_isShared_1897_; uint8_t v_isSharedCheck_1936_; 
v_val_1894_ = lean_ctor_get(v___x_1891_, 0);
v_isSharedCheck_1936_ = !lean_is_exclusive(v___x_1891_);
if (v_isSharedCheck_1936_ == 0)
{
v___x_1896_ = v___x_1891_;
v_isShared_1897_ = v_isSharedCheck_1936_;
goto v_resetjp_1895_;
}
else
{
lean_inc(v_val_1894_);
lean_dec(v___x_1891_);
v___x_1896_ = lean_box(0);
v_isShared_1897_ = v_isSharedCheck_1936_;
goto v_resetjp_1895_;
}
v_resetjp_1895_:
{
uint32_t v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___y_1903_; lean_object* v___x_1934_; uint8_t v___x_1935_; 
v___x_1898_ = lean_unbox_uint32(v_val_1894_);
lean_dec(v_val_1894_);
v___x_1899_ = lean_uint32_to_nat(v___x_1898_);
v___x_1900_ = lean_unsigned_to_nat(4u);
v___x_1901_ = lean_nat_add(v_o_x27_1807_, v___x_1900_);
lean_dec(v_o_x27_1807_);
v___x_1934_ = lean_nat_sub(v___x_1802_, v_x_1796_);
v___x_1935_ = lean_nat_dec_le(v___x_1899_, v___x_1934_);
if (v___x_1935_ == 0)
{
v___y_1903_ = v___x_1934_;
goto v___jp_1902_;
}
else
{
lean_dec(v___x_1934_);
lean_inc(v___x_1899_);
v___y_1903_ = v___x_1899_;
goto v___jp_1902_;
}
v___jp_1902_:
{
lean_object* v___x_1904_; lean_object* v___x_1905_; 
v___x_1904_ = lean_mk_empty_array_with_capacity(v___y_1903_);
lean_dec(v___y_1903_);
v___x_1905_ = l_Lasm_JS_Wire_readFields___at___00Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0_spec__1(v_n_1825_, v_x_1795_, v___x_1899_, v___x_1901_, v___x_1904_);
lean_dec(v_n_1825_);
if (lean_obj_tag(v___x_1905_) == 0)
{
lean_object* v_a_1906_; lean_object* v___x_1908_; uint8_t v_isShared_1909_; uint8_t v_isSharedCheck_1925_; 
v_a_1906_ = lean_ctor_get(v___x_1905_, 0);
v_isSharedCheck_1925_ = !lean_is_exclusive(v___x_1905_);
if (v_isSharedCheck_1925_ == 0)
{
v___x_1908_ = v___x_1905_;
v_isShared_1909_ = v_isSharedCheck_1925_;
goto v_resetjp_1907_;
}
else
{
lean_inc(v_a_1906_);
lean_dec(v___x_1905_);
v___x_1908_ = lean_box(0);
v_isShared_1909_ = v_isSharedCheck_1925_;
goto v_resetjp_1907_;
}
v_resetjp_1907_:
{
lean_object* v_fst_1910_; lean_object* v_snd_1911_; lean_object* v___x_1913_; uint8_t v_isShared_1914_; uint8_t v_isSharedCheck_1924_; 
v_fst_1910_ = lean_ctor_get(v_a_1906_, 0);
v_snd_1911_ = lean_ctor_get(v_a_1906_, 1);
v_isSharedCheck_1924_ = !lean_is_exclusive(v_a_1906_);
if (v_isSharedCheck_1924_ == 0)
{
v___x_1913_ = v_a_1906_;
v_isShared_1914_ = v_isSharedCheck_1924_;
goto v_resetjp_1912_;
}
else
{
lean_inc(v_snd_1911_);
lean_inc(v_fst_1910_);
lean_dec(v_a_1906_);
v___x_1913_ = lean_box(0);
v_isShared_1914_ = v_isSharedCheck_1924_;
goto v_resetjp_1912_;
}
v_resetjp_1912_:
{
lean_object* v___x_1916_; 
if (v_isShared_1897_ == 0)
{
lean_ctor_set_tag(v___x_1896_, 8);
lean_ctor_set(v___x_1896_, 0, v_fst_1910_);
v___x_1916_ = v___x_1896_;
goto v_reusejp_1915_;
}
else
{
lean_object* v_reuseFailAlloc_1923_; 
v_reuseFailAlloc_1923_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1923_, 0, v_fst_1910_);
v___x_1916_ = v_reuseFailAlloc_1923_;
goto v_reusejp_1915_;
}
v_reusejp_1915_:
{
lean_object* v___x_1918_; 
if (v_isShared_1914_ == 0)
{
lean_ctor_set(v___x_1913_, 0, v___x_1916_);
v___x_1918_ = v___x_1913_;
goto v_reusejp_1917_;
}
else
{
lean_object* v_reuseFailAlloc_1922_; 
v_reuseFailAlloc_1922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1922_, 0, v___x_1916_);
lean_ctor_set(v_reuseFailAlloc_1922_, 1, v_snd_1911_);
v___x_1918_ = v_reuseFailAlloc_1922_;
goto v_reusejp_1917_;
}
v_reusejp_1917_:
{
lean_object* v___x_1920_; 
if (v_isShared_1909_ == 0)
{
lean_ctor_set(v___x_1908_, 0, v___x_1918_);
v___x_1920_ = v___x_1908_;
goto v_reusejp_1919_;
}
else
{
lean_object* v_reuseFailAlloc_1921_; 
v_reuseFailAlloc_1921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1921_, 0, v___x_1918_);
v___x_1920_ = v_reuseFailAlloc_1921_;
goto v_reusejp_1919_;
}
v_reusejp_1919_:
{
return v___x_1920_;
}
}
}
}
}
}
else
{
lean_object* v_a_1926_; lean_object* v___x_1928_; uint8_t v_isShared_1929_; uint8_t v_isSharedCheck_1933_; 
lean_del_object(v___x_1896_);
v_a_1926_ = lean_ctor_get(v___x_1905_, 0);
v_isSharedCheck_1933_ = !lean_is_exclusive(v___x_1905_);
if (v_isSharedCheck_1933_ == 0)
{
v___x_1928_ = v___x_1905_;
v_isShared_1929_ = v_isSharedCheck_1933_;
goto v_resetjp_1927_;
}
else
{
lean_inc(v_a_1926_);
lean_dec(v___x_1905_);
v___x_1928_ = lean_box(0);
v_isShared_1929_ = v_isSharedCheck_1933_;
goto v_resetjp_1927_;
}
v_resetjp_1927_:
{
lean_object* v___x_1931_; 
if (v_isShared_1929_ == 0)
{
v___x_1931_ = v___x_1928_;
goto v_reusejp_1930_;
}
else
{
lean_object* v_reuseFailAlloc_1932_; 
v_reuseFailAlloc_1932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1932_, 0, v_a_1926_);
v___x_1931_ = v_reuseFailAlloc_1932_;
goto v_reusejp_1930_;
}
v_reusejp_1930_:
{
return v___x_1931_;
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
lean_object* v___x_1937_; 
v___x_1937_ = l_Lasm_JS_Wire_readU32(v_x_1795_, v_o_x27_1807_);
if (lean_obj_tag(v___x_1937_) == 0)
{
lean_object* v___x_1938_; lean_object* v___x_1939_; 
lean_dec(v_n_1825_);
lean_dec(v_o_x27_1807_);
v___x_1938_ = ((lean_object*)(l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0___closed__0));
v___x_1939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1939_, 0, v___x_1938_);
return v___x_1939_;
}
else
{
lean_object* v_val_1940_; lean_object* v___x_1942_; uint8_t v_isShared_1943_; uint8_t v_isSharedCheck_1982_; 
v_val_1940_ = lean_ctor_get(v___x_1937_, 0);
v_isSharedCheck_1982_ = !lean_is_exclusive(v___x_1937_);
if (v_isSharedCheck_1982_ == 0)
{
v___x_1942_ = v___x_1937_;
v_isShared_1943_ = v_isSharedCheck_1982_;
goto v_resetjp_1941_;
}
else
{
lean_inc(v_val_1940_);
lean_dec(v___x_1937_);
v___x_1942_ = lean_box(0);
v_isShared_1943_ = v_isSharedCheck_1982_;
goto v_resetjp_1941_;
}
v_resetjp_1941_:
{
uint32_t v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___y_1949_; lean_object* v___x_1980_; uint8_t v___x_1981_; 
v___x_1944_ = lean_unbox_uint32(v_val_1940_);
lean_dec(v_val_1940_);
v___x_1945_ = lean_uint32_to_nat(v___x_1944_);
v___x_1946_ = lean_unsigned_to_nat(4u);
v___x_1947_ = lean_nat_add(v_o_x27_1807_, v___x_1946_);
lean_dec(v_o_x27_1807_);
v___x_1980_ = lean_nat_sub(v___x_1802_, v_x_1796_);
v___x_1981_ = lean_nat_dec_le(v___x_1945_, v___x_1980_);
if (v___x_1981_ == 0)
{
v___y_1949_ = v___x_1980_;
goto v___jp_1948_;
}
else
{
lean_dec(v___x_1980_);
lean_inc(v___x_1945_);
v___y_1949_ = v___x_1945_;
goto v___jp_1948_;
}
v___jp_1948_:
{
lean_object* v___x_1950_; lean_object* v___x_1951_; 
v___x_1950_ = lean_mk_empty_array_with_capacity(v___y_1949_);
lean_dec(v___y_1949_);
v___x_1951_ = l_Lasm_JS_Wire_readItems___at___00Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0_spec__2(v_n_1825_, v_x_1795_, v___x_1945_, v___x_1947_, v___x_1950_);
lean_dec(v_n_1825_);
if (lean_obj_tag(v___x_1951_) == 0)
{
lean_object* v_a_1952_; lean_object* v___x_1954_; uint8_t v_isShared_1955_; uint8_t v_isSharedCheck_1971_; 
v_a_1952_ = lean_ctor_get(v___x_1951_, 0);
v_isSharedCheck_1971_ = !lean_is_exclusive(v___x_1951_);
if (v_isSharedCheck_1971_ == 0)
{
v___x_1954_ = v___x_1951_;
v_isShared_1955_ = v_isSharedCheck_1971_;
goto v_resetjp_1953_;
}
else
{
lean_inc(v_a_1952_);
lean_dec(v___x_1951_);
v___x_1954_ = lean_box(0);
v_isShared_1955_ = v_isSharedCheck_1971_;
goto v_resetjp_1953_;
}
v_resetjp_1953_:
{
lean_object* v_fst_1956_; lean_object* v_snd_1957_; lean_object* v___x_1959_; uint8_t v_isShared_1960_; uint8_t v_isSharedCheck_1970_; 
v_fst_1956_ = lean_ctor_get(v_a_1952_, 0);
v_snd_1957_ = lean_ctor_get(v_a_1952_, 1);
v_isSharedCheck_1970_ = !lean_is_exclusive(v_a_1952_);
if (v_isSharedCheck_1970_ == 0)
{
v___x_1959_ = v_a_1952_;
v_isShared_1960_ = v_isSharedCheck_1970_;
goto v_resetjp_1958_;
}
else
{
lean_inc(v_snd_1957_);
lean_inc(v_fst_1956_);
lean_dec(v_a_1952_);
v___x_1959_ = lean_box(0);
v_isShared_1960_ = v_isSharedCheck_1970_;
goto v_resetjp_1958_;
}
v_resetjp_1958_:
{
lean_object* v___x_1962_; 
if (v_isShared_1943_ == 0)
{
lean_ctor_set_tag(v___x_1942_, 7);
lean_ctor_set(v___x_1942_, 0, v_fst_1956_);
v___x_1962_ = v___x_1942_;
goto v_reusejp_1961_;
}
else
{
lean_object* v_reuseFailAlloc_1969_; 
v_reuseFailAlloc_1969_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1969_, 0, v_fst_1956_);
v___x_1962_ = v_reuseFailAlloc_1969_;
goto v_reusejp_1961_;
}
v_reusejp_1961_:
{
lean_object* v___x_1964_; 
if (v_isShared_1960_ == 0)
{
lean_ctor_set(v___x_1959_, 0, v___x_1962_);
v___x_1964_ = v___x_1959_;
goto v_reusejp_1963_;
}
else
{
lean_object* v_reuseFailAlloc_1968_; 
v_reuseFailAlloc_1968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1968_, 0, v___x_1962_);
lean_ctor_set(v_reuseFailAlloc_1968_, 1, v_snd_1957_);
v___x_1964_ = v_reuseFailAlloc_1968_;
goto v_reusejp_1963_;
}
v_reusejp_1963_:
{
lean_object* v___x_1966_; 
if (v_isShared_1955_ == 0)
{
lean_ctor_set(v___x_1954_, 0, v___x_1964_);
v___x_1966_ = v___x_1954_;
goto v_reusejp_1965_;
}
else
{
lean_object* v_reuseFailAlloc_1967_; 
v_reuseFailAlloc_1967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1967_, 0, v___x_1964_);
v___x_1966_ = v_reuseFailAlloc_1967_;
goto v_reusejp_1965_;
}
v_reusejp_1965_:
{
return v___x_1966_;
}
}
}
}
}
}
else
{
lean_object* v_a_1972_; lean_object* v___x_1974_; uint8_t v_isShared_1975_; uint8_t v_isSharedCheck_1979_; 
lean_del_object(v___x_1942_);
v_a_1972_ = lean_ctor_get(v___x_1951_, 0);
v_isSharedCheck_1979_ = !lean_is_exclusive(v___x_1951_);
if (v_isSharedCheck_1979_ == 0)
{
v___x_1974_ = v___x_1951_;
v_isShared_1975_ = v_isSharedCheck_1979_;
goto v_resetjp_1973_;
}
else
{
lean_inc(v_a_1972_);
lean_dec(v___x_1951_);
v___x_1974_ = lean_box(0);
v_isShared_1975_ = v_isSharedCheck_1979_;
goto v_resetjp_1973_;
}
v_resetjp_1973_:
{
lean_object* v___x_1977_; 
if (v_isShared_1975_ == 0)
{
v___x_1977_ = v___x_1974_;
goto v_reusejp_1976_;
}
else
{
lean_object* v_reuseFailAlloc_1978_; 
v_reuseFailAlloc_1978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1978_, 0, v_a_1972_);
v___x_1977_ = v_reuseFailAlloc_1978_;
goto v_reusejp_1976_;
}
v_reusejp_1976_:
{
return v___x_1977_;
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
lean_object* v___x_1983_; 
v___x_1983_ = l_Lasm_JS_Wire_readRaw(v_x_1795_, v_o_x27_1807_);
lean_dec(v_o_x27_1807_);
if (lean_obj_tag(v___x_1983_) == 0)
{
lean_object* v___x_1984_; lean_object* v___x_1985_; 
v___x_1984_ = ((lean_object*)(l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0___closed__0));
v___x_1985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1985_, 0, v___x_1984_);
return v___x_1985_;
}
else
{
lean_object* v_val_1986_; lean_object* v___x_1988_; uint8_t v_isShared_1989_; uint8_t v_isSharedCheck_2003_; 
v_val_1986_ = lean_ctor_get(v___x_1983_, 0);
v_isSharedCheck_2003_ = !lean_is_exclusive(v___x_1983_);
if (v_isSharedCheck_2003_ == 0)
{
v___x_1988_ = v___x_1983_;
v_isShared_1989_ = v_isSharedCheck_2003_;
goto v_resetjp_1987_;
}
else
{
lean_inc(v_val_1986_);
lean_dec(v___x_1983_);
v___x_1988_ = lean_box(0);
v_isShared_1989_ = v_isSharedCheck_2003_;
goto v_resetjp_1987_;
}
v_resetjp_1987_:
{
lean_object* v_fst_1990_; lean_object* v_snd_1991_; lean_object* v___x_1993_; uint8_t v_isShared_1994_; uint8_t v_isSharedCheck_2002_; 
v_fst_1990_ = lean_ctor_get(v_val_1986_, 0);
v_snd_1991_ = lean_ctor_get(v_val_1986_, 1);
v_isSharedCheck_2002_ = !lean_is_exclusive(v_val_1986_);
if (v_isSharedCheck_2002_ == 0)
{
v___x_1993_ = v_val_1986_;
v_isShared_1994_ = v_isSharedCheck_2002_;
goto v_resetjp_1992_;
}
else
{
lean_inc(v_snd_1991_);
lean_inc(v_fst_1990_);
lean_dec(v_val_1986_);
v___x_1993_ = lean_box(0);
v_isShared_1994_ = v_isSharedCheck_2002_;
goto v_resetjp_1992_;
}
v_resetjp_1992_:
{
lean_object* v___x_1996_; 
if (v_isShared_1989_ == 0)
{
lean_ctor_set_tag(v___x_1988_, 6);
lean_ctor_set(v___x_1988_, 0, v_fst_1990_);
v___x_1996_ = v___x_1988_;
goto v_reusejp_1995_;
}
else
{
lean_object* v_reuseFailAlloc_2001_; 
v_reuseFailAlloc_2001_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2001_, 0, v_fst_1990_);
v___x_1996_ = v_reuseFailAlloc_2001_;
goto v_reusejp_1995_;
}
v_reusejp_1995_:
{
lean_object* v___x_1998_; 
if (v_isShared_1994_ == 0)
{
lean_ctor_set(v___x_1993_, 0, v___x_1996_);
v___x_1998_ = v___x_1993_;
goto v_reusejp_1997_;
}
else
{
lean_object* v_reuseFailAlloc_2000_; 
v_reuseFailAlloc_2000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2000_, 0, v___x_1996_);
lean_ctor_set(v_reuseFailAlloc_2000_, 1, v_snd_1991_);
v___x_1998_ = v_reuseFailAlloc_2000_;
goto v_reusejp_1997_;
}
v_reusejp_1997_:
{
lean_object* v___x_1999_; 
v___x_1999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1999_, 0, v___x_1998_);
return v___x_1999_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2004_; 
v___x_2004_ = l_Lasm_JS_Wire_readString(v_x_1795_, v_o_x27_1807_);
lean_dec(v_o_x27_1807_);
if (lean_obj_tag(v___x_2004_) == 0)
{
lean_object* v_a_2005_; lean_object* v___x_2007_; uint8_t v_isShared_2008_; uint8_t v_isSharedCheck_2013_; 
v_a_2005_ = lean_ctor_get(v___x_2004_, 0);
v_isSharedCheck_2013_ = !lean_is_exclusive(v___x_2004_);
if (v_isSharedCheck_2013_ == 0)
{
v___x_2007_ = v___x_2004_;
v_isShared_2008_ = v_isSharedCheck_2013_;
goto v_resetjp_2006_;
}
else
{
lean_inc(v_a_2005_);
lean_dec(v___x_2004_);
v___x_2007_ = lean_box(0);
v_isShared_2008_ = v_isSharedCheck_2013_;
goto v_resetjp_2006_;
}
v_resetjp_2006_:
{
lean_object* v___x_2010_; 
if (v_isShared_2008_ == 0)
{
lean_ctor_set_tag(v___x_2007_, 18);
v___x_2010_ = v___x_2007_;
goto v_reusejp_2009_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v_a_2005_);
v___x_2010_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2009_;
}
v_reusejp_2009_:
{
lean_object* v___x_2011_; 
v___x_2011_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2011_, 0, v___x_2010_);
return v___x_2011_;
}
}
}
else
{
lean_object* v_a_2014_; lean_object* v___x_2016_; uint8_t v_isShared_2017_; uint8_t v_isSharedCheck_2045_; 
v_a_2014_ = lean_ctor_get(v___x_2004_, 0);
v_isSharedCheck_2045_ = !lean_is_exclusive(v___x_2004_);
if (v_isSharedCheck_2045_ == 0)
{
v___x_2016_ = v___x_2004_;
v_isShared_2017_ = v_isSharedCheck_2045_;
goto v_resetjp_2015_;
}
else
{
lean_inc(v_a_2014_);
lean_dec(v___x_2004_);
v___x_2016_ = lean_box(0);
v_isShared_2017_ = v_isSharedCheck_2045_;
goto v_resetjp_2015_;
}
v_resetjp_2015_:
{
lean_object* v_fst_2018_; lean_object* v_snd_2019_; lean_object* v___x_2021_; uint8_t v_isShared_2022_; uint8_t v_isSharedCheck_2044_; 
v_fst_2018_ = lean_ctor_get(v_a_2014_, 0);
v_snd_2019_ = lean_ctor_get(v_a_2014_, 1);
v_isSharedCheck_2044_ = !lean_is_exclusive(v_a_2014_);
if (v_isSharedCheck_2044_ == 0)
{
v___x_2021_ = v_a_2014_;
v_isShared_2022_ = v_isSharedCheck_2044_;
goto v_resetjp_2020_;
}
else
{
lean_inc(v_snd_2019_);
lean_inc(v_fst_2018_);
lean_dec(v_a_2014_);
v___x_2021_ = lean_box(0);
v_isShared_2022_ = v_isSharedCheck_2044_;
goto v_resetjp_2020_;
}
v_resetjp_2020_:
{
lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; 
v___x_2023_ = lean_string_utf8_byte_size(v_fst_2018_);
v___x_2024_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2024_, 0, v_fst_2018_);
lean_ctor_set(v___x_2024_, 1, v_zero_1798_);
lean_ctor_set(v___x_2024_, 2, v___x_2023_);
v___x_2025_ = l_String_Slice_toInt_x3f(v___x_2024_);
if (lean_obj_tag(v___x_2025_) == 0)
{
lean_object* v___x_2026_; lean_object* v___x_2028_; 
lean_del_object(v___x_2021_);
lean_dec(v_snd_2019_);
v___x_2026_ = ((lean_object*)(l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0___closed__1));
if (v_isShared_2017_ == 0)
{
lean_ctor_set(v___x_2016_, 0, v___x_2026_);
v___x_2028_ = v___x_2016_;
goto v_reusejp_2027_;
}
else
{
lean_object* v_reuseFailAlloc_2029_; 
v_reuseFailAlloc_2029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2029_, 0, v___x_2026_);
v___x_2028_ = v_reuseFailAlloc_2029_;
goto v_reusejp_2027_;
}
v_reusejp_2027_:
{
return v___x_2028_;
}
}
else
{
lean_object* v_val_2030_; lean_object* v___x_2032_; uint8_t v_isShared_2033_; uint8_t v_isSharedCheck_2043_; 
v_val_2030_ = lean_ctor_get(v___x_2025_, 0);
v_isSharedCheck_2043_ = !lean_is_exclusive(v___x_2025_);
if (v_isSharedCheck_2043_ == 0)
{
v___x_2032_ = v___x_2025_;
v_isShared_2033_ = v_isSharedCheck_2043_;
goto v_resetjp_2031_;
}
else
{
lean_inc(v_val_2030_);
lean_dec(v___x_2025_);
v___x_2032_ = lean_box(0);
v_isShared_2033_ = v_isSharedCheck_2043_;
goto v_resetjp_2031_;
}
v_resetjp_2031_:
{
lean_object* v___x_2035_; 
if (v_isShared_2033_ == 0)
{
lean_ctor_set_tag(v___x_2032_, 5);
v___x_2035_ = v___x_2032_;
goto v_reusejp_2034_;
}
else
{
lean_object* v_reuseFailAlloc_2042_; 
v_reuseFailAlloc_2042_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2042_, 0, v_val_2030_);
v___x_2035_ = v_reuseFailAlloc_2042_;
goto v_reusejp_2034_;
}
v_reusejp_2034_:
{
lean_object* v___x_2037_; 
if (v_isShared_2022_ == 0)
{
lean_ctor_set(v___x_2021_, 0, v___x_2035_);
v___x_2037_ = v___x_2021_;
goto v_reusejp_2036_;
}
else
{
lean_object* v_reuseFailAlloc_2041_; 
v_reuseFailAlloc_2041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2041_, 0, v___x_2035_);
lean_ctor_set(v_reuseFailAlloc_2041_, 1, v_snd_2019_);
v___x_2037_ = v_reuseFailAlloc_2041_;
goto v_reusejp_2036_;
}
v_reusejp_2036_:
{
lean_object* v___x_2039_; 
if (v_isShared_2017_ == 0)
{
lean_ctor_set_tag(v___x_2016_, 0);
lean_ctor_set(v___x_2016_, 0, v___x_2037_);
v___x_2039_ = v___x_2016_;
goto v_reusejp_2038_;
}
else
{
lean_object* v_reuseFailAlloc_2040_; 
v_reuseFailAlloc_2040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2040_, 0, v___x_2037_);
v___x_2039_ = v_reuseFailAlloc_2040_;
goto v_reusejp_2038_;
}
v_reusejp_2038_:
{
return v___x_2039_;
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
lean_object* v___x_2046_; 
v___x_2046_ = l_Lasm_JS_Wire_readString(v_x_1795_, v_o_x27_1807_);
lean_dec(v_o_x27_1807_);
if (lean_obj_tag(v___x_2046_) == 0)
{
lean_object* v_a_2047_; lean_object* v___x_2049_; uint8_t v_isShared_2050_; uint8_t v_isSharedCheck_2055_; 
v_a_2047_ = lean_ctor_get(v___x_2046_, 0);
v_isSharedCheck_2055_ = !lean_is_exclusive(v___x_2046_);
if (v_isSharedCheck_2055_ == 0)
{
v___x_2049_ = v___x_2046_;
v_isShared_2050_ = v_isSharedCheck_2055_;
goto v_resetjp_2048_;
}
else
{
lean_inc(v_a_2047_);
lean_dec(v___x_2046_);
v___x_2049_ = lean_box(0);
v_isShared_2050_ = v_isSharedCheck_2055_;
goto v_resetjp_2048_;
}
v_resetjp_2048_:
{
lean_object* v___x_2052_; 
if (v_isShared_2050_ == 0)
{
lean_ctor_set_tag(v___x_2049_, 18);
v___x_2052_ = v___x_2049_;
goto v_reusejp_2051_;
}
else
{
lean_object* v_reuseFailAlloc_2054_; 
v_reuseFailAlloc_2054_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2054_, 0, v_a_2047_);
v___x_2052_ = v_reuseFailAlloc_2054_;
goto v_reusejp_2051_;
}
v_reusejp_2051_:
{
lean_object* v___x_2053_; 
v___x_2053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2053_, 0, v___x_2052_);
return v___x_2053_;
}
}
}
else
{
lean_object* v_a_2056_; lean_object* v___x_2058_; uint8_t v_isShared_2059_; uint8_t v_isSharedCheck_2073_; 
v_a_2056_ = lean_ctor_get(v___x_2046_, 0);
v_isSharedCheck_2073_ = !lean_is_exclusive(v___x_2046_);
if (v_isSharedCheck_2073_ == 0)
{
v___x_2058_ = v___x_2046_;
v_isShared_2059_ = v_isSharedCheck_2073_;
goto v_resetjp_2057_;
}
else
{
lean_inc(v_a_2056_);
lean_dec(v___x_2046_);
v___x_2058_ = lean_box(0);
v_isShared_2059_ = v_isSharedCheck_2073_;
goto v_resetjp_2057_;
}
v_resetjp_2057_:
{
lean_object* v_fst_2060_; lean_object* v_snd_2061_; lean_object* v___x_2063_; uint8_t v_isShared_2064_; uint8_t v_isSharedCheck_2072_; 
v_fst_2060_ = lean_ctor_get(v_a_2056_, 0);
v_snd_2061_ = lean_ctor_get(v_a_2056_, 1);
v_isSharedCheck_2072_ = !lean_is_exclusive(v_a_2056_);
if (v_isSharedCheck_2072_ == 0)
{
v___x_2063_ = v_a_2056_;
v_isShared_2064_ = v_isSharedCheck_2072_;
goto v_resetjp_2062_;
}
else
{
lean_inc(v_snd_2061_);
lean_inc(v_fst_2060_);
lean_dec(v_a_2056_);
v___x_2063_ = lean_box(0);
v_isShared_2064_ = v_isSharedCheck_2072_;
goto v_resetjp_2062_;
}
v_resetjp_2062_:
{
lean_object* v___x_2066_; 
if (v_isShared_2059_ == 0)
{
lean_ctor_set_tag(v___x_2058_, 4);
lean_ctor_set(v___x_2058_, 0, v_fst_2060_);
v___x_2066_ = v___x_2058_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2071_; 
v_reuseFailAlloc_2071_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2071_, 0, v_fst_2060_);
v___x_2066_ = v_reuseFailAlloc_2071_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
lean_object* v___x_2068_; 
if (v_isShared_2064_ == 0)
{
lean_ctor_set(v___x_2063_, 0, v___x_2066_);
v___x_2068_ = v___x_2063_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2070_; 
v_reuseFailAlloc_2070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2070_, 0, v___x_2066_);
lean_ctor_set(v_reuseFailAlloc_2070_, 1, v_snd_2061_);
v___x_2068_ = v_reuseFailAlloc_2070_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
lean_object* v___x_2069_; 
v___x_2069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2069_, 0, v___x_2068_);
return v___x_2069_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2074_; 
v___x_2074_ = l_Lasm_JS_Wire_readU64(v_x_1795_, v_o_x27_1807_);
if (lean_obj_tag(v___x_2074_) == 0)
{
lean_object* v___x_2075_; lean_object* v___x_2076_; 
lean_dec(v_o_x27_1807_);
v___x_2075_ = ((lean_object*)(l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0___closed__0));
v___x_2076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2076_, 0, v___x_2075_);
return v___x_2076_;
}
else
{
lean_object* v_val_2077_; lean_object* v___x_2079_; uint8_t v_isShared_2080_; uint8_t v_isSharedCheck_2090_; 
v_val_2077_ = lean_ctor_get(v___x_2074_, 0);
v_isSharedCheck_2090_ = !lean_is_exclusive(v___x_2074_);
if (v_isSharedCheck_2090_ == 0)
{
v___x_2079_ = v___x_2074_;
v_isShared_2080_ = v_isSharedCheck_2090_;
goto v_resetjp_2078_;
}
else
{
lean_inc(v_val_2077_);
lean_dec(v___x_2074_);
v___x_2079_ = lean_box(0);
v_isShared_2080_ = v_isSharedCheck_2090_;
goto v_resetjp_2078_;
}
v_resetjp_2078_:
{
uint64_t v___x_2081_; double v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2088_; 
v___x_2081_ = lean_unbox_uint64(v_val_2077_);
lean_dec(v_val_2077_);
v___x_2082_ = lean_float_of_bits(v___x_2081_);
v___x_2083_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2083_, 0, v___x_2082_);
v___x_2084_ = lean_unsigned_to_nat(8u);
v___x_2085_ = lean_nat_add(v_o_x27_1807_, v___x_2084_);
lean_dec(v_o_x27_1807_);
v___x_2086_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2086_, 0, v___x_2083_);
lean_ctor_set(v___x_2086_, 1, v___x_2085_);
if (v_isShared_2080_ == 0)
{
lean_ctor_set_tag(v___x_2079_, 0);
lean_ctor_set(v___x_2079_, 0, v___x_2086_);
v___x_2088_ = v___x_2079_;
goto v_reusejp_2087_;
}
else
{
lean_object* v_reuseFailAlloc_2089_; 
v_reuseFailAlloc_2089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2089_, 0, v___x_2086_);
v___x_2088_ = v_reuseFailAlloc_2089_;
goto v_reusejp_2087_;
}
v_reusejp_2087_:
{
return v___x_2088_;
}
}
}
}
}
else
{
lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; 
v___x_2091_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_2091_, 0, v___x_1803_);
v___x_2092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2092_, 0, v___x_2091_);
lean_ctor_set(v___x_2092_, 1, v_o_x27_1807_);
v___x_2093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2093_, 0, v___x_2092_);
return v___x_2093_;
}
}
else
{
lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; 
v___x_2094_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_2094_, 0, v___x_1812_);
v___x_2095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2095_, 0, v___x_2094_);
lean_ctor_set(v___x_2095_, 1, v_o_x27_1807_);
v___x_2096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2096_, 0, v___x_2095_);
return v___x_2096_;
}
}
else
{
lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; 
v___x_2097_ = lean_box(1);
v___x_2098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2098_, 0, v___x_2097_);
lean_ctor_set(v___x_2098_, 1, v_o_x27_1807_);
v___x_2099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2099_, 0, v___x_2098_);
return v___x_2099_;
}
}
else
{
lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; 
v___x_2100_ = lean_box(0);
v___x_2101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2101_, 0, v___x_2100_);
lean_ctor_set(v___x_2101_, 1, v_o_x27_1807_);
v___x_2102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2102_, 0, v___x_2101_);
return v___x_2102_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readItems___at___00Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0_spec__2(lean_object* v_fuel_2103_, lean_object* v_b_2104_, lean_object* v_x_2105_, lean_object* v_x_2106_, lean_object* v_x_2107_){
_start:
{
lean_object* v_zero_2109_; uint8_t v_isZero_2110_; 
v_zero_2109_ = lean_unsigned_to_nat(0u);
v_isZero_2110_ = lean_nat_dec_eq(v_x_2105_, v_zero_2109_);
if (v_isZero_2110_ == 1)
{
lean_object* v___x_2111_; lean_object* v___x_2112_; 
lean_dec(v_x_2105_);
v___x_2111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2111_, 0, v_x_2107_);
lean_ctor_set(v___x_2111_, 1, v_x_2106_);
v___x_2112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2112_, 0, v___x_2111_);
return v___x_2112_;
}
else
{
lean_object* v_one_2113_; lean_object* v_n_2114_; lean_object* v___x_2115_; 
v_one_2113_ = lean_unsigned_to_nat(1u);
v_n_2114_ = lean_nat_sub(v_x_2105_, v_one_2113_);
lean_dec(v_x_2105_);
v___x_2115_ = l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0(v_fuel_2103_, v_b_2104_, v_x_2106_);
lean_dec(v_x_2106_);
if (lean_obj_tag(v___x_2115_) == 0)
{
lean_object* v_a_2116_; lean_object* v_fst_2117_; lean_object* v_snd_2118_; lean_object* v___x_2119_; 
v_a_2116_ = lean_ctor_get(v___x_2115_, 0);
lean_inc(v_a_2116_);
lean_dec_ref_known(v___x_2115_, 1);
v_fst_2117_ = lean_ctor_get(v_a_2116_, 0);
lean_inc(v_fst_2117_);
v_snd_2118_ = lean_ctor_get(v_a_2116_, 1);
lean_inc(v_snd_2118_);
lean_dec(v_a_2116_);
v___x_2119_ = lean_array_push(v_x_2107_, v_fst_2117_);
v_x_2105_ = v_n_2114_;
v_x_2106_ = v_snd_2118_;
v_x_2107_ = v___x_2119_;
goto _start;
}
else
{
lean_object* v_a_2121_; lean_object* v___x_2123_; uint8_t v_isShared_2124_; uint8_t v_isSharedCheck_2128_; 
lean_dec(v_n_2114_);
lean_dec_ref(v_x_2107_);
v_a_2121_ = lean_ctor_get(v___x_2115_, 0);
v_isSharedCheck_2128_ = !lean_is_exclusive(v___x_2115_);
if (v_isSharedCheck_2128_ == 0)
{
v___x_2123_ = v___x_2115_;
v_isShared_2124_ = v_isSharedCheck_2128_;
goto v_resetjp_2122_;
}
else
{
lean_inc(v_a_2121_);
lean_dec(v___x_2115_);
v___x_2123_ = lean_box(0);
v_isShared_2124_ = v_isSharedCheck_2128_;
goto v_resetjp_2122_;
}
v_resetjp_2122_:
{
lean_object* v___x_2126_; 
if (v_isShared_2124_ == 0)
{
v___x_2126_ = v___x_2123_;
goto v_reusejp_2125_;
}
else
{
lean_object* v_reuseFailAlloc_2127_; 
v_reuseFailAlloc_2127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2127_, 0, v_a_2121_);
v___x_2126_ = v_reuseFailAlloc_2127_;
goto v_reusejp_2125_;
}
v_reusejp_2125_:
{
return v___x_2126_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readItems___at___00Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0_spec__2___boxed(lean_object* v_fuel_2129_, lean_object* v_b_2130_, lean_object* v_x_2131_, lean_object* v_x_2132_, lean_object* v_x_2133_, lean_object* v___y_2134_){
_start:
{
lean_object* v_res_2135_; 
v_res_2135_ = l_Lasm_JS_Wire_readItems___at___00Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0_spec__2(v_fuel_2129_, v_b_2130_, v_x_2131_, v_x_2132_, v_x_2133_);
lean_dec_ref(v_b_2130_);
lean_dec(v_fuel_2129_);
return v_res_2135_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readFields___at___00Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0_spec__1___boxed(lean_object* v_fuel_2136_, lean_object* v_b_2137_, lean_object* v_x_2138_, lean_object* v_x_2139_, lean_object* v_x_2140_, lean_object* v___y_2141_){
_start:
{
lean_object* v_res_2142_; 
v_res_2142_ = l_Lasm_JS_Wire_readFields___at___00Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0_spec__1(v_fuel_2136_, v_b_2137_, v_x_2138_, v_x_2139_, v_x_2140_);
lean_dec_ref(v_b_2137_);
lean_dec(v_fuel_2136_);
return v_res_2142_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0___boxed(lean_object* v_x_2143_, lean_object* v_x_2144_, lean_object* v_x_2145_, lean_object* v___y_2146_){
_start:
{
lean_object* v_res_2147_; 
v_res_2147_ = l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0(v_x_2143_, v_x_2144_, v_x_2145_);
lean_dec(v_x_2145_);
lean_dec_ref(v_x_2144_);
lean_dec(v_x_2143_);
return v_res_2147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object* v_b_2150_){
_start:
{
lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; 
v___x_2152_ = lean_byte_array_size(v_b_2150_);
v___x_2153_ = lean_unsigned_to_nat(0u);
v___x_2154_ = l_Lasm_JS_Wire_readAt___at___00Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0_spec__0(v___x_2152_, v_b_2150_, v___x_2153_);
if (lean_obj_tag(v___x_2154_) == 0)
{
lean_object* v_a_2155_; lean_object* v___x_2157_; uint8_t v_isShared_2158_; uint8_t v_isSharedCheck_2169_; 
v_a_2155_ = lean_ctor_get(v___x_2154_, 0);
v_isSharedCheck_2169_ = !lean_is_exclusive(v___x_2154_);
if (v_isSharedCheck_2169_ == 0)
{
v___x_2157_ = v___x_2154_;
v_isShared_2158_ = v_isSharedCheck_2169_;
goto v_resetjp_2156_;
}
else
{
lean_inc(v_a_2155_);
lean_dec(v___x_2154_);
v___x_2157_ = lean_box(0);
v_isShared_2158_ = v_isSharedCheck_2169_;
goto v_resetjp_2156_;
}
v_resetjp_2156_:
{
lean_object* v_fst_2159_; lean_object* v_snd_2160_; uint8_t v___x_2161_; 
v_fst_2159_ = lean_ctor_get(v_a_2155_, 0);
lean_inc(v_fst_2159_);
v_snd_2160_ = lean_ctor_get(v_a_2155_, 1);
lean_inc(v_snd_2160_);
lean_dec(v_a_2155_);
v___x_2161_ = lean_nat_dec_eq(v_snd_2160_, v___x_2152_);
lean_dec(v_snd_2160_);
if (v___x_2161_ == 0)
{
lean_object* v___x_2162_; lean_object* v___x_2164_; 
lean_dec(v_fst_2159_);
v___x_2162_ = ((lean_object*)(l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0___closed__0));
if (v_isShared_2158_ == 0)
{
lean_ctor_set_tag(v___x_2157_, 1);
lean_ctor_set(v___x_2157_, 0, v___x_2162_);
v___x_2164_ = v___x_2157_;
goto v_reusejp_2163_;
}
else
{
lean_object* v_reuseFailAlloc_2165_; 
v_reuseFailAlloc_2165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2165_, 0, v___x_2162_);
v___x_2164_ = v_reuseFailAlloc_2165_;
goto v_reusejp_2163_;
}
v_reusejp_2163_:
{
return v___x_2164_;
}
}
else
{
lean_object* v___x_2167_; 
if (v_isShared_2158_ == 0)
{
lean_ctor_set(v___x_2157_, 0, v_fst_2159_);
v___x_2167_ = v___x_2157_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v_fst_2159_);
v___x_2167_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
return v___x_2167_;
}
}
}
}
else
{
lean_object* v_a_2170_; lean_object* v___x_2172_; uint8_t v_isShared_2173_; uint8_t v_isSharedCheck_2177_; 
v_a_2170_ = lean_ctor_get(v___x_2154_, 0);
v_isSharedCheck_2177_ = !lean_is_exclusive(v___x_2154_);
if (v_isSharedCheck_2177_ == 0)
{
v___x_2172_ = v___x_2154_;
v_isShared_2173_ = v_isSharedCheck_2177_;
goto v_resetjp_2171_;
}
else
{
lean_inc(v_a_2170_);
lean_dec(v___x_2154_);
v___x_2172_ = lean_box(0);
v_isShared_2173_ = v_isSharedCheck_2177_;
goto v_resetjp_2171_;
}
v_resetjp_2171_:
{
lean_object* v___x_2175_; 
if (v_isShared_2173_ == 0)
{
v___x_2175_ = v___x_2172_;
goto v_reusejp_2174_;
}
else
{
lean_object* v_reuseFailAlloc_2176_; 
v_reuseFailAlloc_2176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2176_, 0, v_a_2170_);
v___x_2175_ = v_reuseFailAlloc_2176_;
goto v_reusejp_2174_;
}
v_reusejp_2174_:
{
return v___x_2175_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0___boxed(lean_object* v_b_2178_, lean_object* v___y_2179_){
_start:
{
lean_object* v_res_2180_; 
v_res_2180_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_b_2178_);
lean_dec_ref(v_b_2178_);
return v_res_2180_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_decode(lean_object* v_b_2181_){
_start:
{
lean_object* v___x_2183_; 
v___x_2183_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_b_2181_);
return v___x_2183_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_decode___boxed(lean_object* v_b_2184_, lean_object* v_a_2185_){
_start:
{
lean_object* v_res_2186_; 
v_res_2186_ = l_Lasm_JS_Wire_decode(v_b_2184_);
lean_dec_ref(v_b_2184_);
return v_res_2186_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_encodeIO(lean_object* v_d_2187_){
_start:
{
lean_object* v___x_2189_; 
v___x_2189_ = l_Lasm_JS_Wire_encode(v_d_2187_);
if (lean_obj_tag(v___x_2189_) == 0)
{
lean_object* v_a_2190_; lean_object* v___x_2192_; uint8_t v_isShared_2193_; uint8_t v_isSharedCheck_2198_; 
v_a_2190_ = lean_ctor_get(v___x_2189_, 0);
v_isSharedCheck_2198_ = !lean_is_exclusive(v___x_2189_);
if (v_isSharedCheck_2198_ == 0)
{
v___x_2192_ = v___x_2189_;
v_isShared_2193_ = v_isSharedCheck_2198_;
goto v_resetjp_2191_;
}
else
{
lean_inc(v_a_2190_);
lean_dec(v___x_2189_);
v___x_2192_ = lean_box(0);
v_isShared_2193_ = v_isSharedCheck_2198_;
goto v_resetjp_2191_;
}
v_resetjp_2191_:
{
lean_object* v___x_2195_; 
if (v_isShared_2193_ == 0)
{
lean_ctor_set_tag(v___x_2192_, 18);
v___x_2195_ = v___x_2192_;
goto v_reusejp_2194_;
}
else
{
lean_object* v_reuseFailAlloc_2197_; 
v_reuseFailAlloc_2197_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2197_, 0, v_a_2190_);
v___x_2195_ = v_reuseFailAlloc_2197_;
goto v_reusejp_2194_;
}
v_reusejp_2194_:
{
lean_object* v___x_2196_; 
v___x_2196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2196_, 0, v___x_2195_);
return v___x_2196_;
}
}
}
else
{
lean_object* v_a_2199_; lean_object* v___x_2201_; uint8_t v_isShared_2202_; uint8_t v_isSharedCheck_2206_; 
v_a_2199_ = lean_ctor_get(v___x_2189_, 0);
v_isSharedCheck_2206_ = !lean_is_exclusive(v___x_2189_);
if (v_isSharedCheck_2206_ == 0)
{
v___x_2201_ = v___x_2189_;
v_isShared_2202_ = v_isSharedCheck_2206_;
goto v_resetjp_2200_;
}
else
{
lean_inc(v_a_2199_);
lean_dec(v___x_2189_);
v___x_2201_ = lean_box(0);
v_isShared_2202_ = v_isSharedCheck_2206_;
goto v_resetjp_2200_;
}
v_resetjp_2200_:
{
lean_object* v___x_2204_; 
if (v_isShared_2202_ == 0)
{
lean_ctor_set_tag(v___x_2201_, 0);
v___x_2204_ = v___x_2201_;
goto v_reusejp_2203_;
}
else
{
lean_object* v_reuseFailAlloc_2205_; 
v_reuseFailAlloc_2205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2205_, 0, v_a_2199_);
v___x_2204_ = v_reuseFailAlloc_2205_;
goto v_reusejp_2203_;
}
v_reusejp_2203_:
{
return v___x_2204_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_encodeIO___boxed(lean_object* v_d_2207_, lean_object* v_a_2208_){
_start:
{
lean_object* v_res_2209_; 
v_res_2209_ = l_Lasm_JS_Wire_encodeIO(v_d_2207_);
return v_res_2209_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallKeep___boxed(lean_object* v_op_2216_, lean_object* v_handle_2217_, lean_object* v_arg_2218_, lean_object* v_input_2219_, lean_object* v_keep_2220_, lean_object* v_a_00___x40___internal___hyg_2221_){
_start:
{
uint32_t v_op_boxed_2222_; uint32_t v_handle_boxed_2223_; uint64_t v_arg_boxed_2224_; lean_object* v_res_2225_; 
v_op_boxed_2222_ = lean_unbox_uint32(v_op_2216_);
lean_dec(v_op_2216_);
v_handle_boxed_2223_ = lean_unbox_uint32(v_handle_2217_);
lean_dec(v_handle_2217_);
v_arg_boxed_2224_ = lean_unbox_uint64(v_arg_2218_);
lean_dec_ref(v_arg_2218_);
v_res_2225_ = lasm_js_call(v_op_boxed_2222_, v_handle_boxed_2223_, v_arg_boxed_2224_, v_input_2219_, v_keep_2220_);
lean_dec(v_keep_2220_);
lean_dec_ref(v_input_2219_);
return v_res_2225_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(uint32_t v_op_2226_, uint32_t v_handle_2227_, uint64_t v_arg_2228_, lean_object* v_input_2229_){
_start:
{
lean_object* v___x_2231_; lean_object* v___x_2232_; 
v___x_2231_ = lean_box(0);
v___x_2232_ = lasm_js_call(v_op_2226_, v_handle_2227_, v_arg_2228_, v_input_2229_, v___x_2231_);
return v___x_2232_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCall___boxed(lean_object* v_op_2233_, lean_object* v_handle_2234_, lean_object* v_arg_2235_, lean_object* v_input_2236_, lean_object* v_a_2237_){
_start:
{
uint32_t v_op_boxed_2238_; uint32_t v_handle_boxed_2239_; uint64_t v_arg_boxed_2240_; lean_object* v_res_2241_; 
v_op_boxed_2238_ = lean_unbox_uint32(v_op_2233_);
lean_dec(v_op_2233_);
v_handle_boxed_2239_ = lean_unbox_uint32(v_handle_2234_);
lean_dec(v_handle_2234_);
v_arg_boxed_2240_ = lean_unbox_uint64(v_arg_2235_);
lean_dec_ref(v_arg_2235_);
v_res_2241_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v_op_boxed_2238_, v_handle_boxed_2239_, v_arg_boxed_2240_, v_input_2236_);
lean_dec_ref(v_input_2236_);
return v_res_2241_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t v_op_2242_, uint64_t v_arg_2243_, lean_object* v_payload_2244_, uint32_t v_handle_2245_){
_start:
{
lean_object* v___x_2247_; 
lean_inc(v_payload_2244_);
v___x_2247_ = l_Lasm_JS_Wire_encodeIO(v_payload_2244_);
if (lean_obj_tag(v___x_2247_) == 0)
{
lean_object* v_a_2248_; lean_object* v___x_2249_; 
v_a_2248_ = lean_ctor_get(v___x_2247_, 0);
lean_inc(v_a_2248_);
lean_dec_ref_known(v___x_2247_, 1);
v___x_2249_ = lasm_js_call(v_op_2242_, v_handle_2245_, v_arg_2243_, v_a_2248_, v_payload_2244_);
lean_dec(v_payload_2244_);
lean_dec(v_a_2248_);
return v___x_2249_;
}
else
{
lean_dec(v_payload_2244_);
return v___x_2247_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith___boxed(lean_object* v_op_2250_, lean_object* v_arg_2251_, lean_object* v_payload_2252_, lean_object* v_handle_2253_, lean_object* v_a_2254_){
_start:
{
uint32_t v_op_boxed_2255_; uint64_t v_arg_boxed_2256_; uint32_t v_handle_boxed_2257_; lean_object* v_res_2258_; 
v_op_boxed_2255_ = lean_unbox_uint32(v_op_2250_);
lean_dec(v_op_2250_);
v_arg_boxed_2256_ = lean_unbox_uint64(v_arg_2251_);
lean_dec_ref(v_arg_2251_);
v_handle_boxed_2257_ = lean_unbox_uint32(v_handle_2253_);
lean_dec(v_handle_2253_);
v_res_2258_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v_op_boxed_2255_, v_arg_boxed_2256_, v_payload_2252_, v_handle_boxed_2257_);
return v_res_2258_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallInto___boxed(lean_object* v_p_2266_, lean_object* v_op_2267_, lean_object* v_handle_2268_, lean_object* v_arg_2269_, lean_object* v_input_2270_, lean_object* v_keep_2271_, lean_object* v_a_00___x40___internal___hyg_2272_){
_start:
{
uint32_t v_op_boxed_2273_; uint32_t v_handle_boxed_2274_; uint64_t v_arg_boxed_2275_; lean_object* v_res_2276_; 
v_op_boxed_2273_ = lean_unbox_uint32(v_op_2267_);
lean_dec(v_op_2267_);
v_handle_boxed_2274_ = lean_unbox_uint32(v_handle_2268_);
lean_dec(v_handle_2268_);
v_arg_boxed_2275_ = lean_unbox_uint64(v_arg_2269_);
lean_dec_ref(v_arg_2269_);
v_res_2276_ = lasm_js_call_into(v_p_2266_, v_op_boxed_2273_, v_handle_boxed_2274_, v_arg_boxed_2275_, v_input_2270_, v_keep_2271_);
lean_dec(v_keep_2271_);
lean_dec_ref(v_input_2270_);
lean_dec(v_p_2266_);
return v_res_2276_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_ctorIdx___impl(uint8_t v_x_2277_){
_start:
{
lean_object* v___x_2278_; lean_object* v___x_2279_; 
v___x_2278_ = lean_box(v_x_2277_);
v___x_2279_ = lean_obj_tag_nat(v___x_2278_);
lean_dec(v___x_2278_);
return v___x_2279_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_ctorIdx___impl___boxed(lean_object* v_x_2280_){
_start:
{
uint8_t v_x_4__boxed_2281_; lean_object* v_res_2282_; 
v_x_4__boxed_2281_ = lean_unbox(v_x_2280_);
v_res_2282_ = l_Lasm_JS_Mode_ctorIdx___impl(v_x_4__boxed_2281_);
return v_res_2282_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_ctorElim___redArg(lean_object* v_k_2283_){
_start:
{
lean_inc(v_k_2283_);
return v_k_2283_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_ctorElim___redArg___boxed(lean_object* v_k_2284_){
_start:
{
lean_object* v_res_2285_; 
v_res_2285_ = l_Lasm_JS_Mode_ctorElim___redArg(v_k_2284_);
lean_dec(v_k_2284_);
return v_res_2285_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_ctorElim(lean_object* v_motive_2286_, lean_object* v_ctorIdx_2287_, uint8_t v_t_2288_, lean_object* v_h_2289_, lean_object* v_k_2290_){
_start:
{
lean_inc(v_k_2290_);
return v_k_2290_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_ctorElim___boxed(lean_object* v_motive_2291_, lean_object* v_ctorIdx_2292_, lean_object* v_t_2293_, lean_object* v_h_2294_, lean_object* v_k_2295_){
_start:
{
uint8_t v_t_boxed_2296_; lean_object* v_res_2297_; 
v_t_boxed_2296_ = lean_unbox(v_t_2293_);
v_res_2297_ = l_Lasm_JS_Mode_ctorElim(v_motive_2291_, v_ctorIdx_2292_, v_t_boxed_2296_, v_h_2294_, v_k_2295_);
lean_dec(v_k_2295_);
lean_dec(v_ctorIdx_2292_);
return v_res_2297_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_data_elim___redArg(lean_object* v_data_2298_){
_start:
{
lean_inc(v_data_2298_);
return v_data_2298_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_data_elim___redArg___boxed(lean_object* v_data_2299_){
_start:
{
lean_object* v_res_2300_; 
v_res_2300_ = l_Lasm_JS_Mode_data_elim___redArg(v_data_2299_);
lean_dec(v_data_2299_);
return v_res_2300_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_data_elim(lean_object* v_motive_2301_, uint8_t v_t_2302_, lean_object* v_h_2303_, lean_object* v_data_2304_){
_start:
{
lean_inc(v_data_2304_);
return v_data_2304_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_data_elim___boxed(lean_object* v_motive_2305_, lean_object* v_t_2306_, lean_object* v_h_2307_, lean_object* v_data_2308_){
_start:
{
uint8_t v_t_boxed_2309_; lean_object* v_res_2310_; 
v_t_boxed_2309_ = lean_unbox(v_t_2306_);
v_res_2310_ = l_Lasm_JS_Mode_data_elim(v_motive_2305_, v_t_boxed_2309_, v_h_2307_, v_data_2308_);
lean_dec(v_data_2308_);
return v_res_2310_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_reference_elim___redArg(lean_object* v_reference_2311_){
_start:
{
lean_inc(v_reference_2311_);
return v_reference_2311_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_reference_elim___redArg___boxed(lean_object* v_reference_2312_){
_start:
{
lean_object* v_res_2313_; 
v_res_2313_ = l_Lasm_JS_Mode_reference_elim___redArg(v_reference_2312_);
lean_dec(v_reference_2312_);
return v_res_2313_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_reference_elim(lean_object* v_motive_2314_, uint8_t v_t_2315_, lean_object* v_h_2316_, lean_object* v_reference_2317_){
_start:
{
lean_inc(v_reference_2317_);
return v_reference_2317_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_reference_elim___boxed(lean_object* v_motive_2318_, lean_object* v_t_2319_, lean_object* v_h_2320_, lean_object* v_reference_2321_){
_start:
{
uint8_t v_t_boxed_2322_; lean_object* v_res_2323_; 
v_t_boxed_2322_ = lean_unbox(v_t_2319_);
v_res_2323_ = l_Lasm_JS_Mode_reference_elim(v_motive_2318_, v_t_boxed_2322_, v_h_2320_, v_reference_2321_);
lean_dec(v_reference_2321_);
return v_res_2323_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_instBEqMode_beq(uint8_t v_x_2324_, uint8_t v_y_2325_){
_start:
{
lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; uint8_t v___x_2330_; 
v___x_2326_ = lean_box(v_x_2324_);
v___x_2327_ = lean_obj_tag_nat(v___x_2326_);
lean_dec(v___x_2326_);
v___x_2328_ = lean_box(v_y_2325_);
v___x_2329_ = lean_obj_tag_nat(v___x_2328_);
lean_dec(v___x_2328_);
v___x_2330_ = lean_nat_dec_eq(v___x_2327_, v___x_2329_);
return v___x_2330_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBEqMode_beq___boxed(lean_object* v_x_2331_, lean_object* v_y_2332_){
_start:
{
uint8_t v_x_24__boxed_2333_; uint8_t v_y_25__boxed_2334_; uint8_t v_res_2335_; lean_object* v_r_2336_; 
v_x_24__boxed_2333_ = lean_unbox(v_x_2331_);
v_y_25__boxed_2334_ = lean_unbox(v_y_2332_);
v_res_2335_ = l_Lasm_JS_instBEqMode_beq(v_x_24__boxed_2333_, v_y_25__boxed_2334_);
v_r_2336_ = lean_box(v_res_2335_);
return v_r_2336_;
}
}
static uint8_t _init_l_Lasm_JS_instInhabitedMode_default(void){
_start:
{
uint8_t v___x_2339_; 
v___x_2339_ = 0;
return v___x_2339_;
}
}
static uint8_t _init_l_Lasm_JS_instInhabitedMode(void){
_start:
{
uint8_t v___x_2340_; 
v___x_2340_ = 0;
return v___x_2340_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___redArg___closed__7(void){
_start:
{
lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; 
v___x_2348_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__6));
v___x_2349_ = lean_unsigned_to_nat(46u);
v___x_2350_ = lean_unsigned_to_nat(193u);
v___x_2351_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__5));
v___x_2352_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__4));
v___x_2353_ = l_mkPanicMessageWithDecl(v___x_2352_, v___x_2351_, v___x_2350_, v___x_2349_, v___x_2348_);
return v___x_2353_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___redArg(lean_object* v_inst_2355_, lean_object* v_context_2356_, lean_object* v_d_2357_){
_start:
{
lean_object* v___y_2360_; lean_object* v___y_2361_; lean_object* v_fromJS_2365_; lean_object* v_typeName_2366_; lean_object* v___x_2367_; 
v_fromJS_2365_ = lean_ctor_get(v_inst_2355_, 0);
lean_inc_ref(v_fromJS_2365_);
v_typeName_2366_ = lean_ctor_get(v_inst_2355_, 1);
lean_inc_ref(v_typeName_2366_);
lean_dec_ref(v_inst_2355_);
lean_inc(v_d_2357_);
v___x_2367_ = lean_apply_1(v_fromJS_2365_, v_d_2357_);
if (lean_obj_tag(v___x_2367_) == 0)
{
lean_object* v_a_2368_; lean_object* v_received_2370_; 
v_a_2368_ = lean_ctor_get(v___x_2367_, 0);
lean_inc(v_a_2368_);
lean_dec_ref_known(v___x_2367_, 1);
if (lean_obj_tag(v_d_2357_) == 9)
{
lean_object* v_value_2389_; lean_object* v_description_2390_; lean_object* v___x_2391_; uint8_t v___x_2392_; 
v_value_2389_ = lean_ctor_get(v_d_2357_, 0);
v_description_2390_ = lean_ctor_get(v_d_2357_, 1);
v___x_2391_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___x_2392_ = lean_string_dec_eq(v_description_2390_, v___x_2391_);
if (v___x_2392_ == 0)
{
goto v___jp_2387_;
}
else
{
lean_object* v___x_2394_; uint8_t v_isShared_2395_; uint8_t v_isSharedCheck_2409_; 
lean_inc(v_value_2389_);
v_isSharedCheck_2409_ = !lean_is_exclusive(v_d_2357_);
if (v_isSharedCheck_2409_ == 0)
{
lean_object* v_unused_2410_; lean_object* v_unused_2411_; 
v_unused_2410_ = lean_ctor_get(v_d_2357_, 1);
lean_dec(v_unused_2410_);
v_unused_2411_ = lean_ctor_get(v_d_2357_, 0);
lean_dec(v_unused_2411_);
v___x_2394_ = v_d_2357_;
v_isShared_2395_ = v_isSharedCheck_2409_;
goto v_resetjp_2393_;
}
else
{
lean_dec(v_d_2357_);
v___x_2394_ = lean_box(0);
v_isShared_2395_ = v_isSharedCheck_2409_;
goto v_resetjp_2393_;
}
v_resetjp_2393_:
{
uint32_t v___x_2396_; uint64_t v___x_2397_; lean_object* v___x_2399_; 
v___x_2396_ = 206;
v___x_2397_ = 0ULL;
lean_inc(v_value_2389_);
if (v_isShared_2395_ == 0)
{
lean_ctor_set(v___x_2394_, 1, v___x_2391_);
v___x_2399_ = v___x_2394_;
goto v_reusejp_2398_;
}
else
{
lean_object* v_reuseFailAlloc_2408_; 
v_reuseFailAlloc_2408_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2408_, 0, v_value_2389_);
lean_ctor_set(v_reuseFailAlloc_2408_, 1, v___x_2391_);
v___x_2399_ = v_reuseFailAlloc_2408_;
goto v_reusejp_2398_;
}
v_reusejp_2398_:
{
uint32_t v___x_2400_; lean_object* v___x_2401_; 
v___x_2400_ = lasm_js_value_handle(v_value_2389_);
lean_dec(v_value_2389_);
v___x_2401_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2396_, v___x_2397_, v___x_2399_, v___x_2400_);
if (lean_obj_tag(v___x_2401_) == 0)
{
lean_object* v_a_2402_; uint8_t v___x_2403_; 
v_a_2402_ = lean_ctor_get(v___x_2401_, 0);
lean_inc(v_a_2402_);
lean_dec_ref_known(v___x_2401_, 1);
v___x_2403_ = lean_string_validate_utf8(v_a_2402_);
if (v___x_2403_ == 0)
{
lean_object* v___x_2404_; lean_object* v___x_2405_; 
lean_dec(v_a_2402_);
v___x_2404_ = lean_obj_once(&l_Lasm_JS_decodeAs___redArg___closed__7, &l_Lasm_JS_decodeAs___redArg___closed__7_once, _init_l_Lasm_JS_decodeAs___redArg___closed__7);
v___x_2405_ = l_panic___redArg(v___x_2391_, v___x_2404_);
v_received_2370_ = v___x_2405_;
goto v___jp_2369_;
}
else
{
lean_object* v___x_2406_; 
v___x_2406_ = lean_string_from_utf8_unchecked(v_a_2402_);
v_received_2370_ = v___x_2406_;
goto v___jp_2369_;
}
}
else
{
lean_object* v___x_2407_; 
lean_dec_ref_known(v___x_2401_, 1);
v___x_2407_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__8));
v_received_2370_ = v___x_2407_;
goto v___jp_2369_;
}
}
}
}
}
else
{
goto v___jp_2387_;
}
v___jp_2369_:
{
lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; uint8_t v___x_2381_; 
v___x_2371_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__0));
v___x_2372_ = lean_string_append(v___x_2371_, v_context_2356_);
v___x_2373_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__1));
v___x_2374_ = lean_string_append(v___x_2372_, v___x_2373_);
v___x_2375_ = lean_string_append(v___x_2374_, v_typeName_2366_);
lean_dec_ref(v_typeName_2366_);
v___x_2376_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__2));
v___x_2377_ = lean_string_append(v___x_2375_, v___x_2376_);
v___x_2378_ = lean_string_append(v___x_2377_, v_received_2370_);
lean_dec_ref(v_received_2370_);
v___x_2379_ = lean_string_utf8_byte_size(v_a_2368_);
v___x_2380_ = lean_unsigned_to_nat(0u);
v___x_2381_ = lean_nat_dec_eq(v___x_2379_, v___x_2380_);
if (v___x_2381_ == 0)
{
lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; 
v___x_2382_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__3));
v___x_2383_ = lean_string_append(v___x_2382_, v_a_2368_);
lean_dec(v_a_2368_);
v___x_2384_ = ((lean_object*)(l_Lasm_JS_Wire_pushLength___closed__5));
v___x_2385_ = lean_string_append(v___x_2383_, v___x_2384_);
v___y_2360_ = v___x_2378_;
v___y_2361_ = v___x_2385_;
goto v___jp_2359_;
}
else
{
lean_object* v___x_2386_; 
lean_dec(v_a_2368_);
v___x_2386_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___y_2360_ = v___x_2378_;
v___y_2361_ = v___x_2386_;
goto v___jp_2359_;
}
}
v___jp_2387_:
{
lean_object* v___x_2388_; 
v___x_2388_ = l_Lasm_JS_Data_describe(v_d_2357_);
v_received_2370_ = v___x_2388_;
goto v___jp_2369_;
}
}
else
{
lean_object* v_a_2412_; lean_object* v___x_2414_; uint8_t v_isShared_2415_; uint8_t v_isSharedCheck_2419_; 
lean_dec_ref(v_typeName_2366_);
lean_dec(v_d_2357_);
v_a_2412_ = lean_ctor_get(v___x_2367_, 0);
v_isSharedCheck_2419_ = !lean_is_exclusive(v___x_2367_);
if (v_isSharedCheck_2419_ == 0)
{
v___x_2414_ = v___x_2367_;
v_isShared_2415_ = v_isSharedCheck_2419_;
goto v_resetjp_2413_;
}
else
{
lean_inc(v_a_2412_);
lean_dec(v___x_2367_);
v___x_2414_ = lean_box(0);
v_isShared_2415_ = v_isSharedCheck_2419_;
goto v_resetjp_2413_;
}
v_resetjp_2413_:
{
lean_object* v___x_2417_; 
if (v_isShared_2415_ == 0)
{
lean_ctor_set_tag(v___x_2414_, 0);
v___x_2417_ = v___x_2414_;
goto v_reusejp_2416_;
}
else
{
lean_object* v_reuseFailAlloc_2418_; 
v_reuseFailAlloc_2418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2418_, 0, v_a_2412_);
v___x_2417_ = v_reuseFailAlloc_2418_;
goto v_reusejp_2416_;
}
v_reusejp_2416_:
{
return v___x_2417_;
}
}
}
v___jp_2359_:
{
lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; 
v___x_2362_ = lean_string_append(v___y_2360_, v___y_2361_);
lean_dec_ref(v___y_2361_);
v___x_2363_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2363_, 0, v___x_2362_);
v___x_2364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2364_, 0, v___x_2363_);
return v___x_2364_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___redArg___boxed(lean_object* v_inst_2420_, lean_object* v_context_2421_, lean_object* v_d_2422_, lean_object* v_a_2423_){
_start:
{
lean_object* v_res_2424_; 
v_res_2424_ = l_Lasm_JS_decodeAs___redArg(v_inst_2420_, v_context_2421_, v_d_2422_);
lean_dec_ref(v_context_2421_);
return v_res_2424_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs(lean_object* v_00_u03b1_2425_, lean_object* v_inst_2426_, lean_object* v_context_2427_, lean_object* v_d_2428_){
_start:
{
lean_object* v___x_2430_; 
v___x_2430_ = l_Lasm_JS_decodeAs___redArg(v_inst_2426_, v_context_2427_, v_d_2428_);
return v___x_2430_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___boxed(lean_object* v_00_u03b1_2431_, lean_object* v_inst_2432_, lean_object* v_context_2433_, lean_object* v_d_2434_, lean_object* v_a_2435_){
_start:
{
lean_object* v_res_2436_; 
v_res_2436_ = l_Lasm_JS_decodeAs(v_00_u03b1_2431_, v_inst_2432_, v_context_2433_, v_d_2434_);
lean_dec_ref(v_context_2433_);
return v_res_2436_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSData___lam__0(lean_object* v_a_2439_){
_start:
{
lean_object* v___x_2440_; 
v___x_2440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2440_, 0, v_a_2439_);
return v___x_2440_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSValue___lam__0(lean_object* v_v_2448_){
_start:
{
lean_object* v___x_2449_; lean_object* v___x_2450_; 
v___x_2449_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___x_2450_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2450_, 0, v_v_2448_);
lean_ctor_set(v___x_2450_, 1, v___x_2449_);
return v___x_2450_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSValue___lam__0(lean_object* v_x_2455_){
_start:
{
if (lean_obj_tag(v_x_2455_) == 9)
{
lean_object* v_value_2456_; lean_object* v___x_2457_; 
v_value_2456_ = lean_ctor_get(v_x_2455_, 0);
lean_inc(v_value_2456_);
v___x_2457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2457_, 0, v_value_2456_);
return v___x_2457_;
}
else
{
lean_object* v___x_2458_; 
v___x_2458_ = ((lean_object*)(l_Lasm_JS_instFromJSValue___lam__0___closed__0));
return v___x_2458_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSValue___lam__0___boxed(lean_object* v_x_2459_){
_start:
{
lean_object* v_res_2460_; 
v_res_2460_ = l_Lasm_JS_instFromJSValue___lam__0(v_x_2459_);
lean_dec(v_x_2459_);
return v_res_2460_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object* v_s_2468_){
_start:
{
lean_object* v___x_2469_; 
v___x_2469_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2469_, 0, v_s_2468_);
return v___x_2469_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSString___lam__0(lean_object* v_x_2474_){
_start:
{
if (lean_obj_tag(v_x_2474_) == 4)
{
lean_object* v_s_2475_; lean_object* v___x_2477_; uint8_t v_isShared_2478_; uint8_t v_isSharedCheck_2482_; 
v_s_2475_ = lean_ctor_get(v_x_2474_, 0);
v_isSharedCheck_2482_ = !lean_is_exclusive(v_x_2474_);
if (v_isSharedCheck_2482_ == 0)
{
v___x_2477_ = v_x_2474_;
v_isShared_2478_ = v_isSharedCheck_2482_;
goto v_resetjp_2476_;
}
else
{
lean_inc(v_s_2475_);
lean_dec(v_x_2474_);
v___x_2477_ = lean_box(0);
v_isShared_2478_ = v_isSharedCheck_2482_;
goto v_resetjp_2476_;
}
v_resetjp_2476_:
{
lean_object* v___x_2480_; 
if (v_isShared_2478_ == 0)
{
lean_ctor_set_tag(v___x_2477_, 1);
v___x_2480_ = v___x_2477_;
goto v_reusejp_2479_;
}
else
{
lean_object* v_reuseFailAlloc_2481_; 
v_reuseFailAlloc_2481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2481_, 0, v_s_2475_);
v___x_2480_ = v_reuseFailAlloc_2481_;
goto v_reusejp_2479_;
}
v_reusejp_2479_:
{
return v___x_2480_;
}
}
}
else
{
lean_object* v___x_2483_; 
lean_dec(v_x_2474_);
v___x_2483_ = ((lean_object*)(l_Lasm_JS_instFromJSString___lam__0___closed__0));
return v___x_2483_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSBool___lam__0(uint8_t v_b_2491_){
_start:
{
lean_object* v___x_2492_; 
v___x_2492_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_2492_, 0, v_b_2491_);
return v___x_2492_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object* v_b_2493_){
_start:
{
uint8_t v_b_boxed_2494_; lean_object* v_res_2495_; 
v_b_boxed_2494_ = lean_unbox(v_b_2493_);
v_res_2495_ = l_Lasm_JS_instToJSBool___lam__0(v_b_boxed_2494_);
return v_res_2495_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSBool___lam__0(lean_object* v_x_2500_){
_start:
{
if (lean_obj_tag(v_x_2500_) == 2)
{
uint8_t v_b_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; 
v_b_2501_ = lean_ctor_get_uint8(v_x_2500_, 0);
v___x_2502_ = lean_box(v_b_2501_);
v___x_2503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2503_, 0, v___x_2502_);
return v___x_2503_;
}
else
{
lean_object* v___x_2504_; 
v___x_2504_ = ((lean_object*)(l_Lasm_JS_instFromJSBool___lam__0___closed__0));
return v___x_2504_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSBool___lam__0___boxed(lean_object* v_x_2505_){
_start:
{
lean_object* v_res_2506_; 
v_res_2506_ = l_Lasm_JS_instFromJSBool___lam__0(v_x_2505_);
lean_dec(v_x_2505_);
return v_res_2506_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSFloat___lam__0(double v_n_2514_){
_start:
{
lean_object* v___x_2515_; 
v___x_2515_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2515_, 0, v_n_2514_);
return v___x_2515_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSFloat___lam__0___boxed(lean_object* v_n_2516_){
_start:
{
double v_n_boxed_2517_; lean_object* v_res_2518_; 
v_n_boxed_2517_ = lean_unbox_float(v_n_2516_);
lean_dec_ref(v_n_2516_);
v_res_2518_ = l_Lasm_JS_instToJSFloat___lam__0(v_n_boxed_2517_);
return v_res_2518_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSFloat___lam__0(lean_object* v_x_2523_){
_start:
{
if (lean_obj_tag(v_x_2523_) == 3)
{
double v_n_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; 
v_n_2524_ = lean_ctor_get_float(v_x_2523_, 0);
v___x_2525_ = lean_box_float(v_n_2524_);
v___x_2526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2526_, 0, v___x_2525_);
return v___x_2526_;
}
else
{
lean_object* v___x_2527_; 
v___x_2527_ = ((lean_object*)(l_Lasm_JS_instFromJSFloat___lam__0___closed__0));
return v___x_2527_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSFloat___lam__0___boxed(lean_object* v_x_2528_){
_start:
{
lean_object* v_res_2529_; 
v_res_2529_ = l_Lasm_JS_instFromJSFloat___lam__0(v_x_2528_);
lean_dec(v_x_2528_);
return v_res_2529_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUnit___lam__0(lean_object* v_x_2537_){
_start:
{
lean_object* v___x_2538_; 
v___x_2538_ = lean_box(0);
return v___x_2538_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSUnit___lam__0(lean_object* v_x_2543_){
_start:
{
lean_object* v___x_2544_; 
v___x_2544_ = ((lean_object*)(l_Lasm_JS_instFromJSUnit___lam__0___closed__0));
return v___x_2544_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSUnit___lam__0___boxed(lean_object* v_x_2545_){
_start:
{
lean_object* v_res_2546_; 
v_res_2546_ = l_Lasm_JS_instFromJSUnit___lam__0(v_x_2545_);
lean_dec(v_x_2545_);
return v_res_2546_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSByteArray___lam__0(lean_object* v_b_2554_){
_start:
{
lean_object* v___x_2555_; 
v___x_2555_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_2555_, 0, v_b_2554_);
return v___x_2555_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSByteArray___lam__0(lean_object* v_x_2560_){
_start:
{
if (lean_obj_tag(v_x_2560_) == 6)
{
lean_object* v_b_2561_; lean_object* v___x_2563_; uint8_t v_isShared_2564_; uint8_t v_isSharedCheck_2568_; 
v_b_2561_ = lean_ctor_get(v_x_2560_, 0);
v_isSharedCheck_2568_ = !lean_is_exclusive(v_x_2560_);
if (v_isSharedCheck_2568_ == 0)
{
v___x_2563_ = v_x_2560_;
v_isShared_2564_ = v_isSharedCheck_2568_;
goto v_resetjp_2562_;
}
else
{
lean_inc(v_b_2561_);
lean_dec(v_x_2560_);
v___x_2563_ = lean_box(0);
v_isShared_2564_ = v_isSharedCheck_2568_;
goto v_resetjp_2562_;
}
v_resetjp_2562_:
{
lean_object* v___x_2566_; 
if (v_isShared_2564_ == 0)
{
lean_ctor_set_tag(v___x_2563_, 1);
v___x_2566_ = v___x_2563_;
goto v_reusejp_2565_;
}
else
{
lean_object* v_reuseFailAlloc_2567_; 
v_reuseFailAlloc_2567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2567_, 0, v_b_2561_);
v___x_2566_ = v_reuseFailAlloc_2567_;
goto v_reusejp_2565_;
}
v_reusejp_2565_:
{
return v___x_2566_;
}
}
}
else
{
lean_object* v___x_2569_; 
lean_dec(v_x_2560_);
v___x_2569_ = ((lean_object*)(l_Lasm_JS_instFromJSByteArray___lam__0___closed__0));
return v___x_2569_;
}
}
}
static lean_object* _init_l___private_Lasm_JS_Core_0__Lasm_JS_maxSafe(void){
_start:
{
lean_object* v___x_2577_; 
v___x_2577_ = lean_cstr_to_nat("9007199254740991");
return v___x_2577_;
}
}
static double _init_l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f___closed__0(void){
_start:
{
lean_object* v___x_2578_; double v___x_2579_; 
v___x_2578_ = lean_cstr_to_nat("9007199254740991");
v___x_2579_ = lean_float_of_nat(v___x_2578_);
return v___x_2579_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double v_n_2580_){
_start:
{
uint8_t v___x_2581_; 
v___x_2581_ = lean_float_isnan(v_n_2580_);
if (v___x_2581_ == 0)
{
uint8_t v___x_2582_; 
v___x_2582_ = lean_float_isinf(v_n_2580_);
if (v___x_2582_ == 0)
{
double v___x_2583_; uint8_t v___x_2584_; 
v___x_2583_ = floor(v_n_2580_);
v___x_2584_ = lean_float_beq(v___x_2583_, v_n_2580_);
if (v___x_2584_ == 0)
{
lean_object* v___x_2585_; 
v___x_2585_ = lean_box(0);
return v___x_2585_;
}
else
{
double v___x_2586_; double v___x_2587_; uint8_t v___x_2588_; 
v___x_2586_ = lean_float_once(&l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f___closed__0);
v___x_2587_ = fabs(v_n_2580_);
v___x_2588_ = lean_float_decLt(v___x_2586_, v___x_2587_);
if (v___x_2588_ == 0)
{
double v___x_2589_; uint8_t v___x_2590_; 
v___x_2589_ = lean_float_once(&l_Lasm_JS_Data_describe___closed__6, &l_Lasm_JS_Data_describe___closed__6_once, _init_l_Lasm_JS_Data_describe___closed__6);
v___x_2590_ = lean_float_decLt(v_n_2580_, v___x_2589_);
if (v___x_2590_ == 0)
{
uint64_t v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; 
v___x_2591_ = lean_float_to_uint64(v_n_2580_);
v___x_2592_ = lean_uint64_to_nat(v___x_2591_);
v___x_2593_ = lean_nat_to_int(v___x_2592_);
v___x_2594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2594_, 0, v___x_2593_);
return v___x_2594_;
}
else
{
double v___x_2595_; uint64_t v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; 
v___x_2595_ = lean_float_negate(v_n_2580_);
v___x_2596_ = lean_float_to_uint64(v___x_2595_);
v___x_2597_ = lean_uint64_to_nat(v___x_2596_);
v___x_2598_ = lean_nat_to_int(v___x_2597_);
v___x_2599_ = lean_int_neg(v___x_2598_);
lean_dec(v___x_2598_);
v___x_2600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2600_, 0, v___x_2599_);
return v___x_2600_;
}
}
else
{
lean_object* v___x_2601_; 
v___x_2601_ = lean_box(0);
return v___x_2601_;
}
}
}
else
{
lean_object* v___x_2602_; 
v___x_2602_ = lean_box(0);
return v___x_2602_;
}
}
else
{
lean_object* v___x_2603_; 
v___x_2603_ = lean_box(0);
return v___x_2603_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f___boxed(lean_object* v_n_2604_){
_start:
{
double v_n_boxed_2605_; lean_object* v_res_2606_; 
v_n_boxed_2605_ = lean_unbox_float(v_n_2604_);
lean_dec_ref(v_n_2604_);
v_res_2606_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_boxed_2605_);
return v_res_2606_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSInt___lam__0(lean_object* v_i_2607_){
_start:
{
lean_object* v___x_2608_; lean_object* v___x_2609_; uint8_t v___x_2610_; 
v___x_2608_ = lean_nat_abs(v_i_2607_);
v___x_2609_ = lean_cstr_to_nat("9007199254740991");
v___x_2610_ = lean_nat_dec_le(v___x_2608_, v___x_2609_);
lean_dec(v___x_2608_);
if (v___x_2610_ == 0)
{
lean_object* v___x_2611_; 
v___x_2611_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2611_, 0, v_i_2607_);
return v___x_2611_;
}
else
{
double v___x_2612_; lean_object* v___x_2613_; 
v___x_2612_ = l_Float_ofInt(v_i_2607_);
lean_dec(v_i_2607_);
v___x_2613_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2613_, 0, v___x_2612_);
return v___x_2613_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSInt___lam__0(lean_object* v_x_2621_){
_start:
{
switch(lean_obj_tag(v_x_2621_))
{
case 3:
{
double v_n_2622_; lean_object* v___x_2623_; 
v_n_2622_ = lean_ctor_get_float(v_x_2621_, 0);
lean_dec_ref_known(v_x_2621_, 0);
v___x_2623_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_2622_);
if (lean_obj_tag(v___x_2623_) == 0)
{
lean_object* v___x_2624_; 
v___x_2624_ = ((lean_object*)(l_Lasm_JS_instFromJSInt___lam__0___closed__1));
return v___x_2624_;
}
else
{
lean_object* v_val_2625_; lean_object* v___x_2627_; uint8_t v_isShared_2628_; uint8_t v_isSharedCheck_2632_; 
v_val_2625_ = lean_ctor_get(v___x_2623_, 0);
v_isSharedCheck_2632_ = !lean_is_exclusive(v___x_2623_);
if (v_isSharedCheck_2632_ == 0)
{
v___x_2627_ = v___x_2623_;
v_isShared_2628_ = v_isSharedCheck_2632_;
goto v_resetjp_2626_;
}
else
{
lean_inc(v_val_2625_);
lean_dec(v___x_2623_);
v___x_2627_ = lean_box(0);
v_isShared_2628_ = v_isSharedCheck_2632_;
goto v_resetjp_2626_;
}
v_resetjp_2626_:
{
lean_object* v___x_2630_; 
if (v_isShared_2628_ == 0)
{
v___x_2630_ = v___x_2627_;
goto v_reusejp_2629_;
}
else
{
lean_object* v_reuseFailAlloc_2631_; 
v_reuseFailAlloc_2631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2631_, 0, v_val_2625_);
v___x_2630_ = v_reuseFailAlloc_2631_;
goto v_reusejp_2629_;
}
v_reusejp_2629_:
{
return v___x_2630_;
}
}
}
}
case 5:
{
lean_object* v_i_2633_; lean_object* v___x_2635_; uint8_t v_isShared_2636_; uint8_t v_isSharedCheck_2640_; 
v_i_2633_ = lean_ctor_get(v_x_2621_, 0);
v_isSharedCheck_2640_ = !lean_is_exclusive(v_x_2621_);
if (v_isSharedCheck_2640_ == 0)
{
v___x_2635_ = v_x_2621_;
v_isShared_2636_ = v_isSharedCheck_2640_;
goto v_resetjp_2634_;
}
else
{
lean_inc(v_i_2633_);
lean_dec(v_x_2621_);
v___x_2635_ = lean_box(0);
v_isShared_2636_ = v_isSharedCheck_2640_;
goto v_resetjp_2634_;
}
v_resetjp_2634_:
{
lean_object* v___x_2638_; 
if (v_isShared_2636_ == 0)
{
lean_ctor_set_tag(v___x_2635_, 1);
v___x_2638_ = v___x_2635_;
goto v_reusejp_2637_;
}
else
{
lean_object* v_reuseFailAlloc_2639_; 
v_reuseFailAlloc_2639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2639_, 0, v_i_2633_);
v___x_2638_ = v_reuseFailAlloc_2639_;
goto v_reusejp_2637_;
}
v_reusejp_2637_:
{
return v___x_2638_;
}
}
}
default: 
{
lean_object* v___x_2641_; 
lean_dec(v_x_2621_);
v___x_2641_ = ((lean_object*)(l_Lasm_JS_instFromJSInt___lam__0___closed__2));
return v___x_2641_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSNat___lam__0(lean_object* v_n_2649_){
_start:
{
lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; uint8_t v___x_2653_; 
v___x_2650_ = lean_nat_to_int(v_n_2649_);
v___x_2651_ = lean_nat_abs(v___x_2650_);
v___x_2652_ = lean_cstr_to_nat("9007199254740991");
v___x_2653_ = lean_nat_dec_le(v___x_2651_, v___x_2652_);
lean_dec(v___x_2651_);
if (v___x_2653_ == 0)
{
lean_object* v___x_2654_; 
v___x_2654_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2654_, 0, v___x_2650_);
return v___x_2654_;
}
else
{
double v___x_2655_; lean_object* v___x_2656_; 
v___x_2655_ = l_Float_ofInt(v___x_2650_);
lean_dec(v___x_2650_);
v___x_2656_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2656_, 0, v___x_2655_);
return v___x_2656_;
}
}
}
static lean_object* _init_l_Lasm_JS_instFromJSNat___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2659_; lean_object* v___x_2660_; 
v___x_2659_ = lean_unsigned_to_nat(0u);
v___x_2660_ = lean_nat_to_int(v___x_2659_);
return v___x_2660_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSNat___lam__0(lean_object* v_d_2668_){
_start:
{
lean_object* v_a_2670_; 
switch(lean_obj_tag(v_d_2668_))
{
case 3:
{
double v_n_2676_; lean_object* v___x_2677_; 
v_n_2676_ = lean_ctor_get_float(v_d_2668_, 0);
lean_dec_ref_known(v_d_2668_, 0);
v___x_2677_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_2676_);
if (lean_obj_tag(v___x_2677_) == 0)
{
lean_object* v___x_2678_; 
v___x_2678_ = ((lean_object*)(l_Lasm_JS_instFromJSNat___lam__0___closed__3));
return v___x_2678_;
}
else
{
lean_object* v_val_2679_; 
v_val_2679_ = lean_ctor_get(v___x_2677_, 0);
lean_inc(v_val_2679_);
lean_dec_ref_known(v___x_2677_, 1);
v_a_2670_ = v_val_2679_;
goto v___jp_2669_;
}
}
case 5:
{
lean_object* v_i_2680_; 
v_i_2680_ = lean_ctor_get(v_d_2668_, 0);
lean_inc(v_i_2680_);
lean_dec_ref_known(v_d_2668_, 1);
v_a_2670_ = v_i_2680_;
goto v___jp_2669_;
}
default: 
{
lean_object* v___x_2681_; 
lean_dec(v_d_2668_);
v___x_2681_ = ((lean_object*)(l_Lasm_JS_instFromJSNat___lam__0___closed__4));
return v___x_2681_;
}
}
v___jp_2669_:
{
lean_object* v___x_2671_; uint8_t v___x_2672_; 
v___x_2671_ = lean_obj_once(&l_Lasm_JS_instFromJSNat___lam__0___closed__0, &l_Lasm_JS_instFromJSNat___lam__0___closed__0_once, _init_l_Lasm_JS_instFromJSNat___lam__0___closed__0);
v___x_2672_ = lean_int_dec_le(v___x_2671_, v_a_2670_);
if (v___x_2672_ == 0)
{
lean_object* v___x_2673_; 
lean_dec(v_a_2670_);
v___x_2673_ = ((lean_object*)(l_Lasm_JS_instFromJSNat___lam__0___closed__2));
return v___x_2673_;
}
else
{
lean_object* v___x_2674_; lean_object* v___x_2675_; 
v___x_2674_ = l_Int_toNat(v_a_2670_);
lean_dec(v_a_2670_);
v___x_2675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2675_, 0, v___x_2674_);
return v___x_2675_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0(lean_object* v_bound_2694_, lean_object* v_name_2695_, lean_object* v_f_2696_, lean_object* v_d_2697_){
_start:
{
lean_object* v_a_2699_; 
switch(lean_obj_tag(v_d_2697_))
{
case 3:
{
double v_n_2710_; lean_object* v___x_2711_; 
v_n_2710_ = lean_ctor_get_float(v_d_2697_, 0);
lean_dec_ref_known(v_d_2697_, 0);
v___x_2711_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_2710_);
if (lean_obj_tag(v___x_2711_) == 0)
{
lean_object* v___x_2712_; 
lean_dec(v_f_2696_);
v___x_2712_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0___closed__2));
return v___x_2712_;
}
else
{
lean_object* v_val_2713_; 
v_val_2713_ = lean_ctor_get(v___x_2711_, 0);
lean_inc(v_val_2713_);
lean_dec_ref_known(v___x_2711_, 1);
v_a_2699_ = v_val_2713_;
goto v___jp_2698_;
}
}
case 5:
{
lean_object* v_i_2714_; 
v_i_2714_ = lean_ctor_get(v_d_2697_, 0);
lean_inc(v_i_2714_);
lean_dec_ref_known(v_d_2697_, 1);
v_a_2699_ = v_i_2714_;
goto v___jp_2698_;
}
default: 
{
lean_object* v___x_2715_; 
lean_dec(v_d_2697_);
lean_dec(v_f_2696_);
v___x_2715_ = ((lean_object*)(l_Lasm_JS_instFromJSValue___lam__0___closed__0));
return v___x_2715_;
}
}
v___jp_2698_:
{
lean_object* v___x_2700_; uint8_t v___x_2701_; 
v___x_2700_ = lean_obj_once(&l_Lasm_JS_instFromJSNat___lam__0___closed__0, &l_Lasm_JS_instFromJSNat___lam__0___closed__0_once, _init_l_Lasm_JS_instFromJSNat___lam__0___closed__0);
v___x_2701_ = lean_int_dec_le(v___x_2700_, v_a_2699_);
if (v___x_2701_ == 0)
{
lean_object* v___x_2702_; 
lean_dec(v_a_2699_);
lean_dec(v_f_2696_);
v___x_2702_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0___closed__0));
return v___x_2702_;
}
else
{
lean_object* v___x_2703_; uint8_t v___x_2704_; 
v___x_2703_ = l_Int_toNat(v_a_2699_);
lean_dec(v_a_2699_);
v___x_2704_ = lean_nat_dec_lt(v___x_2703_, v_bound_2694_);
if (v___x_2704_ == 0)
{
lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; 
lean_dec(v___x_2703_);
lean_dec(v_f_2696_);
v___x_2705_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0___closed__1));
v___x_2706_ = lean_string_append(v___x_2705_, v_name_2695_);
v___x_2707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2707_, 0, v___x_2706_);
return v___x_2707_;
}
else
{
lean_object* v___x_2708_; lean_object* v___x_2709_; 
v___x_2708_ = lean_apply_1(v_f_2696_, v___x_2703_);
v___x_2709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2709_, 0, v___x_2708_);
return v___x_2709_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0___boxed(lean_object* v_bound_2716_, lean_object* v_name_2717_, lean_object* v_f_2718_, lean_object* v_d_2719_){
_start:
{
lean_object* v_res_2720_; 
v_res_2720_ = l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0(v_bound_2716_, v_name_2717_, v_f_2718_, v_d_2719_);
lean_dec_ref(v_name_2717_);
lean_dec(v_bound_2716_);
return v_res_2720_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg(lean_object* v_name_2721_, lean_object* v_bound_2722_, lean_object* v_f_2723_){
_start:
{
lean_object* v___f_2724_; uint8_t v___x_2725_; lean_object* v___x_2726_; 
lean_inc_ref(v_name_2721_);
v___f_2724_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_2724_, 0, v_bound_2722_);
lean_closure_set(v___f_2724_, 1, v_name_2721_);
lean_closure_set(v___f_2724_, 2, v_f_2723_);
v___x_2725_ = 0;
v___x_2726_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2726_, 0, v___f_2724_);
lean_ctor_set(v___x_2726_, 1, v_name_2721_);
lean_ctor_set_uint8(v___x_2726_, sizeof(void*)*2, v___x_2725_);
return v___x_2726_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded(lean_object* v_00_u03b1_2727_, lean_object* v_name_2728_, lean_object* v_bound_2729_, lean_object* v_f_2730_){
_start:
{
lean_object* v___x_2731_; 
v___x_2731_ = l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg(v_name_2728_, v_bound_2729_, v_f_2730_);
return v___x_2731_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt8___lam__0(uint8_t v_n_2732_){
_start:
{
lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; uint8_t v___x_2737_; 
v___x_2733_ = lean_uint8_to_nat(v_n_2732_);
v___x_2734_ = lean_nat_to_int(v___x_2733_);
v___x_2735_ = lean_nat_abs(v___x_2734_);
v___x_2736_ = lean_cstr_to_nat("9007199254740991");
v___x_2737_ = lean_nat_dec_le(v___x_2735_, v___x_2736_);
lean_dec(v___x_2735_);
if (v___x_2737_ == 0)
{
lean_object* v___x_2738_; 
v___x_2738_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2738_, 0, v___x_2734_);
return v___x_2738_;
}
else
{
double v___x_2739_; lean_object* v___x_2740_; 
v___x_2739_ = l_Float_ofInt(v___x_2734_);
lean_dec(v___x_2734_);
v___x_2740_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2740_, 0, v___x_2739_);
return v___x_2740_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt8___lam__0___boxed(lean_object* v_n_2741_){
_start:
{
uint8_t v_n_boxed_2742_; lean_object* v_res_2743_; 
v_n_boxed_2742_ = lean_unbox(v_n_2741_);
v_res_2743_ = l_Lasm_JS_instToJSUInt8___lam__0(v_n_boxed_2742_);
return v_res_2743_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt8___closed__2(void){
_start:
{
lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; 
v___x_2748_ = ((lean_object*)(l_Lasm_JS_instFromJSUInt8___closed__1));
v___x_2749_ = lean_unsigned_to_nat(256u);
v___x_2750_ = ((lean_object*)(l_Lasm_JS_instFromJSUInt8___closed__0));
v___x_2751_ = l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg(v___x_2750_, v___x_2749_, v___x_2748_);
return v___x_2751_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt8(void){
_start:
{
lean_object* v___x_2752_; 
v___x_2752_ = lean_obj_once(&l_Lasm_JS_instFromJSUInt8___closed__2, &l_Lasm_JS_instFromJSUInt8___closed__2_once, _init_l_Lasm_JS_instFromJSUInt8___closed__2);
return v___x_2752_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt16___lam__0(uint16_t v_n_2753_){
_start:
{
lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; uint8_t v___x_2758_; 
v___x_2754_ = lean_uint16_to_nat(v_n_2753_);
v___x_2755_ = lean_nat_to_int(v___x_2754_);
v___x_2756_ = lean_nat_abs(v___x_2755_);
v___x_2757_ = lean_cstr_to_nat("9007199254740991");
v___x_2758_ = lean_nat_dec_le(v___x_2756_, v___x_2757_);
lean_dec(v___x_2756_);
if (v___x_2758_ == 0)
{
lean_object* v___x_2759_; 
v___x_2759_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2759_, 0, v___x_2755_);
return v___x_2759_;
}
else
{
double v___x_2760_; lean_object* v___x_2761_; 
v___x_2760_ = l_Float_ofInt(v___x_2755_);
lean_dec(v___x_2755_);
v___x_2761_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2761_, 0, v___x_2760_);
return v___x_2761_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt16___lam__0___boxed(lean_object* v_n_2762_){
_start:
{
uint16_t v_n_boxed_2763_; lean_object* v_res_2764_; 
v_n_boxed_2763_ = lean_unbox(v_n_2762_);
v_res_2764_ = l_Lasm_JS_instToJSUInt16___lam__0(v_n_boxed_2763_);
return v_res_2764_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt16___closed__2(void){
_start:
{
lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; 
v___x_2769_ = ((lean_object*)(l_Lasm_JS_instFromJSUInt16___closed__1));
v___x_2770_ = lean_unsigned_to_nat(65536u);
v___x_2771_ = ((lean_object*)(l_Lasm_JS_instFromJSUInt16___closed__0));
v___x_2772_ = l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg(v___x_2771_, v___x_2770_, v___x_2769_);
return v___x_2772_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt16(void){
_start:
{
lean_object* v___x_2773_; 
v___x_2773_ = lean_obj_once(&l_Lasm_JS_instFromJSUInt16___closed__2, &l_Lasm_JS_instFromJSUInt16___closed__2_once, _init_l_Lasm_JS_instFromJSUInt16___closed__2);
return v___x_2773_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt32___lam__0(uint32_t v_n_2774_){
_start:
{
lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; uint8_t v___x_2779_; 
v___x_2775_ = lean_uint32_to_nat(v_n_2774_);
v___x_2776_ = lean_nat_to_int(v___x_2775_);
v___x_2777_ = lean_nat_abs(v___x_2776_);
v___x_2778_ = lean_cstr_to_nat("9007199254740991");
v___x_2779_ = lean_nat_dec_le(v___x_2777_, v___x_2778_);
lean_dec(v___x_2777_);
if (v___x_2779_ == 0)
{
lean_object* v___x_2780_; 
v___x_2780_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2780_, 0, v___x_2776_);
return v___x_2780_;
}
else
{
double v___x_2781_; lean_object* v___x_2782_; 
v___x_2781_ = l_Float_ofInt(v___x_2776_);
lean_dec(v___x_2776_);
v___x_2782_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2782_, 0, v___x_2781_);
return v___x_2782_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt32___lam__0___boxed(lean_object* v_n_2783_){
_start:
{
uint32_t v_n_boxed_2784_; lean_object* v_res_2785_; 
v_n_boxed_2784_ = lean_unbox_uint32(v_n_2783_);
lean_dec(v_n_2783_);
v_res_2785_ = l_Lasm_JS_instToJSUInt32___lam__0(v_n_boxed_2784_);
return v_res_2785_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt32___closed__2(void){
_start:
{
lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; 
v___x_2790_ = ((lean_object*)(l_Lasm_JS_instFromJSUInt32___closed__1));
v___x_2791_ = lean_cstr_to_nat("4294967296");
v___x_2792_ = ((lean_object*)(l_Lasm_JS_instFromJSUInt32___closed__0));
v___x_2793_ = l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg(v___x_2792_, v___x_2791_, v___x_2790_);
return v___x_2793_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt32(void){
_start:
{
lean_object* v___x_2794_; 
v___x_2794_ = lean_obj_once(&l_Lasm_JS_instFromJSUInt32___closed__2, &l_Lasm_JS_instFromJSUInt32___closed__2_once, _init_l_Lasm_JS_instFromJSUInt32___closed__2);
return v___x_2794_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt64___lam__0(uint64_t v_n_2795_){
_start:
{
lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; uint8_t v___x_2800_; 
v___x_2796_ = lean_uint64_to_nat(v_n_2795_);
v___x_2797_ = lean_nat_to_int(v___x_2796_);
v___x_2798_ = lean_nat_abs(v___x_2797_);
v___x_2799_ = lean_cstr_to_nat("9007199254740991");
v___x_2800_ = lean_nat_dec_le(v___x_2798_, v___x_2799_);
lean_dec(v___x_2798_);
if (v___x_2800_ == 0)
{
lean_object* v___x_2801_; 
v___x_2801_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2801_, 0, v___x_2797_);
return v___x_2801_;
}
else
{
double v___x_2802_; lean_object* v___x_2803_; 
v___x_2802_ = l_Float_ofInt(v___x_2797_);
lean_dec(v___x_2797_);
v___x_2803_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2803_, 0, v___x_2802_);
return v___x_2803_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt64___lam__0___boxed(lean_object* v_n_2804_){
_start:
{
uint64_t v_n_boxed_2805_; lean_object* v_res_2806_; 
v_n_boxed_2805_ = lean_unbox_uint64(v_n_2804_);
lean_dec_ref(v_n_2804_);
v_res_2806_ = l_Lasm_JS_instToJSUInt64___lam__0(v_n_boxed_2805_);
return v_res_2806_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt64___closed__1(void){
_start:
{
lean_object* v___x_2810_; 
v___x_2810_ = lean_cstr_to_nat("18446744073709551616");
return v___x_2810_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt64___closed__3(void){
_start:
{
lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; 
v___x_2812_ = ((lean_object*)(l_Lasm_JS_instFromJSUInt64___closed__2));
v___x_2813_ = lean_obj_once(&l_Lasm_JS_instFromJSUInt64___closed__1, &l_Lasm_JS_instFromJSUInt64___closed__1_once, _init_l_Lasm_JS_instFromJSUInt64___closed__1);
v___x_2814_ = ((lean_object*)(l_Lasm_JS_instFromJSUInt64___closed__0));
v___x_2815_ = l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg(v___x_2814_, v___x_2813_, v___x_2812_);
return v___x_2815_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt64(void){
_start:
{
lean_object* v___x_2816_; 
v___x_2816_ = lean_obj_once(&l_Lasm_JS_instFromJSUInt64___closed__3, &l_Lasm_JS_instFromJSUInt64___closed__3_once, _init_l_Lasm_JS_instFromJSUInt64___closed__3);
return v___x_2816_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSArray___redArg___lam__0(lean_object* v_inst_2817_, lean_object* v_x_2818_){
_start:
{
lean_object* v___x_2819_; 
v___x_2819_ = lean_apply_1(v_inst_2817_, v_x_2818_);
return v___x_2819_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSArray___redArg___lam__1(lean_object* v___f_2839_, lean_object* v_xs_2840_){
_start:
{
lean_object* v___x_2841_; size_t v_sz_2842_; size_t v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; 
v___x_2841_ = ((lean_object*)(l_Lasm_JS_instToJSArray___redArg___lam__1___closed__9));
v_sz_2842_ = lean_array_size(v_xs_2840_);
v___x_2843_ = ((size_t)0ULL);
v___x_2844_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2841_, v___f_2839_, v_sz_2842_, v___x_2843_, v_xs_2840_);
v___x_2845_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2845_, 0, v___x_2844_);
return v___x_2845_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSArray___redArg(lean_object* v_inst_2846_){
_start:
{
lean_object* v___f_2847_; lean_object* v___f_2848_; 
v___f_2847_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSArray___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2847_, 0, v_inst_2846_);
v___f_2848_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSArray___redArg___lam__1), 2, 1);
lean_closure_set(v___f_2848_, 0, v___f_2847_);
return v___f_2848_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSArray(lean_object* v_00_u03b1_2849_, lean_object* v_inst_2850_){
_start:
{
lean_object* v___x_2851_; 
v___x_2851_ = l_Lasm_JS_instToJSArray___redArg(v_inst_2850_);
return v___x_2851_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSArray___redArg___lam__0(lean_object* v_fromJS_2852_, lean_object* v_x_2853_){
_start:
{
lean_object* v___x_2854_; 
v___x_2854_ = lean_apply_1(v_fromJS_2852_, v_x_2853_);
return v___x_2854_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSArray___redArg___lam__1(lean_object* v___x_2859_, lean_object* v___f_2860_, lean_object* v_typeName_2861_, lean_object* v_x_2862_){
_start:
{
if (lean_obj_tag(v_x_2862_) == 7)
{
lean_object* v_items_2863_; size_t v_sz_2864_; size_t v___x_2865_; lean_object* v___x_2866_; 
v_items_2863_ = lean_ctor_get(v_x_2862_, 0);
lean_inc_ref(v_items_2863_);
lean_dec_ref_known(v_x_2862_, 1);
v_sz_2864_ = lean_array_size(v_items_2863_);
v___x_2865_ = ((size_t)0ULL);
v___x_2866_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2859_, v___f_2860_, v_sz_2864_, v___x_2865_, v_items_2863_);
if (lean_obj_tag(v___x_2866_) == 0)
{
lean_object* v_a_2867_; lean_object* v___x_2869_; uint8_t v_isShared_2870_; uint8_t v_isSharedCheck_2885_; 
v_a_2867_ = lean_ctor_get(v___x_2866_, 0);
v_isSharedCheck_2885_ = !lean_is_exclusive(v___x_2866_);
if (v_isSharedCheck_2885_ == 0)
{
v___x_2869_ = v___x_2866_;
v_isShared_2870_ = v_isSharedCheck_2885_;
goto v_resetjp_2868_;
}
else
{
lean_inc(v_a_2867_);
lean_dec(v___x_2866_);
v___x_2869_ = lean_box(0);
v_isShared_2870_ = v_isSharedCheck_2885_;
goto v_resetjp_2868_;
}
v_resetjp_2868_:
{
lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; uint8_t v___x_2875_; 
v___x_2871_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__0));
v___x_2872_ = lean_string_append(v___x_2871_, v_typeName_2861_);
v___x_2873_ = lean_string_utf8_byte_size(v_a_2867_);
v___x_2874_ = lean_unsigned_to_nat(0u);
v___x_2875_ = lean_nat_dec_eq(v___x_2873_, v___x_2874_);
if (v___x_2875_ == 0)
{
lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2880_; 
v___x_2876_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__1));
v___x_2877_ = lean_string_append(v___x_2876_, v_a_2867_);
lean_dec(v_a_2867_);
v___x_2878_ = lean_string_append(v___x_2872_, v___x_2877_);
lean_dec_ref(v___x_2877_);
if (v_isShared_2870_ == 0)
{
lean_ctor_set(v___x_2869_, 0, v___x_2878_);
v___x_2880_ = v___x_2869_;
goto v_reusejp_2879_;
}
else
{
lean_object* v_reuseFailAlloc_2881_; 
v_reuseFailAlloc_2881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2881_, 0, v___x_2878_);
v___x_2880_ = v_reuseFailAlloc_2881_;
goto v_reusejp_2879_;
}
v_reusejp_2879_:
{
return v___x_2880_;
}
}
else
{
lean_object* v___x_2883_; 
lean_dec(v_a_2867_);
if (v_isShared_2870_ == 0)
{
lean_ctor_set(v___x_2869_, 0, v___x_2872_);
v___x_2883_ = v___x_2869_;
goto v_reusejp_2882_;
}
else
{
lean_object* v_reuseFailAlloc_2884_; 
v_reuseFailAlloc_2884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2884_, 0, v___x_2872_);
v___x_2883_ = v_reuseFailAlloc_2884_;
goto v_reusejp_2882_;
}
v_reusejp_2882_:
{
return v___x_2883_;
}
}
}
}
else
{
return v___x_2866_;
}
}
else
{
lean_object* v___x_2886_; 
lean_dec(v_x_2862_);
lean_dec_ref(v___f_2860_);
lean_dec_ref(v___x_2859_);
v___x_2886_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__2));
return v___x_2886_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSArray___redArg___lam__1___boxed(lean_object* v___x_2887_, lean_object* v___f_2888_, lean_object* v_typeName_2889_, lean_object* v_x_2890_){
_start:
{
lean_object* v_res_2891_; 
v_res_2891_ = l_Lasm_JS_instFromJSArray___redArg___lam__1(v___x_2887_, v___f_2888_, v_typeName_2889_, v_x_2890_);
lean_dec_ref(v_typeName_2889_);
return v_res_2891_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSArray___redArg(lean_object* v_inst_2912_){
_start:
{
lean_object* v___x_2913_; lean_object* v_fromJS_2914_; lean_object* v_typeName_2915_; lean_object* v___x_2917_; uint8_t v_isShared_2918_; uint8_t v_isSharedCheck_2929_; 
v___x_2913_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___closed__9));
v_fromJS_2914_ = lean_ctor_get(v_inst_2912_, 0);
v_typeName_2915_ = lean_ctor_get(v_inst_2912_, 1);
v_isSharedCheck_2929_ = !lean_is_exclusive(v_inst_2912_);
if (v_isSharedCheck_2929_ == 0)
{
v___x_2917_ = v_inst_2912_;
v_isShared_2918_ = v_isSharedCheck_2929_;
goto v_resetjp_2916_;
}
else
{
lean_inc(v_typeName_2915_);
lean_inc(v_fromJS_2914_);
lean_dec(v_inst_2912_);
v___x_2917_ = lean_box(0);
v_isShared_2918_ = v_isSharedCheck_2929_;
goto v_resetjp_2916_;
}
v_resetjp_2916_:
{
lean_object* v___f_2919_; lean_object* v___f_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; uint8_t v___x_2925_; lean_object* v___x_2927_; 
v___f_2919_ = lean_alloc_closure((void*)(l_Lasm_JS_instFromJSArray___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2919_, 0, v_fromJS_2914_);
lean_inc_ref(v_typeName_2915_);
v___f_2920_ = lean_alloc_closure((void*)(l_Lasm_JS_instFromJSArray___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_2920_, 0, v___x_2913_);
lean_closure_set(v___f_2920_, 1, v___f_2919_);
lean_closure_set(v___f_2920_, 2, v_typeName_2915_);
v___x_2921_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___closed__10));
v___x_2922_ = lean_string_append(v___x_2921_, v_typeName_2915_);
lean_dec_ref(v_typeName_2915_);
v___x_2923_ = ((lean_object*)(l_Lasm_JS_Wire_pushLength___closed__5));
v___x_2924_ = lean_string_append(v___x_2922_, v___x_2923_);
v___x_2925_ = 0;
if (v_isShared_2918_ == 0)
{
lean_ctor_set(v___x_2917_, 1, v___x_2924_);
lean_ctor_set(v___x_2917_, 0, v___f_2920_);
v___x_2927_ = v___x_2917_;
goto v_reusejp_2926_;
}
else
{
lean_object* v_reuseFailAlloc_2928_; 
v_reuseFailAlloc_2928_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2928_, 0, v___f_2920_);
lean_ctor_set(v_reuseFailAlloc_2928_, 1, v___x_2924_);
v___x_2927_ = v_reuseFailAlloc_2928_;
goto v_reusejp_2926_;
}
v_reusejp_2926_:
{
lean_ctor_set_uint8(v___x_2927_, sizeof(void*)*2, v___x_2925_);
return v___x_2927_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSArray(lean_object* v_00_u03b1_2930_, lean_object* v_inst_2931_){
_start:
{
lean_object* v___x_2932_; 
v___x_2932_ = l_Lasm_JS_instFromJSArray___redArg(v_inst_2931_);
return v___x_2932_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSList___redArg___lam__1(lean_object* v___f_2933_, lean_object* v_xs_2934_){
_start:
{
lean_object* v___x_2935_; lean_object* v___x_2936_; size_t v_sz_2937_; size_t v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; 
v___x_2935_ = lean_array_mk(v_xs_2934_);
v___x_2936_ = ((lean_object*)(l_Lasm_JS_instToJSArray___redArg___lam__1___closed__9));
v_sz_2937_ = lean_array_size(v___x_2935_);
v___x_2938_ = ((size_t)0ULL);
v___x_2939_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2936_, v___f_2933_, v_sz_2937_, v___x_2938_, v___x_2935_);
v___x_2940_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2940_, 0, v___x_2939_);
return v___x_2940_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSList___redArg(lean_object* v_inst_2941_){
_start:
{
lean_object* v___f_2942_; lean_object* v___f_2943_; 
v___f_2942_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSArray___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2942_, 0, v_inst_2941_);
v___f_2943_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSList___redArg___lam__1), 2, 1);
lean_closure_set(v___f_2943_, 0, v___f_2942_);
return v___f_2943_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSList(lean_object* v_00_u03b1_2944_, lean_object* v_inst_2945_){
_start:
{
lean_object* v___x_2946_; 
v___x_2946_ = l_Lasm_JS_instToJSList___redArg(v_inst_2945_);
return v___x_2946_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSList___redArg___lam__1(lean_object* v___f_2949_, lean_object* v_typeName_2950_, lean_object* v_d_2951_){
_start:
{
lean_object* v___x_2952_; 
v___x_2952_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___closed__9));
if (lean_obj_tag(v_d_2951_) == 7)
{
lean_object* v_items_2953_; size_t v_sz_2954_; size_t v___x_2955_; lean_object* v___x_2956_; 
v_items_2953_ = lean_ctor_get(v_d_2951_, 0);
lean_inc_ref(v_items_2953_);
lean_dec_ref_known(v_d_2951_, 1);
v_sz_2954_ = lean_array_size(v_items_2953_);
v___x_2955_ = ((size_t)0ULL);
v___x_2956_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_2952_, v___f_2949_, v_sz_2954_, v___x_2955_, v_items_2953_);
if (lean_obj_tag(v___x_2956_) == 0)
{
lean_object* v_a_2957_; lean_object* v___x_2959_; uint8_t v_isShared_2960_; uint8_t v_isSharedCheck_2975_; 
v_a_2957_ = lean_ctor_get(v___x_2956_, 0);
v_isSharedCheck_2975_ = !lean_is_exclusive(v___x_2956_);
if (v_isSharedCheck_2975_ == 0)
{
v___x_2959_ = v___x_2956_;
v_isShared_2960_ = v_isSharedCheck_2975_;
goto v_resetjp_2958_;
}
else
{
lean_inc(v_a_2957_);
lean_dec(v___x_2956_);
v___x_2959_ = lean_box(0);
v_isShared_2960_ = v_isSharedCheck_2975_;
goto v_resetjp_2958_;
}
v_resetjp_2958_:
{
lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; uint8_t v___x_2965_; 
v___x_2961_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__0));
v___x_2962_ = lean_string_append(v___x_2961_, v_typeName_2950_);
v___x_2963_ = lean_string_utf8_byte_size(v_a_2957_);
v___x_2964_ = lean_unsigned_to_nat(0u);
v___x_2965_ = lean_nat_dec_eq(v___x_2963_, v___x_2964_);
if (v___x_2965_ == 0)
{
lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2970_; 
v___x_2966_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__1));
v___x_2967_ = lean_string_append(v___x_2966_, v_a_2957_);
lean_dec(v_a_2957_);
v___x_2968_ = lean_string_append(v___x_2962_, v___x_2967_);
lean_dec_ref(v___x_2967_);
if (v_isShared_2960_ == 0)
{
lean_ctor_set(v___x_2959_, 0, v___x_2968_);
v___x_2970_ = v___x_2959_;
goto v_reusejp_2969_;
}
else
{
lean_object* v_reuseFailAlloc_2971_; 
v_reuseFailAlloc_2971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2971_, 0, v___x_2968_);
v___x_2970_ = v_reuseFailAlloc_2971_;
goto v_reusejp_2969_;
}
v_reusejp_2969_:
{
return v___x_2970_;
}
}
else
{
lean_object* v___x_2973_; 
lean_dec(v_a_2957_);
if (v_isShared_2960_ == 0)
{
lean_ctor_set(v___x_2959_, 0, v___x_2962_);
v___x_2973_ = v___x_2959_;
goto v_reusejp_2972_;
}
else
{
lean_object* v_reuseFailAlloc_2974_; 
v_reuseFailAlloc_2974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2974_, 0, v___x_2962_);
v___x_2973_ = v_reuseFailAlloc_2974_;
goto v_reusejp_2972_;
}
v_reusejp_2972_:
{
return v___x_2973_;
}
}
}
}
else
{
lean_object* v_a_2976_; lean_object* v___x_2978_; uint8_t v_isShared_2979_; uint8_t v_isSharedCheck_2984_; 
v_a_2976_ = lean_ctor_get(v___x_2956_, 0);
v_isSharedCheck_2984_ = !lean_is_exclusive(v___x_2956_);
if (v_isSharedCheck_2984_ == 0)
{
v___x_2978_ = v___x_2956_;
v_isShared_2979_ = v_isSharedCheck_2984_;
goto v_resetjp_2977_;
}
else
{
lean_inc(v_a_2976_);
lean_dec(v___x_2956_);
v___x_2978_ = lean_box(0);
v_isShared_2979_ = v_isSharedCheck_2984_;
goto v_resetjp_2977_;
}
v_resetjp_2977_:
{
lean_object* v___x_2980_; lean_object* v___x_2982_; 
v___x_2980_ = lean_array_to_list(v_a_2976_);
if (v_isShared_2979_ == 0)
{
lean_ctor_set(v___x_2978_, 0, v___x_2980_);
v___x_2982_ = v___x_2978_;
goto v_reusejp_2981_;
}
else
{
lean_object* v_reuseFailAlloc_2983_; 
v_reuseFailAlloc_2983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2983_, 0, v___x_2980_);
v___x_2982_ = v_reuseFailAlloc_2983_;
goto v_reusejp_2981_;
}
v_reusejp_2981_:
{
return v___x_2982_;
}
}
}
}
else
{
lean_object* v___x_2985_; 
lean_dec(v_d_2951_);
lean_dec_ref(v___f_2949_);
v___x_2985_ = ((lean_object*)(l_Lasm_JS_instFromJSList___redArg___lam__1___closed__0));
return v___x_2985_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSList___redArg___lam__1___boxed(lean_object* v___f_2986_, lean_object* v_typeName_2987_, lean_object* v_d_2988_){
_start:
{
lean_object* v_res_2989_; 
v_res_2989_ = l_Lasm_JS_instFromJSList___redArg___lam__1(v___f_2986_, v_typeName_2987_, v_d_2988_);
lean_dec_ref(v_typeName_2987_);
return v_res_2989_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSList___redArg(lean_object* v_inst_2991_){
_start:
{
lean_object* v_fromJS_2992_; lean_object* v_typeName_2993_; lean_object* v___x_2995_; uint8_t v_isShared_2996_; uint8_t v_isSharedCheck_3007_; 
v_fromJS_2992_ = lean_ctor_get(v_inst_2991_, 0);
v_typeName_2993_ = lean_ctor_get(v_inst_2991_, 1);
v_isSharedCheck_3007_ = !lean_is_exclusive(v_inst_2991_);
if (v_isSharedCheck_3007_ == 0)
{
v___x_2995_ = v_inst_2991_;
v_isShared_2996_ = v_isSharedCheck_3007_;
goto v_resetjp_2994_;
}
else
{
lean_inc(v_typeName_2993_);
lean_inc(v_fromJS_2992_);
lean_dec(v_inst_2991_);
v___x_2995_ = lean_box(0);
v_isShared_2996_ = v_isSharedCheck_3007_;
goto v_resetjp_2994_;
}
v_resetjp_2994_:
{
lean_object* v___f_2997_; lean_object* v___f_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; uint8_t v___x_3003_; lean_object* v___x_3005_; 
v___f_2997_ = lean_alloc_closure((void*)(l_Lasm_JS_instFromJSArray___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2997_, 0, v_fromJS_2992_);
lean_inc_ref(v_typeName_2993_);
v___f_2998_ = lean_alloc_closure((void*)(l_Lasm_JS_instFromJSList___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_2998_, 0, v___f_2997_);
lean_closure_set(v___f_2998_, 1, v_typeName_2993_);
v___x_2999_ = ((lean_object*)(l_Lasm_JS_instFromJSList___redArg___closed__0));
v___x_3000_ = lean_string_append(v___x_2999_, v_typeName_2993_);
lean_dec_ref(v_typeName_2993_);
v___x_3001_ = ((lean_object*)(l_Lasm_JS_Wire_pushLength___closed__5));
v___x_3002_ = lean_string_append(v___x_3000_, v___x_3001_);
v___x_3003_ = 0;
if (v_isShared_2996_ == 0)
{
lean_ctor_set(v___x_2995_, 1, v___x_3002_);
lean_ctor_set(v___x_2995_, 0, v___f_2998_);
v___x_3005_ = v___x_2995_;
goto v_reusejp_3004_;
}
else
{
lean_object* v_reuseFailAlloc_3006_; 
v_reuseFailAlloc_3006_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_3006_, 0, v___f_2998_);
lean_ctor_set(v_reuseFailAlloc_3006_, 1, v___x_3002_);
v___x_3005_ = v_reuseFailAlloc_3006_;
goto v_reusejp_3004_;
}
v_reusejp_3004_:
{
lean_ctor_set_uint8(v___x_3005_, sizeof(void*)*2, v___x_3003_);
return v___x_3005_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSList(lean_object* v_00_u03b1_3008_, lean_object* v_inst_3009_){
_start:
{
lean_object* v___x_3010_; 
v___x_3010_ = l_Lasm_JS_instFromJSList___redArg(v_inst_3009_);
return v___x_3010_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSOption___redArg___lam__0(lean_object* v_inst_3011_, lean_object* v_x_3012_){
_start:
{
if (lean_obj_tag(v_x_3012_) == 0)
{
lean_object* v___x_3013_; 
lean_dec_ref(v_inst_3011_);
v___x_3013_ = lean_box(1);
return v___x_3013_;
}
else
{
lean_object* v_val_3014_; lean_object* v___x_3015_; 
v_val_3014_ = lean_ctor_get(v_x_3012_, 0);
lean_inc(v_val_3014_);
lean_dec_ref_known(v_x_3012_, 1);
v___x_3015_ = lean_apply_1(v_inst_3011_, v_val_3014_);
return v___x_3015_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSOption___redArg(lean_object* v_inst_3016_){
_start:
{
lean_object* v___f_3017_; 
v___f_3017_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSOption___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3017_, 0, v_inst_3016_);
return v___f_3017_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSOption(lean_object* v_00_u03b1_3018_, lean_object* v_inst_3019_){
_start:
{
lean_object* v___f_3020_; 
v___f_3020_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSOption___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3020_, 0, v_inst_3019_);
return v___f_3020_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSOption___redArg___lam__0(lean_object* v_fromJS_3023_, lean_object* v_x_3024_){
_start:
{
switch(lean_obj_tag(v_x_3024_))
{
case 1:
{
lean_dec_ref(v_fromJS_3023_);
goto v___jp_3025_;
}
case 0:
{
lean_dec_ref(v_fromJS_3023_);
goto v___jp_3025_;
}
default: 
{
lean_object* v___x_3027_; 
v___x_3027_ = lean_apply_1(v_fromJS_3023_, v_x_3024_);
if (lean_obj_tag(v___x_3027_) == 0)
{
lean_object* v_a_3028_; lean_object* v___x_3030_; uint8_t v_isShared_3031_; uint8_t v_isSharedCheck_3035_; 
v_a_3028_ = lean_ctor_get(v___x_3027_, 0);
v_isSharedCheck_3035_ = !lean_is_exclusive(v___x_3027_);
if (v_isSharedCheck_3035_ == 0)
{
v___x_3030_ = v___x_3027_;
v_isShared_3031_ = v_isSharedCheck_3035_;
goto v_resetjp_3029_;
}
else
{
lean_inc(v_a_3028_);
lean_dec(v___x_3027_);
v___x_3030_ = lean_box(0);
v_isShared_3031_ = v_isSharedCheck_3035_;
goto v_resetjp_3029_;
}
v_resetjp_3029_:
{
lean_object* v___x_3033_; 
if (v_isShared_3031_ == 0)
{
v___x_3033_ = v___x_3030_;
goto v_reusejp_3032_;
}
else
{
lean_object* v_reuseFailAlloc_3034_; 
v_reuseFailAlloc_3034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3034_, 0, v_a_3028_);
v___x_3033_ = v_reuseFailAlloc_3034_;
goto v_reusejp_3032_;
}
v_reusejp_3032_:
{
return v___x_3033_;
}
}
}
else
{
lean_object* v_a_3036_; lean_object* v___x_3038_; uint8_t v_isShared_3039_; uint8_t v_isSharedCheck_3044_; 
v_a_3036_ = lean_ctor_get(v___x_3027_, 0);
v_isSharedCheck_3044_ = !lean_is_exclusive(v___x_3027_);
if (v_isSharedCheck_3044_ == 0)
{
v___x_3038_ = v___x_3027_;
v_isShared_3039_ = v_isSharedCheck_3044_;
goto v_resetjp_3037_;
}
else
{
lean_inc(v_a_3036_);
lean_dec(v___x_3027_);
v___x_3038_ = lean_box(0);
v_isShared_3039_ = v_isSharedCheck_3044_;
goto v_resetjp_3037_;
}
v_resetjp_3037_:
{
lean_object* v___x_3040_; lean_object* v___x_3042_; 
v___x_3040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3040_, 0, v_a_3036_);
if (v_isShared_3039_ == 0)
{
lean_ctor_set(v___x_3038_, 0, v___x_3040_);
v___x_3042_ = v___x_3038_;
goto v_reusejp_3041_;
}
else
{
lean_object* v_reuseFailAlloc_3043_; 
v_reuseFailAlloc_3043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3043_, 0, v___x_3040_);
v___x_3042_ = v_reuseFailAlloc_3043_;
goto v_reusejp_3041_;
}
v_reusejp_3041_:
{
return v___x_3042_;
}
}
}
}
}
v___jp_3025_:
{
lean_object* v___x_3026_; 
v___x_3026_ = ((lean_object*)(l_Lasm_JS_instFromJSOption___redArg___lam__0___closed__0));
return v___x_3026_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSOption___redArg(lean_object* v_inst_3046_){
_start:
{
lean_object* v_fromJS_3047_; lean_object* v_typeName_3048_; uint8_t v_mode_3049_; lean_object* v___x_3051_; uint8_t v_isShared_3052_; uint8_t v_isSharedCheck_3061_; 
v_fromJS_3047_ = lean_ctor_get(v_inst_3046_, 0);
v_typeName_3048_ = lean_ctor_get(v_inst_3046_, 1);
v_mode_3049_ = lean_ctor_get_uint8(v_inst_3046_, sizeof(void*)*2);
v_isSharedCheck_3061_ = !lean_is_exclusive(v_inst_3046_);
if (v_isSharedCheck_3061_ == 0)
{
v___x_3051_ = v_inst_3046_;
v_isShared_3052_ = v_isSharedCheck_3061_;
goto v_resetjp_3050_;
}
else
{
lean_inc(v_typeName_3048_);
lean_inc(v_fromJS_3047_);
lean_dec(v_inst_3046_);
v___x_3051_ = lean_box(0);
v_isShared_3052_ = v_isSharedCheck_3061_;
goto v_resetjp_3050_;
}
v_resetjp_3050_:
{
lean_object* v___f_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3059_; 
v___f_3053_ = lean_alloc_closure((void*)(l_Lasm_JS_instFromJSOption___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3053_, 0, v_fromJS_3047_);
v___x_3054_ = ((lean_object*)(l_Lasm_JS_instFromJSOption___redArg___closed__0));
v___x_3055_ = lean_string_append(v___x_3054_, v_typeName_3048_);
lean_dec_ref(v_typeName_3048_);
v___x_3056_ = ((lean_object*)(l_Lasm_JS_Wire_pushLength___closed__5));
v___x_3057_ = lean_string_append(v___x_3055_, v___x_3056_);
if (v_isShared_3052_ == 0)
{
lean_ctor_set(v___x_3051_, 1, v___x_3057_);
lean_ctor_set(v___x_3051_, 0, v___f_3053_);
v___x_3059_ = v___x_3051_;
goto v_reusejp_3058_;
}
else
{
lean_object* v_reuseFailAlloc_3060_; 
v_reuseFailAlloc_3060_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_3060_, 0, v___f_3053_);
lean_ctor_set(v_reuseFailAlloc_3060_, 1, v___x_3057_);
lean_ctor_set_uint8(v_reuseFailAlloc_3060_, sizeof(void*)*2, v_mode_3049_);
v___x_3059_ = v_reuseFailAlloc_3060_;
goto v_reusejp_3058_;
}
v_reusejp_3058_:
{
return v___x_3059_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSOption(lean_object* v_00_u03b1_3062_, lean_object* v_inst_3063_){
_start:
{
lean_object* v___x_3064_; 
v___x_3064_ = l_Lasm_JS_instFromJSOption___redArg(v_inst_3063_);
return v___x_3064_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSProd___redArg___lam__0(lean_object* v_inst_3065_, lean_object* v_inst_3066_, lean_object* v_x_3067_){
_start:
{
lean_object* v_fst_3068_; lean_object* v_snd_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; 
v_fst_3068_ = lean_ctor_get(v_x_3067_, 0);
lean_inc(v_fst_3068_);
v_snd_3069_ = lean_ctor_get(v_x_3067_, 1);
lean_inc(v_snd_3069_);
lean_dec_ref(v_x_3067_);
v___x_3070_ = lean_apply_1(v_inst_3065_, v_fst_3068_);
v___x_3071_ = lean_apply_1(v_inst_3066_, v_snd_3069_);
v___x_3072_ = lean_unsigned_to_nat(2u);
v___x_3073_ = lean_mk_empty_array_with_capacity(v___x_3072_);
v___x_3074_ = lean_array_push(v___x_3073_, v___x_3070_);
v___x_3075_ = lean_array_push(v___x_3074_, v___x_3071_);
v___x_3076_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3076_, 0, v___x_3075_);
return v___x_3076_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSProd___redArg(lean_object* v_inst_3077_, lean_object* v_inst_3078_){
_start:
{
lean_object* v___f_3079_; 
v___f_3079_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSProd___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3079_, 0, v_inst_3077_);
lean_closure_set(v___f_3079_, 1, v_inst_3078_);
return v___f_3079_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSProd(lean_object* v_00_u03b1_3080_, lean_object* v_00_u03b2_3081_, lean_object* v_inst_3082_, lean_object* v_inst_3083_){
_start:
{
lean_object* v___f_3084_; 
v___f_3084_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSProd___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3084_, 0, v_inst_3082_);
lean_closure_set(v___f_3084_, 1, v_inst_3083_);
return v___f_3084_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSProd___redArg___lam__0(lean_object* v_fromJS_3088_, lean_object* v_fromJS_3089_, lean_object* v_x_3090_){
_start:
{
if (lean_obj_tag(v_x_3090_) == 7)
{
lean_object* v_items_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; uint8_t v___x_3096_; 
v_items_3093_ = lean_ctor_get(v_x_3090_, 0);
v___x_3094_ = lean_array_get_size(v_items_3093_);
v___x_3095_ = lean_unsigned_to_nat(2u);
v___x_3096_ = lean_nat_dec_eq(v___x_3094_, v___x_3095_);
if (v___x_3096_ == 0)
{
lean_dec_ref(v_fromJS_3089_);
lean_dec_ref(v_fromJS_3088_);
goto v___jp_3091_;
}
else
{
lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; 
v___x_3097_ = lean_unsigned_to_nat(0u);
v___x_3098_ = lean_array_fget_borrowed(v_items_3093_, v___x_3097_);
lean_inc(v___x_3098_);
v___x_3099_ = lean_apply_1(v_fromJS_3088_, v___x_3098_);
if (lean_obj_tag(v___x_3099_) == 0)
{
lean_object* v_a_3100_; lean_object* v___x_3102_; uint8_t v_isShared_3103_; uint8_t v_isSharedCheck_3107_; 
lean_dec_ref(v_fromJS_3089_);
v_a_3100_ = lean_ctor_get(v___x_3099_, 0);
v_isSharedCheck_3107_ = !lean_is_exclusive(v___x_3099_);
if (v_isSharedCheck_3107_ == 0)
{
v___x_3102_ = v___x_3099_;
v_isShared_3103_ = v_isSharedCheck_3107_;
goto v_resetjp_3101_;
}
else
{
lean_inc(v_a_3100_);
lean_dec(v___x_3099_);
v___x_3102_ = lean_box(0);
v_isShared_3103_ = v_isSharedCheck_3107_;
goto v_resetjp_3101_;
}
v_resetjp_3101_:
{
lean_object* v___x_3105_; 
if (v_isShared_3103_ == 0)
{
v___x_3105_ = v___x_3102_;
goto v_reusejp_3104_;
}
else
{
lean_object* v_reuseFailAlloc_3106_; 
v_reuseFailAlloc_3106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3106_, 0, v_a_3100_);
v___x_3105_ = v_reuseFailAlloc_3106_;
goto v_reusejp_3104_;
}
v_reusejp_3104_:
{
return v___x_3105_;
}
}
}
else
{
lean_object* v_a_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; 
v_a_3108_ = lean_ctor_get(v___x_3099_, 0);
lean_inc(v_a_3108_);
lean_dec_ref_known(v___x_3099_, 1);
v___x_3109_ = lean_unsigned_to_nat(1u);
v___x_3110_ = lean_array_fget_borrowed(v_items_3093_, v___x_3109_);
lean_inc(v___x_3110_);
v___x_3111_ = lean_apply_1(v_fromJS_3089_, v___x_3110_);
if (lean_obj_tag(v___x_3111_) == 0)
{
lean_object* v_a_3112_; lean_object* v___x_3114_; uint8_t v_isShared_3115_; uint8_t v_isSharedCheck_3119_; 
lean_dec(v_a_3108_);
v_a_3112_ = lean_ctor_get(v___x_3111_, 0);
v_isSharedCheck_3119_ = !lean_is_exclusive(v___x_3111_);
if (v_isSharedCheck_3119_ == 0)
{
v___x_3114_ = v___x_3111_;
v_isShared_3115_ = v_isSharedCheck_3119_;
goto v_resetjp_3113_;
}
else
{
lean_inc(v_a_3112_);
lean_dec(v___x_3111_);
v___x_3114_ = lean_box(0);
v_isShared_3115_ = v_isSharedCheck_3119_;
goto v_resetjp_3113_;
}
v_resetjp_3113_:
{
lean_object* v___x_3117_; 
if (v_isShared_3115_ == 0)
{
v___x_3117_ = v___x_3114_;
goto v_reusejp_3116_;
}
else
{
lean_object* v_reuseFailAlloc_3118_; 
v_reuseFailAlloc_3118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3118_, 0, v_a_3112_);
v___x_3117_ = v_reuseFailAlloc_3118_;
goto v_reusejp_3116_;
}
v_reusejp_3116_:
{
return v___x_3117_;
}
}
}
else
{
lean_object* v_a_3120_; lean_object* v___x_3122_; uint8_t v_isShared_3123_; uint8_t v_isSharedCheck_3128_; 
v_a_3120_ = lean_ctor_get(v___x_3111_, 0);
v_isSharedCheck_3128_ = !lean_is_exclusive(v___x_3111_);
if (v_isSharedCheck_3128_ == 0)
{
v___x_3122_ = v___x_3111_;
v_isShared_3123_ = v_isSharedCheck_3128_;
goto v_resetjp_3121_;
}
else
{
lean_inc(v_a_3120_);
lean_dec(v___x_3111_);
v___x_3122_ = lean_box(0);
v_isShared_3123_ = v_isSharedCheck_3128_;
goto v_resetjp_3121_;
}
v_resetjp_3121_:
{
lean_object* v___x_3124_; lean_object* v___x_3126_; 
v___x_3124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3124_, 0, v_a_3108_);
lean_ctor_set(v___x_3124_, 1, v_a_3120_);
if (v_isShared_3123_ == 0)
{
lean_ctor_set(v___x_3122_, 0, v___x_3124_);
v___x_3126_ = v___x_3122_;
goto v_reusejp_3125_;
}
else
{
lean_object* v_reuseFailAlloc_3127_; 
v_reuseFailAlloc_3127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3127_, 0, v___x_3124_);
v___x_3126_ = v_reuseFailAlloc_3127_;
goto v_reusejp_3125_;
}
v_reusejp_3125_:
{
return v___x_3126_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_fromJS_3089_);
lean_dec_ref(v_fromJS_3088_);
goto v___jp_3091_;
}
v___jp_3091_:
{
lean_object* v___x_3092_; 
v___x_3092_ = ((lean_object*)(l_Lasm_JS_instFromJSProd___redArg___lam__0___closed__1));
return v___x_3092_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSProd___redArg___lam__0___boxed(lean_object* v_fromJS_3129_, lean_object* v_fromJS_3130_, lean_object* v_x_3131_){
_start:
{
lean_object* v_res_3132_; 
v_res_3132_ = l_Lasm_JS_instFromJSProd___redArg___lam__0(v_fromJS_3129_, v_fromJS_3130_, v_x_3131_);
lean_dec(v_x_3131_);
return v_res_3132_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSProd___redArg(lean_object* v_inst_3135_, lean_object* v_inst_3136_){
_start:
{
lean_object* v_fromJS_3137_; lean_object* v_typeName_3138_; lean_object* v_fromJS_3139_; lean_object* v_typeName_3140_; lean_object* v___x_3142_; uint8_t v_isShared_3143_; uint8_t v_isSharedCheck_3156_; 
v_fromJS_3137_ = lean_ctor_get(v_inst_3135_, 0);
lean_inc_ref(v_fromJS_3137_);
v_typeName_3138_ = lean_ctor_get(v_inst_3135_, 1);
lean_inc_ref(v_typeName_3138_);
lean_dec_ref(v_inst_3135_);
v_fromJS_3139_ = lean_ctor_get(v_inst_3136_, 0);
v_typeName_3140_ = lean_ctor_get(v_inst_3136_, 1);
v_isSharedCheck_3156_ = !lean_is_exclusive(v_inst_3136_);
if (v_isSharedCheck_3156_ == 0)
{
v___x_3142_ = v_inst_3136_;
v_isShared_3143_ = v_isSharedCheck_3156_;
goto v_resetjp_3141_;
}
else
{
lean_inc(v_typeName_3140_);
lean_inc(v_fromJS_3139_);
lean_dec(v_inst_3136_);
v___x_3142_ = lean_box(0);
v_isShared_3143_ = v_isSharedCheck_3156_;
goto v_resetjp_3141_;
}
v_resetjp_3141_:
{
lean_object* v___f_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; uint8_t v___x_3152_; lean_object* v___x_3154_; 
v___f_3144_ = lean_alloc_closure((void*)(l_Lasm_JS_instFromJSProd___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3144_, 0, v_fromJS_3137_);
lean_closure_set(v___f_3144_, 1, v_fromJS_3139_);
v___x_3145_ = ((lean_object*)(l_Lasm_JS_instFromJSProd___redArg___closed__0));
v___x_3146_ = lean_string_append(v___x_3145_, v_typeName_3138_);
lean_dec_ref(v_typeName_3138_);
v___x_3147_ = ((lean_object*)(l_Lasm_JS_instFromJSProd___redArg___closed__1));
v___x_3148_ = lean_string_append(v___x_3146_, v___x_3147_);
v___x_3149_ = lean_string_append(v___x_3148_, v_typeName_3140_);
lean_dec_ref(v_typeName_3140_);
v___x_3150_ = ((lean_object*)(l_Lasm_JS_Wire_pushLength___closed__5));
v___x_3151_ = lean_string_append(v___x_3149_, v___x_3150_);
v___x_3152_ = 0;
if (v_isShared_3143_ == 0)
{
lean_ctor_set(v___x_3142_, 1, v___x_3151_);
lean_ctor_set(v___x_3142_, 0, v___f_3144_);
v___x_3154_ = v___x_3142_;
goto v_reusejp_3153_;
}
else
{
lean_object* v_reuseFailAlloc_3155_; 
v_reuseFailAlloc_3155_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_3155_, 0, v___f_3144_);
lean_ctor_set(v_reuseFailAlloc_3155_, 1, v___x_3151_);
v___x_3154_ = v_reuseFailAlloc_3155_;
goto v_reusejp_3153_;
}
v_reusejp_3153_:
{
lean_ctor_set_uint8(v___x_3154_, sizeof(void*)*2, v___x_3152_);
return v___x_3154_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSProd(lean_object* v_00_u03b1_3157_, lean_object* v_00_u03b2_3158_, lean_object* v_inst_3159_, lean_object* v_inst_3160_){
_start:
{
lean_object* v___x_3161_; 
v___x_3161_ = l_Lasm_JS_instFromJSProd___redArg(v_inst_3159_, v_inst_3160_);
return v___x_3161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_obj(lean_object* v_fields_3162_){
_start:
{
lean_object* v___x_3163_; lean_object* v___x_3164_; 
v___x_3163_ = lean_array_mk(v_fields_3162_);
v___x_3164_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_3164_, 0, v___x_3163_);
return v___x_3164_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___redArg(lean_object* v_inst_3171_, lean_object* v_d_3172_, lean_object* v_key_3173_){
_start:
{
if (lean_obj_tag(v_d_3172_) == 8)
{
lean_object* v_fromJS_3174_; lean_object* v_typeName_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; 
v_fromJS_3174_ = lean_ctor_get(v_inst_3171_, 0);
lean_inc_ref(v_fromJS_3174_);
v_typeName_3175_ = lean_ctor_get(v_inst_3171_, 1);
lean_inc_ref(v_typeName_3175_);
lean_dec_ref(v_inst_3171_);
v___x_3176_ = l_Lasm_JS_Data_field(v_d_3172_, v_key_3173_);
lean_inc(v___x_3176_);
v___x_3177_ = lean_apply_1(v_fromJS_3174_, v___x_3176_);
if (lean_obj_tag(v___x_3177_) == 0)
{
lean_object* v_a_3178_; lean_object* v___x_3180_; uint8_t v_isShared_3181_; uint8_t v_isSharedCheck_3205_; 
v_a_3178_ = lean_ctor_get(v___x_3177_, 0);
v_isSharedCheck_3205_ = !lean_is_exclusive(v___x_3177_);
if (v_isSharedCheck_3205_ == 0)
{
v___x_3180_ = v___x_3177_;
v_isShared_3181_ = v_isSharedCheck_3205_;
goto v_resetjp_3179_;
}
else
{
lean_inc(v_a_3178_);
lean_dec(v___x_3177_);
v___x_3180_ = lean_box(0);
v_isShared_3181_ = v_isSharedCheck_3205_;
goto v_resetjp_3179_;
}
v_resetjp_3179_:
{
lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; uint8_t v___x_3193_; 
v___x_3182_ = ((lean_object*)(l_Lasm_JS_readField___redArg___closed__0));
v___x_3183_ = lean_string_append(v___x_3182_, v_key_3173_);
v___x_3184_ = ((lean_object*)(l_Lasm_JS_readField___redArg___closed__1));
v___x_3185_ = lean_string_append(v___x_3183_, v___x_3184_);
v___x_3186_ = lean_string_append(v___x_3185_, v_typeName_3175_);
lean_dec_ref(v_typeName_3175_);
v___x_3187_ = ((lean_object*)(l_Lasm_JS_readField___redArg___closed__2));
v___x_3188_ = lean_string_append(v___x_3186_, v___x_3187_);
v___x_3189_ = l_Lasm_JS_Data_describe(v___x_3176_);
v___x_3190_ = lean_string_append(v___x_3188_, v___x_3189_);
lean_dec_ref(v___x_3189_);
v___x_3191_ = lean_string_utf8_byte_size(v_a_3178_);
v___x_3192_ = lean_unsigned_to_nat(0u);
v___x_3193_ = lean_nat_dec_eq(v___x_3191_, v___x_3192_);
if (v___x_3193_ == 0)
{
lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3200_; 
v___x_3194_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__3));
v___x_3195_ = lean_string_append(v___x_3194_, v_a_3178_);
lean_dec(v_a_3178_);
v___x_3196_ = ((lean_object*)(l_Lasm_JS_Wire_pushLength___closed__5));
v___x_3197_ = lean_string_append(v___x_3195_, v___x_3196_);
v___x_3198_ = lean_string_append(v___x_3190_, v___x_3197_);
lean_dec_ref(v___x_3197_);
if (v_isShared_3181_ == 0)
{
lean_ctor_set(v___x_3180_, 0, v___x_3198_);
v___x_3200_ = v___x_3180_;
goto v_reusejp_3199_;
}
else
{
lean_object* v_reuseFailAlloc_3201_; 
v_reuseFailAlloc_3201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3201_, 0, v___x_3198_);
v___x_3200_ = v_reuseFailAlloc_3201_;
goto v_reusejp_3199_;
}
v_reusejp_3199_:
{
return v___x_3200_;
}
}
else
{
lean_object* v___x_3203_; 
lean_dec(v_a_3178_);
if (v_isShared_3181_ == 0)
{
lean_ctor_set(v___x_3180_, 0, v___x_3190_);
v___x_3203_ = v___x_3180_;
goto v_reusejp_3202_;
}
else
{
lean_object* v_reuseFailAlloc_3204_; 
v_reuseFailAlloc_3204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3204_, 0, v___x_3190_);
v___x_3203_ = v_reuseFailAlloc_3204_;
goto v_reusejp_3202_;
}
v_reusejp_3202_:
{
return v___x_3203_;
}
}
}
}
else
{
lean_dec(v___x_3176_);
lean_dec_ref(v_typeName_3175_);
return v___x_3177_;
}
}
else
{
lean_object* v___x_3206_; 
lean_dec_ref(v_inst_3171_);
v___x_3206_ = ((lean_object*)(l_Lasm_JS_readField___redArg___closed__4));
return v___x_3206_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___redArg___boxed(lean_object* v_inst_3207_, lean_object* v_d_3208_, lean_object* v_key_3209_){
_start:
{
lean_object* v_res_3210_; 
v_res_3210_ = l_Lasm_JS_readField___redArg(v_inst_3207_, v_d_3208_, v_key_3209_);
lean_dec_ref(v_key_3209_);
lean_dec(v_d_3208_);
return v_res_3210_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField(lean_object* v_00_u03b1_3211_, lean_object* v_inst_3212_, lean_object* v_d_3213_, lean_object* v_key_3214_){
_start:
{
lean_object* v___x_3215_; 
v___x_3215_ = l_Lasm_JS_readField___redArg(v_inst_3212_, v_d_3213_, v_key_3214_);
return v___x_3215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___boxed(lean_object* v_00_u03b1_3216_, lean_object* v_inst_3217_, lean_object* v_d_3218_, lean_object* v_key_3219_){
_start:
{
lean_object* v_res_3220_; 
v_res_3220_ = l_Lasm_JS_readField(v_00_u03b1_3216_, v_inst_3217_, v_d_3218_, v_key_3219_);
lean_dec_ref(v_key_3219_);
lean_dec(v_d_3218_);
return v_res_3220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_ctorIdx___impl(lean_object* v_x_3221_){
_start:
{
lean_object* v___x_3222_; 
v___x_3222_ = lean_obj_tag_nat(v_x_3221_);
return v___x_3222_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_ctorIdx___impl___boxed(lean_object* v_x_3223_){
_start:
{
lean_object* v_res_3224_; 
v_res_3224_ = l_Lasm_JS_Function_Reply_ctorIdx___impl(v_x_3223_);
lean_dec_ref(v_x_3223_);
return v_res_3224_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_ctorElim___redArg(lean_object* v_t_3225_, lean_object* v_k_3226_){
_start:
{
if (lean_obj_tag(v_t_3225_) == 0)
{
lean_object* v_result_3227_; lean_object* v___x_3228_; 
v_result_3227_ = lean_ctor_get(v_t_3225_, 0);
lean_inc(v_result_3227_);
lean_dec_ref_known(v_t_3225_, 1);
v___x_3228_ = lean_apply_1(v_k_3226_, v_result_3227_);
return v___x_3228_;
}
else
{
lean_object* v_target_3229_; lean_object* v_name_3230_; lean_object* v_args_3231_; lean_object* v___x_3232_; 
v_target_3229_ = lean_ctor_get(v_t_3225_, 0);
lean_inc(v_target_3229_);
v_name_3230_ = lean_ctor_get(v_t_3225_, 1);
lean_inc_ref(v_name_3230_);
v_args_3231_ = lean_ctor_get(v_t_3225_, 2);
lean_inc_ref(v_args_3231_);
lean_dec_ref_known(v_t_3225_, 3);
v___x_3232_ = lean_apply_3(v_k_3226_, v_target_3229_, v_name_3230_, v_args_3231_);
return v___x_3232_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_ctorElim(lean_object* v_motive_3233_, lean_object* v_ctorIdx_3234_, lean_object* v_t_3235_, lean_object* v_h_3236_, lean_object* v_k_3237_){
_start:
{
lean_object* v___x_3238_; 
v___x_3238_ = l_Lasm_JS_Function_Reply_ctorElim___redArg(v_t_3235_, v_k_3237_);
return v___x_3238_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_ctorElim___boxed(lean_object* v_motive_3239_, lean_object* v_ctorIdx_3240_, lean_object* v_t_3241_, lean_object* v_h_3242_, lean_object* v_k_3243_){
_start:
{
lean_object* v_res_3244_; 
v_res_3244_ = l_Lasm_JS_Function_Reply_ctorElim(v_motive_3239_, v_ctorIdx_3240_, v_t_3241_, v_h_3242_, v_k_3243_);
lean_dec(v_ctorIdx_3240_);
return v_res_3244_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_value_elim___redArg(lean_object* v_t_3245_, lean_object* v_value_3246_){
_start:
{
lean_object* v___x_3247_; 
v___x_3247_ = l_Lasm_JS_Function_Reply_ctorElim___redArg(v_t_3245_, v_value_3246_);
return v___x_3247_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_value_elim(lean_object* v_motive_3248_, lean_object* v_t_3249_, lean_object* v_h_3250_, lean_object* v_value_3251_){
_start:
{
lean_object* v___x_3252_; 
v___x_3252_ = l_Lasm_JS_Function_Reply_ctorElim___redArg(v_t_3249_, v_value_3251_);
return v___x_3252_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_callMethod_elim___redArg(lean_object* v_t_3253_, lean_object* v_callMethod_3254_){
_start:
{
lean_object* v___x_3255_; 
v___x_3255_ = l_Lasm_JS_Function_Reply_ctorElim___redArg(v_t_3253_, v_callMethod_3254_);
return v___x_3255_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_callMethod_elim(lean_object* v_motive_3256_, lean_object* v_t_3257_, lean_object* v_h_3258_, lean_object* v_callMethod_3259_){
_start:
{
lean_object* v___x_3260_; 
v___x_3260_ = l_Lasm_JS_Function_Reply_ctorElim___redArg(v_t_3257_, v_callMethod_3259_);
return v___x_3260_;
}
}
static lean_object* _init_l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__0_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; 
v___x_3261_ = lean_box(0);
v___x_3262_ = lean_unsigned_to_nat(16u);
v___x_3263_ = lean_mk_array(v___x_3262_, v___x_3261_);
return v___x_3263_;
}
}
static lean_object* _init_l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__1_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; 
v___x_3264_ = lean_obj_once(&l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__0_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_, &l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__0_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__0_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_);
v___x_3265_ = lean_unsigned_to_nat(0u);
v___x_3266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3266_, 0, v___x_3265_);
lean_ctor_set(v___x_3266_, 1, v___x_3264_);
return v___x_3266_;
}
}
static lean_object* _init_l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__2_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3267_; uint32_t v___x_3268_; lean_object* v___x_3269_; 
v___x_3267_ = lean_obj_once(&l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__1_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_, &l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__1_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__1_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_);
v___x_3268_ = 1;
v___x_3269_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_3269_, 0, v___x_3267_);
lean_ctor_set(v___x_3269_, 1, v___x_3267_);
lean_ctor_set_uint32(v___x_3269_, sizeof(void*)*2, v___x_3268_);
return v___x_3269_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_initFn_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; 
v___x_3271_ = lean_obj_once(&l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__2_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_, &l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__2_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__2_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_);
v___x_3272_ = lean_st_mk_ref(v___x_3271_);
v___x_3273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3273_, 0, v___x_3272_);
return v___x_3273_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_initFn_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2____boxed(lean_object* v_a_3274_){
_start:
{
lean_object* v_res_3275_; 
v_res_3275_ = l___private_Lasm_JS_Core_0__Lasm_JS_initFn_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_();
return v_res_3275_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_startThread___boxed(lean_object* v_dispatch_3278_, lean_object* v_a_00___x40___internal___hyg_3279_){
_start:
{
lean_object* v_res_3280_; 
v_res_3280_ = lasm_js_start(v_dispatch_3278_);
return v_res_3280_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitInto___boxed(lean_object* v_p_3285_, lean_object* v_value_3286_, lean_object* v_keep_3287_, lean_object* v_a_00___x40___internal___hyg_3288_){
_start:
{
lean_object* v_res_3289_; 
v_res_3289_ = lasm_js_await_into(v_p_3285_, v_value_3286_, v_keep_3287_);
lean_dec(v_keep_3287_);
lean_dec_ref(v_value_3286_);
lean_dec(v_p_3285_);
return v_res_3289_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_park___boxed(lean_object* v_a_00___x40___internal___hyg_3291_){
_start:
{
lean_object* v_res_3292_; 
v_res_3292_ = lasm_js_park();
return v_res_3292_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_startSync___boxed(lean_object* v_dispatch_3295_, lean_object* v_a_00___x40___internal___hyg_3296_){
_start:
{
lean_object* v_res_3297_; 
v_res_3297_ = lasm_js_sync_start(v_dispatch_3295_);
return v_res_3297_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_errorText(lean_object* v_e_3298_){
_start:
{
lean_object* v___x_3299_; 
v___x_3299_ = lean_io_error_to_string(v_e_3298_);
return v___x_3299_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__0(lean_object* v_message_3300_){
_start:
{
uint8_t v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; 
v___x_3301_ = 1;
v___x_3302_ = lean_string_to_utf8(v_message_3300_);
v___x_3303_ = lean_box(0);
v___x_3304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3304_, 0, v___x_3302_);
lean_ctor_set(v___x_3304_, 1, v___x_3303_);
v___x_3305_ = lean_box(v___x_3301_);
v___x_3306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3306_, 0, v___x_3305_);
lean_ctor_set(v___x_3306_, 1, v___x_3304_);
return v___x_3306_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__1(uint64_t v_call_3307_, uint8_t v_status_3308_){
_start:
{
lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; 
v___x_3309_ = l_ByteArray_empty;
v___x_3310_ = l_Lasm_JS_Wire_pushU64(v___x_3309_, v_call_3307_);
v___x_3311_ = lean_byte_array_push(v___x_3310_, v_status_3308_);
return v___x_3311_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__1___boxed(lean_object* v_call_3312_, lean_object* v_status_3313_){
_start:
{
uint64_t v_call_boxed_3314_; uint8_t v_status_boxed_3315_; lean_object* v_res_3316_; 
v_call_boxed_3314_ = lean_unbox_uint64(v_call_3312_);
lean_dec_ref(v_call_3312_);
v_status_boxed_3315_ = lean_unbox(v_status_3313_);
v_res_3316_ = l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__1(v_call_boxed_3314_, v_status_boxed_3315_);
return v_res_3316_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__2(lean_object* v_failure_3317_, uint8_t v_status_3318_, lean_object* v_d_3319_){
_start:
{
lean_object* v___x_3320_; 
lean_inc(v_d_3319_);
v___x_3320_ = l_Lasm_JS_Wire_encode(v_d_3319_);
if (lean_obj_tag(v___x_3320_) == 0)
{
lean_object* v_a_3321_; lean_object* v___x_3322_; 
lean_dec(v_d_3319_);
v_a_3321_ = lean_ctor_get(v___x_3320_, 0);
lean_inc(v_a_3321_);
lean_dec_ref_known(v___x_3320_, 1);
v___x_3322_ = lean_apply_1(v_failure_3317_, v_a_3321_);
return v___x_3322_;
}
else
{
lean_object* v_a_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; 
lean_dec_ref(v_failure_3317_);
v_a_3323_ = lean_ctor_get(v___x_3320_, 0);
lean_inc(v_a_3323_);
lean_dec_ref_known(v___x_3320_, 1);
v___x_3324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3324_, 0, v_a_3323_);
lean_ctor_set(v___x_3324_, 1, v_d_3319_);
v___x_3325_ = lean_box(v_status_3318_);
v___x_3326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3326_, 0, v___x_3325_);
lean_ctor_set(v___x_3326_, 1, v___x_3324_);
return v___x_3326_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__2___boxed(lean_object* v_failure_3327_, lean_object* v_status_3328_, lean_object* v_d_3329_){
_start:
{
uint8_t v_status_boxed_3330_; lean_object* v_res_3331_; 
v_status_boxed_3330_ = lean_unbox(v_status_3328_);
v_res_3331_ = l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__2(v_failure_3327_, v_status_boxed_3330_, v_d_3329_);
return v_res_3331_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply(uint64_t v_call_3334_, lean_object* v_result_3335_){
_start:
{
lean_object* v_fst_3338_; lean_object* v_fst_3339_; lean_object* v_snd_3340_; lean_object* v_failure_3367_; lean_object* v___y_3369_; 
v_failure_3367_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_reply___closed__0));
if (lean_obj_tag(v_result_3335_) == 0)
{
lean_object* v_a_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; 
v_a_3389_ = lean_ctor_get(v_result_3335_, 0);
lean_inc(v_a_3389_);
lean_dec_ref_known(v_result_3335_, 1);
v___x_3390_ = lean_io_error_to_string(v_a_3389_);
v___x_3391_ = l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__0(v___x_3390_);
v___y_3369_ = v___x_3391_;
goto v___jp_3368_;
}
else
{
lean_object* v_a_3392_; lean_object* v___x_3394_; uint8_t v_isShared_3395_; uint8_t v_isSharedCheck_3416_; 
v_a_3392_ = lean_ctor_get(v_result_3335_, 0);
v_isSharedCheck_3416_ = !lean_is_exclusive(v_result_3335_);
if (v_isSharedCheck_3416_ == 0)
{
v___x_3394_ = v_result_3335_;
v_isShared_3395_ = v_isSharedCheck_3416_;
goto v_resetjp_3393_;
}
else
{
lean_inc(v_a_3392_);
lean_dec(v_result_3335_);
v___x_3394_ = lean_box(0);
v_isShared_3395_ = v_isSharedCheck_3416_;
goto v_resetjp_3393_;
}
v_resetjp_3393_:
{
if (lean_obj_tag(v_a_3392_) == 0)
{
lean_object* v_result_3396_; uint8_t v___x_3397_; lean_object* v___x_3398_; 
lean_del_object(v___x_3394_);
v_result_3396_ = lean_ctor_get(v_a_3392_, 0);
lean_inc(v_result_3396_);
lean_dec_ref_known(v_a_3392_, 1);
v___x_3397_ = 0;
v___x_3398_ = l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__2(v_failure_3367_, v___x_3397_, v_result_3396_);
v___y_3369_ = v___x_3398_;
goto v___jp_3368_;
}
else
{
lean_object* v_target_3399_; lean_object* v_name_3400_; lean_object* v_args_3401_; uint8_t v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3406_; 
v_target_3399_ = lean_ctor_get(v_a_3392_, 0);
lean_inc(v_target_3399_);
v_name_3400_ = lean_ctor_get(v_a_3392_, 1);
lean_inc_ref(v_name_3400_);
v_args_3401_ = lean_ctor_get(v_a_3392_, 2);
lean_inc_ref(v_args_3401_);
lean_dec_ref_known(v_a_3392_, 3);
v___x_3402_ = 2;
v___x_3403_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___x_3404_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3404_, 0, v_target_3399_);
lean_ctor_set(v___x_3404_, 1, v___x_3403_);
if (v_isShared_3395_ == 0)
{
lean_ctor_set_tag(v___x_3394_, 4);
lean_ctor_set(v___x_3394_, 0, v_name_3400_);
v___x_3406_ = v___x_3394_;
goto v_reusejp_3405_;
}
else
{
lean_object* v_reuseFailAlloc_3415_; 
v_reuseFailAlloc_3415_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3415_, 0, v_name_3400_);
v___x_3406_ = v_reuseFailAlloc_3415_;
goto v_reusejp_3405_;
}
v_reusejp_3405_:
{
lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; 
v___x_3407_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3407_, 0, v_args_3401_);
v___x_3408_ = lean_unsigned_to_nat(3u);
v___x_3409_ = lean_mk_empty_array_with_capacity(v___x_3408_);
v___x_3410_ = lean_array_push(v___x_3409_, v___x_3404_);
v___x_3411_ = lean_array_push(v___x_3410_, v___x_3406_);
v___x_3412_ = lean_array_push(v___x_3411_, v___x_3407_);
v___x_3413_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3413_, 0, v___x_3412_);
v___x_3414_ = l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__2(v_failure_3367_, v___x_3402_, v___x_3413_);
v___y_3369_ = v___x_3414_;
goto v___jp_3368_;
}
}
}
}
v___jp_3337_:
{
uint32_t v___x_3341_; uint32_t v___x_3342_; uint64_t v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; uint8_t v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; 
v___x_3341_ = 208;
v___x_3342_ = 0;
v___x_3343_ = 0ULL;
v___x_3344_ = lean_unsigned_to_nat(0u);
v___x_3345_ = lean_byte_array_size(v_fst_3338_);
v___x_3346_ = lean_byte_array_size(v_fst_3339_);
v___x_3347_ = 0;
v___x_3348_ = lean_byte_array_copy_slice(v_fst_3339_, v___x_3344_, v_fst_3338_, v___x_3345_, v___x_3346_, v___x_3347_);
lean_dec_ref(v_fst_3339_);
v___x_3349_ = lean_box(0);
v___x_3350_ = lasm_js_call(v___x_3341_, v___x_3342_, v___x_3343_, v___x_3348_, v_snd_3340_);
lean_dec(v_snd_3340_);
lean_dec_ref(v___x_3348_);
if (lean_obj_tag(v___x_3350_) == 0)
{
lean_object* v___x_3352_; uint8_t v_isShared_3353_; uint8_t v_isSharedCheck_3357_; 
v_isSharedCheck_3357_ = !lean_is_exclusive(v___x_3350_);
if (v_isSharedCheck_3357_ == 0)
{
lean_object* v_unused_3358_; 
v_unused_3358_ = lean_ctor_get(v___x_3350_, 0);
lean_dec(v_unused_3358_);
v___x_3352_ = v___x_3350_;
v_isShared_3353_ = v_isSharedCheck_3357_;
goto v_resetjp_3351_;
}
else
{
lean_dec(v___x_3350_);
v___x_3352_ = lean_box(0);
v_isShared_3353_ = v_isSharedCheck_3357_;
goto v_resetjp_3351_;
}
v_resetjp_3351_:
{
lean_object* v___x_3355_; 
if (v_isShared_3353_ == 0)
{
lean_ctor_set(v___x_3352_, 0, v___x_3349_);
v___x_3355_ = v___x_3352_;
goto v_reusejp_3354_;
}
else
{
lean_object* v_reuseFailAlloc_3356_; 
v_reuseFailAlloc_3356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3356_, 0, v___x_3349_);
v___x_3355_ = v_reuseFailAlloc_3356_;
goto v_reusejp_3354_;
}
v_reusejp_3354_:
{
return v___x_3355_;
}
}
}
else
{
lean_object* v_a_3359_; lean_object* v___x_3361_; uint8_t v_isShared_3362_; uint8_t v_isSharedCheck_3366_; 
v_a_3359_ = lean_ctor_get(v___x_3350_, 0);
v_isSharedCheck_3366_ = !lean_is_exclusive(v___x_3350_);
if (v_isSharedCheck_3366_ == 0)
{
v___x_3361_ = v___x_3350_;
v_isShared_3362_ = v_isSharedCheck_3366_;
goto v_resetjp_3360_;
}
else
{
lean_inc(v_a_3359_);
lean_dec(v___x_3350_);
v___x_3361_ = lean_box(0);
v_isShared_3362_ = v_isSharedCheck_3366_;
goto v_resetjp_3360_;
}
v_resetjp_3360_:
{
lean_object* v___x_3364_; 
if (v_isShared_3362_ == 0)
{
v___x_3364_ = v___x_3361_;
goto v_reusejp_3363_;
}
else
{
lean_object* v_reuseFailAlloc_3365_; 
v_reuseFailAlloc_3365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3365_, 0, v_a_3359_);
v___x_3364_ = v_reuseFailAlloc_3365_;
goto v_reusejp_3363_;
}
v_reusejp_3363_:
{
return v___x_3364_;
}
}
}
}
v___jp_3368_:
{
lean_object* v_snd_3370_; lean_object* v_fst_3371_; lean_object* v_fst_3372_; lean_object* v_snd_3373_; uint8_t v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; 
v_snd_3370_ = lean_ctor_get(v___y_3369_, 1);
lean_inc(v_snd_3370_);
v_fst_3371_ = lean_ctor_get(v___y_3369_, 0);
lean_inc(v_fst_3371_);
lean_dec_ref(v___y_3369_);
v_fst_3372_ = lean_ctor_get(v_snd_3370_, 0);
lean_inc(v_fst_3372_);
v_snd_3373_ = lean_ctor_get(v_snd_3370_, 1);
lean_inc(v_snd_3373_);
lean_dec(v_snd_3370_);
v___x_3374_ = lean_unbox(v_fst_3371_);
lean_dec(v_fst_3371_);
v___x_3375_ = l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__1(v_call_3334_, v___x_3374_);
v___x_3376_ = lean_byte_array_size(v_fst_3372_);
v___x_3377_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_reply___closed__1));
v___x_3378_ = ((lean_object*)(l_Lasm_JS_Wire_pushString___closed__0));
v___x_3379_ = l_Lasm_JS_Wire_pushLength(v___x_3375_, v___x_3376_, v___x_3377_, v___x_3378_);
if (lean_obj_tag(v___x_3379_) == 0)
{
lean_object* v_a_3380_; uint8_t v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; uint32_t v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; 
lean_dec(v_snd_3373_);
lean_dec(v_fst_3372_);
v_a_3380_ = lean_ctor_get(v___x_3379_, 0);
lean_inc(v_a_3380_);
lean_dec_ref_known(v___x_3379_, 1);
v___x_3381_ = 1;
v___x_3382_ = l___private_Lasm_JS_Core_0__Lasm_JS_reply___lam__1(v_call_3334_, v___x_3381_);
v___x_3383_ = lean_string_utf8_byte_size(v_a_3380_);
v___x_3384_ = lean_uint32_of_nat(v___x_3383_);
v___x_3385_ = l_Lasm_JS_Wire_pushU32(v___x_3382_, v___x_3384_);
v___x_3386_ = lean_string_to_utf8(v_a_3380_);
v___x_3387_ = lean_box(0);
v_fst_3338_ = v___x_3385_;
v_fst_3339_ = v___x_3386_;
v_snd_3340_ = v___x_3387_;
goto v___jp_3337_;
}
else
{
lean_object* v_a_3388_; 
v_a_3388_ = lean_ctor_get(v___x_3379_, 0);
lean_inc(v_a_3388_);
lean_dec_ref_known(v___x_3379_, 1);
v_fst_3338_ = v_a_3388_;
v_fst_3339_ = v_fst_3372_;
v_snd_3340_ = v_snd_3373_;
goto v___jp_3337_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply___boxed(lean_object* v_call_3417_, lean_object* v_result_3418_, lean_object* v_a_3419_){
_start:
{
uint64_t v_call_boxed_3420_; lean_object* v_res_3421_; 
v_call_boxed_3420_ = lean_unbox_uint64(v_call_3417_);
lean_dec_ref(v_call_3417_);
v_res_3421_ = l___private_Lasm_JS_Core_0__Lasm_JS_reply(v_call_boxed_3420_, v_result_3418_);
return v_res_3421_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_argsOf(lean_object* v_bytes_3422_){
_start:
{
lean_object* v___x_3424_; 
v___x_3424_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3422_);
if (lean_obj_tag(v___x_3424_) == 0)
{
lean_object* v_a_3425_; lean_object* v___x_3427_; uint8_t v_isShared_3428_; uint8_t v_isSharedCheck_3439_; 
v_a_3425_ = lean_ctor_get(v___x_3424_, 0);
v_isSharedCheck_3439_ = !lean_is_exclusive(v___x_3424_);
if (v_isSharedCheck_3439_ == 0)
{
v___x_3427_ = v___x_3424_;
v_isShared_3428_ = v_isSharedCheck_3439_;
goto v_resetjp_3426_;
}
else
{
lean_inc(v_a_3425_);
lean_dec(v___x_3424_);
v___x_3427_ = lean_box(0);
v_isShared_3428_ = v_isSharedCheck_3439_;
goto v_resetjp_3426_;
}
v_resetjp_3426_:
{
if (lean_obj_tag(v_a_3425_) == 7)
{
lean_object* v_items_3429_; lean_object* v___x_3431_; 
v_items_3429_ = lean_ctor_get(v_a_3425_, 0);
lean_inc_ref(v_items_3429_);
lean_dec_ref_known(v_a_3425_, 1);
if (v_isShared_3428_ == 0)
{
lean_ctor_set(v___x_3427_, 0, v_items_3429_);
v___x_3431_ = v___x_3427_;
goto v_reusejp_3430_;
}
else
{
lean_object* v_reuseFailAlloc_3432_; 
v_reuseFailAlloc_3432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3432_, 0, v_items_3429_);
v___x_3431_ = v_reuseFailAlloc_3432_;
goto v_reusejp_3430_;
}
v_reusejp_3430_:
{
return v___x_3431_;
}
}
else
{
lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3437_; 
v___x_3433_ = lean_unsigned_to_nat(1u);
v___x_3434_ = lean_mk_empty_array_with_capacity(v___x_3433_);
v___x_3435_ = lean_array_push(v___x_3434_, v_a_3425_);
if (v_isShared_3428_ == 0)
{
lean_ctor_set(v___x_3427_, 0, v___x_3435_);
v___x_3437_ = v___x_3427_;
goto v_reusejp_3436_;
}
else
{
lean_object* v_reuseFailAlloc_3438_; 
v_reuseFailAlloc_3438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3438_, 0, v___x_3435_);
v___x_3437_ = v_reuseFailAlloc_3438_;
goto v_reusejp_3436_;
}
v_reusejp_3436_:
{
return v___x_3437_;
}
}
}
}
else
{
lean_object* v_a_3440_; lean_object* v___x_3442_; uint8_t v_isShared_3443_; uint8_t v_isSharedCheck_3447_; 
v_a_3440_ = lean_ctor_get(v___x_3424_, 0);
v_isSharedCheck_3447_ = !lean_is_exclusive(v___x_3424_);
if (v_isSharedCheck_3447_ == 0)
{
v___x_3442_ = v___x_3424_;
v_isShared_3443_ = v_isSharedCheck_3447_;
goto v_resetjp_3441_;
}
else
{
lean_inc(v_a_3440_);
lean_dec(v___x_3424_);
v___x_3442_ = lean_box(0);
v_isShared_3443_ = v_isSharedCheck_3447_;
goto v_resetjp_3441_;
}
v_resetjp_3441_:
{
lean_object* v___x_3445_; 
if (v_isShared_3443_ == 0)
{
v___x_3445_ = v___x_3442_;
goto v_reusejp_3444_;
}
else
{
lean_object* v_reuseFailAlloc_3446_; 
v_reuseFailAlloc_3446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3446_, 0, v_a_3440_);
v___x_3445_ = v_reuseFailAlloc_3446_;
goto v_reusejp_3444_;
}
v_reusejp_3444_:
{
return v___x_3445_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_argsOf___boxed(lean_object* v_bytes_3448_, lean_object* v_a_3449_){
_start:
{
lean_object* v_res_3450_; 
v_res_3450_ = l___private_Lasm_JS_Core_0__Lasm_JS_argsOf(v_bytes_3448_);
lean_dec_ref(v_bytes_3448_);
return v_res_3450_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__0(lean_object* v_f_3451_, lean_object* v_x_3452_){
_start:
{
if (lean_obj_tag(v_x_3452_) == 0)
{
lean_object* v_a_3454_; lean_object* v___x_3456_; uint8_t v_isShared_3457_; uint8_t v_isSharedCheck_3462_; 
lean_dec_ref(v_f_3451_);
v_a_3454_ = lean_ctor_get(v_x_3452_, 0);
v_isSharedCheck_3462_ = !lean_is_exclusive(v_x_3452_);
if (v_isSharedCheck_3462_ == 0)
{
v___x_3456_ = v_x_3452_;
v_isShared_3457_ = v_isSharedCheck_3462_;
goto v_resetjp_3455_;
}
else
{
lean_inc(v_a_3454_);
lean_dec(v_x_3452_);
v___x_3456_ = lean_box(0);
v_isShared_3457_ = v_isSharedCheck_3462_;
goto v_resetjp_3455_;
}
v_resetjp_3455_:
{
lean_object* v___x_3459_; 
if (v_isShared_3457_ == 0)
{
v___x_3459_ = v___x_3456_;
goto v_reusejp_3458_;
}
else
{
lean_object* v_reuseFailAlloc_3461_; 
v_reuseFailAlloc_3461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3461_, 0, v_a_3454_);
v___x_3459_ = v_reuseFailAlloc_3461_;
goto v_reusejp_3458_;
}
v_reusejp_3458_:
{
lean_object* v___x_3460_; 
v___x_3460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3460_, 0, v___x_3459_);
return v___x_3460_;
}
}
}
else
{
lean_object* v_a_3463_; lean_object* v___x_3464_; 
v_a_3463_ = lean_ctor_get(v_x_3452_, 0);
lean_inc(v_a_3463_);
lean_dec_ref_known(v_x_3452_, 1);
v___x_3464_ = lean_apply_2(v_f_3451_, v_a_3463_, lean_box(0));
return v___x_3464_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__0___boxed(lean_object* v_f_3465_, lean_object* v_x_3466_, lean_object* v___y_3467_){
_start:
{
lean_object* v_res_3468_; 
v_res_3468_ = l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__0(v_f_3465_, v_x_3466_);
return v_res_3468_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__1(uint64_t v_call_3469_, lean_object* v_result_3470_){
_start:
{
lean_object* v___x_3472_; lean_object* v___x_3473_; 
v___x_3472_ = lean_box(0);
v___x_3473_ = l___private_Lasm_JS_Core_0__Lasm_JS_reply(v_call_3469_, v_result_3470_);
lean_dec_ref(v___x_3473_);
return v___x_3472_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__1___boxed(lean_object* v_call_3474_, lean_object* v_result_3475_, lean_object* v___y_3476_){
_start:
{
uint64_t v_call_boxed_3477_; lean_object* v_res_3478_; 
v_call_boxed_3477_ = lean_unbox_uint64(v_call_3474_);
lean_dec_ref(v_call_3474_);
v_res_3478_ = l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__1(v_call_boxed_3477_, v_result_3475_);
return v_res_3478_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_runCall(uint64_t v_call_3479_, lean_object* v_f_3480_, lean_object* v_bytes_3481_){
_start:
{
lean_object* v___f_3483_; lean_object* v___x_3484_; lean_object* v___f_3485_; lean_object* v___x_3486_; uint8_t v___x_3487_; lean_object* v_val_3489_; lean_object* v___x_3498_; 
v___f_3483_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3483_, 0, v_f_3480_);
v___x_3484_ = lean_box_uint64(v_call_3479_);
v___f_3485_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3485_, 0, v___x_3484_);
v___x_3486_ = lean_unsigned_to_nat(0u);
v___x_3487_ = 0;
v___x_3498_ = l___private_Lasm_JS_Core_0__Lasm_JS_argsOf(v_bytes_3481_);
if (lean_obj_tag(v___x_3498_) == 0)
{
lean_object* v_a_3499_; lean_object* v___x_3501_; uint8_t v_isShared_3502_; uint8_t v_isSharedCheck_3506_; 
v_a_3499_ = lean_ctor_get(v___x_3498_, 0);
v_isSharedCheck_3506_ = !lean_is_exclusive(v___x_3498_);
if (v_isSharedCheck_3506_ == 0)
{
v___x_3501_ = v___x_3498_;
v_isShared_3502_ = v_isSharedCheck_3506_;
goto v_resetjp_3500_;
}
else
{
lean_inc(v_a_3499_);
lean_dec(v___x_3498_);
v___x_3501_ = lean_box(0);
v_isShared_3502_ = v_isSharedCheck_3506_;
goto v_resetjp_3500_;
}
v_resetjp_3500_:
{
lean_object* v___x_3504_; 
if (v_isShared_3502_ == 0)
{
lean_ctor_set_tag(v___x_3501_, 1);
v___x_3504_ = v___x_3501_;
goto v_reusejp_3503_;
}
else
{
lean_object* v_reuseFailAlloc_3505_; 
v_reuseFailAlloc_3505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3505_, 0, v_a_3499_);
v___x_3504_ = v_reuseFailAlloc_3505_;
goto v_reusejp_3503_;
}
v_reusejp_3503_:
{
v_val_3489_ = v___x_3504_;
goto v___jp_3488_;
}
}
}
else
{
lean_object* v_a_3507_; lean_object* v___x_3509_; uint8_t v_isShared_3510_; uint8_t v_isSharedCheck_3514_; 
v_a_3507_ = lean_ctor_get(v___x_3498_, 0);
v_isSharedCheck_3514_ = !lean_is_exclusive(v___x_3498_);
if (v_isSharedCheck_3514_ == 0)
{
v___x_3509_ = v___x_3498_;
v_isShared_3510_ = v_isSharedCheck_3514_;
goto v_resetjp_3508_;
}
else
{
lean_inc(v_a_3507_);
lean_dec(v___x_3498_);
v___x_3509_ = lean_box(0);
v_isShared_3510_ = v_isSharedCheck_3514_;
goto v_resetjp_3508_;
}
v_resetjp_3508_:
{
lean_object* v___x_3512_; 
if (v_isShared_3510_ == 0)
{
lean_ctor_set_tag(v___x_3509_, 0);
v___x_3512_ = v___x_3509_;
goto v_reusejp_3511_;
}
else
{
lean_object* v_reuseFailAlloc_3513_; 
v_reuseFailAlloc_3513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3513_, 0, v_a_3507_);
v___x_3512_ = v_reuseFailAlloc_3513_;
goto v_reusejp_3511_;
}
v_reusejp_3511_:
{
v_val_3489_ = v___x_3512_;
goto v___jp_3488_;
}
}
}
v___jp_3488_:
{
lean_object* v___x_3490_; lean_object* v___x_3491_; 
v___x_3490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3490_, 0, v_val_3489_);
v___x_3491_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3486_, v___x_3487_, v___x_3490_, v___f_3483_);
if (lean_obj_tag(v___x_3491_) == 0)
{
lean_object* v_a_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; 
lean_dec_ref(v___f_3485_);
v_a_3492_ = lean_ctor_get(v___x_3491_, 0);
lean_inc(v_a_3492_);
lean_dec_ref_known(v___x_3491_, 1);
v___x_3493_ = lean_box(0);
v___x_3494_ = l___private_Lasm_JS_Core_0__Lasm_JS_reply(v_call_3479_, v_a_3492_);
lean_dec_ref(v___x_3494_);
return v___x_3493_;
}
else
{
lean_object* v_a_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; 
v_a_3495_ = lean_ctor_get(v___x_3491_, 0);
lean_inc_ref(v_a_3495_);
lean_dec_ref_known(v___x_3491_, 1);
v___x_3496_ = lean_box(0);
v___x_3497_ = lean_io_map_task(v___f_3485_, v_a_3495_, v___x_3486_, v___x_3487_);
lean_dec_ref(v___x_3497_);
return v___x_3496_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_runCall___boxed(lean_object* v_call_3515_, lean_object* v_f_3516_, lean_object* v_bytes_3517_, lean_object* v_a_3518_){
_start:
{
uint64_t v_call_boxed_3519_; lean_object* v_res_3520_; 
v_call_boxed_3519_ = lean_unbox_uint64(v_call_3515_);
lean_dec_ref(v_call_3515_);
v_res_3520_ = l___private_Lasm_JS_Core_0__Lasm_JS_runCall(v_call_boxed_3519_, v_f_3516_, v_bytes_3517_);
lean_dec_ref(v_bytes_3517_);
return v_res_3520_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2___redArg(uint32_t v_a_3521_, lean_object* v_x_3522_){
_start:
{
if (lean_obj_tag(v_x_3522_) == 0)
{
uint8_t v___x_3523_; 
v___x_3523_ = 0;
return v___x_3523_;
}
else
{
lean_object* v_key_3524_; lean_object* v_tail_3525_; uint32_t v___x_3526_; uint8_t v___x_3527_; 
v_key_3524_ = lean_ctor_get(v_x_3522_, 0);
v_tail_3525_ = lean_ctor_get(v_x_3522_, 2);
v___x_3526_ = lean_unbox_uint32(v_key_3524_);
v___x_3527_ = lean_uint32_dec_eq(v___x_3526_, v_a_3521_);
if (v___x_3527_ == 0)
{
v_x_3522_ = v_tail_3525_;
goto _start;
}
else
{
return v___x_3527_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2___redArg___boxed(lean_object* v_a_3529_, lean_object* v_x_3530_){
_start:
{
uint32_t v_a_boxed_3531_; uint8_t v_res_3532_; lean_object* v_r_3533_; 
v_a_boxed_3531_ = lean_unbox_uint32(v_a_3529_);
lean_dec(v_a_3529_);
v_res_3532_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2___redArg(v_a_boxed_3531_, v_x_3530_);
lean_dec(v_x_3530_);
v_r_3533_ = lean_box(v_res_3532_);
return v_r_3533_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3___redArg(uint32_t v_a_3534_, lean_object* v_x_3535_){
_start:
{
if (lean_obj_tag(v_x_3535_) == 0)
{
return v_x_3535_;
}
else
{
lean_object* v_key_3536_; lean_object* v_value_3537_; lean_object* v_tail_3538_; lean_object* v___x_3540_; uint8_t v_isShared_3541_; uint8_t v_isSharedCheck_3548_; 
v_key_3536_ = lean_ctor_get(v_x_3535_, 0);
v_value_3537_ = lean_ctor_get(v_x_3535_, 1);
v_tail_3538_ = lean_ctor_get(v_x_3535_, 2);
v_isSharedCheck_3548_ = !lean_is_exclusive(v_x_3535_);
if (v_isSharedCheck_3548_ == 0)
{
v___x_3540_ = v_x_3535_;
v_isShared_3541_ = v_isSharedCheck_3548_;
goto v_resetjp_3539_;
}
else
{
lean_inc(v_tail_3538_);
lean_inc(v_value_3537_);
lean_inc(v_key_3536_);
lean_dec(v_x_3535_);
v___x_3540_ = lean_box(0);
v_isShared_3541_ = v_isSharedCheck_3548_;
goto v_resetjp_3539_;
}
v_resetjp_3539_:
{
uint32_t v___x_3542_; uint8_t v___x_3543_; 
v___x_3542_ = lean_unbox_uint32(v_key_3536_);
v___x_3543_ = lean_uint32_dec_eq(v___x_3542_, v_a_3534_);
if (v___x_3543_ == 0)
{
lean_object* v___x_3544_; lean_object* v___x_3546_; 
v___x_3544_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3___redArg(v_a_3534_, v_tail_3538_);
if (v_isShared_3541_ == 0)
{
lean_ctor_set(v___x_3540_, 2, v___x_3544_);
v___x_3546_ = v___x_3540_;
goto v_reusejp_3545_;
}
else
{
lean_object* v_reuseFailAlloc_3547_; 
v_reuseFailAlloc_3547_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3547_, 0, v_key_3536_);
lean_ctor_set(v_reuseFailAlloc_3547_, 1, v_value_3537_);
lean_ctor_set(v_reuseFailAlloc_3547_, 2, v___x_3544_);
v___x_3546_ = v_reuseFailAlloc_3547_;
goto v_reusejp_3545_;
}
v_reusejp_3545_:
{
return v___x_3546_;
}
}
else
{
lean_del_object(v___x_3540_);
lean_dec(v_value_3537_);
lean_dec(v_key_3536_);
return v_tail_3538_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3___redArg___boxed(lean_object* v_a_3549_, lean_object* v_x_3550_){
_start:
{
uint32_t v_a_boxed_3551_; lean_object* v_res_3552_; 
v_a_boxed_3551_ = lean_unbox_uint32(v_a_3549_);
lean_dec(v_a_3549_);
v_res_3552_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3___redArg(v_a_boxed_3551_, v_x_3550_);
return v_res_3552_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1___redArg(lean_object* v_m_3553_, uint32_t v_a_3554_){
_start:
{
lean_object* v_size_3555_; lean_object* v_buckets_3556_; lean_object* v___x_3557_; uint64_t v___x_3558_; uint64_t v___x_3559_; uint64_t v___x_3560_; uint64_t v_fold_3561_; uint64_t v___x_3562_; uint64_t v___x_3563_; uint64_t v___x_3564_; size_t v___x_3565_; size_t v___x_3566_; size_t v___x_3567_; size_t v___x_3568_; size_t v___x_3569_; lean_object* v_bkt_3570_; uint8_t v___x_3571_; 
v_size_3555_ = lean_ctor_get(v_m_3553_, 0);
v_buckets_3556_ = lean_ctor_get(v_m_3553_, 1);
v___x_3557_ = lean_array_get_size(v_buckets_3556_);
v___x_3558_ = lean_uint32_to_uint64(v_a_3554_);
v___x_3559_ = 32ULL;
v___x_3560_ = lean_uint64_shift_right(v___x_3558_, v___x_3559_);
v_fold_3561_ = lean_uint64_xor(v___x_3558_, v___x_3560_);
v___x_3562_ = 16ULL;
v___x_3563_ = lean_uint64_shift_right(v_fold_3561_, v___x_3562_);
v___x_3564_ = lean_uint64_xor(v_fold_3561_, v___x_3563_);
v___x_3565_ = lean_uint64_to_usize(v___x_3564_);
v___x_3566_ = lean_usize_of_nat(v___x_3557_);
v___x_3567_ = ((size_t)1ULL);
v___x_3568_ = lean_usize_sub(v___x_3566_, v___x_3567_);
v___x_3569_ = lean_usize_land(v___x_3565_, v___x_3568_);
v_bkt_3570_ = lean_array_uget_borrowed(v_buckets_3556_, v___x_3569_);
v___x_3571_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2___redArg(v_a_3554_, v_bkt_3570_);
if (v___x_3571_ == 0)
{
return v_m_3553_;
}
else
{
lean_object* v___x_3573_; uint8_t v_isShared_3574_; uint8_t v_isSharedCheck_3584_; 
lean_inc(v_bkt_3570_);
lean_inc_ref(v_buckets_3556_);
lean_inc(v_size_3555_);
v_isSharedCheck_3584_ = !lean_is_exclusive(v_m_3553_);
if (v_isSharedCheck_3584_ == 0)
{
lean_object* v_unused_3585_; lean_object* v_unused_3586_; 
v_unused_3585_ = lean_ctor_get(v_m_3553_, 1);
lean_dec(v_unused_3585_);
v_unused_3586_ = lean_ctor_get(v_m_3553_, 0);
lean_dec(v_unused_3586_);
v___x_3573_ = v_m_3553_;
v_isShared_3574_ = v_isSharedCheck_3584_;
goto v_resetjp_3572_;
}
else
{
lean_dec(v_m_3553_);
v___x_3573_ = lean_box(0);
v_isShared_3574_ = v_isSharedCheck_3584_;
goto v_resetjp_3572_;
}
v_resetjp_3572_:
{
lean_object* v___x_3575_; lean_object* v_buckets_x27_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3582_; 
v___x_3575_ = lean_box(0);
v_buckets_x27_3576_ = lean_array_uset(v_buckets_3556_, v___x_3569_, v___x_3575_);
v___x_3577_ = lean_unsigned_to_nat(1u);
v___x_3578_ = lean_nat_sub(v_size_3555_, v___x_3577_);
lean_dec(v_size_3555_);
v___x_3579_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3___redArg(v_a_3554_, v_bkt_3570_);
v___x_3580_ = lean_array_uset(v_buckets_x27_3576_, v___x_3569_, v___x_3579_);
if (v_isShared_3574_ == 0)
{
lean_ctor_set(v___x_3573_, 1, v___x_3580_);
lean_ctor_set(v___x_3573_, 0, v___x_3578_);
v___x_3582_ = v___x_3573_;
goto v_reusejp_3581_;
}
else
{
lean_object* v_reuseFailAlloc_3583_; 
v_reuseFailAlloc_3583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3583_, 0, v___x_3578_);
lean_ctor_set(v_reuseFailAlloc_3583_, 1, v___x_3580_);
v___x_3582_ = v_reuseFailAlloc_3583_;
goto v_reusejp_3581_;
}
v_reusejp_3581_:
{
return v___x_3582_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1___redArg___boxed(lean_object* v_m_3587_, lean_object* v_a_3588_){
_start:
{
uint32_t v_a_boxed_3589_; lean_object* v_res_3590_; 
v_a_boxed_3589_ = lean_unbox_uint32(v_a_3588_);
lean_dec(v_a_3588_);
v_res_3590_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1___redArg(v_m_3587_, v_a_boxed_3589_);
return v_res_3590_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0___redArg(uint32_t v_a_3591_, lean_object* v_x_3592_){
_start:
{
if (lean_obj_tag(v_x_3592_) == 0)
{
lean_object* v___x_3593_; 
v___x_3593_ = lean_box(0);
return v___x_3593_;
}
else
{
lean_object* v_key_3594_; lean_object* v_value_3595_; lean_object* v_tail_3596_; uint32_t v___x_3597_; uint8_t v___x_3598_; 
v_key_3594_ = lean_ctor_get(v_x_3592_, 0);
v_value_3595_ = lean_ctor_get(v_x_3592_, 1);
v_tail_3596_ = lean_ctor_get(v_x_3592_, 2);
v___x_3597_ = lean_unbox_uint32(v_key_3594_);
v___x_3598_ = lean_uint32_dec_eq(v___x_3597_, v_a_3591_);
if (v___x_3598_ == 0)
{
v_x_3592_ = v_tail_3596_;
goto _start;
}
else
{
lean_object* v___x_3600_; 
lean_inc(v_value_3595_);
v___x_3600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3600_, 0, v_value_3595_);
return v___x_3600_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0___redArg___boxed(lean_object* v_a_3601_, lean_object* v_x_3602_){
_start:
{
uint32_t v_a_boxed_3603_; lean_object* v_res_3604_; 
v_a_boxed_3603_ = lean_unbox_uint32(v_a_3601_);
lean_dec(v_a_3601_);
v_res_3604_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0___redArg(v_a_boxed_3603_, v_x_3602_);
lean_dec(v_x_3602_);
return v_res_3604_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0___redArg(lean_object* v_m_3605_, uint32_t v_a_3606_){
_start:
{
lean_object* v_buckets_3607_; lean_object* v___x_3608_; uint64_t v___x_3609_; uint64_t v___x_3610_; uint64_t v___x_3611_; uint64_t v_fold_3612_; uint64_t v___x_3613_; uint64_t v___x_3614_; uint64_t v___x_3615_; size_t v___x_3616_; size_t v___x_3617_; size_t v___x_3618_; size_t v___x_3619_; size_t v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; 
v_buckets_3607_ = lean_ctor_get(v_m_3605_, 1);
v___x_3608_ = lean_array_get_size(v_buckets_3607_);
v___x_3609_ = lean_uint32_to_uint64(v_a_3606_);
v___x_3610_ = 32ULL;
v___x_3611_ = lean_uint64_shift_right(v___x_3609_, v___x_3610_);
v_fold_3612_ = lean_uint64_xor(v___x_3609_, v___x_3611_);
v___x_3613_ = 16ULL;
v___x_3614_ = lean_uint64_shift_right(v_fold_3612_, v___x_3613_);
v___x_3615_ = lean_uint64_xor(v_fold_3612_, v___x_3614_);
v___x_3616_ = lean_uint64_to_usize(v___x_3615_);
v___x_3617_ = lean_usize_of_nat(v___x_3608_);
v___x_3618_ = ((size_t)1ULL);
v___x_3619_ = lean_usize_sub(v___x_3617_, v___x_3618_);
v___x_3620_ = lean_usize_land(v___x_3616_, v___x_3619_);
v___x_3621_ = lean_array_uget_borrowed(v_buckets_3607_, v___x_3620_);
v___x_3622_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0___redArg(v_a_3606_, v___x_3621_);
return v___x_3622_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0___redArg___boxed(lean_object* v_m_3623_, lean_object* v_a_3624_){
_start:
{
uint32_t v_a_boxed_3625_; lean_object* v_res_3626_; 
v_a_boxed_3625_ = lean_unbox_uint32(v_a_3624_);
lean_dec(v_a_3624_);
v_res_3626_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0___redArg(v_m_3623_, v_a_boxed_3625_);
lean_dec_ref(v_m_3623_);
return v_res_3626_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_dispatch(uint8_t v_kind_3632_, uint32_t v_fn_3633_, uint64_t v_call_3634_, lean_object* v_bytes_3635_){
_start:
{
uint8_t v___x_3637_; uint8_t v___x_3638_; 
v___x_3637_ = 3;
v___x_3638_ = lean_uint8_dec_eq(v_kind_3632_, v___x_3637_);
if (v___x_3638_ == 0)
{
lean_object* v___x_3639_; lean_object* v___x_3640_; lean_object* v_asyncFns_3641_; lean_object* v___x_3642_; 
v___x_3639_ = l___private_Lasm_JS_Core_0__Lasm_JS_registry;
v___x_3640_ = lean_st_ref_get(v___x_3639_);
v_asyncFns_3641_ = lean_ctor_get(v___x_3640_, 0);
lean_inc_ref(v_asyncFns_3641_);
lean_dec(v___x_3640_);
v___x_3642_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0___redArg(v_asyncFns_3641_, v_fn_3633_);
lean_dec_ref(v_asyncFns_3641_);
if (lean_obj_tag(v___x_3642_) == 0)
{
lean_object* v___x_3643_; lean_object* v___x_3644_; 
lean_dec_ref(v_bytes_3635_);
v___x_3643_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_dispatch___closed__2));
v___x_3644_ = l___private_Lasm_JS_Core_0__Lasm_JS_reply(v_call_3634_, v___x_3643_);
return v___x_3644_;
}
else
{
lean_object* v_val_3645_; lean_object* v___x_3647_; uint8_t v_isShared_3648_; uint8_t v_isSharedCheck_3657_; 
v_val_3645_ = lean_ctor_get(v___x_3642_, 0);
v_isSharedCheck_3657_ = !lean_is_exclusive(v___x_3642_);
if (v_isSharedCheck_3657_ == 0)
{
v___x_3647_ = v___x_3642_;
v_isShared_3648_ = v_isSharedCheck_3657_;
goto v_resetjp_3646_;
}
else
{
lean_inc(v_val_3645_);
lean_dec(v___x_3642_);
v___x_3647_ = lean_box(0);
v_isShared_3648_ = v_isSharedCheck_3657_;
goto v_resetjp_3646_;
}
v_resetjp_3646_:
{
lean_object* v___x_3649_; lean_object* v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3655_; 
v___x_3649_ = lean_box_uint64(v_call_3634_);
v___x_3650_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_runCall___boxed), 4, 3);
lean_closure_set(v___x_3650_, 0, v___x_3649_);
lean_closure_set(v___x_3650_, 1, v_val_3645_);
lean_closure_set(v___x_3650_, 2, v_bytes_3635_);
v___x_3651_ = lean_unsigned_to_nat(0u);
v___x_3652_ = lean_box(0);
v___x_3653_ = lean_io_as_task(v___x_3650_, v___x_3651_);
lean_dec_ref(v___x_3653_);
if (v_isShared_3648_ == 0)
{
lean_ctor_set_tag(v___x_3647_, 0);
lean_ctor_set(v___x_3647_, 0, v___x_3652_);
v___x_3655_ = v___x_3647_;
goto v_reusejp_3654_;
}
else
{
lean_object* v_reuseFailAlloc_3656_; 
v_reuseFailAlloc_3656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3656_, 0, v___x_3652_);
v___x_3655_ = v_reuseFailAlloc_3656_;
goto v_reusejp_3654_;
}
v_reusejp_3654_:
{
return v___x_3655_;
}
}
}
}
else
{
lean_object* v___x_3658_; lean_object* v___x_3659_; uint32_t v_next_3660_; lean_object* v_asyncFns_3661_; lean_object* v_syncFns_3662_; lean_object* v___x_3664_; uint8_t v_isShared_3665_; uint8_t v_isSharedCheck_3673_; 
lean_dec_ref(v_bytes_3635_);
v___x_3658_ = l___private_Lasm_JS_Core_0__Lasm_JS_registry;
v___x_3659_ = lean_st_ref_take(v___x_3658_);
v_next_3660_ = lean_ctor_get_uint32(v___x_3659_, sizeof(void*)*2);
v_asyncFns_3661_ = lean_ctor_get(v___x_3659_, 0);
v_syncFns_3662_ = lean_ctor_get(v___x_3659_, 1);
v_isSharedCheck_3673_ = !lean_is_exclusive(v___x_3659_);
if (v_isSharedCheck_3673_ == 0)
{
v___x_3664_ = v___x_3659_;
v_isShared_3665_ = v_isSharedCheck_3673_;
goto v_resetjp_3663_;
}
else
{
lean_inc(v_syncFns_3662_);
lean_inc(v_asyncFns_3661_);
lean_dec(v___x_3659_);
v___x_3664_ = lean_box(0);
v_isShared_3665_ = v_isSharedCheck_3673_;
goto v_resetjp_3663_;
}
v_resetjp_3663_:
{
lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3669_; 
v___x_3666_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1___redArg(v_asyncFns_3661_, v_fn_3633_);
v___x_3667_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1___redArg(v_syncFns_3662_, v_fn_3633_);
if (v_isShared_3665_ == 0)
{
lean_ctor_set(v___x_3664_, 1, v___x_3667_);
lean_ctor_set(v___x_3664_, 0, v___x_3666_);
v___x_3669_ = v___x_3664_;
goto v_reusejp_3668_;
}
else
{
lean_object* v_reuseFailAlloc_3672_; 
v_reuseFailAlloc_3672_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v_reuseFailAlloc_3672_, 0, v___x_3666_);
lean_ctor_set(v_reuseFailAlloc_3672_, 1, v___x_3667_);
lean_ctor_set_uint32(v_reuseFailAlloc_3672_, sizeof(void*)*2, v_next_3660_);
v___x_3669_ = v_reuseFailAlloc_3672_;
goto v_reusejp_3668_;
}
v_reusejp_3668_:
{
lean_object* v___x_3670_; lean_object* v___x_3671_; 
v___x_3670_ = lean_st_ref_put(v___x_3658_, v___x_3669_);
v___x_3671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3671_, 0, v___x_3670_);
return v___x_3671_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_dispatch___boxed(lean_object* v_kind_3674_, lean_object* v_fn_3675_, lean_object* v_call_3676_, lean_object* v_bytes_3677_, lean_object* v_a_3678_){
_start:
{
uint8_t v_kind_boxed_3679_; uint32_t v_fn_boxed_3680_; uint64_t v_call_boxed_3681_; lean_object* v_res_3682_; 
v_kind_boxed_3679_ = lean_unbox(v_kind_3674_);
v_fn_boxed_3680_ = lean_unbox_uint32(v_fn_3675_);
lean_dec(v_fn_3675_);
v_call_boxed_3681_ = lean_unbox_uint64(v_call_3676_);
lean_dec_ref(v_call_3676_);
v_res_3682_ = l___private_Lasm_JS_Core_0__Lasm_JS_dispatch(v_kind_boxed_3679_, v_fn_boxed_3680_, v_call_boxed_3681_, v_bytes_3677_);
return v_res_3682_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0(lean_object* v_00_u03b2_3683_, lean_object* v_m_3684_, uint32_t v_a_3685_){
_start:
{
lean_object* v___x_3686_; 
v___x_3686_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0___redArg(v_m_3684_, v_a_3685_);
return v___x_3686_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0___boxed(lean_object* v_00_u03b2_3687_, lean_object* v_m_3688_, lean_object* v_a_3689_){
_start:
{
uint32_t v_a_boxed_3690_; lean_object* v_res_3691_; 
v_a_boxed_3690_ = lean_unbox_uint32(v_a_3689_);
lean_dec(v_a_3689_);
v_res_3691_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0(v_00_u03b2_3687_, v_m_3688_, v_a_boxed_3690_);
lean_dec_ref(v_m_3688_);
return v_res_3691_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1(lean_object* v_00_u03b2_3692_, lean_object* v_m_3693_, uint32_t v_a_3694_){
_start:
{
lean_object* v___x_3695_; 
v___x_3695_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1___redArg(v_m_3693_, v_a_3694_);
return v___x_3695_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1___boxed(lean_object* v_00_u03b2_3696_, lean_object* v_m_3697_, lean_object* v_a_3698_){
_start:
{
uint32_t v_a_boxed_3699_; lean_object* v_res_3700_; 
v_a_boxed_3699_ = lean_unbox_uint32(v_a_3698_);
lean_dec(v_a_3698_);
v_res_3700_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1(v_00_u03b2_3696_, v_m_3697_, v_a_boxed_3699_);
return v_res_3700_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0(lean_object* v_00_u03b2_3701_, uint32_t v_a_3702_, lean_object* v_x_3703_){
_start:
{
lean_object* v___x_3704_; 
v___x_3704_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0___redArg(v_a_3702_, v_x_3703_);
return v___x_3704_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3705_, lean_object* v_a_3706_, lean_object* v_x_3707_){
_start:
{
uint32_t v_a_boxed_3708_; lean_object* v_res_3709_; 
v_a_boxed_3708_ = lean_unbox_uint32(v_a_3706_);
lean_dec(v_a_3706_);
v_res_3709_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0(v_00_u03b2_3705_, v_a_boxed_3708_, v_x_3707_);
lean_dec(v_x_3707_);
return v_res_3709_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2(lean_object* v_00_u03b2_3710_, uint32_t v_a_3711_, lean_object* v_x_3712_){
_start:
{
uint8_t v___x_3713_; 
v___x_3713_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2___redArg(v_a_3711_, v_x_3712_);
return v___x_3713_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2___boxed(lean_object* v_00_u03b2_3714_, lean_object* v_a_3715_, lean_object* v_x_3716_){
_start:
{
uint32_t v_a_boxed_3717_; uint8_t v_res_3718_; lean_object* v_r_3719_; 
v_a_boxed_3717_ = lean_unbox_uint32(v_a_3715_);
lean_dec(v_a_3715_);
v_res_3718_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2(v_00_u03b2_3714_, v_a_boxed_3717_, v_x_3716_);
lean_dec(v_x_3716_);
v_r_3719_ = lean_box(v_res_3718_);
return v_r_3719_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3(lean_object* v_00_u03b2_3720_, uint32_t v_a_3721_, lean_object* v_x_3722_){
_start:
{
lean_object* v___x_3723_; 
v___x_3723_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3___redArg(v_a_3721_, v_x_3722_);
return v___x_3723_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3___boxed(lean_object* v_00_u03b2_3724_, lean_object* v_a_3725_, lean_object* v_x_3726_){
_start:
{
uint32_t v_a_boxed_3727_; lean_object* v_res_3728_; 
v_a_boxed_3727_ = lean_unbox_uint32(v_a_3725_);
lean_dec(v_a_3725_);
v_res_3728_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3(v_00_u03b2_3724_, v_a_boxed_3727_, v_x_3726_);
return v_res_3728_;
}
}
static lean_object* _init_l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__1(void){
_start:
{
lean_object* v___x_3735_; lean_object* v___x_3736_; 
v___x_3735_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__0));
v___x_3736_ = lean_byte_array_size(v___x_3735_);
return v___x_3736_;
}
}
static lean_object* _init_l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__3(void){
_start:
{
lean_object* v___x_3743_; lean_object* v___x_3744_; 
v___x_3743_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__2));
v___x_3744_ = lean_byte_array_size(v___x_3743_);
return v___x_3744_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch(uint32_t v_fn_3745_, lean_object* v_bytes_3746_){
_start:
{
lean_object* v_a_3749_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v_syncFns_3763_; lean_object* v___x_3764_; 
v___x_3761_ = l___private_Lasm_JS_Core_0__Lasm_JS_registry;
v___x_3762_ = lean_st_ref_get(v___x_3761_);
v_syncFns_3763_ = lean_ctor_get(v___x_3762_, 1);
lean_inc_ref(v_syncFns_3763_);
lean_dec(v___x_3762_);
v___x_3764_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0___redArg(v_syncFns_3763_, v_fn_3745_);
lean_dec_ref(v_syncFns_3763_);
if (lean_obj_tag(v___x_3764_) == 1)
{
lean_object* v_val_3765_; lean_object* v___x_3766_; 
v_val_3765_ = lean_ctor_get(v___x_3764_, 0);
lean_inc(v_val_3765_);
lean_dec_ref_known(v___x_3764_, 1);
v___x_3766_ = l___private_Lasm_JS_Core_0__Lasm_JS_argsOf(v_bytes_3746_);
if (lean_obj_tag(v___x_3766_) == 0)
{
lean_object* v_a_3767_; lean_object* v___x_3768_; 
v_a_3767_ = lean_ctor_get(v___x_3766_, 0);
lean_inc(v_a_3767_);
lean_dec_ref_known(v___x_3766_, 1);
v___x_3768_ = lean_apply_2(v_val_3765_, v_a_3767_, lean_box(0));
if (lean_obj_tag(v___x_3768_) == 0)
{
lean_object* v_a_3769_; lean_object* v___x_3771_; uint8_t v_isShared_3772_; uint8_t v_isSharedCheck_3798_; 
v_a_3769_ = lean_ctor_get(v___x_3768_, 0);
v_isSharedCheck_3798_ = !lean_is_exclusive(v___x_3768_);
if (v_isSharedCheck_3798_ == 0)
{
v___x_3771_ = v___x_3768_;
v_isShared_3772_ = v_isSharedCheck_3798_;
goto v_resetjp_3770_;
}
else
{
lean_inc(v_a_3769_);
lean_dec(v___x_3768_);
v___x_3771_ = lean_box(0);
v_isShared_3772_ = v_isSharedCheck_3798_;
goto v_resetjp_3770_;
}
v_resetjp_3770_:
{
lean_object* v___x_3773_; 
lean_inc(v_a_3769_);
v___x_3773_ = l_Lasm_JS_Wire_encode(v_a_3769_);
if (lean_obj_tag(v___x_3773_) == 0)
{
lean_object* v_a_3774_; lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; uint8_t v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3785_; 
lean_dec(v_a_3769_);
v_a_3774_ = lean_ctor_get(v___x_3773_, 0);
lean_inc(v_a_3774_);
lean_dec_ref_known(v___x_3773_, 1);
v___x_3775_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__0));
v___x_3776_ = lean_string_to_utf8(v_a_3774_);
v___x_3777_ = lean_unsigned_to_nat(0u);
v___x_3778_ = lean_obj_once(&l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__1, &l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__1_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__1);
v___x_3779_ = lean_byte_array_size(v___x_3776_);
v___x_3780_ = 0;
v___x_3781_ = lean_byte_array_copy_slice(v___x_3776_, v___x_3777_, v___x_3775_, v___x_3778_, v___x_3779_, v___x_3780_);
lean_dec_ref(v___x_3776_);
v___x_3782_ = lean_box(0);
v___x_3783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3783_, 0, v___x_3781_);
lean_ctor_set(v___x_3783_, 1, v___x_3782_);
if (v_isShared_3772_ == 0)
{
lean_ctor_set(v___x_3771_, 0, v___x_3783_);
v___x_3785_ = v___x_3771_;
goto v_reusejp_3784_;
}
else
{
lean_object* v_reuseFailAlloc_3786_; 
v_reuseFailAlloc_3786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3786_, 0, v___x_3783_);
v___x_3785_ = v_reuseFailAlloc_3786_;
goto v_reusejp_3784_;
}
v_reusejp_3784_:
{
return v___x_3785_;
}
}
else
{
lean_object* v_a_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; uint8_t v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3796_; 
v_a_3787_ = lean_ctor_get(v___x_3773_, 0);
lean_inc(v_a_3787_);
lean_dec_ref_known(v___x_3773_, 1);
v___x_3788_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__2));
v___x_3789_ = lean_unsigned_to_nat(0u);
v___x_3790_ = lean_obj_once(&l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__3, &l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__3_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__3);
v___x_3791_ = lean_byte_array_size(v_a_3787_);
v___x_3792_ = 0;
v___x_3793_ = lean_byte_array_copy_slice(v_a_3787_, v___x_3789_, v___x_3788_, v___x_3790_, v___x_3791_, v___x_3792_);
lean_dec(v_a_3787_);
v___x_3794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3794_, 0, v___x_3793_);
lean_ctor_set(v___x_3794_, 1, v_a_3769_);
if (v_isShared_3772_ == 0)
{
lean_ctor_set(v___x_3771_, 0, v___x_3794_);
v___x_3796_ = v___x_3771_;
goto v_reusejp_3795_;
}
else
{
lean_object* v_reuseFailAlloc_3797_; 
v_reuseFailAlloc_3797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3797_, 0, v___x_3794_);
v___x_3796_ = v_reuseFailAlloc_3797_;
goto v_reusejp_3795_;
}
v_reusejp_3795_:
{
return v___x_3796_;
}
}
}
}
else
{
lean_object* v_a_3799_; 
v_a_3799_ = lean_ctor_get(v___x_3768_, 0);
lean_inc(v_a_3799_);
lean_dec_ref_known(v___x_3768_, 1);
v_a_3749_ = v_a_3799_;
goto v___jp_3748_;
}
}
else
{
lean_object* v_a_3800_; 
lean_dec(v_val_3765_);
v_a_3800_ = lean_ctor_get(v___x_3766_, 0);
lean_inc(v_a_3800_);
lean_dec_ref_known(v___x_3766_, 1);
v_a_3749_ = v_a_3800_;
goto v___jp_3748_;
}
}
else
{
lean_object* v___x_3801_; 
lean_dec(v___x_3764_);
v___x_3801_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_dispatch___closed__1));
v_a_3749_ = v___x_3801_;
goto v___jp_3748_;
}
v___jp_3748_:
{
lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; uint8_t v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; 
v___x_3750_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__0));
v___x_3751_ = lean_io_error_to_string(v_a_3749_);
v___x_3752_ = lean_string_to_utf8(v___x_3751_);
v___x_3753_ = lean_unsigned_to_nat(0u);
v___x_3754_ = lean_obj_once(&l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__1, &l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__1_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__1);
v___x_3755_ = lean_byte_array_size(v___x_3752_);
v___x_3756_ = 0;
v___x_3757_ = lean_byte_array_copy_slice(v___x_3752_, v___x_3753_, v___x_3750_, v___x_3754_, v___x_3755_, v___x_3756_);
lean_dec_ref(v___x_3752_);
v___x_3758_ = lean_box(0);
v___x_3759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3759_, 0, v___x_3757_);
lean_ctor_set(v___x_3759_, 1, v___x_3758_);
v___x_3760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3760_, 0, v___x_3759_);
return v___x_3760_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___boxed(lean_object* v_fn_3802_, lean_object* v_bytes_3803_, lean_object* v_a_3804_){
_start:
{
uint32_t v_fn_boxed_3805_; lean_object* v_res_3806_; 
v_fn_boxed_3805_ = lean_unbox_uint32(v_fn_3802_);
lean_dec(v_fn_3802_);
v_res_3806_ = l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch(v_fn_boxed_3805_, v_bytes_3803_);
lean_dec_ref(v_bytes_3803_);
return v_res_3806_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted(){
_start:
{
lean_object* v___x_3809_; lean_object* v___x_3810_; 
v___x_3809_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted___closed__0));
v___x_3810_ = lasm_js_start(v___x_3809_);
return v___x_3810_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted___boxed(lean_object* v_a_3811_){
_start:
{
lean_object* v_res_3812_; 
v_res_3812_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
return v_res_3812_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTAsync___redArg___lam__0(lean_object* v_inst_3813_, lean_object* v_00_u03b1_3814_, lean_object* v_x_3815_, lean_object* v_a_3816_){
_start:
{
lean_object* v___x_3817_; 
v___x_3817_ = lean_apply_2(v_inst_3813_, lean_box(0), v_a_3816_);
return v___x_3817_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTAsync___redArg___lam__0___boxed(lean_object* v_inst_3818_, lean_object* v_00_u03b1_3819_, lean_object* v_x_3820_, lean_object* v_a_3821_){
_start:
{
lean_object* v_res_3822_; 
v_res_3822_ = l_Lasm_JS_instMonadJSOfMonadLiftTAsync___redArg___lam__0(v_inst_3818_, v_00_u03b1_3819_, v_x_3820_, v_a_3821_);
lean_dec_ref(v_x_3820_);
return v_res_3822_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTAsync___redArg(lean_object* v_inst_3823_){
_start:
{
lean_object* v___f_3824_; 
v___f_3824_ = lean_alloc_closure((void*)(l_Lasm_JS_instMonadJSOfMonadLiftTAsync___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_3824_, 0, v_inst_3823_);
return v___f_3824_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTAsync(lean_object* v_m_3825_, lean_object* v_inst_3826_){
_start:
{
lean_object* v___f_3827_; 
v___f_3827_ = lean_alloc_closure((void*)(l_Lasm_JS_instMonadJSOfMonadLiftTAsync___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_3827_, 0, v_inst_3826_);
return v___f_3827_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTIO___redArg___lam__0(lean_object* v_inst_3828_, lean_object* v_00_u03b1_3829_, lean_object* v_b_3830_, lean_object* v_x_3831_){
_start:
{
lean_object* v___x_3832_; 
v___x_3832_ = lean_apply_2(v_inst_3828_, lean_box(0), v_b_3830_);
return v___x_3832_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTIO___redArg___lam__0___boxed(lean_object* v_inst_3833_, lean_object* v_00_u03b1_3834_, lean_object* v_b_3835_, lean_object* v_x_3836_){
_start:
{
lean_object* v_res_3837_; 
v_res_3837_ = l_Lasm_JS_instMonadJSOfMonadLiftTIO___redArg___lam__0(v_inst_3833_, v_00_u03b1_3834_, v_b_3835_, v_x_3836_);
lean_dec_ref(v_x_3836_);
return v_res_3837_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTIO___redArg(lean_object* v_inst_3838_){
_start:
{
lean_object* v___f_3839_; 
v___f_3839_ = lean_alloc_closure((void*)(l_Lasm_JS_instMonadJSOfMonadLiftTIO___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_3839_, 0, v_inst_3838_);
return v___f_3839_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTIO(lean_object* v_m_3840_, lean_object* v_inst_3841_){
_start:
{
lean_object* v___f_3842_; 
v___f_3842_ = lean_alloc_closure((void*)(l_Lasm_JS_instMonadJSOfMonadLiftTIO___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_3842_, 0, v_inst_3841_);
return v___f_3842_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes___lam__0(lean_object* v_x_3848_){
_start:
{
if (lean_obj_tag(v_x_3848_) == 0)
{
lean_object* v___x_3849_; 
v___x_3849_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes___lam__0___closed__2));
return v___x_3849_;
}
else
{
lean_object* v_val_3850_; lean_object* v___x_3852_; uint8_t v_isShared_3853_; uint8_t v_isSharedCheck_3873_; 
v_val_3850_ = lean_ctor_get(v_x_3848_, 0);
v_isSharedCheck_3873_ = !lean_is_exclusive(v_x_3848_);
if (v_isSharedCheck_3873_ == 0)
{
v___x_3852_ = v_x_3848_;
v_isShared_3853_ = v_isSharedCheck_3873_;
goto v_resetjp_3851_;
}
else
{
lean_inc(v_val_3850_);
lean_dec(v_x_3848_);
v___x_3852_ = lean_box(0);
v_isShared_3853_ = v_isSharedCheck_3873_;
goto v_resetjp_3851_;
}
v_resetjp_3851_:
{
if (lean_obj_tag(v_val_3850_) == 0)
{
lean_object* v_a_3854_; lean_object* v___x_3856_; uint8_t v_isShared_3857_; uint8_t v_isSharedCheck_3864_; 
v_a_3854_ = lean_ctor_get(v_val_3850_, 0);
v_isSharedCheck_3864_ = !lean_is_exclusive(v_val_3850_);
if (v_isSharedCheck_3864_ == 0)
{
v___x_3856_ = v_val_3850_;
v_isShared_3857_ = v_isSharedCheck_3864_;
goto v_resetjp_3855_;
}
else
{
lean_inc(v_a_3854_);
lean_dec(v_val_3850_);
v___x_3856_ = lean_box(0);
v_isShared_3857_ = v_isSharedCheck_3864_;
goto v_resetjp_3855_;
}
v_resetjp_3855_:
{
lean_object* v___x_3859_; 
if (v_isShared_3853_ == 0)
{
lean_ctor_set_tag(v___x_3852_, 18);
lean_ctor_set(v___x_3852_, 0, v_a_3854_);
v___x_3859_ = v___x_3852_;
goto v_reusejp_3858_;
}
else
{
lean_object* v_reuseFailAlloc_3863_; 
v_reuseFailAlloc_3863_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3863_, 0, v_a_3854_);
v___x_3859_ = v_reuseFailAlloc_3863_;
goto v_reusejp_3858_;
}
v_reusejp_3858_:
{
lean_object* v___x_3861_; 
if (v_isShared_3857_ == 0)
{
lean_ctor_set(v___x_3856_, 0, v___x_3859_);
v___x_3861_ = v___x_3856_;
goto v_reusejp_3860_;
}
else
{
lean_object* v_reuseFailAlloc_3862_; 
v_reuseFailAlloc_3862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3862_, 0, v___x_3859_);
v___x_3861_ = v_reuseFailAlloc_3862_;
goto v_reusejp_3860_;
}
v_reusejp_3860_:
{
return v___x_3861_;
}
}
}
}
else
{
lean_object* v_a_3865_; lean_object* v___x_3867_; uint8_t v_isShared_3868_; uint8_t v_isSharedCheck_3872_; 
lean_del_object(v___x_3852_);
v_a_3865_ = lean_ctor_get(v_val_3850_, 0);
v_isSharedCheck_3872_ = !lean_is_exclusive(v_val_3850_);
if (v_isSharedCheck_3872_ == 0)
{
v___x_3867_ = v_val_3850_;
v_isShared_3868_ = v_isSharedCheck_3872_;
goto v_resetjp_3866_;
}
else
{
lean_inc(v_a_3865_);
lean_dec(v_val_3850_);
v___x_3867_ = lean_box(0);
v_isShared_3868_ = v_isSharedCheck_3872_;
goto v_resetjp_3866_;
}
v_resetjp_3866_:
{
lean_object* v___x_3870_; 
if (v_isShared_3868_ == 0)
{
v___x_3870_ = v___x_3867_;
goto v_reusejp_3869_;
}
else
{
lean_object* v_reuseFailAlloc_3871_; 
v_reuseFailAlloc_3871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3871_, 0, v_a_3865_);
v___x_3870_ = v_reuseFailAlloc_3871_;
goto v_reusejp_3869_;
}
v_reusejp_3869_:
{
return v___x_3870_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object* v_p_3875_){
_start:
{
lean_object* v___f_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; uint8_t v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; 
v___f_3877_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes___closed__0));
v___x_3878_ = lean_io_promise_result_opt(v_p_3875_);
v___x_3879_ = lean_unsigned_to_nat(0u);
v___x_3880_ = 1;
v___x_3881_ = lean_task_map(v___f_3877_, v___x_3878_, v___x_3879_, v___x_3880_);
v___x_3882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3882_, 0, v___x_3881_);
return v___x_3882_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes___boxed(lean_object* v_p_3883_, lean_object* v_a_3884_){
_start:
{
lean_object* v_res_3885_; 
v_res_3885_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_p_3883_);
lean_dec(v_p_3883_);
return v_res_3885_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__0(lean_object* v_inst_3886_, lean_object* v_context_3887_, lean_object* v_x_3888_){
_start:
{
lean_object* v_val_3891_; 
if (lean_obj_tag(v_x_3888_) == 0)
{
lean_object* v_a_3893_; lean_object* v___x_3895_; uint8_t v_isShared_3896_; uint8_t v_isSharedCheck_3901_; 
lean_dec_ref(v_inst_3886_);
v_a_3893_ = lean_ctor_get(v_x_3888_, 0);
v_isSharedCheck_3901_ = !lean_is_exclusive(v_x_3888_);
if (v_isSharedCheck_3901_ == 0)
{
v___x_3895_ = v_x_3888_;
v_isShared_3896_ = v_isSharedCheck_3901_;
goto v_resetjp_3894_;
}
else
{
lean_inc(v_a_3893_);
lean_dec(v_x_3888_);
v___x_3895_ = lean_box(0);
v_isShared_3896_ = v_isSharedCheck_3901_;
goto v_resetjp_3894_;
}
v_resetjp_3894_:
{
lean_object* v___x_3898_; 
if (v_isShared_3896_ == 0)
{
v___x_3898_ = v___x_3895_;
goto v_reusejp_3897_;
}
else
{
lean_object* v_reuseFailAlloc_3900_; 
v_reuseFailAlloc_3900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3900_, 0, v_a_3893_);
v___x_3898_ = v_reuseFailAlloc_3900_;
goto v_reusejp_3897_;
}
v_reusejp_3897_:
{
lean_object* v___x_3899_; 
v___x_3899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3899_, 0, v___x_3898_);
return v___x_3899_;
}
}
}
else
{
lean_object* v_a_3902_; lean_object* v___x_3904_; uint8_t v_isShared_3905_; uint8_t v_isSharedCheck_3915_; 
v_a_3902_ = lean_ctor_get(v_x_3888_, 0);
v_isSharedCheck_3915_ = !lean_is_exclusive(v_x_3888_);
if (v_isSharedCheck_3915_ == 0)
{
v___x_3904_ = v_x_3888_;
v_isShared_3905_ = v_isSharedCheck_3915_;
goto v_resetjp_3903_;
}
else
{
lean_inc(v_a_3902_);
lean_dec(v_x_3888_);
v___x_3904_ = lean_box(0);
v_isShared_3905_ = v_isSharedCheck_3915_;
goto v_resetjp_3903_;
}
v_resetjp_3903_:
{
lean_object* v___x_3906_; 
v___x_3906_ = l_Lasm_JS_decodeAs___redArg(v_inst_3886_, v_context_3887_, v_a_3902_);
if (lean_obj_tag(v___x_3906_) == 0)
{
lean_object* v_a_3907_; lean_object* v___x_3909_; 
v_a_3907_ = lean_ctor_get(v___x_3906_, 0);
lean_inc(v_a_3907_);
lean_dec_ref_known(v___x_3906_, 1);
if (v_isShared_3905_ == 0)
{
lean_ctor_set(v___x_3904_, 0, v_a_3907_);
v___x_3909_ = v___x_3904_;
goto v_reusejp_3908_;
}
else
{
lean_object* v_reuseFailAlloc_3910_; 
v_reuseFailAlloc_3910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3910_, 0, v_a_3907_);
v___x_3909_ = v_reuseFailAlloc_3910_;
goto v_reusejp_3908_;
}
v_reusejp_3908_:
{
v_val_3891_ = v___x_3909_;
goto v___jp_3890_;
}
}
else
{
lean_object* v_a_3911_; lean_object* v___x_3913_; 
v_a_3911_ = lean_ctor_get(v___x_3906_, 0);
lean_inc(v_a_3911_);
lean_dec_ref_known(v___x_3906_, 1);
if (v_isShared_3905_ == 0)
{
lean_ctor_set_tag(v___x_3904_, 0);
lean_ctor_set(v___x_3904_, 0, v_a_3911_);
v___x_3913_ = v___x_3904_;
goto v_reusejp_3912_;
}
else
{
lean_object* v_reuseFailAlloc_3914_; 
v_reuseFailAlloc_3914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3914_, 0, v_a_3911_);
v___x_3913_ = v_reuseFailAlloc_3914_;
goto v_reusejp_3912_;
}
v_reusejp_3912_:
{
v_val_3891_ = v___x_3913_;
goto v___jp_3890_;
}
}
}
}
v___jp_3890_:
{
lean_object* v___x_3892_; 
v___x_3892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3892_, 0, v_val_3891_);
return v___x_3892_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__0___boxed(lean_object* v_inst_3916_, lean_object* v_context_3917_, lean_object* v_x_3918_, lean_object* v___y_3919_){
_start:
{
lean_object* v_res_3920_; 
v_res_3920_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__0(v_inst_3916_, v_context_3917_, v_x_3918_);
lean_dec_ref(v_context_3917_);
return v_res_3920_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__1(lean_object* v___f_3921_, lean_object* v_bytes_3922_){
_start:
{
lean_object* v___x_3924_; uint8_t v___x_3925_; lean_object* v_val_3927_; lean_object* v___x_3930_; 
v___x_3924_ = lean_unsigned_to_nat(0u);
v___x_3925_ = 0;
v___x_3930_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3922_);
if (lean_obj_tag(v___x_3930_) == 0)
{
lean_object* v_a_3931_; lean_object* v___x_3933_; uint8_t v_isShared_3934_; uint8_t v_isSharedCheck_3938_; 
v_a_3931_ = lean_ctor_get(v___x_3930_, 0);
v_isSharedCheck_3938_ = !lean_is_exclusive(v___x_3930_);
if (v_isSharedCheck_3938_ == 0)
{
v___x_3933_ = v___x_3930_;
v_isShared_3934_ = v_isSharedCheck_3938_;
goto v_resetjp_3932_;
}
else
{
lean_inc(v_a_3931_);
lean_dec(v___x_3930_);
v___x_3933_ = lean_box(0);
v_isShared_3934_ = v_isSharedCheck_3938_;
goto v_resetjp_3932_;
}
v_resetjp_3932_:
{
lean_object* v___x_3936_; 
if (v_isShared_3934_ == 0)
{
lean_ctor_set_tag(v___x_3933_, 1);
v___x_3936_ = v___x_3933_;
goto v_reusejp_3935_;
}
else
{
lean_object* v_reuseFailAlloc_3937_; 
v_reuseFailAlloc_3937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3937_, 0, v_a_3931_);
v___x_3936_ = v_reuseFailAlloc_3937_;
goto v_reusejp_3935_;
}
v_reusejp_3935_:
{
v_val_3927_ = v___x_3936_;
goto v___jp_3926_;
}
}
}
else
{
lean_object* v_a_3939_; lean_object* v___x_3941_; uint8_t v_isShared_3942_; uint8_t v_isSharedCheck_3946_; 
v_a_3939_ = lean_ctor_get(v___x_3930_, 0);
v_isSharedCheck_3946_ = !lean_is_exclusive(v___x_3930_);
if (v_isSharedCheck_3946_ == 0)
{
v___x_3941_ = v___x_3930_;
v_isShared_3942_ = v_isSharedCheck_3946_;
goto v_resetjp_3940_;
}
else
{
lean_inc(v_a_3939_);
lean_dec(v___x_3930_);
v___x_3941_ = lean_box(0);
v_isShared_3942_ = v_isSharedCheck_3946_;
goto v_resetjp_3940_;
}
v_resetjp_3940_:
{
lean_object* v___x_3944_; 
if (v_isShared_3942_ == 0)
{
lean_ctor_set_tag(v___x_3941_, 0);
v___x_3944_ = v___x_3941_;
goto v_reusejp_3943_;
}
else
{
lean_object* v_reuseFailAlloc_3945_; 
v_reuseFailAlloc_3945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3945_, 0, v_a_3939_);
v___x_3944_ = v_reuseFailAlloc_3945_;
goto v_reusejp_3943_;
}
v_reusejp_3943_:
{
v_val_3927_ = v___x_3944_;
goto v___jp_3926_;
}
}
}
v___jp_3926_:
{
lean_object* v___x_3928_; lean_object* v___x_3929_; 
v___x_3928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3928_, 0, v_val_3927_);
v___x_3929_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3924_, v___x_3925_, v___x_3928_, v___f_3921_);
return v___x_3929_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__1___boxed(lean_object* v___f_3947_, lean_object* v_bytes_3948_, lean_object* v___y_3949_){
_start:
{
lean_object* v_res_3950_; 
v_res_3950_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__1(v___f_3947_, v_bytes_3948_);
lean_dec_ref(v_bytes_3948_);
return v_res_3950_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__2(lean_object* v___f_3951_, lean_object* v_x_3952_){
_start:
{
if (lean_obj_tag(v_x_3952_) == 0)
{
lean_object* v_a_3954_; lean_object* v___x_3956_; uint8_t v_isShared_3957_; uint8_t v_isSharedCheck_3962_; 
lean_dec_ref(v___f_3951_);
v_a_3954_ = lean_ctor_get(v_x_3952_, 0);
v_isSharedCheck_3962_ = !lean_is_exclusive(v_x_3952_);
if (v_isSharedCheck_3962_ == 0)
{
v___x_3956_ = v_x_3952_;
v_isShared_3957_ = v_isSharedCheck_3962_;
goto v_resetjp_3955_;
}
else
{
lean_inc(v_a_3954_);
lean_dec(v_x_3952_);
v___x_3956_ = lean_box(0);
v_isShared_3957_ = v_isSharedCheck_3962_;
goto v_resetjp_3955_;
}
v_resetjp_3955_:
{
lean_object* v___x_3959_; 
if (v_isShared_3957_ == 0)
{
v___x_3959_ = v___x_3956_;
goto v_reusejp_3958_;
}
else
{
lean_object* v_reuseFailAlloc_3961_; 
v_reuseFailAlloc_3961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3961_, 0, v_a_3954_);
v___x_3959_ = v_reuseFailAlloc_3961_;
goto v_reusejp_3958_;
}
v_reusejp_3958_:
{
lean_object* v___x_3960_; 
v___x_3960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3960_, 0, v___x_3959_);
return v___x_3960_;
}
}
}
else
{
lean_object* v_a_3963_; lean_object* v___x_3964_; 
v_a_3963_ = lean_ctor_get(v_x_3952_, 0);
lean_inc(v_a_3963_);
lean_dec_ref_known(v_x_3952_, 1);
v___x_3964_ = lean_apply_2(v___f_3951_, v_a_3963_, lean_box(0));
return v___x_3964_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__2___boxed(lean_object* v___f_3965_, lean_object* v_x_3966_, lean_object* v___y_3967_){
_start:
{
lean_object* v_res_3968_; 
v_res_3968_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__2(v___f_3965_, v_x_3966_);
return v_res_3968_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__4(lean_object* v_failurePrefix_3969_, lean_object* v_x_3970_){
_start:
{
if (lean_obj_tag(v_x_3970_) == 0)
{
lean_object* v_a_3972_; lean_object* v___x_3974_; uint8_t v_isShared_3975_; uint8_t v_isSharedCheck_3983_; 
v_a_3972_ = lean_ctor_get(v_x_3970_, 0);
v_isSharedCheck_3983_ = !lean_is_exclusive(v_x_3970_);
if (v_isSharedCheck_3983_ == 0)
{
v___x_3974_ = v_x_3970_;
v_isShared_3975_ = v_isSharedCheck_3983_;
goto v_resetjp_3973_;
}
else
{
lean_inc(v_a_3972_);
lean_dec(v_x_3970_);
v___x_3974_ = lean_box(0);
v_isShared_3975_ = v_isSharedCheck_3983_;
goto v_resetjp_3973_;
}
v_resetjp_3973_:
{
lean_object* v___x_3976_; lean_object* v___x_3977_; lean_object* v___x_3978_; lean_object* v___x_3980_; 
v___x_3976_ = lean_io_error_to_string(v_a_3972_);
v___x_3977_ = lean_string_append(v_failurePrefix_3969_, v___x_3976_);
lean_dec_ref(v___x_3976_);
v___x_3978_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3978_, 0, v___x_3977_);
if (v_isShared_3975_ == 0)
{
lean_ctor_set(v___x_3974_, 0, v___x_3978_);
v___x_3980_ = v___x_3974_;
goto v_reusejp_3979_;
}
else
{
lean_object* v_reuseFailAlloc_3982_; 
v_reuseFailAlloc_3982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3982_, 0, v___x_3978_);
v___x_3980_ = v_reuseFailAlloc_3982_;
goto v_reusejp_3979_;
}
v_reusejp_3979_:
{
lean_object* v___x_3981_; 
v___x_3981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3981_, 0, v___x_3980_);
return v___x_3981_;
}
}
}
else
{
lean_object* v___x_3984_; 
lean_dec_ref(v_failurePrefix_3969_);
v___x_3984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3984_, 0, v_x_3970_);
return v___x_3984_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__4___boxed(lean_object* v_failurePrefix_3985_, lean_object* v_x_3986_, lean_object* v___y_3987_){
_start:
{
lean_object* v_res_3988_; 
v_res_3988_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__4(v_failurePrefix_3985_, v_x_3986_);
return v_res_3988_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__3(lean_object* v_a_3989_, lean_object* v_x_3990_){
_start:
{
if (lean_obj_tag(v_x_3990_) == 0)
{
lean_object* v_a_3992_; lean_object* v___x_3994_; uint8_t v_isShared_3995_; uint8_t v_isSharedCheck_4000_; 
v_a_3992_ = lean_ctor_get(v_x_3990_, 0);
v_isSharedCheck_4000_ = !lean_is_exclusive(v_x_3990_);
if (v_isSharedCheck_4000_ == 0)
{
v___x_3994_ = v_x_3990_;
v_isShared_3995_ = v_isSharedCheck_4000_;
goto v_resetjp_3993_;
}
else
{
lean_inc(v_a_3992_);
lean_dec(v_x_3990_);
v___x_3994_ = lean_box(0);
v_isShared_3995_ = v_isSharedCheck_4000_;
goto v_resetjp_3993_;
}
v_resetjp_3993_:
{
lean_object* v___x_3997_; 
if (v_isShared_3995_ == 0)
{
v___x_3997_ = v___x_3994_;
goto v_reusejp_3996_;
}
else
{
lean_object* v_reuseFailAlloc_3999_; 
v_reuseFailAlloc_3999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3999_, 0, v_a_3992_);
v___x_3997_ = v_reuseFailAlloc_3999_;
goto v_reusejp_3996_;
}
v_reusejp_3996_:
{
lean_object* v___x_3998_; 
v___x_3998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3998_, 0, v___x_3997_);
return v___x_3998_;
}
}
}
else
{
lean_object* v___x_4001_; 
lean_dec_ref_known(v_x_3990_, 1);
v___x_4001_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_3989_);
return v___x_4001_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__3___boxed(lean_object* v_a_4002_, lean_object* v_x_4003_, lean_object* v___y_4004_){
_start:
{
lean_object* v_res_4005_; 
v_res_4005_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__3(v_a_4002_, v_x_4003_);
lean_dec(v_a_4002_);
return v_res_4005_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__5(lean_object* v___x_4006_, uint8_t v___x_4007_, lean_object* v___f_4008_, lean_object* v_a_4009_, uint32_t v_op_4010_, uint64_t v_flags_4011_, lean_object* v_payload_4012_, lean_object* v_x_4013_){
_start:
{
lean_object* v_val_4016_; 
if (lean_obj_tag(v_x_4013_) == 0)
{
lean_object* v___x_4019_; 
lean_dec_ref(v___f_4008_);
lean_dec(v___x_4006_);
v___x_4019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4019_, 0, v_x_4013_);
return v___x_4019_;
}
else
{
lean_object* v_a_4020_; lean_object* v___x_4022_; uint8_t v_isShared_4023_; uint8_t v_isSharedCheck_4034_; 
v_a_4020_ = lean_ctor_get(v_x_4013_, 0);
v_isSharedCheck_4034_ = !lean_is_exclusive(v_x_4013_);
if (v_isSharedCheck_4034_ == 0)
{
v___x_4022_ = v_x_4013_;
v_isShared_4023_ = v_isSharedCheck_4034_;
goto v_resetjp_4021_;
}
else
{
lean_inc(v_a_4020_);
lean_dec(v_x_4013_);
v___x_4022_ = lean_box(0);
v_isShared_4023_ = v_isSharedCheck_4034_;
goto v_resetjp_4021_;
}
v_resetjp_4021_:
{
uint32_t v___x_4024_; lean_object* v___x_4025_; 
v___x_4024_ = 0;
v___x_4025_ = lasm_js_call_into(v_a_4009_, v_op_4010_, v___x_4024_, v_flags_4011_, v_a_4020_, v_payload_4012_);
lean_dec(v_a_4020_);
if (lean_obj_tag(v___x_4025_) == 0)
{
lean_object* v_a_4026_; lean_object* v___x_4028_; 
v_a_4026_ = lean_ctor_get(v___x_4025_, 0);
lean_inc(v_a_4026_);
lean_dec_ref_known(v___x_4025_, 1);
if (v_isShared_4023_ == 0)
{
lean_ctor_set(v___x_4022_, 0, v_a_4026_);
v___x_4028_ = v___x_4022_;
goto v_reusejp_4027_;
}
else
{
lean_object* v_reuseFailAlloc_4029_; 
v_reuseFailAlloc_4029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4029_, 0, v_a_4026_);
v___x_4028_ = v_reuseFailAlloc_4029_;
goto v_reusejp_4027_;
}
v_reusejp_4027_:
{
v_val_4016_ = v___x_4028_;
goto v___jp_4015_;
}
}
else
{
lean_object* v_a_4030_; lean_object* v___x_4032_; 
v_a_4030_ = lean_ctor_get(v___x_4025_, 0);
lean_inc(v_a_4030_);
lean_dec_ref_known(v___x_4025_, 1);
if (v_isShared_4023_ == 0)
{
lean_ctor_set_tag(v___x_4022_, 0);
lean_ctor_set(v___x_4022_, 0, v_a_4030_);
v___x_4032_ = v___x_4022_;
goto v_reusejp_4031_;
}
else
{
lean_object* v_reuseFailAlloc_4033_; 
v_reuseFailAlloc_4033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4033_, 0, v_a_4030_);
v___x_4032_ = v_reuseFailAlloc_4033_;
goto v_reusejp_4031_;
}
v_reusejp_4031_:
{
v_val_4016_ = v___x_4032_;
goto v___jp_4015_;
}
}
}
}
v___jp_4015_:
{
lean_object* v___x_4017_; lean_object* v___x_4018_; 
v___x_4017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4017_, 0, v_val_4016_);
v___x_4018_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4006_, v___x_4007_, v___x_4017_, v___f_4008_);
return v___x_4018_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__5___boxed(lean_object* v___x_4035_, lean_object* v___x_4036_, lean_object* v___f_4037_, lean_object* v_a_4038_, lean_object* v_op_4039_, lean_object* v_flags_4040_, lean_object* v_payload_4041_, lean_object* v_x_4042_, lean_object* v___y_4043_){
_start:
{
uint8_t v___x_1877__boxed_4044_; uint32_t v_op_boxed_4045_; uint64_t v_flags_boxed_4046_; lean_object* v_res_4047_; 
v___x_1877__boxed_4044_ = lean_unbox(v___x_4036_);
v_op_boxed_4045_ = lean_unbox_uint32(v_op_4039_);
lean_dec(v_op_4039_);
v_flags_boxed_4046_ = lean_unbox_uint64(v_flags_4040_);
lean_dec_ref(v_flags_4040_);
v_res_4047_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__5(v___x_4035_, v___x_1877__boxed_4044_, v___f_4037_, v_a_4038_, v_op_boxed_4045_, v_flags_boxed_4046_, v_payload_4041_, v_x_4042_);
lean_dec(v_payload_4041_);
lean_dec(v_a_4038_);
return v_res_4047_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__7(lean_object* v___f_4048_, lean_object* v_a_4049_, uint32_t v_op_4050_, uint64_t v_flags_4051_, lean_object* v_payload_4052_, lean_object* v_x_4053_){
_start:
{
if (lean_obj_tag(v_x_4053_) == 0)
{
lean_object* v___x_4055_; 
lean_dec_ref(v___f_4048_);
v___x_4055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4055_, 0, v_x_4053_);
return v___x_4055_;
}
else
{
lean_object* v_a_4056_; lean_object* v___x_4058_; uint8_t v_isShared_4059_; uint8_t v_isSharedCheck_4076_; 
v_a_4056_ = lean_ctor_get(v_x_4053_, 0);
v_isSharedCheck_4076_ = !lean_is_exclusive(v_x_4053_);
if (v_isSharedCheck_4076_ == 0)
{
v___x_4058_ = v_x_4053_;
v_isShared_4059_ = v_isSharedCheck_4076_;
goto v_resetjp_4057_;
}
else
{
lean_inc(v_a_4056_);
lean_dec(v_x_4053_);
v___x_4058_ = lean_box(0);
v_isShared_4059_ = v_isSharedCheck_4076_;
goto v_resetjp_4057_;
}
v_resetjp_4057_:
{
uint32_t v___x_4060_; lean_object* v___x_4061_; uint8_t v___x_4062_; lean_object* v_val_4064_; lean_object* v___x_4067_; 
v___x_4060_ = 0;
v___x_4061_ = lean_unsigned_to_nat(0u);
v___x_4062_ = 0;
v___x_4067_ = lasm_js_call_into(v_a_4049_, v_op_4050_, v___x_4060_, v_flags_4051_, v_a_4056_, v_payload_4052_);
lean_dec(v_a_4056_);
if (lean_obj_tag(v___x_4067_) == 0)
{
lean_object* v_a_4068_; lean_object* v___x_4070_; 
v_a_4068_ = lean_ctor_get(v___x_4067_, 0);
lean_inc(v_a_4068_);
lean_dec_ref_known(v___x_4067_, 1);
if (v_isShared_4059_ == 0)
{
lean_ctor_set(v___x_4058_, 0, v_a_4068_);
v___x_4070_ = v___x_4058_;
goto v_reusejp_4069_;
}
else
{
lean_object* v_reuseFailAlloc_4071_; 
v_reuseFailAlloc_4071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4071_, 0, v_a_4068_);
v___x_4070_ = v_reuseFailAlloc_4071_;
goto v_reusejp_4069_;
}
v_reusejp_4069_:
{
v_val_4064_ = v___x_4070_;
goto v___jp_4063_;
}
}
else
{
lean_object* v_a_4072_; lean_object* v___x_4074_; 
v_a_4072_ = lean_ctor_get(v___x_4067_, 0);
lean_inc(v_a_4072_);
lean_dec_ref_known(v___x_4067_, 1);
if (v_isShared_4059_ == 0)
{
lean_ctor_set_tag(v___x_4058_, 0);
lean_ctor_set(v___x_4058_, 0, v_a_4072_);
v___x_4074_ = v___x_4058_;
goto v_reusejp_4073_;
}
else
{
lean_object* v_reuseFailAlloc_4075_; 
v_reuseFailAlloc_4075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4075_, 0, v_a_4072_);
v___x_4074_ = v_reuseFailAlloc_4075_;
goto v_reusejp_4073_;
}
v_reusejp_4073_:
{
v_val_4064_ = v___x_4074_;
goto v___jp_4063_;
}
}
v___jp_4063_:
{
lean_object* v___x_4065_; lean_object* v___x_4066_; 
v___x_4065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4065_, 0, v_val_4064_);
v___x_4066_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4061_, v___x_4062_, v___x_4065_, v___f_4048_);
return v___x_4066_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__7___boxed(lean_object* v___f_4077_, lean_object* v_a_4078_, lean_object* v_op_4079_, lean_object* v_flags_4080_, lean_object* v_payload_4081_, lean_object* v_x_4082_, lean_object* v___y_4083_){
_start:
{
uint32_t v_op_boxed_4084_; uint64_t v_flags_boxed_4085_; lean_object* v_res_4086_; 
v_op_boxed_4084_ = lean_unbox_uint32(v_op_4079_);
lean_dec(v_op_4079_);
v_flags_boxed_4085_ = lean_unbox_uint64(v_flags_4080_);
lean_dec_ref(v_flags_4080_);
v_res_4086_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__7(v___f_4077_, v_a_4078_, v_op_boxed_4084_, v_flags_boxed_4085_, v_payload_4081_, v_x_4082_);
lean_dec(v_payload_4081_);
lean_dec(v_a_4078_);
return v_res_4086_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__6(lean_object* v_failurePrefix_4087_, uint32_t v_op_4088_, uint64_t v_flags_4089_, lean_object* v_payload_4090_, lean_object* v___f_4091_, lean_object* v___f_4092_, lean_object* v___f_4093_, lean_object* v_x_4094_){
_start:
{
if (lean_obj_tag(v_x_4094_) == 0)
{
lean_object* v_a_4096_; lean_object* v___x_4098_; uint8_t v_isShared_4099_; uint8_t v_isSharedCheck_4104_; 
lean_dec_ref(v___f_4093_);
lean_dec_ref(v___f_4092_);
lean_dec_ref(v___f_4091_);
lean_dec(v_payload_4090_);
v_a_4096_ = lean_ctor_get(v_x_4094_, 0);
v_isSharedCheck_4104_ = !lean_is_exclusive(v_x_4094_);
if (v_isSharedCheck_4104_ == 0)
{
v___x_4098_ = v_x_4094_;
v_isShared_4099_ = v_isSharedCheck_4104_;
goto v_resetjp_4097_;
}
else
{
lean_inc(v_a_4096_);
lean_dec(v_x_4094_);
v___x_4098_ = lean_box(0);
v_isShared_4099_ = v_isSharedCheck_4104_;
goto v_resetjp_4097_;
}
v_resetjp_4097_:
{
lean_object* v___x_4101_; 
if (v_isShared_4099_ == 0)
{
v___x_4101_ = v___x_4098_;
goto v_reusejp_4100_;
}
else
{
lean_object* v_reuseFailAlloc_4103_; 
v_reuseFailAlloc_4103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4103_, 0, v_a_4096_);
v___x_4101_ = v_reuseFailAlloc_4103_;
goto v_reusejp_4100_;
}
v_reusejp_4100_:
{
lean_object* v___x_4102_; 
v___x_4102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4102_, 0, v___x_4101_);
return v___x_4102_;
}
}
}
else
{
lean_object* v_a_4105_; lean_object* v___x_4107_; uint8_t v_isShared_4108_; uint8_t v_isSharedCheck_4151_; 
v_a_4105_ = lean_ctor_get(v_x_4094_, 0);
v_isSharedCheck_4151_ = !lean_is_exclusive(v_x_4094_);
if (v_isSharedCheck_4151_ == 0)
{
v___x_4107_ = v_x_4094_;
v_isShared_4108_ = v_isSharedCheck_4151_;
goto v_resetjp_4106_;
}
else
{
lean_inc(v_a_4105_);
lean_dec(v_x_4094_);
v___x_4107_ = lean_box(0);
v_isShared_4108_ = v_isSharedCheck_4151_;
goto v_resetjp_4106_;
}
v_resetjp_4106_:
{
lean_object* v___x_4109_; lean_object* v___x_4110_; uint8_t v___x_4111_; 
v___x_4109_ = lean_string_utf8_byte_size(v_failurePrefix_4087_);
v___x_4110_ = lean_unsigned_to_nat(0u);
v___x_4111_ = lean_nat_dec_eq(v___x_4109_, v___x_4110_);
if (v___x_4111_ == 0)
{
lean_object* v___f_4112_; lean_object* v___x_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___f_4116_; lean_object* v_val_4118_; lean_object* v___x_4123_; 
lean_dec_ref(v___f_4093_);
lean_inc(v_a_4105_);
v___f_4112_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4112_, 0, v_a_4105_);
v___x_4113_ = lean_box(v___x_4111_);
v___x_4114_ = lean_box_uint32(v_op_4088_);
v___x_4115_ = lean_box_uint64(v_flags_4089_);
lean_inc(v_payload_4090_);
v___f_4116_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__5___boxed), 9, 7);
lean_closure_set(v___f_4116_, 0, v___x_4110_);
lean_closure_set(v___f_4116_, 1, v___x_4113_);
lean_closure_set(v___f_4116_, 2, v___f_4112_);
lean_closure_set(v___f_4116_, 3, v_a_4105_);
lean_closure_set(v___f_4116_, 4, v___x_4114_);
lean_closure_set(v___f_4116_, 5, v___x_4115_);
lean_closure_set(v___f_4116_, 6, v_payload_4090_);
v___x_4123_ = l_Lasm_JS_Wire_encodeIO(v_payload_4090_);
if (lean_obj_tag(v___x_4123_) == 0)
{
lean_object* v_a_4124_; lean_object* v___x_4126_; 
v_a_4124_ = lean_ctor_get(v___x_4123_, 0);
lean_inc(v_a_4124_);
lean_dec_ref_known(v___x_4123_, 1);
if (v_isShared_4108_ == 0)
{
lean_ctor_set(v___x_4107_, 0, v_a_4124_);
v___x_4126_ = v___x_4107_;
goto v_reusejp_4125_;
}
else
{
lean_object* v_reuseFailAlloc_4127_; 
v_reuseFailAlloc_4127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4127_, 0, v_a_4124_);
v___x_4126_ = v_reuseFailAlloc_4127_;
goto v_reusejp_4125_;
}
v_reusejp_4125_:
{
v_val_4118_ = v___x_4126_;
goto v___jp_4117_;
}
}
else
{
lean_object* v_a_4128_; lean_object* v___x_4130_; 
v_a_4128_ = lean_ctor_get(v___x_4123_, 0);
lean_inc(v_a_4128_);
lean_dec_ref_known(v___x_4123_, 1);
if (v_isShared_4108_ == 0)
{
lean_ctor_set_tag(v___x_4107_, 0);
lean_ctor_set(v___x_4107_, 0, v_a_4128_);
v___x_4130_ = v___x_4107_;
goto v_reusejp_4129_;
}
else
{
lean_object* v_reuseFailAlloc_4131_; 
v_reuseFailAlloc_4131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4131_, 0, v_a_4128_);
v___x_4130_ = v_reuseFailAlloc_4131_;
goto v_reusejp_4129_;
}
v_reusejp_4129_:
{
v_val_4118_ = v___x_4130_;
goto v___jp_4117_;
}
}
v___jp_4117_:
{
lean_object* v___x_4119_; lean_object* v___x_4120_; lean_object* v___x_4121_; lean_object* v___x_4122_; 
v___x_4119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4119_, 0, v_val_4118_);
v___x_4120_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4110_, v___x_4111_, v___x_4119_, v___f_4116_);
v___x_4121_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4110_, v___x_4111_, v___x_4120_, v___f_4091_);
v___x_4122_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4110_, v___x_4111_, v___x_4121_, v___f_4092_);
return v___x_4122_;
}
}
else
{
lean_object* v___f_4132_; lean_object* v___x_4133_; lean_object* v___x_4134_; lean_object* v___f_4135_; uint8_t v___x_4136_; lean_object* v_val_4138_; lean_object* v___x_4142_; 
lean_dec_ref(v___f_4092_);
lean_dec_ref(v___f_4091_);
lean_inc(v_a_4105_);
v___f_4132_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4132_, 0, v_a_4105_);
v___x_4133_ = lean_box_uint32(v_op_4088_);
v___x_4134_ = lean_box_uint64(v_flags_4089_);
lean_inc(v_payload_4090_);
v___f_4135_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__7___boxed), 7, 5);
lean_closure_set(v___f_4135_, 0, v___f_4132_);
lean_closure_set(v___f_4135_, 1, v_a_4105_);
lean_closure_set(v___f_4135_, 2, v___x_4133_);
lean_closure_set(v___f_4135_, 3, v___x_4134_);
lean_closure_set(v___f_4135_, 4, v_payload_4090_);
v___x_4136_ = 0;
v___x_4142_ = l_Lasm_JS_Wire_encodeIO(v_payload_4090_);
if (lean_obj_tag(v___x_4142_) == 0)
{
lean_object* v_a_4143_; lean_object* v___x_4145_; 
v_a_4143_ = lean_ctor_get(v___x_4142_, 0);
lean_inc(v_a_4143_);
lean_dec_ref_known(v___x_4142_, 1);
if (v_isShared_4108_ == 0)
{
lean_ctor_set(v___x_4107_, 0, v_a_4143_);
v___x_4145_ = v___x_4107_;
goto v_reusejp_4144_;
}
else
{
lean_object* v_reuseFailAlloc_4146_; 
v_reuseFailAlloc_4146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4146_, 0, v_a_4143_);
v___x_4145_ = v_reuseFailAlloc_4146_;
goto v_reusejp_4144_;
}
v_reusejp_4144_:
{
v_val_4138_ = v___x_4145_;
goto v___jp_4137_;
}
}
else
{
lean_object* v_a_4147_; lean_object* v___x_4149_; 
v_a_4147_ = lean_ctor_get(v___x_4142_, 0);
lean_inc(v_a_4147_);
lean_dec_ref_known(v___x_4142_, 1);
if (v_isShared_4108_ == 0)
{
lean_ctor_set_tag(v___x_4107_, 0);
lean_ctor_set(v___x_4107_, 0, v_a_4147_);
v___x_4149_ = v___x_4107_;
goto v_reusejp_4148_;
}
else
{
lean_object* v_reuseFailAlloc_4150_; 
v_reuseFailAlloc_4150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4150_, 0, v_a_4147_);
v___x_4149_ = v_reuseFailAlloc_4150_;
goto v_reusejp_4148_;
}
v_reusejp_4148_:
{
v_val_4138_ = v___x_4149_;
goto v___jp_4137_;
}
}
v___jp_4137_:
{
lean_object* v___x_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; 
v___x_4139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4139_, 0, v_val_4138_);
v___x_4140_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4110_, v___x_4136_, v___x_4139_, v___f_4135_);
v___x_4141_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4110_, v___x_4136_, v___x_4140_, v___f_4093_);
return v___x_4141_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__6___boxed(lean_object* v_failurePrefix_4152_, lean_object* v_op_4153_, lean_object* v_flags_4154_, lean_object* v_payload_4155_, lean_object* v___f_4156_, lean_object* v___f_4157_, lean_object* v___f_4158_, lean_object* v_x_4159_, lean_object* v___y_4160_){
_start:
{
uint32_t v_op_boxed_4161_; uint64_t v_flags_boxed_4162_; lean_object* v_res_4163_; 
v_op_boxed_4161_ = lean_unbox_uint32(v_op_4153_);
lean_dec(v_op_4153_);
v_flags_boxed_4162_ = lean_unbox_uint64(v_flags_4154_);
lean_dec_ref(v_flags_4154_);
v_res_4163_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__6(v_failurePrefix_4152_, v_op_boxed_4161_, v_flags_boxed_4162_, v_payload_4155_, v___f_4156_, v___f_4157_, v___f_4158_, v_x_4159_);
lean_dec_ref(v_failurePrefix_4152_);
return v_res_4163_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__8(lean_object* v___f_4164_, lean_object* v_x_4165_){
_start:
{
if (lean_obj_tag(v_x_4165_) == 0)
{
lean_object* v_a_4167_; lean_object* v___x_4169_; uint8_t v_isShared_4170_; uint8_t v_isSharedCheck_4175_; 
lean_dec_ref(v___f_4164_);
v_a_4167_ = lean_ctor_get(v_x_4165_, 0);
v_isSharedCheck_4175_ = !lean_is_exclusive(v_x_4165_);
if (v_isSharedCheck_4175_ == 0)
{
v___x_4169_ = v_x_4165_;
v_isShared_4170_ = v_isSharedCheck_4175_;
goto v_resetjp_4168_;
}
else
{
lean_inc(v_a_4167_);
lean_dec(v_x_4165_);
v___x_4169_ = lean_box(0);
v_isShared_4170_ = v_isSharedCheck_4175_;
goto v_resetjp_4168_;
}
v_resetjp_4168_:
{
lean_object* v___x_4172_; 
if (v_isShared_4170_ == 0)
{
v___x_4172_ = v___x_4169_;
goto v_reusejp_4171_;
}
else
{
lean_object* v_reuseFailAlloc_4174_; 
v_reuseFailAlloc_4174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4174_, 0, v_a_4167_);
v___x_4172_ = v_reuseFailAlloc_4174_;
goto v_reusejp_4171_;
}
v_reusejp_4171_:
{
lean_object* v___x_4173_; 
v___x_4173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4173_, 0, v___x_4172_);
return v___x_4173_;
}
}
}
else
{
lean_object* v___x_4177_; uint8_t v_isShared_4178_; uint8_t v_isSharedCheck_4187_; 
v_isSharedCheck_4187_ = !lean_is_exclusive(v_x_4165_);
if (v_isSharedCheck_4187_ == 0)
{
lean_object* v_unused_4188_; 
v_unused_4188_ = lean_ctor_get(v_x_4165_, 0);
lean_dec(v_unused_4188_);
v___x_4177_ = v_x_4165_;
v_isShared_4178_ = v_isSharedCheck_4187_;
goto v_resetjp_4176_;
}
else
{
lean_dec(v_x_4165_);
v___x_4177_ = lean_box(0);
v_isShared_4178_ = v_isSharedCheck_4187_;
goto v_resetjp_4176_;
}
v_resetjp_4176_:
{
lean_object* v___x_4179_; uint8_t v___x_4180_; lean_object* v___x_4181_; lean_object* v___x_4183_; 
v___x_4179_ = lean_unsigned_to_nat(0u);
v___x_4180_ = 0;
v___x_4181_ = lean_io_promise_new();
if (v_isShared_4178_ == 0)
{
lean_ctor_set(v___x_4177_, 0, v___x_4181_);
v___x_4183_ = v___x_4177_;
goto v_reusejp_4182_;
}
else
{
lean_object* v_reuseFailAlloc_4186_; 
v_reuseFailAlloc_4186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4186_, 0, v___x_4181_);
v___x_4183_ = v_reuseFailAlloc_4186_;
goto v_reusejp_4182_;
}
v_reusejp_4182_:
{
lean_object* v___x_4184_; lean_object* v___x_4185_; 
v___x_4184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4184_, 0, v___x_4183_);
v___x_4185_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4179_, v___x_4180_, v___x_4184_, v___f_4164_);
return v___x_4185_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__8___boxed(lean_object* v___f_4189_, lean_object* v_x_4190_, lean_object* v___y_4191_){
_start:
{
lean_object* v_res_4192_; 
v_res_4192_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__8(v___f_4189_, v_x_4190_);
return v_res_4192_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg(lean_object* v_inst_4193_, lean_object* v_context_4194_, uint32_t v_op_4195_, uint64_t v_flags_4196_, lean_object* v_payload_4197_, lean_object* v_failurePrefix_4198_){
_start:
{
lean_object* v___f_4200_; lean_object* v___f_4201_; lean_object* v___f_4202_; lean_object* v___f_4203_; lean_object* v___x_4204_; lean_object* v___x_4205_; lean_object* v___f_4206_; lean_object* v___f_4207_; lean_object* v___x_4208_; uint8_t v___x_4209_; lean_object* v_val_4211_; lean_object* v___x_4214_; 
v___f_4200_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_4200_, 0, v_inst_4193_);
lean_closure_set(v___f_4200_, 1, v_context_4194_);
v___f_4201_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4201_, 0, v___f_4200_);
v___f_4202_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4202_, 0, v___f_4201_);
lean_inc_ref(v_failurePrefix_4198_);
v___f_4203_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_4203_, 0, v_failurePrefix_4198_);
v___x_4204_ = lean_box_uint32(v_op_4195_);
v___x_4205_ = lean_box_uint64(v_flags_4196_);
lean_inc_ref(v___f_4202_);
v___f_4206_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__6___boxed), 9, 7);
lean_closure_set(v___f_4206_, 0, v_failurePrefix_4198_);
lean_closure_set(v___f_4206_, 1, v___x_4204_);
lean_closure_set(v___f_4206_, 2, v___x_4205_);
lean_closure_set(v___f_4206_, 3, v_payload_4197_);
lean_closure_set(v___f_4206_, 4, v___f_4203_);
lean_closure_set(v___f_4206_, 5, v___f_4202_);
lean_closure_set(v___f_4206_, 6, v___f_4202_);
v___f_4207_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__8___boxed), 3, 1);
lean_closure_set(v___f_4207_, 0, v___f_4206_);
v___x_4208_ = lean_unsigned_to_nat(0u);
v___x_4209_ = 0;
v___x_4214_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_4214_) == 0)
{
lean_object* v_a_4215_; lean_object* v___x_4217_; uint8_t v_isShared_4218_; uint8_t v_isSharedCheck_4222_; 
v_a_4215_ = lean_ctor_get(v___x_4214_, 0);
v_isSharedCheck_4222_ = !lean_is_exclusive(v___x_4214_);
if (v_isSharedCheck_4222_ == 0)
{
v___x_4217_ = v___x_4214_;
v_isShared_4218_ = v_isSharedCheck_4222_;
goto v_resetjp_4216_;
}
else
{
lean_inc(v_a_4215_);
lean_dec(v___x_4214_);
v___x_4217_ = lean_box(0);
v_isShared_4218_ = v_isSharedCheck_4222_;
goto v_resetjp_4216_;
}
v_resetjp_4216_:
{
lean_object* v___x_4220_; 
if (v_isShared_4218_ == 0)
{
lean_ctor_set_tag(v___x_4217_, 1);
v___x_4220_ = v___x_4217_;
goto v_reusejp_4219_;
}
else
{
lean_object* v_reuseFailAlloc_4221_; 
v_reuseFailAlloc_4221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4221_, 0, v_a_4215_);
v___x_4220_ = v_reuseFailAlloc_4221_;
goto v_reusejp_4219_;
}
v_reusejp_4219_:
{
v_val_4211_ = v___x_4220_;
goto v___jp_4210_;
}
}
}
else
{
lean_object* v_a_4223_; lean_object* v___x_4225_; uint8_t v_isShared_4226_; uint8_t v_isSharedCheck_4230_; 
v_a_4223_ = lean_ctor_get(v___x_4214_, 0);
v_isSharedCheck_4230_ = !lean_is_exclusive(v___x_4214_);
if (v_isSharedCheck_4230_ == 0)
{
v___x_4225_ = v___x_4214_;
v_isShared_4226_ = v_isSharedCheck_4230_;
goto v_resetjp_4224_;
}
else
{
lean_inc(v_a_4223_);
lean_dec(v___x_4214_);
v___x_4225_ = lean_box(0);
v_isShared_4226_ = v_isSharedCheck_4230_;
goto v_resetjp_4224_;
}
v_resetjp_4224_:
{
lean_object* v___x_4228_; 
if (v_isShared_4226_ == 0)
{
lean_ctor_set_tag(v___x_4225_, 0);
v___x_4228_ = v___x_4225_;
goto v_reusejp_4227_;
}
else
{
lean_object* v_reuseFailAlloc_4229_; 
v_reuseFailAlloc_4229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4229_, 0, v_a_4223_);
v___x_4228_ = v_reuseFailAlloc_4229_;
goto v_reusejp_4227_;
}
v_reusejp_4227_:
{
v_val_4211_ = v___x_4228_;
goto v___jp_4210_;
}
}
}
v___jp_4210_:
{
lean_object* v___x_4212_; lean_object* v___x_4213_; 
v___x_4212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4212_, 0, v_val_4211_);
v___x_4213_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4208_, v___x_4209_, v___x_4212_, v___f_4207_);
return v___x_4213_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___boxed(lean_object* v_inst_4231_, lean_object* v_context_4232_, lean_object* v_op_4233_, lean_object* v_flags_4234_, lean_object* v_payload_4235_, lean_object* v_failurePrefix_4236_, lean_object* v_a_4237_){
_start:
{
uint32_t v_op_boxed_4238_; uint64_t v_flags_boxed_4239_; lean_object* v_res_4240_; 
v_op_boxed_4238_ = lean_unbox_uint32(v_op_4233_);
lean_dec(v_op_4233_);
v_flags_boxed_4239_ = lean_unbox_uint64(v_flags_4234_);
lean_dec_ref(v_flags_4234_);
v_res_4240_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg(v_inst_4231_, v_context_4232_, v_op_boxed_4238_, v_flags_boxed_4239_, v_payload_4235_, v_failurePrefix_4236_);
return v_res_4240_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync(lean_object* v_00_u03b1_4241_, lean_object* v_inst_4242_, lean_object* v_context_4243_, uint32_t v_op_4244_, uint64_t v_flags_4245_, lean_object* v_payload_4246_, lean_object* v_failurePrefix_4247_){
_start:
{
lean_object* v___x_4249_; 
v___x_4249_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg(v_inst_4242_, v_context_4243_, v_op_4244_, v_flags_4245_, v_payload_4246_, v_failurePrefix_4247_);
return v___x_4249_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___boxed(lean_object* v_00_u03b1_4250_, lean_object* v_inst_4251_, lean_object* v_context_4252_, lean_object* v_op_4253_, lean_object* v_flags_4254_, lean_object* v_payload_4255_, lean_object* v_failurePrefix_4256_, lean_object* v_a_4257_){
_start:
{
uint32_t v_op_boxed_4258_; uint64_t v_flags_boxed_4259_; lean_object* v_res_4260_; 
v_op_boxed_4258_ = lean_unbox_uint32(v_op_4253_);
lean_dec(v_op_4253_);
v_flags_boxed_4259_ = lean_unbox_uint64(v_flags_4254_);
lean_dec_ref(v_flags_4254_);
v_res_4260_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync(v_00_u03b1_4250_, v_inst_4251_, v_context_4252_, v_op_boxed_4258_, v_flags_boxed_4259_, v_payload_4255_, v_failurePrefix_4256_);
return v_res_4260_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t v_m_4261_){
_start:
{
uint8_t v___x_4262_; uint8_t v___x_4263_; 
v___x_4262_ = 1;
v___x_4263_ = l_Lasm_JS_instBEqMode_beq(v_m_4261_, v___x_4262_);
if (v___x_4263_ == 0)
{
uint64_t v___x_4264_; 
v___x_4264_ = 0ULL;
return v___x_4264_;
}
else
{
uint64_t v___x_4265_; 
v___x_4265_ = 1ULL;
return v___x_4265_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_modeArg___boxed(lean_object* v_m_4266_){
_start:
{
uint8_t v_m_boxed_4267_; uint64_t v_res_4268_; lean_object* v_r_4269_; 
v_m_boxed_4267_ = lean_unbox(v_m_4266_);
v_res_4268_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v_m_boxed_4267_);
v_r_4269_ = lean_box_uint64(v_res_4268_);
return v_r_4269_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(lean_object* v_inst_4270_, lean_object* v_context_4271_, lean_object* v_bytes_4272_){
_start:
{
lean_object* v___x_4274_; 
v___x_4274_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4272_);
if (lean_obj_tag(v___x_4274_) == 0)
{
lean_object* v_a_4275_; lean_object* v___x_4276_; 
v_a_4275_ = lean_ctor_get(v___x_4274_, 0);
lean_inc(v_a_4275_);
lean_dec_ref_known(v___x_4274_, 1);
v___x_4276_ = l_Lasm_JS_decodeAs___redArg(v_inst_4270_, v_context_4271_, v_a_4275_);
return v___x_4276_;
}
else
{
lean_object* v_a_4277_; lean_object* v___x_4279_; uint8_t v_isShared_4280_; uint8_t v_isSharedCheck_4284_; 
lean_dec_ref(v_inst_4270_);
v_a_4277_ = lean_ctor_get(v___x_4274_, 0);
v_isSharedCheck_4284_ = !lean_is_exclusive(v___x_4274_);
if (v_isSharedCheck_4284_ == 0)
{
v___x_4279_ = v___x_4274_;
v_isShared_4280_ = v_isSharedCheck_4284_;
goto v_resetjp_4278_;
}
else
{
lean_inc(v_a_4277_);
lean_dec(v___x_4274_);
v___x_4279_ = lean_box(0);
v_isShared_4280_ = v_isSharedCheck_4284_;
goto v_resetjp_4278_;
}
v_resetjp_4278_:
{
lean_object* v___x_4282_; 
if (v_isShared_4280_ == 0)
{
v___x_4282_ = v___x_4279_;
goto v_reusejp_4281_;
}
else
{
lean_object* v_reuseFailAlloc_4283_; 
v_reuseFailAlloc_4283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4283_, 0, v_a_4277_);
v___x_4282_ = v_reuseFailAlloc_4283_;
goto v_reusejp_4281_;
}
v_reusejp_4281_:
{
return v___x_4282_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg___boxed(lean_object* v_inst_4285_, lean_object* v_context_4286_, lean_object* v_bytes_4287_, lean_object* v_a_4288_){
_start:
{
lean_object* v_res_4289_; 
v_res_4289_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_4285_, v_context_4286_, v_bytes_4287_);
lean_dec_ref(v_bytes_4287_);
lean_dec_ref(v_context_4286_);
return v_res_4289_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive(lean_object* v_00_u03b1_4290_, lean_object* v_inst_4291_, lean_object* v_context_4292_, lean_object* v_bytes_4293_){
_start:
{
lean_object* v___x_4295_; 
v___x_4295_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_4291_, v_context_4292_, v_bytes_4293_);
return v___x_4295_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___boxed(lean_object* v_00_u03b1_4296_, lean_object* v_inst_4297_, lean_object* v_context_4298_, lean_object* v_bytes_4299_, lean_object* v_a_4300_){
_start:
{
lean_object* v_res_4301_; 
v_res_4301_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive(v_00_u03b1_4296_, v_inst_4297_, v_context_4298_, v_bytes_4299_);
lean_dec_ref(v_bytes_4299_);
lean_dec_ref(v_context_4298_);
return v_res_4301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(lean_object* v_context_4302_, lean_object* v_d_4303_){
_start:
{
lean_object* v_received_4306_; 
if (lean_obj_tag(v_d_4303_) == 9)
{
lean_object* v_value_4320_; lean_object* v___x_4321_; 
v_value_4320_ = lean_ctor_get(v_d_4303_, 0);
lean_inc(v_value_4320_);
lean_dec_ref_known(v_d_4303_, 2);
v___x_4321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4321_, 0, v_value_4320_);
return v___x_4321_;
}
else
{
if (lean_obj_tag(v_d_4303_) == 9)
{
lean_object* v_value_4322_; lean_object* v_description_4323_; lean_object* v___x_4324_; uint8_t v___x_4325_; 
v_value_4322_ = lean_ctor_get(v_d_4303_, 0);
v_description_4323_ = lean_ctor_get(v_d_4303_, 1);
v___x_4324_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___x_4325_ = lean_string_dec_eq(v_description_4323_, v___x_4324_);
if (v___x_4325_ == 0)
{
goto v___jp_4318_;
}
else
{
uint32_t v___x_4326_; uint64_t v___x_4327_; lean_object* v___x_4328_; uint32_t v___x_4329_; lean_object* v___x_4330_; 
lean_inc_n(v_value_4322_, 2);
lean_dec_ref_known(v_d_4303_, 2);
v___x_4326_ = 206;
v___x_4327_ = 0ULL;
v___x_4328_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4328_, 0, v_value_4322_);
lean_ctor_set(v___x_4328_, 1, v___x_4324_);
v___x_4329_ = lasm_js_value_handle(v_value_4322_);
lean_dec(v_value_4322_);
v___x_4330_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4326_, v___x_4327_, v___x_4328_, v___x_4329_);
if (lean_obj_tag(v___x_4330_) == 0)
{
lean_object* v_a_4331_; uint8_t v___x_4332_; 
v_a_4331_ = lean_ctor_get(v___x_4330_, 0);
lean_inc(v_a_4331_);
lean_dec_ref_known(v___x_4330_, 1);
v___x_4332_ = lean_string_validate_utf8(v_a_4331_);
if (v___x_4332_ == 0)
{
lean_object* v___x_4333_; lean_object* v___x_4334_; 
lean_dec(v_a_4331_);
v___x_4333_ = lean_obj_once(&l_Lasm_JS_decodeAs___redArg___closed__7, &l_Lasm_JS_decodeAs___redArg___closed__7_once, _init_l_Lasm_JS_decodeAs___redArg___closed__7);
v___x_4334_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4333_);
v_received_4306_ = v___x_4334_;
goto v___jp_4305_;
}
else
{
lean_object* v___x_4335_; 
v___x_4335_ = lean_string_from_utf8_unchecked(v_a_4331_);
v_received_4306_ = v___x_4335_;
goto v___jp_4305_;
}
}
else
{
lean_object* v___x_4336_; 
lean_dec_ref_known(v___x_4330_, 1);
v___x_4336_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__8));
v_received_4306_ = v___x_4336_;
goto v___jp_4305_;
}
}
}
else
{
goto v___jp_4318_;
}
}
v___jp_4305_:
{
lean_object* v___x_4307_; lean_object* v___x_4308_; lean_object* v___x_4309_; lean_object* v___x_4310_; lean_object* v___x_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; lean_object* v___x_4315_; lean_object* v___x_4316_; lean_object* v___x_4317_; 
v___x_4307_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__0));
v___x_4308_ = lean_string_append(v___x_4307_, v_context_4302_);
v___x_4309_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__1));
v___x_4310_ = lean_string_append(v___x_4308_, v___x_4309_);
v___x_4311_ = ((lean_object*)(l_Lasm_JS_instFromJSValue___closed__1));
v___x_4312_ = lean_string_append(v___x_4310_, v___x_4311_);
v___x_4313_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__2));
v___x_4314_ = lean_string_append(v___x_4312_, v___x_4313_);
v___x_4315_ = lean_string_append(v___x_4314_, v_received_4306_);
lean_dec_ref(v_received_4306_);
v___x_4316_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4316_, 0, v___x_4315_);
v___x_4317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4317_, 0, v___x_4316_);
return v___x_4317_;
}
v___jp_4318_:
{
lean_object* v___x_4319_; 
v___x_4319_ = l_Lasm_JS_Data_describe(v_d_4303_);
v_received_4306_ = v___x_4319_;
goto v___jp_4305_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0___boxed(lean_object* v_context_4337_, lean_object* v_d_4338_, lean_object* v_a_4339_){
_start:
{
lean_object* v_res_4340_; 
v_res_4340_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v_context_4337_, v_d_4338_);
lean_dec_ref(v_context_4337_);
return v_res_4340_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object* v_context_4341_, lean_object* v_bytes_4342_){
_start:
{
lean_object* v___x_4344_; 
v___x_4344_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_4342_);
if (lean_obj_tag(v___x_4344_) == 0)
{
lean_object* v_a_4345_; lean_object* v___x_4346_; 
v_a_4345_ = lean_ctor_get(v___x_4344_, 0);
lean_inc(v_a_4345_);
lean_dec_ref_known(v___x_4344_, 1);
v___x_4346_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v_context_4341_, v_a_4345_);
return v___x_4346_;
}
else
{
lean_object* v_a_4347_; lean_object* v___x_4349_; uint8_t v_isShared_4350_; uint8_t v_isSharedCheck_4354_; 
v_a_4347_ = lean_ctor_get(v___x_4344_, 0);
v_isSharedCheck_4354_ = !lean_is_exclusive(v___x_4344_);
if (v_isSharedCheck_4354_ == 0)
{
v___x_4349_ = v___x_4344_;
v_isShared_4350_ = v_isSharedCheck_4354_;
goto v_resetjp_4348_;
}
else
{
lean_inc(v_a_4347_);
lean_dec(v___x_4344_);
v___x_4349_ = lean_box(0);
v_isShared_4350_ = v_isSharedCheck_4354_;
goto v_resetjp_4348_;
}
v_resetjp_4348_:
{
lean_object* v___x_4352_; 
if (v_isShared_4350_ == 0)
{
v___x_4352_ = v___x_4349_;
goto v_reusejp_4351_;
}
else
{
lean_object* v_reuseFailAlloc_4353_; 
v_reuseFailAlloc_4353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4353_, 0, v_a_4347_);
v___x_4352_ = v_reuseFailAlloc_4353_;
goto v_reusejp_4351_;
}
v_reusejp_4351_:
{
return v___x_4352_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0___boxed(lean_object* v_context_4355_, lean_object* v_bytes_4356_, lean_object* v_a_4357_){
_start:
{
lean_object* v_res_4358_; 
v_res_4358_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v_context_4355_, v_bytes_4356_);
lean_dec_ref(v_bytes_4356_);
lean_dec_ref(v_context_4355_);
return v_res_4358_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_global(){
_start:
{
uint32_t v___x_4361_; uint32_t v___x_4362_; uint64_t v___x_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; 
v___x_4361_ = 202;
v___x_4362_ = 0;
v___x_4363_ = 0ULL;
v___x_4364_ = l_ByteArray_empty;
v___x_4365_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_4361_, v___x_4362_, v___x_4363_, v___x_4364_);
if (lean_obj_tag(v___x_4365_) == 0)
{
lean_object* v_a_4366_; lean_object* v___x_4367_; lean_object* v___x_4368_; 
v_a_4366_ = lean_ctor_get(v___x_4365_, 0);
lean_inc(v_a_4366_);
lean_dec_ref_known(v___x_4365_, 1);
v___x_4367_ = ((lean_object*)(l_Lasm_JS_global___closed__0));
v___x_4368_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_4367_, v_a_4366_);
lean_dec(v_a_4366_);
return v___x_4368_;
}
else
{
lean_object* v_a_4369_; lean_object* v___x_4371_; uint8_t v_isShared_4372_; uint8_t v_isSharedCheck_4376_; 
v_a_4369_ = lean_ctor_get(v___x_4365_, 0);
v_isSharedCheck_4376_ = !lean_is_exclusive(v___x_4365_);
if (v_isSharedCheck_4376_ == 0)
{
v___x_4371_ = v___x_4365_;
v_isShared_4372_ = v_isSharedCheck_4376_;
goto v_resetjp_4370_;
}
else
{
lean_inc(v_a_4369_);
lean_dec(v___x_4365_);
v___x_4371_ = lean_box(0);
v_isShared_4372_ = v_isSharedCheck_4376_;
goto v_resetjp_4370_;
}
v_resetjp_4370_:
{
lean_object* v___x_4374_; 
if (v_isShared_4372_ == 0)
{
v___x_4374_ = v___x_4371_;
goto v_reusejp_4373_;
}
else
{
lean_object* v_reuseFailAlloc_4375_; 
v_reuseFailAlloc_4375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4375_, 0, v_a_4369_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_global___boxed(lean_object* v_a_4377_){
_start:
{
lean_object* v_res_4378_; 
v_res_4378_ = l_Lasm_JS_global();
return v_res_4378_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___redArg(lean_object* v_specifier_4380_, lean_object* v_inst_4381_){
_start:
{
uint8_t v_mode_4383_; uint32_t v___x_4384_; uint32_t v___x_4385_; uint64_t v___x_4386_; lean_object* v___x_4387_; lean_object* v___x_4388_; 
v_mode_4383_ = lean_ctor_get_uint8(v_inst_4381_, sizeof(void*)*2);
v___x_4384_ = 201;
v___x_4385_ = 0;
v___x_4386_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v_mode_4383_);
lean_inc_ref(v_specifier_4380_);
v___x_4387_ = lean_string_to_utf8(v_specifier_4380_);
v___x_4388_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_4384_, v___x_4385_, v___x_4386_, v___x_4387_);
lean_dec_ref(v___x_4387_);
if (lean_obj_tag(v___x_4388_) == 0)
{
lean_object* v_a_4389_; lean_object* v___x_4390_; lean_object* v___x_4391_; lean_object* v___x_4392_; lean_object* v___x_4393_; lean_object* v___x_4394_; lean_object* v___x_4395_; lean_object* v___x_4396_; lean_object* v___x_4397_; 
v_a_4389_ = lean_ctor_get(v___x_4388_, 0);
lean_inc(v_a_4389_);
lean_dec_ref_known(v___x_4388_, 1);
v___x_4390_ = ((lean_object*)(l_Lasm_JS_require___redArg___closed__0));
v___x_4391_ = l_String_quote(v_specifier_4380_);
v___x_4392_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4392_, 0, v___x_4391_);
v___x_4393_ = lean_unsigned_to_nat(120u);
v___x_4394_ = lean_unsigned_to_nat(0u);
v___x_4395_ = l_Std_Format_pretty(v___x_4392_, v___x_4393_, v___x_4394_, v___x_4394_);
v___x_4396_ = lean_string_append(v___x_4390_, v___x_4395_);
lean_dec_ref(v___x_4395_);
v___x_4397_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_4381_, v___x_4396_, v_a_4389_);
lean_dec(v_a_4389_);
lean_dec_ref(v___x_4396_);
return v___x_4397_;
}
else
{
lean_object* v_a_4398_; lean_object* v___x_4400_; uint8_t v_isShared_4401_; uint8_t v_isSharedCheck_4405_; 
lean_dec_ref(v_inst_4381_);
lean_dec_ref(v_specifier_4380_);
v_a_4398_ = lean_ctor_get(v___x_4388_, 0);
v_isSharedCheck_4405_ = !lean_is_exclusive(v___x_4388_);
if (v_isSharedCheck_4405_ == 0)
{
v___x_4400_ = v___x_4388_;
v_isShared_4401_ = v_isSharedCheck_4405_;
goto v_resetjp_4399_;
}
else
{
lean_inc(v_a_4398_);
lean_dec(v___x_4388_);
v___x_4400_ = lean_box(0);
v_isShared_4401_ = v_isSharedCheck_4405_;
goto v_resetjp_4399_;
}
v_resetjp_4399_:
{
lean_object* v___x_4403_; 
if (v_isShared_4401_ == 0)
{
v___x_4403_ = v___x_4400_;
goto v_reusejp_4402_;
}
else
{
lean_object* v_reuseFailAlloc_4404_; 
v_reuseFailAlloc_4404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4404_, 0, v_a_4398_);
v___x_4403_ = v_reuseFailAlloc_4404_;
goto v_reusejp_4402_;
}
v_reusejp_4402_:
{
return v___x_4403_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___redArg___boxed(lean_object* v_specifier_4406_, lean_object* v_inst_4407_, lean_object* v_a_4408_){
_start:
{
lean_object* v_res_4409_; 
v_res_4409_ = l_Lasm_JS_require___redArg(v_specifier_4406_, v_inst_4407_);
return v_res_4409_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require(lean_object* v_specifier_4410_, lean_object* v_00_u03b1_4411_, lean_object* v_inst_4412_){
_start:
{
lean_object* v___x_4414_; 
v___x_4414_ = l_Lasm_JS_require___redArg(v_specifier_4410_, v_inst_4412_);
return v___x_4414_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___boxed(lean_object* v_specifier_4415_, lean_object* v_00_u03b1_4416_, lean_object* v_inst_4417_, lean_object* v_a_4418_){
_start:
{
lean_object* v_res_4419_; 
v_res_4419_ = l_Lasm_JS_require(v_specifier_4415_, v_00_u03b1_4416_, v_inst_4417_);
return v_res_4419_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_describe(lean_object* v_v_4420_){
_start:
{
uint32_t v___x_4422_; uint64_t v___x_4423_; lean_object* v___x_4424_; lean_object* v___x_4425_; uint32_t v___x_4426_; lean_object* v___x_4427_; 
v___x_4422_ = 206;
v___x_4423_ = 0ULL;
v___x_4424_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
lean_inc(v_v_4420_);
v___x_4425_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4425_, 0, v_v_4420_);
lean_ctor_set(v___x_4425_, 1, v___x_4424_);
v___x_4426_ = lasm_js_value_handle(v_v_4420_);
lean_dec(v_v_4420_);
v___x_4427_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4422_, v___x_4423_, v___x_4425_, v___x_4426_);
if (lean_obj_tag(v___x_4427_) == 0)
{
lean_object* v_a_4428_; lean_object* v___x_4430_; uint8_t v_isShared_4431_; uint8_t v_isSharedCheck_4442_; 
v_a_4428_ = lean_ctor_get(v___x_4427_, 0);
v_isSharedCheck_4442_ = !lean_is_exclusive(v___x_4427_);
if (v_isSharedCheck_4442_ == 0)
{
v___x_4430_ = v___x_4427_;
v_isShared_4431_ = v_isSharedCheck_4442_;
goto v_resetjp_4429_;
}
else
{
lean_inc(v_a_4428_);
lean_dec(v___x_4427_);
v___x_4430_ = lean_box(0);
v_isShared_4431_ = v_isSharedCheck_4442_;
goto v_resetjp_4429_;
}
v_resetjp_4429_:
{
uint8_t v___x_4432_; 
v___x_4432_ = lean_string_validate_utf8(v_a_4428_);
if (v___x_4432_ == 0)
{
lean_object* v___x_4433_; lean_object* v___x_4434_; lean_object* v___x_4436_; 
lean_dec(v_a_4428_);
v___x_4433_ = lean_obj_once(&l_Lasm_JS_decodeAs___redArg___closed__7, &l_Lasm_JS_decodeAs___redArg___closed__7_once, _init_l_Lasm_JS_decodeAs___redArg___closed__7);
v___x_4434_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_4433_);
if (v_isShared_4431_ == 0)
{
lean_ctor_set(v___x_4430_, 0, v___x_4434_);
v___x_4436_ = v___x_4430_;
goto v_reusejp_4435_;
}
else
{
lean_object* v_reuseFailAlloc_4437_; 
v_reuseFailAlloc_4437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4437_, 0, v___x_4434_);
v___x_4436_ = v_reuseFailAlloc_4437_;
goto v_reusejp_4435_;
}
v_reusejp_4435_:
{
return v___x_4436_;
}
}
else
{
lean_object* v___x_4438_; lean_object* v___x_4440_; 
v___x_4438_ = lean_string_from_utf8_unchecked(v_a_4428_);
if (v_isShared_4431_ == 0)
{
lean_ctor_set(v___x_4430_, 0, v___x_4438_);
v___x_4440_ = v___x_4430_;
goto v_reusejp_4439_;
}
else
{
lean_object* v_reuseFailAlloc_4441_; 
v_reuseFailAlloc_4441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4441_, 0, v___x_4438_);
v___x_4440_ = v_reuseFailAlloc_4441_;
goto v_reusejp_4439_;
}
v_reusejp_4439_:
{
return v___x_4440_;
}
}
}
}
else
{
lean_object* v_a_4443_; lean_object* v___x_4445_; uint8_t v_isShared_4446_; uint8_t v_isSharedCheck_4450_; 
v_a_4443_ = lean_ctor_get(v___x_4427_, 0);
v_isSharedCheck_4450_ = !lean_is_exclusive(v___x_4427_);
if (v_isSharedCheck_4450_ == 0)
{
v___x_4445_ = v___x_4427_;
v_isShared_4446_ = v_isSharedCheck_4450_;
goto v_resetjp_4444_;
}
else
{
lean_inc(v_a_4443_);
lean_dec(v___x_4427_);
v___x_4445_ = lean_box(0);
v_isShared_4446_ = v_isSharedCheck_4450_;
goto v_resetjp_4444_;
}
v_resetjp_4444_:
{
lean_object* v___x_4448_; 
if (v_isShared_4446_ == 0)
{
v___x_4448_ = v___x_4445_;
goto v_reusejp_4447_;
}
else
{
lean_object* v_reuseFailAlloc_4449_; 
v_reuseFailAlloc_4449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4449_, 0, v_a_4443_);
v___x_4448_ = v_reuseFailAlloc_4449_;
goto v_reusejp_4447_;
}
v_reusejp_4447_:
{
return v___x_4448_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_describe___boxed(lean_object* v_v_4451_, lean_object* v_a_4452_){
_start:
{
lean_object* v_res_4453_; 
v_res_4453_ = l_Lasm_JS_Value_describe(v_v_4451_);
return v_res_4453_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object* v_x_4454_){
_start:
{
if (lean_obj_tag(v_x_4454_) == 4)
{
lean_object* v_s_4455_; lean_object* v___x_4457_; uint8_t v_isShared_4458_; uint8_t v_isSharedCheck_4466_; 
v_s_4455_ = lean_ctor_get(v_x_4454_, 0);
v_isSharedCheck_4466_ = !lean_is_exclusive(v_x_4454_);
if (v_isSharedCheck_4466_ == 0)
{
v___x_4457_ = v_x_4454_;
v_isShared_4458_ = v_isSharedCheck_4466_;
goto v_resetjp_4456_;
}
else
{
lean_inc(v_s_4455_);
lean_dec(v_x_4454_);
v___x_4457_ = lean_box(0);
v_isShared_4458_ = v_isSharedCheck_4466_;
goto v_resetjp_4456_;
}
v_resetjp_4456_:
{
lean_object* v___x_4459_; lean_object* v___x_4461_; 
v___x_4459_ = l_String_quote(v_s_4455_);
if (v_isShared_4458_ == 0)
{
lean_ctor_set_tag(v___x_4457_, 3);
lean_ctor_set(v___x_4457_, 0, v___x_4459_);
v___x_4461_ = v___x_4457_;
goto v_reusejp_4460_;
}
else
{
lean_object* v_reuseFailAlloc_4465_; 
v_reuseFailAlloc_4465_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4465_, 0, v___x_4459_);
v___x_4461_ = v_reuseFailAlloc_4465_;
goto v_reusejp_4460_;
}
v_reusejp_4460_:
{
lean_object* v___x_4462_; lean_object* v___x_4463_; lean_object* v___x_4464_; 
v___x_4462_ = lean_unsigned_to_nat(120u);
v___x_4463_ = lean_unsigned_to_nat(0u);
v___x_4464_ = l_Std_Format_pretty(v___x_4461_, v___x_4462_, v___x_4463_, v___x_4463_);
return v___x_4464_;
}
}
}
else
{
lean_object* v___x_4467_; 
v___x_4467_ = l_Lasm_JS_Data_describe(v_x_4454_);
return v___x_4467_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___redArg(lean_object* v_inst_4469_, lean_object* v_o_4470_, lean_object* v_key_4471_, lean_object* v_inst_4472_){
_start:
{
lean_object* v_k_4474_; lean_object* v___x_4475_; 
v_k_4474_ = lean_apply_1(v_inst_4469_, v_key_4471_);
lean_inc(v_k_4474_);
v___x_4475_ = l_Lasm_JS_Wire_encodeIO(v_k_4474_);
if (lean_obj_tag(v___x_4475_) == 0)
{
lean_object* v_a_4476_; uint8_t v_mode_4477_; uint32_t v___x_4478_; uint32_t v___x_4479_; uint64_t v___x_4480_; lean_object* v___x_4481_; lean_object* v___x_4482_; lean_object* v___x_4483_; lean_object* v___x_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; lean_object* v___x_4487_; lean_object* v___x_4488_; 
v_a_4476_ = lean_ctor_get(v___x_4475_, 0);
lean_inc(v_a_4476_);
lean_dec_ref_known(v___x_4475_, 1);
v_mode_4477_ = lean_ctor_get_uint8(v_inst_4472_, sizeof(void*)*2);
v___x_4478_ = 203;
v___x_4479_ = lasm_js_value_handle(v_o_4470_);
v___x_4480_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v_mode_4477_);
v___x_4481_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___x_4482_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4482_, 0, v_o_4470_);
lean_ctor_set(v___x_4482_, 1, v___x_4481_);
v___x_4483_ = lean_unsigned_to_nat(2u);
v___x_4484_ = lean_mk_empty_array_with_capacity(v___x_4483_);
lean_inc(v_k_4474_);
v___x_4485_ = lean_array_push(v___x_4484_, v_k_4474_);
v___x_4486_ = lean_array_push(v___x_4485_, v___x_4482_);
v___x_4487_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4487_, 0, v___x_4486_);
v___x_4488_ = lasm_js_call(v___x_4478_, v___x_4479_, v___x_4480_, v_a_4476_, v___x_4487_);
lean_dec_ref_known(v___x_4487_, 1);
lean_dec(v_a_4476_);
if (lean_obj_tag(v___x_4488_) == 0)
{
lean_object* v_a_4489_; lean_object* v___x_4490_; lean_object* v___x_4491_; lean_object* v___x_4492_; lean_object* v___x_4493_; 
v_a_4489_ = lean_ctor_get(v___x_4488_, 0);
lean_inc(v_a_4489_);
lean_dec_ref_known(v___x_4488_, 1);
v___x_4490_ = ((lean_object*)(l_Lasm_JS_Value_get___redArg___closed__0));
v___x_4491_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_4474_);
v___x_4492_ = lean_string_append(v___x_4490_, v___x_4491_);
lean_dec_ref(v___x_4491_);
v___x_4493_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_4472_, v___x_4492_, v_a_4489_);
lean_dec(v_a_4489_);
lean_dec_ref(v___x_4492_);
return v___x_4493_;
}
else
{
lean_object* v_a_4494_; lean_object* v___x_4496_; uint8_t v_isShared_4497_; uint8_t v_isSharedCheck_4501_; 
lean_dec(v_k_4474_);
lean_dec_ref(v_inst_4472_);
v_a_4494_ = lean_ctor_get(v___x_4488_, 0);
v_isSharedCheck_4501_ = !lean_is_exclusive(v___x_4488_);
if (v_isSharedCheck_4501_ == 0)
{
v___x_4496_ = v___x_4488_;
v_isShared_4497_ = v_isSharedCheck_4501_;
goto v_resetjp_4495_;
}
else
{
lean_inc(v_a_4494_);
lean_dec(v___x_4488_);
v___x_4496_ = lean_box(0);
v_isShared_4497_ = v_isSharedCheck_4501_;
goto v_resetjp_4495_;
}
v_resetjp_4495_:
{
lean_object* v___x_4499_; 
if (v_isShared_4497_ == 0)
{
v___x_4499_ = v___x_4496_;
goto v_reusejp_4498_;
}
else
{
lean_object* v_reuseFailAlloc_4500_; 
v_reuseFailAlloc_4500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4500_, 0, v_a_4494_);
v___x_4499_ = v_reuseFailAlloc_4500_;
goto v_reusejp_4498_;
}
v_reusejp_4498_:
{
return v___x_4499_;
}
}
}
}
else
{
lean_object* v_a_4502_; lean_object* v___x_4504_; uint8_t v_isShared_4505_; uint8_t v_isSharedCheck_4509_; 
lean_dec(v_k_4474_);
lean_dec_ref(v_inst_4472_);
lean_dec(v_o_4470_);
v_a_4502_ = lean_ctor_get(v___x_4475_, 0);
v_isSharedCheck_4509_ = !lean_is_exclusive(v___x_4475_);
if (v_isSharedCheck_4509_ == 0)
{
v___x_4504_ = v___x_4475_;
v_isShared_4505_ = v_isSharedCheck_4509_;
goto v_resetjp_4503_;
}
else
{
lean_inc(v_a_4502_);
lean_dec(v___x_4475_);
v___x_4504_ = lean_box(0);
v_isShared_4505_ = v_isSharedCheck_4509_;
goto v_resetjp_4503_;
}
v_resetjp_4503_:
{
lean_object* v___x_4507_; 
if (v_isShared_4505_ == 0)
{
v___x_4507_ = v___x_4504_;
goto v_reusejp_4506_;
}
else
{
lean_object* v_reuseFailAlloc_4508_; 
v_reuseFailAlloc_4508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4508_, 0, v_a_4502_);
v___x_4507_ = v_reuseFailAlloc_4508_;
goto v_reusejp_4506_;
}
v_reusejp_4506_:
{
return v___x_4507_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___redArg___boxed(lean_object* v_inst_4510_, lean_object* v_o_4511_, lean_object* v_key_4512_, lean_object* v_inst_4513_, lean_object* v_a_4514_){
_start:
{
lean_object* v_res_4515_; 
v_res_4515_ = l_Lasm_JS_Value_get___redArg(v_inst_4510_, v_o_4511_, v_key_4512_, v_inst_4513_);
return v_res_4515_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get(lean_object* v_00_u03ba_4516_, lean_object* v_inst_4517_, lean_object* v_o_4518_, lean_object* v_key_4519_, lean_object* v_00_u03b1_4520_, lean_object* v_inst_4521_){
_start:
{
lean_object* v___x_4523_; 
v___x_4523_ = l_Lasm_JS_Value_get___redArg(v_inst_4517_, v_o_4518_, v_key_4519_, v_inst_4521_);
return v___x_4523_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___boxed(lean_object* v_00_u03ba_4524_, lean_object* v_inst_4525_, lean_object* v_o_4526_, lean_object* v_key_4527_, lean_object* v_00_u03b1_4528_, lean_object* v_inst_4529_, lean_object* v_a_4530_){
_start:
{
lean_object* v_res_4531_; 
v_res_4531_ = l_Lasm_JS_Value_get(v_00_u03ba_4524_, v_inst_4525_, v_o_4526_, v_key_4527_, v_00_u03b1_4528_, v_inst_4529_);
return v_res_4531_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___redArg___lam__0(lean_object* v_x_4532_){
_start:
{
lean_object* v___x_4533_; 
v___x_4533_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4533_, 0, v_x_4532_);
return v___x_4533_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___redArg(lean_object* v_o_4536_, lean_object* v_keys_4537_, lean_object* v_inst_4538_){
_start:
{
lean_object* v___f_4540_; lean_object* v___x_4541_; size_t v_sz_4542_; size_t v___x_4543_; lean_object* v___x_4544_; lean_object* v___x_4545_; lean_object* v___x_4546_; 
v___f_4540_ = ((lean_object*)(l_Lasm_JS_Value_getFields___redArg___closed__0));
v___x_4541_ = ((lean_object*)(l_Lasm_JS_instToJSArray___redArg___lam__1___closed__9));
v_sz_4542_ = lean_array_size(v_keys_4537_);
v___x_4543_ = ((size_t)0ULL);
v___x_4544_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_4541_, v___f_4540_, v_sz_4542_, v___x_4543_, v_keys_4537_);
v___x_4545_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4545_, 0, v___x_4544_);
v___x_4546_ = l_Lasm_JS_Wire_encodeIO(v___x_4545_);
if (lean_obj_tag(v___x_4546_) == 0)
{
lean_object* v_a_4547_; uint32_t v___x_4548_; uint32_t v___x_4549_; uint64_t v___x_4550_; lean_object* v___x_4551_; lean_object* v___x_4552_; lean_object* v___x_4553_; 
v_a_4547_ = lean_ctor_get(v___x_4546_, 0);
lean_inc(v_a_4547_);
lean_dec_ref_known(v___x_4546_, 1);
v___x_4548_ = 203;
v___x_4549_ = lasm_js_value_handle(v_o_4536_);
v___x_4550_ = 2ULL;
v___x_4551_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___x_4552_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4552_, 0, v_o_4536_);
lean_ctor_set(v___x_4552_, 1, v___x_4551_);
v___x_4553_ = lasm_js_call(v___x_4548_, v___x_4549_, v___x_4550_, v_a_4547_, v___x_4552_);
lean_dec_ref_known(v___x_4552_, 2);
lean_dec(v_a_4547_);
if (lean_obj_tag(v___x_4553_) == 0)
{
lean_object* v_a_4554_; lean_object* v___x_4555_; lean_object* v___x_4556_; 
v_a_4554_ = lean_ctor_get(v___x_4553_, 0);
lean_inc(v_a_4554_);
lean_dec_ref_known(v___x_4553_, 1);
v___x_4555_ = ((lean_object*)(l_Lasm_JS_Value_getFields___redArg___closed__1));
v___x_4556_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_4538_, v___x_4555_, v_a_4554_);
lean_dec(v_a_4554_);
return v___x_4556_;
}
else
{
lean_object* v_a_4557_; lean_object* v___x_4559_; uint8_t v_isShared_4560_; uint8_t v_isSharedCheck_4564_; 
lean_dec_ref(v_inst_4538_);
v_a_4557_ = lean_ctor_get(v___x_4553_, 0);
v_isSharedCheck_4564_ = !lean_is_exclusive(v___x_4553_);
if (v_isSharedCheck_4564_ == 0)
{
v___x_4559_ = v___x_4553_;
v_isShared_4560_ = v_isSharedCheck_4564_;
goto v_resetjp_4558_;
}
else
{
lean_inc(v_a_4557_);
lean_dec(v___x_4553_);
v___x_4559_ = lean_box(0);
v_isShared_4560_ = v_isSharedCheck_4564_;
goto v_resetjp_4558_;
}
v_resetjp_4558_:
{
lean_object* v___x_4562_; 
if (v_isShared_4560_ == 0)
{
v___x_4562_ = v___x_4559_;
goto v_reusejp_4561_;
}
else
{
lean_object* v_reuseFailAlloc_4563_; 
v_reuseFailAlloc_4563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4563_, 0, v_a_4557_);
v___x_4562_ = v_reuseFailAlloc_4563_;
goto v_reusejp_4561_;
}
v_reusejp_4561_:
{
return v___x_4562_;
}
}
}
}
else
{
lean_object* v_a_4565_; lean_object* v___x_4567_; uint8_t v_isShared_4568_; uint8_t v_isSharedCheck_4572_; 
lean_dec_ref(v_inst_4538_);
lean_dec(v_o_4536_);
v_a_4565_ = lean_ctor_get(v___x_4546_, 0);
v_isSharedCheck_4572_ = !lean_is_exclusive(v___x_4546_);
if (v_isSharedCheck_4572_ == 0)
{
v___x_4567_ = v___x_4546_;
v_isShared_4568_ = v_isSharedCheck_4572_;
goto v_resetjp_4566_;
}
else
{
lean_inc(v_a_4565_);
lean_dec(v___x_4546_);
v___x_4567_ = lean_box(0);
v_isShared_4568_ = v_isSharedCheck_4572_;
goto v_resetjp_4566_;
}
v_resetjp_4566_:
{
lean_object* v___x_4570_; 
if (v_isShared_4568_ == 0)
{
v___x_4570_ = v___x_4567_;
goto v_reusejp_4569_;
}
else
{
lean_object* v_reuseFailAlloc_4571_; 
v_reuseFailAlloc_4571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4571_, 0, v_a_4565_);
v___x_4570_ = v_reuseFailAlloc_4571_;
goto v_reusejp_4569_;
}
v_reusejp_4569_:
{
return v___x_4570_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___redArg___boxed(lean_object* v_o_4573_, lean_object* v_keys_4574_, lean_object* v_inst_4575_, lean_object* v_a_4576_){
_start:
{
lean_object* v_res_4577_; 
v_res_4577_ = l_Lasm_JS_Value_getFields___redArg(v_o_4573_, v_keys_4574_, v_inst_4575_);
return v_res_4577_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields(lean_object* v_o_4578_, lean_object* v_keys_4579_, lean_object* v_00_u03b1_4580_, lean_object* v_inst_4581_){
_start:
{
lean_object* v___x_4583_; 
v___x_4583_ = l_Lasm_JS_Value_getFields___redArg(v_o_4578_, v_keys_4579_, v_inst_4581_);
return v___x_4583_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___boxed(lean_object* v_o_4584_, lean_object* v_keys_4585_, lean_object* v_00_u03b1_4586_, lean_object* v_inst_4587_, lean_object* v_a_4588_){
_start:
{
lean_object* v_res_4589_; 
v_res_4589_ = l_Lasm_JS_Value_getFields(v_o_4584_, v_keys_4585_, v_00_u03b1_4586_, v_inst_4587_);
return v_res_4589_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___redArg(lean_object* v_inst_4590_, lean_object* v_inst_4591_, lean_object* v_o_4592_, lean_object* v_key_4593_, lean_object* v_x_4594_){
_start:
{
lean_object* v___x_4596_; lean_object* v___x_4597_; lean_object* v___x_4598_; lean_object* v___x_4599_; lean_object* v___x_4600_; lean_object* v___x_4601_; lean_object* v___x_4602_; lean_object* v___x_4603_; lean_object* v___x_4604_; lean_object* v_payload_4605_; lean_object* v___x_4606_; lean_object* v___x_4607_; lean_object* v___x_4608_; lean_object* v___x_4609_; lean_object* v___x_4610_; lean_object* v___x_4611_; 
v___x_4596_ = lean_apply_1(v_inst_4590_, v_key_4593_);
v___x_4597_ = lean_apply_1(v_inst_4591_, v_x_4594_);
v___x_4598_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
lean_inc(v_o_4592_);
v___x_4599_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4599_, 0, v_o_4592_);
lean_ctor_set(v___x_4599_, 1, v___x_4598_);
v___x_4600_ = lean_unsigned_to_nat(3u);
v___x_4601_ = lean_mk_empty_array_with_capacity(v___x_4600_);
lean_inc(v___x_4596_);
v___x_4602_ = lean_array_push(v___x_4601_, v___x_4596_);
lean_inc(v___x_4597_);
v___x_4603_ = lean_array_push(v___x_4602_, v___x_4597_);
v___x_4604_ = lean_array_push(v___x_4603_, v___x_4599_);
v_payload_4605_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_payload_4605_, 0, v___x_4604_);
v___x_4606_ = lean_unsigned_to_nat(2u);
v___x_4607_ = lean_mk_empty_array_with_capacity(v___x_4606_);
v___x_4608_ = lean_array_push(v___x_4607_, v___x_4596_);
v___x_4609_ = lean_array_push(v___x_4608_, v___x_4597_);
v___x_4610_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4610_, 0, v___x_4609_);
v___x_4611_ = l_Lasm_JS_Wire_encodeIO(v___x_4610_);
if (lean_obj_tag(v___x_4611_) == 0)
{
lean_object* v_a_4612_; uint32_t v___x_4613_; uint32_t v___x_4614_; uint64_t v___x_4615_; lean_object* v___x_4616_; lean_object* v___x_4617_; 
v_a_4612_ = lean_ctor_get(v___x_4611_, 0);
lean_inc(v_a_4612_);
lean_dec_ref_known(v___x_4611_, 1);
v___x_4613_ = 204;
v___x_4614_ = lasm_js_value_handle(v_o_4592_);
lean_dec(v_o_4592_);
v___x_4615_ = 0ULL;
v___x_4616_ = lean_box(0);
v___x_4617_ = lasm_js_call(v___x_4613_, v___x_4614_, v___x_4615_, v_a_4612_, v_payload_4605_);
lean_dec_ref_known(v_payload_4605_, 1);
lean_dec(v_a_4612_);
if (lean_obj_tag(v___x_4617_) == 0)
{
lean_object* v___x_4619_; uint8_t v_isShared_4620_; uint8_t v_isSharedCheck_4624_; 
v_isSharedCheck_4624_ = !lean_is_exclusive(v___x_4617_);
if (v_isSharedCheck_4624_ == 0)
{
lean_object* v_unused_4625_; 
v_unused_4625_ = lean_ctor_get(v___x_4617_, 0);
lean_dec(v_unused_4625_);
v___x_4619_ = v___x_4617_;
v_isShared_4620_ = v_isSharedCheck_4624_;
goto v_resetjp_4618_;
}
else
{
lean_dec(v___x_4617_);
v___x_4619_ = lean_box(0);
v_isShared_4620_ = v_isSharedCheck_4624_;
goto v_resetjp_4618_;
}
v_resetjp_4618_:
{
lean_object* v___x_4622_; 
if (v_isShared_4620_ == 0)
{
lean_ctor_set(v___x_4619_, 0, v___x_4616_);
v___x_4622_ = v___x_4619_;
goto v_reusejp_4621_;
}
else
{
lean_object* v_reuseFailAlloc_4623_; 
v_reuseFailAlloc_4623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4623_, 0, v___x_4616_);
v___x_4622_ = v_reuseFailAlloc_4623_;
goto v_reusejp_4621_;
}
v_reusejp_4621_:
{
return v___x_4622_;
}
}
}
else
{
lean_object* v_a_4626_; lean_object* v___x_4628_; uint8_t v_isShared_4629_; uint8_t v_isSharedCheck_4633_; 
v_a_4626_ = lean_ctor_get(v___x_4617_, 0);
v_isSharedCheck_4633_ = !lean_is_exclusive(v___x_4617_);
if (v_isSharedCheck_4633_ == 0)
{
v___x_4628_ = v___x_4617_;
v_isShared_4629_ = v_isSharedCheck_4633_;
goto v_resetjp_4627_;
}
else
{
lean_inc(v_a_4626_);
lean_dec(v___x_4617_);
v___x_4628_ = lean_box(0);
v_isShared_4629_ = v_isSharedCheck_4633_;
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
lean_object* v_reuseFailAlloc_4632_; 
v_reuseFailAlloc_4632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4632_, 0, v_a_4626_);
v___x_4631_ = v_reuseFailAlloc_4632_;
goto v_reusejp_4630_;
}
v_reusejp_4630_:
{
return v___x_4631_;
}
}
}
}
else
{
lean_object* v_a_4634_; lean_object* v___x_4636_; uint8_t v_isShared_4637_; uint8_t v_isSharedCheck_4641_; 
lean_dec_ref_known(v_payload_4605_, 1);
lean_dec(v_o_4592_);
v_a_4634_ = lean_ctor_get(v___x_4611_, 0);
v_isSharedCheck_4641_ = !lean_is_exclusive(v___x_4611_);
if (v_isSharedCheck_4641_ == 0)
{
v___x_4636_ = v___x_4611_;
v_isShared_4637_ = v_isSharedCheck_4641_;
goto v_resetjp_4635_;
}
else
{
lean_inc(v_a_4634_);
lean_dec(v___x_4611_);
v___x_4636_ = lean_box(0);
v_isShared_4637_ = v_isSharedCheck_4641_;
goto v_resetjp_4635_;
}
v_resetjp_4635_:
{
lean_object* v___x_4639_; 
if (v_isShared_4637_ == 0)
{
v___x_4639_ = v___x_4636_;
goto v_reusejp_4638_;
}
else
{
lean_object* v_reuseFailAlloc_4640_; 
v_reuseFailAlloc_4640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4640_, 0, v_a_4634_);
v___x_4639_ = v_reuseFailAlloc_4640_;
goto v_reusejp_4638_;
}
v_reusejp_4638_:
{
return v___x_4639_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___redArg___boxed(lean_object* v_inst_4642_, lean_object* v_inst_4643_, lean_object* v_o_4644_, lean_object* v_key_4645_, lean_object* v_x_4646_, lean_object* v_a_4647_){
_start:
{
lean_object* v_res_4648_; 
v_res_4648_ = l_Lasm_JS_Value_set___redArg(v_inst_4642_, v_inst_4643_, v_o_4644_, v_key_4645_, v_x_4646_);
return v_res_4648_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set(lean_object* v_00_u03ba_4649_, lean_object* v_00_u03b1_4650_, lean_object* v_inst_4651_, lean_object* v_inst_4652_, lean_object* v_o_4653_, lean_object* v_key_4654_, lean_object* v_x_4655_){
_start:
{
lean_object* v___x_4657_; 
v___x_4657_ = l_Lasm_JS_Value_set___redArg(v_inst_4651_, v_inst_4652_, v_o_4653_, v_key_4654_, v_x_4655_);
return v___x_4657_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___boxed(lean_object* v_00_u03ba_4658_, lean_object* v_00_u03b1_4659_, lean_object* v_inst_4660_, lean_object* v_inst_4661_, lean_object* v_o_4662_, lean_object* v_key_4663_, lean_object* v_x_4664_, lean_object* v_a_4665_){
_start:
{
lean_object* v_res_4666_; 
v_res_4666_ = l_Lasm_JS_Value_set(v_00_u03ba_4658_, v_00_u03b1_4659_, v_inst_4660_, v_inst_4661_, v_o_4662_, v_key_4663_, v_x_4664_);
return v_res_4666_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_invokeRaw(lean_object* v_target_4667_, lean_object* v_receiver_4668_, lean_object* v_args_4669_, uint64_t v_flags_4670_){
_start:
{
uint32_t v___x_4672_; lean_object* v___x_4673_; lean_object* v___x_4674_; lean_object* v___x_4675_; lean_object* v___x_4676_; lean_object* v___x_4677_; lean_object* v___x_4678_; lean_object* v___x_4679_; uint32_t v___x_4680_; lean_object* v___x_4681_; 
v___x_4672_ = 205;
v___x_4673_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4673_, 0, v_args_4669_);
v___x_4674_ = lean_unsigned_to_nat(3u);
v___x_4675_ = lean_mk_empty_array_with_capacity(v___x_4674_);
v___x_4676_ = lean_array_push(v___x_4675_, v_target_4667_);
v___x_4677_ = lean_array_push(v___x_4676_, v_receiver_4668_);
v___x_4678_ = lean_array_push(v___x_4677_, v___x_4673_);
v___x_4679_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4679_, 0, v___x_4678_);
v___x_4680_ = 0;
v___x_4681_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_4672_, v_flags_4670_, v___x_4679_, v___x_4680_);
return v___x_4681_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_invokeRaw___boxed(lean_object* v_target_4682_, lean_object* v_receiver_4683_, lean_object* v_args_4684_, lean_object* v_flags_4685_, lean_object* v_a_4686_){
_start:
{
uint64_t v_flags_boxed_4687_; lean_object* v_res_4688_; 
v_flags_boxed_4687_ = lean_unbox_uint64(v_flags_4685_);
lean_dec_ref(v_flags_4685_);
v_res_4688_ = l_Lasm_JS_Value_invokeRaw(v_target_4682_, v_receiver_4683_, v_args_4684_, v_flags_boxed_4687_);
return v_res_4688_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(lean_object* v_inst_4689_, uint8_t v_await_4690_, uint64_t v_extra_4691_){
_start:
{
uint8_t v_mode_4692_; uint64_t v___x_4693_; uint64_t v___y_4695_; 
v_mode_4692_ = lean_ctor_get_uint8(v_inst_4689_, sizeof(void*)*2);
v___x_4693_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v_mode_4692_);
if (v_await_4690_ == 0)
{
uint64_t v___x_4698_; 
v___x_4698_ = 0ULL;
v___y_4695_ = v___x_4698_;
goto v___jp_4694_;
}
else
{
uint64_t v___x_4699_; 
v___x_4699_ = 2ULL;
v___y_4695_ = v___x_4699_;
goto v___jp_4694_;
}
v___jp_4694_:
{
uint64_t v___x_4696_; uint64_t v___x_4697_; 
v___x_4696_ = lean_uint64_lor(v___x_4693_, v___y_4695_);
v___x_4697_ = lean_uint64_lor(v___x_4696_, v_extra_4691_);
return v___x_4697_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg___boxed(lean_object* v_inst_4700_, lean_object* v_await_4701_, lean_object* v_extra_4702_){
_start:
{
uint8_t v_await_boxed_4703_; uint64_t v_extra_boxed_4704_; uint64_t v_res_4705_; lean_object* v_r_4706_; 
v_await_boxed_4703_ = lean_unbox(v_await_4701_);
v_extra_boxed_4704_ = lean_unbox_uint64(v_extra_4702_);
lean_dec_ref(v_extra_4702_);
v_res_4705_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_4700_, v_await_boxed_4703_, v_extra_boxed_4704_);
lean_dec_ref(v_inst_4700_);
v_r_4706_ = lean_box_uint64(v_res_4705_);
return v_r_4706_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags(lean_object* v_00_u03b1_4707_, lean_object* v_inst_4708_, uint8_t v_await_4709_, uint64_t v_extra_4710_){
_start:
{
uint64_t v___x_4711_; 
v___x_4711_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_4708_, v_await_4709_, v_extra_4710_);
return v___x_4711_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___boxed(lean_object* v_00_u03b1_4712_, lean_object* v_inst_4713_, lean_object* v_await_4714_, lean_object* v_extra_4715_){
_start:
{
uint8_t v_await_boxed_4716_; uint64_t v_extra_boxed_4717_; uint64_t v_res_4718_; lean_object* v_r_4719_; 
v_await_boxed_4716_ = lean_unbox(v_await_4714_);
v_extra_boxed_4717_ = lean_unbox_uint64(v_extra_4715_);
lean_dec_ref(v_extra_4715_);
v_res_4718_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags(v_00_u03b1_4712_, v_inst_4713_, v_await_boxed_4716_, v_extra_boxed_4717_);
lean_dec_ref(v_inst_4713_);
v_r_4719_ = lean_box_uint64(v_res_4718_);
return v_r_4719_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___redArg(lean_object* v_f_4721_, lean_object* v_args_4722_, lean_object* v_inst_4723_, lean_object* v_this_4724_){
_start:
{
lean_object* v___x_4726_; lean_object* v___x_4727_; uint8_t v___x_4728_; uint64_t v___x_4729_; uint64_t v___x_4730_; lean_object* v___x_4731_; 
v___x_4726_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___x_4727_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4727_, 0, v_f_4721_);
lean_ctor_set(v___x_4727_, 1, v___x_4726_);
v___x_4728_ = 0;
v___x_4729_ = 0ULL;
v___x_4730_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_4723_, v___x_4728_, v___x_4729_);
v___x_4731_ = l_Lasm_JS_Value_invokeRaw(v___x_4727_, v_this_4724_, v_args_4722_, v___x_4730_);
if (lean_obj_tag(v___x_4731_) == 0)
{
lean_object* v_a_4732_; lean_object* v___x_4733_; lean_object* v___x_4734_; 
v_a_4732_ = lean_ctor_get(v___x_4731_, 0);
lean_inc(v_a_4732_);
lean_dec_ref_known(v___x_4731_, 1);
v___x_4733_ = ((lean_object*)(l_Lasm_JS_Value_call___redArg___closed__0));
v___x_4734_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_4723_, v___x_4733_, v_a_4732_);
lean_dec(v_a_4732_);
return v___x_4734_;
}
else
{
lean_object* v_a_4735_; lean_object* v___x_4737_; uint8_t v_isShared_4738_; uint8_t v_isSharedCheck_4742_; 
lean_dec_ref(v_inst_4723_);
v_a_4735_ = lean_ctor_get(v___x_4731_, 0);
v_isSharedCheck_4742_ = !lean_is_exclusive(v___x_4731_);
if (v_isSharedCheck_4742_ == 0)
{
v___x_4737_ = v___x_4731_;
v_isShared_4738_ = v_isSharedCheck_4742_;
goto v_resetjp_4736_;
}
else
{
lean_inc(v_a_4735_);
lean_dec(v___x_4731_);
v___x_4737_ = lean_box(0);
v_isShared_4738_ = v_isSharedCheck_4742_;
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
lean_object* v_reuseFailAlloc_4741_; 
v_reuseFailAlloc_4741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4741_, 0, v_a_4735_);
v___x_4740_ = v_reuseFailAlloc_4741_;
goto v_reusejp_4739_;
}
v_reusejp_4739_:
{
return v___x_4740_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___redArg___boxed(lean_object* v_f_4743_, lean_object* v_args_4744_, lean_object* v_inst_4745_, lean_object* v_this_4746_, lean_object* v_a_4747_){
_start:
{
lean_object* v_res_4748_; 
v_res_4748_ = l_Lasm_JS_Value_call___redArg(v_f_4743_, v_args_4744_, v_inst_4745_, v_this_4746_);
return v_res_4748_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call(lean_object* v_f_4749_, lean_object* v_args_4750_, lean_object* v_00_u03b1_4751_, lean_object* v_inst_4752_, lean_object* v_this_4753_){
_start:
{
lean_object* v___x_4755_; 
v___x_4755_ = l_Lasm_JS_Value_call___redArg(v_f_4749_, v_args_4750_, v_inst_4752_, v_this_4753_);
return v___x_4755_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___boxed(lean_object* v_f_4756_, lean_object* v_args_4757_, lean_object* v_00_u03b1_4758_, lean_object* v_inst_4759_, lean_object* v_this_4760_, lean_object* v_a_4761_){
_start:
{
lean_object* v_res_4762_; 
v_res_4762_ = l_Lasm_JS_Value_call(v_f_4756_, v_args_4757_, v_00_u03b1_4758_, v_inst_4759_, v_this_4760_);
return v_res_4762_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___redArg___lam__0(lean_object* v_inst_4763_, lean_object* v_____do__lift_4764_){
_start:
{
lean_object* v___x_4766_; lean_object* v___x_4767_; 
v___x_4766_ = ((lean_object*)(l_Lasm_JS_Value_call___redArg___closed__0));
v___x_4767_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_4763_, v___x_4766_, v_____do__lift_4764_);
return v___x_4767_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___redArg___lam__0___boxed(lean_object* v_inst_4768_, lean_object* v_____do__lift_4769_, lean_object* v___y_4770_){
_start:
{
lean_object* v_res_4771_; 
v_res_4771_ = l_Lasm_JS_Value_callAwait___redArg___lam__0(v_inst_4768_, v_____do__lift_4769_);
lean_dec_ref(v_____do__lift_4769_);
return v_res_4771_;
}
}
static lean_object* _init_l_Lasm_JS_Value_callAwait___redArg___boxed__const__1(void){
_start:
{
uint32_t v___x_4772_; lean_object* v___x_4773_; 
v___x_4772_ = 205;
v___x_4773_ = lean_box_uint32(v___x_4772_);
return v___x_4773_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___redArg(lean_object* v_inst_4774_, lean_object* v_f_4775_, lean_object* v_args_4776_, lean_object* v_inst_4777_, lean_object* v_this_4778_){
_start:
{
lean_object* v___f_4779_; lean_object* v___x_4780_; lean_object* v___x_4781_; uint8_t v___x_4782_; uint64_t v___x_4783_; uint64_t v___x_4784_; lean_object* v___x_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4788_; uint8_t v___x_4789_; uint64_t v___x_4790_; lean_object* v___x_4791_; lean_object* v___x_4792_; lean_object* v___x_4793_; lean_object* v___x_4794_; lean_object* v___x_4795_; lean_object* v___x_4796_; lean_object* v___x_4797_; lean_object* v___x_4798_; lean_object* v___x_4799_; lean_object* v___x_4800_; lean_object* v___x_4801_; 
lean_inc_ref(v_inst_4777_);
v___f_4779_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_callAwait___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4779_, 0, v_inst_4777_);
v___x_4780_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___x_4781_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4781_, 0, v_f_4775_);
lean_ctor_set(v___x_4781_, 1, v___x_4780_);
v___x_4782_ = 1;
v___x_4783_ = 0ULL;
v___x_4784_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_4777_, v___x_4782_, v___x_4783_);
v___x_4785_ = lean_box_uint64(v___x_4784_);
lean_inc_ref(v_args_4776_);
lean_inc(v_this_4778_);
lean_inc_ref(v___x_4781_);
v___x_4786_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_invokeRaw___boxed), 5, 4);
lean_closure_set(v___x_4786_, 0, v___x_4781_);
lean_closure_set(v___x_4786_, 1, v_this_4778_);
lean_closure_set(v___x_4786_, 2, v_args_4776_);
lean_closure_set(v___x_4786_, 3, v___x_4785_);
v___x_4787_ = lean_alloc_closure((void*)(l_instMonadEIO___aux__13___boxed), 6, 5);
lean_closure_set(v___x_4787_, 0, lean_box(0));
lean_closure_set(v___x_4787_, 1, lean_box(0));
lean_closure_set(v___x_4787_, 2, lean_box(0));
lean_closure_set(v___x_4787_, 3, v___x_4786_);
lean_closure_set(v___x_4787_, 4, v___f_4779_);
v___x_4788_ = ((lean_object*)(l_Lasm_JS_Value_call___redArg___closed__0));
v___x_4789_ = 0;
v___x_4790_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_4777_, v___x_4789_, v___x_4783_);
v___x_4791_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4791_, 0, v_args_4776_);
v___x_4792_ = lean_unsigned_to_nat(3u);
v___x_4793_ = lean_mk_empty_array_with_capacity(v___x_4792_);
v___x_4794_ = lean_array_push(v___x_4793_, v___x_4781_);
v___x_4795_ = lean_array_push(v___x_4794_, v_this_4778_);
v___x_4796_ = lean_array_push(v___x_4795_, v___x_4791_);
v___x_4797_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4797_, 0, v___x_4796_);
v___x_4798_ = l_Lasm_JS_Value_callAwait___redArg___boxed__const__1;
v___x_4799_ = lean_box_uint64(v___x_4790_);
v___x_4800_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___boxed), 8, 7);
lean_closure_set(v___x_4800_, 0, lean_box(0));
lean_closure_set(v___x_4800_, 1, v_inst_4777_);
lean_closure_set(v___x_4800_, 2, v___x_4788_);
lean_closure_set(v___x_4800_, 3, v___x_4798_);
lean_closure_set(v___x_4800_, 4, v___x_4799_);
lean_closure_set(v___x_4800_, 5, v___x_4797_);
lean_closure_set(v___x_4800_, 6, v___x_4780_);
v___x_4801_ = lean_apply_3(v_inst_4774_, lean_box(0), v___x_4787_, v___x_4800_);
return v___x_4801_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait(lean_object* v_m_4802_, lean_object* v_inst_4803_, lean_object* v_f_4804_, lean_object* v_args_4805_, lean_object* v_00_u03b1_4806_, lean_object* v_inst_4807_, lean_object* v_this_4808_){
_start:
{
lean_object* v___x_4809_; 
v___x_4809_ = l_Lasm_JS_Value_callAwait___redArg(v_inst_4803_, v_f_4804_, v_args_4805_, v_inst_4807_, v_this_4808_);
return v___x_4809_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___redArg(lean_object* v_o_4811_, lean_object* v_name_4812_, lean_object* v_args_4813_, lean_object* v_inst_4814_){
_start:
{
lean_object* v___x_4816_; lean_object* v___x_4817_; lean_object* v___x_4818_; uint8_t v___x_4819_; uint64_t v___x_4820_; uint64_t v___x_4821_; lean_object* v___x_4822_; 
v___x_4816_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___x_4817_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4817_, 0, v_o_4811_);
lean_ctor_set(v___x_4817_, 1, v___x_4816_);
lean_inc_ref(v_name_4812_);
v___x_4818_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4818_, 0, v_name_4812_);
v___x_4819_ = 0;
v___x_4820_ = 8ULL;
v___x_4821_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_4814_, v___x_4819_, v___x_4820_);
v___x_4822_ = l_Lasm_JS_Value_invokeRaw(v___x_4817_, v___x_4818_, v_args_4813_, v___x_4821_);
if (lean_obj_tag(v___x_4822_) == 0)
{
lean_object* v_a_4823_; lean_object* v___x_4824_; lean_object* v___x_4825_; lean_object* v___x_4826_; 
v_a_4823_ = lean_ctor_get(v___x_4822_, 0);
lean_inc(v_a_4823_);
lean_dec_ref_known(v___x_4822_, 1);
v___x_4824_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___redArg___closed__0));
v___x_4825_ = lean_string_append(v___x_4824_, v_name_4812_);
lean_dec_ref(v_name_4812_);
v___x_4826_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_4814_, v___x_4825_, v_a_4823_);
lean_dec(v_a_4823_);
lean_dec_ref(v___x_4825_);
return v___x_4826_;
}
else
{
lean_object* v_a_4827_; lean_object* v___x_4829_; uint8_t v_isShared_4830_; uint8_t v_isSharedCheck_4834_; 
lean_dec_ref(v_inst_4814_);
lean_dec_ref(v_name_4812_);
v_a_4827_ = lean_ctor_get(v___x_4822_, 0);
v_isSharedCheck_4834_ = !lean_is_exclusive(v___x_4822_);
if (v_isSharedCheck_4834_ == 0)
{
v___x_4829_ = v___x_4822_;
v_isShared_4830_ = v_isSharedCheck_4834_;
goto v_resetjp_4828_;
}
else
{
lean_inc(v_a_4827_);
lean_dec(v___x_4822_);
v___x_4829_ = lean_box(0);
v_isShared_4830_ = v_isSharedCheck_4834_;
goto v_resetjp_4828_;
}
v_resetjp_4828_:
{
lean_object* v___x_4832_; 
if (v_isShared_4830_ == 0)
{
v___x_4832_ = v___x_4829_;
goto v_reusejp_4831_;
}
else
{
lean_object* v_reuseFailAlloc_4833_; 
v_reuseFailAlloc_4833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4833_, 0, v_a_4827_);
v___x_4832_ = v_reuseFailAlloc_4833_;
goto v_reusejp_4831_;
}
v_reusejp_4831_:
{
return v___x_4832_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___redArg___boxed(lean_object* v_o_4835_, lean_object* v_name_4836_, lean_object* v_args_4837_, lean_object* v_inst_4838_, lean_object* v_a_4839_){
_start:
{
lean_object* v_res_4840_; 
v_res_4840_ = l_Lasm_JS_Value_callMethod___redArg(v_o_4835_, v_name_4836_, v_args_4837_, v_inst_4838_);
return v_res_4840_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod(lean_object* v_o_4841_, lean_object* v_name_4842_, lean_object* v_args_4843_, lean_object* v_00_u03b1_4844_, lean_object* v_inst_4845_){
_start:
{
lean_object* v___x_4847_; 
v___x_4847_ = l_Lasm_JS_Value_callMethod___redArg(v_o_4841_, v_name_4842_, v_args_4843_, v_inst_4845_);
return v___x_4847_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___boxed(lean_object* v_o_4848_, lean_object* v_name_4849_, lean_object* v_args_4850_, lean_object* v_00_u03b1_4851_, lean_object* v_inst_4852_, lean_object* v_a_4853_){
_start:
{
lean_object* v_res_4854_; 
v_res_4854_ = l_Lasm_JS_Value_callMethod(v_o_4848_, v_name_4849_, v_args_4850_, v_00_u03b1_4851_, v_inst_4852_);
return v_res_4854_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___redArg___lam__0(lean_object* v_name_4855_, lean_object* v_inst_4856_, lean_object* v_____do__lift_4857_){
_start:
{
lean_object* v___x_4859_; lean_object* v___x_4860_; lean_object* v___x_4861_; 
v___x_4859_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___redArg___closed__0));
v___x_4860_ = lean_string_append(v___x_4859_, v_name_4855_);
v___x_4861_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_4856_, v___x_4860_, v_____do__lift_4857_);
lean_dec_ref(v___x_4860_);
return v___x_4861_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___redArg___lam__0___boxed(lean_object* v_name_4862_, lean_object* v_inst_4863_, lean_object* v_____do__lift_4864_, lean_object* v___y_4865_){
_start:
{
lean_object* v_res_4866_; 
v_res_4866_ = l_Lasm_JS_Value_callMethodAwait___redArg___lam__0(v_name_4862_, v_inst_4863_, v_____do__lift_4864_);
lean_dec_ref(v_____do__lift_4864_);
lean_dec_ref(v_name_4862_);
return v_res_4866_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___redArg(lean_object* v_inst_4867_, lean_object* v_o_4868_, lean_object* v_name_4869_, lean_object* v_args_4870_, lean_object* v_inst_4871_){
_start:
{
lean_object* v___f_4872_; lean_object* v___x_4873_; lean_object* v___x_4874_; lean_object* v___x_4875_; uint8_t v___x_4876_; uint64_t v___x_4877_; uint64_t v___x_4878_; lean_object* v___x_4879_; lean_object* v___x_4880_; lean_object* v___x_4881_; lean_object* v___x_4882_; lean_object* v___x_4883_; uint8_t v___x_4884_; uint64_t v___x_4885_; lean_object* v___x_4886_; lean_object* v___x_4887_; lean_object* v___x_4888_; lean_object* v___x_4889_; lean_object* v___x_4890_; lean_object* v___x_4891_; lean_object* v___x_4892_; lean_object* v___x_4893_; lean_object* v___x_4894_; lean_object* v___x_4895_; lean_object* v___x_4896_; 
lean_inc_ref(v_inst_4871_);
lean_inc_ref_n(v_name_4869_, 2);
v___f_4872_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_callMethodAwait___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_4872_, 0, v_name_4869_);
lean_closure_set(v___f_4872_, 1, v_inst_4871_);
v___x_4873_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___x_4874_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4874_, 0, v_o_4868_);
lean_ctor_set(v___x_4874_, 1, v___x_4873_);
v___x_4875_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4875_, 0, v_name_4869_);
v___x_4876_ = 1;
v___x_4877_ = 8ULL;
v___x_4878_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_4871_, v___x_4876_, v___x_4877_);
v___x_4879_ = lean_box_uint64(v___x_4878_);
lean_inc_ref(v_args_4870_);
lean_inc_ref(v___x_4875_);
lean_inc_ref(v___x_4874_);
v___x_4880_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_invokeRaw___boxed), 5, 4);
lean_closure_set(v___x_4880_, 0, v___x_4874_);
lean_closure_set(v___x_4880_, 1, v___x_4875_);
lean_closure_set(v___x_4880_, 2, v_args_4870_);
lean_closure_set(v___x_4880_, 3, v___x_4879_);
v___x_4881_ = lean_alloc_closure((void*)(l_instMonadEIO___aux__13___boxed), 6, 5);
lean_closure_set(v___x_4881_, 0, lean_box(0));
lean_closure_set(v___x_4881_, 1, lean_box(0));
lean_closure_set(v___x_4881_, 2, lean_box(0));
lean_closure_set(v___x_4881_, 3, v___x_4880_);
lean_closure_set(v___x_4881_, 4, v___f_4872_);
v___x_4882_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___redArg___closed__0));
v___x_4883_ = lean_string_append(v___x_4882_, v_name_4869_);
lean_dec_ref(v_name_4869_);
v___x_4884_ = 0;
v___x_4885_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_4871_, v___x_4884_, v___x_4877_);
v___x_4886_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4886_, 0, v_args_4870_);
v___x_4887_ = lean_unsigned_to_nat(3u);
v___x_4888_ = lean_mk_empty_array_with_capacity(v___x_4887_);
v___x_4889_ = lean_array_push(v___x_4888_, v___x_4874_);
v___x_4890_ = lean_array_push(v___x_4889_, v___x_4875_);
v___x_4891_ = lean_array_push(v___x_4890_, v___x_4886_);
v___x_4892_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_4892_, 0, v___x_4891_);
v___x_4893_ = l_Lasm_JS_Value_callAwait___redArg___boxed__const__1;
v___x_4894_ = lean_box_uint64(v___x_4885_);
v___x_4895_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___boxed), 8, 7);
lean_closure_set(v___x_4895_, 0, lean_box(0));
lean_closure_set(v___x_4895_, 1, v_inst_4871_);
lean_closure_set(v___x_4895_, 2, v___x_4883_);
lean_closure_set(v___x_4895_, 3, v___x_4893_);
lean_closure_set(v___x_4895_, 4, v___x_4894_);
lean_closure_set(v___x_4895_, 5, v___x_4892_);
lean_closure_set(v___x_4895_, 6, v___x_4873_);
v___x_4896_ = lean_apply_3(v_inst_4867_, lean_box(0), v___x_4881_, v___x_4895_);
return v___x_4896_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait(lean_object* v_m_4897_, lean_object* v_inst_4898_, lean_object* v_o_4899_, lean_object* v_name_4900_, lean_object* v_args_4901_, lean_object* v_00_u03b1_4902_, lean_object* v_inst_4903_){
_start:
{
lean_object* v___x_4904_; 
v___x_4904_ = l_Lasm_JS_Value_callMethodAwait___redArg(v_inst_4898_, v_o_4899_, v_name_4900_, v_args_4901_, v_inst_4903_);
return v___x_4904_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___redArg(lean_object* v_c_4906_, lean_object* v_args_4907_, lean_object* v_inst_4908_){
_start:
{
lean_object* v___x_4910_; lean_object* v___x_4911_; lean_object* v___x_4912_; uint8_t v___x_4913_; uint64_t v___x_4914_; uint64_t v___x_4915_; lean_object* v___x_4916_; 
v___x_4910_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___x_4911_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4911_, 0, v_c_4906_);
lean_ctor_set(v___x_4911_, 1, v___x_4910_);
v___x_4912_ = lean_box(0);
v___x_4913_ = 0;
v___x_4914_ = 4ULL;
v___x_4915_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_4908_, v___x_4913_, v___x_4914_);
v___x_4916_ = l_Lasm_JS_Value_invokeRaw(v___x_4911_, v___x_4912_, v_args_4907_, v___x_4915_);
if (lean_obj_tag(v___x_4916_) == 0)
{
lean_object* v_a_4917_; lean_object* v___x_4918_; lean_object* v___x_4919_; 
v_a_4917_ = lean_ctor_get(v___x_4916_, 0);
lean_inc(v_a_4917_);
lean_dec_ref_known(v___x_4916_, 1);
v___x_4918_ = ((lean_object*)(l_Lasm_JS_Value_new___redArg___closed__0));
v___x_4919_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_4908_, v___x_4918_, v_a_4917_);
lean_dec(v_a_4917_);
return v___x_4919_;
}
else
{
lean_object* v_a_4920_; lean_object* v___x_4922_; uint8_t v_isShared_4923_; uint8_t v_isSharedCheck_4927_; 
lean_dec_ref(v_inst_4908_);
v_a_4920_ = lean_ctor_get(v___x_4916_, 0);
v_isSharedCheck_4927_ = !lean_is_exclusive(v___x_4916_);
if (v_isSharedCheck_4927_ == 0)
{
v___x_4922_ = v___x_4916_;
v_isShared_4923_ = v_isSharedCheck_4927_;
goto v_resetjp_4921_;
}
else
{
lean_inc(v_a_4920_);
lean_dec(v___x_4916_);
v___x_4922_ = lean_box(0);
v_isShared_4923_ = v_isSharedCheck_4927_;
goto v_resetjp_4921_;
}
v_resetjp_4921_:
{
lean_object* v___x_4925_; 
if (v_isShared_4923_ == 0)
{
v___x_4925_ = v___x_4922_;
goto v_reusejp_4924_;
}
else
{
lean_object* v_reuseFailAlloc_4926_; 
v_reuseFailAlloc_4926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4926_, 0, v_a_4920_);
v___x_4925_ = v_reuseFailAlloc_4926_;
goto v_reusejp_4924_;
}
v_reusejp_4924_:
{
return v___x_4925_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___redArg___boxed(lean_object* v_c_4928_, lean_object* v_args_4929_, lean_object* v_inst_4930_, lean_object* v_a_4931_){
_start:
{
lean_object* v_res_4932_; 
v_res_4932_ = l_Lasm_JS_Value_new___redArg(v_c_4928_, v_args_4929_, v_inst_4930_);
return v_res_4932_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new(lean_object* v_c_4933_, lean_object* v_args_4934_, lean_object* v_00_u03b1_4935_, lean_object* v_inst_4936_){
_start:
{
lean_object* v___x_4938_; 
v___x_4938_ = l_Lasm_JS_Value_new___redArg(v_c_4933_, v_args_4934_, v_inst_4936_);
return v___x_4938_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___boxed(lean_object* v_c_4939_, lean_object* v_args_4940_, lean_object* v_00_u03b1_4941_, lean_object* v_inst_4942_, lean_object* v_a_4943_){
_start:
{
lean_object* v_res_4944_; 
v_res_4944_ = l_Lasm_JS_Value_new(v_c_4939_, v_args_4940_, v_00_u03b1_4941_, v_inst_4942_);
return v_res_4944_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___redArg___lam__0(lean_object* v_inst_4946_, lean_object* v_a_4947_){
_start:
{
lean_object* v_a_4950_; 
if (lean_obj_tag(v_a_4947_) == 0)
{
lean_object* v_a_4952_; lean_object* v___x_4953_; 
lean_dec_ref(v_inst_4946_);
v_a_4952_ = lean_ctor_get(v_a_4947_, 0);
lean_inc(v_a_4952_);
lean_dec_ref_known(v_a_4947_, 1);
v___x_4953_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4953_, 0, v_a_4952_);
v_a_4950_ = v___x_4953_;
goto v___jp_4949_;
}
else
{
lean_object* v_a_4954_; lean_object* v___x_4956_; uint8_t v_isShared_4957_; uint8_t v_isSharedCheck_4968_; 
v_a_4954_ = lean_ctor_get(v_a_4947_, 0);
v_isSharedCheck_4968_ = !lean_is_exclusive(v_a_4947_);
if (v_isSharedCheck_4968_ == 0)
{
v___x_4956_ = v_a_4947_;
v_isShared_4957_ = v_isSharedCheck_4968_;
goto v_resetjp_4955_;
}
else
{
lean_inc(v_a_4954_);
lean_dec(v_a_4947_);
v___x_4956_ = lean_box(0);
v_isShared_4957_ = v_isSharedCheck_4968_;
goto v_resetjp_4955_;
}
v_resetjp_4955_:
{
lean_object* v___x_4958_; 
v___x_4958_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_4954_);
lean_dec(v_a_4954_);
if (lean_obj_tag(v___x_4958_) == 0)
{
lean_object* v_a_4959_; lean_object* v___x_4960_; lean_object* v___x_4961_; 
v_a_4959_ = lean_ctor_get(v___x_4958_, 0);
lean_inc(v_a_4959_);
lean_dec_ref_known(v___x_4958_, 1);
v___x_4960_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___redArg___lam__0___closed__0));
v___x_4961_ = l_Lasm_JS_decodeAs___redArg(v_inst_4946_, v___x_4960_, v_a_4959_);
if (lean_obj_tag(v___x_4961_) == 0)
{
lean_object* v_a_4962_; lean_object* v___x_4964_; 
v_a_4962_ = lean_ctor_get(v___x_4961_, 0);
lean_inc(v_a_4962_);
lean_dec_ref_known(v___x_4961_, 1);
if (v_isShared_4957_ == 0)
{
lean_ctor_set(v___x_4956_, 0, v_a_4962_);
v___x_4964_ = v___x_4956_;
goto v_reusejp_4963_;
}
else
{
lean_object* v_reuseFailAlloc_4965_; 
v_reuseFailAlloc_4965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4965_, 0, v_a_4962_);
v___x_4964_ = v_reuseFailAlloc_4965_;
goto v_reusejp_4963_;
}
v_reusejp_4963_:
{
return v___x_4964_;
}
}
else
{
lean_object* v_a_4966_; 
lean_del_object(v___x_4956_);
v_a_4966_ = lean_ctor_get(v___x_4961_, 0);
lean_inc(v_a_4966_);
lean_dec_ref_known(v___x_4961_, 1);
v_a_4950_ = v_a_4966_;
goto v___jp_4949_;
}
}
else
{
lean_object* v_a_4967_; 
lean_del_object(v___x_4956_);
lean_dec_ref(v_inst_4946_);
v_a_4967_ = lean_ctor_get(v___x_4958_, 0);
lean_inc(v_a_4967_);
lean_dec_ref_known(v___x_4958_, 1);
v_a_4950_ = v_a_4967_;
goto v___jp_4949_;
}
}
}
v___jp_4949_:
{
lean_object* v___x_4951_; 
v___x_4951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4951_, 0, v_a_4950_);
return v___x_4951_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___redArg___lam__0___boxed(lean_object* v_inst_4969_, lean_object* v_a_4970_, lean_object* v___y_4971_){
_start:
{
lean_object* v_res_4972_; 
v_res_4972_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___redArg___lam__0(v_inst_4969_, v_a_4970_);
return v_res_4972_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___redArg(lean_object* v_v_4973_, lean_object* v_inst_4974_, lean_object* v_keep_4975_){
_start:
{
lean_object* v___f_4977_; lean_object* v___x_4978_; 
v___f_4977_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4977_, 0, v_inst_4974_);
v___x_4978_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_4978_) == 0)
{
lean_object* v___x_4979_; lean_object* v___x_4980_; lean_object* v___x_4981_; lean_object* v___x_4982_; 
lean_dec_ref_known(v___x_4978_, 1);
v___x_4979_ = lean_io_promise_new();
v___x_4980_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___x_4981_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4981_, 0, v_v_4973_);
lean_ctor_set(v___x_4981_, 1, v___x_4980_);
v___x_4982_ = l_Lasm_JS_Wire_encodeIO(v___x_4981_);
if (lean_obj_tag(v___x_4982_) == 0)
{
lean_object* v_a_4983_; lean_object* v___x_4984_; 
v_a_4983_ = lean_ctor_get(v___x_4982_, 0);
lean_inc(v_a_4983_);
lean_dec_ref_known(v___x_4982_, 1);
v___x_4984_ = lasm_js_await_into(v___x_4979_, v_a_4983_, v_keep_4975_);
lean_dec(v_a_4983_);
if (lean_obj_tag(v___x_4984_) == 0)
{
lean_object* v___x_4986_; uint8_t v_isShared_4987_; uint8_t v_isSharedCheck_4995_; 
v_isSharedCheck_4995_ = !lean_is_exclusive(v___x_4984_);
if (v_isSharedCheck_4995_ == 0)
{
lean_object* v_unused_4996_; 
v_unused_4996_ = lean_ctor_get(v___x_4984_, 0);
lean_dec(v_unused_4996_);
v___x_4986_ = v___x_4984_;
v_isShared_4987_ = v_isSharedCheck_4995_;
goto v_resetjp_4985_;
}
else
{
lean_dec(v___x_4984_);
v___x_4986_ = lean_box(0);
v_isShared_4987_ = v_isSharedCheck_4995_;
goto v_resetjp_4985_;
}
v_resetjp_4985_:
{
lean_object* v___x_4988_; lean_object* v___x_4989_; uint8_t v___x_4990_; lean_object* v___x_4991_; lean_object* v___x_4993_; 
v___x_4988_ = l_IO_Promise_result_x21___redArg(v___x_4979_);
lean_dec(v___x_4979_);
v___x_4989_ = lean_unsigned_to_nat(0u);
v___x_4990_ = 0;
v___x_4991_ = lean_io_map_task(v___f_4977_, v___x_4988_, v___x_4989_, v___x_4990_);
if (v_isShared_4987_ == 0)
{
lean_ctor_set(v___x_4986_, 0, v___x_4991_);
v___x_4993_ = v___x_4986_;
goto v_reusejp_4992_;
}
else
{
lean_object* v_reuseFailAlloc_4994_; 
v_reuseFailAlloc_4994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4994_, 0, v___x_4991_);
v___x_4993_ = v_reuseFailAlloc_4994_;
goto v_reusejp_4992_;
}
v_reusejp_4992_:
{
return v___x_4993_;
}
}
}
else
{
lean_object* v_a_4997_; lean_object* v___x_4999_; uint8_t v_isShared_5000_; uint8_t v_isSharedCheck_5004_; 
lean_dec(v___x_4979_);
lean_dec_ref(v___f_4977_);
v_a_4997_ = lean_ctor_get(v___x_4984_, 0);
v_isSharedCheck_5004_ = !lean_is_exclusive(v___x_4984_);
if (v_isSharedCheck_5004_ == 0)
{
v___x_4999_ = v___x_4984_;
v_isShared_5000_ = v_isSharedCheck_5004_;
goto v_resetjp_4998_;
}
else
{
lean_inc(v_a_4997_);
lean_dec(v___x_4984_);
v___x_4999_ = lean_box(0);
v_isShared_5000_ = v_isSharedCheck_5004_;
goto v_resetjp_4998_;
}
v_resetjp_4998_:
{
lean_object* v___x_5002_; 
if (v_isShared_5000_ == 0)
{
v___x_5002_ = v___x_4999_;
goto v_reusejp_5001_;
}
else
{
lean_object* v_reuseFailAlloc_5003_; 
v_reuseFailAlloc_5003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5003_, 0, v_a_4997_);
v___x_5002_ = v_reuseFailAlloc_5003_;
goto v_reusejp_5001_;
}
v_reusejp_5001_:
{
return v___x_5002_;
}
}
}
}
else
{
lean_object* v_a_5005_; lean_object* v___x_5007_; uint8_t v_isShared_5008_; uint8_t v_isSharedCheck_5012_; 
lean_dec(v___x_4979_);
lean_dec_ref(v___f_4977_);
v_a_5005_ = lean_ctor_get(v___x_4982_, 0);
v_isSharedCheck_5012_ = !lean_is_exclusive(v___x_4982_);
if (v_isSharedCheck_5012_ == 0)
{
v___x_5007_ = v___x_4982_;
v_isShared_5008_ = v_isSharedCheck_5012_;
goto v_resetjp_5006_;
}
else
{
lean_inc(v_a_5005_);
lean_dec(v___x_4982_);
v___x_5007_ = lean_box(0);
v_isShared_5008_ = v_isSharedCheck_5012_;
goto v_resetjp_5006_;
}
v_resetjp_5006_:
{
lean_object* v___x_5010_; 
if (v_isShared_5008_ == 0)
{
v___x_5010_ = v___x_5007_;
goto v_reusejp_5009_;
}
else
{
lean_object* v_reuseFailAlloc_5011_; 
v_reuseFailAlloc_5011_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5011_, 0, v_a_5005_);
v___x_5010_ = v_reuseFailAlloc_5011_;
goto v_reusejp_5009_;
}
v_reusejp_5009_:
{
return v___x_5010_;
}
}
}
}
else
{
lean_object* v_a_5013_; lean_object* v___x_5015_; uint8_t v_isShared_5016_; uint8_t v_isSharedCheck_5020_; 
lean_dec_ref(v___f_4977_);
lean_dec(v_v_4973_);
v_a_5013_ = lean_ctor_get(v___x_4978_, 0);
v_isSharedCheck_5020_ = !lean_is_exclusive(v___x_4978_);
if (v_isSharedCheck_5020_ == 0)
{
v___x_5015_ = v___x_4978_;
v_isShared_5016_ = v_isSharedCheck_5020_;
goto v_resetjp_5014_;
}
else
{
lean_inc(v_a_5013_);
lean_dec(v___x_4978_);
v___x_5015_ = lean_box(0);
v_isShared_5016_ = v_isSharedCheck_5020_;
goto v_resetjp_5014_;
}
v_resetjp_5014_:
{
lean_object* v___x_5018_; 
if (v_isShared_5016_ == 0)
{
v___x_5018_ = v___x_5015_;
goto v_reusejp_5017_;
}
else
{
lean_object* v_reuseFailAlloc_5019_; 
v_reuseFailAlloc_5019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5019_, 0, v_a_5013_);
v___x_5018_ = v_reuseFailAlloc_5019_;
goto v_reusejp_5017_;
}
v_reusejp_5017_:
{
return v___x_5018_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___redArg___boxed(lean_object* v_v_5021_, lean_object* v_inst_5022_, lean_object* v_keep_5023_, lean_object* v_a_5024_){
_start:
{
lean_object* v_res_5025_; 
v_res_5025_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___redArg(v_v_5021_, v_inst_5022_, v_keep_5023_);
lean_dec(v_keep_5023_);
return v_res_5025_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping(lean_object* v_v_5026_, lean_object* v_00_u03b1_5027_, lean_object* v_inst_5028_, lean_object* v_keep_5029_){
_start:
{
lean_object* v___x_5031_; 
v___x_5031_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___redArg(v_v_5026_, v_inst_5028_, v_keep_5029_);
return v___x_5031_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___boxed(lean_object* v_v_5032_, lean_object* v_00_u03b1_5033_, lean_object* v_inst_5034_, lean_object* v_keep_5035_, lean_object* v_a_5036_){
_start:
{
lean_object* v_res_5037_; 
v_res_5037_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping(v_v_5032_, v_00_u03b1_5033_, v_inst_5034_, v_keep_5035_);
lean_dec(v_keep_5035_);
return v_res_5037_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_toTask___redArg(lean_object* v_v_5038_, lean_object* v_inst_5039_){
_start:
{
lean_object* v___x_5041_; lean_object* v___x_5042_; lean_object* v___x_5043_; 
v___x_5041_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
lean_inc(v_v_5038_);
v___x_5042_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5042_, 0, v_v_5038_);
lean_ctor_set(v___x_5042_, 1, v___x_5041_);
v___x_5043_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___redArg(v_v_5038_, v_inst_5039_, v___x_5042_);
lean_dec_ref_known(v___x_5042_, 2);
return v___x_5043_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_toTask___redArg___boxed(lean_object* v_v_5044_, lean_object* v_inst_5045_, lean_object* v_a_5046_){
_start:
{
lean_object* v_res_5047_; 
v_res_5047_ = l_Lasm_JS_Value_toTask___redArg(v_v_5044_, v_inst_5045_);
return v_res_5047_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_toTask(lean_object* v_v_5048_, lean_object* v_00_u03b1_5049_, lean_object* v_inst_5050_){
_start:
{
lean_object* v___x_5052_; 
v___x_5052_ = l_Lasm_JS_Value_toTask___redArg(v_v_5048_, v_inst_5050_);
return v___x_5052_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_toTask___boxed(lean_object* v_v_5053_, lean_object* v_00_u03b1_5054_, lean_object* v_inst_5055_, lean_object* v_a_5056_){
_start:
{
lean_object* v_res_5057_; 
v_res_5057_ = l_Lasm_JS_Value_toTask(v_v_5053_, v_00_u03b1_5054_, v_inst_5055_);
return v_res_5057_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__0(){
_start:
{
lean_object* v_val_5060_; lean_object* v___x_5062_; 
v___x_5062_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_5062_) == 0)
{
lean_object* v_a_5063_; lean_object* v___x_5065_; uint8_t v_isShared_5066_; uint8_t v_isSharedCheck_5070_; 
v_a_5063_ = lean_ctor_get(v___x_5062_, 0);
v_isSharedCheck_5070_ = !lean_is_exclusive(v___x_5062_);
if (v_isSharedCheck_5070_ == 0)
{
v___x_5065_ = v___x_5062_;
v_isShared_5066_ = v_isSharedCheck_5070_;
goto v_resetjp_5064_;
}
else
{
lean_inc(v_a_5063_);
lean_dec(v___x_5062_);
v___x_5065_ = lean_box(0);
v_isShared_5066_ = v_isSharedCheck_5070_;
goto v_resetjp_5064_;
}
v_resetjp_5064_:
{
lean_object* v___x_5068_; 
if (v_isShared_5066_ == 0)
{
lean_ctor_set_tag(v___x_5065_, 1);
v___x_5068_ = v___x_5065_;
goto v_reusejp_5067_;
}
else
{
lean_object* v_reuseFailAlloc_5069_; 
v_reuseFailAlloc_5069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5069_, 0, v_a_5063_);
v___x_5068_ = v_reuseFailAlloc_5069_;
goto v_reusejp_5067_;
}
v_reusejp_5067_:
{
v_val_5060_ = v___x_5068_;
goto v___jp_5059_;
}
}
}
else
{
lean_object* v_a_5071_; lean_object* v___x_5073_; uint8_t v_isShared_5074_; uint8_t v_isSharedCheck_5078_; 
v_a_5071_ = lean_ctor_get(v___x_5062_, 0);
v_isSharedCheck_5078_ = !lean_is_exclusive(v___x_5062_);
if (v_isSharedCheck_5078_ == 0)
{
v___x_5073_ = v___x_5062_;
v_isShared_5074_ = v_isSharedCheck_5078_;
goto v_resetjp_5072_;
}
else
{
lean_inc(v_a_5071_);
lean_dec(v___x_5062_);
v___x_5073_ = lean_box(0);
v_isShared_5074_ = v_isSharedCheck_5078_;
goto v_resetjp_5072_;
}
v_resetjp_5072_:
{
lean_object* v___x_5076_; 
if (v_isShared_5074_ == 0)
{
lean_ctor_set_tag(v___x_5073_, 0);
v___x_5076_ = v___x_5073_;
goto v_reusejp_5075_;
}
else
{
lean_object* v_reuseFailAlloc_5077_; 
v_reuseFailAlloc_5077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5077_, 0, v_a_5071_);
v___x_5076_ = v_reuseFailAlloc_5077_;
goto v_reusejp_5075_;
}
v_reusejp_5075_:
{
v_val_5060_ = v___x_5076_;
goto v___jp_5059_;
}
}
}
v___jp_5059_:
{
lean_object* v___x_5061_; 
v___x_5061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5061_, 0, v_val_5060_);
return v___x_5061_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__0___boxed(lean_object* v___y_5079_){
_start:
{
lean_object* v_res_5080_; 
v_res_5080_ = l_Lasm_JS_Value_await___redArg___lam__0();
return v_res_5080_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__1(lean_object* v_inst_5081_, lean_object* v_x_5082_){
_start:
{
lean_object* v_val_5085_; 
if (lean_obj_tag(v_x_5082_) == 0)
{
lean_object* v_a_5087_; lean_object* v___x_5089_; uint8_t v_isShared_5090_; uint8_t v_isSharedCheck_5095_; 
lean_dec_ref(v_inst_5081_);
v_a_5087_ = lean_ctor_get(v_x_5082_, 0);
v_isSharedCheck_5095_ = !lean_is_exclusive(v_x_5082_);
if (v_isSharedCheck_5095_ == 0)
{
v___x_5089_ = v_x_5082_;
v_isShared_5090_ = v_isSharedCheck_5095_;
goto v_resetjp_5088_;
}
else
{
lean_inc(v_a_5087_);
lean_dec(v_x_5082_);
v___x_5089_ = lean_box(0);
v_isShared_5090_ = v_isSharedCheck_5095_;
goto v_resetjp_5088_;
}
v_resetjp_5088_:
{
lean_object* v___x_5092_; 
if (v_isShared_5090_ == 0)
{
v___x_5092_ = v___x_5089_;
goto v_reusejp_5091_;
}
else
{
lean_object* v_reuseFailAlloc_5094_; 
v_reuseFailAlloc_5094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5094_, 0, v_a_5087_);
v___x_5092_ = v_reuseFailAlloc_5094_;
goto v_reusejp_5091_;
}
v_reusejp_5091_:
{
lean_object* v___x_5093_; 
v___x_5093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5093_, 0, v___x_5092_);
return v___x_5093_;
}
}
}
else
{
lean_object* v_a_5096_; lean_object* v___x_5098_; uint8_t v_isShared_5099_; uint8_t v_isSharedCheck_5110_; 
v_a_5096_ = lean_ctor_get(v_x_5082_, 0);
v_isSharedCheck_5110_ = !lean_is_exclusive(v_x_5082_);
if (v_isSharedCheck_5110_ == 0)
{
v___x_5098_ = v_x_5082_;
v_isShared_5099_ = v_isSharedCheck_5110_;
goto v_resetjp_5097_;
}
else
{
lean_inc(v_a_5096_);
lean_dec(v_x_5082_);
v___x_5098_ = lean_box(0);
v_isShared_5099_ = v_isSharedCheck_5110_;
goto v_resetjp_5097_;
}
v_resetjp_5097_:
{
lean_object* v___x_5100_; lean_object* v___x_5101_; 
v___x_5100_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___redArg___lam__0___closed__0));
v___x_5101_ = l_Lasm_JS_decodeAs___redArg(v_inst_5081_, v___x_5100_, v_a_5096_);
if (lean_obj_tag(v___x_5101_) == 0)
{
lean_object* v_a_5102_; lean_object* v___x_5104_; 
v_a_5102_ = lean_ctor_get(v___x_5101_, 0);
lean_inc(v_a_5102_);
lean_dec_ref_known(v___x_5101_, 1);
if (v_isShared_5099_ == 0)
{
lean_ctor_set(v___x_5098_, 0, v_a_5102_);
v___x_5104_ = v___x_5098_;
goto v_reusejp_5103_;
}
else
{
lean_object* v_reuseFailAlloc_5105_; 
v_reuseFailAlloc_5105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5105_, 0, v_a_5102_);
v___x_5104_ = v_reuseFailAlloc_5105_;
goto v_reusejp_5103_;
}
v_reusejp_5103_:
{
v_val_5085_ = v___x_5104_;
goto v___jp_5084_;
}
}
else
{
lean_object* v_a_5106_; lean_object* v___x_5108_; 
v_a_5106_ = lean_ctor_get(v___x_5101_, 0);
lean_inc(v_a_5106_);
lean_dec_ref_known(v___x_5101_, 1);
if (v_isShared_5099_ == 0)
{
lean_ctor_set_tag(v___x_5098_, 0);
lean_ctor_set(v___x_5098_, 0, v_a_5106_);
v___x_5108_ = v___x_5098_;
goto v_reusejp_5107_;
}
else
{
lean_object* v_reuseFailAlloc_5109_; 
v_reuseFailAlloc_5109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5109_, 0, v_a_5106_);
v___x_5108_ = v_reuseFailAlloc_5109_;
goto v_reusejp_5107_;
}
v_reusejp_5107_:
{
v_val_5085_ = v___x_5108_;
goto v___jp_5084_;
}
}
}
}
v___jp_5084_:
{
lean_object* v___x_5086_; 
v___x_5086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5086_, 0, v_val_5085_);
return v___x_5086_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__1___boxed(lean_object* v_inst_5111_, lean_object* v_x_5112_, lean_object* v___y_5113_){
_start:
{
lean_object* v_res_5114_; 
v_res_5114_ = l_Lasm_JS_Value_await___redArg___lam__1(v_inst_5111_, v_x_5112_);
return v_res_5114_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__2(lean_object* v___f_5115_, lean_object* v_x_5116_){
_start:
{
if (lean_obj_tag(v_x_5116_) == 0)
{
lean_object* v_a_5118_; lean_object* v___x_5120_; uint8_t v_isShared_5121_; uint8_t v_isSharedCheck_5126_; 
lean_dec_ref(v___f_5115_);
v_a_5118_ = lean_ctor_get(v_x_5116_, 0);
v_isSharedCheck_5126_ = !lean_is_exclusive(v_x_5116_);
if (v_isSharedCheck_5126_ == 0)
{
v___x_5120_ = v_x_5116_;
v_isShared_5121_ = v_isSharedCheck_5126_;
goto v_resetjp_5119_;
}
else
{
lean_inc(v_a_5118_);
lean_dec(v_x_5116_);
v___x_5120_ = lean_box(0);
v_isShared_5121_ = v_isSharedCheck_5126_;
goto v_resetjp_5119_;
}
v_resetjp_5119_:
{
lean_object* v___x_5123_; 
if (v_isShared_5121_ == 0)
{
v___x_5123_ = v___x_5120_;
goto v_reusejp_5122_;
}
else
{
lean_object* v_reuseFailAlloc_5125_; 
v_reuseFailAlloc_5125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5125_, 0, v_a_5118_);
v___x_5123_ = v_reuseFailAlloc_5125_;
goto v_reusejp_5122_;
}
v_reusejp_5122_:
{
lean_object* v___x_5124_; 
v___x_5124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5124_, 0, v___x_5123_);
return v___x_5124_;
}
}
}
else
{
lean_object* v_a_5127_; lean_object* v___x_5129_; uint8_t v_isShared_5130_; uint8_t v_isSharedCheck_5146_; 
v_a_5127_ = lean_ctor_get(v_x_5116_, 0);
v_isSharedCheck_5146_ = !lean_is_exclusive(v_x_5116_);
if (v_isSharedCheck_5146_ == 0)
{
v___x_5129_ = v_x_5116_;
v_isShared_5130_ = v_isSharedCheck_5146_;
goto v_resetjp_5128_;
}
else
{
lean_inc(v_a_5127_);
lean_dec(v_x_5116_);
v___x_5129_ = lean_box(0);
v_isShared_5130_ = v_isSharedCheck_5146_;
goto v_resetjp_5128_;
}
v_resetjp_5128_:
{
lean_object* v___x_5131_; uint8_t v___x_5132_; lean_object* v_val_5134_; lean_object* v___x_5137_; 
v___x_5131_ = lean_unsigned_to_nat(0u);
v___x_5132_ = 0;
v___x_5137_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_5127_);
lean_dec(v_a_5127_);
if (lean_obj_tag(v___x_5137_) == 0)
{
lean_object* v_a_5138_; lean_object* v___x_5140_; 
v_a_5138_ = lean_ctor_get(v___x_5137_, 0);
lean_inc(v_a_5138_);
lean_dec_ref_known(v___x_5137_, 1);
if (v_isShared_5130_ == 0)
{
lean_ctor_set(v___x_5129_, 0, v_a_5138_);
v___x_5140_ = v___x_5129_;
goto v_reusejp_5139_;
}
else
{
lean_object* v_reuseFailAlloc_5141_; 
v_reuseFailAlloc_5141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5141_, 0, v_a_5138_);
v___x_5140_ = v_reuseFailAlloc_5141_;
goto v_reusejp_5139_;
}
v_reusejp_5139_:
{
v_val_5134_ = v___x_5140_;
goto v___jp_5133_;
}
}
else
{
lean_object* v_a_5142_; lean_object* v___x_5144_; 
v_a_5142_ = lean_ctor_get(v___x_5137_, 0);
lean_inc(v_a_5142_);
lean_dec_ref_known(v___x_5137_, 1);
if (v_isShared_5130_ == 0)
{
lean_ctor_set_tag(v___x_5129_, 0);
lean_ctor_set(v___x_5129_, 0, v_a_5142_);
v___x_5144_ = v___x_5129_;
goto v_reusejp_5143_;
}
else
{
lean_object* v_reuseFailAlloc_5145_; 
v_reuseFailAlloc_5145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5145_, 0, v_a_5142_);
v___x_5144_ = v_reuseFailAlloc_5145_;
goto v_reusejp_5143_;
}
v_reusejp_5143_:
{
v_val_5134_ = v___x_5144_;
goto v___jp_5133_;
}
}
v___jp_5133_:
{
lean_object* v___x_5135_; lean_object* v___x_5136_; 
v___x_5135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5135_, 0, v_val_5134_);
v___x_5136_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5131_, v___x_5132_, v___x_5135_, v___f_5115_);
return v___x_5136_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__2___boxed(lean_object* v___f_5147_, lean_object* v_x_5148_, lean_object* v___y_5149_){
_start:
{
lean_object* v_res_5150_; 
v_res_5150_ = l_Lasm_JS_Value_await___redArg___lam__2(v___f_5147_, v_x_5148_);
return v_res_5150_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__3(lean_object* v_a_5151_, lean_object* v___f_5152_, lean_object* v_x_5153_){
_start:
{
if (lean_obj_tag(v_x_5153_) == 0)
{
lean_object* v_a_5155_; lean_object* v___x_5157_; uint8_t v_isShared_5158_; uint8_t v_isSharedCheck_5163_; 
lean_dec_ref(v___f_5152_);
v_a_5155_ = lean_ctor_get(v_x_5153_, 0);
v_isSharedCheck_5163_ = !lean_is_exclusive(v_x_5153_);
if (v_isSharedCheck_5163_ == 0)
{
v___x_5157_ = v_x_5153_;
v_isShared_5158_ = v_isSharedCheck_5163_;
goto v_resetjp_5156_;
}
else
{
lean_inc(v_a_5155_);
lean_dec(v_x_5153_);
v___x_5157_ = lean_box(0);
v_isShared_5158_ = v_isSharedCheck_5163_;
goto v_resetjp_5156_;
}
v_resetjp_5156_:
{
lean_object* v___x_5160_; 
if (v_isShared_5158_ == 0)
{
v___x_5160_ = v___x_5157_;
goto v_reusejp_5159_;
}
else
{
lean_object* v_reuseFailAlloc_5162_; 
v_reuseFailAlloc_5162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5162_, 0, v_a_5155_);
v___x_5160_ = v_reuseFailAlloc_5162_;
goto v_reusejp_5159_;
}
v_reusejp_5159_:
{
lean_object* v___x_5161_; 
v___x_5161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5161_, 0, v___x_5160_);
return v___x_5161_;
}
}
}
else
{
lean_object* v___x_5164_; uint8_t v___x_5165_; lean_object* v___x_5166_; lean_object* v___x_5167_; 
lean_dec_ref_known(v_x_5153_, 1);
v___x_5164_ = lean_unsigned_to_nat(0u);
v___x_5165_ = 0;
v___x_5166_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_5151_);
v___x_5167_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5164_, v___x_5165_, v___x_5166_, v___f_5152_);
return v___x_5167_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__3___boxed(lean_object* v_a_5168_, lean_object* v___f_5169_, lean_object* v_x_5170_, lean_object* v___y_5171_){
_start:
{
lean_object* v_res_5172_; 
v_res_5172_ = l_Lasm_JS_Value_await___redArg___lam__3(v_a_5168_, v___f_5169_, v_x_5170_);
lean_dec(v_a_5168_);
return v_res_5172_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__4(lean_object* v___f_5173_, lean_object* v_a_5174_, lean_object* v___x_5175_, lean_object* v_x_5176_){
_start:
{
if (lean_obj_tag(v_x_5176_) == 0)
{
lean_object* v_a_5178_; lean_object* v___x_5180_; uint8_t v_isShared_5181_; uint8_t v_isSharedCheck_5186_; 
lean_dec_ref(v___f_5173_);
v_a_5178_ = lean_ctor_get(v_x_5176_, 0);
v_isSharedCheck_5186_ = !lean_is_exclusive(v_x_5176_);
if (v_isSharedCheck_5186_ == 0)
{
v___x_5180_ = v_x_5176_;
v_isShared_5181_ = v_isSharedCheck_5186_;
goto v_resetjp_5179_;
}
else
{
lean_inc(v_a_5178_);
lean_dec(v_x_5176_);
v___x_5180_ = lean_box(0);
v_isShared_5181_ = v_isSharedCheck_5186_;
goto v_resetjp_5179_;
}
v_resetjp_5179_:
{
lean_object* v___x_5183_; 
if (v_isShared_5181_ == 0)
{
v___x_5183_ = v___x_5180_;
goto v_reusejp_5182_;
}
else
{
lean_object* v_reuseFailAlloc_5185_; 
v_reuseFailAlloc_5185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5185_, 0, v_a_5178_);
v___x_5183_ = v_reuseFailAlloc_5185_;
goto v_reusejp_5182_;
}
v_reusejp_5182_:
{
lean_object* v___x_5184_; 
v___x_5184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5184_, 0, v___x_5183_);
return v___x_5184_;
}
}
}
else
{
lean_object* v_a_5187_; lean_object* v___x_5189_; uint8_t v_isShared_5190_; uint8_t v_isSharedCheck_5206_; 
v_a_5187_ = lean_ctor_get(v_x_5176_, 0);
v_isSharedCheck_5206_ = !lean_is_exclusive(v_x_5176_);
if (v_isSharedCheck_5206_ == 0)
{
v___x_5189_ = v_x_5176_;
v_isShared_5190_ = v_isSharedCheck_5206_;
goto v_resetjp_5188_;
}
else
{
lean_inc(v_a_5187_);
lean_dec(v_x_5176_);
v___x_5189_ = lean_box(0);
v_isShared_5190_ = v_isSharedCheck_5206_;
goto v_resetjp_5188_;
}
v_resetjp_5188_:
{
lean_object* v___x_5191_; uint8_t v___x_5192_; lean_object* v_val_5194_; lean_object* v___x_5197_; 
v___x_5191_ = lean_unsigned_to_nat(0u);
v___x_5192_ = 0;
v___x_5197_ = lasm_js_await_into(v_a_5174_, v_a_5187_, v___x_5175_);
lean_dec(v_a_5187_);
if (lean_obj_tag(v___x_5197_) == 0)
{
lean_object* v_a_5198_; lean_object* v___x_5200_; 
v_a_5198_ = lean_ctor_get(v___x_5197_, 0);
lean_inc(v_a_5198_);
lean_dec_ref_known(v___x_5197_, 1);
if (v_isShared_5190_ == 0)
{
lean_ctor_set(v___x_5189_, 0, v_a_5198_);
v___x_5200_ = v___x_5189_;
goto v_reusejp_5199_;
}
else
{
lean_object* v_reuseFailAlloc_5201_; 
v_reuseFailAlloc_5201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5201_, 0, v_a_5198_);
v___x_5200_ = v_reuseFailAlloc_5201_;
goto v_reusejp_5199_;
}
v_reusejp_5199_:
{
v_val_5194_ = v___x_5200_;
goto v___jp_5193_;
}
}
else
{
lean_object* v_a_5202_; lean_object* v___x_5204_; 
v_a_5202_ = lean_ctor_get(v___x_5197_, 0);
lean_inc(v_a_5202_);
lean_dec_ref_known(v___x_5197_, 1);
if (v_isShared_5190_ == 0)
{
lean_ctor_set_tag(v___x_5189_, 0);
lean_ctor_set(v___x_5189_, 0, v_a_5202_);
v___x_5204_ = v___x_5189_;
goto v_reusejp_5203_;
}
else
{
lean_object* v_reuseFailAlloc_5205_; 
v_reuseFailAlloc_5205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5205_, 0, v_a_5202_);
v___x_5204_ = v_reuseFailAlloc_5205_;
goto v_reusejp_5203_;
}
v_reusejp_5203_:
{
v_val_5194_ = v___x_5204_;
goto v___jp_5193_;
}
}
v___jp_5193_:
{
lean_object* v___x_5195_; lean_object* v___x_5196_; 
v___x_5195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5195_, 0, v_val_5194_);
v___x_5196_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5191_, v___x_5192_, v___x_5195_, v___f_5173_);
return v___x_5196_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__4___boxed(lean_object* v___f_5207_, lean_object* v_a_5208_, lean_object* v___x_5209_, lean_object* v_x_5210_, lean_object* v___y_5211_){
_start:
{
lean_object* v_res_5212_; 
v_res_5212_ = l_Lasm_JS_Value_await___redArg___lam__4(v___f_5207_, v_a_5208_, v___x_5209_, v_x_5210_);
lean_dec(v___x_5209_);
lean_dec(v_a_5208_);
return v_res_5212_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__5(lean_object* v___f_5213_, lean_object* v_v_5214_, lean_object* v_x_5215_){
_start:
{
if (lean_obj_tag(v_x_5215_) == 0)
{
lean_object* v_a_5217_; lean_object* v___x_5219_; uint8_t v_isShared_5220_; uint8_t v_isSharedCheck_5225_; 
lean_dec(v_v_5214_);
lean_dec_ref(v___f_5213_);
v_a_5217_ = lean_ctor_get(v_x_5215_, 0);
v_isSharedCheck_5225_ = !lean_is_exclusive(v_x_5215_);
if (v_isSharedCheck_5225_ == 0)
{
v___x_5219_ = v_x_5215_;
v_isShared_5220_ = v_isSharedCheck_5225_;
goto v_resetjp_5218_;
}
else
{
lean_inc(v_a_5217_);
lean_dec(v_x_5215_);
v___x_5219_ = lean_box(0);
v_isShared_5220_ = v_isSharedCheck_5225_;
goto v_resetjp_5218_;
}
v_resetjp_5218_:
{
lean_object* v___x_5222_; 
if (v_isShared_5220_ == 0)
{
v___x_5222_ = v___x_5219_;
goto v_reusejp_5221_;
}
else
{
lean_object* v_reuseFailAlloc_5224_; 
v_reuseFailAlloc_5224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5224_, 0, v_a_5217_);
v___x_5222_ = v_reuseFailAlloc_5224_;
goto v_reusejp_5221_;
}
v_reusejp_5221_:
{
lean_object* v___x_5223_; 
v___x_5223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5223_, 0, v___x_5222_);
return v___x_5223_;
}
}
}
else
{
lean_object* v_a_5226_; lean_object* v___x_5228_; uint8_t v_isShared_5229_; uint8_t v_isSharedCheck_5249_; 
v_a_5226_ = lean_ctor_get(v_x_5215_, 0);
v_isSharedCheck_5249_ = !lean_is_exclusive(v_x_5215_);
if (v_isSharedCheck_5249_ == 0)
{
v___x_5228_ = v_x_5215_;
v_isShared_5229_ = v_isSharedCheck_5249_;
goto v_resetjp_5227_;
}
else
{
lean_inc(v_a_5226_);
lean_dec(v_x_5215_);
v___x_5228_ = lean_box(0);
v_isShared_5229_ = v_isSharedCheck_5249_;
goto v_resetjp_5227_;
}
v_resetjp_5227_:
{
lean_object* v___f_5230_; lean_object* v___x_5231_; lean_object* v___x_5232_; lean_object* v___f_5233_; lean_object* v___x_5234_; uint8_t v___x_5235_; lean_object* v_val_5237_; lean_object* v___x_5240_; 
lean_inc(v_a_5226_);
v___f_5230_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_5230_, 0, v_a_5226_);
lean_closure_set(v___f_5230_, 1, v___f_5213_);
v___x_5231_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___x_5232_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5232_, 0, v_v_5214_);
lean_ctor_set(v___x_5232_, 1, v___x_5231_);
lean_inc_ref(v___x_5232_);
v___f_5233_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___redArg___lam__4___boxed), 5, 3);
lean_closure_set(v___f_5233_, 0, v___f_5230_);
lean_closure_set(v___f_5233_, 1, v_a_5226_);
lean_closure_set(v___f_5233_, 2, v___x_5232_);
v___x_5234_ = lean_unsigned_to_nat(0u);
v___x_5235_ = 0;
v___x_5240_ = l_Lasm_JS_Wire_encodeIO(v___x_5232_);
if (lean_obj_tag(v___x_5240_) == 0)
{
lean_object* v_a_5241_; lean_object* v___x_5243_; 
v_a_5241_ = lean_ctor_get(v___x_5240_, 0);
lean_inc(v_a_5241_);
lean_dec_ref_known(v___x_5240_, 1);
if (v_isShared_5229_ == 0)
{
lean_ctor_set(v___x_5228_, 0, v_a_5241_);
v___x_5243_ = v___x_5228_;
goto v_reusejp_5242_;
}
else
{
lean_object* v_reuseFailAlloc_5244_; 
v_reuseFailAlloc_5244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5244_, 0, v_a_5241_);
v___x_5243_ = v_reuseFailAlloc_5244_;
goto v_reusejp_5242_;
}
v_reusejp_5242_:
{
v_val_5237_ = v___x_5243_;
goto v___jp_5236_;
}
}
else
{
lean_object* v_a_5245_; lean_object* v___x_5247_; 
v_a_5245_ = lean_ctor_get(v___x_5240_, 0);
lean_inc(v_a_5245_);
lean_dec_ref_known(v___x_5240_, 1);
if (v_isShared_5229_ == 0)
{
lean_ctor_set_tag(v___x_5228_, 0);
lean_ctor_set(v___x_5228_, 0, v_a_5245_);
v___x_5247_ = v___x_5228_;
goto v_reusejp_5246_;
}
else
{
lean_object* v_reuseFailAlloc_5248_; 
v_reuseFailAlloc_5248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5248_, 0, v_a_5245_);
v___x_5247_ = v_reuseFailAlloc_5248_;
goto v_reusejp_5246_;
}
v_reusejp_5246_:
{
v_val_5237_ = v___x_5247_;
goto v___jp_5236_;
}
}
v___jp_5236_:
{
lean_object* v___x_5238_; lean_object* v___x_5239_; 
v___x_5238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5238_, 0, v_val_5237_);
v___x_5239_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5234_, v___x_5235_, v___x_5238_, v___f_5233_);
return v___x_5239_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__5___boxed(lean_object* v___f_5250_, lean_object* v_v_5251_, lean_object* v_x_5252_, lean_object* v___y_5253_){
_start:
{
lean_object* v_res_5254_; 
v_res_5254_ = l_Lasm_JS_Value_await___redArg___lam__5(v___f_5250_, v_v_5251_, v_x_5252_);
return v_res_5254_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__6(lean_object* v___f_5255_, lean_object* v_____r_5256_){
_start:
{
lean_object* v___x_5258_; uint8_t v___x_5259_; lean_object* v___x_5260_; lean_object* v___x_5261_; lean_object* v___x_5262_; lean_object* v___x_5263_; 
v___x_5258_ = lean_unsigned_to_nat(0u);
v___x_5259_ = 0;
v___x_5260_ = lean_io_promise_new();
v___x_5261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5261_, 0, v___x_5260_);
v___x_5262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5262_, 0, v___x_5261_);
v___x_5263_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5258_, v___x_5259_, v___x_5262_, v___f_5255_);
return v___x_5263_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__6___boxed(lean_object* v___f_5264_, lean_object* v_____r_5265_, lean_object* v___y_5266_){
_start:
{
lean_object* v_res_5267_; 
v_res_5267_ = l_Lasm_JS_Value_await___redArg___lam__6(v___f_5264_, v_____r_5265_);
return v_res_5267_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__7(lean_object* v___x_5268_, lean_object* v_____do__lift_5269_){
_start:
{
lean_object* v___x_5271_; lean_object* v___x_5272_; 
v___x_5271_ = lean_io_wait(v_____do__lift_5269_);
v___x_5272_ = l_IO_ofExcept___redArg(v___x_5268_, v___x_5271_);
return v___x_5272_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__7___boxed(lean_object* v___x_5273_, lean_object* v_____do__lift_5274_, lean_object* v___y_5275_){
_start:
{
lean_object* v_res_5276_; 
v_res_5276_ = l_Lasm_JS_Value_await___redArg___lam__7(v___x_5273_, v_____do__lift_5274_);
return v_res_5276_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg(lean_object* v_inst_5282_, lean_object* v_v_5283_, lean_object* v_inst_5284_){
_start:
{
lean_object* v___f_5285_; lean_object* v___f_5286_; lean_object* v___f_5287_; lean_object* v___f_5288_; lean_object* v___f_5289_; lean_object* v___f_5290_; lean_object* v___x_5291_; lean_object* v___x_5292_; lean_object* v___x_5293_; lean_object* v___x_5294_; lean_object* v___x_5295_; lean_object* v___x_5296_; 
v___f_5285_ = ((lean_object*)(l_Lasm_JS_Value_await___redArg___closed__0));
lean_inc_ref(v_inst_5284_);
v___f_5286_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_5286_, 0, v_inst_5284_);
v___f_5287_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_5287_, 0, v___f_5286_);
lean_inc_n(v_v_5283_, 2);
v___f_5288_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___redArg___lam__5___boxed), 4, 2);
lean_closure_set(v___f_5288_, 0, v___f_5287_);
lean_closure_set(v___f_5288_, 1, v_v_5283_);
v___f_5289_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___redArg___lam__6___boxed), 3, 1);
lean_closure_set(v___f_5289_, 0, v___f_5288_);
v___f_5290_ = ((lean_object*)(l_Lasm_JS_Value_await___redArg___closed__2));
v___x_5291_ = ((lean_object*)(l_Lasm_JS_Value_await___redArg___closed__3));
v___x_5292_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5292_, 0, v_v_5283_);
lean_ctor_set(v___x_5292_, 1, v___x_5291_);
v___x_5293_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_Value_toTaskKeeping___boxed), 5, 4);
lean_closure_set(v___x_5293_, 0, v_v_5283_);
lean_closure_set(v___x_5293_, 1, lean_box(0));
lean_closure_set(v___x_5293_, 2, v_inst_5284_);
lean_closure_set(v___x_5293_, 3, v___x_5292_);
v___x_5294_ = lean_alloc_closure((void*)(l_instMonadEIO___aux__13___boxed), 6, 5);
lean_closure_set(v___x_5294_, 0, lean_box(0));
lean_closure_set(v___x_5294_, 1, lean_box(0));
lean_closure_set(v___x_5294_, 2, lean_box(0));
lean_closure_set(v___x_5294_, 3, v___x_5293_);
lean_closure_set(v___x_5294_, 4, v___f_5290_);
v___x_5295_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_bind___boxed), 6, 5);
lean_closure_set(v___x_5295_, 0, lean_box(0));
lean_closure_set(v___x_5295_, 1, lean_box(0));
lean_closure_set(v___x_5295_, 2, lean_box(0));
lean_closure_set(v___x_5295_, 3, v___f_5285_);
lean_closure_set(v___x_5295_, 4, v___f_5289_);
v___x_5296_ = lean_apply_3(v_inst_5282_, lean_box(0), v___x_5294_, v___x_5295_);
return v___x_5296_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await(lean_object* v_m_5297_, lean_object* v_inst_5298_, lean_object* v_v_5299_, lean_object* v_00_u03b1_5300_, lean_object* v_inst_5301_){
_start:
{
lean_object* v___x_5302_; 
v___x_5302_ = l_Lasm_JS_Value_await___redArg(v_inst_5298_, v_v_5299_, v_inst_5301_);
return v___x_5302_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1___redArg(uint32_t v_a_5303_, lean_object* v_b_5304_, lean_object* v_x_5305_){
_start:
{
if (lean_obj_tag(v_x_5305_) == 0)
{
lean_dec(v_b_5304_);
return v_x_5305_;
}
else
{
lean_object* v_key_5306_; lean_object* v_value_5307_; lean_object* v_tail_5308_; lean_object* v___x_5310_; uint8_t v_isShared_5311_; uint8_t v_isSharedCheck_5322_; 
v_key_5306_ = lean_ctor_get(v_x_5305_, 0);
v_value_5307_ = lean_ctor_get(v_x_5305_, 1);
v_tail_5308_ = lean_ctor_get(v_x_5305_, 2);
v_isSharedCheck_5322_ = !lean_is_exclusive(v_x_5305_);
if (v_isSharedCheck_5322_ == 0)
{
v___x_5310_ = v_x_5305_;
v_isShared_5311_ = v_isSharedCheck_5322_;
goto v_resetjp_5309_;
}
else
{
lean_inc(v_tail_5308_);
lean_inc(v_value_5307_);
lean_inc(v_key_5306_);
lean_dec(v_x_5305_);
v___x_5310_ = lean_box(0);
v_isShared_5311_ = v_isSharedCheck_5322_;
goto v_resetjp_5309_;
}
v_resetjp_5309_:
{
uint32_t v___x_5312_; uint8_t v___x_5313_; 
v___x_5312_ = lean_unbox_uint32(v_key_5306_);
v___x_5313_ = lean_uint32_dec_eq(v___x_5312_, v_a_5303_);
if (v___x_5313_ == 0)
{
lean_object* v___x_5314_; lean_object* v___x_5316_; 
v___x_5314_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1___redArg(v_a_5303_, v_b_5304_, v_tail_5308_);
if (v_isShared_5311_ == 0)
{
lean_ctor_set(v___x_5310_, 2, v___x_5314_);
v___x_5316_ = v___x_5310_;
goto v_reusejp_5315_;
}
else
{
lean_object* v_reuseFailAlloc_5317_; 
v_reuseFailAlloc_5317_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5317_, 0, v_key_5306_);
lean_ctor_set(v_reuseFailAlloc_5317_, 1, v_value_5307_);
lean_ctor_set(v_reuseFailAlloc_5317_, 2, v___x_5314_);
v___x_5316_ = v_reuseFailAlloc_5317_;
goto v_reusejp_5315_;
}
v_reusejp_5315_:
{
return v___x_5316_;
}
}
else
{
lean_object* v___x_5318_; lean_object* v___x_5320_; 
lean_dec(v_value_5307_);
lean_dec(v_key_5306_);
v___x_5318_ = lean_box_uint32(v_a_5303_);
if (v_isShared_5311_ == 0)
{
lean_ctor_set(v___x_5310_, 1, v_b_5304_);
lean_ctor_set(v___x_5310_, 0, v___x_5318_);
v___x_5320_ = v___x_5310_;
goto v_reusejp_5319_;
}
else
{
lean_object* v_reuseFailAlloc_5321_; 
v_reuseFailAlloc_5321_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5321_, 0, v___x_5318_);
lean_ctor_set(v_reuseFailAlloc_5321_, 1, v_b_5304_);
lean_ctor_set(v_reuseFailAlloc_5321_, 2, v_tail_5308_);
v___x_5320_ = v_reuseFailAlloc_5321_;
goto v_reusejp_5319_;
}
v_reusejp_5319_:
{
return v___x_5320_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1___redArg___boxed(lean_object* v_a_5323_, lean_object* v_b_5324_, lean_object* v_x_5325_){
_start:
{
uint32_t v_a_boxed_5326_; lean_object* v_res_5327_; 
v_a_boxed_5326_ = lean_unbox_uint32(v_a_5323_);
lean_dec(v_a_5323_);
v_res_5327_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1___redArg(v_a_boxed_5326_, v_b_5324_, v_x_5325_);
return v_res_5327_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_5328_, lean_object* v_x_5329_){
_start:
{
if (lean_obj_tag(v_x_5329_) == 0)
{
return v_x_5328_;
}
else
{
lean_object* v_key_5330_; lean_object* v_value_5331_; lean_object* v_tail_5332_; lean_object* v___x_5334_; uint8_t v_isShared_5335_; uint8_t v_isSharedCheck_5356_; 
v_key_5330_ = lean_ctor_get(v_x_5329_, 0);
v_value_5331_ = lean_ctor_get(v_x_5329_, 1);
v_tail_5332_ = lean_ctor_get(v_x_5329_, 2);
v_isSharedCheck_5356_ = !lean_is_exclusive(v_x_5329_);
if (v_isSharedCheck_5356_ == 0)
{
v___x_5334_ = v_x_5329_;
v_isShared_5335_ = v_isSharedCheck_5356_;
goto v_resetjp_5333_;
}
else
{
lean_inc(v_tail_5332_);
lean_inc(v_value_5331_);
lean_inc(v_key_5330_);
lean_dec(v_x_5329_);
v___x_5334_ = lean_box(0);
v_isShared_5335_ = v_isSharedCheck_5356_;
goto v_resetjp_5333_;
}
v_resetjp_5333_:
{
lean_object* v___x_5336_; uint32_t v___x_5337_; uint64_t v___x_5338_; uint64_t v___x_5339_; uint64_t v___x_5340_; uint64_t v_fold_5341_; uint64_t v___x_5342_; uint64_t v___x_5343_; uint64_t v___x_5344_; size_t v___x_5345_; size_t v___x_5346_; size_t v___x_5347_; size_t v___x_5348_; size_t v___x_5349_; lean_object* v___x_5350_; lean_object* v___x_5352_; 
v___x_5336_ = lean_array_get_size(v_x_5328_);
v___x_5337_ = lean_unbox_uint32(v_key_5330_);
v___x_5338_ = lean_uint32_to_uint64(v___x_5337_);
v___x_5339_ = 32ULL;
v___x_5340_ = lean_uint64_shift_right(v___x_5338_, v___x_5339_);
v_fold_5341_ = lean_uint64_xor(v___x_5338_, v___x_5340_);
v___x_5342_ = 16ULL;
v___x_5343_ = lean_uint64_shift_right(v_fold_5341_, v___x_5342_);
v___x_5344_ = lean_uint64_xor(v_fold_5341_, v___x_5343_);
v___x_5345_ = lean_uint64_to_usize(v___x_5344_);
v___x_5346_ = lean_usize_of_nat(v___x_5336_);
v___x_5347_ = ((size_t)1ULL);
v___x_5348_ = lean_usize_sub(v___x_5346_, v___x_5347_);
v___x_5349_ = lean_usize_land(v___x_5345_, v___x_5348_);
v___x_5350_ = lean_array_uget_borrowed(v_x_5328_, v___x_5349_);
lean_inc(v___x_5350_);
if (v_isShared_5335_ == 0)
{
lean_ctor_set(v___x_5334_, 2, v___x_5350_);
v___x_5352_ = v___x_5334_;
goto v_reusejp_5351_;
}
else
{
lean_object* v_reuseFailAlloc_5355_; 
v_reuseFailAlloc_5355_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5355_, 0, v_key_5330_);
lean_ctor_set(v_reuseFailAlloc_5355_, 1, v_value_5331_);
lean_ctor_set(v_reuseFailAlloc_5355_, 2, v___x_5350_);
v___x_5352_ = v_reuseFailAlloc_5355_;
goto v_reusejp_5351_;
}
v_reusejp_5351_:
{
lean_object* v___x_5353_; 
v___x_5353_ = lean_array_uset(v_x_5328_, v___x_5349_, v___x_5352_);
v_x_5328_ = v___x_5353_;
v_x_5329_ = v_tail_5332_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1___redArg(lean_object* v_i_5357_, lean_object* v_source_5358_, lean_object* v_target_5359_){
_start:
{
lean_object* v___x_5360_; uint8_t v___x_5361_; 
v___x_5360_ = lean_array_get_size(v_source_5358_);
v___x_5361_ = lean_nat_dec_lt(v_i_5357_, v___x_5360_);
if (v___x_5361_ == 0)
{
lean_dec_ref(v_source_5358_);
lean_dec(v_i_5357_);
return v_target_5359_;
}
else
{
lean_object* v_es_5362_; lean_object* v___x_5363_; lean_object* v_source_5364_; lean_object* v_target_5365_; lean_object* v___x_5366_; lean_object* v___x_5367_; 
v_es_5362_ = lean_array_fget(v_source_5358_, v_i_5357_);
v___x_5363_ = lean_box(0);
v_source_5364_ = lean_array_fset(v_source_5358_, v_i_5357_, v___x_5363_);
v_target_5365_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1_spec__2___redArg(v_target_5359_, v_es_5362_);
v___x_5366_ = lean_unsigned_to_nat(1u);
v___x_5367_ = lean_nat_add(v_i_5357_, v___x_5366_);
lean_dec(v_i_5357_);
v_i_5357_ = v___x_5367_;
v_source_5358_ = v_source_5364_;
v_target_5359_ = v_target_5365_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0___redArg(lean_object* v_data_5369_){
_start:
{
lean_object* v___x_5370_; lean_object* v___x_5371_; lean_object* v_nbuckets_5372_; lean_object* v___x_5373_; lean_object* v___x_5374_; lean_object* v___x_5375_; lean_object* v___x_5376_; lean_object* v___x_5377_; 
v___x_5370_ = lean_array_get_size(v_data_5369_);
v___x_5371_ = lean_unsigned_to_nat(2u);
v_nbuckets_5372_ = lean_nat_mul(v___x_5370_, v___x_5371_);
v___x_5373_ = lean_unsigned_to_nat(0u);
v___x_5374_ = lean_box(0);
v___x_5375_ = lean_mk_array(v_nbuckets_5372_, v___x_5374_);
v___x_5376_ = lean_array_propagate_mark(v_data_5369_, v___x_5375_);
v___x_5377_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1___redArg(v___x_5373_, v_data_5369_, v___x_5376_);
return v___x_5377_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0___redArg(lean_object* v_m_5378_, uint32_t v_a_5379_, lean_object* v_b_5380_){
_start:
{
lean_object* v_size_5381_; lean_object* v_buckets_5382_; lean_object* v___x_5384_; uint8_t v_isShared_5385_; uint8_t v_isSharedCheck_5426_; 
v_size_5381_ = lean_ctor_get(v_m_5378_, 0);
v_buckets_5382_ = lean_ctor_get(v_m_5378_, 1);
v_isSharedCheck_5426_ = !lean_is_exclusive(v_m_5378_);
if (v_isSharedCheck_5426_ == 0)
{
v___x_5384_ = v_m_5378_;
v_isShared_5385_ = v_isSharedCheck_5426_;
goto v_resetjp_5383_;
}
else
{
lean_inc(v_buckets_5382_);
lean_inc(v_size_5381_);
lean_dec(v_m_5378_);
v___x_5384_ = lean_box(0);
v_isShared_5385_ = v_isSharedCheck_5426_;
goto v_resetjp_5383_;
}
v_resetjp_5383_:
{
lean_object* v___x_5386_; uint64_t v___x_5387_; uint64_t v___x_5388_; uint64_t v___x_5389_; uint64_t v_fold_5390_; uint64_t v___x_5391_; uint64_t v___x_5392_; uint64_t v___x_5393_; size_t v___x_5394_; size_t v___x_5395_; size_t v___x_5396_; size_t v___x_5397_; size_t v___x_5398_; lean_object* v_bkt_5399_; uint8_t v___x_5400_; 
v___x_5386_ = lean_array_get_size(v_buckets_5382_);
v___x_5387_ = lean_uint32_to_uint64(v_a_5379_);
v___x_5388_ = 32ULL;
v___x_5389_ = lean_uint64_shift_right(v___x_5387_, v___x_5388_);
v_fold_5390_ = lean_uint64_xor(v___x_5387_, v___x_5389_);
v___x_5391_ = 16ULL;
v___x_5392_ = lean_uint64_shift_right(v_fold_5390_, v___x_5391_);
v___x_5393_ = lean_uint64_xor(v_fold_5390_, v___x_5392_);
v___x_5394_ = lean_uint64_to_usize(v___x_5393_);
v___x_5395_ = lean_usize_of_nat(v___x_5386_);
v___x_5396_ = ((size_t)1ULL);
v___x_5397_ = lean_usize_sub(v___x_5395_, v___x_5396_);
v___x_5398_ = lean_usize_land(v___x_5394_, v___x_5397_);
v_bkt_5399_ = lean_array_uget_borrowed(v_buckets_5382_, v___x_5398_);
v___x_5400_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2___redArg(v_a_5379_, v_bkt_5399_);
if (v___x_5400_ == 0)
{
lean_object* v___x_5401_; lean_object* v_size_x27_5402_; lean_object* v___x_5403_; lean_object* v___x_5404_; lean_object* v_buckets_x27_5405_; lean_object* v___x_5406_; lean_object* v___x_5407_; lean_object* v___x_5408_; lean_object* v___x_5409_; lean_object* v___x_5410_; uint8_t v___x_5411_; 
v___x_5401_ = lean_unsigned_to_nat(1u);
v_size_x27_5402_ = lean_nat_add(v_size_5381_, v___x_5401_);
lean_dec(v_size_5381_);
v___x_5403_ = lean_box_uint32(v_a_5379_);
lean_inc(v_bkt_5399_);
v___x_5404_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5404_, 0, v___x_5403_);
lean_ctor_set(v___x_5404_, 1, v_b_5380_);
lean_ctor_set(v___x_5404_, 2, v_bkt_5399_);
v_buckets_x27_5405_ = lean_array_uset(v_buckets_5382_, v___x_5398_, v___x_5404_);
v___x_5406_ = lean_unsigned_to_nat(4u);
v___x_5407_ = lean_nat_mul(v_size_x27_5402_, v___x_5406_);
v___x_5408_ = lean_unsigned_to_nat(3u);
v___x_5409_ = lean_nat_div(v___x_5407_, v___x_5408_);
lean_dec(v___x_5407_);
v___x_5410_ = lean_array_get_size(v_buckets_x27_5405_);
v___x_5411_ = lean_nat_dec_le(v___x_5409_, v___x_5410_);
lean_dec(v___x_5409_);
if (v___x_5411_ == 0)
{
lean_object* v_val_5412_; lean_object* v___x_5414_; 
v_val_5412_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0___redArg(v_buckets_x27_5405_);
if (v_isShared_5385_ == 0)
{
lean_ctor_set(v___x_5384_, 1, v_val_5412_);
lean_ctor_set(v___x_5384_, 0, v_size_x27_5402_);
v___x_5414_ = v___x_5384_;
goto v_reusejp_5413_;
}
else
{
lean_object* v_reuseFailAlloc_5415_; 
v_reuseFailAlloc_5415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5415_, 0, v_size_x27_5402_);
lean_ctor_set(v_reuseFailAlloc_5415_, 1, v_val_5412_);
v___x_5414_ = v_reuseFailAlloc_5415_;
goto v_reusejp_5413_;
}
v_reusejp_5413_:
{
return v___x_5414_;
}
}
else
{
lean_object* v___x_5417_; 
if (v_isShared_5385_ == 0)
{
lean_ctor_set(v___x_5384_, 1, v_buckets_x27_5405_);
lean_ctor_set(v___x_5384_, 0, v_size_x27_5402_);
v___x_5417_ = v___x_5384_;
goto v_reusejp_5416_;
}
else
{
lean_object* v_reuseFailAlloc_5418_; 
v_reuseFailAlloc_5418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5418_, 0, v_size_x27_5402_);
lean_ctor_set(v_reuseFailAlloc_5418_, 1, v_buckets_x27_5405_);
v___x_5417_ = v_reuseFailAlloc_5418_;
goto v_reusejp_5416_;
}
v_reusejp_5416_:
{
return v___x_5417_;
}
}
}
else
{
lean_object* v___x_5419_; lean_object* v_buckets_x27_5420_; lean_object* v___x_5421_; lean_object* v___x_5422_; lean_object* v___x_5424_; 
lean_inc(v_bkt_5399_);
v___x_5419_ = lean_box(0);
v_buckets_x27_5420_ = lean_array_uset(v_buckets_5382_, v___x_5398_, v___x_5419_);
v___x_5421_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1___redArg(v_a_5379_, v_b_5380_, v_bkt_5399_);
v___x_5422_ = lean_array_uset(v_buckets_x27_5420_, v___x_5398_, v___x_5421_);
if (v_isShared_5385_ == 0)
{
lean_ctor_set(v___x_5384_, 1, v___x_5422_);
v___x_5424_ = v___x_5384_;
goto v_reusejp_5423_;
}
else
{
lean_object* v_reuseFailAlloc_5425_; 
v_reuseFailAlloc_5425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5425_, 0, v_size_5381_);
lean_ctor_set(v_reuseFailAlloc_5425_, 1, v___x_5422_);
v___x_5424_ = v_reuseFailAlloc_5425_;
goto v_reusejp_5423_;
}
v_reusejp_5423_:
{
return v___x_5424_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0___redArg___boxed(lean_object* v_m_5427_, lean_object* v_a_5428_, lean_object* v_b_5429_){
_start:
{
uint32_t v_a_boxed_5430_; lean_object* v_res_5431_; 
v_a_boxed_5430_ = lean_unbox_uint32(v_a_5428_);
lean_dec(v_a_5428_);
v_res_5431_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0___redArg(v_m_5427_, v_a_boxed_5430_, v_b_5429_);
return v_res_5431_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_register(uint8_t v_synchronous_5432_, lean_object* v_f_5433_){
_start:
{
lean_object* v___x_5435_; lean_object* v___x_5436_; uint32_t v_next_5437_; lean_object* v_asyncFns_5438_; lean_object* v_syncFns_5439_; lean_object* v___x_5441_; uint8_t v_isShared_5442_; uint8_t v_isSharedCheck_5454_; 
v___x_5435_ = l___private_Lasm_JS_Core_0__Lasm_JS_registry;
v___x_5436_ = lean_st_ref_take(v___x_5435_);
v_next_5437_ = lean_ctor_get_uint32(v___x_5436_, sizeof(void*)*2);
v_asyncFns_5438_ = lean_ctor_get(v___x_5436_, 0);
v_syncFns_5439_ = lean_ctor_get(v___x_5436_, 1);
v_isSharedCheck_5454_ = !lean_is_exclusive(v___x_5436_);
if (v_isSharedCheck_5454_ == 0)
{
v___x_5441_ = v___x_5436_;
v_isShared_5442_ = v_isSharedCheck_5454_;
goto v_resetjp_5440_;
}
else
{
lean_inc(v_syncFns_5439_);
lean_inc(v_asyncFns_5438_);
lean_dec(v___x_5436_);
v___x_5441_ = lean_box(0);
v_isShared_5442_ = v_isSharedCheck_5454_;
goto v_resetjp_5440_;
}
v_resetjp_5440_:
{
uint32_t v___x_5443_; uint32_t v___x_5444_; lean_object* v___y_5446_; 
v___x_5443_ = 1;
v___x_5444_ = lean_uint32_add(v_next_5437_, v___x_5443_);
if (v_synchronous_5432_ == 0)
{
lean_dec_ref(v_f_5433_);
v___y_5446_ = v_syncFns_5439_;
goto v___jp_5445_;
}
else
{
lean_object* v___x_5453_; 
v___x_5453_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0___redArg(v_syncFns_5439_, v_next_5437_, v_f_5433_);
v___y_5446_ = v___x_5453_;
goto v___jp_5445_;
}
v___jp_5445_:
{
lean_object* v___x_5448_; 
if (v_isShared_5442_ == 0)
{
lean_ctor_set(v___x_5441_, 1, v___y_5446_);
v___x_5448_ = v___x_5441_;
goto v_reusejp_5447_;
}
else
{
lean_object* v_reuseFailAlloc_5452_; 
v_reuseFailAlloc_5452_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v_reuseFailAlloc_5452_, 0, v_asyncFns_5438_);
lean_ctor_set(v_reuseFailAlloc_5452_, 1, v___y_5446_);
v___x_5448_ = v_reuseFailAlloc_5452_;
goto v_reusejp_5447_;
}
v_reusejp_5447_:
{
lean_object* v___x_5449_; lean_object* v___x_5450_; lean_object* v___x_5451_; 
lean_ctor_set_uint32(v___x_5448_, sizeof(void*)*2, v___x_5444_);
v___x_5449_ = lean_st_ref_put(v___x_5435_, v___x_5448_);
v___x_5450_ = lean_box_uint32(v_next_5437_);
v___x_5451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5451_, 0, v___x_5450_);
return v___x_5451_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_register___boxed(lean_object* v_synchronous_5455_, lean_object* v_f_5456_, lean_object* v_a_5457_){
_start:
{
uint8_t v_synchronous_boxed_5458_; lean_object* v_res_5459_; 
v_synchronous_boxed_5458_ = lean_unbox(v_synchronous_5455_);
v_res_5459_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_register(v_synchronous_boxed_5458_, v_f_5456_);
return v_res_5459_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0(lean_object* v_00_u03b2_5460_, lean_object* v_m_5461_, uint32_t v_a_5462_, lean_object* v_b_5463_){
_start:
{
lean_object* v___x_5464_; 
v___x_5464_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0___redArg(v_m_5461_, v_a_5462_, v_b_5463_);
return v___x_5464_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0___boxed(lean_object* v_00_u03b2_5465_, lean_object* v_m_5466_, lean_object* v_a_5467_, lean_object* v_b_5468_){
_start:
{
uint32_t v_a_boxed_5469_; lean_object* v_res_5470_; 
v_a_boxed_5469_ = lean_unbox_uint32(v_a_5467_);
lean_dec(v_a_5467_);
v_res_5470_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0(v_00_u03b2_5465_, v_m_5466_, v_a_boxed_5469_, v_b_5468_);
return v_res_5470_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0(lean_object* v_00_u03b2_5471_, lean_object* v_data_5472_){
_start:
{
lean_object* v___x_5473_; 
v___x_5473_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0___redArg(v_data_5472_);
return v___x_5473_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1(lean_object* v_00_u03b2_5474_, uint32_t v_a_5475_, lean_object* v_b_5476_, lean_object* v_x_5477_){
_start:
{
lean_object* v___x_5478_; 
v___x_5478_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1___redArg(v_a_5475_, v_b_5476_, v_x_5477_);
return v___x_5478_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1___boxed(lean_object* v_00_u03b2_5479_, lean_object* v_a_5480_, lean_object* v_b_5481_, lean_object* v_x_5482_){
_start:
{
uint32_t v_a_boxed_5483_; lean_object* v_res_5484_; 
v_a_boxed_5483_ = lean_unbox_uint32(v_a_5480_);
lean_dec(v_a_5480_);
v_res_5484_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1(v_00_u03b2_5479_, v_a_boxed_5483_, v_b_5481_, v_x_5482_);
return v_res_5484_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_5485_, lean_object* v_i_5486_, lean_object* v_source_5487_, lean_object* v_target_5488_){
_start:
{
lean_object* v___x_5489_; 
v___x_5489_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1___redArg(v_i_5486_, v_source_5487_, v_target_5488_);
return v___x_5489_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_5490_, lean_object* v_x_5491_, lean_object* v_x_5492_){
_start:
{
lean_object* v___x_5493_; 
v___x_5493_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1_spec__2___redArg(v_x_5491_, v_x_5492_);
return v___x_5493_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_registerReply(lean_object* v_f_5494_){
_start:
{
lean_object* v___x_5496_; lean_object* v___x_5497_; uint32_t v_next_5498_; lean_object* v_asyncFns_5499_; lean_object* v_syncFns_5500_; lean_object* v___x_5502_; uint8_t v_isShared_5503_; uint8_t v_isSharedCheck_5513_; 
v___x_5496_ = l___private_Lasm_JS_Core_0__Lasm_JS_registry;
v___x_5497_ = lean_st_ref_take(v___x_5496_);
v_next_5498_ = lean_ctor_get_uint32(v___x_5497_, sizeof(void*)*2);
v_asyncFns_5499_ = lean_ctor_get(v___x_5497_, 0);
v_syncFns_5500_ = lean_ctor_get(v___x_5497_, 1);
v_isSharedCheck_5513_ = !lean_is_exclusive(v___x_5497_);
if (v_isSharedCheck_5513_ == 0)
{
v___x_5502_ = v___x_5497_;
v_isShared_5503_ = v_isSharedCheck_5513_;
goto v_resetjp_5501_;
}
else
{
lean_inc(v_syncFns_5500_);
lean_inc(v_asyncFns_5499_);
lean_dec(v___x_5497_);
v___x_5502_ = lean_box(0);
v_isShared_5503_ = v_isSharedCheck_5513_;
goto v_resetjp_5501_;
}
v_resetjp_5501_:
{
uint32_t v___x_5504_; uint32_t v___x_5505_; lean_object* v___x_5506_; lean_object* v___x_5508_; 
v___x_5504_ = 1;
v___x_5505_ = lean_uint32_add(v_next_5498_, v___x_5504_);
v___x_5506_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0___redArg(v_asyncFns_5499_, v_next_5498_, v_f_5494_);
if (v_isShared_5503_ == 0)
{
lean_ctor_set(v___x_5502_, 0, v___x_5506_);
v___x_5508_ = v___x_5502_;
goto v_reusejp_5507_;
}
else
{
lean_object* v_reuseFailAlloc_5512_; 
v_reuseFailAlloc_5512_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v_reuseFailAlloc_5512_, 0, v___x_5506_);
lean_ctor_set(v_reuseFailAlloc_5512_, 1, v_syncFns_5500_);
v___x_5508_ = v_reuseFailAlloc_5512_;
goto v_reusejp_5507_;
}
v_reusejp_5507_:
{
lean_object* v___x_5509_; lean_object* v___x_5510_; lean_object* v___x_5511_; 
lean_ctor_set_uint32(v___x_5508_, sizeof(void*)*2, v___x_5505_);
v___x_5509_ = lean_st_ref_put(v___x_5496_, v___x_5508_);
v___x_5510_ = lean_box_uint32(v_next_5498_);
v___x_5511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5511_, 0, v___x_5510_);
return v___x_5511_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_registerReply___boxed(lean_object* v_f_5514_, lean_object* v_a_5515_){
_start:
{
lean_object* v_res_5516_; 
v_res_5516_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_registerReply(v_f_5514_);
return v_res_5516_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn___lam__0(lean_object* v___y_5517_){
_start:
{
if (lean_obj_tag(v___y_5517_) == 0)
{
lean_object* v_a_5518_; lean_object* v___x_5520_; uint8_t v_isShared_5521_; uint8_t v_isSharedCheck_5525_; 
v_a_5518_ = lean_ctor_get(v___y_5517_, 0);
v_isSharedCheck_5525_ = !lean_is_exclusive(v___y_5517_);
if (v_isSharedCheck_5525_ == 0)
{
v___x_5520_ = v___y_5517_;
v_isShared_5521_ = v_isSharedCheck_5525_;
goto v_resetjp_5519_;
}
else
{
lean_inc(v_a_5518_);
lean_dec(v___y_5517_);
v___x_5520_ = lean_box(0);
v_isShared_5521_ = v_isSharedCheck_5525_;
goto v_resetjp_5519_;
}
v_resetjp_5519_:
{
lean_object* v___x_5523_; 
if (v_isShared_5521_ == 0)
{
v___x_5523_ = v___x_5520_;
goto v_reusejp_5522_;
}
else
{
lean_object* v_reuseFailAlloc_5524_; 
v_reuseFailAlloc_5524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5524_, 0, v_a_5518_);
v___x_5523_ = v_reuseFailAlloc_5524_;
goto v_reusejp_5522_;
}
v_reusejp_5522_:
{
return v___x_5523_;
}
}
}
else
{
lean_object* v_a_5526_; lean_object* v___x_5528_; uint8_t v_isShared_5529_; uint8_t v_isSharedCheck_5534_; 
v_a_5526_ = lean_ctor_get(v___y_5517_, 0);
v_isSharedCheck_5534_ = !lean_is_exclusive(v___y_5517_);
if (v_isSharedCheck_5534_ == 0)
{
v___x_5528_ = v___y_5517_;
v_isShared_5529_ = v_isSharedCheck_5534_;
goto v_resetjp_5527_;
}
else
{
lean_inc(v_a_5526_);
lean_dec(v___y_5517_);
v___x_5528_ = lean_box(0);
v_isShared_5529_ = v_isSharedCheck_5534_;
goto v_resetjp_5527_;
}
v_resetjp_5527_:
{
lean_object* v___x_5530_; lean_object* v___x_5532_; 
v___x_5530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5530_, 0, v_a_5526_);
if (v_isShared_5529_ == 0)
{
lean_ctor_set(v___x_5528_, 0, v___x_5530_);
v___x_5532_ = v___x_5528_;
goto v_reusejp_5531_;
}
else
{
lean_object* v_reuseFailAlloc_5533_; 
v_reuseFailAlloc_5533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5533_, 0, v___x_5530_);
v___x_5532_ = v_reuseFailAlloc_5533_;
goto v_reusejp_5531_;
}
v_reusejp_5531_:
{
return v___x_5532_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn___lam__1(lean_object* v_f_5535_, lean_object* v___f_5536_, lean_object* v_args_5537_){
_start:
{
lean_object* v___x_5539_; uint8_t v___x_5540_; lean_object* v___x_5541_; lean_object* v___y_5543_; 
v___x_5539_ = lean_unsigned_to_nat(0u);
v___x_5540_ = 0;
v___x_5541_ = lean_apply_2(v_f_5535_, v_args_5537_, lean_box(0));
if (lean_obj_tag(v___x_5541_) == 0)
{
lean_object* v_a_5545_; 
lean_dec_ref(v___f_5536_);
v_a_5545_ = lean_ctor_get(v___x_5541_, 0);
lean_inc(v_a_5545_);
lean_dec_ref_known(v___x_5541_, 1);
if (lean_obj_tag(v_a_5545_) == 0)
{
lean_object* v_a_5546_; lean_object* v___x_5548_; uint8_t v_isShared_5549_; uint8_t v_isSharedCheck_5553_; 
v_a_5546_ = lean_ctor_get(v_a_5545_, 0);
v_isSharedCheck_5553_ = !lean_is_exclusive(v_a_5545_);
if (v_isSharedCheck_5553_ == 0)
{
v___x_5548_ = v_a_5545_;
v_isShared_5549_ = v_isSharedCheck_5553_;
goto v_resetjp_5547_;
}
else
{
lean_inc(v_a_5546_);
lean_dec(v_a_5545_);
v___x_5548_ = lean_box(0);
v_isShared_5549_ = v_isSharedCheck_5553_;
goto v_resetjp_5547_;
}
v_resetjp_5547_:
{
lean_object* v___x_5551_; 
if (v_isShared_5549_ == 0)
{
v___x_5551_ = v___x_5548_;
goto v_reusejp_5550_;
}
else
{
lean_object* v_reuseFailAlloc_5552_; 
v_reuseFailAlloc_5552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5552_, 0, v_a_5546_);
v___x_5551_ = v_reuseFailAlloc_5552_;
goto v_reusejp_5550_;
}
v_reusejp_5550_:
{
v___y_5543_ = v___x_5551_;
goto v___jp_5542_;
}
}
}
else
{
lean_object* v_a_5554_; lean_object* v___x_5556_; uint8_t v_isShared_5557_; uint8_t v_isSharedCheck_5562_; 
v_a_5554_ = lean_ctor_get(v_a_5545_, 0);
v_isSharedCheck_5562_ = !lean_is_exclusive(v_a_5545_);
if (v_isSharedCheck_5562_ == 0)
{
v___x_5556_ = v_a_5545_;
v_isShared_5557_ = v_isSharedCheck_5562_;
goto v_resetjp_5555_;
}
else
{
lean_inc(v_a_5554_);
lean_dec(v_a_5545_);
v___x_5556_ = lean_box(0);
v_isShared_5557_ = v_isSharedCheck_5562_;
goto v_resetjp_5555_;
}
v_resetjp_5555_:
{
lean_object* v___x_5558_; lean_object* v___x_5560_; 
v___x_5558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5558_, 0, v_a_5554_);
if (v_isShared_5557_ == 0)
{
lean_ctor_set(v___x_5556_, 0, v___x_5558_);
v___x_5560_ = v___x_5556_;
goto v_reusejp_5559_;
}
else
{
lean_object* v_reuseFailAlloc_5561_; 
v_reuseFailAlloc_5561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5561_, 0, v___x_5558_);
v___x_5560_ = v_reuseFailAlloc_5561_;
goto v_reusejp_5559_;
}
v_reusejp_5559_:
{
v___y_5543_ = v___x_5560_;
goto v___jp_5542_;
}
}
}
}
else
{
lean_object* v_a_5563_; lean_object* v___x_5565_; uint8_t v_isShared_5566_; uint8_t v_isSharedCheck_5571_; 
v_a_5563_ = lean_ctor_get(v___x_5541_, 0);
v_isSharedCheck_5571_ = !lean_is_exclusive(v___x_5541_);
if (v_isSharedCheck_5571_ == 0)
{
v___x_5565_ = v___x_5541_;
v_isShared_5566_ = v_isSharedCheck_5571_;
goto v_resetjp_5564_;
}
else
{
lean_inc(v_a_5563_);
lean_dec(v___x_5541_);
v___x_5565_ = lean_box(0);
v_isShared_5566_ = v_isSharedCheck_5571_;
goto v_resetjp_5564_;
}
v_resetjp_5564_:
{
lean_object* v___x_5567_; lean_object* v___x_5569_; 
v___x_5567_ = lean_task_map(v___f_5536_, v_a_5563_, v___x_5539_, v___x_5540_);
if (v_isShared_5566_ == 0)
{
lean_ctor_set(v___x_5565_, 0, v___x_5567_);
v___x_5569_ = v___x_5565_;
goto v_reusejp_5568_;
}
else
{
lean_object* v_reuseFailAlloc_5570_; 
v_reuseFailAlloc_5570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5570_, 0, v___x_5567_);
v___x_5569_ = v_reuseFailAlloc_5570_;
goto v_reusejp_5568_;
}
v_reusejp_5568_:
{
return v___x_5569_;
}
}
}
v___jp_5542_:
{
lean_object* v___x_5544_; 
v___x_5544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5544_, 0, v___y_5543_);
return v___x_5544_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn___lam__1___boxed(lean_object* v_f_5572_, lean_object* v___f_5573_, lean_object* v_args_5574_, lean_object* v___y_5575_){
_start:
{
lean_object* v_res_5576_; 
v_res_5576_ = l_Lasm_JS_Function_ofFn___lam__1(v_f_5572_, v___f_5573_, v_args_5574_);
return v_res_5576_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn(lean_object* v_f_5579_){
_start:
{
lean_object* v___f_5581_; lean_object* v___f_5582_; lean_object* v___x_5583_; 
v___f_5581_ = ((lean_object*)(l_Lasm_JS_Function_ofFn___closed__0));
v___f_5582_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_5582_, 0, v_f_5579_);
lean_closure_set(v___f_5582_, 1, v___f_5581_);
v___x_5583_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_5583_) == 0)
{
lean_object* v___x_5584_; lean_object* v_a_5585_; uint32_t v___x_5586_; uint64_t v___x_5587_; lean_object* v___x_5588_; uint32_t v___x_5589_; lean_object* v___x_5590_; 
lean_dec_ref_known(v___x_5583_, 1);
v___x_5584_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_registerReply(v___f_5582_);
v_a_5585_ = lean_ctor_get(v___x_5584_, 0);
lean_inc(v_a_5585_);
lean_dec_ref(v___x_5584_);
v___x_5586_ = 210;
v___x_5587_ = 1ULL;
v___x_5588_ = l_ByteArray_empty;
v___x_5589_ = lean_unbox_uint32(v_a_5585_);
lean_dec(v_a_5585_);
v___x_5590_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_5586_, v___x_5589_, v___x_5587_, v___x_5588_);
if (lean_obj_tag(v___x_5590_) == 0)
{
lean_object* v_a_5591_; lean_object* v___x_5592_; 
v_a_5591_ = lean_ctor_get(v___x_5590_, 0);
lean_inc(v_a_5591_);
lean_dec_ref_known(v___x_5590_, 1);
v___x_5592_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_5591_);
lean_dec(v_a_5591_);
if (lean_obj_tag(v___x_5592_) == 0)
{
lean_object* v_a_5593_; lean_object* v___x_5594_; lean_object* v___x_5595_; 
v_a_5593_ = lean_ctor_get(v___x_5592_, 0);
lean_inc(v_a_5593_);
lean_dec_ref_known(v___x_5592_, 1);
v___x_5594_ = ((lean_object*)(l_Lasm_JS_Function_ofFn___closed__1));
v___x_5595_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v___x_5594_, v_a_5593_);
return v___x_5595_;
}
else
{
lean_object* v_a_5596_; lean_object* v___x_5598_; uint8_t v_isShared_5599_; uint8_t v_isSharedCheck_5603_; 
v_a_5596_ = lean_ctor_get(v___x_5592_, 0);
v_isSharedCheck_5603_ = !lean_is_exclusive(v___x_5592_);
if (v_isSharedCheck_5603_ == 0)
{
v___x_5598_ = v___x_5592_;
v_isShared_5599_ = v_isSharedCheck_5603_;
goto v_resetjp_5597_;
}
else
{
lean_inc(v_a_5596_);
lean_dec(v___x_5592_);
v___x_5598_ = lean_box(0);
v_isShared_5599_ = v_isSharedCheck_5603_;
goto v_resetjp_5597_;
}
v_resetjp_5597_:
{
lean_object* v___x_5601_; 
if (v_isShared_5599_ == 0)
{
v___x_5601_ = v___x_5598_;
goto v_reusejp_5600_;
}
else
{
lean_object* v_reuseFailAlloc_5602_; 
v_reuseFailAlloc_5602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5602_, 0, v_a_5596_);
v___x_5601_ = v_reuseFailAlloc_5602_;
goto v_reusejp_5600_;
}
v_reusejp_5600_:
{
return v___x_5601_;
}
}
}
}
else
{
lean_object* v_a_5604_; lean_object* v___x_5606_; uint8_t v_isShared_5607_; uint8_t v_isSharedCheck_5611_; 
v_a_5604_ = lean_ctor_get(v___x_5590_, 0);
v_isSharedCheck_5611_ = !lean_is_exclusive(v___x_5590_);
if (v_isSharedCheck_5611_ == 0)
{
v___x_5606_ = v___x_5590_;
v_isShared_5607_ = v_isSharedCheck_5611_;
goto v_resetjp_5605_;
}
else
{
lean_inc(v_a_5604_);
lean_dec(v___x_5590_);
v___x_5606_ = lean_box(0);
v_isShared_5607_ = v_isSharedCheck_5611_;
goto v_resetjp_5605_;
}
v_resetjp_5605_:
{
lean_object* v___x_5609_; 
if (v_isShared_5607_ == 0)
{
v___x_5609_ = v___x_5606_;
goto v_reusejp_5608_;
}
else
{
lean_object* v_reuseFailAlloc_5610_; 
v_reuseFailAlloc_5610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5610_, 0, v_a_5604_);
v___x_5609_ = v_reuseFailAlloc_5610_;
goto v_reusejp_5608_;
}
v_reusejp_5608_:
{
return v___x_5609_;
}
}
}
}
else
{
lean_object* v_a_5612_; lean_object* v___x_5614_; uint8_t v_isShared_5615_; uint8_t v_isSharedCheck_5619_; 
lean_dec_ref(v___f_5582_);
v_a_5612_ = lean_ctor_get(v___x_5583_, 0);
v_isSharedCheck_5619_ = !lean_is_exclusive(v___x_5583_);
if (v_isSharedCheck_5619_ == 0)
{
v___x_5614_ = v___x_5583_;
v_isShared_5615_ = v_isSharedCheck_5619_;
goto v_resetjp_5613_;
}
else
{
lean_inc(v_a_5612_);
lean_dec(v___x_5583_);
v___x_5614_ = lean_box(0);
v_isShared_5615_ = v_isSharedCheck_5619_;
goto v_resetjp_5613_;
}
v_resetjp_5613_:
{
lean_object* v___x_5617_; 
if (v_isShared_5615_ == 0)
{
v___x_5617_ = v___x_5614_;
goto v_reusejp_5616_;
}
else
{
lean_object* v_reuseFailAlloc_5618_; 
v_reuseFailAlloc_5618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5618_, 0, v_a_5612_);
v___x_5617_ = v_reuseFailAlloc_5618_;
goto v_reusejp_5616_;
}
v_reusejp_5616_:
{
return v___x_5617_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn___boxed(lean_object* v_f_5620_, lean_object* v_a_5621_){
_start:
{
lean_object* v_res_5622_; 
v_res_5622_ = l_Lasm_JS_Function_ofFn(v_f_5620_);
return v_res_5622_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFnReply(lean_object* v_f_5624_){
_start:
{
lean_object* v___x_5626_; 
v___x_5626_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_5626_) == 0)
{
lean_object* v___x_5627_; lean_object* v_a_5628_; uint32_t v___x_5629_; uint64_t v___x_5630_; lean_object* v___x_5631_; uint32_t v___x_5632_; lean_object* v___x_5633_; 
lean_dec_ref_known(v___x_5626_, 1);
v___x_5627_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_registerReply(v_f_5624_);
v_a_5628_ = lean_ctor_get(v___x_5627_, 0);
lean_inc(v_a_5628_);
lean_dec_ref(v___x_5627_);
v___x_5629_ = 210;
v___x_5630_ = 1ULL;
v___x_5631_ = l_ByteArray_empty;
v___x_5632_ = lean_unbox_uint32(v_a_5628_);
lean_dec(v_a_5628_);
v___x_5633_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_5629_, v___x_5632_, v___x_5630_, v___x_5631_);
if (lean_obj_tag(v___x_5633_) == 0)
{
lean_object* v_a_5634_; lean_object* v___x_5635_; 
v_a_5634_ = lean_ctor_get(v___x_5633_, 0);
lean_inc(v_a_5634_);
lean_dec_ref_known(v___x_5633_, 1);
v___x_5635_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_5634_);
lean_dec(v_a_5634_);
if (lean_obj_tag(v___x_5635_) == 0)
{
lean_object* v_a_5636_; lean_object* v___x_5637_; lean_object* v___x_5638_; 
v_a_5636_ = lean_ctor_get(v___x_5635_, 0);
lean_inc(v_a_5636_);
lean_dec_ref_known(v___x_5635_, 1);
v___x_5637_ = ((lean_object*)(l_Lasm_JS_Function_ofFnReply___closed__0));
v___x_5638_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v___x_5637_, v_a_5636_);
return v___x_5638_;
}
else
{
lean_object* v_a_5639_; lean_object* v___x_5641_; uint8_t v_isShared_5642_; uint8_t v_isSharedCheck_5646_; 
v_a_5639_ = lean_ctor_get(v___x_5635_, 0);
v_isSharedCheck_5646_ = !lean_is_exclusive(v___x_5635_);
if (v_isSharedCheck_5646_ == 0)
{
v___x_5641_ = v___x_5635_;
v_isShared_5642_ = v_isSharedCheck_5646_;
goto v_resetjp_5640_;
}
else
{
lean_inc(v_a_5639_);
lean_dec(v___x_5635_);
v___x_5641_ = lean_box(0);
v_isShared_5642_ = v_isSharedCheck_5646_;
goto v_resetjp_5640_;
}
v_resetjp_5640_:
{
lean_object* v___x_5644_; 
if (v_isShared_5642_ == 0)
{
v___x_5644_ = v___x_5641_;
goto v_reusejp_5643_;
}
else
{
lean_object* v_reuseFailAlloc_5645_; 
v_reuseFailAlloc_5645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5645_, 0, v_a_5639_);
v___x_5644_ = v_reuseFailAlloc_5645_;
goto v_reusejp_5643_;
}
v_reusejp_5643_:
{
return v___x_5644_;
}
}
}
}
else
{
lean_object* v_a_5647_; lean_object* v___x_5649_; uint8_t v_isShared_5650_; uint8_t v_isSharedCheck_5654_; 
v_a_5647_ = lean_ctor_get(v___x_5633_, 0);
v_isSharedCheck_5654_ = !lean_is_exclusive(v___x_5633_);
if (v_isSharedCheck_5654_ == 0)
{
v___x_5649_ = v___x_5633_;
v_isShared_5650_ = v_isSharedCheck_5654_;
goto v_resetjp_5648_;
}
else
{
lean_inc(v_a_5647_);
lean_dec(v___x_5633_);
v___x_5649_ = lean_box(0);
v_isShared_5650_ = v_isSharedCheck_5654_;
goto v_resetjp_5648_;
}
v_resetjp_5648_:
{
lean_object* v___x_5652_; 
if (v_isShared_5650_ == 0)
{
v___x_5652_ = v___x_5649_;
goto v_reusejp_5651_;
}
else
{
lean_object* v_reuseFailAlloc_5653_; 
v_reuseFailAlloc_5653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5653_, 0, v_a_5647_);
v___x_5652_ = v_reuseFailAlloc_5653_;
goto v_reusejp_5651_;
}
v_reusejp_5651_:
{
return v___x_5652_;
}
}
}
}
else
{
lean_object* v_a_5655_; lean_object* v___x_5657_; uint8_t v_isShared_5658_; uint8_t v_isSharedCheck_5662_; 
lean_dec_ref(v_f_5624_);
v_a_5655_ = lean_ctor_get(v___x_5626_, 0);
v_isSharedCheck_5662_ = !lean_is_exclusive(v___x_5626_);
if (v_isSharedCheck_5662_ == 0)
{
v___x_5657_ = v___x_5626_;
v_isShared_5658_ = v_isSharedCheck_5662_;
goto v_resetjp_5656_;
}
else
{
lean_inc(v_a_5655_);
lean_dec(v___x_5626_);
v___x_5657_ = lean_box(0);
v_isShared_5658_ = v_isSharedCheck_5662_;
goto v_resetjp_5656_;
}
v_resetjp_5656_:
{
lean_object* v___x_5660_; 
if (v_isShared_5658_ == 0)
{
v___x_5660_ = v___x_5657_;
goto v_reusejp_5659_;
}
else
{
lean_object* v_reuseFailAlloc_5661_; 
v_reuseFailAlloc_5661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5661_, 0, v_a_5655_);
v___x_5660_ = v_reuseFailAlloc_5661_;
goto v_reusejp_5659_;
}
v_reusejp_5659_:
{
return v___x_5660_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFnReply___boxed(lean_object* v_f_5663_, lean_object* v_a_5664_){
_start:
{
lean_object* v_res_5665_; 
v_res_5665_ = l_Lasm_JS_Function_ofFnReply(v_f_5663_);
return v_res_5665_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object* v_f_5668_){
_start:
{
lean_object* v___x_5670_; 
v___x_5670_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_5670_) == 0)
{
lean_object* v___x_5671_; lean_object* v___x_5672_; 
lean_dec_ref_known(v___x_5670_, 1);
v___x_5671_ = ((lean_object*)(l_Lasm_JS_Function_ofSyncFn___closed__0));
v___x_5672_ = lasm_js_sync_start(v___x_5671_);
if (lean_obj_tag(v___x_5672_) == 0)
{
uint8_t v___x_5673_; lean_object* v___x_5674_; lean_object* v_a_5675_; uint32_t v___x_5676_; uint64_t v___x_5677_; lean_object* v___x_5678_; uint32_t v___x_5679_; lean_object* v___x_5680_; 
lean_dec_ref_known(v___x_5672_, 1);
v___x_5673_ = 1;
v___x_5674_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_register(v___x_5673_, v_f_5668_);
v_a_5675_ = lean_ctor_get(v___x_5674_, 0);
lean_inc(v_a_5675_);
lean_dec_ref(v___x_5674_);
v___x_5676_ = 210;
v___x_5677_ = 2ULL;
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
v___x_5684_ = ((lean_object*)(l_Lasm_JS_Function_ofSyncFn___closed__1));
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
lean_dec_ref(v_f_5668_);
v_a_5702_ = lean_ctor_get(v___x_5672_, 0);
v_isSharedCheck_5709_ = !lean_is_exclusive(v___x_5672_);
if (v_isSharedCheck_5709_ == 0)
{
v___x_5704_ = v___x_5672_;
v_isShared_5705_ = v_isSharedCheck_5709_;
goto v_resetjp_5703_;
}
else
{
lean_inc(v_a_5702_);
lean_dec(v___x_5672_);
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
else
{
lean_object* v_a_5710_; lean_object* v___x_5712_; uint8_t v_isShared_5713_; uint8_t v_isSharedCheck_5717_; 
lean_dec_ref(v_f_5668_);
v_a_5710_ = lean_ctor_get(v___x_5670_, 0);
v_isSharedCheck_5717_ = !lean_is_exclusive(v___x_5670_);
if (v_isSharedCheck_5717_ == 0)
{
v___x_5712_ = v___x_5670_;
v_isShared_5713_ = v_isSharedCheck_5717_;
goto v_resetjp_5711_;
}
else
{
lean_inc(v_a_5710_);
lean_dec(v___x_5670_);
v___x_5712_ = lean_box(0);
v_isShared_5713_ = v_isSharedCheck_5717_;
goto v_resetjp_5711_;
}
v_resetjp_5711_:
{
lean_object* v___x_5715_; 
if (v_isShared_5713_ == 0)
{
v___x_5715_ = v___x_5712_;
goto v_reusejp_5714_;
}
else
{
lean_object* v_reuseFailAlloc_5716_; 
v_reuseFailAlloc_5716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5716_, 0, v_a_5710_);
v___x_5715_ = v_reuseFailAlloc_5716_;
goto v_reusejp_5714_;
}
v_reusejp_5714_:
{
return v___x_5715_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn___boxed(lean_object* v_f_5718_, lean_object* v_a_5719_){
_start:
{
lean_object* v_res_5720_; 
v_res_5720_ = l_Lasm_JS_Function_ofSyncFn(v_f_5718_);
return v_res_5720_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg(lean_object* v_inst_5722_, lean_object* v_args_5723_, lean_object* v_i_5724_){
_start:
{
lean_object* v___x_5726_; lean_object* v___x_5727_; lean_object* v___x_5728_; lean_object* v___x_5729_; lean_object* v___x_5730_; lean_object* v___x_5731_; uint8_t v___x_5732_; 
v___x_5726_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg___closed__0));
v___x_5727_ = lean_unsigned_to_nat(1u);
v___x_5728_ = lean_nat_add(v_i_5724_, v___x_5727_);
v___x_5729_ = l_Nat_reprFast(v___x_5728_);
v___x_5730_ = lean_string_append(v___x_5726_, v___x_5729_);
lean_dec_ref(v___x_5729_);
v___x_5731_ = lean_array_get_size(v_args_5723_);
v___x_5732_ = lean_nat_dec_lt(v_i_5724_, v___x_5731_);
if (v___x_5732_ == 0)
{
lean_object* v___x_5733_; lean_object* v___x_5734_; 
v___x_5733_ = lean_box(0);
v___x_5734_ = l_Lasm_JS_decodeAs___redArg(v_inst_5722_, v___x_5730_, v___x_5733_);
lean_dec_ref(v___x_5730_);
return v___x_5734_;
}
else
{
lean_object* v___x_5735_; lean_object* v___x_5736_; 
v___x_5735_ = lean_array_fget_borrowed(v_args_5723_, v_i_5724_);
lean_inc(v___x_5735_);
v___x_5736_ = l_Lasm_JS_decodeAs___redArg(v_inst_5722_, v___x_5730_, v___x_5735_);
lean_dec_ref(v___x_5730_);
return v___x_5736_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg___boxed(lean_object* v_inst_5737_, lean_object* v_args_5738_, lean_object* v_i_5739_, lean_object* v_a_5740_){
_start:
{
lean_object* v_res_5741_; 
v_res_5741_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg(v_inst_5737_, v_args_5738_, v_i_5739_);
lean_dec(v_i_5739_);
lean_dec_ref(v_args_5738_);
return v_res_5741_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument(lean_object* v_00_u03b1_5742_, lean_object* v_inst_5743_, lean_object* v_args_5744_, lean_object* v_i_5745_){
_start:
{
lean_object* v___x_5747_; 
v___x_5747_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg(v_inst_5743_, v_args_5744_, v_i_5745_);
return v___x_5747_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___boxed(lean_object* v_00_u03b1_5748_, lean_object* v_inst_5749_, lean_object* v_args_5750_, lean_object* v_i_5751_, lean_object* v_a_5752_){
_start:
{
lean_object* v_res_5753_; 
v_res_5753_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument(v_00_u03b1_5748_, v_inst_5749_, v_args_5750_, v_i_5751_);
lean_dec(v_i_5751_);
lean_dec_ref(v_args_5750_);
return v_res_5753_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___lam__0(lean_object* v_inst_5754_, lean_object* v_x_5755_){
_start:
{
if (lean_obj_tag(v_x_5755_) == 0)
{
lean_object* v_a_5757_; lean_object* v___x_5759_; uint8_t v_isShared_5760_; uint8_t v_isSharedCheck_5765_; 
lean_dec_ref(v_inst_5754_);
v_a_5757_ = lean_ctor_get(v_x_5755_, 0);
v_isSharedCheck_5765_ = !lean_is_exclusive(v_x_5755_);
if (v_isSharedCheck_5765_ == 0)
{
v___x_5759_ = v_x_5755_;
v_isShared_5760_ = v_isSharedCheck_5765_;
goto v_resetjp_5758_;
}
else
{
lean_inc(v_a_5757_);
lean_dec(v_x_5755_);
v___x_5759_ = lean_box(0);
v_isShared_5760_ = v_isSharedCheck_5765_;
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
lean_object* v_reuseFailAlloc_5764_; 
v_reuseFailAlloc_5764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5764_, 0, v_a_5757_);
v___x_5762_ = v_reuseFailAlloc_5764_;
goto v_reusejp_5761_;
}
v_reusejp_5761_:
{
lean_object* v___x_5763_; 
v___x_5763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5763_, 0, v___x_5762_);
return v___x_5763_;
}
}
}
else
{
lean_object* v_a_5766_; lean_object* v___x_5768_; uint8_t v_isShared_5769_; uint8_t v_isSharedCheck_5775_; 
v_a_5766_ = lean_ctor_get(v_x_5755_, 0);
v_isSharedCheck_5775_ = !lean_is_exclusive(v_x_5755_);
if (v_isSharedCheck_5775_ == 0)
{
v___x_5768_ = v_x_5755_;
v_isShared_5769_ = v_isSharedCheck_5775_;
goto v_resetjp_5767_;
}
else
{
lean_inc(v_a_5766_);
lean_dec(v_x_5755_);
v___x_5768_ = lean_box(0);
v_isShared_5769_ = v_isSharedCheck_5775_;
goto v_resetjp_5767_;
}
v_resetjp_5767_:
{
lean_object* v___x_5770_; lean_object* v___x_5772_; 
v___x_5770_ = lean_apply_1(v_inst_5754_, v_a_5766_);
if (v_isShared_5769_ == 0)
{
lean_ctor_set(v___x_5768_, 0, v___x_5770_);
v___x_5772_ = v___x_5768_;
goto v_reusejp_5771_;
}
else
{
lean_object* v_reuseFailAlloc_5774_; 
v_reuseFailAlloc_5774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5774_, 0, v___x_5770_);
v___x_5772_ = v_reuseFailAlloc_5774_;
goto v_reusejp_5771_;
}
v_reusejp_5771_:
{
lean_object* v___x_5773_; 
v___x_5773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5773_, 0, v___x_5772_);
return v___x_5773_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___lam__0___boxed(lean_object* v_inst_5776_, lean_object* v_x_5777_, lean_object* v___y_5778_){
_start:
{
lean_object* v_res_5779_; 
v_res_5779_ = l_Lasm_JS_Function_ofFn1___redArg___lam__0(v_inst_5776_, v_x_5777_);
return v_res_5779_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___lam__1(lean_object* v_f_5780_, lean_object* v___f_5781_, lean_object* v_x_5782_){
_start:
{
if (lean_obj_tag(v_x_5782_) == 0)
{
lean_object* v_a_5784_; lean_object* v___x_5786_; uint8_t v_isShared_5787_; uint8_t v_isSharedCheck_5792_; 
lean_dec_ref(v___f_5781_);
lean_dec_ref(v_f_5780_);
v_a_5784_ = lean_ctor_get(v_x_5782_, 0);
v_isSharedCheck_5792_ = !lean_is_exclusive(v_x_5782_);
if (v_isSharedCheck_5792_ == 0)
{
v___x_5786_ = v_x_5782_;
v_isShared_5787_ = v_isSharedCheck_5792_;
goto v_resetjp_5785_;
}
else
{
lean_inc(v_a_5784_);
lean_dec(v_x_5782_);
v___x_5786_ = lean_box(0);
v_isShared_5787_ = v_isSharedCheck_5792_;
goto v_resetjp_5785_;
}
v_resetjp_5785_:
{
lean_object* v___x_5789_; 
if (v_isShared_5787_ == 0)
{
v___x_5789_ = v___x_5786_;
goto v_reusejp_5788_;
}
else
{
lean_object* v_reuseFailAlloc_5791_; 
v_reuseFailAlloc_5791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5791_, 0, v_a_5784_);
v___x_5789_ = v_reuseFailAlloc_5791_;
goto v_reusejp_5788_;
}
v_reusejp_5788_:
{
lean_object* v___x_5790_; 
v___x_5790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5790_, 0, v___x_5789_);
return v___x_5790_;
}
}
}
else
{
lean_object* v_a_5793_; lean_object* v___x_5794_; uint8_t v___x_5795_; lean_object* v___x_5796_; lean_object* v___x_5797_; 
v_a_5793_ = lean_ctor_get(v_x_5782_, 0);
lean_inc(v_a_5793_);
lean_dec_ref_known(v_x_5782_, 1);
v___x_5794_ = lean_unsigned_to_nat(0u);
v___x_5795_ = 0;
v___x_5796_ = lean_apply_2(v_f_5780_, v_a_5793_, lean_box(0));
v___x_5797_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5794_, v___x_5795_, v___x_5796_, v___f_5781_);
return v___x_5797_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___lam__1___boxed(lean_object* v_f_5798_, lean_object* v___f_5799_, lean_object* v_x_5800_, lean_object* v___y_5801_){
_start:
{
lean_object* v_res_5802_; 
v_res_5802_ = l_Lasm_JS_Function_ofFn1___redArg___lam__1(v_f_5798_, v___f_5799_, v_x_5800_);
return v_res_5802_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___lam__2(lean_object* v___f_5803_, lean_object* v_inst_5804_, lean_object* v_args_5805_){
_start:
{
lean_object* v___x_5807_; uint8_t v___x_5808_; lean_object* v_val_5810_; lean_object* v___x_5813_; 
v___x_5807_ = lean_unsigned_to_nat(0u);
v___x_5808_ = 0;
v___x_5813_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg(v_inst_5804_, v_args_5805_, v___x_5807_);
if (lean_obj_tag(v___x_5813_) == 0)
{
lean_object* v_a_5814_; lean_object* v___x_5816_; uint8_t v_isShared_5817_; uint8_t v_isSharedCheck_5821_; 
v_a_5814_ = lean_ctor_get(v___x_5813_, 0);
v_isSharedCheck_5821_ = !lean_is_exclusive(v___x_5813_);
if (v_isSharedCheck_5821_ == 0)
{
v___x_5816_ = v___x_5813_;
v_isShared_5817_ = v_isSharedCheck_5821_;
goto v_resetjp_5815_;
}
else
{
lean_inc(v_a_5814_);
lean_dec(v___x_5813_);
v___x_5816_ = lean_box(0);
v_isShared_5817_ = v_isSharedCheck_5821_;
goto v_resetjp_5815_;
}
v_resetjp_5815_:
{
lean_object* v___x_5819_; 
if (v_isShared_5817_ == 0)
{
lean_ctor_set_tag(v___x_5816_, 1);
v___x_5819_ = v___x_5816_;
goto v_reusejp_5818_;
}
else
{
lean_object* v_reuseFailAlloc_5820_; 
v_reuseFailAlloc_5820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5820_, 0, v_a_5814_);
v___x_5819_ = v_reuseFailAlloc_5820_;
goto v_reusejp_5818_;
}
v_reusejp_5818_:
{
v_val_5810_ = v___x_5819_;
goto v___jp_5809_;
}
}
}
else
{
lean_object* v_a_5822_; lean_object* v___x_5824_; uint8_t v_isShared_5825_; uint8_t v_isSharedCheck_5829_; 
v_a_5822_ = lean_ctor_get(v___x_5813_, 0);
v_isSharedCheck_5829_ = !lean_is_exclusive(v___x_5813_);
if (v_isSharedCheck_5829_ == 0)
{
v___x_5824_ = v___x_5813_;
v_isShared_5825_ = v_isSharedCheck_5829_;
goto v_resetjp_5823_;
}
else
{
lean_inc(v_a_5822_);
lean_dec(v___x_5813_);
v___x_5824_ = lean_box(0);
v_isShared_5825_ = v_isSharedCheck_5829_;
goto v_resetjp_5823_;
}
v_resetjp_5823_:
{
lean_object* v___x_5827_; 
if (v_isShared_5825_ == 0)
{
lean_ctor_set_tag(v___x_5824_, 0);
v___x_5827_ = v___x_5824_;
goto v_reusejp_5826_;
}
else
{
lean_object* v_reuseFailAlloc_5828_; 
v_reuseFailAlloc_5828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5828_, 0, v_a_5822_);
v___x_5827_ = v_reuseFailAlloc_5828_;
goto v_reusejp_5826_;
}
v_reusejp_5826_:
{
v_val_5810_ = v___x_5827_;
goto v___jp_5809_;
}
}
}
v___jp_5809_:
{
lean_object* v___x_5811_; lean_object* v___x_5812_; 
v___x_5811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5811_, 0, v_val_5810_);
v___x_5812_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5807_, v___x_5808_, v___x_5811_, v___f_5803_);
return v___x_5812_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___lam__2___boxed(lean_object* v___f_5830_, lean_object* v_inst_5831_, lean_object* v_args_5832_, lean_object* v___y_5833_){
_start:
{
lean_object* v_res_5834_; 
v_res_5834_ = l_Lasm_JS_Function_ofFn1___redArg___lam__2(v___f_5830_, v_inst_5831_, v_args_5832_);
lean_dec_ref(v_args_5832_);
return v_res_5834_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg(lean_object* v_inst_5835_, lean_object* v_inst_5836_, lean_object* v_f_5837_){
_start:
{
lean_object* v___f_5839_; lean_object* v___f_5840_; lean_object* v___f_5841_; lean_object* v___x_5842_; 
v___f_5839_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn1___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_5839_, 0, v_inst_5836_);
v___f_5840_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn1___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_5840_, 0, v_f_5837_);
lean_closure_set(v___f_5840_, 1, v___f_5839_);
v___f_5841_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn1___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_5841_, 0, v___f_5840_);
lean_closure_set(v___f_5841_, 1, v_inst_5835_);
v___x_5842_ = l_Lasm_JS_Function_ofFn(v___f_5841_);
return v___x_5842_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___boxed(lean_object* v_inst_5843_, lean_object* v_inst_5844_, lean_object* v_f_5845_, lean_object* v_a_5846_){
_start:
{
lean_object* v_res_5847_; 
v_res_5847_ = l_Lasm_JS_Function_ofFn1___redArg(v_inst_5843_, v_inst_5844_, v_f_5845_);
return v_res_5847_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1(lean_object* v_00_u03b1_5848_, lean_object* v_00_u03b2_5849_, lean_object* v_inst_5850_, lean_object* v_inst_5851_, lean_object* v_f_5852_){
_start:
{
lean_object* v___x_5854_; 
v___x_5854_ = l_Lasm_JS_Function_ofFn1___redArg(v_inst_5850_, v_inst_5851_, v_f_5852_);
return v___x_5854_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___boxed(lean_object* v_00_u03b1_5855_, lean_object* v_00_u03b2_5856_, lean_object* v_inst_5857_, lean_object* v_inst_5858_, lean_object* v_f_5859_, lean_object* v_a_5860_){
_start:
{
lean_object* v_res_5861_; 
v_res_5861_ = l_Lasm_JS_Function_ofFn1(v_00_u03b1_5855_, v_00_u03b2_5856_, v_inst_5857_, v_inst_5858_, v_f_5859_);
return v_res_5861_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___lam__1(lean_object* v_f_5862_, lean_object* v_a_5863_, lean_object* v___f_5864_, lean_object* v_x_5865_){
_start:
{
if (lean_obj_tag(v_x_5865_) == 0)
{
lean_object* v_a_5867_; lean_object* v___x_5869_; uint8_t v_isShared_5870_; uint8_t v_isSharedCheck_5875_; 
lean_dec_ref(v___f_5864_);
lean_dec(v_a_5863_);
lean_dec_ref(v_f_5862_);
v_a_5867_ = lean_ctor_get(v_x_5865_, 0);
v_isSharedCheck_5875_ = !lean_is_exclusive(v_x_5865_);
if (v_isSharedCheck_5875_ == 0)
{
v___x_5869_ = v_x_5865_;
v_isShared_5870_ = v_isSharedCheck_5875_;
goto v_resetjp_5868_;
}
else
{
lean_inc(v_a_5867_);
lean_dec(v_x_5865_);
v___x_5869_ = lean_box(0);
v_isShared_5870_ = v_isSharedCheck_5875_;
goto v_resetjp_5868_;
}
v_resetjp_5868_:
{
lean_object* v___x_5872_; 
if (v_isShared_5870_ == 0)
{
v___x_5872_ = v___x_5869_;
goto v_reusejp_5871_;
}
else
{
lean_object* v_reuseFailAlloc_5874_; 
v_reuseFailAlloc_5874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5874_, 0, v_a_5867_);
v___x_5872_ = v_reuseFailAlloc_5874_;
goto v_reusejp_5871_;
}
v_reusejp_5871_:
{
lean_object* v___x_5873_; 
v___x_5873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5873_, 0, v___x_5872_);
return v___x_5873_;
}
}
}
else
{
lean_object* v_a_5876_; lean_object* v___x_5877_; uint8_t v___x_5878_; lean_object* v___x_5879_; lean_object* v___x_5880_; 
v_a_5876_ = lean_ctor_get(v_x_5865_, 0);
lean_inc(v_a_5876_);
lean_dec_ref_known(v_x_5865_, 1);
v___x_5877_ = lean_unsigned_to_nat(0u);
v___x_5878_ = 0;
v___x_5879_ = lean_apply_3(v_f_5862_, v_a_5863_, v_a_5876_, lean_box(0));
v___x_5880_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5877_, v___x_5878_, v___x_5879_, v___f_5864_);
return v___x_5880_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___lam__1___boxed(lean_object* v_f_5881_, lean_object* v_a_5882_, lean_object* v___f_5883_, lean_object* v_x_5884_, lean_object* v___y_5885_){
_start:
{
lean_object* v_res_5886_; 
v_res_5886_ = l_Lasm_JS_Function_ofFn2___redArg___lam__1(v_f_5881_, v_a_5882_, v___f_5883_, v_x_5884_);
return v_res_5886_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___lam__0(lean_object* v_f_5887_, lean_object* v___f_5888_, lean_object* v_inst_5889_, lean_object* v_args_5890_, lean_object* v_x_5891_){
_start:
{
if (lean_obj_tag(v_x_5891_) == 0)
{
lean_object* v_a_5893_; lean_object* v___x_5895_; uint8_t v_isShared_5896_; uint8_t v_isSharedCheck_5901_; 
lean_dec_ref(v_inst_5889_);
lean_dec_ref(v___f_5888_);
lean_dec_ref(v_f_5887_);
v_a_5893_ = lean_ctor_get(v_x_5891_, 0);
v_isSharedCheck_5901_ = !lean_is_exclusive(v_x_5891_);
if (v_isSharedCheck_5901_ == 0)
{
v___x_5895_ = v_x_5891_;
v_isShared_5896_ = v_isSharedCheck_5901_;
goto v_resetjp_5894_;
}
else
{
lean_inc(v_a_5893_);
lean_dec(v_x_5891_);
v___x_5895_ = lean_box(0);
v_isShared_5896_ = v_isSharedCheck_5901_;
goto v_resetjp_5894_;
}
v_resetjp_5894_:
{
lean_object* v___x_5898_; 
if (v_isShared_5896_ == 0)
{
v___x_5898_ = v___x_5895_;
goto v_reusejp_5897_;
}
else
{
lean_object* v_reuseFailAlloc_5900_; 
v_reuseFailAlloc_5900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5900_, 0, v_a_5893_);
v___x_5898_ = v_reuseFailAlloc_5900_;
goto v_reusejp_5897_;
}
v_reusejp_5897_:
{
lean_object* v___x_5899_; 
v___x_5899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5899_, 0, v___x_5898_);
return v___x_5899_;
}
}
}
else
{
lean_object* v_a_5902_; lean_object* v___x_5904_; uint8_t v_isShared_5905_; uint8_t v_isSharedCheck_5923_; 
v_a_5902_ = lean_ctor_get(v_x_5891_, 0);
v_isSharedCheck_5923_ = !lean_is_exclusive(v_x_5891_);
if (v_isSharedCheck_5923_ == 0)
{
v___x_5904_ = v_x_5891_;
v_isShared_5905_ = v_isSharedCheck_5923_;
goto v_resetjp_5903_;
}
else
{
lean_inc(v_a_5902_);
lean_dec(v_x_5891_);
v___x_5904_ = lean_box(0);
v_isShared_5905_ = v_isSharedCheck_5923_;
goto v_resetjp_5903_;
}
v_resetjp_5903_:
{
lean_object* v___f_5906_; lean_object* v___x_5907_; lean_object* v___x_5908_; uint8_t v___x_5909_; lean_object* v_val_5911_; lean_object* v___x_5914_; 
v___f_5906_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn2___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_5906_, 0, v_f_5887_);
lean_closure_set(v___f_5906_, 1, v_a_5902_);
lean_closure_set(v___f_5906_, 2, v___f_5888_);
v___x_5907_ = lean_unsigned_to_nat(1u);
v___x_5908_ = lean_unsigned_to_nat(0u);
v___x_5909_ = 0;
v___x_5914_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg(v_inst_5889_, v_args_5890_, v___x_5907_);
if (lean_obj_tag(v___x_5914_) == 0)
{
lean_object* v_a_5915_; lean_object* v___x_5917_; 
v_a_5915_ = lean_ctor_get(v___x_5914_, 0);
lean_inc(v_a_5915_);
lean_dec_ref_known(v___x_5914_, 1);
if (v_isShared_5905_ == 0)
{
lean_ctor_set(v___x_5904_, 0, v_a_5915_);
v___x_5917_ = v___x_5904_;
goto v_reusejp_5916_;
}
else
{
lean_object* v_reuseFailAlloc_5918_; 
v_reuseFailAlloc_5918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5918_, 0, v_a_5915_);
v___x_5917_ = v_reuseFailAlloc_5918_;
goto v_reusejp_5916_;
}
v_reusejp_5916_:
{
v_val_5911_ = v___x_5917_;
goto v___jp_5910_;
}
}
else
{
lean_object* v_a_5919_; lean_object* v___x_5921_; 
v_a_5919_ = lean_ctor_get(v___x_5914_, 0);
lean_inc(v_a_5919_);
lean_dec_ref_known(v___x_5914_, 1);
if (v_isShared_5905_ == 0)
{
lean_ctor_set_tag(v___x_5904_, 0);
lean_ctor_set(v___x_5904_, 0, v_a_5919_);
v___x_5921_ = v___x_5904_;
goto v_reusejp_5920_;
}
else
{
lean_object* v_reuseFailAlloc_5922_; 
v_reuseFailAlloc_5922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5922_, 0, v_a_5919_);
v___x_5921_ = v_reuseFailAlloc_5922_;
goto v_reusejp_5920_;
}
v_reusejp_5920_:
{
v_val_5911_ = v___x_5921_;
goto v___jp_5910_;
}
}
v___jp_5910_:
{
lean_object* v___x_5912_; lean_object* v___x_5913_; 
v___x_5912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5912_, 0, v_val_5911_);
v___x_5913_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5908_, v___x_5909_, v___x_5912_, v___f_5906_);
return v___x_5913_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___lam__0___boxed(lean_object* v_f_5924_, lean_object* v___f_5925_, lean_object* v_inst_5926_, lean_object* v_args_5927_, lean_object* v_x_5928_, lean_object* v___y_5929_){
_start:
{
lean_object* v_res_5930_; 
v_res_5930_ = l_Lasm_JS_Function_ofFn2___redArg___lam__0(v_f_5924_, v___f_5925_, v_inst_5926_, v_args_5927_, v_x_5928_);
lean_dec_ref(v_args_5927_);
return v_res_5930_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___lam__2(lean_object* v_f_5931_, lean_object* v___f_5932_, lean_object* v_inst_5933_, lean_object* v_inst_5934_, lean_object* v_args_5935_){
_start:
{
lean_object* v___f_5937_; lean_object* v___x_5938_; uint8_t v___x_5939_; lean_object* v_val_5941_; lean_object* v___x_5944_; 
lean_inc_ref(v_args_5935_);
v___f_5937_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn2___redArg___lam__0___boxed), 6, 4);
lean_closure_set(v___f_5937_, 0, v_f_5931_);
lean_closure_set(v___f_5937_, 1, v___f_5932_);
lean_closure_set(v___f_5937_, 2, v_inst_5933_);
lean_closure_set(v___f_5937_, 3, v_args_5935_);
v___x_5938_ = lean_unsigned_to_nat(0u);
v___x_5939_ = 0;
v___x_5944_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg(v_inst_5934_, v_args_5935_, v___x_5938_);
lean_dec_ref(v_args_5935_);
if (lean_obj_tag(v___x_5944_) == 0)
{
lean_object* v_a_5945_; lean_object* v___x_5947_; uint8_t v_isShared_5948_; uint8_t v_isSharedCheck_5952_; 
v_a_5945_ = lean_ctor_get(v___x_5944_, 0);
v_isSharedCheck_5952_ = !lean_is_exclusive(v___x_5944_);
if (v_isSharedCheck_5952_ == 0)
{
v___x_5947_ = v___x_5944_;
v_isShared_5948_ = v_isSharedCheck_5952_;
goto v_resetjp_5946_;
}
else
{
lean_inc(v_a_5945_);
lean_dec(v___x_5944_);
v___x_5947_ = lean_box(0);
v_isShared_5948_ = v_isSharedCheck_5952_;
goto v_resetjp_5946_;
}
v_resetjp_5946_:
{
lean_object* v___x_5950_; 
if (v_isShared_5948_ == 0)
{
lean_ctor_set_tag(v___x_5947_, 1);
v___x_5950_ = v___x_5947_;
goto v_reusejp_5949_;
}
else
{
lean_object* v_reuseFailAlloc_5951_; 
v_reuseFailAlloc_5951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5951_, 0, v_a_5945_);
v___x_5950_ = v_reuseFailAlloc_5951_;
goto v_reusejp_5949_;
}
v_reusejp_5949_:
{
v_val_5941_ = v___x_5950_;
goto v___jp_5940_;
}
}
}
else
{
lean_object* v_a_5953_; lean_object* v___x_5955_; uint8_t v_isShared_5956_; uint8_t v_isSharedCheck_5960_; 
v_a_5953_ = lean_ctor_get(v___x_5944_, 0);
v_isSharedCheck_5960_ = !lean_is_exclusive(v___x_5944_);
if (v_isSharedCheck_5960_ == 0)
{
v___x_5955_ = v___x_5944_;
v_isShared_5956_ = v_isSharedCheck_5960_;
goto v_resetjp_5954_;
}
else
{
lean_inc(v_a_5953_);
lean_dec(v___x_5944_);
v___x_5955_ = lean_box(0);
v_isShared_5956_ = v_isSharedCheck_5960_;
goto v_resetjp_5954_;
}
v_resetjp_5954_:
{
lean_object* v___x_5958_; 
if (v_isShared_5956_ == 0)
{
lean_ctor_set_tag(v___x_5955_, 0);
v___x_5958_ = v___x_5955_;
goto v_reusejp_5957_;
}
else
{
lean_object* v_reuseFailAlloc_5959_; 
v_reuseFailAlloc_5959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5959_, 0, v_a_5953_);
v___x_5958_ = v_reuseFailAlloc_5959_;
goto v_reusejp_5957_;
}
v_reusejp_5957_:
{
v_val_5941_ = v___x_5958_;
goto v___jp_5940_;
}
}
}
v___jp_5940_:
{
lean_object* v___x_5942_; lean_object* v___x_5943_; 
v___x_5942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5942_, 0, v_val_5941_);
v___x_5943_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_5938_, v___x_5939_, v___x_5942_, v___f_5937_);
return v___x_5943_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___lam__2___boxed(lean_object* v_f_5961_, lean_object* v___f_5962_, lean_object* v_inst_5963_, lean_object* v_inst_5964_, lean_object* v_args_5965_, lean_object* v___y_5966_){
_start:
{
lean_object* v_res_5967_; 
v_res_5967_ = l_Lasm_JS_Function_ofFn2___redArg___lam__2(v_f_5961_, v___f_5962_, v_inst_5963_, v_inst_5964_, v_args_5965_);
return v_res_5967_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg(lean_object* v_inst_5968_, lean_object* v_inst_5969_, lean_object* v_inst_5970_, lean_object* v_f_5971_){
_start:
{
lean_object* v___f_5973_; lean_object* v___f_5974_; lean_object* v___x_5975_; 
v___f_5973_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn1___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_5973_, 0, v_inst_5970_);
v___f_5974_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn2___redArg___lam__2___boxed), 6, 4);
lean_closure_set(v___f_5974_, 0, v_f_5971_);
lean_closure_set(v___f_5974_, 1, v___f_5973_);
lean_closure_set(v___f_5974_, 2, v_inst_5969_);
lean_closure_set(v___f_5974_, 3, v_inst_5968_);
v___x_5975_ = l_Lasm_JS_Function_ofFn(v___f_5974_);
return v___x_5975_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___boxed(lean_object* v_inst_5976_, lean_object* v_inst_5977_, lean_object* v_inst_5978_, lean_object* v_f_5979_, lean_object* v_a_5980_){
_start:
{
lean_object* v_res_5981_; 
v_res_5981_ = l_Lasm_JS_Function_ofFn2___redArg(v_inst_5976_, v_inst_5977_, v_inst_5978_, v_f_5979_);
return v_res_5981_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2(lean_object* v_00_u03b1_5982_, lean_object* v_00_u03b2_5983_, lean_object* v_00_u03b3_5984_, lean_object* v_inst_5985_, lean_object* v_inst_5986_, lean_object* v_inst_5987_, lean_object* v_f_5988_){
_start:
{
lean_object* v___x_5990_; 
v___x_5990_ = l_Lasm_JS_Function_ofFn2___redArg(v_inst_5985_, v_inst_5986_, v_inst_5987_, v_f_5988_);
return v___x_5990_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___boxed(lean_object* v_00_u03b1_5991_, lean_object* v_00_u03b2_5992_, lean_object* v_00_u03b3_5993_, lean_object* v_inst_5994_, lean_object* v_inst_5995_, lean_object* v_inst_5996_, lean_object* v_f_5997_, lean_object* v_a_5998_){
_start:
{
lean_object* v_res_5999_; 
v_res_5999_ = l_Lasm_JS_Function_ofFn2(v_00_u03b1_5991_, v_00_u03b2_5992_, v_00_u03b3_5993_, v_inst_5994_, v_inst_5995_, v_inst_5996_, v_f_5997_);
return v_res_5999_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn2___redArg___lam__0(lean_object* v_inst_6000_, lean_object* v_inst_6001_, lean_object* v_f_6002_, lean_object* v_inst_6003_, lean_object* v_args_6004_){
_start:
{
lean_object* v___x_6006_; lean_object* v___x_6007_; 
v___x_6006_ = lean_unsigned_to_nat(0u);
v___x_6007_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg(v_inst_6000_, v_args_6004_, v___x_6006_);
if (lean_obj_tag(v___x_6007_) == 0)
{
lean_object* v_a_6008_; lean_object* v___x_6009_; lean_object* v___x_6010_; 
v_a_6008_ = lean_ctor_get(v___x_6007_, 0);
lean_inc(v_a_6008_);
lean_dec_ref_known(v___x_6007_, 1);
v___x_6009_ = lean_unsigned_to_nat(1u);
v___x_6010_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg(v_inst_6001_, v_args_6004_, v___x_6009_);
if (lean_obj_tag(v___x_6010_) == 0)
{
lean_object* v_a_6011_; lean_object* v___x_6012_; 
v_a_6011_ = lean_ctor_get(v___x_6010_, 0);
lean_inc(v_a_6011_);
lean_dec_ref_known(v___x_6010_, 1);
v___x_6012_ = lean_apply_3(v_f_6002_, v_a_6008_, v_a_6011_, lean_box(0));
if (lean_obj_tag(v___x_6012_) == 0)
{
lean_object* v_a_6013_; lean_object* v___x_6015_; uint8_t v_isShared_6016_; uint8_t v_isSharedCheck_6021_; 
v_a_6013_ = lean_ctor_get(v___x_6012_, 0);
v_isSharedCheck_6021_ = !lean_is_exclusive(v___x_6012_);
if (v_isSharedCheck_6021_ == 0)
{
v___x_6015_ = v___x_6012_;
v_isShared_6016_ = v_isSharedCheck_6021_;
goto v_resetjp_6014_;
}
else
{
lean_inc(v_a_6013_);
lean_dec(v___x_6012_);
v___x_6015_ = lean_box(0);
v_isShared_6016_ = v_isSharedCheck_6021_;
goto v_resetjp_6014_;
}
v_resetjp_6014_:
{
lean_object* v___x_6017_; lean_object* v___x_6019_; 
v___x_6017_ = lean_apply_1(v_inst_6003_, v_a_6013_);
if (v_isShared_6016_ == 0)
{
lean_ctor_set(v___x_6015_, 0, v___x_6017_);
v___x_6019_ = v___x_6015_;
goto v_reusejp_6018_;
}
else
{
lean_object* v_reuseFailAlloc_6020_; 
v_reuseFailAlloc_6020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6020_, 0, v___x_6017_);
v___x_6019_ = v_reuseFailAlloc_6020_;
goto v_reusejp_6018_;
}
v_reusejp_6018_:
{
return v___x_6019_;
}
}
}
else
{
lean_object* v_a_6022_; lean_object* v___x_6024_; uint8_t v_isShared_6025_; uint8_t v_isSharedCheck_6029_; 
lean_dec_ref(v_inst_6003_);
v_a_6022_ = lean_ctor_get(v___x_6012_, 0);
v_isSharedCheck_6029_ = !lean_is_exclusive(v___x_6012_);
if (v_isSharedCheck_6029_ == 0)
{
v___x_6024_ = v___x_6012_;
v_isShared_6025_ = v_isSharedCheck_6029_;
goto v_resetjp_6023_;
}
else
{
lean_inc(v_a_6022_);
lean_dec(v___x_6012_);
v___x_6024_ = lean_box(0);
v_isShared_6025_ = v_isSharedCheck_6029_;
goto v_resetjp_6023_;
}
v_resetjp_6023_:
{
lean_object* v___x_6027_; 
if (v_isShared_6025_ == 0)
{
v___x_6027_ = v___x_6024_;
goto v_reusejp_6026_;
}
else
{
lean_object* v_reuseFailAlloc_6028_; 
v_reuseFailAlloc_6028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6028_, 0, v_a_6022_);
v___x_6027_ = v_reuseFailAlloc_6028_;
goto v_reusejp_6026_;
}
v_reusejp_6026_:
{
return v___x_6027_;
}
}
}
}
else
{
lean_object* v_a_6030_; lean_object* v___x_6032_; uint8_t v_isShared_6033_; uint8_t v_isSharedCheck_6037_; 
lean_dec(v_a_6008_);
lean_dec_ref(v_inst_6003_);
lean_dec_ref(v_f_6002_);
v_a_6030_ = lean_ctor_get(v___x_6010_, 0);
v_isSharedCheck_6037_ = !lean_is_exclusive(v___x_6010_);
if (v_isSharedCheck_6037_ == 0)
{
v___x_6032_ = v___x_6010_;
v_isShared_6033_ = v_isSharedCheck_6037_;
goto v_resetjp_6031_;
}
else
{
lean_inc(v_a_6030_);
lean_dec(v___x_6010_);
v___x_6032_ = lean_box(0);
v_isShared_6033_ = v_isSharedCheck_6037_;
goto v_resetjp_6031_;
}
v_resetjp_6031_:
{
lean_object* v___x_6035_; 
if (v_isShared_6033_ == 0)
{
v___x_6035_ = v___x_6032_;
goto v_reusejp_6034_;
}
else
{
lean_object* v_reuseFailAlloc_6036_; 
v_reuseFailAlloc_6036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6036_, 0, v_a_6030_);
v___x_6035_ = v_reuseFailAlloc_6036_;
goto v_reusejp_6034_;
}
v_reusejp_6034_:
{
return v___x_6035_;
}
}
}
}
else
{
lean_object* v_a_6038_; lean_object* v___x_6040_; uint8_t v_isShared_6041_; uint8_t v_isSharedCheck_6045_; 
lean_dec_ref(v_inst_6003_);
lean_dec_ref(v_f_6002_);
lean_dec_ref(v_inst_6001_);
v_a_6038_ = lean_ctor_get(v___x_6007_, 0);
v_isSharedCheck_6045_ = !lean_is_exclusive(v___x_6007_);
if (v_isSharedCheck_6045_ == 0)
{
v___x_6040_ = v___x_6007_;
v_isShared_6041_ = v_isSharedCheck_6045_;
goto v_resetjp_6039_;
}
else
{
lean_inc(v_a_6038_);
lean_dec(v___x_6007_);
v___x_6040_ = lean_box(0);
v_isShared_6041_ = v_isSharedCheck_6045_;
goto v_resetjp_6039_;
}
v_resetjp_6039_:
{
lean_object* v___x_6043_; 
if (v_isShared_6041_ == 0)
{
v___x_6043_ = v___x_6040_;
goto v_reusejp_6042_;
}
else
{
lean_object* v_reuseFailAlloc_6044_; 
v_reuseFailAlloc_6044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6044_, 0, v_a_6038_);
v___x_6043_ = v_reuseFailAlloc_6044_;
goto v_reusejp_6042_;
}
v_reusejp_6042_:
{
return v___x_6043_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn2___redArg___lam__0___boxed(lean_object* v_inst_6046_, lean_object* v_inst_6047_, lean_object* v_f_6048_, lean_object* v_inst_6049_, lean_object* v_args_6050_, lean_object* v___y_6051_){
_start:
{
lean_object* v_res_6052_; 
v_res_6052_ = l_Lasm_JS_Function_ofSyncFn2___redArg___lam__0(v_inst_6046_, v_inst_6047_, v_f_6048_, v_inst_6049_, v_args_6050_);
lean_dec_ref(v_args_6050_);
return v_res_6052_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn2___redArg(lean_object* v_inst_6053_, lean_object* v_inst_6054_, lean_object* v_inst_6055_, lean_object* v_f_6056_){
_start:
{
lean_object* v___f_6058_; lean_object* v___x_6059_; 
v___f_6058_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofSyncFn2___redArg___lam__0___boxed), 6, 4);
lean_closure_set(v___f_6058_, 0, v_inst_6053_);
lean_closure_set(v___f_6058_, 1, v_inst_6054_);
lean_closure_set(v___f_6058_, 2, v_f_6056_);
lean_closure_set(v___f_6058_, 3, v_inst_6055_);
v___x_6059_ = l_Lasm_JS_Function_ofSyncFn(v___f_6058_);
return v___x_6059_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn2___redArg___boxed(lean_object* v_inst_6060_, lean_object* v_inst_6061_, lean_object* v_inst_6062_, lean_object* v_f_6063_, lean_object* v_a_6064_){
_start:
{
lean_object* v_res_6065_; 
v_res_6065_ = l_Lasm_JS_Function_ofSyncFn2___redArg(v_inst_6060_, v_inst_6061_, v_inst_6062_, v_f_6063_);
return v_res_6065_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn2(lean_object* v_00_u03b1_6066_, lean_object* v_00_u03b2_6067_, lean_object* v_00_u03b3_6068_, lean_object* v_inst_6069_, lean_object* v_inst_6070_, lean_object* v_inst_6071_, lean_object* v_f_6072_){
_start:
{
lean_object* v___x_6074_; 
v___x_6074_ = l_Lasm_JS_Function_ofSyncFn2___redArg(v_inst_6069_, v_inst_6070_, v_inst_6071_, v_f_6072_);
return v___x_6074_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn2___boxed(lean_object* v_00_u03b1_6075_, lean_object* v_00_u03b2_6076_, lean_object* v_00_u03b3_6077_, lean_object* v_inst_6078_, lean_object* v_inst_6079_, lean_object* v_inst_6080_, lean_object* v_f_6081_, lean_object* v_a_6082_){
_start:
{
lean_object* v_res_6083_; 
v_res_6083_ = l_Lasm_JS_Function_ofSyncFn2(v_00_u03b1_6075_, v_00_u03b2_6076_, v_00_u03b3_6077_, v_inst_6078_, v_inst_6079_, v_inst_6080_, v_f_6081_);
return v_res_6083_;
}
}
static lean_object* _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_6097_; lean_object* v___x_6098_; 
v___x_6097_ = lean_unsigned_to_nat(8u);
v___x_6098_ = lean_nat_to_int(v___x_6097_);
return v___x_6098_;
}
}
static lean_object* _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_6105_; lean_object* v___x_6106_; 
v___x_6105_ = lean_unsigned_to_nat(10u);
v___x_6106_ = lean_nat_to_int(v___x_6105_);
return v___x_6106_;
}
}
static lean_object* _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_6113_; lean_object* v___x_6114_; 
v___x_6113_ = lean_unsigned_to_nat(13u);
v___x_6114_ = lean_nat_to_int(v___x_6113_);
return v___x_6114_;
}
}
static lean_object* _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__20(void){
_start:
{
lean_object* v___x_6118_; lean_object* v___x_6119_; 
v___x_6118_ = lean_unsigned_to_nat(9u);
v___x_6119_ = lean_nat_to_int(v___x_6118_);
return v___x_6119_;
}
}
static lean_object* _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__22(void){
_start:
{
lean_object* v___x_6121_; lean_object* v___x_6122_; 
v___x_6121_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__0));
v___x_6122_ = lean_string_length(v___x_6121_);
return v___x_6122_;
}
}
static lean_object* _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__23(void){
_start:
{
lean_object* v___x_6123_; lean_object* v___x_6124_; 
v___x_6123_ = lean_obj_once(&l_Lasm_JS_instReprBinding_repr___redArg___closed__22, &l_Lasm_JS_instReprBinding_repr___redArg___closed__22_once, _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__22);
v___x_6124_ = lean_nat_to_int(v___x_6123_);
return v___x_6124_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instReprBinding_repr___redArg(lean_object* v_x_6129_){
_start:
{
lean_object* v_name_6130_; lean_object* v_module_6131_; lean_object* v_path_6132_; uint8_t v_construct_6133_; lean_object* v_arity_6134_; lean_object* v___x_6135_; lean_object* v___x_6136_; lean_object* v___x_6137_; lean_object* v___x_6138_; lean_object* v___x_6139_; lean_object* v___x_6140_; uint8_t v___x_6141_; lean_object* v___x_6142_; lean_object* v___x_6143_; lean_object* v___x_6144_; lean_object* v___x_6145_; lean_object* v___x_6146_; lean_object* v___x_6147_; lean_object* v___x_6148_; lean_object* v___x_6149_; lean_object* v___x_6150_; lean_object* v___x_6151_; lean_object* v___x_6152_; lean_object* v___x_6153_; lean_object* v___x_6154_; lean_object* v___x_6155_; lean_object* v___x_6156_; lean_object* v___x_6157_; lean_object* v___x_6158_; lean_object* v___x_6159_; lean_object* v___x_6160_; lean_object* v___x_6161_; lean_object* v___x_6162_; lean_object* v___x_6163_; lean_object* v___x_6164_; lean_object* v___x_6165_; lean_object* v___x_6166_; lean_object* v___x_6167_; lean_object* v___x_6168_; lean_object* v___x_6169_; lean_object* v___x_6170_; lean_object* v___x_6171_; lean_object* v___x_6172_; lean_object* v___x_6173_; lean_object* v___x_6174_; lean_object* v___x_6175_; lean_object* v___x_6176_; lean_object* v___x_6177_; lean_object* v___x_6178_; lean_object* v___x_6179_; lean_object* v___x_6180_; lean_object* v___x_6181_; lean_object* v___x_6182_; lean_object* v___x_6183_; lean_object* v___x_6184_; lean_object* v___x_6185_; lean_object* v___x_6186_; lean_object* v___x_6187_; lean_object* v___x_6188_; lean_object* v___x_6189_; lean_object* v___x_6190_; lean_object* v___x_6191_; lean_object* v___x_6192_; lean_object* v___x_6193_; lean_object* v___x_6194_; 
v_name_6130_ = lean_ctor_get(v_x_6129_, 0);
lean_inc_ref(v_name_6130_);
v_module_6131_ = lean_ctor_get(v_x_6129_, 1);
lean_inc_ref(v_module_6131_);
v_path_6132_ = lean_ctor_get(v_x_6129_, 2);
lean_inc_ref(v_path_6132_);
v_construct_6133_ = lean_ctor_get_uint8(v_x_6129_, sizeof(void*)*4);
v_arity_6134_ = lean_ctor_get(v_x_6129_, 3);
lean_inc(v_arity_6134_);
lean_dec_ref(v_x_6129_);
v___x_6135_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__5));
v___x_6136_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__6));
v___x_6137_ = lean_obj_once(&l_Lasm_JS_instReprBinding_repr___redArg___closed__7, &l_Lasm_JS_instReprBinding_repr___redArg___closed__7_once, _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__7);
v___x_6138_ = l_String_quote(v_name_6130_);
v___x_6139_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_6139_, 0, v___x_6138_);
v___x_6140_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6140_, 0, v___x_6137_);
lean_ctor_set(v___x_6140_, 1, v___x_6139_);
v___x_6141_ = 0;
v___x_6142_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6142_, 0, v___x_6140_);
lean_ctor_set_uint8(v___x_6142_, sizeof(void*)*1, v___x_6141_);
v___x_6143_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6143_, 0, v___x_6136_);
lean_ctor_set(v___x_6143_, 1, v___x_6142_);
v___x_6144_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__9));
v___x_6145_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6145_, 0, v___x_6143_);
lean_ctor_set(v___x_6145_, 1, v___x_6144_);
v___x_6146_ = lean_box(1);
v___x_6147_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6147_, 0, v___x_6145_);
lean_ctor_set(v___x_6147_, 1, v___x_6146_);
v___x_6148_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__11));
v___x_6149_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6149_, 0, v___x_6147_);
lean_ctor_set(v___x_6149_, 1, v___x_6148_);
v___x_6150_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6150_, 0, v___x_6149_);
lean_ctor_set(v___x_6150_, 1, v___x_6135_);
v___x_6151_ = lean_obj_once(&l_Lasm_JS_instReprBinding_repr___redArg___closed__12, &l_Lasm_JS_instReprBinding_repr___redArg___closed__12_once, _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__12);
v___x_6152_ = l_String_quote(v_module_6131_);
v___x_6153_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_6153_, 0, v___x_6152_);
v___x_6154_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6154_, 0, v___x_6151_);
lean_ctor_set(v___x_6154_, 1, v___x_6153_);
v___x_6155_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6155_, 0, v___x_6154_);
lean_ctor_set_uint8(v___x_6155_, sizeof(void*)*1, v___x_6141_);
v___x_6156_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6156_, 0, v___x_6150_);
lean_ctor_set(v___x_6156_, 1, v___x_6155_);
v___x_6157_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6157_, 0, v___x_6156_);
lean_ctor_set(v___x_6157_, 1, v___x_6144_);
v___x_6158_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6158_, 0, v___x_6157_);
lean_ctor_set(v___x_6158_, 1, v___x_6146_);
v___x_6159_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__14));
v___x_6160_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6160_, 0, v___x_6158_);
lean_ctor_set(v___x_6160_, 1, v___x_6159_);
v___x_6161_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6161_, 0, v___x_6160_);
lean_ctor_set(v___x_6161_, 1, v___x_6135_);
v___x_6162_ = l_String_quote(v_path_6132_);
v___x_6163_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_6163_, 0, v___x_6162_);
v___x_6164_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6164_, 0, v___x_6137_);
lean_ctor_set(v___x_6164_, 1, v___x_6163_);
v___x_6165_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6165_, 0, v___x_6164_);
lean_ctor_set_uint8(v___x_6165_, sizeof(void*)*1, v___x_6141_);
v___x_6166_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6166_, 0, v___x_6161_);
lean_ctor_set(v___x_6166_, 1, v___x_6165_);
v___x_6167_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6167_, 0, v___x_6166_);
lean_ctor_set(v___x_6167_, 1, v___x_6144_);
v___x_6168_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6168_, 0, v___x_6167_);
lean_ctor_set(v___x_6168_, 1, v___x_6146_);
v___x_6169_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__16));
v___x_6170_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6170_, 0, v___x_6168_);
lean_ctor_set(v___x_6170_, 1, v___x_6169_);
v___x_6171_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6171_, 0, v___x_6170_);
lean_ctor_set(v___x_6171_, 1, v___x_6135_);
v___x_6172_ = lean_obj_once(&l_Lasm_JS_instReprBinding_repr___redArg___closed__17, &l_Lasm_JS_instReprBinding_repr___redArg___closed__17_once, _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__17);
v___x_6173_ = l_Bool_repr___redArg(v_construct_6133_);
v___x_6174_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6174_, 0, v___x_6172_);
lean_ctor_set(v___x_6174_, 1, v___x_6173_);
v___x_6175_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6175_, 0, v___x_6174_);
lean_ctor_set_uint8(v___x_6175_, sizeof(void*)*1, v___x_6141_);
v___x_6176_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6176_, 0, v___x_6171_);
lean_ctor_set(v___x_6176_, 1, v___x_6175_);
v___x_6177_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6177_, 0, v___x_6176_);
lean_ctor_set(v___x_6177_, 1, v___x_6144_);
v___x_6178_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6178_, 0, v___x_6177_);
lean_ctor_set(v___x_6178_, 1, v___x_6146_);
v___x_6179_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__19));
v___x_6180_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6180_, 0, v___x_6178_);
lean_ctor_set(v___x_6180_, 1, v___x_6179_);
v___x_6181_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6181_, 0, v___x_6180_);
lean_ctor_set(v___x_6181_, 1, v___x_6135_);
v___x_6182_ = lean_obj_once(&l_Lasm_JS_instReprBinding_repr___redArg___closed__20, &l_Lasm_JS_instReprBinding_repr___redArg___closed__20_once, _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__20);
v___x_6183_ = l_Nat_reprFast(v_arity_6134_);
v___x_6184_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_6184_, 0, v___x_6183_);
v___x_6185_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6185_, 0, v___x_6182_);
lean_ctor_set(v___x_6185_, 1, v___x_6184_);
v___x_6186_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6186_, 0, v___x_6185_);
lean_ctor_set_uint8(v___x_6186_, sizeof(void*)*1, v___x_6141_);
v___x_6187_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6187_, 0, v___x_6181_);
lean_ctor_set(v___x_6187_, 1, v___x_6186_);
v___x_6188_ = lean_obj_once(&l_Lasm_JS_instReprBinding_repr___redArg___closed__23, &l_Lasm_JS_instReprBinding_repr___redArg___closed__23_once, _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__23);
v___x_6189_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__24));
v___x_6190_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6190_, 0, v___x_6189_);
lean_ctor_set(v___x_6190_, 1, v___x_6187_);
v___x_6191_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__25));
v___x_6192_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6192_, 0, v___x_6190_);
lean_ctor_set(v___x_6192_, 1, v___x_6191_);
v___x_6193_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6193_, 0, v___x_6188_);
lean_ctor_set(v___x_6193_, 1, v___x_6192_);
v___x_6194_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6194_, 0, v___x_6193_);
lean_ctor_set_uint8(v___x_6194_, sizeof(void*)*1, v___x_6141_);
return v___x_6194_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instReprBinding_repr(lean_object* v_x_6195_, lean_object* v_prec_6196_){
_start:
{
lean_object* v___x_6197_; 
v___x_6197_ = l_Lasm_JS_instReprBinding_repr___redArg(v_x_6195_);
return v___x_6197_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instReprBinding_repr___boxed(lean_object* v_x_6198_, lean_object* v_prec_6199_){
_start:
{
lean_object* v_res_6200_; 
v_res_6200_ = l_Lasm_JS_instReprBinding_repr(v_x_6198_, v_prec_6199_);
lean_dec(v_prec_6199_);
return v_res_6200_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object* v_b_6204_){
_start:
{
lean_object* v_name_6205_; lean_object* v_module_6206_; lean_object* v_path_6207_; lean_object* v___x_6208_; lean_object* v___x_6209_; lean_object* v___x_6210_; lean_object* v___x_6211_; lean_object* v___x_6212_; lean_object* v___y_6214_; lean_object* v___x_6218_; lean_object* v___x_6219_; uint8_t v___x_6220_; 
v_name_6205_ = lean_ctor_get(v_b_6204_, 0);
v_module_6206_ = lean_ctor_get(v_b_6204_, 1);
v_path_6207_ = lean_ctor_get(v_b_6204_, 2);
v___x_6208_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context___closed__0));
v___x_6209_ = lean_string_append(v___x_6208_, v_name_6205_);
v___x_6210_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__3));
v___x_6211_ = lean_string_append(v___x_6209_, v___x_6210_);
v___x_6212_ = lean_string_append(v___x_6211_, v_module_6206_);
v___x_6218_ = lean_string_utf8_byte_size(v_path_6207_);
v___x_6219_ = lean_unsigned_to_nat(0u);
v___x_6220_ = lean_nat_dec_eq(v___x_6218_, v___x_6219_);
if (v___x_6220_ == 0)
{
lean_object* v___x_6221_; lean_object* v___x_6222_; 
v___x_6221_ = ((lean_object*)(l_Lasm_JS_Wire_pushLength___closed__2));
v___x_6222_ = lean_string_append(v___x_6221_, v_path_6207_);
v___y_6214_ = v___x_6222_;
goto v___jp_6213_;
}
else
{
lean_object* v___x_6223_; 
v___x_6223_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___y_6214_ = v___x_6223_;
goto v___jp_6213_;
}
v___jp_6213_:
{
lean_object* v___x_6215_; lean_object* v___x_6216_; lean_object* v___x_6217_; 
v___x_6215_ = lean_string_append(v___x_6212_, v___y_6214_);
lean_dec_ref(v___y_6214_);
v___x_6216_ = ((lean_object*)(l_Lasm_JS_Wire_pushLength___closed__5));
v___x_6217_ = lean_string_append(v___x_6215_, v___x_6216_);
return v___x_6217_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context___boxed(lean_object* v_b_6224_){
_start:
{
lean_object* v_res_6225_; 
v_res_6225_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_6224_);
lean_dec_ref(v_b_6224_);
return v_res_6225_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object* v_b_6226_, lean_object* v_args_6227_){
_start:
{
lean_object* v_name_6228_; lean_object* v_module_6229_; lean_object* v_path_6230_; lean_object* v___x_6231_; lean_object* v___x_6232_; lean_object* v___x_6233_; lean_object* v___x_6234_; lean_object* v___x_6235_; lean_object* v___x_6236_; lean_object* v___x_6237_; lean_object* v___x_6238_; lean_object* v___x_6239_; lean_object* v___x_6240_; lean_object* v___x_6241_; 
v_name_6228_ = lean_ctor_get(v_b_6226_, 0);
v_module_6229_ = lean_ctor_get(v_b_6226_, 1);
v_path_6230_ = lean_ctor_get(v_b_6226_, 2);
lean_inc_ref(v_name_6228_);
v___x_6231_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6231_, 0, v_name_6228_);
lean_inc_ref(v_module_6229_);
v___x_6232_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6232_, 0, v_module_6229_);
lean_inc_ref(v_path_6230_);
v___x_6233_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6233_, 0, v_path_6230_);
v___x_6234_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_6234_, 0, v_args_6227_);
v___x_6235_ = lean_unsigned_to_nat(4u);
v___x_6236_ = lean_mk_empty_array_with_capacity(v___x_6235_);
v___x_6237_ = lean_array_push(v___x_6236_, v___x_6231_);
v___x_6238_ = lean_array_push(v___x_6237_, v___x_6232_);
v___x_6239_ = lean_array_push(v___x_6238_, v___x_6233_);
v___x_6240_ = lean_array_push(v___x_6239_, v___x_6234_);
v___x_6241_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_6241_, 0, v___x_6240_);
return v___x_6241_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload___boxed(lean_object* v_b_6242_, lean_object* v_args_6243_){
_start:
{
lean_object* v_res_6244_; 
v_res_6244_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_6242_, v_args_6243_);
lean_dec_ref(v_b_6242_);
return v_res_6244_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___redArg(lean_object* v_inst_6245_, lean_object* v_b_6246_, lean_object* v_args_6247_, uint8_t v_await_6248_){
_start:
{
uint64_t v___y_6251_; uint64_t v___y_6252_; uint8_t v_mode_6287_; uint64_t v___x_6288_; uint64_t v___y_6290_; 
v_mode_6287_ = lean_ctor_get_uint8(v_inst_6245_, sizeof(void*)*2);
v___x_6288_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v_mode_6287_);
if (v_await_6248_ == 0)
{
uint64_t v___x_6295_; 
v___x_6295_ = 0ULL;
v___y_6290_ = v___x_6295_;
goto v___jp_6289_;
}
else
{
uint64_t v___x_6296_; 
v___x_6296_ = 2ULL;
v___y_6290_ = v___x_6296_;
goto v___jp_6289_;
}
v___jp_6250_:
{
uint64_t v_flags_6253_; uint32_t v___x_6254_; lean_object* v___x_6255_; uint32_t v___x_6256_; lean_object* v___x_6257_; 
v_flags_6253_ = lean_uint64_lor(v___y_6251_, v___y_6252_);
v___x_6254_ = 214;
v___x_6255_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_6246_, v_args_6247_);
v___x_6256_ = 0;
v___x_6257_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_6254_, v_flags_6253_, v___x_6255_, v___x_6256_);
if (lean_obj_tag(v___x_6257_) == 0)
{
lean_object* v_a_6258_; lean_object* v___x_6259_; 
v_a_6258_ = lean_ctor_get(v___x_6257_, 0);
lean_inc(v_a_6258_);
lean_dec_ref_known(v___x_6257_, 1);
v___x_6259_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_6258_);
lean_dec(v_a_6258_);
if (lean_obj_tag(v___x_6259_) == 0)
{
lean_object* v_a_6260_; lean_object* v___x_6261_; lean_object* v___x_6262_; 
v_a_6260_ = lean_ctor_get(v___x_6259_, 0);
lean_inc(v_a_6260_);
lean_dec_ref_known(v___x_6259_, 1);
v___x_6261_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_6246_);
v___x_6262_ = l_Lasm_JS_decodeAs___redArg(v_inst_6245_, v___x_6261_, v_a_6260_);
lean_dec_ref(v___x_6261_);
return v___x_6262_;
}
else
{
lean_object* v_a_6263_; lean_object* v___x_6265_; uint8_t v_isShared_6266_; uint8_t v_isSharedCheck_6270_; 
lean_dec_ref(v_inst_6245_);
v_a_6263_ = lean_ctor_get(v___x_6259_, 0);
v_isSharedCheck_6270_ = !lean_is_exclusive(v___x_6259_);
if (v_isSharedCheck_6270_ == 0)
{
v___x_6265_ = v___x_6259_;
v_isShared_6266_ = v_isSharedCheck_6270_;
goto v_resetjp_6264_;
}
else
{
lean_inc(v_a_6263_);
lean_dec(v___x_6259_);
v___x_6265_ = lean_box(0);
v_isShared_6266_ = v_isSharedCheck_6270_;
goto v_resetjp_6264_;
}
v_resetjp_6264_:
{
lean_object* v___x_6268_; 
if (v_isShared_6266_ == 0)
{
v___x_6268_ = v___x_6265_;
goto v_reusejp_6267_;
}
else
{
lean_object* v_reuseFailAlloc_6269_; 
v_reuseFailAlloc_6269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6269_, 0, v_a_6263_);
v___x_6268_ = v_reuseFailAlloc_6269_;
goto v_reusejp_6267_;
}
v_reusejp_6267_:
{
return v___x_6268_;
}
}
}
}
else
{
lean_object* v_a_6271_; lean_object* v___x_6273_; uint8_t v_isShared_6274_; uint8_t v_isSharedCheck_6286_; 
lean_dec_ref(v_inst_6245_);
v_a_6271_ = lean_ctor_get(v___x_6257_, 0);
v_isSharedCheck_6286_ = !lean_is_exclusive(v___x_6257_);
if (v_isSharedCheck_6286_ == 0)
{
v___x_6273_ = v___x_6257_;
v_isShared_6274_ = v_isSharedCheck_6286_;
goto v_resetjp_6272_;
}
else
{
lean_inc(v_a_6271_);
lean_dec(v___x_6257_);
v___x_6273_ = lean_box(0);
v_isShared_6274_ = v_isSharedCheck_6286_;
goto v_resetjp_6272_;
}
v_resetjp_6272_:
{
lean_object* v___x_6275_; lean_object* v___x_6276_; lean_object* v___x_6277_; lean_object* v___x_6278_; lean_object* v___x_6279_; lean_object* v___x_6280_; lean_object* v___x_6281_; lean_object* v___x_6282_; lean_object* v___x_6284_; 
v___x_6275_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__0));
v___x_6276_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_6246_);
v___x_6277_ = lean_string_append(v___x_6275_, v___x_6276_);
lean_dec_ref(v___x_6276_);
v___x_6278_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__1));
v___x_6279_ = lean_string_append(v___x_6277_, v___x_6278_);
v___x_6280_ = lean_io_error_to_string(v_a_6271_);
v___x_6281_ = lean_string_append(v___x_6279_, v___x_6280_);
lean_dec_ref(v___x_6280_);
v___x_6282_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_6282_, 0, v___x_6281_);
if (v_isShared_6274_ == 0)
{
lean_ctor_set(v___x_6273_, 0, v___x_6282_);
v___x_6284_ = v___x_6273_;
goto v_reusejp_6283_;
}
else
{
lean_object* v_reuseFailAlloc_6285_; 
v_reuseFailAlloc_6285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6285_, 0, v___x_6282_);
v___x_6284_ = v_reuseFailAlloc_6285_;
goto v_reusejp_6283_;
}
v_reusejp_6283_:
{
return v___x_6284_;
}
}
}
}
v___jp_6289_:
{
uint8_t v_construct_6291_; uint64_t v___x_6292_; 
v_construct_6291_ = lean_ctor_get_uint8(v_b_6246_, sizeof(void*)*4);
v___x_6292_ = lean_uint64_lor(v___x_6288_, v___y_6290_);
if (v_construct_6291_ == 0)
{
uint64_t v___x_6293_; 
v___x_6293_ = 0ULL;
v___y_6251_ = v___x_6292_;
v___y_6252_ = v___x_6293_;
goto v___jp_6250_;
}
else
{
uint64_t v___x_6294_; 
v___x_6294_ = 4ULL;
v___y_6251_ = v___x_6292_;
v___y_6252_ = v___x_6294_;
goto v___jp_6250_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___redArg___boxed(lean_object* v_inst_6297_, lean_object* v_b_6298_, lean_object* v_args_6299_, lean_object* v_await_6300_, lean_object* v_a_6301_){
_start:
{
uint8_t v_await_boxed_6302_; lean_object* v_res_6303_; 
v_await_boxed_6302_ = lean_unbox(v_await_6300_);
v_res_6303_ = l_Lasm_JS_Binding_invoke___redArg(v_inst_6297_, v_b_6298_, v_args_6299_, v_await_boxed_6302_);
lean_dec_ref(v_b_6298_);
return v_res_6303_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke(lean_object* v_00_u03b1_6304_, lean_object* v_inst_6305_, lean_object* v_b_6306_, lean_object* v_args_6307_, uint8_t v_await_6308_){
_start:
{
lean_object* v___x_6310_; 
v___x_6310_ = l_Lasm_JS_Binding_invoke___redArg(v_inst_6305_, v_b_6306_, v_args_6307_, v_await_6308_);
return v___x_6310_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___boxed(lean_object* v_00_u03b1_6311_, lean_object* v_inst_6312_, lean_object* v_b_6313_, lean_object* v_args_6314_, lean_object* v_await_6315_, lean_object* v_a_6316_){
_start:
{
uint8_t v_await_boxed_6317_; lean_object* v_res_6318_; 
v_await_boxed_6317_ = lean_unbox(v_await_6315_);
v_res_6318_ = l_Lasm_JS_Binding_invoke(v_00_u03b1_6311_, v_inst_6312_, v_b_6313_, v_args_6314_, v_await_boxed_6317_);
lean_dec_ref(v_b_6313_);
return v_res_6318_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___redArg(lean_object* v_inst_6319_, lean_object* v_b_6320_, lean_object* v_args_6321_){
_start:
{
uint8_t v_mode_6323_; uint8_t v_construct_6324_; lean_object* v___x_6325_; uint32_t v___x_6326_; uint64_t v___x_6327_; uint64_t v___y_6329_; 
v_mode_6323_ = lean_ctor_get_uint8(v_inst_6319_, sizeof(void*)*2);
v_construct_6324_ = lean_ctor_get_uint8(v_b_6320_, sizeof(void*)*4);
v___x_6325_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_6320_);
v___x_6326_ = 214;
v___x_6327_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v_mode_6323_);
if (v_construct_6324_ == 0)
{
uint64_t v___x_6337_; 
v___x_6337_ = 0ULL;
v___y_6329_ = v___x_6337_;
goto v___jp_6328_;
}
else
{
uint64_t v___x_6338_; 
v___x_6338_ = 4ULL;
v___y_6329_ = v___x_6338_;
goto v___jp_6328_;
}
v___jp_6328_:
{
uint64_t v___x_6330_; lean_object* v___x_6331_; lean_object* v___x_6332_; lean_object* v___x_6333_; lean_object* v___x_6334_; lean_object* v___x_6335_; lean_object* v___x_6336_; 
v___x_6330_ = lean_uint64_lor(v___x_6327_, v___y_6329_);
v___x_6331_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_6320_, v_args_6321_);
v___x_6332_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__0));
v___x_6333_ = lean_string_append(v___x_6332_, v___x_6325_);
v___x_6334_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__1));
v___x_6335_ = lean_string_append(v___x_6333_, v___x_6334_);
v___x_6336_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg(v_inst_6319_, v___x_6325_, v___x_6326_, v___x_6330_, v___x_6331_, v___x_6335_);
return v___x_6336_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___redArg___boxed(lean_object* v_inst_6339_, lean_object* v_b_6340_, lean_object* v_args_6341_, lean_object* v_a_6342_){
_start:
{
lean_object* v_res_6343_; 
v_res_6343_ = l_Lasm_JS_Binding_invokeAsync___redArg(v_inst_6339_, v_b_6340_, v_args_6341_);
lean_dec_ref(v_b_6340_);
return v_res_6343_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync(lean_object* v_00_u03b1_6344_, lean_object* v_inst_6345_, lean_object* v_b_6346_, lean_object* v_args_6347_){
_start:
{
lean_object* v___x_6349_; 
v___x_6349_ = l_Lasm_JS_Binding_invokeAsync___redArg(v_inst_6345_, v_b_6346_, v_args_6347_);
return v___x_6349_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___boxed(lean_object* v_00_u03b1_6350_, lean_object* v_inst_6351_, lean_object* v_b_6352_, lean_object* v_args_6353_, lean_object* v_a_6354_){
_start:
{
lean_object* v_res_6355_; 
v_res_6355_ = l_Lasm_JS_Binding_invokeAsync(v_00_u03b1_6350_, v_inst_6351_, v_b_6352_, v_args_6353_);
lean_dec_ref(v_b_6352_);
return v_res_6355_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOTaskExceptErrorOfFromJS___redArg___lam__0(lean_object* v___x_6356_, lean_object* v_inst_6357_, lean_object* v_b_6358_, lean_object* v_args_6359_){
_start:
{
uint8_t v___x_6361_; lean_object* v___x_6362_; 
v___x_6361_ = 0;
v___x_6362_ = l_Lasm_JS_Binding_invoke___redArg(v___x_6356_, v_b_6358_, v_args_6359_, v___x_6361_);
if (lean_obj_tag(v___x_6362_) == 0)
{
lean_object* v_a_6363_; lean_object* v___x_6364_; 
v_a_6363_ = lean_ctor_get(v___x_6362_, 0);
lean_inc(v_a_6363_);
lean_dec_ref_known(v___x_6362_, 1);
v___x_6364_ = l_Lasm_JS_Value_toTask___redArg(v_a_6363_, v_inst_6357_);
return v___x_6364_;
}
else
{
lean_object* v_a_6365_; lean_object* v___x_6367_; uint8_t v_isShared_6368_; uint8_t v_isSharedCheck_6372_; 
lean_dec_ref(v_inst_6357_);
v_a_6365_ = lean_ctor_get(v___x_6362_, 0);
v_isSharedCheck_6372_ = !lean_is_exclusive(v___x_6362_);
if (v_isSharedCheck_6372_ == 0)
{
v___x_6367_ = v___x_6362_;
v_isShared_6368_ = v_isSharedCheck_6372_;
goto v_resetjp_6366_;
}
else
{
lean_inc(v_a_6365_);
lean_dec(v___x_6362_);
v___x_6367_ = lean_box(0);
v_isShared_6368_ = v_isSharedCheck_6372_;
goto v_resetjp_6366_;
}
v_resetjp_6366_:
{
lean_object* v___x_6370_; 
if (v_isShared_6368_ == 0)
{
v___x_6370_ = v___x_6367_;
goto v_reusejp_6369_;
}
else
{
lean_object* v_reuseFailAlloc_6371_; 
v_reuseFailAlloc_6371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6371_, 0, v_a_6365_);
v___x_6370_ = v_reuseFailAlloc_6371_;
goto v_reusejp_6369_;
}
v_reusejp_6369_:
{
return v___x_6370_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOTaskExceptErrorOfFromJS___redArg___lam__0___boxed(lean_object* v___x_6373_, lean_object* v_inst_6374_, lean_object* v_b_6375_, lean_object* v_args_6376_, lean_object* v___y_6377_){
_start:
{
lean_object* v_res_6378_; 
v_res_6378_ = l_Lasm_JS_instBindableIOTaskExceptErrorOfFromJS___redArg___lam__0(v___x_6373_, v_inst_6374_, v_b_6375_, v_args_6376_);
lean_dec_ref(v_b_6375_);
return v_res_6378_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOTaskExceptErrorOfFromJS___redArg(lean_object* v_inst_6379_){
_start:
{
lean_object* v___x_6380_; lean_object* v___f_6381_; lean_object* v___x_6382_; lean_object* v___x_6383_; 
v___x_6380_ = ((lean_object*)(l_Lasm_JS_instFromJSValue));
v___f_6381_ = lean_alloc_closure((void*)(l_Lasm_JS_instBindableIOTaskExceptErrorOfFromJS___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_6381_, 0, v___x_6380_);
lean_closure_set(v___f_6381_, 1, v_inst_6379_);
v___x_6382_ = lean_unsigned_to_nat(0u);
v___x_6383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6383_, 0, v___x_6382_);
lean_ctor_set(v___x_6383_, 1, v___f_6381_);
return v___x_6383_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOTaskExceptErrorOfFromJS(lean_object* v_00_u03b2_6384_, lean_object* v_inst_6385_){
_start:
{
lean_object* v___x_6386_; 
v___x_6386_ = l_Lasm_JS_instBindableIOTaskExceptErrorOfFromJS___redArg(v_inst_6385_);
return v___x_6386_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOOfFromJS___redArg___lam__0(lean_object* v_inst_6387_, lean_object* v_b_6388_, lean_object* v_args_6389_){
_start:
{
uint8_t v___x_6391_; lean_object* v___x_6392_; 
v___x_6391_ = 1;
v___x_6392_ = l_Lasm_JS_Binding_invoke___redArg(v_inst_6387_, v_b_6388_, v_args_6389_, v___x_6391_);
return v___x_6392_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOOfFromJS___redArg___lam__0___boxed(lean_object* v_inst_6393_, lean_object* v_b_6394_, lean_object* v_args_6395_, lean_object* v___y_6396_){
_start:
{
lean_object* v_res_6397_; 
v_res_6397_ = l_Lasm_JS_instBindableIOOfFromJS___redArg___lam__0(v_inst_6393_, v_b_6394_, v_args_6395_);
lean_dec_ref(v_b_6394_);
return v_res_6397_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOOfFromJS___redArg(lean_object* v_inst_6398_){
_start:
{
lean_object* v___f_6399_; lean_object* v___x_6400_; lean_object* v___x_6401_; 
v___f_6399_ = lean_alloc_closure((void*)(l_Lasm_JS_instBindableIOOfFromJS___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_6399_, 0, v_inst_6398_);
v___x_6400_ = lean_unsigned_to_nat(0u);
v___x_6401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6401_, 0, v___x_6400_);
lean_ctor_set(v___x_6401_, 1, v___f_6399_);
return v___x_6401_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOOfFromJS(lean_object* v_00_u03b2_6402_, lean_object* v_inst_6403_){
_start:
{
lean_object* v___x_6404_; 
v___x_6404_ = l_Lasm_JS_instBindableIOOfFromJS___redArg(v_inst_6403_);
return v___x_6404_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableAsyncOfFromJS___redArg___lam__0(lean_object* v_inst_6405_, lean_object* v_b_6406_, lean_object* v_args_6407_){
_start:
{
lean_object* v___x_6409_; 
v___x_6409_ = l_Lasm_JS_Binding_invokeAsync___redArg(v_inst_6405_, v_b_6406_, v_args_6407_);
return v___x_6409_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableAsyncOfFromJS___redArg___lam__0___boxed(lean_object* v_inst_6410_, lean_object* v_b_6411_, lean_object* v_args_6412_, lean_object* v___y_6413_){
_start:
{
lean_object* v_res_6414_; 
v_res_6414_ = l_Lasm_JS_instBindableAsyncOfFromJS___redArg___lam__0(v_inst_6410_, v_b_6411_, v_args_6412_);
lean_dec_ref(v_b_6411_);
return v_res_6414_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableAsyncOfFromJS___redArg(lean_object* v_inst_6415_){
_start:
{
lean_object* v___f_6416_; lean_object* v___x_6417_; lean_object* v___x_6418_; 
v___f_6416_ = lean_alloc_closure((void*)(l_Lasm_JS_instBindableAsyncOfFromJS___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_6416_, 0, v_inst_6415_);
v___x_6417_ = lean_unsigned_to_nat(0u);
v___x_6418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6418_, 0, v___x_6417_);
lean_ctor_set(v___x_6418_, 1, v___f_6416_);
return v___x_6418_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableAsyncOfFromJS(lean_object* v_00_u03b2_6419_, lean_object* v_inst_6420_){
_start:
{
lean_object* v___x_6421_; 
v___x_6421_ = l_Lasm_JS_instBindableAsyncOfFromJS___redArg(v_inst_6420_);
return v___x_6421_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableForallOfToJS___redArg___lam__0(lean_object* v_inst_6422_, lean_object* v_bind_6423_, lean_object* v_b_6424_, lean_object* v_args_6425_, lean_object* v_a_6426_){
_start:
{
lean_object* v___x_6427_; lean_object* v___x_6428_; lean_object* v___x_6429_; 
v___x_6427_ = lean_apply_1(v_inst_6422_, v_a_6426_);
v___x_6428_ = lean_array_push(v_args_6425_, v___x_6427_);
v___x_6429_ = lean_apply_2(v_bind_6423_, v_b_6424_, v___x_6428_);
return v___x_6429_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableForallOfToJS___redArg(lean_object* v_inst_6430_, lean_object* v_inst_6431_){
_start:
{
lean_object* v_arity_6432_; lean_object* v_bind_6433_; lean_object* v___x_6435_; uint8_t v_isShared_6436_; uint8_t v_isSharedCheck_6443_; 
v_arity_6432_ = lean_ctor_get(v_inst_6431_, 0);
v_bind_6433_ = lean_ctor_get(v_inst_6431_, 1);
v_isSharedCheck_6443_ = !lean_is_exclusive(v_inst_6431_);
if (v_isSharedCheck_6443_ == 0)
{
v___x_6435_ = v_inst_6431_;
v_isShared_6436_ = v_isSharedCheck_6443_;
goto v_resetjp_6434_;
}
else
{
lean_inc(v_bind_6433_);
lean_inc(v_arity_6432_);
lean_dec(v_inst_6431_);
v___x_6435_ = lean_box(0);
v_isShared_6436_ = v_isSharedCheck_6443_;
goto v_resetjp_6434_;
}
v_resetjp_6434_:
{
lean_object* v___f_6437_; lean_object* v___x_6438_; lean_object* v___x_6439_; lean_object* v___x_6441_; 
v___f_6437_ = lean_alloc_closure((void*)(l_Lasm_JS_instBindableForallOfToJS___redArg___lam__0), 5, 2);
lean_closure_set(v___f_6437_, 0, v_inst_6430_);
lean_closure_set(v___f_6437_, 1, v_bind_6433_);
v___x_6438_ = lean_unsigned_to_nat(1u);
v___x_6439_ = lean_nat_add(v_arity_6432_, v___x_6438_);
lean_dec(v_arity_6432_);
if (v_isShared_6436_ == 0)
{
lean_ctor_set(v___x_6435_, 1, v___f_6437_);
lean_ctor_set(v___x_6435_, 0, v___x_6439_);
v___x_6441_ = v___x_6435_;
goto v_reusejp_6440_;
}
else
{
lean_object* v_reuseFailAlloc_6442_; 
v_reuseFailAlloc_6442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6442_, 0, v___x_6439_);
lean_ctor_set(v_reuseFailAlloc_6442_, 1, v___f_6437_);
v___x_6441_ = v_reuseFailAlloc_6442_;
goto v_reusejp_6440_;
}
v_reusejp_6440_:
{
return v___x_6441_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableForallOfToJS(lean_object* v_00_u03b1_6444_, lean_object* v_00_u03b2_6445_, lean_object* v_inst_6446_, lean_object* v_inst_6447_){
_start:
{
lean_object* v___x_6448_; 
v___x_6448_ = l_Lasm_JS_instBindableForallOfToJS___redArg(v_inst_6446_, v_inst_6447_);
return v___x_6448_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_onEdge(){
_start:
{
uint8_t v___x_6450_; 
v___x_6450_ = l_Lasm_JS_isAvailable;
if (v___x_6450_ == 0)
{
lean_object* v___x_6451_; lean_object* v___x_6452_; 
v___x_6451_ = lean_box(v___x_6450_);
v___x_6452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6452_, 0, v___x_6451_);
return v___x_6452_;
}
else
{
uint8_t v___x_6453_; uint32_t v___x_6454_; uint32_t v___x_6455_; uint64_t v___x_6456_; lean_object* v___x_6457_; lean_object* v___x_6458_; 
v___x_6453_ = 0;
v___x_6454_ = 200;
v___x_6455_ = 0;
v___x_6456_ = 0ULL;
v___x_6457_ = l_ByteArray_empty;
v___x_6458_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_6454_, v___x_6455_, v___x_6456_, v___x_6457_);
if (lean_obj_tag(v___x_6458_) == 0)
{
lean_object* v_a_6459_; lean_object* v___x_6461_; uint8_t v_isShared_6462_; uint8_t v_isSharedCheck_6478_; 
v_a_6459_ = lean_ctor_get(v___x_6458_, 0);
v_isSharedCheck_6478_ = !lean_is_exclusive(v___x_6458_);
if (v_isSharedCheck_6478_ == 0)
{
v___x_6461_ = v___x_6458_;
v_isShared_6462_ = v_isSharedCheck_6478_;
goto v_resetjp_6460_;
}
else
{
lean_inc(v_a_6459_);
lean_dec(v___x_6458_);
v___x_6461_ = lean_box(0);
v_isShared_6462_ = v_isSharedCheck_6478_;
goto v_resetjp_6460_;
}
v_resetjp_6460_:
{
lean_object* v___x_6463_; lean_object* v___x_6464_; uint8_t v___x_6465_; 
v___x_6463_ = lean_unsigned_to_nat(8u);
v___x_6464_ = lean_byte_array_size(v_a_6459_);
v___x_6465_ = lean_nat_dec_le(v___x_6463_, v___x_6464_);
if (v___x_6465_ == 0)
{
lean_object* v___x_6466_; lean_object* v___x_6468_; 
lean_dec(v_a_6459_);
v___x_6466_ = lean_box(v___x_6453_);
if (v_isShared_6462_ == 0)
{
lean_ctor_set(v___x_6461_, 0, v___x_6466_);
v___x_6468_ = v___x_6461_;
goto v_reusejp_6467_;
}
else
{
lean_object* v_reuseFailAlloc_6469_; 
v_reuseFailAlloc_6469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6469_, 0, v___x_6466_);
v___x_6468_ = v_reuseFailAlloc_6469_;
goto v_reusejp_6467_;
}
v_reusejp_6467_:
{
return v___x_6468_;
}
}
else
{
lean_object* v___x_6470_; uint8_t v___x_6471_; uint8_t v___x_6472_; uint8_t v___x_6473_; lean_object* v___x_6474_; lean_object* v___x_6476_; 
v___x_6470_ = lean_unsigned_to_nat(4u);
v___x_6471_ = lean_byte_array_get(v_a_6459_, v___x_6470_);
lean_dec(v_a_6459_);
v___x_6472_ = 1;
v___x_6473_ = lean_uint8_dec_eq(v___x_6471_, v___x_6472_);
v___x_6474_ = lean_box(v___x_6473_);
if (v_isShared_6462_ == 0)
{
lean_ctor_set(v___x_6461_, 0, v___x_6474_);
v___x_6476_ = v___x_6461_;
goto v_reusejp_6475_;
}
else
{
lean_object* v_reuseFailAlloc_6477_; 
v_reuseFailAlloc_6477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6477_, 0, v___x_6474_);
v___x_6476_ = v_reuseFailAlloc_6477_;
goto v_reusejp_6475_;
}
v_reusejp_6475_:
{
return v___x_6476_;
}
}
}
}
else
{
lean_object* v_a_6479_; lean_object* v___x_6481_; uint8_t v_isShared_6482_; uint8_t v_isSharedCheck_6486_; 
v_a_6479_ = lean_ctor_get(v___x_6458_, 0);
v_isSharedCheck_6486_ = !lean_is_exclusive(v___x_6458_);
if (v_isSharedCheck_6486_ == 0)
{
v___x_6481_ = v___x_6458_;
v_isShared_6482_ = v_isSharedCheck_6486_;
goto v_resetjp_6480_;
}
else
{
lean_inc(v_a_6479_);
lean_dec(v___x_6458_);
v___x_6481_ = lean_box(0);
v_isShared_6482_ = v_isSharedCheck_6486_;
goto v_resetjp_6480_;
}
v_resetjp_6480_:
{
lean_object* v___x_6484_; 
if (v_isShared_6482_ == 0)
{
v___x_6484_ = v___x_6481_;
goto v_reusejp_6483_;
}
else
{
lean_object* v_reuseFailAlloc_6485_; 
v_reuseFailAlloc_6485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6485_, 0, v_a_6479_);
v___x_6484_ = v_reuseFailAlloc_6485_;
goto v_reusejp_6483_;
}
v_reusejp_6483_:
{
return v___x_6484_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_onEdge___boxed(lean_object* v_a_6487_){
_start:
{
lean_object* v_res_6488_; 
v_res_6488_ = l_Lasm_JS_onEdge();
return v_res_6488_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___at___00Lasm_JS_exportDefault_spec__0(lean_object* v_o_6489_, lean_object* v_key_6490_, lean_object* v_x_6491_){
_start:
{
lean_object* v___x_6493_; lean_object* v___x_6494_; lean_object* v___x_6495_; lean_object* v___x_6496_; lean_object* v___x_6497_; lean_object* v___x_6498_; lean_object* v___x_6499_; lean_object* v___x_6500_; lean_object* v___x_6501_; lean_object* v_payload_6502_; lean_object* v___x_6503_; lean_object* v___x_6504_; lean_object* v___x_6505_; lean_object* v___x_6506_; lean_object* v___x_6507_; lean_object* v___x_6508_; 
v___x_6493_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6493_, 0, v_key_6490_);
v___x_6494_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___x_6495_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6495_, 0, v_x_6491_);
lean_ctor_set(v___x_6495_, 1, v___x_6494_);
lean_inc(v_o_6489_);
v___x_6496_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6496_, 0, v_o_6489_);
lean_ctor_set(v___x_6496_, 1, v___x_6494_);
v___x_6497_ = lean_unsigned_to_nat(3u);
v___x_6498_ = lean_mk_empty_array_with_capacity(v___x_6497_);
lean_inc_ref(v___x_6493_);
v___x_6499_ = lean_array_push(v___x_6498_, v___x_6493_);
lean_inc_ref(v___x_6495_);
v___x_6500_ = lean_array_push(v___x_6499_, v___x_6495_);
v___x_6501_ = lean_array_push(v___x_6500_, v___x_6496_);
v_payload_6502_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_payload_6502_, 0, v___x_6501_);
v___x_6503_ = lean_unsigned_to_nat(2u);
v___x_6504_ = lean_mk_empty_array_with_capacity(v___x_6503_);
v___x_6505_ = lean_array_push(v___x_6504_, v___x_6493_);
v___x_6506_ = lean_array_push(v___x_6505_, v___x_6495_);
v___x_6507_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_6507_, 0, v___x_6506_);
v___x_6508_ = l_Lasm_JS_Wire_encodeIO(v___x_6507_);
if (lean_obj_tag(v___x_6508_) == 0)
{
lean_object* v_a_6509_; uint32_t v___x_6510_; uint32_t v___x_6511_; uint64_t v___x_6512_; lean_object* v___x_6513_; lean_object* v___x_6514_; 
v_a_6509_ = lean_ctor_get(v___x_6508_, 0);
lean_inc(v_a_6509_);
lean_dec_ref_known(v___x_6508_, 1);
v___x_6510_ = 204;
v___x_6511_ = lasm_js_value_handle(v_o_6489_);
lean_dec(v_o_6489_);
v___x_6512_ = 0ULL;
v___x_6513_ = lean_box(0);
v___x_6514_ = lasm_js_call(v___x_6510_, v___x_6511_, v___x_6512_, v_a_6509_, v_payload_6502_);
lean_dec_ref_known(v_payload_6502_, 1);
lean_dec(v_a_6509_);
if (lean_obj_tag(v___x_6514_) == 0)
{
lean_object* v___x_6516_; uint8_t v_isShared_6517_; uint8_t v_isSharedCheck_6521_; 
v_isSharedCheck_6521_ = !lean_is_exclusive(v___x_6514_);
if (v_isSharedCheck_6521_ == 0)
{
lean_object* v_unused_6522_; 
v_unused_6522_ = lean_ctor_get(v___x_6514_, 0);
lean_dec(v_unused_6522_);
v___x_6516_ = v___x_6514_;
v_isShared_6517_ = v_isSharedCheck_6521_;
goto v_resetjp_6515_;
}
else
{
lean_dec(v___x_6514_);
v___x_6516_ = lean_box(0);
v_isShared_6517_ = v_isSharedCheck_6521_;
goto v_resetjp_6515_;
}
v_resetjp_6515_:
{
lean_object* v___x_6519_; 
if (v_isShared_6517_ == 0)
{
lean_ctor_set(v___x_6516_, 0, v___x_6513_);
v___x_6519_ = v___x_6516_;
goto v_reusejp_6518_;
}
else
{
lean_object* v_reuseFailAlloc_6520_; 
v_reuseFailAlloc_6520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6520_, 0, v___x_6513_);
v___x_6519_ = v_reuseFailAlloc_6520_;
goto v_reusejp_6518_;
}
v_reusejp_6518_:
{
return v___x_6519_;
}
}
}
else
{
lean_object* v_a_6523_; lean_object* v___x_6525_; uint8_t v_isShared_6526_; uint8_t v_isSharedCheck_6530_; 
v_a_6523_ = lean_ctor_get(v___x_6514_, 0);
v_isSharedCheck_6530_ = !lean_is_exclusive(v___x_6514_);
if (v_isSharedCheck_6530_ == 0)
{
v___x_6525_ = v___x_6514_;
v_isShared_6526_ = v_isSharedCheck_6530_;
goto v_resetjp_6524_;
}
else
{
lean_inc(v_a_6523_);
lean_dec(v___x_6514_);
v___x_6525_ = lean_box(0);
v_isShared_6526_ = v_isSharedCheck_6530_;
goto v_resetjp_6524_;
}
v_resetjp_6524_:
{
lean_object* v___x_6528_; 
if (v_isShared_6526_ == 0)
{
v___x_6528_ = v___x_6525_;
goto v_reusejp_6527_;
}
else
{
lean_object* v_reuseFailAlloc_6529_; 
v_reuseFailAlloc_6529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6529_, 0, v_a_6523_);
v___x_6528_ = v_reuseFailAlloc_6529_;
goto v_reusejp_6527_;
}
v_reusejp_6527_:
{
return v___x_6528_;
}
}
}
}
else
{
lean_object* v_a_6531_; lean_object* v___x_6533_; uint8_t v_isShared_6534_; uint8_t v_isSharedCheck_6538_; 
lean_dec_ref_known(v_payload_6502_, 1);
lean_dec(v_o_6489_);
v_a_6531_ = lean_ctor_get(v___x_6508_, 0);
v_isSharedCheck_6538_ = !lean_is_exclusive(v___x_6508_);
if (v_isSharedCheck_6538_ == 0)
{
v___x_6533_ = v___x_6508_;
v_isShared_6534_ = v_isSharedCheck_6538_;
goto v_resetjp_6532_;
}
else
{
lean_inc(v_a_6531_);
lean_dec(v___x_6508_);
v___x_6533_ = lean_box(0);
v_isShared_6534_ = v_isSharedCheck_6538_;
goto v_resetjp_6532_;
}
v_resetjp_6532_:
{
lean_object* v___x_6536_; 
if (v_isShared_6534_ == 0)
{
v___x_6536_ = v___x_6533_;
goto v_reusejp_6535_;
}
else
{
lean_object* v_reuseFailAlloc_6537_; 
v_reuseFailAlloc_6537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6537_, 0, v_a_6531_);
v___x_6536_ = v_reuseFailAlloc_6537_;
goto v_reusejp_6535_;
}
v_reusejp_6535_:
{
return v___x_6536_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___at___00Lasm_JS_exportDefault_spec__0___boxed(lean_object* v_o_6539_, lean_object* v_key_6540_, lean_object* v_x_6541_, lean_object* v_a_6542_){
_start:
{
lean_object* v_res_6543_; 
v_res_6543_ = l_Lasm_JS_Value_set___at___00Lasm_JS_exportDefault_spec__0(v_o_6539_, v_key_6540_, v_x_6541_);
return v_res_6543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_exportDefault(lean_object* v_v_6545_){
_start:
{
lean_object* v___x_6547_; 
v___x_6547_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_6547_) == 0)
{
lean_object* v_a_6548_; lean_object* v___x_6549_; lean_object* v___x_6550_; 
v_a_6548_ = lean_ctor_get(v___x_6547_, 0);
lean_inc(v_a_6548_);
lean_dec_ref_known(v___x_6547_, 1);
v___x_6549_ = ((lean_object*)(l_Lasm_JS_exportDefault___closed__0));
v___x_6550_ = l_Lasm_JS_Value_set___at___00Lasm_JS_exportDefault_spec__0(v_a_6548_, v___x_6549_, v_v_6545_);
return v___x_6550_;
}
else
{
lean_object* v_a_6551_; lean_object* v___x_6553_; uint8_t v_isShared_6554_; uint8_t v_isSharedCheck_6558_; 
lean_dec(v_v_6545_);
v_a_6551_ = lean_ctor_get(v___x_6547_, 0);
v_isSharedCheck_6558_ = !lean_is_exclusive(v___x_6547_);
if (v_isSharedCheck_6558_ == 0)
{
v___x_6553_ = v___x_6547_;
v_isShared_6554_ = v_isSharedCheck_6558_;
goto v_resetjp_6552_;
}
else
{
lean_inc(v_a_6551_);
lean_dec(v___x_6547_);
v___x_6553_ = lean_box(0);
v_isShared_6554_ = v_isSharedCheck_6558_;
goto v_resetjp_6552_;
}
v_resetjp_6552_:
{
lean_object* v___x_6556_; 
if (v_isShared_6554_ == 0)
{
v___x_6556_ = v___x_6553_;
goto v_reusejp_6555_;
}
else
{
lean_object* v_reuseFailAlloc_6557_; 
v_reuseFailAlloc_6557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6557_, 0, v_a_6551_);
v___x_6556_ = v_reuseFailAlloc_6557_;
goto v_reusejp_6555_;
}
v_reusejp_6555_:
{
return v___x_6556_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_exportDefault___boxed(lean_object* v_v_6559_, lean_object* v_a_6560_){
_start:
{
lean_object* v_res_6561_; 
v_res_6561_ = l_Lasm_JS_exportDefault(v_v_6559_);
return v_res_6561_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_waitForever(){
_start:
{
lean_object* v___x_6563_; 
v___x_6563_ = l_Lasm_JS_onEdge();
if (lean_obj_tag(v___x_6563_) == 0)
{
lean_object* v_a_6564_; lean_object* v___x_6566_; uint8_t v_isShared_6567_; uint8_t v_isSharedCheck_6602_; 
v_a_6564_ = lean_ctor_get(v___x_6563_, 0);
v_isSharedCheck_6602_ = !lean_is_exclusive(v___x_6563_);
if (v_isSharedCheck_6602_ == 0)
{
v___x_6566_ = v___x_6563_;
v_isShared_6567_ = v_isSharedCheck_6602_;
goto v_resetjp_6565_;
}
else
{
lean_inc(v_a_6564_);
lean_dec(v___x_6563_);
v___x_6566_ = lean_box(0);
v_isShared_6567_ = v_isSharedCheck_6602_;
goto v_resetjp_6565_;
}
v_resetjp_6565_:
{
uint8_t v___x_6568_; 
v___x_6568_ = lean_unbox(v_a_6564_);
lean_dec(v_a_6564_);
if (v___x_6568_ == 0)
{
lean_object* v___x_6569_; 
lean_del_object(v___x_6566_);
v___x_6569_ = lasm_js_park();
if (lean_obj_tag(v___x_6569_) == 0)
{
lean_object* v_a_6570_; lean_object* v___x_6572_; uint8_t v_isShared_6573_; uint8_t v_isSharedCheck_6589_; 
v_a_6570_ = lean_ctor_get(v___x_6569_, 0);
v_isSharedCheck_6589_ = !lean_is_exclusive(v___x_6569_);
if (v_isSharedCheck_6589_ == 0)
{
v___x_6572_ = v___x_6569_;
v_isShared_6573_ = v_isSharedCheck_6589_;
goto v_resetjp_6571_;
}
else
{
lean_inc(v_a_6570_);
lean_dec(v___x_6569_);
v___x_6572_ = lean_box(0);
v_isShared_6573_ = v_isSharedCheck_6589_;
goto v_resetjp_6571_;
}
v_resetjp_6571_:
{
uint8_t v___x_6574_; 
v___x_6574_ = lean_unbox(v_a_6570_);
lean_dec(v_a_6570_);
if (v___x_6574_ == 0)
{
lean_object* v___x_6575_; lean_object* v___x_6576_; lean_object* v___x_6577_; lean_object* v___x_6578_; lean_object* v___x_6579_; lean_object* v___x_6580_; lean_object* v___x_6581_; lean_object* v___x_6583_; 
v___x_6575_ = lean_io_promise_new();
lean_inc(v___x_6575_);
v___x_6576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6576_, 0, v___x_6575_);
v___x_6577_ = lean_st_mk_ref(v___x_6576_);
v___x_6578_ = lean_io_promise_result_opt(v___x_6575_);
lean_dec(v___x_6575_);
v___x_6579_ = lean_io_wait(v___x_6578_);
lean_dec(v___x_6579_);
v___x_6580_ = lean_box(0);
v___x_6581_ = lean_st_ref_get(v___x_6577_);
lean_dec(v___x_6577_);
lean_dec(v___x_6581_);
if (v_isShared_6573_ == 0)
{
lean_ctor_set(v___x_6572_, 0, v___x_6580_);
v___x_6583_ = v___x_6572_;
goto v_reusejp_6582_;
}
else
{
lean_object* v_reuseFailAlloc_6584_; 
v_reuseFailAlloc_6584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6584_, 0, v___x_6580_);
v___x_6583_ = v_reuseFailAlloc_6584_;
goto v_reusejp_6582_;
}
v_reusejp_6582_:
{
return v___x_6583_;
}
}
else
{
lean_object* v___x_6585_; lean_object* v___x_6587_; 
v___x_6585_ = lean_box(0);
if (v_isShared_6573_ == 0)
{
lean_ctor_set(v___x_6572_, 0, v___x_6585_);
v___x_6587_ = v___x_6572_;
goto v_reusejp_6586_;
}
else
{
lean_object* v_reuseFailAlloc_6588_; 
v_reuseFailAlloc_6588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6588_, 0, v___x_6585_);
v___x_6587_ = v_reuseFailAlloc_6588_;
goto v_reusejp_6586_;
}
v_reusejp_6586_:
{
return v___x_6587_;
}
}
}
}
else
{
lean_object* v_a_6590_; lean_object* v___x_6592_; uint8_t v_isShared_6593_; uint8_t v_isSharedCheck_6597_; 
v_a_6590_ = lean_ctor_get(v___x_6569_, 0);
v_isSharedCheck_6597_ = !lean_is_exclusive(v___x_6569_);
if (v_isSharedCheck_6597_ == 0)
{
v___x_6592_ = v___x_6569_;
v_isShared_6593_ = v_isSharedCheck_6597_;
goto v_resetjp_6591_;
}
else
{
lean_inc(v_a_6590_);
lean_dec(v___x_6569_);
v___x_6592_ = lean_box(0);
v_isShared_6593_ = v_isSharedCheck_6597_;
goto v_resetjp_6591_;
}
v_resetjp_6591_:
{
lean_object* v___x_6595_; 
if (v_isShared_6593_ == 0)
{
v___x_6595_ = v___x_6592_;
goto v_reusejp_6594_;
}
else
{
lean_object* v_reuseFailAlloc_6596_; 
v_reuseFailAlloc_6596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6596_, 0, v_a_6590_);
v___x_6595_ = v_reuseFailAlloc_6596_;
goto v_reusejp_6594_;
}
v_reusejp_6594_:
{
return v___x_6595_;
}
}
}
}
else
{
lean_object* v___x_6598_; lean_object* v___x_6600_; 
v___x_6598_ = lean_box(0);
if (v_isShared_6567_ == 0)
{
lean_ctor_set(v___x_6566_, 0, v___x_6598_);
v___x_6600_ = v___x_6566_;
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
v_a_6603_ = lean_ctor_get(v___x_6563_, 0);
v_isSharedCheck_6610_ = !lean_is_exclusive(v___x_6563_);
if (v_isSharedCheck_6610_ == 0)
{
v___x_6605_ = v___x_6563_;
v_isShared_6606_ = v_isSharedCheck_6610_;
goto v_resetjp_6604_;
}
else
{
lean_inc(v_a_6603_);
lean_dec(v___x_6563_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_waitForever___boxed(lean_object* v_a_6611_){
_start:
{
lean_object* v_res_6612_; 
v_res_6612_ = l_Lasm_JS_waitForever();
return v_res_6612_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_stats(){
_start:
{
uint32_t v___x_6614_; uint32_t v___x_6615_; uint64_t v___x_6616_; lean_object* v___x_6617_; lean_object* v___x_6618_; 
v___x_6614_ = 213;
v___x_6615_ = 0;
v___x_6616_ = 0ULL;
v___x_6617_ = l_ByteArray_empty;
v___x_6618_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_6614_, v___x_6615_, v___x_6616_, v___x_6617_);
if (lean_obj_tag(v___x_6618_) == 0)
{
lean_object* v_a_6619_; lean_object* v___x_6621_; uint8_t v_isShared_6622_; uint8_t v_isSharedCheck_6633_; 
v_a_6619_ = lean_ctor_get(v___x_6618_, 0);
v_isSharedCheck_6633_ = !lean_is_exclusive(v___x_6618_);
if (v_isSharedCheck_6633_ == 0)
{
v___x_6621_ = v___x_6618_;
v_isShared_6622_ = v_isSharedCheck_6633_;
goto v_resetjp_6620_;
}
else
{
lean_inc(v_a_6619_);
lean_dec(v___x_6618_);
v___x_6621_ = lean_box(0);
v_isShared_6622_ = v_isSharedCheck_6633_;
goto v_resetjp_6620_;
}
v_resetjp_6620_:
{
uint8_t v___x_6623_; 
v___x_6623_ = lean_string_validate_utf8(v_a_6619_);
if (v___x_6623_ == 0)
{
lean_object* v___x_6624_; lean_object* v___x_6625_; lean_object* v___x_6627_; 
lean_dec(v_a_6619_);
v___x_6624_ = lean_obj_once(&l_Lasm_JS_decodeAs___redArg___closed__7, &l_Lasm_JS_decodeAs___redArg___closed__7_once, _init_l_Lasm_JS_decodeAs___redArg___closed__7);
v___x_6625_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_6624_);
if (v_isShared_6622_ == 0)
{
lean_ctor_set(v___x_6621_, 0, v___x_6625_);
v___x_6627_ = v___x_6621_;
goto v_reusejp_6626_;
}
else
{
lean_object* v_reuseFailAlloc_6628_; 
v_reuseFailAlloc_6628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6628_, 0, v___x_6625_);
v___x_6627_ = v_reuseFailAlloc_6628_;
goto v_reusejp_6626_;
}
v_reusejp_6626_:
{
return v___x_6627_;
}
}
else
{
lean_object* v___x_6629_; lean_object* v___x_6631_; 
v___x_6629_ = lean_string_from_utf8_unchecked(v_a_6619_);
if (v_isShared_6622_ == 0)
{
lean_ctor_set(v___x_6621_, 0, v___x_6629_);
v___x_6631_ = v___x_6621_;
goto v_reusejp_6630_;
}
else
{
lean_object* v_reuseFailAlloc_6632_; 
v_reuseFailAlloc_6632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6632_, 0, v___x_6629_);
v___x_6631_ = v_reuseFailAlloc_6632_;
goto v_reusejp_6630_;
}
v_reusejp_6630_:
{
return v___x_6631_;
}
}
}
}
else
{
lean_object* v_a_6634_; lean_object* v___x_6636_; uint8_t v_isShared_6637_; uint8_t v_isSharedCheck_6641_; 
v_a_6634_ = lean_ctor_get(v___x_6618_, 0);
v_isSharedCheck_6641_ = !lean_is_exclusive(v___x_6618_);
if (v_isSharedCheck_6641_ == 0)
{
v___x_6636_ = v___x_6618_;
v_isShared_6637_ = v_isSharedCheck_6641_;
goto v_resetjp_6635_;
}
else
{
lean_inc(v_a_6634_);
lean_dec(v___x_6618_);
v___x_6636_ = lean_box(0);
v_isShared_6637_ = v_isSharedCheck_6641_;
goto v_resetjp_6635_;
}
v_resetjp_6635_:
{
lean_object* v___x_6639_; 
if (v_isShared_6637_ == 0)
{
v___x_6639_ = v___x_6636_;
goto v_reusejp_6638_;
}
else
{
lean_object* v_reuseFailAlloc_6640_; 
v_reuseFailAlloc_6640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6640_, 0, v_a_6634_);
v___x_6639_ = v_reuseFailAlloc_6640_;
goto v_reusejp_6638_;
}
v_reusejp_6638_:
{
return v___x_6639_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_stats___boxed(lean_object* v_a_6642_){
_start:
{
lean_object* v_res_6643_; 
v_res_6643_ = l_Lasm_JS_stats();
return v_res_6643_;
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
