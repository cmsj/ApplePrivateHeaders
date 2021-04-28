/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NTPBAppleIdSignInResult : PBCodable <NSCopying> {

	int _paidSubscriptionConversionPointType;
	int _signInResult;
	NSData* _subscriptionPurchaseSessionId;
	SCD_Struct_CO1 _has;

}

@property (assign,nonatomic) char hasSignInResult; 
@property (assign,nonatomic) int signInResult;                                         //@synthesize signInResult=_signInResult - In the implementation block
@property (assign,nonatomic) char hasPaidSubscriptionConversionPointType; 
@property (assign,nonatomic) int paidSubscriptionConversionPointType;                  //@synthesize paidSubscriptionConversionPointType=_paidSubscriptionConversionPointType - In the implementation block
@property (nonatomic,readonly) char hasSubscriptionPurchaseSessionId; 
@property (nonatomic,retain) NSData * subscriptionPurchaseSessionId;                   //@synthesize subscriptionPurchaseSessionId=_subscriptionPurchaseSessionId - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)paidSubscriptionConversionPointType;
-(void)setPaidSubscriptionConversionPointType:(int)arg1 ;
-(void)setHasPaidSubscriptionConversionPointType:(char)arg1 ;
-(char)hasPaidSubscriptionConversionPointType;
-(id)paidSubscriptionConversionPointTypeAsString:(int)arg1 ;
-(int)StringAsPaidSubscriptionConversionPointType:(id)arg1 ;
-(void)setSubscriptionPurchaseSessionId:(NSData *)arg1 ;
-(char)hasSubscriptionPurchaseSessionId;
-(NSData *)subscriptionPurchaseSessionId;
-(int)signInResult;
-(void)setSignInResult:(int)arg1 ;
-(void)setHasSignInResult:(char)arg1 ;
-(char)hasSignInResult;
@end
