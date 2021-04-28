/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StreamingZip.framework/Versions/A/StreamingZip
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	char* dst_ptr;
	unsigned long long dst_size;
	char* src_ptr;
	unsigned long long src_size;
	void state;
} SCD_Struct_St1;

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

typedef struct CC_MD2state_st {
	int num;
	unsigned char data[16];
	unsigned cksm[16];
	unsigned state[16];
} CC_MD2state_st;

typedef struct CC_MD4state_st {
	unsigned A;
	unsigned B;
	unsigned C;
	unsigned D;
	unsigned Nl;
	unsigned Nh;
	unsigned data[16];
	unsigned num;
} CC_MD4state_st;

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

typedef struct {
	int hashType;
	/*function pointer*/void* context;
	CC_MD5state_st md5;
	CC_SHA1state_st sha1;
	CC_MD2state_st md2;
	CC_MD4state_st md4;
	CC_SHA256state_st sha224;
	CC_SHA256state_st sha256;
	CC_SHA512state_st sha384;
	CC_SHA512state_st) sha512;
} SCD_Struct_St8;

typedef struct _qtn_file* qtn_fileRef;

typedef struct {
	unsigned short field1;
} SCD_Struct_St10;

typedef struct {
	unsigned field1;
} SCD_Struct_St11;

typedef struct {
	SCD_Struct_St1 field1;
	0 field2;
	SCD_Struct_St1 field3;
	0 field4;
} SCD_Struct_St12;

typedef struct {
	unsigned char field1[4];
	SCD_Struct_St1 field2;
	0 field3;
	SCD_Struct_St1 field4;
	0 field5;
	SCD_Struct_St1 field6;
	0( field7;
	/*function pointer*/void* field8;
	= field9;
	SCD_Struct_St1 field10;
	2 field11;
	SCD_Struct_St1 field12;
	1) field13;
	SCD_Struct_St1 field14;
	1 field15;
	SCD_Struct_St1 field16;
	1 field17;
	SCD_Struct_St1 field18;
	1 field19;
	SCD_Struct_St1 field20;
	0 field21;
	SCD_Struct_St1 field22;
	0 field23;
	unsigned char field24[0];
} SCD_Struct_St13;

typedef struct {
	unsigned long long field1;
} SCD_Struct_St14;

typedef struct {
	SCD_Struct_St1 field1;
	1 field2;
	SCD_Struct_St1 field3;
	1 field4;
	SCD_Struct_St1 field5;
	1 field6;
} SCD_Struct_St15;

typedef struct {
	SCD_Struct_St1 field1;
	1 field2;
	SCD_Struct_St1 field3;
	4 field4;
	SCD_Struct_St1 field5;
	4 field6;
} SCD_Struct_St16;

typedef struct {
	unsigned char field1[4];
	/*function pointer*/void* field2;
	= field3;
	SCD_Struct_St1 field4;
	6 field5;
	SCD_Struct_St1 field6;
	5) field7;
} SCD_Struct_St17;

typedef struct {
	int( field1;
	/*function pointer*/void* field2;
	= field3;
	CC_MD5state_st field4;
	CC_SHA1state_st field5;
	CC_MD2state_st field6;
	CC_MD4state_st field7;
	CC_SHA256state_st field8;
	CC_SHA256state_st field9;
	CC_SHA512state_st field10;
	CC_SHA512state_st) field11;
} SCD_Struct_St18;
