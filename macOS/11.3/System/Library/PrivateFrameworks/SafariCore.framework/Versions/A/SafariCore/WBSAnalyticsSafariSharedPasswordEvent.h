/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/Versions/A/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariCore/SafariCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WBSAnalyticsSafariSharedPasswordEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _initiatedSharePasswordOutcome;
	int _passwordSharingMechanism;
	int _receivedSharedPasswordOutcome;
	SCD_Struct_WB11 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasInitiatedSharePasswordOutcome; 
@property (assign,nonatomic) int initiatedSharePasswordOutcome;                  //@synthesize initiatedSharePasswordOutcome=_initiatedSharePasswordOutcome - In the implementation block
@property (assign,nonatomic) char hasReceivedSharedPasswordOutcome; 
@property (assign,nonatomic) int receivedSharedPasswordOutcome;                  //@synthesize receivedSharedPasswordOutcome=_receivedSharedPasswordOutcome - In the implementation block
@property (assign,nonatomic) char hasPasswordSharingMechanism; 
@property (assign,nonatomic) int passwordSharingMechanism;                       //@synthesize passwordSharingMechanism=_passwordSharingMechanism - In the implementation block
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
-(int)initiatedSharePasswordOutcome;
-(void)setInitiatedSharePasswordOutcome:(int)arg1 ;
-(void)setHasInitiatedSharePasswordOutcome:(char)arg1 ;
-(char)hasInitiatedSharePasswordOutcome;
-(id)initiatedSharePasswordOutcomeAsString:(int)arg1 ;
-(int)StringAsInitiatedSharePasswordOutcome:(id)arg1 ;
-(int)receivedSharedPasswordOutcome;
-(void)setReceivedSharedPasswordOutcome:(int)arg1 ;
-(void)setHasReceivedSharedPasswordOutcome:(char)arg1 ;
-(char)hasReceivedSharedPasswordOutcome;
-(id)receivedSharedPasswordOutcomeAsString:(int)arg1 ;
-(int)StringAsReceivedSharedPasswordOutcome:(id)arg1 ;
-(int)passwordSharingMechanism;
-(void)setPasswordSharingMechanism:(int)arg1 ;
-(void)setHasPasswordSharingMechanism:(char)arg1 ;
-(char)hasPasswordSharingMechanism;
-(id)passwordSharingMechanismAsString:(int)arg1 ;
-(int)StringAsPasswordSharingMechanism:(id)arg1 ;
@end

