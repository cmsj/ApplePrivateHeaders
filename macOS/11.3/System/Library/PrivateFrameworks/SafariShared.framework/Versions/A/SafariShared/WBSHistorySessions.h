/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol WBSHistorySessions
@property (nonatomic,copy,readonly) NSArray * orderedSessions; 
@property (nonatomic,readonly) unsigned long long numberOfSessions; 
@required
-(unsigned long long)numberOfItemsVisitedInSession:(id)arg1;
-(id)itemLastVisitedInSession:(id)arg1 atIndex:(unsigned long long)arg2;
-(id)itemsLastVisitedInSession:(id)arg1;
-(void)enumerateOrderedItemsLastVisitedInSession:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(void)orderedItemsNewerThanDate:(id)arg1 maxCount:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3;
-(NSArray *)orderedSessions;
-(unsigned long long)numberOfSessions;

@end

