/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/Versions/A/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVXTaskTracking.h>

@protocol SVXTaskTrackingDelegate, SVXTaskTracking;
@class SVXTaskContext, AFAnalyticsTurnBasedInstrumentationContext, NSUUID, NSString, SAUIListenAfterSpeakingBehavior, SVXActivationContext, SVXDeactivationContext, NSError;

@interface SVXTaskTracker : NSObject <SVXTaskTracking> {

	id<SVXTaskTrackingDelegate> _delegate;
	SVXTaskContext* _context;
	id<SVXTaskTracking> _parent;
	AFAnalyticsTurnBasedInstrumentationContext* _instrumentationContext;

}

@property (nonatomic,copy,readonly) SVXTaskContext * context;                                                    //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) id<SVXTaskTracking> parent;                                                       //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) AFAnalyticsTurnBasedInstrumentationContext * instrumentationContext;              //@synthesize instrumentationContext=_instrumentationContext - In the implementation block
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
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
-(id)beginChildWithContext:(id)arg1 ;
-(AFAnalyticsTurnBasedInstrumentationContext *)instrumentationContext;
-(id)initWithContext:(id)arg1 instrumentationContext:(id)arg2 delegate:(id)arg3 ;
@end

