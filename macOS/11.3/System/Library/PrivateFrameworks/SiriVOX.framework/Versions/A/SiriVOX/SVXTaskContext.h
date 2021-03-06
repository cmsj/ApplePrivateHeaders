/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/Versions/A/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, SAUIListenAfterSpeakingBehavior, SVXActivationContext, SVXDeactivationContext, NSError;

@interface SVXTaskContext : NSObject <NSCopying, NSSecureCoding> {

	char _isUUFR;
	char _listensAfterSpeaking;
	long long _origin;
	unsigned long long _timestamp;
	NSUUID* _sessionUUID;
	NSUUID* _requestUUID;
	NSString* _aceId;
	NSString* _refId;
	NSString* _dialogIdentifier;
	NSString* _dialogPhase;
	SAUIListenAfterSpeakingBehavior* _listenAfterSpeakingBehavior;
	SVXActivationContext* _activationContext;
	SVXDeactivationContext* _deactivationContext;
	NSError* _error;

}

@property (nonatomic,readonly) long long origin;                                                                //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;                                                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * sessionUUID;                                                       //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * requestUUID;                                                       //@synthesize requestUUID=_requestUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * aceId;                                                           //@synthesize aceId=_aceId - In the implementation block
@property (nonatomic,copy,readonly) NSString * refId;                                                           //@synthesize refId=_refId - In the implementation block
@property (nonatomic,copy,readonly) NSString * dialogIdentifier;                                                //@synthesize dialogIdentifier=_dialogIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * dialogPhase;                                                     //@synthesize dialogPhase=_dialogPhase - In the implementation block
@property (nonatomic,readonly) char isUUFR;                                                                     //@synthesize isUUFR=_isUUFR - In the implementation block
@property (nonatomic,readonly) char listensAfterSpeaking;                                                       //@synthesize listensAfterSpeaking=_listensAfterSpeaking - In the implementation block
@property (nonatomic,copy,readonly) SAUIListenAfterSpeakingBehavior * listenAfterSpeakingBehavior;              //@synthesize listenAfterSpeakingBehavior=_listenAfterSpeakingBehavior - In the implementation block
@property (nonatomic,copy,readonly) SVXActivationContext * activationContext;                                   //@synthesize activationContext=_activationContext - In the implementation block
@property (nonatomic,copy,readonly) SVXDeactivationContext * deactivationContext;                               //@synthesize deactivationContext=_deactivationContext - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                                                            //@synthesize error=_error - In the implementation block
+(char)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(unsigned long long)timestamp;
-(NSUUID *)requestUUID;
-(long long)origin;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(NSString *)aceId;
-(NSString *)refId;
-(NSString *)dialogIdentifier;
-(NSString *)dialogPhase;
-(SAUIListenAfterSpeakingBehavior *)listenAfterSpeakingBehavior;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(NSUUID *)sessionUUID;
-(char)isUUFR;
-(char)listensAfterSpeaking;
-(SVXActivationContext *)activationContext;
-(SVXDeactivationContext *)deactivationContext;
-(id)initWithOrigin:(long long)arg1 timestamp:(unsigned long long)arg2 sessionUUID:(id)arg3 requestUUID:(id)arg4 aceId:(id)arg5 refId:(id)arg6 dialogIdentifier:(id)arg7 dialogPhase:(id)arg8 isUUFR:(char)arg9 listensAfterSpeaking:(char)arg10 listenAfterSpeakingBehavior:(id)arg11 activationContext:(id)arg12 deactivationContext:(id)arg13 error:(id)arg14 ;
@end

