/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <Automator/AMAction.h>
#import <libobjc.A.dylib/AMRemoteActionDelegateXPCProtocol.h>

@class NSError, NSBundle, NSMutableDictionary, AMRemoteActionViewController, AMPlaceholderViewController, AMRemoteActionDelegate, NSString, AMRemoteActionViewInfo;

@interface AMRemoteAction : AMAction <AMRemoteActionDelegateXPCProtocol> {

	char __synchronousRunHasFailedFromXPC;
	char __hasCachedOverrides;
	char __preparedForRunning;
	char __hadWorkflow;
	char __hadXPC;
	os_unfair_lock_s __overridesLock;
	os_unfair_lock_s __executionLock;
	unsigned long long __runMode;
	NSError* __proxyCreationError;
	NSBundle* __bundle;
	NSMutableDictionary* __cachedHasOverrideBySelector;
	NSMutableDictionary* __cachedOverridenSelectorOfSet;
	AMRemoteActionViewController* __remoteViewController;
	AMPlaceholderViewController* __placeholderViewController;
	id __cachedViewInfo;
	AMRemoteActionDelegate* __remoteActionDelegate;

}

@property (retain) NSError * _proxyCreationError;                                                                          //@synthesize _proxyCreationError=__proxyCreationError - In the implementation block
@property (nonatomic,retain) NSBundle * _bundle;                                                                           //@synthesize _bundle=__bundle - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s _overridesLock;                                                              //@synthesize _overridesLock=__overridesLock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _cachedHasOverrideBySelector;                                           //@synthesize _cachedHasOverrideBySelector=__cachedHasOverrideBySelector - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _cachedOverridenSelectorOfSet;                                          //@synthesize _cachedOverridenSelectorOfSet=__cachedOverridenSelectorOfSet - In the implementation block
@property (assign,setter=_setHasCachedOverrides:,nonatomic) char _hasCachedOverrides;                                      //@synthesize _hasCachedOverrides=__hasCachedOverrides - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s _executionLock;                                                              //@synthesize _executionLock=__executionLock - In the implementation block
@property (assign,setter=_setRunMode:,nonatomic) unsigned long long _runMode;                                              //@synthesize _runMode=__runMode - In the implementation block
@property (assign,setter=_setSynchronousRunHasFailedFromXPC:,nonatomic) char _synchronousRunHasFailedFromXPC;              //@synthesize _synchronousRunHasFailedFromXPC=__synchronousRunHasFailedFromXPC - In the implementation block
@property (assign,setter=_setPreparedForRunning:,nonatomic) char _preparedForRunning;                                      //@synthesize _preparedForRunning=__preparedForRunning - In the implementation block
@property (nonatomic,readonly) char _supportsPauseResume; 
@property (nonatomic,retain) AMRemoteActionViewController * _remoteViewController;                                         //@synthesize _remoteViewController=__remoteViewController - In the implementation block
@property (nonatomic,retain) AMPlaceholderViewController * _placeholderViewController;                                     //@synthesize _placeholderViewController=__placeholderViewController - In the implementation block
@property (retain) id _cachedViewInfo;                                                                                     //@synthesize _cachedViewInfo=__cachedViewInfo - In the implementation block
@property (nonatomic,retain) AMRemoteActionDelegate * _remoteActionDelegate;                                               //@synthesize _remoteActionDelegate=__remoteActionDelegate - In the implementation block
@property (assign,nonatomic) char _hadWorkflow;                                                                            //@synthesize _hadWorkflow=__hadWorkflow - In the implementation block
@property (assign) char _hadXPC;                                                                                           //@synthesize _hadXPC=__hadXPC - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) id<AMRemoteActionDelegateXPCProtocol> xpcDelegate; 
@property (nonatomic,readonly) AMRemoteActionViewInfo * remoteViewInfo; 
@property (nonatomic,readonly) unsigned long long arch; 
@property (nonatomic,copy,readonly) NSString * xpcServiceName; 
+(char)supportsRuntimeParameters;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)resume;
-(void)_invalidate;
-(NSString *)bundleIdentifier;
-(NSBundle *)_bundle;
-(void)pause;
-(id)view;
-(char)isLoaded;
-(id)bundle;
-(id)initWithBundle:(id)arg1 ;
-(id)parameters;
-(void)_commonInit;
-(char)isViewLoaded;
-(void)setCollapsed:(char)arg1 ;
-(void)setDisabled:(char)arg1 ;
-(void)_stop;
-(void)setParameters:(id)arg1 ;
-(void)_closed;
-(void)_activated;
-(void)_updateParameters;
-(NSString *)xpcServiceName;
-(void)setComment:(id)arg1 ;
-(AMRemoteActionViewController *)_remoteViewController;
-(void)setWorkflow:(id)arg1 ;
-(unsigned long long)_runMode;
-(void)_opened;
-(AMPlaceholderViewController *)_placeholderViewController;
-(id)loadingError;
-(id)runWithInput:(id)arg1 error:(id*)arg2 ;
-(id)runWithInput:(id)arg1 fromAction:(id)arg2 error:(id*)arg3 ;
-(char)am_hasOverrideForSelector:(SEL)arg1 ;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(id)am_mostRecentlyOverriddenOfSelectorStrings:(id)arg1 ;
-(void)willFinishRunning;
-(void)_resetForRunningLocally:(id)arg1 ;
-(char)hasView;
-(id)initWithDefinition:(id)arg1 fromArchive:(char)arg2 ;
-(char)canShowWhenRun;
-(id)allShowWhenRunItems;
-(void)_parametersUpdated;
-(void)setIgnoresInput:(char)arg1 ;
-(void)setShowWhenRun:(char)arg1 ;
-(char)canShowSelectedItemsWhenRun;
-(void)setShowOnlySelectedItemsWhenRun:(char)arg1 ;
-(void)setSelectedShowWhenRunItemNames:(id)arg1 ;
-(char)amAction_supportsParameterObservation;
-(void)set_bundle:(NSBundle *)arg1 ;
-(char)isAMRemoteAction__;
-(void)remoteActionLogMessage:(id)arg1 level:(unsigned long long)arg2 ;
-(void)remoteActionFinishedRunningAsynchronouslyWithOutput:(id)arg1 stopped:(char)arg2 error:(id)arg3 ;
-(void)remoteActionProgressDidChange:(id)arg1 ;
-(void)remoteActionParametersDidChange:(id)arg1 parameterProperties:(id)arg2 ;
-(void)remoteActionSelectedInputTypeDidChange:(id)arg1 ;
-(void)remoteActionSelectedOutputTypeDidChange:(id)arg1 ;
-(AMRemoteActionViewInfo *)remoteViewInfo;
-(AMRemoteActionDelegate *)_remoteActionDelegate;
-(char)_hadWorkflow;
-(void)set_hadWorkflow:(char)arg1 ;
-(void)_executeBlockingXPC:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_setRunMode:(unsigned long long)arg1 ;
-(char)_synchronousRunHasFailedFromXPC;
-(void)_updateParametersFromRemoteAction:(id)arg1 parameterProperties:(id)arg2 ;
-(NSError *)_proxyCreationError;
-(void)_cacheOverridesIfNeeded;
-(NSMutableDictionary *)_cachedOverridenSelectorOfSet;
-(NSMutableDictionary *)_cachedHasOverrideBySelector;
-(char)_hasCachedOverrides;
-(void)_setHasCachedOverrides:(char)arg1 ;
-(void)__cacheOverrideForSelector:(SEL)arg1 ;
-(void)_prepareForRunning;
-(void)_finishRunningAsynchronouslyIfNeededWithXPCError:(id)arg1 ;
-(void)_setSynchronousRunHasFailedFromXPC:(char)arg1 ;
-(void)_executeBlockingXPCWithReply:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)set_hadXPC:(char)arg1 ;
-(id)_xpcProxySynchronous:(char)arg1 proxyCreationError:(id*)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)set_proxyCreationError:(NSError *)arg1 ;
-(void)_executeXPC:(/*^block*/id)arg1 synchronous:(char)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)_invalidateXPC;
-(char)_supportsPauseResume;
-(id)_cachedViewInfo;
-(void)set_cachedViewInfo:(id)arg1 ;
-(void)_cacheViewInfoFromXPCIfNeeded;
-(void)set_placeholderViewController:(AMPlaceholderViewController *)arg1 ;
-(void)set_remoteViewController:(AMRemoteActionViewController *)arg1 ;
-(char)_hadXPC;
-(void)_closeXPCIfNeeded;
-(void)_invalidateUserInterface;
-(void)_setPreparedForRunning:(char)arg1 ;
-(void)_prepareForRunningOnMainThread;
-(char)_preparedForRunning;
-(unsigned long long)arch;
-(id<AMRemoteActionDelegateXPCProtocol>)xpcDelegate;
-(void)retryXPCConnectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_executeAsynchronousXPC:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)handleXPCConnectionInterruptionError;
-(os_unfair_lock_s)_overridesLock;
-(void)set_overridesLock:(os_unfair_lock_s)arg1 ;
-(void)set_cachedHasOverrideBySelector:(NSMutableDictionary *)arg1 ;
-(void)set_cachedOverridenSelectorOfSet:(NSMutableDictionary *)arg1 ;
-(os_unfair_lock_s)_executionLock;
-(void)set_executionLock:(os_unfair_lock_s)arg1 ;
-(void)set_remoteActionDelegate:(AMRemoteActionDelegate *)arg1 ;
@end

