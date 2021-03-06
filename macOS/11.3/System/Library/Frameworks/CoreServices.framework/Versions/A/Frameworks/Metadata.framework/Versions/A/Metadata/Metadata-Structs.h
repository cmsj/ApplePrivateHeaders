/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/Metadata.framework/Versions/A/Metadata
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct __CFAllocator* CFAllocatorRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct opaque_pthread_rwlock_t {
	long long __sig;
	char __opaque[192];
} opaque_pthread_rwlock_t;

typedef struct __CFString* CFStringRef;

typedef struct __CFArray* CFArrayRef;

typedef struct {
	unsigned long long first_max_num;
	unsigned long long first_max_ms;
	unsigned long long progress_max_num;
	unsigned long long progress_max_ms;
	unsigned long long update_max_num;
	unsigned long long update_max_ms;
} SCD_Struct_MD6;

typedef struct {
	long long version;
	/*function pointer*/void* retain;
	/*function pointer*/void* release;
	/*function pointer*/void* copyDescription;
	/*function pointer*/void* equal;
} SCD_Struct_MD7;

typedef struct {
	long long version;
	/*function pointer*/void* retain;
	/*function pointer*/void* release;
	/*function pointer*/void* copyDescription;
	/*function pointer*/void* equal;
	/*function pointer*/void* hash;
} SCD_Struct_MD8;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct opaque_pthread_cond_t {
	long long __sig;
	char __opaque[40];
} opaque_pthread_cond_t;

typedef struct {
	void field1;
	_ field2;
	_ field3;
	void* field4;
	long long field5;
	long long field6;
	long long field7;
} SCD_Struct_MD12;

typedef struct {
	__CFDictionary thisGeneration;
	__CFDictionary lastGeneration;
	unsigned count;
} SCD_Struct_MD13;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct __CFMachPort* CFMachPortRef;

typedef struct __CFSet* CFSetRef;

typedef struct __CFBag* CFBagRef;

typedef struct {
	unsigned field1;
	unsigned field2;
} SCD_Struct_MD18;

typedef struct __MDQuery* MDQueryRef;

typedef struct __CFUUID* CFUUIDRef;

typedef struct {
	unsigned isMutuallyExclusiveSetMember : 1;
	unsigned isPublicVisibility : 1;
	unsigned hasPreviewIcon : 1;
	unsigned hasFinderColor : 1;
	unsigned setFinderColor : 3;
	unsigned hasExtendedFinderColor : 1;
	unsigned reservedBits1 : 8;
	unsigned reservedBits2 : 16;
	unsigned reservedBits3 : 32;
} SCD_Struct_MD21;

typedef union {
	SCD_Struct_MD21 field1;
	long long payload;
} SCD_Union_MD22;

typedef struct {
	unsigned char field1;
	unsigned char field2;
	unsigned char field3;
	unsigned char field4;
	unsigned char field5;
	unsigned char field6;
	unsigned char field7;
	unsigned char field8;
	unsigned char field9;
	unsigned char field10;
	unsigned char field11;
	unsigned char field12;
	unsigned char field13;
	unsigned char field14;
	unsigned char field15;
	unsigned char field16;
} SCD_Struct_MD23;

typedef struct __CFURL* CFURLRef;

typedef struct __CFData* CFDataRef;

typedef struct __CFNotificationCenter* CFNotificationCenterRef;

