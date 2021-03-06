/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/Versions/A/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NTPBBundleSubscriberInfo : PBCodable <NSCopying> {

	long long _startTimestamp;
	int _bundleSubscriptionStatus;
	NSMutableArray* _subscribedChannelIds;
	NSString* _userId;
	NSString* _userStorefrontId;
	char _isAmplifyUser;
	char _isBundlePurchaser;
	char _isStoreDemoModeEnabled;
	SCD_Struct_NT11 _has;

}

@property (assign,nonatomic) char hasBundleSubscriptionStatus; 
@property (assign,nonatomic) int bundleSubscriptionStatus;                       //@synthesize bundleSubscriptionStatus=_bundleSubscriptionStatus - In the implementation block
@property (nonatomic,retain) NSMutableArray * subscribedChannelIds;              //@synthesize subscribedChannelIds=_subscribedChannelIds - In the implementation block
@property (nonatomic,readonly) char hasUserId; 
@property (nonatomic,retain) NSString * userId;                                  //@synthesize userId=_userId - In the implementation block
@property (nonatomic,readonly) char hasUserStorefrontId; 
@property (nonatomic,retain) NSString * userStorefrontId;                        //@synthesize userStorefrontId=_userStorefrontId - In the implementation block
@property (assign,nonatomic) char hasStartTimestamp; 
@property (assign,nonatomic) long long startTimestamp;                           //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (assign,nonatomic) char hasIsStoreDemoModeEnabled; 
@property (assign,nonatomic) char isStoreDemoModeEnabled;                        //@synthesize isStoreDemoModeEnabled=_isStoreDemoModeEnabled - In the implementation block
@property (assign,nonatomic) char hasIsBundlePurchaser; 
@property (assign,nonatomic) char isBundlePurchaser;                             //@synthesize isBundlePurchaser=_isBundlePurchaser - In the implementation block
@property (assign,nonatomic) char hasIsAmplifyUser; 
@property (assign,nonatomic) char isAmplifyUser;                                 //@synthesize isAmplifyUser=_isAmplifyUser - In the implementation block
+(Class)subscribedChannelIdsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(long long)startTimestamp;
-(NSString *)userId;
-(void)setUserId:(NSString *)arg1 ;
-(void)setStartTimestamp:(long long)arg1 ;
-(void)setHasStartTimestamp:(char)arg1 ;
-(char)hasStartTimestamp;
-(char)hasUserId;
-(void)setUserStorefrontId:(NSString *)arg1 ;
-(char)hasUserStorefrontId;
-(NSString *)userStorefrontId;
-(void)setIsStoreDemoModeEnabled:(char)arg1 ;
-(void)setHasIsStoreDemoModeEnabled:(char)arg1 ;
-(char)hasIsStoreDemoModeEnabled;
-(char)isStoreDemoModeEnabled;
-(void)addSubscribedChannelIds:(id)arg1 ;
-(int)bundleSubscriptionStatus;
-(void)setBundleSubscriptionStatus:(int)arg1 ;
-(void)setHasBundleSubscriptionStatus:(char)arg1 ;
-(char)hasBundleSubscriptionStatus;
-(id)bundleSubscriptionStatusAsString:(int)arg1 ;
-(int)StringAsBundleSubscriptionStatus:(id)arg1 ;
-(void)clearSubscribedChannelIds;
-(unsigned long long)subscribedChannelIdsCount;
-(id)subscribedChannelIdsAtIndex:(unsigned long long)arg1 ;
-(void)setIsBundlePurchaser:(char)arg1 ;
-(void)setHasIsBundlePurchaser:(char)arg1 ;
-(char)hasIsBundlePurchaser;
-(void)setIsAmplifyUser:(char)arg1 ;
-(void)setHasIsAmplifyUser:(char)arg1 ;
-(char)hasIsAmplifyUser;
-(NSMutableArray *)subscribedChannelIds;
-(void)setSubscribedChannelIds:(NSMutableArray *)arg1 ;
-(char)isBundlePurchaser;
-(char)isAmplifyUser;
@end

