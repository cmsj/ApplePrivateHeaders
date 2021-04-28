/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

typedef struct {
	char field1;
	char field2;
	char field3;
	char field4;
	char field5;
	char field6;
	char field7;
	long long field8;
	unsigned long long field9;
} SCD_Struct_TS0;

typedef struct _NSZone* NSZoneRef;

typedef struct tvec2<int> {
	/*function pointer*/void* ;
	int x;
	int r;
	i) s;
	/*function pointer*/void* ;
	int y;
	int g;
	i) t;
} tvec2<int>;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_TS3;

typedef struct tvec3<float> {
	/*function pointer*/void* ;
	float x;
	float r;
	f) s;
	/*function pointer*/void* ;
	float y;
	float g;
	f) t;
	/*function pointer*/void* ;
	float z;
	float b;
	f) p;
} tvec3<float>;

typedef struct tquat<float> {
	float x;
	float y;
	float z;
	float w;
} tquat<float>;

typedef struct tvec4<float> {
	/*function pointer*/void* ;
	float x;
	float r;
	f) s;
	/*function pointer*/void* ;
	float y;
	float g;
	f) t;
	/*function pointer*/void* ;
	float z;
	float b;
	f) p;
	/*function pointer*/void* ;
	float w;
	float a;
	f) q;
} tvec4<float>;

typedef struct tmat4x4<float> {
	tvec4<float> value[4];
} tmat4x4<float>;

typedef struct line<glm::detail::tvec3<float>> {
	tvec3<float> _position;
	tvec3<float> _direction;
} line<glm::detail::tvec3<float>>;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct StateStack<glm::detail::tmat4x4<float>, 8> {
	unsigned long long _index;
	tmat4x4<float> _current;
	tmat4x4<float> _stack[8];
} StateStack<glm::detail::tmat4x4<float>, 8>;

typedef struct ObjcSharedPtr<NSSet> {
	NSSet* mValue;
} ObjcSharedPtr<NSSet>;

typedef struct _compressed_pair<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes> *, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes>>> {
	Lookup<TSCH3D::TextureAttributes> __value_;
} compressed_pair<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes> *, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes>>>;

typedef struct vector<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes>, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes>>> {
	Lookup<TSCH3D::TextureAttributes> __begin_;
	Lookup<TSCH3D::TextureAttributes> __end_;
	compressed_pair<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes> *, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes>>> __end_cap_;
} vector<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes>, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes>>>;

typedef struct _compressed_pair<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs> *, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs>>> {
	Lookup<TSCH3D::AttributeSpecs> __value_;
} compressed_pair<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs> *, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs>>>;

typedef struct vector<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs>, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs>>> {
	Lookup<TSCH3D::AttributeSpecs> __begin_;
	Lookup<TSCH3D::AttributeSpecs> __end_;
	compressed_pair<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs> *, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs>>> __end_cap_;
} vector<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs>, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs>>>;

typedef struct ObjectState {
	ObjcSharedPtr<NSSet> _effects;
	vector<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs>, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::AttributeSpecs>>> _attributes;
	vector<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes>, std::__1::allocator<TSCH3D::ObjectState::Lookup<TSCH3D::TextureAttributes>>> _textures;
} ObjectState;

typedef struct StateStack<TSCH3D::ObjectState, 6> {
	unsigned long long _index;
	ObjectState _current;
	ObjectState _stack[6];
} StateStack<TSCH3D::ObjectState, 6>;

typedef struct BlendState {
	BOOL _blend;
	int _blendMode;
} BlendState;

typedef struct DepthState {
	BOOL depthTest;
	BOOL depthMask;
} DepthState;

typedef struct array<signed char, 8> {
	char __elems_[8];
} array<signed char, 8>;

typedef struct EnableClipDistances {
	array<signed char, 8> states;
} EnableClipDistances;

typedef struct RenderState {
	BlendState blendState;
	DepthState depthState;
	BOOL culling;
	BOOL cullBack;
	BOOL polygonOffset;
	float polygonOffsetFactor;
	float polygonOffsetUnits;
	EnableClipDistances enableClipDistances;
} RenderState;

typedef struct StateStack<TSCH3D::RenderState, 10> {
	unsigned long long _index;
	RenderState _current;
	RenderState _stack[10];
} StateStack<TSCH3D::RenderState, 10>;

typedef struct box<glm::detail::tvec2<int>> {
	tvec2<int> _min;
	tvec2<int> _max;
} box<glm::detail::tvec2<int>>;

typedef struct _compressed_pair<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float>> *, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float>>>> {
	box<glm::detail::tvec3<float>> __value_;
} compressed_pair<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float>> *, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float>>>>;

