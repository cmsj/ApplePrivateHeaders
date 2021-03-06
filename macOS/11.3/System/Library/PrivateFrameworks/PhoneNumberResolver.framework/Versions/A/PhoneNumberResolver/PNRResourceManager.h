/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhoneNumberResolver.framework/Versions/A/PhoneNumberResolver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
#import <PhoneNumberResolver/PhoneNumberResolver-Structs.h>
@class NSDate, NSCache, NSObject, NSMutableSet;

@interface PNRResourceManager : NSObject {

	NSDate* _lastCatalogLoadTime;
	unsigned _catalogLoadRetryMultiplier;
	NSCache* _fileDataCache;
	unsigned long long _stateCaptureHandle;
	NSObject*<OS_os_log> _log;
	NSMutableSet* _downloadsInflight;
	os_unfair_lock_s _downloadsInflightLock;

}
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(void)_updateCatalogAfterDelay:(double)arg1 ;
-(void)_updateCatalog;
-(void)_catalogDownloadFinishedWithResult:(long long)arg1 ;
-(id)_lastCatalogLoadTime;
-(os_state_data_s*)_stateCaptureWithHints:(os_state_hints_s*)arg1 ;
-(char)_lookupString:(id)arg1 inTrieMemory:(void*)arg2 value:(unsigned*)arg3 ;
-(void)openCountryCodeFileUsingLogId:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)openNANPFileUsingLogId:(id)arg1 withResultBlock:(/*^block*/id)arg2 ;
-(void)_bestStringForInCountryPhoneNumber:(id)arg1 phoneNumberCC:(id)arg2 countryOfDevice:(id)arg3 countryTrieData:(id)arg4 countryStrings:(id)arg5 logId:(id)arg6 resultBlock:(/*^block*/id)arg7 ;
-(void)openPNRSFileForPrefix:(id)arg1 logId:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)openPNRFileForPrefix:(id)arg1 logId:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(id)_checkCacheForAssetName:(id)arg1 logId:(id)arg2 ;
-(id)_readAndCacheDataFrom:(id)arg1 forAssetName:(id)arg2 zeroCacheCost:(char)arg3 logId:(id)arg4 ;
-(void)_URLForInstalledResourceOfType:(id)arg1 logId:(id)arg2 resultBlock:(/*^block*/id)arg3 ;
-(void)_openLatestAssetWithBasename:(id)arg1 maType:(id)arg2 logId:(id)arg3 resultBlock:(/*^block*/id)arg4 ;
-(id)_assetQueryForPNRResource:(id)arg1 ;
-(void)_setLastCatalogLoadTime:(id)arg1 ;
-(void)lookupCCForPhoneNumber:(id)arg1 logId:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)lookupISOCountryCodeFromNANPNumber:(id)arg1 logId:(id)arg2 withResult:(/*^block*/id)arg3 ;
-(void)lookupStringForPhoneNumber:(id)arg1 inCC:(id)arg2 countryCodeOfDevice:(id)arg3 logId:(id)arg4 withResult:(/*^block*/id)arg5 ;
-(void)catalogLoadThen:(/*^block*/id)arg1 ;
@end

