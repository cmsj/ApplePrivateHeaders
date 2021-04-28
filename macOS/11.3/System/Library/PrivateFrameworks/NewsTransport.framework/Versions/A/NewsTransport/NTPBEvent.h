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

@class NSString, NTPBEventObject, NSData, NSMutableArray;

@interface NTPBEvent : PBCodable <NSCopying> {

	long long _appConfigTreatmentId;
	long long _duration;
	long long _personalizationTreatmentId;
	long long _personalizedTreatmentId;
	long long _startTimestamp;
	NSString* _appAnalyticsEventIdentifier;
	NSString* _appAnalyticsEventPath;
	NSString* _bundleOfferId;
	NSString* _bundlePurchaseId;
	int _bundleSubscriptionStatus;
	int _cellularRadioAccessTechnology;
	int _deviceOrientation;
	NTPBEventObject* _eventObject;
	int _gestureType;
	int _interfaceOrientation;
	NSString* _notwUserId;
	int _reachabilityStatus;
	NSString* _referringSource;
	NSString* _referringType;
	NSString* _sBundlePurchaseId;
	NSData* _sessionId;
	NSData* _sessionIdWatch;
	NSString* _userId;
	NSMutableArray* _userPaidSubscriptionStatus;
	NSString* _userStorefrontId;
	NSData* _widgetSessionId;
	NSString* _widgetUserId;
	NSString* _windowFrameInScreen;
	char _isAmplifyUser;
	char _isBundlePurchaser;
	char _isPaidSubscriberDuringEvent;
	char _isPaidSubscriberFromAppStoreDuringEvent;
	char _isPaidSubscriberFromNewsDuringEvent;
	char _isPaidSubscriberFromThirdPartyDuringEvent;
	SCD_Struct_NT30 _has;

}

