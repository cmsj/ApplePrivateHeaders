/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/Versions/A/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TBCacheProvider;
@class TBDataSource;

@interface TBRemoteFetchAndCacheDataSource : NSObject {

	TBDataSource* _fetchDataSource;
	id<TBCacheProvider> _cacheProvider;

}

@property (nonatomic,retain) TBDataSource * fetchDataSource;                 //@synthesize fetchDataSource=_fetchDataSource - In the implementation block
@property (nonatomic,retain) id<TBCacheProvider> cacheProvider;              //@synthesize cacheProvider=_cacheProvider - In the implementation block
-(id)initWithFetchDataSource:(id)arg1 cacheProvider:(id)arg2 ;
-(id<TBCacheProvider>)cacheProvider;
-(void)setCacheProvider:(id<TBCacheProvider>)arg1 ;
-(TBDataSource *)fetchDataSource;
-(void)setFetchDataSource:(TBDataSource *)arg1 ;
@end

