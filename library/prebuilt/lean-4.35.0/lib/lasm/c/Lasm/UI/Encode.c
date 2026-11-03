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
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_maxValues;
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_maxValueBytes;
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
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_value(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_setAttr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_attr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_attr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_attrOp(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_UI_Encode_Enc_nsByte(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_nsByte___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_node_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_node___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_nodes___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_nodes(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_node(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_node_spec__0(lean_object*, lean_object*, lean_object*);
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
v___x_8_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_8_, 0, v___x_7_);
lean_ctor_set(v___x_8_, 1, v___x_7_);
lean_ctor_set(v___x_8_, 2, v___x_7_);
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
static lean_object* _init_l_Lasm_UI_Encode_maxValues(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lean_unsigned_to_nat(4096u);
return v___x_12_;
}
}
static lean_object* _init_l_Lasm_UI_Encode_maxValueBytes(void){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = lean_unsigned_to_nat(40u);
return v___x_13_;
}
}
static lean_object* _init_l_Lasm_UI_Encode_instInhabitedEnc_default___closed__0(void){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_14_ = l_ByteArray_empty;
v___x_15_ = l_Lasm_UI_Encode_instInhabitedTables_default;
v___x_16_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
lean_ctor_set(v___x_16_, 1, v___x_14_);
lean_ctor_set(v___x_16_, 2, v___x_14_);
return v___x_16_;
}
}
static lean_object* _init_l_Lasm_UI_Encode_instInhabitedEnc_default(void){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = lean_obj_once(&l_Lasm_UI_Encode_instInhabitedEnc_default___closed__0, &l_Lasm_UI_Encode_instInhabitedEnc_default___closed__0_once, _init_l_Lasm_UI_Encode_instInhabitedEnc_default___closed__0);
return v___x_17_;
}
}
static lean_object* _init_l_Lasm_UI_Encode_instInhabitedEnc(void){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = l_Lasm_UI_Encode_instInhabitedEnc_default;
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_pushVar(lean_object* v_b_19_, lean_object* v_n_20_){
_start:
{
lean_object* v___x_21_; uint8_t v___x_22_; 
v___x_21_ = lean_unsigned_to_nat(128u);
v___x_22_ = lean_nat_dec_lt(v_n_20_, v___x_21_);
if (v___x_22_ == 0)
{
lean_object* v___x_23_; lean_object* v___x_24_; uint8_t v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_23_ = lean_nat_mod(v_n_20_, v___x_21_);
v___x_24_ = lean_nat_add(v___x_23_, v___x_21_);
lean_dec(v___x_23_);
v___x_25_ = lean_uint8_of_nat(v___x_24_);
lean_dec(v___x_24_);
v___x_26_ = lean_byte_array_push(v_b_19_, v___x_25_);
v___x_27_ = lean_unsigned_to_nat(7u);
v___x_28_ = lean_nat_shiftr(v_n_20_, v___x_27_);
lean_dec(v_n_20_);
v_b_19_ = v___x_26_;
v_n_20_ = v___x_28_;
goto _start;
}
else
{
uint8_t v___x_30_; lean_object* v___x_31_; 
v___x_30_ = lean_uint8_of_nat(v_n_20_);
lean_dec(v_n_20_);
v___x_31_ = lean_byte_array_push(v_b_19_, v___x_30_);
return v___x_31_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_pushStr(lean_object* v_b_32_, lean_object* v_s_33_){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; uint8_t v___x_40_; lean_object* v___x_41_; 
v___x_34_ = lean_string_utf8_byte_size(v_s_33_);
v___x_35_ = l_Lasm_UI_Encode_pushVar(v_b_32_, v___x_34_);
v___x_36_ = lean_string_to_utf8(v_s_33_);
v___x_37_ = lean_unsigned_to_nat(0u);
v___x_38_ = lean_byte_array_size(v___x_35_);
v___x_39_ = lean_byte_array_size(v___x_36_);
v___x_40_ = 0;
v___x_41_ = lean_byte_array_copy_slice(v___x_36_, v___x_37_, v___x_35_, v___x_38_, v___x_39_, v___x_40_);
lean_dec_ref(v___x_36_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_pushStr___boxed(lean_object* v_b_42_, lean_object* v_s_43_){
_start:
{
lean_object* v_res_44_; 
v_res_44_ = l_Lasm_UI_Encode_pushStr(v_b_42_, v_s_43_);
lean_dec_ref(v_s_43_);
return v_res_44_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_byte(lean_object* v_e_45_, uint8_t v_x_46_){
_start:
{
lean_object* v_tables_47_; lean_object* v_defs_48_; lean_object* v_out_49_; lean_object* v___x_51_; uint8_t v_isShared_52_; uint8_t v_isSharedCheck_57_; 
v_tables_47_ = lean_ctor_get(v_e_45_, 0);
v_defs_48_ = lean_ctor_get(v_e_45_, 1);
v_out_49_ = lean_ctor_get(v_e_45_, 2);
v_isSharedCheck_57_ = !lean_is_exclusive(v_e_45_);
if (v_isSharedCheck_57_ == 0)
{
v___x_51_ = v_e_45_;
v_isShared_52_ = v_isSharedCheck_57_;
goto v_resetjp_50_;
}
else
{
lean_inc(v_out_49_);
lean_inc(v_defs_48_);
lean_inc(v_tables_47_);
lean_dec(v_e_45_);
v___x_51_ = lean_box(0);
v_isShared_52_ = v_isSharedCheck_57_;
goto v_resetjp_50_;
}
v_resetjp_50_:
{
lean_object* v___x_53_; lean_object* v___x_55_; 
v___x_53_ = lean_byte_array_push(v_out_49_, v_x_46_);
if (v_isShared_52_ == 0)
{
lean_ctor_set(v___x_51_, 2, v___x_53_);
v___x_55_ = v___x_51_;
goto v_reusejp_54_;
}
else
{
lean_object* v_reuseFailAlloc_56_; 
v_reuseFailAlloc_56_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_56_, 0, v_tables_47_);
lean_ctor_set(v_reuseFailAlloc_56_, 1, v_defs_48_);
lean_ctor_set(v_reuseFailAlloc_56_, 2, v___x_53_);
v___x_55_ = v_reuseFailAlloc_56_;
goto v_reusejp_54_;
}
v_reusejp_54_:
{
return v___x_55_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_byte___boxed(lean_object* v_e_58_, lean_object* v_x_59_){
_start:
{
uint8_t v_x_boxed_60_; lean_object* v_res_61_; 
v_x_boxed_60_ = lean_unbox(v_x_59_);
v_res_61_ = l_Lasm_UI_Encode_Enc_byte(v_e_58_, v_x_boxed_60_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_var(lean_object* v_e_62_, lean_object* v_n_63_){
_start:
{
lean_object* v_tables_64_; lean_object* v_defs_65_; lean_object* v_out_66_; lean_object* v___x_68_; uint8_t v_isShared_69_; uint8_t v_isSharedCheck_74_; 
v_tables_64_ = lean_ctor_get(v_e_62_, 0);
v_defs_65_ = lean_ctor_get(v_e_62_, 1);
v_out_66_ = lean_ctor_get(v_e_62_, 2);
v_isSharedCheck_74_ = !lean_is_exclusive(v_e_62_);
if (v_isSharedCheck_74_ == 0)
{
v___x_68_ = v_e_62_;
v_isShared_69_ = v_isSharedCheck_74_;
goto v_resetjp_67_;
}
else
{
lean_inc(v_out_66_);
lean_inc(v_defs_65_);
lean_inc(v_tables_64_);
lean_dec(v_e_62_);
v___x_68_ = lean_box(0);
v_isShared_69_ = v_isSharedCheck_74_;
goto v_resetjp_67_;
}
v_resetjp_67_:
{
lean_object* v___x_70_; lean_object* v___x_72_; 
v___x_70_ = l_Lasm_UI_Encode_pushVar(v_out_66_, v_n_63_);
if (v_isShared_69_ == 0)
{
lean_ctor_set(v___x_68_, 2, v___x_70_);
v___x_72_ = v___x_68_;
goto v_reusejp_71_;
}
else
{
lean_object* v_reuseFailAlloc_73_; 
v_reuseFailAlloc_73_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_73_, 0, v_tables_64_);
lean_ctor_set(v_reuseFailAlloc_73_, 1, v_defs_65_);
lean_ctor_set(v_reuseFailAlloc_73_, 2, v___x_70_);
v___x_72_ = v_reuseFailAlloc_73_;
goto v_reusejp_71_;
}
v_reusejp_71_:
{
return v___x_72_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_str(lean_object* v_e_75_, lean_object* v_s_76_){
_start:
{
lean_object* v_tables_77_; lean_object* v_defs_78_; lean_object* v_out_79_; lean_object* v___x_81_; uint8_t v_isShared_82_; uint8_t v_isSharedCheck_94_; 
v_tables_77_ = lean_ctor_get(v_e_75_, 0);
v_defs_78_ = lean_ctor_get(v_e_75_, 1);
v_out_79_ = lean_ctor_get(v_e_75_, 2);
v_isSharedCheck_94_ = !lean_is_exclusive(v_e_75_);
if (v_isSharedCheck_94_ == 0)
{
v___x_81_ = v_e_75_;
v_isShared_82_ = v_isSharedCheck_94_;
goto v_resetjp_80_;
}
else
{
lean_inc(v_out_79_);
lean_inc(v_defs_78_);
lean_inc(v_tables_77_);
lean_dec(v_e_75_);
v___x_81_ = lean_box(0);
v_isShared_82_ = v_isSharedCheck_94_;
goto v_resetjp_80_;
}
v_resetjp_80_:
{
lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; uint8_t v___x_89_; lean_object* v___x_90_; lean_object* v___x_92_; 
v___x_83_ = lean_string_utf8_byte_size(v_s_76_);
v___x_84_ = l_Lasm_UI_Encode_pushVar(v_out_79_, v___x_83_);
v___x_85_ = lean_string_to_utf8(v_s_76_);
v___x_86_ = lean_unsigned_to_nat(0u);
v___x_87_ = lean_byte_array_size(v___x_84_);
v___x_88_ = lean_byte_array_size(v___x_85_);
v___x_89_ = 0;
v___x_90_ = lean_byte_array_copy_slice(v___x_85_, v___x_86_, v___x_84_, v___x_87_, v___x_88_, v___x_89_);
lean_dec_ref(v___x_85_);
if (v_isShared_82_ == 0)
{
lean_ctor_set(v___x_81_, 2, v___x_90_);
v___x_92_ = v___x_81_;
goto v_reusejp_91_;
}
else
{
lean_object* v_reuseFailAlloc_93_; 
v_reuseFailAlloc_93_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_93_, 0, v_tables_77_);
lean_ctor_set(v_reuseFailAlloc_93_, 1, v_defs_78_);
lean_ctor_set(v_reuseFailAlloc_93_, 2, v___x_90_);
v___x_92_ = v_reuseFailAlloc_93_;
goto v_reusejp_91_;
}
v_reusejp_91_:
{
return v___x_92_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_str___boxed(lean_object* v_e_95_, lean_object* v_s_96_){
_start:
{
lean_object* v_res_97_; 
v_res_97_ = l_Lasm_UI_Encode_Enc_str(v_e_95_, v_s_96_);
lean_dec_ref(v_s_96_);
return v_res_97_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_nameInto(lean_object* v_t_98_, lean_object* v_b_99_, lean_object* v_s_100_){
_start:
{
lean_object* v_names_101_; lean_object* v_values_102_; lean_object* v_decoders_103_; lean_object* v___x_104_; 
v_names_101_ = lean_ctor_get(v_t_98_, 0);
lean_inc_ref(v_names_101_);
v_values_102_ = lean_ctor_get(v_t_98_, 1);
v_decoders_103_ = lean_ctor_get(v_t_98_, 2);
v___x_104_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5___redArg(v_names_101_, v_s_100_);
if (lean_obj_tag(v___x_104_) == 0)
{
lean_object* v_size_105_; lean_object* v___x_106_; uint8_t v___x_107_; 
v_size_105_ = lean_ctor_get(v_names_101_, 0);
v___x_106_ = lean_unsigned_to_nat(8192u);
v___x_107_ = lean_nat_dec_lt(v_size_105_, v___x_106_);
if (v___x_107_ == 0)
{
lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_123_; 
v_isSharedCheck_123_ = !lean_is_exclusive(v_names_101_);
if (v_isSharedCheck_123_ == 0)
{
lean_object* v_unused_124_; lean_object* v_unused_125_; 
v_unused_124_ = lean_ctor_get(v_names_101_, 1);
lean_dec(v_unused_124_);
v_unused_125_ = lean_ctor_get(v_names_101_, 0);
lean_dec(v_unused_125_);
v___x_109_ = v_names_101_;
v_isShared_110_ = v_isSharedCheck_123_;
goto v_resetjp_108_;
}
else
{
lean_dec(v_names_101_);
v___x_109_ = lean_box(0);
v_isShared_110_ = v_isSharedCheck_123_;
goto v_resetjp_108_;
}
v_resetjp_108_:
{
uint8_t v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_121_; 
v___x_111_ = 1;
v___x_112_ = lean_byte_array_push(v_b_99_, v___x_111_);
v___x_113_ = lean_string_utf8_byte_size(v_s_100_);
v___x_114_ = l_Lasm_UI_Encode_pushVar(v___x_112_, v___x_113_);
v___x_115_ = lean_string_to_utf8(v_s_100_);
lean_dec_ref(v_s_100_);
v___x_116_ = lean_unsigned_to_nat(0u);
v___x_117_ = lean_byte_array_size(v___x_114_);
v___x_118_ = lean_byte_array_size(v___x_115_);
v___x_119_ = lean_byte_array_copy_slice(v___x_115_, v___x_116_, v___x_114_, v___x_117_, v___x_118_, v___x_107_);
lean_dec_ref(v___x_115_);
if (v_isShared_110_ == 0)
{
lean_ctor_set(v___x_109_, 1, v___x_119_);
lean_ctor_set(v___x_109_, 0, v_t_98_);
v___x_121_ = v___x_109_;
goto v_reusejp_120_;
}
else
{
lean_object* v_reuseFailAlloc_122_; 
v_reuseFailAlloc_122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_122_, 0, v_t_98_);
lean_ctor_set(v_reuseFailAlloc_122_, 1, v___x_119_);
v___x_121_ = v_reuseFailAlloc_122_;
goto v_reusejp_120_;
}
v_reusejp_120_:
{
return v___x_121_;
}
}
}
else
{
lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_144_; 
lean_inc(v_size_105_);
lean_inc_ref(v_decoders_103_);
lean_inc_ref(v_values_102_);
v_isSharedCheck_144_ = !lean_is_exclusive(v_t_98_);
if (v_isSharedCheck_144_ == 0)
{
lean_object* v_unused_145_; lean_object* v_unused_146_; lean_object* v_unused_147_; 
v_unused_145_ = lean_ctor_get(v_t_98_, 2);
lean_dec(v_unused_145_);
v_unused_146_ = lean_ctor_get(v_t_98_, 1);
lean_dec(v_unused_146_);
v_unused_147_ = lean_ctor_get(v_t_98_, 0);
lean_dec(v_unused_147_);
v___x_127_ = v_t_98_;
v_isShared_128_ = v_isSharedCheck_144_;
goto v_resetjp_126_;
}
else
{
lean_dec(v_t_98_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_144_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
lean_object* v___x_129_; lean_object* v___x_131_; 
lean_inc_ref(v_s_100_);
v___x_129_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0___redArg(v_names_101_, v_s_100_, v_size_105_);
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 0, v___x_129_);
v___x_131_ = v___x_127_;
goto v_reusejp_130_;
}
else
{
lean_object* v_reuseFailAlloc_143_; 
v_reuseFailAlloc_143_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_143_, 0, v___x_129_);
lean_ctor_set(v_reuseFailAlloc_143_, 1, v_values_102_);
lean_ctor_set(v_reuseFailAlloc_143_, 2, v_decoders_103_);
v___x_131_ = v_reuseFailAlloc_143_;
goto v_reusejp_130_;
}
v_reusejp_130_:
{
uint8_t v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; uint8_t v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_132_ = 0;
v___x_133_ = lean_byte_array_push(v_b_99_, v___x_132_);
v___x_134_ = lean_string_utf8_byte_size(v_s_100_);
v___x_135_ = l_Lasm_UI_Encode_pushVar(v___x_133_, v___x_134_);
v___x_136_ = lean_string_to_utf8(v_s_100_);
lean_dec_ref(v_s_100_);
v___x_137_ = lean_unsigned_to_nat(0u);
v___x_138_ = lean_byte_array_size(v___x_135_);
v___x_139_ = lean_byte_array_size(v___x_136_);
v___x_140_ = 0;
v___x_141_ = lean_byte_array_copy_slice(v___x_136_, v___x_137_, v___x_135_, v___x_138_, v___x_139_, v___x_140_);
lean_dec_ref(v___x_136_);
v___x_142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_142_, 0, v___x_131_);
lean_ctor_set(v___x_142_, 1, v___x_141_);
return v___x_142_;
}
}
}
}
else
{
lean_object* v_val_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
lean_dec_ref(v_names_101_);
lean_dec_ref(v_s_100_);
v_val_148_ = lean_ctor_get(v___x_104_, 0);
lean_inc(v_val_148_);
lean_dec_ref_known(v___x_104_, 1);
v___x_149_ = lean_unsigned_to_nat(2u);
v___x_150_ = lean_nat_add(v_val_148_, v___x_149_);
lean_dec(v_val_148_);
v___x_151_ = l_Lasm_UI_Encode_pushVar(v_b_99_, v___x_150_);
v___x_152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_152_, 0, v_t_98_);
lean_ctor_set(v___x_152_, 1, v___x_151_);
return v___x_152_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_name(lean_object* v_e_153_, lean_object* v_s_154_){
_start:
{
lean_object* v_tables_155_; lean_object* v_defs_156_; lean_object* v_out_157_; lean_object* v___x_159_; uint8_t v_isShared_160_; uint8_t v_isSharedCheck_167_; 
v_tables_155_ = lean_ctor_get(v_e_153_, 0);
v_defs_156_ = lean_ctor_get(v_e_153_, 1);
v_out_157_ = lean_ctor_get(v_e_153_, 2);
v_isSharedCheck_167_ = !lean_is_exclusive(v_e_153_);
if (v_isSharedCheck_167_ == 0)
{
v___x_159_ = v_e_153_;
v_isShared_160_ = v_isSharedCheck_167_;
goto v_resetjp_158_;
}
else
{
lean_inc(v_out_157_);
lean_inc(v_defs_156_);
lean_inc(v_tables_155_);
lean_dec(v_e_153_);
v___x_159_ = lean_box(0);
v_isShared_160_ = v_isSharedCheck_167_;
goto v_resetjp_158_;
}
v_resetjp_158_:
{
lean_object* v___x_161_; lean_object* v_fst_162_; lean_object* v_snd_163_; lean_object* v___x_165_; 
v___x_161_ = l_Lasm_UI_Encode_Enc_nameInto(v_tables_155_, v_out_157_, v_s_154_);
v_fst_162_ = lean_ctor_get(v___x_161_, 0);
lean_inc(v_fst_162_);
v_snd_163_ = lean_ctor_get(v___x_161_, 1);
lean_inc(v_snd_163_);
lean_dec_ref(v___x_161_);
if (v_isShared_160_ == 0)
{
lean_ctor_set(v___x_159_, 2, v_snd_163_);
lean_ctor_set(v___x_159_, 0, v_fst_162_);
v___x_165_ = v___x_159_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_fst_162_);
lean_ctor_set(v_reuseFailAlloc_166_, 1, v_defs_156_);
lean_ctor_set(v_reuseFailAlloc_166_, 2, v_snd_163_);
v___x_165_ = v_reuseFailAlloc_166_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
return v___x_165_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_value(lean_object* v_e_168_, lean_object* v_s_169_){
_start:
{
lean_object* v_tables_170_; lean_object* v_defs_171_; lean_object* v_out_172_; lean_object* v___x_174_; uint8_t v_isShared_175_; uint8_t v_isSharedCheck_226_; 
v_tables_170_ = lean_ctor_get(v_e_168_, 0);
v_defs_171_ = lean_ctor_get(v_e_168_, 1);
v_out_172_ = lean_ctor_get(v_e_168_, 2);
v_isSharedCheck_226_ = !lean_is_exclusive(v_e_168_);
if (v_isSharedCheck_226_ == 0)
{
v___x_174_ = v_e_168_;
v_isShared_175_ = v_isSharedCheck_226_;
goto v_resetjp_173_;
}
else
{
lean_inc(v_out_172_);
lean_inc(v_defs_171_);
lean_inc(v_tables_170_);
lean_dec(v_e_168_);
v___x_174_ = lean_box(0);
v_isShared_175_ = v_isSharedCheck_226_;
goto v_resetjp_173_;
}
v_resetjp_173_:
{
uint8_t v___y_177_; lean_object* v_names_190_; lean_object* v_values_191_; lean_object* v_decoders_192_; lean_object* v___x_193_; 
v_names_190_ = lean_ctor_get(v_tables_170_, 0);
v_values_191_ = lean_ctor_get(v_tables_170_, 1);
v_decoders_192_ = lean_ctor_get(v_tables_170_, 2);
v___x_193_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5___redArg(v_values_191_, v_s_169_);
if (lean_obj_tag(v___x_193_) == 0)
{
lean_object* v___x_194_; lean_object* v___x_195_; uint8_t v___x_196_; 
v___x_194_ = lean_string_utf8_byte_size(v_s_169_);
v___x_195_ = lean_unsigned_to_nat(40u);
v___x_196_ = lean_nat_dec_le(v___x_194_, v___x_195_);
if (v___x_196_ == 0)
{
v___y_177_ = v___x_196_;
goto v___jp_176_;
}
else
{
lean_object* v_size_197_; lean_object* v___x_198_; uint8_t v___x_199_; 
v_size_197_ = lean_ctor_get(v_values_191_, 0);
v___x_198_ = lean_unsigned_to_nat(4096u);
v___x_199_ = lean_nat_dec_lt(v_size_197_, v___x_198_);
if (v___x_199_ == 0)
{
v___y_177_ = v___x_199_;
goto v___jp_176_;
}
else
{
lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_217_; 
lean_inc(v_size_197_);
lean_inc_ref(v_decoders_192_);
lean_inc_ref(v_values_191_);
lean_inc_ref(v_names_190_);
lean_del_object(v___x_174_);
v_isSharedCheck_217_ = !lean_is_exclusive(v_tables_170_);
if (v_isSharedCheck_217_ == 0)
{
lean_object* v_unused_218_; lean_object* v_unused_219_; lean_object* v_unused_220_; 
v_unused_218_ = lean_ctor_get(v_tables_170_, 2);
lean_dec(v_unused_218_);
v_unused_219_ = lean_ctor_get(v_tables_170_, 1);
lean_dec(v_unused_219_);
v_unused_220_ = lean_ctor_get(v_tables_170_, 0);
lean_dec(v_unused_220_);
v___x_201_ = v_tables_170_;
v_isShared_202_ = v_isSharedCheck_217_;
goto v_resetjp_200_;
}
else
{
lean_dec(v_tables_170_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_217_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v___x_203_; lean_object* v___x_205_; 
lean_inc_ref(v_s_169_);
v___x_203_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0___redArg(v_values_191_, v_s_169_, v_size_197_);
if (v_isShared_202_ == 0)
{
lean_ctor_set(v___x_201_, 1, v___x_203_);
v___x_205_ = v___x_201_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_216_; 
v_reuseFailAlloc_216_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_216_, 0, v_names_190_);
lean_ctor_set(v_reuseFailAlloc_216_, 1, v___x_203_);
lean_ctor_set(v_reuseFailAlloc_216_, 2, v_decoders_192_);
v___x_205_ = v_reuseFailAlloc_216_;
goto v_reusejp_204_;
}
v_reusejp_204_:
{
uint8_t v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; uint8_t v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_206_ = 0;
v___x_207_ = lean_byte_array_push(v_out_172_, v___x_206_);
v___x_208_ = l_Lasm_UI_Encode_pushVar(v___x_207_, v___x_194_);
v___x_209_ = lean_string_to_utf8(v_s_169_);
lean_dec_ref(v_s_169_);
v___x_210_ = lean_unsigned_to_nat(0u);
v___x_211_ = lean_byte_array_size(v___x_208_);
v___x_212_ = lean_byte_array_size(v___x_209_);
v___x_213_ = 0;
v___x_214_ = lean_byte_array_copy_slice(v___x_209_, v___x_210_, v___x_208_, v___x_211_, v___x_212_, v___x_213_);
lean_dec_ref(v___x_209_);
v___x_215_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_215_, 0, v___x_205_);
lean_ctor_set(v___x_215_, 1, v_defs_171_);
lean_ctor_set(v___x_215_, 2, v___x_214_);
return v___x_215_;
}
}
}
}
}
else
{
lean_object* v_val_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; 
lean_del_object(v___x_174_);
lean_dec_ref(v_s_169_);
v_val_221_ = lean_ctor_get(v___x_193_, 0);
lean_inc(v_val_221_);
lean_dec_ref_known(v___x_193_, 1);
v___x_222_ = lean_unsigned_to_nat(2u);
v___x_223_ = lean_nat_add(v_val_221_, v___x_222_);
lean_dec(v_val_221_);
v___x_224_ = l_Lasm_UI_Encode_pushVar(v_out_172_, v___x_223_);
v___x_225_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_225_, 0, v_tables_170_);
lean_ctor_set(v___x_225_, 1, v_defs_171_);
lean_ctor_set(v___x_225_, 2, v___x_224_);
return v___x_225_;
}
v___jp_176_:
{
uint8_t v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_188_; 
v___x_178_ = 1;
v___x_179_ = lean_byte_array_push(v_out_172_, v___x_178_);
v___x_180_ = lean_string_utf8_byte_size(v_s_169_);
v___x_181_ = l_Lasm_UI_Encode_pushVar(v___x_179_, v___x_180_);
v___x_182_ = lean_string_to_utf8(v_s_169_);
lean_dec_ref(v_s_169_);
v___x_183_ = lean_unsigned_to_nat(0u);
v___x_184_ = lean_byte_array_size(v___x_181_);
v___x_185_ = lean_byte_array_size(v___x_182_);
v___x_186_ = lean_byte_array_copy_slice(v___x_182_, v___x_183_, v___x_181_, v___x_184_, v___x_185_, v___y_177_);
lean_dec_ref(v___x_182_);
if (v_isShared_175_ == 0)
{
lean_ctor_set(v___x_174_, 2, v___x_186_);
v___x_188_ = v___x_174_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v_tables_170_);
lean_ctor_set(v_reuseFailAlloc_189_, 1, v_defs_171_);
lean_ctor_set(v_reuseFailAlloc_189_, 2, v___x_186_);
v___x_188_ = v_reuseFailAlloc_189_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
return v___x_188_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_decoder_spec__0(lean_object* v_x_227_, lean_object* v_x_228_){
_start:
{
if (lean_obj_tag(v_x_228_) == 0)
{
return v_x_227_;
}
else
{
lean_object* v_head_229_; lean_object* v_tail_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; uint8_t v___x_237_; lean_object* v___x_238_; 
v_head_229_ = lean_ctor_get(v_x_228_, 0);
v_tail_230_ = lean_ctor_get(v_x_228_, 1);
v___x_231_ = lean_string_utf8_byte_size(v_head_229_);
v___x_232_ = l_Lasm_UI_Encode_pushVar(v_x_227_, v___x_231_);
v___x_233_ = lean_string_to_utf8(v_head_229_);
v___x_234_ = lean_unsigned_to_nat(0u);
v___x_235_ = lean_byte_array_size(v___x_232_);
v___x_236_ = lean_byte_array_size(v___x_233_);
v___x_237_ = 0;
v___x_238_ = lean_byte_array_copy_slice(v___x_233_, v___x_234_, v___x_232_, v___x_235_, v___x_236_, v___x_237_);
lean_dec_ref(v___x_233_);
v_x_227_ = v___x_238_;
v_x_228_ = v_tail_230_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_decoder_spec__0___boxed(lean_object* v_x_240_, lean_object* v_x_241_){
_start:
{
lean_object* v_res_242_; 
v_res_242_ = l_List_foldl___at___00Lasm_UI_Encode_Enc_decoder_spec__0(v_x_240_, v_x_241_);
lean_dec(v_x_241_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_decoder_spec__3(lean_object* v_x_243_, lean_object* v_x_244_){
_start:
{
if (lean_obj_tag(v_x_244_) == 0)
{
return v_x_243_;
}
else
{
lean_object* v_head_245_; lean_object* v_tail_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v_head_245_ = lean_ctor_get(v_x_244_, 0);
v_tail_246_ = lean_ctor_get(v_x_244_, 1);
v___x_247_ = l_List_lengthTR___redArg(v_head_245_);
v___x_248_ = l_Lasm_UI_Encode_pushVar(v_x_243_, v___x_247_);
v___x_249_ = l_List_foldl___at___00Lasm_UI_Encode_Enc_decoder_spec__0(v___x_248_, v_head_245_);
v_x_243_ = v___x_249_;
v_x_244_ = v_tail_246_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_decoder_spec__3___boxed(lean_object* v_x_251_, lean_object* v_x_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = l_List_foldl___at___00Lasm_UI_Encode_Enc_decoder_spec__3(v_x_251_, v_x_252_);
lean_dec(v_x_252_);
return v_res_253_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2(lean_object* v_x_254_, lean_object* v_x_255_){
_start:
{
if (lean_obj_tag(v_x_254_) == 0)
{
if (lean_obj_tag(v_x_255_) == 0)
{
uint8_t v___x_256_; 
v___x_256_ = 1;
return v___x_256_;
}
else
{
uint8_t v___x_257_; 
v___x_257_ = 0;
return v___x_257_;
}
}
else
{
if (lean_obj_tag(v_x_255_) == 0)
{
uint8_t v___x_258_; 
v___x_258_ = 0;
return v___x_258_;
}
else
{
lean_object* v_head_259_; lean_object* v_tail_260_; lean_object* v_head_261_; lean_object* v_tail_262_; uint8_t v___x_263_; 
v_head_259_ = lean_ctor_get(v_x_254_, 0);
v_tail_260_ = lean_ctor_get(v_x_254_, 1);
v_head_261_ = lean_ctor_get(v_x_255_, 0);
v_tail_262_ = lean_ctor_get(v_x_255_, 1);
v___x_263_ = l_List_beq___at___00Lean_Syntax_instBEqPreresolved_beq_spec__0(v_head_259_, v_head_261_);
if (v___x_263_ == 0)
{
return v___x_263_;
}
else
{
v_x_254_ = v_tail_260_;
v_x_255_ = v_tail_262_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2___boxed(lean_object* v_x_265_, lean_object* v_x_266_){
_start:
{
uint8_t v_res_267_; lean_object* v_r_268_; 
v_res_267_ = l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2(v_x_265_, v_x_266_);
lean_dec(v_x_266_);
lean_dec(v_x_265_);
v_r_268_ = lean_box(v_res_267_);
return v_r_268_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3___redArg(lean_object* v_a_269_, lean_object* v_x_270_){
_start:
{
if (lean_obj_tag(v_x_270_) == 0)
{
uint8_t v___x_271_; 
v___x_271_ = 0;
return v___x_271_;
}
else
{
lean_object* v_key_272_; lean_object* v_tail_273_; uint8_t v___x_274_; 
v_key_272_ = lean_ctor_get(v_x_270_, 0);
v_tail_273_ = lean_ctor_get(v_x_270_, 2);
v___x_274_ = l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2(v_key_272_, v_a_269_);
if (v___x_274_ == 0)
{
v_x_270_ = v_tail_273_;
goto _start;
}
else
{
return v___x_274_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3___redArg___boxed(lean_object* v_a_276_, lean_object* v_x_277_){
_start:
{
uint8_t v_res_278_; lean_object* v_r_279_; 
v_res_278_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3___redArg(v_a_276_, v_x_277_);
lean_dec(v_x_277_);
lean_dec(v_a_276_);
v_r_279_ = lean_box(v_res_278_);
return v_r_279_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__5___redArg(lean_object* v_a_280_, lean_object* v_b_281_, lean_object* v_x_282_){
_start:
{
if (lean_obj_tag(v_x_282_) == 0)
{
lean_dec(v_b_281_);
lean_dec(v_a_280_);
return v_x_282_;
}
else
{
lean_object* v_key_283_; lean_object* v_value_284_; lean_object* v_tail_285_; lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_297_; 
v_key_283_ = lean_ctor_get(v_x_282_, 0);
v_value_284_ = lean_ctor_get(v_x_282_, 1);
v_tail_285_ = lean_ctor_get(v_x_282_, 2);
v_isSharedCheck_297_ = !lean_is_exclusive(v_x_282_);
if (v_isSharedCheck_297_ == 0)
{
v___x_287_ = v_x_282_;
v_isShared_288_ = v_isSharedCheck_297_;
goto v_resetjp_286_;
}
else
{
lean_inc(v_tail_285_);
lean_inc(v_value_284_);
lean_inc(v_key_283_);
lean_dec(v_x_282_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_297_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
uint8_t v___x_289_; 
v___x_289_ = l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2(v_key_283_, v_a_280_);
if (v___x_289_ == 0)
{
lean_object* v___x_290_; lean_object* v___x_292_; 
v___x_290_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__5___redArg(v_a_280_, v_b_281_, v_tail_285_);
if (v_isShared_288_ == 0)
{
lean_ctor_set(v___x_287_, 2, v___x_290_);
v___x_292_ = v___x_287_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v_key_283_);
lean_ctor_set(v_reuseFailAlloc_293_, 1, v_value_284_);
lean_ctor_set(v_reuseFailAlloc_293_, 2, v___x_290_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
return v___x_292_;
}
}
else
{
lean_object* v___x_295_; 
lean_dec(v_value_284_);
lean_dec(v_key_283_);
if (v_isShared_288_ == 0)
{
lean_ctor_set(v___x_287_, 1, v_b_281_);
lean_ctor_set(v___x_287_, 0, v_a_280_);
v___x_295_ = v___x_287_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v_a_280_);
lean_ctor_set(v_reuseFailAlloc_296_, 1, v_b_281_);
lean_ctor_set(v_reuseFailAlloc_296_, 2, v_tail_285_);
v___x_295_ = v_reuseFailAlloc_296_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
return v___x_295_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6_spec__8___redArg(lean_object* v_x_298_, lean_object* v_x_299_){
_start:
{
if (lean_obj_tag(v_x_299_) == 0)
{
return v_x_298_;
}
else
{
lean_object* v_key_300_; lean_object* v_value_301_; lean_object* v_tail_302_; lean_object* v___x_304_; uint8_t v_isShared_305_; uint8_t v_isSharedCheck_326_; 
v_key_300_ = lean_ctor_get(v_x_299_, 0);
v_value_301_ = lean_ctor_get(v_x_299_, 1);
v_tail_302_ = lean_ctor_get(v_x_299_, 2);
v_isSharedCheck_326_ = !lean_is_exclusive(v_x_299_);
if (v_isSharedCheck_326_ == 0)
{
v___x_304_ = v_x_299_;
v_isShared_305_ = v_isSharedCheck_326_;
goto v_resetjp_303_;
}
else
{
lean_inc(v_tail_302_);
lean_inc(v_value_301_);
lean_inc(v_key_300_);
lean_dec(v_x_299_);
v___x_304_ = lean_box(0);
v_isShared_305_ = v_isSharedCheck_326_;
goto v_resetjp_303_;
}
v_resetjp_303_:
{
lean_object* v___x_306_; uint64_t v___x_307_; uint64_t v___x_308_; uint64_t v___x_309_; uint64_t v___x_310_; uint64_t v_fold_311_; uint64_t v___x_312_; uint64_t v___x_313_; uint64_t v___x_314_; size_t v___x_315_; size_t v___x_316_; size_t v___x_317_; size_t v___x_318_; size_t v___x_319_; lean_object* v___x_320_; lean_object* v___x_322_; 
v___x_306_ = lean_array_get_size(v_x_298_);
v___x_307_ = 7ULL;
v___x_308_ = l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(v___x_307_, v_key_300_);
v___x_309_ = 32ULL;
v___x_310_ = lean_uint64_shift_right(v___x_308_, v___x_309_);
v_fold_311_ = lean_uint64_xor(v___x_308_, v___x_310_);
v___x_312_ = 16ULL;
v___x_313_ = lean_uint64_shift_right(v_fold_311_, v___x_312_);
v___x_314_ = lean_uint64_xor(v_fold_311_, v___x_313_);
v___x_315_ = lean_uint64_to_usize(v___x_314_);
v___x_316_ = lean_usize_of_nat(v___x_306_);
v___x_317_ = ((size_t)1ULL);
v___x_318_ = lean_usize_sub(v___x_316_, v___x_317_);
v___x_319_ = lean_usize_land(v___x_315_, v___x_318_);
v___x_320_ = lean_array_uget_borrowed(v_x_298_, v___x_319_);
lean_inc(v___x_320_);
if (v_isShared_305_ == 0)
{
lean_ctor_set(v___x_304_, 2, v___x_320_);
v___x_322_ = v___x_304_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v_key_300_);
lean_ctor_set(v_reuseFailAlloc_325_, 1, v_value_301_);
lean_ctor_set(v_reuseFailAlloc_325_, 2, v___x_320_);
v___x_322_ = v_reuseFailAlloc_325_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
lean_object* v___x_323_; 
v___x_323_ = lean_array_uset(v_x_298_, v___x_319_, v___x_322_);
v_x_298_ = v___x_323_;
v_x_299_ = v_tail_302_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6___redArg(lean_object* v_i_327_, lean_object* v_source_328_, lean_object* v_target_329_){
_start:
{
lean_object* v___x_330_; uint8_t v___x_331_; 
v___x_330_ = lean_array_get_size(v_source_328_);
v___x_331_ = lean_nat_dec_lt(v_i_327_, v___x_330_);
if (v___x_331_ == 0)
{
lean_dec_ref(v_source_328_);
lean_dec(v_i_327_);
return v_target_329_;
}
else
{
lean_object* v_es_332_; lean_object* v___x_333_; lean_object* v_source_334_; lean_object* v_target_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v_es_332_ = lean_array_fget(v_source_328_, v_i_327_);
v___x_333_ = lean_box(0);
v_source_334_ = lean_array_fset(v_source_328_, v_i_327_, v___x_333_);
v_target_335_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6_spec__8___redArg(v_target_329_, v_es_332_);
v___x_336_ = lean_unsigned_to_nat(1u);
v___x_337_ = lean_nat_add(v_i_327_, v___x_336_);
lean_dec(v_i_327_);
v_i_327_ = v___x_337_;
v_source_328_ = v_source_334_;
v_target_329_ = v_target_335_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4___redArg(lean_object* v_data_339_){
_start:
{
lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v_nbuckets_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_340_ = lean_array_get_size(v_data_339_);
v___x_341_ = lean_unsigned_to_nat(2u);
v_nbuckets_342_ = lean_nat_mul(v___x_340_, v___x_341_);
v___x_343_ = lean_unsigned_to_nat(0u);
v___x_344_ = lean_box(0);
v___x_345_ = lean_mk_array(v_nbuckets_342_, v___x_344_);
v___x_346_ = lean_array_propagate_mark(v_data_339_, v___x_345_);
v___x_347_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6___redArg(v___x_343_, v_data_339_, v___x_346_);
return v___x_347_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2___redArg(lean_object* v_m_348_, lean_object* v_a_349_, lean_object* v_b_350_){
_start:
{
lean_object* v_size_351_; lean_object* v_buckets_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_396_; 
v_size_351_ = lean_ctor_get(v_m_348_, 0);
v_buckets_352_ = lean_ctor_get(v_m_348_, 1);
v_isSharedCheck_396_ = !lean_is_exclusive(v_m_348_);
if (v_isSharedCheck_396_ == 0)
{
v___x_354_ = v_m_348_;
v_isShared_355_ = v_isSharedCheck_396_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_buckets_352_);
lean_inc(v_size_351_);
lean_dec(v_m_348_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_396_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
lean_object* v___x_356_; uint64_t v___x_357_; uint64_t v___x_358_; uint64_t v___x_359_; uint64_t v___x_360_; uint64_t v_fold_361_; uint64_t v___x_362_; uint64_t v___x_363_; uint64_t v___x_364_; size_t v___x_365_; size_t v___x_366_; size_t v___x_367_; size_t v___x_368_; size_t v___x_369_; lean_object* v_bkt_370_; uint8_t v___x_371_; 
v___x_356_ = lean_array_get_size(v_buckets_352_);
v___x_357_ = 7ULL;
v___x_358_ = l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(v___x_357_, v_a_349_);
v___x_359_ = 32ULL;
v___x_360_ = lean_uint64_shift_right(v___x_358_, v___x_359_);
v_fold_361_ = lean_uint64_xor(v___x_358_, v___x_360_);
v___x_362_ = 16ULL;
v___x_363_ = lean_uint64_shift_right(v_fold_361_, v___x_362_);
v___x_364_ = lean_uint64_xor(v_fold_361_, v___x_363_);
v___x_365_ = lean_uint64_to_usize(v___x_364_);
v___x_366_ = lean_usize_of_nat(v___x_356_);
v___x_367_ = ((size_t)1ULL);
v___x_368_ = lean_usize_sub(v___x_366_, v___x_367_);
v___x_369_ = lean_usize_land(v___x_365_, v___x_368_);
v_bkt_370_ = lean_array_uget_borrowed(v_buckets_352_, v___x_369_);
v___x_371_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3___redArg(v_a_349_, v_bkt_370_);
if (v___x_371_ == 0)
{
lean_object* v___x_372_; lean_object* v_size_x27_373_; lean_object* v___x_374_; lean_object* v_buckets_x27_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; uint8_t v___x_381_; 
v___x_372_ = lean_unsigned_to_nat(1u);
v_size_x27_373_ = lean_nat_add(v_size_351_, v___x_372_);
lean_dec(v_size_351_);
lean_inc(v_bkt_370_);
v___x_374_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_374_, 0, v_a_349_);
lean_ctor_set(v___x_374_, 1, v_b_350_);
lean_ctor_set(v___x_374_, 2, v_bkt_370_);
v_buckets_x27_375_ = lean_array_uset(v_buckets_352_, v___x_369_, v___x_374_);
v___x_376_ = lean_unsigned_to_nat(4u);
v___x_377_ = lean_nat_mul(v_size_x27_373_, v___x_376_);
v___x_378_ = lean_unsigned_to_nat(3u);
v___x_379_ = lean_nat_div(v___x_377_, v___x_378_);
lean_dec(v___x_377_);
v___x_380_ = lean_array_get_size(v_buckets_x27_375_);
v___x_381_ = lean_nat_dec_le(v___x_379_, v___x_380_);
lean_dec(v___x_379_);
if (v___x_381_ == 0)
{
lean_object* v_val_382_; lean_object* v___x_384_; 
v_val_382_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4___redArg(v_buckets_x27_375_);
if (v_isShared_355_ == 0)
{
lean_ctor_set(v___x_354_, 1, v_val_382_);
lean_ctor_set(v___x_354_, 0, v_size_x27_373_);
v___x_384_ = v___x_354_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_385_; 
v_reuseFailAlloc_385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_385_, 0, v_size_x27_373_);
lean_ctor_set(v_reuseFailAlloc_385_, 1, v_val_382_);
v___x_384_ = v_reuseFailAlloc_385_;
goto v_reusejp_383_;
}
v_reusejp_383_:
{
return v___x_384_;
}
}
else
{
lean_object* v___x_387_; 
if (v_isShared_355_ == 0)
{
lean_ctor_set(v___x_354_, 1, v_buckets_x27_375_);
lean_ctor_set(v___x_354_, 0, v_size_x27_373_);
v___x_387_ = v___x_354_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v_size_x27_373_);
lean_ctor_set(v_reuseFailAlloc_388_, 1, v_buckets_x27_375_);
v___x_387_ = v_reuseFailAlloc_388_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
return v___x_387_;
}
}
}
else
{
lean_object* v___x_389_; lean_object* v_buckets_x27_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_394_; 
lean_inc(v_bkt_370_);
v___x_389_ = lean_box(0);
v_buckets_x27_390_ = lean_array_uset(v_buckets_352_, v___x_369_, v___x_389_);
v___x_391_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__5___redArg(v_a_349_, v_b_350_, v_bkt_370_);
v___x_392_ = lean_array_uset(v_buckets_x27_390_, v___x_369_, v___x_391_);
if (v_isShared_355_ == 0)
{
lean_ctor_set(v___x_354_, 1, v___x_392_);
v___x_394_ = v___x_354_;
goto v_reusejp_393_;
}
else
{
lean_object* v_reuseFailAlloc_395_; 
v_reuseFailAlloc_395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_395_, 0, v_size_351_);
lean_ctor_set(v_reuseFailAlloc_395_, 1, v___x_392_);
v___x_394_ = v_reuseFailAlloc_395_;
goto v_reusejp_393_;
}
v_reusejp_393_:
{
return v___x_394_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1___redArg(lean_object* v_a_397_, lean_object* v_x_398_){
_start:
{
if (lean_obj_tag(v_x_398_) == 0)
{
lean_object* v___x_399_; 
v___x_399_ = lean_box(0);
return v___x_399_;
}
else
{
lean_object* v_key_400_; lean_object* v_value_401_; lean_object* v_tail_402_; uint8_t v___x_403_; 
v_key_400_ = lean_ctor_get(v_x_398_, 0);
v_value_401_ = lean_ctor_get(v_x_398_, 1);
v_tail_402_ = lean_ctor_get(v_x_398_, 2);
v___x_403_ = l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2(v_key_400_, v_a_397_);
if (v___x_403_ == 0)
{
v_x_398_ = v_tail_402_;
goto _start;
}
else
{
lean_object* v___x_405_; 
lean_inc(v_value_401_);
v___x_405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_405_, 0, v_value_401_);
return v___x_405_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1___redArg___boxed(lean_object* v_a_406_, lean_object* v_x_407_){
_start:
{
lean_object* v_res_408_; 
v_res_408_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1___redArg(v_a_406_, v_x_407_);
lean_dec(v_x_407_);
lean_dec(v_a_406_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1___redArg(lean_object* v_m_409_, lean_object* v_a_410_){
_start:
{
lean_object* v_buckets_411_; lean_object* v___x_412_; uint64_t v___x_413_; uint64_t v___x_414_; uint64_t v___x_415_; uint64_t v___x_416_; uint64_t v_fold_417_; uint64_t v___x_418_; uint64_t v___x_419_; uint64_t v___x_420_; size_t v___x_421_; size_t v___x_422_; size_t v___x_423_; size_t v___x_424_; size_t v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; 
v_buckets_411_ = lean_ctor_get(v_m_409_, 1);
v___x_412_ = lean_array_get_size(v_buckets_411_);
v___x_413_ = 7ULL;
v___x_414_ = l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(v___x_413_, v_a_410_);
v___x_415_ = 32ULL;
v___x_416_ = lean_uint64_shift_right(v___x_414_, v___x_415_);
v_fold_417_ = lean_uint64_xor(v___x_414_, v___x_416_);
v___x_418_ = 16ULL;
v___x_419_ = lean_uint64_shift_right(v_fold_417_, v___x_418_);
v___x_420_ = lean_uint64_xor(v_fold_417_, v___x_419_);
v___x_421_ = lean_uint64_to_usize(v___x_420_);
v___x_422_ = lean_usize_of_nat(v___x_412_);
v___x_423_ = ((size_t)1ULL);
v___x_424_ = lean_usize_sub(v___x_422_, v___x_423_);
v___x_425_ = lean_usize_land(v___x_421_, v___x_424_);
v___x_426_ = lean_array_uget_borrowed(v_buckets_411_, v___x_425_);
v___x_427_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1___redArg(v_a_410_, v___x_426_);
return v___x_427_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1___redArg___boxed(lean_object* v_m_428_, lean_object* v_a_429_){
_start:
{
lean_object* v_res_430_; 
v_res_430_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1___redArg(v_m_428_, v_a_429_);
lean_dec(v_a_429_);
lean_dec_ref(v_m_428_);
return v_res_430_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_decoder(lean_object* v_e_431_, lean_object* v_paths_432_){
_start:
{
lean_object* v_tables_433_; lean_object* v_defs_434_; lean_object* v_out_435_; lean_object* v_names_436_; lean_object* v_values_437_; lean_object* v_decoders_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_467_; 
v_tables_433_ = lean_ctor_get(v_e_431_, 0);
lean_inc_ref(v_tables_433_);
v_defs_434_ = lean_ctor_get(v_e_431_, 1);
v_out_435_ = lean_ctor_get(v_e_431_, 2);
v_names_436_ = lean_ctor_get(v_tables_433_, 0);
v_values_437_ = lean_ctor_get(v_tables_433_, 1);
v_decoders_438_ = lean_ctor_get(v_tables_433_, 2);
v_isSharedCheck_467_ = !lean_is_exclusive(v_tables_433_);
if (v_isSharedCheck_467_ == 0)
{
v___x_440_ = v_tables_433_;
v_isShared_441_ = v_isSharedCheck_467_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_decoders_438_);
lean_inc(v_values_437_);
lean_inc(v_names_436_);
lean_dec(v_tables_433_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_467_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v___x_442_; 
v___x_442_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1___redArg(v_decoders_438_, v_paths_432_);
if (lean_obj_tag(v___x_442_) == 0)
{
lean_object* v___x_444_; uint8_t v_isShared_445_; uint8_t v_isSharedCheck_461_; 
lean_inc_ref(v_out_435_);
lean_inc_ref(v_defs_434_);
v_isSharedCheck_461_ = !lean_is_exclusive(v_e_431_);
if (v_isSharedCheck_461_ == 0)
{
lean_object* v_unused_462_; lean_object* v_unused_463_; lean_object* v_unused_464_; 
v_unused_462_ = lean_ctor_get(v_e_431_, 2);
lean_dec(v_unused_462_);
v_unused_463_ = lean_ctor_get(v_e_431_, 1);
lean_dec(v_unused_463_);
v_unused_464_ = lean_ctor_get(v_e_431_, 0);
lean_dec(v_unused_464_);
v___x_444_ = v_e_431_;
v_isShared_445_ = v_isSharedCheck_461_;
goto v_resetjp_443_;
}
else
{
lean_dec(v_e_431_);
v___x_444_ = lean_box(0);
v_isShared_445_ = v_isSharedCheck_461_;
goto v_resetjp_443_;
}
v_resetjp_443_:
{
lean_object* v_size_446_; lean_object* v___x_447_; lean_object* v_t_449_; 
v_size_446_ = lean_ctor_get(v_decoders_438_, 0);
lean_inc_n(v_size_446_, 2);
lean_inc(v_paths_432_);
v___x_447_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2___redArg(v_decoders_438_, v_paths_432_, v_size_446_);
if (v_isShared_441_ == 0)
{
lean_ctor_set(v___x_440_, 2, v___x_447_);
v_t_449_ = v___x_440_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v_names_436_);
lean_ctor_set(v_reuseFailAlloc_460_, 1, v_values_437_);
lean_ctor_set(v_reuseFailAlloc_460_, 2, v___x_447_);
v_t_449_ = v_reuseFailAlloc_460_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
uint8_t v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v_d_454_; lean_object* v_d_455_; lean_object* v___x_457_; 
v___x_450_ = 7;
v___x_451_ = lean_byte_array_push(v_defs_434_, v___x_450_);
lean_inc(v_size_446_);
v___x_452_ = l_Lasm_UI_Encode_pushVar(v___x_451_, v_size_446_);
v___x_453_ = l_List_lengthTR___redArg(v_paths_432_);
v_d_454_ = l_Lasm_UI_Encode_pushVar(v___x_452_, v___x_453_);
v_d_455_ = l_List_foldl___at___00Lasm_UI_Encode_Enc_decoder_spec__3(v_d_454_, v_paths_432_);
lean_dec(v_paths_432_);
if (v_isShared_445_ == 0)
{
lean_ctor_set(v___x_444_, 1, v_d_455_);
lean_ctor_set(v___x_444_, 0, v_t_449_);
v___x_457_ = v___x_444_;
goto v_reusejp_456_;
}
else
{
lean_object* v_reuseFailAlloc_459_; 
v_reuseFailAlloc_459_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_459_, 0, v_t_449_);
lean_ctor_set(v_reuseFailAlloc_459_, 1, v_d_455_);
lean_ctor_set(v_reuseFailAlloc_459_, 2, v_out_435_);
v___x_457_ = v_reuseFailAlloc_459_;
goto v_reusejp_456_;
}
v_reusejp_456_:
{
lean_object* v___x_458_; 
v___x_458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_458_, 0, v___x_457_);
lean_ctor_set(v___x_458_, 1, v_size_446_);
return v___x_458_;
}
}
}
}
else
{
lean_object* v_val_465_; lean_object* v___x_466_; 
lean_del_object(v___x_440_);
lean_dec_ref(v_decoders_438_);
lean_dec_ref(v_values_437_);
lean_dec_ref(v_names_436_);
lean_dec(v_paths_432_);
v_val_465_ = lean_ctor_get(v___x_442_, 0);
lean_inc(v_val_465_);
lean_dec_ref_known(v___x_442_, 1);
v___x_466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_466_, 0, v_e_431_);
lean_ctor_set(v___x_466_, 1, v_val_465_);
return v___x_466_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1(lean_object* v_00_u03b2_468_, lean_object* v_m_469_, lean_object* v_a_470_){
_start:
{
lean_object* v___x_471_; 
v___x_471_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1___redArg(v_m_469_, v_a_470_);
return v___x_471_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1___boxed(lean_object* v_00_u03b2_472_, lean_object* v_m_473_, lean_object* v_a_474_){
_start:
{
lean_object* v_res_475_; 
v_res_475_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1(v_00_u03b2_472_, v_m_473_, v_a_474_);
lean_dec(v_a_474_);
lean_dec_ref(v_m_473_);
return v_res_475_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2(lean_object* v_00_u03b2_476_, lean_object* v_m_477_, lean_object* v_a_478_, lean_object* v_b_479_){
_start:
{
lean_object* v___x_480_; 
v___x_480_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2___redArg(v_m_477_, v_a_478_, v_b_479_);
return v___x_480_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1(lean_object* v_00_u03b2_481_, lean_object* v_a_482_, lean_object* v_x_483_){
_start:
{
lean_object* v___x_484_; 
v___x_484_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1___redArg(v_a_482_, v_x_483_);
return v___x_484_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1___boxed(lean_object* v_00_u03b2_485_, lean_object* v_a_486_, lean_object* v_x_487_){
_start:
{
lean_object* v_res_488_; 
v_res_488_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1(v_00_u03b2_485_, v_a_486_, v_x_487_);
lean_dec(v_x_487_);
lean_dec(v_a_486_);
return v_res_488_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3(lean_object* v_00_u03b2_489_, lean_object* v_a_490_, lean_object* v_x_491_){
_start:
{
uint8_t v___x_492_; 
v___x_492_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3___redArg(v_a_490_, v_x_491_);
return v___x_492_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3___boxed(lean_object* v_00_u03b2_493_, lean_object* v_a_494_, lean_object* v_x_495_){
_start:
{
uint8_t v_res_496_; lean_object* v_r_497_; 
v_res_496_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3(v_00_u03b2_493_, v_a_494_, v_x_495_);
lean_dec(v_x_495_);
lean_dec(v_a_494_);
v_r_497_ = lean_box(v_res_496_);
return v_r_497_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4(lean_object* v_00_u03b2_498_, lean_object* v_data_499_){
_start:
{
lean_object* v___x_500_; 
v___x_500_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4___redArg(v_data_499_);
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__5(lean_object* v_00_u03b2_501_, lean_object* v_a_502_, lean_object* v_b_503_, lean_object* v_x_504_){
_start:
{
lean_object* v___x_505_; 
v___x_505_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__5___redArg(v_a_502_, v_b_503_, v_x_504_);
return v___x_505_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6(lean_object* v_00_u03b2_506_, lean_object* v_i_507_, lean_object* v_source_508_, lean_object* v_target_509_){
_start:
{
lean_object* v___x_510_; 
v___x_510_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6___redArg(v_i_507_, v_source_508_, v_target_509_);
return v___x_510_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6_spec__8(lean_object* v_00_u03b2_511_, lean_object* v_x_512_, lean_object* v_x_513_){
_start:
{
lean_object* v___x_514_; 
v___x_514_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6_spec__8___redArg(v_x_512_, v_x_513_);
return v___x_514_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_setAttr(lean_object* v_e_515_, lean_object* v_k_516_, lean_object* v_v_517_){
_start:
{
switch(lean_obj_tag(v_k_516_))
{
case 0:
{
if (lean_obj_tag(v_v_517_) == 0)
{
lean_object* v_name_518_; lean_object* v_s_519_; lean_object* v_tables_520_; lean_object* v_defs_521_; lean_object* v_out_522_; lean_object* v___x_524_; uint8_t v_isShared_525_; uint8_t v_isSharedCheck_533_; 
v_name_518_ = lean_ctor_get(v_k_516_, 0);
lean_inc_ref(v_name_518_);
lean_dec_ref_known(v_k_516_, 1);
v_s_519_ = lean_ctor_get(v_v_517_, 0);
lean_inc_ref(v_s_519_);
lean_dec_ref_known(v_v_517_, 1);
v_tables_520_ = lean_ctor_get(v_e_515_, 0);
v_defs_521_ = lean_ctor_get(v_e_515_, 1);
v_out_522_ = lean_ctor_get(v_e_515_, 2);
v_isSharedCheck_533_ = !lean_is_exclusive(v_e_515_);
if (v_isSharedCheck_533_ == 0)
{
v___x_524_ = v_e_515_;
v_isShared_525_ = v_isSharedCheck_533_;
goto v_resetjp_523_;
}
else
{
lean_inc(v_out_522_);
lean_inc(v_defs_521_);
lean_inc(v_tables_520_);
lean_dec(v_e_515_);
v___x_524_ = lean_box(0);
v_isShared_525_ = v_isSharedCheck_533_;
goto v_resetjp_523_;
}
v_resetjp_523_:
{
uint8_t v___x_526_; lean_object* v___x_527_; lean_object* v___x_529_; 
v___x_526_ = 0;
v___x_527_ = lean_byte_array_push(v_out_522_, v___x_526_);
if (v_isShared_525_ == 0)
{
lean_ctor_set(v___x_524_, 2, v___x_527_);
v___x_529_ = v___x_524_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v_tables_520_);
lean_ctor_set(v_reuseFailAlloc_532_, 1, v_defs_521_);
lean_ctor_set(v_reuseFailAlloc_532_, 2, v___x_527_);
v___x_529_ = v_reuseFailAlloc_532_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_530_ = l_Lasm_UI_Encode_Enc_name(v___x_529_, v_name_518_);
v___x_531_ = l_Lasm_UI_Encode_Enc_value(v___x_530_, v_s_519_);
return v___x_531_;
}
}
}
else
{
lean_object* v_name_534_; lean_object* v_tables_535_; lean_object* v_defs_536_; lean_object* v_out_537_; lean_object* v___x_539_; uint8_t v_isShared_540_; uint8_t v_isSharedCheck_547_; 
lean_dec_ref(v_v_517_);
v_name_534_ = lean_ctor_get(v_k_516_, 0);
lean_inc_ref(v_name_534_);
lean_dec_ref_known(v_k_516_, 1);
v_tables_535_ = lean_ctor_get(v_e_515_, 0);
v_defs_536_ = lean_ctor_get(v_e_515_, 1);
v_out_537_ = lean_ctor_get(v_e_515_, 2);
v_isSharedCheck_547_ = !lean_is_exclusive(v_e_515_);
if (v_isSharedCheck_547_ == 0)
{
v___x_539_ = v_e_515_;
v_isShared_540_ = v_isSharedCheck_547_;
goto v_resetjp_538_;
}
else
{
lean_inc(v_out_537_);
lean_inc(v_defs_536_);
lean_inc(v_tables_535_);
lean_dec(v_e_515_);
v___x_539_ = lean_box(0);
v_isShared_540_ = v_isSharedCheck_547_;
goto v_resetjp_538_;
}
v_resetjp_538_:
{
uint8_t v___x_541_; lean_object* v___x_542_; lean_object* v___x_544_; 
v___x_541_ = 8;
v___x_542_ = lean_byte_array_push(v_out_537_, v___x_541_);
if (v_isShared_540_ == 0)
{
lean_ctor_set(v___x_539_, 2, v___x_542_);
v___x_544_ = v___x_539_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v_tables_535_);
lean_ctor_set(v_reuseFailAlloc_546_, 1, v_defs_536_);
lean_ctor_set(v_reuseFailAlloc_546_, 2, v___x_542_);
v___x_544_ = v_reuseFailAlloc_546_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
lean_object* v___x_545_; 
v___x_545_ = l_Lasm_UI_Encode_Enc_name(v___x_544_, v_name_534_);
return v___x_545_;
}
}
}
}
case 1:
{
if (lean_obj_tag(v_v_517_) == 1)
{
lean_object* v_v_548_; 
v_v_548_ = lean_ctor_get(v_v_517_, 0);
lean_inc_ref(v_v_548_);
lean_dec_ref_known(v_v_517_, 1);
if (lean_obj_tag(v_v_548_) == 0)
{
lean_object* v_name_549_; lean_object* v_s_550_; lean_object* v_tables_551_; lean_object* v_defs_552_; lean_object* v_out_553_; lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_564_; 
v_name_549_ = lean_ctor_get(v_k_516_, 0);
lean_inc_ref(v_name_549_);
lean_dec_ref_known(v_k_516_, 1);
v_s_550_ = lean_ctor_get(v_v_548_, 0);
lean_inc_ref(v_s_550_);
lean_dec_ref_known(v_v_548_, 1);
v_tables_551_ = lean_ctor_get(v_e_515_, 0);
v_defs_552_ = lean_ctor_get(v_e_515_, 1);
v_out_553_ = lean_ctor_get(v_e_515_, 2);
v_isSharedCheck_564_ = !lean_is_exclusive(v_e_515_);
if (v_isSharedCheck_564_ == 0)
{
v___x_555_ = v_e_515_;
v_isShared_556_ = v_isSharedCheck_564_;
goto v_resetjp_554_;
}
else
{
lean_inc(v_out_553_);
lean_inc(v_defs_552_);
lean_inc(v_tables_551_);
lean_dec(v_e_515_);
v___x_555_ = lean_box(0);
v_isShared_556_ = v_isSharedCheck_564_;
goto v_resetjp_554_;
}
v_resetjp_554_:
{
uint8_t v___x_557_; lean_object* v___x_558_; lean_object* v___x_560_; 
v___x_557_ = 1;
v___x_558_ = lean_byte_array_push(v_out_553_, v___x_557_);
if (v_isShared_556_ == 0)
{
lean_ctor_set(v___x_555_, 2, v___x_558_);
v___x_560_ = v___x_555_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_tables_551_);
lean_ctor_set(v_reuseFailAlloc_563_, 1, v_defs_552_);
lean_ctor_set(v_reuseFailAlloc_563_, 2, v___x_558_);
v___x_560_ = v_reuseFailAlloc_563_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
lean_object* v___x_561_; lean_object* v___x_562_; 
v___x_561_ = l_Lasm_UI_Encode_Enc_name(v___x_560_, v_name_549_);
v___x_562_ = l_Lasm_UI_Encode_Enc_value(v___x_561_, v_s_550_);
return v___x_562_;
}
}
}
else
{
uint8_t v_b_565_; 
v_b_565_ = lean_ctor_get_uint8(v_v_548_, 0);
lean_dec_ref_known(v_v_548_, 0);
if (v_b_565_ == 0)
{
lean_object* v_name_566_; lean_object* v_tables_567_; lean_object* v_defs_568_; lean_object* v_out_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_579_; 
v_name_566_ = lean_ctor_get(v_k_516_, 0);
lean_inc_ref(v_name_566_);
lean_dec_ref_known(v_k_516_, 1);
v_tables_567_ = lean_ctor_get(v_e_515_, 0);
v_defs_568_ = lean_ctor_get(v_e_515_, 1);
v_out_569_ = lean_ctor_get(v_e_515_, 2);
v_isSharedCheck_579_ = !lean_is_exclusive(v_e_515_);
if (v_isSharedCheck_579_ == 0)
{
v___x_571_ = v_e_515_;
v_isShared_572_ = v_isSharedCheck_579_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_out_569_);
lean_inc(v_defs_568_);
lean_inc(v_tables_567_);
lean_dec(v_e_515_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_579_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
uint8_t v___x_573_; lean_object* v___x_574_; lean_object* v___x_576_; 
v___x_573_ = 2;
v___x_574_ = lean_byte_array_push(v_out_569_, v___x_573_);
if (v_isShared_572_ == 0)
{
lean_ctor_set(v___x_571_, 2, v___x_574_);
v___x_576_ = v___x_571_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v_tables_567_);
lean_ctor_set(v_reuseFailAlloc_578_, 1, v_defs_568_);
lean_ctor_set(v_reuseFailAlloc_578_, 2, v___x_574_);
v___x_576_ = v_reuseFailAlloc_578_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
lean_object* v___x_577_; 
v___x_577_ = l_Lasm_UI_Encode_Enc_name(v___x_576_, v_name_566_);
return v___x_577_;
}
}
}
else
{
lean_object* v_name_580_; lean_object* v_tables_581_; lean_object* v_defs_582_; lean_object* v_out_583_; lean_object* v___x_585_; uint8_t v_isShared_586_; uint8_t v_isSharedCheck_593_; 
v_name_580_ = lean_ctor_get(v_k_516_, 0);
lean_inc_ref(v_name_580_);
lean_dec_ref_known(v_k_516_, 1);
v_tables_581_ = lean_ctor_get(v_e_515_, 0);
v_defs_582_ = lean_ctor_get(v_e_515_, 1);
v_out_583_ = lean_ctor_get(v_e_515_, 2);
v_isSharedCheck_593_ = !lean_is_exclusive(v_e_515_);
if (v_isSharedCheck_593_ == 0)
{
v___x_585_ = v_e_515_;
v_isShared_586_ = v_isSharedCheck_593_;
goto v_resetjp_584_;
}
else
{
lean_inc(v_out_583_);
lean_inc(v_defs_582_);
lean_inc(v_tables_581_);
lean_dec(v_e_515_);
v___x_585_ = lean_box(0);
v_isShared_586_ = v_isSharedCheck_593_;
goto v_resetjp_584_;
}
v_resetjp_584_:
{
uint8_t v___x_587_; lean_object* v___x_588_; lean_object* v___x_590_; 
v___x_587_ = 3;
v___x_588_ = lean_byte_array_push(v_out_583_, v___x_587_);
if (v_isShared_586_ == 0)
{
lean_ctor_set(v___x_585_, 2, v___x_588_);
v___x_590_ = v___x_585_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v_tables_581_);
lean_ctor_set(v_reuseFailAlloc_592_, 1, v_defs_582_);
lean_ctor_set(v_reuseFailAlloc_592_, 2, v___x_588_);
v___x_590_ = v_reuseFailAlloc_592_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
lean_object* v___x_591_; 
v___x_591_ = l_Lasm_UI_Encode_Enc_name(v___x_590_, v_name_580_);
return v___x_591_;
}
}
}
}
}
else
{
lean_object* v_name_594_; lean_object* v_tables_595_; lean_object* v_defs_596_; lean_object* v_out_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_607_; 
lean_dec_ref(v_v_517_);
v_name_594_ = lean_ctor_get(v_k_516_, 0);
lean_inc_ref(v_name_594_);
lean_dec_ref_known(v_k_516_, 1);
v_tables_595_ = lean_ctor_get(v_e_515_, 0);
v_defs_596_ = lean_ctor_get(v_e_515_, 1);
v_out_597_ = lean_ctor_get(v_e_515_, 2);
v_isSharedCheck_607_ = !lean_is_exclusive(v_e_515_);
if (v_isSharedCheck_607_ == 0)
{
v___x_599_ = v_e_515_;
v_isShared_600_ = v_isSharedCheck_607_;
goto v_resetjp_598_;
}
else
{
lean_inc(v_out_597_);
lean_inc(v_defs_596_);
lean_inc(v_tables_595_);
lean_dec(v_e_515_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_607_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
uint8_t v___x_601_; lean_object* v___x_602_; lean_object* v___x_604_; 
v___x_601_ = 9;
v___x_602_ = lean_byte_array_push(v_out_597_, v___x_601_);
if (v_isShared_600_ == 0)
{
lean_ctor_set(v___x_599_, 2, v___x_602_);
v___x_604_ = v___x_599_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v_tables_595_);
lean_ctor_set(v_reuseFailAlloc_606_, 1, v_defs_596_);
lean_ctor_set(v_reuseFailAlloc_606_, 2, v___x_602_);
v___x_604_ = v_reuseFailAlloc_606_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
lean_object* v___x_605_; 
v___x_605_ = l_Lasm_UI_Encode_Enc_name(v___x_604_, v_name_594_);
return v___x_605_;
}
}
}
}
case 2:
{
if (lean_obj_tag(v_v_517_) == 0)
{
lean_object* v_name_608_; lean_object* v_s_609_; lean_object* v_tables_610_; lean_object* v_defs_611_; lean_object* v_out_612_; lean_object* v___x_614_; uint8_t v_isShared_615_; uint8_t v_isSharedCheck_623_; 
v_name_608_ = lean_ctor_get(v_k_516_, 0);
lean_inc_ref(v_name_608_);
lean_dec_ref_known(v_k_516_, 1);
v_s_609_ = lean_ctor_get(v_v_517_, 0);
lean_inc_ref(v_s_609_);
lean_dec_ref_known(v_v_517_, 1);
v_tables_610_ = lean_ctor_get(v_e_515_, 0);
v_defs_611_ = lean_ctor_get(v_e_515_, 1);
v_out_612_ = lean_ctor_get(v_e_515_, 2);
v_isSharedCheck_623_ = !lean_is_exclusive(v_e_515_);
if (v_isSharedCheck_623_ == 0)
{
v___x_614_ = v_e_515_;
v_isShared_615_ = v_isSharedCheck_623_;
goto v_resetjp_613_;
}
else
{
lean_inc(v_out_612_);
lean_inc(v_defs_611_);
lean_inc(v_tables_610_);
lean_dec(v_e_515_);
v___x_614_ = lean_box(0);
v_isShared_615_ = v_isSharedCheck_623_;
goto v_resetjp_613_;
}
v_resetjp_613_:
{
uint8_t v___x_616_; lean_object* v___x_617_; lean_object* v___x_619_; 
v___x_616_ = 4;
v___x_617_ = lean_byte_array_push(v_out_612_, v___x_616_);
if (v_isShared_615_ == 0)
{
lean_ctor_set(v___x_614_, 2, v___x_617_);
v___x_619_ = v___x_614_;
goto v_reusejp_618_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v_tables_610_);
lean_ctor_set(v_reuseFailAlloc_622_, 1, v_defs_611_);
lean_ctor_set(v_reuseFailAlloc_622_, 2, v___x_617_);
v___x_619_ = v_reuseFailAlloc_622_;
goto v_reusejp_618_;
}
v_reusejp_618_:
{
lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_620_ = l_Lasm_UI_Encode_Enc_name(v___x_619_, v_name_608_);
v___x_621_ = l_Lasm_UI_Encode_Enc_value(v___x_620_, v_s_609_);
return v___x_621_;
}
}
}
else
{
lean_object* v_name_624_; lean_object* v_tables_625_; lean_object* v_defs_626_; lean_object* v_out_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_637_; 
lean_dec_ref(v_v_517_);
v_name_624_ = lean_ctor_get(v_k_516_, 0);
lean_inc_ref(v_name_624_);
lean_dec_ref_known(v_k_516_, 1);
v_tables_625_ = lean_ctor_get(v_e_515_, 0);
v_defs_626_ = lean_ctor_get(v_e_515_, 1);
v_out_627_ = lean_ctor_get(v_e_515_, 2);
v_isSharedCheck_637_ = !lean_is_exclusive(v_e_515_);
if (v_isSharedCheck_637_ == 0)
{
v___x_629_ = v_e_515_;
v_isShared_630_ = v_isSharedCheck_637_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_out_627_);
lean_inc(v_defs_626_);
lean_inc(v_tables_625_);
lean_dec(v_e_515_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_637_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
uint8_t v___x_631_; lean_object* v___x_632_; lean_object* v___x_634_; 
v___x_631_ = 10;
v___x_632_ = lean_byte_array_push(v_out_627_, v___x_631_);
if (v_isShared_630_ == 0)
{
lean_ctor_set(v___x_629_, 2, v___x_632_);
v___x_634_ = v___x_629_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_636_; 
v_reuseFailAlloc_636_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_636_, 0, v_tables_625_);
lean_ctor_set(v_reuseFailAlloc_636_, 1, v_defs_626_);
lean_ctor_set(v_reuseFailAlloc_636_, 2, v___x_632_);
v___x_634_ = v_reuseFailAlloc_636_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
lean_object* v___x_635_; 
v___x_635_ = l_Lasm_UI_Encode_Enc_name(v___x_634_, v_name_624_);
return v___x_635_;
}
}
}
}
default: 
{
if (lean_obj_tag(v_v_517_) == 2)
{
lean_object* v_l_638_; lean_object* v_event_639_; lean_object* v_paths_640_; lean_object* v___x_641_; lean_object* v_fst_642_; lean_object* v_snd_643_; lean_object* v_tables_644_; lean_object* v_defs_645_; lean_object* v_out_646_; lean_object* v___x_648_; uint8_t v_isShared_649_; uint8_t v_isSharedCheck_667_; 
v_l_638_ = lean_ctor_get(v_v_517_, 0);
lean_inc_ref(v_l_638_);
lean_dec_ref_known(v_v_517_, 1);
v_event_639_ = lean_ctor_get(v_k_516_, 0);
lean_inc_ref(v_event_639_);
lean_dec_ref_known(v_k_516_, 1);
v_paths_640_ = lean_ctor_get(v_l_638_, 1);
lean_inc(v_paths_640_);
lean_dec_ref(v_l_638_);
v___x_641_ = l_Lasm_UI_Encode_Enc_decoder(v_e_515_, v_paths_640_);
v_fst_642_ = lean_ctor_get(v___x_641_, 0);
lean_inc(v_fst_642_);
v_snd_643_ = lean_ctor_get(v___x_641_, 1);
lean_inc(v_snd_643_);
lean_dec_ref(v___x_641_);
v_tables_644_ = lean_ctor_get(v_fst_642_, 0);
v_defs_645_ = lean_ctor_get(v_fst_642_, 1);
v_out_646_ = lean_ctor_get(v_fst_642_, 2);
v_isSharedCheck_667_ = !lean_is_exclusive(v_fst_642_);
if (v_isSharedCheck_667_ == 0)
{
v___x_648_ = v_fst_642_;
v_isShared_649_ = v_isSharedCheck_667_;
goto v_resetjp_647_;
}
else
{
lean_inc(v_out_646_);
lean_inc(v_defs_645_);
lean_inc(v_tables_644_);
lean_dec(v_fst_642_);
v___x_648_ = lean_box(0);
v_isShared_649_ = v_isSharedCheck_667_;
goto v_resetjp_647_;
}
v_resetjp_647_:
{
uint8_t v___x_650_; lean_object* v___x_651_; lean_object* v___x_653_; 
v___x_650_ = 5;
v___x_651_ = lean_byte_array_push(v_out_646_, v___x_650_);
if (v_isShared_649_ == 0)
{
lean_ctor_set(v___x_648_, 2, v___x_651_);
v___x_653_ = v___x_648_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v_tables_644_);
lean_ctor_set(v_reuseFailAlloc_666_, 1, v_defs_645_);
lean_ctor_set(v_reuseFailAlloc_666_, 2, v___x_651_);
v___x_653_ = v_reuseFailAlloc_666_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
lean_object* v___x_654_; lean_object* v_tables_655_; lean_object* v_defs_656_; lean_object* v_out_657_; lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_665_; 
v___x_654_ = l_Lasm_UI_Encode_Enc_name(v___x_653_, v_event_639_);
v_tables_655_ = lean_ctor_get(v___x_654_, 0);
v_defs_656_ = lean_ctor_get(v___x_654_, 1);
v_out_657_ = lean_ctor_get(v___x_654_, 2);
v_isSharedCheck_665_ = !lean_is_exclusive(v___x_654_);
if (v_isSharedCheck_665_ == 0)
{
v___x_659_ = v___x_654_;
v_isShared_660_ = v_isSharedCheck_665_;
goto v_resetjp_658_;
}
else
{
lean_inc(v_out_657_);
lean_inc(v_defs_656_);
lean_inc(v_tables_655_);
lean_dec(v___x_654_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_665_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
lean_object* v___x_661_; lean_object* v___x_663_; 
v___x_661_ = l_Lasm_UI_Encode_pushVar(v_out_657_, v_snd_643_);
if (v_isShared_660_ == 0)
{
lean_ctor_set(v___x_659_, 2, v___x_661_);
v___x_663_ = v___x_659_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_664_; 
v_reuseFailAlloc_664_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_664_, 0, v_tables_655_);
lean_ctor_set(v_reuseFailAlloc_664_, 1, v_defs_656_);
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
lean_dec_ref(v_v_517_);
v_event_668_ = lean_ctor_get(v_k_516_, 0);
lean_inc_ref(v_event_668_);
lean_dec_ref_known(v_k_516_, 1);
v_tables_669_ = lean_ctor_get(v_e_515_, 0);
v_defs_670_ = lean_ctor_get(v_e_515_, 1);
v_out_671_ = lean_ctor_get(v_e_515_, 2);
v_isSharedCheck_681_ = !lean_is_exclusive(v_e_515_);
if (v_isSharedCheck_681_ == 0)
{
v___x_673_ = v_e_515_;
v_isShared_674_ = v_isSharedCheck_681_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_out_671_);
lean_inc(v_defs_670_);
lean_inc(v_tables_669_);
lean_dec(v_e_515_);
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
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_attr___redArg(lean_object* v_e_682_, lean_object* v_x_683_){
_start:
{
switch(lean_obj_tag(v_x_683_))
{
case 0:
{
lean_object* v_name_684_; lean_object* v_value_685_; lean_object* v_tables_686_; lean_object* v_defs_687_; lean_object* v_out_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_699_; 
v_name_684_ = lean_ctor_get(v_x_683_, 0);
lean_inc_ref(v_name_684_);
v_value_685_ = lean_ctor_get(v_x_683_, 1);
lean_inc_ref(v_value_685_);
lean_dec_ref_known(v_x_683_, 2);
v_tables_686_ = lean_ctor_get(v_e_682_, 0);
v_defs_687_ = lean_ctor_get(v_e_682_, 1);
v_out_688_ = lean_ctor_get(v_e_682_, 2);
v_isSharedCheck_699_ = !lean_is_exclusive(v_e_682_);
if (v_isSharedCheck_699_ == 0)
{
v___x_690_ = v_e_682_;
v_isShared_691_ = v_isSharedCheck_699_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_out_688_);
lean_inc(v_defs_687_);
lean_inc(v_tables_686_);
lean_dec(v_e_682_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_699_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
uint8_t v___x_692_; lean_object* v___x_693_; lean_object* v___x_695_; 
v___x_692_ = 0;
v___x_693_ = lean_byte_array_push(v_out_688_, v___x_692_);
if (v_isShared_691_ == 0)
{
lean_ctor_set(v___x_690_, 2, v___x_693_);
v___x_695_ = v___x_690_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v_tables_686_);
lean_ctor_set(v_reuseFailAlloc_698_, 1, v_defs_687_);
lean_ctor_set(v_reuseFailAlloc_698_, 2, v___x_693_);
v___x_695_ = v_reuseFailAlloc_698_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
lean_object* v___x_696_; lean_object* v___x_697_; 
v___x_696_ = l_Lasm_UI_Encode_Enc_name(v___x_695_, v_name_684_);
v___x_697_ = l_Lasm_UI_Encode_Enc_value(v___x_696_, v_value_685_);
return v___x_697_;
}
}
}
case 1:
{
lean_object* v_value_700_; 
v_value_700_ = lean_ctor_get(v_x_683_, 1);
if (lean_obj_tag(v_value_700_) == 0)
{
lean_object* v_name_701_; lean_object* v_s_702_; lean_object* v_tables_703_; lean_object* v_defs_704_; lean_object* v_out_705_; lean_object* v___x_707_; uint8_t v_isShared_708_; uint8_t v_isSharedCheck_716_; 
lean_inc_ref(v_value_700_);
v_name_701_ = lean_ctor_get(v_x_683_, 0);
lean_inc_ref(v_name_701_);
lean_dec_ref_known(v_x_683_, 2);
v_s_702_ = lean_ctor_get(v_value_700_, 0);
lean_inc_ref(v_s_702_);
lean_dec_ref_known(v_value_700_, 1);
v_tables_703_ = lean_ctor_get(v_e_682_, 0);
v_defs_704_ = lean_ctor_get(v_e_682_, 1);
v_out_705_ = lean_ctor_get(v_e_682_, 2);
v_isSharedCheck_716_ = !lean_is_exclusive(v_e_682_);
if (v_isSharedCheck_716_ == 0)
{
v___x_707_ = v_e_682_;
v_isShared_708_ = v_isSharedCheck_716_;
goto v_resetjp_706_;
}
else
{
lean_inc(v_out_705_);
lean_inc(v_defs_704_);
lean_inc(v_tables_703_);
lean_dec(v_e_682_);
v___x_707_ = lean_box(0);
v_isShared_708_ = v_isSharedCheck_716_;
goto v_resetjp_706_;
}
v_resetjp_706_:
{
uint8_t v___x_709_; lean_object* v___x_710_; lean_object* v___x_712_; 
v___x_709_ = 1;
v___x_710_ = lean_byte_array_push(v_out_705_, v___x_709_);
if (v_isShared_708_ == 0)
{
lean_ctor_set(v___x_707_, 2, v___x_710_);
v___x_712_ = v___x_707_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_715_; 
v_reuseFailAlloc_715_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_715_, 0, v_tables_703_);
lean_ctor_set(v_reuseFailAlloc_715_, 1, v_defs_704_);
lean_ctor_set(v_reuseFailAlloc_715_, 2, v___x_710_);
v___x_712_ = v_reuseFailAlloc_715_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
lean_object* v___x_713_; lean_object* v___x_714_; 
v___x_713_ = l_Lasm_UI_Encode_Enc_name(v___x_712_, v_name_701_);
v___x_714_ = l_Lasm_UI_Encode_Enc_value(v___x_713_, v_s_702_);
return v___x_714_;
}
}
}
else
{
uint8_t v_b_717_; 
v_b_717_ = lean_ctor_get_uint8(v_value_700_, 0);
if (v_b_717_ == 0)
{
lean_object* v_name_718_; lean_object* v_tables_719_; lean_object* v_defs_720_; lean_object* v_out_721_; lean_object* v___x_723_; uint8_t v_isShared_724_; uint8_t v_isSharedCheck_731_; 
v_name_718_ = lean_ctor_get(v_x_683_, 0);
lean_inc_ref(v_name_718_);
lean_dec_ref_known(v_x_683_, 2);
v_tables_719_ = lean_ctor_get(v_e_682_, 0);
v_defs_720_ = lean_ctor_get(v_e_682_, 1);
v_out_721_ = lean_ctor_get(v_e_682_, 2);
v_isSharedCheck_731_ = !lean_is_exclusive(v_e_682_);
if (v_isSharedCheck_731_ == 0)
{
v___x_723_ = v_e_682_;
v_isShared_724_ = v_isSharedCheck_731_;
goto v_resetjp_722_;
}
else
{
lean_inc(v_out_721_);
lean_inc(v_defs_720_);
lean_inc(v_tables_719_);
lean_dec(v_e_682_);
v___x_723_ = lean_box(0);
v_isShared_724_ = v_isSharedCheck_731_;
goto v_resetjp_722_;
}
v_resetjp_722_:
{
uint8_t v___x_725_; lean_object* v___x_726_; lean_object* v___x_728_; 
v___x_725_ = 2;
v___x_726_ = lean_byte_array_push(v_out_721_, v___x_725_);
if (v_isShared_724_ == 0)
{
lean_ctor_set(v___x_723_, 2, v___x_726_);
v___x_728_ = v___x_723_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v_tables_719_);
lean_ctor_set(v_reuseFailAlloc_730_, 1, v_defs_720_);
lean_ctor_set(v_reuseFailAlloc_730_, 2, v___x_726_);
v___x_728_ = v_reuseFailAlloc_730_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
lean_object* v___x_729_; 
v___x_729_ = l_Lasm_UI_Encode_Enc_name(v___x_728_, v_name_718_);
return v___x_729_;
}
}
}
else
{
lean_object* v_name_732_; lean_object* v_tables_733_; lean_object* v_defs_734_; lean_object* v_out_735_; lean_object* v___x_737_; uint8_t v_isShared_738_; uint8_t v_isSharedCheck_745_; 
v_name_732_ = lean_ctor_get(v_x_683_, 0);
lean_inc_ref(v_name_732_);
lean_dec_ref_known(v_x_683_, 2);
v_tables_733_ = lean_ctor_get(v_e_682_, 0);
v_defs_734_ = lean_ctor_get(v_e_682_, 1);
v_out_735_ = lean_ctor_get(v_e_682_, 2);
v_isSharedCheck_745_ = !lean_is_exclusive(v_e_682_);
if (v_isSharedCheck_745_ == 0)
{
v___x_737_ = v_e_682_;
v_isShared_738_ = v_isSharedCheck_745_;
goto v_resetjp_736_;
}
else
{
lean_inc(v_out_735_);
lean_inc(v_defs_734_);
lean_inc(v_tables_733_);
lean_dec(v_e_682_);
v___x_737_ = lean_box(0);
v_isShared_738_ = v_isSharedCheck_745_;
goto v_resetjp_736_;
}
v_resetjp_736_:
{
uint8_t v___x_739_; lean_object* v___x_740_; lean_object* v___x_742_; 
v___x_739_ = 3;
v___x_740_ = lean_byte_array_push(v_out_735_, v___x_739_);
if (v_isShared_738_ == 0)
{
lean_ctor_set(v___x_737_, 2, v___x_740_);
v___x_742_ = v___x_737_;
goto v_reusejp_741_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v_tables_733_);
lean_ctor_set(v_reuseFailAlloc_744_, 1, v_defs_734_);
lean_ctor_set(v_reuseFailAlloc_744_, 2, v___x_740_);
v___x_742_ = v_reuseFailAlloc_744_;
goto v_reusejp_741_;
}
v_reusejp_741_:
{
lean_object* v___x_743_; 
v___x_743_ = l_Lasm_UI_Encode_Enc_name(v___x_742_, v_name_732_);
return v___x_743_;
}
}
}
}
}
case 2:
{
lean_object* v_name_746_; lean_object* v_value_747_; lean_object* v_tables_748_; lean_object* v_defs_749_; lean_object* v_out_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_761_; 
v_name_746_ = lean_ctor_get(v_x_683_, 0);
lean_inc_ref(v_name_746_);
v_value_747_ = lean_ctor_get(v_x_683_, 1);
lean_inc_ref(v_value_747_);
lean_dec_ref_known(v_x_683_, 2);
v_tables_748_ = lean_ctor_get(v_e_682_, 0);
v_defs_749_ = lean_ctor_get(v_e_682_, 1);
v_out_750_ = lean_ctor_get(v_e_682_, 2);
v_isSharedCheck_761_ = !lean_is_exclusive(v_e_682_);
if (v_isSharedCheck_761_ == 0)
{
v___x_752_ = v_e_682_;
v_isShared_753_ = v_isSharedCheck_761_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_out_750_);
lean_inc(v_defs_749_);
lean_inc(v_tables_748_);
lean_dec(v_e_682_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_761_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
uint8_t v___x_754_; lean_object* v___x_755_; lean_object* v___x_757_; 
v___x_754_ = 4;
v___x_755_ = lean_byte_array_push(v_out_750_, v___x_754_);
if (v_isShared_753_ == 0)
{
lean_ctor_set(v___x_752_, 2, v___x_755_);
v___x_757_ = v___x_752_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v_tables_748_);
lean_ctor_set(v_reuseFailAlloc_760_, 1, v_defs_749_);
lean_ctor_set(v_reuseFailAlloc_760_, 2, v___x_755_);
v___x_757_ = v_reuseFailAlloc_760_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
lean_object* v___x_758_; lean_object* v___x_759_; 
v___x_758_ = l_Lasm_UI_Encode_Enc_name(v___x_757_, v_name_746_);
v___x_759_ = l_Lasm_UI_Encode_Enc_value(v___x_758_, v_value_747_);
return v___x_759_;
}
}
}
default: 
{
lean_object* v_listener_762_; lean_object* v_event_763_; lean_object* v_paths_764_; lean_object* v___x_765_; lean_object* v_fst_766_; lean_object* v_snd_767_; lean_object* v_tables_768_; lean_object* v_defs_769_; lean_object* v_out_770_; lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_791_; 
v_listener_762_ = lean_ctor_get(v_x_683_, 0);
lean_inc_ref(v_listener_762_);
lean_dec_ref_known(v_x_683_, 2);
v_event_763_ = lean_ctor_get(v_listener_762_, 0);
lean_inc_ref(v_event_763_);
v_paths_764_ = lean_ctor_get(v_listener_762_, 1);
lean_inc(v_paths_764_);
lean_dec_ref(v_listener_762_);
v___x_765_ = l_Lasm_UI_Encode_Enc_decoder(v_e_682_, v_paths_764_);
v_fst_766_ = lean_ctor_get(v___x_765_, 0);
lean_inc(v_fst_766_);
v_snd_767_ = lean_ctor_get(v___x_765_, 1);
lean_inc(v_snd_767_);
lean_dec_ref(v___x_765_);
v_tables_768_ = lean_ctor_get(v_fst_766_, 0);
v_defs_769_ = lean_ctor_get(v_fst_766_, 1);
v_out_770_ = lean_ctor_get(v_fst_766_, 2);
v_isSharedCheck_791_ = !lean_is_exclusive(v_fst_766_);
if (v_isSharedCheck_791_ == 0)
{
v___x_772_ = v_fst_766_;
v_isShared_773_ = v_isSharedCheck_791_;
goto v_resetjp_771_;
}
else
{
lean_inc(v_out_770_);
lean_inc(v_defs_769_);
lean_inc(v_tables_768_);
lean_dec(v_fst_766_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_791_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
uint8_t v___x_774_; lean_object* v___x_775_; lean_object* v___x_777_; 
v___x_774_ = 5;
v___x_775_ = lean_byte_array_push(v_out_770_, v___x_774_);
if (v_isShared_773_ == 0)
{
lean_ctor_set(v___x_772_, 2, v___x_775_);
v___x_777_ = v___x_772_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_tables_768_);
lean_ctor_set(v_reuseFailAlloc_790_, 1, v_defs_769_);
lean_ctor_set(v_reuseFailAlloc_790_, 2, v___x_775_);
v___x_777_ = v_reuseFailAlloc_790_;
goto v_reusejp_776_;
}
v_reusejp_776_:
{
lean_object* v___x_778_; lean_object* v_tables_779_; lean_object* v_defs_780_; lean_object* v_out_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_789_; 
v___x_778_ = l_Lasm_UI_Encode_Enc_name(v___x_777_, v_event_763_);
v_tables_779_ = lean_ctor_get(v___x_778_, 0);
v_defs_780_ = lean_ctor_get(v___x_778_, 1);
v_out_781_ = lean_ctor_get(v___x_778_, 2);
v_isSharedCheck_789_ = !lean_is_exclusive(v___x_778_);
if (v_isSharedCheck_789_ == 0)
{
v___x_783_ = v___x_778_;
v_isShared_784_ = v_isSharedCheck_789_;
goto v_resetjp_782_;
}
else
{
lean_inc(v_out_781_);
lean_inc(v_defs_780_);
lean_inc(v_tables_779_);
lean_dec(v___x_778_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_789_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
lean_object* v___x_785_; lean_object* v___x_787_; 
v___x_785_ = l_Lasm_UI_Encode_pushVar(v_out_781_, v_snd_767_);
if (v_isShared_784_ == 0)
{
lean_ctor_set(v___x_783_, 2, v___x_785_);
v___x_787_ = v___x_783_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v_tables_779_);
lean_ctor_set(v_reuseFailAlloc_788_, 1, v_defs_780_);
lean_ctor_set(v_reuseFailAlloc_788_, 2, v___x_785_);
v___x_787_ = v_reuseFailAlloc_788_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
return v___x_787_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_attr(lean_object* v_Msg_792_, lean_object* v_e_793_, lean_object* v_x_794_){
_start:
{
lean_object* v___x_795_; 
v___x_795_ = l_Lasm_UI_Encode_Enc_attr___redArg(v_e_793_, v_x_794_);
return v___x_795_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_attrOp(lean_object* v_e_796_, lean_object* v_x_797_){
_start:
{
if (lean_obj_tag(v_x_797_) == 0)
{
lean_object* v_k_798_; lean_object* v_v_799_; lean_object* v___x_800_; 
v_k_798_ = lean_ctor_get(v_x_797_, 0);
lean_inc_ref(v_k_798_);
v_v_799_ = lean_ctor_get(v_x_797_, 1);
lean_inc_ref(v_v_799_);
lean_dec_ref_known(v_x_797_, 2);
v___x_800_ = l_Lasm_UI_Encode_Enc_setAttr(v_e_796_, v_k_798_, v_v_799_);
return v___x_800_;
}
else
{
lean_object* v_k_801_; 
v_k_801_ = lean_ctor_get(v_x_797_, 0);
lean_inc_ref(v_k_801_);
lean_dec_ref_known(v_x_797_, 1);
switch(lean_obj_tag(v_k_801_))
{
case 0:
{
lean_object* v_name_802_; lean_object* v_tables_803_; lean_object* v_defs_804_; lean_object* v_out_805_; lean_object* v___x_807_; uint8_t v_isShared_808_; uint8_t v_isSharedCheck_815_; 
v_name_802_ = lean_ctor_get(v_k_801_, 0);
lean_inc_ref(v_name_802_);
lean_dec_ref_known(v_k_801_, 1);
v_tables_803_ = lean_ctor_get(v_e_796_, 0);
v_defs_804_ = lean_ctor_get(v_e_796_, 1);
v_out_805_ = lean_ctor_get(v_e_796_, 2);
v_isSharedCheck_815_ = !lean_is_exclusive(v_e_796_);
if (v_isSharedCheck_815_ == 0)
{
v___x_807_ = v_e_796_;
v_isShared_808_ = v_isSharedCheck_815_;
goto v_resetjp_806_;
}
else
{
lean_inc(v_out_805_);
lean_inc(v_defs_804_);
lean_inc(v_tables_803_);
lean_dec(v_e_796_);
v___x_807_ = lean_box(0);
v_isShared_808_ = v_isSharedCheck_815_;
goto v_resetjp_806_;
}
v_resetjp_806_:
{
uint8_t v___x_809_; lean_object* v___x_810_; lean_object* v___x_812_; 
v___x_809_ = 8;
v___x_810_ = lean_byte_array_push(v_out_805_, v___x_809_);
if (v_isShared_808_ == 0)
{
lean_ctor_set(v___x_807_, 2, v___x_810_);
v___x_812_ = v___x_807_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v_tables_803_);
lean_ctor_set(v_reuseFailAlloc_814_, 1, v_defs_804_);
lean_ctor_set(v_reuseFailAlloc_814_, 2, v___x_810_);
v___x_812_ = v_reuseFailAlloc_814_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
lean_object* v___x_813_; 
v___x_813_ = l_Lasm_UI_Encode_Enc_name(v___x_812_, v_name_802_);
return v___x_813_;
}
}
}
case 1:
{
lean_object* v_name_816_; lean_object* v_tables_817_; lean_object* v_defs_818_; lean_object* v_out_819_; lean_object* v___x_821_; uint8_t v_isShared_822_; uint8_t v_isSharedCheck_829_; 
v_name_816_ = lean_ctor_get(v_k_801_, 0);
lean_inc_ref(v_name_816_);
lean_dec_ref_known(v_k_801_, 1);
v_tables_817_ = lean_ctor_get(v_e_796_, 0);
v_defs_818_ = lean_ctor_get(v_e_796_, 1);
v_out_819_ = lean_ctor_get(v_e_796_, 2);
v_isSharedCheck_829_ = !lean_is_exclusive(v_e_796_);
if (v_isSharedCheck_829_ == 0)
{
v___x_821_ = v_e_796_;
v_isShared_822_ = v_isSharedCheck_829_;
goto v_resetjp_820_;
}
else
{
lean_inc(v_out_819_);
lean_inc(v_defs_818_);
lean_inc(v_tables_817_);
lean_dec(v_e_796_);
v___x_821_ = lean_box(0);
v_isShared_822_ = v_isSharedCheck_829_;
goto v_resetjp_820_;
}
v_resetjp_820_:
{
uint8_t v___x_823_; lean_object* v___x_824_; lean_object* v___x_826_; 
v___x_823_ = 9;
v___x_824_ = lean_byte_array_push(v_out_819_, v___x_823_);
if (v_isShared_822_ == 0)
{
lean_ctor_set(v___x_821_, 2, v___x_824_);
v___x_826_ = v___x_821_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_828_; 
v_reuseFailAlloc_828_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_828_, 0, v_tables_817_);
lean_ctor_set(v_reuseFailAlloc_828_, 1, v_defs_818_);
lean_ctor_set(v_reuseFailAlloc_828_, 2, v___x_824_);
v___x_826_ = v_reuseFailAlloc_828_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
lean_object* v___x_827_; 
v___x_827_ = l_Lasm_UI_Encode_Enc_name(v___x_826_, v_name_816_);
return v___x_827_;
}
}
}
case 2:
{
lean_object* v_name_830_; lean_object* v_tables_831_; lean_object* v_defs_832_; lean_object* v_out_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_843_; 
v_name_830_ = lean_ctor_get(v_k_801_, 0);
lean_inc_ref(v_name_830_);
lean_dec_ref_known(v_k_801_, 1);
v_tables_831_ = lean_ctor_get(v_e_796_, 0);
v_defs_832_ = lean_ctor_get(v_e_796_, 1);
v_out_833_ = lean_ctor_get(v_e_796_, 2);
v_isSharedCheck_843_ = !lean_is_exclusive(v_e_796_);
if (v_isSharedCheck_843_ == 0)
{
v___x_835_ = v_e_796_;
v_isShared_836_ = v_isSharedCheck_843_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_out_833_);
lean_inc(v_defs_832_);
lean_inc(v_tables_831_);
lean_dec(v_e_796_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_843_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
uint8_t v___x_837_; lean_object* v___x_838_; lean_object* v___x_840_; 
v___x_837_ = 10;
v___x_838_ = lean_byte_array_push(v_out_833_, v___x_837_);
if (v_isShared_836_ == 0)
{
lean_ctor_set(v___x_835_, 2, v___x_838_);
v___x_840_ = v___x_835_;
goto v_reusejp_839_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v_tables_831_);
lean_ctor_set(v_reuseFailAlloc_842_, 1, v_defs_832_);
lean_ctor_set(v_reuseFailAlloc_842_, 2, v___x_838_);
v___x_840_ = v_reuseFailAlloc_842_;
goto v_reusejp_839_;
}
v_reusejp_839_:
{
lean_object* v___x_841_; 
v___x_841_ = l_Lasm_UI_Encode_Enc_name(v___x_840_, v_name_830_);
return v___x_841_;
}
}
}
default: 
{
lean_object* v_event_844_; lean_object* v_tables_845_; lean_object* v_defs_846_; lean_object* v_out_847_; lean_object* v___x_849_; uint8_t v_isShared_850_; uint8_t v_isSharedCheck_857_; 
v_event_844_ = lean_ctor_get(v_k_801_, 0);
lean_inc_ref(v_event_844_);
lean_dec_ref_known(v_k_801_, 1);
v_tables_845_ = lean_ctor_get(v_e_796_, 0);
v_defs_846_ = lean_ctor_get(v_e_796_, 1);
v_out_847_ = lean_ctor_get(v_e_796_, 2);
v_isSharedCheck_857_ = !lean_is_exclusive(v_e_796_);
if (v_isSharedCheck_857_ == 0)
{
v___x_849_ = v_e_796_;
v_isShared_850_ = v_isSharedCheck_857_;
goto v_resetjp_848_;
}
else
{
lean_inc(v_out_847_);
lean_inc(v_defs_846_);
lean_inc(v_tables_845_);
lean_dec(v_e_796_);
v___x_849_ = lean_box(0);
v_isShared_850_ = v_isSharedCheck_857_;
goto v_resetjp_848_;
}
v_resetjp_848_:
{
uint8_t v___x_851_; lean_object* v___x_852_; lean_object* v___x_854_; 
v___x_851_ = 11;
v___x_852_ = lean_byte_array_push(v_out_847_, v___x_851_);
if (v_isShared_850_ == 0)
{
lean_ctor_set(v___x_849_, 2, v___x_852_);
v___x_854_ = v___x_849_;
goto v_reusejp_853_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v_tables_845_);
lean_ctor_set(v_reuseFailAlloc_856_, 1, v_defs_846_);
lean_ctor_set(v_reuseFailAlloc_856_, 2, v___x_852_);
v___x_854_ = v_reuseFailAlloc_856_;
goto v_reusejp_853_;
}
v_reusejp_853_:
{
lean_object* v___x_855_; 
v___x_855_ = l_Lasm_UI_Encode_Enc_name(v___x_854_, v_event_844_);
return v___x_855_;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_Encode_Enc_nsByte(uint8_t v_x_858_){
_start:
{
switch(v_x_858_)
{
case 0:
{
uint8_t v___x_859_; 
v___x_859_ = 1;
return v___x_859_;
}
case 1:
{
uint8_t v___x_860_; 
v___x_860_ = 2;
return v___x_860_;
}
default: 
{
uint8_t v___x_861_; 
v___x_861_ = 3;
return v___x_861_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_nsByte___boxed(lean_object* v_x_862_){
_start:
{
uint8_t v_x_40__boxed_863_; uint8_t v_res_864_; lean_object* v_r_865_; 
v_x_40__boxed_863_ = lean_unbox(v_x_862_);
v_res_864_ = l_Lasm_UI_Encode_Enc_nsByte(v_x_40__boxed_863_);
v_r_865_ = lean_box(v_res_864_);
return v_r_865_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_node_spec__0___redArg(lean_object* v_x_866_, lean_object* v_x_867_){
_start:
{
if (lean_obj_tag(v_x_867_) == 0)
{
return v_x_866_;
}
else
{
lean_object* v_head_868_; lean_object* v_tail_869_; lean_object* v___x_870_; 
v_head_868_ = lean_ctor_get(v_x_867_, 0);
lean_inc(v_head_868_);
v_tail_869_ = lean_ctor_get(v_x_867_, 1);
lean_inc(v_tail_869_);
lean_dec_ref_known(v_x_867_, 2);
v___x_870_ = l_Lasm_UI_Encode_Enc_attr___redArg(v_x_866_, v_head_868_);
v_x_866_ = v___x_870_;
v_x_867_ = v_tail_869_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_node___redArg(lean_object* v_e_872_, lean_object* v_x_873_){
_start:
{
if (lean_obj_tag(v_x_873_) == 0)
{
lean_object* v_id_874_; lean_object* v_s_875_; lean_object* v_tables_876_; lean_object* v_defs_877_; lean_object* v_out_878_; lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_896_; 
v_id_874_ = lean_ctor_get(v_x_873_, 0);
lean_inc(v_id_874_);
v_s_875_ = lean_ctor_get(v_x_873_, 1);
lean_inc_ref(v_s_875_);
lean_dec_ref_known(v_x_873_, 2);
v_tables_876_ = lean_ctor_get(v_e_872_, 0);
v_defs_877_ = lean_ctor_get(v_e_872_, 1);
v_out_878_ = lean_ctor_get(v_e_872_, 2);
v_isSharedCheck_896_ = !lean_is_exclusive(v_e_872_);
if (v_isSharedCheck_896_ == 0)
{
v___x_880_ = v_e_872_;
v_isShared_881_ = v_isSharedCheck_896_;
goto v_resetjp_879_;
}
else
{
lean_inc(v_out_878_);
lean_inc(v_defs_877_);
lean_inc(v_tables_876_);
lean_dec(v_e_872_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_896_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
uint8_t v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; uint8_t v___x_891_; lean_object* v___x_892_; lean_object* v___x_894_; 
v___x_882_ = 0;
v___x_883_ = lean_byte_array_push(v_out_878_, v___x_882_);
v___x_884_ = l_Lasm_UI_Encode_pushVar(v___x_883_, v_id_874_);
v___x_885_ = lean_string_utf8_byte_size(v_s_875_);
v___x_886_ = l_Lasm_UI_Encode_pushVar(v___x_884_, v___x_885_);
v___x_887_ = lean_string_to_utf8(v_s_875_);
lean_dec_ref(v_s_875_);
v___x_888_ = lean_unsigned_to_nat(0u);
v___x_889_ = lean_byte_array_size(v___x_886_);
v___x_890_ = lean_byte_array_size(v___x_887_);
v___x_891_ = 0;
v___x_892_ = lean_byte_array_copy_slice(v___x_887_, v___x_888_, v___x_886_, v___x_889_, v___x_890_, v___x_891_);
lean_dec_ref(v___x_887_);
if (v_isShared_881_ == 0)
{
lean_ctor_set(v___x_880_, 2, v___x_892_);
v___x_894_ = v___x_880_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v_tables_876_);
lean_ctor_set(v_reuseFailAlloc_895_, 1, v_defs_877_);
lean_ctor_set(v_reuseFailAlloc_895_, 2, v___x_892_);
v___x_894_ = v_reuseFailAlloc_895_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
return v___x_894_;
}
}
}
else
{
lean_object* v_id_897_; uint8_t v_ns_898_; lean_object* v_tag_899_; lean_object* v_attrs_900_; lean_object* v_children_901_; lean_object* v_tables_902_; lean_object* v_defs_903_; lean_object* v_out_904_; lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_941_; 
v_id_897_ = lean_ctor_get(v_x_873_, 0);
lean_inc(v_id_897_);
v_ns_898_ = lean_ctor_get_uint8(v_x_873_, sizeof(void*)*5);
v_tag_899_ = lean_ctor_get(v_x_873_, 1);
lean_inc_ref(v_tag_899_);
v_attrs_900_ = lean_ctor_get(v_x_873_, 3);
lean_inc(v_attrs_900_);
v_children_901_ = lean_ctor_get(v_x_873_, 4);
lean_inc(v_children_901_);
lean_dec_ref_known(v_x_873_, 5);
v_tables_902_ = lean_ctor_get(v_e_872_, 0);
v_defs_903_ = lean_ctor_get(v_e_872_, 1);
v_out_904_ = lean_ctor_get(v_e_872_, 2);
v_isSharedCheck_941_ = !lean_is_exclusive(v_e_872_);
if (v_isSharedCheck_941_ == 0)
{
v___x_906_ = v_e_872_;
v_isShared_907_ = v_isSharedCheck_941_;
goto v_resetjp_905_;
}
else
{
lean_inc(v_out_904_);
lean_inc(v_defs_903_);
lean_inc(v_tables_902_);
lean_dec(v_e_872_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_941_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
uint8_t v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_912_; 
v___x_908_ = l_Lasm_UI_Encode_Enc_nsByte(v_ns_898_);
v___x_909_ = lean_byte_array_push(v_out_904_, v___x_908_);
v___x_910_ = l_Lasm_UI_Encode_pushVar(v___x_909_, v_id_897_);
if (v_isShared_907_ == 0)
{
lean_ctor_set(v___x_906_, 2, v___x_910_);
v___x_912_ = v___x_906_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v_tables_902_);
lean_ctor_set(v_reuseFailAlloc_940_, 1, v_defs_903_);
lean_ctor_set(v_reuseFailAlloc_940_, 2, v___x_910_);
v___x_912_ = v_reuseFailAlloc_940_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
lean_object* v_e_913_; lean_object* v_tables_914_; lean_object* v_defs_915_; lean_object* v_out_916_; lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_939_; 
v_e_913_ = l_Lasm_UI_Encode_Enc_name(v___x_912_, v_tag_899_);
v_tables_914_ = lean_ctor_get(v_e_913_, 0);
v_defs_915_ = lean_ctor_get(v_e_913_, 1);
v_out_916_ = lean_ctor_get(v_e_913_, 2);
v_isSharedCheck_939_ = !lean_is_exclusive(v_e_913_);
if (v_isSharedCheck_939_ == 0)
{
v___x_918_ = v_e_913_;
v_isShared_919_ = v_isSharedCheck_939_;
goto v_resetjp_917_;
}
else
{
lean_inc(v_out_916_);
lean_inc(v_defs_915_);
lean_inc(v_tables_914_);
lean_dec(v_e_913_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_939_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_923_; 
v___x_920_ = l_List_lengthTR___redArg(v_attrs_900_);
v___x_921_ = l_Lasm_UI_Encode_pushVar(v_out_916_, v___x_920_);
if (v_isShared_919_ == 0)
{
lean_ctor_set(v___x_918_, 2, v___x_921_);
v___x_923_ = v___x_918_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_938_; 
v_reuseFailAlloc_938_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_938_, 0, v_tables_914_);
lean_ctor_set(v_reuseFailAlloc_938_, 1, v_defs_915_);
lean_ctor_set(v_reuseFailAlloc_938_, 2, v___x_921_);
v___x_923_ = v_reuseFailAlloc_938_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
lean_object* v_e_924_; lean_object* v_tables_925_; lean_object* v_defs_926_; lean_object* v_out_927_; lean_object* v___x_929_; uint8_t v_isShared_930_; uint8_t v_isSharedCheck_937_; 
v_e_924_ = l_List_foldl___at___00Lasm_UI_Encode_Enc_node_spec__0___redArg(v___x_923_, v_attrs_900_);
v_tables_925_ = lean_ctor_get(v_e_924_, 0);
v_defs_926_ = lean_ctor_get(v_e_924_, 1);
v_out_927_ = lean_ctor_get(v_e_924_, 2);
v_isSharedCheck_937_ = !lean_is_exclusive(v_e_924_);
if (v_isSharedCheck_937_ == 0)
{
v___x_929_ = v_e_924_;
v_isShared_930_ = v_isSharedCheck_937_;
goto v_resetjp_928_;
}
else
{
lean_inc(v_out_927_);
lean_inc(v_defs_926_);
lean_inc(v_tables_925_);
lean_dec(v_e_924_);
v___x_929_ = lean_box(0);
v_isShared_930_ = v_isSharedCheck_937_;
goto v_resetjp_928_;
}
v_resetjp_928_:
{
lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_934_; 
v___x_931_ = l_List_lengthTR___redArg(v_children_901_);
v___x_932_ = l_Lasm_UI_Encode_pushVar(v_out_927_, v___x_931_);
if (v_isShared_930_ == 0)
{
lean_ctor_set(v___x_929_, 2, v___x_932_);
v___x_934_ = v___x_929_;
goto v_reusejp_933_;
}
else
{
lean_object* v_reuseFailAlloc_936_; 
v_reuseFailAlloc_936_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_936_, 0, v_tables_925_);
lean_ctor_set(v_reuseFailAlloc_936_, 1, v_defs_926_);
lean_ctor_set(v_reuseFailAlloc_936_, 2, v___x_932_);
v___x_934_ = v_reuseFailAlloc_936_;
goto v_reusejp_933_;
}
v_reusejp_933_:
{
lean_object* v___x_935_; 
v___x_935_ = l_Lasm_UI_Encode_Enc_nodes___redArg(v___x_934_, v_children_901_);
return v___x_935_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_nodes___redArg(lean_object* v_e_942_, lean_object* v_x_943_){
_start:
{
if (lean_obj_tag(v_x_943_) == 0)
{
return v_e_942_;
}
else
{
lean_object* v_head_944_; lean_object* v_tail_945_; lean_object* v___x_946_; 
v_head_944_ = lean_ctor_get(v_x_943_, 0);
lean_inc(v_head_944_);
v_tail_945_ = lean_ctor_get(v_x_943_, 1);
lean_inc(v_tail_945_);
lean_dec_ref_known(v_x_943_, 2);
v___x_946_ = l_Lasm_UI_Encode_Enc_node___redArg(v_e_942_, v_head_944_);
v_e_942_ = v___x_946_;
v_x_943_ = v_tail_945_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_nodes(lean_object* v_Msg_948_, lean_object* v_e_949_, lean_object* v_x_950_){
_start:
{
lean_object* v___x_951_; 
v___x_951_ = l_Lasm_UI_Encode_Enc_nodes___redArg(v_e_949_, v_x_950_);
return v___x_951_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_node(lean_object* v_Msg_952_, lean_object* v_e_953_, lean_object* v_x_954_){
_start:
{
lean_object* v___x_955_; 
v___x_955_ = l_Lasm_UI_Encode_Enc_node___redArg(v_e_953_, v_x_954_);
return v___x_955_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_node_spec__0(lean_object* v_Msg_956_, lean_object* v_x_957_, lean_object* v_x_958_){
_start:
{
lean_object* v___x_959_; 
v___x_959_ = l_List_foldl___at___00Lasm_UI_Encode_Enc_node_spec__0___redArg(v_x_957_, v_x_958_);
return v___x_959_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_before(lean_object* v_e_960_, lean_object* v_x_961_){
_start:
{
if (lean_obj_tag(v_x_961_) == 0)
{
lean_object* v_tables_962_; lean_object* v_defs_963_; lean_object* v_out_964_; lean_object* v___x_966_; uint8_t v_isShared_967_; uint8_t v_isSharedCheck_973_; 
v_tables_962_ = lean_ctor_get(v_e_960_, 0);
v_defs_963_ = lean_ctor_get(v_e_960_, 1);
v_out_964_ = lean_ctor_get(v_e_960_, 2);
v_isSharedCheck_973_ = !lean_is_exclusive(v_e_960_);
if (v_isSharedCheck_973_ == 0)
{
v___x_966_ = v_e_960_;
v_isShared_967_ = v_isSharedCheck_973_;
goto v_resetjp_965_;
}
else
{
lean_inc(v_out_964_);
lean_inc(v_defs_963_);
lean_inc(v_tables_962_);
lean_dec(v_e_960_);
v___x_966_ = lean_box(0);
v_isShared_967_ = v_isSharedCheck_973_;
goto v_resetjp_965_;
}
v_resetjp_965_:
{
uint8_t v___x_968_; lean_object* v___x_969_; lean_object* v___x_971_; 
v___x_968_ = 0;
v___x_969_ = lean_byte_array_push(v_out_964_, v___x_968_);
if (v_isShared_967_ == 0)
{
lean_ctor_set(v___x_966_, 2, v___x_969_);
v___x_971_ = v___x_966_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v_tables_962_);
lean_ctor_set(v_reuseFailAlloc_972_, 1, v_defs_963_);
lean_ctor_set(v_reuseFailAlloc_972_, 2, v___x_969_);
v___x_971_ = v_reuseFailAlloc_972_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
return v___x_971_;
}
}
}
else
{
lean_object* v_val_974_; lean_object* v_tables_975_; lean_object* v_defs_976_; lean_object* v_out_977_; lean_object* v___x_979_; uint8_t v_isShared_980_; uint8_t v_isSharedCheck_987_; 
v_val_974_ = lean_ctor_get(v_x_961_, 0);
v_tables_975_ = lean_ctor_get(v_e_960_, 0);
v_defs_976_ = lean_ctor_get(v_e_960_, 1);
v_out_977_ = lean_ctor_get(v_e_960_, 2);
v_isSharedCheck_987_ = !lean_is_exclusive(v_e_960_);
if (v_isSharedCheck_987_ == 0)
{
v___x_979_ = v_e_960_;
v_isShared_980_ = v_isSharedCheck_987_;
goto v_resetjp_978_;
}
else
{
lean_inc(v_out_977_);
lean_inc(v_defs_976_);
lean_inc(v_tables_975_);
lean_dec(v_e_960_);
v___x_979_ = lean_box(0);
v_isShared_980_ = v_isSharedCheck_987_;
goto v_resetjp_978_;
}
v_resetjp_978_:
{
lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_985_; 
v___x_981_ = lean_unsigned_to_nat(1u);
v___x_982_ = lean_nat_add(v_val_974_, v___x_981_);
v___x_983_ = l_Lasm_UI_Encode_pushVar(v_out_977_, v___x_982_);
if (v_isShared_980_ == 0)
{
lean_ctor_set(v___x_979_, 2, v___x_983_);
v___x_985_ = v___x_979_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_986_; 
v_reuseFailAlloc_986_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_986_, 0, v_tables_975_);
lean_ctor_set(v_reuseFailAlloc_986_, 1, v_defs_976_);
lean_ctor_set(v_reuseFailAlloc_986_, 2, v___x_983_);
v___x_985_ = v_reuseFailAlloc_986_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
return v___x_985_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_before___boxed(lean_object* v_e_988_, lean_object* v_x_989_){
_start:
{
lean_object* v_res_990_; 
v_res_990_ = l_Lasm_UI_Encode_Enc_before(v_e_988_, v_x_989_);
lean_dec(v_x_989_);
return v_res_990_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_op_spec__0(lean_object* v_x_991_, lean_object* v_x_992_){
_start:
{
if (lean_obj_tag(v_x_992_) == 0)
{
return v_x_991_;
}
else
{
lean_object* v_head_993_; lean_object* v_tail_994_; lean_object* v___x_995_; 
v_head_993_ = lean_ctor_get(v_x_992_, 0);
lean_inc(v_head_993_);
v_tail_994_ = lean_ctor_get(v_x_992_, 1);
lean_inc(v_tail_994_);
lean_dec_ref_known(v_x_992_, 2);
v___x_995_ = l_Lasm_UI_Encode_Enc_attrOp(v_x_991_, v_head_993_);
v_x_991_ = v___x_995_;
v_x_992_ = v_tail_994_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_op___redArg(lean_object* v_parent_997_, lean_object* v_e_998_, lean_object* v_x_999_){
_start:
{
switch(lean_obj_tag(v_x_999_))
{
case 0:
{
lean_object* v_node_1000_; lean_object* v_before_1001_; lean_object* v_tables_1002_; lean_object* v_defs_1003_; lean_object* v_out_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1025_; 
v_node_1000_ = lean_ctor_get(v_x_999_, 0);
lean_inc_ref(v_node_1000_);
v_before_1001_ = lean_ctor_get(v_x_999_, 1);
lean_inc(v_before_1001_);
lean_dec_ref_known(v_x_999_, 2);
v_tables_1002_ = lean_ctor_get(v_e_998_, 0);
v_defs_1003_ = lean_ctor_get(v_e_998_, 1);
v_out_1004_ = lean_ctor_get(v_e_998_, 2);
v_isSharedCheck_1025_ = !lean_is_exclusive(v_e_998_);
if (v_isSharedCheck_1025_ == 0)
{
v___x_1006_ = v_e_998_;
v_isShared_1007_ = v_isSharedCheck_1025_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_out_1004_);
lean_inc(v_defs_1003_);
lean_inc(v_tables_1002_);
lean_dec(v_e_998_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1025_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
uint8_t v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; 
v___x_1008_ = 1;
v___x_1009_ = lean_byte_array_push(v_out_1004_, v___x_1008_);
v___x_1010_ = l_Lasm_UI_Encode_pushVar(v___x_1009_, v_parent_997_);
if (lean_obj_tag(v_before_1001_) == 0)
{
uint8_t v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1014_; 
v___x_1011_ = 0;
v___x_1012_ = lean_byte_array_push(v___x_1010_, v___x_1011_);
if (v_isShared_1007_ == 0)
{
lean_ctor_set(v___x_1006_, 2, v___x_1012_);
v___x_1014_ = v___x_1006_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1016_; 
v_reuseFailAlloc_1016_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v_tables_1002_);
lean_ctor_set(v_reuseFailAlloc_1016_, 1, v_defs_1003_);
lean_ctor_set(v_reuseFailAlloc_1016_, 2, v___x_1012_);
v___x_1014_ = v_reuseFailAlloc_1016_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
lean_object* v___x_1015_; 
v___x_1015_ = l_Lasm_UI_Encode_Enc_node___redArg(v___x_1014_, v_node_1000_);
return v___x_1015_;
}
}
else
{
lean_object* v_val_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1022_; 
v_val_1017_ = lean_ctor_get(v_before_1001_, 0);
lean_inc(v_val_1017_);
lean_dec_ref_known(v_before_1001_, 1);
v___x_1018_ = lean_unsigned_to_nat(1u);
v___x_1019_ = lean_nat_add(v_val_1017_, v___x_1018_);
lean_dec(v_val_1017_);
v___x_1020_ = l_Lasm_UI_Encode_pushVar(v___x_1010_, v___x_1019_);
if (v_isShared_1007_ == 0)
{
lean_ctor_set(v___x_1006_, 2, v___x_1020_);
v___x_1022_ = v___x_1006_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v_tables_1002_);
lean_ctor_set(v_reuseFailAlloc_1024_, 1, v_defs_1003_);
lean_ctor_set(v_reuseFailAlloc_1024_, 2, v___x_1020_);
v___x_1022_ = v_reuseFailAlloc_1024_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
lean_object* v___x_1023_; 
v___x_1023_ = l_Lasm_UI_Encode_Enc_node___redArg(v___x_1022_, v_node_1000_);
return v___x_1023_;
}
}
}
}
case 1:
{
lean_object* v_id_1026_; lean_object* v_before_1027_; lean_object* v_tables_1028_; lean_object* v_defs_1029_; lean_object* v_out_1030_; lean_object* v___x_1032_; uint8_t v_isShared_1033_; uint8_t v_isSharedCheck_1050_; 
v_id_1026_ = lean_ctor_get(v_x_999_, 0);
lean_inc(v_id_1026_);
v_before_1027_ = lean_ctor_get(v_x_999_, 1);
lean_inc(v_before_1027_);
lean_dec_ref_known(v_x_999_, 2);
v_tables_1028_ = lean_ctor_get(v_e_998_, 0);
v_defs_1029_ = lean_ctor_get(v_e_998_, 1);
v_out_1030_ = lean_ctor_get(v_e_998_, 2);
v_isSharedCheck_1050_ = !lean_is_exclusive(v_e_998_);
if (v_isSharedCheck_1050_ == 0)
{
v___x_1032_ = v_e_998_;
v_isShared_1033_ = v_isSharedCheck_1050_;
goto v_resetjp_1031_;
}
else
{
lean_inc(v_out_1030_);
lean_inc(v_defs_1029_);
lean_inc(v_tables_1028_);
lean_dec(v_e_998_);
v___x_1032_ = lean_box(0);
v_isShared_1033_ = v_isSharedCheck_1050_;
goto v_resetjp_1031_;
}
v_resetjp_1031_:
{
uint8_t v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; 
v___x_1034_ = 2;
v___x_1035_ = lean_byte_array_push(v_out_1030_, v___x_1034_);
v___x_1036_ = l_Lasm_UI_Encode_pushVar(v___x_1035_, v_parent_997_);
v___x_1037_ = l_Lasm_UI_Encode_pushVar(v___x_1036_, v_id_1026_);
if (lean_obj_tag(v_before_1027_) == 0)
{
uint8_t v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1041_; 
v___x_1038_ = 0;
v___x_1039_ = lean_byte_array_push(v___x_1037_, v___x_1038_);
if (v_isShared_1033_ == 0)
{
lean_ctor_set(v___x_1032_, 2, v___x_1039_);
v___x_1041_ = v___x_1032_;
goto v_reusejp_1040_;
}
else
{
lean_object* v_reuseFailAlloc_1042_; 
v_reuseFailAlloc_1042_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1042_, 0, v_tables_1028_);
lean_ctor_set(v_reuseFailAlloc_1042_, 1, v_defs_1029_);
lean_ctor_set(v_reuseFailAlloc_1042_, 2, v___x_1039_);
v___x_1041_ = v_reuseFailAlloc_1042_;
goto v_reusejp_1040_;
}
v_reusejp_1040_:
{
return v___x_1041_;
}
}
else
{
lean_object* v_val_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1048_; 
v_val_1043_ = lean_ctor_get(v_before_1027_, 0);
lean_inc(v_val_1043_);
lean_dec_ref_known(v_before_1027_, 1);
v___x_1044_ = lean_unsigned_to_nat(1u);
v___x_1045_ = lean_nat_add(v_val_1043_, v___x_1044_);
lean_dec(v_val_1043_);
v___x_1046_ = l_Lasm_UI_Encode_pushVar(v___x_1037_, v___x_1045_);
if (v_isShared_1033_ == 0)
{
lean_ctor_set(v___x_1032_, 2, v___x_1046_);
v___x_1048_ = v___x_1032_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1049_; 
v_reuseFailAlloc_1049_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1049_, 0, v_tables_1028_);
lean_ctor_set(v_reuseFailAlloc_1049_, 1, v_defs_1029_);
lean_ctor_set(v_reuseFailAlloc_1049_, 2, v___x_1046_);
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
case 2:
{
lean_object* v_id_1051_; lean_object* v_tables_1052_; lean_object* v_defs_1053_; lean_object* v_out_1054_; lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1064_; 
lean_dec(v_parent_997_);
v_id_1051_ = lean_ctor_get(v_x_999_, 0);
lean_inc(v_id_1051_);
lean_dec_ref_known(v_x_999_, 1);
v_tables_1052_ = lean_ctor_get(v_e_998_, 0);
v_defs_1053_ = lean_ctor_get(v_e_998_, 1);
v_out_1054_ = lean_ctor_get(v_e_998_, 2);
v_isSharedCheck_1064_ = !lean_is_exclusive(v_e_998_);
if (v_isSharedCheck_1064_ == 0)
{
v___x_1056_ = v_e_998_;
v_isShared_1057_ = v_isSharedCheck_1064_;
goto v_resetjp_1055_;
}
else
{
lean_inc(v_out_1054_);
lean_inc(v_defs_1053_);
lean_inc(v_tables_1052_);
lean_dec(v_e_998_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1064_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
uint8_t v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1062_; 
v___x_1058_ = 3;
v___x_1059_ = lean_byte_array_push(v_out_1054_, v___x_1058_);
v___x_1060_ = l_Lasm_UI_Encode_pushVar(v___x_1059_, v_id_1051_);
if (v_isShared_1057_ == 0)
{
lean_ctor_set(v___x_1056_, 2, v___x_1060_);
v___x_1062_ = v___x_1056_;
goto v_reusejp_1061_;
}
else
{
lean_object* v_reuseFailAlloc_1063_; 
v_reuseFailAlloc_1063_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1063_, 0, v_tables_1052_);
lean_ctor_set(v_reuseFailAlloc_1063_, 1, v_defs_1053_);
lean_ctor_set(v_reuseFailAlloc_1063_, 2, v___x_1060_);
v___x_1062_ = v_reuseFailAlloc_1063_;
goto v_reusejp_1061_;
}
v_reusejp_1061_:
{
return v___x_1062_;
}
}
}
case 3:
{
lean_object* v_tables_1065_; lean_object* v_defs_1066_; lean_object* v_out_1067_; lean_object* v___x_1069_; uint8_t v_isShared_1070_; uint8_t v_isSharedCheck_1077_; 
v_tables_1065_ = lean_ctor_get(v_e_998_, 0);
v_defs_1066_ = lean_ctor_get(v_e_998_, 1);
v_out_1067_ = lean_ctor_get(v_e_998_, 2);
v_isSharedCheck_1077_ = !lean_is_exclusive(v_e_998_);
if (v_isSharedCheck_1077_ == 0)
{
v___x_1069_ = v_e_998_;
v_isShared_1070_ = v_isSharedCheck_1077_;
goto v_resetjp_1068_;
}
else
{
lean_inc(v_out_1067_);
lean_inc(v_defs_1066_);
lean_inc(v_tables_1065_);
lean_dec(v_e_998_);
v___x_1069_ = lean_box(0);
v_isShared_1070_ = v_isSharedCheck_1077_;
goto v_resetjp_1068_;
}
v_resetjp_1068_:
{
uint8_t v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1075_; 
v___x_1071_ = 4;
v___x_1072_ = lean_byte_array_push(v_out_1067_, v___x_1071_);
v___x_1073_ = l_Lasm_UI_Encode_pushVar(v___x_1072_, v_parent_997_);
if (v_isShared_1070_ == 0)
{
lean_ctor_set(v___x_1069_, 2, v___x_1073_);
v___x_1075_ = v___x_1069_;
goto v_reusejp_1074_;
}
else
{
lean_object* v_reuseFailAlloc_1076_; 
v_reuseFailAlloc_1076_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1076_, 0, v_tables_1065_);
lean_ctor_set(v_reuseFailAlloc_1076_, 1, v_defs_1066_);
lean_ctor_set(v_reuseFailAlloc_1076_, 2, v___x_1073_);
v___x_1075_ = v_reuseFailAlloc_1076_;
goto v_reusejp_1074_;
}
v_reusejp_1074_:
{
return v___x_1075_;
}
}
}
case 4:
{
lean_object* v_id_1078_; lean_object* v_s_1079_; lean_object* v_tables_1080_; lean_object* v_defs_1081_; lean_object* v_out_1082_; lean_object* v___x_1084_; uint8_t v_isShared_1085_; uint8_t v_isSharedCheck_1100_; 
lean_dec(v_parent_997_);
v_id_1078_ = lean_ctor_get(v_x_999_, 0);
lean_inc(v_id_1078_);
v_s_1079_ = lean_ctor_get(v_x_999_, 1);
lean_inc_ref(v_s_1079_);
lean_dec_ref_known(v_x_999_, 2);
v_tables_1080_ = lean_ctor_get(v_e_998_, 0);
v_defs_1081_ = lean_ctor_get(v_e_998_, 1);
v_out_1082_ = lean_ctor_get(v_e_998_, 2);
v_isSharedCheck_1100_ = !lean_is_exclusive(v_e_998_);
if (v_isSharedCheck_1100_ == 0)
{
v___x_1084_ = v_e_998_;
v_isShared_1085_ = v_isSharedCheck_1100_;
goto v_resetjp_1083_;
}
else
{
lean_inc(v_out_1082_);
lean_inc(v_defs_1081_);
lean_inc(v_tables_1080_);
lean_dec(v_e_998_);
v___x_1084_ = lean_box(0);
v_isShared_1085_ = v_isSharedCheck_1100_;
goto v_resetjp_1083_;
}
v_resetjp_1083_:
{
uint8_t v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; uint8_t v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1098_; 
v___x_1086_ = 5;
v___x_1087_ = lean_byte_array_push(v_out_1082_, v___x_1086_);
v___x_1088_ = l_Lasm_UI_Encode_pushVar(v___x_1087_, v_id_1078_);
v___x_1089_ = lean_string_utf8_byte_size(v_s_1079_);
v___x_1090_ = l_Lasm_UI_Encode_pushVar(v___x_1088_, v___x_1089_);
v___x_1091_ = lean_string_to_utf8(v_s_1079_);
lean_dec_ref(v_s_1079_);
v___x_1092_ = lean_unsigned_to_nat(0u);
v___x_1093_ = lean_byte_array_size(v___x_1090_);
v___x_1094_ = lean_byte_array_size(v___x_1091_);
v___x_1095_ = 0;
v___x_1096_ = lean_byte_array_copy_slice(v___x_1091_, v___x_1092_, v___x_1090_, v___x_1093_, v___x_1094_, v___x_1095_);
lean_dec_ref(v___x_1091_);
if (v_isShared_1085_ == 0)
{
lean_ctor_set(v___x_1084_, 2, v___x_1096_);
v___x_1098_ = v___x_1084_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v_tables_1080_);
lean_ctor_set(v_reuseFailAlloc_1099_, 1, v_defs_1081_);
lean_ctor_set(v_reuseFailAlloc_1099_, 2, v___x_1096_);
v___x_1098_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
return v___x_1098_;
}
}
}
case 5:
{
lean_object* v_id_1101_; lean_object* v_ops_1102_; lean_object* v_tables_1103_; lean_object* v_defs_1104_; lean_object* v_out_1105_; lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1118_; 
lean_dec(v_parent_997_);
v_id_1101_ = lean_ctor_get(v_x_999_, 0);
lean_inc(v_id_1101_);
v_ops_1102_ = lean_ctor_get(v_x_999_, 1);
lean_inc(v_ops_1102_);
lean_dec_ref_known(v_x_999_, 2);
v_tables_1103_ = lean_ctor_get(v_e_998_, 0);
v_defs_1104_ = lean_ctor_get(v_e_998_, 1);
v_out_1105_ = lean_ctor_get(v_e_998_, 2);
v_isSharedCheck_1118_ = !lean_is_exclusive(v_e_998_);
if (v_isSharedCheck_1118_ == 0)
{
v___x_1107_ = v_e_998_;
v_isShared_1108_ = v_isSharedCheck_1118_;
goto v_resetjp_1106_;
}
else
{
lean_inc(v_out_1105_);
lean_inc(v_defs_1104_);
lean_inc(v_tables_1103_);
lean_dec(v_e_998_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1118_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
uint8_t v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1115_; 
v___x_1109_ = 6;
v___x_1110_ = lean_byte_array_push(v_out_1105_, v___x_1109_);
v___x_1111_ = l_Lasm_UI_Encode_pushVar(v___x_1110_, v_id_1101_);
v___x_1112_ = l_List_lengthTR___redArg(v_ops_1102_);
v___x_1113_ = l_Lasm_UI_Encode_pushVar(v___x_1111_, v___x_1112_);
if (v_isShared_1108_ == 0)
{
lean_ctor_set(v___x_1107_, 2, v___x_1113_);
v___x_1115_ = v___x_1107_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v_tables_1103_);
lean_ctor_set(v_reuseFailAlloc_1117_, 1, v_defs_1104_);
lean_ctor_set(v_reuseFailAlloc_1117_, 2, v___x_1113_);
v___x_1115_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
lean_object* v___x_1116_; 
v___x_1116_ = l_List_foldl___at___00Lasm_UI_Encode_Enc_op_spec__0(v___x_1115_, v_ops_1102_);
return v___x_1116_;
}
}
}
default: 
{
lean_object* v_id_1119_; lean_object* v_ops_1120_; lean_object* v___x_1121_; 
lean_dec(v_parent_997_);
v_id_1119_ = lean_ctor_get(v_x_999_, 0);
lean_inc(v_id_1119_);
v_ops_1120_ = lean_ctor_get(v_x_999_, 1);
lean_inc(v_ops_1120_);
lean_dec_ref_known(v_x_999_, 2);
v___x_1121_ = l_Lasm_UI_Encode_Enc_opList___redArg(v_id_1119_, v_e_998_, v_ops_1120_);
return v___x_1121_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_opList___redArg(lean_object* v_parent_1122_, lean_object* v_e_1123_, lean_object* v_x_1124_){
_start:
{
if (lean_obj_tag(v_x_1124_) == 0)
{
lean_dec(v_parent_1122_);
return v_e_1123_;
}
else
{
lean_object* v_head_1125_; lean_object* v_tail_1126_; lean_object* v___x_1127_; 
v_head_1125_ = lean_ctor_get(v_x_1124_, 0);
lean_inc(v_head_1125_);
v_tail_1126_ = lean_ctor_get(v_x_1124_, 1);
lean_inc(v_tail_1126_);
lean_dec_ref_known(v_x_1124_, 2);
lean_inc(v_parent_1122_);
v___x_1127_ = l_Lasm_UI_Encode_Enc_op___redArg(v_parent_1122_, v_e_1123_, v_head_1125_);
v_e_1123_ = v___x_1127_;
v_x_1124_ = v_tail_1126_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_opList(lean_object* v_Msg_1129_, lean_object* v_parent_1130_, lean_object* v_e_1131_, lean_object* v_x_1132_){
_start:
{
lean_object* v___x_1133_; 
v___x_1133_ = l_Lasm_UI_Encode_Enc_opList___redArg(v_parent_1130_, v_e_1131_, v_x_1132_);
return v___x_1133_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_op(lean_object* v_Msg_1134_, lean_object* v_parent_1135_, lean_object* v_e_1136_, lean_object* v_x_1137_){
_start:
{
lean_object* v___x_1138_; 
v___x_1138_ = l_Lasm_UI_Encode_Enc_op___redArg(v_parent_1135_, v_e_1136_, v_x_1137_);
return v___x_1138_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___redArg(lean_object* v_root_1139_, lean_object* v_as_1140_, size_t v_i_1141_, size_t v_stop_1142_, lean_object* v_b_1143_){
_start:
{
uint8_t v___x_1144_; 
v___x_1144_ = lean_usize_dec_eq(v_i_1141_, v_stop_1142_);
if (v___x_1144_ == 0)
{
lean_object* v___x_1145_; lean_object* v___x_1146_; size_t v___x_1147_; size_t v___x_1148_; 
v___x_1145_ = lean_array_uget_borrowed(v_as_1140_, v_i_1141_);
lean_inc(v___x_1145_);
lean_inc(v_root_1139_);
v___x_1146_ = l_Lasm_UI_Encode_Enc_op___redArg(v_root_1139_, v_b_1143_, v___x_1145_);
v___x_1147_ = ((size_t)1ULL);
v___x_1148_ = lean_usize_add(v_i_1141_, v___x_1147_);
v_i_1141_ = v___x_1148_;
v_b_1143_ = v___x_1146_;
goto _start;
}
else
{
lean_dec(v_root_1139_);
return v_b_1143_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___redArg___boxed(lean_object* v_root_1150_, lean_object* v_as_1151_, lean_object* v_i_1152_, lean_object* v_stop_1153_, lean_object* v_b_1154_){
_start:
{
size_t v_i_boxed_1155_; size_t v_stop_boxed_1156_; lean_object* v_res_1157_; 
v_i_boxed_1155_ = lean_unbox_usize(v_i_1152_);
lean_dec(v_i_1152_);
v_stop_boxed_1156_ = lean_unbox_usize(v_stop_1153_);
lean_dec(v_stop_1153_);
v_res_1157_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___redArg(v_root_1150_, v_as_1151_, v_i_boxed_1155_, v_stop_boxed_1156_, v_b_1154_);
lean_dec_ref(v_as_1151_);
return v_res_1157_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_frame___redArg(lean_object* v_t_1158_, lean_object* v_ops_1159_, lean_object* v_root_1160_){
_start:
{
lean_object* v_tables_1162_; lean_object* v_defs_1163_; lean_object* v_out_1164_; lean_object* v___y_1172_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; uint8_t v___x_1180_; 
v___x_1176_ = l_ByteArray_empty;
lean_inc_ref(v_t_1158_);
v___x_1177_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1177_, 0, v_t_1158_);
lean_ctor_set(v___x_1177_, 1, v___x_1176_);
lean_ctor_set(v___x_1177_, 2, v___x_1176_);
v___x_1178_ = lean_unsigned_to_nat(0u);
v___x_1179_ = lean_array_get_size(v_ops_1159_);
v___x_1180_ = lean_nat_dec_lt(v___x_1178_, v___x_1179_);
if (v___x_1180_ == 0)
{
lean_dec_ref_known(v___x_1177_, 3);
lean_dec(v_root_1160_);
v_tables_1162_ = v_t_1158_;
v_defs_1163_ = v___x_1176_;
v_out_1164_ = v___x_1176_;
goto v___jp_1161_;
}
else
{
uint8_t v___x_1181_; 
v___x_1181_ = lean_nat_dec_le(v___x_1179_, v___x_1179_);
if (v___x_1181_ == 0)
{
if (v___x_1180_ == 0)
{
lean_dec_ref_known(v___x_1177_, 3);
lean_dec(v_root_1160_);
v_tables_1162_ = v_t_1158_;
v_defs_1163_ = v___x_1176_;
v_out_1164_ = v___x_1176_;
goto v___jp_1161_;
}
else
{
size_t v___x_1182_; size_t v___x_1183_; lean_object* v___x_1184_; 
lean_dec_ref(v_t_1158_);
v___x_1182_ = ((size_t)0ULL);
v___x_1183_ = lean_usize_of_nat(v___x_1179_);
v___x_1184_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___redArg(v_root_1160_, v_ops_1159_, v___x_1182_, v___x_1183_, v___x_1177_);
v___y_1172_ = v___x_1184_;
goto v___jp_1171_;
}
}
else
{
size_t v___x_1185_; size_t v___x_1186_; lean_object* v___x_1187_; 
lean_dec_ref(v_t_1158_);
v___x_1185_ = ((size_t)0ULL);
v___x_1186_ = lean_usize_of_nat(v___x_1179_);
v___x_1187_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___redArg(v_root_1160_, v_ops_1159_, v___x_1185_, v___x_1186_, v___x_1177_);
v___y_1172_ = v___x_1187_;
goto v___jp_1171_;
}
}
v___jp_1161_:
{
lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; uint8_t v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; 
v___x_1165_ = lean_unsigned_to_nat(0u);
v___x_1166_ = lean_byte_array_size(v_defs_1163_);
v___x_1167_ = lean_byte_array_size(v_out_1164_);
v___x_1168_ = 0;
v___x_1169_ = lean_byte_array_copy_slice(v_out_1164_, v___x_1165_, v_defs_1163_, v___x_1166_, v___x_1167_, v___x_1168_);
lean_dec_ref(v_out_1164_);
v___x_1170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1170_, 0, v___x_1169_);
lean_ctor_set(v___x_1170_, 1, v_tables_1162_);
return v___x_1170_;
}
v___jp_1171_:
{
lean_object* v_tables_1173_; lean_object* v_defs_1174_; lean_object* v_out_1175_; 
v_tables_1173_ = lean_ctor_get(v___y_1172_, 0);
lean_inc_ref(v_tables_1173_);
v_defs_1174_ = lean_ctor_get(v___y_1172_, 1);
lean_inc_ref(v_defs_1174_);
v_out_1175_ = lean_ctor_get(v___y_1172_, 2);
lean_inc_ref(v_out_1175_);
lean_dec_ref(v___y_1172_);
v_tables_1162_ = v_tables_1173_;
v_defs_1163_ = v_defs_1174_;
v_out_1164_ = v_out_1175_;
goto v___jp_1161_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_frame___redArg___boxed(lean_object* v_t_1188_, lean_object* v_ops_1189_, lean_object* v_root_1190_){
_start:
{
lean_object* v_res_1191_; 
v_res_1191_ = l_Lasm_UI_Encode_frame___redArg(v_t_1188_, v_ops_1189_, v_root_1190_);
lean_dec_ref(v_ops_1189_);
return v_res_1191_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_frame(lean_object* v_Msg_1192_, lean_object* v_t_1193_, lean_object* v_ops_1194_, lean_object* v_root_1195_){
_start:
{
lean_object* v___x_1196_; 
v___x_1196_ = l_Lasm_UI_Encode_frame___redArg(v_t_1193_, v_ops_1194_, v_root_1195_);
return v___x_1196_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_frame___boxed(lean_object* v_Msg_1197_, lean_object* v_t_1198_, lean_object* v_ops_1199_, lean_object* v_root_1200_){
_start:
{
lean_object* v_res_1201_; 
v_res_1201_ = l_Lasm_UI_Encode_frame(v_Msg_1197_, v_t_1198_, v_ops_1199_, v_root_1200_);
lean_dec_ref(v_ops_1199_);
return v_res_1201_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0(lean_object* v_Msg_1202_, lean_object* v_root_1203_, lean_object* v_as_1204_, size_t v_i_1205_, size_t v_stop_1206_, lean_object* v_b_1207_){
_start:
{
lean_object* v___x_1208_; 
v___x_1208_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___redArg(v_root_1203_, v_as_1204_, v_i_1205_, v_stop_1206_, v_b_1207_);
return v___x_1208_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___boxed(lean_object* v_Msg_1209_, lean_object* v_root_1210_, lean_object* v_as_1211_, lean_object* v_i_1212_, lean_object* v_stop_1213_, lean_object* v_b_1214_){
_start:
{
size_t v_i_boxed_1215_; size_t v_stop_boxed_1216_; lean_object* v_res_1217_; 
v_i_boxed_1215_ = lean_unbox_usize(v_i_1212_);
lean_dec(v_i_1212_);
v_stop_boxed_1216_ = lean_unbox_usize(v_stop_1213_);
lean_dec(v_stop_1213_);
v_res_1217_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0(v_Msg_1209_, v_root_1210_, v_as_1211_, v_i_boxed_1215_, v_stop_boxed_1216_, v_b_1214_);
lean_dec_ref(v_as_1211_);
return v_res_1217_;
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
l_Lasm_UI_Encode_maxValues = _init_l_Lasm_UI_Encode_maxValues();
lean_mark_persistent(l_Lasm_UI_Encode_maxValues);
l_Lasm_UI_Encode_maxValueBytes = _init_l_Lasm_UI_Encode_maxValueBytes();
lean_mark_persistent(l_Lasm_UI_Encode_maxValueBytes);
l_Lasm_UI_Encode_instInhabitedEnc_default = _init_l_Lasm_UI_Encode_instInhabitedEnc_default();
lean_mark_persistent(l_Lasm_UI_Encode_instInhabitedEnc_default);
l_Lasm_UI_Encode_instInhabitedEnc = _init_l_Lasm_UI_Encode_instInhabitedEnc();
lean_mark_persistent(l_Lasm_UI_Encode_instInhabitedEnc);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
