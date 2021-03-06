/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/Versions/A/SoftwareUpdateCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, MAAbsoluteAssetId, NSDate, NSArray, NSDictionary, NSData, SUCoreDocumentation, SUCoreMAIdentifier, MAAsset;

@interface SUCoreDescriptor : NSObject <NSSecureCoding> {

	char _streamingZipCapable;
	char _autoDownloadAllowableOverCellular;
	char _downloadAllowableOverCellular;
	char _downloadable;
	char _disableSiriVoiceDeletion;
	char _disableCDLevel4;
	char _disableAppDemotion;
	char _disableInstallTonight;
	char _rampEnabled;
	char _autoUpdateEnabled;
	char _criticalCellularOverride;
	char _criticalOutOfBoxOnly;
	char _mandatoryUpdateEligible;
	char _mandatoryUpdateOptional;
	char _mandatoryUpdateRestrictedToOutOfTheBox;
	char _criticalUpdate;
	char _notifyAfter;
	char _disableRosettaUpdates;
	char _promoteAlternateUpdate;
	char _enableAlternateAssetAudience;
	NSString* _publisher;
	NSString* _productSystemName;
	long long _descriptorType;
	long long _descriptorAudienceType;
	long long _preferredUpdateType;
	long long _updateType;
	NSString* _assetID;
	NSString* _uniqueBuildID;
	NSString* _softwareUpdateAssetType;
	NSString* _documentationAssetType;
	MAAbsoluteAssetId* _softwareUpdateAssetAbsoluteID;
	MAAbsoluteAssetId* _documentationAssetAbsoluteID;
	NSString* _softwareUpdateAssetPurpose;
	NSString* _documentationAssetPurpose;
	NSString* _productVersion;
	NSString* _productBuildVersion;
	NSString* _releaseType;
	NSDate* _releaseDate;
	NSString* _restoreVersion;
	NSString* _targetUpdateBridgeVersion;
	NSString* _targetUpdateSFRVersion;
	NSString* _prerequisiteBuild;
	NSString* _prerequisiteOSVersion;
	NSArray* _supportedDevices;
	unsigned long long _downloadSize;
	unsigned long long _unarchivedSize;
	unsigned long long _msuPrepareSize;
	unsigned long long _installationSize;
	unsigned long long _minimumSystemPartitionSize;
	NSDictionary* _systemPartitionPadding;
	unsigned long long _mdmDelayInterval;
	NSString* _setupCritical;
	NSString* _lastEmergencyBuild;
	NSString* _lastEmergencyOSVersion;
	NSString* _mandatoryUpdateVersionMin;
	NSString* _mandatoryUpdateVersionMax;
	NSString* _productType;
	unsigned long long _autoInstallDelay;
	NSString* _minimumBridgeVersion;
	NSData* _sepDigest;
	NSData* _sepTBMDigests;
	NSData* _rsepDigest;
	NSData* _rsepTBMDigests;
	NSString* _documentationID;
	SUCoreDocumentation* _documentation;
	NSString* _softwareUpdateURL;
	NSData* _measurement;
	NSString* _measurementAlgorithm;
	SUCoreMAIdentifier* _softwareUpdateAssetIdentifier;
	SUCoreMAIdentifier* _documentationAssetIdentifier;
	NSString* _alternateAssetAudienceUUID;
	NSString* _assetAudienceUUID;
	NSString* _updateBrainPath;
	NSString* _updateBundlePath;
	NSDictionary* _bundleAttributes;
	NSString* _rawProductVersion;
	MAAsset* _softwareUpdateAsset;
	MAAsset* _documentationAsset;

}

