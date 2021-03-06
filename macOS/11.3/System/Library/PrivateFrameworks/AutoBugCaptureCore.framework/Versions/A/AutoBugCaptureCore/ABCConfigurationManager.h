/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/Versions/A/AutoBugCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABCConfigurationProtocol.h>

@class NSString, NSNumber, ABCPreferences, NSDictionary;

@interface ABCConfigurationManager : NSObject <ABCConfigurationProtocol> {

	char _autoBugCaptureEnabled;
	char _apns_enable;
	char _apns_dev_environment;
	ABCPreferences* _preferences;
	NSNumber* _disable_internal_build;
	NSNumber* _carrier_seed_flag;
	NSNumber* _seed_flag;
	NSNumber* _vendor_flag;
	NSNumber* _npi_flag;
	NSDictionary* _previousConfiguration;

}

@property (nonatomic,retain) ABCPreferences * preferences;                                          //@synthesize preferences=_preferences - In the implementation block
@property (assign,nonatomic) char apns_enable;                                                      //@synthesize apns_enable=_apns_enable - In the implementation block
@property (assign,nonatomic) char apns_dev_environment;                                             //@synthesize apns_dev_environment=_apns_dev_environment - In the implementation block
@property (nonatomic,retain) NSNumber * disable_internal_build;                                     //@synthesize disable_internal_build=_disable_internal_build - In the implementation block
@property (nonatomic,retain) NSNumber * carrier_seed_flag;                                          //@synthesize carrier_seed_flag=_carrier_seed_flag - In the implementation block
@property (nonatomic,retain) NSNumber * seed_flag;                                                  //@synthesize seed_flag=_seed_flag - In the implementation block
@property (nonatomic,retain) NSNumber * vendor_flag;                                                //@synthesize vendor_flag=_vendor_flag - In the implementation block
@property (nonatomic,retain) NSNumber * npi_flag;                                                   //@synthesize npi_flag=_npi_flag - In the implementation block
@property (nonatomic,retain) NSDictionary * previousConfiguration;                                  //@synthesize previousConfiguration=_previousConfiguration - In the implementation block
@property (nonatomic,readonly) char arbitratorDisableDampening; 
@property (nonatomic,readonly) char isDeviceUnderTest; 
@property (nonatomic,readonly) unsigned long long dampenedIPSLimit; 
@property (nonatomic,readonly) unsigned long long maxUploadRetryCount; 
@property (nonatomic,readonly) unsigned long long arbitratorDailyCountLimit; 
@property (nonatomic,readonly) unsigned long long dampeningRestrictionFactor; 
@property (nonatomic,readonly) char disableAPIRateLimit; 
@property (nonatomic,readonly) double apiRateLimit; 
@property (nonatomic,readonly) double apiLimitWindow; 
@property (nonatomic,readonly) NSString * databaseContainerPath; 
@property (nonatomic,readonly) char cloudKitEnabled; 
@property (nonatomic,readonly) char cloudKitSandboxEnvironment; 
@property (nonatomic,readonly) NSString * cloudKitContainerIdentifier; 
@property (nonatomic,readonly) NSString * cloudKitInvernessService; 
@property (nonatomic,readonly) char cloudKitPrefersAnonymous; 
@property (nonatomic,readonly) double cloudKitTimeoutIntervalForResource; 
@property (nonatomic,readonly) double cloudKitTimeoutIntervalForRequest; 
@property (nonatomic,readonly) unsigned long long cloudKitFallbackMaximumLogCount; 
@property (nonatomic,readonly) unsigned long long maxCaseSummaryPerSubmission; 
@property (nonatomic,readonly) unsigned long long submittedCaseSummaryRetentionDays; 
@property (nonatomic,readonly) unsigned long long unsubmittedCaseSummaryRetentionDays; 
@property (nonatomic,readonly) char caseSummaryEnabled; 
@property (nonatomic,readonly) char apnsEnabled; 
@property (nonatomic,readonly) char apnsSandboxEnvironment; 
@property (nonatomic,readonly) NSString * logArchivePath; 
@property (nonatomic,readonly) unsigned logArchiveUID; 
@property (nonatomic,readonly) unsigned logArchiveGID; 
@property (nonatomic,readonly) char autoBugCaptureEnabled;                                          //@synthesize autoBugCaptureEnabled=_autoBugCaptureEnabled - In the implementation block
@property (nonatomic,readonly) char autoFeedbackAssistantEnable; 
@property (nonatomic,readonly) char autoBugCaptureAvailable; 
@property (nonatomic,readonly) char autoBugCaptureSignature; 
@property (nonatomic,readonly) char autoBugCaptureRegularPayloads; 
@property (nonatomic,readonly) char autoBugCaptureSensitivePayloads; 
@property (nonatomic,readonly) char autoBugCaptureUploadPreapproved; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultLibraryDirectory;
+(id)autoBugCapturePrefix;
-(void)dealloc;
-(id)init;
-(ABCPreferences *)preferences;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setPreferences:(ABCPreferences *)arg1 ;
-(char)cloudKitEnabled;
-(char)autoBugCaptureUploadPreapproved;
-(unsigned long long)maxUploadRetryCount;
-(char)disableAPIRateLimit;
-(double)apiRateLimit;
-(double)apiLimitWindow;
-(char)autoBugCaptureEnabled;
-(id)getAutoBugCaptureConfiguration;
-(NSString *)logArchivePath;
-(char)caseSummaryEnabled;
-(void)initializeOverrides;
-(unsigned)logArchiveUID;
-(unsigned)logArchiveGID;
-(char)autoFeedbackAssistantEnable;
-(char)autoBugCaptureAvailable;
-(char)autoBugCaptureSignature;
-(char)autoBugCaptureRegularPayloads;
-(char)autoBugCaptureSensitivePayloads;
-(NSNumber *)disable_internal_build;
-(NSNumber *)carrier_seed_flag;
-(NSNumber *)seed_flag;
-(NSNumber *)vendor_flag;
-(NSNumber *)npi_flag;
-(void)setDisable_internal_build:(NSNumber *)arg1 ;
-(void)setCarrier_seed_flag:(NSNumber *)arg1 ;
-(void)setSeed_flag:(NSNumber *)arg1 ;
-(void)setVendor_flag:(NSNumber *)arg1 ;
-(void)setNpi_flag:(NSNumber *)arg1 ;
-(int)autoBugCaptureFeatures;
-(char)autoBugCaptureSupportedHardware;
-(char)apns_enable;
-(char)apns_dev_environment;
-(id)loadEmbeddedConfigurationPlist:(const char*)arg1 ;
-(NSString *)databaseContainerPath;
-(unsigned long long)dampenedIPSLimit;
-(unsigned long long)arbitratorDailyCountLimit;
-(char)arbitratorDisableDampening;
-(char)isDeviceUnderTest;
-(unsigned long long)dampeningRestrictionFactor;
-(char)apnsEnabled;
-(char)apnsSandboxEnvironment;
-(char)cloudKitSandboxEnvironment;
-(NSString *)cloudKitContainerIdentifier;
-(NSString *)cloudKitInvernessService;
-(char)cloudKitPrefersAnonymous;
-(double)cloudKitTimeoutIntervalForResource;
-(double)cloudKitTimeoutIntervalForRequest;
-(unsigned long long)cloudKitFallbackMaximumLogCount;
-(unsigned long long)maxCaseSummaryPerSubmission;
-(unsigned long long)submittedCaseSummaryRetentionDays;
-(unsigned long long)unsubmittedCaseSummaryRetentionDays;
-(id)defaultDiagnosticActions;
-(id)currentDiagnosticActions;
-(void)setApns_enable:(char)arg1 ;
-(void)setApns_dev_environment:(char)arg1 ;
-(NSDictionary *)previousConfiguration;
-(void)setPreviousConfiguration:(NSDictionary *)arg1 ;
@end

