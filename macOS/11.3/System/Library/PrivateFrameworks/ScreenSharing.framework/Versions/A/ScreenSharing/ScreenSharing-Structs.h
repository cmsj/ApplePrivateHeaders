/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct __CFHost* CFHostRef;

typedef struct CGContext* CGContextRef;

typedef struct CGColor* CGColorRef;

typedef struct OpaqueEventHandlerRef* OpaqueEventHandlerRefRef;

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

typedef struct SSOrientationDetails {
	unsigned long long time_received;
	BOOL disable_J99_hack;
	CGSize dimensions;
	int orientation;
} SSOrientationDetails;

typedef struct CGImage* CGImageRef;

typedef struct __SecKeychainItem* SecKeychainItemRef;

typedef struct _NSZone* NSZoneRef;

typedef struct in6_addr {
	/*function pointer*/void* __u6_addr;
	unsigned char __u6_addr8[16];
	unsigned short __u6_addr16[8];
	unsigned __u6_addr32[4];
} in6_addr;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct __CFMachPort* CFMachPortRef;

typedef struct SSSize {
	unsigned long long width;
	unsigned long long height;
} SSSize;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct opaque_pthread_cond_t {
	long long __sig;
	char __opaque[40];
} opaque_pthread_cond_t;

typedef struct SSPoint {
	long long x;
	long long y;
} SSPoint;

typedef struct SSRect {
	SSPoint origin;
	SSSize size;
} SSRect;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct {
	unsigned short field1;
	unsigned short field2;
	unsigned short field3;
	char field4[0];
} SCD_Struct_SS21;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
	unsigned char field4;
	unsigned short field5;
	unsigned short field6;
	unsigned short field7;
	unsigned char field8;
	unsigned char field9;
	unsigned char field10;
	unsigned char field11;
	unsigned char field12;
	unsigned char field13;
} SCD_Struct_SS22;

typedef struct {
	double field1;
	double field2;
	unsigned field3;
	R field4;
	e field5;
	char field6;
	t field7;
	R field8;
	e field9;
	char field10;
	t field11;
	unsigned field12;
	SCD_Struct_SS22 field13;
} SCD_Struct_SS23;

typedef struct {
	unsigned short field1;
	unsigned short field2;
	unsigned short field3;
	unsigned short field4;
	unsigned short field5;
	unsigned field6;
	unsigned field7;
	unsigned short field8;
	SCD_Struct_SS23 field9[0];
} SCD_Struct_SS24;

typedef struct {
	unsigned field1;
	int field2;
	unsigned field3;
	char field4[0];
} SCD_Struct_SS25;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	char field4[0];
} SCD_Struct_SS26;

typedef struct {
	int field1;
	char field2[0];
} SCD_Struct_SS27;

typedef struct {
	int field1;
	unsigned char field2;
	unsigned char field3;
	unsigned field4;
	unsigned field5;
	char field6[0];
} SCD_Struct_SS28;

typedef struct {
	unsigned field1;
	short field2;
	unsigned char field3;
	unsigned char field4;
	unsigned long long field5;
	unsigned long long field6;
	unsigned long long field7;
	unsigned long long field8;
	unsigned long long field9;
	unsigned field10;
} SCD_Struct_SS29;

typedef struct {
	unsigned field1;
	double field2;
} SCD_Struct_SS30;

typedef struct {
	unsigned field1;
	short field2;
	unsigned short field3;
	char field4[0];
} SCD_Struct_SS31;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned short field3;
	unsigned short field4;
	unsigned field5;
	unsigned field6;
	unsigned field7;
} SCD_Struct_SS32;

typedef struct {
	double field1;
	double field2;
	double field3;
} SCD_Struct_SS33;

typedef struct {
	unsigned short field1;
	unsigned short field2;
	unsigned short field3;
	SCD_Struct_SS33 field4[0];
} SCD_Struct_SS34;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct __SecKeychain* SecKeychainRef;

