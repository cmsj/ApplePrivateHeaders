/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Geode.framework/Versions/A/Geode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct CGImage* CGImageRef;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_DG3;

typedef struct PFIntSize_st {
	unsigned long long width;
	unsigned long long height;
} PFIntSize_st;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct CGContext* CGContextRef;

typedef struct PFIntPoint_st {
	long long x;
	long long y;
} PFIntPoint_st;

typedef struct PFIntRect_st {
	PFIntPoint_st origin;
	PFIntSize_st size;
} PFIntRect_st;

typedef struct {
	float field1;
	float field2;
	float field3;
} SCD_Struct_DG9;

typedef struct {
	SCD_Struct_DG9 field1;
	SCD_Struct_DG9 field2;
	unsigned long long field3;
} SCD_Struct_DG10;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct {
	double sat;
	double contrast;
	double cast;
} SCD_Struct_DG12;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct _long {
	unsigned long long __cap_;
	unsigned long long __size_;
	char* __data_;
} long;

typedef struct _short {
	/*function pointer*/void* ;
	unsigned char __size_;
	c) __lx;
	char __data_[23];
} short;

typedef struct _raw {
	unsigned long long __words[3];
} raw;

typedef struct _compressed_pair<PA::PixelLayout *, std::__1::allocator<PA::PixelLayout>> {
	PixelLayout __value_;
} compressed_pair<PA::PixelLayout *, std::__1::allocator<PA::PixelLayout>>;

typedef struct vector<PA::PixelLayout, std::__1::allocator<PA::PixelLayout>> {
	PixelLayout __begin_;
	PixelLayout __end_;
	compressed_pair<PA::PixelLayout *, std::__1::allocator<PA::PixelLayout>> __end_cap_;
} vector<PA::PixelLayout, std::__1::allocator<PA::PixelLayout>>;

typedef struct _compressed_pair<PA::PixelComponent *, std::__1::allocator<PA::PixelComponent>> {
	PixelComponent __value_;
} compressed_pair<PA::PixelComponent *, std::__1::allocator<PA::PixelComponent>>;

typedef struct vector<PA::PixelComponent, std::__1::allocator<PA::PixelComponent>> {
	PixelComponent __begin_;
	PixelComponent __end_;
	compressed_pair<PA::PixelComponent *, std::__1::allocator<PA::PixelComponent>> __end_cap_;
} vector<PA::PixelComponent, std::__1::allocator<PA::PixelComponent>>;

typedef struct PixelSpace {
	vector<PA::PixelComponent, std::__1::allocator<PA::PixelComponent>> _components;
} PixelSpace;

typedef struct _rep {
	/*function pointer*/void* ;
	long __l;
	short __s;
	const aw) __r;
} rep;

typedef struct _compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
	const ep __value_;
} compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>>;

typedef struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
	compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> __r_;
} basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>;

typedef struct PixelFormat {
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _name;
	PixelSpace _space;
	vector<PA::PixelLayout, std::__1::allocator<PA::PixelLayout>> _planes;
} PixelFormat;

typedef struct {
	CGPoint black;
	CGPoint shadow;
	CGPoint mid;
	CGPoint hilight;
	CGPoint white;
} SCD_Struct_PA26;

typedef struct {
	CGPoint field1;
	float field2;
} SCD_Struct_RK27;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct _compressed_pair<PFIntRect_st *, std::__1::allocator<PFIntRect_st>> {
	PFIntRect_st __value_;
} compressed_pair<PFIntRect_st *, std::__1::allocator<PFIntRect_st>>;

typedef struct vector<PFIntRect_st, std::__1::allocator<PFIntRect_st>> {
	PFIntRect_st __begin_;
	PFIntRect_st __end_;
	compressed_pair<PFIntRect_st *, std::__1::allocator<PFIntRect_st>> __end_cap_;
} vector<PFIntRect_st, std::__1::allocator<PFIntRect_st>>;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<unsigned long>> {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<unsigned long>>;

typedef struct vector<bool, std::__1::allocator<bool>> {
	unsigned long long __begin_;
	unsigned long long __size_;
	compressed_pair<unsigned long, std::__1::allocator<unsigned long>> __cap_alloc_;
} vector<bool, std::__1::allocator<bool>>;

typedef struct {
	double exposure;
	double contrast;
	double brightness;
	double shadows;
	double highlights;
	double black;
	double rawHighlights;
	double localLight;
} SCD_Struct_DG34;

