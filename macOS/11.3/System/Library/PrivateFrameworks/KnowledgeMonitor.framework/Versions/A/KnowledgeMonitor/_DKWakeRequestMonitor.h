/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:13 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/Versions/A/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@protocol OS_dispatch_source;
@class NSDate, NSString, NSObject;

@interface _DKWakeRequestMonitor : _DKMonitor {

	char _updateTimerResumed;
	int _wakeRequestToken;
	NSDate* _nextUserVisibleWakeRequestDate;
	NSString* _nextUserVisibleWakeRequestor;
	NSObject*<OS_dispatch_source> _updateTimer;

}

@property (nonatomic,retain) NSDate * nextUserVisibleWakeRequestDate;                //@synthesize nextUserVisibleWakeRequestDate=_nextUserVisibleWakeRequestDate - In the implementation block
@property (nonatomic,retain) NSString * nextUserVisibleWakeRequestor;                //@synthesize nextUserVisibleWakeRequestor=_nextUserVisibleWakeRequestor - In the implementation block
@property (assign,nonatomic) int wakeRequestToken;                                   //@synthesize wakeRequestToken=_wakeRequestToken - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> updateTimer;              //@synthesize updateTimer=_updateTimer - In the implementation block
+(id)entitlements;
+(id)eventStream;
-(void)dealloc;
-(void)start;
-(void)stop;
-(void)deactivate;
-(void)synchronouslyReflectCurrentValue;
-(NSObject*<OS_dispatch_source>)updateTimer;
-(id)loadState;
-(void)saveState;
-(void)obtainNextUserVisibleWakeRequest;
-(NSDate *)nextUserVisibleWakeRequestDate;
-(void)setNextUserVisibleWakeRequestDate:(NSDate *)arg1 ;
-(NSString *)nextUserVisibleWakeRequestor;
-(void)setNextUserVisibleWakeRequestor:(NSString *)arg1 ;
-(int)wakeRequestToken;
-(void)setWakeRequestToken:(int)arg1 ;
-(void)setUpdateTimer:(NSObject*<OS_dispatch_source>)arg1 ;
@end