typedef struct vector<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float>>, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float>>>> {
	box<glm::detail::tvec3<float>> __begin_;
	box<glm::detail::tvec3<float>> __end_;
	compressed_pair<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float>> *, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float>>>> __end_cap_;
} vector<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float>>, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float>>>>;

typedef struct box<glm::detail::tvec3<float>> {
	tvec3<float> _min;
	tvec3<float> _max;
} box<glm::detail::tvec3<float>>;

typedef struct ObjectBounds {
	box<glm::detail::tvec3<float>> _bounds;
	box<glm::detail::tvec3<float>> _projected;
	box<glm::detail::tvec3<float>> _2DProjected;
	vector<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float>>, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::box<glm::detail::tvec3<float>>>> _boxes;
} ObjectBounds;

typedef struct tvec2<float> {
	/*function pointer*/void* ;
	float x;
	float r;
	f) s;
	/*function pointer*/void* ;
	float y;
	float g;
	f) t;
} tvec2<float>;

typedef struct _compressed_pair<float *, std::__1::allocator<float>> {
	float __value_;
} compressed_pair<float *, std::__1::allocator<float>>;

typedef struct vector<float, std::__1::allocator<float>> {
	float __begin_;
	float __end_;
	compressed_pair<float *, std::__1::allocator<float>> __end_cap_;
} vector<float, std::__1::allocator<float>>;

typedef struct _compressed_pair<TSCH3D::BarElementInfo *, std::__1::allocator<TSCH3D::BarElementInfo>> {
	BarElementInfo __value_;
} compressed_pair<TSCH3D::BarElementInfo *, std::__1::allocator<TSCH3D::BarElementInfo>>;

typedef struct vector<TSCH3D::BarElementInfo, std::__1::allocator<TSCH3D::BarElementInfo>> {
	BarElementInfo __begin_;
	BarElementInfo __end_;
	compressed_pair<TSCH3D::BarElementInfo *, std::__1::allocator<TSCH3D::BarElementInfo>> __end_cap_;
} vector<TSCH3D::BarElementInfo, std::__1::allocator<TSCH3D::BarElementInfo>>;

typedef struct BarExtrusionCrossSectionDetails {
	float detail;
	float tension;
	float adaptiveThreshold;
	float creaseAngle;
	int crossType;
} BarExtrusionCrossSectionDetails;

typedef struct BarExtrusionSpineDetails {
	float bevelHeight;
	long long bevelSlices;
	long long stride;
	float creaseAngle;
} BarExtrusionSpineDetails;

typedef struct BarExtrusionDetails {
	BarExtrusionCrossSectionDetails crossSection;
	BarExtrusionSpineDetails spine;
} BarExtrusionDetails;

typedef struct array<TSCH3D::BarExtrusionDetails, 2> {
	BarExtrusionDetails __elems_[2];
} array<TSCH3D::BarExtrusionDetails, 2>;

typedef struct CGContext* CGContextRef;

typedef struct plane<glm::detail::tvec3<float>> {
	tvec3<float> _normal;
	float _distance;
} plane<glm::detail::tvec3<float>>;

typedef struct TSCH3DShaderType {
	unsigned long long _value;
} TSCH3DShaderType;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct TSCHLegendAnchorLine {
	CGPoint normal;
	double distance;
} TSCHLegendAnchorLine;

typedef struct TSCH3DShaderVariableScopeType {
	unsigned long long _value;
} TSCH3DShaderVariableScopeType;

typedef struct _compressed_pair<TSCH3DShaderVariableScopeType *, std::__1::allocator<TSCH3DShaderVariableScopeType>> {
	TSCH3DShaderVariableScopeType __value_;
} compressed_pair<TSCH3DShaderVariableScopeType *, std::__1::allocator<TSCH3DShaderVariableScopeType>>;

typedef struct vector<TSCH3DShaderVariableScopeType, std::__1::allocator<TSCH3DShaderVariableScopeType>> {
	TSCH3DShaderVariableScopeType __begin_;
	TSCH3DShaderVariableScopeType __end_;
	compressed_pair<TSCH3DShaderVariableScopeType *, std::__1::allocator<TSCH3DShaderVariableScopeType>> __end_cap_;
} vector<TSCH3DShaderVariableScopeType, std::__1::allocator<TSCH3DShaderVariableScopeType>>;

typedef struct array<TSCH3DShaderVariableScopeType, 2> {
	TSCH3DShaderVariableScopeType __elems_[2];
} array<TSCH3DShaderVariableScopeType, 2>;

