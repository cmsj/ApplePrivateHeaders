/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface AWDWiFiMetricLinkChangeData : PBCodable <NSCopying> {

	SCD_Struct_AW15* _bcnFrmsHistorys;
	SCD_Struct_AW15* _bcnPerHistorys;
	SCD_Struct_AW15* _fwTxFrmsHistorys;
	SCD_Struct_AW15* _fwTxPerHistorys;
	SCD_Struct_AW15* _rssiHistorys;
	SCD_Struct_AW15* _txFrmsHistorys;
	SCD_Struct_AW15* _txPerHistorys;
	double _associationDuration;
	unsigned long long _timestamp;
	unsigned _akmSuites;
	unsigned _capabilities;
	unsigned _channel;
	unsigned _channelSwitchDuringHostSleep;
	unsigned _channelSwitchDuringHostWake;
	unsigned _channelWidth;
	NSString* _countryCode;
	unsigned _enhancedSecurityType;
	unsigned _flags;
	unsigned _gatewayARPHistory;
	unsigned _htASel;
	unsigned _htAmpduParams;
	unsigned _htExtended;
	unsigned _htInfo;
	NSData* _htSupportedMcsSet;
	unsigned _htTxBf;
	NSString* _locale;
	NSString* _localeSource;
	unsigned _mcastCipher;
	NSData* _oui;
	unsigned _phyMode;
	NSString* _privateMacType;
	unsigned _reason;
	unsigned _rxCSAFrames;
	unsigned _securityType;
	unsigned _subreason;
	unsigned _ucastCipher;
	unsigned _vhtInfo;
	NSData* _vhtSupportedMcsSet;
	unsigned _wpaProtocol;
	NSString* _wpsConfigMethods;
	NSString* _wpsDeviceNameData;
	NSString* _wpsDeviceNameElement;
	NSString* _wpsManufacturerElement;
	NSString* _wpsModelName;
	NSString* _wpsModelNumber;
	NSString* _wpsPrimaryDeviceTypeCategory;
	NSString* _wpsPrimaryDeviceTypeSubCategory;
	NSString* _wpsResponseType;
	char _isInVol;
	char _isLinkUp;
	SCD_Struct_AW32 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long rssiHistorysCount; 
@property (nonatomic,readonly) int* rssiHistorys; 
@property (assign,nonatomic) char hasIsLinkUp; 
@property (assign,nonatomic) char isLinkUp;                                           //@synthesize isLinkUp=_isLinkUp - In the implementation block
@property (assign,nonatomic) char hasIsInVol; 
@property (assign,nonatomic) char isInVol;                                            //@synthesize isInVol=_isInVol - In the implementation block
@property (assign,nonatomic) char hasReason; 
@property (assign,nonatomic) unsigned reason;                                         //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) char hasSubreason; 
@property (assign,nonatomic) unsigned subreason;                                      //@synthesize subreason=_subreason - In the implementation block
@property (assign,nonatomic) char hasChannel; 
@property (assign,nonatomic) unsigned channel;                                        //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) char hasChannelWidth; 
@property (assign,nonatomic) unsigned channelWidth;                                   //@synthesize channelWidth=_channelWidth - In the implementation block
@property (assign,nonatomic) char hasPhyMode; 
@property (assign,nonatomic) unsigned phyMode;                                        //@synthesize phyMode=_phyMode - In the implementation block
@property (assign,nonatomic) char hasFlags; 
@property (assign,nonatomic) unsigned flags;                                          //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) char hasOui; 
@property (nonatomic,retain) NSData * oui;                                            //@synthesize oui=_oui - In the implementation block
@property (assign,nonatomic) char hasSecurityType; 
@property (assign,nonatomic) unsigned securityType;                                   //@synthesize securityType=_securityType - In the implementation block
@property (assign,nonatomic) char hasWpaProtocol; 
@property (assign,nonatomic) unsigned wpaProtocol;                                    //@synthesize wpaProtocol=_wpaProtocol - In the implementation block
@property (assign,nonatomic) char hasMcastCipher; 
@property (assign,nonatomic) unsigned mcastCipher;                                    //@synthesize mcastCipher=_mcastCipher - In the implementation block
@property (assign,nonatomic) char hasUcastCipher; 
@property (assign,nonatomic) unsigned ucastCipher;                                    //@synthesize ucastCipher=_ucastCipher - In the implementation block
@property (assign,nonatomic) char hasAkmSuites; 
@property (assign,nonatomic) unsigned akmSuites;                                      //@synthesize akmSuites=_akmSuites - In the implementation block
@property (assign,nonatomic) char hasCapabilities; 
@property (assign,nonatomic) unsigned capabilities;                                   //@synthesize capabilities=_capabilities - In the implementation block
@property (assign,nonatomic) char hasEnhancedSecurityType; 
@property (assign,nonatomic) unsigned enhancedSecurityType;                           //@synthesize enhancedSecurityType=_enhancedSecurityType - In the implementation block
@property (assign,nonatomic) char hasHtInfo; 
@property (assign,nonatomic) unsigned htInfo;                                         //@synthesize htInfo=_htInfo - In the implementation block
@property (assign,nonatomic) char hasHtExtended; 
@property (assign,nonatomic) unsigned htExtended;                                     //@synthesize htExtended=_htExtended - In the implementation block
@property (assign,nonatomic) char hasHtTxBf; 
@property (assign,nonatomic) unsigned htTxBf;                                         //@synthesize htTxBf=_htTxBf - In the implementation block
@property (assign,nonatomic) char hasHtASel; 
@property (assign,nonatomic) unsigned htASel;                                         //@synthesize htASel=_htASel - In the implementation block
@property (assign,nonatomic) char hasHtAmpduParams; 
@property (assign,nonatomic) unsigned htAmpduParams;                                  //@synthesize htAmpduParams=_htAmpduParams - In the implementation block
@property (nonatomic,readonly) char hasHtSupportedMcsSet; 
@property (nonatomic,retain) NSData * htSupportedMcsSet;                              //@synthesize htSupportedMcsSet=_htSupportedMcsSet - In the implementation block
@property (assign,nonatomic) char hasVhtInfo; 
@property (assign,nonatomic) unsigned vhtInfo;                                        //@synthesize vhtInfo=_vhtInfo - In the implementation block
@property (nonatomic,readonly) char hasVhtSupportedMcsSet; 
@property (nonatomic,retain) NSData * vhtSupportedMcsSet;                             //@synthesize vhtSupportedMcsSet=_vhtSupportedMcsSet - In the implementation block
@property (nonatomic,readonly) unsigned long long txPerHistorysCount; 
@property (nonatomic,readonly) int* txPerHistorys; 
@property (nonatomic,readonly) unsigned long long txFrmsHistorysCount; 
@property (nonatomic,readonly) int* txFrmsHistorys; 
@property (nonatomic,readonly) unsigned long long fwTxPerHistorysCount; 
@property (nonatomic,readonly) int* fwTxPerHistorys; 
@property (nonatomic,readonly) unsigned long long fwTxFrmsHistorysCount; 
@property (nonatomic,readonly) int* fwTxFrmsHistorys; 
@property (nonatomic,readonly) unsigned long long bcnPerHistorysCount; 
@property (nonatomic,readonly) int* bcnPerHistorys; 
@property (nonatomic,readonly) unsigned long long bcnFrmsHistorysCount; 
@property (nonatomic,readonly) int* bcnFrmsHistorys; 
@property (assign,nonatomic) char hasGatewayARPHistory; 
@property (assign,nonatomic) unsigned gatewayARPHistory;                              //@synthesize gatewayARPHistory=_gatewayARPHistory - In the implementation block
@property (nonatomic,readonly) char hasLocale; 
@property (nonatomic,retain) NSString * locale;                                       //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) char hasAssociationDuration; 
@property (assign,nonatomic) double associationDuration;                              //@synthesize associationDuration=_associationDuration - In the implementation block
@property (nonatomic,readonly) char hasWpsResponseType; 
@property (nonatomic,retain) NSString * wpsResponseType;                              //@synthesize wpsResponseType=_wpsResponseType - In the implementation block
@property (nonatomic,readonly) char hasWpsManufacturerElement; 
@property (nonatomic,retain) NSString * wpsManufacturerElement;                       //@synthesize wpsManufacturerElement=_wpsManufacturerElement - In the implementation block
@property (nonatomic,readonly) char hasWpsModelName; 
@property (nonatomic,retain) NSString * wpsModelName;                                 //@synthesize wpsModelName=_wpsModelName - In the implementation block
@property (nonatomic,readonly) char hasWpsModelNumber; 
@property (nonatomic,retain) NSString * wpsModelNumber;                               //@synthesize wpsModelNumber=_wpsModelNumber - In the implementation block
@property (nonatomic,readonly) char hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                                  //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) char hasWpsPrimaryDeviceTypeCategory; 
@property (nonatomic,retain) NSString * wpsPrimaryDeviceTypeCategory;                 //@synthesize wpsPrimaryDeviceTypeCategory=_wpsPrimaryDeviceTypeCategory - In the implementation block
@property (nonatomic,readonly) char hasWpsPrimaryDeviceTypeSubCategory; 
@property (nonatomic,retain) NSString * wpsPrimaryDeviceTypeSubCategory;              //@synthesize wpsPrimaryDeviceTypeSubCategory=_wpsPrimaryDeviceTypeSubCategory - In the implementation block
@property (nonatomic,readonly) char hasWpsDeviceNameElement; 
@property (nonatomic,retain) NSString * wpsDeviceNameElement;                         //@synthesize wpsDeviceNameElement=_wpsDeviceNameElement - In the implementation block
@property (nonatomic,readonly) char hasWpsDeviceNameData; 
@property (nonatomic,retain) NSString * wpsDeviceNameData;                            //@synthesize wpsDeviceNameData=_wpsDeviceNameData - In the implementation block
@property (nonatomic,readonly) char hasWpsConfigMethods; 
@property (nonatomic,retain) NSString * wpsConfigMethods;                             //@synthesize wpsConfigMethods=_wpsConfigMethods - In the implementation block
@property (nonatomic,readonly) char hasLocaleSource; 
@property (nonatomic,retain) NSString * localeSource;                                 //@synthesize localeSource=_localeSource - In the implementation block
@property (assign,nonatomic) char hasRxCSAFrames; 
@property (assign,nonatomic) unsigned rxCSAFrames;                                    //@synthesize rxCSAFrames=_rxCSAFrames - In the implementation block
@property (assign,nonatomic) char hasChannelSwitchDuringHostSleep; 
@property (assign,nonatomic) unsigned channelSwitchDuringHostSleep;                   //@synthesize channelSwitchDuringHostSleep=_channelSwitchDuringHostSleep - In the implementation block
@property (assign,nonatomic) char hasChannelSwitchDuringHostWake; 
@property (assign,nonatomic) unsigned channelSwitchDuringHostWake;                    //@synthesize channelSwitchDuringHostWake=_channelSwitchDuringHostWake - In the implementation block
@property (nonatomic,readonly) char hasPrivateMacType; 
@property (nonatomic,retain) NSString * privateMacType;                               //@synthesize privateMacType=_privateMacType - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)flags;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)reason;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(NSString *)countryCode;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)setFlags:(unsigned)arg1 ;
-(void)setReason:(unsigned)arg1 ;
-(unsigned)capabilities;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned)channel;
-(char)hasTimestamp;
-(void)setCapabilities:(unsigned)arg1 ;
-(void)setChannel:(unsigned)arg1 ;
-(unsigned)securityType;
-(void)setSecurityType:(unsigned)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(char)hasCountryCode;
-(void)setHasChannel:(char)arg1 ;
-(char)hasChannel;
-(char)hasLocale;
-(NSString *)wpsResponseType;
-(NSString *)wpsManufacturerElement;
-(NSString *)wpsModelName;
-(NSString *)wpsModelNumber;
-(NSString *)wpsPrimaryDeviceTypeCategory;
-(NSString *)wpsPrimaryDeviceTypeSubCategory;
-(NSString *)wpsDeviceNameElement;
-(NSString *)wpsDeviceNameData;
-(NSString *)wpsConfigMethods;
-(void)setWpsResponseType:(NSString *)arg1 ;
-(void)setWpsManufacturerElement:(NSString *)arg1 ;
-(void)setWpsModelName:(NSString *)arg1 ;
-(void)setWpsModelNumber:(NSString *)arg1 ;
-(void)setWpsPrimaryDeviceTypeCategory:(NSString *)arg1 ;
-(void)setWpsPrimaryDeviceTypeSubCategory:(NSString *)arg1 ;
-(void)setWpsDeviceNameElement:(NSString *)arg1 ;
-(void)setWpsDeviceNameData:(NSString *)arg1 ;
-(void)setWpsConfigMethods:(NSString *)arg1 ;
-(char)hasWpsResponseType;
-(char)hasWpsManufacturerElement;
-(char)hasWpsModelName;
-(char)hasWpsModelNumber;
-(char)hasWpsPrimaryDeviceTypeCategory;
-(char)hasWpsPrimaryDeviceTypeSubCategory;
-(char)hasWpsDeviceNameElement;
-(char)hasWpsDeviceNameData;
-(char)hasWpsConfigMethods;
-(void)setChannelWidth:(unsigned)arg1 ;
-(void)setPhyMode:(unsigned)arg1 ;
-(unsigned)channelWidth;
-(void)setHasChannelWidth:(char)arg1 ;
-(char)hasChannelWidth;
-(unsigned)phyMode;
-(void)setHasPhyMode:(char)arg1 ;
-(char)hasPhyMode;
-(char)hasReason;
-(void)setHasReason:(char)arg1 ;
-(void)setOui:(NSData *)arg1 ;
-(char)hasOui;
-(NSData *)oui;
-(void)setHasSecurityType:(char)arg1 ;
-(char)hasSecurityType;
-(void)setHtSupportedMcsSet:(NSData *)arg1 ;
-(void)setVhtSupportedMcsSet:(NSData *)arg1 ;
-(unsigned long long)rssiHistorysCount;
-(void)clearRssiHistorys;
-(int)rssiHistoryAtIndex:(unsigned long long)arg1 ;
-(void)addRssiHistory:(int)arg1 ;
-(unsigned long long)txPerHistorysCount;
-(void)clearTxPerHistorys;
-(int)txPerHistoryAtIndex:(unsigned long long)arg1 ;
-(void)addTxPerHistory:(int)arg1 ;
-(unsigned long long)txFrmsHistorysCount;
-(void)clearTxFrmsHistorys;
-(int)txFrmsHistoryAtIndex:(unsigned long long)arg1 ;
-(void)addTxFrmsHistory:(int)arg1 ;
-(unsigned long long)fwTxPerHistorysCount;
-(void)clearFwTxPerHistorys;
-(int)fwTxPerHistoryAtIndex:(unsigned long long)arg1 ;
-(void)addFwTxPerHistory:(int)arg1 ;
-(unsigned long long)fwTxFrmsHistorysCount;
-(void)clearFwTxFrmsHistorys;
-(int)fwTxFrmsHistoryAtIndex:(unsigned long long)arg1 ;
-(void)addFwTxFrmsHistory:(int)arg1 ;
-(unsigned long long)bcnPerHistorysCount;
-(void)clearBcnPerHistorys;
-(int)bcnPerHistoryAtIndex:(unsigned long long)arg1 ;
-(void)addBcnPerHistory:(int)arg1 ;
-(unsigned long long)bcnFrmsHistorysCount;
-(void)clearBcnFrmsHistorys;
-(int)bcnFrmsHistoryAtIndex:(unsigned long long)arg1 ;
-(void)addBcnFrmsHistory:(int)arg1 ;
-(int*)rssiHistorys;
-(void)setRssiHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setIsLinkUp:(char)arg1 ;
-(void)setHasIsLinkUp:(char)arg1 ;
-(char)hasIsLinkUp;
-(void)setIsInVol:(char)arg1 ;
-(void)setHasIsInVol:(char)arg1 ;
-(char)hasIsInVol;
-(void)setSubreason:(unsigned)arg1 ;
-(void)setHasSubreason:(char)arg1 ;
-(char)hasSubreason;
-(void)setHasFlags:(char)arg1 ;
-(char)hasFlags;
-(void)setWpaProtocol:(unsigned)arg1 ;
-(void)setHasWpaProtocol:(char)arg1 ;
-(char)hasWpaProtocol;
-(void)setMcastCipher:(unsigned)arg1 ;
-(void)setHasMcastCipher:(char)arg1 ;
-(char)hasMcastCipher;
-(void)setUcastCipher:(unsigned)arg1 ;
-(void)setHasUcastCipher:(char)arg1 ;
-(char)hasUcastCipher;
-(void)setAkmSuites:(unsigned)arg1 ;
-(void)setHasAkmSuites:(char)arg1 ;
-(char)hasAkmSuites;
-(void)setHasCapabilities:(char)arg1 ;
-(char)hasCapabilities;
-(void)setEnhancedSecurityType:(unsigned)arg1 ;
-(void)setHasEnhancedSecurityType:(char)arg1 ;
-(char)hasEnhancedSecurityType;
-(void)setHtInfo:(unsigned)arg1 ;
-(void)setHasHtInfo:(char)arg1 ;
-(char)hasHtInfo;
-(void)setHtExtended:(unsigned)arg1 ;
-(void)setHasHtExtended:(char)arg1 ;
-(char)hasHtExtended;
-(void)setHtTxBf:(unsigned)arg1 ;
-(void)setHasHtTxBf:(char)arg1 ;
-(char)hasHtTxBf;
-(void)setHtASel:(unsigned)arg1 ;
-(void)setHasHtASel:(char)arg1 ;
-(char)hasHtASel;
-(void)setHtAmpduParams:(unsigned)arg1 ;
-(void)setHasHtAmpduParams:(char)arg1 ;
-(char)hasHtAmpduParams;
-(char)hasHtSupportedMcsSet;
-(void)setVhtInfo:(unsigned)arg1 ;
-(void)setHasVhtInfo:(char)arg1 ;
-(char)hasVhtInfo;
-(char)hasVhtSupportedMcsSet;
-(int*)txPerHistorys;
-(void)setTxPerHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)txFrmsHistorys;
-(void)setTxFrmsHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)fwTxPerHistorys;
-(void)setFwTxPerHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)fwTxFrmsHistorys;
-(void)setFwTxFrmsHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)bcnPerHistorys;
-(void)setBcnPerHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)bcnFrmsHistorys;
-(void)setBcnFrmsHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setGatewayARPHistory:(unsigned)arg1 ;
-(void)setHasGatewayARPHistory:(char)arg1 ;
-(char)hasGatewayARPHistory;
-(char)isLinkUp;
-(char)isInVol;
-(unsigned)subreason;
-(unsigned)wpaProtocol;
-(unsigned)mcastCipher;
-(unsigned)ucastCipher;
-(unsigned)akmSuites;
-(unsigned)enhancedSecurityType;
-(unsigned)htInfo;
-(unsigned)htExtended;
-(unsigned)htTxBf;
-(unsigned)htASel;
-(unsigned)htAmpduParams;
-(NSData *)htSupportedMcsSet;
-(unsigned)vhtInfo;
-(NSData *)vhtSupportedMcsSet;
-(unsigned)gatewayARPHistory;
-(void)setPrivateMacType:(NSString *)arg1 ;
-(char)hasPrivateMacType;
-(NSString *)privateMacType;
-(void)setLocaleSource:(NSString *)arg1 ;
-(void)setAssociationDuration:(double)arg1 ;
-(void)setHasAssociationDuration:(char)arg1 ;
-(char)hasAssociationDuration;
-(char)hasLocaleSource;
-(void)setRxCSAFrames:(unsigned)arg1 ;
-(void)setHasRxCSAFrames:(char)arg1 ;
-(char)hasRxCSAFrames;
-(void)setChannelSwitchDuringHostSleep:(unsigned)arg1 ;
-(void)setHasChannelSwitchDuringHostSleep:(char)arg1 ;
-(char)hasChannelSwitchDuringHostSleep;
-(void)setChannelSwitchDuringHostWake:(unsigned)arg1 ;
-(void)setHasChannelSwitchDuringHostWake:(char)arg1 ;
-(char)hasChannelSwitchDuringHostWake;
-(double)associationDuration;
-(NSString *)localeSource;
-(unsigned)rxCSAFrames;
-(unsigned)channelSwitchDuringHostSleep;
-(unsigned)channelSwitchDuringHostWake;
@end
