/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SyncServices/ISyncSessionDriver.h>

@protocol ISyncSessionDriverDataSource;
@class ISyncClient, ISyncSession, NSObject, NSMutableArray, NSError;

@interface ISyncConcreteSessionDriver : ISyncSessionDriver {

	ISyncClient* _client;
	ISyncSession* _session;
	NSObject*<ISyncSessionDriverDataSource> _dataSource;
	id _delegate;
	long long _dataSourceSupportedMethodsHash;
	long long _delegateSupportedMethodsHash;
	NSMutableArray* _filteredEntityNames;
	char _inCallback;
	char _finishCalled;
	char _handlesSyncAlerts;
	char _failure;
	NSError* _lastError;

}
-(void)dealloc;
-(id)init;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)client;
-(char)sync;
-(id)dataSource;
-(void)_setDataSource:(id)arg1 ;
-(id)session;
-(id)lastError;
-(void)finishSyncing;
-(char)_sync:(char)arg1 ;
-(id)_initWithDataSource:(id)arg1 ;
-(char)startAsynchronousSync:(id*)arg1 ;
-(void)setHandlesSyncAlerts:(char)arg1 ;
-(char)handlesSyncAlerts;
-(void)_setClient:(id)arg1 ;
-(void)_hashDataSource;
-(void)_hashDelegate;
-(char)_registerClient;
-(char)_finishSession;
-(void)_setLastError:(id)arg1 ;
-(char)_beginSyncSession:(char)arg1 ;
-(char)_preSync;
-(char)_negotiateSyncSession;
-(char)_pushPhaseOfSession;
-(char)_pullPhaseOfSession;
-(void)_cancelSync:(id)arg1 ;
-(void)_doAsynchronousSync;
-(void)_doFullyAsynchronousSync;
-(void)_client:(id)arg1 mightWantToSyncEntityNames:(id)arg2 ;
-(id)_lastAnchorsFromClientForEntityNames:(id)arg1 sessionFinished:(char*)arg2 ;
-(id)_nextAnchorsFromClientForEntityNames:(id)arg1 sessionFinished:(char*)arg2 ;
@end