typedef struct TSCH3DShaderVariableScopes {
	array<TSCH3DShaderVariableScopeType, 2> _scopes;
} TSCH3DShaderVariableScopes;

typedef struct array<glm::detail::tmat4x4<float>, 2> {
	tmat4x4<float> __elems_[2];
} array<glm::detail::tmat4x4<float>, 2>;

typedef struct LightingPackageShaderEffectState {
	array<glm::detail::tmat4x4<float>, 2> transforms;
} LightingPackageShaderEffectState;

typedef struct {
	char forceOmitLegend;
	char forceOmitTitle;
	char forceOmitAxisTitle;
	char forceOmitLabelPlacement;
	char forceTitleAtTop;
	char enable3DTightBounds;
	char enable3DScaledDepthBounds;
	long long maxDepthRatioType;
	unsigned long long max3DLimitingSeries;
} SCD_Struct_TS50;

typedef struct _compressed_pair<glm::detail::tvec2<int> *, std::__1::allocator<glm::detail::tvec2<int>>> {
	tvec2<int> __value_;
} compressed_pair<glm::detail::tvec2<int> *, std::__1::allocator<glm::detail::tvec2<int>>>;

typedef struct vector<glm::detail::tvec2<int>, std::__1::allocator<glm::detail::tvec2<int>>> {
	tvec2<int> __begin_;
	tvec2<int> __end_;
	compressed_pair<glm::detail::tvec2<int> *, std::__1::allocator<glm::detail::tvec2<int>>> __end_cap_;
} vector<glm::detail::tvec2<int>, std::__1::allocator<glm::detail::tvec2<int>>>;

typedef struct DataBufferInfo {
	int componentType;
	unsigned long long components;
	unsigned long long count;
	unsigned long long byteSize;
	unsigned long long componentByteSize;
	unsigned long long elementByteSize;
} DataBufferInfo;

typedef struct _compressed_pair<TSCH3D::TextureAttributeState *, std::__1::allocator<TSCH3D::TextureAttributeState>> {
	TextureAttributeState __value_;
} compressed_pair<TSCH3D::TextureAttributeState *, std::__1::allocator<TSCH3D::TextureAttributeState>>;

typedef struct vector<TSCH3D::TextureAttributeState, std::__1::allocator<TSCH3D::TextureAttributeState>> {
	TextureAttributeState __begin_;
	TextureAttributeState __end_;
	compressed_pair<TSCH3D::TextureAttributeState *, std::__1::allocator<TSCH3D::TextureAttributeState>> __end_cap_;
} vector<TSCH3D::TextureAttributeState, std::__1::allocator<TSCH3D::TextureAttributeState>>;

typedef struct _compressed_pair<TSCH3D::ResourceAttributeState *, std::__1::allocator<TSCH3D::ResourceAttributeState>> {
	ResourceAttributeState __value_;
} compressed_pair<TSCH3D::ResourceAttributeState *, std::__1::allocator<TSCH3D::ResourceAttributeState>>;

typedef struct vector<TSCH3D::ResourceAttributeState, std::__1::allocator<TSCH3D::ResourceAttributeState>> {
	ResourceAttributeState __begin_;
	ResourceAttributeState __end_;
	compressed_pair<TSCH3D::ResourceAttributeState *, std::__1::allocator<TSCH3D::ResourceAttributeState>> __end_cap_;
} vector<TSCH3D::ResourceAttributeState, std::__1::allocator<TSCH3D::ResourceAttributeState>>;

typedef struct ObjectStateMatchObject {
	ObjcSharedPtr<NSSet> _effects;
	vector<TSCH3D::ResourceAttributeState, std::__1::allocator<TSCH3D::ResourceAttributeState>> _attributes;
	vector<TSCH3D::TextureAttributeState, std::__1::allocator<TSCH3D::TextureAttributeState>> _textures;
} ObjectStateMatchObject;

typedef struct BarExtrusionSetting {
	float size;
	char hasTopBevel;
	char hasBottomBevel;
	char isCylindrical;
	char isStackedBar;
	BarExtrusionDetails details;
} BarExtrusionSetting;

typedef struct CGImage* CGImageRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGPath* CGPathRef;

typedef struct _compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float>>> {
	tvec3<float> __value_;
} compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float>>>;

typedef struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float>>> {
	tvec3<float> __begin_;
	tvec3<float> __end_;
	compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float>>> __end_cap_;
} vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float>>>;

typedef struct _compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float>>> {
	tvec2<float> __value_;
} compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float>>>;

typedef struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float>>> {
	tvec2<float> __begin_;
	tvec2<float> __end_;
	compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float>>> __end_cap_;
} vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float>>>;

