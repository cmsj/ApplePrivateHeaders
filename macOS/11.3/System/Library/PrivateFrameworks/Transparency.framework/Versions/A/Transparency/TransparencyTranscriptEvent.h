/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Versions/A/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString;

@interface TransparencyTranscriptEvent : NSObject {

	char _success;
	NSDate* _timestamp;
	NSString* _name;

}

@property (retain) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (retain) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (assign) char success;                    //@synthesize success=_success - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSDate *)timestamp;
-(id)serialize;
-(char)success;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setSuccess:(char)arg1 ;
@end

