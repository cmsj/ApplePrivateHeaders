/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SMNRemoteProxy.h>
#import <libobjc.A.dylib/MigrationProgressEventsListener.h>

@protocol OS_dispatch_queue;
@class SMNNetworkSession, NSObject, NSMutableDictionary, NSString;

@interface SMNetworkSourceProxy : NSObject <SMNRemoteProxy, MigrationProgressEventsListener> {

	char _disconnected;
	char _cancelled;
	/*^block*/id _usernameConversionBlock;
	/*^block*/id _groupnameConversionBlock;
	SMNNetworkSession* _session;
	NSObject*<OS_dispatch_queue> _actionQueue;
	NSMutableDictionary* _bundleInformation;

}

@property (retain) SMNNetworkSession * session;                           //@synthesize session=_session - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> actionQueue;              //@synthesize actionQueue=_actionQueue - In the implementation block
@property (getter=isDisconnected) char disconnected;                      //@synthesize disconnected=_disconnected - In the implementation block
@property (getter=isCancelled) char cancelled;                            //@synthesize cancelled=_cancelled - In the implementation block
@property (retain) NSMutableDictionary * bundleInformation;               //@synthesize bundleInformation=_bundleInformation - In the implementation block
@property (readonly) unsigned long long protocolVersion; 
@property (copy) id usernameConversionBlock;                              //@synthesize usernameConversionBlock=_usernameConversionBlock - In the implementation block
@property (copy) id groupnameConversionBlock;                             //@synthesize groupnameConversionBlock=_groupnameConversionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resume;
-(unsigned long long)usedSize;
-(void)cancel;
-(char)isCancelled;
-(void)setCancelled:(char)arg1 ;
-(SMNNetworkSession *)session;
-(void)setConnected:(char)arg1 ;
-(void)setSession:(SMNNetworkSession *)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(unsigned long long)protocolVersion;
-(void)setDisconnected:(char)arg1 ;
-(char)isDisconnected;
-(NSObject*<OS_dispatch_queue>)actionQueue;
-(void)setActionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)freeSize;
-(char)sendAction:(id)arg1 error:(id*)arg2 ;
-(void)closeActiveConnection;
-(void)engineStartedWithRequestUUID:(id)arg1 migrationType:(unsigned long long)arg2 ;
-(void)engineProgressUpdate:(id)arg1 ;
-(void)engineProcessingText:(id)arg1 ;
-(void)enginePercentDone:(id)arg1 ;
-(void)engineMinutesRemaining:(id)arg1 transferRate:(id)arg2 ;
-(void)migrationRequestCompletedState:(unsigned long long)arg1 advancingTo:(unsigned long long)arg2 withErrorsAndWarnings:(id)arg3 ;
-(void)sourceMacInterfaceTypeChanged:(id)arg1 type:(unsigned long long)arg2 appropriateIcon:(unsigned long long)arg3 ;
-(id)itemAttributesAtPaths:(id)arg1 ;
-(id)childrenAtPath:(n@)arg1 omittingSubpaths:(n@)arg2 ;
-(id)bundleInformationAtPath:(id)arg1 ;
-(unsigned long long)sizeForPaths:(n@)arg1 ;
-(bycopy id)bundleInformationAtPaths:(id)arg1 ;
-(char)copyPath:(id)arg1 toPath:(id)arg2 ;
-(id)usernameConversionBlock;
-(void)setUsernameConversionBlock:(id)arg1 ;
-(id)groupnameConversionBlock;
-(void)setGroupnameConversionBlock:(id)arg1 ;
-(char)sendActionToAffirmMigrationHasCompleted;
-(char)waitForConnectionReturningError:(id*)arg1 ;
-(id)cummulativeDescriptionFromError:(id)arg1 ;
-(char)hasUnderlyingError:(long long)arg1 withDomain:(id)arg2 inOutermostError:(id)arg3 ;
-(id)resultOfRequestType:(id)arg1 paths:(id)arg2 omitPaths:(id)arg3 ;
-(unsigned long long)sizeOfType:(id)arg1 paths:(id)arg2 omitPaths:(id)arg3 ;
-(id)resultOfType:(id)arg1 paths:(id)arg2 omitPaths:(id)arg3 ;
-(NSMutableDictionary *)bundleInformation;
-(char)_sendStatusText:(id)arg1 arguments:(id)arg2 timeRemaining:(id)arg3 percentDone:(id)arg4 eaw:(id)arg5 ;
-(char)itemExistsAtPath:(id)arg1 ;
-(unsigned long long)sizeForAbsolutePath:(n@)arg1 ;
-(id)systemPaths;
-(id)childrenAtPath:(id)arg1 omittingSubpaths:(id)arg2 excludingSystemPaths:(char)arg3 expandingBundles:(char)arg4 ;
-(bycopy id)directoriesAtPath:(id)arg1 ;
-(id)incompatibleAppsInfoForPaths:(id)arg1 ;
-(id)itemCRCsAtPaths:(id)arg1 ;
-(void)removeSplitForkCacheAtPath:(id)arg1 ;
-(void)setBundleInformation:(NSMutableDictionary *)arg1 ;
@end