typedef struct _compressed_pair<long *, std::__1::allocator<long>> {
	long long __value_;
} compressed_pair<long *, std::__1::allocator<long>>;

typedef struct vector<long, std::__1::allocator<long>> {
	long long __begin_;
	long long __end_;
	compressed_pair<long *, std::__1::allocator<long>> __end_cap_;
} vector<long, std::__1::allocator<long>>;

typedef struct DataBuffer2DDimension {
	tvec2<int> _size;
	unsigned long long _components;
	char _hasLevels;
} DataBuffer2DDimension;

typedef struct _compressed_pair<glm::detail::tvec1<float> *, std::__1::allocator<glm::detail::tvec1<float>>> {
	tvec1<float> __value_;
} compressed_pair<glm::detail::tvec1<float> *, std::__1::allocator<glm::detail::tvec1<float>>>;

typedef struct vector<glm::detail::tvec1<float>, std::__1::allocator<glm::detail::tvec1<float>>> {
	tvec1<float> __begin_;
	tvec1<float> __end_;
	compressed_pair<glm::detail::tvec1<float> *, std::__1::allocator<glm::detail::tvec1<float>>> __end_cap_;
} vector<glm::detail::tvec1<float>, std::__1::allocator<glm::detail::tvec1<float>>>;

typedef struct _compressed_pair<glm::detail::tvec4<float> *, std::__1::allocator<glm::detail::tvec4<float>>> {
	tvec4<float> __value_;
} compressed_pair<glm::detail::tvec4<float> *, std::__1::allocator<glm::detail::tvec4<float>>>;

typedef struct vector<glm::detail::tvec4<float>, std::__1::allocator<glm::detail::tvec4<float>>> {
	tvec4<float> __begin_;
	tvec4<float> __end_;
	compressed_pair<glm::detail::tvec4<float> *, std::__1::allocator<glm::detail::tvec4<float>>> __end_cap_;
} vector<glm::detail::tvec4<float>, std::__1::allocator<glm::detail::tvec4<float>>>;

typedef struct _compressed_pair<TSCH3D::PODType<unsigned char> *, std::__1::allocator<TSCH3D::PODType<unsigned char>>> {
	PODType<unsigned char> __value_;
} compressed_pair<TSCH3D::PODType<unsigned char> *, std::__1::allocator<TSCH3D::PODType<unsigned char>>>;

typedef struct vector<TSCH3D::PODType<unsigned char>, std::__1::allocator<TSCH3D::PODType<unsigned char>>> {
	PODType<unsigned char> __begin_;
	PODType<unsigned char> __end_;
	compressed_pair<TSCH3D::PODType<unsigned char> *, std::__1::allocator<TSCH3D::PODType<unsigned char>>> __end_cap_;
} vector<TSCH3D::PODType<unsigned char>, std::__1::allocator<TSCH3D::PODType<unsigned char>>>;

typedef struct _compressed_pair<TSCH3D::PODType<unsigned short> *, std::__1::allocator<TSCH3D::PODType<unsigned short>>> {
	PODType<unsigned short> __value_;
} compressed_pair<TSCH3D::PODType<unsigned short> *, std::__1::allocator<TSCH3D::PODType<unsigned short>>>;

typedef struct vector<TSCH3D::PODType<unsigned short>, std::__1::allocator<TSCH3D::PODType<unsigned short>>> {
	PODType<unsigned short> __begin_;
	PODType<unsigned short> __end_;
	compressed_pair<TSCH3D::PODType<unsigned short> *, std::__1::allocator<TSCH3D::PODType<unsigned short>>> __end_cap_;
} vector<TSCH3D::PODType<unsigned short>, std::__1::allocator<TSCH3D::PODType<unsigned short>>>;

typedef struct _compressed_pair<unsigned char *, std::__1::allocator<unsigned char>> {
	char* __value_;
} compressed_pair<unsigned char *, std::__1::allocator<unsigned char>>;

typedef struct vector<unsigned char, std::__1::allocator<unsigned char>> {
	char* __begin_;
	char* __end_;
	compressed_pair<unsigned char *, std::__1::allocator<unsigned char>> __end_cap_;
} vector<unsigned char, std::__1::allocator<unsigned char>>;

typedef struct tvec3<int> {
	/*function pointer*/void* ;
	int x;
	int r;
	i) s;
	/*function pointer*/void* ;
	int y;
	int g;
	i) t;
	/*function pointer*/void* ;
	int z;
	int b;
	i) p;
} tvec3<int>;

typedef struct DataBuffer3DDimension {
	tvec3<int> _size;
	unsigned long long _components;
} DataBuffer3DDimension;

