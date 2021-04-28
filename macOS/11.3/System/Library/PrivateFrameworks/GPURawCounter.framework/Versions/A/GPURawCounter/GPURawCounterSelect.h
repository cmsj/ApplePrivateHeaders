/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GPURawCounter.framework/Versions/A/GPURawCounter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface GPURawCounterSelect : NSObject {

	unsigned _width;
	NSString* _name;
	NSDictionary* _options;

}

@property (copy,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSDictionary * options;              //@synthesize options=_options - In the implementation block
@property (assign) unsigned width;                             //@synthesize width=_width - In the implementation block
+(id)selectWithName:(id)arg1 width:(unsigned)arg2 ;
+(id)selectWithName:(id)arg1 ;
+(id)selectWithName:(id)arg1 options:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(NSDictionary *)options;
-(void)setWidth:(unsigned)arg1 ;
-(unsigned)width;
-(id)initWithName:(id)arg1 options:(id)arg2 ;
-(id)initWithName:(id)arg1 width:(unsigned)arg2 ;
@end
