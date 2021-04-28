/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/Versions/A/BiomeStreams
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiomeStreams/BMEventBase.h>
#import <libobjc.A.dylib/BMStoreData.h>
#import <libobjc.A.dylib/BMProtoBufWrapper.h>

@class NSString;

@interface BMPOICategoryEvent : BMEventBase <BMStoreData, BMProtoBufWrapper> {

	NSString* _poiCategory;
	unsigned long long _rank;
	double _timeIntervalSince1970;

}

@property (nonatomic,copy,readonly) NSString * poiCategory;              //@synthesize poiCategory=_poiCategory - In the implementation block
@property (assign,nonatomic) unsigned long long rank;                    //@synthesize rank=_rank - In the implementation block
@property (assign,nonatomic) double timeIntervalSince1970;               //@synthesize timeIntervalSince1970=_timeIntervalSince1970 - In the implementation block
@property (nonatomic,readonly) unsigned dataVersion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)eventWithData:(id)arg1 dataVersion:(unsigned)arg2 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(double)timeIntervalSince1970;
-(id)serialize;
-(void)setRank:(unsigned long long)arg1 ;
-(unsigned long long)rank;
-(NSString *)poiCategory;
-(unsigned)dataVersion;
-(void)setTimeIntervalSince1970:(double)arg1 ;
-(id)json;
-(id)initWithProtoData:(id)arg1 ;
-(id)encodeAsProto;
-(id)proto;
-(id)initWithProto:(id)arg1 ;
-(id)jsonDict;
-(id)initWithPOICategory:(id)arg1 rank:(unsigned long long)arg2 timeIntervalSince1970:(double)arg3 ;
@end
