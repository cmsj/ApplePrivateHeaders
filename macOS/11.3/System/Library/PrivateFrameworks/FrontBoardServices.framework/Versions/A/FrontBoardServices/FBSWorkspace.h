/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/Versions/A/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSServiceConnectionEndpointMonitorDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol FBSWorkspaceDelegate, OS_dispatch_queue;
@class FBSSerialQueue, BSAtomicSignal, FBSWorkspaceFencingImpl, NSObject, NSMutableDictionary, BSServiceConnectionEndpointMonitor, BSServiceConnectionEndpoint, NSArray, NSString;

@interface FBSWorkspace : NSObject <BSServiceConnectionEndpointMonitorDelegate, BSDescriptionProviding> {

	FBSSerialQueue* _callOutQueue;
	id<FBSWorkspaceDelegate> _delegate;
	BSAtomicSignal* _activateSignal;
	FBSWorkspaceFencingImpl* _fencingImpl;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _queue_identifierToScenesSource;
	BSServiceConnectionEndpointMonitor* _connectionEndpointMonitor;
	BSServiceConnectionEndpoint* _defaultShellEndpoint;

}

@property (nonatomic,readonly) id<FBSWorkspaceDelegate> delegate; 
@property (nonatomic,readonly) BSServiceConnectionEndpoint * defaultShellEndpoint;              //@synthesize defaultShellEndpoint=_defaultShellEndpoint - In the implementation block
@property (nonatomic,copy,readonly) NSArray * scenes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sharedWorkspaceIfExists;
+(void)_registerBlockForWorkspaceCreation:(/*^block*/id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)init;
-(void)_activate;
-(id<FBSWorkspaceDelegate>)delegate;
-(void)setDelegate:(id<FBSWorkspaceDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(id)_initWithOptions:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(BSServiceConnectionEndpoint *)defaultShellEndpoint;
-(void)requestSceneFromEndpoint:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSArray *)scenes;
-(id)sceneWithIdentifier:(id)arg1 ;
-(void)enumerateScenesWithBlock:(/*^block*/id)arg1 ;
-(void)requestSceneCreationWithInitialClientSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestSceneCreationWithIdentifier:(id)arg1 initialClientSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)requestSystemAnimationFence;
-(char)isTrackingAnySystemAnimationFence;
-(char)trackSystemAnimationFence:(id)arg1 ;
-(void)synchronizeSystemAnimationFencesWithCleanUpBlock:(/*^block*/id)arg1 ;
-(id)initWithSerialQueue:(id)arg1 ;
-(id)_queue_scenesClientForEndpoint:(id)arg1 creatingIfNecessary:(char)arg2 ;
-(void)_queue_registerSource:(id)arg1 ;
-(void)_queue_unregisterSource:(id)arg1 ;
-(void)monitor:(id)arg1 didReceiveEndpoint:(id)arg2 ;
-(void)monitor:(id)arg1 willLoseEndpoint:(id)arg2 ;
-(id)_initWithSerialQueue:(id)arg1 ;
-(void)requestDestructionOfScene:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_registerSource:(id)arg1 ;
-(void)_unregisterSource:(id)arg1 ;
-(void)_calloutQueue_executeCalloutFromSource:(id)arg1 withBlock:(/*^block*/id)arg2 ;
@end

