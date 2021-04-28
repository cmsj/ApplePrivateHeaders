/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/NSFileAccessArbiterXPCInterface.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSXPCListener, NSMutableDictionary, NSFileAccessNode, NSXPCConnection, NSString;

@interface NSFileAccessArbiter : NSObject <NSXPCListenerDelegate, NSFileAccessArbiterXPCInterface> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _listenerConnection;
	char _isStopped;
	char _isSubarbiter;
	NSMutableDictionary* _accessClaimsByID;
	NSMutableDictionary* _accessClaimTransactionsByID;
	NSMutableDictionary* _subarbitrationClaimsByID;
	NSMutableDictionary* _reactorsByID;
	NSMutableDictionary* _reactorTransactionsByID;
	NSMutableDictionary* _kernelMaterializationClaimCancellers;
	NSMutableDictionary* _kernelMaterializationClaimTransactions;
	NSFileAccessNode* _rootNode;
	NSXPCConnection* _superarbitrationServer;
	NSObject*<OS_dispatch_source> _debugSignalSource;
	CFVolumeObserverRef _volumeObserver;
	CFDictionaryRef _volumeGroupUUIDToFakelinkGroupCache;
	os_unfair_lock_s _volumeGroupUUIDToFakelinkGroupCacheLock;

}

@property (readonly) NSXPCConnection * superarbitrationConnection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)ensureProvidersIfNecessaryForClaim:(id)arg1 user:(unsigned)arg2 atLocations:(id)arg3 queue:(id)arg4 thenContinue:(/*^block*/id)arg5 ;
+(id)entitlementForConnection:(id)arg1 key:(id)arg2 ;
+(void)_wakeUpFileProviderWithUID:(unsigned)arg1 urls:(id)arg2 queue:(id)arg3 thenContinue:(/*^block*/id)arg4 ;
-(void)dealloc;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityAttributes:(id)arg2 ofItemAtURL:(id)arg3 ;
-(oneway void)cancelAccessClaimForID:(id)arg1 ;
-(oneway void)revokeAccessClaimForID:(id)arg1 ;
-(oneway void)tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3 ;
-(oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityOfItemAtURL:(id)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didChangeSharingOfItemAtURL:(id)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didMakeItemDisappearAtURL:(id)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didChangeItemAtURL:(id)arg2 ;
-(void)stopArbitrating;
-(oneway void)revokeSubarbitrationClaimForID:(id)arg1 ;
-(oneway void)writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5 ;
-(void)getDebugInformationIncludingEverything:(char)arg1 withString:(id)arg2 fromPid:(int)arg3 thenContinue:(/*^block*/id)arg4 ;
-(void)grantAccessClaim:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)addPresenter:(id)arg1 withID:(id)arg2 fileURL:(id)arg3 lastPresentedItemEventIdentifier:(id)arg4 ubiquityAttributes:(id)arg5 options:(unsigned long long)arg6 responses:(unsigned long long)arg7 ;
-(oneway void)removePresenterWithID:(id)arg1 ;
-(void)addProvider:(id)arg1 withID:(id)arg2 uniqueID:(id)arg3 forProvidedItemsURL:(id)arg4 options:(unsigned long long)arg5 withServer:(id)arg6 reply:(/*^block*/id)arg7 ;
-(oneway void)removeProviderWithID:(id)arg1 uniqueID:(id)arg2 ;
-(void)grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2 reply:(/*^block*/id)arg3 ;
-(oneway void)prepareToArbitrateForURLs:(id)arg1 ;
-(void)startArbitratingWithReply:(/*^block*/id)arg1 ;
-(void)getItemHasPresentersAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)provideDebugInfoWithLocalInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)provideSubarbiterDebugInfoIncludingEverything:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performBarrierWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithQueue:(id)arg1 isSubarbiter:(char)arg2 listener:(id)arg3 ;
-(id)rootNode;
-(void)_updateNodesForRemovedGroup:(id)arg1 andNewGroup:(id)arg2 alreadyOnQueue:(char)arg3 ;
-(void)_handleDiskEvent:(unsigned long long)arg1 forDisk:(DADiskRef)arg2 volumeURL:(CFURLRef)arg3 alreadyOnQueue:(char)arg4 ;
-(void)_registerForDebugInfoRequests;
-(void)_handleCanceledClient:(id)arg1 ;
-(void)_grantAccessClaim:(id)arg1 ;
-(void)_writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3 ;
-(void)_enumerateSubarbitersUsingBlock:(/*^block*/id)arg1 ;
-(void)_willRemoveReactor:(id)arg1 ;
-(void)_grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2 ;
-(char)_materializeProviderlessDirectoryAtURL:(id)arg1 error:(id*)arg2 ;
-(char)_addPresenter:(id)arg1 ofItemAtURL:(id)arg2 watchingFile:(char)arg3 withLastEventID:(id)arg4 ;
-(void)_removeReactorForID:(id)arg1 ;
-(char)_addProvider:(id)arg1 ofItemsAtURL:(id)arg2 ;
-(void)_startArbitratingItemsAtURLs:(id)arg1 withSuperarbitrationServer:(id)arg2 ;
-(void)_revokeAccessClaimForID:(id)arg1 fromLocal:(char)arg2 ;
-(void)_installImposterFirmlinksWithUUID:(id)arg1 firmlinkURL:(id)arg2 destinationURL:(id)arg3 withFirmlinkManifestURL:(id)arg4 ;
-(void)_renameImposterFirmlinksWithUUID:(id)arg1 toFirmlinkURL:(id)arg2 andDestinationURL:(id)arg3 withFirmlinkManifestURL:(id)arg4 ;
-(void)_uninstallImposterFirmlinksWithUUID:(id)arg1 ;
-(NSXPCConnection *)superarbitrationConnection;
-(void)makeProviderMaterializeFileAtURL:(id)arg1 kernelOperation:(unsigned)arg2 withRequestID:(id)arg3 fromProcess:(int)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)cancelMaterializationWithRequestID:(id)arg1 ;
@end
