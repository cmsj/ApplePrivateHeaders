/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBNotificationEntity : PBCodable <NSCopying> {

	int _notificationType;
	int _paidBundleSubscriptionStatus;
	int _subscriberType;
	NSMutableArray* _tagIds;
	SCD_Struct_NT5 _has;

}

@property (assign,nonatomic) char hasNotificationType; 
@property (assign,nonatomic) int notificationType;                              //@synthesize notificationType=_notificationType - In the implementation block
@property (nonatomic,retain) NSMutableArray * tagIds;                           //@synthesize tagIds=_tagIds - In the implementation block
@property (assign,nonatomic) char hasSubscriberType; 
@property (assign,nonatomic) int subscriberType;                                //@synthesize subscriberType=_subscriberType - In the implementation block
@property (assign,nonatomic) char hasPaidBundleSubscriptionStatus; 
@property (assign,nonatomic) int paidBundleSubscriptionStatus;                  //@synthesize paidBundleSubscriptionStatus=_paidBundleSubscriptionStatus - In the implementation block
+(Class)tagIdType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setNotificationType:(int)arg1 ;
-(int)notificationType;
-(void)setHasNotificationType:(char)arg1 ;
-(char)hasNotificationType;
-(void)addTagId:(id)arg1 ;
-(void)clearTagIds;
-(unsigned long long)tagIdsCount;
-(id)tagIdAtIndex:(unsigned long long)arg1 ;
-(int)subscriberType;
-(void)setSubscriberType:(int)arg1 ;
-(void)setHasSubscriberType:(char)arg1 ;
-(char)hasSubscriberType;
-(int)paidBundleSubscriptionStatus;
-(void)setPaidBundleSubscriptionStatus:(int)arg1 ;
-(void)setHasPaidBundleSubscriptionStatus:(char)arg1 ;
-(char)hasPaidBundleSubscriptionStatus;
-(NSMutableArray *)tagIds;
-(void)setTagIds:(NSMutableArray *)arg1 ;
@end

