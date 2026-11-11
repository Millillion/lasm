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
static const lean_string_object l_Lasm_JS_Web_Support_nullableArrayBufferBytes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "expected an ArrayBuffer or null, got "};
static const lean_object* l_Lasm_JS_Web_Support_nullableArrayBufferBytes___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Support_nullableArrayBufferBytes___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_nullableArrayBufferBytes(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_nullableArrayBufferBytes___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_nullableArrayBufferBytes(lean_object* v_x_526_){
_start:
{
switch(lean_obj_tag(v_x_526_))
{
case 1:
{
goto v___jp_528_;
}
case 0:
{
goto v___jp_528_;
}
case 9:
{
lean_object* v_value_531_; lean_object* v___x_532_; 
v_value_531_ = lean_ctor_get(v_x_526_, 0);
lean_inc(v_value_531_);
lean_dec_ref_known(v_x_526_, 2);
v___x_532_ = l_Lasm_JS_Web_Support_arrayBufferBytes(v_value_531_);
if (lean_obj_tag(v___x_532_) == 0)
{
lean_object* v_a_533_; lean_object* v___x_535_; uint8_t v_isShared_536_; uint8_t v_isSharedCheck_541_; 
v_a_533_ = lean_ctor_get(v___x_532_, 0);
v_isSharedCheck_541_ = !lean_is_exclusive(v___x_532_);
if (v_isSharedCheck_541_ == 0)
{
v___x_535_ = v___x_532_;
v_isShared_536_ = v_isSharedCheck_541_;
goto v_resetjp_534_;
}
else
{
lean_inc(v_a_533_);
lean_dec(v___x_532_);
v___x_535_ = lean_box(0);
v_isShared_536_ = v_isSharedCheck_541_;
goto v_resetjp_534_;
}
v_resetjp_534_:
{
lean_object* v___x_537_; lean_object* v___x_539_; 
v___x_537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_537_, 0, v_a_533_);
if (v_isShared_536_ == 0)
{
lean_ctor_set(v___x_535_, 0, v___x_537_);
v___x_539_ = v___x_535_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v___x_537_);
v___x_539_ = v_reuseFailAlloc_540_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
return v___x_539_;
}
}
}
else
{
lean_object* v_a_542_; lean_object* v___x_544_; uint8_t v_isShared_545_; uint8_t v_isSharedCheck_549_; 
v_a_542_ = lean_ctor_get(v___x_532_, 0);
v_isSharedCheck_549_ = !lean_is_exclusive(v___x_532_);
if (v_isSharedCheck_549_ == 0)
{
v___x_544_ = v___x_532_;
v_isShared_545_ = v_isSharedCheck_549_;
goto v_resetjp_543_;
}
else
{
lean_inc(v_a_542_);
lean_dec(v___x_532_);
v___x_544_ = lean_box(0);
v_isShared_545_ = v_isSharedCheck_549_;
goto v_resetjp_543_;
}
v_resetjp_543_:
{
lean_object* v___x_547_; 
if (v_isShared_545_ == 0)
{
v___x_547_ = v___x_544_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v_a_542_);
v___x_547_ = v_reuseFailAlloc_548_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
return v___x_547_;
}
}
}
}
default: 
{
lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_550_ = ((lean_object*)(l_Lasm_JS_Web_Support_nullableArrayBufferBytes___closed__0));
v___x_551_ = l_Lasm_JS_Data_describe(v_x_526_);
v___x_552_ = lean_string_append(v___x_550_, v___x_551_);
lean_dec_ref(v___x_551_);
v___x_553_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_553_, 0, v___x_552_);
v___x_554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_554_, 0, v___x_553_);
return v___x_554_;
}
}
v___jp_528_:
{
lean_object* v___x_529_; lean_object* v___x_530_; 
v___x_529_ = lean_box(0);
v___x_530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_530_, 0, v___x_529_);
return v___x_530_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_nullableArrayBufferBytes___boxed(lean_object* v_x_555_, lean_object* v_a_556_){
_start:
{
lean_object* v_res_557_; 
v_res_557_ = l_Lasm_JS_Web_Support_nullableArrayBufferBytes(v_x_555_);
return v_res_557_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__0(void){
_start:
{
uint8_t v___x_558_; uint64_t v___x_559_; 
v___x_558_ = 1;
v___x_559_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_558_);
return v___x_559_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object* v_o_561_, lean_object* v_key_562_){
_start:
{
lean_object* v_k_564_; lean_object* v___x_565_; 
v_k_564_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_564_, 0, v_key_562_);
v___x_565_ = l_Lasm_JS_Wire_encodeIO(v_k_564_);
if (lean_obj_tag(v___x_565_) == 0)
{
lean_object* v_a_566_; uint32_t v___x_567_; uint32_t v___x_568_; uint64_t v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; 
v_a_566_ = lean_ctor_get(v___x_565_, 0);
lean_inc(v_a_566_);
lean_dec_ref_known(v___x_565_, 1);
v___x_567_ = 203;
v___x_568_ = lasm_js_value_handle(v_o_561_);
v___x_569_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__0);
v___x_570_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___x_571_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_571_, 0, v_o_561_);
lean_ctor_set(v___x_571_, 1, v___x_570_);
v___x_572_ = lean_unsigned_to_nat(2u);
v___x_573_ = lean_mk_empty_array_with_capacity(v___x_572_);
lean_inc_ref(v_k_564_);
v___x_574_ = lean_array_push(v___x_573_, v_k_564_);
v___x_575_ = lean_array_push(v___x_574_, v___x_571_);
v___x_576_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_576_, 0, v___x_575_);
v___x_577_ = lasm_js_call(v___x_567_, v___x_568_, v___x_569_, v_a_566_, v___x_576_);
lean_dec_ref_known(v___x_576_, 1);
lean_dec(v_a_566_);
if (lean_obj_tag(v___x_577_) == 0)
{
lean_object* v_a_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; 
v_a_578_ = lean_ctor_get(v___x_577_, 0);
lean_inc(v_a_578_);
lean_dec_ref_known(v___x_577_, 1);
v___x_579_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__1));
v___x_580_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_564_);
v___x_581_ = lean_string_append(v___x_579_, v___x_580_);
lean_dec_ref(v___x_580_);
v___x_582_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_581_, v_a_578_);
lean_dec(v_a_578_);
lean_dec_ref(v___x_581_);
return v___x_582_;
}
else
{
lean_object* v_a_583_; lean_object* v___x_585_; uint8_t v_isShared_586_; uint8_t v_isSharedCheck_590_; 
lean_dec_ref_known(v_k_564_, 1);
v_a_583_ = lean_ctor_get(v___x_577_, 0);
v_isSharedCheck_590_ = !lean_is_exclusive(v___x_577_);
if (v_isSharedCheck_590_ == 0)
{
v___x_585_ = v___x_577_;
v_isShared_586_ = v_isSharedCheck_590_;
goto v_resetjp_584_;
}
else
{
lean_inc(v_a_583_);
lean_dec(v___x_577_);
v___x_585_ = lean_box(0);
v_isShared_586_ = v_isSharedCheck_590_;
goto v_resetjp_584_;
}
v_resetjp_584_:
{
lean_object* v___x_588_; 
if (v_isShared_586_ == 0)
{
v___x_588_ = v___x_585_;
goto v_reusejp_587_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v_a_583_);
v___x_588_ = v_reuseFailAlloc_589_;
goto v_reusejp_587_;
}
v_reusejp_587_:
{
return v___x_588_;
}
}
}
}
else
{
lean_object* v_a_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_598_; 
lean_dec_ref_known(v_k_564_, 1);
lean_dec(v_o_561_);
v_a_591_ = lean_ctor_get(v___x_565_, 0);
v_isSharedCheck_598_ = !lean_is_exclusive(v___x_565_);
if (v_isSharedCheck_598_ == 0)
{
v___x_593_ = v___x_565_;
v_isShared_594_ = v_isSharedCheck_598_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_a_591_);
lean_dec(v___x_565_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_598_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_596_; 
if (v_isShared_594_ == 0)
{
v___x_596_ = v___x_593_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v_a_591_);
v___x_596_ = v_reuseFailAlloc_597_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
return v___x_596_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___boxed(lean_object* v_o_599_, lean_object* v_key_600_, lean_object* v_a_601_){
_start:
{
lean_object* v_res_602_; 
v_res_602_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_599_, v_key_600_);
return v_res_602_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__2(void){
_start:
{
lean_object* v___x_605_; lean_object* v___x_606_; 
v___x_605_ = lean_unsigned_to_nat(0u);
v___x_606_ = lean_nat_to_int(v___x_605_);
return v___x_606_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2(lean_object* v_context_609_, lean_object* v_d_610_){
_start:
{
lean_object* v___y_613_; lean_object* v___y_614_; lean_object* v___y_619_; lean_object* v_received_620_; lean_object* v___y_639_; lean_object* v_a_642_; lean_object* v_a_667_; 
switch(lean_obj_tag(v_d_610_))
{
case 3:
{
double v_n_673_; lean_object* v___x_674_; 
v_n_673_ = lean_ctor_get_float(v_d_610_, 0);
v___x_674_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_673_);
if (lean_obj_tag(v___x_674_) == 0)
{
lean_object* v___x_675_; 
v___x_675_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__4));
v_a_642_ = v___x_675_;
goto v___jp_641_;
}
else
{
lean_object* v_val_676_; 
v_val_676_ = lean_ctor_get(v___x_674_, 0);
lean_inc(v_val_676_);
lean_dec_ref_known(v___x_674_, 1);
v_a_667_ = v_val_676_;
goto v___jp_666_;
}
}
case 5:
{
lean_object* v_i_677_; 
v_i_677_ = lean_ctor_get(v_d_610_, 0);
lean_inc(v_i_677_);
v_a_667_ = v_i_677_;
goto v___jp_666_;
}
default: 
{
lean_object* v___x_678_; 
v___x_678_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v_a_642_ = v___x_678_;
goto v___jp_641_;
}
}
v___jp_612_:
{
lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; 
v___x_615_ = lean_string_append(v___y_613_, v___y_614_);
lean_dec_ref(v___y_614_);
v___x_616_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_616_, 0, v___x_615_);
v___x_617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_617_, 0, v___x_616_);
return v___x_617_;
}
v___jp_618_:
{
lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; uint8_t v___x_632_; 
v___x_621_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__0));
v___x_622_ = lean_string_append(v___x_621_, v_context_609_);
v___x_623_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__1));
v___x_624_ = lean_string_append(v___x_622_, v___x_623_);
v___x_625_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__0));
v___x_626_ = lean_string_append(v___x_624_, v___x_625_);
v___x_627_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__3));
v___x_628_ = lean_string_append(v___x_626_, v___x_627_);
v___x_629_ = lean_string_append(v___x_628_, v_received_620_);
lean_dec_ref(v_received_620_);
v___x_630_ = lean_string_utf8_byte_size(v___y_619_);
v___x_631_ = lean_unsigned_to_nat(0u);
v___x_632_ = lean_nat_dec_eq(v___x_630_, v___x_631_);
if (v___x_632_ == 0)
{
lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_633_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__1));
v___x_634_ = lean_string_append(v___x_633_, v___y_619_);
v___x_635_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___closed__11));
v___x_636_ = lean_string_append(v___x_634_, v___x_635_);
v___y_613_ = v___x_629_;
v___y_614_ = v___x_636_;
goto v___jp_612_;
}
else
{
lean_object* v___x_637_; 
v___x_637_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___y_613_ = v___x_629_;
v___y_614_ = v___x_637_;
goto v___jp_612_;
}
}
v___jp_638_:
{
lean_object* v___x_640_; 
v___x_640_ = l_Lasm_JS_Data_describe(v_d_610_);
v___y_619_ = v___y_639_;
v_received_620_ = v___x_640_;
goto v___jp_618_;
}
v___jp_641_:
{
if (lean_obj_tag(v_d_610_) == 9)
{
lean_object* v_value_643_; lean_object* v_description_644_; lean_object* v___x_645_; uint8_t v___x_646_; 
v_value_643_ = lean_ctor_get(v_d_610_, 0);
v_description_644_ = lean_ctor_get(v_d_610_, 1);
v___x_645_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___x_646_ = lean_string_dec_eq(v_description_644_, v___x_645_);
if (v___x_646_ == 0)
{
v___y_639_ = v_a_642_;
goto v___jp_638_;
}
else
{
lean_object* v___x_648_; uint8_t v_isShared_649_; uint8_t v_isSharedCheck_663_; 
lean_inc(v_value_643_);
v_isSharedCheck_663_ = !lean_is_exclusive(v_d_610_);
if (v_isSharedCheck_663_ == 0)
{
lean_object* v_unused_664_; lean_object* v_unused_665_; 
v_unused_664_ = lean_ctor_get(v_d_610_, 1);
lean_dec(v_unused_664_);
v_unused_665_ = lean_ctor_get(v_d_610_, 0);
lean_dec(v_unused_665_);
v___x_648_ = v_d_610_;
v_isShared_649_ = v_isSharedCheck_663_;
goto v_resetjp_647_;
}
else
{
lean_dec(v_d_610_);
v___x_648_ = lean_box(0);
v_isShared_649_ = v_isSharedCheck_663_;
goto v_resetjp_647_;
}
v_resetjp_647_:
{
uint32_t v___x_650_; uint64_t v___x_651_; lean_object* v___x_653_; 
v___x_650_ = 206;
v___x_651_ = 0ULL;
lean_inc(v_value_643_);
if (v_isShared_649_ == 0)
{
lean_ctor_set(v___x_648_, 1, v___x_645_);
v___x_653_ = v___x_648_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_662_, 0, v_value_643_);
lean_ctor_set(v_reuseFailAlloc_662_, 1, v___x_645_);
v___x_653_ = v_reuseFailAlloc_662_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
uint32_t v___x_654_; lean_object* v___x_655_; 
v___x_654_ = lasm_js_value_handle(v_value_643_);
lean_dec(v_value_643_);
v___x_655_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_650_, v___x_651_, v___x_653_, v___x_654_);
lean_dec_ref(v___x_653_);
if (lean_obj_tag(v___x_655_) == 0)
{
lean_object* v_a_656_; uint8_t v___x_657_; 
v_a_656_ = lean_ctor_get(v___x_655_, 0);
lean_inc(v_a_656_);
lean_dec_ref_known(v___x_655_, 1);
v___x_657_ = lean_string_validate_utf8(v_a_656_);
if (v___x_657_ == 0)
{
lean_object* v___x_658_; lean_object* v___x_659_; 
lean_dec(v_a_656_);
v___x_658_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__10, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__10);
v___x_659_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_658_);
v___y_619_ = v_a_642_;
v_received_620_ = v___x_659_;
goto v___jp_618_;
}
else
{
lean_object* v___x_660_; 
v___x_660_ = lean_string_from_utf8_unchecked(v_a_656_);
v___y_619_ = v_a_642_;
v_received_620_ = v___x_660_;
goto v___jp_618_;
}
}
else
{
lean_object* v___x_661_; 
lean_dec_ref_known(v___x_655_, 1);
v___x_661_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__11));
v___y_619_ = v_a_642_;
v_received_620_ = v___x_661_;
goto v___jp_618_;
}
}
}
}
}
else
{
v___y_639_ = v_a_642_;
goto v___jp_638_;
}
}
v___jp_666_:
{
lean_object* v___x_668_; uint8_t v___x_669_; 
v___x_668_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__2, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__2_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__2);
v___x_669_ = lean_int_dec_le(v___x_668_, v_a_667_);
if (v___x_669_ == 0)
{
lean_object* v___x_670_; 
lean_dec(v_a_667_);
v___x_670_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__3));
v_a_642_ = v___x_670_;
goto v___jp_641_;
}
else
{
lean_object* v___x_671_; lean_object* v___x_672_; 
lean_dec(v_d_610_);
v___x_671_ = l_Int_toNat(v_a_667_);
lean_dec(v_a_667_);
v___x_672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_672_, 0, v___x_671_);
return v___x_672_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___boxed(lean_object* v_context_679_, lean_object* v_d_680_, lean_object* v_a_681_){
_start:
{
lean_object* v_res_682_; 
v_res_682_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2(v_context_679_, v_d_680_);
lean_dec_ref(v_context_679_);
return v_res_682_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1(lean_object* v_context_683_, lean_object* v_bytes_684_){
_start:
{
lean_object* v___x_686_; 
v___x_686_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_684_);
if (lean_obj_tag(v___x_686_) == 0)
{
lean_object* v_a_687_; lean_object* v___x_688_; 
v_a_687_ = lean_ctor_get(v___x_686_, 0);
lean_inc(v_a_687_);
lean_dec_ref_known(v___x_686_, 1);
v___x_688_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2(v_context_683_, v_a_687_);
return v___x_688_;
}
else
{
lean_object* v_a_689_; lean_object* v___x_691_; uint8_t v_isShared_692_; uint8_t v_isSharedCheck_696_; 
v_a_689_ = lean_ctor_get(v___x_686_, 0);
v_isSharedCheck_696_ = !lean_is_exclusive(v___x_686_);
if (v_isSharedCheck_696_ == 0)
{
v___x_691_ = v___x_686_;
v_isShared_692_ = v_isSharedCheck_696_;
goto v_resetjp_690_;
}
else
{
lean_inc(v_a_689_);
lean_dec(v___x_686_);
v___x_691_ = lean_box(0);
v_isShared_692_ = v_isSharedCheck_696_;
goto v_resetjp_690_;
}
v_resetjp_690_:
{
lean_object* v___x_694_; 
if (v_isShared_692_ == 0)
{
v___x_694_ = v___x_691_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v_a_689_);
v___x_694_ = v_reuseFailAlloc_695_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
return v___x_694_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1___boxed(lean_object* v_context_697_, lean_object* v_bytes_698_, lean_object* v_a_699_){
_start:
{
lean_object* v_res_700_; 
v_res_700_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1(v_context_697_, v_bytes_698_);
lean_dec_ref(v_bytes_698_);
lean_dec_ref(v_context_697_);
return v_res_700_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(lean_object* v_o_701_, lean_object* v_key_702_){
_start:
{
lean_object* v_k_704_; lean_object* v___x_705_; 
v_k_704_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_704_, 0, v_key_702_);
v___x_705_ = l_Lasm_JS_Wire_encodeIO(v_k_704_);
if (lean_obj_tag(v___x_705_) == 0)
{
lean_object* v_a_706_; uint32_t v___x_707_; uint32_t v___x_708_; uint64_t v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; 
v_a_706_ = lean_ctor_get(v___x_705_, 0);
lean_inc(v_a_706_);
lean_dec_ref_known(v___x_705_, 1);
v___x_707_ = 203;
v___x_708_ = lasm_js_value_handle(v_o_701_);
v___x_709_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0___closed__0);
v___x_710_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___x_711_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_711_, 0, v_o_701_);
lean_ctor_set(v___x_711_, 1, v___x_710_);
v___x_712_ = lean_unsigned_to_nat(2u);
v___x_713_ = lean_mk_empty_array_with_capacity(v___x_712_);
lean_inc_ref(v_k_704_);
v___x_714_ = lean_array_push(v___x_713_, v_k_704_);
v___x_715_ = lean_array_push(v___x_714_, v___x_711_);
v___x_716_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_716_, 0, v___x_715_);
v___x_717_ = lasm_js_call(v___x_707_, v___x_708_, v___x_709_, v_a_706_, v___x_716_);
lean_dec_ref_known(v___x_716_, 1);
lean_dec(v_a_706_);
if (lean_obj_tag(v___x_717_) == 0)
{
lean_object* v_a_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; 
v_a_718_ = lean_ctor_get(v___x_717_, 0);
lean_inc(v_a_718_);
lean_dec_ref_known(v___x_717_, 1);
v___x_719_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__1));
v___x_720_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_704_);
v___x_721_ = lean_string_append(v___x_719_, v___x_720_);
lean_dec_ref(v___x_720_);
v___x_722_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1(v___x_721_, v_a_718_);
lean_dec(v_a_718_);
lean_dec_ref(v___x_721_);
return v___x_722_;
}
else
{
lean_object* v_a_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_730_; 
lean_dec_ref_known(v_k_704_, 1);
v_a_723_ = lean_ctor_get(v___x_717_, 0);
v_isSharedCheck_730_ = !lean_is_exclusive(v___x_717_);
if (v_isSharedCheck_730_ == 0)
{
v___x_725_ = v___x_717_;
v_isShared_726_ = v_isSharedCheck_730_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_a_723_);
lean_dec(v___x_717_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_730_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
lean_object* v___x_728_; 
if (v_isShared_726_ == 0)
{
v___x_728_ = v___x_725_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v_a_723_);
v___x_728_ = v_reuseFailAlloc_729_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
return v___x_728_;
}
}
}
}
else
{
lean_object* v_a_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_738_; 
lean_dec_ref_known(v_k_704_, 1);
lean_dec(v_o_701_);
v_a_731_ = lean_ctor_get(v___x_705_, 0);
v_isSharedCheck_738_ = !lean_is_exclusive(v___x_705_);
if (v_isSharedCheck_738_ == 0)
{
v___x_733_ = v___x_705_;
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
else
{
lean_inc(v_a_731_);
lean_dec(v___x_705_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
lean_object* v___x_736_; 
if (v_isShared_734_ == 0)
{
v___x_736_ = v___x_733_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v_a_731_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1___boxed(lean_object* v_o_739_, lean_object* v_key_740_, lean_object* v_a_741_){
_start:
{
lean_object* v_res_742_; 
v_res_742_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_o_739_, v_key_740_);
return v_res_742_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_viewBytes(lean_object* v_x_754_){
_start:
{
switch(lean_obj_tag(v_x_754_))
{
case 6:
{
lean_object* v_b_756_; lean_object* v___x_757_; 
v_b_756_ = lean_ctor_get(v_x_754_, 0);
lean_inc_ref(v_b_756_);
lean_dec_ref_known(v_x_754_, 1);
v___x_757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_757_, 0, v_b_756_);
return v___x_757_;
}
case 9:
{
lean_object* v_value_758_; lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_826_; 
v_value_758_ = lean_ctor_get(v_x_754_, 0);
v_isSharedCheck_826_ = !lean_is_exclusive(v_x_754_);
if (v_isSharedCheck_826_ == 0)
{
lean_object* v_unused_827_; 
v_unused_827_ = lean_ctor_get(v_x_754_, 1);
lean_dec(v_unused_827_);
v___x_760_ = v_x_754_;
v_isShared_761_ = v_isSharedCheck_826_;
goto v_resetjp_759_;
}
else
{
lean_inc(v_value_758_);
lean_dec(v_x_754_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_826_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v___x_762_; lean_object* v___x_763_; 
v___x_762_ = ((lean_object*)(l_Lasm_JS_Web_Support_viewBytes___closed__0));
lean_inc(v_value_758_);
v___x_763_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_value_758_, v___x_762_);
if (lean_obj_tag(v___x_763_) == 0)
{
lean_object* v_a_764_; lean_object* v___x_765_; lean_object* v___x_766_; 
v_a_764_ = lean_ctor_get(v___x_763_, 0);
lean_inc(v_a_764_);
lean_dec_ref_known(v___x_763_, 1);
v___x_765_ = ((lean_object*)(l_Lasm_JS_Web_Support_viewBytes___closed__1));
lean_inc(v_value_758_);
v___x_766_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_value_758_, v___x_765_);
if (lean_obj_tag(v___x_766_) == 0)
{
lean_object* v_a_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
v_a_767_ = lean_ctor_get(v___x_766_, 0);
lean_inc(v_a_767_);
lean_dec_ref_known(v___x_766_, 1);
v___x_768_ = ((lean_object*)(l_Lasm_JS_Web_Support_viewBytes___closed__2));
v___x_769_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_value_758_, v___x_768_);
if (lean_obj_tag(v___x_769_) == 0)
{
lean_object* v_a_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_775_; 
v_a_770_ = lean_ctor_get(v___x_769_, 0);
lean_inc(v_a_770_);
lean_dec_ref_known(v___x_769_, 1);
v___x_771_ = lean_unsigned_to_nat(3u);
v___x_772_ = ((lean_object*)(l_Lasm_JS_Web_Support_viewBytes___closed__4));
v___x_773_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
if (v_isShared_761_ == 0)
{
lean_ctor_set(v___x_760_, 1, v___x_773_);
lean_ctor_set(v___x_760_, 0, v_a_764_);
v___x_775_ = v___x_760_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v_a_764_);
lean_ctor_set(v_reuseFailAlloc_801_, 1, v___x_773_);
v___x_775_ = v_reuseFailAlloc_801_;
goto v_reusejp_774_;
}
v_reusejp_774_:
{
lean_object* v___y_777_; lean_object* v___y_778_; lean_object* v___y_786_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; uint8_t v___x_797_; 
v___x_794_ = lean_nat_to_int(v_a_767_);
v___x_795_ = lean_nat_abs(v___x_794_);
v___x_796_ = lean_cstr_to_nat("9007199254740991");
v___x_797_ = lean_nat_dec_le(v___x_795_, v___x_796_);
lean_dec(v___x_795_);
if (v___x_797_ == 0)
{
lean_object* v___x_798_; 
v___x_798_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_798_, 0, v___x_794_);
v___y_786_ = v___x_798_;
goto v___jp_785_;
}
else
{
double v___x_799_; lean_object* v___x_800_; 
v___x_799_ = l_Float_ofInt(v___x_794_);
lean_dec(v___x_794_);
v___x_800_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_800_, 0, v___x_799_);
v___y_786_ = v___x_800_;
goto v___jp_785_;
}
v___jp_776_:
{
lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; uint8_t v___x_783_; lean_object* v___x_784_; 
v___x_779_ = lean_mk_empty_array_with_capacity(v___x_771_);
v___x_780_ = lean_array_push(v___x_779_, v___x_775_);
v___x_781_ = lean_array_push(v___x_780_, v___y_777_);
v___x_782_ = lean_array_push(v___x_781_, v___y_778_);
v___x_783_ = 0;
v___x_784_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_772_, v___x_782_, v___x_783_);
return v___x_784_;
}
v___jp_785_:
{
lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; uint8_t v___x_790_; 
v___x_787_ = lean_nat_to_int(v_a_770_);
v___x_788_ = lean_nat_abs(v___x_787_);
v___x_789_ = lean_cstr_to_nat("9007199254740991");
v___x_790_ = lean_nat_dec_le(v___x_788_, v___x_789_);
lean_dec(v___x_788_);
if (v___x_790_ == 0)
{
lean_object* v___x_791_; 
v___x_791_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_791_, 0, v___x_787_);
v___y_777_ = v___y_786_;
v___y_778_ = v___x_791_;
goto v___jp_776_;
}
else
{
double v___x_792_; lean_object* v___x_793_; 
v___x_792_ = l_Float_ofInt(v___x_787_);
lean_dec(v___x_787_);
v___x_793_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_793_, 0, v___x_792_);
v___y_777_ = v___y_786_;
v___y_778_ = v___x_793_;
goto v___jp_776_;
}
}
}
}
else
{
lean_object* v_a_802_; lean_object* v___x_804_; uint8_t v_isShared_805_; uint8_t v_isSharedCheck_809_; 
lean_dec(v_a_767_);
lean_dec(v_a_764_);
lean_del_object(v___x_760_);
v_a_802_ = lean_ctor_get(v___x_769_, 0);
v_isSharedCheck_809_ = !lean_is_exclusive(v___x_769_);
if (v_isSharedCheck_809_ == 0)
{
v___x_804_ = v___x_769_;
v_isShared_805_ = v_isSharedCheck_809_;
goto v_resetjp_803_;
}
else
{
lean_inc(v_a_802_);
lean_dec(v___x_769_);
v___x_804_ = lean_box(0);
v_isShared_805_ = v_isSharedCheck_809_;
goto v_resetjp_803_;
}
v_resetjp_803_:
{
lean_object* v___x_807_; 
if (v_isShared_805_ == 0)
{
v___x_807_ = v___x_804_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_808_; 
v_reuseFailAlloc_808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_808_, 0, v_a_802_);
v___x_807_ = v_reuseFailAlloc_808_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
return v___x_807_;
}
}
}
}
else
{
lean_object* v_a_810_; lean_object* v___x_812_; uint8_t v_isShared_813_; uint8_t v_isSharedCheck_817_; 
lean_dec(v_a_764_);
lean_del_object(v___x_760_);
lean_dec(v_value_758_);
v_a_810_ = lean_ctor_get(v___x_766_, 0);
v_isSharedCheck_817_ = !lean_is_exclusive(v___x_766_);
if (v_isSharedCheck_817_ == 0)
{
v___x_812_ = v___x_766_;
v_isShared_813_ = v_isSharedCheck_817_;
goto v_resetjp_811_;
}
else
{
lean_inc(v_a_810_);
lean_dec(v___x_766_);
v___x_812_ = lean_box(0);
v_isShared_813_ = v_isSharedCheck_817_;
goto v_resetjp_811_;
}
v_resetjp_811_:
{
lean_object* v___x_815_; 
if (v_isShared_813_ == 0)
{
v___x_815_ = v___x_812_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v_a_810_);
v___x_815_ = v_reuseFailAlloc_816_;
goto v_reusejp_814_;
}
v_reusejp_814_:
{
return v___x_815_;
}
}
}
}
else
{
lean_object* v_a_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_825_; 
lean_del_object(v___x_760_);
lean_dec(v_value_758_);
v_a_818_ = lean_ctor_get(v___x_763_, 0);
v_isSharedCheck_825_ = !lean_is_exclusive(v___x_763_);
if (v_isSharedCheck_825_ == 0)
{
v___x_820_ = v___x_763_;
v_isShared_821_ = v_isSharedCheck_825_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_a_818_);
lean_dec(v___x_763_);
v___x_820_ = lean_box(0);
v_isShared_821_ = v_isSharedCheck_825_;
goto v_resetjp_819_;
}
v_resetjp_819_:
{
lean_object* v___x_823_; 
if (v_isShared_821_ == 0)
{
v___x_823_ = v___x_820_;
goto v_reusejp_822_;
}
else
{
lean_object* v_reuseFailAlloc_824_; 
v_reuseFailAlloc_824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_824_, 0, v_a_818_);
v___x_823_ = v_reuseFailAlloc_824_;
goto v_reusejp_822_;
}
v_reusejp_822_:
{
return v___x_823_;
}
}
}
}
}
default: 
{
lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; 
v___x_828_ = ((lean_object*)(l_Lasm_JS_Web_Support_viewBytes___closed__5));
v___x_829_ = l_Lasm_JS_Data_describe(v_x_754_);
v___x_830_ = lean_string_append(v___x_828_, v___x_829_);
lean_dec_ref(v___x_829_);
v___x_831_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_831_, 0, v___x_830_);
v___x_832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_832_, 0, v___x_831_);
return v___x_832_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_viewBytes___boxed(lean_object* v_x_833_, lean_object* v_a_834_){
_start:
{
lean_object* v_res_835_; 
v_res_835_ = l_Lasm_JS_Web_Support_viewBytes(v_x_833_);
return v_res_835_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(lean_object* v_b_836_, lean_object* v_args_837_, uint8_t v_await_838_){
_start:
{
uint64_t v___y_841_; uint64_t v___y_842_; uint64_t v___x_885_; uint64_t v___y_887_; 
v___x_885_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__0);
if (v_await_838_ == 0)
{
uint64_t v___x_892_; 
v___x_892_ = 0ULL;
v___y_887_ = v___x_892_;
goto v___jp_886_;
}
else
{
uint64_t v___x_893_; 
v___x_893_ = 2ULL;
v___y_887_ = v___x_893_;
goto v___jp_886_;
}
v___jp_840_:
{
uint64_t v_flags_843_; uint32_t v___x_844_; lean_object* v___x_845_; uint32_t v___x_846_; lean_object* v___x_847_; 
v_flags_843_ = lean_uint64_lor(v___y_841_, v___y_842_);
v___x_844_ = 214;
v___x_845_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_836_, v_args_837_);
v___x_846_ = 0;
v___x_847_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_844_, v_flags_843_, v___x_845_, v___x_846_);
lean_dec(v___x_845_);
if (lean_obj_tag(v___x_847_) == 0)
{
if (lean_obj_tag(v___x_847_) == 0)
{
lean_object* v_a_848_; lean_object* v___x_849_; 
v_a_848_ = lean_ctor_get(v___x_847_, 0);
lean_inc(v_a_848_);
lean_dec_ref_known(v___x_847_, 1);
v___x_849_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_848_);
lean_dec(v_a_848_);
if (lean_obj_tag(v___x_849_) == 0)
{
lean_object* v_a_850_; lean_object* v___x_851_; lean_object* v___x_852_; 
v_a_850_ = lean_ctor_get(v___x_849_, 0);
lean_inc(v_a_850_);
lean_dec_ref_known(v___x_849_, 1);
v___x_851_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_836_);
v___x_852_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v___x_851_, v_a_850_);
lean_dec_ref(v___x_851_);
return v___x_852_;
}
else
{
lean_object* v_a_853_; lean_object* v___x_855_; uint8_t v_isShared_856_; uint8_t v_isSharedCheck_860_; 
v_a_853_ = lean_ctor_get(v___x_849_, 0);
v_isSharedCheck_860_ = !lean_is_exclusive(v___x_849_);
if (v_isSharedCheck_860_ == 0)
{
v___x_855_ = v___x_849_;
v_isShared_856_ = v_isSharedCheck_860_;
goto v_resetjp_854_;
}
else
{
lean_inc(v_a_853_);
lean_dec(v___x_849_);
v___x_855_ = lean_box(0);
v_isShared_856_ = v_isSharedCheck_860_;
goto v_resetjp_854_;
}
v_resetjp_854_:
{
lean_object* v___x_858_; 
if (v_isShared_856_ == 0)
{
v___x_858_ = v___x_855_;
goto v_reusejp_857_;
}
else
{
lean_object* v_reuseFailAlloc_859_; 
v_reuseFailAlloc_859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_859_, 0, v_a_853_);
v___x_858_ = v_reuseFailAlloc_859_;
goto v_reusejp_857_;
}
v_reusejp_857_:
{
return v___x_858_;
}
}
}
}
else
{
lean_object* v_a_861_; lean_object* v___x_863_; uint8_t v_isShared_864_; uint8_t v_isSharedCheck_868_; 
v_a_861_ = lean_ctor_get(v___x_847_, 0);
v_isSharedCheck_868_ = !lean_is_exclusive(v___x_847_);
if (v_isSharedCheck_868_ == 0)
{
v___x_863_ = v___x_847_;
v_isShared_864_ = v_isSharedCheck_868_;
goto v_resetjp_862_;
}
else
{
lean_inc(v_a_861_);
lean_dec(v___x_847_);
v___x_863_ = lean_box(0);
v_isShared_864_ = v_isSharedCheck_868_;
goto v_resetjp_862_;
}
v_resetjp_862_:
{
lean_object* v___x_866_; 
if (v_isShared_864_ == 0)
{
lean_ctor_set_tag(v___x_863_, 1);
v___x_866_ = v___x_863_;
goto v_reusejp_865_;
}
else
{
lean_object* v_reuseFailAlloc_867_; 
v_reuseFailAlloc_867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_867_, 0, v_a_861_);
v___x_866_ = v_reuseFailAlloc_867_;
goto v_reusejp_865_;
}
v_reusejp_865_:
{
return v___x_866_;
}
}
}
}
else
{
lean_object* v_a_869_; lean_object* v___x_871_; uint8_t v_isShared_872_; uint8_t v_isSharedCheck_884_; 
v_a_869_ = lean_ctor_get(v___x_847_, 0);
v_isSharedCheck_884_ = !lean_is_exclusive(v___x_847_);
if (v_isSharedCheck_884_ == 0)
{
v___x_871_ = v___x_847_;
v_isShared_872_ = v_isSharedCheck_884_;
goto v_resetjp_870_;
}
else
{
lean_inc(v_a_869_);
lean_dec(v___x_847_);
v___x_871_ = lean_box(0);
v_isShared_872_ = v_isSharedCheck_884_;
goto v_resetjp_870_;
}
v_resetjp_870_:
{
lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_882_; 
v___x_873_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__0));
v___x_874_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_836_);
v___x_875_ = lean_string_append(v___x_873_, v___x_874_);
lean_dec_ref(v___x_874_);
v___x_876_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__0___closed__1));
v___x_877_ = lean_string_append(v___x_875_, v___x_876_);
v___x_878_ = lean_io_error_to_string(v_a_869_);
v___x_879_ = lean_string_append(v___x_877_, v___x_878_);
lean_dec_ref(v___x_878_);
v___x_880_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_880_, 0, v___x_879_);
if (v_isShared_872_ == 0)
{
lean_ctor_set(v___x_871_, 0, v___x_880_);
v___x_882_ = v___x_871_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v___x_880_);
v___x_882_ = v_reuseFailAlloc_883_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
return v___x_882_;
}
}
}
}
v___jp_886_:
{
uint8_t v_construct_888_; uint64_t v___x_889_; 
v_construct_888_ = lean_ctor_get_uint8(v_b_836_, sizeof(void*)*4);
v___x_889_ = lean_uint64_lor(v___x_885_, v___y_887_);
if (v_construct_888_ == 0)
{
uint64_t v___x_890_; 
v___x_890_ = 0ULL;
v___y_841_ = v___x_889_;
v___y_842_ = v___x_890_;
goto v___jp_840_;
}
else
{
uint64_t v___x_891_; 
v___x_891_ = 4ULL;
v___y_841_ = v___x_889_;
v___y_842_ = v___x_891_;
goto v___jp_840_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0___boxed(lean_object* v_b_894_, lean_object* v_args_895_, lean_object* v_await_896_, lean_object* v_a_897_){
_start:
{
uint8_t v_await_boxed_898_; lean_object* v_res_899_; 
v_await_boxed_898_ = lean_unbox(v_await_896_);
v_res_899_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v_b_894_, v_args_895_, v_await_boxed_898_);
lean_dec_ref(v_b_894_);
return v_res_899_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_typedArray(lean_object* v_constructor_908_, lean_object* v_bytes_909_){
_start:
{
lean_object* v___x_911_; uint8_t v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; uint8_t v___x_918_; lean_object* v___x_919_; 
v___x_911_ = ((lean_object*)(l_Lasm_JS_Web_Support_arrayBufferBytes___closed__1));
v___x_912_ = 1;
v___x_913_ = lean_unsigned_to_nat(1u);
v___x_914_ = ((lean_object*)(l_Lasm_JS_Web_Support_typedArray___closed__1));
v___x_915_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_915_, 0, v_bytes_909_);
v___x_916_ = lean_mk_empty_array_with_capacity(v___x_913_);
lean_inc_ref(v___x_916_);
v___x_917_ = lean_array_push(v___x_916_, v___x_915_);
v___x_918_ = 0;
v___x_919_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_914_, v___x_917_, v___x_918_);
if (lean_obj_tag(v___x_919_) == 0)
{
lean_object* v_a_920_; lean_object* v___x_921_; lean_object* v___x_922_; 
v_a_920_ = lean_ctor_get(v___x_919_, 0);
lean_inc(v_a_920_);
lean_dec_ref_known(v___x_919_, 1);
v___x_921_ = ((lean_object*)(l_Lasm_JS_Web_Support_viewBytes___closed__0));
v___x_922_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_920_, v___x_921_);
if (lean_obj_tag(v___x_922_) == 0)
{
lean_object* v_a_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; 
v_a_923_ = lean_ctor_get(v___x_922_, 0);
lean_inc(v_a_923_);
lean_dec_ref_known(v___x_922_, 1);
v___x_924_ = ((lean_object*)(l_Lasm_JS_Web_Support_typedArray___closed__2));
v___x_925_ = lean_string_append(v___x_924_, v_constructor_908_);
v___x_926_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_926_, 0, v___x_925_);
lean_ctor_set(v___x_926_, 1, v___x_911_);
lean_ctor_set(v___x_926_, 2, v_constructor_908_);
lean_ctor_set(v___x_926_, 3, v___x_913_);
lean_ctor_set_uint8(v___x_926_, sizeof(void*)*4, v___x_912_);
v___x_927_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___x_928_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_928_, 0, v_a_923_);
lean_ctor_set(v___x_928_, 1, v___x_927_);
v___x_929_ = lean_array_push(v___x_916_, v___x_928_);
v___x_930_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_926_, v___x_929_, v___x_918_);
lean_dec_ref_known(v___x_926_, 4);
return v___x_930_;
}
else
{
lean_dec_ref(v___x_916_);
lean_dec_ref(v_constructor_908_);
return v___x_922_;
}
}
else
{
lean_dec_ref(v___x_916_);
lean_dec_ref(v_constructor_908_);
return v___x_919_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_typedArray___boxed(lean_object* v_constructor_931_, lean_object* v_bytes_932_, lean_object* v_a_933_){
_start:
{
lean_object* v_res_934_; 
v_res_934_ = l_Lasm_JS_Web_Support_typedArray(v_constructor_931_, v_bytes_932_);
return v_res_934_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number___redArg(lean_object* v_inst_943_, lean_object* v_v_944_){
_start:
{
uint8_t v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_946_ = 0;
v___x_947_ = lean_unsigned_to_nat(1u);
v___x_948_ = ((lean_object*)(l_Lasm_JS_Web_Support_number___redArg___closed__2));
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number___redArg___boxed(lean_object* v_inst_954_, lean_object* v_v_955_, lean_object* v_a_956_){
_start:
{
lean_object* v_res_957_; 
v_res_957_ = l_Lasm_JS_Web_Support_number___redArg(v_inst_954_, v_v_955_);
return v_res_957_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number(lean_object* v_00_u03b1_958_, lean_object* v_inst_959_, lean_object* v_v_960_){
_start:
{
lean_object* v___x_962_; 
v___x_962_ = l_Lasm_JS_Web_Support_number___redArg(v_inst_959_, v_v_960_);
return v___x_962_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number___boxed(lean_object* v_00_u03b1_963_, lean_object* v_inst_964_, lean_object* v_v_965_, lean_object* v_a_966_){
_start:
{
lean_object* v_res_967_; 
v_res_967_ = l_Lasm_JS_Web_Support_number(v_00_u03b1_963_, v_inst_964_, v_v_965_);
return v_res_967_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs___redArg(lean_object* v_inst_976_, lean_object* v_v_977_){
_start:
{
uint8_t v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; 
v___x_979_ = 0;
v___x_980_ = lean_unsigned_to_nat(1u);
v___x_981_ = ((lean_object*)(l_Lasm_JS_Web_Support_cloneAs___redArg___closed__2));
v___x_982_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___x_983_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_983_, 0, v_v_977_);
lean_ctor_set(v___x_983_, 1, v___x_982_);
v___x_984_ = lean_mk_empty_array_with_capacity(v___x_980_);
v___x_985_ = lean_array_push(v___x_984_, v___x_983_);
v___x_986_ = l_Lasm_JS_Binding_invoke___redArg(v_inst_976_, v___x_981_, v___x_985_, v___x_979_);
return v___x_986_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs___redArg___boxed(lean_object* v_inst_987_, lean_object* v_v_988_, lean_object* v_a_989_){
_start:
{
lean_object* v_res_990_; 
v_res_990_ = l_Lasm_JS_Web_Support_cloneAs___redArg(v_inst_987_, v_v_988_);
return v_res_990_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs(lean_object* v_00_u03b1_991_, lean_object* v_inst_992_, lean_object* v_v_993_){
_start:
{
lean_object* v___x_995_; 
v___x_995_ = l_Lasm_JS_Web_Support_cloneAs___redArg(v_inst_992_, v_v_993_);
return v___x_995_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs___boxed(lean_object* v_00_u03b1_996_, lean_object* v_inst_997_, lean_object* v_v_998_, lean_object* v_a_999_){
_start:
{
lean_object* v_res_1000_; 
v_res_1000_ = l_Lasm_JS_Web_Support_cloneAs(v_00_u03b1_996_, v_inst_997_, v_v_998_);
return v_res_1000_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___redArg(lean_object* v_o_1011_, lean_object* v_method_1012_, lean_object* v_inst_1013_){
_start:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; 
v___x_1015_ = l_Lasm_JS_instFromJSValue;
v___x_1016_ = ((lean_object*)(l_Lasm_JS_Web_Support_iterate___redArg___closed__0));
v___x_1017_ = l_Lasm_JS_Value_callMethod___redArg(v_o_1011_, v_method_1012_, v___x_1016_, v___x_1015_);
if (lean_obj_tag(v___x_1017_) == 0)
{
lean_object* v_a_1018_; uint8_t v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; 
v_a_1018_ = lean_ctor_get(v___x_1017_, 0);
lean_inc(v_a_1018_);
lean_dec_ref_known(v___x_1017_, 1);
v___x_1019_ = 0;
v___x_1020_ = lean_unsigned_to_nat(1u);
v___x_1021_ = ((lean_object*)(l_Lasm_JS_Web_Support_iterate___redArg___closed__3));
v___x_1022_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___x_1023_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1023_, 0, v_a_1018_);
lean_ctor_set(v___x_1023_, 1, v___x_1022_);
v___x_1024_ = lean_mk_empty_array_with_capacity(v___x_1020_);
v___x_1025_ = lean_array_push(v___x_1024_, v___x_1023_);
v___x_1026_ = l_Lasm_JS_Binding_invoke___redArg(v_inst_1013_, v___x_1021_, v___x_1025_, v___x_1019_);
return v___x_1026_;
}
else
{
lean_object* v_a_1027_; lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1034_; 
lean_dec_ref(v_inst_1013_);
v_a_1027_ = lean_ctor_get(v___x_1017_, 0);
v_isSharedCheck_1034_ = !lean_is_exclusive(v___x_1017_);
if (v_isSharedCheck_1034_ == 0)
{
v___x_1029_ = v___x_1017_;
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
else
{
lean_inc(v_a_1027_);
lean_dec(v___x_1017_);
v___x_1029_ = lean_box(0);
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
v_resetjp_1028_:
{
lean_object* v___x_1032_; 
if (v_isShared_1030_ == 0)
{
v___x_1032_ = v___x_1029_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v_a_1027_);
v___x_1032_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
return v___x_1032_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___redArg___boxed(lean_object* v_o_1035_, lean_object* v_method_1036_, lean_object* v_inst_1037_, lean_object* v_a_1038_){
_start:
{
lean_object* v_res_1039_; 
v_res_1039_ = l_Lasm_JS_Web_Support_iterate___redArg(v_o_1035_, v_method_1036_, v_inst_1037_);
return v_res_1039_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate(lean_object* v_o_1040_, lean_object* v_method_1041_, lean_object* v_00_u03b1_1042_, lean_object* v_inst_1043_){
_start:
{
lean_object* v___x_1045_; 
v___x_1045_ = l_Lasm_JS_Web_Support_iterate___redArg(v_o_1040_, v_method_1041_, v_inst_1043_);
return v___x_1045_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___boxed(lean_object* v_o_1046_, lean_object* v_method_1047_, lean_object* v_00_u03b1_1048_, lean_object* v_inst_1049_, lean_object* v_a_1050_){
_start:
{
lean_object* v_res_1051_; 
v_res_1051_ = l_Lasm_JS_Web_Support_iterate(v_o_1046_, v_method_1047_, v_00_u03b1_1048_, v_inst_1049_);
return v_res_1051_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___redArg(lean_object* v_inst_1056_, lean_object* v_o_1057_, lean_object* v_a_1058_){
_start:
{
lean_object* v___x_1060_; 
v___x_1060_ = l_Lasm_JS_instFromJSValue;
if (lean_obj_tag(v_a_1058_) == 0)
{
lean_object* v___x_1061_; lean_object* v___x_1062_; 
lean_dec(v_o_1057_);
lean_dec_ref(v_inst_1056_);
v___x_1061_ = ((lean_object*)(l_Lasm_JS_Web_Support_getGlobal_go___redArg___closed__1));
v___x_1062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1062_, 0, v___x_1061_);
return v___x_1062_;
}
else
{
lean_object* v_head_1063_; lean_object* v_tail_1064_; lean_object* v___f_1065_; 
v_head_1063_ = lean_ctor_get(v_a_1058_, 0);
lean_inc(v_head_1063_);
v_tail_1064_ = lean_ctor_get(v_a_1058_, 1);
lean_inc(v_tail_1064_);
lean_dec_ref_known(v_a_1058_, 2);
v___f_1065_ = ((lean_object*)(l_Lasm_JS_Web_Support_getGlobal_go___redArg___closed__2));
if (lean_obj_tag(v_tail_1064_) == 0)
{
lean_object* v___x_1066_; 
v___x_1066_ = l_Lasm_JS_Value_get___redArg(v___f_1065_, v_o_1057_, v_head_1063_, v_inst_1056_);
return v___x_1066_;
}
else
{
lean_object* v___x_1067_; 
v___x_1067_ = l_Lasm_JS_Value_get___redArg(v___f_1065_, v_o_1057_, v_head_1063_, v___x_1060_);
if (lean_obj_tag(v___x_1067_) == 0)
{
lean_object* v_a_1068_; 
v_a_1068_ = lean_ctor_get(v___x_1067_, 0);
lean_inc(v_a_1068_);
lean_dec_ref_known(v___x_1067_, 1);
v_o_1057_ = v_a_1068_;
v_a_1058_ = v_tail_1064_;
goto _start;
}
else
{
lean_object* v_a_1070_; lean_object* v___x_1072_; uint8_t v_isShared_1073_; uint8_t v_isSharedCheck_1077_; 
lean_dec(v_tail_1064_);
lean_dec_ref(v_inst_1056_);
v_a_1070_ = lean_ctor_get(v___x_1067_, 0);
v_isSharedCheck_1077_ = !lean_is_exclusive(v___x_1067_);
if (v_isSharedCheck_1077_ == 0)
{
v___x_1072_ = v___x_1067_;
v_isShared_1073_ = v_isSharedCheck_1077_;
goto v_resetjp_1071_;
}
else
{
lean_inc(v_a_1070_);
lean_dec(v___x_1067_);
v___x_1072_ = lean_box(0);
v_isShared_1073_ = v_isSharedCheck_1077_;
goto v_resetjp_1071_;
}
v_resetjp_1071_:
{
lean_object* v___x_1075_; 
if (v_isShared_1073_ == 0)
{
v___x_1075_ = v___x_1072_;
goto v_reusejp_1074_;
}
else
{
lean_object* v_reuseFailAlloc_1076_; 
v_reuseFailAlloc_1076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1076_, 0, v_a_1070_);
v___x_1075_ = v_reuseFailAlloc_1076_;
goto v_reusejp_1074_;
}
v_reusejp_1074_:
{
return v___x_1075_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___redArg___boxed(lean_object* v_inst_1078_, lean_object* v_o_1079_, lean_object* v_a_1080_, lean_object* v_a_1081_){
_start:
{
lean_object* v_res_1082_; 
v_res_1082_ = l_Lasm_JS_Web_Support_getGlobal_go___redArg(v_inst_1078_, v_o_1079_, v_a_1080_);
return v_res_1082_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go(lean_object* v_00_u03b1_1083_, lean_object* v_inst_1084_, lean_object* v_o_1085_, lean_object* v_a_1086_){
_start:
{
lean_object* v___x_1088_; 
v___x_1088_ = l_Lasm_JS_Web_Support_getGlobal_go___redArg(v_inst_1084_, v_o_1085_, v_a_1086_);
return v___x_1088_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___boxed(lean_object* v_00_u03b1_1089_, lean_object* v_inst_1090_, lean_object* v_o_1091_, lean_object* v_a_1092_, lean_object* v_a_1093_){
_start:
{
lean_object* v_res_1094_; 
v_res_1094_ = l_Lasm_JS_Web_Support_getGlobal_go(v_00_u03b1_1089_, v_inst_1090_, v_o_1091_, v_a_1092_);
return v_res_1094_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___redArg(lean_object* v_path_1095_, lean_object* v_inst_1096_){
_start:
{
lean_object* v___x_1098_; 
v___x_1098_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1098_) == 0)
{
lean_object* v_a_1099_; lean_object* v___x_1100_; 
v_a_1099_ = lean_ctor_get(v___x_1098_, 0);
lean_inc(v_a_1099_);
lean_dec_ref_known(v___x_1098_, 1);
v___x_1100_ = l_Lasm_JS_Web_Support_getGlobal_go___redArg(v_inst_1096_, v_a_1099_, v_path_1095_);
return v___x_1100_;
}
else
{
lean_object* v_a_1101_; lean_object* v___x_1103_; uint8_t v_isShared_1104_; uint8_t v_isSharedCheck_1108_; 
lean_dec_ref(v_inst_1096_);
lean_dec(v_path_1095_);
v_a_1101_ = lean_ctor_get(v___x_1098_, 0);
v_isSharedCheck_1108_ = !lean_is_exclusive(v___x_1098_);
if (v_isSharedCheck_1108_ == 0)
{
v___x_1103_ = v___x_1098_;
v_isShared_1104_ = v_isSharedCheck_1108_;
goto v_resetjp_1102_;
}
else
{
lean_inc(v_a_1101_);
lean_dec(v___x_1098_);
v___x_1103_ = lean_box(0);
v_isShared_1104_ = v_isSharedCheck_1108_;
goto v_resetjp_1102_;
}
v_resetjp_1102_:
{
lean_object* v___x_1106_; 
if (v_isShared_1104_ == 0)
{
v___x_1106_ = v___x_1103_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v_a_1101_);
v___x_1106_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
return v___x_1106_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___redArg___boxed(lean_object* v_path_1109_, lean_object* v_inst_1110_, lean_object* v_a_1111_){
_start:
{
lean_object* v_res_1112_; 
v_res_1112_ = l_Lasm_JS_Web_Support_getGlobal___redArg(v_path_1109_, v_inst_1110_);
return v_res_1112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal(lean_object* v_path_1113_, lean_object* v_00_u03b1_1114_, lean_object* v_inst_1115_){
_start:
{
lean_object* v___x_1117_; 
v___x_1117_ = l_Lasm_JS_Web_Support_getGlobal___redArg(v_path_1113_, v_inst_1115_);
return v___x_1117_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___boxed(lean_object* v_path_1118_, lean_object* v_00_u03b1_1119_, lean_object* v_inst_1120_, lean_object* v_a_1121_){
_start:
{
lean_object* v_res_1122_; 
v_res_1122_ = l_Lasm_JS_Web_Support_getGlobal(v_path_1118_, v_00_u03b1_1119_, v_inst_1120_);
return v_res_1122_;
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
