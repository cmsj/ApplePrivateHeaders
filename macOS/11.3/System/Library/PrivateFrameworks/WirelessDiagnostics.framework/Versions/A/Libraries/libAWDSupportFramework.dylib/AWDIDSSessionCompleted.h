/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Versions/A/Libraries/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIDSSessionCompleted : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _clientType;
	unsigned _destinationType;
	unsigned _durationOfSession;
	unsigned _durationToConnect;
	unsigned _endedReason;
	NSString* _guid;
	unsigned _isCellularInterfaceDisallowed;
	unsigned _isInitiator;
	unsigned _isLegacySessionType;
	unsigned _isNetworkActive;
	unsigned _isNetworkEnabled;
	unsigned _isNetworkReachable;
	unsigned _isQREnabled;
	unsigned _isUsingQRDirectly;
	unsigned _isWifiInterfaceDisallowed;
	unsigned _isWithDefaultPairedDevice;
	unsigned _linkProtocol;
	unsigned _linkType;
	NSString* _serviceName;
	unsigned _sessionProtocolVersionNumber;
	unsigned _transportType;
	SCD_Struct_AW18 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasGuid; 
@property (nonatomic,retain) NSString * guid;                                     //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) char hasSessionProtocolVersionNumber; 
@property (assign,nonatomic) unsigned sessionProtocolVersionNumber;               //@synthesize sessionProtocolVersionNumber=_sessionProtocolVersionNumber - In the implementation block
@property (nonatomic,readonly) char hasServiceName; 
@property (nonatomic,retain) NSString * serviceName;                              //@synthesize serviceName=_serviceName - In the implementation block
@property (assign,nonatomic) char hasClientType; 
@property (assign,nonatomic) int clientType;                                      //@synthesize clientType=_clientType - In the implementation block
@property (assign,nonatomic) char hasIsQREnabled; 
@property (assign,nonatomic) unsigned isQREnabled;                                //@synthesize isQREnabled=_isQREnabled - In the implementation block
@property (assign,nonatomic) char hasIsUsingQRDirectly; 
@property (assign,nonatomic) unsigned isUsingQRDirectly;                          //@synthesize isUsingQRDirectly=_isUsingQRDirectly - In the implementation block
@property (assign,nonatomic) char hasIsInitiator; 
@property (assign,nonatomic) unsigned isInitiator;                                //@synthesize isInitiator=_isInitiator - In the implementation block
@property (assign,nonatomic) char hasIsLegacySessionType; 
@property (assign,nonatomic) unsigned isLegacySessionType;                        //@synthesize isLegacySessionType=_isLegacySessionType - In the implementation block
@property (assign,nonatomic) char hasIsWithDefaultPairedDevice; 
@property (assign,nonatomic) unsigned isWithDefaultPairedDevice;                  //@synthesize isWithDefaultPairedDevice=_isWithDefaultPairedDevice - In the implementation block
@property (assign,nonatomic) char hasTransportType; 
@property (assign,nonatomic) unsigned transportType;                              //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) char hasLinkProtocol; 
@property (assign,nonatomic) unsigned linkProtocol;                               //@synthesize linkProtocol=_linkProtocol - In the implementation block
@property (assign,nonatomic) char hasEndedReason; 
@property (assign,nonatomic) unsigned endedReason;                                //@synthesize endedReason=_endedReason - In the implementation block
@property (assign,nonatomic) char hasDurationOfSession; 
@property (assign,nonatomic) unsigned durationOfSession;                          //@synthesize durationOfSession=_durationOfSession - In the implementation block
@property (assign,nonatomic) char hasDurationToConnect; 
@property (assign,nonatomic) unsigned durationToConnect;                          //@synthesize durationToConnect=_durationToConnect - In the implementation block
@property (assign,nonatomic) char hasIsNetworkEnabled; 
@property (assign,nonatomic) unsigned isNetworkEnabled;                           //@synthesize isNetworkEnabled=_isNetworkEnabled - In the implementation block
@property (assign,nonatomic) char hasIsNetworkActive; 
@property (assign,nonatomic) unsigned isNetworkActive;                            //@synthesize isNetworkActive=_isNetworkActive - In the implementation block
@property (assign,nonatomic) char hasIsNetworkReachable; 
@property (assign,nonatomic) unsigned isNetworkReachable;                         //@synthesize isNetworkReachable=_isNetworkReachable - In the implementation block
@property (assign,nonatomic) char hasIsWifiInterfaceDisallowed; 
@property (assign,nonatomic) unsigned isWifiInterfaceDisallowed;                  //@synthesize isWifiInterfaceDisallowed=_isWifiInterfaceDisallowed - In the implementation block
@property (assign,nonatomic) char hasIsCellularInterfaceDisallowed; 
@property (assign,nonatomic) unsigned isCellularInterfaceDisallowed;              //@synthesize isCellularInterfaceDisallowed=_isCellularInterfaceDisallowed - In the implementation block
@property (assign,nonatomic) char hasLinkType; 
@property (assign,nonatomic) unsigned linkType;                                   //@synthesize linkType=_linkType - In the implementation block
@property (assign,nonatomic) char hasDestinationType; 
@property (assign,nonatomic) unsigned destinationType;                            //@synthesize destinationType=_destinationType - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(NSString *)serviceName;
-(unsigned)isInitiator;
-(void)setIsInitiator:(unsigned)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)transportType;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(unsigned)isNetworkReachable;
-(void)setTransportType:(unsigned)arg1 ;
-(NSString *)guid;
-(int)clientType;
-(unsigned)linkType;
-(unsigned)isQREnabled;
-(unsigned)isUsingQRDirectly;
-(unsigned)isWithDefaultPairedDevice;
-(unsigned)linkProtocol;
-(unsigned)destinationType;
-(unsigned)durationOfSession;
-(unsigned)durationToConnect;
-(unsigned)isNetworkEnabled;
-(unsigned)isNetworkActive;
-(unsigned)isWifiInterfaceDisallowed;
-(unsigned)isCellularInterfaceDisallowed;
-(unsigned)endedReason;
-(void)setGuid:(NSString *)arg1 ;
-(void)setLinkType:(unsigned)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(char)hasTransportType;
-(void)setHasTransportType:(char)arg1 ;
-(void)setDestinationType:(unsigned)arg1 ;
-(void)setHasDestinationType:(char)arg1 ;
-(char)hasDestinationType;
-(void)setHasLinkType:(char)arg1 ;
-(char)hasLinkType;
-(char)hasGuid;
-(char)hasServiceName;
-(void)setEndedReason:(unsigned)arg1 ;
-(void)setHasEndedReason:(char)arg1 ;
-(char)hasEndedReason;
-(void)setIsNetworkEnabled:(unsigned)arg1 ;
-(void)setHasIsNetworkEnabled:(char)arg1 ;
-(char)hasIsNetworkEnabled;
-(void)setIsNetworkActive:(unsigned)arg1 ;
-(void)setHasIsNetworkActive:(char)arg1 ;
-(char)hasIsNetworkActive;
-(void)setIsNetworkReachable:(unsigned)arg1 ;
-(void)setHasIsNetworkReachable:(char)arg1 ;
-(char)hasIsNetworkReachable;
-(void)setHasIsInitiator:(char)arg1 ;
-(char)hasIsInitiator;
-(void)setSessionProtocolVersionNumber:(unsigned)arg1 ;
-(void)setHasSessionProtocolVersionNumber:(char)arg1 ;
-(char)hasSessionProtocolVersionNumber;
-(void)setClientType:(int)arg1 ;
-(void)setHasClientType:(char)arg1 ;
-(char)hasClientType;
-(void)setIsQREnabled:(unsigned)arg1 ;
-(void)setHasIsQREnabled:(char)arg1 ;
-(char)hasIsQREnabled;
-(void)setIsUsingQRDirectly:(unsigned)arg1 ;
-(void)setHasIsUsingQRDirectly:(char)arg1 ;
-(char)hasIsUsingQRDirectly;
-(void)setIsLegacySessionType:(unsigned)arg1 ;
-(void)setHasIsLegacySessionType:(char)arg1 ;
-(char)hasIsLegacySessionType;
-(void)setIsWithDefaultPairedDevice:(unsigned)arg1 ;
-(void)setHasIsWithDefaultPairedDevice:(char)arg1 ;
-(char)hasIsWithDefaultPairedDevice;
-(void)setLinkProtocol:(unsigned)arg1 ;
-(void)setHasLinkProtocol:(char)arg1 ;
-(char)hasLinkProtocol;
-(void)setDurationOfSession:(unsigned)arg1 ;
-(void)setHasDurationOfSession:(char)arg1 ;
-(char)hasDurationOfSession;
-(void)setDurationToConnect:(unsigned)arg1 ;
-(void)setHasDurationToConnect:(char)arg1 ;
-(char)hasDurationToConnect;
-(void)setIsWifiInterfaceDisallowed:(unsigned)arg1 ;
-(void)setHasIsWifiInterfaceDisallowed:(char)arg1 ;
-(char)hasIsWifiInterfaceDisallowed;
-(void)setIsCellularInterfaceDisallowed:(unsigned)arg1 ;
-(void)setHasIsCellularInterfaceDisallowed:(char)arg1 ;
-(char)hasIsCellularInterfaceDisallowed;
-(unsigned)sessionProtocolVersionNumber;
-(unsigned)isLegacySessionType;
@end

