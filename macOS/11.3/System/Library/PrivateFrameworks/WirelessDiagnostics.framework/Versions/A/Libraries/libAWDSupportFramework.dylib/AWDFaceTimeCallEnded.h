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

@interface AWDFaceTimeCallEnded : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _backCameraCaptureDuration;
	unsigned _callDuration;
	unsigned _conferenceMiscError;
	unsigned _connectDuration;
	unsigned _connectionType;
	unsigned _currentNatType;
	unsigned _dataRate;
	unsigned _diagnosticPingAvg;
	unsigned _diagnosticPingMax;
	unsigned _diagnosticPingMin;
	unsigned _diagnosticPingPacketLoss;
	unsigned _endedReason;
	unsigned _frontCameraCaptureDuration;
	unsigned _gameKitError;
	int _genericError;
	int _gksError;
	int _gksReturnCode;
	NSString* _guid;
	unsigned _invitationServiceError;
	unsigned _isAudioInterrupted;
	unsigned _isCallUpgrade;
	unsigned _isInitiator;
	unsigned _isNetworkActive;
	unsigned _isNetworkEnabled;
	unsigned _isNetworkReachable;
	unsigned _isVideo;
	unsigned _isVideoInterrupted;
	int _linkQuality;
	unsigned _localNetworkConnection;
	unsigned _messageDeliveryError;
	unsigned _networkCheckResult;
	unsigned _onLockScreen;
	unsigned _registrationError;
	unsigned _relayConnectDuration;
	unsigned _relayError;
	unsigned _remoteNatType;
	unsigned _remoteNetworkConnection;
	unsigned _usesRelay;
	unsigned _viceroyError;
	SCD_Struct_AW17 _has;

}

