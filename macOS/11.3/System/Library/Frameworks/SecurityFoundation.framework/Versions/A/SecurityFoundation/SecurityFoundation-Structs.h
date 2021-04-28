/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct AuthorizationOpaqueRef* AuthorizationOpaqueRefRef;

typedef struct {
	unsigned field1;
	/*function pointer*/void* field2;
} SCD_Struct_SF1;

typedef struct __SecKeychain* SecKeychainRef;

typedef struct _NSZone* NSZoneRef;

typedef struct __SecIdentity* SecIdentityRef;

typedef struct __SecCertificate* SecCertificateRef;

typedef struct cssm_data {
	unsigned long long Length;
	char* Data;
} cssm_data;

typedef struct __SecAccess* SecAccessRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct {
	unsigned long long authenticationRequirements;
	long long subsetCount;
} SCD_Struct_SF9;

typedef struct {
	long long mode;
	SCD_Struct_SF9 authenticationPolicy;
} SCD_Struct_SF10;

typedef struct {
	long long field1;
	SCD_Struct_SF9 field2;
} SCD_Struct_SF11;

typedef struct __CFString* CFStringRef;

typedef struct __SecKeychainItem* SecKeychainItemRef;

typedef struct cssm_guid {
	unsigned Data1;
	unsigned short Data2;
	unsigned short Data3;
	unsigned char Data4[8];
} cssm_guid;

typedef struct cssm_date {
	unsigned char Year[4];
	unsigned char Month[2];
	unsigned char Day[2];
} cssm_date;

typedef struct cssm_keyheader {
	unsigned HeaderVersion;
	cssm_guid CspId;
	unsigned BlobType;
	unsigned Format;
	unsigned AlgorithmId;
	unsigned KeyClass;
	unsigned LogicalKeySizeInBits;
	unsigned KeyAttr;
	unsigned KeyUsage;
	cssm_date StartDate;
	cssm_date EndDate;
	unsigned WrapAlgorithmId;
	unsigned WrapMode;
	unsigned Reserved;
} cssm_keyheader;

typedef struct cssm_key {
	cssm_keyheader KeyHeader;
	cssm_data KeyData;
} cssm_key;

typedef struct CC_SHA1state_st {
	unsigned h0;
	unsigned h1;
	unsigned h2;
	unsigned h3;
	unsigned h4;
	unsigned Nl;
	unsigned Nh;
	unsigned data[16];
	int num;
} CC_SHA1state_st;

typedef struct CC_SHA256state_st {
	unsigned count[2];
	unsigned hash[8];
	unsigned wbuf[16];
} CC_SHA256state_st;

typedef struct CC_SHA512state_st {
	unsigned long long count[2];
	unsigned long long hash[8];
	unsigned long long wbuf[16];
} CC_SHA512state_st;

typedef struct CC_MD5state_st {
	unsigned A;
	unsigned B;
	unsigned C;
	unsigned D;
	unsigned Nl;
	unsigned Nh;
	unsigned data[16];
	int num;
} CC_MD5state_st;

typedef struct {
	cssm_data field1;
	cssm_data field2;
} SCD_Struct_SF22;

typedef struct __SecTrust* SecTrustRef;

typedef struct __SecPolicy* SecPolicyRef;

typedef struct __CFArray* CFArrayRef;

typedef struct __SecKey* SecKeyRef;
