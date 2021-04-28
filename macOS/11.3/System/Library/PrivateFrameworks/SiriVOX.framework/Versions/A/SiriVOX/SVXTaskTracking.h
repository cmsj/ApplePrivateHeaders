/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/Versions/A/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SVXTaskContext, AFAnalyticsTurnBasedInstrumentationContext, NSUUID, NSString, SAUIListenAfterSpeakingBehavior, SVXActivationContext, SVXDeactivationContext, NSError;


@protocol SVXTaskTracking <NSObject>
@property (nonatomic,copy,readonly) SVXTaskContext * context; 
@property (nonatomic,readonly) id<SVXTaskTracking> parent; 
@property (nonatomic,readonly) AFAnalyticsTurnBasedInstrumentationContext * instrumentationContext; 
@property (nonatomic,readonly) long long origin; 
@property (nonatomic,readonly) unsigned long long timestamp; 
@property (nonatomic,readonly) NSUUID * sessionUUID; 
@property (nonatomic,readonly) NSUUID * requestUUID; 
@property (nonatomic,readonly) NSString * aceId; 
@property (nonatomic,readonly) NSString * refId; 
@property (nonatomic,readonly) NSString * dialogIdentifier; 
@property (nonatomic,readonly) NSString * dialogPhase; 
@property (nonatomic,readonly) char isUUFR; 
@property (nonatomic,readonly) char listensAfterSpeaking; 
@property (nonatomic,readonly) SAUIListenAfterSpeakingBehavior * listenAfterSpeakingBehavior; 
@property (nonatomic,readonly) SVXActivationContext * activationContext; 
@property (nonatomic,readonly) SVXDeactivationContext * deactivationContext; 
@property (nonatomic,readonly) NSError * error; 
@required
-(NSError *)error;
-(id<SVXTaskTracking>)parent;
-(SVXTaskContext *)context;
-(unsigned long long)timestamp;
-(NSUUID *)requestUUID;
-(long long)origin;
-(NSString *)aceId;
-(NSString *)refId;
-(NSString *)dialogIdentifier;
-(NSString *)dialogPhase;
-(SAUIListenAfterSpeakingBehavior *)listenAfterSpeakingBehavior;
-(NSUUID *)sessionUUID;
-(char)isUUFR;
-(char)listensAfterSpeaking;
-(SVXActivationContext *)activationContext;
-(SVXDeactivationContext *)deactivationContext;
-(id)beginChildWithContext:(id)arg1;
-(AFAnalyticsTurnBasedInstrumentationContext *)instrumentationContext;

@end
