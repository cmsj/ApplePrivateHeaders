/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Versions/A/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/VMUAbstractSerializer.h>

@class NSData;

@interface VMUSimpleDeserializer : VMUAbstractSerializer {

	void* _cache;
	NSData* _data;

}
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(unsigned)deserialize32WithError:(id*)arg1 ;
-(unsigned long long)deserialize64WithError:(id*)arg1 ;
-(id)copyDeserializedStringWithError:(id*)arg1 ;
-(id)copyDeserializedStringWithID:(unsigned)arg1 error:(id*)arg2 ;
-(void)skipFields:(unsigned)arg1 ;
-(const char*)copyDeserializedNullTerminatedBytesWithError:(id*)arg1 ;
-(unsigned*)_deserializeValues:(unsigned)arg1 error:(id*)arg2 ;
@end

