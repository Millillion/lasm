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
static const lean_string_object l_Lasm_JS_Web_Support_optionalValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "expected an object, null or undefined, got a primitive or plain data"};
static const lean_object* l_Lasm_JS_Web_Support_optionalValue___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Support_optionalValue___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_Support_optionalValue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_Support_optionalValue___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_Support_optionalValue___closed__1 = (const lean_object*)&l_Lasm_JS_Web_Support_optionalValue___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optionalValue(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optionalValue___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optionalValue(lean_object* v_x_377_){
_start:
{
switch(lean_obj_tag(v_x_377_))
{
case 1:
{
goto v___jp_379_;
}
case 0:
{
goto v___jp_379_;
}
case 9:
{
lean_object* v_value_382_; lean_object* v___x_383_; lean_object* v___x_384_; 
v_value_382_ = lean_ctor_get(v_x_377_, 0);
lean_inc(v_value_382_);
v___x_383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_383_, 0, v_value_382_);
v___x_384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_384_, 0, v___x_383_);
return v___x_384_;
}
default: 
{
lean_object* v___x_385_; lean_object* v___x_386_; 
v___x_385_ = ((lean_object*)(l_Lasm_JS_Web_Support_optionalValue___closed__1));
v___x_386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_386_, 0, v___x_385_);
return v___x_386_;
}
}
v___jp_379_:
{
lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_380_ = lean_box(0);
v___x_381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_381_, 0, v___x_380_);
return v___x_381_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optionalValue___boxed(lean_object* v_x_387_, lean_object* v_a_388_){
_start:
{
lean_object* v_res_389_; 
v_res_389_ = l_Lasm_JS_Web_Support_optionalValue(v_x_387_);
lean_dec(v_x_387_);
return v_res_389_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___x_395_ = lean_string_utf8_byte_size(v___x_394_);
return v___x_395_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_396_; lean_object* v___x_397_; uint8_t v___x_398_; 
v___x_396_ = lean_unsigned_to_nat(0u);
v___x_397_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__4);
v___x_398_ = lean_nat_dec_eq(v___x_397_, v___x_396_);
return v___x_398_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__10(void){
_start:
{
lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_403_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__9));
v___x_404_ = lean_unsigned_to_nat(46u);
v___x_405_ = lean_unsigned_to_nat(193u);
v___x_406_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__8));
v___x_407_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__7));
v___x_408_ = l_mkPanicMessageWithDecl(v___x_407_, v___x_406_, v___x_405_, v___x_404_, v___x_403_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0(lean_object* v_context_410_, lean_object* v_d_411_){
_start:
{
lean_object* v___y_414_; lean_object* v___y_415_; 
if (lean_obj_tag(v_d_411_) == 6)
{
lean_object* v_b_419_; lean_object* v___x_421_; uint8_t v_isShared_422_; uint8_t v_isSharedCheck_426_; 
v_b_419_ = lean_ctor_get(v_d_411_, 0);
v_isSharedCheck_426_ = !lean_is_exclusive(v_d_411_);
if (v_isSharedCheck_426_ == 0)
{
v___x_421_ = v_d_411_;
v_isShared_422_ = v_isSharedCheck_426_;
goto v_resetjp_420_;
}
else
{
lean_inc(v_b_419_);
lean_dec(v_d_411_);
v___x_421_ = lean_box(0);
v_isShared_422_ = v_isSharedCheck_426_;
goto v_resetjp_420_;
}
v_resetjp_420_:
{
lean_object* v___x_424_; 
if (v_isShared_422_ == 0)
{
lean_ctor_set_tag(v___x_421_, 0);
v___x_424_ = v___x_421_;
goto v_reusejp_423_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v_b_419_);
v___x_424_ = v_reuseFailAlloc_425_;
goto v_reusejp_423_;
}
v_reusejp_423_:
{
return v___x_424_;
}
}
}
else
{
lean_object* v___x_427_; lean_object* v_received_429_; 
v___x_427_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
if (lean_obj_tag(v_d_411_) == 9)
{
lean_object* v_value_443_; lean_object* v_description_444_; uint8_t v___x_445_; 
v_value_443_ = lean_ctor_get(v_d_411_, 0);
v_description_444_ = lean_ctor_get(v_d_411_, 1);
v___x_445_ = lean_string_dec_eq(v_description_444_, v___x_427_);
if (v___x_445_ == 0)
{
goto v___jp_441_;
}
else
{
uint32_t v___x_446_; uint64_t v___x_447_; lean_object* v___x_448_; uint32_t v___x_449_; lean_object* v___x_450_; 
lean_inc_n(v_value_443_, 2);
lean_dec_ref_known(v_d_411_, 2);
v___x_446_ = 206;
v___x_447_ = 0ULL;
v___x_448_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_448_, 0, v_value_443_);
lean_ctor_set(v___x_448_, 1, v___x_427_);
v___x_449_ = lasm_js_value_handle(v_value_443_);
lean_dec(v_value_443_);
v___x_450_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_446_, v___x_447_, v___x_448_, v___x_449_);
lean_dec_ref_known(v___x_448_, 2);
if (lean_obj_tag(v___x_450_) == 0)
{
lean_object* v_a_451_; uint8_t v___x_452_; 
v_a_451_ = lean_ctor_get(v___x_450_, 0);
lean_inc(v_a_451_);
lean_dec_ref_known(v___x_450_, 1);
v___x_452_ = lean_string_validate_utf8(v_a_451_);
if (v___x_452_ == 0)
{
lean_object* v___x_453_; lean_object* v___x_454_; 
lean_dec(v_a_451_);
v___x_453_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__10, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__10);
v___x_454_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_453_);
v_received_429_ = v___x_454_;
goto v___jp_428_;
}
else
{
lean_object* v___x_455_; 
v___x_455_ = lean_string_from_utf8_unchecked(v_a_451_);
v_received_429_ = v___x_455_;
goto v___jp_428_;
}
}
else
{
lean_object* v___x_456_; 
lean_dec_ref_known(v___x_450_, 1);
v___x_456_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__11));
v_received_429_ = v___x_456_;
goto v___jp_428_;
}
}
}
else
{
goto v___jp_441_;
}
v___jp_428_:
{
lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; uint8_t v___x_439_; 
v___x_430_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__0));
v___x_431_ = lean_string_append(v___x_430_, v_context_410_);
v___x_432_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__1));
v___x_433_ = lean_string_append(v___x_431_, v___x_432_);
v___x_434_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__2));
v___x_435_ = lean_string_append(v___x_433_, v___x_434_);
v___x_436_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__3));
v___x_437_ = lean_string_append(v___x_435_, v___x_436_);
v___x_438_ = lean_string_append(v___x_437_, v_received_429_);
lean_dec_ref(v_received_429_);
v___x_439_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__5, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__5);
if (v___x_439_ == 0)
{
lean_object* v___x_440_; 
v___x_440_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__6));
v___y_414_ = v___x_438_;
v___y_415_ = v___x_440_;
goto v___jp_413_;
}
else
{
v___y_414_ = v___x_438_;
v___y_415_ = v___x_427_;
goto v___jp_413_;
}
}
v___jp_441_:
{
lean_object* v___x_442_; 
v___x_442_ = l_Lasm_JS_Data_describe(v_d_411_);
v_received_429_ = v___x_442_;
goto v___jp_428_;
}
}
v___jp_413_:
{
lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_416_ = lean_string_append(v___y_414_, v___y_415_);
v___x_417_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_417_, 0, v___x_416_);
v___x_418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_418_, 0, v___x_417_);
return v___x_418_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___boxed(lean_object* v_context_457_, lean_object* v_d_458_, lean_object* v_a_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0(v_context_457_, v_d_458_);
lean_dec_ref(v_context_457_);
return v_res_460_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0___closed__0(void){
_start:
{
uint8_t v___x_461_; uint64_t v___x_462_; 
v___x_461_ = 0;
v___x_462_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_461_);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(lean_object* v_b_463_, lean_object* v_args_464_, uint8_t v_await_465_){
_start:
{
uint64_t v___y_468_; uint64_t v___y_469_; uint64_t v___x_504_; uint64_t v___y_506_; 
v___x_504_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0___closed__0);
if (v_await_465_ == 0)
{
uint64_t v___x_511_; 
v___x_511_ = 0ULL;
v___y_506_ = v___x_511_;
goto v___jp_505_;
}
else
{
uint64_t v___x_512_; 
v___x_512_ = 2ULL;
v___y_506_ = v___x_512_;
goto v___jp_505_;
}
v___jp_467_:
{
uint64_t v_flags_470_; uint32_t v___x_471_; lean_object* v___x_472_; uint32_t v___x_473_; lean_object* v___x_474_; 
v_flags_470_ = lean_uint64_lor(v___y_468_, v___y_469_);
v___x_471_ = 214;
v___x_472_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_463_, v_args_464_);
v___x_473_ = 0;
v___x_474_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_471_, v_flags_470_, v___x_472_, v___x_473_);
lean_dec(v___x_472_);
if (lean_obj_tag(v___x_474_) == 0)
{
if (lean_obj_tag(v___x_474_) == 0)
{
lean_object* v_a_475_; lean_object* v___x_476_; 
v_a_475_ = lean_ctor_get(v___x_474_, 0);
lean_inc(v_a_475_);
lean_dec_ref_known(v___x_474_, 1);
v___x_476_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_475_);
lean_dec(v_a_475_);
if (lean_obj_tag(v___x_476_) == 0)
{
lean_object* v_a_477_; lean_object* v___x_478_; lean_object* v___x_479_; 
v_a_477_ = lean_ctor_get(v___x_476_, 0);
lean_inc(v_a_477_);
lean_dec_ref_known(v___x_476_, 1);
v___x_478_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_463_);
v___x_479_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0(v___x_478_, v_a_477_);
lean_dec_ref(v___x_478_);
return v___x_479_;
}
else
{
lean_object* v_a_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_487_; 
v_a_480_ = lean_ctor_get(v___x_476_, 0);
v_isSharedCheck_487_ = !lean_is_exclusive(v___x_476_);
if (v_isSharedCheck_487_ == 0)
{
v___x_482_ = v___x_476_;
v_isShared_483_ = v_isSharedCheck_487_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_a_480_);
lean_dec(v___x_476_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_487_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
lean_object* v___x_485_; 
if (v_isShared_483_ == 0)
{
v___x_485_ = v___x_482_;
goto v_reusejp_484_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v_a_480_);
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
else
{
return v___x_474_;
}
}
else
{
lean_object* v_a_488_; lean_object* v___x_490_; uint8_t v_isShared_491_; uint8_t v_isSharedCheck_503_; 
v_a_488_ = lean_ctor_get(v___x_474_, 0);
v_isSharedCheck_503_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_503_ == 0)
{
v___x_490_ = v___x_474_;
v_isShared_491_ = v_isSharedCheck_503_;
goto v_resetjp_489_;
}
else
{
lean_inc(v_a_488_);
lean_dec(v___x_474_);
v___x_490_ = lean_box(0);
v_isShared_491_ = v_isSharedCheck_503_;
goto v_resetjp_489_;
}
v_resetjp_489_:
{
lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_501_; 
v___x_492_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__0));
v___x_493_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_463_);
v___x_494_ = lean_string_append(v___x_492_, v___x_493_);
lean_dec_ref(v___x_493_);
v___x_495_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__0___closed__1));
v___x_496_ = lean_string_append(v___x_494_, v___x_495_);
v___x_497_ = lean_io_error_to_string(v_a_488_);
v___x_498_ = lean_string_append(v___x_496_, v___x_497_);
lean_dec_ref(v___x_497_);
v___x_499_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_499_, 0, v___x_498_);
if (v_isShared_491_ == 0)
{
lean_ctor_set(v___x_490_, 0, v___x_499_);
v___x_501_ = v___x_490_;
goto v_reusejp_500_;
}
else
{
lean_object* v_reuseFailAlloc_502_; 
v_reuseFailAlloc_502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_502_, 0, v___x_499_);
v___x_501_ = v_reuseFailAlloc_502_;
goto v_reusejp_500_;
}
v_reusejp_500_:
{
return v___x_501_;
}
}
}
}
v___jp_505_:
{
uint8_t v_construct_507_; uint64_t v___x_508_; 
v_construct_507_ = lean_ctor_get_uint8(v_b_463_, sizeof(void*)*4);
v___x_508_ = lean_uint64_lor(v___x_504_, v___y_506_);
if (v_construct_507_ == 0)
{
uint64_t v___x_509_; 
v___x_509_ = 0ULL;
v___y_468_ = v___x_508_;
v___y_469_ = v___x_509_;
goto v___jp_467_;
}
else
{
uint64_t v___x_510_; 
v___x_510_ = 4ULL;
v___y_468_ = v___x_508_;
v___y_469_ = v___x_510_;
goto v___jp_467_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0___boxed(lean_object* v_b_513_, lean_object* v_args_514_, lean_object* v_await_515_, lean_object* v_a_516_){
_start:
{
uint8_t v_await_boxed_517_; lean_object* v_res_518_; 
v_await_boxed_517_ = lean_unbox(v_await_515_);
v_res_518_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v_b_513_, v_args_514_, v_await_boxed_517_);
lean_dec_ref(v_b_513_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arrayBufferBytes(lean_object* v_buffer_528_){
_start:
{
lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; uint8_t v___x_536_; lean_object* v___x_537_; 
v___x_530_ = lean_unsigned_to_nat(1u);
v___x_531_ = ((lean_object*)(l_Lasm_JS_Web_Support_arrayBufferBytes___closed__3));
v___x_532_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___x_533_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_533_, 0, v_buffer_528_);
lean_ctor_set(v___x_533_, 1, v___x_532_);
v___x_534_ = lean_mk_empty_array_with_capacity(v___x_530_);
v___x_535_ = lean_array_push(v___x_534_, v___x_533_);
v___x_536_ = 0;
v___x_537_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_531_, v___x_535_, v___x_536_);
return v___x_537_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arrayBufferBytes___boxed(lean_object* v_buffer_538_, lean_object* v_a_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l_Lasm_JS_Web_Support_arrayBufferBytes(v_buffer_538_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_nullableArrayBufferBytes(lean_object* v_x_542_){
_start:
{
switch(lean_obj_tag(v_x_542_))
{
case 1:
{
goto v___jp_544_;
}
case 0:
{
goto v___jp_544_;
}
case 9:
{
lean_object* v_value_547_; lean_object* v___x_548_; 
v_value_547_ = lean_ctor_get(v_x_542_, 0);
lean_inc(v_value_547_);
lean_dec_ref_known(v_x_542_, 2);
v___x_548_ = l_Lasm_JS_Web_Support_arrayBufferBytes(v_value_547_);
if (lean_obj_tag(v___x_548_) == 0)
{
lean_object* v_a_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_557_; 
v_a_549_ = lean_ctor_get(v___x_548_, 0);
v_isSharedCheck_557_ = !lean_is_exclusive(v___x_548_);
if (v_isSharedCheck_557_ == 0)
{
v___x_551_ = v___x_548_;
v_isShared_552_ = v_isSharedCheck_557_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_a_549_);
lean_dec(v___x_548_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_557_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v___x_553_; lean_object* v___x_555_; 
v___x_553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_553_, 0, v_a_549_);
if (v_isShared_552_ == 0)
{
lean_ctor_set(v___x_551_, 0, v___x_553_);
v___x_555_ = v___x_551_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_556_, 0, v___x_553_);
v___x_555_ = v_reuseFailAlloc_556_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
return v___x_555_;
}
}
}
else
{
lean_object* v_a_558_; lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_565_; 
v_a_558_ = lean_ctor_get(v___x_548_, 0);
v_isSharedCheck_565_ = !lean_is_exclusive(v___x_548_);
if (v_isSharedCheck_565_ == 0)
{
v___x_560_ = v___x_548_;
v_isShared_561_ = v_isSharedCheck_565_;
goto v_resetjp_559_;
}
else
{
lean_inc(v_a_558_);
lean_dec(v___x_548_);
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
default: 
{
lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; 
v___x_566_ = ((lean_object*)(l_Lasm_JS_Web_Support_nullableArrayBufferBytes___closed__0));
v___x_567_ = l_Lasm_JS_Data_describe(v_x_542_);
v___x_568_ = lean_string_append(v___x_566_, v___x_567_);
lean_dec_ref(v___x_567_);
v___x_569_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_569_, 0, v___x_568_);
v___x_570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_570_, 0, v___x_569_);
return v___x_570_;
}
}
v___jp_544_:
{
lean_object* v___x_545_; lean_object* v___x_546_; 
v___x_545_ = lean_box(0);
v___x_546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_546_, 0, v___x_545_);
return v___x_546_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_nullableArrayBufferBytes___boxed(lean_object* v_x_571_, lean_object* v_a_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l_Lasm_JS_Web_Support_nullableArrayBufferBytes(v_x_571_);
return v_res_573_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__0(void){
_start:
{
uint8_t v___x_574_; uint64_t v___x_575_; 
v___x_574_ = 1;
v___x_575_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_574_);
return v___x_575_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object* v_o_577_, lean_object* v_key_578_){
_start:
{
lean_object* v_k_580_; lean_object* v___x_581_; 
v_k_580_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_580_, 0, v_key_578_);
v___x_581_ = l_Lasm_JS_Wire_encodeIO(v_k_580_);
if (lean_obj_tag(v___x_581_) == 0)
{
lean_object* v_a_582_; uint32_t v___x_583_; uint32_t v___x_584_; uint64_t v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; 
v_a_582_ = lean_ctor_get(v___x_581_, 0);
lean_inc(v_a_582_);
lean_dec_ref_known(v___x_581_, 1);
v___x_583_ = 203;
v___x_584_ = lasm_js_value_handle(v_o_577_);
v___x_585_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__0);
v___x_586_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___x_587_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_587_, 0, v_o_577_);
lean_ctor_set(v___x_587_, 1, v___x_586_);
v___x_588_ = lean_unsigned_to_nat(2u);
v___x_589_ = lean_mk_empty_array_with_capacity(v___x_588_);
lean_inc_ref(v_k_580_);
v___x_590_ = lean_array_push(v___x_589_, v_k_580_);
v___x_591_ = lean_array_push(v___x_590_, v___x_587_);
v___x_592_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_592_, 0, v___x_591_);
v___x_593_ = lasm_js_call(v___x_583_, v___x_584_, v___x_585_, v_a_582_, v___x_592_);
lean_dec_ref_known(v___x_592_, 1);
lean_dec(v_a_582_);
if (lean_obj_tag(v___x_593_) == 0)
{
lean_object* v_a_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; 
v_a_594_ = lean_ctor_get(v___x_593_, 0);
lean_inc(v_a_594_);
lean_dec_ref_known(v___x_593_, 1);
v___x_595_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__1));
v___x_596_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_580_);
v___x_597_ = lean_string_append(v___x_595_, v___x_596_);
lean_dec_ref(v___x_596_);
v___x_598_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_597_, v_a_594_);
lean_dec(v_a_594_);
lean_dec_ref(v___x_597_);
return v___x_598_;
}
else
{
lean_object* v_a_599_; lean_object* v___x_601_; uint8_t v_isShared_602_; uint8_t v_isSharedCheck_606_; 
lean_dec_ref_known(v_k_580_, 1);
v_a_599_ = lean_ctor_get(v___x_593_, 0);
v_isSharedCheck_606_ = !lean_is_exclusive(v___x_593_);
if (v_isSharedCheck_606_ == 0)
{
v___x_601_ = v___x_593_;
v_isShared_602_ = v_isSharedCheck_606_;
goto v_resetjp_600_;
}
else
{
lean_inc(v_a_599_);
lean_dec(v___x_593_);
v___x_601_ = lean_box(0);
v_isShared_602_ = v_isSharedCheck_606_;
goto v_resetjp_600_;
}
v_resetjp_600_:
{
lean_object* v___x_604_; 
if (v_isShared_602_ == 0)
{
v___x_604_ = v___x_601_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v_a_599_);
v___x_604_ = v_reuseFailAlloc_605_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
return v___x_604_;
}
}
}
}
else
{
lean_object* v_a_607_; lean_object* v___x_609_; uint8_t v_isShared_610_; uint8_t v_isSharedCheck_614_; 
lean_dec_ref_known(v_k_580_, 1);
lean_dec(v_o_577_);
v_a_607_ = lean_ctor_get(v___x_581_, 0);
v_isSharedCheck_614_ = !lean_is_exclusive(v___x_581_);
if (v_isSharedCheck_614_ == 0)
{
v___x_609_ = v___x_581_;
v_isShared_610_ = v_isSharedCheck_614_;
goto v_resetjp_608_;
}
else
{
lean_inc(v_a_607_);
lean_dec(v___x_581_);
v___x_609_ = lean_box(0);
v_isShared_610_ = v_isSharedCheck_614_;
goto v_resetjp_608_;
}
v_resetjp_608_:
{
lean_object* v___x_612_; 
if (v_isShared_610_ == 0)
{
v___x_612_ = v___x_609_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_613_; 
v_reuseFailAlloc_613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_613_, 0, v_a_607_);
v___x_612_ = v_reuseFailAlloc_613_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
return v___x_612_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___boxed(lean_object* v_o_615_, lean_object* v_key_616_, lean_object* v_a_617_){
_start:
{
lean_object* v_res_618_; 
v_res_618_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_615_, v_key_616_);
return v_res_618_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__2(void){
_start:
{
lean_object* v___x_621_; lean_object* v___x_622_; 
v___x_621_ = lean_unsigned_to_nat(0u);
v___x_622_ = lean_nat_to_int(v___x_621_);
return v___x_622_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2(lean_object* v_context_625_, lean_object* v_d_626_){
_start:
{
lean_object* v___y_629_; lean_object* v___y_630_; lean_object* v___y_635_; lean_object* v_received_636_; lean_object* v___y_655_; lean_object* v_a_658_; lean_object* v_a_683_; 
switch(lean_obj_tag(v_d_626_))
{
case 3:
{
double v_n_689_; lean_object* v___x_690_; 
v_n_689_ = lean_ctor_get_float(v_d_626_, 0);
v___x_690_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_689_);
if (lean_obj_tag(v___x_690_) == 0)
{
lean_object* v___x_691_; 
v___x_691_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__4));
v_a_658_ = v___x_691_;
goto v___jp_657_;
}
else
{
lean_object* v_val_692_; 
v_val_692_ = lean_ctor_get(v___x_690_, 0);
lean_inc(v_val_692_);
lean_dec_ref_known(v___x_690_, 1);
v_a_683_ = v_val_692_;
goto v___jp_682_;
}
}
case 5:
{
lean_object* v_i_693_; 
v_i_693_ = lean_ctor_get(v_d_626_, 0);
lean_inc(v_i_693_);
v_a_683_ = v_i_693_;
goto v___jp_682_;
}
default: 
{
lean_object* v___x_694_; 
v___x_694_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v_a_658_ = v___x_694_;
goto v___jp_657_;
}
}
v___jp_628_:
{
lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; 
v___x_631_ = lean_string_append(v___y_629_, v___y_630_);
lean_dec_ref(v___y_630_);
v___x_632_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_632_, 0, v___x_631_);
v___x_633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_633_, 0, v___x_632_);
return v___x_633_;
}
v___jp_634_:
{
lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; uint8_t v___x_648_; 
v___x_637_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__0));
v___x_638_ = lean_string_append(v___x_637_, v_context_625_);
v___x_639_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__1));
v___x_640_ = lean_string_append(v___x_638_, v___x_639_);
v___x_641_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__0));
v___x_642_ = lean_string_append(v___x_640_, v___x_641_);
v___x_643_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__3));
v___x_644_ = lean_string_append(v___x_642_, v___x_643_);
v___x_645_ = lean_string_append(v___x_644_, v_received_636_);
lean_dec_ref(v_received_636_);
v___x_646_ = lean_string_utf8_byte_size(v___y_635_);
v___x_647_ = lean_unsigned_to_nat(0u);
v___x_648_ = lean_nat_dec_eq(v___x_646_, v___x_647_);
if (v___x_648_ == 0)
{
lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_649_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__1));
v___x_650_ = lean_string_append(v___x_649_, v___y_635_);
v___x_651_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___closed__11));
v___x_652_ = lean_string_append(v___x_650_, v___x_651_);
v___y_629_ = v___x_645_;
v___y_630_ = v___x_652_;
goto v___jp_628_;
}
else
{
lean_object* v___x_653_; 
v___x_653_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___y_629_ = v___x_645_;
v___y_630_ = v___x_653_;
goto v___jp_628_;
}
}
v___jp_654_:
{
lean_object* v___x_656_; 
v___x_656_ = l_Lasm_JS_Data_describe(v_d_626_);
v___y_635_ = v___y_655_;
v_received_636_ = v___x_656_;
goto v___jp_634_;
}
v___jp_657_:
{
if (lean_obj_tag(v_d_626_) == 9)
{
lean_object* v_value_659_; lean_object* v_description_660_; lean_object* v___x_661_; uint8_t v___x_662_; 
v_value_659_ = lean_ctor_get(v_d_626_, 0);
v_description_660_ = lean_ctor_get(v_d_626_, 1);
v___x_661_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___x_662_ = lean_string_dec_eq(v_description_660_, v___x_661_);
if (v___x_662_ == 0)
{
v___y_655_ = v_a_658_;
goto v___jp_654_;
}
else
{
lean_object* v___x_664_; uint8_t v_isShared_665_; uint8_t v_isSharedCheck_679_; 
lean_inc(v_value_659_);
v_isSharedCheck_679_ = !lean_is_exclusive(v_d_626_);
if (v_isSharedCheck_679_ == 0)
{
lean_object* v_unused_680_; lean_object* v_unused_681_; 
v_unused_680_ = lean_ctor_get(v_d_626_, 1);
lean_dec(v_unused_680_);
v_unused_681_ = lean_ctor_get(v_d_626_, 0);
lean_dec(v_unused_681_);
v___x_664_ = v_d_626_;
v_isShared_665_ = v_isSharedCheck_679_;
goto v_resetjp_663_;
}
else
{
lean_dec(v_d_626_);
v___x_664_ = lean_box(0);
v_isShared_665_ = v_isSharedCheck_679_;
goto v_resetjp_663_;
}
v_resetjp_663_:
{
uint32_t v___x_666_; uint64_t v___x_667_; lean_object* v___x_669_; 
v___x_666_ = 206;
v___x_667_ = 0ULL;
lean_inc(v_value_659_);
if (v_isShared_665_ == 0)
{
lean_ctor_set(v___x_664_, 1, v___x_661_);
v___x_669_ = v___x_664_;
goto v_reusejp_668_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v_value_659_);
lean_ctor_set(v_reuseFailAlloc_678_, 1, v___x_661_);
v___x_669_ = v_reuseFailAlloc_678_;
goto v_reusejp_668_;
}
v_reusejp_668_:
{
uint32_t v___x_670_; lean_object* v___x_671_; 
v___x_670_ = lasm_js_value_handle(v_value_659_);
lean_dec(v_value_659_);
v___x_671_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_666_, v___x_667_, v___x_669_, v___x_670_);
lean_dec_ref(v___x_669_);
if (lean_obj_tag(v___x_671_) == 0)
{
lean_object* v_a_672_; uint8_t v___x_673_; 
v_a_672_ = lean_ctor_get(v___x_671_, 0);
lean_inc(v_a_672_);
lean_dec_ref_known(v___x_671_, 1);
v___x_673_ = lean_string_validate_utf8(v_a_672_);
if (v___x_673_ == 0)
{
lean_object* v___x_674_; lean_object* v___x_675_; 
lean_dec(v_a_672_);
v___x_674_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__10, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__10);
v___x_675_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_674_);
v___y_635_ = v_a_658_;
v_received_636_ = v___x_675_;
goto v___jp_634_;
}
else
{
lean_object* v___x_676_; 
v___x_676_ = lean_string_from_utf8_unchecked(v_a_672_);
v___y_635_ = v_a_658_;
v_received_636_ = v___x_676_;
goto v___jp_634_;
}
}
else
{
lean_object* v___x_677_; 
lean_dec_ref_known(v___x_671_, 1);
v___x_677_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__11));
v___y_635_ = v_a_658_;
v_received_636_ = v___x_677_;
goto v___jp_634_;
}
}
}
}
}
else
{
v___y_655_ = v_a_658_;
goto v___jp_654_;
}
}
v___jp_682_:
{
lean_object* v___x_684_; uint8_t v___x_685_; 
v___x_684_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__2, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__2_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__2);
v___x_685_ = lean_int_dec_le(v___x_684_, v_a_683_);
if (v___x_685_ == 0)
{
lean_object* v___x_686_; 
lean_dec(v_a_683_);
v___x_686_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__3));
v_a_658_ = v___x_686_;
goto v___jp_657_;
}
else
{
lean_object* v___x_687_; lean_object* v___x_688_; 
lean_dec(v_d_626_);
v___x_687_ = l_Int_toNat(v_a_683_);
lean_dec(v_a_683_);
v___x_688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_688_, 0, v___x_687_);
return v___x_688_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___boxed(lean_object* v_context_695_, lean_object* v_d_696_, lean_object* v_a_697_){
_start:
{
lean_object* v_res_698_; 
v_res_698_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2(v_context_695_, v_d_696_);
lean_dec_ref(v_context_695_);
return v_res_698_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1(lean_object* v_context_699_, lean_object* v_bytes_700_){
_start:
{
lean_object* v___x_702_; 
v___x_702_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_700_);
if (lean_obj_tag(v___x_702_) == 0)
{
lean_object* v_a_703_; lean_object* v___x_704_; 
v_a_703_ = lean_ctor_get(v___x_702_, 0);
lean_inc(v_a_703_);
lean_dec_ref_known(v___x_702_, 1);
v___x_704_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2(v_context_699_, v_a_703_);
return v___x_704_;
}
else
{
lean_object* v_a_705_; lean_object* v___x_707_; uint8_t v_isShared_708_; uint8_t v_isSharedCheck_712_; 
v_a_705_ = lean_ctor_get(v___x_702_, 0);
v_isSharedCheck_712_ = !lean_is_exclusive(v___x_702_);
if (v_isSharedCheck_712_ == 0)
{
v___x_707_ = v___x_702_;
v_isShared_708_ = v_isSharedCheck_712_;
goto v_resetjp_706_;
}
else
{
lean_inc(v_a_705_);
lean_dec(v___x_702_);
v___x_707_ = lean_box(0);
v_isShared_708_ = v_isSharedCheck_712_;
goto v_resetjp_706_;
}
v_resetjp_706_:
{
lean_object* v___x_710_; 
if (v_isShared_708_ == 0)
{
v___x_710_ = v___x_707_;
goto v_reusejp_709_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v_a_705_);
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1___boxed(lean_object* v_context_713_, lean_object* v_bytes_714_, lean_object* v_a_715_){
_start:
{
lean_object* v_res_716_; 
v_res_716_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1(v_context_713_, v_bytes_714_);
lean_dec_ref(v_bytes_714_);
lean_dec_ref(v_context_713_);
return v_res_716_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(lean_object* v_o_717_, lean_object* v_key_718_){
_start:
{
lean_object* v_k_720_; lean_object* v___x_721_; 
v_k_720_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_720_, 0, v_key_718_);
v___x_721_ = l_Lasm_JS_Wire_encodeIO(v_k_720_);
if (lean_obj_tag(v___x_721_) == 0)
{
lean_object* v_a_722_; uint32_t v___x_723_; uint32_t v___x_724_; uint64_t v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; 
v_a_722_ = lean_ctor_get(v___x_721_, 0);
lean_inc(v_a_722_);
lean_dec_ref_known(v___x_721_, 1);
v___x_723_ = 203;
v___x_724_ = lasm_js_value_handle(v_o_717_);
v___x_725_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0___closed__0);
v___x_726_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___x_727_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_727_, 0, v_o_717_);
lean_ctor_set(v___x_727_, 1, v___x_726_);
v___x_728_ = lean_unsigned_to_nat(2u);
v___x_729_ = lean_mk_empty_array_with_capacity(v___x_728_);
lean_inc_ref(v_k_720_);
v___x_730_ = lean_array_push(v___x_729_, v_k_720_);
v___x_731_ = lean_array_push(v___x_730_, v___x_727_);
v___x_732_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_732_, 0, v___x_731_);
v___x_733_ = lasm_js_call(v___x_723_, v___x_724_, v___x_725_, v_a_722_, v___x_732_);
lean_dec_ref_known(v___x_732_, 1);
lean_dec(v_a_722_);
if (lean_obj_tag(v___x_733_) == 0)
{
lean_object* v_a_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; 
v_a_734_ = lean_ctor_get(v___x_733_, 0);
lean_inc(v_a_734_);
lean_dec_ref_known(v___x_733_, 1);
v___x_735_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__1));
v___x_736_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_720_);
v___x_737_ = lean_string_append(v___x_735_, v___x_736_);
lean_dec_ref(v___x_736_);
v___x_738_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1(v___x_737_, v_a_734_);
lean_dec(v_a_734_);
lean_dec_ref(v___x_737_);
return v___x_738_;
}
else
{
lean_object* v_a_739_; lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_746_; 
lean_dec_ref_known(v_k_720_, 1);
v_a_739_ = lean_ctor_get(v___x_733_, 0);
v_isSharedCheck_746_ = !lean_is_exclusive(v___x_733_);
if (v_isSharedCheck_746_ == 0)
{
v___x_741_ = v___x_733_;
v_isShared_742_ = v_isSharedCheck_746_;
goto v_resetjp_740_;
}
else
{
lean_inc(v_a_739_);
lean_dec(v___x_733_);
v___x_741_ = lean_box(0);
v_isShared_742_ = v_isSharedCheck_746_;
goto v_resetjp_740_;
}
v_resetjp_740_:
{
lean_object* v___x_744_; 
if (v_isShared_742_ == 0)
{
v___x_744_ = v___x_741_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v_a_739_);
v___x_744_ = v_reuseFailAlloc_745_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
return v___x_744_;
}
}
}
}
else
{
lean_object* v_a_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_754_; 
lean_dec_ref_known(v_k_720_, 1);
lean_dec(v_o_717_);
v_a_747_ = lean_ctor_get(v___x_721_, 0);
v_isSharedCheck_754_ = !lean_is_exclusive(v___x_721_);
if (v_isSharedCheck_754_ == 0)
{
v___x_749_ = v___x_721_;
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
else
{
lean_inc(v_a_747_);
lean_dec(v___x_721_);
v___x_749_ = lean_box(0);
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
v_resetjp_748_:
{
lean_object* v___x_752_; 
if (v_isShared_750_ == 0)
{
v___x_752_ = v___x_749_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v_a_747_);
v___x_752_ = v_reuseFailAlloc_753_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
return v___x_752_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1___boxed(lean_object* v_o_755_, lean_object* v_key_756_, lean_object* v_a_757_){
_start:
{
lean_object* v_res_758_; 
v_res_758_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_o_755_, v_key_756_);
return v_res_758_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_viewBytes(lean_object* v_x_770_){
_start:
{
switch(lean_obj_tag(v_x_770_))
{
case 6:
{
lean_object* v_b_772_; lean_object* v___x_773_; 
v_b_772_ = lean_ctor_get(v_x_770_, 0);
lean_inc_ref(v_b_772_);
lean_dec_ref_known(v_x_770_, 1);
v___x_773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_773_, 0, v_b_772_);
return v___x_773_;
}
case 9:
{
lean_object* v_value_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_842_; 
v_value_774_ = lean_ctor_get(v_x_770_, 0);
v_isSharedCheck_842_ = !lean_is_exclusive(v_x_770_);
if (v_isSharedCheck_842_ == 0)
{
lean_object* v_unused_843_; 
v_unused_843_ = lean_ctor_get(v_x_770_, 1);
lean_dec(v_unused_843_);
v___x_776_ = v_x_770_;
v_isShared_777_ = v_isSharedCheck_842_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_value_774_);
lean_dec(v_x_770_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_842_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
lean_object* v___x_778_; lean_object* v___x_779_; 
v___x_778_ = ((lean_object*)(l_Lasm_JS_Web_Support_viewBytes___closed__0));
lean_inc(v_value_774_);
v___x_779_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_value_774_, v___x_778_);
if (lean_obj_tag(v___x_779_) == 0)
{
lean_object* v_a_780_; lean_object* v___x_781_; lean_object* v___x_782_; 
v_a_780_ = lean_ctor_get(v___x_779_, 0);
lean_inc(v_a_780_);
lean_dec_ref_known(v___x_779_, 1);
v___x_781_ = ((lean_object*)(l_Lasm_JS_Web_Support_viewBytes___closed__1));
lean_inc(v_value_774_);
v___x_782_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_value_774_, v___x_781_);
if (lean_obj_tag(v___x_782_) == 0)
{
lean_object* v_a_783_; lean_object* v___x_784_; lean_object* v___x_785_; 
v_a_783_ = lean_ctor_get(v___x_782_, 0);
lean_inc(v_a_783_);
lean_dec_ref_known(v___x_782_, 1);
v___x_784_ = ((lean_object*)(l_Lasm_JS_Web_Support_viewBytes___closed__2));
v___x_785_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_value_774_, v___x_784_);
if (lean_obj_tag(v___x_785_) == 0)
{
lean_object* v_a_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_791_; 
v_a_786_ = lean_ctor_get(v___x_785_, 0);
lean_inc(v_a_786_);
lean_dec_ref_known(v___x_785_, 1);
v___x_787_ = lean_unsigned_to_nat(3u);
v___x_788_ = ((lean_object*)(l_Lasm_JS_Web_Support_viewBytes___closed__4));
v___x_789_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
if (v_isShared_777_ == 0)
{
lean_ctor_set(v___x_776_, 1, v___x_789_);
lean_ctor_set(v___x_776_, 0, v_a_780_);
v___x_791_ = v___x_776_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v_a_780_);
lean_ctor_set(v_reuseFailAlloc_817_, 1, v___x_789_);
v___x_791_ = v_reuseFailAlloc_817_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
lean_object* v___y_793_; lean_object* v___y_794_; lean_object* v___y_802_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; uint8_t v___x_813_; 
v___x_810_ = lean_nat_to_int(v_a_783_);
v___x_811_ = lean_nat_abs(v___x_810_);
v___x_812_ = lean_cstr_to_nat("9007199254740991");
v___x_813_ = lean_nat_dec_le(v___x_811_, v___x_812_);
lean_dec(v___x_811_);
if (v___x_813_ == 0)
{
lean_object* v___x_814_; 
v___x_814_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_814_, 0, v___x_810_);
v___y_802_ = v___x_814_;
goto v___jp_801_;
}
else
{
double v___x_815_; lean_object* v___x_816_; 
v___x_815_ = l_Float_ofInt(v___x_810_);
lean_dec(v___x_810_);
v___x_816_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_816_, 0, v___x_815_);
v___y_802_ = v___x_816_;
goto v___jp_801_;
}
v___jp_792_:
{
lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; uint8_t v___x_799_; lean_object* v___x_800_; 
v___x_795_ = lean_mk_empty_array_with_capacity(v___x_787_);
v___x_796_ = lean_array_push(v___x_795_, v___x_791_);
v___x_797_ = lean_array_push(v___x_796_, v___y_793_);
v___x_798_ = lean_array_push(v___x_797_, v___y_794_);
v___x_799_ = 0;
v___x_800_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_788_, v___x_798_, v___x_799_);
return v___x_800_;
}
v___jp_801_:
{
lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; uint8_t v___x_806_; 
v___x_803_ = lean_nat_to_int(v_a_786_);
v___x_804_ = lean_nat_abs(v___x_803_);
v___x_805_ = lean_cstr_to_nat("9007199254740991");
v___x_806_ = lean_nat_dec_le(v___x_804_, v___x_805_);
lean_dec(v___x_804_);
if (v___x_806_ == 0)
{
lean_object* v___x_807_; 
v___x_807_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_807_, 0, v___x_803_);
v___y_793_ = v___y_802_;
v___y_794_ = v___x_807_;
goto v___jp_792_;
}
else
{
double v___x_808_; lean_object* v___x_809_; 
v___x_808_ = l_Float_ofInt(v___x_803_);
lean_dec(v___x_803_);
v___x_809_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_809_, 0, v___x_808_);
v___y_793_ = v___y_802_;
v___y_794_ = v___x_809_;
goto v___jp_792_;
}
}
}
}
else
{
lean_object* v_a_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_825_; 
lean_dec(v_a_783_);
lean_dec(v_a_780_);
lean_del_object(v___x_776_);
v_a_818_ = lean_ctor_get(v___x_785_, 0);
v_isSharedCheck_825_ = !lean_is_exclusive(v___x_785_);
if (v_isSharedCheck_825_ == 0)
{
v___x_820_ = v___x_785_;
v_isShared_821_ = v_isSharedCheck_825_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_a_818_);
lean_dec(v___x_785_);
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
else
{
lean_object* v_a_826_; lean_object* v___x_828_; uint8_t v_isShared_829_; uint8_t v_isSharedCheck_833_; 
lean_dec(v_a_780_);
lean_del_object(v___x_776_);
lean_dec(v_value_774_);
v_a_826_ = lean_ctor_get(v___x_782_, 0);
v_isSharedCheck_833_ = !lean_is_exclusive(v___x_782_);
if (v_isSharedCheck_833_ == 0)
{
v___x_828_ = v___x_782_;
v_isShared_829_ = v_isSharedCheck_833_;
goto v_resetjp_827_;
}
else
{
lean_inc(v_a_826_);
lean_dec(v___x_782_);
v___x_828_ = lean_box(0);
v_isShared_829_ = v_isSharedCheck_833_;
goto v_resetjp_827_;
}
v_resetjp_827_:
{
lean_object* v___x_831_; 
if (v_isShared_829_ == 0)
{
v___x_831_ = v___x_828_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v_a_826_);
v___x_831_ = v_reuseFailAlloc_832_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
return v___x_831_;
}
}
}
}
else
{
lean_object* v_a_834_; lean_object* v___x_836_; uint8_t v_isShared_837_; uint8_t v_isSharedCheck_841_; 
lean_del_object(v___x_776_);
lean_dec(v_value_774_);
v_a_834_ = lean_ctor_get(v___x_779_, 0);
v_isSharedCheck_841_ = !lean_is_exclusive(v___x_779_);
if (v_isSharedCheck_841_ == 0)
{
v___x_836_ = v___x_779_;
v_isShared_837_ = v_isSharedCheck_841_;
goto v_resetjp_835_;
}
else
{
lean_inc(v_a_834_);
lean_dec(v___x_779_);
v___x_836_ = lean_box(0);
v_isShared_837_ = v_isSharedCheck_841_;
goto v_resetjp_835_;
}
v_resetjp_835_:
{
lean_object* v___x_839_; 
if (v_isShared_837_ == 0)
{
v___x_839_ = v___x_836_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v_a_834_);
v___x_839_ = v_reuseFailAlloc_840_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
return v___x_839_;
}
}
}
}
}
default: 
{
lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_844_ = ((lean_object*)(l_Lasm_JS_Web_Support_viewBytes___closed__5));
v___x_845_ = l_Lasm_JS_Data_describe(v_x_770_);
v___x_846_ = lean_string_append(v___x_844_, v___x_845_);
lean_dec_ref(v___x_845_);
v___x_847_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_847_, 0, v___x_846_);
v___x_848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_848_, 0, v___x_847_);
return v___x_848_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_viewBytes___boxed(lean_object* v_x_849_, lean_object* v_a_850_){
_start:
{
lean_object* v_res_851_; 
v_res_851_ = l_Lasm_JS_Web_Support_viewBytes(v_x_849_);
return v_res_851_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(lean_object* v_b_852_, lean_object* v_args_853_, uint8_t v_await_854_){
_start:
{
uint64_t v___y_857_; uint64_t v___y_858_; uint64_t v___x_901_; uint64_t v___y_903_; 
v___x_901_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__0);
if (v_await_854_ == 0)
{
uint64_t v___x_908_; 
v___x_908_ = 0ULL;
v___y_903_ = v___x_908_;
goto v___jp_902_;
}
else
{
uint64_t v___x_909_; 
v___x_909_ = 2ULL;
v___y_903_ = v___x_909_;
goto v___jp_902_;
}
v___jp_856_:
{
uint64_t v_flags_859_; uint32_t v___x_860_; lean_object* v___x_861_; uint32_t v___x_862_; lean_object* v___x_863_; 
v_flags_859_ = lean_uint64_lor(v___y_857_, v___y_858_);
v___x_860_ = 214;
v___x_861_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_852_, v_args_853_);
v___x_862_ = 0;
v___x_863_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_860_, v_flags_859_, v___x_861_, v___x_862_);
lean_dec(v___x_861_);
if (lean_obj_tag(v___x_863_) == 0)
{
if (lean_obj_tag(v___x_863_) == 0)
{
lean_object* v_a_864_; lean_object* v___x_865_; 
v_a_864_ = lean_ctor_get(v___x_863_, 0);
lean_inc(v_a_864_);
lean_dec_ref_known(v___x_863_, 1);
v___x_865_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_864_);
lean_dec(v_a_864_);
if (lean_obj_tag(v___x_865_) == 0)
{
lean_object* v_a_866_; lean_object* v___x_867_; lean_object* v___x_868_; 
v_a_866_ = lean_ctor_get(v___x_865_, 0);
lean_inc(v_a_866_);
lean_dec_ref_known(v___x_865_, 1);
v___x_867_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_852_);
v___x_868_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v___x_867_, v_a_866_);
lean_dec_ref(v___x_867_);
return v___x_868_;
}
else
{
lean_object* v_a_869_; lean_object* v___x_871_; uint8_t v_isShared_872_; uint8_t v_isSharedCheck_876_; 
v_a_869_ = lean_ctor_get(v___x_865_, 0);
v_isSharedCheck_876_ = !lean_is_exclusive(v___x_865_);
if (v_isSharedCheck_876_ == 0)
{
v___x_871_ = v___x_865_;
v_isShared_872_ = v_isSharedCheck_876_;
goto v_resetjp_870_;
}
else
{
lean_inc(v_a_869_);
lean_dec(v___x_865_);
v___x_871_ = lean_box(0);
v_isShared_872_ = v_isSharedCheck_876_;
goto v_resetjp_870_;
}
v_resetjp_870_:
{
lean_object* v___x_874_; 
if (v_isShared_872_ == 0)
{
v___x_874_ = v___x_871_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v_a_869_);
v___x_874_ = v_reuseFailAlloc_875_;
goto v_reusejp_873_;
}
v_reusejp_873_:
{
return v___x_874_;
}
}
}
}
else
{
lean_object* v_a_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_884_; 
v_a_877_ = lean_ctor_get(v___x_863_, 0);
v_isSharedCheck_884_ = !lean_is_exclusive(v___x_863_);
if (v_isSharedCheck_884_ == 0)
{
v___x_879_ = v___x_863_;
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_a_877_);
lean_dec(v___x_863_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_882_; 
if (v_isShared_880_ == 0)
{
lean_ctor_set_tag(v___x_879_, 1);
v___x_882_ = v___x_879_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_a_877_);
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
else
{
lean_object* v_a_885_; lean_object* v___x_887_; uint8_t v_isShared_888_; uint8_t v_isSharedCheck_900_; 
v_a_885_ = lean_ctor_get(v___x_863_, 0);
v_isSharedCheck_900_ = !lean_is_exclusive(v___x_863_);
if (v_isSharedCheck_900_ == 0)
{
v___x_887_ = v___x_863_;
v_isShared_888_ = v_isSharedCheck_900_;
goto v_resetjp_886_;
}
else
{
lean_inc(v_a_885_);
lean_dec(v___x_863_);
v___x_887_ = lean_box(0);
v_isShared_888_ = v_isSharedCheck_900_;
goto v_resetjp_886_;
}
v_resetjp_886_:
{
lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_898_; 
v___x_889_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__0));
v___x_890_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_852_);
v___x_891_ = lean_string_append(v___x_889_, v___x_890_);
lean_dec_ref(v___x_890_);
v___x_892_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__0___closed__1));
v___x_893_ = lean_string_append(v___x_891_, v___x_892_);
v___x_894_ = lean_io_error_to_string(v_a_885_);
v___x_895_ = lean_string_append(v___x_893_, v___x_894_);
lean_dec_ref(v___x_894_);
v___x_896_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_896_, 0, v___x_895_);
if (v_isShared_888_ == 0)
{
lean_ctor_set(v___x_887_, 0, v___x_896_);
v___x_898_ = v___x_887_;
goto v_reusejp_897_;
}
else
{
lean_object* v_reuseFailAlloc_899_; 
v_reuseFailAlloc_899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_899_, 0, v___x_896_);
v___x_898_ = v_reuseFailAlloc_899_;
goto v_reusejp_897_;
}
v_reusejp_897_:
{
return v___x_898_;
}
}
}
}
v___jp_902_:
{
uint8_t v_construct_904_; uint64_t v___x_905_; 
v_construct_904_ = lean_ctor_get_uint8(v_b_852_, sizeof(void*)*4);
v___x_905_ = lean_uint64_lor(v___x_901_, v___y_903_);
if (v_construct_904_ == 0)
{
uint64_t v___x_906_; 
v___x_906_ = 0ULL;
v___y_857_ = v___x_905_;
v___y_858_ = v___x_906_;
goto v___jp_856_;
}
else
{
uint64_t v___x_907_; 
v___x_907_ = 4ULL;
v___y_857_ = v___x_905_;
v___y_858_ = v___x_907_;
goto v___jp_856_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0___boxed(lean_object* v_b_910_, lean_object* v_args_911_, lean_object* v_await_912_, lean_object* v_a_913_){
_start:
{
uint8_t v_await_boxed_914_; lean_object* v_res_915_; 
v_await_boxed_914_ = lean_unbox(v_await_912_);
v_res_915_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v_b_910_, v_args_911_, v_await_boxed_914_);
lean_dec_ref(v_b_910_);
return v_res_915_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_typedArray(lean_object* v_constructor_924_, lean_object* v_bytes_925_){
_start:
{
lean_object* v___x_927_; uint8_t v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; uint8_t v___x_934_; lean_object* v___x_935_; 
v___x_927_ = ((lean_object*)(l_Lasm_JS_Web_Support_arrayBufferBytes___closed__1));
v___x_928_ = 1;
v___x_929_ = lean_unsigned_to_nat(1u);
v___x_930_ = ((lean_object*)(l_Lasm_JS_Web_Support_typedArray___closed__1));
v___x_931_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_931_, 0, v_bytes_925_);
v___x_932_ = lean_mk_empty_array_with_capacity(v___x_929_);
lean_inc_ref(v___x_932_);
v___x_933_ = lean_array_push(v___x_932_, v___x_931_);
v___x_934_ = 0;
v___x_935_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_930_, v___x_933_, v___x_934_);
if (lean_obj_tag(v___x_935_) == 0)
{
lean_object* v_a_936_; lean_object* v___x_937_; lean_object* v___x_938_; 
v_a_936_ = lean_ctor_get(v___x_935_, 0);
lean_inc(v_a_936_);
lean_dec_ref_known(v___x_935_, 1);
v___x_937_ = ((lean_object*)(l_Lasm_JS_Web_Support_viewBytes___closed__0));
v___x_938_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_936_, v___x_937_);
if (lean_obj_tag(v___x_938_) == 0)
{
lean_object* v_a_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; 
v_a_939_ = lean_ctor_get(v___x_938_, 0);
lean_inc(v_a_939_);
lean_dec_ref_known(v___x_938_, 1);
v___x_940_ = ((lean_object*)(l_Lasm_JS_Web_Support_typedArray___closed__2));
v___x_941_ = lean_string_append(v___x_940_, v_constructor_924_);
v___x_942_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_942_, 0, v___x_941_);
lean_ctor_set(v___x_942_, 1, v___x_927_);
lean_ctor_set(v___x_942_, 2, v_constructor_924_);
lean_ctor_set(v___x_942_, 3, v___x_929_);
lean_ctor_set_uint8(v___x_942_, sizeof(void*)*4, v___x_928_);
v___x_943_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___x_944_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_944_, 0, v_a_939_);
lean_ctor_set(v___x_944_, 1, v___x_943_);
v___x_945_ = lean_array_push(v___x_932_, v___x_944_);
v___x_946_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_942_, v___x_945_, v___x_934_);
lean_dec_ref_known(v___x_942_, 4);
return v___x_946_;
}
else
{
lean_dec_ref(v___x_932_);
lean_dec_ref(v_constructor_924_);
return v___x_938_;
}
}
else
{
lean_dec_ref(v___x_932_);
lean_dec_ref(v_constructor_924_);
return v___x_935_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_typedArray___boxed(lean_object* v_constructor_947_, lean_object* v_bytes_948_, lean_object* v_a_949_){
_start:
{
lean_object* v_res_950_; 
v_res_950_ = l_Lasm_JS_Web_Support_typedArray(v_constructor_947_, v_bytes_948_);
return v_res_950_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number___redArg(lean_object* v_inst_959_, lean_object* v_v_960_){
_start:
{
uint8_t v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; 
v___x_962_ = 0;
v___x_963_ = lean_unsigned_to_nat(1u);
v___x_964_ = ((lean_object*)(l_Lasm_JS_Web_Support_number___redArg___closed__2));
v___x_965_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___x_966_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_966_, 0, v_v_960_);
lean_ctor_set(v___x_966_, 1, v___x_965_);
v___x_967_ = lean_mk_empty_array_with_capacity(v___x_963_);
v___x_968_ = lean_array_push(v___x_967_, v___x_966_);
v___x_969_ = l_Lasm_JS_Binding_invoke___redArg(v_inst_959_, v___x_964_, v___x_968_, v___x_962_);
return v___x_969_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number___redArg___boxed(lean_object* v_inst_970_, lean_object* v_v_971_, lean_object* v_a_972_){
_start:
{
lean_object* v_res_973_; 
v_res_973_ = l_Lasm_JS_Web_Support_number___redArg(v_inst_970_, v_v_971_);
return v_res_973_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number(lean_object* v_00_u03b1_974_, lean_object* v_inst_975_, lean_object* v_v_976_){
_start:
{
lean_object* v___x_978_; 
v___x_978_ = l_Lasm_JS_Web_Support_number___redArg(v_inst_975_, v_v_976_);
return v___x_978_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number___boxed(lean_object* v_00_u03b1_979_, lean_object* v_inst_980_, lean_object* v_v_981_, lean_object* v_a_982_){
_start:
{
lean_object* v_res_983_; 
v_res_983_ = l_Lasm_JS_Web_Support_number(v_00_u03b1_979_, v_inst_980_, v_v_981_);
return v_res_983_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs___redArg(lean_object* v_inst_992_, lean_object* v_v_993_){
_start:
{
uint8_t v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; 
v___x_995_ = 0;
v___x_996_ = lean_unsigned_to_nat(1u);
v___x_997_ = ((lean_object*)(l_Lasm_JS_Web_Support_cloneAs___redArg___closed__2));
v___x_998_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___x_999_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_999_, 0, v_v_993_);
lean_ctor_set(v___x_999_, 1, v___x_998_);
v___x_1000_ = lean_mk_empty_array_with_capacity(v___x_996_);
v___x_1001_ = lean_array_push(v___x_1000_, v___x_999_);
v___x_1002_ = l_Lasm_JS_Binding_invoke___redArg(v_inst_992_, v___x_997_, v___x_1001_, v___x_995_);
return v___x_1002_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs___redArg___boxed(lean_object* v_inst_1003_, lean_object* v_v_1004_, lean_object* v_a_1005_){
_start:
{
lean_object* v_res_1006_; 
v_res_1006_ = l_Lasm_JS_Web_Support_cloneAs___redArg(v_inst_1003_, v_v_1004_);
return v_res_1006_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs(lean_object* v_00_u03b1_1007_, lean_object* v_inst_1008_, lean_object* v_v_1009_){
_start:
{
lean_object* v___x_1011_; 
v___x_1011_ = l_Lasm_JS_Web_Support_cloneAs___redArg(v_inst_1008_, v_v_1009_);
return v___x_1011_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs___boxed(lean_object* v_00_u03b1_1012_, lean_object* v_inst_1013_, lean_object* v_v_1014_, lean_object* v_a_1015_){
_start:
{
lean_object* v_res_1016_; 
v_res_1016_ = l_Lasm_JS_Web_Support_cloneAs(v_00_u03b1_1012_, v_inst_1013_, v_v_1014_);
return v_res_1016_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___redArg(lean_object* v_o_1027_, lean_object* v_method_1028_, lean_object* v_inst_1029_){
_start:
{
lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; 
v___x_1031_ = l_Lasm_JS_instFromJSValue;
v___x_1032_ = ((lean_object*)(l_Lasm_JS_Web_Support_iterate___redArg___closed__0));
v___x_1033_ = l_Lasm_JS_Value_callMethod___redArg(v_o_1027_, v_method_1028_, v___x_1032_, v___x_1031_);
if (lean_obj_tag(v___x_1033_) == 0)
{
lean_object* v_a_1034_; uint8_t v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; 
v_a_1034_ = lean_ctor_get(v___x_1033_, 0);
lean_inc(v_a_1034_);
lean_dec_ref_known(v___x_1033_, 1);
v___x_1035_ = 0;
v___x_1036_ = lean_unsigned_to_nat(1u);
v___x_1037_ = ((lean_object*)(l_Lasm_JS_Web_Support_iterate___redArg___closed__3));
v___x_1038_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___x_1039_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1039_, 0, v_a_1034_);
lean_ctor_set(v___x_1039_, 1, v___x_1038_);
v___x_1040_ = lean_mk_empty_array_with_capacity(v___x_1036_);
v___x_1041_ = lean_array_push(v___x_1040_, v___x_1039_);
v___x_1042_ = l_Lasm_JS_Binding_invoke___redArg(v_inst_1029_, v___x_1037_, v___x_1041_, v___x_1035_);
return v___x_1042_;
}
else
{
lean_object* v_a_1043_; lean_object* v___x_1045_; uint8_t v_isShared_1046_; uint8_t v_isSharedCheck_1050_; 
lean_dec_ref(v_inst_1029_);
v_a_1043_ = lean_ctor_get(v___x_1033_, 0);
v_isSharedCheck_1050_ = !lean_is_exclusive(v___x_1033_);
if (v_isSharedCheck_1050_ == 0)
{
v___x_1045_ = v___x_1033_;
v_isShared_1046_ = v_isSharedCheck_1050_;
goto v_resetjp_1044_;
}
else
{
lean_inc(v_a_1043_);
lean_dec(v___x_1033_);
v___x_1045_ = lean_box(0);
v_isShared_1046_ = v_isSharedCheck_1050_;
goto v_resetjp_1044_;
}
v_resetjp_1044_:
{
lean_object* v___x_1048_; 
if (v_isShared_1046_ == 0)
{
v___x_1048_ = v___x_1045_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1049_; 
v_reuseFailAlloc_1049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1049_, 0, v_a_1043_);
v___x_1048_ = v_reuseFailAlloc_1049_;
goto v_reusejp_1047_;
}
v_reusejp_1047_:
{
return v___x_1048_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___redArg___boxed(lean_object* v_o_1051_, lean_object* v_method_1052_, lean_object* v_inst_1053_, lean_object* v_a_1054_){
_start:
{
lean_object* v_res_1055_; 
v_res_1055_ = l_Lasm_JS_Web_Support_iterate___redArg(v_o_1051_, v_method_1052_, v_inst_1053_);
return v_res_1055_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate(lean_object* v_o_1056_, lean_object* v_method_1057_, lean_object* v_00_u03b1_1058_, lean_object* v_inst_1059_){
_start:
{
lean_object* v___x_1061_; 
v___x_1061_ = l_Lasm_JS_Web_Support_iterate___redArg(v_o_1056_, v_method_1057_, v_inst_1059_);
return v___x_1061_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___boxed(lean_object* v_o_1062_, lean_object* v_method_1063_, lean_object* v_00_u03b1_1064_, lean_object* v_inst_1065_, lean_object* v_a_1066_){
_start:
{
lean_object* v_res_1067_; 
v_res_1067_ = l_Lasm_JS_Web_Support_iterate(v_o_1062_, v_method_1063_, v_00_u03b1_1064_, v_inst_1065_);
return v_res_1067_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___redArg(lean_object* v_inst_1072_, lean_object* v_o_1073_, lean_object* v_a_1074_){
_start:
{
lean_object* v___x_1076_; 
v___x_1076_ = l_Lasm_JS_instFromJSValue;
if (lean_obj_tag(v_a_1074_) == 0)
{
lean_object* v___x_1077_; lean_object* v___x_1078_; 
lean_dec(v_o_1073_);
lean_dec_ref(v_inst_1072_);
v___x_1077_ = ((lean_object*)(l_Lasm_JS_Web_Support_getGlobal_go___redArg___closed__1));
v___x_1078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1078_, 0, v___x_1077_);
return v___x_1078_;
}
else
{
lean_object* v_head_1079_; lean_object* v_tail_1080_; lean_object* v___f_1081_; 
v_head_1079_ = lean_ctor_get(v_a_1074_, 0);
lean_inc(v_head_1079_);
v_tail_1080_ = lean_ctor_get(v_a_1074_, 1);
lean_inc(v_tail_1080_);
lean_dec_ref_known(v_a_1074_, 2);
v___f_1081_ = ((lean_object*)(l_Lasm_JS_Web_Support_getGlobal_go___redArg___closed__2));
if (lean_obj_tag(v_tail_1080_) == 0)
{
lean_object* v___x_1082_; 
v___x_1082_ = l_Lasm_JS_Value_get___redArg(v___f_1081_, v_o_1073_, v_head_1079_, v_inst_1072_);
return v___x_1082_;
}
else
{
lean_object* v___x_1083_; 
v___x_1083_ = l_Lasm_JS_Value_get___redArg(v___f_1081_, v_o_1073_, v_head_1079_, v___x_1076_);
if (lean_obj_tag(v___x_1083_) == 0)
{
lean_object* v_a_1084_; 
v_a_1084_ = lean_ctor_get(v___x_1083_, 0);
lean_inc(v_a_1084_);
lean_dec_ref_known(v___x_1083_, 1);
v_o_1073_ = v_a_1084_;
v_a_1074_ = v_tail_1080_;
goto _start;
}
else
{
lean_object* v_a_1086_; lean_object* v___x_1088_; uint8_t v_isShared_1089_; uint8_t v_isSharedCheck_1093_; 
lean_dec(v_tail_1080_);
lean_dec_ref(v_inst_1072_);
v_a_1086_ = lean_ctor_get(v___x_1083_, 0);
v_isSharedCheck_1093_ = !lean_is_exclusive(v___x_1083_);
if (v_isSharedCheck_1093_ == 0)
{
v___x_1088_ = v___x_1083_;
v_isShared_1089_ = v_isSharedCheck_1093_;
goto v_resetjp_1087_;
}
else
{
lean_inc(v_a_1086_);
lean_dec(v___x_1083_);
v___x_1088_ = lean_box(0);
v_isShared_1089_ = v_isSharedCheck_1093_;
goto v_resetjp_1087_;
}
v_resetjp_1087_:
{
lean_object* v___x_1091_; 
if (v_isShared_1089_ == 0)
{
v___x_1091_ = v___x_1088_;
goto v_reusejp_1090_;
}
else
{
lean_object* v_reuseFailAlloc_1092_; 
v_reuseFailAlloc_1092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1092_, 0, v_a_1086_);
v___x_1091_ = v_reuseFailAlloc_1092_;
goto v_reusejp_1090_;
}
v_reusejp_1090_:
{
return v___x_1091_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___redArg___boxed(lean_object* v_inst_1094_, lean_object* v_o_1095_, lean_object* v_a_1096_, lean_object* v_a_1097_){
_start:
{
lean_object* v_res_1098_; 
v_res_1098_ = l_Lasm_JS_Web_Support_getGlobal_go___redArg(v_inst_1094_, v_o_1095_, v_a_1096_);
return v_res_1098_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go(lean_object* v_00_u03b1_1099_, lean_object* v_inst_1100_, lean_object* v_o_1101_, lean_object* v_a_1102_){
_start:
{
lean_object* v___x_1104_; 
v___x_1104_ = l_Lasm_JS_Web_Support_getGlobal_go___redArg(v_inst_1100_, v_o_1101_, v_a_1102_);
return v___x_1104_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___boxed(lean_object* v_00_u03b1_1105_, lean_object* v_inst_1106_, lean_object* v_o_1107_, lean_object* v_a_1108_, lean_object* v_a_1109_){
_start:
{
lean_object* v_res_1110_; 
v_res_1110_ = l_Lasm_JS_Web_Support_getGlobal_go(v_00_u03b1_1105_, v_inst_1106_, v_o_1107_, v_a_1108_);
return v_res_1110_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___redArg(lean_object* v_path_1111_, lean_object* v_inst_1112_){
_start:
{
lean_object* v___x_1114_; 
v___x_1114_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1114_) == 0)
{
lean_object* v_a_1115_; lean_object* v___x_1116_; 
v_a_1115_ = lean_ctor_get(v___x_1114_, 0);
lean_inc(v_a_1115_);
lean_dec_ref_known(v___x_1114_, 1);
v___x_1116_ = l_Lasm_JS_Web_Support_getGlobal_go___redArg(v_inst_1112_, v_a_1115_, v_path_1111_);
return v___x_1116_;
}
else
{
lean_object* v_a_1117_; lean_object* v___x_1119_; uint8_t v_isShared_1120_; uint8_t v_isSharedCheck_1124_; 
lean_dec_ref(v_inst_1112_);
lean_dec(v_path_1111_);
v_a_1117_ = lean_ctor_get(v___x_1114_, 0);
v_isSharedCheck_1124_ = !lean_is_exclusive(v___x_1114_);
if (v_isSharedCheck_1124_ == 0)
{
v___x_1119_ = v___x_1114_;
v_isShared_1120_ = v_isSharedCheck_1124_;
goto v_resetjp_1118_;
}
else
{
lean_inc(v_a_1117_);
lean_dec(v___x_1114_);
v___x_1119_ = lean_box(0);
v_isShared_1120_ = v_isSharedCheck_1124_;
goto v_resetjp_1118_;
}
v_resetjp_1118_:
{
lean_object* v___x_1122_; 
if (v_isShared_1120_ == 0)
{
v___x_1122_ = v___x_1119_;
goto v_reusejp_1121_;
}
else
{
lean_object* v_reuseFailAlloc_1123_; 
v_reuseFailAlloc_1123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1123_, 0, v_a_1117_);
v___x_1122_ = v_reuseFailAlloc_1123_;
goto v_reusejp_1121_;
}
v_reusejp_1121_:
{
return v___x_1122_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___redArg___boxed(lean_object* v_path_1125_, lean_object* v_inst_1126_, lean_object* v_a_1127_){
_start:
{
lean_object* v_res_1128_; 
v_res_1128_ = l_Lasm_JS_Web_Support_getGlobal___redArg(v_path_1125_, v_inst_1126_);
return v_res_1128_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal(lean_object* v_path_1129_, lean_object* v_00_u03b1_1130_, lean_object* v_inst_1131_){
_start:
{
lean_object* v___x_1133_; 
v___x_1133_ = l_Lasm_JS_Web_Support_getGlobal___redArg(v_path_1129_, v_inst_1131_);
return v___x_1133_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___boxed(lean_object* v_path_1134_, lean_object* v_00_u03b1_1135_, lean_object* v_inst_1136_, lean_object* v_a_1137_){
_start:
{
lean_object* v_res_1138_; 
v_res_1138_ = l_Lasm_JS_Web_Support_getGlobal(v_path_1134_, v_00_u03b1_1135_, v_inst_1136_);
return v_res_1138_;
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
