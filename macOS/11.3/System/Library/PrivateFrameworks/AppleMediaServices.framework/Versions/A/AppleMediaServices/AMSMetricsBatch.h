/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccount, NSString, NSArray, NSURL;

@interface AMSMetricsBatch : NSObject {

	char _anonymous;
	char _containsLoadURL;
	ACAccount* _account;
	NSString* _canaryIdentifier;
	NSArray* _droppedEvents;
	NSArray* _eventDictionaries;
	NSArray* _events;
	NSURL* _reportURL;
	NSArray* _skippedEvents;

}

@property (retain) ACAccount * account;                      //@synthesize account=_account - In the implementation block
@property (assign) char anonymous;                           //@synthesize anonymous=_anonymous - In the implementation block
@property (retain) NSString * canaryIdentifier;              //@synthesize canaryIdentifier=_canaryIdentifier - In the implementation block
@property (assign) char containsLoadURL;                     //@synthesize containsLoadURL=_containsLoadURL - In the implementation block
@property (retain) NSArray * droppedEvents;                  //@synthesize droppedEvents=_droppedEvents - In the implementation block
@property (retain) NSArray * eventDictionaries;              //@synthesize eventDictionaries=_eventDictionaries - In the implementation block
@property (retain) NSArray * events;                         //@synthesize events=_events - In the implementation block
@property (retain) NSURL * reportURL;                        //@synthesize reportURL=_reportURL - In the implementation block
@property (retain) NSArray * skippedEvents;                  //@synthesize skippedEvents=_skippedEvents - In the implementation block
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(NSArray *)events;
-(void)setEvents:(NSArray *)arg1 ;
-(char)anonymous;
-(void)setAnonymous:(char)arg1 ;
-(NSString *)canaryIdentifier;
-(void)setCanaryIdentifier:(NSString *)arg1 ;
-(char)containsLoadURL;
-(void)setContainsLoadURL:(char)arg1 ;
-(NSArray *)droppedEvents;
-(void)setDroppedEvents:(NSArray *)arg1 ;
-(NSArray *)eventDictionaries;
-(void)setEventDictionaries:(NSArray *)arg1 ;
-(NSURL *)reportURL;
-(void)setReportURL:(NSURL *)arg1 ;
-(NSArray *)skippedEvents;
-(void)setSkippedEvents:(NSArray *)arg1 ;
@end

