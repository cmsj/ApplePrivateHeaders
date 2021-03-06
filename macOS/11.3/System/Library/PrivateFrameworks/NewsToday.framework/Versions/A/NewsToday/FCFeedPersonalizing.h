/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/Versions/A/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCFeedPersonalizing <FCTagRanking>
@optional
-(id)sortItems:(id)arg1 configurationSet:(long long)arg2;
-(id)sortItems:(id)arg1 options:(long long)arg2 configurationSet:(long long)arg3;
-(void)fetchAggregateMapForPersonalizingItem:(id)arg1 completion:(/*^block*/id)arg2;

@required
-(id)limitItemsByMinimumItemQuality:(id)arg1;
-(id)limitItemsByFlowRate:(id)arg1 timeInterval:(double)arg2 publisherCount:(unsigned long long)arg3;
-(id)sortItems:(id)arg1;
-(id)sortItems:(id)arg1 options:(long long)arg2;
-(void)prepareForUseWithCompletionHandler:(/*^block*/id)arg1;
-(double)decayedPublisherDiversificationPenalty;

@end

