/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EasyConfig.framework/Versions/A/EasyConfig
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EasyConfig/EasyConfig-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface AWDEasyConfigCompleted : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _channelOfDestinationAP;
	unsigned _channelOfSWAP;
	NSString* _eaBundleSeedID;
	NSString* _eaFirmwareRevision;
	NSString* _eaHardwareRevision;
	NSString* _eaManufacturerName;
	NSString* _eaModelName;
	NSMutableArray* _eaProtocolStrings;
	int _easyConfigStoppedReasonError;
	unsigned _enterSetupCodeMs;
	int _rssiOfDestinationAP;
	int _rssiOfSWAP;
	float _secondsToApplyConfig;
	float _secondsToCompleteFullConfig;
	float _secondsToCompleteMFiSAPAuth;
	float _secondsToCompletePostConfigCheck;
	float _secondsToFindPostConfigDevice;
	float _secondsToFindPreConfigDevice;
	float _secondsToGetLinkUpOnDestination;
	float _secondsToGetLinkUpOnSWAP;
	unsigned _snrOfDestinationAP;
	unsigned _snrOfSWAP;
	int _wifiJoinDestinationAPError;
	int _wifiJoinSWAPError;
	char _adminPasswordSet;
	char _destinationNetworkPSKInKeychain;
	char _destinationNetworkRecommendationUsed;
	char _hitJoiningDestinationAPTimeout;
	char _hitJoiningTargetSWAPTimeout;
	char _pauseAfterApply;
	char _playPasswordSet;
	char _userChangedFriendlyName;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasUserChangedFriendlyName; 
