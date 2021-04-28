/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/Versions/A/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MapsSuggestionsPortraitConnector <NSObject>
@required
-(char)iterRankedLocationsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3;
-(char)iterRecentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 client:(id)arg4 error:(id*)arg5 block:(/*^block*/id)arg6;
-(id)locationQuery:(unsigned long long)arg1 fromDate:(id)arg2 consumerType:(unsigned long long)arg3;
-(void)locationStore_registerFeedback:(id)arg1 clientIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)connectionsStore_registerFeedback:(id)arg1 clientIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)namedEntityStore_registerFeedback:(id)arg1 clientIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(id)namedEntityQuery:(unsigned long long)arg1 fromDate:(id)arg2 consumerType:(unsigned long long)arg3;
-(id)rankedNamedEntitiesWihQuery:(id)arg1 error:(id*)arg2;

@end
