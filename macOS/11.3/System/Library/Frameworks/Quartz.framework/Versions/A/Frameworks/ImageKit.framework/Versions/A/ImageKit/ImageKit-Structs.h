/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CIImage, NSImage, NSArray;

typedef struct CGContext* CGContextRef;

typedef union {
	CGImage _cgImage;
	CIImage* _ciImage;
	CGImageSource _cgImageSource;
	NSImage* _nsImage;
	OpaqueIconRef _icon;
} SCD_Union_IK1;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct OpaqueIconRef* OpaqueIconRefRef;

typedef struct CGImage* CGImageRef;

typedef struct _CGLContextObject* CGLContextObjectRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	double field1;
	double field2;
	int field3;
	int field4;
} SCD_Struct_IK10;

typedef struct {
	CGSize origin;
	CGSize size;
} SCD_Struct_IK11;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned long long field1;
	char field2;
} SCD_Struct_IK13;

typedef struct {
	char field1;
	double field2;
	double field3;
	double field4;
	double field5;
	double field6;
	unsigned long long field7;
	double field8;
	id field9[3];
} SCD_Struct_IK14;

typedef struct __CFArray* CFArrayRef;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct __CVBuffer* CVBufferRef;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct CLLocationCoordinate2D {
	double latitude;
	double longitude;
} CLLocationCoordinate2D;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
} SCD_Struct_IK22;

typedef struct __CFString* CFStringRef;

typedef struct CGColor* CGColorRef;

typedef struct IKBGLPatternInfo {
	double patternSize;
	double patternLightFillColor[4];
	double patternDarkFillColor[4];
} IKBGLPatternInfo;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct {
	unsigned field1;
	int field2;
	long long field3;
	unsigned long long field4;
	double field5;
	long long field6;
	CVSMPTETime field7;
	unsigned long long field8;
	unsigned long long field9;
} SCD_Struct_IK28;

typedef struct _IKImageBrowserLayoutParameter {
	NSArray* _content;
	CGSize _containerSize;
	unsigned _cellCount;
	CGSize _cellSize;
	CGSize _cellMargin;
	CGSize _margin;
	int _alignment;
	unsigned _contentResizingMask;
	char _alignLeftForSingleRow;
	char _automaticallyMinimizeRowMargin;
	char _cellsHaveACommonHeightOfInfoSpace;
	int _columnCount;
	float _cellAspectRatio;
	CGSize _adjustedMargin;
	CGSize _adjustedCellMargin;
} IKImageBrowserLayoutParameter;

typedef struct {
	double field1;
	double field2;
	double field3;
} SCD_Struct_IK30;

typedef struct {
	/*function pointer*/void* field1;
	= field2;
	SCD_Struct_IK30 field3;
	double field4[3];
} SCD_Struct_IK31;

typedef struct {
	unsigned long long _progressIndex;
	char _shouldAbort;
} SCD_Struct_IK32;

typedef struct __CFSet* CFSetRef;

typedef struct {
	unsigned field1;
	unsigned field2 : 1;
	unsigned field3 : 1;
	CGPoint field4;
} SCD_Struct_IK34;

typedef struct _CGLPixelFormatObject* CGLPixelFormatObjectRef;

typedef struct CATransform3D {
	double m11;
	double m12;
	double m13;
	double m14;
	double m21;
	double m22;
	double m23;
	double m24;
	double m31;
	double m32;
	double m33;
	double m34;
	double m41;
	double m42;
	double m43;
	double m44;
} CATransform3D;

typedef struct __QLThumbnailQueue* QLThumbnailQueueRef;

typedef struct {
	float width;
	NSImage* tagImage;
	unsigned selected : 1;
	unsigned focus : 1;
	unsigned twoLines : 1;
	unsigned centered : 1;
	unsigned overlap : 1;
	unsigned illegible : 1;
} SCD_Struct_IK38;

typedef struct {
	short numLines;
	CGRect upperRect;
	CGRect lowerRect;
	BOOL truncated;
	int truncatIndex;
	double tagOffset;
} SCD_Struct_IK39;

typedef struct {
	short field1;
	CGRect field2;
	CGRect field3;
	BOOL field4;
	int field5;
	double field6;
} SCD_Struct_IK40;

typedef struct {
	float field1;
	id field2;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 1;
	unsigned field6 : 1;
	unsigned field7 : 1;
	unsigned field8 : 1;
} SCD_Struct_IK41;

typedef struct CGPath* CGPathRef;

typedef struct IKHandleInfo {
	CGPoint handle[10];
} IKHandleInfo;

typedef struct __CFData* CFDataRef;

typedef struct CGPDFPage* CGPDFPageRef;

typedef struct CGPDFDocument* CGPDFDocumentRef;

