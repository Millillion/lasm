// Lean compiler output
// Module: Lasm.JS.Web.Support
// Imports: public import Init public meta import Init public import Lasm.JS.Core
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
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instReprString___lam__0___boxed(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Except_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
lean_object* l_Lasm_JS_global();
extern lean_object* l_Lasm_JS_instFromJSValue;
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_Value_get___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_instMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_instReprTupleOfRepr___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Prod_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_repr___redArg(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_instMonad___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Except_pure(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t l_Array_isEqvAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lasm_JS_Web_instInhabitedRecord_default___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Web_instInhabitedRecord_default___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instInhabitedRecord_default___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instInhabitedRecord_default___redArg();
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instInhabitedRecord_default___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lasm_JS_Web_instInhabitedRecord_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instInhabitedRecord_default___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instInhabitedRecord_default(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instInhabitedRecord___redArg();
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instInhabitedRecord___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instInhabitedRecord(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instReprString___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "entries"};
static const lean_object* l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__2_value)}};
static const lean_object* l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__3_value)}};
static const lean_object* l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__4_value;
static const lean_string_object l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__5 = (const lean_object*)&l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__5_value)}};
static const lean_object* l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__6 = (const lean_object*)&l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__4_value),((lean_object*)&l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__6_value)}};
static const lean_object* l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__7 = (const lean_object*)&l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__7_value;
static lean_once_cell_t l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__8;
static const lean_string_object l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__9 = (const lean_object*)&l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__9_value;
static lean_once_cell_t l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__10;
static lean_once_cell_t l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__11;
static const lean_ctor_object l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__1_value)}};
static const lean_object* l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__12 = (const lean_object*)&l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__12_value;
static const lean_ctor_object l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__9_value)}};
static const lean_object* l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__13 = (const lean_object*)&l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__13_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprRecord_repr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprRecord_repr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprRecord_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprRecord___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprRecord(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqRecord_beq___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqRecord_beq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqRecord_beq___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqRecord_beq___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqRecord_beq(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqRecord_beq___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqRecord___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqRecord(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRecord___redArg___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__0_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__2_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__3_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__4_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__5 = (const lean_object*)&l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__5_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__6 = (const lean_object*)&l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__1_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__7 = (const lean_object*)&l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__7_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__7_value),((lean_object*)&l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__2_value),((lean_object*)&l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__3_value),((lean_object*)&l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__4_value),((lean_object*)&l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__5_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__8 = (const lean_object*)&l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__8_value),((lean_object*)&l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__6_value)}};
static const lean_object* l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__9 = (const lean_object*)&l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__9_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRecord___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRecord___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRecord(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_instFromJSRecord___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "property "};
static const lean_object* l_Lasm_JS_Web_instFromJSRecord___redArg___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSRecord___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSRecord___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Web_instFromJSRecord___redArg___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSRecord___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSRecord___redArg___lam__0(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instFromJSRecord___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_instMonad___redArg___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instFromJSRecord___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSRecord___redArg___closed__0_value;
static const lean_closure_object l_Lasm_JS_Web_instFromJSRecord___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_instMonad___redArg___lam__1, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instFromJSRecord___redArg___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSRecord___redArg___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_instFromJSRecord___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_instMonad___redArg___lam__2___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instFromJSRecord___redArg___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSRecord___redArg___closed__2_value;
static const lean_closure_object l_Lasm_JS_Web_instFromJSRecord___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_instMonad___redArg___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instFromJSRecord___redArg___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instFromJSRecord___redArg___closed__3_value;
static const lean_closure_object l_Lasm_JS_Web_instFromJSRecord___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_map, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lasm_JS_Web_instFromJSRecord___redArg___closed__4 = (const lean_object*)&l_Lasm_JS_Web_instFromJSRecord___redArg___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSRecord___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSRecord___redArg___closed__4_value),((lean_object*)&l_Lasm_JS_Web_instFromJSRecord___redArg___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instFromJSRecord___redArg___closed__5 = (const lean_object*)&l_Lasm_JS_Web_instFromJSRecord___redArg___closed__5_value;
static const lean_closure_object l_Lasm_JS_Web_instFromJSRecord___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_pure, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lasm_JS_Web_instFromJSRecord___redArg___closed__6 = (const lean_object*)&l_Lasm_JS_Web_instFromJSRecord___redArg___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSRecord___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSRecord___redArg___closed__5_value),((lean_object*)&l_Lasm_JS_Web_instFromJSRecord___redArg___closed__6_value),((lean_object*)&l_Lasm_JS_Web_instFromJSRecord___redArg___closed__1_value),((lean_object*)&l_Lasm_JS_Web_instFromJSRecord___redArg___closed__2_value),((lean_object*)&l_Lasm_JS_Web_instFromJSRecord___redArg___closed__3_value)}};
static const lean_object* l_Lasm_JS_Web_instFromJSRecord___redArg___closed__7 = (const lean_object*)&l_Lasm_JS_Web_instFromJSRecord___redArg___closed__7_value;
static const lean_closure_object l_Lasm_JS_Web_instFromJSRecord___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Except_bind, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lasm_JS_Web_instFromJSRecord___redArg___closed__8 = (const lean_object*)&l_Lasm_JS_Web_instFromJSRecord___redArg___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSRecord___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSRecord___redArg___closed__7_value),((lean_object*)&l_Lasm_JS_Web_instFromJSRecord___redArg___closed__8_value)}};
static const lean_object* l_Lasm_JS_Web_instFromJSRecord___redArg___closed__9 = (const lean_object*)&l_Lasm_JS_Web_instFromJSRecord___redArg___closed__9_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSRecord___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lasm.JS.Web.Record ("};
static const lean_object* l_Lasm_JS_Web_instFromJSRecord___redArg___closed__10 = (const lean_object*)&l_Lasm_JS_Web_instFromJSRecord___redArg___closed__10_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSRecord___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_Web_instFromJSRecord___redArg___closed__11 = (const lean_object*)&l_Lasm_JS_Web_instFromJSRecord___redArg___closed__11_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSRecord___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSRecord(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_dropWhile___at___00Lasm_JS_Web_Support_args_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_dropWhile___at___00Lasm_JS_Web_Support_args_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_argsWith(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_argsWith___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Web_Support_fields_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Web_Support_fields_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lasm_JS_Web_Support_fields___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Web_Support_fields___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Support_fields___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_Support_fields___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 8}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_Support_fields___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_Support_fields___closed__1 = (const lean_object*)&l_Lasm_JS_Web_Support_fields___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_fields___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Web_Support_arg___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "callback argument "};
static const lean_object* l_Lasm_JS_Web_Support_arg___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Support_arg___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ByteArray"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__3_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__5;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__8_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__9_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__10;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__11 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__11_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Support_arrayBufferBytes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Web.Support.arrayBufferBytes"};
static const lean_object* l_Lasm_JS_Web_Support_arrayBufferBytes___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Support_arrayBufferBytes___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_Support_arrayBufferBytes___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "globalThis"};
static const lean_object* l_Lasm_JS_Web_Support_arrayBufferBytes___closed__1 = (const lean_object*)&l_Lasm_JS_Web_Support_arrayBufferBytes___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_Support_arrayBufferBytes___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Uint8Array"};
static const lean_object* l_Lasm_JS_Web_Support_arrayBufferBytes___closed__2 = (const lean_object*)&l_Lasm_JS_Web_Support_arrayBufferBytes___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_Support_arrayBufferBytes___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_Support_arrayBufferBytes___closed__0_value),((lean_object*)&l_Lasm_JS_Web_Support_arrayBufferBytes___closed__1_value),((lean_object*)&l_Lasm_JS_Web_Support_arrayBufferBytes___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_Support_arrayBufferBytes___closed__3 = (const lean_object*)&l_Lasm_JS_Web_Support_arrayBufferBytes___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arrayBufferBytes(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arrayBufferBytes___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__1_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__2;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "negative"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not an integer"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__4_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Support_viewBytes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "buffer"};
static const lean_object* l_Lasm_JS_Web_Support_viewBytes___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Support_viewBytes___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_Support_viewBytes___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "byteOffset"};
static const lean_object* l_Lasm_JS_Web_Support_viewBytes___closed__1 = (const lean_object*)&l_Lasm_JS_Web_Support_viewBytes___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_Support_viewBytes___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "byteLength"};
static const lean_object* l_Lasm_JS_Web_Support_viewBytes___closed__2 = (const lean_object*)&l_Lasm_JS_Web_Support_viewBytes___closed__2_value;
static const lean_string_object l_Lasm_JS_Web_Support_viewBytes___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Web.Support.viewBytes"};
static const lean_object* l_Lasm_JS_Web_Support_viewBytes___closed__3 = (const lean_object*)&l_Lasm_JS_Web_Support_viewBytes___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Web_Support_viewBytes___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_Support_viewBytes___closed__3_value),((lean_object*)&l_Lasm_JS_Web_Support_arrayBufferBytes___closed__1_value),((lean_object*)&l_Lasm_JS_Web_Support_arrayBufferBytes___closed__2_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_Support_viewBytes___closed__4 = (const lean_object*)&l_Lasm_JS_Web_Support_viewBytes___closed__4_value;
static const lean_string_object l_Lasm_JS_Web_Support_viewBytes___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "Lasm.JS.Web: expected a typed array, received JavaScript "};
static const lean_object* l_Lasm_JS_Web_Support_viewBytes___closed__5 = (const lean_object*)&l_Lasm_JS_Web_Support_viewBytes___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_viewBytes(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_viewBytes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Support_typedArray___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Web.Support.typedArray"};
static const lean_object* l_Lasm_JS_Web_Support_typedArray___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Support_typedArray___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_Support_typedArray___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_Support_typedArray___closed__0_value),((lean_object*)&l_Lasm_JS_Web_Support_arrayBufferBytes___closed__1_value),((lean_object*)&l_Lasm_JS_Web_Support_arrayBufferBytes___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_Support_typedArray___closed__1 = (const lean_object*)&l_Lasm_JS_Web_Support_typedArray___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_Support_typedArray___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Web.Support.typedArray."};
static const lean_object* l_Lasm_JS_Web_Support_typedArray___closed__2 = (const lean_object*)&l_Lasm_JS_Web_Support_typedArray___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_typedArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_typedArray___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Support_number___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Web.Support.number"};
static const lean_object* l_Lasm_JS_Web_Support_number___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Support_number___redArg___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_Support_number___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Number"};
static const lean_object* l_Lasm_JS_Web_Support_number___redArg___closed__1 = (const lean_object*)&l_Lasm_JS_Web_Support_number___redArg___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_Support_number___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_Support_number___redArg___closed__0_value),((lean_object*)&l_Lasm_JS_Web_Support_arrayBufferBytes___closed__1_value),((lean_object*)&l_Lasm_JS_Web_Support_number___redArg___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_Support_number___redArg___closed__2 = (const lean_object*)&l_Lasm_JS_Web_Support_number___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Support_cloneAs___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Web.Support.cloneAs"};
static const lean_object* l_Lasm_JS_Web_Support_cloneAs___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Support_cloneAs___redArg___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_Support_cloneAs___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "structuredClone"};
static const lean_object* l_Lasm_JS_Web_Support_cloneAs___redArg___closed__1 = (const lean_object*)&l_Lasm_JS_Web_Support_cloneAs___redArg___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_Support_cloneAs___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_Support_cloneAs___redArg___closed__0_value),((lean_object*)&l_Lasm_JS_Web_Support_arrayBufferBytes___closed__1_value),((lean_object*)&l_Lasm_JS_Web_Support_cloneAs___redArg___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_Support_cloneAs___redArg___closed__2 = (const lean_object*)&l_Lasm_JS_Web_Support_cloneAs___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lasm_JS_Web_Support_iterate___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Web_Support_iterate___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Support_iterate___redArg___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_Support_iterate___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Web.Support.iterate"};
static const lean_object* l_Lasm_JS_Web_Support_iterate___redArg___closed__1 = (const lean_object*)&l_Lasm_JS_Web_Support_iterate___redArg___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_Support_iterate___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Array.from"};
static const lean_object* l_Lasm_JS_Web_Support_iterate___redArg___closed__2 = (const lean_object*)&l_Lasm_JS_Web_Support_iterate___redArg___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_Support_iterate___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_Support_iterate___redArg___closed__1_value),((lean_object*)&l_Lasm_JS_Web_Support_arrayBufferBytes___closed__1_value),((lean_object*)&l_Lasm_JS_Web_Support_iterate___redArg___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_Support_iterate___redArg___closed__3 = (const lean_object*)&l_Lasm_JS_Web_Support_iterate___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Support_getGlobal_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Web: empty global path"};
static const lean_object* l_Lasm_JS_Web_Support_getGlobal_go___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Support_getGlobal_go___redArg___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_Support_getGlobal_go___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_Support_getGlobal_go___redArg___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_Support_getGlobal_go___redArg___closed__1 = (const lean_object*)&l_Lasm_JS_Web_Support_getGlobal_go___redArg___closed__1_value;
static const lean_closure_object l_Lasm_JS_Web_Support_getGlobal_go___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_Support_getGlobal_go___redArg___closed__2 = (const lean_object*)&l_Lasm_JS_Web_Support_getGlobal_go___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instInhabitedRecord_default___redArg(){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = ((lean_object*)(l_Lasm_JS_Web_instInhabitedRecord_default___redArg___closed__0));
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instInhabitedRecord_default___redArg___boxed(lean_object* v___dummy_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_Lasm_JS_Web_instInhabitedRecord_default___redArg();
return v_res_6_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instInhabitedRecord_default___closed__0(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = l_Lasm_JS_Web_instInhabitedRecord_default___redArg();
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instInhabitedRecord_default(lean_object* v_00_u03b1_8_){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_obj_once(&l_Lasm_JS_Web_instInhabitedRecord_default___closed__0, &l_Lasm_JS_Web_instInhabitedRecord_default___closed__0_once, _init_l_Lasm_JS_Web_instInhabitedRecord_default___closed__0);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instInhabitedRecord___redArg(){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lean_obj_once(&l_Lasm_JS_Web_instInhabitedRecord_default___closed__0, &l_Lasm_JS_Web_instInhabitedRecord_default___closed__0_once, _init_l_Lasm_JS_Web_instInhabitedRecord_default___closed__0);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instInhabitedRecord___redArg___boxed(lean_object* v___dummy_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = l_Lasm_JS_Web_instInhabitedRecord___redArg();
return v_res_13_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instInhabitedRecord(lean_object* v_a_14_){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = lean_obj_once(&l_Lasm_JS_Web_instInhabitedRecord_default___closed__0, &l_Lasm_JS_Web_instInhabitedRecord_default___closed__0_once, _init_l_Lasm_JS_Web_instInhabitedRecord_default___closed__0);
return v___x_15_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__8(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_30_ = lean_unsigned_to_nat(11u);
v___x_31_ = lean_nat_to_int(v___x_30_);
return v___x_31_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_33_ = ((lean_object*)(l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__1));
v___x_34_ = lean_string_length(v___x_33_);
return v___x_34_;
}
}
static lean_object* _init_l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__11(void){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = lean_obj_once(&l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__10, &l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__10_once, _init_l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__10);
v___x_36_ = lean_nat_to_int(v___x_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprRecord_repr___redArg(lean_object* v_inst_41_, lean_object* v_x_42_){
_start:
{
lean_object* v___f_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___f_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; uint8_t v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___f_43_ = ((lean_object*)(l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__0));
v___x_44_ = ((lean_object*)(l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__7));
v___x_45_ = lean_obj_once(&l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__8, &l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__8_once, _init_l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__8);
v___f_46_ = lean_alloc_closure((void*)(l_instReprTupleOfRepr___redArg___lam__0), 3, 1);
lean_closure_set(v___f_46_, 0, v_inst_41_);
v___x_47_ = lean_alloc_closure((void*)(l_Prod_repr___boxed), 6, 4);
lean_closure_set(v___x_47_, 0, lean_box(0));
lean_closure_set(v___x_47_, 1, lean_box(0));
lean_closure_set(v___x_47_, 2, v___f_43_);
lean_closure_set(v___x_47_, 3, v___f_46_);
v___x_48_ = l_Array_repr___redArg(v___x_47_, v_x_42_);
v___x_49_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_49_, 0, v___x_45_);
lean_ctor_set(v___x_49_, 1, v___x_48_);
v___x_50_ = 0;
v___x_51_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_51_, 0, v___x_49_);
lean_ctor_set_uint8(v___x_51_, sizeof(void*)*1, v___x_50_);
v___x_52_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_52_, 0, v___x_44_);
lean_ctor_set(v___x_52_, 1, v___x_51_);
v___x_53_ = lean_obj_once(&l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__11, &l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__11_once, _init_l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__11);
v___x_54_ = ((lean_object*)(l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__12));
v___x_55_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_55_, 0, v___x_54_);
lean_ctor_set(v___x_55_, 1, v___x_52_);
v___x_56_ = ((lean_object*)(l_Lasm_JS_Web_instReprRecord_repr___redArg___closed__13));
v___x_57_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_57_, 0, v___x_55_);
lean_ctor_set(v___x_57_, 1, v___x_56_);
v___x_58_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_58_, 0, v___x_53_);
lean_ctor_set(v___x_58_, 1, v___x_57_);
v___x_59_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_59_, 0, v___x_58_);
lean_ctor_set_uint8(v___x_59_, sizeof(void*)*1, v___x_50_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprRecord_repr(lean_object* v_00_u03b1_60_, lean_object* v_inst_61_, lean_object* v_x_62_, lean_object* v_prec_63_){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = l_Lasm_JS_Web_instReprRecord_repr___redArg(v_inst_61_, v_x_62_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprRecord_repr___boxed(lean_object* v_00_u03b1_65_, lean_object* v_inst_66_, lean_object* v_x_67_, lean_object* v_prec_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l_Lasm_JS_Web_instReprRecord_repr(v_00_u03b1_65_, v_inst_66_, v_x_67_, v_prec_68_);
lean_dec(v_prec_68_);
return v_res_69_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprRecord___redArg(lean_object* v_inst_70_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instReprRecord_repr___boxed), 4, 2);
lean_closure_set(v___x_71_, 0, lean_box(0));
lean_closure_set(v___x_71_, 1, v_inst_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instReprRecord(lean_object* v_00_u03b1_72_, lean_object* v_inst_73_){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instReprRecord_repr___boxed), 4, 2);
lean_closure_set(v___x_74_, 0, lean_box(0));
lean_closure_set(v___x_74_, 1, v_inst_73_);
return v___x_74_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqRecord_beq___redArg___lam__0(lean_object* v_inst_75_, lean_object* v_x_76_, lean_object* v_x_77_){
_start:
{
lean_object* v_fst_78_; lean_object* v_snd_79_; lean_object* v_fst_80_; lean_object* v_snd_81_; uint8_t v___x_82_; 
v_fst_78_ = lean_ctor_get(v_x_76_, 0);
lean_inc(v_fst_78_);
v_snd_79_ = lean_ctor_get(v_x_76_, 1);
lean_inc(v_snd_79_);
lean_dec_ref(v_x_76_);
v_fst_80_ = lean_ctor_get(v_x_77_, 0);
lean_inc(v_fst_80_);
v_snd_81_ = lean_ctor_get(v_x_77_, 1);
lean_inc(v_snd_81_);
lean_dec_ref(v_x_77_);
v___x_82_ = lean_string_dec_eq(v_fst_78_, v_fst_80_);
lean_dec(v_fst_80_);
lean_dec(v_fst_78_);
if (v___x_82_ == 0)
{
lean_dec(v_snd_81_);
lean_dec(v_snd_79_);
lean_dec_ref(v_inst_75_);
return v___x_82_;
}
else
{
lean_object* v___x_83_; uint8_t v___x_84_; 
v___x_83_ = lean_apply_2(v_inst_75_, v_snd_79_, v_snd_81_);
v___x_84_ = lean_unbox(v___x_83_);
return v___x_84_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqRecord_beq___redArg___lam__0___boxed(lean_object* v_inst_85_, lean_object* v_x_86_, lean_object* v_x_87_){
_start:
{
uint8_t v_res_88_; lean_object* v_r_89_; 
v_res_88_ = l_Lasm_JS_Web_instBEqRecord_beq___redArg___lam__0(v_inst_85_, v_x_86_, v_x_87_);
v_r_89_ = lean_box(v_res_88_);
return v_r_89_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqRecord_beq___redArg(lean_object* v_inst_90_, lean_object* v_x_91_, lean_object* v_x_92_){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; uint8_t v___x_95_; 
v___x_93_ = lean_array_get_size(v_x_91_);
v___x_94_ = lean_array_get_size(v_x_92_);
v___x_95_ = lean_nat_dec_eq(v___x_93_, v___x_94_);
if (v___x_95_ == 0)
{
lean_dec_ref(v_inst_90_);
return v___x_95_;
}
else
{
lean_object* v___f_96_; uint8_t v___x_97_; 
v___f_96_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instBEqRecord_beq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_96_, 0, v_inst_90_);
v___x_97_ = l_Array_isEqvAux___redArg(v_x_91_, v_x_92_, v___f_96_, v___x_93_);
return v___x_97_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqRecord_beq___redArg___boxed(lean_object* v_inst_98_, lean_object* v_x_99_, lean_object* v_x_100_){
_start:
{
uint8_t v_res_101_; lean_object* v_r_102_; 
v_res_101_ = l_Lasm_JS_Web_instBEqRecord_beq___redArg(v_inst_98_, v_x_99_, v_x_100_);
lean_dec_ref(v_x_100_);
lean_dec_ref(v_x_99_);
v_r_102_ = lean_box(v_res_101_);
return v_r_102_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Web_instBEqRecord_beq(lean_object* v_00_u03b1_103_, lean_object* v_inst_104_, lean_object* v_x_105_, lean_object* v_x_106_){
_start:
{
uint8_t v___x_107_; 
v___x_107_ = l_Lasm_JS_Web_instBEqRecord_beq___redArg(v_inst_104_, v_x_105_, v_x_106_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqRecord_beq___boxed(lean_object* v_00_u03b1_108_, lean_object* v_inst_109_, lean_object* v_x_110_, lean_object* v_x_111_){
_start:
{
uint8_t v_res_112_; lean_object* v_r_113_; 
v_res_112_ = l_Lasm_JS_Web_instBEqRecord_beq(v_00_u03b1_108_, v_inst_109_, v_x_110_, v_x_111_);
lean_dec_ref(v_x_111_);
lean_dec_ref(v_x_110_);
v_r_113_ = lean_box(v_res_112_);
return v_r_113_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqRecord___redArg(lean_object* v_inst_114_){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instBEqRecord_beq___boxed), 4, 2);
lean_closure_set(v___x_115_, 0, lean_box(0));
lean_closure_set(v___x_115_, 1, v_inst_114_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instBEqRecord(lean_object* v_00_u03b1_116_, lean_object* v_inst_117_){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instBEqRecord_beq___boxed), 4, 2);
lean_closure_set(v___x_118_, 0, lean_box(0));
lean_closure_set(v___x_118_, 1, v_inst_117_);
return v___x_118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRecord___redArg___lam__0(lean_object* v_inst_119_, lean_object* v_x_120_){
_start:
{
lean_object* v_fst_121_; lean_object* v_snd_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_130_; 
v_fst_121_ = lean_ctor_get(v_x_120_, 0);
v_snd_122_ = lean_ctor_get(v_x_120_, 1);
v_isSharedCheck_130_ = !lean_is_exclusive(v_x_120_);
if (v_isSharedCheck_130_ == 0)
{
v___x_124_ = v_x_120_;
v_isShared_125_ = v_isSharedCheck_130_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_snd_122_);
lean_inc(v_fst_121_);
lean_dec(v_x_120_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_130_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___x_126_; lean_object* v___x_128_; 
v___x_126_ = lean_apply_1(v_inst_119_, v_snd_122_);
if (v_isShared_125_ == 0)
{
lean_ctor_set(v___x_124_, 1, v___x_126_);
v___x_128_ = v___x_124_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_129_; 
v_reuseFailAlloc_129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_129_, 0, v_fst_121_);
lean_ctor_set(v_reuseFailAlloc_129_, 1, v___x_126_);
v___x_128_ = v_reuseFailAlloc_129_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
return v___x_128_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRecord___redArg___lam__1(lean_object* v___f_150_, lean_object* v_r_151_){
_start:
{
lean_object* v___x_152_; size_t v_sz_153_; size_t v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_152_ = ((lean_object*)(l_Lasm_JS_Web_instToJSRecord___redArg___lam__1___closed__9));
v_sz_153_ = lean_array_size(v_r_151_);
v___x_154_ = ((size_t)0ULL);
v___x_155_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_152_, v___f_150_, v_sz_153_, v___x_154_, v_r_151_);
v___x_156_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_156_, 0, v___x_155_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRecord___redArg(lean_object* v_inst_157_){
_start:
{
lean_object* v___f_158_; lean_object* v___f_159_; 
v___f_158_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSRecord___redArg___lam__0), 2, 1);
lean_closure_set(v___f_158_, 0, v_inst_157_);
v___f_159_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSRecord___redArg___lam__1), 2, 1);
lean_closure_set(v___f_159_, 0, v___f_158_);
return v___f_159_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSRecord(lean_object* v_00_u03b1_160_, lean_object* v_inst_161_){
_start:
{
lean_object* v___x_162_; 
v___x_162_ = l_Lasm_JS_Web_instToJSRecord___redArg(v_inst_161_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSRecord___redArg___lam__0(lean_object* v_fromJS_165_, lean_object* v_x_166_){
_start:
{
lean_object* v_fst_167_; lean_object* v_snd_168_; lean_object* v___x_170_; uint8_t v_isShared_171_; uint8_t v_isSharedCheck_197_; 
v_fst_167_ = lean_ctor_get(v_x_166_, 0);
v_snd_168_ = lean_ctor_get(v_x_166_, 1);
v_isSharedCheck_197_ = !lean_is_exclusive(v_x_166_);
if (v_isSharedCheck_197_ == 0)
{
v___x_170_ = v_x_166_;
v_isShared_171_ = v_isSharedCheck_197_;
goto v_resetjp_169_;
}
else
{
lean_inc(v_snd_168_);
lean_inc(v_fst_167_);
lean_dec(v_x_166_);
v___x_170_ = lean_box(0);
v_isShared_171_ = v_isSharedCheck_197_;
goto v_resetjp_169_;
}
v_resetjp_169_:
{
lean_object* v___x_172_; 
v___x_172_ = lean_apply_1(v_fromJS_165_, v_snd_168_);
if (lean_obj_tag(v___x_172_) == 0)
{
lean_object* v_a_173_; lean_object* v___x_175_; uint8_t v_isShared_176_; uint8_t v_isSharedCheck_185_; 
lean_del_object(v___x_170_);
v_a_173_ = lean_ctor_get(v___x_172_, 0);
v_isSharedCheck_185_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_185_ == 0)
{
v___x_175_ = v___x_172_;
v_isShared_176_ = v_isSharedCheck_185_;
goto v_resetjp_174_;
}
else
{
lean_inc(v_a_173_);
lean_dec(v___x_172_);
v___x_175_ = lean_box(0);
v_isShared_176_ = v_isSharedCheck_185_;
goto v_resetjp_174_;
}
v_resetjp_174_:
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_183_; 
v___x_177_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__0___closed__0));
v___x_178_ = lean_string_append(v___x_177_, v_fst_167_);
lean_dec(v_fst_167_);
v___x_179_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__0___closed__1));
v___x_180_ = lean_string_append(v___x_178_, v___x_179_);
v___x_181_ = lean_string_append(v___x_180_, v_a_173_);
lean_dec(v_a_173_);
if (v_isShared_176_ == 0)
{
lean_ctor_set(v___x_175_, 0, v___x_181_);
v___x_183_ = v___x_175_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v___x_181_);
v___x_183_ = v_reuseFailAlloc_184_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
return v___x_183_;
}
}
}
else
{
lean_object* v_a_186_; lean_object* v___x_188_; uint8_t v_isShared_189_; uint8_t v_isSharedCheck_196_; 
v_a_186_ = lean_ctor_get(v___x_172_, 0);
v_isSharedCheck_196_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_196_ == 0)
{
v___x_188_ = v___x_172_;
v_isShared_189_ = v_isSharedCheck_196_;
goto v_resetjp_187_;
}
else
{
lean_inc(v_a_186_);
lean_dec(v___x_172_);
v___x_188_ = lean_box(0);
v_isShared_189_ = v_isSharedCheck_196_;
goto v_resetjp_187_;
}
v_resetjp_187_:
{
lean_object* v___x_191_; 
if (v_isShared_171_ == 0)
{
lean_ctor_set(v___x_170_, 1, v_a_186_);
v___x_191_ = v___x_170_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v_fst_167_);
lean_ctor_set(v_reuseFailAlloc_195_, 1, v_a_186_);
v___x_191_ = v_reuseFailAlloc_195_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
lean_object* v___x_193_; 
if (v_isShared_189_ == 0)
{
lean_ctor_set(v___x_188_, 0, v___x_191_);
v___x_193_ = v___x_188_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v___x_191_);
v___x_193_ = v_reuseFailAlloc_194_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
return v___x_193_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1(lean_object* v___x_201_, lean_object* v___f_202_, lean_object* v_x_203_){
_start:
{
if (lean_obj_tag(v_x_203_) == 8)
{
lean_object* v_fields_204_; size_t v_sz_205_; size_t v___x_206_; lean_object* v___x_207_; 
v_fields_204_ = lean_ctor_get(v_x_203_, 0);
lean_inc_ref(v_fields_204_);
lean_dec_ref_known(v_x_203_, 1);
v_sz_205_ = lean_array_size(v_fields_204_);
v___x_206_ = ((size_t)0ULL);
v___x_207_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_201_, v___f_202_, v_sz_205_, v___x_206_, v_fields_204_);
if (lean_obj_tag(v___x_207_) == 0)
{
lean_object* v_a_208_; lean_object* v___x_210_; uint8_t v_isShared_211_; uint8_t v_isSharedCheck_215_; 
v_a_208_ = lean_ctor_get(v___x_207_, 0);
v_isSharedCheck_215_ = !lean_is_exclusive(v___x_207_);
if (v_isSharedCheck_215_ == 0)
{
v___x_210_ = v___x_207_;
v_isShared_211_ = v_isSharedCheck_215_;
goto v_resetjp_209_;
}
else
{
lean_inc(v_a_208_);
lean_dec(v___x_207_);
v___x_210_ = lean_box(0);
v_isShared_211_ = v_isSharedCheck_215_;
goto v_resetjp_209_;
}
v_resetjp_209_:
{
lean_object* v___x_213_; 
if (v_isShared_211_ == 0)
{
v___x_213_ = v___x_210_;
goto v_reusejp_212_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v_a_208_);
v___x_213_ = v_reuseFailAlloc_214_;
goto v_reusejp_212_;
}
v_reusejp_212_:
{
return v___x_213_;
}
}
}
else
{
lean_object* v_a_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_223_; 
v_a_216_ = lean_ctor_get(v___x_207_, 0);
v_isSharedCheck_223_ = !lean_is_exclusive(v___x_207_);
if (v_isSharedCheck_223_ == 0)
{
v___x_218_ = v___x_207_;
v_isShared_219_ = v_isSharedCheck_223_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_a_216_);
lean_dec(v___x_207_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_223_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
lean_object* v___x_221_; 
if (v_isShared_219_ == 0)
{
v___x_221_ = v___x_218_;
goto v_reusejp_220_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v_a_216_);
v___x_221_ = v_reuseFailAlloc_222_;
goto v_reusejp_220_;
}
v_reusejp_220_:
{
return v___x_221_;
}
}
}
}
else
{
lean_object* v___x_224_; 
lean_dec(v_x_203_);
lean_dec_ref(v___f_202_);
lean_dec_ref(v___x_201_);
v___x_224_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__1));
return v___x_224_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSRecord___redArg(lean_object* v_inst_246_){
_start:
{
lean_object* v___x_247_; lean_object* v_fromJS_248_; lean_object* v_typeName_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_263_; 
v___x_247_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___closed__9));
v_fromJS_248_ = lean_ctor_get(v_inst_246_, 0);
v_typeName_249_ = lean_ctor_get(v_inst_246_, 1);
v_isSharedCheck_263_ = !lean_is_exclusive(v_inst_246_);
if (v_isSharedCheck_263_ == 0)
{
v___x_251_ = v_inst_246_;
v_isShared_252_ = v_isSharedCheck_263_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_typeName_249_);
lean_inc(v_fromJS_248_);
lean_dec(v_inst_246_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_263_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v___f_253_; lean_object* v___f_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; uint8_t v___x_259_; lean_object* v___x_261_; 
v___f_253_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__0), 2, 1);
lean_closure_set(v___f_253_, 0, v_fromJS_248_);
v___f_254_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1), 3, 2);
lean_closure_set(v___f_254_, 0, v___x_247_);
lean_closure_set(v___f_254_, 1, v___f_253_);
v___x_255_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___closed__10));
v___x_256_ = lean_string_append(v___x_255_, v_typeName_249_);
lean_dec_ref(v_typeName_249_);
v___x_257_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___closed__11));
v___x_258_ = lean_string_append(v___x_256_, v___x_257_);
v___x_259_ = 0;
if (v_isShared_252_ == 0)
{
lean_ctor_set(v___x_251_, 1, v___x_258_);
lean_ctor_set(v___x_251_, 0, v___f_254_);
v___x_261_ = v___x_251_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v___f_254_);
lean_ctor_set(v_reuseFailAlloc_262_, 1, v___x_258_);
v___x_261_ = v_reuseFailAlloc_262_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
lean_ctor_set_uint8(v___x_261_, sizeof(void*)*2, v___x_259_);
return v___x_261_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSRecord(lean_object* v_00_u03b1_264_, lean_object* v_inst_265_){
_start:
{
lean_object* v___x_266_; 
v___x_266_ = l_Lasm_JS_Web_instFromJSRecord___redArg(v_inst_265_);
return v___x_266_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object* v_inst_267_, lean_object* v_x_268_){
_start:
{
if (lean_obj_tag(v_x_268_) == 0)
{
lean_object* v___x_269_; 
lean_dec_ref(v_inst_267_);
v___x_269_ = lean_box(0);
return v___x_269_;
}
else
{
lean_object* v_val_270_; lean_object* v___x_271_; 
v_val_270_ = lean_ctor_get(v_x_268_, 0);
lean_inc(v_val_270_);
lean_dec_ref_known(v_x_268_, 1);
v___x_271_ = lean_apply_1(v_inst_267_, v_val_270_);
return v___x_271_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional(lean_object* v_00_u03b1_272_, lean_object* v_inst_273_, lean_object* v_x_274_){
_start:
{
lean_object* v___x_275_; 
v___x_275_ = l_Lasm_JS_Web_Support_optional___redArg(v_inst_273_, v_x_274_);
return v___x_275_;
}
}
LEAN_EXPORT lean_object* l_List_dropWhile___at___00Lasm_JS_Web_Support_args_spec__0(lean_object* v_x_276_){
_start:
{
if (lean_obj_tag(v_x_276_) == 0)
{
return v_x_276_;
}
else
{
lean_object* v_head_277_; 
v_head_277_ = lean_ctor_get(v_x_276_, 0);
if (lean_obj_tag(v_head_277_) == 0)
{
lean_object* v_tail_278_; 
v_tail_278_ = lean_ctor_get(v_x_276_, 1);
v_x_276_ = v_tail_278_;
goto _start;
}
else
{
lean_inc_ref(v_x_276_);
return v_x_276_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_dropWhile___at___00Lasm_JS_Web_Support_args_spec__0___boxed(lean_object* v_x_280_){
_start:
{
lean_object* v_res_281_; 
v_res_281_ = l_List_dropWhile___at___00Lasm_JS_Web_Support_args_spec__0(v_x_280_);
lean_dec(v_x_280_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_args(lean_object* v_xs_282_){
_start:
{
lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v_n_286_; lean_object* v___x_287_; lean_object* v___x_288_; 
lean_inc_ref(v_xs_282_);
v___x_283_ = lean_array_to_list(v_xs_282_);
v___x_284_ = l_List_reverse___redArg(v___x_283_);
v___x_285_ = l_List_dropWhile___at___00Lasm_JS_Web_Support_args_spec__0(v___x_284_);
lean_dec(v___x_284_);
v_n_286_ = l_List_lengthTR___redArg(v___x_285_);
lean_dec(v___x_285_);
v___x_287_ = lean_unsigned_to_nat(0u);
v___x_288_ = l_Array_extract___redArg(v_xs_282_, v___x_287_, v_n_286_);
lean_dec_ref(v_xs_282_);
return v___x_288_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_argsWith(lean_object* v_fixed_289_, lean_object* v_rest_290_){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; uint8_t v___x_293_; 
v___x_291_ = lean_array_get_size(v_rest_290_);
v___x_292_ = lean_unsigned_to_nat(0u);
v___x_293_ = lean_nat_dec_eq(v___x_291_, v___x_292_);
if (v___x_293_ == 0)
{
lean_object* v___x_294_; 
v___x_294_ = l_Array_append___redArg(v_fixed_289_, v_rest_290_);
return v___x_294_;
}
else
{
lean_object* v___x_295_; 
v___x_295_ = l_Lasm_JS_Web_Support_args(v_fixed_289_);
return v___x_295_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_argsWith___boxed(lean_object* v_fixed_296_, lean_object* v_rest_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = l_Lasm_JS_Web_Support_argsWith(v_fixed_296_, v_rest_297_);
lean_dec_ref(v_rest_297_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Web_Support_fields_spec__0(lean_object* v_as_299_, size_t v_i_300_, size_t v_stop_301_, lean_object* v_b_302_){
_start:
{
lean_object* v___y_304_; uint8_t v___x_308_; 
v___x_308_ = lean_usize_dec_eq(v_i_300_, v_stop_301_);
if (v___x_308_ == 0)
{
lean_object* v___x_309_; lean_object* v_snd_310_; 
v___x_309_ = lean_array_uget_borrowed(v_as_299_, v_i_300_);
v_snd_310_ = lean_ctor_get(v___x_309_, 1);
if (lean_obj_tag(v_snd_310_) == 0)
{
v___y_304_ = v_b_302_;
goto v___jp_303_;
}
else
{
lean_object* v___x_311_; 
lean_inc(v___x_309_);
v___x_311_ = lean_array_push(v_b_302_, v___x_309_);
v___y_304_ = v___x_311_;
goto v___jp_303_;
}
}
else
{
return v_b_302_;
}
v___jp_303_:
{
size_t v___x_305_; size_t v___x_306_; 
v___x_305_ = ((size_t)1ULL);
v___x_306_ = lean_usize_add(v_i_300_, v___x_305_);
v_i_300_ = v___x_306_;
v_b_302_ = v___y_304_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Web_Support_fields_spec__0___boxed(lean_object* v_as_312_, lean_object* v_i_313_, lean_object* v_stop_314_, lean_object* v_b_315_){
_start:
{
size_t v_i_boxed_316_; size_t v_stop_boxed_317_; lean_object* v_res_318_; 
v_i_boxed_316_ = lean_unbox_usize(v_i_313_);
lean_dec(v_i_313_);
v_stop_boxed_317_ = lean_unbox_usize(v_stop_314_);
lean_dec(v_stop_314_);
v_res_318_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Web_Support_fields_spec__0(v_as_312_, v_i_boxed_316_, v_stop_boxed_317_, v_b_315_);
lean_dec_ref(v_as_312_);
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_fields(lean_object* v_fs_323_){
_start:
{
lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; uint8_t v___x_327_; 
v___x_324_ = lean_unsigned_to_nat(0u);
v___x_325_ = lean_array_get_size(v_fs_323_);
v___x_326_ = ((lean_object*)(l_Lasm_JS_Web_Support_fields___closed__0));
v___x_327_ = lean_nat_dec_lt(v___x_324_, v___x_325_);
if (v___x_327_ == 0)
{
lean_object* v___x_328_; 
v___x_328_ = ((lean_object*)(l_Lasm_JS_Web_Support_fields___closed__1));
return v___x_328_;
}
else
{
uint8_t v___x_329_; 
v___x_329_ = lean_nat_dec_le(v___x_325_, v___x_325_);
if (v___x_329_ == 0)
{
if (v___x_327_ == 0)
{
lean_object* v___x_330_; 
v___x_330_ = ((lean_object*)(l_Lasm_JS_Web_Support_fields___closed__1));
return v___x_330_;
}
else
{
size_t v___x_331_; size_t v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_331_ = ((size_t)0ULL);
v___x_332_ = lean_usize_of_nat(v___x_325_);
v___x_333_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Web_Support_fields_spec__0(v_fs_323_, v___x_331_, v___x_332_, v___x_326_);
v___x_334_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
return v___x_334_;
}
}
else
{
size_t v___x_335_; size_t v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_335_ = ((size_t)0ULL);
v___x_336_ = lean_usize_of_nat(v___x_325_);
v___x_337_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Web_Support_fields_spec__0(v_fs_323_, v___x_335_, v___x_336_, v___x_326_);
v___x_338_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_338_, 0, v___x_337_);
return v___x_338_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_fields___boxed(lean_object* v_fs_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l_Lasm_JS_Web_Support_fields(v_fs_339_);
lean_dec_ref(v_fs_339_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___redArg(lean_object* v_inst_342_, lean_object* v_args_343_, lean_object* v_i_344_){
_start:
{
lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; uint8_t v___x_352_; 
v___x_346_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___redArg___closed__0));
v___x_347_ = lean_unsigned_to_nat(1u);
v___x_348_ = lean_nat_add(v_i_344_, v___x_347_);
v___x_349_ = l_Nat_reprFast(v___x_348_);
v___x_350_ = lean_string_append(v___x_346_, v___x_349_);
lean_dec_ref(v___x_349_);
v___x_351_ = lean_array_get_size(v_args_343_);
v___x_352_ = lean_nat_dec_lt(v_i_344_, v___x_351_);
if (v___x_352_ == 0)
{
lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_353_ = lean_box(0);
v___x_354_ = l_Lasm_JS_decodeAs___redArg(v_inst_342_, v___x_350_, v___x_353_);
lean_dec_ref(v___x_350_);
return v___x_354_;
}
else
{
lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_355_ = lean_array_fget_borrowed(v_args_343_, v_i_344_);
lean_inc(v___x_355_);
v___x_356_ = l_Lasm_JS_decodeAs___redArg(v_inst_342_, v___x_350_, v___x_355_);
lean_dec_ref(v___x_350_);
return v___x_356_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___redArg___boxed(lean_object* v_inst_357_, lean_object* v_args_358_, lean_object* v_i_359_, lean_object* v_a_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l_Lasm_JS_Web_Support_arg___redArg(v_inst_357_, v_args_358_, v_i_359_);
lean_dec(v_i_359_);
lean_dec_ref(v_args_358_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg(lean_object* v_00_u03b1_362_, lean_object* v_inst_363_, lean_object* v_args_364_, lean_object* v_i_365_){
_start:
{
lean_object* v___x_367_; 
v___x_367_ = l_Lasm_JS_Web_Support_arg___redArg(v_inst_363_, v_args_364_, v_i_365_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___boxed(lean_object* v_00_u03b1_368_, lean_object* v_inst_369_, lean_object* v_args_370_, lean_object* v_i_371_, lean_object* v_a_372_){
_start:
{
lean_object* v_res_373_; 
v_res_373_ = l_Lasm_JS_Web_Support_arg(v_00_u03b1_368_, v_inst_369_, v_args_370_, v_i_371_);
lean_dec(v_i_371_);
lean_dec_ref(v_args_370_);
return v_res_373_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_378_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___x_379_ = lean_string_utf8_byte_size(v___x_378_);
return v___x_379_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_380_; lean_object* v___x_381_; uint8_t v___x_382_; 
v___x_380_ = lean_unsigned_to_nat(0u);
v___x_381_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__4);
v___x_382_ = lean_nat_dec_eq(v___x_381_, v___x_380_);
return v___x_382_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__10(void){
_start:
{
lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_387_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__9));
v___x_388_ = lean_unsigned_to_nat(46u);
v___x_389_ = lean_unsigned_to_nat(193u);
v___x_390_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__8));
v___x_391_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__7));
v___x_392_ = l_mkPanicMessageWithDecl(v___x_391_, v___x_390_, v___x_389_, v___x_388_, v___x_387_);
return v___x_392_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0(lean_object* v_context_394_, lean_object* v_d_395_){
_start:
{
lean_object* v___y_398_; lean_object* v___y_399_; 
if (lean_obj_tag(v_d_395_) == 6)
{
lean_object* v_b_403_; lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_410_; 
v_b_403_ = lean_ctor_get(v_d_395_, 0);
v_isSharedCheck_410_ = !lean_is_exclusive(v_d_395_);
if (v_isSharedCheck_410_ == 0)
{
v___x_405_ = v_d_395_;
v_isShared_406_ = v_isSharedCheck_410_;
goto v_resetjp_404_;
}
else
{
lean_inc(v_b_403_);
lean_dec(v_d_395_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_410_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
lean_object* v___x_408_; 
if (v_isShared_406_ == 0)
{
lean_ctor_set_tag(v___x_405_, 0);
v___x_408_ = v___x_405_;
goto v_reusejp_407_;
}
else
{
lean_object* v_reuseFailAlloc_409_; 
v_reuseFailAlloc_409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_409_, 0, v_b_403_);
v___x_408_ = v_reuseFailAlloc_409_;
goto v_reusejp_407_;
}
v_reusejp_407_:
{
return v___x_408_;
}
}
}
else
{
lean_object* v___x_411_; lean_object* v_received_413_; 
v___x_411_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
if (lean_obj_tag(v_d_395_) == 9)
{
lean_object* v_value_427_; lean_object* v_description_428_; uint8_t v___x_429_; 
v_value_427_ = lean_ctor_get(v_d_395_, 0);
v_description_428_ = lean_ctor_get(v_d_395_, 1);
v___x_429_ = lean_string_dec_eq(v_description_428_, v___x_411_);
if (v___x_429_ == 0)
{
goto v___jp_425_;
}
else
{
uint32_t v___x_430_; uint64_t v___x_431_; lean_object* v___x_432_; uint32_t v___x_433_; lean_object* v___x_434_; 
lean_inc_n(v_value_427_, 2);
lean_dec_ref_known(v_d_395_, 2);
v___x_430_ = 206;
v___x_431_ = 0ULL;
v___x_432_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_432_, 0, v_value_427_);
lean_ctor_set(v___x_432_, 1, v___x_411_);
v___x_433_ = lasm_js_value_handle(v_value_427_);
lean_dec(v_value_427_);
v___x_434_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_430_, v___x_431_, v___x_432_, v___x_433_);
lean_dec_ref_known(v___x_432_, 2);
if (lean_obj_tag(v___x_434_) == 0)
{
lean_object* v_a_435_; uint8_t v___x_436_; 
v_a_435_ = lean_ctor_get(v___x_434_, 0);
lean_inc(v_a_435_);
lean_dec_ref_known(v___x_434_, 1);
v___x_436_ = lean_string_validate_utf8(v_a_435_);
if (v___x_436_ == 0)
{
lean_object* v___x_437_; lean_object* v___x_438_; 
lean_dec(v_a_435_);
v___x_437_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__10, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__10);
v___x_438_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_437_);
v_received_413_ = v___x_438_;
goto v___jp_412_;
}
else
{
lean_object* v___x_439_; 
v___x_439_ = lean_string_from_utf8_unchecked(v_a_435_);
v_received_413_ = v___x_439_;
goto v___jp_412_;
}
}
else
{
lean_object* v___x_440_; 
lean_dec_ref_known(v___x_434_, 1);
v___x_440_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__11));
v_received_413_ = v___x_440_;
goto v___jp_412_;
}
}
}
else
{
goto v___jp_425_;
}
v___jp_412_:
{
lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; uint8_t v___x_423_; 
v___x_414_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__0));
v___x_415_ = lean_string_append(v___x_414_, v_context_394_);
v___x_416_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__1));
v___x_417_ = lean_string_append(v___x_415_, v___x_416_);
v___x_418_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__2));
v___x_419_ = lean_string_append(v___x_417_, v___x_418_);
v___x_420_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__3));
v___x_421_ = lean_string_append(v___x_419_, v___x_420_);
v___x_422_ = lean_string_append(v___x_421_, v_received_413_);
lean_dec_ref(v_received_413_);
v___x_423_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__5, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__5);
if (v___x_423_ == 0)
{
lean_object* v___x_424_; 
v___x_424_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__6));
v___y_398_ = v___x_422_;
v___y_399_ = v___x_424_;
goto v___jp_397_;
}
else
{
v___y_398_ = v___x_422_;
v___y_399_ = v___x_411_;
goto v___jp_397_;
}
}
v___jp_425_:
{
lean_object* v___x_426_; 
v___x_426_ = l_Lasm_JS_Data_describe(v_d_395_);
v_received_413_ = v___x_426_;
goto v___jp_412_;
}
}
v___jp_397_:
{
lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_400_ = lean_string_append(v___y_398_, v___y_399_);
v___x_401_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_401_, 0, v___x_400_);
v___x_402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_402_, 0, v___x_401_);
return v___x_402_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___boxed(lean_object* v_context_441_, lean_object* v_d_442_, lean_object* v_a_443_){
_start:
{
lean_object* v_res_444_; 
v_res_444_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0(v_context_441_, v_d_442_);
lean_dec_ref(v_context_441_);
return v_res_444_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0___closed__0(void){
_start:
{
uint8_t v___x_445_; uint64_t v___x_446_; 
v___x_445_ = 0;
v___x_446_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_445_);
return v___x_446_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(lean_object* v_b_447_, lean_object* v_args_448_, uint8_t v_await_449_){
_start:
{
uint64_t v___y_452_; uint64_t v___y_453_; uint64_t v___x_488_; uint64_t v___y_490_; 
v___x_488_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0___closed__0);
if (v_await_449_ == 0)
{
uint64_t v___x_495_; 
v___x_495_ = 0ULL;
v___y_490_ = v___x_495_;
goto v___jp_489_;
}
else
{
uint64_t v___x_496_; 
v___x_496_ = 2ULL;
v___y_490_ = v___x_496_;
goto v___jp_489_;
}
v___jp_451_:
{
uint64_t v_flags_454_; uint32_t v___x_455_; lean_object* v___x_456_; uint32_t v___x_457_; lean_object* v___x_458_; 
v_flags_454_ = lean_uint64_lor(v___y_452_, v___y_453_);
v___x_455_ = 214;
v___x_456_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_447_, v_args_448_);
v___x_457_ = 0;
v___x_458_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_455_, v_flags_454_, v___x_456_, v___x_457_);
lean_dec(v___x_456_);
if (lean_obj_tag(v___x_458_) == 0)
{
if (lean_obj_tag(v___x_458_) == 0)
{
lean_object* v_a_459_; lean_object* v___x_460_; 
v_a_459_ = lean_ctor_get(v___x_458_, 0);
lean_inc(v_a_459_);
lean_dec_ref_known(v___x_458_, 1);
v___x_460_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_459_);
lean_dec(v_a_459_);
if (lean_obj_tag(v___x_460_) == 0)
{
lean_object* v_a_461_; lean_object* v___x_462_; lean_object* v___x_463_; 
v_a_461_ = lean_ctor_get(v___x_460_, 0);
lean_inc(v_a_461_);
lean_dec_ref_known(v___x_460_, 1);
v___x_462_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_447_);
v___x_463_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0(v___x_462_, v_a_461_);
lean_dec_ref(v___x_462_);
return v___x_463_;
}
else
{
lean_object* v_a_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_471_; 
v_a_464_ = lean_ctor_get(v___x_460_, 0);
v_isSharedCheck_471_ = !lean_is_exclusive(v___x_460_);
if (v_isSharedCheck_471_ == 0)
{
v___x_466_ = v___x_460_;
v_isShared_467_ = v_isSharedCheck_471_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_a_464_);
lean_dec(v___x_460_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_471_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
lean_object* v___x_469_; 
if (v_isShared_467_ == 0)
{
v___x_469_ = v___x_466_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v_a_464_);
v___x_469_ = v_reuseFailAlloc_470_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
return v___x_469_;
}
}
}
}
else
{
return v___x_458_;
}
}
else
{
lean_object* v_a_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_487_; 
v_a_472_ = lean_ctor_get(v___x_458_, 0);
v_isSharedCheck_487_ = !lean_is_exclusive(v___x_458_);
if (v_isSharedCheck_487_ == 0)
{
v___x_474_ = v___x_458_;
v_isShared_475_ = v_isSharedCheck_487_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_a_472_);
lean_dec(v___x_458_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_487_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_485_; 
v___x_476_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__0));
v___x_477_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_447_);
v___x_478_ = lean_string_append(v___x_476_, v___x_477_);
lean_dec_ref(v___x_477_);
v___x_479_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__0___closed__1));
v___x_480_ = lean_string_append(v___x_478_, v___x_479_);
v___x_481_ = lean_io_error_to_string(v_a_472_);
v___x_482_ = lean_string_append(v___x_480_, v___x_481_);
lean_dec_ref(v___x_481_);
v___x_483_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_483_, 0, v___x_482_);
if (v_isShared_475_ == 0)
{
lean_ctor_set(v___x_474_, 0, v___x_483_);
v___x_485_ = v___x_474_;
goto v_reusejp_484_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v___x_483_);
v___x_485_ = v_reuseFailAlloc_486_;
goto v_reusejp_484_;
}
v_reusejp_484_:
{
return v___x_485_;
}
}
}
}
v___jp_489_:
{
uint8_t v_construct_491_; uint64_t v___x_492_; 
v_construct_491_ = lean_ctor_get_uint8(v_b_447_, sizeof(void*)*4);
v___x_492_ = lean_uint64_lor(v___x_488_, v___y_490_);
if (v_construct_491_ == 0)
{
uint64_t v___x_493_; 
v___x_493_ = 0ULL;
v___y_452_ = v___x_492_;
v___y_453_ = v___x_493_;
goto v___jp_451_;
}
else
{
uint64_t v___x_494_; 
v___x_494_ = 4ULL;
v___y_452_ = v___x_492_;
v___y_453_ = v___x_494_;
goto v___jp_451_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0___boxed(lean_object* v_b_497_, lean_object* v_args_498_, lean_object* v_await_499_, lean_object* v_a_500_){
_start:
{
uint8_t v_await_boxed_501_; lean_object* v_res_502_; 
v_await_boxed_501_ = lean_unbox(v_await_499_);
v_res_502_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v_b_497_, v_args_498_, v_await_boxed_501_);
lean_dec_ref(v_b_497_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arrayBufferBytes(lean_object* v_buffer_512_){
_start:
{
lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; uint8_t v___x_520_; lean_object* v___x_521_; 
v___x_514_ = lean_unsigned_to_nat(1u);
v___x_515_ = ((lean_object*)(l_Lasm_JS_Web_Support_arrayBufferBytes___closed__3));
v___x_516_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___x_517_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_517_, 0, v_buffer_512_);
lean_ctor_set(v___x_517_, 1, v___x_516_);
v___x_518_ = lean_mk_empty_array_with_capacity(v___x_514_);
v___x_519_ = lean_array_push(v___x_518_, v___x_517_);
v___x_520_ = 0;
v___x_521_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_515_, v___x_519_, v___x_520_);
return v___x_521_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arrayBufferBytes___boxed(lean_object* v_buffer_522_, lean_object* v_a_523_){
_start:
{
lean_object* v_res_524_; 
v_res_524_ = l_Lasm_JS_Web_Support_arrayBufferBytes(v_buffer_522_);
return v_res_524_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__0(void){
_start:
{
uint8_t v___x_525_; uint64_t v___x_526_; 
v___x_525_ = 1;
v___x_526_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_525_);
return v___x_526_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object* v_o_528_, lean_object* v_key_529_){
_start:
{
lean_object* v_k_531_; lean_object* v___x_532_; 
v_k_531_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_531_, 0, v_key_529_);
v___x_532_ = l_Lasm_JS_Wire_encodeIO(v_k_531_);
if (lean_obj_tag(v___x_532_) == 0)
{
lean_object* v_a_533_; uint32_t v___x_534_; uint32_t v___x_535_; uint64_t v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; 
v_a_533_ = lean_ctor_get(v___x_532_, 0);
lean_inc(v_a_533_);
lean_dec_ref_known(v___x_532_, 1);
v___x_534_ = 203;
v___x_535_ = lasm_js_value_handle(v_o_528_);
v___x_536_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__0);
v___x_537_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___x_538_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_538_, 0, v_o_528_);
lean_ctor_set(v___x_538_, 1, v___x_537_);
v___x_539_ = lean_unsigned_to_nat(2u);
v___x_540_ = lean_mk_empty_array_with_capacity(v___x_539_);
lean_inc_ref(v_k_531_);
v___x_541_ = lean_array_push(v___x_540_, v_k_531_);
v___x_542_ = lean_array_push(v___x_541_, v___x_538_);
v___x_543_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_543_, 0, v___x_542_);
v___x_544_ = lasm_js_call(v___x_534_, v___x_535_, v___x_536_, v_a_533_, v___x_543_);
lean_dec_ref_known(v___x_543_, 1);
lean_dec(v_a_533_);
if (lean_obj_tag(v___x_544_) == 0)
{
lean_object* v_a_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
v_a_545_ = lean_ctor_get(v___x_544_, 0);
lean_inc(v_a_545_);
lean_dec_ref_known(v___x_544_, 1);
v___x_546_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__1));
v___x_547_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_531_);
v___x_548_ = lean_string_append(v___x_546_, v___x_547_);
lean_dec_ref(v___x_547_);
v___x_549_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_548_, v_a_545_);
lean_dec(v_a_545_);
lean_dec_ref(v___x_548_);
return v___x_549_;
}
else
{
lean_object* v_a_550_; lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_557_; 
lean_dec_ref_known(v_k_531_, 1);
v_a_550_ = lean_ctor_get(v___x_544_, 0);
v_isSharedCheck_557_ = !lean_is_exclusive(v___x_544_);
if (v_isSharedCheck_557_ == 0)
{
v___x_552_ = v___x_544_;
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
else
{
lean_inc(v_a_550_);
lean_dec(v___x_544_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
lean_object* v___x_555_; 
if (v_isShared_553_ == 0)
{
v___x_555_ = v___x_552_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_556_, 0, v_a_550_);
v___x_555_ = v_reuseFailAlloc_556_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
return v___x_555_;
}
}
}
}
else
{
lean_object* v_a_558_; lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_565_; 
lean_dec_ref_known(v_k_531_, 1);
lean_dec(v_o_528_);
v_a_558_ = lean_ctor_get(v___x_532_, 0);
v_isSharedCheck_565_ = !lean_is_exclusive(v___x_532_);
if (v_isSharedCheck_565_ == 0)
{
v___x_560_ = v___x_532_;
v_isShared_561_ = v_isSharedCheck_565_;
goto v_resetjp_559_;
}
else
{
lean_inc(v_a_558_);
lean_dec(v___x_532_);
v___x_560_ = lean_box(0);
v_isShared_561_ = v_isSharedCheck_565_;
goto v_resetjp_559_;
}
v_resetjp_559_:
{
lean_object* v___x_563_; 
if (v_isShared_561_ == 0)
{
v___x_563_ = v___x_560_;
goto v_reusejp_562_;
}
else
{
lean_object* v_reuseFailAlloc_564_; 
v_reuseFailAlloc_564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_564_, 0, v_a_558_);
v___x_563_ = v_reuseFailAlloc_564_;
goto v_reusejp_562_;
}
v_reusejp_562_:
{
return v___x_563_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___boxed(lean_object* v_o_566_, lean_object* v_key_567_, lean_object* v_a_568_){
_start:
{
lean_object* v_res_569_; 
v_res_569_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_566_, v_key_567_);
return v_res_569_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__2(void){
_start:
{
lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_572_ = lean_unsigned_to_nat(0u);
v___x_573_ = lean_nat_to_int(v___x_572_);
return v___x_573_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2(lean_object* v_context_576_, lean_object* v_d_577_){
_start:
{
lean_object* v___y_580_; lean_object* v___y_581_; lean_object* v___y_586_; lean_object* v_received_587_; lean_object* v___y_606_; lean_object* v_a_609_; lean_object* v_a_634_; 
switch(lean_obj_tag(v_d_577_))
{
case 3:
{
double v_n_640_; lean_object* v___x_641_; 
v_n_640_ = lean_ctor_get_float(v_d_577_, 0);
v___x_641_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_640_);
if (lean_obj_tag(v___x_641_) == 0)
{
lean_object* v___x_642_; 
v___x_642_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__4));
v_a_609_ = v___x_642_;
goto v___jp_608_;
}
else
{
lean_object* v_val_643_; 
v_val_643_ = lean_ctor_get(v___x_641_, 0);
lean_inc(v_val_643_);
lean_dec_ref_known(v___x_641_, 1);
v_a_634_ = v_val_643_;
goto v___jp_633_;
}
}
case 5:
{
lean_object* v_i_644_; 
v_i_644_ = lean_ctor_get(v_d_577_, 0);
lean_inc(v_i_644_);
v_a_634_ = v_i_644_;
goto v___jp_633_;
}
default: 
{
lean_object* v___x_645_; 
v___x_645_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v_a_609_ = v___x_645_;
goto v___jp_608_;
}
}
v___jp_579_:
{
lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; 
v___x_582_ = lean_string_append(v___y_580_, v___y_581_);
lean_dec_ref(v___y_581_);
v___x_583_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_583_, 0, v___x_582_);
v___x_584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_584_, 0, v___x_583_);
return v___x_584_;
}
v___jp_585_:
{
lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; uint8_t v___x_599_; 
v___x_588_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__0));
v___x_589_ = lean_string_append(v___x_588_, v_context_576_);
v___x_590_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__1));
v___x_591_ = lean_string_append(v___x_589_, v___x_590_);
v___x_592_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__0));
v___x_593_ = lean_string_append(v___x_591_, v___x_592_);
v___x_594_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__3));
v___x_595_ = lean_string_append(v___x_593_, v___x_594_);
v___x_596_ = lean_string_append(v___x_595_, v_received_587_);
lean_dec_ref(v_received_587_);
v___x_597_ = lean_string_utf8_byte_size(v___y_586_);
v___x_598_ = lean_unsigned_to_nat(0u);
v___x_599_ = lean_nat_dec_eq(v___x_597_, v___x_598_);
if (v___x_599_ == 0)
{
lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_600_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__1));
v___x_601_ = lean_string_append(v___x_600_, v___y_586_);
v___x_602_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___closed__11));
v___x_603_ = lean_string_append(v___x_601_, v___x_602_);
v___y_580_ = v___x_596_;
v___y_581_ = v___x_603_;
goto v___jp_579_;
}
else
{
lean_object* v___x_604_; 
v___x_604_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___y_580_ = v___x_596_;
v___y_581_ = v___x_604_;
goto v___jp_579_;
}
}
v___jp_605_:
{
lean_object* v___x_607_; 
v___x_607_ = l_Lasm_JS_Data_describe(v_d_577_);
v___y_586_ = v___y_606_;
v_received_587_ = v___x_607_;
goto v___jp_585_;
}
v___jp_608_:
{
if (lean_obj_tag(v_d_577_) == 9)
{
lean_object* v_value_610_; lean_object* v_description_611_; lean_object* v___x_612_; uint8_t v___x_613_; 
v_value_610_ = lean_ctor_get(v_d_577_, 0);
v_description_611_ = lean_ctor_get(v_d_577_, 1);
v___x_612_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___x_613_ = lean_string_dec_eq(v_description_611_, v___x_612_);
if (v___x_613_ == 0)
{
v___y_606_ = v_a_609_;
goto v___jp_605_;
}
else
{
lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_630_; 
lean_inc(v_value_610_);
v_isSharedCheck_630_ = !lean_is_exclusive(v_d_577_);
if (v_isSharedCheck_630_ == 0)
{
lean_object* v_unused_631_; lean_object* v_unused_632_; 
v_unused_631_ = lean_ctor_get(v_d_577_, 1);
lean_dec(v_unused_631_);
v_unused_632_ = lean_ctor_get(v_d_577_, 0);
lean_dec(v_unused_632_);
v___x_615_ = v_d_577_;
v_isShared_616_ = v_isSharedCheck_630_;
goto v_resetjp_614_;
}
else
{
lean_dec(v_d_577_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_630_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
uint32_t v___x_617_; uint64_t v___x_618_; lean_object* v___x_620_; 
v___x_617_ = 206;
v___x_618_ = 0ULL;
lean_inc(v_value_610_);
if (v_isShared_616_ == 0)
{
lean_ctor_set(v___x_615_, 1, v___x_612_);
v___x_620_ = v___x_615_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v_value_610_);
lean_ctor_set(v_reuseFailAlloc_629_, 1, v___x_612_);
v___x_620_ = v_reuseFailAlloc_629_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
uint32_t v___x_621_; lean_object* v___x_622_; 
v___x_621_ = lasm_js_value_handle(v_value_610_);
lean_dec(v_value_610_);
v___x_622_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_617_, v___x_618_, v___x_620_, v___x_621_);
lean_dec_ref(v___x_620_);
if (lean_obj_tag(v___x_622_) == 0)
{
lean_object* v_a_623_; uint8_t v___x_624_; 
v_a_623_ = lean_ctor_get(v___x_622_, 0);
lean_inc(v_a_623_);
lean_dec_ref_known(v___x_622_, 1);
v___x_624_ = lean_string_validate_utf8(v_a_623_);
if (v___x_624_ == 0)
{
lean_object* v___x_625_; lean_object* v___x_626_; 
lean_dec(v_a_623_);
v___x_625_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__10, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__10);
v___x_626_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_625_);
v___y_586_ = v_a_609_;
v_received_587_ = v___x_626_;
goto v___jp_585_;
}
else
{
lean_object* v___x_627_; 
v___x_627_ = lean_string_from_utf8_unchecked(v_a_623_);
v___y_586_ = v_a_609_;
v_received_587_ = v___x_627_;
goto v___jp_585_;
}
}
else
{
lean_object* v___x_628_; 
lean_dec_ref_known(v___x_622_, 1);
v___x_628_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__11));
v___y_586_ = v_a_609_;
v_received_587_ = v___x_628_;
goto v___jp_585_;
}
}
}
}
}
else
{
v___y_606_ = v_a_609_;
goto v___jp_605_;
}
}
v___jp_633_:
{
lean_object* v___x_635_; uint8_t v___x_636_; 
v___x_635_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__2, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__2_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__2);
v___x_636_ = lean_int_dec_le(v___x_635_, v_a_634_);
if (v___x_636_ == 0)
{
lean_object* v___x_637_; 
lean_dec(v_a_634_);
v___x_637_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__3));
v_a_609_ = v___x_637_;
goto v___jp_608_;
}
else
{
lean_object* v___x_638_; lean_object* v___x_639_; 
lean_dec(v_d_577_);
v___x_638_ = l_Int_toNat(v_a_634_);
lean_dec(v_a_634_);
v___x_639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_639_, 0, v___x_638_);
return v___x_639_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___boxed(lean_object* v_context_646_, lean_object* v_d_647_, lean_object* v_a_648_){
_start:
{
lean_object* v_res_649_; 
v_res_649_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2(v_context_646_, v_d_647_);
lean_dec_ref(v_context_646_);
return v_res_649_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1(lean_object* v_context_650_, lean_object* v_bytes_651_){
_start:
{
lean_object* v___x_653_; 
v___x_653_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_651_);
if (lean_obj_tag(v___x_653_) == 0)
{
lean_object* v_a_654_; lean_object* v___x_655_; 
v_a_654_ = lean_ctor_get(v___x_653_, 0);
lean_inc(v_a_654_);
lean_dec_ref_known(v___x_653_, 1);
v___x_655_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2(v_context_650_, v_a_654_);
return v___x_655_;
}
else
{
lean_object* v_a_656_; lean_object* v___x_658_; uint8_t v_isShared_659_; uint8_t v_isSharedCheck_663_; 
v_a_656_ = lean_ctor_get(v___x_653_, 0);
v_isSharedCheck_663_ = !lean_is_exclusive(v___x_653_);
if (v_isSharedCheck_663_ == 0)
{
v___x_658_ = v___x_653_;
v_isShared_659_ = v_isSharedCheck_663_;
goto v_resetjp_657_;
}
else
{
lean_inc(v_a_656_);
lean_dec(v___x_653_);
v___x_658_ = lean_box(0);
v_isShared_659_ = v_isSharedCheck_663_;
goto v_resetjp_657_;
}
v_resetjp_657_:
{
lean_object* v___x_661_; 
if (v_isShared_659_ == 0)
{
v___x_661_ = v___x_658_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_662_, 0, v_a_656_);
v___x_661_ = v_reuseFailAlloc_662_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
return v___x_661_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1___boxed(lean_object* v_context_664_, lean_object* v_bytes_665_, lean_object* v_a_666_){
_start:
{
lean_object* v_res_667_; 
v_res_667_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1(v_context_664_, v_bytes_665_);
lean_dec_ref(v_bytes_665_);
lean_dec_ref(v_context_664_);
return v_res_667_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(lean_object* v_o_668_, lean_object* v_key_669_){
_start:
{
lean_object* v_k_671_; lean_object* v___x_672_; 
v_k_671_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_671_, 0, v_key_669_);
v___x_672_ = l_Lasm_JS_Wire_encodeIO(v_k_671_);
if (lean_obj_tag(v___x_672_) == 0)
{
lean_object* v_a_673_; uint32_t v___x_674_; uint32_t v___x_675_; uint64_t v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; 
v_a_673_ = lean_ctor_get(v___x_672_, 0);
lean_inc(v_a_673_);
lean_dec_ref_known(v___x_672_, 1);
v___x_674_ = 203;
v___x_675_ = lasm_js_value_handle(v_o_668_);
v___x_676_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0___closed__0);
v___x_677_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___x_678_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_678_, 0, v_o_668_);
lean_ctor_set(v___x_678_, 1, v___x_677_);
v___x_679_ = lean_unsigned_to_nat(2u);
v___x_680_ = lean_mk_empty_array_with_capacity(v___x_679_);
lean_inc_ref(v_k_671_);
v___x_681_ = lean_array_push(v___x_680_, v_k_671_);
v___x_682_ = lean_array_push(v___x_681_, v___x_678_);
v___x_683_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_683_, 0, v___x_682_);
v___x_684_ = lasm_js_call(v___x_674_, v___x_675_, v___x_676_, v_a_673_, v___x_683_);
lean_dec_ref_known(v___x_683_, 1);
lean_dec(v_a_673_);
if (lean_obj_tag(v___x_684_) == 0)
{
lean_object* v_a_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; 
v_a_685_ = lean_ctor_get(v___x_684_, 0);
lean_inc(v_a_685_);
lean_dec_ref_known(v___x_684_, 1);
v___x_686_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__1));
v___x_687_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_671_);
v___x_688_ = lean_string_append(v___x_686_, v___x_687_);
lean_dec_ref(v___x_687_);
v___x_689_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1(v___x_688_, v_a_685_);
lean_dec(v_a_685_);
lean_dec_ref(v___x_688_);
return v___x_689_;
}
else
{
lean_object* v_a_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_697_; 
lean_dec_ref_known(v_k_671_, 1);
v_a_690_ = lean_ctor_get(v___x_684_, 0);
v_isSharedCheck_697_ = !lean_is_exclusive(v___x_684_);
if (v_isSharedCheck_697_ == 0)
{
v___x_692_ = v___x_684_;
v_isShared_693_ = v_isSharedCheck_697_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_a_690_);
lean_dec(v___x_684_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_697_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v___x_695_; 
if (v_isShared_693_ == 0)
{
v___x_695_ = v___x_692_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v_a_690_);
v___x_695_ = v_reuseFailAlloc_696_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
return v___x_695_;
}
}
}
}
else
{
lean_object* v_a_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_705_; 
lean_dec_ref_known(v_k_671_, 1);
lean_dec(v_o_668_);
v_a_698_ = lean_ctor_get(v___x_672_, 0);
v_isSharedCheck_705_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_705_ == 0)
{
v___x_700_ = v___x_672_;
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_a_698_);
lean_dec(v___x_672_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
lean_object* v___x_703_; 
if (v_isShared_701_ == 0)
{
v___x_703_ = v___x_700_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v_a_698_);
v___x_703_ = v_reuseFailAlloc_704_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
return v___x_703_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1___boxed(lean_object* v_o_706_, lean_object* v_key_707_, lean_object* v_a_708_){
_start:
{
lean_object* v_res_709_; 
v_res_709_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_o_706_, v_key_707_);
return v_res_709_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_viewBytes(lean_object* v_x_721_){
_start:
{
switch(lean_obj_tag(v_x_721_))
{
case 6:
{
lean_object* v_b_723_; lean_object* v___x_724_; 
v_b_723_ = lean_ctor_get(v_x_721_, 0);
lean_inc_ref(v_b_723_);
lean_dec_ref_known(v_x_721_, 1);
v___x_724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_724_, 0, v_b_723_);
return v___x_724_;
}
case 9:
{
lean_object* v_value_725_; lean_object* v___x_727_; uint8_t v_isShared_728_; uint8_t v_isSharedCheck_793_; 
v_value_725_ = lean_ctor_get(v_x_721_, 0);
v_isSharedCheck_793_ = !lean_is_exclusive(v_x_721_);
if (v_isSharedCheck_793_ == 0)
{
lean_object* v_unused_794_; 
v_unused_794_ = lean_ctor_get(v_x_721_, 1);
lean_dec(v_unused_794_);
v___x_727_ = v_x_721_;
v_isShared_728_ = v_isSharedCheck_793_;
goto v_resetjp_726_;
}
else
{
lean_inc(v_value_725_);
lean_dec(v_x_721_);
v___x_727_ = lean_box(0);
v_isShared_728_ = v_isSharedCheck_793_;
goto v_resetjp_726_;
}
v_resetjp_726_:
{
lean_object* v___x_729_; lean_object* v___x_730_; 
v___x_729_ = ((lean_object*)(l_Lasm_JS_Web_Support_viewBytes___closed__0));
lean_inc(v_value_725_);
v___x_730_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_value_725_, v___x_729_);
if (lean_obj_tag(v___x_730_) == 0)
{
lean_object* v_a_731_; lean_object* v___x_732_; lean_object* v___x_733_; 
v_a_731_ = lean_ctor_get(v___x_730_, 0);
lean_inc(v_a_731_);
lean_dec_ref_known(v___x_730_, 1);
v___x_732_ = ((lean_object*)(l_Lasm_JS_Web_Support_viewBytes___closed__1));
lean_inc(v_value_725_);
v___x_733_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_value_725_, v___x_732_);
if (lean_obj_tag(v___x_733_) == 0)
{
lean_object* v_a_734_; lean_object* v___x_735_; lean_object* v___x_736_; 
v_a_734_ = lean_ctor_get(v___x_733_, 0);
lean_inc(v_a_734_);
lean_dec_ref_known(v___x_733_, 1);
v___x_735_ = ((lean_object*)(l_Lasm_JS_Web_Support_viewBytes___closed__2));
v___x_736_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_value_725_, v___x_735_);
if (lean_obj_tag(v___x_736_) == 0)
{
lean_object* v_a_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_742_; 
v_a_737_ = lean_ctor_get(v___x_736_, 0);
lean_inc(v_a_737_);
lean_dec_ref_known(v___x_736_, 1);
v___x_738_ = lean_unsigned_to_nat(3u);
v___x_739_ = ((lean_object*)(l_Lasm_JS_Web_Support_viewBytes___closed__4));
v___x_740_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
if (v_isShared_728_ == 0)
{
lean_ctor_set(v___x_727_, 1, v___x_740_);
lean_ctor_set(v___x_727_, 0, v_a_731_);
v___x_742_ = v___x_727_;
goto v_reusejp_741_;
}
else
{
lean_object* v_reuseFailAlloc_768_; 
v_reuseFailAlloc_768_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_768_, 0, v_a_731_);
lean_ctor_set(v_reuseFailAlloc_768_, 1, v___x_740_);
v___x_742_ = v_reuseFailAlloc_768_;
goto v_reusejp_741_;
}
v_reusejp_741_:
{
lean_object* v___y_744_; lean_object* v___y_745_; lean_object* v___y_753_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; uint8_t v___x_764_; 
v___x_761_ = lean_nat_to_int(v_a_734_);
v___x_762_ = lean_nat_abs(v___x_761_);
v___x_763_ = lean_cstr_to_nat("9007199254740991");
v___x_764_ = lean_nat_dec_le(v___x_762_, v___x_763_);
lean_dec(v___x_762_);
if (v___x_764_ == 0)
{
lean_object* v___x_765_; 
v___x_765_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_765_, 0, v___x_761_);
v___y_753_ = v___x_765_;
goto v___jp_752_;
}
else
{
double v___x_766_; lean_object* v___x_767_; 
v___x_766_ = l_Float_ofInt(v___x_761_);
lean_dec(v___x_761_);
v___x_767_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_767_, 0, v___x_766_);
v___y_753_ = v___x_767_;
goto v___jp_752_;
}
v___jp_743_:
{
lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; uint8_t v___x_750_; lean_object* v___x_751_; 
v___x_746_ = lean_mk_empty_array_with_capacity(v___x_738_);
v___x_747_ = lean_array_push(v___x_746_, v___x_742_);
v___x_748_ = lean_array_push(v___x_747_, v___y_744_);
v___x_749_ = lean_array_push(v___x_748_, v___y_745_);
v___x_750_ = 0;
v___x_751_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_739_, v___x_749_, v___x_750_);
return v___x_751_;
}
v___jp_752_:
{
lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; uint8_t v___x_757_; 
v___x_754_ = lean_nat_to_int(v_a_737_);
v___x_755_ = lean_nat_abs(v___x_754_);
v___x_756_ = lean_cstr_to_nat("9007199254740991");
v___x_757_ = lean_nat_dec_le(v___x_755_, v___x_756_);
lean_dec(v___x_755_);
if (v___x_757_ == 0)
{
lean_object* v___x_758_; 
v___x_758_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_758_, 0, v___x_754_);
v___y_744_ = v___y_753_;
v___y_745_ = v___x_758_;
goto v___jp_743_;
}
else
{
double v___x_759_; lean_object* v___x_760_; 
v___x_759_ = l_Float_ofInt(v___x_754_);
lean_dec(v___x_754_);
v___x_760_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_760_, 0, v___x_759_);
v___y_744_ = v___y_753_;
v___y_745_ = v___x_760_;
goto v___jp_743_;
}
}
}
}
else
{
lean_object* v_a_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_776_; 
lean_dec(v_a_734_);
lean_dec(v_a_731_);
lean_del_object(v___x_727_);
v_a_769_ = lean_ctor_get(v___x_736_, 0);
v_isSharedCheck_776_ = !lean_is_exclusive(v___x_736_);
if (v_isSharedCheck_776_ == 0)
{
v___x_771_ = v___x_736_;
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_a_769_);
lean_dec(v___x_736_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
lean_object* v___x_774_; 
if (v_isShared_772_ == 0)
{
v___x_774_ = v___x_771_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v_a_769_);
v___x_774_ = v_reuseFailAlloc_775_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
return v___x_774_;
}
}
}
}
else
{
lean_object* v_a_777_; lean_object* v___x_779_; uint8_t v_isShared_780_; uint8_t v_isSharedCheck_784_; 
lean_dec(v_a_731_);
lean_del_object(v___x_727_);
lean_dec(v_value_725_);
v_a_777_ = lean_ctor_get(v___x_733_, 0);
v_isSharedCheck_784_ = !lean_is_exclusive(v___x_733_);
if (v_isSharedCheck_784_ == 0)
{
v___x_779_ = v___x_733_;
v_isShared_780_ = v_isSharedCheck_784_;
goto v_resetjp_778_;
}
else
{
lean_inc(v_a_777_);
lean_dec(v___x_733_);
v___x_779_ = lean_box(0);
v_isShared_780_ = v_isSharedCheck_784_;
goto v_resetjp_778_;
}
v_resetjp_778_:
{
lean_object* v___x_782_; 
if (v_isShared_780_ == 0)
{
v___x_782_ = v___x_779_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_783_; 
v_reuseFailAlloc_783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_783_, 0, v_a_777_);
v___x_782_ = v_reuseFailAlloc_783_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
return v___x_782_;
}
}
}
}
else
{
lean_object* v_a_785_; lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_792_; 
lean_del_object(v___x_727_);
lean_dec(v_value_725_);
v_a_785_ = lean_ctor_get(v___x_730_, 0);
v_isSharedCheck_792_ = !lean_is_exclusive(v___x_730_);
if (v_isSharedCheck_792_ == 0)
{
v___x_787_ = v___x_730_;
v_isShared_788_ = v_isSharedCheck_792_;
goto v_resetjp_786_;
}
else
{
lean_inc(v_a_785_);
lean_dec(v___x_730_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_792_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
lean_object* v___x_790_; 
if (v_isShared_788_ == 0)
{
v___x_790_ = v___x_787_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v_a_785_);
v___x_790_ = v_reuseFailAlloc_791_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
return v___x_790_;
}
}
}
}
}
default: 
{
lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; 
v___x_795_ = ((lean_object*)(l_Lasm_JS_Web_Support_viewBytes___closed__5));
v___x_796_ = l_Lasm_JS_Data_describe(v_x_721_);
v___x_797_ = lean_string_append(v___x_795_, v___x_796_);
lean_dec_ref(v___x_796_);
v___x_798_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_798_, 0, v___x_797_);
v___x_799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_799_, 0, v___x_798_);
return v___x_799_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_viewBytes___boxed(lean_object* v_x_800_, lean_object* v_a_801_){
_start:
{
lean_object* v_res_802_; 
v_res_802_ = l_Lasm_JS_Web_Support_viewBytes(v_x_800_);
return v_res_802_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(lean_object* v_b_803_, lean_object* v_args_804_, uint8_t v_await_805_){
_start:
{
uint64_t v___y_808_; uint64_t v___y_809_; uint64_t v___x_852_; uint64_t v___y_854_; 
v___x_852_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__0);
if (v_await_805_ == 0)
{
uint64_t v___x_859_; 
v___x_859_ = 0ULL;
v___y_854_ = v___x_859_;
goto v___jp_853_;
}
else
{
uint64_t v___x_860_; 
v___x_860_ = 2ULL;
v___y_854_ = v___x_860_;
goto v___jp_853_;
}
v___jp_807_:
{
uint64_t v_flags_810_; uint32_t v___x_811_; lean_object* v___x_812_; uint32_t v___x_813_; lean_object* v___x_814_; 
v_flags_810_ = lean_uint64_lor(v___y_808_, v___y_809_);
v___x_811_ = 214;
v___x_812_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_803_, v_args_804_);
v___x_813_ = 0;
v___x_814_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_811_, v_flags_810_, v___x_812_, v___x_813_);
lean_dec(v___x_812_);
if (lean_obj_tag(v___x_814_) == 0)
{
if (lean_obj_tag(v___x_814_) == 0)
{
lean_object* v_a_815_; lean_object* v___x_816_; 
v_a_815_ = lean_ctor_get(v___x_814_, 0);
lean_inc(v_a_815_);
lean_dec_ref_known(v___x_814_, 1);
v___x_816_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_815_);
lean_dec(v_a_815_);
if (lean_obj_tag(v___x_816_) == 0)
{
lean_object* v_a_817_; lean_object* v___x_818_; lean_object* v___x_819_; 
v_a_817_ = lean_ctor_get(v___x_816_, 0);
lean_inc(v_a_817_);
lean_dec_ref_known(v___x_816_, 1);
v___x_818_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_803_);
v___x_819_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v___x_818_, v_a_817_);
lean_dec_ref(v___x_818_);
return v___x_819_;
}
else
{
lean_object* v_a_820_; lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_827_; 
v_a_820_ = lean_ctor_get(v___x_816_, 0);
v_isSharedCheck_827_ = !lean_is_exclusive(v___x_816_);
if (v_isSharedCheck_827_ == 0)
{
v___x_822_ = v___x_816_;
v_isShared_823_ = v_isSharedCheck_827_;
goto v_resetjp_821_;
}
else
{
lean_inc(v_a_820_);
lean_dec(v___x_816_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_827_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
lean_object* v___x_825_; 
if (v_isShared_823_ == 0)
{
v___x_825_ = v___x_822_;
goto v_reusejp_824_;
}
else
{
lean_object* v_reuseFailAlloc_826_; 
v_reuseFailAlloc_826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_826_, 0, v_a_820_);
v___x_825_ = v_reuseFailAlloc_826_;
goto v_reusejp_824_;
}
v_reusejp_824_:
{
return v___x_825_;
}
}
}
}
else
{
lean_object* v_a_828_; lean_object* v___x_830_; uint8_t v_isShared_831_; uint8_t v_isSharedCheck_835_; 
v_a_828_ = lean_ctor_get(v___x_814_, 0);
v_isSharedCheck_835_ = !lean_is_exclusive(v___x_814_);
if (v_isSharedCheck_835_ == 0)
{
v___x_830_ = v___x_814_;
v_isShared_831_ = v_isSharedCheck_835_;
goto v_resetjp_829_;
}
else
{
lean_inc(v_a_828_);
lean_dec(v___x_814_);
v___x_830_ = lean_box(0);
v_isShared_831_ = v_isSharedCheck_835_;
goto v_resetjp_829_;
}
v_resetjp_829_:
{
lean_object* v___x_833_; 
if (v_isShared_831_ == 0)
{
lean_ctor_set_tag(v___x_830_, 1);
v___x_833_ = v___x_830_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v_a_828_);
v___x_833_ = v_reuseFailAlloc_834_;
goto v_reusejp_832_;
}
v_reusejp_832_:
{
return v___x_833_;
}
}
}
}
else
{
lean_object* v_a_836_; lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_851_; 
v_a_836_ = lean_ctor_get(v___x_814_, 0);
v_isSharedCheck_851_ = !lean_is_exclusive(v___x_814_);
if (v_isSharedCheck_851_ == 0)
{
v___x_838_ = v___x_814_;
v_isShared_839_ = v_isSharedCheck_851_;
goto v_resetjp_837_;
}
else
{
lean_inc(v_a_836_);
lean_dec(v___x_814_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_851_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_849_; 
v___x_840_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__0));
v___x_841_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_803_);
v___x_842_ = lean_string_append(v___x_840_, v___x_841_);
lean_dec_ref(v___x_841_);
v___x_843_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__0___closed__1));
v___x_844_ = lean_string_append(v___x_842_, v___x_843_);
v___x_845_ = lean_io_error_to_string(v_a_836_);
v___x_846_ = lean_string_append(v___x_844_, v___x_845_);
lean_dec_ref(v___x_845_);
v___x_847_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_847_, 0, v___x_846_);
if (v_isShared_839_ == 0)
{
lean_ctor_set(v___x_838_, 0, v___x_847_);
v___x_849_ = v___x_838_;
goto v_reusejp_848_;
}
else
{
lean_object* v_reuseFailAlloc_850_; 
v_reuseFailAlloc_850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_850_, 0, v___x_847_);
v___x_849_ = v_reuseFailAlloc_850_;
goto v_reusejp_848_;
}
v_reusejp_848_:
{
return v___x_849_;
}
}
}
}
v___jp_853_:
{
uint8_t v_construct_855_; uint64_t v___x_856_; 
v_construct_855_ = lean_ctor_get_uint8(v_b_803_, sizeof(void*)*4);
v___x_856_ = lean_uint64_lor(v___x_852_, v___y_854_);
if (v_construct_855_ == 0)
{
uint64_t v___x_857_; 
v___x_857_ = 0ULL;
v___y_808_ = v___x_856_;
v___y_809_ = v___x_857_;
goto v___jp_807_;
}
else
{
uint64_t v___x_858_; 
v___x_858_ = 4ULL;
v___y_808_ = v___x_856_;
v___y_809_ = v___x_858_;
goto v___jp_807_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0___boxed(lean_object* v_b_861_, lean_object* v_args_862_, lean_object* v_await_863_, lean_object* v_a_864_){
_start:
{
uint8_t v_await_boxed_865_; lean_object* v_res_866_; 
v_await_boxed_865_ = lean_unbox(v_await_863_);
v_res_866_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v_b_861_, v_args_862_, v_await_boxed_865_);
lean_dec_ref(v_b_861_);
return v_res_866_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_typedArray(lean_object* v_constructor_875_, lean_object* v_bytes_876_){
_start:
{
lean_object* v___x_878_; uint8_t v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; uint8_t v___x_885_; lean_object* v___x_886_; 
v___x_878_ = ((lean_object*)(l_Lasm_JS_Web_Support_arrayBufferBytes___closed__1));
v___x_879_ = 1;
v___x_880_ = lean_unsigned_to_nat(1u);
v___x_881_ = ((lean_object*)(l_Lasm_JS_Web_Support_typedArray___closed__1));
v___x_882_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_882_, 0, v_bytes_876_);
v___x_883_ = lean_mk_empty_array_with_capacity(v___x_880_);
lean_inc_ref(v___x_883_);
v___x_884_ = lean_array_push(v___x_883_, v___x_882_);
v___x_885_ = 0;
v___x_886_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_881_, v___x_884_, v___x_885_);
if (lean_obj_tag(v___x_886_) == 0)
{
lean_object* v_a_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
v_a_887_ = lean_ctor_get(v___x_886_, 0);
lean_inc(v_a_887_);
lean_dec_ref_known(v___x_886_, 1);
v___x_888_ = ((lean_object*)(l_Lasm_JS_Web_Support_viewBytes___closed__0));
v___x_889_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_887_, v___x_888_);
if (lean_obj_tag(v___x_889_) == 0)
{
lean_object* v_a_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; 
v_a_890_ = lean_ctor_get(v___x_889_, 0);
lean_inc(v_a_890_);
lean_dec_ref_known(v___x_889_, 1);
v___x_891_ = ((lean_object*)(l_Lasm_JS_Web_Support_typedArray___closed__2));
v___x_892_ = lean_string_append(v___x_891_, v_constructor_875_);
v___x_893_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_893_, 0, v___x_892_);
lean_ctor_set(v___x_893_, 1, v___x_878_);
lean_ctor_set(v___x_893_, 2, v_constructor_875_);
lean_ctor_set(v___x_893_, 3, v___x_880_);
lean_ctor_set_uint8(v___x_893_, sizeof(void*)*4, v___x_879_);
v___x_894_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___x_895_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_895_, 0, v_a_890_);
lean_ctor_set(v___x_895_, 1, v___x_894_);
v___x_896_ = lean_array_push(v___x_883_, v___x_895_);
v___x_897_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_893_, v___x_896_, v___x_885_);
lean_dec_ref_known(v___x_893_, 4);
return v___x_897_;
}
else
{
lean_dec_ref(v___x_883_);
lean_dec_ref(v_constructor_875_);
return v___x_889_;
}
}
else
{
lean_dec_ref(v___x_883_);
lean_dec_ref(v_constructor_875_);
return v___x_886_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_typedArray___boxed(lean_object* v_constructor_898_, lean_object* v_bytes_899_, lean_object* v_a_900_){
_start:
{
lean_object* v_res_901_; 
v_res_901_ = l_Lasm_JS_Web_Support_typedArray(v_constructor_898_, v_bytes_899_);
return v_res_901_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number___redArg(lean_object* v_inst_910_, lean_object* v_v_911_){
_start:
{
uint8_t v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; 
v___x_913_ = 0;
v___x_914_ = lean_unsigned_to_nat(1u);
v___x_915_ = ((lean_object*)(l_Lasm_JS_Web_Support_number___redArg___closed__2));
v___x_916_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___x_917_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_917_, 0, v_v_911_);
lean_ctor_set(v___x_917_, 1, v___x_916_);
v___x_918_ = lean_mk_empty_array_with_capacity(v___x_914_);
v___x_919_ = lean_array_push(v___x_918_, v___x_917_);
v___x_920_ = l_Lasm_JS_Binding_invoke___redArg(v_inst_910_, v___x_915_, v___x_919_, v___x_913_);
return v___x_920_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number___redArg___boxed(lean_object* v_inst_921_, lean_object* v_v_922_, lean_object* v_a_923_){
_start:
{
lean_object* v_res_924_; 
v_res_924_ = l_Lasm_JS_Web_Support_number___redArg(v_inst_921_, v_v_922_);
return v_res_924_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number(lean_object* v_00_u03b1_925_, lean_object* v_inst_926_, lean_object* v_v_927_){
_start:
{
lean_object* v___x_929_; 
v___x_929_ = l_Lasm_JS_Web_Support_number___redArg(v_inst_926_, v_v_927_);
return v___x_929_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number___boxed(lean_object* v_00_u03b1_930_, lean_object* v_inst_931_, lean_object* v_v_932_, lean_object* v_a_933_){
_start:
{
lean_object* v_res_934_; 
v_res_934_ = l_Lasm_JS_Web_Support_number(v_00_u03b1_930_, v_inst_931_, v_v_932_);
return v_res_934_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs___redArg(lean_object* v_inst_943_, lean_object* v_v_944_){
_start:
{
uint8_t v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_946_ = 0;
v___x_947_ = lean_unsigned_to_nat(1u);
v___x_948_ = ((lean_object*)(l_Lasm_JS_Web_Support_cloneAs___redArg___closed__2));
v___x_949_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___x_950_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_950_, 0, v_v_944_);
lean_ctor_set(v___x_950_, 1, v___x_949_);
v___x_951_ = lean_mk_empty_array_with_capacity(v___x_947_);
v___x_952_ = lean_array_push(v___x_951_, v___x_950_);
v___x_953_ = l_Lasm_JS_Binding_invoke___redArg(v_inst_943_, v___x_948_, v___x_952_, v___x_946_);
return v___x_953_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs___redArg___boxed(lean_object* v_inst_954_, lean_object* v_v_955_, lean_object* v_a_956_){
_start:
{
lean_object* v_res_957_; 
v_res_957_ = l_Lasm_JS_Web_Support_cloneAs___redArg(v_inst_954_, v_v_955_);
return v_res_957_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs(lean_object* v_00_u03b1_958_, lean_object* v_inst_959_, lean_object* v_v_960_){
_start:
{
lean_object* v___x_962_; 
v___x_962_ = l_Lasm_JS_Web_Support_cloneAs___redArg(v_inst_959_, v_v_960_);
return v___x_962_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs___boxed(lean_object* v_00_u03b1_963_, lean_object* v_inst_964_, lean_object* v_v_965_, lean_object* v_a_966_){
_start:
{
lean_object* v_res_967_; 
v_res_967_ = l_Lasm_JS_Web_Support_cloneAs(v_00_u03b1_963_, v_inst_964_, v_v_965_);
return v_res_967_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___redArg(lean_object* v_o_978_, lean_object* v_method_979_, lean_object* v_inst_980_){
_start:
{
lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; 
v___x_982_ = l_Lasm_JS_instFromJSValue;
v___x_983_ = ((lean_object*)(l_Lasm_JS_Web_Support_iterate___redArg___closed__0));
v___x_984_ = l_Lasm_JS_Value_callMethod___redArg(v_o_978_, v_method_979_, v___x_983_, v___x_982_);
if (lean_obj_tag(v___x_984_) == 0)
{
lean_object* v_a_985_; uint8_t v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; 
v_a_985_ = lean_ctor_get(v___x_984_, 0);
lean_inc(v_a_985_);
lean_dec_ref_known(v___x_984_, 1);
v___x_986_ = 0;
v___x_987_ = lean_unsigned_to_nat(1u);
v___x_988_ = ((lean_object*)(l_Lasm_JS_Web_Support_iterate___redArg___closed__3));
v___x_989_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___x_990_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_990_, 0, v_a_985_);
lean_ctor_set(v___x_990_, 1, v___x_989_);
v___x_991_ = lean_mk_empty_array_with_capacity(v___x_987_);
v___x_992_ = lean_array_push(v___x_991_, v___x_990_);
v___x_993_ = l_Lasm_JS_Binding_invoke___redArg(v_inst_980_, v___x_988_, v___x_992_, v___x_986_);
return v___x_993_;
}
else
{
lean_object* v_a_994_; lean_object* v___x_996_; uint8_t v_isShared_997_; uint8_t v_isSharedCheck_1001_; 
lean_dec_ref(v_inst_980_);
v_a_994_ = lean_ctor_get(v___x_984_, 0);
v_isSharedCheck_1001_ = !lean_is_exclusive(v___x_984_);
if (v_isSharedCheck_1001_ == 0)
{
v___x_996_ = v___x_984_;
v_isShared_997_ = v_isSharedCheck_1001_;
goto v_resetjp_995_;
}
else
{
lean_inc(v_a_994_);
lean_dec(v___x_984_);
v___x_996_ = lean_box(0);
v_isShared_997_ = v_isSharedCheck_1001_;
goto v_resetjp_995_;
}
v_resetjp_995_:
{
lean_object* v___x_999_; 
if (v_isShared_997_ == 0)
{
v___x_999_ = v___x_996_;
goto v_reusejp_998_;
}
else
{
lean_object* v_reuseFailAlloc_1000_; 
v_reuseFailAlloc_1000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1000_, 0, v_a_994_);
v___x_999_ = v_reuseFailAlloc_1000_;
goto v_reusejp_998_;
}
v_reusejp_998_:
{
return v___x_999_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___redArg___boxed(lean_object* v_o_1002_, lean_object* v_method_1003_, lean_object* v_inst_1004_, lean_object* v_a_1005_){
_start:
{
lean_object* v_res_1006_; 
v_res_1006_ = l_Lasm_JS_Web_Support_iterate___redArg(v_o_1002_, v_method_1003_, v_inst_1004_);
return v_res_1006_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate(lean_object* v_o_1007_, lean_object* v_method_1008_, lean_object* v_00_u03b1_1009_, lean_object* v_inst_1010_){
_start:
{
lean_object* v___x_1012_; 
v___x_1012_ = l_Lasm_JS_Web_Support_iterate___redArg(v_o_1007_, v_method_1008_, v_inst_1010_);
return v___x_1012_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___boxed(lean_object* v_o_1013_, lean_object* v_method_1014_, lean_object* v_00_u03b1_1015_, lean_object* v_inst_1016_, lean_object* v_a_1017_){
_start:
{
lean_object* v_res_1018_; 
v_res_1018_ = l_Lasm_JS_Web_Support_iterate(v_o_1013_, v_method_1014_, v_00_u03b1_1015_, v_inst_1016_);
return v_res_1018_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___redArg(lean_object* v_inst_1023_, lean_object* v_o_1024_, lean_object* v_a_1025_){
_start:
{
lean_object* v___x_1027_; 
v___x_1027_ = l_Lasm_JS_instFromJSValue;
if (lean_obj_tag(v_a_1025_) == 0)
{
lean_object* v___x_1028_; lean_object* v___x_1029_; 
lean_dec(v_o_1024_);
lean_dec_ref(v_inst_1023_);
v___x_1028_ = ((lean_object*)(l_Lasm_JS_Web_Support_getGlobal_go___redArg___closed__1));
v___x_1029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1029_, 0, v___x_1028_);
return v___x_1029_;
}
else
{
lean_object* v_head_1030_; lean_object* v_tail_1031_; lean_object* v___f_1032_; 
v_head_1030_ = lean_ctor_get(v_a_1025_, 0);
lean_inc(v_head_1030_);
v_tail_1031_ = lean_ctor_get(v_a_1025_, 1);
lean_inc(v_tail_1031_);
lean_dec_ref_known(v_a_1025_, 2);
v___f_1032_ = ((lean_object*)(l_Lasm_JS_Web_Support_getGlobal_go___redArg___closed__2));
if (lean_obj_tag(v_tail_1031_) == 0)
{
lean_object* v___x_1033_; 
v___x_1033_ = l_Lasm_JS_Value_get___redArg(v___f_1032_, v_o_1024_, v_head_1030_, v_inst_1023_);
return v___x_1033_;
}
else
{
lean_object* v___x_1034_; 
v___x_1034_ = l_Lasm_JS_Value_get___redArg(v___f_1032_, v_o_1024_, v_head_1030_, v___x_1027_);
if (lean_obj_tag(v___x_1034_) == 0)
{
lean_object* v_a_1035_; 
v_a_1035_ = lean_ctor_get(v___x_1034_, 0);
lean_inc(v_a_1035_);
lean_dec_ref_known(v___x_1034_, 1);
v_o_1024_ = v_a_1035_;
v_a_1025_ = v_tail_1031_;
goto _start;
}
else
{
lean_object* v_a_1037_; lean_object* v___x_1039_; uint8_t v_isShared_1040_; uint8_t v_isSharedCheck_1044_; 
lean_dec(v_tail_1031_);
lean_dec_ref(v_inst_1023_);
v_a_1037_ = lean_ctor_get(v___x_1034_, 0);
v_isSharedCheck_1044_ = !lean_is_exclusive(v___x_1034_);
if (v_isSharedCheck_1044_ == 0)
{
v___x_1039_ = v___x_1034_;
v_isShared_1040_ = v_isSharedCheck_1044_;
goto v_resetjp_1038_;
}
else
{
lean_inc(v_a_1037_);
lean_dec(v___x_1034_);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___redArg___boxed(lean_object* v_inst_1045_, lean_object* v_o_1046_, lean_object* v_a_1047_, lean_object* v_a_1048_){
_start:
{
lean_object* v_res_1049_; 
v_res_1049_ = l_Lasm_JS_Web_Support_getGlobal_go___redArg(v_inst_1045_, v_o_1046_, v_a_1047_);
return v_res_1049_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go(lean_object* v_00_u03b1_1050_, lean_object* v_inst_1051_, lean_object* v_o_1052_, lean_object* v_a_1053_){
_start:
{
lean_object* v___x_1055_; 
v___x_1055_ = l_Lasm_JS_Web_Support_getGlobal_go___redArg(v_inst_1051_, v_o_1052_, v_a_1053_);
return v___x_1055_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___boxed(lean_object* v_00_u03b1_1056_, lean_object* v_inst_1057_, lean_object* v_o_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_){
_start:
{
lean_object* v_res_1061_; 
v_res_1061_ = l_Lasm_JS_Web_Support_getGlobal_go(v_00_u03b1_1056_, v_inst_1057_, v_o_1058_, v_a_1059_);
return v_res_1061_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___redArg(lean_object* v_path_1062_, lean_object* v_inst_1063_){
_start:
{
lean_object* v___x_1065_; 
v___x_1065_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1065_) == 0)
{
lean_object* v_a_1066_; lean_object* v___x_1067_; 
v_a_1066_ = lean_ctor_get(v___x_1065_, 0);
lean_inc(v_a_1066_);
lean_dec_ref_known(v___x_1065_, 1);
v___x_1067_ = l_Lasm_JS_Web_Support_getGlobal_go___redArg(v_inst_1063_, v_a_1066_, v_path_1062_);
return v___x_1067_;
}
else
{
lean_object* v_a_1068_; lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1075_; 
lean_dec_ref(v_inst_1063_);
lean_dec(v_path_1062_);
v_a_1068_ = lean_ctor_get(v___x_1065_, 0);
v_isSharedCheck_1075_ = !lean_is_exclusive(v___x_1065_);
if (v_isSharedCheck_1075_ == 0)
{
v___x_1070_ = v___x_1065_;
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
else
{
lean_inc(v_a_1068_);
lean_dec(v___x_1065_);
v___x_1070_ = lean_box(0);
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
v_resetjp_1069_:
{
lean_object* v___x_1073_; 
if (v_isShared_1071_ == 0)
{
v___x_1073_ = v___x_1070_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1074_; 
v_reuseFailAlloc_1074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1074_, 0, v_a_1068_);
v___x_1073_ = v_reuseFailAlloc_1074_;
goto v_reusejp_1072_;
}
v_reusejp_1072_:
{
return v___x_1073_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___redArg___boxed(lean_object* v_path_1076_, lean_object* v_inst_1077_, lean_object* v_a_1078_){
_start:
{
lean_object* v_res_1079_; 
v_res_1079_ = l_Lasm_JS_Web_Support_getGlobal___redArg(v_path_1076_, v_inst_1077_);
return v_res_1079_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal(lean_object* v_path_1080_, lean_object* v_00_u03b1_1081_, lean_object* v_inst_1082_){
_start:
{
lean_object* v___x_1084_; 
v___x_1084_ = l_Lasm_JS_Web_Support_getGlobal___redArg(v_path_1080_, v_inst_1082_);
return v___x_1084_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___boxed(lean_object* v_path_1085_, lean_object* v_00_u03b1_1086_, lean_object* v_inst_1087_, lean_object* v_a_1088_){
_start:
{
lean_object* v_res_1089_; 
v_res_1089_ = l_Lasm_JS_Web_Support_getGlobal(v_path_1085_, v_00_u03b1_1086_, v_inst_1087_);
return v_res_1089_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Core(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin) {
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
res = initialize_Lasm_JS_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
