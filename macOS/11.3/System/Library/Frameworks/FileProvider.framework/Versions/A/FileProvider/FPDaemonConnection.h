/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FPDDaemon, OS_dispatch_queue, OS_dispatch_source;
@class NSXPCConnection, NSObject, NSMutableDictionary;

@interface FPDaemonConnection : NSObject {

	NSXPCConnection*<FPDDaemon> _connectionQueueConnection;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSMutableDictionary* _getAttributeConnections;
	NSObject*<OS_dispatch_source> _getAttributeConnectionsIdleCleanupTimer;
	unsigned _user;
	NSXPCConnection*<FPDDaemon> _connection;

}

@property (nonatomic,readonly) NSXPCConnection*<FPDDaemon> connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) unsigned user;                                         //@synthesize user=_user - In the implementation block
+(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
+(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
+(id)sharedConnection;
+(id)connectionForUser:(unsigned)arg1 ;
+(id)newXPCConnection;
-(NSXPCConnection*<FPDDaemon>)connection;
-(unsigned)user;
-(void)setUser:(unsigned)arg1 ;
-(id)initWithUser:(unsigned)arg1 ;
-(void)providerDomainsCompletionHandler:(/*^block*/id)arg1 ;
-(void)_test_callFileProviderManagerAPIs:(/*^block*/id)arg1 ;
-(void)wakeUpForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)evictItemAtURL:(id)arg1 evenIfEnumeratingFP:(char)arg2 andClearACLForConsumer:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)updateLastUsedDateForFileURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)evictItemWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)pinItemWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)unpinItemWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchDomainServicerForProviderDomainID:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)extendBookmarkForFileURL:(id)arg1 toConsumerID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)forceIngestionForItemID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)forceIngestionForItemIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)createItemBasedOnTemplate:(id)arg1 fields:(unsigned long long)arg2 urlWrapper:(id)arg3 options:(unsigned long long)arg4 bounceOnCollision:(char)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)bookmarkableStringFromDocumentURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dumpStateTo:(id)arg1 limitNumberOfItems:(char)arg2 providerFilter:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)copyDatabaseForFPCKStartingAtPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)waitForStabilizationOfDomainWithID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_test_retrieveItemWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)makeTopologicallySortedItemsOnDisk:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getURLForContainerWithItemID:(id)arg1 inDataScopeDomainWithIdentifier:(id)arg2 documentsScopeDomainIdentifier:(id)arg3 documentsFolderItemIdentifier:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)backUpUserURL:(id)arg1 outputUserURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)restoreUserURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)extendSandboxForFileURL:(id)arg1 fromProviderID:(id)arg2 toConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)extendSandboxAndCreatePlaceholderForFileURL:(id)arg1 fromProviderID:(id)arg2 toConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)startProvidingItemAtURL:(id)arg1 fromProviderID:(id)arg2 forConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)providersCompletionHandler:(/*^block*/id)arg1 ;
-(id)bookmarkableStringFromDocumentURL:(id)arg1 error:(id*)arg2 ;
-(void)documentURLFromBookmarkableString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)documentURLFromBookmarkableString:(id)arg1 error:(id*)arg2 ;
-(void)unobserveWithToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)valuesForAttributes:(id)arg1 forItemAtURL:(id)arg2 error:(id*)arg3 ;
-(id)listOfMonitoredAppsWithError:(id*)arg1 ;
-(id)makeTopologicallySortedItemsOnDisk:(id)arg1 error:(id*)arg2 ;
@end

