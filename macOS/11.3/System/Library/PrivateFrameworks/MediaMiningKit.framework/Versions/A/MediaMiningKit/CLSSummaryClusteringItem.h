/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/Versions/A/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLDataCluster;

@interface CLSSummaryClusteringItem : NSObject {

	PLDataCluster* _cluster;
	unsigned long long _numberOfItemsToElect;

}

@property (readonly) PLDataCluster * cluster;                              //@synthesize cluster=_cluster - In the implementation block
@property (readonly) unsigned long long numberOfItemsToElect;              //@synthesize numberOfItemsToElect=_numberOfItemsToElect - In the implementation block
-(PLDataCluster *)cluster;
-(unsigned long long)numberOfItemsToElect;
-(id)initWithCluster:(id)arg1 numberOfItemsToElect:(unsigned long long)arg2 ;
@end

