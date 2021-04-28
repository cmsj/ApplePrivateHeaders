/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSSQLiteConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, AMSSQLiteConnection, NSObject;

@interface AMSMetricsDatabase : NSObject <AMSSQLiteConnectionDelegate> {

	NSString* _containerId;
	AMSSQLiteConnection* _connection;
	NSObject*<OS_dispatch_queue> _internalQueue;
	long long _keepAliveCount;

}

@property (retain) AMSSQLiteConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (assign) long long keepAliveCount;                                //@synthesize keepAliveCount=_keepAliveCount - In the implementation block
@property (retain) NSString * containerId;                                  //@synthesize containerId=_containerId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDatabaseWithContainerId:(id)arg1 ;
-(void)dealloc;
-(void)close;
-(AMSSQLiteConnection *)connection;
-(void)setConnection:(AMSSQLiteConnection *)arg1 ;
-(NSString *)containerId;
-(void)setContainerId:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)clearIdentifierSyncStateWithError:(id*)arg1 ;
-(char)enumerateUnsyncedIdentifierStoresUsingBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(char)enumerateUnsyncedIdentifiersUsingBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(char)removeCrossDeviceIdentifiersWithError:(id*)arg1 ;
-(char)permanentlyRemoveIdentifierForKey:(id)arg1 error:(id*)arg2 ;
-(id)identifierStoreForKey:(id)arg1 updateMaybe:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)identifierForKey:(id)arg1 updateMaybe:(/*^block*/id)arg2 error:(id*)arg3 ;
-(char)cleanupInvalidIdentifiersWithError:(id*)arg1 ;
-(char)removeIdentifiersForAccount:(id)arg1 error:(id*)arg2 ;
-(id)initWithContainerId:(id)arg1 ;
-(void)_performTransaction:(/*^block*/id)arg1 ;
-(id)_lockedById;
-(char)connectionNeedsResetForCorruption:(id)arg1 ;
-(long long)countAllEventsWithLockKey:(id)arg1 error:(id*)arg2 ;
-(char)dropAllEventsWithLockKey:(id)arg1 error:(id*)arg2 ;
-(char)dropEvents:(id)arg1 error:(id*)arg2 ;
-(void)enumerateEventsWithTopic:(id)arg1 lockKey:(id)arg2 objectBlock:(/*^block*/id)arg3 ;
-(char)insertEvents:(id)arg1 error:(id*)arg2 ;
-(id)lockAllEventsWithError:(id*)arg1 ;
-(char)unlockAllEventsWithKey:(id)arg1 error:(id*)arg2 ;
-(char)unlockEvents:(id)arg1 error:(id*)arg2 ;
-(long long)keepAliveCount;
-(void)setKeepAliveCount:(long long)arg1 ;
@end
