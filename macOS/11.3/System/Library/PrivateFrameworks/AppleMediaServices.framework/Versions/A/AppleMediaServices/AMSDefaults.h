/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppleMediaServices/AppleMediaServices-Structs.h>
@interface AMSDefaults : NSObject
+(id)allKeys;
+(void)_setBool:(char)arg1 forKey:(id)arg2 ;
+(char)_boolForKey:(id)arg1 defaultValue:(char)arg2 ;
+(void)_setValue:(id)arg1 forKey:(id)arg2 ;
+(char)devMode;
+(void)setDevMode:(char)arg1 ;
+(id)_valueForKey:(id)arg1 ;
+(char)_boolForKey:(id)arg1 defaultValue:(char)arg2 domain:(CFStringRef)arg3 ;
+(long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2 domain:(CFStringRef)arg3 ;
+(void)_setBool:(char)arg1 forKey:(id)arg2 domain:(CFStringRef)arg3 ;
+(void)_setValue:(id)arg1 forKey:(id)arg2 domain:(CFStringRef)arg3 ;
+(id)_valueForKey:(id)arg1 domain:(CFStringRef)arg2 ;
+(long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2 ;
+(void)_setInteger:(long long)arg1 forKey:(id)arg2 ;
+(char)useNewAccountStore;
+(long long)acknowledgePrivacyOverride;
+(char)disablePrivacyAcknowledgement;
+(id)storefrontSuffixes;
+(id)bagOverrides;
+(void)setStorefrontSuffixes:(id)arg1 ;
+(id)bagURLCookies;
+(void)setBagURLCookies:(id)arg1 ;
+(long long)deviceBiometricsState;
+(id)deviceBiometricIdentities;
+(void)setDeviceBiometricsState:(long long)arg1 ;
+(void)setDeviceBiometricIdentities:(id)arg1 ;
+(void)setDefaultPaymentPassIdentifier:(id)arg1 ;
+(char)shouldSampleWithPercentage:(double)arg1 sessionDuration:(double)arg2 identifier:(id)arg3 ;
+(char)migratedToNewAccountStore;
+(void)setMigratedToNewAccountStore:(char)arg1 ;
+(id)lastMigratedBuildVersion;
+(void)setLogHARData:(char)arg1 ;
+(void)setLastMigratedBuildVersion:(id)arg1 ;
+(id)_allKeysForDomain:(CFStringRef)arg1 ;
+(void)_cleanupSampleSessions;
+(char)_resultFromSampleSession:(id)arg1 isActive:(char*)arg2 ;
+(double)_randomDouble;
+(char)allowDuplicateAccounts;
+(char)alwaysSendCacheBuster;
+(char)alwaysSendGUID;
+(long long)applePayClassic;
+(id)authenticationStarted;
+(long long)cardEnrollmentAutomatic;
+(long long)cardEnrollmentManual;
+(long long)cardEnrollmentSilent;
+(long long)cardEnrollmentUpsell;
+(id)defaultPaymentPassIdentifier;
+(id)deviceOfferEligibility;
+(id)deviceOffersSerialNumber;
+(char)didRetrieveDeviceOffers;
+(char)didRetrieveDeviceOffersEligibility;
+(char)didRetrieveTVOffers;
+(char)disableHARLogging;
+(char)disableStubbedMarketingItems;
+(char)enableCameraRedeem;
+(char)enableFullDeviceOffersRetrieval;
+(char)enablePurchaseQueue;
+(char)enableRemoteSecuritySigning;
+(char)forceEngagementPurchaseSuccess;
+(long long)forceLoadUrlMetrics;
+(id)harURLFilters;
+(char)ignoreServerTrustEvaluation;
+(char)includeFullRequestInHARLogging;
+(char)includeFullResponseInHARLogging;
+(id)journeysURLOverride;
+(char)logHARData;
+(id)marketingItemOverrides;
+(id)mediaTokenOverride;
+(id)mediaTokens;
+(id)mescalCertExpiration;
+(id)metricsCanaryIdentifier;
+(id)metricsTimingWindowStartTime;
+(char)migratedDeviceOffers;
+(char)migratedDeviceOffersForWatch;
+(char)migratedPrivacyAcknowledgements;
+(char)migratedToNewCookieStorage;
+(id)multiUserContainerID;
+(char)perfomedDeviceOfferSetup;
+(long long)pushEnvironment;
+(char)QAMode;
+(long long)reversePushEnabled;
+(char)showSandboxAccountUI;
+(char)showSpyglassPurchases;
+(id)sourceOverrides;
+(char)streamHARToDisk;
+(id)UIURLOverrides;
+(void)setAcknowledgePrivacyOverride:(long long)arg1 ;
+(void)setAllowDuplicateAccounts:(char)arg1 ;
+(void)setAlwaysSendCacheBuster:(char)arg1 ;
+(void)setAlwaysSendGUID:(char)arg1 ;
+(void)setApplePayClassic:(long long)arg1 ;
+(void)setAuthenticationStarted:(id)arg1 ;
+(void)setBagOverrides:(id)arg1 ;
+(void)setCardEnrollmentAutomatic:(long long)arg1 ;
+(void)setCardEnrollmentManual:(long long)arg1 ;
+(void)setCardEnrollmentSilent:(long long)arg1 ;
+(void)setCardEnrollmentUpsell:(long long)arg1 ;
+(void)setDeviceOfferEligibility:(id)arg1 ;
+(void)setDidRetrieveDeviceOffersEligibility:(char)arg1 ;
+(void)setDidRetrieveDeviceOffers:(char)arg1 ;
+(void)setDidRetrieveTVOffers:(char)arg1 ;
+(void)setDisableHARLogging:(char)arg1 ;
+(void)setDisablePrivacyAcknowledgement:(char)arg1 ;
+(void)setDisableStubbedMarketingItems:(char)arg1 ;
+(void)setEnableCameraRedeem:(char)arg1 ;
+(void)setEnableFullDeviceOffersRetrieval:(char)arg1 ;
+(void)setEnablePurchaseQueue:(char)arg1 ;
+(void)setEnableRemoteSecuritySigning:(char)arg1 ;
+(void)setForceLoadUrlMetrics:(long long)arg1 ;
+(void)setForceEngagementPurchaseSuccess:(char)arg1 ;
+(void)setIgnoreServerTrustEvaluation:(char)arg1 ;
+(void)setIncludeFullRequestInHARLogging:(char)arg1 ;
+(void)setIncludeFullResponseInHARLogging:(char)arg1 ;
+(void)setJourneysURLOverride:(id)arg1 ;
+(void)setHarURLFilters:(id)arg1 ;
+(void)setMarketingItemOverrides:(id)arg1 ;
+(void)setMediaTokenOverride:(id)arg1 ;
+(void)setMediaTokens:(id)arg1 ;
+(void)setMescalCertExpiration:(id)arg1 ;
+(void)setMetricsCanaryIdentifier:(id)arg1 ;
+(void)setMetricsTimingWindowStartTime:(id)arg1 ;
+(void)setMigratedDeviceOffers:(char)arg1 ;
+(void)setMigratedDeviceOffersForWatch:(char)arg1 ;
+(void)setMigratedPrivacyAcknowledgements:(char)arg1 ;
+(void)setMigratedToNewCookieStorage:(char)arg1 ;
+(void)setPerfomedDeviceOfferSetup:(char)arg1 ;
+(void)setPushEnvironment:(long long)arg1 ;
+(void)setQAMode:(char)arg1 ;
+(void)setReversePushEnabled:(long long)arg1 ;
+(void)setShowSandboxAccountUI:(char)arg1 ;
+(void)setSourceOverrides:(id)arg1 ;
+(void)setUIURLOverrides:(id)arg1 ;
+(void)shouldSampleWithPercentageValue:(id)arg1 sessionDurationValue:(id)arg2 identifier:(id)arg3 completion:(/*^block*/id)arg4 ;
+(void)updateBadgeIdsForBundle:(id)arg1 block:(/*^block*/id)arg2 ;
+(char)ss_ignoreServerTrustEvaluation;
+(char)allowUpsellEnrollmentForAppliedAccounts;
+(id)demoAccount;
+(id)extendedBiometricACLVersion;
+(id)primaryBiometricACLVersion;
+(void)setAllowUpsellEnrollmentForAppliedAccounts:(char)arg1 ;
+(void)setDemoAccount:(id)arg1 ;
+(void)setExtendedBiometricACLVersion:(id)arg1 ;
+(void)setPrimaryBiometricACLVersion:(id)arg1 ;
+(char)useNewCookieStorage;
@end
