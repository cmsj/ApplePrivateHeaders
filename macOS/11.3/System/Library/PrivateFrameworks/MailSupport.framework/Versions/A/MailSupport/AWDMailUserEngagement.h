/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/Versions/A/MailSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailSupport/MailSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDMailUserEngagement : PBCodable <NSCopying> {

	long long _messageAgeInWeeks;
	long long _topHitIndexInSpotlightList;
	long long _topHitIndexInTopHitsList;
	int _mailboxType;
	int _type;
	char _isTopHitMessage;
	SCD_Struct_AW8 _has;

}

@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char hasMessageAgeInWeeks; 
@property (assign,nonatomic) long long messageAgeInWeeks;                       //@synthesize messageAgeInWeeks=_messageAgeInWeeks - In the implementation block
@property (assign,nonatomic) char hasMailboxType; 
@property (assign,nonatomic) int mailboxType;                                   //@synthesize mailboxType=_mailboxType - In the implementation block
@property (assign,nonatomic) char hasIsTopHitMessage; 
@property (assign,nonatomic) char isTopHitMessage;                              //@synthesize isTopHitMessage=_isTopHitMessage - In the implementation block
@property (assign,nonatomic) char hasTopHitIndexInTopHitsList; 
@property (assign,nonatomic) long long topHitIndexInTopHitsList;                //@synthesize topHitIndexInTopHitsList=_topHitIndexInTopHitsList - In the implementation block
@property (assign,nonatomic) char hasTopHitIndexInSpotlightList; 
@property (assign,nonatomic) long long topHitIndexInSpotlightList;              //@synthesize topHitIndexInSpotlightList=_topHitIndexInSpotlightList - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(char)arg1 ;
-(char)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setMailboxType:(int)arg1 ;
-(int)mailboxType;
-(void)setHasMailboxType:(char)arg1 ;
-(char)hasMailboxType;
-(id)mailboxTypeAsString:(int)arg1 ;
-(int)StringAsMailboxType:(id)arg1 ;
-(void)setMessageAgeInWeeks:(long long)arg1 ;
-(void)setIsTopHitMessage:(char)arg1 ;
-(void)setTopHitIndexInTopHitsList:(long long)arg1 ;
-(void)setTopHitIndexInSpotlightList:(long long)arg1 ;
-(id)initWithEngagmentType:(int)arg1 receivedDate:(id)arg2 mailboxType:(int)arg3 isTopHit:(char)arg4 messageListIndex:(long long)arg5 spotlightListIndex:(long long)arg6 ;
-(id)initWithEngagmentType:(int)arg1 message:(id)arg2 isTopHit:(char)arg3 messageListIndex:(long long)arg4 spotlightListIndex:(long long)arg5 ;
-(id)initWithEngagmentType:(int)arg1 isTopHit:(char)arg2 ;
-(id)initWithEngagmentType:(int)arg1 ;
-(void)setHasMessageAgeInWeeks:(char)arg1 ;
-(char)hasMessageAgeInWeeks;
-(void)setHasIsTopHitMessage:(char)arg1 ;
-(char)hasIsTopHitMessage;
-(void)setHasTopHitIndexInTopHitsList:(char)arg1 ;
-(char)hasTopHitIndexInTopHitsList;
-(void)setHasTopHitIndexInSpotlightList:(char)arg1 ;
-(char)hasTopHitIndexInSpotlightList;
-(long long)messageAgeInWeeks;
-(char)isTopHitMessage;
-(long long)topHitIndexInTopHitsList;
-(long long)topHitIndexInSpotlightList;
@end

