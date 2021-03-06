/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/Versions/A/MailSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSSearchSessionControllerDataSource, OS_dispatch_queue;
@class NSMutableArray, NSObject, NSArray;

@interface MSSearchSessionController : NSObject {

	int _emailProvider;
	unsigned long long _numberOfMessagesLeftToIndex;
	unsigned long long _percentOfMessagesIndexed;
	NSMutableArray* _mutableSessionEngagements;
	id<MSSearchSessionControllerDataSource> _dataSource;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) unsigned long long numberOfMessagesLeftToIndex;                         //@synthesize numberOfMessagesLeftToIndex=_numberOfMessagesLeftToIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long percentOfMessagesIndexed;                            //@synthesize percentOfMessagesIndexed=_percentOfMessagesIndexed - In the implementation block
@property (nonatomic,readonly) int emailProvider;                                                      //@synthesize emailProvider=_emailProvider - In the implementation block
@property (nonatomic,readonly) NSMutableArray * mutableSessionEngagements;                             //@synthesize mutableSessionEngagements=_mutableSessionEngagements - In the implementation block
@property (nonatomic,__weak,readonly) id<MSSearchSessionControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sessionEngagements; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<MSSearchSessionControllerDataSource>)dataSource;
-(id)initWithDataSource:(id)arg1 ;
-(void)endSession;
-(int)emailProvider;
-(unsigned long long)percentOfMessagesIndexed;
-(NSMutableArray *)mutableSessionEngagements;
-(void)_recordUserDidNotSelectAnyMessage;
-(NSArray *)sessionEngagements;
-(void)addNewEngagementWithAWDAtoms:(id)arg1 searchScope:(char)arg2 suggestionsEngagements:(id)arg3 ;
-(void)_recordEngagement:(int)arg1 forMessage:(id)arg2 isTopHit:(char)arg3 messageListIndex:(long long)arg4 spotlightListIndex:(long long)arg5 ;
-(void)recordUserDidSelectMessage:(id)arg1 isTopHit:(char)arg2 messageListIndex:(long long)arg3 spotlightListIndex:(long long)arg4 ;
-(void)recordUserDidOrbMessage:(id)arg1 isTopHit:(char)arg2 messageListIndex:(long long)arg3 spotlightListIndex:(long long)arg4 ;
-(void)recordUserDidSwipeMessage:(id)arg1 isTopHit:(char)arg2 messageListIndex:(long long)arg3 spotlightListIndex:(long long)arg4 ;
-(void)recordUserDidRightClickMessage:(id)arg1 isTopHit:(char)arg2 messageListIndex:(long long)arg3 spotlightListIndex:(long long)arg4 ;
-(void)_addToLatestEngagementWithUserEngagement:(id)arg1 ;
-(void)addNewEngagementWithAtoms:(id)arg1 searchScope:(char)arg2 suggestionsEngagement:(id)arg3 ;
-(void)updateLastEngagementSearchResultCount:(unsigned long long)arg1 ;
-(void)recordUserDidSelectMessage:(id)arg1 ;
-(void)recordUserDidOrbMessage:(id)arg1 ;
-(void)recordUserDidSwipeMessage:(id)arg1 ;
-(void)recordUserDidRightClickMessage:(id)arg1 ;
-(unsigned long long)numberOfMessagesLeftToIndex;
@end

