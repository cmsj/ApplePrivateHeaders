/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/Versions/A/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSArray, NSDictionary, NSData, NSDate;

@interface GKTurnBasedExchangeInternal : GKInternalRepresentation {

	NSString* _exchangeID;
	NSArray* _recipientIndexes;
	NSString* _statusString;
	NSDictionary* _localizableMessage;
	NSData* _data;
	NSDate* _sendDate;
	NSDate* _timeoutDate;
	NSDate* _completionDate;
	NSArray* _replies;
	unsigned char _senderIndex;

}

@property (nonatomic,retain) NSString * exchangeID;                          //@synthesize exchangeID=_exchangeID - In the implementation block
@property (assign,nonatomic) unsigned char senderIndex;                      //@synthesize senderIndex=_senderIndex - In the implementation block
@property (nonatomic,retain) NSArray * recipientIndexes;                     //@synthesize recipientIndexes=_recipientIndexes - In the implementation block
@property (nonatomic,retain) NSString * statusString;                        //@synthesize statusString=_statusString - In the implementation block
@property (nonatomic,retain) NSDictionary * localizableMessage;              //@synthesize localizableMessage=_localizableMessage - In the implementation block
@property (nonatomic,retain) NSData * data;                                  //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSDate * sendDate;                              //@synthesize sendDate=_sendDate - In the implementation block
@property (nonatomic,retain) NSDate * timeoutDate;                           //@synthesize timeoutDate=_timeoutDate - In the implementation block
@property (nonatomic,retain) NSDate * completionDate;                        //@synthesize completionDate=_completionDate - In the implementation block
@property (nonatomic,retain) NSArray * replies;                              //@synthesize replies=_replies - In the implementation block
+(id)secureCodedPropertyKeys;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setStatusString:(NSString *)arg1 ;
-(NSString *)statusString;
-(void)setCompletionDate:(NSDate *)arg1 ;
-(NSDate *)completionDate;
-(NSDate *)sendDate;
-(void)setSendDate:(NSDate *)arg1 ;
-(NSDate *)timeoutDate;
-(NSArray *)replies;
-(unsigned char)senderIndex;
-(NSArray *)recipientIndexes;
-(void)setReplies:(NSArray *)arg1 ;
-(NSDictionary *)localizableMessage;
-(void)setLocalizableMessage:(NSDictionary *)arg1 ;
-(NSString *)exchangeID;
-(void)setTimeoutDate:(NSDate *)arg1 ;
-(void)setExchangeID:(NSString *)arg1 ;
-(void)setSenderIndex:(unsigned char)arg1 ;
-(void)setRecipientIndexes:(NSArray *)arg1 ;
@end

