/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/Versions/A/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface _DPBitValueMap : NSObject {

	NSString* _key;
	NSDictionary* _map;

}

@property (nonatomic,copy,readonly) NSString * key;              //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSDictionary * map;               //@synthesize map=_map - In the implementation block
+(void)initialize;
+(id)bitValueMapForKey:(id)arg1 ;
+(id)bitValueMapForKey:(id)arg1 fromConfigurationsFile:(id)arg2 ;
+(id)bitValueMapForKey:(id)arg1 bitValueMapsDirectory:(id)arg2 ;
+(void)removeBitValueMapForKey:(id)arg1 ;
-(id)init;
-(NSDictionary *)map;
-(NSString *)key;
-(id)bitValueForString:(id)arg1 ;
-(id)initWithKey:(id)arg1 bitValueMapsDirectory:(id)arg2 ;
@end

