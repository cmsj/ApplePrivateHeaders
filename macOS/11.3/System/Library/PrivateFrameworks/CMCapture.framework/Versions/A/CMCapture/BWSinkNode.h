/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class FigStateMachine, NSMutableArray, NSString;

@interface BWSinkNode : BWNode {

	FigStateMachine* _stateMachine;
	os_unfair_lock_s _stateLock;
	NSMutableArray* _handlersToCallWhenIdle;
	NSMutableArray* _handlersToCallWhenActive;
	NSString* _sinkID;
	OpaqueFigSimpleMutexRef _configurationHandlerLock;
	long long _liveConfigurationID;
	NSMutableArray* _configurationLiveHandlers;
	NSMutableArray* _configurationLiveIDs;

}

@property (nonatomic,copy,readonly) NSString * sinkID;                //@synthesize sinkID=_sinkID - In the implementation block
@property (readonly) NSString * currentStateDebugString; 
@property (readonly) char isActive; 
@property (readonly) long long liveConfigurationID; 
+(void)initialize;
-(void)dealloc;
-(char)isActive;
-(id)nodeType;
-(void)addOutput:(id)arg1 ;
-(NSString *)sinkID;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)initWithSinkID:(id)arg1 ;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)notifyWhenActive:(/*^block*/id)arg1 ;
-(void)notifyWhenIdle:(/*^block*/id)arg1 ;
-(void)notifyWhenConfigurationID:(long long)arg1 becomesLive:(/*^block*/id)arg2 ;
-(NSString *)currentStateDebugString;
-(long long)liveConfigurationID;
-(void)_setupSinkNodeStateMachine;
@end

