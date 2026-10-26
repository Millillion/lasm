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
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_flags(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_flags___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_flags(lean_object* v_l_515_){
_start:
{
uint8_t v_preventDefault_516_; uint8_t v_stopPropagation_517_; lean_object* v___y_519_; 
v_preventDefault_516_ = lean_ctor_get_uint8(v_l_515_, sizeof(void*)*2);
v_stopPropagation_517_ = lean_ctor_get_uint8(v_l_515_, sizeof(void*)*2 + 1);
if (v_preventDefault_516_ == 0)
{
lean_object* v___x_522_; 
v___x_522_ = lean_unsigned_to_nat(0u);
v___y_519_ = v___x_522_;
goto v___jp_518_;
}
else
{
lean_object* v___x_523_; 
v___x_523_ = lean_unsigned_to_nat(1u);
v___y_519_ = v___x_523_;
goto v___jp_518_;
}
v___jp_518_:
{
if (v_stopPropagation_517_ == 0)
{
lean_inc(v___y_519_);
return v___y_519_;
}
else
{
lean_object* v___x_520_; lean_object* v___x_521_; 
v___x_520_ = lean_unsigned_to_nat(2u);
v___x_521_ = lean_nat_add(v___y_519_, v___x_520_);
return v___x_521_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_flags___boxed(lean_object* v_l_524_){
_start:
{
lean_object* v_res_525_; 
v_res_525_ = l_Lasm_UI_Encode_Enc_flags(v_l_524_);
lean_dec_ref(v_l_524_);
return v_res_525_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_setAttr(lean_object* v_e_526_, lean_object* v_k_527_, lean_object* v_v_528_){
_start:
{
switch(lean_obj_tag(v_k_527_))
{
case 0:
{
if (lean_obj_tag(v_v_528_) == 0)
{
lean_object* v_name_529_; lean_object* v_s_530_; lean_object* v_tables_531_; lean_object* v_defs_532_; lean_object* v_out_533_; lean_object* v___x_535_; uint8_t v_isShared_536_; uint8_t v_isSharedCheck_544_; 
v_name_529_ = lean_ctor_get(v_k_527_, 0);
lean_inc_ref(v_name_529_);
lean_dec_ref_known(v_k_527_, 1);
v_s_530_ = lean_ctor_get(v_v_528_, 0);
lean_inc_ref(v_s_530_);
lean_dec_ref_known(v_v_528_, 1);
v_tables_531_ = lean_ctor_get(v_e_526_, 0);
v_defs_532_ = lean_ctor_get(v_e_526_, 1);
v_out_533_ = lean_ctor_get(v_e_526_, 2);
v_isSharedCheck_544_ = !lean_is_exclusive(v_e_526_);
if (v_isSharedCheck_544_ == 0)
{
v___x_535_ = v_e_526_;
v_isShared_536_ = v_isSharedCheck_544_;
goto v_resetjp_534_;
}
else
{
lean_inc(v_out_533_);
lean_inc(v_defs_532_);
lean_inc(v_tables_531_);
lean_dec(v_e_526_);
v___x_535_ = lean_box(0);
v_isShared_536_ = v_isSharedCheck_544_;
goto v_resetjp_534_;
}
v_resetjp_534_:
{
uint8_t v___x_537_; lean_object* v___x_538_; lean_object* v___x_540_; 
v___x_537_ = 0;
v___x_538_ = lean_byte_array_push(v_out_533_, v___x_537_);
if (v_isShared_536_ == 0)
{
lean_ctor_set(v___x_535_, 2, v___x_538_);
v___x_540_ = v___x_535_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v_tables_531_);
lean_ctor_set(v_reuseFailAlloc_543_, 1, v_defs_532_);
lean_ctor_set(v_reuseFailAlloc_543_, 2, v___x_538_);
v___x_540_ = v_reuseFailAlloc_543_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
lean_object* v___x_541_; lean_object* v___x_542_; 
v___x_541_ = l_Lasm_UI_Encode_Enc_name(v___x_540_, v_name_529_);
v___x_542_ = l_Lasm_UI_Encode_Enc_value(v___x_541_, v_s_530_);
return v___x_542_;
}
}
}
else
{
lean_object* v_name_545_; lean_object* v_tables_546_; lean_object* v_defs_547_; lean_object* v_out_548_; lean_object* v___x_550_; uint8_t v_isShared_551_; uint8_t v_isSharedCheck_558_; 
lean_dec_ref(v_v_528_);
v_name_545_ = lean_ctor_get(v_k_527_, 0);
lean_inc_ref(v_name_545_);
lean_dec_ref_known(v_k_527_, 1);
v_tables_546_ = lean_ctor_get(v_e_526_, 0);
v_defs_547_ = lean_ctor_get(v_e_526_, 1);
v_out_548_ = lean_ctor_get(v_e_526_, 2);
v_isSharedCheck_558_ = !lean_is_exclusive(v_e_526_);
if (v_isSharedCheck_558_ == 0)
{
v___x_550_ = v_e_526_;
v_isShared_551_ = v_isSharedCheck_558_;
goto v_resetjp_549_;
}
else
{
lean_inc(v_out_548_);
lean_inc(v_defs_547_);
lean_inc(v_tables_546_);
lean_dec(v_e_526_);
v___x_550_ = lean_box(0);
v_isShared_551_ = v_isSharedCheck_558_;
goto v_resetjp_549_;
}
v_resetjp_549_:
{
uint8_t v___x_552_; lean_object* v___x_553_; lean_object* v___x_555_; 
v___x_552_ = 8;
v___x_553_ = lean_byte_array_push(v_out_548_, v___x_552_);
if (v_isShared_551_ == 0)
{
lean_ctor_set(v___x_550_, 2, v___x_553_);
v___x_555_ = v___x_550_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v_tables_546_);
lean_ctor_set(v_reuseFailAlloc_557_, 1, v_defs_547_);
lean_ctor_set(v_reuseFailAlloc_557_, 2, v___x_553_);
v___x_555_ = v_reuseFailAlloc_557_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
lean_object* v___x_556_; 
v___x_556_ = l_Lasm_UI_Encode_Enc_name(v___x_555_, v_name_545_);
return v___x_556_;
}
}
}
}
case 1:
{
if (lean_obj_tag(v_v_528_) == 1)
{
lean_object* v_v_559_; 
v_v_559_ = lean_ctor_get(v_v_528_, 0);
lean_inc_ref(v_v_559_);
lean_dec_ref_known(v_v_528_, 1);
if (lean_obj_tag(v_v_559_) == 0)
{
lean_object* v_name_560_; lean_object* v_s_561_; lean_object* v_tables_562_; lean_object* v_defs_563_; lean_object* v_out_564_; lean_object* v___x_566_; uint8_t v_isShared_567_; uint8_t v_isSharedCheck_575_; 
v_name_560_ = lean_ctor_get(v_k_527_, 0);
lean_inc_ref(v_name_560_);
lean_dec_ref_known(v_k_527_, 1);
v_s_561_ = lean_ctor_get(v_v_559_, 0);
lean_inc_ref(v_s_561_);
lean_dec_ref_known(v_v_559_, 1);
v_tables_562_ = lean_ctor_get(v_e_526_, 0);
v_defs_563_ = lean_ctor_get(v_e_526_, 1);
v_out_564_ = lean_ctor_get(v_e_526_, 2);
v_isSharedCheck_575_ = !lean_is_exclusive(v_e_526_);
if (v_isSharedCheck_575_ == 0)
{
v___x_566_ = v_e_526_;
v_isShared_567_ = v_isSharedCheck_575_;
goto v_resetjp_565_;
}
else
{
lean_inc(v_out_564_);
lean_inc(v_defs_563_);
lean_inc(v_tables_562_);
lean_dec(v_e_526_);
v___x_566_ = lean_box(0);
v_isShared_567_ = v_isSharedCheck_575_;
goto v_resetjp_565_;
}
v_resetjp_565_:
{
uint8_t v___x_568_; lean_object* v___x_569_; lean_object* v___x_571_; 
v___x_568_ = 1;
v___x_569_ = lean_byte_array_push(v_out_564_, v___x_568_);
if (v_isShared_567_ == 0)
{
lean_ctor_set(v___x_566_, 2, v___x_569_);
v___x_571_ = v___x_566_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v_tables_562_);
lean_ctor_set(v_reuseFailAlloc_574_, 1, v_defs_563_);
lean_ctor_set(v_reuseFailAlloc_574_, 2, v___x_569_);
v___x_571_ = v_reuseFailAlloc_574_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_572_ = l_Lasm_UI_Encode_Enc_name(v___x_571_, v_name_560_);
v___x_573_ = l_Lasm_UI_Encode_Enc_value(v___x_572_, v_s_561_);
return v___x_573_;
}
}
}
else
{
uint8_t v_b_576_; 
v_b_576_ = lean_ctor_get_uint8(v_v_559_, 0);
lean_dec_ref_known(v_v_559_, 0);
if (v_b_576_ == 0)
{
lean_object* v_name_577_; lean_object* v_tables_578_; lean_object* v_defs_579_; lean_object* v_out_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_590_; 
v_name_577_ = lean_ctor_get(v_k_527_, 0);
lean_inc_ref(v_name_577_);
lean_dec_ref_known(v_k_527_, 1);
v_tables_578_ = lean_ctor_get(v_e_526_, 0);
v_defs_579_ = lean_ctor_get(v_e_526_, 1);
v_out_580_ = lean_ctor_get(v_e_526_, 2);
v_isSharedCheck_590_ = !lean_is_exclusive(v_e_526_);
if (v_isSharedCheck_590_ == 0)
{
v___x_582_ = v_e_526_;
v_isShared_583_ = v_isSharedCheck_590_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_out_580_);
lean_inc(v_defs_579_);
lean_inc(v_tables_578_);
lean_dec(v_e_526_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_590_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
uint8_t v___x_584_; lean_object* v___x_585_; lean_object* v___x_587_; 
v___x_584_ = 2;
v___x_585_ = lean_byte_array_push(v_out_580_, v___x_584_);
if (v_isShared_583_ == 0)
{
lean_ctor_set(v___x_582_, 2, v___x_585_);
v___x_587_ = v___x_582_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v_tables_578_);
lean_ctor_set(v_reuseFailAlloc_589_, 1, v_defs_579_);
lean_ctor_set(v_reuseFailAlloc_589_, 2, v___x_585_);
v___x_587_ = v_reuseFailAlloc_589_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
lean_object* v___x_588_; 
v___x_588_ = l_Lasm_UI_Encode_Enc_name(v___x_587_, v_name_577_);
return v___x_588_;
}
}
}
else
{
lean_object* v_name_591_; lean_object* v_tables_592_; lean_object* v_defs_593_; lean_object* v_out_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_604_; 
v_name_591_ = lean_ctor_get(v_k_527_, 0);
lean_inc_ref(v_name_591_);
lean_dec_ref_known(v_k_527_, 1);
v_tables_592_ = lean_ctor_get(v_e_526_, 0);
v_defs_593_ = lean_ctor_get(v_e_526_, 1);
v_out_594_ = lean_ctor_get(v_e_526_, 2);
v_isSharedCheck_604_ = !lean_is_exclusive(v_e_526_);
if (v_isSharedCheck_604_ == 0)
{
v___x_596_ = v_e_526_;
v_isShared_597_ = v_isSharedCheck_604_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_out_594_);
lean_inc(v_defs_593_);
lean_inc(v_tables_592_);
lean_dec(v_e_526_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_604_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
uint8_t v___x_598_; lean_object* v___x_599_; lean_object* v___x_601_; 
v___x_598_ = 3;
v___x_599_ = lean_byte_array_push(v_out_594_, v___x_598_);
if (v_isShared_597_ == 0)
{
lean_ctor_set(v___x_596_, 2, v___x_599_);
v___x_601_ = v___x_596_;
goto v_reusejp_600_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v_tables_592_);
lean_ctor_set(v_reuseFailAlloc_603_, 1, v_defs_593_);
lean_ctor_set(v_reuseFailAlloc_603_, 2, v___x_599_);
v___x_601_ = v_reuseFailAlloc_603_;
goto v_reusejp_600_;
}
v_reusejp_600_:
{
lean_object* v___x_602_; 
v___x_602_ = l_Lasm_UI_Encode_Enc_name(v___x_601_, v_name_591_);
return v___x_602_;
}
}
}
}
}
else
{
lean_object* v_name_605_; lean_object* v_tables_606_; lean_object* v_defs_607_; lean_object* v_out_608_; lean_object* v___x_610_; uint8_t v_isShared_611_; uint8_t v_isSharedCheck_618_; 
lean_dec_ref(v_v_528_);
v_name_605_ = lean_ctor_get(v_k_527_, 0);
lean_inc_ref(v_name_605_);
lean_dec_ref_known(v_k_527_, 1);
v_tables_606_ = lean_ctor_get(v_e_526_, 0);
v_defs_607_ = lean_ctor_get(v_e_526_, 1);
v_out_608_ = lean_ctor_get(v_e_526_, 2);
v_isSharedCheck_618_ = !lean_is_exclusive(v_e_526_);
if (v_isSharedCheck_618_ == 0)
{
v___x_610_ = v_e_526_;
v_isShared_611_ = v_isSharedCheck_618_;
goto v_resetjp_609_;
}
else
{
lean_inc(v_out_608_);
lean_inc(v_defs_607_);
lean_inc(v_tables_606_);
lean_dec(v_e_526_);
v___x_610_ = lean_box(0);
v_isShared_611_ = v_isSharedCheck_618_;
goto v_resetjp_609_;
}
v_resetjp_609_:
{
uint8_t v___x_612_; lean_object* v___x_613_; lean_object* v___x_615_; 
v___x_612_ = 9;
v___x_613_ = lean_byte_array_push(v_out_608_, v___x_612_);
if (v_isShared_611_ == 0)
{
lean_ctor_set(v___x_610_, 2, v___x_613_);
v___x_615_ = v___x_610_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_617_; 
v_reuseFailAlloc_617_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_617_, 0, v_tables_606_);
lean_ctor_set(v_reuseFailAlloc_617_, 1, v_defs_607_);
lean_ctor_set(v_reuseFailAlloc_617_, 2, v___x_613_);
v___x_615_ = v_reuseFailAlloc_617_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
lean_object* v___x_616_; 
v___x_616_ = l_Lasm_UI_Encode_Enc_name(v___x_615_, v_name_605_);
return v___x_616_;
}
}
}
}
case 2:
{
if (lean_obj_tag(v_v_528_) == 0)
{
lean_object* v_name_619_; lean_object* v_s_620_; lean_object* v_tables_621_; lean_object* v_defs_622_; lean_object* v_out_623_; lean_object* v___x_625_; uint8_t v_isShared_626_; uint8_t v_isSharedCheck_634_; 
v_name_619_ = lean_ctor_get(v_k_527_, 0);
lean_inc_ref(v_name_619_);
lean_dec_ref_known(v_k_527_, 1);
v_s_620_ = lean_ctor_get(v_v_528_, 0);
lean_inc_ref(v_s_620_);
lean_dec_ref_known(v_v_528_, 1);
v_tables_621_ = lean_ctor_get(v_e_526_, 0);
v_defs_622_ = lean_ctor_get(v_e_526_, 1);
v_out_623_ = lean_ctor_get(v_e_526_, 2);
v_isSharedCheck_634_ = !lean_is_exclusive(v_e_526_);
if (v_isSharedCheck_634_ == 0)
{
v___x_625_ = v_e_526_;
v_isShared_626_ = v_isSharedCheck_634_;
goto v_resetjp_624_;
}
else
{
lean_inc(v_out_623_);
lean_inc(v_defs_622_);
lean_inc(v_tables_621_);
lean_dec(v_e_526_);
v___x_625_ = lean_box(0);
v_isShared_626_ = v_isSharedCheck_634_;
goto v_resetjp_624_;
}
v_resetjp_624_:
{
uint8_t v___x_627_; lean_object* v___x_628_; lean_object* v___x_630_; 
v___x_627_ = 4;
v___x_628_ = lean_byte_array_push(v_out_623_, v___x_627_);
if (v_isShared_626_ == 0)
{
lean_ctor_set(v___x_625_, 2, v___x_628_);
v___x_630_ = v___x_625_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v_tables_621_);
lean_ctor_set(v_reuseFailAlloc_633_, 1, v_defs_622_);
lean_ctor_set(v_reuseFailAlloc_633_, 2, v___x_628_);
v___x_630_ = v_reuseFailAlloc_633_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
lean_object* v___x_631_; lean_object* v___x_632_; 
v___x_631_ = l_Lasm_UI_Encode_Enc_name(v___x_630_, v_name_619_);
v___x_632_ = l_Lasm_UI_Encode_Enc_value(v___x_631_, v_s_620_);
return v___x_632_;
}
}
}
else
{
lean_object* v_name_635_; lean_object* v_tables_636_; lean_object* v_defs_637_; lean_object* v_out_638_; lean_object* v___x_640_; uint8_t v_isShared_641_; uint8_t v_isSharedCheck_648_; 
lean_dec_ref(v_v_528_);
v_name_635_ = lean_ctor_get(v_k_527_, 0);
lean_inc_ref(v_name_635_);
lean_dec_ref_known(v_k_527_, 1);
v_tables_636_ = lean_ctor_get(v_e_526_, 0);
v_defs_637_ = lean_ctor_get(v_e_526_, 1);
v_out_638_ = lean_ctor_get(v_e_526_, 2);
v_isSharedCheck_648_ = !lean_is_exclusive(v_e_526_);
if (v_isSharedCheck_648_ == 0)
{
v___x_640_ = v_e_526_;
v_isShared_641_ = v_isSharedCheck_648_;
goto v_resetjp_639_;
}
else
{
lean_inc(v_out_638_);
lean_inc(v_defs_637_);
lean_inc(v_tables_636_);
lean_dec(v_e_526_);
v___x_640_ = lean_box(0);
v_isShared_641_ = v_isSharedCheck_648_;
goto v_resetjp_639_;
}
v_resetjp_639_:
{
uint8_t v___x_642_; lean_object* v___x_643_; lean_object* v___x_645_; 
v___x_642_ = 10;
v___x_643_ = lean_byte_array_push(v_out_638_, v___x_642_);
if (v_isShared_641_ == 0)
{
lean_ctor_set(v___x_640_, 2, v___x_643_);
v___x_645_ = v___x_640_;
goto v_reusejp_644_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v_tables_636_);
lean_ctor_set(v_reuseFailAlloc_647_, 1, v_defs_637_);
lean_ctor_set(v_reuseFailAlloc_647_, 2, v___x_643_);
v___x_645_ = v_reuseFailAlloc_647_;
goto v_reusejp_644_;
}
v_reusejp_644_:
{
lean_object* v___x_646_; 
v___x_646_ = l_Lasm_UI_Encode_Enc_name(v___x_645_, v_name_635_);
return v___x_646_;
}
}
}
}
default: 
{
if (lean_obj_tag(v_v_528_) == 2)
{
lean_object* v_l_649_; lean_object* v_event_650_; lean_object* v_paths_651_; lean_object* v___x_652_; lean_object* v_fst_653_; lean_object* v_snd_654_; lean_object* v_tables_655_; lean_object* v_defs_656_; lean_object* v_out_657_; lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_680_; 
v_l_649_ = lean_ctor_get(v_v_528_, 0);
lean_inc_ref(v_l_649_);
lean_dec_ref_known(v_v_528_, 1);
v_event_650_ = lean_ctor_get(v_k_527_, 0);
lean_inc_ref(v_event_650_);
lean_dec_ref_known(v_k_527_, 1);
v_paths_651_ = lean_ctor_get(v_l_649_, 1);
lean_inc(v_paths_651_);
v___x_652_ = l_Lasm_UI_Encode_Enc_decoder(v_e_526_, v_paths_651_);
v_fst_653_ = lean_ctor_get(v___x_652_, 0);
lean_inc(v_fst_653_);
v_snd_654_ = lean_ctor_get(v___x_652_, 1);
lean_inc(v_snd_654_);
lean_dec_ref(v___x_652_);
v_tables_655_ = lean_ctor_get(v_fst_653_, 0);
v_defs_656_ = lean_ctor_get(v_fst_653_, 1);
v_out_657_ = lean_ctor_get(v_fst_653_, 2);
v_isSharedCheck_680_ = !lean_is_exclusive(v_fst_653_);
if (v_isSharedCheck_680_ == 0)
{
v___x_659_ = v_fst_653_;
v_isShared_660_ = v_isSharedCheck_680_;
goto v_resetjp_658_;
}
else
{
lean_inc(v_out_657_);
lean_inc(v_defs_656_);
lean_inc(v_tables_655_);
lean_dec(v_fst_653_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_680_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
uint8_t v___x_661_; lean_object* v___x_662_; lean_object* v___x_664_; 
v___x_661_ = 5;
v___x_662_ = lean_byte_array_push(v_out_657_, v___x_661_);
if (v_isShared_660_ == 0)
{
lean_ctor_set(v___x_659_, 2, v___x_662_);
v___x_664_ = v___x_659_;
goto v_reusejp_663_;
}
else
{
lean_object* v_reuseFailAlloc_679_; 
v_reuseFailAlloc_679_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_679_, 0, v_tables_655_);
lean_ctor_set(v_reuseFailAlloc_679_, 1, v_defs_656_);
lean_ctor_set(v_reuseFailAlloc_679_, 2, v___x_662_);
v___x_664_ = v_reuseFailAlloc_679_;
goto v_reusejp_663_;
}
v_reusejp_663_:
{
lean_object* v___x_665_; lean_object* v_tables_666_; lean_object* v_defs_667_; lean_object* v_out_668_; lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_678_; 
v___x_665_ = l_Lasm_UI_Encode_Enc_name(v___x_664_, v_event_650_);
v_tables_666_ = lean_ctor_get(v___x_665_, 0);
v_defs_667_ = lean_ctor_get(v___x_665_, 1);
v_out_668_ = lean_ctor_get(v___x_665_, 2);
v_isSharedCheck_678_ = !lean_is_exclusive(v___x_665_);
if (v_isSharedCheck_678_ == 0)
{
v___x_670_ = v___x_665_;
v_isShared_671_ = v_isSharedCheck_678_;
goto v_resetjp_669_;
}
else
{
lean_inc(v_out_668_);
lean_inc(v_defs_667_);
lean_inc(v_tables_666_);
lean_dec(v___x_665_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_678_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_676_; 
v___x_672_ = l_Lasm_UI_Encode_pushVar(v_out_668_, v_snd_654_);
v___x_673_ = l_Lasm_UI_Encode_Enc_flags(v_l_649_);
lean_dec_ref(v_l_649_);
v___x_674_ = l_Lasm_UI_Encode_pushVar(v___x_672_, v___x_673_);
if (v_isShared_671_ == 0)
{
lean_ctor_set(v___x_670_, 2, v___x_674_);
v___x_676_ = v___x_670_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v_tables_666_);
lean_ctor_set(v_reuseFailAlloc_677_, 1, v_defs_667_);
lean_ctor_set(v_reuseFailAlloc_677_, 2, v___x_674_);
v___x_676_ = v_reuseFailAlloc_677_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
return v___x_676_;
}
}
}
}
}
else
{
lean_object* v_event_681_; lean_object* v_tables_682_; lean_object* v_defs_683_; lean_object* v_out_684_; lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_694_; 
lean_dec_ref(v_v_528_);
v_event_681_ = lean_ctor_get(v_k_527_, 0);
lean_inc_ref(v_event_681_);
lean_dec_ref_known(v_k_527_, 1);
v_tables_682_ = lean_ctor_get(v_e_526_, 0);
v_defs_683_ = lean_ctor_get(v_e_526_, 1);
v_out_684_ = lean_ctor_get(v_e_526_, 2);
v_isSharedCheck_694_ = !lean_is_exclusive(v_e_526_);
if (v_isSharedCheck_694_ == 0)
{
v___x_686_ = v_e_526_;
v_isShared_687_ = v_isSharedCheck_694_;
goto v_resetjp_685_;
}
else
{
lean_inc(v_out_684_);
lean_inc(v_defs_683_);
lean_inc(v_tables_682_);
lean_dec(v_e_526_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_694_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
uint8_t v___x_688_; lean_object* v___x_689_; lean_object* v___x_691_; 
v___x_688_ = 11;
v___x_689_ = lean_byte_array_push(v_out_684_, v___x_688_);
if (v_isShared_687_ == 0)
{
lean_ctor_set(v___x_686_, 2, v___x_689_);
v___x_691_ = v___x_686_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v_tables_682_);
lean_ctor_set(v_reuseFailAlloc_693_, 1, v_defs_683_);
lean_ctor_set(v_reuseFailAlloc_693_, 2, v___x_689_);
v___x_691_ = v_reuseFailAlloc_693_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
lean_object* v___x_692_; 
v___x_692_ = l_Lasm_UI_Encode_Enc_name(v___x_691_, v_event_681_);
return v___x_692_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_attr___redArg(lean_object* v_e_695_, lean_object* v_x_696_){
_start:
{
switch(lean_obj_tag(v_x_696_))
{
case 0:
{
lean_object* v_name_697_; lean_object* v_value_698_; lean_object* v_tables_699_; lean_object* v_defs_700_; lean_object* v_out_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_712_; 
v_name_697_ = lean_ctor_get(v_x_696_, 0);
lean_inc_ref(v_name_697_);
v_value_698_ = lean_ctor_get(v_x_696_, 1);
lean_inc_ref(v_value_698_);
lean_dec_ref_known(v_x_696_, 2);
v_tables_699_ = lean_ctor_get(v_e_695_, 0);
v_defs_700_ = lean_ctor_get(v_e_695_, 1);
v_out_701_ = lean_ctor_get(v_e_695_, 2);
v_isSharedCheck_712_ = !lean_is_exclusive(v_e_695_);
if (v_isSharedCheck_712_ == 0)
{
v___x_703_ = v_e_695_;
v_isShared_704_ = v_isSharedCheck_712_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_out_701_);
lean_inc(v_defs_700_);
lean_inc(v_tables_699_);
lean_dec(v_e_695_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_712_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
uint8_t v___x_705_; lean_object* v___x_706_; lean_object* v___x_708_; 
v___x_705_ = 0;
v___x_706_ = lean_byte_array_push(v_out_701_, v___x_705_);
if (v_isShared_704_ == 0)
{
lean_ctor_set(v___x_703_, 2, v___x_706_);
v___x_708_ = v___x_703_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v_tables_699_);
lean_ctor_set(v_reuseFailAlloc_711_, 1, v_defs_700_);
lean_ctor_set(v_reuseFailAlloc_711_, 2, v___x_706_);
v___x_708_ = v_reuseFailAlloc_711_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
lean_object* v___x_709_; lean_object* v___x_710_; 
v___x_709_ = l_Lasm_UI_Encode_Enc_name(v___x_708_, v_name_697_);
v___x_710_ = l_Lasm_UI_Encode_Enc_value(v___x_709_, v_value_698_);
return v___x_710_;
}
}
}
case 1:
{
lean_object* v_value_713_; 
v_value_713_ = lean_ctor_get(v_x_696_, 1);
if (lean_obj_tag(v_value_713_) == 0)
{
lean_object* v_name_714_; lean_object* v_s_715_; lean_object* v_tables_716_; lean_object* v_defs_717_; lean_object* v_out_718_; lean_object* v___x_720_; uint8_t v_isShared_721_; uint8_t v_isSharedCheck_729_; 
lean_inc_ref(v_value_713_);
v_name_714_ = lean_ctor_get(v_x_696_, 0);
lean_inc_ref(v_name_714_);
lean_dec_ref_known(v_x_696_, 2);
v_s_715_ = lean_ctor_get(v_value_713_, 0);
lean_inc_ref(v_s_715_);
lean_dec_ref_known(v_value_713_, 1);
v_tables_716_ = lean_ctor_get(v_e_695_, 0);
v_defs_717_ = lean_ctor_get(v_e_695_, 1);
v_out_718_ = lean_ctor_get(v_e_695_, 2);
v_isSharedCheck_729_ = !lean_is_exclusive(v_e_695_);
if (v_isSharedCheck_729_ == 0)
{
v___x_720_ = v_e_695_;
v_isShared_721_ = v_isSharedCheck_729_;
goto v_resetjp_719_;
}
else
{
lean_inc(v_out_718_);
lean_inc(v_defs_717_);
lean_inc(v_tables_716_);
lean_dec(v_e_695_);
v___x_720_ = lean_box(0);
v_isShared_721_ = v_isSharedCheck_729_;
goto v_resetjp_719_;
}
v_resetjp_719_:
{
uint8_t v___x_722_; lean_object* v___x_723_; lean_object* v___x_725_; 
v___x_722_ = 1;
v___x_723_ = lean_byte_array_push(v_out_718_, v___x_722_);
if (v_isShared_721_ == 0)
{
lean_ctor_set(v___x_720_, 2, v___x_723_);
v___x_725_ = v___x_720_;
goto v_reusejp_724_;
}
else
{
lean_object* v_reuseFailAlloc_728_; 
v_reuseFailAlloc_728_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_728_, 0, v_tables_716_);
lean_ctor_set(v_reuseFailAlloc_728_, 1, v_defs_717_);
lean_ctor_set(v_reuseFailAlloc_728_, 2, v___x_723_);
v___x_725_ = v_reuseFailAlloc_728_;
goto v_reusejp_724_;
}
v_reusejp_724_:
{
lean_object* v___x_726_; lean_object* v___x_727_; 
v___x_726_ = l_Lasm_UI_Encode_Enc_name(v___x_725_, v_name_714_);
v___x_727_ = l_Lasm_UI_Encode_Enc_value(v___x_726_, v_s_715_);
return v___x_727_;
}
}
}
else
{
uint8_t v_b_730_; 
v_b_730_ = lean_ctor_get_uint8(v_value_713_, 0);
if (v_b_730_ == 0)
{
lean_object* v_name_731_; lean_object* v_tables_732_; lean_object* v_defs_733_; lean_object* v_out_734_; lean_object* v___x_736_; uint8_t v_isShared_737_; uint8_t v_isSharedCheck_744_; 
v_name_731_ = lean_ctor_get(v_x_696_, 0);
lean_inc_ref(v_name_731_);
lean_dec_ref_known(v_x_696_, 2);
v_tables_732_ = lean_ctor_get(v_e_695_, 0);
v_defs_733_ = lean_ctor_get(v_e_695_, 1);
v_out_734_ = lean_ctor_get(v_e_695_, 2);
v_isSharedCheck_744_ = !lean_is_exclusive(v_e_695_);
if (v_isSharedCheck_744_ == 0)
{
v___x_736_ = v_e_695_;
v_isShared_737_ = v_isSharedCheck_744_;
goto v_resetjp_735_;
}
else
{
lean_inc(v_out_734_);
lean_inc(v_defs_733_);
lean_inc(v_tables_732_);
lean_dec(v_e_695_);
v___x_736_ = lean_box(0);
v_isShared_737_ = v_isSharedCheck_744_;
goto v_resetjp_735_;
}
v_resetjp_735_:
{
uint8_t v___x_738_; lean_object* v___x_739_; lean_object* v___x_741_; 
v___x_738_ = 2;
v___x_739_ = lean_byte_array_push(v_out_734_, v___x_738_);
if (v_isShared_737_ == 0)
{
lean_ctor_set(v___x_736_, 2, v___x_739_);
v___x_741_ = v___x_736_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_743_; 
v_reuseFailAlloc_743_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_743_, 0, v_tables_732_);
lean_ctor_set(v_reuseFailAlloc_743_, 1, v_defs_733_);
lean_ctor_set(v_reuseFailAlloc_743_, 2, v___x_739_);
v___x_741_ = v_reuseFailAlloc_743_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
lean_object* v___x_742_; 
v___x_742_ = l_Lasm_UI_Encode_Enc_name(v___x_741_, v_name_731_);
return v___x_742_;
}
}
}
else
{
lean_object* v_name_745_; lean_object* v_tables_746_; lean_object* v_defs_747_; lean_object* v_out_748_; lean_object* v___x_750_; uint8_t v_isShared_751_; uint8_t v_isSharedCheck_758_; 
v_name_745_ = lean_ctor_get(v_x_696_, 0);
lean_inc_ref(v_name_745_);
lean_dec_ref_known(v_x_696_, 2);
v_tables_746_ = lean_ctor_get(v_e_695_, 0);
v_defs_747_ = lean_ctor_get(v_e_695_, 1);
v_out_748_ = lean_ctor_get(v_e_695_, 2);
v_isSharedCheck_758_ = !lean_is_exclusive(v_e_695_);
if (v_isSharedCheck_758_ == 0)
{
v___x_750_ = v_e_695_;
v_isShared_751_ = v_isSharedCheck_758_;
goto v_resetjp_749_;
}
else
{
lean_inc(v_out_748_);
lean_inc(v_defs_747_);
lean_inc(v_tables_746_);
lean_dec(v_e_695_);
v___x_750_ = lean_box(0);
v_isShared_751_ = v_isSharedCheck_758_;
goto v_resetjp_749_;
}
v_resetjp_749_:
{
uint8_t v___x_752_; lean_object* v___x_753_; lean_object* v___x_755_; 
v___x_752_ = 3;
v___x_753_ = lean_byte_array_push(v_out_748_, v___x_752_);
if (v_isShared_751_ == 0)
{
lean_ctor_set(v___x_750_, 2, v___x_753_);
v___x_755_ = v___x_750_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v_tables_746_);
lean_ctor_set(v_reuseFailAlloc_757_, 1, v_defs_747_);
lean_ctor_set(v_reuseFailAlloc_757_, 2, v___x_753_);
v___x_755_ = v_reuseFailAlloc_757_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
lean_object* v___x_756_; 
v___x_756_ = l_Lasm_UI_Encode_Enc_name(v___x_755_, v_name_745_);
return v___x_756_;
}
}
}
}
}
case 2:
{
lean_object* v_name_759_; lean_object* v_value_760_; lean_object* v_tables_761_; lean_object* v_defs_762_; lean_object* v_out_763_; lean_object* v___x_765_; uint8_t v_isShared_766_; uint8_t v_isSharedCheck_774_; 
v_name_759_ = lean_ctor_get(v_x_696_, 0);
lean_inc_ref(v_name_759_);
v_value_760_ = lean_ctor_get(v_x_696_, 1);
lean_inc_ref(v_value_760_);
lean_dec_ref_known(v_x_696_, 2);
v_tables_761_ = lean_ctor_get(v_e_695_, 0);
v_defs_762_ = lean_ctor_get(v_e_695_, 1);
v_out_763_ = lean_ctor_get(v_e_695_, 2);
v_isSharedCheck_774_ = !lean_is_exclusive(v_e_695_);
if (v_isSharedCheck_774_ == 0)
{
v___x_765_ = v_e_695_;
v_isShared_766_ = v_isSharedCheck_774_;
goto v_resetjp_764_;
}
else
{
lean_inc(v_out_763_);
lean_inc(v_defs_762_);
lean_inc(v_tables_761_);
lean_dec(v_e_695_);
v___x_765_ = lean_box(0);
v_isShared_766_ = v_isSharedCheck_774_;
goto v_resetjp_764_;
}
v_resetjp_764_:
{
uint8_t v___x_767_; lean_object* v___x_768_; lean_object* v___x_770_; 
v___x_767_ = 4;
v___x_768_ = lean_byte_array_push(v_out_763_, v___x_767_);
if (v_isShared_766_ == 0)
{
lean_ctor_set(v___x_765_, 2, v___x_768_);
v___x_770_ = v___x_765_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v_tables_761_);
lean_ctor_set(v_reuseFailAlloc_773_, 1, v_defs_762_);
lean_ctor_set(v_reuseFailAlloc_773_, 2, v___x_768_);
v___x_770_ = v_reuseFailAlloc_773_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
lean_object* v___x_771_; lean_object* v___x_772_; 
v___x_771_ = l_Lasm_UI_Encode_Enc_name(v___x_770_, v_name_759_);
v___x_772_ = l_Lasm_UI_Encode_Enc_value(v___x_771_, v_value_760_);
return v___x_772_;
}
}
}
default: 
{
lean_object* v_listener_775_; lean_object* v_event_776_; lean_object* v_paths_777_; lean_object* v___x_778_; lean_object* v_fst_779_; lean_object* v_snd_780_; lean_object* v_tables_781_; lean_object* v_defs_782_; lean_object* v_out_783_; lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_806_; 
v_listener_775_ = lean_ctor_get(v_x_696_, 0);
lean_inc_ref(v_listener_775_);
lean_dec_ref_known(v_x_696_, 2);
v_event_776_ = lean_ctor_get(v_listener_775_, 0);
v_paths_777_ = lean_ctor_get(v_listener_775_, 1);
lean_inc(v_paths_777_);
v___x_778_ = l_Lasm_UI_Encode_Enc_decoder(v_e_695_, v_paths_777_);
v_fst_779_ = lean_ctor_get(v___x_778_, 0);
lean_inc(v_fst_779_);
v_snd_780_ = lean_ctor_get(v___x_778_, 1);
lean_inc(v_snd_780_);
lean_dec_ref(v___x_778_);
v_tables_781_ = lean_ctor_get(v_fst_779_, 0);
v_defs_782_ = lean_ctor_get(v_fst_779_, 1);
v_out_783_ = lean_ctor_get(v_fst_779_, 2);
v_isSharedCheck_806_ = !lean_is_exclusive(v_fst_779_);
if (v_isSharedCheck_806_ == 0)
{
v___x_785_ = v_fst_779_;
v_isShared_786_ = v_isSharedCheck_806_;
goto v_resetjp_784_;
}
else
{
lean_inc(v_out_783_);
lean_inc(v_defs_782_);
lean_inc(v_tables_781_);
lean_dec(v_fst_779_);
v___x_785_ = lean_box(0);
v_isShared_786_ = v_isSharedCheck_806_;
goto v_resetjp_784_;
}
v_resetjp_784_:
{
uint8_t v___x_787_; lean_object* v___x_788_; lean_object* v___x_790_; 
v___x_787_ = 5;
v___x_788_ = lean_byte_array_push(v_out_783_, v___x_787_);
if (v_isShared_786_ == 0)
{
lean_ctor_set(v___x_785_, 2, v___x_788_);
v___x_790_ = v___x_785_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v_tables_781_);
lean_ctor_set(v_reuseFailAlloc_805_, 1, v_defs_782_);
lean_ctor_set(v_reuseFailAlloc_805_, 2, v___x_788_);
v___x_790_ = v_reuseFailAlloc_805_;
goto v_reusejp_789_;
}
v_reusejp_789_:
{
lean_object* v___x_791_; lean_object* v_tables_792_; lean_object* v_defs_793_; lean_object* v_out_794_; lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_804_; 
lean_inc_ref(v_event_776_);
v___x_791_ = l_Lasm_UI_Encode_Enc_name(v___x_790_, v_event_776_);
v_tables_792_ = lean_ctor_get(v___x_791_, 0);
v_defs_793_ = lean_ctor_get(v___x_791_, 1);
v_out_794_ = lean_ctor_get(v___x_791_, 2);
v_isSharedCheck_804_ = !lean_is_exclusive(v___x_791_);
if (v_isSharedCheck_804_ == 0)
{
v___x_796_ = v___x_791_;
v_isShared_797_ = v_isSharedCheck_804_;
goto v_resetjp_795_;
}
else
{
lean_inc(v_out_794_);
lean_inc(v_defs_793_);
lean_inc(v_tables_792_);
lean_dec(v___x_791_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_804_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_802_; 
v___x_798_ = l_Lasm_UI_Encode_pushVar(v_out_794_, v_snd_780_);
v___x_799_ = l_Lasm_UI_Encode_Enc_flags(v_listener_775_);
lean_dec_ref(v_listener_775_);
v___x_800_ = l_Lasm_UI_Encode_pushVar(v___x_798_, v___x_799_);
if (v_isShared_797_ == 0)
{
lean_ctor_set(v___x_796_, 2, v___x_800_);
v___x_802_ = v___x_796_;
goto v_reusejp_801_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v_tables_792_);
lean_ctor_set(v_reuseFailAlloc_803_, 1, v_defs_793_);
lean_ctor_set(v_reuseFailAlloc_803_, 2, v___x_800_);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_attr(lean_object* v_Msg_807_, lean_object* v_e_808_, lean_object* v_x_809_){
_start:
{
lean_object* v___x_810_; 
v___x_810_ = l_Lasm_UI_Encode_Enc_attr___redArg(v_e_808_, v_x_809_);
return v___x_810_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_attrOp(lean_object* v_e_811_, lean_object* v_x_812_){
_start:
{
if (lean_obj_tag(v_x_812_) == 0)
{
lean_object* v_k_813_; lean_object* v_v_814_; lean_object* v___x_815_; 
v_k_813_ = lean_ctor_get(v_x_812_, 0);
lean_inc_ref(v_k_813_);
v_v_814_ = lean_ctor_get(v_x_812_, 1);
lean_inc_ref(v_v_814_);
lean_dec_ref_known(v_x_812_, 2);
v___x_815_ = l_Lasm_UI_Encode_Enc_setAttr(v_e_811_, v_k_813_, v_v_814_);
return v___x_815_;
}
else
{
lean_object* v_k_816_; 
v_k_816_ = lean_ctor_get(v_x_812_, 0);
lean_inc_ref(v_k_816_);
lean_dec_ref_known(v_x_812_, 1);
switch(lean_obj_tag(v_k_816_))
{
case 0:
{
lean_object* v_name_817_; lean_object* v_tables_818_; lean_object* v_defs_819_; lean_object* v_out_820_; lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_830_; 
v_name_817_ = lean_ctor_get(v_k_816_, 0);
lean_inc_ref(v_name_817_);
lean_dec_ref_known(v_k_816_, 1);
v_tables_818_ = lean_ctor_get(v_e_811_, 0);
v_defs_819_ = lean_ctor_get(v_e_811_, 1);
v_out_820_ = lean_ctor_get(v_e_811_, 2);
v_isSharedCheck_830_ = !lean_is_exclusive(v_e_811_);
if (v_isSharedCheck_830_ == 0)
{
v___x_822_ = v_e_811_;
v_isShared_823_ = v_isSharedCheck_830_;
goto v_resetjp_821_;
}
else
{
lean_inc(v_out_820_);
lean_inc(v_defs_819_);
lean_inc(v_tables_818_);
lean_dec(v_e_811_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_830_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
uint8_t v___x_824_; lean_object* v___x_825_; lean_object* v___x_827_; 
v___x_824_ = 8;
v___x_825_ = lean_byte_array_push(v_out_820_, v___x_824_);
if (v_isShared_823_ == 0)
{
lean_ctor_set(v___x_822_, 2, v___x_825_);
v___x_827_ = v___x_822_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v_tables_818_);
lean_ctor_set(v_reuseFailAlloc_829_, 1, v_defs_819_);
lean_ctor_set(v_reuseFailAlloc_829_, 2, v___x_825_);
v___x_827_ = v_reuseFailAlloc_829_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
lean_object* v___x_828_; 
v___x_828_ = l_Lasm_UI_Encode_Enc_name(v___x_827_, v_name_817_);
return v___x_828_;
}
}
}
case 1:
{
lean_object* v_name_831_; lean_object* v_tables_832_; lean_object* v_defs_833_; lean_object* v_out_834_; lean_object* v___x_836_; uint8_t v_isShared_837_; uint8_t v_isSharedCheck_844_; 
v_name_831_ = lean_ctor_get(v_k_816_, 0);
lean_inc_ref(v_name_831_);
lean_dec_ref_known(v_k_816_, 1);
v_tables_832_ = lean_ctor_get(v_e_811_, 0);
v_defs_833_ = lean_ctor_get(v_e_811_, 1);
v_out_834_ = lean_ctor_get(v_e_811_, 2);
v_isSharedCheck_844_ = !lean_is_exclusive(v_e_811_);
if (v_isSharedCheck_844_ == 0)
{
v___x_836_ = v_e_811_;
v_isShared_837_ = v_isSharedCheck_844_;
goto v_resetjp_835_;
}
else
{
lean_inc(v_out_834_);
lean_inc(v_defs_833_);
lean_inc(v_tables_832_);
lean_dec(v_e_811_);
v___x_836_ = lean_box(0);
v_isShared_837_ = v_isSharedCheck_844_;
goto v_resetjp_835_;
}
v_resetjp_835_:
{
uint8_t v___x_838_; lean_object* v___x_839_; lean_object* v___x_841_; 
v___x_838_ = 9;
v___x_839_ = lean_byte_array_push(v_out_834_, v___x_838_);
if (v_isShared_837_ == 0)
{
lean_ctor_set(v___x_836_, 2, v___x_839_);
v___x_841_ = v___x_836_;
goto v_reusejp_840_;
}
else
{
lean_object* v_reuseFailAlloc_843_; 
v_reuseFailAlloc_843_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_843_, 0, v_tables_832_);
lean_ctor_set(v_reuseFailAlloc_843_, 1, v_defs_833_);
lean_ctor_set(v_reuseFailAlloc_843_, 2, v___x_839_);
v___x_841_ = v_reuseFailAlloc_843_;
goto v_reusejp_840_;
}
v_reusejp_840_:
{
lean_object* v___x_842_; 
v___x_842_ = l_Lasm_UI_Encode_Enc_name(v___x_841_, v_name_831_);
return v___x_842_;
}
}
}
case 2:
{
lean_object* v_name_845_; lean_object* v_tables_846_; lean_object* v_defs_847_; lean_object* v_out_848_; lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_858_; 
v_name_845_ = lean_ctor_get(v_k_816_, 0);
lean_inc_ref(v_name_845_);
lean_dec_ref_known(v_k_816_, 1);
v_tables_846_ = lean_ctor_get(v_e_811_, 0);
v_defs_847_ = lean_ctor_get(v_e_811_, 1);
v_out_848_ = lean_ctor_get(v_e_811_, 2);
v_isSharedCheck_858_ = !lean_is_exclusive(v_e_811_);
if (v_isSharedCheck_858_ == 0)
{
v___x_850_ = v_e_811_;
v_isShared_851_ = v_isSharedCheck_858_;
goto v_resetjp_849_;
}
else
{
lean_inc(v_out_848_);
lean_inc(v_defs_847_);
lean_inc(v_tables_846_);
lean_dec(v_e_811_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_858_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
uint8_t v___x_852_; lean_object* v___x_853_; lean_object* v___x_855_; 
v___x_852_ = 10;
v___x_853_ = lean_byte_array_push(v_out_848_, v___x_852_);
if (v_isShared_851_ == 0)
{
lean_ctor_set(v___x_850_, 2, v___x_853_);
v___x_855_ = v___x_850_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_857_, 0, v_tables_846_);
lean_ctor_set(v_reuseFailAlloc_857_, 1, v_defs_847_);
lean_ctor_set(v_reuseFailAlloc_857_, 2, v___x_853_);
v___x_855_ = v_reuseFailAlloc_857_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
lean_object* v___x_856_; 
v___x_856_ = l_Lasm_UI_Encode_Enc_name(v___x_855_, v_name_845_);
return v___x_856_;
}
}
}
default: 
{
lean_object* v_event_859_; lean_object* v_tables_860_; lean_object* v_defs_861_; lean_object* v_out_862_; lean_object* v___x_864_; uint8_t v_isShared_865_; uint8_t v_isSharedCheck_872_; 
v_event_859_ = lean_ctor_get(v_k_816_, 0);
lean_inc_ref(v_event_859_);
lean_dec_ref_known(v_k_816_, 1);
v_tables_860_ = lean_ctor_get(v_e_811_, 0);
v_defs_861_ = lean_ctor_get(v_e_811_, 1);
v_out_862_ = lean_ctor_get(v_e_811_, 2);
v_isSharedCheck_872_ = !lean_is_exclusive(v_e_811_);
if (v_isSharedCheck_872_ == 0)
{
v___x_864_ = v_e_811_;
v_isShared_865_ = v_isSharedCheck_872_;
goto v_resetjp_863_;
}
else
{
lean_inc(v_out_862_);
lean_inc(v_defs_861_);
lean_inc(v_tables_860_);
lean_dec(v_e_811_);
v___x_864_ = lean_box(0);
v_isShared_865_ = v_isSharedCheck_872_;
goto v_resetjp_863_;
}
v_resetjp_863_:
{
uint8_t v___x_866_; lean_object* v___x_867_; lean_object* v___x_869_; 
v___x_866_ = 11;
v___x_867_ = lean_byte_array_push(v_out_862_, v___x_866_);
if (v_isShared_865_ == 0)
{
lean_ctor_set(v___x_864_, 2, v___x_867_);
v___x_869_ = v___x_864_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_871_; 
v_reuseFailAlloc_871_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_871_, 0, v_tables_860_);
lean_ctor_set(v_reuseFailAlloc_871_, 1, v_defs_861_);
lean_ctor_set(v_reuseFailAlloc_871_, 2, v___x_867_);
v___x_869_ = v_reuseFailAlloc_871_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
lean_object* v___x_870_; 
v___x_870_ = l_Lasm_UI_Encode_Enc_name(v___x_869_, v_event_859_);
return v___x_870_;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_Encode_Enc_nsByte(uint8_t v_x_873_){
_start:
{
switch(v_x_873_)
{
case 0:
{
uint8_t v___x_874_; 
v___x_874_ = 1;
return v___x_874_;
}
case 1:
{
uint8_t v___x_875_; 
v___x_875_ = 2;
return v___x_875_;
}
default: 
{
uint8_t v___x_876_; 
v___x_876_ = 3;
return v___x_876_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_nsByte___boxed(lean_object* v_x_877_){
_start:
{
uint8_t v_x_40__boxed_878_; uint8_t v_res_879_; lean_object* v_r_880_; 
v_x_40__boxed_878_ = lean_unbox(v_x_877_);
v_res_879_ = l_Lasm_UI_Encode_Enc_nsByte(v_x_40__boxed_878_);
v_r_880_ = lean_box(v_res_879_);
return v_r_880_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_node_spec__0___redArg(lean_object* v_x_881_, lean_object* v_x_882_){
_start:
{
if (lean_obj_tag(v_x_882_) == 0)
{
return v_x_881_;
}
else
{
lean_object* v_head_883_; lean_object* v_tail_884_; lean_object* v___x_885_; 
v_head_883_ = lean_ctor_get(v_x_882_, 0);
lean_inc(v_head_883_);
v_tail_884_ = lean_ctor_get(v_x_882_, 1);
lean_inc(v_tail_884_);
lean_dec_ref_known(v_x_882_, 2);
v___x_885_ = l_Lasm_UI_Encode_Enc_attr___redArg(v_x_881_, v_head_883_);
v_x_881_ = v___x_885_;
v_x_882_ = v_tail_884_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_node___redArg(lean_object* v_e_887_, lean_object* v_x_888_){
_start:
{
if (lean_obj_tag(v_x_888_) == 0)
{
lean_object* v_id_889_; lean_object* v_s_890_; lean_object* v_tables_891_; lean_object* v_defs_892_; lean_object* v_out_893_; lean_object* v___x_895_; uint8_t v_isShared_896_; uint8_t v_isSharedCheck_911_; 
v_id_889_ = lean_ctor_get(v_x_888_, 0);
lean_inc(v_id_889_);
v_s_890_ = lean_ctor_get(v_x_888_, 1);
lean_inc_ref(v_s_890_);
lean_dec_ref_known(v_x_888_, 2);
v_tables_891_ = lean_ctor_get(v_e_887_, 0);
v_defs_892_ = lean_ctor_get(v_e_887_, 1);
v_out_893_ = lean_ctor_get(v_e_887_, 2);
v_isSharedCheck_911_ = !lean_is_exclusive(v_e_887_);
if (v_isSharedCheck_911_ == 0)
{
v___x_895_ = v_e_887_;
v_isShared_896_ = v_isSharedCheck_911_;
goto v_resetjp_894_;
}
else
{
lean_inc(v_out_893_);
lean_inc(v_defs_892_);
lean_inc(v_tables_891_);
lean_dec(v_e_887_);
v___x_895_ = lean_box(0);
v_isShared_896_ = v_isSharedCheck_911_;
goto v_resetjp_894_;
}
v_resetjp_894_:
{
uint8_t v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; uint8_t v___x_906_; lean_object* v___x_907_; lean_object* v___x_909_; 
v___x_897_ = 0;
v___x_898_ = lean_byte_array_push(v_out_893_, v___x_897_);
v___x_899_ = l_Lasm_UI_Encode_pushVar(v___x_898_, v_id_889_);
v___x_900_ = lean_string_utf8_byte_size(v_s_890_);
v___x_901_ = l_Lasm_UI_Encode_pushVar(v___x_899_, v___x_900_);
v___x_902_ = lean_string_to_utf8(v_s_890_);
lean_dec_ref(v_s_890_);
v___x_903_ = lean_unsigned_to_nat(0u);
v___x_904_ = lean_byte_array_size(v___x_901_);
v___x_905_ = lean_byte_array_size(v___x_902_);
v___x_906_ = 0;
v___x_907_ = lean_byte_array_copy_slice(v___x_902_, v___x_903_, v___x_901_, v___x_904_, v___x_905_, v___x_906_);
lean_dec_ref(v___x_902_);
if (v_isShared_896_ == 0)
{
lean_ctor_set(v___x_895_, 2, v___x_907_);
v___x_909_ = v___x_895_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v_tables_891_);
lean_ctor_set(v_reuseFailAlloc_910_, 1, v_defs_892_);
lean_ctor_set(v_reuseFailAlloc_910_, 2, v___x_907_);
v___x_909_ = v_reuseFailAlloc_910_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
return v___x_909_;
}
}
}
else
{
lean_object* v_id_912_; uint8_t v_ns_913_; lean_object* v_tag_914_; lean_object* v_attrs_915_; lean_object* v_children_916_; lean_object* v_tables_917_; lean_object* v_defs_918_; lean_object* v_out_919_; lean_object* v___x_921_; uint8_t v_isShared_922_; uint8_t v_isSharedCheck_956_; 
v_id_912_ = lean_ctor_get(v_x_888_, 0);
lean_inc(v_id_912_);
v_ns_913_ = lean_ctor_get_uint8(v_x_888_, sizeof(void*)*5);
v_tag_914_ = lean_ctor_get(v_x_888_, 1);
lean_inc_ref(v_tag_914_);
v_attrs_915_ = lean_ctor_get(v_x_888_, 3);
lean_inc(v_attrs_915_);
v_children_916_ = lean_ctor_get(v_x_888_, 4);
lean_inc(v_children_916_);
lean_dec_ref_known(v_x_888_, 5);
v_tables_917_ = lean_ctor_get(v_e_887_, 0);
v_defs_918_ = lean_ctor_get(v_e_887_, 1);
v_out_919_ = lean_ctor_get(v_e_887_, 2);
v_isSharedCheck_956_ = !lean_is_exclusive(v_e_887_);
if (v_isSharedCheck_956_ == 0)
{
v___x_921_ = v_e_887_;
v_isShared_922_ = v_isSharedCheck_956_;
goto v_resetjp_920_;
}
else
{
lean_inc(v_out_919_);
lean_inc(v_defs_918_);
lean_inc(v_tables_917_);
lean_dec(v_e_887_);
v___x_921_ = lean_box(0);
v_isShared_922_ = v_isSharedCheck_956_;
goto v_resetjp_920_;
}
v_resetjp_920_:
{
uint8_t v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_927_; 
v___x_923_ = l_Lasm_UI_Encode_Enc_nsByte(v_ns_913_);
v___x_924_ = lean_byte_array_push(v_out_919_, v___x_923_);
v___x_925_ = l_Lasm_UI_Encode_pushVar(v___x_924_, v_id_912_);
if (v_isShared_922_ == 0)
{
lean_ctor_set(v___x_921_, 2, v___x_925_);
v___x_927_ = v___x_921_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v_tables_917_);
lean_ctor_set(v_reuseFailAlloc_955_, 1, v_defs_918_);
lean_ctor_set(v_reuseFailAlloc_955_, 2, v___x_925_);
v___x_927_ = v_reuseFailAlloc_955_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
lean_object* v_e_928_; lean_object* v_tables_929_; lean_object* v_defs_930_; lean_object* v_out_931_; lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_954_; 
v_e_928_ = l_Lasm_UI_Encode_Enc_name(v___x_927_, v_tag_914_);
v_tables_929_ = lean_ctor_get(v_e_928_, 0);
v_defs_930_ = lean_ctor_get(v_e_928_, 1);
v_out_931_ = lean_ctor_get(v_e_928_, 2);
v_isSharedCheck_954_ = !lean_is_exclusive(v_e_928_);
if (v_isSharedCheck_954_ == 0)
{
v___x_933_ = v_e_928_;
v_isShared_934_ = v_isSharedCheck_954_;
goto v_resetjp_932_;
}
else
{
lean_inc(v_out_931_);
lean_inc(v_defs_930_);
lean_inc(v_tables_929_);
lean_dec(v_e_928_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_954_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_938_; 
v___x_935_ = l_List_lengthTR___redArg(v_attrs_915_);
v___x_936_ = l_Lasm_UI_Encode_pushVar(v_out_931_, v___x_935_);
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 2, v___x_936_);
v___x_938_ = v___x_933_;
goto v_reusejp_937_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v_tables_929_);
lean_ctor_set(v_reuseFailAlloc_953_, 1, v_defs_930_);
lean_ctor_set(v_reuseFailAlloc_953_, 2, v___x_936_);
v___x_938_ = v_reuseFailAlloc_953_;
goto v_reusejp_937_;
}
v_reusejp_937_:
{
lean_object* v_e_939_; lean_object* v_tables_940_; lean_object* v_defs_941_; lean_object* v_out_942_; lean_object* v___x_944_; uint8_t v_isShared_945_; uint8_t v_isSharedCheck_952_; 
v_e_939_ = l_List_foldl___at___00Lasm_UI_Encode_Enc_node_spec__0___redArg(v___x_938_, v_attrs_915_);
v_tables_940_ = lean_ctor_get(v_e_939_, 0);
v_defs_941_ = lean_ctor_get(v_e_939_, 1);
v_out_942_ = lean_ctor_get(v_e_939_, 2);
v_isSharedCheck_952_ = !lean_is_exclusive(v_e_939_);
if (v_isSharedCheck_952_ == 0)
{
v___x_944_ = v_e_939_;
v_isShared_945_ = v_isSharedCheck_952_;
goto v_resetjp_943_;
}
else
{
lean_inc(v_out_942_);
lean_inc(v_defs_941_);
lean_inc(v_tables_940_);
lean_dec(v_e_939_);
v___x_944_ = lean_box(0);
v_isShared_945_ = v_isSharedCheck_952_;
goto v_resetjp_943_;
}
v_resetjp_943_:
{
lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_949_; 
v___x_946_ = l_List_lengthTR___redArg(v_children_916_);
v___x_947_ = l_Lasm_UI_Encode_pushVar(v_out_942_, v___x_946_);
if (v_isShared_945_ == 0)
{
lean_ctor_set(v___x_944_, 2, v___x_947_);
v___x_949_ = v___x_944_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_tables_940_);
lean_ctor_set(v_reuseFailAlloc_951_, 1, v_defs_941_);
lean_ctor_set(v_reuseFailAlloc_951_, 2, v___x_947_);
v___x_949_ = v_reuseFailAlloc_951_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
lean_object* v___x_950_; 
v___x_950_ = l_Lasm_UI_Encode_Enc_nodes___redArg(v___x_949_, v_children_916_);
return v___x_950_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_nodes___redArg(lean_object* v_e_957_, lean_object* v_x_958_){
_start:
{
if (lean_obj_tag(v_x_958_) == 0)
{
return v_e_957_;
}
else
{
lean_object* v_head_959_; lean_object* v_tail_960_; lean_object* v___x_961_; 
v_head_959_ = lean_ctor_get(v_x_958_, 0);
lean_inc(v_head_959_);
v_tail_960_ = lean_ctor_get(v_x_958_, 1);
lean_inc(v_tail_960_);
lean_dec_ref_known(v_x_958_, 2);
v___x_961_ = l_Lasm_UI_Encode_Enc_node___redArg(v_e_957_, v_head_959_);
v_e_957_ = v___x_961_;
v_x_958_ = v_tail_960_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_nodes(lean_object* v_Msg_963_, lean_object* v_e_964_, lean_object* v_x_965_){
_start:
{
lean_object* v___x_966_; 
v___x_966_ = l_Lasm_UI_Encode_Enc_nodes___redArg(v_e_964_, v_x_965_);
return v___x_966_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_node(lean_object* v_Msg_967_, lean_object* v_e_968_, lean_object* v_x_969_){
_start:
{
lean_object* v___x_970_; 
v___x_970_ = l_Lasm_UI_Encode_Enc_node___redArg(v_e_968_, v_x_969_);
return v___x_970_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_node_spec__0(lean_object* v_Msg_971_, lean_object* v_x_972_, lean_object* v_x_973_){
_start:
{
lean_object* v___x_974_; 
v___x_974_ = l_List_foldl___at___00Lasm_UI_Encode_Enc_node_spec__0___redArg(v_x_972_, v_x_973_);
return v___x_974_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_before(lean_object* v_e_975_, lean_object* v_x_976_){
_start:
{
if (lean_obj_tag(v_x_976_) == 0)
{
lean_object* v_tables_977_; lean_object* v_defs_978_; lean_object* v_out_979_; lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_988_; 
v_tables_977_ = lean_ctor_get(v_e_975_, 0);
v_defs_978_ = lean_ctor_get(v_e_975_, 1);
v_out_979_ = lean_ctor_get(v_e_975_, 2);
v_isSharedCheck_988_ = !lean_is_exclusive(v_e_975_);
if (v_isSharedCheck_988_ == 0)
{
v___x_981_ = v_e_975_;
v_isShared_982_ = v_isSharedCheck_988_;
goto v_resetjp_980_;
}
else
{
lean_inc(v_out_979_);
lean_inc(v_defs_978_);
lean_inc(v_tables_977_);
lean_dec(v_e_975_);
v___x_981_ = lean_box(0);
v_isShared_982_ = v_isSharedCheck_988_;
goto v_resetjp_980_;
}
v_resetjp_980_:
{
uint8_t v___x_983_; lean_object* v___x_984_; lean_object* v___x_986_; 
v___x_983_ = 0;
v___x_984_ = lean_byte_array_push(v_out_979_, v___x_983_);
if (v_isShared_982_ == 0)
{
lean_ctor_set(v___x_981_, 2, v___x_984_);
v___x_986_ = v___x_981_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v_tables_977_);
lean_ctor_set(v_reuseFailAlloc_987_, 1, v_defs_978_);
lean_ctor_set(v_reuseFailAlloc_987_, 2, v___x_984_);
v___x_986_ = v_reuseFailAlloc_987_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
return v___x_986_;
}
}
}
else
{
lean_object* v_val_989_; lean_object* v_tables_990_; lean_object* v_defs_991_; lean_object* v_out_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_1002_; 
v_val_989_ = lean_ctor_get(v_x_976_, 0);
v_tables_990_ = lean_ctor_get(v_e_975_, 0);
v_defs_991_ = lean_ctor_get(v_e_975_, 1);
v_out_992_ = lean_ctor_get(v_e_975_, 2);
v_isSharedCheck_1002_ = !lean_is_exclusive(v_e_975_);
if (v_isSharedCheck_1002_ == 0)
{
v___x_994_ = v_e_975_;
v_isShared_995_ = v_isSharedCheck_1002_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_out_992_);
lean_inc(v_defs_991_);
lean_inc(v_tables_990_);
lean_dec(v_e_975_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_1002_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_1000_; 
v___x_996_ = lean_unsigned_to_nat(1u);
v___x_997_ = lean_nat_add(v_val_989_, v___x_996_);
v___x_998_ = l_Lasm_UI_Encode_pushVar(v_out_992_, v___x_997_);
if (v_isShared_995_ == 0)
{
lean_ctor_set(v___x_994_, 2, v___x_998_);
v___x_1000_ = v___x_994_;
goto v_reusejp_999_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v_tables_990_);
lean_ctor_set(v_reuseFailAlloc_1001_, 1, v_defs_991_);
lean_ctor_set(v_reuseFailAlloc_1001_, 2, v___x_998_);
v___x_1000_ = v_reuseFailAlloc_1001_;
goto v_reusejp_999_;
}
v_reusejp_999_:
{
return v___x_1000_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_before___boxed(lean_object* v_e_1003_, lean_object* v_x_1004_){
_start:
{
lean_object* v_res_1005_; 
v_res_1005_ = l_Lasm_UI_Encode_Enc_before(v_e_1003_, v_x_1004_);
lean_dec(v_x_1004_);
return v_res_1005_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_op_spec__0(lean_object* v_x_1006_, lean_object* v_x_1007_){
_start:
{
if (lean_obj_tag(v_x_1007_) == 0)
{
return v_x_1006_;
}
else
{
lean_object* v_head_1008_; lean_object* v_tail_1009_; lean_object* v___x_1010_; 
v_head_1008_ = lean_ctor_get(v_x_1007_, 0);
lean_inc(v_head_1008_);
v_tail_1009_ = lean_ctor_get(v_x_1007_, 1);
lean_inc(v_tail_1009_);
lean_dec_ref_known(v_x_1007_, 2);
v___x_1010_ = l_Lasm_UI_Encode_Enc_attrOp(v_x_1006_, v_head_1008_);
v_x_1006_ = v___x_1010_;
v_x_1007_ = v_tail_1009_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_op___redArg(lean_object* v_parent_1012_, lean_object* v_e_1013_, lean_object* v_x_1014_){
_start:
{
switch(lean_obj_tag(v_x_1014_))
{
case 0:
{
lean_object* v_node_1015_; lean_object* v_before_1016_; lean_object* v_tables_1017_; lean_object* v_defs_1018_; lean_object* v_out_1019_; lean_object* v___x_1021_; uint8_t v_isShared_1022_; uint8_t v_isSharedCheck_1040_; 
v_node_1015_ = lean_ctor_get(v_x_1014_, 0);
lean_inc_ref(v_node_1015_);
v_before_1016_ = lean_ctor_get(v_x_1014_, 1);
lean_inc(v_before_1016_);
lean_dec_ref_known(v_x_1014_, 2);
v_tables_1017_ = lean_ctor_get(v_e_1013_, 0);
v_defs_1018_ = lean_ctor_get(v_e_1013_, 1);
v_out_1019_ = lean_ctor_get(v_e_1013_, 2);
v_isSharedCheck_1040_ = !lean_is_exclusive(v_e_1013_);
if (v_isSharedCheck_1040_ == 0)
{
v___x_1021_ = v_e_1013_;
v_isShared_1022_ = v_isSharedCheck_1040_;
goto v_resetjp_1020_;
}
else
{
lean_inc(v_out_1019_);
lean_inc(v_defs_1018_);
lean_inc(v_tables_1017_);
lean_dec(v_e_1013_);
v___x_1021_ = lean_box(0);
v_isShared_1022_ = v_isSharedCheck_1040_;
goto v_resetjp_1020_;
}
v_resetjp_1020_:
{
uint8_t v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_1023_ = 1;
v___x_1024_ = lean_byte_array_push(v_out_1019_, v___x_1023_);
v___x_1025_ = l_Lasm_UI_Encode_pushVar(v___x_1024_, v_parent_1012_);
if (lean_obj_tag(v_before_1016_) == 0)
{
uint8_t v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1029_; 
v___x_1026_ = 0;
v___x_1027_ = lean_byte_array_push(v___x_1025_, v___x_1026_);
if (v_isShared_1022_ == 0)
{
lean_ctor_set(v___x_1021_, 2, v___x_1027_);
v___x_1029_ = v___x_1021_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1031_; 
v_reuseFailAlloc_1031_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1031_, 0, v_tables_1017_);
lean_ctor_set(v_reuseFailAlloc_1031_, 1, v_defs_1018_);
lean_ctor_set(v_reuseFailAlloc_1031_, 2, v___x_1027_);
v___x_1029_ = v_reuseFailAlloc_1031_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
lean_object* v___x_1030_; 
v___x_1030_ = l_Lasm_UI_Encode_Enc_node___redArg(v___x_1029_, v_node_1015_);
return v___x_1030_;
}
}
else
{
lean_object* v_val_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1037_; 
v_val_1032_ = lean_ctor_get(v_before_1016_, 0);
lean_inc(v_val_1032_);
lean_dec_ref_known(v_before_1016_, 1);
v___x_1033_ = lean_unsigned_to_nat(1u);
v___x_1034_ = lean_nat_add(v_val_1032_, v___x_1033_);
lean_dec(v_val_1032_);
v___x_1035_ = l_Lasm_UI_Encode_pushVar(v___x_1025_, v___x_1034_);
if (v_isShared_1022_ == 0)
{
lean_ctor_set(v___x_1021_, 2, v___x_1035_);
v___x_1037_ = v___x_1021_;
goto v_reusejp_1036_;
}
else
{
lean_object* v_reuseFailAlloc_1039_; 
v_reuseFailAlloc_1039_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1039_, 0, v_tables_1017_);
lean_ctor_set(v_reuseFailAlloc_1039_, 1, v_defs_1018_);
lean_ctor_set(v_reuseFailAlloc_1039_, 2, v___x_1035_);
v___x_1037_ = v_reuseFailAlloc_1039_;
goto v_reusejp_1036_;
}
v_reusejp_1036_:
{
lean_object* v___x_1038_; 
v___x_1038_ = l_Lasm_UI_Encode_Enc_node___redArg(v___x_1037_, v_node_1015_);
return v___x_1038_;
}
}
}
}
case 1:
{
lean_object* v_id_1041_; lean_object* v_before_1042_; lean_object* v_tables_1043_; lean_object* v_defs_1044_; lean_object* v_out_1045_; lean_object* v___x_1047_; uint8_t v_isShared_1048_; uint8_t v_isSharedCheck_1065_; 
v_id_1041_ = lean_ctor_get(v_x_1014_, 0);
lean_inc(v_id_1041_);
v_before_1042_ = lean_ctor_get(v_x_1014_, 1);
lean_inc(v_before_1042_);
lean_dec_ref_known(v_x_1014_, 2);
v_tables_1043_ = lean_ctor_get(v_e_1013_, 0);
v_defs_1044_ = lean_ctor_get(v_e_1013_, 1);
v_out_1045_ = lean_ctor_get(v_e_1013_, 2);
v_isSharedCheck_1065_ = !lean_is_exclusive(v_e_1013_);
if (v_isSharedCheck_1065_ == 0)
{
v___x_1047_ = v_e_1013_;
v_isShared_1048_ = v_isSharedCheck_1065_;
goto v_resetjp_1046_;
}
else
{
lean_inc(v_out_1045_);
lean_inc(v_defs_1044_);
lean_inc(v_tables_1043_);
lean_dec(v_e_1013_);
v___x_1047_ = lean_box(0);
v_isShared_1048_ = v_isSharedCheck_1065_;
goto v_resetjp_1046_;
}
v_resetjp_1046_:
{
uint8_t v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; 
v___x_1049_ = 2;
v___x_1050_ = lean_byte_array_push(v_out_1045_, v___x_1049_);
v___x_1051_ = l_Lasm_UI_Encode_pushVar(v___x_1050_, v_parent_1012_);
v___x_1052_ = l_Lasm_UI_Encode_pushVar(v___x_1051_, v_id_1041_);
if (lean_obj_tag(v_before_1042_) == 0)
{
uint8_t v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1056_; 
v___x_1053_ = 0;
v___x_1054_ = lean_byte_array_push(v___x_1052_, v___x_1053_);
if (v_isShared_1048_ == 0)
{
lean_ctor_set(v___x_1047_, 2, v___x_1054_);
v___x_1056_ = v___x_1047_;
goto v_reusejp_1055_;
}
else
{
lean_object* v_reuseFailAlloc_1057_; 
v_reuseFailAlloc_1057_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1057_, 0, v_tables_1043_);
lean_ctor_set(v_reuseFailAlloc_1057_, 1, v_defs_1044_);
lean_ctor_set(v_reuseFailAlloc_1057_, 2, v___x_1054_);
v___x_1056_ = v_reuseFailAlloc_1057_;
goto v_reusejp_1055_;
}
v_reusejp_1055_:
{
return v___x_1056_;
}
}
else
{
lean_object* v_val_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1063_; 
v_val_1058_ = lean_ctor_get(v_before_1042_, 0);
lean_inc(v_val_1058_);
lean_dec_ref_known(v_before_1042_, 1);
v___x_1059_ = lean_unsigned_to_nat(1u);
v___x_1060_ = lean_nat_add(v_val_1058_, v___x_1059_);
lean_dec(v_val_1058_);
v___x_1061_ = l_Lasm_UI_Encode_pushVar(v___x_1052_, v___x_1060_);
if (v_isShared_1048_ == 0)
{
lean_ctor_set(v___x_1047_, 2, v___x_1061_);
v___x_1063_ = v___x_1047_;
goto v_reusejp_1062_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v_tables_1043_);
lean_ctor_set(v_reuseFailAlloc_1064_, 1, v_defs_1044_);
lean_ctor_set(v_reuseFailAlloc_1064_, 2, v___x_1061_);
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
case 2:
{
lean_object* v_id_1066_; lean_object* v_tables_1067_; lean_object* v_defs_1068_; lean_object* v_out_1069_; lean_object* v___x_1071_; uint8_t v_isShared_1072_; uint8_t v_isSharedCheck_1079_; 
lean_dec(v_parent_1012_);
v_id_1066_ = lean_ctor_get(v_x_1014_, 0);
lean_inc(v_id_1066_);
lean_dec_ref_known(v_x_1014_, 1);
v_tables_1067_ = lean_ctor_get(v_e_1013_, 0);
v_defs_1068_ = lean_ctor_get(v_e_1013_, 1);
v_out_1069_ = lean_ctor_get(v_e_1013_, 2);
v_isSharedCheck_1079_ = !lean_is_exclusive(v_e_1013_);
if (v_isSharedCheck_1079_ == 0)
{
v___x_1071_ = v_e_1013_;
v_isShared_1072_ = v_isSharedCheck_1079_;
goto v_resetjp_1070_;
}
else
{
lean_inc(v_out_1069_);
lean_inc(v_defs_1068_);
lean_inc(v_tables_1067_);
lean_dec(v_e_1013_);
v___x_1071_ = lean_box(0);
v_isShared_1072_ = v_isSharedCheck_1079_;
goto v_resetjp_1070_;
}
v_resetjp_1070_:
{
uint8_t v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1077_; 
v___x_1073_ = 3;
v___x_1074_ = lean_byte_array_push(v_out_1069_, v___x_1073_);
v___x_1075_ = l_Lasm_UI_Encode_pushVar(v___x_1074_, v_id_1066_);
if (v_isShared_1072_ == 0)
{
lean_ctor_set(v___x_1071_, 2, v___x_1075_);
v___x_1077_ = v___x_1071_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v_tables_1067_);
lean_ctor_set(v_reuseFailAlloc_1078_, 1, v_defs_1068_);
lean_ctor_set(v_reuseFailAlloc_1078_, 2, v___x_1075_);
v___x_1077_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
return v___x_1077_;
}
}
}
case 3:
{
lean_object* v_tables_1080_; lean_object* v_defs_1081_; lean_object* v_out_1082_; lean_object* v___x_1084_; uint8_t v_isShared_1085_; uint8_t v_isSharedCheck_1092_; 
v_tables_1080_ = lean_ctor_get(v_e_1013_, 0);
v_defs_1081_ = lean_ctor_get(v_e_1013_, 1);
v_out_1082_ = lean_ctor_get(v_e_1013_, 2);
v_isSharedCheck_1092_ = !lean_is_exclusive(v_e_1013_);
if (v_isSharedCheck_1092_ == 0)
{
v___x_1084_ = v_e_1013_;
v_isShared_1085_ = v_isSharedCheck_1092_;
goto v_resetjp_1083_;
}
else
{
lean_inc(v_out_1082_);
lean_inc(v_defs_1081_);
lean_inc(v_tables_1080_);
lean_dec(v_e_1013_);
v___x_1084_ = lean_box(0);
v_isShared_1085_ = v_isSharedCheck_1092_;
goto v_resetjp_1083_;
}
v_resetjp_1083_:
{
uint8_t v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1090_; 
v___x_1086_ = 4;
v___x_1087_ = lean_byte_array_push(v_out_1082_, v___x_1086_);
v___x_1088_ = l_Lasm_UI_Encode_pushVar(v___x_1087_, v_parent_1012_);
if (v_isShared_1085_ == 0)
{
lean_ctor_set(v___x_1084_, 2, v___x_1088_);
v___x_1090_ = v___x_1084_;
goto v_reusejp_1089_;
}
else
{
lean_object* v_reuseFailAlloc_1091_; 
v_reuseFailAlloc_1091_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1091_, 0, v_tables_1080_);
lean_ctor_set(v_reuseFailAlloc_1091_, 1, v_defs_1081_);
lean_ctor_set(v_reuseFailAlloc_1091_, 2, v___x_1088_);
v___x_1090_ = v_reuseFailAlloc_1091_;
goto v_reusejp_1089_;
}
v_reusejp_1089_:
{
return v___x_1090_;
}
}
}
case 4:
{
lean_object* v_id_1093_; lean_object* v_s_1094_; lean_object* v_tables_1095_; lean_object* v_defs_1096_; lean_object* v_out_1097_; lean_object* v___x_1099_; uint8_t v_isShared_1100_; uint8_t v_isSharedCheck_1115_; 
lean_dec(v_parent_1012_);
v_id_1093_ = lean_ctor_get(v_x_1014_, 0);
lean_inc(v_id_1093_);
v_s_1094_ = lean_ctor_get(v_x_1014_, 1);
lean_inc_ref(v_s_1094_);
lean_dec_ref_known(v_x_1014_, 2);
v_tables_1095_ = lean_ctor_get(v_e_1013_, 0);
v_defs_1096_ = lean_ctor_get(v_e_1013_, 1);
v_out_1097_ = lean_ctor_get(v_e_1013_, 2);
v_isSharedCheck_1115_ = !lean_is_exclusive(v_e_1013_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1099_ = v_e_1013_;
v_isShared_1100_ = v_isSharedCheck_1115_;
goto v_resetjp_1098_;
}
else
{
lean_inc(v_out_1097_);
lean_inc(v_defs_1096_);
lean_inc(v_tables_1095_);
lean_dec(v_e_1013_);
v___x_1099_ = lean_box(0);
v_isShared_1100_ = v_isSharedCheck_1115_;
goto v_resetjp_1098_;
}
v_resetjp_1098_:
{
uint8_t v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; uint8_t v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1113_; 
v___x_1101_ = 5;
v___x_1102_ = lean_byte_array_push(v_out_1097_, v___x_1101_);
v___x_1103_ = l_Lasm_UI_Encode_pushVar(v___x_1102_, v_id_1093_);
v___x_1104_ = lean_string_utf8_byte_size(v_s_1094_);
v___x_1105_ = l_Lasm_UI_Encode_pushVar(v___x_1103_, v___x_1104_);
v___x_1106_ = lean_string_to_utf8(v_s_1094_);
lean_dec_ref(v_s_1094_);
v___x_1107_ = lean_unsigned_to_nat(0u);
v___x_1108_ = lean_byte_array_size(v___x_1105_);
v___x_1109_ = lean_byte_array_size(v___x_1106_);
v___x_1110_ = 0;
v___x_1111_ = lean_byte_array_copy_slice(v___x_1106_, v___x_1107_, v___x_1105_, v___x_1108_, v___x_1109_, v___x_1110_);
lean_dec_ref(v___x_1106_);
if (v_isShared_1100_ == 0)
{
lean_ctor_set(v___x_1099_, 2, v___x_1111_);
v___x_1113_ = v___x_1099_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v_tables_1095_);
lean_ctor_set(v_reuseFailAlloc_1114_, 1, v_defs_1096_);
lean_ctor_set(v_reuseFailAlloc_1114_, 2, v___x_1111_);
v___x_1113_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
return v___x_1113_;
}
}
}
case 5:
{
lean_object* v_id_1116_; lean_object* v_ops_1117_; lean_object* v_tables_1118_; lean_object* v_defs_1119_; lean_object* v_out_1120_; lean_object* v___x_1122_; uint8_t v_isShared_1123_; uint8_t v_isSharedCheck_1133_; 
lean_dec(v_parent_1012_);
v_id_1116_ = lean_ctor_get(v_x_1014_, 0);
lean_inc(v_id_1116_);
v_ops_1117_ = lean_ctor_get(v_x_1014_, 1);
lean_inc(v_ops_1117_);
lean_dec_ref_known(v_x_1014_, 2);
v_tables_1118_ = lean_ctor_get(v_e_1013_, 0);
v_defs_1119_ = lean_ctor_get(v_e_1013_, 1);
v_out_1120_ = lean_ctor_get(v_e_1013_, 2);
v_isSharedCheck_1133_ = !lean_is_exclusive(v_e_1013_);
if (v_isSharedCheck_1133_ == 0)
{
v___x_1122_ = v_e_1013_;
v_isShared_1123_ = v_isSharedCheck_1133_;
goto v_resetjp_1121_;
}
else
{
lean_inc(v_out_1120_);
lean_inc(v_defs_1119_);
lean_inc(v_tables_1118_);
lean_dec(v_e_1013_);
v___x_1122_ = lean_box(0);
v_isShared_1123_ = v_isSharedCheck_1133_;
goto v_resetjp_1121_;
}
v_resetjp_1121_:
{
uint8_t v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1130_; 
v___x_1124_ = 6;
v___x_1125_ = lean_byte_array_push(v_out_1120_, v___x_1124_);
v___x_1126_ = l_Lasm_UI_Encode_pushVar(v___x_1125_, v_id_1116_);
v___x_1127_ = l_List_lengthTR___redArg(v_ops_1117_);
v___x_1128_ = l_Lasm_UI_Encode_pushVar(v___x_1126_, v___x_1127_);
if (v_isShared_1123_ == 0)
{
lean_ctor_set(v___x_1122_, 2, v___x_1128_);
v___x_1130_ = v___x_1122_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v_tables_1118_);
lean_ctor_set(v_reuseFailAlloc_1132_, 1, v_defs_1119_);
lean_ctor_set(v_reuseFailAlloc_1132_, 2, v___x_1128_);
v___x_1130_ = v_reuseFailAlloc_1132_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
lean_object* v___x_1131_; 
v___x_1131_ = l_List_foldl___at___00Lasm_UI_Encode_Enc_op_spec__0(v___x_1130_, v_ops_1117_);
return v___x_1131_;
}
}
}
default: 
{
lean_object* v_id_1134_; lean_object* v_ops_1135_; lean_object* v___x_1136_; 
lean_dec(v_parent_1012_);
v_id_1134_ = lean_ctor_get(v_x_1014_, 0);
lean_inc(v_id_1134_);
v_ops_1135_ = lean_ctor_get(v_x_1014_, 1);
lean_inc(v_ops_1135_);
lean_dec_ref_known(v_x_1014_, 2);
v___x_1136_ = l_Lasm_UI_Encode_Enc_opList___redArg(v_id_1134_, v_e_1013_, v_ops_1135_);
return v___x_1136_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_opList___redArg(lean_object* v_parent_1137_, lean_object* v_e_1138_, lean_object* v_x_1139_){
_start:
{
if (lean_obj_tag(v_x_1139_) == 0)
{
lean_dec(v_parent_1137_);
return v_e_1138_;
}
else
{
lean_object* v_head_1140_; lean_object* v_tail_1141_; lean_object* v___x_1142_; 
v_head_1140_ = lean_ctor_get(v_x_1139_, 0);
lean_inc(v_head_1140_);
v_tail_1141_ = lean_ctor_get(v_x_1139_, 1);
lean_inc(v_tail_1141_);
lean_dec_ref_known(v_x_1139_, 2);
lean_inc(v_parent_1137_);
v___x_1142_ = l_Lasm_UI_Encode_Enc_op___redArg(v_parent_1137_, v_e_1138_, v_head_1140_);
v_e_1138_ = v___x_1142_;
v_x_1139_ = v_tail_1141_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_opList(lean_object* v_Msg_1144_, lean_object* v_parent_1145_, lean_object* v_e_1146_, lean_object* v_x_1147_){
_start:
{
lean_object* v___x_1148_; 
v___x_1148_ = l_Lasm_UI_Encode_Enc_opList___redArg(v_parent_1145_, v_e_1146_, v_x_1147_);
return v___x_1148_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_op(lean_object* v_Msg_1149_, lean_object* v_parent_1150_, lean_object* v_e_1151_, lean_object* v_x_1152_){
_start:
{
lean_object* v___x_1153_; 
v___x_1153_ = l_Lasm_UI_Encode_Enc_op___redArg(v_parent_1150_, v_e_1151_, v_x_1152_);
return v___x_1153_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___redArg(lean_object* v_root_1154_, lean_object* v_as_1155_, size_t v_i_1156_, size_t v_stop_1157_, lean_object* v_b_1158_){
_start:
{
uint8_t v___x_1159_; 
v___x_1159_ = lean_usize_dec_eq(v_i_1156_, v_stop_1157_);
if (v___x_1159_ == 0)
{
lean_object* v___x_1160_; lean_object* v___x_1161_; size_t v___x_1162_; size_t v___x_1163_; 
v___x_1160_ = lean_array_uget_borrowed(v_as_1155_, v_i_1156_);
lean_inc(v___x_1160_);
lean_inc(v_root_1154_);
v___x_1161_ = l_Lasm_UI_Encode_Enc_op___redArg(v_root_1154_, v_b_1158_, v___x_1160_);
v___x_1162_ = ((size_t)1ULL);
v___x_1163_ = lean_usize_add(v_i_1156_, v___x_1162_);
v_i_1156_ = v___x_1163_;
v_b_1158_ = v___x_1161_;
goto _start;
}
else
{
lean_dec(v_root_1154_);
return v_b_1158_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___redArg___boxed(lean_object* v_root_1165_, lean_object* v_as_1166_, lean_object* v_i_1167_, lean_object* v_stop_1168_, lean_object* v_b_1169_){
_start:
{
size_t v_i_boxed_1170_; size_t v_stop_boxed_1171_; lean_object* v_res_1172_; 
v_i_boxed_1170_ = lean_unbox_usize(v_i_1167_);
lean_dec(v_i_1167_);
v_stop_boxed_1171_ = lean_unbox_usize(v_stop_1168_);
lean_dec(v_stop_1168_);
v_res_1172_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___redArg(v_root_1165_, v_as_1166_, v_i_boxed_1170_, v_stop_boxed_1171_, v_b_1169_);
lean_dec_ref(v_as_1166_);
return v_res_1172_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_frame___redArg(lean_object* v_t_1173_, lean_object* v_ops_1174_, lean_object* v_root_1175_){
_start:
{
lean_object* v_tables_1177_; lean_object* v_defs_1178_; lean_object* v_out_1179_; lean_object* v___y_1187_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; uint8_t v___x_1195_; 
v___x_1191_ = l_ByteArray_empty;
lean_inc_ref(v_t_1173_);
v___x_1192_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1192_, 0, v_t_1173_);
lean_ctor_set(v___x_1192_, 1, v___x_1191_);
lean_ctor_set(v___x_1192_, 2, v___x_1191_);
v___x_1193_ = lean_unsigned_to_nat(0u);
v___x_1194_ = lean_array_get_size(v_ops_1174_);
v___x_1195_ = lean_nat_dec_lt(v___x_1193_, v___x_1194_);
if (v___x_1195_ == 0)
{
lean_dec_ref_known(v___x_1192_, 3);
lean_dec(v_root_1175_);
v_tables_1177_ = v_t_1173_;
v_defs_1178_ = v___x_1191_;
v_out_1179_ = v___x_1191_;
goto v___jp_1176_;
}
else
{
uint8_t v___x_1196_; 
v___x_1196_ = lean_nat_dec_le(v___x_1194_, v___x_1194_);
if (v___x_1196_ == 0)
{
if (v___x_1195_ == 0)
{
lean_dec_ref_known(v___x_1192_, 3);
lean_dec(v_root_1175_);
v_tables_1177_ = v_t_1173_;
v_defs_1178_ = v___x_1191_;
v_out_1179_ = v___x_1191_;
goto v___jp_1176_;
}
else
{
size_t v___x_1197_; size_t v___x_1198_; lean_object* v___x_1199_; 
lean_dec_ref(v_t_1173_);
v___x_1197_ = ((size_t)0ULL);
v___x_1198_ = lean_usize_of_nat(v___x_1194_);
v___x_1199_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___redArg(v_root_1175_, v_ops_1174_, v___x_1197_, v___x_1198_, v___x_1192_);
v___y_1187_ = v___x_1199_;
goto v___jp_1186_;
}
}
else
{
size_t v___x_1200_; size_t v___x_1201_; lean_object* v___x_1202_; 
lean_dec_ref(v_t_1173_);
v___x_1200_ = ((size_t)0ULL);
v___x_1201_ = lean_usize_of_nat(v___x_1194_);
v___x_1202_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___redArg(v_root_1175_, v_ops_1174_, v___x_1200_, v___x_1201_, v___x_1192_);
v___y_1187_ = v___x_1202_;
goto v___jp_1186_;
}
}
v___jp_1176_:
{
lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; uint8_t v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; 
v___x_1180_ = lean_unsigned_to_nat(0u);
v___x_1181_ = lean_byte_array_size(v_defs_1178_);
v___x_1182_ = lean_byte_array_size(v_out_1179_);
v___x_1183_ = 0;
v___x_1184_ = lean_byte_array_copy_slice(v_out_1179_, v___x_1180_, v_defs_1178_, v___x_1181_, v___x_1182_, v___x_1183_);
lean_dec_ref(v_out_1179_);
v___x_1185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1185_, 0, v___x_1184_);
lean_ctor_set(v___x_1185_, 1, v_tables_1177_);
return v___x_1185_;
}
v___jp_1186_:
{
lean_object* v_tables_1188_; lean_object* v_defs_1189_; lean_object* v_out_1190_; 
v_tables_1188_ = lean_ctor_get(v___y_1187_, 0);
lean_inc_ref(v_tables_1188_);
v_defs_1189_ = lean_ctor_get(v___y_1187_, 1);
lean_inc_ref(v_defs_1189_);
v_out_1190_ = lean_ctor_get(v___y_1187_, 2);
lean_inc_ref(v_out_1190_);
lean_dec_ref(v___y_1187_);
v_tables_1177_ = v_tables_1188_;
v_defs_1178_ = v_defs_1189_;
v_out_1179_ = v_out_1190_;
goto v___jp_1176_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_frame___redArg___boxed(lean_object* v_t_1203_, lean_object* v_ops_1204_, lean_object* v_root_1205_){
_start:
{
lean_object* v_res_1206_; 
v_res_1206_ = l_Lasm_UI_Encode_frame___redArg(v_t_1203_, v_ops_1204_, v_root_1205_);
lean_dec_ref(v_ops_1204_);
return v_res_1206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_frame(lean_object* v_Msg_1207_, lean_object* v_t_1208_, lean_object* v_ops_1209_, lean_object* v_root_1210_){
_start:
{
lean_object* v___x_1211_; 
v___x_1211_ = l_Lasm_UI_Encode_frame___redArg(v_t_1208_, v_ops_1209_, v_root_1210_);
return v___x_1211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_frame___boxed(lean_object* v_Msg_1212_, lean_object* v_t_1213_, lean_object* v_ops_1214_, lean_object* v_root_1215_){
_start:
{
lean_object* v_res_1216_; 
v_res_1216_ = l_Lasm_UI_Encode_frame(v_Msg_1212_, v_t_1213_, v_ops_1214_, v_root_1215_);
lean_dec_ref(v_ops_1214_);
return v_res_1216_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0(lean_object* v_Msg_1217_, lean_object* v_root_1218_, lean_object* v_as_1219_, size_t v_i_1220_, size_t v_stop_1221_, lean_object* v_b_1222_){
_start:
{
lean_object* v___x_1223_; 
v___x_1223_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___redArg(v_root_1218_, v_as_1219_, v_i_1220_, v_stop_1221_, v_b_1222_);
return v___x_1223_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___boxed(lean_object* v_Msg_1224_, lean_object* v_root_1225_, lean_object* v_as_1226_, lean_object* v_i_1227_, lean_object* v_stop_1228_, lean_object* v_b_1229_){
_start:
{
size_t v_i_boxed_1230_; size_t v_stop_boxed_1231_; lean_object* v_res_1232_; 
v_i_boxed_1230_ = lean_unbox_usize(v_i_1227_);
lean_dec(v_i_1227_);
v_stop_boxed_1231_ = lean_unbox_usize(v_stop_1228_);
lean_dec(v_stop_1228_);
v_res_1232_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0(v_Msg_1224_, v_root_1225_, v_as_1226_, v_i_boxed_1230_, v_stop_boxed_1231_, v_b_1229_);
lean_dec_ref(v_as_1226_);
return v_res_1232_;
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
