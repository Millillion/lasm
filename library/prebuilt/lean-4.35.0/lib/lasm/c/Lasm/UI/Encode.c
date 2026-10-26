// Lean compiler output
// Module: Lasm.UI.Encode
// Imports: public import Init public meta import Init public import Std.Data.HashMap public import Lasm.UI.Diff
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
uint8_t l_List_beq___at___00Lean_Syntax_instBEqPreresolved_beq_spec__0(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(uint64_t, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
lean_object* lean_byte_array_copy_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
extern lean_object* l_ByteArray_empty;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_byte_array_push(lean_object*, uint8_t);
lean_object* lean_nat_mod(lean_object*, lean_object*);
uint8_t lean_uint8_of_nat(lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5___redArg(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Lasm_UI_Attr_key___redArg(lean_object*);
lean_object* l_Lasm_UI_Attr_val___redArg(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
static lean_once_cell_t l_Lasm_UI_Encode_instInhabitedTables_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Encode_instInhabitedTables_default___closed__0;
static lean_once_cell_t l_Lasm_UI_Encode_instInhabitedTables_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Encode_instInhabitedTables_default___closed__1;
static lean_once_cell_t l_Lasm_UI_Encode_instInhabitedTables_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Encode_instInhabitedTables_default___closed__2;
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_instInhabitedTables_default;
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_instInhabitedTables;
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_maxNames;
static lean_once_cell_t l_Lasm_UI_Encode_instInhabitedEnc_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_UI_Encode_instInhabitedEnc_default___closed__0;
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_instInhabitedEnc_default;
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_instInhabitedEnc;
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_pushVar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_pushStr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_pushStr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_byte(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_byte___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_var(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_str(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_str___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_nameInto(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_name(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_decoder_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_decoder_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_decoder_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_decoder_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_decoder(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_flags(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_flags___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_setAttr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_attrOp(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_Encode_Enc_nsByte(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_nsByte___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_node_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_node_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_node___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_nodes___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_nodes(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_node(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_node_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_node_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_before(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_before___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_op_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_op___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_opList___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_opList(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_op(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_frame___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_frame___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_frame(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_frame___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lasm_UI_Encode_instInhabitedTables_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = lean_unsigned_to_nat(16u);
v___x_3_ = lean_mk_array(v___x_2_, v___x_1_);
return v___x_3_;
}
}
static lean_object* _init_l_Lasm_UI_Encode_instInhabitedTables_default___closed__1(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_obj_once(&l_Lasm_UI_Encode_instInhabitedTables_default___closed__0, &l_Lasm_UI_Encode_instInhabitedTables_default___closed__0_once, _init_l_Lasm_UI_Encode_instInhabitedTables_default___closed__0);
v___x_5_ = lean_unsigned_to_nat(0u);
v___x_6_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
lean_ctor_set(v___x_6_, 1, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_Lasm_UI_Encode_instInhabitedTables_default___closed__2(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = lean_obj_once(&l_Lasm_UI_Encode_instInhabitedTables_default___closed__1, &l_Lasm_UI_Encode_instInhabitedTables_default___closed__1_once, _init_l_Lasm_UI_Encode_instInhabitedTables_default___closed__1);
v___x_8_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_8_, 0, v___x_7_);
lean_ctor_set(v___x_8_, 1, v___x_7_);
return v___x_8_;
}
}
static lean_object* _init_l_Lasm_UI_Encode_instInhabitedTables_default(void){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_obj_once(&l_Lasm_UI_Encode_instInhabitedTables_default___closed__2, &l_Lasm_UI_Encode_instInhabitedTables_default___closed__2_once, _init_l_Lasm_UI_Encode_instInhabitedTables_default___closed__2);
return v___x_9_;
}
}
static lean_object* _init_l_Lasm_UI_Encode_instInhabitedTables(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = l_Lasm_UI_Encode_instInhabitedTables_default;
return v___x_10_;
}
}
static lean_object* _init_l_Lasm_UI_Encode_maxNames(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lean_unsigned_to_nat(8192u);
return v___x_11_;
}
}
static lean_object* _init_l_Lasm_UI_Encode_instInhabitedEnc_default___closed__0(void){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_12_ = l_ByteArray_empty;
v___x_13_ = l_Lasm_UI_Encode_instInhabitedTables_default;
v___x_14_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_14_, 0, v___x_13_);
lean_ctor_set(v___x_14_, 1, v___x_12_);
lean_ctor_set(v___x_14_, 2, v___x_12_);
return v___x_14_;
}
}
static lean_object* _init_l_Lasm_UI_Encode_instInhabitedEnc_default(void){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = lean_obj_once(&l_Lasm_UI_Encode_instInhabitedEnc_default___closed__0, &l_Lasm_UI_Encode_instInhabitedEnc_default___closed__0_once, _init_l_Lasm_UI_Encode_instInhabitedEnc_default___closed__0);
return v___x_15_;
}
}
static lean_object* _init_l_Lasm_UI_Encode_instInhabitedEnc(void){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = l_Lasm_UI_Encode_instInhabitedEnc_default;
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_pushVar(lean_object* v_b_17_, lean_object* v_n_18_){
_start:
{
lean_object* v___x_19_; uint8_t v___x_20_; 
v___x_19_ = lean_unsigned_to_nat(128u);
v___x_20_ = lean_nat_dec_lt(v_n_18_, v___x_19_);
if (v___x_20_ == 0)
{
lean_object* v___x_21_; lean_object* v___x_22_; uint8_t v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_21_ = lean_nat_mod(v_n_18_, v___x_19_);
v___x_22_ = lean_nat_add(v___x_21_, v___x_19_);
lean_dec(v___x_21_);
v___x_23_ = lean_uint8_of_nat(v___x_22_);
lean_dec(v___x_22_);
v___x_24_ = lean_byte_array_push(v_b_17_, v___x_23_);
v___x_25_ = lean_unsigned_to_nat(7u);
v___x_26_ = lean_nat_shiftr(v_n_18_, v___x_25_);
lean_dec(v_n_18_);
v_b_17_ = v___x_24_;
v_n_18_ = v___x_26_;
goto _start;
}
else
{
uint8_t v___x_28_; lean_object* v___x_29_; 
v___x_28_ = lean_uint8_of_nat(v_n_18_);
lean_dec(v_n_18_);
v___x_29_ = lean_byte_array_push(v_b_17_, v___x_28_);
return v___x_29_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_pushStr(lean_object* v_b_30_, lean_object* v_s_31_){
_start:
{
lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; uint8_t v___x_38_; lean_object* v___x_39_; 
v___x_32_ = lean_string_utf8_byte_size(v_s_31_);
v___x_33_ = l_Lasm_UI_Encode_pushVar(v_b_30_, v___x_32_);
v___x_34_ = lean_string_to_utf8(v_s_31_);
v___x_35_ = lean_unsigned_to_nat(0u);
v___x_36_ = lean_byte_array_size(v___x_33_);
v___x_37_ = lean_byte_array_size(v___x_34_);
v___x_38_ = 0;
v___x_39_ = lean_byte_array_copy_slice(v___x_34_, v___x_35_, v___x_33_, v___x_36_, v___x_37_, v___x_38_);
lean_dec_ref(v___x_34_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_pushStr___boxed(lean_object* v_b_40_, lean_object* v_s_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = l_Lasm_UI_Encode_pushStr(v_b_40_, v_s_41_);
lean_dec_ref(v_s_41_);
return v_res_42_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_byte(lean_object* v_e_43_, uint8_t v_x_44_){
_start:
{
lean_object* v_tables_45_; lean_object* v_defs_46_; lean_object* v_out_47_; lean_object* v___x_49_; uint8_t v_isShared_50_; uint8_t v_isSharedCheck_55_; 
v_tables_45_ = lean_ctor_get(v_e_43_, 0);
v_defs_46_ = lean_ctor_get(v_e_43_, 1);
v_out_47_ = lean_ctor_get(v_e_43_, 2);
v_isSharedCheck_55_ = !lean_is_exclusive(v_e_43_);
if (v_isSharedCheck_55_ == 0)
{
v___x_49_ = v_e_43_;
v_isShared_50_ = v_isSharedCheck_55_;
goto v_resetjp_48_;
}
else
{
lean_inc(v_out_47_);
lean_inc(v_defs_46_);
lean_inc(v_tables_45_);
lean_dec(v_e_43_);
v___x_49_ = lean_box(0);
v_isShared_50_ = v_isSharedCheck_55_;
goto v_resetjp_48_;
}
v_resetjp_48_:
{
lean_object* v___x_51_; lean_object* v___x_53_; 
v___x_51_ = lean_byte_array_push(v_out_47_, v_x_44_);
if (v_isShared_50_ == 0)
{
lean_ctor_set(v___x_49_, 2, v___x_51_);
v___x_53_ = v___x_49_;
goto v_reusejp_52_;
}
else
{
lean_object* v_reuseFailAlloc_54_; 
v_reuseFailAlloc_54_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_54_, 0, v_tables_45_);
lean_ctor_set(v_reuseFailAlloc_54_, 1, v_defs_46_);
lean_ctor_set(v_reuseFailAlloc_54_, 2, v___x_51_);
v___x_53_ = v_reuseFailAlloc_54_;
goto v_reusejp_52_;
}
v_reusejp_52_:
{
return v___x_53_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_byte___boxed(lean_object* v_e_56_, lean_object* v_x_57_){
_start:
{
uint8_t v_x_boxed_58_; lean_object* v_res_59_; 
v_x_boxed_58_ = lean_unbox(v_x_57_);
v_res_59_ = l_Lasm_UI_Encode_Enc_byte(v_e_56_, v_x_boxed_58_);
return v_res_59_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_var(lean_object* v_e_60_, lean_object* v_n_61_){
_start:
{
lean_object* v_tables_62_; lean_object* v_defs_63_; lean_object* v_out_64_; lean_object* v___x_66_; uint8_t v_isShared_67_; uint8_t v_isSharedCheck_72_; 
v_tables_62_ = lean_ctor_get(v_e_60_, 0);
v_defs_63_ = lean_ctor_get(v_e_60_, 1);
v_out_64_ = lean_ctor_get(v_e_60_, 2);
v_isSharedCheck_72_ = !lean_is_exclusive(v_e_60_);
if (v_isSharedCheck_72_ == 0)
{
v___x_66_ = v_e_60_;
v_isShared_67_ = v_isSharedCheck_72_;
goto v_resetjp_65_;
}
else
{
lean_inc(v_out_64_);
lean_inc(v_defs_63_);
lean_inc(v_tables_62_);
lean_dec(v_e_60_);
v___x_66_ = lean_box(0);
v_isShared_67_ = v_isSharedCheck_72_;
goto v_resetjp_65_;
}
v_resetjp_65_:
{
lean_object* v___x_68_; lean_object* v___x_70_; 
v___x_68_ = l_Lasm_UI_Encode_pushVar(v_out_64_, v_n_61_);
if (v_isShared_67_ == 0)
{
lean_ctor_set(v___x_66_, 2, v___x_68_);
v___x_70_ = v___x_66_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v_tables_62_);
lean_ctor_set(v_reuseFailAlloc_71_, 1, v_defs_63_);
lean_ctor_set(v_reuseFailAlloc_71_, 2, v___x_68_);
v___x_70_ = v_reuseFailAlloc_71_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
return v___x_70_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_str(lean_object* v_e_73_, lean_object* v_s_74_){
_start:
{
lean_object* v_tables_75_; lean_object* v_defs_76_; lean_object* v_out_77_; lean_object* v___x_79_; uint8_t v_isShared_80_; uint8_t v_isSharedCheck_92_; 
v_tables_75_ = lean_ctor_get(v_e_73_, 0);
v_defs_76_ = lean_ctor_get(v_e_73_, 1);
v_out_77_ = lean_ctor_get(v_e_73_, 2);
v_isSharedCheck_92_ = !lean_is_exclusive(v_e_73_);
if (v_isSharedCheck_92_ == 0)
{
v___x_79_ = v_e_73_;
v_isShared_80_ = v_isSharedCheck_92_;
goto v_resetjp_78_;
}
else
{
lean_inc(v_out_77_);
lean_inc(v_defs_76_);
lean_inc(v_tables_75_);
lean_dec(v_e_73_);
v___x_79_ = lean_box(0);
v_isShared_80_ = v_isSharedCheck_92_;
goto v_resetjp_78_;
}
v_resetjp_78_:
{
lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; uint8_t v___x_87_; lean_object* v___x_88_; lean_object* v___x_90_; 
v___x_81_ = lean_string_utf8_byte_size(v_s_74_);
v___x_82_ = l_Lasm_UI_Encode_pushVar(v_out_77_, v___x_81_);
v___x_83_ = lean_string_to_utf8(v_s_74_);
v___x_84_ = lean_unsigned_to_nat(0u);
v___x_85_ = lean_byte_array_size(v___x_82_);
v___x_86_ = lean_byte_array_size(v___x_83_);
v___x_87_ = 0;
v___x_88_ = lean_byte_array_copy_slice(v___x_83_, v___x_84_, v___x_82_, v___x_85_, v___x_86_, v___x_87_);
lean_dec_ref(v___x_83_);
if (v_isShared_80_ == 0)
{
lean_ctor_set(v___x_79_, 2, v___x_88_);
v___x_90_ = v___x_79_;
goto v_reusejp_89_;
}
else
{
lean_object* v_reuseFailAlloc_91_; 
v_reuseFailAlloc_91_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_91_, 0, v_tables_75_);
lean_ctor_set(v_reuseFailAlloc_91_, 1, v_defs_76_);
lean_ctor_set(v_reuseFailAlloc_91_, 2, v___x_88_);
v___x_90_ = v_reuseFailAlloc_91_;
goto v_reusejp_89_;
}
v_reusejp_89_:
{
return v___x_90_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_str___boxed(lean_object* v_e_93_, lean_object* v_s_94_){
_start:
{
lean_object* v_res_95_; 
v_res_95_ = l_Lasm_UI_Encode_Enc_str(v_e_93_, v_s_94_);
lean_dec_ref(v_s_94_);
return v_res_95_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_nameInto(lean_object* v_t_96_, lean_object* v_b_97_, lean_object* v_s_98_){
_start:
{
lean_object* v_names_99_; lean_object* v_decoders_100_; lean_object* v___x_101_; 
v_names_99_ = lean_ctor_get(v_t_96_, 0);
lean_inc_ref(v_names_99_);
v_decoders_100_ = lean_ctor_get(v_t_96_, 1);
v___x_101_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5___redArg(v_names_99_, v_s_98_);
if (lean_obj_tag(v___x_101_) == 0)
{
lean_object* v_size_102_; lean_object* v___x_103_; uint8_t v___x_104_; 
v_size_102_ = lean_ctor_get(v_names_99_, 0);
v___x_103_ = lean_unsigned_to_nat(8192u);
v___x_104_ = lean_nat_dec_lt(v_size_102_, v___x_103_);
if (v___x_104_ == 0)
{
lean_object* v___x_106_; uint8_t v_isShared_107_; uint8_t v_isSharedCheck_120_; 
v_isSharedCheck_120_ = !lean_is_exclusive(v_names_99_);
if (v_isSharedCheck_120_ == 0)
{
lean_object* v_unused_121_; lean_object* v_unused_122_; 
v_unused_121_ = lean_ctor_get(v_names_99_, 1);
lean_dec(v_unused_121_);
v_unused_122_ = lean_ctor_get(v_names_99_, 0);
lean_dec(v_unused_122_);
v___x_106_ = v_names_99_;
v_isShared_107_ = v_isSharedCheck_120_;
goto v_resetjp_105_;
}
else
{
lean_dec(v_names_99_);
v___x_106_ = lean_box(0);
v_isShared_107_ = v_isSharedCheck_120_;
goto v_resetjp_105_;
}
v_resetjp_105_:
{
uint8_t v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_118_; 
v___x_108_ = 1;
v___x_109_ = lean_byte_array_push(v_b_97_, v___x_108_);
v___x_110_ = lean_string_utf8_byte_size(v_s_98_);
v___x_111_ = l_Lasm_UI_Encode_pushVar(v___x_109_, v___x_110_);
v___x_112_ = lean_string_to_utf8(v_s_98_);
lean_dec_ref(v_s_98_);
v___x_113_ = lean_unsigned_to_nat(0u);
v___x_114_ = lean_byte_array_size(v___x_111_);
v___x_115_ = lean_byte_array_size(v___x_112_);
v___x_116_ = lean_byte_array_copy_slice(v___x_112_, v___x_113_, v___x_111_, v___x_114_, v___x_115_, v___x_104_);
lean_dec_ref(v___x_112_);
if (v_isShared_107_ == 0)
{
lean_ctor_set(v___x_106_, 1, v___x_116_);
lean_ctor_set(v___x_106_, 0, v_t_96_);
v___x_118_ = v___x_106_;
goto v_reusejp_117_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v_t_96_);
lean_ctor_set(v_reuseFailAlloc_119_, 1, v___x_116_);
v___x_118_ = v_reuseFailAlloc_119_;
goto v_reusejp_117_;
}
v_reusejp_117_:
{
return v___x_118_;
}
}
}
else
{
lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_141_; 
lean_inc(v_size_102_);
lean_inc_ref(v_decoders_100_);
v_isSharedCheck_141_ = !lean_is_exclusive(v_t_96_);
if (v_isSharedCheck_141_ == 0)
{
lean_object* v_unused_142_; lean_object* v_unused_143_; 
v_unused_142_ = lean_ctor_get(v_t_96_, 1);
lean_dec(v_unused_142_);
v_unused_143_ = lean_ctor_get(v_t_96_, 0);
lean_dec(v_unused_143_);
v___x_124_ = v_t_96_;
v_isShared_125_ = v_isSharedCheck_141_;
goto v_resetjp_123_;
}
else
{
lean_dec(v_t_96_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_141_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___x_126_; lean_object* v___x_128_; 
lean_inc_ref(v_s_98_);
v___x_126_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0___redArg(v_names_99_, v_s_98_, v_size_102_);
if (v_isShared_125_ == 0)
{
lean_ctor_set(v___x_124_, 0, v___x_126_);
v___x_128_ = v___x_124_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v___x_126_);
lean_ctor_set(v_reuseFailAlloc_140_, 1, v_decoders_100_);
v___x_128_ = v_reuseFailAlloc_140_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
uint8_t v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; uint8_t v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_129_ = 0;
v___x_130_ = lean_byte_array_push(v_b_97_, v___x_129_);
v___x_131_ = lean_string_utf8_byte_size(v_s_98_);
v___x_132_ = l_Lasm_UI_Encode_pushVar(v___x_130_, v___x_131_);
v___x_133_ = lean_string_to_utf8(v_s_98_);
lean_dec_ref(v_s_98_);
v___x_134_ = lean_unsigned_to_nat(0u);
v___x_135_ = lean_byte_array_size(v___x_132_);
v___x_136_ = lean_byte_array_size(v___x_133_);
v___x_137_ = 0;
v___x_138_ = lean_byte_array_copy_slice(v___x_133_, v___x_134_, v___x_132_, v___x_135_, v___x_136_, v___x_137_);
lean_dec_ref(v___x_133_);
v___x_139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_139_, 0, v___x_128_);
lean_ctor_set(v___x_139_, 1, v___x_138_);
return v___x_139_;
}
}
}
}
else
{
lean_object* v_val_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; 
lean_dec_ref(v_names_99_);
lean_dec_ref(v_s_98_);
v_val_144_ = lean_ctor_get(v___x_101_, 0);
lean_inc(v_val_144_);
lean_dec_ref_known(v___x_101_, 1);
v___x_145_ = lean_unsigned_to_nat(2u);
v___x_146_ = lean_nat_add(v_val_144_, v___x_145_);
lean_dec(v_val_144_);
v___x_147_ = l_Lasm_UI_Encode_pushVar(v_b_97_, v___x_146_);
v___x_148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_148_, 0, v_t_96_);
lean_ctor_set(v___x_148_, 1, v___x_147_);
return v___x_148_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_name(lean_object* v_e_149_, lean_object* v_s_150_){
_start:
{
lean_object* v_tables_151_; lean_object* v_defs_152_; lean_object* v_out_153_; lean_object* v___x_155_; uint8_t v_isShared_156_; uint8_t v_isSharedCheck_163_; 
v_tables_151_ = lean_ctor_get(v_e_149_, 0);
v_defs_152_ = lean_ctor_get(v_e_149_, 1);
v_out_153_ = lean_ctor_get(v_e_149_, 2);
v_isSharedCheck_163_ = !lean_is_exclusive(v_e_149_);
if (v_isSharedCheck_163_ == 0)
{
v___x_155_ = v_e_149_;
v_isShared_156_ = v_isSharedCheck_163_;
goto v_resetjp_154_;
}
else
{
lean_inc(v_out_153_);
lean_inc(v_defs_152_);
lean_inc(v_tables_151_);
lean_dec(v_e_149_);
v___x_155_ = lean_box(0);
v_isShared_156_ = v_isSharedCheck_163_;
goto v_resetjp_154_;
}
v_resetjp_154_:
{
lean_object* v___x_157_; lean_object* v_fst_158_; lean_object* v_snd_159_; lean_object* v___x_161_; 
v___x_157_ = l_Lasm_UI_Encode_Enc_nameInto(v_tables_151_, v_out_153_, v_s_150_);
v_fst_158_ = lean_ctor_get(v___x_157_, 0);
lean_inc(v_fst_158_);
v_snd_159_ = lean_ctor_get(v___x_157_, 1);
lean_inc(v_snd_159_);
lean_dec_ref(v___x_157_);
if (v_isShared_156_ == 0)
{
lean_ctor_set(v___x_155_, 2, v_snd_159_);
lean_ctor_set(v___x_155_, 0, v_fst_158_);
v___x_161_ = v___x_155_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v_fst_158_);
lean_ctor_set(v_reuseFailAlloc_162_, 1, v_defs_152_);
lean_ctor_set(v_reuseFailAlloc_162_, 2, v_snd_159_);
v___x_161_ = v_reuseFailAlloc_162_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
return v___x_161_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_decoder_spec__0(lean_object* v_x_164_, lean_object* v_x_165_){
_start:
{
if (lean_obj_tag(v_x_165_) == 0)
{
return v_x_164_;
}
else
{
lean_object* v_head_166_; lean_object* v_tail_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; uint8_t v___x_174_; lean_object* v___x_175_; 
v_head_166_ = lean_ctor_get(v_x_165_, 0);
v_tail_167_ = lean_ctor_get(v_x_165_, 1);
v___x_168_ = lean_string_utf8_byte_size(v_head_166_);
v___x_169_ = l_Lasm_UI_Encode_pushVar(v_x_164_, v___x_168_);
v___x_170_ = lean_string_to_utf8(v_head_166_);
v___x_171_ = lean_unsigned_to_nat(0u);
v___x_172_ = lean_byte_array_size(v___x_169_);
v___x_173_ = lean_byte_array_size(v___x_170_);
v___x_174_ = 0;
v___x_175_ = lean_byte_array_copy_slice(v___x_170_, v___x_171_, v___x_169_, v___x_172_, v___x_173_, v___x_174_);
lean_dec_ref(v___x_170_);
v_x_164_ = v___x_175_;
v_x_165_ = v_tail_167_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_decoder_spec__0___boxed(lean_object* v_x_177_, lean_object* v_x_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l_List_foldl___at___00Lasm_UI_Encode_Enc_decoder_spec__0(v_x_177_, v_x_178_);
lean_dec(v_x_178_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_decoder_spec__3(lean_object* v_x_180_, lean_object* v_x_181_){
_start:
{
if (lean_obj_tag(v_x_181_) == 0)
{
return v_x_180_;
}
else
{
lean_object* v_head_182_; lean_object* v_tail_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v_head_182_ = lean_ctor_get(v_x_181_, 0);
v_tail_183_ = lean_ctor_get(v_x_181_, 1);
v___x_184_ = l_List_lengthTR___redArg(v_head_182_);
v___x_185_ = l_Lasm_UI_Encode_pushVar(v_x_180_, v___x_184_);
v___x_186_ = l_List_foldl___at___00Lasm_UI_Encode_Enc_decoder_spec__0(v___x_185_, v_head_182_);
v_x_180_ = v___x_186_;
v_x_181_ = v_tail_183_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_decoder_spec__3___boxed(lean_object* v_x_188_, lean_object* v_x_189_){
_start:
{
lean_object* v_res_190_; 
v_res_190_ = l_List_foldl___at___00Lasm_UI_Encode_Enc_decoder_spec__3(v_x_188_, v_x_189_);
lean_dec(v_x_189_);
return v_res_190_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2(lean_object* v_x_191_, lean_object* v_x_192_){
_start:
{
if (lean_obj_tag(v_x_191_) == 0)
{
if (lean_obj_tag(v_x_192_) == 0)
{
uint8_t v___x_193_; 
v___x_193_ = 1;
return v___x_193_;
}
else
{
uint8_t v___x_194_; 
v___x_194_ = 0;
return v___x_194_;
}
}
else
{
if (lean_obj_tag(v_x_192_) == 0)
{
uint8_t v___x_195_; 
v___x_195_ = 0;
return v___x_195_;
}
else
{
lean_object* v_head_196_; lean_object* v_tail_197_; lean_object* v_head_198_; lean_object* v_tail_199_; uint8_t v___x_200_; 
v_head_196_ = lean_ctor_get(v_x_191_, 0);
v_tail_197_ = lean_ctor_get(v_x_191_, 1);
v_head_198_ = lean_ctor_get(v_x_192_, 0);
v_tail_199_ = lean_ctor_get(v_x_192_, 1);
v___x_200_ = l_List_beq___at___00Lean_Syntax_instBEqPreresolved_beq_spec__0(v_head_196_, v_head_198_);
if (v___x_200_ == 0)
{
return v___x_200_;
}
else
{
v_x_191_ = v_tail_197_;
v_x_192_ = v_tail_199_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2___boxed(lean_object* v_x_202_, lean_object* v_x_203_){
_start:
{
uint8_t v_res_204_; lean_object* v_r_205_; 
v_res_204_ = l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2(v_x_202_, v_x_203_);
lean_dec(v_x_203_);
lean_dec(v_x_202_);
v_r_205_ = lean_box(v_res_204_);
return v_r_205_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3___redArg(lean_object* v_a_206_, lean_object* v_x_207_){
_start:
{
if (lean_obj_tag(v_x_207_) == 0)
{
uint8_t v___x_208_; 
v___x_208_ = 0;
return v___x_208_;
}
else
{
lean_object* v_key_209_; lean_object* v_tail_210_; uint8_t v___x_211_; 
v_key_209_ = lean_ctor_get(v_x_207_, 0);
v_tail_210_ = lean_ctor_get(v_x_207_, 2);
v___x_211_ = l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2(v_key_209_, v_a_206_);
if (v___x_211_ == 0)
{
v_x_207_ = v_tail_210_;
goto _start;
}
else
{
return v___x_211_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3___redArg___boxed(lean_object* v_a_213_, lean_object* v_x_214_){
_start:
{
uint8_t v_res_215_; lean_object* v_r_216_; 
v_res_215_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3___redArg(v_a_213_, v_x_214_);
lean_dec(v_x_214_);
lean_dec(v_a_213_);
v_r_216_ = lean_box(v_res_215_);
return v_r_216_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__5___redArg(lean_object* v_a_217_, lean_object* v_b_218_, lean_object* v_x_219_){
_start:
{
if (lean_obj_tag(v_x_219_) == 0)
{
lean_dec(v_b_218_);
lean_dec(v_a_217_);
return v_x_219_;
}
else
{
lean_object* v_key_220_; lean_object* v_value_221_; lean_object* v_tail_222_; lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_234_; 
v_key_220_ = lean_ctor_get(v_x_219_, 0);
v_value_221_ = lean_ctor_get(v_x_219_, 1);
v_tail_222_ = lean_ctor_get(v_x_219_, 2);
v_isSharedCheck_234_ = !lean_is_exclusive(v_x_219_);
if (v_isSharedCheck_234_ == 0)
{
v___x_224_ = v_x_219_;
v_isShared_225_ = v_isSharedCheck_234_;
goto v_resetjp_223_;
}
else
{
lean_inc(v_tail_222_);
lean_inc(v_value_221_);
lean_inc(v_key_220_);
lean_dec(v_x_219_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_234_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
uint8_t v___x_226_; 
v___x_226_ = l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2(v_key_220_, v_a_217_);
if (v___x_226_ == 0)
{
lean_object* v___x_227_; lean_object* v___x_229_; 
v___x_227_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__5___redArg(v_a_217_, v_b_218_, v_tail_222_);
if (v_isShared_225_ == 0)
{
lean_ctor_set(v___x_224_, 2, v___x_227_);
v___x_229_ = v___x_224_;
goto v_reusejp_228_;
}
else
{
lean_object* v_reuseFailAlloc_230_; 
v_reuseFailAlloc_230_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_230_, 0, v_key_220_);
lean_ctor_set(v_reuseFailAlloc_230_, 1, v_value_221_);
lean_ctor_set(v_reuseFailAlloc_230_, 2, v___x_227_);
v___x_229_ = v_reuseFailAlloc_230_;
goto v_reusejp_228_;
}
v_reusejp_228_:
{
return v___x_229_;
}
}
else
{
lean_object* v___x_232_; 
lean_dec(v_value_221_);
lean_dec(v_key_220_);
if (v_isShared_225_ == 0)
{
lean_ctor_set(v___x_224_, 1, v_b_218_);
lean_ctor_set(v___x_224_, 0, v_a_217_);
v___x_232_ = v___x_224_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_233_; 
v_reuseFailAlloc_233_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_233_, 0, v_a_217_);
lean_ctor_set(v_reuseFailAlloc_233_, 1, v_b_218_);
lean_ctor_set(v_reuseFailAlloc_233_, 2, v_tail_222_);
v___x_232_ = v_reuseFailAlloc_233_;
goto v_reusejp_231_;
}
v_reusejp_231_:
{
return v___x_232_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6_spec__8___redArg(lean_object* v_x_235_, lean_object* v_x_236_){
_start:
{
if (lean_obj_tag(v_x_236_) == 0)
{
return v_x_235_;
}
else
{
lean_object* v_key_237_; lean_object* v_value_238_; lean_object* v_tail_239_; lean_object* v___x_241_; uint8_t v_isShared_242_; uint8_t v_isSharedCheck_263_; 
v_key_237_ = lean_ctor_get(v_x_236_, 0);
v_value_238_ = lean_ctor_get(v_x_236_, 1);
v_tail_239_ = lean_ctor_get(v_x_236_, 2);
v_isSharedCheck_263_ = !lean_is_exclusive(v_x_236_);
if (v_isSharedCheck_263_ == 0)
{
v___x_241_ = v_x_236_;
v_isShared_242_ = v_isSharedCheck_263_;
goto v_resetjp_240_;
}
else
{
lean_inc(v_tail_239_);
lean_inc(v_value_238_);
lean_inc(v_key_237_);
lean_dec(v_x_236_);
v___x_241_ = lean_box(0);
v_isShared_242_ = v_isSharedCheck_263_;
goto v_resetjp_240_;
}
v_resetjp_240_:
{
lean_object* v___x_243_; uint64_t v___x_244_; uint64_t v___x_245_; uint64_t v___x_246_; uint64_t v___x_247_; uint64_t v_fold_248_; uint64_t v___x_249_; uint64_t v___x_250_; uint64_t v___x_251_; size_t v___x_252_; size_t v___x_253_; size_t v___x_254_; size_t v___x_255_; size_t v___x_256_; lean_object* v___x_257_; lean_object* v___x_259_; 
v___x_243_ = lean_array_get_size(v_x_235_);
v___x_244_ = 7ULL;
v___x_245_ = l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(v___x_244_, v_key_237_);
v___x_246_ = 32ULL;
v___x_247_ = lean_uint64_shift_right(v___x_245_, v___x_246_);
v_fold_248_ = lean_uint64_xor(v___x_245_, v___x_247_);
v___x_249_ = 16ULL;
v___x_250_ = lean_uint64_shift_right(v_fold_248_, v___x_249_);
v___x_251_ = lean_uint64_xor(v_fold_248_, v___x_250_);
v___x_252_ = lean_uint64_to_usize(v___x_251_);
v___x_253_ = lean_usize_of_nat(v___x_243_);
v___x_254_ = ((size_t)1ULL);
v___x_255_ = lean_usize_sub(v___x_253_, v___x_254_);
v___x_256_ = lean_usize_land(v___x_252_, v___x_255_);
v___x_257_ = lean_array_uget_borrowed(v_x_235_, v___x_256_);
lean_inc(v___x_257_);
if (v_isShared_242_ == 0)
{
lean_ctor_set(v___x_241_, 2, v___x_257_);
v___x_259_ = v___x_241_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v_key_237_);
lean_ctor_set(v_reuseFailAlloc_262_, 1, v_value_238_);
lean_ctor_set(v_reuseFailAlloc_262_, 2, v___x_257_);
v___x_259_ = v_reuseFailAlloc_262_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
lean_object* v___x_260_; 
v___x_260_ = lean_array_uset(v_x_235_, v___x_256_, v___x_259_);
v_x_235_ = v___x_260_;
v_x_236_ = v_tail_239_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6___redArg(lean_object* v_i_264_, lean_object* v_source_265_, lean_object* v_target_266_){
_start:
{
lean_object* v___x_267_; uint8_t v___x_268_; 
v___x_267_ = lean_array_get_size(v_source_265_);
v___x_268_ = lean_nat_dec_lt(v_i_264_, v___x_267_);
if (v___x_268_ == 0)
{
lean_dec_ref(v_source_265_);
lean_dec(v_i_264_);
return v_target_266_;
}
else
{
lean_object* v_es_269_; lean_object* v___x_270_; lean_object* v_source_271_; lean_object* v_target_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
v_es_269_ = lean_array_fget(v_source_265_, v_i_264_);
v___x_270_ = lean_box(0);
v_source_271_ = lean_array_fset(v_source_265_, v_i_264_, v___x_270_);
v_target_272_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6_spec__8___redArg(v_target_266_, v_es_269_);
v___x_273_ = lean_unsigned_to_nat(1u);
v___x_274_ = lean_nat_add(v_i_264_, v___x_273_);
lean_dec(v_i_264_);
v_i_264_ = v___x_274_;
v_source_265_ = v_source_271_;
v_target_266_ = v_target_272_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4___redArg(lean_object* v_data_276_){
_start:
{
lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v_nbuckets_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_277_ = lean_array_get_size(v_data_276_);
v___x_278_ = lean_unsigned_to_nat(2u);
v_nbuckets_279_ = lean_nat_mul(v___x_277_, v___x_278_);
v___x_280_ = lean_unsigned_to_nat(0u);
v___x_281_ = lean_box(0);
v___x_282_ = lean_mk_array(v_nbuckets_279_, v___x_281_);
v___x_283_ = lean_array_propagate_mark(v_data_276_, v___x_282_);
v___x_284_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6___redArg(v___x_280_, v_data_276_, v___x_283_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2___redArg(lean_object* v_m_285_, lean_object* v_a_286_, lean_object* v_b_287_){
_start:
{
lean_object* v_size_288_; lean_object* v_buckets_289_; lean_object* v___x_291_; uint8_t v_isShared_292_; uint8_t v_isSharedCheck_333_; 
v_size_288_ = lean_ctor_get(v_m_285_, 0);
v_buckets_289_ = lean_ctor_get(v_m_285_, 1);
v_isSharedCheck_333_ = !lean_is_exclusive(v_m_285_);
if (v_isSharedCheck_333_ == 0)
{
v___x_291_ = v_m_285_;
v_isShared_292_ = v_isSharedCheck_333_;
goto v_resetjp_290_;
}
else
{
lean_inc(v_buckets_289_);
lean_inc(v_size_288_);
lean_dec(v_m_285_);
v___x_291_ = lean_box(0);
v_isShared_292_ = v_isSharedCheck_333_;
goto v_resetjp_290_;
}
v_resetjp_290_:
{
lean_object* v___x_293_; uint64_t v___x_294_; uint64_t v___x_295_; uint64_t v___x_296_; uint64_t v___x_297_; uint64_t v_fold_298_; uint64_t v___x_299_; uint64_t v___x_300_; uint64_t v___x_301_; size_t v___x_302_; size_t v___x_303_; size_t v___x_304_; size_t v___x_305_; size_t v___x_306_; lean_object* v_bkt_307_; uint8_t v___x_308_; 
v___x_293_ = lean_array_get_size(v_buckets_289_);
v___x_294_ = 7ULL;
v___x_295_ = l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(v___x_294_, v_a_286_);
v___x_296_ = 32ULL;
v___x_297_ = lean_uint64_shift_right(v___x_295_, v___x_296_);
v_fold_298_ = lean_uint64_xor(v___x_295_, v___x_297_);
v___x_299_ = 16ULL;
v___x_300_ = lean_uint64_shift_right(v_fold_298_, v___x_299_);
v___x_301_ = lean_uint64_xor(v_fold_298_, v___x_300_);
v___x_302_ = lean_uint64_to_usize(v___x_301_);
v___x_303_ = lean_usize_of_nat(v___x_293_);
v___x_304_ = ((size_t)1ULL);
v___x_305_ = lean_usize_sub(v___x_303_, v___x_304_);
v___x_306_ = lean_usize_land(v___x_302_, v___x_305_);
v_bkt_307_ = lean_array_uget_borrowed(v_buckets_289_, v___x_306_);
v___x_308_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3___redArg(v_a_286_, v_bkt_307_);
if (v___x_308_ == 0)
{
lean_object* v___x_309_; lean_object* v_size_x27_310_; lean_object* v___x_311_; lean_object* v_buckets_x27_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; uint8_t v___x_318_; 
v___x_309_ = lean_unsigned_to_nat(1u);
v_size_x27_310_ = lean_nat_add(v_size_288_, v___x_309_);
lean_dec(v_size_288_);
lean_inc(v_bkt_307_);
v___x_311_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_311_, 0, v_a_286_);
lean_ctor_set(v___x_311_, 1, v_b_287_);
lean_ctor_set(v___x_311_, 2, v_bkt_307_);
v_buckets_x27_312_ = lean_array_uset(v_buckets_289_, v___x_306_, v___x_311_);
v___x_313_ = lean_unsigned_to_nat(4u);
v___x_314_ = lean_nat_mul(v_size_x27_310_, v___x_313_);
v___x_315_ = lean_unsigned_to_nat(3u);
v___x_316_ = lean_nat_div(v___x_314_, v___x_315_);
lean_dec(v___x_314_);
v___x_317_ = lean_array_get_size(v_buckets_x27_312_);
v___x_318_ = lean_nat_dec_le(v___x_316_, v___x_317_);
lean_dec(v___x_316_);
if (v___x_318_ == 0)
{
lean_object* v_val_319_; lean_object* v___x_321_; 
v_val_319_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4___redArg(v_buckets_x27_312_);
if (v_isShared_292_ == 0)
{
lean_ctor_set(v___x_291_, 1, v_val_319_);
lean_ctor_set(v___x_291_, 0, v_size_x27_310_);
v___x_321_ = v___x_291_;
goto v_reusejp_320_;
}
else
{
lean_object* v_reuseFailAlloc_322_; 
v_reuseFailAlloc_322_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_322_, 0, v_size_x27_310_);
lean_ctor_set(v_reuseFailAlloc_322_, 1, v_val_319_);
v___x_321_ = v_reuseFailAlloc_322_;
goto v_reusejp_320_;
}
v_reusejp_320_:
{
return v___x_321_;
}
}
else
{
lean_object* v___x_324_; 
if (v_isShared_292_ == 0)
{
lean_ctor_set(v___x_291_, 1, v_buckets_x27_312_);
lean_ctor_set(v___x_291_, 0, v_size_x27_310_);
v___x_324_ = v___x_291_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v_size_x27_310_);
lean_ctor_set(v_reuseFailAlloc_325_, 1, v_buckets_x27_312_);
v___x_324_ = v_reuseFailAlloc_325_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
return v___x_324_;
}
}
}
else
{
lean_object* v___x_326_; lean_object* v_buckets_x27_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_331_; 
lean_inc(v_bkt_307_);
v___x_326_ = lean_box(0);
v_buckets_x27_327_ = lean_array_uset(v_buckets_289_, v___x_306_, v___x_326_);
v___x_328_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__5___redArg(v_a_286_, v_b_287_, v_bkt_307_);
v___x_329_ = lean_array_uset(v_buckets_x27_327_, v___x_306_, v___x_328_);
if (v_isShared_292_ == 0)
{
lean_ctor_set(v___x_291_, 1, v___x_329_);
v___x_331_ = v___x_291_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v_size_288_);
lean_ctor_set(v_reuseFailAlloc_332_, 1, v___x_329_);
v___x_331_ = v_reuseFailAlloc_332_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
return v___x_331_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1___redArg(lean_object* v_a_334_, lean_object* v_x_335_){
_start:
{
if (lean_obj_tag(v_x_335_) == 0)
{
lean_object* v___x_336_; 
v___x_336_ = lean_box(0);
return v___x_336_;
}
else
{
lean_object* v_key_337_; lean_object* v_value_338_; lean_object* v_tail_339_; uint8_t v___x_340_; 
v_key_337_ = lean_ctor_get(v_x_335_, 0);
v_value_338_ = lean_ctor_get(v_x_335_, 1);
v_tail_339_ = lean_ctor_get(v_x_335_, 2);
v___x_340_ = l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2(v_key_337_, v_a_334_);
if (v___x_340_ == 0)
{
v_x_335_ = v_tail_339_;
goto _start;
}
else
{
lean_object* v___x_342_; 
lean_inc(v_value_338_);
v___x_342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_342_, 0, v_value_338_);
return v___x_342_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1___redArg___boxed(lean_object* v_a_343_, lean_object* v_x_344_){
_start:
{
lean_object* v_res_345_; 
v_res_345_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1___redArg(v_a_343_, v_x_344_);
lean_dec(v_x_344_);
lean_dec(v_a_343_);
return v_res_345_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1___redArg(lean_object* v_m_346_, lean_object* v_a_347_){
_start:
{
lean_object* v_buckets_348_; lean_object* v___x_349_; uint64_t v___x_350_; uint64_t v___x_351_; uint64_t v___x_352_; uint64_t v___x_353_; uint64_t v_fold_354_; uint64_t v___x_355_; uint64_t v___x_356_; uint64_t v___x_357_; size_t v___x_358_; size_t v___x_359_; size_t v___x_360_; size_t v___x_361_; size_t v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; 
v_buckets_348_ = lean_ctor_get(v_m_346_, 1);
v___x_349_ = lean_array_get_size(v_buckets_348_);
v___x_350_ = 7ULL;
v___x_351_ = l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(v___x_350_, v_a_347_);
v___x_352_ = 32ULL;
v___x_353_ = lean_uint64_shift_right(v___x_351_, v___x_352_);
v_fold_354_ = lean_uint64_xor(v___x_351_, v___x_353_);
v___x_355_ = 16ULL;
v___x_356_ = lean_uint64_shift_right(v_fold_354_, v___x_355_);
v___x_357_ = lean_uint64_xor(v_fold_354_, v___x_356_);
v___x_358_ = lean_uint64_to_usize(v___x_357_);
v___x_359_ = lean_usize_of_nat(v___x_349_);
v___x_360_ = ((size_t)1ULL);
v___x_361_ = lean_usize_sub(v___x_359_, v___x_360_);
v___x_362_ = lean_usize_land(v___x_358_, v___x_361_);
v___x_363_ = lean_array_uget_borrowed(v_buckets_348_, v___x_362_);
v___x_364_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1___redArg(v_a_347_, v___x_363_);
return v___x_364_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1___redArg___boxed(lean_object* v_m_365_, lean_object* v_a_366_){
_start:
{
lean_object* v_res_367_; 
v_res_367_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1___redArg(v_m_365_, v_a_366_);
lean_dec(v_a_366_);
lean_dec_ref(v_m_365_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_decoder(lean_object* v_e_368_, lean_object* v_paths_369_){
_start:
{
lean_object* v_tables_370_; lean_object* v_defs_371_; lean_object* v_out_372_; lean_object* v_names_373_; lean_object* v_decoders_374_; lean_object* v___x_376_; uint8_t v_isShared_377_; uint8_t v_isSharedCheck_403_; 
v_tables_370_ = lean_ctor_get(v_e_368_, 0);
lean_inc_ref(v_tables_370_);
v_defs_371_ = lean_ctor_get(v_e_368_, 1);
v_out_372_ = lean_ctor_get(v_e_368_, 2);
v_names_373_ = lean_ctor_get(v_tables_370_, 0);
v_decoders_374_ = lean_ctor_get(v_tables_370_, 1);
v_isSharedCheck_403_ = !lean_is_exclusive(v_tables_370_);
if (v_isSharedCheck_403_ == 0)
{
v___x_376_ = v_tables_370_;
v_isShared_377_ = v_isSharedCheck_403_;
goto v_resetjp_375_;
}
else
{
lean_inc(v_decoders_374_);
lean_inc(v_names_373_);
lean_dec(v_tables_370_);
v___x_376_ = lean_box(0);
v_isShared_377_ = v_isSharedCheck_403_;
goto v_resetjp_375_;
}
v_resetjp_375_:
{
lean_object* v___x_378_; 
v___x_378_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1___redArg(v_decoders_374_, v_paths_369_);
if (lean_obj_tag(v___x_378_) == 0)
{
lean_object* v___x_380_; uint8_t v_isShared_381_; uint8_t v_isSharedCheck_397_; 
lean_inc_ref(v_out_372_);
lean_inc_ref(v_defs_371_);
v_isSharedCheck_397_ = !lean_is_exclusive(v_e_368_);
if (v_isSharedCheck_397_ == 0)
{
lean_object* v_unused_398_; lean_object* v_unused_399_; lean_object* v_unused_400_; 
v_unused_398_ = lean_ctor_get(v_e_368_, 2);
lean_dec(v_unused_398_);
v_unused_399_ = lean_ctor_get(v_e_368_, 1);
lean_dec(v_unused_399_);
v_unused_400_ = lean_ctor_get(v_e_368_, 0);
lean_dec(v_unused_400_);
v___x_380_ = v_e_368_;
v_isShared_381_ = v_isSharedCheck_397_;
goto v_resetjp_379_;
}
else
{
lean_dec(v_e_368_);
v___x_380_ = lean_box(0);
v_isShared_381_ = v_isSharedCheck_397_;
goto v_resetjp_379_;
}
v_resetjp_379_:
{
lean_object* v_size_382_; lean_object* v___x_383_; lean_object* v_t_385_; 
v_size_382_ = lean_ctor_get(v_decoders_374_, 0);
lean_inc_n(v_size_382_, 2);
lean_inc(v_paths_369_);
v___x_383_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2___redArg(v_decoders_374_, v_paths_369_, v_size_382_);
if (v_isShared_377_ == 0)
{
lean_ctor_set(v___x_376_, 1, v___x_383_);
v_t_385_ = v___x_376_;
goto v_reusejp_384_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v_names_373_);
lean_ctor_set(v_reuseFailAlloc_396_, 1, v___x_383_);
v_t_385_ = v_reuseFailAlloc_396_;
goto v_reusejp_384_;
}
v_reusejp_384_:
{
uint8_t v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v_d_390_; lean_object* v_d_391_; lean_object* v___x_393_; 
v___x_386_ = 7;
v___x_387_ = lean_byte_array_push(v_defs_371_, v___x_386_);
lean_inc(v_size_382_);
v___x_388_ = l_Lasm_UI_Encode_pushVar(v___x_387_, v_size_382_);
v___x_389_ = l_List_lengthTR___redArg(v_paths_369_);
v_d_390_ = l_Lasm_UI_Encode_pushVar(v___x_388_, v___x_389_);
v_d_391_ = l_List_foldl___at___00Lasm_UI_Encode_Enc_decoder_spec__3(v_d_390_, v_paths_369_);
lean_dec(v_paths_369_);
if (v_isShared_381_ == 0)
{
lean_ctor_set(v___x_380_, 1, v_d_391_);
lean_ctor_set(v___x_380_, 0, v_t_385_);
v___x_393_ = v___x_380_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_395_; 
v_reuseFailAlloc_395_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_395_, 0, v_t_385_);
lean_ctor_set(v_reuseFailAlloc_395_, 1, v_d_391_);
lean_ctor_set(v_reuseFailAlloc_395_, 2, v_out_372_);
v___x_393_ = v_reuseFailAlloc_395_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
lean_object* v___x_394_; 
v___x_394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_394_, 0, v___x_393_);
lean_ctor_set(v___x_394_, 1, v_size_382_);
return v___x_394_;
}
}
}
}
else
{
lean_object* v_val_401_; lean_object* v___x_402_; 
lean_del_object(v___x_376_);
lean_dec_ref(v_decoders_374_);
lean_dec_ref(v_names_373_);
lean_dec(v_paths_369_);
v_val_401_ = lean_ctor_get(v___x_378_, 0);
lean_inc(v_val_401_);
lean_dec_ref_known(v___x_378_, 1);
v___x_402_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_402_, 0, v_e_368_);
lean_ctor_set(v___x_402_, 1, v_val_401_);
return v___x_402_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1(lean_object* v_00_u03b2_404_, lean_object* v_m_405_, lean_object* v_a_406_){
_start:
{
lean_object* v___x_407_; 
v___x_407_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1___redArg(v_m_405_, v_a_406_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1___boxed(lean_object* v_00_u03b2_408_, lean_object* v_m_409_, lean_object* v_a_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1(v_00_u03b2_408_, v_m_409_, v_a_410_);
lean_dec(v_a_410_);
lean_dec_ref(v_m_409_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2(lean_object* v_00_u03b2_412_, lean_object* v_m_413_, lean_object* v_a_414_, lean_object* v_b_415_){
_start:
{
lean_object* v___x_416_; 
v___x_416_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2___redArg(v_m_413_, v_a_414_, v_b_415_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1(lean_object* v_00_u03b2_417_, lean_object* v_a_418_, lean_object* v_x_419_){
_start:
{
lean_object* v___x_420_; 
v___x_420_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1___redArg(v_a_418_, v_x_419_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1___boxed(lean_object* v_00_u03b2_421_, lean_object* v_a_422_, lean_object* v_x_423_){
_start:
{
lean_object* v_res_424_; 
v_res_424_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1(v_00_u03b2_421_, v_a_422_, v_x_423_);
lean_dec(v_x_423_);
lean_dec(v_a_422_);
return v_res_424_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3(lean_object* v_00_u03b2_425_, lean_object* v_a_426_, lean_object* v_x_427_){
_start:
{
uint8_t v___x_428_; 
v___x_428_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3___redArg(v_a_426_, v_x_427_);
return v___x_428_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3___boxed(lean_object* v_00_u03b2_429_, lean_object* v_a_430_, lean_object* v_x_431_){
_start:
{
uint8_t v_res_432_; lean_object* v_r_433_; 
v_res_432_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3(v_00_u03b2_429_, v_a_430_, v_x_431_);
lean_dec(v_x_431_);
lean_dec(v_a_430_);
v_r_433_ = lean_box(v_res_432_);
return v_r_433_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4(lean_object* v_00_u03b2_434_, lean_object* v_data_435_){
_start:
{
lean_object* v___x_436_; 
v___x_436_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4___redArg(v_data_435_);
return v___x_436_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__5(lean_object* v_00_u03b2_437_, lean_object* v_a_438_, lean_object* v_b_439_, lean_object* v_x_440_){
_start:
{
lean_object* v___x_441_; 
v___x_441_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__5___redArg(v_a_438_, v_b_439_, v_x_440_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6(lean_object* v_00_u03b2_442_, lean_object* v_i_443_, lean_object* v_source_444_, lean_object* v_target_445_){
_start:
{
lean_object* v___x_446_; 
v___x_446_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6___redArg(v_i_443_, v_source_444_, v_target_445_);
return v___x_446_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6_spec__8(lean_object* v_00_u03b2_447_, lean_object* v_x_448_, lean_object* v_x_449_){
_start:
{
lean_object* v___x_450_; 
v___x_450_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6_spec__8___redArg(v_x_448_, v_x_449_);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_flags(lean_object* v_l_451_){
_start:
{
uint8_t v_preventDefault_452_; uint8_t v_stopPropagation_453_; lean_object* v___y_455_; 
v_preventDefault_452_ = lean_ctor_get_uint8(v_l_451_, sizeof(void*)*2);
v_stopPropagation_453_ = lean_ctor_get_uint8(v_l_451_, sizeof(void*)*2 + 1);
if (v_preventDefault_452_ == 0)
{
lean_object* v___x_458_; 
v___x_458_ = lean_unsigned_to_nat(0u);
v___y_455_ = v___x_458_;
goto v___jp_454_;
}
else
{
lean_object* v___x_459_; 
v___x_459_ = lean_unsigned_to_nat(1u);
v___y_455_ = v___x_459_;
goto v___jp_454_;
}
v___jp_454_:
{
if (v_stopPropagation_453_ == 0)
{
lean_inc(v___y_455_);
return v___y_455_;
}
else
{
lean_object* v___x_456_; lean_object* v___x_457_; 
v___x_456_ = lean_unsigned_to_nat(2u);
v___x_457_ = lean_nat_add(v___y_455_, v___x_456_);
return v___x_457_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_flags___boxed(lean_object* v_l_460_){
_start:
{
lean_object* v_res_461_; 
v_res_461_ = l_Lasm_UI_Encode_Enc_flags(v_l_460_);
lean_dec_ref(v_l_460_);
return v_res_461_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_setAttr(lean_object* v_e_462_, lean_object* v_k_463_, lean_object* v_v_464_){
_start:
{
switch(lean_obj_tag(v_k_463_))
{
case 0:
{
if (lean_obj_tag(v_v_464_) == 0)
{
lean_object* v_name_465_; lean_object* v_s_466_; lean_object* v_tables_467_; lean_object* v_defs_468_; lean_object* v_out_469_; lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_497_; 
v_name_465_ = lean_ctor_get(v_k_463_, 0);
lean_inc_ref(v_name_465_);
lean_dec_ref_known(v_k_463_, 1);
v_s_466_ = lean_ctor_get(v_v_464_, 0);
lean_inc_ref(v_s_466_);
lean_dec_ref_known(v_v_464_, 1);
v_tables_467_ = lean_ctor_get(v_e_462_, 0);
v_defs_468_ = lean_ctor_get(v_e_462_, 1);
v_out_469_ = lean_ctor_get(v_e_462_, 2);
v_isSharedCheck_497_ = !lean_is_exclusive(v_e_462_);
if (v_isSharedCheck_497_ == 0)
{
v___x_471_ = v_e_462_;
v_isShared_472_ = v_isSharedCheck_497_;
goto v_resetjp_470_;
}
else
{
lean_inc(v_out_469_);
lean_inc(v_defs_468_);
lean_inc(v_tables_467_);
lean_dec(v_e_462_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_497_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
uint8_t v___x_473_; lean_object* v___x_474_; lean_object* v___x_476_; 
v___x_473_ = 0;
v___x_474_ = lean_byte_array_push(v_out_469_, v___x_473_);
if (v_isShared_472_ == 0)
{
lean_ctor_set(v___x_471_, 2, v___x_474_);
v___x_476_ = v___x_471_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v_tables_467_);
lean_ctor_set(v_reuseFailAlloc_496_, 1, v_defs_468_);
lean_ctor_set(v_reuseFailAlloc_496_, 2, v___x_474_);
v___x_476_ = v_reuseFailAlloc_496_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
lean_object* v___x_477_; lean_object* v_tables_478_; lean_object* v_defs_479_; lean_object* v_out_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_495_; 
v___x_477_ = l_Lasm_UI_Encode_Enc_name(v___x_476_, v_name_465_);
v_tables_478_ = lean_ctor_get(v___x_477_, 0);
v_defs_479_ = lean_ctor_get(v___x_477_, 1);
v_out_480_ = lean_ctor_get(v___x_477_, 2);
v_isSharedCheck_495_ = !lean_is_exclusive(v___x_477_);
if (v_isSharedCheck_495_ == 0)
{
v___x_482_ = v___x_477_;
v_isShared_483_ = v_isSharedCheck_495_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_out_480_);
lean_inc(v_defs_479_);
lean_inc(v_tables_478_);
lean_dec(v___x_477_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_495_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; uint8_t v___x_490_; lean_object* v___x_491_; lean_object* v___x_493_; 
v___x_484_ = lean_string_utf8_byte_size(v_s_466_);
v___x_485_ = l_Lasm_UI_Encode_pushVar(v_out_480_, v___x_484_);
v___x_486_ = lean_string_to_utf8(v_s_466_);
lean_dec_ref(v_s_466_);
v___x_487_ = lean_unsigned_to_nat(0u);
v___x_488_ = lean_byte_array_size(v___x_485_);
v___x_489_ = lean_byte_array_size(v___x_486_);
v___x_490_ = 0;
v___x_491_ = lean_byte_array_copy_slice(v___x_486_, v___x_487_, v___x_485_, v___x_488_, v___x_489_, v___x_490_);
lean_dec_ref(v___x_486_);
if (v_isShared_483_ == 0)
{
lean_ctor_set(v___x_482_, 2, v___x_491_);
v___x_493_ = v___x_482_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v_tables_478_);
lean_ctor_set(v_reuseFailAlloc_494_, 1, v_defs_479_);
lean_ctor_set(v_reuseFailAlloc_494_, 2, v___x_491_);
v___x_493_ = v_reuseFailAlloc_494_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
return v___x_493_;
}
}
}
}
}
else
{
lean_object* v_name_498_; lean_object* v_tables_499_; lean_object* v_defs_500_; lean_object* v_out_501_; lean_object* v___x_503_; uint8_t v_isShared_504_; uint8_t v_isSharedCheck_511_; 
lean_dec_ref(v_v_464_);
v_name_498_ = lean_ctor_get(v_k_463_, 0);
lean_inc_ref(v_name_498_);
lean_dec_ref_known(v_k_463_, 1);
v_tables_499_ = lean_ctor_get(v_e_462_, 0);
v_defs_500_ = lean_ctor_get(v_e_462_, 1);
v_out_501_ = lean_ctor_get(v_e_462_, 2);
v_isSharedCheck_511_ = !lean_is_exclusive(v_e_462_);
if (v_isSharedCheck_511_ == 0)
{
v___x_503_ = v_e_462_;
v_isShared_504_ = v_isSharedCheck_511_;
goto v_resetjp_502_;
}
else
{
lean_inc(v_out_501_);
lean_inc(v_defs_500_);
lean_inc(v_tables_499_);
lean_dec(v_e_462_);
v___x_503_ = lean_box(0);
v_isShared_504_ = v_isSharedCheck_511_;
goto v_resetjp_502_;
}
v_resetjp_502_:
{
uint8_t v___x_505_; lean_object* v___x_506_; lean_object* v___x_508_; 
v___x_505_ = 8;
v___x_506_ = lean_byte_array_push(v_out_501_, v___x_505_);
if (v_isShared_504_ == 0)
{
lean_ctor_set(v___x_503_, 2, v___x_506_);
v___x_508_ = v___x_503_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v_tables_499_);
lean_ctor_set(v_reuseFailAlloc_510_, 1, v_defs_500_);
lean_ctor_set(v_reuseFailAlloc_510_, 2, v___x_506_);
v___x_508_ = v_reuseFailAlloc_510_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
lean_object* v___x_509_; 
v___x_509_ = l_Lasm_UI_Encode_Enc_name(v___x_508_, v_name_498_);
return v___x_509_;
}
}
}
}
case 1:
{
if (lean_obj_tag(v_v_464_) == 1)
{
lean_object* v_v_512_; 
v_v_512_ = lean_ctor_get(v_v_464_, 0);
lean_inc_ref(v_v_512_);
lean_dec_ref_known(v_v_464_, 1);
if (lean_obj_tag(v_v_512_) == 0)
{
lean_object* v_name_513_; lean_object* v_s_514_; lean_object* v_tables_515_; lean_object* v_defs_516_; lean_object* v_out_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_545_; 
v_name_513_ = lean_ctor_get(v_k_463_, 0);
lean_inc_ref(v_name_513_);
lean_dec_ref_known(v_k_463_, 1);
v_s_514_ = lean_ctor_get(v_v_512_, 0);
lean_inc_ref(v_s_514_);
lean_dec_ref_known(v_v_512_, 1);
v_tables_515_ = lean_ctor_get(v_e_462_, 0);
v_defs_516_ = lean_ctor_get(v_e_462_, 1);
v_out_517_ = lean_ctor_get(v_e_462_, 2);
v_isSharedCheck_545_ = !lean_is_exclusive(v_e_462_);
if (v_isSharedCheck_545_ == 0)
{
v___x_519_ = v_e_462_;
v_isShared_520_ = v_isSharedCheck_545_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_out_517_);
lean_inc(v_defs_516_);
lean_inc(v_tables_515_);
lean_dec(v_e_462_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_545_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
uint8_t v___x_521_; lean_object* v___x_522_; lean_object* v___x_524_; 
v___x_521_ = 1;
v___x_522_ = lean_byte_array_push(v_out_517_, v___x_521_);
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 2, v___x_522_);
v___x_524_ = v___x_519_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v_tables_515_);
lean_ctor_set(v_reuseFailAlloc_544_, 1, v_defs_516_);
lean_ctor_set(v_reuseFailAlloc_544_, 2, v___x_522_);
v___x_524_ = v_reuseFailAlloc_544_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
lean_object* v___x_525_; lean_object* v_tables_526_; lean_object* v_defs_527_; lean_object* v_out_528_; lean_object* v___x_530_; uint8_t v_isShared_531_; uint8_t v_isSharedCheck_543_; 
v___x_525_ = l_Lasm_UI_Encode_Enc_name(v___x_524_, v_name_513_);
v_tables_526_ = lean_ctor_get(v___x_525_, 0);
v_defs_527_ = lean_ctor_get(v___x_525_, 1);
v_out_528_ = lean_ctor_get(v___x_525_, 2);
v_isSharedCheck_543_ = !lean_is_exclusive(v___x_525_);
if (v_isSharedCheck_543_ == 0)
{
v___x_530_ = v___x_525_;
v_isShared_531_ = v_isSharedCheck_543_;
goto v_resetjp_529_;
}
else
{
lean_inc(v_out_528_);
lean_inc(v_defs_527_);
lean_inc(v_tables_526_);
lean_dec(v___x_525_);
v___x_530_ = lean_box(0);
v_isShared_531_ = v_isSharedCheck_543_;
goto v_resetjp_529_;
}
v_resetjp_529_:
{
lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; uint8_t v___x_538_; lean_object* v___x_539_; lean_object* v___x_541_; 
v___x_532_ = lean_string_utf8_byte_size(v_s_514_);
v___x_533_ = l_Lasm_UI_Encode_pushVar(v_out_528_, v___x_532_);
v___x_534_ = lean_string_to_utf8(v_s_514_);
lean_dec_ref(v_s_514_);
v___x_535_ = lean_unsigned_to_nat(0u);
v___x_536_ = lean_byte_array_size(v___x_533_);
v___x_537_ = lean_byte_array_size(v___x_534_);
v___x_538_ = 0;
v___x_539_ = lean_byte_array_copy_slice(v___x_534_, v___x_535_, v___x_533_, v___x_536_, v___x_537_, v___x_538_);
lean_dec_ref(v___x_534_);
if (v_isShared_531_ == 0)
{
lean_ctor_set(v___x_530_, 2, v___x_539_);
v___x_541_ = v___x_530_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_542_; 
v_reuseFailAlloc_542_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_542_, 0, v_tables_526_);
lean_ctor_set(v_reuseFailAlloc_542_, 1, v_defs_527_);
lean_ctor_set(v_reuseFailAlloc_542_, 2, v___x_539_);
v___x_541_ = v_reuseFailAlloc_542_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
return v___x_541_;
}
}
}
}
}
else
{
uint8_t v_b_546_; 
v_b_546_ = lean_ctor_get_uint8(v_v_512_, 0);
lean_dec_ref_known(v_v_512_, 0);
if (v_b_546_ == 0)
{
lean_object* v_name_547_; lean_object* v_tables_548_; lean_object* v_defs_549_; lean_object* v_out_550_; lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_560_; 
v_name_547_ = lean_ctor_get(v_k_463_, 0);
lean_inc_ref(v_name_547_);
lean_dec_ref_known(v_k_463_, 1);
v_tables_548_ = lean_ctor_get(v_e_462_, 0);
v_defs_549_ = lean_ctor_get(v_e_462_, 1);
v_out_550_ = lean_ctor_get(v_e_462_, 2);
v_isSharedCheck_560_ = !lean_is_exclusive(v_e_462_);
if (v_isSharedCheck_560_ == 0)
{
v___x_552_ = v_e_462_;
v_isShared_553_ = v_isSharedCheck_560_;
goto v_resetjp_551_;
}
else
{
lean_inc(v_out_550_);
lean_inc(v_defs_549_);
lean_inc(v_tables_548_);
lean_dec(v_e_462_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_560_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
uint8_t v___x_554_; lean_object* v___x_555_; lean_object* v___x_557_; 
v___x_554_ = 2;
v___x_555_ = lean_byte_array_push(v_out_550_, v___x_554_);
if (v_isShared_553_ == 0)
{
lean_ctor_set(v___x_552_, 2, v___x_555_);
v___x_557_ = v___x_552_;
goto v_reusejp_556_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v_tables_548_);
lean_ctor_set(v_reuseFailAlloc_559_, 1, v_defs_549_);
lean_ctor_set(v_reuseFailAlloc_559_, 2, v___x_555_);
v___x_557_ = v_reuseFailAlloc_559_;
goto v_reusejp_556_;
}
v_reusejp_556_:
{
lean_object* v___x_558_; 
v___x_558_ = l_Lasm_UI_Encode_Enc_name(v___x_557_, v_name_547_);
return v___x_558_;
}
}
}
else
{
lean_object* v_name_561_; lean_object* v_tables_562_; lean_object* v_defs_563_; lean_object* v_out_564_; lean_object* v___x_566_; uint8_t v_isShared_567_; uint8_t v_isSharedCheck_574_; 
v_name_561_ = lean_ctor_get(v_k_463_, 0);
lean_inc_ref(v_name_561_);
lean_dec_ref_known(v_k_463_, 1);
v_tables_562_ = lean_ctor_get(v_e_462_, 0);
v_defs_563_ = lean_ctor_get(v_e_462_, 1);
v_out_564_ = lean_ctor_get(v_e_462_, 2);
v_isSharedCheck_574_ = !lean_is_exclusive(v_e_462_);
if (v_isSharedCheck_574_ == 0)
{
v___x_566_ = v_e_462_;
v_isShared_567_ = v_isSharedCheck_574_;
goto v_resetjp_565_;
}
else
{
lean_inc(v_out_564_);
lean_inc(v_defs_563_);
lean_inc(v_tables_562_);
lean_dec(v_e_462_);
v___x_566_ = lean_box(0);
v_isShared_567_ = v_isSharedCheck_574_;
goto v_resetjp_565_;
}
v_resetjp_565_:
{
uint8_t v___x_568_; lean_object* v___x_569_; lean_object* v___x_571_; 
v___x_568_ = 3;
v___x_569_ = lean_byte_array_push(v_out_564_, v___x_568_);
if (v_isShared_567_ == 0)
{
lean_ctor_set(v___x_566_, 2, v___x_569_);
v___x_571_ = v___x_566_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_573_; 
v_reuseFailAlloc_573_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_573_, 0, v_tables_562_);
lean_ctor_set(v_reuseFailAlloc_573_, 1, v_defs_563_);
lean_ctor_set(v_reuseFailAlloc_573_, 2, v___x_569_);
v___x_571_ = v_reuseFailAlloc_573_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
lean_object* v___x_572_; 
v___x_572_ = l_Lasm_UI_Encode_Enc_name(v___x_571_, v_name_561_);
return v___x_572_;
}
}
}
}
}
else
{
lean_object* v_name_575_; lean_object* v_tables_576_; lean_object* v_defs_577_; lean_object* v_out_578_; lean_object* v___x_580_; uint8_t v_isShared_581_; uint8_t v_isSharedCheck_588_; 
lean_dec_ref(v_v_464_);
v_name_575_ = lean_ctor_get(v_k_463_, 0);
lean_inc_ref(v_name_575_);
lean_dec_ref_known(v_k_463_, 1);
v_tables_576_ = lean_ctor_get(v_e_462_, 0);
v_defs_577_ = lean_ctor_get(v_e_462_, 1);
v_out_578_ = lean_ctor_get(v_e_462_, 2);
v_isSharedCheck_588_ = !lean_is_exclusive(v_e_462_);
if (v_isSharedCheck_588_ == 0)
{
v___x_580_ = v_e_462_;
v_isShared_581_ = v_isSharedCheck_588_;
goto v_resetjp_579_;
}
else
{
lean_inc(v_out_578_);
lean_inc(v_defs_577_);
lean_inc(v_tables_576_);
lean_dec(v_e_462_);
v___x_580_ = lean_box(0);
v_isShared_581_ = v_isSharedCheck_588_;
goto v_resetjp_579_;
}
v_resetjp_579_:
{
uint8_t v___x_582_; lean_object* v___x_583_; lean_object* v___x_585_; 
v___x_582_ = 9;
v___x_583_ = lean_byte_array_push(v_out_578_, v___x_582_);
if (v_isShared_581_ == 0)
{
lean_ctor_set(v___x_580_, 2, v___x_583_);
v___x_585_ = v___x_580_;
goto v_reusejp_584_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v_tables_576_);
lean_ctor_set(v_reuseFailAlloc_587_, 1, v_defs_577_);
lean_ctor_set(v_reuseFailAlloc_587_, 2, v___x_583_);
v___x_585_ = v_reuseFailAlloc_587_;
goto v_reusejp_584_;
}
v_reusejp_584_:
{
lean_object* v___x_586_; 
v___x_586_ = l_Lasm_UI_Encode_Enc_name(v___x_585_, v_name_575_);
return v___x_586_;
}
}
}
}
case 2:
{
if (lean_obj_tag(v_v_464_) == 0)
{
lean_object* v_name_589_; lean_object* v_s_590_; lean_object* v_tables_591_; lean_object* v_defs_592_; lean_object* v_out_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_621_; 
v_name_589_ = lean_ctor_get(v_k_463_, 0);
lean_inc_ref(v_name_589_);
lean_dec_ref_known(v_k_463_, 1);
v_s_590_ = lean_ctor_get(v_v_464_, 0);
lean_inc_ref(v_s_590_);
lean_dec_ref_known(v_v_464_, 1);
v_tables_591_ = lean_ctor_get(v_e_462_, 0);
v_defs_592_ = lean_ctor_get(v_e_462_, 1);
v_out_593_ = lean_ctor_get(v_e_462_, 2);
v_isSharedCheck_621_ = !lean_is_exclusive(v_e_462_);
if (v_isSharedCheck_621_ == 0)
{
v___x_595_ = v_e_462_;
v_isShared_596_ = v_isSharedCheck_621_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_out_593_);
lean_inc(v_defs_592_);
lean_inc(v_tables_591_);
lean_dec(v_e_462_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_621_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
uint8_t v___x_597_; lean_object* v___x_598_; lean_object* v___x_600_; 
v___x_597_ = 4;
v___x_598_ = lean_byte_array_push(v_out_593_, v___x_597_);
if (v_isShared_596_ == 0)
{
lean_ctor_set(v___x_595_, 2, v___x_598_);
v___x_600_ = v___x_595_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v_tables_591_);
lean_ctor_set(v_reuseFailAlloc_620_, 1, v_defs_592_);
lean_ctor_set(v_reuseFailAlloc_620_, 2, v___x_598_);
v___x_600_ = v_reuseFailAlloc_620_;
goto v_reusejp_599_;
}
v_reusejp_599_:
{
lean_object* v___x_601_; lean_object* v_tables_602_; lean_object* v_defs_603_; lean_object* v_out_604_; lean_object* v___x_606_; uint8_t v_isShared_607_; uint8_t v_isSharedCheck_619_; 
v___x_601_ = l_Lasm_UI_Encode_Enc_name(v___x_600_, v_name_589_);
v_tables_602_ = lean_ctor_get(v___x_601_, 0);
v_defs_603_ = lean_ctor_get(v___x_601_, 1);
v_out_604_ = lean_ctor_get(v___x_601_, 2);
v_isSharedCheck_619_ = !lean_is_exclusive(v___x_601_);
if (v_isSharedCheck_619_ == 0)
{
v___x_606_ = v___x_601_;
v_isShared_607_ = v_isSharedCheck_619_;
goto v_resetjp_605_;
}
else
{
lean_inc(v_out_604_);
lean_inc(v_defs_603_);
lean_inc(v_tables_602_);
lean_dec(v___x_601_);
v___x_606_ = lean_box(0);
v_isShared_607_ = v_isSharedCheck_619_;
goto v_resetjp_605_;
}
v_resetjp_605_:
{
lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; uint8_t v___x_614_; lean_object* v___x_615_; lean_object* v___x_617_; 
v___x_608_ = lean_string_utf8_byte_size(v_s_590_);
v___x_609_ = l_Lasm_UI_Encode_pushVar(v_out_604_, v___x_608_);
v___x_610_ = lean_string_to_utf8(v_s_590_);
lean_dec_ref(v_s_590_);
v___x_611_ = lean_unsigned_to_nat(0u);
v___x_612_ = lean_byte_array_size(v___x_609_);
v___x_613_ = lean_byte_array_size(v___x_610_);
v___x_614_ = 0;
v___x_615_ = lean_byte_array_copy_slice(v___x_610_, v___x_611_, v___x_609_, v___x_612_, v___x_613_, v___x_614_);
lean_dec_ref(v___x_610_);
if (v_isShared_607_ == 0)
{
lean_ctor_set(v___x_606_, 2, v___x_615_);
v___x_617_ = v___x_606_;
goto v_reusejp_616_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v_tables_602_);
lean_ctor_set(v_reuseFailAlloc_618_, 1, v_defs_603_);
lean_ctor_set(v_reuseFailAlloc_618_, 2, v___x_615_);
v___x_617_ = v_reuseFailAlloc_618_;
goto v_reusejp_616_;
}
v_reusejp_616_:
{
return v___x_617_;
}
}
}
}
}
else
{
lean_object* v_name_622_; lean_object* v_tables_623_; lean_object* v_defs_624_; lean_object* v_out_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_635_; 
lean_dec_ref(v_v_464_);
v_name_622_ = lean_ctor_get(v_k_463_, 0);
lean_inc_ref(v_name_622_);
lean_dec_ref_known(v_k_463_, 1);
v_tables_623_ = lean_ctor_get(v_e_462_, 0);
v_defs_624_ = lean_ctor_get(v_e_462_, 1);
v_out_625_ = lean_ctor_get(v_e_462_, 2);
v_isSharedCheck_635_ = !lean_is_exclusive(v_e_462_);
if (v_isSharedCheck_635_ == 0)
{
v___x_627_ = v_e_462_;
v_isShared_628_ = v_isSharedCheck_635_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_out_625_);
lean_inc(v_defs_624_);
lean_inc(v_tables_623_);
lean_dec(v_e_462_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_635_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
uint8_t v___x_629_; lean_object* v___x_630_; lean_object* v___x_632_; 
v___x_629_ = 10;
v___x_630_ = lean_byte_array_push(v_out_625_, v___x_629_);
if (v_isShared_628_ == 0)
{
lean_ctor_set(v___x_627_, 2, v___x_630_);
v___x_632_ = v___x_627_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v_tables_623_);
lean_ctor_set(v_reuseFailAlloc_634_, 1, v_defs_624_);
lean_ctor_set(v_reuseFailAlloc_634_, 2, v___x_630_);
v___x_632_ = v_reuseFailAlloc_634_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
lean_object* v___x_633_; 
v___x_633_ = l_Lasm_UI_Encode_Enc_name(v___x_632_, v_name_622_);
return v___x_633_;
}
}
}
}
default: 
{
if (lean_obj_tag(v_v_464_) == 2)
{
lean_object* v_l_636_; lean_object* v_event_637_; lean_object* v_paths_638_; lean_object* v___x_639_; lean_object* v_fst_640_; lean_object* v_snd_641_; lean_object* v_tables_642_; lean_object* v_defs_643_; lean_object* v_out_644_; lean_object* v___x_646_; uint8_t v_isShared_647_; uint8_t v_isSharedCheck_667_; 
v_l_636_ = lean_ctor_get(v_v_464_, 0);
lean_inc_ref(v_l_636_);
lean_dec_ref_known(v_v_464_, 1);
v_event_637_ = lean_ctor_get(v_k_463_, 0);
lean_inc_ref(v_event_637_);
lean_dec_ref_known(v_k_463_, 1);
v_paths_638_ = lean_ctor_get(v_l_636_, 1);
lean_inc(v_paths_638_);
v___x_639_ = l_Lasm_UI_Encode_Enc_decoder(v_e_462_, v_paths_638_);
v_fst_640_ = lean_ctor_get(v___x_639_, 0);
lean_inc(v_fst_640_);
v_snd_641_ = lean_ctor_get(v___x_639_, 1);
lean_inc(v_snd_641_);
lean_dec_ref(v___x_639_);
v_tables_642_ = lean_ctor_get(v_fst_640_, 0);
v_defs_643_ = lean_ctor_get(v_fst_640_, 1);
v_out_644_ = lean_ctor_get(v_fst_640_, 2);
v_isSharedCheck_667_ = !lean_is_exclusive(v_fst_640_);
if (v_isSharedCheck_667_ == 0)
{
v___x_646_ = v_fst_640_;
v_isShared_647_ = v_isSharedCheck_667_;
goto v_resetjp_645_;
}
else
{
lean_inc(v_out_644_);
lean_inc(v_defs_643_);
lean_inc(v_tables_642_);
lean_dec(v_fst_640_);
v___x_646_ = lean_box(0);
v_isShared_647_ = v_isSharedCheck_667_;
goto v_resetjp_645_;
}
v_resetjp_645_:
{
uint8_t v___x_648_; lean_object* v___x_649_; lean_object* v___x_651_; 
v___x_648_ = 5;
v___x_649_ = lean_byte_array_push(v_out_644_, v___x_648_);
if (v_isShared_647_ == 0)
{
lean_ctor_set(v___x_646_, 2, v___x_649_);
v___x_651_ = v___x_646_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v_tables_642_);
lean_ctor_set(v_reuseFailAlloc_666_, 1, v_defs_643_);
lean_ctor_set(v_reuseFailAlloc_666_, 2, v___x_649_);
v___x_651_ = v_reuseFailAlloc_666_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
lean_object* v___x_652_; lean_object* v_tables_653_; lean_object* v_defs_654_; lean_object* v_out_655_; lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_665_; 
v___x_652_ = l_Lasm_UI_Encode_Enc_name(v___x_651_, v_event_637_);
v_tables_653_ = lean_ctor_get(v___x_652_, 0);
v_defs_654_ = lean_ctor_get(v___x_652_, 1);
v_out_655_ = lean_ctor_get(v___x_652_, 2);
v_isSharedCheck_665_ = !lean_is_exclusive(v___x_652_);
if (v_isSharedCheck_665_ == 0)
{
v___x_657_ = v___x_652_;
v_isShared_658_ = v_isSharedCheck_665_;
goto v_resetjp_656_;
}
else
{
lean_inc(v_out_655_);
lean_inc(v_defs_654_);
lean_inc(v_tables_653_);
lean_dec(v___x_652_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_665_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_663_; 
v___x_659_ = l_Lasm_UI_Encode_pushVar(v_out_655_, v_snd_641_);
v___x_660_ = l_Lasm_UI_Encode_Enc_flags(v_l_636_);
lean_dec_ref(v_l_636_);
v___x_661_ = l_Lasm_UI_Encode_pushVar(v___x_659_, v___x_660_);
if (v_isShared_658_ == 0)
{
lean_ctor_set(v___x_657_, 2, v___x_661_);
v___x_663_ = v___x_657_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_664_; 
v_reuseFailAlloc_664_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_664_, 0, v_tables_653_);
lean_ctor_set(v_reuseFailAlloc_664_, 1, v_defs_654_);
lean_ctor_set(v_reuseFailAlloc_664_, 2, v___x_661_);
v___x_663_ = v_reuseFailAlloc_664_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
return v___x_663_;
}
}
}
}
}
else
{
lean_object* v_event_668_; lean_object* v_tables_669_; lean_object* v_defs_670_; lean_object* v_out_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_681_; 
lean_dec_ref(v_v_464_);
v_event_668_ = lean_ctor_get(v_k_463_, 0);
lean_inc_ref(v_event_668_);
lean_dec_ref_known(v_k_463_, 1);
v_tables_669_ = lean_ctor_get(v_e_462_, 0);
v_defs_670_ = lean_ctor_get(v_e_462_, 1);
v_out_671_ = lean_ctor_get(v_e_462_, 2);
v_isSharedCheck_681_ = !lean_is_exclusive(v_e_462_);
if (v_isSharedCheck_681_ == 0)
{
v___x_673_ = v_e_462_;
v_isShared_674_ = v_isSharedCheck_681_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_out_671_);
lean_inc(v_defs_670_);
lean_inc(v_tables_669_);
lean_dec(v_e_462_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_681_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
uint8_t v___x_675_; lean_object* v___x_676_; lean_object* v___x_678_; 
v___x_675_ = 11;
v___x_676_ = lean_byte_array_push(v_out_671_, v___x_675_);
if (v_isShared_674_ == 0)
{
lean_ctor_set(v___x_673_, 2, v___x_676_);
v___x_678_ = v___x_673_;
goto v_reusejp_677_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v_tables_669_);
lean_ctor_set(v_reuseFailAlloc_680_, 1, v_defs_670_);
lean_ctor_set(v_reuseFailAlloc_680_, 2, v___x_676_);
v___x_678_ = v_reuseFailAlloc_680_;
goto v_reusejp_677_;
}
v_reusejp_677_:
{
lean_object* v___x_679_; 
v___x_679_ = l_Lasm_UI_Encode_Enc_name(v___x_678_, v_event_668_);
return v___x_679_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_attrOp(lean_object* v_e_682_, lean_object* v_x_683_){
_start:
{
if (lean_obj_tag(v_x_683_) == 0)
{
lean_object* v_k_684_; lean_object* v_v_685_; lean_object* v___x_686_; 
v_k_684_ = lean_ctor_get(v_x_683_, 0);
lean_inc_ref(v_k_684_);
v_v_685_ = lean_ctor_get(v_x_683_, 1);
lean_inc_ref(v_v_685_);
lean_dec_ref_known(v_x_683_, 2);
v___x_686_ = l_Lasm_UI_Encode_Enc_setAttr(v_e_682_, v_k_684_, v_v_685_);
return v___x_686_;
}
else
{
lean_object* v_k_687_; 
v_k_687_ = lean_ctor_get(v_x_683_, 0);
lean_inc_ref(v_k_687_);
lean_dec_ref_known(v_x_683_, 1);
switch(lean_obj_tag(v_k_687_))
{
case 0:
{
lean_object* v_name_688_; lean_object* v_tables_689_; lean_object* v_defs_690_; lean_object* v_out_691_; lean_object* v___x_693_; uint8_t v_isShared_694_; uint8_t v_isSharedCheck_701_; 
v_name_688_ = lean_ctor_get(v_k_687_, 0);
lean_inc_ref(v_name_688_);
lean_dec_ref_known(v_k_687_, 1);
v_tables_689_ = lean_ctor_get(v_e_682_, 0);
v_defs_690_ = lean_ctor_get(v_e_682_, 1);
v_out_691_ = lean_ctor_get(v_e_682_, 2);
v_isSharedCheck_701_ = !lean_is_exclusive(v_e_682_);
if (v_isSharedCheck_701_ == 0)
{
v___x_693_ = v_e_682_;
v_isShared_694_ = v_isSharedCheck_701_;
goto v_resetjp_692_;
}
else
{
lean_inc(v_out_691_);
lean_inc(v_defs_690_);
lean_inc(v_tables_689_);
lean_dec(v_e_682_);
v___x_693_ = lean_box(0);
v_isShared_694_ = v_isSharedCheck_701_;
goto v_resetjp_692_;
}
v_resetjp_692_:
{
uint8_t v___x_695_; lean_object* v___x_696_; lean_object* v___x_698_; 
v___x_695_ = 8;
v___x_696_ = lean_byte_array_push(v_out_691_, v___x_695_);
if (v_isShared_694_ == 0)
{
lean_ctor_set(v___x_693_, 2, v___x_696_);
v___x_698_ = v___x_693_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v_tables_689_);
lean_ctor_set(v_reuseFailAlloc_700_, 1, v_defs_690_);
lean_ctor_set(v_reuseFailAlloc_700_, 2, v___x_696_);
v___x_698_ = v_reuseFailAlloc_700_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
lean_object* v___x_699_; 
v___x_699_ = l_Lasm_UI_Encode_Enc_name(v___x_698_, v_name_688_);
return v___x_699_;
}
}
}
case 1:
{
lean_object* v_name_702_; lean_object* v_tables_703_; lean_object* v_defs_704_; lean_object* v_out_705_; lean_object* v___x_707_; uint8_t v_isShared_708_; uint8_t v_isSharedCheck_715_; 
v_name_702_ = lean_ctor_get(v_k_687_, 0);
lean_inc_ref(v_name_702_);
lean_dec_ref_known(v_k_687_, 1);
v_tables_703_ = lean_ctor_get(v_e_682_, 0);
v_defs_704_ = lean_ctor_get(v_e_682_, 1);
v_out_705_ = lean_ctor_get(v_e_682_, 2);
v_isSharedCheck_715_ = !lean_is_exclusive(v_e_682_);
if (v_isSharedCheck_715_ == 0)
{
v___x_707_ = v_e_682_;
v_isShared_708_ = v_isSharedCheck_715_;
goto v_resetjp_706_;
}
else
{
lean_inc(v_out_705_);
lean_inc(v_defs_704_);
lean_inc(v_tables_703_);
lean_dec(v_e_682_);
v___x_707_ = lean_box(0);
v_isShared_708_ = v_isSharedCheck_715_;
goto v_resetjp_706_;
}
v_resetjp_706_:
{
uint8_t v___x_709_; lean_object* v___x_710_; lean_object* v___x_712_; 
v___x_709_ = 9;
v___x_710_ = lean_byte_array_push(v_out_705_, v___x_709_);
if (v_isShared_708_ == 0)
{
lean_ctor_set(v___x_707_, 2, v___x_710_);
v___x_712_ = v___x_707_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v_tables_703_);
lean_ctor_set(v_reuseFailAlloc_714_, 1, v_defs_704_);
lean_ctor_set(v_reuseFailAlloc_714_, 2, v___x_710_);
v___x_712_ = v_reuseFailAlloc_714_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
lean_object* v___x_713_; 
v___x_713_ = l_Lasm_UI_Encode_Enc_name(v___x_712_, v_name_702_);
return v___x_713_;
}
}
}
case 2:
{
lean_object* v_name_716_; lean_object* v_tables_717_; lean_object* v_defs_718_; lean_object* v_out_719_; lean_object* v___x_721_; uint8_t v_isShared_722_; uint8_t v_isSharedCheck_729_; 
v_name_716_ = lean_ctor_get(v_k_687_, 0);
lean_inc_ref(v_name_716_);
lean_dec_ref_known(v_k_687_, 1);
v_tables_717_ = lean_ctor_get(v_e_682_, 0);
v_defs_718_ = lean_ctor_get(v_e_682_, 1);
v_out_719_ = lean_ctor_get(v_e_682_, 2);
v_isSharedCheck_729_ = !lean_is_exclusive(v_e_682_);
if (v_isSharedCheck_729_ == 0)
{
v___x_721_ = v_e_682_;
v_isShared_722_ = v_isSharedCheck_729_;
goto v_resetjp_720_;
}
else
{
lean_inc(v_out_719_);
lean_inc(v_defs_718_);
lean_inc(v_tables_717_);
lean_dec(v_e_682_);
v___x_721_ = lean_box(0);
v_isShared_722_ = v_isSharedCheck_729_;
goto v_resetjp_720_;
}
v_resetjp_720_:
{
uint8_t v___x_723_; lean_object* v___x_724_; lean_object* v___x_726_; 
v___x_723_ = 10;
v___x_724_ = lean_byte_array_push(v_out_719_, v___x_723_);
if (v_isShared_722_ == 0)
{
lean_ctor_set(v___x_721_, 2, v___x_724_);
v___x_726_ = v___x_721_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_728_; 
v_reuseFailAlloc_728_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_728_, 0, v_tables_717_);
lean_ctor_set(v_reuseFailAlloc_728_, 1, v_defs_718_);
lean_ctor_set(v_reuseFailAlloc_728_, 2, v___x_724_);
v___x_726_ = v_reuseFailAlloc_728_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
lean_object* v___x_727_; 
v___x_727_ = l_Lasm_UI_Encode_Enc_name(v___x_726_, v_name_716_);
return v___x_727_;
}
}
}
default: 
{
lean_object* v_event_730_; lean_object* v_tables_731_; lean_object* v_defs_732_; lean_object* v_out_733_; lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_743_; 
v_event_730_ = lean_ctor_get(v_k_687_, 0);
lean_inc_ref(v_event_730_);
lean_dec_ref_known(v_k_687_, 1);
v_tables_731_ = lean_ctor_get(v_e_682_, 0);
v_defs_732_ = lean_ctor_get(v_e_682_, 1);
v_out_733_ = lean_ctor_get(v_e_682_, 2);
v_isSharedCheck_743_ = !lean_is_exclusive(v_e_682_);
if (v_isSharedCheck_743_ == 0)
{
v___x_735_ = v_e_682_;
v_isShared_736_ = v_isSharedCheck_743_;
goto v_resetjp_734_;
}
else
{
lean_inc(v_out_733_);
lean_inc(v_defs_732_);
lean_inc(v_tables_731_);
lean_dec(v_e_682_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_743_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
uint8_t v___x_737_; lean_object* v___x_738_; lean_object* v___x_740_; 
v___x_737_ = 11;
v___x_738_ = lean_byte_array_push(v_out_733_, v___x_737_);
if (v_isShared_736_ == 0)
{
lean_ctor_set(v___x_735_, 2, v___x_738_);
v___x_740_ = v___x_735_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_742_; 
v_reuseFailAlloc_742_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_742_, 0, v_tables_731_);
lean_ctor_set(v_reuseFailAlloc_742_, 1, v_defs_732_);
lean_ctor_set(v_reuseFailAlloc_742_, 2, v___x_738_);
v___x_740_ = v_reuseFailAlloc_742_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
lean_object* v___x_741_; 
v___x_741_ = l_Lasm_UI_Encode_Enc_name(v___x_740_, v_event_730_);
return v___x_741_;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_Encode_Enc_nsByte(uint8_t v_x_744_){
_start:
{
switch(v_x_744_)
{
case 0:
{
uint8_t v___x_745_; 
v___x_745_ = 1;
return v___x_745_;
}
case 1:
{
uint8_t v___x_746_; 
v___x_746_ = 2;
return v___x_746_;
}
default: 
{
uint8_t v___x_747_; 
v___x_747_ = 3;
return v___x_747_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_nsByte___boxed(lean_object* v_x_748_){
_start:
{
uint8_t v_x_40__boxed_749_; uint8_t v_res_750_; lean_object* v_r_751_; 
v_x_40__boxed_749_ = lean_unbox(v_x_748_);
v_res_750_ = l_Lasm_UI_Encode_Enc_nsByte(v_x_40__boxed_749_);
v_r_751_ = lean_box(v_res_750_);
return v_r_751_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_node_spec__0___redArg(lean_object* v_x_752_, lean_object* v_x_753_){
_start:
{
if (lean_obj_tag(v_x_753_) == 0)
{
return v_x_752_;
}
else
{
lean_object* v_head_754_; lean_object* v_tail_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; 
v_head_754_ = lean_ctor_get(v_x_753_, 0);
v_tail_755_ = lean_ctor_get(v_x_753_, 1);
v___x_756_ = l_Lasm_UI_Attr_key___redArg(v_head_754_);
v___x_757_ = l_Lasm_UI_Attr_val___redArg(v_head_754_);
v___x_758_ = l_Lasm_UI_Encode_Enc_setAttr(v_x_752_, v___x_756_, v___x_757_);
v_x_752_ = v___x_758_;
v_x_753_ = v_tail_755_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_node_spec__0___redArg___boxed(lean_object* v_x_760_, lean_object* v_x_761_){
_start:
{
lean_object* v_res_762_; 
v_res_762_ = l_List_foldl___at___00Lasm_UI_Encode_Enc_node_spec__0___redArg(v_x_760_, v_x_761_);
lean_dec(v_x_761_);
return v_res_762_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_node___redArg(lean_object* v_e_763_, lean_object* v_x_764_){
_start:
{
if (lean_obj_tag(v_x_764_) == 0)
{
lean_object* v_id_765_; lean_object* v_s_766_; lean_object* v_tables_767_; lean_object* v_defs_768_; lean_object* v_out_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_787_; 
v_id_765_ = lean_ctor_get(v_x_764_, 0);
lean_inc(v_id_765_);
v_s_766_ = lean_ctor_get(v_x_764_, 1);
lean_inc_ref(v_s_766_);
lean_dec_ref_known(v_x_764_, 2);
v_tables_767_ = lean_ctor_get(v_e_763_, 0);
v_defs_768_ = lean_ctor_get(v_e_763_, 1);
v_out_769_ = lean_ctor_get(v_e_763_, 2);
v_isSharedCheck_787_ = !lean_is_exclusive(v_e_763_);
if (v_isSharedCheck_787_ == 0)
{
v___x_771_ = v_e_763_;
v_isShared_772_ = v_isSharedCheck_787_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_out_769_);
lean_inc(v_defs_768_);
lean_inc(v_tables_767_);
lean_dec(v_e_763_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_787_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
uint8_t v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; uint8_t v___x_782_; lean_object* v___x_783_; lean_object* v___x_785_; 
v___x_773_ = 0;
v___x_774_ = lean_byte_array_push(v_out_769_, v___x_773_);
v___x_775_ = l_Lasm_UI_Encode_pushVar(v___x_774_, v_id_765_);
v___x_776_ = lean_string_utf8_byte_size(v_s_766_);
v___x_777_ = l_Lasm_UI_Encode_pushVar(v___x_775_, v___x_776_);
v___x_778_ = lean_string_to_utf8(v_s_766_);
lean_dec_ref(v_s_766_);
v___x_779_ = lean_unsigned_to_nat(0u);
v___x_780_ = lean_byte_array_size(v___x_777_);
v___x_781_ = lean_byte_array_size(v___x_778_);
v___x_782_ = 0;
v___x_783_ = lean_byte_array_copy_slice(v___x_778_, v___x_779_, v___x_777_, v___x_780_, v___x_781_, v___x_782_);
lean_dec_ref(v___x_778_);
if (v_isShared_772_ == 0)
{
lean_ctor_set(v___x_771_, 2, v___x_783_);
v___x_785_ = v___x_771_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v_tables_767_);
lean_ctor_set(v_reuseFailAlloc_786_, 1, v_defs_768_);
lean_ctor_set(v_reuseFailAlloc_786_, 2, v___x_783_);
v___x_785_ = v_reuseFailAlloc_786_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
return v___x_785_;
}
}
}
else
{
lean_object* v_id_788_; uint8_t v_ns_789_; lean_object* v_tag_790_; lean_object* v_attrs_791_; lean_object* v_children_792_; lean_object* v_tables_793_; lean_object* v_defs_794_; lean_object* v_out_795_; lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_832_; 
v_id_788_ = lean_ctor_get(v_x_764_, 0);
lean_inc(v_id_788_);
v_ns_789_ = lean_ctor_get_uint8(v_x_764_, sizeof(void*)*5);
v_tag_790_ = lean_ctor_get(v_x_764_, 1);
lean_inc_ref(v_tag_790_);
v_attrs_791_ = lean_ctor_get(v_x_764_, 3);
lean_inc(v_attrs_791_);
v_children_792_ = lean_ctor_get(v_x_764_, 4);
lean_inc(v_children_792_);
lean_dec_ref_known(v_x_764_, 5);
v_tables_793_ = lean_ctor_get(v_e_763_, 0);
v_defs_794_ = lean_ctor_get(v_e_763_, 1);
v_out_795_ = lean_ctor_get(v_e_763_, 2);
v_isSharedCheck_832_ = !lean_is_exclusive(v_e_763_);
if (v_isSharedCheck_832_ == 0)
{
v___x_797_ = v_e_763_;
v_isShared_798_ = v_isSharedCheck_832_;
goto v_resetjp_796_;
}
else
{
lean_inc(v_out_795_);
lean_inc(v_defs_794_);
lean_inc(v_tables_793_);
lean_dec(v_e_763_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_832_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
uint8_t v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_803_; 
v___x_799_ = l_Lasm_UI_Encode_Enc_nsByte(v_ns_789_);
v___x_800_ = lean_byte_array_push(v_out_795_, v___x_799_);
v___x_801_ = l_Lasm_UI_Encode_pushVar(v___x_800_, v_id_788_);
if (v_isShared_798_ == 0)
{
lean_ctor_set(v___x_797_, 2, v___x_801_);
v___x_803_ = v___x_797_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_831_; 
v_reuseFailAlloc_831_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_831_, 0, v_tables_793_);
lean_ctor_set(v_reuseFailAlloc_831_, 1, v_defs_794_);
lean_ctor_set(v_reuseFailAlloc_831_, 2, v___x_801_);
v___x_803_ = v_reuseFailAlloc_831_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
lean_object* v_e_804_; lean_object* v_tables_805_; lean_object* v_defs_806_; lean_object* v_out_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_830_; 
v_e_804_ = l_Lasm_UI_Encode_Enc_name(v___x_803_, v_tag_790_);
v_tables_805_ = lean_ctor_get(v_e_804_, 0);
v_defs_806_ = lean_ctor_get(v_e_804_, 1);
v_out_807_ = lean_ctor_get(v_e_804_, 2);
v_isSharedCheck_830_ = !lean_is_exclusive(v_e_804_);
if (v_isSharedCheck_830_ == 0)
{
v___x_809_ = v_e_804_;
v_isShared_810_ = v_isSharedCheck_830_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_out_807_);
lean_inc(v_defs_806_);
lean_inc(v_tables_805_);
lean_dec(v_e_804_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_830_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_814_; 
v___x_811_ = l_List_lengthTR___redArg(v_attrs_791_);
v___x_812_ = l_Lasm_UI_Encode_pushVar(v_out_807_, v___x_811_);
if (v_isShared_810_ == 0)
{
lean_ctor_set(v___x_809_, 2, v___x_812_);
v___x_814_ = v___x_809_;
goto v_reusejp_813_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v_tables_805_);
lean_ctor_set(v_reuseFailAlloc_829_, 1, v_defs_806_);
lean_ctor_set(v_reuseFailAlloc_829_, 2, v___x_812_);
v___x_814_ = v_reuseFailAlloc_829_;
goto v_reusejp_813_;
}
v_reusejp_813_:
{
lean_object* v_e_815_; lean_object* v_tables_816_; lean_object* v_defs_817_; lean_object* v_out_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_828_; 
v_e_815_ = l_List_foldl___at___00Lasm_UI_Encode_Enc_node_spec__0___redArg(v___x_814_, v_attrs_791_);
lean_dec(v_attrs_791_);
v_tables_816_ = lean_ctor_get(v_e_815_, 0);
v_defs_817_ = lean_ctor_get(v_e_815_, 1);
v_out_818_ = lean_ctor_get(v_e_815_, 2);
v_isSharedCheck_828_ = !lean_is_exclusive(v_e_815_);
if (v_isSharedCheck_828_ == 0)
{
v___x_820_ = v_e_815_;
v_isShared_821_ = v_isSharedCheck_828_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_out_818_);
lean_inc(v_defs_817_);
lean_inc(v_tables_816_);
lean_dec(v_e_815_);
v___x_820_ = lean_box(0);
v_isShared_821_ = v_isSharedCheck_828_;
goto v_resetjp_819_;
}
v_resetjp_819_:
{
lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_825_; 
v___x_822_ = l_List_lengthTR___redArg(v_children_792_);
v___x_823_ = l_Lasm_UI_Encode_pushVar(v_out_818_, v___x_822_);
if (v_isShared_821_ == 0)
{
lean_ctor_set(v___x_820_, 2, v___x_823_);
v___x_825_ = v___x_820_;
goto v_reusejp_824_;
}
else
{
lean_object* v_reuseFailAlloc_827_; 
v_reuseFailAlloc_827_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_827_, 0, v_tables_816_);
lean_ctor_set(v_reuseFailAlloc_827_, 1, v_defs_817_);
lean_ctor_set(v_reuseFailAlloc_827_, 2, v___x_823_);
v___x_825_ = v_reuseFailAlloc_827_;
goto v_reusejp_824_;
}
v_reusejp_824_:
{
lean_object* v___x_826_; 
v___x_826_ = l_Lasm_UI_Encode_Enc_nodes___redArg(v___x_825_, v_children_792_);
return v___x_826_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_nodes___redArg(lean_object* v_e_833_, lean_object* v_x_834_){
_start:
{
if (lean_obj_tag(v_x_834_) == 0)
{
return v_e_833_;
}
else
{
lean_object* v_head_835_; lean_object* v_tail_836_; lean_object* v___x_837_; 
v_head_835_ = lean_ctor_get(v_x_834_, 0);
lean_inc(v_head_835_);
v_tail_836_ = lean_ctor_get(v_x_834_, 1);
lean_inc(v_tail_836_);
lean_dec_ref_known(v_x_834_, 2);
v___x_837_ = l_Lasm_UI_Encode_Enc_node___redArg(v_e_833_, v_head_835_);
v_e_833_ = v___x_837_;
v_x_834_ = v_tail_836_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_nodes(lean_object* v_Msg_839_, lean_object* v_e_840_, lean_object* v_x_841_){
_start:
{
lean_object* v___x_842_; 
v___x_842_ = l_Lasm_UI_Encode_Enc_nodes___redArg(v_e_840_, v_x_841_);
return v___x_842_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_node(lean_object* v_Msg_843_, lean_object* v_e_844_, lean_object* v_x_845_){
_start:
{
lean_object* v___x_846_; 
v___x_846_ = l_Lasm_UI_Encode_Enc_node___redArg(v_e_844_, v_x_845_);
return v___x_846_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_node_spec__0(lean_object* v_Msg_847_, lean_object* v_x_848_, lean_object* v_x_849_){
_start:
{
lean_object* v___x_850_; 
v___x_850_ = l_List_foldl___at___00Lasm_UI_Encode_Enc_node_spec__0___redArg(v_x_848_, v_x_849_);
return v___x_850_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_node_spec__0___boxed(lean_object* v_Msg_851_, lean_object* v_x_852_, lean_object* v_x_853_){
_start:
{
lean_object* v_res_854_; 
v_res_854_ = l_List_foldl___at___00Lasm_UI_Encode_Enc_node_spec__0(v_Msg_851_, v_x_852_, v_x_853_);
lean_dec(v_x_853_);
return v_res_854_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_before(lean_object* v_e_855_, lean_object* v_x_856_){
_start:
{
if (lean_obj_tag(v_x_856_) == 0)
{
lean_object* v_tables_857_; lean_object* v_defs_858_; lean_object* v_out_859_; lean_object* v___x_861_; uint8_t v_isShared_862_; uint8_t v_isSharedCheck_868_; 
v_tables_857_ = lean_ctor_get(v_e_855_, 0);
v_defs_858_ = lean_ctor_get(v_e_855_, 1);
v_out_859_ = lean_ctor_get(v_e_855_, 2);
v_isSharedCheck_868_ = !lean_is_exclusive(v_e_855_);
if (v_isSharedCheck_868_ == 0)
{
v___x_861_ = v_e_855_;
v_isShared_862_ = v_isSharedCheck_868_;
goto v_resetjp_860_;
}
else
{
lean_inc(v_out_859_);
lean_inc(v_defs_858_);
lean_inc(v_tables_857_);
lean_dec(v_e_855_);
v___x_861_ = lean_box(0);
v_isShared_862_ = v_isSharedCheck_868_;
goto v_resetjp_860_;
}
v_resetjp_860_:
{
uint8_t v___x_863_; lean_object* v___x_864_; lean_object* v___x_866_; 
v___x_863_ = 0;
v___x_864_ = lean_byte_array_push(v_out_859_, v___x_863_);
if (v_isShared_862_ == 0)
{
lean_ctor_set(v___x_861_, 2, v___x_864_);
v___x_866_ = v___x_861_;
goto v_reusejp_865_;
}
else
{
lean_object* v_reuseFailAlloc_867_; 
v_reuseFailAlloc_867_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_867_, 0, v_tables_857_);
lean_ctor_set(v_reuseFailAlloc_867_, 1, v_defs_858_);
lean_ctor_set(v_reuseFailAlloc_867_, 2, v___x_864_);
v___x_866_ = v_reuseFailAlloc_867_;
goto v_reusejp_865_;
}
v_reusejp_865_:
{
return v___x_866_;
}
}
}
else
{
lean_object* v_val_869_; lean_object* v_tables_870_; lean_object* v_defs_871_; lean_object* v_out_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_882_; 
v_val_869_ = lean_ctor_get(v_x_856_, 0);
v_tables_870_ = lean_ctor_get(v_e_855_, 0);
v_defs_871_ = lean_ctor_get(v_e_855_, 1);
v_out_872_ = lean_ctor_get(v_e_855_, 2);
v_isSharedCheck_882_ = !lean_is_exclusive(v_e_855_);
if (v_isSharedCheck_882_ == 0)
{
v___x_874_ = v_e_855_;
v_isShared_875_ = v_isSharedCheck_882_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_out_872_);
lean_inc(v_defs_871_);
lean_inc(v_tables_870_);
lean_dec(v_e_855_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_882_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_880_; 
v___x_876_ = lean_unsigned_to_nat(1u);
v___x_877_ = lean_nat_add(v_val_869_, v___x_876_);
v___x_878_ = l_Lasm_UI_Encode_pushVar(v_out_872_, v___x_877_);
if (v_isShared_875_ == 0)
{
lean_ctor_set(v___x_874_, 2, v___x_878_);
v___x_880_ = v___x_874_;
goto v_reusejp_879_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v_tables_870_);
lean_ctor_set(v_reuseFailAlloc_881_, 1, v_defs_871_);
lean_ctor_set(v_reuseFailAlloc_881_, 2, v___x_878_);
v___x_880_ = v_reuseFailAlloc_881_;
goto v_reusejp_879_;
}
v_reusejp_879_:
{
return v___x_880_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_before___boxed(lean_object* v_e_883_, lean_object* v_x_884_){
_start:
{
lean_object* v_res_885_; 
v_res_885_ = l_Lasm_UI_Encode_Enc_before(v_e_883_, v_x_884_);
lean_dec(v_x_884_);
return v_res_885_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_op_spec__0(lean_object* v_x_886_, lean_object* v_x_887_){
_start:
{
if (lean_obj_tag(v_x_887_) == 0)
{
return v_x_886_;
}
else
{
lean_object* v_head_888_; lean_object* v_tail_889_; lean_object* v___x_890_; 
v_head_888_ = lean_ctor_get(v_x_887_, 0);
lean_inc(v_head_888_);
v_tail_889_ = lean_ctor_get(v_x_887_, 1);
lean_inc(v_tail_889_);
lean_dec_ref_known(v_x_887_, 2);
v___x_890_ = l_Lasm_UI_Encode_Enc_attrOp(v_x_886_, v_head_888_);
v_x_886_ = v___x_890_;
v_x_887_ = v_tail_889_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_op___redArg(lean_object* v_parent_892_, lean_object* v_e_893_, lean_object* v_x_894_){
_start:
{
switch(lean_obj_tag(v_x_894_))
{
case 0:
{
lean_object* v_node_895_; lean_object* v_before_896_; lean_object* v_tables_897_; lean_object* v_defs_898_; lean_object* v_out_899_; lean_object* v___x_901_; uint8_t v_isShared_902_; uint8_t v_isSharedCheck_920_; 
v_node_895_ = lean_ctor_get(v_x_894_, 0);
lean_inc_ref(v_node_895_);
v_before_896_ = lean_ctor_get(v_x_894_, 1);
lean_inc(v_before_896_);
lean_dec_ref_known(v_x_894_, 2);
v_tables_897_ = lean_ctor_get(v_e_893_, 0);
v_defs_898_ = lean_ctor_get(v_e_893_, 1);
v_out_899_ = lean_ctor_get(v_e_893_, 2);
v_isSharedCheck_920_ = !lean_is_exclusive(v_e_893_);
if (v_isSharedCheck_920_ == 0)
{
v___x_901_ = v_e_893_;
v_isShared_902_ = v_isSharedCheck_920_;
goto v_resetjp_900_;
}
else
{
lean_inc(v_out_899_);
lean_inc(v_defs_898_);
lean_inc(v_tables_897_);
lean_dec(v_e_893_);
v___x_901_ = lean_box(0);
v_isShared_902_ = v_isSharedCheck_920_;
goto v_resetjp_900_;
}
v_resetjp_900_:
{
uint8_t v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; 
v___x_903_ = 1;
v___x_904_ = lean_byte_array_push(v_out_899_, v___x_903_);
v___x_905_ = l_Lasm_UI_Encode_pushVar(v___x_904_, v_parent_892_);
if (lean_obj_tag(v_before_896_) == 0)
{
uint8_t v___x_906_; lean_object* v___x_907_; lean_object* v___x_909_; 
v___x_906_ = 0;
v___x_907_ = lean_byte_array_push(v___x_905_, v___x_906_);
if (v_isShared_902_ == 0)
{
lean_ctor_set(v___x_901_, 2, v___x_907_);
v___x_909_ = v___x_901_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_911_; 
v_reuseFailAlloc_911_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_911_, 0, v_tables_897_);
lean_ctor_set(v_reuseFailAlloc_911_, 1, v_defs_898_);
lean_ctor_set(v_reuseFailAlloc_911_, 2, v___x_907_);
v___x_909_ = v_reuseFailAlloc_911_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
lean_object* v___x_910_; 
v___x_910_ = l_Lasm_UI_Encode_Enc_node___redArg(v___x_909_, v_node_895_);
return v___x_910_;
}
}
else
{
lean_object* v_val_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_917_; 
v_val_912_ = lean_ctor_get(v_before_896_, 0);
lean_inc(v_val_912_);
lean_dec_ref_known(v_before_896_, 1);
v___x_913_ = lean_unsigned_to_nat(1u);
v___x_914_ = lean_nat_add(v_val_912_, v___x_913_);
lean_dec(v_val_912_);
v___x_915_ = l_Lasm_UI_Encode_pushVar(v___x_905_, v___x_914_);
if (v_isShared_902_ == 0)
{
lean_ctor_set(v___x_901_, 2, v___x_915_);
v___x_917_ = v___x_901_;
goto v_reusejp_916_;
}
else
{
lean_object* v_reuseFailAlloc_919_; 
v_reuseFailAlloc_919_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_919_, 0, v_tables_897_);
lean_ctor_set(v_reuseFailAlloc_919_, 1, v_defs_898_);
lean_ctor_set(v_reuseFailAlloc_919_, 2, v___x_915_);
v___x_917_ = v_reuseFailAlloc_919_;
goto v_reusejp_916_;
}
v_reusejp_916_:
{
lean_object* v___x_918_; 
v___x_918_ = l_Lasm_UI_Encode_Enc_node___redArg(v___x_917_, v_node_895_);
return v___x_918_;
}
}
}
}
case 1:
{
lean_object* v_id_921_; lean_object* v_before_922_; lean_object* v_tables_923_; lean_object* v_defs_924_; lean_object* v_out_925_; lean_object* v___x_927_; uint8_t v_isShared_928_; uint8_t v_isSharedCheck_945_; 
v_id_921_ = lean_ctor_get(v_x_894_, 0);
lean_inc(v_id_921_);
v_before_922_ = lean_ctor_get(v_x_894_, 1);
lean_inc(v_before_922_);
lean_dec_ref_known(v_x_894_, 2);
v_tables_923_ = lean_ctor_get(v_e_893_, 0);
v_defs_924_ = lean_ctor_get(v_e_893_, 1);
v_out_925_ = lean_ctor_get(v_e_893_, 2);
v_isSharedCheck_945_ = !lean_is_exclusive(v_e_893_);
if (v_isSharedCheck_945_ == 0)
{
v___x_927_ = v_e_893_;
v_isShared_928_ = v_isSharedCheck_945_;
goto v_resetjp_926_;
}
else
{
lean_inc(v_out_925_);
lean_inc(v_defs_924_);
lean_inc(v_tables_923_);
lean_dec(v_e_893_);
v___x_927_ = lean_box(0);
v_isShared_928_ = v_isSharedCheck_945_;
goto v_resetjp_926_;
}
v_resetjp_926_:
{
uint8_t v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; 
v___x_929_ = 2;
v___x_930_ = lean_byte_array_push(v_out_925_, v___x_929_);
v___x_931_ = l_Lasm_UI_Encode_pushVar(v___x_930_, v_parent_892_);
v___x_932_ = l_Lasm_UI_Encode_pushVar(v___x_931_, v_id_921_);
if (lean_obj_tag(v_before_922_) == 0)
{
uint8_t v___x_933_; lean_object* v___x_934_; lean_object* v___x_936_; 
v___x_933_ = 0;
v___x_934_ = lean_byte_array_push(v___x_932_, v___x_933_);
if (v_isShared_928_ == 0)
{
lean_ctor_set(v___x_927_, 2, v___x_934_);
v___x_936_ = v___x_927_;
goto v_reusejp_935_;
}
else
{
lean_object* v_reuseFailAlloc_937_; 
v_reuseFailAlloc_937_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_937_, 0, v_tables_923_);
lean_ctor_set(v_reuseFailAlloc_937_, 1, v_defs_924_);
lean_ctor_set(v_reuseFailAlloc_937_, 2, v___x_934_);
v___x_936_ = v_reuseFailAlloc_937_;
goto v_reusejp_935_;
}
v_reusejp_935_:
{
return v___x_936_;
}
}
else
{
lean_object* v_val_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_943_; 
v_val_938_ = lean_ctor_get(v_before_922_, 0);
lean_inc(v_val_938_);
lean_dec_ref_known(v_before_922_, 1);
v___x_939_ = lean_unsigned_to_nat(1u);
v___x_940_ = lean_nat_add(v_val_938_, v___x_939_);
lean_dec(v_val_938_);
v___x_941_ = l_Lasm_UI_Encode_pushVar(v___x_932_, v___x_940_);
if (v_isShared_928_ == 0)
{
lean_ctor_set(v___x_927_, 2, v___x_941_);
v___x_943_ = v___x_927_;
goto v_reusejp_942_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_944_, 0, v_tables_923_);
lean_ctor_set(v_reuseFailAlloc_944_, 1, v_defs_924_);
lean_ctor_set(v_reuseFailAlloc_944_, 2, v___x_941_);
v___x_943_ = v_reuseFailAlloc_944_;
goto v_reusejp_942_;
}
v_reusejp_942_:
{
return v___x_943_;
}
}
}
}
case 2:
{
lean_object* v_id_946_; lean_object* v_tables_947_; lean_object* v_defs_948_; lean_object* v_out_949_; lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_959_; 
lean_dec(v_parent_892_);
v_id_946_ = lean_ctor_get(v_x_894_, 0);
lean_inc(v_id_946_);
lean_dec_ref_known(v_x_894_, 1);
v_tables_947_ = lean_ctor_get(v_e_893_, 0);
v_defs_948_ = lean_ctor_get(v_e_893_, 1);
v_out_949_ = lean_ctor_get(v_e_893_, 2);
v_isSharedCheck_959_ = !lean_is_exclusive(v_e_893_);
if (v_isSharedCheck_959_ == 0)
{
v___x_951_ = v_e_893_;
v_isShared_952_ = v_isSharedCheck_959_;
goto v_resetjp_950_;
}
else
{
lean_inc(v_out_949_);
lean_inc(v_defs_948_);
lean_inc(v_tables_947_);
lean_dec(v_e_893_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_959_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
uint8_t v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_957_; 
v___x_953_ = 3;
v___x_954_ = lean_byte_array_push(v_out_949_, v___x_953_);
v___x_955_ = l_Lasm_UI_Encode_pushVar(v___x_954_, v_id_946_);
if (v_isShared_952_ == 0)
{
lean_ctor_set(v___x_951_, 2, v___x_955_);
v___x_957_ = v___x_951_;
goto v_reusejp_956_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v_tables_947_);
lean_ctor_set(v_reuseFailAlloc_958_, 1, v_defs_948_);
lean_ctor_set(v_reuseFailAlloc_958_, 2, v___x_955_);
v___x_957_ = v_reuseFailAlloc_958_;
goto v_reusejp_956_;
}
v_reusejp_956_:
{
return v___x_957_;
}
}
}
case 3:
{
lean_object* v_tables_960_; lean_object* v_defs_961_; lean_object* v_out_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_972_; 
v_tables_960_ = lean_ctor_get(v_e_893_, 0);
v_defs_961_ = lean_ctor_get(v_e_893_, 1);
v_out_962_ = lean_ctor_get(v_e_893_, 2);
v_isSharedCheck_972_ = !lean_is_exclusive(v_e_893_);
if (v_isSharedCheck_972_ == 0)
{
v___x_964_ = v_e_893_;
v_isShared_965_ = v_isSharedCheck_972_;
goto v_resetjp_963_;
}
else
{
lean_inc(v_out_962_);
lean_inc(v_defs_961_);
lean_inc(v_tables_960_);
lean_dec(v_e_893_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_972_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
uint8_t v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_970_; 
v___x_966_ = 4;
v___x_967_ = lean_byte_array_push(v_out_962_, v___x_966_);
v___x_968_ = l_Lasm_UI_Encode_pushVar(v___x_967_, v_parent_892_);
if (v_isShared_965_ == 0)
{
lean_ctor_set(v___x_964_, 2, v___x_968_);
v___x_970_ = v___x_964_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v_tables_960_);
lean_ctor_set(v_reuseFailAlloc_971_, 1, v_defs_961_);
lean_ctor_set(v_reuseFailAlloc_971_, 2, v___x_968_);
v___x_970_ = v_reuseFailAlloc_971_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
return v___x_970_;
}
}
}
case 4:
{
lean_object* v_id_973_; lean_object* v_s_974_; lean_object* v_tables_975_; lean_object* v_defs_976_; lean_object* v_out_977_; lean_object* v___x_979_; uint8_t v_isShared_980_; uint8_t v_isSharedCheck_995_; 
lean_dec(v_parent_892_);
v_id_973_ = lean_ctor_get(v_x_894_, 0);
lean_inc(v_id_973_);
v_s_974_ = lean_ctor_get(v_x_894_, 1);
lean_inc_ref(v_s_974_);
lean_dec_ref_known(v_x_894_, 2);
v_tables_975_ = lean_ctor_get(v_e_893_, 0);
v_defs_976_ = lean_ctor_get(v_e_893_, 1);
v_out_977_ = lean_ctor_get(v_e_893_, 2);
v_isSharedCheck_995_ = !lean_is_exclusive(v_e_893_);
if (v_isSharedCheck_995_ == 0)
{
v___x_979_ = v_e_893_;
v_isShared_980_ = v_isSharedCheck_995_;
goto v_resetjp_978_;
}
else
{
lean_inc(v_out_977_);
lean_inc(v_defs_976_);
lean_inc(v_tables_975_);
lean_dec(v_e_893_);
v___x_979_ = lean_box(0);
v_isShared_980_ = v_isSharedCheck_995_;
goto v_resetjp_978_;
}
v_resetjp_978_:
{
uint8_t v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; uint8_t v___x_990_; lean_object* v___x_991_; lean_object* v___x_993_; 
v___x_981_ = 5;
v___x_982_ = lean_byte_array_push(v_out_977_, v___x_981_);
v___x_983_ = l_Lasm_UI_Encode_pushVar(v___x_982_, v_id_973_);
v___x_984_ = lean_string_utf8_byte_size(v_s_974_);
v___x_985_ = l_Lasm_UI_Encode_pushVar(v___x_983_, v___x_984_);
v___x_986_ = lean_string_to_utf8(v_s_974_);
lean_dec_ref(v_s_974_);
v___x_987_ = lean_unsigned_to_nat(0u);
v___x_988_ = lean_byte_array_size(v___x_985_);
v___x_989_ = lean_byte_array_size(v___x_986_);
v___x_990_ = 0;
v___x_991_ = lean_byte_array_copy_slice(v___x_986_, v___x_987_, v___x_985_, v___x_988_, v___x_989_, v___x_990_);
lean_dec_ref(v___x_986_);
if (v_isShared_980_ == 0)
{
lean_ctor_set(v___x_979_, 2, v___x_991_);
v___x_993_ = v___x_979_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v_tables_975_);
lean_ctor_set(v_reuseFailAlloc_994_, 1, v_defs_976_);
lean_ctor_set(v_reuseFailAlloc_994_, 2, v___x_991_);
v___x_993_ = v_reuseFailAlloc_994_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
return v___x_993_;
}
}
}
case 5:
{
lean_object* v_id_996_; lean_object* v_ops_997_; lean_object* v_tables_998_; lean_object* v_defs_999_; lean_object* v_out_1000_; lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1013_; 
lean_dec(v_parent_892_);
v_id_996_ = lean_ctor_get(v_x_894_, 0);
lean_inc(v_id_996_);
v_ops_997_ = lean_ctor_get(v_x_894_, 1);
lean_inc(v_ops_997_);
lean_dec_ref_known(v_x_894_, 2);
v_tables_998_ = lean_ctor_get(v_e_893_, 0);
v_defs_999_ = lean_ctor_get(v_e_893_, 1);
v_out_1000_ = lean_ctor_get(v_e_893_, 2);
v_isSharedCheck_1013_ = !lean_is_exclusive(v_e_893_);
if (v_isSharedCheck_1013_ == 0)
{
v___x_1002_ = v_e_893_;
v_isShared_1003_ = v_isSharedCheck_1013_;
goto v_resetjp_1001_;
}
else
{
lean_inc(v_out_1000_);
lean_inc(v_defs_999_);
lean_inc(v_tables_998_);
lean_dec(v_e_893_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1013_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
uint8_t v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1010_; 
v___x_1004_ = 6;
v___x_1005_ = lean_byte_array_push(v_out_1000_, v___x_1004_);
v___x_1006_ = l_Lasm_UI_Encode_pushVar(v___x_1005_, v_id_996_);
v___x_1007_ = l_List_lengthTR___redArg(v_ops_997_);
v___x_1008_ = l_Lasm_UI_Encode_pushVar(v___x_1006_, v___x_1007_);
if (v_isShared_1003_ == 0)
{
lean_ctor_set(v___x_1002_, 2, v___x_1008_);
v___x_1010_ = v___x_1002_;
goto v_reusejp_1009_;
}
else
{
lean_object* v_reuseFailAlloc_1012_; 
v_reuseFailAlloc_1012_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1012_, 0, v_tables_998_);
lean_ctor_set(v_reuseFailAlloc_1012_, 1, v_defs_999_);
lean_ctor_set(v_reuseFailAlloc_1012_, 2, v___x_1008_);
v___x_1010_ = v_reuseFailAlloc_1012_;
goto v_reusejp_1009_;
}
v_reusejp_1009_:
{
lean_object* v___x_1011_; 
v___x_1011_ = l_List_foldl___at___00Lasm_UI_Encode_Enc_op_spec__0(v___x_1010_, v_ops_997_);
return v___x_1011_;
}
}
}
default: 
{
lean_object* v_id_1014_; lean_object* v_ops_1015_; lean_object* v___x_1016_; 
lean_dec(v_parent_892_);
v_id_1014_ = lean_ctor_get(v_x_894_, 0);
lean_inc(v_id_1014_);
v_ops_1015_ = lean_ctor_get(v_x_894_, 1);
lean_inc(v_ops_1015_);
lean_dec_ref_known(v_x_894_, 2);
v___x_1016_ = l_Lasm_UI_Encode_Enc_opList___redArg(v_id_1014_, v_e_893_, v_ops_1015_);
return v___x_1016_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_opList___redArg(lean_object* v_parent_1017_, lean_object* v_e_1018_, lean_object* v_x_1019_){
_start:
{
if (lean_obj_tag(v_x_1019_) == 0)
{
lean_dec(v_parent_1017_);
return v_e_1018_;
}
else
{
lean_object* v_head_1020_; lean_object* v_tail_1021_; lean_object* v___x_1022_; 
v_head_1020_ = lean_ctor_get(v_x_1019_, 0);
lean_inc(v_head_1020_);
v_tail_1021_ = lean_ctor_get(v_x_1019_, 1);
lean_inc(v_tail_1021_);
lean_dec_ref_known(v_x_1019_, 2);
lean_inc(v_parent_1017_);
v___x_1022_ = l_Lasm_UI_Encode_Enc_op___redArg(v_parent_1017_, v_e_1018_, v_head_1020_);
v_e_1018_ = v___x_1022_;
v_x_1019_ = v_tail_1021_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_opList(lean_object* v_Msg_1024_, lean_object* v_parent_1025_, lean_object* v_e_1026_, lean_object* v_x_1027_){
_start:
{
lean_object* v___x_1028_; 
v___x_1028_ = l_Lasm_UI_Encode_Enc_opList___redArg(v_parent_1025_, v_e_1026_, v_x_1027_);
return v___x_1028_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_op(lean_object* v_Msg_1029_, lean_object* v_parent_1030_, lean_object* v_e_1031_, lean_object* v_x_1032_){
_start:
{
lean_object* v___x_1033_; 
v___x_1033_ = l_Lasm_UI_Encode_Enc_op___redArg(v_parent_1030_, v_e_1031_, v_x_1032_);
return v___x_1033_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___redArg(lean_object* v_root_1034_, lean_object* v_as_1035_, size_t v_i_1036_, size_t v_stop_1037_, lean_object* v_b_1038_){
_start:
{
uint8_t v___x_1039_; 
v___x_1039_ = lean_usize_dec_eq(v_i_1036_, v_stop_1037_);
if (v___x_1039_ == 0)
{
lean_object* v___x_1040_; lean_object* v___x_1041_; size_t v___x_1042_; size_t v___x_1043_; 
v___x_1040_ = lean_array_uget_borrowed(v_as_1035_, v_i_1036_);
lean_inc(v___x_1040_);
lean_inc(v_root_1034_);
v___x_1041_ = l_Lasm_UI_Encode_Enc_op___redArg(v_root_1034_, v_b_1038_, v___x_1040_);
v___x_1042_ = ((size_t)1ULL);
v___x_1043_ = lean_usize_add(v_i_1036_, v___x_1042_);
v_i_1036_ = v___x_1043_;
v_b_1038_ = v___x_1041_;
goto _start;
}
else
{
lean_dec(v_root_1034_);
return v_b_1038_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___redArg___boxed(lean_object* v_root_1045_, lean_object* v_as_1046_, lean_object* v_i_1047_, lean_object* v_stop_1048_, lean_object* v_b_1049_){
_start:
{
size_t v_i_boxed_1050_; size_t v_stop_boxed_1051_; lean_object* v_res_1052_; 
v_i_boxed_1050_ = lean_unbox_usize(v_i_1047_);
lean_dec(v_i_1047_);
v_stop_boxed_1051_ = lean_unbox_usize(v_stop_1048_);
lean_dec(v_stop_1048_);
v_res_1052_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___redArg(v_root_1045_, v_as_1046_, v_i_boxed_1050_, v_stop_boxed_1051_, v_b_1049_);
lean_dec_ref(v_as_1046_);
return v_res_1052_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_frame___redArg(lean_object* v_t_1053_, lean_object* v_ops_1054_, lean_object* v_root_1055_){
_start:
{
lean_object* v_tables_1057_; lean_object* v_defs_1058_; lean_object* v_out_1059_; lean_object* v___y_1067_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; uint8_t v___x_1075_; 
v___x_1071_ = l_ByteArray_empty;
lean_inc_ref(v_t_1053_);
v___x_1072_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1072_, 0, v_t_1053_);
lean_ctor_set(v___x_1072_, 1, v___x_1071_);
lean_ctor_set(v___x_1072_, 2, v___x_1071_);
v___x_1073_ = lean_unsigned_to_nat(0u);
v___x_1074_ = lean_array_get_size(v_ops_1054_);
v___x_1075_ = lean_nat_dec_lt(v___x_1073_, v___x_1074_);
if (v___x_1075_ == 0)
{
lean_dec_ref_known(v___x_1072_, 3);
lean_dec(v_root_1055_);
v_tables_1057_ = v_t_1053_;
v_defs_1058_ = v___x_1071_;
v_out_1059_ = v___x_1071_;
goto v___jp_1056_;
}
else
{
uint8_t v___x_1076_; 
v___x_1076_ = lean_nat_dec_le(v___x_1074_, v___x_1074_);
if (v___x_1076_ == 0)
{
if (v___x_1075_ == 0)
{
lean_dec_ref_known(v___x_1072_, 3);
lean_dec(v_root_1055_);
v_tables_1057_ = v_t_1053_;
v_defs_1058_ = v___x_1071_;
v_out_1059_ = v___x_1071_;
goto v___jp_1056_;
}
else
{
size_t v___x_1077_; size_t v___x_1078_; lean_object* v___x_1079_; 
lean_dec_ref(v_t_1053_);
v___x_1077_ = ((size_t)0ULL);
v___x_1078_ = lean_usize_of_nat(v___x_1074_);
v___x_1079_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___redArg(v_root_1055_, v_ops_1054_, v___x_1077_, v___x_1078_, v___x_1072_);
v___y_1067_ = v___x_1079_;
goto v___jp_1066_;
}
}
else
{
size_t v___x_1080_; size_t v___x_1081_; lean_object* v___x_1082_; 
lean_dec_ref(v_t_1053_);
v___x_1080_ = ((size_t)0ULL);
v___x_1081_ = lean_usize_of_nat(v___x_1074_);
v___x_1082_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___redArg(v_root_1055_, v_ops_1054_, v___x_1080_, v___x_1081_, v___x_1072_);
v___y_1067_ = v___x_1082_;
goto v___jp_1066_;
}
}
v___jp_1056_:
{
lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; uint8_t v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; 
v___x_1060_ = lean_unsigned_to_nat(0u);
v___x_1061_ = lean_byte_array_size(v_defs_1058_);
v___x_1062_ = lean_byte_array_size(v_out_1059_);
v___x_1063_ = 0;
v___x_1064_ = lean_byte_array_copy_slice(v_out_1059_, v___x_1060_, v_defs_1058_, v___x_1061_, v___x_1062_, v___x_1063_);
lean_dec_ref(v_out_1059_);
v___x_1065_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1065_, 0, v___x_1064_);
lean_ctor_set(v___x_1065_, 1, v_tables_1057_);
return v___x_1065_;
}
v___jp_1066_:
{
lean_object* v_tables_1068_; lean_object* v_defs_1069_; lean_object* v_out_1070_; 
v_tables_1068_ = lean_ctor_get(v___y_1067_, 0);
lean_inc_ref(v_tables_1068_);
v_defs_1069_ = lean_ctor_get(v___y_1067_, 1);
lean_inc_ref(v_defs_1069_);
v_out_1070_ = lean_ctor_get(v___y_1067_, 2);
lean_inc_ref(v_out_1070_);
lean_dec_ref(v___y_1067_);
v_tables_1057_ = v_tables_1068_;
v_defs_1058_ = v_defs_1069_;
v_out_1059_ = v_out_1070_;
goto v___jp_1056_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_frame___redArg___boxed(lean_object* v_t_1083_, lean_object* v_ops_1084_, lean_object* v_root_1085_){
_start:
{
lean_object* v_res_1086_; 
v_res_1086_ = l_Lasm_UI_Encode_frame___redArg(v_t_1083_, v_ops_1084_, v_root_1085_);
lean_dec_ref(v_ops_1084_);
return v_res_1086_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_frame(lean_object* v_Msg_1087_, lean_object* v_t_1088_, lean_object* v_ops_1089_, lean_object* v_root_1090_){
_start:
{
lean_object* v___x_1091_; 
v___x_1091_ = l_Lasm_UI_Encode_frame___redArg(v_t_1088_, v_ops_1089_, v_root_1090_);
return v___x_1091_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_frame___boxed(lean_object* v_Msg_1092_, lean_object* v_t_1093_, lean_object* v_ops_1094_, lean_object* v_root_1095_){
_start:
{
lean_object* v_res_1096_; 
v_res_1096_ = l_Lasm_UI_Encode_frame(v_Msg_1092_, v_t_1093_, v_ops_1094_, v_root_1095_);
lean_dec_ref(v_ops_1094_);
return v_res_1096_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0(lean_object* v_Msg_1097_, lean_object* v_root_1098_, lean_object* v_as_1099_, size_t v_i_1100_, size_t v_stop_1101_, lean_object* v_b_1102_){
_start:
{
lean_object* v___x_1103_; 
v___x_1103_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___redArg(v_root_1098_, v_as_1099_, v_i_1100_, v_stop_1101_, v_b_1102_);
return v___x_1103_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___boxed(lean_object* v_Msg_1104_, lean_object* v_root_1105_, lean_object* v_as_1106_, lean_object* v_i_1107_, lean_object* v_stop_1108_, lean_object* v_b_1109_){
_start:
{
size_t v_i_boxed_1110_; size_t v_stop_boxed_1111_; lean_object* v_res_1112_; 
v_i_boxed_1110_ = lean_unbox_usize(v_i_1107_);
lean_dec(v_i_1107_);
v_stop_boxed_1111_ = lean_unbox_usize(v_stop_1108_);
lean_dec(v_stop_1108_);
v_res_1112_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0(v_Msg_1104_, v_root_1105_, v_as_1106_, v_i_boxed_1110_, v_stop_boxed_1111_, v_b_1109_);
lean_dec_ref(v_as_1106_);
return v_res_1112_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Std_Data_HashMap(uint8_t builtin);
lean_object* initialize_Lasm_UI_Diff(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_UI_Encode(uint8_t builtin) {
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
res = initialize_Lasm_UI_Diff(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_UI_Encode_instInhabitedTables_default = _init_l_Lasm_UI_Encode_instInhabitedTables_default();
lean_mark_persistent(l_Lasm_UI_Encode_instInhabitedTables_default);
l_Lasm_UI_Encode_instInhabitedTables = _init_l_Lasm_UI_Encode_instInhabitedTables();
lean_mark_persistent(l_Lasm_UI_Encode_instInhabitedTables);
l_Lasm_UI_Encode_maxNames = _init_l_Lasm_UI_Encode_maxNames();
lean_mark_persistent(l_Lasm_UI_Encode_maxNames);
l_Lasm_UI_Encode_instInhabitedEnc_default = _init_l_Lasm_UI_Encode_instInhabitedEnc_default();
lean_mark_persistent(l_Lasm_UI_Encode_instInhabitedEnc_default);
l_Lasm_UI_Encode_instInhabitedEnc = _init_l_Lasm_UI_Encode_instInhabitedEnc();
lean_mark_persistent(l_Lasm_UI_Encode_instInhabitedEnc);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