@property (assign,nonatomic) char userChangedFriendlyName;                              //@synthesize userChangedFriendlyName=_userChangedFriendlyName - In the implementation block
@property (assign,nonatomic) char hasPlayPasswordSet; 
@property (assign,nonatomic) char playPasswordSet;                                      //@synthesize playPasswordSet=_playPasswordSet - In the implementation block
@property (assign,nonatomic) char hasAdminPasswordSet; 
@property (assign,nonatomic) char adminPasswordSet;                                     //@synthesize adminPasswordSet=_adminPasswordSet - In the implementation block
@property (assign,nonatomic) char hasDestinationNetworkRecommendationUsed; 
@property (assign,nonatomic) char destinationNetworkRecommendationUsed;                 //@synthesize destinationNetworkRecommendationUsed=_destinationNetworkRecommendationUsed - In the implementation block
@property (assign,nonatomic) char hasSecondsToCompleteFullConfig; 
@property (assign,nonatomic) float secondsToCompleteFullConfig;                         //@synthesize secondsToCompleteFullConfig=_secondsToCompleteFullConfig - In the implementation block
@property (assign,nonatomic) char hasSecondsToGetLinkUpOnSWAP; 
@property (assign,nonatomic) float secondsToGetLinkUpOnSWAP;                            //@synthesize secondsToGetLinkUpOnSWAP=_secondsToGetLinkUpOnSWAP - In the implementation block
@property (assign,nonatomic) char hasWifiJoinSWAPError; 
@property (assign,nonatomic) int wifiJoinSWAPError;                                     //@synthesize wifiJoinSWAPError=_wifiJoinSWAPError - In the implementation block
@property (assign,nonatomic) char hasHitJoiningTargetSWAPTimeout; 
@property (assign,nonatomic) char hitJoiningTargetSWAPTimeout;                          //@synthesize hitJoiningTargetSWAPTimeout=_hitJoiningTargetSWAPTimeout - In the implementation block
@property (assign,nonatomic) char hasRssiOfSWAP; 
@property (assign,nonatomic) int rssiOfSWAP;                                            //@synthesize rssiOfSWAP=_rssiOfSWAP - In the implementation block
@property (assign,nonatomic) char hasSnrOfSWAP; 
@property (assign,nonatomic) unsigned snrOfSWAP;                                        //@synthesize snrOfSWAP=_snrOfSWAP - In the implementation block
@property (assign,nonatomic) char hasChannelOfSWAP; 
@property (assign,nonatomic) unsigned channelOfSWAP;                                    //@synthesize channelOfSWAP=_channelOfSWAP - In the implementation block
@property (assign,nonatomic) char hasSecondsToGetLinkUpOnDestination; 
@property (assign,nonatomic) float secondsToGetLinkUpOnDestination;                     //@synthesize secondsToGetLinkUpOnDestination=_secondsToGetLinkUpOnDestination - In the implementation block
@property (assign,nonatomic) char hasWifiJoinDestinationAPError; 
@property (assign,nonatomic) int wifiJoinDestinationAPError;                            //@synthesize wifiJoinDestinationAPError=_wifiJoinDestinationAPError - In the implementation block
@property (assign,nonatomic) char hasDestinationNetworkPSKInKeychain; 
@property (assign,nonatomic) char destinationNetworkPSKInKeychain;                      //@synthesize destinationNetworkPSKInKeychain=_destinationNetworkPSKInKeychain - In the implementation block
@property (assign,nonatomic) char hasHitJoiningDestinationAPTimeout; 
@property (assign,nonatomic) char hitJoiningDestinationAPTimeout;                       //@synthesize hitJoiningDestinationAPTimeout=_hitJoiningDestinationAPTimeout - In the implementation block
@property (assign,nonatomic) char hasRssiOfDestinationAP; 
@property (assign,nonatomic) int rssiOfDestinationAP;                                   //@synthesize rssiOfDestinationAP=_rssiOfDestinationAP - In the implementation block
@property (assign,nonatomic) char hasSnrOfDestinationAP; 
@property (assign,nonatomic) unsigned snrOfDestinationAP;                               //@synthesize snrOfDestinationAP=_snrOfDestinationAP - In the implementation block
@property (assign,nonatomic) char hasChannelOfDestinationAP; 
@property (assign,nonatomic) unsigned channelOfDestinationAP;                           //@synthesize channelOfDestinationAP=_channelOfDestinationAP - In the implementation block
@property (assign,nonatomic) char hasSecondsToFindPreConfigDevice; 
@property (assign,nonatomic) float secondsToFindPreConfigDevice;                        //@synthesize secondsToFindPreConfigDevice=_secondsToFindPreConfigDevice - In the implementation block
@property (assign,nonatomic) char hasSecondsToCompleteMFiSAPAuth; 
@property (assign,nonatomic) float secondsToCompleteMFiSAPAuth;                         //@synthesize secondsToCompleteMFiSAPAuth=_secondsToCompleteMFiSAPAuth - In the implementation block
@property (assign,nonatomic) char hasSecondsToApplyConfig; 
@property (assign,nonatomic) float secondsToApplyConfig;                                //@synthesize secondsToApplyConfig=_secondsToApplyConfig - In the implementation block
@property (assign,nonatomic) char hasSecondsToFindPostConfigDevice; 
@property (assign,nonatomic) float secondsToFindPostConfigDevice;                       //@synthesize secondsToFindPostConfigDevice=_secondsToFindPostConfigDevice - In the implementation block
@property (assign,nonatomic) char hasSecondsToCompletePostConfigCheck; 
@property (assign,nonatomic) float secondsToCompletePostConfigCheck;                    //@synthesize secondsToCompletePostConfigCheck=_secondsToCompletePostConfigCheck - In the implementation block
@property (assign,nonatomic) char hasPauseAfterApply; 
@property (assign,nonatomic) char pauseAfterApply;                                      //@synthesize pauseAfterApply=_pauseAfterApply - In the implementation block
@property (assign,nonatomic) char hasEasyConfigStoppedReasonError; 
@property (assign,nonatomic) int easyConfigStoppedReasonError;                          //@synthesize easyConfigStoppedReasonError=_easyConfigStoppedReasonError - In the implementation block
@property (nonatomic,readonly) char hasEaBundleSeedID; 
@property (nonatomic,retain) NSString * eaBundleSeedID;                                 //@synthesize eaBundleSeedID=_eaBundleSeedID - In the implementation block
@property (nonatomic,retain) NSMutableArray * eaProtocolStrings;                        //@synthesize eaProtocolStrings=_eaProtocolStrings - In the implementation block
@property (nonatomic,readonly) char hasEaManufacturerName; 
@property (nonatomic,retain) NSString * eaManufacturerName;                             //@synthesize eaManufacturerName=_eaManufacturerName - In the implementation block
@property (nonatomic,readonly) char hasEaModelName; 
@property (nonatomic,retain) NSString * eaModelName;                                    //@synthesize eaModelName=_eaModelName - In the implementation block
@property (nonatomic,readonly) char hasEaFirmwareRevision; 
@property (nonatomic,retain) NSString * eaFirmwareRevision;                             //@synthesize eaFirmwareRevision=_eaFirmwareRevision - In the implementation block
@property (nonatomic,readonly) char hasEaHardwareRevision; 
@property (nonatomic,retain) NSString * eaHardwareRevision;                             //@synthesize eaHardwareRevision=_eaHardwareRevision - In the implementation block
@property (assign,nonatomic) char hasEnterSetupCodeMs; 
@property (assign,nonatomic) unsigned enterSetupCodeMs;                                 //@synthesize enterSetupCodeMs=_enterSetupCodeMs - In the implementation block
+(Class)eaProtocolStringsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setUserChangedFriendlyName:(char)arg1 ;
-(void)setHasUserChangedFriendlyName:(char)arg1 ;
-(char)hasUserChangedFriendlyName;
-(void)setPlayPasswordSet:(char)arg1 ;
-(void)setHasPlayPasswordSet:(char)arg1 ;
-(char)hasPlayPasswordSet;
-(void)setAdminPasswordSet:(char)arg1 ;
-(void)setHasAdminPasswordSet:(char)arg1 ;
-(char)hasAdminPasswordSet;
-(void)setDestinationNetworkRecommendationUsed:(char)arg1 ;
-(void)setHasDestinationNetworkRecommendationUsed:(char)arg1 ;
-(char)hasDestinationNetworkRecommendationUsed;
-(void)setSecondsToCompleteFullConfig:(float)arg1 ;
-(void)setHasSecondsToCompleteFullConfig:(char)arg1 ;
-(char)hasSecondsToCompleteFullConfig;
-(void)setSecondsToGetLinkUpOnSWAP:(float)arg1 ;
-(void)setHasSecondsToGetLinkUpOnSWAP:(char)arg1 ;
-(char)hasSecondsToGetLinkUpOnSWAP;
-(void)setWifiJoinSWAPError:(int)arg1 ;
-(void)setHasWifiJoinSWAPError:(char)arg1 ;
-(char)hasWifiJoinSWAPError;
-(void)setHitJoiningTargetSWAPTimeout:(char)arg1 ;
-(void)setHasHitJoiningTargetSWAPTimeout:(char)arg1 ;
-(char)hasHitJoiningTargetSWAPTimeout;
-(void)setRssiOfSWAP:(int)arg1 ;
-(void)setHasRssiOfSWAP:(char)arg1 ;
-(char)hasRssiOfSWAP;
-(void)setSnrOfSWAP:(unsigned)arg1 ;
-(void)setHasSnrOfSWAP:(char)arg1 ;
-(char)hasSnrOfSWAP;
-(void)setChannelOfSWAP:(unsigned)arg1 ;
-(void)setHasChannelOfSWAP:(char)arg1 ;
-(char)hasChannelOfSWAP;
-(void)setSecondsToGetLinkUpOnDestination:(float)arg1 ;
-(void)setHasSecondsToGetLinkUpOnDestination:(char)arg1 ;
-(char)hasSecondsToGetLinkUpOnDestination;
-(void)setWifiJoinDestinationAPError:(int)arg1 ;
-(void)setHasWifiJoinDestinationAPError:(char)arg1 ;
-(char)hasWifiJoinDestinationAPError;
-(void)setDestinationNetworkPSKInKeychain:(char)arg1 ;
-(void)setHasDestinationNetworkPSKInKeychain:(char)arg1 ;
-(char)hasDestinationNetworkPSKInKeychain;
-(void)setHitJoiningDestinationAPTimeout:(char)arg1 ;
-(void)setHasHitJoiningDestinationAPTimeout:(char)arg1 ;
-(char)hasHitJoiningDestinationAPTimeout;
-(void)setRssiOfDestinationAP:(int)arg1 ;
-(void)setHasRssiOfDestinationAP:(char)arg1 ;
-(char)hasRssiOfDestinationAP;
-(void)setSnrOfDestinationAP:(unsigned)arg1 ;
-(void)setHasSnrOfDestinationAP:(char)arg1 ;
-(char)hasSnrOfDestinationAP;
-(void)setChannelOfDestinationAP:(unsigned)arg1 ;
-(void)setHasChannelOfDestinationAP:(char)arg1 ;
-(char)hasChannelOfDestinationAP;
-(void)setSecondsToFindPreConfigDevice:(float)arg1 ;
-(void)setHasSecondsToFindPreConfigDevice:(char)arg1 ;
-(char)hasSecondsToFindPreConfigDevice;
-(void)setSecondsToCompleteMFiSAPAuth:(float)arg1 ;
-(void)setHasSecondsToCompleteMFiSAPAuth:(char)arg1 ;
-(char)hasSecondsToCompleteMFiSAPAuth;
-(void)setSecondsToApplyConfig:(float)arg1 ;
-(void)setHasSecondsToApplyConfig:(char)arg1 ;
-(char)hasSecondsToApplyConfig;
-(void)setSecondsToFindPostConfigDevice:(float)arg1 ;
-(void)setHasSecondsToFindPostConfigDevice:(char)arg1 ;
-(char)hasSecondsToFindPostConfigDevice;
-(void)setSecondsToCompletePostConfigCheck:(float)arg1 ;
-(void)setHasSecondsToCompletePostConfigCheck:(char)arg1 ;
-(char)hasSecondsToCompletePostConfigCheck;
-(void)setPauseAfterApply:(char)arg1 ;
-(void)setHasPauseAfterApply:(char)arg1 ;
-(char)hasPauseAfterApply;
-(void)setEasyConfigStoppedReasonError:(int)arg1 ;
-(void)setHasEasyConfigStoppedReasonError:(char)arg1 ;
-(char)hasEasyConfigStoppedReasonError;
-(char)hasEaBundleSeedID;
-(void)clearEaProtocolStrings;
-(void)addEaProtocolStrings:(id)arg1 ;
-(unsigned long long)eaProtocolStringsCount;
-(id)eaProtocolStringsAtIndex:(unsigned long long)arg1 ;
-(char)hasEaManufacturerName;
-(char)hasEaModelName;
-(char)hasEaFirmwareRevision;
-(char)hasEaHardwareRevision;
-(void)setEnterSetupCodeMs:(unsigned)arg1 ;
-(void)setHasEnterSetupCodeMs:(char)arg1 ;
-(char)hasEnterSetupCodeMs;
-(char)userChangedFriendlyName;
-(char)playPasswordSet;
-(char)adminPasswordSet;
-(char)destinationNetworkRecommendationUsed;
-(float)secondsToCompleteFullConfig;
-(float)secondsToGetLinkUpOnSWAP;
-(int)wifiJoinSWAPError;
-(char)hitJoiningTargetSWAPTimeout;
-(int)rssiOfSWAP;
-(unsigned)snrOfSWAP;
-(unsigned)channelOfSWAP;
-(float)secondsToGetLinkUpOnDestination;
-(int)wifiJoinDestinationAPError;
-(char)destinationNetworkPSKInKeychain;
-(char)hitJoiningDestinationAPTimeout;
-(int)rssiOfDestinationAP;
-(unsigned)snrOfDestinationAP;
-(unsigned)channelOfDestinationAP;
-(float)secondsToFindPreConfigDevice;
-(float)secondsToCompleteMFiSAPAuth;
-(float)secondsToApplyConfig;
-(float)secondsToFindPostConfigDevice;
-(float)secondsToCompletePostConfigCheck;
-(char)pauseAfterApply;
-(int)easyConfigStoppedReasonError;
-(NSString *)eaBundleSeedID;
-(void)setEaBundleSeedID:(NSString *)arg1 ;
-(NSMutableArray *)eaProtocolStrings;
-(void)setEaProtocolStrings:(NSMutableArray *)arg1 ;
-(NSString *)eaManufacturerName;
-(void)setEaManufacturerName:(NSString *)arg1 ;
-(NSString *)eaModelName;
-(void)setEaModelName:(NSString *)arg1 ;
-(NSString *)eaFirmwareRevision;
-(void)setEaFirmwareRevision:(NSString *)arg1 ;
-(NSString *)eaHardwareRevision;
-(void)setEaHardwareRevision:(NSString *)arg1 ;
-(unsigned)enterSetupCodeMs;
@end

