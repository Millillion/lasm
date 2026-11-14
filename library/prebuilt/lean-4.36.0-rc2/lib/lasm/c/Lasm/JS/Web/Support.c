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
size_t lean_usize_of_nat(lean_object*);
uint8_t l_Array_isEqvAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
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
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__6_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__7;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__8_value;
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
size_t v___x_329_; size_t v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_329_ = ((size_t)0ULL);
v___x_330_ = lean_usize_of_nat(v___x_325_);
v___x_331_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_JS_Web_Support_fields_spec__0(v_fs_323_, v___x_329_, v___x_330_, v___x_326_);
v___x_332_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_332_, 0, v___x_331_);
return v___x_332_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_fields___boxed(lean_object* v_fs_333_){
_start:
{
lean_object* v_res_334_; 
v_res_334_ = l_Lasm_JS_Web_Support_fields(v_fs_333_);
lean_dec_ref(v_fs_333_);
return v_res_334_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___redArg(lean_object* v_inst_336_, lean_object* v_args_337_, lean_object* v_i_338_){
_start:
{
lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; uint8_t v___x_346_; 
v___x_340_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___redArg___closed__0));
v___x_341_ = lean_unsigned_to_nat(1u);
v___x_342_ = lean_nat_add(v_i_338_, v___x_341_);
v___x_343_ = l_Nat_reprFast(v___x_342_);
v___x_344_ = lean_string_append(v___x_340_, v___x_343_);
lean_dec_ref(v___x_343_);
v___x_345_ = lean_array_get_size(v_args_337_);
v___x_346_ = lean_nat_dec_lt(v_i_338_, v___x_345_);
if (v___x_346_ == 0)
{
lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_347_ = lean_box(0);
v___x_348_ = l_Lasm_JS_decodeAs___redArg(v_inst_336_, v___x_344_, v___x_347_);
lean_dec_ref(v___x_344_);
return v___x_348_;
}
else
{
lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_349_ = lean_array_fget_borrowed(v_args_337_, v_i_338_);
lean_inc(v___x_349_);
v___x_350_ = l_Lasm_JS_decodeAs___redArg(v_inst_336_, v___x_344_, v___x_349_);
lean_dec_ref(v___x_344_);
return v___x_350_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___redArg___boxed(lean_object* v_inst_351_, lean_object* v_args_352_, lean_object* v_i_353_, lean_object* v_a_354_){
_start:
{
lean_object* v_res_355_; 
v_res_355_ = l_Lasm_JS_Web_Support_arg___redArg(v_inst_351_, v_args_352_, v_i_353_);
lean_dec(v_i_353_);
lean_dec_ref(v_args_352_);
return v_res_355_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg(lean_object* v_00_u03b1_356_, lean_object* v_inst_357_, lean_object* v_args_358_, lean_object* v_i_359_){
_start:
{
lean_object* v___x_361_; 
v___x_361_ = l_Lasm_JS_Web_Support_arg___redArg(v_inst_357_, v_args_358_, v_i_359_);
return v___x_361_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___boxed(lean_object* v_00_u03b1_362_, lean_object* v_inst_363_, lean_object* v_args_364_, lean_object* v_i_365_, lean_object* v_a_366_){
_start:
{
lean_object* v_res_367_; 
v_res_367_ = l_Lasm_JS_Web_Support_arg(v_00_u03b1_362_, v_inst_363_, v_args_364_, v_i_365_);
lean_dec(v_i_365_);
lean_dec_ref(v_args_364_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optionalValue(lean_object* v_x_371_){
_start:
{
switch(lean_obj_tag(v_x_371_))
{
case 1:
{
goto v___jp_373_;
}
case 0:
{
goto v___jp_373_;
}
case 9:
{
lean_object* v_value_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v_value_376_ = lean_ctor_get(v_x_371_, 0);
lean_inc(v_value_376_);
v___x_377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_377_, 0, v_value_376_);
v___x_378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_378_, 0, v___x_377_);
return v___x_378_;
}
default: 
{
lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_379_ = ((lean_object*)(l_Lasm_JS_Web_Support_optionalValue___closed__1));
v___x_380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_380_, 0, v___x_379_);
return v___x_380_;
}
}
v___jp_373_:
{
lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_374_ = lean_box(0);
v___x_375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_375_, 0, v___x_374_);
return v___x_375_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optionalValue___boxed(lean_object* v_x_381_, lean_object* v_a_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Lasm_JS_Web_Support_optionalValue(v_x_381_);
lean_dec(v_x_381_);
return v_res_383_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__7(void){
_start:
{
lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; 
v___x_391_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__6));
v___x_392_ = lean_unsigned_to_nat(46u);
v___x_393_ = lean_unsigned_to_nat(193u);
v___x_394_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__5));
v___x_395_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__4));
v___x_396_ = l_mkPanicMessageWithDecl(v___x_395_, v___x_394_, v___x_393_, v___x_392_, v___x_391_);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0(lean_object* v_context_398_, lean_object* v_d_399_){
_start:
{
lean_object* v_received_402_; 
if (lean_obj_tag(v_d_399_) == 6)
{
lean_object* v_b_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_423_; 
v_b_416_ = lean_ctor_get(v_d_399_, 0);
v_isSharedCheck_423_ = !lean_is_exclusive(v_d_399_);
if (v_isSharedCheck_423_ == 0)
{
v___x_418_ = v_d_399_;
v_isShared_419_ = v_isSharedCheck_423_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_b_416_);
lean_dec(v_d_399_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_423_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v___x_421_; 
if (v_isShared_419_ == 0)
{
lean_ctor_set_tag(v___x_418_, 0);
v___x_421_ = v___x_418_;
goto v_reusejp_420_;
}
else
{
lean_object* v_reuseFailAlloc_422_; 
v_reuseFailAlloc_422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_422_, 0, v_b_416_);
v___x_421_ = v_reuseFailAlloc_422_;
goto v_reusejp_420_;
}
v_reusejp_420_:
{
return v___x_421_;
}
}
}
else
{
if (lean_obj_tag(v_d_399_) == 9)
{
lean_object* v_value_424_; lean_object* v_description_425_; lean_object* v___x_426_; uint8_t v___x_427_; 
v_value_424_ = lean_ctor_get(v_d_399_, 0);
v_description_425_ = lean_ctor_get(v_d_399_, 1);
v___x_426_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___x_427_ = lean_string_dec_eq(v_description_425_, v___x_426_);
if (v___x_427_ == 0)
{
goto v___jp_414_;
}
else
{
uint32_t v___x_428_; uint64_t v___x_429_; lean_object* v___x_430_; uint32_t v___x_431_; lean_object* v___x_432_; 
lean_inc_n(v_value_424_, 2);
lean_dec_ref_known(v_d_399_, 2);
v___x_428_ = 206;
v___x_429_ = 0ULL;
v___x_430_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_430_, 0, v_value_424_);
lean_ctor_set(v___x_430_, 1, v___x_426_);
v___x_431_ = lasm_js_value_handle(v_value_424_);
lean_dec(v_value_424_);
v___x_432_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_428_, v___x_429_, v___x_430_, v___x_431_);
if (lean_obj_tag(v___x_432_) == 0)
{
lean_object* v_a_433_; uint8_t v___x_434_; 
v_a_433_ = lean_ctor_get(v___x_432_, 0);
lean_inc(v_a_433_);
lean_dec_ref_known(v___x_432_, 1);
v___x_434_ = lean_string_validate_utf8(v_a_433_);
if (v___x_434_ == 0)
{
lean_object* v___x_435_; lean_object* v___x_436_; 
lean_dec(v_a_433_);
v___x_435_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__7, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__7_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__7);
v___x_436_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_435_);
v_received_402_ = v___x_436_;
goto v___jp_401_;
}
else
{
lean_object* v___x_437_; 
v___x_437_ = lean_string_from_utf8_unchecked(v_a_433_);
v_received_402_ = v___x_437_;
goto v___jp_401_;
}
}
else
{
lean_object* v___x_438_; 
lean_dec_ref_known(v___x_432_, 1);
v___x_438_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__8));
v_received_402_ = v___x_438_;
goto v___jp_401_;
}
}
}
else
{
goto v___jp_414_;
}
}
v___jp_401_:
{
lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_403_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__0));
v___x_404_ = lean_string_append(v___x_403_, v_context_398_);
v___x_405_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__1));
v___x_406_ = lean_string_append(v___x_404_, v___x_405_);
v___x_407_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__2));
v___x_408_ = lean_string_append(v___x_406_, v___x_407_);
v___x_409_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__3));
v___x_410_ = lean_string_append(v___x_408_, v___x_409_);
v___x_411_ = lean_string_append(v___x_410_, v_received_402_);
lean_dec_ref(v_received_402_);
v___x_412_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_412_, 0, v___x_411_);
v___x_413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_413_, 0, v___x_412_);
return v___x_413_;
}
v___jp_414_:
{
lean_object* v___x_415_; 
v___x_415_ = l_Lasm_JS_Data_describe(v_d_399_);
v_received_402_ = v___x_415_;
goto v___jp_401_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___boxed(lean_object* v_context_439_, lean_object* v_d_440_, lean_object* v_a_441_){
_start:
{
lean_object* v_res_442_; 
v_res_442_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0(v_context_439_, v_d_440_);
lean_dec_ref(v_context_439_);
return v_res_442_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0___closed__0(void){
_start:
{
uint8_t v___x_443_; uint64_t v___x_444_; 
v___x_443_ = 0;
v___x_444_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_443_);
return v___x_444_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(lean_object* v_b_445_, lean_object* v_args_446_, uint8_t v_await_447_){
_start:
{
uint64_t v___y_450_; uint64_t v___y_451_; uint64_t v___x_486_; uint64_t v___y_488_; 
v___x_486_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0___closed__0);
if (v_await_447_ == 0)
{
uint64_t v___x_493_; 
v___x_493_ = 0ULL;
v___y_488_ = v___x_493_;
goto v___jp_487_;
}
else
{
uint64_t v___x_494_; 
v___x_494_ = 2ULL;
v___y_488_ = v___x_494_;
goto v___jp_487_;
}
v___jp_449_:
{
uint64_t v_flags_452_; uint32_t v___x_453_; lean_object* v___x_454_; uint32_t v___x_455_; lean_object* v___x_456_; 
v_flags_452_ = lean_uint64_lor(v___y_450_, v___y_451_);
v___x_453_ = 214;
v___x_454_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_445_, v_args_446_);
v___x_455_ = 0;
v___x_456_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_453_, v_flags_452_, v___x_454_, v___x_455_);
if (lean_obj_tag(v___x_456_) == 0)
{
lean_object* v_a_457_; lean_object* v___x_458_; 
v_a_457_ = lean_ctor_get(v___x_456_, 0);
lean_inc(v_a_457_);
lean_dec_ref_known(v___x_456_, 1);
v___x_458_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_457_);
lean_dec(v_a_457_);
if (lean_obj_tag(v___x_458_) == 0)
{
lean_object* v_a_459_; lean_object* v___x_460_; lean_object* v___x_461_; 
v_a_459_ = lean_ctor_get(v___x_458_, 0);
lean_inc(v_a_459_);
lean_dec_ref_known(v___x_458_, 1);
v___x_460_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_445_);
v___x_461_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0(v___x_460_, v_a_459_);
lean_dec_ref(v___x_460_);
return v___x_461_;
}
else
{
lean_object* v_a_462_; lean_object* v___x_464_; uint8_t v_isShared_465_; uint8_t v_isSharedCheck_469_; 
v_a_462_ = lean_ctor_get(v___x_458_, 0);
v_isSharedCheck_469_ = !lean_is_exclusive(v___x_458_);
if (v_isSharedCheck_469_ == 0)
{
v___x_464_ = v___x_458_;
v_isShared_465_ = v_isSharedCheck_469_;
goto v_resetjp_463_;
}
else
{
lean_inc(v_a_462_);
lean_dec(v___x_458_);
v___x_464_ = lean_box(0);
v_isShared_465_ = v_isSharedCheck_469_;
goto v_resetjp_463_;
}
v_resetjp_463_:
{
lean_object* v___x_467_; 
if (v_isShared_465_ == 0)
{
v___x_467_ = v___x_464_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v_a_462_);
v___x_467_ = v_reuseFailAlloc_468_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
return v___x_467_;
}
}
}
}
else
{
lean_object* v_a_470_; lean_object* v___x_472_; uint8_t v_isShared_473_; uint8_t v_isSharedCheck_485_; 
v_a_470_ = lean_ctor_get(v___x_456_, 0);
v_isSharedCheck_485_ = !lean_is_exclusive(v___x_456_);
if (v_isSharedCheck_485_ == 0)
{
v___x_472_ = v___x_456_;
v_isShared_473_ = v_isSharedCheck_485_;
goto v_resetjp_471_;
}
else
{
lean_inc(v_a_470_);
lean_dec(v___x_456_);
v___x_472_ = lean_box(0);
v_isShared_473_ = v_isSharedCheck_485_;
goto v_resetjp_471_;
}
v_resetjp_471_:
{
lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_483_; 
v___x_474_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__0));
v___x_475_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_445_);
v___x_476_ = lean_string_append(v___x_474_, v___x_475_);
lean_dec_ref(v___x_475_);
v___x_477_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__0___closed__1));
v___x_478_ = lean_string_append(v___x_476_, v___x_477_);
v___x_479_ = lean_io_error_to_string(v_a_470_);
v___x_480_ = lean_string_append(v___x_478_, v___x_479_);
lean_dec_ref(v___x_479_);
v___x_481_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_481_, 0, v___x_480_);
if (v_isShared_473_ == 0)
{
lean_ctor_set(v___x_472_, 0, v___x_481_);
v___x_483_ = v___x_472_;
goto v_reusejp_482_;
}
else
{
lean_object* v_reuseFailAlloc_484_; 
v_reuseFailAlloc_484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_484_, 0, v___x_481_);
v___x_483_ = v_reuseFailAlloc_484_;
goto v_reusejp_482_;
}
v_reusejp_482_:
{
return v___x_483_;
}
}
}
}
v___jp_487_:
{
uint8_t v_construct_489_; uint64_t v___x_490_; 
v_construct_489_ = lean_ctor_get_uint8(v_b_445_, sizeof(void*)*4);
v___x_490_ = lean_uint64_lor(v___x_486_, v___y_488_);
if (v_construct_489_ == 0)
{
uint64_t v___x_491_; 
v___x_491_ = 0ULL;
v___y_450_ = v___x_490_;
v___y_451_ = v___x_491_;
goto v___jp_449_;
}
else
{
uint64_t v___x_492_; 
v___x_492_ = 4ULL;
v___y_450_ = v___x_490_;
v___y_451_ = v___x_492_;
goto v___jp_449_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0___boxed(lean_object* v_b_495_, lean_object* v_args_496_, lean_object* v_await_497_, lean_object* v_a_498_){
_start:
{
uint8_t v_await_boxed_499_; lean_object* v_res_500_; 
v_await_boxed_499_ = lean_unbox(v_await_497_);
v_res_500_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v_b_495_, v_args_496_, v_await_boxed_499_);
lean_dec_ref(v_b_495_);
return v_res_500_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arrayBufferBytes(lean_object* v_buffer_510_){
_start:
{
lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; uint8_t v___x_518_; lean_object* v___x_519_; 
v___x_512_ = lean_unsigned_to_nat(1u);
v___x_513_ = ((lean_object*)(l_Lasm_JS_Web_Support_arrayBufferBytes___closed__3));
v___x_514_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___x_515_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_515_, 0, v_buffer_510_);
lean_ctor_set(v___x_515_, 1, v___x_514_);
v___x_516_ = lean_mk_empty_array_with_capacity(v___x_512_);
v___x_517_ = lean_array_push(v___x_516_, v___x_515_);
v___x_518_ = 0;
v___x_519_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_513_, v___x_517_, v___x_518_);
return v___x_519_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arrayBufferBytes___boxed(lean_object* v_buffer_520_, lean_object* v_a_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = l_Lasm_JS_Web_Support_arrayBufferBytes(v_buffer_520_);
return v_res_522_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__0(void){
_start:
{
uint8_t v___x_523_; uint64_t v___x_524_; 
v___x_523_ = 1;
v___x_524_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_523_);
return v___x_524_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object* v_o_526_, lean_object* v_key_527_){
_start:
{
lean_object* v_k_529_; lean_object* v___x_530_; 
v_k_529_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_529_, 0, v_key_527_);
lean_inc_ref(v_k_529_);
v___x_530_ = l_Lasm_JS_Wire_encodeIO(v_k_529_);
if (lean_obj_tag(v___x_530_) == 0)
{
lean_object* v_a_531_; uint32_t v___x_532_; uint32_t v___x_533_; uint64_t v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; 
v_a_531_ = lean_ctor_get(v___x_530_, 0);
lean_inc(v_a_531_);
lean_dec_ref_known(v___x_530_, 1);
v___x_532_ = 203;
v___x_533_ = lasm_js_value_handle(v_o_526_);
v___x_534_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__0);
v___x_535_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___x_536_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_536_, 0, v_o_526_);
lean_ctor_set(v___x_536_, 1, v___x_535_);
v___x_537_ = lean_unsigned_to_nat(2u);
v___x_538_ = lean_mk_empty_array_with_capacity(v___x_537_);
lean_inc_ref(v_k_529_);
v___x_539_ = lean_array_push(v___x_538_, v_k_529_);
v___x_540_ = lean_array_push(v___x_539_, v___x_536_);
v___x_541_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_541_, 0, v___x_540_);
v___x_542_ = lasm_js_call(v___x_532_, v___x_533_, v___x_534_, v_a_531_, v___x_541_);
lean_dec_ref_known(v___x_541_, 1);
lean_dec(v_a_531_);
if (lean_obj_tag(v___x_542_) == 0)
{
lean_object* v_a_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; 
v_a_543_ = lean_ctor_get(v___x_542_, 0);
lean_inc(v_a_543_);
lean_dec_ref_known(v___x_542_, 1);
v___x_544_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__1));
v___x_545_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_529_);
v___x_546_ = lean_string_append(v___x_544_, v___x_545_);
lean_dec_ref(v___x_545_);
v___x_547_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_546_, v_a_543_);
lean_dec(v_a_543_);
lean_dec_ref(v___x_546_);
return v___x_547_;
}
else
{
lean_object* v_a_548_; lean_object* v___x_550_; uint8_t v_isShared_551_; uint8_t v_isSharedCheck_555_; 
lean_dec_ref_known(v_k_529_, 1);
v_a_548_ = lean_ctor_get(v___x_542_, 0);
v_isSharedCheck_555_ = !lean_is_exclusive(v___x_542_);
if (v_isSharedCheck_555_ == 0)
{
v___x_550_ = v___x_542_;
v_isShared_551_ = v_isSharedCheck_555_;
goto v_resetjp_549_;
}
else
{
lean_inc(v_a_548_);
lean_dec(v___x_542_);
v___x_550_ = lean_box(0);
v_isShared_551_ = v_isSharedCheck_555_;
goto v_resetjp_549_;
}
v_resetjp_549_:
{
lean_object* v___x_553_; 
if (v_isShared_551_ == 0)
{
v___x_553_ = v___x_550_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v_a_548_);
v___x_553_ = v_reuseFailAlloc_554_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
return v___x_553_;
}
}
}
}
else
{
lean_object* v_a_556_; lean_object* v___x_558_; uint8_t v_isShared_559_; uint8_t v_isSharedCheck_563_; 
lean_dec_ref_known(v_k_529_, 1);
lean_dec(v_o_526_);
v_a_556_ = lean_ctor_get(v___x_530_, 0);
v_isSharedCheck_563_ = !lean_is_exclusive(v___x_530_);
if (v_isSharedCheck_563_ == 0)
{
v___x_558_ = v___x_530_;
v_isShared_559_ = v_isSharedCheck_563_;
goto v_resetjp_557_;
}
else
{
lean_inc(v_a_556_);
lean_dec(v___x_530_);
v___x_558_ = lean_box(0);
v_isShared_559_ = v_isSharedCheck_563_;
goto v_resetjp_557_;
}
v_resetjp_557_:
{
lean_object* v___x_561_; 
if (v_isShared_559_ == 0)
{
v___x_561_ = v___x_558_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_562_; 
v_reuseFailAlloc_562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_562_, 0, v_a_556_);
v___x_561_ = v_reuseFailAlloc_562_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
return v___x_561_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___boxed(lean_object* v_o_564_, lean_object* v_key_565_, lean_object* v_a_566_){
_start:
{
lean_object* v_res_567_; 
v_res_567_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_564_, v_key_565_);
return v_res_567_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__2(void){
_start:
{
lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_570_ = lean_unsigned_to_nat(0u);
v___x_571_ = lean_nat_to_int(v___x_570_);
return v___x_571_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2(lean_object* v_context_574_, lean_object* v_d_575_){
_start:
{
lean_object* v___y_578_; lean_object* v___y_579_; lean_object* v___y_584_; lean_object* v_received_585_; lean_object* v___y_604_; lean_object* v_a_607_; lean_object* v_a_632_; 
switch(lean_obj_tag(v_d_575_))
{
case 3:
{
double v_n_638_; lean_object* v___x_639_; 
v_n_638_ = lean_ctor_get_float(v_d_575_, 0);
v___x_639_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_638_);
if (lean_obj_tag(v___x_639_) == 0)
{
lean_object* v___x_640_; 
v___x_640_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__4));
v_a_607_ = v___x_640_;
goto v___jp_606_;
}
else
{
lean_object* v_val_641_; 
v_val_641_ = lean_ctor_get(v___x_639_, 0);
lean_inc(v_val_641_);
lean_dec_ref_known(v___x_639_, 1);
v_a_632_ = v_val_641_;
goto v___jp_631_;
}
}
case 5:
{
lean_object* v_i_642_; 
v_i_642_ = lean_ctor_get(v_d_575_, 0);
lean_inc(v_i_642_);
v_a_632_ = v_i_642_;
goto v___jp_631_;
}
default: 
{
lean_object* v___x_643_; 
v___x_643_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v_a_607_ = v___x_643_;
goto v___jp_606_;
}
}
v___jp_577_:
{
lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; 
v___x_580_ = lean_string_append(v___y_578_, v___y_579_);
lean_dec_ref(v___y_579_);
v___x_581_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_581_, 0, v___x_580_);
v___x_582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_582_, 0, v___x_581_);
return v___x_582_;
}
v___jp_583_:
{
lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; uint8_t v___x_597_; 
v___x_586_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__0));
v___x_587_ = lean_string_append(v___x_586_, v_context_574_);
v___x_588_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__1));
v___x_589_ = lean_string_append(v___x_587_, v___x_588_);
v___x_590_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__0));
v___x_591_ = lean_string_append(v___x_589_, v___x_590_);
v___x_592_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__3));
v___x_593_ = lean_string_append(v___x_591_, v___x_592_);
v___x_594_ = lean_string_append(v___x_593_, v_received_585_);
lean_dec_ref(v_received_585_);
v___x_595_ = lean_string_utf8_byte_size(v___y_584_);
v___x_596_ = lean_unsigned_to_nat(0u);
v___x_597_ = lean_nat_dec_eq(v___x_595_, v___x_596_);
if (v___x_597_ == 0)
{
lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_598_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__1));
v___x_599_ = lean_string_append(v___x_598_, v___y_584_);
v___x_600_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___closed__11));
v___x_601_ = lean_string_append(v___x_599_, v___x_600_);
v___y_578_ = v___x_594_;
v___y_579_ = v___x_601_;
goto v___jp_577_;
}
else
{
lean_object* v___x_602_; 
v___x_602_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___y_578_ = v___x_594_;
v___y_579_ = v___x_602_;
goto v___jp_577_;
}
}
v___jp_603_:
{
lean_object* v___x_605_; 
v___x_605_ = l_Lasm_JS_Data_describe(v_d_575_);
v___y_584_ = v___y_604_;
v_received_585_ = v___x_605_;
goto v___jp_583_;
}
v___jp_606_:
{
if (lean_obj_tag(v_d_575_) == 9)
{
lean_object* v_value_608_; lean_object* v_description_609_; lean_object* v___x_610_; uint8_t v___x_611_; 
v_value_608_ = lean_ctor_get(v_d_575_, 0);
v_description_609_ = lean_ctor_get(v_d_575_, 1);
v___x_610_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___x_611_ = lean_string_dec_eq(v_description_609_, v___x_610_);
if (v___x_611_ == 0)
{
v___y_604_ = v_a_607_;
goto v___jp_603_;
}
else
{
lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_628_; 
lean_inc(v_value_608_);
v_isSharedCheck_628_ = !lean_is_exclusive(v_d_575_);
if (v_isSharedCheck_628_ == 0)
{
lean_object* v_unused_629_; lean_object* v_unused_630_; 
v_unused_629_ = lean_ctor_get(v_d_575_, 1);
lean_dec(v_unused_629_);
v_unused_630_ = lean_ctor_get(v_d_575_, 0);
lean_dec(v_unused_630_);
v___x_613_ = v_d_575_;
v_isShared_614_ = v_isSharedCheck_628_;
goto v_resetjp_612_;
}
else
{
lean_dec(v_d_575_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_628_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
uint32_t v___x_615_; uint64_t v___x_616_; lean_object* v___x_618_; 
v___x_615_ = 206;
v___x_616_ = 0ULL;
lean_inc(v_value_608_);
if (v_isShared_614_ == 0)
{
lean_ctor_set(v___x_613_, 1, v___x_610_);
v___x_618_ = v___x_613_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v_value_608_);
lean_ctor_set(v_reuseFailAlloc_627_, 1, v___x_610_);
v___x_618_ = v_reuseFailAlloc_627_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
uint32_t v___x_619_; lean_object* v___x_620_; 
v___x_619_ = lasm_js_value_handle(v_value_608_);
lean_dec(v_value_608_);
v___x_620_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_615_, v___x_616_, v___x_618_, v___x_619_);
if (lean_obj_tag(v___x_620_) == 0)
{
lean_object* v_a_621_; uint8_t v___x_622_; 
v_a_621_ = lean_ctor_get(v___x_620_, 0);
lean_inc(v_a_621_);
lean_dec_ref_known(v___x_620_, 1);
v___x_622_ = lean_string_validate_utf8(v_a_621_);
if (v___x_622_ == 0)
{
lean_object* v___x_623_; lean_object* v___x_624_; 
lean_dec(v_a_621_);
v___x_623_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__7, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__7_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__7);
v___x_624_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_623_);
v___y_584_ = v_a_607_;
v_received_585_ = v___x_624_;
goto v___jp_583_;
}
else
{
lean_object* v___x_625_; 
v___x_625_ = lean_string_from_utf8_unchecked(v_a_621_);
v___y_584_ = v_a_607_;
v_received_585_ = v___x_625_;
goto v___jp_583_;
}
}
else
{
lean_object* v___x_626_; 
lean_dec_ref_known(v___x_620_, 1);
v___x_626_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__8));
v___y_584_ = v_a_607_;
v_received_585_ = v___x_626_;
goto v___jp_583_;
}
}
}
}
}
else
{
v___y_604_ = v_a_607_;
goto v___jp_603_;
}
}
v___jp_631_:
{
lean_object* v___x_633_; uint8_t v___x_634_; 
v___x_633_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__2, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__2_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__2);
v___x_634_ = lean_int_dec_le(v___x_633_, v_a_632_);
if (v___x_634_ == 0)
{
lean_object* v___x_635_; 
lean_dec(v_a_632_);
v___x_635_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___closed__3));
v_a_607_ = v___x_635_;
goto v___jp_606_;
}
else
{
lean_object* v___x_636_; lean_object* v___x_637_; 
lean_dec(v_d_575_);
v___x_636_ = l_Int_toNat(v_a_632_);
lean_dec(v_a_632_);
v___x_637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_637_, 0, v___x_636_);
return v___x_637_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2___boxed(lean_object* v_context_644_, lean_object* v_d_645_, lean_object* v_a_646_){
_start:
{
lean_object* v_res_647_; 
v_res_647_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2(v_context_644_, v_d_645_);
lean_dec_ref(v_context_644_);
return v_res_647_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1(lean_object* v_context_648_, lean_object* v_bytes_649_){
_start:
{
lean_object* v___x_651_; 
v___x_651_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_649_);
if (lean_obj_tag(v___x_651_) == 0)
{
lean_object* v_a_652_; lean_object* v___x_653_; 
v_a_652_ = lean_ctor_get(v___x_651_, 0);
lean_inc(v_a_652_);
lean_dec_ref_known(v___x_651_, 1);
v___x_653_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1_spec__2(v_context_648_, v_a_652_);
return v___x_653_;
}
else
{
lean_object* v_a_654_; lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_661_; 
v_a_654_ = lean_ctor_get(v___x_651_, 0);
v_isSharedCheck_661_ = !lean_is_exclusive(v___x_651_);
if (v_isSharedCheck_661_ == 0)
{
v___x_656_ = v___x_651_;
v_isShared_657_ = v_isSharedCheck_661_;
goto v_resetjp_655_;
}
else
{
lean_inc(v_a_654_);
lean_dec(v___x_651_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_661_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
lean_object* v___x_659_; 
if (v_isShared_657_ == 0)
{
v___x_659_ = v___x_656_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v_a_654_);
v___x_659_ = v_reuseFailAlloc_660_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
return v___x_659_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1___boxed(lean_object* v_context_662_, lean_object* v_bytes_663_, lean_object* v_a_664_){
_start:
{
lean_object* v_res_665_; 
v_res_665_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1(v_context_662_, v_bytes_663_);
lean_dec_ref(v_bytes_663_);
lean_dec_ref(v_context_662_);
return v_res_665_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(lean_object* v_o_666_, lean_object* v_key_667_){
_start:
{
lean_object* v_k_669_; lean_object* v___x_670_; 
v_k_669_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_669_, 0, v_key_667_);
lean_inc_ref(v_k_669_);
v___x_670_ = l_Lasm_JS_Wire_encodeIO(v_k_669_);
if (lean_obj_tag(v___x_670_) == 0)
{
lean_object* v_a_671_; uint32_t v___x_672_; uint32_t v___x_673_; uint64_t v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; 
v_a_671_ = lean_ctor_get(v___x_670_, 0);
lean_inc(v_a_671_);
lean_dec_ref_known(v___x_670_, 1);
v___x_672_ = 203;
v___x_673_ = lasm_js_value_handle(v_o_666_);
v___x_674_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0___closed__0);
v___x_675_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___x_676_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_676_, 0, v_o_666_);
lean_ctor_set(v___x_676_, 1, v___x_675_);
v___x_677_ = lean_unsigned_to_nat(2u);
v___x_678_ = lean_mk_empty_array_with_capacity(v___x_677_);
lean_inc_ref(v_k_669_);
v___x_679_ = lean_array_push(v___x_678_, v_k_669_);
v___x_680_ = lean_array_push(v___x_679_, v___x_676_);
v___x_681_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_681_, 0, v___x_680_);
v___x_682_ = lasm_js_call(v___x_672_, v___x_673_, v___x_674_, v_a_671_, v___x_681_);
lean_dec_ref_known(v___x_681_, 1);
lean_dec(v_a_671_);
if (lean_obj_tag(v___x_682_) == 0)
{
lean_object* v_a_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; 
v_a_683_ = lean_ctor_get(v___x_682_, 0);
lean_inc(v_a_683_);
lean_dec_ref_known(v___x_682_, 1);
v___x_684_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__1));
v___x_685_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_669_);
v___x_686_ = lean_string_append(v___x_684_, v___x_685_);
lean_dec_ref(v___x_685_);
v___x_687_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1(v___x_686_, v_a_683_);
lean_dec(v_a_683_);
lean_dec_ref(v___x_686_);
return v___x_687_;
}
else
{
lean_object* v_a_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_695_; 
lean_dec_ref_known(v_k_669_, 1);
v_a_688_ = lean_ctor_get(v___x_682_, 0);
v_isSharedCheck_695_ = !lean_is_exclusive(v___x_682_);
if (v_isSharedCheck_695_ == 0)
{
v___x_690_ = v___x_682_;
v_isShared_691_ = v_isSharedCheck_695_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_a_688_);
lean_dec(v___x_682_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_695_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
lean_object* v___x_693_; 
if (v_isShared_691_ == 0)
{
v___x_693_ = v___x_690_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v_a_688_);
v___x_693_ = v_reuseFailAlloc_694_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
return v___x_693_;
}
}
}
}
else
{
lean_object* v_a_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_703_; 
lean_dec_ref_known(v_k_669_, 1);
lean_dec(v_o_666_);
v_a_696_ = lean_ctor_get(v___x_670_, 0);
v_isSharedCheck_703_ = !lean_is_exclusive(v___x_670_);
if (v_isSharedCheck_703_ == 0)
{
v___x_698_ = v___x_670_;
v_isShared_699_ = v_isSharedCheck_703_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_a_696_);
lean_dec(v___x_670_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_703_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v___x_701_; 
if (v_isShared_699_ == 0)
{
v___x_701_ = v___x_698_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v_a_696_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1___boxed(lean_object* v_o_704_, lean_object* v_key_705_, lean_object* v_a_706_){
_start:
{
lean_object* v_res_707_; 
v_res_707_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_o_704_, v_key_705_);
return v_res_707_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_viewBytes(lean_object* v_x_719_){
_start:
{
switch(lean_obj_tag(v_x_719_))
{
case 6:
{
lean_object* v_b_721_; lean_object* v___x_722_; 
v_b_721_ = lean_ctor_get(v_x_719_, 0);
lean_inc_ref(v_b_721_);
lean_dec_ref_known(v_x_719_, 1);
v___x_722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_722_, 0, v_b_721_);
return v___x_722_;
}
case 9:
{
lean_object* v_value_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_791_; 
v_value_723_ = lean_ctor_get(v_x_719_, 0);
v_isSharedCheck_791_ = !lean_is_exclusive(v_x_719_);
if (v_isSharedCheck_791_ == 0)
{
lean_object* v_unused_792_; 
v_unused_792_ = lean_ctor_get(v_x_719_, 1);
lean_dec(v_unused_792_);
v___x_725_ = v_x_719_;
v_isShared_726_ = v_isSharedCheck_791_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_value_723_);
lean_dec(v_x_719_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_791_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
lean_object* v___x_727_; lean_object* v___x_728_; 
v___x_727_ = ((lean_object*)(l_Lasm_JS_Web_Support_viewBytes___closed__0));
lean_inc(v_value_723_);
v___x_728_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_value_723_, v___x_727_);
if (lean_obj_tag(v___x_728_) == 0)
{
lean_object* v_a_729_; lean_object* v___x_730_; lean_object* v___x_731_; 
v_a_729_ = lean_ctor_get(v___x_728_, 0);
lean_inc(v_a_729_);
lean_dec_ref_known(v___x_728_, 1);
v___x_730_ = ((lean_object*)(l_Lasm_JS_Web_Support_viewBytes___closed__1));
lean_inc(v_value_723_);
v___x_731_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_value_723_, v___x_730_);
if (lean_obj_tag(v___x_731_) == 0)
{
lean_object* v_a_732_; lean_object* v___x_733_; lean_object* v___x_734_; 
v_a_732_ = lean_ctor_get(v___x_731_, 0);
lean_inc(v_a_732_);
lean_dec_ref_known(v___x_731_, 1);
v___x_733_ = ((lean_object*)(l_Lasm_JS_Web_Support_viewBytes___closed__2));
v___x_734_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_value_723_, v___x_733_);
if (lean_obj_tag(v___x_734_) == 0)
{
lean_object* v_a_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_740_; 
v_a_735_ = lean_ctor_get(v___x_734_, 0);
lean_inc(v_a_735_);
lean_dec_ref_known(v___x_734_, 1);
v___x_736_ = lean_unsigned_to_nat(3u);
v___x_737_ = ((lean_object*)(l_Lasm_JS_Web_Support_viewBytes___closed__4));
v___x_738_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
if (v_isShared_726_ == 0)
{
lean_ctor_set(v___x_725_, 1, v___x_738_);
lean_ctor_set(v___x_725_, 0, v_a_729_);
v___x_740_ = v___x_725_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_766_; 
v_reuseFailAlloc_766_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_766_, 0, v_a_729_);
lean_ctor_set(v_reuseFailAlloc_766_, 1, v___x_738_);
v___x_740_ = v_reuseFailAlloc_766_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
lean_object* v___y_742_; lean_object* v___y_743_; lean_object* v___y_751_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; uint8_t v___x_762_; 
v___x_759_ = lean_nat_to_int(v_a_732_);
v___x_760_ = lean_nat_abs(v___x_759_);
v___x_761_ = lean_cstr_to_nat("9007199254740991");
v___x_762_ = lean_nat_dec_le(v___x_760_, v___x_761_);
lean_dec(v___x_760_);
if (v___x_762_ == 0)
{
lean_object* v___x_763_; 
v___x_763_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_763_, 0, v___x_759_);
v___y_751_ = v___x_763_;
goto v___jp_750_;
}
else
{
double v___x_764_; lean_object* v___x_765_; 
v___x_764_ = l_Float_ofInt(v___x_759_);
lean_dec(v___x_759_);
v___x_765_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_765_, 0, v___x_764_);
v___y_751_ = v___x_765_;
goto v___jp_750_;
}
v___jp_741_:
{
lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; uint8_t v___x_748_; lean_object* v___x_749_; 
v___x_744_ = lean_mk_empty_array_with_capacity(v___x_736_);
v___x_745_ = lean_array_push(v___x_744_, v___x_740_);
v___x_746_ = lean_array_push(v___x_745_, v___y_742_);
v___x_747_ = lean_array_push(v___x_746_, v___y_743_);
v___x_748_ = 0;
v___x_749_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_737_, v___x_747_, v___x_748_);
return v___x_749_;
}
v___jp_750_:
{
lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; uint8_t v___x_755_; 
v___x_752_ = lean_nat_to_int(v_a_735_);
v___x_753_ = lean_nat_abs(v___x_752_);
v___x_754_ = lean_cstr_to_nat("9007199254740991");
v___x_755_ = lean_nat_dec_le(v___x_753_, v___x_754_);
lean_dec(v___x_753_);
if (v___x_755_ == 0)
{
lean_object* v___x_756_; 
v___x_756_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_756_, 0, v___x_752_);
v___y_742_ = v___y_751_;
v___y_743_ = v___x_756_;
goto v___jp_741_;
}
else
{
double v___x_757_; lean_object* v___x_758_; 
v___x_757_ = l_Float_ofInt(v___x_752_);
lean_dec(v___x_752_);
v___x_758_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_758_, 0, v___x_757_);
v___y_742_ = v___y_751_;
v___y_743_ = v___x_758_;
goto v___jp_741_;
}
}
}
}
else
{
lean_object* v_a_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_774_; 
lean_dec(v_a_732_);
lean_dec(v_a_729_);
lean_del_object(v___x_725_);
v_a_767_ = lean_ctor_get(v___x_734_, 0);
v_isSharedCheck_774_ = !lean_is_exclusive(v___x_734_);
if (v_isSharedCheck_774_ == 0)
{
v___x_769_ = v___x_734_;
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_a_767_);
lean_dec(v___x_734_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v___x_772_; 
if (v_isShared_770_ == 0)
{
v___x_772_ = v___x_769_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v_a_767_);
v___x_772_ = v_reuseFailAlloc_773_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
return v___x_772_;
}
}
}
}
else
{
lean_object* v_a_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_782_; 
lean_dec(v_a_729_);
lean_del_object(v___x_725_);
lean_dec(v_value_723_);
v_a_775_ = lean_ctor_get(v___x_731_, 0);
v_isSharedCheck_782_ = !lean_is_exclusive(v___x_731_);
if (v_isSharedCheck_782_ == 0)
{
v___x_777_ = v___x_731_;
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_a_775_);
lean_dec(v___x_731_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_782_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___x_780_; 
if (v_isShared_778_ == 0)
{
v___x_780_ = v___x_777_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_a_775_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
return v___x_780_;
}
}
}
}
else
{
lean_object* v_a_783_; lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_790_; 
lean_del_object(v___x_725_);
lean_dec(v_value_723_);
v_a_783_ = lean_ctor_get(v___x_728_, 0);
v_isSharedCheck_790_ = !lean_is_exclusive(v___x_728_);
if (v_isSharedCheck_790_ == 0)
{
v___x_785_ = v___x_728_;
v_isShared_786_ = v_isSharedCheck_790_;
goto v_resetjp_784_;
}
else
{
lean_inc(v_a_783_);
lean_dec(v___x_728_);
v___x_785_ = lean_box(0);
v_isShared_786_ = v_isSharedCheck_790_;
goto v_resetjp_784_;
}
v_resetjp_784_:
{
lean_object* v___x_788_; 
if (v_isShared_786_ == 0)
{
v___x_788_ = v___x_785_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v_a_783_);
v___x_788_ = v_reuseFailAlloc_789_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
return v___x_788_;
}
}
}
}
}
default: 
{
lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; 
v___x_793_ = ((lean_object*)(l_Lasm_JS_Web_Support_viewBytes___closed__5));
v___x_794_ = l_Lasm_JS_Data_describe(v_x_719_);
v___x_795_ = lean_string_append(v___x_793_, v___x_794_);
lean_dec_ref(v___x_794_);
v___x_796_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_796_, 0, v___x_795_);
v___x_797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_797_, 0, v___x_796_);
return v___x_797_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_viewBytes___boxed(lean_object* v_x_798_, lean_object* v_a_799_){
_start:
{
lean_object* v_res_800_; 
v_res_800_ = l_Lasm_JS_Web_Support_viewBytes(v_x_798_);
return v_res_800_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(lean_object* v_b_801_, lean_object* v_args_802_, uint8_t v_await_803_){
_start:
{
uint64_t v___y_806_; uint64_t v___y_807_; uint64_t v___x_842_; uint64_t v___y_844_; 
v___x_842_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0___closed__0);
if (v_await_803_ == 0)
{
uint64_t v___x_849_; 
v___x_849_ = 0ULL;
v___y_844_ = v___x_849_;
goto v___jp_843_;
}
else
{
uint64_t v___x_850_; 
v___x_850_ = 2ULL;
v___y_844_ = v___x_850_;
goto v___jp_843_;
}
v___jp_805_:
{
uint64_t v_flags_808_; uint32_t v___x_809_; lean_object* v___x_810_; uint32_t v___x_811_; lean_object* v___x_812_; 
v_flags_808_ = lean_uint64_lor(v___y_806_, v___y_807_);
v___x_809_ = 214;
v___x_810_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_801_, v_args_802_);
v___x_811_ = 0;
v___x_812_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_809_, v_flags_808_, v___x_810_, v___x_811_);
if (lean_obj_tag(v___x_812_) == 0)
{
lean_object* v_a_813_; lean_object* v___x_814_; 
v_a_813_ = lean_ctor_get(v___x_812_, 0);
lean_inc(v_a_813_);
lean_dec_ref_known(v___x_812_, 1);
v___x_814_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_813_);
lean_dec(v_a_813_);
if (lean_obj_tag(v___x_814_) == 0)
{
lean_object* v_a_815_; lean_object* v___x_816_; lean_object* v___x_817_; 
v_a_815_ = lean_ctor_get(v___x_814_, 0);
lean_inc(v_a_815_);
lean_dec_ref_known(v___x_814_, 1);
v___x_816_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_801_);
v___x_817_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v___x_816_, v_a_815_);
lean_dec_ref(v___x_816_);
return v___x_817_;
}
else
{
lean_object* v_a_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_825_; 
v_a_818_ = lean_ctor_get(v___x_814_, 0);
v_isSharedCheck_825_ = !lean_is_exclusive(v___x_814_);
if (v_isSharedCheck_825_ == 0)
{
v___x_820_ = v___x_814_;
v_isShared_821_ = v_isSharedCheck_825_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_a_818_);
lean_dec(v___x_814_);
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
lean_object* v_a_826_; lean_object* v___x_828_; uint8_t v_isShared_829_; uint8_t v_isSharedCheck_841_; 
v_a_826_ = lean_ctor_get(v___x_812_, 0);
v_isSharedCheck_841_ = !lean_is_exclusive(v___x_812_);
if (v_isSharedCheck_841_ == 0)
{
v___x_828_ = v___x_812_;
v_isShared_829_ = v_isSharedCheck_841_;
goto v_resetjp_827_;
}
else
{
lean_inc(v_a_826_);
lean_dec(v___x_812_);
v___x_828_ = lean_box(0);
v_isShared_829_ = v_isSharedCheck_841_;
goto v_resetjp_827_;
}
v_resetjp_827_:
{
lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_839_; 
v___x_830_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0_spec__0___closed__0));
v___x_831_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_801_);
v___x_832_ = lean_string_append(v___x_830_, v___x_831_);
lean_dec_ref(v___x_831_);
v___x_833_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__0___closed__1));
v___x_834_ = lean_string_append(v___x_832_, v___x_833_);
v___x_835_ = lean_io_error_to_string(v_a_826_);
v___x_836_ = lean_string_append(v___x_834_, v___x_835_);
lean_dec_ref(v___x_835_);
v___x_837_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_837_, 0, v___x_836_);
if (v_isShared_829_ == 0)
{
lean_ctor_set(v___x_828_, 0, v___x_837_);
v___x_839_ = v___x_828_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v___x_837_);
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
v___jp_843_:
{
uint8_t v_construct_845_; uint64_t v___x_846_; 
v_construct_845_ = lean_ctor_get_uint8(v_b_801_, sizeof(void*)*4);
v___x_846_ = lean_uint64_lor(v___x_842_, v___y_844_);
if (v_construct_845_ == 0)
{
uint64_t v___x_847_; 
v___x_847_ = 0ULL;
v___y_806_ = v___x_846_;
v___y_807_ = v___x_847_;
goto v___jp_805_;
}
else
{
uint64_t v___x_848_; 
v___x_848_ = 4ULL;
v___y_806_ = v___x_846_;
v___y_807_ = v___x_848_;
goto v___jp_805_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0___boxed(lean_object* v_b_851_, lean_object* v_args_852_, lean_object* v_await_853_, lean_object* v_a_854_){
_start:
{
uint8_t v_await_boxed_855_; lean_object* v_res_856_; 
v_await_boxed_855_ = lean_unbox(v_await_853_);
v_res_856_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v_b_851_, v_args_852_, v_await_boxed_855_);
lean_dec_ref(v_b_851_);
return v_res_856_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_typedArray(lean_object* v_constructor_865_, lean_object* v_bytes_866_){
_start:
{
lean_object* v___x_868_; uint8_t v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; uint8_t v___x_875_; lean_object* v___x_876_; 
v___x_868_ = ((lean_object*)(l_Lasm_JS_Web_Support_arrayBufferBytes___closed__1));
v___x_869_ = 1;
v___x_870_ = lean_unsigned_to_nat(1u);
v___x_871_ = ((lean_object*)(l_Lasm_JS_Web_Support_typedArray___closed__1));
v___x_872_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_872_, 0, v_bytes_866_);
v___x_873_ = lean_mk_empty_array_with_capacity(v___x_870_);
lean_inc_ref(v___x_873_);
v___x_874_ = lean_array_push(v___x_873_, v___x_872_);
v___x_875_ = 0;
v___x_876_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_871_, v___x_874_, v___x_875_);
if (lean_obj_tag(v___x_876_) == 0)
{
lean_object* v_a_877_; lean_object* v___x_878_; lean_object* v___x_879_; 
v_a_877_ = lean_ctor_get(v___x_876_, 0);
lean_inc(v_a_877_);
lean_dec_ref_known(v___x_876_, 1);
v___x_878_ = ((lean_object*)(l_Lasm_JS_Web_Support_viewBytes___closed__0));
v___x_879_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_877_, v___x_878_);
if (lean_obj_tag(v___x_879_) == 0)
{
lean_object* v_a_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; 
v_a_880_ = lean_ctor_get(v___x_879_, 0);
lean_inc(v_a_880_);
lean_dec_ref_known(v___x_879_, 1);
v___x_881_ = ((lean_object*)(l_Lasm_JS_Web_Support_typedArray___closed__2));
v___x_882_ = lean_string_append(v___x_881_, v_constructor_865_);
v___x_883_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_883_, 0, v___x_882_);
lean_ctor_set(v___x_883_, 1, v___x_868_);
lean_ctor_set(v___x_883_, 2, v_constructor_865_);
lean_ctor_set(v___x_883_, 3, v___x_870_);
lean_ctor_set_uint8(v___x_883_, sizeof(void*)*4, v___x_869_);
v___x_884_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___x_885_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_885_, 0, v_a_880_);
lean_ctor_set(v___x_885_, 1, v___x_884_);
v___x_886_ = lean_array_push(v___x_873_, v___x_885_);
v___x_887_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_883_, v___x_886_, v___x_875_);
lean_dec_ref_known(v___x_883_, 4);
return v___x_887_;
}
else
{
lean_dec_ref(v___x_873_);
lean_dec_ref(v_constructor_865_);
return v___x_879_;
}
}
else
{
lean_dec_ref(v___x_873_);
lean_dec_ref(v_constructor_865_);
return v___x_876_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_typedArray___boxed(lean_object* v_constructor_888_, lean_object* v_bytes_889_, lean_object* v_a_890_){
_start:
{
lean_object* v_res_891_; 
v_res_891_ = l_Lasm_JS_Web_Support_typedArray(v_constructor_888_, v_bytes_889_);
return v_res_891_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number___redArg(lean_object* v_inst_900_, lean_object* v_v_901_){
_start:
{
uint8_t v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; 
v___x_903_ = 0;
v___x_904_ = lean_unsigned_to_nat(1u);
v___x_905_ = ((lean_object*)(l_Lasm_JS_Web_Support_number___redArg___closed__2));
v___x_906_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___x_907_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_907_, 0, v_v_901_);
lean_ctor_set(v___x_907_, 1, v___x_906_);
v___x_908_ = lean_mk_empty_array_with_capacity(v___x_904_);
v___x_909_ = lean_array_push(v___x_908_, v___x_907_);
v___x_910_ = l_Lasm_JS_Binding_invoke___redArg(v_inst_900_, v___x_905_, v___x_909_, v___x_903_);
return v___x_910_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number___redArg___boxed(lean_object* v_inst_911_, lean_object* v_v_912_, lean_object* v_a_913_){
_start:
{
lean_object* v_res_914_; 
v_res_914_ = l_Lasm_JS_Web_Support_number___redArg(v_inst_911_, v_v_912_);
return v_res_914_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number(lean_object* v_00_u03b1_915_, lean_object* v_inst_916_, lean_object* v_v_917_){
_start:
{
lean_object* v___x_919_; 
v___x_919_ = l_Lasm_JS_Web_Support_number___redArg(v_inst_916_, v_v_917_);
return v___x_919_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number___boxed(lean_object* v_00_u03b1_920_, lean_object* v_inst_921_, lean_object* v_v_922_, lean_object* v_a_923_){
_start:
{
lean_object* v_res_924_; 
v_res_924_ = l_Lasm_JS_Web_Support_number(v_00_u03b1_920_, v_inst_921_, v_v_922_);
return v_res_924_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs___redArg(lean_object* v_inst_933_, lean_object* v_v_934_){
_start:
{
uint8_t v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; 
v___x_936_ = 0;
v___x_937_ = lean_unsigned_to_nat(1u);
v___x_938_ = ((lean_object*)(l_Lasm_JS_Web_Support_cloneAs___redArg___closed__2));
v___x_939_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___x_940_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_940_, 0, v_v_934_);
lean_ctor_set(v___x_940_, 1, v___x_939_);
v___x_941_ = lean_mk_empty_array_with_capacity(v___x_937_);
v___x_942_ = lean_array_push(v___x_941_, v___x_940_);
v___x_943_ = l_Lasm_JS_Binding_invoke___redArg(v_inst_933_, v___x_938_, v___x_942_, v___x_936_);
return v___x_943_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs___redArg___boxed(lean_object* v_inst_944_, lean_object* v_v_945_, lean_object* v_a_946_){
_start:
{
lean_object* v_res_947_; 
v_res_947_ = l_Lasm_JS_Web_Support_cloneAs___redArg(v_inst_944_, v_v_945_);
return v_res_947_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs(lean_object* v_00_u03b1_948_, lean_object* v_inst_949_, lean_object* v_v_950_){
_start:
{
lean_object* v___x_952_; 
v___x_952_ = l_Lasm_JS_Web_Support_cloneAs___redArg(v_inst_949_, v_v_950_);
return v___x_952_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_cloneAs___boxed(lean_object* v_00_u03b1_953_, lean_object* v_inst_954_, lean_object* v_v_955_, lean_object* v_a_956_){
_start:
{
lean_object* v_res_957_; 
v_res_957_ = l_Lasm_JS_Web_Support_cloneAs(v_00_u03b1_953_, v_inst_954_, v_v_955_);
return v_res_957_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___redArg(lean_object* v_o_968_, lean_object* v_method_969_, lean_object* v_inst_970_){
_start:
{
lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; 
v___x_972_ = l_Lasm_JS_instFromJSValue;
v___x_973_ = ((lean_object*)(l_Lasm_JS_Web_Support_iterate___redArg___closed__0));
v___x_974_ = l_Lasm_JS_Value_callMethod___redArg(v_o_968_, v_method_969_, v___x_973_, v___x_972_);
if (lean_obj_tag(v___x_974_) == 0)
{
lean_object* v_a_975_; uint8_t v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; 
v_a_975_ = lean_ctor_get(v___x_974_, 0);
lean_inc(v_a_975_);
lean_dec_ref_known(v___x_974_, 1);
v___x_976_ = 0;
v___x_977_ = lean_unsigned_to_nat(1u);
v___x_978_ = ((lean_object*)(l_Lasm_JS_Web_Support_iterate___redArg___closed__3));
v___x_979_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSRecord___redArg___lam__1___closed__0));
v___x_980_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_980_, 0, v_a_975_);
lean_ctor_set(v___x_980_, 1, v___x_979_);
v___x_981_ = lean_mk_empty_array_with_capacity(v___x_977_);
v___x_982_ = lean_array_push(v___x_981_, v___x_980_);
v___x_983_ = l_Lasm_JS_Binding_invoke___redArg(v_inst_970_, v___x_978_, v___x_982_, v___x_976_);
return v___x_983_;
}
else
{
lean_object* v_a_984_; lean_object* v___x_986_; uint8_t v_isShared_987_; uint8_t v_isSharedCheck_991_; 
lean_dec_ref(v_inst_970_);
v_a_984_ = lean_ctor_get(v___x_974_, 0);
v_isSharedCheck_991_ = !lean_is_exclusive(v___x_974_);
if (v_isSharedCheck_991_ == 0)
{
v___x_986_ = v___x_974_;
v_isShared_987_ = v_isSharedCheck_991_;
goto v_resetjp_985_;
}
else
{
lean_inc(v_a_984_);
lean_dec(v___x_974_);
v___x_986_ = lean_box(0);
v_isShared_987_ = v_isSharedCheck_991_;
goto v_resetjp_985_;
}
v_resetjp_985_:
{
lean_object* v___x_989_; 
if (v_isShared_987_ == 0)
{
v___x_989_ = v___x_986_;
goto v_reusejp_988_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v_a_984_);
v___x_989_ = v_reuseFailAlloc_990_;
goto v_reusejp_988_;
}
v_reusejp_988_:
{
return v___x_989_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___redArg___boxed(lean_object* v_o_992_, lean_object* v_method_993_, lean_object* v_inst_994_, lean_object* v_a_995_){
_start:
{
lean_object* v_res_996_; 
v_res_996_ = l_Lasm_JS_Web_Support_iterate___redArg(v_o_992_, v_method_993_, v_inst_994_);
return v_res_996_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate(lean_object* v_o_997_, lean_object* v_method_998_, lean_object* v_00_u03b1_999_, lean_object* v_inst_1000_){
_start:
{
lean_object* v___x_1002_; 
v___x_1002_ = l_Lasm_JS_Web_Support_iterate___redArg(v_o_997_, v_method_998_, v_inst_1000_);
return v___x_1002_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_iterate___boxed(lean_object* v_o_1003_, lean_object* v_method_1004_, lean_object* v_00_u03b1_1005_, lean_object* v_inst_1006_, lean_object* v_a_1007_){
_start:
{
lean_object* v_res_1008_; 
v_res_1008_ = l_Lasm_JS_Web_Support_iterate(v_o_1003_, v_method_1004_, v_00_u03b1_1005_, v_inst_1006_);
return v_res_1008_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___redArg(lean_object* v_inst_1013_, lean_object* v_o_1014_, lean_object* v_a_1015_){
_start:
{
lean_object* v___x_1017_; 
v___x_1017_ = l_Lasm_JS_instFromJSValue;
if (lean_obj_tag(v_a_1015_) == 0)
{
lean_object* v___x_1018_; lean_object* v___x_1019_; 
lean_dec(v_o_1014_);
lean_dec_ref(v_inst_1013_);
v___x_1018_ = ((lean_object*)(l_Lasm_JS_Web_Support_getGlobal_go___redArg___closed__1));
v___x_1019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1019_, 0, v___x_1018_);
return v___x_1019_;
}
else
{
lean_object* v_head_1020_; lean_object* v_tail_1021_; lean_object* v___f_1022_; 
v_head_1020_ = lean_ctor_get(v_a_1015_, 0);
lean_inc(v_head_1020_);
v_tail_1021_ = lean_ctor_get(v_a_1015_, 1);
lean_inc(v_tail_1021_);
lean_dec_ref_known(v_a_1015_, 2);
v___f_1022_ = ((lean_object*)(l_Lasm_JS_Web_Support_getGlobal_go___redArg___closed__2));
if (lean_obj_tag(v_tail_1021_) == 0)
{
lean_object* v___x_1023_; 
v___x_1023_ = l_Lasm_JS_Value_get___redArg(v___f_1022_, v_o_1014_, v_head_1020_, v_inst_1013_);
return v___x_1023_;
}
else
{
lean_object* v___x_1024_; 
v___x_1024_ = l_Lasm_JS_Value_get___redArg(v___f_1022_, v_o_1014_, v_head_1020_, v___x_1017_);
if (lean_obj_tag(v___x_1024_) == 0)
{
lean_object* v_a_1025_; 
v_a_1025_ = lean_ctor_get(v___x_1024_, 0);
lean_inc(v_a_1025_);
lean_dec_ref_known(v___x_1024_, 1);
v_o_1014_ = v_a_1025_;
v_a_1015_ = v_tail_1021_;
goto _start;
}
else
{
lean_object* v_a_1027_; lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1034_; 
lean_dec(v_tail_1021_);
lean_dec_ref(v_inst_1013_);
v_a_1027_ = lean_ctor_get(v___x_1024_, 0);
v_isSharedCheck_1034_ = !lean_is_exclusive(v___x_1024_);
if (v_isSharedCheck_1034_ == 0)
{
v___x_1029_ = v___x_1024_;
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
else
{
lean_inc(v_a_1027_);
lean_dec(v___x_1024_);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___redArg___boxed(lean_object* v_inst_1035_, lean_object* v_o_1036_, lean_object* v_a_1037_, lean_object* v_a_1038_){
_start:
{
lean_object* v_res_1039_; 
v_res_1039_ = l_Lasm_JS_Web_Support_getGlobal_go___redArg(v_inst_1035_, v_o_1036_, v_a_1037_);
return v_res_1039_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go(lean_object* v_00_u03b1_1040_, lean_object* v_inst_1041_, lean_object* v_o_1042_, lean_object* v_a_1043_){
_start:
{
lean_object* v___x_1045_; 
v___x_1045_ = l_Lasm_JS_Web_Support_getGlobal_go___redArg(v_inst_1041_, v_o_1042_, v_a_1043_);
return v___x_1045_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal_go___boxed(lean_object* v_00_u03b1_1046_, lean_object* v_inst_1047_, lean_object* v_o_1048_, lean_object* v_a_1049_, lean_object* v_a_1050_){
_start:
{
lean_object* v_res_1051_; 
v_res_1051_ = l_Lasm_JS_Web_Support_getGlobal_go(v_00_u03b1_1046_, v_inst_1047_, v_o_1048_, v_a_1049_);
return v_res_1051_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___redArg(lean_object* v_path_1052_, lean_object* v_inst_1053_){
_start:
{
lean_object* v___x_1055_; 
v___x_1055_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1055_) == 0)
{
lean_object* v_a_1056_; lean_object* v___x_1057_; 
v_a_1056_ = lean_ctor_get(v___x_1055_, 0);
lean_inc(v_a_1056_);
lean_dec_ref_known(v___x_1055_, 1);
v___x_1057_ = l_Lasm_JS_Web_Support_getGlobal_go___redArg(v_inst_1053_, v_a_1056_, v_path_1052_);
return v___x_1057_;
}
else
{
lean_object* v_a_1058_; lean_object* v___x_1060_; uint8_t v_isShared_1061_; uint8_t v_isSharedCheck_1065_; 
lean_dec_ref(v_inst_1053_);
lean_dec(v_path_1052_);
v_a_1058_ = lean_ctor_get(v___x_1055_, 0);
v_isSharedCheck_1065_ = !lean_is_exclusive(v___x_1055_);
if (v_isSharedCheck_1065_ == 0)
{
v___x_1060_ = v___x_1055_;
v_isShared_1061_ = v_isSharedCheck_1065_;
goto v_resetjp_1059_;
}
else
{
lean_inc(v_a_1058_);
lean_dec(v___x_1055_);
v___x_1060_ = lean_box(0);
v_isShared_1061_ = v_isSharedCheck_1065_;
goto v_resetjp_1059_;
}
v_resetjp_1059_:
{
lean_object* v___x_1063_; 
if (v_isShared_1061_ == 0)
{
v___x_1063_ = v___x_1060_;
goto v_reusejp_1062_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v_a_1058_);
v___x_1063_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1062_;
}
v_reusejp_1062_:
{
return v___x_1063_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___redArg___boxed(lean_object* v_path_1066_, lean_object* v_inst_1067_, lean_object* v_a_1068_){
_start:
{
lean_object* v_res_1069_; 
v_res_1069_ = l_Lasm_JS_Web_Support_getGlobal___redArg(v_path_1066_, v_inst_1067_);
return v_res_1069_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal(lean_object* v_path_1070_, lean_object* v_00_u03b1_1071_, lean_object* v_inst_1072_){
_start:
{
lean_object* v___x_1074_; 
v___x_1074_ = l_Lasm_JS_Web_Support_getGlobal___redArg(v_path_1070_, v_inst_1072_);
return v___x_1074_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_getGlobal___boxed(lean_object* v_path_1075_, lean_object* v_00_u03b1_1076_, lean_object* v_inst_1077_, lean_object* v_a_1078_){
_start:
{
lean_object* v_res_1079_; 
v_res_1079_ = l_Lasm_JS_Web_Support_getGlobal(v_path_1075_, v_00_u03b1_1076_, v_inst_1077_);
return v_res_1079_;
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
