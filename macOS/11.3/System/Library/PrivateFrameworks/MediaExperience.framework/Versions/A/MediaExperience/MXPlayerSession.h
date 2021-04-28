/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/Versions/A/MediaExperience
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaExperience/MediaExperience-Structs.h>
@class NSObject, MXSessionManager, NSString;

@interface MXPlayerSession : NSObject {

	unsigned _sessionToken;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _sessionTokenString;
	SCD_Struct_MX10* _sessionState;
	NSObject*<OS_dispatch_queue> _responseQueue;
	MXSessionManager* _mxSessionManager;
	vector<MXAuRAIOControllerPayload *, std::__1::allocator<MXAuRAIOControllerPayload *>>* _ioControllers;
	vector<MXAuRAVirtualPortPayload *, std::__1::allocator<MXAuRAVirtualPortPayload *>>* _virtualPorts;
	NSString* _clientName;

}

@property (readonly) char isActivationANoOp; 
@property (readonly) char isAllowedToStartPlaying; 
@property (readonly) char isAllowedToStartRecording; 
+(DerivedBehaviors)behaviorsFromState:(id)arg1 ;
-(id)initWithSessionToken:(unsigned)arg1 withProcessToken:(ProcessToken)arg2 withAuditToken:(SCD_Struct_MX15)arg3 withInterruptionHandler:(/*^block*/id)arg4 sessionManager:(id)arg5 ;
-(vector<MXAuRAVirtualPortPayload *, std::__1::allocator<MXAuRAVirtualPortPayload *>>*)virtualPortsForSession;
-(void)updateIOControllers:(id*)arg1 withSessionID:(const unsigned*)arg2 ;
-(void)updateVirtualPorts:(id*)arg1 withSessionID:(const unsigned*)arg2 ;
-(void)dealloc;
-(void)setToken:(unsigned)arg1 ;
-(error_code*)activate:(/*^block*/id)arg1 ;
-(unsigned)processOwningIOResources;
-(error_code*)registerSession;
-(error_code*)unregisterSession;
-(char)isActivationANoOp;
-(char)updateClientConfiguration:(id)arg1 ;
-(unsigned)originatingProcessToken;
-(SCD_Struct_MX16*)getSessionState;
-(void)setInterruptionSource:(SessionInterruptionSource*)arg1 ;
-(void)setWasPlayingWhenInterrupted:(BOOL)arg1 ;
-(void)clearInterruptionSource;
-(void)processStateChanged:(int)arg1 ;
-(vector<MXAuRAIOControllerPayload *, std::__1::allocator<MXAuRAIOControllerPayload *>>*)ioControllers;
-(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>)clientProcessName;
-(expected<std::__1::map<unsigned int, aura_SimulatedConfigurationChangeDescription *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, aura_SimulatedConfigurationChangeDescription *>>>, std::__1::error_code>*)simulateActivation;
-(expected<std::__1::map<aura::IOControllerType, std::__1::vector<MXAuRAVirtualPortPayload *, std::__1::allocator<MXAuRAVirtualPortPayload *>>, std::__1::less<aura::IOControllerType>, std::__1::allocator<std::__1::pair<const aura::IOControllerType, std::__1::vector<MXAuRAVirtualPortPayload *, std::__1::allocator<MXAuRAVirtualPortPayload *>>>>>, std::__1::error_code>*)eligiblePorts;
-(error_code*)deactivate:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)clientStateAsData;
-(void)setProcessOwningIOResources:(unsigned)arg1 ;
-(char)isAllowedToStartPlaying;
-(char)isAllowedToStartRecording;
-(BOOL)hasSessionProxyingEntitlement;
-(void)setRunningState:(unsigned long long)arg1 ;
@end
