/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Versions/A/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface TransparencyTranscript : NSObject {

	NSString* _context;
	NSMutableArray* _events;

}

@property (retain) NSString * context;                   //@synthesize context=_context - In the implementation block
@property (retain) NSMutableArray * events;              //@synthesize events=_events - In the implementation block
-(id)initWithContext:(id)arg1 ;
-(NSString *)context;
-(void)setContext:(NSString *)arg1 ;
-(id)serialize;
-(NSMutableArray *)events;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(void)addEvent:(id)arg1 ;
-(void)startEvent:(id)arg1 ;
-(void)stopEventWithSuccess:(id)arg1 ;
-(void)stopEventWithFailure:(id)arg1 error:(id)arg2 ;
@end

