/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/NumbersQuicklook.framework/Versions/A/NumbersQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct TSUCellCoord {
	unsigned row;
	unsigned short column;
	char _preserveRow;
	char _preserveColumn;
} TSUCellCoord;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef const struct CGPath* CGPathRef;

typedef struct CGContext* CGContextRef;

typedef struct TSKUIDStruct {
	unsigned long long _lower;
	unsigned long long _upper;
} TSKUIDStruct;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> *>> {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> *>>;

typedef struct _compressed_pair<unsigned long, std::__1::hash<TSUCellCoord>> {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::hash<TSUCellCoord>>;

typedef struct _compressed_pair<float, std::__1::equal_to<TSUCellCoord>> {
	float __value_;
} compressed_pair<float, std::__1::equal_to<TSUCellCoord>>;

typedef struct _hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> {
	__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *>, std::__1::allocator<std::__1::__hash_node<TSUCellCoord, void *>>> {
	hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *>, std::__1::allocator<std::__1::__hash_node<TSUCellCoord, void *>>>;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> *>> {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> *>> __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> *>>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> *>>> {
	__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> *>> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> *>>>;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> *>>> {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> *>>> __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> *>>>;

typedef struct _hash_table<TSUCellCoord, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<TSUCellCoord>> {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *> *>>> __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSUCellCoord, void *> *>, std::__1::allocator<std::__1::__hash_node<TSUCellCoord, void *>>> __p1_;
	compressed_pair<unsigned long, std::__1::hash<TSUCellCoord>> __p2_;
	compressed_pair<float, std::__1::equal_to<TSUCellCoord>> __p3_;
} hash_table<TSUCellCoord, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<TSUCellCoord>>;

typedef struct unordered_set<TSUCellCoord, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<TSUCellCoord>> {
	hash_table<TSUCellCoord, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<TSUCellCoord>> __table_;
} unordered_set<TSUCellCoord, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<TSUCellCoord>>;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned field1 : 16;
	6 field2;
	unsigned field3 : 8;
	unsigned field4 : 3;
	unsigned field5 : 1;
	unsigned field6 : 1;
} SCD_Struct_TN18;

typedef struct {
	unsigned field1 : 8;
} SCD_Struct_TN19;

typedef struct {
	unsigned field1 : 8;
	unsigned field2 : 8;
	unsigned field3 : 1;
} SCD_Struct_TN20;

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	id field3;
} SCD_Struct_TN21;

typedef struct {
	unsigned field1 : 1;
	int field2;
	int field3;
	int field4;
} SCD_Struct_TN22;

typedef struct {
	id field1;
	id field2;
	unsigned field3;
	unsigned char field4;
} SCD_Struct_TN23;

typedef struct {
	unsigned( field1;
	/*function pointer*/void* field2;
	= field3;
	SCD_Struct_TN18 field4;
	SCD_Struct_TN19 field5;
	SCD_Struct_TN20 field6;
	SCD_Struct_TN21 field7;
	SCD_Struct_TN22 field8;
	SCD_Struct_TN23) field9;
} SCD_Struct_TN24;

typedef struct NSEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} NSEdgeInsets;

typedef struct CGColor* CGColorRef;

typedef struct _compressed_pair<TSUCellCoord *, std::__1::allocator<TSUCellCoord>> {
	TSUCellCoord __value_;
} compressed_pair<TSUCellCoord *, std::__1::allocator<TSUCellCoord>>;

typedef struct vector<TSUCellCoord, std::__1::allocator<TSUCellCoord>> {
	TSUCellCoord __begin_;
	TSUCellCoord __end_;
	compressed_pair<TSUCellCoord *, std::__1::allocator<TSUCellCoord>> __end_cap_;
} vector<TSUCellCoord, std::__1::allocator<TSUCellCoord>>;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_TN29;

typedef struct _compressed_pair<TSCERangeCoordinate *, std::__1::allocator<TSCERangeCoordinate>> {
	TSCERangeCoordinate __value_;
} compressed_pair<TSCERangeCoordinate *, std::__1::allocator<TSCERangeCoordinate>>;

typedef struct vector<TSCERangeCoordinate, std::__1::allocator<TSCERangeCoordinate>> {
	TSCERangeCoordinate __begin_;
	TSCERangeCoordinate __end_;
	compressed_pair<TSCERangeCoordinate *, std::__1::allocator<TSCERangeCoordinate>> __end_cap_;
} vector<TSCERangeCoordinate, std::__1::allocator<TSCERangeCoordinate>>;

typedef struct TSCERangeCoordinate {
	TSUCellCoord _topLeft;
	TSUCellCoord _bottomRight;
} TSCERangeCoordinate;

typedef struct {
	unsigned field1;
	unsigned field2;
} SCD_Struct_TN33;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<TSUCellCoord, std::__1::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>, std::__1::less<TSUCellCoord>, true>> {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<TSUCellCoord, std::__1::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>, std::__1::less<TSUCellCoord>, true>>;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>, void *>>> {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>, void *>>>;

typedef struct _tree<std::__1::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>, std::__1::__map_value_compare<TSUCellCoord, std::__1::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>, std::__1::less<TSUCellCoord>, true>, std::__1::allocator<std::__1::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>>> {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>, void *>>> __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<TSUCellCoord, std::__1::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>, std::__1::less<TSUCellCoord>, true>> __pair3_;
} tree<std::__1::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>, std::__1::__map_value_compare<TSUCellCoord, std::__1::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>, std::__1::less<TSUCellCoord>, true>, std::__1::allocator<std::__1::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>>>;

typedef struct map<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>, std::__1::less<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>>> {
	tree<std::__1::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>, std::__1::__map_value_compare<TSUCellCoord, std::__1::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>, std::__1::less<TSUCellCoord>, true>, std::__1::allocator<std::__1::__value_type<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>>> __tree_;
} map<TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>, std::__1::less<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, SFUtility::ObjcSharedPtr<NSObject>>>>;

typedef struct opaque_pthread_rwlock_t {
	long long __sig;
	char __opaque[192];
} opaque_pthread_rwlock_t;

typedef struct _compressed_pair<unsigned long, std::__1::less<TSUCellCoord>> {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::less<TSUCellCoord>>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSUCellCoord, void *>>> {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSUCellCoord, void *>>>;

typedef struct _tree<TSUCellCoord, std::__1::less<TSUCellCoord>, std::__1::allocator<TSUCellCoord>> {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSUCellCoord, void *>>> __pair1_;
	compressed_pair<unsigned long, std::__1::less<TSUCellCoord>> __pair3_;
} tree<TSUCellCoord, std::__1::less<TSUCellCoord>, std::__1::allocator<TSUCellCoord>>;

typedef struct set<TSUCellCoord, std::__1::less<TSUCellCoord>, std::__1::allocator<TSUCellCoord>> {
	tree<TSUCellCoord, std::__1::less<TSUCellCoord>, std::__1::allocator<TSUCellCoord>> __tree_;
} set<TSUCellCoord, std::__1::less<TSUCellCoord>, std::__1::allocator<TSUCellCoord>>;

typedef struct _compressed_pair<unsigned long *, std::__1::allocator<unsigned long>> {
	unsigned long long __value_;
} compressed_pair<unsigned long *, std::__1::allocator<unsigned long>>;

typedef struct vector<unsigned long, std::__1::allocator<unsigned long>> {
	unsigned long long __begin_;
	unsigned long long __end_;
	compressed_pair<unsigned long *, std::__1::allocator<unsigned long>> __end_cap_;
} vector<unsigned long, std::__1::allocator<unsigned long>>;

typedef struct TSCERangeRef {
	TSCERangeCoordinate range;
	TSKUIDStruct _tableUID;
} TSCERangeRef;

