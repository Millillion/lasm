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
lean_object* lean_obj_tag_nat(lean_object*);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_write(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_encode(lean_object*);
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
static const lean_string_object l_Lasm_JS_instFromJSNat___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "negative"};
static const lean_object* l_Lasm_JS_instFromJSNat___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_instFromJSNat___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_instFromJSNat___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_instFromJSNat___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_instFromJSNat___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_instFromJSNat___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_instFromJSNat___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_instFromJSInt___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_instFromJSNat___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_instFromJSNat___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_instFromJSNat___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Data_describe___closed__7_value)}};
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU32(lean_object* v_b_320_, uint32_t v_n_321_){
_start:
{
uint8_t v___x_322_; lean_object* v___x_323_; uint32_t v___x_324_; uint32_t v___x_325_; uint8_t v___x_326_; lean_object* v___x_327_; uint32_t v___x_328_; uint32_t v___x_329_; uint8_t v___x_330_; lean_object* v___x_331_; uint32_t v___x_332_; uint32_t v___x_333_; uint8_t v___x_334_; lean_object* v___x_335_; 
v___x_322_ = lean_uint32_to_uint8(v_n_321_);
v___x_323_ = lean_byte_array_push(v_b_320_, v___x_322_);
v___x_324_ = 8;
v___x_325_ = lean_uint32_shift_right(v_n_321_, v___x_324_);
v___x_326_ = lean_uint32_to_uint8(v___x_325_);
v___x_327_ = lean_byte_array_push(v___x_323_, v___x_326_);
v___x_328_ = 16;
v___x_329_ = lean_uint32_shift_right(v_n_321_, v___x_328_);
v___x_330_ = lean_uint32_to_uint8(v___x_329_);
v___x_331_ = lean_byte_array_push(v___x_327_, v___x_330_);
v___x_332_ = 24;
v___x_333_ = lean_uint32_shift_right(v_n_321_, v___x_332_);
v___x_334_ = lean_uint32_to_uint8(v___x_333_);
v___x_335_ = lean_byte_array_push(v___x_331_, v___x_334_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU32___boxed(lean_object* v_b_336_, lean_object* v_n_337_){
_start:
{
uint32_t v_n_boxed_338_; lean_object* v_res_339_; 
v_n_boxed_338_ = lean_unbox_uint32(v_n_337_);
lean_dec(v_n_337_);
v_res_339_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU32(v_b_336_, v_n_boxed_338_);
return v_res_339_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64_spec__0___redArg(uint64_t v_n_340_, lean_object* v_range_341_, lean_object* v_b_342_, lean_object* v_i_343_){
_start:
{
lean_object* v_stop_344_; lean_object* v_step_345_; uint8_t v___x_346_; 
v_stop_344_ = lean_ctor_get(v_range_341_, 1);
v_step_345_ = lean_ctor_get(v_range_341_, 2);
v___x_346_ = lean_nat_dec_lt(v_i_343_, v_stop_344_);
if (v___x_346_ == 0)
{
lean_dec(v_i_343_);
return v_b_342_;
}
else
{
lean_object* v___x_347_; lean_object* v___x_348_; uint64_t v___x_349_; uint64_t v___x_350_; uint8_t v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_347_ = lean_unsigned_to_nat(8u);
v___x_348_ = lean_nat_mul(v___x_347_, v_i_343_);
v___x_349_ = lean_uint64_of_nat(v___x_348_);
lean_dec(v___x_348_);
v___x_350_ = lean_uint64_shift_right(v_n_340_, v___x_349_);
v___x_351_ = lean_uint64_to_uint8(v___x_350_);
v___x_352_ = lean_byte_array_push(v_b_342_, v___x_351_);
v___x_353_ = lean_nat_add(v_i_343_, v_step_345_);
lean_dec(v_i_343_);
v_b_342_ = v___x_352_;
v_i_343_ = v___x_353_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64_spec__0___redArg___boxed(lean_object* v_n_355_, lean_object* v_range_356_, lean_object* v_b_357_, lean_object* v_i_358_){
_start:
{
uint64_t v_n_boxed_359_; lean_object* v_res_360_; 
v_n_boxed_359_ = lean_unbox_uint64(v_n_355_);
lean_dec_ref(v_n_355_);
v_res_360_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64_spec__0___redArg(v_n_boxed_359_, v_range_356_, v_b_357_, v_i_358_);
lean_dec_ref(v_range_356_);
return v_res_360_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64(lean_object* v_b_365_, uint64_t v_n_366_){
_start:
{
lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; 
v___x_367_ = lean_unsigned_to_nat(0u);
v___x_368_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64___closed__0));
v___x_369_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64_spec__0___redArg(v_n_366_, v___x_368_, v_b_365_, v___x_367_);
return v___x_369_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64___boxed(lean_object* v_b_370_, lean_object* v_n_371_){
_start:
{
uint64_t v_n_boxed_372_; lean_object* v_res_373_; 
v_n_boxed_372_ = lean_unbox_uint64(v_n_371_);
lean_dec_ref(v_n_371_);
v_res_373_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64(v_b_370_, v_n_boxed_372_);
return v_res_373_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64_spec__0(uint64_t v_n_374_, lean_object* v_range_375_, lean_object* v_b_376_, lean_object* v_i_377_, lean_object* v_hs_378_, lean_object* v_hl_379_){
_start:
{
lean_object* v___x_380_; 
v___x_380_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64_spec__0___redArg(v_n_374_, v_range_375_, v_b_376_, v_i_377_);
return v___x_380_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64_spec__0___boxed(lean_object* v_n_381_, lean_object* v_range_382_, lean_object* v_b_383_, lean_object* v_i_384_, lean_object* v_hs_385_, lean_object* v_hl_386_){
_start:
{
uint64_t v_n_boxed_387_; lean_object* v_res_388_; 
v_n_boxed_387_ = lean_unbox_uint64(v_n_381_);
lean_dec_ref(v_n_381_);
v_res_388_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64_spec__0(v_n_boxed_387_, v_range_382_, v_b_383_, v_i_384_, v_hs_385_, v_hl_386_);
lean_dec_ref(v_range_382_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushBytes(lean_object* v_b_389_, lean_object* v_x_390_){
_start:
{
lean_object* v___x_391_; uint32_t v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; uint8_t v___x_396_; lean_object* v___x_397_; 
v___x_391_ = lean_byte_array_size(v_x_390_);
v___x_392_ = lean_uint32_of_nat(v___x_391_);
v___x_393_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU32(v_b_389_, v___x_392_);
v___x_394_ = lean_unsigned_to_nat(0u);
v___x_395_ = lean_byte_array_size(v___x_393_);
v___x_396_ = 0;
v___x_397_ = lean_byte_array_copy_slice(v_x_390_, v___x_394_, v___x_393_, v___x_395_, v___x_391_, v___x_396_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushBytes___boxed(lean_object* v_b_398_, lean_object* v_x_399_){
_start:
{
lean_object* v_res_400_; 
v_res_400_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushBytes(v_b_398_, v_x_399_);
lean_dec_ref(v_x_399_);
return v_res_400_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushString(lean_object* v_b_401_, lean_object* v_s_402_){
_start:
{
lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_403_ = lean_string_to_utf8(v_s_402_);
v___x_404_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushBytes(v_b_401_, v___x_403_);
lean_dec_ref(v___x_403_);
return v___x_404_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__1(lean_object* v_as_405_, size_t v_i_406_, size_t v_stop_407_, lean_object* v_b_408_){
_start:
{
uint8_t v___x_409_; 
v___x_409_ = lean_usize_dec_eq(v_i_406_, v_stop_407_);
if (v___x_409_ == 0)
{
lean_object* v___x_410_; lean_object* v_fst_411_; lean_object* v_snd_412_; lean_object* v___x_413_; lean_object* v___x_414_; size_t v___x_415_; size_t v___x_416_; 
v___x_410_ = lean_array_uget_borrowed(v_as_405_, v_i_406_);
v_fst_411_ = lean_ctor_get(v___x_410_, 0);
v_snd_412_ = lean_ctor_get(v___x_410_, 1);
lean_inc(v_fst_411_);
v___x_413_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushString(v_b_408_, v_fst_411_);
lean_inc(v_snd_412_);
v___x_414_ = l_Lasm_JS_Wire_write(v___x_413_, v_snd_412_);
v___x_415_ = ((size_t)1ULL);
v___x_416_ = lean_usize_add(v_i_406_, v___x_415_);
v_i_406_ = v___x_416_;
v_b_408_ = v___x_414_;
goto _start;
}
else
{
return v_b_408_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_write(lean_object* v_b_418_, lean_object* v_x_419_){
_start:
{
switch(lean_obj_tag(v_x_419_))
{
case 0:
{
uint8_t v___x_420_; lean_object* v___x_421_; 
v___x_420_ = 0;
v___x_421_ = lean_byte_array_push(v_b_418_, v___x_420_);
return v___x_421_;
}
case 1:
{
uint8_t v___x_422_; lean_object* v___x_423_; 
v___x_422_ = 1;
v___x_423_ = lean_byte_array_push(v_b_418_, v___x_422_);
return v___x_423_;
}
case 2:
{
uint8_t v_b_424_; 
v_b_424_ = lean_ctor_get_uint8(v_x_419_, 0);
lean_dec_ref_known(v_x_419_, 0);
if (v_b_424_ == 0)
{
uint8_t v___x_425_; lean_object* v___x_426_; 
v___x_425_ = 2;
v___x_426_ = lean_byte_array_push(v_b_418_, v___x_425_);
return v___x_426_;
}
else
{
uint8_t v___x_427_; lean_object* v___x_428_; 
v___x_427_ = 3;
v___x_428_ = lean_byte_array_push(v_b_418_, v___x_427_);
return v___x_428_;
}
}
case 3:
{
double v_n_429_; uint8_t v___x_430_; lean_object* v___x_431_; uint64_t v___x_432_; lean_object* v___x_433_; 
v_n_429_ = lean_ctor_get_float(v_x_419_, 0);
lean_dec_ref_known(v_x_419_, 0);
v___x_430_ = 4;
v___x_431_ = lean_byte_array_push(v_b_418_, v___x_430_);
v___x_432_ = lean_float_to_bits(v_n_429_);
v___x_433_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64(v___x_431_, v___x_432_);
return v___x_433_;
}
case 4:
{
lean_object* v_s_434_; uint8_t v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; 
v_s_434_ = lean_ctor_get(v_x_419_, 0);
lean_inc_ref(v_s_434_);
lean_dec_ref_known(v_x_419_, 1);
v___x_435_ = 5;
v___x_436_ = lean_byte_array_push(v_b_418_, v___x_435_);
v___x_437_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushString(v___x_436_, v_s_434_);
return v___x_437_;
}
case 5:
{
lean_object* v_i_438_; uint8_t v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; 
v_i_438_ = lean_ctor_get(v_x_419_, 0);
lean_inc(v_i_438_);
lean_dec_ref_known(v_x_419_, 1);
v___x_439_ = 6;
v___x_440_ = lean_byte_array_push(v_b_418_, v___x_439_);
v___x_441_ = l_Int_repr(v_i_438_);
lean_dec(v_i_438_);
v___x_442_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushString(v___x_440_, v___x_441_);
return v___x_442_;
}
case 6:
{
lean_object* v_b_443_; uint8_t v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; 
v_b_443_ = lean_ctor_get(v_x_419_, 0);
lean_inc_ref(v_b_443_);
lean_dec_ref_known(v_x_419_, 1);
v___x_444_ = 7;
v___x_445_ = lean_byte_array_push(v_b_418_, v___x_444_);
v___x_446_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushBytes(v___x_445_, v_b_443_);
lean_dec_ref(v_b_443_);
return v___x_446_;
}
case 7:
{
lean_object* v_items_447_; uint8_t v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; uint32_t v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; uint8_t v___x_454_; 
v_items_447_ = lean_ctor_get(v_x_419_, 0);
lean_inc_ref(v_items_447_);
lean_dec_ref_known(v_x_419_, 1);
v___x_448_ = 8;
v___x_449_ = lean_byte_array_push(v_b_418_, v___x_448_);
v___x_450_ = lean_array_get_size(v_items_447_);
v___x_451_ = lean_uint32_of_nat(v___x_450_);
v___x_452_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU32(v___x_449_, v___x_451_);
v___x_453_ = lean_unsigned_to_nat(0u);
v___x_454_ = lean_nat_dec_lt(v___x_453_, v___x_450_);
if (v___x_454_ == 0)
{
lean_dec_ref(v_items_447_);
return v___x_452_;
}
else
{
size_t v___x_455_; size_t v___x_456_; lean_object* v___x_457_; 
v___x_455_ = ((size_t)0ULL);
v___x_456_ = lean_usize_of_nat(v___x_450_);
v___x_457_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__0(v_items_447_, v___x_455_, v___x_456_, v___x_452_);
lean_dec_ref(v_items_447_);
return v___x_457_;
}
}
case 8:
{
lean_object* v_fields_458_; uint8_t v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; uint32_t v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; uint8_t v___x_465_; 
v_fields_458_ = lean_ctor_get(v_x_419_, 0);
lean_inc_ref(v_fields_458_);
lean_dec_ref_known(v_x_419_, 1);
v___x_459_ = 9;
v___x_460_ = lean_byte_array_push(v_b_418_, v___x_459_);
v___x_461_ = lean_array_get_size(v_fields_458_);
v___x_462_ = lean_uint32_of_nat(v___x_461_);
v___x_463_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU32(v___x_460_, v___x_462_);
v___x_464_ = lean_unsigned_to_nat(0u);
v___x_465_ = lean_nat_dec_lt(v___x_464_, v___x_461_);
if (v___x_465_ == 0)
{
lean_dec_ref(v_fields_458_);
return v___x_463_;
}
else
{
size_t v___x_466_; size_t v___x_467_; lean_object* v___x_468_; 
v___x_466_ = ((size_t)0ULL);
v___x_467_ = lean_usize_of_nat(v___x_461_);
v___x_468_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__1(v_fields_458_, v___x_466_, v___x_467_, v___x_463_);
lean_dec_ref(v_fields_458_);
return v___x_468_;
}
}
default: 
{
lean_object* v_value_469_; uint8_t v___x_470_; lean_object* v___x_471_; uint32_t v___x_472_; lean_object* v___x_473_; uint32_t v___x_474_; lean_object* v___x_475_; 
v_value_469_ = lean_ctor_get(v_x_419_, 0);
lean_inc(v_value_469_);
lean_dec_ref_known(v_x_419_, 2);
v___x_470_ = 10;
v___x_471_ = lean_byte_array_push(v_b_418_, v___x_470_);
v___x_472_ = lasm_js_value_handle(v_value_469_);
lean_dec(v_value_469_);
v___x_473_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU32(v___x_471_, v___x_472_);
v___x_474_ = 0;
v___x_475_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU32(v___x_473_, v___x_474_);
return v___x_475_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__0(lean_object* v_as_476_, size_t v_i_477_, size_t v_stop_478_, lean_object* v_b_479_){
_start:
{
uint8_t v___x_480_; 
v___x_480_ = lean_usize_dec_eq(v_i_477_, v_stop_478_);
if (v___x_480_ == 0)
{
lean_object* v___x_481_; lean_object* v___x_482_; size_t v___x_483_; size_t v___x_484_; 
v___x_481_ = lean_array_uget_borrowed(v_as_476_, v_i_477_);
lean_inc(v___x_481_);
v___x_482_ = l_Lasm_JS_Wire_write(v_b_479_, v___x_481_);
v___x_483_ = ((size_t)1ULL);
v___x_484_ = lean_usize_add(v_i_477_, v___x_483_);
v_i_477_ = v___x_484_;
v_b_479_ = v___x_482_;
goto _start;
}
else
{
return v_b_479_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__0___boxed(lean_object* v_as_486_, lean_object* v_i_487_, lean_object* v_stop_488_, lean_object* v_b_489_){
_start:
{
size_t v_i_boxed_490_; size_t v_stop_boxed_491_; lean_object* v_res_492_; 
v_i_boxed_490_ = lean_unbox_usize(v_i_487_);
lean_dec(v_i_487_);
v_stop_boxed_491_ = lean_unbox_usize(v_stop_488_);
lean_dec(v_stop_488_);
v_res_492_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__0(v_as_486_, v_i_boxed_490_, v_stop_boxed_491_, v_b_489_);
lean_dec_ref(v_as_486_);
return v_res_492_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__1___boxed(lean_object* v_as_493_, lean_object* v_i_494_, lean_object* v_stop_495_, lean_object* v_b_496_){
_start:
{
size_t v_i_boxed_497_; size_t v_stop_boxed_498_; lean_object* v_res_499_; 
v_i_boxed_497_ = lean_unbox_usize(v_i_494_);
lean_dec(v_i_494_);
v_stop_boxed_498_ = lean_unbox_usize(v_stop_495_);
lean_dec(v_stop_495_);
v_res_499_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Wire_write_spec__1(v_as_493_, v_i_boxed_497_, v_stop_boxed_498_, v_b_496_);
lean_dec_ref(v_as_493_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_encode(lean_object* v_d_500_){
_start:
{
lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_501_ = l_ByteArray_empty;
v___x_502_ = l_Lasm_JS_Wire_write(v___x_501_, v_d_500_);
return v___x_502_;
}
}
LEAN_EXPORT uint8_t l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32___lam__0(lean_object* v_xs_503_, lean_object* v_i_504_){
_start:
{
lean_object* v___x_505_; uint8_t v___x_506_; 
v___x_505_ = lean_byte_array_size(v_xs_503_);
v___x_506_ = lean_nat_dec_lt(v_i_504_, v___x_505_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32___lam__0___boxed(lean_object* v_xs_507_, lean_object* v_i_508_){
_start:
{
uint8_t v_res_509_; lean_object* v_r_510_; 
v_res_509_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32___lam__0(v_xs_507_, v_i_508_);
lean_dec(v_i_508_);
lean_dec_ref(v_xs_507_);
v_r_510_ = lean_box(v_res_509_);
return v_r_510_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32(lean_object* v_b_514_, lean_object* v_o_515_){
_start:
{
uint32_t v___y_517_; uint8_t v___y_518_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; uint8_t v___x_528_; 
v___x_525_ = lean_unsigned_to_nat(4u);
v___x_526_ = lean_nat_add(v_o_515_, v___x_525_);
v___x_527_ = lean_byte_array_size(v_b_514_);
v___x_528_ = lean_nat_dec_le(v___x_526_, v___x_527_);
lean_dec(v___x_526_);
if (v___x_528_ == 0)
{
lean_object* v___x_529_; 
v___x_529_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32___closed__1));
return v___x_529_;
}
else
{
uint8_t v___x_530_; uint32_t v___y_532_; uint8_t v___y_533_; uint32_t v___y_546_; uint8_t v___y_547_; uint8_t v___y_560_; uint8_t v___x_569_; 
v___x_530_ = 0;
v___x_569_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32___lam__0(v_b_514_, v_o_515_);
if (v___x_569_ == 0)
{
lean_object* v___x_570_; lean_object* v___x_571_; uint8_t v___x_572_; 
v___x_570_ = lean_box(v___x_530_);
v___x_571_ = l_outOfBounds___redArg(v___x_570_);
lean_dec(v___x_570_);
v___x_572_ = lean_unbox(v___x_571_);
lean_dec(v___x_571_);
v___y_560_ = v___x_572_;
goto v___jp_559_;
}
else
{
uint8_t v___x_573_; 
v___x_573_ = lean_byte_array_fget(v_b_514_, v_o_515_);
v___y_560_ = v___x_573_;
goto v___jp_559_;
}
v___jp_531_:
{
uint32_t v___x_534_; uint32_t v___x_535_; uint32_t v___x_536_; uint32_t v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; uint8_t v___x_540_; 
v___x_534_ = lean_uint8_to_uint32(v___y_533_);
v___x_535_ = 16;
v___x_536_ = lean_uint32_shift_left(v___x_534_, v___x_535_);
v___x_537_ = lean_uint32_lor(v___y_532_, v___x_536_);
v___x_538_ = lean_unsigned_to_nat(3u);
v___x_539_ = lean_nat_add(v_o_515_, v___x_538_);
v___x_540_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32___lam__0(v_b_514_, v___x_539_);
if (v___x_540_ == 0)
{
lean_object* v___x_541_; lean_object* v___x_542_; uint8_t v___x_543_; 
lean_dec(v___x_539_);
v___x_541_ = lean_box(v___x_530_);
v___x_542_ = l_outOfBounds___redArg(v___x_541_);
lean_dec(v___x_541_);
v___x_543_ = lean_unbox(v___x_542_);
lean_dec(v___x_542_);
v___y_517_ = v___x_537_;
v___y_518_ = v___x_543_;
goto v___jp_516_;
}
else
{
uint8_t v___x_544_; 
v___x_544_ = lean_byte_array_fget(v_b_514_, v___x_539_);
lean_dec(v___x_539_);
v___y_517_ = v___x_537_;
v___y_518_ = v___x_544_;
goto v___jp_516_;
}
}
v___jp_545_:
{
uint32_t v___x_548_; uint32_t v___x_549_; uint32_t v___x_550_; uint32_t v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; uint8_t v___x_554_; 
v___x_548_ = lean_uint8_to_uint32(v___y_547_);
v___x_549_ = 8;
v___x_550_ = lean_uint32_shift_left(v___x_548_, v___x_549_);
v___x_551_ = lean_uint32_lor(v___y_546_, v___x_550_);
v___x_552_ = lean_unsigned_to_nat(2u);
v___x_553_ = lean_nat_add(v_o_515_, v___x_552_);
v___x_554_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32___lam__0(v_b_514_, v___x_553_);
if (v___x_554_ == 0)
{
lean_object* v___x_555_; lean_object* v___x_556_; uint8_t v___x_557_; 
lean_dec(v___x_553_);
v___x_555_ = lean_box(v___x_530_);
v___x_556_ = l_outOfBounds___redArg(v___x_555_);
lean_dec(v___x_555_);
v___x_557_ = lean_unbox(v___x_556_);
lean_dec(v___x_556_);
v___y_532_ = v___x_551_;
v___y_533_ = v___x_557_;
goto v___jp_531_;
}
else
{
uint8_t v___x_558_; 
v___x_558_ = lean_byte_array_fget(v_b_514_, v___x_553_);
lean_dec(v___x_553_);
v___y_532_ = v___x_551_;
v___y_533_ = v___x_558_;
goto v___jp_531_;
}
}
v___jp_559_:
{
uint32_t v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; uint8_t v___x_564_; 
v___x_561_ = lean_uint8_to_uint32(v___y_560_);
v___x_562_ = lean_unsigned_to_nat(1u);
v___x_563_ = lean_nat_add(v_o_515_, v___x_562_);
v___x_564_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32___lam__0(v_b_514_, v___x_563_);
if (v___x_564_ == 0)
{
lean_object* v___x_565_; lean_object* v___x_566_; uint8_t v___x_567_; 
lean_dec(v___x_563_);
v___x_565_ = lean_box(v___x_530_);
v___x_566_ = l_outOfBounds___redArg(v___x_565_);
lean_dec(v___x_565_);
v___x_567_ = lean_unbox(v___x_566_);
lean_dec(v___x_566_);
v___y_546_ = v___x_561_;
v___y_547_ = v___x_567_;
goto v___jp_545_;
}
else
{
uint8_t v___x_568_; 
v___x_568_ = lean_byte_array_fget(v_b_514_, v___x_563_);
lean_dec(v___x_563_);
v___y_546_ = v___x_561_;
v___y_547_ = v___x_568_;
goto v___jp_545_;
}
}
}
v___jp_516_:
{
uint32_t v___x_519_; uint32_t v___x_520_; uint32_t v___x_521_; uint32_t v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_519_ = lean_uint8_to_uint32(v___y_518_);
v___x_520_ = 24;
v___x_521_ = lean_uint32_shift_left(v___x_519_, v___x_520_);
v___x_522_ = lean_uint32_lor(v___y_517_, v___x_521_);
v___x_523_ = lean_box_uint32(v___x_522_);
v___x_524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_524_, 0, v___x_523_);
return v___x_524_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32___boxed(lean_object* v_b_574_, lean_object* v_o_575_){
_start:
{
lean_object* v_res_576_; 
v_res_576_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32(v_b_574_, v_o_575_);
lean_dec(v_o_575_);
lean_dec_ref(v_b_574_);
return v_res_576_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64_spec__0___redArg(lean_object* v_o_577_, lean_object* v_b_578_, lean_object* v_range_579_, uint64_t v_b_580_, lean_object* v_i_581_){
_start:
{
lean_object* v_stop_582_; lean_object* v_step_583_; uint8_t v___x_584_; 
v_stop_582_ = lean_ctor_get(v_range_579_, 1);
v_step_583_ = lean_ctor_get(v_range_579_, 2);
v___x_584_ = lean_nat_dec_lt(v_i_581_, v_stop_582_);
if (v___x_584_ == 0)
{
lean_dec(v_i_581_);
return v_b_580_;
}
else
{
lean_object* v___x_585_; uint8_t v___y_587_; lean_object* v___x_595_; lean_object* v___x_596_; uint8_t v___x_597_; 
v___x_585_ = lean_unsigned_to_nat(8u);
v___x_595_ = lean_nat_add(v_o_577_, v_i_581_);
v___x_596_ = lean_byte_array_size(v_b_578_);
v___x_597_ = lean_nat_dec_lt(v___x_595_, v___x_596_);
if (v___x_597_ == 0)
{
uint8_t v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; uint8_t v___x_601_; 
lean_dec(v___x_595_);
v___x_598_ = 0;
v___x_599_ = lean_box(v___x_598_);
v___x_600_ = l_outOfBounds___redArg(v___x_599_);
lean_dec(v___x_599_);
v___x_601_ = lean_unbox(v___x_600_);
lean_dec(v___x_600_);
v___y_587_ = v___x_601_;
goto v___jp_586_;
}
else
{
uint8_t v___x_602_; 
v___x_602_ = lean_byte_array_fget(v_b_578_, v___x_595_);
lean_dec(v___x_595_);
v___y_587_ = v___x_602_;
goto v___jp_586_;
}
v___jp_586_:
{
uint64_t v___x_588_; lean_object* v___x_589_; uint64_t v___x_590_; uint64_t v___x_591_; uint64_t v___x_592_; lean_object* v___x_593_; 
v___x_588_ = lean_uint8_to_uint64(v___y_587_);
v___x_589_ = lean_nat_mul(v___x_585_, v_i_581_);
v___x_590_ = lean_uint64_of_nat(v___x_589_);
lean_dec(v___x_589_);
v___x_591_ = lean_uint64_shift_left(v___x_588_, v___x_590_);
v___x_592_ = lean_uint64_lor(v_b_580_, v___x_591_);
v___x_593_ = lean_nat_add(v_i_581_, v_step_583_);
lean_dec(v_i_581_);
v_b_580_ = v___x_592_;
v_i_581_ = v___x_593_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64_spec__0___redArg___boxed(lean_object* v_o_603_, lean_object* v_b_604_, lean_object* v_range_605_, lean_object* v_b_606_, lean_object* v_i_607_){
_start:
{
uint64_t v_b_boxed_608_; uint64_t v_res_609_; lean_object* v_r_610_; 
v_b_boxed_608_ = lean_unbox_uint64(v_b_606_);
lean_dec_ref(v_b_606_);
v_res_609_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64_spec__0___redArg(v_o_603_, v_b_604_, v_range_605_, v_b_boxed_608_, v_i_607_);
lean_dec_ref(v_range_605_);
lean_dec_ref(v_b_604_);
lean_dec(v_o_603_);
v_r_610_ = lean_box_uint64(v_res_609_);
return v_r_610_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64(lean_object* v_b_613_, lean_object* v_o_614_){
_start:
{
lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; uint8_t v___x_618_; 
v___x_615_ = lean_unsigned_to_nat(8u);
v___x_616_ = lean_nat_add(v_o_614_, v___x_615_);
v___x_617_ = lean_byte_array_size(v_b_613_);
v___x_618_ = lean_nat_dec_le(v___x_616_, v___x_617_);
lean_dec(v___x_616_);
if (v___x_618_ == 0)
{
lean_object* v___x_619_; 
v___x_619_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64___closed__0));
return v___x_619_;
}
else
{
lean_object* v___x_620_; uint64_t v_v_621_; lean_object* v___x_622_; uint64_t v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_620_ = lean_unsigned_to_nat(0u);
v_v_621_ = 0ULL;
v___x_622_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64___closed__0));
v___x_623_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64_spec__0___redArg(v_o_614_, v_b_613_, v___x_622_, v_v_621_, v___x_620_);
v___x_624_ = lean_box_uint64(v___x_623_);
v___x_625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_625_, 0, v___x_624_);
return v___x_625_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64___boxed(lean_object* v_b_626_, lean_object* v_o_627_){
_start:
{
lean_object* v_res_628_; 
v_res_628_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64(v_b_626_, v_o_627_);
lean_dec(v_o_627_);
lean_dec_ref(v_b_626_);
return v_res_628_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64_spec__0(lean_object* v_o_629_, lean_object* v_b_630_, lean_object* v_range_631_, uint64_t v_b_632_, lean_object* v_i_633_, lean_object* v_hs_634_, lean_object* v_hl_635_){
_start:
{
uint64_t v___x_636_; 
v___x_636_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64_spec__0___redArg(v_o_629_, v_b_630_, v_range_631_, v_b_632_, v_i_633_);
return v___x_636_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64_spec__0___boxed(lean_object* v_o_637_, lean_object* v_b_638_, lean_object* v_range_639_, lean_object* v_b_640_, lean_object* v_i_641_, lean_object* v_hs_642_, lean_object* v_hl_643_){
_start:
{
uint64_t v_b_boxed_644_; uint64_t v_res_645_; lean_object* v_r_646_; 
v_b_boxed_644_ = lean_unbox_uint64(v_b_640_);
lean_dec_ref(v_b_640_);
v_res_645_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64_spec__0(v_o_637_, v_b_638_, v_range_639_, v_b_boxed_644_, v_i_641_, v_hs_642_, v_hl_643_);
lean_dec_ref(v_range_639_);
lean_dec_ref(v_b_638_);
lean_dec(v_o_637_);
v_r_646_ = lean_box_uint64(v_res_645_);
return v_r_646_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readRaw(lean_object* v_b_649_, lean_object* v_o_650_){
_start:
{
lean_object* v___x_651_; 
v___x_651_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32(v_b_649_, v_o_650_);
if (lean_obj_tag(v___x_651_) == 0)
{
lean_object* v_a_652_; lean_object* v___x_654_; uint8_t v_isShared_655_; uint8_t v_isSharedCheck_659_; 
v_a_652_ = lean_ctor_get(v___x_651_, 0);
v_isSharedCheck_659_ = !lean_is_exclusive(v___x_651_);
if (v_isSharedCheck_659_ == 0)
{
v___x_654_ = v___x_651_;
v_isShared_655_ = v_isSharedCheck_659_;
goto v_resetjp_653_;
}
else
{
lean_inc(v_a_652_);
lean_dec(v___x_651_);
v___x_654_ = lean_box(0);
v_isShared_655_ = v_isSharedCheck_659_;
goto v_resetjp_653_;
}
v_resetjp_653_:
{
lean_object* v___x_657_; 
if (v_isShared_655_ == 0)
{
v___x_657_ = v___x_654_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v_a_652_);
v___x_657_ = v_reuseFailAlloc_658_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
return v___x_657_;
}
}
}
else
{
lean_object* v_a_660_; lean_object* v___x_662_; uint8_t v_isShared_663_; uint8_t v_isSharedCheck_677_; 
v_a_660_ = lean_ctor_get(v___x_651_, 0);
v_isSharedCheck_677_ = !lean_is_exclusive(v___x_651_);
if (v_isSharedCheck_677_ == 0)
{
v___x_662_ = v___x_651_;
v_isShared_663_ = v_isSharedCheck_677_;
goto v_resetjp_661_;
}
else
{
lean_inc(v_a_660_);
lean_dec(v___x_651_);
v___x_662_ = lean_box(0);
v_isShared_663_ = v_isSharedCheck_677_;
goto v_resetjp_661_;
}
v_resetjp_661_:
{
uint32_t v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; uint8_t v___x_670_; 
v___x_664_ = lean_unbox_uint32(v_a_660_);
lean_dec(v_a_660_);
v___x_665_ = lean_uint32_to_nat(v___x_664_);
v___x_666_ = lean_unsigned_to_nat(4u);
v___x_667_ = lean_nat_add(v_o_650_, v___x_666_);
v___x_668_ = lean_nat_add(v___x_667_, v___x_665_);
lean_dec(v___x_665_);
v___x_669_ = lean_byte_array_size(v_b_649_);
v___x_670_ = lean_nat_dec_le(v___x_668_, v___x_669_);
if (v___x_670_ == 0)
{
lean_object* v___x_671_; 
lean_dec(v___x_668_);
lean_dec(v___x_667_);
lean_del_object(v___x_662_);
v___x_671_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readRaw___closed__0));
return v___x_671_;
}
else
{
lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_675_; 
v___x_672_ = l_ByteArray_extract(v_b_649_, v___x_667_, v___x_668_);
v___x_673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_673_, 0, v___x_672_);
lean_ctor_set(v___x_673_, 1, v___x_668_);
if (v_isShared_663_ == 0)
{
lean_ctor_set(v___x_662_, 0, v___x_673_);
v___x_675_ = v___x_662_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_676_; 
v_reuseFailAlloc_676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_676_, 0, v___x_673_);
v___x_675_ = v_reuseFailAlloc_676_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
return v___x_675_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readRaw___boxed(lean_object* v_b_678_, lean_object* v_o_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readRaw(v_b_678_, v_o_679_);
lean_dec(v_o_679_);
lean_dec_ref(v_b_678_);
return v_res_680_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readString(lean_object* v_b_684_, lean_object* v_o_685_){
_start:
{
lean_object* v___x_686_; 
v___x_686_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readRaw(v_b_684_, v_o_685_);
if (lean_obj_tag(v___x_686_) == 0)
{
lean_object* v_a_687_; lean_object* v___x_689_; uint8_t v_isShared_690_; uint8_t v_isSharedCheck_694_; 
v_a_687_ = lean_ctor_get(v___x_686_, 0);
v_isSharedCheck_694_ = !lean_is_exclusive(v___x_686_);
if (v_isSharedCheck_694_ == 0)
{
v___x_689_ = v___x_686_;
v_isShared_690_ = v_isSharedCheck_694_;
goto v_resetjp_688_;
}
else
{
lean_inc(v_a_687_);
lean_dec(v___x_686_);
v___x_689_ = lean_box(0);
v_isShared_690_ = v_isSharedCheck_694_;
goto v_resetjp_688_;
}
v_resetjp_688_:
{
lean_object* v___x_692_; 
if (v_isShared_690_ == 0)
{
v___x_692_ = v___x_689_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v_a_687_);
v___x_692_ = v_reuseFailAlloc_693_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
return v___x_692_;
}
}
}
else
{
lean_object* v_a_695_; lean_object* v___x_697_; uint8_t v_isShared_698_; uint8_t v_isSharedCheck_714_; 
v_a_695_ = lean_ctor_get(v___x_686_, 0);
v_isSharedCheck_714_ = !lean_is_exclusive(v___x_686_);
if (v_isSharedCheck_714_ == 0)
{
v___x_697_ = v___x_686_;
v_isShared_698_ = v_isSharedCheck_714_;
goto v_resetjp_696_;
}
else
{
lean_inc(v_a_695_);
lean_dec(v___x_686_);
v___x_697_ = lean_box(0);
v_isShared_698_ = v_isSharedCheck_714_;
goto v_resetjp_696_;
}
v_resetjp_696_:
{
lean_object* v_fst_699_; lean_object* v_snd_700_; lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_713_; 
v_fst_699_ = lean_ctor_get(v_a_695_, 0);
v_snd_700_ = lean_ctor_get(v_a_695_, 1);
v_isSharedCheck_713_ = !lean_is_exclusive(v_a_695_);
if (v_isSharedCheck_713_ == 0)
{
v___x_702_ = v_a_695_;
v_isShared_703_ = v_isSharedCheck_713_;
goto v_resetjp_701_;
}
else
{
lean_inc(v_snd_700_);
lean_inc(v_fst_699_);
lean_dec(v_a_695_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_713_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
uint8_t v___x_704_; 
v___x_704_ = lean_string_validate_utf8(v_fst_699_);
if (v___x_704_ == 0)
{
lean_object* v___x_705_; 
lean_del_object(v___x_702_);
lean_dec(v_snd_700_);
lean_dec(v_fst_699_);
lean_del_object(v___x_697_);
v___x_705_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readString___closed__1));
return v___x_705_;
}
else
{
lean_object* v___x_706_; lean_object* v___x_708_; 
v___x_706_ = lean_string_from_utf8_unchecked(v_fst_699_);
if (v_isShared_703_ == 0)
{
lean_ctor_set(v___x_702_, 0, v___x_706_);
v___x_708_ = v___x_702_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_712_; 
v_reuseFailAlloc_712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_712_, 0, v___x_706_);
lean_ctor_set(v_reuseFailAlloc_712_, 1, v_snd_700_);
v___x_708_ = v_reuseFailAlloc_712_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
lean_object* v___x_710_; 
if (v_isShared_698_ == 0)
{
lean_ctor_set(v___x_697_, 0, v___x_708_);
v___x_710_ = v___x_697_;
goto v_reusejp_709_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v___x_708_);
v___x_710_ = v_reuseFailAlloc_711_;
goto v_reusejp_709_;
}
v_reusejp_709_:
{
return v___x_710_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readString___boxed(lean_object* v_b_715_, lean_object* v_o_716_){
_start:
{
lean_object* v_res_717_; 
v_res_717_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readString(v_b_715_, v_o_716_);
lean_dec(v_o_716_);
lean_dec_ref(v_b_715_);
return v_res_717_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift___redArg(lean_object* v_e_718_){
_start:
{
if (lean_obj_tag(v_e_718_) == 0)
{
lean_object* v_a_720_; lean_object* v___x_722_; uint8_t v_isShared_723_; uint8_t v_isSharedCheck_729_; 
v_a_720_ = lean_ctor_get(v_e_718_, 0);
v_isSharedCheck_729_ = !lean_is_exclusive(v_e_718_);
if (v_isSharedCheck_729_ == 0)
{
v___x_722_ = v_e_718_;
v_isShared_723_ = v_isSharedCheck_729_;
goto v_resetjp_721_;
}
else
{
lean_inc(v_a_720_);
lean_dec(v_e_718_);
v___x_722_ = lean_box(0);
v_isShared_723_ = v_isSharedCheck_729_;
goto v_resetjp_721_;
}
v_resetjp_721_:
{
lean_object* v___x_724_; lean_object* v___x_726_; 
v___x_724_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_724_, 0, v_a_720_);
if (v_isShared_723_ == 0)
{
lean_ctor_set(v___x_722_, 0, v___x_724_);
v___x_726_ = v___x_722_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_728_; 
v_reuseFailAlloc_728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_728_, 0, v___x_724_);
v___x_726_ = v_reuseFailAlloc_728_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
lean_object* v___x_727_; 
v___x_727_ = l_IO_ofExcept___at___00IO_Process_output_spec__0___redArg(v___x_726_);
return v___x_727_;
}
}
}
else
{
lean_object* v_a_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_738_; 
v_a_730_ = lean_ctor_get(v_e_718_, 0);
v_isSharedCheck_738_ = !lean_is_exclusive(v_e_718_);
if (v_isSharedCheck_738_ == 0)
{
v___x_732_ = v_e_718_;
v_isShared_733_ = v_isSharedCheck_738_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_a_730_);
lean_dec(v_e_718_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_738_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v___x_735_; 
if (v_isShared_733_ == 0)
{
v___x_735_ = v___x_732_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v_a_730_);
v___x_735_ = v_reuseFailAlloc_737_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
lean_object* v___x_736_; 
v___x_736_ = l_IO_ofExcept___at___00IO_Process_output_spec__0___redArg(v___x_735_);
return v___x_736_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift___redArg___boxed(lean_object* v_e_739_, lean_object* v_a_740_){
_start:
{
lean_object* v_res_741_; 
v_res_741_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift___redArg(v_e_739_);
return v_res_741_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift(lean_object* v_00_u03b1_742_, lean_object* v_e_743_){
_start:
{
lean_object* v___x_745_; 
v___x_745_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift___redArg(v_e_743_);
return v___x_745_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift___boxed(lean_object* v_00_u03b1_746_, lean_object* v_e_747_, lean_object* v_a_748_){
_start:
{
lean_object* v_res_749_; 
v_res_749_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift(v_00_u03b1_746_, v_e_747_);
return v_res_749_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__0___redArg(lean_object* v_b_752_, lean_object* v_range_753_, lean_object* v_b_754_, lean_object* v_i_755_){
_start:
{
lean_object* v_stop_757_; lean_object* v_step_758_; uint8_t v___x_759_; 
v_stop_757_ = lean_ctor_get(v_range_753_, 1);
v_step_758_ = lean_ctor_get(v_range_753_, 2);
v___x_759_ = lean_nat_dec_lt(v_i_755_, v_stop_757_);
if (v___x_759_ == 0)
{
lean_object* v___x_760_; 
lean_dec(v_i_755_);
v___x_760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_760_, 0, v_b_754_);
return v___x_760_;
}
else
{
lean_object* v_fst_761_; lean_object* v_snd_762_; lean_object* v___x_763_; lean_object* v___x_764_; 
v_fst_761_ = lean_ctor_get(v_b_754_, 0);
lean_inc(v_fst_761_);
v_snd_762_ = lean_ctor_get(v_b_754_, 1);
lean_inc(v_snd_762_);
lean_dec_ref(v_b_754_);
v___x_763_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readString(v_b_752_, v_fst_761_);
lean_dec(v_fst_761_);
v___x_764_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift___redArg(v___x_763_);
if (lean_obj_tag(v___x_764_) == 0)
{
lean_object* v_a_765_; lean_object* v_fst_766_; lean_object* v_snd_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_796_; 
v_a_765_ = lean_ctor_get(v___x_764_, 0);
lean_inc(v_a_765_);
lean_dec_ref_known(v___x_764_, 1);
v_fst_766_ = lean_ctor_get(v_a_765_, 0);
v_snd_767_ = lean_ctor_get(v_a_765_, 1);
v_isSharedCheck_796_ = !lean_is_exclusive(v_a_765_);
if (v_isSharedCheck_796_ == 0)
{
v___x_769_ = v_a_765_;
v_isShared_770_ = v_isSharedCheck_796_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_snd_767_);
lean_inc(v_fst_766_);
lean_dec(v_a_765_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_796_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v___x_771_; 
v___x_771_ = l_Lasm_JS_Wire_read(v_b_752_, v_snd_767_);
lean_dec(v_snd_767_);
if (lean_obj_tag(v___x_771_) == 0)
{
lean_object* v_a_772_; lean_object* v_fst_773_; lean_object* v_snd_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_787_; 
v_a_772_ = lean_ctor_get(v___x_771_, 0);
lean_inc(v_a_772_);
lean_dec_ref_known(v___x_771_, 1);
v_fst_773_ = lean_ctor_get(v_a_772_, 0);
v_snd_774_ = lean_ctor_get(v_a_772_, 1);
v_isSharedCheck_787_ = !lean_is_exclusive(v_a_772_);
if (v_isSharedCheck_787_ == 0)
{
v___x_776_ = v_a_772_;
v_isShared_777_ = v_isSharedCheck_787_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_snd_774_);
lean_inc(v_fst_773_);
lean_dec(v_a_772_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_787_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
lean_object* v___x_779_; 
if (v_isShared_777_ == 0)
{
lean_ctor_set(v___x_776_, 1, v_fst_773_);
lean_ctor_set(v___x_776_, 0, v_fst_766_);
v___x_779_ = v___x_776_;
goto v_reusejp_778_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v_fst_766_);
lean_ctor_set(v_reuseFailAlloc_786_, 1, v_fst_773_);
v___x_779_ = v_reuseFailAlloc_786_;
goto v_reusejp_778_;
}
v_reusejp_778_:
{
lean_object* v___x_780_; lean_object* v___x_782_; 
v___x_780_ = lean_array_push(v_snd_762_, v___x_779_);
if (v_isShared_770_ == 0)
{
lean_ctor_set(v___x_769_, 1, v___x_780_);
lean_ctor_set(v___x_769_, 0, v_snd_774_);
v___x_782_ = v___x_769_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v_snd_774_);
lean_ctor_set(v_reuseFailAlloc_785_, 1, v___x_780_);
v___x_782_ = v_reuseFailAlloc_785_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
lean_object* v___x_783_; 
v___x_783_ = lean_nat_add(v_i_755_, v_step_758_);
lean_dec(v_i_755_);
v_b_754_ = v___x_782_;
v_i_755_ = v___x_783_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_788_; lean_object* v___x_790_; uint8_t v_isShared_791_; uint8_t v_isSharedCheck_795_; 
lean_del_object(v___x_769_);
lean_dec(v_fst_766_);
lean_dec(v_snd_762_);
lean_dec(v_i_755_);
v_a_788_ = lean_ctor_get(v___x_771_, 0);
v_isSharedCheck_795_ = !lean_is_exclusive(v___x_771_);
if (v_isSharedCheck_795_ == 0)
{
v___x_790_ = v___x_771_;
v_isShared_791_ = v_isSharedCheck_795_;
goto v_resetjp_789_;
}
else
{
lean_inc(v_a_788_);
lean_dec(v___x_771_);
v___x_790_ = lean_box(0);
v_isShared_791_ = v_isSharedCheck_795_;
goto v_resetjp_789_;
}
v_resetjp_789_:
{
lean_object* v___x_793_; 
if (v_isShared_791_ == 0)
{
v___x_793_ = v___x_790_;
goto v_reusejp_792_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v_a_788_);
v___x_793_ = v_reuseFailAlloc_794_;
goto v_reusejp_792_;
}
v_reusejp_792_:
{
return v___x_793_;
}
}
}
}
}
else
{
lean_object* v_a_797_; lean_object* v___x_799_; uint8_t v_isShared_800_; uint8_t v_isSharedCheck_804_; 
lean_dec(v_snd_762_);
lean_dec(v_i_755_);
v_a_797_ = lean_ctor_get(v___x_764_, 0);
v_isSharedCheck_804_ = !lean_is_exclusive(v___x_764_);
if (v_isSharedCheck_804_ == 0)
{
v___x_799_ = v___x_764_;
v_isShared_800_ = v_isSharedCheck_804_;
goto v_resetjp_798_;
}
else
{
lean_inc(v_a_797_);
lean_dec(v___x_764_);
v___x_799_ = lean_box(0);
v_isShared_800_ = v_isSharedCheck_804_;
goto v_resetjp_798_;
}
v_resetjp_798_:
{
lean_object* v___x_802_; 
if (v_isShared_800_ == 0)
{
v___x_802_ = v___x_799_;
goto v_reusejp_801_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v_a_797_);
v___x_802_ = v_reuseFailAlloc_803_;
goto v_reusejp_801_;
}
v_reusejp_801_:
{
return v___x_802_;
}
}
}
}
}
}
static lean_object* _init_l_Lasm_JS_Wire_read___closed__2(void){
_start:
{
lean_object* v___x_805_; lean_object* v___x_806_; 
v___x_805_ = lean_unsigned_to_nat(0u);
v___x_806_ = lean_nat_to_int(v___x_805_);
return v___x_806_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_read(lean_object* v_b_809_, lean_object* v_o_810_){
_start:
{
lean_object* v___y_813_; lean_object* v___y_814_; lean_object* v___x_818_; uint8_t v___x_819_; 
v___x_818_ = lean_byte_array_size(v_b_809_);
v___x_819_ = lean_nat_dec_le(v___x_818_, v_o_810_);
if (v___x_819_ == 0)
{
lean_object* v___x_820_; lean_object* v_o_x27_821_; uint8_t v___y_823_; uint8_t v___x_1109_; 
v___x_820_ = lean_unsigned_to_nat(1u);
v_o_x27_821_ = lean_nat_add(v_o_810_, v___x_820_);
v___x_1109_ = lean_nat_dec_lt(v_o_810_, v___x_818_);
if (v___x_1109_ == 0)
{
uint8_t v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; uint8_t v___x_1113_; 
v___x_1110_ = 0;
v___x_1111_ = lean_box(v___x_1110_);
v___x_1112_ = l_outOfBounds___redArg(v___x_1111_);
lean_dec(v___x_1111_);
v___x_1113_ = lean_unbox(v___x_1112_);
lean_dec(v___x_1112_);
v___y_823_ = v___x_1113_;
goto v___jp_822_;
}
else
{
uint8_t v___x_1114_; 
v___x_1114_ = lean_byte_array_fget(v_b_809_, v_o_810_);
v___y_823_ = v___x_1114_;
goto v___jp_822_;
}
v___jp_822_:
{
uint8_t v___x_824_; uint8_t v___x_825_; 
v___x_824_ = 0;
v___x_825_ = lean_uint8_dec_eq(v___y_823_, v___x_824_);
if (v___x_825_ == 0)
{
uint8_t v___x_826_; uint8_t v___x_827_; 
v___x_826_ = 1;
v___x_827_ = lean_uint8_dec_eq(v___y_823_, v___x_826_);
if (v___x_827_ == 0)
{
uint8_t v___x_828_; uint8_t v___x_829_; 
v___x_828_ = 2;
v___x_829_ = lean_uint8_dec_eq(v___y_823_, v___x_828_);
if (v___x_829_ == 0)
{
uint8_t v___x_830_; uint8_t v___x_831_; 
v___x_830_ = 3;
v___x_831_ = lean_uint8_dec_eq(v___y_823_, v___x_830_);
if (v___x_831_ == 0)
{
uint8_t v___x_832_; uint8_t v___x_833_; 
v___x_832_ = 4;
v___x_833_ = lean_uint8_dec_eq(v___y_823_, v___x_832_);
if (v___x_833_ == 0)
{
uint8_t v___x_834_; uint8_t v___x_835_; 
v___x_834_ = 5;
v___x_835_ = lean_uint8_dec_eq(v___y_823_, v___x_834_);
if (v___x_835_ == 0)
{
uint8_t v___x_836_; uint8_t v___x_837_; 
v___x_836_ = 6;
v___x_837_ = lean_uint8_dec_eq(v___y_823_, v___x_836_);
if (v___x_837_ == 0)
{
uint8_t v___x_838_; uint8_t v___x_839_; 
v___x_838_ = 7;
v___x_839_ = lean_uint8_dec_eq(v___y_823_, v___x_838_);
if (v___x_839_ == 0)
{
uint8_t v___x_840_; uint8_t v___x_841_; 
v___x_840_ = 8;
v___x_841_ = lean_uint8_dec_eq(v___y_823_, v___x_840_);
if (v___x_841_ == 0)
{
uint8_t v___x_842_; uint8_t v___x_843_; 
v___x_842_ = 9;
v___x_843_ = lean_uint8_dec_eq(v___y_823_, v___x_842_);
if (v___x_843_ == 0)
{
uint8_t v___x_844_; uint8_t v___x_845_; 
v___x_844_ = 10;
v___x_845_ = lean_uint8_dec_eq(v___y_823_, v___x_844_);
if (v___x_845_ == 0)
{
lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; 
lean_dec(v_o_x27_821_);
v___x_846_ = ((lean_object*)(l_Lasm_JS_Wire_read___closed__0));
v___x_847_ = lean_uint8_to_nat(v___y_823_);
v___x_848_ = l_Nat_reprFast(v___x_847_);
v___x_849_ = lean_string_append(v___x_846_, v___x_848_);
lean_dec_ref(v___x_848_);
v___x_850_ = ((lean_object*)(l_Lasm_JS_Wire_read___closed__1));
v___x_851_ = lean_string_append(v___x_849_, v___x_850_);
v___x_852_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_852_, 0, v___x_851_);
v___x_853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_853_, 0, v___x_852_);
return v___x_853_;
}
else
{
lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_854_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32(v_b_809_, v_o_x27_821_);
v___x_855_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift___redArg(v___x_854_);
if (lean_obj_tag(v___x_855_) == 0)
{
lean_object* v_a_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; 
v_a_856_ = lean_ctor_get(v___x_855_, 0);
lean_inc(v_a_856_);
lean_dec_ref_known(v___x_855_, 1);
v___x_857_ = lean_unsigned_to_nat(4u);
v___x_858_ = lean_nat_add(v_o_x27_821_, v___x_857_);
lean_dec(v_o_x27_821_);
v___x_859_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readString(v_b_809_, v___x_858_);
lean_dec(v___x_858_);
v___x_860_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift___redArg(v___x_859_);
if (lean_obj_tag(v___x_860_) == 0)
{
lean_object* v_a_861_; lean_object* v_fst_862_; lean_object* v_snd_863_; lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_889_; 
v_a_861_ = lean_ctor_get(v___x_860_, 0);
lean_inc(v_a_861_);
lean_dec_ref_known(v___x_860_, 1);
v_fst_862_ = lean_ctor_get(v_a_861_, 0);
v_snd_863_ = lean_ctor_get(v_a_861_, 1);
v_isSharedCheck_889_ = !lean_is_exclusive(v_a_861_);
if (v_isSharedCheck_889_ == 0)
{
v___x_865_ = v_a_861_;
v_isShared_866_ = v_isSharedCheck_889_;
goto v_resetjp_864_;
}
else
{
lean_inc(v_snd_863_);
lean_inc(v_fst_862_);
lean_dec(v_a_861_);
v___x_865_ = lean_box(0);
v_isShared_866_ = v_isSharedCheck_889_;
goto v_resetjp_864_;
}
v_resetjp_864_:
{
uint32_t v___x_867_; lean_object* v___x_868_; 
v___x_867_ = lean_unbox_uint32(v_a_856_);
lean_dec(v_a_856_);
v___x_868_ = lasm_js_value_of_handle(v___x_867_);
if (lean_obj_tag(v___x_868_) == 0)
{
lean_object* v_a_869_; lean_object* v___x_871_; uint8_t v_isShared_872_; uint8_t v_isSharedCheck_880_; 
v_a_869_ = lean_ctor_get(v___x_868_, 0);
v_isSharedCheck_880_ = !lean_is_exclusive(v___x_868_);
if (v_isSharedCheck_880_ == 0)
{
v___x_871_ = v___x_868_;
v_isShared_872_ = v_isSharedCheck_880_;
goto v_resetjp_870_;
}
else
{
lean_inc(v_a_869_);
lean_dec(v___x_868_);
v___x_871_ = lean_box(0);
v_isShared_872_ = v_isSharedCheck_880_;
goto v_resetjp_870_;
}
v_resetjp_870_:
{
lean_object* v___x_873_; lean_object* v___x_875_; 
v___x_873_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_873_, 0, v_a_869_);
lean_ctor_set(v___x_873_, 1, v_fst_862_);
if (v_isShared_866_ == 0)
{
lean_ctor_set(v___x_865_, 0, v___x_873_);
v___x_875_ = v___x_865_;
goto v_reusejp_874_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v___x_873_);
lean_ctor_set(v_reuseFailAlloc_879_, 1, v_snd_863_);
v___x_875_ = v_reuseFailAlloc_879_;
goto v_reusejp_874_;
}
v_reusejp_874_:
{
lean_object* v___x_877_; 
if (v_isShared_872_ == 0)
{
lean_ctor_set(v___x_871_, 0, v___x_875_);
v___x_877_ = v___x_871_;
goto v_reusejp_876_;
}
else
{
lean_object* v_reuseFailAlloc_878_; 
v_reuseFailAlloc_878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v___x_875_);
v___x_877_ = v_reuseFailAlloc_878_;
goto v_reusejp_876_;
}
v_reusejp_876_:
{
return v___x_877_;
}
}
}
}
else
{
lean_object* v_a_881_; lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_888_; 
lean_del_object(v___x_865_);
lean_dec(v_snd_863_);
lean_dec(v_fst_862_);
v_a_881_ = lean_ctor_get(v___x_868_, 0);
v_isSharedCheck_888_ = !lean_is_exclusive(v___x_868_);
if (v_isSharedCheck_888_ == 0)
{
v___x_883_ = v___x_868_;
v_isShared_884_ = v_isSharedCheck_888_;
goto v_resetjp_882_;
}
else
{
lean_inc(v_a_881_);
lean_dec(v___x_868_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_888_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
lean_object* v___x_886_; 
if (v_isShared_884_ == 0)
{
v___x_886_ = v___x_883_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v_a_881_);
v___x_886_ = v_reuseFailAlloc_887_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
return v___x_886_;
}
}
}
}
}
else
{
lean_object* v_a_890_; lean_object* v___x_892_; uint8_t v_isShared_893_; uint8_t v_isSharedCheck_897_; 
lean_dec(v_a_856_);
v_a_890_ = lean_ctor_get(v___x_860_, 0);
v_isSharedCheck_897_ = !lean_is_exclusive(v___x_860_);
if (v_isSharedCheck_897_ == 0)
{
v___x_892_ = v___x_860_;
v_isShared_893_ = v_isSharedCheck_897_;
goto v_resetjp_891_;
}
else
{
lean_inc(v_a_890_);
lean_dec(v___x_860_);
v___x_892_ = lean_box(0);
v_isShared_893_ = v_isSharedCheck_897_;
goto v_resetjp_891_;
}
v_resetjp_891_:
{
lean_object* v___x_895_; 
if (v_isShared_893_ == 0)
{
v___x_895_ = v___x_892_;
goto v_reusejp_894_;
}
else
{
lean_object* v_reuseFailAlloc_896_; 
v_reuseFailAlloc_896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_896_, 0, v_a_890_);
v___x_895_ = v_reuseFailAlloc_896_;
goto v_reusejp_894_;
}
v_reusejp_894_:
{
return v___x_895_;
}
}
}
}
else
{
lean_object* v_a_898_; lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_905_; 
lean_dec(v_o_x27_821_);
v_a_898_ = lean_ctor_get(v___x_855_, 0);
v_isSharedCheck_905_ = !lean_is_exclusive(v___x_855_);
if (v_isSharedCheck_905_ == 0)
{
v___x_900_ = v___x_855_;
v_isShared_901_ = v_isSharedCheck_905_;
goto v_resetjp_899_;
}
else
{
lean_inc(v_a_898_);
lean_dec(v___x_855_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_905_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
lean_object* v___x_903_; 
if (v_isShared_901_ == 0)
{
v___x_903_ = v___x_900_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v_a_898_);
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
}
else
{
lean_object* v___x_906_; lean_object* v___x_907_; 
v___x_906_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32(v_b_809_, v_o_x27_821_);
v___x_907_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift___redArg(v___x_906_);
if (lean_obj_tag(v___x_907_) == 0)
{
lean_object* v_a_908_; uint32_t v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; 
v_a_908_ = lean_ctor_get(v___x_907_, 0);
lean_inc(v_a_908_);
lean_dec_ref_known(v___x_907_, 1);
v___x_909_ = lean_unbox_uint32(v_a_908_);
lean_dec(v_a_908_);
v___x_910_ = lean_uint32_to_nat(v___x_909_);
v___x_911_ = lean_unsigned_to_nat(4u);
v___x_912_ = lean_nat_add(v_o_x27_821_, v___x_911_);
lean_dec(v_o_x27_821_);
v___x_913_ = lean_mk_empty_array_with_capacity(v___x_910_);
v___x_914_ = lean_unsigned_to_nat(0u);
v___x_915_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_915_, 0, v___x_914_);
lean_ctor_set(v___x_915_, 1, v___x_910_);
lean_ctor_set(v___x_915_, 2, v___x_820_);
v___x_916_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_916_, 0, v___x_912_);
lean_ctor_set(v___x_916_, 1, v___x_913_);
v___x_917_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__0___redArg(v_b_809_, v___x_915_, v___x_916_, v___x_914_);
lean_dec_ref_known(v___x_915_, 3);
if (lean_obj_tag(v___x_917_) == 0)
{
lean_object* v_a_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_935_; 
v_a_918_ = lean_ctor_get(v___x_917_, 0);
v_isSharedCheck_935_ = !lean_is_exclusive(v___x_917_);
if (v_isSharedCheck_935_ == 0)
{
v___x_920_ = v___x_917_;
v_isShared_921_ = v_isSharedCheck_935_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_a_918_);
lean_dec(v___x_917_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_935_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
lean_object* v_fst_922_; lean_object* v_snd_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_934_; 
v_fst_922_ = lean_ctor_get(v_a_918_, 0);
v_snd_923_ = lean_ctor_get(v_a_918_, 1);
v_isSharedCheck_934_ = !lean_is_exclusive(v_a_918_);
if (v_isSharedCheck_934_ == 0)
{
v___x_925_ = v_a_918_;
v_isShared_926_ = v_isSharedCheck_934_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_snd_923_);
lean_inc(v_fst_922_);
lean_dec(v_a_918_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_934_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v___x_927_; lean_object* v___x_929_; 
v___x_927_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_927_, 0, v_snd_923_);
if (v_isShared_926_ == 0)
{
lean_ctor_set(v___x_925_, 1, v_fst_922_);
lean_ctor_set(v___x_925_, 0, v___x_927_);
v___x_929_ = v___x_925_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_933_; 
v_reuseFailAlloc_933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_933_, 0, v___x_927_);
lean_ctor_set(v_reuseFailAlloc_933_, 1, v_fst_922_);
v___x_929_ = v_reuseFailAlloc_933_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
lean_object* v___x_931_; 
if (v_isShared_921_ == 0)
{
lean_ctor_set(v___x_920_, 0, v___x_929_);
v___x_931_ = v___x_920_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v___x_929_);
v___x_931_ = v_reuseFailAlloc_932_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
return v___x_931_;
}
}
}
}
}
else
{
lean_object* v_a_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_943_; 
v_a_936_ = lean_ctor_get(v___x_917_, 0);
v_isSharedCheck_943_ = !lean_is_exclusive(v___x_917_);
if (v_isSharedCheck_943_ == 0)
{
v___x_938_ = v___x_917_;
v_isShared_939_ = v_isSharedCheck_943_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_a_936_);
lean_dec(v___x_917_);
v___x_938_ = lean_box(0);
v_isShared_939_ = v_isSharedCheck_943_;
goto v_resetjp_937_;
}
v_resetjp_937_:
{
lean_object* v___x_941_; 
if (v_isShared_939_ == 0)
{
v___x_941_ = v___x_938_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_942_; 
v_reuseFailAlloc_942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_942_, 0, v_a_936_);
v___x_941_ = v_reuseFailAlloc_942_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
return v___x_941_;
}
}
}
}
else
{
lean_object* v_a_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_951_; 
lean_dec(v_o_x27_821_);
v_a_944_ = lean_ctor_get(v___x_907_, 0);
v_isSharedCheck_951_ = !lean_is_exclusive(v___x_907_);
if (v_isSharedCheck_951_ == 0)
{
v___x_946_ = v___x_907_;
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_a_944_);
lean_dec(v___x_907_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v___x_949_; 
if (v_isShared_947_ == 0)
{
v___x_949_ = v___x_946_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_950_; 
v_reuseFailAlloc_950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_950_, 0, v_a_944_);
v___x_949_ = v_reuseFailAlloc_950_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
return v___x_949_;
}
}
}
}
}
else
{
lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_952_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU32(v_b_809_, v_o_x27_821_);
v___x_953_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift___redArg(v___x_952_);
if (lean_obj_tag(v___x_953_) == 0)
{
lean_object* v_a_954_; uint32_t v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; 
v_a_954_ = lean_ctor_get(v___x_953_, 0);
lean_inc(v_a_954_);
lean_dec_ref_known(v___x_953_, 1);
v___x_955_ = lean_unbox_uint32(v_a_954_);
lean_dec(v_a_954_);
v___x_956_ = lean_uint32_to_nat(v___x_955_);
v___x_957_ = lean_unsigned_to_nat(4u);
v___x_958_ = lean_nat_add(v_o_x27_821_, v___x_957_);
lean_dec(v_o_x27_821_);
v___x_959_ = lean_mk_empty_array_with_capacity(v___x_956_);
v___x_960_ = lean_unsigned_to_nat(0u);
v___x_961_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_961_, 0, v___x_960_);
lean_ctor_set(v___x_961_, 1, v___x_956_);
lean_ctor_set(v___x_961_, 2, v___x_820_);
v___x_962_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_962_, 0, v___x_958_);
lean_ctor_set(v___x_962_, 1, v___x_959_);
v___x_963_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__1___redArg(v_b_809_, v___x_961_, v___x_962_, v___x_960_);
lean_dec_ref_known(v___x_961_, 3);
if (lean_obj_tag(v___x_963_) == 0)
{
lean_object* v_a_964_; lean_object* v___x_966_; uint8_t v_isShared_967_; uint8_t v_isSharedCheck_981_; 
v_a_964_ = lean_ctor_get(v___x_963_, 0);
v_isSharedCheck_981_ = !lean_is_exclusive(v___x_963_);
if (v_isSharedCheck_981_ == 0)
{
v___x_966_ = v___x_963_;
v_isShared_967_ = v_isSharedCheck_981_;
goto v_resetjp_965_;
}
else
{
lean_inc(v_a_964_);
lean_dec(v___x_963_);
v___x_966_ = lean_box(0);
v_isShared_967_ = v_isSharedCheck_981_;
goto v_resetjp_965_;
}
v_resetjp_965_:
{
lean_object* v_fst_968_; lean_object* v_snd_969_; lean_object* v___x_971_; uint8_t v_isShared_972_; uint8_t v_isSharedCheck_980_; 
v_fst_968_ = lean_ctor_get(v_a_964_, 0);
v_snd_969_ = lean_ctor_get(v_a_964_, 1);
v_isSharedCheck_980_ = !lean_is_exclusive(v_a_964_);
if (v_isSharedCheck_980_ == 0)
{
v___x_971_ = v_a_964_;
v_isShared_972_ = v_isSharedCheck_980_;
goto v_resetjp_970_;
}
else
{
lean_inc(v_snd_969_);
lean_inc(v_fst_968_);
lean_dec(v_a_964_);
v___x_971_ = lean_box(0);
v_isShared_972_ = v_isSharedCheck_980_;
goto v_resetjp_970_;
}
v_resetjp_970_:
{
lean_object* v___x_973_; lean_object* v___x_975_; 
v___x_973_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_973_, 0, v_snd_969_);
if (v_isShared_972_ == 0)
{
lean_ctor_set(v___x_971_, 1, v_fst_968_);
lean_ctor_set(v___x_971_, 0, v___x_973_);
v___x_975_ = v___x_971_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v___x_973_);
lean_ctor_set(v_reuseFailAlloc_979_, 1, v_fst_968_);
v___x_975_ = v_reuseFailAlloc_979_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
lean_object* v___x_977_; 
if (v_isShared_967_ == 0)
{
lean_ctor_set(v___x_966_, 0, v___x_975_);
v___x_977_ = v___x_966_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_978_; 
v_reuseFailAlloc_978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_978_, 0, v___x_975_);
v___x_977_ = v_reuseFailAlloc_978_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
return v___x_977_;
}
}
}
}
}
else
{
lean_object* v_a_982_; lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_989_; 
v_a_982_ = lean_ctor_get(v___x_963_, 0);
v_isSharedCheck_989_ = !lean_is_exclusive(v___x_963_);
if (v_isSharedCheck_989_ == 0)
{
v___x_984_ = v___x_963_;
v_isShared_985_ = v_isSharedCheck_989_;
goto v_resetjp_983_;
}
else
{
lean_inc(v_a_982_);
lean_dec(v___x_963_);
v___x_984_ = lean_box(0);
v_isShared_985_ = v_isSharedCheck_989_;
goto v_resetjp_983_;
}
v_resetjp_983_:
{
lean_object* v___x_987_; 
if (v_isShared_985_ == 0)
{
v___x_987_ = v___x_984_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_988_; 
v_reuseFailAlloc_988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_988_, 0, v_a_982_);
v___x_987_ = v_reuseFailAlloc_988_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
return v___x_987_;
}
}
}
}
else
{
lean_object* v_a_990_; lean_object* v___x_992_; uint8_t v_isShared_993_; uint8_t v_isSharedCheck_997_; 
lean_dec(v_o_x27_821_);
v_a_990_ = lean_ctor_get(v___x_953_, 0);
v_isSharedCheck_997_ = !lean_is_exclusive(v___x_953_);
if (v_isSharedCheck_997_ == 0)
{
v___x_992_ = v___x_953_;
v_isShared_993_ = v_isSharedCheck_997_;
goto v_resetjp_991_;
}
else
{
lean_inc(v_a_990_);
lean_dec(v___x_953_);
v___x_992_ = lean_box(0);
v_isShared_993_ = v_isSharedCheck_997_;
goto v_resetjp_991_;
}
v_resetjp_991_:
{
lean_object* v___x_995_; 
if (v_isShared_993_ == 0)
{
v___x_995_ = v___x_992_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v_a_990_);
v___x_995_ = v_reuseFailAlloc_996_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
return v___x_995_;
}
}
}
}
}
else
{
lean_object* v___x_998_; lean_object* v___x_999_; 
v___x_998_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readRaw(v_b_809_, v_o_x27_821_);
lean_dec(v_o_x27_821_);
v___x_999_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift___redArg(v___x_998_);
if (lean_obj_tag(v___x_999_) == 0)
{
lean_object* v_a_1000_; lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1017_; 
v_a_1000_ = lean_ctor_get(v___x_999_, 0);
v_isSharedCheck_1017_ = !lean_is_exclusive(v___x_999_);
if (v_isSharedCheck_1017_ == 0)
{
v___x_1002_ = v___x_999_;
v_isShared_1003_ = v_isSharedCheck_1017_;
goto v_resetjp_1001_;
}
else
{
lean_inc(v_a_1000_);
lean_dec(v___x_999_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1017_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
lean_object* v_fst_1004_; lean_object* v_snd_1005_; lean_object* v___x_1007_; uint8_t v_isShared_1008_; uint8_t v_isSharedCheck_1016_; 
v_fst_1004_ = lean_ctor_get(v_a_1000_, 0);
v_snd_1005_ = lean_ctor_get(v_a_1000_, 1);
v_isSharedCheck_1016_ = !lean_is_exclusive(v_a_1000_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_1007_ = v_a_1000_;
v_isShared_1008_ = v_isSharedCheck_1016_;
goto v_resetjp_1006_;
}
else
{
lean_inc(v_snd_1005_);
lean_inc(v_fst_1004_);
lean_dec(v_a_1000_);
v___x_1007_ = lean_box(0);
v_isShared_1008_ = v_isSharedCheck_1016_;
goto v_resetjp_1006_;
}
v_resetjp_1006_:
{
lean_object* v___x_1009_; lean_object* v___x_1011_; 
v___x_1009_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_1009_, 0, v_fst_1004_);
if (v_isShared_1008_ == 0)
{
lean_ctor_set(v___x_1007_, 0, v___x_1009_);
v___x_1011_ = v___x_1007_;
goto v_reusejp_1010_;
}
else
{
lean_object* v_reuseFailAlloc_1015_; 
v_reuseFailAlloc_1015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1015_, 0, v___x_1009_);
lean_ctor_set(v_reuseFailAlloc_1015_, 1, v_snd_1005_);
v___x_1011_ = v_reuseFailAlloc_1015_;
goto v_reusejp_1010_;
}
v_reusejp_1010_:
{
lean_object* v___x_1013_; 
if (v_isShared_1003_ == 0)
{
lean_ctor_set(v___x_1002_, 0, v___x_1011_);
v___x_1013_ = v___x_1002_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v___x_1011_);
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
}
else
{
lean_object* v_a_1018_; lean_object* v___x_1020_; uint8_t v_isShared_1021_; uint8_t v_isSharedCheck_1025_; 
v_a_1018_ = lean_ctor_get(v___x_999_, 0);
v_isSharedCheck_1025_ = !lean_is_exclusive(v___x_999_);
if (v_isSharedCheck_1025_ == 0)
{
v___x_1020_ = v___x_999_;
v_isShared_1021_ = v_isSharedCheck_1025_;
goto v_resetjp_1019_;
}
else
{
lean_inc(v_a_1018_);
lean_dec(v___x_999_);
v___x_1020_ = lean_box(0);
v_isShared_1021_ = v_isSharedCheck_1025_;
goto v_resetjp_1019_;
}
v_resetjp_1019_:
{
lean_object* v___x_1023_; 
if (v_isShared_1021_ == 0)
{
v___x_1023_ = v___x_1020_;
goto v_reusejp_1022_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v_a_1018_);
v___x_1023_ = v_reuseFailAlloc_1024_;
goto v_reusejp_1022_;
}
v_reusejp_1022_:
{
return v___x_1023_;
}
}
}
}
}
else
{
lean_object* v___x_1026_; lean_object* v___x_1027_; 
v___x_1026_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readString(v_b_809_, v_o_x27_821_);
lean_dec(v_o_x27_821_);
v___x_1027_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift___redArg(v___x_1026_);
if (lean_obj_tag(v___x_1027_) == 0)
{
lean_object* v_a_1028_; lean_object* v_fst_1029_; lean_object* v_snd_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; 
v_a_1028_ = lean_ctor_get(v___x_1027_, 0);
lean_inc(v_a_1028_);
lean_dec_ref_known(v___x_1027_, 1);
v_fst_1029_ = lean_ctor_get(v_a_1028_, 0);
lean_inc(v_fst_1029_);
v_snd_1030_ = lean_ctor_get(v_a_1028_, 1);
lean_inc(v_snd_1030_);
lean_dec(v_a_1028_);
v___x_1031_ = lean_unsigned_to_nat(0u);
v___x_1032_ = lean_string_utf8_byte_size(v_fst_1029_);
v___x_1033_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1033_, 0, v_fst_1029_);
lean_ctor_set(v___x_1033_, 1, v___x_1031_);
lean_ctor_set(v___x_1033_, 2, v___x_1032_);
v___x_1034_ = l_String_Slice_toInt_x3f(v___x_1033_);
if (lean_obj_tag(v___x_1034_) == 0)
{
lean_object* v___x_1035_; 
v___x_1035_ = lean_obj_once(&l_Lasm_JS_Wire_read___closed__2, &l_Lasm_JS_Wire_read___closed__2_once, _init_l_Lasm_JS_Wire_read___closed__2);
v___y_813_ = v_snd_1030_;
v___y_814_ = v___x_1035_;
goto v___jp_812_;
}
else
{
lean_object* v_val_1036_; 
v_val_1036_ = lean_ctor_get(v___x_1034_, 0);
lean_inc(v_val_1036_);
lean_dec_ref_known(v___x_1034_, 1);
v___y_813_ = v_snd_1030_;
v___y_814_ = v_val_1036_;
goto v___jp_812_;
}
}
else
{
lean_object* v_a_1037_; lean_object* v___x_1039_; uint8_t v_isShared_1040_; uint8_t v_isSharedCheck_1044_; 
v_a_1037_ = lean_ctor_get(v___x_1027_, 0);
v_isSharedCheck_1044_ = !lean_is_exclusive(v___x_1027_);
if (v_isSharedCheck_1044_ == 0)
{
v___x_1039_ = v___x_1027_;
v_isShared_1040_ = v_isSharedCheck_1044_;
goto v_resetjp_1038_;
}
else
{
lean_inc(v_a_1037_);
lean_dec(v___x_1027_);
v___x_1039_ = lean_box(0);
v_isShared_1040_ = v_isSharedCheck_1044_;
goto v_resetjp_1038_;
}
v_resetjp_1038_:
{
lean_object* v___x_1042_; 
if (v_isShared_1040_ == 0)
{
v___x_1042_ = v___x_1039_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1043_; 
v_reuseFailAlloc_1043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1043_, 0, v_a_1037_);
v___x_1042_ = v_reuseFailAlloc_1043_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
return v___x_1042_;
}
}
}
}
}
else
{
lean_object* v___x_1045_; lean_object* v___x_1046_; 
v___x_1045_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readString(v_b_809_, v_o_x27_821_);
lean_dec(v_o_x27_821_);
v___x_1046_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift___redArg(v___x_1045_);
if (lean_obj_tag(v___x_1046_) == 0)
{
lean_object* v_a_1047_; lean_object* v___x_1049_; uint8_t v_isShared_1050_; uint8_t v_isSharedCheck_1064_; 
v_a_1047_ = lean_ctor_get(v___x_1046_, 0);
v_isSharedCheck_1064_ = !lean_is_exclusive(v___x_1046_);
if (v_isSharedCheck_1064_ == 0)
{
v___x_1049_ = v___x_1046_;
v_isShared_1050_ = v_isSharedCheck_1064_;
goto v_resetjp_1048_;
}
else
{
lean_inc(v_a_1047_);
lean_dec(v___x_1046_);
v___x_1049_ = lean_box(0);
v_isShared_1050_ = v_isSharedCheck_1064_;
goto v_resetjp_1048_;
}
v_resetjp_1048_:
{
lean_object* v_fst_1051_; lean_object* v_snd_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1063_; 
v_fst_1051_ = lean_ctor_get(v_a_1047_, 0);
v_snd_1052_ = lean_ctor_get(v_a_1047_, 1);
v_isSharedCheck_1063_ = !lean_is_exclusive(v_a_1047_);
if (v_isSharedCheck_1063_ == 0)
{
v___x_1054_ = v_a_1047_;
v_isShared_1055_ = v_isSharedCheck_1063_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_snd_1052_);
lean_inc(v_fst_1051_);
lean_dec(v_a_1047_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1063_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
lean_object* v___x_1056_; lean_object* v___x_1058_; 
v___x_1056_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1056_, 0, v_fst_1051_);
if (v_isShared_1055_ == 0)
{
lean_ctor_set(v___x_1054_, 0, v___x_1056_);
v___x_1058_ = v___x_1054_;
goto v_reusejp_1057_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v___x_1056_);
lean_ctor_set(v_reuseFailAlloc_1062_, 1, v_snd_1052_);
v___x_1058_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1057_;
}
v_reusejp_1057_:
{
lean_object* v___x_1060_; 
if (v_isShared_1050_ == 0)
{
lean_ctor_set(v___x_1049_, 0, v___x_1058_);
v___x_1060_ = v___x_1049_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v___x_1058_);
v___x_1060_ = v_reuseFailAlloc_1061_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
return v___x_1060_;
}
}
}
}
}
else
{
lean_object* v_a_1065_; lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1072_; 
v_a_1065_ = lean_ctor_get(v___x_1046_, 0);
v_isSharedCheck_1072_ = !lean_is_exclusive(v___x_1046_);
if (v_isSharedCheck_1072_ == 0)
{
v___x_1067_ = v___x_1046_;
v_isShared_1068_ = v_isSharedCheck_1072_;
goto v_resetjp_1066_;
}
else
{
lean_inc(v_a_1065_);
lean_dec(v___x_1046_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1072_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
lean_object* v___x_1070_; 
if (v_isShared_1068_ == 0)
{
v___x_1070_ = v___x_1067_;
goto v_reusejp_1069_;
}
else
{
lean_object* v_reuseFailAlloc_1071_; 
v_reuseFailAlloc_1071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1071_, 0, v_a_1065_);
v___x_1070_ = v_reuseFailAlloc_1071_;
goto v_reusejp_1069_;
}
v_reusejp_1069_:
{
return v___x_1070_;
}
}
}
}
}
else
{
lean_object* v___x_1073_; lean_object* v___x_1074_; 
v___x_1073_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_readU64(v_b_809_, v_o_x27_821_);
v___x_1074_ = l___private_Lasm_JS_Core_0__Lasm_JS_Wire_lift___redArg(v___x_1073_);
if (lean_obj_tag(v___x_1074_) == 0)
{
lean_object* v_a_1075_; lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1088_; 
v_a_1075_ = lean_ctor_get(v___x_1074_, 0);
v_isSharedCheck_1088_ = !lean_is_exclusive(v___x_1074_);
if (v_isSharedCheck_1088_ == 0)
{
v___x_1077_ = v___x_1074_;
v_isShared_1078_ = v_isSharedCheck_1088_;
goto v_resetjp_1076_;
}
else
{
lean_inc(v_a_1075_);
lean_dec(v___x_1074_);
v___x_1077_ = lean_box(0);
v_isShared_1078_ = v_isSharedCheck_1088_;
goto v_resetjp_1076_;
}
v_resetjp_1076_:
{
uint64_t v___x_1079_; double v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1086_; 
v___x_1079_ = lean_unbox_uint64(v_a_1075_);
lean_dec(v_a_1075_);
v___x_1080_ = lean_float_of_bits(v___x_1079_);
v___x_1081_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1081_, 0, v___x_1080_);
v___x_1082_ = lean_unsigned_to_nat(8u);
v___x_1083_ = lean_nat_add(v_o_x27_821_, v___x_1082_);
lean_dec(v_o_x27_821_);
v___x_1084_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1084_, 0, v___x_1081_);
lean_ctor_set(v___x_1084_, 1, v___x_1083_);
if (v_isShared_1078_ == 0)
{
lean_ctor_set(v___x_1077_, 0, v___x_1084_);
v___x_1086_ = v___x_1077_;
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
else
{
lean_object* v_a_1089_; lean_object* v___x_1091_; uint8_t v_isShared_1092_; uint8_t v_isSharedCheck_1096_; 
lean_dec(v_o_x27_821_);
v_a_1089_ = lean_ctor_get(v___x_1074_, 0);
v_isSharedCheck_1096_ = !lean_is_exclusive(v___x_1074_);
if (v_isSharedCheck_1096_ == 0)
{
v___x_1091_ = v___x_1074_;
v_isShared_1092_ = v_isSharedCheck_1096_;
goto v_resetjp_1090_;
}
else
{
lean_inc(v_a_1089_);
lean_dec(v___x_1074_);
v___x_1091_ = lean_box(0);
v_isShared_1092_ = v_isSharedCheck_1096_;
goto v_resetjp_1090_;
}
v_resetjp_1090_:
{
lean_object* v___x_1094_; 
if (v_isShared_1092_ == 0)
{
v___x_1094_ = v___x_1091_;
goto v_reusejp_1093_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v_a_1089_);
v___x_1094_ = v_reuseFailAlloc_1095_;
goto v_reusejp_1093_;
}
v_reusejp_1093_:
{
return v___x_1094_;
}
}
}
}
}
else
{
lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; 
v___x_1097_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1097_, 0, v___x_831_);
v___x_1098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1098_, 0, v___x_1097_);
lean_ctor_set(v___x_1098_, 1, v_o_x27_821_);
v___x_1099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1099_, 0, v___x_1098_);
return v___x_1099_;
}
}
else
{
lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; 
v___x_1100_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1100_, 0, v___x_819_);
v___x_1101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1101_, 0, v___x_1100_);
lean_ctor_set(v___x_1101_, 1, v_o_x27_821_);
v___x_1102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1101_);
return v___x_1102_;
}
}
else
{
lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; 
v___x_1103_ = lean_box(1);
v___x_1104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1104_, 0, v___x_1103_);
lean_ctor_set(v___x_1104_, 1, v_o_x27_821_);
v___x_1105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1105_, 0, v___x_1104_);
return v___x_1105_;
}
}
else
{
lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; 
v___x_1106_ = lean_box(0);
v___x_1107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1107_, 0, v___x_1106_);
lean_ctor_set(v___x_1107_, 1, v_o_x27_821_);
v___x_1108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1108_, 0, v___x_1107_);
return v___x_1108_;
}
}
}
else
{
lean_object* v___x_1115_; lean_object* v___x_1116_; 
v___x_1115_ = ((lean_object*)(l_Lasm_JS_Wire_read___closed__3));
v___x_1116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1116_, 0, v___x_1115_);
return v___x_1116_;
}
v___jp_812_:
{
lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; 
v___x_815_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_815_, 0, v___y_814_);
v___x_816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_816_, 0, v___x_815_);
lean_ctor_set(v___x_816_, 1, v___y_813_);
v___x_817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_817_, 0, v___x_816_);
return v___x_817_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__1___redArg(lean_object* v_b_1117_, lean_object* v_range_1118_, lean_object* v_b_1119_, lean_object* v_i_1120_){
_start:
{
lean_object* v_stop_1122_; lean_object* v_step_1123_; uint8_t v___x_1124_; 
v_stop_1122_ = lean_ctor_get(v_range_1118_, 1);
v_step_1123_ = lean_ctor_get(v_range_1118_, 2);
v___x_1124_ = lean_nat_dec_lt(v_i_1120_, v_stop_1122_);
if (v___x_1124_ == 0)
{
lean_object* v___x_1125_; 
lean_dec(v_i_1120_);
v___x_1125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1125_, 0, v_b_1119_);
return v___x_1125_;
}
else
{
lean_object* v_fst_1126_; lean_object* v_snd_1127_; lean_object* v___x_1128_; 
v_fst_1126_ = lean_ctor_get(v_b_1119_, 0);
lean_inc(v_fst_1126_);
v_snd_1127_ = lean_ctor_get(v_b_1119_, 1);
lean_inc(v_snd_1127_);
lean_dec_ref(v_b_1119_);
v___x_1128_ = l_Lasm_JS_Wire_read(v_b_1117_, v_fst_1126_);
lean_dec(v_fst_1126_);
if (lean_obj_tag(v___x_1128_) == 0)
{
lean_object* v_a_1129_; lean_object* v_fst_1130_; lean_object* v_snd_1131_; lean_object* v___x_1133_; uint8_t v_isShared_1134_; uint8_t v_isSharedCheck_1141_; 
v_a_1129_ = lean_ctor_get(v___x_1128_, 0);
lean_inc(v_a_1129_);
lean_dec_ref_known(v___x_1128_, 1);
v_fst_1130_ = lean_ctor_get(v_a_1129_, 0);
v_snd_1131_ = lean_ctor_get(v_a_1129_, 1);
v_isSharedCheck_1141_ = !lean_is_exclusive(v_a_1129_);
if (v_isSharedCheck_1141_ == 0)
{
v___x_1133_ = v_a_1129_;
v_isShared_1134_ = v_isSharedCheck_1141_;
goto v_resetjp_1132_;
}
else
{
lean_inc(v_snd_1131_);
lean_inc(v_fst_1130_);
lean_dec(v_a_1129_);
v___x_1133_ = lean_box(0);
v_isShared_1134_ = v_isSharedCheck_1141_;
goto v_resetjp_1132_;
}
v_resetjp_1132_:
{
lean_object* v___x_1135_; lean_object* v___x_1137_; 
v___x_1135_ = lean_array_push(v_snd_1127_, v_fst_1130_);
if (v_isShared_1134_ == 0)
{
lean_ctor_set(v___x_1133_, 1, v___x_1135_);
lean_ctor_set(v___x_1133_, 0, v_snd_1131_);
v___x_1137_ = v___x_1133_;
goto v_reusejp_1136_;
}
else
{
lean_object* v_reuseFailAlloc_1140_; 
v_reuseFailAlloc_1140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1140_, 0, v_snd_1131_);
lean_ctor_set(v_reuseFailAlloc_1140_, 1, v___x_1135_);
v___x_1137_ = v_reuseFailAlloc_1140_;
goto v_reusejp_1136_;
}
v_reusejp_1136_:
{
lean_object* v___x_1138_; 
v___x_1138_ = lean_nat_add(v_i_1120_, v_step_1123_);
lean_dec(v_i_1120_);
v_b_1119_ = v___x_1137_;
v_i_1120_ = v___x_1138_;
goto _start;
}
}
}
else
{
lean_object* v_a_1142_; lean_object* v___x_1144_; uint8_t v_isShared_1145_; uint8_t v_isSharedCheck_1149_; 
lean_dec(v_snd_1127_);
lean_dec(v_i_1120_);
v_a_1142_ = lean_ctor_get(v___x_1128_, 0);
v_isSharedCheck_1149_ = !lean_is_exclusive(v___x_1128_);
if (v_isSharedCheck_1149_ == 0)
{
v___x_1144_ = v___x_1128_;
v_isShared_1145_ = v_isSharedCheck_1149_;
goto v_resetjp_1143_;
}
else
{
lean_inc(v_a_1142_);
lean_dec(v___x_1128_);
v___x_1144_ = lean_box(0);
v_isShared_1145_ = v_isSharedCheck_1149_;
goto v_resetjp_1143_;
}
v_resetjp_1143_:
{
lean_object* v___x_1147_; 
if (v_isShared_1145_ == 0)
{
v___x_1147_ = v___x_1144_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1148_; 
v_reuseFailAlloc_1148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1148_, 0, v_a_1142_);
v___x_1147_ = v_reuseFailAlloc_1148_;
goto v_reusejp_1146_;
}
v_reusejp_1146_:
{
return v___x_1147_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__1___redArg___boxed(lean_object* v_b_1150_, lean_object* v_range_1151_, lean_object* v_b_1152_, lean_object* v_i_1153_, lean_object* v___y_1154_){
_start:
{
lean_object* v_res_1155_; 
v_res_1155_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__1___redArg(v_b_1150_, v_range_1151_, v_b_1152_, v_i_1153_);
lean_dec_ref(v_range_1151_);
lean_dec_ref(v_b_1150_);
return v_res_1155_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__0___redArg___boxed(lean_object* v_b_1156_, lean_object* v_range_1157_, lean_object* v_b_1158_, lean_object* v_i_1159_, lean_object* v___y_1160_){
_start:
{
lean_object* v_res_1161_; 
v_res_1161_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__0___redArg(v_b_1156_, v_range_1157_, v_b_1158_, v_i_1159_);
lean_dec_ref(v_range_1157_);
lean_dec_ref(v_b_1156_);
return v_res_1161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_read___boxed(lean_object* v_b_1162_, lean_object* v_o_1163_, lean_object* v_a_1164_){
_start:
{
lean_object* v_res_1165_; 
v_res_1165_ = l_Lasm_JS_Wire_read(v_b_1162_, v_o_1163_);
lean_dec(v_o_1163_);
lean_dec_ref(v_b_1162_);
return v_res_1165_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__0(lean_object* v_b_1166_, lean_object* v_range_1167_, lean_object* v_b_1168_, lean_object* v_i_1169_, lean_object* v_hs_1170_, lean_object* v_hl_1171_){
_start:
{
lean_object* v___x_1173_; 
v___x_1173_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__0___redArg(v_b_1166_, v_range_1167_, v_b_1168_, v_i_1169_);
return v___x_1173_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__0___boxed(lean_object* v_b_1174_, lean_object* v_range_1175_, lean_object* v_b_1176_, lean_object* v_i_1177_, lean_object* v_hs_1178_, lean_object* v_hl_1179_, lean_object* v___y_1180_){
_start:
{
lean_object* v_res_1181_; 
v_res_1181_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__0(v_b_1174_, v_range_1175_, v_b_1176_, v_i_1177_, v_hs_1178_, v_hl_1179_);
lean_dec_ref(v_range_1175_);
lean_dec_ref(v_b_1174_);
return v_res_1181_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__1(lean_object* v_b_1182_, lean_object* v_range_1183_, lean_object* v_b_1184_, lean_object* v_i_1185_, lean_object* v_hs_1186_, lean_object* v_hl_1187_){
_start:
{
lean_object* v___x_1189_; 
v___x_1189_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__1___redArg(v_b_1182_, v_range_1183_, v_b_1184_, v_i_1185_);
return v___x_1189_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__1___boxed(lean_object* v_b_1190_, lean_object* v_range_1191_, lean_object* v_b_1192_, lean_object* v_i_1193_, lean_object* v_hs_1194_, lean_object* v_hl_1195_, lean_object* v___y_1196_){
_start:
{
lean_object* v_res_1197_; 
v_res_1197_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00Lasm_JS_Wire_read_spec__1(v_b_1190_, v_range_1191_, v_b_1192_, v_i_1193_, v_hs_1194_, v_hl_1195_);
lean_dec_ref(v_range_1191_);
lean_dec_ref(v_b_1190_);
return v_res_1197_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_decode(lean_object* v_b_1201_){
_start:
{
lean_object* v___x_1203_; lean_object* v___x_1204_; 
v___x_1203_ = lean_unsigned_to_nat(0u);
v___x_1204_ = l_Lasm_JS_Wire_read(v_b_1201_, v___x_1203_);
if (lean_obj_tag(v___x_1204_) == 0)
{
lean_object* v_a_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1220_; 
v_a_1205_ = lean_ctor_get(v___x_1204_, 0);
v_isSharedCheck_1220_ = !lean_is_exclusive(v___x_1204_);
if (v_isSharedCheck_1220_ == 0)
{
v___x_1207_ = v___x_1204_;
v_isShared_1208_ = v_isSharedCheck_1220_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_a_1205_);
lean_dec(v___x_1204_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1220_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
lean_object* v_fst_1209_; lean_object* v_snd_1210_; lean_object* v___x_1211_; uint8_t v___x_1212_; 
v_fst_1209_ = lean_ctor_get(v_a_1205_, 0);
lean_inc(v_fst_1209_);
v_snd_1210_ = lean_ctor_get(v_a_1205_, 1);
lean_inc(v_snd_1210_);
lean_dec(v_a_1205_);
v___x_1211_ = lean_byte_array_size(v_b_1201_);
v___x_1212_ = lean_nat_dec_eq(v_snd_1210_, v___x_1211_);
lean_dec(v_snd_1210_);
if (v___x_1212_ == 0)
{
lean_object* v___x_1213_; lean_object* v___x_1215_; 
lean_dec(v_fst_1209_);
v___x_1213_ = ((lean_object*)(l_Lasm_JS_Wire_decode___closed__1));
if (v_isShared_1208_ == 0)
{
lean_ctor_set_tag(v___x_1207_, 1);
lean_ctor_set(v___x_1207_, 0, v___x_1213_);
v___x_1215_ = v___x_1207_;
goto v_reusejp_1214_;
}
else
{
lean_object* v_reuseFailAlloc_1216_; 
v_reuseFailAlloc_1216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1216_, 0, v___x_1213_);
v___x_1215_ = v_reuseFailAlloc_1216_;
goto v_reusejp_1214_;
}
v_reusejp_1214_:
{
return v___x_1215_;
}
}
else
{
lean_object* v___x_1218_; 
if (v_isShared_1208_ == 0)
{
lean_ctor_set(v___x_1207_, 0, v_fst_1209_);
v___x_1218_ = v___x_1207_;
goto v_reusejp_1217_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v_fst_1209_);
v___x_1218_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1217_;
}
v_reusejp_1217_:
{
return v___x_1218_;
}
}
}
}
else
{
lean_object* v_a_1221_; lean_object* v___x_1223_; uint8_t v_isShared_1224_; uint8_t v_isSharedCheck_1228_; 
v_a_1221_ = lean_ctor_get(v___x_1204_, 0);
v_isSharedCheck_1228_ = !lean_is_exclusive(v___x_1204_);
if (v_isSharedCheck_1228_ == 0)
{
v___x_1223_ = v___x_1204_;
v_isShared_1224_ = v_isSharedCheck_1228_;
goto v_resetjp_1222_;
}
else
{
lean_inc(v_a_1221_);
lean_dec(v___x_1204_);
v___x_1223_ = lean_box(0);
v_isShared_1224_ = v_isSharedCheck_1228_;
goto v_resetjp_1222_;
}
v_resetjp_1222_:
{
lean_object* v___x_1226_; 
if (v_isShared_1224_ == 0)
{
v___x_1226_ = v___x_1223_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1227_; 
v_reuseFailAlloc_1227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1227_, 0, v_a_1221_);
v___x_1226_ = v_reuseFailAlloc_1227_;
goto v_reusejp_1225_;
}
v_reusejp_1225_:
{
return v___x_1226_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Wire_decode___boxed(lean_object* v_b_1229_, lean_object* v_a_1230_){
_start:
{
lean_object* v_res_1231_; 
v_res_1231_ = l_Lasm_JS_Wire_decode(v_b_1229_);
lean_dec_ref(v_b_1229_);
return v_res_1231_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallKeep___boxed(lean_object* v_op_1238_, lean_object* v_handle_1239_, lean_object* v_arg_1240_, lean_object* v_input_1241_, lean_object* v_keep_1242_, lean_object* v_a_00___x40___internal___hyg_1243_){
_start:
{
uint32_t v_op_boxed_1244_; uint32_t v_handle_boxed_1245_; uint64_t v_arg_boxed_1246_; lean_object* v_res_1247_; 
v_op_boxed_1244_ = lean_unbox_uint32(v_op_1238_);
lean_dec(v_op_1238_);
v_handle_boxed_1245_ = lean_unbox_uint32(v_handle_1239_);
lean_dec(v_handle_1239_);
v_arg_boxed_1246_ = lean_unbox_uint64(v_arg_1240_);
lean_dec_ref(v_arg_1240_);
v_res_1247_ = lasm_js_call(v_op_boxed_1244_, v_handle_boxed_1245_, v_arg_boxed_1246_, v_input_1241_, v_keep_1242_);
lean_dec(v_keep_1242_);
lean_dec_ref(v_input_1241_);
return v_res_1247_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(uint32_t v_op_1248_, uint32_t v_handle_1249_, uint64_t v_arg_1250_, lean_object* v_input_1251_){
_start:
{
lean_object* v___x_1253_; lean_object* v___x_1254_; 
v___x_1253_ = lean_box(0);
v___x_1254_ = lasm_js_call(v_op_1248_, v_handle_1249_, v_arg_1250_, v_input_1251_, v___x_1253_);
return v___x_1254_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCall___boxed(lean_object* v_op_1255_, lean_object* v_handle_1256_, lean_object* v_arg_1257_, lean_object* v_input_1258_, lean_object* v_a_1259_){
_start:
{
uint32_t v_op_boxed_1260_; uint32_t v_handle_boxed_1261_; uint64_t v_arg_boxed_1262_; lean_object* v_res_1263_; 
v_op_boxed_1260_ = lean_unbox_uint32(v_op_1255_);
lean_dec(v_op_1255_);
v_handle_boxed_1261_ = lean_unbox_uint32(v_handle_1256_);
lean_dec(v_handle_1256_);
v_arg_boxed_1262_ = lean_unbox_uint64(v_arg_1257_);
lean_dec_ref(v_arg_1257_);
v_res_1263_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v_op_boxed_1260_, v_handle_boxed_1261_, v_arg_boxed_1262_, v_input_1258_);
lean_dec_ref(v_input_1258_);
return v_res_1263_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t v_op_1264_, uint64_t v_arg_1265_, lean_object* v_payload_1266_, uint32_t v_handle_1267_){
_start:
{
lean_object* v___x_1269_; lean_object* v___x_1270_; 
lean_inc(v_payload_1266_);
v___x_1269_ = l_Lasm_JS_Wire_encode(v_payload_1266_);
v___x_1270_ = lasm_js_call(v_op_1264_, v_handle_1267_, v_arg_1265_, v___x_1269_, v_payload_1266_);
lean_dec(v_payload_1266_);
lean_dec_ref(v___x_1269_);
return v___x_1270_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith___boxed(lean_object* v_op_1271_, lean_object* v_arg_1272_, lean_object* v_payload_1273_, lean_object* v_handle_1274_, lean_object* v_a_1275_){
_start:
{
uint32_t v_op_boxed_1276_; uint64_t v_arg_boxed_1277_; uint32_t v_handle_boxed_1278_; lean_object* v_res_1279_; 
v_op_boxed_1276_ = lean_unbox_uint32(v_op_1271_);
lean_dec(v_op_1271_);
v_arg_boxed_1277_ = lean_unbox_uint64(v_arg_1272_);
lean_dec_ref(v_arg_1272_);
v_handle_boxed_1278_ = lean_unbox_uint32(v_handle_1274_);
lean_dec(v_handle_1274_);
v_res_1279_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v_op_boxed_1276_, v_arg_boxed_1277_, v_payload_1273_, v_handle_boxed_1278_);
return v_res_1279_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallInto___boxed(lean_object* v_p_1287_, lean_object* v_op_1288_, lean_object* v_handle_1289_, lean_object* v_arg_1290_, lean_object* v_input_1291_, lean_object* v_keep_1292_, lean_object* v_a_00___x40___internal___hyg_1293_){
_start:
{
uint32_t v_op_boxed_1294_; uint32_t v_handle_boxed_1295_; uint64_t v_arg_boxed_1296_; lean_object* v_res_1297_; 
v_op_boxed_1294_ = lean_unbox_uint32(v_op_1288_);
lean_dec(v_op_1288_);
v_handle_boxed_1295_ = lean_unbox_uint32(v_handle_1289_);
lean_dec(v_handle_1289_);
v_arg_boxed_1296_ = lean_unbox_uint64(v_arg_1290_);
lean_dec_ref(v_arg_1290_);
v_res_1297_ = lasm_js_call_into(v_p_1287_, v_op_boxed_1294_, v_handle_boxed_1295_, v_arg_boxed_1296_, v_input_1291_, v_keep_1292_);
lean_dec(v_keep_1292_);
lean_dec_ref(v_input_1291_);
lean_dec(v_p_1287_);
return v_res_1297_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_ctorIdx___impl(uint8_t v_x_1298_){
_start:
{
lean_object* v___x_1299_; lean_object* v___x_1300_; 
v___x_1299_ = lean_box(v_x_1298_);
v___x_1300_ = lean_obj_tag_nat(v___x_1299_);
lean_dec(v___x_1299_);
return v___x_1300_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_ctorIdx___impl___boxed(lean_object* v_x_1301_){
_start:
{
uint8_t v_x_4__boxed_1302_; lean_object* v_res_1303_; 
v_x_4__boxed_1302_ = lean_unbox(v_x_1301_);
v_res_1303_ = l_Lasm_JS_Mode_ctorIdx___impl(v_x_4__boxed_1302_);
return v_res_1303_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_ctorElim___redArg(lean_object* v_k_1304_){
_start:
{
lean_inc(v_k_1304_);
return v_k_1304_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_ctorElim___redArg___boxed(lean_object* v_k_1305_){
_start:
{
lean_object* v_res_1306_; 
v_res_1306_ = l_Lasm_JS_Mode_ctorElim___redArg(v_k_1305_);
lean_dec(v_k_1305_);
return v_res_1306_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_ctorElim(lean_object* v_motive_1307_, lean_object* v_ctorIdx_1308_, uint8_t v_t_1309_, lean_object* v_h_1310_, lean_object* v_k_1311_){
_start:
{
lean_inc(v_k_1311_);
return v_k_1311_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_ctorElim___boxed(lean_object* v_motive_1312_, lean_object* v_ctorIdx_1313_, lean_object* v_t_1314_, lean_object* v_h_1315_, lean_object* v_k_1316_){
_start:
{
uint8_t v_t_boxed_1317_; lean_object* v_res_1318_; 
v_t_boxed_1317_ = lean_unbox(v_t_1314_);
v_res_1318_ = l_Lasm_JS_Mode_ctorElim(v_motive_1312_, v_ctorIdx_1313_, v_t_boxed_1317_, v_h_1315_, v_k_1316_);
lean_dec(v_k_1316_);
lean_dec(v_ctorIdx_1313_);
return v_res_1318_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_data_elim___redArg(lean_object* v_data_1319_){
_start:
{
lean_inc(v_data_1319_);
return v_data_1319_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_data_elim___redArg___boxed(lean_object* v_data_1320_){
_start:
{
lean_object* v_res_1321_; 
v_res_1321_ = l_Lasm_JS_Mode_data_elim___redArg(v_data_1320_);
lean_dec(v_data_1320_);
return v_res_1321_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_data_elim(lean_object* v_motive_1322_, uint8_t v_t_1323_, lean_object* v_h_1324_, lean_object* v_data_1325_){
_start:
{
lean_inc(v_data_1325_);
return v_data_1325_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_data_elim___boxed(lean_object* v_motive_1326_, lean_object* v_t_1327_, lean_object* v_h_1328_, lean_object* v_data_1329_){
_start:
{
uint8_t v_t_boxed_1330_; lean_object* v_res_1331_; 
v_t_boxed_1330_ = lean_unbox(v_t_1327_);
v_res_1331_ = l_Lasm_JS_Mode_data_elim(v_motive_1326_, v_t_boxed_1330_, v_h_1328_, v_data_1329_);
lean_dec(v_data_1329_);
return v_res_1331_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_reference_elim___redArg(lean_object* v_reference_1332_){
_start:
{
lean_inc(v_reference_1332_);
return v_reference_1332_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_reference_elim___redArg___boxed(lean_object* v_reference_1333_){
_start:
{
lean_object* v_res_1334_; 
v_res_1334_ = l_Lasm_JS_Mode_reference_elim___redArg(v_reference_1333_);
lean_dec(v_reference_1333_);
return v_res_1334_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_reference_elim(lean_object* v_motive_1335_, uint8_t v_t_1336_, lean_object* v_h_1337_, lean_object* v_reference_1338_){
_start:
{
lean_inc(v_reference_1338_);
return v_reference_1338_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Mode_reference_elim___boxed(lean_object* v_motive_1339_, lean_object* v_t_1340_, lean_object* v_h_1341_, lean_object* v_reference_1342_){
_start:
{
uint8_t v_t_boxed_1343_; lean_object* v_res_1344_; 
v_t_boxed_1343_ = lean_unbox(v_t_1340_);
v_res_1344_ = l_Lasm_JS_Mode_reference_elim(v_motive_1339_, v_t_boxed_1343_, v_h_1341_, v_reference_1342_);
lean_dec(v_reference_1342_);
return v_res_1344_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_instBEqMode_beq(uint8_t v_x_1345_, uint8_t v_y_1346_){
_start:
{
lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; uint8_t v___x_1351_; 
v___x_1347_ = lean_box(v_x_1345_);
v___x_1348_ = lean_obj_tag_nat(v___x_1347_);
lean_dec(v___x_1347_);
v___x_1349_ = lean_box(v_y_1346_);
v___x_1350_ = lean_obj_tag_nat(v___x_1349_);
lean_dec(v___x_1349_);
v___x_1351_ = lean_nat_dec_eq(v___x_1348_, v___x_1350_);
return v___x_1351_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBEqMode_beq___boxed(lean_object* v_x_1352_, lean_object* v_y_1353_){
_start:
{
uint8_t v_x_24__boxed_1354_; uint8_t v_y_25__boxed_1355_; uint8_t v_res_1356_; lean_object* v_r_1357_; 
v_x_24__boxed_1354_ = lean_unbox(v_x_1352_);
v_y_25__boxed_1355_ = lean_unbox(v_y_1353_);
v_res_1356_ = l_Lasm_JS_instBEqMode_beq(v_x_24__boxed_1354_, v_y_25__boxed_1355_);
v_r_1357_ = lean_box(v_res_1356_);
return v_r_1357_;
}
}
static uint8_t _init_l_Lasm_JS_instInhabitedMode_default(void){
_start:
{
uint8_t v___x_1360_; 
v___x_1360_ = 0;
return v___x_1360_;
}
}
static uint8_t _init_l_Lasm_JS_instInhabitedMode(void){
_start:
{
uint8_t v___x_1361_; 
v___x_1361_ = 0;
return v___x_1361_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___redArg___closed__7(void){
_start:
{
lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; 
v___x_1369_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__6));
v___x_1370_ = lean_unsigned_to_nat(46u);
v___x_1371_ = lean_unsigned_to_nat(193u);
v___x_1372_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__5));
v___x_1373_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__4));
v___x_1374_ = l_mkPanicMessageWithDecl(v___x_1373_, v___x_1372_, v___x_1371_, v___x_1370_, v___x_1369_);
return v___x_1374_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___redArg(lean_object* v_inst_1376_, lean_object* v_context_1377_, lean_object* v_d_1378_){
_start:
{
lean_object* v___y_1381_; lean_object* v___y_1382_; lean_object* v_fromJS_1386_; lean_object* v_typeName_1387_; lean_object* v___x_1388_; 
v_fromJS_1386_ = lean_ctor_get(v_inst_1376_, 0);
lean_inc_ref(v_fromJS_1386_);
v_typeName_1387_ = lean_ctor_get(v_inst_1376_, 1);
lean_inc_ref(v_typeName_1387_);
lean_dec_ref(v_inst_1376_);
lean_inc(v_d_1378_);
v___x_1388_ = lean_apply_1(v_fromJS_1386_, v_d_1378_);
if (lean_obj_tag(v___x_1388_) == 0)
{
lean_object* v_a_1389_; lean_object* v_received_1391_; 
v_a_1389_ = lean_ctor_get(v___x_1388_, 0);
lean_inc(v_a_1389_);
lean_dec_ref_known(v___x_1388_, 1);
if (lean_obj_tag(v_d_1378_) == 9)
{
lean_object* v_value_1410_; lean_object* v_description_1411_; lean_object* v___x_1412_; uint8_t v___x_1413_; 
v_value_1410_ = lean_ctor_get(v_d_1378_, 0);
v_description_1411_ = lean_ctor_get(v_d_1378_, 1);
v___x_1412_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___x_1413_ = lean_string_dec_eq(v_description_1411_, v___x_1412_);
if (v___x_1413_ == 0)
{
goto v___jp_1408_;
}
else
{
lean_object* v___x_1415_; uint8_t v_isShared_1416_; uint8_t v_isSharedCheck_1430_; 
lean_inc(v_value_1410_);
v_isSharedCheck_1430_ = !lean_is_exclusive(v_d_1378_);
if (v_isSharedCheck_1430_ == 0)
{
lean_object* v_unused_1431_; lean_object* v_unused_1432_; 
v_unused_1431_ = lean_ctor_get(v_d_1378_, 1);
lean_dec(v_unused_1431_);
v_unused_1432_ = lean_ctor_get(v_d_1378_, 0);
lean_dec(v_unused_1432_);
v___x_1415_ = v_d_1378_;
v_isShared_1416_ = v_isSharedCheck_1430_;
goto v_resetjp_1414_;
}
else
{
lean_dec(v_d_1378_);
v___x_1415_ = lean_box(0);
v_isShared_1416_ = v_isSharedCheck_1430_;
goto v_resetjp_1414_;
}
v_resetjp_1414_:
{
uint32_t v___x_1417_; uint64_t v___x_1418_; lean_object* v___x_1420_; 
v___x_1417_ = 206;
v___x_1418_ = 0ULL;
lean_inc(v_value_1410_);
if (v_isShared_1416_ == 0)
{
lean_ctor_set(v___x_1415_, 1, v___x_1412_);
v___x_1420_ = v___x_1415_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v_value_1410_);
lean_ctor_set(v_reuseFailAlloc_1429_, 1, v___x_1412_);
v___x_1420_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
uint32_t v___x_1421_; lean_object* v___x_1422_; 
v___x_1421_ = lasm_js_value_handle(v_value_1410_);
lean_dec(v_value_1410_);
v___x_1422_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1417_, v___x_1418_, v___x_1420_, v___x_1421_);
if (lean_obj_tag(v___x_1422_) == 0)
{
lean_object* v_a_1423_; uint8_t v___x_1424_; 
v_a_1423_ = lean_ctor_get(v___x_1422_, 0);
lean_inc(v_a_1423_);
lean_dec_ref_known(v___x_1422_, 1);
v___x_1424_ = lean_string_validate_utf8(v_a_1423_);
if (v___x_1424_ == 0)
{
lean_object* v___x_1425_; lean_object* v___x_1426_; 
lean_dec(v_a_1423_);
v___x_1425_ = lean_obj_once(&l_Lasm_JS_decodeAs___redArg___closed__7, &l_Lasm_JS_decodeAs___redArg___closed__7_once, _init_l_Lasm_JS_decodeAs___redArg___closed__7);
v___x_1426_ = l_panic___redArg(v___x_1412_, v___x_1425_);
v_received_1391_ = v___x_1426_;
goto v___jp_1390_;
}
else
{
lean_object* v___x_1427_; 
v___x_1427_ = lean_string_from_utf8_unchecked(v_a_1423_);
v_received_1391_ = v___x_1427_;
goto v___jp_1390_;
}
}
else
{
lean_object* v___x_1428_; 
lean_dec_ref_known(v___x_1422_, 1);
v___x_1428_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__8));
v_received_1391_ = v___x_1428_;
goto v___jp_1390_;
}
}
}
}
}
else
{
goto v___jp_1408_;
}
v___jp_1390_:
{
lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; uint8_t v___x_1402_; 
v___x_1392_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__0));
v___x_1393_ = lean_string_append(v___x_1392_, v_context_1377_);
v___x_1394_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__1));
v___x_1395_ = lean_string_append(v___x_1393_, v___x_1394_);
v___x_1396_ = lean_string_append(v___x_1395_, v_typeName_1387_);
lean_dec_ref(v_typeName_1387_);
v___x_1397_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__2));
v___x_1398_ = lean_string_append(v___x_1396_, v___x_1397_);
v___x_1399_ = lean_string_append(v___x_1398_, v_received_1391_);
lean_dec_ref(v_received_1391_);
v___x_1400_ = lean_string_utf8_byte_size(v_a_1389_);
v___x_1401_ = lean_unsigned_to_nat(0u);
v___x_1402_ = lean_nat_dec_eq(v___x_1400_, v___x_1401_);
if (v___x_1402_ == 0)
{
lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; 
v___x_1403_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__3));
v___x_1404_ = lean_string_append(v___x_1403_, v_a_1389_);
lean_dec(v_a_1389_);
v___x_1405_ = ((lean_object*)(l_Lasm_JS_Wire_read___closed__1));
v___x_1406_ = lean_string_append(v___x_1404_, v___x_1405_);
v___y_1381_ = v___x_1399_;
v___y_1382_ = v___x_1406_;
goto v___jp_1380_;
}
else
{
lean_object* v___x_1407_; 
lean_dec(v_a_1389_);
v___x_1407_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___y_1381_ = v___x_1399_;
v___y_1382_ = v___x_1407_;
goto v___jp_1380_;
}
}
v___jp_1408_:
{
lean_object* v___x_1409_; 
v___x_1409_ = l_Lasm_JS_Data_describe(v_d_1378_);
v_received_1391_ = v___x_1409_;
goto v___jp_1390_;
}
}
else
{
lean_object* v_a_1433_; lean_object* v___x_1435_; uint8_t v_isShared_1436_; uint8_t v_isSharedCheck_1440_; 
lean_dec_ref(v_typeName_1387_);
lean_dec(v_d_1378_);
v_a_1433_ = lean_ctor_get(v___x_1388_, 0);
v_isSharedCheck_1440_ = !lean_is_exclusive(v___x_1388_);
if (v_isSharedCheck_1440_ == 0)
{
v___x_1435_ = v___x_1388_;
v_isShared_1436_ = v_isSharedCheck_1440_;
goto v_resetjp_1434_;
}
else
{
lean_inc(v_a_1433_);
lean_dec(v___x_1388_);
v___x_1435_ = lean_box(0);
v_isShared_1436_ = v_isSharedCheck_1440_;
goto v_resetjp_1434_;
}
v_resetjp_1434_:
{
lean_object* v___x_1438_; 
if (v_isShared_1436_ == 0)
{
lean_ctor_set_tag(v___x_1435_, 0);
v___x_1438_ = v___x_1435_;
goto v_reusejp_1437_;
}
else
{
lean_object* v_reuseFailAlloc_1439_; 
v_reuseFailAlloc_1439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1439_, 0, v_a_1433_);
v___x_1438_ = v_reuseFailAlloc_1439_;
goto v_reusejp_1437_;
}
v_reusejp_1437_:
{
return v___x_1438_;
}
}
}
v___jp_1380_:
{
lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; 
v___x_1383_ = lean_string_append(v___y_1381_, v___y_1382_);
lean_dec_ref(v___y_1382_);
v___x_1384_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1384_, 0, v___x_1383_);
v___x_1385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1385_, 0, v___x_1384_);
return v___x_1385_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___redArg___boxed(lean_object* v_inst_1441_, lean_object* v_context_1442_, lean_object* v_d_1443_, lean_object* v_a_1444_){
_start:
{
lean_object* v_res_1445_; 
v_res_1445_ = l_Lasm_JS_decodeAs___redArg(v_inst_1441_, v_context_1442_, v_d_1443_);
lean_dec_ref(v_context_1442_);
return v_res_1445_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs(lean_object* v_00_u03b1_1446_, lean_object* v_inst_1447_, lean_object* v_context_1448_, lean_object* v_d_1449_){
_start:
{
lean_object* v___x_1451_; 
v___x_1451_ = l_Lasm_JS_decodeAs___redArg(v_inst_1447_, v_context_1448_, v_d_1449_);
return v___x_1451_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___boxed(lean_object* v_00_u03b1_1452_, lean_object* v_inst_1453_, lean_object* v_context_1454_, lean_object* v_d_1455_, lean_object* v_a_1456_){
_start:
{
lean_object* v_res_1457_; 
v_res_1457_ = l_Lasm_JS_decodeAs(v_00_u03b1_1452_, v_inst_1453_, v_context_1454_, v_d_1455_);
lean_dec_ref(v_context_1454_);
return v_res_1457_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSData___lam__0(lean_object* v_a_1460_){
_start:
{
lean_object* v___x_1461_; 
v___x_1461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1461_, 0, v_a_1460_);
return v___x_1461_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSValue___lam__0(lean_object* v_v_1469_){
_start:
{
lean_object* v___x_1470_; lean_object* v___x_1471_; 
v___x_1470_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___x_1471_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1471_, 0, v_v_1469_);
lean_ctor_set(v___x_1471_, 1, v___x_1470_);
return v___x_1471_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSValue___lam__0(lean_object* v_x_1476_){
_start:
{
if (lean_obj_tag(v_x_1476_) == 9)
{
lean_object* v_value_1477_; lean_object* v___x_1478_; 
v_value_1477_ = lean_ctor_get(v_x_1476_, 0);
lean_inc(v_value_1477_);
v___x_1478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1478_, 0, v_value_1477_);
return v___x_1478_;
}
else
{
lean_object* v___x_1479_; 
v___x_1479_ = ((lean_object*)(l_Lasm_JS_instFromJSValue___lam__0___closed__0));
return v___x_1479_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSValue___lam__0___boxed(lean_object* v_x_1480_){
_start:
{
lean_object* v_res_1481_; 
v_res_1481_ = l_Lasm_JS_instFromJSValue___lam__0(v_x_1480_);
lean_dec(v_x_1480_);
return v_res_1481_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object* v_s_1489_){
_start:
{
lean_object* v___x_1490_; 
v___x_1490_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1490_, 0, v_s_1489_);
return v___x_1490_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSString___lam__0(lean_object* v_x_1495_){
_start:
{
if (lean_obj_tag(v_x_1495_) == 4)
{
lean_object* v_s_1496_; lean_object* v___x_1498_; uint8_t v_isShared_1499_; uint8_t v_isSharedCheck_1503_; 
v_s_1496_ = lean_ctor_get(v_x_1495_, 0);
v_isSharedCheck_1503_ = !lean_is_exclusive(v_x_1495_);
if (v_isSharedCheck_1503_ == 0)
{
v___x_1498_ = v_x_1495_;
v_isShared_1499_ = v_isSharedCheck_1503_;
goto v_resetjp_1497_;
}
else
{
lean_inc(v_s_1496_);
lean_dec(v_x_1495_);
v___x_1498_ = lean_box(0);
v_isShared_1499_ = v_isSharedCheck_1503_;
goto v_resetjp_1497_;
}
v_resetjp_1497_:
{
lean_object* v___x_1501_; 
if (v_isShared_1499_ == 0)
{
lean_ctor_set_tag(v___x_1498_, 1);
v___x_1501_ = v___x_1498_;
goto v_reusejp_1500_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v_s_1496_);
v___x_1501_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1500_;
}
v_reusejp_1500_:
{
return v___x_1501_;
}
}
}
else
{
lean_object* v___x_1504_; 
lean_dec(v_x_1495_);
v___x_1504_ = ((lean_object*)(l_Lasm_JS_instFromJSString___lam__0___closed__0));
return v___x_1504_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSBool___lam__0(uint8_t v_b_1512_){
_start:
{
lean_object* v___x_1513_; 
v___x_1513_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_1513_, 0, v_b_1512_);
return v___x_1513_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object* v_b_1514_){
_start:
{
uint8_t v_b_boxed_1515_; lean_object* v_res_1516_; 
v_b_boxed_1515_ = lean_unbox(v_b_1514_);
v_res_1516_ = l_Lasm_JS_instToJSBool___lam__0(v_b_boxed_1515_);
return v_res_1516_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSBool___lam__0(lean_object* v_x_1521_){
_start:
{
if (lean_obj_tag(v_x_1521_) == 2)
{
uint8_t v_b_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; 
v_b_1522_ = lean_ctor_get_uint8(v_x_1521_, 0);
v___x_1523_ = lean_box(v_b_1522_);
v___x_1524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1524_, 0, v___x_1523_);
return v___x_1524_;
}
else
{
lean_object* v___x_1525_; 
v___x_1525_ = ((lean_object*)(l_Lasm_JS_instFromJSBool___lam__0___closed__0));
return v___x_1525_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSBool___lam__0___boxed(lean_object* v_x_1526_){
_start:
{
lean_object* v_res_1527_; 
v_res_1527_ = l_Lasm_JS_instFromJSBool___lam__0(v_x_1526_);
lean_dec(v_x_1526_);
return v_res_1527_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSFloat___lam__0(double v_n_1535_){
_start:
{
lean_object* v___x_1536_; 
v___x_1536_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1536_, 0, v_n_1535_);
return v___x_1536_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSFloat___lam__0___boxed(lean_object* v_n_1537_){
_start:
{
double v_n_boxed_1538_; lean_object* v_res_1539_; 
v_n_boxed_1538_ = lean_unbox_float(v_n_1537_);
lean_dec_ref(v_n_1537_);
v_res_1539_ = l_Lasm_JS_instToJSFloat___lam__0(v_n_boxed_1538_);
return v_res_1539_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSFloat___lam__0(lean_object* v_x_1544_){
_start:
{
if (lean_obj_tag(v_x_1544_) == 3)
{
double v_n_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; 
v_n_1545_ = lean_ctor_get_float(v_x_1544_, 0);
v___x_1546_ = lean_box_float(v_n_1545_);
v___x_1547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1547_, 0, v___x_1546_);
return v___x_1547_;
}
else
{
lean_object* v___x_1548_; 
v___x_1548_ = ((lean_object*)(l_Lasm_JS_instFromJSFloat___lam__0___closed__0));
return v___x_1548_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSFloat___lam__0___boxed(lean_object* v_x_1549_){
_start:
{
lean_object* v_res_1550_; 
v_res_1550_ = l_Lasm_JS_instFromJSFloat___lam__0(v_x_1549_);
lean_dec(v_x_1549_);
return v_res_1550_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUnit___lam__0(lean_object* v_x_1558_){
_start:
{
lean_object* v___x_1559_; 
v___x_1559_ = lean_box(0);
return v___x_1559_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSUnit___lam__0(lean_object* v_x_1564_){
_start:
{
lean_object* v___x_1565_; 
v___x_1565_ = ((lean_object*)(l_Lasm_JS_instFromJSUnit___lam__0___closed__0));
return v___x_1565_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSUnit___lam__0___boxed(lean_object* v_x_1566_){
_start:
{
lean_object* v_res_1567_; 
v_res_1567_ = l_Lasm_JS_instFromJSUnit___lam__0(v_x_1566_);
lean_dec(v_x_1566_);
return v_res_1567_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSByteArray___lam__0(lean_object* v_b_1575_){
_start:
{
lean_object* v___x_1576_; 
v___x_1576_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_1576_, 0, v_b_1575_);
return v___x_1576_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSByteArray___lam__0(lean_object* v_x_1581_){
_start:
{
if (lean_obj_tag(v_x_1581_) == 6)
{
lean_object* v_b_1582_; lean_object* v___x_1584_; uint8_t v_isShared_1585_; uint8_t v_isSharedCheck_1589_; 
v_b_1582_ = lean_ctor_get(v_x_1581_, 0);
v_isSharedCheck_1589_ = !lean_is_exclusive(v_x_1581_);
if (v_isSharedCheck_1589_ == 0)
{
v___x_1584_ = v_x_1581_;
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
else
{
lean_inc(v_b_1582_);
lean_dec(v_x_1581_);
v___x_1584_ = lean_box(0);
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
v_resetjp_1583_:
{
lean_object* v___x_1587_; 
if (v_isShared_1585_ == 0)
{
lean_ctor_set_tag(v___x_1584_, 1);
v___x_1587_ = v___x_1584_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v_b_1582_);
v___x_1587_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
return v___x_1587_;
}
}
}
else
{
lean_object* v___x_1590_; 
lean_dec(v_x_1581_);
v___x_1590_ = ((lean_object*)(l_Lasm_JS_instFromJSByteArray___lam__0___closed__0));
return v___x_1590_;
}
}
}
static lean_object* _init_l___private_Lasm_JS_Core_0__Lasm_JS_maxSafe(void){
_start:
{
lean_object* v___x_1598_; 
v___x_1598_ = lean_cstr_to_nat("9007199254740991");
return v___x_1598_;
}
}
static double _init_l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f___closed__0(void){
_start:
{
lean_object* v___x_1599_; double v___x_1600_; 
v___x_1599_ = lean_cstr_to_nat("9007199254740991");
v___x_1600_ = lean_float_of_nat(v___x_1599_);
return v___x_1600_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double v_n_1601_){
_start:
{
uint8_t v___x_1602_; 
v___x_1602_ = lean_float_isnan(v_n_1601_);
if (v___x_1602_ == 0)
{
uint8_t v___x_1603_; 
v___x_1603_ = lean_float_isinf(v_n_1601_);
if (v___x_1603_ == 0)
{
double v___x_1604_; uint8_t v___x_1605_; 
v___x_1604_ = floor(v_n_1601_);
v___x_1605_ = lean_float_beq(v___x_1604_, v_n_1601_);
if (v___x_1605_ == 0)
{
lean_object* v___x_1606_; 
v___x_1606_ = lean_box(0);
return v___x_1606_;
}
else
{
double v___x_1607_; double v___x_1608_; uint8_t v___x_1609_; 
v___x_1607_ = lean_float_once(&l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f___closed__0);
v___x_1608_ = fabs(v_n_1601_);
v___x_1609_ = lean_float_decLt(v___x_1607_, v___x_1608_);
if (v___x_1609_ == 0)
{
double v___x_1610_; uint8_t v___x_1611_; 
v___x_1610_ = lean_float_once(&l_Lasm_JS_Data_describe___closed__6, &l_Lasm_JS_Data_describe___closed__6_once, _init_l_Lasm_JS_Data_describe___closed__6);
v___x_1611_ = lean_float_decLt(v_n_1601_, v___x_1610_);
if (v___x_1611_ == 0)
{
uint64_t v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; 
v___x_1612_ = lean_float_to_uint64(v_n_1601_);
v___x_1613_ = lean_uint64_to_nat(v___x_1612_);
v___x_1614_ = lean_nat_to_int(v___x_1613_);
v___x_1615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1615_, 0, v___x_1614_);
return v___x_1615_;
}
else
{
double v___x_1616_; uint64_t v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; 
v___x_1616_ = lean_float_negate(v_n_1601_);
v___x_1617_ = lean_float_to_uint64(v___x_1616_);
v___x_1618_ = lean_uint64_to_nat(v___x_1617_);
v___x_1619_ = lean_nat_to_int(v___x_1618_);
v___x_1620_ = lean_int_neg(v___x_1619_);
lean_dec(v___x_1619_);
v___x_1621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1621_, 0, v___x_1620_);
return v___x_1621_;
}
}
else
{
lean_object* v___x_1622_; 
v___x_1622_ = lean_box(0);
return v___x_1622_;
}
}
}
else
{
lean_object* v___x_1623_; 
v___x_1623_ = lean_box(0);
return v___x_1623_;
}
}
else
{
lean_object* v___x_1624_; 
v___x_1624_ = lean_box(0);
return v___x_1624_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f___boxed(lean_object* v_n_1625_){
_start:
{
double v_n_boxed_1626_; lean_object* v_res_1627_; 
v_n_boxed_1626_ = lean_unbox_float(v_n_1625_);
lean_dec_ref(v_n_1625_);
v_res_1627_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_boxed_1626_);
return v_res_1627_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSInt___lam__0(lean_object* v_i_1628_){
_start:
{
lean_object* v___x_1629_; lean_object* v___x_1630_; uint8_t v___x_1631_; 
v___x_1629_ = lean_nat_abs(v_i_1628_);
v___x_1630_ = lean_cstr_to_nat("9007199254740991");
v___x_1631_ = lean_nat_dec_le(v___x_1629_, v___x_1630_);
lean_dec(v___x_1629_);
if (v___x_1631_ == 0)
{
lean_object* v___x_1632_; 
v___x_1632_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1632_, 0, v_i_1628_);
return v___x_1632_;
}
else
{
double v___x_1633_; lean_object* v___x_1634_; 
v___x_1633_ = l_Float_ofInt(v_i_1628_);
lean_dec(v_i_1628_);
v___x_1634_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1634_, 0, v___x_1633_);
return v___x_1634_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSInt___lam__0(lean_object* v_x_1642_){
_start:
{
switch(lean_obj_tag(v_x_1642_))
{
case 3:
{
double v_n_1643_; lean_object* v___x_1644_; 
v_n_1643_ = lean_ctor_get_float(v_x_1642_, 0);
lean_dec_ref_known(v_x_1642_, 0);
v___x_1644_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1643_);
if (lean_obj_tag(v___x_1644_) == 0)
{
lean_object* v___x_1645_; 
v___x_1645_ = ((lean_object*)(l_Lasm_JS_instFromJSInt___lam__0___closed__1));
return v___x_1645_;
}
else
{
lean_object* v_val_1646_; lean_object* v___x_1648_; uint8_t v_isShared_1649_; uint8_t v_isSharedCheck_1653_; 
v_val_1646_ = lean_ctor_get(v___x_1644_, 0);
v_isSharedCheck_1653_ = !lean_is_exclusive(v___x_1644_);
if (v_isSharedCheck_1653_ == 0)
{
v___x_1648_ = v___x_1644_;
v_isShared_1649_ = v_isSharedCheck_1653_;
goto v_resetjp_1647_;
}
else
{
lean_inc(v_val_1646_);
lean_dec(v___x_1644_);
v___x_1648_ = lean_box(0);
v_isShared_1649_ = v_isSharedCheck_1653_;
goto v_resetjp_1647_;
}
v_resetjp_1647_:
{
lean_object* v___x_1651_; 
if (v_isShared_1649_ == 0)
{
v___x_1651_ = v___x_1648_;
goto v_reusejp_1650_;
}
else
{
lean_object* v_reuseFailAlloc_1652_; 
v_reuseFailAlloc_1652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1652_, 0, v_val_1646_);
v___x_1651_ = v_reuseFailAlloc_1652_;
goto v_reusejp_1650_;
}
v_reusejp_1650_:
{
return v___x_1651_;
}
}
}
}
case 5:
{
lean_object* v_i_1654_; lean_object* v___x_1656_; uint8_t v_isShared_1657_; uint8_t v_isSharedCheck_1661_; 
v_i_1654_ = lean_ctor_get(v_x_1642_, 0);
v_isSharedCheck_1661_ = !lean_is_exclusive(v_x_1642_);
if (v_isSharedCheck_1661_ == 0)
{
v___x_1656_ = v_x_1642_;
v_isShared_1657_ = v_isSharedCheck_1661_;
goto v_resetjp_1655_;
}
else
{
lean_inc(v_i_1654_);
lean_dec(v_x_1642_);
v___x_1656_ = lean_box(0);
v_isShared_1657_ = v_isSharedCheck_1661_;
goto v_resetjp_1655_;
}
v_resetjp_1655_:
{
lean_object* v___x_1659_; 
if (v_isShared_1657_ == 0)
{
lean_ctor_set_tag(v___x_1656_, 1);
v___x_1659_ = v___x_1656_;
goto v_reusejp_1658_;
}
else
{
lean_object* v_reuseFailAlloc_1660_; 
v_reuseFailAlloc_1660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1660_, 0, v_i_1654_);
v___x_1659_ = v_reuseFailAlloc_1660_;
goto v_reusejp_1658_;
}
v_reusejp_1658_:
{
return v___x_1659_;
}
}
}
default: 
{
lean_object* v___x_1662_; 
lean_dec(v_x_1642_);
v___x_1662_ = ((lean_object*)(l_Lasm_JS_instFromJSInt___lam__0___closed__2));
return v___x_1662_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSNat___lam__0(lean_object* v_n_1670_){
_start:
{
lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; uint8_t v___x_1674_; 
v___x_1671_ = lean_nat_to_int(v_n_1670_);
v___x_1672_ = lean_nat_abs(v___x_1671_);
v___x_1673_ = lean_cstr_to_nat("9007199254740991");
v___x_1674_ = lean_nat_dec_le(v___x_1672_, v___x_1673_);
lean_dec(v___x_1672_);
if (v___x_1674_ == 0)
{
lean_object* v___x_1675_; 
v___x_1675_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1675_, 0, v___x_1671_);
return v___x_1675_;
}
else
{
double v___x_1676_; lean_object* v___x_1677_; 
v___x_1676_ = l_Float_ofInt(v___x_1671_);
lean_dec(v___x_1671_);
v___x_1677_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1677_, 0, v___x_1676_);
return v___x_1677_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSNat___lam__0(lean_object* v_d_1687_){
_start:
{
lean_object* v_a_1689_; 
switch(lean_obj_tag(v_d_1687_))
{
case 3:
{
double v_n_1695_; lean_object* v___x_1696_; 
v_n_1695_ = lean_ctor_get_float(v_d_1687_, 0);
lean_dec_ref_known(v_d_1687_, 0);
v___x_1696_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1695_);
if (lean_obj_tag(v___x_1696_) == 0)
{
lean_object* v___x_1697_; 
v___x_1697_ = ((lean_object*)(l_Lasm_JS_instFromJSNat___lam__0___closed__2));
return v___x_1697_;
}
else
{
lean_object* v_val_1698_; 
v_val_1698_ = lean_ctor_get(v___x_1696_, 0);
lean_inc(v_val_1698_);
lean_dec_ref_known(v___x_1696_, 1);
v_a_1689_ = v_val_1698_;
goto v___jp_1688_;
}
}
case 5:
{
lean_object* v_i_1699_; 
v_i_1699_ = lean_ctor_get(v_d_1687_, 0);
lean_inc(v_i_1699_);
lean_dec_ref_known(v_d_1687_, 1);
v_a_1689_ = v_i_1699_;
goto v___jp_1688_;
}
default: 
{
lean_object* v___x_1700_; 
lean_dec(v_d_1687_);
v___x_1700_ = ((lean_object*)(l_Lasm_JS_instFromJSNat___lam__0___closed__3));
return v___x_1700_;
}
}
v___jp_1688_:
{
lean_object* v___x_1690_; uint8_t v___x_1691_; 
v___x_1690_ = lean_obj_once(&l_Lasm_JS_Wire_read___closed__2, &l_Lasm_JS_Wire_read___closed__2_once, _init_l_Lasm_JS_Wire_read___closed__2);
v___x_1691_ = lean_int_dec_le(v___x_1690_, v_a_1689_);
if (v___x_1691_ == 0)
{
lean_object* v___x_1692_; 
lean_dec(v_a_1689_);
v___x_1692_ = ((lean_object*)(l_Lasm_JS_instFromJSNat___lam__0___closed__1));
return v___x_1692_;
}
else
{
lean_object* v___x_1693_; lean_object* v___x_1694_; 
v___x_1693_ = l_Int_toNat(v_a_1689_);
lean_dec(v_a_1689_);
v___x_1694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1694_, 0, v___x_1693_);
return v___x_1694_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0(lean_object* v_bound_1713_, lean_object* v_name_1714_, lean_object* v_f_1715_, lean_object* v_d_1716_){
_start:
{
lean_object* v_a_1718_; 
switch(lean_obj_tag(v_d_1716_))
{
case 3:
{
double v_n_1729_; lean_object* v___x_1730_; 
v_n_1729_ = lean_ctor_get_float(v_d_1716_, 0);
lean_dec_ref_known(v_d_1716_, 0);
v___x_1730_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1729_);
if (lean_obj_tag(v___x_1730_) == 0)
{
lean_object* v___x_1731_; 
lean_dec(v_f_1715_);
v___x_1731_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0___closed__2));
return v___x_1731_;
}
else
{
lean_object* v_val_1732_; 
v_val_1732_ = lean_ctor_get(v___x_1730_, 0);
lean_inc(v_val_1732_);
lean_dec_ref_known(v___x_1730_, 1);
v_a_1718_ = v_val_1732_;
goto v___jp_1717_;
}
}
case 5:
{
lean_object* v_i_1733_; 
v_i_1733_ = lean_ctor_get(v_d_1716_, 0);
lean_inc(v_i_1733_);
lean_dec_ref_known(v_d_1716_, 1);
v_a_1718_ = v_i_1733_;
goto v___jp_1717_;
}
default: 
{
lean_object* v___x_1734_; 
lean_dec(v_d_1716_);
lean_dec(v_f_1715_);
v___x_1734_ = ((lean_object*)(l_Lasm_JS_instFromJSValue___lam__0___closed__0));
return v___x_1734_;
}
}
v___jp_1717_:
{
lean_object* v___x_1719_; uint8_t v___x_1720_; 
v___x_1719_ = lean_obj_once(&l_Lasm_JS_Wire_read___closed__2, &l_Lasm_JS_Wire_read___closed__2_once, _init_l_Lasm_JS_Wire_read___closed__2);
v___x_1720_ = lean_int_dec_le(v___x_1719_, v_a_1718_);
if (v___x_1720_ == 0)
{
lean_object* v___x_1721_; 
lean_dec(v_a_1718_);
lean_dec(v_f_1715_);
v___x_1721_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0___closed__0));
return v___x_1721_;
}
else
{
lean_object* v___x_1722_; uint8_t v___x_1723_; 
v___x_1722_ = l_Int_toNat(v_a_1718_);
lean_dec(v_a_1718_);
v___x_1723_ = lean_nat_dec_lt(v___x_1722_, v_bound_1713_);
if (v___x_1723_ == 0)
{
lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; 
lean_dec(v___x_1722_);
lean_dec(v_f_1715_);
v___x_1724_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0___closed__1));
v___x_1725_ = lean_string_append(v___x_1724_, v_name_1714_);
v___x_1726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1726_, 0, v___x_1725_);
return v___x_1726_;
}
else
{
lean_object* v___x_1727_; lean_object* v___x_1728_; 
v___x_1727_ = lean_apply_1(v_f_1715_, v___x_1722_);
v___x_1728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1728_, 0, v___x_1727_);
return v___x_1728_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0___boxed(lean_object* v_bound_1735_, lean_object* v_name_1736_, lean_object* v_f_1737_, lean_object* v_d_1738_){
_start:
{
lean_object* v_res_1739_; 
v_res_1739_ = l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0(v_bound_1735_, v_name_1736_, v_f_1737_, v_d_1738_);
lean_dec_ref(v_name_1736_);
lean_dec(v_bound_1735_);
return v_res_1739_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg(lean_object* v_name_1740_, lean_object* v_bound_1741_, lean_object* v_f_1742_){
_start:
{
lean_object* v___f_1743_; uint8_t v___x_1744_; lean_object* v___x_1745_; 
lean_inc_ref(v_name_1740_);
v___f_1743_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1743_, 0, v_bound_1741_);
lean_closure_set(v___f_1743_, 1, v_name_1740_);
lean_closure_set(v___f_1743_, 2, v_f_1742_);
v___x_1744_ = 0;
v___x_1745_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1745_, 0, v___f_1743_);
lean_ctor_set(v___x_1745_, 1, v_name_1740_);
lean_ctor_set_uint8(v___x_1745_, sizeof(void*)*2, v___x_1744_);
return v___x_1745_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded(lean_object* v_00_u03b1_1746_, lean_object* v_name_1747_, lean_object* v_bound_1748_, lean_object* v_f_1749_){
_start:
{
lean_object* v___x_1750_; 
v___x_1750_ = l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg(v_name_1747_, v_bound_1748_, v_f_1749_);
return v___x_1750_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt8___lam__0(uint8_t v_n_1751_){
_start:
{
lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; uint8_t v___x_1756_; 
v___x_1752_ = lean_uint8_to_nat(v_n_1751_);
v___x_1753_ = lean_nat_to_int(v___x_1752_);
v___x_1754_ = lean_nat_abs(v___x_1753_);
v___x_1755_ = lean_cstr_to_nat("9007199254740991");
v___x_1756_ = lean_nat_dec_le(v___x_1754_, v___x_1755_);
lean_dec(v___x_1754_);
if (v___x_1756_ == 0)
{
lean_object* v___x_1757_; 
v___x_1757_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1757_, 0, v___x_1753_);
return v___x_1757_;
}
else
{
double v___x_1758_; lean_object* v___x_1759_; 
v___x_1758_ = l_Float_ofInt(v___x_1753_);
lean_dec(v___x_1753_);
v___x_1759_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1759_, 0, v___x_1758_);
return v___x_1759_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt8___lam__0___boxed(lean_object* v_n_1760_){
_start:
{
uint8_t v_n_boxed_1761_; lean_object* v_res_1762_; 
v_n_boxed_1761_ = lean_unbox(v_n_1760_);
v_res_1762_ = l_Lasm_JS_instToJSUInt8___lam__0(v_n_boxed_1761_);
return v_res_1762_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt8___closed__2(void){
_start:
{
lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; 
v___x_1767_ = ((lean_object*)(l_Lasm_JS_instFromJSUInt8___closed__1));
v___x_1768_ = lean_unsigned_to_nat(256u);
v___x_1769_ = ((lean_object*)(l_Lasm_JS_instFromJSUInt8___closed__0));
v___x_1770_ = l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg(v___x_1769_, v___x_1768_, v___x_1767_);
return v___x_1770_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt8(void){
_start:
{
lean_object* v___x_1771_; 
v___x_1771_ = lean_obj_once(&l_Lasm_JS_instFromJSUInt8___closed__2, &l_Lasm_JS_instFromJSUInt8___closed__2_once, _init_l_Lasm_JS_instFromJSUInt8___closed__2);
return v___x_1771_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt16___lam__0(uint16_t v_n_1772_){
_start:
{
lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; uint8_t v___x_1777_; 
v___x_1773_ = lean_uint16_to_nat(v_n_1772_);
v___x_1774_ = lean_nat_to_int(v___x_1773_);
v___x_1775_ = lean_nat_abs(v___x_1774_);
v___x_1776_ = lean_cstr_to_nat("9007199254740991");
v___x_1777_ = lean_nat_dec_le(v___x_1775_, v___x_1776_);
lean_dec(v___x_1775_);
if (v___x_1777_ == 0)
{
lean_object* v___x_1778_; 
v___x_1778_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1778_, 0, v___x_1774_);
return v___x_1778_;
}
else
{
double v___x_1779_; lean_object* v___x_1780_; 
v___x_1779_ = l_Float_ofInt(v___x_1774_);
lean_dec(v___x_1774_);
v___x_1780_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1780_, 0, v___x_1779_);
return v___x_1780_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt16___lam__0___boxed(lean_object* v_n_1781_){
_start:
{
uint16_t v_n_boxed_1782_; lean_object* v_res_1783_; 
v_n_boxed_1782_ = lean_unbox(v_n_1781_);
v_res_1783_ = l_Lasm_JS_instToJSUInt16___lam__0(v_n_boxed_1782_);
return v_res_1783_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt16___closed__2(void){
_start:
{
lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; 
v___x_1788_ = ((lean_object*)(l_Lasm_JS_instFromJSUInt16___closed__1));
v___x_1789_ = lean_unsigned_to_nat(65536u);
v___x_1790_ = ((lean_object*)(l_Lasm_JS_instFromJSUInt16___closed__0));
v___x_1791_ = l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg(v___x_1790_, v___x_1789_, v___x_1788_);
return v___x_1791_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt16(void){
_start:
{
lean_object* v___x_1792_; 
v___x_1792_ = lean_obj_once(&l_Lasm_JS_instFromJSUInt16___closed__2, &l_Lasm_JS_instFromJSUInt16___closed__2_once, _init_l_Lasm_JS_instFromJSUInt16___closed__2);
return v___x_1792_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt32___lam__0(uint32_t v_n_1793_){
_start:
{
lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; uint8_t v___x_1798_; 
v___x_1794_ = lean_uint32_to_nat(v_n_1793_);
v___x_1795_ = lean_nat_to_int(v___x_1794_);
v___x_1796_ = lean_nat_abs(v___x_1795_);
v___x_1797_ = lean_cstr_to_nat("9007199254740991");
v___x_1798_ = lean_nat_dec_le(v___x_1796_, v___x_1797_);
lean_dec(v___x_1796_);
if (v___x_1798_ == 0)
{
lean_object* v___x_1799_; 
v___x_1799_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1799_, 0, v___x_1795_);
return v___x_1799_;
}
else
{
double v___x_1800_; lean_object* v___x_1801_; 
v___x_1800_ = l_Float_ofInt(v___x_1795_);
lean_dec(v___x_1795_);
v___x_1801_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1801_, 0, v___x_1800_);
return v___x_1801_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt32___lam__0___boxed(lean_object* v_n_1802_){
_start:
{
uint32_t v_n_boxed_1803_; lean_object* v_res_1804_; 
v_n_boxed_1803_ = lean_unbox_uint32(v_n_1802_);
lean_dec(v_n_1802_);
v_res_1804_ = l_Lasm_JS_instToJSUInt32___lam__0(v_n_boxed_1803_);
return v_res_1804_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt32___closed__2(void){
_start:
{
lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; 
v___x_1809_ = ((lean_object*)(l_Lasm_JS_instFromJSUInt32___closed__1));
v___x_1810_ = lean_cstr_to_nat("4294967296");
v___x_1811_ = ((lean_object*)(l_Lasm_JS_instFromJSUInt32___closed__0));
v___x_1812_ = l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg(v___x_1811_, v___x_1810_, v___x_1809_);
return v___x_1812_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt32(void){
_start:
{
lean_object* v___x_1813_; 
v___x_1813_ = lean_obj_once(&l_Lasm_JS_instFromJSUInt32___closed__2, &l_Lasm_JS_instFromJSUInt32___closed__2_once, _init_l_Lasm_JS_instFromJSUInt32___closed__2);
return v___x_1813_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt64___lam__0(uint64_t v_n_1814_){
_start:
{
lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; uint8_t v___x_1819_; 
v___x_1815_ = lean_uint64_to_nat(v_n_1814_);
v___x_1816_ = lean_nat_to_int(v___x_1815_);
v___x_1817_ = lean_nat_abs(v___x_1816_);
v___x_1818_ = lean_cstr_to_nat("9007199254740991");
v___x_1819_ = lean_nat_dec_le(v___x_1817_, v___x_1818_);
lean_dec(v___x_1817_);
if (v___x_1819_ == 0)
{
lean_object* v___x_1820_; 
v___x_1820_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1820_, 0, v___x_1816_);
return v___x_1820_;
}
else
{
double v___x_1821_; lean_object* v___x_1822_; 
v___x_1821_ = l_Float_ofInt(v___x_1816_);
lean_dec(v___x_1816_);
v___x_1822_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1822_, 0, v___x_1821_);
return v___x_1822_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSUInt64___lam__0___boxed(lean_object* v_n_1823_){
_start:
{
uint64_t v_n_boxed_1824_; lean_object* v_res_1825_; 
v_n_boxed_1824_ = lean_unbox_uint64(v_n_1823_);
lean_dec_ref(v_n_1823_);
v_res_1825_ = l_Lasm_JS_instToJSUInt64___lam__0(v_n_boxed_1824_);
return v_res_1825_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt64___closed__1(void){
_start:
{
lean_object* v___x_1829_; 
v___x_1829_ = lean_cstr_to_nat("18446744073709551616");
return v___x_1829_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt64___closed__3(void){
_start:
{
lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; 
v___x_1831_ = ((lean_object*)(l_Lasm_JS_instFromJSUInt64___closed__2));
v___x_1832_ = lean_obj_once(&l_Lasm_JS_instFromJSUInt64___closed__1, &l_Lasm_JS_instFromJSUInt64___closed__1_once, _init_l_Lasm_JS_instFromJSUInt64___closed__1);
v___x_1833_ = ((lean_object*)(l_Lasm_JS_instFromJSUInt64___closed__0));
v___x_1834_ = l___private_Lasm_JS_Core_0__Lasm_JS_fromBounded___redArg(v___x_1833_, v___x_1832_, v___x_1831_);
return v___x_1834_;
}
}
static lean_object* _init_l_Lasm_JS_instFromJSUInt64(void){
_start:
{
lean_object* v___x_1835_; 
v___x_1835_ = lean_obj_once(&l_Lasm_JS_instFromJSUInt64___closed__3, &l_Lasm_JS_instFromJSUInt64___closed__3_once, _init_l_Lasm_JS_instFromJSUInt64___closed__3);
return v___x_1835_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSArray___redArg___lam__0(lean_object* v_inst_1836_, lean_object* v_x_1837_){
_start:
{
lean_object* v___x_1838_; 
v___x_1838_ = lean_apply_1(v_inst_1836_, v_x_1837_);
return v___x_1838_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSArray___redArg___lam__1(lean_object* v___f_1858_, lean_object* v_xs_1859_){
_start:
{
lean_object* v___x_1860_; size_t v_sz_1861_; size_t v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; 
v___x_1860_ = ((lean_object*)(l_Lasm_JS_instToJSArray___redArg___lam__1___closed__9));
v_sz_1861_ = lean_array_size(v_xs_1859_);
v___x_1862_ = ((size_t)0ULL);
v___x_1863_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1860_, v___f_1858_, v_sz_1861_, v___x_1862_, v_xs_1859_);
v___x_1864_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1864_, 0, v___x_1863_);
return v___x_1864_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSArray___redArg(lean_object* v_inst_1865_){
_start:
{
lean_object* v___f_1866_; lean_object* v___f_1867_; 
v___f_1866_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSArray___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1866_, 0, v_inst_1865_);
v___f_1867_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSArray___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1867_, 0, v___f_1866_);
return v___f_1867_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSArray(lean_object* v_00_u03b1_1868_, lean_object* v_inst_1869_){
_start:
{
lean_object* v___x_1870_; 
v___x_1870_ = l_Lasm_JS_instToJSArray___redArg(v_inst_1869_);
return v___x_1870_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSArray___redArg___lam__0(lean_object* v_fromJS_1871_, lean_object* v_x_1872_){
_start:
{
lean_object* v___x_1873_; 
v___x_1873_ = lean_apply_1(v_fromJS_1871_, v_x_1872_);
return v___x_1873_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSArray___redArg___lam__1(lean_object* v___x_1878_, lean_object* v___f_1879_, lean_object* v_typeName_1880_, lean_object* v_x_1881_){
_start:
{
if (lean_obj_tag(v_x_1881_) == 7)
{
lean_object* v_items_1882_; size_t v_sz_1883_; size_t v___x_1884_; lean_object* v___x_1885_; 
v_items_1882_ = lean_ctor_get(v_x_1881_, 0);
lean_inc_ref(v_items_1882_);
lean_dec_ref_known(v_x_1881_, 1);
v_sz_1883_ = lean_array_size(v_items_1882_);
v___x_1884_ = ((size_t)0ULL);
v___x_1885_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1878_, v___f_1879_, v_sz_1883_, v___x_1884_, v_items_1882_);
if (lean_obj_tag(v___x_1885_) == 0)
{
lean_object* v_a_1886_; lean_object* v___x_1888_; uint8_t v_isShared_1889_; uint8_t v_isSharedCheck_1904_; 
v_a_1886_ = lean_ctor_get(v___x_1885_, 0);
v_isSharedCheck_1904_ = !lean_is_exclusive(v___x_1885_);
if (v_isSharedCheck_1904_ == 0)
{
v___x_1888_ = v___x_1885_;
v_isShared_1889_ = v_isSharedCheck_1904_;
goto v_resetjp_1887_;
}
else
{
lean_inc(v_a_1886_);
lean_dec(v___x_1885_);
v___x_1888_ = lean_box(0);
v_isShared_1889_ = v_isSharedCheck_1904_;
goto v_resetjp_1887_;
}
v_resetjp_1887_:
{
lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; uint8_t v___x_1894_; 
v___x_1890_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__0));
v___x_1891_ = lean_string_append(v___x_1890_, v_typeName_1880_);
v___x_1892_ = lean_string_utf8_byte_size(v_a_1886_);
v___x_1893_ = lean_unsigned_to_nat(0u);
v___x_1894_ = lean_nat_dec_eq(v___x_1892_, v___x_1893_);
if (v___x_1894_ == 0)
{
lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1899_; 
v___x_1895_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__1));
v___x_1896_ = lean_string_append(v___x_1895_, v_a_1886_);
lean_dec(v_a_1886_);
v___x_1897_ = lean_string_append(v___x_1891_, v___x_1896_);
lean_dec_ref(v___x_1896_);
if (v_isShared_1889_ == 0)
{
lean_ctor_set(v___x_1888_, 0, v___x_1897_);
v___x_1899_ = v___x_1888_;
goto v_reusejp_1898_;
}
else
{
lean_object* v_reuseFailAlloc_1900_; 
v_reuseFailAlloc_1900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1900_, 0, v___x_1897_);
v___x_1899_ = v_reuseFailAlloc_1900_;
goto v_reusejp_1898_;
}
v_reusejp_1898_:
{
return v___x_1899_;
}
}
else
{
lean_object* v___x_1902_; 
lean_dec(v_a_1886_);
if (v_isShared_1889_ == 0)
{
lean_ctor_set(v___x_1888_, 0, v___x_1891_);
v___x_1902_ = v___x_1888_;
goto v_reusejp_1901_;
}
else
{
lean_object* v_reuseFailAlloc_1903_; 
v_reuseFailAlloc_1903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1903_, 0, v___x_1891_);
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
return v___x_1885_;
}
}
else
{
lean_object* v___x_1905_; 
lean_dec(v_x_1881_);
lean_dec_ref(v___f_1879_);
lean_dec_ref(v___x_1878_);
v___x_1905_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__2));
return v___x_1905_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSArray___redArg___lam__1___boxed(lean_object* v___x_1906_, lean_object* v___f_1907_, lean_object* v_typeName_1908_, lean_object* v_x_1909_){
_start:
{
lean_object* v_res_1910_; 
v_res_1910_ = l_Lasm_JS_instFromJSArray___redArg___lam__1(v___x_1906_, v___f_1907_, v_typeName_1908_, v_x_1909_);
lean_dec_ref(v_typeName_1908_);
return v_res_1910_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSArray___redArg(lean_object* v_inst_1931_){
_start:
{
lean_object* v___x_1932_; lean_object* v_fromJS_1933_; lean_object* v_typeName_1934_; lean_object* v___x_1936_; uint8_t v_isShared_1937_; uint8_t v_isSharedCheck_1948_; 
v___x_1932_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___closed__9));
v_fromJS_1933_ = lean_ctor_get(v_inst_1931_, 0);
v_typeName_1934_ = lean_ctor_get(v_inst_1931_, 1);
v_isSharedCheck_1948_ = !lean_is_exclusive(v_inst_1931_);
if (v_isSharedCheck_1948_ == 0)
{
v___x_1936_ = v_inst_1931_;
v_isShared_1937_ = v_isSharedCheck_1948_;
goto v_resetjp_1935_;
}
else
{
lean_inc(v_typeName_1934_);
lean_inc(v_fromJS_1933_);
lean_dec(v_inst_1931_);
v___x_1936_ = lean_box(0);
v_isShared_1937_ = v_isSharedCheck_1948_;
goto v_resetjp_1935_;
}
v_resetjp_1935_:
{
lean_object* v___f_1938_; lean_object* v___f_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; uint8_t v___x_1944_; lean_object* v___x_1946_; 
v___f_1938_ = lean_alloc_closure((void*)(l_Lasm_JS_instFromJSArray___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1938_, 0, v_fromJS_1933_);
lean_inc_ref(v_typeName_1934_);
v___f_1939_ = lean_alloc_closure((void*)(l_Lasm_JS_instFromJSArray___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_1939_, 0, v___x_1932_);
lean_closure_set(v___f_1939_, 1, v___f_1938_);
lean_closure_set(v___f_1939_, 2, v_typeName_1934_);
v___x_1940_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___closed__10));
v___x_1941_ = lean_string_append(v___x_1940_, v_typeName_1934_);
lean_dec_ref(v_typeName_1934_);
v___x_1942_ = ((lean_object*)(l_Lasm_JS_Wire_read___closed__1));
v___x_1943_ = lean_string_append(v___x_1941_, v___x_1942_);
v___x_1944_ = 0;
if (v_isShared_1937_ == 0)
{
lean_ctor_set(v___x_1936_, 1, v___x_1943_);
lean_ctor_set(v___x_1936_, 0, v___f_1939_);
v___x_1946_ = v___x_1936_;
goto v_reusejp_1945_;
}
else
{
lean_object* v_reuseFailAlloc_1947_; 
v_reuseFailAlloc_1947_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_1947_, 0, v___f_1939_);
lean_ctor_set(v_reuseFailAlloc_1947_, 1, v___x_1943_);
v___x_1946_ = v_reuseFailAlloc_1947_;
goto v_reusejp_1945_;
}
v_reusejp_1945_:
{
lean_ctor_set_uint8(v___x_1946_, sizeof(void*)*2, v___x_1944_);
return v___x_1946_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSArray(lean_object* v_00_u03b1_1949_, lean_object* v_inst_1950_){
_start:
{
lean_object* v___x_1951_; 
v___x_1951_ = l_Lasm_JS_instFromJSArray___redArg(v_inst_1950_);
return v___x_1951_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSList___redArg___lam__1(lean_object* v___f_1952_, lean_object* v_xs_1953_){
_start:
{
lean_object* v___x_1954_; lean_object* v___x_1955_; size_t v_sz_1956_; size_t v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; 
v___x_1954_ = lean_array_mk(v_xs_1953_);
v___x_1955_ = ((lean_object*)(l_Lasm_JS_instToJSArray___redArg___lam__1___closed__9));
v_sz_1956_ = lean_array_size(v___x_1954_);
v___x_1957_ = ((size_t)0ULL);
v___x_1958_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1955_, v___f_1952_, v_sz_1956_, v___x_1957_, v___x_1954_);
v___x_1959_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1959_, 0, v___x_1958_);
return v___x_1959_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSList___redArg(lean_object* v_inst_1960_){
_start:
{
lean_object* v___f_1961_; lean_object* v___f_1962_; 
v___f_1961_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSArray___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1961_, 0, v_inst_1960_);
v___f_1962_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSList___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1962_, 0, v___f_1961_);
return v___f_1962_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSList(lean_object* v_00_u03b1_1963_, lean_object* v_inst_1964_){
_start:
{
lean_object* v___x_1965_; 
v___x_1965_ = l_Lasm_JS_instToJSList___redArg(v_inst_1964_);
return v___x_1965_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSList___redArg___lam__1(lean_object* v___f_1968_, lean_object* v_typeName_1969_, lean_object* v_d_1970_){
_start:
{
lean_object* v___x_1971_; 
v___x_1971_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___closed__9));
if (lean_obj_tag(v_d_1970_) == 7)
{
lean_object* v_items_1972_; size_t v_sz_1973_; size_t v___x_1974_; lean_object* v___x_1975_; 
v_items_1972_ = lean_ctor_get(v_d_1970_, 0);
lean_inc_ref(v_items_1972_);
lean_dec_ref_known(v_d_1970_, 1);
v_sz_1973_ = lean_array_size(v_items_1972_);
v___x_1974_ = ((size_t)0ULL);
v___x_1975_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1971_, v___f_1968_, v_sz_1973_, v___x_1974_, v_items_1972_);
if (lean_obj_tag(v___x_1975_) == 0)
{
lean_object* v_a_1976_; lean_object* v___x_1978_; uint8_t v_isShared_1979_; uint8_t v_isSharedCheck_1994_; 
v_a_1976_ = lean_ctor_get(v___x_1975_, 0);
v_isSharedCheck_1994_ = !lean_is_exclusive(v___x_1975_);
if (v_isSharedCheck_1994_ == 0)
{
v___x_1978_ = v___x_1975_;
v_isShared_1979_ = v_isSharedCheck_1994_;
goto v_resetjp_1977_;
}
else
{
lean_inc(v_a_1976_);
lean_dec(v___x_1975_);
v___x_1978_ = lean_box(0);
v_isShared_1979_ = v_isSharedCheck_1994_;
goto v_resetjp_1977_;
}
v_resetjp_1977_:
{
lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; uint8_t v___x_1984_; 
v___x_1980_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__0));
v___x_1981_ = lean_string_append(v___x_1980_, v_typeName_1969_);
v___x_1982_ = lean_string_utf8_byte_size(v_a_1976_);
v___x_1983_ = lean_unsigned_to_nat(0u);
v___x_1984_ = lean_nat_dec_eq(v___x_1982_, v___x_1983_);
if (v___x_1984_ == 0)
{
lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1989_; 
v___x_1985_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__1));
v___x_1986_ = lean_string_append(v___x_1985_, v_a_1976_);
lean_dec(v_a_1976_);
v___x_1987_ = lean_string_append(v___x_1981_, v___x_1986_);
lean_dec_ref(v___x_1986_);
if (v_isShared_1979_ == 0)
{
lean_ctor_set(v___x_1978_, 0, v___x_1987_);
v___x_1989_ = v___x_1978_;
goto v_reusejp_1988_;
}
else
{
lean_object* v_reuseFailAlloc_1990_; 
v_reuseFailAlloc_1990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1990_, 0, v___x_1987_);
v___x_1989_ = v_reuseFailAlloc_1990_;
goto v_reusejp_1988_;
}
v_reusejp_1988_:
{
return v___x_1989_;
}
}
else
{
lean_object* v___x_1992_; 
lean_dec(v_a_1976_);
if (v_isShared_1979_ == 0)
{
lean_ctor_set(v___x_1978_, 0, v___x_1981_);
v___x_1992_ = v___x_1978_;
goto v_reusejp_1991_;
}
else
{
lean_object* v_reuseFailAlloc_1993_; 
v_reuseFailAlloc_1993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1993_, 0, v___x_1981_);
v___x_1992_ = v_reuseFailAlloc_1993_;
goto v_reusejp_1991_;
}
v_reusejp_1991_:
{
return v___x_1992_;
}
}
}
}
else
{
lean_object* v_a_1995_; lean_object* v___x_1997_; uint8_t v_isShared_1998_; uint8_t v_isSharedCheck_2003_; 
v_a_1995_ = lean_ctor_get(v___x_1975_, 0);
v_isSharedCheck_2003_ = !lean_is_exclusive(v___x_1975_);
if (v_isSharedCheck_2003_ == 0)
{
v___x_1997_ = v___x_1975_;
v_isShared_1998_ = v_isSharedCheck_2003_;
goto v_resetjp_1996_;
}
else
{
lean_inc(v_a_1995_);
lean_dec(v___x_1975_);
v___x_1997_ = lean_box(0);
v_isShared_1998_ = v_isSharedCheck_2003_;
goto v_resetjp_1996_;
}
v_resetjp_1996_:
{
lean_object* v___x_1999_; lean_object* v___x_2001_; 
v___x_1999_ = lean_array_to_list(v_a_1995_);
if (v_isShared_1998_ == 0)
{
lean_ctor_set(v___x_1997_, 0, v___x_1999_);
v___x_2001_ = v___x_1997_;
goto v_reusejp_2000_;
}
else
{
lean_object* v_reuseFailAlloc_2002_; 
v_reuseFailAlloc_2002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2002_, 0, v___x_1999_);
v___x_2001_ = v_reuseFailAlloc_2002_;
goto v_reusejp_2000_;
}
v_reusejp_2000_:
{
return v___x_2001_;
}
}
}
}
else
{
lean_object* v___x_2004_; 
lean_dec(v_d_1970_);
lean_dec_ref(v___f_1968_);
v___x_2004_ = ((lean_object*)(l_Lasm_JS_instFromJSList___redArg___lam__1___closed__0));
return v___x_2004_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSList___redArg___lam__1___boxed(lean_object* v___f_2005_, lean_object* v_typeName_2006_, lean_object* v_d_2007_){
_start:
{
lean_object* v_res_2008_; 
v_res_2008_ = l_Lasm_JS_instFromJSList___redArg___lam__1(v___f_2005_, v_typeName_2006_, v_d_2007_);
lean_dec_ref(v_typeName_2006_);
return v_res_2008_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSList___redArg(lean_object* v_inst_2010_){
_start:
{
lean_object* v_fromJS_2011_; lean_object* v_typeName_2012_; lean_object* v___x_2014_; uint8_t v_isShared_2015_; uint8_t v_isSharedCheck_2026_; 
v_fromJS_2011_ = lean_ctor_get(v_inst_2010_, 0);
v_typeName_2012_ = lean_ctor_get(v_inst_2010_, 1);
v_isSharedCheck_2026_ = !lean_is_exclusive(v_inst_2010_);
if (v_isSharedCheck_2026_ == 0)
{
v___x_2014_ = v_inst_2010_;
v_isShared_2015_ = v_isSharedCheck_2026_;
goto v_resetjp_2013_;
}
else
{
lean_inc(v_typeName_2012_);
lean_inc(v_fromJS_2011_);
lean_dec(v_inst_2010_);
v___x_2014_ = lean_box(0);
v_isShared_2015_ = v_isSharedCheck_2026_;
goto v_resetjp_2013_;
}
v_resetjp_2013_:
{
lean_object* v___f_2016_; lean_object* v___f_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; uint8_t v___x_2022_; lean_object* v___x_2024_; 
v___f_2016_ = lean_alloc_closure((void*)(l_Lasm_JS_instFromJSArray___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2016_, 0, v_fromJS_2011_);
lean_inc_ref(v_typeName_2012_);
v___f_2017_ = lean_alloc_closure((void*)(l_Lasm_JS_instFromJSList___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_2017_, 0, v___f_2016_);
lean_closure_set(v___f_2017_, 1, v_typeName_2012_);
v___x_2018_ = ((lean_object*)(l_Lasm_JS_instFromJSList___redArg___closed__0));
v___x_2019_ = lean_string_append(v___x_2018_, v_typeName_2012_);
lean_dec_ref(v_typeName_2012_);
v___x_2020_ = ((lean_object*)(l_Lasm_JS_Wire_read___closed__1));
v___x_2021_ = lean_string_append(v___x_2019_, v___x_2020_);
v___x_2022_ = 0;
if (v_isShared_2015_ == 0)
{
lean_ctor_set(v___x_2014_, 1, v___x_2021_);
lean_ctor_set(v___x_2014_, 0, v___f_2017_);
v___x_2024_ = v___x_2014_;
goto v_reusejp_2023_;
}
else
{
lean_object* v_reuseFailAlloc_2025_; 
v_reuseFailAlloc_2025_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2025_, 0, v___f_2017_);
lean_ctor_set(v_reuseFailAlloc_2025_, 1, v___x_2021_);
v___x_2024_ = v_reuseFailAlloc_2025_;
goto v_reusejp_2023_;
}
v_reusejp_2023_:
{
lean_ctor_set_uint8(v___x_2024_, sizeof(void*)*2, v___x_2022_);
return v___x_2024_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSList(lean_object* v_00_u03b1_2027_, lean_object* v_inst_2028_){
_start:
{
lean_object* v___x_2029_; 
v___x_2029_ = l_Lasm_JS_instFromJSList___redArg(v_inst_2028_);
return v___x_2029_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSOption___redArg___lam__0(lean_object* v_inst_2030_, lean_object* v_x_2031_){
_start:
{
if (lean_obj_tag(v_x_2031_) == 0)
{
lean_object* v___x_2032_; 
lean_dec_ref(v_inst_2030_);
v___x_2032_ = lean_box(1);
return v___x_2032_;
}
else
{
lean_object* v_val_2033_; lean_object* v___x_2034_; 
v_val_2033_ = lean_ctor_get(v_x_2031_, 0);
lean_inc(v_val_2033_);
lean_dec_ref_known(v_x_2031_, 1);
v___x_2034_ = lean_apply_1(v_inst_2030_, v_val_2033_);
return v___x_2034_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSOption___redArg(lean_object* v_inst_2035_){
_start:
{
lean_object* v___f_2036_; 
v___f_2036_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSOption___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2036_, 0, v_inst_2035_);
return v___f_2036_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSOption(lean_object* v_00_u03b1_2037_, lean_object* v_inst_2038_){
_start:
{
lean_object* v___f_2039_; 
v___f_2039_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSOption___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2039_, 0, v_inst_2038_);
return v___f_2039_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSOption___redArg___lam__0(lean_object* v_fromJS_2042_, lean_object* v_x_2043_){
_start:
{
switch(lean_obj_tag(v_x_2043_))
{
case 1:
{
lean_dec_ref(v_fromJS_2042_);
goto v___jp_2044_;
}
case 0:
{
lean_dec_ref(v_fromJS_2042_);
goto v___jp_2044_;
}
default: 
{
lean_object* v___x_2046_; 
v___x_2046_ = lean_apply_1(v_fromJS_2042_, v_x_2043_);
if (lean_obj_tag(v___x_2046_) == 0)
{
lean_object* v_a_2047_; lean_object* v___x_2049_; uint8_t v_isShared_2050_; uint8_t v_isSharedCheck_2054_; 
v_a_2047_ = lean_ctor_get(v___x_2046_, 0);
v_isSharedCheck_2054_ = !lean_is_exclusive(v___x_2046_);
if (v_isSharedCheck_2054_ == 0)
{
v___x_2049_ = v___x_2046_;
v_isShared_2050_ = v_isSharedCheck_2054_;
goto v_resetjp_2048_;
}
else
{
lean_inc(v_a_2047_);
lean_dec(v___x_2046_);
v___x_2049_ = lean_box(0);
v_isShared_2050_ = v_isSharedCheck_2054_;
goto v_resetjp_2048_;
}
v_resetjp_2048_:
{
lean_object* v___x_2052_; 
if (v_isShared_2050_ == 0)
{
v___x_2052_ = v___x_2049_;
goto v_reusejp_2051_;
}
else
{
lean_object* v_reuseFailAlloc_2053_; 
v_reuseFailAlloc_2053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2053_, 0, v_a_2047_);
v___x_2052_ = v_reuseFailAlloc_2053_;
goto v_reusejp_2051_;
}
v_reusejp_2051_:
{
return v___x_2052_;
}
}
}
else
{
lean_object* v_a_2055_; lean_object* v___x_2057_; uint8_t v_isShared_2058_; uint8_t v_isSharedCheck_2063_; 
v_a_2055_ = lean_ctor_get(v___x_2046_, 0);
v_isSharedCheck_2063_ = !lean_is_exclusive(v___x_2046_);
if (v_isSharedCheck_2063_ == 0)
{
v___x_2057_ = v___x_2046_;
v_isShared_2058_ = v_isSharedCheck_2063_;
goto v_resetjp_2056_;
}
else
{
lean_inc(v_a_2055_);
lean_dec(v___x_2046_);
v___x_2057_ = lean_box(0);
v_isShared_2058_ = v_isSharedCheck_2063_;
goto v_resetjp_2056_;
}
v_resetjp_2056_:
{
lean_object* v___x_2059_; lean_object* v___x_2061_; 
v___x_2059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2059_, 0, v_a_2055_);
if (v_isShared_2058_ == 0)
{
lean_ctor_set(v___x_2057_, 0, v___x_2059_);
v___x_2061_ = v___x_2057_;
goto v_reusejp_2060_;
}
else
{
lean_object* v_reuseFailAlloc_2062_; 
v_reuseFailAlloc_2062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2062_, 0, v___x_2059_);
v___x_2061_ = v_reuseFailAlloc_2062_;
goto v_reusejp_2060_;
}
v_reusejp_2060_:
{
return v___x_2061_;
}
}
}
}
}
v___jp_2044_:
{
lean_object* v___x_2045_; 
v___x_2045_ = ((lean_object*)(l_Lasm_JS_instFromJSOption___redArg___lam__0___closed__0));
return v___x_2045_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSOption___redArg(lean_object* v_inst_2065_){
_start:
{
lean_object* v_fromJS_2066_; lean_object* v_typeName_2067_; uint8_t v_mode_2068_; lean_object* v___x_2070_; uint8_t v_isShared_2071_; uint8_t v_isSharedCheck_2080_; 
v_fromJS_2066_ = lean_ctor_get(v_inst_2065_, 0);
v_typeName_2067_ = lean_ctor_get(v_inst_2065_, 1);
v_mode_2068_ = lean_ctor_get_uint8(v_inst_2065_, sizeof(void*)*2);
v_isSharedCheck_2080_ = !lean_is_exclusive(v_inst_2065_);
if (v_isSharedCheck_2080_ == 0)
{
v___x_2070_ = v_inst_2065_;
v_isShared_2071_ = v_isSharedCheck_2080_;
goto v_resetjp_2069_;
}
else
{
lean_inc(v_typeName_2067_);
lean_inc(v_fromJS_2066_);
lean_dec(v_inst_2065_);
v___x_2070_ = lean_box(0);
v_isShared_2071_ = v_isSharedCheck_2080_;
goto v_resetjp_2069_;
}
v_resetjp_2069_:
{
lean_object* v___f_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2078_; 
v___f_2072_ = lean_alloc_closure((void*)(l_Lasm_JS_instFromJSOption___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2072_, 0, v_fromJS_2066_);
v___x_2073_ = ((lean_object*)(l_Lasm_JS_instFromJSOption___redArg___closed__0));
v___x_2074_ = lean_string_append(v___x_2073_, v_typeName_2067_);
lean_dec_ref(v_typeName_2067_);
v___x_2075_ = ((lean_object*)(l_Lasm_JS_Wire_read___closed__1));
v___x_2076_ = lean_string_append(v___x_2074_, v___x_2075_);
if (v_isShared_2071_ == 0)
{
lean_ctor_set(v___x_2070_, 1, v___x_2076_);
lean_ctor_set(v___x_2070_, 0, v___f_2072_);
v___x_2078_ = v___x_2070_;
goto v_reusejp_2077_;
}
else
{
lean_object* v_reuseFailAlloc_2079_; 
v_reuseFailAlloc_2079_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2079_, 0, v___f_2072_);
lean_ctor_set(v_reuseFailAlloc_2079_, 1, v___x_2076_);
lean_ctor_set_uint8(v_reuseFailAlloc_2079_, sizeof(void*)*2, v_mode_2068_);
v___x_2078_ = v_reuseFailAlloc_2079_;
goto v_reusejp_2077_;
}
v_reusejp_2077_:
{
return v___x_2078_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSOption(lean_object* v_00_u03b1_2081_, lean_object* v_inst_2082_){
_start:
{
lean_object* v___x_2083_; 
v___x_2083_ = l_Lasm_JS_instFromJSOption___redArg(v_inst_2082_);
return v___x_2083_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSProd___redArg___lam__0(lean_object* v_inst_2084_, lean_object* v_inst_2085_, lean_object* v_x_2086_){
_start:
{
lean_object* v_fst_2087_; lean_object* v_snd_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; 
v_fst_2087_ = lean_ctor_get(v_x_2086_, 0);
lean_inc(v_fst_2087_);
v_snd_2088_ = lean_ctor_get(v_x_2086_, 1);
lean_inc(v_snd_2088_);
lean_dec_ref(v_x_2086_);
v___x_2089_ = lean_apply_1(v_inst_2084_, v_fst_2087_);
v___x_2090_ = lean_apply_1(v_inst_2085_, v_snd_2088_);
v___x_2091_ = lean_unsigned_to_nat(2u);
v___x_2092_ = lean_mk_empty_array_with_capacity(v___x_2091_);
v___x_2093_ = lean_array_push(v___x_2092_, v___x_2089_);
v___x_2094_ = lean_array_push(v___x_2093_, v___x_2090_);
v___x_2095_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2095_, 0, v___x_2094_);
return v___x_2095_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSProd___redArg(lean_object* v_inst_2096_, lean_object* v_inst_2097_){
_start:
{
lean_object* v___f_2098_; 
v___f_2098_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSProd___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2098_, 0, v_inst_2096_);
lean_closure_set(v___f_2098_, 1, v_inst_2097_);
return v___f_2098_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instToJSProd(lean_object* v_00_u03b1_2099_, lean_object* v_00_u03b2_2100_, lean_object* v_inst_2101_, lean_object* v_inst_2102_){
_start:
{
lean_object* v___f_2103_; 
v___f_2103_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSProd___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2103_, 0, v_inst_2101_);
lean_closure_set(v___f_2103_, 1, v_inst_2102_);
return v___f_2103_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSProd___redArg___lam__0(lean_object* v_fromJS_2107_, lean_object* v_fromJS_2108_, lean_object* v_x_2109_){
_start:
{
if (lean_obj_tag(v_x_2109_) == 7)
{
lean_object* v_items_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; uint8_t v___x_2115_; 
v_items_2112_ = lean_ctor_get(v_x_2109_, 0);
v___x_2113_ = lean_array_get_size(v_items_2112_);
v___x_2114_ = lean_unsigned_to_nat(2u);
v___x_2115_ = lean_nat_dec_eq(v___x_2113_, v___x_2114_);
if (v___x_2115_ == 0)
{
lean_dec_ref(v_fromJS_2108_);
lean_dec_ref(v_fromJS_2107_);
goto v___jp_2110_;
}
else
{
lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; 
v___x_2116_ = lean_unsigned_to_nat(0u);
v___x_2117_ = lean_array_fget_borrowed(v_items_2112_, v___x_2116_);
lean_inc(v___x_2117_);
v___x_2118_ = lean_apply_1(v_fromJS_2107_, v___x_2117_);
if (lean_obj_tag(v___x_2118_) == 0)
{
lean_object* v_a_2119_; lean_object* v___x_2121_; uint8_t v_isShared_2122_; uint8_t v_isSharedCheck_2126_; 
lean_dec_ref(v_fromJS_2108_);
v_a_2119_ = lean_ctor_get(v___x_2118_, 0);
v_isSharedCheck_2126_ = !lean_is_exclusive(v___x_2118_);
if (v_isSharedCheck_2126_ == 0)
{
v___x_2121_ = v___x_2118_;
v_isShared_2122_ = v_isSharedCheck_2126_;
goto v_resetjp_2120_;
}
else
{
lean_inc(v_a_2119_);
lean_dec(v___x_2118_);
v___x_2121_ = lean_box(0);
v_isShared_2122_ = v_isSharedCheck_2126_;
goto v_resetjp_2120_;
}
v_resetjp_2120_:
{
lean_object* v___x_2124_; 
if (v_isShared_2122_ == 0)
{
v___x_2124_ = v___x_2121_;
goto v_reusejp_2123_;
}
else
{
lean_object* v_reuseFailAlloc_2125_; 
v_reuseFailAlloc_2125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2125_, 0, v_a_2119_);
v___x_2124_ = v_reuseFailAlloc_2125_;
goto v_reusejp_2123_;
}
v_reusejp_2123_:
{
return v___x_2124_;
}
}
}
else
{
lean_object* v_a_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; 
v_a_2127_ = lean_ctor_get(v___x_2118_, 0);
lean_inc(v_a_2127_);
lean_dec_ref_known(v___x_2118_, 1);
v___x_2128_ = lean_unsigned_to_nat(1u);
v___x_2129_ = lean_array_fget_borrowed(v_items_2112_, v___x_2128_);
lean_inc(v___x_2129_);
v___x_2130_ = lean_apply_1(v_fromJS_2108_, v___x_2129_);
if (lean_obj_tag(v___x_2130_) == 0)
{
lean_object* v_a_2131_; lean_object* v___x_2133_; uint8_t v_isShared_2134_; uint8_t v_isSharedCheck_2138_; 
lean_dec(v_a_2127_);
v_a_2131_ = lean_ctor_get(v___x_2130_, 0);
v_isSharedCheck_2138_ = !lean_is_exclusive(v___x_2130_);
if (v_isSharedCheck_2138_ == 0)
{
v___x_2133_ = v___x_2130_;
v_isShared_2134_ = v_isSharedCheck_2138_;
goto v_resetjp_2132_;
}
else
{
lean_inc(v_a_2131_);
lean_dec(v___x_2130_);
v___x_2133_ = lean_box(0);
v_isShared_2134_ = v_isSharedCheck_2138_;
goto v_resetjp_2132_;
}
v_resetjp_2132_:
{
lean_object* v___x_2136_; 
if (v_isShared_2134_ == 0)
{
v___x_2136_ = v___x_2133_;
goto v_reusejp_2135_;
}
else
{
lean_object* v_reuseFailAlloc_2137_; 
v_reuseFailAlloc_2137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2137_, 0, v_a_2131_);
v___x_2136_ = v_reuseFailAlloc_2137_;
goto v_reusejp_2135_;
}
v_reusejp_2135_:
{
return v___x_2136_;
}
}
}
else
{
lean_object* v_a_2139_; lean_object* v___x_2141_; uint8_t v_isShared_2142_; uint8_t v_isSharedCheck_2147_; 
v_a_2139_ = lean_ctor_get(v___x_2130_, 0);
v_isSharedCheck_2147_ = !lean_is_exclusive(v___x_2130_);
if (v_isSharedCheck_2147_ == 0)
{
v___x_2141_ = v___x_2130_;
v_isShared_2142_ = v_isSharedCheck_2147_;
goto v_resetjp_2140_;
}
else
{
lean_inc(v_a_2139_);
lean_dec(v___x_2130_);
v___x_2141_ = lean_box(0);
v_isShared_2142_ = v_isSharedCheck_2147_;
goto v_resetjp_2140_;
}
v_resetjp_2140_:
{
lean_object* v___x_2143_; lean_object* v___x_2145_; 
v___x_2143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2143_, 0, v_a_2127_);
lean_ctor_set(v___x_2143_, 1, v_a_2139_);
if (v_isShared_2142_ == 0)
{
lean_ctor_set(v___x_2141_, 0, v___x_2143_);
v___x_2145_ = v___x_2141_;
goto v_reusejp_2144_;
}
else
{
lean_object* v_reuseFailAlloc_2146_; 
v_reuseFailAlloc_2146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2146_, 0, v___x_2143_);
v___x_2145_ = v_reuseFailAlloc_2146_;
goto v_reusejp_2144_;
}
v_reusejp_2144_:
{
return v___x_2145_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_fromJS_2108_);
lean_dec_ref(v_fromJS_2107_);
goto v___jp_2110_;
}
v___jp_2110_:
{
lean_object* v___x_2111_; 
v___x_2111_ = ((lean_object*)(l_Lasm_JS_instFromJSProd___redArg___lam__0___closed__1));
return v___x_2111_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSProd___redArg___lam__0___boxed(lean_object* v_fromJS_2148_, lean_object* v_fromJS_2149_, lean_object* v_x_2150_){
_start:
{
lean_object* v_res_2151_; 
v_res_2151_ = l_Lasm_JS_instFromJSProd___redArg___lam__0(v_fromJS_2148_, v_fromJS_2149_, v_x_2150_);
lean_dec(v_x_2150_);
return v_res_2151_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSProd___redArg(lean_object* v_inst_2154_, lean_object* v_inst_2155_){
_start:
{
lean_object* v_fromJS_2156_; lean_object* v_typeName_2157_; lean_object* v_fromJS_2158_; lean_object* v_typeName_2159_; lean_object* v___x_2161_; uint8_t v_isShared_2162_; uint8_t v_isSharedCheck_2175_; 
v_fromJS_2156_ = lean_ctor_get(v_inst_2154_, 0);
lean_inc_ref(v_fromJS_2156_);
v_typeName_2157_ = lean_ctor_get(v_inst_2154_, 1);
lean_inc_ref(v_typeName_2157_);
lean_dec_ref(v_inst_2154_);
v_fromJS_2158_ = lean_ctor_get(v_inst_2155_, 0);
v_typeName_2159_ = lean_ctor_get(v_inst_2155_, 1);
v_isSharedCheck_2175_ = !lean_is_exclusive(v_inst_2155_);
if (v_isSharedCheck_2175_ == 0)
{
v___x_2161_ = v_inst_2155_;
v_isShared_2162_ = v_isSharedCheck_2175_;
goto v_resetjp_2160_;
}
else
{
lean_inc(v_typeName_2159_);
lean_inc(v_fromJS_2158_);
lean_dec(v_inst_2155_);
v___x_2161_ = lean_box(0);
v_isShared_2162_ = v_isSharedCheck_2175_;
goto v_resetjp_2160_;
}
v_resetjp_2160_:
{
lean_object* v___f_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; uint8_t v___x_2171_; lean_object* v___x_2173_; 
v___f_2163_ = lean_alloc_closure((void*)(l_Lasm_JS_instFromJSProd___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2163_, 0, v_fromJS_2156_);
lean_closure_set(v___f_2163_, 1, v_fromJS_2158_);
v___x_2164_ = ((lean_object*)(l_Lasm_JS_instFromJSProd___redArg___closed__0));
v___x_2165_ = lean_string_append(v___x_2164_, v_typeName_2157_);
lean_dec_ref(v_typeName_2157_);
v___x_2166_ = ((lean_object*)(l_Lasm_JS_instFromJSProd___redArg___closed__1));
v___x_2167_ = lean_string_append(v___x_2165_, v___x_2166_);
v___x_2168_ = lean_string_append(v___x_2167_, v_typeName_2159_);
lean_dec_ref(v_typeName_2159_);
v___x_2169_ = ((lean_object*)(l_Lasm_JS_Wire_read___closed__1));
v___x_2170_ = lean_string_append(v___x_2168_, v___x_2169_);
v___x_2171_ = 0;
if (v_isShared_2162_ == 0)
{
lean_ctor_set(v___x_2161_, 1, v___x_2170_);
lean_ctor_set(v___x_2161_, 0, v___f_2163_);
v___x_2173_ = v___x_2161_;
goto v_reusejp_2172_;
}
else
{
lean_object* v_reuseFailAlloc_2174_; 
v_reuseFailAlloc_2174_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2174_, 0, v___f_2163_);
lean_ctor_set(v_reuseFailAlloc_2174_, 1, v___x_2170_);
v___x_2173_ = v_reuseFailAlloc_2174_;
goto v_reusejp_2172_;
}
v_reusejp_2172_:
{
lean_ctor_set_uint8(v___x_2173_, sizeof(void*)*2, v___x_2171_);
return v___x_2173_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instFromJSProd(lean_object* v_00_u03b1_2176_, lean_object* v_00_u03b2_2177_, lean_object* v_inst_2178_, lean_object* v_inst_2179_){
_start:
{
lean_object* v___x_2180_; 
v___x_2180_ = l_Lasm_JS_instFromJSProd___redArg(v_inst_2178_, v_inst_2179_);
return v___x_2180_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_obj(lean_object* v_fields_2181_){
_start:
{
lean_object* v___x_2182_; lean_object* v___x_2183_; 
v___x_2182_ = lean_array_mk(v_fields_2181_);
v___x_2183_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_2183_, 0, v___x_2182_);
return v___x_2183_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___redArg(lean_object* v_inst_2190_, lean_object* v_d_2191_, lean_object* v_key_2192_){
_start:
{
if (lean_obj_tag(v_d_2191_) == 8)
{
lean_object* v_fromJS_2193_; lean_object* v_typeName_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; 
v_fromJS_2193_ = lean_ctor_get(v_inst_2190_, 0);
lean_inc_ref(v_fromJS_2193_);
v_typeName_2194_ = lean_ctor_get(v_inst_2190_, 1);
lean_inc_ref(v_typeName_2194_);
lean_dec_ref(v_inst_2190_);
v___x_2195_ = l_Lasm_JS_Data_field(v_d_2191_, v_key_2192_);
lean_inc(v___x_2195_);
v___x_2196_ = lean_apply_1(v_fromJS_2193_, v___x_2195_);
if (lean_obj_tag(v___x_2196_) == 0)
{
lean_object* v_a_2197_; lean_object* v___x_2199_; uint8_t v_isShared_2200_; uint8_t v_isSharedCheck_2224_; 
v_a_2197_ = lean_ctor_get(v___x_2196_, 0);
v_isSharedCheck_2224_ = !lean_is_exclusive(v___x_2196_);
if (v_isSharedCheck_2224_ == 0)
{
v___x_2199_ = v___x_2196_;
v_isShared_2200_ = v_isSharedCheck_2224_;
goto v_resetjp_2198_;
}
else
{
lean_inc(v_a_2197_);
lean_dec(v___x_2196_);
v___x_2199_ = lean_box(0);
v_isShared_2200_ = v_isSharedCheck_2224_;
goto v_resetjp_2198_;
}
v_resetjp_2198_:
{
lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; uint8_t v___x_2212_; 
v___x_2201_ = ((lean_object*)(l_Lasm_JS_readField___redArg___closed__0));
v___x_2202_ = lean_string_append(v___x_2201_, v_key_2192_);
v___x_2203_ = ((lean_object*)(l_Lasm_JS_readField___redArg___closed__1));
v___x_2204_ = lean_string_append(v___x_2202_, v___x_2203_);
v___x_2205_ = lean_string_append(v___x_2204_, v_typeName_2194_);
lean_dec_ref(v_typeName_2194_);
v___x_2206_ = ((lean_object*)(l_Lasm_JS_readField___redArg___closed__2));
v___x_2207_ = lean_string_append(v___x_2205_, v___x_2206_);
v___x_2208_ = l_Lasm_JS_Data_describe(v___x_2195_);
v___x_2209_ = lean_string_append(v___x_2207_, v___x_2208_);
lean_dec_ref(v___x_2208_);
v___x_2210_ = lean_string_utf8_byte_size(v_a_2197_);
v___x_2211_ = lean_unsigned_to_nat(0u);
v___x_2212_ = lean_nat_dec_eq(v___x_2210_, v___x_2211_);
if (v___x_2212_ == 0)
{
lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2219_; 
v___x_2213_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__3));
v___x_2214_ = lean_string_append(v___x_2213_, v_a_2197_);
lean_dec(v_a_2197_);
v___x_2215_ = ((lean_object*)(l_Lasm_JS_Wire_read___closed__1));
v___x_2216_ = lean_string_append(v___x_2214_, v___x_2215_);
v___x_2217_ = lean_string_append(v___x_2209_, v___x_2216_);
lean_dec_ref(v___x_2216_);
if (v_isShared_2200_ == 0)
{
lean_ctor_set(v___x_2199_, 0, v___x_2217_);
v___x_2219_ = v___x_2199_;
goto v_reusejp_2218_;
}
else
{
lean_object* v_reuseFailAlloc_2220_; 
v_reuseFailAlloc_2220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2220_, 0, v___x_2217_);
v___x_2219_ = v_reuseFailAlloc_2220_;
goto v_reusejp_2218_;
}
v_reusejp_2218_:
{
return v___x_2219_;
}
}
else
{
lean_object* v___x_2222_; 
lean_dec(v_a_2197_);
if (v_isShared_2200_ == 0)
{
lean_ctor_set(v___x_2199_, 0, v___x_2209_);
v___x_2222_ = v___x_2199_;
goto v_reusejp_2221_;
}
else
{
lean_object* v_reuseFailAlloc_2223_; 
v_reuseFailAlloc_2223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2223_, 0, v___x_2209_);
v___x_2222_ = v_reuseFailAlloc_2223_;
goto v_reusejp_2221_;
}
v_reusejp_2221_:
{
return v___x_2222_;
}
}
}
}
else
{
lean_dec(v___x_2195_);
lean_dec_ref(v_typeName_2194_);
return v___x_2196_;
}
}
else
{
lean_object* v___x_2225_; 
lean_dec_ref(v_inst_2190_);
v___x_2225_ = ((lean_object*)(l_Lasm_JS_readField___redArg___closed__4));
return v___x_2225_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___redArg___boxed(lean_object* v_inst_2226_, lean_object* v_d_2227_, lean_object* v_key_2228_){
_start:
{
lean_object* v_res_2229_; 
v_res_2229_ = l_Lasm_JS_readField___redArg(v_inst_2226_, v_d_2227_, v_key_2228_);
lean_dec_ref(v_key_2228_);
lean_dec(v_d_2227_);
return v_res_2229_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField(lean_object* v_00_u03b1_2230_, lean_object* v_inst_2231_, lean_object* v_d_2232_, lean_object* v_key_2233_){
_start:
{
lean_object* v___x_2234_; 
v___x_2234_ = l_Lasm_JS_readField___redArg(v_inst_2231_, v_d_2232_, v_key_2233_);
return v___x_2234_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___boxed(lean_object* v_00_u03b1_2235_, lean_object* v_inst_2236_, lean_object* v_d_2237_, lean_object* v_key_2238_){
_start:
{
lean_object* v_res_2239_; 
v_res_2239_ = l_Lasm_JS_readField(v_00_u03b1_2235_, v_inst_2236_, v_d_2237_, v_key_2238_);
lean_dec_ref(v_key_2238_);
lean_dec(v_d_2237_);
return v_res_2239_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_ctorIdx___impl(lean_object* v_x_2240_){
_start:
{
lean_object* v___x_2241_; 
v___x_2241_ = lean_obj_tag_nat(v_x_2240_);
return v___x_2241_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_ctorIdx___impl___boxed(lean_object* v_x_2242_){
_start:
{
lean_object* v_res_2243_; 
v_res_2243_ = l_Lasm_JS_Function_Reply_ctorIdx___impl(v_x_2242_);
lean_dec_ref(v_x_2242_);
return v_res_2243_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_ctorElim___redArg(lean_object* v_t_2244_, lean_object* v_k_2245_){
_start:
{
if (lean_obj_tag(v_t_2244_) == 0)
{
lean_object* v_result_2246_; lean_object* v___x_2247_; 
v_result_2246_ = lean_ctor_get(v_t_2244_, 0);
lean_inc(v_result_2246_);
lean_dec_ref_known(v_t_2244_, 1);
v___x_2247_ = lean_apply_1(v_k_2245_, v_result_2246_);
return v___x_2247_;
}
else
{
lean_object* v_target_2248_; lean_object* v_name_2249_; lean_object* v_args_2250_; lean_object* v___x_2251_; 
v_target_2248_ = lean_ctor_get(v_t_2244_, 0);
lean_inc(v_target_2248_);
v_name_2249_ = lean_ctor_get(v_t_2244_, 1);
lean_inc_ref(v_name_2249_);
v_args_2250_ = lean_ctor_get(v_t_2244_, 2);
lean_inc_ref(v_args_2250_);
lean_dec_ref_known(v_t_2244_, 3);
v___x_2251_ = lean_apply_3(v_k_2245_, v_target_2248_, v_name_2249_, v_args_2250_);
return v___x_2251_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_ctorElim(lean_object* v_motive_2252_, lean_object* v_ctorIdx_2253_, lean_object* v_t_2254_, lean_object* v_h_2255_, lean_object* v_k_2256_){
_start:
{
lean_object* v___x_2257_; 
v___x_2257_ = l_Lasm_JS_Function_Reply_ctorElim___redArg(v_t_2254_, v_k_2256_);
return v___x_2257_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_ctorElim___boxed(lean_object* v_motive_2258_, lean_object* v_ctorIdx_2259_, lean_object* v_t_2260_, lean_object* v_h_2261_, lean_object* v_k_2262_){
_start:
{
lean_object* v_res_2263_; 
v_res_2263_ = l_Lasm_JS_Function_Reply_ctorElim(v_motive_2258_, v_ctorIdx_2259_, v_t_2260_, v_h_2261_, v_k_2262_);
lean_dec(v_ctorIdx_2259_);
return v_res_2263_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_value_elim___redArg(lean_object* v_t_2264_, lean_object* v_value_2265_){
_start:
{
lean_object* v___x_2266_; 
v___x_2266_ = l_Lasm_JS_Function_Reply_ctorElim___redArg(v_t_2264_, v_value_2265_);
return v___x_2266_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_value_elim(lean_object* v_motive_2267_, lean_object* v_t_2268_, lean_object* v_h_2269_, lean_object* v_value_2270_){
_start:
{
lean_object* v___x_2271_; 
v___x_2271_ = l_Lasm_JS_Function_Reply_ctorElim___redArg(v_t_2268_, v_value_2270_);
return v___x_2271_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_callMethod_elim___redArg(lean_object* v_t_2272_, lean_object* v_callMethod_2273_){
_start:
{
lean_object* v___x_2274_; 
v___x_2274_ = l_Lasm_JS_Function_Reply_ctorElim___redArg(v_t_2272_, v_callMethod_2273_);
return v___x_2274_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_Reply_callMethod_elim(lean_object* v_motive_2275_, lean_object* v_t_2276_, lean_object* v_h_2277_, lean_object* v_callMethod_2278_){
_start:
{
lean_object* v___x_2279_; 
v___x_2279_ = l_Lasm_JS_Function_Reply_ctorElim___redArg(v_t_2276_, v_callMethod_2278_);
return v___x_2279_;
}
}
static lean_object* _init_l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__0_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; 
v___x_2280_ = lean_box(0);
v___x_2281_ = lean_unsigned_to_nat(16u);
v___x_2282_ = lean_mk_array(v___x_2281_, v___x_2280_);
return v___x_2282_;
}
}
static lean_object* _init_l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__1_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; 
v___x_2283_ = lean_obj_once(&l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__0_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_, &l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__0_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__0_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_);
v___x_2284_ = lean_unsigned_to_nat(0u);
v___x_2285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2285_, 0, v___x_2284_);
lean_ctor_set(v___x_2285_, 1, v___x_2283_);
return v___x_2285_;
}
}
static lean_object* _init_l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__2_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2286_; uint32_t v___x_2287_; lean_object* v___x_2288_; 
v___x_2286_ = lean_obj_once(&l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__1_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_, &l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__1_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__1_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_);
v___x_2287_ = 1;
v___x_2288_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_2288_, 0, v___x_2286_);
lean_ctor_set(v___x_2288_, 1, v___x_2286_);
lean_ctor_set_uint32(v___x_2288_, sizeof(void*)*2, v___x_2287_);
return v___x_2288_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_initFn_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; 
v___x_2290_ = lean_obj_once(&l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__2_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_, &l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__2_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2__once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_initFn___closed__2_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_);
v___x_2291_ = lean_st_mk_ref(v___x_2290_);
v___x_2292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2292_, 0, v___x_2291_);
return v___x_2292_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_initFn_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2____boxed(lean_object* v_a_2293_){
_start:
{
lean_object* v_res_2294_; 
v_res_2294_ = l___private_Lasm_JS_Core_0__Lasm_JS_initFn_00___x40_Lasm_JS_Core_3811112821____hygCtx___hyg_2_();
return v_res_2294_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_startThread___boxed(lean_object* v_dispatch_2297_, lean_object* v_a_00___x40___internal___hyg_2298_){
_start:
{
lean_object* v_res_2299_; 
v_res_2299_ = lasm_js_start(v_dispatch_2297_);
return v_res_2299_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitInto___boxed(lean_object* v_p_2304_, lean_object* v_value_2305_, lean_object* v_keep_2306_, lean_object* v_a_00___x40___internal___hyg_2307_){
_start:
{
lean_object* v_res_2308_; 
v_res_2308_ = lasm_js_await_into(v_p_2304_, v_value_2305_, v_keep_2306_);
lean_dec(v_keep_2306_);
lean_dec_ref(v_value_2305_);
lean_dec(v_p_2304_);
return v_res_2308_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_park___boxed(lean_object* v_a_00___x40___internal___hyg_2310_){
_start:
{
lean_object* v_res_2311_; 
v_res_2311_ = lasm_js_park();
return v_res_2311_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_startSync___boxed(lean_object* v_dispatch_2314_, lean_object* v_a_00___x40___internal___hyg_2315_){
_start:
{
lean_object* v_res_2316_; 
v_res_2316_ = lasm_js_sync_start(v_dispatch_2314_);
return v_res_2316_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_errorText(lean_object* v_e_2317_){
_start:
{
lean_object* v___x_2318_; 
v___x_2318_ = lean_io_error_to_string(v_e_2317_);
return v___x_2318_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_reply_spec__0___redArg(uint64_t v_call_2319_, lean_object* v_range_2320_, lean_object* v_b_2321_, lean_object* v_i_2322_){
_start:
{
lean_object* v_stop_2324_; lean_object* v_step_2325_; uint8_t v___x_2326_; 
v_stop_2324_ = lean_ctor_get(v_range_2320_, 1);
v_step_2325_ = lean_ctor_get(v_range_2320_, 2);
v___x_2326_ = lean_nat_dec_lt(v_i_2322_, v_stop_2324_);
if (v___x_2326_ == 0)
{
lean_object* v___x_2327_; 
lean_dec(v_i_2322_);
v___x_2327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2327_, 0, v_b_2321_);
return v___x_2327_;
}
else
{
lean_object* v___x_2328_; lean_object* v___x_2329_; uint64_t v___x_2330_; uint64_t v___x_2331_; uint8_t v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; 
v___x_2328_ = lean_unsigned_to_nat(8u);
v___x_2329_ = lean_nat_mul(v___x_2328_, v_i_2322_);
v___x_2330_ = lean_uint64_of_nat(v___x_2329_);
lean_dec(v___x_2329_);
v___x_2331_ = lean_uint64_shift_right(v_call_2319_, v___x_2330_);
v___x_2332_ = lean_uint64_to_uint8(v___x_2331_);
v___x_2333_ = lean_byte_array_push(v_b_2321_, v___x_2332_);
v___x_2334_ = lean_nat_add(v_i_2322_, v_step_2325_);
lean_dec(v_i_2322_);
v_b_2321_ = v___x_2333_;
v_i_2322_ = v___x_2334_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_reply_spec__0___redArg___boxed(lean_object* v_call_2336_, lean_object* v_range_2337_, lean_object* v_b_2338_, lean_object* v_i_2339_, lean_object* v___y_2340_){
_start:
{
uint64_t v_call_boxed_2341_; lean_object* v_res_2342_; 
v_call_boxed_2341_ = lean_unbox_uint64(v_call_2336_);
lean_dec_ref(v_call_2336_);
v_res_2342_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_reply_spec__0___redArg(v_call_boxed_2341_, v_range_2337_, v_b_2338_, v_i_2339_);
lean_dec_ref(v_range_2337_);
return v_res_2342_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply(uint64_t v_call_2343_, lean_object* v_result_2344_){
_start:
{
uint8_t v_fst_2347_; lean_object* v_fst_2348_; lean_object* v_snd_2349_; 
if (lean_obj_tag(v_result_2344_) == 0)
{
lean_object* v_a_2396_; uint8_t v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; 
v_a_2396_ = lean_ctor_get(v_result_2344_, 0);
lean_inc(v_a_2396_);
lean_dec_ref_known(v_result_2344_, 1);
v___x_2397_ = 1;
v___x_2398_ = lean_io_error_to_string(v_a_2396_);
v___x_2399_ = lean_string_to_utf8(v___x_2398_);
v___x_2400_ = lean_box(0);
v_fst_2347_ = v___x_2397_;
v_fst_2348_ = v___x_2399_;
v_snd_2349_ = v___x_2400_;
goto v___jp_2346_;
}
else
{
lean_object* v_a_2401_; lean_object* v___x_2403_; uint8_t v_isShared_2404_; uint8_t v_isSharedCheck_2425_; 
v_a_2401_ = lean_ctor_get(v_result_2344_, 0);
v_isSharedCheck_2425_ = !lean_is_exclusive(v_result_2344_);
if (v_isSharedCheck_2425_ == 0)
{
v___x_2403_ = v_result_2344_;
v_isShared_2404_ = v_isSharedCheck_2425_;
goto v_resetjp_2402_;
}
else
{
lean_inc(v_a_2401_);
lean_dec(v_result_2344_);
v___x_2403_ = lean_box(0);
v_isShared_2404_ = v_isSharedCheck_2425_;
goto v_resetjp_2402_;
}
v_resetjp_2402_:
{
if (lean_obj_tag(v_a_2401_) == 0)
{
lean_object* v_result_2405_; uint8_t v___x_2406_; lean_object* v___x_2407_; 
lean_del_object(v___x_2403_);
v_result_2405_ = lean_ctor_get(v_a_2401_, 0);
lean_inc_n(v_result_2405_, 2);
lean_dec_ref_known(v_a_2401_, 1);
v___x_2406_ = 0;
v___x_2407_ = l_Lasm_JS_Wire_encode(v_result_2405_);
v_fst_2347_ = v___x_2406_;
v_fst_2348_ = v___x_2407_;
v_snd_2349_ = v_result_2405_;
goto v___jp_2346_;
}
else
{
lean_object* v_target_2408_; lean_object* v_name_2409_; lean_object* v_args_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2414_; 
v_target_2408_ = lean_ctor_get(v_a_2401_, 0);
lean_inc(v_target_2408_);
v_name_2409_ = lean_ctor_get(v_a_2401_, 1);
lean_inc_ref(v_name_2409_);
v_args_2410_ = lean_ctor_get(v_a_2401_, 2);
lean_inc_ref(v_args_2410_);
lean_dec_ref_known(v_a_2401_, 3);
v___x_2411_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___x_2412_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2412_, 0, v_target_2408_);
lean_ctor_set(v___x_2412_, 1, v___x_2411_);
if (v_isShared_2404_ == 0)
{
lean_ctor_set_tag(v___x_2403_, 4);
lean_ctor_set(v___x_2403_, 0, v_name_2409_);
v___x_2414_ = v___x_2403_;
goto v_reusejp_2413_;
}
else
{
lean_object* v_reuseFailAlloc_2424_; 
v_reuseFailAlloc_2424_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2424_, 0, v_name_2409_);
v___x_2414_ = v_reuseFailAlloc_2424_;
goto v_reusejp_2413_;
}
v_reusejp_2413_:
{
lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v_d_2421_; uint8_t v___x_2422_; lean_object* v___x_2423_; 
v___x_2415_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2415_, 0, v_args_2410_);
v___x_2416_ = lean_unsigned_to_nat(3u);
v___x_2417_ = lean_mk_empty_array_with_capacity(v___x_2416_);
v___x_2418_ = lean_array_push(v___x_2417_, v___x_2412_);
v___x_2419_ = lean_array_push(v___x_2418_, v___x_2414_);
v___x_2420_ = lean_array_push(v___x_2419_, v___x_2415_);
v_d_2421_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_d_2421_, 0, v___x_2420_);
v___x_2422_ = 2;
lean_inc_ref(v_d_2421_);
v___x_2423_ = l_Lasm_JS_Wire_encode(v_d_2421_);
v_fst_2347_ = v___x_2422_;
v_fst_2348_ = v___x_2423_;
v_snd_2349_ = v_d_2421_;
goto v___jp_2346_;
}
}
}
}
v___jp_2346_:
{
lean_object* v_b_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v_a_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; uint32_t v___x_2357_; uint8_t v___x_2358_; lean_object* v___x_2359_; uint32_t v___x_2360_; uint32_t v___x_2361_; uint8_t v___x_2362_; lean_object* v___x_2363_; uint32_t v___x_2364_; uint32_t v___x_2365_; uint8_t v___x_2366_; lean_object* v___x_2367_; uint32_t v___x_2368_; uint32_t v___x_2369_; uint8_t v___x_2370_; lean_object* v___x_2371_; uint32_t v___x_2372_; uint32_t v___x_2373_; uint64_t v___x_2374_; lean_object* v___x_2375_; uint8_t v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; 
v_b_2350_ = l_ByteArray_empty;
v___x_2351_ = lean_unsigned_to_nat(0u);
v___x_2352_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_Wire_pushU64___closed__0));
v___x_2353_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_reply_spec__0___redArg(v_call_2343_, v___x_2352_, v_b_2350_, v___x_2351_);
v_a_2354_ = lean_ctor_get(v___x_2353_, 0);
lean_inc(v_a_2354_);
lean_dec_ref(v___x_2353_);
v___x_2355_ = lean_byte_array_push(v_a_2354_, v_fst_2347_);
v___x_2356_ = lean_byte_array_size(v_fst_2348_);
v___x_2357_ = lean_uint32_of_nat(v___x_2356_);
v___x_2358_ = lean_uint32_to_uint8(v___x_2357_);
v___x_2359_ = lean_byte_array_push(v___x_2355_, v___x_2358_);
v___x_2360_ = 8;
v___x_2361_ = lean_uint32_shift_right(v___x_2357_, v___x_2360_);
v___x_2362_ = lean_uint32_to_uint8(v___x_2361_);
v___x_2363_ = lean_byte_array_push(v___x_2359_, v___x_2362_);
v___x_2364_ = 16;
v___x_2365_ = lean_uint32_shift_right(v___x_2357_, v___x_2364_);
v___x_2366_ = lean_uint32_to_uint8(v___x_2365_);
v___x_2367_ = lean_byte_array_push(v___x_2363_, v___x_2366_);
v___x_2368_ = 24;
v___x_2369_ = lean_uint32_shift_right(v___x_2357_, v___x_2368_);
v___x_2370_ = lean_uint32_to_uint8(v___x_2369_);
v___x_2371_ = lean_byte_array_push(v___x_2367_, v___x_2370_);
v___x_2372_ = 208;
v___x_2373_ = 0;
v___x_2374_ = 0ULL;
v___x_2375_ = lean_byte_array_size(v___x_2371_);
v___x_2376_ = 0;
v___x_2377_ = lean_byte_array_copy_slice(v_fst_2348_, v___x_2351_, v___x_2371_, v___x_2375_, v___x_2356_, v___x_2376_);
lean_dec_ref(v_fst_2348_);
v___x_2378_ = lean_box(0);
v___x_2379_ = lasm_js_call(v___x_2372_, v___x_2373_, v___x_2374_, v___x_2377_, v_snd_2349_);
lean_dec(v_snd_2349_);
lean_dec_ref(v___x_2377_);
if (lean_obj_tag(v___x_2379_) == 0)
{
lean_object* v___x_2381_; uint8_t v_isShared_2382_; uint8_t v_isSharedCheck_2386_; 
v_isSharedCheck_2386_ = !lean_is_exclusive(v___x_2379_);
if (v_isSharedCheck_2386_ == 0)
{
lean_object* v_unused_2387_; 
v_unused_2387_ = lean_ctor_get(v___x_2379_, 0);
lean_dec(v_unused_2387_);
v___x_2381_ = v___x_2379_;
v_isShared_2382_ = v_isSharedCheck_2386_;
goto v_resetjp_2380_;
}
else
{
lean_dec(v___x_2379_);
v___x_2381_ = lean_box(0);
v_isShared_2382_ = v_isSharedCheck_2386_;
goto v_resetjp_2380_;
}
v_resetjp_2380_:
{
lean_object* v___x_2384_; 
if (v_isShared_2382_ == 0)
{
lean_ctor_set(v___x_2381_, 0, v___x_2378_);
v___x_2384_ = v___x_2381_;
goto v_reusejp_2383_;
}
else
{
lean_object* v_reuseFailAlloc_2385_; 
v_reuseFailAlloc_2385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2385_, 0, v___x_2378_);
v___x_2384_ = v_reuseFailAlloc_2385_;
goto v_reusejp_2383_;
}
v_reusejp_2383_:
{
return v___x_2384_;
}
}
}
else
{
lean_object* v_a_2388_; lean_object* v___x_2390_; uint8_t v_isShared_2391_; uint8_t v_isSharedCheck_2395_; 
v_a_2388_ = lean_ctor_get(v___x_2379_, 0);
v_isSharedCheck_2395_ = !lean_is_exclusive(v___x_2379_);
if (v_isSharedCheck_2395_ == 0)
{
v___x_2390_ = v___x_2379_;
v_isShared_2391_ = v_isSharedCheck_2395_;
goto v_resetjp_2389_;
}
else
{
lean_inc(v_a_2388_);
lean_dec(v___x_2379_);
v___x_2390_ = lean_box(0);
v_isShared_2391_ = v_isSharedCheck_2395_;
goto v_resetjp_2389_;
}
v_resetjp_2389_:
{
lean_object* v___x_2393_; 
if (v_isShared_2391_ == 0)
{
v___x_2393_ = v___x_2390_;
goto v_reusejp_2392_;
}
else
{
lean_object* v_reuseFailAlloc_2394_; 
v_reuseFailAlloc_2394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2394_, 0, v_a_2388_);
v___x_2393_ = v_reuseFailAlloc_2394_;
goto v_reusejp_2392_;
}
v_reusejp_2392_:
{
return v___x_2393_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_reply___boxed(lean_object* v_call_2426_, lean_object* v_result_2427_, lean_object* v_a_2428_){
_start:
{
uint64_t v_call_boxed_2429_; lean_object* v_res_2430_; 
v_call_boxed_2429_ = lean_unbox_uint64(v_call_2426_);
lean_dec_ref(v_call_2426_);
v_res_2430_ = l___private_Lasm_JS_Core_0__Lasm_JS_reply(v_call_boxed_2429_, v_result_2427_);
return v_res_2430_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_reply_spec__0(uint64_t v_call_2431_, lean_object* v_range_2432_, lean_object* v_b_2433_, lean_object* v_i_2434_, lean_object* v_hs_2435_, lean_object* v_hl_2436_){
_start:
{
lean_object* v___x_2438_; 
v___x_2438_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_reply_spec__0___redArg(v_call_2431_, v_range_2432_, v_b_2433_, v_i_2434_);
return v___x_2438_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_reply_spec__0___boxed(lean_object* v_call_2439_, lean_object* v_range_2440_, lean_object* v_b_2441_, lean_object* v_i_2442_, lean_object* v_hs_2443_, lean_object* v_hl_2444_, lean_object* v___y_2445_){
_start:
{
uint64_t v_call_boxed_2446_; lean_object* v_res_2447_; 
v_call_boxed_2446_ = lean_unbox_uint64(v_call_2439_);
lean_dec_ref(v_call_2439_);
v_res_2447_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lasm_JS_Core_0__Lasm_JS_reply_spec__0(v_call_boxed_2446_, v_range_2440_, v_b_2441_, v_i_2442_, v_hs_2443_, v_hl_2444_);
lean_dec_ref(v_range_2440_);
return v_res_2447_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_argsOf(lean_object* v_bytes_2448_){
_start:
{
lean_object* v___x_2450_; 
v___x_2450_ = l_Lasm_JS_Wire_decode(v_bytes_2448_);
if (lean_obj_tag(v___x_2450_) == 0)
{
lean_object* v_a_2451_; lean_object* v___x_2453_; uint8_t v_isShared_2454_; uint8_t v_isSharedCheck_2465_; 
v_a_2451_ = lean_ctor_get(v___x_2450_, 0);
v_isSharedCheck_2465_ = !lean_is_exclusive(v___x_2450_);
if (v_isSharedCheck_2465_ == 0)
{
v___x_2453_ = v___x_2450_;
v_isShared_2454_ = v_isSharedCheck_2465_;
goto v_resetjp_2452_;
}
else
{
lean_inc(v_a_2451_);
lean_dec(v___x_2450_);
v___x_2453_ = lean_box(0);
v_isShared_2454_ = v_isSharedCheck_2465_;
goto v_resetjp_2452_;
}
v_resetjp_2452_:
{
if (lean_obj_tag(v_a_2451_) == 7)
{
lean_object* v_items_2455_; lean_object* v___x_2457_; 
v_items_2455_ = lean_ctor_get(v_a_2451_, 0);
lean_inc_ref(v_items_2455_);
lean_dec_ref_known(v_a_2451_, 1);
if (v_isShared_2454_ == 0)
{
lean_ctor_set(v___x_2453_, 0, v_items_2455_);
v___x_2457_ = v___x_2453_;
goto v_reusejp_2456_;
}
else
{
lean_object* v_reuseFailAlloc_2458_; 
v_reuseFailAlloc_2458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2458_, 0, v_items_2455_);
v___x_2457_ = v_reuseFailAlloc_2458_;
goto v_reusejp_2456_;
}
v_reusejp_2456_:
{
return v___x_2457_;
}
}
else
{
lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2463_; 
v___x_2459_ = lean_unsigned_to_nat(1u);
v___x_2460_ = lean_mk_empty_array_with_capacity(v___x_2459_);
v___x_2461_ = lean_array_push(v___x_2460_, v_a_2451_);
if (v_isShared_2454_ == 0)
{
lean_ctor_set(v___x_2453_, 0, v___x_2461_);
v___x_2463_ = v___x_2453_;
goto v_reusejp_2462_;
}
else
{
lean_object* v_reuseFailAlloc_2464_; 
v_reuseFailAlloc_2464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2464_, 0, v___x_2461_);
v___x_2463_ = v_reuseFailAlloc_2464_;
goto v_reusejp_2462_;
}
v_reusejp_2462_:
{
return v___x_2463_;
}
}
}
}
else
{
lean_object* v_a_2466_; lean_object* v___x_2468_; uint8_t v_isShared_2469_; uint8_t v_isSharedCheck_2473_; 
v_a_2466_ = lean_ctor_get(v___x_2450_, 0);
v_isSharedCheck_2473_ = !lean_is_exclusive(v___x_2450_);
if (v_isSharedCheck_2473_ == 0)
{
v___x_2468_ = v___x_2450_;
v_isShared_2469_ = v_isSharedCheck_2473_;
goto v_resetjp_2467_;
}
else
{
lean_inc(v_a_2466_);
lean_dec(v___x_2450_);
v___x_2468_ = lean_box(0);
v_isShared_2469_ = v_isSharedCheck_2473_;
goto v_resetjp_2467_;
}
v_resetjp_2467_:
{
lean_object* v___x_2471_; 
if (v_isShared_2469_ == 0)
{
v___x_2471_ = v___x_2468_;
goto v_reusejp_2470_;
}
else
{
lean_object* v_reuseFailAlloc_2472_; 
v_reuseFailAlloc_2472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2472_, 0, v_a_2466_);
v___x_2471_ = v_reuseFailAlloc_2472_;
goto v_reusejp_2470_;
}
v_reusejp_2470_:
{
return v___x_2471_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_argsOf___boxed(lean_object* v_bytes_2474_, lean_object* v_a_2475_){
_start:
{
lean_object* v_res_2476_; 
v_res_2476_ = l___private_Lasm_JS_Core_0__Lasm_JS_argsOf(v_bytes_2474_);
lean_dec_ref(v_bytes_2474_);
return v_res_2476_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__0(lean_object* v_f_2477_, lean_object* v_x_2478_){
_start:
{
if (lean_obj_tag(v_x_2478_) == 0)
{
lean_object* v_a_2480_; lean_object* v___x_2482_; uint8_t v_isShared_2483_; uint8_t v_isSharedCheck_2488_; 
lean_dec_ref(v_f_2477_);
v_a_2480_ = lean_ctor_get(v_x_2478_, 0);
v_isSharedCheck_2488_ = !lean_is_exclusive(v_x_2478_);
if (v_isSharedCheck_2488_ == 0)
{
v___x_2482_ = v_x_2478_;
v_isShared_2483_ = v_isSharedCheck_2488_;
goto v_resetjp_2481_;
}
else
{
lean_inc(v_a_2480_);
lean_dec(v_x_2478_);
v___x_2482_ = lean_box(0);
v_isShared_2483_ = v_isSharedCheck_2488_;
goto v_resetjp_2481_;
}
v_resetjp_2481_:
{
lean_object* v___x_2485_; 
if (v_isShared_2483_ == 0)
{
v___x_2485_ = v___x_2482_;
goto v_reusejp_2484_;
}
else
{
lean_object* v_reuseFailAlloc_2487_; 
v_reuseFailAlloc_2487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2487_, 0, v_a_2480_);
v___x_2485_ = v_reuseFailAlloc_2487_;
goto v_reusejp_2484_;
}
v_reusejp_2484_:
{
lean_object* v___x_2486_; 
v___x_2486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2486_, 0, v___x_2485_);
return v___x_2486_;
}
}
}
else
{
lean_object* v_a_2489_; lean_object* v___x_2490_; 
v_a_2489_ = lean_ctor_get(v_x_2478_, 0);
lean_inc(v_a_2489_);
lean_dec_ref_known(v_x_2478_, 1);
v___x_2490_ = lean_apply_2(v_f_2477_, v_a_2489_, lean_box(0));
return v___x_2490_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__0___boxed(lean_object* v_f_2491_, lean_object* v_x_2492_, lean_object* v___y_2493_){
_start:
{
lean_object* v_res_2494_; 
v_res_2494_ = l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__0(v_f_2491_, v_x_2492_);
return v_res_2494_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__1(uint64_t v_call_2495_, lean_object* v_result_2496_){
_start:
{
lean_object* v___x_2498_; lean_object* v___x_2499_; 
v___x_2498_ = lean_box(0);
v___x_2499_ = l___private_Lasm_JS_Core_0__Lasm_JS_reply(v_call_2495_, v_result_2496_);
lean_dec_ref(v___x_2499_);
return v___x_2498_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__1___boxed(lean_object* v_call_2500_, lean_object* v_result_2501_, lean_object* v___y_2502_){
_start:
{
uint64_t v_call_boxed_2503_; lean_object* v_res_2504_; 
v_call_boxed_2503_ = lean_unbox_uint64(v_call_2500_);
lean_dec_ref(v_call_2500_);
v_res_2504_ = l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__1(v_call_boxed_2503_, v_result_2501_);
return v_res_2504_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_runCall(uint64_t v_call_2505_, lean_object* v_f_2506_, lean_object* v_bytes_2507_){
_start:
{
lean_object* v___f_2509_; lean_object* v___x_2510_; lean_object* v___f_2511_; lean_object* v___x_2512_; uint8_t v___x_2513_; lean_object* v_val_2515_; lean_object* v___x_2524_; 
v___f_2509_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2509_, 0, v_f_2506_);
v___x_2510_ = lean_box_uint64(v_call_2505_);
v___f_2511_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_runCall___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2511_, 0, v___x_2510_);
v___x_2512_ = lean_unsigned_to_nat(0u);
v___x_2513_ = 0;
v___x_2524_ = l___private_Lasm_JS_Core_0__Lasm_JS_argsOf(v_bytes_2507_);
if (lean_obj_tag(v___x_2524_) == 0)
{
lean_object* v_a_2525_; lean_object* v___x_2527_; uint8_t v_isShared_2528_; uint8_t v_isSharedCheck_2532_; 
v_a_2525_ = lean_ctor_get(v___x_2524_, 0);
v_isSharedCheck_2532_ = !lean_is_exclusive(v___x_2524_);
if (v_isSharedCheck_2532_ == 0)
{
v___x_2527_ = v___x_2524_;
v_isShared_2528_ = v_isSharedCheck_2532_;
goto v_resetjp_2526_;
}
else
{
lean_inc(v_a_2525_);
lean_dec(v___x_2524_);
v___x_2527_ = lean_box(0);
v_isShared_2528_ = v_isSharedCheck_2532_;
goto v_resetjp_2526_;
}
v_resetjp_2526_:
{
lean_object* v___x_2530_; 
if (v_isShared_2528_ == 0)
{
lean_ctor_set_tag(v___x_2527_, 1);
v___x_2530_ = v___x_2527_;
goto v_reusejp_2529_;
}
else
{
lean_object* v_reuseFailAlloc_2531_; 
v_reuseFailAlloc_2531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2531_, 0, v_a_2525_);
v___x_2530_ = v_reuseFailAlloc_2531_;
goto v_reusejp_2529_;
}
v_reusejp_2529_:
{
v_val_2515_ = v___x_2530_;
goto v___jp_2514_;
}
}
}
else
{
lean_object* v_a_2533_; lean_object* v___x_2535_; uint8_t v_isShared_2536_; uint8_t v_isSharedCheck_2540_; 
v_a_2533_ = lean_ctor_get(v___x_2524_, 0);
v_isSharedCheck_2540_ = !lean_is_exclusive(v___x_2524_);
if (v_isSharedCheck_2540_ == 0)
{
v___x_2535_ = v___x_2524_;
v_isShared_2536_ = v_isSharedCheck_2540_;
goto v_resetjp_2534_;
}
else
{
lean_inc(v_a_2533_);
lean_dec(v___x_2524_);
v___x_2535_ = lean_box(0);
v_isShared_2536_ = v_isSharedCheck_2540_;
goto v_resetjp_2534_;
}
v_resetjp_2534_:
{
lean_object* v___x_2538_; 
if (v_isShared_2536_ == 0)
{
lean_ctor_set_tag(v___x_2535_, 0);
v___x_2538_ = v___x_2535_;
goto v_reusejp_2537_;
}
else
{
lean_object* v_reuseFailAlloc_2539_; 
v_reuseFailAlloc_2539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2539_, 0, v_a_2533_);
v___x_2538_ = v_reuseFailAlloc_2539_;
goto v_reusejp_2537_;
}
v_reusejp_2537_:
{
v_val_2515_ = v___x_2538_;
goto v___jp_2514_;
}
}
}
v___jp_2514_:
{
lean_object* v___x_2516_; lean_object* v___x_2517_; 
v___x_2516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2516_, 0, v_val_2515_);
v___x_2517_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2512_, v___x_2513_, v___x_2516_, v___f_2509_);
if (lean_obj_tag(v___x_2517_) == 0)
{
lean_object* v_a_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; 
lean_dec_ref(v___f_2511_);
v_a_2518_ = lean_ctor_get(v___x_2517_, 0);
lean_inc(v_a_2518_);
lean_dec_ref_known(v___x_2517_, 1);
v___x_2519_ = lean_box(0);
v___x_2520_ = l___private_Lasm_JS_Core_0__Lasm_JS_reply(v_call_2505_, v_a_2518_);
lean_dec_ref(v___x_2520_);
return v___x_2519_;
}
else
{
lean_object* v_a_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; 
v_a_2521_ = lean_ctor_get(v___x_2517_, 0);
lean_inc_ref(v_a_2521_);
lean_dec_ref_known(v___x_2517_, 1);
v___x_2522_ = lean_box(0);
v___x_2523_ = lean_io_map_task(v___f_2511_, v_a_2521_, v___x_2512_, v___x_2513_);
lean_dec_ref(v___x_2523_);
return v___x_2522_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_runCall___boxed(lean_object* v_call_2541_, lean_object* v_f_2542_, lean_object* v_bytes_2543_, lean_object* v_a_2544_){
_start:
{
uint64_t v_call_boxed_2545_; lean_object* v_res_2546_; 
v_call_boxed_2545_ = lean_unbox_uint64(v_call_2541_);
lean_dec_ref(v_call_2541_);
v_res_2546_ = l___private_Lasm_JS_Core_0__Lasm_JS_runCall(v_call_boxed_2545_, v_f_2542_, v_bytes_2543_);
lean_dec_ref(v_bytes_2543_);
return v_res_2546_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2___redArg(uint32_t v_a_2547_, lean_object* v_x_2548_){
_start:
{
if (lean_obj_tag(v_x_2548_) == 0)
{
uint8_t v___x_2549_; 
v___x_2549_ = 0;
return v___x_2549_;
}
else
{
lean_object* v_key_2550_; lean_object* v_tail_2551_; uint32_t v___x_2552_; uint8_t v___x_2553_; 
v_key_2550_ = lean_ctor_get(v_x_2548_, 0);
v_tail_2551_ = lean_ctor_get(v_x_2548_, 2);
v___x_2552_ = lean_unbox_uint32(v_key_2550_);
v___x_2553_ = lean_uint32_dec_eq(v___x_2552_, v_a_2547_);
if (v___x_2553_ == 0)
{
v_x_2548_ = v_tail_2551_;
goto _start;
}
else
{
return v___x_2553_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2___redArg___boxed(lean_object* v_a_2555_, lean_object* v_x_2556_){
_start:
{
uint32_t v_a_boxed_2557_; uint8_t v_res_2558_; lean_object* v_r_2559_; 
v_a_boxed_2557_ = lean_unbox_uint32(v_a_2555_);
lean_dec(v_a_2555_);
v_res_2558_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2___redArg(v_a_boxed_2557_, v_x_2556_);
lean_dec(v_x_2556_);
v_r_2559_ = lean_box(v_res_2558_);
return v_r_2559_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3___redArg(uint32_t v_a_2560_, lean_object* v_x_2561_){
_start:
{
if (lean_obj_tag(v_x_2561_) == 0)
{
return v_x_2561_;
}
else
{
lean_object* v_key_2562_; lean_object* v_value_2563_; lean_object* v_tail_2564_; lean_object* v___x_2566_; uint8_t v_isShared_2567_; uint8_t v_isSharedCheck_2574_; 
v_key_2562_ = lean_ctor_get(v_x_2561_, 0);
v_value_2563_ = lean_ctor_get(v_x_2561_, 1);
v_tail_2564_ = lean_ctor_get(v_x_2561_, 2);
v_isSharedCheck_2574_ = !lean_is_exclusive(v_x_2561_);
if (v_isSharedCheck_2574_ == 0)
{
v___x_2566_ = v_x_2561_;
v_isShared_2567_ = v_isSharedCheck_2574_;
goto v_resetjp_2565_;
}
else
{
lean_inc(v_tail_2564_);
lean_inc(v_value_2563_);
lean_inc(v_key_2562_);
lean_dec(v_x_2561_);
v___x_2566_ = lean_box(0);
v_isShared_2567_ = v_isSharedCheck_2574_;
goto v_resetjp_2565_;
}
v_resetjp_2565_:
{
uint32_t v___x_2568_; uint8_t v___x_2569_; 
v___x_2568_ = lean_unbox_uint32(v_key_2562_);
v___x_2569_ = lean_uint32_dec_eq(v___x_2568_, v_a_2560_);
if (v___x_2569_ == 0)
{
lean_object* v___x_2570_; lean_object* v___x_2572_; 
v___x_2570_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3___redArg(v_a_2560_, v_tail_2564_);
if (v_isShared_2567_ == 0)
{
lean_ctor_set(v___x_2566_, 2, v___x_2570_);
v___x_2572_ = v___x_2566_;
goto v_reusejp_2571_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v_key_2562_);
lean_ctor_set(v_reuseFailAlloc_2573_, 1, v_value_2563_);
lean_ctor_set(v_reuseFailAlloc_2573_, 2, v___x_2570_);
v___x_2572_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2571_;
}
v_reusejp_2571_:
{
return v___x_2572_;
}
}
else
{
lean_del_object(v___x_2566_);
lean_dec(v_value_2563_);
lean_dec(v_key_2562_);
return v_tail_2564_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3___redArg___boxed(lean_object* v_a_2575_, lean_object* v_x_2576_){
_start:
{
uint32_t v_a_boxed_2577_; lean_object* v_res_2578_; 
v_a_boxed_2577_ = lean_unbox_uint32(v_a_2575_);
lean_dec(v_a_2575_);
v_res_2578_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3___redArg(v_a_boxed_2577_, v_x_2576_);
return v_res_2578_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1___redArg(lean_object* v_m_2579_, uint32_t v_a_2580_){
_start:
{
lean_object* v_size_2581_; lean_object* v_buckets_2582_; lean_object* v___x_2583_; uint64_t v___x_2584_; uint64_t v___x_2585_; uint64_t v___x_2586_; uint64_t v_fold_2587_; uint64_t v___x_2588_; uint64_t v___x_2589_; uint64_t v___x_2590_; size_t v___x_2591_; size_t v___x_2592_; size_t v___x_2593_; size_t v___x_2594_; size_t v___x_2595_; lean_object* v_bkt_2596_; uint8_t v___x_2597_; 
v_size_2581_ = lean_ctor_get(v_m_2579_, 0);
v_buckets_2582_ = lean_ctor_get(v_m_2579_, 1);
v___x_2583_ = lean_array_get_size(v_buckets_2582_);
v___x_2584_ = lean_uint32_to_uint64(v_a_2580_);
v___x_2585_ = 32ULL;
v___x_2586_ = lean_uint64_shift_right(v___x_2584_, v___x_2585_);
v_fold_2587_ = lean_uint64_xor(v___x_2584_, v___x_2586_);
v___x_2588_ = 16ULL;
v___x_2589_ = lean_uint64_shift_right(v_fold_2587_, v___x_2588_);
v___x_2590_ = lean_uint64_xor(v_fold_2587_, v___x_2589_);
v___x_2591_ = lean_uint64_to_usize(v___x_2590_);
v___x_2592_ = lean_usize_of_nat(v___x_2583_);
v___x_2593_ = ((size_t)1ULL);
v___x_2594_ = lean_usize_sub(v___x_2592_, v___x_2593_);
v___x_2595_ = lean_usize_land(v___x_2591_, v___x_2594_);
v_bkt_2596_ = lean_array_uget_borrowed(v_buckets_2582_, v___x_2595_);
v___x_2597_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2___redArg(v_a_2580_, v_bkt_2596_);
if (v___x_2597_ == 0)
{
return v_m_2579_;
}
else
{
lean_object* v___x_2599_; uint8_t v_isShared_2600_; uint8_t v_isSharedCheck_2610_; 
lean_inc(v_bkt_2596_);
lean_inc_ref(v_buckets_2582_);
lean_inc(v_size_2581_);
v_isSharedCheck_2610_ = !lean_is_exclusive(v_m_2579_);
if (v_isSharedCheck_2610_ == 0)
{
lean_object* v_unused_2611_; lean_object* v_unused_2612_; 
v_unused_2611_ = lean_ctor_get(v_m_2579_, 1);
lean_dec(v_unused_2611_);
v_unused_2612_ = lean_ctor_get(v_m_2579_, 0);
lean_dec(v_unused_2612_);
v___x_2599_ = v_m_2579_;
v_isShared_2600_ = v_isSharedCheck_2610_;
goto v_resetjp_2598_;
}
else
{
lean_dec(v_m_2579_);
v___x_2599_ = lean_box(0);
v_isShared_2600_ = v_isSharedCheck_2610_;
goto v_resetjp_2598_;
}
v_resetjp_2598_:
{
lean_object* v___x_2601_; lean_object* v_buckets_x27_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2608_; 
v___x_2601_ = lean_box(0);
v_buckets_x27_2602_ = lean_array_uset(v_buckets_2582_, v___x_2595_, v___x_2601_);
v___x_2603_ = lean_unsigned_to_nat(1u);
v___x_2604_ = lean_nat_sub(v_size_2581_, v___x_2603_);
lean_dec(v_size_2581_);
v___x_2605_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3___redArg(v_a_2580_, v_bkt_2596_);
v___x_2606_ = lean_array_uset(v_buckets_x27_2602_, v___x_2595_, v___x_2605_);
if (v_isShared_2600_ == 0)
{
lean_ctor_set(v___x_2599_, 1, v___x_2606_);
lean_ctor_set(v___x_2599_, 0, v___x_2604_);
v___x_2608_ = v___x_2599_;
goto v_reusejp_2607_;
}
else
{
lean_object* v_reuseFailAlloc_2609_; 
v_reuseFailAlloc_2609_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2609_, 0, v___x_2604_);
lean_ctor_set(v_reuseFailAlloc_2609_, 1, v___x_2606_);
v___x_2608_ = v_reuseFailAlloc_2609_;
goto v_reusejp_2607_;
}
v_reusejp_2607_:
{
return v___x_2608_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1___redArg___boxed(lean_object* v_m_2613_, lean_object* v_a_2614_){
_start:
{
uint32_t v_a_boxed_2615_; lean_object* v_res_2616_; 
v_a_boxed_2615_ = lean_unbox_uint32(v_a_2614_);
lean_dec(v_a_2614_);
v_res_2616_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1___redArg(v_m_2613_, v_a_boxed_2615_);
return v_res_2616_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0___redArg(uint32_t v_a_2617_, lean_object* v_x_2618_){
_start:
{
if (lean_obj_tag(v_x_2618_) == 0)
{
lean_object* v___x_2619_; 
v___x_2619_ = lean_box(0);
return v___x_2619_;
}
else
{
lean_object* v_key_2620_; lean_object* v_value_2621_; lean_object* v_tail_2622_; uint32_t v___x_2623_; uint8_t v___x_2624_; 
v_key_2620_ = lean_ctor_get(v_x_2618_, 0);
v_value_2621_ = lean_ctor_get(v_x_2618_, 1);
v_tail_2622_ = lean_ctor_get(v_x_2618_, 2);
v___x_2623_ = lean_unbox_uint32(v_key_2620_);
v___x_2624_ = lean_uint32_dec_eq(v___x_2623_, v_a_2617_);
if (v___x_2624_ == 0)
{
v_x_2618_ = v_tail_2622_;
goto _start;
}
else
{
lean_object* v___x_2626_; 
lean_inc(v_value_2621_);
v___x_2626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2626_, 0, v_value_2621_);
return v___x_2626_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0___redArg___boxed(lean_object* v_a_2627_, lean_object* v_x_2628_){
_start:
{
uint32_t v_a_boxed_2629_; lean_object* v_res_2630_; 
v_a_boxed_2629_ = lean_unbox_uint32(v_a_2627_);
lean_dec(v_a_2627_);
v_res_2630_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0___redArg(v_a_boxed_2629_, v_x_2628_);
lean_dec(v_x_2628_);
return v_res_2630_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0___redArg(lean_object* v_m_2631_, uint32_t v_a_2632_){
_start:
{
lean_object* v_buckets_2633_; lean_object* v___x_2634_; uint64_t v___x_2635_; uint64_t v___x_2636_; uint64_t v___x_2637_; uint64_t v_fold_2638_; uint64_t v___x_2639_; uint64_t v___x_2640_; uint64_t v___x_2641_; size_t v___x_2642_; size_t v___x_2643_; size_t v___x_2644_; size_t v___x_2645_; size_t v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; 
v_buckets_2633_ = lean_ctor_get(v_m_2631_, 1);
v___x_2634_ = lean_array_get_size(v_buckets_2633_);
v___x_2635_ = lean_uint32_to_uint64(v_a_2632_);
v___x_2636_ = 32ULL;
v___x_2637_ = lean_uint64_shift_right(v___x_2635_, v___x_2636_);
v_fold_2638_ = lean_uint64_xor(v___x_2635_, v___x_2637_);
v___x_2639_ = 16ULL;
v___x_2640_ = lean_uint64_shift_right(v_fold_2638_, v___x_2639_);
v___x_2641_ = lean_uint64_xor(v_fold_2638_, v___x_2640_);
v___x_2642_ = lean_uint64_to_usize(v___x_2641_);
v___x_2643_ = lean_usize_of_nat(v___x_2634_);
v___x_2644_ = ((size_t)1ULL);
v___x_2645_ = lean_usize_sub(v___x_2643_, v___x_2644_);
v___x_2646_ = lean_usize_land(v___x_2642_, v___x_2645_);
v___x_2647_ = lean_array_uget_borrowed(v_buckets_2633_, v___x_2646_);
v___x_2648_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0___redArg(v_a_2632_, v___x_2647_);
return v___x_2648_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0___redArg___boxed(lean_object* v_m_2649_, lean_object* v_a_2650_){
_start:
{
uint32_t v_a_boxed_2651_; lean_object* v_res_2652_; 
v_a_boxed_2651_ = lean_unbox_uint32(v_a_2650_);
lean_dec(v_a_2650_);
v_res_2652_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0___redArg(v_m_2649_, v_a_boxed_2651_);
lean_dec_ref(v_m_2649_);
return v_res_2652_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_dispatch(uint8_t v_kind_2658_, uint32_t v_fn_2659_, uint64_t v_call_2660_, lean_object* v_bytes_2661_){
_start:
{
uint8_t v___x_2663_; uint8_t v___x_2664_; 
v___x_2663_ = 3;
v___x_2664_ = lean_uint8_dec_eq(v_kind_2658_, v___x_2663_);
if (v___x_2664_ == 0)
{
lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v_asyncFns_2667_; lean_object* v___x_2668_; 
v___x_2665_ = l___private_Lasm_JS_Core_0__Lasm_JS_registry;
v___x_2666_ = lean_st_ref_get(v___x_2665_);
v_asyncFns_2667_ = lean_ctor_get(v___x_2666_, 0);
lean_inc_ref(v_asyncFns_2667_);
lean_dec(v___x_2666_);
v___x_2668_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0___redArg(v_asyncFns_2667_, v_fn_2659_);
lean_dec_ref(v_asyncFns_2667_);
if (lean_obj_tag(v___x_2668_) == 0)
{
lean_object* v___x_2669_; lean_object* v___x_2670_; 
lean_dec_ref(v_bytes_2661_);
v___x_2669_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_dispatch___closed__2));
v___x_2670_ = l___private_Lasm_JS_Core_0__Lasm_JS_reply(v_call_2660_, v___x_2669_);
return v___x_2670_;
}
else
{
lean_object* v_val_2671_; lean_object* v___x_2673_; uint8_t v_isShared_2674_; uint8_t v_isSharedCheck_2683_; 
v_val_2671_ = lean_ctor_get(v___x_2668_, 0);
v_isSharedCheck_2683_ = !lean_is_exclusive(v___x_2668_);
if (v_isSharedCheck_2683_ == 0)
{
v___x_2673_ = v___x_2668_;
v_isShared_2674_ = v_isSharedCheck_2683_;
goto v_resetjp_2672_;
}
else
{
lean_inc(v_val_2671_);
lean_dec(v___x_2668_);
v___x_2673_ = lean_box(0);
v_isShared_2674_ = v_isSharedCheck_2683_;
goto v_resetjp_2672_;
}
v_resetjp_2672_:
{
lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2681_; 
v___x_2675_ = lean_box_uint64(v_call_2660_);
v___x_2676_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_runCall___boxed), 4, 3);
lean_closure_set(v___x_2676_, 0, v___x_2675_);
lean_closure_set(v___x_2676_, 1, v_val_2671_);
lean_closure_set(v___x_2676_, 2, v_bytes_2661_);
v___x_2677_ = lean_unsigned_to_nat(0u);
v___x_2678_ = lean_box(0);
v___x_2679_ = lean_io_as_task(v___x_2676_, v___x_2677_);
lean_dec_ref(v___x_2679_);
if (v_isShared_2674_ == 0)
{
lean_ctor_set_tag(v___x_2673_, 0);
lean_ctor_set(v___x_2673_, 0, v___x_2678_);
v___x_2681_ = v___x_2673_;
goto v_reusejp_2680_;
}
else
{
lean_object* v_reuseFailAlloc_2682_; 
v_reuseFailAlloc_2682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2682_, 0, v___x_2678_);
v___x_2681_ = v_reuseFailAlloc_2682_;
goto v_reusejp_2680_;
}
v_reusejp_2680_:
{
return v___x_2681_;
}
}
}
}
else
{
lean_object* v___x_2684_; lean_object* v___x_2685_; uint32_t v_next_2686_; lean_object* v_asyncFns_2687_; lean_object* v_syncFns_2688_; lean_object* v___x_2690_; uint8_t v_isShared_2691_; uint8_t v_isSharedCheck_2699_; 
lean_dec_ref(v_bytes_2661_);
v___x_2684_ = l___private_Lasm_JS_Core_0__Lasm_JS_registry;
v___x_2685_ = lean_st_ref_take(v___x_2684_);
v_next_2686_ = lean_ctor_get_uint32(v___x_2685_, sizeof(void*)*2);
v_asyncFns_2687_ = lean_ctor_get(v___x_2685_, 0);
v_syncFns_2688_ = lean_ctor_get(v___x_2685_, 1);
v_isSharedCheck_2699_ = !lean_is_exclusive(v___x_2685_);
if (v_isSharedCheck_2699_ == 0)
{
v___x_2690_ = v___x_2685_;
v_isShared_2691_ = v_isSharedCheck_2699_;
goto v_resetjp_2689_;
}
else
{
lean_inc(v_syncFns_2688_);
lean_inc(v_asyncFns_2687_);
lean_dec(v___x_2685_);
v___x_2690_ = lean_box(0);
v_isShared_2691_ = v_isSharedCheck_2699_;
goto v_resetjp_2689_;
}
v_resetjp_2689_:
{
lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2695_; 
v___x_2692_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1___redArg(v_asyncFns_2687_, v_fn_2659_);
v___x_2693_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1___redArg(v_syncFns_2688_, v_fn_2659_);
if (v_isShared_2691_ == 0)
{
lean_ctor_set(v___x_2690_, 1, v___x_2693_);
lean_ctor_set(v___x_2690_, 0, v___x_2692_);
v___x_2695_ = v___x_2690_;
goto v_reusejp_2694_;
}
else
{
lean_object* v_reuseFailAlloc_2698_; 
v_reuseFailAlloc_2698_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v_reuseFailAlloc_2698_, 0, v___x_2692_);
lean_ctor_set(v_reuseFailAlloc_2698_, 1, v___x_2693_);
lean_ctor_set_uint32(v_reuseFailAlloc_2698_, sizeof(void*)*2, v_next_2686_);
v___x_2695_ = v_reuseFailAlloc_2698_;
goto v_reusejp_2694_;
}
v_reusejp_2694_:
{
lean_object* v___x_2696_; lean_object* v___x_2697_; 
v___x_2696_ = lean_st_ref_put(v___x_2684_, v___x_2695_);
v___x_2697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2697_, 0, v___x_2696_);
return v___x_2697_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_dispatch___boxed(lean_object* v_kind_2700_, lean_object* v_fn_2701_, lean_object* v_call_2702_, lean_object* v_bytes_2703_, lean_object* v_a_2704_){
_start:
{
uint8_t v_kind_boxed_2705_; uint32_t v_fn_boxed_2706_; uint64_t v_call_boxed_2707_; lean_object* v_res_2708_; 
v_kind_boxed_2705_ = lean_unbox(v_kind_2700_);
v_fn_boxed_2706_ = lean_unbox_uint32(v_fn_2701_);
lean_dec(v_fn_2701_);
v_call_boxed_2707_ = lean_unbox_uint64(v_call_2702_);
lean_dec_ref(v_call_2702_);
v_res_2708_ = l___private_Lasm_JS_Core_0__Lasm_JS_dispatch(v_kind_boxed_2705_, v_fn_boxed_2706_, v_call_boxed_2707_, v_bytes_2703_);
return v_res_2708_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0(lean_object* v_00_u03b2_2709_, lean_object* v_m_2710_, uint32_t v_a_2711_){
_start:
{
lean_object* v___x_2712_; 
v___x_2712_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0___redArg(v_m_2710_, v_a_2711_);
return v___x_2712_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0___boxed(lean_object* v_00_u03b2_2713_, lean_object* v_m_2714_, lean_object* v_a_2715_){
_start:
{
uint32_t v_a_boxed_2716_; lean_object* v_res_2717_; 
v_a_boxed_2716_ = lean_unbox_uint32(v_a_2715_);
lean_dec(v_a_2715_);
v_res_2717_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0(v_00_u03b2_2713_, v_m_2714_, v_a_boxed_2716_);
lean_dec_ref(v_m_2714_);
return v_res_2717_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1(lean_object* v_00_u03b2_2718_, lean_object* v_m_2719_, uint32_t v_a_2720_){
_start:
{
lean_object* v___x_2721_; 
v___x_2721_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1___redArg(v_m_2719_, v_a_2720_);
return v___x_2721_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1___boxed(lean_object* v_00_u03b2_2722_, lean_object* v_m_2723_, lean_object* v_a_2724_){
_start:
{
uint32_t v_a_boxed_2725_; lean_object* v_res_2726_; 
v_a_boxed_2725_ = lean_unbox_uint32(v_a_2724_);
lean_dec(v_a_2724_);
v_res_2726_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1(v_00_u03b2_2722_, v_m_2723_, v_a_boxed_2725_);
return v_res_2726_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0(lean_object* v_00_u03b2_2727_, uint32_t v_a_2728_, lean_object* v_x_2729_){
_start:
{
lean_object* v___x_2730_; 
v___x_2730_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0___redArg(v_a_2728_, v_x_2729_);
return v___x_2730_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2731_, lean_object* v_a_2732_, lean_object* v_x_2733_){
_start:
{
uint32_t v_a_boxed_2734_; lean_object* v_res_2735_; 
v_a_boxed_2734_ = lean_unbox_uint32(v_a_2732_);
lean_dec(v_a_2732_);
v_res_2735_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0_spec__0(v_00_u03b2_2731_, v_a_boxed_2734_, v_x_2733_);
lean_dec(v_x_2733_);
return v_res_2735_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2(lean_object* v_00_u03b2_2736_, uint32_t v_a_2737_, lean_object* v_x_2738_){
_start:
{
uint8_t v___x_2739_; 
v___x_2739_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2___redArg(v_a_2737_, v_x_2738_);
return v___x_2739_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2740_, lean_object* v_a_2741_, lean_object* v_x_2742_){
_start:
{
uint32_t v_a_boxed_2743_; uint8_t v_res_2744_; lean_object* v_r_2745_; 
v_a_boxed_2743_ = lean_unbox_uint32(v_a_2741_);
lean_dec(v_a_2741_);
v_res_2744_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2(v_00_u03b2_2740_, v_a_boxed_2743_, v_x_2742_);
lean_dec(v_x_2742_);
v_r_2745_ = lean_box(v_res_2744_);
return v_r_2745_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3(lean_object* v_00_u03b2_2746_, uint32_t v_a_2747_, lean_object* v_x_2748_){
_start:
{
lean_object* v___x_2749_; 
v___x_2749_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3___redArg(v_a_2747_, v_x_2748_);
return v___x_2749_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3___boxed(lean_object* v_00_u03b2_2750_, lean_object* v_a_2751_, lean_object* v_x_2752_){
_start:
{
uint32_t v_a_boxed_2753_; lean_object* v_res_2754_; 
v_a_boxed_2753_ = lean_unbox_uint32(v_a_2751_);
lean_dec(v_a_2751_);
v_res_2754_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__3(v_00_u03b2_2750_, v_a_boxed_2753_, v_x_2752_);
return v_res_2754_;
}
}
static lean_object* _init_l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__1(void){
_start:
{
lean_object* v___x_2761_; lean_object* v___x_2762_; 
v___x_2761_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__0));
v___x_2762_ = lean_byte_array_size(v___x_2761_);
return v___x_2762_;
}
}
static lean_object* _init_l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__3(void){
_start:
{
lean_object* v___x_2769_; lean_object* v___x_2770_; 
v___x_2769_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__2));
v___x_2770_ = lean_byte_array_size(v___x_2769_);
return v___x_2770_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch(uint32_t v_fn_2771_, lean_object* v_bytes_2772_){
_start:
{
lean_object* v_a_2775_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v_syncFns_2789_; lean_object* v___x_2790_; 
v___x_2787_ = l___private_Lasm_JS_Core_0__Lasm_JS_registry;
v___x_2788_ = lean_st_ref_get(v___x_2787_);
v_syncFns_2789_ = lean_ctor_get(v___x_2788_, 1);
lean_inc_ref(v_syncFns_2789_);
lean_dec(v___x_2788_);
v___x_2790_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__0___redArg(v_syncFns_2789_, v_fn_2771_);
lean_dec_ref(v_syncFns_2789_);
if (lean_obj_tag(v___x_2790_) == 1)
{
lean_object* v_val_2791_; lean_object* v___x_2792_; 
v_val_2791_ = lean_ctor_get(v___x_2790_, 0);
lean_inc(v_val_2791_);
lean_dec_ref_known(v___x_2790_, 1);
v___x_2792_ = l___private_Lasm_JS_Core_0__Lasm_JS_argsOf(v_bytes_2772_);
if (lean_obj_tag(v___x_2792_) == 0)
{
lean_object* v_a_2793_; lean_object* v___x_2794_; 
v_a_2793_ = lean_ctor_get(v___x_2792_, 0);
lean_inc(v_a_2793_);
lean_dec_ref_known(v___x_2792_, 1);
v___x_2794_ = lean_apply_2(v_val_2791_, v_a_2793_, lean_box(0));
if (lean_obj_tag(v___x_2794_) == 0)
{
lean_object* v_a_2795_; lean_object* v___x_2797_; uint8_t v_isShared_2798_; uint8_t v_isSharedCheck_2810_; 
v_a_2795_ = lean_ctor_get(v___x_2794_, 0);
v_isSharedCheck_2810_ = !lean_is_exclusive(v___x_2794_);
if (v_isSharedCheck_2810_ == 0)
{
v___x_2797_ = v___x_2794_;
v_isShared_2798_ = v_isSharedCheck_2810_;
goto v_resetjp_2796_;
}
else
{
lean_inc(v_a_2795_);
lean_dec(v___x_2794_);
v___x_2797_ = lean_box(0);
v_isShared_2798_ = v_isSharedCheck_2810_;
goto v_resetjp_2796_;
}
v_resetjp_2796_:
{
lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; uint8_t v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2808_; 
v___x_2799_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__2));
lean_inc(v_a_2795_);
v___x_2800_ = l_Lasm_JS_Wire_encode(v_a_2795_);
v___x_2801_ = lean_unsigned_to_nat(0u);
v___x_2802_ = lean_obj_once(&l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__3, &l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__3_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__3);
v___x_2803_ = lean_byte_array_size(v___x_2800_);
v___x_2804_ = 0;
v___x_2805_ = lean_byte_array_copy_slice(v___x_2800_, v___x_2801_, v___x_2799_, v___x_2802_, v___x_2803_, v___x_2804_);
lean_dec_ref(v___x_2800_);
v___x_2806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2806_, 0, v___x_2805_);
lean_ctor_set(v___x_2806_, 1, v_a_2795_);
if (v_isShared_2798_ == 0)
{
lean_ctor_set(v___x_2797_, 0, v___x_2806_);
v___x_2808_ = v___x_2797_;
goto v_reusejp_2807_;
}
else
{
lean_object* v_reuseFailAlloc_2809_; 
v_reuseFailAlloc_2809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2809_, 0, v___x_2806_);
v___x_2808_ = v_reuseFailAlloc_2809_;
goto v_reusejp_2807_;
}
v_reusejp_2807_:
{
return v___x_2808_;
}
}
}
else
{
lean_object* v_a_2811_; 
v_a_2811_ = lean_ctor_get(v___x_2794_, 0);
lean_inc(v_a_2811_);
lean_dec_ref_known(v___x_2794_, 1);
v_a_2775_ = v_a_2811_;
goto v___jp_2774_;
}
}
else
{
lean_object* v_a_2812_; 
lean_dec(v_val_2791_);
v_a_2812_ = lean_ctor_get(v___x_2792_, 0);
lean_inc(v_a_2812_);
lean_dec_ref_known(v___x_2792_, 1);
v_a_2775_ = v_a_2812_;
goto v___jp_2774_;
}
}
else
{
lean_object* v___x_2813_; 
lean_dec(v___x_2790_);
v___x_2813_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_dispatch___closed__1));
v_a_2775_ = v___x_2813_;
goto v___jp_2774_;
}
v___jp_2774_:
{
lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; uint8_t v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; 
v___x_2776_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__0));
v___x_2777_ = lean_io_error_to_string(v_a_2775_);
v___x_2778_ = lean_string_to_utf8(v___x_2777_);
v___x_2779_ = lean_unsigned_to_nat(0u);
v___x_2780_ = lean_obj_once(&l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__1, &l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__1_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___closed__1);
v___x_2781_ = lean_byte_array_size(v___x_2778_);
v___x_2782_ = 0;
v___x_2783_ = lean_byte_array_copy_slice(v___x_2778_, v___x_2779_, v___x_2776_, v___x_2780_, v___x_2781_, v___x_2782_);
lean_dec_ref(v___x_2778_);
v___x_2784_ = lean_box(0);
v___x_2785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2785_, 0, v___x_2783_);
lean_ctor_set(v___x_2785_, 1, v___x_2784_);
v___x_2786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2786_, 0, v___x_2785_);
return v___x_2786_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch___boxed(lean_object* v_fn_2814_, lean_object* v_bytes_2815_, lean_object* v_a_2816_){
_start:
{
uint32_t v_fn_boxed_2817_; lean_object* v_res_2818_; 
v_fn_boxed_2817_ = lean_unbox_uint32(v_fn_2814_);
lean_dec(v_fn_2814_);
v_res_2818_ = l___private_Lasm_JS_Core_0__Lasm_JS_syncDispatch(v_fn_boxed_2817_, v_bytes_2815_);
lean_dec_ref(v_bytes_2815_);
return v_res_2818_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted(){
_start:
{
lean_object* v___x_2821_; lean_object* v___x_2822_; 
v___x_2821_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted___closed__0));
v___x_2822_ = lasm_js_start(v___x_2821_);
return v___x_2822_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted___boxed(lean_object* v_a_2823_){
_start:
{
lean_object* v_res_2824_; 
v_res_2824_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
return v_res_2824_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTAsync___redArg___lam__0(lean_object* v_inst_2825_, lean_object* v_00_u03b1_2826_, lean_object* v_x_2827_, lean_object* v_a_2828_){
_start:
{
lean_object* v___x_2829_; 
v___x_2829_ = lean_apply_2(v_inst_2825_, lean_box(0), v_a_2828_);
return v___x_2829_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTAsync___redArg___lam__0___boxed(lean_object* v_inst_2830_, lean_object* v_00_u03b1_2831_, lean_object* v_x_2832_, lean_object* v_a_2833_){
_start:
{
lean_object* v_res_2834_; 
v_res_2834_ = l_Lasm_JS_instMonadJSOfMonadLiftTAsync___redArg___lam__0(v_inst_2830_, v_00_u03b1_2831_, v_x_2832_, v_a_2833_);
lean_dec_ref(v_x_2832_);
return v_res_2834_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTAsync___redArg(lean_object* v_inst_2835_){
_start:
{
lean_object* v___f_2836_; 
v___f_2836_ = lean_alloc_closure((void*)(l_Lasm_JS_instMonadJSOfMonadLiftTAsync___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_2836_, 0, v_inst_2835_);
return v___f_2836_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTAsync(lean_object* v_m_2837_, lean_object* v_inst_2838_){
_start:
{
lean_object* v___f_2839_; 
v___f_2839_ = lean_alloc_closure((void*)(l_Lasm_JS_instMonadJSOfMonadLiftTAsync___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_2839_, 0, v_inst_2838_);
return v___f_2839_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTIO___redArg___lam__0(lean_object* v_inst_2840_, lean_object* v_00_u03b1_2841_, lean_object* v_b_2842_, lean_object* v_x_2843_){
_start:
{
lean_object* v___x_2844_; 
v___x_2844_ = lean_apply_2(v_inst_2840_, lean_box(0), v_b_2842_);
return v___x_2844_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTIO___redArg___lam__0___boxed(lean_object* v_inst_2845_, lean_object* v_00_u03b1_2846_, lean_object* v_b_2847_, lean_object* v_x_2848_){
_start:
{
lean_object* v_res_2849_; 
v_res_2849_ = l_Lasm_JS_instMonadJSOfMonadLiftTIO___redArg___lam__0(v_inst_2845_, v_00_u03b1_2846_, v_b_2847_, v_x_2848_);
lean_dec_ref(v_x_2848_);
return v_res_2849_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTIO___redArg(lean_object* v_inst_2850_){
_start:
{
lean_object* v___f_2851_; 
v___f_2851_ = lean_alloc_closure((void*)(l_Lasm_JS_instMonadJSOfMonadLiftTIO___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_2851_, 0, v_inst_2850_);
return v___f_2851_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instMonadJSOfMonadLiftTIO(lean_object* v_m_2852_, lean_object* v_inst_2853_){
_start:
{
lean_object* v___f_2854_; 
v___f_2854_ = lean_alloc_closure((void*)(l_Lasm_JS_instMonadJSOfMonadLiftTIO___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_2854_, 0, v_inst_2853_);
return v___f_2854_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes___lam__0(lean_object* v_x_2860_){
_start:
{
if (lean_obj_tag(v_x_2860_) == 0)
{
lean_object* v___x_2861_; 
v___x_2861_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes___lam__0___closed__2));
return v___x_2861_;
}
else
{
lean_object* v_val_2862_; lean_object* v___x_2864_; uint8_t v_isShared_2865_; uint8_t v_isSharedCheck_2885_; 
v_val_2862_ = lean_ctor_get(v_x_2860_, 0);
v_isSharedCheck_2885_ = !lean_is_exclusive(v_x_2860_);
if (v_isSharedCheck_2885_ == 0)
{
v___x_2864_ = v_x_2860_;
v_isShared_2865_ = v_isSharedCheck_2885_;
goto v_resetjp_2863_;
}
else
{
lean_inc(v_val_2862_);
lean_dec(v_x_2860_);
v___x_2864_ = lean_box(0);
v_isShared_2865_ = v_isSharedCheck_2885_;
goto v_resetjp_2863_;
}
v_resetjp_2863_:
{
if (lean_obj_tag(v_val_2862_) == 0)
{
lean_object* v_a_2866_; lean_object* v___x_2868_; uint8_t v_isShared_2869_; uint8_t v_isSharedCheck_2876_; 
v_a_2866_ = lean_ctor_get(v_val_2862_, 0);
v_isSharedCheck_2876_ = !lean_is_exclusive(v_val_2862_);
if (v_isSharedCheck_2876_ == 0)
{
v___x_2868_ = v_val_2862_;
v_isShared_2869_ = v_isSharedCheck_2876_;
goto v_resetjp_2867_;
}
else
{
lean_inc(v_a_2866_);
lean_dec(v_val_2862_);
v___x_2868_ = lean_box(0);
v_isShared_2869_ = v_isSharedCheck_2876_;
goto v_resetjp_2867_;
}
v_resetjp_2867_:
{
lean_object* v___x_2871_; 
if (v_isShared_2865_ == 0)
{
lean_ctor_set_tag(v___x_2864_, 18);
lean_ctor_set(v___x_2864_, 0, v_a_2866_);
v___x_2871_ = v___x_2864_;
goto v_reusejp_2870_;
}
else
{
lean_object* v_reuseFailAlloc_2875_; 
v_reuseFailAlloc_2875_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2875_, 0, v_a_2866_);
v___x_2871_ = v_reuseFailAlloc_2875_;
goto v_reusejp_2870_;
}
v_reusejp_2870_:
{
lean_object* v___x_2873_; 
if (v_isShared_2869_ == 0)
{
lean_ctor_set(v___x_2868_, 0, v___x_2871_);
v___x_2873_ = v___x_2868_;
goto v_reusejp_2872_;
}
else
{
lean_object* v_reuseFailAlloc_2874_; 
v_reuseFailAlloc_2874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2874_, 0, v___x_2871_);
v___x_2873_ = v_reuseFailAlloc_2874_;
goto v_reusejp_2872_;
}
v_reusejp_2872_:
{
return v___x_2873_;
}
}
}
}
else
{
lean_object* v_a_2877_; lean_object* v___x_2879_; uint8_t v_isShared_2880_; uint8_t v_isSharedCheck_2884_; 
lean_del_object(v___x_2864_);
v_a_2877_ = lean_ctor_get(v_val_2862_, 0);
v_isSharedCheck_2884_ = !lean_is_exclusive(v_val_2862_);
if (v_isSharedCheck_2884_ == 0)
{
v___x_2879_ = v_val_2862_;
v_isShared_2880_ = v_isSharedCheck_2884_;
goto v_resetjp_2878_;
}
else
{
lean_inc(v_a_2877_);
lean_dec(v_val_2862_);
v___x_2879_ = lean_box(0);
v_isShared_2880_ = v_isSharedCheck_2884_;
goto v_resetjp_2878_;
}
v_resetjp_2878_:
{
lean_object* v___x_2882_; 
if (v_isShared_2880_ == 0)
{
v___x_2882_ = v___x_2879_;
goto v_reusejp_2881_;
}
else
{
lean_object* v_reuseFailAlloc_2883_; 
v_reuseFailAlloc_2883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2883_, 0, v_a_2877_);
v___x_2882_ = v_reuseFailAlloc_2883_;
goto v_reusejp_2881_;
}
v_reusejp_2881_:
{
return v___x_2882_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object* v_p_2887_){
_start:
{
lean_object* v___f_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; uint8_t v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; 
v___f_2889_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes___closed__0));
v___x_2890_ = lean_io_promise_result_opt(v_p_2887_);
v___x_2891_ = lean_unsigned_to_nat(0u);
v___x_2892_ = 1;
v___x_2893_ = lean_task_map(v___f_2889_, v___x_2890_, v___x_2891_, v___x_2892_);
v___x_2894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2894_, 0, v___x_2893_);
return v___x_2894_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes___boxed(lean_object* v_p_2895_, lean_object* v_a_2896_){
_start:
{
lean_object* v_res_2897_; 
v_res_2897_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_p_2895_);
lean_dec(v_p_2895_);
return v_res_2897_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__0(lean_object* v_failurePrefix_2898_, lean_object* v_x_2899_){
_start:
{
if (lean_obj_tag(v_x_2899_) == 0)
{
lean_object* v_a_2901_; lean_object* v___x_2903_; uint8_t v_isShared_2904_; uint8_t v_isSharedCheck_2912_; 
v_a_2901_ = lean_ctor_get(v_x_2899_, 0);
v_isSharedCheck_2912_ = !lean_is_exclusive(v_x_2899_);
if (v_isSharedCheck_2912_ == 0)
{
v___x_2903_ = v_x_2899_;
v_isShared_2904_ = v_isSharedCheck_2912_;
goto v_resetjp_2902_;
}
else
{
lean_inc(v_a_2901_);
lean_dec(v_x_2899_);
v___x_2903_ = lean_box(0);
v_isShared_2904_ = v_isSharedCheck_2912_;
goto v_resetjp_2902_;
}
v_resetjp_2902_:
{
lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2909_; 
v___x_2905_ = lean_io_error_to_string(v_a_2901_);
v___x_2906_ = lean_string_append(v_failurePrefix_2898_, v___x_2905_);
lean_dec_ref(v___x_2905_);
v___x_2907_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2907_, 0, v___x_2906_);
if (v_isShared_2904_ == 0)
{
lean_ctor_set(v___x_2903_, 0, v___x_2907_);
v___x_2909_ = v___x_2903_;
goto v_reusejp_2908_;
}
else
{
lean_object* v_reuseFailAlloc_2911_; 
v_reuseFailAlloc_2911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2911_, 0, v___x_2907_);
v___x_2909_ = v_reuseFailAlloc_2911_;
goto v_reusejp_2908_;
}
v_reusejp_2908_:
{
lean_object* v___x_2910_; 
v___x_2910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2910_, 0, v___x_2909_);
return v___x_2910_;
}
}
}
else
{
lean_object* v___x_2913_; 
lean_dec_ref(v_failurePrefix_2898_);
v___x_2913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2913_, 0, v_x_2899_);
return v___x_2913_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__0___boxed(lean_object* v_failurePrefix_2914_, lean_object* v_x_2915_, lean_object* v___y_2916_){
_start:
{
lean_object* v_res_2917_; 
v_res_2917_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__0(v_failurePrefix_2914_, v_x_2915_);
return v_res_2917_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__1(lean_object* v_inst_2918_, lean_object* v_context_2919_, lean_object* v_x_2920_){
_start:
{
lean_object* v_val_2923_; 
if (lean_obj_tag(v_x_2920_) == 0)
{
lean_object* v_a_2925_; lean_object* v___x_2927_; uint8_t v_isShared_2928_; uint8_t v_isSharedCheck_2933_; 
lean_dec_ref(v_inst_2918_);
v_a_2925_ = lean_ctor_get(v_x_2920_, 0);
v_isSharedCheck_2933_ = !lean_is_exclusive(v_x_2920_);
if (v_isSharedCheck_2933_ == 0)
{
v___x_2927_ = v_x_2920_;
v_isShared_2928_ = v_isSharedCheck_2933_;
goto v_resetjp_2926_;
}
else
{
lean_inc(v_a_2925_);
lean_dec(v_x_2920_);
v___x_2927_ = lean_box(0);
v_isShared_2928_ = v_isSharedCheck_2933_;
goto v_resetjp_2926_;
}
v_resetjp_2926_:
{
lean_object* v___x_2930_; 
if (v_isShared_2928_ == 0)
{
v___x_2930_ = v___x_2927_;
goto v_reusejp_2929_;
}
else
{
lean_object* v_reuseFailAlloc_2932_; 
v_reuseFailAlloc_2932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2932_, 0, v_a_2925_);
v___x_2930_ = v_reuseFailAlloc_2932_;
goto v_reusejp_2929_;
}
v_reusejp_2929_:
{
lean_object* v___x_2931_; 
v___x_2931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2931_, 0, v___x_2930_);
return v___x_2931_;
}
}
}
else
{
lean_object* v_a_2934_; lean_object* v___x_2936_; uint8_t v_isShared_2937_; uint8_t v_isSharedCheck_2947_; 
v_a_2934_ = lean_ctor_get(v_x_2920_, 0);
v_isSharedCheck_2947_ = !lean_is_exclusive(v_x_2920_);
if (v_isSharedCheck_2947_ == 0)
{
v___x_2936_ = v_x_2920_;
v_isShared_2937_ = v_isSharedCheck_2947_;
goto v_resetjp_2935_;
}
else
{
lean_inc(v_a_2934_);
lean_dec(v_x_2920_);
v___x_2936_ = lean_box(0);
v_isShared_2937_ = v_isSharedCheck_2947_;
goto v_resetjp_2935_;
}
v_resetjp_2935_:
{
lean_object* v___x_2938_; 
v___x_2938_ = l_Lasm_JS_decodeAs___redArg(v_inst_2918_, v_context_2919_, v_a_2934_);
if (lean_obj_tag(v___x_2938_) == 0)
{
lean_object* v_a_2939_; lean_object* v___x_2941_; 
v_a_2939_ = lean_ctor_get(v___x_2938_, 0);
lean_inc(v_a_2939_);
lean_dec_ref_known(v___x_2938_, 1);
if (v_isShared_2937_ == 0)
{
lean_ctor_set(v___x_2936_, 0, v_a_2939_);
v___x_2941_ = v___x_2936_;
goto v_reusejp_2940_;
}
else
{
lean_object* v_reuseFailAlloc_2942_; 
v_reuseFailAlloc_2942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2942_, 0, v_a_2939_);
v___x_2941_ = v_reuseFailAlloc_2942_;
goto v_reusejp_2940_;
}
v_reusejp_2940_:
{
v_val_2923_ = v___x_2941_;
goto v___jp_2922_;
}
}
else
{
lean_object* v_a_2943_; lean_object* v___x_2945_; 
v_a_2943_ = lean_ctor_get(v___x_2938_, 0);
lean_inc(v_a_2943_);
lean_dec_ref_known(v___x_2938_, 1);
if (v_isShared_2937_ == 0)
{
lean_ctor_set_tag(v___x_2936_, 0);
lean_ctor_set(v___x_2936_, 0, v_a_2943_);
v___x_2945_ = v___x_2936_;
goto v_reusejp_2944_;
}
else
{
lean_object* v_reuseFailAlloc_2946_; 
v_reuseFailAlloc_2946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2946_, 0, v_a_2943_);
v___x_2945_ = v_reuseFailAlloc_2946_;
goto v_reusejp_2944_;
}
v_reusejp_2944_:
{
v_val_2923_ = v___x_2945_;
goto v___jp_2922_;
}
}
}
}
v___jp_2922_:
{
lean_object* v___x_2924_; 
v___x_2924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2924_, 0, v_val_2923_);
return v___x_2924_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__1___boxed(lean_object* v_inst_2948_, lean_object* v_context_2949_, lean_object* v_x_2950_, lean_object* v___y_2951_){
_start:
{
lean_object* v_res_2952_; 
v_res_2952_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__1(v_inst_2948_, v_context_2949_, v_x_2950_);
lean_dec_ref(v_context_2949_);
return v_res_2952_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__2(lean_object* v___f_2953_, lean_object* v_bytes_2954_){
_start:
{
lean_object* v___x_2956_; uint8_t v___x_2957_; lean_object* v_val_2959_; lean_object* v___x_2962_; 
v___x_2956_ = lean_unsigned_to_nat(0u);
v___x_2957_ = 0;
v___x_2962_ = l_Lasm_JS_Wire_decode(v_bytes_2954_);
if (lean_obj_tag(v___x_2962_) == 0)
{
lean_object* v_a_2963_; lean_object* v___x_2965_; uint8_t v_isShared_2966_; uint8_t v_isSharedCheck_2970_; 
v_a_2963_ = lean_ctor_get(v___x_2962_, 0);
v_isSharedCheck_2970_ = !lean_is_exclusive(v___x_2962_);
if (v_isSharedCheck_2970_ == 0)
{
v___x_2965_ = v___x_2962_;
v_isShared_2966_ = v_isSharedCheck_2970_;
goto v_resetjp_2964_;
}
else
{
lean_inc(v_a_2963_);
lean_dec(v___x_2962_);
v___x_2965_ = lean_box(0);
v_isShared_2966_ = v_isSharedCheck_2970_;
goto v_resetjp_2964_;
}
v_resetjp_2964_:
{
lean_object* v___x_2968_; 
if (v_isShared_2966_ == 0)
{
lean_ctor_set_tag(v___x_2965_, 1);
v___x_2968_ = v___x_2965_;
goto v_reusejp_2967_;
}
else
{
lean_object* v_reuseFailAlloc_2969_; 
v_reuseFailAlloc_2969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2969_, 0, v_a_2963_);
v___x_2968_ = v_reuseFailAlloc_2969_;
goto v_reusejp_2967_;
}
v_reusejp_2967_:
{
v_val_2959_ = v___x_2968_;
goto v___jp_2958_;
}
}
}
else
{
lean_object* v_a_2971_; lean_object* v___x_2973_; uint8_t v_isShared_2974_; uint8_t v_isSharedCheck_2978_; 
v_a_2971_ = lean_ctor_get(v___x_2962_, 0);
v_isSharedCheck_2978_ = !lean_is_exclusive(v___x_2962_);
if (v_isSharedCheck_2978_ == 0)
{
v___x_2973_ = v___x_2962_;
v_isShared_2974_ = v_isSharedCheck_2978_;
goto v_resetjp_2972_;
}
else
{
lean_inc(v_a_2971_);
lean_dec(v___x_2962_);
v___x_2973_ = lean_box(0);
v_isShared_2974_ = v_isSharedCheck_2978_;
goto v_resetjp_2972_;
}
v_resetjp_2972_:
{
lean_object* v___x_2976_; 
if (v_isShared_2974_ == 0)
{
lean_ctor_set_tag(v___x_2973_, 0);
v___x_2976_ = v___x_2973_;
goto v_reusejp_2975_;
}
else
{
lean_object* v_reuseFailAlloc_2977_; 
v_reuseFailAlloc_2977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2977_, 0, v_a_2971_);
v___x_2976_ = v_reuseFailAlloc_2977_;
goto v_reusejp_2975_;
}
v_reusejp_2975_:
{
v_val_2959_ = v___x_2976_;
goto v___jp_2958_;
}
}
}
v___jp_2958_:
{
lean_object* v___x_2960_; lean_object* v___x_2961_; 
v___x_2960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2960_, 0, v_val_2959_);
v___x_2961_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2956_, v___x_2957_, v___x_2960_, v___f_2953_);
return v___x_2961_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__2___boxed(lean_object* v___f_2979_, lean_object* v_bytes_2980_, lean_object* v___y_2981_){
_start:
{
lean_object* v_res_2982_; 
v_res_2982_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__2(v___f_2979_, v_bytes_2980_);
lean_dec_ref(v_bytes_2980_);
return v_res_2982_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__3(lean_object* v___f_2983_, lean_object* v_x_2984_){
_start:
{
if (lean_obj_tag(v_x_2984_) == 0)
{
lean_object* v_a_2986_; lean_object* v___x_2988_; uint8_t v_isShared_2989_; uint8_t v_isSharedCheck_2994_; 
lean_dec_ref(v___f_2983_);
v_a_2986_ = lean_ctor_get(v_x_2984_, 0);
v_isSharedCheck_2994_ = !lean_is_exclusive(v_x_2984_);
if (v_isSharedCheck_2994_ == 0)
{
v___x_2988_ = v_x_2984_;
v_isShared_2989_ = v_isSharedCheck_2994_;
goto v_resetjp_2987_;
}
else
{
lean_inc(v_a_2986_);
lean_dec(v_x_2984_);
v___x_2988_ = lean_box(0);
v_isShared_2989_ = v_isSharedCheck_2994_;
goto v_resetjp_2987_;
}
v_resetjp_2987_:
{
lean_object* v___x_2991_; 
if (v_isShared_2989_ == 0)
{
v___x_2991_ = v___x_2988_;
goto v_reusejp_2990_;
}
else
{
lean_object* v_reuseFailAlloc_2993_; 
v_reuseFailAlloc_2993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2993_, 0, v_a_2986_);
v___x_2991_ = v_reuseFailAlloc_2993_;
goto v_reusejp_2990_;
}
v_reusejp_2990_:
{
lean_object* v___x_2992_; 
v___x_2992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2992_, 0, v___x_2991_);
return v___x_2992_;
}
}
}
else
{
lean_object* v_a_2995_; lean_object* v___x_2996_; 
v_a_2995_ = lean_ctor_get(v_x_2984_, 0);
lean_inc(v_a_2995_);
lean_dec_ref_known(v_x_2984_, 1);
v___x_2996_ = lean_apply_2(v___f_2983_, v_a_2995_, lean_box(0));
return v___x_2996_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__3___boxed(lean_object* v___f_2997_, lean_object* v_x_2998_, lean_object* v___y_2999_){
_start:
{
lean_object* v_res_3000_; 
v_res_3000_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__3(v___f_2997_, v_x_2998_);
return v_res_3000_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__5(lean_object* v_a_3001_, lean_object* v_x_3002_){
_start:
{
if (lean_obj_tag(v_x_3002_) == 0)
{
lean_object* v_a_3004_; lean_object* v___x_3006_; uint8_t v_isShared_3007_; uint8_t v_isSharedCheck_3012_; 
v_a_3004_ = lean_ctor_get(v_x_3002_, 0);
v_isSharedCheck_3012_ = !lean_is_exclusive(v_x_3002_);
if (v_isSharedCheck_3012_ == 0)
{
v___x_3006_ = v_x_3002_;
v_isShared_3007_ = v_isSharedCheck_3012_;
goto v_resetjp_3005_;
}
else
{
lean_inc(v_a_3004_);
lean_dec(v_x_3002_);
v___x_3006_ = lean_box(0);
v_isShared_3007_ = v_isSharedCheck_3012_;
goto v_resetjp_3005_;
}
v_resetjp_3005_:
{
lean_object* v___x_3009_; 
if (v_isShared_3007_ == 0)
{
v___x_3009_ = v___x_3006_;
goto v_reusejp_3008_;
}
else
{
lean_object* v_reuseFailAlloc_3011_; 
v_reuseFailAlloc_3011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3011_, 0, v_a_3004_);
v___x_3009_ = v_reuseFailAlloc_3011_;
goto v_reusejp_3008_;
}
v_reusejp_3008_:
{
lean_object* v___x_3010_; 
v___x_3010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3010_, 0, v___x_3009_);
return v___x_3010_;
}
}
}
else
{
lean_object* v___x_3013_; 
lean_dec_ref_known(v_x_3002_, 1);
v___x_3013_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_3001_);
return v___x_3013_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__5___boxed(lean_object* v_a_3014_, lean_object* v_x_3015_, lean_object* v___y_3016_){
_start:
{
lean_object* v_res_3017_; 
v_res_3017_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__5(v_a_3014_, v_x_3015_);
lean_dec(v_a_3014_);
return v_res_3017_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__6(lean_object* v_payload_3018_, lean_object* v_failurePrefix_3019_, lean_object* v___f_3020_, lean_object* v___f_3021_, uint32_t v_op_3022_, uint64_t v_flags_3023_, lean_object* v___f_3024_, lean_object* v_x_3025_){
_start:
{
if (lean_obj_tag(v_x_3025_) == 0)
{
lean_object* v_a_3027_; lean_object* v___x_3029_; uint8_t v_isShared_3030_; uint8_t v_isSharedCheck_3035_; 
lean_dec_ref(v___f_3024_);
lean_dec_ref(v___f_3021_);
lean_dec_ref(v___f_3020_);
lean_dec(v_payload_3018_);
v_a_3027_ = lean_ctor_get(v_x_3025_, 0);
v_isSharedCheck_3035_ = !lean_is_exclusive(v_x_3025_);
if (v_isSharedCheck_3035_ == 0)
{
v___x_3029_ = v_x_3025_;
v_isShared_3030_ = v_isSharedCheck_3035_;
goto v_resetjp_3028_;
}
else
{
lean_inc(v_a_3027_);
lean_dec(v_x_3025_);
v___x_3029_ = lean_box(0);
v_isShared_3030_ = v_isSharedCheck_3035_;
goto v_resetjp_3028_;
}
v_resetjp_3028_:
{
lean_object* v___x_3032_; 
if (v_isShared_3030_ == 0)
{
v___x_3032_ = v___x_3029_;
goto v_reusejp_3031_;
}
else
{
lean_object* v_reuseFailAlloc_3034_; 
v_reuseFailAlloc_3034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3034_, 0, v_a_3027_);
v___x_3032_ = v_reuseFailAlloc_3034_;
goto v_reusejp_3031_;
}
v_reusejp_3031_:
{
lean_object* v___x_3033_; 
v___x_3033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3033_, 0, v___x_3032_);
return v___x_3033_;
}
}
}
else
{
lean_object* v_a_3036_; lean_object* v___x_3038_; uint8_t v_isShared_3039_; uint8_t v_isSharedCheck_3077_; 
v_a_3036_ = lean_ctor_get(v_x_3025_, 0);
v_isSharedCheck_3077_ = !lean_is_exclusive(v_x_3025_);
if (v_isSharedCheck_3077_ == 0)
{
v___x_3038_ = v_x_3025_;
v_isShared_3039_ = v_isSharedCheck_3077_;
goto v_resetjp_3037_;
}
else
{
lean_inc(v_a_3036_);
lean_dec(v_x_3025_);
v___x_3038_ = lean_box(0);
v_isShared_3039_ = v_isSharedCheck_3077_;
goto v_resetjp_3037_;
}
v_resetjp_3037_:
{
uint32_t v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; uint8_t v___x_3044_; 
v___x_3040_ = 0;
lean_inc(v_payload_3018_);
v___x_3041_ = l_Lasm_JS_Wire_encode(v_payload_3018_);
v___x_3042_ = lean_string_utf8_byte_size(v_failurePrefix_3019_);
v___x_3043_ = lean_unsigned_to_nat(0u);
v___x_3044_ = lean_nat_dec_eq(v___x_3042_, v___x_3043_);
if (v___x_3044_ == 0)
{
lean_object* v___f_3045_; lean_object* v_val_3047_; lean_object* v___x_3052_; 
lean_dec_ref(v___f_3024_);
lean_inc(v_a_3036_);
v___f_3045_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_3045_, 0, v_a_3036_);
v___x_3052_ = lasm_js_call_into(v_a_3036_, v_op_3022_, v___x_3040_, v_flags_3023_, v___x_3041_, v_payload_3018_);
lean_dec(v_payload_3018_);
lean_dec_ref(v___x_3041_);
lean_dec(v_a_3036_);
if (lean_obj_tag(v___x_3052_) == 0)
{
lean_object* v_a_3053_; lean_object* v___x_3055_; 
v_a_3053_ = lean_ctor_get(v___x_3052_, 0);
lean_inc(v_a_3053_);
lean_dec_ref_known(v___x_3052_, 1);
if (v_isShared_3039_ == 0)
{
lean_ctor_set(v___x_3038_, 0, v_a_3053_);
v___x_3055_ = v___x_3038_;
goto v_reusejp_3054_;
}
else
{
lean_object* v_reuseFailAlloc_3056_; 
v_reuseFailAlloc_3056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3056_, 0, v_a_3053_);
v___x_3055_ = v_reuseFailAlloc_3056_;
goto v_reusejp_3054_;
}
v_reusejp_3054_:
{
v_val_3047_ = v___x_3055_;
goto v___jp_3046_;
}
}
else
{
lean_object* v_a_3057_; lean_object* v___x_3059_; 
v_a_3057_ = lean_ctor_get(v___x_3052_, 0);
lean_inc(v_a_3057_);
lean_dec_ref_known(v___x_3052_, 1);
if (v_isShared_3039_ == 0)
{
lean_ctor_set_tag(v___x_3038_, 0);
lean_ctor_set(v___x_3038_, 0, v_a_3057_);
v___x_3059_ = v___x_3038_;
goto v_reusejp_3058_;
}
else
{
lean_object* v_reuseFailAlloc_3060_; 
v_reuseFailAlloc_3060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3060_, 0, v_a_3057_);
v___x_3059_ = v_reuseFailAlloc_3060_;
goto v_reusejp_3058_;
}
v_reusejp_3058_:
{
v_val_3047_ = v___x_3059_;
goto v___jp_3046_;
}
}
v___jp_3046_:
{
lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; 
v___x_3048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3048_, 0, v_val_3047_);
v___x_3049_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3043_, v___x_3044_, v___x_3048_, v___f_3045_);
v___x_3050_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3043_, v___x_3044_, v___x_3049_, v___f_3020_);
v___x_3051_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3043_, v___x_3044_, v___x_3050_, v___f_3021_);
return v___x_3051_;
}
}
else
{
lean_object* v___f_3061_; uint8_t v___x_3062_; lean_object* v_val_3064_; lean_object* v___x_3068_; 
lean_dec_ref(v___f_3021_);
lean_dec_ref(v___f_3020_);
lean_inc(v_a_3036_);
v___f_3061_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_3061_, 0, v_a_3036_);
v___x_3062_ = 0;
v___x_3068_ = lasm_js_call_into(v_a_3036_, v_op_3022_, v___x_3040_, v_flags_3023_, v___x_3041_, v_payload_3018_);
lean_dec(v_payload_3018_);
lean_dec_ref(v___x_3041_);
lean_dec(v_a_3036_);
if (lean_obj_tag(v___x_3068_) == 0)
{
lean_object* v_a_3069_; lean_object* v___x_3071_; 
v_a_3069_ = lean_ctor_get(v___x_3068_, 0);
lean_inc(v_a_3069_);
lean_dec_ref_known(v___x_3068_, 1);
if (v_isShared_3039_ == 0)
{
lean_ctor_set(v___x_3038_, 0, v_a_3069_);
v___x_3071_ = v___x_3038_;
goto v_reusejp_3070_;
}
else
{
lean_object* v_reuseFailAlloc_3072_; 
v_reuseFailAlloc_3072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3072_, 0, v_a_3069_);
v___x_3071_ = v_reuseFailAlloc_3072_;
goto v_reusejp_3070_;
}
v_reusejp_3070_:
{
v_val_3064_ = v___x_3071_;
goto v___jp_3063_;
}
}
else
{
lean_object* v_a_3073_; lean_object* v___x_3075_; 
v_a_3073_ = lean_ctor_get(v___x_3068_, 0);
lean_inc(v_a_3073_);
lean_dec_ref_known(v___x_3068_, 1);
if (v_isShared_3039_ == 0)
{
lean_ctor_set_tag(v___x_3038_, 0);
lean_ctor_set(v___x_3038_, 0, v_a_3073_);
v___x_3075_ = v___x_3038_;
goto v_reusejp_3074_;
}
else
{
lean_object* v_reuseFailAlloc_3076_; 
v_reuseFailAlloc_3076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3076_, 0, v_a_3073_);
v___x_3075_ = v_reuseFailAlloc_3076_;
goto v_reusejp_3074_;
}
v_reusejp_3074_:
{
v_val_3064_ = v___x_3075_;
goto v___jp_3063_;
}
}
v___jp_3063_:
{
lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; 
v___x_3065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3065_, 0, v_val_3064_);
v___x_3066_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3043_, v___x_3062_, v___x_3065_, v___f_3061_);
v___x_3067_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3043_, v___x_3062_, v___x_3066_, v___f_3024_);
return v___x_3067_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__6___boxed(lean_object* v_payload_3078_, lean_object* v_failurePrefix_3079_, lean_object* v___f_3080_, lean_object* v___f_3081_, lean_object* v_op_3082_, lean_object* v_flags_3083_, lean_object* v___f_3084_, lean_object* v_x_3085_, lean_object* v___y_3086_){
_start:
{
uint32_t v_op_boxed_3087_; uint64_t v_flags_boxed_3088_; lean_object* v_res_3089_; 
v_op_boxed_3087_ = lean_unbox_uint32(v_op_3082_);
lean_dec(v_op_3082_);
v_flags_boxed_3088_ = lean_unbox_uint64(v_flags_3083_);
lean_dec_ref(v_flags_3083_);
v_res_3089_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__6(v_payload_3078_, v_failurePrefix_3079_, v___f_3080_, v___f_3081_, v_op_boxed_3087_, v_flags_boxed_3088_, v___f_3084_, v_x_3085_);
lean_dec_ref(v_failurePrefix_3079_);
return v_res_3089_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__4(lean_object* v___f_3090_, lean_object* v_x_3091_){
_start:
{
if (lean_obj_tag(v_x_3091_) == 0)
{
lean_object* v_a_3093_; lean_object* v___x_3095_; uint8_t v_isShared_3096_; uint8_t v_isSharedCheck_3101_; 
lean_dec_ref(v___f_3090_);
v_a_3093_ = lean_ctor_get(v_x_3091_, 0);
v_isSharedCheck_3101_ = !lean_is_exclusive(v_x_3091_);
if (v_isSharedCheck_3101_ == 0)
{
v___x_3095_ = v_x_3091_;
v_isShared_3096_ = v_isSharedCheck_3101_;
goto v_resetjp_3094_;
}
else
{
lean_inc(v_a_3093_);
lean_dec(v_x_3091_);
v___x_3095_ = lean_box(0);
v_isShared_3096_ = v_isSharedCheck_3101_;
goto v_resetjp_3094_;
}
v_resetjp_3094_:
{
lean_object* v___x_3098_; 
if (v_isShared_3096_ == 0)
{
v___x_3098_ = v___x_3095_;
goto v_reusejp_3097_;
}
else
{
lean_object* v_reuseFailAlloc_3100_; 
v_reuseFailAlloc_3100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3100_, 0, v_a_3093_);
v___x_3098_ = v_reuseFailAlloc_3100_;
goto v_reusejp_3097_;
}
v_reusejp_3097_:
{
lean_object* v___x_3099_; 
v___x_3099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3099_, 0, v___x_3098_);
return v___x_3099_;
}
}
}
else
{
lean_object* v___x_3103_; uint8_t v_isShared_3104_; uint8_t v_isSharedCheck_3113_; 
v_isSharedCheck_3113_ = !lean_is_exclusive(v_x_3091_);
if (v_isSharedCheck_3113_ == 0)
{
lean_object* v_unused_3114_; 
v_unused_3114_ = lean_ctor_get(v_x_3091_, 0);
lean_dec(v_unused_3114_);
v___x_3103_ = v_x_3091_;
v_isShared_3104_ = v_isSharedCheck_3113_;
goto v_resetjp_3102_;
}
else
{
lean_dec(v_x_3091_);
v___x_3103_ = lean_box(0);
v_isShared_3104_ = v_isSharedCheck_3113_;
goto v_resetjp_3102_;
}
v_resetjp_3102_:
{
lean_object* v___x_3105_; uint8_t v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3109_; 
v___x_3105_ = lean_unsigned_to_nat(0u);
v___x_3106_ = 0;
v___x_3107_ = lean_io_promise_new();
if (v_isShared_3104_ == 0)
{
lean_ctor_set(v___x_3103_, 0, v___x_3107_);
v___x_3109_ = v___x_3103_;
goto v_reusejp_3108_;
}
else
{
lean_object* v_reuseFailAlloc_3112_; 
v_reuseFailAlloc_3112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3112_, 0, v___x_3107_);
v___x_3109_ = v_reuseFailAlloc_3112_;
goto v_reusejp_3108_;
}
v_reusejp_3108_:
{
lean_object* v___x_3110_; lean_object* v___x_3111_; 
v___x_3110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3110_, 0, v___x_3109_);
v___x_3111_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3105_, v___x_3106_, v___x_3110_, v___f_3090_);
return v___x_3111_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__4___boxed(lean_object* v___f_3115_, lean_object* v_x_3116_, lean_object* v___y_3117_){
_start:
{
lean_object* v_res_3118_; 
v_res_3118_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__4(v___f_3115_, v_x_3116_);
return v_res_3118_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg(lean_object* v_inst_3119_, lean_object* v_context_3120_, uint32_t v_op_3121_, uint64_t v_flags_3122_, lean_object* v_payload_3123_, lean_object* v_failurePrefix_3124_){
_start:
{
lean_object* v___f_3126_; lean_object* v___f_3127_; lean_object* v___f_3128_; lean_object* v___f_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___f_3132_; lean_object* v___f_3133_; lean_object* v___x_3134_; uint8_t v___x_3135_; lean_object* v_val_3137_; lean_object* v___x_3140_; 
lean_inc_ref(v_failurePrefix_3124_);
v___f_3126_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3126_, 0, v_failurePrefix_3124_);
v___f_3127_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_3127_, 0, v_inst_3119_);
lean_closure_set(v___f_3127_, 1, v_context_3120_);
v___f_3128_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3128_, 0, v___f_3127_);
v___f_3129_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3129_, 0, v___f_3128_);
v___x_3130_ = lean_box_uint32(v_op_3121_);
v___x_3131_ = lean_box_uint64(v_flags_3122_);
lean_inc_ref(v___f_3129_);
v___f_3132_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__6___boxed), 9, 7);
lean_closure_set(v___f_3132_, 0, v_payload_3123_);
lean_closure_set(v___f_3132_, 1, v_failurePrefix_3124_);
lean_closure_set(v___f_3132_, 2, v___f_3126_);
lean_closure_set(v___f_3132_, 3, v___f_3129_);
lean_closure_set(v___f_3132_, 4, v___x_3130_);
lean_closure_set(v___f_3132_, 5, v___x_3131_);
lean_closure_set(v___f_3132_, 6, v___f_3129_);
v___f_3133_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3133_, 0, v___f_3132_);
v___x_3134_ = lean_unsigned_to_nat(0u);
v___x_3135_ = 0;
v___x_3140_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3140_) == 0)
{
lean_object* v_a_3141_; lean_object* v___x_3143_; uint8_t v_isShared_3144_; uint8_t v_isSharedCheck_3148_; 
v_a_3141_ = lean_ctor_get(v___x_3140_, 0);
v_isSharedCheck_3148_ = !lean_is_exclusive(v___x_3140_);
if (v_isSharedCheck_3148_ == 0)
{
v___x_3143_ = v___x_3140_;
v_isShared_3144_ = v_isSharedCheck_3148_;
goto v_resetjp_3142_;
}
else
{
lean_inc(v_a_3141_);
lean_dec(v___x_3140_);
v___x_3143_ = lean_box(0);
v_isShared_3144_ = v_isSharedCheck_3148_;
goto v_resetjp_3142_;
}
v_resetjp_3142_:
{
lean_object* v___x_3146_; 
if (v_isShared_3144_ == 0)
{
lean_ctor_set_tag(v___x_3143_, 1);
v___x_3146_ = v___x_3143_;
goto v_reusejp_3145_;
}
else
{
lean_object* v_reuseFailAlloc_3147_; 
v_reuseFailAlloc_3147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3147_, 0, v_a_3141_);
v___x_3146_ = v_reuseFailAlloc_3147_;
goto v_reusejp_3145_;
}
v_reusejp_3145_:
{
v_val_3137_ = v___x_3146_;
goto v___jp_3136_;
}
}
}
else
{
lean_object* v_a_3149_; lean_object* v___x_3151_; uint8_t v_isShared_3152_; uint8_t v_isSharedCheck_3156_; 
v_a_3149_ = lean_ctor_get(v___x_3140_, 0);
v_isSharedCheck_3156_ = !lean_is_exclusive(v___x_3140_);
if (v_isSharedCheck_3156_ == 0)
{
v___x_3151_ = v___x_3140_;
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
else
{
lean_inc(v_a_3149_);
lean_dec(v___x_3140_);
v___x_3151_ = lean_box(0);
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
v_resetjp_3150_:
{
lean_object* v___x_3154_; 
if (v_isShared_3152_ == 0)
{
lean_ctor_set_tag(v___x_3151_, 0);
v___x_3154_ = v___x_3151_;
goto v_reusejp_3153_;
}
else
{
lean_object* v_reuseFailAlloc_3155_; 
v_reuseFailAlloc_3155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3155_, 0, v_a_3149_);
v___x_3154_ = v_reuseFailAlloc_3155_;
goto v_reusejp_3153_;
}
v_reusejp_3153_:
{
v_val_3137_ = v___x_3154_;
goto v___jp_3136_;
}
}
}
v___jp_3136_:
{
lean_object* v___x_3138_; lean_object* v___x_3139_; 
v___x_3138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3138_, 0, v_val_3137_);
v___x_3139_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3134_, v___x_3135_, v___x_3138_, v___f_3133_);
return v___x_3139_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg___boxed(lean_object* v_inst_3157_, lean_object* v_context_3158_, lean_object* v_op_3159_, lean_object* v_flags_3160_, lean_object* v_payload_3161_, lean_object* v_failurePrefix_3162_, lean_object* v_a_3163_){
_start:
{
uint32_t v_op_boxed_3164_; uint64_t v_flags_boxed_3165_; lean_object* v_res_3166_; 
v_op_boxed_3164_ = lean_unbox_uint32(v_op_3159_);
lean_dec(v_op_3159_);
v_flags_boxed_3165_ = lean_unbox_uint64(v_flags_3160_);
lean_dec_ref(v_flags_3160_);
v_res_3166_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg(v_inst_3157_, v_context_3158_, v_op_boxed_3164_, v_flags_boxed_3165_, v_payload_3161_, v_failurePrefix_3162_);
return v_res_3166_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync(lean_object* v_00_u03b1_3167_, lean_object* v_inst_3168_, lean_object* v_context_3169_, uint32_t v_op_3170_, uint64_t v_flags_3171_, lean_object* v_payload_3172_, lean_object* v_failurePrefix_3173_){
_start:
{
lean_object* v___x_3175_; 
v___x_3175_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg(v_inst_3168_, v_context_3169_, v_op_3170_, v_flags_3171_, v_payload_3172_, v_failurePrefix_3173_);
return v___x_3175_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___boxed(lean_object* v_00_u03b1_3176_, lean_object* v_inst_3177_, lean_object* v_context_3178_, lean_object* v_op_3179_, lean_object* v_flags_3180_, lean_object* v_payload_3181_, lean_object* v_failurePrefix_3182_, lean_object* v_a_3183_){
_start:
{
uint32_t v_op_boxed_3184_; uint64_t v_flags_boxed_3185_; lean_object* v_res_3186_; 
v_op_boxed_3184_ = lean_unbox_uint32(v_op_3179_);
lean_dec(v_op_3179_);
v_flags_boxed_3185_ = lean_unbox_uint64(v_flags_3180_);
lean_dec_ref(v_flags_3180_);
v_res_3186_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync(v_00_u03b1_3176_, v_inst_3177_, v_context_3178_, v_op_boxed_3184_, v_flags_boxed_3185_, v_payload_3181_, v_failurePrefix_3182_);
return v_res_3186_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t v_m_3187_){
_start:
{
uint8_t v___x_3188_; uint8_t v___x_3189_; 
v___x_3188_ = 1;
v___x_3189_ = l_Lasm_JS_instBEqMode_beq(v_m_3187_, v___x_3188_);
if (v___x_3189_ == 0)
{
uint64_t v___x_3190_; 
v___x_3190_ = 0ULL;
return v___x_3190_;
}
else
{
uint64_t v___x_3191_; 
v___x_3191_ = 1ULL;
return v___x_3191_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_modeArg___boxed(lean_object* v_m_3192_){
_start:
{
uint8_t v_m_boxed_3193_; uint64_t v_res_3194_; lean_object* v_r_3195_; 
v_m_boxed_3193_ = lean_unbox(v_m_3192_);
v_res_3194_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v_m_boxed_3193_);
v_r_3195_ = lean_box_uint64(v_res_3194_);
return v_r_3195_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(lean_object* v_inst_3196_, lean_object* v_context_3197_, lean_object* v_bytes_3198_){
_start:
{
lean_object* v___x_3200_; 
v___x_3200_ = l_Lasm_JS_Wire_decode(v_bytes_3198_);
if (lean_obj_tag(v___x_3200_) == 0)
{
lean_object* v_a_3201_; lean_object* v___x_3202_; 
v_a_3201_ = lean_ctor_get(v___x_3200_, 0);
lean_inc(v_a_3201_);
lean_dec_ref_known(v___x_3200_, 1);
v___x_3202_ = l_Lasm_JS_decodeAs___redArg(v_inst_3196_, v_context_3197_, v_a_3201_);
return v___x_3202_;
}
else
{
lean_object* v_a_3203_; lean_object* v___x_3205_; uint8_t v_isShared_3206_; uint8_t v_isSharedCheck_3210_; 
lean_dec_ref(v_inst_3196_);
v_a_3203_ = lean_ctor_get(v___x_3200_, 0);
v_isSharedCheck_3210_ = !lean_is_exclusive(v___x_3200_);
if (v_isSharedCheck_3210_ == 0)
{
v___x_3205_ = v___x_3200_;
v_isShared_3206_ = v_isSharedCheck_3210_;
goto v_resetjp_3204_;
}
else
{
lean_inc(v_a_3203_);
lean_dec(v___x_3200_);
v___x_3205_ = lean_box(0);
v_isShared_3206_ = v_isSharedCheck_3210_;
goto v_resetjp_3204_;
}
v_resetjp_3204_:
{
lean_object* v___x_3208_; 
if (v_isShared_3206_ == 0)
{
v___x_3208_ = v___x_3205_;
goto v_reusejp_3207_;
}
else
{
lean_object* v_reuseFailAlloc_3209_; 
v_reuseFailAlloc_3209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3209_, 0, v_a_3203_);
v___x_3208_ = v_reuseFailAlloc_3209_;
goto v_reusejp_3207_;
}
v_reusejp_3207_:
{
return v___x_3208_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg___boxed(lean_object* v_inst_3211_, lean_object* v_context_3212_, lean_object* v_bytes_3213_, lean_object* v_a_3214_){
_start:
{
lean_object* v_res_3215_; 
v_res_3215_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_3211_, v_context_3212_, v_bytes_3213_);
lean_dec_ref(v_bytes_3213_);
lean_dec_ref(v_context_3212_);
return v_res_3215_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive(lean_object* v_00_u03b1_3216_, lean_object* v_inst_3217_, lean_object* v_context_3218_, lean_object* v_bytes_3219_){
_start:
{
lean_object* v___x_3221_; 
v___x_3221_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_3217_, v_context_3218_, v_bytes_3219_);
return v___x_3221_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___boxed(lean_object* v_00_u03b1_3222_, lean_object* v_inst_3223_, lean_object* v_context_3224_, lean_object* v_bytes_3225_, lean_object* v_a_3226_){
_start:
{
lean_object* v_res_3227_; 
v_res_3227_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive(v_00_u03b1_3222_, v_inst_3223_, v_context_3224_, v_bytes_3225_);
lean_dec_ref(v_bytes_3225_);
lean_dec_ref(v_context_3224_);
return v_res_3227_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(lean_object* v_context_3228_, lean_object* v_d_3229_){
_start:
{
lean_object* v_received_3232_; 
if (lean_obj_tag(v_d_3229_) == 9)
{
lean_object* v_value_3246_; lean_object* v___x_3247_; 
v_value_3246_ = lean_ctor_get(v_d_3229_, 0);
lean_inc(v_value_3246_);
lean_dec_ref_known(v_d_3229_, 2);
v___x_3247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3247_, 0, v_value_3246_);
return v___x_3247_;
}
else
{
if (lean_obj_tag(v_d_3229_) == 9)
{
lean_object* v_value_3248_; lean_object* v_description_3249_; lean_object* v___x_3250_; uint8_t v___x_3251_; 
v_value_3248_ = lean_ctor_get(v_d_3229_, 0);
v_description_3249_ = lean_ctor_get(v_d_3229_, 1);
v___x_3250_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___x_3251_ = lean_string_dec_eq(v_description_3249_, v___x_3250_);
if (v___x_3251_ == 0)
{
goto v___jp_3244_;
}
else
{
uint32_t v___x_3252_; uint64_t v___x_3253_; lean_object* v___x_3254_; uint32_t v___x_3255_; lean_object* v___x_3256_; 
lean_inc_n(v_value_3248_, 2);
lean_dec_ref_known(v_d_3229_, 2);
v___x_3252_ = 206;
v___x_3253_ = 0ULL;
v___x_3254_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3254_, 0, v_value_3248_);
lean_ctor_set(v___x_3254_, 1, v___x_3250_);
v___x_3255_ = lasm_js_value_handle(v_value_3248_);
lean_dec(v_value_3248_);
v___x_3256_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3252_, v___x_3253_, v___x_3254_, v___x_3255_);
if (lean_obj_tag(v___x_3256_) == 0)
{
lean_object* v_a_3257_; uint8_t v___x_3258_; 
v_a_3257_ = lean_ctor_get(v___x_3256_, 0);
lean_inc(v_a_3257_);
lean_dec_ref_known(v___x_3256_, 1);
v___x_3258_ = lean_string_validate_utf8(v_a_3257_);
if (v___x_3258_ == 0)
{
lean_object* v___x_3259_; lean_object* v___x_3260_; 
lean_dec(v_a_3257_);
v___x_3259_ = lean_obj_once(&l_Lasm_JS_decodeAs___redArg___closed__7, &l_Lasm_JS_decodeAs___redArg___closed__7_once, _init_l_Lasm_JS_decodeAs___redArg___closed__7);
v___x_3260_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3259_);
v_received_3232_ = v___x_3260_;
goto v___jp_3231_;
}
else
{
lean_object* v___x_3261_; 
v___x_3261_ = lean_string_from_utf8_unchecked(v_a_3257_);
v_received_3232_ = v___x_3261_;
goto v___jp_3231_;
}
}
else
{
lean_object* v___x_3262_; 
lean_dec_ref_known(v___x_3256_, 1);
v___x_3262_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__8));
v_received_3232_ = v___x_3262_;
goto v___jp_3231_;
}
}
}
else
{
goto v___jp_3244_;
}
}
v___jp_3231_:
{
lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; 
v___x_3233_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__0));
v___x_3234_ = lean_string_append(v___x_3233_, v_context_3228_);
v___x_3235_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__1));
v___x_3236_ = lean_string_append(v___x_3234_, v___x_3235_);
v___x_3237_ = ((lean_object*)(l_Lasm_JS_instFromJSValue___closed__1));
v___x_3238_ = lean_string_append(v___x_3236_, v___x_3237_);
v___x_3239_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__2));
v___x_3240_ = lean_string_append(v___x_3238_, v___x_3239_);
v___x_3241_ = lean_string_append(v___x_3240_, v_received_3232_);
lean_dec_ref(v_received_3232_);
v___x_3242_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3242_, 0, v___x_3241_);
v___x_3243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3243_, 0, v___x_3242_);
return v___x_3243_;
}
v___jp_3244_:
{
lean_object* v___x_3245_; 
v___x_3245_ = l_Lasm_JS_Data_describe(v_d_3229_);
v_received_3232_ = v___x_3245_;
goto v___jp_3231_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0___boxed(lean_object* v_context_3263_, lean_object* v_d_3264_, lean_object* v_a_3265_){
_start:
{
lean_object* v_res_3266_; 
v_res_3266_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v_context_3263_, v_d_3264_);
lean_dec_ref(v_context_3263_);
return v_res_3266_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object* v_context_3267_, lean_object* v_bytes_3268_){
_start:
{
lean_object* v___x_3270_; 
v___x_3270_ = l_Lasm_JS_Wire_decode(v_bytes_3268_);
if (lean_obj_tag(v___x_3270_) == 0)
{
lean_object* v_a_3271_; lean_object* v___x_3272_; 
v_a_3271_ = lean_ctor_get(v___x_3270_, 0);
lean_inc(v_a_3271_);
lean_dec_ref_known(v___x_3270_, 1);
v___x_3272_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v_context_3267_, v_a_3271_);
return v___x_3272_;
}
else
{
lean_object* v_a_3273_; lean_object* v___x_3275_; uint8_t v_isShared_3276_; uint8_t v_isSharedCheck_3280_; 
v_a_3273_ = lean_ctor_get(v___x_3270_, 0);
v_isSharedCheck_3280_ = !lean_is_exclusive(v___x_3270_);
if (v_isSharedCheck_3280_ == 0)
{
v___x_3275_ = v___x_3270_;
v_isShared_3276_ = v_isSharedCheck_3280_;
goto v_resetjp_3274_;
}
else
{
lean_inc(v_a_3273_);
lean_dec(v___x_3270_);
v___x_3275_ = lean_box(0);
v_isShared_3276_ = v_isSharedCheck_3280_;
goto v_resetjp_3274_;
}
v_resetjp_3274_:
{
lean_object* v___x_3278_; 
if (v_isShared_3276_ == 0)
{
v___x_3278_ = v___x_3275_;
goto v_reusejp_3277_;
}
else
{
lean_object* v_reuseFailAlloc_3279_; 
v_reuseFailAlloc_3279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3279_, 0, v_a_3273_);
v___x_3278_ = v_reuseFailAlloc_3279_;
goto v_reusejp_3277_;
}
v_reusejp_3277_:
{
return v___x_3278_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0___boxed(lean_object* v_context_3281_, lean_object* v_bytes_3282_, lean_object* v_a_3283_){
_start:
{
lean_object* v_res_3284_; 
v_res_3284_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v_context_3281_, v_bytes_3282_);
lean_dec_ref(v_bytes_3282_);
lean_dec_ref(v_context_3281_);
return v_res_3284_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_global(){
_start:
{
uint32_t v___x_3287_; uint32_t v___x_3288_; uint64_t v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; 
v___x_3287_ = 202;
v___x_3288_ = 0;
v___x_3289_ = 0ULL;
v___x_3290_ = l_ByteArray_empty;
v___x_3291_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_3287_, v___x_3288_, v___x_3289_, v___x_3290_);
if (lean_obj_tag(v___x_3291_) == 0)
{
lean_object* v_a_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; 
v_a_3292_ = lean_ctor_get(v___x_3291_, 0);
lean_inc(v_a_3292_);
lean_dec_ref_known(v___x_3291_, 1);
v___x_3293_ = ((lean_object*)(l_Lasm_JS_global___closed__0));
v___x_3294_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_3293_, v_a_3292_);
lean_dec(v_a_3292_);
return v___x_3294_;
}
else
{
lean_object* v_a_3295_; lean_object* v___x_3297_; uint8_t v_isShared_3298_; uint8_t v_isSharedCheck_3302_; 
v_a_3295_ = lean_ctor_get(v___x_3291_, 0);
v_isSharedCheck_3302_ = !lean_is_exclusive(v___x_3291_);
if (v_isSharedCheck_3302_ == 0)
{
v___x_3297_ = v___x_3291_;
v_isShared_3298_ = v_isSharedCheck_3302_;
goto v_resetjp_3296_;
}
else
{
lean_inc(v_a_3295_);
lean_dec(v___x_3291_);
v___x_3297_ = lean_box(0);
v_isShared_3298_ = v_isSharedCheck_3302_;
goto v_resetjp_3296_;
}
v_resetjp_3296_:
{
lean_object* v___x_3300_; 
if (v_isShared_3298_ == 0)
{
v___x_3300_ = v___x_3297_;
goto v_reusejp_3299_;
}
else
{
lean_object* v_reuseFailAlloc_3301_; 
v_reuseFailAlloc_3301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3301_, 0, v_a_3295_);
v___x_3300_ = v_reuseFailAlloc_3301_;
goto v_reusejp_3299_;
}
v_reusejp_3299_:
{
return v___x_3300_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_global___boxed(lean_object* v_a_3303_){
_start:
{
lean_object* v_res_3304_; 
v_res_3304_ = l_Lasm_JS_global();
return v_res_3304_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___redArg(lean_object* v_specifier_3306_, lean_object* v_inst_3307_){
_start:
{
uint8_t v_mode_3309_; uint32_t v___x_3310_; uint32_t v___x_3311_; uint64_t v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; 
v_mode_3309_ = lean_ctor_get_uint8(v_inst_3307_, sizeof(void*)*2);
v___x_3310_ = 201;
v___x_3311_ = 0;
v___x_3312_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v_mode_3309_);
lean_inc_ref(v_specifier_3306_);
v___x_3313_ = lean_string_to_utf8(v_specifier_3306_);
v___x_3314_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_3310_, v___x_3311_, v___x_3312_, v___x_3313_);
lean_dec_ref(v___x_3313_);
if (lean_obj_tag(v___x_3314_) == 0)
{
lean_object* v_a_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; 
v_a_3315_ = lean_ctor_get(v___x_3314_, 0);
lean_inc(v_a_3315_);
lean_dec_ref_known(v___x_3314_, 1);
v___x_3316_ = ((lean_object*)(l_Lasm_JS_require___redArg___closed__0));
v___x_3317_ = l_String_quote(v_specifier_3306_);
v___x_3318_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3318_, 0, v___x_3317_);
v___x_3319_ = lean_unsigned_to_nat(120u);
v___x_3320_ = lean_unsigned_to_nat(0u);
v___x_3321_ = l_Std_Format_pretty(v___x_3318_, v___x_3319_, v___x_3320_, v___x_3320_);
v___x_3322_ = lean_string_append(v___x_3316_, v___x_3321_);
lean_dec_ref(v___x_3321_);
v___x_3323_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_3307_, v___x_3322_, v_a_3315_);
lean_dec(v_a_3315_);
lean_dec_ref(v___x_3322_);
return v___x_3323_;
}
else
{
lean_object* v_a_3324_; lean_object* v___x_3326_; uint8_t v_isShared_3327_; uint8_t v_isSharedCheck_3331_; 
lean_dec_ref(v_inst_3307_);
lean_dec_ref(v_specifier_3306_);
v_a_3324_ = lean_ctor_get(v___x_3314_, 0);
v_isSharedCheck_3331_ = !lean_is_exclusive(v___x_3314_);
if (v_isSharedCheck_3331_ == 0)
{
v___x_3326_ = v___x_3314_;
v_isShared_3327_ = v_isSharedCheck_3331_;
goto v_resetjp_3325_;
}
else
{
lean_inc(v_a_3324_);
lean_dec(v___x_3314_);
v___x_3326_ = lean_box(0);
v_isShared_3327_ = v_isSharedCheck_3331_;
goto v_resetjp_3325_;
}
v_resetjp_3325_:
{
lean_object* v___x_3329_; 
if (v_isShared_3327_ == 0)
{
v___x_3329_ = v___x_3326_;
goto v_reusejp_3328_;
}
else
{
lean_object* v_reuseFailAlloc_3330_; 
v_reuseFailAlloc_3330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3330_, 0, v_a_3324_);
v___x_3329_ = v_reuseFailAlloc_3330_;
goto v_reusejp_3328_;
}
v_reusejp_3328_:
{
return v___x_3329_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___redArg___boxed(lean_object* v_specifier_3332_, lean_object* v_inst_3333_, lean_object* v_a_3334_){
_start:
{
lean_object* v_res_3335_; 
v_res_3335_ = l_Lasm_JS_require___redArg(v_specifier_3332_, v_inst_3333_);
return v_res_3335_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require(lean_object* v_specifier_3336_, lean_object* v_00_u03b1_3337_, lean_object* v_inst_3338_){
_start:
{
lean_object* v___x_3340_; 
v___x_3340_ = l_Lasm_JS_require___redArg(v_specifier_3336_, v_inst_3338_);
return v___x_3340_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___boxed(lean_object* v_specifier_3341_, lean_object* v_00_u03b1_3342_, lean_object* v_inst_3343_, lean_object* v_a_3344_){
_start:
{
lean_object* v_res_3345_; 
v_res_3345_ = l_Lasm_JS_require(v_specifier_3341_, v_00_u03b1_3342_, v_inst_3343_);
return v_res_3345_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_describe(lean_object* v_v_3346_){
_start:
{
uint32_t v___x_3348_; uint64_t v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; uint32_t v___x_3352_; lean_object* v___x_3353_; 
v___x_3348_ = 206;
v___x_3349_ = 0ULL;
v___x_3350_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
lean_inc(v_v_3346_);
v___x_3351_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3351_, 0, v_v_3346_);
lean_ctor_set(v___x_3351_, 1, v___x_3350_);
v___x_3352_ = lasm_js_value_handle(v_v_3346_);
lean_dec(v_v_3346_);
v___x_3353_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3348_, v___x_3349_, v___x_3351_, v___x_3352_);
if (lean_obj_tag(v___x_3353_) == 0)
{
lean_object* v_a_3354_; lean_object* v___x_3356_; uint8_t v_isShared_3357_; uint8_t v_isSharedCheck_3368_; 
v_a_3354_ = lean_ctor_get(v___x_3353_, 0);
v_isSharedCheck_3368_ = !lean_is_exclusive(v___x_3353_);
if (v_isSharedCheck_3368_ == 0)
{
v___x_3356_ = v___x_3353_;
v_isShared_3357_ = v_isSharedCheck_3368_;
goto v_resetjp_3355_;
}
else
{
lean_inc(v_a_3354_);
lean_dec(v___x_3353_);
v___x_3356_ = lean_box(0);
v_isShared_3357_ = v_isSharedCheck_3368_;
goto v_resetjp_3355_;
}
v_resetjp_3355_:
{
uint8_t v___x_3358_; 
v___x_3358_ = lean_string_validate_utf8(v_a_3354_);
if (v___x_3358_ == 0)
{
lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3362_; 
lean_dec(v_a_3354_);
v___x_3359_ = lean_obj_once(&l_Lasm_JS_decodeAs___redArg___closed__7, &l_Lasm_JS_decodeAs___redArg___closed__7_once, _init_l_Lasm_JS_decodeAs___redArg___closed__7);
v___x_3360_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_3359_);
if (v_isShared_3357_ == 0)
{
lean_ctor_set(v___x_3356_, 0, v___x_3360_);
v___x_3362_ = v___x_3356_;
goto v_reusejp_3361_;
}
else
{
lean_object* v_reuseFailAlloc_3363_; 
v_reuseFailAlloc_3363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3363_, 0, v___x_3360_);
v___x_3362_ = v_reuseFailAlloc_3363_;
goto v_reusejp_3361_;
}
v_reusejp_3361_:
{
return v___x_3362_;
}
}
else
{
lean_object* v___x_3364_; lean_object* v___x_3366_; 
v___x_3364_ = lean_string_from_utf8_unchecked(v_a_3354_);
if (v_isShared_3357_ == 0)
{
lean_ctor_set(v___x_3356_, 0, v___x_3364_);
v___x_3366_ = v___x_3356_;
goto v_reusejp_3365_;
}
else
{
lean_object* v_reuseFailAlloc_3367_; 
v_reuseFailAlloc_3367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3367_, 0, v___x_3364_);
v___x_3366_ = v_reuseFailAlloc_3367_;
goto v_reusejp_3365_;
}
v_reusejp_3365_:
{
return v___x_3366_;
}
}
}
}
else
{
lean_object* v_a_3369_; lean_object* v___x_3371_; uint8_t v_isShared_3372_; uint8_t v_isSharedCheck_3376_; 
v_a_3369_ = lean_ctor_get(v___x_3353_, 0);
v_isSharedCheck_3376_ = !lean_is_exclusive(v___x_3353_);
if (v_isSharedCheck_3376_ == 0)
{
v___x_3371_ = v___x_3353_;
v_isShared_3372_ = v_isSharedCheck_3376_;
goto v_resetjp_3370_;
}
else
{
lean_inc(v_a_3369_);
lean_dec(v___x_3353_);
v___x_3371_ = lean_box(0);
v_isShared_3372_ = v_isSharedCheck_3376_;
goto v_resetjp_3370_;
}
v_resetjp_3370_:
{
lean_object* v___x_3374_; 
if (v_isShared_3372_ == 0)
{
v___x_3374_ = v___x_3371_;
goto v_reusejp_3373_;
}
else
{
lean_object* v_reuseFailAlloc_3375_; 
v_reuseFailAlloc_3375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3375_, 0, v_a_3369_);
v___x_3374_ = v_reuseFailAlloc_3375_;
goto v_reusejp_3373_;
}
v_reusejp_3373_:
{
return v___x_3374_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_describe___boxed(lean_object* v_v_3377_, lean_object* v_a_3378_){
_start:
{
lean_object* v_res_3379_; 
v_res_3379_ = l_Lasm_JS_Value_describe(v_v_3377_);
return v_res_3379_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___redArg(lean_object* v_o_3381_, lean_object* v_key_3382_, lean_object* v_inst_3383_){
_start:
{
uint8_t v_mode_3385_; uint32_t v___x_3386_; uint32_t v___x_3387_; uint64_t v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; 
v_mode_3385_ = lean_ctor_get_uint8(v_inst_3383_, sizeof(void*)*2);
v___x_3386_ = 203;
v___x_3387_ = lasm_js_value_handle(v_o_3381_);
v___x_3388_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v_mode_3385_);
lean_inc_ref(v_key_3382_);
v___x_3389_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3389_, 0, v_key_3382_);
v___x_3390_ = l_Lasm_JS_Wire_encode(v___x_3389_);
v___x_3391_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___x_3392_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3392_, 0, v_o_3381_);
lean_ctor_set(v___x_3392_, 1, v___x_3391_);
v___x_3393_ = lasm_js_call(v___x_3386_, v___x_3387_, v___x_3388_, v___x_3390_, v___x_3392_);
lean_dec_ref_known(v___x_3392_, 2);
lean_dec_ref(v___x_3390_);
if (lean_obj_tag(v___x_3393_) == 0)
{
lean_object* v_a_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; 
v_a_3394_ = lean_ctor_get(v___x_3393_, 0);
lean_inc(v_a_3394_);
lean_dec_ref_known(v___x_3393_, 1);
v___x_3395_ = ((lean_object*)(l_Lasm_JS_Value_get___redArg___closed__0));
v___x_3396_ = l_String_quote(v_key_3382_);
v___x_3397_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3397_, 0, v___x_3396_);
v___x_3398_ = lean_unsigned_to_nat(120u);
v___x_3399_ = lean_unsigned_to_nat(0u);
v___x_3400_ = l_Std_Format_pretty(v___x_3397_, v___x_3398_, v___x_3399_, v___x_3399_);
v___x_3401_ = lean_string_append(v___x_3395_, v___x_3400_);
lean_dec_ref(v___x_3400_);
v___x_3402_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_3383_, v___x_3401_, v_a_3394_);
lean_dec(v_a_3394_);
lean_dec_ref(v___x_3401_);
return v___x_3402_;
}
else
{
lean_object* v_a_3403_; lean_object* v___x_3405_; uint8_t v_isShared_3406_; uint8_t v_isSharedCheck_3410_; 
lean_dec_ref(v_inst_3383_);
lean_dec_ref(v_key_3382_);
v_a_3403_ = lean_ctor_get(v___x_3393_, 0);
v_isSharedCheck_3410_ = !lean_is_exclusive(v___x_3393_);
if (v_isSharedCheck_3410_ == 0)
{
v___x_3405_ = v___x_3393_;
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
else
{
lean_inc(v_a_3403_);
lean_dec(v___x_3393_);
v___x_3405_ = lean_box(0);
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
v_resetjp_3404_:
{
lean_object* v___x_3408_; 
if (v_isShared_3406_ == 0)
{
v___x_3408_ = v___x_3405_;
goto v_reusejp_3407_;
}
else
{
lean_object* v_reuseFailAlloc_3409_; 
v_reuseFailAlloc_3409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3409_, 0, v_a_3403_);
v___x_3408_ = v_reuseFailAlloc_3409_;
goto v_reusejp_3407_;
}
v_reusejp_3407_:
{
return v___x_3408_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___redArg___boxed(lean_object* v_o_3411_, lean_object* v_key_3412_, lean_object* v_inst_3413_, lean_object* v_a_3414_){
_start:
{
lean_object* v_res_3415_; 
v_res_3415_ = l_Lasm_JS_Value_get___redArg(v_o_3411_, v_key_3412_, v_inst_3413_);
return v_res_3415_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get(lean_object* v_o_3416_, lean_object* v_key_3417_, lean_object* v_00_u03b1_3418_, lean_object* v_inst_3419_){
_start:
{
lean_object* v___x_3421_; 
v___x_3421_ = l_Lasm_JS_Value_get___redArg(v_o_3416_, v_key_3417_, v_inst_3419_);
return v___x_3421_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___boxed(lean_object* v_o_3422_, lean_object* v_key_3423_, lean_object* v_00_u03b1_3424_, lean_object* v_inst_3425_, lean_object* v_a_3426_){
_start:
{
lean_object* v_res_3427_; 
v_res_3427_ = l_Lasm_JS_Value_get(v_o_3422_, v_key_3423_, v_00_u03b1_3424_, v_inst_3425_);
return v_res_3427_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___redArg___lam__0(lean_object* v_x_3428_){
_start:
{
lean_object* v___x_3429_; 
v___x_3429_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3429_, 0, v_x_3428_);
return v___x_3429_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___redArg(lean_object* v_o_3432_, lean_object* v_keys_3433_, lean_object* v_inst_3434_){
_start:
{
lean_object* v___f_3436_; uint32_t v___x_3437_; uint32_t v___x_3438_; uint64_t v___x_3439_; lean_object* v___x_3440_; size_t v_sz_3441_; size_t v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; 
v___f_3436_ = ((lean_object*)(l_Lasm_JS_Value_getFields___redArg___closed__0));
v___x_3437_ = 203;
v___x_3438_ = lasm_js_value_handle(v_o_3432_);
v___x_3439_ = 0ULL;
v___x_3440_ = ((lean_object*)(l_Lasm_JS_instToJSArray___redArg___lam__1___closed__9));
v_sz_3441_ = lean_array_size(v_keys_3433_);
v___x_3442_ = ((size_t)0ULL);
v___x_3443_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_3440_, v___f_3436_, v_sz_3441_, v___x_3442_, v_keys_3433_);
v___x_3444_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3444_, 0, v___x_3443_);
v___x_3445_ = l_Lasm_JS_Wire_encode(v___x_3444_);
v___x_3446_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___x_3447_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3447_, 0, v_o_3432_);
lean_ctor_set(v___x_3447_, 1, v___x_3446_);
v___x_3448_ = lasm_js_call(v___x_3437_, v___x_3438_, v___x_3439_, v___x_3445_, v___x_3447_);
lean_dec_ref_known(v___x_3447_, 2);
lean_dec_ref(v___x_3445_);
if (lean_obj_tag(v___x_3448_) == 0)
{
lean_object* v_a_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; 
v_a_3449_ = lean_ctor_get(v___x_3448_, 0);
lean_inc(v_a_3449_);
lean_dec_ref_known(v___x_3448_, 1);
v___x_3450_ = ((lean_object*)(l_Lasm_JS_Value_getFields___redArg___closed__1));
v___x_3451_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_3434_, v___x_3450_, v_a_3449_);
lean_dec(v_a_3449_);
return v___x_3451_;
}
else
{
lean_object* v_a_3452_; lean_object* v___x_3454_; uint8_t v_isShared_3455_; uint8_t v_isSharedCheck_3459_; 
lean_dec_ref(v_inst_3434_);
v_a_3452_ = lean_ctor_get(v___x_3448_, 0);
v_isSharedCheck_3459_ = !lean_is_exclusive(v___x_3448_);
if (v_isSharedCheck_3459_ == 0)
{
v___x_3454_ = v___x_3448_;
v_isShared_3455_ = v_isSharedCheck_3459_;
goto v_resetjp_3453_;
}
else
{
lean_inc(v_a_3452_);
lean_dec(v___x_3448_);
v___x_3454_ = lean_box(0);
v_isShared_3455_ = v_isSharedCheck_3459_;
goto v_resetjp_3453_;
}
v_resetjp_3453_:
{
lean_object* v___x_3457_; 
if (v_isShared_3455_ == 0)
{
v___x_3457_ = v___x_3454_;
goto v_reusejp_3456_;
}
else
{
lean_object* v_reuseFailAlloc_3458_; 
v_reuseFailAlloc_3458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3458_, 0, v_a_3452_);
v___x_3457_ = v_reuseFailAlloc_3458_;
goto v_reusejp_3456_;
}
v_reusejp_3456_:
{
return v___x_3457_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___redArg___boxed(lean_object* v_o_3460_, lean_object* v_keys_3461_, lean_object* v_inst_3462_, lean_object* v_a_3463_){
_start:
{
lean_object* v_res_3464_; 
v_res_3464_ = l_Lasm_JS_Value_getFields___redArg(v_o_3460_, v_keys_3461_, v_inst_3462_);
return v_res_3464_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields(lean_object* v_o_3465_, lean_object* v_keys_3466_, lean_object* v_00_u03b1_3467_, lean_object* v_inst_3468_){
_start:
{
lean_object* v___x_3470_; 
v___x_3470_ = l_Lasm_JS_Value_getFields___redArg(v_o_3465_, v_keys_3466_, v_inst_3468_);
return v___x_3470_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_getFields___boxed(lean_object* v_o_3471_, lean_object* v_keys_3472_, lean_object* v_00_u03b1_3473_, lean_object* v_inst_3474_, lean_object* v_a_3475_){
_start:
{
lean_object* v_res_3476_; 
v_res_3476_ = l_Lasm_JS_Value_getFields(v_o_3471_, v_keys_3472_, v_00_u03b1_3473_, v_inst_3474_);
return v_res_3476_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___redArg(lean_object* v_inst_3477_, lean_object* v_o_3478_, lean_object* v_key_3479_, lean_object* v_x_3480_){
_start:
{
lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v_payload_3491_; uint32_t v___x_3492_; uint32_t v___x_3493_; uint64_t v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; 
v___x_3482_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3482_, 0, v_key_3479_);
v___x_3483_ = lean_apply_1(v_inst_3477_, v_x_3480_);
v___x_3484_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
lean_inc(v_o_3478_);
v___x_3485_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3485_, 0, v_o_3478_);
lean_ctor_set(v___x_3485_, 1, v___x_3484_);
v___x_3486_ = lean_unsigned_to_nat(3u);
v___x_3487_ = lean_mk_empty_array_with_capacity(v___x_3486_);
lean_inc_ref(v___x_3482_);
v___x_3488_ = lean_array_push(v___x_3487_, v___x_3482_);
lean_inc(v___x_3483_);
v___x_3489_ = lean_array_push(v___x_3488_, v___x_3483_);
v___x_3490_ = lean_array_push(v___x_3489_, v___x_3485_);
v_payload_3491_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_payload_3491_, 0, v___x_3490_);
v___x_3492_ = 204;
v___x_3493_ = lasm_js_value_handle(v_o_3478_);
lean_dec(v_o_3478_);
v___x_3494_ = 0ULL;
v___x_3495_ = lean_unsigned_to_nat(2u);
v___x_3496_ = lean_mk_empty_array_with_capacity(v___x_3495_);
v___x_3497_ = lean_array_push(v___x_3496_, v___x_3482_);
v___x_3498_ = lean_array_push(v___x_3497_, v___x_3483_);
v___x_3499_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3499_, 0, v___x_3498_);
v___x_3500_ = l_Lasm_JS_Wire_encode(v___x_3499_);
v___x_3501_ = lean_box(0);
v___x_3502_ = lasm_js_call(v___x_3492_, v___x_3493_, v___x_3494_, v___x_3500_, v_payload_3491_);
lean_dec_ref_known(v_payload_3491_, 1);
lean_dec_ref(v___x_3500_);
if (lean_obj_tag(v___x_3502_) == 0)
{
lean_object* v___x_3504_; uint8_t v_isShared_3505_; uint8_t v_isSharedCheck_3509_; 
v_isSharedCheck_3509_ = !lean_is_exclusive(v___x_3502_);
if (v_isSharedCheck_3509_ == 0)
{
lean_object* v_unused_3510_; 
v_unused_3510_ = lean_ctor_get(v___x_3502_, 0);
lean_dec(v_unused_3510_);
v___x_3504_ = v___x_3502_;
v_isShared_3505_ = v_isSharedCheck_3509_;
goto v_resetjp_3503_;
}
else
{
lean_dec(v___x_3502_);
v___x_3504_ = lean_box(0);
v_isShared_3505_ = v_isSharedCheck_3509_;
goto v_resetjp_3503_;
}
v_resetjp_3503_:
{
lean_object* v___x_3507_; 
if (v_isShared_3505_ == 0)
{
lean_ctor_set(v___x_3504_, 0, v___x_3501_);
v___x_3507_ = v___x_3504_;
goto v_reusejp_3506_;
}
else
{
lean_object* v_reuseFailAlloc_3508_; 
v_reuseFailAlloc_3508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3508_, 0, v___x_3501_);
v___x_3507_ = v_reuseFailAlloc_3508_;
goto v_reusejp_3506_;
}
v_reusejp_3506_:
{
return v___x_3507_;
}
}
}
else
{
lean_object* v_a_3511_; lean_object* v___x_3513_; uint8_t v_isShared_3514_; uint8_t v_isSharedCheck_3518_; 
v_a_3511_ = lean_ctor_get(v___x_3502_, 0);
v_isSharedCheck_3518_ = !lean_is_exclusive(v___x_3502_);
if (v_isSharedCheck_3518_ == 0)
{
v___x_3513_ = v___x_3502_;
v_isShared_3514_ = v_isSharedCheck_3518_;
goto v_resetjp_3512_;
}
else
{
lean_inc(v_a_3511_);
lean_dec(v___x_3502_);
v___x_3513_ = lean_box(0);
v_isShared_3514_ = v_isSharedCheck_3518_;
goto v_resetjp_3512_;
}
v_resetjp_3512_:
{
lean_object* v___x_3516_; 
if (v_isShared_3514_ == 0)
{
v___x_3516_ = v___x_3513_;
goto v_reusejp_3515_;
}
else
{
lean_object* v_reuseFailAlloc_3517_; 
v_reuseFailAlloc_3517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3517_, 0, v_a_3511_);
v___x_3516_ = v_reuseFailAlloc_3517_;
goto v_reusejp_3515_;
}
v_reusejp_3515_:
{
return v___x_3516_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___redArg___boxed(lean_object* v_inst_3519_, lean_object* v_o_3520_, lean_object* v_key_3521_, lean_object* v_x_3522_, lean_object* v_a_3523_){
_start:
{
lean_object* v_res_3524_; 
v_res_3524_ = l_Lasm_JS_Value_set___redArg(v_inst_3519_, v_o_3520_, v_key_3521_, v_x_3522_);
return v_res_3524_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set(lean_object* v_00_u03b1_3525_, lean_object* v_inst_3526_, lean_object* v_o_3527_, lean_object* v_key_3528_, lean_object* v_x_3529_){
_start:
{
lean_object* v___x_3531_; 
v___x_3531_ = l_Lasm_JS_Value_set___redArg(v_inst_3526_, v_o_3527_, v_key_3528_, v_x_3529_);
return v___x_3531_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___boxed(lean_object* v_00_u03b1_3532_, lean_object* v_inst_3533_, lean_object* v_o_3534_, lean_object* v_key_3535_, lean_object* v_x_3536_, lean_object* v_a_3537_){
_start:
{
lean_object* v_res_3538_; 
v_res_3538_ = l_Lasm_JS_Value_set(v_00_u03b1_3532_, v_inst_3533_, v_o_3534_, v_key_3535_, v_x_3536_);
return v_res_3538_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_invokeRaw(lean_object* v_target_3539_, lean_object* v_receiver_3540_, lean_object* v_args_3541_, uint64_t v_flags_3542_){
_start:
{
uint32_t v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; uint32_t v___x_3552_; lean_object* v___x_3553_; 
v___x_3544_ = 205;
v___x_3545_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3545_, 0, v_args_3541_);
v___x_3546_ = lean_unsigned_to_nat(3u);
v___x_3547_ = lean_mk_empty_array_with_capacity(v___x_3546_);
v___x_3548_ = lean_array_push(v___x_3547_, v_target_3539_);
v___x_3549_ = lean_array_push(v___x_3548_, v_receiver_3540_);
v___x_3550_ = lean_array_push(v___x_3549_, v___x_3545_);
v___x_3551_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3551_, 0, v___x_3550_);
v___x_3552_ = 0;
v___x_3553_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3544_, v_flags_3542_, v___x_3551_, v___x_3552_);
return v___x_3553_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_invokeRaw___boxed(lean_object* v_target_3554_, lean_object* v_receiver_3555_, lean_object* v_args_3556_, lean_object* v_flags_3557_, lean_object* v_a_3558_){
_start:
{
uint64_t v_flags_boxed_3559_; lean_object* v_res_3560_; 
v_flags_boxed_3559_ = lean_unbox_uint64(v_flags_3557_);
lean_dec_ref(v_flags_3557_);
v_res_3560_ = l_Lasm_JS_Value_invokeRaw(v_target_3554_, v_receiver_3555_, v_args_3556_, v_flags_boxed_3559_);
return v_res_3560_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(lean_object* v_inst_3561_, uint8_t v_await_3562_, uint64_t v_extra_3563_){
_start:
{
uint8_t v_mode_3564_; uint64_t v___x_3565_; uint64_t v___y_3567_; 
v_mode_3564_ = lean_ctor_get_uint8(v_inst_3561_, sizeof(void*)*2);
v___x_3565_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v_mode_3564_);
if (v_await_3562_ == 0)
{
uint64_t v___x_3570_; 
v___x_3570_ = 0ULL;
v___y_3567_ = v___x_3570_;
goto v___jp_3566_;
}
else
{
uint64_t v___x_3571_; 
v___x_3571_ = 2ULL;
v___y_3567_ = v___x_3571_;
goto v___jp_3566_;
}
v___jp_3566_:
{
uint64_t v___x_3568_; uint64_t v___x_3569_; 
v___x_3568_ = lean_uint64_lor(v___x_3565_, v___y_3567_);
v___x_3569_ = lean_uint64_lor(v___x_3568_, v_extra_3563_);
return v___x_3569_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg___boxed(lean_object* v_inst_3572_, lean_object* v_await_3573_, lean_object* v_extra_3574_){
_start:
{
uint8_t v_await_boxed_3575_; uint64_t v_extra_boxed_3576_; uint64_t v_res_3577_; lean_object* v_r_3578_; 
v_await_boxed_3575_ = lean_unbox(v_await_3573_);
v_extra_boxed_3576_ = lean_unbox_uint64(v_extra_3574_);
lean_dec_ref(v_extra_3574_);
v_res_3577_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_3572_, v_await_boxed_3575_, v_extra_boxed_3576_);
lean_dec_ref(v_inst_3572_);
v_r_3578_ = lean_box_uint64(v_res_3577_);
return v_r_3578_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags(lean_object* v_00_u03b1_3579_, lean_object* v_inst_3580_, uint8_t v_await_3581_, uint64_t v_extra_3582_){
_start:
{
uint64_t v___x_3583_; 
v___x_3583_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_3580_, v_await_3581_, v_extra_3582_);
return v___x_3583_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___boxed(lean_object* v_00_u03b1_3584_, lean_object* v_inst_3585_, lean_object* v_await_3586_, lean_object* v_extra_3587_){
_start:
{
uint8_t v_await_boxed_3588_; uint64_t v_extra_boxed_3589_; uint64_t v_res_3590_; lean_object* v_r_3591_; 
v_await_boxed_3588_ = lean_unbox(v_await_3586_);
v_extra_boxed_3589_ = lean_unbox_uint64(v_extra_3587_);
lean_dec_ref(v_extra_3587_);
v_res_3590_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags(v_00_u03b1_3584_, v_inst_3585_, v_await_boxed_3588_, v_extra_boxed_3589_);
lean_dec_ref(v_inst_3585_);
v_r_3591_ = lean_box_uint64(v_res_3590_);
return v_r_3591_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___redArg(lean_object* v_f_3593_, lean_object* v_args_3594_, lean_object* v_inst_3595_, lean_object* v_this_3596_){
_start:
{
lean_object* v___x_3598_; lean_object* v___x_3599_; uint8_t v___x_3600_; uint64_t v___x_3601_; uint64_t v___x_3602_; lean_object* v___x_3603_; 
v___x_3598_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___x_3599_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3599_, 0, v_f_3593_);
lean_ctor_set(v___x_3599_, 1, v___x_3598_);
v___x_3600_ = 0;
v___x_3601_ = 0ULL;
v___x_3602_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_3595_, v___x_3600_, v___x_3601_);
v___x_3603_ = l_Lasm_JS_Value_invokeRaw(v___x_3599_, v_this_3596_, v_args_3594_, v___x_3602_);
if (lean_obj_tag(v___x_3603_) == 0)
{
lean_object* v_a_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; 
v_a_3604_ = lean_ctor_get(v___x_3603_, 0);
lean_inc(v_a_3604_);
lean_dec_ref_known(v___x_3603_, 1);
v___x_3605_ = ((lean_object*)(l_Lasm_JS_Value_call___redArg___closed__0));
v___x_3606_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_3595_, v___x_3605_, v_a_3604_);
lean_dec(v_a_3604_);
return v___x_3606_;
}
else
{
lean_object* v_a_3607_; lean_object* v___x_3609_; uint8_t v_isShared_3610_; uint8_t v_isSharedCheck_3614_; 
lean_dec_ref(v_inst_3595_);
v_a_3607_ = lean_ctor_get(v___x_3603_, 0);
v_isSharedCheck_3614_ = !lean_is_exclusive(v___x_3603_);
if (v_isSharedCheck_3614_ == 0)
{
v___x_3609_ = v___x_3603_;
v_isShared_3610_ = v_isSharedCheck_3614_;
goto v_resetjp_3608_;
}
else
{
lean_inc(v_a_3607_);
lean_dec(v___x_3603_);
v___x_3609_ = lean_box(0);
v_isShared_3610_ = v_isSharedCheck_3614_;
goto v_resetjp_3608_;
}
v_resetjp_3608_:
{
lean_object* v___x_3612_; 
if (v_isShared_3610_ == 0)
{
v___x_3612_ = v___x_3609_;
goto v_reusejp_3611_;
}
else
{
lean_object* v_reuseFailAlloc_3613_; 
v_reuseFailAlloc_3613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3613_, 0, v_a_3607_);
v___x_3612_ = v_reuseFailAlloc_3613_;
goto v_reusejp_3611_;
}
v_reusejp_3611_:
{
return v___x_3612_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___redArg___boxed(lean_object* v_f_3615_, lean_object* v_args_3616_, lean_object* v_inst_3617_, lean_object* v_this_3618_, lean_object* v_a_3619_){
_start:
{
lean_object* v_res_3620_; 
v_res_3620_ = l_Lasm_JS_Value_call___redArg(v_f_3615_, v_args_3616_, v_inst_3617_, v_this_3618_);
return v_res_3620_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call(lean_object* v_f_3621_, lean_object* v_args_3622_, lean_object* v_00_u03b1_3623_, lean_object* v_inst_3624_, lean_object* v_this_3625_){
_start:
{
lean_object* v___x_3627_; 
v___x_3627_ = l_Lasm_JS_Value_call___redArg(v_f_3621_, v_args_3622_, v_inst_3624_, v_this_3625_);
return v___x_3627_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___boxed(lean_object* v_f_3628_, lean_object* v_args_3629_, lean_object* v_00_u03b1_3630_, lean_object* v_inst_3631_, lean_object* v_this_3632_, lean_object* v_a_3633_){
_start:
{
lean_object* v_res_3634_; 
v_res_3634_ = l_Lasm_JS_Value_call(v_f_3628_, v_args_3629_, v_00_u03b1_3630_, v_inst_3631_, v_this_3632_);
return v_res_3634_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___redArg___lam__0(lean_object* v_inst_3635_, lean_object* v_____do__lift_3636_){
_start:
{
lean_object* v___x_3638_; lean_object* v___x_3639_; 
v___x_3638_ = ((lean_object*)(l_Lasm_JS_Value_call___redArg___closed__0));
v___x_3639_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_3635_, v___x_3638_, v_____do__lift_3636_);
return v___x_3639_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___redArg___lam__0___boxed(lean_object* v_inst_3640_, lean_object* v_____do__lift_3641_, lean_object* v___y_3642_){
_start:
{
lean_object* v_res_3643_; 
v_res_3643_ = l_Lasm_JS_Value_callAwait___redArg___lam__0(v_inst_3640_, v_____do__lift_3641_);
lean_dec_ref(v_____do__lift_3641_);
return v_res_3643_;
}
}
static lean_object* _init_l_Lasm_JS_Value_callAwait___redArg___boxed__const__1(void){
_start:
{
uint32_t v___x_3644_; lean_object* v___x_3645_; 
v___x_3644_ = 205;
v___x_3645_ = lean_box_uint32(v___x_3644_);
return v___x_3645_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait___redArg(lean_object* v_inst_3646_, lean_object* v_f_3647_, lean_object* v_args_3648_, lean_object* v_inst_3649_, lean_object* v_this_3650_){
_start:
{
lean_object* v___f_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; uint8_t v___x_3654_; uint64_t v___x_3655_; uint64_t v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; uint8_t v___x_3661_; uint64_t v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; lean_object* v___x_3673_; 
lean_inc_ref(v_inst_3649_);
v___f_3651_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_callAwait___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3651_, 0, v_inst_3649_);
v___x_3652_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___x_3653_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3653_, 0, v_f_3647_);
lean_ctor_set(v___x_3653_, 1, v___x_3652_);
v___x_3654_ = 1;
v___x_3655_ = 0ULL;
v___x_3656_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_3649_, v___x_3654_, v___x_3655_);
v___x_3657_ = lean_box_uint64(v___x_3656_);
lean_inc_ref(v_args_3648_);
lean_inc(v_this_3650_);
lean_inc_ref(v___x_3653_);
v___x_3658_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_invokeRaw___boxed), 5, 4);
lean_closure_set(v___x_3658_, 0, v___x_3653_);
lean_closure_set(v___x_3658_, 1, v_this_3650_);
lean_closure_set(v___x_3658_, 2, v_args_3648_);
lean_closure_set(v___x_3658_, 3, v___x_3657_);
v___x_3659_ = lean_alloc_closure((void*)(l_instMonadEIO___aux__13___boxed), 6, 5);
lean_closure_set(v___x_3659_, 0, lean_box(0));
lean_closure_set(v___x_3659_, 1, lean_box(0));
lean_closure_set(v___x_3659_, 2, lean_box(0));
lean_closure_set(v___x_3659_, 3, v___x_3658_);
lean_closure_set(v___x_3659_, 4, v___f_3651_);
v___x_3660_ = ((lean_object*)(l_Lasm_JS_Value_call___redArg___closed__0));
v___x_3661_ = 0;
v___x_3662_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_3649_, v___x_3661_, v___x_3655_);
v___x_3663_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3663_, 0, v_args_3648_);
v___x_3664_ = lean_unsigned_to_nat(3u);
v___x_3665_ = lean_mk_empty_array_with_capacity(v___x_3664_);
v___x_3666_ = lean_array_push(v___x_3665_, v___x_3653_);
v___x_3667_ = lean_array_push(v___x_3666_, v_this_3650_);
v___x_3668_ = lean_array_push(v___x_3667_, v___x_3663_);
v___x_3669_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3669_, 0, v___x_3668_);
v___x_3670_ = l_Lasm_JS_Value_callAwait___redArg___boxed__const__1;
v___x_3671_ = lean_box_uint64(v___x_3662_);
v___x_3672_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___boxed), 8, 7);
lean_closure_set(v___x_3672_, 0, lean_box(0));
lean_closure_set(v___x_3672_, 1, v_inst_3649_);
lean_closure_set(v___x_3672_, 2, v___x_3660_);
lean_closure_set(v___x_3672_, 3, v___x_3670_);
lean_closure_set(v___x_3672_, 4, v___x_3671_);
lean_closure_set(v___x_3672_, 5, v___x_3669_);
lean_closure_set(v___x_3672_, 6, v___x_3652_);
v___x_3673_ = lean_apply_3(v_inst_3646_, lean_box(0), v___x_3659_, v___x_3672_);
return v___x_3673_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callAwait(lean_object* v_m_3674_, lean_object* v_inst_3675_, lean_object* v_f_3676_, lean_object* v_args_3677_, lean_object* v_00_u03b1_3678_, lean_object* v_inst_3679_, lean_object* v_this_3680_){
_start:
{
lean_object* v___x_3681_; 
v___x_3681_ = l_Lasm_JS_Value_callAwait___redArg(v_inst_3675_, v_f_3676_, v_args_3677_, v_inst_3679_, v_this_3680_);
return v___x_3681_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___redArg(lean_object* v_o_3683_, lean_object* v_name_3684_, lean_object* v_args_3685_, lean_object* v_inst_3686_){
_start:
{
lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; uint8_t v___x_3691_; uint64_t v___x_3692_; uint64_t v___x_3693_; lean_object* v___x_3694_; 
v___x_3688_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___x_3689_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3689_, 0, v_o_3683_);
lean_ctor_set(v___x_3689_, 1, v___x_3688_);
lean_inc_ref(v_name_3684_);
v___x_3690_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3690_, 0, v_name_3684_);
v___x_3691_ = 0;
v___x_3692_ = 8ULL;
v___x_3693_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_3686_, v___x_3691_, v___x_3692_);
v___x_3694_ = l_Lasm_JS_Value_invokeRaw(v___x_3689_, v___x_3690_, v_args_3685_, v___x_3693_);
if (lean_obj_tag(v___x_3694_) == 0)
{
lean_object* v_a_3695_; lean_object* v___x_3696_; lean_object* v___x_3697_; lean_object* v___x_3698_; 
v_a_3695_ = lean_ctor_get(v___x_3694_, 0);
lean_inc(v_a_3695_);
lean_dec_ref_known(v___x_3694_, 1);
v___x_3696_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___redArg___closed__0));
v___x_3697_ = lean_string_append(v___x_3696_, v_name_3684_);
lean_dec_ref(v_name_3684_);
v___x_3698_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_3686_, v___x_3697_, v_a_3695_);
lean_dec(v_a_3695_);
lean_dec_ref(v___x_3697_);
return v___x_3698_;
}
else
{
lean_object* v_a_3699_; lean_object* v___x_3701_; uint8_t v_isShared_3702_; uint8_t v_isSharedCheck_3706_; 
lean_dec_ref(v_inst_3686_);
lean_dec_ref(v_name_3684_);
v_a_3699_ = lean_ctor_get(v___x_3694_, 0);
v_isSharedCheck_3706_ = !lean_is_exclusive(v___x_3694_);
if (v_isSharedCheck_3706_ == 0)
{
v___x_3701_ = v___x_3694_;
v_isShared_3702_ = v_isSharedCheck_3706_;
goto v_resetjp_3700_;
}
else
{
lean_inc(v_a_3699_);
lean_dec(v___x_3694_);
v___x_3701_ = lean_box(0);
v_isShared_3702_ = v_isSharedCheck_3706_;
goto v_resetjp_3700_;
}
v_resetjp_3700_:
{
lean_object* v___x_3704_; 
if (v_isShared_3702_ == 0)
{
v___x_3704_ = v___x_3701_;
goto v_reusejp_3703_;
}
else
{
lean_object* v_reuseFailAlloc_3705_; 
v_reuseFailAlloc_3705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3705_, 0, v_a_3699_);
v___x_3704_ = v_reuseFailAlloc_3705_;
goto v_reusejp_3703_;
}
v_reusejp_3703_:
{
return v___x_3704_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___redArg___boxed(lean_object* v_o_3707_, lean_object* v_name_3708_, lean_object* v_args_3709_, lean_object* v_inst_3710_, lean_object* v_a_3711_){
_start:
{
lean_object* v_res_3712_; 
v_res_3712_ = l_Lasm_JS_Value_callMethod___redArg(v_o_3707_, v_name_3708_, v_args_3709_, v_inst_3710_);
return v_res_3712_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod(lean_object* v_o_3713_, lean_object* v_name_3714_, lean_object* v_args_3715_, lean_object* v_00_u03b1_3716_, lean_object* v_inst_3717_){
_start:
{
lean_object* v___x_3719_; 
v___x_3719_ = l_Lasm_JS_Value_callMethod___redArg(v_o_3713_, v_name_3714_, v_args_3715_, v_inst_3717_);
return v___x_3719_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___boxed(lean_object* v_o_3720_, lean_object* v_name_3721_, lean_object* v_args_3722_, lean_object* v_00_u03b1_3723_, lean_object* v_inst_3724_, lean_object* v_a_3725_){
_start:
{
lean_object* v_res_3726_; 
v_res_3726_ = l_Lasm_JS_Value_callMethod(v_o_3720_, v_name_3721_, v_args_3722_, v_00_u03b1_3723_, v_inst_3724_);
return v_res_3726_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___redArg___lam__0(lean_object* v_name_3727_, lean_object* v_inst_3728_, lean_object* v_____do__lift_3729_){
_start:
{
lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; 
v___x_3731_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___redArg___closed__0));
v___x_3732_ = lean_string_append(v___x_3731_, v_name_3727_);
v___x_3733_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_3728_, v___x_3732_, v_____do__lift_3729_);
lean_dec_ref(v___x_3732_);
return v___x_3733_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___redArg___lam__0___boxed(lean_object* v_name_3734_, lean_object* v_inst_3735_, lean_object* v_____do__lift_3736_, lean_object* v___y_3737_){
_start:
{
lean_object* v_res_3738_; 
v_res_3738_ = l_Lasm_JS_Value_callMethodAwait___redArg___lam__0(v_name_3734_, v_inst_3735_, v_____do__lift_3736_);
lean_dec_ref(v_____do__lift_3736_);
lean_dec_ref(v_name_3734_);
return v_res_3738_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___redArg(lean_object* v_inst_3739_, lean_object* v_o_3740_, lean_object* v_name_3741_, lean_object* v_args_3742_, lean_object* v_inst_3743_){
_start:
{
lean_object* v___f_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; lean_object* v___x_3747_; uint8_t v___x_3748_; uint64_t v___x_3749_; uint64_t v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; uint8_t v___x_3756_; uint64_t v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; lean_object* v___x_3768_; 
lean_inc_ref(v_inst_3743_);
lean_inc_ref_n(v_name_3741_, 2);
v___f_3744_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_callMethodAwait___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_3744_, 0, v_name_3741_);
lean_closure_set(v___f_3744_, 1, v_inst_3743_);
v___x_3745_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___x_3746_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3746_, 0, v_o_3740_);
lean_ctor_set(v___x_3746_, 1, v___x_3745_);
v___x_3747_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3747_, 0, v_name_3741_);
v___x_3748_ = 1;
v___x_3749_ = 8ULL;
v___x_3750_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_3743_, v___x_3748_, v___x_3749_);
v___x_3751_ = lean_box_uint64(v___x_3750_);
lean_inc_ref(v_args_3742_);
lean_inc_ref(v___x_3747_);
lean_inc_ref(v___x_3746_);
v___x_3752_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_invokeRaw___boxed), 5, 4);
lean_closure_set(v___x_3752_, 0, v___x_3746_);
lean_closure_set(v___x_3752_, 1, v___x_3747_);
lean_closure_set(v___x_3752_, 2, v_args_3742_);
lean_closure_set(v___x_3752_, 3, v___x_3751_);
v___x_3753_ = lean_alloc_closure((void*)(l_instMonadEIO___aux__13___boxed), 6, 5);
lean_closure_set(v___x_3753_, 0, lean_box(0));
lean_closure_set(v___x_3753_, 1, lean_box(0));
lean_closure_set(v___x_3753_, 2, lean_box(0));
lean_closure_set(v___x_3753_, 3, v___x_3752_);
lean_closure_set(v___x_3753_, 4, v___f_3744_);
v___x_3754_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___redArg___closed__0));
v___x_3755_ = lean_string_append(v___x_3754_, v_name_3741_);
lean_dec_ref(v_name_3741_);
v___x_3756_ = 0;
v___x_3757_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_3743_, v___x_3756_, v___x_3749_);
v___x_3758_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3758_, 0, v_args_3742_);
v___x_3759_ = lean_unsigned_to_nat(3u);
v___x_3760_ = lean_mk_empty_array_with_capacity(v___x_3759_);
v___x_3761_ = lean_array_push(v___x_3760_, v___x_3746_);
v___x_3762_ = lean_array_push(v___x_3761_, v___x_3747_);
v___x_3763_ = lean_array_push(v___x_3762_, v___x_3758_);
v___x_3764_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3764_, 0, v___x_3763_);
v___x_3765_ = l_Lasm_JS_Value_callAwait___redArg___boxed__const__1;
v___x_3766_ = lean_box_uint64(v___x_3757_);
v___x_3767_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___boxed), 8, 7);
lean_closure_set(v___x_3767_, 0, lean_box(0));
lean_closure_set(v___x_3767_, 1, v_inst_3743_);
lean_closure_set(v___x_3767_, 2, v___x_3755_);
lean_closure_set(v___x_3767_, 3, v___x_3765_);
lean_closure_set(v___x_3767_, 4, v___x_3766_);
lean_closure_set(v___x_3767_, 5, v___x_3764_);
lean_closure_set(v___x_3767_, 6, v___x_3745_);
v___x_3768_ = lean_apply_3(v_inst_3739_, lean_box(0), v___x_3753_, v___x_3767_);
return v___x_3768_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait(lean_object* v_m_3769_, lean_object* v_inst_3770_, lean_object* v_o_3771_, lean_object* v_name_3772_, lean_object* v_args_3773_, lean_object* v_00_u03b1_3774_, lean_object* v_inst_3775_){
_start:
{
lean_object* v___x_3776_; 
v___x_3776_ = l_Lasm_JS_Value_callMethodAwait___redArg(v_inst_3770_, v_o_3771_, v_name_3772_, v_args_3773_, v_inst_3775_);
return v___x_3776_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___redArg(lean_object* v_c_3778_, lean_object* v_args_3779_, lean_object* v_inst_3780_){
_start:
{
lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; uint8_t v___x_3785_; uint64_t v___x_3786_; uint64_t v___x_3787_; lean_object* v___x_3788_; 
v___x_3782_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___x_3783_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3783_, 0, v_c_3778_);
lean_ctor_set(v___x_3783_, 1, v___x_3782_);
v___x_3784_ = lean_box(0);
v___x_3785_ = 0;
v___x_3786_ = 4ULL;
v___x_3787_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___redArg(v_inst_3780_, v___x_3785_, v___x_3786_);
v___x_3788_ = l_Lasm_JS_Value_invokeRaw(v___x_3783_, v___x_3784_, v_args_3779_, v___x_3787_);
if (lean_obj_tag(v___x_3788_) == 0)
{
lean_object* v_a_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; 
v_a_3789_ = lean_ctor_get(v___x_3788_, 0);
lean_inc(v_a_3789_);
lean_dec_ref_known(v___x_3788_, 1);
v___x_3790_ = ((lean_object*)(l_Lasm_JS_Value_new___redArg___closed__0));
v___x_3791_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___redArg(v_inst_3780_, v___x_3790_, v_a_3789_);
lean_dec(v_a_3789_);
return v___x_3791_;
}
else
{
lean_object* v_a_3792_; lean_object* v___x_3794_; uint8_t v_isShared_3795_; uint8_t v_isSharedCheck_3799_; 
lean_dec_ref(v_inst_3780_);
v_a_3792_ = lean_ctor_get(v___x_3788_, 0);
v_isSharedCheck_3799_ = !lean_is_exclusive(v___x_3788_);
if (v_isSharedCheck_3799_ == 0)
{
v___x_3794_ = v___x_3788_;
v_isShared_3795_ = v_isSharedCheck_3799_;
goto v_resetjp_3793_;
}
else
{
lean_inc(v_a_3792_);
lean_dec(v___x_3788_);
v___x_3794_ = lean_box(0);
v_isShared_3795_ = v_isSharedCheck_3799_;
goto v_resetjp_3793_;
}
v_resetjp_3793_:
{
lean_object* v___x_3797_; 
if (v_isShared_3795_ == 0)
{
v___x_3797_ = v___x_3794_;
goto v_reusejp_3796_;
}
else
{
lean_object* v_reuseFailAlloc_3798_; 
v_reuseFailAlloc_3798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3798_, 0, v_a_3792_);
v___x_3797_ = v_reuseFailAlloc_3798_;
goto v_reusejp_3796_;
}
v_reusejp_3796_:
{
return v___x_3797_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___redArg___boxed(lean_object* v_c_3800_, lean_object* v_args_3801_, lean_object* v_inst_3802_, lean_object* v_a_3803_){
_start:
{
lean_object* v_res_3804_; 
v_res_3804_ = l_Lasm_JS_Value_new___redArg(v_c_3800_, v_args_3801_, v_inst_3802_);
return v_res_3804_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new(lean_object* v_c_3805_, lean_object* v_args_3806_, lean_object* v_00_u03b1_3807_, lean_object* v_inst_3808_){
_start:
{
lean_object* v___x_3810_; 
v___x_3810_ = l_Lasm_JS_Value_new___redArg(v_c_3805_, v_args_3806_, v_inst_3808_);
return v___x_3810_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_new___boxed(lean_object* v_c_3811_, lean_object* v_args_3812_, lean_object* v_00_u03b1_3813_, lean_object* v_inst_3814_, lean_object* v_a_3815_){
_start:
{
lean_object* v_res_3816_; 
v_res_3816_ = l_Lasm_JS_Value_new(v_c_3811_, v_args_3812_, v_00_u03b1_3813_, v_inst_3814_);
return v_res_3816_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_toTask___redArg___lam__0(lean_object* v_inst_3818_, lean_object* v_a_3819_){
_start:
{
lean_object* v_a_3822_; 
if (lean_obj_tag(v_a_3819_) == 0)
{
lean_object* v_a_3824_; lean_object* v___x_3825_; 
lean_dec_ref(v_inst_3818_);
v_a_3824_ = lean_ctor_get(v_a_3819_, 0);
lean_inc(v_a_3824_);
lean_dec_ref_known(v_a_3819_, 1);
v___x_3825_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3825_, 0, v_a_3824_);
v_a_3822_ = v___x_3825_;
goto v___jp_3821_;
}
else
{
lean_object* v_a_3826_; lean_object* v___x_3828_; uint8_t v_isShared_3829_; uint8_t v_isSharedCheck_3840_; 
v_a_3826_ = lean_ctor_get(v_a_3819_, 0);
v_isSharedCheck_3840_ = !lean_is_exclusive(v_a_3819_);
if (v_isSharedCheck_3840_ == 0)
{
v___x_3828_ = v_a_3819_;
v_isShared_3829_ = v_isSharedCheck_3840_;
goto v_resetjp_3827_;
}
else
{
lean_inc(v_a_3826_);
lean_dec(v_a_3819_);
v___x_3828_ = lean_box(0);
v_isShared_3829_ = v_isSharedCheck_3840_;
goto v_resetjp_3827_;
}
v_resetjp_3827_:
{
lean_object* v___x_3830_; 
v___x_3830_ = l_Lasm_JS_Wire_decode(v_a_3826_);
lean_dec(v_a_3826_);
if (lean_obj_tag(v___x_3830_) == 0)
{
lean_object* v_a_3831_; lean_object* v___x_3832_; lean_object* v___x_3833_; 
v_a_3831_ = lean_ctor_get(v___x_3830_, 0);
lean_inc(v_a_3831_);
lean_dec_ref_known(v___x_3830_, 1);
v___x_3832_ = ((lean_object*)(l_Lasm_JS_Value_toTask___redArg___lam__0___closed__0));
v___x_3833_ = l_Lasm_JS_decodeAs___redArg(v_inst_3818_, v___x_3832_, v_a_3831_);
if (lean_obj_tag(v___x_3833_) == 0)
{
lean_object* v_a_3834_; lean_object* v___x_3836_; 
v_a_3834_ = lean_ctor_get(v___x_3833_, 0);
lean_inc(v_a_3834_);
lean_dec_ref_known(v___x_3833_, 1);
if (v_isShared_3829_ == 0)
{
lean_ctor_set(v___x_3828_, 0, v_a_3834_);
v___x_3836_ = v___x_3828_;
goto v_reusejp_3835_;
}
else
{
lean_object* v_reuseFailAlloc_3837_; 
v_reuseFailAlloc_3837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3837_, 0, v_a_3834_);
v___x_3836_ = v_reuseFailAlloc_3837_;
goto v_reusejp_3835_;
}
v_reusejp_3835_:
{
return v___x_3836_;
}
}
else
{
lean_object* v_a_3838_; 
lean_del_object(v___x_3828_);
v_a_3838_ = lean_ctor_get(v___x_3833_, 0);
lean_inc(v_a_3838_);
lean_dec_ref_known(v___x_3833_, 1);
v_a_3822_ = v_a_3838_;
goto v___jp_3821_;
}
}
else
{
lean_object* v_a_3839_; 
lean_del_object(v___x_3828_);
lean_dec_ref(v_inst_3818_);
v_a_3839_ = lean_ctor_get(v___x_3830_, 0);
lean_inc(v_a_3839_);
lean_dec_ref_known(v___x_3830_, 1);
v_a_3822_ = v_a_3839_;
goto v___jp_3821_;
}
}
}
v___jp_3821_:
{
lean_object* v___x_3823_; 
v___x_3823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3823_, 0, v_a_3822_);
return v___x_3823_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_toTask___redArg___lam__0___boxed(lean_object* v_inst_3841_, lean_object* v_a_3842_, lean_object* v___y_3843_){
_start:
{
lean_object* v_res_3844_; 
v_res_3844_ = l_Lasm_JS_Value_toTask___redArg___lam__0(v_inst_3841_, v_a_3842_);
return v_res_3844_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_toTask___redArg(lean_object* v_v_3845_, lean_object* v_inst_3846_){
_start:
{
lean_object* v___f_3848_; lean_object* v___x_3849_; 
v___f_3848_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_toTask___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3848_, 0, v_inst_3846_);
v___x_3849_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3849_) == 0)
{
lean_object* v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; lean_object* v___x_3854_; 
lean_dec_ref_known(v___x_3849_, 1);
v___x_3850_ = lean_io_promise_new();
v___x_3851_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___x_3852_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3852_, 0, v_v_3845_);
lean_ctor_set(v___x_3852_, 1, v___x_3851_);
lean_inc_ref(v___x_3852_);
v___x_3853_ = l_Lasm_JS_Wire_encode(v___x_3852_);
v___x_3854_ = lasm_js_await_into(v___x_3850_, v___x_3853_, v___x_3852_);
lean_dec_ref_known(v___x_3852_, 2);
lean_dec_ref(v___x_3853_);
if (lean_obj_tag(v___x_3854_) == 0)
{
lean_object* v___x_3856_; uint8_t v_isShared_3857_; uint8_t v_isSharedCheck_3865_; 
v_isSharedCheck_3865_ = !lean_is_exclusive(v___x_3854_);
if (v_isSharedCheck_3865_ == 0)
{
lean_object* v_unused_3866_; 
v_unused_3866_ = lean_ctor_get(v___x_3854_, 0);
lean_dec(v_unused_3866_);
v___x_3856_ = v___x_3854_;
v_isShared_3857_ = v_isSharedCheck_3865_;
goto v_resetjp_3855_;
}
else
{
lean_dec(v___x_3854_);
v___x_3856_ = lean_box(0);
v_isShared_3857_ = v_isSharedCheck_3865_;
goto v_resetjp_3855_;
}
v_resetjp_3855_:
{
lean_object* v___x_3858_; lean_object* v___x_3859_; uint8_t v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3863_; 
v___x_3858_ = l_IO_Promise_result_x21___redArg(v___x_3850_);
lean_dec(v___x_3850_);
v___x_3859_ = lean_unsigned_to_nat(0u);
v___x_3860_ = 0;
v___x_3861_ = lean_io_map_task(v___f_3848_, v___x_3858_, v___x_3859_, v___x_3860_);
if (v_isShared_3857_ == 0)
{
lean_ctor_set(v___x_3856_, 0, v___x_3861_);
v___x_3863_ = v___x_3856_;
goto v_reusejp_3862_;
}
else
{
lean_object* v_reuseFailAlloc_3864_; 
v_reuseFailAlloc_3864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3864_, 0, v___x_3861_);
v___x_3863_ = v_reuseFailAlloc_3864_;
goto v_reusejp_3862_;
}
v_reusejp_3862_:
{
return v___x_3863_;
}
}
}
else
{
lean_object* v_a_3867_; lean_object* v___x_3869_; uint8_t v_isShared_3870_; uint8_t v_isSharedCheck_3874_; 
lean_dec(v___x_3850_);
lean_dec_ref(v___f_3848_);
v_a_3867_ = lean_ctor_get(v___x_3854_, 0);
v_isSharedCheck_3874_ = !lean_is_exclusive(v___x_3854_);
if (v_isSharedCheck_3874_ == 0)
{
v___x_3869_ = v___x_3854_;
v_isShared_3870_ = v_isSharedCheck_3874_;
goto v_resetjp_3868_;
}
else
{
lean_inc(v_a_3867_);
lean_dec(v___x_3854_);
v___x_3869_ = lean_box(0);
v_isShared_3870_ = v_isSharedCheck_3874_;
goto v_resetjp_3868_;
}
v_resetjp_3868_:
{
lean_object* v___x_3872_; 
if (v_isShared_3870_ == 0)
{
v___x_3872_ = v___x_3869_;
goto v_reusejp_3871_;
}
else
{
lean_object* v_reuseFailAlloc_3873_; 
v_reuseFailAlloc_3873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3873_, 0, v_a_3867_);
v___x_3872_ = v_reuseFailAlloc_3873_;
goto v_reusejp_3871_;
}
v_reusejp_3871_:
{
return v___x_3872_;
}
}
}
}
else
{
lean_object* v_a_3875_; lean_object* v___x_3877_; uint8_t v_isShared_3878_; uint8_t v_isSharedCheck_3882_; 
lean_dec_ref(v___f_3848_);
lean_dec(v_v_3845_);
v_a_3875_ = lean_ctor_get(v___x_3849_, 0);
v_isSharedCheck_3882_ = !lean_is_exclusive(v___x_3849_);
if (v_isSharedCheck_3882_ == 0)
{
v___x_3877_ = v___x_3849_;
v_isShared_3878_ = v_isSharedCheck_3882_;
goto v_resetjp_3876_;
}
else
{
lean_inc(v_a_3875_);
lean_dec(v___x_3849_);
v___x_3877_ = lean_box(0);
v_isShared_3878_ = v_isSharedCheck_3882_;
goto v_resetjp_3876_;
}
v_resetjp_3876_:
{
lean_object* v___x_3880_; 
if (v_isShared_3878_ == 0)
{
v___x_3880_ = v___x_3877_;
goto v_reusejp_3879_;
}
else
{
lean_object* v_reuseFailAlloc_3881_; 
v_reuseFailAlloc_3881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3881_, 0, v_a_3875_);
v___x_3880_ = v_reuseFailAlloc_3881_;
goto v_reusejp_3879_;
}
v_reusejp_3879_:
{
return v___x_3880_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_toTask___redArg___boxed(lean_object* v_v_3883_, lean_object* v_inst_3884_, lean_object* v_a_3885_){
_start:
{
lean_object* v_res_3886_; 
v_res_3886_ = l_Lasm_JS_Value_toTask___redArg(v_v_3883_, v_inst_3884_);
return v_res_3886_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_toTask(lean_object* v_v_3887_, lean_object* v_00_u03b1_3888_, lean_object* v_inst_3889_){
_start:
{
lean_object* v___x_3891_; 
v___x_3891_ = l_Lasm_JS_Value_toTask___redArg(v_v_3887_, v_inst_3889_);
return v___x_3891_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_toTask___boxed(lean_object* v_v_3892_, lean_object* v_00_u03b1_3893_, lean_object* v_inst_3894_, lean_object* v_a_3895_){
_start:
{
lean_object* v_res_3896_; 
v_res_3896_ = l_Lasm_JS_Value_toTask(v_v_3892_, v_00_u03b1_3893_, v_inst_3894_);
return v_res_3896_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__0(){
_start:
{
lean_object* v_val_3899_; lean_object* v___x_3901_; 
v___x_3901_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3901_) == 0)
{
lean_object* v_a_3902_; lean_object* v___x_3904_; uint8_t v_isShared_3905_; uint8_t v_isSharedCheck_3909_; 
v_a_3902_ = lean_ctor_get(v___x_3901_, 0);
v_isSharedCheck_3909_ = !lean_is_exclusive(v___x_3901_);
if (v_isSharedCheck_3909_ == 0)
{
v___x_3904_ = v___x_3901_;
v_isShared_3905_ = v_isSharedCheck_3909_;
goto v_resetjp_3903_;
}
else
{
lean_inc(v_a_3902_);
lean_dec(v___x_3901_);
v___x_3904_ = lean_box(0);
v_isShared_3905_ = v_isSharedCheck_3909_;
goto v_resetjp_3903_;
}
v_resetjp_3903_:
{
lean_object* v___x_3907_; 
if (v_isShared_3905_ == 0)
{
lean_ctor_set_tag(v___x_3904_, 1);
v___x_3907_ = v___x_3904_;
goto v_reusejp_3906_;
}
else
{
lean_object* v_reuseFailAlloc_3908_; 
v_reuseFailAlloc_3908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3908_, 0, v_a_3902_);
v___x_3907_ = v_reuseFailAlloc_3908_;
goto v_reusejp_3906_;
}
v_reusejp_3906_:
{
v_val_3899_ = v___x_3907_;
goto v___jp_3898_;
}
}
}
else
{
lean_object* v_a_3910_; lean_object* v___x_3912_; uint8_t v_isShared_3913_; uint8_t v_isSharedCheck_3917_; 
v_a_3910_ = lean_ctor_get(v___x_3901_, 0);
v_isSharedCheck_3917_ = !lean_is_exclusive(v___x_3901_);
if (v_isSharedCheck_3917_ == 0)
{
v___x_3912_ = v___x_3901_;
v_isShared_3913_ = v_isSharedCheck_3917_;
goto v_resetjp_3911_;
}
else
{
lean_inc(v_a_3910_);
lean_dec(v___x_3901_);
v___x_3912_ = lean_box(0);
v_isShared_3913_ = v_isSharedCheck_3917_;
goto v_resetjp_3911_;
}
v_resetjp_3911_:
{
lean_object* v___x_3915_; 
if (v_isShared_3913_ == 0)
{
lean_ctor_set_tag(v___x_3912_, 0);
v___x_3915_ = v___x_3912_;
goto v_reusejp_3914_;
}
else
{
lean_object* v_reuseFailAlloc_3916_; 
v_reuseFailAlloc_3916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3916_, 0, v_a_3910_);
v___x_3915_ = v_reuseFailAlloc_3916_;
goto v_reusejp_3914_;
}
v_reusejp_3914_:
{
v_val_3899_ = v___x_3915_;
goto v___jp_3898_;
}
}
}
v___jp_3898_:
{
lean_object* v___x_3900_; 
v___x_3900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3900_, 0, v_val_3899_);
return v___x_3900_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__0___boxed(lean_object* v___y_3918_){
_start:
{
lean_object* v_res_3919_; 
v_res_3919_ = l_Lasm_JS_Value_await___redArg___lam__0();
return v_res_3919_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__1(lean_object* v_inst_3920_, lean_object* v_x_3921_){
_start:
{
lean_object* v_val_3924_; 
if (lean_obj_tag(v_x_3921_) == 0)
{
lean_object* v_a_3926_; lean_object* v___x_3928_; uint8_t v_isShared_3929_; uint8_t v_isSharedCheck_3934_; 
lean_dec_ref(v_inst_3920_);
v_a_3926_ = lean_ctor_get(v_x_3921_, 0);
v_isSharedCheck_3934_ = !lean_is_exclusive(v_x_3921_);
if (v_isSharedCheck_3934_ == 0)
{
v___x_3928_ = v_x_3921_;
v_isShared_3929_ = v_isSharedCheck_3934_;
goto v_resetjp_3927_;
}
else
{
lean_inc(v_a_3926_);
lean_dec(v_x_3921_);
v___x_3928_ = lean_box(0);
v_isShared_3929_ = v_isSharedCheck_3934_;
goto v_resetjp_3927_;
}
v_resetjp_3927_:
{
lean_object* v___x_3931_; 
if (v_isShared_3929_ == 0)
{
v___x_3931_ = v___x_3928_;
goto v_reusejp_3930_;
}
else
{
lean_object* v_reuseFailAlloc_3933_; 
v_reuseFailAlloc_3933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3933_, 0, v_a_3926_);
v___x_3931_ = v_reuseFailAlloc_3933_;
goto v_reusejp_3930_;
}
v_reusejp_3930_:
{
lean_object* v___x_3932_; 
v___x_3932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3932_, 0, v___x_3931_);
return v___x_3932_;
}
}
}
else
{
lean_object* v_a_3935_; lean_object* v___x_3937_; uint8_t v_isShared_3938_; uint8_t v_isSharedCheck_3949_; 
v_a_3935_ = lean_ctor_get(v_x_3921_, 0);
v_isSharedCheck_3949_ = !lean_is_exclusive(v_x_3921_);
if (v_isSharedCheck_3949_ == 0)
{
v___x_3937_ = v_x_3921_;
v_isShared_3938_ = v_isSharedCheck_3949_;
goto v_resetjp_3936_;
}
else
{
lean_inc(v_a_3935_);
lean_dec(v_x_3921_);
v___x_3937_ = lean_box(0);
v_isShared_3938_ = v_isSharedCheck_3949_;
goto v_resetjp_3936_;
}
v_resetjp_3936_:
{
lean_object* v___x_3939_; lean_object* v___x_3940_; 
v___x_3939_ = ((lean_object*)(l_Lasm_JS_Value_toTask___redArg___lam__0___closed__0));
v___x_3940_ = l_Lasm_JS_decodeAs___redArg(v_inst_3920_, v___x_3939_, v_a_3935_);
if (lean_obj_tag(v___x_3940_) == 0)
{
lean_object* v_a_3941_; lean_object* v___x_3943_; 
v_a_3941_ = lean_ctor_get(v___x_3940_, 0);
lean_inc(v_a_3941_);
lean_dec_ref_known(v___x_3940_, 1);
if (v_isShared_3938_ == 0)
{
lean_ctor_set(v___x_3937_, 0, v_a_3941_);
v___x_3943_ = v___x_3937_;
goto v_reusejp_3942_;
}
else
{
lean_object* v_reuseFailAlloc_3944_; 
v_reuseFailAlloc_3944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3944_, 0, v_a_3941_);
v___x_3943_ = v_reuseFailAlloc_3944_;
goto v_reusejp_3942_;
}
v_reusejp_3942_:
{
v_val_3924_ = v___x_3943_;
goto v___jp_3923_;
}
}
else
{
lean_object* v_a_3945_; lean_object* v___x_3947_; 
v_a_3945_ = lean_ctor_get(v___x_3940_, 0);
lean_inc(v_a_3945_);
lean_dec_ref_known(v___x_3940_, 1);
if (v_isShared_3938_ == 0)
{
lean_ctor_set_tag(v___x_3937_, 0);
lean_ctor_set(v___x_3937_, 0, v_a_3945_);
v___x_3947_ = v___x_3937_;
goto v_reusejp_3946_;
}
else
{
lean_object* v_reuseFailAlloc_3948_; 
v_reuseFailAlloc_3948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3948_, 0, v_a_3945_);
v___x_3947_ = v_reuseFailAlloc_3948_;
goto v_reusejp_3946_;
}
v_reusejp_3946_:
{
v_val_3924_ = v___x_3947_;
goto v___jp_3923_;
}
}
}
}
v___jp_3923_:
{
lean_object* v___x_3925_; 
v___x_3925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3925_, 0, v_val_3924_);
return v___x_3925_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__1___boxed(lean_object* v_inst_3950_, lean_object* v_x_3951_, lean_object* v___y_3952_){
_start:
{
lean_object* v_res_3953_; 
v_res_3953_ = l_Lasm_JS_Value_await___redArg___lam__1(v_inst_3950_, v_x_3951_);
return v_res_3953_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__2(lean_object* v___f_3954_, lean_object* v_x_3955_){
_start:
{
if (lean_obj_tag(v_x_3955_) == 0)
{
lean_object* v_a_3957_; lean_object* v___x_3959_; uint8_t v_isShared_3960_; uint8_t v_isSharedCheck_3965_; 
lean_dec_ref(v___f_3954_);
v_a_3957_ = lean_ctor_get(v_x_3955_, 0);
v_isSharedCheck_3965_ = !lean_is_exclusive(v_x_3955_);
if (v_isSharedCheck_3965_ == 0)
{
v___x_3959_ = v_x_3955_;
v_isShared_3960_ = v_isSharedCheck_3965_;
goto v_resetjp_3958_;
}
else
{
lean_inc(v_a_3957_);
lean_dec(v_x_3955_);
v___x_3959_ = lean_box(0);
v_isShared_3960_ = v_isSharedCheck_3965_;
goto v_resetjp_3958_;
}
v_resetjp_3958_:
{
lean_object* v___x_3962_; 
if (v_isShared_3960_ == 0)
{
v___x_3962_ = v___x_3959_;
goto v_reusejp_3961_;
}
else
{
lean_object* v_reuseFailAlloc_3964_; 
v_reuseFailAlloc_3964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3964_, 0, v_a_3957_);
v___x_3962_ = v_reuseFailAlloc_3964_;
goto v_reusejp_3961_;
}
v_reusejp_3961_:
{
lean_object* v___x_3963_; 
v___x_3963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3963_, 0, v___x_3962_);
return v___x_3963_;
}
}
}
else
{
lean_object* v_a_3966_; lean_object* v___x_3968_; uint8_t v_isShared_3969_; uint8_t v_isSharedCheck_3985_; 
v_a_3966_ = lean_ctor_get(v_x_3955_, 0);
v_isSharedCheck_3985_ = !lean_is_exclusive(v_x_3955_);
if (v_isSharedCheck_3985_ == 0)
{
v___x_3968_ = v_x_3955_;
v_isShared_3969_ = v_isSharedCheck_3985_;
goto v_resetjp_3967_;
}
else
{
lean_inc(v_a_3966_);
lean_dec(v_x_3955_);
v___x_3968_ = lean_box(0);
v_isShared_3969_ = v_isSharedCheck_3985_;
goto v_resetjp_3967_;
}
v_resetjp_3967_:
{
lean_object* v___x_3970_; uint8_t v___x_3971_; lean_object* v_val_3973_; lean_object* v___x_3976_; 
v___x_3970_ = lean_unsigned_to_nat(0u);
v___x_3971_ = 0;
v___x_3976_ = l_Lasm_JS_Wire_decode(v_a_3966_);
lean_dec(v_a_3966_);
if (lean_obj_tag(v___x_3976_) == 0)
{
lean_object* v_a_3977_; lean_object* v___x_3979_; 
v_a_3977_ = lean_ctor_get(v___x_3976_, 0);
lean_inc(v_a_3977_);
lean_dec_ref_known(v___x_3976_, 1);
if (v_isShared_3969_ == 0)
{
lean_ctor_set(v___x_3968_, 0, v_a_3977_);
v___x_3979_ = v___x_3968_;
goto v_reusejp_3978_;
}
else
{
lean_object* v_reuseFailAlloc_3980_; 
v_reuseFailAlloc_3980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3980_, 0, v_a_3977_);
v___x_3979_ = v_reuseFailAlloc_3980_;
goto v_reusejp_3978_;
}
v_reusejp_3978_:
{
v_val_3973_ = v___x_3979_;
goto v___jp_3972_;
}
}
else
{
lean_object* v_a_3981_; lean_object* v___x_3983_; 
v_a_3981_ = lean_ctor_get(v___x_3976_, 0);
lean_inc(v_a_3981_);
lean_dec_ref_known(v___x_3976_, 1);
if (v_isShared_3969_ == 0)
{
lean_ctor_set_tag(v___x_3968_, 0);
lean_ctor_set(v___x_3968_, 0, v_a_3981_);
v___x_3983_ = v___x_3968_;
goto v_reusejp_3982_;
}
else
{
lean_object* v_reuseFailAlloc_3984_; 
v_reuseFailAlloc_3984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3984_, 0, v_a_3981_);
v___x_3983_ = v_reuseFailAlloc_3984_;
goto v_reusejp_3982_;
}
v_reusejp_3982_:
{
v_val_3973_ = v___x_3983_;
goto v___jp_3972_;
}
}
v___jp_3972_:
{
lean_object* v___x_3974_; lean_object* v___x_3975_; 
v___x_3974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3974_, 0, v_val_3973_);
v___x_3975_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3970_, v___x_3971_, v___x_3974_, v___f_3954_);
return v___x_3975_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__2___boxed(lean_object* v___f_3986_, lean_object* v_x_3987_, lean_object* v___y_3988_){
_start:
{
lean_object* v_res_3989_; 
v_res_3989_ = l_Lasm_JS_Value_await___redArg___lam__2(v___f_3986_, v_x_3987_);
return v_res_3989_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__3(lean_object* v_a_3990_, lean_object* v___f_3991_, lean_object* v_x_3992_){
_start:
{
if (lean_obj_tag(v_x_3992_) == 0)
{
lean_object* v_a_3994_; lean_object* v___x_3996_; uint8_t v_isShared_3997_; uint8_t v_isSharedCheck_4002_; 
lean_dec_ref(v___f_3991_);
v_a_3994_ = lean_ctor_get(v_x_3992_, 0);
v_isSharedCheck_4002_ = !lean_is_exclusive(v_x_3992_);
if (v_isSharedCheck_4002_ == 0)
{
v___x_3996_ = v_x_3992_;
v_isShared_3997_ = v_isSharedCheck_4002_;
goto v_resetjp_3995_;
}
else
{
lean_inc(v_a_3994_);
lean_dec(v_x_3992_);
v___x_3996_ = lean_box(0);
v_isShared_3997_ = v_isSharedCheck_4002_;
goto v_resetjp_3995_;
}
v_resetjp_3995_:
{
lean_object* v___x_3999_; 
if (v_isShared_3997_ == 0)
{
v___x_3999_ = v___x_3996_;
goto v_reusejp_3998_;
}
else
{
lean_object* v_reuseFailAlloc_4001_; 
v_reuseFailAlloc_4001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4001_, 0, v_a_3994_);
v___x_3999_ = v_reuseFailAlloc_4001_;
goto v_reusejp_3998_;
}
v_reusejp_3998_:
{
lean_object* v___x_4000_; 
v___x_4000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4000_, 0, v___x_3999_);
return v___x_4000_;
}
}
}
else
{
lean_object* v___x_4003_; uint8_t v___x_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; 
lean_dec_ref_known(v_x_3992_, 1);
v___x_4003_ = lean_unsigned_to_nat(0u);
v___x_4004_ = 0;
v___x_4005_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_3990_);
v___x_4006_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4003_, v___x_4004_, v___x_4005_, v___f_3991_);
return v___x_4006_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__3___boxed(lean_object* v_a_4007_, lean_object* v___f_4008_, lean_object* v_x_4009_, lean_object* v___y_4010_){
_start:
{
lean_object* v_res_4011_; 
v_res_4011_ = l_Lasm_JS_Value_await___redArg___lam__3(v_a_4007_, v___f_4008_, v_x_4009_);
lean_dec(v_a_4007_);
return v_res_4011_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__4(lean_object* v___f_4012_, lean_object* v_v_4013_, lean_object* v_x_4014_){
_start:
{
if (lean_obj_tag(v_x_4014_) == 0)
{
lean_object* v_a_4016_; lean_object* v___x_4018_; uint8_t v_isShared_4019_; uint8_t v_isSharedCheck_4024_; 
lean_dec(v_v_4013_);
lean_dec_ref(v___f_4012_);
v_a_4016_ = lean_ctor_get(v_x_4014_, 0);
v_isSharedCheck_4024_ = !lean_is_exclusive(v_x_4014_);
if (v_isSharedCheck_4024_ == 0)
{
v___x_4018_ = v_x_4014_;
v_isShared_4019_ = v_isSharedCheck_4024_;
goto v_resetjp_4017_;
}
else
{
lean_inc(v_a_4016_);
lean_dec(v_x_4014_);
v___x_4018_ = lean_box(0);
v_isShared_4019_ = v_isSharedCheck_4024_;
goto v_resetjp_4017_;
}
v_resetjp_4017_:
{
lean_object* v___x_4021_; 
if (v_isShared_4019_ == 0)
{
v___x_4021_ = v___x_4018_;
goto v_reusejp_4020_;
}
else
{
lean_object* v_reuseFailAlloc_4023_; 
v_reuseFailAlloc_4023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4023_, 0, v_a_4016_);
v___x_4021_ = v_reuseFailAlloc_4023_;
goto v_reusejp_4020_;
}
v_reusejp_4020_:
{
lean_object* v___x_4022_; 
v___x_4022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4022_, 0, v___x_4021_);
return v___x_4022_;
}
}
}
else
{
lean_object* v_a_4025_; lean_object* v___x_4027_; uint8_t v_isShared_4028_; uint8_t v_isSharedCheck_4048_; 
v_a_4025_ = lean_ctor_get(v_x_4014_, 0);
v_isSharedCheck_4048_ = !lean_is_exclusive(v_x_4014_);
if (v_isSharedCheck_4048_ == 0)
{
v___x_4027_ = v_x_4014_;
v_isShared_4028_ = v_isSharedCheck_4048_;
goto v_resetjp_4026_;
}
else
{
lean_inc(v_a_4025_);
lean_dec(v_x_4014_);
v___x_4027_ = lean_box(0);
v_isShared_4028_ = v_isSharedCheck_4048_;
goto v_resetjp_4026_;
}
v_resetjp_4026_:
{
lean_object* v___f_4029_; lean_object* v___x_4030_; lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; uint8_t v___x_4034_; lean_object* v_val_4036_; lean_object* v___x_4039_; 
lean_inc(v_a_4025_);
v___f_4029_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_4029_, 0, v_a_4025_);
lean_closure_set(v___f_4029_, 1, v___f_4012_);
v___x_4030_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___x_4031_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4031_, 0, v_v_4013_);
lean_ctor_set(v___x_4031_, 1, v___x_4030_);
lean_inc_ref(v___x_4031_);
v___x_4032_ = l_Lasm_JS_Wire_encode(v___x_4031_);
v___x_4033_ = lean_unsigned_to_nat(0u);
v___x_4034_ = 0;
v___x_4039_ = lasm_js_await_into(v_a_4025_, v___x_4032_, v___x_4031_);
lean_dec_ref_known(v___x_4031_, 2);
lean_dec_ref(v___x_4032_);
lean_dec(v_a_4025_);
if (lean_obj_tag(v___x_4039_) == 0)
{
lean_object* v_a_4040_; lean_object* v___x_4042_; 
v_a_4040_ = lean_ctor_get(v___x_4039_, 0);
lean_inc(v_a_4040_);
lean_dec_ref_known(v___x_4039_, 1);
if (v_isShared_4028_ == 0)
{
lean_ctor_set(v___x_4027_, 0, v_a_4040_);
v___x_4042_ = v___x_4027_;
goto v_reusejp_4041_;
}
else
{
lean_object* v_reuseFailAlloc_4043_; 
v_reuseFailAlloc_4043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4043_, 0, v_a_4040_);
v___x_4042_ = v_reuseFailAlloc_4043_;
goto v_reusejp_4041_;
}
v_reusejp_4041_:
{
v_val_4036_ = v___x_4042_;
goto v___jp_4035_;
}
}
else
{
lean_object* v_a_4044_; lean_object* v___x_4046_; 
v_a_4044_ = lean_ctor_get(v___x_4039_, 0);
lean_inc(v_a_4044_);
lean_dec_ref_known(v___x_4039_, 1);
if (v_isShared_4028_ == 0)
{
lean_ctor_set_tag(v___x_4027_, 0);
lean_ctor_set(v___x_4027_, 0, v_a_4044_);
v___x_4046_ = v___x_4027_;
goto v_reusejp_4045_;
}
else
{
lean_object* v_reuseFailAlloc_4047_; 
v_reuseFailAlloc_4047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4047_, 0, v_a_4044_);
v___x_4046_ = v_reuseFailAlloc_4047_;
goto v_reusejp_4045_;
}
v_reusejp_4045_:
{
v_val_4036_ = v___x_4046_;
goto v___jp_4035_;
}
}
v___jp_4035_:
{
lean_object* v___x_4037_; lean_object* v___x_4038_; 
v___x_4037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4037_, 0, v_val_4036_);
v___x_4038_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4033_, v___x_4034_, v___x_4037_, v___f_4029_);
return v___x_4038_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__4___boxed(lean_object* v___f_4049_, lean_object* v_v_4050_, lean_object* v_x_4051_, lean_object* v___y_4052_){
_start:
{
lean_object* v_res_4053_; 
v_res_4053_ = l_Lasm_JS_Value_await___redArg___lam__4(v___f_4049_, v_v_4050_, v_x_4051_);
return v_res_4053_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__5(lean_object* v___f_4054_, lean_object* v_____r_4055_){
_start:
{
lean_object* v___x_4057_; uint8_t v___x_4058_; lean_object* v___x_4059_; lean_object* v___x_4060_; lean_object* v___x_4061_; lean_object* v___x_4062_; 
v___x_4057_ = lean_unsigned_to_nat(0u);
v___x_4058_ = 0;
v___x_4059_ = lean_io_promise_new();
v___x_4060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4060_, 0, v___x_4059_);
v___x_4061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4061_, 0, v___x_4060_);
v___x_4062_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4057_, v___x_4058_, v___x_4061_, v___f_4054_);
return v___x_4062_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__5___boxed(lean_object* v___f_4063_, lean_object* v_____r_4064_, lean_object* v___y_4065_){
_start:
{
lean_object* v_res_4066_; 
v_res_4066_ = l_Lasm_JS_Value_await___redArg___lam__5(v___f_4063_, v_____r_4064_);
return v_res_4066_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__6(lean_object* v___x_4067_, lean_object* v_____do__lift_4068_){
_start:
{
lean_object* v___x_4070_; lean_object* v___x_4071_; 
v___x_4070_ = lean_io_wait(v_____do__lift_4068_);
v___x_4071_ = l_IO_ofExcept___redArg(v___x_4067_, v___x_4070_);
return v___x_4071_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg___lam__6___boxed(lean_object* v___x_4072_, lean_object* v_____do__lift_4073_, lean_object* v___y_4074_){
_start:
{
lean_object* v_res_4075_; 
v_res_4075_ = l_Lasm_JS_Value_await___redArg___lam__6(v___x_4072_, v_____do__lift_4073_);
return v_res_4075_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await___redArg(lean_object* v_inst_4080_, lean_object* v_v_4081_, lean_object* v_inst_4082_){
_start:
{
lean_object* v___f_4083_; lean_object* v___f_4084_; lean_object* v___f_4085_; lean_object* v___f_4086_; lean_object* v___f_4087_; lean_object* v___f_4088_; lean_object* v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; 
v___f_4083_ = ((lean_object*)(l_Lasm_JS_Value_await___redArg___closed__0));
lean_inc_ref(v_inst_4082_);
v___f_4084_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4084_, 0, v_inst_4082_);
v___f_4085_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4085_, 0, v___f_4084_);
lean_inc(v_v_4081_);
v___f_4086_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___redArg___lam__4___boxed), 4, 2);
lean_closure_set(v___f_4086_, 0, v___f_4085_);
lean_closure_set(v___f_4086_, 1, v_v_4081_);
v___f_4087_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_await___redArg___lam__5___boxed), 3, 1);
lean_closure_set(v___f_4087_, 0, v___f_4086_);
v___f_4088_ = ((lean_object*)(l_Lasm_JS_Value_await___redArg___closed__2));
v___x_4089_ = lean_alloc_closure((void*)(l_Lasm_JS_Value_toTask___boxed), 4, 3);
lean_closure_set(v___x_4089_, 0, v_v_4081_);
lean_closure_set(v___x_4089_, 1, lean_box(0));
lean_closure_set(v___x_4089_, 2, v_inst_4082_);
v___x_4090_ = lean_alloc_closure((void*)(l_instMonadEIO___aux__13___boxed), 6, 5);
lean_closure_set(v___x_4090_, 0, lean_box(0));
lean_closure_set(v___x_4090_, 1, lean_box(0));
lean_closure_set(v___x_4090_, 2, lean_box(0));
lean_closure_set(v___x_4090_, 3, v___x_4089_);
lean_closure_set(v___x_4090_, 4, v___f_4088_);
v___x_4091_ = lean_alloc_closure((void*)(l_Std_Async_EAsync_bind___boxed), 6, 5);
lean_closure_set(v___x_4091_, 0, lean_box(0));
lean_closure_set(v___x_4091_, 1, lean_box(0));
lean_closure_set(v___x_4091_, 2, lean_box(0));
lean_closure_set(v___x_4091_, 3, v___f_4083_);
lean_closure_set(v___x_4091_, 4, v___f_4087_);
v___x_4092_ = lean_apply_3(v_inst_4080_, lean_box(0), v___x_4090_, v___x_4091_);
return v___x_4092_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_await(lean_object* v_m_4093_, lean_object* v_inst_4094_, lean_object* v_v_4095_, lean_object* v_00_u03b1_4096_, lean_object* v_inst_4097_){
_start:
{
lean_object* v___x_4098_; 
v___x_4098_ = l_Lasm_JS_Value_await___redArg(v_inst_4094_, v_v_4095_, v_inst_4097_);
return v___x_4098_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1___redArg(uint32_t v_a_4099_, lean_object* v_b_4100_, lean_object* v_x_4101_){
_start:
{
if (lean_obj_tag(v_x_4101_) == 0)
{
lean_dec(v_b_4100_);
return v_x_4101_;
}
else
{
lean_object* v_key_4102_; lean_object* v_value_4103_; lean_object* v_tail_4104_; lean_object* v___x_4106_; uint8_t v_isShared_4107_; uint8_t v_isSharedCheck_4118_; 
v_key_4102_ = lean_ctor_get(v_x_4101_, 0);
v_value_4103_ = lean_ctor_get(v_x_4101_, 1);
v_tail_4104_ = lean_ctor_get(v_x_4101_, 2);
v_isSharedCheck_4118_ = !lean_is_exclusive(v_x_4101_);
if (v_isSharedCheck_4118_ == 0)
{
v___x_4106_ = v_x_4101_;
v_isShared_4107_ = v_isSharedCheck_4118_;
goto v_resetjp_4105_;
}
else
{
lean_inc(v_tail_4104_);
lean_inc(v_value_4103_);
lean_inc(v_key_4102_);
lean_dec(v_x_4101_);
v___x_4106_ = lean_box(0);
v_isShared_4107_ = v_isSharedCheck_4118_;
goto v_resetjp_4105_;
}
v_resetjp_4105_:
{
uint32_t v___x_4108_; uint8_t v___x_4109_; 
v___x_4108_ = lean_unbox_uint32(v_key_4102_);
v___x_4109_ = lean_uint32_dec_eq(v___x_4108_, v_a_4099_);
if (v___x_4109_ == 0)
{
lean_object* v___x_4110_; lean_object* v___x_4112_; 
v___x_4110_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1___redArg(v_a_4099_, v_b_4100_, v_tail_4104_);
if (v_isShared_4107_ == 0)
{
lean_ctor_set(v___x_4106_, 2, v___x_4110_);
v___x_4112_ = v___x_4106_;
goto v_reusejp_4111_;
}
else
{
lean_object* v_reuseFailAlloc_4113_; 
v_reuseFailAlloc_4113_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4113_, 0, v_key_4102_);
lean_ctor_set(v_reuseFailAlloc_4113_, 1, v_value_4103_);
lean_ctor_set(v_reuseFailAlloc_4113_, 2, v___x_4110_);
v___x_4112_ = v_reuseFailAlloc_4113_;
goto v_reusejp_4111_;
}
v_reusejp_4111_:
{
return v___x_4112_;
}
}
else
{
lean_object* v___x_4114_; lean_object* v___x_4116_; 
lean_dec(v_value_4103_);
lean_dec(v_key_4102_);
v___x_4114_ = lean_box_uint32(v_a_4099_);
if (v_isShared_4107_ == 0)
{
lean_ctor_set(v___x_4106_, 1, v_b_4100_);
lean_ctor_set(v___x_4106_, 0, v___x_4114_);
v___x_4116_ = v___x_4106_;
goto v_reusejp_4115_;
}
else
{
lean_object* v_reuseFailAlloc_4117_; 
v_reuseFailAlloc_4117_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4117_, 0, v___x_4114_);
lean_ctor_set(v_reuseFailAlloc_4117_, 1, v_b_4100_);
lean_ctor_set(v_reuseFailAlloc_4117_, 2, v_tail_4104_);
v___x_4116_ = v_reuseFailAlloc_4117_;
goto v_reusejp_4115_;
}
v_reusejp_4115_:
{
return v___x_4116_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1___redArg___boxed(lean_object* v_a_4119_, lean_object* v_b_4120_, lean_object* v_x_4121_){
_start:
{
uint32_t v_a_boxed_4122_; lean_object* v_res_4123_; 
v_a_boxed_4122_ = lean_unbox_uint32(v_a_4119_);
lean_dec(v_a_4119_);
v_res_4123_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1___redArg(v_a_boxed_4122_, v_b_4120_, v_x_4121_);
return v_res_4123_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_4124_, lean_object* v_x_4125_){
_start:
{
if (lean_obj_tag(v_x_4125_) == 0)
{
return v_x_4124_;
}
else
{
lean_object* v_key_4126_; lean_object* v_value_4127_; lean_object* v_tail_4128_; lean_object* v___x_4130_; uint8_t v_isShared_4131_; uint8_t v_isSharedCheck_4152_; 
v_key_4126_ = lean_ctor_get(v_x_4125_, 0);
v_value_4127_ = lean_ctor_get(v_x_4125_, 1);
v_tail_4128_ = lean_ctor_get(v_x_4125_, 2);
v_isSharedCheck_4152_ = !lean_is_exclusive(v_x_4125_);
if (v_isSharedCheck_4152_ == 0)
{
v___x_4130_ = v_x_4125_;
v_isShared_4131_ = v_isSharedCheck_4152_;
goto v_resetjp_4129_;
}
else
{
lean_inc(v_tail_4128_);
lean_inc(v_value_4127_);
lean_inc(v_key_4126_);
lean_dec(v_x_4125_);
v___x_4130_ = lean_box(0);
v_isShared_4131_ = v_isSharedCheck_4152_;
goto v_resetjp_4129_;
}
v_resetjp_4129_:
{
lean_object* v___x_4132_; uint32_t v___x_4133_; uint64_t v___x_4134_; uint64_t v___x_4135_; uint64_t v___x_4136_; uint64_t v_fold_4137_; uint64_t v___x_4138_; uint64_t v___x_4139_; uint64_t v___x_4140_; size_t v___x_4141_; size_t v___x_4142_; size_t v___x_4143_; size_t v___x_4144_; size_t v___x_4145_; lean_object* v___x_4146_; lean_object* v___x_4148_; 
v___x_4132_ = lean_array_get_size(v_x_4124_);
v___x_4133_ = lean_unbox_uint32(v_key_4126_);
v___x_4134_ = lean_uint32_to_uint64(v___x_4133_);
v___x_4135_ = 32ULL;
v___x_4136_ = lean_uint64_shift_right(v___x_4134_, v___x_4135_);
v_fold_4137_ = lean_uint64_xor(v___x_4134_, v___x_4136_);
v___x_4138_ = 16ULL;
v___x_4139_ = lean_uint64_shift_right(v_fold_4137_, v___x_4138_);
v___x_4140_ = lean_uint64_xor(v_fold_4137_, v___x_4139_);
v___x_4141_ = lean_uint64_to_usize(v___x_4140_);
v___x_4142_ = lean_usize_of_nat(v___x_4132_);
v___x_4143_ = ((size_t)1ULL);
v___x_4144_ = lean_usize_sub(v___x_4142_, v___x_4143_);
v___x_4145_ = lean_usize_land(v___x_4141_, v___x_4144_);
v___x_4146_ = lean_array_uget_borrowed(v_x_4124_, v___x_4145_);
lean_inc(v___x_4146_);
if (v_isShared_4131_ == 0)
{
lean_ctor_set(v___x_4130_, 2, v___x_4146_);
v___x_4148_ = v___x_4130_;
goto v_reusejp_4147_;
}
else
{
lean_object* v_reuseFailAlloc_4151_; 
v_reuseFailAlloc_4151_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4151_, 0, v_key_4126_);
lean_ctor_set(v_reuseFailAlloc_4151_, 1, v_value_4127_);
lean_ctor_set(v_reuseFailAlloc_4151_, 2, v___x_4146_);
v___x_4148_ = v_reuseFailAlloc_4151_;
goto v_reusejp_4147_;
}
v_reusejp_4147_:
{
lean_object* v___x_4149_; 
v___x_4149_ = lean_array_uset(v_x_4124_, v___x_4145_, v___x_4148_);
v_x_4124_ = v___x_4149_;
v_x_4125_ = v_tail_4128_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1___redArg(lean_object* v_i_4153_, lean_object* v_source_4154_, lean_object* v_target_4155_){
_start:
{
lean_object* v___x_4156_; uint8_t v___x_4157_; 
v___x_4156_ = lean_array_get_size(v_source_4154_);
v___x_4157_ = lean_nat_dec_lt(v_i_4153_, v___x_4156_);
if (v___x_4157_ == 0)
{
lean_dec_ref(v_source_4154_);
lean_dec(v_i_4153_);
return v_target_4155_;
}
else
{
lean_object* v_es_4158_; lean_object* v___x_4159_; lean_object* v_source_4160_; lean_object* v_target_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; 
v_es_4158_ = lean_array_fget(v_source_4154_, v_i_4153_);
v___x_4159_ = lean_box(0);
v_source_4160_ = lean_array_fset(v_source_4154_, v_i_4153_, v___x_4159_);
v_target_4161_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1_spec__2___redArg(v_target_4155_, v_es_4158_);
v___x_4162_ = lean_unsigned_to_nat(1u);
v___x_4163_ = lean_nat_add(v_i_4153_, v___x_4162_);
lean_dec(v_i_4153_);
v_i_4153_ = v___x_4163_;
v_source_4154_ = v_source_4160_;
v_target_4155_ = v_target_4161_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0___redArg(lean_object* v_data_4165_){
_start:
{
lean_object* v___x_4166_; lean_object* v___x_4167_; lean_object* v_nbuckets_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; lean_object* v___x_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; 
v___x_4166_ = lean_array_get_size(v_data_4165_);
v___x_4167_ = lean_unsigned_to_nat(2u);
v_nbuckets_4168_ = lean_nat_mul(v___x_4166_, v___x_4167_);
v___x_4169_ = lean_unsigned_to_nat(0u);
v___x_4170_ = lean_box(0);
v___x_4171_ = lean_mk_array(v_nbuckets_4168_, v___x_4170_);
v___x_4172_ = lean_array_propagate_mark(v_data_4165_, v___x_4171_);
v___x_4173_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1___redArg(v___x_4169_, v_data_4165_, v___x_4172_);
return v___x_4173_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0___redArg(lean_object* v_m_4174_, uint32_t v_a_4175_, lean_object* v_b_4176_){
_start:
{
lean_object* v_size_4177_; lean_object* v_buckets_4178_; lean_object* v___x_4180_; uint8_t v_isShared_4181_; uint8_t v_isSharedCheck_4222_; 
v_size_4177_ = lean_ctor_get(v_m_4174_, 0);
v_buckets_4178_ = lean_ctor_get(v_m_4174_, 1);
v_isSharedCheck_4222_ = !lean_is_exclusive(v_m_4174_);
if (v_isSharedCheck_4222_ == 0)
{
v___x_4180_ = v_m_4174_;
v_isShared_4181_ = v_isSharedCheck_4222_;
goto v_resetjp_4179_;
}
else
{
lean_inc(v_buckets_4178_);
lean_inc(v_size_4177_);
lean_dec(v_m_4174_);
v___x_4180_ = lean_box(0);
v_isShared_4181_ = v_isSharedCheck_4222_;
goto v_resetjp_4179_;
}
v_resetjp_4179_:
{
lean_object* v___x_4182_; uint64_t v___x_4183_; uint64_t v___x_4184_; uint64_t v___x_4185_; uint64_t v_fold_4186_; uint64_t v___x_4187_; uint64_t v___x_4188_; uint64_t v___x_4189_; size_t v___x_4190_; size_t v___x_4191_; size_t v___x_4192_; size_t v___x_4193_; size_t v___x_4194_; lean_object* v_bkt_4195_; uint8_t v___x_4196_; 
v___x_4182_ = lean_array_get_size(v_buckets_4178_);
v___x_4183_ = lean_uint32_to_uint64(v_a_4175_);
v___x_4184_ = 32ULL;
v___x_4185_ = lean_uint64_shift_right(v___x_4183_, v___x_4184_);
v_fold_4186_ = lean_uint64_xor(v___x_4183_, v___x_4185_);
v___x_4187_ = 16ULL;
v___x_4188_ = lean_uint64_shift_right(v_fold_4186_, v___x_4187_);
v___x_4189_ = lean_uint64_xor(v_fold_4186_, v___x_4188_);
v___x_4190_ = lean_uint64_to_usize(v___x_4189_);
v___x_4191_ = lean_usize_of_nat(v___x_4182_);
v___x_4192_ = ((size_t)1ULL);
v___x_4193_ = lean_usize_sub(v___x_4191_, v___x_4192_);
v___x_4194_ = lean_usize_land(v___x_4190_, v___x_4193_);
v_bkt_4195_ = lean_array_uget_borrowed(v_buckets_4178_, v___x_4194_);
v___x_4196_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lasm_JS_Core_0__Lasm_JS_dispatch_spec__1_spec__2___redArg(v_a_4175_, v_bkt_4195_);
if (v___x_4196_ == 0)
{
lean_object* v___x_4197_; lean_object* v_size_x27_4198_; lean_object* v___x_4199_; lean_object* v___x_4200_; lean_object* v_buckets_x27_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; uint8_t v___x_4207_; 
v___x_4197_ = lean_unsigned_to_nat(1u);
v_size_x27_4198_ = lean_nat_add(v_size_4177_, v___x_4197_);
lean_dec(v_size_4177_);
v___x_4199_ = lean_box_uint32(v_a_4175_);
lean_inc(v_bkt_4195_);
v___x_4200_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4200_, 0, v___x_4199_);
lean_ctor_set(v___x_4200_, 1, v_b_4176_);
lean_ctor_set(v___x_4200_, 2, v_bkt_4195_);
v_buckets_x27_4201_ = lean_array_uset(v_buckets_4178_, v___x_4194_, v___x_4200_);
v___x_4202_ = lean_unsigned_to_nat(4u);
v___x_4203_ = lean_nat_mul(v_size_x27_4198_, v___x_4202_);
v___x_4204_ = lean_unsigned_to_nat(3u);
v___x_4205_ = lean_nat_div(v___x_4203_, v___x_4204_);
lean_dec(v___x_4203_);
v___x_4206_ = lean_array_get_size(v_buckets_x27_4201_);
v___x_4207_ = lean_nat_dec_le(v___x_4205_, v___x_4206_);
lean_dec(v___x_4205_);
if (v___x_4207_ == 0)
{
lean_object* v_val_4208_; lean_object* v___x_4210_; 
v_val_4208_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0___redArg(v_buckets_x27_4201_);
if (v_isShared_4181_ == 0)
{
lean_ctor_set(v___x_4180_, 1, v_val_4208_);
lean_ctor_set(v___x_4180_, 0, v_size_x27_4198_);
v___x_4210_ = v___x_4180_;
goto v_reusejp_4209_;
}
else
{
lean_object* v_reuseFailAlloc_4211_; 
v_reuseFailAlloc_4211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4211_, 0, v_size_x27_4198_);
lean_ctor_set(v_reuseFailAlloc_4211_, 1, v_val_4208_);
v___x_4210_ = v_reuseFailAlloc_4211_;
goto v_reusejp_4209_;
}
v_reusejp_4209_:
{
return v___x_4210_;
}
}
else
{
lean_object* v___x_4213_; 
if (v_isShared_4181_ == 0)
{
lean_ctor_set(v___x_4180_, 1, v_buckets_x27_4201_);
lean_ctor_set(v___x_4180_, 0, v_size_x27_4198_);
v___x_4213_ = v___x_4180_;
goto v_reusejp_4212_;
}
else
{
lean_object* v_reuseFailAlloc_4214_; 
v_reuseFailAlloc_4214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4214_, 0, v_size_x27_4198_);
lean_ctor_set(v_reuseFailAlloc_4214_, 1, v_buckets_x27_4201_);
v___x_4213_ = v_reuseFailAlloc_4214_;
goto v_reusejp_4212_;
}
v_reusejp_4212_:
{
return v___x_4213_;
}
}
}
else
{
lean_object* v___x_4215_; lean_object* v_buckets_x27_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; lean_object* v___x_4220_; 
lean_inc(v_bkt_4195_);
v___x_4215_ = lean_box(0);
v_buckets_x27_4216_ = lean_array_uset(v_buckets_4178_, v___x_4194_, v___x_4215_);
v___x_4217_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1___redArg(v_a_4175_, v_b_4176_, v_bkt_4195_);
v___x_4218_ = lean_array_uset(v_buckets_x27_4216_, v___x_4194_, v___x_4217_);
if (v_isShared_4181_ == 0)
{
lean_ctor_set(v___x_4180_, 1, v___x_4218_);
v___x_4220_ = v___x_4180_;
goto v_reusejp_4219_;
}
else
{
lean_object* v_reuseFailAlloc_4221_; 
v_reuseFailAlloc_4221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4221_, 0, v_size_4177_);
lean_ctor_set(v_reuseFailAlloc_4221_, 1, v___x_4218_);
v___x_4220_ = v_reuseFailAlloc_4221_;
goto v_reusejp_4219_;
}
v_reusejp_4219_:
{
return v___x_4220_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0___redArg___boxed(lean_object* v_m_4223_, lean_object* v_a_4224_, lean_object* v_b_4225_){
_start:
{
uint32_t v_a_boxed_4226_; lean_object* v_res_4227_; 
v_a_boxed_4226_ = lean_unbox_uint32(v_a_4224_);
lean_dec(v_a_4224_);
v_res_4227_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0___redArg(v_m_4223_, v_a_boxed_4226_, v_b_4225_);
return v_res_4227_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_register(uint8_t v_synchronous_4228_, lean_object* v_f_4229_){
_start:
{
lean_object* v___x_4231_; lean_object* v___x_4232_; uint32_t v_next_4233_; lean_object* v_asyncFns_4234_; lean_object* v_syncFns_4235_; lean_object* v___x_4237_; uint8_t v_isShared_4238_; uint8_t v_isSharedCheck_4250_; 
v___x_4231_ = l___private_Lasm_JS_Core_0__Lasm_JS_registry;
v___x_4232_ = lean_st_ref_take(v___x_4231_);
v_next_4233_ = lean_ctor_get_uint32(v___x_4232_, sizeof(void*)*2);
v_asyncFns_4234_ = lean_ctor_get(v___x_4232_, 0);
v_syncFns_4235_ = lean_ctor_get(v___x_4232_, 1);
v_isSharedCheck_4250_ = !lean_is_exclusive(v___x_4232_);
if (v_isSharedCheck_4250_ == 0)
{
v___x_4237_ = v___x_4232_;
v_isShared_4238_ = v_isSharedCheck_4250_;
goto v_resetjp_4236_;
}
else
{
lean_inc(v_syncFns_4235_);
lean_inc(v_asyncFns_4234_);
lean_dec(v___x_4232_);
v___x_4237_ = lean_box(0);
v_isShared_4238_ = v_isSharedCheck_4250_;
goto v_resetjp_4236_;
}
v_resetjp_4236_:
{
uint32_t v___x_4239_; uint32_t v___x_4240_; lean_object* v___y_4242_; 
v___x_4239_ = 1;
v___x_4240_ = lean_uint32_add(v_next_4233_, v___x_4239_);
if (v_synchronous_4228_ == 0)
{
lean_dec_ref(v_f_4229_);
v___y_4242_ = v_syncFns_4235_;
goto v___jp_4241_;
}
else
{
lean_object* v___x_4249_; 
v___x_4249_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0___redArg(v_syncFns_4235_, v_next_4233_, v_f_4229_);
v___y_4242_ = v___x_4249_;
goto v___jp_4241_;
}
v___jp_4241_:
{
lean_object* v___x_4244_; 
if (v_isShared_4238_ == 0)
{
lean_ctor_set(v___x_4237_, 1, v___y_4242_);
v___x_4244_ = v___x_4237_;
goto v_reusejp_4243_;
}
else
{
lean_object* v_reuseFailAlloc_4248_; 
v_reuseFailAlloc_4248_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v_reuseFailAlloc_4248_, 0, v_asyncFns_4234_);
lean_ctor_set(v_reuseFailAlloc_4248_, 1, v___y_4242_);
v___x_4244_ = v_reuseFailAlloc_4248_;
goto v_reusejp_4243_;
}
v_reusejp_4243_:
{
lean_object* v___x_4245_; lean_object* v___x_4246_; lean_object* v___x_4247_; 
lean_ctor_set_uint32(v___x_4244_, sizeof(void*)*2, v___x_4240_);
v___x_4245_ = lean_st_ref_put(v___x_4231_, v___x_4244_);
v___x_4246_ = lean_box_uint32(v_next_4233_);
v___x_4247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4247_, 0, v___x_4246_);
return v___x_4247_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_register___boxed(lean_object* v_synchronous_4251_, lean_object* v_f_4252_, lean_object* v_a_4253_){
_start:
{
uint8_t v_synchronous_boxed_4254_; lean_object* v_res_4255_; 
v_synchronous_boxed_4254_ = lean_unbox(v_synchronous_4251_);
v_res_4255_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_register(v_synchronous_boxed_4254_, v_f_4252_);
return v_res_4255_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0(lean_object* v_00_u03b2_4256_, lean_object* v_m_4257_, uint32_t v_a_4258_, lean_object* v_b_4259_){
_start:
{
lean_object* v___x_4260_; 
v___x_4260_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0___redArg(v_m_4257_, v_a_4258_, v_b_4259_);
return v___x_4260_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0___boxed(lean_object* v_00_u03b2_4261_, lean_object* v_m_4262_, lean_object* v_a_4263_, lean_object* v_b_4264_){
_start:
{
uint32_t v_a_boxed_4265_; lean_object* v_res_4266_; 
v_a_boxed_4265_ = lean_unbox_uint32(v_a_4263_);
lean_dec(v_a_4263_);
v_res_4266_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0(v_00_u03b2_4261_, v_m_4262_, v_a_boxed_4265_, v_b_4264_);
return v_res_4266_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0(lean_object* v_00_u03b2_4267_, lean_object* v_data_4268_){
_start:
{
lean_object* v___x_4269_; 
v___x_4269_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0___redArg(v_data_4268_);
return v___x_4269_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1(lean_object* v_00_u03b2_4270_, uint32_t v_a_4271_, lean_object* v_b_4272_, lean_object* v_x_4273_){
_start:
{
lean_object* v___x_4274_; 
v___x_4274_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1___redArg(v_a_4271_, v_b_4272_, v_x_4273_);
return v___x_4274_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1___boxed(lean_object* v_00_u03b2_4275_, lean_object* v_a_4276_, lean_object* v_b_4277_, lean_object* v_x_4278_){
_start:
{
uint32_t v_a_boxed_4279_; lean_object* v_res_4280_; 
v_a_boxed_4279_ = lean_unbox_uint32(v_a_4276_);
lean_dec(v_a_4276_);
v_res_4280_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__1(v_00_u03b2_4275_, v_a_boxed_4279_, v_b_4277_, v_x_4278_);
return v_res_4280_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_4281_, lean_object* v_i_4282_, lean_object* v_source_4283_, lean_object* v_target_4284_){
_start:
{
lean_object* v___x_4285_; 
v___x_4285_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1___redArg(v_i_4282_, v_source_4283_, v_target_4284_);
return v___x_4285_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_4286_, lean_object* v_x_4287_, lean_object* v_x_4288_){
_start:
{
lean_object* v___x_4289_; 
v___x_4289_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0_spec__0_spec__1_spec__2___redArg(v_x_4287_, v_x_4288_);
return v___x_4289_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_registerReply(lean_object* v_f_4290_){
_start:
{
lean_object* v___x_4292_; lean_object* v___x_4293_; uint32_t v_next_4294_; lean_object* v_asyncFns_4295_; lean_object* v_syncFns_4296_; lean_object* v___x_4298_; uint8_t v_isShared_4299_; uint8_t v_isSharedCheck_4309_; 
v___x_4292_ = l___private_Lasm_JS_Core_0__Lasm_JS_registry;
v___x_4293_ = lean_st_ref_take(v___x_4292_);
v_next_4294_ = lean_ctor_get_uint32(v___x_4293_, sizeof(void*)*2);
v_asyncFns_4295_ = lean_ctor_get(v___x_4293_, 0);
v_syncFns_4296_ = lean_ctor_get(v___x_4293_, 1);
v_isSharedCheck_4309_ = !lean_is_exclusive(v___x_4293_);
if (v_isSharedCheck_4309_ == 0)
{
v___x_4298_ = v___x_4293_;
v_isShared_4299_ = v_isSharedCheck_4309_;
goto v_resetjp_4297_;
}
else
{
lean_inc(v_syncFns_4296_);
lean_inc(v_asyncFns_4295_);
lean_dec(v___x_4293_);
v___x_4298_ = lean_box(0);
v_isShared_4299_ = v_isSharedCheck_4309_;
goto v_resetjp_4297_;
}
v_resetjp_4297_:
{
uint32_t v___x_4300_; uint32_t v___x_4301_; lean_object* v___x_4302_; lean_object* v___x_4304_; 
v___x_4300_ = 1;
v___x_4301_ = lean_uint32_add(v_next_4294_, v___x_4300_);
v___x_4302_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lasm_JS_Core_0__Lasm_JS_Function_register_spec__0___redArg(v_asyncFns_4295_, v_next_4294_, v_f_4290_);
if (v_isShared_4299_ == 0)
{
lean_ctor_set(v___x_4298_, 0, v___x_4302_);
v___x_4304_ = v___x_4298_;
goto v_reusejp_4303_;
}
else
{
lean_object* v_reuseFailAlloc_4308_; 
v_reuseFailAlloc_4308_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v_reuseFailAlloc_4308_, 0, v___x_4302_);
lean_ctor_set(v_reuseFailAlloc_4308_, 1, v_syncFns_4296_);
v___x_4304_ = v_reuseFailAlloc_4308_;
goto v_reusejp_4303_;
}
v_reusejp_4303_:
{
lean_object* v___x_4305_; lean_object* v___x_4306_; lean_object* v___x_4307_; 
lean_ctor_set_uint32(v___x_4304_, sizeof(void*)*2, v___x_4301_);
v___x_4305_ = lean_st_ref_put(v___x_4292_, v___x_4304_);
v___x_4306_ = lean_box_uint32(v_next_4294_);
v___x_4307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4307_, 0, v___x_4306_);
return v___x_4307_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_registerReply___boxed(lean_object* v_f_4310_, lean_object* v_a_4311_){
_start:
{
lean_object* v_res_4312_; 
v_res_4312_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_registerReply(v_f_4310_);
return v_res_4312_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn___lam__0(lean_object* v___y_4313_){
_start:
{
if (lean_obj_tag(v___y_4313_) == 0)
{
lean_object* v_a_4314_; lean_object* v___x_4316_; uint8_t v_isShared_4317_; uint8_t v_isSharedCheck_4321_; 
v_a_4314_ = lean_ctor_get(v___y_4313_, 0);
v_isSharedCheck_4321_ = !lean_is_exclusive(v___y_4313_);
if (v_isSharedCheck_4321_ == 0)
{
v___x_4316_ = v___y_4313_;
v_isShared_4317_ = v_isSharedCheck_4321_;
goto v_resetjp_4315_;
}
else
{
lean_inc(v_a_4314_);
lean_dec(v___y_4313_);
v___x_4316_ = lean_box(0);
v_isShared_4317_ = v_isSharedCheck_4321_;
goto v_resetjp_4315_;
}
v_resetjp_4315_:
{
lean_object* v___x_4319_; 
if (v_isShared_4317_ == 0)
{
v___x_4319_ = v___x_4316_;
goto v_reusejp_4318_;
}
else
{
lean_object* v_reuseFailAlloc_4320_; 
v_reuseFailAlloc_4320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4320_, 0, v_a_4314_);
v___x_4319_ = v_reuseFailAlloc_4320_;
goto v_reusejp_4318_;
}
v_reusejp_4318_:
{
return v___x_4319_;
}
}
}
else
{
lean_object* v_a_4322_; lean_object* v___x_4324_; uint8_t v_isShared_4325_; uint8_t v_isSharedCheck_4330_; 
v_a_4322_ = lean_ctor_get(v___y_4313_, 0);
v_isSharedCheck_4330_ = !lean_is_exclusive(v___y_4313_);
if (v_isSharedCheck_4330_ == 0)
{
v___x_4324_ = v___y_4313_;
v_isShared_4325_ = v_isSharedCheck_4330_;
goto v_resetjp_4323_;
}
else
{
lean_inc(v_a_4322_);
lean_dec(v___y_4313_);
v___x_4324_ = lean_box(0);
v_isShared_4325_ = v_isSharedCheck_4330_;
goto v_resetjp_4323_;
}
v_resetjp_4323_:
{
lean_object* v___x_4326_; lean_object* v___x_4328_; 
v___x_4326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4326_, 0, v_a_4322_);
if (v_isShared_4325_ == 0)
{
lean_ctor_set(v___x_4324_, 0, v___x_4326_);
v___x_4328_ = v___x_4324_;
goto v_reusejp_4327_;
}
else
{
lean_object* v_reuseFailAlloc_4329_; 
v_reuseFailAlloc_4329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4329_, 0, v___x_4326_);
v___x_4328_ = v_reuseFailAlloc_4329_;
goto v_reusejp_4327_;
}
v_reusejp_4327_:
{
return v___x_4328_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn___lam__1(lean_object* v_f_4331_, lean_object* v___f_4332_, lean_object* v_args_4333_){
_start:
{
lean_object* v___x_4335_; uint8_t v___x_4336_; lean_object* v___x_4337_; lean_object* v___y_4339_; 
v___x_4335_ = lean_unsigned_to_nat(0u);
v___x_4336_ = 0;
v___x_4337_ = lean_apply_2(v_f_4331_, v_args_4333_, lean_box(0));
if (lean_obj_tag(v___x_4337_) == 0)
{
lean_object* v_a_4341_; 
lean_dec_ref(v___f_4332_);
v_a_4341_ = lean_ctor_get(v___x_4337_, 0);
lean_inc(v_a_4341_);
lean_dec_ref_known(v___x_4337_, 1);
if (lean_obj_tag(v_a_4341_) == 0)
{
lean_object* v_a_4342_; lean_object* v___x_4344_; uint8_t v_isShared_4345_; uint8_t v_isSharedCheck_4349_; 
v_a_4342_ = lean_ctor_get(v_a_4341_, 0);
v_isSharedCheck_4349_ = !lean_is_exclusive(v_a_4341_);
if (v_isSharedCheck_4349_ == 0)
{
v___x_4344_ = v_a_4341_;
v_isShared_4345_ = v_isSharedCheck_4349_;
goto v_resetjp_4343_;
}
else
{
lean_inc(v_a_4342_);
lean_dec(v_a_4341_);
v___x_4344_ = lean_box(0);
v_isShared_4345_ = v_isSharedCheck_4349_;
goto v_resetjp_4343_;
}
v_resetjp_4343_:
{
lean_object* v___x_4347_; 
if (v_isShared_4345_ == 0)
{
v___x_4347_ = v___x_4344_;
goto v_reusejp_4346_;
}
else
{
lean_object* v_reuseFailAlloc_4348_; 
v_reuseFailAlloc_4348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4348_, 0, v_a_4342_);
v___x_4347_ = v_reuseFailAlloc_4348_;
goto v_reusejp_4346_;
}
v_reusejp_4346_:
{
v___y_4339_ = v___x_4347_;
goto v___jp_4338_;
}
}
}
else
{
lean_object* v_a_4350_; lean_object* v___x_4352_; uint8_t v_isShared_4353_; uint8_t v_isSharedCheck_4358_; 
v_a_4350_ = lean_ctor_get(v_a_4341_, 0);
v_isSharedCheck_4358_ = !lean_is_exclusive(v_a_4341_);
if (v_isSharedCheck_4358_ == 0)
{
v___x_4352_ = v_a_4341_;
v_isShared_4353_ = v_isSharedCheck_4358_;
goto v_resetjp_4351_;
}
else
{
lean_inc(v_a_4350_);
lean_dec(v_a_4341_);
v___x_4352_ = lean_box(0);
v_isShared_4353_ = v_isSharedCheck_4358_;
goto v_resetjp_4351_;
}
v_resetjp_4351_:
{
lean_object* v___x_4354_; lean_object* v___x_4356_; 
v___x_4354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4354_, 0, v_a_4350_);
if (v_isShared_4353_ == 0)
{
lean_ctor_set(v___x_4352_, 0, v___x_4354_);
v___x_4356_ = v___x_4352_;
goto v_reusejp_4355_;
}
else
{
lean_object* v_reuseFailAlloc_4357_; 
v_reuseFailAlloc_4357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4357_, 0, v___x_4354_);
v___x_4356_ = v_reuseFailAlloc_4357_;
goto v_reusejp_4355_;
}
v_reusejp_4355_:
{
v___y_4339_ = v___x_4356_;
goto v___jp_4338_;
}
}
}
}
else
{
lean_object* v_a_4359_; lean_object* v___x_4361_; uint8_t v_isShared_4362_; uint8_t v_isSharedCheck_4367_; 
v_a_4359_ = lean_ctor_get(v___x_4337_, 0);
v_isSharedCheck_4367_ = !lean_is_exclusive(v___x_4337_);
if (v_isSharedCheck_4367_ == 0)
{
v___x_4361_ = v___x_4337_;
v_isShared_4362_ = v_isSharedCheck_4367_;
goto v_resetjp_4360_;
}
else
{
lean_inc(v_a_4359_);
lean_dec(v___x_4337_);
v___x_4361_ = lean_box(0);
v_isShared_4362_ = v_isSharedCheck_4367_;
goto v_resetjp_4360_;
}
v_resetjp_4360_:
{
lean_object* v___x_4363_; lean_object* v___x_4365_; 
v___x_4363_ = lean_task_map(v___f_4332_, v_a_4359_, v___x_4335_, v___x_4336_);
if (v_isShared_4362_ == 0)
{
lean_ctor_set(v___x_4361_, 0, v___x_4363_);
v___x_4365_ = v___x_4361_;
goto v_reusejp_4364_;
}
else
{
lean_object* v_reuseFailAlloc_4366_; 
v_reuseFailAlloc_4366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4366_, 0, v___x_4363_);
v___x_4365_ = v_reuseFailAlloc_4366_;
goto v_reusejp_4364_;
}
v_reusejp_4364_:
{
return v___x_4365_;
}
}
}
v___jp_4338_:
{
lean_object* v___x_4340_; 
v___x_4340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4340_, 0, v___y_4339_);
return v___x_4340_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn___lam__1___boxed(lean_object* v_f_4368_, lean_object* v___f_4369_, lean_object* v_args_4370_, lean_object* v___y_4371_){
_start:
{
lean_object* v_res_4372_; 
v_res_4372_ = l_Lasm_JS_Function_ofFn___lam__1(v_f_4368_, v___f_4369_, v_args_4370_);
return v_res_4372_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn(lean_object* v_f_4375_){
_start:
{
lean_object* v___f_4377_; lean_object* v___f_4378_; lean_object* v___x_4379_; 
v___f_4377_ = ((lean_object*)(l_Lasm_JS_Function_ofFn___closed__0));
v___f_4378_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_4378_, 0, v_f_4375_);
lean_closure_set(v___f_4378_, 1, v___f_4377_);
v___x_4379_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_4379_) == 0)
{
lean_object* v___x_4380_; lean_object* v_a_4381_; uint32_t v___x_4382_; uint64_t v___x_4383_; lean_object* v___x_4384_; uint32_t v___x_4385_; lean_object* v___x_4386_; 
lean_dec_ref_known(v___x_4379_, 1);
v___x_4380_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_registerReply(v___f_4378_);
v_a_4381_ = lean_ctor_get(v___x_4380_, 0);
lean_inc(v_a_4381_);
lean_dec_ref(v___x_4380_);
v___x_4382_ = 210;
v___x_4383_ = 1ULL;
v___x_4384_ = l_ByteArray_empty;
v___x_4385_ = lean_unbox_uint32(v_a_4381_);
lean_dec(v_a_4381_);
v___x_4386_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_4382_, v___x_4385_, v___x_4383_, v___x_4384_);
if (lean_obj_tag(v___x_4386_) == 0)
{
lean_object* v_a_4387_; lean_object* v___x_4388_; 
v_a_4387_ = lean_ctor_get(v___x_4386_, 0);
lean_inc(v_a_4387_);
lean_dec_ref_known(v___x_4386_, 1);
v___x_4388_ = l_Lasm_JS_Wire_decode(v_a_4387_);
lean_dec(v_a_4387_);
if (lean_obj_tag(v___x_4388_) == 0)
{
lean_object* v_a_4389_; lean_object* v___x_4390_; lean_object* v___x_4391_; 
v_a_4389_ = lean_ctor_get(v___x_4388_, 0);
lean_inc(v_a_4389_);
lean_dec_ref_known(v___x_4388_, 1);
v___x_4390_ = ((lean_object*)(l_Lasm_JS_Function_ofFn___closed__1));
v___x_4391_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v___x_4390_, v_a_4389_);
return v___x_4391_;
}
else
{
lean_object* v_a_4392_; lean_object* v___x_4394_; uint8_t v_isShared_4395_; uint8_t v_isSharedCheck_4399_; 
v_a_4392_ = lean_ctor_get(v___x_4388_, 0);
v_isSharedCheck_4399_ = !lean_is_exclusive(v___x_4388_);
if (v_isSharedCheck_4399_ == 0)
{
v___x_4394_ = v___x_4388_;
v_isShared_4395_ = v_isSharedCheck_4399_;
goto v_resetjp_4393_;
}
else
{
lean_inc(v_a_4392_);
lean_dec(v___x_4388_);
v___x_4394_ = lean_box(0);
v_isShared_4395_ = v_isSharedCheck_4399_;
goto v_resetjp_4393_;
}
v_resetjp_4393_:
{
lean_object* v___x_4397_; 
if (v_isShared_4395_ == 0)
{
v___x_4397_ = v___x_4394_;
goto v_reusejp_4396_;
}
else
{
lean_object* v_reuseFailAlloc_4398_; 
v_reuseFailAlloc_4398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4398_, 0, v_a_4392_);
v___x_4397_ = v_reuseFailAlloc_4398_;
goto v_reusejp_4396_;
}
v_reusejp_4396_:
{
return v___x_4397_;
}
}
}
}
else
{
lean_object* v_a_4400_; lean_object* v___x_4402_; uint8_t v_isShared_4403_; uint8_t v_isSharedCheck_4407_; 
v_a_4400_ = lean_ctor_get(v___x_4386_, 0);
v_isSharedCheck_4407_ = !lean_is_exclusive(v___x_4386_);
if (v_isSharedCheck_4407_ == 0)
{
v___x_4402_ = v___x_4386_;
v_isShared_4403_ = v_isSharedCheck_4407_;
goto v_resetjp_4401_;
}
else
{
lean_inc(v_a_4400_);
lean_dec(v___x_4386_);
v___x_4402_ = lean_box(0);
v_isShared_4403_ = v_isSharedCheck_4407_;
goto v_resetjp_4401_;
}
v_resetjp_4401_:
{
lean_object* v___x_4405_; 
if (v_isShared_4403_ == 0)
{
v___x_4405_ = v___x_4402_;
goto v_reusejp_4404_;
}
else
{
lean_object* v_reuseFailAlloc_4406_; 
v_reuseFailAlloc_4406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4406_, 0, v_a_4400_);
v___x_4405_ = v_reuseFailAlloc_4406_;
goto v_reusejp_4404_;
}
v_reusejp_4404_:
{
return v___x_4405_;
}
}
}
}
else
{
lean_object* v_a_4408_; lean_object* v___x_4410_; uint8_t v_isShared_4411_; uint8_t v_isSharedCheck_4415_; 
lean_dec_ref(v___f_4378_);
v_a_4408_ = lean_ctor_get(v___x_4379_, 0);
v_isSharedCheck_4415_ = !lean_is_exclusive(v___x_4379_);
if (v_isSharedCheck_4415_ == 0)
{
v___x_4410_ = v___x_4379_;
v_isShared_4411_ = v_isSharedCheck_4415_;
goto v_resetjp_4409_;
}
else
{
lean_inc(v_a_4408_);
lean_dec(v___x_4379_);
v___x_4410_ = lean_box(0);
v_isShared_4411_ = v_isSharedCheck_4415_;
goto v_resetjp_4409_;
}
v_resetjp_4409_:
{
lean_object* v___x_4413_; 
if (v_isShared_4411_ == 0)
{
v___x_4413_ = v___x_4410_;
goto v_reusejp_4412_;
}
else
{
lean_object* v_reuseFailAlloc_4414_; 
v_reuseFailAlloc_4414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4414_, 0, v_a_4408_);
v___x_4413_ = v_reuseFailAlloc_4414_;
goto v_reusejp_4412_;
}
v_reusejp_4412_:
{
return v___x_4413_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn___boxed(lean_object* v_f_4416_, lean_object* v_a_4417_){
_start:
{
lean_object* v_res_4418_; 
v_res_4418_ = l_Lasm_JS_Function_ofFn(v_f_4416_);
return v_res_4418_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFnReply(lean_object* v_f_4420_){
_start:
{
lean_object* v___x_4422_; 
v___x_4422_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_4422_) == 0)
{
lean_object* v___x_4423_; lean_object* v_a_4424_; uint32_t v___x_4425_; uint64_t v___x_4426_; lean_object* v___x_4427_; uint32_t v___x_4428_; lean_object* v___x_4429_; 
lean_dec_ref_known(v___x_4422_, 1);
v___x_4423_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_registerReply(v_f_4420_);
v_a_4424_ = lean_ctor_get(v___x_4423_, 0);
lean_inc(v_a_4424_);
lean_dec_ref(v___x_4423_);
v___x_4425_ = 210;
v___x_4426_ = 1ULL;
v___x_4427_ = l_ByteArray_empty;
v___x_4428_ = lean_unbox_uint32(v_a_4424_);
lean_dec(v_a_4424_);
v___x_4429_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_4425_, v___x_4428_, v___x_4426_, v___x_4427_);
if (lean_obj_tag(v___x_4429_) == 0)
{
lean_object* v_a_4430_; lean_object* v___x_4431_; 
v_a_4430_ = lean_ctor_get(v___x_4429_, 0);
lean_inc(v_a_4430_);
lean_dec_ref_known(v___x_4429_, 1);
v___x_4431_ = l_Lasm_JS_Wire_decode(v_a_4430_);
lean_dec(v_a_4430_);
if (lean_obj_tag(v___x_4431_) == 0)
{
lean_object* v_a_4432_; lean_object* v___x_4433_; lean_object* v___x_4434_; 
v_a_4432_ = lean_ctor_get(v___x_4431_, 0);
lean_inc(v_a_4432_);
lean_dec_ref_known(v___x_4431_, 1);
v___x_4433_ = ((lean_object*)(l_Lasm_JS_Function_ofFnReply___closed__0));
v___x_4434_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v___x_4433_, v_a_4432_);
return v___x_4434_;
}
else
{
lean_object* v_a_4435_; lean_object* v___x_4437_; uint8_t v_isShared_4438_; uint8_t v_isSharedCheck_4442_; 
v_a_4435_ = lean_ctor_get(v___x_4431_, 0);
v_isSharedCheck_4442_ = !lean_is_exclusive(v___x_4431_);
if (v_isSharedCheck_4442_ == 0)
{
v___x_4437_ = v___x_4431_;
v_isShared_4438_ = v_isSharedCheck_4442_;
goto v_resetjp_4436_;
}
else
{
lean_inc(v_a_4435_);
lean_dec(v___x_4431_);
v___x_4437_ = lean_box(0);
v_isShared_4438_ = v_isSharedCheck_4442_;
goto v_resetjp_4436_;
}
v_resetjp_4436_:
{
lean_object* v___x_4440_; 
if (v_isShared_4438_ == 0)
{
v___x_4440_ = v___x_4437_;
goto v_reusejp_4439_;
}
else
{
lean_object* v_reuseFailAlloc_4441_; 
v_reuseFailAlloc_4441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4441_, 0, v_a_4435_);
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
v_a_4443_ = lean_ctor_get(v___x_4429_, 0);
v_isSharedCheck_4450_ = !lean_is_exclusive(v___x_4429_);
if (v_isSharedCheck_4450_ == 0)
{
v___x_4445_ = v___x_4429_;
v_isShared_4446_ = v_isSharedCheck_4450_;
goto v_resetjp_4444_;
}
else
{
lean_inc(v_a_4443_);
lean_dec(v___x_4429_);
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
else
{
lean_object* v_a_4451_; lean_object* v___x_4453_; uint8_t v_isShared_4454_; uint8_t v_isSharedCheck_4458_; 
lean_dec_ref(v_f_4420_);
v_a_4451_ = lean_ctor_get(v___x_4422_, 0);
v_isSharedCheck_4458_ = !lean_is_exclusive(v___x_4422_);
if (v_isSharedCheck_4458_ == 0)
{
v___x_4453_ = v___x_4422_;
v_isShared_4454_ = v_isSharedCheck_4458_;
goto v_resetjp_4452_;
}
else
{
lean_inc(v_a_4451_);
lean_dec(v___x_4422_);
v___x_4453_ = lean_box(0);
v_isShared_4454_ = v_isSharedCheck_4458_;
goto v_resetjp_4452_;
}
v_resetjp_4452_:
{
lean_object* v___x_4456_; 
if (v_isShared_4454_ == 0)
{
v___x_4456_ = v___x_4453_;
goto v_reusejp_4455_;
}
else
{
lean_object* v_reuseFailAlloc_4457_; 
v_reuseFailAlloc_4457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4457_, 0, v_a_4451_);
v___x_4456_ = v_reuseFailAlloc_4457_;
goto v_reusejp_4455_;
}
v_reusejp_4455_:
{
return v___x_4456_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFnReply___boxed(lean_object* v_f_4459_, lean_object* v_a_4460_){
_start:
{
lean_object* v_res_4461_; 
v_res_4461_ = l_Lasm_JS_Function_ofFnReply(v_f_4459_);
return v_res_4461_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object* v_f_4464_){
_start:
{
lean_object* v___x_4466_; 
v___x_4466_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_4466_) == 0)
{
lean_object* v___x_4467_; lean_object* v___x_4468_; 
lean_dec_ref_known(v___x_4466_, 1);
v___x_4467_ = ((lean_object*)(l_Lasm_JS_Function_ofSyncFn___closed__0));
v___x_4468_ = lasm_js_sync_start(v___x_4467_);
if (lean_obj_tag(v___x_4468_) == 0)
{
uint8_t v___x_4469_; lean_object* v___x_4470_; lean_object* v_a_4471_; uint32_t v___x_4472_; uint64_t v___x_4473_; lean_object* v___x_4474_; uint32_t v___x_4475_; lean_object* v___x_4476_; 
lean_dec_ref_known(v___x_4468_, 1);
v___x_4469_ = 1;
v___x_4470_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_register(v___x_4469_, v_f_4464_);
v_a_4471_ = lean_ctor_get(v___x_4470_, 0);
lean_inc(v_a_4471_);
lean_dec_ref(v___x_4470_);
v___x_4472_ = 210;
v___x_4473_ = 2ULL;
v___x_4474_ = l_ByteArray_empty;
v___x_4475_ = lean_unbox_uint32(v_a_4471_);
lean_dec(v_a_4471_);
v___x_4476_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_4472_, v___x_4475_, v___x_4473_, v___x_4474_);
if (lean_obj_tag(v___x_4476_) == 0)
{
lean_object* v_a_4477_; lean_object* v___x_4478_; 
v_a_4477_ = lean_ctor_get(v___x_4476_, 0);
lean_inc(v_a_4477_);
lean_dec_ref_known(v___x_4476_, 1);
v___x_4478_ = l_Lasm_JS_Wire_decode(v_a_4477_);
lean_dec(v_a_4477_);
if (lean_obj_tag(v___x_4478_) == 0)
{
lean_object* v_a_4479_; lean_object* v___x_4480_; lean_object* v___x_4481_; 
v_a_4479_ = lean_ctor_get(v___x_4478_, 0);
lean_inc(v_a_4479_);
lean_dec_ref_known(v___x_4478_, 1);
v___x_4480_ = ((lean_object*)(l_Lasm_JS_Function_ofSyncFn___closed__1));
v___x_4481_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v___x_4480_, v_a_4479_);
return v___x_4481_;
}
else
{
lean_object* v_a_4482_; lean_object* v___x_4484_; uint8_t v_isShared_4485_; uint8_t v_isSharedCheck_4489_; 
v_a_4482_ = lean_ctor_get(v___x_4478_, 0);
v_isSharedCheck_4489_ = !lean_is_exclusive(v___x_4478_);
if (v_isSharedCheck_4489_ == 0)
{
v___x_4484_ = v___x_4478_;
v_isShared_4485_ = v_isSharedCheck_4489_;
goto v_resetjp_4483_;
}
else
{
lean_inc(v_a_4482_);
lean_dec(v___x_4478_);
v___x_4484_ = lean_box(0);
v_isShared_4485_ = v_isSharedCheck_4489_;
goto v_resetjp_4483_;
}
v_resetjp_4483_:
{
lean_object* v___x_4487_; 
if (v_isShared_4485_ == 0)
{
v___x_4487_ = v___x_4484_;
goto v_reusejp_4486_;
}
else
{
lean_object* v_reuseFailAlloc_4488_; 
v_reuseFailAlloc_4488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4488_, 0, v_a_4482_);
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
v_a_4490_ = lean_ctor_get(v___x_4476_, 0);
v_isSharedCheck_4497_ = !lean_is_exclusive(v___x_4476_);
if (v_isSharedCheck_4497_ == 0)
{
v___x_4492_ = v___x_4476_;
v_isShared_4493_ = v_isSharedCheck_4497_;
goto v_resetjp_4491_;
}
else
{
lean_inc(v_a_4490_);
lean_dec(v___x_4476_);
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
else
{
lean_object* v_a_4498_; lean_object* v___x_4500_; uint8_t v_isShared_4501_; uint8_t v_isSharedCheck_4505_; 
lean_dec_ref(v_f_4464_);
v_a_4498_ = lean_ctor_get(v___x_4468_, 0);
v_isSharedCheck_4505_ = !lean_is_exclusive(v___x_4468_);
if (v_isSharedCheck_4505_ == 0)
{
v___x_4500_ = v___x_4468_;
v_isShared_4501_ = v_isSharedCheck_4505_;
goto v_resetjp_4499_;
}
else
{
lean_inc(v_a_4498_);
lean_dec(v___x_4468_);
v___x_4500_ = lean_box(0);
v_isShared_4501_ = v_isSharedCheck_4505_;
goto v_resetjp_4499_;
}
v_resetjp_4499_:
{
lean_object* v___x_4503_; 
if (v_isShared_4501_ == 0)
{
v___x_4503_ = v___x_4500_;
goto v_reusejp_4502_;
}
else
{
lean_object* v_reuseFailAlloc_4504_; 
v_reuseFailAlloc_4504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4504_, 0, v_a_4498_);
v___x_4503_ = v_reuseFailAlloc_4504_;
goto v_reusejp_4502_;
}
v_reusejp_4502_:
{
return v___x_4503_;
}
}
}
}
else
{
lean_object* v_a_4506_; lean_object* v___x_4508_; uint8_t v_isShared_4509_; uint8_t v_isSharedCheck_4513_; 
lean_dec_ref(v_f_4464_);
v_a_4506_ = lean_ctor_get(v___x_4466_, 0);
v_isSharedCheck_4513_ = !lean_is_exclusive(v___x_4466_);
if (v_isSharedCheck_4513_ == 0)
{
v___x_4508_ = v___x_4466_;
v_isShared_4509_ = v_isSharedCheck_4513_;
goto v_resetjp_4507_;
}
else
{
lean_inc(v_a_4506_);
lean_dec(v___x_4466_);
v___x_4508_ = lean_box(0);
v_isShared_4509_ = v_isSharedCheck_4513_;
goto v_resetjp_4507_;
}
v_resetjp_4507_:
{
lean_object* v___x_4511_; 
if (v_isShared_4509_ == 0)
{
v___x_4511_ = v___x_4508_;
goto v_reusejp_4510_;
}
else
{
lean_object* v_reuseFailAlloc_4512_; 
v_reuseFailAlloc_4512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4512_, 0, v_a_4506_);
v___x_4511_ = v_reuseFailAlloc_4512_;
goto v_reusejp_4510_;
}
v_reusejp_4510_:
{
return v___x_4511_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn___boxed(lean_object* v_f_4514_, lean_object* v_a_4515_){
_start:
{
lean_object* v_res_4516_; 
v_res_4516_ = l_Lasm_JS_Function_ofSyncFn(v_f_4514_);
return v_res_4516_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg(lean_object* v_inst_4518_, lean_object* v_args_4519_, lean_object* v_i_4520_){
_start:
{
lean_object* v___x_4522_; lean_object* v___x_4523_; lean_object* v___x_4524_; lean_object* v___x_4525_; lean_object* v___x_4526_; lean_object* v___x_4527_; uint8_t v___x_4528_; 
v___x_4522_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg___closed__0));
v___x_4523_ = lean_unsigned_to_nat(1u);
v___x_4524_ = lean_nat_add(v_i_4520_, v___x_4523_);
v___x_4525_ = l_Nat_reprFast(v___x_4524_);
v___x_4526_ = lean_string_append(v___x_4522_, v___x_4525_);
lean_dec_ref(v___x_4525_);
v___x_4527_ = lean_array_get_size(v_args_4519_);
v___x_4528_ = lean_nat_dec_lt(v_i_4520_, v___x_4527_);
if (v___x_4528_ == 0)
{
lean_object* v___x_4529_; lean_object* v___x_4530_; 
v___x_4529_ = lean_box(0);
v___x_4530_ = l_Lasm_JS_decodeAs___redArg(v_inst_4518_, v___x_4526_, v___x_4529_);
lean_dec_ref(v___x_4526_);
return v___x_4530_;
}
else
{
lean_object* v___x_4531_; lean_object* v___x_4532_; 
v___x_4531_ = lean_array_fget_borrowed(v_args_4519_, v_i_4520_);
lean_inc(v___x_4531_);
v___x_4532_ = l_Lasm_JS_decodeAs___redArg(v_inst_4518_, v___x_4526_, v___x_4531_);
lean_dec_ref(v___x_4526_);
return v___x_4532_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg___boxed(lean_object* v_inst_4533_, lean_object* v_args_4534_, lean_object* v_i_4535_, lean_object* v_a_4536_){
_start:
{
lean_object* v_res_4537_; 
v_res_4537_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg(v_inst_4533_, v_args_4534_, v_i_4535_);
lean_dec(v_i_4535_);
lean_dec_ref(v_args_4534_);
return v_res_4537_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument(lean_object* v_00_u03b1_4538_, lean_object* v_inst_4539_, lean_object* v_args_4540_, lean_object* v_i_4541_){
_start:
{
lean_object* v___x_4543_; 
v___x_4543_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg(v_inst_4539_, v_args_4540_, v_i_4541_);
return v___x_4543_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___boxed(lean_object* v_00_u03b1_4544_, lean_object* v_inst_4545_, lean_object* v_args_4546_, lean_object* v_i_4547_, lean_object* v_a_4548_){
_start:
{
lean_object* v_res_4549_; 
v_res_4549_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument(v_00_u03b1_4544_, v_inst_4545_, v_args_4546_, v_i_4547_);
lean_dec(v_i_4547_);
lean_dec_ref(v_args_4546_);
return v_res_4549_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___lam__0(lean_object* v_inst_4550_, lean_object* v_x_4551_){
_start:
{
if (lean_obj_tag(v_x_4551_) == 0)
{
lean_object* v_a_4553_; lean_object* v___x_4555_; uint8_t v_isShared_4556_; uint8_t v_isSharedCheck_4561_; 
lean_dec_ref(v_inst_4550_);
v_a_4553_ = lean_ctor_get(v_x_4551_, 0);
v_isSharedCheck_4561_ = !lean_is_exclusive(v_x_4551_);
if (v_isSharedCheck_4561_ == 0)
{
v___x_4555_ = v_x_4551_;
v_isShared_4556_ = v_isSharedCheck_4561_;
goto v_resetjp_4554_;
}
else
{
lean_inc(v_a_4553_);
lean_dec(v_x_4551_);
v___x_4555_ = lean_box(0);
v_isShared_4556_ = v_isSharedCheck_4561_;
goto v_resetjp_4554_;
}
v_resetjp_4554_:
{
lean_object* v___x_4558_; 
if (v_isShared_4556_ == 0)
{
v___x_4558_ = v___x_4555_;
goto v_reusejp_4557_;
}
else
{
lean_object* v_reuseFailAlloc_4560_; 
v_reuseFailAlloc_4560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4560_, 0, v_a_4553_);
v___x_4558_ = v_reuseFailAlloc_4560_;
goto v_reusejp_4557_;
}
v_reusejp_4557_:
{
lean_object* v___x_4559_; 
v___x_4559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4559_, 0, v___x_4558_);
return v___x_4559_;
}
}
}
else
{
lean_object* v_a_4562_; lean_object* v___x_4564_; uint8_t v_isShared_4565_; uint8_t v_isSharedCheck_4571_; 
v_a_4562_ = lean_ctor_get(v_x_4551_, 0);
v_isSharedCheck_4571_ = !lean_is_exclusive(v_x_4551_);
if (v_isSharedCheck_4571_ == 0)
{
v___x_4564_ = v_x_4551_;
v_isShared_4565_ = v_isSharedCheck_4571_;
goto v_resetjp_4563_;
}
else
{
lean_inc(v_a_4562_);
lean_dec(v_x_4551_);
v___x_4564_ = lean_box(0);
v_isShared_4565_ = v_isSharedCheck_4571_;
goto v_resetjp_4563_;
}
v_resetjp_4563_:
{
lean_object* v___x_4566_; lean_object* v___x_4568_; 
v___x_4566_ = lean_apply_1(v_inst_4550_, v_a_4562_);
if (v_isShared_4565_ == 0)
{
lean_ctor_set(v___x_4564_, 0, v___x_4566_);
v___x_4568_ = v___x_4564_;
goto v_reusejp_4567_;
}
else
{
lean_object* v_reuseFailAlloc_4570_; 
v_reuseFailAlloc_4570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4570_, 0, v___x_4566_);
v___x_4568_ = v_reuseFailAlloc_4570_;
goto v_reusejp_4567_;
}
v_reusejp_4567_:
{
lean_object* v___x_4569_; 
v___x_4569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4569_, 0, v___x_4568_);
return v___x_4569_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___lam__0___boxed(lean_object* v_inst_4572_, lean_object* v_x_4573_, lean_object* v___y_4574_){
_start:
{
lean_object* v_res_4575_; 
v_res_4575_ = l_Lasm_JS_Function_ofFn1___redArg___lam__0(v_inst_4572_, v_x_4573_);
return v_res_4575_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___lam__1(lean_object* v_f_4576_, lean_object* v___f_4577_, lean_object* v_x_4578_){
_start:
{
if (lean_obj_tag(v_x_4578_) == 0)
{
lean_object* v_a_4580_; lean_object* v___x_4582_; uint8_t v_isShared_4583_; uint8_t v_isSharedCheck_4588_; 
lean_dec_ref(v___f_4577_);
lean_dec_ref(v_f_4576_);
v_a_4580_ = lean_ctor_get(v_x_4578_, 0);
v_isSharedCheck_4588_ = !lean_is_exclusive(v_x_4578_);
if (v_isSharedCheck_4588_ == 0)
{
v___x_4582_ = v_x_4578_;
v_isShared_4583_ = v_isSharedCheck_4588_;
goto v_resetjp_4581_;
}
else
{
lean_inc(v_a_4580_);
lean_dec(v_x_4578_);
v___x_4582_ = lean_box(0);
v_isShared_4583_ = v_isSharedCheck_4588_;
goto v_resetjp_4581_;
}
v_resetjp_4581_:
{
lean_object* v___x_4585_; 
if (v_isShared_4583_ == 0)
{
v___x_4585_ = v___x_4582_;
goto v_reusejp_4584_;
}
else
{
lean_object* v_reuseFailAlloc_4587_; 
v_reuseFailAlloc_4587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4587_, 0, v_a_4580_);
v___x_4585_ = v_reuseFailAlloc_4587_;
goto v_reusejp_4584_;
}
v_reusejp_4584_:
{
lean_object* v___x_4586_; 
v___x_4586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4586_, 0, v___x_4585_);
return v___x_4586_;
}
}
}
else
{
lean_object* v_a_4589_; lean_object* v___x_4590_; uint8_t v___x_4591_; lean_object* v___x_4592_; lean_object* v___x_4593_; 
v_a_4589_ = lean_ctor_get(v_x_4578_, 0);
lean_inc(v_a_4589_);
lean_dec_ref_known(v_x_4578_, 1);
v___x_4590_ = lean_unsigned_to_nat(0u);
v___x_4591_ = 0;
v___x_4592_ = lean_apply_2(v_f_4576_, v_a_4589_, lean_box(0));
v___x_4593_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4590_, v___x_4591_, v___x_4592_, v___f_4577_);
return v___x_4593_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___lam__1___boxed(lean_object* v_f_4594_, lean_object* v___f_4595_, lean_object* v_x_4596_, lean_object* v___y_4597_){
_start:
{
lean_object* v_res_4598_; 
v_res_4598_ = l_Lasm_JS_Function_ofFn1___redArg___lam__1(v_f_4594_, v___f_4595_, v_x_4596_);
return v_res_4598_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___lam__2(lean_object* v___f_4599_, lean_object* v_inst_4600_, lean_object* v_args_4601_){
_start:
{
lean_object* v___x_4603_; uint8_t v___x_4604_; lean_object* v_val_4606_; lean_object* v___x_4609_; 
v___x_4603_ = lean_unsigned_to_nat(0u);
v___x_4604_ = 0;
v___x_4609_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg(v_inst_4600_, v_args_4601_, v___x_4603_);
if (lean_obj_tag(v___x_4609_) == 0)
{
lean_object* v_a_4610_; lean_object* v___x_4612_; uint8_t v_isShared_4613_; uint8_t v_isSharedCheck_4617_; 
v_a_4610_ = lean_ctor_get(v___x_4609_, 0);
v_isSharedCheck_4617_ = !lean_is_exclusive(v___x_4609_);
if (v_isSharedCheck_4617_ == 0)
{
v___x_4612_ = v___x_4609_;
v_isShared_4613_ = v_isSharedCheck_4617_;
goto v_resetjp_4611_;
}
else
{
lean_inc(v_a_4610_);
lean_dec(v___x_4609_);
v___x_4612_ = lean_box(0);
v_isShared_4613_ = v_isSharedCheck_4617_;
goto v_resetjp_4611_;
}
v_resetjp_4611_:
{
lean_object* v___x_4615_; 
if (v_isShared_4613_ == 0)
{
lean_ctor_set_tag(v___x_4612_, 1);
v___x_4615_ = v___x_4612_;
goto v_reusejp_4614_;
}
else
{
lean_object* v_reuseFailAlloc_4616_; 
v_reuseFailAlloc_4616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4616_, 0, v_a_4610_);
v___x_4615_ = v_reuseFailAlloc_4616_;
goto v_reusejp_4614_;
}
v_reusejp_4614_:
{
v_val_4606_ = v___x_4615_;
goto v___jp_4605_;
}
}
}
else
{
lean_object* v_a_4618_; lean_object* v___x_4620_; uint8_t v_isShared_4621_; uint8_t v_isSharedCheck_4625_; 
v_a_4618_ = lean_ctor_get(v___x_4609_, 0);
v_isSharedCheck_4625_ = !lean_is_exclusive(v___x_4609_);
if (v_isSharedCheck_4625_ == 0)
{
v___x_4620_ = v___x_4609_;
v_isShared_4621_ = v_isSharedCheck_4625_;
goto v_resetjp_4619_;
}
else
{
lean_inc(v_a_4618_);
lean_dec(v___x_4609_);
v___x_4620_ = lean_box(0);
v_isShared_4621_ = v_isSharedCheck_4625_;
goto v_resetjp_4619_;
}
v_resetjp_4619_:
{
lean_object* v___x_4623_; 
if (v_isShared_4621_ == 0)
{
lean_ctor_set_tag(v___x_4620_, 0);
v___x_4623_ = v___x_4620_;
goto v_reusejp_4622_;
}
else
{
lean_object* v_reuseFailAlloc_4624_; 
v_reuseFailAlloc_4624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4624_, 0, v_a_4618_);
v___x_4623_ = v_reuseFailAlloc_4624_;
goto v_reusejp_4622_;
}
v_reusejp_4622_:
{
v_val_4606_ = v___x_4623_;
goto v___jp_4605_;
}
}
}
v___jp_4605_:
{
lean_object* v___x_4607_; lean_object* v___x_4608_; 
v___x_4607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4607_, 0, v_val_4606_);
v___x_4608_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4603_, v___x_4604_, v___x_4607_, v___f_4599_);
return v___x_4608_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___lam__2___boxed(lean_object* v___f_4626_, lean_object* v_inst_4627_, lean_object* v_args_4628_, lean_object* v___y_4629_){
_start:
{
lean_object* v_res_4630_; 
v_res_4630_ = l_Lasm_JS_Function_ofFn1___redArg___lam__2(v___f_4626_, v_inst_4627_, v_args_4628_);
lean_dec_ref(v_args_4628_);
return v_res_4630_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg(lean_object* v_inst_4631_, lean_object* v_inst_4632_, lean_object* v_f_4633_){
_start:
{
lean_object* v___f_4635_; lean_object* v___f_4636_; lean_object* v___f_4637_; lean_object* v___x_4638_; 
v___f_4635_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn1___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4635_, 0, v_inst_4632_);
v___f_4636_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn1___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_4636_, 0, v_f_4633_);
lean_closure_set(v___f_4636_, 1, v___f_4635_);
v___f_4637_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn1___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_4637_, 0, v___f_4636_);
lean_closure_set(v___f_4637_, 1, v_inst_4631_);
v___x_4638_ = l_Lasm_JS_Function_ofFn(v___f_4637_);
return v___x_4638_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___redArg___boxed(lean_object* v_inst_4639_, lean_object* v_inst_4640_, lean_object* v_f_4641_, lean_object* v_a_4642_){
_start:
{
lean_object* v_res_4643_; 
v_res_4643_ = l_Lasm_JS_Function_ofFn1___redArg(v_inst_4639_, v_inst_4640_, v_f_4641_);
return v_res_4643_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1(lean_object* v_00_u03b1_4644_, lean_object* v_00_u03b2_4645_, lean_object* v_inst_4646_, lean_object* v_inst_4647_, lean_object* v_f_4648_){
_start:
{
lean_object* v___x_4650_; 
v___x_4650_ = l_Lasm_JS_Function_ofFn1___redArg(v_inst_4646_, v_inst_4647_, v_f_4648_);
return v___x_4650_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn1___boxed(lean_object* v_00_u03b1_4651_, lean_object* v_00_u03b2_4652_, lean_object* v_inst_4653_, lean_object* v_inst_4654_, lean_object* v_f_4655_, lean_object* v_a_4656_){
_start:
{
lean_object* v_res_4657_; 
v_res_4657_ = l_Lasm_JS_Function_ofFn1(v_00_u03b1_4651_, v_00_u03b2_4652_, v_inst_4653_, v_inst_4654_, v_f_4655_);
return v_res_4657_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___lam__1(lean_object* v_f_4658_, lean_object* v_a_4659_, lean_object* v___f_4660_, lean_object* v_x_4661_){
_start:
{
if (lean_obj_tag(v_x_4661_) == 0)
{
lean_object* v_a_4663_; lean_object* v___x_4665_; uint8_t v_isShared_4666_; uint8_t v_isSharedCheck_4671_; 
lean_dec_ref(v___f_4660_);
lean_dec(v_a_4659_);
lean_dec_ref(v_f_4658_);
v_a_4663_ = lean_ctor_get(v_x_4661_, 0);
v_isSharedCheck_4671_ = !lean_is_exclusive(v_x_4661_);
if (v_isSharedCheck_4671_ == 0)
{
v___x_4665_ = v_x_4661_;
v_isShared_4666_ = v_isSharedCheck_4671_;
goto v_resetjp_4664_;
}
else
{
lean_inc(v_a_4663_);
lean_dec(v_x_4661_);
v___x_4665_ = lean_box(0);
v_isShared_4666_ = v_isSharedCheck_4671_;
goto v_resetjp_4664_;
}
v_resetjp_4664_:
{
lean_object* v___x_4668_; 
if (v_isShared_4666_ == 0)
{
v___x_4668_ = v___x_4665_;
goto v_reusejp_4667_;
}
else
{
lean_object* v_reuseFailAlloc_4670_; 
v_reuseFailAlloc_4670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4670_, 0, v_a_4663_);
v___x_4668_ = v_reuseFailAlloc_4670_;
goto v_reusejp_4667_;
}
v_reusejp_4667_:
{
lean_object* v___x_4669_; 
v___x_4669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4669_, 0, v___x_4668_);
return v___x_4669_;
}
}
}
else
{
lean_object* v_a_4672_; lean_object* v___x_4673_; uint8_t v___x_4674_; lean_object* v___x_4675_; lean_object* v___x_4676_; 
v_a_4672_ = lean_ctor_get(v_x_4661_, 0);
lean_inc(v_a_4672_);
lean_dec_ref_known(v_x_4661_, 1);
v___x_4673_ = lean_unsigned_to_nat(0u);
v___x_4674_ = 0;
v___x_4675_ = lean_apply_3(v_f_4658_, v_a_4659_, v_a_4672_, lean_box(0));
v___x_4676_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4673_, v___x_4674_, v___x_4675_, v___f_4660_);
return v___x_4676_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___lam__1___boxed(lean_object* v_f_4677_, lean_object* v_a_4678_, lean_object* v___f_4679_, lean_object* v_x_4680_, lean_object* v___y_4681_){
_start:
{
lean_object* v_res_4682_; 
v_res_4682_ = l_Lasm_JS_Function_ofFn2___redArg___lam__1(v_f_4677_, v_a_4678_, v___f_4679_, v_x_4680_);
return v_res_4682_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___lam__0(lean_object* v_f_4683_, lean_object* v___f_4684_, lean_object* v_inst_4685_, lean_object* v_args_4686_, lean_object* v_x_4687_){
_start:
{
if (lean_obj_tag(v_x_4687_) == 0)
{
lean_object* v_a_4689_; lean_object* v___x_4691_; uint8_t v_isShared_4692_; uint8_t v_isSharedCheck_4697_; 
lean_dec_ref(v_inst_4685_);
lean_dec_ref(v___f_4684_);
lean_dec_ref(v_f_4683_);
v_a_4689_ = lean_ctor_get(v_x_4687_, 0);
v_isSharedCheck_4697_ = !lean_is_exclusive(v_x_4687_);
if (v_isSharedCheck_4697_ == 0)
{
v___x_4691_ = v_x_4687_;
v_isShared_4692_ = v_isSharedCheck_4697_;
goto v_resetjp_4690_;
}
else
{
lean_inc(v_a_4689_);
lean_dec(v_x_4687_);
v___x_4691_ = lean_box(0);
v_isShared_4692_ = v_isSharedCheck_4697_;
goto v_resetjp_4690_;
}
v_resetjp_4690_:
{
lean_object* v___x_4694_; 
if (v_isShared_4692_ == 0)
{
v___x_4694_ = v___x_4691_;
goto v_reusejp_4693_;
}
else
{
lean_object* v_reuseFailAlloc_4696_; 
v_reuseFailAlloc_4696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4696_, 0, v_a_4689_);
v___x_4694_ = v_reuseFailAlloc_4696_;
goto v_reusejp_4693_;
}
v_reusejp_4693_:
{
lean_object* v___x_4695_; 
v___x_4695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4695_, 0, v___x_4694_);
return v___x_4695_;
}
}
}
else
{
lean_object* v_a_4698_; lean_object* v___x_4700_; uint8_t v_isShared_4701_; uint8_t v_isSharedCheck_4719_; 
v_a_4698_ = lean_ctor_get(v_x_4687_, 0);
v_isSharedCheck_4719_ = !lean_is_exclusive(v_x_4687_);
if (v_isSharedCheck_4719_ == 0)
{
v___x_4700_ = v_x_4687_;
v_isShared_4701_ = v_isSharedCheck_4719_;
goto v_resetjp_4699_;
}
else
{
lean_inc(v_a_4698_);
lean_dec(v_x_4687_);
v___x_4700_ = lean_box(0);
v_isShared_4701_ = v_isSharedCheck_4719_;
goto v_resetjp_4699_;
}
v_resetjp_4699_:
{
lean_object* v___f_4702_; lean_object* v___x_4703_; lean_object* v___x_4704_; uint8_t v___x_4705_; lean_object* v_val_4707_; lean_object* v___x_4710_; 
v___f_4702_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn2___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_4702_, 0, v_f_4683_);
lean_closure_set(v___f_4702_, 1, v_a_4698_);
lean_closure_set(v___f_4702_, 2, v___f_4684_);
v___x_4703_ = lean_unsigned_to_nat(1u);
v___x_4704_ = lean_unsigned_to_nat(0u);
v___x_4705_ = 0;
v___x_4710_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg(v_inst_4685_, v_args_4686_, v___x_4703_);
if (lean_obj_tag(v___x_4710_) == 0)
{
lean_object* v_a_4711_; lean_object* v___x_4713_; 
v_a_4711_ = lean_ctor_get(v___x_4710_, 0);
lean_inc(v_a_4711_);
lean_dec_ref_known(v___x_4710_, 1);
if (v_isShared_4701_ == 0)
{
lean_ctor_set(v___x_4700_, 0, v_a_4711_);
v___x_4713_ = v___x_4700_;
goto v_reusejp_4712_;
}
else
{
lean_object* v_reuseFailAlloc_4714_; 
v_reuseFailAlloc_4714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4714_, 0, v_a_4711_);
v___x_4713_ = v_reuseFailAlloc_4714_;
goto v_reusejp_4712_;
}
v_reusejp_4712_:
{
v_val_4707_ = v___x_4713_;
goto v___jp_4706_;
}
}
else
{
lean_object* v_a_4715_; lean_object* v___x_4717_; 
v_a_4715_ = lean_ctor_get(v___x_4710_, 0);
lean_inc(v_a_4715_);
lean_dec_ref_known(v___x_4710_, 1);
if (v_isShared_4701_ == 0)
{
lean_ctor_set_tag(v___x_4700_, 0);
lean_ctor_set(v___x_4700_, 0, v_a_4715_);
v___x_4717_ = v___x_4700_;
goto v_reusejp_4716_;
}
else
{
lean_object* v_reuseFailAlloc_4718_; 
v_reuseFailAlloc_4718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4718_, 0, v_a_4715_);
v___x_4717_ = v_reuseFailAlloc_4718_;
goto v_reusejp_4716_;
}
v_reusejp_4716_:
{
v_val_4707_ = v___x_4717_;
goto v___jp_4706_;
}
}
v___jp_4706_:
{
lean_object* v___x_4708_; lean_object* v___x_4709_; 
v___x_4708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4708_, 0, v_val_4707_);
v___x_4709_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4704_, v___x_4705_, v___x_4708_, v___f_4702_);
return v___x_4709_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___lam__0___boxed(lean_object* v_f_4720_, lean_object* v___f_4721_, lean_object* v_inst_4722_, lean_object* v_args_4723_, lean_object* v_x_4724_, lean_object* v___y_4725_){
_start:
{
lean_object* v_res_4726_; 
v_res_4726_ = l_Lasm_JS_Function_ofFn2___redArg___lam__0(v_f_4720_, v___f_4721_, v_inst_4722_, v_args_4723_, v_x_4724_);
lean_dec_ref(v_args_4723_);
return v_res_4726_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___lam__2(lean_object* v_f_4727_, lean_object* v___f_4728_, lean_object* v_inst_4729_, lean_object* v_inst_4730_, lean_object* v_args_4731_){
_start:
{
lean_object* v___f_4733_; lean_object* v___x_4734_; uint8_t v___x_4735_; lean_object* v_val_4737_; lean_object* v___x_4740_; 
lean_inc_ref(v_args_4731_);
v___f_4733_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn2___redArg___lam__0___boxed), 6, 4);
lean_closure_set(v___f_4733_, 0, v_f_4727_);
lean_closure_set(v___f_4733_, 1, v___f_4728_);
lean_closure_set(v___f_4733_, 2, v_inst_4729_);
lean_closure_set(v___f_4733_, 3, v_args_4731_);
v___x_4734_ = lean_unsigned_to_nat(0u);
v___x_4735_ = 0;
v___x_4740_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg(v_inst_4730_, v_args_4731_, v___x_4734_);
lean_dec_ref(v_args_4731_);
if (lean_obj_tag(v___x_4740_) == 0)
{
lean_object* v_a_4741_; lean_object* v___x_4743_; uint8_t v_isShared_4744_; uint8_t v_isSharedCheck_4748_; 
v_a_4741_ = lean_ctor_get(v___x_4740_, 0);
v_isSharedCheck_4748_ = !lean_is_exclusive(v___x_4740_);
if (v_isSharedCheck_4748_ == 0)
{
v___x_4743_ = v___x_4740_;
v_isShared_4744_ = v_isSharedCheck_4748_;
goto v_resetjp_4742_;
}
else
{
lean_inc(v_a_4741_);
lean_dec(v___x_4740_);
v___x_4743_ = lean_box(0);
v_isShared_4744_ = v_isSharedCheck_4748_;
goto v_resetjp_4742_;
}
v_resetjp_4742_:
{
lean_object* v___x_4746_; 
if (v_isShared_4744_ == 0)
{
lean_ctor_set_tag(v___x_4743_, 1);
v___x_4746_ = v___x_4743_;
goto v_reusejp_4745_;
}
else
{
lean_object* v_reuseFailAlloc_4747_; 
v_reuseFailAlloc_4747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4747_, 0, v_a_4741_);
v___x_4746_ = v_reuseFailAlloc_4747_;
goto v_reusejp_4745_;
}
v_reusejp_4745_:
{
v_val_4737_ = v___x_4746_;
goto v___jp_4736_;
}
}
}
else
{
lean_object* v_a_4749_; lean_object* v___x_4751_; uint8_t v_isShared_4752_; uint8_t v_isSharedCheck_4756_; 
v_a_4749_ = lean_ctor_get(v___x_4740_, 0);
v_isSharedCheck_4756_ = !lean_is_exclusive(v___x_4740_);
if (v_isSharedCheck_4756_ == 0)
{
v___x_4751_ = v___x_4740_;
v_isShared_4752_ = v_isSharedCheck_4756_;
goto v_resetjp_4750_;
}
else
{
lean_inc(v_a_4749_);
lean_dec(v___x_4740_);
v___x_4751_ = lean_box(0);
v_isShared_4752_ = v_isSharedCheck_4756_;
goto v_resetjp_4750_;
}
v_resetjp_4750_:
{
lean_object* v___x_4754_; 
if (v_isShared_4752_ == 0)
{
lean_ctor_set_tag(v___x_4751_, 0);
v___x_4754_ = v___x_4751_;
goto v_reusejp_4753_;
}
else
{
lean_object* v_reuseFailAlloc_4755_; 
v_reuseFailAlloc_4755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4755_, 0, v_a_4749_);
v___x_4754_ = v_reuseFailAlloc_4755_;
goto v_reusejp_4753_;
}
v_reusejp_4753_:
{
v_val_4737_ = v___x_4754_;
goto v___jp_4736_;
}
}
}
v___jp_4736_:
{
lean_object* v___x_4738_; lean_object* v___x_4739_; 
v___x_4738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4738_, 0, v_val_4737_);
v___x_4739_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4734_, v___x_4735_, v___x_4738_, v___f_4733_);
return v___x_4739_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___lam__2___boxed(lean_object* v_f_4757_, lean_object* v___f_4758_, lean_object* v_inst_4759_, lean_object* v_inst_4760_, lean_object* v_args_4761_, lean_object* v___y_4762_){
_start:
{
lean_object* v_res_4763_; 
v_res_4763_ = l_Lasm_JS_Function_ofFn2___redArg___lam__2(v_f_4757_, v___f_4758_, v_inst_4759_, v_inst_4760_, v_args_4761_);
return v_res_4763_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg(lean_object* v_inst_4764_, lean_object* v_inst_4765_, lean_object* v_inst_4766_, lean_object* v_f_4767_){
_start:
{
lean_object* v___f_4769_; lean_object* v___f_4770_; lean_object* v___x_4771_; 
v___f_4769_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn1___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4769_, 0, v_inst_4766_);
v___f_4770_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofFn2___redArg___lam__2___boxed), 6, 4);
lean_closure_set(v___f_4770_, 0, v_f_4767_);
lean_closure_set(v___f_4770_, 1, v___f_4769_);
lean_closure_set(v___f_4770_, 2, v_inst_4765_);
lean_closure_set(v___f_4770_, 3, v_inst_4764_);
v___x_4771_ = l_Lasm_JS_Function_ofFn(v___f_4770_);
return v___x_4771_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___redArg___boxed(lean_object* v_inst_4772_, lean_object* v_inst_4773_, lean_object* v_inst_4774_, lean_object* v_f_4775_, lean_object* v_a_4776_){
_start:
{
lean_object* v_res_4777_; 
v_res_4777_ = l_Lasm_JS_Function_ofFn2___redArg(v_inst_4772_, v_inst_4773_, v_inst_4774_, v_f_4775_);
return v_res_4777_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2(lean_object* v_00_u03b1_4778_, lean_object* v_00_u03b2_4779_, lean_object* v_00_u03b3_4780_, lean_object* v_inst_4781_, lean_object* v_inst_4782_, lean_object* v_inst_4783_, lean_object* v_f_4784_){
_start:
{
lean_object* v___x_4786_; 
v___x_4786_ = l_Lasm_JS_Function_ofFn2___redArg(v_inst_4781_, v_inst_4782_, v_inst_4783_, v_f_4784_);
return v___x_4786_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofFn2___boxed(lean_object* v_00_u03b1_4787_, lean_object* v_00_u03b2_4788_, lean_object* v_00_u03b3_4789_, lean_object* v_inst_4790_, lean_object* v_inst_4791_, lean_object* v_inst_4792_, lean_object* v_f_4793_, lean_object* v_a_4794_){
_start:
{
lean_object* v_res_4795_; 
v_res_4795_ = l_Lasm_JS_Function_ofFn2(v_00_u03b1_4787_, v_00_u03b2_4788_, v_00_u03b3_4789_, v_inst_4790_, v_inst_4791_, v_inst_4792_, v_f_4793_);
return v_res_4795_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn2___redArg___lam__0(lean_object* v_inst_4796_, lean_object* v_inst_4797_, lean_object* v_f_4798_, lean_object* v_inst_4799_, lean_object* v_args_4800_){
_start:
{
lean_object* v___x_4802_; lean_object* v___x_4803_; 
v___x_4802_ = lean_unsigned_to_nat(0u);
v___x_4803_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg(v_inst_4796_, v_args_4800_, v___x_4802_);
if (lean_obj_tag(v___x_4803_) == 0)
{
lean_object* v_a_4804_; lean_object* v___x_4805_; lean_object* v___x_4806_; 
v_a_4804_ = lean_ctor_get(v___x_4803_, 0);
lean_inc(v_a_4804_);
lean_dec_ref_known(v___x_4803_, 1);
v___x_4805_ = lean_unsigned_to_nat(1u);
v___x_4806_ = l___private_Lasm_JS_Core_0__Lasm_JS_Function_argument___redArg(v_inst_4797_, v_args_4800_, v___x_4805_);
if (lean_obj_tag(v___x_4806_) == 0)
{
lean_object* v_a_4807_; lean_object* v___x_4808_; 
v_a_4807_ = lean_ctor_get(v___x_4806_, 0);
lean_inc(v_a_4807_);
lean_dec_ref_known(v___x_4806_, 1);
v___x_4808_ = lean_apply_3(v_f_4798_, v_a_4804_, v_a_4807_, lean_box(0));
if (lean_obj_tag(v___x_4808_) == 0)
{
lean_object* v_a_4809_; lean_object* v___x_4811_; uint8_t v_isShared_4812_; uint8_t v_isSharedCheck_4817_; 
v_a_4809_ = lean_ctor_get(v___x_4808_, 0);
v_isSharedCheck_4817_ = !lean_is_exclusive(v___x_4808_);
if (v_isSharedCheck_4817_ == 0)
{
v___x_4811_ = v___x_4808_;
v_isShared_4812_ = v_isSharedCheck_4817_;
goto v_resetjp_4810_;
}
else
{
lean_inc(v_a_4809_);
lean_dec(v___x_4808_);
v___x_4811_ = lean_box(0);
v_isShared_4812_ = v_isSharedCheck_4817_;
goto v_resetjp_4810_;
}
v_resetjp_4810_:
{
lean_object* v___x_4813_; lean_object* v___x_4815_; 
v___x_4813_ = lean_apply_1(v_inst_4799_, v_a_4809_);
if (v_isShared_4812_ == 0)
{
lean_ctor_set(v___x_4811_, 0, v___x_4813_);
v___x_4815_ = v___x_4811_;
goto v_reusejp_4814_;
}
else
{
lean_object* v_reuseFailAlloc_4816_; 
v_reuseFailAlloc_4816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4816_, 0, v___x_4813_);
v___x_4815_ = v_reuseFailAlloc_4816_;
goto v_reusejp_4814_;
}
v_reusejp_4814_:
{
return v___x_4815_;
}
}
}
else
{
lean_object* v_a_4818_; lean_object* v___x_4820_; uint8_t v_isShared_4821_; uint8_t v_isSharedCheck_4825_; 
lean_dec_ref(v_inst_4799_);
v_a_4818_ = lean_ctor_get(v___x_4808_, 0);
v_isSharedCheck_4825_ = !lean_is_exclusive(v___x_4808_);
if (v_isSharedCheck_4825_ == 0)
{
v___x_4820_ = v___x_4808_;
v_isShared_4821_ = v_isSharedCheck_4825_;
goto v_resetjp_4819_;
}
else
{
lean_inc(v_a_4818_);
lean_dec(v___x_4808_);
v___x_4820_ = lean_box(0);
v_isShared_4821_ = v_isSharedCheck_4825_;
goto v_resetjp_4819_;
}
v_resetjp_4819_:
{
lean_object* v___x_4823_; 
if (v_isShared_4821_ == 0)
{
v___x_4823_ = v___x_4820_;
goto v_reusejp_4822_;
}
else
{
lean_object* v_reuseFailAlloc_4824_; 
v_reuseFailAlloc_4824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4824_, 0, v_a_4818_);
v___x_4823_ = v_reuseFailAlloc_4824_;
goto v_reusejp_4822_;
}
v_reusejp_4822_:
{
return v___x_4823_;
}
}
}
}
else
{
lean_object* v_a_4826_; lean_object* v___x_4828_; uint8_t v_isShared_4829_; uint8_t v_isSharedCheck_4833_; 
lean_dec(v_a_4804_);
lean_dec_ref(v_inst_4799_);
lean_dec_ref(v_f_4798_);
v_a_4826_ = lean_ctor_get(v___x_4806_, 0);
v_isSharedCheck_4833_ = !lean_is_exclusive(v___x_4806_);
if (v_isSharedCheck_4833_ == 0)
{
v___x_4828_ = v___x_4806_;
v_isShared_4829_ = v_isSharedCheck_4833_;
goto v_resetjp_4827_;
}
else
{
lean_inc(v_a_4826_);
lean_dec(v___x_4806_);
v___x_4828_ = lean_box(0);
v_isShared_4829_ = v_isSharedCheck_4833_;
goto v_resetjp_4827_;
}
v_resetjp_4827_:
{
lean_object* v___x_4831_; 
if (v_isShared_4829_ == 0)
{
v___x_4831_ = v___x_4828_;
goto v_reusejp_4830_;
}
else
{
lean_object* v_reuseFailAlloc_4832_; 
v_reuseFailAlloc_4832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4832_, 0, v_a_4826_);
v___x_4831_ = v_reuseFailAlloc_4832_;
goto v_reusejp_4830_;
}
v_reusejp_4830_:
{
return v___x_4831_;
}
}
}
}
else
{
lean_object* v_a_4834_; lean_object* v___x_4836_; uint8_t v_isShared_4837_; uint8_t v_isSharedCheck_4841_; 
lean_dec_ref(v_inst_4799_);
lean_dec_ref(v_f_4798_);
lean_dec_ref(v_inst_4797_);
v_a_4834_ = lean_ctor_get(v___x_4803_, 0);
v_isSharedCheck_4841_ = !lean_is_exclusive(v___x_4803_);
if (v_isSharedCheck_4841_ == 0)
{
v___x_4836_ = v___x_4803_;
v_isShared_4837_ = v_isSharedCheck_4841_;
goto v_resetjp_4835_;
}
else
{
lean_inc(v_a_4834_);
lean_dec(v___x_4803_);
v___x_4836_ = lean_box(0);
v_isShared_4837_ = v_isSharedCheck_4841_;
goto v_resetjp_4835_;
}
v_resetjp_4835_:
{
lean_object* v___x_4839_; 
if (v_isShared_4837_ == 0)
{
v___x_4839_ = v___x_4836_;
goto v_reusejp_4838_;
}
else
{
lean_object* v_reuseFailAlloc_4840_; 
v_reuseFailAlloc_4840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4840_, 0, v_a_4834_);
v___x_4839_ = v_reuseFailAlloc_4840_;
goto v_reusejp_4838_;
}
v_reusejp_4838_:
{
return v___x_4839_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn2___redArg___lam__0___boxed(lean_object* v_inst_4842_, lean_object* v_inst_4843_, lean_object* v_f_4844_, lean_object* v_inst_4845_, lean_object* v_args_4846_, lean_object* v___y_4847_){
_start:
{
lean_object* v_res_4848_; 
v_res_4848_ = l_Lasm_JS_Function_ofSyncFn2___redArg___lam__0(v_inst_4842_, v_inst_4843_, v_f_4844_, v_inst_4845_, v_args_4846_);
lean_dec_ref(v_args_4846_);
return v_res_4848_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn2___redArg(lean_object* v_inst_4849_, lean_object* v_inst_4850_, lean_object* v_inst_4851_, lean_object* v_f_4852_){
_start:
{
lean_object* v___f_4854_; lean_object* v___x_4855_; 
v___f_4854_ = lean_alloc_closure((void*)(l_Lasm_JS_Function_ofSyncFn2___redArg___lam__0___boxed), 6, 4);
lean_closure_set(v___f_4854_, 0, v_inst_4849_);
lean_closure_set(v___f_4854_, 1, v_inst_4850_);
lean_closure_set(v___f_4854_, 2, v_f_4852_);
lean_closure_set(v___f_4854_, 3, v_inst_4851_);
v___x_4855_ = l_Lasm_JS_Function_ofSyncFn(v___f_4854_);
return v___x_4855_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn2___redArg___boxed(lean_object* v_inst_4856_, lean_object* v_inst_4857_, lean_object* v_inst_4858_, lean_object* v_f_4859_, lean_object* v_a_4860_){
_start:
{
lean_object* v_res_4861_; 
v_res_4861_ = l_Lasm_JS_Function_ofSyncFn2___redArg(v_inst_4856_, v_inst_4857_, v_inst_4858_, v_f_4859_);
return v_res_4861_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn2(lean_object* v_00_u03b1_4862_, lean_object* v_00_u03b2_4863_, lean_object* v_00_u03b3_4864_, lean_object* v_inst_4865_, lean_object* v_inst_4866_, lean_object* v_inst_4867_, lean_object* v_f_4868_){
_start:
{
lean_object* v___x_4870_; 
v___x_4870_ = l_Lasm_JS_Function_ofSyncFn2___redArg(v_inst_4865_, v_inst_4866_, v_inst_4867_, v_f_4868_);
return v___x_4870_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Function_ofSyncFn2___boxed(lean_object* v_00_u03b1_4871_, lean_object* v_00_u03b2_4872_, lean_object* v_00_u03b3_4873_, lean_object* v_inst_4874_, lean_object* v_inst_4875_, lean_object* v_inst_4876_, lean_object* v_f_4877_, lean_object* v_a_4878_){
_start:
{
lean_object* v_res_4879_; 
v_res_4879_ = l_Lasm_JS_Function_ofSyncFn2(v_00_u03b1_4871_, v_00_u03b2_4872_, v_00_u03b3_4873_, v_inst_4874_, v_inst_4875_, v_inst_4876_, v_f_4877_);
return v_res_4879_;
}
}
static lean_object* _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_4893_; lean_object* v___x_4894_; 
v___x_4893_ = lean_unsigned_to_nat(8u);
v___x_4894_ = lean_nat_to_int(v___x_4893_);
return v___x_4894_;
}
}
static lean_object* _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_4901_; lean_object* v___x_4902_; 
v___x_4901_ = lean_unsigned_to_nat(10u);
v___x_4902_ = lean_nat_to_int(v___x_4901_);
return v___x_4902_;
}
}
static lean_object* _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_4909_; lean_object* v___x_4910_; 
v___x_4909_ = lean_unsigned_to_nat(13u);
v___x_4910_ = lean_nat_to_int(v___x_4909_);
return v___x_4910_;
}
}
static lean_object* _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__20(void){
_start:
{
lean_object* v___x_4914_; lean_object* v___x_4915_; 
v___x_4914_ = lean_unsigned_to_nat(9u);
v___x_4915_ = lean_nat_to_int(v___x_4914_);
return v___x_4915_;
}
}
static lean_object* _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__22(void){
_start:
{
lean_object* v___x_4917_; lean_object* v___x_4918_; 
v___x_4917_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__0));
v___x_4918_ = lean_string_length(v___x_4917_);
return v___x_4918_;
}
}
static lean_object* _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__23(void){
_start:
{
lean_object* v___x_4919_; lean_object* v___x_4920_; 
v___x_4919_ = lean_obj_once(&l_Lasm_JS_instReprBinding_repr___redArg___closed__22, &l_Lasm_JS_instReprBinding_repr___redArg___closed__22_once, _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__22);
v___x_4920_ = lean_nat_to_int(v___x_4919_);
return v___x_4920_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instReprBinding_repr___redArg(lean_object* v_x_4925_){
_start:
{
lean_object* v_name_4926_; lean_object* v_module_4927_; lean_object* v_path_4928_; uint8_t v_construct_4929_; lean_object* v_arity_4930_; lean_object* v___x_4931_; lean_object* v___x_4932_; lean_object* v___x_4933_; lean_object* v___x_4934_; lean_object* v___x_4935_; lean_object* v___x_4936_; uint8_t v___x_4937_; lean_object* v___x_4938_; lean_object* v___x_4939_; lean_object* v___x_4940_; lean_object* v___x_4941_; lean_object* v___x_4942_; lean_object* v___x_4943_; lean_object* v___x_4944_; lean_object* v___x_4945_; lean_object* v___x_4946_; lean_object* v___x_4947_; lean_object* v___x_4948_; lean_object* v___x_4949_; lean_object* v___x_4950_; lean_object* v___x_4951_; lean_object* v___x_4952_; lean_object* v___x_4953_; lean_object* v___x_4954_; lean_object* v___x_4955_; lean_object* v___x_4956_; lean_object* v___x_4957_; lean_object* v___x_4958_; lean_object* v___x_4959_; lean_object* v___x_4960_; lean_object* v___x_4961_; lean_object* v___x_4962_; lean_object* v___x_4963_; lean_object* v___x_4964_; lean_object* v___x_4965_; lean_object* v___x_4966_; lean_object* v___x_4967_; lean_object* v___x_4968_; lean_object* v___x_4969_; lean_object* v___x_4970_; lean_object* v___x_4971_; lean_object* v___x_4972_; lean_object* v___x_4973_; lean_object* v___x_4974_; lean_object* v___x_4975_; lean_object* v___x_4976_; lean_object* v___x_4977_; lean_object* v___x_4978_; lean_object* v___x_4979_; lean_object* v___x_4980_; lean_object* v___x_4981_; lean_object* v___x_4982_; lean_object* v___x_4983_; lean_object* v___x_4984_; lean_object* v___x_4985_; lean_object* v___x_4986_; lean_object* v___x_4987_; lean_object* v___x_4988_; lean_object* v___x_4989_; lean_object* v___x_4990_; 
v_name_4926_ = lean_ctor_get(v_x_4925_, 0);
lean_inc_ref(v_name_4926_);
v_module_4927_ = lean_ctor_get(v_x_4925_, 1);
lean_inc_ref(v_module_4927_);
v_path_4928_ = lean_ctor_get(v_x_4925_, 2);
lean_inc_ref(v_path_4928_);
v_construct_4929_ = lean_ctor_get_uint8(v_x_4925_, sizeof(void*)*4);
v_arity_4930_ = lean_ctor_get(v_x_4925_, 3);
lean_inc(v_arity_4930_);
lean_dec_ref(v_x_4925_);
v___x_4931_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__5));
v___x_4932_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__6));
v___x_4933_ = lean_obj_once(&l_Lasm_JS_instReprBinding_repr___redArg___closed__7, &l_Lasm_JS_instReprBinding_repr___redArg___closed__7_once, _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__7);
v___x_4934_ = l_String_quote(v_name_4926_);
v___x_4935_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4935_, 0, v___x_4934_);
v___x_4936_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4936_, 0, v___x_4933_);
lean_ctor_set(v___x_4936_, 1, v___x_4935_);
v___x_4937_ = 0;
v___x_4938_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4938_, 0, v___x_4936_);
lean_ctor_set_uint8(v___x_4938_, sizeof(void*)*1, v___x_4937_);
v___x_4939_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4939_, 0, v___x_4932_);
lean_ctor_set(v___x_4939_, 1, v___x_4938_);
v___x_4940_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__9));
v___x_4941_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4941_, 0, v___x_4939_);
lean_ctor_set(v___x_4941_, 1, v___x_4940_);
v___x_4942_ = lean_box(1);
v___x_4943_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4943_, 0, v___x_4941_);
lean_ctor_set(v___x_4943_, 1, v___x_4942_);
v___x_4944_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__11));
v___x_4945_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4945_, 0, v___x_4943_);
lean_ctor_set(v___x_4945_, 1, v___x_4944_);
v___x_4946_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4946_, 0, v___x_4945_);
lean_ctor_set(v___x_4946_, 1, v___x_4931_);
v___x_4947_ = lean_obj_once(&l_Lasm_JS_instReprBinding_repr___redArg___closed__12, &l_Lasm_JS_instReprBinding_repr___redArg___closed__12_once, _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__12);
v___x_4948_ = l_String_quote(v_module_4927_);
v___x_4949_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4949_, 0, v___x_4948_);
v___x_4950_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4950_, 0, v___x_4947_);
lean_ctor_set(v___x_4950_, 1, v___x_4949_);
v___x_4951_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4951_, 0, v___x_4950_);
lean_ctor_set_uint8(v___x_4951_, sizeof(void*)*1, v___x_4937_);
v___x_4952_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4952_, 0, v___x_4946_);
lean_ctor_set(v___x_4952_, 1, v___x_4951_);
v___x_4953_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4953_, 0, v___x_4952_);
lean_ctor_set(v___x_4953_, 1, v___x_4940_);
v___x_4954_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4954_, 0, v___x_4953_);
lean_ctor_set(v___x_4954_, 1, v___x_4942_);
v___x_4955_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__14));
v___x_4956_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4956_, 0, v___x_4954_);
lean_ctor_set(v___x_4956_, 1, v___x_4955_);
v___x_4957_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4957_, 0, v___x_4956_);
lean_ctor_set(v___x_4957_, 1, v___x_4931_);
v___x_4958_ = l_String_quote(v_path_4928_);
v___x_4959_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4959_, 0, v___x_4958_);
v___x_4960_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4960_, 0, v___x_4933_);
lean_ctor_set(v___x_4960_, 1, v___x_4959_);
v___x_4961_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4961_, 0, v___x_4960_);
lean_ctor_set_uint8(v___x_4961_, sizeof(void*)*1, v___x_4937_);
v___x_4962_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4962_, 0, v___x_4957_);
lean_ctor_set(v___x_4962_, 1, v___x_4961_);
v___x_4963_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4963_, 0, v___x_4962_);
lean_ctor_set(v___x_4963_, 1, v___x_4940_);
v___x_4964_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4964_, 0, v___x_4963_);
lean_ctor_set(v___x_4964_, 1, v___x_4942_);
v___x_4965_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__16));
v___x_4966_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4966_, 0, v___x_4964_);
lean_ctor_set(v___x_4966_, 1, v___x_4965_);
v___x_4967_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4967_, 0, v___x_4966_);
lean_ctor_set(v___x_4967_, 1, v___x_4931_);
v___x_4968_ = lean_obj_once(&l_Lasm_JS_instReprBinding_repr___redArg___closed__17, &l_Lasm_JS_instReprBinding_repr___redArg___closed__17_once, _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__17);
v___x_4969_ = l_Bool_repr___redArg(v_construct_4929_);
v___x_4970_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4970_, 0, v___x_4968_);
lean_ctor_set(v___x_4970_, 1, v___x_4969_);
v___x_4971_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4971_, 0, v___x_4970_);
lean_ctor_set_uint8(v___x_4971_, sizeof(void*)*1, v___x_4937_);
v___x_4972_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4972_, 0, v___x_4967_);
lean_ctor_set(v___x_4972_, 1, v___x_4971_);
v___x_4973_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4973_, 0, v___x_4972_);
lean_ctor_set(v___x_4973_, 1, v___x_4940_);
v___x_4974_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4974_, 0, v___x_4973_);
lean_ctor_set(v___x_4974_, 1, v___x_4942_);
v___x_4975_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__19));
v___x_4976_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4976_, 0, v___x_4974_);
lean_ctor_set(v___x_4976_, 1, v___x_4975_);
v___x_4977_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4977_, 0, v___x_4976_);
lean_ctor_set(v___x_4977_, 1, v___x_4931_);
v___x_4978_ = lean_obj_once(&l_Lasm_JS_instReprBinding_repr___redArg___closed__20, &l_Lasm_JS_instReprBinding_repr___redArg___closed__20_once, _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__20);
v___x_4979_ = l_Nat_reprFast(v_arity_4930_);
v___x_4980_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4980_, 0, v___x_4979_);
v___x_4981_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4981_, 0, v___x_4978_);
lean_ctor_set(v___x_4981_, 1, v___x_4980_);
v___x_4982_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4982_, 0, v___x_4981_);
lean_ctor_set_uint8(v___x_4982_, sizeof(void*)*1, v___x_4937_);
v___x_4983_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4983_, 0, v___x_4977_);
lean_ctor_set(v___x_4983_, 1, v___x_4982_);
v___x_4984_ = lean_obj_once(&l_Lasm_JS_instReprBinding_repr___redArg___closed__23, &l_Lasm_JS_instReprBinding_repr___redArg___closed__23_once, _init_l_Lasm_JS_instReprBinding_repr___redArg___closed__23);
v___x_4985_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__24));
v___x_4986_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4986_, 0, v___x_4985_);
lean_ctor_set(v___x_4986_, 1, v___x_4983_);
v___x_4987_ = ((lean_object*)(l_Lasm_JS_instReprBinding_repr___redArg___closed__25));
v___x_4988_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4988_, 0, v___x_4986_);
lean_ctor_set(v___x_4988_, 1, v___x_4987_);
v___x_4989_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4989_, 0, v___x_4984_);
lean_ctor_set(v___x_4989_, 1, v___x_4988_);
v___x_4990_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_4990_, 0, v___x_4989_);
lean_ctor_set_uint8(v___x_4990_, sizeof(void*)*1, v___x_4937_);
return v___x_4990_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instReprBinding_repr(lean_object* v_x_4991_, lean_object* v_prec_4992_){
_start:
{
lean_object* v___x_4993_; 
v___x_4993_ = l_Lasm_JS_instReprBinding_repr___redArg(v_x_4991_);
return v___x_4993_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instReprBinding_repr___boxed(lean_object* v_x_4994_, lean_object* v_prec_4995_){
_start:
{
lean_object* v_res_4996_; 
v_res_4996_ = l_Lasm_JS_instReprBinding_repr(v_x_4994_, v_prec_4995_);
lean_dec(v_prec_4995_);
return v_res_4996_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object* v_b_5001_){
_start:
{
lean_object* v_name_5002_; lean_object* v_module_5003_; lean_object* v_path_5004_; lean_object* v___x_5005_; lean_object* v___x_5006_; lean_object* v___x_5007_; lean_object* v___x_5008_; lean_object* v___x_5009_; lean_object* v___y_5011_; lean_object* v___x_5015_; lean_object* v___x_5016_; uint8_t v___x_5017_; 
v_name_5002_ = lean_ctor_get(v_b_5001_, 0);
v_module_5003_ = lean_ctor_get(v_b_5001_, 1);
v_path_5004_ = lean_ctor_get(v_b_5001_, 2);
v___x_5005_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context___closed__0));
v___x_5006_ = lean_string_append(v___x_5005_, v_name_5002_);
v___x_5007_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__3));
v___x_5008_ = lean_string_append(v___x_5006_, v___x_5007_);
v___x_5009_ = lean_string_append(v___x_5008_, v_module_5003_);
v___x_5015_ = lean_string_utf8_byte_size(v_path_5004_);
v___x_5016_ = lean_unsigned_to_nat(0u);
v___x_5017_ = lean_nat_dec_eq(v___x_5015_, v___x_5016_);
if (v___x_5017_ == 0)
{
lean_object* v___x_5018_; lean_object* v___x_5019_; 
v___x_5018_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context___closed__1));
v___x_5019_ = lean_string_append(v___x_5018_, v_path_5004_);
v___y_5011_ = v___x_5019_;
goto v___jp_5010_;
}
else
{
lean_object* v___x_5020_; 
v___x_5020_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___y_5011_ = v___x_5020_;
goto v___jp_5010_;
}
v___jp_5010_:
{
lean_object* v___x_5012_; lean_object* v___x_5013_; lean_object* v___x_5014_; 
v___x_5012_ = lean_string_append(v___x_5009_, v___y_5011_);
lean_dec_ref(v___y_5011_);
v___x_5013_ = ((lean_object*)(l_Lasm_JS_Wire_read___closed__1));
v___x_5014_ = lean_string_append(v___x_5012_, v___x_5013_);
return v___x_5014_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context___boxed(lean_object* v_b_5021_){
_start:
{
lean_object* v_res_5022_; 
v_res_5022_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5021_);
lean_dec_ref(v_b_5021_);
return v_res_5022_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object* v_b_5023_, lean_object* v_args_5024_){
_start:
{
lean_object* v_name_5025_; lean_object* v_module_5026_; lean_object* v_path_5027_; lean_object* v___x_5028_; lean_object* v___x_5029_; lean_object* v___x_5030_; lean_object* v___x_5031_; lean_object* v___x_5032_; lean_object* v___x_5033_; lean_object* v___x_5034_; lean_object* v___x_5035_; lean_object* v___x_5036_; lean_object* v___x_5037_; lean_object* v___x_5038_; 
v_name_5025_ = lean_ctor_get(v_b_5023_, 0);
v_module_5026_ = lean_ctor_get(v_b_5023_, 1);
v_path_5027_ = lean_ctor_get(v_b_5023_, 2);
lean_inc_ref(v_name_5025_);
v___x_5028_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5028_, 0, v_name_5025_);
lean_inc_ref(v_module_5026_);
v___x_5029_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5029_, 0, v_module_5026_);
lean_inc_ref(v_path_5027_);
v___x_5030_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5030_, 0, v_path_5027_);
v___x_5031_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5031_, 0, v_args_5024_);
v___x_5032_ = lean_unsigned_to_nat(4u);
v___x_5033_ = lean_mk_empty_array_with_capacity(v___x_5032_);
v___x_5034_ = lean_array_push(v___x_5033_, v___x_5028_);
v___x_5035_ = lean_array_push(v___x_5034_, v___x_5029_);
v___x_5036_ = lean_array_push(v___x_5035_, v___x_5030_);
v___x_5037_ = lean_array_push(v___x_5036_, v___x_5031_);
v___x_5038_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5038_, 0, v___x_5037_);
return v___x_5038_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload___boxed(lean_object* v_b_5039_, lean_object* v_args_5040_){
_start:
{
lean_object* v_res_5041_; 
v_res_5041_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5039_, v_args_5040_);
lean_dec_ref(v_b_5039_);
return v_res_5041_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___redArg(lean_object* v_inst_5042_, lean_object* v_b_5043_, lean_object* v_args_5044_, uint8_t v_await_5045_){
_start:
{
uint64_t v___y_5048_; uint64_t v___y_5049_; uint8_t v_mode_5084_; uint64_t v___x_5085_; uint64_t v___y_5087_; 
v_mode_5084_ = lean_ctor_get_uint8(v_inst_5042_, sizeof(void*)*2);
v___x_5085_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v_mode_5084_);
if (v_await_5045_ == 0)
{
uint64_t v___x_5092_; 
v___x_5092_ = 0ULL;
v___y_5087_ = v___x_5092_;
goto v___jp_5086_;
}
else
{
uint64_t v___x_5093_; 
v___x_5093_ = 2ULL;
v___y_5087_ = v___x_5093_;
goto v___jp_5086_;
}
v___jp_5047_:
{
uint64_t v_flags_5050_; uint32_t v___x_5051_; lean_object* v___x_5052_; uint32_t v___x_5053_; lean_object* v___x_5054_; 
v_flags_5050_ = lean_uint64_lor(v___y_5048_, v___y_5049_);
v___x_5051_ = 214;
v___x_5052_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5043_, v_args_5044_);
v___x_5053_ = 0;
v___x_5054_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5051_, v_flags_5050_, v___x_5052_, v___x_5053_);
if (lean_obj_tag(v___x_5054_) == 0)
{
lean_object* v_a_5055_; lean_object* v___x_5056_; 
v_a_5055_ = lean_ctor_get(v___x_5054_, 0);
lean_inc(v_a_5055_);
lean_dec_ref_known(v___x_5054_, 1);
v___x_5056_ = l_Lasm_JS_Wire_decode(v_a_5055_);
lean_dec(v_a_5055_);
if (lean_obj_tag(v___x_5056_) == 0)
{
lean_object* v_a_5057_; lean_object* v___x_5058_; lean_object* v___x_5059_; 
v_a_5057_ = lean_ctor_get(v___x_5056_, 0);
lean_inc(v_a_5057_);
lean_dec_ref_known(v___x_5056_, 1);
v___x_5058_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5043_);
v___x_5059_ = l_Lasm_JS_decodeAs___redArg(v_inst_5042_, v___x_5058_, v_a_5057_);
lean_dec_ref(v___x_5058_);
return v___x_5059_;
}
else
{
lean_object* v_a_5060_; lean_object* v___x_5062_; uint8_t v_isShared_5063_; uint8_t v_isSharedCheck_5067_; 
lean_dec_ref(v_inst_5042_);
v_a_5060_ = lean_ctor_get(v___x_5056_, 0);
v_isSharedCheck_5067_ = !lean_is_exclusive(v___x_5056_);
if (v_isSharedCheck_5067_ == 0)
{
v___x_5062_ = v___x_5056_;
v_isShared_5063_ = v_isSharedCheck_5067_;
goto v_resetjp_5061_;
}
else
{
lean_inc(v_a_5060_);
lean_dec(v___x_5056_);
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
else
{
lean_object* v_a_5068_; lean_object* v___x_5070_; uint8_t v_isShared_5071_; uint8_t v_isSharedCheck_5083_; 
lean_dec_ref(v_inst_5042_);
v_a_5068_ = lean_ctor_get(v___x_5054_, 0);
v_isSharedCheck_5083_ = !lean_is_exclusive(v___x_5054_);
if (v_isSharedCheck_5083_ == 0)
{
v___x_5070_ = v___x_5054_;
v_isShared_5071_ = v_isSharedCheck_5083_;
goto v_resetjp_5069_;
}
else
{
lean_inc(v_a_5068_);
lean_dec(v___x_5054_);
v___x_5070_ = lean_box(0);
v_isShared_5071_ = v_isSharedCheck_5083_;
goto v_resetjp_5069_;
}
v_resetjp_5069_:
{
lean_object* v___x_5072_; lean_object* v___x_5073_; lean_object* v___x_5074_; lean_object* v___x_5075_; lean_object* v___x_5076_; lean_object* v___x_5077_; lean_object* v___x_5078_; lean_object* v___x_5079_; lean_object* v___x_5081_; 
v___x_5072_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__0));
v___x_5073_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5043_);
v___x_5074_ = lean_string_append(v___x_5072_, v___x_5073_);
lean_dec_ref(v___x_5073_);
v___x_5075_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__1));
v___x_5076_ = lean_string_append(v___x_5074_, v___x_5075_);
v___x_5077_ = lean_io_error_to_string(v_a_5068_);
v___x_5078_ = lean_string_append(v___x_5076_, v___x_5077_);
lean_dec_ref(v___x_5077_);
v___x_5079_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5079_, 0, v___x_5078_);
if (v_isShared_5071_ == 0)
{
lean_ctor_set(v___x_5070_, 0, v___x_5079_);
v___x_5081_ = v___x_5070_;
goto v_reusejp_5080_;
}
else
{
lean_object* v_reuseFailAlloc_5082_; 
v_reuseFailAlloc_5082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5082_, 0, v___x_5079_);
v___x_5081_ = v_reuseFailAlloc_5082_;
goto v_reusejp_5080_;
}
v_reusejp_5080_:
{
return v___x_5081_;
}
}
}
}
v___jp_5086_:
{
uint8_t v_construct_5088_; uint64_t v___x_5089_; 
v_construct_5088_ = lean_ctor_get_uint8(v_b_5043_, sizeof(void*)*4);
v___x_5089_ = lean_uint64_lor(v___x_5085_, v___y_5087_);
if (v_construct_5088_ == 0)
{
uint64_t v___x_5090_; 
v___x_5090_ = 0ULL;
v___y_5048_ = v___x_5089_;
v___y_5049_ = v___x_5090_;
goto v___jp_5047_;
}
else
{
uint64_t v___x_5091_; 
v___x_5091_ = 4ULL;
v___y_5048_ = v___x_5089_;
v___y_5049_ = v___x_5091_;
goto v___jp_5047_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___redArg___boxed(lean_object* v_inst_5094_, lean_object* v_b_5095_, lean_object* v_args_5096_, lean_object* v_await_5097_, lean_object* v_a_5098_){
_start:
{
uint8_t v_await_boxed_5099_; lean_object* v_res_5100_; 
v_await_boxed_5099_ = lean_unbox(v_await_5097_);
v_res_5100_ = l_Lasm_JS_Binding_invoke___redArg(v_inst_5094_, v_b_5095_, v_args_5096_, v_await_boxed_5099_);
lean_dec_ref(v_b_5095_);
return v_res_5100_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke(lean_object* v_00_u03b1_5101_, lean_object* v_inst_5102_, lean_object* v_b_5103_, lean_object* v_args_5104_, uint8_t v_await_5105_){
_start:
{
lean_object* v___x_5107_; 
v___x_5107_ = l_Lasm_JS_Binding_invoke___redArg(v_inst_5102_, v_b_5103_, v_args_5104_, v_await_5105_);
return v___x_5107_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___boxed(lean_object* v_00_u03b1_5108_, lean_object* v_inst_5109_, lean_object* v_b_5110_, lean_object* v_args_5111_, lean_object* v_await_5112_, lean_object* v_a_5113_){
_start:
{
uint8_t v_await_boxed_5114_; lean_object* v_res_5115_; 
v_await_boxed_5114_ = lean_unbox(v_await_5112_);
v_res_5115_ = l_Lasm_JS_Binding_invoke(v_00_u03b1_5108_, v_inst_5109_, v_b_5110_, v_args_5111_, v_await_boxed_5114_);
lean_dec_ref(v_b_5110_);
return v_res_5115_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___redArg(lean_object* v_inst_5116_, lean_object* v_b_5117_, lean_object* v_args_5118_){
_start:
{
uint8_t v_mode_5120_; uint8_t v_construct_5121_; lean_object* v___x_5122_; uint32_t v___x_5123_; uint64_t v___x_5124_; uint64_t v___y_5126_; 
v_mode_5120_ = lean_ctor_get_uint8(v_inst_5116_, sizeof(void*)*2);
v_construct_5121_ = lean_ctor_get_uint8(v_b_5117_, sizeof(void*)*4);
v___x_5122_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_5117_);
v___x_5123_ = 214;
v___x_5124_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v_mode_5120_);
if (v_construct_5121_ == 0)
{
uint64_t v___x_5134_; 
v___x_5134_ = 0ULL;
v___y_5126_ = v___x_5134_;
goto v___jp_5125_;
}
else
{
uint64_t v___x_5135_; 
v___x_5135_ = 4ULL;
v___y_5126_ = v___x_5135_;
goto v___jp_5125_;
}
v___jp_5125_:
{
uint64_t v___x_5127_; lean_object* v___x_5128_; lean_object* v___x_5129_; lean_object* v___x_5130_; lean_object* v___x_5131_; lean_object* v___x_5132_; lean_object* v___x_5133_; 
v___x_5127_ = lean_uint64_lor(v___x_5124_, v___y_5126_);
v___x_5128_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_5117_, v_args_5118_);
v___x_5129_ = ((lean_object*)(l_Lasm_JS_decodeAs___redArg___closed__0));
v___x_5130_ = lean_string_append(v___x_5129_, v___x_5122_);
v___x_5131_ = ((lean_object*)(l_Lasm_JS_instFromJSArray___redArg___lam__1___closed__1));
v___x_5132_ = lean_string_append(v___x_5130_, v___x_5131_);
v___x_5133_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___redArg(v_inst_5116_, v___x_5122_, v___x_5123_, v___x_5127_, v___x_5128_, v___x_5132_);
return v___x_5133_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___redArg___boxed(lean_object* v_inst_5136_, lean_object* v_b_5137_, lean_object* v_args_5138_, lean_object* v_a_5139_){
_start:
{
lean_object* v_res_5140_; 
v_res_5140_ = l_Lasm_JS_Binding_invokeAsync___redArg(v_inst_5136_, v_b_5137_, v_args_5138_);
lean_dec_ref(v_b_5137_);
return v_res_5140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync(lean_object* v_00_u03b1_5141_, lean_object* v_inst_5142_, lean_object* v_b_5143_, lean_object* v_args_5144_){
_start:
{
lean_object* v___x_5146_; 
v___x_5146_ = l_Lasm_JS_Binding_invokeAsync___redArg(v_inst_5142_, v_b_5143_, v_args_5144_);
return v___x_5146_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___boxed(lean_object* v_00_u03b1_5147_, lean_object* v_inst_5148_, lean_object* v_b_5149_, lean_object* v_args_5150_, lean_object* v_a_5151_){
_start:
{
lean_object* v_res_5152_; 
v_res_5152_ = l_Lasm_JS_Binding_invokeAsync(v_00_u03b1_5147_, v_inst_5148_, v_b_5149_, v_args_5150_);
lean_dec_ref(v_b_5149_);
return v_res_5152_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOTaskExceptErrorOfFromJS___redArg___lam__0(lean_object* v___x_5153_, lean_object* v_inst_5154_, lean_object* v_b_5155_, lean_object* v_args_5156_){
_start:
{
uint8_t v___x_5158_; lean_object* v___x_5159_; 
v___x_5158_ = 0;
v___x_5159_ = l_Lasm_JS_Binding_invoke___redArg(v___x_5153_, v_b_5155_, v_args_5156_, v___x_5158_);
if (lean_obj_tag(v___x_5159_) == 0)
{
lean_object* v_a_5160_; lean_object* v___x_5161_; 
v_a_5160_ = lean_ctor_get(v___x_5159_, 0);
lean_inc(v_a_5160_);
lean_dec_ref_known(v___x_5159_, 1);
v___x_5161_ = l_Lasm_JS_Value_toTask___redArg(v_a_5160_, v_inst_5154_);
return v___x_5161_;
}
else
{
lean_object* v_a_5162_; lean_object* v___x_5164_; uint8_t v_isShared_5165_; uint8_t v_isSharedCheck_5169_; 
lean_dec_ref(v_inst_5154_);
v_a_5162_ = lean_ctor_get(v___x_5159_, 0);
v_isSharedCheck_5169_ = !lean_is_exclusive(v___x_5159_);
if (v_isSharedCheck_5169_ == 0)
{
v___x_5164_ = v___x_5159_;
v_isShared_5165_ = v_isSharedCheck_5169_;
goto v_resetjp_5163_;
}
else
{
lean_inc(v_a_5162_);
lean_dec(v___x_5159_);
v___x_5164_ = lean_box(0);
v_isShared_5165_ = v_isSharedCheck_5169_;
goto v_resetjp_5163_;
}
v_resetjp_5163_:
{
lean_object* v___x_5167_; 
if (v_isShared_5165_ == 0)
{
v___x_5167_ = v___x_5164_;
goto v_reusejp_5166_;
}
else
{
lean_object* v_reuseFailAlloc_5168_; 
v_reuseFailAlloc_5168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5168_, 0, v_a_5162_);
v___x_5167_ = v_reuseFailAlloc_5168_;
goto v_reusejp_5166_;
}
v_reusejp_5166_:
{
return v___x_5167_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOTaskExceptErrorOfFromJS___redArg___lam__0___boxed(lean_object* v___x_5170_, lean_object* v_inst_5171_, lean_object* v_b_5172_, lean_object* v_args_5173_, lean_object* v___y_5174_){
_start:
{
lean_object* v_res_5175_; 
v_res_5175_ = l_Lasm_JS_instBindableIOTaskExceptErrorOfFromJS___redArg___lam__0(v___x_5170_, v_inst_5171_, v_b_5172_, v_args_5173_);
lean_dec_ref(v_b_5172_);
return v_res_5175_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOTaskExceptErrorOfFromJS___redArg(lean_object* v_inst_5176_){
_start:
{
lean_object* v___x_5177_; lean_object* v___f_5178_; lean_object* v___x_5179_; lean_object* v___x_5180_; 
v___x_5177_ = ((lean_object*)(l_Lasm_JS_instFromJSValue));
v___f_5178_ = lean_alloc_closure((void*)(l_Lasm_JS_instBindableIOTaskExceptErrorOfFromJS___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_5178_, 0, v___x_5177_);
lean_closure_set(v___f_5178_, 1, v_inst_5176_);
v___x_5179_ = lean_unsigned_to_nat(0u);
v___x_5180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5180_, 0, v___x_5179_);
lean_ctor_set(v___x_5180_, 1, v___f_5178_);
return v___x_5180_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOTaskExceptErrorOfFromJS(lean_object* v_00_u03b2_5181_, lean_object* v_inst_5182_){
_start:
{
lean_object* v___x_5183_; 
v___x_5183_ = l_Lasm_JS_instBindableIOTaskExceptErrorOfFromJS___redArg(v_inst_5182_);
return v___x_5183_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOOfFromJS___redArg___lam__0(lean_object* v_inst_5184_, lean_object* v_b_5185_, lean_object* v_args_5186_){
_start:
{
uint8_t v___x_5188_; lean_object* v___x_5189_; 
v___x_5188_ = 1;
v___x_5189_ = l_Lasm_JS_Binding_invoke___redArg(v_inst_5184_, v_b_5185_, v_args_5186_, v___x_5188_);
return v___x_5189_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOOfFromJS___redArg___lam__0___boxed(lean_object* v_inst_5190_, lean_object* v_b_5191_, lean_object* v_args_5192_, lean_object* v___y_5193_){
_start:
{
lean_object* v_res_5194_; 
v_res_5194_ = l_Lasm_JS_instBindableIOOfFromJS___redArg___lam__0(v_inst_5190_, v_b_5191_, v_args_5192_);
lean_dec_ref(v_b_5191_);
return v_res_5194_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOOfFromJS___redArg(lean_object* v_inst_5195_){
_start:
{
lean_object* v___f_5196_; lean_object* v___x_5197_; lean_object* v___x_5198_; 
v___f_5196_ = lean_alloc_closure((void*)(l_Lasm_JS_instBindableIOOfFromJS___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_5196_, 0, v_inst_5195_);
v___x_5197_ = lean_unsigned_to_nat(0u);
v___x_5198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5198_, 0, v___x_5197_);
lean_ctor_set(v___x_5198_, 1, v___f_5196_);
return v___x_5198_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableIOOfFromJS(lean_object* v_00_u03b2_5199_, lean_object* v_inst_5200_){
_start:
{
lean_object* v___x_5201_; 
v___x_5201_ = l_Lasm_JS_instBindableIOOfFromJS___redArg(v_inst_5200_);
return v___x_5201_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableAsyncOfFromJS___redArg___lam__0(lean_object* v_inst_5202_, lean_object* v_b_5203_, lean_object* v_args_5204_){
_start:
{
lean_object* v___x_5206_; 
v___x_5206_ = l_Lasm_JS_Binding_invokeAsync___redArg(v_inst_5202_, v_b_5203_, v_args_5204_);
return v___x_5206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableAsyncOfFromJS___redArg___lam__0___boxed(lean_object* v_inst_5207_, lean_object* v_b_5208_, lean_object* v_args_5209_, lean_object* v___y_5210_){
_start:
{
lean_object* v_res_5211_; 
v_res_5211_ = l_Lasm_JS_instBindableAsyncOfFromJS___redArg___lam__0(v_inst_5207_, v_b_5208_, v_args_5209_);
lean_dec_ref(v_b_5208_);
return v_res_5211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableAsyncOfFromJS___redArg(lean_object* v_inst_5212_){
_start:
{
lean_object* v___f_5213_; lean_object* v___x_5214_; lean_object* v___x_5215_; 
v___f_5213_ = lean_alloc_closure((void*)(l_Lasm_JS_instBindableAsyncOfFromJS___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_5213_, 0, v_inst_5212_);
v___x_5214_ = lean_unsigned_to_nat(0u);
v___x_5215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5215_, 0, v___x_5214_);
lean_ctor_set(v___x_5215_, 1, v___f_5213_);
return v___x_5215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableAsyncOfFromJS(lean_object* v_00_u03b2_5216_, lean_object* v_inst_5217_){
_start:
{
lean_object* v___x_5218_; 
v___x_5218_ = l_Lasm_JS_instBindableAsyncOfFromJS___redArg(v_inst_5217_);
return v___x_5218_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableForallOfToJS___redArg___lam__0(lean_object* v_inst_5219_, lean_object* v_bind_5220_, lean_object* v_b_5221_, lean_object* v_args_5222_, lean_object* v_a_5223_){
_start:
{
lean_object* v___x_5224_; lean_object* v___x_5225_; lean_object* v___x_5226_; 
v___x_5224_ = lean_apply_1(v_inst_5219_, v_a_5223_);
v___x_5225_ = lean_array_push(v_args_5222_, v___x_5224_);
v___x_5226_ = lean_apply_2(v_bind_5220_, v_b_5221_, v___x_5225_);
return v___x_5226_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableForallOfToJS___redArg(lean_object* v_inst_5227_, lean_object* v_inst_5228_){
_start:
{
lean_object* v_arity_5229_; lean_object* v_bind_5230_; lean_object* v___x_5232_; uint8_t v_isShared_5233_; uint8_t v_isSharedCheck_5240_; 
v_arity_5229_ = lean_ctor_get(v_inst_5228_, 0);
v_bind_5230_ = lean_ctor_get(v_inst_5228_, 1);
v_isSharedCheck_5240_ = !lean_is_exclusive(v_inst_5228_);
if (v_isSharedCheck_5240_ == 0)
{
v___x_5232_ = v_inst_5228_;
v_isShared_5233_ = v_isSharedCheck_5240_;
goto v_resetjp_5231_;
}
else
{
lean_inc(v_bind_5230_);
lean_inc(v_arity_5229_);
lean_dec(v_inst_5228_);
v___x_5232_ = lean_box(0);
v_isShared_5233_ = v_isSharedCheck_5240_;
goto v_resetjp_5231_;
}
v_resetjp_5231_:
{
lean_object* v___f_5234_; lean_object* v___x_5235_; lean_object* v___x_5236_; lean_object* v___x_5238_; 
v___f_5234_ = lean_alloc_closure((void*)(l_Lasm_JS_instBindableForallOfToJS___redArg___lam__0), 5, 2);
lean_closure_set(v___f_5234_, 0, v_inst_5227_);
lean_closure_set(v___f_5234_, 1, v_bind_5230_);
v___x_5235_ = lean_unsigned_to_nat(1u);
v___x_5236_ = lean_nat_add(v_arity_5229_, v___x_5235_);
lean_dec(v_arity_5229_);
if (v_isShared_5233_ == 0)
{
lean_ctor_set(v___x_5232_, 1, v___f_5234_);
lean_ctor_set(v___x_5232_, 0, v___x_5236_);
v___x_5238_ = v___x_5232_;
goto v_reusejp_5237_;
}
else
{
lean_object* v_reuseFailAlloc_5239_; 
v_reuseFailAlloc_5239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5239_, 0, v___x_5236_);
lean_ctor_set(v_reuseFailAlloc_5239_, 1, v___f_5234_);
v___x_5238_ = v_reuseFailAlloc_5239_;
goto v_reusejp_5237_;
}
v_reusejp_5237_:
{
return v___x_5238_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_instBindableForallOfToJS(lean_object* v_00_u03b1_5241_, lean_object* v_00_u03b2_5242_, lean_object* v_inst_5243_, lean_object* v_inst_5244_){
_start:
{
lean_object* v___x_5245_; 
v___x_5245_ = l_Lasm_JS_instBindableForallOfToJS___redArg(v_inst_5243_, v_inst_5244_);
return v___x_5245_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_onEdge(){
_start:
{
uint8_t v___x_5247_; 
v___x_5247_ = l_Lasm_JS_isAvailable;
if (v___x_5247_ == 0)
{
lean_object* v___x_5248_; lean_object* v___x_5249_; 
v___x_5248_ = lean_box(v___x_5247_);
v___x_5249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5249_, 0, v___x_5248_);
return v___x_5249_;
}
else
{
uint8_t v___x_5250_; uint32_t v___x_5251_; uint32_t v___x_5252_; uint64_t v___x_5253_; lean_object* v___x_5254_; lean_object* v___x_5255_; 
v___x_5250_ = 0;
v___x_5251_ = 200;
v___x_5252_ = 0;
v___x_5253_ = 0ULL;
v___x_5254_ = l_ByteArray_empty;
v___x_5255_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_5251_, v___x_5252_, v___x_5253_, v___x_5254_);
if (lean_obj_tag(v___x_5255_) == 0)
{
lean_object* v_a_5256_; lean_object* v___x_5258_; uint8_t v_isShared_5259_; uint8_t v_isSharedCheck_5275_; 
v_a_5256_ = lean_ctor_get(v___x_5255_, 0);
v_isSharedCheck_5275_ = !lean_is_exclusive(v___x_5255_);
if (v_isSharedCheck_5275_ == 0)
{
v___x_5258_ = v___x_5255_;
v_isShared_5259_ = v_isSharedCheck_5275_;
goto v_resetjp_5257_;
}
else
{
lean_inc(v_a_5256_);
lean_dec(v___x_5255_);
v___x_5258_ = lean_box(0);
v_isShared_5259_ = v_isSharedCheck_5275_;
goto v_resetjp_5257_;
}
v_resetjp_5257_:
{
lean_object* v___x_5260_; lean_object* v___x_5261_; uint8_t v___x_5262_; 
v___x_5260_ = lean_unsigned_to_nat(8u);
v___x_5261_ = lean_byte_array_size(v_a_5256_);
v___x_5262_ = lean_nat_dec_le(v___x_5260_, v___x_5261_);
if (v___x_5262_ == 0)
{
lean_object* v___x_5263_; lean_object* v___x_5265_; 
lean_dec(v_a_5256_);
v___x_5263_ = lean_box(v___x_5250_);
if (v_isShared_5259_ == 0)
{
lean_ctor_set(v___x_5258_, 0, v___x_5263_);
v___x_5265_ = v___x_5258_;
goto v_reusejp_5264_;
}
else
{
lean_object* v_reuseFailAlloc_5266_; 
v_reuseFailAlloc_5266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5266_, 0, v___x_5263_);
v___x_5265_ = v_reuseFailAlloc_5266_;
goto v_reusejp_5264_;
}
v_reusejp_5264_:
{
return v___x_5265_;
}
}
else
{
lean_object* v___x_5267_; uint8_t v___x_5268_; uint8_t v___x_5269_; uint8_t v___x_5270_; lean_object* v___x_5271_; lean_object* v___x_5273_; 
v___x_5267_ = lean_unsigned_to_nat(4u);
v___x_5268_ = lean_byte_array_get(v_a_5256_, v___x_5267_);
lean_dec(v_a_5256_);
v___x_5269_ = 1;
v___x_5270_ = lean_uint8_dec_eq(v___x_5268_, v___x_5269_);
v___x_5271_ = lean_box(v___x_5270_);
if (v_isShared_5259_ == 0)
{
lean_ctor_set(v___x_5258_, 0, v___x_5271_);
v___x_5273_ = v___x_5258_;
goto v_reusejp_5272_;
}
else
{
lean_object* v_reuseFailAlloc_5274_; 
v_reuseFailAlloc_5274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5274_, 0, v___x_5271_);
v___x_5273_ = v_reuseFailAlloc_5274_;
goto v_reusejp_5272_;
}
v_reusejp_5272_:
{
return v___x_5273_;
}
}
}
}
else
{
lean_object* v_a_5276_; lean_object* v___x_5278_; uint8_t v_isShared_5279_; uint8_t v_isSharedCheck_5283_; 
v_a_5276_ = lean_ctor_get(v___x_5255_, 0);
v_isSharedCheck_5283_ = !lean_is_exclusive(v___x_5255_);
if (v_isSharedCheck_5283_ == 0)
{
v___x_5278_ = v___x_5255_;
v_isShared_5279_ = v_isSharedCheck_5283_;
goto v_resetjp_5277_;
}
else
{
lean_inc(v_a_5276_);
lean_dec(v___x_5255_);
v___x_5278_ = lean_box(0);
v_isShared_5279_ = v_isSharedCheck_5283_;
goto v_resetjp_5277_;
}
v_resetjp_5277_:
{
lean_object* v___x_5281_; 
if (v_isShared_5279_ == 0)
{
v___x_5281_ = v___x_5278_;
goto v_reusejp_5280_;
}
else
{
lean_object* v_reuseFailAlloc_5282_; 
v_reuseFailAlloc_5282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5282_, 0, v_a_5276_);
v___x_5281_ = v_reuseFailAlloc_5282_;
goto v_reusejp_5280_;
}
v_reusejp_5280_:
{
return v___x_5281_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_onEdge___boxed(lean_object* v_a_5284_){
_start:
{
lean_object* v_res_5285_; 
v_res_5285_ = l_Lasm_JS_onEdge();
return v_res_5285_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___at___00Lasm_JS_exportDefault_spec__0(lean_object* v_o_5286_, lean_object* v_key_5287_, lean_object* v_x_5288_){
_start:
{
lean_object* v___x_5290_; lean_object* v___x_5291_; lean_object* v___x_5292_; lean_object* v___x_5293_; lean_object* v___x_5294_; lean_object* v___x_5295_; lean_object* v___x_5296_; lean_object* v___x_5297_; lean_object* v___x_5298_; lean_object* v_payload_5299_; uint32_t v___x_5300_; uint32_t v___x_5301_; uint64_t v___x_5302_; lean_object* v___x_5303_; lean_object* v___x_5304_; lean_object* v___x_5305_; lean_object* v___x_5306_; lean_object* v___x_5307_; lean_object* v___x_5308_; lean_object* v___x_5309_; lean_object* v___x_5310_; 
v___x_5290_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5290_, 0, v_key_5287_);
v___x_5291_ = ((lean_object*)(l_Lasm_JS_Data_describe___closed__7));
v___x_5292_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5292_, 0, v_x_5288_);
lean_ctor_set(v___x_5292_, 1, v___x_5291_);
lean_inc(v_o_5286_);
v___x_5293_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5293_, 0, v_o_5286_);
lean_ctor_set(v___x_5293_, 1, v___x_5291_);
v___x_5294_ = lean_unsigned_to_nat(3u);
v___x_5295_ = lean_mk_empty_array_with_capacity(v___x_5294_);
lean_inc_ref(v___x_5290_);
v___x_5296_ = lean_array_push(v___x_5295_, v___x_5290_);
lean_inc_ref(v___x_5292_);
v___x_5297_ = lean_array_push(v___x_5296_, v___x_5292_);
v___x_5298_ = lean_array_push(v___x_5297_, v___x_5293_);
v_payload_5299_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_payload_5299_, 0, v___x_5298_);
v___x_5300_ = 204;
v___x_5301_ = lasm_js_value_handle(v_o_5286_);
lean_dec(v_o_5286_);
v___x_5302_ = 0ULL;
v___x_5303_ = lean_unsigned_to_nat(2u);
v___x_5304_ = lean_mk_empty_array_with_capacity(v___x_5303_);
v___x_5305_ = lean_array_push(v___x_5304_, v___x_5290_);
v___x_5306_ = lean_array_push(v___x_5305_, v___x_5292_);
v___x_5307_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5307_, 0, v___x_5306_);
v___x_5308_ = l_Lasm_JS_Wire_encode(v___x_5307_);
v___x_5309_ = lean_box(0);
v___x_5310_ = lasm_js_call(v___x_5300_, v___x_5301_, v___x_5302_, v___x_5308_, v_payload_5299_);
lean_dec_ref_known(v_payload_5299_, 1);
lean_dec_ref(v___x_5308_);
if (lean_obj_tag(v___x_5310_) == 0)
{
lean_object* v___x_5312_; uint8_t v_isShared_5313_; uint8_t v_isSharedCheck_5317_; 
v_isSharedCheck_5317_ = !lean_is_exclusive(v___x_5310_);
if (v_isSharedCheck_5317_ == 0)
{
lean_object* v_unused_5318_; 
v_unused_5318_ = lean_ctor_get(v___x_5310_, 0);
lean_dec(v_unused_5318_);
v___x_5312_ = v___x_5310_;
v_isShared_5313_ = v_isSharedCheck_5317_;
goto v_resetjp_5311_;
}
else
{
lean_dec(v___x_5310_);
v___x_5312_ = lean_box(0);
v_isShared_5313_ = v_isSharedCheck_5317_;
goto v_resetjp_5311_;
}
v_resetjp_5311_:
{
lean_object* v___x_5315_; 
if (v_isShared_5313_ == 0)
{
lean_ctor_set(v___x_5312_, 0, v___x_5309_);
v___x_5315_ = v___x_5312_;
goto v_reusejp_5314_;
}
else
{
lean_object* v_reuseFailAlloc_5316_; 
v_reuseFailAlloc_5316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5316_, 0, v___x_5309_);
v___x_5315_ = v_reuseFailAlloc_5316_;
goto v_reusejp_5314_;
}
v_reusejp_5314_:
{
return v___x_5315_;
}
}
}
else
{
lean_object* v_a_5319_; lean_object* v___x_5321_; uint8_t v_isShared_5322_; uint8_t v_isSharedCheck_5326_; 
v_a_5319_ = lean_ctor_get(v___x_5310_, 0);
v_isSharedCheck_5326_ = !lean_is_exclusive(v___x_5310_);
if (v_isSharedCheck_5326_ == 0)
{
v___x_5321_ = v___x_5310_;
v_isShared_5322_ = v_isSharedCheck_5326_;
goto v_resetjp_5320_;
}
else
{
lean_inc(v_a_5319_);
lean_dec(v___x_5310_);
v___x_5321_ = lean_box(0);
v_isShared_5322_ = v_isSharedCheck_5326_;
goto v_resetjp_5320_;
}
v_resetjp_5320_:
{
lean_object* v___x_5324_; 
if (v_isShared_5322_ == 0)
{
v___x_5324_ = v___x_5321_;
goto v_reusejp_5323_;
}
else
{
lean_object* v_reuseFailAlloc_5325_; 
v_reuseFailAlloc_5325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5325_, 0, v_a_5319_);
v___x_5324_ = v_reuseFailAlloc_5325_;
goto v_reusejp_5323_;
}
v_reusejp_5323_:
{
return v___x_5324_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___at___00Lasm_JS_exportDefault_spec__0___boxed(lean_object* v_o_5327_, lean_object* v_key_5328_, lean_object* v_x_5329_, lean_object* v_a_5330_){
_start:
{
lean_object* v_res_5331_; 
v_res_5331_ = l_Lasm_JS_Value_set___at___00Lasm_JS_exportDefault_spec__0(v_o_5327_, v_key_5328_, v_x_5329_);
return v_res_5331_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_exportDefault(lean_object* v_v_5333_){
_start:
{
lean_object* v___x_5335_; 
v___x_5335_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_5335_) == 0)
{
lean_object* v_a_5336_; lean_object* v___x_5337_; lean_object* v___x_5338_; 
v_a_5336_ = lean_ctor_get(v___x_5335_, 0);
lean_inc(v_a_5336_);
lean_dec_ref_known(v___x_5335_, 1);
v___x_5337_ = ((lean_object*)(l_Lasm_JS_exportDefault___closed__0));
v___x_5338_ = l_Lasm_JS_Value_set___at___00Lasm_JS_exportDefault_spec__0(v_a_5336_, v___x_5337_, v_v_5333_);
return v___x_5338_;
}
else
{
lean_object* v_a_5339_; lean_object* v___x_5341_; uint8_t v_isShared_5342_; uint8_t v_isSharedCheck_5346_; 
lean_dec(v_v_5333_);
v_a_5339_ = lean_ctor_get(v___x_5335_, 0);
v_isSharedCheck_5346_ = !lean_is_exclusive(v___x_5335_);
if (v_isSharedCheck_5346_ == 0)
{
v___x_5341_ = v___x_5335_;
v_isShared_5342_ = v_isSharedCheck_5346_;
goto v_resetjp_5340_;
}
else
{
lean_inc(v_a_5339_);
lean_dec(v___x_5335_);
v___x_5341_ = lean_box(0);
v_isShared_5342_ = v_isSharedCheck_5346_;
goto v_resetjp_5340_;
}
v_resetjp_5340_:
{
lean_object* v___x_5344_; 
if (v_isShared_5342_ == 0)
{
v___x_5344_ = v___x_5341_;
goto v_reusejp_5343_;
}
else
{
lean_object* v_reuseFailAlloc_5345_; 
v_reuseFailAlloc_5345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5345_, 0, v_a_5339_);
v___x_5344_ = v_reuseFailAlloc_5345_;
goto v_reusejp_5343_;
}
v_reusejp_5343_:
{
return v___x_5344_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_exportDefault___boxed(lean_object* v_v_5347_, lean_object* v_a_5348_){
_start:
{
lean_object* v_res_5349_; 
v_res_5349_ = l_Lasm_JS_exportDefault(v_v_5347_);
return v_res_5349_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_waitForever(){
_start:
{
lean_object* v___x_5351_; 
v___x_5351_ = l_Lasm_JS_onEdge();
if (lean_obj_tag(v___x_5351_) == 0)
{
lean_object* v_a_5352_; lean_object* v___x_5354_; uint8_t v_isShared_5355_; uint8_t v_isSharedCheck_5390_; 
v_a_5352_ = lean_ctor_get(v___x_5351_, 0);
v_isSharedCheck_5390_ = !lean_is_exclusive(v___x_5351_);
if (v_isSharedCheck_5390_ == 0)
{
v___x_5354_ = v___x_5351_;
v_isShared_5355_ = v_isSharedCheck_5390_;
goto v_resetjp_5353_;
}
else
{
lean_inc(v_a_5352_);
lean_dec(v___x_5351_);
v___x_5354_ = lean_box(0);
v_isShared_5355_ = v_isSharedCheck_5390_;
goto v_resetjp_5353_;
}
v_resetjp_5353_:
{
uint8_t v___x_5356_; 
v___x_5356_ = lean_unbox(v_a_5352_);
lean_dec(v_a_5352_);
if (v___x_5356_ == 0)
{
lean_object* v___x_5357_; 
lean_del_object(v___x_5354_);
v___x_5357_ = lasm_js_park();
if (lean_obj_tag(v___x_5357_) == 0)
{
lean_object* v_a_5358_; lean_object* v___x_5360_; uint8_t v_isShared_5361_; uint8_t v_isSharedCheck_5377_; 
v_a_5358_ = lean_ctor_get(v___x_5357_, 0);
v_isSharedCheck_5377_ = !lean_is_exclusive(v___x_5357_);
if (v_isSharedCheck_5377_ == 0)
{
v___x_5360_ = v___x_5357_;
v_isShared_5361_ = v_isSharedCheck_5377_;
goto v_resetjp_5359_;
}
else
{
lean_inc(v_a_5358_);
lean_dec(v___x_5357_);
v___x_5360_ = lean_box(0);
v_isShared_5361_ = v_isSharedCheck_5377_;
goto v_resetjp_5359_;
}
v_resetjp_5359_:
{
uint8_t v___x_5362_; 
v___x_5362_ = lean_unbox(v_a_5358_);
lean_dec(v_a_5358_);
if (v___x_5362_ == 0)
{
lean_object* v___x_5363_; lean_object* v___x_5364_; lean_object* v___x_5365_; lean_object* v___x_5366_; lean_object* v___x_5367_; lean_object* v___x_5368_; lean_object* v___x_5369_; lean_object* v___x_5371_; 
v___x_5363_ = lean_io_promise_new();
lean_inc(v___x_5363_);
v___x_5364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5364_, 0, v___x_5363_);
v___x_5365_ = lean_st_mk_ref(v___x_5364_);
v___x_5366_ = lean_io_promise_result_opt(v___x_5363_);
lean_dec(v___x_5363_);
v___x_5367_ = lean_io_wait(v___x_5366_);
lean_dec(v___x_5367_);
v___x_5368_ = lean_box(0);
v___x_5369_ = lean_st_ref_get(v___x_5365_);
lean_dec(v___x_5365_);
lean_dec(v___x_5369_);
if (v_isShared_5361_ == 0)
{
lean_ctor_set(v___x_5360_, 0, v___x_5368_);
v___x_5371_ = v___x_5360_;
goto v_reusejp_5370_;
}
else
{
lean_object* v_reuseFailAlloc_5372_; 
v_reuseFailAlloc_5372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5372_, 0, v___x_5368_);
v___x_5371_ = v_reuseFailAlloc_5372_;
goto v_reusejp_5370_;
}
v_reusejp_5370_:
{
return v___x_5371_;
}
}
else
{
lean_object* v___x_5373_; lean_object* v___x_5375_; 
v___x_5373_ = lean_box(0);
if (v_isShared_5361_ == 0)
{
lean_ctor_set(v___x_5360_, 0, v___x_5373_);
v___x_5375_ = v___x_5360_;
goto v_reusejp_5374_;
}
else
{
lean_object* v_reuseFailAlloc_5376_; 
v_reuseFailAlloc_5376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5376_, 0, v___x_5373_);
v___x_5375_ = v_reuseFailAlloc_5376_;
goto v_reusejp_5374_;
}
v_reusejp_5374_:
{
return v___x_5375_;
}
}
}
}
else
{
lean_object* v_a_5378_; lean_object* v___x_5380_; uint8_t v_isShared_5381_; uint8_t v_isSharedCheck_5385_; 
v_a_5378_ = lean_ctor_get(v___x_5357_, 0);
v_isSharedCheck_5385_ = !lean_is_exclusive(v___x_5357_);
if (v_isSharedCheck_5385_ == 0)
{
v___x_5380_ = v___x_5357_;
v_isShared_5381_ = v_isSharedCheck_5385_;
goto v_resetjp_5379_;
}
else
{
lean_inc(v_a_5378_);
lean_dec(v___x_5357_);
v___x_5380_ = lean_box(0);
v_isShared_5381_ = v_isSharedCheck_5385_;
goto v_resetjp_5379_;
}
v_resetjp_5379_:
{
lean_object* v___x_5383_; 
if (v_isShared_5381_ == 0)
{
v___x_5383_ = v___x_5380_;
goto v_reusejp_5382_;
}
else
{
lean_object* v_reuseFailAlloc_5384_; 
v_reuseFailAlloc_5384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5384_, 0, v_a_5378_);
v___x_5383_ = v_reuseFailAlloc_5384_;
goto v_reusejp_5382_;
}
v_reusejp_5382_:
{
return v___x_5383_;
}
}
}
}
else
{
lean_object* v___x_5386_; lean_object* v___x_5388_; 
v___x_5386_ = lean_box(0);
if (v_isShared_5355_ == 0)
{
lean_ctor_set(v___x_5354_, 0, v___x_5386_);
v___x_5388_ = v___x_5354_;
goto v_reusejp_5387_;
}
else
{
lean_object* v_reuseFailAlloc_5389_; 
v_reuseFailAlloc_5389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5389_, 0, v___x_5386_);
v___x_5388_ = v_reuseFailAlloc_5389_;
goto v_reusejp_5387_;
}
v_reusejp_5387_:
{
return v___x_5388_;
}
}
}
}
else
{
lean_object* v_a_5391_; lean_object* v___x_5393_; uint8_t v_isShared_5394_; uint8_t v_isSharedCheck_5398_; 
v_a_5391_ = lean_ctor_get(v___x_5351_, 0);
v_isSharedCheck_5398_ = !lean_is_exclusive(v___x_5351_);
if (v_isSharedCheck_5398_ == 0)
{
v___x_5393_ = v___x_5351_;
v_isShared_5394_ = v_isSharedCheck_5398_;
goto v_resetjp_5392_;
}
else
{
lean_inc(v_a_5391_);
lean_dec(v___x_5351_);
v___x_5393_ = lean_box(0);
v_isShared_5394_ = v_isSharedCheck_5398_;
goto v_resetjp_5392_;
}
v_resetjp_5392_:
{
lean_object* v___x_5396_; 
if (v_isShared_5394_ == 0)
{
v___x_5396_ = v___x_5393_;
goto v_reusejp_5395_;
}
else
{
lean_object* v_reuseFailAlloc_5397_; 
v_reuseFailAlloc_5397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5397_, 0, v_a_5391_);
v___x_5396_ = v_reuseFailAlloc_5397_;
goto v_reusejp_5395_;
}
v_reusejp_5395_:
{
return v___x_5396_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_waitForever___boxed(lean_object* v_a_5399_){
_start:
{
lean_object* v_res_5400_; 
v_res_5400_ = l_Lasm_JS_waitForever();
return v_res_5400_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_stats(){
_start:
{
uint32_t v___x_5402_; uint32_t v___x_5403_; uint64_t v___x_5404_; lean_object* v___x_5405_; lean_object* v___x_5406_; 
v___x_5402_ = 213;
v___x_5403_ = 0;
v___x_5404_ = 0ULL;
v___x_5405_ = l_ByteArray_empty;
v___x_5406_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_5402_, v___x_5403_, v___x_5404_, v___x_5405_);
if (lean_obj_tag(v___x_5406_) == 0)
{
lean_object* v_a_5407_; lean_object* v___x_5409_; uint8_t v_isShared_5410_; uint8_t v_isSharedCheck_5421_; 
v_a_5407_ = lean_ctor_get(v___x_5406_, 0);
v_isSharedCheck_5421_ = !lean_is_exclusive(v___x_5406_);
if (v_isSharedCheck_5421_ == 0)
{
v___x_5409_ = v___x_5406_;
v_isShared_5410_ = v_isSharedCheck_5421_;
goto v_resetjp_5408_;
}
else
{
lean_inc(v_a_5407_);
lean_dec(v___x_5406_);
v___x_5409_ = lean_box(0);
v_isShared_5410_ = v_isSharedCheck_5421_;
goto v_resetjp_5408_;
}
v_resetjp_5408_:
{
uint8_t v___x_5411_; 
v___x_5411_ = lean_string_validate_utf8(v_a_5407_);
if (v___x_5411_ == 0)
{
lean_object* v___x_5412_; lean_object* v___x_5413_; lean_object* v___x_5415_; 
lean_dec(v_a_5407_);
v___x_5412_ = lean_obj_once(&l_Lasm_JS_decodeAs___redArg___closed__7, &l_Lasm_JS_decodeAs___redArg___closed__7_once, _init_l_Lasm_JS_decodeAs___redArg___closed__7);
v___x_5413_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5412_);
if (v_isShared_5410_ == 0)
{
lean_ctor_set(v___x_5409_, 0, v___x_5413_);
v___x_5415_ = v___x_5409_;
goto v_reusejp_5414_;
}
else
{
lean_object* v_reuseFailAlloc_5416_; 
v_reuseFailAlloc_5416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5416_, 0, v___x_5413_);
v___x_5415_ = v_reuseFailAlloc_5416_;
goto v_reusejp_5414_;
}
v_reusejp_5414_:
{
return v___x_5415_;
}
}
else
{
lean_object* v___x_5417_; lean_object* v___x_5419_; 
v___x_5417_ = lean_string_from_utf8_unchecked(v_a_5407_);
if (v_isShared_5410_ == 0)
{
lean_ctor_set(v___x_5409_, 0, v___x_5417_);
v___x_5419_ = v___x_5409_;
goto v_reusejp_5418_;
}
else
{
lean_object* v_reuseFailAlloc_5420_; 
v_reuseFailAlloc_5420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5420_, 0, v___x_5417_);
v___x_5419_ = v_reuseFailAlloc_5420_;
goto v_reusejp_5418_;
}
v_reusejp_5418_:
{
return v___x_5419_;
}
}
}
}
else
{
lean_object* v_a_5422_; lean_object* v___x_5424_; uint8_t v_isShared_5425_; uint8_t v_isSharedCheck_5429_; 
v_a_5422_ = lean_ctor_get(v___x_5406_, 0);
v_isSharedCheck_5429_ = !lean_is_exclusive(v___x_5406_);
if (v_isSharedCheck_5429_ == 0)
{
v___x_5424_ = v___x_5406_;
v_isShared_5425_ = v_isSharedCheck_5429_;
goto v_resetjp_5423_;
}
else
{
lean_inc(v_a_5422_);
lean_dec(v___x_5406_);
v___x_5424_ = lean_box(0);
v_isShared_5425_ = v_isSharedCheck_5429_;
goto v_resetjp_5423_;
}
v_resetjp_5423_:
{
lean_object* v___x_5427_; 
if (v_isShared_5425_ == 0)
{
v___x_5427_ = v___x_5424_;
goto v_reusejp_5426_;
}
else
{
lean_object* v_reuseFailAlloc_5428_; 
v_reuseFailAlloc_5428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5428_, 0, v_a_5422_);
v___x_5427_ = v_reuseFailAlloc_5428_;
goto v_reusejp_5426_;
}
v_reusejp_5426_:
{
return v___x_5427_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_stats___boxed(lean_object* v_a_5430_){
_start:
{
lean_object* v_res_5431_; 
v_res_5431_ = l_Lasm_JS_stats();
return v_res_5431_;
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
