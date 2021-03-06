/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/JavaScriptAppleEvents.framework/Versions/A/JavaScriptAppleEvents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface AECommandParameter : NSObject {

	char _optional;
	unsigned _code;
	NSString* _displayName;
	NSArray* _types;

}

@property (retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (assign) unsigned code;                       //@synthesize code=_code - In the implementation block
@property (assign) char optional;                       //@synthesize optional=_optional - In the implementation block
@property (retain) NSArray * types;                     //@synthesize types=_types - In the implementation block
+(id)parameterWithCode:(unsigned)arg1 types:(id)arg2 optional:(char)arg3 displayName:(id)arg4 ;
-(unsigned)code;
-(NSArray *)types;
-(NSString *)displayName;
-(void)setCode:(unsigned)arg1 ;
-(void)setTypes:(NSArray *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(char)optional;
-(void)setOptional:(char)arg1 ;
-(id)initWithCode:(unsigned)arg1 types:(id)arg2 optional:(char)arg3 displayName:(id)arg4 ;
@end

