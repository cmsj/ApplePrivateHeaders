/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue, NSMutableArray, NSCountedSet, CalManagedObjectContext, NSManagedObjectID, NSString;

@interface CalOperationQueue : NSObject {

	NSOperationQueue* _queue;
	NSMutableArray* _operations;
	NSMutableArray* _debugOperations;
	NSCountedSet* _writeOperationsCountedSet;
	CalManagedObjectContext* _context;
	long long _lastSequenceNumberProcessed;
	NSManagedObjectID* _objectID;
	NSString* _sessionID;

}

@property (retain,readonly) NSManagedObjectID * objectID;              //@synthesize objectID=_objectID - In the implementation block
@property (retain) NSString * sessionID;                               //@synthesize sessionID=_sessionID - In the implementation block
-(void)run;
-(void)dealloc;
-(void)invalidate;
-(void)addOperation:(id)arg1 ;
-(id)operations;
-(NSManagedObjectID *)objectID;
-(char)isBusy;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(void)removeOperation:(id)arg1 ;
-(void)managedObjectContextDidSave:(id)arg1 ;
-(id)initWithSessionID:(id)arg1 ;
-(void)processChangeRequests;
-(id)initWithSessionID:(id)arg1 testConnection:(char)arg2 ;
-(id)initWithSessionID:(id)arg1 testConnection:(char)arg2 sessionIDIsObjectID:(char)arg3 ;
-(void)_createQueueContext;
-(void)calendarStoreResetExternally:(id)arg1 ;
-(void)testConnection;
-(void)_fetchPersistentOperations;
-(void)_removeOperationInvokedByQueue:(id)arg1 andExecute:(char)arg2 saveContextIfNeeded:(char)arg3 ;
-(void)_notifyListenersThatOperationFinished:(id)arg1 ;
-(void)_fetchPersistentOperationsInvokedByQueueAndExecute:(char)arg1 ;
-(id)_persistentOperationsForSessionID:(id)arg1 largerThanSequenceNumber:(long long)arg2 inManagedObjectContext:(id)arg3 ;
-(void)_addOperationInvokedByQueue:(id)arg1 andExecute:(char)arg2 ;
-(void)executeOperations;
-(void)_fetchPersistentOperationsInvokedByQueue;
-(void)_performSelectorOnQueue:(SEL)arg1 withObject:(id)arg2 ;
-(void)_notifyListenersQueueChanged;
-(void)_removeOperationInvokedByQueue:(id)arg1 ;
-(void)_addOperationInvokedByQueue:(id)arg1 ;
-(void)_testConnectionInvokedByQueue;
-(void)_revertOperationInvokedByQueue:(id)arg1 ;
-(void)addOperationToInternalQueue:(id)arg1 ;
-(void)_calendarStoreResetExternallyInvokedByQueue:(id)arg1 ;
-(void)_mergeChangesFromContextDidSaveNotificationInvokedByQueue:(id)arg1 ;
-(void)revertOperation:(id)arg1 ;
-(char)isItemLocallyModifiedForObjectID:(id)arg1 ;
@end
