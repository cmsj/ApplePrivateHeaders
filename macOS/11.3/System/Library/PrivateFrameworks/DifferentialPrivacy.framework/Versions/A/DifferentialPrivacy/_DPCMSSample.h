/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/Versions/A/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface _DPCMSSample : NSObject {

	unsigned long long _hashFunctionIndex;
	NSData* _bitString;

}

@property (nonatomic,readonly) unsigned long long hashFunctionIndex;              //@synthesize hashFunctionIndex=_hashFunctionIndex - In the implementation block
@property (nonatomic,readonly) NSData * bitString;                                //@synthesize bitString=_bitString - In the implementation block
+(id)jsonStringFromSequence:(id)arg1 sequenceHashIndex:(unsigned short)arg2 fragment:(id)arg3 fragmentHashIndex:(unsigned short)arg4 fragmentPosition:(unsigned short)arg5 ;
+(id)cmsSampleWith:(id)arg1 privacyParameter:(double)arg2 hashFunctionCount:(unsigned long long)arg3 bitCount:(unsigned long long)arg4 ;
+(id)jsonStringFrom:(id)arg1 hashIndex:(unsigned long long)arg2 ;
+(id)dataFor:(id)arg1 hashAtIndex:(unsigned long long)arg2 privacyParameter:(double)arg3 bitCount:(unsigned long long)arg4 ;
+(id)convertToHexString:(id)arg1 ;
-(id)init;
-(NSData *)bitString;
-(unsigned long long)hashFunctionIndex;
-(id)initWith:(id)arg1 privacyParameter:(double)arg2 hashFunctionCount:(unsigned long long)arg3 bitCount:(unsigned long long)arg4 ;
@end