@property (nonatomic,readonly) char hasEventObject; 
@property (nonatomic,retain) NTPBEventObject * eventObject;                                  //@synthesize eventObject=_eventObject - In the implementation block
@property (nonatomic,readonly) char hasSessionId; 
@property (nonatomic,retain) NSData * sessionId;                                             //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,readonly) char hasUserId; 
@property (nonatomic,retain) NSString * userId;                                              //@synthesize userId=_userId - In the implementation block
@property (nonatomic,readonly) char hasUserStorefrontId; 
@property (nonatomic,retain) NSString * userStorefrontId;                                    //@synthesize userStorefrontId=_userStorefrontId - In the implementation block
@property (assign,nonatomic) char hasStartTimestamp; 
@property (assign,nonatomic) long long startTimestamp;                                       //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (assign,nonatomic) char hasDuration; 
@property (assign,nonatomic) long long duration;                                             //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) char hasDeviceOrientation; 
@property (assign,nonatomic) int deviceOrientation;                                          //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (nonatomic,readonly) char hasReferringType; 
@property (nonatomic,retain) NSString * referringType;                                       //@synthesize referringType=_referringType - In the implementation block
@property (nonatomic,readonly) char hasReferringSource; 
@property (nonatomic,retain) NSString * referringSource;                                     //@synthesize referringSource=_referringSource - In the implementation block
@property (nonatomic,readonly) char hasWindowFrameInScreen; 
@property (nonatomic,retain) NSString * windowFrameInScreen;                                 //@synthesize windowFrameInScreen=_windowFrameInScreen - In the implementation block
@property (assign,nonatomic) char hasGestureType; 
@property (assign,nonatomic) int gestureType;                                                //@synthesize gestureType=_gestureType - In the implementation block
@property (assign,nonatomic) char hasInterfaceOrientation; 
@property (assign,nonatomic) int interfaceOrientation;                                       //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) char hasReachabilityStatus; 
@property (assign,nonatomic) int reachabilityStatus;                                         //@synthesize reachabilityStatus=_reachabilityStatus - In the implementation block
@property (assign,nonatomic) char hasCellularRadioAccessTechnology; 
@property (assign,nonatomic) int cellularRadioAccessTechnology;                              //@synthesize cellularRadioAccessTechnology=_cellularRadioAccessTechnology - In the implementation block
@property (assign,nonatomic) char hasPersonalizationTreatmentId; 
@property (assign,nonatomic) long long personalizationTreatmentId;                           //@synthesize personalizationTreatmentId=_personalizationTreatmentId - In the implementation block
@property (assign,nonatomic) char hasPersonalizedTreatmentId; 
@property (assign,nonatomic) long long personalizedTreatmentId;                              //@synthesize personalizedTreatmentId=_personalizedTreatmentId - In the implementation block
@property (assign,nonatomic) char hasIsPaidSubscriberDuringEvent; 
@property (assign,nonatomic) char isPaidSubscriberDuringEvent;                               //@synthesize isPaidSubscriberDuringEvent=_isPaidSubscriberDuringEvent - In the implementation block
@property (assign,nonatomic) char hasIsPaidSubscriberFromNewsDuringEvent; 
@property (assign,nonatomic) char isPaidSubscriberFromNewsDuringEvent;                       //@synthesize isPaidSubscriberFromNewsDuringEvent=_isPaidSubscriberFromNewsDuringEvent - In the implementation block
@property (assign,nonatomic) char hasIsPaidSubscriberFromAppStoreDuringEvent; 
@property (assign,nonatomic) char isPaidSubscriberFromAppStoreDuringEvent;                   //@synthesize isPaidSubscriberFromAppStoreDuringEvent=_isPaidSubscriberFromAppStoreDuringEvent - In the implementation block
@property (assign,nonatomic) char hasIsPaidSubscriberFromThirdPartyDuringEvent; 
@property (assign,nonatomic) char isPaidSubscriberFromThirdPartyDuringEvent;                 //@synthesize isPaidSubscriberFromThirdPartyDuringEvent=_isPaidSubscriberFromThirdPartyDuringEvent - In the implementation block
@property (nonatomic,readonly) char hasNotwUserId; 
@property (nonatomic,retain) NSString * notwUserId;                                          //@synthesize notwUserId=_notwUserId - In the implementation block
@property (nonatomic,readonly) char hasSessionIdWatch; 
@property (nonatomic,retain) NSData * sessionIdWatch;                                        //@synthesize sessionIdWatch=_sessionIdWatch - In the implementation block
@property (assign,nonatomic) char hasAppConfigTreatmentId; 
@property (assign,nonatomic) long long appConfigTreatmentId;                                 //@synthesize appConfigTreatmentId=_appConfigTreatmentId - In the implementation block
@property (nonatomic,readonly) char hasWidgetSessionId; 
@property (nonatomic,retain) NSData * widgetSessionId;                                       //@synthesize widgetSessionId=_widgetSessionId - In the implementation block
@property (nonatomic,retain) NSMutableArray * userPaidSubscriptionStatus;                    //@synthesize userPaidSubscriptionStatus=_userPaidSubscriptionStatus - In the implementation block
@property (nonatomic,readonly) char hasWidgetUserId; 
@property (nonatomic,retain) NSString * widgetUserId;                                        //@synthesize widgetUserId=_widgetUserId - In the implementation block
@property (assign,nonatomic) char hasBundleSubscriptionStatus; 
@property (assign,nonatomic) int bundleSubscriptionStatus;                                   //@synthesize bundleSubscriptionStatus=_bundleSubscriptionStatus - In the implementation block
@property (nonatomic,readonly) char hasBundlePurchaseId; 
@property (nonatomic,retain) NSString * bundlePurchaseId;                                    //@synthesize bundlePurchaseId=_bundlePurchaseId - In the implementation block
@property (nonatomic,readonly) char hasBundleOfferId; 
@property (nonatomic,retain) NSString * bundleOfferId;                                       //@synthesize bundleOfferId=_bundleOfferId - In the implementation block
@property (assign,nonatomic) char hasIsBundlePurchaser; 
@property (assign,nonatomic) char isBundlePurchaser;                                         //@synthesize isBundlePurchaser=_isBundlePurchaser - In the implementation block
@property (nonatomic,readonly) char hasAppAnalyticsEventIdentifier; 
@property (nonatomic,retain) NSString * appAnalyticsEventIdentifier;                         //@synthesize appAnalyticsEventIdentifier=_appAnalyticsEventIdentifier - In the implementation block
@property (nonatomic,readonly) char hasAppAnalyticsEventPath; 
@property (nonatomic,retain) NSString * appAnalyticsEventPath;                               //@synthesize appAnalyticsEventPath=_appAnalyticsEventPath - In the implementation block
@property (assign,nonatomic) char hasIsAmplifyUser; 
@property (assign,nonatomic) char isAmplifyUser;                                             //@synthesize isAmplifyUser=_isAmplifyUser - In the implementation block
@property (nonatomic,readonly) char hasSBundlePurchaseId; 
@property (nonatomic,retain) NSString * sBundlePurchaseId;                                   //@synthesize sBundlePurchaseId=_sBundlePurchaseId - In the implementation block
+(Class)userPaidSubscriptionStatusType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(long long)duration;
-(void)setDuration:(long long)arg1 ;
-(void)setSessionId:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)sessionId;
-(long long)startTimestamp;
-(char)hasSessionId;
-(void)setHasDuration:(char)arg1 ;
-(char)hasDuration;
-(int)interfaceOrientation;
-(void)setInterfaceOrientation:(int)arg1 ;
-(NSString *)userId;
-(void)setUserId:(NSString *)arg1 ;
-(void)setGestureType:(int)arg1 ;
-(void)setHasGestureType:(char)arg1 ;
-(char)hasGestureType;
-(int)gestureType;
-(void)setStartTimestamp:(long long)arg1 ;
-(void)setHasStartTimestamp:(char)arg1 ;
-(char)hasStartTimestamp;
-(int)deviceOrientation;
-(void)setDeviceOrientation:(int)arg1 ;
-(char)hasUserId;
-(void)setWidgetUserId:(NSString *)arg1 ;
-(char)hasWidgetUserId;
-(NSString *)widgetUserId;
-(void)setPersonalizationTreatmentId:(long long)arg1 ;
-(void)setHasPersonalizationTreatmentId:(char)arg1 ;
-(char)hasPersonalizationTreatmentId;
-(long long)personalizationTreatmentId;
-(void)setUserStorefrontId:(NSString *)arg1 ;
-(char)hasUserStorefrontId;
-(NSString *)userStorefrontId;
-(int)cellularRadioAccessTechnology;
-(void)setCellularRadioAccessTechnology:(int)arg1 ;
-(void)setHasCellularRadioAccessTechnology:(char)arg1 ;
-(char)hasCellularRadioAccessTechnology;
-(id)cellularRadioAccessTechnologyAsString:(int)arg1 ;
-(int)StringAsCellularRadioAccessTechnology:(id)arg1 ;
-(void)setNotwUserId:(NSString *)arg1 ;
-(void)setSessionIdWatch:(NSData *)arg1 ;
-(void)setWidgetSessionId:(NSData *)arg1 ;
-(int)reachabilityStatus;
-(void)setReachabilityStatus:(int)arg1 ;
-(void)setHasReachabilityStatus:(char)arg1 ;
-(char)hasReachabilityStatus;
-(id)reachabilityStatusAsString:(int)arg1 ;
-(int)StringAsReachabilityStatus:(id)arg1 ;
-(void)setAppConfigTreatmentId:(long long)arg1 ;
-(void)setHasAppConfigTreatmentId:(char)arg1 ;
-(char)hasAppConfigTreatmentId;
-(char)hasNotwUserId;
-(char)hasSessionIdWatch;
-(char)hasWidgetSessionId;
-(long long)appConfigTreatmentId;
-(NSString *)notwUserId;
-(NSData *)sessionIdWatch;
-(NSData *)widgetSessionId;
-(int)bundleSubscriptionStatus;
-(void)setBundleSubscriptionStatus:(int)arg1 ;
-(void)setHasBundleSubscriptionStatus:(char)arg1 ;
-(char)hasBundleSubscriptionStatus;
-(id)bundleSubscriptionStatusAsString:(int)arg1 ;
-(int)StringAsBundleSubscriptionStatus:(id)arg1 ;
-(void)setIsBundlePurchaser:(char)arg1 ;
-(void)setHasIsBundlePurchaser:(char)arg1 ;
-(char)hasIsBundlePurchaser;
-(void)setIsAmplifyUser:(char)arg1 ;
-(void)setHasIsAmplifyUser:(char)arg1 ;
-(char)hasIsAmplifyUser;
-(char)isBundlePurchaser;
-(char)isAmplifyUser;
-(void)addUserPaidSubscriptionStatus:(id)arg1 ;
-(void)setEventObject:(NTPBEventObject *)arg1 ;
-(void)setReferringType:(NSString *)arg1 ;
-(void)setReferringSource:(NSString *)arg1 ;
-(void)setWindowFrameInScreen:(NSString *)arg1 ;
-(void)setBundlePurchaseId:(NSString *)arg1 ;
-(void)setBundleOfferId:(NSString *)arg1 ;
-(void)setAppAnalyticsEventIdentifier:(NSString *)arg1 ;
-(void)setAppAnalyticsEventPath:(NSString *)arg1 ;
-(void)setSBundlePurchaseId:(NSString *)arg1 ;
-(char)hasEventObject;
-(void)setHasDeviceOrientation:(char)arg1 ;
-(char)hasDeviceOrientation;
-(char)hasReferringType;
-(char)hasReferringSource;
-(char)hasWindowFrameInScreen;
-(void)setHasInterfaceOrientation:(char)arg1 ;
-(char)hasInterfaceOrientation;
-(void)setPersonalizedTreatmentId:(long long)arg1 ;
-(void)setHasPersonalizedTreatmentId:(char)arg1 ;
-(char)hasPersonalizedTreatmentId;
-(void)setIsPaidSubscriberDuringEvent:(char)arg1 ;
-(void)setHasIsPaidSubscriberDuringEvent:(char)arg1 ;
-(char)hasIsPaidSubscriberDuringEvent;
-(void)setIsPaidSubscriberFromNewsDuringEvent:(char)arg1 ;
-(void)setHasIsPaidSubscriberFromNewsDuringEvent:(char)arg1 ;
-(char)hasIsPaidSubscriberFromNewsDuringEvent;
-(void)setIsPaidSubscriberFromAppStoreDuringEvent:(char)arg1 ;
-(void)setHasIsPaidSubscriberFromAppStoreDuringEvent:(char)arg1 ;
-(char)hasIsPaidSubscriberFromAppStoreDuringEvent;
-(void)setIsPaidSubscriberFromThirdPartyDuringEvent:(char)arg1 ;
-(void)setHasIsPaidSubscriberFromThirdPartyDuringEvent:(char)arg1 ;
-(char)hasIsPaidSubscriberFromThirdPartyDuringEvent;
-(void)clearUserPaidSubscriptionStatus;
-(unsigned long long)userPaidSubscriptionStatusCount;
-(id)userPaidSubscriptionStatusAtIndex:(unsigned long long)arg1 ;
-(char)hasBundlePurchaseId;
-(char)hasBundleOfferId;
-(char)hasAppAnalyticsEventIdentifier;
-(char)hasAppAnalyticsEventPath;
-(char)hasSBundlePurchaseId;
-(NTPBEventObject *)eventObject;
-(NSString *)referringType;
-(NSString *)referringSource;
-(NSString *)windowFrameInScreen;
-(long long)personalizedTreatmentId;
-(char)isPaidSubscriberDuringEvent;
-(char)isPaidSubscriberFromNewsDuringEvent;
-(char)isPaidSubscriberFromAppStoreDuringEvent;
-(char)isPaidSubscriberFromThirdPartyDuringEvent;
-(NSMutableArray *)userPaidSubscriptionStatus;
-(void)setUserPaidSubscriptionStatus:(NSMutableArray *)arg1 ;
-(NSString *)bundlePurchaseId;
-(NSString *)bundleOfferId;
-(NSString *)appAnalyticsEventIdentifier;
-(NSString *)appAnalyticsEventPath;
-(NSString *)sBundlePurchaseId;
@end
