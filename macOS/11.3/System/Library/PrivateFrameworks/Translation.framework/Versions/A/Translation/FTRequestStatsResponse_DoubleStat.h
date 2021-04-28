/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString;

@interface FTRequestStatsResponse_DoubleStat : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const DoubleStat* _root;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) double value; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)name;
-(double)value;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 root:(const DoubleStat*)arg2 verify:(char)arg3 ;
-(Offset<siri::speech::schema_fb::RequestStatsResponse_::DoubleStat>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const DoubleStat*)arg2 ;
@end
