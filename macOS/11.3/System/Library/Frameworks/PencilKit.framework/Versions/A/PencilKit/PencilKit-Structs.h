/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/PencilKit.framework/Versions/A/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct CGImage* CGImageRef;

typedef struct _NSZone* NSZoneRef;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct {
	_PKStrokePoint field1;
	char field2;
	long long field3;
	double field4;
	double field5;
	double field6;
	double field7;
	id field8;
	unsigned long long field9;
} SCD_Struct_PK4;

typedef struct {
	unsigned long long x;
	unsigned long long y;
	unsigned long long width;
	unsigned long long height;
} SCD_Struct_PK5;

typedef struct {
	int field1[4];
	int field2[4];
	double field3[4];
	double field4[4];
	CGImage field5;
	BOOL field6;
} SCD_Struct_PK6;

typedef struct _compressed_pair<unsigned char *, std::__1::allocator<unsigned char>> {
	char* __value_;
} compressed_pair<unsigned char *, std::__1::allocator<unsigned char>>;

typedef struct vector<unsigned char, std::__1::allocator<unsigned char>> {
	char* __begin_;
	char* __end_;
	compressed_pair<unsigned char *, std::__1::allocator<unsigned char>> __end_cap_;
} vector<unsigned char, std::__1::allocator<unsigned char>>;

