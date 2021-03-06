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

@interface AWDWiFiSoftAP : PBCodable <NSCopying> {

	unsigned long long _lowPowerModeDuration;
	unsigned long long _misToSoftAPActiveTimeInMilliseconds;
	unsigned long long _sessionDuration;
	unsigned long long _timestamp;
	unsigned _appleDeviceConnectCount;
	unsigned _appleDeviceDisconnectCount;
	unsigned _bringUpMethod;
	unsigned _channel;
	unsigned _otherDeviceConnectCount;
	unsigned _otherDeviceDisconnectCount;
	unsigned _reasonCode;
	unsigned _securityTypes;
	unsigned _ssidChanged;
	unsigned _teardownReason;
	char _familyDevice;
	SCD_Struct_AW20 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasMisToSoftAPActiveTimeInMilliseconds; 
@property (assign,nonatomic) unsigned long long misToSoftAPActiveTimeInMilliseconds;              //@synthesize misToSoftAPActiveTimeInMilliseconds=_misToSoftAPActiveTimeInMilliseconds - In the implementation block
@property (assign,nonatomic) char hasBringUpMethod; 
@property (assign,nonatomic) unsigned bringUpMethod;                                              //@synthesize bringUpMethod=_bringUpMethod - In the implementation block
@property (assign,nonatomic) char hasReasonCode; 
@property (assign,nonatomic) unsigned reasonCode;                                                 //@synthesize reasonCode=_reasonCode - In the implementation block
@property (assign,nonatomic) char hasTeardownReason; 
@property (assign,nonatomic) unsigned teardownReason;                                             //@synthesize teardownReason=_teardownReason - In the implementation block
@property (assign,nonatomic) char hasSessionDuration; 
@property (assign,nonatomic) unsigned long long sessionDuration;                                  //@synthesize sessionDuration=_sessionDuration - In the implementation block
@property (assign,nonatomic) char hasAppleDeviceConnectCount; 
@property (assign,nonatomic) unsigned appleDeviceConnectCount;                                    //@synthesize appleDeviceConnectCount=_appleDeviceConnectCount - In the implementation block
@property (assign,nonatomic) char hasOtherDeviceConnectCount; 
@property (assign,nonatomic) unsigned otherDeviceConnectCount;                                    //@synthesize otherDeviceConnectCount=_otherDeviceConnectCount - In the implementation block
@property (assign,nonatomic) char hasAppleDeviceDisconnectCount; 
@property (assign,nonatomic) unsigned appleDeviceDisconnectCount;                                 //@synthesize appleDeviceDisconnectCount=_appleDeviceDisconnectCount - In the implementation block
@property (assign,nonatomic) char hasOtherDeviceDisconnectCount; 
@property (assign,nonatomic) unsigned otherDeviceDisconnectCount;                                 //@synthesize otherDeviceDisconnectCount=_otherDeviceDisconnectCount - In the implementation block
@property (assign,nonatomic) char hasChannel; 
@property (assign,nonatomic) unsigned channel;                                                    //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) char hasSsidChanged; 
@property (assign,nonatomic) unsigned ssidChanged;                                                //@synthesize ssidChanged=_ssidChanged - In the implementation block
@property (assign,nonatomic) char hasFamilyDevice; 
@property (assign,nonatomic) char familyDevice;                                                   //@synthesize familyDevice=_familyDevice - In the implementation block
@property (assign,nonatomic) char hasLowPowerModeDuration; 
@property (assign,nonatomic) unsigned long long lowPowerModeDuration;                             //@synthesize lowPowerModeDuration=_lowPowerModeDuration - In the implementation block
@property (assign,nonatomic) char hasSecurityTypes; 
@property (assign,nonatomic) unsigned securityTypes;                                              //@synthesize securityTypes=_securityTypes - In the implementation block
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
-(unsigned)channel;
-(char)hasTimestamp;
-(void)setChannel:(unsigned)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setHasChannel:(char)arg1 ;
-(char)hasChannel;
-(unsigned)reasonCode;
-(void)setReasonCode:(unsigned)arg1 ;
-(void)setHasReasonCode:(char)arg1 ;
-(char)hasReasonCode;
-(void)setMisToSoftAPActiveTimeInMilliseconds:(unsigned long long)arg1 ;
-(void)setHasMisToSoftAPActiveTimeInMilliseconds:(char)arg1 ;
-(char)hasMisToSoftAPActiveTimeInMilliseconds;
-(void)setBringUpMethod:(unsigned)arg1 ;
-(void)setHasBringUpMethod:(char)arg1 ;
-(char)hasBringUpMethod;
-(void)setTeardownReason:(unsigned)arg1 ;
-(void)setHasTeardownReason:(char)arg1 ;
-(char)hasTeardownReason;
-(void)setSessionDuration:(unsigned long long)arg1 ;
-(void)setHasSessionDuration:(char)arg1 ;
-(char)hasSessionDuration;
-(void)setAppleDeviceConnectCount:(unsigned)arg1 ;
-(void)setHasAppleDeviceConnectCount:(char)arg1 ;
-(char)hasAppleDeviceConnectCount;
-(void)setOtherDeviceConnectCount:(unsigned)arg1 ;
-(void)setHasOtherDeviceConnectCount:(char)arg1 ;
-(char)hasOtherDeviceConnectCount;
-(void)setAppleDeviceDisconnectCount:(unsigned)arg1 ;
-(void)setHasAppleDeviceDisconnectCount:(char)arg1 ;
-(char)hasAppleDeviceDisconnectCount;
-(void)setOtherDeviceDisconnectCount:(unsigned)arg1 ;
-(void)setHasOtherDeviceDisconnectCount:(char)arg1 ;
-(char)hasOtherDeviceDisconnectCount;
-(void)setSsidChanged:(unsigned)arg1 ;
-(void)setHasSsidChanged:(char)arg1 ;
-(char)hasSsidChanged;
-(void)setFamilyDevice:(char)arg1 ;
-(void)setHasFamilyDevice:(char)arg1 ;
-(char)hasFamilyDevice;
-(void)setLowPowerModeDuration:(unsigned long long)arg1 ;
-(void)setHasLowPowerModeDuration:(char)arg1 ;
-(char)hasLowPowerModeDuration;
-(void)setSecurityTypes:(unsigned)arg1 ;
-(void)setHasSecurityTypes:(char)arg1 ;
-(char)hasSecurityTypes;
-(unsigned long long)misToSoftAPActiveTimeInMilliseconds;
-(unsigned)bringUpMethod;
-(unsigned)teardownReason;
-(unsigned long long)sessionDuration;
-(unsigned)appleDeviceConnectCount;
-(unsigned)otherDeviceConnectCount;
-(unsigned)appleDeviceDisconnectCount;
-(unsigned)otherDeviceDisconnectCount;
-(unsigned)ssidChanged;
-(char)familyDevice;
-(unsigned long long)lowPowerModeDuration;
-(unsigned)securityTypes;
@end

