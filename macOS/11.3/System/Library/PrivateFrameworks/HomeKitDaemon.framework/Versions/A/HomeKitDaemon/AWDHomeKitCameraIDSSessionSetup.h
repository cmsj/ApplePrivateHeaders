/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitCameraIDSSessionSetup : PBCodable <NSCopying> {

	unsigned _idsSessionInvitationReceived;
	unsigned _idsSessionInvitationSent;
	unsigned _idsSessionStartedOnReceiver;
	unsigned _idsSessionStartedOnResident;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) char hasIdsSessionInvitationSent; 
@property (assign,nonatomic) unsigned idsSessionInvitationSent;                  //@synthesize idsSessionInvitationSent=_idsSessionInvitationSent - In the implementation block
@property (assign,nonatomic) char hasIdsSessionInvitationReceived; 
@property (assign,nonatomic) unsigned idsSessionInvitationReceived;              //@synthesize idsSessionInvitationReceived=_idsSessionInvitationReceived - In the implementation block
@property (assign,nonatomic) char hasIdsSessionStartedOnResident; 
@property (assign,nonatomic) unsigned idsSessionStartedOnResident;               //@synthesize idsSessionStartedOnResident=_idsSessionStartedOnResident - In the implementation block
@property (assign,nonatomic) char hasIdsSessionStartedOnReceiver; 
@property (assign,nonatomic) unsigned idsSessionStartedOnReceiver;               //@synthesize idsSessionStartedOnReceiver=_idsSessionStartedOnReceiver - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setIdsSessionInvitationSent:(unsigned)arg1 ;
-(void)setHasIdsSessionInvitationSent:(char)arg1 ;
-(char)hasIdsSessionInvitationSent;
-(void)setIdsSessionInvitationReceived:(unsigned)arg1 ;
-(void)setHasIdsSessionInvitationReceived:(char)arg1 ;
-(char)hasIdsSessionInvitationReceived;
-(void)setIdsSessionStartedOnResident:(unsigned)arg1 ;
-(void)setHasIdsSessionStartedOnResident:(char)arg1 ;
-(char)hasIdsSessionStartedOnResident;
-(void)setIdsSessionStartedOnReceiver:(unsigned)arg1 ;
-(void)setHasIdsSessionStartedOnReceiver:(char)arg1 ;
-(char)hasIdsSessionStartedOnReceiver;
-(unsigned)idsSessionInvitationSent;
-(unsigned)idsSessionInvitationReceived;
-(unsigned)idsSessionStartedOnResident;
-(unsigned)idsSessionStartedOnReceiver;
@end

