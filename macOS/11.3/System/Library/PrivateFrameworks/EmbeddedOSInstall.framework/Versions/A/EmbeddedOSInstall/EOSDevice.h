/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedOSInstall.framework/Versions/A/EmbeddedOSInstall
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmbeddedOSInstall/EmbeddedOSInstall-Structs.h>
@class NSString, PKBundleComponentVersion, EOSDeviceType;

@interface EOSDevice : NSObject {

	char _securityMode;
	char _productionMode;
	unsigned _boardID;
	unsigned _chipID;
	unsigned _locationID;
	long long _mode;
	NSString* _buildVersion;
	PKBundleComponentVersion* _bundleVersion;
	AMDFUModeDeviceRef _dfuModeDeviceRef;
	AMRecoveryModeDeviceRef _recoveryModeDeviceRef;
	AMRestoreModeDeviceRef _restoreModeDeviceRef;

}

@property (assign) long long mode;                                             //@synthesize mode=_mode - In the implementation block
@property (assign) AMDFUModeDeviceRef dfuModeDeviceRef;                        //@synthesize dfuModeDeviceRef=_dfuModeDeviceRef - In the implementation block
@property (assign) AMRecoveryModeDeviceRef recoveryModeDeviceRef;              //@synthesize recoveryModeDeviceRef=_recoveryModeDeviceRef - In the implementation block
@property (assign) AMRestoreModeDeviceRef restoreModeDeviceRef;                //@synthesize restoreModeDeviceRef=_restoreModeDeviceRef - In the implementation block
@property (assign) unsigned boardID;                                           //@synthesize boardID=_boardID - In the implementation block
@property (assign) unsigned chipID;                                            //@synthesize chipID=_chipID - In the implementation block
@property (assign,nonatomic) char productionMode;                              //@synthesize productionMode=_productionMode - In the implementation block
@property (assign) unsigned locationID;                                        //@synthesize locationID=_locationID - In the implementation block
@property (assign) char securityMode;                                          //@synthesize securityMode=_securityMode - In the implementation block
@property (retain) NSString * buildVersion;                                    //@synthesize buildVersion=_buildVersion - In the implementation block
@property (retain) PKBundleComponentVersion * bundleVersion;                   //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (readonly) EOSDeviceType * type; 
@property (readonly) void* deviceRef; 
-(void)dealloc;
-(id)description;
-(EOSDeviceType *)type;
-(void)setMode:(long long)arg1 ;
-(PKBundleComponentVersion *)bundleVersion;
-(long long)mode;
-(NSString *)buildVersion;
-(void)setBuildVersion:(NSString *)arg1 ;
-(void)setBundleVersion:(PKBundleComponentVersion *)arg1 ;
-(unsigned)locationID;
-(void)setLocationID:(unsigned)arg1 ;
-(unsigned)boardID;
-(unsigned)chipID;
-(char)securityMode;
-(char)productionMode;
-(void*)deviceRef;
-(void)setSecurityMode:(char)arg1 ;
-(id)fetchPreflightDictionary;
-(void)setProductionMode:(char)arg1 ;
-(id)initWithDFUModeDevice:(AMDFUModeDeviceRef)arg1 ;
-(id)initWithRecoveryModeDevice:(AMRecoveryModeDeviceRef)arg1 ;
-(id)initWithRestoreModeDevice:(AMRestoreModeDeviceRef)arg1 ;
-(id)initWithRunningDevice;
-(id)initWithUnresponsiveDevice;
-(void)_populateRunningModeDeviceInfo;
-(AMDFUModeDeviceRef)dfuModeDeviceRef;
-(AMRecoveryModeDeviceRef)recoveryModeDeviceRef;
-(AMRestoreModeDeviceRef)restoreModeDeviceRef;
-(void)setBoardID:(unsigned)arg1 ;
-(void)setChipID:(unsigned)arg1 ;
-(void)setDfuModeDeviceRef:(AMDFUModeDeviceRef)arg1 ;
-(void)setRecoveryModeDeviceRef:(AMRecoveryModeDeviceRef)arg1 ;
-(void)setRestoreModeDeviceRef:(AMRestoreModeDeviceRef)arg1 ;
-(id)_initWithDFUModeDeviceWithBoardID:(unsigned)arg1 chipID:(unsigned)arg2 ;
-(id)_initWithRunningModeDeviceOfType:(id)arg1 productionMode:(char)arg2 buildVersion:(id)arg3 bundleVersion:(id)arg4 ;
@end

