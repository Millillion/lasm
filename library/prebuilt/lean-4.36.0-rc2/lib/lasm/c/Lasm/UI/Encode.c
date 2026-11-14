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
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
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
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_byte(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_byte___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_var(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_str(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_nameInto(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_name(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_value(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_decoder_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_decoder_spec__3(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6_spec__9___redArg(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6_spec__9(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_byte(lean_object* v_e_42_, uint8_t v_x_43_){
_start:
{
lean_object* v_tables_44_; lean_object* v_defs_45_; lean_object* v_out_46_; lean_object* v___x_48_; uint8_t v_isShared_49_; uint8_t v_isSharedCheck_54_; 
v_tables_44_ = lean_ctor_get(v_e_42_, 0);
v_defs_45_ = lean_ctor_get(v_e_42_, 1);
v_out_46_ = lean_ctor_get(v_e_42_, 2);
v_isSharedCheck_54_ = !lean_is_exclusive(v_e_42_);
if (v_isSharedCheck_54_ == 0)
{
v___x_48_ = v_e_42_;
v_isShared_49_ = v_isSharedCheck_54_;
goto v_resetjp_47_;
}
else
{
lean_inc(v_out_46_);
lean_inc(v_defs_45_);
lean_inc(v_tables_44_);
lean_dec(v_e_42_);
v___x_48_ = lean_box(0);
v_isShared_49_ = v_isSharedCheck_54_;
goto v_resetjp_47_;
}
v_resetjp_47_:
{
lean_object* v___x_50_; lean_object* v___x_52_; 
v___x_50_ = lean_byte_array_push(v_out_46_, v_x_43_);
if (v_isShared_49_ == 0)
{
lean_ctor_set(v___x_48_, 2, v___x_50_);
v___x_52_ = v___x_48_;
goto v_reusejp_51_;
}
else
{
lean_object* v_reuseFailAlloc_53_; 
v_reuseFailAlloc_53_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_53_, 0, v_tables_44_);
lean_ctor_set(v_reuseFailAlloc_53_, 1, v_defs_45_);
lean_ctor_set(v_reuseFailAlloc_53_, 2, v___x_50_);
v___x_52_ = v_reuseFailAlloc_53_;
goto v_reusejp_51_;
}
v_reusejp_51_:
{
return v___x_52_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_byte___boxed(lean_object* v_e_55_, lean_object* v_x_56_){
_start:
{
uint8_t v_x_boxed_57_; lean_object* v_res_58_; 
v_x_boxed_57_ = lean_unbox(v_x_56_);
v_res_58_ = l_Lasm_UI_Encode_Enc_byte(v_e_55_, v_x_boxed_57_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_var(lean_object* v_e_59_, lean_object* v_n_60_){
_start:
{
lean_object* v_tables_61_; lean_object* v_defs_62_; lean_object* v_out_63_; lean_object* v___x_65_; uint8_t v_isShared_66_; uint8_t v_isSharedCheck_71_; 
v_tables_61_ = lean_ctor_get(v_e_59_, 0);
v_defs_62_ = lean_ctor_get(v_e_59_, 1);
v_out_63_ = lean_ctor_get(v_e_59_, 2);
v_isSharedCheck_71_ = !lean_is_exclusive(v_e_59_);
if (v_isSharedCheck_71_ == 0)
{
v___x_65_ = v_e_59_;
v_isShared_66_ = v_isSharedCheck_71_;
goto v_resetjp_64_;
}
else
{
lean_inc(v_out_63_);
lean_inc(v_defs_62_);
lean_inc(v_tables_61_);
lean_dec(v_e_59_);
v___x_65_ = lean_box(0);
v_isShared_66_ = v_isSharedCheck_71_;
goto v_resetjp_64_;
}
v_resetjp_64_:
{
lean_object* v___x_67_; lean_object* v___x_69_; 
v___x_67_ = l_Lasm_UI_Encode_pushVar(v_out_63_, v_n_60_);
if (v_isShared_66_ == 0)
{
lean_ctor_set(v___x_65_, 2, v___x_67_);
v___x_69_ = v___x_65_;
goto v_reusejp_68_;
}
else
{
lean_object* v_reuseFailAlloc_70_; 
v_reuseFailAlloc_70_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_70_, 0, v_tables_61_);
lean_ctor_set(v_reuseFailAlloc_70_, 1, v_defs_62_);
lean_ctor_set(v_reuseFailAlloc_70_, 2, v___x_67_);
v___x_69_ = v_reuseFailAlloc_70_;
goto v_reusejp_68_;
}
v_reusejp_68_:
{
return v___x_69_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_str(lean_object* v_e_72_, lean_object* v_s_73_){
_start:
{
lean_object* v_tables_74_; lean_object* v_defs_75_; lean_object* v_out_76_; lean_object* v___x_78_; uint8_t v_isShared_79_; uint8_t v_isSharedCheck_91_; 
v_tables_74_ = lean_ctor_get(v_e_72_, 0);
v_defs_75_ = lean_ctor_get(v_e_72_, 1);
v_out_76_ = lean_ctor_get(v_e_72_, 2);
v_isSharedCheck_91_ = !lean_is_exclusive(v_e_72_);
if (v_isSharedCheck_91_ == 0)
{
v___x_78_ = v_e_72_;
v_isShared_79_ = v_isSharedCheck_91_;
goto v_resetjp_77_;
}
else
{
lean_inc(v_out_76_);
lean_inc(v_defs_75_);
lean_inc(v_tables_74_);
lean_dec(v_e_72_);
v___x_78_ = lean_box(0);
v_isShared_79_ = v_isSharedCheck_91_;
goto v_resetjp_77_;
}
v_resetjp_77_:
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; uint8_t v___x_86_; lean_object* v___x_87_; lean_object* v___x_89_; 
v___x_80_ = lean_string_utf8_byte_size(v_s_73_);
v___x_81_ = l_Lasm_UI_Encode_pushVar(v_out_76_, v___x_80_);
v___x_82_ = lean_string_to_utf8(v_s_73_);
v___x_83_ = lean_unsigned_to_nat(0u);
v___x_84_ = lean_byte_array_size(v___x_81_);
v___x_85_ = lean_byte_array_size(v___x_82_);
v___x_86_ = 0;
v___x_87_ = lean_byte_array_copy_slice(v___x_82_, v___x_83_, v___x_81_, v___x_84_, v___x_85_, v___x_86_);
lean_dec_ref(v___x_82_);
if (v_isShared_79_ == 0)
{
lean_ctor_set(v___x_78_, 2, v___x_87_);
v___x_89_ = v___x_78_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_90_; 
v_reuseFailAlloc_90_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_90_, 0, v_tables_74_);
lean_ctor_set(v_reuseFailAlloc_90_, 1, v_defs_75_);
lean_ctor_set(v_reuseFailAlloc_90_, 2, v___x_87_);
v___x_89_ = v_reuseFailAlloc_90_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
return v___x_89_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_nameInto(lean_object* v_t_92_, lean_object* v_b_93_, lean_object* v_s_94_){
_start:
{
lean_object* v_names_95_; lean_object* v_values_96_; lean_object* v_decoders_97_; lean_object* v___x_98_; 
v_names_95_ = lean_ctor_get(v_t_92_, 0);
lean_inc_ref(v_names_95_);
v_values_96_ = lean_ctor_get(v_t_92_, 1);
v_decoders_97_ = lean_ctor_get(v_t_92_, 2);
v___x_98_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5___redArg(v_names_95_, v_s_94_);
if (lean_obj_tag(v___x_98_) == 0)
{
lean_object* v_size_99_; lean_object* v___x_100_; uint8_t v___x_101_; 
v_size_99_ = lean_ctor_get(v_names_95_, 0);
v___x_100_ = lean_unsigned_to_nat(8192u);
v___x_101_ = lean_nat_dec_lt(v_size_99_, v___x_100_);
if (v___x_101_ == 0)
{
lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_117_; 
v_isSharedCheck_117_ = !lean_is_exclusive(v_names_95_);
if (v_isSharedCheck_117_ == 0)
{
lean_object* v_unused_118_; lean_object* v_unused_119_; 
v_unused_118_ = lean_ctor_get(v_names_95_, 1);
lean_dec(v_unused_118_);
v_unused_119_ = lean_ctor_get(v_names_95_, 0);
lean_dec(v_unused_119_);
v___x_103_ = v_names_95_;
v_isShared_104_ = v_isSharedCheck_117_;
goto v_resetjp_102_;
}
else
{
lean_dec(v_names_95_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_117_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
uint8_t v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_115_; 
v___x_105_ = 1;
v___x_106_ = lean_byte_array_push(v_b_93_, v___x_105_);
v___x_107_ = lean_string_utf8_byte_size(v_s_94_);
v___x_108_ = l_Lasm_UI_Encode_pushVar(v___x_106_, v___x_107_);
v___x_109_ = lean_string_to_utf8(v_s_94_);
v___x_110_ = lean_unsigned_to_nat(0u);
v___x_111_ = lean_byte_array_size(v___x_108_);
v___x_112_ = lean_byte_array_size(v___x_109_);
v___x_113_ = lean_byte_array_copy_slice(v___x_109_, v___x_110_, v___x_108_, v___x_111_, v___x_112_, v___x_101_);
lean_dec_ref(v___x_109_);
if (v_isShared_104_ == 0)
{
lean_ctor_set(v___x_103_, 1, v___x_113_);
lean_ctor_set(v___x_103_, 0, v_t_92_);
v___x_115_ = v___x_103_;
goto v_reusejp_114_;
}
else
{
lean_object* v_reuseFailAlloc_116_; 
v_reuseFailAlloc_116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_116_, 0, v_t_92_);
lean_ctor_set(v_reuseFailAlloc_116_, 1, v___x_113_);
v___x_115_ = v_reuseFailAlloc_116_;
goto v_reusejp_114_;
}
v_reusejp_114_:
{
return v___x_115_;
}
}
}
else
{
lean_object* v___x_121_; uint8_t v_isShared_122_; uint8_t v_isSharedCheck_138_; 
lean_inc(v_size_99_);
lean_inc_ref(v_decoders_97_);
lean_inc_ref(v_values_96_);
v_isSharedCheck_138_ = !lean_is_exclusive(v_t_92_);
if (v_isSharedCheck_138_ == 0)
{
lean_object* v_unused_139_; lean_object* v_unused_140_; lean_object* v_unused_141_; 
v_unused_139_ = lean_ctor_get(v_t_92_, 2);
lean_dec(v_unused_139_);
v_unused_140_ = lean_ctor_get(v_t_92_, 1);
lean_dec(v_unused_140_);
v_unused_141_ = lean_ctor_get(v_t_92_, 0);
lean_dec(v_unused_141_);
v___x_121_ = v_t_92_;
v_isShared_122_ = v_isSharedCheck_138_;
goto v_resetjp_120_;
}
else
{
lean_dec(v_t_92_);
v___x_121_ = lean_box(0);
v_isShared_122_ = v_isSharedCheck_138_;
goto v_resetjp_120_;
}
v_resetjp_120_:
{
lean_object* v___x_123_; lean_object* v___x_125_; 
lean_inc_ref(v_s_94_);
v___x_123_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0___redArg(v_names_95_, v_s_94_, v_size_99_);
if (v_isShared_122_ == 0)
{
lean_ctor_set(v___x_121_, 0, v___x_123_);
v___x_125_ = v___x_121_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v___x_123_);
lean_ctor_set(v_reuseFailAlloc_137_, 1, v_values_96_);
lean_ctor_set(v_reuseFailAlloc_137_, 2, v_decoders_97_);
v___x_125_ = v_reuseFailAlloc_137_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
uint8_t v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; uint8_t v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_126_ = 0;
v___x_127_ = lean_byte_array_push(v_b_93_, v___x_126_);
v___x_128_ = lean_string_utf8_byte_size(v_s_94_);
v___x_129_ = l_Lasm_UI_Encode_pushVar(v___x_127_, v___x_128_);
v___x_130_ = lean_string_to_utf8(v_s_94_);
v___x_131_ = lean_unsigned_to_nat(0u);
v___x_132_ = lean_byte_array_size(v___x_129_);
v___x_133_ = lean_byte_array_size(v___x_130_);
v___x_134_ = 0;
v___x_135_ = lean_byte_array_copy_slice(v___x_130_, v___x_131_, v___x_129_, v___x_132_, v___x_133_, v___x_134_);
lean_dec_ref(v___x_130_);
v___x_136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_136_, 0, v___x_125_);
lean_ctor_set(v___x_136_, 1, v___x_135_);
return v___x_136_;
}
}
}
}
else
{
lean_object* v_val_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
lean_dec_ref(v_names_95_);
lean_dec_ref(v_s_94_);
v_val_142_ = lean_ctor_get(v___x_98_, 0);
lean_inc(v_val_142_);
lean_dec_ref_known(v___x_98_, 1);
v___x_143_ = lean_unsigned_to_nat(2u);
v___x_144_ = lean_nat_add(v_val_142_, v___x_143_);
lean_dec(v_val_142_);
v___x_145_ = l_Lasm_UI_Encode_pushVar(v_b_93_, v___x_144_);
v___x_146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_146_, 0, v_t_92_);
lean_ctor_set(v___x_146_, 1, v___x_145_);
return v___x_146_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_name(lean_object* v_e_147_, lean_object* v_s_148_){
_start:
{
lean_object* v_tables_149_; lean_object* v_defs_150_; lean_object* v_out_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_161_; 
v_tables_149_ = lean_ctor_get(v_e_147_, 0);
v_defs_150_ = lean_ctor_get(v_e_147_, 1);
v_out_151_ = lean_ctor_get(v_e_147_, 2);
v_isSharedCheck_161_ = !lean_is_exclusive(v_e_147_);
if (v_isSharedCheck_161_ == 0)
{
v___x_153_ = v_e_147_;
v_isShared_154_ = v_isSharedCheck_161_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_out_151_);
lean_inc(v_defs_150_);
lean_inc(v_tables_149_);
lean_dec(v_e_147_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_161_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
lean_object* v___x_155_; lean_object* v_fst_156_; lean_object* v_snd_157_; lean_object* v___x_159_; 
v___x_155_ = l_Lasm_UI_Encode_Enc_nameInto(v_tables_149_, v_out_151_, v_s_148_);
v_fst_156_ = lean_ctor_get(v___x_155_, 0);
lean_inc(v_fst_156_);
v_snd_157_ = lean_ctor_get(v___x_155_, 1);
lean_inc(v_snd_157_);
lean_dec_ref(v___x_155_);
if (v_isShared_154_ == 0)
{
lean_ctor_set(v___x_153_, 2, v_snd_157_);
lean_ctor_set(v___x_153_, 0, v_fst_156_);
v___x_159_ = v___x_153_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v_fst_156_);
lean_ctor_set(v_reuseFailAlloc_160_, 1, v_defs_150_);
lean_ctor_set(v_reuseFailAlloc_160_, 2, v_snd_157_);
v___x_159_ = v_reuseFailAlloc_160_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
return v___x_159_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_value(lean_object* v_e_162_, lean_object* v_s_163_){
_start:
{
lean_object* v_tables_164_; lean_object* v_defs_165_; lean_object* v_out_166_; lean_object* v___x_168_; uint8_t v_isShared_169_; uint8_t v_isSharedCheck_220_; 
v_tables_164_ = lean_ctor_get(v_e_162_, 0);
v_defs_165_ = lean_ctor_get(v_e_162_, 1);
v_out_166_ = lean_ctor_get(v_e_162_, 2);
v_isSharedCheck_220_ = !lean_is_exclusive(v_e_162_);
if (v_isSharedCheck_220_ == 0)
{
v___x_168_ = v_e_162_;
v_isShared_169_ = v_isSharedCheck_220_;
goto v_resetjp_167_;
}
else
{
lean_inc(v_out_166_);
lean_inc(v_defs_165_);
lean_inc(v_tables_164_);
lean_dec(v_e_162_);
v___x_168_ = lean_box(0);
v_isShared_169_ = v_isSharedCheck_220_;
goto v_resetjp_167_;
}
v_resetjp_167_:
{
uint8_t v___y_171_; lean_object* v_names_184_; lean_object* v_values_185_; lean_object* v_decoders_186_; lean_object* v___x_187_; 
v_names_184_ = lean_ctor_get(v_tables_164_, 0);
v_values_185_ = lean_ctor_get(v_tables_164_, 1);
v_decoders_186_ = lean_ctor_get(v_tables_164_, 2);
v___x_187_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_twoEnded___at___00Lasm_UI_prefixPhase___at___00Lasm_UI_diffChildren___at___00Lasm_UI_diffNode_spec__0_spec__0_spec__3_spec__5___redArg(v_values_185_, v_s_163_);
if (lean_obj_tag(v___x_187_) == 0)
{
lean_object* v___x_188_; lean_object* v___x_189_; uint8_t v___x_190_; 
v___x_188_ = lean_string_utf8_byte_size(v_s_163_);
v___x_189_ = lean_unsigned_to_nat(40u);
v___x_190_ = lean_nat_dec_le(v___x_188_, v___x_189_);
if (v___x_190_ == 0)
{
v___y_171_ = v___x_190_;
goto v___jp_170_;
}
else
{
lean_object* v_size_191_; lean_object* v___x_192_; uint8_t v___x_193_; 
v_size_191_ = lean_ctor_get(v_values_185_, 0);
v___x_192_ = lean_unsigned_to_nat(4096u);
v___x_193_ = lean_nat_dec_lt(v_size_191_, v___x_192_);
if (v___x_193_ == 0)
{
v___y_171_ = v___x_193_;
goto v___jp_170_;
}
else
{
lean_object* v___x_195_; uint8_t v_isShared_196_; uint8_t v_isSharedCheck_211_; 
lean_inc(v_size_191_);
lean_inc_ref(v_decoders_186_);
lean_inc_ref(v_values_185_);
lean_inc_ref(v_names_184_);
lean_del_object(v___x_168_);
v_isSharedCheck_211_ = !lean_is_exclusive(v_tables_164_);
if (v_isSharedCheck_211_ == 0)
{
lean_object* v_unused_212_; lean_object* v_unused_213_; lean_object* v_unused_214_; 
v_unused_212_ = lean_ctor_get(v_tables_164_, 2);
lean_dec(v_unused_212_);
v_unused_213_ = lean_ctor_get(v_tables_164_, 1);
lean_dec(v_unused_213_);
v_unused_214_ = lean_ctor_get(v_tables_164_, 0);
lean_dec(v_unused_214_);
v___x_195_ = v_tables_164_;
v_isShared_196_ = v_isSharedCheck_211_;
goto v_resetjp_194_;
}
else
{
lean_dec(v_tables_164_);
v___x_195_ = lean_box(0);
v_isShared_196_ = v_isSharedCheck_211_;
goto v_resetjp_194_;
}
v_resetjp_194_:
{
lean_object* v___x_197_; lean_object* v___x_199_; 
lean_inc_ref(v_s_163_);
v___x_197_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_keyIndex_spec__0___redArg(v_values_185_, v_s_163_, v_size_191_);
if (v_isShared_196_ == 0)
{
lean_ctor_set(v___x_195_, 1, v___x_197_);
v___x_199_ = v___x_195_;
goto v_reusejp_198_;
}
else
{
lean_object* v_reuseFailAlloc_210_; 
v_reuseFailAlloc_210_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_210_, 0, v_names_184_);
lean_ctor_set(v_reuseFailAlloc_210_, 1, v___x_197_);
lean_ctor_set(v_reuseFailAlloc_210_, 2, v_decoders_186_);
v___x_199_ = v_reuseFailAlloc_210_;
goto v_reusejp_198_;
}
v_reusejp_198_:
{
uint8_t v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; uint8_t v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_200_ = 0;
v___x_201_ = lean_byte_array_push(v_out_166_, v___x_200_);
v___x_202_ = l_Lasm_UI_Encode_pushVar(v___x_201_, v___x_188_);
v___x_203_ = lean_string_to_utf8(v_s_163_);
v___x_204_ = lean_unsigned_to_nat(0u);
v___x_205_ = lean_byte_array_size(v___x_202_);
v___x_206_ = lean_byte_array_size(v___x_203_);
v___x_207_ = 0;
v___x_208_ = lean_byte_array_copy_slice(v___x_203_, v___x_204_, v___x_202_, v___x_205_, v___x_206_, v___x_207_);
lean_dec_ref(v___x_203_);
v___x_209_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_209_, 0, v___x_199_);
lean_ctor_set(v___x_209_, 1, v_defs_165_);
lean_ctor_set(v___x_209_, 2, v___x_208_);
return v___x_209_;
}
}
}
}
}
else
{
lean_object* v_val_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
lean_del_object(v___x_168_);
lean_dec_ref(v_s_163_);
v_val_215_ = lean_ctor_get(v___x_187_, 0);
lean_inc(v_val_215_);
lean_dec_ref_known(v___x_187_, 1);
v___x_216_ = lean_unsigned_to_nat(2u);
v___x_217_ = lean_nat_add(v_val_215_, v___x_216_);
lean_dec(v_val_215_);
v___x_218_ = l_Lasm_UI_Encode_pushVar(v_out_166_, v___x_217_);
v___x_219_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_219_, 0, v_tables_164_);
lean_ctor_set(v___x_219_, 1, v_defs_165_);
lean_ctor_set(v___x_219_, 2, v___x_218_);
return v___x_219_;
}
v___jp_170_:
{
uint8_t v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_182_; 
v___x_172_ = 1;
v___x_173_ = lean_byte_array_push(v_out_166_, v___x_172_);
v___x_174_ = lean_string_utf8_byte_size(v_s_163_);
v___x_175_ = l_Lasm_UI_Encode_pushVar(v___x_173_, v___x_174_);
v___x_176_ = lean_string_to_utf8(v_s_163_);
v___x_177_ = lean_unsigned_to_nat(0u);
v___x_178_ = lean_byte_array_size(v___x_175_);
v___x_179_ = lean_byte_array_size(v___x_176_);
v___x_180_ = lean_byte_array_copy_slice(v___x_176_, v___x_177_, v___x_175_, v___x_178_, v___x_179_, v___y_171_);
lean_dec_ref(v___x_176_);
if (v_isShared_169_ == 0)
{
lean_ctor_set(v___x_168_, 2, v___x_180_);
v___x_182_ = v___x_168_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v_tables_164_);
lean_ctor_set(v_reuseFailAlloc_183_, 1, v_defs_165_);
lean_ctor_set(v_reuseFailAlloc_183_, 2, v___x_180_);
v___x_182_ = v_reuseFailAlloc_183_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
return v___x_182_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_decoder_spec__0(lean_object* v_x_221_, lean_object* v_x_222_){
_start:
{
if (lean_obj_tag(v_x_222_) == 0)
{
return v_x_221_;
}
else
{
lean_object* v_head_223_; lean_object* v_tail_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; uint8_t v___x_231_; lean_object* v___x_232_; 
v_head_223_ = lean_ctor_get(v_x_222_, 0);
lean_inc(v_head_223_);
v_tail_224_ = lean_ctor_get(v_x_222_, 1);
lean_inc(v_tail_224_);
lean_dec_ref_known(v_x_222_, 2);
v___x_225_ = lean_string_utf8_byte_size(v_head_223_);
v___x_226_ = l_Lasm_UI_Encode_pushVar(v_x_221_, v___x_225_);
v___x_227_ = lean_string_to_utf8(v_head_223_);
v___x_228_ = lean_unsigned_to_nat(0u);
v___x_229_ = lean_byte_array_size(v___x_226_);
v___x_230_ = lean_byte_array_size(v___x_227_);
v___x_231_ = 0;
v___x_232_ = lean_byte_array_copy_slice(v___x_227_, v___x_228_, v___x_226_, v___x_229_, v___x_230_, v___x_231_);
lean_dec_ref(v___x_227_);
v_x_221_ = v___x_232_;
v_x_222_ = v_tail_224_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_decoder_spec__3(lean_object* v_x_234_, lean_object* v_x_235_){
_start:
{
if (lean_obj_tag(v_x_235_) == 0)
{
return v_x_234_;
}
else
{
lean_object* v_head_236_; lean_object* v_tail_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v_head_236_ = lean_ctor_get(v_x_235_, 0);
lean_inc(v_head_236_);
v_tail_237_ = lean_ctor_get(v_x_235_, 1);
lean_inc(v_tail_237_);
lean_dec_ref_known(v_x_235_, 2);
v___x_238_ = l_List_lengthTR___redArg(v_head_236_);
v___x_239_ = l_Lasm_UI_Encode_pushVar(v_x_234_, v___x_238_);
v___x_240_ = l_List_foldl___at___00Lasm_UI_Encode_Enc_decoder_spec__0(v___x_239_, v_head_236_);
v_x_234_ = v___x_240_;
v_x_235_ = v_tail_237_;
goto _start;
}
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2_spec__5(lean_object* v_x_242_, lean_object* v_x_243_){
_start:
{
if (lean_obj_tag(v_x_242_) == 0)
{
if (lean_obj_tag(v_x_243_) == 0)
{
uint8_t v___x_244_; 
v___x_244_ = 1;
return v___x_244_;
}
else
{
uint8_t v___x_245_; 
v___x_245_ = 0;
return v___x_245_;
}
}
else
{
if (lean_obj_tag(v_x_243_) == 0)
{
uint8_t v___x_246_; 
v___x_246_ = 0;
return v___x_246_;
}
else
{
lean_object* v_head_247_; lean_object* v_tail_248_; lean_object* v_head_249_; lean_object* v_tail_250_; uint8_t v___x_251_; 
v_head_247_ = lean_ctor_get(v_x_242_, 0);
v_tail_248_ = lean_ctor_get(v_x_242_, 1);
v_head_249_ = lean_ctor_get(v_x_243_, 0);
v_tail_250_ = lean_ctor_get(v_x_243_, 1);
v___x_251_ = lean_string_dec_eq(v_head_247_, v_head_249_);
if (v___x_251_ == 0)
{
return v___x_251_;
}
else
{
v_x_242_ = v_tail_248_;
v_x_243_ = v_tail_250_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2_spec__5___boxed(lean_object* v_x_253_, lean_object* v_x_254_){
_start:
{
uint8_t v_res_255_; lean_object* v_r_256_; 
v_res_255_ = l_List_beq___at___00List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2_spec__5(v_x_253_, v_x_254_);
lean_dec(v_x_254_);
lean_dec(v_x_253_);
v_r_256_ = lean_box(v_res_255_);
return v_r_256_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2(lean_object* v_x_257_, lean_object* v_x_258_){
_start:
{
if (lean_obj_tag(v_x_257_) == 0)
{
if (lean_obj_tag(v_x_258_) == 0)
{
uint8_t v___x_259_; 
v___x_259_ = 1;
return v___x_259_;
}
else
{
uint8_t v___x_260_; 
v___x_260_ = 0;
return v___x_260_;
}
}
else
{
if (lean_obj_tag(v_x_258_) == 0)
{
uint8_t v___x_261_; 
v___x_261_ = 0;
return v___x_261_;
}
else
{
lean_object* v_head_262_; lean_object* v_tail_263_; lean_object* v_head_264_; lean_object* v_tail_265_; uint8_t v___x_266_; 
v_head_262_ = lean_ctor_get(v_x_257_, 0);
v_tail_263_ = lean_ctor_get(v_x_257_, 1);
v_head_264_ = lean_ctor_get(v_x_258_, 0);
v_tail_265_ = lean_ctor_get(v_x_258_, 1);
v___x_266_ = l_List_beq___at___00List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2_spec__5(v_head_262_, v_head_264_);
if (v___x_266_ == 0)
{
return v___x_266_;
}
else
{
v_x_257_ = v_tail_263_;
v_x_258_ = v_tail_265_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2___boxed(lean_object* v_x_268_, lean_object* v_x_269_){
_start:
{
uint8_t v_res_270_; lean_object* v_r_271_; 
v_res_270_ = l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2(v_x_268_, v_x_269_);
lean_dec(v_x_269_);
lean_dec(v_x_268_);
v_r_271_ = lean_box(v_res_270_);
return v_r_271_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3___redArg(lean_object* v_a_272_, lean_object* v_x_273_){
_start:
{
if (lean_obj_tag(v_x_273_) == 0)
{
uint8_t v___x_274_; 
v___x_274_ = 0;
return v___x_274_;
}
else
{
lean_object* v_key_275_; lean_object* v_tail_276_; uint8_t v___x_277_; 
v_key_275_ = lean_ctor_get(v_x_273_, 0);
v_tail_276_ = lean_ctor_get(v_x_273_, 2);
v___x_277_ = l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2(v_key_275_, v_a_272_);
if (v___x_277_ == 0)
{
v_x_273_ = v_tail_276_;
goto _start;
}
else
{
return v___x_277_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3___redArg___boxed(lean_object* v_a_279_, lean_object* v_x_280_){
_start:
{
uint8_t v_res_281_; lean_object* v_r_282_; 
v_res_281_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3___redArg(v_a_279_, v_x_280_);
lean_dec(v_x_280_);
lean_dec(v_a_279_);
v_r_282_ = lean_box(v_res_281_);
return v_r_282_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__5___redArg(lean_object* v_a_283_, lean_object* v_b_284_, lean_object* v_x_285_){
_start:
{
if (lean_obj_tag(v_x_285_) == 0)
{
lean_dec(v_b_284_);
lean_dec(v_a_283_);
return v_x_285_;
}
else
{
lean_object* v_key_286_; lean_object* v_value_287_; lean_object* v_tail_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_300_; 
v_key_286_ = lean_ctor_get(v_x_285_, 0);
v_value_287_ = lean_ctor_get(v_x_285_, 1);
v_tail_288_ = lean_ctor_get(v_x_285_, 2);
v_isSharedCheck_300_ = !lean_is_exclusive(v_x_285_);
if (v_isSharedCheck_300_ == 0)
{
v___x_290_ = v_x_285_;
v_isShared_291_ = v_isSharedCheck_300_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_tail_288_);
lean_inc(v_value_287_);
lean_inc(v_key_286_);
lean_dec(v_x_285_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_300_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
uint8_t v___x_292_; 
v___x_292_ = l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2(v_key_286_, v_a_283_);
if (v___x_292_ == 0)
{
lean_object* v___x_293_; lean_object* v___x_295_; 
v___x_293_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__5___redArg(v_a_283_, v_b_284_, v_tail_288_);
if (v_isShared_291_ == 0)
{
lean_ctor_set(v___x_290_, 2, v___x_293_);
v___x_295_ = v___x_290_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v_key_286_);
lean_ctor_set(v_reuseFailAlloc_296_, 1, v_value_287_);
lean_ctor_set(v_reuseFailAlloc_296_, 2, v___x_293_);
v___x_295_ = v_reuseFailAlloc_296_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
return v___x_295_;
}
}
else
{
lean_object* v___x_298_; 
lean_dec(v_value_287_);
lean_dec(v_key_286_);
if (v_isShared_291_ == 0)
{
lean_ctor_set(v___x_290_, 1, v_b_284_);
lean_ctor_set(v___x_290_, 0, v_a_283_);
v___x_298_ = v___x_290_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v_a_283_);
lean_ctor_set(v_reuseFailAlloc_299_, 1, v_b_284_);
lean_ctor_set(v_reuseFailAlloc_299_, 2, v_tail_288_);
v___x_298_ = v_reuseFailAlloc_299_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
return v___x_298_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6_spec__9___redArg(lean_object* v_x_301_, lean_object* v_x_302_){
_start:
{
if (lean_obj_tag(v_x_302_) == 0)
{
return v_x_301_;
}
else
{
lean_object* v_key_303_; lean_object* v_value_304_; lean_object* v_tail_305_; lean_object* v___x_307_; uint8_t v_isShared_308_; uint8_t v_isSharedCheck_329_; 
v_key_303_ = lean_ctor_get(v_x_302_, 0);
v_value_304_ = lean_ctor_get(v_x_302_, 1);
v_tail_305_ = lean_ctor_get(v_x_302_, 2);
v_isSharedCheck_329_ = !lean_is_exclusive(v_x_302_);
if (v_isSharedCheck_329_ == 0)
{
v___x_307_ = v_x_302_;
v_isShared_308_ = v_isSharedCheck_329_;
goto v_resetjp_306_;
}
else
{
lean_inc(v_tail_305_);
lean_inc(v_value_304_);
lean_inc(v_key_303_);
lean_dec(v_x_302_);
v___x_307_ = lean_box(0);
v_isShared_308_ = v_isSharedCheck_329_;
goto v_resetjp_306_;
}
v_resetjp_306_:
{
lean_object* v___x_309_; uint64_t v___x_310_; uint64_t v___x_311_; uint64_t v___x_312_; uint64_t v___x_313_; uint64_t v_fold_314_; uint64_t v___x_315_; uint64_t v___x_316_; uint64_t v___x_317_; size_t v___x_318_; size_t v___x_319_; size_t v___x_320_; size_t v___x_321_; size_t v___x_322_; lean_object* v___x_323_; lean_object* v___x_325_; 
v___x_309_ = lean_array_get_size(v_x_301_);
v___x_310_ = 7ULL;
v___x_311_ = l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(v___x_310_, v_key_303_);
v___x_312_ = 32ULL;
v___x_313_ = lean_uint64_shift_right(v___x_311_, v___x_312_);
v_fold_314_ = lean_uint64_xor(v___x_311_, v___x_313_);
v___x_315_ = 16ULL;
v___x_316_ = lean_uint64_shift_right(v_fold_314_, v___x_315_);
v___x_317_ = lean_uint64_xor(v_fold_314_, v___x_316_);
v___x_318_ = lean_uint64_to_usize(v___x_317_);
v___x_319_ = lean_usize_of_nat(v___x_309_);
v___x_320_ = ((size_t)1ULL);
v___x_321_ = lean_usize_sub(v___x_319_, v___x_320_);
v___x_322_ = lean_usize_land(v___x_318_, v___x_321_);
v___x_323_ = lean_array_uget_borrowed(v_x_301_, v___x_322_);
lean_inc(v___x_323_);
if (v_isShared_308_ == 0)
{
lean_ctor_set(v___x_307_, 2, v___x_323_);
v___x_325_ = v___x_307_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_328_; 
v_reuseFailAlloc_328_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_328_, 0, v_key_303_);
lean_ctor_set(v_reuseFailAlloc_328_, 1, v_value_304_);
lean_ctor_set(v_reuseFailAlloc_328_, 2, v___x_323_);
v___x_325_ = v_reuseFailAlloc_328_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
lean_object* v___x_326_; 
v___x_326_ = lean_array_uset(v_x_301_, v___x_322_, v___x_325_);
v_x_301_ = v___x_326_;
v_x_302_ = v_tail_305_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6___redArg(lean_object* v_i_330_, lean_object* v_source_331_, lean_object* v_target_332_){
_start:
{
lean_object* v___x_333_; uint8_t v___x_334_; 
v___x_333_ = lean_array_get_size(v_source_331_);
v___x_334_ = lean_nat_dec_lt(v_i_330_, v___x_333_);
if (v___x_334_ == 0)
{
lean_dec_ref(v_source_331_);
lean_dec(v_i_330_);
return v_target_332_;
}
else
{
lean_object* v_es_335_; lean_object* v___x_336_; lean_object* v_source_337_; lean_object* v_target_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v_es_335_ = lean_array_fget(v_source_331_, v_i_330_);
v___x_336_ = lean_box(0);
v_source_337_ = lean_array_fset(v_source_331_, v_i_330_, v___x_336_);
v_target_338_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6_spec__9___redArg(v_target_332_, v_es_335_);
v___x_339_ = lean_unsigned_to_nat(1u);
v___x_340_ = lean_nat_add(v_i_330_, v___x_339_);
lean_dec(v_i_330_);
v_i_330_ = v___x_340_;
v_source_331_ = v_source_337_;
v_target_332_ = v_target_338_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4___redArg(lean_object* v_data_342_){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v_nbuckets_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_343_ = lean_array_get_size(v_data_342_);
v___x_344_ = lean_unsigned_to_nat(2u);
v_nbuckets_345_ = lean_nat_mul(v___x_343_, v___x_344_);
v___x_346_ = lean_unsigned_to_nat(0u);
v___x_347_ = lean_box(0);
v___x_348_ = lean_mk_array(v_nbuckets_345_, v___x_347_);
v___x_349_ = lean_array_propagate_mark(v_data_342_, v___x_348_);
v___x_350_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6___redArg(v___x_346_, v_data_342_, v___x_349_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2___redArg(lean_object* v_m_351_, lean_object* v_a_352_, lean_object* v_b_353_){
_start:
{
lean_object* v_size_354_; lean_object* v_buckets_355_; lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_399_; 
v_size_354_ = lean_ctor_get(v_m_351_, 0);
v_buckets_355_ = lean_ctor_get(v_m_351_, 1);
v_isSharedCheck_399_ = !lean_is_exclusive(v_m_351_);
if (v_isSharedCheck_399_ == 0)
{
v___x_357_ = v_m_351_;
v_isShared_358_ = v_isSharedCheck_399_;
goto v_resetjp_356_;
}
else
{
lean_inc(v_buckets_355_);
lean_inc(v_size_354_);
lean_dec(v_m_351_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_399_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
lean_object* v___x_359_; uint64_t v___x_360_; uint64_t v___x_361_; uint64_t v___x_362_; uint64_t v___x_363_; uint64_t v_fold_364_; uint64_t v___x_365_; uint64_t v___x_366_; uint64_t v___x_367_; size_t v___x_368_; size_t v___x_369_; size_t v___x_370_; size_t v___x_371_; size_t v___x_372_; lean_object* v_bkt_373_; uint8_t v___x_374_; 
v___x_359_ = lean_array_get_size(v_buckets_355_);
v___x_360_ = 7ULL;
v___x_361_ = l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(v___x_360_, v_a_352_);
v___x_362_ = 32ULL;
v___x_363_ = lean_uint64_shift_right(v___x_361_, v___x_362_);
v_fold_364_ = lean_uint64_xor(v___x_361_, v___x_363_);
v___x_365_ = 16ULL;
v___x_366_ = lean_uint64_shift_right(v_fold_364_, v___x_365_);
v___x_367_ = lean_uint64_xor(v_fold_364_, v___x_366_);
v___x_368_ = lean_uint64_to_usize(v___x_367_);
v___x_369_ = lean_usize_of_nat(v___x_359_);
v___x_370_ = ((size_t)1ULL);
v___x_371_ = lean_usize_sub(v___x_369_, v___x_370_);
v___x_372_ = lean_usize_land(v___x_368_, v___x_371_);
v_bkt_373_ = lean_array_uget_borrowed(v_buckets_355_, v___x_372_);
v___x_374_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3___redArg(v_a_352_, v_bkt_373_);
if (v___x_374_ == 0)
{
lean_object* v___x_375_; lean_object* v_size_x27_376_; lean_object* v___x_377_; lean_object* v_buckets_x27_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; uint8_t v___x_384_; 
v___x_375_ = lean_unsigned_to_nat(1u);
v_size_x27_376_ = lean_nat_add(v_size_354_, v___x_375_);
lean_dec(v_size_354_);
lean_inc(v_bkt_373_);
v___x_377_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_377_, 0, v_a_352_);
lean_ctor_set(v___x_377_, 1, v_b_353_);
lean_ctor_set(v___x_377_, 2, v_bkt_373_);
v_buckets_x27_378_ = lean_array_uset(v_buckets_355_, v___x_372_, v___x_377_);
v___x_379_ = lean_unsigned_to_nat(4u);
v___x_380_ = lean_nat_mul(v_size_x27_376_, v___x_379_);
v___x_381_ = lean_unsigned_to_nat(3u);
v___x_382_ = lean_nat_div(v___x_380_, v___x_381_);
lean_dec(v___x_380_);
v___x_383_ = lean_array_get_size(v_buckets_x27_378_);
v___x_384_ = lean_nat_dec_le(v___x_382_, v___x_383_);
lean_dec(v___x_382_);
if (v___x_384_ == 0)
{
lean_object* v_val_385_; lean_object* v___x_387_; 
v_val_385_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4___redArg(v_buckets_x27_378_);
if (v_isShared_358_ == 0)
{
lean_ctor_set(v___x_357_, 1, v_val_385_);
lean_ctor_set(v___x_357_, 0, v_size_x27_376_);
v___x_387_ = v___x_357_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v_size_x27_376_);
lean_ctor_set(v_reuseFailAlloc_388_, 1, v_val_385_);
v___x_387_ = v_reuseFailAlloc_388_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
return v___x_387_;
}
}
else
{
lean_object* v___x_390_; 
if (v_isShared_358_ == 0)
{
lean_ctor_set(v___x_357_, 1, v_buckets_x27_378_);
lean_ctor_set(v___x_357_, 0, v_size_x27_376_);
v___x_390_ = v___x_357_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v_size_x27_376_);
lean_ctor_set(v_reuseFailAlloc_391_, 1, v_buckets_x27_378_);
v___x_390_ = v_reuseFailAlloc_391_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
return v___x_390_;
}
}
}
else
{
lean_object* v___x_392_; lean_object* v_buckets_x27_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_397_; 
lean_inc(v_bkt_373_);
v___x_392_ = lean_box(0);
v_buckets_x27_393_ = lean_array_uset(v_buckets_355_, v___x_372_, v___x_392_);
v___x_394_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__5___redArg(v_a_352_, v_b_353_, v_bkt_373_);
v___x_395_ = lean_array_uset(v_buckets_x27_393_, v___x_372_, v___x_394_);
if (v_isShared_358_ == 0)
{
lean_ctor_set(v___x_357_, 1, v___x_395_);
v___x_397_ = v___x_357_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v_size_354_);
lean_ctor_set(v_reuseFailAlloc_398_, 1, v___x_395_);
v___x_397_ = v_reuseFailAlloc_398_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
return v___x_397_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1___redArg(lean_object* v_a_400_, lean_object* v_x_401_){
_start:
{
if (lean_obj_tag(v_x_401_) == 0)
{
lean_object* v___x_402_; 
v___x_402_ = lean_box(0);
return v___x_402_;
}
else
{
lean_object* v_key_403_; lean_object* v_value_404_; lean_object* v_tail_405_; uint8_t v___x_406_; 
v_key_403_ = lean_ctor_get(v_x_401_, 0);
v_value_404_ = lean_ctor_get(v_x_401_, 1);
v_tail_405_ = lean_ctor_get(v_x_401_, 2);
v___x_406_ = l_List_beq___at___00Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1_spec__2(v_key_403_, v_a_400_);
if (v___x_406_ == 0)
{
v_x_401_ = v_tail_405_;
goto _start;
}
else
{
lean_object* v___x_408_; 
lean_inc(v_value_404_);
v___x_408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_408_, 0, v_value_404_);
return v___x_408_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1___redArg___boxed(lean_object* v_a_409_, lean_object* v_x_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1___redArg(v_a_409_, v_x_410_);
lean_dec(v_x_410_);
lean_dec(v_a_409_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1___redArg(lean_object* v_m_412_, lean_object* v_a_413_){
_start:
{
lean_object* v_buckets_414_; lean_object* v___x_415_; uint64_t v___x_416_; uint64_t v___x_417_; uint64_t v___x_418_; uint64_t v___x_419_; uint64_t v_fold_420_; uint64_t v___x_421_; uint64_t v___x_422_; uint64_t v___x_423_; size_t v___x_424_; size_t v___x_425_; size_t v___x_426_; size_t v___x_427_; size_t v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; 
v_buckets_414_ = lean_ctor_get(v_m_412_, 1);
v___x_415_ = lean_array_get_size(v_buckets_414_);
v___x_416_ = 7ULL;
v___x_417_ = l_List_foldl___at___00Lasm_UI_instHashableListener_hash_spec__1(v___x_416_, v_a_413_);
v___x_418_ = 32ULL;
v___x_419_ = lean_uint64_shift_right(v___x_417_, v___x_418_);
v_fold_420_ = lean_uint64_xor(v___x_417_, v___x_419_);
v___x_421_ = 16ULL;
v___x_422_ = lean_uint64_shift_right(v_fold_420_, v___x_421_);
v___x_423_ = lean_uint64_xor(v_fold_420_, v___x_422_);
v___x_424_ = lean_uint64_to_usize(v___x_423_);
v___x_425_ = lean_usize_of_nat(v___x_415_);
v___x_426_ = ((size_t)1ULL);
v___x_427_ = lean_usize_sub(v___x_425_, v___x_426_);
v___x_428_ = lean_usize_land(v___x_424_, v___x_427_);
v___x_429_ = lean_array_uget_borrowed(v_buckets_414_, v___x_428_);
v___x_430_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1___redArg(v_a_413_, v___x_429_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1___redArg___boxed(lean_object* v_m_431_, lean_object* v_a_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1___redArg(v_m_431_, v_a_432_);
lean_dec(v_a_432_);
lean_dec_ref(v_m_431_);
return v_res_433_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_decoder(lean_object* v_e_434_, lean_object* v_paths_435_){
_start:
{
lean_object* v_tables_436_; lean_object* v_defs_437_; lean_object* v_out_438_; lean_object* v_names_439_; lean_object* v_values_440_; lean_object* v_decoders_441_; lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_470_; 
v_tables_436_ = lean_ctor_get(v_e_434_, 0);
lean_inc_ref(v_tables_436_);
v_defs_437_ = lean_ctor_get(v_e_434_, 1);
v_out_438_ = lean_ctor_get(v_e_434_, 2);
v_names_439_ = lean_ctor_get(v_tables_436_, 0);
v_values_440_ = lean_ctor_get(v_tables_436_, 1);
v_decoders_441_ = lean_ctor_get(v_tables_436_, 2);
v_isSharedCheck_470_ = !lean_is_exclusive(v_tables_436_);
if (v_isSharedCheck_470_ == 0)
{
v___x_443_ = v_tables_436_;
v_isShared_444_ = v_isSharedCheck_470_;
goto v_resetjp_442_;
}
else
{
lean_inc(v_decoders_441_);
lean_inc(v_values_440_);
lean_inc(v_names_439_);
lean_dec(v_tables_436_);
v___x_443_ = lean_box(0);
v_isShared_444_ = v_isSharedCheck_470_;
goto v_resetjp_442_;
}
v_resetjp_442_:
{
lean_object* v___x_445_; 
v___x_445_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1___redArg(v_decoders_441_, v_paths_435_);
if (lean_obj_tag(v___x_445_) == 0)
{
lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_464_; 
lean_inc_ref(v_out_438_);
lean_inc_ref(v_defs_437_);
v_isSharedCheck_464_ = !lean_is_exclusive(v_e_434_);
if (v_isSharedCheck_464_ == 0)
{
lean_object* v_unused_465_; lean_object* v_unused_466_; lean_object* v_unused_467_; 
v_unused_465_ = lean_ctor_get(v_e_434_, 2);
lean_dec(v_unused_465_);
v_unused_466_ = lean_ctor_get(v_e_434_, 1);
lean_dec(v_unused_466_);
v_unused_467_ = lean_ctor_get(v_e_434_, 0);
lean_dec(v_unused_467_);
v___x_447_ = v_e_434_;
v_isShared_448_ = v_isSharedCheck_464_;
goto v_resetjp_446_;
}
else
{
lean_dec(v_e_434_);
v___x_447_ = lean_box(0);
v_isShared_448_ = v_isSharedCheck_464_;
goto v_resetjp_446_;
}
v_resetjp_446_:
{
lean_object* v_size_449_; lean_object* v___x_450_; lean_object* v_t_452_; 
v_size_449_ = lean_ctor_get(v_decoders_441_, 0);
lean_inc_n(v_size_449_, 2);
lean_inc(v_paths_435_);
v___x_450_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2___redArg(v_decoders_441_, v_paths_435_, v_size_449_);
if (v_isShared_444_ == 0)
{
lean_ctor_set(v___x_443_, 2, v___x_450_);
v_t_452_ = v___x_443_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v_names_439_);
lean_ctor_set(v_reuseFailAlloc_463_, 1, v_values_440_);
lean_ctor_set(v_reuseFailAlloc_463_, 2, v___x_450_);
v_t_452_ = v_reuseFailAlloc_463_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
uint8_t v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v_d_457_; lean_object* v_d_458_; lean_object* v___x_460_; 
v___x_453_ = 7;
v___x_454_ = lean_byte_array_push(v_defs_437_, v___x_453_);
lean_inc(v_size_449_);
v___x_455_ = l_Lasm_UI_Encode_pushVar(v___x_454_, v_size_449_);
v___x_456_ = l_List_lengthTR___redArg(v_paths_435_);
v_d_457_ = l_Lasm_UI_Encode_pushVar(v___x_455_, v___x_456_);
v_d_458_ = l_List_foldl___at___00Lasm_UI_Encode_Enc_decoder_spec__3(v_d_457_, v_paths_435_);
if (v_isShared_448_ == 0)
{
lean_ctor_set(v___x_447_, 1, v_d_458_);
lean_ctor_set(v___x_447_, 0, v_t_452_);
v___x_460_ = v___x_447_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v_t_452_);
lean_ctor_set(v_reuseFailAlloc_462_, 1, v_d_458_);
lean_ctor_set(v_reuseFailAlloc_462_, 2, v_out_438_);
v___x_460_ = v_reuseFailAlloc_462_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
lean_object* v___x_461_; 
v___x_461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_461_, 0, v___x_460_);
lean_ctor_set(v___x_461_, 1, v_size_449_);
return v___x_461_;
}
}
}
}
else
{
lean_object* v_val_468_; lean_object* v___x_469_; 
lean_del_object(v___x_443_);
lean_dec_ref(v_decoders_441_);
lean_dec_ref(v_values_440_);
lean_dec_ref(v_names_439_);
lean_dec(v_paths_435_);
v_val_468_ = lean_ctor_get(v___x_445_, 0);
lean_inc(v_val_468_);
lean_dec_ref_known(v___x_445_, 1);
v___x_469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_469_, 0, v_e_434_);
lean_ctor_set(v___x_469_, 1, v_val_468_);
return v___x_469_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1(lean_object* v_00_u03b2_471_, lean_object* v_m_472_, lean_object* v_a_473_){
_start:
{
lean_object* v___x_474_; 
v___x_474_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1___redArg(v_m_472_, v_a_473_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1___boxed(lean_object* v_00_u03b2_475_, lean_object* v_m_476_, lean_object* v_a_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1(v_00_u03b2_475_, v_m_476_, v_a_477_);
lean_dec(v_a_477_);
lean_dec_ref(v_m_476_);
return v_res_478_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2(lean_object* v_00_u03b2_479_, lean_object* v_m_480_, lean_object* v_a_481_, lean_object* v_b_482_){
_start:
{
lean_object* v___x_483_; 
v___x_483_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2___redArg(v_m_480_, v_a_481_, v_b_482_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1(lean_object* v_00_u03b2_484_, lean_object* v_a_485_, lean_object* v_x_486_){
_start:
{
lean_object* v___x_487_; 
v___x_487_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1___redArg(v_a_485_, v_x_486_);
return v___x_487_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1___boxed(lean_object* v_00_u03b2_488_, lean_object* v_a_489_, lean_object* v_x_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lasm_UI_Encode_Enc_decoder_spec__1_spec__1(v_00_u03b2_488_, v_a_489_, v_x_490_);
lean_dec(v_x_490_);
lean_dec(v_a_489_);
return v_res_491_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3(lean_object* v_00_u03b2_492_, lean_object* v_a_493_, lean_object* v_x_494_){
_start:
{
uint8_t v___x_495_; 
v___x_495_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3___redArg(v_a_493_, v_x_494_);
return v___x_495_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3___boxed(lean_object* v_00_u03b2_496_, lean_object* v_a_497_, lean_object* v_x_498_){
_start:
{
uint8_t v_res_499_; lean_object* v_r_500_; 
v_res_499_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__3(v_00_u03b2_496_, v_a_497_, v_x_498_);
lean_dec(v_x_498_);
lean_dec(v_a_497_);
v_r_500_ = lean_box(v_res_499_);
return v_r_500_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4(lean_object* v_00_u03b2_501_, lean_object* v_data_502_){
_start:
{
lean_object* v___x_503_; 
v___x_503_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4___redArg(v_data_502_);
return v___x_503_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__5(lean_object* v_00_u03b2_504_, lean_object* v_a_505_, lean_object* v_b_506_, lean_object* v_x_507_){
_start:
{
lean_object* v___x_508_; 
v___x_508_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__5___redArg(v_a_505_, v_b_506_, v_x_507_);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6(lean_object* v_00_u03b2_509_, lean_object* v_i_510_, lean_object* v_source_511_, lean_object* v_target_512_){
_start:
{
lean_object* v___x_513_; 
v___x_513_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6___redArg(v_i_510_, v_source_511_, v_target_512_);
return v___x_513_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6_spec__9(lean_object* v_00_u03b2_514_, lean_object* v_x_515_, lean_object* v_x_516_){
_start:
{
lean_object* v___x_517_; 
v___x_517_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lasm_UI_Encode_Enc_decoder_spec__2_spec__4_spec__6_spec__9___redArg(v_x_515_, v_x_516_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_setAttr(lean_object* v_e_518_, lean_object* v_k_519_, lean_object* v_v_520_){
_start:
{
switch(lean_obj_tag(v_k_519_))
{
case 0:
{
if (lean_obj_tag(v_v_520_) == 0)
{
lean_object* v_name_521_; lean_object* v_s_522_; lean_object* v_tables_523_; lean_object* v_defs_524_; lean_object* v_out_525_; lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_536_; 
v_name_521_ = lean_ctor_get(v_k_519_, 0);
lean_inc_ref(v_name_521_);
lean_dec_ref_known(v_k_519_, 1);
v_s_522_ = lean_ctor_get(v_v_520_, 0);
lean_inc_ref(v_s_522_);
lean_dec_ref_known(v_v_520_, 1);
v_tables_523_ = lean_ctor_get(v_e_518_, 0);
v_defs_524_ = lean_ctor_get(v_e_518_, 1);
v_out_525_ = lean_ctor_get(v_e_518_, 2);
v_isSharedCheck_536_ = !lean_is_exclusive(v_e_518_);
if (v_isSharedCheck_536_ == 0)
{
v___x_527_ = v_e_518_;
v_isShared_528_ = v_isSharedCheck_536_;
goto v_resetjp_526_;
}
else
{
lean_inc(v_out_525_);
lean_inc(v_defs_524_);
lean_inc(v_tables_523_);
lean_dec(v_e_518_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_536_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
uint8_t v___x_529_; lean_object* v___x_530_; lean_object* v___x_532_; 
v___x_529_ = 0;
v___x_530_ = lean_byte_array_push(v_out_525_, v___x_529_);
if (v_isShared_528_ == 0)
{
lean_ctor_set(v___x_527_, 2, v___x_530_);
v___x_532_ = v___x_527_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v_tables_523_);
lean_ctor_set(v_reuseFailAlloc_535_, 1, v_defs_524_);
lean_ctor_set(v_reuseFailAlloc_535_, 2, v___x_530_);
v___x_532_ = v_reuseFailAlloc_535_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_533_ = l_Lasm_UI_Encode_Enc_name(v___x_532_, v_name_521_);
v___x_534_ = l_Lasm_UI_Encode_Enc_value(v___x_533_, v_s_522_);
return v___x_534_;
}
}
}
else
{
lean_object* v_name_537_; lean_object* v_tables_538_; lean_object* v_defs_539_; lean_object* v_out_540_; lean_object* v___x_542_; uint8_t v_isShared_543_; uint8_t v_isSharedCheck_550_; 
lean_dec_ref(v_v_520_);
v_name_537_ = lean_ctor_get(v_k_519_, 0);
lean_inc_ref(v_name_537_);
lean_dec_ref_known(v_k_519_, 1);
v_tables_538_ = lean_ctor_get(v_e_518_, 0);
v_defs_539_ = lean_ctor_get(v_e_518_, 1);
v_out_540_ = lean_ctor_get(v_e_518_, 2);
v_isSharedCheck_550_ = !lean_is_exclusive(v_e_518_);
if (v_isSharedCheck_550_ == 0)
{
v___x_542_ = v_e_518_;
v_isShared_543_ = v_isSharedCheck_550_;
goto v_resetjp_541_;
}
else
{
lean_inc(v_out_540_);
lean_inc(v_defs_539_);
lean_inc(v_tables_538_);
lean_dec(v_e_518_);
v___x_542_ = lean_box(0);
v_isShared_543_ = v_isSharedCheck_550_;
goto v_resetjp_541_;
}
v_resetjp_541_:
{
uint8_t v___x_544_; lean_object* v___x_545_; lean_object* v___x_547_; 
v___x_544_ = 8;
v___x_545_ = lean_byte_array_push(v_out_540_, v___x_544_);
if (v_isShared_543_ == 0)
{
lean_ctor_set(v___x_542_, 2, v___x_545_);
v___x_547_ = v___x_542_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v_tables_538_);
lean_ctor_set(v_reuseFailAlloc_549_, 1, v_defs_539_);
lean_ctor_set(v_reuseFailAlloc_549_, 2, v___x_545_);
v___x_547_ = v_reuseFailAlloc_549_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
lean_object* v___x_548_; 
v___x_548_ = l_Lasm_UI_Encode_Enc_name(v___x_547_, v_name_537_);
return v___x_548_;
}
}
}
}
case 1:
{
if (lean_obj_tag(v_v_520_) == 1)
{
lean_object* v_v_551_; 
v_v_551_ = lean_ctor_get(v_v_520_, 0);
lean_inc_ref(v_v_551_);
lean_dec_ref_known(v_v_520_, 1);
if (lean_obj_tag(v_v_551_) == 0)
{
lean_object* v_name_552_; lean_object* v_s_553_; lean_object* v_tables_554_; lean_object* v_defs_555_; lean_object* v_out_556_; lean_object* v___x_558_; uint8_t v_isShared_559_; uint8_t v_isSharedCheck_567_; 
v_name_552_ = lean_ctor_get(v_k_519_, 0);
lean_inc_ref(v_name_552_);
lean_dec_ref_known(v_k_519_, 1);
v_s_553_ = lean_ctor_get(v_v_551_, 0);
lean_inc_ref(v_s_553_);
lean_dec_ref_known(v_v_551_, 1);
v_tables_554_ = lean_ctor_get(v_e_518_, 0);
v_defs_555_ = lean_ctor_get(v_e_518_, 1);
v_out_556_ = lean_ctor_get(v_e_518_, 2);
v_isSharedCheck_567_ = !lean_is_exclusive(v_e_518_);
if (v_isSharedCheck_567_ == 0)
{
v___x_558_ = v_e_518_;
v_isShared_559_ = v_isSharedCheck_567_;
goto v_resetjp_557_;
}
else
{
lean_inc(v_out_556_);
lean_inc(v_defs_555_);
lean_inc(v_tables_554_);
lean_dec(v_e_518_);
v___x_558_ = lean_box(0);
v_isShared_559_ = v_isSharedCheck_567_;
goto v_resetjp_557_;
}
v_resetjp_557_:
{
uint8_t v___x_560_; lean_object* v___x_561_; lean_object* v___x_563_; 
v___x_560_ = 1;
v___x_561_ = lean_byte_array_push(v_out_556_, v___x_560_);
if (v_isShared_559_ == 0)
{
lean_ctor_set(v___x_558_, 2, v___x_561_);
v___x_563_ = v___x_558_;
goto v_reusejp_562_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v_tables_554_);
lean_ctor_set(v_reuseFailAlloc_566_, 1, v_defs_555_);
lean_ctor_set(v_reuseFailAlloc_566_, 2, v___x_561_);
v___x_563_ = v_reuseFailAlloc_566_;
goto v_reusejp_562_;
}
v_reusejp_562_:
{
lean_object* v___x_564_; lean_object* v___x_565_; 
v___x_564_ = l_Lasm_UI_Encode_Enc_name(v___x_563_, v_name_552_);
v___x_565_ = l_Lasm_UI_Encode_Enc_value(v___x_564_, v_s_553_);
return v___x_565_;
}
}
}
else
{
uint8_t v_b_568_; 
v_b_568_ = lean_ctor_get_uint8(v_v_551_, 0);
lean_dec_ref_known(v_v_551_, 0);
if (v_b_568_ == 0)
{
lean_object* v_name_569_; lean_object* v_tables_570_; lean_object* v_defs_571_; lean_object* v_out_572_; lean_object* v___x_574_; uint8_t v_isShared_575_; uint8_t v_isSharedCheck_582_; 
v_name_569_ = lean_ctor_get(v_k_519_, 0);
lean_inc_ref(v_name_569_);
lean_dec_ref_known(v_k_519_, 1);
v_tables_570_ = lean_ctor_get(v_e_518_, 0);
v_defs_571_ = lean_ctor_get(v_e_518_, 1);
v_out_572_ = lean_ctor_get(v_e_518_, 2);
v_isSharedCheck_582_ = !lean_is_exclusive(v_e_518_);
if (v_isSharedCheck_582_ == 0)
{
v___x_574_ = v_e_518_;
v_isShared_575_ = v_isSharedCheck_582_;
goto v_resetjp_573_;
}
else
{
lean_inc(v_out_572_);
lean_inc(v_defs_571_);
lean_inc(v_tables_570_);
lean_dec(v_e_518_);
v___x_574_ = lean_box(0);
v_isShared_575_ = v_isSharedCheck_582_;
goto v_resetjp_573_;
}
v_resetjp_573_:
{
uint8_t v___x_576_; lean_object* v___x_577_; lean_object* v___x_579_; 
v___x_576_ = 2;
v___x_577_ = lean_byte_array_push(v_out_572_, v___x_576_);
if (v_isShared_575_ == 0)
{
lean_ctor_set(v___x_574_, 2, v___x_577_);
v___x_579_ = v___x_574_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v_tables_570_);
lean_ctor_set(v_reuseFailAlloc_581_, 1, v_defs_571_);
lean_ctor_set(v_reuseFailAlloc_581_, 2, v___x_577_);
v___x_579_ = v_reuseFailAlloc_581_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
lean_object* v___x_580_; 
v___x_580_ = l_Lasm_UI_Encode_Enc_name(v___x_579_, v_name_569_);
return v___x_580_;
}
}
}
else
{
lean_object* v_name_583_; lean_object* v_tables_584_; lean_object* v_defs_585_; lean_object* v_out_586_; lean_object* v___x_588_; uint8_t v_isShared_589_; uint8_t v_isSharedCheck_596_; 
v_name_583_ = lean_ctor_get(v_k_519_, 0);
lean_inc_ref(v_name_583_);
lean_dec_ref_known(v_k_519_, 1);
v_tables_584_ = lean_ctor_get(v_e_518_, 0);
v_defs_585_ = lean_ctor_get(v_e_518_, 1);
v_out_586_ = lean_ctor_get(v_e_518_, 2);
v_isSharedCheck_596_ = !lean_is_exclusive(v_e_518_);
if (v_isSharedCheck_596_ == 0)
{
v___x_588_ = v_e_518_;
v_isShared_589_ = v_isSharedCheck_596_;
goto v_resetjp_587_;
}
else
{
lean_inc(v_out_586_);
lean_inc(v_defs_585_);
lean_inc(v_tables_584_);
lean_dec(v_e_518_);
v___x_588_ = lean_box(0);
v_isShared_589_ = v_isSharedCheck_596_;
goto v_resetjp_587_;
}
v_resetjp_587_:
{
uint8_t v___x_590_; lean_object* v___x_591_; lean_object* v___x_593_; 
v___x_590_ = 3;
v___x_591_ = lean_byte_array_push(v_out_586_, v___x_590_);
if (v_isShared_589_ == 0)
{
lean_ctor_set(v___x_588_, 2, v___x_591_);
v___x_593_ = v___x_588_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_595_; 
v_reuseFailAlloc_595_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_595_, 0, v_tables_584_);
lean_ctor_set(v_reuseFailAlloc_595_, 1, v_defs_585_);
lean_ctor_set(v_reuseFailAlloc_595_, 2, v___x_591_);
v___x_593_ = v_reuseFailAlloc_595_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
lean_object* v___x_594_; 
v___x_594_ = l_Lasm_UI_Encode_Enc_name(v___x_593_, v_name_583_);
return v___x_594_;
}
}
}
}
}
else
{
lean_object* v_name_597_; lean_object* v_tables_598_; lean_object* v_defs_599_; lean_object* v_out_600_; lean_object* v___x_602_; uint8_t v_isShared_603_; uint8_t v_isSharedCheck_610_; 
lean_dec_ref(v_v_520_);
v_name_597_ = lean_ctor_get(v_k_519_, 0);
lean_inc_ref(v_name_597_);
lean_dec_ref_known(v_k_519_, 1);
v_tables_598_ = lean_ctor_get(v_e_518_, 0);
v_defs_599_ = lean_ctor_get(v_e_518_, 1);
v_out_600_ = lean_ctor_get(v_e_518_, 2);
v_isSharedCheck_610_ = !lean_is_exclusive(v_e_518_);
if (v_isSharedCheck_610_ == 0)
{
v___x_602_ = v_e_518_;
v_isShared_603_ = v_isSharedCheck_610_;
goto v_resetjp_601_;
}
else
{
lean_inc(v_out_600_);
lean_inc(v_defs_599_);
lean_inc(v_tables_598_);
lean_dec(v_e_518_);
v___x_602_ = lean_box(0);
v_isShared_603_ = v_isSharedCheck_610_;
goto v_resetjp_601_;
}
v_resetjp_601_:
{
uint8_t v___x_604_; lean_object* v___x_605_; lean_object* v___x_607_; 
v___x_604_ = 9;
v___x_605_ = lean_byte_array_push(v_out_600_, v___x_604_);
if (v_isShared_603_ == 0)
{
lean_ctor_set(v___x_602_, 2, v___x_605_);
v___x_607_ = v___x_602_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v_tables_598_);
lean_ctor_set(v_reuseFailAlloc_609_, 1, v_defs_599_);
lean_ctor_set(v_reuseFailAlloc_609_, 2, v___x_605_);
v___x_607_ = v_reuseFailAlloc_609_;
goto v_reusejp_606_;
}
v_reusejp_606_:
{
lean_object* v___x_608_; 
v___x_608_ = l_Lasm_UI_Encode_Enc_name(v___x_607_, v_name_597_);
return v___x_608_;
}
}
}
}
case 2:
{
if (lean_obj_tag(v_v_520_) == 0)
{
lean_object* v_name_611_; lean_object* v_s_612_; lean_object* v_tables_613_; lean_object* v_defs_614_; lean_object* v_out_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_626_; 
v_name_611_ = lean_ctor_get(v_k_519_, 0);
lean_inc_ref(v_name_611_);
lean_dec_ref_known(v_k_519_, 1);
v_s_612_ = lean_ctor_get(v_v_520_, 0);
lean_inc_ref(v_s_612_);
lean_dec_ref_known(v_v_520_, 1);
v_tables_613_ = lean_ctor_get(v_e_518_, 0);
v_defs_614_ = lean_ctor_get(v_e_518_, 1);
v_out_615_ = lean_ctor_get(v_e_518_, 2);
v_isSharedCheck_626_ = !lean_is_exclusive(v_e_518_);
if (v_isSharedCheck_626_ == 0)
{
v___x_617_ = v_e_518_;
v_isShared_618_ = v_isSharedCheck_626_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_out_615_);
lean_inc(v_defs_614_);
lean_inc(v_tables_613_);
lean_dec(v_e_518_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_626_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
uint8_t v___x_619_; lean_object* v___x_620_; lean_object* v___x_622_; 
v___x_619_ = 4;
v___x_620_ = lean_byte_array_push(v_out_615_, v___x_619_);
if (v_isShared_618_ == 0)
{
lean_ctor_set(v___x_617_, 2, v___x_620_);
v___x_622_ = v___x_617_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v_tables_613_);
lean_ctor_set(v_reuseFailAlloc_625_, 1, v_defs_614_);
lean_ctor_set(v_reuseFailAlloc_625_, 2, v___x_620_);
v___x_622_ = v_reuseFailAlloc_625_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
lean_object* v___x_623_; lean_object* v___x_624_; 
v___x_623_ = l_Lasm_UI_Encode_Enc_name(v___x_622_, v_name_611_);
v___x_624_ = l_Lasm_UI_Encode_Enc_value(v___x_623_, v_s_612_);
return v___x_624_;
}
}
}
else
{
lean_object* v_name_627_; lean_object* v_tables_628_; lean_object* v_defs_629_; lean_object* v_out_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_640_; 
lean_dec_ref(v_v_520_);
v_name_627_ = lean_ctor_get(v_k_519_, 0);
lean_inc_ref(v_name_627_);
lean_dec_ref_known(v_k_519_, 1);
v_tables_628_ = lean_ctor_get(v_e_518_, 0);
v_defs_629_ = lean_ctor_get(v_e_518_, 1);
v_out_630_ = lean_ctor_get(v_e_518_, 2);
v_isSharedCheck_640_ = !lean_is_exclusive(v_e_518_);
if (v_isSharedCheck_640_ == 0)
{
v___x_632_ = v_e_518_;
v_isShared_633_ = v_isSharedCheck_640_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_out_630_);
lean_inc(v_defs_629_);
lean_inc(v_tables_628_);
lean_dec(v_e_518_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_640_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
uint8_t v___x_634_; lean_object* v___x_635_; lean_object* v___x_637_; 
v___x_634_ = 10;
v___x_635_ = lean_byte_array_push(v_out_630_, v___x_634_);
if (v_isShared_633_ == 0)
{
lean_ctor_set(v___x_632_, 2, v___x_635_);
v___x_637_ = v___x_632_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v_tables_628_);
lean_ctor_set(v_reuseFailAlloc_639_, 1, v_defs_629_);
lean_ctor_set(v_reuseFailAlloc_639_, 2, v___x_635_);
v___x_637_ = v_reuseFailAlloc_639_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
lean_object* v___x_638_; 
v___x_638_ = l_Lasm_UI_Encode_Enc_name(v___x_637_, v_name_627_);
return v___x_638_;
}
}
}
}
default: 
{
if (lean_obj_tag(v_v_520_) == 2)
{
lean_object* v_l_641_; lean_object* v_event_642_; lean_object* v_paths_643_; lean_object* v___x_644_; lean_object* v_fst_645_; lean_object* v_snd_646_; lean_object* v_tables_647_; lean_object* v_defs_648_; lean_object* v_out_649_; lean_object* v___x_651_; uint8_t v_isShared_652_; uint8_t v_isSharedCheck_670_; 
v_l_641_ = lean_ctor_get(v_v_520_, 0);
lean_inc_ref(v_l_641_);
lean_dec_ref_known(v_v_520_, 1);
v_event_642_ = lean_ctor_get(v_k_519_, 0);
lean_inc_ref(v_event_642_);
lean_dec_ref_known(v_k_519_, 1);
v_paths_643_ = lean_ctor_get(v_l_641_, 1);
lean_inc(v_paths_643_);
lean_dec_ref(v_l_641_);
v___x_644_ = l_Lasm_UI_Encode_Enc_decoder(v_e_518_, v_paths_643_);
v_fst_645_ = lean_ctor_get(v___x_644_, 0);
lean_inc(v_fst_645_);
v_snd_646_ = lean_ctor_get(v___x_644_, 1);
lean_inc(v_snd_646_);
lean_dec_ref(v___x_644_);
v_tables_647_ = lean_ctor_get(v_fst_645_, 0);
v_defs_648_ = lean_ctor_get(v_fst_645_, 1);
v_out_649_ = lean_ctor_get(v_fst_645_, 2);
v_isSharedCheck_670_ = !lean_is_exclusive(v_fst_645_);
if (v_isSharedCheck_670_ == 0)
{
v___x_651_ = v_fst_645_;
v_isShared_652_ = v_isSharedCheck_670_;
goto v_resetjp_650_;
}
else
{
lean_inc(v_out_649_);
lean_inc(v_defs_648_);
lean_inc(v_tables_647_);
lean_dec(v_fst_645_);
v___x_651_ = lean_box(0);
v_isShared_652_ = v_isSharedCheck_670_;
goto v_resetjp_650_;
}
v_resetjp_650_:
{
uint8_t v___x_653_; lean_object* v___x_654_; lean_object* v___x_656_; 
v___x_653_ = 5;
v___x_654_ = lean_byte_array_push(v_out_649_, v___x_653_);
if (v_isShared_652_ == 0)
{
lean_ctor_set(v___x_651_, 2, v___x_654_);
v___x_656_ = v___x_651_;
goto v_reusejp_655_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v_tables_647_);
lean_ctor_set(v_reuseFailAlloc_669_, 1, v_defs_648_);
lean_ctor_set(v_reuseFailAlloc_669_, 2, v___x_654_);
v___x_656_ = v_reuseFailAlloc_669_;
goto v_reusejp_655_;
}
v_reusejp_655_:
{
lean_object* v___x_657_; lean_object* v_tables_658_; lean_object* v_defs_659_; lean_object* v_out_660_; lean_object* v___x_662_; uint8_t v_isShared_663_; uint8_t v_isSharedCheck_668_; 
v___x_657_ = l_Lasm_UI_Encode_Enc_name(v___x_656_, v_event_642_);
v_tables_658_ = lean_ctor_get(v___x_657_, 0);
v_defs_659_ = lean_ctor_get(v___x_657_, 1);
v_out_660_ = lean_ctor_get(v___x_657_, 2);
v_isSharedCheck_668_ = !lean_is_exclusive(v___x_657_);
if (v_isSharedCheck_668_ == 0)
{
v___x_662_ = v___x_657_;
v_isShared_663_ = v_isSharedCheck_668_;
goto v_resetjp_661_;
}
else
{
lean_inc(v_out_660_);
lean_inc(v_defs_659_);
lean_inc(v_tables_658_);
lean_dec(v___x_657_);
v___x_662_ = lean_box(0);
v_isShared_663_ = v_isSharedCheck_668_;
goto v_resetjp_661_;
}
v_resetjp_661_:
{
lean_object* v___x_664_; lean_object* v___x_666_; 
v___x_664_ = l_Lasm_UI_Encode_pushVar(v_out_660_, v_snd_646_);
if (v_isShared_663_ == 0)
{
lean_ctor_set(v___x_662_, 2, v___x_664_);
v___x_666_ = v___x_662_;
goto v_reusejp_665_;
}
else
{
lean_object* v_reuseFailAlloc_667_; 
v_reuseFailAlloc_667_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_667_, 0, v_tables_658_);
lean_ctor_set(v_reuseFailAlloc_667_, 1, v_defs_659_);
lean_ctor_set(v_reuseFailAlloc_667_, 2, v___x_664_);
v___x_666_ = v_reuseFailAlloc_667_;
goto v_reusejp_665_;
}
v_reusejp_665_:
{
return v___x_666_;
}
}
}
}
}
else
{
lean_object* v_event_671_; lean_object* v_tables_672_; lean_object* v_defs_673_; lean_object* v_out_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_684_; 
lean_dec_ref(v_v_520_);
v_event_671_ = lean_ctor_get(v_k_519_, 0);
lean_inc_ref(v_event_671_);
lean_dec_ref_known(v_k_519_, 1);
v_tables_672_ = lean_ctor_get(v_e_518_, 0);
v_defs_673_ = lean_ctor_get(v_e_518_, 1);
v_out_674_ = lean_ctor_get(v_e_518_, 2);
v_isSharedCheck_684_ = !lean_is_exclusive(v_e_518_);
if (v_isSharedCheck_684_ == 0)
{
v___x_676_ = v_e_518_;
v_isShared_677_ = v_isSharedCheck_684_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_out_674_);
lean_inc(v_defs_673_);
lean_inc(v_tables_672_);
lean_dec(v_e_518_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_684_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
uint8_t v___x_678_; lean_object* v___x_679_; lean_object* v___x_681_; 
v___x_678_ = 11;
v___x_679_ = lean_byte_array_push(v_out_674_, v___x_678_);
if (v_isShared_677_ == 0)
{
lean_ctor_set(v___x_676_, 2, v___x_679_);
v___x_681_ = v___x_676_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v_tables_672_);
lean_ctor_set(v_reuseFailAlloc_683_, 1, v_defs_673_);
lean_ctor_set(v_reuseFailAlloc_683_, 2, v___x_679_);
v___x_681_ = v_reuseFailAlloc_683_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
lean_object* v___x_682_; 
v___x_682_ = l_Lasm_UI_Encode_Enc_name(v___x_681_, v_event_671_);
return v___x_682_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_attr___redArg(lean_object* v_e_685_, lean_object* v_x_686_){
_start:
{
switch(lean_obj_tag(v_x_686_))
{
case 0:
{
lean_object* v_name_687_; lean_object* v_value_688_; lean_object* v_tables_689_; lean_object* v_defs_690_; lean_object* v_out_691_; lean_object* v___x_693_; uint8_t v_isShared_694_; uint8_t v_isSharedCheck_702_; 
v_name_687_ = lean_ctor_get(v_x_686_, 0);
lean_inc_ref(v_name_687_);
v_value_688_ = lean_ctor_get(v_x_686_, 1);
lean_inc_ref(v_value_688_);
lean_dec_ref_known(v_x_686_, 2);
v_tables_689_ = lean_ctor_get(v_e_685_, 0);
v_defs_690_ = lean_ctor_get(v_e_685_, 1);
v_out_691_ = lean_ctor_get(v_e_685_, 2);
v_isSharedCheck_702_ = !lean_is_exclusive(v_e_685_);
if (v_isSharedCheck_702_ == 0)
{
v___x_693_ = v_e_685_;
v_isShared_694_ = v_isSharedCheck_702_;
goto v_resetjp_692_;
}
else
{
lean_inc(v_out_691_);
lean_inc(v_defs_690_);
lean_inc(v_tables_689_);
lean_dec(v_e_685_);
v___x_693_ = lean_box(0);
v_isShared_694_ = v_isSharedCheck_702_;
goto v_resetjp_692_;
}
v_resetjp_692_:
{
uint8_t v___x_695_; lean_object* v___x_696_; lean_object* v___x_698_; 
v___x_695_ = 0;
v___x_696_ = lean_byte_array_push(v_out_691_, v___x_695_);
if (v_isShared_694_ == 0)
{
lean_ctor_set(v___x_693_, 2, v___x_696_);
v___x_698_ = v___x_693_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v_tables_689_);
lean_ctor_set(v_reuseFailAlloc_701_, 1, v_defs_690_);
lean_ctor_set(v_reuseFailAlloc_701_, 2, v___x_696_);
v___x_698_ = v_reuseFailAlloc_701_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_699_ = l_Lasm_UI_Encode_Enc_name(v___x_698_, v_name_687_);
v___x_700_ = l_Lasm_UI_Encode_Enc_value(v___x_699_, v_value_688_);
return v___x_700_;
}
}
}
case 1:
{
lean_object* v_value_703_; 
v_value_703_ = lean_ctor_get(v_x_686_, 1);
if (lean_obj_tag(v_value_703_) == 0)
{
lean_object* v_name_704_; lean_object* v_s_705_; lean_object* v_tables_706_; lean_object* v_defs_707_; lean_object* v_out_708_; lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_719_; 
lean_inc_ref(v_value_703_);
v_name_704_ = lean_ctor_get(v_x_686_, 0);
lean_inc_ref(v_name_704_);
lean_dec_ref_known(v_x_686_, 2);
v_s_705_ = lean_ctor_get(v_value_703_, 0);
lean_inc_ref(v_s_705_);
lean_dec_ref_known(v_value_703_, 1);
v_tables_706_ = lean_ctor_get(v_e_685_, 0);
v_defs_707_ = lean_ctor_get(v_e_685_, 1);
v_out_708_ = lean_ctor_get(v_e_685_, 2);
v_isSharedCheck_719_ = !lean_is_exclusive(v_e_685_);
if (v_isSharedCheck_719_ == 0)
{
v___x_710_ = v_e_685_;
v_isShared_711_ = v_isSharedCheck_719_;
goto v_resetjp_709_;
}
else
{
lean_inc(v_out_708_);
lean_inc(v_defs_707_);
lean_inc(v_tables_706_);
lean_dec(v_e_685_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_719_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
uint8_t v___x_712_; lean_object* v___x_713_; lean_object* v___x_715_; 
v___x_712_ = 1;
v___x_713_ = lean_byte_array_push(v_out_708_, v___x_712_);
if (v_isShared_711_ == 0)
{
lean_ctor_set(v___x_710_, 2, v___x_713_);
v___x_715_ = v___x_710_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v_tables_706_);
lean_ctor_set(v_reuseFailAlloc_718_, 1, v_defs_707_);
lean_ctor_set(v_reuseFailAlloc_718_, 2, v___x_713_);
v___x_715_ = v_reuseFailAlloc_718_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
lean_object* v___x_716_; lean_object* v___x_717_; 
v___x_716_ = l_Lasm_UI_Encode_Enc_name(v___x_715_, v_name_704_);
v___x_717_ = l_Lasm_UI_Encode_Enc_value(v___x_716_, v_s_705_);
return v___x_717_;
}
}
}
else
{
uint8_t v_b_720_; 
v_b_720_ = lean_ctor_get_uint8(v_value_703_, 0);
if (v_b_720_ == 0)
{
lean_object* v_name_721_; lean_object* v_tables_722_; lean_object* v_defs_723_; lean_object* v_out_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_734_; 
v_name_721_ = lean_ctor_get(v_x_686_, 0);
lean_inc_ref(v_name_721_);
lean_dec_ref_known(v_x_686_, 2);
v_tables_722_ = lean_ctor_get(v_e_685_, 0);
v_defs_723_ = lean_ctor_get(v_e_685_, 1);
v_out_724_ = lean_ctor_get(v_e_685_, 2);
v_isSharedCheck_734_ = !lean_is_exclusive(v_e_685_);
if (v_isSharedCheck_734_ == 0)
{
v___x_726_ = v_e_685_;
v_isShared_727_ = v_isSharedCheck_734_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_out_724_);
lean_inc(v_defs_723_);
lean_inc(v_tables_722_);
lean_dec(v_e_685_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_734_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
uint8_t v___x_728_; lean_object* v___x_729_; lean_object* v___x_731_; 
v___x_728_ = 2;
v___x_729_ = lean_byte_array_push(v_out_724_, v___x_728_);
if (v_isShared_727_ == 0)
{
lean_ctor_set(v___x_726_, 2, v___x_729_);
v___x_731_ = v___x_726_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v_tables_722_);
lean_ctor_set(v_reuseFailAlloc_733_, 1, v_defs_723_);
lean_ctor_set(v_reuseFailAlloc_733_, 2, v___x_729_);
v___x_731_ = v_reuseFailAlloc_733_;
goto v_reusejp_730_;
}
v_reusejp_730_:
{
lean_object* v___x_732_; 
v___x_732_ = l_Lasm_UI_Encode_Enc_name(v___x_731_, v_name_721_);
return v___x_732_;
}
}
}
else
{
lean_object* v_name_735_; lean_object* v_tables_736_; lean_object* v_defs_737_; lean_object* v_out_738_; lean_object* v___x_740_; uint8_t v_isShared_741_; uint8_t v_isSharedCheck_748_; 
v_name_735_ = lean_ctor_get(v_x_686_, 0);
lean_inc_ref(v_name_735_);
lean_dec_ref_known(v_x_686_, 2);
v_tables_736_ = lean_ctor_get(v_e_685_, 0);
v_defs_737_ = lean_ctor_get(v_e_685_, 1);
v_out_738_ = lean_ctor_get(v_e_685_, 2);
v_isSharedCheck_748_ = !lean_is_exclusive(v_e_685_);
if (v_isSharedCheck_748_ == 0)
{
v___x_740_ = v_e_685_;
v_isShared_741_ = v_isSharedCheck_748_;
goto v_resetjp_739_;
}
else
{
lean_inc(v_out_738_);
lean_inc(v_defs_737_);
lean_inc(v_tables_736_);
lean_dec(v_e_685_);
v___x_740_ = lean_box(0);
v_isShared_741_ = v_isSharedCheck_748_;
goto v_resetjp_739_;
}
v_resetjp_739_:
{
uint8_t v___x_742_; lean_object* v___x_743_; lean_object* v___x_745_; 
v___x_742_ = 3;
v___x_743_ = lean_byte_array_push(v_out_738_, v___x_742_);
if (v_isShared_741_ == 0)
{
lean_ctor_set(v___x_740_, 2, v___x_743_);
v___x_745_ = v___x_740_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v_tables_736_);
lean_ctor_set(v_reuseFailAlloc_747_, 1, v_defs_737_);
lean_ctor_set(v_reuseFailAlloc_747_, 2, v___x_743_);
v___x_745_ = v_reuseFailAlloc_747_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
lean_object* v___x_746_; 
v___x_746_ = l_Lasm_UI_Encode_Enc_name(v___x_745_, v_name_735_);
return v___x_746_;
}
}
}
}
}
case 2:
{
lean_object* v_name_749_; lean_object* v_value_750_; lean_object* v_tables_751_; lean_object* v_defs_752_; lean_object* v_out_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_764_; 
v_name_749_ = lean_ctor_get(v_x_686_, 0);
lean_inc_ref(v_name_749_);
v_value_750_ = lean_ctor_get(v_x_686_, 1);
lean_inc_ref(v_value_750_);
lean_dec_ref_known(v_x_686_, 2);
v_tables_751_ = lean_ctor_get(v_e_685_, 0);
v_defs_752_ = lean_ctor_get(v_e_685_, 1);
v_out_753_ = lean_ctor_get(v_e_685_, 2);
v_isSharedCheck_764_ = !lean_is_exclusive(v_e_685_);
if (v_isSharedCheck_764_ == 0)
{
v___x_755_ = v_e_685_;
v_isShared_756_ = v_isSharedCheck_764_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_out_753_);
lean_inc(v_defs_752_);
lean_inc(v_tables_751_);
lean_dec(v_e_685_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_764_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
uint8_t v___x_757_; lean_object* v___x_758_; lean_object* v___x_760_; 
v___x_757_ = 4;
v___x_758_ = lean_byte_array_push(v_out_753_, v___x_757_);
if (v_isShared_756_ == 0)
{
lean_ctor_set(v___x_755_, 2, v___x_758_);
v___x_760_ = v___x_755_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v_tables_751_);
lean_ctor_set(v_reuseFailAlloc_763_, 1, v_defs_752_);
lean_ctor_set(v_reuseFailAlloc_763_, 2, v___x_758_);
v___x_760_ = v_reuseFailAlloc_763_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
lean_object* v___x_761_; lean_object* v___x_762_; 
v___x_761_ = l_Lasm_UI_Encode_Enc_name(v___x_760_, v_name_749_);
v___x_762_ = l_Lasm_UI_Encode_Enc_value(v___x_761_, v_value_750_);
return v___x_762_;
}
}
}
default: 
{
lean_object* v_listener_765_; lean_object* v_event_766_; lean_object* v_paths_767_; lean_object* v___x_768_; lean_object* v_fst_769_; lean_object* v_snd_770_; lean_object* v_tables_771_; lean_object* v_defs_772_; lean_object* v_out_773_; lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_794_; 
v_listener_765_ = lean_ctor_get(v_x_686_, 0);
lean_inc_ref(v_listener_765_);
lean_dec_ref_known(v_x_686_, 2);
v_event_766_ = lean_ctor_get(v_listener_765_, 0);
lean_inc_ref(v_event_766_);
v_paths_767_ = lean_ctor_get(v_listener_765_, 1);
lean_inc(v_paths_767_);
lean_dec_ref(v_listener_765_);
v___x_768_ = l_Lasm_UI_Encode_Enc_decoder(v_e_685_, v_paths_767_);
v_fst_769_ = lean_ctor_get(v___x_768_, 0);
lean_inc(v_fst_769_);
v_snd_770_ = lean_ctor_get(v___x_768_, 1);
lean_inc(v_snd_770_);
lean_dec_ref(v___x_768_);
v_tables_771_ = lean_ctor_get(v_fst_769_, 0);
v_defs_772_ = lean_ctor_get(v_fst_769_, 1);
v_out_773_ = lean_ctor_get(v_fst_769_, 2);
v_isSharedCheck_794_ = !lean_is_exclusive(v_fst_769_);
if (v_isSharedCheck_794_ == 0)
{
v___x_775_ = v_fst_769_;
v_isShared_776_ = v_isSharedCheck_794_;
goto v_resetjp_774_;
}
else
{
lean_inc(v_out_773_);
lean_inc(v_defs_772_);
lean_inc(v_tables_771_);
lean_dec(v_fst_769_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_794_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
uint8_t v___x_777_; lean_object* v___x_778_; lean_object* v___x_780_; 
v___x_777_ = 5;
v___x_778_ = lean_byte_array_push(v_out_773_, v___x_777_);
if (v_isShared_776_ == 0)
{
lean_ctor_set(v___x_775_, 2, v___x_778_);
v___x_780_ = v___x_775_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v_tables_771_);
lean_ctor_set(v_reuseFailAlloc_793_, 1, v_defs_772_);
lean_ctor_set(v_reuseFailAlloc_793_, 2, v___x_778_);
v___x_780_ = v_reuseFailAlloc_793_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
lean_object* v___x_781_; lean_object* v_tables_782_; lean_object* v_defs_783_; lean_object* v_out_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_792_; 
v___x_781_ = l_Lasm_UI_Encode_Enc_name(v___x_780_, v_event_766_);
v_tables_782_ = lean_ctor_get(v___x_781_, 0);
v_defs_783_ = lean_ctor_get(v___x_781_, 1);
v_out_784_ = lean_ctor_get(v___x_781_, 2);
v_isSharedCheck_792_ = !lean_is_exclusive(v___x_781_);
if (v_isSharedCheck_792_ == 0)
{
v___x_786_ = v___x_781_;
v_isShared_787_ = v_isSharedCheck_792_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_out_784_);
lean_inc(v_defs_783_);
lean_inc(v_tables_782_);
lean_dec(v___x_781_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_792_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v___x_788_; lean_object* v___x_790_; 
v___x_788_ = l_Lasm_UI_Encode_pushVar(v_out_784_, v_snd_770_);
if (v_isShared_787_ == 0)
{
lean_ctor_set(v___x_786_, 2, v___x_788_);
v___x_790_ = v___x_786_;
goto v_reusejp_789_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v_tables_782_);
lean_ctor_set(v_reuseFailAlloc_791_, 1, v_defs_783_);
lean_ctor_set(v_reuseFailAlloc_791_, 2, v___x_788_);
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
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_attr(lean_object* v_Msg_795_, lean_object* v_e_796_, lean_object* v_x_797_){
_start:
{
lean_object* v___x_798_; 
v___x_798_ = l_Lasm_UI_Encode_Enc_attr___redArg(v_e_796_, v_x_797_);
return v___x_798_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_attrOp(lean_object* v_e_799_, lean_object* v_x_800_){
_start:
{
if (lean_obj_tag(v_x_800_) == 0)
{
lean_object* v_k_801_; lean_object* v_v_802_; lean_object* v___x_803_; 
v_k_801_ = lean_ctor_get(v_x_800_, 0);
lean_inc_ref(v_k_801_);
v_v_802_ = lean_ctor_get(v_x_800_, 1);
lean_inc_ref(v_v_802_);
lean_dec_ref_known(v_x_800_, 2);
v___x_803_ = l_Lasm_UI_Encode_Enc_setAttr(v_e_799_, v_k_801_, v_v_802_);
return v___x_803_;
}
else
{
lean_object* v_k_804_; 
v_k_804_ = lean_ctor_get(v_x_800_, 0);
lean_inc_ref(v_k_804_);
lean_dec_ref_known(v_x_800_, 1);
switch(lean_obj_tag(v_k_804_))
{
case 0:
{
lean_object* v_name_805_; lean_object* v_tables_806_; lean_object* v_defs_807_; lean_object* v_out_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_818_; 
v_name_805_ = lean_ctor_get(v_k_804_, 0);
lean_inc_ref(v_name_805_);
lean_dec_ref_known(v_k_804_, 1);
v_tables_806_ = lean_ctor_get(v_e_799_, 0);
v_defs_807_ = lean_ctor_get(v_e_799_, 1);
v_out_808_ = lean_ctor_get(v_e_799_, 2);
v_isSharedCheck_818_ = !lean_is_exclusive(v_e_799_);
if (v_isSharedCheck_818_ == 0)
{
v___x_810_ = v_e_799_;
v_isShared_811_ = v_isSharedCheck_818_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_out_808_);
lean_inc(v_defs_807_);
lean_inc(v_tables_806_);
lean_dec(v_e_799_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_818_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
uint8_t v___x_812_; lean_object* v___x_813_; lean_object* v___x_815_; 
v___x_812_ = 8;
v___x_813_ = lean_byte_array_push(v_out_808_, v___x_812_);
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 2, v___x_813_);
v___x_815_ = v___x_810_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v_tables_806_);
lean_ctor_set(v_reuseFailAlloc_817_, 1, v_defs_807_);
lean_ctor_set(v_reuseFailAlloc_817_, 2, v___x_813_);
v___x_815_ = v_reuseFailAlloc_817_;
goto v_reusejp_814_;
}
v_reusejp_814_:
{
lean_object* v___x_816_; 
v___x_816_ = l_Lasm_UI_Encode_Enc_name(v___x_815_, v_name_805_);
return v___x_816_;
}
}
}
case 1:
{
lean_object* v_name_819_; lean_object* v_tables_820_; lean_object* v_defs_821_; lean_object* v_out_822_; lean_object* v___x_824_; uint8_t v_isShared_825_; uint8_t v_isSharedCheck_832_; 
v_name_819_ = lean_ctor_get(v_k_804_, 0);
lean_inc_ref(v_name_819_);
lean_dec_ref_known(v_k_804_, 1);
v_tables_820_ = lean_ctor_get(v_e_799_, 0);
v_defs_821_ = lean_ctor_get(v_e_799_, 1);
v_out_822_ = lean_ctor_get(v_e_799_, 2);
v_isSharedCheck_832_ = !lean_is_exclusive(v_e_799_);
if (v_isSharedCheck_832_ == 0)
{
v___x_824_ = v_e_799_;
v_isShared_825_ = v_isSharedCheck_832_;
goto v_resetjp_823_;
}
else
{
lean_inc(v_out_822_);
lean_inc(v_defs_821_);
lean_inc(v_tables_820_);
lean_dec(v_e_799_);
v___x_824_ = lean_box(0);
v_isShared_825_ = v_isSharedCheck_832_;
goto v_resetjp_823_;
}
v_resetjp_823_:
{
uint8_t v___x_826_; lean_object* v___x_827_; lean_object* v___x_829_; 
v___x_826_ = 9;
v___x_827_ = lean_byte_array_push(v_out_822_, v___x_826_);
if (v_isShared_825_ == 0)
{
lean_ctor_set(v___x_824_, 2, v___x_827_);
v___x_829_ = v___x_824_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_831_; 
v_reuseFailAlloc_831_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_831_, 0, v_tables_820_);
lean_ctor_set(v_reuseFailAlloc_831_, 1, v_defs_821_);
lean_ctor_set(v_reuseFailAlloc_831_, 2, v___x_827_);
v___x_829_ = v_reuseFailAlloc_831_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
lean_object* v___x_830_; 
v___x_830_ = l_Lasm_UI_Encode_Enc_name(v___x_829_, v_name_819_);
return v___x_830_;
}
}
}
case 2:
{
lean_object* v_name_833_; lean_object* v_tables_834_; lean_object* v_defs_835_; lean_object* v_out_836_; lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_846_; 
v_name_833_ = lean_ctor_get(v_k_804_, 0);
lean_inc_ref(v_name_833_);
lean_dec_ref_known(v_k_804_, 1);
v_tables_834_ = lean_ctor_get(v_e_799_, 0);
v_defs_835_ = lean_ctor_get(v_e_799_, 1);
v_out_836_ = lean_ctor_get(v_e_799_, 2);
v_isSharedCheck_846_ = !lean_is_exclusive(v_e_799_);
if (v_isSharedCheck_846_ == 0)
{
v___x_838_ = v_e_799_;
v_isShared_839_ = v_isSharedCheck_846_;
goto v_resetjp_837_;
}
else
{
lean_inc(v_out_836_);
lean_inc(v_defs_835_);
lean_inc(v_tables_834_);
lean_dec(v_e_799_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_846_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
uint8_t v___x_840_; lean_object* v___x_841_; lean_object* v___x_843_; 
v___x_840_ = 10;
v___x_841_ = lean_byte_array_push(v_out_836_, v___x_840_);
if (v_isShared_839_ == 0)
{
lean_ctor_set(v___x_838_, 2, v___x_841_);
v___x_843_ = v___x_838_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v_tables_834_);
lean_ctor_set(v_reuseFailAlloc_845_, 1, v_defs_835_);
lean_ctor_set(v_reuseFailAlloc_845_, 2, v___x_841_);
v___x_843_ = v_reuseFailAlloc_845_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
lean_object* v___x_844_; 
v___x_844_ = l_Lasm_UI_Encode_Enc_name(v___x_843_, v_name_833_);
return v___x_844_;
}
}
}
default: 
{
lean_object* v_event_847_; lean_object* v_tables_848_; lean_object* v_defs_849_; lean_object* v_out_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_860_; 
v_event_847_ = lean_ctor_get(v_k_804_, 0);
lean_inc_ref(v_event_847_);
lean_dec_ref_known(v_k_804_, 1);
v_tables_848_ = lean_ctor_get(v_e_799_, 0);
v_defs_849_ = lean_ctor_get(v_e_799_, 1);
v_out_850_ = lean_ctor_get(v_e_799_, 2);
v_isSharedCheck_860_ = !lean_is_exclusive(v_e_799_);
if (v_isSharedCheck_860_ == 0)
{
v___x_852_ = v_e_799_;
v_isShared_853_ = v_isSharedCheck_860_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_out_850_);
lean_inc(v_defs_849_);
lean_inc(v_tables_848_);
lean_dec(v_e_799_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_860_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
uint8_t v___x_854_; lean_object* v___x_855_; lean_object* v___x_857_; 
v___x_854_ = 11;
v___x_855_ = lean_byte_array_push(v_out_850_, v___x_854_);
if (v_isShared_853_ == 0)
{
lean_ctor_set(v___x_852_, 2, v___x_855_);
v___x_857_ = v___x_852_;
goto v_reusejp_856_;
}
else
{
lean_object* v_reuseFailAlloc_859_; 
v_reuseFailAlloc_859_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_859_, 0, v_tables_848_);
lean_ctor_set(v_reuseFailAlloc_859_, 1, v_defs_849_);
lean_ctor_set(v_reuseFailAlloc_859_, 2, v___x_855_);
v___x_857_ = v_reuseFailAlloc_859_;
goto v_reusejp_856_;
}
v_reusejp_856_:
{
lean_object* v___x_858_; 
v___x_858_ = l_Lasm_UI_Encode_Enc_name(v___x_857_, v_event_847_);
return v___x_858_;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lasm_UI_Encode_Enc_nsByte(uint8_t v_x_861_){
_start:
{
switch(v_x_861_)
{
case 0:
{
uint8_t v___x_862_; 
v___x_862_ = 1;
return v___x_862_;
}
case 1:
{
uint8_t v___x_863_; 
v___x_863_ = 2;
return v___x_863_;
}
default: 
{
uint8_t v___x_864_; 
v___x_864_ = 3;
return v___x_864_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_nsByte___boxed(lean_object* v_x_865_){
_start:
{
uint8_t v_x_40__boxed_866_; uint8_t v_res_867_; lean_object* v_r_868_; 
v_x_40__boxed_866_ = lean_unbox(v_x_865_);
v_res_867_ = l_Lasm_UI_Encode_Enc_nsByte(v_x_40__boxed_866_);
v_r_868_ = lean_box(v_res_867_);
return v_r_868_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_node_spec__0___redArg(lean_object* v_x_869_, lean_object* v_x_870_){
_start:
{
if (lean_obj_tag(v_x_870_) == 0)
{
return v_x_869_;
}
else
{
lean_object* v_head_871_; lean_object* v_tail_872_; lean_object* v___x_873_; 
v_head_871_ = lean_ctor_get(v_x_870_, 0);
lean_inc(v_head_871_);
v_tail_872_ = lean_ctor_get(v_x_870_, 1);
lean_inc(v_tail_872_);
lean_dec_ref_known(v_x_870_, 2);
v___x_873_ = l_Lasm_UI_Encode_Enc_attr___redArg(v_x_869_, v_head_871_);
v_x_869_ = v___x_873_;
v_x_870_ = v_tail_872_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_node___redArg(lean_object* v_e_875_, lean_object* v_x_876_){
_start:
{
if (lean_obj_tag(v_x_876_) == 0)
{
lean_object* v_id_877_; lean_object* v_s_878_; lean_object* v_tables_879_; lean_object* v_defs_880_; lean_object* v_out_881_; lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_899_; 
v_id_877_ = lean_ctor_get(v_x_876_, 0);
lean_inc(v_id_877_);
v_s_878_ = lean_ctor_get(v_x_876_, 1);
lean_inc_ref(v_s_878_);
lean_dec_ref_known(v_x_876_, 2);
v_tables_879_ = lean_ctor_get(v_e_875_, 0);
v_defs_880_ = lean_ctor_get(v_e_875_, 1);
v_out_881_ = lean_ctor_get(v_e_875_, 2);
v_isSharedCheck_899_ = !lean_is_exclusive(v_e_875_);
if (v_isSharedCheck_899_ == 0)
{
v___x_883_ = v_e_875_;
v_isShared_884_ = v_isSharedCheck_899_;
goto v_resetjp_882_;
}
else
{
lean_inc(v_out_881_);
lean_inc(v_defs_880_);
lean_inc(v_tables_879_);
lean_dec(v_e_875_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_899_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
uint8_t v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; uint8_t v___x_894_; lean_object* v___x_895_; lean_object* v___x_897_; 
v___x_885_ = 0;
v___x_886_ = lean_byte_array_push(v_out_881_, v___x_885_);
v___x_887_ = l_Lasm_UI_Encode_pushVar(v___x_886_, v_id_877_);
v___x_888_ = lean_string_utf8_byte_size(v_s_878_);
v___x_889_ = l_Lasm_UI_Encode_pushVar(v___x_887_, v___x_888_);
v___x_890_ = lean_string_to_utf8(v_s_878_);
v___x_891_ = lean_unsigned_to_nat(0u);
v___x_892_ = lean_byte_array_size(v___x_889_);
v___x_893_ = lean_byte_array_size(v___x_890_);
v___x_894_ = 0;
v___x_895_ = lean_byte_array_copy_slice(v___x_890_, v___x_891_, v___x_889_, v___x_892_, v___x_893_, v___x_894_);
lean_dec_ref(v___x_890_);
if (v_isShared_884_ == 0)
{
lean_ctor_set(v___x_883_, 2, v___x_895_);
v___x_897_ = v___x_883_;
goto v_reusejp_896_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v_tables_879_);
lean_ctor_set(v_reuseFailAlloc_898_, 1, v_defs_880_);
lean_ctor_set(v_reuseFailAlloc_898_, 2, v___x_895_);
v___x_897_ = v_reuseFailAlloc_898_;
goto v_reusejp_896_;
}
v_reusejp_896_:
{
return v___x_897_;
}
}
}
else
{
lean_object* v_id_900_; uint8_t v_ns_901_; lean_object* v_tag_902_; lean_object* v_attrs_903_; lean_object* v_children_904_; lean_object* v_tables_905_; lean_object* v_defs_906_; lean_object* v_out_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_944_; 
v_id_900_ = lean_ctor_get(v_x_876_, 0);
lean_inc(v_id_900_);
v_ns_901_ = lean_ctor_get_uint8(v_x_876_, sizeof(void*)*5);
v_tag_902_ = lean_ctor_get(v_x_876_, 1);
lean_inc_ref(v_tag_902_);
v_attrs_903_ = lean_ctor_get(v_x_876_, 3);
lean_inc(v_attrs_903_);
v_children_904_ = lean_ctor_get(v_x_876_, 4);
lean_inc(v_children_904_);
lean_dec_ref_known(v_x_876_, 5);
v_tables_905_ = lean_ctor_get(v_e_875_, 0);
v_defs_906_ = lean_ctor_get(v_e_875_, 1);
v_out_907_ = lean_ctor_get(v_e_875_, 2);
v_isSharedCheck_944_ = !lean_is_exclusive(v_e_875_);
if (v_isSharedCheck_944_ == 0)
{
v___x_909_ = v_e_875_;
v_isShared_910_ = v_isSharedCheck_944_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_out_907_);
lean_inc(v_defs_906_);
lean_inc(v_tables_905_);
lean_dec(v_e_875_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_944_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
uint8_t v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_915_; 
v___x_911_ = l_Lasm_UI_Encode_Enc_nsByte(v_ns_901_);
v___x_912_ = lean_byte_array_push(v_out_907_, v___x_911_);
v___x_913_ = l_Lasm_UI_Encode_pushVar(v___x_912_, v_id_900_);
if (v_isShared_910_ == 0)
{
lean_ctor_set(v___x_909_, 2, v___x_913_);
v___x_915_ = v___x_909_;
goto v_reusejp_914_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v_tables_905_);
lean_ctor_set(v_reuseFailAlloc_943_, 1, v_defs_906_);
lean_ctor_set(v_reuseFailAlloc_943_, 2, v___x_913_);
v___x_915_ = v_reuseFailAlloc_943_;
goto v_reusejp_914_;
}
v_reusejp_914_:
{
lean_object* v_e_916_; lean_object* v_tables_917_; lean_object* v_defs_918_; lean_object* v_out_919_; lean_object* v___x_921_; uint8_t v_isShared_922_; uint8_t v_isSharedCheck_942_; 
v_e_916_ = l_Lasm_UI_Encode_Enc_name(v___x_915_, v_tag_902_);
v_tables_917_ = lean_ctor_get(v_e_916_, 0);
v_defs_918_ = lean_ctor_get(v_e_916_, 1);
v_out_919_ = lean_ctor_get(v_e_916_, 2);
v_isSharedCheck_942_ = !lean_is_exclusive(v_e_916_);
if (v_isSharedCheck_942_ == 0)
{
v___x_921_ = v_e_916_;
v_isShared_922_ = v_isSharedCheck_942_;
goto v_resetjp_920_;
}
else
{
lean_inc(v_out_919_);
lean_inc(v_defs_918_);
lean_inc(v_tables_917_);
lean_dec(v_e_916_);
v___x_921_ = lean_box(0);
v_isShared_922_ = v_isSharedCheck_942_;
goto v_resetjp_920_;
}
v_resetjp_920_:
{
lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_926_; 
v___x_923_ = l_List_lengthTR___redArg(v_attrs_903_);
v___x_924_ = l_Lasm_UI_Encode_pushVar(v_out_919_, v___x_923_);
if (v_isShared_922_ == 0)
{
lean_ctor_set(v___x_921_, 2, v___x_924_);
v___x_926_ = v___x_921_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_941_; 
v_reuseFailAlloc_941_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_941_, 0, v_tables_917_);
lean_ctor_set(v_reuseFailAlloc_941_, 1, v_defs_918_);
lean_ctor_set(v_reuseFailAlloc_941_, 2, v___x_924_);
v___x_926_ = v_reuseFailAlloc_941_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
lean_object* v_e_927_; lean_object* v_tables_928_; lean_object* v_defs_929_; lean_object* v_out_930_; lean_object* v___x_932_; uint8_t v_isShared_933_; uint8_t v_isSharedCheck_940_; 
v_e_927_ = l_List_foldl___at___00Lasm_UI_Encode_Enc_node_spec__0___redArg(v___x_926_, v_attrs_903_);
v_tables_928_ = lean_ctor_get(v_e_927_, 0);
v_defs_929_ = lean_ctor_get(v_e_927_, 1);
v_out_930_ = lean_ctor_get(v_e_927_, 2);
v_isSharedCheck_940_ = !lean_is_exclusive(v_e_927_);
if (v_isSharedCheck_940_ == 0)
{
v___x_932_ = v_e_927_;
v_isShared_933_ = v_isSharedCheck_940_;
goto v_resetjp_931_;
}
else
{
lean_inc(v_out_930_);
lean_inc(v_defs_929_);
lean_inc(v_tables_928_);
lean_dec(v_e_927_);
v___x_932_ = lean_box(0);
v_isShared_933_ = v_isSharedCheck_940_;
goto v_resetjp_931_;
}
v_resetjp_931_:
{
lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_937_; 
v___x_934_ = l_List_lengthTR___redArg(v_children_904_);
v___x_935_ = l_Lasm_UI_Encode_pushVar(v_out_930_, v___x_934_);
if (v_isShared_933_ == 0)
{
lean_ctor_set(v___x_932_, 2, v___x_935_);
v___x_937_ = v___x_932_;
goto v_reusejp_936_;
}
else
{
lean_object* v_reuseFailAlloc_939_; 
v_reuseFailAlloc_939_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_939_, 0, v_tables_928_);
lean_ctor_set(v_reuseFailAlloc_939_, 1, v_defs_929_);
lean_ctor_set(v_reuseFailAlloc_939_, 2, v___x_935_);
v___x_937_ = v_reuseFailAlloc_939_;
goto v_reusejp_936_;
}
v_reusejp_936_:
{
lean_object* v___x_938_; 
v___x_938_ = l_Lasm_UI_Encode_Enc_nodes___redArg(v___x_937_, v_children_904_);
return v___x_938_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_nodes___redArg(lean_object* v_e_945_, lean_object* v_x_946_){
_start:
{
if (lean_obj_tag(v_x_946_) == 0)
{
return v_e_945_;
}
else
{
lean_object* v_head_947_; lean_object* v_tail_948_; lean_object* v___x_949_; 
v_head_947_ = lean_ctor_get(v_x_946_, 0);
lean_inc(v_head_947_);
v_tail_948_ = lean_ctor_get(v_x_946_, 1);
lean_inc(v_tail_948_);
lean_dec_ref_known(v_x_946_, 2);
v___x_949_ = l_Lasm_UI_Encode_Enc_node___redArg(v_e_945_, v_head_947_);
v_e_945_ = v___x_949_;
v_x_946_ = v_tail_948_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_nodes(lean_object* v_Msg_951_, lean_object* v_e_952_, lean_object* v_x_953_){
_start:
{
lean_object* v___x_954_; 
v___x_954_ = l_Lasm_UI_Encode_Enc_nodes___redArg(v_e_952_, v_x_953_);
return v___x_954_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_node(lean_object* v_Msg_955_, lean_object* v_e_956_, lean_object* v_x_957_){
_start:
{
lean_object* v___x_958_; 
v___x_958_ = l_Lasm_UI_Encode_Enc_node___redArg(v_e_956_, v_x_957_);
return v___x_958_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_node_spec__0(lean_object* v_Msg_959_, lean_object* v_x_960_, lean_object* v_x_961_){
_start:
{
lean_object* v___x_962_; 
v___x_962_ = l_List_foldl___at___00Lasm_UI_Encode_Enc_node_spec__0___redArg(v_x_960_, v_x_961_);
return v___x_962_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_before(lean_object* v_e_963_, lean_object* v_x_964_){
_start:
{
if (lean_obj_tag(v_x_964_) == 0)
{
lean_object* v_tables_965_; lean_object* v_defs_966_; lean_object* v_out_967_; lean_object* v___x_969_; uint8_t v_isShared_970_; uint8_t v_isSharedCheck_976_; 
v_tables_965_ = lean_ctor_get(v_e_963_, 0);
v_defs_966_ = lean_ctor_get(v_e_963_, 1);
v_out_967_ = lean_ctor_get(v_e_963_, 2);
v_isSharedCheck_976_ = !lean_is_exclusive(v_e_963_);
if (v_isSharedCheck_976_ == 0)
{
v___x_969_ = v_e_963_;
v_isShared_970_ = v_isSharedCheck_976_;
goto v_resetjp_968_;
}
else
{
lean_inc(v_out_967_);
lean_inc(v_defs_966_);
lean_inc(v_tables_965_);
lean_dec(v_e_963_);
v___x_969_ = lean_box(0);
v_isShared_970_ = v_isSharedCheck_976_;
goto v_resetjp_968_;
}
v_resetjp_968_:
{
uint8_t v___x_971_; lean_object* v___x_972_; lean_object* v___x_974_; 
v___x_971_ = 0;
v___x_972_ = lean_byte_array_push(v_out_967_, v___x_971_);
if (v_isShared_970_ == 0)
{
lean_ctor_set(v___x_969_, 2, v___x_972_);
v___x_974_ = v___x_969_;
goto v_reusejp_973_;
}
else
{
lean_object* v_reuseFailAlloc_975_; 
v_reuseFailAlloc_975_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_975_, 0, v_tables_965_);
lean_ctor_set(v_reuseFailAlloc_975_, 1, v_defs_966_);
lean_ctor_set(v_reuseFailAlloc_975_, 2, v___x_972_);
v___x_974_ = v_reuseFailAlloc_975_;
goto v_reusejp_973_;
}
v_reusejp_973_:
{
return v___x_974_;
}
}
}
else
{
lean_object* v_val_977_; lean_object* v_tables_978_; lean_object* v_defs_979_; lean_object* v_out_980_; lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_990_; 
v_val_977_ = lean_ctor_get(v_x_964_, 0);
v_tables_978_ = lean_ctor_get(v_e_963_, 0);
v_defs_979_ = lean_ctor_get(v_e_963_, 1);
v_out_980_ = lean_ctor_get(v_e_963_, 2);
v_isSharedCheck_990_ = !lean_is_exclusive(v_e_963_);
if (v_isSharedCheck_990_ == 0)
{
v___x_982_ = v_e_963_;
v_isShared_983_ = v_isSharedCheck_990_;
goto v_resetjp_981_;
}
else
{
lean_inc(v_out_980_);
lean_inc(v_defs_979_);
lean_inc(v_tables_978_);
lean_dec(v_e_963_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_990_;
goto v_resetjp_981_;
}
v_resetjp_981_:
{
lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_988_; 
v___x_984_ = lean_unsigned_to_nat(1u);
v___x_985_ = lean_nat_add(v_val_977_, v___x_984_);
v___x_986_ = l_Lasm_UI_Encode_pushVar(v_out_980_, v___x_985_);
if (v_isShared_983_ == 0)
{
lean_ctor_set(v___x_982_, 2, v___x_986_);
v___x_988_ = v___x_982_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v_tables_978_);
lean_ctor_set(v_reuseFailAlloc_989_, 1, v_defs_979_);
lean_ctor_set(v_reuseFailAlloc_989_, 2, v___x_986_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
return v___x_988_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_before___boxed(lean_object* v_e_991_, lean_object* v_x_992_){
_start:
{
lean_object* v_res_993_; 
v_res_993_ = l_Lasm_UI_Encode_Enc_before(v_e_991_, v_x_992_);
lean_dec(v_x_992_);
return v_res_993_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lasm_UI_Encode_Enc_op_spec__0(lean_object* v_x_994_, lean_object* v_x_995_){
_start:
{
if (lean_obj_tag(v_x_995_) == 0)
{
return v_x_994_;
}
else
{
lean_object* v_head_996_; lean_object* v_tail_997_; lean_object* v___x_998_; 
v_head_996_ = lean_ctor_get(v_x_995_, 0);
lean_inc(v_head_996_);
v_tail_997_ = lean_ctor_get(v_x_995_, 1);
lean_inc(v_tail_997_);
lean_dec_ref_known(v_x_995_, 2);
v___x_998_ = l_Lasm_UI_Encode_Enc_attrOp(v_x_994_, v_head_996_);
v_x_994_ = v___x_998_;
v_x_995_ = v_tail_997_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_op___redArg(lean_object* v_parent_1000_, lean_object* v_e_1001_, lean_object* v_x_1002_){
_start:
{
switch(lean_obj_tag(v_x_1002_))
{
case 0:
{
lean_object* v_node_1003_; lean_object* v_before_1004_; lean_object* v_tables_1005_; lean_object* v_defs_1006_; lean_object* v_out_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1028_; 
v_node_1003_ = lean_ctor_get(v_x_1002_, 0);
lean_inc_ref(v_node_1003_);
v_before_1004_ = lean_ctor_get(v_x_1002_, 1);
lean_inc(v_before_1004_);
lean_dec_ref_known(v_x_1002_, 2);
v_tables_1005_ = lean_ctor_get(v_e_1001_, 0);
v_defs_1006_ = lean_ctor_get(v_e_1001_, 1);
v_out_1007_ = lean_ctor_get(v_e_1001_, 2);
v_isSharedCheck_1028_ = !lean_is_exclusive(v_e_1001_);
if (v_isSharedCheck_1028_ == 0)
{
v___x_1009_ = v_e_1001_;
v_isShared_1010_ = v_isSharedCheck_1028_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_out_1007_);
lean_inc(v_defs_1006_);
lean_inc(v_tables_1005_);
lean_dec(v_e_1001_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1028_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
uint8_t v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; 
v___x_1011_ = 1;
v___x_1012_ = lean_byte_array_push(v_out_1007_, v___x_1011_);
v___x_1013_ = l_Lasm_UI_Encode_pushVar(v___x_1012_, v_parent_1000_);
if (lean_obj_tag(v_before_1004_) == 0)
{
uint8_t v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1017_; 
v___x_1014_ = 0;
v___x_1015_ = lean_byte_array_push(v___x_1013_, v___x_1014_);
if (v_isShared_1010_ == 0)
{
lean_ctor_set(v___x_1009_, 2, v___x_1015_);
v___x_1017_ = v___x_1009_;
goto v_reusejp_1016_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v_tables_1005_);
lean_ctor_set(v_reuseFailAlloc_1019_, 1, v_defs_1006_);
lean_ctor_set(v_reuseFailAlloc_1019_, 2, v___x_1015_);
v___x_1017_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1016_;
}
v_reusejp_1016_:
{
lean_object* v___x_1018_; 
v___x_1018_ = l_Lasm_UI_Encode_Enc_node___redArg(v___x_1017_, v_node_1003_);
return v___x_1018_;
}
}
else
{
lean_object* v_val_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1025_; 
v_val_1020_ = lean_ctor_get(v_before_1004_, 0);
lean_inc(v_val_1020_);
lean_dec_ref_known(v_before_1004_, 1);
v___x_1021_ = lean_unsigned_to_nat(1u);
v___x_1022_ = lean_nat_add(v_val_1020_, v___x_1021_);
lean_dec(v_val_1020_);
v___x_1023_ = l_Lasm_UI_Encode_pushVar(v___x_1013_, v___x_1022_);
if (v_isShared_1010_ == 0)
{
lean_ctor_set(v___x_1009_, 2, v___x_1023_);
v___x_1025_ = v___x_1009_;
goto v_reusejp_1024_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v_tables_1005_);
lean_ctor_set(v_reuseFailAlloc_1027_, 1, v_defs_1006_);
lean_ctor_set(v_reuseFailAlloc_1027_, 2, v___x_1023_);
v___x_1025_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1024_;
}
v_reusejp_1024_:
{
lean_object* v___x_1026_; 
v___x_1026_ = l_Lasm_UI_Encode_Enc_node___redArg(v___x_1025_, v_node_1003_);
return v___x_1026_;
}
}
}
}
case 1:
{
lean_object* v_id_1029_; lean_object* v_before_1030_; lean_object* v_tables_1031_; lean_object* v_defs_1032_; lean_object* v_out_1033_; lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1053_; 
v_id_1029_ = lean_ctor_get(v_x_1002_, 0);
lean_inc(v_id_1029_);
v_before_1030_ = lean_ctor_get(v_x_1002_, 1);
lean_inc(v_before_1030_);
lean_dec_ref_known(v_x_1002_, 2);
v_tables_1031_ = lean_ctor_get(v_e_1001_, 0);
v_defs_1032_ = lean_ctor_get(v_e_1001_, 1);
v_out_1033_ = lean_ctor_get(v_e_1001_, 2);
v_isSharedCheck_1053_ = !lean_is_exclusive(v_e_1001_);
if (v_isSharedCheck_1053_ == 0)
{
v___x_1035_ = v_e_1001_;
v_isShared_1036_ = v_isSharedCheck_1053_;
goto v_resetjp_1034_;
}
else
{
lean_inc(v_out_1033_);
lean_inc(v_defs_1032_);
lean_inc(v_tables_1031_);
lean_dec(v_e_1001_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1053_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
uint8_t v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; 
v___x_1037_ = 2;
v___x_1038_ = lean_byte_array_push(v_out_1033_, v___x_1037_);
v___x_1039_ = l_Lasm_UI_Encode_pushVar(v___x_1038_, v_parent_1000_);
v___x_1040_ = l_Lasm_UI_Encode_pushVar(v___x_1039_, v_id_1029_);
if (lean_obj_tag(v_before_1030_) == 0)
{
uint8_t v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1044_; 
v___x_1041_ = 0;
v___x_1042_ = lean_byte_array_push(v___x_1040_, v___x_1041_);
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 2, v___x_1042_);
v___x_1044_ = v___x_1035_;
goto v_reusejp_1043_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v_tables_1031_);
lean_ctor_set(v_reuseFailAlloc_1045_, 1, v_defs_1032_);
lean_ctor_set(v_reuseFailAlloc_1045_, 2, v___x_1042_);
v___x_1044_ = v_reuseFailAlloc_1045_;
goto v_reusejp_1043_;
}
v_reusejp_1043_:
{
return v___x_1044_;
}
}
else
{
lean_object* v_val_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1051_; 
v_val_1046_ = lean_ctor_get(v_before_1030_, 0);
lean_inc(v_val_1046_);
lean_dec_ref_known(v_before_1030_, 1);
v___x_1047_ = lean_unsigned_to_nat(1u);
v___x_1048_ = lean_nat_add(v_val_1046_, v___x_1047_);
lean_dec(v_val_1046_);
v___x_1049_ = l_Lasm_UI_Encode_pushVar(v___x_1040_, v___x_1048_);
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 2, v___x_1049_);
v___x_1051_ = v___x_1035_;
goto v_reusejp_1050_;
}
else
{
lean_object* v_reuseFailAlloc_1052_; 
v_reuseFailAlloc_1052_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1052_, 0, v_tables_1031_);
lean_ctor_set(v_reuseFailAlloc_1052_, 1, v_defs_1032_);
lean_ctor_set(v_reuseFailAlloc_1052_, 2, v___x_1049_);
v___x_1051_ = v_reuseFailAlloc_1052_;
goto v_reusejp_1050_;
}
v_reusejp_1050_:
{
return v___x_1051_;
}
}
}
}
case 2:
{
lean_object* v_id_1054_; lean_object* v_tables_1055_; lean_object* v_defs_1056_; lean_object* v_out_1057_; lean_object* v___x_1059_; uint8_t v_isShared_1060_; uint8_t v_isSharedCheck_1067_; 
lean_dec(v_parent_1000_);
v_id_1054_ = lean_ctor_get(v_x_1002_, 0);
lean_inc(v_id_1054_);
lean_dec_ref_known(v_x_1002_, 1);
v_tables_1055_ = lean_ctor_get(v_e_1001_, 0);
v_defs_1056_ = lean_ctor_get(v_e_1001_, 1);
v_out_1057_ = lean_ctor_get(v_e_1001_, 2);
v_isSharedCheck_1067_ = !lean_is_exclusive(v_e_1001_);
if (v_isSharedCheck_1067_ == 0)
{
v___x_1059_ = v_e_1001_;
v_isShared_1060_ = v_isSharedCheck_1067_;
goto v_resetjp_1058_;
}
else
{
lean_inc(v_out_1057_);
lean_inc(v_defs_1056_);
lean_inc(v_tables_1055_);
lean_dec(v_e_1001_);
v___x_1059_ = lean_box(0);
v_isShared_1060_ = v_isSharedCheck_1067_;
goto v_resetjp_1058_;
}
v_resetjp_1058_:
{
uint8_t v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1065_; 
v___x_1061_ = 3;
v___x_1062_ = lean_byte_array_push(v_out_1057_, v___x_1061_);
v___x_1063_ = l_Lasm_UI_Encode_pushVar(v___x_1062_, v_id_1054_);
if (v_isShared_1060_ == 0)
{
lean_ctor_set(v___x_1059_, 2, v___x_1063_);
v___x_1065_ = v___x_1059_;
goto v_reusejp_1064_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v_tables_1055_);
lean_ctor_set(v_reuseFailAlloc_1066_, 1, v_defs_1056_);
lean_ctor_set(v_reuseFailAlloc_1066_, 2, v___x_1063_);
v___x_1065_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1064_;
}
v_reusejp_1064_:
{
return v___x_1065_;
}
}
}
case 3:
{
lean_object* v_tables_1068_; lean_object* v_defs_1069_; lean_object* v_out_1070_; lean_object* v___x_1072_; uint8_t v_isShared_1073_; uint8_t v_isSharedCheck_1080_; 
v_tables_1068_ = lean_ctor_get(v_e_1001_, 0);
v_defs_1069_ = lean_ctor_get(v_e_1001_, 1);
v_out_1070_ = lean_ctor_get(v_e_1001_, 2);
v_isSharedCheck_1080_ = !lean_is_exclusive(v_e_1001_);
if (v_isSharedCheck_1080_ == 0)
{
v___x_1072_ = v_e_1001_;
v_isShared_1073_ = v_isSharedCheck_1080_;
goto v_resetjp_1071_;
}
else
{
lean_inc(v_out_1070_);
lean_inc(v_defs_1069_);
lean_inc(v_tables_1068_);
lean_dec(v_e_1001_);
v___x_1072_ = lean_box(0);
v_isShared_1073_ = v_isSharedCheck_1080_;
goto v_resetjp_1071_;
}
v_resetjp_1071_:
{
uint8_t v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1078_; 
v___x_1074_ = 4;
v___x_1075_ = lean_byte_array_push(v_out_1070_, v___x_1074_);
v___x_1076_ = l_Lasm_UI_Encode_pushVar(v___x_1075_, v_parent_1000_);
if (v_isShared_1073_ == 0)
{
lean_ctor_set(v___x_1072_, 2, v___x_1076_);
v___x_1078_ = v___x_1072_;
goto v_reusejp_1077_;
}
else
{
lean_object* v_reuseFailAlloc_1079_; 
v_reuseFailAlloc_1079_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1079_, 0, v_tables_1068_);
lean_ctor_set(v_reuseFailAlloc_1079_, 1, v_defs_1069_);
lean_ctor_set(v_reuseFailAlloc_1079_, 2, v___x_1076_);
v___x_1078_ = v_reuseFailAlloc_1079_;
goto v_reusejp_1077_;
}
v_reusejp_1077_:
{
return v___x_1078_;
}
}
}
case 4:
{
lean_object* v_id_1081_; lean_object* v_s_1082_; lean_object* v_tables_1083_; lean_object* v_defs_1084_; lean_object* v_out_1085_; lean_object* v___x_1087_; uint8_t v_isShared_1088_; uint8_t v_isSharedCheck_1103_; 
lean_dec(v_parent_1000_);
v_id_1081_ = lean_ctor_get(v_x_1002_, 0);
lean_inc(v_id_1081_);
v_s_1082_ = lean_ctor_get(v_x_1002_, 1);
lean_inc_ref(v_s_1082_);
lean_dec_ref_known(v_x_1002_, 2);
v_tables_1083_ = lean_ctor_get(v_e_1001_, 0);
v_defs_1084_ = lean_ctor_get(v_e_1001_, 1);
v_out_1085_ = lean_ctor_get(v_e_1001_, 2);
v_isSharedCheck_1103_ = !lean_is_exclusive(v_e_1001_);
if (v_isSharedCheck_1103_ == 0)
{
v___x_1087_ = v_e_1001_;
v_isShared_1088_ = v_isSharedCheck_1103_;
goto v_resetjp_1086_;
}
else
{
lean_inc(v_out_1085_);
lean_inc(v_defs_1084_);
lean_inc(v_tables_1083_);
lean_dec(v_e_1001_);
v___x_1087_ = lean_box(0);
v_isShared_1088_ = v_isSharedCheck_1103_;
goto v_resetjp_1086_;
}
v_resetjp_1086_:
{
uint8_t v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; uint8_t v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1101_; 
v___x_1089_ = 5;
v___x_1090_ = lean_byte_array_push(v_out_1085_, v___x_1089_);
v___x_1091_ = l_Lasm_UI_Encode_pushVar(v___x_1090_, v_id_1081_);
v___x_1092_ = lean_string_utf8_byte_size(v_s_1082_);
v___x_1093_ = l_Lasm_UI_Encode_pushVar(v___x_1091_, v___x_1092_);
v___x_1094_ = lean_string_to_utf8(v_s_1082_);
v___x_1095_ = lean_unsigned_to_nat(0u);
v___x_1096_ = lean_byte_array_size(v___x_1093_);
v___x_1097_ = lean_byte_array_size(v___x_1094_);
v___x_1098_ = 0;
v___x_1099_ = lean_byte_array_copy_slice(v___x_1094_, v___x_1095_, v___x_1093_, v___x_1096_, v___x_1097_, v___x_1098_);
lean_dec_ref(v___x_1094_);
if (v_isShared_1088_ == 0)
{
lean_ctor_set(v___x_1087_, 2, v___x_1099_);
v___x_1101_ = v___x_1087_;
goto v_reusejp_1100_;
}
else
{
lean_object* v_reuseFailAlloc_1102_; 
v_reuseFailAlloc_1102_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1102_, 0, v_tables_1083_);
lean_ctor_set(v_reuseFailAlloc_1102_, 1, v_defs_1084_);
lean_ctor_set(v_reuseFailAlloc_1102_, 2, v___x_1099_);
v___x_1101_ = v_reuseFailAlloc_1102_;
goto v_reusejp_1100_;
}
v_reusejp_1100_:
{
return v___x_1101_;
}
}
}
case 5:
{
lean_object* v_id_1104_; lean_object* v_ops_1105_; lean_object* v_tables_1106_; lean_object* v_defs_1107_; lean_object* v_out_1108_; lean_object* v___x_1110_; uint8_t v_isShared_1111_; uint8_t v_isSharedCheck_1121_; 
lean_dec(v_parent_1000_);
v_id_1104_ = lean_ctor_get(v_x_1002_, 0);
lean_inc(v_id_1104_);
v_ops_1105_ = lean_ctor_get(v_x_1002_, 1);
lean_inc(v_ops_1105_);
lean_dec_ref_known(v_x_1002_, 2);
v_tables_1106_ = lean_ctor_get(v_e_1001_, 0);
v_defs_1107_ = lean_ctor_get(v_e_1001_, 1);
v_out_1108_ = lean_ctor_get(v_e_1001_, 2);
v_isSharedCheck_1121_ = !lean_is_exclusive(v_e_1001_);
if (v_isSharedCheck_1121_ == 0)
{
v___x_1110_ = v_e_1001_;
v_isShared_1111_ = v_isSharedCheck_1121_;
goto v_resetjp_1109_;
}
else
{
lean_inc(v_out_1108_);
lean_inc(v_defs_1107_);
lean_inc(v_tables_1106_);
lean_dec(v_e_1001_);
v___x_1110_ = lean_box(0);
v_isShared_1111_ = v_isSharedCheck_1121_;
goto v_resetjp_1109_;
}
v_resetjp_1109_:
{
uint8_t v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1118_; 
v___x_1112_ = 6;
v___x_1113_ = lean_byte_array_push(v_out_1108_, v___x_1112_);
v___x_1114_ = l_Lasm_UI_Encode_pushVar(v___x_1113_, v_id_1104_);
v___x_1115_ = l_List_lengthTR___redArg(v_ops_1105_);
v___x_1116_ = l_Lasm_UI_Encode_pushVar(v___x_1114_, v___x_1115_);
if (v_isShared_1111_ == 0)
{
lean_ctor_set(v___x_1110_, 2, v___x_1116_);
v___x_1118_ = v___x_1110_;
goto v_reusejp_1117_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v_tables_1106_);
lean_ctor_set(v_reuseFailAlloc_1120_, 1, v_defs_1107_);
lean_ctor_set(v_reuseFailAlloc_1120_, 2, v___x_1116_);
v___x_1118_ = v_reuseFailAlloc_1120_;
goto v_reusejp_1117_;
}
v_reusejp_1117_:
{
lean_object* v___x_1119_; 
v___x_1119_ = l_List_foldl___at___00Lasm_UI_Encode_Enc_op_spec__0(v___x_1118_, v_ops_1105_);
return v___x_1119_;
}
}
}
default: 
{
lean_object* v_id_1122_; lean_object* v_ops_1123_; lean_object* v___x_1124_; 
lean_dec(v_parent_1000_);
v_id_1122_ = lean_ctor_get(v_x_1002_, 0);
lean_inc(v_id_1122_);
v_ops_1123_ = lean_ctor_get(v_x_1002_, 1);
lean_inc(v_ops_1123_);
lean_dec_ref_known(v_x_1002_, 2);
v___x_1124_ = l_Lasm_UI_Encode_Enc_opList___redArg(v_id_1122_, v_e_1001_, v_ops_1123_);
return v___x_1124_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_opList___redArg(lean_object* v_parent_1125_, lean_object* v_e_1126_, lean_object* v_x_1127_){
_start:
{
if (lean_obj_tag(v_x_1127_) == 0)
{
lean_dec(v_parent_1125_);
return v_e_1126_;
}
else
{
lean_object* v_head_1128_; lean_object* v_tail_1129_; lean_object* v___x_1130_; 
v_head_1128_ = lean_ctor_get(v_x_1127_, 0);
lean_inc(v_head_1128_);
v_tail_1129_ = lean_ctor_get(v_x_1127_, 1);
lean_inc(v_tail_1129_);
lean_dec_ref_known(v_x_1127_, 2);
lean_inc(v_parent_1125_);
v___x_1130_ = l_Lasm_UI_Encode_Enc_op___redArg(v_parent_1125_, v_e_1126_, v_head_1128_);
v_e_1126_ = v___x_1130_;
v_x_1127_ = v_tail_1129_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_opList(lean_object* v_Msg_1132_, lean_object* v_parent_1133_, lean_object* v_e_1134_, lean_object* v_x_1135_){
_start:
{
lean_object* v___x_1136_; 
v___x_1136_ = l_Lasm_UI_Encode_Enc_opList___redArg(v_parent_1133_, v_e_1134_, v_x_1135_);
return v___x_1136_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_Enc_op(lean_object* v_Msg_1137_, lean_object* v_parent_1138_, lean_object* v_e_1139_, lean_object* v_x_1140_){
_start:
{
lean_object* v___x_1141_; 
v___x_1141_ = l_Lasm_UI_Encode_Enc_op___redArg(v_parent_1138_, v_e_1139_, v_x_1140_);
return v___x_1141_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___redArg(lean_object* v_root_1142_, lean_object* v_as_1143_, size_t v_i_1144_, size_t v_stop_1145_, lean_object* v_b_1146_){
_start:
{
uint8_t v___x_1147_; 
v___x_1147_ = lean_usize_dec_eq(v_i_1144_, v_stop_1145_);
if (v___x_1147_ == 0)
{
lean_object* v___x_1148_; lean_object* v___x_1149_; size_t v___x_1150_; size_t v___x_1151_; 
v___x_1148_ = lean_array_uget_borrowed(v_as_1143_, v_i_1144_);
lean_inc(v___x_1148_);
lean_inc(v_root_1142_);
v___x_1149_ = l_Lasm_UI_Encode_Enc_op___redArg(v_root_1142_, v_b_1146_, v___x_1148_);
v___x_1150_ = ((size_t)1ULL);
v___x_1151_ = lean_usize_add(v_i_1144_, v___x_1150_);
v_i_1144_ = v___x_1151_;
v_b_1146_ = v___x_1149_;
goto _start;
}
else
{
lean_dec(v_root_1142_);
return v_b_1146_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___redArg___boxed(lean_object* v_root_1153_, lean_object* v_as_1154_, lean_object* v_i_1155_, lean_object* v_stop_1156_, lean_object* v_b_1157_){
_start:
{
size_t v_i_boxed_1158_; size_t v_stop_boxed_1159_; lean_object* v_res_1160_; 
v_i_boxed_1158_ = lean_unbox_usize(v_i_1155_);
lean_dec(v_i_1155_);
v_stop_boxed_1159_ = lean_unbox_usize(v_stop_1156_);
lean_dec(v_stop_1156_);
v_res_1160_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___redArg(v_root_1153_, v_as_1154_, v_i_boxed_1158_, v_stop_boxed_1159_, v_b_1157_);
lean_dec_ref(v_as_1154_);
return v_res_1160_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_frame___redArg(lean_object* v_t_1161_, lean_object* v_ops_1162_, lean_object* v_root_1163_){
_start:
{
lean_object* v_tables_1165_; lean_object* v_defs_1166_; lean_object* v_out_1167_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; uint8_t v___x_1178_; 
v___x_1174_ = l_ByteArray_empty;
lean_inc_ref(v_t_1161_);
v___x_1175_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1175_, 0, v_t_1161_);
lean_ctor_set(v___x_1175_, 1, v___x_1174_);
lean_ctor_set(v___x_1175_, 2, v___x_1174_);
v___x_1176_ = lean_unsigned_to_nat(0u);
v___x_1177_ = lean_array_get_size(v_ops_1162_);
v___x_1178_ = lean_nat_dec_lt(v___x_1176_, v___x_1177_);
if (v___x_1178_ == 0)
{
lean_dec_ref_known(v___x_1175_, 3);
lean_dec(v_root_1163_);
v_tables_1165_ = v_t_1161_;
v_defs_1166_ = v___x_1174_;
v_out_1167_ = v___x_1174_;
goto v___jp_1164_;
}
else
{
size_t v___x_1179_; size_t v___x_1180_; lean_object* v___x_1181_; lean_object* v_tables_1182_; lean_object* v_defs_1183_; lean_object* v_out_1184_; 
lean_dec_ref(v_t_1161_);
v___x_1179_ = ((size_t)0ULL);
v___x_1180_ = lean_usize_of_nat(v___x_1177_);
v___x_1181_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___redArg(v_root_1163_, v_ops_1162_, v___x_1179_, v___x_1180_, v___x_1175_);
v_tables_1182_ = lean_ctor_get(v___x_1181_, 0);
lean_inc_ref(v_tables_1182_);
v_defs_1183_ = lean_ctor_get(v___x_1181_, 1);
lean_inc_ref(v_defs_1183_);
v_out_1184_ = lean_ctor_get(v___x_1181_, 2);
lean_inc_ref(v_out_1184_);
lean_dec_ref(v___x_1181_);
v_tables_1165_ = v_tables_1182_;
v_defs_1166_ = v_defs_1183_;
v_out_1167_ = v_out_1184_;
goto v___jp_1164_;
}
v___jp_1164_:
{
lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; uint8_t v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; 
v___x_1168_ = lean_unsigned_to_nat(0u);
v___x_1169_ = lean_byte_array_size(v_defs_1166_);
v___x_1170_ = lean_byte_array_size(v_out_1167_);
v___x_1171_ = 0;
v___x_1172_ = lean_byte_array_copy_slice(v_out_1167_, v___x_1168_, v_defs_1166_, v___x_1169_, v___x_1170_, v___x_1171_);
lean_dec_ref(v_out_1167_);
v___x_1173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1173_, 0, v___x_1172_);
lean_ctor_set(v___x_1173_, 1, v_tables_1165_);
return v___x_1173_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_frame___redArg___boxed(lean_object* v_t_1185_, lean_object* v_ops_1186_, lean_object* v_root_1187_){
_start:
{
lean_object* v_res_1188_; 
v_res_1188_ = l_Lasm_UI_Encode_frame___redArg(v_t_1185_, v_ops_1186_, v_root_1187_);
lean_dec_ref(v_ops_1186_);
return v_res_1188_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_frame(lean_object* v_Msg_1189_, lean_object* v_t_1190_, lean_object* v_ops_1191_, lean_object* v_root_1192_){
_start:
{
lean_object* v___x_1193_; 
v___x_1193_ = l_Lasm_UI_Encode_frame___redArg(v_t_1190_, v_ops_1191_, v_root_1192_);
return v___x_1193_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Encode_frame___boxed(lean_object* v_Msg_1194_, lean_object* v_t_1195_, lean_object* v_ops_1196_, lean_object* v_root_1197_){
_start:
{
lean_object* v_res_1198_; 
v_res_1198_ = l_Lasm_UI_Encode_frame(v_Msg_1194_, v_t_1195_, v_ops_1196_, v_root_1197_);
lean_dec_ref(v_ops_1196_);
return v_res_1198_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0(lean_object* v_Msg_1199_, lean_object* v_root_1200_, lean_object* v_as_1201_, size_t v_i_1202_, size_t v_stop_1203_, lean_object* v_b_1204_){
_start:
{
lean_object* v___x_1205_; 
v___x_1205_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___redArg(v_root_1200_, v_as_1201_, v_i_1202_, v_stop_1203_, v_b_1204_);
return v___x_1205_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0___boxed(lean_object* v_Msg_1206_, lean_object* v_root_1207_, lean_object* v_as_1208_, lean_object* v_i_1209_, lean_object* v_stop_1210_, lean_object* v_b_1211_){
_start:
{
size_t v_i_boxed_1212_; size_t v_stop_boxed_1213_; lean_object* v_res_1214_; 
v_i_boxed_1212_ = lean_unbox_usize(v_i_1209_);
lean_dec(v_i_1209_);
v_stop_boxed_1213_ = lean_unbox_usize(v_stop_1210_);
lean_dec(v_stop_1210_);
v_res_1214_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lasm_UI_Encode_frame_spec__0(v_Msg_1206_, v_root_1207_, v_as_1208_, v_i_boxed_1212_, v_stop_boxed_1213_, v_b_1211_);
lean_dec_ref(v_as_1208_);
return v_res_1214_;
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
