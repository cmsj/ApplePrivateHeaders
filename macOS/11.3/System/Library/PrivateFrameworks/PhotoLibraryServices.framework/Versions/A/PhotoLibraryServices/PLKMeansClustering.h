/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLDataClustering.h>

@interface PLKMeansClustering : PLDataClustering {

	unsigned long long _k;

}

@property (assign,k,nonatomic) unsigned long long k;              //@synthesize k=_k - In the implementation block
-(void)setK:(unsigned long long)arg1 ;
-(id)performWithDataset:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(unsigned long long)k;
-(id)performWithDataset:(id)arg1 numericData:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)_performWithDataset:(id)arg1 numericData:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(double*)_dataArray:(id)arg1 featureCount:(unsigned)arg2 useKeypaths:(char)arg3 ;
@end

