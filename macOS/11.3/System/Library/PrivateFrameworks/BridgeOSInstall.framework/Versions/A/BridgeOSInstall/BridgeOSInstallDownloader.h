/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BridgeOSInstall.framework/Versions/A/BridgeOSInstall
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BOSPredicateUpdateProductManager, BOSDevice, NSArray, PKDistribution, MSUProduct, NSString, NSURL;

@interface BridgeOSInstallDownloader : NSObject {

	BOSPredicateUpdateProductManager* _productManager;
	BOSDevice* _deviceForUnitTesting;

}

@property (retain) BOSPredicateUpdateProductManager * productManager;                     //@synthesize productManager=_productManager - In the implementation block
@property (retain) BOSDevice * deviceForUnitTesting;                                      //@synthesize deviceForUnitTesting=_deviceForUnitTesting - In the implementation block
@property (readonly) NSArray * remotePackageSpecifiers; 
@property (readonly) PKDistribution * distribution; 
@property (readonly) MSUProduct * product; 
@property (readonly) NSString * productBridgeVersion; 
@property (readonly) NSURL * bridgeOSSoftwareUpdateEventRecordingServiceURL; 
-(unsigned long long)requirementSatisfiedForMinimumBridgeVersion:(id)arg1 ;
-(void)setCatalogURL:(id)arg1 options:(unsigned long long)arg2 ;
-(void)setStagedUpdatesOnly:(char)arg1 ;
-(void)setMacOSInstallationAuxInfo:(id)arg1 ;
-(void)findProductWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSURL *)bridgeOSSoftwareUpdateEventRecordingServiceURL;
-(NSArray *)remotePackageSpecifiers;
-(void)downloadProductToDirectory:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)requirementSatisfiedForProductBridgeVersionToMinimumBridgeVersion:(id)arg1 ;
-(NSString *)productBridgeVersion;
-(void)addDownloadCacheWithURL:(id)arg1 ;
-(BOSDevice *)deviceForUnitTesting;
-(void)setCatalogURL:(id)arg1 isDevelopmentCatalog:(char)arg2 ;
-(unsigned long long)compareProductBridgeVersionToRunningBridgeVersion;
-(void)setDeviceForUnitTesting:(BOSDevice *)arg1 ;
-(void)_setDeviceForUnitTesting:(id)arg1 ;
-(id)init;
-(PKDistribution *)distribution;
-(MSUProduct *)product;
-(BOSPredicateUpdateProductManager *)productManager;
-(void)setProductManager:(BOSPredicateUpdateProductManager *)arg1 ;
@end