@property (nonatomic,readonly) char hasGuid; 
@property (nonatomic,retain) NSString * guid;                                  //@synthesize guid=_guid - In the implementation block
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasEndedReason; 
@property (assign,nonatomic) unsigned endedReason;                             //@synthesize endedReason=_endedReason - In the implementation block
@property (assign,nonatomic) char hasGenericError; 
@property (assign,nonatomic) int genericError;                                 //@synthesize genericError=_genericError - In the implementation block
@property (assign,nonatomic) char hasViceroyError; 
@property (assign,nonatomic) unsigned viceroyError;                            //@synthesize viceroyError=_viceroyError - In the implementation block
@property (assign,nonatomic) char hasGameKitError; 
@property (assign,nonatomic) unsigned gameKitError;                            //@synthesize gameKitError=_gameKitError - In the implementation block
@property (assign,nonatomic) char hasMessageDeliveryError; 
@property (assign,nonatomic) unsigned messageDeliveryError;                    //@synthesize messageDeliveryError=_messageDeliveryError - In the implementation block
@property (assign,nonatomic) char hasConferenceMiscError; 
@property (assign,nonatomic) unsigned conferenceMiscError;                     //@synthesize conferenceMiscError=_conferenceMiscError - In the implementation block
@property (assign,nonatomic) char hasRegistrationError; 
@property (assign,nonatomic) unsigned registrationError;                       //@synthesize registrationError=_registrationError - In the implementation block
@property (assign,nonatomic) char hasRelayError; 
@property (assign,nonatomic) unsigned relayError;                              //@synthesize relayError=_relayError - In the implementation block
@property (assign,nonatomic) char hasInvitationServiceError; 
@property (assign,nonatomic) unsigned invitationServiceError;                  //@synthesize invitationServiceError=_invitationServiceError - In the implementation block
@property (assign,nonatomic) char hasCallDuration; 
@property (assign,nonatomic) unsigned callDuration;                            //@synthesize callDuration=_callDuration - In the implementation block
@property (assign,nonatomic) char hasDiagnosticPingMin; 
@property (assign,nonatomic) unsigned diagnosticPingMin;                       //@synthesize diagnosticPingMin=_diagnosticPingMin - In the implementation block
@property (assign,nonatomic) char hasDiagnosticPingAvg; 
@property (assign,nonatomic) unsigned diagnosticPingAvg;                       //@synthesize diagnosticPingAvg=_diagnosticPingAvg - In the implementation block
@property (assign,nonatomic) char hasDiagnosticPingMax; 
@property (assign,nonatomic) unsigned diagnosticPingMax;                       //@synthesize diagnosticPingMax=_diagnosticPingMax - In the implementation block
@property (assign,nonatomic) char hasDiagnosticPingPacketLoss; 
@property (assign,nonatomic) unsigned diagnosticPingPacketLoss;                //@synthesize diagnosticPingPacketLoss=_diagnosticPingPacketLoss - In the implementation block
@property (assign,nonatomic) char hasIsNetworkEnabled; 
@property (assign,nonatomic) unsigned isNetworkEnabled;                        //@synthesize isNetworkEnabled=_isNetworkEnabled - In the implementation block
@property (assign,nonatomic) char hasIsNetworkActive; 
@property (assign,nonatomic) unsigned isNetworkActive;                         //@synthesize isNetworkActive=_isNetworkActive - In the implementation block
@property (assign,nonatomic) char hasIsNetworkReachable; 
@property (assign,nonatomic) unsigned isNetworkReachable;                      //@synthesize isNetworkReachable=_isNetworkReachable - In the implementation block
@property (assign,nonatomic) char hasNetworkCheckResult; 
@property (assign,nonatomic) unsigned networkCheckResult;                      //@synthesize networkCheckResult=_networkCheckResult - In the implementation block
@property (assign,nonatomic) char hasFrontCameraCaptureDuration; 
@property (assign,nonatomic) unsigned frontCameraCaptureDuration;              //@synthesize frontCameraCaptureDuration=_frontCameraCaptureDuration - In the implementation block
@property (assign,nonatomic) char hasBackCameraCaptureDuration; 
@property (assign,nonatomic) unsigned backCameraCaptureDuration;               //@synthesize backCameraCaptureDuration=_backCameraCaptureDuration - In the implementation block
@property (assign,nonatomic) char hasDataRate; 
@property (assign,nonatomic) unsigned dataRate;                                //@synthesize dataRate=_dataRate - In the implementation block
@property (assign,nonatomic) char hasGksError; 
@property (assign,nonatomic) int gksError;                                     //@synthesize gksError=_gksError - In the implementation block
@property (assign,nonatomic) char hasConnectDuration; 
@property (assign,nonatomic) unsigned connectDuration;                         //@synthesize connectDuration=_connectDuration - In the implementation block
@property (assign,nonatomic) char hasRemoteNetworkConnection; 
@property (assign,nonatomic) unsigned remoteNetworkConnection;                 //@synthesize remoteNetworkConnection=_remoteNetworkConnection - In the implementation block
@property (assign,nonatomic) char hasLocalNetworkConnection; 
@property (assign,nonatomic) unsigned localNetworkConnection;                  //@synthesize localNetworkConnection=_localNetworkConnection - In the implementation block
@property (assign,nonatomic) char hasConnectionType; 
@property (assign,nonatomic) unsigned connectionType;                          //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) char hasUsesRelay; 
@property (assign,nonatomic) unsigned usesRelay;                               //@synthesize usesRelay=_usesRelay - In the implementation block
@property (assign,nonatomic) char hasCurrentNatType; 
@property (assign,nonatomic) unsigned currentNatType;                          //@synthesize currentNatType=_currentNatType - In the implementation block
@property (assign,nonatomic) char hasRemoteNatType; 
@property (assign,nonatomic) unsigned remoteNatType;                           //@synthesize remoteNatType=_remoteNatType - In the implementation block
@property (assign,nonatomic) char hasRelayConnectDuration; 
@property (assign,nonatomic) unsigned relayConnectDuration;                    //@synthesize relayConnectDuration=_relayConnectDuration - In the implementation block
@property (assign,nonatomic) char hasIsInitiator; 
@property (assign,nonatomic) unsigned isInitiator;                             //@synthesize isInitiator=_isInitiator - In the implementation block
@property (assign,nonatomic) char hasIsVideoInterrupted; 
@property (assign,nonatomic) unsigned isVideoInterrupted;                      //@synthesize isVideoInterrupted=_isVideoInterrupted - In the implementation block
@property (assign,nonatomic) char hasIsAudioInterrupted; 
@property (assign,nonatomic) unsigned isAudioInterrupted;                      //@synthesize isAudioInterrupted=_isAudioInterrupted - In the implementation block
@property (assign,nonatomic) char hasIsCallUpgrade; 
@property (assign,nonatomic) unsigned isCallUpgrade;                           //@synthesize isCallUpgrade=_isCallUpgrade - In the implementation block
@property (assign,nonatomic) char hasLinkQuality; 
@property (assign,nonatomic) int linkQuality;                                  //@synthesize linkQuality=_linkQuality - In the implementation block
@property (assign,nonatomic) char hasGksReturnCode; 
@property (assign,nonatomic) int gksReturnCode;                                //@synthesize gksReturnCode=_gksReturnCode - In the implementation block
@property (assign,nonatomic) char hasIsVideo; 
@property (assign,nonatomic) unsigned isVideo;                                 //@synthesize isVideo=_isVideo - In the implementation block
@property (assign,nonatomic) char hasOnLockScreen; 
@property (assign,nonatomic) unsigned onLockScreen;                            //@synthesize onLockScreen=_onLockScreen - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)connectionType;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned)isInitiator;
-(void)setIsInitiator:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(unsigned)isNetworkReachable;
-(unsigned)registrationError;
-(NSString *)guid;
-(void)setConnectionType:(unsigned)arg1 ;
-(unsigned)isNetworkEnabled;
-(unsigned)isNetworkActive;
-(unsigned)endedReason;
-(void)setRegistrationError:(unsigned)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(int)genericError;
-(unsigned)gameKitError;
-(unsigned)conferenceMiscError;
-(unsigned)callDuration;
-(unsigned)networkCheckResult;
-(unsigned)dataRate;
-(int)gksError;
-(unsigned)connectDuration;
-(unsigned)remoteNetworkConnection;
-(unsigned)localNetworkConnection;
-(unsigned)usesRelay;
-(unsigned)relayConnectDuration;
-(int)linkQuality;
-(int)gksReturnCode;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setHasConnectionType:(char)arg1 ;
-(char)hasConnectionType;
-(char)hasGuid;
-(void)setLinkQuality:(int)arg1 ;
-(void)setCallDuration:(unsigned)arg1 ;
-(char)hasCallDuration;
-(void)setHasCallDuration:(char)arg1 ;
-(unsigned)isVideo;
-(void)setIsVideo:(unsigned)arg1 ;
-(void)setHasIsVideo:(char)arg1 ;
-(char)hasIsVideo;
-(void)setOnLockScreen:(unsigned)arg1 ;
-(void)setHasOnLockScreen:(char)arg1 ;
-(char)hasOnLockScreen;
-(unsigned)onLockScreen;
-(void)setConnectDuration:(unsigned)arg1 ;
-(void)setHasConnectDuration:(char)arg1 ;
-(char)hasConnectDuration;
-(void)setRemoteNetworkConnection:(unsigned)arg1 ;
-(void)setHasRemoteNetworkConnection:(char)arg1 ;
-(char)hasRemoteNetworkConnection;
-(void)setLocalNetworkConnection:(unsigned)arg1 ;
-(void)setHasLocalNetworkConnection:(char)arg1 ;
-(char)hasLocalNetworkConnection;
-(void)setUsesRelay:(unsigned)arg1 ;
-(void)setHasUsesRelay:(char)arg1 ;
-(char)hasUsesRelay;
-(void)setCurrentNatType:(unsigned)arg1 ;
-(void)setHasCurrentNatType:(char)arg1 ;
-(char)hasCurrentNatType;
-(void)setRemoteNatType:(unsigned)arg1 ;
-(void)setHasRemoteNatType:(char)arg1 ;
-(char)hasRemoteNatType;
-(void)setRelayConnectDuration:(unsigned)arg1 ;
-(void)setHasRelayConnectDuration:(char)arg1 ;
-(char)hasRelayConnectDuration;
-(unsigned)currentNatType;
-(unsigned)remoteNatType;
-(void)setEndedReason:(unsigned)arg1 ;
-(void)setHasEndedReason:(char)arg1 ;
-(char)hasEndedReason;
-(void)setGenericError:(int)arg1 ;
-(void)setHasGenericError:(char)arg1 ;
-(char)hasGenericError;
-(void)setViceroyError:(unsigned)arg1 ;
-(void)setHasViceroyError:(char)arg1 ;
-(char)hasViceroyError;
-(void)setGameKitError:(unsigned)arg1 ;
-(void)setHasGameKitError:(char)arg1 ;
-(char)hasGameKitError;
-(void)setMessageDeliveryError:(unsigned)arg1 ;
-(void)setHasMessageDeliveryError:(char)arg1 ;
-(char)hasMessageDeliveryError;
-(void)setConferenceMiscError:(unsigned)arg1 ;
-(void)setHasConferenceMiscError:(char)arg1 ;
-(char)hasConferenceMiscError;
-(void)setHasRegistrationError:(char)arg1 ;
-(char)hasRegistrationError;
-(void)setRelayError:(unsigned)arg1 ;
-(void)setHasRelayError:(char)arg1 ;
-(char)hasRelayError;
-(void)setInvitationServiceError:(unsigned)arg1 ;
-(void)setHasInvitationServiceError:(char)arg1 ;
-(char)hasInvitationServiceError;
-(void)setDiagnosticPingMin:(unsigned)arg1 ;
-(void)setHasDiagnosticPingMin:(char)arg1 ;
-(char)hasDiagnosticPingMin;
-(void)setDiagnosticPingAvg:(unsigned)arg1 ;
-(void)setHasDiagnosticPingAvg:(char)arg1 ;
-(char)hasDiagnosticPingAvg;
-(void)setDiagnosticPingMax:(unsigned)arg1 ;
-(void)setHasDiagnosticPingMax:(char)arg1 ;
-(char)hasDiagnosticPingMax;
-(void)setDiagnosticPingPacketLoss:(unsigned)arg1 ;
-(void)setHasDiagnosticPingPacketLoss:(char)arg1 ;
-(char)hasDiagnosticPingPacketLoss;
-(void)setIsNetworkEnabled:(unsigned)arg1 ;
-(void)setHasIsNetworkEnabled:(char)arg1 ;
-(char)hasIsNetworkEnabled;
-(void)setIsNetworkActive:(unsigned)arg1 ;
-(void)setHasIsNetworkActive:(char)arg1 ;
-(char)hasIsNetworkActive;
-(void)setIsNetworkReachable:(unsigned)arg1 ;
-(void)setHasIsNetworkReachable:(char)arg1 ;
-(char)hasIsNetworkReachable;
-(void)setNetworkCheckResult:(unsigned)arg1 ;
-(void)setHasNetworkCheckResult:(char)arg1 ;
-(char)hasNetworkCheckResult;
-(void)setFrontCameraCaptureDuration:(unsigned)arg1 ;
-(void)setHasFrontCameraCaptureDuration:(char)arg1 ;
-(char)hasFrontCameraCaptureDuration;
-(void)setBackCameraCaptureDuration:(unsigned)arg1 ;
-(void)setHasBackCameraCaptureDuration:(char)arg1 ;
-(char)hasBackCameraCaptureDuration;
-(void)setDataRate:(unsigned)arg1 ;
-(void)setHasDataRate:(char)arg1 ;
-(char)hasDataRate;
-(void)setGksError:(int)arg1 ;
-(void)setHasGksError:(char)arg1 ;
-(char)hasGksError;
-(void)setHasIsInitiator:(char)arg1 ;
-(char)hasIsInitiator;
-(void)setIsVideoInterrupted:(unsigned)arg1 ;
-(void)setHasIsVideoInterrupted:(char)arg1 ;
-(char)hasIsVideoInterrupted;
-(void)setIsAudioInterrupted:(unsigned)arg1 ;
-(void)setHasIsAudioInterrupted:(char)arg1 ;
-(char)hasIsAudioInterrupted;
-(void)setIsCallUpgrade:(unsigned)arg1 ;
-(void)setHasIsCallUpgrade:(char)arg1 ;
-(char)hasIsCallUpgrade;
-(void)setHasLinkQuality:(char)arg1 ;
-(char)hasLinkQuality;
-(void)setGksReturnCode:(int)arg1 ;
-(void)setHasGksReturnCode:(char)arg1 ;
-(char)hasGksReturnCode;
-(unsigned)viceroyError;
-(unsigned)messageDeliveryError;
-(unsigned)relayError;
-(unsigned)invitationServiceError;
-(unsigned)diagnosticPingMin;
-(unsigned)diagnosticPingAvg;
-(unsigned)diagnosticPingMax;
-(unsigned)diagnosticPingPacketLoss;
-(unsigned)frontCameraCaptureDuration;
-(unsigned)backCameraCaptureDuration;
-(unsigned)isVideoInterrupted;
-(unsigned)isAudioInterrupted;
-(unsigned)isCallUpgrade;
@end