typedef struct shared_ptr<PKStrokePathPointsShared> {
	PKStrokePathPointsShared __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<PKStrokePathPointsShared>;

typedef struct PKStrokePathPointsPrivate {
	shared_ptr<PKStrokePathPointsShared> constants;
	vector<unsigned char, std::__1::allocator<unsigned char>> pointsData;
} PKStrokePathPointsPrivate;

typedef struct CGColor* CGColorRef;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct PKStrokePoint {
	double timestamp;
	CGPoint location;
	double radius;
	double aspectRatio;
	double edgeWidth;
	double force;
	double azimuth;
	double altitude;
	double opacity;
} PKStrokePoint;

typedef struct _compressed_pair<(anonymous namespace)::StrokeVertex *, std::__1::allocator<(anonymous namespace)::StrokeVertex>> {
	StrokeVertex __value_;
} compressed_pair<(anonymous namespace)::StrokeVertex *, std::__1::allocator<(anonymous namespace)::StrokeVertex>>;

typedef struct vector<(anonymous namespace)::StrokeVertex, std::__1::allocator<(anonymous namespace)::StrokeVertex>> {
	StrokeVertex __begin_;
	StrokeVertex __end_;
	compressed_pair<(anonymous namespace)::StrokeVertex *, std::__1::allocator<(anonymous namespace)::StrokeVertex>> __end_cap_;
} vector<(anonymous namespace)::StrokeVertex, std::__1::allocator<(anonymous namespace)::StrokeVertex>>;

typedef struct _compressed_pair<PKMetalParticleStrokePoint *, std::__1::allocator<PKMetalParticleStrokePoint>> {
	PKMetalParticleStrokePoint __value_;
} compressed_pair<PKMetalParticleStrokePoint *, std::__1::allocator<PKMetalParticleStrokePoint>>;

typedef struct vector<PKMetalParticleStrokePoint, std::__1::allocator<PKMetalParticleStrokePoint>> {
	PKMetalParticleStrokePoint __begin_;
	PKMetalParticleStrokePoint __end_;
	compressed_pair<PKMetalParticleStrokePoint *, std::__1::allocator<PKMetalParticleStrokePoint>> __end_cap_;
} vector<PKMetalParticleStrokePoint, std::__1::allocator<PKMetalParticleStrokePoint>>;

typedef struct _compressed_pair<PKMetalPaintStrokePoint *, std::__1::allocator<PKMetalPaintStrokePoint>> {
	PKMetalPaintStrokePoint __value_;
} compressed_pair<PKMetalPaintStrokePoint *, std::__1::allocator<PKMetalPaintStrokePoint>>;

typedef struct vector<PKMetalPaintStrokePoint, std::__1::allocator<PKMetalPaintStrokePoint>> {
	PKMetalPaintStrokePoint __begin_;
	PKMetalPaintStrokePoint __end_;
	compressed_pair<PKMetalPaintStrokePoint *, std::__1::allocator<PKMetalPaintStrokePoint>> __end_cap_;
} vector<PKMetalPaintStrokePoint, std::__1::allocator<PKMetalPaintStrokePoint>>;

typedef struct _compressed_pair<PKMetalLiveStrokePaintStrokePoint *, std::__1::allocator<PKMetalLiveStrokePaintStrokePoint>> {
	PKMetalLiveStrokePaintStrokePoint __value_;
} compressed_pair<PKMetalLiveStrokePaintStrokePoint *, std::__1::allocator<PKMetalLiveStrokePaintStrokePoint>>;

typedef struct vector<PKMetalLiveStrokePaintStrokePoint, std::__1::allocator<PKMetalLiveStrokePaintStrokePoint>> {
	PKMetalLiveStrokePaintStrokePoint __begin_;
	PKMetalLiveStrokePaintStrokePoint __end_;
	compressed_pair<PKMetalLiveStrokePaintStrokePoint *, std::__1::allocator<PKMetalLiveStrokePaintStrokePoint>> __end_cap_;
} vector<PKMetalLiveStrokePaintStrokePoint, std::__1::allocator<PKMetalLiveStrokePaintStrokePoint>>;

typedef struct _compressed_pair<(anonymous namespace)::AnimatingStroke *, std::__1::allocator<(anonymous namespace)::AnimatingStroke>> {
	AnimatingStroke __value_;
} compressed_pair<(anonymous namespace)::AnimatingStroke *, std::__1::allocator<(anonymous namespace)::AnimatingStroke>>;

typedef struct vector<(anonymous namespace)::AnimatingStroke, std::__1::allocator<(anonymous namespace)::AnimatingStroke>> {
	AnimatingStroke __begin_;
	AnimatingStroke __end_;
	compressed_pair<(anonymous namespace)::AnimatingStroke *, std::__1::allocator<(anonymous namespace)::AnimatingStroke>> __end_cap_;
} vector<(anonymous namespace)::AnimatingStroke, std::__1::allocator<(anonymous namespace)::AnimatingStroke>>;

typedef struct {
	int arcType;
	char before;
	double snapAngle;
} SCD_Struct_PK26;

typedef struct shared_ptr<PKProtobufUnknownFields> {
	PKProtobufUnknownFields __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<PKProtobufUnknownFields>;

typedef const struct CGPath* CGPathRef;

typedef struct PKStrokeID {
	unsigned clock;
	unsigned char replicaUUID[16];
	unsigned subclock;
} PKStrokeID;

typedef struct CGContext* CGContextRef;

typedef struct _compressed_pair<PKFunction *, std::__1::default_delete<PKFunction>> {
	PKFunction __value_;
} compressed_pair<PKFunction *, std::__1::default_delete<PKFunction>>;

typedef struct unique_ptr<PKFunction, std::__1::default_delete<PKFunction>> {
	compressed_pair<PKFunction *, std::__1::default_delete<PKFunction>> __ptr_;
} unique_ptr<PKFunction, std::__1::default_delete<PKFunction>>;

typedef struct _compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction>> {
	PKOutputFunction __value_;
} compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction>>;

typedef struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction>> {
	PKOutputFunction __begin_;
	PKOutputFunction __end_;
	compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction>> __end_cap_;
} vector<PKOutputFunction, std::__1::allocator<PKOutputFunction>>;

typedef struct {
	CGPoint field1;
	double field2;
	double field3;
	double field4;
	double field5;
	double field6;
	char field7;
	long long field8;
	double field9;
	char field10;
} SCD_Struct_PK35;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
} SCD_Struct_PK36;

typedef struct {
	unsigned isHidden : 1;
	unsigned hiddenInherited : 1;
	unsigned inkInherited : 1;
	unsigned transformInherited : 1;
	unsigned isNewCopy : 1;
} SCD_Struct_PK37;

typedef struct {
	/*function pointer*/void* ;
	SCD_Struct_PK37 ;
	Q) allFlags;
} SCD_Struct_PK38;

