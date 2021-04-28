/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Versions/A/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface IMSharedUtilitiesProtoCloudKitEncryptedMessage : PBCodable <NSCopying> {

	long long _associatedMessageType;
	unsigned long long _expireState;
	unsigned long long _timeDelivered;
	unsigned long long _timeExpressiveSentPlayed;
	unsigned long long _timePlayed;
	unsigned long long _timeRead;
	NSString* _associatedMessageGuid;
	unsigned _associatedMessageRangeLength;
	unsigned _associatedMessageRangeLocation;
	NSString* _baloonBundleId;
	NSString* _expressiveSendId;
	NSString* _messageBody;
	NSData* _messageBodyData;
	NSString* _messageSubject;
	NSData* _messageSummaryInfo;
	NSData* _padding;
	NSData* _payloadData;
	unsigned _version;
	SCD_Struct_IM8 _has;

}

@property (assign,nonatomic) char hasVersion; 
@property (assign,nonatomic) unsigned version;                                         //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) char hasMessageSubject; 
@property (nonatomic,retain) NSString * messageSubject;                                //@synthesize messageSubject=_messageSubject - In the implementation block
@property (nonatomic,readonly) char hasMessageBody; 
@property (nonatomic,retain) NSString * messageBody;                                   //@synthesize messageBody=_messageBody - In the implementation block
@property (nonatomic,readonly) char hasMessageBodyData; 
@property (nonatomic,retain) NSData * messageBodyData;                                 //@synthesize messageBodyData=_messageBodyData - In the implementation block
@property (nonatomic,readonly) char hasBaloonBundleId; 
@property (nonatomic,retain) NSString * baloonBundleId;                                //@synthesize baloonBundleId=_baloonBundleId - In the implementation block
@property (nonatomic,readonly) char hasPayloadData; 
@property (nonatomic,retain) NSData * payloadData;                                     //@synthesize payloadData=_payloadData - In the implementation block
@property (nonatomic,readonly) char hasMessageSummaryInfo; 
@property (nonatomic,retain) NSData * messageSummaryInfo;                              //@synthesize messageSummaryInfo=_messageSummaryInfo - In the implementation block
@property (nonatomic,readonly) char hasExpressiveSendId; 
@property (nonatomic,retain) NSString * expressiveSendId;                              //@synthesize expressiveSendId=_expressiveSendId - In the implementation block
@property (assign,nonatomic) char hasTimeRead; 
@property (assign,nonatomic) unsigned long long timeRead;                              //@synthesize timeRead=_timeRead - In the implementation block
@property (assign,nonatomic) char hasTimePlayed; 
@property (assign,nonatomic) unsigned long long timePlayed;                            //@synthesize timePlayed=_timePlayed - In the implementation block
@property (assign,nonatomic) char hasTimeExpressiveSentPlayed; 
@property (assign,nonatomic) unsigned long long timeExpressiveSentPlayed;              //@synthesize timeExpressiveSentPlayed=_timeExpressiveSentPlayed - In the implementation block
@property (nonatomic,readonly) char hasPadding; 
@property (nonatomic,retain) NSData * padding;                                         //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) char hasTimeDelivered; 
@property (assign,nonatomic) unsigned long long timeDelivered;                         //@synthesize timeDelivered=_timeDelivered - In the implementation block
@property (assign,nonatomic) char hasExpireState; 
@property (assign,nonatomic) unsigned long long expireState;                           //@synthesize expireState=_expireState - In the implementation block
@property (assign,nonatomic) char hasAssociatedMessageType; 
@property (assign,nonatomic) long long associatedMessageType;                          //@synthesize associatedMessageType=_associatedMessageType - In the implementation block
@property (nonatomic,readonly) char hasAssociatedMessageGuid; 
@property (nonatomic,retain) NSString * associatedMessageGuid;                         //@synthesize associatedMessageGuid=_associatedMessageGuid - In the implementation block
@property (assign,nonatomic) char hasAssociatedMessageRangeLocation; 
@property (assign,nonatomic) unsigned associatedMessageRangeLocation;                  //@synthesize associatedMessageRangeLocation=_associatedMessageRangeLocation - In the implementation block
@property (assign,nonatomic) char hasAssociatedMessageRangeLength; 
@property (assign,nonatomic) unsigned associatedMessageRangeLength;                    //@synthesize associatedMessageRangeLength=_associatedMessageRangeLength - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(NSData *)padding;
-(NSString *)messageBody;
-(void)setPadding:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasVersion;
-(void)setHasVersion:(char)arg1 ;
-(NSData *)payloadData;
-(void)setPayloadData:(NSData *)arg1 ;
-(unsigned long long)timePlayed;
-(unsigned long long)timeRead;
-(void)setTimeRead:(unsigned long long)arg1 ;
-(unsigned long long)timeDelivered;
-(void)setTimeDelivered:(unsigned long long)arg1 ;
-(void)setTimePlayed:(unsigned long long)arg1 ;
-(unsigned long long)expireState;
-(void)setExpireState:(unsigned long long)arg1 ;
-(NSData *)messageSummaryInfo;
-(void)setMessageSummaryInfo:(NSData *)arg1 ;
-(char)hasPadding;
-(long long)associatedMessageType;
-(void)setAssociatedMessageType:(long long)arg1 ;
-(void)setMessageSubject:(NSString *)arg1 ;
-(void)setMessageBody:(NSString *)arg1 ;
-(void)setMessageBodyData:(NSData *)arg1 ;
-(void)setBaloonBundleId:(NSString *)arg1 ;
-(void)setExpressiveSendId:(NSString *)arg1 ;
-(void)setAssociatedMessageGuid:(NSString *)arg1 ;
-(char)hasMessageSubject;
-(char)hasMessageBody;
-(char)hasMessageBodyData;
-(char)hasBaloonBundleId;
-(char)hasPayloadData;
-(char)hasMessageSummaryInfo;
-(char)hasExpressiveSendId;
-(void)setHasTimeRead:(char)arg1 ;
-(char)hasTimeRead;
-(void)setHasTimePlayed:(char)arg1 ;
-(char)hasTimePlayed;
-(void)setTimeExpressiveSentPlayed:(unsigned long long)arg1 ;
-(void)setHasTimeExpressiveSentPlayed:(char)arg1 ;
-(char)hasTimeExpressiveSentPlayed;
-(void)setHasTimeDelivered:(char)arg1 ;
-(char)hasTimeDelivered;
-(void)setHasExpireState:(char)arg1 ;
-(char)hasExpireState;
-(void)setHasAssociatedMessageType:(char)arg1 ;
-(char)hasAssociatedMessageType;
-(char)hasAssociatedMessageGuid;
-(void)setAssociatedMessageRangeLocation:(unsigned)arg1 ;
-(void)setHasAssociatedMessageRangeLocation:(char)arg1 ;
-(char)hasAssociatedMessageRangeLocation;
-(void)setAssociatedMessageRangeLength:(unsigned)arg1 ;
-(void)setHasAssociatedMessageRangeLength:(char)arg1 ;
-(char)hasAssociatedMessageRangeLength;
-(NSString *)messageSubject;
-(NSData *)messageBodyData;
-(NSString *)baloonBundleId;
-(NSString *)expressiveSendId;
-(unsigned long long)timeExpressiveSentPlayed;
-(NSString *)associatedMessageGuid;
-(unsigned)associatedMessageRangeLocation;
-(unsigned)associatedMessageRangeLength;
@end