typedef struct box<glm::detail::tvec2<float>> {
	tvec2<float> _min;
	tvec2<float> _max;
} box<glm::detail::tvec2<float>>;

typedef struct ResizeData {
	tvec2<float> size;
	tvec3<float> scale;
	tvec2<float> delta;
	tvec2<float> steps;
	tvec2<float> unrotatedSize;
	tvec2<float> chartOnlySize;
} ResizeData;

typedef struct tvec2<bool> {
	/*function pointer*/void* ;
	BOOL x;
	BOOL r;
	B) s;
	/*function pointer*/void* ;
	BOOL y;
	BOOL g;
	B) t;
} tvec2<bool>;

typedef struct ChartProjectedBoundsSpaces {
	box<glm::detail::tvec2<float>> _chart;
	box<glm::detail::tvec2<float>> _orient;
	box<glm::detail::tvec2<float>> _drawing;
	box<glm::detail::tvec2<float>> _layout;
	box<glm::detail::tvec2<float>> _layoutInPage;
	box<glm::detail::tvec2<float>> _bodyLayout;
	box<glm::detail::tvec2<float>> _bodyLayoutInPage;
	box<glm::detail::tvec2<float>> _containingViewport;
} ChartProjectedBoundsSpaces;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct TSCH3DChartSceneAreaLayoutItemCacheValues {
	tvec4<float> infoChartScale;
	tvec2<int> containingViewport;
	tvec2<float> chartBodyLayoutOffsetInChartAreaLayoutSpace;
	CGSize layoutSize;
	CGSize requestLayoutSize;
	CGSize chartBodyLayoutSize;
	CGSize requestChartBodyLayoutSize;
	tvec2<int> modelSize;
	SCD_Struct_TS50 layoutSettings;
	char forcedValid;
} TSCH3DChartSceneAreaLayoutItemCacheValues;

typedef struct FramebufferAttributes {
	int type;
	long long samples;
	int colorDataType;
	int colorFormat;
	int depthDataType;
	char linearFilter;
	char discardHint;
	char useIOSurfaceBacking;
} FramebufferAttributes;

typedef struct tmat3x3<float> {
	tvec3<float> value[3];
} tmat3x3<float>;

typedef struct LabelRenderInfo {
	tvec2<float> sampledLabelSize;
	tvec2<float> sampledLabelFullSize;
	tvec2<float> sampledLabelRenderOffset;
	tvec2<float> sampledAlignmentPadding;
} LabelRenderInfo;

typedef struct ValueEnumerator {
	char _forward;
	unsigned long long _index;
	unsigned long long _max;
	double _value;
} ValueEnumerator;

typedef struct _compressed_pair<double *, std::__1::allocator<double>> {
	double __value_;
} compressed_pair<double *, std::__1::allocator<double>>;

typedef struct vector<double, std::__1::allocator<double>> {
	double __begin_;
	double __end_;
	compressed_pair<double *, std::__1::allocator<double>> __end_cap_;
} vector<double, std::__1::allocator<double>>;

typedef struct {
	double field1;
	double field2;
	double field3;
	unsigned long long field4;
} SCD_Struct_TS94;

typedef struct {
	CGAffineTransform field1;
	CGPoint field2;
} SCD_Struct_TS95;

typedef struct CGLayer* CGLayerRef;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct CGColor* CGColorRef;

typedef struct {
	double field1;
	double field2;
	double field3;
	char field4;
} SCD_Struct_TS99;

typedef struct __CTFont* CTFontRef;

typedef struct {
	unsigned long long field1;
	/*function pointer*/void* field2;
	void field3;
} SCD_Struct_TS101;

typedef const struct __CFAttributedString* CFAttributedStringRef;

typedef struct {
	CGPoint field1;
	double field2;
	char field3;
	unsigned long long field4;
} SCD_Struct_TS103;

typedef struct {
	CGPoint field1;
	char field2;
} SCD_Struct_TS104;

typedef struct {
	id field1;
	id field2;
	CGRect field3;
	id field4;
	id field5;
} SCD_Struct_TS105;

typedef struct {
	CGPoint field1;
	CGPoint field2;
} SCD_Struct_TS106;

typedef struct bitset<5> {
	unsigned long long __first_;
} bitset<5>;

typedef struct EdgeDetectionParameters {
	char detectSilhouetteEdges;
	char detectSharpEdges;
	float sharpEdgeThreshold;
} EdgeDetectionParameters;

typedef struct TSCHChartPieWedgeElementLayoutSystem {
	long long coordinateSpace;
	CGPoint centerPoint;
} TSCHChartPieWedgeElementLayoutSystem;
