/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ShazamInsights.framework/Versions/A/ShazamInsights
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SHDataStore, SHDataFetcher;
@interface SHInsightsPersistenceController : NSObject {

	id<SHDataStore> _dataStore;
	id<SHDataFetcher> _dataFetcher;

}

@property (readonly) id<SHDataStore> dataStore;                  //@synthesize dataStore=_dataStore - In the implementation block
@property (readonly) id<SHDataFetcher> dataFetcher;              //@synthesize dataFetcher=_dataFetcher - In the implementation block
-(id<SHDataStore>)dataStore;
-(id)initWithDataFetcher:(id)arg1 dataStore:(id)arg2 ;
-(void)queryWithCompletion:(/*^block*/id)arg1 ;
-(void)clustersForLocation:(id)arg1 date:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<SHDataFetcher>)dataFetcher;
-(void)fetchDataForCountryCode:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)loadTargetingDataWithCompletion:(/*^block*/id)arg1 ;
-(void)removeAllTargeting;
@end