typedef struct {
	/*function pointer*/void* field1;
	= field2;
	SCD_Struct_PK37 field3;
	unsigned long long) field4;
} SCD_Struct_PK39;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *>> {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *>>;

typedef struct _compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, std::__1::hash<unsigned long long>, true>> {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, std::__1::hash<unsigned long long>, true>>;

typedef struct _compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, std::__1::equal_to<unsigned long long>, true>> {
	float __value_;
} compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, std::__1::equal_to<unsigned long long>, true>>;

typedef struct _hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> __next_;
} hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *>>> {
	hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *>>>;

typedef struct _bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *>> {
	compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *>> __data_;
} bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *>>;

typedef struct _compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *>>> {
	__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> __value_;
	bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *>> __value_;
} compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *>>>;

typedef struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *>>> {
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *>>> __ptr_;
} unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *>>>;

typedef struct _hash_table<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>>> {
	unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *> *>>> __bucket_list_;
	compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, void *>>> __p1_;
	compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, std::__1::hash<unsigned long long>, true>> __p2_;
	compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, std::__1::equal_to<unsigned long long>, true>> __p3_;
} hash_table<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>>>;

typedef struct unordered_map<unsigned long long, PKMetalShader *, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, PKMetalShader *>>> {
	hash_table<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, PKMetalShader *>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, PKMetalShader *>>> __table_;
} unordered_map<unsigned long long, PKMetalShader *, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, PKMetalShader *>>>;

typedef struct {
	unsigned field1 : 3;
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 4;
	unsigned field6 : 8;
	unsigned field7 : 1;
} SCD_Struct_PK50;

typedef struct {
	/*function pointer*/void* field1;
	= field2;
	SCD_Struct_PK5 field3;
	0 field4;
	unsigned long long) field5;
} SCD_Struct_PK51;

typedef struct _compressed_pair<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>> *, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>>>> {
	vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>> __value_;
} compressed_pair<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>> *, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>>>>;

typedef struct vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>>, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>>>> {
	vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>> __begin_;
	vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>> __end_;
	compressed_pair<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>> *, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>>>> __end_cap_;
} vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>>, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint>>>>;

typedef struct atomic_flag {
	AB _Value;
} atomic_flag;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct PKRunningStat {
	long long numValues;
	long long numValuesOverLimit;
	double oldM;
	double newM;
	double oldS;
	double newS;
	double minValue;
	double maxValue;
	double limit;
	os_unfair_lock_s lock;
} PKRunningStat;

typedef struct _compressed_pair<_PKFloatRange *, std::__1::allocator<_PKFloatRange>> {
	/*function pointer*/void* __value_;
} compressed_pair<_PKFloatRange *, std::__1::allocator<_PKFloatRange>>;

typedef struct vector<_PKFloatRange, std::__1::allocator<_PKFloatRange>> {
	/*function pointer*/void* __begin_;
	/*function pointer*/void* __end_;
	compressed_pair<_PKFloatRange *, std::__1::allocator<_PKFloatRange>> __end_cap_;
} vector<_PKFloatRange, std::__1::allocator<_PKFloatRange>>;

typedef struct _compressed_pair<PKInputPoint *, std::__1::allocator<PKInputPoint>> {
	/*function pointer*/void* __value_;
} compressed_pair<PKInputPoint *, std::__1::allocator<PKInputPoint>>;

typedef struct vector<PKInputPoint, std::__1::allocator<PKInputPoint>> {
	/*function pointer*/void* __begin_;
	/*function pointer*/void* __end_;
	compressed_pair<PKInputPoint *, std::__1::allocator<PKInputPoint>> __end_cap_;
} vector<PKInputPoint, std::__1::allocator<PKInputPoint>>;

typedef struct _compressed_pair<_PKStrokePoint *, std::__1::allocator<_PKStrokePoint>> {
	_PKStrokePoint __value_;
} compressed_pair<_PKStrokePoint *, std::__1::allocator<_PKStrokePoint>>;

typedef struct vector<_PKStrokePoint, std::__1::allocator<_PKStrokePoint>> {
	_PKStrokePoint __begin_;
	_PKStrokePoint __end_;
	compressed_pair<_PKStrokePoint *, std::__1::allocator<_PKStrokePoint>> __end_cap_;
} vector<_PKStrokePoint, std::__1::allocator<_PKStrokePoint>>;

