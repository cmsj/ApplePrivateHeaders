/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/Versions/A/DataDeliveryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DDSAssetProviding.h>

@protocol DDSAssetProvidingDelegate, DDSAssetQueryResultCaching;
@class NSMutableDictionary, NSString;

@interface DDSMobileAssetv2Provider : NSObject <DDSAssetProviding> {

	char _encounteredAssertionUpdateError;
	id<DDSAssetProvidingDelegate> delegate;
	NSMutableDictionary* _remainingAssetsByQueryId;
	id<DDSAssetQueryResultCaching> _assetQueryResultsCache;
	NSMutableDictionary* _downloadStateByAssetID;

}

@property (nonatomic,readonly) NSMutableDictionary * remainingAssetsByQueryId;                   //@synthesize remainingAssetsByQueryId=_remainingAssetsByQueryId - In the implementation block
@property (assign,nonatomic) char encounteredAssertionUpdateError;                               //@synthesize encounteredAssertionUpdateError=_encounteredAssertionUpdateError - In the implementation block
@property (nonatomic,retain) id<DDSAssetQueryResultCaching> assetQueryResultsCache;              //@synthesize assetQueryResultsCache=_assetQueryResultsCache - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * downloadStateByAssetID;                       //@synthesize downloadStateByAssetID=_downloadStateByAssetID - In the implementation block
@property (nonatomic,retain) id<DDSAssetProvidingDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)supportedCompatibilityVersion;
+(id)latestAssetsOnlyFromAssets:(id)arg1 ;
+(id)latestBetweenAssetA:(id)arg1 AssetB:(id)arg2 ;
-(id)init;
-(id<DDSAssetProvidingDelegate>)delegate;
-(void)setDelegate:(id<DDSAssetProvidingDelegate>)arg1 ;
-(void)removeAssets:(id)arg1 ;
-(id)assetsForQuery:(id)arg1 errorPtr:(id*)arg2 ;
-(id)allContentItemsMatchingQuery:(id)arg1 error:(id*)arg2 ;
-(id)contentItemsFromAssets:(id)arg1 matchingFilter:(id)arg2 ;
-(void)serverDidUpdateAssetsWithType:(id)arg1 ;
-(id<DDSAssetQueryResultCaching>)assetQueryResultsCache;
-(id)performAssetsForQuery:(id)arg1 errorPtr:(id*)arg2 ;
-(char)shouldMatchAttributeValue:(id)arg1 givenValue:(id)arg2 ;
-(void)setEncounteredAssertionUpdateError:(char)arg1 ;
-(NSMutableDictionary *)remainingAssetsByQueryId;
-(char)encounteredAssertionUpdateError;
-(void)beginDownloadForAssertion:(id)arg1 discretionaryDownload:(char)arg2 handler:(/*^block*/id)arg3 ;
-(void)didCompleteDownloadForAssertion:(id)arg1 error:(id)arg2 ;
-(void)beginDownloadForAssets:(id)arg1 withPolicy:(id)arg2 discretionaryDownload:(char)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
-(void)didChangeDownloadState:(unsigned long long)arg1 forAsset:(id)arg2 ;
-(id)downloadOptionsForPolicy:(id)arg1 discretionaryDownload:(char)arg2 ;
-(void)didUpdateCatalogWithError:(id)arg1 ;
-(NSMutableDictionary *)downloadStateByAssetID;
-(void)beginDownloadForAssertions:(id)arg1 discretionaryDownload:(char)arg2 ;
-(void)updateCatalogForAssetTypes:(id)arg1 discretionaryDownload:(char)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)removeAssetsForAssertions:(id)arg1 ;
-(void)removeOldAssetsForAssertions:(id)arg1 ;
-(void)setAssetQueryResultsCache:(id<DDSAssetQueryResultCaching>)arg1 ;
-(void)setDownloadStateByAssetID:(NSMutableDictionary *)arg1 ;
@end

