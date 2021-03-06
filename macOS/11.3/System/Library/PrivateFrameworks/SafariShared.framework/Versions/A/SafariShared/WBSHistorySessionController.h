/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSHistorySessions.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject, WBSHistory, NSMutableDictionary, WBSHistorySessionIntervalCache;

@interface WBSHistorySessionController : NSObject <WBSHistorySessions> {

	NSObject*<OS_dispatch_queue> _sessionCacheAccessQueue;
	WBSHistory* _history;
	NSMutableDictionary* _itemsBySession;
	NSArray* _orderedSessions;
	WBSHistorySessionIntervalCache* _intervalCache;

}

@property (nonatomic,copy,readonly) NSArray * orderedSessions; 
@property (nonatomic,readonly) unsigned long long numberOfSessions; 
+(id)sharedSessionController;
-(id)initWithHistory:(id)arg1 ;
-(void)_historyItemsWereRemoved:(id)arg1 ;
-(void)_historyItemsWereAdded:(id)arg1 ;
-(void)_timeZoneDidChange:(id)arg1 ;
-(void)_loadSessionCache;
-(char)_getKey:(id*)arg1 forDate:(double)arg2 ;
-(id)_orderedSessionKeys;
-(unsigned long long)_insertItem:(id)arg1 withSessionKey:(id)arg2 ;
-(void)_addItemsToSessionCache:(id)arg1 shouldPostChangeNotification:(char)arg2 ;
-(void)_removeItemsFromSessionCache:(id)arg1 ;
-(void)_clearSessionCache;
-(void)_dispatchHistorySessionsDidChangeNotification;
-(unsigned long long)numberOfItemsVisitedInSession:(id)arg1 ;
-(id)itemLastVisitedInSession:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)itemsLastVisitedInSession:(id)arg1 ;
-(void)enumerateOrderedItemsLastVisitedInSession:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)orderedItemsNewerThanDate:(id)arg1 maxCount:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSArray *)orderedSessions;
-(unsigned long long)numberOfSessions;
-(id)sessionForItem:(id)arg1 ;
-(void)_requestSessionKeyForDate:(id)arg1 withBlock:(/*^block*/id)arg2 ;
@end

