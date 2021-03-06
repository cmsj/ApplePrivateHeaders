/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ShazamInsights.framework/Versions/A/ShazamInsights
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SHLouvainClusterDataStore;

@interface SHLouvainClusterImport : NSObject {

	SHLouvainClusterDataStore* _dataStore;

}

@property (readonly) SHLouvainClusterDataStore * dataStore;              //@synthesize dataStore=_dataStore - In the implementation block
-(SHLouvainClusterDataStore *)dataStore;
-(id)initWithDataStore:(id)arg1 ;
-(void)importClustersToModelObjects:(id)arg1 cluster:(id)arg2 importClusters:(id)arg3 ;
-(char)loadClustersFromDataURL:(id)arg1 error:(id*)arg2 ;
-(char)loadClustersLineByLineFromDataURL:(id)arg1 error:(id*)arg2 ;
@end

