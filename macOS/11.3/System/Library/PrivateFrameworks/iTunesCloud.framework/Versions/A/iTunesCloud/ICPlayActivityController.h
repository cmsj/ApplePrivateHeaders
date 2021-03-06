/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSOperationQueue, NSMutableDictionary, NSMutableArray, NSObject, ICPlayActivityTable, NSXPCConnection, NSString;

@interface ICPlayActivityController : NSObject {

	NSOperationQueue* _debugLogOperationQueue;
	NSMutableDictionary* _endpointIdentifierToEndpointRevisionInformation;
	int _endpointRevisionInformationDidChangeNotifyToken;
	char _hasAttemptedTableCreation;
	char _hasLoadedEndpointRevisionInformation;
	char _hasSetupEndpointRevisionInformationDidChangeNotifyToken;
	char _hasValidEndpointRevisionInformationDidChangeNotifyToken;
	NSMutableArray* _pendingFlushingSessions;
	NSObject*<OS_dispatch_queue> _serialQueue;
	ICPlayActivityTable* _table;
	NSXPCConnection* _daemonPlayActivityControllerConnection;
	NSString* _databasePath;
	unsigned long long _writingStyle;

}

@property (nonatomic,readonly) unsigned long long writingStyle;              //@synthesize writingStyle=_writingStyle - In the implementation block
+(id)_requiredEndpointIdentifiers;
-(void)dealloc;
-(id)init;
-(id)_table;
-(id)_daemonPlayActivityControllerConnection;
-(id)initWithWritingStyle:(unsigned long long)arg1 ;
-(id)initWithWritingStyle:(unsigned long long)arg1 databasePath:(id)arg2 ;
-(void)acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withStoreAccountID:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)completePendingPlayActivityEvents:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)completePendingPlayActivityEventPersistentIDs:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)flushPendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)getHasPendingPlayEventsForEndpointIdentifier:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)getRevisionInformationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getPlayActivityEventsFromRevision:(unsigned long long)arg1 toRevision:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)recordPlayActivityEvents:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeFlushedPlayActivityEventsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removePlayActivityEventsUpToRevision:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setCurrentRevision:(unsigned long long)arg1 revisionVersionToken:(id)arg2 forEndpointIdentifier:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)_acquirePendingPlayActivityEventsForEndpointIdentifier:(id)arg1 withStoreAccountID:(unsigned long long)arg2 shouldFilterStoreAccountID:(char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_completePendingPlayEventsWithRevisionIndexSet:(id)arg1 forSessionToken:(unsigned long long)arg2 withResult:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_copyEndpointRevisionInformationForEndpointIdentifier:(id)arg1 ;
-(void)_getFlushSessionInformationForEndpointIdentifier:(id)arg1 shouldAcquire:(char)arg2 storeAccountID:(unsigned long long)arg3 shouldFilterStoreAccountID:(char)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(void)_loadEndpointIdentifierInformationIfNeeded;
-(id)_revisionsIndexSetForPlayActivityEvents:(id)arg1 ;
-(id)_revisionsIndexSetForPlayActivityEventPersistentIDs:(id)arg1 ;
-(id)_sessionInformationForSessionToken:(unsigned long long)arg1 ;
-(char)_setEndpointRevisionInformation:(id)arg1 forEndpointIdentifier:(id)arg2 ;
-(void)_setupNotifyTokenIfNeeded;
-(unsigned long long)writingStyle;
@end