@property (assign,nonatomic) long long descriptorType;                                        //@synthesize descriptorType=_descriptorType - In the implementation block
@property (assign,nonatomic) long long descriptorAudienceType;                                //@synthesize descriptorAudienceType=_descriptorAudienceType - In the implementation block
@property (assign,nonatomic) long long preferredUpdateType;                                   //@synthesize preferredUpdateType=_preferredUpdateType - In the implementation block
@property (assign,nonatomic) long long updateType;                                            //@synthesize updateType=_updateType - In the implementation block
@property (nonatomic,retain) NSString * assetID;                                              //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,retain) NSString * softwareUpdateAssetType;                              //@synthesize softwareUpdateAssetType=_softwareUpdateAssetType - In the implementation block
@property (nonatomic,retain) NSString * documentationAssetType;                               //@synthesize documentationAssetType=_documentationAssetType - In the implementation block
@property (nonatomic,retain) MAAbsoluteAssetId * softwareUpdateAssetAbsoluteID;               //@synthesize softwareUpdateAssetAbsoluteID=_softwareUpdateAssetAbsoluteID - In the implementation block
@property (nonatomic,retain) MAAbsoluteAssetId * documentationAssetAbsoluteID;                //@synthesize documentationAssetAbsoluteID=_documentationAssetAbsoluteID - In the implementation block
@property (nonatomic,retain) NSString * softwareUpdateAssetPurpose;                           //@synthesize softwareUpdateAssetPurpose=_softwareUpdateAssetPurpose - In the implementation block
@property (nonatomic,retain) NSString * documentationAssetPurpose;                            //@synthesize documentationAssetPurpose=_documentationAssetPurpose - In the implementation block
@property (nonatomic,retain) NSString * uniqueBuildID;                                        //@synthesize uniqueBuildID=_uniqueBuildID - In the implementation block
@property (nonatomic,retain) NSString * rawProductVersion;                                    //@synthesize rawProductVersion=_rawProductVersion - In the implementation block
@property (nonatomic,retain) NSString * productVersion;                                       //@synthesize productVersion=_productVersion - In the implementation block
@property (nonatomic,retain) NSString * productBuildVersion;                                  //@synthesize productBuildVersion=_productBuildVersion - In the implementation block
@property (nonatomic,retain) NSString * productSystemName;                                    //@synthesize productSystemName=_productSystemName - In the implementation block
@property (nonatomic,retain) NSString * releaseType;                                          //@synthesize releaseType=_releaseType - In the implementation block
@property (nonatomic,retain) NSString * publisher;                                            //@synthesize publisher=_publisher - In the implementation block
@property (nonatomic,retain) NSDate * releaseDate;                                            //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,retain) NSString * restoreVersion;                                       //@synthesize restoreVersion=_restoreVersion - In the implementation block
@property (nonatomic,retain) NSString * targetUpdateBridgeVersion;                            //@synthesize targetUpdateBridgeVersion=_targetUpdateBridgeVersion - In the implementation block
@property (nonatomic,retain) NSString * targetUpdateSFRVersion;                               //@synthesize targetUpdateSFRVersion=_targetUpdateSFRVersion - In the implementation block
@property (nonatomic,retain) NSString * prerequisiteBuild;                                    //@synthesize prerequisiteBuild=_prerequisiteBuild - In the implementation block
@property (nonatomic,retain) NSString * prerequisiteOSVersion;                                //@synthesize prerequisiteOSVersion=_prerequisiteOSVersion - In the implementation block
@property (nonatomic,retain) NSArray * supportedDevices;                                      //@synthesize supportedDevices=_supportedDevices - In the implementation block
@property (assign,nonatomic) unsigned long long downloadSize;                                 //@synthesize downloadSize=_downloadSize - In the implementation block
@property (assign,nonatomic) unsigned long long unarchivedSize;                               //@synthesize unarchivedSize=_unarchivedSize - In the implementation block
@property (assign,nonatomic) unsigned long long msuPrepareSize;                               //@synthesize msuPrepareSize=_msuPrepareSize - In the implementation block
@property (assign,nonatomic) unsigned long long installationSize;                             //@synthesize installationSize=_installationSize - In the implementation block
@property (assign,nonatomic) unsigned long long minimumSystemPartitionSize;                   //@synthesize minimumSystemPartitionSize=_minimumSystemPartitionSize - In the implementation block
@property (assign,nonatomic) char streamingZipCapable;                                        //@synthesize streamingZipCapable=_streamingZipCapable - In the implementation block
@property (nonatomic,retain) NSDictionary * systemPartitionPadding;                           //@synthesize systemPartitionPadding=_systemPartitionPadding - In the implementation block
@property (assign,nonatomic) char autoDownloadAllowableOverCellular;                          //@synthesize autoDownloadAllowableOverCellular=_autoDownloadAllowableOverCellular - In the implementation block
@property (assign,nonatomic) char downloadAllowableOverCellular;                              //@synthesize downloadAllowableOverCellular=_downloadAllowableOverCellular - In the implementation block
@property (assign,nonatomic) char downloadable;                                               //@synthesize downloadable=_downloadable - In the implementation block
@property (assign,nonatomic) char disableSiriVoiceDeletion;                                   //@synthesize disableSiriVoiceDeletion=_disableSiriVoiceDeletion - In the implementation block
@property (assign,nonatomic) char disableCDLevel4;                                            //@synthesize disableCDLevel4=_disableCDLevel4 - In the implementation block
@property (assign,nonatomic) char disableAppDemotion;                                         //@synthesize disableAppDemotion=_disableAppDemotion - In the implementation block
@property (assign,nonatomic) char disableInstallTonight;                                      //@synthesize disableInstallTonight=_disableInstallTonight - In the implementation block
@property (assign,nonatomic) char rampEnabled;                                                //@synthesize rampEnabled=_rampEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long mdmDelayInterval;                             //@synthesize mdmDelayInterval=_mdmDelayInterval - In the implementation block
@property (assign,nonatomic) char autoUpdateEnabled;                                          //@synthesize autoUpdateEnabled=_autoUpdateEnabled - In the implementation block
@property (nonatomic,retain) NSString * setupCritical;                                        //@synthesize setupCritical=_setupCritical - In the implementation block
@property (assign,nonatomic) char criticalCellularOverride;                                   //@synthesize criticalCellularOverride=_criticalCellularOverride - In the implementation block
@property (assign,nonatomic) char criticalOutOfBoxOnly;                                       //@synthesize criticalOutOfBoxOnly=_criticalOutOfBoxOnly - In the implementation block
@property (nonatomic,retain) NSString * lastEmergencyBuild;                                   //@synthesize lastEmergencyBuild=_lastEmergencyBuild - In the implementation block
@property (nonatomic,retain) NSString * lastEmergencyOSVersion;                               //@synthesize lastEmergencyOSVersion=_lastEmergencyOSVersion - In the implementation block
@property (assign,nonatomic) char mandatoryUpdateEligible;                                    //@synthesize mandatoryUpdateEligible=_mandatoryUpdateEligible - In the implementation block
@property (nonatomic,retain) NSString * mandatoryUpdateVersionMin;                            //@synthesize mandatoryUpdateVersionMin=_mandatoryUpdateVersionMin - In the implementation block
@property (nonatomic,retain) NSString * mandatoryUpdateVersionMax;                            //@synthesize mandatoryUpdateVersionMax=_mandatoryUpdateVersionMax - In the implementation block
@property (assign,nonatomic) char mandatoryUpdateOptional;                                    //@synthesize mandatoryUpdateOptional=_mandatoryUpdateOptional - In the implementation block
@property (assign,nonatomic) char mandatoryUpdateRestrictedToOutOfTheBox;                     //@synthesize mandatoryUpdateRestrictedToOutOfTheBox=_mandatoryUpdateRestrictedToOutOfTheBox - In the implementation block
@property (assign,nonatomic) char criticalUpdate;                                             //@synthesize criticalUpdate=_criticalUpdate - In the implementation block
@property (nonatomic,retain) NSString * productType;                                          //@synthesize productType=_productType - In the implementation block
@property (assign,nonatomic) unsigned long long autoInstallDelay;                             //@synthesize autoInstallDelay=_autoInstallDelay - In the implementation block
@property (assign,nonatomic) char notifyAfter;                                                //@synthesize notifyAfter=_notifyAfter - In the implementation block
@property (nonatomic,retain) NSString * minimumBridgeVersion;                                 //@synthesize minimumBridgeVersion=_minimumBridgeVersion - In the implementation block
@property (assign,nonatomic) char disableRosettaUpdates;                                      //@synthesize disableRosettaUpdates=_disableRosettaUpdates - In the implementation block
@property (nonatomic,retain) NSData * sepDigest;                                              //@synthesize sepDigest=_sepDigest - In the implementation block
@property (nonatomic,retain) NSData * sepTBMDigests;                                          //@synthesize sepTBMDigests=_sepTBMDigests - In the implementation block
@property (nonatomic,retain) NSData * rsepDigest;                                             //@synthesize rsepDigest=_rsepDigest - In the implementation block
@property (nonatomic,retain) NSData * rsepTBMDigests;                                         //@synthesize rsepTBMDigests=_rsepTBMDigests - In the implementation block
@property (nonatomic,retain) NSString * documentationID;                                      //@synthesize documentationID=_documentationID - In the implementation block
@property (nonatomic,retain) SUCoreDocumentation * documentation;                             //@synthesize documentation=_documentation - In the implementation block
@property (nonatomic,retain) NSString * softwareUpdateURL;                                    //@synthesize softwareUpdateURL=_softwareUpdateURL - In the implementation block
@property (nonatomic,retain) NSData * measurement;                                            //@synthesize measurement=_measurement - In the implementation block
@property (nonatomic,retain) NSString * measurementAlgorithm;                                 //@synthesize measurementAlgorithm=_measurementAlgorithm - In the implementation block
@property (nonatomic,retain) SUCoreMAIdentifier * softwareUpdateAssetIdentifier;              //@synthesize softwareUpdateAssetIdentifier=_softwareUpdateAssetIdentifier - In the implementation block
@property (nonatomic,retain) SUCoreMAIdentifier * documentationAssetIdentifier;               //@synthesize documentationAssetIdentifier=_documentationAssetIdentifier - In the implementation block
@property (assign,nonatomic) char promoteAlternateUpdate;                                     //@synthesize promoteAlternateUpdate=_promoteAlternateUpdate - In the implementation block
@property (assign,nonatomic) char enableAlternateAssetAudience;                               //@synthesize enableAlternateAssetAudience=_enableAlternateAssetAudience - In the implementation block
@property (nonatomic,retain) NSString * alternateAssetAudienceUUID;                           //@synthesize alternateAssetAudienceUUID=_alternateAssetAudienceUUID - In the implementation block
@property (nonatomic,retain) NSString * assetAudienceUUID;                                    //@synthesize assetAudienceUUID=_assetAudienceUUID - In the implementation block
@property (nonatomic,retain) NSString * updateBrainPath;                                      //@synthesize updateBrainPath=_updateBrainPath - In the implementation block
@property (nonatomic,retain) NSString * updateBundlePath;                                     //@synthesize updateBundlePath=_updateBundlePath - In the implementation block
@property (nonatomic,retain) NSDictionary * bundleAttributes;                                 //@synthesize bundleAttributes=_bundleAttributes - In the implementation block
@property (nonatomic,retain) MAAsset * softwareUpdateAsset;                                   //@synthesize softwareUpdateAsset=_softwareUpdateAsset - In the implementation block
@property (nonatomic,retain) MAAsset * documentationAsset;                                    //@synthesize documentationAsset=_documentationAsset - In the implementation block
@property (nonatomic,retain,readonly) NSString * humanReadableUpdateName; 
@property (nonatomic,readonly) char fullReplacement; 
@property (nonatomic,readonly) unsigned long long preparationSize; 
@property (nonatomic,readonly) unsigned long long totalRequiredFreeSpace; 
+(id)nameForDescriptorPreferredUpdateType:(long long)arg1 ;
+(id)cleanProductVersion:(id)arg1 ;
+(char)isEmergencyUpdate:(id)arg1 ;
+(id)nameForDescriptorAudienceType:(long long)arg1 ;
+(char)supportsSecureCoding;
+(id)nameForDescriptorType:(long long)arg1 ;
-(NSString *)softwareUpdateAssetType;
-(NSString *)softwareUpdateAssetPurpose;
-(NSString *)prerequisiteBuild;
-(NSString *)prerequisiteOSVersion;
-(NSString *)documentationAssetType;
-(NSString *)documentationAssetPurpose;
-(NSString *)alternateAssetAudienceUUID;
-(NSString *)assetAudienceUUID;
-(MAAsset *)documentationAsset;
-(id)overviewWithMaxValueLength:(unsigned long long)arg1 providingSubstitutionMap:(id)arg2 ;
-(id)initWithSUAsset:(id)arg1 releaseDate:(id)arg2 defaultValues:(id)arg3 ;
-(void)setAlternateAssetAudienceUUID:(NSString *)arg1 ;
-(char)enableAlternateAssetAudience;
-(char)promoteAlternateUpdate;
-(void)assignDescriptorAudienceType:(long long)arg1 descriptorPreferredUpdateType:(long long)arg2 assetAudienceUUID:(id)arg3 ;
-(void)assignDocumentationFromAsset:(id)arg1 ;
-(id)initWithUpdateBrainPath:(id)arg1 updateBundlePath:(id)arg2 bundleAttributes:(id)arg3 descriptorType:(long long)arg4 ;
-(void)setDocumentationAsset:(MAAsset *)arg1 ;
-(void)setDocumentationAssetType:(NSString *)arg1 ;
-(void)setDocumentationAssetAbsoluteID:(MAAbsoluteAssetId *)arg1 ;
-(void)setDocumentationAssetPurpose:(NSString *)arg1 ;
-(void)setDocumentationAssetIdentifier:(SUCoreMAIdentifier *)arg1 ;
-(void)setDescriptorAudienceType:(long long)arg1 ;
-(void)setPreferredUpdateType:(long long)arg1 ;
-(void)setAssetAudienceUUID:(NSString *)arg1 ;
-(NSString *)productSystemName;
-(unsigned long long)unarchivedSize;
-(unsigned long long)msuPrepareSize;
-(unsigned long long)preparationSize;
-(char)streamingZipCapable;
-(char)criticalCellularOverride;
-(MAAsset *)softwareUpdateAsset;
-(MAAbsoluteAssetId *)softwareUpdateAssetAbsoluteID;
-(MAAbsoluteAssetId *)documentationAssetAbsoluteID;
-(long long)descriptorAudienceType;
-(long long)preferredUpdateType;
-(NSString *)restoreVersion;
-(NSString *)targetUpdateBridgeVersion;
-(NSString *)targetUpdateSFRVersion;
-(unsigned long long)minimumSystemPartitionSize;
-(NSDictionary *)systemPartitionPadding;
-(char)autoDownloadAllowableOverCellular;
-(char)downloadAllowableOverCellular;
-(char)disableSiriVoiceDeletion;
-(char)disableCDLevel4;
-(char)disableAppDemotion;
-(unsigned long long)mdmDelayInterval;
-(NSString *)setupCritical;
-(char)criticalOutOfBoxOnly;
-(NSString *)lastEmergencyBuild;
-(NSString *)lastEmergencyOSVersion;
-(char)notifyAfter;
-(NSString *)minimumBridgeVersion;
-(char)disableRosettaUpdates;
-(NSData *)sepDigest;
-(NSData *)sepTBMDigests;
-(NSData *)rsepDigest;
-(NSData *)rsepTBMDigests;
-(NSString *)softwareUpdateURL;
-(NSString *)measurementAlgorithm;
-(SUCoreMAIdentifier *)softwareUpdateAssetIdentifier;
-(SUCoreMAIdentifier *)documentationAssetIdentifier;
-(NSDictionary *)bundleAttributes;
-(id)updateTypeName;
-(id)initWithUpdateBrainPath:(id)arg1 updateBundlePath:(id)arg2 bundleAttributes:(id)arg3 ;
-(id)criticalOverrideCellularPolicy;
-(id)getMASoftwareUpdateAsset;
-(id)getMADocumentationAsset;
-(char)requiresSoftwareUpdateAssetReload;
-(char)requiresDocumentationReload;
-(void)setProductSystemName:(NSString *)arg1 ;
-(void)setSoftwareUpdateAssetType:(NSString *)arg1 ;
-(void)setSoftwareUpdateAssetAbsoluteID:(MAAbsoluteAssetId *)arg1 ;
-(void)setSoftwareUpdateAssetPurpose:(NSString *)arg1 ;
-(void)setRestoreVersion:(NSString *)arg1 ;
-(void)setTargetUpdateBridgeVersion:(NSString *)arg1 ;
-(void)setTargetUpdateSFRVersion:(NSString *)arg1 ;
-(void)setPrerequisiteBuild:(NSString *)arg1 ;
-(void)setPrerequisiteOSVersion:(NSString *)arg1 ;
-(void)setUnarchivedSize:(unsigned long long)arg1 ;
-(void)setMsuPrepareSize:(unsigned long long)arg1 ;
-(void)setInstallationSize:(unsigned long long)arg1 ;
-(void)setMinimumSystemPartitionSize:(unsigned long long)arg1 ;
-(void)setStreamingZipCapable:(char)arg1 ;
-(void)setSystemPartitionPadding:(NSDictionary *)arg1 ;
-(void)setAutoDownloadAllowableOverCellular:(char)arg1 ;
-(void)setDownloadAllowableOverCellular:(char)arg1 ;
-(void)setDisableSiriVoiceDeletion:(char)arg1 ;
-(void)setDisableCDLevel4:(char)arg1 ;
-(void)setDisableAppDemotion:(char)arg1 ;
-(void)setDisableInstallTonight:(char)arg1 ;
-(void)setRampEnabled:(char)arg1 ;
-(void)setMdmDelayInterval:(unsigned long long)arg1 ;
-(void)setSetupCritical:(NSString *)arg1 ;
-(void)setCriticalCellularOverride:(char)arg1 ;
-(void)setCriticalOutOfBoxOnly:(char)arg1 ;
-(void)setLastEmergencyBuild:(NSString *)arg1 ;
-(void)setLastEmergencyOSVersion:(NSString *)arg1 ;
-(void)setMandatoryUpdateEligible:(char)arg1 ;
-(void)setMandatoryUpdateRestrictedToOutOfTheBox:(char)arg1 ;
-(void)setCriticalUpdate:(char)arg1 ;
-(void)setAutoInstallDelay:(unsigned long long)arg1 ;
-(void)setNotifyAfter:(char)arg1 ;
-(void)setMinimumBridgeVersion:(NSString *)arg1 ;
-(void)setDisableRosettaUpdates:(char)arg1 ;
-(void)setSepDigest:(NSData *)arg1 ;
-(void)setSepTBMDigests:(NSData *)arg1 ;
-(void)setRsepDigest:(NSData *)arg1 ;
-(void)setRsepTBMDigests:(NSData *)arg1 ;
-(void)setSoftwareUpdateURL:(NSString *)arg1 ;
-(void)setMeasurementAlgorithm:(NSString *)arg1 ;
-(void)setSoftwareUpdateAssetIdentifier:(SUCoreMAIdentifier *)arg1 ;
-(void)setPromoteAlternateUpdate:(char)arg1 ;
-(void)setEnableAlternateAssetAudience:(char)arg1 ;
-(void)setUpdateBrainPath:(NSString *)arg1 ;
-(void)setUpdateBundlePath:(NSString *)arg1 ;
-(void)setBundleAttributes:(NSDictionary *)arg1 ;
-(NSString *)rawProductVersion;
-(void)setRawProductVersion:(NSString *)arg1 ;
-(void)setSoftwareUpdateAsset:(MAAsset *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)descriptorType;
-(NSData *)measurement;
-(void)setMeasurement:(NSData *)arg1 ;
-(NSString *)productVersion;
-(NSString *)productBuildVersion;
-(NSString *)productType;
-(void)setProductVersion:(NSString *)arg1 ;
-(long long)updateType;
-(SUCoreDocumentation *)documentation;
-(void)setDocumentation:(SUCoreDocumentation *)arg1 ;
-(NSString *)publisher;
-(void)setPublisher:(NSString *)arg1 ;
-(id)summary;
-(id)overview;
-(void)setUpdateType:(long long)arg1 ;
-(NSDate *)releaseDate;
-(void)setReleaseDate:(NSDate *)arg1 ;
-(void)setDownloadSize:(unsigned long long)arg1 ;
-(unsigned long long)downloadSize;
-(void)setProductType:(NSString *)arg1 ;
-(NSString *)assetID;
-(unsigned long long)installationSize;
-(unsigned long long)totalRequiredFreeSpace;
-(NSString *)humanReadableUpdateName;
-(char)downloadable;
-(char)disableInstallTonight;
-(char)rampEnabled;
-(char)autoUpdateEnabled;
-(char)fullReplacement;
-(char)criticalUpdate;
-(unsigned long long)autoInstallDelay;
-(char)mandatoryUpdateEligible;
-(NSString *)mandatoryUpdateVersionMin;
-(NSString *)mandatoryUpdateVersionMax;
-(char)mandatoryUpdateOptional;
-(char)mandatoryUpdateRestrictedToOutOfTheBox;
-(void)setProductBuildVersion:(NSString *)arg1 ;
-(NSString *)uniqueBuildID;
-(void)setUniqueBuildID:(NSString *)arg1 ;
-(void)setDownloadable:(char)arg1 ;
-(void)setMandatoryUpdateVersionMin:(NSString *)arg1 ;
-(void)setMandatoryUpdateVersionMax:(NSString *)arg1 ;
-(void)setMandatoryUpdateOptional:(char)arg1 ;
-(void)setReleaseType:(NSString *)arg1 ;
-(void)setAssetID:(NSString *)arg1 ;
-(NSArray *)supportedDevices;
-(void)setSupportedDevices:(NSArray *)arg1 ;
-(void)setAutoUpdateEnabled:(char)arg1 ;
-(void)setDescriptorType:(long long)arg1 ;
-(NSString *)updateBundlePath;
-(NSString *)updateBrainPath;
-(NSString *)releaseType;
-(void)setDocumentationID:(NSString *)arg1 ;
-(NSString *)documentationID;
@end

