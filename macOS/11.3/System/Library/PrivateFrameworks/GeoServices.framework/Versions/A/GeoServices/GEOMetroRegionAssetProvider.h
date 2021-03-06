/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSCache;

@interface GEOMetroRegionAssetProvider : NSObject {

	NSDate* _lastCatalogLoadTime;
	unsigned _catalogLoadRetryMultiplier;
	NSCache* _fileURLCache;

}
+(id)sharedProvider;
-(id)init;
-(id)homeMetroAcceptListForCountryCode:(id)arg1 ;
-(id)homeCountryCodeAcceptListForCountryCode:(id)arg1 ;
-(id)urlForInstalledCountryCode:(id)arg1 ;
-(void)_updateCatalogAfterDelay:(double)arg1 ;
-(id)_acceptListForCountryCode:(id)arg1 name:(id)arg2 ;
-(void)_updateCatalog;
-(void)_catalogDownloadFinishedWithResult:(long long)arg1 ;
@end

