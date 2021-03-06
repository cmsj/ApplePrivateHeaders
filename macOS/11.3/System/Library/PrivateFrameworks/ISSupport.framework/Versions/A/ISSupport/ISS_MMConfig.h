/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ISSupport.framework/Versions/A/ISSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ISS_MMConfig : NSObject
+(id)sharedInstance;
+(id)_configDict;
+(void)_setConfigDict:(id)arg1 ;
+(void)reinitialize;
+(char)_shouldPerformAOSUpdate;
+(void)_doPerformAOSUpdate;
-(id)_configurationURL;
-(void)_setApplicationID:(id)arg1 ;
-(id)_reportingURL;
-(id)_cachedSecureIDiskURL;
-(id)_secureIDiskURL;
-(id)_cachedIDiskURL;
-(id)_iDiskURL;
-(id)_indexingURL;
-(id)_mobilePublishConfigURL;
-(id)_accountInfoURL;
-(id)_accountInfoURL2;
-(void)_fetchConfigInfo;
-(id)_cachedConfigValueForKey:(id)arg1 ;
-(id)_cachedReportingURL;
-(id)_cachedIndexingURL;
-(id)_cachedMobilePublishConfigURL;
-(id)_cachedCommentsURL;
-(id)_cachedConfigurationURL;
-(id)_cachedAccountInfoURL;
-(id)_cachedAccountInfoURL2;
-(id)_configValueForKey:(id)arg1 ;
-(id)_commentsURL;
-(int)_commentsBatchSize;
-(int)_indexingBatchSize;
-(unsigned)_readTimeOutSeconds;
-(unsigned)_defaultReadTimeOutSeconds;
-(id)_realmSupportFlag;
-(id)_aosResourcesURL;
-(int)_aosResourcesVersion;
-(char)_aosShouldSuppressDialog;
-(int)_resourceBundleVersion;
-(void)_setPrefsValue:(id)arg1 forKey:(id)arg2 withIdentifier:(id)arg3 ;
-(id)_prefsValueForKey:(id)arg1 withIdentifier:(id)arg2 ;
@end

