/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/Versions/A/DataDeliveryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DDSAssetProvidingDelegate <NSObject>
@required
-(void)didCompleteDownloadForAssertions:(id)arg1 error:(id)arg2;
-(void)didCompleteDownloadForAssertion:(id)arg1 error:(id)arg2;
-(void)didChangeDownloadState:(unsigned long long)arg1 forAsset:(id)arg2;
-(void)didUpdateCatalogWithError:(id)arg1;
-(void)didBeginUpdateCatalog;

@end

